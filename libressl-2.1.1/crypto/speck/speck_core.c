/* $OpenBSD: aes_core.c,v 1.10 2014/06/12 15:49:27 deraadt Exp $ */
/*SE METTRE UNE LICENCE ICI
 */

/* Note: rewritten a little bit to provide error control and an OpenSSL-
 *   compatible API */

#ifndef SPECK_DEBUG
# ifndef NDEBUG
#  define NDEBUG
# endif
#endif
#include <assert.h>
#include <stdlib.h>
#include <openssl/speck.h>

#define _lrotr(x,n,w) (((x) >> (n)) | ((x) << (w-(n))))
#define _lrotl(x,n,w) (((x) << (n)) | ((x) >> (w-(n))))


/*
 * struct speck_key_st {
    u64 l[35];
    u64 k[32];
    u8 m;
    u8 t;
};
 */
int SPECK_set_encrypt_key(const unsigned char *userKey, const int bits, SPECK_KEY *key){
        u8 alpha = 8, beta = 3;
        if (!userKey || !key)
                return -1;
        if (bits != 128 && bits != 192 && bits != 256)
                return -2;
//        rk = key->rd_key;

        switch (bits) {
            case 128:
                key->m = 2;
                key->t = 32;
                key->l[0] = GETU64(userKey);
                key->k[0] = GETU64(userKey + 8);
                break;
            case 192:
                key->m = 3;
                key->t = 33;
                key->l[1] = GETU64(userKey);
                key->l[0] = GETU64(userKey + 8);
                key->k[0] = GETU64(userKey + 16);
                break;
            case 256:
                key->m = 4;
                key->t = 34;
                (key->l)[2] = GETU64(userKey);
                (key->l)[1] = GETU64(userKey + 8);
                (key->l)[0] = GETU64(userKey + 16);
                (key->k)[0] = GETU64(userKey + 24);
                break;
            default:
                return -3;
                break;
        }  
        //-----Expanding key-----
        u8 i;
        for(i=0;i<(key->t)-1;i++){
            (key->l)[i+(key->m)-1] = ((key->k)[i] + _lrotr((key->l)[i],alpha,64))^i;
            (key->k)[i+1] = (key->l)[i+(key->m)-1] ^ _lrotl((key->k)[i],beta,64);
        }
        return 0;
}


int SPECK_set_decrypt_key(const unsigned char *userKey, const int bits, SPECK_KEY *key){
        u8 alpha = 8, beta = 3;
        if (!userKey || !key)
                return -1;
        if (bits != 128 && bits != 192 && bits != 256)
                return -2;
//        rk = key->rd_key;

        switch (bits) {
            case 128:
                key->m = 2;
                key->t = 32;
                key->l[0] = GETU64(userKey);
                key->k[0] = GETU64(userKey + 8);
                break;
            case 192:
                key->m = 3;
                key->t = 33;
                key->l[1] = GETU64(userKey);
                key->l[0] = GETU64(userKey + 8);
                key->k[0] = GETU64(userKey + 16);
                break;
            case 256:
                key->m = 4;
                key->t = 34;
                (key->l)[2] = GETU64(userKey);
                (key->l)[1] = GETU64(userKey + 8);
                (key->l)[0] = GETU64(userKey + 16);
                (key->k)[0] = GETU64(userKey + 24);
                break;
            default:
                return -3;
                break;
        }  
        //-----Expanding key-----
        u8 i;
        for(i=0;i<(key->t)-1;i++){
            (key->l)[i+(key->m)-1] = ((key->k)[i] + _lrotr((key->l)[i],alpha,64))^i;
            (key->k)[i+1] = (key->l)[i+(key->m)-1] ^ _lrotl((key->k)[i],beta,64);
        }
        return 0;
}

/*
 * Encrypt a single block
 * in and out can overlap
 */

void SPECK_encrypt(const unsigned char *in, unsigned char *out, const SPECK_KEY *key){
    u8 alpha = 8, beta = 3;
    u8 i;
    //-------Transforming input------
    u64 pt[2] = {0};
    u64 ct[2] = {0};
    pt[0] = GETU64(in);
    pt[1] = GETU64(in + 8);   
    
    //------Encrypting-------
    ct[0] = pt[0];
    ct[1] = pt[1];
    for(i=0; i<(key->t); i++){
        ct[0] = (_lrotr(ct[0],alpha,64) + ct[1]) ^ ((key->k)[i]);
        ct[1] = _lrotl(ct[1],beta,64) ^ ct[0];
    }
    
    //------Transforming output------
    PUTU64(out,ct[0]);
    PUTU64(out + 8, ct[1]);   
}


void SPECK_decrypt(const unsigned char *in, unsigned char *out, const SPECK_KEY *key){
    u8 alpha = 8, beta = 3;
    u8 i;
    //-------Transforming input------
    u64 pt[2] = {0};
    u64 ct[2] = {0};
    ct[0] = GETU64(in);
    ct[1] = GETU64(in + 8);
    
    //------Decrypting-------
    pt[0] = ct[0];
    pt[1] = ct[1];
    for(i=0; i<(key->t); i++) {
        pt[1] = _lrotr((pt[0] ^ pt[1]), beta, 64);
        pt[0] = _lrotl((pt[0] ^ (key->k)[((key->t)-1) - i]) - pt[1], alpha, 64);
    }    
    PUTU64(out, pt[0]);
    PUTU64(out + 8, pt[1]);
}

/*


void SPECK_encrypt(u64 pt[], u64 ct[], u64 k[], u16 key_size, u8 n){
  
    
    //-----Encrypting-----
    u8 i;
    ct[0] = pt[0];
    ct[1] = pt[1];
    for(i=0; i<T; i++){
        ct[0] = (_lrotr(ct[0],alpha,n) + ct[1]) ^ k[i];
        ct[1] = _lrotl(ct[1],beta,n) ^ ct[0];
    } 
    
}
*/



#include <openssl/opensslconf.h>

#ifndef OPENSSL_NO_SPECK

#include <openssl/speck.h>
#include <openssl/err.h>
#include <openssl/evp.h>
#include <openssl/rand.h>

#include "evp_locl.h"
#include "modes_lcl.h"



typedef struct {
    SPECK_KEY ks;
    block128_f block;
    /*
     *        union {
     *                cbc128_f cbc;
     *                ctr128_f ctr;
} stream;
*/
    cbc128_f cbc;
} EVP_SPECK_KEY;

//EVP_speck_128_cbc()

static int
speck_init_key(EVP_CIPHER_CTX *ctx, const unsigned char *key,
               const unsigned char *iv, int enc);
static int
speck_cbc_cipher(EVP_CIPHER_CTX *ctx, unsigned char *out,
                 const unsigned char *in, size_t len);


// BLOCK_CIPHER_generic_pack(NID_aes, 128, EVP_CIPH_FLAG_FIPS)
//BLOCK_CIPHER_generic_pack(NID_aes, 192, EVP_CIPH_FLAG_FIPS)
//BLOCK_CIPHER_generic_pack(NID_aes, 256, EVP_CIPH_FLAG_FIPS)

static const EVP_CIPHER speck_128_cbc = {                       
    .nid = NID_speck_128_cbc,                                  
    .block_size = 16,                                        
    .key_len = 128 / 8,                                          
    .iv_len = 16,                                                
    .flags = EVP_CIPH_FLAG_DEFAULT_ASN1 | EVP_CIPH_FLAG_FIPS | EVP_CIPH_CBC_MODE,                           
    .init = speck_init_key,                                           
    .do_cipher = speck_cbc_cipher,                               
    .ctx_size = sizeof(EVP_SPECK_KEY)                                 
};

static const EVP_CIPHER speck_192_cbc = {                       
    .nid = NID_speck_192_cbc,                                  
    .block_size = 16,                                        
    .key_len = 192 / 8,                                          
    .iv_len = 16,                                                
    .flags = EVP_CIPH_FLAG_DEFAULT_ASN1 | EVP_CIPH_FLAG_FIPS | EVP_CIPH_CBC_MODE,                           
    .init = speck_init_key,                                           
    .do_cipher = speck_cbc_cipher,                               
    .ctx_size = sizeof(EVP_SPECK_KEY)                                 
};

static const EVP_CIPHER speck_256_cbc = {                       
    .nid = NID_speck_256_cbc,                                  
    .block_size = 16,                                        
    .key_len = 256 / 8,                                          
    .iv_len = 16,                                                
    .flags = EVP_CIPH_FLAG_DEFAULT_ASN1 | EVP_CIPH_FLAG_FIPS | EVP_CIPH_CBC_MODE,                           
    .init = speck_init_key,                                           
    .do_cipher = speck_cbc_cipher,                               
    .ctx_size = sizeof(EVP_SPECK_KEY)                                 
};

static int
speck_init_key(EVP_CIPHER_CTX *ctx, const unsigned char *key,
               const unsigned char *iv, int enc)
{
    int ret, mode;
    EVP_SPECK_KEY *dat = (EVP_SPECK_KEY *)ctx->cipher_data;    
    mode = ctx->cipher->flags & EVP_CIPH_MODE;
    if (mode == EVP_CIPH_CBC_MODE && !enc)        
    {
        ret = SPECK_set_decrypt_key(key, ctx->key_len * 8,
                                  &dat->ks);
        dat->block = (block128_f)SPECK_decrypt;
        dat->cbc = (cbc128_f)SPECK_cbc_encrypt;
    } else
    {
        ret = SPECK_set_encrypt_key(key, ctx->key_len * 8,
                                  &dat->ks);
        dat->block = (block128_f)SPECK_encrypt;
        dat->cbc = (cbc128_f)SPECK_cbc_encrypt;
    }
    
    if (ret < 0) {
        /*
         * ATTENTION : Commenter par mes soins
         */
        //EVPerr(EVP_F_SPECK_INIT_KEY, EVP_R_SPECK_KEY_SETUP_FAILED);
        return 0;
    }
    
    return 1;
}

static int
speck_cbc_cipher(EVP_CIPHER_CTX *ctx, unsigned char *out,
                 const unsigned char *in, size_t len)
{
    EVP_SPECK_KEY *dat = (EVP_SPECK_KEY *)ctx->cipher_data;
    
    if (dat->cbc)
        (*dat->cbc)(in, out, len, &dat->ks, ctx->iv,
                           ctx->encrypt);
        else if (ctx->encrypt)
            CRYPTO_cbc128_encrypt(in, out, len, &dat->ks, ctx->iv,
                                  dat->block);
            else
                CRYPTO_cbc128_decrypt(in, out, len, &dat->ks, ctx->iv,
                                      dat->block);
                
                return 1;
}


#endif
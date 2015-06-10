/*
 * Copyright (c) 2014 Thomas Gerbet <thomas@gerbet.me>
 *
 * Permission to use, copy, modify, and distribute this software for any
 * purpose with or without fee is hereby granted, provided that the above
 * copyright notice and this permission notice appear in all copies.
 *
 * THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
 * WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR
 * ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
 * WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN
 * ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF
 * OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
 */

#ifndef HEADER_SPECK_H
#define HEADER_SPECK_H

#include <openssl/opensslconf.h>

#if defined(OPENSSL_NO_SPECK)
#error SPECK is disabled.
#endif

#include <stddef.h>
#include <stdint.h>

#define SPECK_BLOCK_SIZE 16 //Size in bytes
#define SPECK_ENCRYPT     1
#define SPECK_DECRYPT     0

//Pris d'AES_LOCL
#define GETU64(pt) (((u64)(pt)[0] << 56) ^ ((u64)(pt)[1] << 48) ^ ((u64)(pt)[2] <<  40) ^ ((u64)(pt)[3] << 32) ^ ((u64)(pt)[4] << 24) ^ ((u64)(pt)[5] << 16) ^ ((u64)(pt)[6] << 8) ^ ((u64)(pt)[7]))
#define PUTU64(ct, st) { (ct)[0] = (u8)((st) >> 56); (ct)[1] = (u8)((st) >> 48); (ct)[2] = (u8)((st) >>  40); (ct)[3] = (u8)((st) >>  32); (ct)[4] = (u8)((st) >>  24); (ct)[5] = (u8)((st) >>  16); (ct)[6] = (u8)((st) >>  8); (ct)[7] = (u8)(st); }


#ifdef  __cplusplus
extern "C" {
#endif

    
typedef uint64_t u64;
typedef uint32_t u32;
typedef uint16_t u16;
typedef uint8_t u8;
/*
int AES_set_encrypt_key(const unsigned char *userKey, const int bits,
    AES_KEY *key);
int AES_set_decrypt_key(const unsigned char *userKey, const int bits,
    AES_KEY *key);

void AES_encrypt(const unsigned char *in, unsigned char *out,
    const AES_KEY *key);
void AES_decrypt(const unsigned char *in, unsigned char *out,
    const AES_KEY *key);
void AES_cbc_encrypt(const unsigned char *in, unsigned char *out,
    size_t length, const AES_KEY *key, unsigned char *ivec, const int enc);
    
    */

/*
 * Fonctions initiales :
void SPECK_expand_key(u64 l[], u64 k[], u16 key_size, u8 n);
void SPECK_encrypt(u64 pt[], u64 ct[], u64 k[], u16 key_size, u8 n);
*/



struct speck_key_st {
    u64 l[35];
    u64 k[32];
    u8 m;
    u8 t;
};
typedef struct speck_key_st SPECK_KEY;

/*--------Fonctions en vue d'intégration pour ressemblance AES------------*/
int SPECK_set_encrypt_key(const unsigned char *userKey, const int bits, SPECK_KEY *key);
int SPECK_set_decrypt_key(const unsigned char *userKey, const int bits, SPECK_KEY *key);
void SPECK_encrypt(const unsigned char *in, unsigned char *out, const SPECK_KEY *key);
void SPECK_cbc_encrypt(const unsigned char *in, unsigned char *out,
    size_t length, const SPECK_KEY *key, unsigned char *ivec, const int enc);
//Not yet implemented
void SPECK_decrypt(const unsigned char *in, unsigned char *out, const SPECK_KEY *key);


#ifdef  __cplusplus
}
#endif
#endif

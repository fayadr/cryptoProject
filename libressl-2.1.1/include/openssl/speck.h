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

#ifdef  __cplusplus
extern "C" {
#endif

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
void SPECK_expand_key(u64 l[], u64 k[], u16 key_size, u8 n);
void SPECK_encrypt(u64 pt[], u64 ct[], u64 k[], u16 key_size, u8 n);


#ifdef  __cplusplus
}
#endif


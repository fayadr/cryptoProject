/* $OpenBSD: aes_core.c,v 1.10 2014/06/12 15:49:27 deraadt Exp $ */
/**
 * rijndael-alg-fst.c
 *
 * @version 1.0 (April 2015)
 *
 * Optimised ANSI C code for the Rijndael cipher (now AES)
 *
 * @author Vincent Rijmen <vincent.rijmen@esat.kuleuven.ac.be>
 *
 * This code is hereby placed in the public domain.
 *
 * THIS SOFTWARE IS PROVIDED BY THE AUTHORS ''AS IS'' AND ANY EXPRESS
 * OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE AUTHORS OR CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR
 * BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
 * WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE
 * OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE,
 * EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

/* Note: rewritten a little bit to provide error control and an OpenSSL-
 *   compatible API */

#ifndef SPECK_DEBUG
# ifndef NDEBUG
#  define NDEBUG
# endif
#endif
#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include <openssl/speck.h>

#define _lrotr(x,n,w) (((x) >> (n)) | ((x) << (w-(n))))
#define _lrotl(x,n,w) (((x) << (n)) | ((x) >> (w-(n))))
typedef uint64_t u64;
typedef uint32_t u32;
typedef uint16_t u16;
typedef uint8_t u8;


void SPECK_expand_key(u64 l[], u64 k[], u16 key_size, u8 n){
    u8 m = 0, alpha = 0, beta = 0, T = 0;
    /*-----Pre-processing-----*/
    switch (key_size) {
        case 128:
            m = 2;
            T = 32;
            break;
        case 192:
            m = 3;
            T = 33;
            break;
        case 256:
            m = 4;
            T = 34;
            break;
        default:
            fprintf(stderr,"key_size problem when expanding key.\n");
            exit(1);
            break;
    }
    alpha = 8;
    beta = 3;  
    /*-----Expanding key-----*/
    u8 i;
    for(i=0;i<T-1;i++){
        l[i+m-1] = (k[i] + _lrotr(l[i],alpha,n))^i;
        k[i+1] = l[i+m-1] ^ _lrotl(k[i],beta,n);
    }
}

void SPECK_encrypt(u64 pt[], u64 ct[], u64 k[], u16 key_size, u8 n){
    u8 m = 0, alpha = 0, beta = 0, T = 0;
    switch (key_size) {
        case 128:
            m = 2;
            T = 32;
            break;
        case 192:
            m = 3;
            T = 33;
            break;
        case 256:
            m = 4;
            T = 34;
            break;
        default:
            fprintf(stderr,"key_size problem when encrypting key.\n");
            exit(1);
            break;
    }
    alpha = 8;
    beta = 3;   
    
    /*-----Encrypting-----*/
    u8 i;
    ct[0] = pt[0];
    ct[1] = pt[1];
    for(i=0; i<T; i++){
        ct[0] = (_lrotr(ct[0],alpha,n) + ct[1]) ^ k[i];
        ct[1] = _lrotl(ct[1],beta,n) ^ ct[0];
    } 
    
}



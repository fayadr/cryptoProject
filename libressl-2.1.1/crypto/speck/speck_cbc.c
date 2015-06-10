#include <openssl/speck.h>
#include <openssl/modes.h>

void
SPECK_cbc_encrypt(const unsigned char *in, unsigned char *out,
    size_t len, const SPECK_KEY *key, unsigned char *ivec, const int enc)
{
        if (enc)
                CRYPTO_cbc128_encrypt(in, out, len, key, ivec,
                    (block128_f)SPECK_encrypt);
        else
                CRYPTO_cbc128_decrypt(in, out, len, key, ivec,
                    (block128_f)SPECK_decrypt);
}
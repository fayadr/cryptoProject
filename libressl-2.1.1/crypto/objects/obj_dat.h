/* crypto/objects/obj_dat.h */

/* THIS FILE IS GENERATED FROM objects.h by obj_dat.pl via the
 * following command:
 * perl obj_dat.pl obj_mac.h obj_dat.h
 */

/* Copyright (C) 1995-1997 Eric Young (eay@cryptsoft.com)
 * All rights reserved.
 *
 * This package is an SSL implementation written
 * by Eric Young (eay@cryptsoft.com).
 * The implementation was written so as to conform with Netscapes SSL.
 * 
 * This library is free for commercial and non-commercial use as long as
 * the following conditions are aheared to.  The following conditions
 * apply to all code found in this distribution, be it the RC4, RSA,
 * lhash, DES, etc., code; not just the SSL code.  The SSL documentation
 * included with this distribution is covered by the same copyright terms
 * except that the holder is Tim Hudson (tjh@cryptsoft.com).
 * 
 * Copyright remains Eric Young's, and as such any Copyright notices in
 * the code are not to be removed.
 * If this package is used in a product, Eric Young should be given attribution
 * as the author of the parts of the library used.
 * This can be in the form of a textual message at program startup or
 * in documentation (online or textual) provided with the package.
 * 
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 * 3. All advertising materials mentioning features or use of this software
 *    must display the following acknowledgement:
 *    "This product includes cryptographic software written by
 *     Eric Young (eay@cryptsoft.com)"
 *    The word 'cryptographic' can be left out if the rouines from the library
 *    being used are not cryptographic related :-).
 * 4. If you include any Windows specific code (or a derivative thereof) from 
 *    the apps directory (application code) you must include an acknowledgement:
 *    "This product includes software written by Tim Hudson (tjh@cryptsoft.com)"
 * 
 * THIS SOFTWARE IS PROVIDED BY ERIC YOUNG ``AS IS'' AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE AUTHOR OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
 * OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 * 
 * The licence and distribution terms for any publically available version or
 * derivative of this code cannot be changed.  i.e. this code cannot simply be
 * copied and put under another distribution licence
 * [including the GNU Public Licence.]
 */

#define NUM_NID 944
#define NUM_SN 944
#define NUM_LN 944
#define NUM_OBJ 885

static const unsigned char lvalues[6226]={
0x2A,                                        /* [  0] OBJ_member_body */
0x2B,                                        /* [  1] OBJ_identified_organization */
0x2B,0x06,0x01,0x05,0x05,0x08,0x01,0x01,     /* [  2] OBJ_hmac_md5 */
0x2B,0x06,0x01,0x05,0x05,0x08,0x01,0x02,     /* [ 10] OBJ_hmac_sha1 */
0x2B,0x81,0x04,                              /* [ 18] OBJ_certicom_arc */
0x67,                                        /* [ 21] OBJ_international_organizations */
0x67,0x2B,                                   /* [ 22] OBJ_wap */
0x67,0x2B,0x01,                              /* [ 24] OBJ_wap_wsg */
0x55,0x01,0x05,                              /* [ 27] OBJ_selected_attribute_types */
0x55,0x01,0x05,0x37,                         /* [ 30] OBJ_clearance */
0x2A,0x86,0x48,                              /* [ 34] OBJ_ISO_US */
0x2A,0x86,0x48,0xCE,0x38,                    /* [ 37] OBJ_X9_57 */
0x2A,0x86,0x48,0xCE,0x38,0x04,               /* [ 42] OBJ_X9cm */
0x2A,0x86,0x48,0xCE,0x38,0x04,0x01,          /* [ 48] OBJ_dsa */
0x2A,0x86,0x48,0xCE,0x38,0x04,0x03,          /* [ 55] OBJ_dsaWithSHA1 */
0x2A,0x86,0x48,0xCE,0x3D,                    /* [ 62] OBJ_ansi_X9_62 */
0x2A,0x86,0x48,0xCE,0x3D,0x01,0x01,          /* [ 67] OBJ_X9_62_prime_field */
0x2A,0x86,0x48,0xCE,0x3D,0x01,0x02,          /* [ 74] OBJ_X9_62_characteristic_two_field */
0x2A,0x86,0x48,0xCE,0x3D,0x01,0x02,0x03,     /* [ 81] OBJ_X9_62_id_characteristic_two_basis */
0x2A,0x86,0x48,0xCE,0x3D,0x01,0x02,0x03,0x01,/* [ 89] OBJ_X9_62_onBasis */
0x2A,0x86,0x48,0xCE,0x3D,0x01,0x02,0x03,0x02,/* [ 98] OBJ_X9_62_tpBasis */
0x2A,0x86,0x48,0xCE,0x3D,0x01,0x02,0x03,0x03,/* [107] OBJ_X9_62_ppBasis */
0x2A,0x86,0x48,0xCE,0x3D,0x02,0x01,          /* [116] OBJ_X9_62_id_ecPublicKey */
0x2A,0x86,0x48,0xCE,0x3D,0x03,0x00,0x01,     /* [123] OBJ_X9_62_c2pnb163v1 */
0x2A,0x86,0x48,0xCE,0x3D,0x03,0x00,0x02,     /* [131] OBJ_X9_62_c2pnb163v2 */
0x2A,0x86,0x48,0xCE,0x3D,0x03,0x00,0x03,     /* [139] OBJ_X9_62_c2pnb163v3 */
0x2A,0x86,0x48,0xCE,0x3D,0x03,0x00,0x04,     /* [147] OBJ_X9_62_c2pnb176v1 */
0x2A,0x86,0x48,0xCE,0x3D,0x03,0x00,0x05,     /* [155] OBJ_X9_62_c2tnb191v1 */
0x2A,0x86,0x48,0xCE,0x3D,0x03,0x00,0x06,     /* [163] OBJ_X9_62_c2tnb191v2 */
0x2A,0x86,0x48,0xCE,0x3D,0x03,0x00,0x07,     /* [171] OBJ_X9_62_c2tnb191v3 */
0x2A,0x86,0x48,0xCE,0x3D,0x03,0x00,0x08,     /* [179] OBJ_X9_62_c2onb191v4 */
0x2A,0x86,0x48,0xCE,0x3D,0x03,0x00,0x09,     /* [187] OBJ_X9_62_c2onb191v5 */
0x2A,0x86,0x48,0xCE,0x3D,0x03,0x00,0x0A,     /* [195] OBJ_X9_62_c2pnb208w1 */
0x2A,0x86,0x48,0xCE,0x3D,0x03,0x00,0x0B,     /* [203] OBJ_X9_62_c2tnb239v1 */
0x2A,0x86,0x48,0xCE,0x3D,0x03,0x00,0x0C,     /* [211] OBJ_X9_62_c2tnb239v2 */
0x2A,0x86,0x48,0xCE,0x3D,0x03,0x00,0x0D,     /* [219] OBJ_X9_62_c2tnb239v3 */
0x2A,0x86,0x48,0xCE,0x3D,0x03,0x00,0x0E,     /* [227] OBJ_X9_62_c2onb239v4 */
0x2A,0x86,0x48,0xCE,0x3D,0x03,0x00,0x0F,     /* [235] OBJ_X9_62_c2onb239v5 */
0x2A,0x86,0x48,0xCE,0x3D,0x03,0x00,0x10,     /* [243] OBJ_X9_62_c2pnb272w1 */
0x2A,0x86,0x48,0xCE,0x3D,0x03,0x00,0x11,     /* [251] OBJ_X9_62_c2pnb304w1 */
0x2A,0x86,0x48,0xCE,0x3D,0x03,0x00,0x12,     /* [259] OBJ_X9_62_c2tnb359v1 */
0x2A,0x86,0x48,0xCE,0x3D,0x03,0x00,0x13,     /* [267] OBJ_X9_62_c2pnb368w1 */
0x2A,0x86,0x48,0xCE,0x3D,0x03,0x00,0x14,     /* [275] OBJ_X9_62_c2tnb431r1 */
0x2A,0x86,0x48,0xCE,0x3D,0x03,0x01,0x01,     /* [283] OBJ_X9_62_prime192v1 */
0x2A,0x86,0x48,0xCE,0x3D,0x03,0x01,0x02,     /* [291] OBJ_X9_62_prime192v2 */
0x2A,0x86,0x48,0xCE,0x3D,0x03,0x01,0x03,     /* [299] OBJ_X9_62_prime192v3 */
0x2A,0x86,0x48,0xCE,0x3D,0x03,0x01,0x04,     /* [307] OBJ_X9_62_prime239v1 */
0x2A,0x86,0x48,0xCE,0x3D,0x03,0x01,0x05,     /* [315] OBJ_X9_62_prime239v2 */
0x2A,0x86,0x48,0xCE,0x3D,0x03,0x01,0x06,     /* [323] OBJ_X9_62_prime239v3 */
0x2A,0x86,0x48,0xCE,0x3D,0x03,0x01,0x07,     /* [331] OBJ_X9_62_prime256v1 */
0x2A,0x86,0x48,0xCE,0x3D,0x04,0x01,          /* [339] OBJ_ecdsa_with_SHA1 */
0x2A,0x86,0x48,0xCE,0x3D,0x04,0x02,          /* [346] OBJ_ecdsa_with_Recommended */
0x2A,0x86,0x48,0xCE,0x3D,0x04,0x03,          /* [353] OBJ_ecdsa_with_Specified */
0x2A,0x86,0x48,0xCE,0x3D,0x04,0x03,0x01,     /* [360] OBJ_ecdsa_with_SHA224 */
0x2A,0x86,0x48,0xCE,0x3D,0x04,0x03,0x02,     /* [368] OBJ_ecdsa_with_SHA256 */
0x2A,0x86,0x48,0xCE,0x3D,0x04,0x03,0x03,     /* [376] OBJ_ecdsa_with_SHA384 */
0x2A,0x86,0x48,0xCE,0x3D,0x04,0x03,0x04,     /* [384] OBJ_ecdsa_with_SHA512 */
0x2B,0x81,0x04,0x00,0x06,                    /* [392] OBJ_secp112r1 */
0x2B,0x81,0x04,0x00,0x07,                    /* [397] OBJ_secp112r2 */
0x2B,0x81,0x04,0x00,0x1C,                    /* [402] OBJ_secp128r1 */
0x2B,0x81,0x04,0x00,0x1D,                    /* [407] OBJ_secp128r2 */
0x2B,0x81,0x04,0x00,0x09,                    /* [412] OBJ_secp160k1 */
0x2B,0x81,0x04,0x00,0x08,                    /* [417] OBJ_secp160r1 */
0x2B,0x81,0x04,0x00,0x1E,                    /* [422] OBJ_secp160r2 */
0x2B,0x81,0x04,0x00,0x1F,                    /* [427] OBJ_secp192k1 */
0x2B,0x81,0x04,0x00,0x20,                    /* [432] OBJ_secp224k1 */
0x2B,0x81,0x04,0x00,0x21,                    /* [437] OBJ_secp224r1 */
0x2B,0x81,0x04,0x00,0x0A,                    /* [442] OBJ_secp256k1 */
0x2B,0x81,0x04,0x00,0x22,                    /* [447] OBJ_secp384r1 */
0x2B,0x81,0x04,0x00,0x23,                    /* [452] OBJ_secp521r1 */
0x2B,0x81,0x04,0x00,0x04,                    /* [457] OBJ_sect113r1 */
0x2B,0x81,0x04,0x00,0x05,                    /* [462] OBJ_sect113r2 */
0x2B,0x81,0x04,0x00,0x16,                    /* [467] OBJ_sect131r1 */
0x2B,0x81,0x04,0x00,0x17,                    /* [472] OBJ_sect131r2 */
0x2B,0x81,0x04,0x00,0x01,                    /* [477] OBJ_sect163k1 */
0x2B,0x81,0x04,0x00,0x02,                    /* [482] OBJ_sect163r1 */
0x2B,0x81,0x04,0x00,0x0F,                    /* [487] OBJ_sect163r2 */
0x2B,0x81,0x04,0x00,0x18,                    /* [492] OBJ_sect193r1 */
0x2B,0x81,0x04,0x00,0x19,                    /* [497] OBJ_sect193r2 */
0x2B,0x81,0x04,0x00,0x1A,                    /* [502] OBJ_sect233k1 */
0x2B,0x81,0x04,0x00,0x1B,                    /* [507] OBJ_sect233r1 */
0x2B,0x81,0x04,0x00,0x03,                    /* [512] OBJ_sect239k1 */
0x2B,0x81,0x04,0x00,0x10,                    /* [517] OBJ_sect283k1 */
0x2B,0x81,0x04,0x00,0x11,                    /* [522] OBJ_sect283r1 */
0x2B,0x81,0x04,0x00,0x24,                    /* [527] OBJ_sect409k1 */
0x2B,0x81,0x04,0x00,0x25,                    /* [532] OBJ_sect409r1 */
0x2B,0x81,0x04,0x00,0x26,                    /* [537] OBJ_sect571k1 */
0x2B,0x81,0x04,0x00,0x27,                    /* [542] OBJ_sect571r1 */
0x67,0x2B,0x01,0x04,0x01,                    /* [547] OBJ_wap_wsg_idm_ecid_wtls1 */
0x67,0x2B,0x01,0x04,0x03,                    /* [552] OBJ_wap_wsg_idm_ecid_wtls3 */
0x67,0x2B,0x01,0x04,0x04,                    /* [557] OBJ_wap_wsg_idm_ecid_wtls4 */
0x67,0x2B,0x01,0x04,0x05,                    /* [562] OBJ_wap_wsg_idm_ecid_wtls5 */
0x67,0x2B,0x01,0x04,0x06,                    /* [567] OBJ_wap_wsg_idm_ecid_wtls6 */
0x67,0x2B,0x01,0x04,0x07,                    /* [572] OBJ_wap_wsg_idm_ecid_wtls7 */
0x67,0x2B,0x01,0x04,0x08,                    /* [577] OBJ_wap_wsg_idm_ecid_wtls8 */
0x67,0x2B,0x01,0x04,0x09,                    /* [582] OBJ_wap_wsg_idm_ecid_wtls9 */
0x67,0x2B,0x01,0x04,0x0A,                    /* [587] OBJ_wap_wsg_idm_ecid_wtls10 */
0x67,0x2B,0x01,0x04,0x0B,                    /* [592] OBJ_wap_wsg_idm_ecid_wtls11 */
0x67,0x2B,0x01,0x04,0x0C,                    /* [597] OBJ_wap_wsg_idm_ecid_wtls12 */
0x2A,0x86,0x48,0x86,0xF6,0x7D,0x07,0x42,0x0A,/* [602] OBJ_cast5_cbc */
0x2A,0x86,0x48,0x86,0xF6,0x7D,0x07,0x42,0x0C,/* [611] OBJ_pbeWithMD5AndCast5_CBC */
0x2A,0x86,0x48,0x86,0xF6,0x7D,0x07,0x42,0x0D,/* [620] OBJ_id_PasswordBasedMAC */
0x2A,0x86,0x48,0x86,0xF6,0x7D,0x07,0x42,0x1E,/* [629] OBJ_id_DHBasedMac */
0x2A,0x86,0x48,0x86,0xF7,0x0D,               /* [638] OBJ_rsadsi */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,          /* [644] OBJ_pkcs */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x01,     /* [651] OBJ_pkcs1 */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x01,0x01,/* [659] OBJ_rsaEncryption */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x01,0x02,/* [668] OBJ_md2WithRSAEncryption */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x01,0x03,/* [677] OBJ_md4WithRSAEncryption */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x01,0x04,/* [686] OBJ_md5WithRSAEncryption */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x01,0x05,/* [695] OBJ_sha1WithRSAEncryption */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x01,0x07,/* [704] OBJ_rsaesOaep */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x01,0x08,/* [713] OBJ_mgf1 */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x01,0x0A,/* [722] OBJ_rsassaPss */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x01,0x0B,/* [731] OBJ_sha256WithRSAEncryption */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x01,0x0C,/* [740] OBJ_sha384WithRSAEncryption */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x01,0x0D,/* [749] OBJ_sha512WithRSAEncryption */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x01,0x0E,/* [758] OBJ_sha224WithRSAEncryption */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x03,     /* [767] OBJ_pkcs3 */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x03,0x01,/* [775] OBJ_dhKeyAgreement */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x05,     /* [784] OBJ_pkcs5 */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x05,0x01,/* [792] OBJ_pbeWithMD2AndDES_CBC */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x05,0x03,/* [801] OBJ_pbeWithMD5AndDES_CBC */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x05,0x04,/* [810] OBJ_pbeWithMD2AndRC2_CBC */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x05,0x06,/* [819] OBJ_pbeWithMD5AndRC2_CBC */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x05,0x0A,/* [828] OBJ_pbeWithSHA1AndDES_CBC */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x05,0x0B,/* [837] OBJ_pbeWithSHA1AndRC2_CBC */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x05,0x0C,/* [846] OBJ_id_pbkdf2 */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x05,0x0D,/* [855] OBJ_pbes2 */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x05,0x0E,/* [864] OBJ_pbmac1 */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x07,     /* [873] OBJ_pkcs7 */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x07,0x01,/* [881] OBJ_pkcs7_data */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x07,0x02,/* [890] OBJ_pkcs7_signed */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x07,0x03,/* [899] OBJ_pkcs7_enveloped */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x07,0x04,/* [908] OBJ_pkcs7_signedAndEnveloped */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x07,0x05,/* [917] OBJ_pkcs7_digest */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x07,0x06,/* [926] OBJ_pkcs7_encrypted */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x09,     /* [935] OBJ_pkcs9 */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x09,0x01,/* [943] OBJ_pkcs9_emailAddress */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x09,0x02,/* [952] OBJ_pkcs9_unstructuredName */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x09,0x03,/* [961] OBJ_pkcs9_contentType */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x09,0x04,/* [970] OBJ_pkcs9_messageDigest */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x09,0x05,/* [979] OBJ_pkcs9_signingTime */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x09,0x06,/* [988] OBJ_pkcs9_countersignature */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x09,0x07,/* [997] OBJ_pkcs9_challengePassword */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x09,0x08,/* [1006] OBJ_pkcs9_unstructuredAddress */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x09,0x09,/* [1015] OBJ_pkcs9_extCertAttributes */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x09,0x0E,/* [1024] OBJ_ext_req */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x09,0x0F,/* [1033] OBJ_SMIMECapabilities */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x09,0x10,/* [1042] OBJ_SMIME */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x09,0x10,0x00,/* [1051] OBJ_id_smime_mod */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x09,0x10,0x01,/* [1061] OBJ_id_smime_ct */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x09,0x10,0x02,/* [1071] OBJ_id_smime_aa */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x09,0x10,0x03,/* [1081] OBJ_id_smime_alg */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x09,0x10,0x04,/* [1091] OBJ_id_smime_cd */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x09,0x10,0x05,/* [1101] OBJ_id_smime_spq */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x09,0x10,0x06,/* [1111] OBJ_id_smime_cti */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x09,0x10,0x00,0x01,/* [1121] OBJ_id_smime_mod_cms */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x09,0x10,0x00,0x02,/* [1132] OBJ_id_smime_mod_ess */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x09,0x10,0x00,0x03,/* [1143] OBJ_id_smime_mod_oid */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x09,0x10,0x00,0x04,/* [1154] OBJ_id_smime_mod_msg_v3 */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x09,0x10,0x00,0x05,/* [1165] OBJ_id_smime_mod_ets_eSignature_88 */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x09,0x10,0x00,0x06,/* [1176] OBJ_id_smime_mod_ets_eSignature_97 */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x09,0x10,0x00,0x07,/* [1187] OBJ_id_smime_mod_ets_eSigPolicy_88 */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x09,0x10,0x00,0x08,/* [1198] OBJ_id_smime_mod_ets_eSigPolicy_97 */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x09,0x10,0x01,0x01,/* [1209] OBJ_id_smime_ct_receipt */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x09,0x10,0x01,0x02,/* [1220] OBJ_id_smime_ct_authData */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x09,0x10,0x01,0x03,/* [1231] OBJ_id_smime_ct_publishCert */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x09,0x10,0x01,0x04,/* [1242] OBJ_id_smime_ct_TSTInfo */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x09,0x10,0x01,0x05,/* [1253] OBJ_id_smime_ct_TDTInfo */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x09,0x10,0x01,0x06,/* [1264] OBJ_id_smime_ct_contentInfo */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x09,0x10,0x01,0x07,/* [1275] OBJ_id_smime_ct_DVCSRequestData */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x09,0x10,0x01,0x08,/* [1286] OBJ_id_smime_ct_DVCSResponseData */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x09,0x10,0x01,0x09,/* [1297] OBJ_id_smime_ct_compressedData */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x09,0x10,0x01,0x1B,/* [1308] OBJ_id_ct_asciiTextWithCRLF */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x09,0x10,0x02,0x01,/* [1319] OBJ_id_smime_aa_receiptRequest */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x09,0x10,0x02,0x02,/* [1330] OBJ_id_smime_aa_securityLabel */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x09,0x10,0x02,0x03,/* [1341] OBJ_id_smime_aa_mlExpandHistory */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x09,0x10,0x02,0x04,/* [1352] OBJ_id_smime_aa_contentHint */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x09,0x10,0x02,0x05,/* [1363] OBJ_id_smime_aa_msgSigDigest */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x09,0x10,0x02,0x06,/* [1374] OBJ_id_smime_aa_encapContentType */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x09,0x10,0x02,0x07,/* [1385] OBJ_id_smime_aa_contentIdentifier */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x09,0x10,0x02,0x08,/* [1396] OBJ_id_smime_aa_macValue */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x09,0x10,0x02,0x09,/* [1407] OBJ_id_smime_aa_equivalentLabels */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x09,0x10,0x02,0x0A,/* [1418] OBJ_id_smime_aa_contentReference */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x09,0x10,0x02,0x0B,/* [1429] OBJ_id_smime_aa_encrypKeyPref */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x09,0x10,0x02,0x0C,/* [1440] OBJ_id_smime_aa_signingCertificate */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x09,0x10,0x02,0x0D,/* [1451] OBJ_id_smime_aa_smimeEncryptCerts */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x09,0x10,0x02,0x0E,/* [1462] OBJ_id_smime_aa_timeStampToken */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x09,0x10,0x02,0x0F,/* [1473] OBJ_id_smime_aa_ets_sigPolicyId */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x09,0x10,0x02,0x10,/* [1484] OBJ_id_smime_aa_ets_commitmentType */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x09,0x10,0x02,0x11,/* [1495] OBJ_id_smime_aa_ets_signerLocation */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x09,0x10,0x02,0x12,/* [1506] OBJ_id_smime_aa_ets_signerAttr */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x09,0x10,0x02,0x13,/* [1517] OBJ_id_smime_aa_ets_otherSigCert */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x09,0x10,0x02,0x14,/* [1528] OBJ_id_smime_aa_ets_contentTimestamp */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x09,0x10,0x02,0x15,/* [1539] OBJ_id_smime_aa_ets_CertificateRefs */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x09,0x10,0x02,0x16,/* [1550] OBJ_id_smime_aa_ets_RevocationRefs */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x09,0x10,0x02,0x17,/* [1561] OBJ_id_smime_aa_ets_certValues */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x09,0x10,0x02,0x18,/* [1572] OBJ_id_smime_aa_ets_revocationValues */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x09,0x10,0x02,0x19,/* [1583] OBJ_id_smime_aa_ets_escTimeStamp */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x09,0x10,0x02,0x1A,/* [1594] OBJ_id_smime_aa_ets_certCRLTimestamp */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x09,0x10,0x02,0x1B,/* [1605] OBJ_id_smime_aa_ets_archiveTimeStamp */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x09,0x10,0x02,0x1C,/* [1616] OBJ_id_smime_aa_signatureType */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x09,0x10,0x02,0x1D,/* [1627] OBJ_id_smime_aa_dvcs_dvc */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x09,0x10,0x03,0x01,/* [1638] OBJ_id_smime_alg_ESDHwith3DES */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x09,0x10,0x03,0x02,/* [1649] OBJ_id_smime_alg_ESDHwithRC2 */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x09,0x10,0x03,0x03,/* [1660] OBJ_id_smime_alg_3DESwrap */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x09,0x10,0x03,0x04,/* [1671] OBJ_id_smime_alg_RC2wrap */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x09,0x10,0x03,0x05,/* [1682] OBJ_id_smime_alg_ESDH */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x09,0x10,0x03,0x06,/* [1693] OBJ_id_smime_alg_CMS3DESwrap */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x09,0x10,0x03,0x07,/* [1704] OBJ_id_smime_alg_CMSRC2wrap */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x09,0x10,0x03,0x09,/* [1715] OBJ_id_alg_PWRI_KEK */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x09,0x10,0x04,0x01,/* [1726] OBJ_id_smime_cd_ldap */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x09,0x10,0x05,0x01,/* [1737] OBJ_id_smime_spq_ets_sqt_uri */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x09,0x10,0x05,0x02,/* [1748] OBJ_id_smime_spq_ets_sqt_unotice */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x09,0x10,0x06,0x01,/* [1759] OBJ_id_smime_cti_ets_proofOfOrigin */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x09,0x10,0x06,0x02,/* [1770] OBJ_id_smime_cti_ets_proofOfReceipt */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x09,0x10,0x06,0x03,/* [1781] OBJ_id_smime_cti_ets_proofOfDelivery */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x09,0x10,0x06,0x04,/* [1792] OBJ_id_smime_cti_ets_proofOfSender */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x09,0x10,0x06,0x05,/* [1803] OBJ_id_smime_cti_ets_proofOfApproval */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x09,0x10,0x06,0x06,/* [1814] OBJ_id_smime_cti_ets_proofOfCreation */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x09,0x14,/* [1825] OBJ_friendlyName */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x09,0x15,/* [1834] OBJ_localKeyID */
0x2B,0x06,0x01,0x04,0x01,0x82,0x37,0x11,0x01,/* [1843] OBJ_ms_csp_name */
0x2B,0x06,0x01,0x04,0x01,0x82,0x37,0x11,0x02,/* [1852] OBJ_LocalKeySet */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x09,0x16,0x01,/* [1861] OBJ_x509Certificate */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x09,0x16,0x02,/* [1871] OBJ_sdsiCertificate */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x09,0x17,0x01,/* [1881] OBJ_x509Crl */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x0C,0x01,0x01,/* [1891] OBJ_pbe_WithSHA1And128BitRC4 */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x0C,0x01,0x02,/* [1901] OBJ_pbe_WithSHA1And40BitRC4 */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x0C,0x01,0x03,/* [1911] OBJ_pbe_WithSHA1And3_Key_TripleDES_CBC */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x0C,0x01,0x04,/* [1921] OBJ_pbe_WithSHA1And2_Key_TripleDES_CBC */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x0C,0x01,0x05,/* [1931] OBJ_pbe_WithSHA1And128BitRC2_CBC */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x0C,0x01,0x06,/* [1941] OBJ_pbe_WithSHA1And40BitRC2_CBC */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x0C,0x0A,0x01,0x01,/* [1951] OBJ_keyBag */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x0C,0x0A,0x01,0x02,/* [1962] OBJ_pkcs8ShroudedKeyBag */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x0C,0x0A,0x01,0x03,/* [1973] OBJ_certBag */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x0C,0x0A,0x01,0x04,/* [1984] OBJ_crlBag */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x0C,0x0A,0x01,0x05,/* [1995] OBJ_secretBag */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x0C,0x0A,0x01,0x06,/* [2006] OBJ_safeContentsBag */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x02,0x02,     /* [2017] OBJ_md2 */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x02,0x04,     /* [2025] OBJ_md4 */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x02,0x05,     /* [2033] OBJ_md5 */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x02,0x06,     /* [2041] OBJ_hmacWithMD5 */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x02,0x07,     /* [2049] OBJ_hmacWithSHA1 */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x02,0x08,     /* [2057] OBJ_hmacWithSHA224 */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x02,0x09,     /* [2065] OBJ_hmacWithSHA256 */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x02,0x0A,     /* [2073] OBJ_hmacWithSHA384 */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x02,0x0B,     /* [2081] OBJ_hmacWithSHA512 */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x03,0x02,     /* [2089] OBJ_rc2_cbc */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x03,0x04,     /* [2097] OBJ_rc4 */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x03,0x07,     /* [2105] OBJ_des_ede3_cbc */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x03,0x08,     /* [2113] OBJ_rc5_cbc */
0x2B,0x06,0x01,0x04,0x01,0x82,0x37,0x02,0x01,0x0E,/* [2121] OBJ_ms_ext_req */
0x2B,0x06,0x01,0x04,0x01,0x82,0x37,0x02,0x01,0x15,/* [2131] OBJ_ms_code_ind */
0x2B,0x06,0x01,0x04,0x01,0x82,0x37,0x02,0x01,0x16,/* [2141] OBJ_ms_code_com */
0x2B,0x06,0x01,0x04,0x01,0x82,0x37,0x0A,0x03,0x01,/* [2151] OBJ_ms_ctl_sign */
0x2B,0x06,0x01,0x04,0x01,0x82,0x37,0x0A,0x03,0x03,/* [2161] OBJ_ms_sgc */
0x2B,0x06,0x01,0x04,0x01,0x82,0x37,0x0A,0x03,0x04,/* [2171] OBJ_ms_efs */
0x2B,0x06,0x01,0x04,0x01,0x82,0x37,0x14,0x02,0x02,/* [2181] OBJ_ms_smartcard_login */
0x2B,0x06,0x01,0x04,0x01,0x82,0x37,0x14,0x02,0x03,/* [2191] OBJ_ms_upn */
0x2B,0x06,0x01,0x04,0x01,0x81,0x3C,0x07,0x01,0x01,0x02,/* [2201] OBJ_idea_cbc */
0x2B,0x06,0x01,0x04,0x01,0x97,0x55,0x01,0x02,/* [2212] OBJ_bf_cbc */
0x2B,0x06,0x01,0x05,0x05,0x07,               /* [2221] OBJ_id_pkix */
0x2B,0x06,0x01,0x05,0x05,0x07,0x00,          /* [2227] OBJ_id_pkix_mod */
0x2B,0x06,0x01,0x05,0x05,0x07,0x01,          /* [2234] OBJ_id_pe */
0x2B,0x06,0x01,0x05,0x05,0x07,0x02,          /* [2241] OBJ_id_qt */
0x2B,0x06,0x01,0x05,0x05,0x07,0x03,          /* [2248] OBJ_id_kp */
0x2B,0x06,0x01,0x05,0x05,0x07,0x04,          /* [2255] OBJ_id_it */
0x2B,0x06,0x01,0x05,0x05,0x07,0x05,          /* [2262] OBJ_id_pkip */
0x2B,0x06,0x01,0x05,0x05,0x07,0x06,          /* [2269] OBJ_id_alg */
0x2B,0x06,0x01,0x05,0x05,0x07,0x07,          /* [2276] OBJ_id_cmc */
0x2B,0x06,0x01,0x05,0x05,0x07,0x08,          /* [2283] OBJ_id_on */
0x2B,0x06,0x01,0x05,0x05,0x07,0x09,          /* [2290] OBJ_id_pda */
0x2B,0x06,0x01,0x05,0x05,0x07,0x0A,          /* [2297] OBJ_id_aca */
0x2B,0x06,0x01,0x05,0x05,0x07,0x0B,          /* [2304] OBJ_id_qcs */
0x2B,0x06,0x01,0x05,0x05,0x07,0x0C,          /* [2311] OBJ_id_cct */
0x2B,0x06,0x01,0x05,0x05,0x07,0x15,          /* [2318] OBJ_id_ppl */
0x2B,0x06,0x01,0x05,0x05,0x07,0x30,          /* [2325] OBJ_id_ad */
0x2B,0x06,0x01,0x05,0x05,0x07,0x00,0x01,     /* [2332] OBJ_id_pkix1_explicit_88 */
0x2B,0x06,0x01,0x05,0x05,0x07,0x00,0x02,     /* [2340] OBJ_id_pkix1_implicit_88 */
0x2B,0x06,0x01,0x05,0x05,0x07,0x00,0x03,     /* [2348] OBJ_id_pkix1_explicit_93 */
0x2B,0x06,0x01,0x05,0x05,0x07,0x00,0x04,     /* [2356] OBJ_id_pkix1_implicit_93 */
0x2B,0x06,0x01,0x05,0x05,0x07,0x00,0x05,     /* [2364] OBJ_id_mod_crmf */
0x2B,0x06,0x01,0x05,0x05,0x07,0x00,0x06,     /* [2372] OBJ_id_mod_cmc */
0x2B,0x06,0x01,0x05,0x05,0x07,0x00,0x07,     /* [2380] OBJ_id_mod_kea_profile_88 */
0x2B,0x06,0x01,0x05,0x05,0x07,0x00,0x08,     /* [2388] OBJ_id_mod_kea_profile_93 */
0x2B,0x06,0x01,0x05,0x05,0x07,0x00,0x09,     /* [2396] OBJ_id_mod_cmp */
0x2B,0x06,0x01,0x05,0x05,0x07,0x00,0x0A,     /* [2404] OBJ_id_mod_qualified_cert_88 */
0x2B,0x06,0x01,0x05,0x05,0x07,0x00,0x0B,     /* [2412] OBJ_id_mod_qualified_cert_93 */
0x2B,0x06,0x01,0x05,0x05,0x07,0x00,0x0C,     /* [2420] OBJ_id_mod_attribute_cert */
0x2B,0x06,0x01,0x05,0x05,0x07,0x00,0x0D,     /* [2428] OBJ_id_mod_timestamp_protocol */
0x2B,0x06,0x01,0x05,0x05,0x07,0x00,0x0E,     /* [2436] OBJ_id_mod_ocsp */
0x2B,0x06,0x01,0x05,0x05,0x07,0x00,0x0F,     /* [2444] OBJ_id_mod_dvcs */
0x2B,0x06,0x01,0x05,0x05,0x07,0x00,0x10,     /* [2452] OBJ_id_mod_cmp2000 */
0x2B,0x06,0x01,0x05,0x05,0x07,0x01,0x01,     /* [2460] OBJ_info_access */
0x2B,0x06,0x01,0x05,0x05,0x07,0x01,0x02,     /* [2468] OBJ_biometricInfo */
0x2B,0x06,0x01,0x05,0x05,0x07,0x01,0x03,     /* [2476] OBJ_qcStatements */
0x2B,0x06,0x01,0x05,0x05,0x07,0x01,0x04,     /* [2484] OBJ_ac_auditEntity */
0x2B,0x06,0x01,0x05,0x05,0x07,0x01,0x05,     /* [2492] OBJ_ac_targeting */
0x2B,0x06,0x01,0x05,0x05,0x07,0x01,0x06,     /* [2500] OBJ_aaControls */
0x2B,0x06,0x01,0x05,0x05,0x07,0x01,0x07,     /* [2508] OBJ_sbgp_ipAddrBlock */
0x2B,0x06,0x01,0x05,0x05,0x07,0x01,0x08,     /* [2516] OBJ_sbgp_autonomousSysNum */
0x2B,0x06,0x01,0x05,0x05,0x07,0x01,0x09,     /* [2524] OBJ_sbgp_routerIdentifier */
0x2B,0x06,0x01,0x05,0x05,0x07,0x01,0x0A,     /* [2532] OBJ_ac_proxying */
0x2B,0x06,0x01,0x05,0x05,0x07,0x01,0x0B,     /* [2540] OBJ_sinfo_access */
0x2B,0x06,0x01,0x05,0x05,0x07,0x01,0x0E,     /* [2548] OBJ_proxyCertInfo */
0x2B,0x06,0x01,0x05,0x05,0x07,0x02,0x01,     /* [2556] OBJ_id_qt_cps */
0x2B,0x06,0x01,0x05,0x05,0x07,0x02,0x02,     /* [2564] OBJ_id_qt_unotice */
0x2B,0x06,0x01,0x05,0x05,0x07,0x02,0x03,     /* [2572] OBJ_textNotice */
0x2B,0x06,0x01,0x05,0x05,0x07,0x03,0x01,     /* [2580] OBJ_server_auth */
0x2B,0x06,0x01,0x05,0x05,0x07,0x03,0x02,     /* [2588] OBJ_client_auth */
0x2B,0x06,0x01,0x05,0x05,0x07,0x03,0x03,     /* [2596] OBJ_code_sign */
0x2B,0x06,0x01,0x05,0x05,0x07,0x03,0x04,     /* [2604] OBJ_email_protect */
0x2B,0x06,0x01,0x05,0x05,0x07,0x03,0x05,     /* [2612] OBJ_ipsecEndSystem */
0x2B,0x06,0x01,0x05,0x05,0x07,0x03,0x06,     /* [2620] OBJ_ipsecTunnel */
0x2B,0x06,0x01,0x05,0x05,0x07,0x03,0x07,     /* [2628] OBJ_ipsecUser */
0x2B,0x06,0x01,0x05,0x05,0x07,0x03,0x08,     /* [2636] OBJ_time_stamp */
0x2B,0x06,0x01,0x05,0x05,0x07,0x03,0x09,     /* [2644] OBJ_OCSP_sign */
0x2B,0x06,0x01,0x05,0x05,0x07,0x03,0x0A,     /* [2652] OBJ_dvcs */
0x2B,0x06,0x01,0x05,0x05,0x07,0x04,0x01,     /* [2660] OBJ_id_it_caProtEncCert */
0x2B,0x06,0x01,0x05,0x05,0x07,0x04,0x02,     /* [2668] OBJ_id_it_signKeyPairTypes */
0x2B,0x06,0x01,0x05,0x05,0x07,0x04,0x03,     /* [2676] OBJ_id_it_encKeyPairTypes */
0x2B,0x06,0x01,0x05,0x05,0x07,0x04,0x04,     /* [2684] OBJ_id_it_preferredSymmAlg */
0x2B,0x06,0x01,0x05,0x05,0x07,0x04,0x05,     /* [2692] OBJ_id_it_caKeyUpdateInfo */
0x2B,0x06,0x01,0x05,0x05,0x07,0x04,0x06,     /* [2700] OBJ_id_it_currentCRL */
0x2B,0x06,0x01,0x05,0x05,0x07,0x04,0x07,     /* [2708] OBJ_id_it_unsupportedOIDs */
0x2B,0x06,0x01,0x05,0x05,0x07,0x04,0x08,     /* [2716] OBJ_id_it_subscriptionRequest */
0x2B,0x06,0x01,0x05,0x05,0x07,0x04,0x09,     /* [2724] OBJ_id_it_subscriptionResponse */
0x2B,0x06,0x01,0x05,0x05,0x07,0x04,0x0A,     /* [2732] OBJ_id_it_keyPairParamReq */
0x2B,0x06,0x01,0x05,0x05,0x07,0x04,0x0B,     /* [2740] OBJ_id_it_keyPairParamRep */
0x2B,0x06,0x01,0x05,0x05,0x07,0x04,0x0C,     /* [2748] OBJ_id_it_revPassphrase */
0x2B,0x06,0x01,0x05,0x05,0x07,0x04,0x0D,     /* [2756] OBJ_id_it_implicitConfirm */
0x2B,0x06,0x01,0x05,0x05,0x07,0x04,0x0E,     /* [2764] OBJ_id_it_confirmWaitTime */
0x2B,0x06,0x01,0x05,0x05,0x07,0x04,0x0F,     /* [2772] OBJ_id_it_origPKIMessage */
0x2B,0x06,0x01,0x05,0x05,0x07,0x04,0x10,     /* [2780] OBJ_id_it_suppLangTags */
0x2B,0x06,0x01,0x05,0x05,0x07,0x05,0x01,     /* [2788] OBJ_id_regCtrl */
0x2B,0x06,0x01,0x05,0x05,0x07,0x05,0x02,     /* [2796] OBJ_id_regInfo */
0x2B,0x06,0x01,0x05,0x05,0x07,0x05,0x01,0x01,/* [2804] OBJ_id_regCtrl_regToken */
0x2B,0x06,0x01,0x05,0x05,0x07,0x05,0x01,0x02,/* [2813] OBJ_id_regCtrl_authenticator */
0x2B,0x06,0x01,0x05,0x05,0x07,0x05,0x01,0x03,/* [2822] OBJ_id_regCtrl_pkiPublicationInfo */
0x2B,0x06,0x01,0x05,0x05,0x07,0x05,0x01,0x04,/* [2831] OBJ_id_regCtrl_pkiArchiveOptions */
0x2B,0x06,0x01,0x05,0x05,0x07,0x05,0x01,0x05,/* [2840] OBJ_id_regCtrl_oldCertID */
0x2B,0x06,0x01,0x05,0x05,0x07,0x05,0x01,0x06,/* [2849] OBJ_id_regCtrl_protocolEncrKey */
0x2B,0x06,0x01,0x05,0x05,0x07,0x05,0x02,0x01,/* [2858] OBJ_id_regInfo_utf8Pairs */
0x2B,0x06,0x01,0x05,0x05,0x07,0x05,0x02,0x02,/* [2867] OBJ_id_regInfo_certReq */
0x2B,0x06,0x01,0x05,0x05,0x07,0x06,0x01,     /* [2876] OBJ_id_alg_des40 */
0x2B,0x06,0x01,0x05,0x05,0x07,0x06,0x02,     /* [2884] OBJ_id_alg_noSignature */
0x2B,0x06,0x01,0x05,0x05,0x07,0x06,0x03,     /* [2892] OBJ_id_alg_dh_sig_hmac_sha1 */
0x2B,0x06,0x01,0x05,0x05,0x07,0x06,0x04,     /* [2900] OBJ_id_alg_dh_pop */
0x2B,0x06,0x01,0x05,0x05,0x07,0x07,0x01,     /* [2908] OBJ_id_cmc_statusInfo */
0x2B,0x06,0x01,0x05,0x05,0x07,0x07,0x02,     /* [2916] OBJ_id_cmc_identification */
0x2B,0x06,0x01,0x05,0x05,0x07,0x07,0x03,     /* [2924] OBJ_id_cmc_identityProof */
0x2B,0x06,0x01,0x05,0x05,0x07,0x07,0x04,     /* [2932] OBJ_id_cmc_dataReturn */
0x2B,0x06,0x01,0x05,0x05,0x07,0x07,0x05,     /* [2940] OBJ_id_cmc_transactionId */
0x2B,0x06,0x01,0x05,0x05,0x07,0x07,0x06,     /* [2948] OBJ_id_cmc_senderNonce */
0x2B,0x06,0x01,0x05,0x05,0x07,0x07,0x07,     /* [2956] OBJ_id_cmc_recipientNonce */
0x2B,0x06,0x01,0x05,0x05,0x07,0x07,0x08,     /* [2964] OBJ_id_cmc_addExtensions */
0x2B,0x06,0x01,0x05,0x05,0x07,0x07,0x09,     /* [2972] OBJ_id_cmc_encryptedPOP */
0x2B,0x06,0x01,0x05,0x05,0x07,0x07,0x0A,     /* [2980] OBJ_id_cmc_decryptedPOP */
0x2B,0x06,0x01,0x05,0x05,0x07,0x07,0x0B,     /* [2988] OBJ_id_cmc_lraPOPWitness */
0x2B,0x06,0x01,0x05,0x05,0x07,0x07,0x0F,     /* [2996] OBJ_id_cmc_getCert */
0x2B,0x06,0x01,0x05,0x05,0x07,0x07,0x10,     /* [3004] OBJ_id_cmc_getCRL */
0x2B,0x06,0x01,0x05,0x05,0x07,0x07,0x11,     /* [3012] OBJ_id_cmc_revokeRequest */
0x2B,0x06,0x01,0x05,0x05,0x07,0x07,0x12,     /* [3020] OBJ_id_cmc_regInfo */
0x2B,0x06,0x01,0x05,0x05,0x07,0x07,0x13,     /* [3028] OBJ_id_cmc_responseInfo */
0x2B,0x06,0x01,0x05,0x05,0x07,0x07,0x15,     /* [3036] OBJ_id_cmc_queryPending */
0x2B,0x06,0x01,0x05,0x05,0x07,0x07,0x16,     /* [3044] OBJ_id_cmc_popLinkRandom */
0x2B,0x06,0x01,0x05,0x05,0x07,0x07,0x17,     /* [3052] OBJ_id_cmc_popLinkWitness */
0x2B,0x06,0x01,0x05,0x05,0x07,0x07,0x18,     /* [3060] OBJ_id_cmc_confirmCertAcceptance */
0x2B,0x06,0x01,0x05,0x05,0x07,0x08,0x01,     /* [3068] OBJ_id_on_personalData */
0x2B,0x06,0x01,0x05,0x05,0x07,0x08,0x03,     /* [3076] OBJ_id_on_permanentIdentifier */
0x2B,0x06,0x01,0x05,0x05,0x07,0x09,0x01,     /* [3084] OBJ_id_pda_dateOfBirth */
0x2B,0x06,0x01,0x05,0x05,0x07,0x09,0x02,     /* [3092] OBJ_id_pda_placeOfBirth */
0x2B,0x06,0x01,0x05,0x05,0x07,0x09,0x03,     /* [3100] OBJ_id_pda_gender */
0x2B,0x06,0x01,0x05,0x05,0x07,0x09,0x04,     /* [3108] OBJ_id_pda_countryOfCitizenship */
0x2B,0x06,0x01,0x05,0x05,0x07,0x09,0x05,     /* [3116] OBJ_id_pda_countryOfResidence */
0x2B,0x06,0x01,0x05,0x05,0x07,0x0A,0x01,     /* [3124] OBJ_id_aca_authenticationInfo */
0x2B,0x06,0x01,0x05,0x05,0x07,0x0A,0x02,     /* [3132] OBJ_id_aca_accessIdentity */
0x2B,0x06,0x01,0x05,0x05,0x07,0x0A,0x03,     /* [3140] OBJ_id_aca_chargingIdentity */
0x2B,0x06,0x01,0x05,0x05,0x07,0x0A,0x04,     /* [3148] OBJ_id_aca_group */
0x2B,0x06,0x01,0x05,0x05,0x07,0x0A,0x05,     /* [3156] OBJ_id_aca_role */
0x2B,0x06,0x01,0x05,0x05,0x07,0x0A,0x06,     /* [3164] OBJ_id_aca_encAttrs */
0x2B,0x06,0x01,0x05,0x05,0x07,0x0B,0x01,     /* [3172] OBJ_id_qcs_pkixQCSyntax_v1 */
0x2B,0x06,0x01,0x05,0x05,0x07,0x0C,0x01,     /* [3180] OBJ_id_cct_crs */
0x2B,0x06,0x01,0x05,0x05,0x07,0x0C,0x02,     /* [3188] OBJ_id_cct_PKIData */
0x2B,0x06,0x01,0x05,0x05,0x07,0x0C,0x03,     /* [3196] OBJ_id_cct_PKIResponse */
0x2B,0x06,0x01,0x05,0x05,0x07,0x15,0x00,     /* [3204] OBJ_id_ppl_anyLanguage */
0x2B,0x06,0x01,0x05,0x05,0x07,0x15,0x01,     /* [3212] OBJ_id_ppl_inheritAll */
0x2B,0x06,0x01,0x05,0x05,0x07,0x15,0x02,     /* [3220] OBJ_Independent */
0x2B,0x06,0x01,0x05,0x05,0x07,0x30,0x01,     /* [3228] OBJ_ad_OCSP */
0x2B,0x06,0x01,0x05,0x05,0x07,0x30,0x02,     /* [3236] OBJ_ad_ca_issuers */
0x2B,0x06,0x01,0x05,0x05,0x07,0x30,0x03,     /* [3244] OBJ_ad_timeStamping */
0x2B,0x06,0x01,0x05,0x05,0x07,0x30,0x04,     /* [3252] OBJ_ad_dvcs */
0x2B,0x06,0x01,0x05,0x05,0x07,0x30,0x05,     /* [3260] OBJ_caRepository */
0x2B,0x06,0x01,0x05,0x05,0x07,0x30,0x01,0x01,/* [3268] OBJ_id_pkix_OCSP_basic */
0x2B,0x06,0x01,0x05,0x05,0x07,0x30,0x01,0x02,/* [3277] OBJ_id_pkix_OCSP_Nonce */
0x2B,0x06,0x01,0x05,0x05,0x07,0x30,0x01,0x03,/* [3286] OBJ_id_pkix_OCSP_CrlID */
0x2B,0x06,0x01,0x05,0x05,0x07,0x30,0x01,0x04,/* [3295] OBJ_id_pkix_OCSP_acceptableResponses */
0x2B,0x06,0x01,0x05,0x05,0x07,0x30,0x01,0x05,/* [3304] OBJ_id_pkix_OCSP_noCheck */
0x2B,0x06,0x01,0x05,0x05,0x07,0x30,0x01,0x06,/* [3313] OBJ_id_pkix_OCSP_archiveCutoff */
0x2B,0x06,0x01,0x05,0x05,0x07,0x30,0x01,0x07,/* [3322] OBJ_id_pkix_OCSP_serviceLocator */
0x2B,0x06,0x01,0x05,0x05,0x07,0x30,0x01,0x08,/* [3331] OBJ_id_pkix_OCSP_extendedStatus */
0x2B,0x06,0x01,0x05,0x05,0x07,0x30,0x01,0x09,/* [3340] OBJ_id_pkix_OCSP_valid */
0x2B,0x06,0x01,0x05,0x05,0x07,0x30,0x01,0x0A,/* [3349] OBJ_id_pkix_OCSP_path */
0x2B,0x06,0x01,0x05,0x05,0x07,0x30,0x01,0x0B,/* [3358] OBJ_id_pkix_OCSP_trustRoot */
0x2B,0x0E,0x03,0x02,                         /* [3367] OBJ_algorithm */
0x2B,0x0E,0x03,0x02,0x03,                    /* [3371] OBJ_md5WithRSA */
0x2B,0x0E,0x03,0x02,0x06,                    /* [3376] OBJ_des_ecb */
0x2B,0x0E,0x03,0x02,0x07,                    /* [3381] OBJ_des_cbc */
0x2B,0x0E,0x03,0x02,0x08,                    /* [3386] OBJ_des_ofb64 */
0x2B,0x0E,0x03,0x02,0x09,                    /* [3391] OBJ_des_cfb64 */
0x2B,0x0E,0x03,0x02,0x0B,                    /* [3396] OBJ_rsaSignature */
0x2B,0x0E,0x03,0x02,0x0C,                    /* [3401] OBJ_dsa_2 */
0x2B,0x0E,0x03,0x02,0x0D,                    /* [3406] OBJ_dsaWithSHA */
0x2B,0x0E,0x03,0x02,0x0F,                    /* [3411] OBJ_shaWithRSAEncryption */
0x2B,0x0E,0x03,0x02,0x11,                    /* [3416] OBJ_des_ede_ecb */
0x2B,0x0E,0x03,0x02,0x12,                    /* [3421] OBJ_sha */
0x2B,0x0E,0x03,0x02,0x1A,                    /* [3426] OBJ_sha1 */
0x2B,0x0E,0x03,0x02,0x1B,                    /* [3431] OBJ_dsaWithSHA1_2 */
0x2B,0x0E,0x03,0x02,0x1D,                    /* [3436] OBJ_sha1WithRSA */
0x2B,0x24,0x03,0x02,0x01,                    /* [3441] OBJ_ripemd160 */
0x2B,0x24,0x03,0x03,0x01,0x02,               /* [3446] OBJ_ripemd160WithRSA */
0x2B,0x65,0x01,0x04,0x01,                    /* [3452] OBJ_sxnet */
0x55,                                        /* [3457] OBJ_X500 */
0x55,0x04,                                   /* [3458] OBJ_X509 */
0x55,0x04,0x03,                              /* [3460] OBJ_commonName */
0x55,0x04,0x04,                              /* [3463] OBJ_surname */
0x55,0x04,0x05,                              /* [3466] OBJ_serialNumber */
0x55,0x04,0x06,                              /* [3469] OBJ_countryName */
0x55,0x04,0x07,                              /* [3472] OBJ_localityName */
0x55,0x04,0x08,                              /* [3475] OBJ_stateOrProvinceName */
0x55,0x04,0x09,                              /* [3478] OBJ_streetAddress */
0x55,0x04,0x0A,                              /* [3481] OBJ_organizationName */
0x55,0x04,0x0B,                              /* [3484] OBJ_organizationalUnitName */
0x55,0x04,0x0C,                              /* [3487] OBJ_title */
0x55,0x04,0x0D,                              /* [3490] OBJ_description */
0x55,0x04,0x0E,                              /* [3493] OBJ_searchGuide */
0x55,0x04,0x0F,                              /* [3496] OBJ_businessCategory */
0x55,0x04,0x10,                              /* [3499] OBJ_postalAddress */
0x55,0x04,0x11,                              /* [3502] OBJ_postalCode */
0x55,0x04,0x12,                              /* [3505] OBJ_postOfficeBox */
0x55,0x04,0x13,                              /* [3508] OBJ_physicalDeliveryOfficeName */
0x55,0x04,0x14,                              /* [3511] OBJ_telephoneNumber */
0x55,0x04,0x15,                              /* [3514] OBJ_telexNumber */
0x55,0x04,0x16,                              /* [3517] OBJ_teletexTerminalIdentifier */
0x55,0x04,0x17,                              /* [3520] OBJ_facsimileTelephoneNumber */
0x55,0x04,0x18,                              /* [3523] OBJ_x121Address */
0x55,0x04,0x19,                              /* [3526] OBJ_internationaliSDNNumber */
0x55,0x04,0x1A,                              /* [3529] OBJ_registeredAddress */
0x55,0x04,0x1B,                              /* [3532] OBJ_destinationIndicator */
0x55,0x04,0x1C,                              /* [3535] OBJ_preferredDeliveryMethod */
0x55,0x04,0x1D,                              /* [3538] OBJ_presentationAddress */
0x55,0x04,0x1E,                              /* [3541] OBJ_supportedApplicationContext */
0x55,0x04,0x1F,                              /* [3544] OBJ_member */
0x55,0x04,0x20,                              /* [3547] OBJ_owner */
0x55,0x04,0x21,                              /* [3550] OBJ_roleOccupant */
0x55,0x04,0x22,                              /* [3553] OBJ_seeAlso */
0x55,0x04,0x23,                              /* [3556] OBJ_userPassword */
0x55,0x04,0x24,                              /* [3559] OBJ_userCertificate */
0x55,0x04,0x25,                              /* [3562] OBJ_cACertificate */
0x55,0x04,0x26,                              /* [3565] OBJ_authorityRevocationList */
0x55,0x04,0x27,                              /* [3568] OBJ_certificateRevocationList */
0x55,0x04,0x28,                              /* [3571] OBJ_crossCertificatePair */
0x55,0x04,0x29,                              /* [3574] OBJ_name */
0x55,0x04,0x2A,                              /* [3577] OBJ_givenName */
0x55,0x04,0x2B,                              /* [3580] OBJ_initials */
0x55,0x04,0x2C,                              /* [3583] OBJ_generationQualifier */
0x55,0x04,0x2D,                              /* [3586] OBJ_x500UniqueIdentifier */
0x55,0x04,0x2E,                              /* [3589] OBJ_dnQualifier */
0x55,0x04,0x2F,                              /* [3592] OBJ_enhancedSearchGuide */
0x55,0x04,0x30,                              /* [3595] OBJ_protocolInformation */
0x55,0x04,0x31,                              /* [3598] OBJ_distinguishedName */
0x55,0x04,0x32,                              /* [3601] OBJ_uniqueMember */
0x55,0x04,0x33,                              /* [3604] OBJ_houseIdentifier */
0x55,0x04,0x34,                              /* [3607] OBJ_supportedAlgorithms */
0x55,0x04,0x35,                              /* [3610] OBJ_deltaRevocationList */
0x55,0x04,0x36,                              /* [3613] OBJ_dmdName */
0x55,0x04,0x41,                              /* [3616] OBJ_pseudonym */
0x55,0x04,0x48,                              /* [3619] OBJ_role */
0x55,0x08,                                   /* [3622] OBJ_X500algorithms */
0x55,0x08,0x01,0x01,                         /* [3624] OBJ_rsa */
0x55,0x08,0x03,0x64,                         /* [3628] OBJ_mdc2WithRSA */
0x55,0x08,0x03,0x65,                         /* [3632] OBJ_mdc2 */
0x55,0x1D,                                   /* [3636] OBJ_id_ce */
0x55,0x1D,0x09,                              /* [3638] OBJ_subject_directory_attributes */
0x55,0x1D,0x0E,                              /* [3641] OBJ_subject_key_identifier */
0x55,0x1D,0x0F,                              /* [3644] OBJ_key_usage */
0x55,0x1D,0x10,                              /* [3647] OBJ_private_key_usage_period */
0x55,0x1D,0x11,                              /* [3650] OBJ_subject_alt_name */
0x55,0x1D,0x12,                              /* [3653] OBJ_issuer_alt_name */
0x55,0x1D,0x13,                              /* [3656] OBJ_basic_constraints */
0x55,0x1D,0x14,                              /* [3659] OBJ_crl_number */
0x55,0x1D,0x15,                              /* [3662] OBJ_crl_reason */
0x55,0x1D,0x18,                              /* [3665] OBJ_invalidity_date */
0x55,0x1D,0x1B,                              /* [3668] OBJ_delta_crl */
0x55,0x1D,0x1C,                              /* [3671] OBJ_issuing_distribution_point */
0x55,0x1D,0x1D,                              /* [3674] OBJ_certificate_issuer */
0x55,0x1D,0x1E,                              /* [3677] OBJ_name_constraints */
0x55,0x1D,0x1F,                              /* [3680] OBJ_crl_distribution_points */
0x55,0x1D,0x20,                              /* [3683] OBJ_certificate_policies */
0x55,0x1D,0x20,0x00,                         /* [3686] OBJ_any_policy */
0x55,0x1D,0x21,                              /* [3690] OBJ_policy_mappings */
0x55,0x1D,0x23,                              /* [3693] OBJ_authority_key_identifier */
0x55,0x1D,0x24,                              /* [3696] OBJ_policy_constraints */
0x55,0x1D,0x25,                              /* [3699] OBJ_ext_key_usage */
0x55,0x1D,0x2E,                              /* [3702] OBJ_freshest_crl */
0x55,0x1D,0x36,                              /* [3705] OBJ_inhibit_any_policy */
0x55,0x1D,0x37,                              /* [3708] OBJ_target_information */
0x55,0x1D,0x38,                              /* [3711] OBJ_no_rev_avail */
0x55,0x1D,0x25,0x00,                         /* [3714] OBJ_anyExtendedKeyUsage */
0x60,0x86,0x48,0x01,0x86,0xF8,0x42,          /* [3718] OBJ_netscape */
0x60,0x86,0x48,0x01,0x86,0xF8,0x42,0x01,     /* [3725] OBJ_netscape_cert_extension */
0x60,0x86,0x48,0x01,0x86,0xF8,0x42,0x02,     /* [3733] OBJ_netscape_data_type */
0x60,0x86,0x48,0x01,0x86,0xF8,0x42,0x01,0x01,/* [3741] OBJ_netscape_cert_type */
0x60,0x86,0x48,0x01,0x86,0xF8,0x42,0x01,0x02,/* [3750] OBJ_netscape_base_url */
0x60,0x86,0x48,0x01,0x86,0xF8,0x42,0x01,0x03,/* [3759] OBJ_netscape_revocation_url */
0x60,0x86,0x48,0x01,0x86,0xF8,0x42,0x01,0x04,/* [3768] OBJ_netscape_ca_revocation_url */
0x60,0x86,0x48,0x01,0x86,0xF8,0x42,0x01,0x07,/* [3777] OBJ_netscape_renewal_url */
0x60,0x86,0x48,0x01,0x86,0xF8,0x42,0x01,0x08,/* [3786] OBJ_netscape_ca_policy_url */
0x60,0x86,0x48,0x01,0x86,0xF8,0x42,0x01,0x0C,/* [3795] OBJ_netscape_ssl_server_name */
0x60,0x86,0x48,0x01,0x86,0xF8,0x42,0x01,0x0D,/* [3804] OBJ_netscape_comment */
0x60,0x86,0x48,0x01,0x86,0xF8,0x42,0x02,0x05,/* [3813] OBJ_netscape_cert_sequence */
0x60,0x86,0x48,0x01,0x86,0xF8,0x42,0x04,0x01,/* [3822] OBJ_ns_sgc */
0x2B,                                        /* [3831] OBJ_org */
0x2B,0x06,                                   /* [3832] OBJ_dod */
0x2B,0x06,0x01,                              /* [3834] OBJ_iana */
0x2B,0x06,0x01,0x01,                         /* [3837] OBJ_Directory */
0x2B,0x06,0x01,0x02,                         /* [3841] OBJ_Management */
0x2B,0x06,0x01,0x03,                         /* [3845] OBJ_Experimental */
0x2B,0x06,0x01,0x04,                         /* [3849] OBJ_Private */
0x2B,0x06,0x01,0x05,                         /* [3853] OBJ_Security */
0x2B,0x06,0x01,0x06,                         /* [3857] OBJ_SNMPv2 */
0x2B,0x06,0x01,0x07,                         /* [3861] OBJ_Mail */
0x2B,0x06,0x01,0x04,0x01,                    /* [3865] OBJ_Enterprises */
0x2B,0x06,0x01,0x04,0x01,0x8B,0x3A,0x82,0x58,/* [3870] OBJ_dcObject */
0x2B,0x06,0x01,0x07,0x01,                    /* [3879] OBJ_mime_mhs */
0x2B,0x06,0x01,0x07,0x01,0x01,               /* [3884] OBJ_mime_mhs_headings */
0x2B,0x06,0x01,0x07,0x01,0x02,               /* [3890] OBJ_mime_mhs_bodies */
0x2B,0x06,0x01,0x07,0x01,0x01,0x01,          /* [3896] OBJ_id_hex_partial_message */
0x2B,0x06,0x01,0x07,0x01,0x01,0x02,          /* [3903] OBJ_id_hex_multipart_message */
0x29,0x01,0x01,0x85,0x1A,0x01,               /* [3910] OBJ_rle_compression */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x09,0x10,0x03,0x08,/* [3916] OBJ_zlib_compression */
0x60,0x86,0x48,0x01,0x65,0x03,0x04,0x01,0x01,/* [3927] OBJ_aes_128_ecb */
0x60,0x86,0x48,0x01,0x65,0x03,0x04,0x01,0x02,/* [3936] OBJ_aes_128_cbc */
0x60,0x86,0x48,0x01,0x65,0x03,0x04,0x01,0x03,/* [3945] OBJ_aes_128_ofb128 */
0x60,0x86,0x48,0x01,0x65,0x03,0x04,0x01,0x04,/* [3954] OBJ_aes_128_cfb128 */
0x60,0x86,0x48,0x01,0x65,0x03,0x04,0x01,0x05,/* [3963] OBJ_id_aes128_wrap */
0x60,0x86,0x48,0x01,0x65,0x03,0x04,0x01,0x06,/* [3972] OBJ_aes_128_gcm */
0x60,0x86,0x48,0x01,0x65,0x03,0x04,0x01,0x07,/* [3981] OBJ_aes_128_ccm */
0x60,0x86,0x48,0x01,0x65,0x03,0x04,0x01,0x08,/* [3990] OBJ_id_aes128_wrap_pad */
0x60,0x86,0x48,0x01,0x65,0x03,0x04,0x01,0x15,/* [3999] OBJ_aes_192_ecb */
0x60,0x86,0x48,0x01,0x65,0x03,0x04,0x01,0x16,/* [4008] OBJ_aes_192_cbc */
0x60,0x86,0x48,0x01,0x65,0x03,0x04,0x01,0x17,/* [4017] OBJ_aes_192_ofb128 */
0x60,0x86,0x48,0x01,0x65,0x03,0x04,0x01,0x18,/* [4026] OBJ_aes_192_cfb128 */
0x60,0x86,0x48,0x01,0x65,0x03,0x04,0x01,0x19,/* [4035] OBJ_id_aes192_wrap */
0x60,0x86,0x48,0x01,0x65,0x03,0x04,0x01,0x1A,/* [4044] OBJ_aes_192_gcm */
0x60,0x86,0x48,0x01,0x65,0x03,0x04,0x01,0x1B,/* [4053] OBJ_aes_192_ccm */
0x60,0x86,0x48,0x01,0x65,0x03,0x04,0x01,0x1C,/* [4062] OBJ_id_aes192_wrap_pad */
0x60,0x86,0x48,0x01,0x65,0x03,0x04,0x01,0x29,/* [4071] OBJ_aes_256_ecb */
0x60,0x86,0x48,0x01,0x65,0x03,0x04,0x01,0x2A,/* [4080] OBJ_aes_256_cbc */
0x60,0x86,0x48,0x01,0x65,0x03,0x04,0x01,0x2B,/* [4089] OBJ_aes_256_ofb128 */
0x60,0x86,0x48,0x01,0x65,0x03,0x04,0x01,0x2C,/* [4098] OBJ_aes_256_cfb128 */
0x60,0x86,0x48,0x01,0x65,0x03,0x04,0x01,0x2D,/* [4107] OBJ_id_aes256_wrap */
0x60,0x86,0x48,0x01,0x65,0x03,0x04,0x01,0x2E,/* [4116] OBJ_aes_256_gcm */
0x60,0x86,0x48,0x01,0x65,0x03,0x04,0x01,0x2F,/* [4125] OBJ_aes_256_ccm */
0x60,0x86,0x48,0x01,0x65,0x03,0x04,0x01,0x30,/* [4134] OBJ_id_aes256_wrap_pad */
0x60,0x86,0x48,0x01,0x65,0x03,0x04,0x02,0x01,/* [4143] OBJ_speck_128_cbc */
0x60,0x86,0x48,0x01,0x65,0x03,0x04,0x02,0x02,/* [4152] OBJ_speck_192_cbc */
0x60,0x86,0x48,0x01,0x65,0x03,0x04,0x02,0x03,/* [4161] OBJ_speck_256_cbc */
0x60,0x86,0x48,0x01,0x65,0x03,0x04,0x02,0x01,/* [4170] OBJ_sha256 */
0x60,0x86,0x48,0x01,0x65,0x03,0x04,0x02,0x02,/* [4179] OBJ_sha384 */
0x60,0x86,0x48,0x01,0x65,0x03,0x04,0x02,0x03,/* [4188] OBJ_sha512 */
0x60,0x86,0x48,0x01,0x65,0x03,0x04,0x02,0x04,/* [4197] OBJ_sha224 */
0x60,0x86,0x48,0x01,0x65,0x03,0x04,0x03,0x01,/* [4206] OBJ_dsa_with_SHA224 */
0x60,0x86,0x48,0x01,0x65,0x03,0x04,0x03,0x02,/* [4215] OBJ_dsa_with_SHA256 */
0x55,0x1D,0x17,                              /* [4224] OBJ_hold_instruction_code */
0x2A,0x86,0x48,0xCE,0x38,0x02,0x01,          /* [4227] OBJ_hold_instruction_none */
0x2A,0x86,0x48,0xCE,0x38,0x02,0x02,          /* [4234] OBJ_hold_instruction_call_issuer */
0x2A,0x86,0x48,0xCE,0x38,0x02,0x03,          /* [4241] OBJ_hold_instruction_reject */
0x09,                                        /* [4248] OBJ_data */
0x09,0x92,0x26,                              /* [4249] OBJ_pss */
0x09,0x92,0x26,0x89,0x93,0xF2,0x2C,          /* [4252] OBJ_ucl */
0x09,0x92,0x26,0x89,0x93,0xF2,0x2C,0x64,     /* [4259] OBJ_pilot */
0x09,0x92,0x26,0x89,0x93,0xF2,0x2C,0x64,0x01,/* [4267] OBJ_pilotAttributeType */
0x09,0x92,0x26,0x89,0x93,0xF2,0x2C,0x64,0x03,/* [4276] OBJ_pilotAttributeSyntax */
0x09,0x92,0x26,0x89,0x93,0xF2,0x2C,0x64,0x04,/* [4285] OBJ_pilotObjectClass */
0x09,0x92,0x26,0x89,0x93,0xF2,0x2C,0x64,0x0A,/* [4294] OBJ_pilotGroups */
0x09,0x92,0x26,0x89,0x93,0xF2,0x2C,0x64,0x03,0x04,/* [4303] OBJ_iA5StringSyntax */
0x09,0x92,0x26,0x89,0x93,0xF2,0x2C,0x64,0x03,0x05,/* [4313] OBJ_caseIgnoreIA5StringSyntax */
0x09,0x92,0x26,0x89,0x93,0xF2,0x2C,0x64,0x04,0x03,/* [4323] OBJ_pilotObject */
0x09,0x92,0x26,0x89,0x93,0xF2,0x2C,0x64,0x04,0x04,/* [4333] OBJ_pilotPerson */
0x09,0x92,0x26,0x89,0x93,0xF2,0x2C,0x64,0x04,0x05,/* [4343] OBJ_account */
0x09,0x92,0x26,0x89,0x93,0xF2,0x2C,0x64,0x04,0x06,/* [4353] OBJ_document */
0x09,0x92,0x26,0x89,0x93,0xF2,0x2C,0x64,0x04,0x07,/* [4363] OBJ_room */
0x09,0x92,0x26,0x89,0x93,0xF2,0x2C,0x64,0x04,0x09,/* [4373] OBJ_documentSeries */
0x09,0x92,0x26,0x89,0x93,0xF2,0x2C,0x64,0x04,0x0D,/* [4383] OBJ_Domain */
0x09,0x92,0x26,0x89,0x93,0xF2,0x2C,0x64,0x04,0x0E,/* [4393] OBJ_rFC822localPart */
0x09,0x92,0x26,0x89,0x93,0xF2,0x2C,0x64,0x04,0x0F,/* [4403] OBJ_dNSDomain */
0x09,0x92,0x26,0x89,0x93,0xF2,0x2C,0x64,0x04,0x11,/* [4413] OBJ_domainRelatedObject */
0x09,0x92,0x26,0x89,0x93,0xF2,0x2C,0x64,0x04,0x12,/* [4423] OBJ_friendlyCountry */
0x09,0x92,0x26,0x89,0x93,0xF2,0x2C,0x64,0x04,0x13,/* [4433] OBJ_simpleSecurityObject */
0x09,0x92,0x26,0x89,0x93,0xF2,0x2C,0x64,0x04,0x14,/* [4443] OBJ_pilotOrganization */
0x09,0x92,0x26,0x89,0x93,0xF2,0x2C,0x64,0x04,0x15,/* [4453] OBJ_pilotDSA */
0x09,0x92,0x26,0x89,0x93,0xF2,0x2C,0x64,0x04,0x16,/* [4463] OBJ_qualityLabelledData */
0x09,0x92,0x26,0x89,0x93,0xF2,0x2C,0x64,0x01,0x01,/* [4473] OBJ_userId */
0x09,0x92,0x26,0x89,0x93,0xF2,0x2C,0x64,0x01,0x02,/* [4483] OBJ_textEncodedORAddress */
0x09,0x92,0x26,0x89,0x93,0xF2,0x2C,0x64,0x01,0x03,/* [4493] OBJ_rfc822Mailbox */
0x09,0x92,0x26,0x89,0x93,0xF2,0x2C,0x64,0x01,0x04,/* [4503] OBJ_info */
0x09,0x92,0x26,0x89,0x93,0xF2,0x2C,0x64,0x01,0x05,/* [4513] OBJ_favouriteDrink */
0x09,0x92,0x26,0x89,0x93,0xF2,0x2C,0x64,0x01,0x06,/* [4523] OBJ_roomNumber */
0x09,0x92,0x26,0x89,0x93,0xF2,0x2C,0x64,0x01,0x07,/* [4533] OBJ_photo */
0x09,0x92,0x26,0x89,0x93,0xF2,0x2C,0x64,0x01,0x08,/* [4543] OBJ_userClass */
0x09,0x92,0x26,0x89,0x93,0xF2,0x2C,0x64,0x01,0x09,/* [4553] OBJ_host */
0x09,0x92,0x26,0x89,0x93,0xF2,0x2C,0x64,0x01,0x0A,/* [4563] OBJ_manager */
0x09,0x92,0x26,0x89,0x93,0xF2,0x2C,0x64,0x01,0x0B,/* [4573] OBJ_documentIdentifier */
0x09,0x92,0x26,0x89,0x93,0xF2,0x2C,0x64,0x01,0x0C,/* [4583] OBJ_documentTitle */
0x09,0x92,0x26,0x89,0x93,0xF2,0x2C,0x64,0x01,0x0D,/* [4593] OBJ_documentVersion */
0x09,0x92,0x26,0x89,0x93,0xF2,0x2C,0x64,0x01,0x0E,/* [4603] OBJ_documentAuthor */
0x09,0x92,0x26,0x89,0x93,0xF2,0x2C,0x64,0x01,0x0F,/* [4613] OBJ_documentLocation */
0x09,0x92,0x26,0x89,0x93,0xF2,0x2C,0x64,0x01,0x14,/* [4623] OBJ_homeTelephoneNumber */
0x09,0x92,0x26,0x89,0x93,0xF2,0x2C,0x64,0x01,0x15,/* [4633] OBJ_secretary */
0x09,0x92,0x26,0x89,0x93,0xF2,0x2C,0x64,0x01,0x16,/* [4643] OBJ_otherMailbox */
0x09,0x92,0x26,0x89,0x93,0xF2,0x2C,0x64,0x01,0x17,/* [4653] OBJ_lastModifiedTime */
0x09,0x92,0x26,0x89,0x93,0xF2,0x2C,0x64,0x01,0x18,/* [4663] OBJ_lastModifiedBy */
0x09,0x92,0x26,0x89,0x93,0xF2,0x2C,0x64,0x01,0x19,/* [4673] OBJ_domainComponent */
0x09,0x92,0x26,0x89,0x93,0xF2,0x2C,0x64,0x01,0x1A,/* [4683] OBJ_aRecord */
0x09,0x92,0x26,0x89,0x93,0xF2,0x2C,0x64,0x01,0x1B,/* [4693] OBJ_pilotAttributeType27 */
0x09,0x92,0x26,0x89,0x93,0xF2,0x2C,0x64,0x01,0x1C,/* [4703] OBJ_mXRecord */
0x09,0x92,0x26,0x89,0x93,0xF2,0x2C,0x64,0x01,0x1D,/* [4713] OBJ_nSRecord */
0x09,0x92,0x26,0x89,0x93,0xF2,0x2C,0x64,0x01,0x1E,/* [4723] OBJ_sOARecord */
0x09,0x92,0x26,0x89,0x93,0xF2,0x2C,0x64,0x01,0x1F,/* [4733] OBJ_cNAMERecord */
0x09,0x92,0x26,0x89,0x93,0xF2,0x2C,0x64,0x01,0x25,/* [4743] OBJ_associatedDomain */
0x09,0x92,0x26,0x89,0x93,0xF2,0x2C,0x64,0x01,0x26,/* [4753] OBJ_associatedName */
0x09,0x92,0x26,0x89,0x93,0xF2,0x2C,0x64,0x01,0x27,/* [4763] OBJ_homePostalAddress */
0x09,0x92,0x26,0x89,0x93,0xF2,0x2C,0x64,0x01,0x28,/* [4773] OBJ_personalTitle */
0x09,0x92,0x26,0x89,0x93,0xF2,0x2C,0x64,0x01,0x29,/* [4783] OBJ_mobileTelephoneNumber */
0x09,0x92,0x26,0x89,0x93,0xF2,0x2C,0x64,0x01,0x2A,/* [4793] OBJ_pagerTelephoneNumber */
0x09,0x92,0x26,0x89,0x93,0xF2,0x2C,0x64,0x01,0x2B,/* [4803] OBJ_friendlyCountryName */
0x09,0x92,0x26,0x89,0x93,0xF2,0x2C,0x64,0x01,0x2D,/* [4813] OBJ_organizationalStatus */
0x09,0x92,0x26,0x89,0x93,0xF2,0x2C,0x64,0x01,0x2E,/* [4823] OBJ_janetMailbox */
0x09,0x92,0x26,0x89,0x93,0xF2,0x2C,0x64,0x01,0x2F,/* [4833] OBJ_mailPreferenceOption */
0x09,0x92,0x26,0x89,0x93,0xF2,0x2C,0x64,0x01,0x30,/* [4843] OBJ_buildingName */
0x09,0x92,0x26,0x89,0x93,0xF2,0x2C,0x64,0x01,0x31,/* [4853] OBJ_dSAQuality */
0x09,0x92,0x26,0x89,0x93,0xF2,0x2C,0x64,0x01,0x32,/* [4863] OBJ_singleLevelQuality */
0x09,0x92,0x26,0x89,0x93,0xF2,0x2C,0x64,0x01,0x33,/* [4873] OBJ_subtreeMinimumQuality */
0x09,0x92,0x26,0x89,0x93,0xF2,0x2C,0x64,0x01,0x34,/* [4883] OBJ_subtreeMaximumQuality */
0x09,0x92,0x26,0x89,0x93,0xF2,0x2C,0x64,0x01,0x35,/* [4893] OBJ_personalSignature */
0x09,0x92,0x26,0x89,0x93,0xF2,0x2C,0x64,0x01,0x36,/* [4903] OBJ_dITRedirect */
0x09,0x92,0x26,0x89,0x93,0xF2,0x2C,0x64,0x01,0x37,/* [4913] OBJ_audio */
0x09,0x92,0x26,0x89,0x93,0xF2,0x2C,0x64,0x01,0x38,/* [4923] OBJ_documentPublisher */
0x67,0x2A,                                   /* [4933] OBJ_id_set */
0x67,0x2A,0x00,                              /* [4935] OBJ_set_ctype */
0x67,0x2A,0x01,                              /* [4938] OBJ_set_msgExt */
0x67,0x2A,0x03,                              /* [4941] OBJ_set_attr */
0x67,0x2A,0x05,                              /* [4944] OBJ_set_policy */
0x67,0x2A,0x07,                              /* [4947] OBJ_set_certExt */
0x67,0x2A,0x08,                              /* [4950] OBJ_set_brand */
0x67,0x2A,0x00,0x00,                         /* [4953] OBJ_setct_PANData */
0x67,0x2A,0x00,0x01,                         /* [4957] OBJ_setct_PANToken */
0x67,0x2A,0x00,0x02,                         /* [4961] OBJ_setct_PANOnly */
0x67,0x2A,0x00,0x03,                         /* [4965] OBJ_setct_OIData */
0x67,0x2A,0x00,0x04,                         /* [4969] OBJ_setct_PI */
0x67,0x2A,0x00,0x05,                         /* [4973] OBJ_setct_PIData */
0x67,0x2A,0x00,0x06,                         /* [4977] OBJ_setct_PIDataUnsigned */
0x67,0x2A,0x00,0x07,                         /* [4981] OBJ_setct_HODInput */
0x67,0x2A,0x00,0x08,                         /* [4985] OBJ_setct_AuthResBaggage */
0x67,0x2A,0x00,0x09,                         /* [4989] OBJ_setct_AuthRevReqBaggage */
0x67,0x2A,0x00,0x0A,                         /* [4993] OBJ_setct_AuthRevResBaggage */
0x67,0x2A,0x00,0x0B,                         /* [4997] OBJ_setct_CapTokenSeq */
0x67,0x2A,0x00,0x0C,                         /* [5001] OBJ_setct_PInitResData */
0x67,0x2A,0x00,0x0D,                         /* [5005] OBJ_setct_PI_TBS */
0x67,0x2A,0x00,0x0E,                         /* [5009] OBJ_setct_PResData */
0x67,0x2A,0x00,0x10,                         /* [5013] OBJ_setct_AuthReqTBS */
0x67,0x2A,0x00,0x11,                         /* [5017] OBJ_setct_AuthResTBS */
0x67,0x2A,0x00,0x12,                         /* [5021] OBJ_setct_AuthResTBSX */
0x67,0x2A,0x00,0x13,                         /* [5025] OBJ_setct_AuthTokenTBS */
0x67,0x2A,0x00,0x14,                         /* [5029] OBJ_setct_CapTokenData */
0x67,0x2A,0x00,0x15,                         /* [5033] OBJ_setct_CapTokenTBS */
0x67,0x2A,0x00,0x16,                         /* [5037] OBJ_setct_AcqCardCodeMsg */
0x67,0x2A,0x00,0x17,                         /* [5041] OBJ_setct_AuthRevReqTBS */
0x67,0x2A,0x00,0x18,                         /* [5045] OBJ_setct_AuthRevResData */
0x67,0x2A,0x00,0x19,                         /* [5049] OBJ_setct_AuthRevResTBS */
0x67,0x2A,0x00,0x1A,                         /* [5053] OBJ_setct_CapReqTBS */
0x67,0x2A,0x00,0x1B,                         /* [5057] OBJ_setct_CapReqTBSX */
0x67,0x2A,0x00,0x1C,                         /* [5061] OBJ_setct_CapResData */
0x67,0x2A,0x00,0x1D,                         /* [5065] OBJ_setct_CapRevReqTBS */
0x67,0x2A,0x00,0x1E,                         /* [5069] OBJ_setct_CapRevReqTBSX */
0x67,0x2A,0x00,0x1F,                         /* [5073] OBJ_setct_CapRevResData */
0x67,0x2A,0x00,0x20,                         /* [5077] OBJ_setct_CredReqTBS */
0x67,0x2A,0x00,0x21,                         /* [5081] OBJ_setct_CredReqTBSX */
0x67,0x2A,0x00,0x22,                         /* [5085] OBJ_setct_CredResData */
0x67,0x2A,0x00,0x23,                         /* [5089] OBJ_setct_CredRevReqTBS */
0x67,0x2A,0x00,0x24,                         /* [5093] OBJ_setct_CredRevReqTBSX */
0x67,0x2A,0x00,0x25,                         /* [5097] OBJ_setct_CredRevResData */
0x67,0x2A,0x00,0x26,                         /* [5101] OBJ_setct_PCertReqData */
0x67,0x2A,0x00,0x27,                         /* [5105] OBJ_setct_PCertResTBS */
0x67,0x2A,0x00,0x28,                         /* [5109] OBJ_setct_BatchAdminReqData */
0x67,0x2A,0x00,0x29,                         /* [5113] OBJ_setct_BatchAdminResData */
0x67,0x2A,0x00,0x2A,                         /* [5117] OBJ_setct_CardCInitResTBS */
0x67,0x2A,0x00,0x2B,                         /* [5121] OBJ_setct_MeAqCInitResTBS */
0x67,0x2A,0x00,0x2C,                         /* [5125] OBJ_setct_RegFormResTBS */
0x67,0x2A,0x00,0x2D,                         /* [5129] OBJ_setct_CertReqData */
0x67,0x2A,0x00,0x2E,                         /* [5133] OBJ_setct_CertReqTBS */
0x67,0x2A,0x00,0x2F,                         /* [5137] OBJ_setct_CertResData */
0x67,0x2A,0x00,0x30,                         /* [5141] OBJ_setct_CertInqReqTBS */
0x67,0x2A,0x00,0x31,                         /* [5145] OBJ_setct_ErrorTBS */
0x67,0x2A,0x00,0x32,                         /* [5149] OBJ_setct_PIDualSignedTBE */
0x67,0x2A,0x00,0x33,                         /* [5153] OBJ_setct_PIUnsignedTBE */
0x67,0x2A,0x00,0x34,                         /* [5157] OBJ_setct_AuthReqTBE */
0x67,0x2A,0x00,0x35,                         /* [5161] OBJ_setct_AuthResTBE */
0x67,0x2A,0x00,0x36,                         /* [5165] OBJ_setct_AuthResTBEX */
0x67,0x2A,0x00,0x37,                         /* [5169] OBJ_setct_AuthTokenTBE */
0x67,0x2A,0x00,0x38,                         /* [5173] OBJ_setct_CapTokenTBE */
0x67,0x2A,0x00,0x39,                         /* [5177] OBJ_setct_CapTokenTBEX */
0x67,0x2A,0x00,0x3A,                         /* [5181] OBJ_setct_AcqCardCodeMsgTBE */
0x67,0x2A,0x00,0x3B,                         /* [5185] OBJ_setct_AuthRevReqTBE */
0x67,0x2A,0x00,0x3C,                         /* [5189] OBJ_setct_AuthRevResTBE */
0x67,0x2A,0x00,0x3D,                         /* [5193] OBJ_setct_AuthRevResTBEB */
0x67,0x2A,0x00,0x3E,                         /* [5197] OBJ_setct_CapReqTBE */
0x67,0x2A,0x00,0x3F,                         /* [5201] OBJ_setct_CapReqTBEX */
0x67,0x2A,0x00,0x40,                         /* [5205] OBJ_setct_CapResTBE */
0x67,0x2A,0x00,0x41,                         /* [5209] OBJ_setct_CapRevReqTBE */
0x67,0x2A,0x00,0x42,                         /* [5213] OBJ_setct_CapRevReqTBEX */
0x67,0x2A,0x00,0x43,                         /* [5217] OBJ_setct_CapRevResTBE */
0x67,0x2A,0x00,0x44,                         /* [5221] OBJ_setct_CredReqTBE */
0x67,0x2A,0x00,0x45,                         /* [5225] OBJ_setct_CredReqTBEX */
0x67,0x2A,0x00,0x46,                         /* [5229] OBJ_setct_CredResTBE */
0x67,0x2A,0x00,0x47,                         /* [5233] OBJ_setct_CredRevReqTBE */
0x67,0x2A,0x00,0x48,                         /* [5237] OBJ_setct_CredRevReqTBEX */
0x67,0x2A,0x00,0x49,                         /* [5241] OBJ_setct_CredRevResTBE */
0x67,0x2A,0x00,0x4A,                         /* [5245] OBJ_setct_BatchAdminReqTBE */
0x67,0x2A,0x00,0x4B,                         /* [5249] OBJ_setct_BatchAdminResTBE */
0x67,0x2A,0x00,0x4C,                         /* [5253] OBJ_setct_RegFormReqTBE */
0x67,0x2A,0x00,0x4D,                         /* [5257] OBJ_setct_CertReqTBE */
0x67,0x2A,0x00,0x4E,                         /* [5261] OBJ_setct_CertReqTBEX */
0x67,0x2A,0x00,0x4F,                         /* [5265] OBJ_setct_CertResTBE */
0x67,0x2A,0x00,0x50,                         /* [5269] OBJ_setct_CRLNotificationTBS */
0x67,0x2A,0x00,0x51,                         /* [5273] OBJ_setct_CRLNotificationResTBS */
0x67,0x2A,0x00,0x52,                         /* [5277] OBJ_setct_BCIDistributionTBS */
0x67,0x2A,0x01,0x01,                         /* [5281] OBJ_setext_genCrypt */
0x67,0x2A,0x01,0x03,                         /* [5285] OBJ_setext_miAuth */
0x67,0x2A,0x01,0x04,                         /* [5289] OBJ_setext_pinSecure */
0x67,0x2A,0x01,0x05,                         /* [5293] OBJ_setext_pinAny */
0x67,0x2A,0x01,0x07,                         /* [5297] OBJ_setext_track2 */
0x67,0x2A,0x01,0x08,                         /* [5301] OBJ_setext_cv */
0x67,0x2A,0x05,0x00,                         /* [5305] OBJ_set_policy_root */
0x67,0x2A,0x07,0x00,                         /* [5309] OBJ_setCext_hashedRoot */
0x67,0x2A,0x07,0x01,                         /* [5313] OBJ_setCext_certType */
0x67,0x2A,0x07,0x02,                         /* [5317] OBJ_setCext_merchData */
0x67,0x2A,0x07,0x03,                         /* [5321] OBJ_setCext_cCertRequired */
0x67,0x2A,0x07,0x04,                         /* [5325] OBJ_setCext_tunneling */
0x67,0x2A,0x07,0x05,                         /* [5329] OBJ_setCext_setExt */
0x67,0x2A,0x07,0x06,                         /* [5333] OBJ_setCext_setQualf */
0x67,0x2A,0x07,0x07,                         /* [5337] OBJ_setCext_PGWYcapabilities */
0x67,0x2A,0x07,0x08,                         /* [5341] OBJ_setCext_TokenIdentifier */
0x67,0x2A,0x07,0x09,                         /* [5345] OBJ_setCext_Track2Data */
0x67,0x2A,0x07,0x0A,                         /* [5349] OBJ_setCext_TokenType */
0x67,0x2A,0x07,0x0B,                         /* [5353] OBJ_setCext_IssuerCapabilities */
0x67,0x2A,0x03,0x00,                         /* [5357] OBJ_setAttr_Cert */
0x67,0x2A,0x03,0x01,                         /* [5361] OBJ_setAttr_PGWYcap */
0x67,0x2A,0x03,0x02,                         /* [5365] OBJ_setAttr_TokenType */
0x67,0x2A,0x03,0x03,                         /* [5369] OBJ_setAttr_IssCap */
0x67,0x2A,0x03,0x00,0x00,                    /* [5373] OBJ_set_rootKeyThumb */
0x67,0x2A,0x03,0x00,0x01,                    /* [5378] OBJ_set_addPolicy */
0x67,0x2A,0x03,0x02,0x01,                    /* [5383] OBJ_setAttr_Token_EMV */
0x67,0x2A,0x03,0x02,0x02,                    /* [5388] OBJ_setAttr_Token_B0Prime */
0x67,0x2A,0x03,0x03,0x03,                    /* [5393] OBJ_setAttr_IssCap_CVM */
0x67,0x2A,0x03,0x03,0x04,                    /* [5398] OBJ_setAttr_IssCap_T2 */
0x67,0x2A,0x03,0x03,0x05,                    /* [5403] OBJ_setAttr_IssCap_Sig */
0x67,0x2A,0x03,0x03,0x03,0x01,               /* [5408] OBJ_setAttr_GenCryptgrm */
0x67,0x2A,0x03,0x03,0x04,0x01,               /* [5414] OBJ_setAttr_T2Enc */
0x67,0x2A,0x03,0x03,0x04,0x02,               /* [5420] OBJ_setAttr_T2cleartxt */
0x67,0x2A,0x03,0x03,0x05,0x01,               /* [5426] OBJ_setAttr_TokICCsig */
0x67,0x2A,0x03,0x03,0x05,0x02,               /* [5432] OBJ_setAttr_SecDevSig */
0x67,0x2A,0x08,0x01,                         /* [5438] OBJ_set_brand_IATA_ATA */
0x67,0x2A,0x08,0x1E,                         /* [5442] OBJ_set_brand_Diners */
0x67,0x2A,0x08,0x22,                         /* [5446] OBJ_set_brand_AmericanExpress */
0x67,0x2A,0x08,0x23,                         /* [5450] OBJ_set_brand_JCB */
0x67,0x2A,0x08,0x04,                         /* [5454] OBJ_set_brand_Visa */
0x67,0x2A,0x08,0x05,                         /* [5458] OBJ_set_brand_MasterCard */
0x67,0x2A,0x08,0xAE,0x7B,                    /* [5462] OBJ_set_brand_Novus */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x03,0x0A,     /* [5467] OBJ_des_cdmf */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x01,0x06,/* [5475] OBJ_rsaOAEPEncryptionSET */
0x28,0xCF,0x06,0x03,0x00,0x37,               /* [5484] OBJ_whirlpool */
0x2A,0x85,0x03,0x02,0x02,                    /* [5490] OBJ_cryptopro */
0x2A,0x85,0x03,0x02,0x09,                    /* [5495] OBJ_cryptocom */
0x2A,0x85,0x03,0x02,0x02,0x03,               /* [5500] OBJ_id_GostR3411_94_with_GostR3410_2001 */
0x2A,0x85,0x03,0x02,0x02,0x04,               /* [5506] OBJ_id_GostR3411_94_with_GostR3410_94 */
0x2A,0x85,0x03,0x02,0x02,0x09,               /* [5512] OBJ_id_GostR3411_94 */
0x2A,0x85,0x03,0x02,0x02,0x0A,               /* [5518] OBJ_id_HMACGostR3411_94 */
0x2A,0x85,0x03,0x02,0x02,0x13,               /* [5524] OBJ_id_GostR3410_2001 */
0x2A,0x85,0x03,0x02,0x02,0x14,               /* [5530] OBJ_id_GostR3410_94 */
0x2A,0x85,0x03,0x02,0x02,0x15,               /* [5536] OBJ_id_Gost28147_89 */
0x2A,0x85,0x03,0x02,0x02,0x16,               /* [5542] OBJ_id_Gost28147_89_MAC */
0x2A,0x85,0x03,0x02,0x02,0x17,               /* [5548] OBJ_id_GostR3411_94_prf */
0x2A,0x85,0x03,0x02,0x02,0x62,               /* [5554] OBJ_id_GostR3410_2001DH */
0x2A,0x85,0x03,0x02,0x02,0x63,               /* [5560] OBJ_id_GostR3410_94DH */
0x2A,0x85,0x03,0x02,0x02,0x0E,0x01,          /* [5566] OBJ_id_Gost28147_89_CryptoPro_KeyMeshing */
0x2A,0x85,0x03,0x02,0x02,0x0E,0x00,          /* [5573] OBJ_id_Gost28147_89_None_KeyMeshing */
0x2A,0x85,0x03,0x02,0x02,0x1E,0x00,          /* [5580] OBJ_id_GostR3411_94_TestParamSet */
0x2A,0x85,0x03,0x02,0x02,0x1E,0x01,          /* [5587] OBJ_id_GostR3411_94_CryptoProParamSet */
0x2A,0x85,0x03,0x02,0x02,0x1F,0x00,          /* [5594] OBJ_id_Gost28147_89_TestParamSet */
0x2A,0x85,0x03,0x02,0x02,0x1F,0x01,          /* [5601] OBJ_id_Gost28147_89_CryptoPro_A_ParamSet */
0x2A,0x85,0x03,0x02,0x02,0x1F,0x02,          /* [5608] OBJ_id_Gost28147_89_CryptoPro_B_ParamSet */
0x2A,0x85,0x03,0x02,0x02,0x1F,0x03,          /* [5615] OBJ_id_Gost28147_89_CryptoPro_C_ParamSet */
0x2A,0x85,0x03,0x02,0x02,0x1F,0x04,          /* [5622] OBJ_id_Gost28147_89_CryptoPro_D_ParamSet */
0x2A,0x85,0x03,0x02,0x02,0x1F,0x05,          /* [5629] OBJ_id_Gost28147_89_CryptoPro_Oscar_1_1_ParamSet */
0x2A,0x85,0x03,0x02,0x02,0x1F,0x06,          /* [5636] OBJ_id_Gost28147_89_CryptoPro_Oscar_1_0_ParamSet */
0x2A,0x85,0x03,0x02,0x02,0x1F,0x07,          /* [5643] OBJ_id_Gost28147_89_CryptoPro_RIC_1_ParamSet */
0x2A,0x85,0x03,0x02,0x02,0x20,0x00,          /* [5650] OBJ_id_GostR3410_94_TestParamSet */
0x2A,0x85,0x03,0x02,0x02,0x20,0x02,          /* [5657] OBJ_id_GostR3410_94_CryptoPro_A_ParamSet */
0x2A,0x85,0x03,0x02,0x02,0x20,0x03,          /* [5664] OBJ_id_GostR3410_94_CryptoPro_B_ParamSet */
0x2A,0x85,0x03,0x02,0x02,0x20,0x04,          /* [5671] OBJ_id_GostR3410_94_CryptoPro_C_ParamSet */
0x2A,0x85,0x03,0x02,0x02,0x20,0x05,          /* [5678] OBJ_id_GostR3410_94_CryptoPro_D_ParamSet */
0x2A,0x85,0x03,0x02,0x02,0x21,0x01,          /* [5685] OBJ_id_GostR3410_94_CryptoPro_XchA_ParamSet */
0x2A,0x85,0x03,0x02,0x02,0x21,0x02,          /* [5692] OBJ_id_GostR3410_94_CryptoPro_XchB_ParamSet */
0x2A,0x85,0x03,0x02,0x02,0x21,0x03,          /* [5699] OBJ_id_GostR3410_94_CryptoPro_XchC_ParamSet */
0x2A,0x85,0x03,0x02,0x02,0x23,0x00,          /* [5706] OBJ_id_GostR3410_2001_TestParamSet */
0x2A,0x85,0x03,0x02,0x02,0x23,0x01,          /* [5713] OBJ_id_GostR3410_2001_CryptoPro_A_ParamSet */
0x2A,0x85,0x03,0x02,0x02,0x23,0x02,          /* [5720] OBJ_id_GostR3410_2001_CryptoPro_B_ParamSet */
0x2A,0x85,0x03,0x02,0x02,0x23,0x03,          /* [5727] OBJ_id_GostR3410_2001_CryptoPro_C_ParamSet */
0x2A,0x85,0x03,0x02,0x02,0x24,0x00,          /* [5734] OBJ_id_GostR3410_2001_CryptoPro_XchA_ParamSet */
0x2A,0x85,0x03,0x02,0x02,0x24,0x01,          /* [5741] OBJ_id_GostR3410_2001_CryptoPro_XchB_ParamSet */
0x2A,0x85,0x03,0x02,0x02,0x14,0x01,          /* [5748] OBJ_id_GostR3410_94_a */
0x2A,0x85,0x03,0x02,0x02,0x14,0x02,          /* [5755] OBJ_id_GostR3410_94_aBis */
0x2A,0x85,0x03,0x02,0x02,0x14,0x03,          /* [5762] OBJ_id_GostR3410_94_b */
0x2A,0x85,0x03,0x02,0x02,0x14,0x04,          /* [5769] OBJ_id_GostR3410_94_bBis */
0x2A,0x85,0x03,0x02,0x09,0x01,0x06,0x01,     /* [5776] OBJ_id_Gost28147_89_cc */
0x2A,0x85,0x03,0x02,0x09,0x01,0x05,0x03,     /* [5784] OBJ_id_GostR3410_94_cc */
0x2A,0x85,0x03,0x02,0x09,0x01,0x05,0x04,     /* [5792] OBJ_id_GostR3410_2001_cc */
0x2A,0x85,0x03,0x02,0x09,0x01,0x03,0x03,     /* [5800] OBJ_id_GostR3411_94_with_GostR3410_94_cc */
0x2A,0x85,0x03,0x02,0x09,0x01,0x03,0x04,     /* [5808] OBJ_id_GostR3411_94_with_GostR3410_2001_cc */
0x2A,0x85,0x03,0x02,0x09,0x01,0x08,0x01,     /* [5816] OBJ_id_GostR3410_2001_ParamSet_cc */
0x2A,0x83,0x08,0x8C,0x9A,0x4B,0x3D,0x01,0x01,0x01,0x02,/* [5824] OBJ_camellia_128_cbc */
0x2A,0x83,0x08,0x8C,0x9A,0x4B,0x3D,0x01,0x01,0x01,0x03,/* [5835] OBJ_camellia_192_cbc */
0x2A,0x83,0x08,0x8C,0x9A,0x4B,0x3D,0x01,0x01,0x01,0x04,/* [5846] OBJ_camellia_256_cbc */
0x2A,0x83,0x08,0x8C,0x9A,0x4B,0x3D,0x01,0x01,0x03,0x02,/* [5857] OBJ_id_camellia128_wrap */
0x2A,0x83,0x08,0x8C,0x9A,0x4B,0x3D,0x01,0x01,0x03,0x03,/* [5868] OBJ_id_camellia192_wrap */
0x2A,0x83,0x08,0x8C,0x9A,0x4B,0x3D,0x01,0x01,0x03,0x04,/* [5879] OBJ_id_camellia256_wrap */
0x03,0xA2,0x31,0x05,0x03,0x01,0x09,0x01,     /* [5890] OBJ_camellia_128_ecb */
0x03,0xA2,0x31,0x05,0x03,0x01,0x09,0x03,     /* [5898] OBJ_camellia_128_ofb128 */
0x03,0xA2,0x31,0x05,0x03,0x01,0x09,0x04,     /* [5906] OBJ_camellia_128_cfb128 */
0x03,0xA2,0x31,0x05,0x03,0x01,0x09,0x15,     /* [5914] OBJ_camellia_192_ecb */
0x03,0xA2,0x31,0x05,0x03,0x01,0x09,0x17,     /* [5922] OBJ_camellia_192_ofb128 */
0x03,0xA2,0x31,0x05,0x03,0x01,0x09,0x18,     /* [5930] OBJ_camellia_192_cfb128 */
0x03,0xA2,0x31,0x05,0x03,0x01,0x09,0x29,     /* [5938] OBJ_camellia_256_ecb */
0x03,0xA2,0x31,0x05,0x03,0x01,0x09,0x2B,     /* [5946] OBJ_camellia_256_ofb128 */
0x03,0xA2,0x31,0x05,0x03,0x01,0x09,0x2C,     /* [5954] OBJ_camellia_256_cfb128 */
0x2A,0x83,0x1A,0x8C,0x9A,0x44,               /* [5962] OBJ_kisa */
0x2A,0x83,0x1A,0x8C,0x9A,0x44,0x01,0x03,     /* [5968] OBJ_seed_ecb */
0x2A,0x83,0x1A,0x8C,0x9A,0x44,0x01,0x04,     /* [5976] OBJ_seed_cbc */
0x2A,0x83,0x1A,0x8C,0x9A,0x44,0x01,0x05,     /* [5984] OBJ_seed_cfb128 */
0x2A,0x83,0x1A,0x8C,0x9A,0x44,0x01,0x06,     /* [5992] OBJ_seed_ofb128 */
0x2B,0x24,                                   /* [6000] OBJ_teletrust */
0x2B,0x24,0x03,0x03,0x02,0x08,0x01,          /* [6002] OBJ_brainpool */
0x2B,0x24,0x03,0x03,0x02,0x08,0x01,0x01,0x01,/* [6009] OBJ_brainpoolP160r1 */
0x2B,0x24,0x03,0x03,0x02,0x08,0x01,0x01,0x02,/* [6018] OBJ_brainpoolP160t1 */
0x2B,0x24,0x03,0x03,0x02,0x08,0x01,0x01,0x03,/* [6027] OBJ_brainpoolP192r1 */
0x2B,0x24,0x03,0x03,0x02,0x08,0x01,0x01,0x04,/* [6036] OBJ_brainpoolP192t1 */
0x2B,0x24,0x03,0x03,0x02,0x08,0x01,0x01,0x05,/* [6045] OBJ_brainpoolP224r1 */
0x2B,0x24,0x03,0x03,0x02,0x08,0x01,0x01,0x06,/* [6054] OBJ_brainpoolP224t1 */
0x2B,0x24,0x03,0x03,0x02,0x08,0x01,0x01,0x07,/* [6063] OBJ_brainpoolP256r1 */
0x2B,0x24,0x03,0x03,0x02,0x08,0x01,0x01,0x08,/* [6072] OBJ_brainpoolP256t1 */
0x2B,0x24,0x03,0x03,0x02,0x08,0x01,0x01,0x09,/* [6081] OBJ_brainpoolP320r1 */
0x2B,0x24,0x03,0x03,0x02,0x08,0x01,0x01,0x0A,/* [6090] OBJ_brainpoolP320t1 */
0x2B,0x24,0x03,0x03,0x02,0x08,0x01,0x01,0x0B,/* [6099] OBJ_brainpoolP384r1 */
0x2B,0x24,0x03,0x03,0x02,0x08,0x01,0x01,0x0C,/* [6108] OBJ_brainpoolP384t1 */
0x2B,0x24,0x03,0x03,0x02,0x08,0x01,0x01,0x0D,/* [6117] OBJ_brainpoolP512r1 */
0x2B,0x24,0x03,0x03,0x02,0x08,0x01,0x01,0x0E,/* [6126] OBJ_brainpoolP512t1 */
0x2A,0x81,0x7A,0x01,0x81,0x5F,0x65,0x82,0x00,0x01,/* [6135] OBJ_FRP256v1 */
0x2A,0x85,0x03,0x07,0x01,                    /* [6145] OBJ_tc26 */
0x2A,0x85,0x03,0x07,0x01,0x01,0x02,0x02,     /* [6150] OBJ_id_tc26_gost3411_2012_256 */
0x2A,0x85,0x03,0x07,0x01,0x01,0x02,0x03,     /* [6158] OBJ_id_tc26_gost3411_2012_512 */
0x2A,0x85,0x03,0x07,0x01,0x02,0x01,0x02,0x01,/* [6166] OBJ_id_tc26_gost_3410_2012_512_paramSetA */
0x2A,0x85,0x03,0x07,0x01,0x02,0x01,0x02,0x02,/* [6175] OBJ_id_tc26_gost_3410_2012_512_paramSetB */
0x2A,0x85,0x03,0x07,0x01,0x02,0x05,0x01,0x01,/* [6184] OBJ_id_tc26_gost_28147_param_Z */
0x2A,0x85,0x03,0x07,0x01,0x01,0x01,0x01,     /* [6193] OBJ_id_tc26_gost3410_2012_256 */
0x2A,0x85,0x03,0x07,0x01,0x01,0x01,0x02,     /* [6201] OBJ_id_tc26_gost3410_2012_512 */
0x2A,0x85,0x03,0x07,0x01,0x01,0x03,0x02,     /* [6209] OBJ_id_tc26_signwithdigest_gost3410_2012_256 */
0x2A,0x85,0x03,0x07,0x01,0x01,0x03,0x03,     /* [6217] OBJ_id_tc26_signwithdigest_gost3410_2012_512 */
};

static const ASN1_OBJECT nid_objs[NUM_NID]={
{"UNDEF","undefined",NID_undef,0,NULL,0},
{"ITU-T","itu-t",NID_itu_t,0,NULL,0},
{"ISO","iso",NID_iso,0,NULL,0},
{"JOINT-ISO-ITU-T","joint-iso-itu-t",NID_joint_iso_itu_t,0,NULL,0},
{"member-body","ISO Member Body",NID_member_body,1,&(lvalues[0]),0},
{"identified-organization","identified-organization",
	NID_identified_organization,1,&(lvalues[1]),0},
{"HMAC-MD5","hmac-md5",NID_hmac_md5,8,&(lvalues[2]),0},
{"HMAC-SHA1","hmac-sha1",NID_hmac_sha1,8,&(lvalues[10]),0},
{"certicom-arc","certicom-arc",NID_certicom_arc,3,&(lvalues[18]),0},
{"international-organizations","International Organizations",
	NID_international_organizations,1,&(lvalues[21]),0},
{"wap","wap",NID_wap,2,&(lvalues[22]),0},
{"wap-wsg","wap-wsg",NID_wap_wsg,3,&(lvalues[24]),0},
{"selected-attribute-types","Selected Attribute Types",
	NID_selected_attribute_types,3,&(lvalues[27]),0},
{"clearance","clearance",NID_clearance,4,&(lvalues[30]),0},
{"ISO-US","ISO US Member Body",NID_ISO_US,3,&(lvalues[34]),0},
{"X9-57","X9.57",NID_X9_57,5,&(lvalues[37]),0},
{"X9cm","X9.57 CM ?",NID_X9cm,6,&(lvalues[42]),0},
{"DSA","dsaEncryption",NID_dsa,7,&(lvalues[48]),0},
{"DSA-SHA1","dsaWithSHA1",NID_dsaWithSHA1,7,&(lvalues[55]),0},
{"ansi-X9-62","ANSI X9.62",NID_ansi_X9_62,5,&(lvalues[62]),0},
{"prime-field","prime-field",NID_X9_62_prime_field,7,&(lvalues[67]),0},
{"characteristic-two-field","characteristic-two-field",
	NID_X9_62_characteristic_two_field,7,&(lvalues[74]),0},
{"id-characteristic-two-basis","id-characteristic-two-basis",
	NID_X9_62_id_characteristic_two_basis,8,&(lvalues[81]),0},
{"onBasis","onBasis",NID_X9_62_onBasis,9,&(lvalues[89]),0},
{"tpBasis","tpBasis",NID_X9_62_tpBasis,9,&(lvalues[98]),0},
{"ppBasis","ppBasis",NID_X9_62_ppBasis,9,&(lvalues[107]),0},
{"id-ecPublicKey","id-ecPublicKey",NID_X9_62_id_ecPublicKey,7,
	&(lvalues[116]),0},
{"c2pnb163v1","c2pnb163v1",NID_X9_62_c2pnb163v1,8,&(lvalues[123]),0},
{"c2pnb163v2","c2pnb163v2",NID_X9_62_c2pnb163v2,8,&(lvalues[131]),0},
{"c2pnb163v3","c2pnb163v3",NID_X9_62_c2pnb163v3,8,&(lvalues[139]),0},
{"c2pnb176v1","c2pnb176v1",NID_X9_62_c2pnb176v1,8,&(lvalues[147]),0},
{"c2tnb191v1","c2tnb191v1",NID_X9_62_c2tnb191v1,8,&(lvalues[155]),0},
{"c2tnb191v2","c2tnb191v2",NID_X9_62_c2tnb191v2,8,&(lvalues[163]),0},
{"c2tnb191v3","c2tnb191v3",NID_X9_62_c2tnb191v3,8,&(lvalues[171]),0},
{"c2onb191v4","c2onb191v4",NID_X9_62_c2onb191v4,8,&(lvalues[179]),0},
{"c2onb191v5","c2onb191v5",NID_X9_62_c2onb191v5,8,&(lvalues[187]),0},
{"c2pnb208w1","c2pnb208w1",NID_X9_62_c2pnb208w1,8,&(lvalues[195]),0},
{"c2tnb239v1","c2tnb239v1",NID_X9_62_c2tnb239v1,8,&(lvalues[203]),0},
{"c2tnb239v2","c2tnb239v2",NID_X9_62_c2tnb239v2,8,&(lvalues[211]),0},
{"c2tnb239v3","c2tnb239v3",NID_X9_62_c2tnb239v3,8,&(lvalues[219]),0},
{"c2onb239v4","c2onb239v4",NID_X9_62_c2onb239v4,8,&(lvalues[227]),0},
{"c2onb239v5","c2onb239v5",NID_X9_62_c2onb239v5,8,&(lvalues[235]),0},
{"c2pnb272w1","c2pnb272w1",NID_X9_62_c2pnb272w1,8,&(lvalues[243]),0},
{"c2pnb304w1","c2pnb304w1",NID_X9_62_c2pnb304w1,8,&(lvalues[251]),0},
{"c2tnb359v1","c2tnb359v1",NID_X9_62_c2tnb359v1,8,&(lvalues[259]),0},
{"c2pnb368w1","c2pnb368w1",NID_X9_62_c2pnb368w1,8,&(lvalues[267]),0},
{"c2tnb431r1","c2tnb431r1",NID_X9_62_c2tnb431r1,8,&(lvalues[275]),0},
{"prime192v1","prime192v1",NID_X9_62_prime192v1,8,&(lvalues[283]),0},
{"prime192v2","prime192v2",NID_X9_62_prime192v2,8,&(lvalues[291]),0},
{"prime192v3","prime192v3",NID_X9_62_prime192v3,8,&(lvalues[299]),0},
{"prime239v1","prime239v1",NID_X9_62_prime239v1,8,&(lvalues[307]),0},
{"prime239v2","prime239v2",NID_X9_62_prime239v2,8,&(lvalues[315]),0},
{"prime239v3","prime239v3",NID_X9_62_prime239v3,8,&(lvalues[323]),0},
{"prime256v1","prime256v1",NID_X9_62_prime256v1,8,&(lvalues[331]),0},
{"ecdsa-with-SHA1","ecdsa-with-SHA1",NID_ecdsa_with_SHA1,7,
	&(lvalues[339]),0},
{"ecdsa-with-Recommended","ecdsa-with-Recommended",
	NID_ecdsa_with_Recommended,7,&(lvalues[346]),0},
{"ecdsa-with-Specified","ecdsa-with-Specified",
	NID_ecdsa_with_Specified,7,&(lvalues[353]),0},
{"ecdsa-with-SHA224","ecdsa-with-SHA224",NID_ecdsa_with_SHA224,8,
	&(lvalues[360]),0},
{"ecdsa-with-SHA256","ecdsa-with-SHA256",NID_ecdsa_with_SHA256,8,
	&(lvalues[368]),0},
{"ecdsa-with-SHA384","ecdsa-with-SHA384",NID_ecdsa_with_SHA384,8,
	&(lvalues[376]),0},
{"ecdsa-with-SHA512","ecdsa-with-SHA512",NID_ecdsa_with_SHA512,8,
	&(lvalues[384]),0},
{"secp112r1","secp112r1",NID_secp112r1,5,&(lvalues[392]),0},
{"secp112r2","secp112r2",NID_secp112r2,5,&(lvalues[397]),0},
{"secp128r1","secp128r1",NID_secp128r1,5,&(lvalues[402]),0},
{"secp128r2","secp128r2",NID_secp128r2,5,&(lvalues[407]),0},
{"secp160k1","secp160k1",NID_secp160k1,5,&(lvalues[412]),0},
{"secp160r1","secp160r1",NID_secp160r1,5,&(lvalues[417]),0},
{"secp160r2","secp160r2",NID_secp160r2,5,&(lvalues[422]),0},
{"secp192k1","secp192k1",NID_secp192k1,5,&(lvalues[427]),0},
{"secp224k1","secp224k1",NID_secp224k1,5,&(lvalues[432]),0},
{"secp224r1","secp224r1",NID_secp224r1,5,&(lvalues[437]),0},
{"secp256k1","secp256k1",NID_secp256k1,5,&(lvalues[442]),0},
{"secp384r1","secp384r1",NID_secp384r1,5,&(lvalues[447]),0},
{"secp521r1","secp521r1",NID_secp521r1,5,&(lvalues[452]),0},
{"sect113r1","sect113r1",NID_sect113r1,5,&(lvalues[457]),0},
{"sect113r2","sect113r2",NID_sect113r2,5,&(lvalues[462]),0},
{"sect131r1","sect131r1",NID_sect131r1,5,&(lvalues[467]),0},
{"sect131r2","sect131r2",NID_sect131r2,5,&(lvalues[472]),0},
{"sect163k1","sect163k1",NID_sect163k1,5,&(lvalues[477]),0},
{"sect163r1","sect163r1",NID_sect163r1,5,&(lvalues[482]),0},
{"sect163r2","sect163r2",NID_sect163r2,5,&(lvalues[487]),0},
{"sect193r1","sect193r1",NID_sect193r1,5,&(lvalues[492]),0},
{"sect193r2","sect193r2",NID_sect193r2,5,&(lvalues[497]),0},
{"sect233k1","sect233k1",NID_sect233k1,5,&(lvalues[502]),0},
{"sect233r1","sect233r1",NID_sect233r1,5,&(lvalues[507]),0},
{"sect239k1","sect239k1",NID_sect239k1,5,&(lvalues[512]),0},
{"sect283k1","sect283k1",NID_sect283k1,5,&(lvalues[517]),0},
{"sect283r1","sect283r1",NID_sect283r1,5,&(lvalues[522]),0},
{"sect409k1","sect409k1",NID_sect409k1,5,&(lvalues[527]),0},
{"sect409r1","sect409r1",NID_sect409r1,5,&(lvalues[532]),0},
{"sect571k1","sect571k1",NID_sect571k1,5,&(lvalues[537]),0},
{"sect571r1","sect571r1",NID_sect571r1,5,&(lvalues[542]),0},
{"wap-wsg-idm-ecid-wtls1","wap-wsg-idm-ecid-wtls1",
	NID_wap_wsg_idm_ecid_wtls1,5,&(lvalues[547]),0},
{"wap-wsg-idm-ecid-wtls3","wap-wsg-idm-ecid-wtls3",
	NID_wap_wsg_idm_ecid_wtls3,5,&(lvalues[552]),0},
{"wap-wsg-idm-ecid-wtls4","wap-wsg-idm-ecid-wtls4",
	NID_wap_wsg_idm_ecid_wtls4,5,&(lvalues[557]),0},
{"wap-wsg-idm-ecid-wtls5","wap-wsg-idm-ecid-wtls5",
	NID_wap_wsg_idm_ecid_wtls5,5,&(lvalues[562]),0},
{"wap-wsg-idm-ecid-wtls6","wap-wsg-idm-ecid-wtls6",
	NID_wap_wsg_idm_ecid_wtls6,5,&(lvalues[567]),0},
{"wap-wsg-idm-ecid-wtls7","wap-wsg-idm-ecid-wtls7",
	NID_wap_wsg_idm_ecid_wtls7,5,&(lvalues[572]),0},
{"wap-wsg-idm-ecid-wtls8","wap-wsg-idm-ecid-wtls8",
	NID_wap_wsg_idm_ecid_wtls8,5,&(lvalues[577]),0},
{"wap-wsg-idm-ecid-wtls9","wap-wsg-idm-ecid-wtls9",
	NID_wap_wsg_idm_ecid_wtls9,5,&(lvalues[582]),0},
{"wap-wsg-idm-ecid-wtls10","wap-wsg-idm-ecid-wtls10",
	NID_wap_wsg_idm_ecid_wtls10,5,&(lvalues[587]),0},
{"wap-wsg-idm-ecid-wtls11","wap-wsg-idm-ecid-wtls11",
	NID_wap_wsg_idm_ecid_wtls11,5,&(lvalues[592]),0},
{"wap-wsg-idm-ecid-wtls12","wap-wsg-idm-ecid-wtls12",
	NID_wap_wsg_idm_ecid_wtls12,5,&(lvalues[597]),0},
{"CAST5-CBC","cast5-cbc",NID_cast5_cbc,9,&(lvalues[602]),0},
{"CAST5-ECB","cast5-ecb",NID_cast5_ecb,0,NULL,0},
{"CAST5-CFB","cast5-cfb",NID_cast5_cfb64,0,NULL,0},
{"CAST5-OFB","cast5-ofb",NID_cast5_ofb64,0,NULL,0},
{"pbeWithMD5AndCast5CBC","pbeWithMD5AndCast5CBC",
	NID_pbeWithMD5AndCast5_CBC,9,&(lvalues[611]),0},
{"id-PasswordBasedMAC","password based MAC",NID_id_PasswordBasedMAC,9,
	&(lvalues[620]),0},
{"id-DHBasedMac","Diffie-Hellman based MAC",NID_id_DHBasedMac,9,
	&(lvalues[629]),0},
{"rsadsi","RSA Data Security, Inc.",NID_rsadsi,6,&(lvalues[638]),0},
{"pkcs","RSA Data Security, Inc. PKCS",NID_pkcs,7,&(lvalues[644]),0},
{"pkcs1","pkcs1",NID_pkcs1,8,&(lvalues[651]),0},
{"rsaEncryption","rsaEncryption",NID_rsaEncryption,9,&(lvalues[659]),0},
{"RSA-MD2","md2WithRSAEncryption",NID_md2WithRSAEncryption,9,
	&(lvalues[668]),0},
{"RSA-MD4","md4WithRSAEncryption",NID_md4WithRSAEncryption,9,
	&(lvalues[677]),0},
{"RSA-MD5","md5WithRSAEncryption",NID_md5WithRSAEncryption,9,
	&(lvalues[686]),0},
{"RSA-SHA1","sha1WithRSAEncryption",NID_sha1WithRSAEncryption,9,
	&(lvalues[695]),0},
{"RSAES-OAEP","rsaesOaep",NID_rsaesOaep,9,&(lvalues[704]),0},
{"MGF1","mgf1",NID_mgf1,9,&(lvalues[713]),0},
{"RSASSA-PSS","rsassaPss",NID_rsassaPss,9,&(lvalues[722]),0},
{"RSA-SHA256","sha256WithRSAEncryption",NID_sha256WithRSAEncryption,9,
	&(lvalues[731]),0},
{"RSA-SHA384","sha384WithRSAEncryption",NID_sha384WithRSAEncryption,9,
	&(lvalues[740]),0},
{"RSA-SHA512","sha512WithRSAEncryption",NID_sha512WithRSAEncryption,9,
	&(lvalues[749]),0},
{"RSA-SHA224","sha224WithRSAEncryption",NID_sha224WithRSAEncryption,9,
	&(lvalues[758]),0},
{"pkcs3","pkcs3",NID_pkcs3,8,&(lvalues[767]),0},
{"dhKeyAgreement","dhKeyAgreement",NID_dhKeyAgreement,9,
	&(lvalues[775]),0},
{"pkcs5","pkcs5",NID_pkcs5,8,&(lvalues[784]),0},
{"PBE-MD2-DES","pbeWithMD2AndDES-CBC",NID_pbeWithMD2AndDES_CBC,9,
	&(lvalues[792]),0},
{"PBE-MD5-DES","pbeWithMD5AndDES-CBC",NID_pbeWithMD5AndDES_CBC,9,
	&(lvalues[801]),0},
{"PBE-MD2-RC2-64","pbeWithMD2AndRC2-CBC",NID_pbeWithMD2AndRC2_CBC,9,
	&(lvalues[810]),0},
{"PBE-MD5-RC2-64","pbeWithMD5AndRC2-CBC",NID_pbeWithMD5AndRC2_CBC,9,
	&(lvalues[819]),0},
{"PBE-SHA1-DES","pbeWithSHA1AndDES-CBC",NID_pbeWithSHA1AndDES_CBC,9,
	&(lvalues[828]),0},
{"PBE-SHA1-RC2-64","pbeWithSHA1AndRC2-CBC",NID_pbeWithSHA1AndRC2_CBC,
	9,&(lvalues[837]),0},
{"PBKDF2","PBKDF2",NID_id_pbkdf2,9,&(lvalues[846]),0},
{"PBES2","PBES2",NID_pbes2,9,&(lvalues[855]),0},
{"PBMAC1","PBMAC1",NID_pbmac1,9,&(lvalues[864]),0},
{"pkcs7","pkcs7",NID_pkcs7,8,&(lvalues[873]),0},
{"pkcs7-data","pkcs7-data",NID_pkcs7_data,9,&(lvalues[881]),0},
{"pkcs7-signedData","pkcs7-signedData",NID_pkcs7_signed,9,
	&(lvalues[890]),0},
{"pkcs7-envelopedData","pkcs7-envelopedData",NID_pkcs7_enveloped,9,
	&(lvalues[899]),0},
{"pkcs7-signedAndEnvelopedData","pkcs7-signedAndEnvelopedData",
	NID_pkcs7_signedAndEnveloped,9,&(lvalues[908]),0},
{"pkcs7-digestData","pkcs7-digestData",NID_pkcs7_digest,9,
	&(lvalues[917]),0},
{"pkcs7-encryptedData","pkcs7-encryptedData",NID_pkcs7_encrypted,9,
	&(lvalues[926]),0},
{"pkcs9","pkcs9",NID_pkcs9,8,&(lvalues[935]),0},
{"emailAddress","emailAddress",NID_pkcs9_emailAddress,9,
	&(lvalues[943]),0},
{"unstructuredName","unstructuredName",NID_pkcs9_unstructuredName,9,
	&(lvalues[952]),0},
{"contentType","contentType",NID_pkcs9_contentType,9,&(lvalues[961]),0},
{"messageDigest","messageDigest",NID_pkcs9_messageDigest,9,
	&(lvalues[970]),0},
{"signingTime","signingTime",NID_pkcs9_signingTime,9,&(lvalues[979]),0},
{"countersignature","countersignature",NID_pkcs9_countersignature,9,
	&(lvalues[988]),0},
{"challengePassword","challengePassword",NID_pkcs9_challengePassword,
	9,&(lvalues[997]),0},
{"unstructuredAddress","unstructuredAddress",
	NID_pkcs9_unstructuredAddress,9,&(lvalues[1006]),0},
{"extendedCertificateAttributes","extendedCertificateAttributes",
	NID_pkcs9_extCertAttributes,9,&(lvalues[1015]),0},
{"extReq","Extension Request",NID_ext_req,9,&(lvalues[1024]),0},
{"SMIME-CAPS","S/MIME Capabilities",NID_SMIMECapabilities,9,
	&(lvalues[1033]),0},
{"SMIME","S/MIME",NID_SMIME,9,&(lvalues[1042]),0},
{"id-smime-mod","id-smime-mod",NID_id_smime_mod,10,&(lvalues[1051]),0},
{"id-smime-ct","id-smime-ct",NID_id_smime_ct,10,&(lvalues[1061]),0},
{"id-smime-aa","id-smime-aa",NID_id_smime_aa,10,&(lvalues[1071]),0},
{"id-smime-alg","id-smime-alg",NID_id_smime_alg,10,&(lvalues[1081]),0},
{"id-smime-cd","id-smime-cd",NID_id_smime_cd,10,&(lvalues[1091]),0},
{"id-smime-spq","id-smime-spq",NID_id_smime_spq,10,&(lvalues[1101]),0},
{"id-smime-cti","id-smime-cti",NID_id_smime_cti,10,&(lvalues[1111]),0},
{"id-smime-mod-cms","id-smime-mod-cms",NID_id_smime_mod_cms,11,
	&(lvalues[1121]),0},
{"id-smime-mod-ess","id-smime-mod-ess",NID_id_smime_mod_ess,11,
	&(lvalues[1132]),0},
{"id-smime-mod-oid","id-smime-mod-oid",NID_id_smime_mod_oid,11,
	&(lvalues[1143]),0},
{"id-smime-mod-msg-v3","id-smime-mod-msg-v3",NID_id_smime_mod_msg_v3,
	11,&(lvalues[1154]),0},
{"id-smime-mod-ets-eSignature-88","id-smime-mod-ets-eSignature-88",
	NID_id_smime_mod_ets_eSignature_88,11,&(lvalues[1165]),0},
{"id-smime-mod-ets-eSignature-97","id-smime-mod-ets-eSignature-97",
	NID_id_smime_mod_ets_eSignature_97,11,&(lvalues[1176]),0},
{"id-smime-mod-ets-eSigPolicy-88","id-smime-mod-ets-eSigPolicy-88",
	NID_id_smime_mod_ets_eSigPolicy_88,11,&(lvalues[1187]),0},
{"id-smime-mod-ets-eSigPolicy-97","id-smime-mod-ets-eSigPolicy-97",
	NID_id_smime_mod_ets_eSigPolicy_97,11,&(lvalues[1198]),0},
{"id-smime-ct-receipt","id-smime-ct-receipt",NID_id_smime_ct_receipt,
	11,&(lvalues[1209]),0},
{"id-smime-ct-authData","id-smime-ct-authData",
	NID_id_smime_ct_authData,11,&(lvalues[1220]),0},
{"id-smime-ct-publishCert","id-smime-ct-publishCert",
	NID_id_smime_ct_publishCert,11,&(lvalues[1231]),0},
{"id-smime-ct-TSTInfo","id-smime-ct-TSTInfo",NID_id_smime_ct_TSTInfo,
	11,&(lvalues[1242]),0},
{"id-smime-ct-TDTInfo","id-smime-ct-TDTInfo",NID_id_smime_ct_TDTInfo,
	11,&(lvalues[1253]),0},
{"id-smime-ct-contentInfo","id-smime-ct-contentInfo",
	NID_id_smime_ct_contentInfo,11,&(lvalues[1264]),0},
{"id-smime-ct-DVCSRequestData","id-smime-ct-DVCSRequestData",
	NID_id_smime_ct_DVCSRequestData,11,&(lvalues[1275]),0},
{"id-smime-ct-DVCSResponseData","id-smime-ct-DVCSResponseData",
	NID_id_smime_ct_DVCSResponseData,11,&(lvalues[1286]),0},
{"id-smime-ct-compressedData","id-smime-ct-compressedData",
	NID_id_smime_ct_compressedData,11,&(lvalues[1297]),0},
{"id-ct-asciiTextWithCRLF","id-ct-asciiTextWithCRLF",
	NID_id_ct_asciiTextWithCRLF,11,&(lvalues[1308]),0},
{"id-smime-aa-receiptRequest","id-smime-aa-receiptRequest",
	NID_id_smime_aa_receiptRequest,11,&(lvalues[1319]),0},
{"id-smime-aa-securityLabel","id-smime-aa-securityLabel",
	NID_id_smime_aa_securityLabel,11,&(lvalues[1330]),0},
{"id-smime-aa-mlExpandHistory","id-smime-aa-mlExpandHistory",
	NID_id_smime_aa_mlExpandHistory,11,&(lvalues[1341]),0},
{"id-smime-aa-contentHint","id-smime-aa-contentHint",
	NID_id_smime_aa_contentHint,11,&(lvalues[1352]),0},
{"id-smime-aa-msgSigDigest","id-smime-aa-msgSigDigest",
	NID_id_smime_aa_msgSigDigest,11,&(lvalues[1363]),0},
{"id-smime-aa-encapContentType","id-smime-aa-encapContentType",
	NID_id_smime_aa_encapContentType,11,&(lvalues[1374]),0},
{"id-smime-aa-contentIdentifier","id-smime-aa-contentIdentifier",
	NID_id_smime_aa_contentIdentifier,11,&(lvalues[1385]),0},
{"id-smime-aa-macValue","id-smime-aa-macValue",
	NID_id_smime_aa_macValue,11,&(lvalues[1396]),0},
{"id-smime-aa-equivalentLabels","id-smime-aa-equivalentLabels",
	NID_id_smime_aa_equivalentLabels,11,&(lvalues[1407]),0},
{"id-smime-aa-contentReference","id-smime-aa-contentReference",
	NID_id_smime_aa_contentReference,11,&(lvalues[1418]),0},
{"id-smime-aa-encrypKeyPref","id-smime-aa-encrypKeyPref",
	NID_id_smime_aa_encrypKeyPref,11,&(lvalues[1429]),0},
{"id-smime-aa-signingCertificate","id-smime-aa-signingCertificate",
	NID_id_smime_aa_signingCertificate,11,&(lvalues[1440]),0},
{"id-smime-aa-smimeEncryptCerts","id-smime-aa-smimeEncryptCerts",
	NID_id_smime_aa_smimeEncryptCerts,11,&(lvalues[1451]),0},
{"id-smime-aa-timeStampToken","id-smime-aa-timeStampToken",
	NID_id_smime_aa_timeStampToken,11,&(lvalues[1462]),0},
{"id-smime-aa-ets-sigPolicyId","id-smime-aa-ets-sigPolicyId",
	NID_id_smime_aa_ets_sigPolicyId,11,&(lvalues[1473]),0},
{"id-smime-aa-ets-commitmentType","id-smime-aa-ets-commitmentType",
	NID_id_smime_aa_ets_commitmentType,11,&(lvalues[1484]),0},
{"id-smime-aa-ets-signerLocation","id-smime-aa-ets-signerLocation",
	NID_id_smime_aa_ets_signerLocation,11,&(lvalues[1495]),0},
{"id-smime-aa-ets-signerAttr","id-smime-aa-ets-signerAttr",
	NID_id_smime_aa_ets_signerAttr,11,&(lvalues[1506]),0},
{"id-smime-aa-ets-otherSigCert","id-smime-aa-ets-otherSigCert",
	NID_id_smime_aa_ets_otherSigCert,11,&(lvalues[1517]),0},
{"id-smime-aa-ets-contentTimestamp",
	"id-smime-aa-ets-contentTimestamp",
	NID_id_smime_aa_ets_contentTimestamp,11,&(lvalues[1528]),0},
{"id-smime-aa-ets-CertificateRefs","id-smime-aa-ets-CertificateRefs",
	NID_id_smime_aa_ets_CertificateRefs,11,&(lvalues[1539]),0},
{"id-smime-aa-ets-RevocationRefs","id-smime-aa-ets-RevocationRefs",
	NID_id_smime_aa_ets_RevocationRefs,11,&(lvalues[1550]),0},
{"id-smime-aa-ets-certValues","id-smime-aa-ets-certValues",
	NID_id_smime_aa_ets_certValues,11,&(lvalues[1561]),0},
{"id-smime-aa-ets-revocationValues",
	"id-smime-aa-ets-revocationValues",
	NID_id_smime_aa_ets_revocationValues,11,&(lvalues[1572]),0},
{"id-smime-aa-ets-escTimeStamp","id-smime-aa-ets-escTimeStamp",
	NID_id_smime_aa_ets_escTimeStamp,11,&(lvalues[1583]),0},
{"id-smime-aa-ets-certCRLTimestamp",
	"id-smime-aa-ets-certCRLTimestamp",
	NID_id_smime_aa_ets_certCRLTimestamp,11,&(lvalues[1594]),0},
{"id-smime-aa-ets-archiveTimeStamp",
	"id-smime-aa-ets-archiveTimeStamp",
	NID_id_smime_aa_ets_archiveTimeStamp,11,&(lvalues[1605]),0},
{"id-smime-aa-signatureType","id-smime-aa-signatureType",
	NID_id_smime_aa_signatureType,11,&(lvalues[1616]),0},
{"id-smime-aa-dvcs-dvc","id-smime-aa-dvcs-dvc",
	NID_id_smime_aa_dvcs_dvc,11,&(lvalues[1627]),0},
{"id-smime-alg-ESDHwith3DES","id-smime-alg-ESDHwith3DES",
	NID_id_smime_alg_ESDHwith3DES,11,&(lvalues[1638]),0},
{"id-smime-alg-ESDHwithRC2","id-smime-alg-ESDHwithRC2",
	NID_id_smime_alg_ESDHwithRC2,11,&(lvalues[1649]),0},
{"id-smime-alg-3DESwrap","id-smime-alg-3DESwrap",
	NID_id_smime_alg_3DESwrap,11,&(lvalues[1660]),0},
{"id-smime-alg-RC2wrap","id-smime-alg-RC2wrap",
	NID_id_smime_alg_RC2wrap,11,&(lvalues[1671]),0},
{"id-smime-alg-ESDH","id-smime-alg-ESDH",NID_id_smime_alg_ESDH,11,
	&(lvalues[1682]),0},
{"id-smime-alg-CMS3DESwrap","id-smime-alg-CMS3DESwrap",
	NID_id_smime_alg_CMS3DESwrap,11,&(lvalues[1693]),0},
{"id-smime-alg-CMSRC2wrap","id-smime-alg-CMSRC2wrap",
	NID_id_smime_alg_CMSRC2wrap,11,&(lvalues[1704]),0},
{"id-alg-PWRI-KEK","id-alg-PWRI-KEK",NID_id_alg_PWRI_KEK,11,
	&(lvalues[1715]),0},
{"id-smime-cd-ldap","id-smime-cd-ldap",NID_id_smime_cd_ldap,11,
	&(lvalues[1726]),0},
{"id-smime-spq-ets-sqt-uri","id-smime-spq-ets-sqt-uri",
	NID_id_smime_spq_ets_sqt_uri,11,&(lvalues[1737]),0},
{"id-smime-spq-ets-sqt-unotice","id-smime-spq-ets-sqt-unotice",
	NID_id_smime_spq_ets_sqt_unotice,11,&(lvalues[1748]),0},
{"id-smime-cti-ets-proofOfOrigin","id-smime-cti-ets-proofOfOrigin",
	NID_id_smime_cti_ets_proofOfOrigin,11,&(lvalues[1759]),0},
{"id-smime-cti-ets-proofOfReceipt","id-smime-cti-ets-proofOfReceipt",
	NID_id_smime_cti_ets_proofOfReceipt,11,&(lvalues[1770]),0},
{"id-smime-cti-ets-proofOfDelivery",
	"id-smime-cti-ets-proofOfDelivery",
	NID_id_smime_cti_ets_proofOfDelivery,11,&(lvalues[1781]),0},
{"id-smime-cti-ets-proofOfSender","id-smime-cti-ets-proofOfSender",
	NID_id_smime_cti_ets_proofOfSender,11,&(lvalues[1792]),0},
{"id-smime-cti-ets-proofOfApproval",
	"id-smime-cti-ets-proofOfApproval",
	NID_id_smime_cti_ets_proofOfApproval,11,&(lvalues[1803]),0},
{"id-smime-cti-ets-proofOfCreation",
	"id-smime-cti-ets-proofOfCreation",
	NID_id_smime_cti_ets_proofOfCreation,11,&(lvalues[1814]),0},
{"friendlyName","friendlyName",NID_friendlyName,9,&(lvalues[1825]),0},
{"localKeyID","localKeyID",NID_localKeyID,9,&(lvalues[1834]),0},
{"CSPName","Microsoft CSP Name",NID_ms_csp_name,9,&(lvalues[1843]),0},
{"LocalKeySet","Microsoft Local Key set",NID_LocalKeySet,9,
	&(lvalues[1852]),0},
{"x509Certificate","x509Certificate",NID_x509Certificate,10,
	&(lvalues[1861]),0},
{"sdsiCertificate","sdsiCertificate",NID_sdsiCertificate,10,
	&(lvalues[1871]),0},
{"x509Crl","x509Crl",NID_x509Crl,10,&(lvalues[1881]),0},
{"PBE-SHA1-RC4-128","pbeWithSHA1And128BitRC4",
	NID_pbe_WithSHA1And128BitRC4,10,&(lvalues[1891]),0},
{"PBE-SHA1-RC4-40","pbeWithSHA1And40BitRC4",
	NID_pbe_WithSHA1And40BitRC4,10,&(lvalues[1901]),0},
{"PBE-SHA1-3DES","pbeWithSHA1And3-KeyTripleDES-CBC",
	NID_pbe_WithSHA1And3_Key_TripleDES_CBC,10,&(lvalues[1911]),0},
{"PBE-SHA1-2DES","pbeWithSHA1And2-KeyTripleDES-CBC",
	NID_pbe_WithSHA1And2_Key_TripleDES_CBC,10,&(lvalues[1921]),0},
{"PBE-SHA1-RC2-128","pbeWithSHA1And128BitRC2-CBC",
	NID_pbe_WithSHA1And128BitRC2_CBC,10,&(lvalues[1931]),0},
{"PBE-SHA1-RC2-40","pbeWithSHA1And40BitRC2-CBC",
	NID_pbe_WithSHA1And40BitRC2_CBC,10,&(lvalues[1941]),0},
{"keyBag","keyBag",NID_keyBag,11,&(lvalues[1951]),0},
{"pkcs8ShroudedKeyBag","pkcs8ShroudedKeyBag",NID_pkcs8ShroudedKeyBag,
	11,&(lvalues[1962]),0},
{"certBag","certBag",NID_certBag,11,&(lvalues[1973]),0},
{"crlBag","crlBag",NID_crlBag,11,&(lvalues[1984]),0},
{"secretBag","secretBag",NID_secretBag,11,&(lvalues[1995]),0},
{"safeContentsBag","safeContentsBag",NID_safeContentsBag,11,
	&(lvalues[2006]),0},
{"MD2","md2",NID_md2,8,&(lvalues[2017]),0},
{"MD4","md4",NID_md4,8,&(lvalues[2025]),0},
{"MD5","md5",NID_md5,8,&(lvalues[2033]),0},
{"MD5-SHA1","md5-sha1",NID_md5_sha1,0,NULL,0},
{"hmacWithMD5","hmacWithMD5",NID_hmacWithMD5,8,&(lvalues[2041]),0},
{"hmacWithSHA1","hmacWithSHA1",NID_hmacWithSHA1,8,&(lvalues[2049]),0},
{"hmacWithSHA224","hmacWithSHA224",NID_hmacWithSHA224,8,
	&(lvalues[2057]),0},
{"hmacWithSHA256","hmacWithSHA256",NID_hmacWithSHA256,8,
	&(lvalues[2065]),0},
{"hmacWithSHA384","hmacWithSHA384",NID_hmacWithSHA384,8,
	&(lvalues[2073]),0},
{"hmacWithSHA512","hmacWithSHA512",NID_hmacWithSHA512,8,
	&(lvalues[2081]),0},
{"RC2-CBC","rc2-cbc",NID_rc2_cbc,8,&(lvalues[2089]),0},
{"RC2-ECB","rc2-ecb",NID_rc2_ecb,0,NULL,0},
{"RC2-CFB","rc2-cfb",NID_rc2_cfb64,0,NULL,0},
{"RC2-OFB","rc2-ofb",NID_rc2_ofb64,0,NULL,0},
{"RC2-40-CBC","rc2-40-cbc",NID_rc2_40_cbc,0,NULL,0},
{"RC2-64-CBC","rc2-64-cbc",NID_rc2_64_cbc,0,NULL,0},
{"RC4","rc4",NID_rc4,8,&(lvalues[2097]),0},
{"RC4-40","rc4-40",NID_rc4_40,0,NULL,0},
{"DES-EDE3-CBC","des-ede3-cbc",NID_des_ede3_cbc,8,&(lvalues[2105]),0},
{"RC5-CBC","rc5-cbc",NID_rc5_cbc,8,&(lvalues[2113]),0},
{"RC5-ECB","rc5-ecb",NID_rc5_ecb,0,NULL,0},
{"RC5-CFB","rc5-cfb",NID_rc5_cfb64,0,NULL,0},
{"RC5-OFB","rc5-ofb",NID_rc5_ofb64,0,NULL,0},
{"msExtReq","Microsoft Extension Request",NID_ms_ext_req,10,
	&(lvalues[2121]),0},
{"msCodeInd","Microsoft Individual Code Signing",NID_ms_code_ind,10,
	&(lvalues[2131]),0},
{"msCodeCom","Microsoft Commercial Code Signing",NID_ms_code_com,10,
	&(lvalues[2141]),0},
{"msCTLSign","Microsoft Trust List Signing",NID_ms_ctl_sign,10,
	&(lvalues[2151]),0},
{"msSGC","Microsoft Server Gated Crypto",NID_ms_sgc,10,
	&(lvalues[2161]),0},
{"msEFS","Microsoft Encrypted File System",NID_ms_efs,10,
	&(lvalues[2171]),0},
{"msSmartcardLogin","Microsoft Smartcardlogin",NID_ms_smartcard_login,
	10,&(lvalues[2181]),0},
{"msUPN","Microsoft Universal Principal Name",NID_ms_upn,10,
	&(lvalues[2191]),0},
{"IDEA-CBC","idea-cbc",NID_idea_cbc,11,&(lvalues[2201]),0},
{"IDEA-ECB","idea-ecb",NID_idea_ecb,0,NULL,0},
{"IDEA-CFB","idea-cfb",NID_idea_cfb64,0,NULL,0},
{"IDEA-OFB","idea-ofb",NID_idea_ofb64,0,NULL,0},
{"BF-CBC","bf-cbc",NID_bf_cbc,9,&(lvalues[2212]),0},
{"BF-ECB","bf-ecb",NID_bf_ecb,0,NULL,0},
{"BF-CFB","bf-cfb",NID_bf_cfb64,0,NULL,0},
{"BF-OFB","bf-ofb",NID_bf_ofb64,0,NULL,0},
{"PKIX","PKIX",NID_id_pkix,6,&(lvalues[2221]),0},
{"id-pkix-mod","id-pkix-mod",NID_id_pkix_mod,7,&(lvalues[2227]),0},
{"id-pe","id-pe",NID_id_pe,7,&(lvalues[2234]),0},
{"id-qt","id-qt",NID_id_qt,7,&(lvalues[2241]),0},
{"id-kp","id-kp",NID_id_kp,7,&(lvalues[2248]),0},
{"id-it","id-it",NID_id_it,7,&(lvalues[2255]),0},
{"id-pkip","id-pkip",NID_id_pkip,7,&(lvalues[2262]),0},
{"id-alg","id-alg",NID_id_alg,7,&(lvalues[2269]),0},
{"id-cmc","id-cmc",NID_id_cmc,7,&(lvalues[2276]),0},
{"id-on","id-on",NID_id_on,7,&(lvalues[2283]),0},
{"id-pda","id-pda",NID_id_pda,7,&(lvalues[2290]),0},
{"id-aca","id-aca",NID_id_aca,7,&(lvalues[2297]),0},
{"id-qcs","id-qcs",NID_id_qcs,7,&(lvalues[2304]),0},
{"id-cct","id-cct",NID_id_cct,7,&(lvalues[2311]),0},
{"id-ppl","id-ppl",NID_id_ppl,7,&(lvalues[2318]),0},
{"id-ad","id-ad",NID_id_ad,7,&(lvalues[2325]),0},
{"id-pkix1-explicit-88","id-pkix1-explicit-88",
	NID_id_pkix1_explicit_88,8,&(lvalues[2332]),0},
{"id-pkix1-implicit-88","id-pkix1-implicit-88",
	NID_id_pkix1_implicit_88,8,&(lvalues[2340]),0},
{"id-pkix1-explicit-93","id-pkix1-explicit-93",
	NID_id_pkix1_explicit_93,8,&(lvalues[2348]),0},
{"id-pkix1-implicit-93","id-pkix1-implicit-93",
	NID_id_pkix1_implicit_93,8,&(lvalues[2356]),0},
{"id-mod-crmf","id-mod-crmf",NID_id_mod_crmf,8,&(lvalues[2364]),0},
{"id-mod-cmc","id-mod-cmc",NID_id_mod_cmc,8,&(lvalues[2372]),0},
{"id-mod-kea-profile-88","id-mod-kea-profile-88",
	NID_id_mod_kea_profile_88,8,&(lvalues[2380]),0},
{"id-mod-kea-profile-93","id-mod-kea-profile-93",
	NID_id_mod_kea_profile_93,8,&(lvalues[2388]),0},
{"id-mod-cmp","id-mod-cmp",NID_id_mod_cmp,8,&(lvalues[2396]),0},
{"id-mod-qualified-cert-88","id-mod-qualified-cert-88",
	NID_id_mod_qualified_cert_88,8,&(lvalues[2404]),0},
{"id-mod-qualified-cert-93","id-mod-qualified-cert-93",
	NID_id_mod_qualified_cert_93,8,&(lvalues[2412]),0},
{"id-mod-attribute-cert","id-mod-attribute-cert",
	NID_id_mod_attribute_cert,8,&(lvalues[2420]),0},
{"id-mod-timestamp-protocol","id-mod-timestamp-protocol",
	NID_id_mod_timestamp_protocol,8,&(lvalues[2428]),0},
{"id-mod-ocsp","id-mod-ocsp",NID_id_mod_ocsp,8,&(lvalues[2436]),0},
{"id-mod-dvcs","id-mod-dvcs",NID_id_mod_dvcs,8,&(lvalues[2444]),0},
{"id-mod-cmp2000","id-mod-cmp2000",NID_id_mod_cmp2000,8,
	&(lvalues[2452]),0},
{"authorityInfoAccess","Authority Information Access",NID_info_access,
	8,&(lvalues[2460]),0},
{"biometricInfo","Biometric Info",NID_biometricInfo,8,&(lvalues[2468]),0},
{"qcStatements","qcStatements",NID_qcStatements,8,&(lvalues[2476]),0},
{"ac-auditEntity","ac-auditEntity",NID_ac_auditEntity,8,
	&(lvalues[2484]),0},
{"ac-targeting","ac-targeting",NID_ac_targeting,8,&(lvalues[2492]),0},
{"aaControls","aaControls",NID_aaControls,8,&(lvalues[2500]),0},
{"sbgp-ipAddrBlock","sbgp-ipAddrBlock",NID_sbgp_ipAddrBlock,8,
	&(lvalues[2508]),0},
{"sbgp-autonomousSysNum","sbgp-autonomousSysNum",
	NID_sbgp_autonomousSysNum,8,&(lvalues[2516]),0},
{"sbgp-routerIdentifier","sbgp-routerIdentifier",
	NID_sbgp_routerIdentifier,8,&(lvalues[2524]),0},
{"ac-proxying","ac-proxying",NID_ac_proxying,8,&(lvalues[2532]),0},
{"subjectInfoAccess","Subject Information Access",NID_sinfo_access,8,
	&(lvalues[2540]),0},
{"proxyCertInfo","Proxy Certificate Information",NID_proxyCertInfo,8,
	&(lvalues[2548]),0},
{"id-qt-cps","Policy Qualifier CPS",NID_id_qt_cps,8,&(lvalues[2556]),0},
{"id-qt-unotice","Policy Qualifier User Notice",NID_id_qt_unotice,8,
	&(lvalues[2564]),0},
{"textNotice","textNotice",NID_textNotice,8,&(lvalues[2572]),0},
{"serverAuth","TLS Web Server Authentication",NID_server_auth,8,
	&(lvalues[2580]),0},
{"clientAuth","TLS Web Client Authentication",NID_client_auth,8,
	&(lvalues[2588]),0},
{"codeSigning","Code Signing",NID_code_sign,8,&(lvalues[2596]),0},
{"emailProtection","E-mail Protection",NID_email_protect,8,
	&(lvalues[2604]),0},
{"ipsecEndSystem","IPSec End System",NID_ipsecEndSystem,8,
	&(lvalues[2612]),0},
{"ipsecTunnel","IPSec Tunnel",NID_ipsecTunnel,8,&(lvalues[2620]),0},
{"ipsecUser","IPSec User",NID_ipsecUser,8,&(lvalues[2628]),0},
{"timeStamping","Time Stamping",NID_time_stamp,8,&(lvalues[2636]),0},
{"OCSPSigning","OCSP Signing",NID_OCSP_sign,8,&(lvalues[2644]),0},
{"DVCS","dvcs",NID_dvcs,8,&(lvalues[2652]),0},
{"id-it-caProtEncCert","id-it-caProtEncCert",NID_id_it_caProtEncCert,
	8,&(lvalues[2660]),0},
{"id-it-signKeyPairTypes","id-it-signKeyPairTypes",
	NID_id_it_signKeyPairTypes,8,&(lvalues[2668]),0},
{"id-it-encKeyPairTypes","id-it-encKeyPairTypes",
	NID_id_it_encKeyPairTypes,8,&(lvalues[2676]),0},
{"id-it-preferredSymmAlg","id-it-preferredSymmAlg",
	NID_id_it_preferredSymmAlg,8,&(lvalues[2684]),0},
{"id-it-caKeyUpdateInfo","id-it-caKeyUpdateInfo",
	NID_id_it_caKeyUpdateInfo,8,&(lvalues[2692]),0},
{"id-it-currentCRL","id-it-currentCRL",NID_id_it_currentCRL,8,
	&(lvalues[2700]),0},
{"id-it-unsupportedOIDs","id-it-unsupportedOIDs",
	NID_id_it_unsupportedOIDs,8,&(lvalues[2708]),0},
{"id-it-subscriptionRequest","id-it-subscriptionRequest",
	NID_id_it_subscriptionRequest,8,&(lvalues[2716]),0},
{"id-it-subscriptionResponse","id-it-subscriptionResponse",
	NID_id_it_subscriptionResponse,8,&(lvalues[2724]),0},
{"id-it-keyPairParamReq","id-it-keyPairParamReq",
	NID_id_it_keyPairParamReq,8,&(lvalues[2732]),0},
{"id-it-keyPairParamRep","id-it-keyPairParamRep",
	NID_id_it_keyPairParamRep,8,&(lvalues[2740]),0},
{"id-it-revPassphrase","id-it-revPassphrase",NID_id_it_revPassphrase,
	8,&(lvalues[2748]),0},
{"id-it-implicitConfirm","id-it-implicitConfirm",
	NID_id_it_implicitConfirm,8,&(lvalues[2756]),0},
{"id-it-confirmWaitTime","id-it-confirmWaitTime",
	NID_id_it_confirmWaitTime,8,&(lvalues[2764]),0},
{"id-it-origPKIMessage","id-it-origPKIMessage",
	NID_id_it_origPKIMessage,8,&(lvalues[2772]),0},
{"id-it-suppLangTags","id-it-suppLangTags",NID_id_it_suppLangTags,8,
	&(lvalues[2780]),0},
{"id-regCtrl","id-regCtrl",NID_id_regCtrl,8,&(lvalues[2788]),0},
{"id-regInfo","id-regInfo",NID_id_regInfo,8,&(lvalues[2796]),0},
{"id-regCtrl-regToken","id-regCtrl-regToken",NID_id_regCtrl_regToken,
	9,&(lvalues[2804]),0},
{"id-regCtrl-authenticator","id-regCtrl-authenticator",
	NID_id_regCtrl_authenticator,9,&(lvalues[2813]),0},
{"id-regCtrl-pkiPublicationInfo","id-regCtrl-pkiPublicationInfo",
	NID_id_regCtrl_pkiPublicationInfo,9,&(lvalues[2822]),0},
{"id-regCtrl-pkiArchiveOptions","id-regCtrl-pkiArchiveOptions",
	NID_id_regCtrl_pkiArchiveOptions,9,&(lvalues[2831]),0},
{"id-regCtrl-oldCertID","id-regCtrl-oldCertID",
	NID_id_regCtrl_oldCertID,9,&(lvalues[2840]),0},
{"id-regCtrl-protocolEncrKey","id-regCtrl-protocolEncrKey",
	NID_id_regCtrl_protocolEncrKey,9,&(lvalues[2849]),0},
{"id-regInfo-utf8Pairs","id-regInfo-utf8Pairs",
	NID_id_regInfo_utf8Pairs,9,&(lvalues[2858]),0},
{"id-regInfo-certReq","id-regInfo-certReq",NID_id_regInfo_certReq,9,
	&(lvalues[2867]),0},
{"id-alg-des40","id-alg-des40",NID_id_alg_des40,8,&(lvalues[2876]),0},
{"id-alg-noSignature","id-alg-noSignature",NID_id_alg_noSignature,8,
	&(lvalues[2884]),0},
{"id-alg-dh-sig-hmac-sha1","id-alg-dh-sig-hmac-sha1",
	NID_id_alg_dh_sig_hmac_sha1,8,&(lvalues[2892]),0},
{"id-alg-dh-pop","id-alg-dh-pop",NID_id_alg_dh_pop,8,&(lvalues[2900]),0},
{"id-cmc-statusInfo","id-cmc-statusInfo",NID_id_cmc_statusInfo,8,
	&(lvalues[2908]),0},
{"id-cmc-identification","id-cmc-identification",
	NID_id_cmc_identification,8,&(lvalues[2916]),0},
{"id-cmc-identityProof","id-cmc-identityProof",
	NID_id_cmc_identityProof,8,&(lvalues[2924]),0},
{"id-cmc-dataReturn","id-cmc-dataReturn",NID_id_cmc_dataReturn,8,
	&(lvalues[2932]),0},
{"id-cmc-transactionId","id-cmc-transactionId",
	NID_id_cmc_transactionId,8,&(lvalues[2940]),0},
{"id-cmc-senderNonce","id-cmc-senderNonce",NID_id_cmc_senderNonce,8,
	&(lvalues[2948]),0},
{"id-cmc-recipientNonce","id-cmc-recipientNonce",
	NID_id_cmc_recipientNonce,8,&(lvalues[2956]),0},
{"id-cmc-addExtensions","id-cmc-addExtensions",
	NID_id_cmc_addExtensions,8,&(lvalues[2964]),0},
{"id-cmc-encryptedPOP","id-cmc-encryptedPOP",NID_id_cmc_encryptedPOP,
	8,&(lvalues[2972]),0},
{"id-cmc-decryptedPOP","id-cmc-decryptedPOP",NID_id_cmc_decryptedPOP,
	8,&(lvalues[2980]),0},
{"id-cmc-lraPOPWitness","id-cmc-lraPOPWitness",
	NID_id_cmc_lraPOPWitness,8,&(lvalues[2988]),0},
{"id-cmc-getCert","id-cmc-getCert",NID_id_cmc_getCert,8,
	&(lvalues[2996]),0},
{"id-cmc-getCRL","id-cmc-getCRL",NID_id_cmc_getCRL,8,&(lvalues[3004]),0},
{"id-cmc-revokeRequest","id-cmc-revokeRequest",
	NID_id_cmc_revokeRequest,8,&(lvalues[3012]),0},
{"id-cmc-regInfo","id-cmc-regInfo",NID_id_cmc_regInfo,8,
	&(lvalues[3020]),0},
{"id-cmc-responseInfo","id-cmc-responseInfo",NID_id_cmc_responseInfo,
	8,&(lvalues[3028]),0},
{"id-cmc-queryPending","id-cmc-queryPending",NID_id_cmc_queryPending,
	8,&(lvalues[3036]),0},
{"id-cmc-popLinkRandom","id-cmc-popLinkRandom",
	NID_id_cmc_popLinkRandom,8,&(lvalues[3044]),0},
{"id-cmc-popLinkWitness","id-cmc-popLinkWitness",
	NID_id_cmc_popLinkWitness,8,&(lvalues[3052]),0},
{"id-cmc-confirmCertAcceptance","id-cmc-confirmCertAcceptance",
	NID_id_cmc_confirmCertAcceptance,8,&(lvalues[3060]),0},
{"id-on-personalData","id-on-personalData",NID_id_on_personalData,8,
	&(lvalues[3068]),0},
{"id-on-permanentIdentifier","Permanent Identifier",
	NID_id_on_permanentIdentifier,8,&(lvalues[3076]),0},
{"id-pda-dateOfBirth","id-pda-dateOfBirth",NID_id_pda_dateOfBirth,8,
	&(lvalues[3084]),0},
{"id-pda-placeOfBirth","id-pda-placeOfBirth",NID_id_pda_placeOfBirth,
	8,&(lvalues[3092]),0},
{"id-pda-gender","id-pda-gender",NID_id_pda_gender,8,&(lvalues[3100]),0},
{"id-pda-countryOfCitizenship","id-pda-countryOfCitizenship",
	NID_id_pda_countryOfCitizenship,8,&(lvalues[3108]),0},
{"id-pda-countryOfResidence","id-pda-countryOfResidence",
	NID_id_pda_countryOfResidence,8,&(lvalues[3116]),0},
{"id-aca-authenticationInfo","id-aca-authenticationInfo",
	NID_id_aca_authenticationInfo,8,&(lvalues[3124]),0},
{"id-aca-accessIdentity","id-aca-accessIdentity",
	NID_id_aca_accessIdentity,8,&(lvalues[3132]),0},
{"id-aca-chargingIdentity","id-aca-chargingIdentity",
	NID_id_aca_chargingIdentity,8,&(lvalues[3140]),0},
{"id-aca-group","id-aca-group",NID_id_aca_group,8,&(lvalues[3148]),0},
{"id-aca-role","id-aca-role",NID_id_aca_role,8,&(lvalues[3156]),0},
{"id-aca-encAttrs","id-aca-encAttrs",NID_id_aca_encAttrs,8,
	&(lvalues[3164]),0},
{"id-qcs-pkixQCSyntax-v1","id-qcs-pkixQCSyntax-v1",
	NID_id_qcs_pkixQCSyntax_v1,8,&(lvalues[3172]),0},
{"id-cct-crs","id-cct-crs",NID_id_cct_crs,8,&(lvalues[3180]),0},
{"id-cct-PKIData","id-cct-PKIData",NID_id_cct_PKIData,8,
	&(lvalues[3188]),0},
{"id-cct-PKIResponse","id-cct-PKIResponse",NID_id_cct_PKIResponse,8,
	&(lvalues[3196]),0},
{"id-ppl-anyLanguage","Any language",NID_id_ppl_anyLanguage,8,
	&(lvalues[3204]),0},
{"id-ppl-inheritAll","Inherit all",NID_id_ppl_inheritAll,8,
	&(lvalues[3212]),0},
{"id-ppl-independent","Independent",NID_Independent,8,&(lvalues[3220]),0},
{"OCSP","OCSP",NID_ad_OCSP,8,&(lvalues[3228]),0},
{"caIssuers","CA Issuers",NID_ad_ca_issuers,8,&(lvalues[3236]),0},
{"ad_timestamping","AD Time Stamping",NID_ad_timeStamping,8,
	&(lvalues[3244]),0},
{"AD_DVCS","ad dvcs",NID_ad_dvcs,8,&(lvalues[3252]),0},
{"caRepository","CA Repository",NID_caRepository,8,&(lvalues[3260]),0},
{"basicOCSPResponse","Basic OCSP Response",NID_id_pkix_OCSP_basic,9,
	&(lvalues[3268]),0},
{"Nonce","OCSP Nonce",NID_id_pkix_OCSP_Nonce,9,&(lvalues[3277]),0},
{"CrlID","OCSP CRL ID",NID_id_pkix_OCSP_CrlID,9,&(lvalues[3286]),0},
{"acceptableResponses","Acceptable OCSP Responses",
	NID_id_pkix_OCSP_acceptableResponses,9,&(lvalues[3295]),0},
{"noCheck","OCSP No Check",NID_id_pkix_OCSP_noCheck,9,&(lvalues[3304]),0},
{"archiveCutoff","OCSP Archive Cutoff",NID_id_pkix_OCSP_archiveCutoff,
	9,&(lvalues[3313]),0},
{"serviceLocator","OCSP Service Locator",
	NID_id_pkix_OCSP_serviceLocator,9,&(lvalues[3322]),0},
{"extendedStatus","Extended OCSP Status",
	NID_id_pkix_OCSP_extendedStatus,9,&(lvalues[3331]),0},
{"valid","valid",NID_id_pkix_OCSP_valid,9,&(lvalues[3340]),0},
{"path","path",NID_id_pkix_OCSP_path,9,&(lvalues[3349]),0},
{"trustRoot","Trust Root",NID_id_pkix_OCSP_trustRoot,9,
	&(lvalues[3358]),0},
{"algorithm","algorithm",NID_algorithm,4,&(lvalues[3367]),0},
{"RSA-NP-MD5","md5WithRSA",NID_md5WithRSA,5,&(lvalues[3371]),0},
{"DES-ECB","des-ecb",NID_des_ecb,5,&(lvalues[3376]),0},
{"DES-CBC","des-cbc",NID_des_cbc,5,&(lvalues[3381]),0},
{"DES-OFB","des-ofb",NID_des_ofb64,5,&(lvalues[3386]),0},
{"DES-CFB","des-cfb",NID_des_cfb64,5,&(lvalues[3391]),0},
{"rsaSignature","rsaSignature",NID_rsaSignature,5,&(lvalues[3396]),0},
{"DSA-old","dsaEncryption-old",NID_dsa_2,5,&(lvalues[3401]),0},
{"DSA-SHA","dsaWithSHA",NID_dsaWithSHA,5,&(lvalues[3406]),0},
{"RSA-SHA","shaWithRSAEncryption",NID_shaWithRSAEncryption,5,
	&(lvalues[3411]),0},
{"DES-EDE","des-ede",NID_des_ede_ecb,5,&(lvalues[3416]),0},
{"DES-EDE3","des-ede3",NID_des_ede3_ecb,0,NULL,0},
{"DES-EDE-CBC","des-ede-cbc",NID_des_ede_cbc,0,NULL,0},
{"DES-EDE-CFB","des-ede-cfb",NID_des_ede_cfb64,0,NULL,0},
{"DES-EDE3-CFB","des-ede3-cfb",NID_des_ede3_cfb64,0,NULL,0},
{"DES-EDE-OFB","des-ede-ofb",NID_des_ede_ofb64,0,NULL,0},
{"DES-EDE3-OFB","des-ede3-ofb",NID_des_ede3_ofb64,0,NULL,0},
{"DESX-CBC","desx-cbc",NID_desx_cbc,0,NULL,0},
{"SHA","sha",NID_sha,5,&(lvalues[3421]),0},
{"SHA1","sha1",NID_sha1,5,&(lvalues[3426]),0},
{"DSA-SHA1-old","dsaWithSHA1-old",NID_dsaWithSHA1_2,5,&(lvalues[3431]),0},
{"RSA-SHA1-2","sha1WithRSA",NID_sha1WithRSA,5,&(lvalues[3436]),0},
{"RIPEMD160","ripemd160",NID_ripemd160,5,&(lvalues[3441]),0},
{"RSA-RIPEMD160","ripemd160WithRSA",NID_ripemd160WithRSA,6,
	&(lvalues[3446]),0},
{"SXNetID","Strong Extranet ID",NID_sxnet,5,&(lvalues[3452]),0},
{"X500","directory services (X.500)",NID_X500,1,&(lvalues[3457]),0},
{"X509","X509",NID_X509,2,&(lvalues[3458]),0},
{"CN","commonName",NID_commonName,3,&(lvalues[3460]),0},
{"SN","surname",NID_surname,3,&(lvalues[3463]),0},
{"serialNumber","serialNumber",NID_serialNumber,3,&(lvalues[3466]),0},
{"C","countryName",NID_countryName,3,&(lvalues[3469]),0},
{"L","localityName",NID_localityName,3,&(lvalues[3472]),0},
{"ST","stateOrProvinceName",NID_stateOrProvinceName,3,&(lvalues[3475]),0},
{"street","streetAddress",NID_streetAddress,3,&(lvalues[3478]),0},
{"O","organizationName",NID_organizationName,3,&(lvalues[3481]),0},
{"OU","organizationalUnitName",NID_organizationalUnitName,3,
	&(lvalues[3484]),0},
{"title","title",NID_title,3,&(lvalues[3487]),0},
{"description","description",NID_description,3,&(lvalues[3490]),0},
{"searchGuide","searchGuide",NID_searchGuide,3,&(lvalues[3493]),0},
{"businessCategory","businessCategory",NID_businessCategory,3,
	&(lvalues[3496]),0},
{"postalAddress","postalAddress",NID_postalAddress,3,&(lvalues[3499]),0},
{"postalCode","postalCode",NID_postalCode,3,&(lvalues[3502]),0},
{"postOfficeBox","postOfficeBox",NID_postOfficeBox,3,&(lvalues[3505]),0},
{"physicalDeliveryOfficeName","physicalDeliveryOfficeName",
	NID_physicalDeliveryOfficeName,3,&(lvalues[3508]),0},
{"telephoneNumber","telephoneNumber",NID_telephoneNumber,3,
	&(lvalues[3511]),0},
{"telexNumber","telexNumber",NID_telexNumber,3,&(lvalues[3514]),0},
{"teletexTerminalIdentifier","teletexTerminalIdentifier",
	NID_teletexTerminalIdentifier,3,&(lvalues[3517]),0},
{"facsimileTelephoneNumber","facsimileTelephoneNumber",
	NID_facsimileTelephoneNumber,3,&(lvalues[3520]),0},
{"x121Address","x121Address",NID_x121Address,3,&(lvalues[3523]),0},
{"internationaliSDNNumber","internationaliSDNNumber",
	NID_internationaliSDNNumber,3,&(lvalues[3526]),0},
{"registeredAddress","registeredAddress",NID_registeredAddress,3,
	&(lvalues[3529]),0},
{"destinationIndicator","destinationIndicator",
	NID_destinationIndicator,3,&(lvalues[3532]),0},
{"preferredDeliveryMethod","preferredDeliveryMethod",
	NID_preferredDeliveryMethod,3,&(lvalues[3535]),0},
{"presentationAddress","presentationAddress",NID_presentationAddress,
	3,&(lvalues[3538]),0},
{"supportedApplicationContext","supportedApplicationContext",
	NID_supportedApplicationContext,3,&(lvalues[3541]),0},
{"member","member",NID_member,3,&(lvalues[3544]),0},
{"owner","owner",NID_owner,3,&(lvalues[3547]),0},
{"roleOccupant","roleOccupant",NID_roleOccupant,3,&(lvalues[3550]),0},
{"seeAlso","seeAlso",NID_seeAlso,3,&(lvalues[3553]),0},
{"userPassword","userPassword",NID_userPassword,3,&(lvalues[3556]),0},
{"userCertificate","userCertificate",NID_userCertificate,3,
	&(lvalues[3559]),0},
{"cACertificate","cACertificate",NID_cACertificate,3,&(lvalues[3562]),0},
{"authorityRevocationList","authorityRevocationList",
	NID_authorityRevocationList,3,&(lvalues[3565]),0},
{"certificateRevocationList","certificateRevocationList",
	NID_certificateRevocationList,3,&(lvalues[3568]),0},
{"crossCertificatePair","crossCertificatePair",
	NID_crossCertificatePair,3,&(lvalues[3571]),0},
{"name","name",NID_name,3,&(lvalues[3574]),0},
{"GN","givenName",NID_givenName,3,&(lvalues[3577]),0},
{"initials","initials",NID_initials,3,&(lvalues[3580]),0},
{"generationQualifier","generationQualifier",NID_generationQualifier,
	3,&(lvalues[3583]),0},
{"x500UniqueIdentifier","x500UniqueIdentifier",
	NID_x500UniqueIdentifier,3,&(lvalues[3586]),0},
{"dnQualifier","dnQualifier",NID_dnQualifier,3,&(lvalues[3589]),0},
{"enhancedSearchGuide","enhancedSearchGuide",NID_enhancedSearchGuide,
	3,&(lvalues[3592]),0},
{"protocolInformation","protocolInformation",NID_protocolInformation,
	3,&(lvalues[3595]),0},
{"distinguishedName","distinguishedName",NID_distinguishedName,3,
	&(lvalues[3598]),0},
{"uniqueMember","uniqueMember",NID_uniqueMember,3,&(lvalues[3601]),0},
{"houseIdentifier","houseIdentifier",NID_houseIdentifier,3,
	&(lvalues[3604]),0},
{"supportedAlgorithms","supportedAlgorithms",NID_supportedAlgorithms,
	3,&(lvalues[3607]),0},
{"deltaRevocationList","deltaRevocationList",NID_deltaRevocationList,
	3,&(lvalues[3610]),0},
{"dmdName","dmdName",NID_dmdName,3,&(lvalues[3613]),0},
{"pseudonym","pseudonym",NID_pseudonym,3,&(lvalues[3616]),0},
{"role","role",NID_role,3,&(lvalues[3619]),0},
{"X500algorithms","directory services - algorithms",
	NID_X500algorithms,2,&(lvalues[3622]),0},
{"RSA","rsa",NID_rsa,4,&(lvalues[3624]),0},
{"RSA-MDC2","mdc2WithRSA",NID_mdc2WithRSA,4,&(lvalues[3628]),0},
{"MDC2","mdc2",NID_mdc2,4,&(lvalues[3632]),0},
{"id-ce","id-ce",NID_id_ce,2,&(lvalues[3636]),0},
{"subjectDirectoryAttributes","X509v3 Subject Directory Attributes",
	NID_subject_directory_attributes,3,&(lvalues[3638]),0},
{"subjectKeyIdentifier","X509v3 Subject Key Identifier",
	NID_subject_key_identifier,3,&(lvalues[3641]),0},
{"keyUsage","X509v3 Key Usage",NID_key_usage,3,&(lvalues[3644]),0},
{"privateKeyUsagePeriod","X509v3 Private Key Usage Period",
	NID_private_key_usage_period,3,&(lvalues[3647]),0},
{"subjectAltName","X509v3 Subject Alternative Name",
	NID_subject_alt_name,3,&(lvalues[3650]),0},
{"issuerAltName","X509v3 Issuer Alternative Name",NID_issuer_alt_name,
	3,&(lvalues[3653]),0},
{"basicConstraints","X509v3 Basic Constraints",NID_basic_constraints,
	3,&(lvalues[3656]),0},
{"crlNumber","X509v3 CRL Number",NID_crl_number,3,&(lvalues[3659]),0},
{"CRLReason","X509v3 CRL Reason Code",NID_crl_reason,3,
	&(lvalues[3662]),0},
{"invalidityDate","Invalidity Date",NID_invalidity_date,3,
	&(lvalues[3665]),0},
{"deltaCRL","X509v3 Delta CRL Indicator",NID_delta_crl,3,
	&(lvalues[3668]),0},
{"issuingDistributionPoint","X509v3 Issuing Distrubution Point",
	NID_issuing_distribution_point,3,&(lvalues[3671]),0},
{"certificateIssuer","X509v3 Certificate Issuer",
	NID_certificate_issuer,3,&(lvalues[3674]),0},
{"nameConstraints","X509v3 Name Constraints",NID_name_constraints,3,
	&(lvalues[3677]),0},
{"crlDistributionPoints","X509v3 CRL Distribution Points",
	NID_crl_distribution_points,3,&(lvalues[3680]),0},
{"certificatePolicies","X509v3 Certificate Policies",
	NID_certificate_policies,3,&(lvalues[3683]),0},
{"anyPolicy","X509v3 Any Policy",NID_any_policy,4,&(lvalues[3686]),0},
{"policyMappings","X509v3 Policy Mappings",NID_policy_mappings,3,
	&(lvalues[3690]),0},
{"authorityKeyIdentifier","X509v3 Authority Key Identifier",
	NID_authority_key_identifier,3,&(lvalues[3693]),0},
{"policyConstraints","X509v3 Policy Constraints",
	NID_policy_constraints,3,&(lvalues[3696]),0},
{"extendedKeyUsage","X509v3 Extended Key Usage",NID_ext_key_usage,3,
	&(lvalues[3699]),0},
{"freshestCRL","X509v3 Freshest CRL",NID_freshest_crl,3,
	&(lvalues[3702]),0},
{"inhibitAnyPolicy","X509v3 Inhibit Any Policy",
	NID_inhibit_any_policy,3,&(lvalues[3705]),0},
{"targetInformation","X509v3 AC Targeting",NID_target_information,3,
	&(lvalues[3708]),0},
{"noRevAvail","X509v3 No Revocation Available",NID_no_rev_avail,3,
	&(lvalues[3711]),0},
{"anyExtendedKeyUsage","Any Extended Key Usage",
	NID_anyExtendedKeyUsage,4,&(lvalues[3714]),0},
{"Netscape","Netscape Communications Corp.",NID_netscape,7,
	&(lvalues[3718]),0},
{"nsCertExt","Netscape Certificate Extension",
	NID_netscape_cert_extension,8,&(lvalues[3725]),0},
{"nsDataType","Netscape Data Type",NID_netscape_data_type,8,
	&(lvalues[3733]),0},
{"nsCertType","Netscape Cert Type",NID_netscape_cert_type,9,
	&(lvalues[3741]),0},
{"nsBaseUrl","Netscape Base Url",NID_netscape_base_url,9,
	&(lvalues[3750]),0},
{"nsRevocationUrl","Netscape Revocation Url",
	NID_netscape_revocation_url,9,&(lvalues[3759]),0},
{"nsCaRevocationUrl","Netscape CA Revocation Url",
	NID_netscape_ca_revocation_url,9,&(lvalues[3768]),0},
{"nsRenewalUrl","Netscape Renewal Url",NID_netscape_renewal_url,9,
	&(lvalues[3777]),0},
{"nsCaPolicyUrl","Netscape CA Policy Url",NID_netscape_ca_policy_url,
	9,&(lvalues[3786]),0},
{"nsSslServerName","Netscape SSL Server Name",
	NID_netscape_ssl_server_name,9,&(lvalues[3795]),0},
{"nsComment","Netscape Comment",NID_netscape_comment,9,
	&(lvalues[3804]),0},
{"nsCertSequence","Netscape Certificate Sequence",
	NID_netscape_cert_sequence,9,&(lvalues[3813]),0},
{"nsSGC","Netscape Server Gated Crypto",NID_ns_sgc,9,&(lvalues[3822]),0},
{"ORG","org",NID_org,1,&(lvalues[3831]),0},
{"DOD","dod",NID_dod,2,&(lvalues[3832]),0},
{"IANA","iana",NID_iana,3,&(lvalues[3834]),0},
{"directory","Directory",NID_Directory,4,&(lvalues[3837]),0},
{"mgmt","Management",NID_Management,4,&(lvalues[3841]),0},
{"experimental","Experimental",NID_Experimental,4,&(lvalues[3845]),0},
{"private","Private",NID_Private,4,&(lvalues[3849]),0},
{"security","Security",NID_Security,4,&(lvalues[3853]),0},
{"snmpv2","SNMPv2",NID_SNMPv2,4,&(lvalues[3857]),0},
{"Mail","Mail",NID_Mail,4,&(lvalues[3861]),0},
{"enterprises","Enterprises",NID_Enterprises,5,&(lvalues[3865]),0},
{"dcobject","dcObject",NID_dcObject,9,&(lvalues[3870]),0},
{"mime-mhs","MIME MHS",NID_mime_mhs,5,&(lvalues[3879]),0},
{"mime-mhs-headings","mime-mhs-headings",NID_mime_mhs_headings,6,
	&(lvalues[3884]),0},
{"mime-mhs-bodies","mime-mhs-bodies",NID_mime_mhs_bodies,6,
	&(lvalues[3890]),0},
{"id-hex-partial-message","id-hex-partial-message",
	NID_id_hex_partial_message,7,&(lvalues[3896]),0},
{"id-hex-multipart-message","id-hex-multipart-message",
	NID_id_hex_multipart_message,7,&(lvalues[3903]),0},
{"RLE","run length compression",NID_rle_compression,6,&(lvalues[3910]),0},
{"ZLIB","zlib compression",NID_zlib_compression,11,&(lvalues[3916]),0},
{"AES-128-ECB","aes-128-ecb",NID_aes_128_ecb,9,&(lvalues[3927]),0},
{"AES-128-CBC","aes-128-cbc",NID_aes_128_cbc,9,&(lvalues[3936]),0},
{"AES-128-OFB","aes-128-ofb",NID_aes_128_ofb128,9,&(lvalues[3945]),0},
{"AES-128-CFB","aes-128-cfb",NID_aes_128_cfb128,9,&(lvalues[3954]),0},
{"id-aes128-wrap","id-aes128-wrap",NID_id_aes128_wrap,9,
	&(lvalues[3963]),0},
{"id-aes128-GCM","aes-128-gcm",NID_aes_128_gcm,9,&(lvalues[3972]),0},
{"id-aes128-CCM","aes-128-ccm",NID_aes_128_ccm,9,&(lvalues[3981]),0},
{"id-aes128-wrap-pad","id-aes128-wrap-pad",NID_id_aes128_wrap_pad,9,
	&(lvalues[3990]),0},
{"AES-192-ECB","aes-192-ecb",NID_aes_192_ecb,9,&(lvalues[3999]),0},
{"AES-192-CBC","aes-192-cbc",NID_aes_192_cbc,9,&(lvalues[4008]),0},
{"AES-192-OFB","aes-192-ofb",NID_aes_192_ofb128,9,&(lvalues[4017]),0},
{"AES-192-CFB","aes-192-cfb",NID_aes_192_cfb128,9,&(lvalues[4026]),0},
{"id-aes192-wrap","id-aes192-wrap",NID_id_aes192_wrap,9,
	&(lvalues[4035]),0},
{"id-aes192-GCM","aes-192-gcm",NID_aes_192_gcm,9,&(lvalues[4044]),0},
{"id-aes192-CCM","aes-192-ccm",NID_aes_192_ccm,9,&(lvalues[4053]),0},
{"id-aes192-wrap-pad","id-aes192-wrap-pad",NID_id_aes192_wrap_pad,9,
	&(lvalues[4062]),0},
{"AES-256-ECB","aes-256-ecb",NID_aes_256_ecb,9,&(lvalues[4071]),0},
{"AES-256-CBC","aes-256-cbc",NID_aes_256_cbc,9,&(lvalues[4080]),0},
{"AES-256-OFB","aes-256-ofb",NID_aes_256_ofb128,9,&(lvalues[4089]),0},
{"AES-256-CFB","aes-256-cfb",NID_aes_256_cfb128,9,&(lvalues[4098]),0},
{"id-aes256-wrap","id-aes256-wrap",NID_id_aes256_wrap,9,
	&(lvalues[4107]),0},
{"id-aes256-GCM","aes-256-gcm",NID_aes_256_gcm,9,&(lvalues[4116]),0},
{"id-aes256-CCM","aes-256-ccm",NID_aes_256_ccm,9,&(lvalues[4125]),0},
{"id-aes256-wrap-pad","id-aes256-wrap-pad",NID_id_aes256_wrap_pad,9,
	&(lvalues[4134]),0},
{"AES-128-CFB1","aes-128-cfb1",NID_aes_128_cfb1,0,NULL,0},
{"AES-192-CFB1","aes-192-cfb1",NID_aes_192_cfb1,0,NULL,0},
{"AES-256-CFB1","aes-256-cfb1",NID_aes_256_cfb1,0,NULL,0},
{"AES-128-CFB8","aes-128-cfb8",NID_aes_128_cfb8,0,NULL,0},
{"AES-192-CFB8","aes-192-cfb8",NID_aes_192_cfb8,0,NULL,0},
{"AES-256-CFB8","aes-256-cfb8",NID_aes_256_cfb8,0,NULL,0},
{"AES-128-CTR","aes-128-ctr",NID_aes_128_ctr,0,NULL,0},
{"AES-192-CTR","aes-192-ctr",NID_aes_192_ctr,0,NULL,0},
{"AES-256-CTR","aes-256-ctr",NID_aes_256_ctr,0,NULL,0},
{"AES-128-XTS","aes-128-xts",NID_aes_128_xts,0,NULL,0},
{"AES-256-XTS","aes-256-xts",NID_aes_256_xts,0,NULL,0},
{"DES-CFB1","des-cfb1",NID_des_cfb1,0,NULL,0},
{"DES-CFB8","des-cfb8",NID_des_cfb8,0,NULL,0},
{"DES-EDE3-CFB1","des-ede3-cfb1",NID_des_ede3_cfb1,0,NULL,0},
{"DES-EDE3-CFB8","des-ede3-cfb8",NID_des_ede3_cfb8,0,NULL,0},
{"SPECK-128-CBC","speck-128-cbc",NID_speck_128_cbc,9,&(lvalues[4143]),0},
{"SPECK-192-CBC","speck-192-cbc",NID_speck_192_cbc,9,&(lvalues[4152]),0},
{"SPECK-256-CBC","speck-256-cbc",NID_speck_256_cbc,9,&(lvalues[4161]),0},
{"SHA256","sha256",NID_sha256,9,&(lvalues[4170]),0},
{"SHA384","sha384",NID_sha384,9,&(lvalues[4179]),0},
{"SHA512","sha512",NID_sha512,9,&(lvalues[4188]),0},
{"SHA224","sha224",NID_sha224,9,&(lvalues[4197]),0},
{"dsa_with_SHA224","dsa_with_SHA224",NID_dsa_with_SHA224,9,
	&(lvalues[4206]),0},
{"dsa_with_SHA256","dsa_with_SHA256",NID_dsa_with_SHA256,9,
	&(lvalues[4215]),0},
{"holdInstructionCode","Hold Instruction Code",
	NID_hold_instruction_code,3,&(lvalues[4224]),0},
{"holdInstructionNone","Hold Instruction None",
	NID_hold_instruction_none,7,&(lvalues[4227]),0},
{"holdInstructionCallIssuer","Hold Instruction Call Issuer",
	NID_hold_instruction_call_issuer,7,&(lvalues[4234]),0},
{"holdInstructionReject","Hold Instruction Reject",
	NID_hold_instruction_reject,7,&(lvalues[4241]),0},
{"data","data",NID_data,1,&(lvalues[4248]),0},
{"pss","pss",NID_pss,3,&(lvalues[4249]),0},
{"ucl","ucl",NID_ucl,7,&(lvalues[4252]),0},
{"pilot","pilot",NID_pilot,8,&(lvalues[4259]),0},
{"pilotAttributeType","pilotAttributeType",NID_pilotAttributeType,9,
	&(lvalues[4267]),0},
{"pilotAttributeSyntax","pilotAttributeSyntax",
	NID_pilotAttributeSyntax,9,&(lvalues[4276]),0},
{"pilotObjectClass","pilotObjectClass",NID_pilotObjectClass,9,
	&(lvalues[4285]),0},
{"pilotGroups","pilotGroups",NID_pilotGroups,9,&(lvalues[4294]),0},
{"iA5StringSyntax","iA5StringSyntax",NID_iA5StringSyntax,10,
	&(lvalues[4303]),0},
{"caseIgnoreIA5StringSyntax","caseIgnoreIA5StringSyntax",
	NID_caseIgnoreIA5StringSyntax,10,&(lvalues[4313]),0},
{"pilotObject","pilotObject",NID_pilotObject,10,&(lvalues[4323]),0},
{"pilotPerson","pilotPerson",NID_pilotPerson,10,&(lvalues[4333]),0},
{"account","account",NID_account,10,&(lvalues[4343]),0},
{"document","document",NID_document,10,&(lvalues[4353]),0},
{"room","room",NID_room,10,&(lvalues[4363]),0},
{"documentSeries","documentSeries",NID_documentSeries,10,
	&(lvalues[4373]),0},
{"domain","Domain",NID_Domain,10,&(lvalues[4383]),0},
{"rFC822localPart","rFC822localPart",NID_rFC822localPart,10,
	&(lvalues[4393]),0},
{"dNSDomain","dNSDomain",NID_dNSDomain,10,&(lvalues[4403]),0},
{"domainRelatedObject","domainRelatedObject",NID_domainRelatedObject,
	10,&(lvalues[4413]),0},
{"friendlyCountry","friendlyCountry",NID_friendlyCountry,10,
	&(lvalues[4423]),0},
{"simpleSecurityObject","simpleSecurityObject",
	NID_simpleSecurityObject,10,&(lvalues[4433]),0},
{"pilotOrganization","pilotOrganization",NID_pilotOrganization,10,
	&(lvalues[4443]),0},
{"pilotDSA","pilotDSA",NID_pilotDSA,10,&(lvalues[4453]),0},
{"qualityLabelledData","qualityLabelledData",NID_qualityLabelledData,
	10,&(lvalues[4463]),0},
{"UID","userId",NID_userId,10,&(lvalues[4473]),0},
{"textEncodedORAddress","textEncodedORAddress",
	NID_textEncodedORAddress,10,&(lvalues[4483]),0},
{"mail","rfc822Mailbox",NID_rfc822Mailbox,10,&(lvalues[4493]),0},
{"info","info",NID_info,10,&(lvalues[4503]),0},
{"favouriteDrink","favouriteDrink",NID_favouriteDrink,10,
	&(lvalues[4513]),0},
{"roomNumber","roomNumber",NID_roomNumber,10,&(lvalues[4523]),0},
{"photo","photo",NID_photo,10,&(lvalues[4533]),0},
{"userClass","userClass",NID_userClass,10,&(lvalues[4543]),0},
{"host","host",NID_host,10,&(lvalues[4553]),0},
{"manager","manager",NID_manager,10,&(lvalues[4563]),0},
{"documentIdentifier","documentIdentifier",NID_documentIdentifier,10,
	&(lvalues[4573]),0},
{"documentTitle","documentTitle",NID_documentTitle,10,&(lvalues[4583]),0},
{"documentVersion","documentVersion",NID_documentVersion,10,
	&(lvalues[4593]),0},
{"documentAuthor","documentAuthor",NID_documentAuthor,10,
	&(lvalues[4603]),0},
{"documentLocation","documentLocation",NID_documentLocation,10,
	&(lvalues[4613]),0},
{"homeTelephoneNumber","homeTelephoneNumber",NID_homeTelephoneNumber,
	10,&(lvalues[4623]),0},
{"secretary","secretary",NID_secretary,10,&(lvalues[4633]),0},
{"otherMailbox","otherMailbox",NID_otherMailbox,10,&(lvalues[4643]),0},
{"lastModifiedTime","lastModifiedTime",NID_lastModifiedTime,10,
	&(lvalues[4653]),0},
{"lastModifiedBy","lastModifiedBy",NID_lastModifiedBy,10,
	&(lvalues[4663]),0},
{"DC","domainComponent",NID_domainComponent,10,&(lvalues[4673]),0},
{"aRecord","aRecord",NID_aRecord,10,&(lvalues[4683]),0},
{"pilotAttributeType27","pilotAttributeType27",
	NID_pilotAttributeType27,10,&(lvalues[4693]),0},
{"mXRecord","mXRecord",NID_mXRecord,10,&(lvalues[4703]),0},
{"nSRecord","nSRecord",NID_nSRecord,10,&(lvalues[4713]),0},
{"sOARecord","sOARecord",NID_sOARecord,10,&(lvalues[4723]),0},
{"cNAMERecord","cNAMERecord",NID_cNAMERecord,10,&(lvalues[4733]),0},
{"associatedDomain","associatedDomain",NID_associatedDomain,10,
	&(lvalues[4743]),0},
{"associatedName","associatedName",NID_associatedName,10,
	&(lvalues[4753]),0},
{"homePostalAddress","homePostalAddress",NID_homePostalAddress,10,
	&(lvalues[4763]),0},
{"personalTitle","personalTitle",NID_personalTitle,10,&(lvalues[4773]),0},
{"mobileTelephoneNumber","mobileTelephoneNumber",
	NID_mobileTelephoneNumber,10,&(lvalues[4783]),0},
{"pagerTelephoneNumber","pagerTelephoneNumber",
	NID_pagerTelephoneNumber,10,&(lvalues[4793]),0},
{"friendlyCountryName","friendlyCountryName",NID_friendlyCountryName,
	10,&(lvalues[4803]),0},
{"organizationalStatus","organizationalStatus",
	NID_organizationalStatus,10,&(lvalues[4813]),0},
{"janetMailbox","janetMailbox",NID_janetMailbox,10,&(lvalues[4823]),0},
{"mailPreferenceOption","mailPreferenceOption",
	NID_mailPreferenceOption,10,&(lvalues[4833]),0},
{"buildingName","buildingName",NID_buildingName,10,&(lvalues[4843]),0},
{"dSAQuality","dSAQuality",NID_dSAQuality,10,&(lvalues[4853]),0},
{"singleLevelQuality","singleLevelQuality",NID_singleLevelQuality,10,
	&(lvalues[4863]),0},
{"subtreeMinimumQuality","subtreeMinimumQuality",
	NID_subtreeMinimumQuality,10,&(lvalues[4873]),0},
{"subtreeMaximumQuality","subtreeMaximumQuality",
	NID_subtreeMaximumQuality,10,&(lvalues[4883]),0},
{"personalSignature","personalSignature",NID_personalSignature,10,
	&(lvalues[4893]),0},
{"dITRedirect","dITRedirect",NID_dITRedirect,10,&(lvalues[4903]),0},
{"audio","audio",NID_audio,10,&(lvalues[4913]),0},
{"documentPublisher","documentPublisher",NID_documentPublisher,10,
	&(lvalues[4923]),0},
{"id-set","Secure Electronic Transactions",NID_id_set,2,
	&(lvalues[4933]),0},
{"set-ctype","content types",NID_set_ctype,3,&(lvalues[4935]),0},
{"set-msgExt","message extensions",NID_set_msgExt,3,&(lvalues[4938]),0},
{"set-attr","set-attr",NID_set_attr,3,&(lvalues[4941]),0},
{"set-policy","set-policy",NID_set_policy,3,&(lvalues[4944]),0},
{"set-certExt","certificate extensions",NID_set_certExt,3,
	&(lvalues[4947]),0},
{"set-brand","set-brand",NID_set_brand,3,&(lvalues[4950]),0},
{"setct-PANData","setct-PANData",NID_setct_PANData,4,&(lvalues[4953]),0},
{"setct-PANToken","setct-PANToken",NID_setct_PANToken,4,
	&(lvalues[4957]),0},
{"setct-PANOnly","setct-PANOnly",NID_setct_PANOnly,4,&(lvalues[4961]),0},
{"setct-OIData","setct-OIData",NID_setct_OIData,4,&(lvalues[4965]),0},
{"setct-PI","setct-PI",NID_setct_PI,4,&(lvalues[4969]),0},
{"setct-PIData","setct-PIData",NID_setct_PIData,4,&(lvalues[4973]),0},
{"setct-PIDataUnsigned","setct-PIDataUnsigned",
	NID_setct_PIDataUnsigned,4,&(lvalues[4977]),0},
{"setct-HODInput","setct-HODInput",NID_setct_HODInput,4,
	&(lvalues[4981]),0},
{"setct-AuthResBaggage","setct-AuthResBaggage",
	NID_setct_AuthResBaggage,4,&(lvalues[4985]),0},
{"setct-AuthRevReqBaggage","setct-AuthRevReqBaggage",
	NID_setct_AuthRevReqBaggage,4,&(lvalues[4989]),0},
{"setct-AuthRevResBaggage","setct-AuthRevResBaggage",
	NID_setct_AuthRevResBaggage,4,&(lvalues[4993]),0},
{"setct-CapTokenSeq","setct-CapTokenSeq",NID_setct_CapTokenSeq,4,
	&(lvalues[4997]),0},
{"setct-PInitResData","setct-PInitResData",NID_setct_PInitResData,4,
	&(lvalues[5001]),0},
{"setct-PI-TBS","setct-PI-TBS",NID_setct_PI_TBS,4,&(lvalues[5005]),0},
{"setct-PResData","setct-PResData",NID_setct_PResData,4,
	&(lvalues[5009]),0},
{"setct-AuthReqTBS","setct-AuthReqTBS",NID_setct_AuthReqTBS,4,
	&(lvalues[5013]),0},
{"setct-AuthResTBS","setct-AuthResTBS",NID_setct_AuthResTBS,4,
	&(lvalues[5017]),0},
{"setct-AuthResTBSX","setct-AuthResTBSX",NID_setct_AuthResTBSX,4,
	&(lvalues[5021]),0},
{"setct-AuthTokenTBS","setct-AuthTokenTBS",NID_setct_AuthTokenTBS,4,
	&(lvalues[5025]),0},
{"setct-CapTokenData","setct-CapTokenData",NID_setct_CapTokenData,4,
	&(lvalues[5029]),0},
{"setct-CapTokenTBS","setct-CapTokenTBS",NID_setct_CapTokenTBS,4,
	&(lvalues[5033]),0},
{"setct-AcqCardCodeMsg","setct-AcqCardCodeMsg",
	NID_setct_AcqCardCodeMsg,4,&(lvalues[5037]),0},
{"setct-AuthRevReqTBS","setct-AuthRevReqTBS",NID_setct_AuthRevReqTBS,
	4,&(lvalues[5041]),0},
{"setct-AuthRevResData","setct-AuthRevResData",
	NID_setct_AuthRevResData,4,&(lvalues[5045]),0},
{"setct-AuthRevResTBS","setct-AuthRevResTBS",NID_setct_AuthRevResTBS,
	4,&(lvalues[5049]),0},
{"setct-CapReqTBS","setct-CapReqTBS",NID_setct_CapReqTBS,4,
	&(lvalues[5053]),0},
{"setct-CapReqTBSX","setct-CapReqTBSX",NID_setct_CapReqTBSX,4,
	&(lvalues[5057]),0},
{"setct-CapResData","setct-CapResData",NID_setct_CapResData,4,
	&(lvalues[5061]),0},
{"setct-CapRevReqTBS","setct-CapRevReqTBS",NID_setct_CapRevReqTBS,4,
	&(lvalues[5065]),0},
{"setct-CapRevReqTBSX","setct-CapRevReqTBSX",NID_setct_CapRevReqTBSX,
	4,&(lvalues[5069]),0},
{"setct-CapRevResData","setct-CapRevResData",NID_setct_CapRevResData,
	4,&(lvalues[5073]),0},
{"setct-CredReqTBS","setct-CredReqTBS",NID_setct_CredReqTBS,4,
	&(lvalues[5077]),0},
{"setct-CredReqTBSX","setct-CredReqTBSX",NID_setct_CredReqTBSX,4,
	&(lvalues[5081]),0},
{"setct-CredResData","setct-CredResData",NID_setct_CredResData,4,
	&(lvalues[5085]),0},
{"setct-CredRevReqTBS","setct-CredRevReqTBS",NID_setct_CredRevReqTBS,
	4,&(lvalues[5089]),0},
{"setct-CredRevReqTBSX","setct-CredRevReqTBSX",
	NID_setct_CredRevReqTBSX,4,&(lvalues[5093]),0},
{"setct-CredRevResData","setct-CredRevResData",
	NID_setct_CredRevResData,4,&(lvalues[5097]),0},
{"setct-PCertReqData","setct-PCertReqData",NID_setct_PCertReqData,4,
	&(lvalues[5101]),0},
{"setct-PCertResTBS","setct-PCertResTBS",NID_setct_PCertResTBS,4,
	&(lvalues[5105]),0},
{"setct-BatchAdminReqData","setct-BatchAdminReqData",
	NID_setct_BatchAdminReqData,4,&(lvalues[5109]),0},
{"setct-BatchAdminResData","setct-BatchAdminResData",
	NID_setct_BatchAdminResData,4,&(lvalues[5113]),0},
{"setct-CardCInitResTBS","setct-CardCInitResTBS",
	NID_setct_CardCInitResTBS,4,&(lvalues[5117]),0},
{"setct-MeAqCInitResTBS","setct-MeAqCInitResTBS",
	NID_setct_MeAqCInitResTBS,4,&(lvalues[5121]),0},
{"setct-RegFormResTBS","setct-RegFormResTBS",NID_setct_RegFormResTBS,
	4,&(lvalues[5125]),0},
{"setct-CertReqData","setct-CertReqData",NID_setct_CertReqData,4,
	&(lvalues[5129]),0},
{"setct-CertReqTBS","setct-CertReqTBS",NID_setct_CertReqTBS,4,
	&(lvalues[5133]),0},
{"setct-CertResData","setct-CertResData",NID_setct_CertResData,4,
	&(lvalues[5137]),0},
{"setct-CertInqReqTBS","setct-CertInqReqTBS",NID_setct_CertInqReqTBS,
	4,&(lvalues[5141]),0},
{"setct-ErrorTBS","setct-ErrorTBS",NID_setct_ErrorTBS,4,
	&(lvalues[5145]),0},
{"setct-PIDualSignedTBE","setct-PIDualSignedTBE",
	NID_setct_PIDualSignedTBE,4,&(lvalues[5149]),0},
{"setct-PIUnsignedTBE","setct-PIUnsignedTBE",NID_setct_PIUnsignedTBE,
	4,&(lvalues[5153]),0},
{"setct-AuthReqTBE","setct-AuthReqTBE",NID_setct_AuthReqTBE,4,
	&(lvalues[5157]),0},
{"setct-AuthResTBE","setct-AuthResTBE",NID_setct_AuthResTBE,4,
	&(lvalues[5161]),0},
{"setct-AuthResTBEX","setct-AuthResTBEX",NID_setct_AuthResTBEX,4,
	&(lvalues[5165]),0},
{"setct-AuthTokenTBE","setct-AuthTokenTBE",NID_setct_AuthTokenTBE,4,
	&(lvalues[5169]),0},
{"setct-CapTokenTBE","setct-CapTokenTBE",NID_setct_CapTokenTBE,4,
	&(lvalues[5173]),0},
{"setct-CapTokenTBEX","setct-CapTokenTBEX",NID_setct_CapTokenTBEX,4,
	&(lvalues[5177]),0},
{"setct-AcqCardCodeMsgTBE","setct-AcqCardCodeMsgTBE",
	NID_setct_AcqCardCodeMsgTBE,4,&(lvalues[5181]),0},
{"setct-AuthRevReqTBE","setct-AuthRevReqTBE",NID_setct_AuthRevReqTBE,
	4,&(lvalues[5185]),0},
{"setct-AuthRevResTBE","setct-AuthRevResTBE",NID_setct_AuthRevResTBE,
	4,&(lvalues[5189]),0},
{"setct-AuthRevResTBEB","setct-AuthRevResTBEB",
	NID_setct_AuthRevResTBEB,4,&(lvalues[5193]),0},
{"setct-CapReqTBE","setct-CapReqTBE",NID_setct_CapReqTBE,4,
	&(lvalues[5197]),0},
{"setct-CapReqTBEX","setct-CapReqTBEX",NID_setct_CapReqTBEX,4,
	&(lvalues[5201]),0},
{"setct-CapResTBE","setct-CapResTBE",NID_setct_CapResTBE,4,
	&(lvalues[5205]),0},
{"setct-CapRevReqTBE","setct-CapRevReqTBE",NID_setct_CapRevReqTBE,4,
	&(lvalues[5209]),0},
{"setct-CapRevReqTBEX","setct-CapRevReqTBEX",NID_setct_CapRevReqTBEX,
	4,&(lvalues[5213]),0},
{"setct-CapRevResTBE","setct-CapRevResTBE",NID_setct_CapRevResTBE,4,
	&(lvalues[5217]),0},
{"setct-CredReqTBE","setct-CredReqTBE",NID_setct_CredReqTBE,4,
	&(lvalues[5221]),0},
{"setct-CredReqTBEX","setct-CredReqTBEX",NID_setct_CredReqTBEX,4,
	&(lvalues[5225]),0},
{"setct-CredResTBE","setct-CredResTBE",NID_setct_CredResTBE,4,
	&(lvalues[5229]),0},
{"setct-CredRevReqTBE","setct-CredRevReqTBE",NID_setct_CredRevReqTBE,
	4,&(lvalues[5233]),0},
{"setct-CredRevReqTBEX","setct-CredRevReqTBEX",
	NID_setct_CredRevReqTBEX,4,&(lvalues[5237]),0},
{"setct-CredRevResTBE","setct-CredRevResTBE",NID_setct_CredRevResTBE,
	4,&(lvalues[5241]),0},
{"setct-BatchAdminReqTBE","setct-BatchAdminReqTBE",
	NID_setct_BatchAdminReqTBE,4,&(lvalues[5245]),0},
{"setct-BatchAdminResTBE","setct-BatchAdminResTBE",
	NID_setct_BatchAdminResTBE,4,&(lvalues[5249]),0},
{"setct-RegFormReqTBE","setct-RegFormReqTBE",NID_setct_RegFormReqTBE,
	4,&(lvalues[5253]),0},
{"setct-CertReqTBE","setct-CertReqTBE",NID_setct_CertReqTBE,4,
	&(lvalues[5257]),0},
{"setct-CertReqTBEX","setct-CertReqTBEX",NID_setct_CertReqTBEX,4,
	&(lvalues[5261]),0},
{"setct-CertResTBE","setct-CertResTBE",NID_setct_CertResTBE,4,
	&(lvalues[5265]),0},
{"setct-CRLNotificationTBS","setct-CRLNotificationTBS",
	NID_setct_CRLNotificationTBS,4,&(lvalues[5269]),0},
{"setct-CRLNotificationResTBS","setct-CRLNotificationResTBS",
	NID_setct_CRLNotificationResTBS,4,&(lvalues[5273]),0},
{"setct-BCIDistributionTBS","setct-BCIDistributionTBS",
	NID_setct_BCIDistributionTBS,4,&(lvalues[5277]),0},
{"setext-genCrypt","generic cryptogram",NID_setext_genCrypt,4,
	&(lvalues[5281]),0},
{"setext-miAuth","merchant initiated auth",NID_setext_miAuth,4,
	&(lvalues[5285]),0},
{"setext-pinSecure","setext-pinSecure",NID_setext_pinSecure,4,
	&(lvalues[5289]),0},
{"setext-pinAny","setext-pinAny",NID_setext_pinAny,4,&(lvalues[5293]),0},
{"setext-track2","setext-track2",NID_setext_track2,4,&(lvalues[5297]),0},
{"setext-cv","additional verification",NID_setext_cv,4,
	&(lvalues[5301]),0},
{"set-policy-root","set-policy-root",NID_set_policy_root,4,
	&(lvalues[5305]),0},
{"setCext-hashedRoot","setCext-hashedRoot",NID_setCext_hashedRoot,4,
	&(lvalues[5309]),0},
{"setCext-certType","setCext-certType",NID_setCext_certType,4,
	&(lvalues[5313]),0},
{"setCext-merchData","setCext-merchData",NID_setCext_merchData,4,
	&(lvalues[5317]),0},
{"setCext-cCertRequired","setCext-cCertRequired",
	NID_setCext_cCertRequired,4,&(lvalues[5321]),0},
{"setCext-tunneling","setCext-tunneling",NID_setCext_tunneling,4,
	&(lvalues[5325]),0},
{"setCext-setExt","setCext-setExt",NID_setCext_setExt,4,
	&(lvalues[5329]),0},
{"setCext-setQualf","setCext-setQualf",NID_setCext_setQualf,4,
	&(lvalues[5333]),0},
{"setCext-PGWYcapabilities","setCext-PGWYcapabilities",
	NID_setCext_PGWYcapabilities,4,&(lvalues[5337]),0},
{"setCext-TokenIdentifier","setCext-TokenIdentifier",
	NID_setCext_TokenIdentifier,4,&(lvalues[5341]),0},
{"setCext-Track2Data","setCext-Track2Data",NID_setCext_Track2Data,4,
	&(lvalues[5345]),0},
{"setCext-TokenType","setCext-TokenType",NID_setCext_TokenType,4,
	&(lvalues[5349]),0},
{"setCext-IssuerCapabilities","setCext-IssuerCapabilities",
	NID_setCext_IssuerCapabilities,4,&(lvalues[5353]),0},
{"setAttr-Cert","setAttr-Cert",NID_setAttr_Cert,4,&(lvalues[5357]),0},
{"setAttr-PGWYcap","payment gateway capabilities",NID_setAttr_PGWYcap,
	4,&(lvalues[5361]),0},
{"setAttr-TokenType","setAttr-TokenType",NID_setAttr_TokenType,4,
	&(lvalues[5365]),0},
{"setAttr-IssCap","issuer capabilities",NID_setAttr_IssCap,4,
	&(lvalues[5369]),0},
{"set-rootKeyThumb","set-rootKeyThumb",NID_set_rootKeyThumb,5,
	&(lvalues[5373]),0},
{"set-addPolicy","set-addPolicy",NID_set_addPolicy,5,&(lvalues[5378]),0},
{"setAttr-Token-EMV","setAttr-Token-EMV",NID_setAttr_Token_EMV,5,
	&(lvalues[5383]),0},
{"setAttr-Token-B0Prime","setAttr-Token-B0Prime",
	NID_setAttr_Token_B0Prime,5,&(lvalues[5388]),0},
{"setAttr-IssCap-CVM","setAttr-IssCap-CVM",NID_setAttr_IssCap_CVM,5,
	&(lvalues[5393]),0},
{"setAttr-IssCap-T2","setAttr-IssCap-T2",NID_setAttr_IssCap_T2,5,
	&(lvalues[5398]),0},
{"setAttr-IssCap-Sig","setAttr-IssCap-Sig",NID_setAttr_IssCap_Sig,5,
	&(lvalues[5403]),0},
{"setAttr-GenCryptgrm","generate cryptogram",NID_setAttr_GenCryptgrm,
	6,&(lvalues[5408]),0},
{"setAttr-T2Enc","encrypted track 2",NID_setAttr_T2Enc,6,
	&(lvalues[5414]),0},
{"setAttr-T2cleartxt","cleartext track 2",NID_setAttr_T2cleartxt,6,
	&(lvalues[5420]),0},
{"setAttr-TokICCsig","ICC or token signature",NID_setAttr_TokICCsig,6,
	&(lvalues[5426]),0},
{"setAttr-SecDevSig","secure device signature",NID_setAttr_SecDevSig,
	6,&(lvalues[5432]),0},
{"set-brand-IATA-ATA","set-brand-IATA-ATA",NID_set_brand_IATA_ATA,4,
	&(lvalues[5438]),0},
{"set-brand-Diners","set-brand-Diners",NID_set_brand_Diners,4,
	&(lvalues[5442]),0},
{"set-brand-AmericanExpress","set-brand-AmericanExpress",
	NID_set_brand_AmericanExpress,4,&(lvalues[5446]),0},
{"set-brand-JCB","set-brand-JCB",NID_set_brand_JCB,4,&(lvalues[5450]),0},
{"set-brand-Visa","set-brand-Visa",NID_set_brand_Visa,4,
	&(lvalues[5454]),0},
{"set-brand-MasterCard","set-brand-MasterCard",
	NID_set_brand_MasterCard,4,&(lvalues[5458]),0},
{"set-brand-Novus","set-brand-Novus",NID_set_brand_Novus,5,
	&(lvalues[5462]),0},
{"DES-CDMF","des-cdmf",NID_des_cdmf,8,&(lvalues[5467]),0},
{"rsaOAEPEncryptionSET","rsaOAEPEncryptionSET",
	NID_rsaOAEPEncryptionSET,9,&(lvalues[5475]),0},
{"Oakley-EC2N-3","ipsec3",NID_ipsec3,0,NULL,0},
{"Oakley-EC2N-4","ipsec4",NID_ipsec4,0,NULL,0},
{"whirlpool","whirlpool",NID_whirlpool,6,&(lvalues[5484]),0},
{"cryptopro","cryptopro",NID_cryptopro,5,&(lvalues[5490]),0},
{"cryptocom","cryptocom",NID_cryptocom,5,&(lvalues[5495]),0},
{"id-GostR3411-94-with-GostR3410-2001",
	"GOST R 34.11-94 with GOST R 34.10-2001",
	NID_id_GostR3411_94_with_GostR3410_2001,6,&(lvalues[5500]),0},
{"id-GostR3411-94-with-GostR3410-94",
	"GOST R 34.11-94 with GOST R 34.10-94",
	NID_id_GostR3411_94_with_GostR3410_94,6,&(lvalues[5506]),0},
{"md_gost94","GOST R 34.11-94",NID_id_GostR3411_94,6,&(lvalues[5512]),0},
{"id-HMACGostR3411-94","HMAC GOST 34.11-94",NID_id_HMACGostR3411_94,6,
	&(lvalues[5518]),0},
{"gost2001","GOST R 34.10-2001",NID_id_GostR3410_2001,6,
	&(lvalues[5524]),0},
{"gost94","GOST R 34.10-94",NID_id_GostR3410_94,6,&(lvalues[5530]),0},
{"gost89","GOST 28147-89",NID_id_Gost28147_89,6,&(lvalues[5536]),0},
{"gost89-cnt","gost89-cnt",NID_gost89_cnt,0,NULL,0},
{"gost-mac","GOST 28147-89 MAC",NID_id_Gost28147_89_MAC,6,
	&(lvalues[5542]),0},
{"prf-gostr3411-94","GOST R 34.11-94 PRF",NID_id_GostR3411_94_prf,6,
	&(lvalues[5548]),0},
{"id-GostR3410-2001DH","GOST R 34.10-2001 DH",NID_id_GostR3410_2001DH,
	6,&(lvalues[5554]),0},
{"id-GostR3410-94DH","GOST R 34.10-94 DH",NID_id_GostR3410_94DH,6,
	&(lvalues[5560]),0},
{"id-Gost28147-89-CryptoPro-KeyMeshing",
	"id-Gost28147-89-CryptoPro-KeyMeshing",
	NID_id_Gost28147_89_CryptoPro_KeyMeshing,7,&(lvalues[5566]),0},
{"id-Gost28147-89-None-KeyMeshing","id-Gost28147-89-None-KeyMeshing",
	NID_id_Gost28147_89_None_KeyMeshing,7,&(lvalues[5573]),0},
{"id-GostR3411-94-TestParamSet","id-GostR3411-94-TestParamSet",
	NID_id_GostR3411_94_TestParamSet,7,&(lvalues[5580]),0},
{"id-GostR3411-94-CryptoProParamSet",
	"id-GostR3411-94-CryptoProParamSet",
	NID_id_GostR3411_94_CryptoProParamSet,7,&(lvalues[5587]),0},
{"id-Gost28147-89-TestParamSet","id-Gost28147-89-TestParamSet",
	NID_id_Gost28147_89_TestParamSet,7,&(lvalues[5594]),0},
{"id-Gost28147-89-CryptoPro-A-ParamSet",
	"id-Gost28147-89-CryptoPro-A-ParamSet",
	NID_id_Gost28147_89_CryptoPro_A_ParamSet,7,&(lvalues[5601]),0},
{"id-Gost28147-89-CryptoPro-B-ParamSet",
	"id-Gost28147-89-CryptoPro-B-ParamSet",
	NID_id_Gost28147_89_CryptoPro_B_ParamSet,7,&(lvalues[5608]),0},
{"id-Gost28147-89-CryptoPro-C-ParamSet",
	"id-Gost28147-89-CryptoPro-C-ParamSet",
	NID_id_Gost28147_89_CryptoPro_C_ParamSet,7,&(lvalues[5615]),0},
{"id-Gost28147-89-CryptoPro-D-ParamSet",
	"id-Gost28147-89-CryptoPro-D-ParamSet",
	NID_id_Gost28147_89_CryptoPro_D_ParamSet,7,&(lvalues[5622]),0},
{"id-Gost28147-89-CryptoPro-Oscar-1-1-ParamSet",
	"id-Gost28147-89-CryptoPro-Oscar-1-1-ParamSet",
	NID_id_Gost28147_89_CryptoPro_Oscar_1_1_ParamSet,7,&(lvalues[5629]),
	0},
{"id-Gost28147-89-CryptoPro-Oscar-1-0-ParamSet",
	"id-Gost28147-89-CryptoPro-Oscar-1-0-ParamSet",
	NID_id_Gost28147_89_CryptoPro_Oscar_1_0_ParamSet,7,&(lvalues[5636]),
	0},
{"id-Gost28147-89-CryptoPro-RIC-1-ParamSet",
	"id-Gost28147-89-CryptoPro-RIC-1-ParamSet",
	NID_id_Gost28147_89_CryptoPro_RIC_1_ParamSet,7,&(lvalues[5643]),0},
{"id-GostR3410-94-TestParamSet","id-GostR3410-94-TestParamSet",
	NID_id_GostR3410_94_TestParamSet,7,&(lvalues[5650]),0},
{"id-GostR3410-94-CryptoPro-A-ParamSet",
	"id-GostR3410-94-CryptoPro-A-ParamSet",
	NID_id_GostR3410_94_CryptoPro_A_ParamSet,7,&(lvalues[5657]),0},
{"id-GostR3410-94-CryptoPro-B-ParamSet",
	"id-GostR3410-94-CryptoPro-B-ParamSet",
	NID_id_GostR3410_94_CryptoPro_B_ParamSet,7,&(lvalues[5664]),0},
{"id-GostR3410-94-CryptoPro-C-ParamSet",
	"id-GostR3410-94-CryptoPro-C-ParamSet",
	NID_id_GostR3410_94_CryptoPro_C_ParamSet,7,&(lvalues[5671]),0},
{"id-GostR3410-94-CryptoPro-D-ParamSet",
	"id-GostR3410-94-CryptoPro-D-ParamSet",
	NID_id_GostR3410_94_CryptoPro_D_ParamSet,7,&(lvalues[5678]),0},
{"id-GostR3410-94-CryptoPro-XchA-ParamSet",
	"id-GostR3410-94-CryptoPro-XchA-ParamSet",
	NID_id_GostR3410_94_CryptoPro_XchA_ParamSet,7,&(lvalues[5685]),0},
{"id-GostR3410-94-CryptoPro-XchB-ParamSet",
	"id-GostR3410-94-CryptoPro-XchB-ParamSet",
	NID_id_GostR3410_94_CryptoPro_XchB_ParamSet,7,&(lvalues[5692]),0},
{"id-GostR3410-94-CryptoPro-XchC-ParamSet",
	"id-GostR3410-94-CryptoPro-XchC-ParamSet",
	NID_id_GostR3410_94_CryptoPro_XchC_ParamSet,7,&(lvalues[5699]),0},
{"id-GostR3410-2001-TestParamSet","id-GostR3410-2001-TestParamSet",
	NID_id_GostR3410_2001_TestParamSet,7,&(lvalues[5706]),0},
{"id-GostR3410-2001-CryptoPro-A-ParamSet",
	"id-GostR3410-2001-CryptoPro-A-ParamSet",
	NID_id_GostR3410_2001_CryptoPro_A_ParamSet,7,&(lvalues[5713]),0},
{"id-GostR3410-2001-CryptoPro-B-ParamSet",
	"id-GostR3410-2001-CryptoPro-B-ParamSet",
	NID_id_GostR3410_2001_CryptoPro_B_ParamSet,7,&(lvalues[5720]),0},
{"id-GostR3410-2001-CryptoPro-C-ParamSet",
	"id-GostR3410-2001-CryptoPro-C-ParamSet",
	NID_id_GostR3410_2001_CryptoPro_C_ParamSet,7,&(lvalues[5727]),0},
{"id-GostR3410-2001-CryptoPro-XchA-ParamSet",
	"id-GostR3410-2001-CryptoPro-XchA-ParamSet",
	NID_id_GostR3410_2001_CryptoPro_XchA_ParamSet,7,&(lvalues[5734]),0},
	
{"id-GostR3410-2001-CryptoPro-XchB-ParamSet",
	"id-GostR3410-2001-CryptoPro-XchB-ParamSet",
	NID_id_GostR3410_2001_CryptoPro_XchB_ParamSet,7,&(lvalues[5741]),0},
	
{"id-GostR3410-94-a","id-GostR3410-94-a",NID_id_GostR3410_94_a,7,
	&(lvalues[5748]),0},
{"id-GostR3410-94-aBis","id-GostR3410-94-aBis",
	NID_id_GostR3410_94_aBis,7,&(lvalues[5755]),0},
{"id-GostR3410-94-b","id-GostR3410-94-b",NID_id_GostR3410_94_b,7,
	&(lvalues[5762]),0},
{"id-GostR3410-94-bBis","id-GostR3410-94-bBis",
	NID_id_GostR3410_94_bBis,7,&(lvalues[5769]),0},
{"id-Gost28147-89-cc","GOST 28147-89 Cryptocom ParamSet",
	NID_id_Gost28147_89_cc,8,&(lvalues[5776]),0},
{"gost94cc","GOST 34.10-94 Cryptocom",NID_id_GostR3410_94_cc,8,
	&(lvalues[5784]),0},
{"gost2001cc","GOST 34.10-2001 Cryptocom",NID_id_GostR3410_2001_cc,8,
	&(lvalues[5792]),0},
{"id-GostR3411-94-with-GostR3410-94-cc",
	"GOST R 34.11-94 with GOST R 34.10-94 Cryptocom",
	NID_id_GostR3411_94_with_GostR3410_94_cc,8,&(lvalues[5800]),0},
{"id-GostR3411-94-with-GostR3410-2001-cc",
	"GOST R 34.11-94 with GOST R 34.10-2001 Cryptocom",
	NID_id_GostR3411_94_with_GostR3410_2001_cc,8,&(lvalues[5808]),0},
{"id-GostR3410-2001-ParamSet-cc",
	"GOST R 3410-2001 Parameter Set Cryptocom",
	NID_id_GostR3410_2001_ParamSet_cc,8,&(lvalues[5816]),0},
{"CAMELLIA-128-CBC","camellia-128-cbc",NID_camellia_128_cbc,11,
	&(lvalues[5824]),0},
{"CAMELLIA-192-CBC","camellia-192-cbc",NID_camellia_192_cbc,11,
	&(lvalues[5835]),0},
{"CAMELLIA-256-CBC","camellia-256-cbc",NID_camellia_256_cbc,11,
	&(lvalues[5846]),0},
{"id-camellia128-wrap","id-camellia128-wrap",NID_id_camellia128_wrap,
	11,&(lvalues[5857]),0},
{"id-camellia192-wrap","id-camellia192-wrap",NID_id_camellia192_wrap,
	11,&(lvalues[5868]),0},
{"id-camellia256-wrap","id-camellia256-wrap",NID_id_camellia256_wrap,
	11,&(lvalues[5879]),0},
{"CAMELLIA-128-ECB","camellia-128-ecb",NID_camellia_128_ecb,8,
	&(lvalues[5890]),0},
{"CAMELLIA-128-OFB","camellia-128-ofb",NID_camellia_128_ofb128,8,
	&(lvalues[5898]),0},
{"CAMELLIA-128-CFB","camellia-128-cfb",NID_camellia_128_cfb128,8,
	&(lvalues[5906]),0},
{"CAMELLIA-192-ECB","camellia-192-ecb",NID_camellia_192_ecb,8,
	&(lvalues[5914]),0},
{"CAMELLIA-192-OFB","camellia-192-ofb",NID_camellia_192_ofb128,8,
	&(lvalues[5922]),0},
{"CAMELLIA-192-CFB","camellia-192-cfb",NID_camellia_192_cfb128,8,
	&(lvalues[5930]),0},
{"CAMELLIA-256-ECB","camellia-256-ecb",NID_camellia_256_ecb,8,
	&(lvalues[5938]),0},
{"CAMELLIA-256-OFB","camellia-256-ofb",NID_camellia_256_ofb128,8,
	&(lvalues[5946]),0},
{"CAMELLIA-256-CFB","camellia-256-cfb",NID_camellia_256_cfb128,8,
	&(lvalues[5954]),0},
{"CAMELLIA-128-CFB1","camellia-128-cfb1",NID_camellia_128_cfb1,0,NULL,0},
{"CAMELLIA-192-CFB1","camellia-192-cfb1",NID_camellia_192_cfb1,0,NULL,0},
{"CAMELLIA-256-CFB1","camellia-256-cfb1",NID_camellia_256_cfb1,0,NULL,0},
{"CAMELLIA-128-CFB8","camellia-128-cfb8",NID_camellia_128_cfb8,0,NULL,0},
{"CAMELLIA-192-CFB8","camellia-192-cfb8",NID_camellia_192_cfb8,0,NULL,0},
{"CAMELLIA-256-CFB8","camellia-256-cfb8",NID_camellia_256_cfb8,0,NULL,0},
{"KISA","kisa",NID_kisa,6,&(lvalues[5962]),0},
{"SEED-ECB","seed-ecb",NID_seed_ecb,8,&(lvalues[5968]),0},
{"SEED-CBC","seed-cbc",NID_seed_cbc,8,&(lvalues[5976]),0},
{"SEED-CFB","seed-cfb",NID_seed_cfb128,8,&(lvalues[5984]),0},
{"SEED-OFB","seed-ofb",NID_seed_ofb128,8,&(lvalues[5992]),0},
{"HMAC","hmac",NID_hmac,0,NULL,0},
{"CMAC","cmac",NID_cmac,0,NULL,0},
{"RC4-HMAC-MD5","rc4-hmac-md5",NID_rc4_hmac_md5,0,NULL,0},
{"AES-128-CBC-HMAC-SHA1","aes-128-cbc-hmac-sha1",
	NID_aes_128_cbc_hmac_sha1,0,NULL,0},
{"AES-192-CBC-HMAC-SHA1","aes-192-cbc-hmac-sha1",
	NID_aes_192_cbc_hmac_sha1,0,NULL,0},
{"AES-256-CBC-HMAC-SHA1","aes-256-cbc-hmac-sha1",
	NID_aes_256_cbc_hmac_sha1,0,NULL,0},
{"teletrust","teletrust",NID_teletrust,2,&(lvalues[6000]),0},
{"brainpool","brainpool",NID_brainpool,7,&(lvalues[6002]),0},
{"brainpoolP160r1","brainpoolP160r1",NID_brainpoolP160r1,9,
	&(lvalues[6009]),0},
{"brainpoolP160t1","brainpoolP160t1",NID_brainpoolP160t1,9,
	&(lvalues[6018]),0},
{"brainpoolP192r1","brainpoolP192r1",NID_brainpoolP192r1,9,
	&(lvalues[6027]),0},
{"brainpoolP192t1","brainpoolP192t1",NID_brainpoolP192t1,9,
	&(lvalues[6036]),0},
{"brainpoolP224r1","brainpoolP224r1",NID_brainpoolP224r1,9,
	&(lvalues[6045]),0},
{"brainpoolP224t1","brainpoolP224t1",NID_brainpoolP224t1,9,
	&(lvalues[6054]),0},
{"brainpoolP256r1","brainpoolP256r1",NID_brainpoolP256r1,9,
	&(lvalues[6063]),0},
{"brainpoolP256t1","brainpoolP256t1",NID_brainpoolP256t1,9,
	&(lvalues[6072]),0},
{"brainpoolP320r1","brainpoolP320r1",NID_brainpoolP320r1,9,
	&(lvalues[6081]),0},
{"brainpoolP320t1","brainpoolP320t1",NID_brainpoolP320t1,9,
	&(lvalues[6090]),0},
{"brainpoolP384r1","brainpoolP384r1",NID_brainpoolP384r1,9,
	&(lvalues[6099]),0},
{"brainpoolP384t1","brainpoolP384t1",NID_brainpoolP384t1,9,
	&(lvalues[6108]),0},
{"brainpoolP512r1","brainpoolP512r1",NID_brainpoolP512r1,9,
	&(lvalues[6117]),0},
{"brainpoolP512t1","brainpoolP512t1",NID_brainpoolP512t1,9,
	&(lvalues[6126]),0},
{"FRP256v1","FRP256v1",NID_FRP256v1,10,&(lvalues[6135]),0},
{"ChaCha","chacha",NID_chacha20,0,NULL,0},
{"gost89-ecb","gost89-ecb",NID_gost89_ecb,0,NULL,0},
{"gost89-cbc","gost89-cbc",NID_gost89_cbc,0,NULL,0},
{"tc26","tc26",NID_tc26,5,&(lvalues[6145]),0},
{"streebog256","GOST R 34.11-2012 (256 bit)",
	NID_id_tc26_gost3411_2012_256,8,&(lvalues[6150]),0},
{"streebog512","GOST R 34-11-2012 (512 bit)",
	NID_id_tc26_gost3411_2012_512,8,&(lvalues[6158]),0},
{"id-tc26-gost-3410-2012-512-paramSetA",
	"id-tc26-gost-3410-2012-512-paramSetA",
	NID_id_tc26_gost_3410_2012_512_paramSetA,9,&(lvalues[6166]),0},
{"id-tc26-gost-3410-2012-512-paramSetB",
	"id-tc26-gost-3410-2012-512-paramSetB",
	NID_id_tc26_gost_3410_2012_512_paramSetB,9,&(lvalues[6175]),0},
{"id-tc26-gost-28147-param-Z","id-tc26-gost-28147-param-Z",
	NID_id_tc26_gost_28147_param_Z,9,&(lvalues[6184]),0},
{"id-tc26-gost3410-2012-256","GOST R 34.10-2012 (256 bit)",
	NID_id_tc26_gost3410_2012_256,8,&(lvalues[6193]),0},
{"id-tc26-gost3410-2012-512","GOST R 34.10-2012 (512 bit)",
	NID_id_tc26_gost3410_2012_512,8,&(lvalues[6201]),0},
{"id-tc26-signwithdigest-gost3410-2012-256",
	"GOST R 34.11-2012 with GOST R 34.10-2012 (256 bit)",
	NID_id_tc26_signwithdigest_gost3410_2012_256,8,&(lvalues[6209]),0},
{"id-tc26-signwithdigest-gost3410-2012-512",
	"GOST R 34.11-2012 with GOST R 34.10-2012 (512 bit)",
	NID_id_tc26_signwithdigest_gost3410_2012_512,8,&(lvalues[6217]),0},
};

static const unsigned int sn_objs[NUM_SN]={
416,	/* "AD_DVCS" */
574,	/* "AES-128-CBC" */
911,	/* "AES-128-CBC-HMAC-SHA1" */
576,	/* "AES-128-CFB" */
597,	/* "AES-128-CFB1" */
600,	/* "AES-128-CFB8" */
603,	/* "AES-128-CTR" */
573,	/* "AES-128-ECB" */
575,	/* "AES-128-OFB" */
606,	/* "AES-128-XTS" */
582,	/* "AES-192-CBC" */
912,	/* "AES-192-CBC-HMAC-SHA1" */
584,	/* "AES-192-CFB" */
598,	/* "AES-192-CFB1" */
601,	/* "AES-192-CFB8" */
604,	/* "AES-192-CTR" */
581,	/* "AES-192-ECB" */
583,	/* "AES-192-OFB" */
590,	/* "AES-256-CBC" */
913,	/* "AES-256-CBC-HMAC-SHA1" */
592,	/* "AES-256-CFB" */
599,	/* "AES-256-CFB1" */
602,	/* "AES-256-CFB8" */
605,	/* "AES-256-CTR" */
589,	/* "AES-256-ECB" */
591,	/* "AES-256-OFB" */
607,	/* "AES-256-XTS" */
282,	/* "BF-CBC" */
284,	/* "BF-CFB" */
283,	/* "BF-ECB" */
285,	/* "BF-OFB" */
459,	/* "C" */
882,	/* "CAMELLIA-128-CBC" */
890,	/* "CAMELLIA-128-CFB" */
897,	/* "CAMELLIA-128-CFB1" */
900,	/* "CAMELLIA-128-CFB8" */
888,	/* "CAMELLIA-128-ECB" */
889,	/* "CAMELLIA-128-OFB" */
883,	/* "CAMELLIA-192-CBC" */
893,	/* "CAMELLIA-192-CFB" */
898,	/* "CAMELLIA-192-CFB1" */
901,	/* "CAMELLIA-192-CFB8" */
891,	/* "CAMELLIA-192-ECB" */
892,	/* "CAMELLIA-192-OFB" */
884,	/* "CAMELLIA-256-CBC" */
896,	/* "CAMELLIA-256-CFB" */
899,	/* "CAMELLIA-256-CFB1" */
902,	/* "CAMELLIA-256-CFB8" */
894,	/* "CAMELLIA-256-ECB" */
895,	/* "CAMELLIA-256-OFB" */
103,	/* "CAST5-CBC" */
105,	/* "CAST5-CFB" */
104,	/* "CAST5-ECB" */
106,	/* "CAST5-OFB" */
909,	/* "CMAC" */
456,	/* "CN" */
523,	/* "CRLReason" */
230,	/* "CSPName" */
931,	/* "ChaCha" */
420,	/* "CrlID" */
670,	/* "DC" */
432,	/* "DES-CBC" */
827,	/* "DES-CDMF" */
434,	/* "DES-CFB" */
608,	/* "DES-CFB1" */
609,	/* "DES-CFB8" */
431,	/* "DES-ECB" */
439,	/* "DES-EDE" */
441,	/* "DES-EDE-CBC" */
442,	/* "DES-EDE-CFB" */
444,	/* "DES-EDE-OFB" */
440,	/* "DES-EDE3" */
265,	/* "DES-EDE3-CBC" */
443,	/* "DES-EDE3-CFB" */
610,	/* "DES-EDE3-CFB1" */
611,	/* "DES-EDE3-CFB8" */
445,	/* "DES-EDE3-OFB" */
433,	/* "DES-OFB" */
446,	/* "DESX-CBC" */
555,	/* "DOD" */
17,	/* "DSA" */
437,	/* "DSA-SHA" */
18,	/* "DSA-SHA1" */
449,	/* "DSA-SHA1-old" */
436,	/* "DSA-old" */
342,	/* "DVCS" */
930,	/* "FRP256v1" */
495,	/* "GN" */
908,	/* "HMAC" */
 6,	/* "HMAC-MD5" */
 7,	/* "HMAC-SHA1" */
556,	/* "IANA" */
278,	/* "IDEA-CBC" */
280,	/* "IDEA-CFB" */
279,	/* "IDEA-ECB" */
281,	/* "IDEA-OFB" */
 2,	/* "ISO" */
14,	/* "ISO-US" */
 1,	/* "ITU-T" */
 3,	/* "JOINT-ISO-ITU-T" */
903,	/* "KISA" */
460,	/* "L" */
231,	/* "LocalKeySet" */
247,	/* "MD2" */
248,	/* "MD4" */
249,	/* "MD5" */
250,	/* "MD5-SHA1" */
513,	/* "MDC2" */
119,	/* "MGF1" */
563,	/* "Mail" */
541,	/* "Netscape" */
419,	/* "Nonce" */
463,	/* "O" */
413,	/* "OCSP" */
341,	/* "OCSPSigning" */
554,	/* "ORG" */
464,	/* "OU" */
829,	/* "Oakley-EC2N-3" */
830,	/* "Oakley-EC2N-4" */
128,	/* "PBE-MD2-DES" */
130,	/* "PBE-MD2-RC2-64" */
129,	/* "PBE-MD5-DES" */
131,	/* "PBE-MD5-RC2-64" */
238,	/* "PBE-SHA1-2DES" */
237,	/* "PBE-SHA1-3DES" */
132,	/* "PBE-SHA1-DES" */
239,	/* "PBE-SHA1-RC2-128" */
240,	/* "PBE-SHA1-RC2-40" */
133,	/* "PBE-SHA1-RC2-64" */
235,	/* "PBE-SHA1-RC4-128" */
236,	/* "PBE-SHA1-RC4-40" */
135,	/* "PBES2" */
134,	/* "PBKDF2" */
136,	/* "PBMAC1" */
286,	/* "PKIX" */
261,	/* "RC2-40-CBC" */
262,	/* "RC2-64-CBC" */
257,	/* "RC2-CBC" */
259,	/* "RC2-CFB" */
258,	/* "RC2-ECB" */
260,	/* "RC2-OFB" */
263,	/* "RC4" */
264,	/* "RC4-40" */
910,	/* "RC4-HMAC-MD5" */
266,	/* "RC5-CBC" */
268,	/* "RC5-CFB" */
267,	/* "RC5-ECB" */
269,	/* "RC5-OFB" */
451,	/* "RIPEMD160" */
571,	/* "RLE" */
511,	/* "RSA" */
114,	/* "RSA-MD2" */
115,	/* "RSA-MD4" */
116,	/* "RSA-MD5" */
512,	/* "RSA-MDC2" */
430,	/* "RSA-NP-MD5" */
452,	/* "RSA-RIPEMD160" */
438,	/* "RSA-SHA" */
117,	/* "RSA-SHA1" */
450,	/* "RSA-SHA1-2" */
124,	/* "RSA-SHA224" */
121,	/* "RSA-SHA256" */
122,	/* "RSA-SHA384" */
123,	/* "RSA-SHA512" */
118,	/* "RSAES-OAEP" */
120,	/* "RSASSA-PSS" */
905,	/* "SEED-CBC" */
906,	/* "SEED-CFB" */
904,	/* "SEED-ECB" */
907,	/* "SEED-OFB" */
447,	/* "SHA" */
448,	/* "SHA1" */
618,	/* "SHA224" */
615,	/* "SHA256" */
616,	/* "SHA384" */
617,	/* "SHA512" */
156,	/* "SMIME" */
155,	/* "SMIME-CAPS" */
457,	/* "SN" */
612,	/* "SPECK-128-CBC" */
613,	/* "SPECK-192-CBC" */
614,	/* "SPECK-256-CBC" */
461,	/* "ST" */
453,	/* "SXNetID" */
650,	/* "UID" */
 0,	/* "UNDEF" */
454,	/* "X500" */
510,	/* "X500algorithms" */
455,	/* "X509" */
15,	/* "X9-57" */
16,	/* "X9cm" */
572,	/* "ZLIB" */
671,	/* "aRecord" */
323,	/* "aaControls" */
321,	/* "ac-auditEntity" */
327,	/* "ac-proxying" */
322,	/* "ac-targeting" */
421,	/* "acceptableResponses" */
637,	/* "account" */
415,	/* "ad_timestamping" */
429,	/* "algorithm" */
19,	/* "ansi-X9-62" */
540,	/* "anyExtendedKeyUsage" */
531,	/* "anyPolicy" */
423,	/* "archiveCutoff" */
677,	/* "associatedDomain" */
678,	/* "associatedName" */
694,	/* "audio" */
318,	/* "authorityInfoAccess" */
533,	/* "authorityKeyIdentifier" */
491,	/* "authorityRevocationList" */
521,	/* "basicConstraints" */
418,	/* "basicOCSPResponse" */
319,	/* "biometricInfo" */
915,	/* "brainpool" */
916,	/* "brainpoolP160r1" */
917,	/* "brainpoolP160t1" */
918,	/* "brainpoolP192r1" */
919,	/* "brainpoolP192t1" */
920,	/* "brainpoolP224r1" */
921,	/* "brainpoolP224t1" */
922,	/* "brainpoolP256r1" */
923,	/* "brainpoolP256t1" */
924,	/* "brainpoolP320r1" */
925,	/* "brainpoolP320t1" */
926,	/* "brainpoolP384r1" */
927,	/* "brainpoolP384t1" */
928,	/* "brainpoolP512r1" */
929,	/* "brainpoolP512t1" */
687,	/* "buildingName" */
468,	/* "businessCategory" */
34,	/* "c2onb191v4" */
35,	/* "c2onb191v5" */
40,	/* "c2onb239v4" */
41,	/* "c2onb239v5" */
27,	/* "c2pnb163v1" */
28,	/* "c2pnb163v2" */
29,	/* "c2pnb163v3" */
30,	/* "c2pnb176v1" */
36,	/* "c2pnb208w1" */
42,	/* "c2pnb272w1" */
43,	/* "c2pnb304w1" */
45,	/* "c2pnb368w1" */
31,	/* "c2tnb191v1" */
32,	/* "c2tnb191v2" */
33,	/* "c2tnb191v3" */
37,	/* "c2tnb239v1" */
38,	/* "c2tnb239v2" */
39,	/* "c2tnb239v3" */
44,	/* "c2tnb359v1" */
46,	/* "c2tnb431r1" */
490,	/* "cACertificate" */
676,	/* "cNAMERecord" */
414,	/* "caIssuers" */
417,	/* "caRepository" */
634,	/* "caseIgnoreIA5StringSyntax" */
243,	/* "certBag" */
 8,	/* "certicom-arc" */
527,	/* "certificateIssuer" */
530,	/* "certificatePolicies" */
492,	/* "certificateRevocationList" */
151,	/* "challengePassword" */
21,	/* "characteristic-two-field" */
13,	/* "clearance" */
334,	/* "clientAuth" */
335,	/* "codeSigning" */
147,	/* "contentType" */
150,	/* "countersignature" */
244,	/* "crlBag" */
529,	/* "crlDistributionPoints" */
522,	/* "crlNumber" */
493,	/* "crossCertificatePair" */
833,	/* "cryptocom" */
832,	/* "cryptopro" */
693,	/* "dITRedirect" */
643,	/* "dNSDomain" */
688,	/* "dSAQuality" */
625,	/* "data" */
565,	/* "dcobject" */
525,	/* "deltaCRL" */
506,	/* "deltaRevocationList" */
466,	/* "description" */
480,	/* "destinationIndicator" */
126,	/* "dhKeyAgreement" */
557,	/* "directory" */
502,	/* "distinguishedName" */
507,	/* "dmdName" */
499,	/* "dnQualifier" */
638,	/* "document" */
663,	/* "documentAuthor" */
660,	/* "documentIdentifier" */
664,	/* "documentLocation" */
695,	/* "documentPublisher" */
640,	/* "documentSeries" */
661,	/* "documentTitle" */
662,	/* "documentVersion" */
641,	/* "domain" */
644,	/* "domainRelatedObject" */
619,	/* "dsa_with_SHA224" */
620,	/* "dsa_with_SHA256" */
55,	/* "ecdsa-with-Recommended" */
54,	/* "ecdsa-with-SHA1" */
57,	/* "ecdsa-with-SHA224" */
58,	/* "ecdsa-with-SHA256" */
59,	/* "ecdsa-with-SHA384" */
60,	/* "ecdsa-with-SHA512" */
56,	/* "ecdsa-with-Specified" */
145,	/* "emailAddress" */
336,	/* "emailProtection" */
500,	/* "enhancedSearchGuide" */
564,	/* "enterprises" */
559,	/* "experimental" */
154,	/* "extReq" */
153,	/* "extendedCertificateAttributes" */
535,	/* "extendedKeyUsage" */
425,	/* "extendedStatus" */
476,	/* "facsimileTelephoneNumber" */
654,	/* "favouriteDrink" */
536,	/* "freshestCRL" */
645,	/* "friendlyCountry" */
683,	/* "friendlyCountryName" */
228,	/* "friendlyName" */
497,	/* "generationQualifier" */
842,	/* "gost-mac" */
838,	/* "gost2001" */
878,	/* "gost2001cc" */
840,	/* "gost89" */
933,	/* "gost89-cbc" */
841,	/* "gost89-cnt" */
932,	/* "gost89-ecb" */
839,	/* "gost94" */
877,	/* "gost94cc" */
251,	/* "hmacWithMD5" */
252,	/* "hmacWithSHA1" */
253,	/* "hmacWithSHA224" */
254,	/* "hmacWithSHA256" */
255,	/* "hmacWithSHA384" */
256,	/* "hmacWithSHA512" */
623,	/* "holdInstructionCallIssuer" */
621,	/* "holdInstructionCode" */
622,	/* "holdInstructionNone" */
624,	/* "holdInstructionReject" */
679,	/* "homePostalAddress" */
665,	/* "homeTelephoneNumber" */
658,	/* "host" */
504,	/* "houseIdentifier" */
633,	/* "iA5StringSyntax" */
109,	/* "id-DHBasedMac" */
851,	/* "id-Gost28147-89-CryptoPro-A-ParamSet" */
852,	/* "id-Gost28147-89-CryptoPro-B-ParamSet" */
853,	/* "id-Gost28147-89-CryptoPro-C-ParamSet" */
854,	/* "id-Gost28147-89-CryptoPro-D-ParamSet" */
846,	/* "id-Gost28147-89-CryptoPro-KeyMeshing" */
856,	/* "id-Gost28147-89-CryptoPro-Oscar-1-0-ParamSet" */
855,	/* "id-Gost28147-89-CryptoPro-Oscar-1-1-ParamSet" */
857,	/* "id-Gost28147-89-CryptoPro-RIC-1-ParamSet" */
847,	/* "id-Gost28147-89-None-KeyMeshing" */
850,	/* "id-Gost28147-89-TestParamSet" */
876,	/* "id-Gost28147-89-cc" */
867,	/* "id-GostR3410-2001-CryptoPro-A-ParamSet" */
868,	/* "id-GostR3410-2001-CryptoPro-B-ParamSet" */
869,	/* "id-GostR3410-2001-CryptoPro-C-ParamSet" */
870,	/* "id-GostR3410-2001-CryptoPro-XchA-ParamSet" */
871,	/* "id-GostR3410-2001-CryptoPro-XchB-ParamSet" */
881,	/* "id-GostR3410-2001-ParamSet-cc" */
866,	/* "id-GostR3410-2001-TestParamSet" */
844,	/* "id-GostR3410-2001DH" */
859,	/* "id-GostR3410-94-CryptoPro-A-ParamSet" */
860,	/* "id-GostR3410-94-CryptoPro-B-ParamSet" */
861,	/* "id-GostR3410-94-CryptoPro-C-ParamSet" */
862,	/* "id-GostR3410-94-CryptoPro-D-ParamSet" */
863,	/* "id-GostR3410-94-CryptoPro-XchA-ParamSet" */
864,	/* "id-GostR3410-94-CryptoPro-XchB-ParamSet" */
865,	/* "id-GostR3410-94-CryptoPro-XchC-ParamSet" */
858,	/* "id-GostR3410-94-TestParamSet" */
872,	/* "id-GostR3410-94-a" */
873,	/* "id-GostR3410-94-aBis" */
874,	/* "id-GostR3410-94-b" */
875,	/* "id-GostR3410-94-bBis" */
845,	/* "id-GostR3410-94DH" */
849,	/* "id-GostR3411-94-CryptoProParamSet" */
848,	/* "id-GostR3411-94-TestParamSet" */
834,	/* "id-GostR3411-94-with-GostR3410-2001" */
880,	/* "id-GostR3411-94-with-GostR3410-2001-cc" */
835,	/* "id-GostR3411-94-with-GostR3410-94" */
879,	/* "id-GostR3411-94-with-GostR3410-94-cc" */
837,	/* "id-HMACGostR3411-94" */
108,	/* "id-PasswordBasedMAC" */
297,	/* "id-aca" */
401,	/* "id-aca-accessIdentity" */
400,	/* "id-aca-authenticationInfo" */
402,	/* "id-aca-chargingIdentity" */
405,	/* "id-aca-encAttrs" */
403,	/* "id-aca-group" */
404,	/* "id-aca-role" */
301,	/* "id-ad" */
579,	/* "id-aes128-CCM" */
578,	/* "id-aes128-GCM" */
577,	/* "id-aes128-wrap" */
580,	/* "id-aes128-wrap-pad" */
587,	/* "id-aes192-CCM" */
586,	/* "id-aes192-GCM" */
585,	/* "id-aes192-wrap" */
588,	/* "id-aes192-wrap-pad" */
595,	/* "id-aes256-CCM" */
594,	/* "id-aes256-GCM" */
593,	/* "id-aes256-wrap" */
596,	/* "id-aes256-wrap-pad" */
293,	/* "id-alg" */
218,	/* "id-alg-PWRI-KEK" */
369,	/* "id-alg-des40" */
372,	/* "id-alg-dh-pop" */
371,	/* "id-alg-dh-sig-hmac-sha1" */
370,	/* "id-alg-noSignature" */
885,	/* "id-camellia128-wrap" */
886,	/* "id-camellia192-wrap" */
887,	/* "id-camellia256-wrap" */
299,	/* "id-cct" */
408,	/* "id-cct-PKIData" */
409,	/* "id-cct-PKIResponse" */
407,	/* "id-cct-crs" */
514,	/* "id-ce" */
22,	/* "id-characteristic-two-basis" */
294,	/* "id-cmc" */
380,	/* "id-cmc-addExtensions" */
392,	/* "id-cmc-confirmCertAcceptance" */
376,	/* "id-cmc-dataReturn" */
382,	/* "id-cmc-decryptedPOP" */
381,	/* "id-cmc-encryptedPOP" */
385,	/* "id-cmc-getCRL" */
384,	/* "id-cmc-getCert" */
374,	/* "id-cmc-identification" */
375,	/* "id-cmc-identityProof" */
383,	/* "id-cmc-lraPOPWitness" */
390,	/* "id-cmc-popLinkRandom" */
391,	/* "id-cmc-popLinkWitness" */
389,	/* "id-cmc-queryPending" */
379,	/* "id-cmc-recipientNonce" */
387,	/* "id-cmc-regInfo" */
388,	/* "id-cmc-responseInfo" */
386,	/* "id-cmc-revokeRequest" */
378,	/* "id-cmc-senderNonce" */
373,	/* "id-cmc-statusInfo" */
377,	/* "id-cmc-transactionId" */
181,	/* "id-ct-asciiTextWithCRLF" */
26,	/* "id-ecPublicKey" */
570,	/* "id-hex-multipart-message" */
569,	/* "id-hex-partial-message" */
291,	/* "id-it" */
347,	/* "id-it-caKeyUpdateInfo" */
343,	/* "id-it-caProtEncCert" */
356,	/* "id-it-confirmWaitTime" */
348,	/* "id-it-currentCRL" */
345,	/* "id-it-encKeyPairTypes" */
355,	/* "id-it-implicitConfirm" */
353,	/* "id-it-keyPairParamRep" */
352,	/* "id-it-keyPairParamReq" */
357,	/* "id-it-origPKIMessage" */
346,	/* "id-it-preferredSymmAlg" */
354,	/* "id-it-revPassphrase" */
344,	/* "id-it-signKeyPairTypes" */
350,	/* "id-it-subscriptionRequest" */
351,	/* "id-it-subscriptionResponse" */
358,	/* "id-it-suppLangTags" */
349,	/* "id-it-unsupportedOIDs" */
290,	/* "id-kp" */
313,	/* "id-mod-attribute-cert" */
307,	/* "id-mod-cmc" */
310,	/* "id-mod-cmp" */
317,	/* "id-mod-cmp2000" */
306,	/* "id-mod-crmf" */
316,	/* "id-mod-dvcs" */
308,	/* "id-mod-kea-profile-88" */
309,	/* "id-mod-kea-profile-93" */
315,	/* "id-mod-ocsp" */
311,	/* "id-mod-qualified-cert-88" */
312,	/* "id-mod-qualified-cert-93" */
314,	/* "id-mod-timestamp-protocol" */
295,	/* "id-on" */
394,	/* "id-on-permanentIdentifier" */
393,	/* "id-on-personalData" */
296,	/* "id-pda" */
398,	/* "id-pda-countryOfCitizenship" */
399,	/* "id-pda-countryOfResidence" */
395,	/* "id-pda-dateOfBirth" */
397,	/* "id-pda-gender" */
396,	/* "id-pda-placeOfBirth" */
288,	/* "id-pe" */
292,	/* "id-pkip" */
287,	/* "id-pkix-mod" */
302,	/* "id-pkix1-explicit-88" */
304,	/* "id-pkix1-explicit-93" */
303,	/* "id-pkix1-implicit-88" */
305,	/* "id-pkix1-implicit-93" */
300,	/* "id-ppl" */
410,	/* "id-ppl-anyLanguage" */
412,	/* "id-ppl-independent" */
411,	/* "id-ppl-inheritAll" */
298,	/* "id-qcs" */
406,	/* "id-qcs-pkixQCSyntax-v1" */
289,	/* "id-qt" */
330,	/* "id-qt-cps" */
331,	/* "id-qt-unotice" */
359,	/* "id-regCtrl" */
362,	/* "id-regCtrl-authenticator" */
365,	/* "id-regCtrl-oldCertID" */
364,	/* "id-regCtrl-pkiArchiveOptions" */
363,	/* "id-regCtrl-pkiPublicationInfo" */
366,	/* "id-regCtrl-protocolEncrKey" */
361,	/* "id-regCtrl-regToken" */
360,	/* "id-regInfo" */
368,	/* "id-regInfo-certReq" */
367,	/* "id-regInfo-utf8Pairs" */
696,	/* "id-set" */
159,	/* "id-smime-aa" */
185,	/* "id-smime-aa-contentHint" */
188,	/* "id-smime-aa-contentIdentifier" */
191,	/* "id-smime-aa-contentReference" */
210,	/* "id-smime-aa-dvcs-dvc" */
187,	/* "id-smime-aa-encapContentType" */
192,	/* "id-smime-aa-encrypKeyPref" */
190,	/* "id-smime-aa-equivalentLabels" */
202,	/* "id-smime-aa-ets-CertificateRefs" */
203,	/* "id-smime-aa-ets-RevocationRefs" */
208,	/* "id-smime-aa-ets-archiveTimeStamp" */
207,	/* "id-smime-aa-ets-certCRLTimestamp" */
204,	/* "id-smime-aa-ets-certValues" */
197,	/* "id-smime-aa-ets-commitmentType" */
201,	/* "id-smime-aa-ets-contentTimestamp" */
206,	/* "id-smime-aa-ets-escTimeStamp" */
200,	/* "id-smime-aa-ets-otherSigCert" */
205,	/* "id-smime-aa-ets-revocationValues" */
196,	/* "id-smime-aa-ets-sigPolicyId" */
199,	/* "id-smime-aa-ets-signerAttr" */
198,	/* "id-smime-aa-ets-signerLocation" */
189,	/* "id-smime-aa-macValue" */
184,	/* "id-smime-aa-mlExpandHistory" */
186,	/* "id-smime-aa-msgSigDigest" */
182,	/* "id-smime-aa-receiptRequest" */
183,	/* "id-smime-aa-securityLabel" */
209,	/* "id-smime-aa-signatureType" */
193,	/* "id-smime-aa-signingCertificate" */
194,	/* "id-smime-aa-smimeEncryptCerts" */
195,	/* "id-smime-aa-timeStampToken" */
160,	/* "id-smime-alg" */
213,	/* "id-smime-alg-3DESwrap" */
216,	/* "id-smime-alg-CMS3DESwrap" */
217,	/* "id-smime-alg-CMSRC2wrap" */
215,	/* "id-smime-alg-ESDH" */
211,	/* "id-smime-alg-ESDHwith3DES" */
212,	/* "id-smime-alg-ESDHwithRC2" */
214,	/* "id-smime-alg-RC2wrap" */
161,	/* "id-smime-cd" */
219,	/* "id-smime-cd-ldap" */
158,	/* "id-smime-ct" */
178,	/* "id-smime-ct-DVCSRequestData" */
179,	/* "id-smime-ct-DVCSResponseData" */
176,	/* "id-smime-ct-TDTInfo" */
175,	/* "id-smime-ct-TSTInfo" */
173,	/* "id-smime-ct-authData" */
180,	/* "id-smime-ct-compressedData" */
177,	/* "id-smime-ct-contentInfo" */
174,	/* "id-smime-ct-publishCert" */
172,	/* "id-smime-ct-receipt" */
163,	/* "id-smime-cti" */
226,	/* "id-smime-cti-ets-proofOfApproval" */
227,	/* "id-smime-cti-ets-proofOfCreation" */
224,	/* "id-smime-cti-ets-proofOfDelivery" */
222,	/* "id-smime-cti-ets-proofOfOrigin" */
223,	/* "id-smime-cti-ets-proofOfReceipt" */
225,	/* "id-smime-cti-ets-proofOfSender" */
157,	/* "id-smime-mod" */
164,	/* "id-smime-mod-cms" */
165,	/* "id-smime-mod-ess" */
170,	/* "id-smime-mod-ets-eSigPolicy-88" */
171,	/* "id-smime-mod-ets-eSigPolicy-97" */
168,	/* "id-smime-mod-ets-eSignature-88" */
169,	/* "id-smime-mod-ets-eSignature-97" */
167,	/* "id-smime-mod-msg-v3" */
166,	/* "id-smime-mod-oid" */
162,	/* "id-smime-spq" */
221,	/* "id-smime-spq-ets-sqt-unotice" */
220,	/* "id-smime-spq-ets-sqt-uri" */
939,	/* "id-tc26-gost-28147-param-Z" */
937,	/* "id-tc26-gost-3410-2012-512-paramSetA" */
938,	/* "id-tc26-gost-3410-2012-512-paramSetB" */
940,	/* "id-tc26-gost3410-2012-256" */
941,	/* "id-tc26-gost3410-2012-512" */
942,	/* "id-tc26-signwithdigest-gost3410-2012-256" */
943,	/* "id-tc26-signwithdigest-gost3410-2012-512" */
 5,	/* "identified-organization" */
653,	/* "info" */
537,	/* "inhibitAnyPolicy" */
496,	/* "initials" */
 9,	/* "international-organizations" */
478,	/* "internationaliSDNNumber" */
524,	/* "invalidityDate" */
337,	/* "ipsecEndSystem" */
338,	/* "ipsecTunnel" */
339,	/* "ipsecUser" */
520,	/* "issuerAltName" */
526,	/* "issuingDistributionPoint" */
685,	/* "janetMailbox" */
241,	/* "keyBag" */
517,	/* "keyUsage" */
669,	/* "lastModifiedBy" */
668,	/* "lastModifiedTime" */
229,	/* "localKeyID" */
673,	/* "mXRecord" */
652,	/* "mail" */
686,	/* "mailPreferenceOption" */
659,	/* "manager" */
836,	/* "md_gost94" */
484,	/* "member" */
 4,	/* "member-body" */
148,	/* "messageDigest" */
558,	/* "mgmt" */
566,	/* "mime-mhs" */
568,	/* "mime-mhs-bodies" */
567,	/* "mime-mhs-headings" */
681,	/* "mobileTelephoneNumber" */
273,	/* "msCTLSign" */
272,	/* "msCodeCom" */
271,	/* "msCodeInd" */
275,	/* "msEFS" */
270,	/* "msExtReq" */
274,	/* "msSGC" */
276,	/* "msSmartcardLogin" */
277,	/* "msUPN" */
674,	/* "nSRecord" */
494,	/* "name" */
528,	/* "nameConstraints" */
422,	/* "noCheck" */
539,	/* "noRevAvail" */
545,	/* "nsBaseUrl" */
549,	/* "nsCaPolicyUrl" */
547,	/* "nsCaRevocationUrl" */
542,	/* "nsCertExt" */
552,	/* "nsCertSequence" */
544,	/* "nsCertType" */
551,	/* "nsComment" */
543,	/* "nsDataType" */
548,	/* "nsRenewalUrl" */
546,	/* "nsRevocationUrl" */
553,	/* "nsSGC" */
550,	/* "nsSslServerName" */
23,	/* "onBasis" */
684,	/* "organizationalStatus" */
667,	/* "otherMailbox" */
485,	/* "owner" */
682,	/* "pagerTelephoneNumber" */
427,	/* "path" */
107,	/* "pbeWithMD5AndCast5CBC" */
692,	/* "personalSignature" */
680,	/* "personalTitle" */
656,	/* "photo" */
472,	/* "physicalDeliveryOfficeName" */
628,	/* "pilot" */
630,	/* "pilotAttributeSyntax" */
629,	/* "pilotAttributeType" */
672,	/* "pilotAttributeType27" */
648,	/* "pilotDSA" */
632,	/* "pilotGroups" */
635,	/* "pilotObject" */
631,	/* "pilotObjectClass" */
647,	/* "pilotOrganization" */
636,	/* "pilotPerson" */
111,	/* "pkcs" */
112,	/* "pkcs1" */
125,	/* "pkcs3" */
127,	/* "pkcs5" */
137,	/* "pkcs7" */
138,	/* "pkcs7-data" */
142,	/* "pkcs7-digestData" */
143,	/* "pkcs7-encryptedData" */
140,	/* "pkcs7-envelopedData" */
141,	/* "pkcs7-signedAndEnvelopedData" */
139,	/* "pkcs7-signedData" */
242,	/* "pkcs8ShroudedKeyBag" */
144,	/* "pkcs9" */
534,	/* "policyConstraints" */
532,	/* "policyMappings" */
471,	/* "postOfficeBox" */
469,	/* "postalAddress" */
470,	/* "postalCode" */
25,	/* "ppBasis" */
481,	/* "preferredDeliveryMethod" */
482,	/* "presentationAddress" */
843,	/* "prf-gostr3411-94" */
20,	/* "prime-field" */
47,	/* "prime192v1" */
48,	/* "prime192v2" */
49,	/* "prime192v3" */
50,	/* "prime239v1" */
51,	/* "prime239v2" */
52,	/* "prime239v3" */
53,	/* "prime256v1" */
560,	/* "private" */
518,	/* "privateKeyUsagePeriod" */
501,	/* "protocolInformation" */
329,	/* "proxyCertInfo" */
508,	/* "pseudonym" */
626,	/* "pss" */
320,	/* "qcStatements" */
649,	/* "qualityLabelledData" */
642,	/* "rFC822localPart" */
479,	/* "registeredAddress" */
509,	/* "role" */
486,	/* "roleOccupant" */
639,	/* "room" */
655,	/* "roomNumber" */
113,	/* "rsaEncryption" */
828,	/* "rsaOAEPEncryptionSET" */
435,	/* "rsaSignature" */
110,	/* "rsadsi" */
675,	/* "sOARecord" */
246,	/* "safeContentsBag" */
325,	/* "sbgp-autonomousSysNum" */
324,	/* "sbgp-ipAddrBlock" */
326,	/* "sbgp-routerIdentifier" */
233,	/* "sdsiCertificate" */
467,	/* "searchGuide" */
61,	/* "secp112r1" */
62,	/* "secp112r2" */
63,	/* "secp128r1" */
64,	/* "secp128r2" */
65,	/* "secp160k1" */
66,	/* "secp160r1" */
67,	/* "secp160r2" */
68,	/* "secp192k1" */
69,	/* "secp224k1" */
70,	/* "secp224r1" */
71,	/* "secp256k1" */
72,	/* "secp384r1" */
73,	/* "secp521r1" */
245,	/* "secretBag" */
666,	/* "secretary" */
74,	/* "sect113r1" */
75,	/* "sect113r2" */
76,	/* "sect131r1" */
77,	/* "sect131r2" */
78,	/* "sect163k1" */
79,	/* "sect163r1" */
80,	/* "sect163r2" */
81,	/* "sect193r1" */
82,	/* "sect193r2" */
83,	/* "sect233k1" */
84,	/* "sect233r1" */
85,	/* "sect239k1" */
86,	/* "sect283k1" */
87,	/* "sect283r1" */
88,	/* "sect409k1" */
89,	/* "sect409r1" */
90,	/* "sect571k1" */
91,	/* "sect571r1" */
561,	/* "security" */
487,	/* "seeAlso" */
12,	/* "selected-attribute-types" */
458,	/* "serialNumber" */
333,	/* "serverAuth" */
424,	/* "serviceLocator" */
809,	/* "set-addPolicy" */
699,	/* "set-attr" */
702,	/* "set-brand" */
822,	/* "set-brand-AmericanExpress" */
821,	/* "set-brand-Diners" */
820,	/* "set-brand-IATA-ATA" */
823,	/* "set-brand-JCB" */
825,	/* "set-brand-MasterCard" */
826,	/* "set-brand-Novus" */
824,	/* "set-brand-Visa" */
701,	/* "set-certExt" */
697,	/* "set-ctype" */
698,	/* "set-msgExt" */
700,	/* "set-policy" */
791,	/* "set-policy-root" */
808,	/* "set-rootKeyThumb" */
804,	/* "setAttr-Cert" */
815,	/* "setAttr-GenCryptgrm" */
807,	/* "setAttr-IssCap" */
812,	/* "setAttr-IssCap-CVM" */
814,	/* "setAttr-IssCap-Sig" */
813,	/* "setAttr-IssCap-T2" */
805,	/* "setAttr-PGWYcap" */
819,	/* "setAttr-SecDevSig" */
816,	/* "setAttr-T2Enc" */
817,	/* "setAttr-T2cleartxt" */
818,	/* "setAttr-TokICCsig" */
811,	/* "setAttr-Token-B0Prime" */
810,	/* "setAttr-Token-EMV" */
806,	/* "setAttr-TokenType" */
803,	/* "setCext-IssuerCapabilities" */
799,	/* "setCext-PGWYcapabilities" */
800,	/* "setCext-TokenIdentifier" */
802,	/* "setCext-TokenType" */
801,	/* "setCext-Track2Data" */
795,	/* "setCext-cCertRequired" */
793,	/* "setCext-certType" */
792,	/* "setCext-hashedRoot" */
794,	/* "setCext-merchData" */
797,	/* "setCext-setExt" */
798,	/* "setCext-setQualf" */
796,	/* "setCext-tunneling" */
724,	/* "setct-AcqCardCodeMsg" */
760,	/* "setct-AcqCardCodeMsgTBE" */
754,	/* "setct-AuthReqTBE" */
718,	/* "setct-AuthReqTBS" */
711,	/* "setct-AuthResBaggage" */
755,	/* "setct-AuthResTBE" */
756,	/* "setct-AuthResTBEX" */
719,	/* "setct-AuthResTBS" */
720,	/* "setct-AuthResTBSX" */
712,	/* "setct-AuthRevReqBaggage" */
761,	/* "setct-AuthRevReqTBE" */
725,	/* "setct-AuthRevReqTBS" */
713,	/* "setct-AuthRevResBaggage" */
726,	/* "setct-AuthRevResData" */
762,	/* "setct-AuthRevResTBE" */
763,	/* "setct-AuthRevResTBEB" */
727,	/* "setct-AuthRevResTBS" */
757,	/* "setct-AuthTokenTBE" */
721,	/* "setct-AuthTokenTBS" */
784,	/* "setct-BCIDistributionTBS" */
742,	/* "setct-BatchAdminReqData" */
776,	/* "setct-BatchAdminReqTBE" */
743,	/* "setct-BatchAdminResData" */
777,	/* "setct-BatchAdminResTBE" */
783,	/* "setct-CRLNotificationResTBS" */
782,	/* "setct-CRLNotificationTBS" */
764,	/* "setct-CapReqTBE" */
765,	/* "setct-CapReqTBEX" */
728,	/* "setct-CapReqTBS" */
729,	/* "setct-CapReqTBSX" */
730,	/* "setct-CapResData" */
766,	/* "setct-CapResTBE" */
767,	/* "setct-CapRevReqTBE" */
768,	/* "setct-CapRevReqTBEX" */
731,	/* "setct-CapRevReqTBS" */
732,	/* "setct-CapRevReqTBSX" */
733,	/* "setct-CapRevResData" */
769,	/* "setct-CapRevResTBE" */
722,	/* "setct-CapTokenData" */
714,	/* "setct-CapTokenSeq" */
758,	/* "setct-CapTokenTBE" */
759,	/* "setct-CapTokenTBEX" */
723,	/* "setct-CapTokenTBS" */
744,	/* "setct-CardCInitResTBS" */
750,	/* "setct-CertInqReqTBS" */
747,	/* "setct-CertReqData" */
779,	/* "setct-CertReqTBE" */
780,	/* "setct-CertReqTBEX" */
748,	/* "setct-CertReqTBS" */
749,	/* "setct-CertResData" */
781,	/* "setct-CertResTBE" */
770,	/* "setct-CredReqTBE" */
771,	/* "setct-CredReqTBEX" */
734,	/* "setct-CredReqTBS" */
735,	/* "setct-CredReqTBSX" */
736,	/* "setct-CredResData" */
772,	/* "setct-CredResTBE" */
773,	/* "setct-CredRevReqTBE" */
774,	/* "setct-CredRevReqTBEX" */
737,	/* "setct-CredRevReqTBS" */
738,	/* "setct-CredRevReqTBSX" */
739,	/* "setct-CredRevResData" */
775,	/* "setct-CredRevResTBE" */
751,	/* "setct-ErrorTBS" */
710,	/* "setct-HODInput" */
745,	/* "setct-MeAqCInitResTBS" */
706,	/* "setct-OIData" */
703,	/* "setct-PANData" */
705,	/* "setct-PANOnly" */
704,	/* "setct-PANToken" */
740,	/* "setct-PCertReqData" */
741,	/* "setct-PCertResTBS" */
707,	/* "setct-PI" */
716,	/* "setct-PI-TBS" */
708,	/* "setct-PIData" */
709,	/* "setct-PIDataUnsigned" */
752,	/* "setct-PIDualSignedTBE" */
753,	/* "setct-PIUnsignedTBE" */
715,	/* "setct-PInitResData" */
717,	/* "setct-PResData" */
778,	/* "setct-RegFormReqTBE" */
746,	/* "setct-RegFormResTBS" */
790,	/* "setext-cv" */
785,	/* "setext-genCrypt" */
786,	/* "setext-miAuth" */
788,	/* "setext-pinAny" */
787,	/* "setext-pinSecure" */
789,	/* "setext-track2" */
149,	/* "signingTime" */
646,	/* "simpleSecurityObject" */
689,	/* "singleLevelQuality" */
562,	/* "snmpv2" */
935,	/* "streebog256" */
936,	/* "streebog512" */
462,	/* "street" */
519,	/* "subjectAltName" */
515,	/* "subjectDirectoryAttributes" */
328,	/* "subjectInfoAccess" */
516,	/* "subjectKeyIdentifier" */
691,	/* "subtreeMaximumQuality" */
690,	/* "subtreeMinimumQuality" */
505,	/* "supportedAlgorithms" */
483,	/* "supportedApplicationContext" */
538,	/* "targetInformation" */
934,	/* "tc26" */
473,	/* "telephoneNumber" */
475,	/* "teletexTerminalIdentifier" */
914,	/* "teletrust" */
474,	/* "telexNumber" */
651,	/* "textEncodedORAddress" */
332,	/* "textNotice" */
340,	/* "timeStamping" */
465,	/* "title" */
24,	/* "tpBasis" */
428,	/* "trustRoot" */
627,	/* "ucl" */
503,	/* "uniqueMember" */
152,	/* "unstructuredAddress" */
146,	/* "unstructuredName" */
489,	/* "userCertificate" */
657,	/* "userClass" */
488,	/* "userPassword" */
426,	/* "valid" */
10,	/* "wap" */
11,	/* "wap-wsg" */
92,	/* "wap-wsg-idm-ecid-wtls1" */
100,	/* "wap-wsg-idm-ecid-wtls10" */
101,	/* "wap-wsg-idm-ecid-wtls11" */
102,	/* "wap-wsg-idm-ecid-wtls12" */
93,	/* "wap-wsg-idm-ecid-wtls3" */
94,	/* "wap-wsg-idm-ecid-wtls4" */
95,	/* "wap-wsg-idm-ecid-wtls5" */
96,	/* "wap-wsg-idm-ecid-wtls6" */
97,	/* "wap-wsg-idm-ecid-wtls7" */
98,	/* "wap-wsg-idm-ecid-wtls8" */
99,	/* "wap-wsg-idm-ecid-wtls9" */
831,	/* "whirlpool" */
477,	/* "x121Address" */
498,	/* "x500UniqueIdentifier" */
232,	/* "x509Certificate" */
234,	/* "x509Crl" */
};

static const unsigned int ln_objs[NUM_LN]={
415,	/* "AD Time Stamping" */
19,	/* "ANSI X9.62" */
421,	/* "Acceptable OCSP Responses" */
540,	/* "Any Extended Key Usage" */
410,	/* "Any language" */
318,	/* "Authority Information Access" */
418,	/* "Basic OCSP Response" */
319,	/* "Biometric Info" */
414,	/* "CA Issuers" */
417,	/* "CA Repository" */
335,	/* "Code Signing" */
109,	/* "Diffie-Hellman based MAC" */
557,	/* "Directory" */
641,	/* "Domain" */
336,	/* "E-mail Protection" */
564,	/* "Enterprises" */
559,	/* "Experimental" */
425,	/* "Extended OCSP Status" */
154,	/* "Extension Request" */
930,	/* "FRP256v1" */
840,	/* "GOST 28147-89" */
876,	/* "GOST 28147-89 Cryptocom ParamSet" */
842,	/* "GOST 28147-89 MAC" */
878,	/* "GOST 34.10-2001 Cryptocom" */
877,	/* "GOST 34.10-94 Cryptocom" */
936,	/* "GOST R 34-11-2012 (512 bit)" */
838,	/* "GOST R 34.10-2001" */
844,	/* "GOST R 34.10-2001 DH" */
940,	/* "GOST R 34.10-2012 (256 bit)" */
941,	/* "GOST R 34.10-2012 (512 bit)" */
839,	/* "GOST R 34.10-94" */
845,	/* "GOST R 34.10-94 DH" */
935,	/* "GOST R 34.11-2012 (256 bit)" */
942,	/* "GOST R 34.11-2012 with GOST R 34.10-2012 (256 bit)" */
943,	/* "GOST R 34.11-2012 with GOST R 34.10-2012 (512 bit)" */
836,	/* "GOST R 34.11-94" */
843,	/* "GOST R 34.11-94 PRF" */
834,	/* "GOST R 34.11-94 with GOST R 34.10-2001" */
880,	/* "GOST R 34.11-94 with GOST R 34.10-2001 Cryptocom" */
835,	/* "GOST R 34.11-94 with GOST R 34.10-94" */
879,	/* "GOST R 34.11-94 with GOST R 34.10-94 Cryptocom" */
881,	/* "GOST R 3410-2001 Parameter Set Cryptocom" */
837,	/* "HMAC GOST 34.11-94" */
623,	/* "Hold Instruction Call Issuer" */
621,	/* "Hold Instruction Code" */
622,	/* "Hold Instruction None" */
624,	/* "Hold Instruction Reject" */
818,	/* "ICC or token signature" */
337,	/* "IPSec End System" */
338,	/* "IPSec Tunnel" */
339,	/* "IPSec User" */
 4,	/* "ISO Member Body" */
14,	/* "ISO US Member Body" */
412,	/* "Independent" */
411,	/* "Inherit all" */
 9,	/* "International Organizations" */
524,	/* "Invalidity Date" */
566,	/* "MIME MHS" */
563,	/* "Mail" */
558,	/* "Management" */
230,	/* "Microsoft CSP Name" */
272,	/* "Microsoft Commercial Code Signing" */
275,	/* "Microsoft Encrypted File System" */
270,	/* "Microsoft Extension Request" */
271,	/* "Microsoft Individual Code Signing" */
231,	/* "Microsoft Local Key set" */
274,	/* "Microsoft Server Gated Crypto" */
276,	/* "Microsoft Smartcardlogin" */
273,	/* "Microsoft Trust List Signing" */
277,	/* "Microsoft Universal Principal Name" */
545,	/* "Netscape Base Url" */
549,	/* "Netscape CA Policy Url" */
547,	/* "Netscape CA Revocation Url" */
544,	/* "Netscape Cert Type" */
542,	/* "Netscape Certificate Extension" */
552,	/* "Netscape Certificate Sequence" */
551,	/* "Netscape Comment" */
541,	/* "Netscape Communications Corp." */
543,	/* "Netscape Data Type" */
548,	/* "Netscape Renewal Url" */
546,	/* "Netscape Revocation Url" */
550,	/* "Netscape SSL Server Name" */
553,	/* "Netscape Server Gated Crypto" */
413,	/* "OCSP" */
423,	/* "OCSP Archive Cutoff" */
420,	/* "OCSP CRL ID" */
422,	/* "OCSP No Check" */
419,	/* "OCSP Nonce" */
424,	/* "OCSP Service Locator" */
341,	/* "OCSP Signing" */
135,	/* "PBES2" */
134,	/* "PBKDF2" */
136,	/* "PBMAC1" */
286,	/* "PKIX" */
394,	/* "Permanent Identifier" */
330,	/* "Policy Qualifier CPS" */
331,	/* "Policy Qualifier User Notice" */
560,	/* "Private" */
329,	/* "Proxy Certificate Information" */
110,	/* "RSA Data Security, Inc." */
111,	/* "RSA Data Security, Inc. PKCS" */
156,	/* "S/MIME" */
155,	/* "S/MIME Capabilities" */
562,	/* "SNMPv2" */
696,	/* "Secure Electronic Transactions" */
561,	/* "Security" */
12,	/* "Selected Attribute Types" */
453,	/* "Strong Extranet ID" */
328,	/* "Subject Information Access" */
334,	/* "TLS Web Client Authentication" */
333,	/* "TLS Web Server Authentication" */
340,	/* "Time Stamping" */
428,	/* "Trust Root" */
455,	/* "X509" */
538,	/* "X509v3 AC Targeting" */
531,	/* "X509v3 Any Policy" */
533,	/* "X509v3 Authority Key Identifier" */
521,	/* "X509v3 Basic Constraints" */
529,	/* "X509v3 CRL Distribution Points" */
522,	/* "X509v3 CRL Number" */
523,	/* "X509v3 CRL Reason Code" */
527,	/* "X509v3 Certificate Issuer" */
530,	/* "X509v3 Certificate Policies" */
525,	/* "X509v3 Delta CRL Indicator" */
535,	/* "X509v3 Extended Key Usage" */
536,	/* "X509v3 Freshest CRL" */
537,	/* "X509v3 Inhibit Any Policy" */
520,	/* "X509v3 Issuer Alternative Name" */
526,	/* "X509v3 Issuing Distrubution Point" */
517,	/* "X509v3 Key Usage" */
528,	/* "X509v3 Name Constraints" */
539,	/* "X509v3 No Revocation Available" */
534,	/* "X509v3 Policy Constraints" */
532,	/* "X509v3 Policy Mappings" */
518,	/* "X509v3 Private Key Usage Period" */
519,	/* "X509v3 Subject Alternative Name" */
515,	/* "X509v3 Subject Directory Attributes" */
516,	/* "X509v3 Subject Key Identifier" */
15,	/* "X9.57" */
16,	/* "X9.57 CM ?" */
671,	/* "aRecord" */
323,	/* "aaControls" */
321,	/* "ac-auditEntity" */
327,	/* "ac-proxying" */
322,	/* "ac-targeting" */
637,	/* "account" */
416,	/* "ad dvcs" */
790,	/* "additional verification" */
574,	/* "aes-128-cbc" */
911,	/* "aes-128-cbc-hmac-sha1" */
579,	/* "aes-128-ccm" */
576,	/* "aes-128-cfb" */
597,	/* "aes-128-cfb1" */
600,	/* "aes-128-cfb8" */
603,	/* "aes-128-ctr" */
573,	/* "aes-128-ecb" */
578,	/* "aes-128-gcm" */
575,	/* "aes-128-ofb" */
606,	/* "aes-128-xts" */
582,	/* "aes-192-cbc" */
912,	/* "aes-192-cbc-hmac-sha1" */
587,	/* "aes-192-ccm" */
584,	/* "aes-192-cfb" */
598,	/* "aes-192-cfb1" */
601,	/* "aes-192-cfb8" */
604,	/* "aes-192-ctr" */
581,	/* "aes-192-ecb" */
586,	/* "aes-192-gcm" */
583,	/* "aes-192-ofb" */
590,	/* "aes-256-cbc" */
913,	/* "aes-256-cbc-hmac-sha1" */
595,	/* "aes-256-ccm" */
592,	/* "aes-256-cfb" */
599,	/* "aes-256-cfb1" */
602,	/* "aes-256-cfb8" */
605,	/* "aes-256-ctr" */
589,	/* "aes-256-ecb" */
594,	/* "aes-256-gcm" */
591,	/* "aes-256-ofb" */
607,	/* "aes-256-xts" */
429,	/* "algorithm" */
677,	/* "associatedDomain" */
678,	/* "associatedName" */
694,	/* "audio" */
491,	/* "authorityRevocationList" */
282,	/* "bf-cbc" */
284,	/* "bf-cfb" */
283,	/* "bf-ecb" */
285,	/* "bf-ofb" */
915,	/* "brainpool" */
916,	/* "brainpoolP160r1" */
917,	/* "brainpoolP160t1" */
918,	/* "brainpoolP192r1" */
919,	/* "brainpoolP192t1" */
920,	/* "brainpoolP224r1" */
921,	/* "brainpoolP224t1" */
922,	/* "brainpoolP256r1" */
923,	/* "brainpoolP256t1" */
924,	/* "brainpoolP320r1" */
925,	/* "brainpoolP320t1" */
926,	/* "brainpoolP384r1" */
927,	/* "brainpoolP384t1" */
928,	/* "brainpoolP512r1" */
929,	/* "brainpoolP512t1" */
687,	/* "buildingName" */
468,	/* "businessCategory" */
34,	/* "c2onb191v4" */
35,	/* "c2onb191v5" */
40,	/* "c2onb239v4" */
41,	/* "c2onb239v5" */
27,	/* "c2pnb163v1" */
28,	/* "c2pnb163v2" */
29,	/* "c2pnb163v3" */
30,	/* "c2pnb176v1" */
36,	/* "c2pnb208w1" */
42,	/* "c2pnb272w1" */
43,	/* "c2pnb304w1" */
45,	/* "c2pnb368w1" */
31,	/* "c2tnb191v1" */
32,	/* "c2tnb191v2" */
33,	/* "c2tnb191v3" */
37,	/* "c2tnb239v1" */
38,	/* "c2tnb239v2" */
39,	/* "c2tnb239v3" */
44,	/* "c2tnb359v1" */
46,	/* "c2tnb431r1" */
490,	/* "cACertificate" */
676,	/* "cNAMERecord" */
882,	/* "camellia-128-cbc" */
890,	/* "camellia-128-cfb" */
897,	/* "camellia-128-cfb1" */
900,	/* "camellia-128-cfb8" */
888,	/* "camellia-128-ecb" */
889,	/* "camellia-128-ofb" */
883,	/* "camellia-192-cbc" */
893,	/* "camellia-192-cfb" */
898,	/* "camellia-192-cfb1" */
901,	/* "camellia-192-cfb8" */
891,	/* "camellia-192-ecb" */
892,	/* "camellia-192-ofb" */
884,	/* "camellia-256-cbc" */
896,	/* "camellia-256-cfb" */
899,	/* "camellia-256-cfb1" */
902,	/* "camellia-256-cfb8" */
894,	/* "camellia-256-ecb" */
895,	/* "camellia-256-ofb" */
634,	/* "caseIgnoreIA5StringSyntax" */
103,	/* "cast5-cbc" */
105,	/* "cast5-cfb" */
104,	/* "cast5-ecb" */
106,	/* "cast5-ofb" */
243,	/* "certBag" */
 8,	/* "certicom-arc" */
701,	/* "certificate extensions" */
492,	/* "certificateRevocationList" */
931,	/* "chacha" */
151,	/* "challengePassword" */
21,	/* "characteristic-two-field" */
13,	/* "clearance" */
817,	/* "cleartext track 2" */
909,	/* "cmac" */
456,	/* "commonName" */
697,	/* "content types" */
147,	/* "contentType" */
150,	/* "countersignature" */
459,	/* "countryName" */
244,	/* "crlBag" */
493,	/* "crossCertificatePair" */
833,	/* "cryptocom" */
832,	/* "cryptopro" */
693,	/* "dITRedirect" */
643,	/* "dNSDomain" */
688,	/* "dSAQuality" */
625,	/* "data" */
565,	/* "dcObject" */
506,	/* "deltaRevocationList" */
432,	/* "des-cbc" */
827,	/* "des-cdmf" */
434,	/* "des-cfb" */
608,	/* "des-cfb1" */
609,	/* "des-cfb8" */
431,	/* "des-ecb" */
439,	/* "des-ede" */
441,	/* "des-ede-cbc" */
442,	/* "des-ede-cfb" */
444,	/* "des-ede-ofb" */
440,	/* "des-ede3" */
265,	/* "des-ede3-cbc" */
443,	/* "des-ede3-cfb" */
610,	/* "des-ede3-cfb1" */
611,	/* "des-ede3-cfb8" */
445,	/* "des-ede3-ofb" */
433,	/* "des-ofb" */
466,	/* "description" */
480,	/* "destinationIndicator" */
446,	/* "desx-cbc" */
126,	/* "dhKeyAgreement" */
454,	/* "directory services (X.500)" */
510,	/* "directory services - algorithms" */
502,	/* "distinguishedName" */
507,	/* "dmdName" */
499,	/* "dnQualifier" */
638,	/* "document" */
663,	/* "documentAuthor" */
660,	/* "documentIdentifier" */
664,	/* "documentLocation" */
695,	/* "documentPublisher" */
640,	/* "documentSeries" */
661,	/* "documentTitle" */
662,	/* "documentVersion" */
555,	/* "dod" */
670,	/* "domainComponent" */
644,	/* "domainRelatedObject" */
17,	/* "dsaEncryption" */
436,	/* "dsaEncryption-old" */
437,	/* "dsaWithSHA" */
18,	/* "dsaWithSHA1" */
449,	/* "dsaWithSHA1-old" */
619,	/* "dsa_with_SHA224" */
620,	/* "dsa_with_SHA256" */
342,	/* "dvcs" */
55,	/* "ecdsa-with-Recommended" */
54,	/* "ecdsa-with-SHA1" */
57,	/* "ecdsa-with-SHA224" */
58,	/* "ecdsa-with-SHA256" */
59,	/* "ecdsa-with-SHA384" */
60,	/* "ecdsa-with-SHA512" */
56,	/* "ecdsa-with-Specified" */
145,	/* "emailAddress" */
816,	/* "encrypted track 2" */
500,	/* "enhancedSearchGuide" */
153,	/* "extendedCertificateAttributes" */
476,	/* "facsimileTelephoneNumber" */
654,	/* "favouriteDrink" */
645,	/* "friendlyCountry" */
683,	/* "friendlyCountryName" */
228,	/* "friendlyName" */
815,	/* "generate cryptogram" */
497,	/* "generationQualifier" */
785,	/* "generic cryptogram" */
495,	/* "givenName" */
933,	/* "gost89-cbc" */
841,	/* "gost89-cnt" */
932,	/* "gost89-ecb" */
908,	/* "hmac" */
 6,	/* "hmac-md5" */
 7,	/* "hmac-sha1" */
251,	/* "hmacWithMD5" */
252,	/* "hmacWithSHA1" */
253,	/* "hmacWithSHA224" */
254,	/* "hmacWithSHA256" */
255,	/* "hmacWithSHA384" */
256,	/* "hmacWithSHA512" */
679,	/* "homePostalAddress" */
665,	/* "homeTelephoneNumber" */
658,	/* "host" */
504,	/* "houseIdentifier" */
633,	/* "iA5StringSyntax" */
556,	/* "iana" */
851,	/* "id-Gost28147-89-CryptoPro-A-ParamSet" */
852,	/* "id-Gost28147-89-CryptoPro-B-ParamSet" */
853,	/* "id-Gost28147-89-CryptoPro-C-ParamSet" */
854,	/* "id-Gost28147-89-CryptoPro-D-ParamSet" */
846,	/* "id-Gost28147-89-CryptoPro-KeyMeshing" */
856,	/* "id-Gost28147-89-CryptoPro-Oscar-1-0-ParamSet" */
855,	/* "id-Gost28147-89-CryptoPro-Oscar-1-1-ParamSet" */
857,	/* "id-Gost28147-89-CryptoPro-RIC-1-ParamSet" */
847,	/* "id-Gost28147-89-None-KeyMeshing" */
850,	/* "id-Gost28147-89-TestParamSet" */
867,	/* "id-GostR3410-2001-CryptoPro-A-ParamSet" */
868,	/* "id-GostR3410-2001-CryptoPro-B-ParamSet" */
869,	/* "id-GostR3410-2001-CryptoPro-C-ParamSet" */
870,	/* "id-GostR3410-2001-CryptoPro-XchA-ParamSet" */
871,	/* "id-GostR3410-2001-CryptoPro-XchB-ParamSet" */
866,	/* "id-GostR3410-2001-TestParamSet" */
859,	/* "id-GostR3410-94-CryptoPro-A-ParamSet" */
860,	/* "id-GostR3410-94-CryptoPro-B-ParamSet" */
861,	/* "id-GostR3410-94-CryptoPro-C-ParamSet" */
862,	/* "id-GostR3410-94-CryptoPro-D-ParamSet" */
863,	/* "id-GostR3410-94-CryptoPro-XchA-ParamSet" */
864,	/* "id-GostR3410-94-CryptoPro-XchB-ParamSet" */
865,	/* "id-GostR3410-94-CryptoPro-XchC-ParamSet" */
858,	/* "id-GostR3410-94-TestParamSet" */
872,	/* "id-GostR3410-94-a" */
873,	/* "id-GostR3410-94-aBis" */
874,	/* "id-GostR3410-94-b" */
875,	/* "id-GostR3410-94-bBis" */
849,	/* "id-GostR3411-94-CryptoProParamSet" */
848,	/* "id-GostR3411-94-TestParamSet" */
297,	/* "id-aca" */
401,	/* "id-aca-accessIdentity" */
400,	/* "id-aca-authenticationInfo" */
402,	/* "id-aca-chargingIdentity" */
405,	/* "id-aca-encAttrs" */
403,	/* "id-aca-group" */
404,	/* "id-aca-role" */
301,	/* "id-ad" */
577,	/* "id-aes128-wrap" */
580,	/* "id-aes128-wrap-pad" */
585,	/* "id-aes192-wrap" */
588,	/* "id-aes192-wrap-pad" */
593,	/* "id-aes256-wrap" */
596,	/* "id-aes256-wrap-pad" */
293,	/* "id-alg" */
218,	/* "id-alg-PWRI-KEK" */
369,	/* "id-alg-des40" */
372,	/* "id-alg-dh-pop" */
371,	/* "id-alg-dh-sig-hmac-sha1" */
370,	/* "id-alg-noSignature" */
885,	/* "id-camellia128-wrap" */
886,	/* "id-camellia192-wrap" */
887,	/* "id-camellia256-wrap" */
299,	/* "id-cct" */
408,	/* "id-cct-PKIData" */
409,	/* "id-cct-PKIResponse" */
407,	/* "id-cct-crs" */
514,	/* "id-ce" */
22,	/* "id-characteristic-two-basis" */
294,	/* "id-cmc" */
380,	/* "id-cmc-addExtensions" */
392,	/* "id-cmc-confirmCertAcceptance" */
376,	/* "id-cmc-dataReturn" */
382,	/* "id-cmc-decryptedPOP" */
381,	/* "id-cmc-encryptedPOP" */
385,	/* "id-cmc-getCRL" */
384,	/* "id-cmc-getCert" */
374,	/* "id-cmc-identification" */
375,	/* "id-cmc-identityProof" */
383,	/* "id-cmc-lraPOPWitness" */
390,	/* "id-cmc-popLinkRandom" */
391,	/* "id-cmc-popLinkWitness" */
389,	/* "id-cmc-queryPending" */
379,	/* "id-cmc-recipientNonce" */
387,	/* "id-cmc-regInfo" */
388,	/* "id-cmc-responseInfo" */
386,	/* "id-cmc-revokeRequest" */
378,	/* "id-cmc-senderNonce" */
373,	/* "id-cmc-statusInfo" */
377,	/* "id-cmc-transactionId" */
181,	/* "id-ct-asciiTextWithCRLF" */
26,	/* "id-ecPublicKey" */
570,	/* "id-hex-multipart-message" */
569,	/* "id-hex-partial-message" */
291,	/* "id-it" */
347,	/* "id-it-caKeyUpdateInfo" */
343,	/* "id-it-caProtEncCert" */
356,	/* "id-it-confirmWaitTime" */
348,	/* "id-it-currentCRL" */
345,	/* "id-it-encKeyPairTypes" */
355,	/* "id-it-implicitConfirm" */
353,	/* "id-it-keyPairParamRep" */
352,	/* "id-it-keyPairParamReq" */
357,	/* "id-it-origPKIMessage" */
346,	/* "id-it-preferredSymmAlg" */
354,	/* "id-it-revPassphrase" */
344,	/* "id-it-signKeyPairTypes" */
350,	/* "id-it-subscriptionRequest" */
351,	/* "id-it-subscriptionResponse" */
358,	/* "id-it-suppLangTags" */
349,	/* "id-it-unsupportedOIDs" */
290,	/* "id-kp" */
313,	/* "id-mod-attribute-cert" */
307,	/* "id-mod-cmc" */
310,	/* "id-mod-cmp" */
317,	/* "id-mod-cmp2000" */
306,	/* "id-mod-crmf" */
316,	/* "id-mod-dvcs" */
308,	/* "id-mod-kea-profile-88" */
309,	/* "id-mod-kea-profile-93" */
315,	/* "id-mod-ocsp" */
311,	/* "id-mod-qualified-cert-88" */
312,	/* "id-mod-qualified-cert-93" */
314,	/* "id-mod-timestamp-protocol" */
295,	/* "id-on" */
393,	/* "id-on-personalData" */
296,	/* "id-pda" */
398,	/* "id-pda-countryOfCitizenship" */
399,	/* "id-pda-countryOfResidence" */
395,	/* "id-pda-dateOfBirth" */
397,	/* "id-pda-gender" */
396,	/* "id-pda-placeOfBirth" */
288,	/* "id-pe" */
292,	/* "id-pkip" */
287,	/* "id-pkix-mod" */
302,	/* "id-pkix1-explicit-88" */
304,	/* "id-pkix1-explicit-93" */
303,	/* "id-pkix1-implicit-88" */
305,	/* "id-pkix1-implicit-93" */
300,	/* "id-ppl" */
298,	/* "id-qcs" */
406,	/* "id-qcs-pkixQCSyntax-v1" */
289,	/* "id-qt" */
359,	/* "id-regCtrl" */
362,	/* "id-regCtrl-authenticator" */
365,	/* "id-regCtrl-oldCertID" */
364,	/* "id-regCtrl-pkiArchiveOptions" */
363,	/* "id-regCtrl-pkiPublicationInfo" */
366,	/* "id-regCtrl-protocolEncrKey" */
361,	/* "id-regCtrl-regToken" */
360,	/* "id-regInfo" */
368,	/* "id-regInfo-certReq" */
367,	/* "id-regInfo-utf8Pairs" */
159,	/* "id-smime-aa" */
185,	/* "id-smime-aa-contentHint" */
188,	/* "id-smime-aa-contentIdentifier" */
191,	/* "id-smime-aa-contentReference" */
210,	/* "id-smime-aa-dvcs-dvc" */
187,	/* "id-smime-aa-encapContentType" */
192,	/* "id-smime-aa-encrypKeyPref" */
190,	/* "id-smime-aa-equivalentLabels" */
202,	/* "id-smime-aa-ets-CertificateRefs" */
203,	/* "id-smime-aa-ets-RevocationRefs" */
208,	/* "id-smime-aa-ets-archiveTimeStamp" */
207,	/* "id-smime-aa-ets-certCRLTimestamp" */
204,	/* "id-smime-aa-ets-certValues" */
197,	/* "id-smime-aa-ets-commitmentType" */
201,	/* "id-smime-aa-ets-contentTimestamp" */
206,	/* "id-smime-aa-ets-escTimeStamp" */
200,	/* "id-smime-aa-ets-otherSigCert" */
205,	/* "id-smime-aa-ets-revocationValues" */
196,	/* "id-smime-aa-ets-sigPolicyId" */
199,	/* "id-smime-aa-ets-signerAttr" */
198,	/* "id-smime-aa-ets-signerLocation" */
189,	/* "id-smime-aa-macValue" */
184,	/* "id-smime-aa-mlExpandHistory" */
186,	/* "id-smime-aa-msgSigDigest" */
182,	/* "id-smime-aa-receiptRequest" */
183,	/* "id-smime-aa-securityLabel" */
209,	/* "id-smime-aa-signatureType" */
193,	/* "id-smime-aa-signingCertificate" */
194,	/* "id-smime-aa-smimeEncryptCerts" */
195,	/* "id-smime-aa-timeStampToken" */
160,	/* "id-smime-alg" */
213,	/* "id-smime-alg-3DESwrap" */
216,	/* "id-smime-alg-CMS3DESwrap" */
217,	/* "id-smime-alg-CMSRC2wrap" */
215,	/* "id-smime-alg-ESDH" */
211,	/* "id-smime-alg-ESDHwith3DES" */
212,	/* "id-smime-alg-ESDHwithRC2" */
214,	/* "id-smime-alg-RC2wrap" */
161,	/* "id-smime-cd" */
219,	/* "id-smime-cd-ldap" */
158,	/* "id-smime-ct" */
178,	/* "id-smime-ct-DVCSRequestData" */
179,	/* "id-smime-ct-DVCSResponseData" */
176,	/* "id-smime-ct-TDTInfo" */
175,	/* "id-smime-ct-TSTInfo" */
173,	/* "id-smime-ct-authData" */
180,	/* "id-smime-ct-compressedData" */
177,	/* "id-smime-ct-contentInfo" */
174,	/* "id-smime-ct-publishCert" */
172,	/* "id-smime-ct-receipt" */
163,	/* "id-smime-cti" */
226,	/* "id-smime-cti-ets-proofOfApproval" */
227,	/* "id-smime-cti-ets-proofOfCreation" */
224,	/* "id-smime-cti-ets-proofOfDelivery" */
222,	/* "id-smime-cti-ets-proofOfOrigin" */
223,	/* "id-smime-cti-ets-proofOfReceipt" */
225,	/* "id-smime-cti-ets-proofOfSender" */
157,	/* "id-smime-mod" */
164,	/* "id-smime-mod-cms" */
165,	/* "id-smime-mod-ess" */
170,	/* "id-smime-mod-ets-eSigPolicy-88" */
171,	/* "id-smime-mod-ets-eSigPolicy-97" */
168,	/* "id-smime-mod-ets-eSignature-88" */
169,	/* "id-smime-mod-ets-eSignature-97" */
167,	/* "id-smime-mod-msg-v3" */
166,	/* "id-smime-mod-oid" */
162,	/* "id-smime-spq" */
221,	/* "id-smime-spq-ets-sqt-unotice" */
220,	/* "id-smime-spq-ets-sqt-uri" */
939,	/* "id-tc26-gost-28147-param-Z" */
937,	/* "id-tc26-gost-3410-2012-512-paramSetA" */
938,	/* "id-tc26-gost-3410-2012-512-paramSetB" */
278,	/* "idea-cbc" */
280,	/* "idea-cfb" */
279,	/* "idea-ecb" */
281,	/* "idea-ofb" */
 5,	/* "identified-organization" */
653,	/* "info" */
496,	/* "initials" */
478,	/* "internationaliSDNNumber" */
829,	/* "ipsec3" */
830,	/* "ipsec4" */
 2,	/* "iso" */
807,	/* "issuer capabilities" */
 1,	/* "itu-t" */
685,	/* "janetMailbox" */
 3,	/* "joint-iso-itu-t" */
241,	/* "keyBag" */
903,	/* "kisa" */
669,	/* "lastModifiedBy" */
668,	/* "lastModifiedTime" */
229,	/* "localKeyID" */
460,	/* "localityName" */
673,	/* "mXRecord" */
686,	/* "mailPreferenceOption" */
659,	/* "manager" */
247,	/* "md2" */
114,	/* "md2WithRSAEncryption" */
248,	/* "md4" */
115,	/* "md4WithRSAEncryption" */
249,	/* "md5" */
250,	/* "md5-sha1" */
430,	/* "md5WithRSA" */
116,	/* "md5WithRSAEncryption" */
513,	/* "mdc2" */
512,	/* "mdc2WithRSA" */
484,	/* "member" */
786,	/* "merchant initiated auth" */
698,	/* "message extensions" */
148,	/* "messageDigest" */
119,	/* "mgf1" */
568,	/* "mime-mhs-bodies" */
567,	/* "mime-mhs-headings" */
681,	/* "mobileTelephoneNumber" */
674,	/* "nSRecord" */
494,	/* "name" */
23,	/* "onBasis" */
554,	/* "org" */
463,	/* "organizationName" */
684,	/* "organizationalStatus" */
464,	/* "organizationalUnitName" */
667,	/* "otherMailbox" */
485,	/* "owner" */
682,	/* "pagerTelephoneNumber" */
108,	/* "password based MAC" */
427,	/* "path" */
805,	/* "payment gateway capabilities" */
128,	/* "pbeWithMD2AndDES-CBC" */
130,	/* "pbeWithMD2AndRC2-CBC" */
107,	/* "pbeWithMD5AndCast5CBC" */
129,	/* "pbeWithMD5AndDES-CBC" */
131,	/* "pbeWithMD5AndRC2-CBC" */
239,	/* "pbeWithSHA1And128BitRC2-CBC" */
235,	/* "pbeWithSHA1And128BitRC4" */
238,	/* "pbeWithSHA1And2-KeyTripleDES-CBC" */
237,	/* "pbeWithSHA1And3-KeyTripleDES-CBC" */
240,	/* "pbeWithSHA1And40BitRC2-CBC" */
236,	/* "pbeWithSHA1And40BitRC4" */
132,	/* "pbeWithSHA1AndDES-CBC" */
133,	/* "pbeWithSHA1AndRC2-CBC" */
692,	/* "personalSignature" */
680,	/* "personalTitle" */
656,	/* "photo" */
472,	/* "physicalDeliveryOfficeName" */
628,	/* "pilot" */
630,	/* "pilotAttributeSyntax" */
629,	/* "pilotAttributeType" */
672,	/* "pilotAttributeType27" */
648,	/* "pilotDSA" */
632,	/* "pilotGroups" */
635,	/* "pilotObject" */
631,	/* "pilotObjectClass" */
647,	/* "pilotOrganization" */
636,	/* "pilotPerson" */
112,	/* "pkcs1" */
125,	/* "pkcs3" */
127,	/* "pkcs5" */
137,	/* "pkcs7" */
138,	/* "pkcs7-data" */
142,	/* "pkcs7-digestData" */
143,	/* "pkcs7-encryptedData" */
140,	/* "pkcs7-envelopedData" */
141,	/* "pkcs7-signedAndEnvelopedData" */
139,	/* "pkcs7-signedData" */
242,	/* "pkcs8ShroudedKeyBag" */
144,	/* "pkcs9" */
471,	/* "postOfficeBox" */
469,	/* "postalAddress" */
470,	/* "postalCode" */
25,	/* "ppBasis" */
481,	/* "preferredDeliveryMethod" */
482,	/* "presentationAddress" */
20,	/* "prime-field" */
47,	/* "prime192v1" */
48,	/* "prime192v2" */
49,	/* "prime192v3" */
50,	/* "prime239v1" */
51,	/* "prime239v2" */
52,	/* "prime239v3" */
53,	/* "prime256v1" */
501,	/* "protocolInformation" */
508,	/* "pseudonym" */
626,	/* "pss" */
320,	/* "qcStatements" */
649,	/* "qualityLabelledData" */
642,	/* "rFC822localPart" */
261,	/* "rc2-40-cbc" */
262,	/* "rc2-64-cbc" */
257,	/* "rc2-cbc" */
259,	/* "rc2-cfb" */
258,	/* "rc2-ecb" */
260,	/* "rc2-ofb" */
263,	/* "rc4" */
264,	/* "rc4-40" */
910,	/* "rc4-hmac-md5" */
266,	/* "rc5-cbc" */
268,	/* "rc5-cfb" */
267,	/* "rc5-ecb" */
269,	/* "rc5-ofb" */
479,	/* "registeredAddress" */
652,	/* "rfc822Mailbox" */
451,	/* "ripemd160" */
452,	/* "ripemd160WithRSA" */
509,	/* "role" */
486,	/* "roleOccupant" */
639,	/* "room" */
655,	/* "roomNumber" */
511,	/* "rsa" */
113,	/* "rsaEncryption" */
828,	/* "rsaOAEPEncryptionSET" */
435,	/* "rsaSignature" */
118,	/* "rsaesOaep" */
120,	/* "rsassaPss" */
571,	/* "run length compression" */
675,	/* "sOARecord" */
246,	/* "safeContentsBag" */
325,	/* "sbgp-autonomousSysNum" */
324,	/* "sbgp-ipAddrBlock" */
326,	/* "sbgp-routerIdentifier" */
233,	/* "sdsiCertificate" */
467,	/* "searchGuide" */
61,	/* "secp112r1" */
62,	/* "secp112r2" */
63,	/* "secp128r1" */
64,	/* "secp128r2" */
65,	/* "secp160k1" */
66,	/* "secp160r1" */
67,	/* "secp160r2" */
68,	/* "secp192k1" */
69,	/* "secp224k1" */
70,	/* "secp224r1" */
71,	/* "secp256k1" */
72,	/* "secp384r1" */
73,	/* "secp521r1" */
245,	/* "secretBag" */
666,	/* "secretary" */
74,	/* "sect113r1" */
75,	/* "sect113r2" */
76,	/* "sect131r1" */
77,	/* "sect131r2" */
78,	/* "sect163k1" */
79,	/* "sect163r1" */
80,	/* "sect163r2" */
81,	/* "sect193r1" */
82,	/* "sect193r2" */
83,	/* "sect233k1" */
84,	/* "sect233r1" */
85,	/* "sect239k1" */
86,	/* "sect283k1" */
87,	/* "sect283r1" */
88,	/* "sect409k1" */
89,	/* "sect409r1" */
90,	/* "sect571k1" */
91,	/* "sect571r1" */
819,	/* "secure device signature" */
487,	/* "seeAlso" */
905,	/* "seed-cbc" */
906,	/* "seed-cfb" */
904,	/* "seed-ecb" */
907,	/* "seed-ofb" */
458,	/* "serialNumber" */
809,	/* "set-addPolicy" */
699,	/* "set-attr" */
702,	/* "set-brand" */
822,	/* "set-brand-AmericanExpress" */
821,	/* "set-brand-Diners" */
820,	/* "set-brand-IATA-ATA" */
823,	/* "set-brand-JCB" */
825,	/* "set-brand-MasterCard" */
826,	/* "set-brand-Novus" */
824,	/* "set-brand-Visa" */
700,	/* "set-policy" */
791,	/* "set-policy-root" */
808,	/* "set-rootKeyThumb" */
804,	/* "setAttr-Cert" */
812,	/* "setAttr-IssCap-CVM" */
814,	/* "setAttr-IssCap-Sig" */
813,	/* "setAttr-IssCap-T2" */
811,	/* "setAttr-Token-B0Prime" */
810,	/* "setAttr-Token-EMV" */
806,	/* "setAttr-TokenType" */
803,	/* "setCext-IssuerCapabilities" */
799,	/* "setCext-PGWYcapabilities" */
800,	/* "setCext-TokenIdentifier" */
802,	/* "setCext-TokenType" */
801,	/* "setCext-Track2Data" */
795,	/* "setCext-cCertRequired" */
793,	/* "setCext-certType" */
792,	/* "setCext-hashedRoot" */
794,	/* "setCext-merchData" */
797,	/* "setCext-setExt" */
798,	/* "setCext-setQualf" */
796,	/* "setCext-tunneling" */
724,	/* "setct-AcqCardCodeMsg" */
760,	/* "setct-AcqCardCodeMsgTBE" */
754,	/* "setct-AuthReqTBE" */
718,	/* "setct-AuthReqTBS" */
711,	/* "setct-AuthResBaggage" */
755,	/* "setct-AuthResTBE" */
756,	/* "setct-AuthResTBEX" */
719,	/* "setct-AuthResTBS" */
720,	/* "setct-AuthResTBSX" */
712,	/* "setct-AuthRevReqBaggage" */
761,	/* "setct-AuthRevReqTBE" */
725,	/* "setct-AuthRevReqTBS" */
713,	/* "setct-AuthRevResBaggage" */
726,	/* "setct-AuthRevResData" */
762,	/* "setct-AuthRevResTBE" */
763,	/* "setct-AuthRevResTBEB" */
727,	/* "setct-AuthRevResTBS" */
757,	/* "setct-AuthTokenTBE" */
721,	/* "setct-AuthTokenTBS" */
784,	/* "setct-BCIDistributionTBS" */
742,	/* "setct-BatchAdminReqData" */
776,	/* "setct-BatchAdminReqTBE" */
743,	/* "setct-BatchAdminResData" */
777,	/* "setct-BatchAdminResTBE" */
783,	/* "setct-CRLNotificationResTBS" */
782,	/* "setct-CRLNotificationTBS" */
764,	/* "setct-CapReqTBE" */
765,	/* "setct-CapReqTBEX" */
728,	/* "setct-CapReqTBS" */
729,	/* "setct-CapReqTBSX" */
730,	/* "setct-CapResData" */
766,	/* "setct-CapResTBE" */
767,	/* "setct-CapRevReqTBE" */
768,	/* "setct-CapRevReqTBEX" */
731,	/* "setct-CapRevReqTBS" */
732,	/* "setct-CapRevReqTBSX" */
733,	/* "setct-CapRevResData" */
769,	/* "setct-CapRevResTBE" */
722,	/* "setct-CapTokenData" */
714,	/* "setct-CapTokenSeq" */
758,	/* "setct-CapTokenTBE" */
759,	/* "setct-CapTokenTBEX" */
723,	/* "setct-CapTokenTBS" */
744,	/* "setct-CardCInitResTBS" */
750,	/* "setct-CertInqReqTBS" */
747,	/* "setct-CertReqData" */
779,	/* "setct-CertReqTBE" */
780,	/* "setct-CertReqTBEX" */
748,	/* "setct-CertReqTBS" */
749,	/* "setct-CertResData" */
781,	/* "setct-CertResTBE" */
770,	/* "setct-CredReqTBE" */
771,	/* "setct-CredReqTBEX" */
734,	/* "setct-CredReqTBS" */
735,	/* "setct-CredReqTBSX" */
736,	/* "setct-CredResData" */
772,	/* "setct-CredResTBE" */
773,	/* "setct-CredRevReqTBE" */
774,	/* "setct-CredRevReqTBEX" */
737,	/* "setct-CredRevReqTBS" */
738,	/* "setct-CredRevReqTBSX" */
739,	/* "setct-CredRevResData" */
775,	/* "setct-CredRevResTBE" */
751,	/* "setct-ErrorTBS" */
710,	/* "setct-HODInput" */
745,	/* "setct-MeAqCInitResTBS" */
706,	/* "setct-OIData" */
703,	/* "setct-PANData" */
705,	/* "setct-PANOnly" */
704,	/* "setct-PANToken" */
740,	/* "setct-PCertReqData" */
741,	/* "setct-PCertResTBS" */
707,	/* "setct-PI" */
716,	/* "setct-PI-TBS" */
708,	/* "setct-PIData" */
709,	/* "setct-PIDataUnsigned" */
752,	/* "setct-PIDualSignedTBE" */
753,	/* "setct-PIUnsignedTBE" */
715,	/* "setct-PInitResData" */
717,	/* "setct-PResData" */
778,	/* "setct-RegFormReqTBE" */
746,	/* "setct-RegFormResTBS" */
788,	/* "setext-pinAny" */
787,	/* "setext-pinSecure" */
789,	/* "setext-track2" */
447,	/* "sha" */
448,	/* "sha1" */
450,	/* "sha1WithRSA" */
117,	/* "sha1WithRSAEncryption" */
618,	/* "sha224" */
124,	/* "sha224WithRSAEncryption" */
615,	/* "sha256" */
121,	/* "sha256WithRSAEncryption" */
616,	/* "sha384" */
122,	/* "sha384WithRSAEncryption" */
617,	/* "sha512" */
123,	/* "sha512WithRSAEncryption" */
438,	/* "shaWithRSAEncryption" */
149,	/* "signingTime" */
646,	/* "simpleSecurityObject" */
689,	/* "singleLevelQuality" */
612,	/* "speck-128-cbc" */
613,	/* "speck-192-cbc" */
614,	/* "speck-256-cbc" */
461,	/* "stateOrProvinceName" */
462,	/* "streetAddress" */
691,	/* "subtreeMaximumQuality" */
690,	/* "subtreeMinimumQuality" */
505,	/* "supportedAlgorithms" */
483,	/* "supportedApplicationContext" */
457,	/* "surname" */
934,	/* "tc26" */
473,	/* "telephoneNumber" */
475,	/* "teletexTerminalIdentifier" */
914,	/* "teletrust" */
474,	/* "telexNumber" */
651,	/* "textEncodedORAddress" */
332,	/* "textNotice" */
465,	/* "title" */
24,	/* "tpBasis" */
627,	/* "ucl" */
 0,	/* "undefined" */
503,	/* "uniqueMember" */
152,	/* "unstructuredAddress" */
146,	/* "unstructuredName" */
489,	/* "userCertificate" */
657,	/* "userClass" */
650,	/* "userId" */
488,	/* "userPassword" */
426,	/* "valid" */
10,	/* "wap" */
11,	/* "wap-wsg" */
92,	/* "wap-wsg-idm-ecid-wtls1" */
100,	/* "wap-wsg-idm-ecid-wtls10" */
101,	/* "wap-wsg-idm-ecid-wtls11" */
102,	/* "wap-wsg-idm-ecid-wtls12" */
93,	/* "wap-wsg-idm-ecid-wtls3" */
94,	/* "wap-wsg-idm-ecid-wtls4" */
95,	/* "wap-wsg-idm-ecid-wtls5" */
96,	/* "wap-wsg-idm-ecid-wtls6" */
97,	/* "wap-wsg-idm-ecid-wtls7" */
98,	/* "wap-wsg-idm-ecid-wtls8" */
99,	/* "wap-wsg-idm-ecid-wtls9" */
831,	/* "whirlpool" */
477,	/* "x121Address" */
498,	/* "x500UniqueIdentifier" */
232,	/* "x509Certificate" */
234,	/* "x509Crl" */
572,	/* "zlib compression" */
};

static const unsigned int obj_objs[NUM_OBJ]={
 0,	/* OBJ_undef                        0 */
 1,	/* OBJ_itu_t                        0 */
 2,	/* OBJ_iso                          1 */
 3,	/* OBJ_joint_iso_itu_t              2 */
625,	/* OBJ_data                         0 9 */
 4,	/* OBJ_member_body                  1 2 */
 5,	/* OBJ_identified_organization      1 3 */
554,	/* OBJ_org                          1 3 */
454,	/* OBJ_X500                         2 5 */
 9,	/* OBJ_international_organizations  2 23 */
555,	/* OBJ_dod                          1 3 6 */
914,	/* OBJ_teletrust                    1 3 36 */
455,	/* OBJ_X509                         2 5 4 */
510,	/* OBJ_X500algorithms               2 5 8 */
514,	/* OBJ_id_ce                        2 5 29 */
696,	/* OBJ_id_set                       2 23 42 */
10,	/* OBJ_wap                          2 23 43 */
626,	/* OBJ_pss                          0 9 2342 */
14,	/* OBJ_ISO_US                       1 2 840 */
556,	/* OBJ_iana                         1 3 6 1 */
 8,	/* OBJ_certicom_arc                 1 3 132 */
12,	/* OBJ_selected_attribute_types     2 5 1 5 */
456,	/* OBJ_commonName                   2 5 4 3 */
457,	/* OBJ_surname                      2 5 4 4 */
458,	/* OBJ_serialNumber                 2 5 4 5 */
459,	/* OBJ_countryName                  2 5 4 6 */
460,	/* OBJ_localityName                 2 5 4 7 */
461,	/* OBJ_stateOrProvinceName          2 5 4 8 */
462,	/* OBJ_streetAddress                2 5 4 9 */
463,	/* OBJ_organizationName             2 5 4 10 */
464,	/* OBJ_organizationalUnitName       2 5 4 11 */
465,	/* OBJ_title                        2 5 4 12 */
466,	/* OBJ_description                  2 5 4 13 */
467,	/* OBJ_searchGuide                  2 5 4 14 */
468,	/* OBJ_businessCategory             2 5 4 15 */
469,	/* OBJ_postalAddress                2 5 4 16 */
470,	/* OBJ_postalCode                   2 5 4 17 */
471,	/* OBJ_postOfficeBox                2 5 4 18 */
472,	/* OBJ_physicalDeliveryOfficeName   2 5 4 19 */
473,	/* OBJ_telephoneNumber              2 5 4 20 */
474,	/* OBJ_telexNumber                  2 5 4 21 */
475,	/* OBJ_teletexTerminalIdentifier    2 5 4 22 */
476,	/* OBJ_facsimileTelephoneNumber     2 5 4 23 */
477,	/* OBJ_x121Address                  2 5 4 24 */
478,	/* OBJ_internationaliSDNNumber      2 5 4 25 */
479,	/* OBJ_registeredAddress            2 5 4 26 */
480,	/* OBJ_destinationIndicator         2 5 4 27 */
481,	/* OBJ_preferredDeliveryMethod      2 5 4 28 */
482,	/* OBJ_presentationAddress          2 5 4 29 */
483,	/* OBJ_supportedApplicationContext  2 5 4 30 */
484,	/* OBJ_member                       2 5 4 31 */
485,	/* OBJ_owner                        2 5 4 32 */
486,	/* OBJ_roleOccupant                 2 5 4 33 */
487,	/* OBJ_seeAlso                      2 5 4 34 */
488,	/* OBJ_userPassword                 2 5 4 35 */
489,	/* OBJ_userCertificate              2 5 4 36 */
490,	/* OBJ_cACertificate                2 5 4 37 */
491,	/* OBJ_authorityRevocationList      2 5 4 38 */
492,	/* OBJ_certificateRevocationList    2 5 4 39 */
493,	/* OBJ_crossCertificatePair         2 5 4 40 */
494,	/* OBJ_name                         2 5 4 41 */
495,	/* OBJ_givenName                    2 5 4 42 */
496,	/* OBJ_initials                     2 5 4 43 */
497,	/* OBJ_generationQualifier          2 5 4 44 */
498,	/* OBJ_x500UniqueIdentifier         2 5 4 45 */
499,	/* OBJ_dnQualifier                  2 5 4 46 */
500,	/* OBJ_enhancedSearchGuide          2 5 4 47 */
501,	/* OBJ_protocolInformation          2 5 4 48 */
502,	/* OBJ_distinguishedName            2 5 4 49 */
503,	/* OBJ_uniqueMember                 2 5 4 50 */
504,	/* OBJ_houseIdentifier              2 5 4 51 */
505,	/* OBJ_supportedAlgorithms          2 5 4 52 */
506,	/* OBJ_deltaRevocationList          2 5 4 53 */
507,	/* OBJ_dmdName                      2 5 4 54 */
508,	/* OBJ_pseudonym                    2 5 4 65 */
509,	/* OBJ_role                         2 5 4 72 */
515,	/* OBJ_subject_directory_attributes 2 5 29 9 */
516,	/* OBJ_subject_key_identifier       2 5 29 14 */
517,	/* OBJ_key_usage                    2 5 29 15 */
518,	/* OBJ_private_key_usage_period     2 5 29 16 */
519,	/* OBJ_subject_alt_name             2 5 29 17 */
520,	/* OBJ_issuer_alt_name              2 5 29 18 */
521,	/* OBJ_basic_constraints            2 5 29 19 */
522,	/* OBJ_crl_number                   2 5 29 20 */
523,	/* OBJ_crl_reason                   2 5 29 21 */
621,	/* OBJ_hold_instruction_code        2 5 29 23 */
524,	/* OBJ_invalidity_date              2 5 29 24 */
525,	/* OBJ_delta_crl                    2 5 29 27 */
526,	/* OBJ_issuing_distribution_point   2 5 29 28 */
527,	/* OBJ_certificate_issuer           2 5 29 29 */
528,	/* OBJ_name_constraints             2 5 29 30 */
529,	/* OBJ_crl_distribution_points      2 5 29 31 */
530,	/* OBJ_certificate_policies         2 5 29 32 */
532,	/* OBJ_policy_mappings              2 5 29 33 */
533,	/* OBJ_authority_key_identifier     2 5 29 35 */
534,	/* OBJ_policy_constraints           2 5 29 36 */
535,	/* OBJ_ext_key_usage                2 5 29 37 */
536,	/* OBJ_freshest_crl                 2 5 29 46 */
537,	/* OBJ_inhibit_any_policy           2 5 29 54 */
538,	/* OBJ_target_information           2 5 29 55 */
539,	/* OBJ_no_rev_avail                 2 5 29 56 */
697,	/* OBJ_set_ctype                    2 23 42 0 */
698,	/* OBJ_set_msgExt                   2 23 42 1 */
699,	/* OBJ_set_attr                     2 23 42 3 */
700,	/* OBJ_set_policy                   2 23 42 5 */
701,	/* OBJ_set_certExt                  2 23 42 7 */
702,	/* OBJ_set_brand                    2 23 42 8 */
11,	/* OBJ_wap_wsg                      2 23 43 1 */
557,	/* OBJ_Directory                    1 3 6 1 1 */
558,	/* OBJ_Management                   1 3 6 1 2 */
559,	/* OBJ_Experimental                 1 3 6 1 3 */
560,	/* OBJ_Private                      1 3 6 1 4 */
561,	/* OBJ_Security                     1 3 6 1 5 */
562,	/* OBJ_SNMPv2                       1 3 6 1 6 */
563,	/* OBJ_Mail                         1 3 6 1 7 */
429,	/* OBJ_algorithm                    1 3 14 3 2 */
13,	/* OBJ_clearance                    2 5 1 5 55 */
511,	/* OBJ_rsa                          2 5 8 1 1 */
512,	/* OBJ_mdc2WithRSA                  2 5 8 3 100 */
513,	/* OBJ_mdc2                         2 5 8 3 101 */
531,	/* OBJ_any_policy                   2 5 29 32 0 */
540,	/* OBJ_anyExtendedKeyUsage          2 5 29 37 0 */
703,	/* OBJ_setct_PANData                2 23 42 0 0 */
704,	/* OBJ_setct_PANToken               2 23 42 0 1 */
705,	/* OBJ_setct_PANOnly                2 23 42 0 2 */
706,	/* OBJ_setct_OIData                 2 23 42 0 3 */
707,	/* OBJ_setct_PI                     2 23 42 0 4 */
708,	/* OBJ_setct_PIData                 2 23 42 0 5 */
709,	/* OBJ_setct_PIDataUnsigned         2 23 42 0 6 */
710,	/* OBJ_setct_HODInput               2 23 42 0 7 */
711,	/* OBJ_setct_AuthResBaggage         2 23 42 0 8 */
712,	/* OBJ_setct_AuthRevReqBaggage      2 23 42 0 9 */
713,	/* OBJ_setct_AuthRevResBaggage      2 23 42 0 10 */
714,	/* OBJ_setct_CapTokenSeq            2 23 42 0 11 */
715,	/* OBJ_setct_PInitResData           2 23 42 0 12 */
716,	/* OBJ_setct_PI_TBS                 2 23 42 0 13 */
717,	/* OBJ_setct_PResData               2 23 42 0 14 */
718,	/* OBJ_setct_AuthReqTBS             2 23 42 0 16 */
719,	/* OBJ_setct_AuthResTBS             2 23 42 0 17 */
720,	/* OBJ_setct_AuthResTBSX            2 23 42 0 18 */
721,	/* OBJ_setct_AuthTokenTBS           2 23 42 0 19 */
722,	/* OBJ_setct_CapTokenData           2 23 42 0 20 */
723,	/* OBJ_setct_CapTokenTBS            2 23 42 0 21 */
724,	/* OBJ_setct_AcqCardCodeMsg         2 23 42 0 22 */
725,	/* OBJ_setct_AuthRevReqTBS          2 23 42 0 23 */
726,	/* OBJ_setct_AuthRevResData         2 23 42 0 24 */
727,	/* OBJ_setct_AuthRevResTBS          2 23 42 0 25 */
728,	/* OBJ_setct_CapReqTBS              2 23 42 0 26 */
729,	/* OBJ_setct_CapReqTBSX             2 23 42 0 27 */
730,	/* OBJ_setct_CapResData             2 23 42 0 28 */
731,	/* OBJ_setct_CapRevReqTBS           2 23 42 0 29 */
732,	/* OBJ_setct_CapRevReqTBSX          2 23 42 0 30 */
733,	/* OBJ_setct_CapRevResData          2 23 42 0 31 */
734,	/* OBJ_setct_CredReqTBS             2 23 42 0 32 */
735,	/* OBJ_setct_CredReqTBSX            2 23 42 0 33 */
736,	/* OBJ_setct_CredResData            2 23 42 0 34 */
737,	/* OBJ_setct_CredRevReqTBS          2 23 42 0 35 */
738,	/* OBJ_setct_CredRevReqTBSX         2 23 42 0 36 */
739,	/* OBJ_setct_CredRevResData         2 23 42 0 37 */
740,	/* OBJ_setct_PCertReqData           2 23 42 0 38 */
741,	/* OBJ_setct_PCertResTBS            2 23 42 0 39 */
742,	/* OBJ_setct_BatchAdminReqData      2 23 42 0 40 */
743,	/* OBJ_setct_BatchAdminResData      2 23 42 0 41 */
744,	/* OBJ_setct_CardCInitResTBS        2 23 42 0 42 */
745,	/* OBJ_setct_MeAqCInitResTBS        2 23 42 0 43 */
746,	/* OBJ_setct_RegFormResTBS          2 23 42 0 44 */
747,	/* OBJ_setct_CertReqData            2 23 42 0 45 */
748,	/* OBJ_setct_CertReqTBS             2 23 42 0 46 */
749,	/* OBJ_setct_CertResData            2 23 42 0 47 */
750,	/* OBJ_setct_CertInqReqTBS          2 23 42 0 48 */
751,	/* OBJ_setct_ErrorTBS               2 23 42 0 49 */
752,	/* OBJ_setct_PIDualSignedTBE        2 23 42 0 50 */
753,	/* OBJ_setct_PIUnsignedTBE          2 23 42 0 51 */
754,	/* OBJ_setct_AuthReqTBE             2 23 42 0 52 */
755,	/* OBJ_setct_AuthResTBE             2 23 42 0 53 */
756,	/* OBJ_setct_AuthResTBEX            2 23 42 0 54 */
757,	/* OBJ_setct_AuthTokenTBE           2 23 42 0 55 */
758,	/* OBJ_setct_CapTokenTBE            2 23 42 0 56 */
759,	/* OBJ_setct_CapTokenTBEX           2 23 42 0 57 */
760,	/* OBJ_setct_AcqCardCodeMsgTBE      2 23 42 0 58 */
761,	/* OBJ_setct_AuthRevReqTBE          2 23 42 0 59 */
762,	/* OBJ_setct_AuthRevResTBE          2 23 42 0 60 */
763,	/* OBJ_setct_AuthRevResTBEB         2 23 42 0 61 */
764,	/* OBJ_setct_CapReqTBE              2 23 42 0 62 */
765,	/* OBJ_setct_CapReqTBEX             2 23 42 0 63 */
766,	/* OBJ_setct_CapResTBE              2 23 42 0 64 */
767,	/* OBJ_setct_CapRevReqTBE           2 23 42 0 65 */
768,	/* OBJ_setct_CapRevReqTBEX          2 23 42 0 66 */
769,	/* OBJ_setct_CapRevResTBE           2 23 42 0 67 */
770,	/* OBJ_setct_CredReqTBE             2 23 42 0 68 */
771,	/* OBJ_setct_CredReqTBEX            2 23 42 0 69 */
772,	/* OBJ_setct_CredResTBE             2 23 42 0 70 */
773,	/* OBJ_setct_CredRevReqTBE          2 23 42 0 71 */
774,	/* OBJ_setct_CredRevReqTBEX         2 23 42 0 72 */
775,	/* OBJ_setct_CredRevResTBE          2 23 42 0 73 */
776,	/* OBJ_setct_BatchAdminReqTBE       2 23 42 0 74 */
777,	/* OBJ_setct_BatchAdminResTBE       2 23 42 0 75 */
778,	/* OBJ_setct_RegFormReqTBE          2 23 42 0 76 */
779,	/* OBJ_setct_CertReqTBE             2 23 42 0 77 */
780,	/* OBJ_setct_CertReqTBEX            2 23 42 0 78 */
781,	/* OBJ_setct_CertResTBE             2 23 42 0 79 */
782,	/* OBJ_setct_CRLNotificationTBS     2 23 42 0 80 */
783,	/* OBJ_setct_CRLNotificationResTBS  2 23 42 0 81 */
784,	/* OBJ_setct_BCIDistributionTBS     2 23 42 0 82 */
785,	/* OBJ_setext_genCrypt              2 23 42 1 1 */
786,	/* OBJ_setext_miAuth                2 23 42 1 3 */
787,	/* OBJ_setext_pinSecure             2 23 42 1 4 */
788,	/* OBJ_setext_pinAny                2 23 42 1 5 */
789,	/* OBJ_setext_track2                2 23 42 1 7 */
790,	/* OBJ_setext_cv                    2 23 42 1 8 */
804,	/* OBJ_setAttr_Cert                 2 23 42 3 0 */
805,	/* OBJ_setAttr_PGWYcap              2 23 42 3 1 */
806,	/* OBJ_setAttr_TokenType            2 23 42 3 2 */
807,	/* OBJ_setAttr_IssCap               2 23 42 3 3 */
791,	/* OBJ_set_policy_root              2 23 42 5 0 */
792,	/* OBJ_setCext_hashedRoot           2 23 42 7 0 */
793,	/* OBJ_setCext_certType             2 23 42 7 1 */
794,	/* OBJ_setCext_merchData            2 23 42 7 2 */
795,	/* OBJ_setCext_cCertRequired        2 23 42 7 3 */
796,	/* OBJ_setCext_tunneling            2 23 42 7 4 */
797,	/* OBJ_setCext_setExt               2 23 42 7 5 */
798,	/* OBJ_setCext_setQualf             2 23 42 7 6 */
799,	/* OBJ_setCext_PGWYcapabilities     2 23 42 7 7 */
800,	/* OBJ_setCext_TokenIdentifier      2 23 42 7 8 */
801,	/* OBJ_setCext_Track2Data           2 23 42 7 9 */
802,	/* OBJ_setCext_TokenType            2 23 42 7 10 */
803,	/* OBJ_setCext_IssuerCapabilities   2 23 42 7 11 */
820,	/* OBJ_set_brand_IATA_ATA           2 23 42 8 1 */
824,	/* OBJ_set_brand_Visa               2 23 42 8 4 */
825,	/* OBJ_set_brand_MasterCard         2 23 42 8 5 */
821,	/* OBJ_set_brand_Diners             2 23 42 8 30 */
822,	/* OBJ_set_brand_AmericanExpress    2 23 42 8 34 */
823,	/* OBJ_set_brand_JCB                2 23 42 8 35 */
832,	/* OBJ_cryptopro                    1 2 643 2 2 */
833,	/* OBJ_cryptocom                    1 2 643 2 9 */
934,	/* OBJ_tc26                         1 2 643 7 1 */
15,	/* OBJ_X9_57                        1 2 840 10040 */
19,	/* OBJ_ansi_X9_62                   1 2 840 10045 */
564,	/* OBJ_Enterprises                  1 3 6 1 4 1 */
566,	/* OBJ_mime_mhs                     1 3 6 1 7 1 */
430,	/* OBJ_md5WithRSA                   1 3 14 3 2 3 */
431,	/* OBJ_des_ecb                      1 3 14 3 2 6 */
432,	/* OBJ_des_cbc                      1 3 14 3 2 7 */
433,	/* OBJ_des_ofb64                    1 3 14 3 2 8 */
434,	/* OBJ_des_cfb64                    1 3 14 3 2 9 */
435,	/* OBJ_rsaSignature                 1 3 14 3 2 11 */
436,	/* OBJ_dsa_2                        1 3 14 3 2 12 */
437,	/* OBJ_dsaWithSHA                   1 3 14 3 2 13 */
438,	/* OBJ_shaWithRSAEncryption         1 3 14 3 2 15 */
439,	/* OBJ_des_ede_ecb                  1 3 14 3 2 17 */
447,	/* OBJ_sha                          1 3 14 3 2 18 */
448,	/* OBJ_sha1                         1 3 14 3 2 26 */
449,	/* OBJ_dsaWithSHA1_2                1 3 14 3 2 27 */
450,	/* OBJ_sha1WithRSA                  1 3 14 3 2 29 */
451,	/* OBJ_ripemd160                    1 3 36 3 2 1 */
453,	/* OBJ_sxnet                        1 3 101 1 4 1 */
78,	/* OBJ_sect163k1                    1 3 132 0 1 */
79,	/* OBJ_sect163r1                    1 3 132 0 2 */
85,	/* OBJ_sect239k1                    1 3 132 0 3 */
74,	/* OBJ_sect113r1                    1 3 132 0 4 */
75,	/* OBJ_sect113r2                    1 3 132 0 5 */
61,	/* OBJ_secp112r1                    1 3 132 0 6 */
62,	/* OBJ_secp112r2                    1 3 132 0 7 */
66,	/* OBJ_secp160r1                    1 3 132 0 8 */
65,	/* OBJ_secp160k1                    1 3 132 0 9 */
71,	/* OBJ_secp256k1                    1 3 132 0 10 */
80,	/* OBJ_sect163r2                    1 3 132 0 15 */
86,	/* OBJ_sect283k1                    1 3 132 0 16 */
87,	/* OBJ_sect283r1                    1 3 132 0 17 */
76,	/* OBJ_sect131r1                    1 3 132 0 22 */
77,	/* OBJ_sect131r2                    1 3 132 0 23 */
81,	/* OBJ_sect193r1                    1 3 132 0 24 */
82,	/* OBJ_sect193r2                    1 3 132 0 25 */
83,	/* OBJ_sect233k1                    1 3 132 0 26 */
84,	/* OBJ_sect233r1                    1 3 132 0 27 */
63,	/* OBJ_secp128r1                    1 3 132 0 28 */
64,	/* OBJ_secp128r2                    1 3 132 0 29 */
67,	/* OBJ_secp160r2                    1 3 132 0 30 */
68,	/* OBJ_secp192k1                    1 3 132 0 31 */
69,	/* OBJ_secp224k1                    1 3 132 0 32 */
70,	/* OBJ_secp224r1                    1 3 132 0 33 */
72,	/* OBJ_secp384r1                    1 3 132 0 34 */
73,	/* OBJ_secp521r1                    1 3 132 0 35 */
88,	/* OBJ_sect409k1                    1 3 132 0 36 */
89,	/* OBJ_sect409r1                    1 3 132 0 37 */
90,	/* OBJ_sect571k1                    1 3 132 0 38 */
91,	/* OBJ_sect571r1                    1 3 132 0 39 */
808,	/* OBJ_set_rootKeyThumb             2 23 42 3 0 0 */
809,	/* OBJ_set_addPolicy                2 23 42 3 0 1 */
810,	/* OBJ_setAttr_Token_EMV            2 23 42 3 2 1 */
811,	/* OBJ_setAttr_Token_B0Prime        2 23 42 3 2 2 */
812,	/* OBJ_setAttr_IssCap_CVM           2 23 42 3 3 3 */
813,	/* OBJ_setAttr_IssCap_T2            2 23 42 3 3 4 */
814,	/* OBJ_setAttr_IssCap_Sig           2 23 42 3 3 5 */
826,	/* OBJ_set_brand_Novus              2 23 42 8 6011 */
92,	/* OBJ_wap_wsg_idm_ecid_wtls1       2 23 43 1 4 1 */
93,	/* OBJ_wap_wsg_idm_ecid_wtls3       2 23 43 1 4 3 */
94,	/* OBJ_wap_wsg_idm_ecid_wtls4       2 23 43 1 4 4 */
95,	/* OBJ_wap_wsg_idm_ecid_wtls5       2 23 43 1 4 5 */
96,	/* OBJ_wap_wsg_idm_ecid_wtls6       2 23 43 1 4 6 */
97,	/* OBJ_wap_wsg_idm_ecid_wtls7       2 23 43 1 4 7 */
98,	/* OBJ_wap_wsg_idm_ecid_wtls8       2 23 43 1 4 8 */
99,	/* OBJ_wap_wsg_idm_ecid_wtls9       2 23 43 1 4 9 */
100,	/* OBJ_wap_wsg_idm_ecid_wtls10      2 23 43 1 4 10 */
101,	/* OBJ_wap_wsg_idm_ecid_wtls11      2 23 43 1 4 11 */
102,	/* OBJ_wap_wsg_idm_ecid_wtls12      2 23 43 1 4 12 */
831,	/* OBJ_whirlpool                    1 0 10118 3 0 55 */
571,	/* OBJ_rle_compression              1 1 1 1 666 1 */
903,	/* OBJ_kisa                         1 2 410 200004 */
834,	/* OBJ_id_GostR3411_94_with_GostR3410_2001 1 2 643 2 2 3 */
835,	/* OBJ_id_GostR3411_94_with_GostR3410_94 1 2 643 2 2 4 */
836,	/* OBJ_id_GostR3411_94              1 2 643 2 2 9 */
837,	/* OBJ_id_HMACGostR3411_94          1 2 643 2 2 10 */
838,	/* OBJ_id_GostR3410_2001            1 2 643 2 2 19 */
839,	/* OBJ_id_GostR3410_94              1 2 643 2 2 20 */
840,	/* OBJ_id_Gost28147_89              1 2 643 2 2 21 */
842,	/* OBJ_id_Gost28147_89_MAC          1 2 643 2 2 22 */
843,	/* OBJ_id_GostR3411_94_prf          1 2 643 2 2 23 */
844,	/* OBJ_id_GostR3410_2001DH          1 2 643 2 2 98 */
845,	/* OBJ_id_GostR3410_94DH            1 2 643 2 2 99 */
110,	/* OBJ_rsadsi                       1 2 840 113549 */
16,	/* OBJ_X9cm                         1 2 840 10040 4 */
286,	/* OBJ_id_pkix                      1 3 6 1 5 5 7 */
567,	/* OBJ_mime_mhs_headings            1 3 6 1 7 1 1 */
568,	/* OBJ_mime_mhs_bodies              1 3 6 1 7 1 2 */
452,	/* OBJ_ripemd160WithRSA             1 3 36 3 3 1 2 */
815,	/* OBJ_setAttr_GenCryptgrm          2 23 42 3 3 3 1 */
816,	/* OBJ_setAttr_T2Enc                2 23 42 3 3 4 1 */
817,	/* OBJ_setAttr_T2cleartxt           2 23 42 3 3 4 2 */
818,	/* OBJ_setAttr_TokICCsig            2 23 42 3 3 5 1 */
819,	/* OBJ_setAttr_SecDevSig            2 23 42 3 3 5 2 */
627,	/* OBJ_ucl                          0 9 2342 19200300 */
847,	/* OBJ_id_Gost28147_89_None_KeyMeshing 1 2 643 2 2 14 0 */
846,	/* OBJ_id_Gost28147_89_CryptoPro_KeyMeshing 1 2 643 2 2 14 1 */
872,	/* OBJ_id_GostR3410_94_a            1 2 643 2 2 20 1 */
873,	/* OBJ_id_GostR3410_94_aBis         1 2 643 2 2 20 2 */
874,	/* OBJ_id_GostR3410_94_b            1 2 643 2 2 20 3 */
875,	/* OBJ_id_GostR3410_94_bBis         1 2 643 2 2 20 4 */
848,	/* OBJ_id_GostR3411_94_TestParamSet 1 2 643 2 2 30 0 */
849,	/* OBJ_id_GostR3411_94_CryptoProParamSet 1 2 643 2 2 30 1 */
850,	/* OBJ_id_Gost28147_89_TestParamSet 1 2 643 2 2 31 0 */
851,	/* OBJ_id_Gost28147_89_CryptoPro_A_ParamSet 1 2 643 2 2 31 1 */
852,	/* OBJ_id_Gost28147_89_CryptoPro_B_ParamSet 1 2 643 2 2 31 2 */
853,	/* OBJ_id_Gost28147_89_CryptoPro_C_ParamSet 1 2 643 2 2 31 3 */
854,	/* OBJ_id_Gost28147_89_CryptoPro_D_ParamSet 1 2 643 2 2 31 4 */
855,	/* OBJ_id_Gost28147_89_CryptoPro_Oscar_1_1_ParamSet 1 2 643 2 2 31 5 */
856,	/* OBJ_id_Gost28147_89_CryptoPro_Oscar_1_0_ParamSet 1 2 643 2 2 31 6 */
857,	/* OBJ_id_Gost28147_89_CryptoPro_RIC_1_ParamSet 1 2 643 2 2 31 7 */
858,	/* OBJ_id_GostR3410_94_TestParamSet 1 2 643 2 2 32 0 */
859,	/* OBJ_id_GostR3410_94_CryptoPro_A_ParamSet 1 2 643 2 2 32 2 */
860,	/* OBJ_id_GostR3410_94_CryptoPro_B_ParamSet 1 2 643 2 2 32 3 */
861,	/* OBJ_id_GostR3410_94_CryptoPro_C_ParamSet 1 2 643 2 2 32 4 */
862,	/* OBJ_id_GostR3410_94_CryptoPro_D_ParamSet 1 2 643 2 2 32 5 */
863,	/* OBJ_id_GostR3410_94_CryptoPro_XchA_ParamSet 1 2 643 2 2 33 1 */
864,	/* OBJ_id_GostR3410_94_CryptoPro_XchB_ParamSet 1 2 643 2 2 33 2 */
865,	/* OBJ_id_GostR3410_94_CryptoPro_XchC_ParamSet 1 2 643 2 2 33 3 */
866,	/* OBJ_id_GostR3410_2001_TestParamSet 1 2 643 2 2 35 0 */
867,	/* OBJ_id_GostR3410_2001_CryptoPro_A_ParamSet 1 2 643 2 2 35 1 */
868,	/* OBJ_id_GostR3410_2001_CryptoPro_B_ParamSet 1 2 643 2 2 35 2 */
869,	/* OBJ_id_GostR3410_2001_CryptoPro_C_ParamSet 1 2 643 2 2 35 3 */
870,	/* OBJ_id_GostR3410_2001_CryptoPro_XchA_ParamSet 1 2 643 2 2 36 0 */
871,	/* OBJ_id_GostR3410_2001_CryptoPro_XchB_ParamSet 1 2 643 2 2 36 1 */
111,	/* OBJ_pkcs                         1 2 840 113549 1 */
622,	/* OBJ_hold_instruction_none        1 2 840 10040 2 1 */
623,	/* OBJ_hold_instruction_call_issuer 1 2 840 10040 2 2 */
624,	/* OBJ_hold_instruction_reject      1 2 840 10040 2 3 */
17,	/* OBJ_dsa                          1 2 840 10040 4 1 */
18,	/* OBJ_dsaWithSHA1                  1 2 840 10040 4 3 */
20,	/* OBJ_X9_62_prime_field            1 2 840 10045 1 1 */
21,	/* OBJ_X9_62_characteristic_two_field 1 2 840 10045 1 2 */
26,	/* OBJ_X9_62_id_ecPublicKey         1 2 840 10045 2 1 */
54,	/* OBJ_ecdsa_with_SHA1              1 2 840 10045 4 1 */
55,	/* OBJ_ecdsa_with_Recommended       1 2 840 10045 4 2 */
56,	/* OBJ_ecdsa_with_Specified         1 2 840 10045 4 3 */
287,	/* OBJ_id_pkix_mod                  1 3 6 1 5 5 7 0 */
288,	/* OBJ_id_pe                        1 3 6 1 5 5 7 1 */
289,	/* OBJ_id_qt                        1 3 6 1 5 5 7 2 */
290,	/* OBJ_id_kp                        1 3 6 1 5 5 7 3 */
291,	/* OBJ_id_it                        1 3 6 1 5 5 7 4 */
292,	/* OBJ_id_pkip                      1 3 6 1 5 5 7 5 */
293,	/* OBJ_id_alg                       1 3 6 1 5 5 7 6 */
294,	/* OBJ_id_cmc                       1 3 6 1 5 5 7 7 */
295,	/* OBJ_id_on                        1 3 6 1 5 5 7 8 */
296,	/* OBJ_id_pda                       1 3 6 1 5 5 7 9 */
297,	/* OBJ_id_aca                       1 3 6 1 5 5 7 10 */
298,	/* OBJ_id_qcs                       1 3 6 1 5 5 7 11 */
299,	/* OBJ_id_cct                       1 3 6 1 5 5 7 12 */
300,	/* OBJ_id_ppl                       1 3 6 1 5 5 7 21 */
301,	/* OBJ_id_ad                        1 3 6 1 5 5 7 48 */
569,	/* OBJ_id_hex_partial_message       1 3 6 1 7 1 1 1 */
570,	/* OBJ_id_hex_multipart_message     1 3 6 1 7 1 1 2 */
915,	/* OBJ_brainpool                    1 3 36 3 3 2 8 1 */
541,	/* OBJ_netscape                     2 16 840 1 113730 */
888,	/* OBJ_camellia_128_ecb             0 3 4401 5 3 1 9 1 */
889,	/* OBJ_camellia_128_ofb128          0 3 4401 5 3 1 9 3 */
890,	/* OBJ_camellia_128_cfb128          0 3 4401 5 3 1 9 4 */
891,	/* OBJ_camellia_192_ecb             0 3 4401 5 3 1 9 21 */
892,	/* OBJ_camellia_192_ofb128          0 3 4401 5 3 1 9 23 */
893,	/* OBJ_camellia_192_cfb128          0 3 4401 5 3 1 9 24 */
894,	/* OBJ_camellia_256_ecb             0 3 4401 5 3 1 9 41 */
895,	/* OBJ_camellia_256_ofb128          0 3 4401 5 3 1 9 43 */
896,	/* OBJ_camellia_256_cfb128          0 3 4401 5 3 1 9 44 */
628,	/* OBJ_pilot                        0 9 2342 19200300 100 */
904,	/* OBJ_seed_ecb                     1 2 410 200004 1 3 */
905,	/* OBJ_seed_cbc                     1 2 410 200004 1 4 */
906,	/* OBJ_seed_cfb128                  1 2 410 200004 1 5 */
907,	/* OBJ_seed_ofb128                  1 2 410 200004 1 6 */
879,	/* OBJ_id_GostR3411_94_with_GostR3410_94_cc 1 2 643 2 9 1 3 3 */
880,	/* OBJ_id_GostR3411_94_with_GostR3410_2001_cc 1 2 643 2 9 1 3 4 */
877,	/* OBJ_id_GostR3410_94_cc           1 2 643 2 9 1 5 3 */
878,	/* OBJ_id_GostR3410_2001_cc         1 2 643 2 9 1 5 4 */
876,	/* OBJ_id_Gost28147_89_cc           1 2 643 2 9 1 6 1 */
881,	/* OBJ_id_GostR3410_2001_ParamSet_cc 1 2 643 2 9 1 8 1 */
940,	/* OBJ_id_tc26_gost3410_2012_256    1 2 643 7 1 1 1 1 */
941,	/* OBJ_id_tc26_gost3410_2012_512    1 2 643 7 1 1 1 2 */
935,	/* OBJ_id_tc26_gost3411_2012_256    1 2 643 7 1 1 2 2 */
936,	/* OBJ_id_tc26_gost3411_2012_512    1 2 643 7 1 1 2 3 */
942,	/* OBJ_id_tc26_signwithdigest_gost3410_2012_256 1 2 643 7 1 1 3 2 */
943,	/* OBJ_id_tc26_signwithdigest_gost3410_2012_512 1 2 643 7 1 1 3 3 */
112,	/* OBJ_pkcs1                        1 2 840 113549 1 1 */
125,	/* OBJ_pkcs3                        1 2 840 113549 1 3 */
127,	/* OBJ_pkcs5                        1 2 840 113549 1 5 */
137,	/* OBJ_pkcs7                        1 2 840 113549 1 7 */
144,	/* OBJ_pkcs9                        1 2 840 113549 1 9 */
247,	/* OBJ_md2                          1 2 840 113549 2 2 */
248,	/* OBJ_md4                          1 2 840 113549 2 4 */
249,	/* OBJ_md5                          1 2 840 113549 2 5 */
251,	/* OBJ_hmacWithMD5                  1 2 840 113549 2 6 */
252,	/* OBJ_hmacWithSHA1                 1 2 840 113549 2 7 */
253,	/* OBJ_hmacWithSHA224               1 2 840 113549 2 8 */
254,	/* OBJ_hmacWithSHA256               1 2 840 113549 2 9 */
255,	/* OBJ_hmacWithSHA384               1 2 840 113549 2 10 */
256,	/* OBJ_hmacWithSHA512               1 2 840 113549 2 11 */
257,	/* OBJ_rc2_cbc                      1 2 840 113549 3 2 */
263,	/* OBJ_rc4                          1 2 840 113549 3 4 */
265,	/* OBJ_des_ede3_cbc                 1 2 840 113549 3 7 */
266,	/* OBJ_rc5_cbc                      1 2 840 113549 3 8 */
827,	/* OBJ_des_cdmf                     1 2 840 113549 3 10 */
22,	/* OBJ_X9_62_id_characteristic_two_basis 1 2 840 10045 1 2 3 */
27,	/* OBJ_X9_62_c2pnb163v1             1 2 840 10045 3 0 1 */
28,	/* OBJ_X9_62_c2pnb163v2             1 2 840 10045 3 0 2 */
29,	/* OBJ_X9_62_c2pnb163v3             1 2 840 10045 3 0 3 */
30,	/* OBJ_X9_62_c2pnb176v1             1 2 840 10045 3 0 4 */
31,	/* OBJ_X9_62_c2tnb191v1             1 2 840 10045 3 0 5 */
32,	/* OBJ_X9_62_c2tnb191v2             1 2 840 10045 3 0 6 */
33,	/* OBJ_X9_62_c2tnb191v3             1 2 840 10045 3 0 7 */
34,	/* OBJ_X9_62_c2onb191v4             1 2 840 10045 3 0 8 */
35,	/* OBJ_X9_62_c2onb191v5             1 2 840 10045 3 0 9 */
36,	/* OBJ_X9_62_c2pnb208w1             1 2 840 10045 3 0 10 */
37,	/* OBJ_X9_62_c2tnb239v1             1 2 840 10045 3 0 11 */
38,	/* OBJ_X9_62_c2tnb239v2             1 2 840 10045 3 0 12 */
39,	/* OBJ_X9_62_c2tnb239v3             1 2 840 10045 3 0 13 */
40,	/* OBJ_X9_62_c2onb239v4             1 2 840 10045 3 0 14 */
41,	/* OBJ_X9_62_c2onb239v5             1 2 840 10045 3 0 15 */
42,	/* OBJ_X9_62_c2pnb272w1             1 2 840 10045 3 0 16 */
43,	/* OBJ_X9_62_c2pnb304w1             1 2 840 10045 3 0 17 */
44,	/* OBJ_X9_62_c2tnb359v1             1 2 840 10045 3 0 18 */
45,	/* OBJ_X9_62_c2pnb368w1             1 2 840 10045 3 0 19 */
46,	/* OBJ_X9_62_c2tnb431r1             1 2 840 10045 3 0 20 */
47,	/* OBJ_X9_62_prime192v1             1 2 840 10045 3 1 1 */
48,	/* OBJ_X9_62_prime192v2             1 2 840 10045 3 1 2 */
49,	/* OBJ_X9_62_prime192v3             1 2 840 10045 3 1 3 */
50,	/* OBJ_X9_62_prime239v1             1 2 840 10045 3 1 4 */
51,	/* OBJ_X9_62_prime239v2             1 2 840 10045 3 1 5 */
52,	/* OBJ_X9_62_prime239v3             1 2 840 10045 3 1 6 */
53,	/* OBJ_X9_62_prime256v1             1 2 840 10045 3 1 7 */
57,	/* OBJ_ecdsa_with_SHA224            1 2 840 10045 4 3 1 */
58,	/* OBJ_ecdsa_with_SHA256            1 2 840 10045 4 3 2 */
59,	/* OBJ_ecdsa_with_SHA384            1 2 840 10045 4 3 3 */
60,	/* OBJ_ecdsa_with_SHA512            1 2 840 10045 4 3 4 */
302,	/* OBJ_id_pkix1_explicit_88         1 3 6 1 5 5 7 0 1 */
303,	/* OBJ_id_pkix1_implicit_88         1 3 6 1 5 5 7 0 2 */
304,	/* OBJ_id_pkix1_explicit_93         1 3 6 1 5 5 7 0 3 */
305,	/* OBJ_id_pkix1_implicit_93         1 3 6 1 5 5 7 0 4 */
306,	/* OBJ_id_mod_crmf                  1 3 6 1 5 5 7 0 5 */
307,	/* OBJ_id_mod_cmc                   1 3 6 1 5 5 7 0 6 */
308,	/* OBJ_id_mod_kea_profile_88        1 3 6 1 5 5 7 0 7 */
309,	/* OBJ_id_mod_kea_profile_93        1 3 6 1 5 5 7 0 8 */
310,	/* OBJ_id_mod_cmp                   1 3 6 1 5 5 7 0 9 */
311,	/* OBJ_id_mod_qualified_cert_88     1 3 6 1 5 5 7 0 10 */
312,	/* OBJ_id_mod_qualified_cert_93     1 3 6 1 5 5 7 0 11 */
313,	/* OBJ_id_mod_attribute_cert        1 3 6 1 5 5 7 0 12 */
314,	/* OBJ_id_mod_timestamp_protocol    1 3 6 1 5 5 7 0 13 */
315,	/* OBJ_id_mod_ocsp                  1 3 6 1 5 5 7 0 14 */
316,	/* OBJ_id_mod_dvcs                  1 3 6 1 5 5 7 0 15 */
317,	/* OBJ_id_mod_cmp2000               1 3 6 1 5 5 7 0 16 */
318,	/* OBJ_info_access                  1 3 6 1 5 5 7 1 1 */
319,	/* OBJ_biometricInfo                1 3 6 1 5 5 7 1 2 */
320,	/* OBJ_qcStatements                 1 3 6 1 5 5 7 1 3 */
321,	/* OBJ_ac_auditEntity               1 3 6 1 5 5 7 1 4 */
322,	/* OBJ_ac_targeting                 1 3 6 1 5 5 7 1 5 */
323,	/* OBJ_aaControls                   1 3 6 1 5 5 7 1 6 */
324,	/* OBJ_sbgp_ipAddrBlock             1 3 6 1 5 5 7 1 7 */
325,	/* OBJ_sbgp_autonomousSysNum        1 3 6 1 5 5 7 1 8 */
326,	/* OBJ_sbgp_routerIdentifier        1 3 6 1 5 5 7 1 9 */
327,	/* OBJ_ac_proxying                  1 3 6 1 5 5 7 1 10 */
328,	/* OBJ_sinfo_access                 1 3 6 1 5 5 7 1 11 */
329,	/* OBJ_proxyCertInfo                1 3 6 1 5 5 7 1 14 */
330,	/* OBJ_id_qt_cps                    1 3 6 1 5 5 7 2 1 */
331,	/* OBJ_id_qt_unotice                1 3 6 1 5 5 7 2 2 */
332,	/* OBJ_textNotice                   1 3 6 1 5 5 7 2 3 */
333,	/* OBJ_server_auth                  1 3 6 1 5 5 7 3 1 */
334,	/* OBJ_client_auth                  1 3 6 1 5 5 7 3 2 */
335,	/* OBJ_code_sign                    1 3 6 1 5 5 7 3 3 */
336,	/* OBJ_email_protect                1 3 6 1 5 5 7 3 4 */
337,	/* OBJ_ipsecEndSystem               1 3 6 1 5 5 7 3 5 */
338,	/* OBJ_ipsecTunnel                  1 3 6 1 5 5 7 3 6 */
339,	/* OBJ_ipsecUser                    1 3 6 1 5 5 7 3 7 */
340,	/* OBJ_time_stamp                   1 3 6 1 5 5 7 3 8 */
341,	/* OBJ_OCSP_sign                    1 3 6 1 5 5 7 3 9 */
342,	/* OBJ_dvcs                         1 3 6 1 5 5 7 3 10 */
343,	/* OBJ_id_it_caProtEncCert          1 3 6 1 5 5 7 4 1 */
344,	/* OBJ_id_it_signKeyPairTypes       1 3 6 1 5 5 7 4 2 */
345,	/* OBJ_id_it_encKeyPairTypes        1 3 6 1 5 5 7 4 3 */
346,	/* OBJ_id_it_preferredSymmAlg       1 3 6 1 5 5 7 4 4 */
347,	/* OBJ_id_it_caKeyUpdateInfo        1 3 6 1 5 5 7 4 5 */
348,	/* OBJ_id_it_currentCRL             1 3 6 1 5 5 7 4 6 */
349,	/* OBJ_id_it_unsupportedOIDs        1 3 6 1 5 5 7 4 7 */
350,	/* OBJ_id_it_subscriptionRequest    1 3 6 1 5 5 7 4 8 */
351,	/* OBJ_id_it_subscriptionResponse   1 3 6 1 5 5 7 4 9 */
352,	/* OBJ_id_it_keyPairParamReq        1 3 6 1 5 5 7 4 10 */
353,	/* OBJ_id_it_keyPairParamRep        1 3 6 1 5 5 7 4 11 */
354,	/* OBJ_id_it_revPassphrase          1 3 6 1 5 5 7 4 12 */
355,	/* OBJ_id_it_implicitConfirm        1 3 6 1 5 5 7 4 13 */
356,	/* OBJ_id_it_confirmWaitTime        1 3 6 1 5 5 7 4 14 */
357,	/* OBJ_id_it_origPKIMessage         1 3 6 1 5 5 7 4 15 */
358,	/* OBJ_id_it_suppLangTags           1 3 6 1 5 5 7 4 16 */
359,	/* OBJ_id_regCtrl                   1 3 6 1 5 5 7 5 1 */
360,	/* OBJ_id_regInfo                   1 3 6 1 5 5 7 5 2 */
369,	/* OBJ_id_alg_des40                 1 3 6 1 5 5 7 6 1 */
370,	/* OBJ_id_alg_noSignature           1 3 6 1 5 5 7 6 2 */
371,	/* OBJ_id_alg_dh_sig_hmac_sha1      1 3 6 1 5 5 7 6 3 */
372,	/* OBJ_id_alg_dh_pop                1 3 6 1 5 5 7 6 4 */
373,	/* OBJ_id_cmc_statusInfo            1 3 6 1 5 5 7 7 1 */
374,	/* OBJ_id_cmc_identification        1 3 6 1 5 5 7 7 2 */
375,	/* OBJ_id_cmc_identityProof         1 3 6 1 5 5 7 7 3 */
376,	/* OBJ_id_cmc_dataReturn            1 3 6 1 5 5 7 7 4 */
377,	/* OBJ_id_cmc_transactionId         1 3 6 1 5 5 7 7 5 */
378,	/* OBJ_id_cmc_senderNonce           1 3 6 1 5 5 7 7 6 */
379,	/* OBJ_id_cmc_recipientNonce        1 3 6 1 5 5 7 7 7 */
380,	/* OBJ_id_cmc_addExtensions         1 3 6 1 5 5 7 7 8 */
381,	/* OBJ_id_cmc_encryptedPOP          1 3 6 1 5 5 7 7 9 */
382,	/* OBJ_id_cmc_decryptedPOP          1 3 6 1 5 5 7 7 10 */
383,	/* OBJ_id_cmc_lraPOPWitness         1 3 6 1 5 5 7 7 11 */
384,	/* OBJ_id_cmc_getCert               1 3 6 1 5 5 7 7 15 */
385,	/* OBJ_id_cmc_getCRL                1 3 6 1 5 5 7 7 16 */
386,	/* OBJ_id_cmc_revokeRequest         1 3 6 1 5 5 7 7 17 */
387,	/* OBJ_id_cmc_regInfo               1 3 6 1 5 5 7 7 18 */
388,	/* OBJ_id_cmc_responseInfo          1 3 6 1 5 5 7 7 19 */
389,	/* OBJ_id_cmc_queryPending          1 3 6 1 5 5 7 7 21 */
390,	/* OBJ_id_cmc_popLinkRandom         1 3 6 1 5 5 7 7 22 */
391,	/* OBJ_id_cmc_popLinkWitness        1 3 6 1 5 5 7 7 23 */
392,	/* OBJ_id_cmc_confirmCertAcceptance 1 3 6 1 5 5 7 7 24 */
393,	/* OBJ_id_on_personalData           1 3 6 1 5 5 7 8 1 */
394,	/* OBJ_id_on_permanentIdentifier    1 3 6 1 5 5 7 8 3 */
395,	/* OBJ_id_pda_dateOfBirth           1 3 6 1 5 5 7 9 1 */
396,	/* OBJ_id_pda_placeOfBirth          1 3 6 1 5 5 7 9 2 */
397,	/* OBJ_id_pda_gender                1 3 6 1 5 5 7 9 3 */
398,	/* OBJ_id_pda_countryOfCitizenship  1 3 6 1 5 5 7 9 4 */
399,	/* OBJ_id_pda_countryOfResidence    1 3 6 1 5 5 7 9 5 */
400,	/* OBJ_id_aca_authenticationInfo    1 3 6 1 5 5 7 10 1 */
401,	/* OBJ_id_aca_accessIdentity        1 3 6 1 5 5 7 10 2 */
402,	/* OBJ_id_aca_chargingIdentity      1 3 6 1 5 5 7 10 3 */
403,	/* OBJ_id_aca_group                 1 3 6 1 5 5 7 10 4 */
404,	/* OBJ_id_aca_role                  1 3 6 1 5 5 7 10 5 */
405,	/* OBJ_id_aca_encAttrs              1 3 6 1 5 5 7 10 6 */
406,	/* OBJ_id_qcs_pkixQCSyntax_v1       1 3 6 1 5 5 7 11 1 */
407,	/* OBJ_id_cct_crs                   1 3 6 1 5 5 7 12 1 */
408,	/* OBJ_id_cct_PKIData               1 3 6 1 5 5 7 12 2 */
409,	/* OBJ_id_cct_PKIResponse           1 3 6 1 5 5 7 12 3 */
410,	/* OBJ_id_ppl_anyLanguage           1 3 6 1 5 5 7 21 0 */
411,	/* OBJ_id_ppl_inheritAll            1 3 6 1 5 5 7 21 1 */
412,	/* OBJ_Independent                  1 3 6 1 5 5 7 21 2 */
413,	/* OBJ_ad_OCSP                      1 3 6 1 5 5 7 48 1 */
414,	/* OBJ_ad_ca_issuers                1 3 6 1 5 5 7 48 2 */
415,	/* OBJ_ad_timeStamping              1 3 6 1 5 5 7 48 3 */
416,	/* OBJ_ad_dvcs                      1 3 6 1 5 5 7 48 4 */
417,	/* OBJ_caRepository                 1 3 6 1 5 5 7 48 5 */
 6,	/* OBJ_hmac_md5                     1 3 6 1 5 5 8 1 1 */
 7,	/* OBJ_hmac_sha1                    1 3 6 1 5 5 8 1 2 */
542,	/* OBJ_netscape_cert_extension      2 16 840 1 113730 1 */
543,	/* OBJ_netscape_data_type           2 16 840 1 113730 2 */
629,	/* OBJ_pilotAttributeType           0 9 2342 19200300 100 1 */
630,	/* OBJ_pilotAttributeSyntax         0 9 2342 19200300 100 3 */
631,	/* OBJ_pilotObjectClass             0 9 2342 19200300 100 4 */
632,	/* OBJ_pilotGroups                  0 9 2342 19200300 100 10 */
937,	/* OBJ_id_tc26_gost_3410_2012_512_paramSetA 1 2 643 7 1 2 1 2 1 */
938,	/* OBJ_id_tc26_gost_3410_2012_512_paramSetB 1 2 643 7 1 2 1 2 2 */
939,	/* OBJ_id_tc26_gost_28147_param_Z   1 2 643 7 1 2 5 1 1 */
103,	/* OBJ_cast5_cbc                    1 2 840 113533 7 66 10 */
107,	/* OBJ_pbeWithMD5AndCast5_CBC       1 2 840 113533 7 66 12 */
108,	/* OBJ_id_PasswordBasedMAC          1 2 840 113533 7 66 13 */
109,	/* OBJ_id_DHBasedMac                1 2 840 113533 7 66 30 */
113,	/* OBJ_rsaEncryption                1 2 840 113549 1 1 1 */
114,	/* OBJ_md2WithRSAEncryption         1 2 840 113549 1 1 2 */
115,	/* OBJ_md4WithRSAEncryption         1 2 840 113549 1 1 3 */
116,	/* OBJ_md5WithRSAEncryption         1 2 840 113549 1 1 4 */
117,	/* OBJ_sha1WithRSAEncryption        1 2 840 113549 1 1 5 */
828,	/* OBJ_rsaOAEPEncryptionSET         1 2 840 113549 1 1 6 */
118,	/* OBJ_rsaesOaep                    1 2 840 113549 1 1 7 */
119,	/* OBJ_mgf1                         1 2 840 113549 1 1 8 */
120,	/* OBJ_rsassaPss                    1 2 840 113549 1 1 10 */
121,	/* OBJ_sha256WithRSAEncryption      1 2 840 113549 1 1 11 */
122,	/* OBJ_sha384WithRSAEncryption      1 2 840 113549 1 1 12 */
123,	/* OBJ_sha512WithRSAEncryption      1 2 840 113549 1 1 13 */
124,	/* OBJ_sha224WithRSAEncryption      1 2 840 113549 1 1 14 */
126,	/* OBJ_dhKeyAgreement               1 2 840 113549 1 3 1 */
128,	/* OBJ_pbeWithMD2AndDES_CBC         1 2 840 113549 1 5 1 */
129,	/* OBJ_pbeWithMD5AndDES_CBC         1 2 840 113549 1 5 3 */
130,	/* OBJ_pbeWithMD2AndRC2_CBC         1 2 840 113549 1 5 4 */
131,	/* OBJ_pbeWithMD5AndRC2_CBC         1 2 840 113549 1 5 6 */
132,	/* OBJ_pbeWithSHA1AndDES_CBC        1 2 840 113549 1 5 10 */
133,	/* OBJ_pbeWithSHA1AndRC2_CBC        1 2 840 113549 1 5 11 */
134,	/* OBJ_id_pbkdf2                    1 2 840 113549 1 5 12 */
135,	/* OBJ_pbes2                        1 2 840 113549 1 5 13 */
136,	/* OBJ_pbmac1                       1 2 840 113549 1 5 14 */
138,	/* OBJ_pkcs7_data                   1 2 840 113549 1 7 1 */
139,	/* OBJ_pkcs7_signed                 1 2 840 113549 1 7 2 */
140,	/* OBJ_pkcs7_enveloped              1 2 840 113549 1 7 3 */
141,	/* OBJ_pkcs7_signedAndEnveloped     1 2 840 113549 1 7 4 */
142,	/* OBJ_pkcs7_digest                 1 2 840 113549 1 7 5 */
143,	/* OBJ_pkcs7_encrypted              1 2 840 113549 1 7 6 */
145,	/* OBJ_pkcs9_emailAddress           1 2 840 113549 1 9 1 */
146,	/* OBJ_pkcs9_unstructuredName       1 2 840 113549 1 9 2 */
147,	/* OBJ_pkcs9_contentType            1 2 840 113549 1 9 3 */
148,	/* OBJ_pkcs9_messageDigest          1 2 840 113549 1 9 4 */
149,	/* OBJ_pkcs9_signingTime            1 2 840 113549 1 9 5 */
150,	/* OBJ_pkcs9_countersignature       1 2 840 113549 1 9 6 */
151,	/* OBJ_pkcs9_challengePassword      1 2 840 113549 1 9 7 */
152,	/* OBJ_pkcs9_unstructuredAddress    1 2 840 113549 1 9 8 */
153,	/* OBJ_pkcs9_extCertAttributes      1 2 840 113549 1 9 9 */
154,	/* OBJ_ext_req                      1 2 840 113549 1 9 14 */
155,	/* OBJ_SMIMECapabilities            1 2 840 113549 1 9 15 */
156,	/* OBJ_SMIME                        1 2 840 113549 1 9 16 */
228,	/* OBJ_friendlyName                 1 2 840 113549 1 9 20 */
229,	/* OBJ_localKeyID                   1 2 840 113549 1 9 21 */
23,	/* OBJ_X9_62_onBasis                1 2 840 10045 1 2 3 1 */
24,	/* OBJ_X9_62_tpBasis                1 2 840 10045 1 2 3 2 */
25,	/* OBJ_X9_62_ppBasis                1 2 840 10045 1 2 3 3 */
230,	/* OBJ_ms_csp_name                  1 3 6 1 4 1 311 17 1 */
231,	/* OBJ_LocalKeySet                  1 3 6 1 4 1 311 17 2 */
565,	/* OBJ_dcObject                     1 3 6 1 4 1 1466 344 */
282,	/* OBJ_bf_cbc                       1 3 6 1 4 1 3029 1 2 */
361,	/* OBJ_id_regCtrl_regToken          1 3 6 1 5 5 7 5 1 1 */
362,	/* OBJ_id_regCtrl_authenticator     1 3 6 1 5 5 7 5 1 2 */
363,	/* OBJ_id_regCtrl_pkiPublicationInfo 1 3 6 1 5 5 7 5 1 3 */
364,	/* OBJ_id_regCtrl_pkiArchiveOptions 1 3 6 1 5 5 7 5 1 4 */
365,	/* OBJ_id_regCtrl_oldCertID         1 3 6 1 5 5 7 5 1 5 */
366,	/* OBJ_id_regCtrl_protocolEncrKey   1 3 6 1 5 5 7 5 1 6 */
367,	/* OBJ_id_regInfo_utf8Pairs         1 3 6 1 5 5 7 5 2 1 */
368,	/* OBJ_id_regInfo_certReq           1 3 6 1 5 5 7 5 2 2 */
418,	/* OBJ_id_pkix_OCSP_basic           1 3 6 1 5 5 7 48 1 1 */
419,	/* OBJ_id_pkix_OCSP_Nonce           1 3 6 1 5 5 7 48 1 2 */
420,	/* OBJ_id_pkix_OCSP_CrlID           1 3 6 1 5 5 7 48 1 3 */
421,	/* OBJ_id_pkix_OCSP_acceptableResponses 1 3 6 1 5 5 7 48 1 4 */
422,	/* OBJ_id_pkix_OCSP_noCheck         1 3 6 1 5 5 7 48 1 5 */
423,	/* OBJ_id_pkix_OCSP_archiveCutoff   1 3 6 1 5 5 7 48 1 6 */
424,	/* OBJ_id_pkix_OCSP_serviceLocator  1 3 6 1 5 5 7 48 1 7 */
425,	/* OBJ_id_pkix_OCSP_extendedStatus  1 3 6 1 5 5 7 48 1 8 */
426,	/* OBJ_id_pkix_OCSP_valid           1 3 6 1 5 5 7 48 1 9 */
427,	/* OBJ_id_pkix_OCSP_path            1 3 6 1 5 5 7 48 1 10 */
428,	/* OBJ_id_pkix_OCSP_trustRoot       1 3 6 1 5 5 7 48 1 11 */
916,	/* OBJ_brainpoolP160r1              1 3 36 3 3 2 8 1 1 1 */
917,	/* OBJ_brainpoolP160t1              1 3 36 3 3 2 8 1 1 2 */
918,	/* OBJ_brainpoolP192r1              1 3 36 3 3 2 8 1 1 3 */
919,	/* OBJ_brainpoolP192t1              1 3 36 3 3 2 8 1 1 4 */
920,	/* OBJ_brainpoolP224r1              1 3 36 3 3 2 8 1 1 5 */
921,	/* OBJ_brainpoolP224t1              1 3 36 3 3 2 8 1 1 6 */
922,	/* OBJ_brainpoolP256r1              1 3 36 3 3 2 8 1 1 7 */
923,	/* OBJ_brainpoolP256t1              1 3 36 3 3 2 8 1 1 8 */
924,	/* OBJ_brainpoolP320r1              1 3 36 3 3 2 8 1 1 9 */
925,	/* OBJ_brainpoolP320t1              1 3 36 3 3 2 8 1 1 10 */
926,	/* OBJ_brainpoolP384r1              1 3 36 3 3 2 8 1 1 11 */
927,	/* OBJ_brainpoolP384t1              1 3 36 3 3 2 8 1 1 12 */
928,	/* OBJ_brainpoolP512r1              1 3 36 3 3 2 8 1 1 13 */
929,	/* OBJ_brainpoolP512t1              1 3 36 3 3 2 8 1 1 14 */
573,	/* OBJ_aes_128_ecb                  2 16 840 1 101 3 4 1 1 */
574,	/* OBJ_aes_128_cbc                  2 16 840 1 101 3 4 1 2 */
575,	/* OBJ_aes_128_ofb128               2 16 840 1 101 3 4 1 3 */
576,	/* OBJ_aes_128_cfb128               2 16 840 1 101 3 4 1 4 */
577,	/* OBJ_id_aes128_wrap               2 16 840 1 101 3 4 1 5 */
578,	/* OBJ_aes_128_gcm                  2 16 840 1 101 3 4 1 6 */
579,	/* OBJ_aes_128_ccm                  2 16 840 1 101 3 4 1 7 */
580,	/* OBJ_id_aes128_wrap_pad           2 16 840 1 101 3 4 1 8 */
581,	/* OBJ_aes_192_ecb                  2 16 840 1 101 3 4 1 21 */
582,	/* OBJ_aes_192_cbc                  2 16 840 1 101 3 4 1 22 */
583,	/* OBJ_aes_192_ofb128               2 16 840 1 101 3 4 1 23 */
584,	/* OBJ_aes_192_cfb128               2 16 840 1 101 3 4 1 24 */
585,	/* OBJ_id_aes192_wrap               2 16 840 1 101 3 4 1 25 */
586,	/* OBJ_aes_192_gcm                  2 16 840 1 101 3 4 1 26 */
587,	/* OBJ_aes_192_ccm                  2 16 840 1 101 3 4 1 27 */
588,	/* OBJ_id_aes192_wrap_pad           2 16 840 1 101 3 4 1 28 */
589,	/* OBJ_aes_256_ecb                  2 16 840 1 101 3 4 1 41 */
590,	/* OBJ_aes_256_cbc                  2 16 840 1 101 3 4 1 42 */
591,	/* OBJ_aes_256_ofb128               2 16 840 1 101 3 4 1 43 */
592,	/* OBJ_aes_256_cfb128               2 16 840 1 101 3 4 1 44 */
593,	/* OBJ_id_aes256_wrap               2 16 840 1 101 3 4 1 45 */
594,	/* OBJ_aes_256_gcm                  2 16 840 1 101 3 4 1 46 */
595,	/* OBJ_aes_256_ccm                  2 16 840 1 101 3 4 1 47 */
596,	/* OBJ_id_aes256_wrap_pad           2 16 840 1 101 3 4 1 48 */
612,	/* OBJ_speck_128_cbc                2 16 840 1 101 3 4 2 1 */
615,	/* OBJ_sha256                       2 16 840 1 101 3 4 2 1 */
613,	/* OBJ_speck_192_cbc                2 16 840 1 101 3 4 2 2 */
616,	/* OBJ_sha384                       2 16 840 1 101 3 4 2 2 */
614,	/* OBJ_speck_256_cbc                2 16 840 1 101 3 4 2 3 */
617,	/* OBJ_sha512                       2 16 840 1 101 3 4 2 3 */
618,	/* OBJ_sha224                       2 16 840 1 101 3 4 2 4 */
619,	/* OBJ_dsa_with_SHA224              2 16 840 1 101 3 4 3 1 */
620,	/* OBJ_dsa_with_SHA256              2 16 840 1 101 3 4 3 2 */
544,	/* OBJ_netscape_cert_type           2 16 840 1 113730 1 1 */
545,	/* OBJ_netscape_base_url            2 16 840 1 113730 1 2 */
546,	/* OBJ_netscape_revocation_url      2 16 840 1 113730 1 3 */
547,	/* OBJ_netscape_ca_revocation_url   2 16 840 1 113730 1 4 */
548,	/* OBJ_netscape_renewal_url         2 16 840 1 113730 1 7 */
549,	/* OBJ_netscape_ca_policy_url       2 16 840 1 113730 1 8 */
550,	/* OBJ_netscape_ssl_server_name     2 16 840 1 113730 1 12 */
551,	/* OBJ_netscape_comment             2 16 840 1 113730 1 13 */
552,	/* OBJ_netscape_cert_sequence       2 16 840 1 113730 2 5 */
553,	/* OBJ_ns_sgc                       2 16 840 1 113730 4 1 */
650,	/* OBJ_userId                       0 9 2342 19200300 100 1 1 */
651,	/* OBJ_textEncodedORAddress         0 9 2342 19200300 100 1 2 */
652,	/* OBJ_rfc822Mailbox                0 9 2342 19200300 100 1 3 */
653,	/* OBJ_info                         0 9 2342 19200300 100 1 4 */
654,	/* OBJ_favouriteDrink               0 9 2342 19200300 100 1 5 */
655,	/* OBJ_roomNumber                   0 9 2342 19200300 100 1 6 */
656,	/* OBJ_photo                        0 9 2342 19200300 100 1 7 */
657,	/* OBJ_userClass                    0 9 2342 19200300 100 1 8 */
658,	/* OBJ_host                         0 9 2342 19200300 100 1 9 */
659,	/* OBJ_manager                      0 9 2342 19200300 100 1 10 */
660,	/* OBJ_documentIdentifier           0 9 2342 19200300 100 1 11 */
661,	/* OBJ_documentTitle                0 9 2342 19200300 100 1 12 */
662,	/* OBJ_documentVersion              0 9 2342 19200300 100 1 13 */
663,	/* OBJ_documentAuthor               0 9 2342 19200300 100 1 14 */
664,	/* OBJ_documentLocation             0 9 2342 19200300 100 1 15 */
665,	/* OBJ_homeTelephoneNumber          0 9 2342 19200300 100 1 20 */
666,	/* OBJ_secretary                    0 9 2342 19200300 100 1 21 */
667,	/* OBJ_otherMailbox                 0 9 2342 19200300 100 1 22 */
668,	/* OBJ_lastModifiedTime             0 9 2342 19200300 100 1 23 */
669,	/* OBJ_lastModifiedBy               0 9 2342 19200300 100 1 24 */
670,	/* OBJ_domainComponent              0 9 2342 19200300 100 1 25 */
671,	/* OBJ_aRecord                      0 9 2342 19200300 100 1 26 */
672,	/* OBJ_pilotAttributeType27         0 9 2342 19200300 100 1 27 */
673,	/* OBJ_mXRecord                     0 9 2342 19200300 100 1 28 */
674,	/* OBJ_nSRecord                     0 9 2342 19200300 100 1 29 */
675,	/* OBJ_sOARecord                    0 9 2342 19200300 100 1 30 */
676,	/* OBJ_cNAMERecord                  0 9 2342 19200300 100 1 31 */
677,	/* OBJ_associatedDomain             0 9 2342 19200300 100 1 37 */
678,	/* OBJ_associatedName               0 9 2342 19200300 100 1 38 */
679,	/* OBJ_homePostalAddress            0 9 2342 19200300 100 1 39 */
680,	/* OBJ_personalTitle                0 9 2342 19200300 100 1 40 */
681,	/* OBJ_mobileTelephoneNumber        0 9 2342 19200300 100 1 41 */
682,	/* OBJ_pagerTelephoneNumber         0 9 2342 19200300 100 1 42 */
683,	/* OBJ_friendlyCountryName          0 9 2342 19200300 100 1 43 */
684,	/* OBJ_organizationalStatus         0 9 2342 19200300 100 1 45 */
685,	/* OBJ_janetMailbox                 0 9 2342 19200300 100 1 46 */
686,	/* OBJ_mailPreferenceOption         0 9 2342 19200300 100 1 47 */
687,	/* OBJ_buildingName                 0 9 2342 19200300 100 1 48 */
688,	/* OBJ_dSAQuality                   0 9 2342 19200300 100 1 49 */
689,	/* OBJ_singleLevelQuality           0 9 2342 19200300 100 1 50 */
690,	/* OBJ_subtreeMinimumQuality        0 9 2342 19200300 100 1 51 */
691,	/* OBJ_subtreeMaximumQuality        0 9 2342 19200300 100 1 52 */
692,	/* OBJ_personalSignature            0 9 2342 19200300 100 1 53 */
693,	/* OBJ_dITRedirect                  0 9 2342 19200300 100 1 54 */
694,	/* OBJ_audio                        0 9 2342 19200300 100 1 55 */
695,	/* OBJ_documentPublisher            0 9 2342 19200300 100 1 56 */
633,	/* OBJ_iA5StringSyntax              0 9 2342 19200300 100 3 4 */
634,	/* OBJ_caseIgnoreIA5StringSyntax    0 9 2342 19200300 100 3 5 */
635,	/* OBJ_pilotObject                  0 9 2342 19200300 100 4 3 */
636,	/* OBJ_pilotPerson                  0 9 2342 19200300 100 4 4 */
637,	/* OBJ_account                      0 9 2342 19200300 100 4 5 */
638,	/* OBJ_document                     0 9 2342 19200300 100 4 6 */
639,	/* OBJ_room                         0 9 2342 19200300 100 4 7 */
640,	/* OBJ_documentSeries               0 9 2342 19200300 100 4 9 */
641,	/* OBJ_Domain                       0 9 2342 19200300 100 4 13 */
642,	/* OBJ_rFC822localPart              0 9 2342 19200300 100 4 14 */
643,	/* OBJ_dNSDomain                    0 9 2342 19200300 100 4 15 */
644,	/* OBJ_domainRelatedObject          0 9 2342 19200300 100 4 17 */
645,	/* OBJ_friendlyCountry              0 9 2342 19200300 100 4 18 */
646,	/* OBJ_simpleSecurityObject         0 9 2342 19200300 100 4 19 */
647,	/* OBJ_pilotOrganization            0 9 2342 19200300 100 4 20 */
648,	/* OBJ_pilotDSA                     0 9 2342 19200300 100 4 21 */
649,	/* OBJ_qualityLabelledData          0 9 2342 19200300 100 4 22 */
930,	/* OBJ_FRP256v1                     1 2 250 1 223 101 256 1 */
157,	/* OBJ_id_smime_mod                 1 2 840 113549 1 9 16 0 */
158,	/* OBJ_id_smime_ct                  1 2 840 113549 1 9 16 1 */
159,	/* OBJ_id_smime_aa                  1 2 840 113549 1 9 16 2 */
160,	/* OBJ_id_smime_alg                 1 2 840 113549 1 9 16 3 */
161,	/* OBJ_id_smime_cd                  1 2 840 113549 1 9 16 4 */
162,	/* OBJ_id_smime_spq                 1 2 840 113549 1 9 16 5 */
163,	/* OBJ_id_smime_cti                 1 2 840 113549 1 9 16 6 */
232,	/* OBJ_x509Certificate              1 2 840 113549 1 9 22 1 */
233,	/* OBJ_sdsiCertificate              1 2 840 113549 1 9 22 2 */
234,	/* OBJ_x509Crl                      1 2 840 113549 1 9 23 1 */
235,	/* OBJ_pbe_WithSHA1And128BitRC4     1 2 840 113549 1 12 1 1 */
236,	/* OBJ_pbe_WithSHA1And40BitRC4      1 2 840 113549 1 12 1 2 */
237,	/* OBJ_pbe_WithSHA1And3_Key_TripleDES_CBC 1 2 840 113549 1 12 1 3 */
238,	/* OBJ_pbe_WithSHA1And2_Key_TripleDES_CBC 1 2 840 113549 1 12 1 4 */
239,	/* OBJ_pbe_WithSHA1And128BitRC2_CBC 1 2 840 113549 1 12 1 5 */
240,	/* OBJ_pbe_WithSHA1And40BitRC2_CBC  1 2 840 113549 1 12 1 6 */
270,	/* OBJ_ms_ext_req                   1 3 6 1 4 1 311 2 1 14 */
271,	/* OBJ_ms_code_ind                  1 3 6 1 4 1 311 2 1 21 */
272,	/* OBJ_ms_code_com                  1 3 6 1 4 1 311 2 1 22 */
273,	/* OBJ_ms_ctl_sign                  1 3 6 1 4 1 311 10 3 1 */
274,	/* OBJ_ms_sgc                       1 3 6 1 4 1 311 10 3 3 */
275,	/* OBJ_ms_efs                       1 3 6 1 4 1 311 10 3 4 */
276,	/* OBJ_ms_smartcard_login           1 3 6 1 4 1 311 20 2 2 */
277,	/* OBJ_ms_upn                       1 3 6 1 4 1 311 20 2 3 */
882,	/* OBJ_camellia_128_cbc             1 2 392 200011 61 1 1 1 2 */
883,	/* OBJ_camellia_192_cbc             1 2 392 200011 61 1 1 1 3 */
884,	/* OBJ_camellia_256_cbc             1 2 392 200011 61 1 1 1 4 */
885,	/* OBJ_id_camellia128_wrap          1 2 392 200011 61 1 1 3 2 */
886,	/* OBJ_id_camellia192_wrap          1 2 392 200011 61 1 1 3 3 */
887,	/* OBJ_id_camellia256_wrap          1 2 392 200011 61 1 1 3 4 */
164,	/* OBJ_id_smime_mod_cms             1 2 840 113549 1 9 16 0 1 */
165,	/* OBJ_id_smime_mod_ess             1 2 840 113549 1 9 16 0 2 */
166,	/* OBJ_id_smime_mod_oid             1 2 840 113549 1 9 16 0 3 */
167,	/* OBJ_id_smime_mod_msg_v3          1 2 840 113549 1 9 16 0 4 */
168,	/* OBJ_id_smime_mod_ets_eSignature_88 1 2 840 113549 1 9 16 0 5 */
169,	/* OBJ_id_smime_mod_ets_eSignature_97 1 2 840 113549 1 9 16 0 6 */
170,	/* OBJ_id_smime_mod_ets_eSigPolicy_88 1 2 840 113549 1 9 16 0 7 */
171,	/* OBJ_id_smime_mod_ets_eSigPolicy_97 1 2 840 113549 1 9 16 0 8 */
172,	/* OBJ_id_smime_ct_receipt          1 2 840 113549 1 9 16 1 1 */
173,	/* OBJ_id_smime_ct_authData         1 2 840 113549 1 9 16 1 2 */
174,	/* OBJ_id_smime_ct_publishCert      1 2 840 113549 1 9 16 1 3 */
175,	/* OBJ_id_smime_ct_TSTInfo          1 2 840 113549 1 9 16 1 4 */
176,	/* OBJ_id_smime_ct_TDTInfo          1 2 840 113549 1 9 16 1 5 */
177,	/* OBJ_id_smime_ct_contentInfo      1 2 840 113549 1 9 16 1 6 */
178,	/* OBJ_id_smime_ct_DVCSRequestData  1 2 840 113549 1 9 16 1 7 */
179,	/* OBJ_id_smime_ct_DVCSResponseData 1 2 840 113549 1 9 16 1 8 */
180,	/* OBJ_id_smime_ct_compressedData   1 2 840 113549 1 9 16 1 9 */
181,	/* OBJ_id_ct_asciiTextWithCRLF      1 2 840 113549 1 9 16 1 27 */
182,	/* OBJ_id_smime_aa_receiptRequest   1 2 840 113549 1 9 16 2 1 */
183,	/* OBJ_id_smime_aa_securityLabel    1 2 840 113549 1 9 16 2 2 */
184,	/* OBJ_id_smime_aa_mlExpandHistory  1 2 840 113549 1 9 16 2 3 */
185,	/* OBJ_id_smime_aa_contentHint      1 2 840 113549 1 9 16 2 4 */
186,	/* OBJ_id_smime_aa_msgSigDigest     1 2 840 113549 1 9 16 2 5 */
187,	/* OBJ_id_smime_aa_encapContentType 1 2 840 113549 1 9 16 2 6 */
188,	/* OBJ_id_smime_aa_contentIdentifier 1 2 840 113549 1 9 16 2 7 */
189,	/* OBJ_id_smime_aa_macValue         1 2 840 113549 1 9 16 2 8 */
190,	/* OBJ_id_smime_aa_equivalentLabels 1 2 840 113549 1 9 16 2 9 */
191,	/* OBJ_id_smime_aa_contentReference 1 2 840 113549 1 9 16 2 10 */
192,	/* OBJ_id_smime_aa_encrypKeyPref    1 2 840 113549 1 9 16 2 11 */
193,	/* OBJ_id_smime_aa_signingCertificate 1 2 840 113549 1 9 16 2 12 */
194,	/* OBJ_id_smime_aa_smimeEncryptCerts 1 2 840 113549 1 9 16 2 13 */
195,	/* OBJ_id_smime_aa_timeStampToken   1 2 840 113549 1 9 16 2 14 */
196,	/* OBJ_id_smime_aa_ets_sigPolicyId  1 2 840 113549 1 9 16 2 15 */
197,	/* OBJ_id_smime_aa_ets_commitmentType 1 2 840 113549 1 9 16 2 16 */
198,	/* OBJ_id_smime_aa_ets_signerLocation 1 2 840 113549 1 9 16 2 17 */
199,	/* OBJ_id_smime_aa_ets_signerAttr   1 2 840 113549 1 9 16 2 18 */
200,	/* OBJ_id_smime_aa_ets_otherSigCert 1 2 840 113549 1 9 16 2 19 */
201,	/* OBJ_id_smime_aa_ets_contentTimestamp 1 2 840 113549 1 9 16 2 20 */
202,	/* OBJ_id_smime_aa_ets_CertificateRefs 1 2 840 113549 1 9 16 2 21 */
203,	/* OBJ_id_smime_aa_ets_RevocationRefs 1 2 840 113549 1 9 16 2 22 */
204,	/* OBJ_id_smime_aa_ets_certValues   1 2 840 113549 1 9 16 2 23 */
205,	/* OBJ_id_smime_aa_ets_revocationValues 1 2 840 113549 1 9 16 2 24 */
206,	/* OBJ_id_smime_aa_ets_escTimeStamp 1 2 840 113549 1 9 16 2 25 */
207,	/* OBJ_id_smime_aa_ets_certCRLTimestamp 1 2 840 113549 1 9 16 2 26 */
208,	/* OBJ_id_smime_aa_ets_archiveTimeStamp 1 2 840 113549 1 9 16 2 27 */
209,	/* OBJ_id_smime_aa_signatureType    1 2 840 113549 1 9 16 2 28 */
210,	/* OBJ_id_smime_aa_dvcs_dvc         1 2 840 113549 1 9 16 2 29 */
211,	/* OBJ_id_smime_alg_ESDHwith3DES    1 2 840 113549 1 9 16 3 1 */
212,	/* OBJ_id_smime_alg_ESDHwithRC2     1 2 840 113549 1 9 16 3 2 */
213,	/* OBJ_id_smime_alg_3DESwrap        1 2 840 113549 1 9 16 3 3 */
214,	/* OBJ_id_smime_alg_RC2wrap         1 2 840 113549 1 9 16 3 4 */
215,	/* OBJ_id_smime_alg_ESDH            1 2 840 113549 1 9 16 3 5 */
216,	/* OBJ_id_smime_alg_CMS3DESwrap     1 2 840 113549 1 9 16 3 6 */
217,	/* OBJ_id_smime_alg_CMSRC2wrap      1 2 840 113549 1 9 16 3 7 */
572,	/* OBJ_zlib_compression             1 2 840 113549 1 9 16 3 8 */
218,	/* OBJ_id_alg_PWRI_KEK              1 2 840 113549 1 9 16 3 9 */
219,	/* OBJ_id_smime_cd_ldap             1 2 840 113549 1 9 16 4 1 */
220,	/* OBJ_id_smime_spq_ets_sqt_uri     1 2 840 113549 1 9 16 5 1 */
221,	/* OBJ_id_smime_spq_ets_sqt_unotice 1 2 840 113549 1 9 16 5 2 */
222,	/* OBJ_id_smime_cti_ets_proofOfOrigin 1 2 840 113549 1 9 16 6 1 */
223,	/* OBJ_id_smime_cti_ets_proofOfReceipt 1 2 840 113549 1 9 16 6 2 */
224,	/* OBJ_id_smime_cti_ets_proofOfDelivery 1 2 840 113549 1 9 16 6 3 */
225,	/* OBJ_id_smime_cti_ets_proofOfSender 1 2 840 113549 1 9 16 6 4 */
226,	/* OBJ_id_smime_cti_ets_proofOfApproval 1 2 840 113549 1 9 16 6 5 */
227,	/* OBJ_id_smime_cti_ets_proofOfCreation 1 2 840 113549 1 9 16 6 6 */
241,	/* OBJ_keyBag                       1 2 840 113549 1 12 10 1 1 */
242,	/* OBJ_pkcs8ShroudedKeyBag          1 2 840 113549 1 12 10 1 2 */
243,	/* OBJ_certBag                      1 2 840 113549 1 12 10 1 3 */
244,	/* OBJ_crlBag                       1 2 840 113549 1 12 10 1 4 */
245,	/* OBJ_secretBag                    1 2 840 113549 1 12 10 1 5 */
246,	/* OBJ_safeContentsBag              1 2 840 113549 1 12 10 1 6 */
278,	/* OBJ_idea_cbc                     1 3 6 1 4 1 188 7 1 1 2 */
};


/*	$OpenBSD: asn1test.c,v 1.1 2014/07/13 16:03:54 jsing Exp $	*/
/*
 * Copyright (c) 2014 Joel Sing <jsing@openbsd.org>
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

#include <err.h>
#include <stdlib.h>

#include <openssl/bio.h>
#include <openssl/err.h>
#include <openssl/ssl.h>
#include <openssl/tls1.h>

int i2d_SSL_SESSION(SSL_SESSION *in, unsigned char **pp);
SSL_SESSION *d2i_SSL_SESSION(SSL_SESSION **a, const unsigned char **pp,
    long length);

struct ssl_asn1_test {
	SSL_SESSION session;
	const unsigned char asn1[512];
	int asn1_len;
};

unsigned char tlsext_tick[] = {
	0x43, 0x56, 0x45, 0x2d, 0x32, 0x30, 0x31, 0x34,
	0x2d, 0x30, 0x31, 0x36, 0x30, 0x3a, 0x20, 0x37,
	0x74, 0x68, 0x20, 0x41, 0x70, 0x72, 0x69, 0x6c,
	0x20, 0x32, 0x30, 0x31, 0x34, 0x0a, 0x43, 0x56,
	0x45, 0x2d, 0x32, 0x30, 0x31, 0x30, 0x2d, 0x35,
	0x32, 0x39, 0x38, 0x3a, 0x20, 0x38, 0x74, 0x68,
	0x20, 0x41, 0x70, 0x72, 0x69, 0x6c, 0x20, 0x32,
	0x30, 0x31, 0x34, 0x0a, 0x43, 0x56, 0x45, 0x2d,
	0x32, 0x30, 0x31, 0x34, 0x2d, 0x30, 0x31, 0x39,
	0x38, 0x3a, 0x20, 0x32, 0x31, 0x73, 0x74, 0x20,
	0x41, 0x70, 0x72, 0x69, 0x6c, 0x20, 0x32, 0x30,
	0x31, 0x34, 0x0a, 0x43, 0x56, 0x45, 0x2d, 0x32,
	0x30, 0x31, 0x34, 0x2d, 0x33, 0x34, 0x37, 0x30,
	0x3a, 0x20, 0x33, 0x30, 0x74, 0x68, 0x20, 0x4d,
	0x61, 0x79, 0x20, 0x32, 0x30, 0x31, 0x34, 0x0a,
	0x43, 0x56, 0x45, 0x2d, 0x32, 0x30, 0x31, 0x34,
	0x2d, 0x30, 0x31, 0x39, 0x35, 0x3a, 0x20, 0x35,
	0x74, 0x68, 0x20, 0x4a, 0x75, 0x6e, 0x65, 0x20,
	0x32, 0x30, 0x31, 0x34, 0x0a, 0x43, 0x56, 0x45,
	0x2d, 0x32, 0x30, 0x31, 0x34, 0x2d, 0x30, 0x32,
	0x32, 0x31, 0x3a, 0x20, 0x35, 0x74, 0x68, 0x20,
	0x4a, 0x75, 0x6e, 0x65, 0x20, 0x32, 0x30, 0x31,
	0x34, 0x0a, 0x43, 0x56, 0x45, 0x2d, 0x32, 0x30,
	0x31, 0x34, 0x2d, 0x30, 0x32, 0x32, 0x34, 0x3a,
	0x20, 0x35, 0x74, 0x68, 0x20, 0x4a, 0x75, 0x6e,
	0x65, 0x20, 0x32, 0x30, 0x31, 0x34, 0x0a,
};

struct ssl_asn1_test ssl_asn1_tests[] = {
	{
		{
			.cipher_id = 0x03000000L | 1,
			.ssl_version = TLS1_2_VERSION,
		},
		{
			0x30, 0x13, 0x02, 0x01, 0x01, 0x02, 0x02, 0x03,
			0x03, 0x04, 0x02, 0x00, 0x01, 0x04, 0x00, 0x04,
			0x00, 0xa4, 0x02, 0x04, 0x00,
		},
		21,
	},
	{
		{
			.cipher_id = 0x03000000L | 1,
			.ssl_version = TLS1_2_VERSION,
			.sid_ctx = "abcdefghijklmnopqrstuvwxyz",
			.master_key_length = 26,
			.session_id = "0123456789",
			.session_id_length = 10,
			.sid_ctx = "abcdefghijklmnopqrstuvwxyz",
			.sid_ctx_length = 26,
		},
		{
			0x30, 0x51, 0x02, 0x01, 0x01, 0x02, 0x02, 0x03,
			0x03, 0x04, 0x02, 0x00, 0x01, 0x04, 0x0a, 0x30,
			0x31, 0x32, 0x33, 0x34, 0x35, 0x36, 0x37, 0x38,
			0x39, 0x04, 0x1a, 0x00, 0x00, 0x00, 0x00, 0x00,
			0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
			0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
			0x00, 0x00, 0x00, 0x00, 0x00, 0xa4, 0x1c, 0x04,
			0x1a, 0x61, 0x62, 0x63, 0x64, 0x65, 0x66, 0x67,
			0x68, 0x69, 0x6a, 0x6b, 0x6c, 0x6d, 0x6e, 0x6f,
			0x70, 0x71, 0x72, 0x73, 0x74, 0x75, 0x76, 0x77,
			0x78, 0x79, 0x7a,
		},
		83,
	},
	{
		{
			.cipher_id = 0x03000000L | 1,
			.ssl_version = TLS1_2_VERSION,
			.sid_ctx = "abcdefghijklmnopqrstuvwxyz",
			.master_key_length = 26,
			.session_id = "0123456789",
			.session_id_length = 10,
			.sid_ctx = "abcdefghijklmnopqrstuvwxyz",
			.sid_ctx_length = 26,
			.time = 1405266069,
			.timeout = 5,
			.verify_result = 42,
			.tlsext_hostname = "libressl.openbsd.org",
			.tlsext_tick_lifetime_hint = 0x7abbccdd,
			.tlsext_tick = tlsext_tick,
			.tlsext_ticklen = 207,
		},
		{
			0x30, 0x82, 0x01, 0x58, 0x02, 0x01, 0x01, 0x02,
			0x02, 0x03, 0x03, 0x04, 0x02, 0x00, 0x01, 0x04,
			0x0a, 0x30, 0x31, 0x32, 0x33, 0x34, 0x35, 0x36,
			0x37, 0x38, 0x39, 0x04, 0x1a, 0x00, 0x00, 0x00,
			0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
			0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
			0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xa1,
			0x06, 0x02, 0x04, 0x53, 0xc2, 0xa8, 0x95, 0xa2,
			0x03, 0x02, 0x01, 0x05, 0xa4, 0x1c, 0x04, 0x1a,
			0x61, 0x62, 0x63, 0x64, 0x65, 0x66, 0x67, 0x68,
			0x69, 0x6a, 0x6b, 0x6c, 0x6d, 0x6e, 0x6f, 0x70,
			0x71, 0x72, 0x73, 0x74, 0x75, 0x76, 0x77, 0x78,
			0x79, 0x7a, 0xa5, 0x03, 0x02, 0x01, 0x2a, 0xa6,
			0x16, 0x04, 0x14, 0x6c, 0x69, 0x62, 0x72, 0x65,
			0x73, 0x73, 0x6c, 0x2e, 0x6f, 0x70, 0x65, 0x6e,
			0x62, 0x73, 0x64, 0x2e, 0x6f, 0x72, 0x67, 0xa9,
			0x06, 0x02, 0x04, 0x7a, 0xbb, 0xcc, 0xdd, 0xaa,
			0x81, 0xd2, 0x04, 0x81, 0xcf, 0x43, 0x56, 0x45,
			0x2d, 0x32, 0x30, 0x31, 0x34, 0x2d, 0x30, 0x31,
			0x36, 0x30, 0x3a, 0x20, 0x37, 0x74, 0x68, 0x20,
			0x41, 0x70, 0x72, 0x69, 0x6c, 0x20, 0x32, 0x30,
			0x31, 0x34, 0x0a, 0x43, 0x56, 0x45, 0x2d, 0x32,
			0x30, 0x31, 0x30, 0x2d, 0x35, 0x32, 0x39, 0x38,
			0x3a, 0x20, 0x38, 0x74, 0x68, 0x20, 0x41, 0x70,
			0x72, 0x69, 0x6c, 0x20, 0x32, 0x30, 0x31, 0x34,
			0x0a, 0x43, 0x56, 0x45, 0x2d, 0x32, 0x30, 0x31,
			0x34, 0x2d, 0x30, 0x31, 0x39, 0x38, 0x3a, 0x20,
			0x32, 0x31, 0x73, 0x74, 0x20, 0x41, 0x70, 0x72,
			0x69, 0x6c, 0x20, 0x32, 0x30, 0x31, 0x34, 0x0a,
			0x43, 0x56, 0x45, 0x2d, 0x32, 0x30, 0x31, 0x34,
			0x2d, 0x33, 0x34, 0x37, 0x30, 0x3a, 0x20, 0x33,
			0x30, 0x74, 0x68, 0x20, 0x4d, 0x61, 0x79, 0x20,
			0x32, 0x30, 0x31, 0x34, 0x0a, 0x43, 0x56, 0x45,
			0x2d, 0x32, 0x30, 0x31, 0x34, 0x2d, 0x30, 0x31,
			0x39, 0x35, 0x3a, 0x20, 0x35, 0x74, 0x68, 0x20,
			0x4a, 0x75, 0x6e, 0x65, 0x20, 0x32, 0x30, 0x31,
			0x34, 0x0a, 0x43, 0x56, 0x45, 0x2d, 0x32, 0x30,
			0x31, 0x34, 0x2d, 0x30, 0x32, 0x32, 0x31, 0x3a,
			0x20, 0x35, 0x74, 0x68, 0x20, 0x4a, 0x75, 0x6e,
			0x65, 0x20, 0x32, 0x30, 0x31, 0x34, 0x0a, 0x43,
			0x56, 0x45, 0x2d, 0x32, 0x30, 0x31, 0x34, 0x2d,
			0x30, 0x32, 0x32, 0x34, 0x3a, 0x20, 0x35, 0x74,
			0x68, 0x20, 0x4a, 0x75, 0x6e, 0x65, 0x20, 0x32,
			0x30, 0x31, 0x34, 0x0a,
		},
		348,
	},
};

#define N_SSL_ASN1_TESTS \
    (sizeof(ssl_asn1_tests) / sizeof(*ssl_asn1_tests))

static int
session_strcmp(const unsigned char *o1, const unsigned char *o2, size_t len)
{
	if (o1 == NULL && o2 == NULL)
		return (0);
	if (o1 == NULL || o2 == NULL)
		return (1);
	return memcmp(o1, o2, len);
}

static int
session_cmp(SSL_SESSION *s1, SSL_SESSION *s2)
{
	/* Compare two sessions, from the perspective of ASN1. */
	if (s1->ssl_version != s2->ssl_version) {
		fprintf(stderr, "ssl_version differs: %i != %i\n",
		    s1->ssl_version, s2->ssl_version);
		return (1);
	}
	if (s1->cipher_id != s2->cipher_id) {
		fprintf(stderr, "cipher_id differs: %li != %li\n",
		    s1->cipher_id, s2->cipher_id);
		return (1);
	}

	if (s1->master_key_length != s2->master_key_length) {
		fprintf(stderr, "master_key_length differs: %i != %i\n",
		    s1->master_key_length, s2->master_key_length);
		return (1);
	}
	if (session_strcmp(s1->master_key, s2->master_key,
	    s1->master_key_length) != 0) {
		fprintf(stderr, "master_key differs\n");
		return (1);
	}

	if (s1->session_id_length != s2->session_id_length) {
		fprintf(stderr, "session_id_length differs: %i != %i\n",
		    s1->session_id_length, s2->session_id_length);
		return (1);
	}
	if (session_strcmp(s1->session_id, s2->session_id,
	    s1->session_id_length) != 0) {
		fprintf(stderr, "session_id differs\n");
		return (1);
	}

	if (s1->sid_ctx_length != s2->sid_ctx_length) {
		fprintf(stderr, "sid_ctx_length differs: %i != %i\n",
		    s1->sid_ctx_length, s2->sid_ctx_length);
		return (1);
	}
	if (session_strcmp(s1->sid_ctx, s2->sid_ctx,
	    s1->sid_ctx_length) != 0) {
		fprintf(stderr, "sid_ctx differs\n");
		return (1);
	}

	/* d2i_SSL_SESSION uses the current time if decoding a zero value. */
	if ((s1->time != s2->time) && s1->time != 0 && s2->time != 0) {
		fprintf(stderr, "time differs: %lli != %lli\n",
		    (long long)s1->time, (long long)s2->time);
		return (1);
	}
	/* d2i_SSL_SESSION uses a timeout of 3 if decoding a zero value. */
	if ((s1->timeout != s2->timeout) &&
	    s1->timeout != 3 && s2->timeout != 3) {
		fprintf(stderr, "timeout differs: %li != %li\n",
		    s1->timeout, s2->timeout);
		return (1);
	}

	/* Ensure that a certificate is or is not present in both. */
	if ((s1->peer != NULL || s2->peer != NULL) &&
	    (s1->peer == NULL || s2->peer == NULL)) {
		fprintf(stderr, "peer differs\n");
		return (1);
	}
	
	if (s1->verify_result != s2->verify_result) {
		fprintf(stderr, "verify_result differs: %li != %li\n",
		    s1->verify_result, s2->verify_result);
		return (1);
	}

	if (session_strcmp(s1->tlsext_hostname, s2->tlsext_hostname,
	    (s1->tlsext_hostname ? strlen(s1->tlsext_hostname) : 0)) != 0) {
		fprintf(stderr, "sid_ctx differs\n");
		return (1);
	}
	if (s1->tlsext_tick_lifetime_hint != s2->tlsext_tick_lifetime_hint) {
		fprintf(stderr, "tlsext_tick_lifetime_hint differs: "
		    "%li != %li\n", s1->tlsext_tick_lifetime_hint,
		    s2->tlsext_tick_lifetime_hint);
		return (1);
	}
	if (s1->tlsext_ticklen != s2->tlsext_ticklen) {
		fprintf(stderr, "tlsext_ticklen differs: %zu != %zu\n",
		    s1->tlsext_ticklen, s2->tlsext_ticklen);
		return (1);
	}
	if (session_strcmp(s1->tlsext_tick, s2->tlsext_tick,
	    s1->tlsext_ticklen) != 0) {
		fprintf(stderr, "tlsext_tick differs\n");
		return (1);
	}

	return (0);
}

static int
do_ssl_asn1_test(int test_no, struct ssl_asn1_test *sat)
{
	SSL_SESSION session, *sp = NULL;
	unsigned char *ap, *asn1 = NULL;
	const unsigned char *pp;
	int i, len, rv = 1;

	len = i2d_SSL_SESSION(&sat->session, NULL);
	if (len != sat->asn1_len) {
		fprintf(stderr, "FAIL: test %i returned ASN1 length %i, "
		    "want %i\n", test_no, len, sat->asn1_len);
		goto failed;
	}

	if ((asn1 = malloc(len)) == NULL)
		errx(1, "failed to allocate memory");

	ap = asn1;
	len = i2d_SSL_SESSION(&sat->session, &ap);
	if ((ap - asn1) > len) {
		fprintf(stderr, "FAIL: test %i overflowed ticket buffer "
		    "(%i > %i)\n", test_no, (int)(ap - asn1), len);
		goto failed;
	}

	/*
	 * Length *should* be the same, but check it again since the code
	 * path is different.
	 */
	if (len != sat->asn1_len) {
		fprintf(stderr, "FAIL: test %i returned ASN1 length %i, "
		    "want %i\n", test_no, len, sat->asn1_len);
		goto failed;
	}

	if (memcmp(asn1, &sat->asn1, len) != 0) {
		fprintf(stderr, "FAIL: test %i - encoding differs:\n", test_no);
		fprintf(stderr, "encoding:\n");
		for (i = 1; i <= len; i++) {
			fprintf(stderr, " 0x%02hhx,", asn1[i - 1]);
			if (i % 8 == 0)
				fprintf(stderr, "\n");
		}
		fprintf(stderr, "\n");
		fprintf(stderr, "test data:\n");
		for (i = 1; i <= sat->asn1_len; i++) {
			fprintf(stderr, " 0x%02hhx,", sat->asn1[i - 1]);
			if (i % 8 == 0)
				fprintf(stderr, "\n");
		}
		fprintf(stderr, "\n");
		goto failed;
	}

	sp = &session;
	memset(sp, 0, sizeof(*sp));
	pp = sat->asn1;

	if ((sp = d2i_SSL_SESSION(&sp, &pp, sat->asn1_len)) == NULL) {
		fprintf(stderr, "FAIL: test %i - decoding failed\n", test_no);
		goto failed;
	}

	if (session_cmp(sp, &sat->session) != 0) {
		fprintf(stderr, "FAIL: test %i - decoding differs\n", test_no);
		goto failed;
	}

	rv = 0;

failed:
	ERR_print_errors(BIO_new_fp(stderr, BIO_NOCLOSE));

	free(asn1);

	return (rv);
}

int
main(int argc, char **argv)
{
	int failed = 0;
	size_t i;

	SSL_library_init();
	SSL_load_error_strings();

	for (i = 0; i < N_SSL_ASN1_TESTS; i++)
		failed += do_ssl_asn1_test(i, &ssl_asn1_tests[i]);

	return (failed);
}

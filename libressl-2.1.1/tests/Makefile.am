include $(top_srcdir)/Makefile.am.common

AM_CPPFLAGS += -I $(top_srcdir)/crypto/modes
AM_CPPFLAGS += -I $(top_srcdir)/crypto/asn1

TESTS =
check_PROGRAMS =
EXTRA_DIST =

if !NO_ARC4RANDOM_BUF
TESTS += pidwraptest.sh
endif
check_PROGRAMS += aeadtest
aeadtest_SOURCES = aeadtest.c
aeadtest_LDADD = $(top_builddir)/ssl/libssl.la
aeadtest_LDADD += $(top_builddir)/crypto/libcrypto.la
TESTS += aes_wrap
check_PROGRAMS += aes_wrap
aes_wrap_SOURCES = aes_wrap.c
aes_wrap_LDADD = $(top_builddir)/ssl/libssl.la
aes_wrap_LDADD += $(top_builddir)/crypto/libcrypto.la
check_PROGRAMS += arc4randomforktest
arc4randomforktest_SOURCES = arc4randomforktest.c
arc4randomforktest_LDADD = $(top_builddir)/ssl/libssl.la
arc4randomforktest_LDADD += $(top_builddir)/crypto/libcrypto.la
TESTS += asn1test
check_PROGRAMS += asn1test
asn1test_SOURCES = asn1test.c
asn1test_LDADD = $(top_builddir)/ssl/libssl.la
asn1test_LDADD += $(top_builddir)/crypto/libcrypto.la
TESTS += base64test
check_PROGRAMS += base64test
base64test_SOURCES = base64test.c
base64test_LDADD = $(top_builddir)/ssl/libssl.la
base64test_LDADD += $(top_builddir)/crypto/libcrypto.la
TESTS += bftest
check_PROGRAMS += bftest
bftest_SOURCES = bftest.c
bftest_LDADD = $(top_builddir)/ssl/libssl.la
bftest_LDADD += $(top_builddir)/crypto/libcrypto.la
check_PROGRAMS += biotest
biotest_SOURCES = biotest.c
biotest_LDADD = $(top_builddir)/ssl/libssl.la
biotest_LDADD += $(top_builddir)/crypto/libcrypto.la
TESTS += bntest
check_PROGRAMS += bntest
bntest_SOURCES = bntest.c
bntest_LDADD = $(top_builddir)/ssl/libssl.la
bntest_LDADD += $(top_builddir)/crypto/libcrypto.la
TESTS += casttest
check_PROGRAMS += casttest
casttest_SOURCES = casttest.c
casttest_LDADD = $(top_builddir)/ssl/libssl.la
casttest_LDADD += $(top_builddir)/crypto/libcrypto.la
TESTS += chachatest
check_PROGRAMS += chachatest
chachatest_SOURCES = chachatest.c
chachatest_LDADD = $(top_builddir)/ssl/libssl.la
chachatest_LDADD += $(top_builddir)/crypto/libcrypto.la
TESTS += cts128test
check_PROGRAMS += cts128test
cts128test_SOURCES = cts128test.c
cts128test_LDADD = $(top_builddir)/ssl/libssl.la
cts128test_LDADD += $(top_builddir)/crypto/libcrypto.la
TESTS += destest
check_PROGRAMS += destest
destest_SOURCES = destest.c
destest_LDADD = $(top_builddir)/ssl/libssl.la
destest_LDADD += $(top_builddir)/crypto/libcrypto.la
TESTS += dhtest
check_PROGRAMS += dhtest
dhtest_SOURCES = dhtest.c
dhtest_LDADD = $(top_builddir)/ssl/libssl.la
dhtest_LDADD += $(top_builddir)/crypto/libcrypto.la
TESTS += dsatest
check_PROGRAMS += dsatest
dsatest_SOURCES = dsatest.c
dsatest_LDADD = $(top_builddir)/ssl/libssl.la
dsatest_LDADD += $(top_builddir)/crypto/libcrypto.la
TESTS += ecdhtest
check_PROGRAMS += ecdhtest
ecdhtest_SOURCES = ecdhtest.c
ecdhtest_LDADD = $(top_builddir)/ssl/libssl.la
ecdhtest_LDADD += $(top_builddir)/crypto/libcrypto.la
TESTS += ecdsatest
check_PROGRAMS += ecdsatest
ecdsatest_SOURCES = ecdsatest.c
ecdsatest_LDADD = $(top_builddir)/ssl/libssl.la
ecdsatest_LDADD += $(top_builddir)/crypto/libcrypto.la
TESTS += ectest
check_PROGRAMS += ectest
ectest_SOURCES = ectest.c
ectest_LDADD = $(top_builddir)/ssl/libssl.la
ectest_LDADD += $(top_builddir)/crypto/libcrypto.la
TESTS += enginetest
check_PROGRAMS += enginetest
enginetest_SOURCES = enginetest.c
enginetest_LDADD = $(top_builddir)/ssl/libssl.la
enginetest_LDADD += $(top_builddir)/crypto/libcrypto.la
check_PROGRAMS += evptest
evptest_SOURCES = evptest.c
evptest_LDADD = $(top_builddir)/ssl/libssl.la
evptest_LDADD += $(top_builddir)/crypto/libcrypto.la
TESTS += explicit_bzero
check_PROGRAMS += explicit_bzero
explicit_bzero_SOURCES = explicit_bzero.c
explicit_bzero_LDADD = $(top_builddir)/ssl/libssl.la
explicit_bzero_LDADD += $(top_builddir)/crypto/libcrypto.la
TESTS += exptest
check_PROGRAMS += exptest
exptest_SOURCES = exptest.c
exptest_LDADD = $(top_builddir)/ssl/libssl.la
exptest_LDADD += $(top_builddir)/crypto/libcrypto.la
TESTS += gcm128test
check_PROGRAMS += gcm128test
gcm128test_SOURCES = gcm128test.c
gcm128test_LDADD = $(top_builddir)/ssl/libssl.la
gcm128test_LDADD += $(top_builddir)/crypto/libcrypto.la
TESTS += hmactest
check_PROGRAMS += hmactest
hmactest_SOURCES = hmactest.c
hmactest_LDADD = $(top_builddir)/ssl/libssl.la
hmactest_LDADD += $(top_builddir)/crypto/libcrypto.la
TESTS += ideatest
check_PROGRAMS += ideatest
ideatest_SOURCES = ideatest.c
ideatest_LDADD = $(top_builddir)/ssl/libssl.la
ideatest_LDADD += $(top_builddir)/crypto/libcrypto.la
TESTS += igetest
check_PROGRAMS += igetest
igetest_SOURCES = igetest.c
igetest_LDADD = $(top_builddir)/ssl/libssl.la
igetest_LDADD += $(top_builddir)/crypto/libcrypto.la
TESTS += md4test
check_PROGRAMS += md4test
md4test_SOURCES = md4test.c
md4test_LDADD = $(top_builddir)/ssl/libssl.la
md4test_LDADD += $(top_builddir)/crypto/libcrypto.la
TESTS += md5test
check_PROGRAMS += md5test
md5test_SOURCES = md5test.c
md5test_LDADD = $(top_builddir)/ssl/libssl.la
md5test_LDADD += $(top_builddir)/crypto/libcrypto.la
TESTS += mdc2test
check_PROGRAMS += mdc2test
mdc2test_SOURCES = mdc2test.c
mdc2test_LDADD = $(top_builddir)/ssl/libssl.la
mdc2test_LDADD += $(top_builddir)/crypto/libcrypto.la
TESTS += mont
check_PROGRAMS += mont
mont_SOURCES = mont.c
mont_LDADD = $(top_builddir)/ssl/libssl.la
mont_LDADD += $(top_builddir)/crypto/libcrypto.la
check_PROGRAMS += pidwraptest
pidwraptest_SOURCES = pidwraptest.c
pidwraptest_LDADD = $(top_builddir)/ssl/libssl.la
pidwraptest_LDADD += $(top_builddir)/crypto/libcrypto.la
TESTS += pkcs7test
check_PROGRAMS += pkcs7test
pkcs7test_SOURCES = pkcs7test.c
pkcs7test_LDADD = $(top_builddir)/ssl/libssl.la
pkcs7test_LDADD += $(top_builddir)/crypto/libcrypto.la
TESTS += poly1305test
check_PROGRAMS += poly1305test
poly1305test_SOURCES = poly1305test.c
poly1305test_LDADD = $(top_builddir)/ssl/libssl.la
poly1305test_LDADD += $(top_builddir)/crypto/libcrypto.la
check_PROGRAMS += pq_test
pq_test_SOURCES = pq_test.c
pq_test_LDADD = $(top_builddir)/ssl/libssl.la
pq_test_LDADD += $(top_builddir)/crypto/libcrypto.la
TESTS += randtest
check_PROGRAMS += randtest
randtest_SOURCES = randtest.c
randtest_LDADD = $(top_builddir)/ssl/libssl.la
randtest_LDADD += $(top_builddir)/crypto/libcrypto.la
TESTS += rc2test
check_PROGRAMS += rc2test
rc2test_SOURCES = rc2test.c
rc2test_LDADD = $(top_builddir)/ssl/libssl.la
rc2test_LDADD += $(top_builddir)/crypto/libcrypto.la
TESTS += rc4test
check_PROGRAMS += rc4test
rc4test_SOURCES = rc4test.c
rc4test_LDADD = $(top_builddir)/ssl/libssl.la
rc4test_LDADD += $(top_builddir)/crypto/libcrypto.la
TESTS += rmdtest
check_PROGRAMS += rmdtest
rmdtest_SOURCES = rmdtest.c
rmdtest_LDADD = $(top_builddir)/ssl/libssl.la
rmdtest_LDADD += $(top_builddir)/crypto/libcrypto.la
TESTS += sha1test
check_PROGRAMS += sha1test
sha1test_SOURCES = sha1test.c
sha1test_LDADD = $(top_builddir)/ssl/libssl.la
sha1test_LDADD += $(top_builddir)/crypto/libcrypto.la
TESTS += sha256test
check_PROGRAMS += sha256test
sha256test_SOURCES = sha256test.c
sha256test_LDADD = $(top_builddir)/ssl/libssl.la
sha256test_LDADD += $(top_builddir)/crypto/libcrypto.la
TESTS += sha512test
check_PROGRAMS += sha512test
sha512test_SOURCES = sha512test.c
sha512test_LDADD = $(top_builddir)/ssl/libssl.la
sha512test_LDADD += $(top_builddir)/crypto/libcrypto.la
TESTS += shatest
check_PROGRAMS += shatest
shatest_SOURCES = shatest.c
shatest_LDADD = $(top_builddir)/ssl/libssl.la
shatest_LDADD += $(top_builddir)/crypto/libcrypto.la
check_PROGRAMS += ssltest
ssltest_SOURCES = ssltest.c
ssltest_LDADD = $(top_builddir)/ssl/libssl.la
ssltest_LDADD += $(top_builddir)/crypto/libcrypto.la
TESTS += timingsafe
check_PROGRAMS += timingsafe
timingsafe_SOURCES = timingsafe.c
timingsafe_LDADD = $(top_builddir)/ssl/libssl.la
timingsafe_LDADD += $(top_builddir)/crypto/libcrypto.la
TESTS += utf8test
check_PROGRAMS += utf8test
utf8test_SOURCES = utf8test.c
utf8test_LDADD = $(top_builddir)/ssl/libssl.la
utf8test_LDADD += $(top_builddir)/crypto/libcrypto.la
explicit_bzero_SOURCES += memmem.c
TESTS += aeadtest.sh
EXTRA_DIST += aeadtest.sh
TESTS += evptest.sh
EXTRA_DIST += evptest.sh
TESTS += pq_test.sh
EXTRA_DIST += pq_test.sh
TESTS += ssltest.sh
EXTRA_DIST += ssltest.sh
TESTS += arc4randomforktest.sh
EXTRA_DIST += arc4randomforktest.sh
EXTRA_DIST += pidwraptest.sh
EXTRA_DIST += aeadtests.txt
EXTRA_DIST += evptests.txt
EXTRA_DIST += pq_expected.txt
EXTRA_DIST += testssl ca.pem server.pem

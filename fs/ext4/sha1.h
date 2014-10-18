/*	$NetBSD: sha1.h,v 1.13 2005/12/26 18:41:36 perry Exp $	*/

/*
 * SHA-1 in C
 * By Steve Reid <steve@edmweb.com>
 * 100% Public Domain
 */

#ifndef _SYS_SHA1_H_
#define	_SYS_SHA1_H_

#define SHA1_DIGEST_LENGTH		20
#define SHA1_DIGEST_STRING_LENGTH	41

typedef struct {
	unsigned int state[5];
	unsigned int count[2];
	unsigned char buffer[64];
} SHA1_CTX;

//__BEGIN_DECLS
void	SHA1Transform(unsigned int[5], const unsigned char[64]);
void	SHA1Init(SHA1_CTX *);
void	SHA1Update(SHA1_CTX *, const unsigned char *, unsigned int);
void	SHA1Final(unsigned char[SHA1_DIGEST_LENGTH], SHA1_CTX *);
//__END_DECLS

#endif /* _SYS_SHA1_H_ */

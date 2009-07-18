/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "POKERTH-PROTOCOL"
 * 	found in "../../../docs/pokerth.asn1"
 */

#ifndef	_InitMessage_H_
#define	_InitMessage_H_


#include <asn_application.h>

/* Including external dependencies */
#include "Version.h"
#include "AnonymousLogin.h"
#include "AuthenticatedLogin.h"
#include "StatisticsLogin.h"
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum login_PR {
	login_PR_NOTHING,	/* No components present */
	login_PR_anonymousLogin,
	login_PR_authenticatedLogin,
	login_PR_statisticsLogin,
	/* Extensions may appear below */
	
} login_PR;

/* InitMessage */
typedef struct InitMessage {
	Version_t	 requestedVersion;
	struct login {
		login_PR present;
		union InitMessage__login_u {
			AnonymousLogin_t	 anonymousLogin;
			AuthenticatedLogin_t	 authenticatedLogin;
			StatisticsLogin_t	 statisticsLogin;
			/*
			 * This type is extensible,
			 * possible extensions are below.
			 */
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} login;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} InitMessage_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_InitMessage;

#ifdef __cplusplus
}
#endif

#endif	/* _InitMessage_H_ */

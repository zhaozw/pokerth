/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "POKERTH-PROTOCOL"
 * 	found in "../../../docs/pokerth.asn1"
 */

#ifndef	_PlayerAllIn_H_
#define	_PlayerAllIn_H_


#include <asn_application.h>

/* Including external dependencies */
#include "NonZeroId.h"
#include "Card.h"
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* PlayerAllIn */
typedef struct PlayerAllIn {
	NonZeroId_t	 playerId;
	struct allInCards {
		A_SEQUENCE_OF(Card_t) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} allInCards;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PlayerAllIn_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PlayerAllIn;

#ifdef __cplusplus
}
#endif

#endif	/* _PlayerAllIn_H_ */

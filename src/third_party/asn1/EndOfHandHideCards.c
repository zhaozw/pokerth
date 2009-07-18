/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "POKERTH-PROTOCOL"
 * 	found in "../../../docs/pokerth.asn1"
 */

#include <asn_internal.h>

#include "EndOfHandHideCards.h"

static int
memb_moneyWon_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 10000000)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_playerMoney_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 10000000)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_TYPE_member_t asn_MBR_EndOfHandHideCards_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct EndOfHandHideCards, playerId),
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_NonZeroId,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"playerId"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct EndOfHandHideCards, moneyWon),
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_NativeInteger,
		memb_moneyWon_constraint_1,
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"moneyWon"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct EndOfHandHideCards, playerMoney),
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_NativeInteger,
		memb_playerMoney_constraint_1,
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"playerMoney"
		},
};
static ber_tlv_tag_t asn_DEF_EndOfHandHideCards_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_EndOfHandHideCards_tag2el_1[] = {
    { (ASN_TAG_CLASS_UNIVERSAL | (2 << 2)), 0, 0, 2 }, /* playerId at 412 */
    { (ASN_TAG_CLASS_UNIVERSAL | (2 << 2)), 1, -1, 1 }, /* moneyWon at 413 */
    { (ASN_TAG_CLASS_UNIVERSAL | (2 << 2)), 2, -2, 0 } /* playerMoney at 414 */
};
static asn_SEQUENCE_specifics_t asn_SPC_EndOfHandHideCards_specs_1 = {
	sizeof(struct EndOfHandHideCards),
	offsetof(struct EndOfHandHideCards, _asn_ctx),
	asn_MAP_EndOfHandHideCards_tag2el_1,
	3,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	2,	/* Start extensions */
	4	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_EndOfHandHideCards = {
	"EndOfHandHideCards",
	"EndOfHandHideCards",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_EndOfHandHideCards_tags_1,
	sizeof(asn_DEF_EndOfHandHideCards_tags_1)
		/sizeof(asn_DEF_EndOfHandHideCards_tags_1[0]), /* 1 */
	asn_DEF_EndOfHandHideCards_tags_1,	/* Same as above */
	sizeof(asn_DEF_EndOfHandHideCards_tags_1)
		/sizeof(asn_DEF_EndOfHandHideCards_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_EndOfHandHideCards_1,
	3,	/* Elements count */
	&asn_SPC_EndOfHandHideCards_specs_1	/* Additional specs */
};


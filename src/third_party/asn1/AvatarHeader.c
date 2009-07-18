/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "POKERTH-PROTOCOL"
 * 	found in "../../../docs/pokerth.asn1"
 */

#include <asn_internal.h>

#include "AvatarHeader.h"

static int
memb_avatarSize_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 32 && value <= 30720)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_TYPE_member_t asn_MBR_AvatarHeader_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct AvatarHeader, avatarType),
		(ASN_TAG_CLASS_UNIVERSAL | (10 << 2)),
		0,
		&asn_DEF_AvatarType,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"avatarType"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct AvatarHeader, avatarSize),
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_NativeInteger,
		memb_avatarSize_constraint_1,
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"avatarSize"
		},
};
static ber_tlv_tag_t asn_DEF_AvatarHeader_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_AvatarHeader_tag2el_1[] = {
    { (ASN_TAG_CLASS_UNIVERSAL | (2 << 2)), 1, 0, 0 }, /* avatarSize at 113 */
    { (ASN_TAG_CLASS_UNIVERSAL | (10 << 2)), 0, 0, 0 } /* avatarType at 112 */
};
static asn_SEQUENCE_specifics_t asn_SPC_AvatarHeader_specs_1 = {
	sizeof(struct AvatarHeader),
	offsetof(struct AvatarHeader, _asn_ctx),
	asn_MAP_AvatarHeader_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	1,	/* Start extensions */
	3	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_AvatarHeader = {
	"AvatarHeader",
	"AvatarHeader",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_AvatarHeader_tags_1,
	sizeof(asn_DEF_AvatarHeader_tags_1)
		/sizeof(asn_DEF_AvatarHeader_tags_1[0]), /* 1 */
	asn_DEF_AvatarHeader_tags_1,	/* Same as above */
	sizeof(asn_DEF_AvatarHeader_tags_1)
		/sizeof(asn_DEF_AvatarHeader_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_AvatarHeader_1,
	2,	/* Elements count */
	&asn_SPC_AvatarHeader_specs_1	/* Additional specs */
};


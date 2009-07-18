/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "POKERTH-PROTOCOL"
 * 	found in "../../../docs/pokerth.asn1"
 */

#include <asn_internal.h>

#include "AvatarRequestMessage.h"

static asn_TYPE_member_t asn_MBR_AvatarRequestMessage_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct AvatarRequestMessage, requestId),
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_NonZeroId,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"requestId"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct AvatarRequestMessage, avatar),
		(ASN_TAG_CLASS_UNIVERSAL | (4 << 2)),
		0,
		&asn_DEF_AvatarHash,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"avatar"
		},
};
static ber_tlv_tag_t asn_DEF_AvatarRequestMessage_tags_1[] = {
	(ASN_TAG_CLASS_APPLICATION | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_AvatarRequestMessage_tag2el_1[] = {
    { (ASN_TAG_CLASS_UNIVERSAL | (2 << 2)), 0, 0, 0 }, /* requestId at 97 */
    { (ASN_TAG_CLASS_UNIVERSAL | (4 << 2)), 1, 0, 0 } /* avatar at 99 */
};
static asn_SEQUENCE_specifics_t asn_SPC_AvatarRequestMessage_specs_1 = {
	sizeof(struct AvatarRequestMessage),
	offsetof(struct AvatarRequestMessage, _asn_ctx),
	asn_MAP_AvatarRequestMessage_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	1,	/* Start extensions */
	3	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_AvatarRequestMessage = {
	"AvatarRequestMessage",
	"AvatarRequestMessage",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_AvatarRequestMessage_tags_1,
	sizeof(asn_DEF_AvatarRequestMessage_tags_1)
		/sizeof(asn_DEF_AvatarRequestMessage_tags_1[0]) - 1, /* 1 */
	asn_DEF_AvatarRequestMessage_tags_1,	/* Same as above */
	sizeof(asn_DEF_AvatarRequestMessage_tags_1)
		/sizeof(asn_DEF_AvatarRequestMessage_tags_1[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_AvatarRequestMessage_1,
	2,	/* Elements count */
	&asn_SPC_AvatarRequestMessage_specs_1	/* Additional specs */
};


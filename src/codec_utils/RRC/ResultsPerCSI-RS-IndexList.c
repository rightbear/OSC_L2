/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/labadmin/hlal/rrc_15.3_asn.asn1"
 * 	`asn1c -D ./15_3_rrc/ -fcompound-names -fno-include-deps -findirect-choice -gen-PER -no-gen-example`
 */

#include "ResultsPerCSI-RS-IndexList.h"

#include "ResultsPerCSI-RS-Index.h"
static asn_oer_constraints_t asn_OER_type_ResultsPerCSI_RS_IndexList_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..64)) */};
asn_per_constraints_t asn_PER_type_ResultsPerCSI_RS_IndexList_constr_1 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 6,  6,  1,  64 }	/* (SIZE(1..64)) */,
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_ResultsPerCSI_RS_IndexList_1[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_ResultsPerCSI_RS_Index,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_ResultsPerCSI_RS_IndexList_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
asn_SET_OF_specifics_t asn_SPC_ResultsPerCSI_RS_IndexList_specs_1 = {
	sizeof(struct ResultsPerCSI_RS_IndexList),
	offsetof(struct ResultsPerCSI_RS_IndexList, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
asn_TYPE_descriptor_t asn_DEF_ResultsPerCSI_RS_IndexList = {
	"ResultsPerCSI-RS-IndexList",
	"ResultsPerCSI-RS-IndexList",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_ResultsPerCSI_RS_IndexList_tags_1,
	sizeof(asn_DEF_ResultsPerCSI_RS_IndexList_tags_1)
		/sizeof(asn_DEF_ResultsPerCSI_RS_IndexList_tags_1[0]), /* 1 */
	asn_DEF_ResultsPerCSI_RS_IndexList_tags_1,	/* Same as above */
	sizeof(asn_DEF_ResultsPerCSI_RS_IndexList_tags_1)
		/sizeof(asn_DEF_ResultsPerCSI_RS_IndexList_tags_1[0]), /* 1 */
	{ &asn_OER_type_ResultsPerCSI_RS_IndexList_constr_1, &asn_PER_type_ResultsPerCSI_RS_IndexList_constr_1, SEQUENCE_OF_constraint },
	asn_MBR_ResultsPerCSI_RS_IndexList_1,
	1,	/* Single element */
	&asn_SPC_ResultsPerCSI_RS_IndexList_specs_1	/* Additional specs */
};


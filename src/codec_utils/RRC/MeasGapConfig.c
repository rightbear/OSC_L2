/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/labadmin/hlal/rrc_15.3_asn.asn1"
 * 	`asn1c -D ./15_3_rrc/ -fcompound-names -fno-include-deps -findirect-choice -gen-PER -no-gen-example`
 */

#include "MeasGapConfig.h"

#include "GapConfig.h"
static asn_oer_constraints_t asn_OER_type_gapFR2_constr_2 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_gapFR2_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_gapFR1_constr_7 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_gapFR1_constr_7 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_gapUE_constr_10 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_gapUE_constr_10 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_gapFR2_2[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct MeasGapConfig__gapFR2, choice.release),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"release"
		},
	{ ATF_POINTER, 0, offsetof(struct MeasGapConfig__gapFR2, choice.setup),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_GapConfig,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"setup"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_gapFR2_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* release */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* setup */
};
static asn_CHOICE_specifics_t asn_SPC_gapFR2_specs_2 = {
	sizeof(struct MeasGapConfig__gapFR2),
	offsetof(struct MeasGapConfig__gapFR2, _asn_ctx),
	offsetof(struct MeasGapConfig__gapFR2, present),
	sizeof(((struct MeasGapConfig__gapFR2 *)0)->present),
	asn_MAP_gapFR2_tag2el_2,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_gapFR2_2 = {
	"gapFR2",
	"gapFR2",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ &asn_OER_type_gapFR2_constr_2, &asn_PER_type_gapFR2_constr_2, CHOICE_constraint },
	asn_MBR_gapFR2_2,
	2,	/* Elements count */
	&asn_SPC_gapFR2_specs_2	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_gapFR1_7[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct MeasGapConfig__ext1__gapFR1, choice.release),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"release"
		},
	{ ATF_POINTER, 0, offsetof(struct MeasGapConfig__ext1__gapFR1, choice.setup),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_GapConfig,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"setup"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_gapFR1_tag2el_7[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* release */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* setup */
};
static asn_CHOICE_specifics_t asn_SPC_gapFR1_specs_7 = {
	sizeof(struct MeasGapConfig__ext1__gapFR1),
	offsetof(struct MeasGapConfig__ext1__gapFR1, _asn_ctx),
	offsetof(struct MeasGapConfig__ext1__gapFR1, present),
	sizeof(((struct MeasGapConfig__ext1__gapFR1 *)0)->present),
	asn_MAP_gapFR1_tag2el_7,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_gapFR1_7 = {
	"gapFR1",
	"gapFR1",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ &asn_OER_type_gapFR1_constr_7, &asn_PER_type_gapFR1_constr_7, CHOICE_constraint },
	asn_MBR_gapFR1_7,
	2,	/* Elements count */
	&asn_SPC_gapFR1_specs_7	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_gapUE_10[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct MeasGapConfig__ext1__gapUE, choice.release),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"release"
		},
	{ ATF_POINTER, 0, offsetof(struct MeasGapConfig__ext1__gapUE, choice.setup),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_GapConfig,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"setup"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_gapUE_tag2el_10[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* release */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* setup */
};
static asn_CHOICE_specifics_t asn_SPC_gapUE_specs_10 = {
	sizeof(struct MeasGapConfig__ext1__gapUE),
	offsetof(struct MeasGapConfig__ext1__gapUE, _asn_ctx),
	offsetof(struct MeasGapConfig__ext1__gapUE, present),
	sizeof(((struct MeasGapConfig__ext1__gapUE *)0)->present),
	asn_MAP_gapUE_tag2el_10,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_gapUE_10 = {
	"gapUE",
	"gapUE",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ &asn_OER_type_gapUE_constr_10, &asn_PER_type_gapUE_constr_10, CHOICE_constraint },
	asn_MBR_gapUE_10,
	2,	/* Elements count */
	&asn_SPC_gapUE_specs_10	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_ext1_6[] = {
	{ ATF_POINTER, 2, offsetof(struct MeasGapConfig__ext1, gapFR1),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_gapFR1_7,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"gapFR1"
		},
	{ ATF_POINTER, 1, offsetof(struct MeasGapConfig__ext1, gapUE),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_gapUE_10,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"gapUE"
		},
};
static const int asn_MAP_ext1_oms_6[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_ext1_tags_6[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ext1_tag2el_6[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* gapFR1 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* gapUE */
};
static asn_SEQUENCE_specifics_t asn_SPC_ext1_specs_6 = {
	sizeof(struct MeasGapConfig__ext1),
	offsetof(struct MeasGapConfig__ext1, _asn_ctx),
	asn_MAP_ext1_tag2el_6,
	2,	/* Count of tags in the map */
	asn_MAP_ext1_oms_6,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ext1_6 = {
	"ext1",
	"ext1",
	&asn_OP_SEQUENCE,
	asn_DEF_ext1_tags_6,
	sizeof(asn_DEF_ext1_tags_6)
		/sizeof(asn_DEF_ext1_tags_6[0]) - 1, /* 1 */
	asn_DEF_ext1_tags_6,	/* Same as above */
	sizeof(asn_DEF_ext1_tags_6)
		/sizeof(asn_DEF_ext1_tags_6[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_ext1_6,
	2,	/* Elements count */
	&asn_SPC_ext1_specs_6	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_MeasGapConfig_1[] = {
	{ ATF_POINTER, 2, offsetof(struct MeasGapConfig, gapFR2),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_gapFR2_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"gapFR2"
		},
	{ ATF_POINTER, 1, offsetof(struct MeasGapConfig, ext1),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_ext1_6,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ext1"
		},
};
static const int asn_MAP_MeasGapConfig_oms_1[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_MeasGapConfig_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_MeasGapConfig_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* gapFR2 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* ext1 */
};
asn_SEQUENCE_specifics_t asn_SPC_MeasGapConfig_specs_1 = {
	sizeof(struct MeasGapConfig),
	offsetof(struct MeasGapConfig, _asn_ctx),
	asn_MAP_MeasGapConfig_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_MeasGapConfig_oms_1,	/* Optional members */
	1, 1,	/* Root/Additions */
	1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_MeasGapConfig = {
	"MeasGapConfig",
	"MeasGapConfig",
	&asn_OP_SEQUENCE,
	asn_DEF_MeasGapConfig_tags_1,
	sizeof(asn_DEF_MeasGapConfig_tags_1)
		/sizeof(asn_DEF_MeasGapConfig_tags_1[0]), /* 1 */
	asn_DEF_MeasGapConfig_tags_1,	/* Same as above */
	sizeof(asn_DEF_MeasGapConfig_tags_1)
		/sizeof(asn_DEF_MeasGapConfig_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_MeasGapConfig_1,
	2,	/* Elements count */
	&asn_SPC_MeasGapConfig_specs_1	/* Additional specs */
};


/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/labadmin/hlal/rrc_15.3_asn.asn1"
 * 	`asn1c -D ./15_3_rrc/ -fcompound-names -fno-include-deps -findirect-choice -gen-PER -no-gen-example`
 */

#include "Phy-ParametersXDD-Diff.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_oer_constraints_t asn_OER_type_dynamicSFI_constr_2 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_dynamicSFI_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_twoPUCCH_F0_2_ConsecSymbols_constr_4 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_twoPUCCH_F0_2_ConsecSymbols_constr_4 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_twoDifferentTPC_Loop_PUSCH_constr_6 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_twoDifferentTPC_Loop_PUSCH_constr_6 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_twoDifferentTPC_Loop_PUCCH_constr_8 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_twoDifferentTPC_Loop_PUCCH_constr_8 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_dynamicSFI_value2enum_2[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_dynamicSFI_enum2value_2[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_dynamicSFI_specs_2 = {
	asn_MAP_dynamicSFI_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_dynamicSFI_enum2value_2,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_dynamicSFI_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_dynamicSFI_2 = {
	"dynamicSFI",
	"dynamicSFI",
	&asn_OP_NativeEnumerated,
	asn_DEF_dynamicSFI_tags_2,
	sizeof(asn_DEF_dynamicSFI_tags_2)
		/sizeof(asn_DEF_dynamicSFI_tags_2[0]) - 1, /* 1 */
	asn_DEF_dynamicSFI_tags_2,	/* Same as above */
	sizeof(asn_DEF_dynamicSFI_tags_2)
		/sizeof(asn_DEF_dynamicSFI_tags_2[0]), /* 2 */
	{ &asn_OER_type_dynamicSFI_constr_2, &asn_PER_type_dynamicSFI_constr_2, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_dynamicSFI_specs_2	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_twoPUCCH_F0_2_ConsecSymbols_value2enum_4[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_twoPUCCH_F0_2_ConsecSymbols_enum2value_4[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_twoPUCCH_F0_2_ConsecSymbols_specs_4 = {
	asn_MAP_twoPUCCH_F0_2_ConsecSymbols_value2enum_4,	/* "tag" => N; sorted by tag */
	asn_MAP_twoPUCCH_F0_2_ConsecSymbols_enum2value_4,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_twoPUCCH_F0_2_ConsecSymbols_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_twoPUCCH_F0_2_ConsecSymbols_4 = {
	"twoPUCCH-F0-2-ConsecSymbols",
	"twoPUCCH-F0-2-ConsecSymbols",
	&asn_OP_NativeEnumerated,
	asn_DEF_twoPUCCH_F0_2_ConsecSymbols_tags_4,
	sizeof(asn_DEF_twoPUCCH_F0_2_ConsecSymbols_tags_4)
		/sizeof(asn_DEF_twoPUCCH_F0_2_ConsecSymbols_tags_4[0]) - 1, /* 1 */
	asn_DEF_twoPUCCH_F0_2_ConsecSymbols_tags_4,	/* Same as above */
	sizeof(asn_DEF_twoPUCCH_F0_2_ConsecSymbols_tags_4)
		/sizeof(asn_DEF_twoPUCCH_F0_2_ConsecSymbols_tags_4[0]), /* 2 */
	{ &asn_OER_type_twoPUCCH_F0_2_ConsecSymbols_constr_4, &asn_PER_type_twoPUCCH_F0_2_ConsecSymbols_constr_4, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_twoPUCCH_F0_2_ConsecSymbols_specs_4	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_twoDifferentTPC_Loop_PUSCH_value2enum_6[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_twoDifferentTPC_Loop_PUSCH_enum2value_6[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_twoDifferentTPC_Loop_PUSCH_specs_6 = {
	asn_MAP_twoDifferentTPC_Loop_PUSCH_value2enum_6,	/* "tag" => N; sorted by tag */
	asn_MAP_twoDifferentTPC_Loop_PUSCH_enum2value_6,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_twoDifferentTPC_Loop_PUSCH_tags_6[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_twoDifferentTPC_Loop_PUSCH_6 = {
	"twoDifferentTPC-Loop-PUSCH",
	"twoDifferentTPC-Loop-PUSCH",
	&asn_OP_NativeEnumerated,
	asn_DEF_twoDifferentTPC_Loop_PUSCH_tags_6,
	sizeof(asn_DEF_twoDifferentTPC_Loop_PUSCH_tags_6)
		/sizeof(asn_DEF_twoDifferentTPC_Loop_PUSCH_tags_6[0]) - 1, /* 1 */
	asn_DEF_twoDifferentTPC_Loop_PUSCH_tags_6,	/* Same as above */
	sizeof(asn_DEF_twoDifferentTPC_Loop_PUSCH_tags_6)
		/sizeof(asn_DEF_twoDifferentTPC_Loop_PUSCH_tags_6[0]), /* 2 */
	{ &asn_OER_type_twoDifferentTPC_Loop_PUSCH_constr_6, &asn_PER_type_twoDifferentTPC_Loop_PUSCH_constr_6, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_twoDifferentTPC_Loop_PUSCH_specs_6	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_twoDifferentTPC_Loop_PUCCH_value2enum_8[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_twoDifferentTPC_Loop_PUCCH_enum2value_8[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_twoDifferentTPC_Loop_PUCCH_specs_8 = {
	asn_MAP_twoDifferentTPC_Loop_PUCCH_value2enum_8,	/* "tag" => N; sorted by tag */
	asn_MAP_twoDifferentTPC_Loop_PUCCH_enum2value_8,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_twoDifferentTPC_Loop_PUCCH_tags_8[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_twoDifferentTPC_Loop_PUCCH_8 = {
	"twoDifferentTPC-Loop-PUCCH",
	"twoDifferentTPC-Loop-PUCCH",
	&asn_OP_NativeEnumerated,
	asn_DEF_twoDifferentTPC_Loop_PUCCH_tags_8,
	sizeof(asn_DEF_twoDifferentTPC_Loop_PUCCH_tags_8)
		/sizeof(asn_DEF_twoDifferentTPC_Loop_PUCCH_tags_8[0]) - 1, /* 1 */
	asn_DEF_twoDifferentTPC_Loop_PUCCH_tags_8,	/* Same as above */
	sizeof(asn_DEF_twoDifferentTPC_Loop_PUCCH_tags_8)
		/sizeof(asn_DEF_twoDifferentTPC_Loop_PUCCH_tags_8[0]), /* 2 */
	{ &asn_OER_type_twoDifferentTPC_Loop_PUCCH_constr_8, &asn_PER_type_twoDifferentTPC_Loop_PUCCH_constr_8, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_twoDifferentTPC_Loop_PUCCH_specs_8	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_Phy_ParametersXDD_Diff_1[] = {
	{ ATF_POINTER, 4, offsetof(struct Phy_ParametersXDD_Diff, dynamicSFI),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_dynamicSFI_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"dynamicSFI"
		},
	{ ATF_POINTER, 3, offsetof(struct Phy_ParametersXDD_Diff, twoPUCCH_F0_2_ConsecSymbols),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_twoPUCCH_F0_2_ConsecSymbols_4,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"twoPUCCH-F0-2-ConsecSymbols"
		},
	{ ATF_POINTER, 2, offsetof(struct Phy_ParametersXDD_Diff, twoDifferentTPC_Loop_PUSCH),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_twoDifferentTPC_Loop_PUSCH_6,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"twoDifferentTPC-Loop-PUSCH"
		},
	{ ATF_POINTER, 1, offsetof(struct Phy_ParametersXDD_Diff, twoDifferentTPC_Loop_PUCCH),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_twoDifferentTPC_Loop_PUCCH_8,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"twoDifferentTPC-Loop-PUCCH"
		},
};
static const int asn_MAP_Phy_ParametersXDD_Diff_oms_1[] = { 0, 1, 2, 3 };
static const ber_tlv_tag_t asn_DEF_Phy_ParametersXDD_Diff_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_Phy_ParametersXDD_Diff_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* dynamicSFI */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* twoPUCCH-F0-2-ConsecSymbols */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* twoDifferentTPC-Loop-PUSCH */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* twoDifferentTPC-Loop-PUCCH */
};
asn_SEQUENCE_specifics_t asn_SPC_Phy_ParametersXDD_Diff_specs_1 = {
	sizeof(struct Phy_ParametersXDD_Diff),
	offsetof(struct Phy_ParametersXDD_Diff, _asn_ctx),
	asn_MAP_Phy_ParametersXDD_Diff_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_Phy_ParametersXDD_Diff_oms_1,	/* Optional members */
	4, 0,	/* Root/Additions */
	4,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_Phy_ParametersXDD_Diff = {
	"Phy-ParametersXDD-Diff",
	"Phy-ParametersXDD-Diff",
	&asn_OP_SEQUENCE,
	asn_DEF_Phy_ParametersXDD_Diff_tags_1,
	sizeof(asn_DEF_Phy_ParametersXDD_Diff_tags_1)
		/sizeof(asn_DEF_Phy_ParametersXDD_Diff_tags_1[0]), /* 1 */
	asn_DEF_Phy_ParametersXDD_Diff_tags_1,	/* Same as above */
	sizeof(asn_DEF_Phy_ParametersXDD_Diff_tags_1)
		/sizeof(asn_DEF_Phy_ParametersXDD_Diff_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_Phy_ParametersXDD_Diff_1,
	4,	/* Elements count */
	&asn_SPC_Phy_ParametersXDD_Diff_specs_1	/* Additional specs */
};


/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/labadmin/hlal/rrc_15.3_asn.asn1"
 * 	`asn1c -D ./15_3_rrc/ -fcompound-names -fno-include-deps -findirect-choice -gen-PER -no-gen-example`
 */

#ifndef	_PDCP_Parameters_H_
#define	_PDCP_Parameters_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <BOOLEAN.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum PDCP_Parameters__maxNumberROHC_ContextSessions {
	PDCP_Parameters__maxNumberROHC_ContextSessions_cs2	= 0,
	PDCP_Parameters__maxNumberROHC_ContextSessions_cs4	= 1,
	PDCP_Parameters__maxNumberROHC_ContextSessions_cs8	= 2,
	PDCP_Parameters__maxNumberROHC_ContextSessions_cs12	= 3,
	PDCP_Parameters__maxNumberROHC_ContextSessions_cs16	= 4,
	PDCP_Parameters__maxNumberROHC_ContextSessions_cs24	= 5,
	PDCP_Parameters__maxNumberROHC_ContextSessions_cs32	= 6,
	PDCP_Parameters__maxNumberROHC_ContextSessions_cs48	= 7,
	PDCP_Parameters__maxNumberROHC_ContextSessions_cs64	= 8,
	PDCP_Parameters__maxNumberROHC_ContextSessions_cs128	= 9,
	PDCP_Parameters__maxNumberROHC_ContextSessions_cs256	= 10,
	PDCP_Parameters__maxNumberROHC_ContextSessions_cs512	= 11,
	PDCP_Parameters__maxNumberROHC_ContextSessions_cs1024	= 12,
	PDCP_Parameters__maxNumberROHC_ContextSessions_cs16384	= 13,
	PDCP_Parameters__maxNumberROHC_ContextSessions_spare2	= 14,
	PDCP_Parameters__maxNumberROHC_ContextSessions_spare1	= 15
} e_PDCP_Parameters__maxNumberROHC_ContextSessions;
typedef enum PDCP_Parameters__uplinkOnlyROHC_Profiles {
	PDCP_Parameters__uplinkOnlyROHC_Profiles_supported	= 0
} e_PDCP_Parameters__uplinkOnlyROHC_Profiles;
typedef enum PDCP_Parameters__continueROHC_Context {
	PDCP_Parameters__continueROHC_Context_supported	= 0
} e_PDCP_Parameters__continueROHC_Context;
typedef enum PDCP_Parameters__outOfOrderDelivery {
	PDCP_Parameters__outOfOrderDelivery_supported	= 0
} e_PDCP_Parameters__outOfOrderDelivery;
typedef enum PDCP_Parameters__shortSN {
	PDCP_Parameters__shortSN_supported	= 0
} e_PDCP_Parameters__shortSN;
typedef enum PDCP_Parameters__pdcp_DuplicationSRB {
	PDCP_Parameters__pdcp_DuplicationSRB_supported	= 0
} e_PDCP_Parameters__pdcp_DuplicationSRB;
typedef enum PDCP_Parameters__pdcp_DuplicationMCG_OrSCG_DRB {
	PDCP_Parameters__pdcp_DuplicationMCG_OrSCG_DRB_supported	= 0
} e_PDCP_Parameters__pdcp_DuplicationMCG_OrSCG_DRB;

/* PDCP-Parameters */
typedef struct PDCP_Parameters {
	struct PDCP_Parameters__supportedROHC_Profiles {
		BOOLEAN_t	 profile0x0000;
		BOOLEAN_t	 profile0x0001;
		BOOLEAN_t	 profile0x0002;
		BOOLEAN_t	 profile0x0003;
		BOOLEAN_t	 profile0x0004;
		BOOLEAN_t	 profile0x0006;
		BOOLEAN_t	 profile0x0101;
		BOOLEAN_t	 profile0x0102;
		BOOLEAN_t	 profile0x0103;
		BOOLEAN_t	 profile0x0104;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} supportedROHC_Profiles;
	long	 maxNumberROHC_ContextSessions;
	long	*uplinkOnlyROHC_Profiles;	/* OPTIONAL */
	long	*continueROHC_Context;	/* OPTIONAL */
	long	*outOfOrderDelivery;	/* OPTIONAL */
	long	*shortSN;	/* OPTIONAL */
	long	*pdcp_DuplicationSRB;	/* OPTIONAL */
	long	*pdcp_DuplicationMCG_OrSCG_DRB;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PDCP_Parameters_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_maxNumberROHC_ContextSessions_13;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_uplinkOnlyROHC_Profiles_30;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_continueROHC_Context_32;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_outOfOrderDelivery_34;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_shortSN_36;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_pdcp_DuplicationSRB_38;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_pdcp_DuplicationMCG_OrSCG_DRB_40;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_PDCP_Parameters;
extern asn_SEQUENCE_specifics_t asn_SPC_PDCP_Parameters_specs_1;
extern asn_TYPE_member_t asn_MBR_PDCP_Parameters_1[8];

#ifdef __cplusplus
}
#endif

#endif	/* _PDCP_Parameters_H_ */
#include <asn_internal.h>

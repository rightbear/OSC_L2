/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "F1AP-IEs"
 * 	found in "F1.asn1"
 * 	`asn1c -D ./out -fcompound-names -fno-include-deps -findirect-choice -gen-PER -no-gen-example`
 */

#ifndef	_DRBs_FailedToBeModified_Item_H_
#define	_DRBs_FailedToBeModified_Item_H_


#include <asn_application.h>

/* Including external dependencies */
#include "DRBID.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct Cause;
struct ProtocolExtensionContainer;

/* DRBs-FailedToBeModified-Item */
typedef struct DRBs_FailedToBeModified_Item {
	DRBID_t	 dRBID;
	struct Cause	*cause;	/* OPTIONAL */
	struct ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} DRBs_FailedToBeModified_Item_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_DRBs_FailedToBeModified_Item;

#ifdef __cplusplus
}
#endif

#endif	/* _DRBs_FailedToBeModified_Item_H_ */
#include <asn_internal.h>

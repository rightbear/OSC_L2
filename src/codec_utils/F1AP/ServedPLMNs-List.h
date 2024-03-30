/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "F1AP-IEs"
 * 	found in "F1.asn1"
 * 	`asn1c -D ./out -fcompound-names -fno-include-deps -findirect-choice -gen-PER -no-gen-example`
 */

#ifndef	_ServedPLMNs_List_H_
#define	_ServedPLMNs_List_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <ServedPLMNs-Item.h>
#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ServedPLMNs_Item;

/* ServedPLMNs-List */
typedef struct ServedPLMNs_List {
	A_SEQUENCE_OF(ServedPLMNs_Item_t) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ServedPLMNs_List_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ServedPLMNs_List;
extern asn_SET_OF_specifics_t asn_SPC_ServedPLMNs_List_specs_1;
extern asn_TYPE_member_t asn_MBR_ServedPLMNs_List_1[1];
extern asn_per_constraints_t asn_PER_type_ServedPLMNs_List_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _ServedPLMNs_List_H_ */
#include <asn_internal.h>

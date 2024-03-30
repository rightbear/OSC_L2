/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/labadmin/hlal/rrc_15.3_asn.asn1"
 * 	`asn1c -D ./15_3_rrc/ -fcompound-names -fno-include-deps -findirect-choice -gen-PER -no-gen-example`
 */

#ifndef	_EUTRA_Cell_H_
#define	_EUTRA_Cell_H_


#include <asn_application.h>

/* Including external dependencies */
#include "EUTRA-CellIndex.h"
#include "EUTRA-PhysCellId.h"
#include "EUTRA-Q-OffsetRange.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* EUTRA-Cell */
typedef struct EUTRA_Cell {
	EUTRA_CellIndex_t	 cellIndexEUTRA;
	EUTRA_PhysCellId_t	 physCellId;
	EUTRA_Q_OffsetRange_t	 cellIndividualOffset;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} EUTRA_Cell_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_EUTRA_Cell;
extern asn_SEQUENCE_specifics_t asn_SPC_EUTRA_Cell_specs_1;
extern asn_TYPE_member_t asn_MBR_EUTRA_Cell_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _EUTRA_Cell_H_ */
#include <asn_internal.h>

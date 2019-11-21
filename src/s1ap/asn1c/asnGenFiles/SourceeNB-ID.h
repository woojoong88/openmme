/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "./asn1c/S1AP-IEs.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -gen-PER -findirect-choice -pdu=S1AP-PDU`
 */

#ifndef	_SourceeNB_ID_H_
#define	_SourceeNB_ID_H_


#include <asn_application.h>

/* Including external dependencies */
#include "Global-ENB-ID.h"
#include "TAI.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ProtocolExtensionContainer;

/* SourceeNB-ID */
typedef struct SourceeNB_ID {
	Global_ENB_ID_t	 global_ENB_ID;
	TAI_t	 selected_TAI;
	struct ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SourceeNB_ID_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SourceeNB_ID;
extern asn_SEQUENCE_specifics_t asn_SPC_SourceeNB_ID_specs_1;
extern asn_TYPE_member_t asn_MBR_SourceeNB_ID_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _SourceeNB_ID_H_ */
#include <asn_internal.h>
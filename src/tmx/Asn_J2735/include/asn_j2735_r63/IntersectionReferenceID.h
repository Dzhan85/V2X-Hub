/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "../J2735_201603DA.ASN"
 * 	`asn1c -gen-PER -fcompound-names -fincludes-quoted -S/home/gmb/TMX-OAM/Build/asn1c/skeletons`
 */

#ifndef	_IntersectionReferenceID_H_
#define	_IntersectionReferenceID_H_


#include "asn_application.h"

/* Including external dependencies */
#include "RoadRegulatorID.h"
#include "IntersectionID.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* IntersectionReferenceID */
typedef struct IntersectionReferenceID {
	RoadRegulatorID_t	*region	/* OPTIONAL */;
	IntersectionID_t	 id;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} IntersectionReferenceID_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_IntersectionReferenceID;
extern asn_SEQUENCE_specifics_t asn_SPC_IntersectionReferenceID_specs_1;
extern asn_TYPE_member_t asn_MBR_IntersectionReferenceID_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _IntersectionReferenceID_H_ */
#include "asn_internal.h"
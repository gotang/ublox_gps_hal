/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "RRLP-Components"
 * 	found in "rrlp-components.asn"
 * 	`asn1c -gen-PER -fnative-types`
 */

#ifndef	_PositionInstruct_H_
#define	_PositionInstruct_H_


#include <asn_application.h>

/* Including external dependencies */
#include "MethodType.h"
#include "PositionMethod.h"
#include "MeasureResponseTime.h"
#include "UseMultipleSets.h"
#include "EnvironmentCharacter.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* PositionInstruct */
typedef struct PositionInstruct {
	MethodType_t	 methodType;
	PositionMethod_t	 positionMethod;
	MeasureResponseTime_t	 measureResponseTime;
	UseMultipleSets_t	 useMultipleSets;
	EnvironmentCharacter_t	*environmentCharacter	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PositionInstruct_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PositionInstruct;

#ifdef __cplusplus
}
#endif

#endif	/* _PositionInstruct_H_ */
#include <asn_internal.h>

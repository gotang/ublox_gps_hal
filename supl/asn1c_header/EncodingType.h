/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "SUPL-INIT"
 * 	found in "supl.asn"
 * 	`asn1c -gen-PER -fnative-types`
 */

#ifndef	_EncodingType_H_
#define	_EncodingType_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum EncodingType {
	EncodingType_ucs2	= 0,
	EncodingType_gsmDefault	= 1,
	EncodingType_utf8	= 2
	/*
	 * Enumeration is extensible
	 */
} e_EncodingType;

/* EncodingType */
typedef long	 EncodingType_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_EncodingType;
asn_struct_free_f EncodingType_free;
asn_struct_print_f EncodingType_print;
asn_constr_check_f EncodingType_constraint;
ber_type_decoder_f EncodingType_decode_ber;
der_type_encoder_f EncodingType_encode_der;
xer_type_decoder_f EncodingType_decode_xer;
xer_type_encoder_f EncodingType_encode_xer;
per_type_decoder_f EncodingType_decode_uper;
per_type_encoder_f EncodingType_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _EncodingType_H_ */
#include <asn_internal.h>

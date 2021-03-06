/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "FANSACTwoWayDataLinkCommunications"
 * 	found in "fans-cpdlc.asn1"
 * 	`asn1c -fcompound-names -fincludes-quoted -gen-PER`
 */

#ifndef	_FANSATISCode_H_
#define	_FANSATISCode_H_


#include "asn_application.h"

/* Including external dependencies */
#include "IA5String.h"

#ifdef __cplusplus
extern "C" {
#endif

/* FANSATISCode */
typedef IA5String_t	 FANSATISCode_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_FANSATISCode;
asn_struct_free_f FANSATISCode_free;
asn_struct_print_f FANSATISCode_print;
asn_constr_check_f FANSATISCode_constraint;
ber_type_decoder_f FANSATISCode_decode_ber;
der_type_encoder_f FANSATISCode_encode_der;
xer_type_decoder_f FANSATISCode_decode_xer;
xer_type_encoder_f FANSATISCode_encode_xer;
per_type_decoder_f FANSATISCode_decode_uper;
per_type_encoder_f FANSATISCode_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _FANSATISCode_H_ */
#include "asn_internal.h"

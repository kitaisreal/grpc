/* This file was generated by upbc (the upb compiler) from the input
 * file:
 *
 *     xds/annotations/v3/status.proto
 *
 * Do not edit -- your changes will be discarded when the file is
 * regenerated. */

#include "upb/def.h"
#include "xds/annotations/v3/status.upbdefs.h"

extern upb_def_init google_protobuf_descriptor_proto_upbdefinit;
extern const upb_msglayout xds_annotations_v3_FileStatusAnnotation_msginit;
extern const upb_msglayout xds_annotations_v3_MessageStatusAnnotation_msginit;
extern const upb_msglayout xds_annotations_v3_FieldStatusAnnotation_msginit;
extern const upb_msglayout xds_annotations_v3_StatusAnnotation_msginit;

static const upb_msglayout *layouts[4] = {
  &xds_annotations_v3_FileStatusAnnotation_msginit,
  &xds_annotations_v3_MessageStatusAnnotation_msginit,
  &xds_annotations_v3_FieldStatusAnnotation_msginit,
  &xds_annotations_v3_StatusAnnotation_msginit,
};

static const char descriptor[936] = {'\n', '\037', 'x', 'd', 's', '/', 'a', 'n', 'n', 'o', 't', 'a', 't', 'i', 'o', 'n', 's', '/', 'v', '3', '/', 's', 't', 'a', 't', 
'u', 's', '.', 'p', 'r', 'o', 't', 'o', '\022', '\022', 'x', 'd', 's', '.', 'a', 'n', 'n', 'o', 't', 'a', 't', 'i', 'o', 'n', 's', 
'.', 'v', '3', '\032', ' ', 'g', 'o', 'o', 'g', 'l', 'e', '/', 'p', 'r', 'o', 't', 'o', 'b', 'u', 'f', '/', 'd', 'e', 's', 'c', 
'r', 'i', 'p', 't', 'o', 'r', '.', 'p', 'r', 'o', 't', 'o', '\"', '@', '\n', '\024', 'F', 'i', 'l', 'e', 'S', 't', 'a', 't', 'u', 
's', 'A', 'n', 'n', 'o', 't', 'a', 't', 'i', 'o', 'n', '\022', '(', '\n', '\020', 'w', 'o', 'r', 'k', '_', 'i', 'n', '_', 'p', 'r', 
'o', 'g', 'r', 'e', 's', 's', '\030', '\001', ' ', '\001', '(', '\010', 'R', '\016', 'w', 'o', 'r', 'k', 'I', 'n', 'P', 'r', 'o', 'g', 'r', 
'e', 's', 's', '\"', 'C', '\n', '\027', 'M', 'e', 's', 's', 'a', 'g', 'e', 'S', 't', 'a', 't', 'u', 's', 'A', 'n', 'n', 'o', 't', 
'a', 't', 'i', 'o', 'n', '\022', '(', '\n', '\020', 'w', 'o', 'r', 'k', '_', 'i', 'n', '_', 'p', 'r', 'o', 'g', 'r', 'e', 's', 's', 
'\030', '\001', ' ', '\001', '(', '\010', 'R', '\016', 'w', 'o', 'r', 'k', 'I', 'n', 'P', 'r', 'o', 'g', 'r', 'e', 's', 's', '\"', 'A', '\n', 
'\025', 'F', 'i', 'e', 'l', 'd', 'S', 't', 'a', 't', 'u', 's', 'A', 'n', 'n', 'o', 't', 'a', 't', 'i', 'o', 'n', '\022', '(', '\n', 
'\020', 'w', 'o', 'r', 'k', '_', 'i', 'n', '_', 'p', 'r', 'o', 'g', 'r', 'e', 's', 's', '\030', '\001', ' ', '\001', '(', '\010', 'R', '\016', 
'w', 'o', 'r', 'k', 'I', 'n', 'P', 'r', 'o', 'g', 'r', 'e', 's', 's', '\"', '\234', '\001', '\n', '\020', 'S', 't', 'a', 't', 'u', 's', 
'A', 'n', 'n', 'o', 't', 'a', 't', 'i', 'o', 'n', '\022', '(', '\n', '\020', 'w', 'o', 'r', 'k', '_', 'i', 'n', '_', 'p', 'r', 'o', 
'g', 'r', 'e', 's', 's', '\030', '\001', ' ', '\001', '(', '\010', 'R', '\016', 'w', 'o', 'r', 'k', 'I', 'n', 'P', 'r', 'o', 'g', 'r', 'e', 
's', 's', '\022', '^', '\n', '\026', 'p', 'a', 'c', 'k', 'a', 'g', 'e', '_', 'v', 'e', 'r', 's', 'i', 'o', 'n', '_', 's', 't', 'a', 
't', 'u', 's', '\030', '\002', ' ', '\001', '(', '\016', '2', '(', '.', 'x', 'd', 's', '.', 'a', 'n', 'n', 'o', 't', 'a', 't', 'i', 'o', 
'n', 's', '.', 'v', '3', '.', 'P', 'a', 'c', 'k', 'a', 'g', 'e', 'V', 'e', 'r', 's', 'i', 'o', 'n', 'S', 't', 'a', 't', 'u', 
's', 'R', '\024', 'p', 'a', 'c', 'k', 'a', 'g', 'e', 'V', 'e', 'r', 's', 'i', 'o', 'n', 'S', 't', 'a', 't', 'u', 's', '*', ']', 
'\n', '\024', 'P', 'a', 'c', 'k', 'a', 'g', 'e', 'V', 'e', 'r', 's', 'i', 'o', 'n', 'S', 't', 'a', 't', 'u', 's', '\022', '\013', '\n', 
'\007', 'U', 'N', 'K', 'N', 'O', 'W', 'N', '\020', '\000', '\022', '\n', '\n', '\006', 'F', 'R', 'O', 'Z', 'E', 'N', '\020', '\001', '\022', '\n', '\n', 
'\006', 'A', 'C', 'T', 'I', 'V', 'E', '\020', '\002', '\022', ' ', '\n', '\034', 'N', 'E', 'X', 'T', '_', 'M', 'A', 'J', 'O', 'R', '_', 'V', 
'E', 'R', 'S', 'I', 'O', 'N', '_', 'C', 'A', 'N', 'D', 'I', 'D', 'A', 'T', 'E', '\020', '\003', ':', 'j', '\n', '\013', 'f', 'i', 'l', 
'e', '_', 's', 't', 'a', 't', 'u', 's', '\022', '\034', '.', 'g', 'o', 'o', 'g', 'l', 'e', '.', 'p', 'r', 'o', 't', 'o', 'b', 'u', 
'f', '.', 'F', 'i', 'l', 'e', 'O', 'p', 't', 'i', 'o', 'n', 's', '\030', '\352', '\310', '\224', 'l', ' ', '\001', '(', '\013', '2', '(', '.', 
'x', 'd', 's', '.', 'a', 'n', 'n', 'o', 't', 'a', 't', 'i', 'o', 'n', 's', '.', 'v', '3', '.', 'F', 'i', 'l', 'e', 'S', 't', 
'a', 't', 'u', 's', 'A', 'n', 'n', 'o', 't', 'a', 't', 'i', 'o', 'n', 'R', '\n', 'f', 'i', 'l', 'e', 'S', 't', 'a', 't', 'u', 
's', ':', 'v', '\n', '\016', 'm', 'e', 's', 's', 'a', 'g', 'e', '_', 's', 't', 'a', 't', 'u', 's', '\022', '\037', '.', 'g', 'o', 'o', 
'g', 'l', 'e', '.', 'p', 'r', 'o', 't', 'o', 'b', 'u', 'f', '.', 'M', 'e', 's', 's', 'a', 'g', 'e', 'O', 'p', 't', 'i', 'o', 
'n', 's', '\030', '\352', '\310', '\224', 'l', ' ', '\001', '(', '\013', '2', '+', '.', 'x', 'd', 's', '.', 'a', 'n', 'n', 'o', 't', 'a', 't', 
'i', 'o', 'n', 's', '.', 'v', '3', '.', 'M', 'e', 's', 's', 'a', 'g', 'e', 'S', 't', 'a', 't', 'u', 's', 'A', 'n', 'n', 'o', 
't', 'a', 't', 'i', 'o', 'n', 'R', '\r', 'm', 'e', 's', 's', 'a', 'g', 'e', 'S', 't', 'a', 't', 'u', 's', ':', 'n', '\n', '\014', 
'f', 'i', 'e', 'l', 'd', '_', 's', 't', 'a', 't', 'u', 's', '\022', '\035', '.', 'g', 'o', 'o', 'g', 'l', 'e', '.', 'p', 'r', 'o', 
't', 'o', 'b', 'u', 'f', '.', 'F', 'i', 'e', 'l', 'd', 'O', 'p', 't', 'i', 'o', 'n', 's', '\030', '\352', '\310', '\224', 'l', ' ', '\001', 
'(', '\013', '2', ')', '.', 'x', 'd', 's', '.', 'a', 'n', 'n', 'o', 't', 'a', 't', 'i', 'o', 'n', 's', '.', 'v', '3', '.', 'F', 
'i', 'e', 'l', 'd', 'S', 't', 'a', 't', 'u', 's', 'A', 'n', 'n', 'o', 't', 'a', 't', 'i', 'o', 'n', 'R', '\013', 'f', 'i', 'e', 
'l', 'd', 'S', 't', 'a', 't', 'u', 's', 'B', '+', 'Z', ')', 'g', 'i', 't', 'h', 'u', 'b', '.', 'c', 'o', 'm', '/', 'c', 'n', 
'c', 'f', '/', 'x', 'd', 's', '/', 'g', 'o', '/', 'x', 'd', 's', '/', 'a', 'n', 'n', 'o', 't', 'a', 't', 'i', 'o', 'n', 's', 
'/', 'v', '3', 'b', '\006', 'p', 'r', 'o', 't', 'o', '3', 
};

static upb_def_init *deps[2] = {
  &google_protobuf_descriptor_proto_upbdefinit,
  NULL
};

upb_def_init xds_annotations_v3_status_proto_upbdefinit = {
  deps,
  layouts,
  "xds/annotations/v3/status.proto",
  UPB_STRVIEW_INIT(descriptor, 936)
};

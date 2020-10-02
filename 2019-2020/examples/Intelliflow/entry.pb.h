/* Automatically generated nanopb header */
/* Generated by nanopb-0.4.1 */

#ifndef PB_LOGGINGS_PROTO_FILES_ENTRY_PB_H_INCLUDED
#define PB_LOGGINGS_PROTO_FILES_ENTRY_PB_H_INCLUDED
#include <pb.h>

#if PB_PROTO_HEADER_VERSION != 40
#error Regenerate this file with the current version of nanopb generator.
#endif

#ifdef __cplusplus
extern "C" {
#endif

/* Struct definitions */
typedef struct _Loggings_Log {
    uint32_t temperature;
} Loggings_Log;


/* Initializer values for message structs */
#define Loggings_Log_init_default                {0}
#define Loggings_Log_init_zero                   {0}

/* Field tags (for use in manual encoding/decoding) */
#define Loggings_Log_temperature_tag             1

/* Struct field encoding specification for nanopb */
#define Loggings_Log_FIELDLIST(X, a) \
X(a, STATIC,   SINGULAR, UINT32,   temperature,       1)
#define Loggings_Log_CALLBACK NULL
#define Loggings_Log_DEFAULT NULL

extern const pb_msgdesc_t Loggings_Log_msg;

/* Defines for backwards compatibility with code written before nanopb-0.4.0 */
#define Loggings_Log_fields &Loggings_Log_msg

/* Maximum encoded size of messages (where known) */
#define Loggings_Log_size                        6

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif
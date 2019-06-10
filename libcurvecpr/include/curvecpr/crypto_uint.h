#ifndef __LIBCURVECPR_CRYPTO_UINT_H
#define __LIBCURVECPR_CRYPTO_UINT_H

#ifdef __cplusplus
extern "C" {
#endif

#include <stdint.h>

/** 
 * Typedefs that used to be in libsodium, but aren't anymore. Now we
 * create our own.
 */
typedef uint16_t crypto_uint16;
typedef uint32_t crypto_uint32;
typedef uint64_t crypto_uint64;

#ifdef __cplusplus
}
#endif

#endif
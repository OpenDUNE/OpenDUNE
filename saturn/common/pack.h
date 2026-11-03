/** @file saturn/common/pack.h LZ77 compression for backup memory.
 *
 * Save games are mostly zeros and repeats; backup memory is 32 KB. The
 * format is a sequence of tokens, each starting with a control byte c:
 *   c < 0x80   c + 1 literal bytes follow
 *   c >= 0x80  a copy of earlier output: length (c & 0x7F) + 3, plus the
 *              next byte when (c & 0x7F) is 0x7F; then the distance - 1,
 *              two bytes, high byte first (1 to 65536 bytes back) */

#ifndef SATURN_PACK_H
#define SATURN_PACK_H

#include <stdint.h>

extern uint32_t Pack_Compress(const uint8_t *src, uint32_t size, uint8_t *dst, uint32_t capacity);

extern uint32_t Pack_Decompress(const uint8_t *src, uint32_t size, uint8_t *dst, uint32_t capacity);

#endif /*!< SATURN_PACK_H */

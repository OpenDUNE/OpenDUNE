/** @file saturn/common/pack.c LZ77 compression for backup memory. */

#include <stdlib.h>
#include "pack.h"

enum {
	HASH_BITS = 12,
	MATCH_MIN = 3,
	MATCH_SHORT = MATCH_MIN + 0x7E, /*!< longest without the extra byte */
	MATCH_MAX = MATCH_MIN + 0x7F + 0xFF,
	DISTANCE_MAX = 65536,
	LITERALS_MAX = 128
};

/**
 * Hash the three bytes at p, for looking up earlier copies of them.
 *
 * @param p The bytes.
 * @return An index into the hash table.
 */
static uint32_t Pack_Hash3(const uint8_t *p)
{
	uint32_t v = ((uint32_t)p[0] << 16) | ((uint32_t)p[1] << 8) | p[2];
	return (v * 2654435761u) >> (32 - HASH_BITS);
}

/**
 * Write the literal run src[start..end) as tokens.
 *
 * @param src The data being packed.
 * @param start The first literal byte.
 * @param end The byte after the last one.
 * @param dst The packed output.
 * @param out The output position, moved on.
 * @param capacity The size of dst.
 * @return 0 if dst is full, else 1.
 */
static int Pack_PutLiterals(const uint8_t *src, uint32_t start, uint32_t end, uint8_t *dst, uint32_t *out, uint32_t capacity)
{
	while (start < end) {
		uint32_t n = end - start;
		if (n > LITERALS_MAX) n = LITERALS_MAX;
		if (*out + 1 + n > capacity) return 0;
		dst[(*out)++] = (uint8_t)(n - 1);
		while (n-- > 0) dst[(*out)++] = src[start++];
	}
	return 1;
}

/**
 * Compress size bytes; returns the packed size, or 0 if it would take more
 * than capacity bytes (or the work memory can't be allocated).
 *
 * @param src The data.
 * @param size Its size in bytes.
 * @param dst Where to write the packed data.
 * @param capacity The size of dst.
 * @return The packed size, or 0.
 */
uint32_t Pack_Compress(const uint8_t *src, uint32_t size, uint8_t *dst, uint32_t capacity)
{
	uint32_t *table = malloc(sizeof(uint32_t) << HASH_BITS);
	uint32_t pos = 0, literal = 0, out = 0;
	uint32_t i;

	if (table == NULL) return 0;
	/* positions are stored + 1: 0 means none yet */
	for (i = 0; i < (1u << HASH_BITS); i++) table[i] = 0;

	while (pos + MATCH_MIN <= size) {
		uint32_t h = Pack_Hash3(src + pos);
		uint32_t candidate = table[h];
		uint32_t length = 0;

		table[h] = pos + 1;
		if (candidate != 0 && pos - (candidate - 1) <= DISTANCE_MAX) {
			const uint8_t *a = src + candidate - 1, *b = src + pos;
			uint32_t limit = size - pos;
			if (limit > MATCH_MAX) limit = MATCH_MAX;
			while (length < limit && a[length] == b[length]) length++;
		}
		if (length < MATCH_MIN) {
			pos++;
			continue;
		}

		if (!Pack_PutLiterals(src, literal, pos, dst, &out, capacity)) break;
		if (out + 4 > capacity) break;
		{
			uint32_t distance = pos - (candidate - 1) - 1;
			if (length > MATCH_SHORT) {
				dst[out++] = 0xFF;
				dst[out++] = (uint8_t)(length - MATCH_MIN - 0x7F);
			} else {
				dst[out++] = (uint8_t)(0x80 | (length - MATCH_MIN));
			}
			dst[out++] = (uint8_t)(distance >> 8);
			dst[out++] = (uint8_t)distance;
		}
		/* index the positions inside the copy too, for later matches */
		for (i = 1; i < length && pos + i + MATCH_MIN <= size; i++) table[Pack_Hash3(src + pos + i)] = pos + i + 1;
		pos += length;
		literal = pos;
	}
	free(table);
	/* ran out of room */
	if (pos + MATCH_MIN <= size) return 0;
	if (!Pack_PutLiterals(src, literal, size, dst, &out, capacity)) return 0;
	return out;
}

/**
 * Returns the unpacked size, or 0 if the data is broken or would take more
 * than capacity bytes.
 *
 * @param src The packed data.
 * @param size Its size in bytes.
 * @param dst Where to unpack it.
 * @param capacity The size of dst.
 * @return The unpacked size, or 0.
 */
uint32_t Pack_Decompress(const uint8_t *src, uint32_t size, uint8_t *dst, uint32_t capacity)
{
	uint32_t in = 0, out = 0;

	while (in < size) {
		uint8_t c = src[in++];

		if (c < 0x80) {
			uint32_t n = (uint32_t)c + 1;
			if (in + n > size || out + n > capacity) return 0;
			while (n-- > 0) dst[out++] = src[in++];
		} else {
			uint32_t length = (uint32_t)(c & 0x7F) + MATCH_MIN;
			uint32_t distance;
			if ((c & 0x7F) == 0x7F) {
				if (in >= size) return 0;
				length += src[in++];
			}
			if (in + 2 > size) return 0;
			distance = (((uint32_t)src[in] << 8) | src[in + 1]) + 1;
			in += 2;
			if (distance > out || out + length > capacity) return 0;
			/* byte by byte: the copy may overlap what it writes */
			while (length-- > 0) {
				dst[out] = dst[out - distance];
				out++;
			}
		}
	}
	return out;
}

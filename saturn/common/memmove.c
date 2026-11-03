/** @file saturn/common/memmove.c memmove() that copies words, not bytes.
 *
 * newlib is built for size (build-toolchain.sh), which leaves its memmove()
 * copying a byte at a time, and the engine moves whole screens with it.
 * This one replaces it: memcpy() (newlib's is fast, in assembly) when the
 * two don't overlap, else words in the direction that keeps the source. */

#include <stdint.h>
#include <string.h>

/**
 * Copy memory that may overlap.
 *
 * @param dst Where to copy to.
 * @param src What to copy.
 * @param n How many bytes.
 * @return dst.
 */
void *memmove(void *dst, const void *src, size_t n)
{
	uint8_t *d = dst;
	const uint8_t *s = src;
	int words = (((uintptr_t)d ^ (uintptr_t)s) & 3) == 0;

	if (d == s || n == 0) return dst;
	if (d + n <= s || s + n <= d) return memcpy(dst, src, n);

	if (d < s) {
		/* forwards: the source ahead is read before it is overwritten */
		if (words) {
			while (((uintptr_t)d & 3) != 0 && n != 0) {
				*d++ = *s++;
				n--;
			}
			for (; n >= 4; n -= 4, d += 4, s += 4) *(uint32_t *)d = *(const uint32_t *)s;
		}
		while (n-- != 0) *d++ = *s++;
	} else {
		/* backwards, from the end */
		d += n;
		s += n;
		if (words) {
			while (((uintptr_t)d & 3) != 0 && n != 0) {
				*--d = *--s;
				n--;
			}
			for (; n >= 4; n -= 4) {
				d -= 4;
				s -= 4;
				*(uint32_t *)d = *(const uint32_t *)s;
			}
		}
		while (n-- != 0) *--d = *--s;
	}
	return dst;
}

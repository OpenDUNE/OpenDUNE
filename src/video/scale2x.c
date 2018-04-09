/*
 * This file is part of the Scale2x project.
 *
 * Copyright (C) 2001, 2002, 2003, 2004 Andrea Mazzoleni
 * Copyright (C) 2015 Thomas Bernard
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */

/*
 * This file contains C, SSE2 and Altivec implementation of the Scale2x effect.
 *
 * You can find an high level description of the effect at :
 *
 * http://www.scale2x.it/
 */

#ifdef __ALTIVEC__
#include <altivec.h>
#endif

#include "scale2x.h"

#ifdef USE_SCALE2X_SSE2
/**
 * Include SSE2 intrinsics.
 *
 * A nice reference is available at:
 * https://software.intel.com/sites/landingpage/IntrinsicsGuide/
 */
#include <emmintrin.h>
#endif

#include <assert.h>

#ifdef _MSC_VER
#define inline __inline
#define restrict __restrict
#else /* _MSC_VER */
#define inline __inline__
#define restrict __restrict__
#endif /* _MSC_VER */

/***************************************************************************/
/* Scale2x C implementation */

/**
 * Define the macro USE_SCALE_RANDOMWRITE to enable an optimized version that
 * writes memory in random order.
 *
 * This version can operate at double speed if you write in system memory.
 * But it's a lot slower if you write in video memory, becasue it writes
 * memory in two different locations at the same time, messing up with the
 * video memory write combining.
 *
 * Enable it only if you are sure to never write directly in video memory.
 */
/* #define USE_SCALE_RANDOMWRITE */

#ifdef USE_SCALE_RANDOMWRITE
static inline void scale2x_8_def_whole(scale2x_uint8* restrict dst0, scale2x_uint8* restrict dst1, const scale2x_uint8* restrict src0, const scale2x_uint8* restrict src1, const scale2x_uint8* restrict src2, unsigned count)
{
	assert(count >= 2);

	/* first pixel */
	if (src0[0] != src2[0] && src1[0] != src1[1]) {
		dst0[0] = src1[0] == src0[0] ? src0[0] : src1[0];
		dst0[1] = src1[1] == src0[0] ? src0[0] : src1[0];
		dst1[0] = src1[0] == src2[0] ? src2[0] : src1[0];
		dst1[1] = src1[1] == src2[0] ? src2[0] : src1[0];
	} else {
		dst0[0] = src1[0];
		dst0[1] = src1[0];
		dst1[0] = src1[0];
		dst1[1] = src1[0];
	}
	++src0;
	++src1;
	++src2;
	dst0 += 2;
	dst1 += 2;

	/* central pixels */
	count -= 2;
	while (count) {
		if (src0[0] != src2[0] && src1[-1] != src1[1]) {
			dst0[0] = src1[-1] == src0[0] ? src0[0] : src1[0];
			dst0[1] = src1[1] == src0[0] ? src0[0] : src1[0];
			dst1[0] = src1[-1] == src2[0] ? src2[0] : src1[0];
			dst1[1] = src1[1] == src2[0] ? src2[0] : src1[0];
		} else {
			dst0[0] = src1[0];
			dst0[1] = src1[0];
			dst1[0] = src1[0];
			dst1[1] = src1[0];
		}

		++src0;
		++src1;
		++src2;
		dst0 += 2;
		dst1 += 2;
		--count;
	}

	/* last pixel */
	if (src0[0] != src2[0] && src1[-1] != src1[0]) {
		dst0[0] = src1[-1] == src0[0] ? src0[0] : src1[0];
		dst0[1] = src1[0] == src0[0] ? src0[0] : src1[0];
		dst1[0] = src1[-1] == src2[0] ? src2[0] : src1[0];
		dst1[1] = src1[0] == src2[0] ? src2[0] : src1[0];
	} else {
		dst0[0] = src1[0];
		dst0[1] = src1[0];
		dst1[0] = src1[0];
		dst1[1] = src1[0];
	}
}
#endif

#ifndef USE_SCALE_RANDOMWRITE
static inline void scale2x_8_def_border(scale2x_uint8* restrict dst, const scale2x_uint8* restrict src0, const scale2x_uint8* restrict src1, const scale2x_uint8* restrict src2, unsigned count)
{
	assert(count >= 2);

	/* first pixel */
	if (src0[0] != src2[0] && src1[0] != src1[1]) {
		dst[0] = src1[0] == src0[0] ? src0[0] : src1[0];
		dst[1] = src1[1] == src0[0] ? src0[0] : src1[0];
	} else {
		dst[0] = src1[0];
		dst[1] = src1[0];
	}
	++src0;
	++src1;
	++src2;
	dst += 2;

	/* central pixels */
	count -= 2;
	while (count) {
		if (src0[0] != src2[0] && src1[-1] != src1[1]) {
			dst[0] = src1[-1] == src0[0] ? src0[0] : src1[0];
			dst[1] = src1[1] == src0[0] ? src0[0] : src1[0];
		} else {
			dst[0] = src1[0];
			dst[1] = src1[0];
		}

		++src0;
		++src1;
		++src2;
		dst += 2;
		--count;
	}

	/* last pixel */
	if (src0[0] != src2[0] && src1[-1] != src1[0]) {
		dst[0] = src1[-1] == src0[0] ? src0[0] : src1[0];
		dst[1] = src1[0] == src0[0] ? src0[0] : src1[0];
	} else {
		dst[0] = src1[0];
		dst[1] = src1[0];
	}
}
#endif

static inline void scale2x_8_def_center(scale2x_uint8* restrict dst, const scale2x_uint8* restrict src0, const scale2x_uint8* restrict src1, const scale2x_uint8* restrict src2, unsigned count)
{
	assert(count >= 2);

	/* first pixel */
	if (src0[0] != src2[0] && src1[0] != src1[1]) {
		dst[0] = src1[0];
		dst[1] = (src1[1] == src0[0] && src1[0] != src2[1]) || (src1[1] == src2[0] && src1[0] != src0[1]) ? src1[1] : src1[0];
	} else {
		dst[0] = src1[0];
		dst[1] = src1[0];
	}
	++src0;
	++src1;
	++src2;
	dst += 2;

	/* central pixels */
	count -= 2;
	while (count) {
		if (src0[0] != src2[0] && src1[-1] != src1[1]) {
			dst[0] = (src1[-1] == src0[0] && src1[0] != src2[-1]) || (src1[-1] == src2[0] && src1[0] != src0[-1]) ? src1[-1] : src1[0];
			dst[1] = (src1[1] == src0[0] && src1[0] != src2[1]) || (src1[1] == src2[0] && src1[0] != src0[1]) ? src1[1] : src1[0];
		} else {
			dst[0] = src1[0];
			dst[1] = src1[0];
		}

		++src0;
		++src1;
		++src2;
		dst += 2;
		--count;
	}

	/* last pixel */
	if (src0[0] != src2[0] && src1[-1] != src1[0]) {
		dst[0] = (src1[-1] == src0[0] && src1[0] != src2[-1]) || (src1[-1] == src2[0] && src1[0] != src0[-1]) ? src1[-1] : src1[0];
		dst[1] = src1[0];
	} else {
		dst[0] = src1[0];
		dst[1] = src1[0];
	}
}

#ifdef USE_SCALE_RANDOMWRITE
static inline void scale2x_16_def_whole(scale2x_uint16* restrict dst0, scale2x_uint16* restrict dst1, const scale2x_uint16* restrict src0, const scale2x_uint16* restrict src1, const scale2x_uint16* restrict src2, unsigned count)
{
	assert(count >= 2);

	/* first pixel */
	if (src0[0] != src2[0] && src1[0] != src1[1]) {
		dst0[0] = src1[0] == src0[0] ? src0[0] : src1[0];
		dst0[1] = src1[1] == src0[0] ? src0[0] : src1[0];
		dst1[0] = src1[0] == src2[0] ? src2[0] : src1[0];
		dst1[1] = src1[1] == src2[0] ? src2[0] : src1[0];
	} else {
		dst0[0] = src1[0];
		dst0[1] = src1[0];
		dst1[0] = src1[0];
		dst1[1] = src1[0];
	}
	++src0;
	++src1;
	++src2;
	dst0 += 2;
	dst1 += 2;

	/* central pixels */
	count -= 2;
	while (count) {
		if (src0[0] != src2[0] && src1[-1] != src1[1]) {
			dst0[0] = src1[-1] == src0[0] ? src0[0] : src1[0];
			dst0[1] = src1[1] == src0[0] ? src0[0] : src1[0];
			dst1[0] = src1[-1] == src2[0] ? src2[0] : src1[0];
			dst1[1] = src1[1] == src2[0] ? src2[0] : src1[0];
		} else {
			dst0[0] = src1[0];
			dst0[1] = src1[0];
			dst1[0] = src1[0];
			dst1[1] = src1[0];
		}

		++src0;
		++src1;
		++src2;
		dst0 += 2;
		dst1 += 2;
		--count;
	}

	/* last pixel */
	if (src0[0] != src2[0] && src1[-1] != src1[0]) {
		dst0[0] = src1[-1] == src0[0] ? src0[0] : src1[0];
		dst0[1] = src1[0] == src0[0] ? src0[0] : src1[0];
		dst1[0] = src1[-1] == src2[0] ? src2[0] : src1[0];
		dst1[1] = src1[0] == src2[0] ? src2[0] : src1[0];
	} else {
		dst0[0] = src1[0];
		dst0[1] = src1[0];
		dst1[0] = src1[0];
		dst1[1] = src1[0];
	}
}
#endif

#ifndef USE_SCALE_RANDOMWRITE
static inline void scale2x_16_def_border(scale2x_uint16* restrict dst, const scale2x_uint16* restrict src0, const scale2x_uint16* restrict src1, const scale2x_uint16* restrict src2, unsigned count)
{
	assert(count >= 2);

	/* first pixel */
	if (src0[0] != src2[0] && src1[0] != src1[1]) {
		dst[0] = src1[0] == src0[0] ? src0[0] : src1[0];
		dst[1] = src1[1] == src0[0] ? src0[0] : src1[0];
	} else {
		dst[0] = src1[0];
		dst[1] = src1[0];
	}
	++src0;
	++src1;
	++src2;
	dst += 2;

	/* central pixels */
	count -= 2;
	while (count) {
		if (src0[0] != src2[0] && src1[-1] != src1[1]) {
			dst[0] = src1[-1] == src0[0] ? src0[0] : src1[0];
			dst[1] = src1[1] == src0[0] ? src0[0] : src1[0];
		} else {
			dst[0] = src1[0];
			dst[1] = src1[0];
		}

		++src0;
		++src1;
		++src2;
		dst += 2;
		--count;
	}

	/* last pixel */
	if (src0[0] != src2[0] && src1[-1] != src1[0]) {
		dst[0] = src1[-1] == src0[0] ? src0[0] : src1[0];
		dst[1] = src1[0] == src0[0] ? src0[0] : src1[0];
	} else {
		dst[0] = src1[0];
		dst[1] = src1[0];
	}
}
#endif

static inline void scale2x_16_def_center(scale2x_uint16* restrict dst, const scale2x_uint16* restrict src0, const scale2x_uint16* restrict src1, const scale2x_uint16* restrict src2, unsigned count)
{
	assert(count >= 2);

	/* first pixel */
	if (src0[0] != src2[0] && src1[0] != src1[1]) {
		dst[0] = src1[0];
		dst[1] = (src1[1] == src0[0] && src1[0] != src2[1]) || (src1[1] == src2[0] && src1[0] != src0[1]) ? src1[1] : src1[0];
	} else {
		dst[0] = src1[0];
		dst[1] = src1[0];
	}
	++src0;
	++src1;
	++src2;
	dst += 2;

	/* central pixels */
	count -= 2;
	while (count) {
		if (src0[0] != src2[0] && src1[-1] != src1[1]) {
			dst[0] = (src1[-1] == src0[0] && src1[0] != src2[-1]) || (src1[-1] == src2[0] && src1[0] != src0[-1]) ? src1[-1] : src1[0];
			dst[1] = (src1[1] == src0[0] && src1[0] != src2[1]) || (src1[1] == src2[0] && src1[0] != src0[1]) ? src1[1] : src1[0];
		} else {
			dst[0] = src1[0];
			dst[1] = src1[0];
		}

		++src0;
		++src1;
		++src2;
		dst += 2;
		--count;
	}

	/* last pixel */
	if (src0[0] != src2[0] && src1[-1] != src1[0]) {
		dst[0] = (src1[-1] == src0[0] && src1[0] != src2[-1]) || (src1[-1] == src2[0] && src1[0] != src0[-1]) ? src1[-1] : src1[0];
		dst[1] = src1[0];
	} else {
		dst[0] = src1[0];
		dst[1] = src1[0];
	}
}

#ifdef USE_SCALE_RANDOMWRITE
static inline void scale2x_32_def_whole(scale2x_uint32* restrict dst0, scale2x_uint32* restrict dst1, const scale2x_uint32* restrict src0, const scale2x_uint32* restrict src1, const scale2x_uint32* restrict src2, unsigned count)
{
	assert(count >= 2);

	/* first pixel */
	if (src0[0] != src2[0] && src1[0] != src1[1]) {
		dst0[0] = src1[0] == src0[0] ? src0[0] : src1[0];
		dst0[1] = src1[1] == src0[0] ? src0[0] : src1[0];
		dst1[0] = src1[0] == src2[0] ? src2[0] : src1[0];
		dst1[1] = src1[1] == src2[0] ? src2[0] : src1[0];
	} else {
		dst0[0] = src1[0];
		dst0[1] = src1[0];
		dst1[0] = src1[0];
		dst1[1] = src1[0];
	}
	++src0;
	++src1;
	++src2;
	dst0 += 2;
	dst1 += 2;

	/* central pixels */
	count -= 2;
	while (count) {
		if (src0[0] != src2[0] && src1[-1] != src1[1]) {
			dst0[0] = src1[-1] == src0[0] ? src0[0] : src1[0];
			dst0[1] = src1[1] == src0[0] ? src0[0] : src1[0];
			dst1[0] = src1[-1] == src2[0] ? src2[0] : src1[0];
			dst1[1] = src1[1] == src2[0] ? src2[0] : src1[0];
		} else {
			dst0[0] = src1[0];
			dst0[1] = src1[0];
			dst1[0] = src1[0];
			dst1[1] = src1[0];
		}

		++src0;
		++src1;
		++src2;
		dst0 += 2;
		dst1 += 2;
		--count;
	}

	/* last pixel */
	if (src0[0] != src2[0] && src1[-1] != src1[0]) {
		dst0[0] = src1[-1] == src0[0] ? src0[0] : src1[0];
		dst0[1] = src1[0] == src0[0] ? src0[0] : src1[0];
		dst1[0] = src1[-1] == src2[0] ? src2[0] : src1[0];
		dst1[1] = src1[0] == src2[0] ? src2[0] : src1[0];
	} else {
		dst0[0] = src1[0];
		dst0[1] = src1[0];
		dst1[0] = src1[0];
		dst1[1] = src1[0];
	}
}
#endif

#ifndef USE_SCALE_RANDOMWRITE
static inline void scale2x_32_def_border(scale2x_uint32* restrict dst, const scale2x_uint32* restrict src0, const scale2x_uint32* restrict src1, const scale2x_uint32* restrict src2, unsigned count)
{
	assert(count >= 2);

	/* first pixel */
	if (src0[0] != src2[0] && src1[0] != src1[1]) {
		dst[0] = src1[0] == src0[0] ? src0[0] : src1[0];
		dst[1] = src1[1] == src0[0] ? src0[0] : src1[0];
	} else {
		dst[0] = src1[0];
		dst[1] = src1[0];
	}
	++src0;
	++src1;
	++src2;
	dst += 2;

	/* central pixels */
	count -= 2;
	while (count) {
		if (src0[0] != src2[0] && src1[-1] != src1[1]) {
			dst[0] = src1[-1] == src0[0] ? src0[0] : src1[0];
			dst[1] = src1[1] == src0[0] ? src0[0] : src1[0];
		} else {
			dst[0] = src1[0];
			dst[1] = src1[0];
		}

		++src0;
		++src1;
		++src2;
		dst += 2;
		--count;
	}

	/* last pixel */
	if (src0[0] != src2[0] && src1[-1] != src1[0]) {
		dst[0] = src1[-1] == src0[0] ? src0[0] : src1[0];
		dst[1] = src1[0] == src0[0] ? src0[0] : src1[0];
	} else {
		dst[0] = src1[0];
		dst[1] = src1[0];
	}
}
#endif

static inline void scale2x_32_def_center(scale2x_uint32* restrict dst, const scale2x_uint32* restrict src0, const scale2x_uint32* restrict src1, const scale2x_uint32* restrict src2, unsigned count)
{
	assert(count >= 2);

	/* first pixel */
	if (src0[0] != src2[0] && src1[0] != src1[1]) {
		dst[0] = src1[0];
		dst[1] = (src1[1] == src0[0] && src1[0] != src2[1]) || (src1[1] == src2[0] && src1[0] != src0[1]) ? src1[1] : src1[0];
	} else {
		dst[0] = src1[0];
		dst[1] = src1[0];
	}
	++src0;
	++src1;
	++src2;
	dst += 2;

	/* central pixels */
	count -= 2;
	while (count) {
		if (src0[0] != src2[0] && src1[-1] != src1[1]) {
			dst[0] = (src1[-1] == src0[0] && src1[0] != src2[-1]) || (src1[-1] == src2[0] && src1[0] != src0[-1]) ? src1[-1] : src1[0];
			dst[1] = (src1[1] == src0[0] && src1[0] != src2[1]) || (src1[1] == src2[0] && src1[0] != src0[1]) ? src1[1] : src1[0];
		} else {
			dst[0] = src1[0];
			dst[1] = src1[0];
		}

		++src0;
		++src1;
		++src2;
		dst += 2;
		--count;
	}

	/* last pixel */
	if (src0[0] != src2[0] && src1[-1] != src1[0]) {
		dst[0] = (src1[-1] == src0[0] && src1[0] != src2[-1]) || (src1[-1] == src2[0] && src1[0] != src0[-1]) ? src1[-1] : src1[0];
		dst[1] = src1[0];
	} else {
		dst[0] = src1[0];
		dst[1] = src1[0];
	}
}

/**
 * Scale by a factor of 2 a row of pixels of 8 bits.
 * The function is implemented in C.
 * The pixels over the left and right borders are assumed of the same color of
 * the pixels on the border.
 * Note that the implementation is optimized to write data sequentially to
 * maximize the bandwidth on video memory.
 * \param src0 Pointer at the first pixel of the previous row.
 * \param src1 Pointer at the first pixel of the current row.
 * \param src2 Pointer at the first pixel of the next row.
 * \param count Length in pixels of the src0, src1 and src2 rows.
 * It must be at least 2.
 * \param dst0 First destination row, double length in pixels.
 * \param dst1 Second destination row, double length in pixels.
 */
void scale2x_8_def(scale2x_uint8* dst0, scale2x_uint8* dst1, const scale2x_uint8* src0, const scale2x_uint8* src1, const scale2x_uint8* src2, unsigned count)
{
#ifdef USE_SCALE_RANDOMWRITE
	scale2x_8_def_whole(dst0, dst1, src0, src1, src2, count);
#else
	scale2x_8_def_border(dst0, src0, src1, src2, count);
	scale2x_8_def_border(dst1, src2, src1, src0, count);
#endif
}

/**
 * Scale by a factor of 2 a row of pixels of 16 bits.
 * This function operates like scale2x_8_def() but for 16 bits pixels.
 * \param src0 Pointer at the first pixel of the previous row.
 * \param src1 Pointer at the first pixel of the current row.
 * \param src2 Pointer at the first pixel of the next row.
 * \param count Length in pixels of the src0, src1 and src2 rows.
 * It must be at least 2.
 * \param dst0 First destination row, double length in pixels.
 * \param dst1 Second destination row, double length in pixels.
 */
void scale2x_16_def(scale2x_uint16* dst0, scale2x_uint16* dst1, const scale2x_uint16* src0, const scale2x_uint16* src1, const scale2x_uint16* src2, unsigned count)
{
#ifdef USE_SCALE_RANDOMWRITE
	scale2x_16_def_whole(dst0, dst1, src0, src1, src2, count);
#else
	scale2x_16_def_border(dst0, src0, src1, src2, count);
	scale2x_16_def_border(dst1, src2, src1, src0, count);
#endif
}

/**
 * Scale by a factor of 2 a row of pixels of 32 bits.
 * This function operates like scale2x_8_def() but for 32 bits pixels.
 * \param src0 Pointer at the first pixel of the previous row.
 * \param src1 Pointer at the first pixel of the current row.
 * \param src2 Pointer at the first pixel of the next row.
 * \param count Length in pixels of the src0, src1 and src2 rows.
 * It must be at least 2.
 * \param dst0 First destination row, double length in pixels.
 * \param dst1 Second destination row, double length in pixels.
 */
void scale2x_32_def(scale2x_uint32* dst0, scale2x_uint32* dst1, const scale2x_uint32* src0, const scale2x_uint32* src1, const scale2x_uint32* src2, unsigned count)
{
#ifdef USE_SCALE_RANDOMWRITE
	scale2x_32_def_whole(dst0, dst1, src0, src1, src2, count);
#else
	scale2x_32_def_border(dst0, src0, src1, src2, count);
	scale2x_32_def_border(dst1, src2, src1, src0, count);
#endif
}

/**
 * Scale by a factor of 2x3 a row of pixels of 8 bits.
 * \note Like scale2x_8_def();
 */
void scale2x3_8_def(scale2x_uint8* dst0, scale2x_uint8* dst1, scale2x_uint8* dst2, const scale2x_uint8* src0, const scale2x_uint8* src1, const scale2x_uint8* src2, unsigned count)
{
#ifdef USE_SCALE_RANDOMWRITE
	scale2x_8_def_whole(dst0, dst2, src0, src1, src2, count);
	scale2x_8_def_center(dst1, src0, src1, src2, count);
#else
	scale2x_8_def_border(dst0, src0, src1, src2, count);
	scale2x_8_def_center(dst1, src0, src1, src2, count);
	scale2x_8_def_border(dst2, src2, src1, src0, count);
#endif
}

/**
 * Scale by a factor of 2x3 a row of pixels of 16 bits.
 * \note Like scale2x_16_def();
 */
void scale2x3_16_def(scale2x_uint16* dst0, scale2x_uint16* dst1, scale2x_uint16* dst2, const scale2x_uint16* src0, const scale2x_uint16* src1, const scale2x_uint16* src2, unsigned count)
{
#ifdef USE_SCALE_RANDOMWRITE
	scale2x_16_def_whole(dst0, dst2, src0, src1, src2, count);
	scale2x_16_def_center(dst1, src0, src1, src2, count);
#else
	scale2x_16_def_border(dst0, src0, src1, src2, count);
	scale2x_16_def_center(dst1, src0, src1, src2, count);
	scale2x_16_def_border(dst2, src2, src1, src0, count);
#endif
}

/**
 * Scale by a factor of 2x3 a row of pixels of 32 bits.
 * \note Like scale2x_32_def();
 */
void scale2x3_32_def(scale2x_uint32* dst0, scale2x_uint32* dst1, scale2x_uint32* dst2, const scale2x_uint32* src0, const scale2x_uint32* src1, const scale2x_uint32* src2, unsigned count)
{
#ifdef USE_SCALE_RANDOMWRITE
	scale2x_32_def_whole(dst0, dst2, src0, src1, src2, count);
	scale2x_32_def_center(dst1, src0, src1, src2, count);
#else
	scale2x_32_def_border(dst0, src0, src1, src2, count);
	scale2x_32_def_center(dst1, src0, src1, src2, count);
	scale2x_32_def_border(dst2, src2, src1, src0, count);
#endif
}

/**
 * Scale by a factor of 2x4 a row of pixels of 8 bits.
 * \note Like scale2x_8_def();
 */
void scale2x4_8_def(scale2x_uint8* dst0, scale2x_uint8* dst1, scale2x_uint8* dst2, scale2x_uint8* dst3, const scale2x_uint8* src0, const scale2x_uint8* src1, const scale2x_uint8* src2, unsigned count)
{
#ifdef USE_SCALE_RANDOMWRITE
	scale2x_8_def_whole(dst0, dst3, src0, src1, src2, count);
	scale2x_8_def_center(dst1, src0, src1, src2, count);
	scale2x_8_def_center(dst2, src0, src1, src2, count);
#else
	scale2x_8_def_border(dst0, src0, src1, src2, count);
	scale2x_8_def_center(dst1, src0, src1, src2, count);
	scale2x_8_def_center(dst2, src0, src1, src2, count);
	scale2x_8_def_border(dst3, src2, src1, src0, count);
#endif
}

/**
 * Scale by a factor of 2x4 a row of pixels of 16 bits.
 * \note Like scale2x_16_def();
 */
void scale2x4_16_def(scale2x_uint16* dst0, scale2x_uint16* dst1, scale2x_uint16* dst2, scale2x_uint16* dst3, const scale2x_uint16* src0, const scale2x_uint16* src1, const scale2x_uint16* src2, unsigned count)
{
#ifdef USE_SCALE_RANDOMWRITE
	scale2x_16_def_whole(dst0, dst3, src0, src1, src2, count);
	scale2x_16_def_center(dst1, src0, src1, src2, count);
	scale2x_16_def_center(dst2, src0, src1, src2, count);
#else
	scale2x_16_def_border(dst0, src0, src1, src2, count);
	scale2x_16_def_center(dst1, src0, src1, src2, count);
	scale2x_16_def_center(dst2, src0, src1, src2, count);
	scale2x_16_def_border(dst3, src2, src1, src0, count);
#endif
}

/**
 * Scale by a factor of 2x4 a row of pixels of 32 bits.
 * \note Like scale2x_32_def();
 */
void scale2x4_32_def(scale2x_uint32* dst0, scale2x_uint32* dst1, scale2x_uint32* dst2, scale2x_uint32* dst3, const scale2x_uint32* src0, const scale2x_uint32* src1, const scale2x_uint32* src2, unsigned count)
{
#ifdef USE_SCALE_RANDOMWRITE
	scale2x_32_def_whole(dst0, dst3, src0, src1, src2, count);
	scale2x_32_def_center(dst1, src0, src1, src2, count);
	scale2x_32_def_center(dst2, src0, src1, src2, count);
#else
	scale2x_32_def_border(dst0, src0, src1, src2, count);
	scale2x_32_def_center(dst1, src0, src1, src2, count);
	scale2x_32_def_center(dst2, src0, src1, src2, count);
	scale2x_32_def_border(dst3, src2, src1, src0, count);
#endif
}

/***************************************************************************/
/* Scale2x SSE2 implementation */

#ifdef USE_SCALE2X_SSE2
/*
 * Apply the Scale2x effect at a single row.
 * This function must be called only by the other scale2x functions.
 *
 * Considering the pixel map :
 *
 *      ABC (src0)
 *      DEF (src1)
 *      GHI (src2)
 *
 * this functions compute 2 new pixels in substitution of the source pixel E
 * like this map :
 *
 *      ab (dst)
 */

/**
 * SCALE2X_SEL(A, B, cond) = cond ? A : B;
 */
#define SCALE2X_SEL(A, B, cond) \
	_mm_or_si128(_mm_and_si128((cond), (A)), _mm_andnot_si128((cond), (B)))

static inline void scale2x_8_sse2_border(scale2x_uint8* dst, const scale2x_uint8* src0, const scale2x_uint8* src1, const scale2x_uint8* src2, unsigned count)
{
	__m128i B, D, E, F, H, a, b;
	__m128i BDeq, BFeq, BHeq, DFeq;
	const __m128i mask_first = _mm_set_epi8(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, '\xff');
	const __m128i mask_last = _mm_set_epi8('\xff', 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	const __m128i* s0 = (const __m128i*)src0;
	const __m128i* s1 = (const __m128i*)src1;
	const __m128i* s2 = (const __m128i*)src2;
	__m128i* d = (__m128i*)dst;

	/* count must be aligned */
	assert(count >= 32);
	assert(count % 16 == 0);

	/* all memory must be aligned */
	assert(scale2x_align_ptr(dst) == dst);
	assert(scale2x_align_ptr(src0) == src0);
	assert(scale2x_align_ptr(src1) == src1);
	assert(scale2x_align_ptr(src2) == src2);

	/* first run */
	B = s0[0];
	E = s1[0];
	H = s2[0];
	D = _mm_or_si128(_mm_and_si128(E, mask_first), _mm_slli_si128(E, 1));
	F = _mm_or_si128(_mm_srli_si128(E, 1), _mm_slli_si128(s1[1], 15));
	++s0;
	++s1;
	++s2;

	BDeq = _mm_cmpeq_epi8(B, D);
	BFeq = _mm_cmpeq_epi8(B, F);
	BHeq = _mm_cmpeq_epi8(B, H);
	DFeq = _mm_cmpeq_epi8(D, F);

	a = SCALE2X_SEL(B, E, _mm_andnot_si128(DFeq, _mm_andnot_si128(BHeq, BDeq)));
	b = SCALE2X_SEL(B, E, _mm_andnot_si128(DFeq, _mm_andnot_si128(BHeq, BFeq)));

	d[0] = _mm_unpacklo_epi8(a, b);
	d[1] = _mm_unpackhi_epi8(a, b);
	d += 2;

	/* central run */
	for (count -= 32; count > 0; count -= 16) {
		B = s0[0];
		E = s1[0];
		H = s2[0];
		D = _mm_or_si128(_mm_srli_si128(s1[-1], 15), _mm_slli_si128(E, 1));
		F = _mm_or_si128(_mm_srli_si128(E, 1), _mm_slli_si128(s1[1], 15));
		++s0;
		++s1;
		++s2;

		BDeq = _mm_cmpeq_epi8(B, D);
		BFeq = _mm_cmpeq_epi8(B, F);
		BHeq = _mm_cmpeq_epi8(B, H);
		DFeq = _mm_cmpeq_epi8(D, F);

		a = SCALE2X_SEL(B, E, _mm_andnot_si128(DFeq, _mm_andnot_si128(BHeq, BDeq)));
		b = SCALE2X_SEL(B, E, _mm_andnot_si128(DFeq, _mm_andnot_si128(BHeq, BFeq)));

		d[0] = _mm_unpacklo_epi8(a, b);
		d[1] = _mm_unpackhi_epi8(a, b);
		d += 2;
	}

	/* last run */
	B = s0[0];
	E = s1[0];
	H = s2[0];
	D = _mm_or_si128(_mm_srli_si128(s1[-1], 15), _mm_slli_si128(E, 1));
	F = _mm_or_si128(_mm_srli_si128(E, 1), _mm_and_si128(E, mask_last));

	BDeq = _mm_cmpeq_epi8(B, D);
	BFeq = _mm_cmpeq_epi8(B, F);
	BHeq = _mm_cmpeq_epi8(B, H);
	DFeq = _mm_cmpeq_epi8(D, F);

	a = SCALE2X_SEL(B, E, _mm_andnot_si128(DFeq, _mm_andnot_si128(BHeq, BDeq)));
	b = SCALE2X_SEL(B, E, _mm_andnot_si128(DFeq, _mm_andnot_si128(BHeq, BFeq)));

	d[0] = _mm_unpacklo_epi8(a, b);
	d[1] = _mm_unpackhi_epi8(a, b);
}

static inline void scale2x_16_sse2_border(scale2x_uint16* dst, const scale2x_uint16* src0, const scale2x_uint16* src1, const scale2x_uint16* src2, unsigned count)
{
	__m128i B, D, E, F, H, a, b;
	__m128i BDeq, BFeq, BHeq, DFeq;
	const __m128i mask_first = _mm_set_epi16(0, 0, 0, 0, 0, 0, 0, (uint16_t)0xffff);
	const __m128i mask_last = _mm_set_epi16((uint16_t)0xffff, 0, 0, 0, 0, 0, 0, 0);
	const __m128i* s0 = (const __m128i*)src0;
	const __m128i* s1 = (const __m128i*)src1;
	const __m128i* s2 = (const __m128i*)src2;
	__m128i* d = (__m128i*)dst;

	/* count must be aligned */
	assert(count >= 16);
	assert(count % 8 == 0);

	/* all memory must be aligned */
	assert(scale2x_align_ptr(dst) == dst);
	assert(scale2x_align_ptr(src0) == src0);
	assert(scale2x_align_ptr(src1) == src1);
	assert(scale2x_align_ptr(src2) == src2);

	/* first run */
	B = s0[0];
	E = s1[0];
	H = s2[0];
	D = _mm_or_si128(_mm_and_si128(E, mask_first), _mm_slli_si128(E, 2));
	F = _mm_or_si128(_mm_srli_si128(E, 2), _mm_slli_si128(s1[1], 14));
	++s0;
	++s1;
	++s2;

	BDeq = _mm_cmpeq_epi16(B, D);
	BFeq = _mm_cmpeq_epi16(B, F);
	BHeq = _mm_cmpeq_epi16(B, H);
	DFeq = _mm_cmpeq_epi16(D, F);

	a = SCALE2X_SEL(B, E, _mm_andnot_si128(DFeq, _mm_andnot_si128(BHeq, BDeq)));
	b = SCALE2X_SEL(B, E, _mm_andnot_si128(DFeq, _mm_andnot_si128(BHeq, BFeq)));

	d[0] = _mm_unpacklo_epi16(a, b);
	d[1] = _mm_unpackhi_epi16(a, b);
	d += 2;

	/* central run */
	for (count -= 16; count > 0; count -= 8) {
		B = s0[0];
		E = s1[0];
		H = s2[0];
		D = _mm_or_si128(_mm_srli_si128(s1[-1], 14), _mm_slli_si128(E, 2));
		F = _mm_or_si128(_mm_srli_si128(E, 2), _mm_slli_si128(s1[1], 14));
		++s0;
		++s1;
		++s2;

		BDeq = _mm_cmpeq_epi16(B, D);
		BFeq = _mm_cmpeq_epi16(B, F);
		BHeq = _mm_cmpeq_epi16(B, H);
		DFeq = _mm_cmpeq_epi16(D, F);

		a = SCALE2X_SEL(B, E, _mm_andnot_si128(DFeq, _mm_andnot_si128(BHeq, BDeq)));
		b = SCALE2X_SEL(B, E, _mm_andnot_si128(DFeq, _mm_andnot_si128(BHeq, BFeq)));

		d[0] = _mm_unpacklo_epi16(a, b);
		d[1] = _mm_unpackhi_epi16(a, b);
		d += 2;
	}

	/* last run */
	B = s0[0];
	E = s1[0];
	H = s2[0];
	D = _mm_or_si128(_mm_srli_si128(s1[-1], 14), _mm_slli_si128(E, 2));
	F = _mm_or_si128(_mm_srli_si128(E, 2), _mm_and_si128(E, mask_last));

	BDeq = _mm_cmpeq_epi16(B, D);
	BFeq = _mm_cmpeq_epi16(B, F);
	BHeq = _mm_cmpeq_epi16(B, H);
	DFeq = _mm_cmpeq_epi16(D, F);

	a = SCALE2X_SEL(B, E, _mm_andnot_si128(DFeq, _mm_andnot_si128(BHeq, BDeq)));
	b = SCALE2X_SEL(B, E, _mm_andnot_si128(DFeq, _mm_andnot_si128(BHeq, BFeq)));

	d[0] = _mm_unpacklo_epi16(a, b);
	d[1] = _mm_unpackhi_epi16(a, b);
}

static inline void scale2x_32_sse2_border(scale2x_uint32* dst, const scale2x_uint32* src0, const scale2x_uint32* src1, const scale2x_uint32* src2, unsigned count)
{
	__m128i B, D, E, F, H, a, b;
	__m128i BDeq, BFeq, BHeq, DFeq;
	const __m128i mask_first = _mm_set_epi32(0, 0, 0, 0xffffffff);
	const __m128i mask_last = _mm_set_epi32(0xffffffff, 0, 0, 0);
	const __m128i* s0 = (const __m128i*)src0;
	const __m128i* s1 = (const __m128i*)src1;
	const __m128i* s2 = (const __m128i*)src2;
	__m128i* d = (__m128i*)dst;

	/* count must be aligned */
	assert(count >= 8);
	assert(count % 4 == 0);

	/* memory must be aligned */
	assert(scale2x_align_ptr(dst) == dst);
	assert(scale2x_align_ptr(src0) == src0);
	assert(scale2x_align_ptr(src1) == src1);
	assert(scale2x_align_ptr(src2) == src2);

	/* first run */
	B = s0[0];
	E = s1[0];
	H = s2[0];
	D = _mm_or_si128(_mm_and_si128(E, mask_first), _mm_slli_si128(E, 4));
	F = _mm_or_si128(_mm_srli_si128(E, 4), _mm_slli_si128(s1[1], 12));
	++s0;
	++s1;
	++s2;

	BDeq = _mm_cmpeq_epi32(B, D);
	BFeq = _mm_cmpeq_epi32(B, F);
	BHeq = _mm_cmpeq_epi32(B, H);
	DFeq = _mm_cmpeq_epi32(D, F);

	a = SCALE2X_SEL(B, E, _mm_andnot_si128(DFeq, _mm_andnot_si128(BHeq, BDeq)));
	b = SCALE2X_SEL(B, E, _mm_andnot_si128(DFeq, _mm_andnot_si128(BHeq, BFeq)));

	d[0] = _mm_unpacklo_epi32(a, b);
	d[1] = _mm_unpackhi_epi32(a, b);
	d += 2;

	/* central run */
	for (count -= 8; count > 0; count -= 4) {
		B = s0[0];
		E = s1[0];
		H = s2[0];
		D = _mm_or_si128(_mm_srli_si128(s1[-1], 12), _mm_slli_si128(E, 4));
		F = _mm_or_si128(_mm_srli_si128(E, 4), _mm_slli_si128(s1[1], 12));
		++s0;
		++s1;
		++s2;

		BDeq = _mm_cmpeq_epi32(B, D);
		BFeq = _mm_cmpeq_epi32(B, F);
		BHeq = _mm_cmpeq_epi32(B, H);
		DFeq = _mm_cmpeq_epi32(D, F);

		a = SCALE2X_SEL(B, E, _mm_andnot_si128(DFeq, _mm_andnot_si128(BHeq, BDeq)));
		b = SCALE2X_SEL(B, E, _mm_andnot_si128(DFeq, _mm_andnot_si128(BHeq, BFeq)));

		d[0] = _mm_unpacklo_epi32(a, b);
		d[1] = _mm_unpackhi_epi32(a, b);
		d += 2;
	}

	/* last run */
	B = s0[0];
	E = s1[0];
	H = s2[0];
	D = _mm_or_si128(_mm_srli_si128(s1[-1], 12), _mm_slli_si128(E, 4));
	F = _mm_or_si128(_mm_srli_si128(E, 4), _mm_and_si128(E, mask_last));

	BDeq = _mm_cmpeq_epi32(B, D);
	BFeq = _mm_cmpeq_epi32(B, F);
	BHeq = _mm_cmpeq_epi32(B, H);
	DFeq = _mm_cmpeq_epi32(D, F);

	a = SCALE2X_SEL(B, E, _mm_andnot_si128(DFeq, _mm_andnot_si128(BHeq, BDeq)));
	b = SCALE2X_SEL(B, E, _mm_andnot_si128(DFeq, _mm_andnot_si128(BHeq, BFeq)));

	d[0] = _mm_unpacklo_epi32(a, b);
	d[1] = _mm_unpackhi_epi32(a, b);
}

#if defined(_MSC_VER) && _MSC_VER >= 1800
#pragma optimize("", on)
#endif

/**
 * Scale by a factor of 2 a row of pixels of 8 bits.
 * This is a very fast SSE2 implementation.
 * The implementation uses a combination of cmp/and/not operations to
 * completly remove the need of conditional jumps. This trick give the
 * major speed improvement.
 * Also, using the 16 bytes SSE2 registers more than one pixel are computed
 * at the same time.
 * Before calling this function you must ensure that the currenct CPU supports
 * the SSE2 instruction set.
 * All the memory buffer passed must be aligned at 16 bytes.
 * The pixels over the left and right borders are assumed of the same color of
 * the pixels on the border.
 * Note that the implementation is optimized to write data sequentially to
 * maximize the bandwidth on video memory.
 * \param src0 Pointer at the first pixel of the previous row.
 * \param src1 Pointer at the first pixel of the current row.
 * \param src2 Pointer at the first pixel of the next row.
 * \param count Length in pixels of the src0, src1 and src2 rows. It must
 * be at least 32 and a multiple of 16.
 * \param dst0 First destination row, double length in pixels.
 * \param dst1 Second destination row, double length in pixels.
 */
void scale2x_8_sse2(scale2x_uint8* dst0, scale2x_uint8* dst1, const scale2x_uint8* src0, const scale2x_uint8* src1, const scale2x_uint8* src2, unsigned count)
{
	if (count % 16 != 0 || count < 32) {
		scale2x_8_def(dst0, dst1, src0, src1, src2, count);
	} else {
		scale2x_8_sse2_border(dst0, src0, src1, src2, count);
		scale2x_8_sse2_border(dst1, src2, src1, src0, count);
	}
}

/**
 * Scale by a factor of 2 a row of pixels of 16 bits.
 * This function operates like scale2x_8_sse2() but for 16 bits pixels.
 * \param src0 Pointer at the first pixel of the previous row.
 * \param src1 Pointer at the first pixel of the current row.
 * \param src2 Pointer at the first pixel of the next row.
 * \param count Length in pixels of the src0, src1 and src2 rows. It must
 * be at least 8 and a multiple of 4.
 * \param dst0 First destination row, double length in pixels.
 * \param dst1 Second destination row, double length in pixels.
 */
void scale2x_16_sse2(scale2x_uint16* dst0, scale2x_uint16* dst1, const scale2x_uint16* src0, const scale2x_uint16* src1, const scale2x_uint16* src2, unsigned count)
{
	if (count % 8 != 0 || count < 16) {
		scale2x_16_def(dst0, dst1, src0, src1, src2, count);
	} else {
		scale2x_16_sse2_border(dst0, src0, src1, src2, count);
		scale2x_16_sse2_border(dst1, src2, src1, src0, count);
	}
}

/**
 * Scale by a factor of 2 a row of pixels of 32 bits.
 * This function operates like scale2x_8_sse2() but for 32 bits pixels.
 * \param src0 Pointer at the first pixel of the previous row.
 * \param src1 Pointer at the first pixel of the current row.
 * \param src2 Pointer at the first pixel of the next row.
 * \param count Length in pixels of the src0, src1 and src2 rows. It must
 * be at least 4 and a multiple of 2.
 * \param dst0 First destination row, double length in pixels.
 * \param dst1 Second destination row, double length in pixels.
 */
void scale2x_32_sse2(scale2x_uint32* dst0, scale2x_uint32* dst1, const scale2x_uint32* src0, const scale2x_uint32* src1, const scale2x_uint32* src2, unsigned count)
{
	if (count % 4 != 0 || count < 8) {
		scale2x_32_def(dst0, dst1, src0, src1, src2, count);
	} else {
		scale2x_32_sse2_border(dst0, src0, src1, src2, count);
		scale2x_32_sse2_border(dst1, src2, src1, src0, count);
	}
}

/**
 * Scale by a factor of 2x3 a row of pixels of 8 bits.
 * This function operates like scale2x_8_sse2() but with an expansion
 * factor of 2x3 instead of 2x2.
 */
void scale2x3_8_sse2(scale2x_uint8* dst0, scale2x_uint8* dst1, scale2x_uint8* dst2, const scale2x_uint8* src0, const scale2x_uint8* src1, const scale2x_uint8* src2, unsigned count)
{
	if (count % 16 != 0 || count < 32) {
		scale2x3_8_def(dst0, dst1, dst2, src0, src1, src2, count);
	} else {
		scale2x_8_sse2_border(dst0, src0, src1, src2, count);
		scale2x_8_def_center(dst1, src0, src1, src2, count);
		scale2x_8_sse2_border(dst2, src2, src1, src0, count);
	}
}

/**
 * Scale by a factor of 2x3 a row of pixels of 16 bits.
 * This function operates like scale2x_16_sse2() but with an expansion
 * factor of 2x3 instead of 2x2.
 */
void scale2x3_16_sse2(scale2x_uint16* dst0, scale2x_uint16* dst1, scale2x_uint16* dst2, const scale2x_uint16* src0, const scale2x_uint16* src1, const scale2x_uint16* src2, unsigned count)
{
	if (count % 8 != 0 || count < 16) {
		scale2x3_16_def(dst0, dst1, dst2, src0, src1, src2, count);
	} else {
		scale2x_16_sse2_border(dst0, src0, src1, src2, count);
		scale2x_16_def_center(dst1, src0, src1, src2, count);
		scale2x_16_sse2_border(dst2, src2, src1, src0, count);
	}
}

/**
 * Scale by a factor of 2x3 a row of pixels of 32 bits.
 * This function operates like scale2x_32_sse2() but with an expansion
 * factor of 2x3 instead of 2x2.
 */
void scale2x3_32_sse2(scale2x_uint32* dst0, scale2x_uint32* dst1, scale2x_uint32* dst2, const scale2x_uint32* src0, const scale2x_uint32* src1, const scale2x_uint32* src2, unsigned count)
{
	if (count % 4 != 0 || count < 8) {
		scale2x3_32_def(dst0, dst1, dst2, src0, src1, src2, count);
	} else {
		scale2x_32_sse2_border(dst0, src0, src1, src2, count);
		scale2x_32_def_center(dst1, src0, src1, src2, count);
		scale2x_32_sse2_border(dst2, src2, src1, src0, count);
	}
}

/**
 * Scale by a factor of 2x4 a row of pixels of 8 bits.
 * This function operates like scale2x_8_sse2() but with an expansion
 * factor of 2x4 instead of 2x2.
 */
void scale2x4_8_sse2(scale2x_uint8* dst0, scale2x_uint8* dst1, scale2x_uint8* dst2, scale2x_uint8* dst3, const scale2x_uint8* src0, const scale2x_uint8* src1, const scale2x_uint8* src2, unsigned count)
{
	if (count % 16 != 0 || count < 32) {
		scale2x4_8_def(dst0, dst1, dst2, dst3, src0, src1, src2, count);
	} else {
		scale2x_8_sse2_border(dst0, src0, src1, src2, count);
		scale2x_8_def_center(dst1, src0, src1, src2, count);
		scale2x_8_def_center(dst2, src0, src1, src2, count);
		scale2x_8_sse2_border(dst3, src2, src1, src0, count);
	}
}

/**
 * Scale by a factor of 2x4 a row of pixels of 16 bits.
 * This function operates like scale2x_16_sse2() but with an expansion
 * factor of 2x4 instead of 2x2.
 */
void scale2x4_16_sse2(scale2x_uint16* dst0, scale2x_uint16* dst1, scale2x_uint16* dst2, scale2x_uint16* dst3, const scale2x_uint16* src0, const scale2x_uint16* src1, const scale2x_uint16* src2, unsigned count)
{
	if (count % 8 != 0 || count < 16) {
		scale2x4_16_def(dst0, dst1, dst2, dst3, src0, src1, src2, count);
	} else {
		scale2x_16_sse2_border(dst0, src0, src1, src2, count);
		scale2x_16_def_center(dst1, src0, src1, src2, count);
		scale2x_16_def_center(dst2, src0, src1, src2, count);
		scale2x_16_sse2_border(dst3, src2, src1, src0, count);
	}
}

/**
 * Scale by a factor of 2x4 a row of pixels of 32 bits.
 * This function operates like scale2x_32_sse2() but with an expansion
 * factor of 2x4 instead of 2x2.
 */
void scale2x4_32_sse2(scale2x_uint32* dst0, scale2x_uint32* dst1, scale2x_uint32* dst2, scale2x_uint32* dst3, const scale2x_uint32* src0, const scale2x_uint32* src1, const scale2x_uint32* src2, unsigned count)
{
	if (count % 4 != 0 || count < 8) {
		scale2x4_32_def(dst0, dst1, dst2, dst3, src0, src1, src2, count);
	} else {
		scale2x_32_sse2_border(dst0, src0, src1, src2, count);
		scale2x_32_def_center(dst1, src0, src1, src2, count);
		scale2x_32_def_center(dst2, src0, src1, src2, count);
		scale2x_32_sse2_border(dst3, src2, src1, src0, count);
	}
}

#endif

#ifdef USE_SCALE2X_ALTIVEC
/*
 * e1 = B if (B == D) && !(B == H) && !(D == F)
 * e2 = B if (B == F) && !(B == H) && !(D == F)
 */
static inline void scale2x_8_altivec_border(scale2x_uint8* dst, const vector unsigned char* src0, const vector unsigned char* src1, const vector unsigned char* src2, unsigned count)
{
	vector unsigned char B, D, E, F, H, e1, e2;
	vector unsigned char previousE, nextE;
	vector __bool char BDeq, BFeq, BHeq, DFeq;
	static const vector unsigned char perm_first = {0,0,1,2,3,4,5,6,7,8,9,10,11,12,13,14};
	static const vector unsigned char perm_last = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,15};

	assert(count >= 32);
	assert(count % 16 == 0);

	/* first run */
	B = *src0++;
	E = *src1++;
	H = *src2++;
	nextE = *src1++;
	D = vec_perm(E, E, perm_first);
	F = vec_perm(E, nextE, vec_lvsl(1, (const scale2x_uint8*)src1));

	BDeq = vec_cmpeq(B, D);
	BFeq = vec_cmpeq(B, F);
	BHeq = vec_cmpeq(B, H);
	DFeq = vec_cmpeq(D, F);

	e1 = vec_sel(E, B, vec_andc(vec_andc(BDeq, BHeq), DFeq));
	e2 = vec_sel(E, B, vec_andc(vec_andc(BFeq, BHeq), DFeq));

	*((vector unsigned char *)dst) = vec_mergeh(e1, e2);
	dst += 16;
	*((vector unsigned char *)dst) = vec_mergel(e1, e2);
	dst += 16;

	previousE = E;

	/* middle */
	for (count -= 32; count > 0; count -= 16) {
		B = *src0++;
		E = nextE;
		H = *src2++;
		nextE = *src1++;
		D = vec_perm(previousE, E, vec_lvsl(15, (const scale2x_uint8*)src1));
		F = vec_perm(E, nextE, vec_lvsl(1, (const scale2x_uint8*)src1));

		BDeq = vec_cmpeq(B, D);
		BFeq = vec_cmpeq(B, F);
		BHeq = vec_cmpeq(B, H);
		DFeq = vec_cmpeq(D, F);

		e1 = vec_sel(E, B, vec_andc(vec_andc(BDeq, BHeq), DFeq));
		e2 = vec_sel(E, B, vec_andc(vec_andc(BFeq, BHeq), DFeq));

		*((vector unsigned char *)dst) = vec_mergeh(e1, e2);
		dst += 16;
		*((vector unsigned char *)dst) = vec_mergel(e1, e2);
		dst += 16;

		previousE = E;
	}

	/* last run */
	B = *src0;
	E = nextE;
	H = *src2;
	D = vec_perm(previousE, E, vec_lvsl(15, (const scale2x_uint8*)src1));
	F = vec_perm(E, E, perm_last);

	BDeq = vec_cmpeq(B, D);
	BFeq = vec_cmpeq(B, F);
	BHeq = vec_cmpeq(B, H);
	DFeq = vec_cmpeq(D, F);

	e1 = vec_sel(E, B, vec_andc(vec_andc(BDeq, BHeq), DFeq));
	e2 = vec_sel(E, B, vec_andc(vec_andc(BFeq, BHeq), DFeq));

	*((vector unsigned char *)dst) = vec_mergeh(e1, e2);
	dst += 16;
	*((vector unsigned char *)dst) = vec_mergel(e1, e2);
	dst += 16;
}

static inline void scale2x_16_altivec_border(scale2x_uint16* dst, const vector unsigned short* src0, const vector unsigned short* src1, const vector unsigned short* src2, unsigned count)
{
	vector unsigned short B, D, E, F, H, e1, e2;
	vector __bool short BDeq, BFeq, BHeq, DFeq;
	static const vector unsigned char perm_first = {0,1,0,1,2,3,4,5,6,7,8,9,10,11,12,13};
	static const vector unsigned char perm_last = {2,3,4,5,6,7,8,9,10,11,12,13,14,15,14,15};

	assert(count >= 16);
	assert(count % 8 == 0);

	/* first run */
	B = *src0++;
	E = *src1++;
	H = *src2++;
	D = vec_perm(E, E, perm_first);
	F = vec_perm(E, *src1, vec_lvsl(2, (const scale2x_uint16*)src1));

	BDeq = vec_cmpeq(B, D);
	BFeq = vec_cmpeq(B, F);
	BHeq = vec_cmpeq(B, H);
	DFeq = vec_cmpeq(D, F);

	e1 = vec_sel(E, B, vec_andc(vec_andc(BDeq, BHeq), DFeq));
	e2 = vec_sel(E, B, vec_andc(vec_andc(BFeq, BHeq), DFeq));

	*((vector unsigned short *)dst) = vec_mergeh(e1, e2);
	dst += 8;
	*((vector unsigned short *)dst) = vec_mergel(e1, e2);
	dst += 8;

	/* middle */
	for (count -= 16; count > 0; count -= 8) {
		B = *src0++;
		E = *src1++;
		H = *src2++;
		D = vec_perm(src1[-2], E, vec_lvsl(14, (const scale2x_uint16*)src1));
		F = vec_perm(E, *src1, vec_lvsl(2, (const scale2x_uint16*)src1));

		BDeq = vec_cmpeq(B, D);
		BFeq = vec_cmpeq(B, F);
		BHeq = vec_cmpeq(B, H);
		DFeq = vec_cmpeq(D, F);

		e1 = vec_sel(E, B, vec_andc(vec_andc(BDeq, BHeq), DFeq));
		e2 = vec_sel(E, B, vec_andc(vec_andc(BFeq, BHeq), DFeq));

		*((vector unsigned short *)dst) = vec_mergeh(e1, e2);
		dst += 8;
		*((vector unsigned short *)dst) = vec_mergel(e1, e2);
		dst += 8;
	}

	/* last run */
	B = *src0;
	E = *src1;
	H = *src2;
	D = vec_perm(src1[-1], E, vec_lvsl(14, (const scale2x_uint16*)src1));
	F = vec_perm(E, E, perm_last);

	BDeq = vec_cmpeq(B, D);
	BFeq = vec_cmpeq(B, F);
	BHeq = vec_cmpeq(B, H);
	DFeq = vec_cmpeq(D, F);

	e1 = vec_sel(E, B, vec_andc(vec_andc(BDeq, BHeq), DFeq));
	e2 = vec_sel(E, B, vec_andc(vec_andc(BFeq, BHeq), DFeq));

	*((vector unsigned short *)dst) = vec_mergeh(e1, e2);
	dst += 8;
	*((vector unsigned short *)dst) = vec_mergel(e1, e2);
	dst += 8;
}

static inline void scale2x_32_altivec_border(scale2x_uint32* dst, const vector unsigned int* src0, const vector unsigned int* src1, const vector unsigned int* src2, unsigned count)
{
	vector unsigned int B, D, E, F, H, e1, e2;
	vector __bool int BDeq, BFeq, BHeq, DFeq;
	static const vector unsigned char perm_first = {0,1,2,3,0,1,2,3,4,5,6,7,8,9,10,11};
	static const vector unsigned char perm_last = {4,5,6,7,8,9,10,11,12,13,14,15,12,13,14,15};

	assert(count >= 8);
	assert(count % 4 == 0);

	/* first run */
	B = *src0++;
	E = *src1++;
	H = *src2++;
	D = vec_perm(E, E, perm_first);
	F = vec_perm(E, *src1, vec_lvsl(4, (const scale2x_uint32*)src1));

	BDeq = vec_cmpeq(B, D);
	BFeq = vec_cmpeq(B, F);
	BHeq = vec_cmpeq(B, H);
	DFeq = vec_cmpeq(D, F);

	e1 = vec_sel(E, B, vec_andc(vec_andc(BDeq, BHeq), DFeq));
	e2 = vec_sel(E, B, vec_andc(vec_andc(BFeq, BHeq), DFeq));

	*((vector unsigned int *)dst) = vec_mergeh(e1, e2);
	dst += 4;
	*((vector unsigned int *)dst) = vec_mergel(e1, e2);
	dst += 4;

	/* middle */
	for (count -= 8; count > 0; count -= 4) {
		B = *src0++;
		E = *src1++;
		H = *src2++;
		D = vec_perm(src1[-2], E, vec_lvsl(12, (const scale2x_uint32*)src1));
		F = vec_perm(E, *src1, vec_lvsl(4, (const scale2x_uint32*)src1));

		BDeq = vec_cmpeq(B, D);
		BFeq = vec_cmpeq(B, F);
		BHeq = vec_cmpeq(B, H);
		DFeq = vec_cmpeq(D, F);

		e1 = vec_sel(E, B, vec_andc(vec_andc(BDeq, BHeq), DFeq));
		e2 = vec_sel(E, B, vec_andc(vec_andc(BFeq, BHeq), DFeq));

		*((vector unsigned int *)dst) = vec_mergeh(e1, e2);
		dst += 4;
		*((vector unsigned int *)dst) = vec_mergel(e1, e2);
		dst += 4;
	}

	/* last run */
	B = *src0;
	E = *src1;
	H = *src2;
	D = vec_perm(src1[-1], E, vec_lvsl(12, (const scale2x_uint32*)src1));
	F = vec_perm(E, E, perm_last);

	BDeq = vec_cmpeq(B, D);
	BFeq = vec_cmpeq(B, F);
	BHeq = vec_cmpeq(B, H);
	DFeq = vec_cmpeq(D, F);

	e1 = vec_sel(E, B, vec_andc(vec_andc(BDeq, BHeq), DFeq));
	e2 = vec_sel(E, B, vec_andc(vec_andc(BFeq, BHeq), DFeq));

	*((vector unsigned int *)dst) = vec_mergeh(e1, e2);
	dst += 4;
	*((vector unsigned int *)dst) = vec_mergel(e1, e2);
	dst += 4;
}

/**
 * Scale by a factor of 2 a row of pixels of 8 bits.
 * This is a very fast Altivec implementation.
 * The implementation uses a combination of cmp/and/not operations to
 * completly remove the need of conditional jumps. This trick give the
 * major speed improvement.
 * Also, using the 16 bytes Altivec registers more than one pixel are computed
 * at the same time.
 * The pixels over the left and right borders are assumed of the same color of
 * the pixels on the border.
 * Note that the implementation is optimized to write data sequentially to
 * maximize the bandwidth on video memory.
 * \param src0 Pointer at the first pixel of the previous row.
 * \param src1 Pointer at the first pixel of the current row.
 * \param src2 Pointer at the first pixel of the next row.
 * \param count Length in pixels of the src0, src1 and src2 rows.
 * \param dst0 First destination row, double length in pixels.
 * \param dst1 Second destination row, double length in pixels.
 */
void scale2x_8_altivec(scale2x_uint8* dst0, scale2x_uint8* dst1, const scale2x_uint8* src0, const scale2x_uint8* src1, const scale2x_uint8* src2, unsigned count)
{
	if (count % 16 != 0 || count < 32) {
		scale2x_8_def(dst0, dst1, src0, src1, src2, count);
	} else {
		scale2x_8_altivec_border(dst0, (const vector unsigned char*)src0, (const vector unsigned char*)src1, (const vector unsigned char*)src2, count);
		scale2x_8_altivec_border(dst1, (const vector unsigned char*)src2, (const vector unsigned char*)src1, (const vector unsigned char*)src0, count);
	}
}

void scale2x3_8_altivec(scale2x_uint8* dst0, scale2x_uint8* dst1, scale2x_uint8* dst2, const scale2x_uint8* src0, const scale2x_uint8* src1, const scale2x_uint8* src2, unsigned count)
{
	if (count % 16 != 0 || count < 32) {
		scale2x3_8_def(dst0, dst1, dst2, src0, src1, src2, count);
	} else {
		scale2x_8_altivec_border(dst0, (const vector unsigned char*)src0, (const vector unsigned char*)src1, (const vector unsigned char*)src2, count);
		scale2x_8_def_center(dst1, src0, src1, src2, count);
		scale2x_8_altivec_border(dst2, (const vector unsigned char*)src2, (const vector unsigned char*)src1, (const vector unsigned char*)src0, count);
	}
}

void scale2x4_8_altivec(scale2x_uint8* dst0, scale2x_uint8* dst1, scale2x_uint8* dst2, scale2x_uint8* dst3, const scale2x_uint8* src0, const scale2x_uint8* src1, const scale2x_uint8* src2, unsigned count)
{
	if (count % 16 != 0 || count < 32) {
		scale2x4_8_def(dst0, dst1, dst2, dst3, src0, src1, src2, count);
	} else {
		scale2x_8_altivec_border(dst0, (const vector unsigned char*)src0, (const vector unsigned char*)src1, (const vector unsigned char*)src2, count);
		scale2x_8_def_center(dst1, src0, src1, src2, count);
		scale2x_8_def_center(dst2, src0, src1, src2, count);
		scale2x_8_altivec_border(dst3, (const vector unsigned char*)src2, (const vector unsigned char*)src1, (const vector unsigned char*)src0, count);
	}
}

/**
 * Scale by a factor of 2 a row of pixels of 16 bits.
 * This function operates like scale2x_8_altivec() but for 16 bits pixels.
 * \param src0 Pointer at the first pixel of the previous row.
 * \param src1 Pointer at the first pixel of the current row.
 * \param src2 Pointer at the first pixel of the next row.
 * \param count Length in pixels of the src0, src1 and src2 rows. It must
 * be at least 16 and a multiple of 8.
 * \param dst0 First destination row, double length in pixels.
 * \param dst1 Second destination row, double length in pixels.
 */
void scale2x_16_altivec(scale2x_uint16* dst0, scale2x_uint16* dst1, const scale2x_uint16* src0, const scale2x_uint16* src1, const scale2x_uint16* src2, unsigned count)
{
	if (count % 8 != 0 || count < 16) {
		scale2x_16_def(dst0, dst1, src0, src1, src2, count);
	} else {
		scale2x_16_altivec_border(dst0, (const vector unsigned short*)src0, (const vector unsigned short*)src1, (const vector unsigned short*)src2, count);
		scale2x_16_altivec_border(dst1, (const vector unsigned short*)src2, (const vector unsigned short*)src1, (const vector unsigned short*)src0, count);
	}
}

void scale2x3_16_altivec(scale2x_uint16* dst0, scale2x_uint16* dst1, scale2x_uint16* dst2, const scale2x_uint16* src0, const scale2x_uint16* src1, const scale2x_uint16* src2, unsigned count)
{
	if (count % 8 != 0 || count < 16) {
		scale2x3_16_def(dst0, dst1, dst2, src0, src1, src2, count);
	} else {
		scale2x_16_altivec_border(dst0, (const vector unsigned short*)src0, (const vector unsigned short*)src1, (const vector unsigned short*)src2, count);
		scale2x_16_def_center(dst1, src0, src1, src2, count);
		scale2x_16_altivec_border(dst2, (const vector unsigned short*)src2, (const vector unsigned short*)src1, (const vector unsigned short*)src0, count);
	}
}

void scale2x4_16_altivec(scale2x_uint16* dst0, scale2x_uint16* dst1, scale2x_uint16* dst2, scale2x_uint16* dst3, const scale2x_uint16* src0, const scale2x_uint16* src1, const scale2x_uint16* src2, unsigned count)
{
	if (count % 8 != 0 || count < 16) {
		scale2x4_16_def(dst0, dst1, dst2, dst3, src0, src1, src2, count);
	} else {
		scale2x_16_altivec_border(dst0, (const vector unsigned short*)src0, (const vector unsigned short*)src1, (const vector unsigned short*)src2, count);
		scale2x_16_def_center(dst1, src0, src1, src2, count);
		scale2x_16_def_center(dst2, src0, src1, src2, count);
		scale2x_16_altivec_border(dst3, (const vector unsigned short*)src2, (const vector unsigned short*)src1, (const vector unsigned short*)src0, count);
	}
}

/**
 * Scale by a factor of 2 a row of pixels of 32 bits.
 * This function operates like scale2x_8_altivec() but for 32 bits pixels.
 * \param src0 Pointer at the first pixel of the previous row.
 * \param src1 Pointer at the first pixel of the current row.
 * \param src2 Pointer at the first pixel of the next row.
 * \param count Length in pixels of the src0, src1 and src2 rows. It must
 * be at least 8 and a multiple of 4.
 * \param dst0 First destination row, double length in pixels.
 * \param dst1 Second destination row, double length in pixels.
 */
void scale2x_32_altivec(scale2x_uint32* dst0, scale2x_uint32* dst1, const scale2x_uint32* src0, const scale2x_uint32* src1, const scale2x_uint32* src2, unsigned count)
{
	if (count % 4 != 0 || count < 8) {
		scale2x_32_def(dst0, dst1, src0, src1, src2, count);
	} else {
		scale2x_32_altivec_border(dst0, (const vector unsigned int*)src0, (const vector unsigned int*)src1, (const vector unsigned int*)src2, count);
		scale2x_32_altivec_border(dst1, (const vector unsigned int*)src2, (const vector unsigned int*)src1, (const vector unsigned int*)src0, count);
	}
}

void scale2x3_32_altivec(scale2x_uint32* dst0, scale2x_uint32* dst1, scale2x_uint32* dst2, const scale2x_uint32* src0, const scale2x_uint32* src1, const scale2x_uint32* src2, unsigned count)
{
	if (count % 4 != 0 || count < 8) {
		scale2x3_32_def(dst0, dst1, dst2, src0, src1, src2, count);
	} else {
		scale2x_32_altivec_border(dst0, (const vector unsigned int*)src0, (const vector unsigned int*)src1, (const vector unsigned int*)src2, count);
		scale2x_32_def_center(dst1, src0, src1, src2, count);
		scale2x_32_altivec_border(dst2, (const vector unsigned int*)src2, (const vector unsigned int*)src1, (const vector unsigned int*)src0, count);
	}
}

void scale2x4_32_altivec(scale2x_uint32* dst0, scale2x_uint32* dst1, scale2x_uint32* dst2, scale2x_uint32* dst3, const scale2x_uint32* src0, const scale2x_uint32* src1, const scale2x_uint32* src2, unsigned count)
{
	if (count % 4 != 0 || count < 8) {
		scale2x4_32_def(dst0, dst1, dst2, dst3, src0, src1, src2, count);
	} else {
		scale2x_32_altivec_border(dst0, (const vector unsigned int*)src0, (const vector unsigned int*)src1, (const vector unsigned int*)src2, count);
		scale2x_32_def_center(dst1, src0, src1, src2, count);
		scale2x_32_def_center(dst2, src0, src1, src2, count);
		scale2x_32_altivec_border(dst3, (const vector unsigned int*)src2, (const vector unsigned int*)src1, (const vector unsigned int*)src0, count);
	}
}

#endif /* USE_SCALE2X_ALTIVEC */

/* ARM NEON implementation */
#ifdef USE_SCALE2X_NEON
#include <arm_neon.h>

static inline void scale2x_8_neon_border(uint8x16x2_t* dst, const uint8x16_t* src0, const uint8x16_t* src1, const uint8x16_t* src2, unsigned count)
{
	uint8x16_t B, D, E, F, H;
	uint8x16_t nextE;
	uint8x16_t BDeq, BFeq, BHeq, DFeq;

	/* count must be aligned */
	assert(count >= 32);
	assert(count % 16 == 0);

	/* all memory must be aligned */
	assert(scale2x_align_ptr(dst) == dst);
	assert(scale2x_align_ptr(src0) == src0);
	assert(scale2x_align_ptr(src1) == src1);
	assert(scale2x_align_ptr(src2) == src2);

	/* first run */
	B = *src0++;
	E = *src1++;
	nextE = *src1++;
	D = vextq_u8(vextq_u8(E, E, 1), E, 15);
	F = vextq_u8(E, nextE, 1);
	H = *src2++;

	BDeq = vceqq_u8(B, D);
	BFeq = vceqq_u8(B, F);
	BHeq = vceqq_u8(B, H);
	DFeq = vceqq_u8(D, F);

	*dst++ = vzipq_u8(vbslq_u8(vbicq_u8(vbicq_u8(BDeq, BHeq), DFeq), B, E),
	                  vbslq_u8(vbicq_u8(vbicq_u8(BFeq, BHeq), DFeq), B, E));

	/* central run */
	for (count -= 32; count > 0; count -= 16) {
		D = vextq_u8(E, nextE, 15);
		B = *src0++;
		E = nextE;
		nextE = *src1++;
		H = *src2++;
		F = vextq_u8(E, nextE, 1);

		BDeq = vceqq_u8(B, D);
		BFeq = vceqq_u8(B, F);
		BHeq = vceqq_u8(B, H);
		DFeq = vceqq_u8(D, F);

		*dst++ = vzipq_u8(vbslq_u8(vbicq_u8(vbicq_u8(BDeq, BHeq), DFeq), B, E),
		                  vbslq_u8(vbicq_u8(vbicq_u8(BFeq, BHeq), DFeq), B, E));
	}

	/* last run */
	D = vextq_u8(E, nextE, 15);
	B = *src0;
	E = nextE;
	H = *src2;
	F = vextq_u8(E, vextq_u8(E, E, 15), 1);

	BDeq = vceqq_u8(B, D);
	BFeq = vceqq_u8(B, F);
	BHeq = vceqq_u8(B, H);
	DFeq = vceqq_u8(D, F);

	*dst = vzipq_u8(vbslq_u8(vbicq_u8(vbicq_u8(BDeq, BHeq), DFeq), B, E),
	                vbslq_u8(vbicq_u8(vbicq_u8(BFeq, BHeq), DFeq), B, E));
}

static inline void scale2x_16_neon_border(uint16x8x2_t* dst, const uint16x8_t* src0, const uint16x8_t* src1, const uint16x8_t* src2, unsigned count)
{
	uint16x8_t B, D, E, F, H;
	uint16x8_t nextE;
	uint16x8_t BDeq, BFeq, BHeq, DFeq;

	/* count must be aligned */
	assert(count >= 16);
	assert(count % 8 == 0);

	/* all memory must be aligned */
	assert(scale2x_align_ptr(dst) == dst);
	assert(scale2x_align_ptr(src0) == src0);
	assert(scale2x_align_ptr(src1) == src1);
	assert(scale2x_align_ptr(src2) == src2);

	/* first run */
	B = *src0++;
	E = *src1++;
	nextE = *src1++;
	D = vextq_u16(vextq_u16(E, E, 1), E, 7);
	F = vextq_u16(E, nextE, 1);
	H = *src2++;

	BDeq = vceqq_u16(B, D);
	BFeq = vceqq_u16(B, F);
	BHeq = vceqq_u16(B, H);
	DFeq = vceqq_u16(D, F);

	*dst++ = vzipq_u16(vbslq_u16(vbicq_u16(vbicq_u16(BDeq, BHeq), DFeq), B, E),
	                   vbslq_u16(vbicq_u16(vbicq_u16(BFeq, BHeq), DFeq), B, E));

	/* central run */
	for (count -= 16; count > 0; count -= 8) {
		D = vextq_u16(E, nextE, 7);
		B = *src0++;
		E = nextE;
		nextE = *src1++;
		H = *src2++;
		F = vextq_u16(E, nextE, 1);

		BDeq = vceqq_u16(B, D);
		BFeq = vceqq_u16(B, F);
		BHeq = vceqq_u16(B, H);
		DFeq = vceqq_u16(D, F);

		*dst++ = vzipq_u16(vbslq_u16(vbicq_u16(vbicq_u16(BDeq, BHeq), DFeq), B, E),
		                   vbslq_u16(vbicq_u16(vbicq_u16(BFeq, BHeq), DFeq), B, E));
	}

	/* last run */
	D = vextq_u16(E, nextE, 7);
	B = *src0;
	E = nextE;
	H = *src2;
	F = vextq_u16(E, vextq_u16(E, E, 7), 1);

	BDeq = vceqq_u16(B, D);
	BFeq = vceqq_u16(B, F);
	BHeq = vceqq_u16(B, H);
	DFeq = vceqq_u16(D, F);

	*dst = vzipq_u16(vbslq_u16(vbicq_u16(vbicq_u16(BDeq, BHeq), DFeq), B, E),
	                 vbslq_u16(vbicq_u16(vbicq_u16(BFeq, BHeq), DFeq), B, E));
}

static inline void scale2x_32_neon_border(uint32x4x2_t* dst, const uint32x4_t* src0, const uint32x4_t* src1, const uint32x4_t* src2, unsigned count)
{
	uint32x4_t B, D, E, F, H;
	uint32x4_t nextE;
	uint32x4_t BDeq, BFeq, BHeq, DFeq;

	/* count must be aligned */
	assert(count >= 8);
	assert(count % 4 == 0);

	/* all memory must be aligned */
	assert(scale2x_align_ptr(dst) == dst);
	assert(scale2x_align_ptr(src0) == src0);
	assert(scale2x_align_ptr(src1) == src1);
	assert(scale2x_align_ptr(src2) == src2);

	/* first run */
	B = *src0++;
	E = *src1++;
	nextE = *src1++;
	D = vextq_u32(vextq_u32(E, E, 1), E, 3);
	F = vextq_u32(E, nextE, 1);
	H = *src2++;

	BDeq = vceqq_u32(B, D);
	BFeq = vceqq_u32(B, F);
	BHeq = vceqq_u32(B, H);
	DFeq = vceqq_u32(D, F);

	*dst++ = vzipq_u32(vbslq_u32(vbicq_u32(vbicq_u32(BDeq, BHeq), DFeq), B, E),
	                   vbslq_u32(vbicq_u32(vbicq_u32(BFeq, BHeq), DFeq), B, E));

	/* central run */
	for (count -= 8; count > 0; count -= 4) {
		D = vextq_u32(E, nextE, 3);
		B = *src0++;
		E = nextE;
		nextE = *src1++;
		H = *src2++;
		F = vextq_u32(E, nextE, 1);

		BDeq = vceqq_u32(B, D);
		BFeq = vceqq_u32(B, F);
		BHeq = vceqq_u32(B, H);
		DFeq = vceqq_u32(D, F);

		*dst++ = vzipq_u32(vbslq_u32(vbicq_u32(vbicq_u32(BDeq, BHeq), DFeq), B, E),
		                   vbslq_u32(vbicq_u32(vbicq_u32(BFeq, BHeq), DFeq), B, E));
	}

	/* last run */
	D = vextq_u32(E, nextE, 3);
	B = *src0;
	E = nextE;
	H = *src2;
	F = vextq_u32(E, vextq_u32(E, E, 3), 1);

	BDeq = vceqq_u32(B, D);
	BFeq = vceqq_u32(B, F);
	BHeq = vceqq_u32(B, H);
	DFeq = vceqq_u32(D, F);

	*dst = vzipq_u32(vbslq_u32(vbicq_u32(vbicq_u32(BDeq, BHeq), DFeq), B, E),
	                 vbslq_u32(vbicq_u32(vbicq_u32(BFeq, BHeq), DFeq), B, E));
}

/**
 * Fast implementation of Scale2x using ARM NEON
 */
void scale2x_8_neon(scale2x_uint8* dst0, scale2x_uint8* dst1, const scale2x_uint8* src0, const scale2x_uint8* src1, const scale2x_uint8* src2, unsigned count)
{
	if (count % 16 != 0 || count < 32) {
		scale2x_8_def(dst0, dst1, src0, src1, src2, count);
	} else {
		scale2x_8_neon_border((uint8x16x2_t *)dst0, (const uint8x16_t*)src0, (const uint8x16_t *)src1, (const uint8x16_t *)src2, count);
		scale2x_8_neon_border((uint8x16x2_t *)dst1, (const uint8x16_t*)src2, (const uint8x16_t *)src1, (const uint8x16_t *)src0, count);
	}
}

void scale2x_16_neon(scale2x_uint16* dst0, scale2x_uint16* dst1, const scale2x_uint16* src0, const scale2x_uint16* src1, const scale2x_uint16* src2, unsigned count)
{
	if (count % 8 != 0 || count < 16) {
		scale2x_16_def(dst0, dst1, src0, src1, src2, count);
	} else {
		scale2x_16_neon_border((uint16x8x2_t *)dst0, (const uint16x8_t *)src0, (const uint16x8_t *)src1, (const uint16x8_t *)src2, count);
		scale2x_16_neon_border((uint16x8x2_t *)dst1, (const uint16x8_t *)src2, (const uint16x8_t *)src1, (const uint16x8_t *)src0, count);
	}
}

void scale2x_32_neon(scale2x_uint32* dst0, scale2x_uint32* dst1, const scale2x_uint32* src0, const scale2x_uint32* src1, const scale2x_uint32* src2, unsigned count)
{
	if (count % 4 != 0 || count < 8) {
		scale2x_32_def(dst0, dst1, src0, src1, src2, count);
	} else {
		scale2x_32_neon_border((uint32x4x2_t *)dst0, (const uint32x4_t*)src0, (const uint32x4_t*)src1, (const uint32x4_t*)src2, count);
		scale2x_32_neon_border((uint32x4x2_t *)dst1, (const uint32x4_t*)src2, (const uint32x4_t*)src1, (const uint32x4_t*)src0, count);
	}
}

/**
 * Scale by a factor of 2x3 a row of pixels of 8 bits.
 * This function operates like scale2x_8_neon() but with an expansion
 * factor of 2x3 instead of 2x2.
 */
void scale2x3_8_neon(scale2x_uint8* dst0, scale2x_uint8* dst1, scale2x_uint8* dst2, const scale2x_uint8* src0, const scale2x_uint8* src1, const scale2x_uint8* src2, unsigned count)
{
	if (count % 16 != 0 || count < 32) {
		scale2x3_8_def(dst0, dst1, dst2, src0, src1, src2, count);
	} else {
		scale2x_8_neon_border((uint8x16x2_t *)dst0, (const uint8x16_t*)src0, (const uint8x16_t*)src1, (const uint8x16_t*)src2, count);
		scale2x_8_def_center(dst1, src0, src1, src2, count);
		scale2x_8_neon_border((uint8x16x2_t *)dst2, (const uint8x16_t*)src2, (const uint8x16_t*)src1, (const uint8x16_t*)src0, count);
	}
}

void scale2x3_16_neon(scale2x_uint16* dst0, scale2x_uint16* dst1, scale2x_uint16* dst2, const scale2x_uint16* src0, const scale2x_uint16* src1, const scale2x_uint16* src2, unsigned count)
{
	if (count % 8 != 0 || count < 16) {
		scale2x3_16_def(dst0, dst1, dst2, src0, src1, src2, count);
	} else {
		scale2x_16_neon_border((uint16x8x2_t *)dst0, (const uint16x8_t *)src0, (const uint16x8_t *)src1, (const uint16x8_t *)src2, count);
		scale2x_16_def_center(dst1, src0, src1, src2, count);
		scale2x_16_neon_border((uint16x8x2_t *)dst2, (const uint16x8_t *)src2, (const uint16x8_t *)src1, (const uint16x8_t *)src0, count);
	}
}

void scale2x3_32_neon(scale2x_uint32* dst0, scale2x_uint32* dst1, scale2x_uint32* dst2, const scale2x_uint32* src0, const scale2x_uint32* src1, const scale2x_uint32* src2, unsigned count)
{
	if (count % 4 != 0 || count < 8) {
		scale2x3_32_def(dst0, dst1, dst2, src0, src1, src2, count);
	} else {
		scale2x_32_neon_border((uint32x4x2_t *)dst0, (const uint32x4_t*)src0, (const uint32x4_t*)src1, (const uint32x4_t*)src2, count);
		scale2x_32_def_center(dst1, src0, src1, src2, count);
		scale2x_32_neon_border((uint32x4x2_t *)dst2, (const uint32x4_t*)src2, (const uint32x4_t*)src1, (const uint32x4_t*)src0, count);
	}
}

/**
 * Scale by a factor of 2x4 a row of pixels of 8 bits.
 * This function operates like scale2x_8_neon() but with an expansion
 * factor of 2x4 instead of 2x2.
 */
void scale2x4_8_neon(scale2x_uint8* dst0, scale2x_uint8* dst1, scale2x_uint8* dst2, scale2x_uint8* dst3, const scale2x_uint8* src0, const scale2x_uint8* src1, const scale2x_uint8* src2, unsigned count)
{
	if (count % 16 != 0 || count < 32) {
		scale2x4_8_def(dst0, dst1, dst2, dst3, src0, src1, src2, count);
	} else {
		scale2x_8_neon_border((uint8x16x2_t *)dst0, (const uint8x16_t*)src0, (const uint8x16_t*)src1, (const uint8x16_t*)src2, count);
		scale2x_8_def_center(dst1, src0, src1, src2, count);
		scale2x_8_def_center(dst2, src0, src1, src2, count);
		scale2x_8_neon_border((uint8x16x2_t *)dst3, (const uint8x16_t*)src2, (const uint8x16_t*)src1, (const uint8x16_t*)src0, count);
	}
}

void scale2x4_16_neon(scale2x_uint16* dst0, scale2x_uint16* dst1, scale2x_uint16* dst2, scale2x_uint16* dst3, const scale2x_uint16* src0, const scale2x_uint16* src1, const scale2x_uint16* src2, unsigned count)
{
	if (count % 8 != 0 || count < 16) {
		scale2x4_16_def(dst0, dst1, dst2, dst3, src0, src1, src2, count);
	} else {
		scale2x_16_neon_border((uint16x8x2_t *)dst0, (const uint16x8_t *)src0, (const uint16x8_t *)src1, (const uint16x8_t *)src2, count);
		scale2x_16_def_center(dst1, src0, src1, src2, count);
		scale2x_16_def_center(dst2, src0, src1, src2, count);
		scale2x_16_neon_border((uint16x8x2_t *)dst3, (const uint16x8_t *)src2, (const uint16x8_t *)src1, (const uint16x8_t *)src0, count);
	}
}

void scale2x4_32_neon(scale2x_uint32* dst0, scale2x_uint32* dst1, scale2x_uint32* dst2, scale2x_uint32* dst3, const scale2x_uint32* src0, const scale2x_uint32* src1, const scale2x_uint32* src2, unsigned count)
{
	if (count % 4 != 0 || count < 8) {
		scale2x4_32_def(dst0, dst1, dst2, dst3, src0, src1, src2, count);
	} else {
		scale2x_32_neon_border((uint32x4x2_t *)dst0, (const uint32x4_t*)src0, (const uint32x4_t*)src1, (const uint32x4_t*)src2, count);
		scale2x_32_def_center(dst1, src0, src1, src2, count);
		scale2x_32_def_center(dst2, src0, src1, src2, count);
		scale2x_32_neon_border((uint32x4x2_t *)dst3, (const uint32x4_t*)src2, (const uint32x4_t*)src1, (const uint32x4_t*)src0, count);
	}
}
#endif /* USE_SCALE2X_NEON */

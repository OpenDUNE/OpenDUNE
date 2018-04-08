/*
 * This file is part of the Scale2x project.
 *
 * Copyright (C) 2018 Thomas Bernard
 * Copyright (C) 2003, 2004 Andrea Mazzoleni
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
 * This file contains an example implementation of the Scale effect
 * applyed to a generic bitmap.
 *
 * You can find an high level description of the effect at :
 *
 * http://www.scale2x.it/
 */

#include "scalebit.h"
#include "scale2x.h"
#include "scale3x.h"

#ifndef HAVE_ALLOCA_H
#define HAVE_ALLOCA_H 0
#endif
#ifndef HAVE_ALLOCA
#define HAVE_ALLOCA 0
#endif

#if HAVE_ALLOCA_H
#include <alloca.h>
#endif

#include <assert.h>
#include <stdlib.h>

/**
 * Align a size in bytes.
 */
static unsigned scale2x_align_size(unsigned size)
{
#if SCALE2X_ALIGN_SIZE != 1
	size += SCALE2X_ALIGN_SIZE - 1;
	size &= -(int)SCALE2X_ALIGN_SIZE;
	return size;
#else
	return size;
#endif
}

/**
 * Functions to apply the Scale??? effects on a group of rows. Used internally.
 */
typedef void (*stage_scale2x_t)(void* dst0, void* dst1, const void* src0, const void* src1, const void* src2, unsigned pixel_per_row);
typedef void (*stage_scale3x_t)(void* dst0, void* dst1, void* dst2, const void* src0, const void* src1, const void* src2, unsigned pixel_per_row);
typedef void (*stage_scale2x4_t)(void* dst0, void* dst1, void* dst2, void* dst3, const void* src0, const void* src1, const void* src2, unsigned pixel_per_row);

struct stage_scale_funcs {
	stage_scale2x_t stage_scale2x;
	stage_scale3x_t stage_scale2x3;
	stage_scale2x4_t stage_scale2x4;
	stage_scale3x_t stage_scale3x;
};

#define stage_scale2x_impl	funcs->stage_scale2x
#define stage_scale2x3_impl	funcs->stage_scale2x3
#define stage_scale2x4_impl	funcs->stage_scale2x4
#define stage_scale3x_impl	funcs->stage_scale3x

/**
 * Apply the Scale4x effect on a group of rows. Used internally.
 */
static void stage_scale4x(const struct stage_scale_funcs * funcs, void* dst0, void* dst1, void* dst2, void* dst3, const void* src0, const void* src1, const void* src2, const void* src3, unsigned pixel_per_row)
{
	stage_scale2x_impl(dst0, dst1, src0, src1, src2, 2 * pixel_per_row);
	stage_scale2x_impl(dst2, dst3, src1, src2, src3, 2 * pixel_per_row);
}

#define SCDST(i) (dst + (i) * dst_slice)
#define SCSRC(i) (src + (i) * src_slice)
#define SCMID(i) (mid[(i)])

/**
 * Apply the Scale2x effect on a bitmap.
 * The destination bitmap is filled with the scaled version of the source bitmap.
 * The source bitmap isn't modified.
 * The destination bitmap must be manually allocated before calling the function,
 * note that the resulting size is exactly 2x2 times the size of the source bitmap.
 * \param void_dst Pointer at the first pixel of the destination bitmap.
 * \param dst_slice Size in bytes of a destination bitmap row.
 * \param void_src Pointer at the first pixel of the source bitmap.
 * \param src_slice Size in bytes of a source bitmap row.
 * \param width Horizontal size in pixels of the source bitmap.
 * \param height Vertical size in pixels of the source bitmap.
 */
static void scale2x(const struct stage_scale_funcs * funcs, void* void_dst, unsigned dst_slice, const void* void_src, unsigned src_slice, unsigned width, unsigned height, unsigned top, unsigned bottom)
{
	unsigned char* dst = (unsigned char*)void_dst;
	const unsigned char* src = (const unsigned char*)void_src;
	unsigned y;

	assert(height >= 2);

	if (top == 0) {
		stage_scale2x_impl(SCDST(0), SCDST(1), SCSRC(0), SCSRC(0), SCSRC(1), width);

		dst = SCDST(2);
		y = 1;
	} else {
		src = SCSRC(top - 1);
		dst = SCDST(top * 2);
		y = top;
	}

	while (y < bottom && y < height - 1) {
		stage_scale2x_impl(SCDST(0), SCDST(1), SCSRC(0), SCSRC(1), SCSRC(2), width);

		dst = SCDST(2);
		src = SCSRC(1);

		y++;
	}

	if (y < bottom) {
		stage_scale2x_impl(SCDST(0), SCDST(1), SCSRC(0), SCSRC(1), SCSRC(1), width);
	}
}

/**
 * Apply the Scale2x3 effect on a bitmap.
 * The destination bitmap is filled with the scaled version of the source bitmap.
 * The source bitmap isn't modified.
 * The destination bitmap must be manually allocated before calling the function,
 * note that the resulting size is exactly 2x3 times the size of the source bitmap.
 * \param void_dst Pointer at the first pixel of the destination bitmap.
 * \param dst_slice Size in bytes of a destination bitmap row.
 * \param void_src Pointer at the first pixel of the source bitmap.
 * \param src_slice Size in bytes of a source bitmap row.
 * \param width Horizontal size in pixels of the source bitmap.
 * \param height Vertical size in pixels of the source bitmap.
 */
static void scale2x3(const struct stage_scale_funcs * funcs, void* void_dst, unsigned dst_slice, const void* void_src, unsigned src_slice, unsigned width, unsigned height)
{
	unsigned char* dst = (unsigned char*)void_dst;
	const unsigned char* src = (const unsigned char*)void_src;
	unsigned count;

	assert(height >= 2);

	count = height;

	stage_scale2x3_impl(SCDST(0), SCDST(1), SCDST(2), SCSRC(0), SCSRC(0), SCSRC(1), width);

	dst = SCDST(3);

	count -= 2;
	while (count) {
		stage_scale2x3_impl(SCDST(0), SCDST(1), SCDST(2), SCSRC(0), SCSRC(1), SCSRC(2), width);

		dst = SCDST(3);
		src = SCSRC(1);

		--count;
	}

	stage_scale2x3_impl(SCDST(0), SCDST(1), SCDST(2), SCSRC(0), SCSRC(1), SCSRC(1), width);
}

/**
 * Apply the Scale2x4 effect on a bitmap.
 * The destination bitmap is filled with the scaled version of the source bitmap.
 * The source bitmap isn't modified.
 * The destination bitmap must be manually allocated before calling the function,
 * note that the resulting size is exactly 2x4 times the size of the source bitmap.
 * \param void_dst Pointer at the first pixel of the destination bitmap.
 * \param dst_slice Size in bytes of a destination bitmap row.
 * \param void_src Pointer at the first pixel of the source bitmap.
 * \param src_slice Size in bytes of a source bitmap row.
 * \param width Horizontal size in pixels of the source bitmap.
 * \param height Vertical size in pixels of the source bitmap.
 */
static void scale2x4(const struct stage_scale_funcs * funcs, void* void_dst, unsigned dst_slice, const void* void_src, unsigned src_slice, unsigned width, unsigned height)
{
	unsigned char* dst = (unsigned char*)void_dst;
	const unsigned char* src = (const unsigned char*)void_src;
	unsigned count;

	assert(height >= 2);

	count = height;

	stage_scale2x4_impl(SCDST(0), SCDST(1), SCDST(2), SCDST(3), SCSRC(0), SCSRC(0), SCSRC(1), width);

	dst = SCDST(4);

	count -= 2;
	while (count) {
		stage_scale2x4_impl(SCDST(0), SCDST(1), SCDST(2), SCDST(3), SCSRC(0), SCSRC(1), SCSRC(2), width);

		dst = SCDST(4);
		src = SCSRC(1);

		--count;
	}

	stage_scale2x4_impl(SCDST(0), SCDST(1), SCDST(2), SCDST(3), SCSRC(0), SCSRC(1), SCSRC(1), width);
}

/**
 * Apply the Scale3x effect on a bitmap.
 * The destination bitmap is filled with the scaled version of the source bitmap.
 * The source bitmap isn't modified.
 * The destination bitmap must be manually allocated before calling the function,
 * note that the resulting size is exactly 3x3 times the size of the source bitmap.
 * \param void_dst Pointer at the first pixel of the destination bitmap.
 * \param dst_slice Size in bytes of a destination bitmap row.
 * \param void_src Pointer at the first pixel of the source bitmap.
 * \param src_slice Size in bytes of a source bitmap row.
 * \param width Horizontal size in pixels of the source bitmap.
 * \param height Vertical size in pixels of the source bitmap.
 */
static void scale3x(const struct stage_scale_funcs * funcs, void* void_dst, unsigned dst_slice, const void* void_src, unsigned src_slice, unsigned width, unsigned height, unsigned top, unsigned bottom)
{
	unsigned char* dst = (unsigned char*)void_dst;
	const unsigned char* src = (const unsigned char*)void_src;
	unsigned y;

	assert(height >= 2);

	if (top == 0) {
		stage_scale3x_impl(SCDST(0), SCDST(1), SCDST(2), SCSRC(0), SCSRC(0), SCSRC(1), width);

		dst = SCDST(3);
		y = 1;
	} else {
		src = SCSRC(top - 1);
		dst = SCDST(3 * top);
		y = top;
	}

	while (y < bottom && y < height - 1) {
		stage_scale3x_impl(SCDST(0), SCDST(1), SCDST(2), SCSRC(0), SCSRC(1), SCSRC(2), width);

		dst = SCDST(3);
		src = SCSRC(1);

		y++;
	}

	if (y < bottom) {
		stage_scale3x_impl(SCDST(0), SCDST(1), SCDST(2), SCSRC(0), SCSRC(1), SCSRC(1), width);
	}
}

/**
 * Apply the Scale4x effect on a bitmap.
 * The destination bitmap is filled with the scaled version of the source bitmap.
 * The source bitmap isn't modified.
 * The destination bitmap must be manually allocated before calling the function,
 * note that the resulting size is exactly 4x4 times the size of the source bitmap.
 * \note This function requires also a small buffer bitmap used internally to store
 * intermediate results. This bitmap must have at least an horizontal size in bytes of 2*width*pixel,
 * and a vertical size of 6 rows. The memory of this buffer must not be allocated
 * in video memory because it's also read and not only written. Generally
 * a heap (malloc) or a stack (alloca) buffer is the best choice.
 * \param void_dst Pointer at the first pixel of the destination bitmap.
 * \param dst_slice Size in bytes of a destination bitmap row.
 * \param void_mid Pointer at the first pixel of the buffer bitmap.
 * \param mid_slice Size in bytes of a buffer bitmap row.
 * \param void_src Pointer at the first pixel of the source bitmap.
 * \param src_slice Size in bytes of a source bitmap row.
 * \param width Horizontal size in pixels of the source bitmap.
 * \param height Vertical size in pixels of the source bitmap.
 */
static void scale4x_buf(const struct stage_scale_funcs * funcs, void* void_dst, unsigned dst_slice, void* void_mid, unsigned mid_slice, const void* void_src, unsigned src_slice, unsigned width, unsigned height, unsigned top, unsigned bottom)
{
	unsigned char* dst = (unsigned char*)void_dst;
	const unsigned char* src = (const unsigned char*)void_src;
	unsigned y;
	unsigned char* mid[6];

	assert(height >= 4);

	/* set the 6 buffer pointers */
	mid[0] = (unsigned char*)void_mid;
	mid[1] = mid[0] + mid_slice;
	mid[2] = mid[1] + mid_slice;
	mid[3] = mid[2] + mid_slice;
	mid[4] = mid[3] + mid_slice;
	mid[5] = mid[4] + mid_slice;

	if (top <= 1) {
		stage_scale2x_impl(SCMID(-2 + 6), SCMID(-1 + 6), SCSRC(0), SCSRC(0), SCSRC(1), width);
		stage_scale2x_impl(SCMID(0), SCMID(1), SCSRC(0), SCSRC(1), SCSRC(2), width);
		stage_scale2x_impl(SCMID(2), SCMID(3), SCSRC(1), SCSRC(2), SCSRC(3), width);

		stage_scale4x(funcs, SCDST(0), SCDST(1), SCDST(2), SCDST(3), SCMID(-2 + 6), SCMID(-2 + 6), SCMID(-1 + 6), SCMID(0), width);
		dst = SCDST(4);

		stage_scale4x(funcs, SCDST(0), SCDST(1), SCDST(2), SCDST(3), SCMID(-1 + 6), SCMID(0), SCMID(1), SCMID(2), width);
		dst = SCDST(4);
		y = 2;
	} else {
		src = SCSRC(top - 2);
		stage_scale2x_impl(SCMID(0), SCMID(1), SCSRC(0), SCSRC(1), SCSRC(2), width);
		stage_scale2x_impl(SCMID(2), SCMID(3), SCSRC(1), SCSRC(2), SCSRC(3), width);
		dst = SCDST(4 * top);
		y = top;
	}

	while (y < bottom && y < (height - 2)) {
		unsigned char* tmp;

		stage_scale2x_impl(SCMID(4), SCMID(5), SCSRC(2), SCSRC(3), SCSRC(4), width);
		stage_scale4x(funcs, SCDST(0), SCDST(1), SCDST(2), SCDST(3), SCMID(1), SCMID(2), SCMID(3), SCMID(4), width);

		dst = SCDST(4);
		src = SCSRC(1);

		tmp = SCMID(0); /* shift by 2 position */
		SCMID(0) = SCMID(2);
		SCMID(2) = SCMID(4);
		SCMID(4) = tmp;
		tmp = SCMID(1);
		SCMID(1) = SCMID(3);
		SCMID(3) = SCMID(5);
		SCMID(5) = tmp;

		y++;
	}

	if (y < bottom) {
		stage_scale2x_impl(SCMID(4), SCMID(5), SCSRC(2), SCSRC(3), SCSRC(3), width);
		stage_scale4x(funcs, SCDST(0), SCDST(1), SCDST(2), SCDST(3), SCMID(1), SCMID(2), SCMID(3), SCMID(4), width);

		dst = SCDST(4);

		stage_scale4x(funcs, SCDST(0), SCDST(1), SCDST(2), SCDST(3), SCMID(3), SCMID(4), SCMID(5), SCMID(5), width);
	}
}

/**
 * Apply the Scale4x effect on a bitmap.
 * The destination bitmap is filled with the scaled version of the source bitmap.
 * The source bitmap isn't modified.
 * The destination bitmap must be manually allocated before calling the function,
 * note that the resulting size is exactly 4x4 times the size of the source bitmap.
 * \note This function operates like ::scale4x_buf() but the intermediate buffer is
 * automatically allocated in the stack.
 * \param void_dst Pointer at the first pixel of the destination bitmap.
 * \param dst_slice Size in bytes of a destination bitmap row.
 * \param void_src Pointer at the first pixel of the source bitmap.
 * \param src_slice Size in bytes of a source bitmap row.
 * \param pixel Bytes per pixel of the source and destination bitmap.
 * \param width Horizontal size in pixels of the source bitmap.
 * \param height Vertical size in pixels of the source bitmap.
 */
static void scale4x(const struct stage_scale_funcs * funcs, void* void_dst, unsigned dst_slice, const void* void_src, unsigned src_slice, unsigned pixel, unsigned width, unsigned height, unsigned top, unsigned bottom)
{
	unsigned mid_slice;
	void* mid_ptr;
	void* mid_alloc;

	/* required space for 1 row buffer */
	mid_slice = scale2x_align_size(2 * pixel * width);

#if HAVE_ALLOCA
	mid_alloc = alloca(6 * mid_slice + SCALE2X_ALIGN_ALLOC); /* allocate space for 6 row buffers */

	assert(mid_alloc != 0); /* alloca should never fails */
#else
	mid_alloc = malloc(6 * mid_slice + SCALE2X_ALIGN_ALLOC); /* allocate space for 6 row buffers */

	if (!mid_alloc)
		return;
#endif

	mid_ptr = scale2x_align_ptr(mid_alloc);

	scale4x_buf(funcs, void_dst, dst_slice, mid_ptr, mid_slice, void_src, src_slice, width, height, top, bottom);

#if !HAVE_ALLOCA
	free(mid_alloc);
#endif
}

/**
 * Check if the scale implementation is applicable at the given arguments.
 * \param scale Scale factor. 2, 203 (for 2x3), 204 (for 2x4), 3 or 4.
 * \param pixel Bytes per pixel of the source and destination bitmap.
 * \param width Horizontal size in pixels of the source bitmap.
 * \param height Vertical size in pixels of the source bitmap.
 * \return
 *   - -1 on precondition violated.
 *   - 0 on success.
 */
int scale_precondition(unsigned scale, unsigned pixel, unsigned width, unsigned height)
{
	if (pixel != 1 && pixel != 2 && pixel != 4)
		return -1;

	switch (scale) {
	case 202 :
	case 203 :
	case 204 :
	case 2 :
	case 303 :
	case 3 :
		if (height < 2)
			return -1;
		break;
	case 404 :
	case 4 :
		if (height < 4)
			return -1;
		break;
	default :
		return -1;
	}

	if (width < 2)
		return -1;

	return 0;
}

static unsigned int scale_options = SCALE2X_OPTION_DEFAULT;

/**
 * Set options for the Scale effect
 * \param options options for the Scale effect
 * \return previously set options for the Scale effect
 */
unsigned int scale_set_options(unsigned int options)
{
	unsigned int old_options = scale_options;
	scale_options = options;
	return old_options;
}

/**
 * Apply the Scale effect on a bitmap.
 * This function is simply a common interface for ::scale2x(), ::scale3x() and ::scale4x().
 * \param scale Scale factor. 2, 203 (fox 2x3), 204 (for 2x4), 3 or 4.
 * \param void_dst Pointer at the first pixel of the destination bitmap.
 * \param dst_slice Size in bytes of a destination bitmap row.
 * \param void_src Pointer at the first pixel of the source bitmap.
 * \param src_slice Size in bytes of a source bitmap row.
 * \param pixel Bytes per pixel of the source and destination bitmap.
 * \param width Horizontal size in pixels of the source bitmap.
 * \param height Vertical size in pixels of the source bitmap.
 */
void scale_part(unsigned scale, void* void_dst, unsigned dst_slice, const void* void_src, unsigned src_slice, unsigned pixel, unsigned width, unsigned height, unsigned top, unsigned bottom)
{
	struct stage_scale_funcs funcs;

	switch (pixel) {
	case 1 :
#ifdef USE_SCALE2X_SSE2
		if (!(scale_options & SCALE2X_OPTION_NO_SSE2)) {
			funcs.stage_scale2x = (stage_scale2x_t)scale2x_8_sse2;
			funcs.stage_scale2x3 = (stage_scale3x_t)scale2x3_8_sse2;
			funcs.stage_scale2x4 = (stage_scale2x4_t)scale2x4_8_sse2;
		} else
#endif
#ifdef USE_SCALE2X_ALTIVEC
		if (!(scale_options & SCALE2X_OPTION_NO_ALTIVEC)) {
			funcs.stage_scale2x = (stage_scale2x_t)scale2x_8_altivec;
			funcs.stage_scale2x3 = (stage_scale3x_t)scale2x3_8_altivec;
			funcs.stage_scale2x4 = (stage_scale2x4_t)scale2x4_8_altivec;
		} else
#endif
#ifdef USE_SCALE2X_NEON
		if (!(scale_options & SCALE2X_OPTION_NO_NEON)) {
			funcs.stage_scale2x = (stage_scale2x_t)scale2x_8_neon;
			funcs.stage_scale2x3 = (stage_scale3x_t)scale2x3_8_neon;
			funcs.stage_scale2x4 = (stage_scale2x4_t)scale2x4_8_neon;
		} else
#endif
		{
			funcs.stage_scale2x = (stage_scale2x_t)scale2x_8_def;
			funcs.stage_scale2x3 = (stage_scale3x_t)scale2x3_8_def;
			funcs.stage_scale2x4 = (stage_scale2x4_t)scale2x4_8_def;
		}
		funcs.stage_scale3x = (stage_scale3x_t)scale3x_8_def;
		break;
	case 2 :
#ifdef USE_SCALE2X_SSE2
		if (!(scale_options & SCALE2X_OPTION_NO_SSE2)) {
			funcs.stage_scale2x = (stage_scale2x_t)scale2x_16_sse2;
			funcs.stage_scale2x3 = (stage_scale3x_t)scale2x3_16_sse2;
			funcs.stage_scale2x4 = (stage_scale2x4_t)scale2x4_16_sse2;
		} else
#endif
#ifdef USE_SCALE2X_ALTIVEC
		if (!(scale_options & SCALE2X_OPTION_NO_ALTIVEC)) {
			funcs.stage_scale2x = (stage_scale2x_t)scale2x_16_altivec;
			funcs.stage_scale2x3 = (stage_scale3x_t)scale2x3_16_altivec;
			funcs.stage_scale2x4 = (stage_scale2x4_t)scale2x4_16_altivec;
		} else
#endif
#ifdef USE_SCALE2X_NEON
		if (!(scale_options & SCALE2X_OPTION_NO_NEON)) {
			funcs.stage_scale2x = (stage_scale2x_t)scale2x_16_neon;
			funcs.stage_scale2x3 = (stage_scale3x_t)scale2x3_16_neon;
			funcs.stage_scale2x4 = (stage_scale2x4_t)scale2x4_16_neon;
		} else
#endif
		{
			funcs.stage_scale2x = (stage_scale2x_t)scale2x_16_def;
			funcs.stage_scale2x3 = (stage_scale3x_t)scale2x3_16_def;
			funcs.stage_scale2x4 = (stage_scale2x4_t)scale2x4_16_def;
		}
		funcs.stage_scale3x = (stage_scale3x_t)scale3x_16_def;
		break;
	case 4 :
#ifdef USE_SCALE2X_SSE2
		if (!(scale_options & SCALE2X_OPTION_NO_SSE2)) {
			funcs.stage_scale2x = (stage_scale2x_t)scale2x_32_sse2;
			funcs.stage_scale2x3 = (stage_scale3x_t)scale2x3_32_sse2;
			funcs.stage_scale2x4 = (stage_scale2x4_t)scale2x4_32_sse2;
		} else
#endif
#ifdef USE_SCALE2X_ALTIVEC
		if (!(scale_options & SCALE2X_OPTION_NO_ALTIVEC)) {
			funcs.stage_scale2x = (stage_scale2x_t)scale2x_32_altivec;
			funcs.stage_scale2x3 = (stage_scale3x_t)scale2x3_32_altivec;
			funcs.stage_scale2x4 = (stage_scale2x4_t)scale2x4_32_altivec;
		} else
#endif
#ifdef USE_SCALE2X_NEON
		if (!(scale_options & SCALE2X_OPTION_NO_NEON)) {
			funcs.stage_scale2x = (stage_scale2x_t)scale2x_32_neon;
			funcs.stage_scale2x3 = (stage_scale3x_t)scale2x3_32_neon;
			funcs.stage_scale2x4 = (stage_scale2x4_t)scale2x4_32_neon;
		} else
#endif
		{
			funcs.stage_scale2x = (stage_scale2x_t)scale2x_32_def;
			funcs.stage_scale2x3 = (stage_scale3x_t)scale2x3_32_def;
			funcs.stage_scale2x4 = (stage_scale2x4_t)scale2x4_32_def;
		}
		funcs.stage_scale3x = (stage_scale3x_t)scale3x_32_def;
		break;
	default :
		return;
	}
	switch (scale) {
	case 202 :
	case 2 :
		scale2x(&funcs, void_dst, dst_slice, void_src, src_slice, width, height, top, bottom);
		break;
	case 203 :
		scale2x3(&funcs, void_dst, dst_slice, void_src, src_slice, width, height);
		break;
	case 204 :
		scale2x4(&funcs, void_dst, dst_slice, void_src, src_slice, width, height);
		break;
	case 303 :
	case 3 :
		scale3x(&funcs, void_dst, dst_slice, void_src, src_slice, width, height, top, bottom);
		break;
	case 404 :
	case 4 :
		scale4x(&funcs, void_dst, dst_slice, void_src, src_slice, pixel, width, height, top, bottom);
		break;
	}
}


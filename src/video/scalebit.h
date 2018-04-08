/*
 * This file is part of the Scale2x project.
 *
 * Copyright (C) 2003 Andrea Mazzoleni
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

#ifndef __SCALEBIT_H
#define __SCALEBIT_H

#define SCALE2X_OPTION_DEFAULT	0
#define SCALE2X_OPTION_NO_SSE2	0x001
#define SCALE2X_OPTION_NO_ALTIVEC	0x002
#define SCALE2X_OPTION_NO_NEON	0x004
#define SCALE2X_OPTION_NO_VECT	(SCALE2X_OPTION_NO_SSE2|SCALE2X_OPTION_NO_ALTIVEC|SCALE2X_OPTION_NO_NEON)

unsigned int scale_set_options(unsigned int options);
int scale_precondition(unsigned scale, unsigned pixel, unsigned width, unsigned height);
#define scale(scale, void_dst, dst_slice, void_src, src_slice, pixel, width, height) scale_part(scale, void_dst, dst_slice, void_src, src_slice, pixel, width, height, 0, height)
void scale_part(unsigned scale, void* void_dst, unsigned dst_slice, const void* void_src, unsigned src_slice, unsigned pixel, unsigned width, unsigned height, unsigned top, unsigned bottom);

#endif

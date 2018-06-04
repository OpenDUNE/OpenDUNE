/*
 * Copyright (C) 2010 Cameron Zemek ( grom@zeminvaders.net)
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307 USA
 */

#include <stdlib.h>
#include <assert.h>
#include "hqx.h"

uint32_t * RGBtoYUV = NULL;

HQX_API void HQX_CALLCONV hqxInit(void)
{
    /* Initalize RGB to YUV lookup table */
    uint32_t c, r, g, b, y, u, v;
#ifndef HQX_VGACOLORS
    RGBtoYUV = malloc(sizeof(uint32_t) * 16777216);
	assert (RGBtoYUV != NULL);

    for (c = 0; c < 16777216; c++) {
        r = (c & 0xFF0000) >> 16;
        g = (c & 0x00FF00) >> 8;
        b = c & 0x0000FF;
        y = (uint32_t)(0.299*r + 0.587*g + 0.114*b);
        u = (uint32_t)(-0.169*r - 0.331*g + 0.5*b) + 128;
        v = (uint32_t)(0.5*r - 0.419*g - 0.081*b) + 128;
        RGBtoYUV[c] = (y << 16) + (u << 8) + v;
    }
#else
    /* DUNE 2 is using 6bit per component colors (VGA) */
    RGBtoYUV = malloc(sizeof(uint32_t) * 64*64*64);
	assert (RGBtoYUV != NULL);

    for (c = 0; c < 64*64*64; c++) {
        r = (((c & 0x0FF000) >> 12) * 0x41) >> 4;
        g = (((c & 0x000FC0) >> 6) * 0x41) >> 4;
        b = ((c & 0x00003F) * 0x41) >> 4;
        y = (uint32_t)(0.299*r + 0.587*g + 0.114*b);
        u = (uint32_t)(-0.169*r - 0.331*g + 0.5*b) + 128;
        v = (uint32_t)(0.5*r - 0.419*g - 0.081*b) + 128;
        RGBtoYUV[c] = (y << 16) + (u << 8) + v;
    }
#endif
}

HQX_API void HQX_CALLCONV hqxUnInit(void)
{
    free(RGBtoYUV);
    RGBtoYUV = NULL;
}

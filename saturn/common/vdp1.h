/** @file saturn/common/vdp1.h VDP1 sprite layer: frame buffer, command lists and patterns. */

#ifndef SATURN_VDP1_H
#define SATURN_VDP1_H

#include <stdint.h>

/* VDP1 VRAM (512 KB) and its system registers (VDP1 User's Manual). */
#define VDP1_VRAM 0x25C00000UL

#define VDP1_TVMR (*(volatile uint16_t *)0x25D00000UL)
#define VDP1_FBCR (*(volatile uint16_t *)0x25D00002UL)
#define VDP1_PTMR (*(volatile uint16_t *)0x25D00004UL)
#define VDP1_EWDR (*(volatile uint16_t *)0x25D00006UL)
#define VDP1_EWLR (*(volatile uint16_t *)0x25D00008UL)
#define VDP1_EWRR (*(volatile uint16_t *)0x25D0000AL)

/* VRAM layout: the command lists live at 0 (reached through the jump command
 * there), the cached sprite patterns follow, and the top 256 KB is the CD
 * sector cache (files.c). */
enum {
	VDP1_PATTERNS = 0x8000,  /*!< cached sprite patterns, 8 bpp */
	VDP1_CD_CACHE = 0x40000  /*!< the CD sector cache */
};

/* A command table is 32 bytes; the draw end command marks the list's end. */
#define VDP1_CMD_END 0x8000

extern void Vdp1_Init(void);

#endif /*!< SATURN_VDP1_H */

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

/* The 32-byte command table (VDP1 User's Manual, figure 5.5). */
typedef struct Vdp1Cmd {
	uint16_t ctrl; /*!< +00: end, jump, direction and command */
	uint16_t link; /*!< +02: link address / 8 */
	uint16_t pmod; /*!< +04: draw mode (colour mode, mesh, ...) */
	uint16_t colr; /*!< +06: colour bank */
	uint16_t srca; /*!< +08: character address / 8 */
	uint16_t size; /*!< +0A: character size */
	int16_t  xa;   /*!< +0C: vertex A, x (10.5 fixed point) */
	int16_t  ya;   /*!< +0E: vertex A, y */
	int16_t  xb;   /*!< +10 */
	int16_t  yb;   /*!< +12 */
	int16_t  xc;   /*!< +14 */
	int16_t  yc;   /*!< +16 */
	int16_t  xd;   /*!< +18 */
	int16_t  yd;   /*!< +1A */
	uint16_t grda; /*!< +1C: Gouraud shading table / 8 */
	uint16_t dmmy; /*!< +1E: skipped */
} Vdp1Cmd;

/* Command selection (ctrl bits 3-0) and direction (bits 5-4). */
enum {
	VDP1_CMD_NORMAL_SPRITE = 0x0,
	VDP1_CMD_SCALED_SPRITE = 0x1,
	VDP1_CMD_DISTORTED_SPRITE = 0x2,
	VDP1_CMD_POLYGON = 0x4,
	VDP1_CMD_POLYLINE = 0x5,
	VDP1_CMD_LINE = 0x6,
	VDP1_DIR_HFLIP = 0x10, /*!< ctrl bit 4: read the pattern right to left */
	VDP1_DIR_VFLIP = 0x20  /*!< ctrl bit 5: read the pattern bottom to top */
};

/* Draw mode bits (pmod). */
enum {
	VDP1_PMOD_MESH = 0x0100,        /*!< checkerboard, every other pixel */
	VDP1_PMOD_ECD = 0x0080,         /*!< end code (colour 0) drawn, not transparent */
	VDP1_PMOD_SPD = 0x0040,         /*!< transparent pixel drawn */
	VDP1_PMOD_COLOR_256 = 0x0020,   /*!< 8 bits/pixel, 256 colours, colour bank 0 */
	VDP1_PMOD_COLOR_16 = 0x0000     /*!< 4 bits/pixel, 16 colours */
};

/* VRAM addresses are character-number units of 0x20 bytes. */
#define VDP1_CHAR_ADDR(a) ((uint16_t)((a) >> 3))

/* The command list is built while the previous one is drawn; the CPU switches
 * to the one it just built in the vertical blank. */
extern void Vdp1_Init(void);
extern void Vdp1_ListBegin(void);
extern Vdp1Cmd *Vdp1_ListAdd(void);
extern void Vdp1_ListCommit(void);
extern void Vdp1_ListVBlank(void);
extern void Vdp1_ListReset(void);

/* Sprite patterns are baked into VDP1 VRAM on demand, resetting each frame. */
extern void Vdp1_PatternReset(void);
extern uint32_t Vdp1_PatternAlloc(int bytes);

#endif /*!< SATURN_VDP1_H */

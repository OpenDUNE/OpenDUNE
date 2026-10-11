/** @file saturn/common/vdp1.c VDP1 sprite layer: frame buffer, command lists and patterns.
 *
 * VDP1 draws into a 16 bpp frame buffer that VDP2 shows as its sprite layer.
 * A one-cycle frame buffer is erased to the transparent colour over the whole
 * 320x224 picture each frame, and drawing restarts from the command list at
 * the start of VDP1's VRAM with each frame change.
 *
 * The command list is double buffered: the game loop fills one list while
 * VDP1 draws the other, and the jump command at the start of VRAM is switched
 * to the new list in the vertical blank. */

#include <stdbool.h>
#include <stddef.h>
#include <string.h>

#include "vdp1.h"

enum {
	/* the jump command is 32 bytes at 0, then two command lists */
	VDP1_LIST_A = 0x00020,
	VDP1_LIST_B = 0x04000,
	VDP1_LIST_COMMANDS = (VDP1_LIST_B - VDP1_LIST_A) / 32 /* leave 0x20 for the end */
};

static uint32_t s_listBuild;  /*!< the list the game loop fills */
static uint32_t s_listActive; /*!< the list VDP1 draws */
static int s_listCount;       /*!< commands in the build list */
static bool s_listPending;    /*!< a finished list waits for the vertical blank */

static uint32_t s_patternNext; /*!< next free byte in the pattern area */


uint32_t g_vdp1Commands;    /*!< diagnostics: commands in the list built this frame */
uint32_t g_vdp1CommitCount; /*!< diagnostics: commands in the list committed last */
uint32_t g_vdp1Magic;       /*!< diagnostics: proves Vdp1_Init ran */
uint32_t g_vdp1BeginCount;  /*!< diagnostics: how often the list is begun */
uint32_t g_vdp1TracePos;    /*!< diagnostics: index into the trace rings */
uint32_t g_vdp1CommitTrace[8]; /*!< diagnostics: command count at each commit */
uint32_t g_vdp1AddTrace[8];    /*!< diagnostics: commands added since the last begin */

/**
 * Set VDP1 up: a 16 bpp one-cycle frame buffer, erased to colour 0 over the
 * whole picture, drawing automatically each frame from an empty command list.
 */
void Vdp1_Init(void)
{
	Vdp1Cmd *jump;

	g_vdp1Magic = 0xA5A5A5A5;

	/* 16 bpp, normal 320x224, no V-blank erase; erase over the whole picture */
	VDP1_TVMR = 0x0000;

	/* one-cycle frame buffer, changes each field */
	VDP1_FBCR = 0x0000;

	/* erase to colour 0 (transparent) from (0, 0) to (320, 223); the
	 * horizontal coordinates are in units of 8 pixels */
	VDP1_EWDR = 0x0000;
	VDP1_EWLR = 0x0000;
	VDP1_EWRR = (40 << 9) | 223;

	/* draw automatically at the start of every frame (PTM = 10B) */
	VDP1_PTMR = 0x0002;

	s_listActive = VDP1_LIST_A;
	s_listBuild = VDP1_LIST_B;
	s_listCount = 0;
	s_listPending = false;
	s_patternNext = VDP1_PATTERNS;

	/* the list at the start of VRAM is a single jump to the active one.
	 * VDP1 leaves a stray pixel at a non-drawing command's vertex, so
	 * clear the whole table and put that vertex off the picture. */
	jump = (Vdp1Cmd *)VDP1_VRAM;
	memset(jump, 0, sizeof(*jump));
	jump->ctrl = 0x1000; /* JP = jump assign */
	jump->link = (uint16_t)(s_listActive >> 3);
	jump->xa = 400;
	jump->ya = 300;

	/* The local coordinate register is undefined after a reset and is added
	 * to every subsequent draw, so it must be set before drawing starts.
	 * The register persists, so one command in this very first list is
	 * enough - and it keeps a stray pixel at (0,0) out of every later
	 * list. */
	{
		Vdp1Cmd *lc = (Vdp1Cmd *)(VDP1_VRAM + s_listActive);

		memset(lc, 0, 2 * sizeof(*lc));
		lc[0].ctrl = 0x000A; /* local coordinate set */
		lc[0].xa = 0;
		lc[0].ya = 0;
		lc[1].ctrl = VDP1_CMD_END;
	}
}

/**
 * Start filling the list that VDP1 is not drawing.
 */
void Vdp1_ListBegin(void)
{
	Vdp1Cmd *clip;

	s_listCount = 0;
	s_listPending = false;
	g_vdp1BeginCount++;

	/* The system clipping area is undefined until a command sets it, so
	 * put one at the head of every list: upper left is fixed at (0,0),
	 * lower right is the bottom of the picture. */
	clip = (Vdp1Cmd *)(VDP1_VRAM + s_listBuild);
	memset(clip, 0, sizeof(*clip));
	clip->ctrl = 0x0009; /* system clipping coordinate set */
	clip->xc = 239; /* the viewport is 240x160 at display (0,52) */
	clip->yc = 211;
	/* The clipping area's upper left is fixed at (0,0) whoever we are, but
	 * VDP1 leaves a stray pixel at the command's vertex, so put that
	 * vertex off the picture. */
	clip->xa = 400;
	clip->ya = 300;
	s_listCount = 1;


}

/**
 * The next command of the list being built, or NULL when it is full.
 *
 * @return The command to fill in.
 */
Vdp1Cmd *Vdp1_ListAdd(void)
{
	Vdp1Cmd *cmd;

	if (s_listCount >= VDP1_LIST_COMMANDS) return NULL;

	cmd = (Vdp1Cmd *)(VDP1_VRAM + s_listBuild) + s_listCount;
	s_listCount++;
	g_vdp1Commands = (uint32_t)s_listCount;
	return cmd;
}

/**
 * Finish the list being built with a draw end command; it is switched in at
 * the next vertical blank.
 */
void Vdp1_ListCommit(void)
{
	Vdp1Cmd *end = (Vdp1Cmd *)(VDP1_VRAM + s_listBuild) + s_listCount;

	/* a stray pixel can come from a command's vertex, so leave none set */
	memset(end, 0, sizeof(*end));
	end->ctrl = VDP1_CMD_END;
	end->xa = 400;
	end->ya = 300;
	g_vdp1CommitCount = (uint32_t)s_listCount;
	g_vdp1CommitTrace[g_vdp1TracePos & 7] = (uint32_t)s_listCount;
	g_vdp1AddTrace[g_vdp1TracePos & 7] = g_vdp1Commands;
	g_vdp1TracePos++;
	s_listPending = true;
}

/**
 * The vertical blank: switch VDP1 to the list just finished, if any.
 */
void Vdp1_ListVBlank(void)
{
	Vdp1Cmd *jump;

	if (!s_listPending) return;

	jump = (Vdp1Cmd *)VDP1_VRAM;
	jump->link = (uint16_t)(s_listBuild >> 3);

	s_listActive = s_listBuild;
	s_listBuild = (s_listBuild == VDP1_LIST_A) ? VDP1_LIST_B : VDP1_LIST_A;
	s_listPending = false;
}

/**
 * Throw the list being built away (as when the map viewport is not drawn).
 */
void Vdp1_ListReset(void)
{
	s_listCount = 0;
	s_listPending = false;
}

/**
 * Forget every cached sprite pattern. Called when the viewport is redrawn from
 * scratch so the whole picture gets fresh patterns.
 */
void Vdp1_PatternReset(void)
{
	s_patternNext = VDP1_PATTERNS;
}

/**
 * Reserve room for a pattern of the given size, 32-byte aligned.
 *
 * @param bytes How many bytes the pattern needs.
 * @return Its address in VDP1 VRAM, or 0 when there is no room.
 */
uint32_t Vdp1_PatternAlloc(int bytes)
{
	uint32_t address;

	address = (s_patternNext + 0x1F) & ~0x1FUL;
	if (address + (uint32_t)bytes > VDP1_CD_CACHE) return 0;

	s_patternNext = address + (uint32_t)bytes;
	return address;
}

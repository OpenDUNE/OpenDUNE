/* ATARI Falcon / TT Video Driver */

#include <string.h>
#include <stdlib.h>

#include <mint/sysbind.h>
#include <mint/osbind.h>
#include <mint/ostruct.h>
#include <mint/falcon.h>
#include <mint/cookie.h>

#include "types.h"
#include "video.h"
#include "video_fps.h"
#include "../gfx.h"
#include "../input/input.h"
#include "../input/mouse.h"
#include "../os/error.h"

/* ATARI IKBD doc : https://www.kernel.org/doc/Documentation/input/atarikbd.txt
 * see  */
extern void install_ikbd_handler(void);
extern void uninstall_ikbd_handler(void);

/* chunky to planar routine : */
extern void c2p1x1_8_falcon(void * planar, void * chunky, uint32 count);
extern void c2p1x1_8_tt(void * planar, void * chunky, uint32 count);
extern void c2p1x1_8_tt_partial(void * planar, void * chunky, uint32 count);
extern void c2p1x1_4_st(void * planar, void * chunky, uint32 count, void * pal);

/* switch FPS display */
extern void Video_SwitchFPSDisplay(uint8 key);

/* Chunky buffer. What a shame that the TT030 and Falcon030 have no
 * chunky 256 colors mode, that would spare us expensive chunky to planar
 * conversion. */
static uint8 * s_framebuffer = NULL;

/* offset to center the 320x200 image in 320x240 display */
static uint32 s_center_image_offset = 0;

static short s_savedMode = 0;
static void* s_savedLogBase = 0;
static void* s_savedPhysBase = 0;

static enum {
	MCH_UNKNOWN=0, MCH_ST, MCH_STE, MCH_TT, MCH_FALCON, MCH_OTHER
} s_machine_type = MCH_UNKNOWN;

static uint32 s_paletteBackup[256];
static uint16 s_SquareTable[256];

static uint16 s_screenOffset = 0;
static bool s_screen_needrepaint = false;

static bool s_showFPS = false;

/* 4bit palette */
#define MAKE_PC_COLOR(_r,_g,_b) _r>>2,_g>>2,_b>>2,0
const uint8 s_palette4BitPC[16*4] =
{
	MAKE_PC_COLOR(20,12,28), MAKE_PC_COLOR(68,36,52), MAKE_PC_COLOR(48,52,109),	MAKE_PC_COLOR(78,74,78),
	MAKE_PC_COLOR(133,76,48), MAKE_PC_COLOR(52,101,36), MAKE_PC_COLOR(208,70,72), MAKE_PC_COLOR(117,113,97),
	MAKE_PC_COLOR(89,125,206), MAKE_PC_COLOR(210,125,44), MAKE_PC_COLOR(133,149,161), MAKE_PC_COLOR(109,170,44),
	MAKE_PC_COLOR(210,170,153), MAKE_PC_COLOR(109,194,202), MAKE_PC_COLOR(218,212,94), MAKE_PC_COLOR(222,238,214)
};

static uint8 s_palette4BitMap[256];

static inline uint8 Palette_FindClosestColor(uint8 r, uint8 g, uint8 b)
{
	uint8 i;
	uint32 ar, ag, ab, sum;
	uint8 bestItem = 0;
	uint32 bestSum = (uint32) - 1;
	const uint8 *pal = s_palette4BitPC;

	r &= ~3; g &= ~3; b &= ~3;
	for (i=0; i<16; i++, pal+=4)
	{
		ar = pal[0] & ~3;
		ag = pal[1] & ~3;
		ab = pal[2] & ~3;
		if (ar==r && ag==g && ab==b)
			return i;

		ar = (ar > r) ? ar - r : r - ar;
		ag = (ag > g) ? ag - g : g - ag;
		ab = (ab > b) ? ab - b : b - ab;

		ar = s_SquareTable[ar];
		ag = s_SquareTable[ag];
		ab = s_SquareTable[ab];
		sum = ((ar<<1)+ar) + ((ag<<2)+(ag<<1)) + (ab<<1);	/* (r*3 + g*6 + b*2) */

		if (sum < bestSum)
		{
			bestSum = sum;
			bestItem = i;
		}
	}
	return bestItem;
}


/* mouse : */
static int s_mouse_x = SCREEN_WIDTH/2;
static int s_mouse_x_min = 0;
static int s_mouse_x_max = SCREEN_WIDTH-1;
static int s_mouse_y = SCREEN_HEIGHT/2;
static int s_mouse_y_min = 0;
static int s_mouse_y_max = SCREEN_HEIGHT-1;
static bool s_mouse_left_btn = false;
static bool s_mouse_right_btn = true;
static volatile bool s_mouse_state_changed = false;

/**
 * Mouse interrupt Handler
 *
 * Receive and process Mouse IKBD packets.
 */
void Mouse_Handler(char * ikbd_packet)
{
	/* The relative mouse position record is a three byte record of the form
	(regardless of keyboard mode):
    %111110xy           ; mouse position record flag
                        ; where y is the right button state
                        ; and x is the left button state
    X                   ; delta x as twos complement integer
    Y                   ; delta y as twos complement integer
	*/
	s_mouse_x += (int)ikbd_packet[1];
	s_mouse_y += (int)ikbd_packet[2];
	if(s_mouse_x < s_mouse_x_min) {
		s_mouse_x = s_mouse_x_min;
	} else if(s_mouse_x > s_mouse_x_max) {
		s_mouse_x = s_mouse_x_max;
	}
	if(s_mouse_y < s_mouse_y_min) {
		s_mouse_y = s_mouse_y_min;
	} else if(s_mouse_y > s_mouse_y_max) {
		s_mouse_y = s_mouse_y_max;
	}
#if 0
	Mouse_EventHandler(s_mouse_x, s_mouse_y,
	                   ikbd_packet[0]&2 /*left*/, ikbd_packet[0]&1 /*right*/);
#endif
	s_mouse_left_btn = ikbd_packet[0]&2;
	s_mouse_right_btn = ikbd_packet[0]&1;
	s_mouse_state_changed = true;
}

static void Detect_Machine(void)
{
	long machine_type;
	/* Get machine type with '_MCH' cookie */
	if(Getcookie(C__MCH, &machine_type) == C_FOUND) {
		switch(machine_type >> 16) {
		case 0:
			s_machine_type = MCH_ST;
			break;
		case 1:
			s_machine_type = MCH_STE;
			break;
		case 2:
			s_machine_type = MCH_TT;
			break;
		case 3:
			s_machine_type = MCH_FALCON;
			break;
		default:
			s_machine_type = MCH_OTHER;
		}
		Debug("_MCH cookie value : %08lx\n", machine_type);
	} else {
		/* Failed to get Cookie => Plain old ST ? */
		s_machine_type = MCH_ST;
		Warning("Failed to get _MCH cookie\n");
	}
}

/**
 * Initialize the video driver.
 */
bool Video_Init(int screen_magnification, VideoScaleFilter filter)
{
	VARIABLE_NOT_USED(filter);
	VARIABLE_NOT_USED(screen_magnification);
	int i;

	s_framebuffer = calloc(1, SCREEN_WIDTH * (SCREEN_HEIGHT + 4));
	if (s_framebuffer == NULL) {
		Error("Failed to allocate %d bytes.\n", SCREEN_WIDTH * (SCREEN_HEIGHT + 4));
		return false;
	}

	(void)Cconws("Video_Init()\r\n");
	if(s_machine_type == MCH_UNKNOWN) Detect_Machine();

	(void)Cursconf(0, 0);	/* switch cursor Off */
	g_consoleActive = false;

	if(s_machine_type == MCH_FALCON) {
		short newMode;
		long vSize, saddr;
		s_savedMode = VsetMode(VM_INQUIRE);	/* get current mode */
		/*  8 planes 256 colours + 40 columns + double line (if VGA) */
		newMode = (s_savedMode & (VGA | PAL)) | BPS8 | COL40 | ((s_savedMode & VGA) ? VERTFLAG : 0);
		vSize = VgetSize(newMode);
		s_center_image_offset = (vSize-(SCREEN_WIDTH*SCREEN_HEIGHT)) >> 1;
		Debug("allocate %ld + %d bytes for mode $%04x\n", vSize, 4*SCREEN_WIDTH, (int)newMode);
		saddr = Srealloc(vSize + 4*SCREEN_WIDTH);	/* allocate 4 lines more for explosions */
#if 0
		(void)VsetMode((s_savedMode & (VGA | PAL)) | BPS8 | COL40 | ((s_savedMode & VGA) ? VERTFLAG : 0));
#else
		Vsetscreen(saddr, saddr, 3, newMode);
#endif
		VgetRGB(0, 256, s_paletteBackup);	/* backup palette */
	} else if(s_machine_type == MCH_TT) {
		/* set TT 8bps video mode */
		s_savedMode = EgetShift();
		EsetShift(TT_LOW); /* set TT 8bps video mode */
		EgetPalette(0, 256, s_paletteBackup);	/* backup palette */
		s_center_image_offset = 320*40;
	} else if (s_machine_type == MCH_ST || s_machine_type == MCH_STE) {
		/* set ST/STE 4bps video mode */
		s_savedMode = Getrez();
		s_savedLogBase = Logbase();
		s_savedPhysBase = Physbase();
		Setscreen(-1, -1, 0);	 /* set ST-Low resolution */
		/* set and backup system palette */
		for (i=0; i<16; i++) {
			s_paletteBackup[i] = Setcolor(i, ((s_palette4BitPC[i*4+0] << 5) & 0x0700) | ((s_palette4BitPC[i*4+1] << 1) & 0x0070) | ((s_palette4BitPC[i*4+2]>>3) & 0x007));
		}
	} else {
		Error("Unsupported machine type.\nPlease contact us if you know how to initialize a 256 color mode on your machine.\n");
		return false;
	}

	/* build square table */
	for (i=0; i<256; i++)
		s_SquareTable[i] = (uint16)(i * i);

	Debug("old video mode = $%04hx\n", s_savedMode);
	Debug("Physbase() = $%08x  Logbase() = $%08x\n", Physbase(), Logbase());
	/* install IKBD handler for mouse and keyboard IRQ */
	Supexec(install_ikbd_handler);
	return true;
}

/**
 * Uninitialize the video driver.
 */
void Video_Uninit(void)
{
	(void)Cursconf(1, 0);	/* switch cursor On */
	if(s_machine_type == MCH_FALCON) {
		long saddr;
		VsetRGB(0, 256, s_paletteBackup);
#if 0
		(void)VsetMode(s_savedMode);
#else
		saddr = Srealloc(VgetSize(s_savedMode));
		Vsetscreen(saddr, saddr, 3, s_savedMode);
#endif
	} else if(s_machine_type == MCH_TT) {
		EsetPalette(0, 256, s_paletteBackup);
		(void)EsetShift(s_savedMode);
	} else if (s_machine_type == MCH_ST || s_machine_type == MCH_STE) {
		int i;
		for (i=0; i<16; i++) {
			int oldColor = Setcolor(i, s_paletteBackup[i]);
			VARIABLE_NOT_USED(oldColor);
		}
		Setscreen(s_savedLogBase, s_savedPhysBase, s_savedMode);
	}
	Supexec(uninstall_ikbd_handler);
	g_consoleActive = true;
	free(s_framebuffer);
	s_framebuffer = NULL;
}

void Video_SwitchFPSDisplay(uint8 key)
{
	Debug("Video_SwitchFPSDisplay key=$%02x\n", key);
	if(key & 0x80) {	/* key UP */
		s_showFPS = !s_showFPS;
	}
}

static uint32 s_fps_chars[5];

static void Video_Atari_DrawChar(uint8 * screen, uint16 x, uint8 digit)
{
	static const uint8 fontdigits[10] = {0167,044,0135,0155,056,0153,0173,045,0177,0157};
	static const uint8 fonttestsegments[15] = {03,01,05, 02,0,04, 032,010,054, 020,0,040, 0120,0100,0140};
	uint8 segments = fontdigits[digit];
	int i, line;
	uint32 pixels = 0;

	(void)screen;

	for (i = 0, line = 0; i<15; i++) {
		pixels <<= 1;
		if (segments & fonttestsegments[i])	pixels++;
		if((i % 3) == 2) {
			pixels <<= 1;
			s_fps_chars[line] |= pixels << (320-4-x);
			line++;
			pixels = 0;
		}
	}
}

/**
 * Runs every tick to handle video updates.
 */
void Video_Tick(void)
{
	uint8 *data = GFX_Screen_Get_ByIndex(SCREEN_0);
	uint8 *screen = Logbase();
	screen += s_center_image_offset;

	/* send mouse event */
	if(s_mouse_state_changed) {
		s_mouse_state_changed = false;
		Mouse_EventHandler(s_mouse_x, s_mouse_y,
		                   s_mouse_left_btn, s_mouse_right_btn);
	}

	if (s_showFPS) {
		memset(s_fps_chars, 0, sizeof(s_fps_chars));
		Video_ShowFPS_2(screen, 320, Video_Atari_DrawChar);
	}

	if (GFX_Screen_IsDirty(SCREEN_0) || s_screen_needrepaint) {
		struct dirty_area * area;
		int height = SCREEN_HEIGHT;
		int width = SCREEN_WIDTH;
		int left = 0;

		area = GFX_Screen_GetDirtyArea(SCREEN_0);
		if (!s_screen_needrepaint && area != NULL) {
			if (area->top >= area->bottom) {
				Warning("GFX_Screen_GetDirtyArea: (%hu, %hu) - (%hu, %hu)\n", area->left, area->top, area->right, area->bottom);
				return;
			}
			data += area->top * SCREEN_WIDTH;
			if (s_machine_type == MCH_TT) {
				screen += area->top * (SCREEN_WIDTH << 1);
			} else if (s_machine_type == MCH_ST || s_machine_type == MCH_STE) {
				screen += area->top * (SCREEN_WIDTH >> 1);
			} else {
				screen += area->top * SCREEN_WIDTH;
			}

			if (area->bottom > SCREEN_HEIGHT) {
				Warning("GFX_Screen_GetDirtyArea: (%hu, %hu) - (%hu, %hu)\n", area->left, area->top, area->right, area->bottom);
				area->bottom = SCREEN_HEIGHT;
			}
			height = area->bottom - area->top;
			left = area->left & ~0xf;
			width = ((area->right + 0xf) & ~0xf) - left;
			if (width >= (SCREEN_WIDTH - 32)) {
				left = 0;
				width = SCREEN_WIDTH;
			}
		}

		/* chunky to planar conversion */
		if(s_machine_type == MCH_TT) {
			data += (s_screenOffset << 2);
			/* c2p1x1_8_tt is only able to convert full lines */
			if (width == SCREEN_WIDTH) {
				c2p1x1_8_tt(screen, data, height*SCREEN_WIDTH);
			} else {
#ifdef GFX_STORE_DIRTY_AREA_BLOCKS
				uint16 y;
				for (y = area->top; y < area->bottom; y++) {
					if (g_dirty_blocks[y] != 0) {
						left = __builtin_ctz(g_dirty_blocks[y]) << 4;
						width = ((32 - __builtin_clz(g_dirty_blocks[y])) << 4) - left;
						c2p1x1_8_tt_partial(screen + left, data + left, width);
					}
					screen += 2*SCREEN_WIDTH;
					data += SCREEN_WIDTH;
				}
#else
				screen += left;
				data += left;
				while(height > 0) {
					c2p1x1_8_tt_partial(screen, data, width);
					screen += 2*SCREEN_WIDTH;
					data += SCREEN_WIDTH;
					height--;
				}
#endif
			}
		} else if (s_machine_type == MCH_FALCON) {
			if (width == SCREEN_WIDTH) {
				c2p1x1_8_falcon(screen, data, height*SCREEN_WIDTH);
			} else {
#ifdef GFX_STORE_DIRTY_AREA_BLOCKS
				uint16 y;
				for (y = area->top; y < area->bottom; y++) {
					if (g_dirty_blocks[y] != 0) {
						left = __builtin_ctz(g_dirty_blocks[y]) << 4;
						width = ((32 - __builtin_clz(g_dirty_blocks[y])) << 4) - left;
						c2p1x1_8_falcon(screen + left, data + left, width);
					}
					screen += SCREEN_WIDTH;
					data += SCREEN_WIDTH;
				}
#else
				screen += left;
				data += left;
				while(height > 0) {
					c2p1x1_8_falcon(screen, data, width);
					screen += SCREEN_WIDTH;
					data += SCREEN_WIDTH;
					height--;
				}
#endif
			}
		} else if (s_machine_type == MCH_ST ||s_machine_type == MCH_STE) {
			data += (s_screenOffset << 2);
			if (width == SCREEN_WIDTH) {
				c2p1x1_4_st(screen, data, height*SCREEN_WIDTH, s_palette4BitMap);
			} else {
#ifdef GFX_STORE_DIRTY_AREA_BLOCKS
				uint16 y;
				for (y = area->top; y < area->bottom; y++) {
					if (g_dirty_blocks[y] != 0) {
						left = __builtin_ctz(g_dirty_blocks[y]) << 4;
						width = ((32 - __builtin_clz(g_dirty_blocks[y])) << 4) - left;
						c2p1x1_4_st(screen + (left >> 1), data + left, width, s_palette4BitMap);
					}
					screen += SCREEN_WIDTH >> 1;
					data += SCREEN_WIDTH;
				}
#else
				screen += (left >> 1);
				data += left;
				while(height > 0) {
					c2p1x1_4_st(screen, data, width, s_palette4BitMap);
					screen += SCREEN_WIDTH >> 1;
					data += SCREEN_WIDTH;
					height--;
				}
#endif
			}
		}

		GFX_Screen_SetClean(SCREEN_0);
		s_screen_needrepaint = false;
	}

	if (s_showFPS) {
		int line, plane;
		uint16 * screenwords;

		/* in 320xYYY resolution, each line is 20 words x bitdepth
		 * so on TT and Falcon 8bpp it is 160 words = 320 bytes,
		 * on the ST/STE in 4bpp it is 80 words = 160 bytes */
		screenwords = (uint16 *)Logbase();
		/* copy the characters in color 15 (00001111 or 1111) */
		if (s_machine_type == MCH_TT || s_machine_type == MCH_FALCON) {
			screenwords += (320-32)/2;
			for (line = 0; line < 5; line++) {
				for (plane = 0; plane < 4; plane++)
				{
					screenwords[plane] = (uint16)(s_fps_chars[line] >> 16);
					screenwords[plane+8] = (uint16)s_fps_chars[line];
				}
				for (; plane < 8; plane++)
				{
					screenwords[plane] = 0;
					screenwords[plane+8] = 0;
				}
				if(s_machine_type == MCH_TT) {	/* Double lines */
					for(plane = 0; plane < 16; plane++) {
						screenwords[(320/2)+plane] = screenwords[plane];
					}
					screenwords += 320;	/* two lines = 320 words */
				} else {
					screenwords += 320/2;
				}
			}
		} else {
			/* ST / STE */
			screenwords += (320-32)/4;
			for (line = 0; line < 5; line++) {
				for (plane = 0; plane < 4; plane++)
				{
					screenwords[plane] = (uint16)(s_fps_chars[line] >> 16);
					screenwords[plane+4] = (uint16)s_fps_chars[line];
				}
				screenwords += 320/4;
			}
		}
	}
}

/**
 * Change the palette with the palette supplied.
 * @param palette The palette to replace the current with.
 * @param from From which colour.
 * @param length The length of the palette (in colours).
 */
void Video_SetPalette(void *palette, int from, int length)
{
	int i;
	uint8 *p = palette;

	if(s_machine_type == MCH_FALCON) {
		static uint8 falconpal[256*4];

		for(i = 0; i < length; i++) {
			falconpal[i*4+0] = 0;
			falconpal[i*4+1] = *p++ << 2; /* R */
			falconpal[i*4+2] = *p++ << 2; /* G */
			falconpal[i*4+3] = *p++ << 2; /* B */
		}
		VsetRGB(from, length, falconpal);
	} else if(s_machine_type == MCH_TT) {
		static uint16 rgb12[256];

		for(i = 0; i < length; i++) {
			rgb12[i] = (p[0] >> 2) << 8 | (p[1] >> 2) << 4 | (p[2] >> 2);
			p += 3;
		}
		EsetPalette(from, length, rgb12);
	} else if (s_machine_type == MCH_ST || s_machine_type == MCH_STE) {
		uint8 red,green,blue;
		for (i = from; i < from + length; i++)
		{
			red = *p++;
			green = *p++;
			blue = *p++;
			s_palette4BitMap[i] = Palette_FindClosestColor(red, green, blue);
		}
		/* repaint only when a large amount of colors are changing, for fading and so on */
		if (length >= 128)
			s_screen_needrepaint = true;
	} else {
		Error("don't know how to set palette on this machine.\n");
	}
}

/**
 * Set the current position of the mouse.
 * @param x The new X-position of the mouse.
 * @param y The new Y-position of the mouse.
 */
void Video_Mouse_SetPosition(uint16 x, uint16 y)
{
	Debug("Video_Mouse_SetPosition(%hu, %hu)\n", x, y);
	s_mouse_x = x;
	s_mouse_y = y;
}

void Video_Mouse_SetRegion(uint16 minX, uint16 maxX, uint16 minY, uint16 maxY)
{
	Debug("Video_Mouse_SetRegion(%hu, %hu, %hu, %hu)\n", minX, maxX, minY, maxY);
	s_mouse_x_min = minX;
	s_mouse_x_max = maxX;
	s_mouse_y_min = minY;
	s_mouse_y_max = maxY;
	if(s_mouse_x < s_mouse_x_min) {
		s_mouse_x = s_mouse_x_min;
	} else if(s_mouse_x > s_mouse_x_max) {
		s_mouse_x = s_mouse_x_max;
	}
	if(s_mouse_y < s_mouse_y_min) {
		s_mouse_y = s_mouse_y_min;
	} else if(s_mouse_y > s_mouse_y_max) {
		s_mouse_y = s_mouse_y_max;
	}
}

/*
 * change the screen offset, equivalent to changing the
 * Start Address Register on a VGA card.
 * VGA Hardware has 4 "maps" of 64kB.
 * @param offset The address granularity is 4bytes
 */
void Video_SetOffset(uint16 offset)
{
	if(s_machine_type == MCH_FALCON) {
		/* Change Physbase(), but not Logbase() */
		Vsetscreen(-1, Logbase() + (4 * offset), -1, -1);
		Vsync();
	} else {
		s_screenOffset = offset;
		s_screen_needrepaint = true;	/* force repaint */
	}
}

void * Video_GetFrameBuffer(uint16 size)
{
	(void)size;
	return s_framebuffer;
}

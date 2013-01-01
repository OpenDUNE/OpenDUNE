/** @file src/video/video_sdl.c SDL video driver. */

#include <SDL.h>
#include "types.h"
#include "../os/error.h"

#include "video.h"

#include "../file.h"
#include "../gfx.h"
#include "../input/input.h"
#include "../input/mouse.h"
#include "../opendune.h"

/** When enabled, it uses a non-linear approach to scaling as described at http://scale2x.sourceforge.net/algorithm.html */
#define SCREEN_USE_SCALE2X
#undef SCREEN_USE_SCALE2X
/** The the magnification of the screen. 2 means 640x400, 3 means 960x600, etc. */
#define SCREEN_MAGNIFICATION 2

static SDL_Surface *s_gfx_surface = NULL;
static uint8 *s_gfx_screen = NULL;

static bool s_video_initialized = false;
static bool s_video_lock = false;

static uint8 s_keyBufferLatest = 0;

static uint16 s_mousePosX = 0;
static uint16 s_mousePosY = 0;
static bool s_mouseButtonLeft  = false;
static bool s_mouseButtonRight = false;

static uint16 s_mouseMinX = 0;
static uint16 s_mouseMaxX = 0;
static uint16 s_mouseMinY = 0;
static uint16 s_mouseMaxY = 0;

static uint8 s_gfx_screen8[SCREEN_WIDTH * SCREEN_HEIGHT];

/* Partly copied from http://webster.cs.ucr.edu/AoA/DOS/pdf/apndxc.pdf */
static uint8 s_SDL_keymap[] = {
           0,    0,    0,    0,    0,    0,    0,    0, 0x0E, 0x0F,    0,    0,    0, 0x1C,    0,    0, /*  0x00 -  0x0F */
           0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0, 0x01,    0,    0,    0,    0, /*  0x10 -  0x1F */
        0x39,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0, 0x33, 0x0C, 0x34, 0x35, /*  0x20 -  0x2F */
        0x0B, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08, 0x09, 0x0A,    0,    0,    0, 0x0D,    0,    0, /*  0x30 -  0x3F */
           0, 0x1E, 0x30, 0x2E, 0x20, 0x12, 0x21, 0x22, 0x23, 0x17, 0x24, 0x25, 0x26, 0x32, 0x31, 0x18, /*  0x40 -  0x4F */
        0x19, 0x10, 0x13, 0x1F, 0x14, 0x16, 0x2F, 0x11, 0x2D, 0x15, 0x2C,    0, 0x2B,    0,    0,    0, /*  0x50 -  0x5F */
        0x29, 0x1E, 0x30, 0x2E, 0x20, 0x12, 0x21, 0x22, 0x23, 0x17, 0x24, 0x25, 0x26, 0x32, 0x31, 0x18, /*  0x60 -  0x6F */
        0x19, 0x10, 0x13, 0x1F, 0x14, 0x16, 0x2F, 0x11, 0x2D, 0x15, 0x2C,    0,    0,    0,    0, 0x53, /*  0x70 -  0x7F */
           0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0, /*  0x80 -  0x8F */
           0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0, /*  0x90 -  0x9F */
           0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0, /*  0xA0 -  0xAF */
           0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0, /*  0xB0 -  0xBF */
           0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0, /*  0xC0 -  0xCF */
           0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0, /*  0xD0 -  0xDF */
           0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0, /*  0xE0 -  0xEF */
           0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0, /*  0xF0 -  0xFF */
           0, 0x4F, 0x50, 0x51, 0x4B, 0x1C, 0x4D, 0x47, 0x48, 0x49,    0,    0,    0,    0,    0,    0, /* 0x100 - 0x10F */
           0, 0x48, 0x50, 0x4D, 0x4B, 0x52, 0x47, 0x4F, 0x49, 0x51, 0x3B, 0x3C, 0x3D, 0x3E, 0x3F, 0x40, /* 0x110 - 0x11F */
        0x41, 0x42, 0x43, 0x44, 0x57, 0x58,    0,    0,    0,    0,    0,    0,    0,    0,    0, 0x36, /* 0x120 - 0x12F */
        0x36,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0, /* 0x130 - 0x13F */
};

/**
 * Callback wrapper for mouse actions.
 */
static void Video_Mouse_Callback(void)
{
	Mouse_EventHandler(s_mousePosX / SCREEN_MAGNIFICATION, s_mousePosY / SCREEN_MAGNIFICATION, s_mouseButtonLeft, s_mouseButtonRight);
}

/**
 * Callback wrapper for key actions.
 */
static void Video_Key_Callback(uint8 key)
{
	s_keyBufferLatest = key;
	Input_EventHandler(key);
}

/**
 * Handle the moving of the mouse.
 * @param x The new X-position of the mouse.
 * @param y The new Y-position of the mouse.
 */
static void Video_Mouse_Move(uint16 x, uint16 y)
{
	uint16 rx, ry;

	rx = x;
	ry = y;

	if (s_mouseMinX != 0 && rx < s_mouseMinX) rx = s_mouseMinX;
	if (s_mouseMaxX != 0 && rx > s_mouseMaxX) rx = s_mouseMaxX;
	if (s_mouseMinY != 0 && ry < s_mouseMinY) ry = s_mouseMinY;
	if (s_mouseMaxY != 0 && ry > s_mouseMaxY) ry = s_mouseMaxY;

	/* If we moved, send the signal back to the window to correct for it */
	if (x != rx || y != ry) {
		SDL_WarpMouse(rx, ry);
		return;
	}

	s_mousePosX = rx;
	s_mousePosY = ry;

	Video_Mouse_Callback();
}

/**
 * Handle the clicking of a mouse button.
 * @param left True if the left button, otherwise the right button.
 * @param down True if the button is down, otherwise it is up.
 */
static void Video_Mouse_Button(bool left, bool down)
{
	if (left) {
		s_mouseButtonLeft = down;
	} else {
		s_mouseButtonRight = down;
	}

	Video_Mouse_Callback();
}

/**
 * Set the current position of the mouse.
 * @param x The new X-position of the mouse.
 * @param y The new Y-position of the mouse.
 */
void Video_Mouse_SetPosition(uint16 x, uint16 y)
{
	SDL_WarpMouse(x * SCREEN_MAGNIFICATION, y * SCREEN_MAGNIFICATION);
}

/**
 * Set the region in which the mouse is allowed to move, or 0 for no limitation.
 * @param minX The minimal X-position.
 * @param maxX The maximal X-position.
 * @param minY The minimal Y-position.
 * @param maxY The maximal Y-position.
 */
void Video_Mouse_SetRegion(uint16 minX, uint16 maxX, uint16 minY, uint16 maxY)
{
	s_mouseMinX = minX * SCREEN_MAGNIFICATION;
	s_mouseMaxX = maxX * SCREEN_MAGNIFICATION;
	s_mouseMinY = minY * SCREEN_MAGNIFICATION;
	s_mouseMaxY = maxY * SCREEN_MAGNIFICATION;
}

/**
 * Initialize the video driver.
 */
bool Video_Init(void)
{
	if (s_video_initialized) return true;

	if (SDL_Init(SDL_INIT_VIDEO) < 0) {
		Error("Could not initialize SDL: %s\n", SDL_GetError());
		return false;
	}

	SDL_WM_SetCaption(window_caption, "");
	s_gfx_surface = SDL_SetVideoMode(SCREEN_WIDTH * SCREEN_MAGNIFICATION, SCREEN_HEIGHT * SCREEN_MAGNIFICATION, 8, SDL_SWSURFACE | SDL_HWPALETTE);
	if (s_gfx_surface == NULL) {
		Error("Could not set resolution: %s\n", SDL_GetError());
		return false;
	}

	SDL_ShowCursor(SDL_DISABLE);
	SDL_EnableKeyRepeat(SDL_DEFAULT_REPEAT_DELAY, SDL_DEFAULT_REPEAT_INTERVAL);

	s_gfx_screen = (uint8 *)s_gfx_surface->pixels;
	memset(s_gfx_screen, 0, SCREEN_WIDTH * SCREEN_HEIGHT * SCREEN_MAGNIFICATION * SCREEN_MAGNIFICATION);

	s_video_initialized = true;

	return true;
}

/**
 * Uninitialize the video driver.
 */
void Video_Uninit(void)
{
	s_video_initialized = false;
	SDL_Quit();
}

/**
 * Because we rarely want to draw in 320x200, this function copies from the
 *  320x200 buffer to the real screen, scaling where needed.
 */
#if defined(SCREEN_USE_SCALE2X)
#	if SCREEN_MAGNIFICATION == 2
static void Video_DrawScreen(void)
{
	uint8 *data = GFX_Screen_Get_ByIndex(SCREEN_0);
	uint8 *gfx1 = s_gfx_screen;
	uint8 *gfx2;
	uint8 value;
	int x, y;

	/* The top side */
	gfx2 = gfx1 + SCREEN_WIDTH * 2;
	for (x = 0; x < SCREEN_WIDTH; x++) {
		uint8 value = *data++;
		*gfx1++ = value;
		*gfx2++ = value;
		*gfx1++ = value;
		*gfx2++ = value;
	}
	gfx1 = gfx2;

	for (y = 1; y < SCREEN_HEIGHT - 1; y++) {
		gfx2 = gfx1 + SCREEN_WIDTH * 2;

		/* The left side */
		value = *data++;
		*gfx1++ = value;
		*gfx2++ = value;
		*gfx1++ = value;
		*gfx2++ = value;

		for (x = 1; x < SCREEN_WIDTH - 1; x++) {
			int b = *(data - SCREEN_WIDTH);
			int d = *(data - 1);
			int e = *(data);
			int f = *(data + 1);
			int h = *(data + SCREEN_WIDTH);

			/* Algorthm described at http://scale2x.sourceforge.net/algorithm.html */
			if (b != h && d != f) {
				*gfx1 = (d == b) ? d : e;
				*gfx2 = (d == h) ? d : e;
				gfx1++; gfx2++;
				*gfx1 = (f == b) ? f : e;
				*gfx2 = (f == h) ? f : e;
				gfx1++; gfx2++;
				data++;
				continue;
			}

			value = *data++;
			*gfx1++ = value;
			*gfx2++ = value;
			*gfx1++ = value;
			*gfx2++ = value;
		}

		/* The right side */
		value = *data++;
		*gfx1++ = value;
		*gfx2++ = value;
		*gfx1++ = value;
		*gfx2++ = value;

		gfx1 = gfx2;
	}

	/* The bottom side */
	gfx2 = gfx1 + SCREEN_WIDTH * 2;
	for (x = 0; x < SCREEN_WIDTH; x++) {
		uint8 value = *data++;
		*gfx1++ = value;
		*gfx2++ = value;
		*gfx1++ = value;
		*gfx2++ = value;
	}
	gfx1 = gfx2;
}
#	elif SCREEN_MAGNIFICATION == 3
static void Video_DrawScreen(void)
{
	uint8 *data = GFX_Screen_Get_ByIndex(SCREEN_0);
	uint8 *gfx1 = s_gfx_screen;
	uint8 *gfx2;
	uint8 *gfx3;
	uint8 value;
	int x, y;

	/* The top side */
	gfx2 = gfx1 + SCREEN_WIDTH * 3;
	gfx3 = gfx2 + SCREEN_WIDTH * 3;
	for (x = 0; x < SCREEN_WIDTH; x++) {
		uint8 value = *data++;
		*gfx1++ = value;
		*gfx2++ = value;
		*gfx3++ = value;
		*gfx1++ = value;
		*gfx2++ = value;
		*gfx3++ = value;
		*gfx1++ = value;
		*gfx2++ = value;
		*gfx3++ = value;
	}
	gfx1 = gfx3;

	for (y = 1; y < SCREEN_HEIGHT - 1; y++) {
		gfx2 = gfx1 + SCREEN_WIDTH * 3;
		gfx3 = gfx2 + SCREEN_WIDTH * 3;

		/* The left side */
		value = *data++;
		*gfx1++ = value;
		*gfx2++ = value;
		*gfx3++ = value;
		*gfx1++ = value;
		*gfx2++ = value;
		*gfx3++ = value;
		*gfx1++ = value;
		*gfx2++ = value;
		*gfx3++ = value;

		for (x = 1; x < SCREEN_WIDTH - 1; x++) {
			int a = *(data - SCREEN_WIDTH - 1);
			int b = *(data - SCREEN_WIDTH);
			int c = *(data - SCREEN_WIDTH + 1);
			int d = *(data - 1);
			int e = *(data);
			int f = *(data + 1);
			int g = *(data + SCREEN_WIDTH - 1);
			int h = *(data + SCREEN_WIDTH);
			int i = *(data + SCREEN_WIDTH + 1);

			/* Algorthm described at http://scale2x.sourceforge.net/algorithm.html */
			if (b != h && d != f) {
				*gfx1 =  (d == b)                                  ? d : e;
				*gfx2 = ((d == b && e != g) || (d == h && e != a)) ? d : e;
				*gfx3 =                        (d == h)            ? d : e;
				gfx1++; gfx2++; gfx3++;
				*gfx1 = ((d == b && e != c) || (f == b && e != a)) ? b : e;
				*gfx2 =                                                  e;
				*gfx3 = ((d == h && e != i) || (f == h && e != g)) ? h : e;
				gfx1++; gfx2++; gfx3++;
				*gfx1 =  (f == b)                                  ? f : e;
				*gfx2 = ((f == b && e != i) || (f == h && e != g)) ? f : e;
				*gfx3 =                        (f == h)            ? f : e;
				gfx1++; gfx2++; gfx3++;
				data++;
				continue;
			}

			value = *data++;
			*gfx1++ = value;
			*gfx2++ = value;
			*gfx3++ = value;
			*gfx1++ = value;
			*gfx2++ = value;
			*gfx3++ = value;
			*gfx1++ = value;
			*gfx2++ = value;
			*gfx3++ = value;
		}

		/* The right side */
		value = *data++;
		*gfx1++ = value;
		*gfx2++ = value;
		*gfx3++ = value;
		*gfx1++ = value;
		*gfx2++ = value;
		*gfx3++ = value;
		*gfx1++ = value;
		*gfx2++ = value;
		*gfx3++ = value;

		gfx1 = gfx3;
	}

	/* The bottom side */
	gfx2 = gfx1 + SCREEN_WIDTH * 3;
	gfx3 = gfx2 + SCREEN_WIDTH * 3;
	for (x = 0; x < SCREEN_WIDTH; x++) {
		uint8 value = *data++;
		*gfx1++ = value;
		*gfx2++ = value;
		*gfx3++ = value;
		*gfx1++ = value;
		*gfx2++ = value;
		*gfx3++ = value;
		*gfx1++ = value;
		*gfx2++ = value;
		*gfx3++ = value;
	}
	gfx1 = gfx3;
}
#	else /* SCREEN_MAGNIFICATION != 2 != 3 */
#	endif /* SCREEN_MAGNIFICATION */
#else /* SCREEN_USE_SCALE2X */
#	if SCREEN_MAGNIFICATION == 2
static void Video_DrawScreen(void)
{
	uint8 *data = GFX_Screen_Get_ByIndex(SCREEN_0);
	uint8 *gfx1 = s_gfx_screen;
	uint8 *gfx2;
	int x, y;

	for (y = 0; y < SCREEN_HEIGHT; y++) {
		gfx2 = gfx1 + SCREEN_WIDTH * 2;
		for (x = 0; x < SCREEN_WIDTH; x++) {
			uint8 value = *data++;
			*gfx1++ = value;
			*gfx2++ = value;
			*gfx1++ = value;
			*gfx2++ = value;
		}
		gfx1 = gfx2;
	}
}
#	elif SCREEN_MAGNIFICATION == 3
static void Video_DrawScreen(void)
{
	uint8 *data = GFX_Screen_Get_ByIndex(SCREEN_0);
	uint8 *gfx1 = s_gfx_screen;
	uint8 *gfx2;
	uint8 *gfx3;
	int x, y;

	for (y = 0; y < SCREEN_HEIGHT; y++) {
		gfx2 = gfx1 + SCREEN_WIDTH * 3;
		gfx3 = gfx2 + SCREEN_WIDTH * 3;
		for (x = 0; x < SCREEN_WIDTH; x++) {
			uint8 value = *data++;
			*gfx1++ = value;
			*gfx2++ = value;
			*gfx3++ = value;
			*gfx1++ = value;
			*gfx2++ = value;
			*gfx3++ = value;
			*gfx1++ = value;
			*gfx2++ = value;
			*gfx3++ = value;
		}
		gfx1 = gfx3;
	}
}
#	else /* SCREEN_MAGNIFICATION != 2 != 3 */
static void Video_DrawScreen(void)
{
	uint8 *data = GFX_Screen_Get_ByIndex(SCREEN_0);
	uint8 *gfx  = s_gfx_screen;
	int x, y, i, j;

	/* The non-optimized works-for-every-magnification method */
	for (y = 0; y < SCREEN_HEIGHT; y++) {
		for (x = 0; x < SCREEN_WIDTH; x++) {
			for (i = 0; i < SCREEN_MAGNIFICATION; i++) {
				for (j = 0; j < SCREEN_MAGNIFICATION; j++) {
					*(gfx + SCREEN_WIDTH * SCREEN_MAGNIFICATION * j) = *data;
				}
				gfx++;
			}
			data++;
		}
		gfx += SCREEN_WIDTH * SCREEN_MAGNIFICATION * (SCREEN_MAGNIFICATION - 1);
	}
}
#	endif /* SCREEN_MAGNIFICATION */
#endif /* SCREEN_USE_SCALE2X */

/**
 * Runs every tick to handle video driver updates.
 */
void Video_Tick(void)
{
	SDL_Event event;

	if (!s_video_initialized) return;

	if (g_fileOperation != 0) return;

	if (s_video_lock) return;
	s_video_lock = true;

	while (SDL_PollEvent(&event)) {
		uint8 keyup = 1;

		switch (event.type) {
			case SDL_QUIT: {
				s_video_lock = false;
				PrepareEnd();
				exit(0);
			} break;

			case SDL_MOUSEMOTION:
				Video_Mouse_Move(event.motion.x, event.motion.y);
				break;

			case SDL_MOUSEBUTTONDOWN:
				if (event.button.button == SDL_BUTTON_LEFT)  Video_Mouse_Button(true,  true);
				if (event.button.button == SDL_BUTTON_RIGHT) Video_Mouse_Button(false, true);
				break;
			case SDL_MOUSEBUTTONUP:
				if (event.button.button == SDL_BUTTON_LEFT)  Video_Mouse_Button(true,  false);
				if (event.button.button == SDL_BUTTON_RIGHT) Video_Mouse_Button(false, false);
				break;

			case SDL_KEYDOWN:
				keyup = 0;
				/* Fall Through */
			case SDL_KEYUP:
			{
				if (event.key.keysym.sym >= sizeof(s_SDL_keymap)) continue;
				if (s_SDL_keymap[event.key.keysym.sym] == 0) {
					Warning("Unhandled key %X\n", event.key.keysym.sym);
					continue;
				}
				Video_Key_Callback(s_SDL_keymap[event.key.keysym.sym] | (keyup ? 0x80 : 0x0));
			} break;
		}
	}

	/* Do a quick compare to see if the screen changed at all */
	if (memcmp(GFX_Screen_Get_ByIndex(SCREEN_0), s_gfx_screen8, SCREEN_WIDTH * SCREEN_HEIGHT) == 0) {
		s_video_lock = false;
		return;
	}
	memcpy(s_gfx_screen8, GFX_Screen_Get_ByIndex(SCREEN_0), SCREEN_WIDTH * SCREEN_HEIGHT);

	Video_DrawScreen();

	SDL_UpdateRect(s_gfx_surface, 0, 0, 0, 0);

	s_video_lock = false;
}

/**
 * Change the palette with the palette supplied.
 * @param palette The palette to replace the current with.
 * @param from From which colour.
 * @param length The length of the palette (in colours).
 */
void Video_SetPalette(void *palette, int from, int length)
{
	SDL_Color paletteRGB[256];
	uint8 *p = palette;
	int i;

	s_video_lock = true;

	for (i = from; i < from + length; i++) {
		paletteRGB[i].r = ((*p++) & 0x3F) * 4;
		paletteRGB[i].g = ((*p++) & 0x3F) * 4;
		paletteRGB[i].b = ((*p++) & 0x3F) * 4;
	}

	SDL_SetPalette(s_gfx_surface, SDL_LOGPAL | SDL_PHYSPAL, paletteRGB, from, length);

	s_video_lock = false;
}

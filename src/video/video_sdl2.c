/** @file src/video/video_sdl2.c SDL 2 video driver. */

#include <SDL.h>
#include <SDL_image.h>
#include "types.h"
#include "../os/error.h"

#include "video.h"

#include "../file.h"
#include "../gfx.h"
#include "../input/input.h"
#include "../input/mouse.h"
#include "../opendune.h"

#include "scalebit.h"
#include "hqx.h"

/* Set DUNE_ICON_DIR at compile time.  e.g. */
/* #define DUNE_ICON_DIR "/usr/local/share/icons/hicolor/32x32/apps/" */

#ifndef DUNE_ICON_DIR
#define DUNE_ICON_DIR "./"
#endif

static VideoScaleFilter s_scale_filter;

/** The the magnification of the screen. 2 means 640x400, 3 means 960x600, etc. */
static int s_screen_magnification;

static uint8 * s_fullsize_buffer = NULL;

static bool s_video_initialized = false;
static bool s_video_lock = false;

static SDL_Window *s_window;
static SDL_Renderer *s_renderer;
static SDL_Texture *s_texture;

static uint32 s_palette[256];

static uint8 s_keyBufferLatest = 0;

static uint16 s_mousePosX = 0;
static uint16 s_mousePosY = 0;
static bool s_mouseButtonLeft  = false;
static bool s_mouseButtonRight = false;

static uint16 s_mouseMinX = 0;
static uint16 s_mouseMaxX = 0;
static uint16 s_mouseMinY = 0;
static uint16 s_mouseMaxY = 0;

static uint16 s_screenOffset = 0;	/* VGA Start Address Register */

/* Partly copied from http://webster.cs.ucr.edu/AoA/DOS/pdf/apndxc.pdf */
static const uint8 s_SDL_keymap[] = {
           0,    0,    0,    0,    0,    0,    0,    0, 0x0E, 0x0F,    0,    0,    0, 0x1C,    0,    0, /*  0x00 -  0x0F */
           0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0, 0x01,    0,    0,    0,    0, /*  0x10 -  0x1F */
        0x39,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0, 0x33, 0x0C, 0x34, 0x35, /*  0x20 -  0x2F */
        0x0B, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08, 0x09, 0x0A,    0,    0,    0, 0x0D,    0,    0, /*  0x30 -  0x3F */
           0, 0x1E, 0x30, 0x2E, 0x20, 0x12, 0x21, 0x22, 0x23, 0x17, 0x24, 0x25, 0x26, 0x32, 0x31, 0x18, /*  0x40 -  0x4F */
        0x19, 0x10, 0x13, 0x1F, 0x14, 0x16, 0x2F, 0x11, 0x2D, 0x15, 0x2C,    0, 0x2B,    0,    0,    0, /*  0x50 -  0x5F */
        0x29, 0x1E, 0x30, 0x2E, 0x20, 0x12, 0x21, 0x22, 0x23, 0x17, 0x24, 0x25, 0x26, 0x32, 0x31, 0x18, /*  0x60 -  0x6F */
        0x19, 0x10, 0x13, 0x1F, 0x14, 0x16, 0x2F, 0x11, 0x2D, 0x15, 0x2C,    0,    0,    0,    0, 0x53, /*  0x70 -  0x7F */
};

/* see https://wiki.libsdl.org/SDLKeycodeLookup */
static const uint8 s_SDL_hikeymap[] = {
	0x00,	/* 1073741881 0x40000039 SDLK_CAPSLOCK */
	0x3B,	/* 1073741882 0x4000003A SDLK_F1 */
	0x3C,	/* 1073741883 0x4000003B SDLK_F2 */
	0x3D,	/* 1073741884 0x4000003C SDLK_F3 */
	0x3E,	/* 1073741885 0x4000003D SDLK_F4 */
	0x3F,	/* 1073741886 0x4000003E SDLK_F5 */
	0x40,	/* 1073741887 0x4000003F SDLK_F6 */
	0x41,	/* 1073741888 0x40000040 SDLK_F7 */
	0x42,	/* 1073741889 0x40000041 SDLK_F8 */
	0x43,	/* 1073741890 0x40000042 SDLK_F9 */
	0x44,	/* 1073741891 0x40000043 SDLK_F10 */
	0x57,	/* 1073741892 0x40000044 SDLK_F11 */
	0x58,	/* 1073741893 0x40000045 SDLK_F12 */
	0x00,	/* 1073741894 0x40000046 SDLK_PRINTSCREEN */
	0x00,	/* 1073741895 0x40000047 SDLK_SCROLLLOCK */
	0x00,	/* 1073741896 0x40000048 SDLK_PAUSE */
	0x52,	/* 1073741897 0x40000049 SDLK_INSERT */
	0x00,	/* 1073741898 0x4000004A SDLK_HOME */
	0x49,	/* 1073741899 0x4000004B SDLK_PAGEUP */
	0x00,
	0x4F,	/* 1073741901 0x4000004D SDLK_END */
	0x51,	/* 1073741902 0x4000004E SDLK_PAGEDOWN */
	0x4D,	/* 1073741903 0x4000004F SDLK_RIGHT */
	0x4B,	/* 1073741904 0x40000050 SDLK_LEFT */
	0x50,	/* 1073741905 0x40000051 SDLK_DOWN */
	0x48,	/* 1073741906 0x40000052 SDLK_UP */
	0x00,	/* 1073741907 0x40000053 SDLK_NUMLOCKCLEAR */
	0x00,	/* 1073741908 0x40000054 SDLK_KP_DIVIDE */
	0x37,	/* 1073741909 0x40000055 SDLK_KP_MULTIPLY */
	0x4A,	/* 1073741910 0x40000056 SDLK_KP_MINUS */
	0x4E,	/* 1073741911 0x40000057 SDLK_KP_PLUS */
	0x1C,	/* 1073741912 0x40000058 SDLK_KP_ENTER */
	0x4F,	/* 1073741913 0x40000059 SDLK_KP_1 */
	0x50,	/* 1073741914 0x4000005A SDLK_KP_2 */
	0x51,	/* 1073741915 0x4000005B SDLK_KP_3 */
	0x4B,	/* 1073741916 0x4000005C SDLK_KP_4 */
	0x4C,	/* 1073741917 0x4000005D SDLK_KP_5 */
	0x4D,	/* 1073741918 0x4000005E SDLK_KP_6 */
	0x47,	/* 1073741919 0x4000005F SDLK_KP_7 */
	0x48,	/* 1073741920 0x40000060 SDLK_KP_8 */
	0x49,	/* 1073741921 0x40000061 SDLK_KP_9 */
	0x52,	/* 1073741922 0x40000062 SDLK_KP_0 */
	0x53,	/* 1073741923 0x40000063 SDLK_KP_PERIOD */
};

/**
 * Callback wrapper for mouse actions.
 */
static void Video_Mouse_Callback(void)
{
	if (s_scale_filter == FILTER_NEAREST_NEIGHBOR) {
		Mouse_EventHandler(s_mousePosX, s_mousePosY, s_mouseButtonLeft, s_mouseButtonRight);
	} else {
		Mouse_EventHandler(s_mousePosX / s_screen_magnification, s_mousePosY / s_screen_magnification,
		                   s_mouseButtonLeft, s_mouseButtonRight);
	}
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
		SDL_WarpMouseInWindow(s_window, rx, ry);
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
	SDL_WarpMouseInWindow(s_window, x, y);
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
	if (s_scale_filter == FILTER_NEAREST_NEIGHBOR) {
		s_mouseMinX = minX;
		s_mouseMaxX = maxX;
		s_mouseMinY = minY;
		s_mouseMaxY = maxY;
	} else {
		s_mouseMinX = minX * s_screen_magnification;
		s_mouseMaxX = maxX * s_screen_magnification;
		s_mouseMinY = minY * s_screen_magnification;
		s_mouseMaxY = maxY * s_screen_magnification;
	}
}

/**
 * Initialize the video driver.
 */
bool Video_Init(int screen_magnification, VideoScaleFilter filter)
{
	int err;
	int render_width;
	int render_height;
	SDL_Surface * icon;

	if (s_video_initialized) return true;
	if (screen_magnification <= 0 || screen_magnification > 4) {
		Error("Incorrect screen magnification factor : %d\n", screen_magnification);
		return false;
	}
	if (screen_magnification == 1) filter = FILTER_NEAREST_NEIGHBOR;
	s_scale_filter = filter;
	s_screen_magnification = screen_magnification;
	if (filter == FILTER_HQX) {
		hqxInit();
	}

	err = SDL_Init(SDL_INIT_VIDEO);

	if (err != 0) {
		Error("Could not initialize SDL: %s\n", SDL_GetError());
		return false;
	}

	err = SDL_CreateWindowAndRenderer(
			SCREEN_WIDTH * s_screen_magnification,
			SCREEN_HEIGHT * s_screen_magnification,
			0,
			&s_window,
			&s_renderer);

	if (err != 0) {
		Error("Could not set resolution: %s\n", SDL_GetError());
		return false;
	}

	SDL_SetWindowTitle(s_window, window_caption);

	icon = IMG_Load(DUNE_ICON_DIR "opendune.png");
	if (icon == NULL) icon = IMG_Load("../os/png_icon/opendune_32x32.png");
	if (icon != NULL) {
		SDL_SetWindowIcon(s_window, icon);
		SDL_FreeSurface(icon);
	}

	switch (s_scale_filter) {
	case FILTER_NEAREST_NEIGHBOR:
		/* SDL2 take care of Nearest neighbor rescaling */
		render_width = SCREEN_WIDTH;
		render_height = SCREEN_HEIGHT;
		break;
	case FILTER_SCALE2X:
	case FILTER_HQX:
	default:
		render_width = SCREEN_WIDTH * s_screen_magnification;
		render_height = SCREEN_HEIGHT * s_screen_magnification;
	}
	if (s_scale_filter == FILTER_SCALE2X) {
		s_fullsize_buffer = malloc(render_width * render_height * sizeof(uint8));
		if (s_fullsize_buffer == NULL) {
			Error("Could not allocate %d bytes of memory\n", render_width * render_height * sizeof(uint8));
			return false;
		}
	}
	err = SDL_RenderSetLogicalSize(s_renderer, render_width, render_height);

	if (err != 0) {
		Error("Could not set logical size: %s\n", SDL_GetError());
		return false;
	}

	s_texture = SDL_CreateTexture(s_renderer,
			SDL_PIXELFORMAT_ARGB8888,
			SDL_TEXTUREACCESS_STREAMING,
			render_width, render_height);

	if (!s_texture) {
		Error("Could not create texture: %s\n", SDL_GetError());
		return false;
	}

	SDL_ShowCursor(SDL_DISABLE);

	s_video_initialized = true;
	return true;
}

/**
 * Uninitialize the video driver.
 */
void Video_Uninit(void)
{
	s_video_initialized = false;

	if (s_scale_filter == FILTER_HQX) {
		hqxUnInit();
	}

	if (s_scale_filter == FILTER_SCALE2X) {
		free(s_fullsize_buffer);
		s_fullsize_buffer = NULL;
	}

	if (s_texture) {
		SDL_DestroyTexture(s_texture);
		s_texture = NULL;
	}

	if (s_renderer) {
		SDL_DestroyRenderer(s_renderer);
		s_renderer = NULL;
	}

	if (s_window) {
		SDL_DestroyWindow(s_window);
		s_window = NULL;
	}

	SDL_Quit();
}

/**
 * This function copies the 320x200 buffer to the real screen.
 * Scaling is done automatically.
 */
static void Video_DrawScreen_Nearest_Neighbor(void)
{
	const uint8 *gfx_screen8 = GFX_Screen_Get_ByIndex(SCREEN_0);
	uint8 * pixels;
	int pitch;
	int x, y;
	uint32 * p;

	gfx_screen8 += (s_screenOffset << 2);
	if (SDL_LockTexture(s_texture, NULL, (void **)&pixels, &pitch) != 0) {
		Error("Could not set lock texture: %s\n", SDL_GetError());
		return;
	}
	for (y = 0; y < SCREEN_HEIGHT; y++) {
		p = (uint32 *)pixels;
		for (x = 0; x < SCREEN_WIDTH; x++) {
			*p++ = s_palette[*gfx_screen8++];
		}
		pixels += pitch;
	}
	SDL_UnlockTexture(s_texture);
	if (SDL_RenderCopy(s_renderer, s_texture, NULL, NULL)) {
		Error("SDL_RenderCopy failed : %s\n", SDL_GetError());
	}
}

static void Video_DrawScreen_Scale2x(void)
{
	uint8 *data = GFX_Screen_Get_ByIndex(SCREEN_0);
	uint8 * pixels;
	int pitch;
	int x, y;
	uint32 * p;

	data += (s_screenOffset << 2);

	/* first use scale2x */
	scale(s_screen_magnification, s_fullsize_buffer, s_screen_magnification * SCREEN_WIDTH,
	      data, SCREEN_WIDTH, 1,
	      SCREEN_WIDTH, SCREEN_HEIGHT);
	/* then copy to texture with 8bit => 32bit pixel conversion */
	data = s_fullsize_buffer;
	if (SDL_LockTexture(s_texture, NULL, (void **)&pixels, &pitch) != 0) {
		Error("Could not set lock texture: %s\n", SDL_GetError());
		return;
	}
	for (y = 0; y < SCREEN_HEIGHT * s_screen_magnification; y++) {
		p = (uint32 *)pixels;
		for (x = 0; x < SCREEN_WIDTH * s_screen_magnification; x++) {
			*p++ = s_palette[*data++];
		}
		pixels += pitch;
	}
	SDL_UnlockTexture(s_texture);
	if (SDL_RenderCopy(s_renderer, s_texture, NULL, NULL)) {
		Error("SDL_RenderCopy failed : %s\n", SDL_GetError());
	}
}

static void Video_DrawScreen_Hqx(void)
{
	uint8 *src;
	uint32 *pixels;
	int pitch;

	src = GFX_Screen_Get_ByIndex(SCREEN_0);
	src += (s_screenOffset << 2);

	if (SDL_LockTexture(s_texture, NULL, (void **)&pixels, &pitch) != 0) {
		Error("Could not set lock texture: %s\n", SDL_GetError());
		return;
	}
	switch(s_screen_magnification) {
	case 2:
		hq2x_8to32_rb(src, SCREEN_WIDTH,
		              pixels, pitch,
		              SCREEN_WIDTH, SCREEN_HEIGHT, s_palette);
		break;
	case 3:
		hq3x_8to32_rb(src, SCREEN_WIDTH,
		              pixels, pitch,
		              SCREEN_WIDTH, SCREEN_HEIGHT, s_palette);
		break;
	case 4:
		hq4x_8to32_rb(src, SCREEN_WIDTH,
		              pixels, pitch,
		              SCREEN_WIDTH, SCREEN_HEIGHT, s_palette);
		break;
	}
	SDL_UnlockTexture(s_texture);
	if (SDL_RenderCopy(s_renderer, s_texture, NULL, NULL)) {
		Error("SDL_RenderCopy failed : %s\n", SDL_GetError());
	}
}

static void Video_DrawScreen(void)
{
	switch(s_scale_filter) {
	case FILTER_NEAREST_NEIGHBOR:
		Video_DrawScreen_Nearest_Neighbor();
		break;
	case FILTER_SCALE2X:
		Video_DrawScreen_Scale2x();
		break;
	case FILTER_HQX:
		Video_DrawScreen_Hqx();
		break;
	default:
		Error("Unsupported scale filter\n");
	}
}

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
				unsigned int sym = event.key.keysym.sym;
				uint8 code = 0;
				if (sym >= SDLK_CAPSLOCK) {
					sym -= SDLK_CAPSLOCK;
					if (sym < sizeof(s_SDL_hikeymap)) code = s_SDL_hikeymap[sym];
				} else {
					if (sym < sizeof(s_SDL_keymap)) code = s_SDL_keymap[sym];
				}
				if (code == 0) {
					Warning("Unhandled key scancode=0x%X sym=0x%X %s\n",
					        event.key.keysym.scancode, event.key.keysym.sym,
					        SDL_GetKeyName(event.key.keysym.sym));
					continue;
				}
				Video_Key_Callback(code | (keyup ? 0x80 : 0x0));
			} break;
		}
	}

	Video_DrawScreen();
	SDL_RenderPresent(s_renderer);

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
	uint8 *p = palette;
	int i;

	s_video_lock = true;

	for (i = from; i < from + length; i++) {
		s_palette[i] = 0xff000000 /* a */
		             | ((((p[0] & 0x3F) * 0x41) << 12) & 0x00ff0000) /* r */
		             | ((((p[1] & 0x3F) * 0x41) << 4)  & 0x0000ff00) /* g */
		             |  (((p[2] & 0x3F) * 0x41) >> 4); /* b */
		p += 3;
	}

	s_video_lock = false;
}

/*
 * change the screen offset, equivalent to changing the
 * Start Address Register on a VGA card.
 * VGA Hardware has 4 "maps" of 64kB.
 * @param offset The address granularity is 4bytes
 */
void Video_SetOffset(uint16 offset)
{
	s_screenOffset = offset;
}

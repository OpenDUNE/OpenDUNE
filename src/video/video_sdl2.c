/** @file src/video/video_sdl2.c SDL 2 video driver. */

#include <SDL.h>
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
	s_mouseMinX = minX;
	s_mouseMaxX = maxX;
	s_mouseMinY = minY;
	s_mouseMaxY = maxY;
}

/**
 * Initialize the video driver.
 */
bool Video_Init(int screen_magnification, VideoScaleFilter filter)
{
	int err;
	int render_width;
	int render_height;

	if (s_video_initialized) return true;
	if (screen_magnification <= 0 || screen_magnification > 4) {
		Error("Incorrect screen magnification factor : %d\n", screen_magnification);
		return false;
	}
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
	int i;
	static uint32 rgb_screen[SCREEN_WIDTH*SCREEN_HEIGHT];
	uint8 *src;
	uint32 *dst;
	uint32 *pixels;
	int pitch;

	i = SCREEN_WIDTH*SCREEN_HEIGHT;
	src = GFX_Screen_Get_ByIndex(SCREEN_0);
	dst = rgb_screen;
	do {
		*dst++ = s_palette[*src++];
	} while(--i > 0);

	if (SDL_LockTexture(s_texture, NULL, (void **)&pixels, &pitch) != 0) {
		Error("Could not set lock texture: %s\n", SDL_GetError());
		return;
	}
	switch(s_screen_magnification) {
	case 2:
		hq2x_32_rb(rgb_screen, SCREEN_WIDTH*sizeof(uint32),
		           pixels, pitch,
		           SCREEN_WIDTH, SCREEN_HEIGHT);
		break;
	case 3:
		hq3x_32_rb(rgb_screen, SCREEN_WIDTH*sizeof(uint32),
		           pixels, pitch,
		           SCREEN_WIDTH, SCREEN_HEIGHT);
		break;
	case 4:
		hq4x_32_rb(rgb_screen, SCREEN_WIDTH*sizeof(uint32),
		           pixels, pitch,
		           SCREEN_WIDTH, SCREEN_HEIGHT);
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
				if (sym >= sizeof(s_SDL_keymap)) continue;
				if (s_SDL_keymap[sym] == 0) {
					Warning("Unhandled key %X\n", sym);
					continue;
				}
				Video_Key_Callback(s_SDL_keymap[sym] | (keyup ? 0x80 : 0x0));
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

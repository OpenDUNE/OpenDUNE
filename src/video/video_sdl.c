/** @file src/video/video_sdl.c SDL video driver. */

#include <SDL.h>
#ifndef WITHOUT_SDLIMAGE
#include <SDL_image.h>
#endif /* WITHOUT_SDLIMAGE */
#if defined(__ALTIVEC__)
#include <altivec.h>
#endif /* __ALTIVEC__ */
#include "types.h"
#include "../os/error.h"

#if defined(__GNUC__) && (defined(__i386__) || defined(__x86_64__))
#include <mmintrin.h>
#endif /* i386 / x86_64 */

#if defined(__x86_64__)
/* every x86_64 CPU supports at least SSE/SSE2 */
#include <emmintrin.h>
#endif /* __x86_64__ */

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

/** The palette used for HQX */
static uint32 rgb_palette[256];
static bool s_screen_needrepaint = false;

static SDL_Surface *s_gfx_surface = NULL;

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
static uint16 s_screenOffset = 0;

/* translation from SDLKey (symbolic codes) to AT (or XT ?) keyboard scancodes
 * Dune 2 input code handle extended scancodes (prefixed with e0, we could generate them also) */
/* Partly copied from http://webster.cs.ucr.edu/AoA/DOS/pdf/apndxc.pdf */
static const uint8 s_SDL_keymap[] = {
           0,    0,    0,    0,    0,    0,    0,    0, 0x0E, 0x0F,    0,    0,    0, 0x1C,    0,    0, /*  0x00 -  0x0F */
           0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0, 0x01,    0,    0,    0,    0, /*  0x10 -  0x1F */
        0x39,    0,    0,    0,    0,    0,    0, 0x28,    0,    0,    0,    0, 0x33, 0x0C, 0x34, 0x35, /*  0x20 -  0x2F */
        0x0B, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08, 0x09, 0x0A,    0, 0x27,    0, 0x0D,    0,    0, /*  0x30 -  0x3F */
           0, 0x1E, 0x30, 0x2E, 0x20, 0x12, 0x21, 0x22, 0x23, 0x17, 0x24, 0x25, 0x26, 0x32, 0x31, 0x18, /*  0x40 -  0x4F */
        0x19, 0x10, 0x13, 0x1F, 0x14, 0x16, 0x2F, 0x11, 0x2D, 0x15, 0x2C, 0x1A, 0x2B, 0x1B,    0,    0, /*  0x50 -  0x5F */
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
        0x52, 0x4F, 0x50, 0x51, 0x4B, 0x4C, 0x4D, 0x47, 0x48, 0x49, 0x53, 0x62, 0x37, 0x4A, 0x4E, 0x6C, /* 0x100 - 0x10F */
           0, 0x48, 0x50, 0x4D, 0x4B, 0x52, 0x47, 0x4F, 0x49, 0x51, 0x3B, 0x3C, 0x3D, 0x3E, 0x3F, 0x40, /* 0x110 - 0x11F */
        0x41, 0x42, 0x43, 0x44, 0x57, 0x58,    0,    0,    0,    0,    0,    0,    0,    0,    0, 0x36, /* 0x120 - 0x12F */
        0x36,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0, /* 0x130 - 0x13F */
};


#if defined(__APPLE__)
/* translation from Mac keyboard scancode to SDLKey symbolic code
 * Copied from DOSBOX sdl_mapper.cpp */
#define Z SDLK_UNKNOWN
static const SDLKey sdlkey_map[] = {
    /* Main block printables */
    /*00-05*/ SDLK_a, SDLK_s, SDLK_d, SDLK_f, SDLK_h, SDLK_g,
    /*06-0B*/ SDLK_z, SDLK_x, SDLK_c, SDLK_v, 0x60/*SDLK_WORLD_0*/, SDLK_b,
    /*0C-11*/ SDLK_q, SDLK_w, SDLK_e, SDLK_r, SDLK_y, SDLK_t,
    /*12-17*/ SDLK_1, SDLK_2, SDLK_3, SDLK_4, SDLK_6, SDLK_5,
    /*18-1D*/ SDLK_EQUALS, SDLK_9, SDLK_7, SDLK_MINUS, SDLK_8, SDLK_0,
    /*1E-21*/ SDLK_RIGHTBRACKET, SDLK_o, SDLK_u, SDLK_LEFTBRACKET,
    /*22-23*/ SDLK_i, SDLK_p,
    /*24-29*/ SDLK_RETURN, SDLK_l, SDLK_j, SDLK_QUOTE, SDLK_k, SDLK_SEMICOLON,
    /*2A-29*/ SDLK_BACKSLASH, SDLK_COMMA, SDLK_SLASH, SDLK_n, SDLK_m,
    /*2F-2F*/ SDLK_PERIOD,

    /* Spaces, controls, modifiers */
    /*30-33*/ SDLK_TAB, SDLK_SPACE, SDLK_BACKQUOTE, SDLK_BACKSPACE,
    /*34-37*/ Z, SDLK_ESCAPE, Z, SDLK_LMETA,
    /*38-3B*/ SDLK_LSHIFT, SDLK_CAPSLOCK, SDLK_LALT, SDLK_LCTRL,

    /*3C-40*/ Z, Z, Z, Z, Z,

    /* Keypad (KP_EQUALS not supported, NUMLOCK used on what is CLEAR
     * in Mac OS X) */
    /*41-46*/ SDLK_KP_PERIOD, Z, SDLK_KP_MULTIPLY, Z, SDLK_KP_PLUS, Z,
    /*47-4A*/ SDLK_NUMLOCK /*==SDLK_CLEAR*/, Z, Z, Z,
    /*4B-4D*/ SDLK_KP_DIVIDE, SDLK_KP_ENTER, Z,
    /*4E-51*/ SDLK_KP_MINUS, Z, Z, SDLK_KP_EQUALS,
    /*52-57*/ SDLK_KP0, SDLK_KP1, SDLK_KP2, SDLK_KP3, SDLK_KP4, SDLK_KP5,
    /*58-5C*/ SDLK_KP6, SDLK_KP7, Z, SDLK_KP8, SDLK_KP9,

    /*5D-5F*/ Z, Z, Z,

    /* Function keys and cursor blocks (F13 not supported, F14 =>
     * PRINT[SCREEN], F15 => SCROLLOCK, F16 => PAUSE, HELP => INSERT) */
    /*60-64*/ SDLK_F5, SDLK_F6, SDLK_F7, SDLK_F3, SDLK_F8,
    /*65-6A*/ SDLK_F9, Z, SDLK_F11, Z, SDLK_F13, SDLK_PAUSE /*==SDLK_F16*/,
    /*6B-70*/ SDLK_PRINT /*==SDLK_F14*/, Z, SDLK_F10, Z, SDLK_F12, Z,
    /*71-72*/ SDLK_SCROLLOCK /*==SDLK_F15*/, SDLK_INSERT /*==SDLK_HELP*/,
    /*73-77*/ SDLK_HOME, SDLK_PAGEUP, SDLK_DELETE, SDLK_F4, SDLK_END,
    /*78-7C*/ SDLK_F2, SDLK_PAGEDOWN, SDLK_F1, SDLK_LEFT, SDLK_RIGHT,
    /*7D-7E*/ SDLK_DOWN, SDLK_UP,

    /*7F-7F*/ Z
};
#undef Z
#endif /* defined(__APPLE__) */

/**
 * Callback wrapper for mouse actions.
 */
static void Video_Mouse_Callback(void)
{
	Mouse_EventHandler(s_mousePosX / s_screen_magnification, s_mousePosY / s_screen_magnification, s_mouseButtonLeft, s_mouseButtonRight);
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
	SDL_WarpMouse(x * s_screen_magnification, y * s_screen_magnification);
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
	s_mouseMinX = minX * s_screen_magnification;
	s_mouseMaxX = maxX * s_screen_magnification;
	s_mouseMinY = minY * s_screen_magnification;
	s_mouseMaxY = maxY * s_screen_magnification;
}

/**
 * Initialize the video driver.
 */
bool Video_Init(int screen_magnification, VideoScaleFilter filter)
{
#ifndef WITHOUT_SDLIMAGE
	SDL_Surface * icon;
#endif /* WITHOUT_SDLIMAGE */

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

	if (SDL_Init(SDL_INIT_VIDEO) < 0) {
		Error("Could not initialize SDL: %s\n", SDL_GetError());
		return false;
	}

#ifndef WITHOUT_SDLIMAGE
	icon = IMG_Load(DUNE_ICON_DIR "opendune.png");
	if (icon == NULL) icon = IMG_Load("../os/png_icon/opendune_32x32.png");
	if (icon != NULL) {
		SDL_WM_SetIcon(icon, NULL);
		SDL_FreeSurface(icon);
	}
#endif /* WITHOUT_SDLIMAGE */

	SDL_WM_SetCaption(window_caption, "OpenDUNE");
	if (filter == FILTER_HQX) {
		s_gfx_surface = SDL_SetVideoMode(SCREEN_WIDTH * s_screen_magnification, SCREEN_HEIGHT * s_screen_magnification, 32, SDL_SWSURFACE);
	} else {
		s_gfx_surface = SDL_SetVideoMode(SCREEN_WIDTH * s_screen_magnification, SCREEN_HEIGHT * s_screen_magnification, 8, SDL_SWSURFACE | SDL_HWPALETTE);
	}
	if (s_gfx_surface == NULL) {
		Error("Could not set resolution: %s\n", SDL_GetError());
		return false;
	}

	SDL_ShowCursor(SDL_DISABLE);
	SDL_EnableKeyRepeat(SDL_DEFAULT_REPEAT_DELAY, SDL_DEFAULT_REPEAT_INTERVAL);

	memset(s_gfx_surface->pixels, 0, SCREEN_WIDTH * SCREEN_HEIGHT * s_screen_magnification * s_screen_magnification);

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
	SDL_Quit();
}

static void Video_DrawScreen_Scale2x(void)
{
	uint8 *data = GFX_Screen_Get_ByIndex(SCREEN_0);
	data += (s_screenOffset << 2);
	scale(s_screen_magnification, s_gfx_surface->pixels, s_screen_magnification * SCREEN_WIDTH, data, SCREEN_WIDTH, 1, SCREEN_WIDTH, SCREEN_HEIGHT);
}

static void Video_DrawScreen_Hqx(void)
{
	uint8 *p;

	p = GFX_Screen_Get_ByIndex(SCREEN_0);
	p += (s_screenOffset << 2);

	switch(s_screen_magnification) {
	case 2:
		hq2x_8to32(p, s_gfx_surface->pixels,
		           SCREEN_WIDTH, SCREEN_HEIGHT, rgb_palette);
		break;
	case 3:
		hq3x_8to32(p, s_gfx_surface->pixels,
		           SCREEN_WIDTH, SCREEN_HEIGHT, rgb_palette);
		break;
	case 4:
		hq4x_8to32(p, s_gfx_surface->pixels,
		           SCREEN_WIDTH, SCREEN_HEIGHT, rgb_palette);
		break;
	}
}

static void Video_DrawScreen_Nearest_Neighbor(void)
{
	uint8 *data = GFX_Screen_Get_ByIndex(SCREEN_0);
	uint8 *gfx1 = s_gfx_surface->pixels;
	uint8 *gfx2;
	uint8 *gfx3;
	int x, y;
	int i, j;

	data += (s_screenOffset << 2);
	switch(s_screen_magnification) {
	case 1:
		memcpy(gfx1, data, SCREEN_WIDTH * SCREEN_HEIGHT);
		break;
	case 2:
		for (y = 0; y < SCREEN_HEIGHT; y++) {
			gfx2 = gfx1 + SCREEN_WIDTH * 2;
#if defined(__x86_64__)
			/* SSE2 code */
			for (x = SCREEN_WIDTH / 16; x > 0; x--) {
				__m128i m, mh, ml;
				m = *((__m128i *)data);
				data += 16;
				ml = _mm_unpacklo_epi8(m, m);
				mh = _mm_unpackhi_epi8(m, m);
				*((__m128i *)gfx1) = ml;
				gfx1 += 16;
				*((__m128i *)gfx1) = mh;
				gfx1 += 16;
				*((__m128i *)gfx2) = ml;
				gfx2 += 16;
				*((__m128i *)gfx2) = mh;
				gfx2 += 16;
			}
#elif defined(__GNUC__) && (defined(__i386__) || defined(__x86_64__))
			/* MMX code */
			for (x = SCREEN_WIDTH / 4; x > 0; x--) {
				__m64 m;
				m = _mm_cvtsi32_si64(*((int *)data));	/* Load Word */
				data += 4;
				m = _mm_unpacklo_pi8(m, m);	/* unpack and interlace same value */
				*((__m64 *)gfx1) = m;	/* store */
				gfx1 += 8;
				*((__m64 *)gfx2) = m;
				gfx2 += 8;
			}
#elif defined(__ALTIVEC__)
			/* G4/G5 altivec code */
			for (x = SCREEN_WIDTH / 16; x > 0; x--) {
				vector unsigned char m0;
				vector unsigned char m1;
				m0 = *((vector unsigned char *)data);
				m1 = m0;
				data += 16;
				m0 = vec_mergeh(m0, m0);
				m1 = vec_mergel(m1, m1);
				((vector unsigned char *)gfx1)[0] = m0;
				((vector unsigned char *)gfx1)[1] = m1;
				gfx1 += 32;
				((vector unsigned char *)gfx2)[0] = m0;
				((vector unsigned char *)gfx2)[1] = m1;
				gfx2 += 32;
			}
#else
			for (x = 0; x < SCREEN_WIDTH; x++) {
				uint8 value = *data++;
				*gfx1++ = value;
				*gfx2++ = value;
				*gfx1++ = value;
				*gfx2++ = value;
			}
#endif
			gfx1 = gfx2;
		}
		break;
	case 3:
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
		break;
	default:
		/* The non-optimized works-for-every-magnification method */
		for (y = 0; y < SCREEN_HEIGHT; y++) {
			for (x = 0; x < SCREEN_WIDTH; x++) {
				for (i = 0; i < s_screen_magnification; i++) {
					for (j = 0; j < s_screen_magnification; j++) {
						*(gfx1 + SCREEN_WIDTH * s_screen_magnification * j) = *data;
					}
					gfx1++;
				}
				data++;
			}
			gfx1 += SCREEN_WIDTH * s_screen_magnification * (s_screen_magnification - 1);
		}
	}
}

/**
 * Because we rarely want to draw in 320x200, this function copies from the
 *  320x200 buffer to the real screen, scaling where needed.
 */
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
				uint8 scancode;	/* AT keyboard scancode */
				SDLKey sym = event.key.keysym.sym;	/* SDLKey symbolic code */
				if (sym == SDLK_RETURN && (event.key.keysym.mod & KMOD_ALT)) {
					/* ALT-ENTER was pressed */
					if (!keyup) continue; /* ignore keydown */
					if (!SDL_WM_ToggleFullScreen(s_gfx_surface)) {
						Warning("Failed to toggle full screen\n");
					}
					continue;
				}
				/* Mac keyboard scancodes are very different from what
				 * they are on a PC : we need a translation table. */
#if defined(__APPLE__)
				/* SDL on OS X returns scancode 0 for 'A' key or some control keys */
				if (((event.key.keysym.scancode == 0 && sym > SDLK_SPACE && sym < 0x80) ||
				    (event.key.keysym.scancode > 0 && event.key.keysym.scancode < 0x80))
				    && sdlkey_map[event.key.keysym.scancode] != SDLK_UNKNOWN) {
					/* use "translated" KeySym */
					sym = sdlkey_map[event.key.keysym.scancode];
				}
#else /* defined(__APPLE__) */
				if (event.key.keysym.scancode == 0) {
#endif /* defined(__APPLE__) */
					/* scancode 0 : retrieve from sym */
					if (sym >= sizeof(s_SDL_keymap)) continue;
					if (s_SDL_keymap[sym] == 0) {
						Warning("Unhandled key %X \"%s\"\n", sym, SDL_GetKeyName(sym));
						continue;
					}
					scancode = s_SDL_keymap[sym];
#if !defined(__APPLE__)
				} else {
					scancode = (uint8)event.key.keysym.scancode;
#if !defined(_WIN32) && !defined(__APPLE__)
					/* Linux adds 8 to all scancodes */
					scancode -= 8;
#endif /* !defined(_WIN32) && !defined(__APPLE__) */
				}
#endif /* defined(__APPLE__) */
				Video_Key_Callback(scancode | (keyup ? 0x80 : 0x0));
			} break;
		}
	}

	/* Do a quick compare to see if the screen changed at all */
	if (!s_screen_needrepaint && memcmp(GFX_Screen_Get_ByIndex(SCREEN_0), s_gfx_screen8, SCREEN_WIDTH * SCREEN_HEIGHT) == 0) {
		s_video_lock = false;
		return;
	}
	memcpy(s_gfx_screen8, GFX_Screen_Get_ByIndex(SCREEN_0), SCREEN_WIDTH * SCREEN_HEIGHT);

	Video_DrawScreen();

	SDL_UpdateRect(s_gfx_surface, 0, 0, 0, 0);
	s_screen_needrepaint = false;

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

	if (s_scale_filter == FILTER_HQX) {
		uint32 value;
		for (i = from; i < from + length; i++) {
			value = (((*p++) & 0x3F) * 0x41000) & 0xff0000;
			value |= (((*p++) & 0x3F) * 0x410) & 0x00ff00;
			rgb_palette[i] = value | ((((*p++) & 0x3F) * 0x41)>> 4);
		}
		s_screen_needrepaint = true;
	} else {
		/* convert from 6bit to 8bit per component */
		for (i = 0; i < length; i++) {
			paletteRGB[i].r = (((*p++) & 0x3F) * 0x41) >> 4;
			paletteRGB[i].g = (((*p++) & 0x3F) * 0x41) >> 4;
			paletteRGB[i].b = (((*p++) & 0x3F) * 0x41) >> 4;
		}

		if(!SDL_SetPalette(s_gfx_surface, SDL_LOGPAL | SDL_PHYSPAL, paletteRGB, from, length)) Warning("SDL_SetPalette() failed\n");
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
	s_screen_needrepaint = true;
}

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
#include "../inifile.h"

#include "video_fps.h"
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

static uint8 * s_framebuffer = NULL;

static bool s_video_initialized = false;
static bool s_video_lock = false;

static uint16 s_mousePosX = 0;
static uint16 s_mousePosY = 0;
static bool s_mouseButtonLeft  = false;
static bool s_mouseButtonRight = false;

static uint16 s_mouseMinX = 0;
static uint16 s_mouseMaxX = 0;
static uint16 s_mouseMinY = 0;
static uint16 s_mouseMaxY = 0;

#ifdef _DEBUG
static uint8 s_gfx_screen8[SCREEN_WIDTH * SCREEN_HEIGHT];
#endif /* _DEBUG */
static uint16 s_screenOffset = 0;

/* translation from SDLKey (symbolic codes) to AT Set 1 (or XT) keyboard scancodes
 * Scancodes with MSB set are prefixed with E0. ie 0x80|0x1D generates E0 1D.
 * Dune 2 input code handle extended scancodes (prefixed with e0) */
/* Partly copied from http://webster.cs.ucr.edu/AoA/DOS/pdf/apndxc.pdf */
/* also see http://www.quadibloc.com/comp/scan.htm */
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
        0x52, 0x4F, 0x50, 0x51, 0x4B, 0x4C, 0x4D, 0x47, 0x48, 0x49, 0x53, 0x62, 0x37, 0x4A, 0x4E, 0x80|0x1C, /* 0x100 - 0x10F */
           0, 0x80|0x48, 0x80|0x50, 0x80|0x4D, 0x80|0x4B, 0x80|0x52, 0x80|0x47, 0x80|0x4F, 0x80|0x49, 0x80|0x51, 0x3B, 0x3C, 0x3D, 0x3E, 0x3F, 0x40, /* 0x110 - 0x11F */
        0x41, 0x42, 0x43, 0x44, 0x57, 0x58,    0,    0,    0,    0,    0,    0, 0x45, 0x3A, 0x46, 0x36, /* 0x120 - 0x12F */
        0x2A, 0x80|0x1D, 0x1D, 0x80|0x38, 0x38, 0x80|0x5C, 0x80|0x5B,    0,    0,    0,    0,    0,    0,    0,    0,    0, /* 0x130 - 0x13F */
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
	uint32 video_flags;
	int width, height, bpp;
#ifdef _DEBUG
	const SDL_VideoInfo * info;
	int prefered_bpp;
#endif /* _DEBUG */
#ifndef WITHOUT_SDLIMAGE
	SDL_Surface * icon;
#endif /* WITHOUT_SDLIMAGE */

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

	/* Note from https://www.libsdl.org/release/SDL-1.2.15/docs/html/video.html :
	 * If you use both sound and video in your application, you need to call
	 * SDL_Init(SDL_INIT_AUDIO | SDL_INIT_VIDEO) before opening the sound
	 * device, otherwise under Win32 DirectX, you won't be able to set
	 * full-screen display modes. */
	if (SDL_Init(SDL_INIT_VIDEO) < 0) {
		Error("Could not initialize SDL: %s\n", SDL_GetError());
		return false;
	}

#ifdef _DEBUG
	info = SDL_GetVideoInfo();
	if (info != NULL) {
		if (info->vfmt) {
			Debug("Prefered : %dbpp (%d bytes per pixel)\n", (int)info->vfmt->BitsPerPixel, (int)info->vfmt->BytesPerPixel);
			Debug(" colorkey=0X%08x alpha=0x%02x\n", info->vfmt->colorkey, (int)info->vfmt->alpha);
		}
		Debug(" hw_available=%d wm_available=%d   video_mem=%luKB\n", info->hw_available, info->wm_available, info->video_mem);
		Debug(" blit_hw=%d blit_hw_CC=%d nlit_hw_A=%d\n", info->blit_hw, info->blit_hw_CC, info->blit_hw_A);
		Debug(" blit_sw=%d blit_sw_CC=%d nlit_sw_A=%d\n", info->blit_sw, info->blit_sw_CC, info->blit_sw_A);
		Debug(" blit_fill=%d\n", info->blit_fill);
	} else {
		Warning("SDL_GetVideoInfo() returned NULL\n");
	}
#endif /* _DEBUG */

#ifndef WITHOUT_SDLIMAGE
	icon = IMG_Load(DUNE_ICON_DIR "opendune.png");
	if (icon == NULL) icon = IMG_Load("../os/png_icon/opendune_32x32.png");
	if (icon != NULL) {
		SDL_WM_SetIcon(icon, NULL);
		SDL_FreeSurface(icon);
	}
#endif /* WITHOUT_SDLIMAGE */

	SDL_WM_SetCaption(window_caption, "OpenDUNE");

	width = SCREEN_WIDTH * s_screen_magnification;
	height = SCREEN_HEIGHT * s_screen_magnification;
	video_flags = SDL_HWSURFACE | SDL_HWACCEL;
	if (IniFile_GetInteger("fullscreen", 0) != 0) {
		video_flags |= SDL_FULLSCREEN;
	}
	if (filter == FILTER_HQX) {
		bpp = 32;
	} else {
		bpp = 8;
		video_flags |= SDL_HWPALETTE;
	}
#ifdef _DEBUG
	prefered_bpp = SDL_VideoModeOK(width, height, bpp, video_flags);
	Debug("SDL_VideoModeOK(%d, %d, %d, 0x%08x) : prefered bpp = %d\n", width, height, bpp, video_flags, prefered_bpp);
#endif /* _DEBUG */
	s_gfx_surface = SDL_SetVideoMode(width, height, bpp, video_flags);
	if (s_gfx_surface == NULL) {
		Error("Could not set resolution: %s\n", SDL_GetError());
		return false;
	}

	SDL_ShowCursor(SDL_DISABLE);
	SDL_EnableKeyRepeat(SDL_DEFAULT_REPEAT_DELAY, SDL_DEFAULT_REPEAT_INTERVAL);

	SDL_LockSurface(s_gfx_surface);
	memset(s_gfx_surface->pixels, 0, width * height * s_gfx_surface->format->BytesPerPixel);
	SDL_UnlockSurface(s_gfx_surface);

	if((SDL_MUSTLOCK(s_gfx_surface) == 0) && (screen_magnification == 1)
	   && (s_gfx_surface->pitch == SCREEN_WIDTH) && (s_gfx_surface->format->BitsPerPixel == 8)) {
		Debug("Using direct access to SDL surface\n");
	} else {
		s_framebuffer = calloc(1, SCREEN_WIDTH * (SCREEN_HEIGHT + 4));
		if (s_framebuffer == NULL) {
			Error("Could not allocate %d bytes\n", SCREEN_WIDTH * (SCREEN_HEIGHT + 4));
			return false;
		}
	}

	s_video_initialized = true;

	return true;
}

/**
 * Uninitialize the video driver.
 */
void Video_Uninit(void)
{
	if (s_video_initialized) {
		s_video_initialized = false;
		if (s_scale_filter == FILTER_HQX) {
			hqxUnInit();
		}
		SDL_Quit();

		free(s_framebuffer);
		s_framebuffer = NULL;
	}
}

static void Video_DrawScreen_Scale2x(const struct dirty_area * area)
{
	unsigned top, bottom;
	uint8 *data = GFX_Screen_Get_ByIndex(SCREEN_0);
	data += (s_screenOffset << 2);
	if (area != NULL) {
		top = area->top;
		bottom = area->bottom;
	} else {
		top = 0;
		bottom = SCREEN_HEIGHT;
	}
	scale_part(s_screen_magnification, s_gfx_surface->pixels, s_screen_magnification * SCREEN_WIDTH, data, SCREEN_WIDTH, 1, SCREEN_WIDTH, SCREEN_HEIGHT, top, bottom);
}

static void Video_DrawScreen_Hqx(void)
{
	uint8 *p;

	p = GFX_Screen_Get_ByIndex(SCREEN_0);
	p += (s_screenOffset << 2);

	switch(s_screen_magnification) {
	case 2:
		hq2x_8to32_rb(p, SCREEN_WIDTH, s_gfx_surface->pixels, s_gfx_surface->pitch,
		           SCREEN_WIDTH, SCREEN_HEIGHT, rgb_palette);
		break;
	case 3:
		hq3x_8to32_rb(p, SCREEN_WIDTH, s_gfx_surface->pixels, s_gfx_surface->pitch,
		           SCREEN_WIDTH, SCREEN_HEIGHT, rgb_palette);
		break;
	case 4:
		hq4x_8to32_rb(p, SCREEN_WIDTH, s_gfx_surface->pixels, s_gfx_surface->pitch,
		           SCREEN_WIDTH, SCREEN_HEIGHT, rgb_palette);
		break;
	}
}

static void Video_DrawScreen_Nearest_Neighbor(const struct dirty_area * area)
{
	uint8 *data = GFX_Screen_Get_ByIndex(SCREEN_0);
	uint8 *gfx1 = s_gfx_surface->pixels;
	uint8 *gfx2;
	uint8 *gfx3;
	int x, y;
	int i, j;
	int min_y, max_y;

	data += (s_screenOffset << 2);
	if (area != NULL) {
		min_y = area->top;
		max_y = area->bottom;
		data += (min_y * SCREEN_WIDTH);
		gfx1 += min_y * SCREEN_WIDTH * s_screen_magnification  * s_screen_magnification;
	} else {
		min_y = 0;
		max_y = SCREEN_HEIGHT;
	}

	switch(s_screen_magnification) {
	case 2:
		for (y = min_y; y < max_y; y++) {
			gfx2 = gfx1 + s_gfx_surface->pitch;
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
				/*m1 = *((vector unsigned char *)data);*/
				m1 = vec_ld(0, data);
				data += 16;
				m0 = vec_mergeh(m1, m1);
				m1 = vec_mergel(m1, m1);
				vec_st(m0, 0, gfx1);
				vec_st(m1, 16, gfx1);
				gfx1 += 32;
				vec_st(m0, 0, gfx2);
				vec_st(m1, 16, gfx2);
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
		for (y = min_y; y < max_y; y++) {
			gfx2 = gfx1 + s_gfx_surface->pitch;
			gfx3 = gfx2 + s_gfx_surface->pitch;
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
		for (y = min_y; y < max_y; y++) {
			for (x = 0; x < SCREEN_WIDTH; x++) {
				for (i = 0; i < s_screen_magnification; i++) {
					for (j = 0; j < s_screen_magnification; j++) {
						*(gfx1 + s_gfx_surface->pitch * j) = *data;
					}
					gfx1++;
				}
				data++;
			}
			gfx1 += s_gfx_surface->pitch * (s_screen_magnification - 1);
		}
	}
}

/**
 * Because we rarely want to draw in 320x200, this function copies from the
 *  320x200 buffer to the real screen, scaling where needed.
 */
static void Video_DrawScreen(const struct dirty_area * area)
{
	SDL_LockSurface(s_gfx_surface);
	if (s_screen_magnification == 1) {
		uint8 *data = GFX_Screen_Get_ByIndex(SCREEN_0);
		if (s_gfx_surface->format->BitsPerPixel == 8) {
			uint8 *gfx = s_gfx_surface->pixels;
			if (s_gfx_surface->pitch == SCREEN_WIDTH) {
				memcpy(gfx, data, SCREEN_WIDTH * SCREEN_HEIGHT);
			} else {
				int y;
				for (y = 0; y < SCREEN_HEIGHT; y++) {
					memcpy(gfx, data, SCREEN_WIDTH);
					data += SCREEN_WIDTH;
					gfx += s_gfx_surface->pitch;
				}
			}
		} else {
			uint32 *gfx = s_gfx_surface->pixels;
			int x, y;
			for (y = 0; y < SCREEN_HEIGHT; y++) {
				for (x = 0; x < SCREEN_WIDTH; x++) {
					*gfx = rgb_palette[*data];
					data++;
					gfx++;
				}
				gfx += (s_gfx_surface->pitch / 4 - SCREEN_WIDTH);
			}
		}
	} else switch (s_scale_filter) {
	case FILTER_NEAREST_NEIGHBOR:
		Video_DrawScreen_Nearest_Neighbor(area);
		break;
	case FILTER_SCALE2X:
		Video_DrawScreen_Scale2x(area);
		break;
	case FILTER_HQX:
		Video_DrawScreen_Hqx();
		break;
	default:
		Error("Unsupported scale filter\n");
	}
	SDL_UnlockSurface(s_gfx_surface);
}

/**
 * Runs every tick to handle video driver updates.
 */
void Video_Tick(void)
{
	SDL_Event event;
	static bool s_showFPS = false;

	if (!s_video_initialized) return;

	if (s_video_lock) return;
	s_video_lock = true;

	if (s_showFPS) {
		Video_ShowFPS(GFX_Screen_Get_ByIndex(SCREEN_0));
	}

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
				if ((sym == SDLK_RETURN && (event.key.keysym.mod & KMOD_ALT)) || sym == SDLK_F11) {
					/* ALT-ENTER or F11 was pressed */
					if (keyup) continue; /* ignore key-up */
					if (!SDL_WM_ToggleFullScreen(s_gfx_surface)) {
						Warning("Failed to toggle full screen\n");
					}
					continue;
				}
				if (sym == SDLK_F8 && !keyup) {
					s_showFPS = !s_showFPS;
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
						Warning("Unhandled key 0x%02X \"%s\"\n", sym, SDL_GetKeyName(sym));
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
				if (scancode & 0x80) {
					Video_Key_Callback(0xe0);
					scancode &= 0x7f;
					Debug("extended scancode E0 %02X\n", scancode | (keyup ? 0x80 : 0x0));
				}
				Video_Key_Callback(scancode | (keyup ? 0x80 : 0x0));
			} break;
		}
	}

#ifdef _DEBUG
	if (!s_showFPS) {
		if (GFX_Screen_Get_ByIndex(SCREEN_0) != NULL) {
			if (!GFX_Screen_IsDirty(SCREEN_0) && memcmp(GFX_Screen_Get_ByIndex(SCREEN_0), s_gfx_screen8, SCREEN_WIDTH * SCREEN_HEIGHT) != 0) {
				Warning("**** SCREEN0 DIRTY NOT DETECTED ! ****\n");
			}
			memcpy(s_gfx_screen8, GFX_Screen_Get_ByIndex(SCREEN_0), SCREEN_WIDTH * SCREEN_HEIGHT);
		}
	}
#endif /* _DEBUG */

	if (GFX_Screen_IsDirty(SCREEN_0) || s_screen_needrepaint) {
		struct dirty_area * area = GFX_Screen_GetDirtyArea(SCREEN_0);

		/* Do not call Video_DrawScreen() if the game is allowed to draw directly into the SDL Surface */
		if (s_framebuffer != NULL) Video_DrawScreen(area);

		if (!s_screen_needrepaint && area && (area->left > 0 || area->top > 0 || area->right < SCREEN_WIDTH || area->bottom < SCREEN_HEIGHT)) {
			SDL_UpdateRect(s_gfx_surface, area->left * s_screen_magnification, area->top * s_screen_magnification,
			                              (area->right - area->left) * s_screen_magnification, (area->bottom - area->top) * s_screen_magnification);
		} else {
			SDL_UpdateRect(s_gfx_surface, 0, 0, 0, 0);
		}

		GFX_Screen_SetClean(SCREEN_0);
		s_screen_needrepaint = false;
	}
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

	if (s_gfx_surface->format->BitsPerPixel != 8) {
		uint32 value;
		for (i = from; i < from + length; i++) {
			value = (((*p++) & 0x3F) * 0x41000) & 0xff0000;
			value |= (((*p++) & 0x3F) * 0x410) & 0x00ff00;
			rgb_palette[i] = value | ((((*p++) & 0x3F) * 0x41)>> 4);
		}
		s_screen_needrepaint = true;
	} else {
		SDL_Color paletteRGB[256];
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

void * Video_GetFrameBuffer(uint16 size)
{
	(void)size;
	if(!s_video_initialized) return NULL;
	/* return either our private 320x204 8bit frame buffer or directly the
	 * SDL Surface if the Surface doesn't need any locking or rescaling */
	if(s_framebuffer != NULL) return s_framebuffer;
	else return s_gfx_surface->pixels;
}

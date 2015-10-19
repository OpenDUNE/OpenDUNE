/** @file src/video/video_win32.c WIN32 video driver. */

#include <stdio.h>
#define _WIN32_WINNT 0x0500
#include <windows.h>
#include <commctrl.h>
#include <malloc.h>
#include "types.h"
#include "../os/common.h"
#include "../os/error.h"

#include "video.h"

#include "../gfx.h"
#include "../opendune.h"
#include "../input/input.h"
#include "../input/mouse.h"

#include "scalebit.h"
#include "hqx.h"

static VideoScaleFilter s_scale_filter;

/** The the magnification of the screen. 2 means 640x400, 3 means 960x600, etc. */
static int s_screen_magnification;

/** The palette used for HQX */
static uint32 rgb_palette[256];

static const char *s_className = "OpenDUNE";
static bool s_init = false;
static bool s_lock = false;
static HWND s_hwnd = NULL;
static HBITMAP s_dib = NULL;
static void *s_screen = NULL;
static void *s_screen2 = NULL;
static uint16 s_x;
static uint16 s_y;

static bool s_mouseTracking = false;

static uint16 s_mousePosX = 0;
static uint16 s_mousePosY = 0;
static bool s_mouseButtonLeft  = false;
static bool s_mouseButtonRight = false;

static uint16 s_mouseMinX = 0;
static uint16 s_mouseMaxX = 0;
static uint16 s_mouseMinY = 0;
static uint16 s_mouseMaxY = 0;

typedef struct VkMapping {
	WPARAM  vk;
	uint16 scan;
} VkMapping;

#define M(vk, scan) { vk, scan }
static VkMapping s_keyMap[] = {
	M(VK_ESCAPE,     0x0001),
	M('1',           0x0002),
	M('2',           0x0003),
	M('3',           0x0004),
	M('4',           0x0005),
	M('5',           0x0006),
	M('6',           0x0007),
	M('7',           0x0008),
	M('8',           0x0009),
	M('9',           0x000A),
	M('0',           0x000B),
	M(VK_OEM_MINUS,  0x000C),
	M(VK_OEM_PLUS,   0x000D),
	M(VK_BACK,       0x000E),
	M(VK_TAB,        0x000F),
	M('A',           0x001E),
	M('B',           0x0030),
	M('C',           0x002E),
	M('D',           0x0020),
	M('E',           0x0012),
	M('F',           0x0021),
	M('G',           0x0022),
	M('H',           0x0023),
	M('I',           0x0017),
	M('J',           0x0024),
	M('K',           0x0025),
	M('L',           0x0026),
	M('M',           0x0032),
	M('N',           0x0031),
	M('O',           0x0018),
	M('P',           0x0019),
	M('Q',           0x0010),
	M('R',           0x0013),
	M('S',           0x001F),
	M('T',           0x0014),
	M('U',           0x0016),
	M('V',           0x002F),
	M('W',           0x0011),
	M('X',           0x002D),
	M('Y',           0x0015),
	M('Z',           0x002C),
	M(VK_RETURN,     0x001C),
	M(VK_OEM_3,      0x0029),
	M(VK_OEM_5,      0x002B),
	M(VK_OEM_COMMA,  0x0033),
	M(VK_OEM_PERIOD, 0x0034),
	M(VK_OEM_2,      0x0035),
	M(VK_SHIFT,      0x0036),
	M(VK_SPACE,      0x0039),
	M(VK_F1,         0x003B),
	M(VK_F2,         0x003C),
	M(VK_F3,         0x003D),
	M(VK_F4,         0x003E),
	M(VK_F5,         0x003F),
	M(VK_F6,         0x0040),
	M(VK_F7,         0x0041),
	M(VK_F8,         0x0042),
	M(VK_F9,         0x0043),
	M(VK_F10,        0x0044),
	M(VK_F11,        0x0057),
	M(VK_F12,        0x0058),
	M(VK_NUMPAD1,    0x004F),
	M(VK_NUMPAD2,    0x0050),
	M(VK_NUMPAD3,    0x0051),
	M(VK_NUMPAD4,    0x004B),
	M(VK_NUMPAD5,    0x001C),
	M(VK_NUMPAD6,    0x004D),
	M(VK_NUMPAD7,    0x0047),
	M(VK_NUMPAD8,    0x0048),
	M(VK_NUMPAD9,    0x0049),
	M(VK_UP,         0x0048),
	M(VK_DOWN,       0x0050),
	M(VK_RIGHT,      0x004D),
	M(VK_LEFT,       0x004B),
	M(VK_INSERT,     0x0052),
	M(VK_HOME,       0x0047),
	M(VK_END,        0x004F),
	M(VK_PRIOR,      0x0049),
	M(VK_NEXT,       0x0051)
};
#undef M

static uint16 MapKey(WPARAM vk)
{
	uint16 i;

	for (i = 0; i < lengthof(s_keyMap); i++) {
		if (s_keyMap[i].vk == vk) return s_keyMap[i].scan;
	}

	return 0x0000;
}

/**
 * Callback wrapper for mouse actions.
 */
static void Video_Mouse_Callback(void)
{
	Mouse_EventHandler(s_mousePosX / s_screen_magnification, s_mousePosY / s_screen_magnification, s_mouseButtonLeft, s_mouseButtonRight);
}

static LRESULT CALLBACK WindowProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam)
{
	bool keyup = true;

	switch (uMsg) {
		case WM_CREATE: {
			CREATESTRUCT *cs = (CREATESTRUCT*)lParam;
			s_x = cs->x;
			s_y = cs->y;
			return 0;
		}

		case WM_MOVE:
			s_x = (uint16)(LOWORD(lParam));
			s_y = (uint16)(HIWORD(lParam));
			return 0;

		case WM_CLOSE:
			DestroyWindow(s_hwnd);
			PrepareEnd();
			exit(0);

		case WM_PAINT: {
			PAINTSTRUCT ps;
			HDC dc;
			HDC dc2;
			HBITMAP old_bmp;

			if (!GetUpdateRect(hwnd, NULL, FALSE)) return 0;
			if (s_scale_filter == FILTER_SCALE2X) {
				scale(s_screen_magnification, s_screen2, s_screen_magnification * SCREEN_WIDTH, s_screen, SCREEN_WIDTH, 1, SCREEN_WIDTH, SCREEN_HEIGHT);
			} else if(s_scale_filter == FILTER_HQX) {
				static uint32 rgb_screen[SCREEN_WIDTH*SCREEN_HEIGHT];
				uint8 *p;
				uint32 *rgb;
				int i;

				i = SCREEN_WIDTH*SCREEN_HEIGHT;
				p = s_screen;
				rgb = rgb_screen;
				do {
					*rgb++ = rgb_palette[*p++];
				} while(--i > 0);
				switch(s_screen_magnification) {
				case 2:
					hq2x_32(rgb_screen, s_screen2, SCREEN_WIDTH, SCREEN_HEIGHT);
					break;
				case 3:
					hq3x_32(rgb_screen, s_screen2, SCREEN_WIDTH, SCREEN_HEIGHT);
					break;
				case 4:
					hq4x_32(rgb_screen, s_screen2, SCREEN_WIDTH, SCREEN_HEIGHT);
					break;
				}
			}
			dc = BeginPaint(hwnd, &ps);
			dc2 = CreateCompatibleDC(dc);
			old_bmp = (HBITMAP)SelectObject(dc2, s_dib);
			switch (s_scale_filter) {
			case FILTER_HQX:
			case FILTER_SCALE2X:
				BitBlt(dc, 0, 0, SCREEN_WIDTH * s_screen_magnification, SCREEN_HEIGHT * s_screen_magnification, dc2, 0, 0, SRCCOPY);
				break;
			case FILTER_NEAREST_NEIGHBOR:
			default:
				StretchBlt(dc, 0, 0, SCREEN_WIDTH * s_screen_magnification, SCREEN_HEIGHT * s_screen_magnification, dc2, 0, 0, SCREEN_WIDTH, SCREEN_HEIGHT, SRCCOPY);
			}
			SelectObject(dc2, old_bmp);
			DeleteDC(dc2);
			EndPaint(hwnd, &ps);
			return 0;
		}

		case WM_MOUSELEAVE:
			ShowCursor(TRUE);
			s_mouseTracking = false;
			return 0;

		case WM_MOUSEMOVE: {
			TRACKMOUSEEVENT tme;
			uint16 x, y;
			uint16 rx, ry;

			if (!s_mouseTracking) {
				tme.cbSize = sizeof(TRACKMOUSEEVENT);
				tme.dwFlags = TME_LEAVE;
				tme.hwndTrack = hwnd;
				if (_TrackMouseEvent(&tme)) {
					ShowCursor(FALSE);
					s_mouseTracking = true;
				}
			}

			x = (uint16)(LOWORD(lParam));
			y = (uint16)(HIWORD(lParam));

			rx = x;
			ry = y;

			if (s_mouseMinX != 0 && rx < s_mouseMinX) rx = s_mouseMinX;
			if (s_mouseMaxX != 0 && rx > s_mouseMaxX) rx = s_mouseMaxX;
			if (s_mouseMinY != 0 && ry < s_mouseMinY) ry = s_mouseMinY;
			if (s_mouseMaxY != 0 && ry > s_mouseMaxY) ry = s_mouseMaxY;

			/* If we moved, send the signal back to the window to correct for it */
			if (x != rx || y != ry) {
				SetCursorPos(s_x + rx, s_y + ry);
				return 0;
			}

			s_mousePosX = rx;
			s_mousePosY = ry;
			Video_Mouse_Callback();
			return 0;
		}

		case WM_LBUTTONDOWN:
			s_mouseButtonLeft = true;
			Video_Mouse_Callback();
			return 0;

		case WM_LBUTTONUP:
			s_mouseButtonLeft = false;
			Video_Mouse_Callback();
			return 0;

		case WM_RBUTTONDOWN:
			s_mouseButtonRight = true;
			Video_Mouse_Callback();
			return 0;

		case WM_RBUTTONUP:
			s_mouseButtonRight = false;
			Video_Mouse_Callback();
			return 0;

		case WM_KEYDOWN:
			keyup = false;
			/* Fall Through */
		case WM_KEYUP: {
			uint16 scan;

			scan = MapKey(wParam);

			if (scan == 0) {
				Warning("Unhandled key %X\n", wParam);
				return 0;
			}
			if ((scan >> 8) != 0) Input_EventHandler(scan >> 8);
			Input_EventHandler((scan & 0xFF) | (keyup ? 0x80 : 0x0));
			return 0;
		}

		default: break;
	}

	return DefWindowProc(hwnd, uMsg, wParam, lParam);
}

bool Video_Init(int screen_magnification, VideoScaleFilter filter)
{
	WNDCLASS wc;
	HINSTANCE hInstance;
	BITMAPINFO *bi;
	HDC dc;

	if (s_init) return true;
	if (screen_magnification <= 0 || screen_magnification > 4) {
		Error("Incorrect screen magnification factor : %d\n", screen_magnification);
		return false;
	}
	s_screen_magnification = screen_magnification;
	s_scale_filter = filter;

	if (filter == FILTER_HQX) {
		hqxInit();
	}

	hInstance = GetModuleHandle(NULL);

	wc.style = 0;
	wc.lpfnWndProc = WindowProc;
	wc.cbClsExtra = 0;
	wc.cbWndExtra = 0;
	wc.hInstance = hInstance;
	wc.hIcon = NULL;
	wc.hCursor = NULL;
	wc.hbrBackground = 0;
	wc.lpszMenuName = NULL;
	wc.lpszClassName = s_className;
	if (!RegisterClass(&wc)) {
		Error("RegisterClass failed\n");
		return false;
	}

	bi = (BITMAPINFO*)_alloca(sizeof(BITMAPINFOHEADER) + sizeof(RGBQUAD) * 256);
	memset(bi, 0, sizeof(BITMAPINFOHEADER) + sizeof(RGBQUAD) * 256);
	bi->bmiHeader.biSize = sizeof(BITMAPINFOHEADER);
	if (filter == FILTER_NEAREST_NEIGHBOR) {
		bi->bmiHeader.biWidth = SCREEN_WIDTH;
		bi->bmiHeader.biHeight = -SCREEN_HEIGHT;
	} else {
		bi->bmiHeader.biWidth = SCREEN_WIDTH * s_screen_magnification;
		bi->bmiHeader.biHeight = -SCREEN_HEIGHT * s_screen_magnification;
	}
	bi->bmiHeader.biPlanes = 1;
	if (filter == FILTER_HQX) {
		bi->bmiHeader.biBitCount = 32;
	} else {
		bi->bmiHeader.biBitCount = 8;
	}
	bi->bmiHeader.biCompression = BI_RGB;

	dc = GetDC(NULL);
	s_dib = CreateDIBSection(dc, bi, DIB_RGB_COLORS, (filter == FILTER_NEAREST_NEIGHBOR) ? &s_screen : &s_screen2, NULL, 0);
	if (s_dib == NULL) {
		Error("CreateDIBSection failed\n");
		return false;
	}
	ReleaseDC(NULL, dc);

	if (filter != FILTER_NEAREST_NEIGHBOR) {
#ifdef _MSC_VER
		/* we need aligned memory for rescale filter */
		s_screen = _aligned_malloc(SCREEN_WIDTH * SCREEN_HEIGHT, 16);
#else  /* _MSC_VER */
		s_screen = malloc(SCREEN_WIDTH * SCREEN_HEIGHT);
#endif /* _MSC_VER */
	}
	s_init = true;
	return true;
}

void Video_Uninit(void)
{
	if (!s_init) return;

	DeleteObject(s_dib);
	if (s_scale_filter != FILTER_NEAREST_NEIGHBOR) {
#ifdef _MSC_VER
		_aligned_free(s_screen);
#else  /* _MSC_VER */
		free(s_screen);
#endif /* _MSC_VER */
	}
	UnregisterClass(s_className, GetModuleHandle(NULL));
	ShowCursor(TRUE);

	if (s_scale_filter == FILTER_HQX) {
		hqxUnInit();
	}
	s_init = false;
}

void Video_Tick(void)
{
	MSG msg;

	if (!s_init) return;

	if (s_lock) return;
	s_lock = true;

	if (s_hwnd == NULL) {
		DWORD style;
		RECT r;

		style = WS_CAPTION | WS_MINIMIZEBOX | WS_SYSMENU;

		r.left   = 0;
		r.top    = 0;
		r.right  = SCREEN_WIDTH * s_screen_magnification;
		r.bottom = SCREEN_HEIGHT * s_screen_magnification;
		AdjustWindowRect(&r, style, false);

		s_hwnd = CreateWindow(s_className, window_caption, style, CW_USEDEFAULT, CW_USEDEFAULT, r.right - r.left, r.bottom - r.top, NULL, NULL, GetModuleHandle(NULL), NULL);
		if (s_hwnd == NULL) {
			Error("CreateWindow failed\n");
			PrepareEnd();
			return;
		}

		Video_Mouse_SetPosition(g_mouseX, g_mouseY);
		ShowWindow(s_hwnd, SW_SHOWNORMAL);
	}

	while (PeekMessage(&msg, NULL, 0, 0, PM_REMOVE)) {
		TranslateMessage(&msg);
		DispatchMessage(&msg);
	}

	/* Do a quick compare to see if the screen changed at all */
	if (memcmp(GFX_Screen_Get_ByIndex(SCREEN_0), s_screen, SCREEN_WIDTH * SCREEN_HEIGHT) == 0) {
		s_lock = false;
		return;
	}

	memcpy(s_screen, GFX_Screen_Get_ByIndex(SCREEN_0), SCREEN_WIDTH * SCREEN_HEIGHT);

	InvalidateRect(s_hwnd, NULL, TRUE);
	s_lock = false;
}

void Video_SetPalette(void *palette, int from, int length)
{
	uint8 *p = palette;
	int i;

	if (s_scale_filter == FILTER_HQX) {
		uint32 value;

		for (i = from; i < from + length; i++) {
			value = (((*p++) & 0x3F) * 0x41000) & 0xff0000;
			value |= (((*p++) & 0x3F) * 0x410) & 0x00ff00;
			rgb_palette[i] = value | ((((*p++) & 0x3F) * 0x41)>> 4);
		}
	} else {
		RGBQUAD rgb[256];
		HDC dc;
		HDC dc2;
		HBITMAP old_bmp;

		/* convert from 6bit to 8bit per component */
		for (i = 0; i < length; i++) {
			rgb[i].rgbRed      = (((*p++) & 0x3F) * 0x41) >> 4;
			rgb[i].rgbGreen    = (((*p++) & 0x3F) * 0x41) >> 4;
			rgb[i].rgbBlue     = (((*p++) & 0x3F) * 0x41) >> 4;
			rgb[i].rgbReserved = 0;
		}

		dc = GetDC(s_hwnd);
		dc2 = CreateCompatibleDC(dc);
		old_bmp = SelectObject(dc2, s_dib);
		SetDIBColorTable(dc2, from, length, rgb);
		SelectObject(dc2, old_bmp);
		DeleteDC(dc2);
		ReleaseDC(s_hwnd, dc);
	}
	InvalidateRect(s_hwnd, NULL, TRUE);
}

void Video_Mouse_SetPosition(uint16 x, uint16 y)
{
	SetCursorPos(s_x + x * s_screen_magnification, s_y + y * s_screen_magnification);
}

void Video_Mouse_SetRegion(uint16 minX, uint16 maxX, uint16 minY, uint16 maxY)
{
	s_mouseMinX = minX * s_screen_magnification;
	s_mouseMaxX = maxX * s_screen_magnification;
	s_mouseMinY = minY * s_screen_magnification;
	s_mouseMaxY = maxY * s_screen_magnification;
}

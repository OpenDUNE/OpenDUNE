/* Mac OS X 10.4 CoreGraphics direct access video driver */

#if defined(__ALTIVEC__) && !defined(MAC_OS_X_VERSION_10_5)
/* to circumvent a bug in Mac OS X 10.4 SDK */
#define vector __vector
#include <CoreServices/CoreServices.h>
#undef vector
#endif
/* CoreGraphics is part of ApplicationServices FrameWork */
#include <ApplicationServices/ApplicationServices.h>
#include <Carbon/Carbon.h>

#include "types.h"
#include "video.h"
#include "video_fps.h"
#include "scalebit.h"

#include "../gfx.h"
#include "../input/input.h"
#include "../input/mouse.h"
#include "../os/error.h"

static CGDirectDisplayID s_display;

static int s_screen_magnification;
static VideoScaleFilter s_filter;
static long s_display_offset = 0;
static bool s_display_fps = false;

static uint8 * s_frame_buffer;

static int s_mousePosX = 0;
static int s_mousePosY = 0;
static bool s_mouseButtonLeft  = false;
static bool s_mouseButtonRight = false;

static uint16 s_mouse_minX = 0;
static uint16 s_mouse_maxX = SCREEN_WIDTH - 1;
static uint16 s_mouse_minY = 0;
static uint16 s_mouse_maxY = SCREEN_HEIGHT - 1;

/* Mac keyboard scancodes :
 * https://boredzo.org/blog/wp-content/uploads/2007/05/imtx-virtual-keycodes.png
 */
/* decimal Mac scancode :
  0 A   1 S   2 D   3 F   4 H   5 G   6 Z   7 X
  8 C   9 V  10 ?? 11 B  12 Q  13 W  14 E  15 R
 16 Y  17 T  18 1  19 2  20 3  21 4  22 6  23 5
 24 =  25 9  26 7  27 -_ 28 8  29 0  30 ]  31 O
 32 U  33 [  34 I  35 P  36 RT 37 L  38 J  39 '"
 40 K  41 ;: 42 ?? 43 <  44 /  45 N  46 M  47 >
 48 TB 49 SP 50 ~` 51 BS 52 ?? 53 ESC
 */
static uint8 OSX_TranslateKey(unsigned int msg)
{
#if 0
#define M(c, scan) { c, (uint8)scan }
static const struct {
	char c;
	uint8 scancode;
} s_table[] = {
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
	};
#undef M
#endif
	static const uint8 s_Mac_to_XT[] = {
		0x1E, 0x1F, 0x20, 0x21, 0x23, 0x22, 0x2C, 0x2D, /*  0 -  7 */
		0x2E, 0x2F,    0, 0x30, 0x10, 0x11, 0x12, 0x13, /*  8 - 15 */
		0x15, 0x14, 0x02, 0x03, 0x04, 0x05, 0x07, 0x06, /* 16 - 23 */
		0x0D, 0x0A, 0x08, 0x0C, 0x09, 0x0B, 0x1B, 0x18, /* 24 - 31 */
		0x16, 0x1A, 0x17, 0x19, 0x1C, 0x26, 0x24, 0x28, /* 32 - 39 */
		0x25, 0x27,    0, 0x33, 0x35, 0x31, 0x32, 0x34, /* 40 - 47 */
		0x0F, 0x39, 0x29, 0x0E,    0, 0x01              /* 48 - 53 */
	};
	unsigned int i;
	uint8 macScanCode = (uint8)(msg >> 8);

	switch(macScanCode) {
	case 122:	/* F1 */
		return 0x3B;
	case 120:	/* F2 */
		return 0x3C;
	case 99:	/* F3 */
		return 0x3D;
	case 118:	/* F4 */
		return 0x3E;
	case 96:	/* F5 */
		return 0x3F;
	case 97:	/* F6 */
		return 0x40;
	case 98:	/* F7 */
		return 0x41;
	case 100:	/* F8 */
		return 0x42;
	case 101:	/* F9 */
		return 0x43;
	case 109:	/* F10 */
		return 0x44;
	/* arrows / Num pad : */
	case 76:	/* return */
		return 0x1C;
	case 82:	/* 0 */
		return 0x52;
	case 83:	/* 1 */
		return 0x4F;
	case 125:	/* down */
	case 84:	/* 2 */
		return 0x50;
	case 85:	/* 3 */
		return 0x51;
	case 123:	/* left */
	case 86:	/* 4 */
		return 0x4B;
	case 87:	/* 5 */
		return 0x4C;
	case 124:	/* right */
	case 88:	/* 6 */
		return 0x4D;
	case 89:	/* 7 */
		return 0x47;
	case 126:	/* up */
	case 91:	/* 8 */
		return 0x48;
	case 92:	/* 9 */
		return 0x49;
	default:
		if (macScanCode < sizeof(s_Mac_to_XT)) return s_Mac_to_XT[macScanCode];
	}

#if 0
	for (i = 0; i < sizeof(s_table)/sizeof(s_table[0]); i++) {
		if (((unsigned int)s_table[i].c | 0x20) == ((msg & 0xFF) | 0x20)) return s_table[i].scancode;
	}
#endif
	Warning("Unrecognized key : %08x '%c'\n", (unsigned)msg, (msg & 0xff) >= 32 ? (int)(msg & 0xff) : '?');
	return 0;
}

static long CFDictionaryGetValueLong(CFDictionaryRef dict, CFStringRef key)
{
    long l;
    CFNumberRef number = (CFNumberRef)CFDictionaryGetValue(dict, key);
    if (number == NULL) return -1;
    if (!CFNumberGetValue(number, kCFNumberLongType, &l)) return -1;
    return l;
}

static CFDictionaryRef get_mode_same_refresh(CGDirectDisplayID display, long width, long height, int bpp, bool exact)
{
	static long s_best_diff = -1;
	long diff;
    CFArrayRef modes;
    CFIndex count, i;
    CFDictionaryRef current_mode = CGDisplayCurrentMode(display);
    CFNumberRef current_refresh_rate = (CFNumberRef)CFDictionaryGetValue(current_mode, kCGDisplayRefreshRate);

    modes = CGDisplayAvailableModes(display);
    count = CFArrayGetCount(modes);
    for (i = 0; i < count; i++) {
        CFDictionaryRef mode = CFArrayGetValueAtIndex(modes, i);
        CFNumberRef refresh_rate = (CFNumberRef)CFDictionaryGetValue(mode, kCGDisplayRefreshRate);
        if (CFEqual(refresh_rate, current_refresh_rate) && bpp == CFDictionaryGetValueLong(mode, kCGDisplayBitsPerPixel)) {
			Debug("Found mode %ldx%ld\n", CFDictionaryGetValueLong(mode, kCGDisplayWidth), CFDictionaryGetValueLong(mode, kCGDisplayHeight));
			if (width == CFDictionaryGetValueLong(mode, kCGDisplayWidth) &&
                height == CFDictionaryGetValueLong(mode, kCGDisplayHeight)) {
                return mode;
            } else if (width <= CFDictionaryGetValueLong(mode, kCGDisplayWidth) &&
			           height <= CFDictionaryGetValueLong(mode, kCGDisplayHeight)) {
				diff = CFDictionaryGetValueLong(mode, kCGDisplayHeight) * CFDictionaryGetValueLong(mode, kCGDisplayWidth) - width * height;
				if (!exact && diff == s_best_diff)
					return mode;
				if (s_best_diff < 0 || diff < s_best_diff) s_best_diff = diff;
			}
        }
    }
    return NULL;
}

bool Video_Init(int screen_magnification, VideoScaleFilter filter)
{
	CGError err;
	CFDictionaryRef new_mode;
	long width, height;
	void * base;
	size_t bpr;

	if (screen_magnification > 4) {
		Error("Maximum screen_magnification : 4\n");
		return false;
	}
	if (filter == FILTER_HQX) {
		Error("This version does not support HQX. Please rebuild from sources.\n");
		return false;
	}
	s_screen_magnification = screen_magnification;
	s_filter = filter;
	/*scale_set_options(SCALE2X_OPTION_NO_ALTIVEC);*/
	width = SCREEN_WIDTH * screen_magnification;
	switch (width) {
	case 640:
		height = 480;
		break;
	case 960:
		width = 1024;
		height = 768;
		break;
	case 1280:
		height = 1024;
		break;
	default:
		height = SCREEN_HEIGHT * screen_magnification;
	}

	s_display = kCGDirectMainDisplay;
	new_mode = get_mode_same_refresh(s_display, width, height, 8, true);
	Debug("Video_Init(%d, %d) wanted : %ldx%ld\n", screen_magnification, (int)filter, width, height);
	if (new_mode == NULL) {
		new_mode = get_mode_same_refresh(s_display, width, height, 8, false);
		if (new_mode == NULL) return false;
	}

    err = CGDisplayCapture(s_display);
    if(err != kCGErrorSuccess) {
		Error("CGDisplayCapture() failed.\n");
		return false;
	}
	CGDisplayHideCursor(s_display);
	CGAssociateMouseAndMouseCursorPosition(false);
	CGDisplaySwitchToMode(s_display, new_mode);
	bpr = CGDisplayBytesPerRow(s_display);
	base = CGDisplayBaseAddress(s_display);	/* allowed up to 10.5 */
	if (base != NULL) {
		CGRect bounds;

		bounds = CGDisplayBounds(s_display);
		width = (long)bounds.size.width;
		height = (long)bounds.size.height;
		memset(base, 0, height * bpr);
		s_display_offset = bpr * ((height - SCREEN_HEIGHT * screen_magnification) / 2);
		s_display_offset += ((width - SCREEN_WIDTH * screen_magnification) / 2);
	} else {
		CGDisplayShowCursor(s_display);
		CGDisplayRelease(s_display);
		Error("Cannot access to Video Memory\n");
		return false;
	}
	Debug("BytesPerRow = %lu display_offset=%ld\n", (unsigned long)bpr, s_display_offset);
	s_frame_buffer = malloc(SCREEN_WIDTH * SCREEN_HEIGHT);
	return true;
}

void Video_Uninit(void)
{
	CGDisplayShowCursor(s_display);
	CGDisplayRelease(s_display);
	free(s_frame_buffer);
	s_frame_buffer = NULL;
}

void Video_Tick(void)
{
	int max_event = 10;
	EventRecord event;
	int32_t x, y;
	unsigned top, bottom;
	uint8 * screen;
	size_t bytes_per_row;
	struct dirty_area * area;

	CGGetLastMouseDelta(&x, &y);
	if (x != 0 || y != 0) {
		/*Debug("mouse : delta(%d,%d) oldpos(%d,%d)\n", (int)x, (int)y, s_mousePosX, s_mousePosY);*/
		s_mousePosX += x;
		s_mousePosY += y;
		if (s_mousePosX < s_mouse_minX) s_mousePosX = s_mouse_minX;
		else if (s_mousePosX > s_mouse_maxX) s_mousePosX = s_mouse_maxX;
		if (s_mousePosY < s_mouse_minY) s_mousePosY = s_mouse_minY;
		else if (s_mousePosY > s_mouse_maxY) s_mousePosY = s_mouse_maxY;
		Mouse_EventHandler(s_mousePosX, s_mousePosY, s_mouseButtonLeft, s_mouseButtonRight);
	}
    while  (WaitNextEvent(everyEvent, &event, 0, NULL) && max_event-- > 0) {
		uint8 XT_scancode;
		Debug(" what=%04x message=%08x modifier=%04x where=(%d,%d)\n", event.what, event.message, event.modifiers, event.where.h, event.where.v);
		switch (event.what) {
			case mouseDown:
				/*Mouse_EventHandler(s_mousePosX, s_mousePosY, !(event.modifiers & optionKey), (event.modifiers & optionKey));*/
				Mouse_EventHandler(s_mousePosX, s_mousePosY, !(event.modifiers & cmdKey), (event.modifiers & cmdKey));
				break;
			case mouseUp:
				Mouse_EventHandler(s_mousePosX, s_mousePosY, false, false);
				break;
			case keyUp:
				XT_scancode = OSX_TranslateKey(event.message);
				if (XT_scancode != 0) Input_EventHandler(XT_scancode | 0x80);
				break;
			case keyDown:
				if (event.message == 0x6410) s_display_fps = !s_display_fps;	/* F8 */
				XT_scancode = OSX_TranslateKey(event.message);
				if (XT_scancode != 0) Input_EventHandler(XT_scancode);
				break;
		}
	}
	screen = CGDisplayBaseAddress(s_display);	/* allowed up to 10.5 */
	bytes_per_row = CGDisplayBytesPerRow(s_display);
	if (s_display_fps) Video_ShowFPS_2(screen, bytes_per_row, NULL);
	if (!GFX_Screen_IsDirty(SCREEN_0)) return;
	area = GFX_Screen_GetDirtyArea(SCREEN_0);
	screen += s_display_offset;
	if (area != NULL) {
		top = area->top;
		bottom = area->bottom;
	} else {
		top = 0;
		bottom = SCREEN_HEIGHT;
	}
	if (s_screen_magnification == 1)
	{
		unsigned int y;
		const uint8 * src = s_frame_buffer;
		src += top * SCREEN_WIDTH;
		screen += top * bytes_per_row;
		for (y = top; y < bottom; y++) {
			memcpy(screen, src, SCREEN_WIDTH);
			src += SCREEN_WIDTH;
			screen += bytes_per_row;
		}
	} else if (s_filter == FILTER_SCALE2X) {
		scale_part(s_screen_magnification, screen, bytes_per_row,
		           s_frame_buffer, SCREEN_WIDTH, 1, SCREEN_WIDTH, SCREEN_HEIGHT,
		           top, bottom);
	} else {
		unsigned int x, y;
		int i, j;
		const uint8 * data = s_frame_buffer;
		/* The non-optimized works-for-every-magnification method */
		for (y = top; y < bottom; y++) {
			for (x = 0; x < SCREEN_WIDTH; x++) {
				for (i = 0; i < s_screen_magnification; i++) {
					for (j = 0; j < s_screen_magnification; j++) {
						*(screen + bytes_per_row * j) = *data;
					}
					screen++;
				}
				data++;
			}
			screen += (bytes_per_row - SCREEN_WIDTH) * s_screen_magnification;
		}
	}
	GFX_Screen_SetClean(SCREEN_0);
}

void Video_SetPalette(void *palette, int from, int length)
{
	const uint8 * p;
	int i;
	CGDeviceColor color;
	CGDirectPaletteRef pal = CGPaletteCreateWithDisplay(s_display);
	p = (const uint8 *)palette;
	for (i=from; i < from + length ; i++) {
		color.red = (float)*p++ / 63.0f;
		color.green = (float)*p++ / 63.0f;
		color.blue = (float)*p++ / 63.0f;
		CGPaletteSetColorAtIndex(pal, color, i);
	}
	CGDisplaySetPalette(s_display, pal);
	CGPaletteRelease(pal);
}

void Video_Mouse_SetPosition(uint16 x, uint16 y)
{
	s_mousePosX = x;
	s_mousePosY = y;
}

void Video_Mouse_SetRegion(uint16 minX, uint16 maxX, uint16 minY, uint16 maxY)
{
	s_mouse_minX = minX;
	s_mouse_maxX = maxX;
	s_mouse_minY = minY;
	s_mouse_maxY = maxY;
}

void Video_SetOffset(uint16 offset)
{
	(void)offset;
}

void * Video_GetFrameBuffer(uint16 size)
{
	(void)size;
	return s_frame_buffer;
}

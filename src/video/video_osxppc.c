/* Mac OS X 10.4 CoreGraphics direct access video driver */

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
		Debug(" what=%04x message=%08x modifier=%04x where=(%d,%d)\n", event.what, event.message, event.modifiers, event.where.h, event.where.v);
		switch (event.what) {
			case mouseDown:
				Mouse_EventHandler(s_mousePosX, s_mousePosY, true, s_mouseButtonRight);
				break;
			case mouseUp:
				Mouse_EventHandler(s_mousePosX, s_mousePosY, false, s_mouseButtonRight);
				break;
			case keyUp:
				if (event.message == 0x0071) exit(2);
				Input_EventHandler(event.message >> 8 | 0x80);
				break;
			case keyDown:
				Input_EventHandler(event.message >> 8);
				/*printf("  scancode=$%02x char='%c'\n", event.message >> 8, (int)(event.message & 0xff));*/
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

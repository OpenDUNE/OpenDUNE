/** @file src/video/video_dos.c IBM PC VGA video driver */

#include <dpmi.h>
#include <pc.h>
#include <sys/nearptr.h>

#include "types.h"
#include "video.h"
#include "../gfx.h"
#include "../os/error.h"

/* mouse : */
static int s_mouse_x = SCREEN_WIDTH/2;
static int s_mouse_x_min = 0;
static int s_mouse_x_max = SCREEN_WIDTH-1;
static int s_mouse_y = SCREEN_HEIGHT/2;
static int s_mouse_y_min = 0;
static int s_mouse_y_max = SCREEN_HEIGHT-1;
static bool s_mouse_left_btn = false;
static bool s_mouse_right_btn = true;

bool Video_Init(int screen_magnification, VideoScaleFilter filter)
{
	__dpmi_regs r;
	(void)screen_magnification;
	(void)filter;

	/* enable access to 1st MB of memory */
	if (__djgpp_nearptr_enable() == 0) {
		Error("__djgpp_nearptr_enable() failed, cannot access VGA memory.\n");
		return false;
	}

	g_consoleActive = false;
	r.x.ax = 0x13;	/* MCGA 13h mode */
	__dpmi_int(0x10, &r);
	return true;
}

void Video_Uninit(void)
{
	__dpmi_regs r;

	__djgpp_nearptr_disable();
	r.x.ax = 0x03;	/* text mode */
	__dpmi_int(0x10, &r);
	g_consoleActive = true;
	return;
}

void Video_Tick(void)
{
}

void Video_SetPalette(void *palette, int from, int length)
{
	uint8 *p = palette;

	outportb(0x3C8, from);
	while(length > 0) {
		outportb(0x3C9, *p++);
		outportb(0x3C9, *p++);
		outportb(0x3C9, *p++);
		length--;
	}
}

void Video_Mouse_SetPosition(uint16 x, uint16 y)
{
	s_mouse_x = x;
	s_mouse_y = y;
}

void Video_Mouse_SetRegion(uint16 minX, uint16 maxX, uint16 minY, uint16 maxY)
{
	s_mouse_x_min = minX;
	s_mouse_x_max = maxX;
	s_mouse_y_min = minY;
	s_mouse_y_max = maxY;
}

void Video_SetOffset(uint16 offset)
{
	/* set Start Address High/Low VGA registers */
	outportb(0x3D4, 0x0C);
	outportb(0x3D5, offset >> 8);
	outportb(0x3D4, 0x0D);
	outportb(0x3D5, offset);
}

void * Video_GetFrameBuffer(uint16 size)
{
	(void)size;

	/* VGA frame buffer */
	return (void *)(0x000a0000 + __djgpp_conventional_base);
}

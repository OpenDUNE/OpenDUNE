/** @file src/video/video_dos.c IBM PC VGA video driver */

#if defined(__DJGPP__)
#include <dpmi.h>
#include <pc.h>
#include <sys/nearptr.h>
#endif /* __DJGPP__ */
#if defined(__WATCOMC__)
#include <i86.h>
#include <conio.h>
#include <string.h>
#define outportb outp
#define inportb inp
#endif /* __WATCOMC__ */

#include "types.h"
#include "video.h"
#include "../gfx.h"
#include "../input/input.h"
#include "../input/mouse.h"
#include "../os/error.h"

/* data for mouse callback */

static struct callback_data {
	int mouse_event;
	uint16 mouse_code;
	uint16 mouse_buttons;
	uint16 mouse_x_pos;
	uint16 mouse_y_pos;
	int16 mouse_x_diff;
	int16 mouse_y_diff;
} s_cbd = { 0 };

static uint8 s_old_bios_mode = 3;

#if defined(__WATCOMC__)
#pragma off(check_stack)
void _loadds far mouse_handler(int max, int mbx, int mcx, int mdx, int msi, int mdi)
{
#pragma aux mouse_handler parm [EAX] [EBX] [ECX] [EDX] [ESI] [EDI]
	/* AX = condition mask
	 * CX = X cursor pos
	 * DX = Y cursor pos
	 * DI = X counts
	 * SI = Y counts
	 * BX = button state */
	s_cbd.mouse_event++;
	s_cbd.mouse_code = max;
	s_cbd.mouse_buttons = mbx;
	s_cbd.mouse_x_pos = mcx;
	s_cbd.mouse_y_pos = mdx;
	s_cbd.mouse_x_diff = mdi;
	s_cbd.mouse_y_diff = msi;
}
#pragma on(check_stack)
#endif /* __WATCOMC__ */

bool Video_Init(int screen_magnification, VideoScaleFilter filter)
{
#if defined(__DJGPP__)
	__dpmi_regs r;
#elif defined(__WATCOMC__)
	union REGS r;
#endif /* __WATCOMC__ */
	(void)screen_magnification;
	(void)filter;

#if defined(__DJGPP__)
	/* enable access to 1st MB of memory */
	if (__djgpp_nearptr_enable() == 0) {
		Error("__djgpp_nearptr_enable() failed, cannot access VGA memory.\n");
		return false;
	}
#endif /* __DJGPP__ */

#if defined(__DJGPP__)
	g_consoleActive = false;
	r.x.ax = 0x13;	/* MCGA 13h mode */
	__dpmi_int(0x10, &r);
#elif defined(__WATCOMC__)
	/* check for the mouse */
	r.w.ax = 0;
	int386(0x33, &r, &r);
	if(r.w.ax != 0xffff) {
		Error("Mouse not available!\n");
		return false;
	}
	Debug("Mouse with %d buttons.\n", (int)r.w.bx);
	{
		struct SREGS sregs;
		void (far *callback_ptr)();

		segread(&sregs);
		/* Install mouse callback */
		r.w.ax = 0x0C;
		r.w.cx = 0x001F; /* mask : position change + buttons presses and releases */
		callback_ptr = (void (far *)(void))mouse_handler;
		r.x.edx = FP_OFF(callback_ptr);
		sregs.es = FP_SEG(callback_ptr);
		int386x(0x33, &r, &r, &sregs);
	}
	g_consoleActive = false;
	r.w.ax = 0x0f00;
	int386(0x10, &r, &r);
	s_old_bios_mode = r.h.al;
	r.w.ax = 0x13;
	int386(0x10, &r, &r);
#endif
	return true;
}

void Video_Uninit(void)
{
#if defined(__DJGPP__)
	__dpmi_regs r;
#elif defined(__WATCOMC__)
	union REGS r;
#endif /* __WATCOMC__ */

#if defined(__DJGPP__)
	__djgpp_nearptr_disable();
	r.x.ax = s_old_bios_mode;
	__dpmi_int(0x10, &r);
#elif defined(__WATCOMC__)
	/* reset the mouse */
	r.w.ax = 0;
	int386(0x33, &r, &r);
	/* restore video mode */
	r.h.ah = 0;
	r.h.al = s_old_bios_mode;
	int386(0x10, &r, &r);
#endif
	g_consoleActive = true;
	return;
}

#if defined (__WATCOMC__)
/* use int16h ah=11h to get status,
 * then int16h ah=10h to consume the keycode */
int get_bios_keyboard_status(void);
#pragma aux get_bios_keyboard_status = \
	"mov ah,11h"                   \
	"int 16h"                      \
	"mov eax,0"                    \
	"jz ok"                        \
	"mov ah,10h"                   \
	"int 16h"                      \
	"ok:"                          \
	value [eax];
#endif

void Video_Tick(void)
{
#if defined(__DJGPP__)
	__dpmi_regs r;
#elif defined(__WATCOMC__)
	union REGS r;
#endif /* __WATCOMC__ */

	if (s_cbd.mouse_event) {
		Debug("Mouse %d pos=(%3d,%3d) diff=(%3d,%3d) buttons=0x%02x code0x%04x\n",
		      s_cbd.mouse_event, s_cbd.mouse_x_pos, s_cbd.mouse_y_pos,
		      s_cbd.mouse_x_diff, s_cbd.mouse_y_diff, s_cbd.mouse_buttons,
		      s_cbd.mouse_code);
		s_cbd.mouse_event = 0;
		Mouse_EventHandler(s_cbd.mouse_x_pos, s_cbd.mouse_y_pos,
		                   s_cbd.mouse_buttons & 1, s_cbd.mouse_buttons & 2);
	}

#if defined(__DJGPP__)
#elif defined(__WATCOMC__)
	for (;;) {
		int status = get_bios_keyboard_status();
		if (status == 0) {
			break;
		} else {
			Input_EventHandler(status >> 8);
		}
	}
#endif
}

void Video_SetPalette(void *palette, int from, int length)
{
	uint8 *p = palette;

	outportb(0x3C8, from);
	while (length > 0) {
		outportb(0x3C9, *p++);
		outportb(0x3C9, *p++);
		outportb(0x3C9, *p++);
		length--;
	}
}

void Video_Mouse_SetPosition(uint16 x, uint16 y)
{
#if defined(__DJGPP__)
	__dpmi_regs r;
#elif defined(__WATCOMC__)
	union REGS r;
#endif /* __WATCOMC__ */

#if defined(__DJGPP__)
	r.x.ax = 0x04;
	r.x.cx = x;
	r.x.dx = y;
	__dpmi_int(0x33, &r);
#elif defined(__WATCOMC__)
	r.w.ax = 0x04;
	r.w.cx = x;
	r.w.dx = y;
	int386(0x33, &r, &r);
#endif
}

void Video_Mouse_SetRegion(uint16 minX, uint16 maxX, uint16 minY, uint16 maxY)
{
#if defined(__DJGPP__)
	__dpmi_regs r;
#elif defined(__WATCOMC__)
	union REGS r;
#endif /* __WATCOMC__ */

#if defined(__DJGPP__)
	r.x.ax = 0x07;
	r.x.cx = minX;
	r.x.dx = maxX;
	__dpmi_int(0x33, &r);
	r.x.ax = 0x08;
	r.x.cx = minY;
	r.x.dx = maxY;
	__dpmi_int(0x33, &r);
#elif defined(__WATCOMC__)
	r.w.ax = 0x07;
	r.w.cx = minX;
	r.w.dx = maxX;
	int386(0x33, &r, &r);
	r.w.ax = 0x08;
	r.w.cx = minY;
	r.w.dx = maxY;
	int386(0x33, &r, &r);
#endif
}

void Video_SetOffset(uint16 offset)
{
	/* wait until any previous retrace has ended */
	do {
	} while (inportb(0x3DA) & 8);
	/* wait until a new retrace has just begun */
	do {
	} while (!(inportb(0x3DA) & 8));

	/* set Start Address High/Low VGA registers */
	outportb(0x3D4, 0x0C);
	outportb(0x3D5, offset >> 8);
	outportb(0x3D4, 0x0D);
	outportb(0x3D5, offset);

	/* wait until any previous retrace has ended */
	do {
	} while (inportb(0x3DA) & 8);
	/* wait until a new retrace has just begun */
	do {
	} while (!(inportb(0x3DA) & 8));
}

void * Video_GetFrameBuffer(uint16 size)
{
	(void)size;

	/* VGA frame buffer */
#if defined(__DJGPP__)
	return (void *)(0x000a0000 + __djgpp_conventional_base);
#else
	return (void *)(0x000a0000);
#endif
}

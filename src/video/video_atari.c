/* ATARI Falcon / TT Video Driver */

#include <string.h>

#include <mint/sysbind.h>
#include <mint/osbind.h>
#include <mint/ostruct.h>
#include <mint/falcon.h>

#include "types.h"
#include "video.h"
#include "../gfx.h"
#include "../input/input.h"
#include "../input/mouse.h"

/* ATARI IKBD doc : https://www.kernel.org/doc/Documentation/input/atarikbd.txt */

/* chunky to planar routine : */
extern void c2p1x1_8_falcon(void * planar, void * chunky, uint32 count);

static short s_savedmode = 0;

static void Mouse_Handler(char * ikbd_packet)
{
	/* The relative mouse position record is a three byte record of the form
(regardless of keyboard mode):
    %111110xy           ; mouse position record flag
                        ; where y is the right button state
                        ; and x is the left button state
    X                   ; delta x as twos complement integer
    Y                   ; delta y as twos complement integer
	*/
	static int x = 160;
	static int y = 100;
	x += (int)ikbd_packet[1];
	y += (int)ikbd_packet[2];
	Mouse_EventHandler(x, y,
	                   ikbd_packet[0]&2 /*left*/, ikbd_packet[0]&1 /*right*/);
}

/**
 * Initialize the video driver.
 */
bool Video_Init(int screen_magnification, VideoScaleFilter filter)
{
	_PARAM mouseparam;
	VARIABLE_NOT_USED(filter);
	VARIABLE_NOT_USED(screen_magnification);

	(void)Cconws("Video_Init()\r\n");
	(void)Cursconf(0, 0);	/* switch cursor Off */
	s_savedmode = VsetMode(VM_INQUIRE);	/* get current mode */
	(void)VsetMode((s_savedmode & ~15)  | BPS8 | COL40);	/*  8 planes 256 colours + 40 columns */

	memset(&mouseparam, 0, sizeof(mouseparam));
	mouseparam.xmax = SCREEN_WIDTH - 1;
	mouseparam.ymax = SCREEN_HEIGHT - 1;
	mouseparam.xstart = SCREEN_WIDTH / 2;
	mouseparam.ystart = SCREEN_HEIGHT / 2;
	/* 1 = relative mode, 2 = absolute mode */
	Initmouse(1, &mouseparam, Mouse_Handler);
	return true;
}

/**
 * Uninitialize the video driver.
 */
void Video_Uninit(void)
{
	(void)VsetMode(s_savedmode);
	(void)Cursconf(1, 0);	/* switch cursor On */
}

/**
 * Runs every tick to handle video driver updates.
 */
void Video_Tick(void)
{
	uint8 *screen = Physbase();
	uint8 *data = GFX_Screen_Get_ByIndex(SCREEN_0);

	/* handle keyboard input */
	while(Cconis() != 0) {
		uint8 scancode;
		/*int32 in = Cnecin();*/	/* same as Cconin(); with no echo */
		int32 in = Crawcin();
		scancode = (in >> 16) & 0x7f;
		/* TODO : scancode translation from ATARI to PC */
		if(scancode != 0) {
			Input_EventHandler(scancode);	/* keydown */
			Input_EventHandler(scancode | 0x80);	/* keyup */
		}
	}

	/* chunky to planar conversion */
	c2p1x1_8_falcon(screen, data, SCREEN_HEIGHT*SCREEN_WIDTH);
	/*memcpy(screen, data, SCREEN_HEIGHT*SCREEN_WIDTH);*/
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
	uint8 falconpal[256*4];
	int i;

	for(i = 0; i < length; i++) {
		falconpal[i*4+0] = 0;
		falconpal[i*4+1] = *p++ << 2; /* R */
		falconpal[i*4+2] = *p++ << 2; /* G */
		falconpal[i*4+3] = *p++ << 2; /* B */
	}

	VsetRGB(from, length, falconpal);
}

/**
 * Set the current position of the mouse.
 * @param x The new X-position of the mouse.
 * @param y The new Y-position of the mouse.
 */
void Video_Mouse_SetPosition(uint16 x, uint16 y)
{
	VARIABLE_NOT_USED(x);
	VARIABLE_NOT_USED(y);
}

void Video_Mouse_SetRegion(uint16 minX, uint16 maxX, uint16 minY, uint16 maxY)
{
	VARIABLE_NOT_USED(minX); VARIABLE_NOT_USED(maxX);
	VARIABLE_NOT_USED(minY); VARIABLE_NOT_USED(maxY);
}

/*
 * change the screen offset, equivalent to changing the
 * Start Address Register on a VGA card.
 * VGA Hardware has 4 "maps" of 64kB.
 * @param offset The address granularity is 4bytes
 */
void Video_SetOffset(uint16 offset)
{
	/* TODO */
	VARIABLE_NOT_USED(offset);
}

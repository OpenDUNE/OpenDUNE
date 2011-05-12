/* $Id$ */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "types.h"
#include "libemu.h"
#include "global.h"
#include "file.h"
#include "tools.h"
#include "wsa.h"
#include "gfx.h"

/**
 * Decompiled function emu_WSA_LoadFile()
 *
 * @name emu_WSA_LoadFile
 * @implements B52A:0000:0019:1617 ()
 */
void emu_WSA_LoadFile()
{
	csip32 filenamecsip;
	csip32 buffer;
	uint32 bufferSizeCurrent;
	uint16 reserveDisplayFrame;
	csip32 bufferSpecial;

	char *filename;

	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	filenamecsip = emu_get_csip32(emu_ss, emu_sp, 0x0);
	buffer = emu_get_csip32(emu_ss, emu_sp, 0x4);
	bufferSizeCurrent = emu_get_memory32(emu_ss, emu_sp, 0x8);
	reserveDisplayFrame = emu_get_memory16(emu_ss, emu_sp, 0xC);
	bufferSpecial = emu_get_csip32(emu_ss, emu_sp, 0xE);

	filename = (char *)emu_get_memorycsip(filenamecsip);

	buffer = WSA_LoadFile(filename, buffer, bufferSizeCurrent, reserveDisplayFrame, bufferSpecial);
	emu_dx = buffer.s.cs;
	emu_ax = buffer.s.ip;
}

/**
 * Decompiled function emu_WSA_Unload()
 *
 * @name emu_WSA_Unload
 * @implements B52A:0476:0030:9D41 ()
 */
void emu_WSA_Unload()
{
	csip32 buffer;

	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	buffer = emu_get_csip32(emu_ss, emu_sp, 0x0);

	WSA_Unload(buffer);
}

/**
 * Decompiled function emu_WSA_DisplayFrame()
 *
 * @name emu_WSA_DisplayFrame
 * @implements B52A:04AC:0033:548A ()
 */
void emu_WSA_DisplayFrame()
{
	csip32 buffer;
	uint16 frameNext;
	uint16 posX;
	uint16 posY;
	uint16 memoryBlock;
	uint16 unknown;

	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	buffer      = emu_get_csip32(emu_ss, emu_sp, 0x0);
	frameNext   = emu_get_memory16(emu_ss, emu_sp, 0x4);
	posX        = emu_get_memory16(emu_ss, emu_sp, 0x6);
	posY        = emu_get_memory16(emu_ss, emu_sp, 0x8);
	memoryBlock = emu_get_memory16(emu_ss, emu_sp, 0xA);
	unknown     = emu_get_memory16(emu_ss, emu_sp, 0xC);

	emu_ax = WSA_DisplayFrame(buffer, frameNext, posX, posY, memoryBlock);
}

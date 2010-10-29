/* $Id$ */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "types.h"
#include "libemu.h"
#include "global.h"
#include "codec/format80.h"
#include "file.h"
#include "tools.h"
#include "wsa.h"

extern void f__23E1_0334_000B_CF65();
extern void f__28E6_000A_0040_D751();
extern void f__2AE1_00B7_0014_51EF();
extern void f__2AE1_029F_0014_50E5();
extern void emu_Tools_Malloc();
extern void emu_Tools_Free();
extern void emu_Memory_GetBlock2();


/**
 * Emulator wrapper around WSA_GetFrameCount()
 *
 * @name emu_WSA_GetFrameCount
 * @implements B52A:06F6:0012:197D ()
 */
void emu_WSA_GetFrameCount()
{
	csip32 buffer;

	WSAHeader *header;

	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	buffer = emu_get_csip32(emu_ss, emu_sp, 0x0);

	emu_ax = 0;
	if (buffer.csip == 0) return;
	header = (WSAHeader *)emu_get_memorycsip(buffer);

	emu_ax = WSA_GetFrameCount(header);
	return;
}




static uint32 csip32_add(csip32 csip, uint32 add) {
	csip.s.cs += add >> 4;
	csip.s.ip += add & 0xF;
	return csip.csip;
}


/**
 * Decompiled function emu_WSA_GetFramePosition_FromMemory()
 *
 * @name emu_WSA_GetFramePosition_FromMemory
 * @implements B52A:07CD:003B:4734 ()
 */
void emu_WSA_GetFramePosition_FromMemory()
{
	csip32 buffer;
	uint16 position;

	uint32 *animationPositions;
	uint32 firstFrameSize;
	uint32 ret;

	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	buffer = emu_get_csip32(emu_ss, emu_sp, 0x0);
	position = emu_get_memory16(emu_ss, emu_sp, 0x4);

	firstFrameSize = 0;
	ret = 0;

	animationPositions = (uint32 *)emu_get_memorycsip(buffer);
	if (animationPositions[position] == 0) {
		emu_ax = 0;
		emu_dx = 0;
		return /* 0 */;
	}

	if (animationPositions[0] != 0) {
		firstFrameSize = animationPositions[1] - animationPositions[0];
	}

	ret = animationPositions[position] - firstFrameSize - 10;

	emu_dx = ret >> 16;
	emu_ax = ret & 0xFFFF;
	return /* ret */;
}

/**
 * Decompiled function emu_WSA_GetFramePosition_FromDisk()
 *
 * @name emu_WSA_GetFramePosition_FromDisk
 * @implements B52A:0850:0021:2409 ()
 */
void emu_WSA_GetFramePosition_FromDisk()
{
	uint16 fileno;
	uint16 position;
	uint16 offset;

	uint32 length;

	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	fileno = emu_get_memory16(emu_ss, emu_sp, 0x0);
	position = emu_get_memory16(emu_ss, emu_sp, 0x2);
	offset = emu_get_memory16(emu_ss, emu_sp, 0x4);

	File_Seek(fileno, position * 4 + 10, 0);
	if (File_Read(fileno, &length, 4) != 4) length = 0;

	emu_dx = (length + offset) >> 16;
	emu_ax = (length + offset) & 0xFFFF;
	return;
}

/**
 * Decompiled function emu_WSA_GotoNextFrame()
 *
 * @name emu_WSA_GotoNextFrame
 * @implements B52A:08B3:001B:1BB9 ()
 */
void emu_WSA_GotoNextFrame()
{
	csip32 headercsip;
	uint16 frame;
	csip32 buffer;

	WSAHeader *header;

	uint16 loc0A;
	csip32 dest;

	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	headercsip = emu_get_csip32(emu_ss, emu_sp, 0x0);
	frame = emu_get_memory16(emu_ss, emu_sp, 0x4);
	buffer = emu_get_csip32(emu_ss, emu_sp, 0x6);

	header = (WSAHeader *)emu_get_memorycsip(headercsip);

	loc0A = 0;
	if (header->flags.s.isSpecial) {
		loc0A = 0x300;
	}

	dest.csip = header->buffer.csip;

	if (header->flags.s.dataInMemory) {
		uint32 positionStart;
		uint32 positionEnd;
		uint32 length;
		csip32 positionFrame;

		emu_push(frame);
		emu_push(header->fileContent.s.cs); emu_push(header->fileContent.s.ip);
		emu_push(emu_cs); emu_push(0x0902); emu_WSA_GetFramePosition_FromMemory();
		emu_sp += 6;

		positionStart = (emu_dx << 16) + emu_ax;

		emu_push(frame + 1);
		emu_push(header->fileContent.s.cs); emu_push(header->fileContent.s.ip);
		emu_push(emu_cs); emu_push(0x091E); emu_WSA_GetFramePosition_FromMemory();
		emu_sp += 6;

		positionEnd = (emu_dx << 16) + emu_ax;
		length = positionEnd - positionStart;

		positionFrame.csip = csip32_add(header->fileContent, positionStart);
		dest.csip = csip32_add(dest, header->bufferLength - length);

		emu_push(length >> 16); emu_push(length & 0xFFFF);
		emu_push(dest.s.cs); emu_push(dest.s.ip);
		emu_push(positionFrame.s.cs); emu_push(positionFrame.s.ip);
		emu_push(emu_cs); emu_push(0x0986); emu_cs = 0x2B0E; emu_Tools_Memmove();
		emu_sp += 12;
	} else if (header->flags.s.dataOnDisk) {
		uint16 fileno;
		uint32 positionStart;
		uint32 positionEnd;
		uint32 length;
		uint32 res;

		fileno = File_Open(header->filename, 1);

		emu_push(loc0A);
		emu_push(frame);
		emu_push(fileno);
		emu_push(emu_cs); emu_push(0x09BB); emu_WSA_GetFramePosition_FromDisk();
		emu_sp += 6;

		positionStart = (emu_dx << 16) + emu_ax;

		emu_push(loc0A);
		emu_push(frame + 1);
		emu_push(fileno);
		emu_push(emu_cs); emu_push(0x09D0); emu_WSA_GetFramePosition_FromDisk();
		emu_sp += 6;

		positionEnd = (emu_dx << 16) + emu_ax;
		length = positionEnd - positionStart;

		if (positionStart == 0 || positionEnd == 0 || length == 0) {
			File_Close(fileno);
			emu_ax = 0;
			return /* 0 */;
		}

		File_Seek(fileno, positionStart, 0);

		dest.csip = csip32_add(dest, header->bufferLength - length);

		res = File_Read(fileno, emu_get_memorycsip(dest), length);
		File_Close(fileno);

		if (res != length) {
			emu_ax = 0;
			return /* 0 */;
		}
	}

	Format80_Decode(emu_get_memorycsip(dest), emu_get_memorycsip(header->buffer), header->bufferLength);

	if (header->flags.s.displayInBuffer) {
		emu_push(header->buffer.s.cs); emu_push(header->buffer.s.ip);
		emu_push(buffer.s.cs); emu_push(buffer.s.ip);
		emu_push(emu_cs); emu_push(0x0A9A); emu_cs = 0x2AE1; f__2AE1_00B7_0014_51EF();
		emu_sp += 8;
	} else {
		emu_push(0);
		emu_push(header->width);
		emu_push(header->buffer.s.cs); emu_push(header->buffer.s.ip);
		emu_push(buffer.s.cs); emu_push(buffer.s.ip);
		emu_push(emu_cs); emu_push(0x0ABF); emu_cs = 0x2AE1; f__2AE1_029F_0014_50E5();
		emu_sp += 12;
	}

	emu_ax = 1;
	return /* 1 */;
}

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

	WSAFlags flags;
	WSAFileHeader fileheader;
	WSAHeader *header;
	uint32 bufferSizeMinimal;
	uint32 bufferSizeOptimal;
	uint16 lengthHeader;
	uint16 fileno;
	uint16 offsetSpecial;
	uint16 offsetAnimation;
	uint32 lengthFileContent;
	uint32 displaySize;
	csip32 b;

	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	filenamecsip = emu_get_csip32(emu_ss, emu_sp, 0x0);
	buffer = emu_get_csip32(emu_ss, emu_sp, 0x4);
	bufferSizeCurrent = emu_get_memory32(emu_ss, emu_sp, 0x8);
	reserveDisplayFrame = emu_get_memory16(emu_ss, emu_sp, 0xC);
	bufferSpecial = emu_get_csip32(emu_ss, emu_sp, 0xE);

	filename = (char *)emu_get_memorycsip(filenamecsip);

	flags.all = 0;

	fileno = File_Open(filename, 1);
	File_Read(fileno, &fileheader, sizeof(WSAFileHeader));

	offsetSpecial = 0;
	if (fileheader.isSpecial) {
		flags.s.isSpecial = true;

		offsetSpecial = 0x300;
		if (bufferSpecial.csip != 0) {
			File_Seek(fileno, fileheader.frames * 4, 1);
			File_Read(fileno, emu_get_memorycsip(bufferSpecial), 0x300);
		}
	}

	lengthFileContent = File_Seek(fileno, 0, 2);

	offsetAnimation = 0;
	if (fileheader.animationOffsetStart != 0) {
		offsetAnimation = fileheader.animationOffsetEnd - fileheader.animationOffsetStart;
	} else {
		flags.s.variable_0040 = true;
	}

	lengthFileContent -= offsetSpecial + offsetAnimation + 10;

	displaySize = 0;
	if (reserveDisplayFrame) {
		flags.s.displayInBuffer = true;
		displaySize = fileheader.width * fileheader.height;
	}

	bufferSizeMinimal = displaySize + fileheader.requiredBufferSize;
	bufferSizeOptimal = bufferSizeMinimal + lengthFileContent;

	if (bufferSizeCurrent > 1 && bufferSizeCurrent < bufferSizeMinimal) {
		File_Close(fileno);

		emu_ax = 0;
		emu_dx = 0;
		return /* 0 */;
	}

	if (buffer.csip == 0) {
		uint32 free;

		if (bufferSizeCurrent == 0) {
			bufferSizeCurrent = bufferSizeOptimal;
		} else if (bufferSizeCurrent == 1) {
			bufferSizeCurrent = bufferSizeMinimal;
		} else if (bufferSizeCurrent >= bufferSizeOptimal) {
			bufferSizeCurrent = bufferSizeOptimal;
		} else {
			bufferSizeCurrent = bufferSizeMinimal;
		}

		emu_push(emu_cs); emu_push(0x0); f__23E1_0334_000B_CF65();
		free = (emu_dx << 16) + emu_ax;
		if (free < bufferSizeCurrent) {
			if (free < bufferSizeMinimal) {
				File_Close(fileno);

				emu_ax = 0;
				emu_dx = 0;
				return /* 0 */;
			}
			bufferSizeCurrent = bufferSizeMinimal;
		}

		emu_push(0x30);
		emu_push(bufferSizeCurrent >> 16); emu_push(bufferSizeCurrent & 0xFFFF);
		emu_push(emu_cs); emu_push(0x0); emu_Tools_Malloc();
		emu_sp += 6;

		buffer.s.cs = emu_dx;
		buffer.s.ip = emu_ax;

		flags.s.malloced = true;
	} else {
		flags.s.notmalloced = true;
	}

	header = (WSAHeader *)emu_get_memorycsip(buffer);
	b.csip = csip32_add(buffer, sizeof(WSAHeader));

	header->flags.all = flags.all;

	if (reserveDisplayFrame) {
		memset(emu_get_memorycsip(b), 0, displaySize);
	}

	b.csip = csip32_add(b, displaySize);

	if ((fileheader.frames & 0x8000) != 0) {
		header->flags.s.variable_0080 = true;
		fileheader.frames &= 0x7FFF;
	}

	header->frameCurrent = fileheader.frames;
	header->frames = fileheader.frames;
	header->width = fileheader.width;
	header->height = fileheader.height;
	header->bufferLength = fileheader.requiredBufferSize - sizeof(WSAHeader);
	header->buffer.csip = b.csip;
	strcpy(header->filename, filename);

	lengthHeader = (fileheader.frames + 2) * 4;

	if (bufferSizeCurrent >= bufferSizeOptimal) {
		header->fileContent.csip = csip32_add(b, header->bufferLength);

		File_Seek(fileno, 10, 0);
		File_Read(fileno, emu_get_memorycsip(header->fileContent), lengthHeader);
		File_Seek(fileno, offsetAnimation + offsetSpecial, 1);
		File_Read(fileno, emu_get_memorycsip(header->fileContent) + lengthHeader, lengthFileContent - lengthHeader);

		emu_push(header->frames + 1);
		emu_push(header->fileContent.s.cs); emu_push(header->fileContent.s.ip);
		emu_push(emu_cs); emu_push(0x03BC); emu_WSA_GetFramePosition_FromMemory();
		emu_sp += 6;

		header->flags.s.dataInMemory = true;
		if (emu_ax == 0) header->flags.s.variable_0020 = true;
	} else {
		emu_push(offsetSpecial);
		emu_push(header->frames + 1);
		emu_push(fileno);
		emu_push(emu_cs); emu_push(0x03DF); emu_WSA_GetFramePosition_FromDisk();
		emu_sp += 6;

		header->flags.s.dataOnDisk = true;
		if (emu_ax == 0) header->flags.s.variable_0020 = true;
	}

	{
		csip32 loc28;
		loc28.csip = csip32_add(b, header->bufferLength - offsetAnimation);

		File_Seek(fileno, lengthHeader + offsetSpecial + 10, 0);
		File_Read(fileno, emu_get_memorycsip(loc28), offsetAnimation);
		File_Close(fileno);

		Format80_Decode(emu_get_memorycsip(loc28), emu_get_memorycsip(b), header->bufferLength);
	}

	emu_dx = buffer.s.cs;
	emu_ax = buffer.s.ip;
	return /* buffer */;
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
	WSAHeader *header;

	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	buffer = emu_get_csip32(emu_ss, emu_sp, 0x0);

	if (buffer.csip == 0) return;

	header = (WSAHeader *)emu_get_memorycsip(buffer);

	if (!header->flags.s.malloced) return;

	emu_push(buffer.s.cs); emu_push(buffer.s.ip);
	emu_push(emu_cs); emu_push(0x04A6); emu_cs = 0x23E1; emu_Tools_Free();
	emu_sp += 4;
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
	uint16 var12;

	WSAHeader *header;
	csip32 displayBuffer;

	int16 frameDiff;
	int16 direction;
	int16 frameCount;

	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	buffer = emu_get_csip32(emu_ss, emu_sp, 0x0);
	frameNext = emu_get_memory16(emu_ss, emu_sp, 0x4);
	posX = emu_get_memory16(emu_ss, emu_sp, 0x6);
	posY = emu_get_memory16(emu_ss, emu_sp, 0x8);
	memoryBlock = emu_get_memory16(emu_ss, emu_sp, 0xA);
	var12 = emu_get_memory16(emu_ss, emu_sp, 0xC);

	if (buffer.csip == 0) {
		emu_ax = 0;
		return /* 0 */;
	}

	header = (WSAHeader *)emu_get_memorycsip(buffer);

	if (frameNext >= header->frames) {
		emu_ax = 0;
		return /* 0 */;
	}

	if (header->flags.s.displayInBuffer) {
		displayBuffer.csip = csip32_add(buffer, 33);
	} else {
		emu_push(memoryBlock);
		emu_push(emu_cs); emu_push(0x0527); emu_cs = 0x252E; emu_Memory_GetBlock2();
		emu_sp += 2;

		displayBuffer.s.cs = emu_dx;
		displayBuffer.s.ip = emu_ax;
		displayBuffer.s.ip += posX + posY * 320; /* XXX -- 320 is of course screen width, but it is hardcoded! */
	}

	if (header->frameCurrent == header->frames) {
		if (!header->flags.s.variable_0040) {
			if (!header->flags.s.displayInBuffer) {
				emu_push(1);
				emu_push(header->width);
				emu_push(header->buffer.s.cs); emu_push(header->buffer.s.ip);
				emu_push(displayBuffer.s.cs); emu_push(displayBuffer.s.ip);
				emu_push(emu_cs); emu_push(0x057E); emu_cs = 0x2AE1; f__2AE1_029F_0014_50E5();
				emu_sp += 12;
			} else {
				emu_push(header->buffer.s.cs); emu_push(header->buffer.s.ip);
				emu_push(displayBuffer.s.cs); emu_push(displayBuffer.s.ip);
				emu_push(emu_cs); emu_push(0x0599); emu_cs = 0x2AE1; f__2AE1_00B7_0014_51EF();
				emu_sp += 8;
			}
		}

		header->frameCurrent = 0;
	}

	frameDiff = abs(header->frameCurrent - frameNext);
	direction = 1;

	if (frameNext > header->frameCurrent) {
		frameCount = header->frames - frameNext + header->frameCurrent;

		if (frameCount < frameDiff && !header->flags.s.variable_0020) {
			direction = -1;
		} else {
			frameCount = frameDiff;
		}
	} else {
		frameCount = header->frames - header->frameCurrent + frameNext;

		if (frameCount < frameDiff && !header->flags.s.variable_0020) {
		} else {
			direction = -1;
			frameCount = frameDiff;
		}
	}

	if (direction > 0) {
		uint16 i;
		uint16 frame = header->frameCurrent;

		for (i = 0; i < frameCount; i++) {
			frame += direction;

			emu_push(displayBuffer.s.cs); emu_push(displayBuffer.s.ip);
			emu_push(frame);
			emu_push(buffer.s.cs); emu_push(buffer.s.ip);
			emu_push(emu_cs); emu_push(0x063E); emu_WSA_GotoNextFrame();
			emu_sp += 10;

			if (frame == header->frames) frame = 0;
		}
	} else {
		uint16 i;
		uint16 frame = header->frameCurrent;

		for (i = 0; i < frameCount; i++) {
			if (frame == 0) frame = header->frames;

			emu_push(displayBuffer.s.cs); emu_push(displayBuffer.s.ip);
			emu_push(frame);
			emu_push(buffer.s.cs); emu_push(buffer.s.ip);
			emu_push(emu_cs); emu_push(0x0675); emu_WSA_GotoNextFrame();
			emu_sp += 10;

			frame += direction;
		}
	}

	header->frameCurrent = frameNext;

	if (header->flags.s.displayInBuffer) {
		uint16 oldMemoryBlock = g_global->variable_6C91;
		g_global->variable_6C91 = memoryBlock;

		emu_push((var12 & 0xFF00) >> 14);
		emu_push(displayBuffer.s.cs); emu_push(displayBuffer.s.ip);
		emu_push(var12 & 0x00FF);
		emu_push(0);
		emu_push(header->height); emu_push(header->width);
		emu_push(posY); emu_push(posX);
		emu_push(emu_cs); emu_push(0x06E1); emu_cs = 0x28E6; f__28E6_000A_0040_D751();
		emu_sp += 18;

		g_global->variable_6C91 = oldMemoryBlock;
	}

	emu_ax = 1;
	return /* 1 */;
}

/* $Id$ */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "types.h"
#include "libemu.h"
#include "global.h"
#include "codec/format40.h"
#include "codec/format80.h"
#include "file.h"
#include "tools.h"
#include "gfx.h"
#include "wsa.h"
#include "os/math.h"
#include "unknown/unknown.h"

extern void f__2AE1_029F_0014_50E5();
extern void emu_Tools_Free();

/**
 * Get the amount of frames a WSA has.
 */
uint16 WSA_GetFrameCount(WSAHeader *header)
{
	return header->frames;
}

/**
 * Get the offset in the fileContent which stores the animation data for a
 *  given frame.
 * @param header The header of the WSA.
 * @param frame The frame of animation.
 * @return The offset for the animation from the beginning of the fileContent.
 */
static uint32 WSA_GetFrameOffset_FromMemory(WSAHeader *header, uint16 frame)
{
	uint16 lengthAnimation = 0;
	uint32 *animationArray;

	animationArray = (uint32 *)emu_get_memorycsip(header->fileContent);

	if (animationArray[frame] == 0) return 0;

	if (animationArray[0] != 0) {
		lengthAnimation = animationArray[1] - animationArray[0];
	}

	return animationArray[frame] - lengthAnimation - 10;
}

/**
 * Get the offset in the file which stores the animation data for a given
 *  frame.
 * @param fileno The fileno of an opened WSA.
 * @param frame The frame of animation.
 * @return The offset for the animation from the beginning of the file.
 */
static uint32 WSA_GetFrameOffset_FromDisk(uint8 fileno, uint16 frame)
{
	uint32 length;

	File_Seek(fileno, frame * 4 + 10, 0);
	if (File_Read(fileno, &length, 4) != 4) return 0;

	return length;
}


static uint32 csip32_add(csip32 csip, uint32 add) {
	csip.s.cs += add >> 4;
	csip.s.ip += add & 0xF;
	return csip.csip;
}

/**
 * Go to the next frame in the animation.
 * @param header Animation.
 * @param frame Frame number
 * @param displayBuffer Destination.
 * @return 1 on success, 0 on failure.
 */
uint16 WSA_GotoNextFrame(WSAHeader *header, uint16 frame, csip32 displayBuffer)
{
	uint16 lengthSpecial;
	csip32 dest;

	lengthSpecial = 0;
	if (header->flags.s.isSpecial) {
		lengthSpecial = 0x300;
	}

	dest.csip = header->buffer.csip;

	if (header->flags.s.dataInMemory) {
		uint32 positionStart;
		uint32 positionEnd;
		uint32 length;
		csip32 positionFrame;

		positionStart = WSA_GetFrameOffset_FromMemory(header, frame);
		positionEnd = WSA_GetFrameOffset_FromMemory(header, frame + 1);
		length = positionEnd - positionStart;

		positionFrame.csip = csip32_add(header->fileContent, positionStart);
		dest.csip = csip32_add(dest, header->bufferLength - length);

		memmove(emu_get_memorycsip(dest), emu_get_memorycsip(positionFrame), length);
	} else if (header->flags.s.dataOnDisk) {
		uint8 fileno;
		uint32 positionStart;
		uint32 positionEnd;
		uint32 length;
		uint32 res;

		fileno = File_Open(header->filename, 1);

		positionStart = WSA_GetFrameOffset_FromDisk(fileno, frame);
		positionEnd = WSA_GetFrameOffset_FromDisk(fileno, frame + 1);
		length = positionEnd - positionStart;

		if (positionStart == 0 || positionEnd == 0 || length == 0) {
			File_Close(fileno);
			return 0;
		}

		File_Seek(fileno, positionStart + lengthSpecial, 0);

		dest.csip = csip32_add(dest, header->bufferLength - length);

		res = File_Read(fileno, emu_get_memorycsip(dest), length);
		File_Close(fileno);

		if (res != length) {
			return 0;
		}
	}

	Format80_Decode(emu_get_memorycsip(header->buffer), emu_get_memorycsip(dest), header->bufferLength);

	if (header->flags.s.displayInBuffer) {
		Format40_Decode(emu_get_memorycsip(displayBuffer), emu_get_memorycsip(header->buffer));
	} else {
		emu_push(0);
		emu_push(header->width);
		emu_push(header->buffer.s.cs); emu_push(header->buffer.s.ip);
		emu_push(displayBuffer.s.cs); emu_push(displayBuffer.s.ip);
		emu_push(emu_cs); emu_push(0x0ABF); emu_cs = 0x2AE1; f__2AE1_029F_0014_50E5();
		emu_sp += 12;
	}

	return 1;
}

/**
 * Load a file.
 * @param filename Name of the file
 * @param buffer Data buffer
 * @param bufferSizeCurrent Current size of buffer
 * @param reserveDisplayFrame
 * @param bufferSpecial
 * @return Address of loaded file, or 0x0
 */
csip32 WSA_LoadFile(char *filename, csip32 buffer, uint32 bufferSizeCurrent, uint16 reserveDisplayFrame, csip32 bufferSpecial)
{
	WSAFlags flags;
	WSAFileHeader fileheader;
	WSAHeader *header;
	uint32 bufferSizeMinimal;
	uint32 bufferSizeOptimal;
	uint16 lengthHeader;
	uint8 fileno;
	uint16 lengthSpecial;
	uint16 lengthAnimation;
	uint32 lengthFileContent;
	uint32 displaySize;
	csip32 b;

	flags.all = 0;

	fileno = File_Open(filename, 1);
	File_Read(fileno, &fileheader, sizeof(WSAFileHeader));

	lengthSpecial = 0;
	if (fileheader.isSpecial) {
		flags.s.isSpecial = true;

		lengthSpecial = 0x300;
		if (bufferSpecial.csip != 0) {
			File_Seek(fileno, fileheader.frames * 4, 1);
			File_Read(fileno, emu_get_memorycsip(bufferSpecial), 0x300);
		}
	}

	lengthFileContent = File_Seek(fileno, 0, 2);

	lengthAnimation = 0;
	if (fileheader.animationOffsetStart != 0) {
		lengthAnimation = fileheader.animationOffsetEnd - fileheader.animationOffsetStart;
	} else {
		flags.s.variable_0040 = true;
	}

	lengthFileContent -= lengthSpecial + lengthAnimation + 10;

	displaySize = 0;
	if (reserveDisplayFrame) {
		flags.s.displayInBuffer = true;
		displaySize = fileheader.width * fileheader.height;
	}

	bufferSizeMinimal = displaySize + fileheader.requiredBufferSize;
	bufferSizeOptimal = bufferSizeMinimal + lengthFileContent;

	if (bufferSizeCurrent > 1 && bufferSizeCurrent < bufferSizeMinimal) {
		File_Close(fileno);

		buffer.csip = 0x0;
		return buffer;
	}
	if (bufferSizeCurrent == 0) bufferSizeCurrent = bufferSizeOptimal;
	if (bufferSizeCurrent == 1) bufferSizeCurrent = bufferSizeMinimal;

	if (buffer.csip == 0) {
		if (bufferSizeCurrent == 0) {
			bufferSizeCurrent = bufferSizeOptimal;
		} else if (bufferSizeCurrent == 1) {
			bufferSizeCurrent = bufferSizeMinimal;
		} else if (bufferSizeCurrent >= bufferSizeOptimal) {
			bufferSizeCurrent = bufferSizeOptimal;
		} else {
			bufferSizeCurrent = bufferSizeMinimal;
		}

		buffer = Tools_Malloc(bufferSizeCurrent, 0x30);
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
		File_Seek(fileno, lengthAnimation + lengthSpecial, 1);
		File_Read(fileno, emu_get_memorycsip(header->fileContent) + lengthHeader, lengthFileContent - lengthHeader);

		header->flags.s.dataInMemory = true;
		if (WSA_GetFrameOffset_FromMemory(header, header->frames + 1) == 0) header->flags.s.noAnimation = true;
	} else {
		header->flags.s.dataOnDisk = true;
		if (WSA_GetFrameOffset_FromDisk(fileno, header->frames + 1) == 0) header->flags.s.noAnimation = true;
	}

	{
		csip32 loc28;
		loc28.csip = csip32_add(b, header->bufferLength - lengthAnimation);

		File_Seek(fileno, lengthHeader + lengthSpecial + 10, 0);
		File_Read(fileno, emu_get_memorycsip(loc28), lengthAnimation);
		File_Close(fileno);

		Format80_Decode(emu_get_memorycsip(b), emu_get_memorycsip(loc28), header->bufferLength);
	}
	return buffer;
}

/**
 * Unload the WSA.
 * @param buffer No longer needed buffer.
 */
void WSA_Unload(csip32 buffer)
{
	WSAHeader *header;

	if (buffer.csip == 0) return;

	header = (WSAHeader *)emu_get_memorycsip(buffer);

	if (!header->flags.s.malloced) return;

	emu_push(buffer.s.cs); emu_push(buffer.s.ip);
	emu_push(emu_cs); emu_push(0x04A6); emu_cs = 0x23E1; emu_Tools_Free();
	emu_sp += 4;
}

static void WSA_DrawFrame(int16 x, int16 y, int16 width, int16 height, uint16 windowID, csip32 displayBuffer)
{
	int16 left;
	int16 right;
	int16 top;
	int16 bottom;
	int16 skipBefore;
	int16 skipAfter;
	uint8 *src = emu_get_memorycsip(displayBuffer);
	uint8 *dst;

	dst = emu_get_memorycsip(Screen_GetSegment_ByIndex_2(g_global->screenActiveID));

	left   = g_global->variable_4062[windowID][0] << 3;
	right  = left + (g_global->variable_4062[windowID][2] << 3);
	top    = g_global->variable_4062[windowID][1];
	bottom = top + g_global->variable_4062[windowID][3];

	if (y - top < 0) {
		if (y - top + height <= 0) return;
		height += y - top;
		src += (top - y) * width;
		y += top - y;
	}

	if (bottom - y <= 0) return;
	height = min(bottom - y, height);

	skipBefore = 0;
	if (x - left < 0) {
		skipBefore = left - x;
		x += skipBefore;
		width -= skipBefore;
	}

	skipAfter = 0;
	if (right - x <= 0) return;
	if (right - x < width) {
		skipAfter = width - right + x;
		width = right - x;
	}

	dst += ((uint16 *)emu_get_memorycsip(g_global->variable_66EC))[y] + x;

	while (height-- != 0) {
		src += skipBefore;
		memcpy(dst, src, width);
		src += width + skipAfter;
		dst += SCREEN_WIDTH;
	}
}

/**
 * Display a frame.
 * @param buffer
 * @param frameNext
 * @param posX
 * @param posY
 * @param memoryBlock
 * @paramvar12
 * @return 0 on failure, 1 on success.
 */
uint16 WSA_DisplayFrame(csip32 buffer, uint16 frameNext, uint16 posX, uint16 posY, uint16 memoryBlock)
{
	WSAHeader *header;
	csip32 displayBuffer;

	int16 frameDiff;
	int16 direction;
	int16 frameCount;

	if (buffer.csip == 0) {
		return 0;
	}

	header = (WSAHeader *)emu_get_memorycsip(buffer);

	if (frameNext >= header->frames) {
		return 0;
	}

	if (header->flags.s.displayInBuffer) {
		displayBuffer.csip = csip32_add(buffer, 33);
	} else {
		displayBuffer = Screen_GetSegment_ByIndex_2(memoryBlock);
		displayBuffer.s.ip += posX + posY * SCREEN_WIDTH;
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
				Format40_Decode(emu_get_memorycsip(displayBuffer), emu_get_memorycsip(header->buffer));
			}
		}

		header->frameCurrent = 0;
	}

	frameDiff = abs(header->frameCurrent - frameNext);
	direction = 1;

	if (frameNext > header->frameCurrent) {
		frameCount = header->frames - frameNext + header->frameCurrent;

		if (frameCount < frameDiff && !header->flags.s.noAnimation) {
			direction = -1;
		} else {
			frameCount = frameDiff;
		}
	} else {
		frameCount = header->frames - header->frameCurrent + frameNext;

		if (frameCount < frameDiff && !header->flags.s.noAnimation) {
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

			WSA_GotoNextFrame((WSAHeader *)emu_get_memorycsip(buffer), frame, displayBuffer);

			if (frame == header->frames) frame = 0;
		}
	} else {
		uint16 i;
		uint16 frame = header->frameCurrent;

		for (i = 0; i < frameCount; i++) {
			if (frame == 0) frame = header->frames;

			WSA_GotoNextFrame((WSAHeader *)emu_get_memorycsip(buffer), frame, displayBuffer);

			frame += direction;
		}
	}

	header->frameCurrent = frameNext;

	if (header->flags.s.displayInBuffer) {
		uint16 oldMemoryBlock = g_global->screenActiveID;
		g_global->screenActiveID = memoryBlock;

		WSA_DrawFrame(posX, posY, header->width, header->height, 0, displayBuffer);

		g_global->screenActiveID = oldMemoryBlock;
	}
	return 1;
}


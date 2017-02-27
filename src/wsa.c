/** @file src/wsa.c WSA routines. */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "types.h"
#include "os/math.h"
#include "os/endian.h"
#include "gfx.h"

#include "wsa.h"

#include "codec/format40.h"
#include "codec/format80.h"
#include "file.h"
#include "gui/widget.h"


/**
 * The flags of a WSA Header.
 */
typedef struct WSAFlags {
	BIT_U8 notmalloced:1;                                   /*!< If the WSA is in memory of the caller. */
	BIT_U8 malloced:1;                                      /*!< If the WSA is malloc'd by us. */
	BIT_U8 dataOnDisk:1;                                    /*!< Only the header is in the memory. Rest is on disk. */
	BIT_U8 dataInMemory:1;                                  /*!< The whole WSA is in memory. */
	BIT_U8 displayInBuffer:1;                               /*!< The output display is in the buffer. */
	BIT_U8 noAnimation:1;                                   /*!< If the WSA has animation or not. */
	BIT_U8 hasNoAnimation:1;                                /*!< The WSA has no animation. */
	BIT_U8 isSpecial:1;                                     /*!< Indicates if the WSA has a special buffer. */
}  WSAFlags;

/**
 * The header of a WSA file that is being read.
 */
typedef struct WSAHeader {
	uint16 frameCurrent;                                    /*!< Current frame displaying. */
	uint16 frames;                                          /*!< Total frames in WSA. */
	uint16 width;                                           /*!< Width of WSA. */
	uint16 height;                                          /*!< Height of WSA. */
	uint16 bufferLength;                                    /*!< Length of the buffer. */
	uint8 *buffer;                                          /*!< The buffer. */
	uint8 *fileContent;                                     /*!< The content of the file. */
	char   filename[13];                                    /*!< Filename of WSA. */
	WSAFlags flags;                                         /*!< Flags of WSA. */
} WSAHeader;

MSVC_PACKED_BEGIN
/**
 * The header of a WSA file as on the disk.
 */
typedef struct WSAFileHeader {
	/* 0000(2)   */ uint16 frames;                     /*!< Amount of animation frames in this WSA. */
	/* 0002(2)   */ uint16 width;                      /*!< Width of WSA. */
	/* 0004(2)   */ uint16 height;                     /*!< Height of WSA. */
	/* 0006(2)   */ uint16 requiredBufferSize;         /*!< The size the buffer has to be at least to process this WSA. */
	/* 0008(2)   */ uint16 isSpecial;                  /*!< Indicates if the WSA has a special buffer. */
	/* 000A(4)   */ uint32 animationOffsetStart;       /*!< Offset where animation starts. */
	/* 000E(4)   */ uint32 animationOffsetEnd;         /*!< Offset where animation ends. */
} WSAFileHeader;

/**
 * Get the amount of frames a WSA has.
 */
uint16 WSA_GetFrameCount(void *wsa)
{
	WSAHeader *header = (WSAHeader *)wsa;

	if (header == NULL) return 0;
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
	uint32 animationFrame;
	uint32 animation0;

	animationFrame = READ_LE_UINT32(header->fileContent + frame * 4);

	if (animationFrame == 0) return 0;

	animation0 = READ_LE_UINT32(header->fileContent);
	if (animation0 != 0) {
		lengthAnimation = READ_LE_UINT32(header->fileContent + 4) - animation0;
	}

	return animationFrame - lengthAnimation - 10;
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
	uint32 offset;

	File_Seek(fileno, frame * 4 + 10, 0);
	offset = File_Read_LE32(fileno);

	return offset;
}

/**
 * Go to the next frame in the animation.
 * @param wsa WSA pointer.
 * @param frame Frame number to go to.
 * @param dst Destination buffer to write the animation to.
 * @return 1 on success, 0 on failure.
 */
static uint16 WSA_GotoNextFrame(void *wsa, uint16 frame, uint8 *dst)
{
	WSAHeader *header = (WSAHeader *)wsa;
	uint16 lengthSpecial;
	uint8 *buffer;

	lengthSpecial = 0;
	if (header->flags.isSpecial) lengthSpecial = 0x300;

	buffer = header->buffer;

	if (header->flags.dataInMemory) {
		uint32 positionStart;
		uint32 positionEnd;
		uint32 length;
		uint8 *positionFrame;

		positionStart = WSA_GetFrameOffset_FromMemory(header, frame);
		positionEnd = WSA_GetFrameOffset_FromMemory(header, frame + 1);
		length = positionEnd - positionStart;

		positionFrame = header->fileContent + positionStart;
		buffer += header->bufferLength - length;

		memmove(buffer, positionFrame, length);
	} else if (header->flags.dataOnDisk) {
		uint8 fileno;
		uint32 positionStart;
		uint32 positionEnd;
		uint32 length;
		uint32 res;

		fileno = File_Open(header->filename, FILE_MODE_READ);

		positionStart = WSA_GetFrameOffset_FromDisk(fileno, frame);
		positionEnd = WSA_GetFrameOffset_FromDisk(fileno, frame + 1);
		length = positionEnd - positionStart;

		if (positionStart == 0 || positionEnd == 0 || length == 0) {
			File_Close(fileno);
			return 0;
		}

		buffer += header->bufferLength - length;

		File_Seek(fileno, positionStart + lengthSpecial, 0);
		res = File_Read(fileno, buffer, length);
		File_Close(fileno);

		if (res != length) return 0;
	}

	Format80_Decode(header->buffer, buffer, header->bufferLength);

	if (header->flags.displayInBuffer) {
		Format40_Decode(dst, header->buffer);
	} else {
		Format40_Decode_XorToScreen(dst, header->buffer, header->width);
	}

	return 1;
}

/**
 * Load a WSA file.
 * @param filename Name of the file.
 * @param wsa Data buffer for the WSA.
 * @param wsaSize Current size of buffer.
 * @param reserveDisplayFrame True if we need to reserve the display frame.
 * @return Address of loaded WSA file, or NULL.
 */
void *WSA_LoadFile(const char *filename, void *wsa, uint32 wsaSize, bool reserveDisplayFrame)
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
	uint8 *buffer;

	memset(&flags, 0, sizeof(flags));

	fileno = File_Open(filename, FILE_MODE_READ);
	fileheader.frames = File_Read_LE16(fileno);
	fileheader.width = File_Read_LE16(fileno);
	fileheader.height = File_Read_LE16(fileno);
	fileheader.requiredBufferSize = File_Read_LE16(fileno);
	fileheader.isSpecial = File_Read_LE16(fileno);
	fileheader.animationOffsetStart = File_Read_LE32(fileno);
	fileheader.animationOffsetEnd = File_Read_LE32(fileno);

	lengthSpecial = 0;
	if (fileheader.isSpecial) {
		flags.isSpecial = true;

		lengthSpecial = 0x300;
	}

	lengthFileContent = File_Seek(fileno, 0, 2);

	lengthAnimation = 0;
	if (fileheader.animationOffsetStart != 0) {
		lengthAnimation = fileheader.animationOffsetEnd - fileheader.animationOffsetStart;
	} else {
		flags.hasNoAnimation = true;
	}

	lengthFileContent -= lengthSpecial + lengthAnimation + 10;

	displaySize = 0;
	if (reserveDisplayFrame) {
		flags.displayInBuffer = true;
		displaySize = fileheader.width * fileheader.height;
	}

	bufferSizeMinimal = displaySize + fileheader.requiredBufferSize - 33 + sizeof(WSAHeader);
	bufferSizeOptimal = bufferSizeMinimal + lengthFileContent;

	if (wsaSize > 1 && wsaSize < bufferSizeMinimal) {
		File_Close(fileno);

		return NULL;
	}
	if (wsaSize == 0) wsaSize = bufferSizeOptimal;
	if (wsaSize == 1) wsaSize = bufferSizeMinimal;

	if (wsa == NULL) {
		if (wsaSize == 0) {
			wsaSize = bufferSizeOptimal;
		} else if (wsaSize == 1) {
			wsaSize = bufferSizeMinimal;
		} else if (wsaSize >= bufferSizeOptimal) {
			wsaSize = bufferSizeOptimal;
		} else {
			wsaSize = bufferSizeMinimal;
		}

		wsa = calloc(1, wsaSize);
		flags.malloced = true;
	} else {
		flags.notmalloced = true;
	}

	header = (WSAHeader *)wsa;
	buffer = (uint8 *)wsa + sizeof(WSAHeader);

	header->flags = flags;

	if (reserveDisplayFrame) {
		memset(buffer, 0, displaySize);
	}

	buffer += displaySize;

	if ((fileheader.frames & 0x8000) != 0) {
		fileheader.frames &= 0x7FFF;
	}

	header->frameCurrent = fileheader.frames;
	header->frames       = fileheader.frames;
	header->width        = fileheader.width;
	header->height       = fileheader.height;
	header->bufferLength = fileheader.requiredBufferSize + 33 - sizeof(WSAHeader);
	header->buffer       = buffer;
	strncpy(header->filename, filename, sizeof(header->filename));

	lengthHeader = (fileheader.frames + 2) * 4;

	if (wsaSize >= bufferSizeOptimal) {
		header->fileContent = buffer + header->bufferLength;

		File_Seek(fileno, 10, 0);
		File_Read(fileno, header->fileContent, lengthHeader);
		File_Seek(fileno, lengthAnimation + lengthSpecial, 1);
		File_Read(fileno, header->fileContent + lengthHeader, lengthFileContent - lengthHeader);

		header->flags.dataInMemory = true;
		if (WSA_GetFrameOffset_FromMemory(header, header->frames + 1) == 0) header->flags.noAnimation = true;
	} else {
		header->flags.dataOnDisk = true;
		if (WSA_GetFrameOffset_FromDisk(fileno, header->frames + 1) == 0) header->flags.noAnimation = true;
	}

	{
		uint8 *b;
		b = buffer + header->bufferLength - lengthAnimation;

		File_Seek(fileno, lengthHeader + lengthSpecial + 10, 0);
		File_Read(fileno, b, lengthAnimation);
		File_Close(fileno);

		Format80_Decode(buffer, b, header->bufferLength);
	}
	return wsa;
}

/**
 * Unload the WSA.
 * @param wsa The pointer to the WSA.
 */
void WSA_Unload(void *wsa)
{
	WSAHeader *header = (WSAHeader *)wsa;

	if (wsa == NULL) return;
	if (!header->flags.malloced) return;

	free(wsa);
}

/**
 * Draw a frame on the buffer.
 * @param x The X-position to start drawing.
 * @param y The Y-position to start drawing.
 * @param width The width of the image.
 * @param height The height of the image.
 * @param windowID The windowID.
 * @param screenID the screen to write to
 * @param src The source for the frame.
 */
static void WSA_DrawFrame(int16 x, int16 y, int16 width, int16 height, uint16 windowID, uint8 *src, Screen screenID)
{
	int16 left;
	int16 right;
	int16 top;
	int16 bottom;
	int16 skipBefore;
	int16 skipAfter;
	uint8 *dst;

	dst = GFX_Screen_Get_ByIndex(screenID);

	left   = g_widgetProperties[windowID].xBase << 3;
	right  = left + (g_widgetProperties[windowID].width << 3);
	top    = g_widgetProperties[windowID].yBase;
	bottom = top + g_widgetProperties[windowID].height;

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

	dst += y * SCREEN_WIDTH + x;

	while (height-- != 0) {
		src += skipBefore;
		memcpy(dst, src, width);
		src += width + skipAfter;
		dst += SCREEN_WIDTH;
	}
}

/**
 * Display a frame.
 * @param wsa The pointer to the WSA.
 * @param frameNext The next frame to display.
 * @param posX The X-position of the WSA.
 * @param posY The Y-position of the WSA.
 * @param screenID The screenID to draw on.
 * @return False on failure, true on success.
 */
bool WSA_DisplayFrame(void *wsa, uint16 frameNext, uint16 posX, uint16 posY, Screen screenID)
{
	WSAHeader *header = (WSAHeader *)wsa;
	uint8 *dst;

	int16 frameDiff;
	int16 direction;
	int16 frameCount;

	if (wsa == NULL) return false;
	if (frameNext >= header->frames) return false;

	if (header->flags.displayInBuffer) {
		dst = (uint8 *)wsa + sizeof(WSAHeader);
	} else {
		dst = GFX_Screen_Get_ByIndex(screenID);
		dst += posX + posY * SCREEN_WIDTH;
	}

	if (header->frameCurrent == header->frames) {
		if (!header->flags.hasNoAnimation) {
			if (!header->flags.displayInBuffer) {
				Format40_Decode_ToScreen(dst, header->buffer, header->width);
			} else {
				Format40_Decode(dst, header->buffer);
			}
		}

		header->frameCurrent = 0;
	}

	frameDiff = abs(header->frameCurrent - frameNext);
	direction = 1;

	if (frameNext > header->frameCurrent) {
		frameCount = header->frames - frameNext + header->frameCurrent;

		if (frameCount < frameDiff && !header->flags.noAnimation) {
			direction = -1;
		} else {
			frameCount = frameDiff;
		}
	} else {
		frameCount = header->frames - header->frameCurrent + frameNext;

		if (frameCount < frameDiff && !header->flags.noAnimation) {
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

			WSA_GotoNextFrame(wsa, frame, dst);

			if (frame == header->frames) frame = 0;
		}
	} else {
		uint16 i;
		uint16 frame = header->frameCurrent;

		for (i = 0; i < frameCount; i++) {
			if (frame == 0) frame = header->frames;

			WSA_GotoNextFrame(wsa, frame, dst);

			frame += direction;
		}
	}

	header->frameCurrent = frameNext;

	if (header->flags.displayInBuffer) {
		WSA_DrawFrame(posX, posY, header->width, header->height, 0, dst, screenID);
	}

	return true;
}

/* $Id$ */

/** @file src/gfx.h Graphics definitions. */

#ifndef GFX_H
#define GFX_H

enum {
	SCREEN_WIDTH  = 320, /*!< Width of the screen in pixels. */
	SCREEN_HEIGHT = 200  /*!< Height of the screen in pixels. */
};

extern void GFX_DrawSprite(uint16 spriteID, uint16 x, uint16 y, uint8 houseID);
extern void GFX_Init_Sprites(uint16 memoryBlockID, void *iconRPAL, void *iconRTBL);
extern void GFX_Init_SpriteInfo(uint16 widthSize, uint16 heightSize);
extern void GFX_PutPixel(uint16 x, uint16 y, uint8 colour);
extern uint16 GFX_Screen_GetSegmentActive();
extern uint16 GFX_Screen_GetSegment_ByIndex2(uint16 memoryBlockID);
extern uint16 GFX_Screen_GetSegment_ByIndex(uint16 memoryBlockID);
extern void GFX_Screen_Copy2(int16 xSrc, int16 ySrc, int16 xDst, int16 yDst, int16 width, int16 height, uint16 memBlockSrc, uint16 memBlockDst, bool skipNull);
extern void GFX_Screen_Copy(int16 xSrc, int16 ySrc, int16 xDst, int16 yDst, int16 width, int16 height, uint16 memBlockSrc, uint16 memBlockDst);
extern void GFX_ClearScreen();
extern void GFX_SetPalette(uint8 *palette);
extern uint8 GFX_GetPixel(uint16 x, uint16 y);
extern void GFX_Screen_Copy3(uint16 screenSrc, uint16 screenDst);
extern uint16 GFX_GetSize(int16 width, int16 height);
extern void GFX_CopyFromBuffer(int16 left, int16 top, uint16 width, uint16 height, uint8 *buffer);
extern void GFX_CopyToBuffer(int16 left, int16 top, uint16 width, uint16 height, uint8 *buffer);

#endif /* GFX_H */

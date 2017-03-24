/** @file src/gfx.h Graphics definitions. */

#ifndef GFX_H
#define GFX_H

extern uint8 g_paletteActive[256 * 3];
extern uint8 *g_palette1;
extern uint8 *g_palette2;
extern uint8 *g_paletteMapping1;
extern uint8 *g_paletteMapping2;

enum {
	SCREEN_WIDTH  = 320, /*!< Width of the screen in pixels. */
	SCREEN_HEIGHT = 200  /*!< Height of the screen in pixels. */
};

typedef enum Screen {
	SCREEN_0 = 0,
	SCREEN_1 = 1,
	SCREEN_2 = 2,
	SCREEN_3 = 3,
	SCREEN_ACTIVE = -1
} Screen;

extern void GFX_Init(void);
extern void GFX_Uninit(void);
extern Screen GFX_Screen_SetActive(Screen screenID);
extern bool GFX_Screen_IsActive(Screen screenID);
extern void *GFX_Screen_GetActive(void);
extern uint16 GFX_Screen_GetSize_ByIndex(Screen screenID);
extern void *GFX_Screen_Get_ByIndex(Screen screenID);

extern void GFX_DrawSprite(uint16 spriteID, uint16 x, uint16 y, uint8 houseID);
extern void GFX_Init_SpriteInfo(uint16 widthSize, uint16 heightSize);
extern void GFX_PutPixel(uint16 x, uint16 y, uint8 colour);
extern void GFX_Screen_Copy2(int16 xSrc, int16 ySrc, int16 xDst, int16 yDst, int16 width, int16 height, Screen screenSrc, Screen screenDst, bool skipNull);
extern void GFX_Screen_Copy(int16 xSrc, int16 ySrc, int16 xDst, int16 yDst, int16 width, int16 height, Screen screenSrc, Screen screenDst);
extern void GFX_ClearScreen(Screen screenID);
extern void GFX_ClearBlock(Screen index);
extern void GFX_SetPalette(uint8 *palette);
extern uint8 GFX_GetPixel(uint16 x, uint16 y);
extern uint16 GFX_GetSize(int16 width, int16 height);
extern void GFX_CopyFromBuffer(int16 left, int16 top, uint16 width, uint16 height, uint8 *buffer);
extern void GFX_CopyToBuffer(int16 left, int16 top, uint16 width, uint16 height, uint8 *buffer);

#define GFX_STORE_DIRTY_AREA

#ifdef GFX_STORE_DIRTY_AREA
void GFX_Screen_SetDirty(Screen screenID, uint16 left, uint16 top, uint16 right, uint16 bottom);
#else
#define GFX_Screen_SetDirty(screenID, left, top, right, bottom)
#endif /* GFX_STORE_DIRTY_AREA */

#endif /* GFX_H */

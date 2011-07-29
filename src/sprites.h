/* $Id$ */

/** @file src/sprites.h Sprite definitions. */

#ifndef SPRITES_H
#define SPRITES_H

extern uint8 *g_sprites[];
extern uint8 *g_spriteBuffer;
extern uint8 *g_iconRTBL;
extern uint8 *g_iconRPAL;
extern uint8 *g_spriteInfo;
extern uint16 *g_iconMap;
extern void *g_mouseSprite;
extern void *g_mouseSpriteBuffer;

extern void Sprites_Load(uint16 index, uint8 **sprites);
extern uint8 *Sprites_GetSprite(uint8 *buffer, uint16 index);
extern uint8 Sprite_GetWidth(uint8 *sprite);
extern uint8 Sprite_GetHeight(uint8 *sprite);
extern uint16 Sprites_GetType(uint8 *sprite);
extern void Sprites_LoadTiles();
extern void Sprites_UnloadTiles();
extern uint16 Sprites_LoadImage(const char *filename, uint16 screenID, uint8 *palette, uint16 arg12);
extern void Sprites_SetMouseSprite(uint16 x, uint16 y, uint8 *sprite);
extern void Sprites_CPS_LoadRegionClick();
extern void Sprite_SetSpriteBuffer(uint8 *buffer);

extern uint8 Orientation_Orientation256ToOrientation8(uint8 orientation);
extern uint8 Orientation_Orientation256ToOrientation16(uint8 orientation);


#endif /* SPRITES_H */

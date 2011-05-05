/* $Id$ */

#ifndef SPRITES_H
#define SPRITES_H

extern csip32 *g_sprites;

extern void Sprites_Load(uint16 index, uint16 memory, csip32 *sprites);
extern csip32 Sprites_GetCSIP(csip32 buffer_csip, uint16 index);
extern uint8 Sprite_GetWidth(csip32 sprite_csip);
extern uint8 Sprite_GetHeight(csip32 sprite_csip);
extern void Sprites_LoadTiles();
extern void Sprites_UnloadTiles();
extern uint32 Sprites_LoadCPSFile(const char *filename, uint16 memory1, uint16 memory2, uint8 *palette);
extern uint16 Sprites_LoadImage(const char *filename, uint16 memory1, uint16 memory2, uint8 *palette, uint16 arg12);
extern uint8 Sprites_B4CD_17DC(uint8 orientation);
extern uint8 Sprites_B4CD_17F7(uint8 orientation);

extern void emu_Sprites_Load();
extern void emu_Sprites_GetCSIP();
extern void emu_Sprite_GetWidth();
extern void emu_Sprite_GetHeight();
extern void emu_Sprites_LoadCPSFile();
extern void emu_Sprites_LoadImage();

#endif /* SPRITES_H */

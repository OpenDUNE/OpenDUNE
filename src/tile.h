/* $Id$ */

#ifndef TILE_H
#define TILE_H

extern bool Tile_IsValid(tile32 tile);
extern uint16 Tile_GetX(tile32 tile);
extern uint16 Tile_GetY(tile32 tile);
extern uint32 Tile_GetXY(tile32 tile);
extern uint8 Tile_GetPosX(tile32 tile);
extern uint8 Tile_GetPosY(tile32 tile);
extern uint32 Tile_GetSpecialXY(tile32 tile);
extern uint16 Tile_PackTile(tile32 tile);
extern uint16 Tile_PackXY(uint16 x, uint16 y);
extern tile32 Tile_UnpackTile(uint16 packed);
extern uint8 Tile_GetPackedX(uint16 packed);
extern uint8 Tile_GetPackedY(uint16 packed);
extern uint16 Tile_GetDistance(tile32 from, tile32 to);
extern uint16 Tile_GetDistancePacked(uint16 packed_from, uint16 packed_to);
extern uint16 Tile_GetDistanceRoundedUp(tile32 from, tile32 to);
extern tile32 Tile_AddTileDiff(tile32 from, tile32 diff);
extern tile32 Tile_Center(tile32 tile);
extern void Tile_RemoveFogInRadius(tile32 tile, uint16 radius);
extern uint16 Tile_B4CD_1C1A(uint16 packed_from, uint16 packed_to);

extern void emu_Tile_GetX();
extern void emu_Tile_GetY();
extern void emu_Tile_GetXY();
extern void emu_Tile_PackTile();
extern void emu_Tile_PackXY();
extern void emu_Tile_Unpack();
extern void emu_Tile_GetPackX();
extern void emu_Tile_GetPackY();
extern void emu_Tile_GetDistance();
extern void emu_Tile_GetDistancePacked();
extern void emu_Tile_Center();

#endif /* TILE_H */

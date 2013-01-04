/** @file src/tile.h %Tile definitions. */

#ifndef TILE_H
#define TILE_H

extern bool Tile_IsValid(tile32 tile);
extern uint16 Tile_GetX(tile32 tile);
extern uint16 Tile_GetY(tile32 tile);
extern uint32 Tile_GetXY(tile32 tile);
extern uint8 Tile_GetPosX(tile32 tile);
extern uint8 Tile_GetPosY(tile32 tile);
extern tile32 Tile_MakeXY(uint16 x, uint16 y);
extern uint16 Tile_PackTile(tile32 tile);
extern uint16 Tile_PackXY(uint16 x, uint16 y);
extern tile32 Tile_UnpackTile(uint16 packed);
extern uint8 Tile_GetPackedX(uint16 packed);
extern uint8 Tile_GetPackedY(uint16 packed);
extern bool Tile_IsOutOfMap(uint16 packed);
extern uint16 Tile_GetDistance(tile32 from, tile32 to);
extern uint16 Tile_GetDistancePacked(uint16 packed_from, uint16 packed_to);
extern uint16 Tile_GetDistanceRoundedUp(tile32 from, tile32 to);
extern tile32 Tile_AddTileDiff(tile32 from, tile32 diff);
extern tile32 Tile_Center(tile32 tile);
extern void Tile_RemoveFogInRadius(tile32 tile, uint16 radius);
extern uint16 Tile_GetTileInDirectionOf(uint16 packed_from, uint16 packed_to);
extern uint8 Tile_GetDirectionPacked(uint16 packed_from, uint16 packed_to);
extern tile32 Tile_MoveByDirection(tile32 tile, int16 orientation, uint16 distance);
extern tile32 Tile_MoveByRandom(tile32 tile, uint16 distance, bool arg0C);
extern int8 Tile_GetDirection(tile32 from, tile32 to);
extern tile32 Tile_MoveByOrientation(tile32 position, uint8 orientation);

extern uint8 Orientation_Orientation256ToOrientation8(uint8 orientation);
extern uint8 Orientation_Orientation256ToOrientation16(uint8 orientation);

#endif /* TILE_H */

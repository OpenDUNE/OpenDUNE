/* $Id$ */

#include <stdio.h>
#include "types.h"
#include "libemu.h"
#include "global.h"
#include "animate.h"
#include "map.h"
#include "tile.h"

extern void f__151A_0310_0018_831F();

/**
 * Start an animation.
 * @param proc The proc to the animation.
 * @param tile The tile to do the animation on.
 * @param layout The layout of tiles for the animation.
 * @param houseID The house of the item being animation.
 * @param unknown2 Unknown.
 */
void Animation_Start(csip32 proc, tile32 tile, uint16 tileLayout, uint8 houseID, uint8 unknown2)
{
	Animation *animation = (Animation *)emu_get_memorycsip(g_global->animations);
	uint16 packed = Tile_PackTile(tile);
	Tile *t;
	int i;

	t = Map_GetTileByPosition(packed);
	Animation_Stop_ByTile(packed);

	for (i = 0; i < 112; i++, animation++) {
		if (animation->proc.csip != 0) continue;

		animation->variable_00 = g_global->variable_76AC;
		animation->tileLayout  = tileLayout;
		animation->houseID     = houseID;
		animation->variable_07 = 0;
		animation->variable_08 = unknown2;
		animation->proc.csip   = proc.csip;
		animation->tile        = tile;

		g_global->variable_60E8 = 0;

		t->houseID = houseID;
		t->hasAnimation = true;
		return;
	}
}

/**
 * Unknown.
 * @param packed
 */
void Animation_Stop_ByTile(uint16 packed)
{
	Animation *animation = (Animation *)emu_get_memorycsip(g_global->animations);
	Tile *t = Map_GetTileByPosition(packed);
	int i;

	if (!t->hasAnimation) return;

	for (i = 0; i < 112; i++, animation++) {
		if (animation->proc.csip == 0) continue;
		if (Tile_PackTile(animation->tile) != packed) continue;

		emu_push(0);
		emu_push(g_global->animations.s.cs); emu_push(g_global->animations.s.ip + i * sizeof(Animation));
		emu_push(emu_cs); emu_push(0x017E); emu_cs = 0x151A; f__151A_0310_0018_831F();
		emu_sp += 6;

		return;
	}
}

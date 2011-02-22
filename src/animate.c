/* $Id$ */

#include <stdio.h>
#include "types.h"
#include "libemu.h"
#include "global.h"
#include "animate.h"
#include "map.h"
#include "tile.h"

extern void f__151A_0114_0022_0B6C();

/**
 * Start an animation.
 * @param proc The proc to the animation.
 * @param tile The tile to do the animation on.
 * @param layout The layout of tiles for the animation.
 * @param houseID The house of the item being animation.
 * @param unknown2 Unknown.
 */
void Animation_Add(csip32 proc, tile32 tile, uint16 tileLayout, uint8 houseID, uint8 unknown2)
{
	Animation *animation = (Animation *)emu_get_memorycsip(g_global->animations);
	uint16 packed = Tile_PackTile(tile);
	Tile *t;
	int i;

	t = Map_GetTileByPosition(packed);

	emu_push(packed);
	emu_push(emu_cs); emu_push(0x002B); emu_cs = 0x151A; f__151A_0114_0022_0B6C();
	emu_sp += 2;

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
		t->flag_08 = true;
		return;
	}
}

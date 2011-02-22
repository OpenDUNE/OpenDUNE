/* $Id$ */

#include <stdio.h>
#include "types.h"
#include "libemu.h"
#include "global.h"
#include "animation.h"
#include "map.h"
#include "tile.h"

extern void f__151A_0310_0018_831F();
extern void f__151A_03ED_0014_6217();
extern void f__151A_046F_0017_2508();
extern void f__151A_043B_0018_36C4();
extern void f__151A_02E8_0010_6B15();
extern void f__151A_02C8_0016_FA9C();
extern void f__151A_0526_0028_A3A6();
extern void f__151A_02FA_0014_26F2();
extern void f__151A_02B0_0011_62B1();

/**
 * Start an Animation.
 * @param proc The proc to the Animation.
 * @param tile The tile to do the Animation on.
 * @param layout The layout of tiles for the Animation.
 * @param houseID The house of the item being Animation.
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

		animation->tickNext = g_global->variable_76AC;
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
 * Stop an Animation on a tile, if any.
 * @param packed The tile to check for animation on.
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

/**
 * Set variable 8 of the Animation.
 * @param animation The Animation to change.
 * @param parameter To what value variable 8 should change.
 */
static void Animation_Func_Unknown8(Animation *animation, int16 parameter)
{
	animation->variable_08 = parameter;
}

/**
 * Check all Animations if they need changing.
 */
void Animation_Tick()
{
	Animation *animation = (Animation *)emu_get_memorycsip(g_global->animations);
	int i;

	if (g_global->variable_60E8 > g_global->variable_76AC) return;
	g_global->variable_60E8 += 10000;

	for (i = 0; i < ANIMATION_MAX; i++, animation++) {
		if (animation->proc.csip == 0) continue;

		if (animation->tickNext <= g_global->variable_76AC) {
			uint16 *commands = (uint16 *)emu_get_memorycsip(animation->proc);
			uint16 command;
			int16 parameter;

			commands += animation->variable_07++;
			command = *commands;

			parameter = command & 0x0FFF;
			/* Sign extend if needed */
			if ((parameter & 0x0800) != 0) parameter |= 0xF000;

			switch (command >> 12) {
				case 8: Animation_Func_Unknown8(animation, parameter); break;

				default:
					emu_push(parameter);
					emu_push(g_global->animations.s.cs); emu_push(g_global->animations.s.ip + i * sizeof(Animation));
					emu_push(emu_cs); emu_push(0x0); emu_cs = 0x151A;
					switch (command >> 12) {
						case 0: f__151A_0310_0018_831F(); break;
						case 1: f__151A_03ED_0014_6217(); break;
						case 2: f__151A_046F_0017_2508(); break;
						case 3: f__151A_043B_0018_36C4(); break;
						case 4: f__151A_02E8_0010_6B15(); break;
						case 5: f__151A_02C8_0016_FA9C(); break;
						case 6: f__151A_0526_0028_A3A6(); break;
						case 7: f__151A_02FA_0014_26F2(); break;
						case 9: default: f__151A_02B0_0011_62B1(); break;
					}
					emu_sp += 6;
					break;
			}

			if (animation->proc.csip == 0) continue;
		}

		if (animation->tickNext >= g_global->variable_60E8) continue;
		g_global->variable_60E8 = animation->tickNext;
	}
}

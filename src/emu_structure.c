/* $Id$ */

#include <stdio.h>
#include "types.h"
#include "libemu.h"
#include "global.h"
#include "pool/house.h"
#include "pool/structure.h"
#include "house.h"
#include "structure.h"

/**
 * Emulator wrapper around GameLoop_Structure().
 *
 * @name emu_GameLoop_Structure
 * @implements 0972:0007:0051:7645 ()
 */
void emu_GameLoop_Structure()
{
	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	GameLoop_Structure();
}

/**
 * Emulator wrapper around Structure_Create().
 *
 * @name emu_Structure_Create
 * @implements 0C3A:0009:0029:BF94 ()
 */
void emu_Structure_Create()
{
	uint16 index, position;
	uint8 typeID, houseID;
	Structure *s;

	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	index    =        emu_get_memory16(emu_ss, emu_sp, 0x0);
	typeID   = (uint8)emu_get_memory16(emu_ss, emu_sp, 0x2);
	houseID  = (uint8)emu_get_memory16(emu_ss, emu_sp, 0x4);
	position =        emu_get_memory16(emu_ss, emu_sp, 0x6);

	s = Structure_Create(index, typeID, houseID, position);

	emu_dx = 0x0;
	emu_ax = 0x0;

	if (s == NULL) return;
	emu_dx = g_global->structureStartPos.s.cs;
	emu_ax = g_global->structureStartPos.s.ip + s->index * sizeof(Structure);
}

/**
 * Emulator wrapper around Structure_CalculatePowerAndCredit().
 *
 * @name emu_Structure_CalculatePowerAndCredit
 * @implements 0C3A:1F70:0010:8DB3 ()
 */
void emu_Structure_CalculatePowerAndCredit()
{
	uint8 houseID;
	House *h;

	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	houseID = (uint8)emu_get_memory16(emu_ss, emu_sp, 0x0);

	if (houseID >= HOUSE_MAX) return;
	h = House_Get_ByIndex(houseID);

	Structure_CalculatePowerAndCredit(h);
}

/**
 * Emulator wrapper around Structure_SetAnimation().
 *
 * @name emu_Structure_SetAnimation
 * @implements 0C3A:1398:000D:8766 ()
 */
void emu_Structure_SetAnimation()
{
	csip32 scsip;
	Structure *s;
	int16 animation;

	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	scsip     = emu_get_csip32  (emu_ss, emu_sp, 0x0);
	animation = emu_get_memory16(emu_ss, emu_sp, 0x4);

	if (scsip.csip == 0x0) return;
	s = Structure_Get_ByMemory(scsip);

	Structure_SetAnimation(s, animation);
}

/**
 * Emulator wrapper around Structure_Get_ByPackedTile().
 *
 * @name emu_Structure_Get_ByPackedTile
 * @implements B4CD:1133:0039:A02F ()
 */
void emu_Structure_Get_ByPackedTile()
{
	uint16 packed;
	Structure *s;

	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	packed = emu_get_memory16(emu_ss, emu_sp, 0x0);

	s = Structure_Get_ByPackedTile(packed);

	emu_ax = 0x0;
	emu_dx = 0x0;

	if (s == NULL) return;
	emu_dx = g_global->structureStartPos.s.cs;
	emu_ax = g_global->structureStartPos.s.ip + s->index * sizeof(Structure);
}

/**
 * Emulator wrapper around Structure_GetStructuresBuilt().
 *
 * @name emu_Structure_GetStructuresBuilt
 * @implements 0C3A:13BD:0022:D6F0 ()
 */
void emu_Structure_GetStructuresBuilt()
{
	uint8 houseID;
	House *h;
	uint32 result;

	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	houseID = (uint8)emu_get_memory16(emu_ss, emu_sp, 0x0);

	emu_ax = 0x0;
	emu_dx = 0x0;

	if (houseID >= HOUSE_MAX) return;
	h = House_Get_ByIndex(houseID);

	result = Structure_GetStructuresBuilt(h);
	emu_dx = result >> 16;
	emu_ax = result & 0xFFFF;
}

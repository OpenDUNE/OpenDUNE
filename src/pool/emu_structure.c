/* $Id$ */

#include <assert.h>
#include <stdio.h>
#include <string.h>
#include "types.h"
#include "libemu.h"
#include "../global.h"
#include "../structure.h"
#include "pool.h"
#include "structure.h"

/**
 * Emulator wrapper around Structure_Init().
 *
 * @name emu_Structure_Init
 * @implements 1082:0098:001C:39E2 ()
 */
void emu_Structure_Init()
{
	csip32 scsip;

	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	scsip = emu_get_csip32(emu_ss, emu_sp, 0x0);

	Structure_Init(scsip);

	emu_dx = 0;
	emu_ax = sizeof(Structure) * STRUCTURE_INDEX_MAX_HARD;
}

/**
 * Emulator wrapper around Structure_Recount().
 *
 * @name emu_Structure_Recount
 * @implements 1082:000F:0012:A3C7 ()
 */
void emu_Structure_Recount()
{
	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	Structure_Recount();
}

/**
 * Get a Structure from the memory by index.
 *
 * @name emu_Structure_Get_ByIndex
 * @implements 1082:03A1:0023:9F5D ()
 */
void emu_Structure_Get_ByIndex()
{
	uint16 index;

	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	index = emu_get_memory16(emu_ss, emu_sp, 0x0);

	emu_ax = 0x0;
	emu_dx = 0x0;

	if (index >= STRUCTURE_INDEX_MAX_HARD) return;
	emu_dx = g_global->structureStartPos.s.cs;
	emu_ax = g_global->structureStartPos.s.ip + index * sizeof(Structure);
}

/**
 * Emulator wrapper around Structure_Find(). It also initializes the
 *  PoolFindStruct, and uses a default struct in case none is given.
 *
 * @name emu_Structure_FindFirst
 * @implements 1082:00FD:003A:D7E0 ()
 */
void emu_Structure_FindFirst()
{
	PoolFindStruct *find;
	Structure *b;

	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	find = (PoolFindStruct *)&emu_get_memory8(emu_get_memory16(emu_ss, emu_sp, 0x2), emu_get_memory16(emu_ss, emu_sp, 0x0), 0x0);
	if (emu_get_memory16(emu_ss, emu_sp, 0x2) == 0x0 && emu_get_memory16(emu_ss, emu_sp, 0x0) == 0x0) {
		emu_get_memory16(emu_ss, emu_sp, 0x2) = 0x353F;
		emu_get_memory16(emu_ss, emu_sp, 0x0) = emu_Global_GetIP(g_global->structureFindStruct, 0x353F);
		find = (PoolFindStruct *)g_global->structureFindStruct;
	}

	find->houseID = emu_get_memory16(emu_ss, emu_sp, 0x4);
	find->type    = emu_get_memory16(emu_ss, emu_sp, 0x6);
	find->index   = 0xFFFF;

	b = Structure_Find(find);

	emu_ax = 0x0;
	emu_dx = 0x0;

	if (b == NULL) return;
	emu_dx = g_global->structureStartPos.s.cs;
	emu_ax = g_global->structureStartPos.s.ip + b->o.index * sizeof(Structure);
}

/**
 * Emulator wrapper around Structure_Find(). It uses a default struct in case
 *  none is given.
 *
 * @name emu_Structure_FindNext
 * @implements 1082:013D:0038:4AF1 ()
 */
void emu_Structure_FindNext()
{
	PoolFindStruct *find;
	Structure *b;

	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	find = (PoolFindStruct *)&emu_get_memory8(emu_get_memory16(emu_ss, emu_sp, 0x2), emu_get_memory16(emu_ss, emu_sp, 0x0), 0x0);
	if (emu_get_memory16(emu_ss, emu_sp, 0x2) == 0x0 && emu_get_memory16(emu_ss, emu_sp, 0x0) == 0x0) {
		emu_get_memory16(emu_ss, emu_sp, 0x2) = 0x353F;
		emu_get_memory16(emu_ss, emu_sp, 0x0) = emu_Global_GetIP(g_global->structureFindStruct, 0x353F);
		find = (PoolFindStruct *)g_global->structureFindStruct;
	}

	b = Structure_Find(find);

	emu_ax = 0x0;
	emu_dx = 0x0;

	if (b == NULL) return;
	emu_dx = g_global->structureStartPos.s.cs;
	emu_ax = g_global->structureStartPos.s.ip + b->o.index * sizeof(Structure);
}

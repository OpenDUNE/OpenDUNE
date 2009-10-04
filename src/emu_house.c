#include <assert.h>
#include <stdio.h>
#include <string.h>
#include "types.h"
#include "libemu.h"
#include "global.h"
#include "house.h"

/**
 * Initialize the houses. It cleans the whole memory, and resets everything
 *  to zero. If as parameters a CS:IP pair is given, that will be used as
 *  start of the House array.
 *
 * @name emu_House_Init
 * @implements 10BE:000C:0020:F10F ()
 * @implements 10BE:002C:0026:4F78
 * @implements 10BE:0035:001D:55B0
 * @implements 10BE:0052:0007:F03C
 * @implements 10BE:0059:0006:A112
 * @implements 10BE:005F:0025:D55B
 * @implements 10BE:0077:000D:6824
 * @implements 10BE:0078:000C:5826
 * @implements 10BE:0084:0005:8BCF
 */
void emu_House_Init()
{
	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	uint16 newCS = emu_get_memory16(emu_ss, emu_sp,  0x2);
	uint16 newIP = emu_get_memory16(emu_ss, emu_sp,  0x0);

	g_global->houseCount = 0;

	if (newCS != 0x0 || newIP != 0x0) {
		/* Try to make the IP empty by moving as much as possible to the CS */
		g_global->houseStartPos.cs = newCS + (newIP >> 4);
		g_global->houseStartPos.ip = newIP & 0x000F;
	}

	if (g_global->houseStartPos.csip != 0x0) {
		memset(House_Get_ByIndex(0), 0, sizeof(House) * HOUSE_INDEX_MAX);
	}

	/* XXX -- Does this have ANY effect after above memset?! */
	int i;
	for (i = 0; i < 6; i++) {
		emu_push(i);
		emu_push(emu_cs); emu_push(0x005F); emu_House_Get_ByIndex();
		emu_sp += 2;

		if (emu_dx.x == 0x0 && emu_ax.x == 0x0) continue;

		House *h = House_Get_ByIndex(i);
		h->variable_08 = 0x000A;
	}

	emu_dx.x = 0;
	emu_ax.x = sizeof(House) * HOUSE_INDEX_MAX;
}

/**
 * Allocate memory for a house.
 *
 * @name emu_House_Allocate
 * @implements 10BE:00A0:0064:DF2A ()
 * @implements 10BE:0104:003D:D771
 * @implements 10BE:0141:0005:8BCF
 */
void emu_House_Allocate()
{
	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	int16 index = emu_get_memory16(emu_ss, emu_sp,  0x0);
	House *h = House_Allocate(index);

	if (h == NULL) {
		emu_dx.x = 0x0;
		emu_ax.x = 0x0;
		return;
	}

	emu_dx.x = g_global->houseStartPos.cs;
	emu_ax.x = g_global->houseStartPos.ip + h->index * sizeof(House);
}

/**
 * Get a house from the memory by index.
 *
 * @name emu_House_Get_ByIndex
 * @implements 10BE:01AB:002F:0E7B ()
 * @implements 10BE:01D8:0002:C33A
 * @implements 10BE:01DA:0006:5EA9
 * @implements 10BE:01E0:0002:2597
 */
void emu_House_Get_ByIndex()
{
	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	emu_ax.x = 0x0;
	emu_dx.x = 0x0;

	uint16 index = emu_get_memory16(emu_ss, emu_sp,  0x0);
	if (index >= HOUSE_INDEX_MAX) return;

	House *h = House_Get_ByIndex(index);
	if ((h->variable_04 & 0x0001) == 0) return;

	emu_dx.x = g_global->houseStartPos.cs;
	emu_ax.x = g_global->houseStartPos.ip + index * sizeof(House);
}

/**
 * Find the next house matching the filter. The struct should be initialized
 *  via emu_House_FindFirst().
 *
 * @name emu_House_FindNext
 * @implements 10BE:020F:004E:633B ()
 * @implements 10BE:0226:0037:B108
 * @implements 10BE:0234:0029:8A5C
 * @implements 10BE:025B:0002:C33A
 * @implements 10BE:025D:0006:5EA9
 * @implements 10BE:0263:0005:8BCF
 */
void emu_House_FindNext()
{
	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	HouseFindStruct *find = (HouseFindStruct *)&emu_get_memory8(emu_get_memory16(emu_ss, emu_sp,  0x2), emu_get_memory16(emu_ss, emu_sp,  0x0), 0x0);
	if (emu_get_memory16(emu_ss, emu_sp,  0x2) == 0x0 && emu_get_memory16(emu_ss, emu_sp,  0x0) == 0x0) {
		emu_get_memory16(emu_ss, emu_sp,  0x2) = 0x353F;
		emu_get_memory16(emu_ss, emu_sp,  0x0) = 0x87BA; // XXX -- g_global->houseFindStruct
		find = (HouseFindStruct *)g_global->houseFindStruct;
	}

	House *h = House_Find(&find->index);

	if (h == NULL) {
		emu_dx.x = 0x0;
		emu_ax.x = 0x0;
		return;
	}

	/* Find back the CS:IP of the house */
	emu_dx.x = g_global->houseStartPos.cs;
	emu_ax.x = emu_Global_GetIP(h, g_global->houseStartPos.cs);
}

/**
 * Finds the first house. Call emu_House_FindNext() to find the next entry.
 *
 * @name emu_House_FindFirst
 * @implements 10BE:01E2:0027:6596 ()
 * @implements 10BE:01F5:0014:C21B
 * @implements 10BE:0209:0004:5B1F
 * @implements 10BE:020D:0002:2597
 */
void emu_House_FindFirst()
{
	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	HouseFindStruct *find = (HouseFindStruct *)&emu_get_memory8(emu_get_memory16(emu_ss, emu_sp,  0x2), emu_get_memory16(emu_ss, emu_sp,  0x0), 0x0);
	if (emu_get_memory16(emu_ss, emu_sp,  0x2) == 0x0 && emu_get_memory16(emu_ss, emu_sp,  0x0) == 0x0) {
		emu_get_memory16(emu_ss, emu_sp,  0x2) = 0x353F;
		emu_get_memory16(emu_ss, emu_sp,  0x0) = 0x87BA; // XXX -- g_global->houseFindStruct
		find = (HouseFindStruct *)g_global->houseFindStruct;
	}

	find->index = -1;

	House *h = House_Find(&find->index);

	if (h == NULL) {
		emu_dx.x = 0x0;
		emu_ax.x = 0x0;
		return;
	}

	/* Find back the CS:IP of the house */
	emu_dx.x = g_global->houseStartPos.cs;
	emu_ax.x = emu_Global_GetIP(h, g_global->houseStartPos.cs);
}

/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__2BF2_0000_0007_42B5()
 *
 * @name f__2BF2_0000_0007_42B5
 * @implements 2BF2:0000:0007:42B5 ()
 * @implements 2BF2:0007:0009:F6E6
 * @implements 2BF2:0010:0006:3068
 * @implements 2BF2:0016:000E:1B5D
 * @implements 2BF2:001A:000A:58BD
 *
 * Called From: 2649:001A:0008:33E4
 */
void emu_XMS_Init()
{
	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	g_global->xmsHandler.csip = 0x007007D0;
}

/**
 * Decompiled function f__2BF2_0040_000E_71D1()
 *
 * @name f__2BF2_0040_000E_71D1
 * @implements 2BF2:0040:000E:71D1 ()
 * @implements 2BF2:004E:000D:FF7F
 * @implements 2BF2:005E:000C:195B
 * @implements 2BF2:0066:0004:8EF2
 *
 * Called From: 2649:002C:0008:E3E9
 */
void emu_XMS_GetFreeMemory()
{
	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	emu_push(emu_bx);
	emu_push(emu_dx);

	emu_ah = 0x8; /* QUERY FREE EXTENDED MEMORY */
	emu_push(emu_cs); emu_push(0x004E); emu_cs = 0x0070; Handler_XMS();

	emu_pop(&emu_dx);
	emu_pop(&emu_bx);
}

/**
 * Decompiled function f__2BF2_006A_000E_61D9()
 *
 * @name f__2BF2_006A_000E_61D9
 * @implements 2BF2:006A:000E:61D9 ()
 * @implements 2BF2:0078:000F:EA76
 * @implements 2BF2:008A:0004:8EF2
 *
 * Called From: 2649:014F:000E:B2AC
 */
void emu_XMS_Allocate()
{
	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	emu_push(emu_bx);
	emu_push(emu_dx);

	emu_dx = emu_get_memory16(emu_ss, emu_sp, 0x0);
	emu_ah = 0x9; /* ALLOCATED EXTENDED MEMORY BLOCK */
	emu_push(emu_cs); emu_push(0x0078); emu_cs = 0x0070; Handler_XMS();
	emu_ax = emu_dx; /* File Handler */

	emu_pop(&emu_dx);
	emu_pop(&emu_bx);
}

/**
 * Decompiled function f__2BF2_008E_0013_1D73()
 *
 * @name f__2BF2_008E_0013_1D73
 * @implements 2BF2:008E:0013:1D73 ()
 * @implements 2BF2:00A1:000E:FF03
 * @implements 2BF2:00B2:0005:5C27
 *
 * Called From: 2649:0D35:000E:A84B
 * Called From: 2649:0E2E:0021:12DE
 * Called From: 2649:0EF3:003A:3C21
 * Called From: 2649:0F31:003A:7D24
 */
void emu_XMS_MoveToMemory()
{
	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	emu_push(emu_ds);
	emu_push(emu_si);
	emu_push(emu_bx);
	emu_push(emu_dx);

	emu_ds = 0x353F; emu_si = 0x9A3E;

	emu_ah = 0xB; /* MOVE EXTENDED MEMORY BLOCK */
	emu_push(emu_cs); emu_push(0x00A1); emu_cs = 0x0070; Handler_XMS();

	emu_pop(&emu_dx);
	emu_pop(&emu_bx);
	emu_pop(&emu_si);
	emu_pop(&emu_ds);
}

/**
 * Decompiled function f__2BF2_00B7_000E_61C1()
 *
 * @name f__2BF2_00B7_000E_61C1
 * @implements 2BF2:00B7:000E:61C1 ()
 * @implements 2BF2:00C5:000D:FF7F
 * @implements 2BF2:00D5:0004:8EF2
 *
 * Called From: 2649:0AF3:0010:11AB
 */
void emu_XMS_Free()
{
	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	emu_push(emu_bx);
	emu_push(emu_dx);

	emu_dx = emu_get_memory16(emu_ss, emu_sp, 0x0);
	emu_ah = 0xA; /* FREE EXTENDED MEMORY BLOCK */
	emu_push(emu_cs); emu_push(0x00C5); emu_cs = 0x0070; Handler_XMS();

	emu_pop(&emu_dx);
	emu_pop(&emu_bx);
}

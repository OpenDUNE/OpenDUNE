/* $Id$ */

#include <assert.h>
#include <stdio.h>
#include "types.h"
#include "libemu.h"
#include "../global.h"
#include "unknown.h"

extern void f__22A6_0D31_0015_A4C3();

/**
 * C-ified function of f__07AE_0000_00DF_A32C().
 *
 * @name emu_Unknown_07AE_0000
 * @implements 07AE:0000:00DF:A32C ()
 * @implements 07AE:00DF:0005:8BCF
 */
void emu_Unknown_07AE_0000()
{
	uint16 index;

	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	index = emu_get_memory16(emu_ss, emu_sp, 0x0);
	emu_ax = g_global->variable_6D5D;
	g_global->variable_6D5D = index;

	g_global->variable_992D = g_global->variable_4062[index][0];
	g_global->variable_992B = g_global->variable_4062[index][1];
	g_global->variable_992F = g_global->variable_4062[index][2];
	g_global->variable_9931 = g_global->variable_4062[index][3];
	g_global->variable_6D5B = g_global->variable_4062[index][4];
	g_global->variable_6D59 = g_global->variable_4062[index][5];
	g_global->variable_9935 = g_global->variable_4062[index][6];
	g_global->variable_9933 = g_global->variable_4062[index][7];
	g_global->variable_3196 = 0x0;
	g_global->variable_8225 = g_global->variable_9935 / (g_global->variable_6C70 + g_global->variable_6C6C);
	g_global->variable_6D5F = (g_global->variable_9931 - g_global->variable_6C6E) / (g_global->variable_6C71 + g_global->variable_6C6E);
	g_global->variable_6D63 = g_global->variable_992F << 3;
	g_global->variable_6D61 = g_global->variable_6D63 / (g_global->variable_6C70 + g_global->variable_6C6C);
}

/**
 * C-ified function of f__07AE_00E4_000D_9955().
 *
 * @name emu_Unknown_07AE_00E4
 * @implements 07AE:00E4:000D:9955 ()
 * @implements 07AE:00F1:0009:4821
 * @implements 07AE:00FA:0005:BBA6
 * @implements 07AE:00FF:0004:893F
 */
void emu_Unknown_07AE_00E4()
{
	uint16 index;

	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	index = emu_get_memory16(emu_ss, emu_sp, 0x0);

	emu_push(index);
	emu_push(emu_cs); emu_push(0x00F1); emu_Unknown_07AE_0000();
	emu_sp += 2;

	index = emu_ax;

	emu_push(emu_cs); emu_push(0x00FA); emu_Unknown_07AE_0103();

	emu_ax = index;
}

/**
 * C-ified function of f__07AE_0103_004C_B43B().
 *
 * @name emu_Unknown_07AE_0103
 * @implements 07AE:0103:004C:B43B ()
 * @implements 07AE:014F:001B:3CCB
 */
void emu_Unknown_07AE_0103()
{
	assert(g_global->variable_6668.csip == 0x22A60D31);

	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	emu_push(g_global->variable_6D59);
	emu_push(g_global->variable_992B + g_global->variable_9931 - 1);
	emu_push(((g_global->variable_992D + g_global->variable_992F) << 3) - 1);
	emu_push(g_global->variable_992B);
	emu_push(g_global->variable_992D << 3);
	emu_push(emu_cs); emu_push(0x014F); emu_cs = 0x22A6; f__22A6_0D31_0015_A4C3();
	emu_sp += 10;

	g_global->variable_8225 = 0x0;
	g_global->variable_9935 = 0x0;
	g_global->variable_9933 = 0x0;
	g_global->variable_3196 = 0x0;
}

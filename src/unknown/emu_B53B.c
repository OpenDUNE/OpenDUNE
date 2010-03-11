/* $Id$ */

#include <assert.h>
#include <stdio.h>
#include "types.h"
#include "libemu.h"
#include "../global.h"
#include "unknown.h"

extern void emu_File_Error();
extern void emu_String_printf();
extern void emu_Terminate_Normal();
extern void overlay(uint16 cs, uint8 force);

/**
 * C-ified function of f__B53B_0000_0050_FEA6().
 *
 * @name emu_Unknown_B53B_0000
 * @implements B53B:0000:0050:FEA6 ()
 */
void emu_Unknown_B53B_0000()
{
	uint16 unknown;

	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	unknown = emu_get_memory16(emu_ss, emu_sp, 0x0);
	g_global->variable_4062[g_global->variable_6D5D][0] -= unknown;
	g_global->variable_4062[g_global->variable_6D5D][1] -= unknown << 3;
	g_global->variable_4062[g_global->variable_6D5D][2] += unknown << 1;
	g_global->variable_4062[g_global->variable_6D5D][3] += unknown << 4;

	emu_push(g_global->variable_6D5D);
	emu_push(emu_cs); emu_push(0x0050); emu_cs = 0x07AE; emu_Unknown_07AE_0000();
	emu_sp += 2;

	g_global->variable_9933 = 0x0;
	g_global->variable_9935 = 0x0;
}

/**
 * C-ified function of f__B53B_0289_001F_95C1().
 *
 * @name emu_File_Error_Wrapper
 * @implements B53B:0289:001F:95C1 ()
 */
void emu_File_Error_Wrapper()
{
	uint16 oldVariable_6C91;

	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	oldVariable_6C91 = g_global->variable_6C91;
	g_global->variable_6C91 = 0x0;

	emu_push(emu_get_memory16(emu_ss, emu_sp, 0x4));
	emu_push(emu_get_memory16(emu_ss, emu_sp, 0x2));
	emu_push(emu_get_memory16(emu_ss, emu_sp, 0x0));
	emu_push(emu_cs); emu_push(0x02A8); emu_File_Error();
	emu_sp += 6;

	g_global->variable_6C91 = oldVariable_6C91;

	emu_ax = 0x1;
}


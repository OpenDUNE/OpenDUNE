/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__2BF2_0000_0007_42B5()
 *
 * @name f__2BF2_0000_0007_42B5
 * @implements 2BF2:0000:0007:42B5 ()
 *
 * Called From: 2649:001A:0008:33E4
 */
void f__2BF2_0000_0007_42B5()
{
	emu_push(emu_bx);
	emu_push(emu_es);
	emu_movw(&emu_ax, 0x4300);
	emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = 0x0070; emu_push(0x0007); Interrupt_DOS_Multiplex();
	f__2BF2_0007_0009_F6E6();
}

/**
 * Decompiled function f__2BF2_0007_0009_F6E6()
 *
 * @name f__2BF2_0007_0009_F6E6
 * @implements 2BF2:0007:0009:F6E6 ()
 *
 * Called From: 2BF2:0007:0007:42B5
 */
void f__2BF2_0007_0009_F6E6()
{
	emu_cmpb(&emu_al, 0x80);
	if (!emu_flags.zf) { f__2BF2_0016_000E_1B5D(); return; }
	emu_movw(&emu_ax, 0x4310);
	/* Unresolved jump */ emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = emu_get_memory16(0, 0, 0x2F * 4 + 2); emu_push(0x0010); emu_ip = emu_get_memory16(0, 0, 0x2F * 4 + 0); emu_last_cs = 0x2BF2; emu_last_ip = 0x000E; emu_last_length = 0x0009; emu_last_crc = 0xF6E6; emu_call();
	/* Unresolved jump */ emu_ip = 0x0010; emu_last_cs = 0x2BF2; emu_last_ip = 0x0010; emu_last_length = 0x0009; emu_last_crc = 0xF6E6; emu_call();
}

/**
 * Decompiled function f__2BF2_0016_000E_1B5D()
 *
 * @name f__2BF2_0016_000E_1B5D
 * @implements 2BF2:0016:000E:1B5D ()
 *
 * Called From: 2BF2:0009:0009:F6E6
 */
void f__2BF2_0016_000E_1B5D()
{
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x6E3E), emu_ax);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x6E40), emu_dx);
	emu_pop(&emu_es);
	emu_pop(&emu_bx);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

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
 * @implements 2BF2:0016:000E:1B5D
 *
 * Called From: 2649:001A:0008:33E4
 */
void f__2BF2_0000_0007_42B5()
{
l__0000:
	emu_push(emu_bx);
	emu_push(emu_es);
	emu_ax = 0x4300;
	emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = 0x0070; emu_push(0x0007); Interrupt_DOS_Multiplex();
l__0007:
	emu_cmpb(&emu_al, 0x80);
	if (emu_al != 0x80) goto l__0016;
	emu_ax = 0x4310;
	/* Unresolved jump */ emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = emu_get_memory16(0, 0, 0x2F * 4 + 2); emu_push(0x0010); emu_ip = emu_get_memory16(0, 0, 0x2F * 4 + 0); emu_last_cs = 0x2BF2; emu_last_ip = 0x000E; emu_last_length = 0x0009; emu_last_crc = 0xF6E6; emu_call();
	/* Unresolved jump */ emu_ip = 0x0010; emu_last_cs = 0x2BF2; emu_last_ip = 0x0010; emu_last_length = 0x0009; emu_last_crc = 0xF6E6; emu_call();
l__0016:
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_get_memory16(emu_ds, 0x00, 0x6E3E) = emu_ax;
	emu_get_memory16(emu_ds, 0x00, 0x6E40) = emu_dx;
	emu_pop(&emu_es);
	emu_pop(&emu_bx);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__2BF2_008E_0013_1D73()
 *
 * @name f__2BF2_008E_0013_1D73
 * @implements 2BF2:008E:0013:1D73 ()
 *
 * Called From: 2649:0F31:003A:7D24
 */
void f__2BF2_008E_0013_1D73()
{
l__008E:
	emu_push(emu_bx);
	emu_push(emu_dx);
	emu_push(emu_ds);
	emu_push(emu_si);
	emu_push(emu_ds);
	emu_ax = 0x353F;
	emu_ds = emu_ax;
	emu_si = 0x9A3E;
	emu_ah = 0xB;

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_ds, 0x00, 0x6E3E);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_ds, 0x00, 0x6E40);
	emu_push(0x00A1);
	switch ((emu_cs << 16) + emu_ip) {
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x2BF2; emu_last_ip = 0x009D; emu_last_length = 0x0013; emu_last_crc = 0x1D73;
			emu_call();
			return;
	}
	/* Unresolved jump */ emu_ip = 0x00A1; emu_last_cs = 0x2BF2; emu_last_ip = 0x00A1; emu_last_length = 0x0013; emu_last_crc = 0x1D73; emu_call();
}

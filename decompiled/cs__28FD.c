/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__28FD_000C_0007_5DA9()
 *
 * @name f__28FD_000C_0007_5DA9
 * @implements 28FD:000C:0007:5DA9 ()
 *
 * Called From: 1DB6:006E:0005:90EF
 */
void f__28FD_000C_0007_5DA9()
{
	emu_push(emu_ax);
	emu_push(emu_bx);
	emu_push(emu_dx);
	emu_movb(&emu_ah, 0x19);
	emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = 0x0070; emu_push(0x0013); Interrupt_DOS();
	f__28FD_0013_0009_539B();
}

/**
 * Decompiled function f__28FD_0013_0009_539B()
 *
 * @name f__28FD_0013_0009_539B
 * @implements 28FD:0013:0009:539B ()
 *
 */
void f__28FD_0013_0009_539B()
{
	emu_movb(&emu_get_memory8(emu_ds, 0x00, 0x986D), emu_al);
	emu_movb(&emu_dl, emu_al);
	emu_movb(&emu_ah, 0xE);
	emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = 0x0070; emu_push(0x001C); Interrupt_DOS();
	f__28FD_001C_000F_5F38();
}

/**
 * Decompiled function f__28FD_001C_000F_5F38()
 *
 * @name f__28FD_001C_000F_5F38
 * @implements 28FD:001C:000F:5F38 ()
 *
 */
void f__28FD_001C_000F_5F38()
{
	emu_decb(&emu_al);
	emu_xorb(&emu_ah, emu_ah);
	emu_movw(&emu_dx, emu_ax);
	emu_movb(&emu_bl, emu_dl);
	emu_incb(&emu_bl);
	emu_movw(&emu_ax, 0x440E);
	emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = 0x0070; emu_push(0x002B); Interrupt_DOS();
	f__28FD_002B_0009_3693();
}

/**
 * Decompiled function f__28FD_002B_0009_3693()
 *
 * @name f__28FD_002B_0009_3693
 * @implements 28FD:002B:0009:3693 ()
 *
 */
void f__28FD_002B_0009_3693()
{
	if (!emu_flags.cf) { f__28FD_0034_0009_3133(); return; }
	emu_cmpb(&emu_al, 0xF);
	if (!emu_flags.zf) { f__28FD_0034_0009_3133(); return; }
	emu_decw(&emu_dx);
	/* Unresolved jump */ emu_ip = 0x0022; emu_last_cs = 0x28FD; emu_last_ip = 0x0032; emu_last_length = 0x0009; emu_last_crc = 0x3693; emu_call();
}

/**
 * Decompiled function f__28FD_0034_0009_3133()
 *
 * @name f__28FD_0034_0009_3133
 * @implements 28FD:0034:0009:3133 ()
 *
 * Called From: 28FD:002B:0009:3693
 */
void f__28FD_0034_0009_3133()
{
	emu_movw(&emu_ax, emu_dx);
	emu_movb(&emu_get_memory8(emu_ds, 0x00, 0x986E), emu_al);
	emu_pop(&emu_dx);
	emu_pop(&emu_bx);
	emu_pop(&emu_ax);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

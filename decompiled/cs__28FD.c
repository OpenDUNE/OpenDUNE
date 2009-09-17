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
	emu_push(emu_ax.x);
	emu_push(emu_bx.x);
	emu_push(emu_dx.x);
	emu_movb(&emu_ax.h, 0x19);
	emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = 0x0070; emu_push(0x0013); f__0070_0108_0005_E45B();
	f__28FD_0013_0009_539B();
}

/**
 * Decompiled function f__28FD_0013_0009_539B()
 *
 * @name f__28FD_0013_0009_539B
 * @implements 28FD:0013:0009:539B ()
 *
 * Called From: 28FD:0013:0007:5DA9
 */
void f__28FD_0013_0009_539B()
{
	emu_movb(&emu_get_memory8(emu_ds, 0x00, -0x6793), emu_ax.l);
	emu_movb(&emu_dx.l, emu_ax.l);
	emu_movb(&emu_ax.h, 0xE);
	emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = 0x0070; emu_push(0x001C); f__0070_0108_0005_E45B();
	f__28FD_001C_000F_5F38();
}

/**
 * Decompiled function f__28FD_001C_000F_5F38()
 *
 * @name f__28FD_001C_000F_5F38
 * @implements 28FD:001C:000F:5F38 ()
 *
 * Called From: 28FD:001C:0009:539B
 */
void f__28FD_001C_000F_5F38()
{
	emu_decb(&emu_ax.l);
	emu_xorb(&emu_ax.h, emu_ax.h);
	emu_movw(&emu_dx.x, emu_ax.x);
	emu_movb(&emu_bx.l, emu_dx.l);
	emu_incb(&emu_bx.l);
	emu_movw(&emu_ax.x, 0x440E);
	emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = 0x0070; emu_push(0x002B); f__0070_0108_0005_E45B();
	f__28FD_002B_0009_3693();
}

/**
 * Decompiled function f__28FD_002B_0009_3693()
 *
 * @name f__28FD_002B_0009_3693
 * @implements 28FD:002B:0009:3693 ()
 *
 * Called From: 28FD:002B:000F:5F38
 */
void f__28FD_002B_0009_3693()
{
	if (!emu_flags.cf) { f__28FD_0034_0009_3133(); return; }
	emu_cmpb(&emu_ax.l, 0xF);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0034; emu_last_cs = 0x28FD; emu_last_ip = 0x002F; emu_last_length = 0x0009; emu_last_crc = 0x3693; emu_call(); return; }
	emu_decw(&emu_dx.x);
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
	emu_movw(&emu_ax.x, emu_dx.x);
	emu_movb(&emu_get_memory8(emu_ds, 0x00, -0x6792), emu_ax.l);
	emu_pop(&emu_dx.x);
	emu_pop(&emu_bx.x);
	emu_pop(&emu_ax.x);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

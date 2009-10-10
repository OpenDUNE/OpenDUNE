/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__263B_0006_001C_9C72()
 *
 * @name f__263B_0006_001C_9C72
 * @implements 263B:0006:001C:9C72 ()
 *
 * Called From: 1DB6:000A:000B:BFBA
 * Called From: B500:004F:0005:B7DE
 */
void f__263B_0006_001C_9C72()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x9A08), 0xF00);
	emu_push(emu_ds);
	emu_movw(&emu_ax, 0x99F8);
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_movw(&emu_ax, 0x9A08);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x10);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0022); emu_cs = 0x01F7; f__01F7_1FB0_0010_CF18();
	f__263B_0022_000B_A4FA();
}

/**
 * Decompiled function f__263B_0022_000B_A4FA()
 *
 * @name f__263B_0022_000B_A4FA
 * @implements 263B:0022:000B:A4FA ()
 *
 */
void f__263B_0022_000B_A4FA()
{
	emu_addw(&emu_sp, 0xA);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x99F8));
	emu_andw(&emu_ax, 0xFF);
	f__263B_002D_0002_2597(); return;
}

/**
 * Decompiled function f__263B_002D_0002_2597()
 *
 * @name f__263B_002D_0002_2597
 * @implements 263B:002D:0002:2597 ()
 *
 * Called From: 263B:002B:000B:A4FA
 */
void f__263B_002D_0002_2597()
{
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__263B_002F_0016_FDB0()
 *
 * @name f__263B_002F_0016_FDB0
 * @implements 263B:002F:0016:FDB0 ()
 *
 * Called From: 25C4:004F:000B:50EF
 * Called From: B500:005E:000F:ACF6
 */
void f__263B_002F_0016_FDB0()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_si);
	emu_movw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpw(&emu_si, 0x9);
	if (!(emu_flags.sf != emu_flags.of)) { f__263B_0045_0027_058F(); return; }
	emu_movw(&emu_bx, emu_si);
	emu_shlw(&emu_bx, 0x1);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, emu_bx, 0x6E28));
	f__263B_0048_0024_9FBD(); return;
}

/**
 * Decompiled function f__263B_0045_0027_058F()
 *
 * @name f__263B_0045_0027_058F
 * @implements 263B:0045:0027:058F ()
 *
 * Called From: 263B:0039:0016:FDB0
 */
void f__263B_0045_0027_058F()
{
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x6E26));
	f__263B_0048_0024_9FBD(); return;
}

/**
 * Decompiled function f__263B_0048_0024_9FBD()
 *
 * @name f__263B_0048_0024_9FBD
 * @implements 263B:0048:0024:9FBD ()
 *
 * Called From: 263B:0043:0016:FDB0
 */
void f__263B_0048_0024_9FBD()
{
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x9A08), emu_ax);
	emu_movw(&emu_bx, emu_si);
	emu_shlw(&emu_bx, 0x1);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, emu_bx, 0x6E28));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x6E26));
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x006F; emu_last_cs = 0x263B; emu_last_ip = 0x0057; emu_last_length = 0x0024; emu_last_crc = 0x9FBD; emu_call(); return; }
	emu_push(emu_ds);
	emu_movw(&emu_ax, 0x99F8);
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_movw(&emu_ax, 0x9A08);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x10);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x006C); emu_cs = 0x01F7; f__01F7_1FB0_0010_CF18();
	f__263B_006C_0006_8475();
}

/**
 * Decompiled function f__263B_006C_0006_8475()
 *
 * @name f__263B_006C_0006_8475
 * @implements 263B:006C:0006:8475 ()
 *
 */
void f__263B_006C_0006_8475()
{
	emu_addw(&emu_sp, 0xA);
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

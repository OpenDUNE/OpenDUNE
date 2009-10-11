/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__263B_0006_001C_9C72()
 *
 * @name f__263B_0006_001C_9C72
 * @implements 263B:0006:001C:9C72 ()
 * @implements 263B:0022:000B:A4FA
 * @implements 263B:002D:0002:2597
 *
 * Called From: 1DB6:000A:000B:BFBA
 * Called From: B500:004F:0005:B7DE
 */
void f__263B_0006_001C_9C72()
{
l__0006:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_get_memory16(emu_ds, 0x00, 0x9A08) = 0xF00;
	emu_push(emu_ds);
	emu_ax = 0x99F8;
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x9A08;
	emu_push(emu_ax);
	emu_ax = 0x10;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0022); emu_cs = 0x01F7; f__01F7_1FB0_0010_CF18();
	goto l__0022;
l__0022:
	emu_addw(&emu_sp, 0xA);
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x99F8);
	emu_andw(&emu_ax, 0xFF);
	goto l__002D;
l__002D:
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
 * @implements 263B:0045:0027:058F
 * @implements 263B:0048:0024:9FBD
 * @implements 263B:006C:0006:8475
 *
 * Called From: 25C4:004F:000B:50EF
 * Called From: B500:005E:000F:ACF6
 */
void f__263B_002F_0016_FDB0()
{
l__002F:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_si);
	emu_si = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_cmpw(&emu_si, 0x9);
	if (!(emu_flags.sf != emu_flags.of)) goto l__0045;
	emu_bx = emu_si;
	emu_shlw(&emu_bx, 0x1);
	emu_ax = emu_get_memory16(emu_ds, emu_bx, 0x6E28);
	goto l__0048;
l__0045:
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x6E26);
	goto l__0048;
l__0048:
	emu_get_memory16(emu_ds, 0x00, 0x9A08) = emu_ax;
	emu_bx = emu_si;
	emu_shlw(&emu_bx, 0x1);
	emu_ax = emu_get_memory16(emu_ds, emu_bx, 0x6E28);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x6E26));
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x006F; emu_last_cs = 0x263B; emu_last_ip = 0x0057; emu_last_length = 0x0024; emu_last_crc = 0x9FBD; emu_call(); return; }
	emu_push(emu_ds);
	emu_ax = 0x99F8;
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x9A08;
	emu_push(emu_ax);
	emu_ax = 0x10;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x006C); emu_cs = 0x01F7; f__01F7_1FB0_0010_CF18();
	goto l__006C;
l__006C:
	emu_addw(&emu_sp, 0xA);
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

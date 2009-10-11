/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__2618_0008_001B_FAA6()
 *
 * @name f__2618_0008_001B_FAA6
 * @implements 2618:0008:001B:FAA6 ()
 * @implements 2618:0023:0018:6D26
 * @implements 2618:003B:0004:893F
 *
 * Called From: B4E9:000E:0013:DC68
 * Called From: B4E9:0036:0013:DF68
 */
void f__2618_0008_001B_FAA6()
{
l__0008:
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subw(&emu_sp, 0x2);
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax, 0x1);
	emu_movb(&emu_cl, emu_dl);
	emu_shlw(&emu_ax, emu_cl);
	emu_testw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x76B8));
	if (emu_flags.zf) goto l__0023;
	emu_movw(&emu_ax, 0x1);
	/* Unresolved jump */ emu_ip = 0x0025; emu_last_cs = 0x2618; emu_last_ip = 0x0021; emu_last_length = 0x001B; emu_last_crc = 0xFAA6; emu_call();
l__0023:
	emu_xorw(&emu_ax, emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax);
	emu_movb(&emu_cl, emu_dl);
	emu_addb(&emu_cl, 0xFF);
	emu_movw(&emu_ax, 0x1);
	emu_shlw(&emu_ax, emu_cl);
	emu_orw(&emu_get_memory16(emu_ds, 0x00, 0x76B8), emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	goto l__003B;
l__003B:
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__2618_003F_001B_FAA6()
 *
 * @name f__2618_003F_001B_FAA6
 * @implements 2618:003F:001B:FAA6 ()
 * @implements 2618:005A:001A:52A4
 * @implements 2618:0074:0004:893F
 *
 * Called From: B4E9:0019:0009:A588
 */
void f__2618_003F_001B_FAA6()
{
l__003F:
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subw(&emu_sp, 0x2);
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax, 0x1);
	emu_movb(&emu_cl, emu_dl);
	emu_shlw(&emu_ax, emu_cl);
	emu_testw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x76B8));
	if (emu_flags.zf) goto l__005A;
	emu_movw(&emu_ax, 0x1);
	/* Unresolved jump */ emu_ip = 0x005C; emu_last_cs = 0x2618; emu_last_ip = 0x0058; emu_last_length = 0x001B; emu_last_crc = 0xFAA6; emu_call();
l__005A:
	emu_xorw(&emu_ax, emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax);
	emu_movb(&emu_cl, emu_dl);
	emu_addb(&emu_cl, 0xFF);
	emu_movw(&emu_ax, 0x1);
	emu_shlw(&emu_ax, emu_cl);
	emu_notw(&emu_ax, emu_ax);
	emu_andw(&emu_get_memory16(emu_ds, 0x00, 0x76B8), emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	goto l__0074;
l__0074:
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

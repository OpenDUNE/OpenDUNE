/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__24FD_000A_000B_2043()
 *
 * @name f__24FD_000A_000B_2043
 * @implements 24FD:000A:000B:2043 ()
 *
 * Called From: B4E6:00A5:000C:3F1A
 * Called From: B4E6:00D0:0009:B4B2
 * Called From: B503:001A:0009:BCB2
 */
void f__24FD_000A_000B_2043()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x4);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	f__24FD_003E_000B_81CA(); return;
}

/**
 * Decompiled function f__24FD_0015_0015_F428()
 *
 * @name f__24FD_0015_0015_F428
 * @implements 24FD:0015:0015:F428 ()
 *
 * Called From: 24FD:0043:000B:81CA
 * Called From: 24FD:0043:001F:D95C
 */
void f__24FD_0015_0015_F428()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76AA));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76A8));
	emu_addws(&emu_dx.x, 0x1);
	emu_adcw(&emu_ax.x, 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_dx.x);
	f__24FD_002A_001F_D95C(); return;
}

/**
 * Decompiled function f__24FD_002A_001F_D95C()
 *
 * @name f__24FD_002A_001F_D95C
 * @implements 24FD:002A:001F:D95C ()
 *
 * Called From: 24FD:0028:0015:F428
 * Called From: 24FD:003C:001F:D95C
 */
void f__24FD_002A_001F_D95C()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76AA));
	if (!(emu_flags.cf || emu_flags.zf)) { /* Unresolved jump */ emu_ip = 0x002A; emu_last_cs = 0x24FD; emu_last_ip = 0x0034; emu_last_length = 0x001F; emu_last_crc = 0xD95C; emu_call(); return; }
	if (emu_flags.cf) { /* Unresolved jump */ emu_ip = 0x003E; emu_last_cs = 0x24FD; emu_last_ip = 0x0036; emu_last_length = 0x001F; emu_last_crc = 0xD95C; emu_call(); return; }
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76A8));
	if (!emu_flags.cf) { f__24FD_002A_001F_D95C(); return; }
	emu_movw(&emu_ax.x, emu_bx.x);
	emu_decw(&emu_bx.x);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.zf) { f__24FD_0015_0015_F428(); return; }
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__24FD_003E_000B_81CA()
 *
 * @name f__24FD_003E_000B_81CA
 * @implements 24FD:003E:000B:81CA ()
 *
 * Called From: 24FD:0013:000B:2043
 */
void f__24FD_003E_000B_81CA()
{
	emu_movw(&emu_ax.x, emu_bx.x);
	emu_decw(&emu_bx.x);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.zf) { f__24FD_0015_0015_F428(); return; }
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

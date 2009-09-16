/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__2B1E_000E_003E_6F6E()
 *
 * @name f__2B1E_000E_003E_6F6E
 * @implements 2B1E:000E:003E:6F6E ()
 *
 * Called From: 2B1E:00D7:002A:643E
 * Called From: 2B1E:01A1:001B:A980
 */
void f__2B1E_000E_003E_6F6E()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_ax.x);
	emu_push(emu_bx.x);
	emu_push(emu_dx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movb(&emu_ax.h, 0x50);
	emu_imulub(&emu_ax.l, emu_ax.h);
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_dx.x, 0x3B4);
	emu_movb(&emu_ax.l, 0xE);
	emu_outb(emu_dx.x, emu_ax.l);
	emu_incw(&emu_dx.x);
	emu_movb(&emu_ax.l, emu_bx.h);
	emu_outb(emu_dx.x, emu_ax.l);
	emu_decw(&emu_dx.x);
	emu_movb(&emu_ax.l, 0xF);
	emu_outb(emu_dx.x, emu_ax.l);
	emu_incw(&emu_dx.x);
	emu_movb(&emu_ax.l, emu_bx.l);
	emu_outb(emu_dx.x, emu_ax.l);
	emu_addw(&emu_bx.x, emu_bx.x);
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0xC), emu_bx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x8), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0xA), emu_ax.x);
	emu_pop(&emu_dx.x);
	emu_pop(&emu_bx.x);
	emu_pop(&emu_ax.x);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__2B1E_00B0_002A_643E()
 *
 * @name f__2B1E_00B0_002A_643E
 * @implements 2B1E:00B0:002A:643E ()
 *
 * Called From: 2B1E:01BA:0019:A374
 * Called From: 2B1E:01BA:0013:5C95
 */
void f__2B1E_00B0_002A_643E()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_ax.x);
	emu_push(emu_es);
	emu_push(emu_di);
	emu_movw(&emu_di, emu_get_memory16(emu_cs, 0x00,  0xC));
	emu_movw(&emu_ax.x, 0xB000);
	emu_movw(&emu_es, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.h, emu_get_memory8(emu_ss, emu_bp,  0x8));
	emu_stosw();
	emu_push(emu_get_memory16(emu_cs, 0x00,  0xA));
	emu_incw(&emu_get_memory16(emu_cs, 0x00,  0x8));
	emu_push(emu_get_memory16(emu_cs, 0x00,  0x8));
	emu_push(emu_cs);
	emu_push(0x00DA); f__2B1E_000E_003E_6F6E();
	f__2B1E_00DA_0008_E9B2();
}

/**
 * Decompiled function f__2B1E_00DA_0008_E9B2()
 *
 * @name f__2B1E_00DA_0008_E9B2
 * @implements 2B1E:00DA:0008:E9B2 ()
 *
 * Called From: 2B1E:00DA:002A:643E
 */
void f__2B1E_00DA_0008_E9B2()
{
	emu_addws(&emu_sp, 0x4);
	emu_pop(&emu_di);
	emu_pop(&emu_es);
	emu_pop(&emu_ax.x);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__2B1E_0189_001B_A980()
 *
 * @name f__2B1E_0189_001B_A980
 * @implements 2B1E:0189:001B:A980 ()
 *
 * Called From: 1423:0137:001A:B869
 */
void f__2B1E_0189_001B_A980()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_ax.x);
	emu_push(emu_bx.x);
	emu_push(emu_cx.x);
	emu_push(emu_dx.x);
	emu_push(emu_es);
	emu_push(emu_di);
	emu_push(emu_ds);
	emu_push(emu_si);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0x8), 0x0);
	if (emu_flags.zf) { emu_ip = 0x020F; emu_last_cs = 0x2B1E; emu_last_ip = 0x0198; emu_last_length = 0x001B; emu_last_crc = 0xA980; emu_call(); return; } // Jump does not resolve
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_cs);
	emu_push(0x01A4); f__2B1E_000E_003E_6F6E();
	f__2B1E_01A4_0019_A374();
}

/**
 * Decompiled function f__2B1E_01A4_0019_A374()
 *
 * @name f__2B1E_01A4_0019_A374
 * @implements 2B1E:01A4:0019:A374 ()
 *
 * Called From: 2B1E:01A4:001B:A980
 */
void f__2B1E_01A4_0019_A374()
{
	emu_addws(&emu_sp, 0x4);
	emu_lfp(&emu_ds, &emu_si, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_lodsb(emu_ds);
	emu_orb(&emu_ax.l, emu_ax.l);
	if (emu_flags.zf) { emu_ip = 0x020F; emu_last_cs = 0x2B1E; emu_last_ip = 0x01AD; emu_last_length = 0x0019; emu_last_crc = 0xA374; emu_call(); return; } // Jump does not resolve
	emu_cmpb(&emu_ax.l, 0xD);
	if (emu_flags.zf) { emu_ip = 0x01E1; emu_last_cs = 0x2B1E; emu_last_ip = 0x01B1; emu_last_length = 0x0019; emu_last_crc = 0xA374; emu_call(); return; } // Jump does not resolve
	emu_xorb(&emu_ax.h, emu_ax.h);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x01BD); f__2B1E_00B0_002A_643E();
	f__2B1E_01BD_001F_C28E();
}

/**
 * Decompiled function f__2B1E_01AA_0013_5C95()
 *
 * @name f__2B1E_01AA_0013_5C95
 * @implements 2B1E:01AA:0013:5C95 ()
 *
 * Called From: 2B1E:020D:0002:029A
 */
void f__2B1E_01AA_0013_5C95()
{
	emu_lodsb(emu_ds);
	emu_orb(&emu_ax.l, emu_ax.l);
	if (emu_flags.zf) { f__2B1E_020F_000A_00B3(); return; }
	emu_cmpb(&emu_ax.l, 0xD);
	if (emu_flags.zf) { emu_ip = 0x01E1; emu_last_cs = 0x2B1E; emu_last_ip = 0x01B1; emu_last_length = 0x0013; emu_last_crc = 0x5C95; emu_call(); return; } // Jump does not resolve
	emu_xorb(&emu_ax.h, emu_ax.h);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x01BD); f__2B1E_00B0_002A_643E();
	f__2B1E_01BD_001F_C28E();
}

/**
 * Decompiled function f__2B1E_01BD_001F_C28E()
 *
 * @name f__2B1E_01BD_001F_C28E
 * @implements 2B1E:01BD:001F:C28E ()
 *
 * Called From: 2B1E:01BD:0019:A374
 * Called From: 2B1E:01BD:0013:5C95
 */
void f__2B1E_01BD_001F_C28E()
{
	emu_addws(&emu_sp, 0x4);
	emu_cmpws(&emu_get_memory16(emu_cs, 0x00,  0x8), 0x50);
	if (emu_flags.cf) { f__2B1E_01F1_0016_F6EC(); return; }
	emu_incw(&emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_ax.x);
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0x2), 0x0);
	emu_pop(&emu_bp);
	emu_push(emu_cs);
	emu_push(0x01DC); emu_ip = 0x000E; emu_last_cs = 0x2B1E; emu_last_ip = 0x01D9; emu_last_length = 0x001F; emu_last_crc = 0xC28E; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__2B1E_01F1_0016_F6EC()
 *
 * @name f__2B1E_01F1_0016_F6EC
 * @implements 2B1E:01F1:0016:F6EC ()
 *
 * Called From: 2B1E:01C6:001F:C28E
 */
void f__2B1E_01F1_0016_F6EC()
{
	emu_cmpws(&emu_get_memory16(emu_cs, 0x00,  0xA), 0x19);
	if (emu_flags.cf) { f__2B1E_020D_0002_029A(); return; }
	emu_push(emu_ax.x);
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0x2), 0x1);
	emu_pop(&emu_bp);
	emu_push(emu_cs);
	emu_push(0x0207); emu_ip = 0x006D; emu_last_cs = 0x2B1E; emu_last_ip = 0x0204; emu_last_length = 0x0016; emu_last_crc = 0xF6EC; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__2B1E_020D_0002_029A()
 *
 * @name f__2B1E_020D_0002_029A
 * @implements 2B1E:020D:0002:029A ()
 *
 * Called From: 2B1E:01F7:0016:F6EC
 */
void f__2B1E_020D_0002_029A()
{
	f__2B1E_01AA_0013_5C95(); return;
}

/**
 * Decompiled function f__2B1E_020F_000A_00B3()
 *
 * @name f__2B1E_020F_000A_00B3
 * @implements 2B1E:020F:000A:00B3 ()
 *
 * Called From: 2B1E:01AD:0013:5C95
 */
void f__2B1E_020F_000A_00B3()
{
	emu_pop(&emu_si);
	emu_pop(&emu_ds);
	emu_pop(&emu_di);
	emu_pop(&emu_es);
	emu_pop(&emu_dx.x);
	emu_pop(&emu_cx.x);
	emu_pop(&emu_bx.x);
	emu_pop(&emu_ax.x);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

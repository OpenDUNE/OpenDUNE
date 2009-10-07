/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__2BA5_0006_009C_A3D1()
 *
 * @name f__2BA5_0006_009C_A3D1
 * @implements 2BA5:0006:009C:A3D1 ()
 *
 * Called From: 259E:0050:0015:5E4A
 * Called From: B495:0E04:0018:09EF
 * Called From: B495:0F23:0015:AB67
 * Called From: B4ED:0BC1:0017:53DB
 * Called From: B503:13B8:0018:11EB
 * Called From: B518:1562:0037:4A8F
 * Called From: B518:1562:0027:625D
 */
void f__2BA5_0006_009C_A3D1()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x2);
	emu_push(emu_ax);
	emu_push(emu_bx);
	emu_push(emu_cx);
	emu_push(emu_dx);
	emu_push(emu_es);
	emu_push(emu_di);
	emu_push(emu_ds);
	emu_push(emu_si);
	emu_cld();
	emu_movw(&emu_bx, emu_get_memory16(emu_ds, 0x00,  0x9937));
	emu_andb(&emu_bl, 0x1);
	emu_shlb(&emu_bl, 0x1);
	emu_shlb(&emu_bl, 0x1);
	emu_shlb(&emu_bl, 0x1);
	emu_push(emu_ds);
	emu_pop(&emu_es);
	emu_movw(&emu_di, 0x70A2);
	emu_lfp(&emu_ds, &emu_si, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x300);
	emu_movw(&emu_cx, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_rep_cmpsb(emu_ds);
	if (emu_flags.zf) { f__2BA5_0096_000C_CF6C(); return; }
	emu_decw(&emu_si);
	emu_decw(&emu_di);
	emu_incw(&emu_cx);
	emu_xorw(&emu_dx, emu_dx);
	emu_movw(&emu_ax, emu_cx);
	emu_movw(&emu_cx, 0x3);
	emu_divw(&emu_ax, emu_cx);
	emu_orw(&emu_dx, emu_dx);
	if (emu_flags.zf) { f__2BA5_004C_0056_46A5(); return; }
	emu_negw(&emu_dx, emu_dx);
	emu_addws(&emu_dx, 0x3);
	emu_incw(&emu_ax);
	emu_movw(&emu_cx, emu_ax);
	emu_addw(&emu_cx, emu_ax);
	emu_addw(&emu_cx, emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x0);
	emu_cmpw(&emu_cx, 0x102);
	if ((emu_flags.cf || emu_flags.zf)) { f__2BA5_0067_003B_2718(); return; }
	emu_subw(&emu_cx, 0x102);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_cx);
	emu_movw(&emu_cx, 0x102);
	emu_subw(&emu_si, emu_dx);
	emu_subw(&emu_di, emu_dx);
	emu_negw(&emu_ax, emu_ax);
	emu_addw(&emu_ax, 0x100);
	emu_movw(&emu_dx, 0x3C8);
	emu_outb(emu_dx, emu_al);
	emu_movw(&emu_dx, 0x3DA);
	emu_inb(&emu_al, emu_dx);
	emu_andb(&emu_al, 0x8);
	emu_xorb(&emu_al, emu_bl);
	if (emu_flags.zf) { f__2BA5_0077_002B_8A9F(); return; }
	emu_inb(&emu_al, emu_dx);
	emu_andb(&emu_al, 0x8);
	emu_xorb(&emu_al, emu_bl);
	if (!emu_flags.zf) { f__2BA5_007E_0024_E7C9(); return; }
	emu_movw(&emu_dx, 0x3C9);
	emu_pushf();
	emu_cli();
	emu_lodsb(emu_ds);
	emu_stosb();
	emu_outb(emu_dx, emu_al);
	if (--emu_cx != 0) { /* Unresolved jump */ emu_ip = 0x008A; emu_last_cs = 0x2BA5; emu_last_ip = 0x008D; emu_last_length = 0x009C; emu_last_crc = 0xA3D1; emu_call(); }
	emu_popf();
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x0);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x002F; emu_last_cs = 0x2BA5; emu_last_ip = 0x0094; emu_last_length = 0x009C; emu_last_crc = 0xA3D1; emu_call(); return; }
	emu_pop(&emu_si);
	emu_pop(&emu_ds);
	emu_pop(&emu_di);
	emu_pop(&emu_es);
	emu_pop(&emu_dx);
	emu_pop(&emu_cx);
	emu_pop(&emu_bx);
	emu_pop(&emu_ax);
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__2BA5_002F_0073_32B7()
 *
 * @name f__2BA5_002F_0073_32B7
 * @implements 2BA5:002F:0073:32B7 ()
 *
 * Called From: 2BA5:0094:0018:488A
 */
void f__2BA5_002F_0073_32B7()
{
	emu_movw(&emu_cx, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_rep_cmpsb(emu_ds);
	if (emu_flags.zf) { f__2BA5_0096_000C_CF6C(); return; }
	emu_decw(&emu_si);
	emu_decw(&emu_di);
	emu_incw(&emu_cx);
	emu_xorw(&emu_dx, emu_dx);
	emu_movw(&emu_ax, emu_cx);
	emu_movw(&emu_cx, 0x3);
	emu_divw(&emu_ax, emu_cx);
	emu_orw(&emu_dx, emu_dx);
	if (emu_flags.zf) { f__2BA5_004C_0056_46A5(); return; }
	emu_negw(&emu_dx, emu_dx);
	emu_addws(&emu_dx, 0x3);
	emu_incw(&emu_ax);
	emu_movw(&emu_cx, emu_ax);
	emu_addw(&emu_cx, emu_ax);
	emu_addw(&emu_cx, emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x0);
	emu_cmpw(&emu_cx, 0x102);
	if ((emu_flags.cf || emu_flags.zf)) { f__2BA5_0067_003B_2718(); return; }
	emu_subw(&emu_cx, 0x102);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_cx);
	emu_movw(&emu_cx, 0x102);
	emu_subw(&emu_si, emu_dx);
	emu_subw(&emu_di, emu_dx);
	emu_negw(&emu_ax, emu_ax);
	emu_addw(&emu_ax, 0x100);
	emu_movw(&emu_dx, 0x3C8);
	emu_outb(emu_dx, emu_al);
	emu_movw(&emu_dx, 0x3DA);
	emu_inb(&emu_al, emu_dx);
	emu_andb(&emu_al, 0x8);
	emu_xorb(&emu_al, emu_bl);
	if (emu_flags.zf) { f__2BA5_0077_002B_8A9F(); return; }
	emu_inb(&emu_al, emu_dx);
	emu_andb(&emu_al, 0x8);
	emu_xorb(&emu_al, emu_bl);
	if (!emu_flags.zf) { f__2BA5_007E_0024_E7C9(); return; }
	emu_movw(&emu_dx, 0x3C9);
	emu_pushf();
	emu_cli();
	emu_lodsb(emu_ds);
	emu_stosb();
	emu_outb(emu_dx, emu_al);
	if (--emu_cx != 0) { /* Unresolved jump */ emu_ip = 0x008A; emu_last_cs = 0x2BA5; emu_last_ip = 0x008D; emu_last_length = 0x0073; emu_last_crc = 0x32B7; emu_call(); }
	emu_popf();
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x0);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x002F; emu_last_cs = 0x2BA5; emu_last_ip = 0x0094; emu_last_length = 0x0073; emu_last_crc = 0x32B7; emu_call(); return; }
	emu_pop(&emu_si);
	emu_pop(&emu_ds);
	emu_pop(&emu_di);
	emu_pop(&emu_es);
	emu_pop(&emu_dx);
	emu_pop(&emu_cx);
	emu_pop(&emu_bx);
	emu_pop(&emu_ax);
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__2BA5_004C_0056_46A5()
 *
 * @name f__2BA5_004C_0056_46A5
 * @implements 2BA5:004C:0056:46A5 ()
 *
 * Called From: 2BA5:0044:009C:A3D1
 * Called From: 2BA5:0044:0073:32B7
 */
void f__2BA5_004C_0056_46A5()
{
	emu_movw(&emu_cx, emu_ax);
	emu_addw(&emu_cx, emu_ax);
	emu_addw(&emu_cx, emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x0);
	emu_cmpw(&emu_cx, 0x102);
	if ((emu_flags.cf || emu_flags.zf)) { f__2BA5_0067_003B_2718(); return; }
	emu_subw(&emu_cx, 0x102);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_cx);
	emu_movw(&emu_cx, 0x102);
	emu_subw(&emu_si, emu_dx);
	emu_subw(&emu_di, emu_dx);
	emu_negw(&emu_ax, emu_ax);
	emu_addw(&emu_ax, 0x100);
	emu_movw(&emu_dx, 0x3C8);
	emu_outb(emu_dx, emu_al);
	emu_movw(&emu_dx, 0x3DA);
	emu_inb(&emu_al, emu_dx);
	emu_andb(&emu_al, 0x8);
	emu_xorb(&emu_al, emu_bl);
	if (emu_flags.zf) { f__2BA5_0077_002B_8A9F(); return; }
	emu_inb(&emu_al, emu_dx);
	emu_andb(&emu_al, 0x8);
	emu_xorb(&emu_al, emu_bl);
	if (!emu_flags.zf) { f__2BA5_007E_0024_E7C9(); return; }
	emu_movw(&emu_dx, 0x3C9);
	emu_pushf();
	emu_cli();
	emu_lodsb(emu_ds);
	emu_stosb();
	emu_outb(emu_dx, emu_al);
	if (--emu_cx != 0) { f__2BA5_008A_0018_488A(); return; }
	emu_popf();
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x0);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x002F; emu_last_cs = 0x2BA5; emu_last_ip = 0x0094; emu_last_length = 0x0056; emu_last_crc = 0x46A5; emu_call(); return; }
	emu_pop(&emu_si);
	emu_pop(&emu_ds);
	emu_pop(&emu_di);
	emu_pop(&emu_es);
	emu_pop(&emu_dx);
	emu_pop(&emu_cx);
	emu_pop(&emu_bx);
	emu_pop(&emu_ax);
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__2BA5_0067_003B_2718()
 *
 * @name f__2BA5_0067_003B_2718
 * @implements 2BA5:0067:003B:2718 ()
 *
 * Called From: 2BA5:005B:0056:46A5
 * Called From: 2BA5:005B:0073:32B7
 * Called From: 2BA5:005B:009C:A3D1
 */
void f__2BA5_0067_003B_2718()
{
	emu_subw(&emu_si, emu_dx);
	emu_subw(&emu_di, emu_dx);
	emu_negw(&emu_ax, emu_ax);
	emu_addw(&emu_ax, 0x100);
	emu_movw(&emu_dx, 0x3C8);
	emu_outb(emu_dx, emu_al);
	emu_movw(&emu_dx, 0x3DA);
	emu_inb(&emu_al, emu_dx);
	emu_andb(&emu_al, 0x8);
	emu_xorb(&emu_al, emu_bl);
	if (emu_flags.zf) { f__2BA5_0077_002B_8A9F(); return; }
	emu_inb(&emu_al, emu_dx);
	emu_andb(&emu_al, 0x8);
	emu_xorb(&emu_al, emu_bl);
	if (!emu_flags.zf) { f__2BA5_007E_0024_E7C9(); return; }
	emu_movw(&emu_dx, 0x3C9);
	emu_pushf();
	emu_cli();
	emu_lodsb(emu_ds);
	emu_stosb();
	emu_outb(emu_dx, emu_al);
	if (--emu_cx != 0) { /* Unresolved jump */ emu_ip = 0x008A; emu_last_cs = 0x2BA5; emu_last_ip = 0x008D; emu_last_length = 0x003B; emu_last_crc = 0x2718; emu_call(); }
	emu_popf();
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x0);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x002F; emu_last_cs = 0x2BA5; emu_last_ip = 0x0094; emu_last_length = 0x003B; emu_last_crc = 0x2718; emu_call(); return; }
	emu_pop(&emu_si);
	emu_pop(&emu_ds);
	emu_pop(&emu_di);
	emu_pop(&emu_es);
	emu_pop(&emu_dx);
	emu_pop(&emu_cx);
	emu_pop(&emu_bx);
	emu_pop(&emu_ax);
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__2BA5_0077_002B_8A9F()
 *
 * @name f__2BA5_0077_002B_8A9F
 * @implements 2BA5:0077:002B:8A9F ()
 *
 * Called From: 2BA5:007C:002B:8A9F
 * Called From: 2BA5:007C:003B:2718
 * Called From: 2BA5:007C:0056:46A5
 * Called From: 2BA5:007C:009C:A3D1
 * Called From: 2BA5:007C:0073:32B7
 */
void f__2BA5_0077_002B_8A9F()
{
	emu_inb(&emu_al, emu_dx);
	emu_andb(&emu_al, 0x8);
	emu_xorb(&emu_al, emu_bl);
	if (emu_flags.zf) { f__2BA5_0077_002B_8A9F(); return; }
	emu_inb(&emu_al, emu_dx);
	emu_andb(&emu_al, 0x8);
	emu_xorb(&emu_al, emu_bl);
	if (!emu_flags.zf) { f__2BA5_007E_0024_E7C9(); return; }
	emu_movw(&emu_dx, 0x3C9);
	emu_pushf();
	emu_cli();
	emu_lodsb(emu_ds);
	emu_stosb();
	emu_outb(emu_dx, emu_al);
	if (--emu_cx != 0) { f__2BA5_008A_0018_488A(); return; }
	emu_popf();
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x0);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x002F; emu_last_cs = 0x2BA5; emu_last_ip = 0x0094; emu_last_length = 0x002B; emu_last_crc = 0x8A9F; emu_call(); return; }
	emu_pop(&emu_si);
	emu_pop(&emu_ds);
	emu_pop(&emu_di);
	emu_pop(&emu_es);
	emu_pop(&emu_dx);
	emu_pop(&emu_cx);
	emu_pop(&emu_bx);
	emu_pop(&emu_ax);
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__2BA5_007E_0024_E7C9()
 *
 * @name f__2BA5_007E_0024_E7C9
 * @implements 2BA5:007E:0024:E7C9 ()
 *
 * Called From: 2BA5:0083:0024:E7C9
 * Called From: 2BA5:0083:002B:8A9F
 * Called From: 2BA5:0083:003B:2718
 * Called From: 2BA5:0083:0056:46A5
 * Called From: 2BA5:0083:0073:32B7
 * Called From: 2BA5:0083:009C:A3D1
 */
void f__2BA5_007E_0024_E7C9()
{
	emu_inb(&emu_al, emu_dx);
	emu_andb(&emu_al, 0x8);
	emu_xorb(&emu_al, emu_bl);
	if (!emu_flags.zf) { f__2BA5_007E_0024_E7C9(); return; }
	emu_movw(&emu_dx, 0x3C9);
	emu_pushf();
	emu_cli();
	emu_lodsb(emu_ds);
	emu_stosb();
	emu_outb(emu_dx, emu_al);
	if (--emu_cx != 0) { f__2BA5_008A_0018_488A(); return; }
	emu_popf();
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x0);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x002F; emu_last_cs = 0x2BA5; emu_last_ip = 0x0094; emu_last_length = 0x0024; emu_last_crc = 0xE7C9; emu_call(); return; }
	emu_pop(&emu_si);
	emu_pop(&emu_ds);
	emu_pop(&emu_di);
	emu_pop(&emu_es);
	emu_pop(&emu_dx);
	emu_pop(&emu_cx);
	emu_pop(&emu_bx);
	emu_pop(&emu_ax);
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__2BA5_008A_0018_488A()
 *
 * @name f__2BA5_008A_0018_488A
 * @implements 2BA5:008A:0018:488A ()
 *
 * Called From: 2BA5:008D:0018:488A
 * Called From: 2BA5:008D:0024:E7C9
 * Called From: 2BA5:008D:002B:8A9F
 * Called From: 2BA5:008D:0056:46A5
 */
void f__2BA5_008A_0018_488A()
{
	emu_lodsb(emu_ds);
	emu_stosb();
	emu_outb(emu_dx, emu_al);
	if (--emu_cx != 0) { f__2BA5_008A_0018_488A(); return; }
	emu_popf();
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x0);
	if (!emu_flags.zf) { f__2BA5_002F_0073_32B7(); return; }
	emu_pop(&emu_si);
	emu_pop(&emu_ds);
	emu_pop(&emu_di);
	emu_pop(&emu_es);
	emu_pop(&emu_dx);
	emu_pop(&emu_cx);
	emu_pop(&emu_bx);
	emu_pop(&emu_ax);
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__2BA5_0096_000C_CF6C()
 *
 * @name f__2BA5_0096_000C_CF6C
 * @implements 2BA5:0096:000C:CF6C ()
 *
 * Called From: 2BA5:0034:009C:A3D1
 * Called From: 2BA5:0034:0073:32B7
 */
void f__2BA5_0096_000C_CF6C()
{
	emu_pop(&emu_si);
	emu_pop(&emu_ds);
	emu_pop(&emu_di);
	emu_pop(&emu_es);
	emu_pop(&emu_dx);
	emu_pop(&emu_cx);
	emu_pop(&emu_bx);
	emu_pop(&emu_ax);
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__2BA5_00A2_0052_DEE3()
 *
 * @name f__2BA5_00A2_0052_DEE3
 * @implements 2BA5:00A2:0052:DEE3 ()
 *
 * Called From: 0642:061D:0015:23C1
 * Called From: 0642:0635:0018:8149
 * Called From: 0642:064D:0018:8149
 * Called From: 0642:0665:0018:8149
 * Called From: 0642:06F9:0015:23A1
 * Called From: 0642:06F9:002A:1932
 * Called From: 0642:06F9:0040:399F
 * Called From: 0642:0711:0018:8129
 */
void f__2BA5_00A2_0052_DEE3()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x2);
	emu_push(emu_bx);
	emu_push(emu_cx);
	emu_push(emu_es);
	emu_push(emu_di);
	emu_push(emu_si);
	emu_lfp(&emu_es, &emu_di, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_si, emu_di);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_addw(&emu_di, emu_ax);
	emu_addw(&emu_di, emu_ax);
	emu_addw(&emu_di, emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_addw(&emu_si, emu_ax);
	emu_addw(&emu_si, emu_ax);
	emu_addw(&emu_si, emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x0);
	emu_movw(&emu_cx, 0x3);
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_si,  0x0));
	emu_subb(&emu_al, emu_get_memory8(emu_es, emu_di,  0x0));
	if (emu_flags.zf) { f__2BA5_00E4_0010_E837(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x1);
	emu_incb(&emu_get_memory8(emu_es, emu_di,  0x0));
	if (!emu_flags.cf) { f__2BA5_00E4_0010_E837(); return; }
	emu_decb(&emu_get_memory8(emu_es, emu_di,  0x0));
	emu_decb(&emu_get_memory8(emu_es, emu_di,  0x0));
	emu_incw(&emu_di);
	emu_incw(&emu_si);
	if (--emu_cx != 0) { f__2BA5_00CC_0028_3096(); return; }
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_pop(&emu_si);
	emu_pop(&emu_di);
	emu_pop(&emu_es);
	emu_pop(&emu_cx);
	emu_pop(&emu_bx);
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__2BA5_00CC_0028_3096()
 *
 * @name f__2BA5_00CC_0028_3096
 * @implements 2BA5:00CC:0028:3096 ()
 *
 * Called From: 2BA5:00E6:0052:DEE3
 * Called From: 2BA5:00E6:0010:E837
 * Called From: 2BA5:00E6:0028:3096
 */
void f__2BA5_00CC_0028_3096()
{
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_si,  0x0));
	emu_subb(&emu_al, emu_get_memory8(emu_es, emu_di,  0x0));
	if (emu_flags.zf) { f__2BA5_00E4_0010_E837(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x1);
	emu_incb(&emu_get_memory8(emu_es, emu_di,  0x0));
	if (!emu_flags.cf) { f__2BA5_00E4_0010_E837(); return; }
	emu_decb(&emu_get_memory8(emu_es, emu_di,  0x0));
	emu_decb(&emu_get_memory8(emu_es, emu_di,  0x0));
	emu_incw(&emu_di);
	emu_incw(&emu_si);
	if (--emu_cx != 0) { f__2BA5_00CC_0028_3096(); return; }
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_pop(&emu_si);
	emu_pop(&emu_di);
	emu_pop(&emu_es);
	emu_pop(&emu_cx);
	emu_pop(&emu_bx);
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__2BA5_00E4_0010_E837()
 *
 * @name f__2BA5_00E4_0010_E837
 * @implements 2BA5:00E4:0010:E837 ()
 *
 * Called From: 2BA5:00D2:0028:3096
 * Called From: 2BA5:00D2:0052:DEE3
 * Called From: 2BA5:00DC:0052:DEE3
 * Called From: 2BA5:00DC:0028:3096
 */
void f__2BA5_00E4_0010_E837()
{
	emu_incw(&emu_di);
	emu_incw(&emu_si);
	if (--emu_cx != 0) { f__2BA5_00CC_0028_3096(); return; }
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_pop(&emu_si);
	emu_pop(&emu_di);
	emu_pop(&emu_es);
	emu_pop(&emu_cx);
	emu_pop(&emu_bx);
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

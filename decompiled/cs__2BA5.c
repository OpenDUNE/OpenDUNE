/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__2BA5_0006_009C_1FA4()
 *
 * @name f__2BA5_0006_009C_1FA4
 * @implements 2BA5:0006:009C:1FA4 ()
 *
 * Called From: 259E:0050:0015:2233
 * Called From: B495:0E04:0018:E4D5
 * Called From: B495:0F23:0015:07D5
 * Called From: B4ED:0BC1:0017:1E5A
 * Called From: B503:13B8:0018:E441
 * Called From: B518:1562:0027:9137
 * Called From: B518:1562:0037:1049
 */
void f__2BA5_0006_009C_1FA4()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x2);
	emu_push(emu_ax.x);
	emu_push(emu_bx.x);
	emu_push(emu_cx.x);
	emu_push(emu_dx.x);
	emu_push(emu_es);
	emu_push(emu_di);
	emu_push(emu_ds);
	emu_push(emu_si);
	emu_cld();
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00, -0x66C9));
	emu_andb(&emu_bx.l, 0x1);
	emu_shlb(&emu_bx.l, 0x1);
	emu_shlb(&emu_bx.l, 0x1);
	emu_shlb(&emu_bx.l, 0x1);
	emu_push(emu_ds);
	emu_pop(&emu_es);
	emu_movw(&emu_di, 0x70A2);
	emu_lfp(&emu_ds, &emu_si, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x300);
	emu_movw(&emu_cx.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_rep_cmpsb(emu_ds);
	if (emu_flags.zf) { f__2BA5_0096_000C_0E3E(); return; }
	emu_decw(&emu_si);
	emu_decw(&emu_di);
	emu_incw(&emu_cx.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_movw(&emu_ax.x, emu_cx.x);
	emu_movw(&emu_cx.x, 0x3);
	emu_divw(&emu_ax.x, emu_cx.x);
	emu_orw(&emu_dx.x, emu_dx.x);
	if (emu_flags.zf) { f__2BA5_004C_0056_6AB0(); return; }
	emu_negw(&emu_dx.x, emu_dx.x);
	emu_addws(&emu_dx.x, 0x3);
	emu_incw(&emu_ax.x);
	emu_movw(&emu_cx.x, emu_ax.x);
	emu_addw(&emu_cx.x, emu_ax.x);
	emu_addw(&emu_cx.x, emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x0);
	emu_cmpw(&emu_cx.x, 0x102);
	if ((emu_flags.cf || emu_flags.zf)) { f__2BA5_0067_003B_0969(); return; }
	emu_subw(&emu_cx.x, 0x102);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_cx.x);
	emu_movw(&emu_cx.x, 0x102);
	emu_subw(&emu_si, emu_dx.x);
	emu_subw(&emu_di, emu_dx.x);
	emu_negw(&emu_ax.x, emu_ax.x);
	emu_addw(&emu_ax.x, 0x100);
	emu_movw(&emu_dx.x, 0x3C8);
	emu_outb(emu_dx.x, emu_ax.l);
	emu_movw(&emu_dx.x, 0x3DA);
	emu_inb(&emu_ax.l, emu_dx.x);
	emu_andb(&emu_ax.l, 0x8);
	emu_xorb(&emu_ax.l, emu_bx.l);
	if (emu_flags.zf) { f__2BA5_0077_002B_8B7A(); return; }
	emu_inb(&emu_ax.l, emu_dx.x);
	emu_andb(&emu_ax.l, 0x8);
	emu_xorb(&emu_ax.l, emu_bx.l);
	if (!emu_flags.zf) { f__2BA5_007E_0024_3ADD(); return; }
	emu_movw(&emu_dx.x, 0x3C9);
	emu_pushf();
	emu_cli();
	emu_lodsb(emu_ds);
	emu_stosb();
	emu_outb(emu_dx.x, emu_ax.l);
	if (--emu_cx.x != 0) { emu_ip = 0x008A; emu_last_cs = 0x2BA5; emu_last_ip = 0x008D; emu_last_length = 0x009C; emu_last_crc = 0x1FA4; emu_call(); } // Jump does not resolve
	emu_popf();
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x0);
	if (!emu_flags.zf) { emu_ip = 0x002F; emu_last_cs = 0x2BA5; emu_last_ip = 0x0094; emu_last_length = 0x009C; emu_last_crc = 0x1FA4; emu_call(); return; } // Jump does not resolve
	emu_pop(&emu_si);
	emu_pop(&emu_ds);
	emu_pop(&emu_di);
	emu_pop(&emu_es);
	emu_pop(&emu_dx.x);
	emu_pop(&emu_cx.x);
	emu_pop(&emu_bx.x);
	emu_pop(&emu_ax.x);
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__2BA5_002F_0073_ED01()
 *
 * @name f__2BA5_002F_0073_ED01
 * @implements 2BA5:002F:0073:ED01 ()
 *
 * Called From: 2BA5:0094:0018:B9A6
 */
void f__2BA5_002F_0073_ED01()
{
	emu_movw(&emu_cx.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_rep_cmpsb(emu_ds);
	if (emu_flags.zf) { f__2BA5_0096_000C_0E3E(); return; }
	emu_decw(&emu_si);
	emu_decw(&emu_di);
	emu_incw(&emu_cx.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_movw(&emu_ax.x, emu_cx.x);
	emu_movw(&emu_cx.x, 0x3);
	emu_divw(&emu_ax.x, emu_cx.x);
	emu_orw(&emu_dx.x, emu_dx.x);
	if (emu_flags.zf) { f__2BA5_004C_0056_6AB0(); return; }
	emu_negw(&emu_dx.x, emu_dx.x);
	emu_addws(&emu_dx.x, 0x3);
	emu_incw(&emu_ax.x);
	emu_movw(&emu_cx.x, emu_ax.x);
	emu_addw(&emu_cx.x, emu_ax.x);
	emu_addw(&emu_cx.x, emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x0);
	emu_cmpw(&emu_cx.x, 0x102);
	if ((emu_flags.cf || emu_flags.zf)) { f__2BA5_0067_003B_0969(); return; }
	emu_subw(&emu_cx.x, 0x102);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_cx.x);
	emu_movw(&emu_cx.x, 0x102);
	emu_subw(&emu_si, emu_dx.x);
	emu_subw(&emu_di, emu_dx.x);
	emu_negw(&emu_ax.x, emu_ax.x);
	emu_addw(&emu_ax.x, 0x100);
	emu_movw(&emu_dx.x, 0x3C8);
	emu_outb(emu_dx.x, emu_ax.l);
	emu_movw(&emu_dx.x, 0x3DA);
	emu_inb(&emu_ax.l, emu_dx.x);
	emu_andb(&emu_ax.l, 0x8);
	emu_xorb(&emu_ax.l, emu_bx.l);
	if (emu_flags.zf) { f__2BA5_0077_002B_8B7A(); return; }
	emu_inb(&emu_ax.l, emu_dx.x);
	emu_andb(&emu_ax.l, 0x8);
	emu_xorb(&emu_ax.l, emu_bx.l);
	if (!emu_flags.zf) { f__2BA5_007E_0024_3ADD(); return; }
	emu_movw(&emu_dx.x, 0x3C9);
	emu_pushf();
	emu_cli();
	emu_lodsb(emu_ds);
	emu_stosb();
	emu_outb(emu_dx.x, emu_ax.l);
	if (--emu_cx.x != 0) { emu_ip = 0x008A; emu_last_cs = 0x2BA5; emu_last_ip = 0x008D; emu_last_length = 0x0073; emu_last_crc = 0xED01; emu_call(); } // Jump does not resolve
	emu_popf();
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x0);
	if (!emu_flags.zf) { emu_ip = 0x002F; emu_last_cs = 0x2BA5; emu_last_ip = 0x0094; emu_last_length = 0x0073; emu_last_crc = 0xED01; emu_call(); return; } // Jump does not resolve
	emu_pop(&emu_si);
	emu_pop(&emu_ds);
	emu_pop(&emu_di);
	emu_pop(&emu_es);
	emu_pop(&emu_dx.x);
	emu_pop(&emu_cx.x);
	emu_pop(&emu_bx.x);
	emu_pop(&emu_ax.x);
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__2BA5_004C_0056_6AB0()
 *
 * @name f__2BA5_004C_0056_6AB0
 * @implements 2BA5:004C:0056:6AB0 ()
 *
 * Called From: 2BA5:0044:0073:ED01
 * Called From: 2BA5:0044:009C:1FA4
 */
void f__2BA5_004C_0056_6AB0()
{
	emu_movw(&emu_cx.x, emu_ax.x);
	emu_addw(&emu_cx.x, emu_ax.x);
	emu_addw(&emu_cx.x, emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x0);
	emu_cmpw(&emu_cx.x, 0x102);
	if ((emu_flags.cf || emu_flags.zf)) { f__2BA5_0067_003B_0969(); return; }
	emu_subw(&emu_cx.x, 0x102);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_cx.x);
	emu_movw(&emu_cx.x, 0x102);
	emu_subw(&emu_si, emu_dx.x);
	emu_subw(&emu_di, emu_dx.x);
	emu_negw(&emu_ax.x, emu_ax.x);
	emu_addw(&emu_ax.x, 0x100);
	emu_movw(&emu_dx.x, 0x3C8);
	emu_outb(emu_dx.x, emu_ax.l);
	emu_movw(&emu_dx.x, 0x3DA);
	emu_inb(&emu_ax.l, emu_dx.x);
	emu_andb(&emu_ax.l, 0x8);
	emu_xorb(&emu_ax.l, emu_bx.l);
	if (emu_flags.zf) { f__2BA5_0077_002B_8B7A(); return; }
	emu_inb(&emu_ax.l, emu_dx.x);
	emu_andb(&emu_ax.l, 0x8);
	emu_xorb(&emu_ax.l, emu_bx.l);
	if (!emu_flags.zf) { f__2BA5_007E_0024_3ADD(); return; }
	emu_movw(&emu_dx.x, 0x3C9);
	emu_pushf();
	emu_cli();
	emu_lodsb(emu_ds);
	emu_stosb();
	emu_outb(emu_dx.x, emu_ax.l);
	if (--emu_cx.x != 0) { emu_ip = 0x008A; emu_last_cs = 0x2BA5; emu_last_ip = 0x008D; emu_last_length = 0x0056; emu_last_crc = 0x6AB0; emu_call(); } // Jump does not resolve
	emu_popf();
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x0);
	if (!emu_flags.zf) { emu_ip = 0x002F; emu_last_cs = 0x2BA5; emu_last_ip = 0x0094; emu_last_length = 0x0056; emu_last_crc = 0x6AB0; emu_call(); return; } // Jump does not resolve
	emu_pop(&emu_si);
	emu_pop(&emu_ds);
	emu_pop(&emu_di);
	emu_pop(&emu_es);
	emu_pop(&emu_dx.x);
	emu_pop(&emu_cx.x);
	emu_pop(&emu_bx.x);
	emu_pop(&emu_ax.x);
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__2BA5_0067_003B_0969()
 *
 * @name f__2BA5_0067_003B_0969
 * @implements 2BA5:0067:003B:0969 ()
 *
 * Called From: 2BA5:005B:0056:6AB0
 * Called From: 2BA5:005B:0073:ED01
 * Called From: 2BA5:005B:009C:1FA4
 */
void f__2BA5_0067_003B_0969()
{
	emu_subw(&emu_si, emu_dx.x);
	emu_subw(&emu_di, emu_dx.x);
	emu_negw(&emu_ax.x, emu_ax.x);
	emu_addw(&emu_ax.x, 0x100);
	emu_movw(&emu_dx.x, 0x3C8);
	emu_outb(emu_dx.x, emu_ax.l);
	emu_movw(&emu_dx.x, 0x3DA);
	emu_inb(&emu_ax.l, emu_dx.x);
	emu_andb(&emu_ax.l, 0x8);
	emu_xorb(&emu_ax.l, emu_bx.l);
	if (emu_flags.zf) { f__2BA5_0077_002B_8B7A(); return; }
	emu_inb(&emu_ax.l, emu_dx.x);
	emu_andb(&emu_ax.l, 0x8);
	emu_xorb(&emu_ax.l, emu_bx.l);
	if (!emu_flags.zf) { f__2BA5_007E_0024_3ADD(); return; }
	emu_movw(&emu_dx.x, 0x3C9);
	emu_pushf();
	emu_cli();
	emu_lodsb(emu_ds);
	emu_stosb();
	emu_outb(emu_dx.x, emu_ax.l);
	if (--emu_cx.x != 0) { emu_ip = 0x008A; emu_last_cs = 0x2BA5; emu_last_ip = 0x008D; emu_last_length = 0x003B; emu_last_crc = 0x0969; emu_call(); } // Jump does not resolve
	emu_popf();
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x0);
	if (!emu_flags.zf) { emu_ip = 0x002F; emu_last_cs = 0x2BA5; emu_last_ip = 0x0094; emu_last_length = 0x003B; emu_last_crc = 0x0969; emu_call(); return; } // Jump does not resolve
	emu_pop(&emu_si);
	emu_pop(&emu_ds);
	emu_pop(&emu_di);
	emu_pop(&emu_es);
	emu_pop(&emu_dx.x);
	emu_pop(&emu_cx.x);
	emu_pop(&emu_bx.x);
	emu_pop(&emu_ax.x);
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__2BA5_0077_002B_8B7A()
 *
 * @name f__2BA5_0077_002B_8B7A
 * @implements 2BA5:0077:002B:8B7A ()
 *
 * Called From: 2BA5:007C:002B:8B7A
 * Called From: 2BA5:007C:003B:0969
 * Called From: 2BA5:007C:0056:6AB0
 * Called From: 2BA5:007C:0073:ED01
 * Called From: 2BA5:007C:009C:1FA4
 */
void f__2BA5_0077_002B_8B7A()
{
	emu_inb(&emu_ax.l, emu_dx.x);
	emu_andb(&emu_ax.l, 0x8);
	emu_xorb(&emu_ax.l, emu_bx.l);
	if (emu_flags.zf) { f__2BA5_0077_002B_8B7A(); return; }
	emu_inb(&emu_ax.l, emu_dx.x);
	emu_andb(&emu_ax.l, 0x8);
	emu_xorb(&emu_ax.l, emu_bx.l);
	if (!emu_flags.zf) { emu_ip = 0x007E; emu_last_cs = 0x2BA5; emu_last_ip = 0x0083; emu_last_length = 0x002B; emu_last_crc = 0x8B7A; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_dx.x, 0x3C9);
	emu_pushf();
	emu_cli();
	emu_lodsb(emu_ds);
	emu_stosb();
	emu_outb(emu_dx.x, emu_ax.l);
	if (--emu_cx.x != 0) { f__2BA5_008A_0018_B9A6(); return; }
	emu_popf();
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x0);
	if (!emu_flags.zf) { emu_ip = 0x002F; emu_last_cs = 0x2BA5; emu_last_ip = 0x0094; emu_last_length = 0x002B; emu_last_crc = 0x8B7A; emu_call(); return; } // Jump does not resolve
	emu_pop(&emu_si);
	emu_pop(&emu_ds);
	emu_pop(&emu_di);
	emu_pop(&emu_es);
	emu_pop(&emu_dx.x);
	emu_pop(&emu_cx.x);
	emu_pop(&emu_bx.x);
	emu_pop(&emu_ax.x);
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__2BA5_007E_0024_3ADD()
 *
 * @name f__2BA5_007E_0024_3ADD
 * @implements 2BA5:007E:0024:3ADD ()
 *
 * Called From: 2BA5:0083:0024:3ADD
 * Called From: 2BA5:0083:003B:0969
 * Called From: 2BA5:0083:0056:6AB0
 * Called From: 2BA5:0083:0073:ED01
 * Called From: 2BA5:0083:009C:1FA4
 */
void f__2BA5_007E_0024_3ADD()
{
	emu_inb(&emu_ax.l, emu_dx.x);
	emu_andb(&emu_ax.l, 0x8);
	emu_xorb(&emu_ax.l, emu_bx.l);
	if (!emu_flags.zf) { f__2BA5_007E_0024_3ADD(); return; }
	emu_movw(&emu_dx.x, 0x3C9);
	emu_pushf();
	emu_cli();
	emu_lodsb(emu_ds);
	emu_stosb();
	emu_outb(emu_dx.x, emu_ax.l);
	if (--emu_cx.x != 0) { f__2BA5_008A_0018_B9A6(); return; }
	emu_popf();
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x0);
	if (!emu_flags.zf) { emu_ip = 0x002F; emu_last_cs = 0x2BA5; emu_last_ip = 0x0094; emu_last_length = 0x0024; emu_last_crc = 0x3ADD; emu_call(); return; } // Jump does not resolve
	emu_pop(&emu_si);
	emu_pop(&emu_ds);
	emu_pop(&emu_di);
	emu_pop(&emu_es);
	emu_pop(&emu_dx.x);
	emu_pop(&emu_cx.x);
	emu_pop(&emu_bx.x);
	emu_pop(&emu_ax.x);
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__2BA5_008A_0018_B9A6()
 *
 * @name f__2BA5_008A_0018_B9A6
 * @implements 2BA5:008A:0018:B9A6 ()
 *
 * Called From: 2BA5:008D:0018:B9A6
 * Called From: 2BA5:008D:0024:3ADD
 * Called From: 2BA5:008D:002B:8B7A
 */
void f__2BA5_008A_0018_B9A6()
{
	emu_lodsb(emu_ds);
	emu_stosb();
	emu_outb(emu_dx.x, emu_ax.l);
	if (--emu_cx.x != 0) { f__2BA5_008A_0018_B9A6(); return; }
	emu_popf();
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x0);
	if (!emu_flags.zf) { f__2BA5_002F_0073_ED01(); return; }
	emu_pop(&emu_si);
	emu_pop(&emu_ds);
	emu_pop(&emu_di);
	emu_pop(&emu_es);
	emu_pop(&emu_dx.x);
	emu_pop(&emu_cx.x);
	emu_pop(&emu_bx.x);
	emu_pop(&emu_ax.x);
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__2BA5_0096_000C_0E3E()
 *
 * @name f__2BA5_0096_000C_0E3E
 * @implements 2BA5:0096:000C:0E3E ()
 *
 * Called From: 2BA5:0034:0073:ED01
 * Called From: 2BA5:0034:009C:1FA4
 */
void f__2BA5_0096_000C_0E3E()
{
	emu_pop(&emu_si);
	emu_pop(&emu_ds);
	emu_pop(&emu_di);
	emu_pop(&emu_es);
	emu_pop(&emu_dx.x);
	emu_pop(&emu_cx.x);
	emu_pop(&emu_bx.x);
	emu_pop(&emu_ax.x);
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__2BA5_00A2_0052_93F1()
 *
 * @name f__2BA5_00A2_0052_93F1
 * @implements 2BA5:00A2:0052:93F1 ()
 *
 * Called From: 0642:061D:0015:0EC1
 * Called From: 0642:0635:0018:EDC1
 * Called From: 0642:064D:0018:EDC1
 * Called From: 0642:0665:0018:EDC1
 * Called From: 0642:06F9:0015:0EF1
 * Called From: 0642:06F9:002A:9C65
 * Called From: 0642:06F9:0040:8BA0
 * Called From: 0642:0711:0018:EDF1
 */
void f__2BA5_00A2_0052_93F1()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x2);
	emu_push(emu_bx.x);
	emu_push(emu_cx.x);
	emu_push(emu_es);
	emu_push(emu_di);
	emu_push(emu_si);
	emu_lfp(&emu_es, &emu_di, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_si, emu_di);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_addw(&emu_di, emu_ax.x);
	emu_addw(&emu_di, emu_ax.x);
	emu_addw(&emu_di, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_addw(&emu_si, emu_ax.x);
	emu_addw(&emu_si, emu_ax.x);
	emu_addw(&emu_si, emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x0);
	emu_movw(&emu_cx.x, 0x3);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_si,  0x0));
	emu_subb(&emu_ax.l, emu_get_memory8(emu_es, emu_di,  0x0));
	if (emu_flags.zf) { f__2BA5_00E4_0010_8A93(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x1);
	emu_incb(&emu_get_memory8(emu_es, emu_di,  0x0));
	if (!emu_flags.cf) { f__2BA5_00E4_0010_8A93(); return; }
	emu_decb(&emu_get_memory8(emu_es, emu_di,  0x0));
	emu_decb(&emu_get_memory8(emu_es, emu_di,  0x0));
	emu_incw(&emu_di);
	emu_incw(&emu_si);
	if (--emu_cx.x != 0) { f__2BA5_00CC_0028_E9B0(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_pop(&emu_si);
	emu_pop(&emu_di);
	emu_pop(&emu_es);
	emu_pop(&emu_cx.x);
	emu_pop(&emu_bx.x);
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__2BA5_00CC_0028_E9B0()
 *
 * @name f__2BA5_00CC_0028_E9B0
 * @implements 2BA5:00CC:0028:E9B0 ()
 *
 * Called From: 2BA5:00E6:0010:8A93
 * Called From: 2BA5:00E6:0028:E9B0
 * Called From: 2BA5:00E6:0052:93F1
 */
void f__2BA5_00CC_0028_E9B0()
{
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_si,  0x0));
	emu_subb(&emu_ax.l, emu_get_memory8(emu_es, emu_di,  0x0));
	if (emu_flags.zf) { f__2BA5_00E4_0010_8A93(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x1);
	emu_incb(&emu_get_memory8(emu_es, emu_di,  0x0));
	if (!emu_flags.cf) { f__2BA5_00E4_0010_8A93(); return; }
	emu_decb(&emu_get_memory8(emu_es, emu_di,  0x0));
	emu_decb(&emu_get_memory8(emu_es, emu_di,  0x0));
	emu_incw(&emu_di);
	emu_incw(&emu_si);
	if (--emu_cx.x != 0) { f__2BA5_00CC_0028_E9B0(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_pop(&emu_si);
	emu_pop(&emu_di);
	emu_pop(&emu_es);
	emu_pop(&emu_cx.x);
	emu_pop(&emu_bx.x);
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__2BA5_00E4_0010_8A93()
 *
 * @name f__2BA5_00E4_0010_8A93
 * @implements 2BA5:00E4:0010:8A93 ()
 *
 * Called From: 2BA5:00D2:0028:E9B0
 * Called From: 2BA5:00D2:0052:93F1
 * Called From: 2BA5:00DC:0028:E9B0
 * Called From: 2BA5:00DC:0052:93F1
 */
void f__2BA5_00E4_0010_8A93()
{
	emu_incw(&emu_di);
	emu_incw(&emu_si);
	if (--emu_cx.x != 0) { f__2BA5_00CC_0028_E9B0(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_pop(&emu_si);
	emu_pop(&emu_di);
	emu_pop(&emu_es);
	emu_pop(&emu_cx.x);
	emu_pop(&emu_bx.x);
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__2BD6_0000_0015_24A9()
 *
 * @name f__2BD6_0000_0015_24A9
 * @implements 2BD6:0000:0015:24A9 ()
 *
 * Called From: 253D:02E0:0026:AF12
 * Called From: 2903:033C:0046:75BF
 * Called From: 2903:033C:001C:850F
 * Called From: 2903:033C:0026:C426
 * Called From: 2903:033C:0054:FC7A
 * Called From: 2B4C:0199:0017:56F7
 * Called From: B52A:0458:0019:419F
 * Called From: B52A:0A71:001D:12BE
 * Called From: B52A:0A71:001E:13DA
 */
void f__2BD6_0000_0015_24A9()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_bx.x);
	emu_push(emu_cx.x);
	emu_push(emu_di);
	emu_push(emu_ds);
	emu_push(emu_dx.x);
	emu_push(emu_es);
	emu_push(emu_si);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_cs); emu_push(0x0015); emu_cs = 0x2B0E; f__2B0E_00F2_0016_F9EC();
	f__2BD6_0015_000F_1301();
}

/**
 * Decompiled function f__2BD6_0015_000F_1301()
 *
 * @name f__2BD6_0015_000F_1301
 * @implements 2BD6:0015:000F:1301 ()
 *
 * Called From: 2BD6:0015:0015:24A9
 */
void f__2BD6_0015_000F_1301()
{
	emu_movw(&emu_si, emu_ax.x);
	emu_movw(&emu_ds, emu_dx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_cs); emu_push(0x0024); emu_cs = 0x2B0E; f__2B0E_00F2_0016_F9EC();
	f__2BD6_0024_005A_C833();
}

/**
 * Decompiled function f__2BD6_0024_005A_C833()
 *
 * @name f__2BD6_0024_005A_C833
 * @implements 2BD6:0024:005A:C833 ()
 *
 * Called From: 2BD6:0024:000F:1301
 */
void f__2BD6_0024_005A_C833()
{
	emu_movw(&emu_di, emu_ax.x);
	emu_movw(&emu_es, emu_dx.x);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0xF6), emu_di);
	emu_addw(&emu_dx.x, emu_di);
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0xFA), emu_dx.x);
	emu_cld();
	emu_movw(&emu_bx.x, emu_si);
	emu_movw(&emu_dx.x, emu_ds);
	emu_movw(&emu_bp, emu_es);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_cs, 0x00,  0xFA));
	emu_subw(&emu_ax.x, emu_di);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x009D; emu_last_cs = 0x2BD6; emu_last_ip = 0x0044; emu_last_length = 0x005A; emu_last_crc = 0xC833; emu_call(); return; }
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0xF8), emu_ax.x);
	emu_movw(&emu_si, emu_bx.x);
	emu_movw(&emu_ds, emu_dx.x);
	emu_lodsb(emu_ds);
	emu_orb(&emu_ax.l, emu_ax.l);
	if (emu_flags.sf) { f__2BD6_007E_001F_4BDA(); return; }
	emu_movb(&emu_ax.h, emu_ax.l);
	emu_andb(&emu_ax.h, 0xF);
	emu_movb(&emu_cx.h, emu_ax.l);
	emu_movb(&emu_cx.l, 0x4);
	emu_shrb(&emu_cx.h, emu_cx.l);
	emu_movb(&emu_cx.l, emu_cx.h);
	emu_xorb(&emu_cx.h, emu_cx.h);
	emu_addws(&emu_cx.x, 0x3);
	emu_cmpw(&emu_cx.x, emu_get_memory16(emu_cs, 0x00,  0xF8));
	if ((emu_flags.cf || emu_flags.zf)) { f__2BD6_0071_000D_9AAA(); return; }
	emu_movw(&emu_cx.x, emu_get_memory16(emu_cs, 0x00,  0xF8));
	emu_lodsb(emu_ds);
	emu_movw(&emu_bx.x, emu_si);
	emu_movw(&emu_si, emu_di);
	emu_subw(&emu_si, emu_ax.x);
	emu_movw(&emu_ds, emu_bp);
	emu_rep_movsb(emu_ds);
	/* Unresolved jump */ emu_ip = 0x003E; emu_last_cs = 0x2BD6; emu_last_ip = 0x007C; emu_last_length = 0x005A; emu_last_crc = 0xC833; emu_call();
}

/**
 * Decompiled function f__2BD6_003E_0040_FC4A()
 *
 * @name f__2BD6_003E_0040_FC4A
 * @implements 2BD6:003E:0040:FC4A ()
 *
 * Called From: 2BD6:007C:000D:9AAA
 * Called From: 2BD6:007C:0040:FC4A
 * Called From: 2BD6:009B:0006:F251
 * Called From: 2BD6:009B:001F:4BDA
 * Called From: 2BD6:00C6:0005:852F
 * Called From: 2BD6:00EA:0005:6526
 * Called From: 2BD6:00EA:001D:37CB
 * Called From: 2BD6:00EA:0024:BC39
 */
void f__2BD6_003E_0040_FC4A()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_cs, 0x00,  0xFA));
	emu_subw(&emu_ax.x, emu_di);
	if (emu_flags.zf) { f__2BD6_009D_0009_689C(); return; }
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0xF8), emu_ax.x);
	emu_movw(&emu_si, emu_bx.x);
	emu_movw(&emu_ds, emu_dx.x);
	emu_lodsb(emu_ds);
	emu_orb(&emu_ax.l, emu_ax.l);
	if (emu_flags.sf) { f__2BD6_007E_001F_4BDA(); return; }
	emu_movb(&emu_ax.h, emu_ax.l);
	emu_andb(&emu_ax.h, 0xF);
	emu_movb(&emu_cx.h, emu_ax.l);
	emu_movb(&emu_cx.l, 0x4);
	emu_shrb(&emu_cx.h, emu_cx.l);
	emu_movb(&emu_cx.l, emu_cx.h);
	emu_xorb(&emu_cx.h, emu_cx.h);
	emu_addws(&emu_cx.x, 0x3);
	emu_cmpw(&emu_cx.x, emu_get_memory16(emu_cs, 0x00,  0xF8));
	if ((emu_flags.cf || emu_flags.zf)) { f__2BD6_0071_000D_9AAA(); return; }
	emu_movw(&emu_cx.x, emu_get_memory16(emu_cs, 0x00,  0xF8));
	emu_lodsb(emu_ds);
	emu_movw(&emu_bx.x, emu_si);
	emu_movw(&emu_si, emu_di);
	emu_subw(&emu_si, emu_ax.x);
	emu_movw(&emu_ds, emu_bp);
	emu_rep_movsb(emu_ds);
	f__2BD6_003E_0040_FC4A(); return;
}

/**
 * Decompiled function f__2BD6_0071_000D_9AAA()
 *
 * @name f__2BD6_0071_000D_9AAA
 * @implements 2BD6:0071:000D:9AAA ()
 *
 * Called From: 2BD6:006A:0040:FC4A
 * Called From: 2BD6:006A:005A:C833
 */
void f__2BD6_0071_000D_9AAA()
{
	emu_lodsb(emu_ds);
	emu_movw(&emu_bx.x, emu_si);
	emu_movw(&emu_si, emu_di);
	emu_subw(&emu_si, emu_ax.x);
	emu_movw(&emu_ds, emu_bp);
	emu_rep_movsb(emu_ds);
	f__2BD6_003E_0040_FC4A(); return;
}

/**
 * Decompiled function f__2BD6_007E_001F_4BDA()
 *
 * @name f__2BD6_007E_001F_4BDA
 * @implements 2BD6:007E:001F:4BDA ()
 *
 * Called From: 2BD6:0051:005A:C833
 * Called From: 2BD6:0051:0040:FC4A
 */
void f__2BD6_007E_001F_4BDA()
{
	emu_testb(&emu_ax.l, 0x40);
	if (!emu_flags.zf) { f__2BD6_00A6_0023_D870(); return; }
	emu_cmpb(&emu_ax.l, 0x80);
	if (emu_flags.zf) { f__2BD6_009D_0009_689C(); return; }
	emu_movb(&emu_cx.l, emu_ax.l);
	emu_andws(&emu_cx.x, 0x3F);
	emu_cmpw(&emu_cx.x, emu_get_memory16(emu_cs, 0x00,  0xF8));
	if ((emu_flags.cf || emu_flags.zf)) { f__2BD6_0097_0006_F251(); return; }
	emu_movw(&emu_cx.x, emu_get_memory16(emu_cs, 0x00,  0xF8));
	emu_rep_movsb(emu_ds);
	emu_movw(&emu_bx.x, emu_si);
	f__2BD6_003E_0040_FC4A(); return;
}

/**
 * Decompiled function f__2BD6_0097_0006_F251()
 *
 * @name f__2BD6_0097_0006_F251
 * @implements 2BD6:0097:0006:F251 ()
 *
 * Called From: 2BD6:0090:001F:4BDA
 */
void f__2BD6_0097_0006_F251()
{
	emu_rep_movsb(emu_ds);
	emu_movw(&emu_bx.x, emu_si);
	f__2BD6_003E_0040_FC4A(); return;
}

/**
 * Decompiled function f__2BD6_009D_0009_689C()
 *
 * @name f__2BD6_009D_0009_689C
 * @implements 2BD6:009D:0009:689C ()
 *
 * Called From: 2BD6:0044:0040:FC4A
 * Called From: 2BD6:0084:001F:4BDA
 */
void f__2BD6_009D_0009_689C()
{
	emu_movw(&emu_ax.x, emu_di);
	emu_subw(&emu_ax.x, emu_get_memory16(emu_cs, 0x00,  0xF6));
	f__2BD6_00ED_0009_C791(); return;
}

/**
 * Decompiled function f__2BD6_00A6_0023_D870()
 *
 * @name f__2BD6_00A6_0023_D870
 * @implements 2BD6:00A6:0023:D870 ()
 *
 * Called From: 2BD6:0080:001F:4BDA
 */
void f__2BD6_00A6_0023_D870()
{
	emu_movb(&emu_cx.l, emu_ax.l);
	emu_andws(&emu_cx.x, 0x3F);
	emu_addws(&emu_cx.x, 0x3);
	emu_cmpb(&emu_ax.l, 0xFE);
	if (!emu_flags.zf) { f__2BD6_00C9_0024_BC39(); return; }
	emu_lodsw(emu_ds);
	emu_movw(&emu_cx.x, emu_ax.x);
	emu_lodsb(emu_ds);
	emu_movw(&emu_bx.x, emu_si);
	emu_cmpw(&emu_cx.x, emu_get_memory16(emu_cs, 0x00,  0xF8));
	if ((emu_flags.cf || emu_flags.zf)) { f__2BD6_00C4_0005_852F(); return; }
	emu_movw(&emu_cx.x, emu_get_memory16(emu_cs, 0x00,  0xF8));
	emu_rep_stosb();
	/* Unresolved jump */ emu_ip = 0x003E; emu_last_cs = 0x2BD6; emu_last_ip = 0x00C6; emu_last_length = 0x0023; emu_last_crc = 0xD870; emu_call();
}

/**
 * Decompiled function f__2BD6_00C4_0005_852F()
 *
 * @name f__2BD6_00C4_0005_852F
 * @implements 2BD6:00C4:0005:852F ()
 *
 * Called From: 2BD6:00BD:0023:D870
 */
void f__2BD6_00C4_0005_852F()
{
	emu_rep_stosb();
	f__2BD6_003E_0040_FC4A(); return;
}

/**
 * Decompiled function f__2BD6_00C9_0024_BC39()
 *
 * @name f__2BD6_00C9_0024_BC39
 * @implements 2BD6:00C9:0024:BC39 ()
 *
 * Called From: 2BD6:00B0:0023:D870
 */
void f__2BD6_00C9_0024_BC39()
{
	emu_cmpb(&emu_ax.l, 0xFF);
	if (!emu_flags.zf) { f__2BD6_00D0_001D_37CB(); return; }
	emu_lodsw(emu_ds);
	emu_movw(&emu_cx.x, emu_ax.x);
	emu_lodsw(emu_ds);
	emu_movw(&emu_bx.x, emu_si);
	emu_addw(&emu_ax.x, emu_get_memory16(emu_cs, 0x00,  0xF6));
	emu_movw(&emu_si, emu_ax.x);
	emu_movw(&emu_ds, emu_bp);
	emu_cmpw(&emu_cx.x, emu_get_memory16(emu_cs, 0x00,  0xF8));
	if ((emu_flags.cf || emu_flags.zf)) { f__2BD6_00E8_0005_6526(); return; }
	emu_movw(&emu_cx.x, emu_get_memory16(emu_cs, 0x00,  0xF8));
	emu_rep_movsb(emu_ds);
	f__2BD6_003E_0040_FC4A(); return;
}

/**
 * Decompiled function f__2BD6_00D0_001D_37CB()
 *
 * @name f__2BD6_00D0_001D_37CB
 * @implements 2BD6:00D0:001D:37CB ()
 *
 * Called From: 2BD6:00CB:0024:BC39
 */
void f__2BD6_00D0_001D_37CB()
{
	emu_lodsw(emu_ds);
	emu_movw(&emu_bx.x, emu_si);
	emu_addw(&emu_ax.x, emu_get_memory16(emu_cs, 0x00,  0xF6));
	emu_movw(&emu_si, emu_ax.x);
	emu_movw(&emu_ds, emu_bp);
	emu_cmpw(&emu_cx.x, emu_get_memory16(emu_cs, 0x00,  0xF8));
	if ((emu_flags.cf || emu_flags.zf)) { f__2BD6_00E8_0005_6526(); return; }
	emu_movw(&emu_cx.x, emu_get_memory16(emu_cs, 0x00,  0xF8));
	emu_rep_movsb(emu_ds);
	f__2BD6_003E_0040_FC4A(); return;
}

/**
 * Decompiled function f__2BD6_00E8_0005_6526()
 *
 * @name f__2BD6_00E8_0005_6526
 * @implements 2BD6:00E8:0005:6526 ()
 *
 * Called From: 2BD6:00E1:001D:37CB
 * Called From: 2BD6:00E1:0024:BC39
 */
void f__2BD6_00E8_0005_6526()
{
	emu_rep_movsb(emu_ds);
	f__2BD6_003E_0040_FC4A(); return;
}

/**
 * Decompiled function f__2BD6_00ED_0009_C791()
 *
 * @name f__2BD6_00ED_0009_C791
 * @implements 2BD6:00ED:0009:C791 ()
 *
 * Called From: 2BD6:00A4:0009:689C
 */
void f__2BD6_00ED_0009_C791()
{
	emu_pop(&emu_si);
	emu_pop(&emu_es);
	emu_pop(&emu_dx.x);
	emu_pop(&emu_ds);
	emu_pop(&emu_di);
	emu_pop(&emu_cx.x);
	emu_pop(&emu_bx.x);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

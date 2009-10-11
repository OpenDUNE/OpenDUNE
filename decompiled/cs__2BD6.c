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
	emu_push(emu_bx);
	emu_push(emu_cx);
	emu_push(emu_di);
	emu_push(emu_ds);
	emu_push(emu_dx);
	emu_push(emu_es);
	emu_push(emu_si);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_cs); emu_push(0x0015); emu_cs = 0x2B0E; f__2B0E_00F2_0016_F9EC();
	f__2BD6_0015_000F_1301(); return;
}

/**
 * Decompiled function f__2BD6_0015_000F_1301()
 *
 * @name f__2BD6_0015_000F_1301
 * @implements 2BD6:0015:000F:1301 ()
 *
 */
void f__2BD6_0015_000F_1301()
{
	emu_movw(&emu_si, emu_ax);
	emu_movw(&emu_ds, emu_dx);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_cs); emu_push(0x0024); emu_cs = 0x2B0E; f__2B0E_00F2_0016_F9EC();
	f__2BD6_0024_005A_C833(); return;
}

/**
 * Decompiled function f__2BD6_0024_005A_C833()
 *
 * @name f__2BD6_0024_005A_C833
 * @implements 2BD6:0024:005A:C833 ()
 *
 */
void f__2BD6_0024_005A_C833()
{
	emu_movw(&emu_di, emu_ax);
	emu_movw(&emu_es, emu_dx);
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_movw(&emu_get_memory16(emu_cs, 0x00, 0xF6), emu_di);
	emu_addw(&emu_dx, emu_di);
	emu_movw(&emu_get_memory16(emu_cs, 0x00, 0xFA), emu_dx);
	emu_cld();
	emu_movw(&emu_bx, emu_si);
	emu_movw(&emu_dx, emu_ds);
	emu_movw(&emu_bp, emu_es);
	f__2BD6_003E_0040_FC4A(); return;
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
	emu_movw(&emu_ax, emu_get_memory16(emu_cs, 0x00, 0xFA));
	emu_subw(&emu_ax, emu_di);
	if (emu_flags.zf) { f__2BD6_009D_0009_689C(); return; }
	emu_movw(&emu_get_memory16(emu_cs, 0x00, 0xF8), emu_ax);
	emu_movw(&emu_si, emu_bx);
	emu_movw(&emu_ds, emu_dx);
	emu_lodsb(emu_ds);
	emu_orb(&emu_al, emu_al);
	if (emu_flags.sf) { f__2BD6_007E_001F_4BDA(); return; }
	emu_movb(&emu_ah, emu_al);
	emu_andb(&emu_ah, 0xF);
	emu_movb(&emu_ch, emu_al);
	emu_movb(&emu_cl, 0x4);
	emu_shrb(&emu_ch, emu_cl);
	emu_movb(&emu_cl, emu_ch);
	emu_xorb(&emu_ch, emu_ch);
	emu_addw(&emu_cx, 0x3);
	emu_cmpw(&emu_cx, emu_get_memory16(emu_cs, 0x00, 0xF8));
	if (!(emu_flags.cf || emu_flags.zf)) {
		emu_movw(&emu_cx, emu_get_memory16(emu_cs, 0x00, 0xF8));
	}
	f__2BD6_0071_000D_9AAA(); return;
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
	emu_movw(&emu_bx, emu_si);
	emu_movw(&emu_si, emu_di);
	emu_subw(&emu_si, emu_ax);
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
	emu_testb(&emu_al, 0x40);
	if (!emu_flags.zf) { f__2BD6_00A6_0023_D870(); return; }
	emu_cmpb(&emu_al, 0x80);
	if (emu_flags.zf) { f__2BD6_009D_0009_689C(); return; }
	emu_movb(&emu_cl, emu_al);
	emu_andw(&emu_cx, 0x3F);
	emu_cmpw(&emu_cx, emu_get_memory16(emu_cs, 0x00, 0xF8));
	if (!(emu_flags.cf || emu_flags.zf)) {
		emu_movw(&emu_cx, emu_get_memory16(emu_cs, 0x00, 0xF8));
	}
	f__2BD6_0097_0006_F251(); return;
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
	emu_movw(&emu_bx, emu_si);
	f__2BD6_003E_0040_FC4A(); return;
}

/**
 * Decompiled function f__2BD6_009D_0009_689C()
 *
 * @name f__2BD6_009D_0009_689C
 * @implements 2BD6:009D:0009:689C ()
 *
 * Called From: 2BD6:0044:0040:FC4A
 * Called From: 2BD6:0044:005A:C833
 * Called From: 2BD6:0084:001F:4BDA
 */
void f__2BD6_009D_0009_689C()
{
	emu_movw(&emu_ax, emu_di);
	emu_subw(&emu_ax, emu_get_memory16(emu_cs, 0x00, 0xF6));
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
	emu_movb(&emu_cl, emu_al);
	emu_andw(&emu_cx, 0x3F);
	emu_addw(&emu_cx, 0x3);
	emu_cmpb(&emu_al, 0xFE);
	if (!emu_flags.zf) { f__2BD6_00C9_0024_BC39(); return; }
	emu_lodsw(emu_ds);
	emu_movw(&emu_cx, emu_ax);
	emu_lodsb(emu_ds);
	emu_movw(&emu_bx, emu_si);
	emu_cmpw(&emu_cx, emu_get_memory16(emu_cs, 0x00, 0xF8));
	if (!(emu_flags.cf || emu_flags.zf)) {
		emu_movw(&emu_cx, emu_get_memory16(emu_cs, 0x00, 0xF8));
	}
	f__2BD6_00C4_0005_852F(); return;
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
	emu_cmpb(&emu_al, 0xFF);
	if (emu_flags.zf) {
		emu_lodsw(emu_ds);
		emu_movw(&emu_cx, emu_ax);
	}
	f__2BD6_00D0_001D_37CB(); return;
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
	emu_movw(&emu_bx, emu_si);
	emu_addw(&emu_ax, emu_get_memory16(emu_cs, 0x00, 0xF6));
	emu_movw(&emu_si, emu_ax);
	emu_movw(&emu_ds, emu_bp);
	emu_cmpw(&emu_cx, emu_get_memory16(emu_cs, 0x00, 0xF8));
	if (!(emu_flags.cf || emu_flags.zf)) {
		emu_movw(&emu_cx, emu_get_memory16(emu_cs, 0x00, 0xF8));
	}
	f__2BD6_00E8_0005_6526(); return;
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
	emu_pop(&emu_dx);
	emu_pop(&emu_ds);
	emu_pop(&emu_di);
	emu_pop(&emu_cx);
	emu_pop(&emu_bx);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

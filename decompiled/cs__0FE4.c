/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__0FE4_0002_0021_D0A9()
 *
 * @name f__0FE4_0002_0021_D0A9
 * @implements 0FE4:0002:0021:D0A9 ()
 *
 * Called From: 07D4:004E:0005:2369
 */
void f__0FE4_0002_0021_D0A9()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subw(&emu_sp, 0xA);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x3A3A));
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0xA), 0x0);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x3A3A));
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0xC), 0x0);
	emu_xorw(&emu_si, emu_si);
	f__0FE4_012E_000B_1A91(); return;
}

/**
 * Decompiled function f__0FE4_0023_005B_3AE9()
 *
 * @name f__0FE4_0023_005B_3AE9
 * @implements 0FE4:0023:005B:3AE9 ()
 *
 * Called From: 0FE4:0136:000B:1A91
 * Called From: 0FE4:0136:000C:1EF1
 * Called From: 0FE4:0136:005A:6D90
 * Called From: 0FE4:0136:007F:22ED
 * Called From: 0FE4:0136:0039:3CD7
 */
void f__0FE4_0023_005B_3AE9()
{
	emu_movw(&emu_bx, emu_si);
	emu_movb(&emu_cl, 0x2);
	emu_shlw(&emu_bx, emu_cl);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, emu_bx, 0x8440));
	emu_movw(&emu_dx, emu_get_memory16(emu_ds, emu_bx, 0x843E));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_dx);
	emu_movw(&emu_bx, emu_si);
	emu_movb(&emu_cl, 0x2);
	emu_shlw(&emu_bx, emu_cl);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, emu_bx, 0x8444));
	emu_movw(&emu_dx, emu_get_memory16(emu_ds, emu_bx, 0x8442));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_dx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x9));
	emu_movb(&emu_ah, 0x0);
	emu_movw(&emu_dx, 0x1);
	emu_movb(&emu_cl, emu_get_memory8(emu_ds, 0x00, 0x3A38));
	emu_shlw(&emu_dx, emu_cl);
	emu_testw(&emu_ax, emu_dx);
	if (emu_flags.zf) { f__0FE4_0096_0010_976E(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0x4), 0x4);
	if (!emu_flags.zf) { f__0FE4_0096_0010_976E(); return; }
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3A38));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x8));
	emu_movws(&emu_ax, emu_al);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x007E); emu_cs = 0x1423; f__1423_0F34_0017_464D();
	f__0FE4_007E_0010_D40F();
}

/**
 * Decompiled function f__0FE4_007E_0010_D40F()
 *
 * @name f__0FE4_007E_0010_D40F
 * @implements 0FE4:007E:0010:D40F ()
 *
 * Called From: 0FE4:007E:005B:3AE9
 */
void f__0FE4_007E_0010_D40F()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_ax);
	if (emu_flags.zf) { f__0FE4_008E_0018_0071(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x3A3A));
	emu_incw(&emu_get_memory16(emu_es, emu_bx, 0xC));
	f__0FE4_0096_0010_976E(); return;
}

/**
 * Decompiled function f__0FE4_008E_0018_0071()
 *
 * @name f__0FE4_008E_0018_0071
 * @implements 0FE4:008E:0018:0071 ()
 *
 * Called From: 0FE4:0082:0010:D40F
 */
void f__0FE4_008E_0018_0071()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x3A3A));
	emu_incw(&emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_push(emu_cs); emu_push(0x00A6); emu_cs = 0x0F3F; f__0F3F_007E_0008_A4DE();
	f__0FE4_00A6_0014_B079();
}

/**
 * Decompiled function f__0FE4_0096_0010_976E()
 *
 * @name f__0FE4_0096_0010_976E
 * @implements 0FE4:0096:0010:976E ()
 *
 * Called From: 0FE4:005F:005B:3AE9
 * Called From: 0FE4:006A:005B:3AE9
 * Called From: 0FE4:008C:0010:D40F
 */
void f__0FE4_0096_0010_976E()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_push(emu_cs); emu_push(0x00A6); emu_cs = 0x0F3F; f__0F3F_007E_0008_A4DE();
	f__0FE4_00A6_0014_B079();
}

/**
 * Decompiled function f__0FE4_00A6_0014_B079()
 *
 * @name f__0FE4_00A6_0014_B079
 * @implements 0FE4:00A6:0014:B079 ()
 *
 * Called From: 0FE4:00A6:0010:976E
 * Called From: 0FE4:00A6:0018:0071
 */
void f__0FE4_00A6_0014_B079()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_movw(&emu_di, emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_push(emu_cs); emu_push(0x00BA); emu_cs = 0x0F3F; f__0F3F_007E_0008_A4DE();
	f__0FE4_00BA_007F_22ED();
}

/**
 * Decompiled function f__0FE4_00BA_007F_22ED()
 *
 * @name f__0FE4_00BA_007F_22ED
 * @implements 0FE4:00BA:007F:22ED ()
 *
 * Called From: 0FE4:00BA:0014:B079
 */
void f__0FE4_00BA_007F_22ED()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x2));
	emu_movws(&emu_ax, emu_al);
	emu_movw(&emu_dx, 0x5A);
	emu_imuluw(&emu_ax, emu_dx);
	emu_movw(&emu_dx, 0x2D07);
	emu_movw(&emu_bx, emu_ax);
	emu_movw(&emu_es, emu_dx);
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x3C), 0x0);
	if (!emu_flags.zf) { f__0FE4_00DF_005A_6D90(); return; }
	emu_subw(&emu_di, 0x100);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x2));
	emu_movws(&emu_ax, emu_al);
	emu_movw(&emu_dx, 0x5A);
	emu_imuluw(&emu_ax, emu_dx);
	emu_movw(&emu_dx, 0x2D07);
	emu_movw(&emu_bx, emu_ax);
	emu_movw(&emu_es, emu_dx);
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x3C), 0x0);
	if (!emu_flags.zf) { f__0FE4_0100_0039_3CD7(); return; }
	emu_subw(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x100);
	emu_cmpw(&emu_di, emu_get_memory16(emu_ss, emu_bp, -0xA));
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__0FE4_012D_000C_1EF1(); return; }
	emu_movw(&emu_bx, emu_si);
	emu_movb(&emu_cl, 0x2);
	emu_shlw(&emu_bx, emu_cl);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_get_memory16(emu_ds, emu_bx, 0x8440), emu_ax);
	emu_movw(&emu_get_memory16(emu_ds, emu_bx, 0x843E), emu_dx);
	emu_movw(&emu_bx, emu_si);
	emu_movb(&emu_cl, 0x2);
	emu_shlw(&emu_bx, emu_cl);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_get_memory16(emu_ds, emu_bx, 0x8444), emu_ax);
	emu_movw(&emu_get_memory16(emu_ds, emu_bx, 0x8442), emu_dx);
	emu_incw(&emu_si);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x35EC));
	emu_decw(&emu_ax);
	emu_cmpw(&emu_ax, emu_si);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__0FE4_0139_0006_F7CE(); return; }
	f__0FE4_0023_005B_3AE9(); return;
}

/**
 * Decompiled function f__0FE4_00DF_005A_6D90()
 *
 * @name f__0FE4_00DF_005A_6D90
 * @implements 0FE4:00DF:005A:6D90 ()
 *
 * Called From: 0FE4:00D9:007F:22ED
 */
void f__0FE4_00DF_005A_6D90()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x2));
	emu_movws(&emu_ax, emu_al);
	emu_movw(&emu_dx, 0x5A);
	emu_imuluw(&emu_ax, emu_dx);
	emu_movw(&emu_dx, 0x2D07);
	emu_movw(&emu_bx, emu_ax);
	emu_movw(&emu_es, emu_dx);
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x3C), 0x0);
	if (!emu_flags.zf) { f__0FE4_0100_0039_3CD7(); return; }
	emu_subw(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x100);
	emu_cmpw(&emu_di, emu_get_memory16(emu_ss, emu_bp, -0xA));
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__0FE4_012D_000C_1EF1(); return; }
	emu_movw(&emu_bx, emu_si);
	emu_movb(&emu_cl, 0x2);
	emu_shlw(&emu_bx, emu_cl);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_get_memory16(emu_ds, emu_bx, 0x8440), emu_ax);
	emu_movw(&emu_get_memory16(emu_ds, emu_bx, 0x843E), emu_dx);
	emu_movw(&emu_bx, emu_si);
	emu_movb(&emu_cl, 0x2);
	emu_shlw(&emu_bx, emu_cl);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_get_memory16(emu_ds, emu_bx, 0x8444), emu_ax);
	emu_movw(&emu_get_memory16(emu_ds, emu_bx, 0x8442), emu_dx);
	emu_incw(&emu_si);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x35EC));
	emu_decw(&emu_ax);
	emu_cmpw(&emu_ax, emu_si);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__0FE4_0139_0006_F7CE(); return; }
	f__0FE4_0023_005B_3AE9(); return;
}

/**
 * Decompiled function f__0FE4_0100_0039_3CD7()
 *
 * @name f__0FE4_0100_0039_3CD7
 * @implements 0FE4:0100:0039:3CD7 ()
 *
 * Called From: 0FE4:00F9:007F:22ED
 * Called From: 0FE4:00F9:005A:6D90
 */
void f__0FE4_0100_0039_3CD7()
{
	emu_cmpw(&emu_di, emu_get_memory16(emu_ss, emu_bp, -0xA));
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__0FE4_012D_000C_1EF1(); return; }
	emu_movw(&emu_bx, emu_si);
	emu_movb(&emu_cl, 0x2);
	emu_shlw(&emu_bx, emu_cl);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_get_memory16(emu_ds, emu_bx, 0x8440), emu_ax);
	emu_movw(&emu_get_memory16(emu_ds, emu_bx, 0x843E), emu_dx);
	emu_movw(&emu_bx, emu_si);
	emu_movb(&emu_cl, 0x2);
	emu_shlw(&emu_bx, emu_cl);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_get_memory16(emu_ds, emu_bx, 0x8444), emu_ax);
	emu_movw(&emu_get_memory16(emu_ds, emu_bx, 0x8442), emu_dx);
	emu_incw(&emu_si);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x35EC));
	emu_decw(&emu_ax);
	emu_cmpw(&emu_ax, emu_si);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__0FE4_0139_0006_F7CE(); return; }
	f__0FE4_0023_005B_3AE9(); return;
}

/**
 * Decompiled function f__0FE4_012D_000C_1EF1()
 *
 * @name f__0FE4_012D_000C_1EF1
 * @implements 0FE4:012D:000C:1EF1 ()
 *
 * Called From: 0FE4:0103:007F:22ED
 * Called From: 0FE4:0103:0039:3CD7
 * Called From: 0FE4:0103:005A:6D90
 */
void f__0FE4_012D_000C_1EF1()
{
	emu_incw(&emu_si);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x35EC));
	emu_decw(&emu_ax);
	emu_cmpw(&emu_ax, emu_si);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__0FE4_0139_0006_F7CE(); return; }
	f__0FE4_0023_005B_3AE9(); return;
}

/**
 * Decompiled function f__0FE4_012E_000B_1A91()
 *
 * @name f__0FE4_012E_000B_1A91
 * @implements 0FE4:012E:000B:1A91 ()
 *
 * Called From: 0FE4:0020:0021:D0A9
 */
void f__0FE4_012E_000B_1A91()
{
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x35EC));
	emu_decw(&emu_ax);
	emu_cmpw(&emu_ax, emu_si);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x0139; emu_last_cs = 0x0FE4; emu_last_ip = 0x0134; emu_last_length = 0x000B; emu_last_crc = 0x1A91; emu_call(); return; }
	f__0FE4_0023_005B_3AE9(); return;
}

/**
 * Decompiled function f__0FE4_0139_0006_F7CE()
 *
 * @name f__0FE4_0139_0006_F7CE
 * @implements 0FE4:0139:0006:F7CE ()
 *
 * Called From: 0FE4:0134:000C:1EF1
 * Called From: 0FE4:0134:0039:3CD7
 * Called From: 0FE4:0134:005A:6D90
 * Called From: 0FE4:0134:007F:22ED
 */
void f__0FE4_0139_0006_F7CE()
{
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__0FE4_0333_000F_2B73()
 *
 * @name f__0FE4_0333_000F_2B73
 * @implements 0FE4:0333:000F:2B73 ()
 *
 * Called From: 1A34:22AA:0018:BCC2
 * Called From: 1A34:22AA:001A:2AAE
 * Called From: 1A34:2430:000F:6B18
 */
void f__0FE4_0333_000F_2B73()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subw(&emu_sp, 0x4);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_di, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_xorw(&emu_si, emu_si);
	f__0FE4_0397_000A_8621(); return;
}

/**
 * Decompiled function f__0FE4_0342_0024_B7F8()
 *
 * @name f__0FE4_0342_0024_B7F8
 * @implements 0FE4:0342:0024:B7F8 ()
 *
 * Called From: 0FE4:039B:000A:8621
 * Called From: 0FE4:039B:000B:4629
 */
void f__0FE4_0342_0024_B7F8()
{
	emu_movw(&emu_bx, emu_si);
	emu_movb(&emu_cl, 0x2);
	emu_shlw(&emu_bx, emu_cl);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, emu_bx, 0x8440));
	emu_movw(&emu_dx, emu_get_memory16(emu_ds, emu_bx, 0x843E));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_dx);
	emu_cmpw(&emu_di, 0xFFFF);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x036C; emu_last_cs = 0x0FE4; emu_last_ip = 0x0359; emu_last_length = 0x0024; emu_last_crc = 0xB7F8; emu_call(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x0366); emu_cs = 0x1A34; emu_Unit_GetHouseID();
	f__0FE4_0366_0030_E8DE();
}

/**
 * Decompiled function f__0FE4_0366_0030_E8DE()
 *
 * @name f__0FE4_0366_0030_E8DE
 * @implements 0FE4:0366:0030:E8DE ()
 *
 * Called From: 0FE4:0366:0024:B7F8
 */
void f__0FE4_0366_0030_E8DE()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_cmpw(&emu_ax, emu_di);
	if (!emu_flags.zf) { f__0FE4_0396_000B_4629(); return; }
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp,  0x8), 0xFFFF);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x037F; emu_last_cs = 0x0FE4; emu_last_ip = 0x0370; emu_last_length = 0x0030; emu_last_crc = 0xE8DE; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x2));
	emu_movws(&emu_ax, emu_al);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (!emu_flags.zf) { f__0FE4_0396_000B_4629(); return; }
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x38BC), 0x0);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0391; emu_last_cs = 0x0FE4; emu_last_ip = 0x0384; emu_last_length = 0x0030; emu_last_crc = 0xE8DE; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0x4), 0x4);
	if (!emu_flags.zf) { f__0FE4_0396_000B_4629(); return; }
	emu_movw(&emu_ax, 0x1);
	f__0FE4_03A1_0006_F7CE(); return;
}

/**
 * Decompiled function f__0FE4_0394_0002_C5BA()
 *
 * @name f__0FE4_0394_0002_C5BA
 * @implements 0FE4:0394:0002:C5BA ()
 *
 * Called From: 0FE4:039F:000B:4629
 */
void f__0FE4_0394_0002_C5BA()
{
	f__0FE4_03A1_0006_F7CE(); return;
}

/**
 * Decompiled function f__0FE4_0396_000B_4629()
 *
 * @name f__0FE4_0396_000B_4629
 * @implements 0FE4:0396:000B:4629 ()
 *
 * Called From: 0FE4:036A:0030:E8DE
 * Called From: 0FE4:037D:0030:E8DE
 * Called From: 0FE4:038F:0030:E8DE
 */
void f__0FE4_0396_000B_4629()
{
	emu_incw(&emu_si);
	emu_cmpw(&emu_si, emu_get_memory16(emu_ds, 0x00, 0x35EC));
	if ((emu_flags.sf != emu_flags.of)) { f__0FE4_0342_0024_B7F8(); return; }
	emu_xorw(&emu_ax, emu_ax);
	f__0FE4_0394_0002_C5BA(); return;
}

/**
 * Decompiled function f__0FE4_0397_000A_8621()
 *
 * @name f__0FE4_0397_000A_8621
 * @implements 0FE4:0397:000A:8621 ()
 *
 * Called From: 0FE4:0340:000F:2B73
 */
void f__0FE4_0397_000A_8621()
{
	emu_cmpw(&emu_si, emu_get_memory16(emu_ds, 0x00, 0x35EC));
	if ((emu_flags.sf != emu_flags.of)) { f__0FE4_0342_0024_B7F8(); return; }
	emu_xorw(&emu_ax, emu_ax);
	/* Unresolved jump */ emu_ip = 0x0394; emu_last_cs = 0x0FE4; emu_last_ip = 0x039F; emu_last_length = 0x000A; emu_last_crc = 0x8621; emu_call();
}

/**
 * Decompiled function f__0FE4_03A1_0006_F7CE()
 *
 * @name f__0FE4_03A1_0006_F7CE
 * @implements 0FE4:03A1:0006:F7CE ()
 *
 * Called From: 0FE4:0394:0002:C5BA
 * Called From: 0FE4:0394:0030:E8DE
 */
void f__0FE4_03A1_0006_F7CE()
{
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__0FE4_0632_0031_75AA()
 *
 * @name f__0FE4_0632_0031_75AA
 * @implements 0FE4:0632:0031:75AA ()
 *
 * Called From: 06F7:0148:000B:E1A3
 */
void f__0FE4_0632_0031_75AA()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subw(&emu_sp, 0x4);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x0);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x066A; emu_last_cs = 0x0FE4; emu_last_ip = 0x0648; emu_last_length = 0x0031; emu_last_crc = 0x75AA; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x6F), 0x0);
	if (emu_flags.zf) { f__0FE4_066A_0008_C849(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x6F));
	emu_movws(&emu_ax, emu_al);
	emu_decw(&emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0663); emu_cs = 0x104B; emu_AirUnit_Get_ByIndex();
	f__0FE4_0663_000F_F660();
}

/**
 * Decompiled function f__0FE4_0663_000F_F660()
 *
 * @name f__0FE4_0663_000F_F660
 * @implements 0FE4:0663:000F:F660 ()
 *
 * Called From: 0FE4:0663:0031:75AA
 */
void f__0FE4_0663_000F_F660()
{
	emu_pop(&emu_cx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax);
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x4));
	f__0FE4_0672_0004_893F(); return;
}

/**
 * Decompiled function f__0FE4_066A_0008_C849()
 *
 * @name f__0FE4_066A_0008_C849
 * @implements 0FE4:066A:0008:C849 ()
 *
 * Called From: 0FE4:0652:0031:75AA
 */
void f__0FE4_066A_0008_C849()
{
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x4));
	f__0FE4_0672_0004_893F(); return;
}

/**
 * Decompiled function f__0FE4_0672_0004_893F()
 *
 * @name f__0FE4_0672_0004_893F
 * @implements 0FE4:0672:0004:893F ()
 *
 * Called From: 0FE4:0670:0008:C849
 * Called From: 0FE4:0670:000F:F660
 */
void f__0FE4_0672_0004_893F()
{
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

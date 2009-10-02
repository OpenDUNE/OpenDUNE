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
	emu_subws(&emu_sp, 0xA);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x3A3A));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0xA), 0x0);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x3A3A));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0xC), 0x0);
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
	emu_movw(&emu_bx.x, emu_si);
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, emu_bx.x,  0x8440));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, emu_bx.x,  0x843E));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_dx.x);
	emu_movw(&emu_bx.x, emu_si);
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, emu_bx.x,  0x8444));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, emu_bx.x,  0x8442));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_dx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x9));
	emu_movb(&emu_ax.h, 0x0);
	emu_movw(&emu_dx.x, 0x1);
	emu_movb(&emu_cx.l, emu_get_memory8(emu_ds, 0x00,  0x3A38));
	emu_shlw(&emu_dx.x, emu_cx.l);
	emu_testw(&emu_ax.x, emu_dx.x);
	if (emu_flags.zf) { f__0FE4_0096_0010_976E(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), 0x4);
	if (!emu_flags.zf) { f__0FE4_0096_0010_976E(); return; }
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3A38));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x8));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_push(emu_ax.x);
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
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (emu_flags.zf) { f__0FE4_008E_0018_0071(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x3A3A));
	emu_incw(&emu_get_memory16(emu_es, emu_bx.x,  0xC));
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
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x3A3A));
	emu_incw(&emu_get_memory16(emu_es, emu_bx.x,  0xA));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xA));
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
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xA));
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
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_di, emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xA));
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
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x2));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_movw(&emu_dx.x, 0x5A);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_dx.x, 0x2D07);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_es, emu_dx.x);
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x3C), 0x0);
	if (!emu_flags.zf) { f__0FE4_00DF_005A_6D90(); return; }
	emu_subw(&emu_di, 0x100);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x2));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_movw(&emu_dx.x, 0x5A);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_dx.x, 0x2D07);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_es, emu_dx.x);
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x3C), 0x0);
	if (!emu_flags.zf) { f__0FE4_0100_0039_3CD7(); return; }
	emu_subw(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x100);
	emu_cmpw(&emu_di, emu_get_memory16(emu_ss, emu_bp, -0xA));
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__0FE4_012D_000C_1EF1(); return; }
	emu_movw(&emu_bx.x, emu_si);
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_get_memory16(emu_ds, emu_bx.x,  0x8440), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, emu_bx.x,  0x843E), emu_dx.x);
	emu_movw(&emu_bx.x, emu_si);
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_get_memory16(emu_ds, emu_bx.x,  0x8444), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, emu_bx.x,  0x8442), emu_dx.x);
	emu_incw(&emu_si);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x35EC));
	emu_decw(&emu_ax.x);
	emu_cmpw(&emu_ax.x, emu_si);
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
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x2));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_movw(&emu_dx.x, 0x5A);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_dx.x, 0x2D07);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_es, emu_dx.x);
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x3C), 0x0);
	if (!emu_flags.zf) { f__0FE4_0100_0039_3CD7(); return; }
	emu_subw(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x100);
	emu_cmpw(&emu_di, emu_get_memory16(emu_ss, emu_bp, -0xA));
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__0FE4_012D_000C_1EF1(); return; }
	emu_movw(&emu_bx.x, emu_si);
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_get_memory16(emu_ds, emu_bx.x,  0x8440), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, emu_bx.x,  0x843E), emu_dx.x);
	emu_movw(&emu_bx.x, emu_si);
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_get_memory16(emu_ds, emu_bx.x,  0x8444), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, emu_bx.x,  0x8442), emu_dx.x);
	emu_incw(&emu_si);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x35EC));
	emu_decw(&emu_ax.x);
	emu_cmpw(&emu_ax.x, emu_si);
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
	emu_movw(&emu_bx.x, emu_si);
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_get_memory16(emu_ds, emu_bx.x,  0x8440), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, emu_bx.x,  0x843E), emu_dx.x);
	emu_movw(&emu_bx.x, emu_si);
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_get_memory16(emu_ds, emu_bx.x,  0x8444), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, emu_bx.x,  0x8442), emu_dx.x);
	emu_incw(&emu_si);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x35EC));
	emu_decw(&emu_ax.x);
	emu_cmpw(&emu_ax.x, emu_si);
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
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x35EC));
	emu_decw(&emu_ax.x);
	emu_cmpw(&emu_ax.x, emu_si);
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
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x35EC));
	emu_decw(&emu_ax.x);
	emu_cmpw(&emu_ax.x, emu_si);
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
 * Decompiled function f__0FE4_013F_001C_39CA()
 *
 * @name f__0FE4_013F_001C_39CA
 * @implements 0FE4:013F:001C:39CA ()
 *
 * Called From: B4B8:1AA9:0013:FFC6
 * Called From: B511:0A98:000E:EE64
 */
void f__0FE4_013F_001C_39CA()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x35EC), 0x0);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_flags.zf) { f__0FE4_0164_001D_133A(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x015B); emu_cs = 0x2B0E; f__2B0E_00D0_0022_EC76();
	f__0FE4_015B_0026_ADF7();
}

/**
 * Decompiled function f__0FE4_015B_0026_ADF7()
 *
 * @name f__0FE4_015B_0026_ADF7
 * @implements 0FE4:015B:0026:ADF7 ()
 *
 * Called From: 0FE4:015B:001C:39CA
 */
void f__0FE4_015B_0026_ADF7()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x35EA), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x35E8), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x35E8));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x35EA));
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0184; emu_last_cs = 0x0FE4; emu_last_ip = 0x016B; emu_last_length = 0x0026; emu_last_crc = 0xADF7; emu_call(); return; }
	emu_movw(&emu_ax.x, 0x3300);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x35EA));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x35E8));
	emu_push(emu_cs); emu_push(0x0181); emu_cs = 0x01F7; f__01F7_2947_0014_02B8();
	f__0FE4_0181_000A_A35D();
}

/**
 * Decompiled function f__0FE4_0164_001D_133A()
 *
 * @name f__0FE4_0164_001D_133A
 * @implements 0FE4:0164:001D:133A ()
 *
 * Called From: 0FE4:014E:001C:39CA
 */
void f__0FE4_0164_001D_133A()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x35E8));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x35EA));
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0184; emu_last_cs = 0x0FE4; emu_last_ip = 0x016B; emu_last_length = 0x001D; emu_last_crc = 0x133A; emu_call(); return; }
	emu_movw(&emu_ax.x, 0x3300);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x35EA));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x35E8));
	emu_push(emu_cs); emu_push(0x0181); emu_cs = 0x01F7; f__01F7_2947_0014_02B8();
	f__0FE4_0181_000A_A35D();
}

/**
 * Decompiled function f__0FE4_0181_000A_A35D()
 *
 * @name f__0FE4_0181_000A_A35D
 * @implements 0FE4:0181:000A:A35D ()
 *
 * Called From: 0FE4:0181:0026:ADF7
 * Called From: 0FE4:0181:001D:133A
 */
void f__0FE4_0181_000A_A35D()
{
	emu_addws(&emu_sp, 0x8);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_movw(&emu_ax.x, 0x3300);
	f__0FE4_018B_0002_2597(); return;
}

/**
 * Decompiled function f__0FE4_018B_0002_2597()
 *
 * @name f__0FE4_018B_0002_2597
 * @implements 0FE4:018B:0002:2597 ()
 *
 * Called From: 0FE4:0189:000A:A35D
 */
void f__0FE4_018B_0002_2597()
{
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__0FE4_018D_0012_A3C7()
 *
 * @name f__0FE4_018D_0012_A3C7
 * @implements 0FE4:018D:0012:A3C7 ()
 *
 * Called From: B4C4:0433:0020:60C2
 * Called From: B4F2:0340:0005:D341
 * Called From: B511:00AE:0005:D341
 */
void f__0FE4_018D_0012_A3C7()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x8);
	emu_push(emu_si);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_cs); emu_push(0x019F); emu_cs = 0x10BE; f__10BE_01E2_0027_6596();
	f__0FE4_019F_0002_CA3A();
}

/**
 * Decompiled function f__0FE4_019F_0002_CA3A()
 *
 * @name f__0FE4_019F_0002_CA3A
 * @implements 0FE4:019F:0002:CA3A ()
 *
 * Called From: 0FE4:019F:0012:A3C7
 */
void f__0FE4_019F_0002_CA3A()
{
	f__0FE4_01B5_001A_35D1(); return;
}

/**
 * Decompiled function f__0FE4_01A1_0014_E02C()
 *
 * @name f__0FE4_01A1_0014_E02C
 * @implements 0FE4:01A1:0014:E02C ()
 *
 * Called From: 0FE4:01C3:001A:35D1
 */
void f__0FE4_01A1_0014_E02C()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x6), 0x0);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_cs); emu_push(0x01B5); emu_cs = 0x10BE; f__10BE_020F_004E_633B();
	f__0FE4_01B5_001A_35D1();
}

/**
 * Decompiled function f__0FE4_01B5_001A_35D1()
 *
 * @name f__0FE4_01B5_001A_35D1
 * @implements 0FE4:01B5:001A:35D1 ()
 *
 * Called From: 0FE4:019F:0002:CA3A
 * Called From: 0FE4:01B5:0014:E02C
 */
void f__0FE4_01B5_001A_35D1()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	if (!emu_flags.zf) { f__0FE4_01A1_0014_E02C(); return; }
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x35EC), 0x0);
	emu_xorw(&emu_si, emu_si);
	f__0FE4_0222_000A_6D8A(); return;
}

/**
 * Decompiled function f__0FE4_01CF_002F_536D()
 *
 * @name f__0FE4_01CF_002F_536D
 * @implements 0FE4:01CF:002F:536D ()
 *
 * Called From: 0FE4:0225:000A:6D8A
 * Called From: 0FE4:0225:000B:AD82
 * Called From: 0FE4:0225:002E:E4F2
 */
void f__0FE4_01CF_002F_536D()
{
	emu_movw(&emu_ax.x, emu_si);
	emu_movb(&emu_cx.l, 0x7);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x35EA));
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00,  0x35E8));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_bx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), 0x1);
	if (emu_flags.zf) { f__0FE4_0221_000B_AD82(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x8));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x01FE); emu_cs = 0x10BE; f__10BE_01AB_002F_0E7B();
	f__0FE4_01FE_002E_E4F2();
}

/**
 * Decompiled function f__0FE4_01FE_002E_E4F2()
 *
 * @name f__0FE4_01FE_002E_E4F2
 * @implements 0FE4:01FE:002E:E4F2 ()
 *
 * Called From: 0FE4:01FE:002F:536D
 */
void f__0FE4_01FE_002E_E4F2()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_es, emu_dx.x);
	emu_incw(&emu_get_memory16(emu_es, emu_bx.x,  0x6));
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00,  0x35EC));
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_get_memory16(emu_ds, emu_bx.x,  0x8440), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, emu_bx.x,  0x843E), emu_dx.x);
	emu_incw(&emu_get_memory16(emu_ds, 0x00,  0x35EC));
	emu_incw(&emu_si);
	emu_cmpws(&emu_si, 0x66);
	if ((emu_flags.sf != emu_flags.of)) { f__0FE4_01CF_002F_536D(); return; }
	emu_pop(&emu_si);
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__0FE4_0221_000B_AD82()
 *
 * @name f__0FE4_0221_000B_AD82
 * @implements 0FE4:0221:000B:AD82 ()
 *
 * Called From: 0FE4:01EE:002F:536D
 */
void f__0FE4_0221_000B_AD82()
{
	emu_incw(&emu_si);
	emu_cmpws(&emu_si, 0x66);
	if ((emu_flags.sf != emu_flags.of)) { f__0FE4_01CF_002F_536D(); return; }
	emu_pop(&emu_si);
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__0FE4_0222_000A_6D8A()
 *
 * @name f__0FE4_0222_000A_6D8A
 * @implements 0FE4:0222:000A:6D8A ()
 *
 * Called From: 0FE4:01CD:001A:35D1
 */
void f__0FE4_0222_000A_6D8A()
{
	emu_cmpws(&emu_si, 0x66);
	if ((emu_flags.sf != emu_flags.of)) { f__0FE4_01CF_002F_536D(); return; }
	emu_pop(&emu_si);
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__0FE4_0243_003A_D5F2()
 *
 * @name f__0FE4_0243_003A_D5F2
 * @implements 0FE4:0243:003A:D5F2 ()
 *
 * Called From: 06F7:0054:0012:9B52
 * Called From: 07D4:05EE:0012:E89D
 * Called From: 07D4:0920:0012:9B62
 * Called From: 07D4:0FCC:0012:9B62
 * Called From: 0C3A:2969:0015:CD4B
 * Called From: 0EDB:0357:0031:E91B
 * Called From: 10E4:21D1:0023:8806
 * Called From: 176C:029D:0012:9B52
 * Called From: 176C:029D:002B:0503
 * Called From: 176C:029D:0040:5621
 * Called From: 176C:029D:006E:13E8
 * Called From: 176C:029D:009C:C4F1
 * Called From: 176C:029D:00CA:9CA5
 * Called From: 176C:029D:00F8:FA80
 * Called From: 176C:029D:0113:0405
 * Called From: 176C:029D:0059:3F67
 * Called From: 176C:029D:00E3:C733
 * Called From: 1A34:13D9:0018:2009
 * Called From: 1A34:2259:001D:DE92
 * Called From: 1A34:2259:001F:6DF6
 * Called From: 1A34:2BD5:0025:30B8
 * Called From: 1A34:368D:0014:005F
 * Called From: B50B:03AE:001F:01AF
 * Called From: B511:0156:0013:5F86
 * Called From: B518:0FD1:002E:90CF
 */
void f__0FE4_0243_003A_D5F2()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (!emu_flags.zf) { f__0FE4_0256_0027_2707(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0x8), emu_ds);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0x6), 0x8438);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x0), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x2), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), 0xFFFF);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x027D); f__0FE4_0283_0038_4950();
	f__0FE4_027D_0004_5B1F();
}

/**
 * Decompiled function f__0FE4_0256_0027_2707()
 *
 * @name f__0FE4_0256_0027_2707
 * @implements 0FE4:0256:0027:2707 ()
 *
 * Called From: 0FE4:024C:003A:D5F2
 */
void f__0FE4_0256_0027_2707()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x0), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x2), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), 0xFFFF);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x027D); f__0FE4_0283_0038_4950();
	f__0FE4_027D_0004_5B1F();
}

/**
 * Decompiled function f__0FE4_027D_0004_5B1F()
 *
 * @name f__0FE4_027D_0004_5B1F
 * @implements 0FE4:027D:0004:5B1F ()
 *
 * Called From: 0FE4:027D:003A:D5F2
 * Called From: 0FE4:027D:0027:2707
 */
void f__0FE4_027D_0004_5B1F()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	f__0FE4_0281_0002_2597(); return;
}

/**
 * Decompiled function f__0FE4_0281_0002_2597()
 *
 * @name f__0FE4_0281_0002_2597
 * @implements 0FE4:0281:0002:2597 ()
 *
 * Called From: 0FE4:027F:0004:5B1F
 */
void f__0FE4_0281_0002_2597()
{
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__0FE4_0283_0038_4950()
 *
 * @name f__0FE4_0283_0038_4950
 * @implements 0FE4:0283:0038:4950 ()
 *
 * Called From: 06F7:02F3:000A:B112
 * Called From: 06F7:02F3:000D:6556
 * Called From: 07D4:07B6:000A:B122
 * Called From: 07D4:0E46:000A:B122
 * Called From: 07D4:0E46:000D:6567
 * Called From: 07D4:1245:000A:B122
 * Called From: 07D4:1245:000D:E564
 * Called From: 0C3A:29BB:000B:799F
 * Called From: 0C3A:29BB:001D:217F
 * Called From: 0C3A:29BB:002F:3744
 * Called From: 0EDB:0368:000C:7DFF
 * Called From: 0FE4:027A:0027:2707
 * Called From: 0FE4:027A:003A:D5F2
 * Called From: 10E4:21F3:000E:5BF5
 * Called From: 176C:07C8:000A:B112
 * Called From: 176C:07C8:0016:E5D0
 * Called From: 1A34:14B1:000B:799F
 * Called From: 1A34:14B1:0025:A83B
 * Called From: 1A34:2290:000B:799F
 * Called From: 1A34:36DE:000A:B13A
 * Called From: B50B:03FE:000E:5B75
 * Called From: B511:0190:000E:5BF5
 * Called From: B518:101F:000B:799F
 */
void f__0FE4_0283_0038_4950()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x6);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (!emu_flags.zf) { f__0FE4_029B_0020_87FE(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0x8), emu_ds);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0x6), 0x8438);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_di, emu_get_memory16(emu_es, emu_bx.x,  0x2));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_si, emu_get_memory16(emu_es, emu_bx.x,  0x4));
	emu_cmpw(&emu_si, emu_get_memory16(emu_ds, 0x00,  0x35EC));
	if (!(emu_flags.sf != emu_flags.of)) { f__0FE4_02B9_0002_EFBA(); return; }
	emu_incw(&emu_si);
	f__0FE4_031A_0013_47B7(); return;
}

/**
 * Decompiled function f__0FE4_029B_0020_87FE()
 *
 * @name f__0FE4_029B_0020_87FE
 * @implements 0FE4:029B:0020:87FE ()
 *
 * Called From: 0FE4:0291:0038:4950
 */
void f__0FE4_029B_0020_87FE()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_di, emu_get_memory16(emu_es, emu_bx.x,  0x2));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_si, emu_get_memory16(emu_es, emu_bx.x,  0x4));
	emu_cmpw(&emu_si, emu_get_memory16(emu_ds, 0x00,  0x35EC));
	if (!(emu_flags.sf != emu_flags.of)) { f__0FE4_02B9_0002_EFBA(); return; }
	emu_incw(&emu_si);
	f__0FE4_031A_0013_47B7(); return;
}

/**
 * Decompiled function f__0FE4_02B9_0002_EFBA()
 *
 * @name f__0FE4_02B9_0002_EFBA
 * @implements 0FE4:02B9:0002:EFBA ()
 *
 * Called From: 0FE4:02B6:0020:87FE
 * Called From: 0FE4:02B6:0038:4950
 */
void f__0FE4_02B9_0002_EFBA()
{
	f__0FE4_031A_0013_47B7(); return;
}

/**
 * Decompiled function f__0FE4_02BB_0037_C24B()
 *
 * @name f__0FE4_02BB_0037_C24B
 * @implements 0FE4:02BB:0037:C24B ()
 *
 * Called From: 0FE4:031E:0013:47B7
 * Called From: 0FE4:031E:0014:27B3
 */
void f__0FE4_02BB_0037_C24B()
{
	emu_movw(&emu_bx.x, emu_si);
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, emu_bx.x,  0x8440));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, emu_bx.x,  0x843E));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_dx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), 0x4);
	if (emu_flags.zf) { f__0FE4_02E1_0011_DA30(); return; }
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x38BC), 0x0);
	if (emu_flags.zf) { f__0FE4_0319_0014_27B3(); return; }
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0xFF);
	if (emu_flags.zf) { f__0FE4_02F9_0020_C80A(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x02F2); emu_cs = 0x1A34; emu_ip = 0x3623; emu_last_cs = 0x0FE4; emu_last_ip = 0x02ED; emu_last_length = 0x0037; emu_last_crc = 0xC24B; emu_call();
	f__0FE4_02F2_0027_8238();
}

/**
 * Decompiled function f__0FE4_02E1_0011_DA30()
 *
 * @name f__0FE4_02E1_0011_DA30
 * @implements 0FE4:02E1:0011:DA30 ()
 *
 * Called From: 0FE4:02D8:0037:C24B
 */
void f__0FE4_02E1_0011_DA30()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0xFF);
	if (emu_flags.zf) { f__0FE4_02F9_0020_C80A(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x02F2); emu_cs = 0x1A34; f__1A34_3623_0010_B11C();
	f__0FE4_02F2_0027_8238();
}

/**
 * Decompiled function f__0FE4_02F2_0027_8238()
 *
 * @name f__0FE4_02F2_0027_8238
 * @implements 0FE4:02F2:0027:8238 ()
 *
 * Called From: 0FE4:02F2:0011:DA30
 */
void f__0FE4_02F2_0027_8238()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	if (!emu_flags.zf) { f__0FE4_0319_0014_27B3(); return; }
	emu_cmpws(&emu_di, 0xFF);
	if (emu_flags.zf) { f__0FE4_030A_000F_4483(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x2));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_cmpw(&emu_ax.x, emu_di);
	if (!emu_flags.zf) { f__0FE4_0319_0014_27B3(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), emu_si);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	f__0FE4_032D_0006_F7CE(); return;
}

/**
 * Decompiled function f__0FE4_02F9_0020_C80A()
 *
 * @name f__0FE4_02F9_0020_C80A
 * @implements 0FE4:02F9:0020:C80A ()
 *
 * Called From: 0FE4:02E5:0011:DA30
 * Called From: 0FE4:02E5:0037:C24B
 */
void f__0FE4_02F9_0020_C80A()
{
	emu_cmpws(&emu_di, 0xFF);
	if (emu_flags.zf) { f__0FE4_030A_000F_4483(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x2));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_cmpw(&emu_ax.x, emu_di);
	if (!emu_flags.zf) { f__0FE4_0319_0014_27B3(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), emu_si);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	f__0FE4_032D_0006_F7CE(); return;
}

/**
 * Decompiled function f__0FE4_030A_000F_4483()
 *
 * @name f__0FE4_030A_000F_4483
 * @implements 0FE4:030A:000F:4483 ()
 *
 * Called From: 0FE4:02FC:0020:C80A
 * Called From: 0FE4:02FC:0027:8238
 */
void f__0FE4_030A_000F_4483()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), emu_si);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	f__0FE4_032D_0006_F7CE(); return;
}

/**
 * Decompiled function f__0FE4_0317_0002_CA3A()
 *
 * @name f__0FE4_0317_0002_CA3A
 * @implements 0FE4:0317:0002:CA3A ()
 *
 * Called From: 0FE4:032B:0013:47B7
 * Called From: 0FE4:032B:0014:27B3
 */
void f__0FE4_0317_0002_CA3A()
{
	f__0FE4_032D_0006_F7CE(); return;
}

/**
 * Decompiled function f__0FE4_0319_0014_27B3()
 *
 * @name f__0FE4_0319_0014_27B3
 * @implements 0FE4:0319:0014:27B3 ()
 *
 * Called From: 0FE4:02DF:0037:C24B
 * Called From: 0FE4:02F7:0027:8238
 * Called From: 0FE4:0308:0020:C80A
 * Called From: 0FE4:0308:0027:8238
 */
void f__0FE4_0319_0014_27B3()
{
	emu_incw(&emu_si);
	emu_cmpw(&emu_si, emu_get_memory16(emu_ds, 0x00,  0x35EC));
	if ((emu_flags.sf != emu_flags.of)) { f__0FE4_02BB_0037_C24B(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), emu_si);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__0FE4_0317_0002_CA3A(); return;
}

/**
 * Decompiled function f__0FE4_031A_0013_47B7()
 *
 * @name f__0FE4_031A_0013_47B7
 * @implements 0FE4:031A:0013:47B7 ()
 *
 * Called From: 0FE4:02B9:0020:87FE
 * Called From: 0FE4:02B9:0038:4950
 * Called From: 0FE4:02B9:0002:EFBA
 */
void f__0FE4_031A_0013_47B7()
{
	emu_cmpw(&emu_si, emu_get_memory16(emu_ds, 0x00,  0x35EC));
	if ((emu_flags.sf != emu_flags.of)) { f__0FE4_02BB_0037_C24B(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), emu_si);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__0FE4_0317_0002_CA3A(); return;
}

/**
 * Decompiled function f__0FE4_032D_0006_F7CE()
 *
 * @name f__0FE4_032D_0006_F7CE
 * @implements 0FE4:032D:0006:F7CE ()
 *
 * Called From: 0FE4:0317:000F:4483
 * Called From: 0FE4:0317:0002:CA3A
 * Called From: 0FE4:0317:0027:8238
 * Called From: 0FE4:0317:0020:C80A
 */
void f__0FE4_032D_0006_F7CE()
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
 */
void f__0FE4_0333_000F_2B73()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x4);
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
	emu_movw(&emu_bx.x, emu_si);
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, emu_bx.x,  0x8440));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, emu_bx.x,  0x843E));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_dx.x);
	emu_cmpws(&emu_di, 0xFF);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x036C; emu_last_cs = 0x0FE4; emu_last_ip = 0x0359; emu_last_length = 0x0024; emu_last_crc = 0xB7F8; emu_call(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x0366); emu_cs = 0x1A34; f__1A34_3623_0010_B11C();
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
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_cmpw(&emu_ax.x, emu_di);
	if (!emu_flags.zf) { f__0FE4_0396_000B_4629(); return; }
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0x8), 0xFF);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x037F; emu_last_cs = 0x0FE4; emu_last_ip = 0x0370; emu_last_length = 0x0030; emu_last_crc = 0xE8DE; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x2));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (!emu_flags.zf) { f__0FE4_0396_000B_4629(); return; }
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x38BC), 0x0);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0391; emu_last_cs = 0x0FE4; emu_last_ip = 0x0384; emu_last_length = 0x0030; emu_last_crc = 0xE8DE; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), 0x4);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0396; emu_last_cs = 0x0FE4; emu_last_ip = 0x038F; emu_last_length = 0x0030; emu_last_crc = 0xE8DE; emu_call(); return; }
	emu_movw(&emu_ax.x, 0x1);
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
 */
void f__0FE4_0396_000B_4629()
{
	emu_incw(&emu_si);
	emu_cmpw(&emu_si, emu_get_memory16(emu_ds, 0x00,  0x35EC));
	if ((emu_flags.sf != emu_flags.of)) { f__0FE4_0342_0024_B7F8(); return; }
	emu_xorw(&emu_ax.x, emu_ax.x);
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
	emu_cmpw(&emu_si, emu_get_memory16(emu_ds, 0x00,  0x35EC));
	if ((emu_flags.sf != emu_flags.of)) { f__0FE4_0342_0024_B7F8(); return; }
	emu_xorw(&emu_ax.x, emu_ax.x);
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
 * Decompiled function f__0FE4_03A7_0027_85D5()
 *
 * @name f__0FE4_03A7_0027_85D5
 * @implements 0FE4:03A7:0027:85D5 ()
 *
 * Called From: 1A34:0922:002C:D192
 * Called From: B4B5:0480:000B:186A
 */
void f__0FE4_03A7_0027_85D5()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0xC);
	emu_push(emu_si);
	emu_movw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x0);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0x8), 0xFF);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x03C7; emu_last_cs = 0x0FE4; emu_last_ip = 0x03BF; emu_last_length = 0x0027; emu_last_crc = 0x85D5; emu_call(); return; }
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0xA), 0xFF);
	if (!emu_flags.zf) { f__0FE4_03CE_000C_7AB4(); return; }
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	/* Unresolved jump */ emu_ip = 0x0563; emu_last_cs = 0x0FE4; emu_last_ip = 0x03CB; emu_last_length = 0x0027; emu_last_crc = 0x85D5; emu_call();
}

/**
 * Decompiled function f__0FE4_03CB_0003_5D85()
 *
 * @name f__0FE4_03CB_0003_5D85
 * @implements 0FE4:03CB:0003:5D85 ()
 *
 * Called From: 0FE4:0560:0023:71CE
 */
void f__0FE4_03CB_0003_5D85()
{
	f__0FE4_0563_0005_8BCF(); return;
}

/**
 * Decompiled function f__0FE4_03CE_000C_7AB4()
 *
 * @name f__0FE4_03CE_000C_7AB4
 * @implements 0FE4:03CE:000C:7AB4 ()
 *
 * Called From: 0FE4:03C5:0027:85D5
 */
void f__0FE4_03CE_000C_7AB4()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x35E8));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x35EA));
	if (!emu_flags.zf) { f__0FE4_03DA_0008_EB39(); return; }
	/* Unresolved jump */ emu_ip = 0x055A; emu_last_cs = 0x0FE4; emu_last_ip = 0x03D7; emu_last_length = 0x000C; emu_last_crc = 0x7AB4; emu_call();
}

/**
 * Decompiled function f__0FE4_03DA_0008_EB39()
 *
 * @name f__0FE4_03DA_0008_EB39
 * @implements 0FE4:03DA:0008:EB39 ()
 *
 * Called From: 0FE4:03D5:000C:7AB4
 */
void f__0FE4_03DA_0008_EB39()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_cs); emu_push(0x03E2); emu_cs = 0x10BE; f__10BE_01AB_002F_0E7B();
	f__0FE4_03E2_004F_999F();
}

/**
 * Decompiled function f__0FE4_03E2_004F_999F()
 *
 * @name f__0FE4_03E2_004F_999F
 * @implements 0FE4:03E2:004F:999F ()
 *
 * Called From: 0FE4:03E2:0008:EB39
 */
void f__0FE4_03E2_004F_999F()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x6));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x8));
	if (emu_flags.cf) { f__0FE4_0431_0037_C235(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_dx.x, 0x5A);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_dx.x, 0x2D07);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_es, emu_dx.x);
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x3C), 0x4);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0431; emu_last_cs = 0x0FE4; emu_last_ip = 0x040E; emu_last_length = 0x004F; emu_last_crc = 0x999F; emu_call(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_dx.x, 0x5A);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_dx.x, 0x2D07);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_es, emu_dx.x);
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x3C), 0x5);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0431; emu_last_cs = 0x0FE4; emu_last_ip = 0x0425; emu_last_length = 0x004F; emu_last_crc = 0x999F; emu_call(); return; }
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x38BC), 0x0);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0431; emu_last_cs = 0x0FE4; emu_last_ip = 0x042C; emu_last_length = 0x004F; emu_last_crc = 0x999F; emu_call(); return; }
	/* Unresolved jump */ emu_ip = 0x055A; emu_last_cs = 0x0FE4; emu_last_ip = 0x042E; emu_last_length = 0x004F; emu_last_crc = 0x999F; emu_call();
}

/**
 * Decompiled function f__0FE4_0431_0037_C235()
 *
 * @name f__0FE4_0431_0037_C235
 * @implements 0FE4:0431:0037:C235 ()
 *
 * Called From: 0FE4:03F7:004F:999F
 */
void f__0FE4_0431_0037_C235()
{
	emu_orw(&emu_si, emu_si);
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x049C; emu_last_cs = 0x0FE4; emu_last_ip = 0x0433; emu_last_length = 0x0037; emu_last_crc = 0xC235; emu_call(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_dx.x, 0x5A);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_dx.x, 0x2D07);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_es, emu_dx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x32));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_dx.x, 0x5A);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_dx.x, 0x2D07);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_es, emu_dx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x34));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax.x);
	emu_movw(&emu_si, emu_get_memory16(emu_ss, emu_bp, -0x6));
	f__0FE4_0495_0007_F34A(); return;
}

/**
 * Decompiled function f__0FE4_0468_002C_883C()
 *
 * @name f__0FE4_0468_002C_883C
 * @implements 0FE4:0468:002C:883C ()
 *
 * Called From: 0FE4:0498:0007:F34A
 * Called From: 0FE4:0498:0008:B54A
 */
void f__0FE4_0468_002C_883C()
{
	emu_movw(&emu_ax.x, emu_si);
	emu_movb(&emu_cx.l, 0x7);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x35E8));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), 0x1);
	if (!emu_flags.zf) { f__0FE4_0494_0008_B54A(); return; }
	emu_movw(&emu_ax.x, emu_si);
	emu_movb(&emu_cx.l, 0x7);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x35EA));
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00,  0x35E8));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_bx.x);
	f__0FE4_049A_0002_D53A(); return;
}

/**
 * Decompiled function f__0FE4_0494_0008_B54A()
 *
 * @name f__0FE4_0494_0008_B54A
 * @implements 0FE4:0494:0008:B54A ()
 *
 * Called From: 0FE4:047A:002C:883C
 */
void f__0FE4_0494_0008_B54A()
{
	emu_incw(&emu_si);
	emu_cmpw(&emu_si, emu_get_memory16(emu_ss, emu_bp, -0x8));
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__0FE4_0468_002C_883C(); return; }
	/* Unresolved jump */ emu_ip = 0x04C6; emu_last_cs = 0x0FE4; emu_last_ip = 0x049A; emu_last_length = 0x0008; emu_last_crc = 0xB54A; emu_call();
}

/**
 * Decompiled function f__0FE4_0495_0007_F34A()
 *
 * @name f__0FE4_0495_0007_F34A
 * @implements 0FE4:0495:0007:F34A ()
 *
 * Called From: 0FE4:0466:0037:C235
 */
void f__0FE4_0495_0007_F34A()
{
	emu_cmpw(&emu_si, emu_get_memory16(emu_ss, emu_bp, -0x8));
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__0FE4_0468_002C_883C(); return; }
	/* Unresolved jump */ emu_ip = 0x04C6; emu_last_cs = 0x0FE4; emu_last_ip = 0x049A; emu_last_length = 0x0007; emu_last_crc = 0xF34A; emu_call();
}

/**
 * Decompiled function f__0FE4_049A_0002_D53A()
 *
 * @name f__0FE4_049A_0002_D53A
 * @implements 0FE4:049A:0002:D53A ()
 *
 * Called From: 0FE4:0492:002C:883C
 */
void f__0FE4_049A_0002_D53A()
{
	f__0FE4_04C6_000B_ECCA(); return;
}

/**
 * Decompiled function f__0FE4_04C6_000B_ECCA()
 *
 * @name f__0FE4_04C6_000B_ECCA
 * @implements 0FE4:04C6:000B:ECCA ()
 *
 * Called From: 0FE4:049A:0002:D53A
 */
void f__0FE4_04C6_000B_ECCA()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (!emu_flags.zf) { f__0FE4_04D1_0019_1614(); return; }
	/* Unresolved jump */ emu_ip = 0x055A; emu_last_cs = 0x0FE4; emu_last_ip = 0x04CE; emu_last_length = 0x000B; emu_last_crc = 0xECCA; emu_call();
}

/**
 * Decompiled function f__0FE4_04D1_0019_1614()
 *
 * @name f__0FE4_04D1_0019_1614
 * @implements 0FE4:04D1:0019:1614 ()
 *
 * Called From: 0FE4:04CC:000B:ECCA
 */
void f__0FE4_04D1_0019_1614()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_incw(&emu_get_memory16(emu_es, emu_bx.x,  0x6));
	emu_movw(&emu_ax.x, 0x80);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x04EA); emu_cs = 0x01F7; f__01F7_2947_0014_02B8();
	f__0FE4_04EA_0079_7205();
}

/**
 * Decompiled function f__0FE4_04EA_0079_7205()
 *
 * @name f__0FE4_04EA_0079_7205
 * @implements 0FE4:04EA:0079:7205 ()
 *
 * Called From: 0FE4:04EA:0019:1614
 */
void f__0FE4_04EA_0079_7205()
{
	emu_addws(&emu_sp, 0x8);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x0), emu_si);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ss, emu_bp,  0xA));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x8), emu_ax.l);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ss, emu_bp,  0x8));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x2), emu_ax.l);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), 0x3);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x6), 0x1);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x10), 0x0);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x72), 0xFF);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x3), 0xFF);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0x8), 0x19);
	if (!emu_flags.zf) { f__0FE4_0540_0023_71CE(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x58), 0x3);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00,  0x35EC));
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_get_memory16(emu_ds, emu_bx.x,  0x8440), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, emu_bx.x,  0x843E), emu_dx.x);
	emu_incw(&emu_get_memory16(emu_ds, 0x00,  0x35EC));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	/* Unresolved jump */ emu_ip = 0x03CB; emu_last_cs = 0x0FE4; emu_last_ip = 0x0560; emu_last_length = 0x0079; emu_last_crc = 0x7205; emu_call();
}

/**
 * Decompiled function f__0FE4_0540_0023_71CE()
 *
 * @name f__0FE4_0540_0023_71CE
 * @implements 0FE4:0540:0023:71CE ()
 *
 * Called From: 0FE4:0536:0079:7205
 */
void f__0FE4_0540_0023_71CE()
{
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00,  0x35EC));
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_get_memory16(emu_ds, emu_bx.x,  0x8440), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, emu_bx.x,  0x843E), emu_dx.x);
	emu_incw(&emu_get_memory16(emu_ds, 0x00,  0x35EC));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	f__0FE4_03CB_0003_5D85(); return;
}

/**
 * Decompiled function f__0FE4_0563_0005_8BCF()
 *
 * @name f__0FE4_0563_0005_8BCF
 * @implements 0FE4:0563:0005:8BCF ()
 *
 * Called From: 0FE4:03CB:0003:5D85
 */
void f__0FE4_0563_0005_8BCF()
{
	emu_pop(&emu_si);
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__0FE4_0568_0018_8258()
 *
 * @name f__0FE4_0568_0018_8258
 * @implements 0FE4:0568:0018:8258 ()
 *
 * Called From: 1A34:1175:000E:BB32
 * Called From: 1A34:2F91:000D:542A
 */
void f__0FE4_0568_0018_8258()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_si);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x3902);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_addw(&emu_ax.x, 0x12);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0580); emu_cs = 0x15C2; f__15C2_0395_0044_304E();
	f__0FE4_0580_0010_7F56();
}

/**
 * Decompiled function f__0FE4_0580_0010_7F56()
 *
 * @name f__0FE4_0580_0010_7F56
 * @implements 0FE4:0580:0010:7F56 ()
 *
 * Called From: 0FE4:0580:0018:8258
 */
void f__0FE4_0580_0010_7F56()
{
	emu_addws(&emu_sp, 0x8);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), 0x0);
	emu_xorw(&emu_si, emu_si);
	f__0FE4_05F4_0009_2E7B(); return;
}

/**
 * Decompiled function f__0FE4_0590_002A_6D7E()
 *
 * @name f__0FE4_0590_002A_6D7E
 * @implements 0FE4:0590:002A:6D7E ()
 *
 * Called From: 0FE4:05F8:0009:2E7B
 * Called From: 0FE4:05F8:000A:3FFB
 */
void f__0FE4_0590_002A_6D7E()
{
	emu_movw(&emu_bx.x, emu_si);
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, emu_bx.x,  0x8440));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, emu_bx.x,  0x843E));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x05F3; emu_last_cs = 0x0FE4; emu_last_ip = 0x05A1; emu_last_length = 0x002A; emu_last_crc = 0x6D7E; emu_call(); return; }
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	if (!emu_flags.zf) { f__0FE4_05F3_000A_3FFB(); return; }
	emu_decw(&emu_get_memory16(emu_ds, 0x00,  0x35EC));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x8));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x05BA); emu_cs = 0x10BE; f__10BE_01AB_002F_0E7B();
	f__0FE4_05BA_0034_78C1();
}

/**
 * Decompiled function f__0FE4_05BA_0034_78C1()
 *
 * @name f__0FE4_05BA_0034_78C1
 * @implements 0FE4:05BA:0034:78C1 ()
 *
 * Called From: 0FE4:05BA:002A:6D7E
 */
void f__0FE4_05BA_0034_78C1()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_es, emu_dx.x);
	emu_decw(&emu_get_memory16(emu_es, emu_bx.x,  0x6));
	emu_cmpw(&emu_si, emu_get_memory16(emu_ds, 0x00,  0x35EC));
	if (!(emu_flags.sf != emu_flags.of)) { f__0FE4_05F1_0002_C3BA(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x35EC));
	emu_subw(&emu_ax.x, emu_si);
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, emu_si);
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_addw(&emu_ax.x, 0x8442);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, emu_si);
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_addw(&emu_ax.x, 0x843E);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x05EE); emu_cs = 0x01F7; f__01F7_28B8_0024_83C9();
	f__0FE4_05EE_0005_86EE();
}

/**
 * Decompiled function f__0FE4_05EE_0005_86EE()
 *
 * @name f__0FE4_05EE_0005_86EE
 * @implements 0FE4:05EE:0005:86EE ()
 *
 * Called From: 0FE4:05EE:0034:78C1
 */
void f__0FE4_05EE_0005_86EE()
{
	emu_addws(&emu_sp, 0xA);
	f__0FE4_05FA_0003_2E57(); return;
}

/**
 * Decompiled function f__0FE4_05F1_0002_C3BA()
 *
 * @name f__0FE4_05F1_0002_C3BA
 * @implements 0FE4:05F1:0002:C3BA ()
 *
 * Called From: 0FE4:05C7:0034:78C1
 */
void f__0FE4_05F1_0002_C3BA()
{
	f__0FE4_05FA_0003_2E57(); return;
}

/**
 * Decompiled function f__0FE4_05F3_000A_3FFB()
 *
 * @name f__0FE4_05F3_000A_3FFB
 * @implements 0FE4:05F3:000A:3FFB ()
 *
 * Called From: 0FE4:05A6:002A:6D7E
 */
void f__0FE4_05F3_000A_3FFB()
{
	emu_incw(&emu_si);
	emu_cmpw(&emu_si, emu_get_memory16(emu_ds, 0x00,  0x35EC));
	if ((emu_flags.sf != emu_flags.of)) { f__0FE4_0590_002A_6D7E(); return; }
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__0FE4_05F4_0009_2E7B()
 *
 * @name f__0FE4_05F4_0009_2E7B
 * @implements 0FE4:05F4:0009:2E7B ()
 *
 * Called From: 0FE4:058E:0010:7F56
 */
void f__0FE4_05F4_0009_2E7B()
{
	emu_cmpw(&emu_si, emu_get_memory16(emu_ds, 0x00,  0x35EC));
	if ((emu_flags.sf != emu_flags.of)) { f__0FE4_0590_002A_6D7E(); return; }
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__0FE4_05FA_0003_2E57()
 *
 * @name f__0FE4_05FA_0003_2E57
 * @implements 0FE4:05FA:0003:2E57 ()
 *
 * Called From: 0FE4:05F1:0005:86EE
 * Called From: 0FE4:05F1:0002:C3BA
 */
void f__0FE4_05FA_0003_2E57()
{
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__0FE4_05FD_002C_15BA()
 *
 * @name f__0FE4_05FD_002C_15BA
 * @implements 0FE4:05FD:002C:15BA ()
 *
 * Called From: 0972:13CE:000F:D368
 * Called From: 0EDB:0407:0020:629E
 * Called From: 167E:003B:0006:8FC7
 * Called From: 167E:0137:0006:8BC7
 * Called From: 167E:018E:0006:8BC7
 * Called From: 167E:0211:0006:8BC7
 * Called From: 167E:029D:0007:9375
 * Called From: 167E:0307:0007:9375
 * Called From: 176C:0A02:0018:247E
 * Called From: 1A34:34BE:0032:AFF8
 * Called From: B4C4:00D4:0010:FF92
 * Called From: B4C4:03EF:0016:704F
 * Called From: B4CD:10C1:0040:F11C
 * Called From: B4CD:1122:0039:EC73
 */
void f__0FE4_05FD_002C_15BA()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_si);
	emu_movw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x35E8));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x35EA));
	if (emu_flags.zf) { f__0FE4_0629_0006_5EA9(); return; }
	emu_orw(&emu_si, emu_si);
	if ((emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x0629; emu_last_cs = 0x0FE4; emu_last_ip = 0x060F; emu_last_length = 0x002C; emu_last_crc = 0x15BA; emu_call(); return; }
	emu_cmpws(&emu_si, 0x66);
	if (!(emu_flags.sf != emu_flags.of)) { f__0FE4_0629_0006_5EA9(); return; }
	emu_movw(&emu_ax.x, emu_si);
	emu_movb(&emu_cx.l, 0x7);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x35EA));
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x35E8));
	emu_pop(&emu_bx.x);
	emu_addw(&emu_ax.x, emu_bx.x);
	f__0FE4_062F_0003_2E57(); return;
}

/**
 * Decompiled function f__0FE4_0627_0002_C33A()
 *
 * @name f__0FE4_0627_0002_C33A
 * @implements 0FE4:0627:0002:C33A ()
 *
 * Called From: 0FE4:062D:0006:5EA9
 */
void f__0FE4_0627_0002_C33A()
{
	f__0FE4_062F_0003_2E57(); return;
}

/**
 * Decompiled function f__0FE4_0629_0006_5EA9()
 *
 * @name f__0FE4_0629_0006_5EA9
 * @implements 0FE4:0629:0006:5EA9 ()
 *
 * Called From: 0FE4:060B:002C:15BA
 * Called From: 0FE4:0614:002C:15BA
 */
void f__0FE4_0629_0006_5EA9()
{
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__0FE4_0627_0002_C33A(); return;
}

/**
 * Decompiled function f__0FE4_062F_0003_2E57()
 *
 * @name f__0FE4_062F_0003_2E57
 * @implements 0FE4:062F:0003:2E57 ()
 *
 * Called From: 0FE4:0627:002C:15BA
 * Called From: 0FE4:0627:0002:C33A
 */
void f__0FE4_062F_0003_2E57()
{
	emu_pop(&emu_si);
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
	emu_subws(&emu_sp, 0x4);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x0);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x066A; emu_last_cs = 0x0FE4; emu_last_ip = 0x0648; emu_last_length = 0x0031; emu_last_crc = 0x75AA; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x6F), 0x0);
	if (emu_flags.zf) { f__0FE4_066A_0008_C849(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x6F));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_decw(&emu_ax.x);
	emu_push(emu_ax.x);
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x0663); emu_cs = 0x104B; emu_ip = 0x0354; emu_last_cs = 0x0FE4; emu_last_ip = 0x065E; emu_last_length = 0x0031; emu_last_crc = 0x75AA; emu_call();
	/* Unresolved jump */ emu_ip = 0x0663; emu_last_cs = 0x0FE4; emu_last_ip = 0x0663; emu_last_length = 0x0031; emu_last_crc = 0x75AA; emu_call();
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
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	f__0FE4_0672_0004_893F(); return;
}

/**
 * Decompiled function f__0FE4_0672_0004_893F()
 *
 * @name f__0FE4_0672_0004_893F
 * @implements 0FE4:0672:0004:893F ()
 *
 * Called From: 0FE4:0670:0008:C849
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

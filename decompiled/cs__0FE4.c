/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__0FE4_0002_0021_434D()
 *
 * @name f__0FE4_0002_0021_434D
 * @implements 0FE4:0002:0021:434D ()
 *
 * Called From: 07D4:004E:0005:10EE
 */
void f__0FE4_0002_0021_434D()
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
	f__0FE4_012E_000B_BCEA(); return;
}

/**
 * Decompiled function f__0FE4_0023_005B_9827()
 *
 * @name f__0FE4_0023_005B_9827
 * @implements 0FE4:0023:005B:9827 ()
 *
 * Called From: 0FE4:0136:000B:BCEA
 * Called From: 0FE4:0136:000C:DCEE
 * Called From: 0FE4:0136:007F:E3B0
 * Called From: 0FE4:0136:005A:2CA9
 * Called From: 0FE4:0136:0039:1B87
 */
void f__0FE4_0023_005B_9827()
{
	emu_movw(&emu_bx.x, emu_si);
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, emu_bx.x, -0x7BC0));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, emu_bx.x, -0x7BC2));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_dx.x);
	emu_movw(&emu_bx.x, emu_si);
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, emu_bx.x, -0x7BBC));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, emu_bx.x, -0x7BBE));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_dx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x9));
	emu_movb(&emu_ax.h, 0x0);
	emu_movw(&emu_dx.x, 0x1);
	emu_movb(&emu_cx.l, emu_get_memory8(emu_ds, 0x00,  0x3A38));
	emu_shlw(&emu_dx.x, emu_cx.l);
	emu_testw(&emu_ax.x, emu_dx.x);
	if (emu_flags.zf) { f__0FE4_0096_0010_269E(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), 0x4);
	if (!emu_flags.zf) { emu_ip = 0x0096; emu_last_cs = 0x0FE4; emu_last_ip = 0x006A; emu_last_length = 0x005B; emu_last_crc = 0x9827; emu_call(); return; } // Jump does not resolve
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3A38));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x8));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x007E); emu_cs = 0x1423; f__1423_0F34_0017_4318();
	f__0FE4_007E_0010_4AA7();
}

/**
 * Decompiled function f__0FE4_007E_0010_4AA7()
 *
 * @name f__0FE4_007E_0010_4AA7
 * @implements 0FE4:007E:0010:4AA7 ()
 *
 * Called From: 0FE4:007E:005B:9827
 */
void f__0FE4_007E_0010_4AA7()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (emu_flags.zf) { f__0FE4_008E_0018_E0CE(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x3A3A));
	emu_incw(&emu_get_memory16(emu_es, emu_bx.x,  0xC));
	f__0FE4_0096_0010_269E(); return;
}

/**
 * Decompiled function f__0FE4_008E_0018_E0CE()
 *
 * @name f__0FE4_008E_0018_E0CE
 * @implements 0FE4:008E:0018:E0CE ()
 *
 * Called From: 0FE4:0082:0010:4AA7
 */
void f__0FE4_008E_0018_E0CE()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x3A3A));
	emu_incw(&emu_get_memory16(emu_es, emu_bx.x,  0xA));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xA));
	emu_push(emu_cs); emu_push(0x00A6); emu_cs = 0x0F3F; f__0F3F_007E_0008_3E22();
	f__0FE4_00A6_0014_221B();
}

/**
 * Decompiled function f__0FE4_0096_0010_269E()
 *
 * @name f__0FE4_0096_0010_269E
 * @implements 0FE4:0096:0010:269E ()
 *
 * Called From: 0FE4:005F:005B:9827
 * Called From: 0FE4:008C:0010:4AA7
 */
void f__0FE4_0096_0010_269E()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xA));
	emu_push(emu_cs); emu_push(0x00A6); emu_cs = 0x0F3F; f__0F3F_007E_0008_3E22();
	f__0FE4_00A6_0014_221B();
}

/**
 * Decompiled function f__0FE4_00A6_0014_221B()
 *
 * @name f__0FE4_00A6_0014_221B
 * @implements 0FE4:00A6:0014:221B ()
 *
 * Called From: 0FE4:00A6:0010:269E
 * Called From: 0FE4:00A6:0018:E0CE
 */
void f__0FE4_00A6_0014_221B()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_di, emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xA));
	emu_push(emu_cs); emu_push(0x00BA); emu_cs = 0x0F3F; f__0F3F_007E_0008_3E22();
	f__0FE4_00BA_007F_E3B0();
}

/**
 * Decompiled function f__0FE4_00BA_007F_E3B0()
 *
 * @name f__0FE4_00BA_007F_E3B0
 * @implements 0FE4:00BA:007F:E3B0 ()
 *
 * Called From: 0FE4:00BA:0014:221B
 */
void f__0FE4_00BA_007F_E3B0()
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
	if (!emu_flags.zf) { f__0FE4_00DF_005A_2CA9(); return; }
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
	if (!emu_flags.zf) { f__0FE4_0100_0039_1B87(); return; }
	emu_subw(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x100);
	emu_cmpw(&emu_di, emu_get_memory16(emu_ss, emu_bp, -0xA));
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__0FE4_012D_000C_DCEE(); return; }
	emu_movw(&emu_bx.x, emu_si);
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_get_memory16(emu_ds, emu_bx.x, -0x7BC0), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, emu_bx.x, -0x7BC2), emu_dx.x);
	emu_movw(&emu_bx.x, emu_si);
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_get_memory16(emu_ds, emu_bx.x, -0x7BBC), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, emu_bx.x, -0x7BBE), emu_dx.x);
	emu_incw(&emu_si);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x35EC));
	emu_decw(&emu_ax.x);
	emu_cmpw(&emu_ax.x, emu_si);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { emu_ip = 0x0139; emu_last_cs = 0x0FE4; emu_last_ip = 0x0134; emu_last_length = 0x007F; emu_last_crc = 0xE3B0; emu_call(); return; } // Jump does not resolve
	f__0FE4_0023_005B_9827(); return;
}

/**
 * Decompiled function f__0FE4_00DF_005A_2CA9()
 *
 * @name f__0FE4_00DF_005A_2CA9
 * @implements 0FE4:00DF:005A:2CA9 ()
 *
 * Called From: 0FE4:00D9:007F:E3B0
 */
void f__0FE4_00DF_005A_2CA9()
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
	if (!emu_flags.zf) { f__0FE4_0100_0039_1B87(); return; }
	emu_subw(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x100);
	emu_cmpw(&emu_di, emu_get_memory16(emu_ss, emu_bp, -0xA));
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__0FE4_012D_000C_DCEE(); return; }
	emu_movw(&emu_bx.x, emu_si);
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_get_memory16(emu_ds, emu_bx.x, -0x7BC0), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, emu_bx.x, -0x7BC2), emu_dx.x);
	emu_movw(&emu_bx.x, emu_si);
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_get_memory16(emu_ds, emu_bx.x, -0x7BBC), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, emu_bx.x, -0x7BBE), emu_dx.x);
	emu_incw(&emu_si);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x35EC));
	emu_decw(&emu_ax.x);
	emu_cmpw(&emu_ax.x, emu_si);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { emu_ip = 0x0139; emu_last_cs = 0x0FE4; emu_last_ip = 0x0134; emu_last_length = 0x005A; emu_last_crc = 0x2CA9; emu_call(); return; } // Jump does not resolve
	f__0FE4_0023_005B_9827(); return;
}

/**
 * Decompiled function f__0FE4_0100_0039_1B87()
 *
 * @name f__0FE4_0100_0039_1B87
 * @implements 0FE4:0100:0039:1B87 ()
 *
 * Called From: 0FE4:00F9:007F:E3B0
 * Called From: 0FE4:00F9:005A:2CA9
 */
void f__0FE4_0100_0039_1B87()
{
	emu_cmpw(&emu_di, emu_get_memory16(emu_ss, emu_bp, -0xA));
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__0FE4_012D_000C_DCEE(); return; }
	emu_movw(&emu_bx.x, emu_si);
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_get_memory16(emu_ds, emu_bx.x, -0x7BC0), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, emu_bx.x, -0x7BC2), emu_dx.x);
	emu_movw(&emu_bx.x, emu_si);
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_get_memory16(emu_ds, emu_bx.x, -0x7BBC), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, emu_bx.x, -0x7BBE), emu_dx.x);
	emu_incw(&emu_si);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x35EC));
	emu_decw(&emu_ax.x);
	emu_cmpw(&emu_ax.x, emu_si);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__0FE4_0139_0006_137A(); return; }
	f__0FE4_0023_005B_9827(); return;
}

/**
 * Decompiled function f__0FE4_012D_000C_DCEE()
 *
 * @name f__0FE4_012D_000C_DCEE
 * @implements 0FE4:012D:000C:DCEE ()
 *
 * Called From: 0FE4:0103:007F:E3B0
 * Called From: 0FE4:0103:0039:1B87
 * Called From: 0FE4:0103:005A:2CA9
 */
void f__0FE4_012D_000C_DCEE()
{
	emu_incw(&emu_si);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x35EC));
	emu_decw(&emu_ax.x);
	emu_cmpw(&emu_ax.x, emu_si);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__0FE4_0139_0006_137A(); return; }
	f__0FE4_0023_005B_9827(); return;
}

/**
 * Decompiled function f__0FE4_012E_000B_BCEA()
 *
 * @name f__0FE4_012E_000B_BCEA
 * @implements 0FE4:012E:000B:BCEA ()
 *
 * Called From: 0FE4:0020:0021:434D
 */
void f__0FE4_012E_000B_BCEA()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x35EC));
	emu_decw(&emu_ax.x);
	emu_cmpw(&emu_ax.x, emu_si);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { emu_ip = 0x0139; emu_last_cs = 0x0FE4; emu_last_ip = 0x0134; emu_last_length = 0x000B; emu_last_crc = 0xBCEA; emu_call(); return; } // Jump does not resolve
	f__0FE4_0023_005B_9827(); return;
}

/**
 * Decompiled function f__0FE4_0139_0006_137A()
 *
 * @name f__0FE4_0139_0006_137A
 * @implements 0FE4:0139:0006:137A ()
 *
 * Called From: 0FE4:0134:000C:DCEE
 * Called From: 0FE4:0134:0039:1B87
 */
void f__0FE4_0139_0006_137A()
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
 * Decompiled function f__0FE4_013F_001C_6582()
 *
 * @name f__0FE4_013F_001C_6582
 * @implements 0FE4:013F:001C:6582 ()
 *
 * Called From: B4B8:1AA9:0013:E487
 * Called From: B511:0A98:000E:E3BE
 */
void f__0FE4_013F_001C_6582()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x35EC), 0x0);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_flags.zf) { f__0FE4_0164_001D_6C2C(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x015B); emu_cs = 0x2B0E; f__2B0E_00D0_0022_D0C8();
	f__0FE4_015B_0026_3A74();
}

/**
 * Decompiled function f__0FE4_015B_0026_3A74()
 *
 * @name f__0FE4_015B_0026_3A74
 * @implements 0FE4:015B:0026:3A74 ()
 *
 * Called From: 0FE4:015B:001C:6582
 */
void f__0FE4_015B_0026_3A74()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x35EA), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x35E8), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x35E8));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x35EA));
	if (emu_flags.zf) { emu_ip = 0x0184; emu_last_cs = 0x0FE4; emu_last_ip = 0x016B; emu_last_length = 0x0026; emu_last_crc = 0x3A74; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, 0x3300);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x35EA));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x35E8));
	emu_push(emu_cs); emu_push(0x0181); emu_cs = 0x01F7; f__01F7_2947_0014_9C5E();
	f__0FE4_0181_000A_B437();
}

/**
 * Decompiled function f__0FE4_0164_001D_6C2C()
 *
 * @name f__0FE4_0164_001D_6C2C
 * @implements 0FE4:0164:001D:6C2C ()
 *
 * Called From: 0FE4:014E:001C:6582
 */
void f__0FE4_0164_001D_6C2C()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x35E8));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x35EA));
	if (emu_flags.zf) { emu_ip = 0x0184; emu_last_cs = 0x0FE4; emu_last_ip = 0x016B; emu_last_length = 0x001D; emu_last_crc = 0x6C2C; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, 0x3300);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x35EA));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x35E8));
	emu_push(emu_cs); emu_push(0x0181); emu_cs = 0x01F7; f__01F7_2947_0014_9C5E();
	f__0FE4_0181_000A_B437();
}

/**
 * Decompiled function f__0FE4_0181_000A_B437()
 *
 * @name f__0FE4_0181_000A_B437
 * @implements 0FE4:0181:000A:B437 ()
 *
 * Called From: 0FE4:0181:001D:6C2C
 * Called From: 0FE4:0181:0026:3A74
 */
void f__0FE4_0181_000A_B437()
{
	emu_addws(&emu_sp, 0x8);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_movw(&emu_ax.x, 0x3300);
	f__0FE4_018B_0002_00E2(); return;
}

/**
 * Decompiled function f__0FE4_018B_0002_00E2()
 *
 * @name f__0FE4_018B_0002_00E2
 * @implements 0FE4:018B:0002:00E2 ()
 *
 * Called From: 0FE4:0189:000A:B437
 */
void f__0FE4_018B_0002_00E2()
{
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__0FE4_018D_0012_EFE2()
 *
 * @name f__0FE4_018D_0012_EFE2
 * @implements 0FE4:018D:0012:EFE2 ()
 *
 * Called From: B4C4:0433:0020:6422
 * Called From: B4F2:0340:0005:1816
 * Called From: B511:00AE:0005:1816
 */
void f__0FE4_018D_0012_EFE2()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x8);
	emu_push(emu_si);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_cs); emu_push(0x019F); emu_cs = 0x10BE; f__10BE_01E2_0027_C454();
	f__0FE4_019F_0002_0384();
}

/**
 * Decompiled function f__0FE4_019F_0002_0384()
 *
 * @name f__0FE4_019F_0002_0384
 * @implements 0FE4:019F:0002:0384 ()
 *
 * Called From: 0FE4:019F:0012:EFE2
 */
void f__0FE4_019F_0002_0384()
{
	f__0FE4_01B5_001A_4B5A(); return;
}

/**
 * Decompiled function f__0FE4_01A1_0014_0C03()
 *
 * @name f__0FE4_01A1_0014_0C03
 * @implements 0FE4:01A1:0014:0C03 ()
 *
 * Called From: 0FE4:01C3:001A:4B5A
 */
void f__0FE4_01A1_0014_0C03()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x6), 0x0);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_cs); emu_push(0x01B5); emu_cs = 0x10BE; f__10BE_020F_004E_EE3E();
	f__0FE4_01B5_001A_4B5A();
}

/**
 * Decompiled function f__0FE4_01B5_001A_4B5A()
 *
 * @name f__0FE4_01B5_001A_4B5A
 * @implements 0FE4:01B5:001A:4B5A ()
 *
 * Called From: 0FE4:019F:0002:0384
 * Called From: 0FE4:01B5:0014:0C03
 */
void f__0FE4_01B5_001A_4B5A()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	if (!emu_flags.zf) { f__0FE4_01A1_0014_0C03(); return; }
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x35EC), 0x0);
	emu_xorw(&emu_si, emu_si);
	f__0FE4_0222_000A_86B9(); return;
}

/**
 * Decompiled function f__0FE4_01CF_002F_91E4()
 *
 * @name f__0FE4_01CF_002F_91E4
 * @implements 0FE4:01CF:002F:91E4 ()
 *
 * Called From: 0FE4:0225:000A:86B9
 * Called From: 0FE4:0225:000B:B6BB
 * Called From: 0FE4:0225:002E:962F
 */
void f__0FE4_01CF_002F_91E4()
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
	if (emu_flags.zf) { f__0FE4_0221_000B_B6BB(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x8));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x01FE); emu_cs = 0x10BE; f__10BE_01AB_002F_5CC7();
	f__0FE4_01FE_002E_962F();
}

/**
 * Decompiled function f__0FE4_01FE_002E_962F()
 *
 * @name f__0FE4_01FE_002E_962F
 * @implements 0FE4:01FE:002E:962F ()
 *
 * Called From: 0FE4:01FE:002F:91E4
 */
void f__0FE4_01FE_002E_962F()
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
	emu_movw(&emu_get_memory16(emu_ds, emu_bx.x, -0x7BC0), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, emu_bx.x, -0x7BC2), emu_dx.x);
	emu_incw(&emu_get_memory16(emu_ds, 0x00,  0x35EC));
	emu_incw(&emu_si);
	emu_cmpws(&emu_si, 0x66);
	if ((emu_flags.sf != emu_flags.of)) { f__0FE4_01CF_002F_91E4(); return; }
	emu_pop(&emu_si);
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__0FE4_0221_000B_B6BB()
 *
 * @name f__0FE4_0221_000B_B6BB
 * @implements 0FE4:0221:000B:B6BB ()
 *
 * Called From: 0FE4:01EE:002F:91E4
 */
void f__0FE4_0221_000B_B6BB()
{
	emu_incw(&emu_si);
	emu_cmpws(&emu_si, 0x66);
	if ((emu_flags.sf != emu_flags.of)) { f__0FE4_01CF_002F_91E4(); return; }
	emu_pop(&emu_si);
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__0FE4_0222_000A_86B9()
 *
 * @name f__0FE4_0222_000A_86B9
 * @implements 0FE4:0222:000A:86B9 ()
 *
 * Called From: 0FE4:01CD:001A:4B5A
 */
void f__0FE4_0222_000A_86B9()
{
	emu_cmpws(&emu_si, 0x66);
	if ((emu_flags.sf != emu_flags.of)) { f__0FE4_01CF_002F_91E4(); return; }
	emu_pop(&emu_si);
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__0FE4_0243_003A_DEE2()
 *
 * @name f__0FE4_0243_003A_DEE2
 * @implements 0FE4:0243:003A:DEE2 ()
 *
 * Called From: 06F7:0054:0012:EA1A
 * Called From: 07D4:05EE:0012:E729
 * Called From: 07D4:0920:0012:E61A
 * Called From: 07D4:0FCC:0012:E61A
 * Called From: 0EDB:0357:0031:BF5C
 * Called From: 10E4:21D1:0023:8493
 * Called From: 176C:029D:0113:12CE
 * Called From: 176C:029D:0012:EA1A
 * Called From: 176C:029D:009C:FEE3
 * Called From: 176C:029D:0040:930F
 * Called From: 176C:029D:00F8:27AD
 * Called From: 176C:029D:00CA:4A5B
 * Called From: 1A34:13D9:0018:FC07
 * Called From: 1A34:2259:001F:C3E3
 * Called From: 1A34:2259:001D:03D9
 * Called From: 1A34:368D:0014:E742
 * Called From: B50B:03AE:001F:501F
 * Called From: B511:0156:0013:2387
 * Called From: B518:0FD1:002E:A2A7
 */
void f__0FE4_0243_003A_DEE2()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (!emu_flags.zf) { f__0FE4_0256_0027_0A3E(); return; }
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
	emu_push(0x027D); f__0FE4_0283_0038_0940();
	f__0FE4_027D_0004_04F4();
}

/**
 * Decompiled function f__0FE4_0256_0027_0A3E()
 *
 * @name f__0FE4_0256_0027_0A3E
 * @implements 0FE4:0256:0027:0A3E ()
 *
 * Called From: 0FE4:024C:003A:DEE2
 */
void f__0FE4_0256_0027_0A3E()
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
	emu_push(0x027D); f__0FE4_0283_0038_0940();
	f__0FE4_027D_0004_04F4();
}

/**
 * Decompiled function f__0FE4_027D_0004_04F4()
 *
 * @name f__0FE4_027D_0004_04F4
 * @implements 0FE4:027D:0004:04F4 ()
 *
 * Called From: 0FE4:027D:003A:DEE2
 * Called From: 0FE4:027D:0027:0A3E
 */
void f__0FE4_027D_0004_04F4()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	f__0FE4_0281_0002_00E2(); return;
}

/**
 * Decompiled function f__0FE4_0281_0002_00E2()
 *
 * @name f__0FE4_0281_0002_00E2
 * @implements 0FE4:0281:0002:00E2 ()
 *
 * Called From: 0FE4:027F:0004:04F4
 */
void f__0FE4_0281_0002_00E2()
{
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__0FE4_0283_0038_0940()
 *
 * @name f__0FE4_0283_0038_0940
 * @implements 0FE4:0283:0038:0940 ()
 *
 * Called From: 06F7:02F3:000A:75EF
 * Called From: 06F7:02F3:000D:65F3
 * Called From: 07D4:07B6:000A:79EF
 * Called From: 07D4:0E46:000A:79EF
 * Called From: 07D4:0E46:000D:29F3
 * Called From: 07D4:1245:000A:79EF
 * Called From: 07D4:1245:000D:C9F3
 * Called From: 0FE4:027A:003A:DEE2
 * Called From: 0FE4:027A:0027:0A3E
 * Called From: 10E4:21F3:000E:2854
 * Called From: 176C:07C8:000A:75EF
 * Called From: 176C:07C8:0016:D30D
 * Called From: 1A34:14B1:000B:086C
 * Called From: 1A34:14B1:0025:3798
 * Called From: 1A34:2290:000B:086C
 * Called From: 1A34:36DE:000A:7FEF
 * Called From: B50B:03FE:000E:A854
 * Called From: B511:0190:000E:2854
 * Called From: B518:101F:000B:086C
 */
void f__0FE4_0283_0038_0940()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x6);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (!emu_flags.zf) { f__0FE4_029B_0020_8553(); return; }
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
	if (!(emu_flags.sf != emu_flags.of)) { f__0FE4_02B9_0002_0312(); return; }
	emu_incw(&emu_si);
	f__0FE4_031A_0013_7E21(); return;
}

/**
 * Decompiled function f__0FE4_029B_0020_8553()
 *
 * @name f__0FE4_029B_0020_8553
 * @implements 0FE4:029B:0020:8553 ()
 *
 * Called From: 0FE4:0291:0038:0940
 */
void f__0FE4_029B_0020_8553()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_di, emu_get_memory16(emu_es, emu_bx.x,  0x2));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_si, emu_get_memory16(emu_es, emu_bx.x,  0x4));
	emu_cmpw(&emu_si, emu_get_memory16(emu_ds, 0x00,  0x35EC));
	if (!(emu_flags.sf != emu_flags.of)) { f__0FE4_02B9_0002_0312(); return; }
	emu_incw(&emu_si);
	f__0FE4_031A_0013_7E21(); return;
}

/**
 * Decompiled function f__0FE4_02B9_0002_0312()
 *
 * @name f__0FE4_02B9_0002_0312
 * @implements 0FE4:02B9:0002:0312 ()
 *
 * Called From: 0FE4:02B6:0020:8553
 * Called From: 0FE4:02B6:0038:0940
 */
void f__0FE4_02B9_0002_0312()
{
	f__0FE4_031A_0013_7E21(); return;
}

/**
 * Decompiled function f__0FE4_02BB_0037_2565()
 *
 * @name f__0FE4_02BB_0037_2565
 * @implements 0FE4:02BB:0037:2565 ()
 *
 * Called From: 0FE4:031E:0013:7E21
 * Called From: 0FE4:031E:0014:7A41
 */
void f__0FE4_02BB_0037_2565()
{
	emu_movw(&emu_bx.x, emu_si);
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, emu_bx.x, -0x7BC0));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, emu_bx.x, -0x7BC2));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_dx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), 0x4);
	if (emu_flags.zf) { f__0FE4_02E1_0011_5616(); return; }
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x38BC), 0x0);
	if (emu_flags.zf) { f__0FE4_0319_0014_7A41(); return; }
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0xFF);
	if (emu_flags.zf) { f__0FE4_02F9_0020_EB7C(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x02F2); emu_cs = 0x1A34; emu_ip = 0x3915; emu_last_cs = 0x0FE4; emu_last_ip = 0x02ED; emu_last_length = 0x0037; emu_last_crc = 0x2565; emu_call(); // Jump does not resolve
	f__0FE4_02F2_0027_D4F8();
}

/**
 * Decompiled function f__0FE4_02E1_0011_5616()
 *
 * @name f__0FE4_02E1_0011_5616
 * @implements 0FE4:02E1:0011:5616 ()
 *
 * Called From: 0FE4:02D8:0037:2565
 */
void f__0FE4_02E1_0011_5616()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0xFF);
	if (emu_flags.zf) { f__0FE4_02F9_0020_EB7C(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x02F2); emu_cs = 0x1A34; f__1A34_3623_0010_3F68();
	f__0FE4_02F2_0027_D4F8();
}

/**
 * Decompiled function f__0FE4_02F2_0027_D4F8()
 *
 * @name f__0FE4_02F2_0027_D4F8
 * @implements 0FE4:02F2:0027:D4F8 ()
 *
 * Called From: 0FE4:02F2:0011:5616
 */
void f__0FE4_02F2_0027_D4F8()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	if (!emu_flags.zf) { f__0FE4_0319_0014_7A41(); return; }
	emu_cmpws(&emu_di, 0xFF);
	if (emu_flags.zf) { emu_ip = 0x030A; emu_last_cs = 0x0FE4; emu_last_ip = 0x02FC; emu_last_length = 0x0027; emu_last_crc = 0xD4F8; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x2));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_cmpw(&emu_ax.x, emu_di);
	if (!emu_flags.zf) { f__0FE4_0319_0014_7A41(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), emu_si);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	f__0FE4_032D_0006_137A(); return;
}

/**
 * Decompiled function f__0FE4_02F9_0020_EB7C()
 *
 * @name f__0FE4_02F9_0020_EB7C
 * @implements 0FE4:02F9:0020:EB7C ()
 *
 * Called From: 0FE4:02E5:0011:5616
 * Called From: 0FE4:02E5:0037:2565
 */
void f__0FE4_02F9_0020_EB7C()
{
	emu_cmpws(&emu_di, 0xFF);
	if (emu_flags.zf) { f__0FE4_030A_000F_3296(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x2));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_cmpw(&emu_ax.x, emu_di);
	if (!emu_flags.zf) { f__0FE4_0319_0014_7A41(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), emu_si);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	f__0FE4_032D_0006_137A(); return;
}

/**
 * Decompiled function f__0FE4_030A_000F_3296()
 *
 * @name f__0FE4_030A_000F_3296
 * @implements 0FE4:030A:000F:3296 ()
 *
 * Called From: 0FE4:02FC:0020:EB7C
 */
void f__0FE4_030A_000F_3296()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), emu_si);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	f__0FE4_032D_0006_137A(); return;
}

/**
 * Decompiled function f__0FE4_0317_0002_0384()
 *
 * @name f__0FE4_0317_0002_0384
 * @implements 0FE4:0317:0002:0384 ()
 *
 * Called From: 0FE4:032B:0013:7E21
 * Called From: 0FE4:032B:0014:7A41
 */
void f__0FE4_0317_0002_0384()
{
	f__0FE4_032D_0006_137A(); return;
}

/**
 * Decompiled function f__0FE4_0319_0014_7A41()
 *
 * @name f__0FE4_0319_0014_7A41
 * @implements 0FE4:0319:0014:7A41 ()
 *
 * Called From: 0FE4:02DF:0037:2565
 * Called From: 0FE4:02F7:0027:D4F8
 * Called From: 0FE4:0308:0020:EB7C
 * Called From: 0FE4:0308:0027:D4F8
 */
void f__0FE4_0319_0014_7A41()
{
	emu_incw(&emu_si);
	emu_cmpw(&emu_si, emu_get_memory16(emu_ds, 0x00,  0x35EC));
	if ((emu_flags.sf != emu_flags.of)) { f__0FE4_02BB_0037_2565(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), emu_si);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__0FE4_0317_0002_0384(); return;
}

/**
 * Decompiled function f__0FE4_031A_0013_7E21()
 *
 * @name f__0FE4_031A_0013_7E21
 * @implements 0FE4:031A:0013:7E21 ()
 *
 * Called From: 0FE4:02B9:0020:8553
 * Called From: 0FE4:02B9:0038:0940
 * Called From: 0FE4:02B9:0002:0312
 */
void f__0FE4_031A_0013_7E21()
{
	emu_cmpw(&emu_si, emu_get_memory16(emu_ds, 0x00,  0x35EC));
	if ((emu_flags.sf != emu_flags.of)) { f__0FE4_02BB_0037_2565(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), emu_si);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__0FE4_0317_0002_0384(); return;
}

/**
 * Decompiled function f__0FE4_032D_0006_137A()
 *
 * @name f__0FE4_032D_0006_137A
 * @implements 0FE4:032D:0006:137A ()
 *
 * Called From: 0FE4:0317:000F:3296
 * Called From: 0FE4:0317:0002:0384
 * Called From: 0FE4:0317:0020:EB7C
 * Called From: 0FE4:0317:0027:D4F8
 */
void f__0FE4_032D_0006_137A()
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
 * Decompiled function f__0FE4_0333_000F_265C()
 *
 * @name f__0FE4_0333_000F_265C
 * @implements 0FE4:0333:000F:265C ()
 *
 * Called From: 1A34:22AA:0018:8235
 * Called From: 1A34:22AA:001A:5434
 */
void f__0FE4_0333_000F_265C()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x4);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_di, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_xorw(&emu_si, emu_si);
	f__0FE4_0397_000A_7A5A(); return;
}

/**
 * Decompiled function f__0FE4_0342_0024_3474()
 *
 * @name f__0FE4_0342_0024_3474
 * @implements 0FE4:0342:0024:3474 ()
 *
 * Called From: 0FE4:039B:000A:7A5A
 * Called From: 0FE4:039B:000B:4A58
 */
void f__0FE4_0342_0024_3474()
{
	emu_movw(&emu_bx.x, emu_si);
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, emu_bx.x, -0x7BC0));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, emu_bx.x, -0x7BC2));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_dx.x);
	emu_cmpws(&emu_di, 0xFF);
	if (emu_flags.zf) { emu_ip = 0x036C; emu_last_cs = 0x0FE4; emu_last_ip = 0x0359; emu_last_length = 0x0024; emu_last_crc = 0x3474; emu_call(); return; } // Jump does not resolve
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x0366); emu_cs = 0x1A34; f__1A34_3623_0010_3F68();
	f__0FE4_0366_0030_8F85();
}

/**
 * Decompiled function f__0FE4_0366_0030_8F85()
 *
 * @name f__0FE4_0366_0030_8F85
 * @implements 0FE4:0366:0030:8F85 ()
 *
 * Called From: 0FE4:0366:0024:3474
 */
void f__0FE4_0366_0030_8F85()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_cmpw(&emu_ax.x, emu_di);
	if (!emu_flags.zf) { f__0FE4_0396_000B_4A58(); return; }
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0x8), 0xFF);
	if (emu_flags.zf) { emu_ip = 0x037F; emu_last_cs = 0x0FE4; emu_last_ip = 0x0370; emu_last_length = 0x0030; emu_last_crc = 0x8F85; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x2));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (!emu_flags.zf) { f__0FE4_0396_000B_4A58(); return; }
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x38BC), 0x0);
	if (!emu_flags.zf) { emu_ip = 0x0391; emu_last_cs = 0x0FE4; emu_last_ip = 0x0384; emu_last_length = 0x0030; emu_last_crc = 0x8F85; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), 0x4);
	if (!emu_flags.zf) { emu_ip = 0x0396; emu_last_cs = 0x0FE4; emu_last_ip = 0x038F; emu_last_length = 0x0030; emu_last_crc = 0x8F85; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, 0x1);
	f__0FE4_03A1_0006_137A(); return;
}

/**
 * Decompiled function f__0FE4_0394_0002_03BA()
 *
 * @name f__0FE4_0394_0002_03BA
 * @implements 0FE4:0394:0002:03BA ()
 *
 * Called From: 0FE4:039F:000B:4A58
 */
void f__0FE4_0394_0002_03BA()
{
	f__0FE4_03A1_0006_137A(); return;
}

/**
 * Decompiled function f__0FE4_0396_000B_4A58()
 *
 * @name f__0FE4_0396_000B_4A58
 * @implements 0FE4:0396:000B:4A58 ()
 *
 * Called From: 0FE4:036A:0030:8F85
 * Called From: 0FE4:037D:0030:8F85
 */
void f__0FE4_0396_000B_4A58()
{
	emu_incw(&emu_si);
	emu_cmpw(&emu_si, emu_get_memory16(emu_ds, 0x00,  0x35EC));
	if ((emu_flags.sf != emu_flags.of)) { f__0FE4_0342_0024_3474(); return; }
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__0FE4_0394_0002_03BA(); return;
}

/**
 * Decompiled function f__0FE4_0397_000A_7A5A()
 *
 * @name f__0FE4_0397_000A_7A5A
 * @implements 0FE4:0397:000A:7A5A ()
 *
 * Called From: 0FE4:0340:000F:265C
 */
void f__0FE4_0397_000A_7A5A()
{
	emu_cmpw(&emu_si, emu_get_memory16(emu_ds, 0x00,  0x35EC));
	if ((emu_flags.sf != emu_flags.of)) { f__0FE4_0342_0024_3474(); return; }
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_ip = 0x0394; emu_last_cs = 0x0FE4; emu_last_ip = 0x039F; emu_last_length = 0x000A; emu_last_crc = 0x7A5A; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__0FE4_03A1_0006_137A()
 *
 * @name f__0FE4_03A1_0006_137A
 * @implements 0FE4:03A1:0006:137A ()
 *
 * Called From: 0FE4:0394:0002:03BA
 * Called From: 0FE4:0394:0030:8F85
 */
void f__0FE4_03A1_0006_137A()
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
 * Decompiled function f__0FE4_03A7_0027_57F8()
 *
 * @name f__0FE4_03A7_0027_57F8
 * @implements 0FE4:03A7:0027:57F8 ()
 *
 * Called From: 1A34:0922:002C:227A
 * Called From: B4B5:0480:000B:1224
 */
void f__0FE4_03A7_0027_57F8()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0xC);
	emu_push(emu_si);
	emu_movw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x0);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0x8), 0xFF);
	if (emu_flags.zf) { emu_ip = 0x03C7; emu_last_cs = 0x0FE4; emu_last_ip = 0x03BF; emu_last_length = 0x0027; emu_last_crc = 0x57F8; emu_call(); return; } // Jump does not resolve
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0xA), 0xFF);
	if (!emu_flags.zf) { f__0FE4_03CE_000C_E797(); return; }
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_ip = 0x0563; emu_last_cs = 0x0FE4; emu_last_ip = 0x03CB; emu_last_length = 0x0027; emu_last_crc = 0x57F8; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__0FE4_03CB_0003_051E()
 *
 * @name f__0FE4_03CB_0003_051E
 * @implements 0FE4:03CB:0003:051E ()
 *
 * Called From: 0FE4:0560:0023:47B3
 */
void f__0FE4_03CB_0003_051E()
{
	f__0FE4_0563_0005_04BA(); return;
}

/**
 * Decompiled function f__0FE4_03CE_000C_E797()
 *
 * @name f__0FE4_03CE_000C_E797
 * @implements 0FE4:03CE:000C:E797 ()
 *
 * Called From: 0FE4:03C5:0027:57F8
 */
void f__0FE4_03CE_000C_E797()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x35E8));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x35EA));
	if (!emu_flags.zf) { f__0FE4_03DA_0008_DDA0(); return; }
	emu_ip = 0x055A; emu_last_cs = 0x0FE4; emu_last_ip = 0x03D7; emu_last_length = 0x000C; emu_last_crc = 0xE797; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__0FE4_03DA_0008_DDA0()
 *
 * @name f__0FE4_03DA_0008_DDA0
 * @implements 0FE4:03DA:0008:DDA0 ()
 *
 * Called From: 0FE4:03D5:000C:E797
 */
void f__0FE4_03DA_0008_DDA0()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_cs); emu_push(0x03E2); emu_cs = 0x10BE; f__10BE_01AB_002F_5CC7();
	f__0FE4_03E2_004F_FCDD();
}

/**
 * Decompiled function f__0FE4_03E2_004F_FCDD()
 *
 * @name f__0FE4_03E2_004F_FCDD
 * @implements 0FE4:03E2:004F:FCDD ()
 *
 * Called From: 0FE4:03E2:0008:DDA0
 */
void f__0FE4_03E2_004F_FCDD()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x6));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x8));
	if (emu_flags.cf) { f__0FE4_0431_0037_40B8(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_dx.x, 0x5A);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_dx.x, 0x2D07);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_es, emu_dx.x);
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x3C), 0x4);
	if (emu_flags.zf) { emu_ip = 0x0431; emu_last_cs = 0x0FE4; emu_last_ip = 0x040E; emu_last_length = 0x004F; emu_last_crc = 0xFCDD; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_dx.x, 0x5A);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_dx.x, 0x2D07);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_es, emu_dx.x);
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x3C), 0x5);
	if (emu_flags.zf) { emu_ip = 0x0431; emu_last_cs = 0x0FE4; emu_last_ip = 0x0425; emu_last_length = 0x004F; emu_last_crc = 0xFCDD; emu_call(); return; } // Jump does not resolve
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x38BC), 0x0);
	if (!emu_flags.zf) { emu_ip = 0x0431; emu_last_cs = 0x0FE4; emu_last_ip = 0x042C; emu_last_length = 0x004F; emu_last_crc = 0xFCDD; emu_call(); return; } // Jump does not resolve
	emu_ip = 0x055A; emu_last_cs = 0x0FE4; emu_last_ip = 0x042E; emu_last_length = 0x004F; emu_last_crc = 0xFCDD; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__0FE4_0431_0037_40B8()
 *
 * @name f__0FE4_0431_0037_40B8
 * @implements 0FE4:0431:0037:40B8 ()
 *
 * Called From: 0FE4:03F7:004F:FCDD
 */
void f__0FE4_0431_0037_40B8()
{
	emu_orw(&emu_si, emu_si);
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { emu_ip = 0x049C; emu_last_cs = 0x0FE4; emu_last_ip = 0x0433; emu_last_length = 0x0037; emu_last_crc = 0x40B8; emu_call(); return; } // Jump does not resolve
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
	f__0FE4_0495_0007_1D68(); return;
}

/**
 * Decompiled function f__0FE4_0468_002C_B45A()
 *
 * @name f__0FE4_0468_002C_B45A
 * @implements 0FE4:0468:002C:B45A ()
 *
 * Called From: 0FE4:0498:0007:1D68
 * Called From: 0FE4:0498:0008:5B68
 */
void f__0FE4_0468_002C_B45A()
{
	emu_movw(&emu_ax.x, emu_si);
	emu_movb(&emu_cx.l, 0x7);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x35E8));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), 0x1);
	if (!emu_flags.zf) { f__0FE4_0494_0008_5B68(); return; }
	emu_movw(&emu_ax.x, emu_si);
	emu_movb(&emu_cx.l, 0x7);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x35EA));
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00,  0x35E8));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_bx.x);
	f__0FE4_049A_0002_03F8(); return;
}

/**
 * Decompiled function f__0FE4_0494_0008_5B68()
 *
 * @name f__0FE4_0494_0008_5B68
 * @implements 0FE4:0494:0008:5B68 ()
 *
 * Called From: 0FE4:047A:002C:B45A
 */
void f__0FE4_0494_0008_5B68()
{
	emu_incw(&emu_si);
	emu_cmpw(&emu_si, emu_get_memory16(emu_ss, emu_bp, -0x8));
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__0FE4_0468_002C_B45A(); return; }
	emu_ip = 0x04C6; emu_last_cs = 0x0FE4; emu_last_ip = 0x049A; emu_last_length = 0x0008; emu_last_crc = 0x5B68; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__0FE4_0495_0007_1D68()
 *
 * @name f__0FE4_0495_0007_1D68
 * @implements 0FE4:0495:0007:1D68 ()
 *
 * Called From: 0FE4:0466:0037:40B8
 */
void f__0FE4_0495_0007_1D68()
{
	emu_cmpw(&emu_si, emu_get_memory16(emu_ss, emu_bp, -0x8));
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__0FE4_0468_002C_B45A(); return; }
	emu_ip = 0x04C6; emu_last_cs = 0x0FE4; emu_last_ip = 0x049A; emu_last_length = 0x0007; emu_last_crc = 0x1D68; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__0FE4_049A_0002_03F8()
 *
 * @name f__0FE4_049A_0002_03F8
 * @implements 0FE4:049A:0002:03F8 ()
 *
 * Called From: 0FE4:0492:002C:B45A
 */
void f__0FE4_049A_0002_03F8()
{
	f__0FE4_04C6_000B_A478(); return;
}

/**
 * Decompiled function f__0FE4_04C6_000B_A478()
 *
 * @name f__0FE4_04C6_000B_A478
 * @implements 0FE4:04C6:000B:A478 ()
 *
 * Called From: 0FE4:049A:0002:03F8
 */
void f__0FE4_04C6_000B_A478()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (!emu_flags.zf) { f__0FE4_04D1_0019_4F59(); return; }
	emu_ip = 0x055A; emu_last_cs = 0x0FE4; emu_last_ip = 0x04CE; emu_last_length = 0x000B; emu_last_crc = 0xA478; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__0FE4_04D1_0019_4F59()
 *
 * @name f__0FE4_04D1_0019_4F59
 * @implements 0FE4:04D1:0019:4F59 ()
 *
 * Called From: 0FE4:04CC:000B:A478
 */
void f__0FE4_04D1_0019_4F59()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_incw(&emu_get_memory16(emu_es, emu_bx.x,  0x6));
	emu_movw(&emu_ax.x, 0x80);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x04EA); emu_cs = 0x01F7; f__01F7_2947_0014_9C5E();
	f__0FE4_04EA_0079_C5F3();
}

/**
 * Decompiled function f__0FE4_04EA_0079_C5F3()
 *
 * @name f__0FE4_04EA_0079_C5F3
 * @implements 0FE4:04EA:0079:C5F3 ()
 *
 * Called From: 0FE4:04EA:0019:4F59
 */
void f__0FE4_04EA_0079_C5F3()
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
	if (!emu_flags.zf) { f__0FE4_0540_0023_47B3(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x58), 0x3);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00,  0x35EC));
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_get_memory16(emu_ds, emu_bx.x, -0x7BC0), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, emu_bx.x, -0x7BC2), emu_dx.x);
	emu_incw(&emu_get_memory16(emu_ds, 0x00,  0x35EC));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_ip = 0x03CB; emu_last_cs = 0x0FE4; emu_last_ip = 0x0560; emu_last_length = 0x0079; emu_last_crc = 0xC5F3; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__0FE4_0540_0023_47B3()
 *
 * @name f__0FE4_0540_0023_47B3
 * @implements 0FE4:0540:0023:47B3 ()
 *
 * Called From: 0FE4:0536:0079:C5F3
 */
void f__0FE4_0540_0023_47B3()
{
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00,  0x35EC));
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_get_memory16(emu_ds, emu_bx.x, -0x7BC0), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, emu_bx.x, -0x7BC2), emu_dx.x);
	emu_incw(&emu_get_memory16(emu_ds, 0x00,  0x35EC));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	f__0FE4_03CB_0003_051E(); return;
}

/**
 * Decompiled function f__0FE4_0563_0005_04BA()
 *
 * @name f__0FE4_0563_0005_04BA
 * @implements 0FE4:0563:0005:04BA ()
 *
 * Called From: 0FE4:03CB:0003:051E
 */
void f__0FE4_0563_0005_04BA()
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
 * Decompiled function f__0FE4_0568_0018_A435()
 *
 * @name f__0FE4_0568_0018_A435
 * @implements 0FE4:0568:0018:A435 ()
 *
 * Called From: 1A34:1175:000E:23D8
 */
void f__0FE4_0568_0018_A435()
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
	emu_push(emu_cs); emu_push(0x0580); emu_cs = 0x15C2; f__15C2_0395_0044_6B4F();
	f__0FE4_0580_0010_041B();
}

/**
 * Decompiled function f__0FE4_0580_0010_041B()
 *
 * @name f__0FE4_0580_0010_041B
 * @implements 0FE4:0580:0010:041B ()
 *
 * Called From: 0FE4:0580:0018:A435
 */
void f__0FE4_0580_0010_041B()
{
	emu_addws(&emu_sp, 0x8);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), 0x0);
	emu_xorw(&emu_si, emu_si);
	f__0FE4_05F4_0009_3FB2(); return;
}

/**
 * Decompiled function f__0FE4_0590_002A_6D3A()
 *
 * @name f__0FE4_0590_002A_6D3A
 * @implements 0FE4:0590:002A:6D3A ()
 *
 * Called From: 0FE4:05F8:0009:3FB2
 * Called From: 0FE4:05F8:000A:27B3
 */
void f__0FE4_0590_002A_6D3A()
{
	emu_movw(&emu_bx.x, emu_si);
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, emu_bx.x, -0x7BC0));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, emu_bx.x, -0x7BC2));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (!emu_flags.zf) { emu_ip = 0x05F3; emu_last_cs = 0x0FE4; emu_last_ip = 0x05A1; emu_last_length = 0x002A; emu_last_crc = 0x6D3A; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	if (!emu_flags.zf) { f__0FE4_05F3_000A_27B3(); return; }
	emu_decw(&emu_get_memory16(emu_ds, 0x00,  0x35EC));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x8));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x05BA); emu_cs = 0x10BE; f__10BE_01AB_002F_5CC7();
	f__0FE4_05BA_0034_E832();
}

/**
 * Decompiled function f__0FE4_05BA_0034_E832()
 *
 * @name f__0FE4_05BA_0034_E832
 * @implements 0FE4:05BA:0034:E832 ()
 *
 * Called From: 0FE4:05BA:002A:6D3A
 */
void f__0FE4_05BA_0034_E832()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_es, emu_dx.x);
	emu_decw(&emu_get_memory16(emu_es, emu_bx.x,  0x6));
	emu_cmpw(&emu_si, emu_get_memory16(emu_ds, 0x00,  0x35EC));
	if (!(emu_flags.sf != emu_flags.of)) { emu_ip = 0x05F1; emu_last_cs = 0x0FE4; emu_last_ip = 0x05C7; emu_last_length = 0x0034; emu_last_crc = 0xE832; emu_call(); return; } // Jump does not resolve
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
	emu_push(emu_cs); emu_push(0x05EE); emu_cs = 0x01F7; f__01F7_28B8_0024_D407();
	f__0FE4_05EE_0005_1FD2();
}

/**
 * Decompiled function f__0FE4_05EE_0005_1FD2()
 *
 * @name f__0FE4_05EE_0005_1FD2
 * @implements 0FE4:05EE:0005:1FD2 ()
 *
 * Called From: 0FE4:05EE:0034:E832
 */
void f__0FE4_05EE_0005_1FD2()
{
	emu_addws(&emu_sp, 0xA);
	f__0FE4_05FA_0003_0212(); return;
}

/**
 * Decompiled function f__0FE4_05F3_000A_27B3()
 *
 * @name f__0FE4_05F3_000A_27B3
 * @implements 0FE4:05F3:000A:27B3 ()
 *
 * Called From: 0FE4:05A6:002A:6D3A
 */
void f__0FE4_05F3_000A_27B3()
{
	emu_incw(&emu_si);
	emu_cmpw(&emu_si, emu_get_memory16(emu_ds, 0x00,  0x35EC));
	if ((emu_flags.sf != emu_flags.of)) { f__0FE4_0590_002A_6D3A(); return; }
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__0FE4_05F4_0009_3FB2()
 *
 * @name f__0FE4_05F4_0009_3FB2
 * @implements 0FE4:05F4:0009:3FB2 ()
 *
 * Called From: 0FE4:058E:0010:041B
 */
void f__0FE4_05F4_0009_3FB2()
{
	emu_cmpw(&emu_si, emu_get_memory16(emu_ds, 0x00,  0x35EC));
	if ((emu_flags.sf != emu_flags.of)) { f__0FE4_0590_002A_6D3A(); return; }
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__0FE4_05FA_0003_0212()
 *
 * @name f__0FE4_05FA_0003_0212
 * @implements 0FE4:05FA:0003:0212 ()
 *
 * Called From: 0FE4:05F1:0005:1FD2
 */
void f__0FE4_05FA_0003_0212()
{
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__0FE4_05FD_002C_E199()
 *
 * @name f__0FE4_05FD_002C_E199
 * @implements 0FE4:05FD:002C:E199 ()
 *
 * Called From: 0972:13CE:000F:925E
 * Called From: 0EDB:0407:0020:61B0
 * Called From: 167E:003B:0006:0AF6
 * Called From: 167E:0137:0006:0AB6
 * Called From: 167E:018E:0006:0AB6
 * Called From: 167E:0211:0006:0AB6
 * Called From: 167E:029D:0007:27B6
 * Called From: 167E:0307:0007:27B6
 * Called From: 176C:0A02:0018:8E47
 * Called From: 1A34:34BE:0032:DE4A
 * Called From: B4C4:03EF:0016:A838
 * Called From: B4CD:10C1:0040:609C
 * Called From: B4CD:1122:0039:70D6
 */
void f__0FE4_05FD_002C_E199()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_si);
	emu_movw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x35E8));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x35EA));
	if (emu_flags.zf) { emu_ip = 0x0629; emu_last_cs = 0x0FE4; emu_last_ip = 0x060B; emu_last_length = 0x002C; emu_last_crc = 0xE199; emu_call(); return; } // Jump does not resolve
	emu_orw(&emu_si, emu_si);
	if ((emu_flags.sf != emu_flags.of)) { emu_ip = 0x0629; emu_last_cs = 0x0FE4; emu_last_ip = 0x060F; emu_last_length = 0x002C; emu_last_crc = 0xE199; emu_call(); return; } // Jump does not resolve
	emu_cmpws(&emu_si, 0x66);
	if (!(emu_flags.sf != emu_flags.of)) { emu_ip = 0x0629; emu_last_cs = 0x0FE4; emu_last_ip = 0x0614; emu_last_length = 0x002C; emu_last_crc = 0xE199; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_si);
	emu_movb(&emu_cx.l, 0x7);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x35EA));
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x35E8));
	emu_pop(&emu_bx.x);
	emu_addw(&emu_ax.x, emu_bx.x);
	f__0FE4_062F_0003_0212(); return;
}

/**
 * Decompiled function f__0FE4_062F_0003_0212()
 *
 * @name f__0FE4_062F_0003_0212
 * @implements 0FE4:062F:0003:0212 ()
 *
 * Called From: 0FE4:0627:002C:E199
 */
void f__0FE4_062F_0003_0212()
{
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__0FE4_0632_0031_8E67()
 *
 * @name f__0FE4_0632_0031_8E67
 * @implements 0FE4:0632:0031:8E67 ()
 *
 * Called From: 06F7:0148:000B:2FD9
 */
void f__0FE4_0632_0031_8E67()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x4);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x0);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_flags.zf) { emu_ip = 0x066A; emu_last_cs = 0x0FE4; emu_last_ip = 0x0648; emu_last_length = 0x0031; emu_last_crc = 0x8E67; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x6F), 0x0);
	if (emu_flags.zf) { f__0FE4_066A_0008_8ECC(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x6F));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_decw(&emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0663); emu_cs = 0x104B; emu_ip = 0x09B7; emu_last_cs = 0x0FE4; emu_last_ip = 0x065E; emu_last_length = 0x0031; emu_last_crc = 0x8E67; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__0FE4_066A_0008_8ECC()
 *
 * @name f__0FE4_066A_0008_8ECC
 * @implements 0FE4:066A:0008:8ECC ()
 *
 * Called From: 0FE4:0652:0031:8E67
 */
void f__0FE4_066A_0008_8ECC()
{
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	f__0FE4_0672_0004_0F7A(); return;
}

/**
 * Decompiled function f__0FE4_0672_0004_0F7A()
 *
 * @name f__0FE4_0672_0004_0F7A
 * @implements 0FE4:0672:0004:0F7A ()
 *
 * Called From: 0FE4:0670:0008:8ECC
 */
void f__0FE4_0672_0004_0F7A()
{
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

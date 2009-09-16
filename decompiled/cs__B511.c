/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__B511_0000_000E_006C()
 *
 * @name f__B511_0000_000E_006C
 * @implements B511:0000:000E:006C ()
 *
 * Called From: 3511:0020:0005:1EFA
 * Called From: 3511:0020:0005:1F68
 */
void f__B511_0000_000E_006C()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x000E); f__B511_001E_0010_962F();
	f__B511_000E_000E_63C8();
}

/**
 * Decompiled function f__B511_000E_000E_63C8()
 *
 * @name f__B511_000E_000E_63C8
 * @implements B511:000E:000E:63C8 ()
 *
 * Called From: B511:000E:000E:006C
 */
void f__B511_000E_000E_63C8()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x37A0), 0x0);
	if (!emu_flags.zf) { emu_ip = 0x001C; emu_last_cs = 0xB511; emu_last_ip = 0x0015; emu_last_length = 0x000E; emu_last_crc = 0x63C8; emu_call(); return; } // Jump does not resolve
	emu_push(emu_cs);
	emu_push(0x001C); f__B511_0C06_002A_C6CE();
	f__B511_001C_0002_00E2();
}

/**
 * Decompiled function f__B511_001C_0002_00E2()
 *
 * @name f__B511_001C_0002_00E2
 * @implements B511:001C:0002:00E2 ()
 *
 * Called From: B511:001C:000E:63C8
 */
void f__B511_001C_0002_00E2()
{
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B511_001E_0010_962F()
 *
 * @name f__B511_001E_0010_962F
 * @implements B511:001E:0010:962F ()
 *
 * Called From: B511:000B:000E:006C
 */
void f__B511_001E_0010_962F()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_si);
	emu_movw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_ax.x, 0xFFFE);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x002E); emu_cs = 0x3483; ovl__3483(2);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_002E_0006_0298();
}

/**
 * Decompiled function f__B511_002E_0006_0298()
 *
 * @name f__B511_002E_0006_0298
 * @implements B511:002E:0006:0298 ()
 *
 * Called From: B511:002E:0010:962F
 */
void f__B511_002E_0006_0298()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_cs);
	emu_push(0x0034); f__B511_0A8F_000E_E3BE();
	f__B511_0034_000D_0D67();
}

/**
 * Decompiled function f__B511_0034_000D_0D67()
 *
 * @name f__B511_0034_000D_0D67
 * @implements B511:0034:000D:0D67 ()
 *
 * Called From: B511:0034:0006:0298
 */
void f__B511_0034_000D_0D67()
{
	emu_incw(&emu_get_memory16(emu_ds, 0x00,  0x38BC));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x0041); emu_cs = 0x34B5; ovl__34B5(0);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_0041_000B_5DB7();
}

/**
 * Decompiled function f__B511_0041_000B_5DB7()
 *
 * @name f__B511_0041_000B_5DB7
 * @implements B511:0041:000B:5DB7 ()
 *
 * Called From: 261F:01B9:001B:DA28
 */
void f__B511_0041_000B_5DB7()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (emu_flags.zf) { emu_ip = 0x006B; emu_last_cs = 0xB511; emu_last_ip = 0x0045; emu_last_length = 0x000B; emu_last_crc = 0x5DB7; emu_call(); return; } // Jump does not resolve
	emu_push(emu_cs);
	emu_push(0x004C); f__B511_0091_001D_38AC();
	f__B511_004C_001F_8259();
}

/**
 * Decompiled function f__B511_004C_001F_8259()
 *
 * @name f__B511_004C_001F_8259
 * @implements B511:004C:001F:8259 ()
 *
 * Called From: B511:004C:000B:5DB7
 */
void f__B511_004C_001F_8259()
{
	emu_cmpws(&emu_si, 0x5);
	if (!emu_flags.cf) { emu_ip = 0x0069; emu_last_cs = 0xB511; emu_last_ip = 0x004F; emu_last_length = 0x001F; emu_last_crc = 0x8259; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x37F2), 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x37F0), 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x37F6), 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x37F4), 0x0);
	f__B511_008A_0007_6A12(); return;
}

/**
 * Decompiled function f__B511_008A_0007_6A12()
 *
 * @name f__B511_008A_0007_6A12
 * @implements B511:008A:0007:6A12 ()
 *
 * Called From: B511:0069:001F:8259
 */
void f__B511_008A_0007_6A12()
{
	emu_decw(&emu_get_memory16(emu_ds, 0x00,  0x38BC));
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B511_0091_001D_38AC()
 *
 * @name f__B511_0091_001D_38AC
 * @implements B511:0091:001D:38AC ()
 *
 * Called From: B511:0049:000B:5DB7
 */
void f__B511_0091_001D_38AC()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0xE);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_incw(&emu_get_memory16(emu_ds, 0x00,  0x38BC));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3A0E));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x3A0E), 0x0);
	emu_push(emu_cs); emu_push(0x00AE); emu_cs = 0x1082; f__1082_000F_0012_EFE2();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_00AE_0005_1816();
}

/**
 * Decompiled function f__B511_00AE_0005_1816()
 *
 * @name f__B511_00AE_0005_1816
 * @implements B511:00AE:0005:1816 ()
 *
 * Called From: B511:00AE:001D:38AC
 */
void f__B511_00AE_0005_1816()
{
	emu_push(emu_cs); emu_push(0x00B3); emu_cs = 0x0FE4; f__0FE4_018D_0012_EFE2();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_00B3_0005_122C();
}

/**
 * Decompiled function f__B511_00B3_0005_122C()
 *
 * @name f__B511_00B3_0005_122C
 * @implements B511:00B3:0005:122C ()
 *
 * Called From: B511:00B3:0005:1816
 */
void f__B511_00B3_0005_122C()
{
	emu_push(emu_cs); emu_push(0x00B8); emu_cs = 0x104B; f__104B_0006_0011_4FBF();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_00B8_0005_0CD0();
}

/**
 * Decompiled function f__B511_00B8_0005_0CD0()
 *
 * @name f__B511_00B8_0005_0CD0
 * @implements B511:00B8:0005:0CD0 ()
 *
 * Called From: B511:00B8:0005:122C
 */
void f__B511_00B8_0005_0CD0()
{
	emu_xorw(&emu_di, emu_di);
	f__B511_013F_0009_F1F3(); return;
}

/**
 * Decompiled function f__B511_00BD_0006_0FFC()
 *
 * @name f__B511_00BD_0006_0FFC
 * @implements B511:00BD:0006:0FFC ()
 *
 * Called From: B511:0145:0009:F1F3
 * Called From: B511:0145:000A:EDF2
 * Called From: B511:0145:000C:B5F5
 */
void f__B511_00BD_0006_0FFC()
{
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x00C3); emu_cs = 0x34CD; ovl__34CD(26);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_00C3_0031_A316();
}

/**
 * Decompiled function f__B511_00C3_0031_A316()
 *
 * @name f__B511_00C3_0031_A316
 * @implements B511:00C3:0031:A316 ()
 *
 * Called From: B511:00C3:0006:0FFC
 */
void f__B511_00C3_0031_A316()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_flags.zf) { f__B511_00DD_0017_4387(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), 0x1);
	if (!emu_flags.zf) { emu_ip = 0x00EE; emu_last_cs = 0xB511; emu_last_ip = 0x00DB; emu_last_length = 0x0031; emu_last_crc = 0xA316; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_di);
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x39EA));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_andb(&emu_get_memory8(emu_es, emu_bx.x,  0x2), 0xEF);
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x00F4); emu_cs = 0x34CD; emu_ip = 0x01AA; emu_last_cs = 0xB511; emu_last_ip = 0x00EF; emu_last_length = 0x0031; emu_last_crc = 0xA316; emu_call(); // Jump does not resolve
	f__B511_00F4_0048_A519();
}

/**
 * Decompiled function f__B511_00DD_0017_4387()
 *
 * @name f__B511_00DD_0017_4387
 * @implements B511:00DD:0017:4387 ()
 *
 * Called From: B511:00D0:0031:A316
 */
void f__B511_00DD_0017_4387()
{
	emu_movw(&emu_ax.x, emu_di);
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x39EA));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_andb(&emu_get_memory8(emu_es, emu_bx.x,  0x2), 0xEF);
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x00F4); emu_cs = 0x34CD; ovl__34CD(30);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_00F4_0048_A519();
}

/**
 * Decompiled function f__B511_00F4_0048_A519()
 *
 * @name f__B511_00F4_0048_A519
 * @implements B511:00F4:0048:A519 ()
 *
 * Called From: B511:00F4:0017:4387
 */
void f__B511_00F4_0048_A519()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	if (emu_flags.zf) { f__B511_010E_002E_AF7B(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), 0x1);
	if (!emu_flags.zf) { f__B511_011F_001D_32D1(); return; }
	emu_movw(&emu_ax.x, emu_di);
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x39EA));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_andb(&emu_get_memory8(emu_es, emu_bx.x,  0x2), 0xDF);
	emu_movw(&emu_ax.x, emu_di);
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x39EA));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_testb(&emu_get_memory8(emu_es, emu_bx.x,  0x2), 0x8);
	if (emu_flags.zf) { emu_ip = 0x013E; emu_last_cs = 0xB511; emu_last_ip = 0x0130; emu_last_length = 0x0048; emu_last_crc = 0xA519; emu_call(); return; } // Jump does not resolve
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3A38));
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x013C); emu_cs = 0x34CD; emu_ip = 0x0206; emu_last_cs = 0xB511; emu_last_ip = 0x0137; emu_last_length = 0x0048; emu_last_crc = 0xA519; emu_call(); // Jump does not resolve
	f__B511_013C_000C_B5F5();
}

/**
 * Decompiled function f__B511_010E_002E_AF7B()
 *
 * @name f__B511_010E_002E_AF7B
 * @implements B511:010E:002E:AF7B ()
 *
 * Called From: B511:0101:0048:A519
 */
void f__B511_010E_002E_AF7B()
{
	emu_movw(&emu_ax.x, emu_di);
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x39EA));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_andb(&emu_get_memory8(emu_es, emu_bx.x,  0x2), 0xDF);
	emu_movw(&emu_ax.x, emu_di);
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x39EA));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_testb(&emu_get_memory8(emu_es, emu_bx.x,  0x2), 0x8);
	if (emu_flags.zf) { f__B511_013E_000A_EDF2(); return; }
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3A38));
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x013C); emu_cs = 0x34CD; ovl__34CD(34);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_013C_000C_B5F5();
}

/**
 * Decompiled function f__B511_011F_001D_32D1()
 *
 * @name f__B511_011F_001D_32D1
 * @implements B511:011F:001D:32D1 ()
 *
 * Called From: B511:010C:0048:A519
 */
void f__B511_011F_001D_32D1()
{
	emu_movw(&emu_ax.x, emu_di);
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x39EA));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_testb(&emu_get_memory8(emu_es, emu_bx.x,  0x2), 0x8);
	if (emu_flags.zf) { emu_ip = 0x013E; emu_last_cs = 0xB511; emu_last_ip = 0x0130; emu_last_length = 0x001D; emu_last_crc = 0x32D1; emu_call(); return; } // Jump does not resolve
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3A38));
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x013C); emu_cs = 0x34CD; ovl__34CD(34);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_013C_000C_B5F5();
}

/**
 * Decompiled function f__B511_013C_000C_B5F5()
 *
 * @name f__B511_013C_000C_B5F5
 * @implements B511:013C:000C:B5F5 ()
 *
 * Called From: B511:013C:002E:AF7B
 * Called From: B511:013C:001D:32D1
 */
void f__B511_013C_000C_B5F5()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_incw(&emu_di);
	emu_cmpw(&emu_di, 0x1000);
	if (!(emu_flags.sf != emu_flags.of)) { emu_ip = 0x0148; emu_last_cs = 0xB511; emu_last_ip = 0x0143; emu_last_length = 0x000C; emu_last_crc = 0xB5F5; emu_call(); return; } // Jump does not resolve
	f__B511_00BD_0006_0FFC(); return;
}

/**
 * Decompiled function f__B511_013E_000A_EDF2()
 *
 * @name f__B511_013E_000A_EDF2
 * @implements B511:013E:000A:EDF2 ()
 *
 * Called From: B511:0130:002E:AF7B
 */
void f__B511_013E_000A_EDF2()
{
	emu_incw(&emu_di);
	emu_cmpw(&emu_di, 0x1000);
	if (!(emu_flags.sf != emu_flags.of)) { f__B511_0148_0013_2387(); return; }
	f__B511_00BD_0006_0FFC(); return;
}

/**
 * Decompiled function f__B511_013F_0009_F1F3()
 *
 * @name f__B511_013F_0009_F1F3
 * @implements B511:013F:0009:F1F3 ()
 *
 * Called From: B511:00BA:0005:0CD0
 */
void f__B511_013F_0009_F1F3()
{
	emu_cmpw(&emu_di, 0x1000);
	if (!(emu_flags.sf != emu_flags.of)) { emu_ip = 0x0148; emu_last_cs = 0xB511; emu_last_ip = 0x0143; emu_last_length = 0x0009; emu_last_crc = 0xF1F3; emu_call(); return; } // Jump does not resolve
	f__B511_00BD_0006_0FFC(); return;
}

/**
 * Decompiled function f__B511_0148_0013_2387()
 *
 * @name f__B511_0148_0013_2387
 * @implements B511:0148:0013:2387 ()
 *
 * Called From: B511:0143:000A:EDF2
 */
void f__B511_0148_0013_2387()
{
	emu_movw(&emu_ax.x, 0xFFFF);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0xFFFF);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_cs); emu_push(0x015B); emu_cs = 0x0FE4; f__0FE4_0243_003A_DEE2();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_015B_0005_1FA2();
}

/**
 * Decompiled function f__B511_015B_0005_1FA2()
 *
 * @name f__B511_015B_0005_1FA2
 * @implements B511:015B:0005:1FA2 ()
 *
 * Called From: B511:015B:0013:2387
 */
void f__B511_015B_0005_1FA2()
{
	emu_addws(&emu_sp, 0x8);
	f__B511_0197_0021_C25B(); return;
}

/**
 * Decompiled function f__B511_0160_0016_5310()
 *
 * @name f__B511_0160_0016_5310
 * @implements B511:0160:0016:5310 ()
 *
 * Called From: B511:01A3:0021:C25B
 * Called From: B511:01A3:0023:C1F7
 */
void f__B511_0160_0016_5310()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), 0x4);
	if (!emu_flags.zf) { emu_ip = 0x018A; emu_last_cs = 0xB511; emu_last_ip = 0x0169; emu_last_length = 0x0016; emu_last_crc = 0x5310; emu_call(); return; } // Jump does not resolve
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x0176); emu_cs = 0x1A34; f__1A34_2B18_0011_4D97();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_0176_0011_0D64();
}

/**
 * Decompiled function f__B511_0176_0011_0D64()
 *
 * @name f__B511_0176_0011_0D64
 * @implements B511:0176:0011:0D64 ()
 *
 * Called From: B511:0176:0016:5310
 */
void f__B511_0176_0011_0D64()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0187); emu_cs = 0x34CD; ovl__34CD(22);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_0187_000E_2854();
}

/**
 * Decompiled function f__B511_0187_000E_2854()
 *
 * @name f__B511_0187_000E_2854
 * @implements B511:0187:000E:2854 ()
 *
 * Called From: B511:0187:0011:0D64
 */
void f__B511_0187_000E_2854()
{
	emu_addws(&emu_sp, 0x6);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_cs); emu_push(0x0195); emu_cs = 0x0FE4; f__0FE4_0283_0038_0940();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_0195_0023_C1F7();
}

/**
 * Decompiled function f__B511_0195_0023_C1F7()
 *
 * @name f__B511_0195_0023_C1F7
 * @implements B511:0195:0023:C1F7 ()
 *
 * Called From: B511:0195:000E:2854
 */
void f__B511_0195_0023_C1F7()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (!emu_flags.zf) { f__B511_0160_0016_5310(); return; }
	emu_movw(&emu_ax.x, 0xFFFF);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0xFFFF);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_cs); emu_push(0x01B8); emu_cs = 0x1082; f__1082_00FD_003A_94E2();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_01B8_0006_3F5E();
}

/**
 * Decompiled function f__B511_0197_0021_C25B()
 *
 * @name f__B511_0197_0021_C25B
 * @implements B511:0197:0021:C25B ()
 *
 * Called From: B511:015E:0005:1FA2
 */
void f__B511_0197_0021_C25B()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (!emu_flags.zf) { f__B511_0160_0016_5310(); return; }
	emu_movw(&emu_ax.x, 0xFFFF);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0xFFFF);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_cs); emu_push(0x01B8); emu_cs = 0x1082; emu_ip = 0x02B5; emu_last_cs = 0xB511; emu_last_ip = 0x01B3; emu_last_length = 0x0021; emu_last_crc = 0xC25B; emu_call(); // Jump does not resolve
	f__B511_01B8_0006_3F5E();
}

/**
 * Decompiled function f__B511_01B8_0006_3F5E()
 *
 * @name f__B511_01B8_0006_3F5E
 * @implements B511:01B8:0006:3F5E ()
 *
 * Called From: B511:01B8:0023:C1F7
 */
void f__B511_01B8_0006_3F5E()
{
	emu_addws(&emu_sp, 0x8);
	f__B511_02F3_0011_AD74(); return;
}

/**
 * Decompiled function f__B511_01BE_000E_2DA5()
 *
 * @name f__B511_01BE_000E_2DA5
 * @implements B511:01BE:000E:2DA5 ()
 *
 * Called From: B511:0301:0011:AD74
 */
void f__B511_01BE_000E_2DA5()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), 0x4);
	if (emu_flags.zf) { f__B511_01CC_000B_3FA7(); return; }
	emu_ip = 0x02E6; emu_last_cs = 0xB511; emu_last_ip = 0x01C9; emu_last_length = 0x000E; emu_last_crc = 0x2DA5; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B511_01CC_000B_3FA7()
 *
 * @name f__B511_01CC_000B_3FA7
 * @implements B511:01CC:000B:3FA7 ()
 *
 * Called From: B511:01C7:000E:2DA5
 */
void f__B511_01CC_000B_3FA7()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs); emu_push(0x01D7); emu_cs = 0x0C3A; f__0C3A_2433_0042_9CCA();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_01D7_0024_6BBA();
}

/**
 * Decompiled function f__B511_01D7_0024_6BBA()
 *
 * @name f__B511_01D7_0024_6BBA
 * @implements B511:01D7:0024:6BBA ()
 *
 * Called From: B511:01D7:000B:3FA7
 */
void f__B511_01D7_0024_6BBA()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x2), 0xB);
	if (!emu_flags.zf) { f__B511_0258_0018_E690(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x3), 0xFF);
	if (emu_flags.zf) { emu_ip = 0x0258; emu_last_cs = 0xB511; emu_last_ip = 0x01EB; emu_last_length = 0x0024; emu_last_crc = 0x6BBA; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x3));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x01FB); emu_cs = 0x0FE4; emu_ip = 0x07F8; emu_last_cs = 0xB511; emu_last_ip = 0x01F6; emu_last_length = 0x0024; emu_last_crc = 0x6BBA; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__B511_0258_0018_E690()
 *
 * @name f__B511_0258_0018_E690
 * @implements B511:0258:0018:E690 ()
 *
 * Called From: B511:01E1:0024:6BBA
 */
void f__B511_0258_0018_E690()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x2));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_addw(&emu_ax.x, 0x12);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0270); emu_cs = 0x15C2; f__15C2_03D9_0011_073C();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_0270_001B_4343();
}

/**
 * Decompiled function f__B511_0270_001B_4343()
 *
 * @name f__B511_0270_001B_4343
 * @implements B511:0270:001B:4343 ()
 *
 * Called From: B511:0270:0018:E690
 */
void f__B511_0270_001B_4343()
{
	emu_addws(&emu_sp, 0x6);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x2), 0x2);
	if (!emu_flags.zf) { f__B511_02A3_000E_9D16(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x8));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x028B); emu_cs = 0x10BE; emu_ip = 0x0436; emu_last_cs = 0xB511; emu_last_ip = 0x0286; emu_last_length = 0x001B; emu_last_crc = 0x4343; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__B511_02A3_000E_9D16()
 *
 * @name f__B511_02A3_000E_9D16
 * @implements B511:02A3:000E:9D16 ()
 *
 * Called From: B511:027B:001B:4343
 */
void f__B511_02A3_000E_9D16()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x8));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x02B1); emu_cs = 0x10BE; f__10BE_01AB_002F_5CC7();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_02B1_001D_0392();
}

/**
 * Decompiled function f__B511_02B1_001D_0392()
 *
 * @name f__B511_02B1_001D_0392
 * @implements B511:02B1:001D:0392 ()
 *
 * Called From: B511:02B1:000E:9D16
 */
void f__B511_02B1_001D_0392()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_es, emu_dx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x1E));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x20));
	if (!emu_flags.zf) { emu_ip = 0x02E6; emu_last_cs = 0xB511; emu_last_ip = 0x02BE; emu_last_length = 0x001D; emu_last_crc = 0x0392; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x8));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x02CE); emu_cs = 0x10BE; f__10BE_01AB_002F_5CC7();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_02CE_0023_0C62();
}

/**
 * Decompiled function f__B511_02CE_0023_0C62()
 *
 * @name f__B511_02CE_0023_0C62
 * @implements B511:02CE:0023:0C62 ()
 *
 * Called From: B511:02CE:001D:0392
 */
void f__B511_02CE_0023_0C62()
{
	emu_pop(&emu_cx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_cx.x, emu_get_memory16(emu_es, emu_bx.x,  0xC));
	emu_movw(&emu_bx.x, emu_get_memory16(emu_es, emu_bx.x,  0xA));
	emu_movw(&emu_si, emu_ax.x);
	emu_movw(&emu_es, emu_dx.x);
	emu_movw(&emu_get_memory16(emu_es, emu_si,  0x20), emu_cx.x);
	emu_movw(&emu_get_memory16(emu_es, emu_si,  0x1E), emu_bx.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_cs); emu_push(0x02F1); emu_cs = 0x1082; f__1082_013D_0038_03DE();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_02F1_0013_AED8();
}

/**
 * Decompiled function f__B511_02F1_0013_AED8()
 *
 * @name f__B511_02F1_0013_AED8
 * @implements B511:02F1:0013:AED8 ()
 *
 * Called From: B511:02F1:0023:0C62
 */
void f__B511_02F1_0013_AED8()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	if (emu_flags.zf) { f__B511_0304_000B_0F32(); return; }
	emu_ip = 0x01BE; emu_last_cs = 0xB511; emu_last_ip = 0x0301; emu_last_length = 0x0013; emu_last_crc = 0xAED8; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B511_02F3_0011_AD74()
 *
 * @name f__B511_02F3_0011_AD74
 * @implements B511:02F3:0011:AD74 ()
 *
 * Called From: B511:01BB:0006:3F5E
 */
void f__B511_02F3_0011_AD74()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	if (emu_flags.zf) { emu_ip = 0x0304; emu_last_cs = 0xB511; emu_last_ip = 0x02FF; emu_last_length = 0x0011; emu_last_crc = 0xAD74; emu_call(); return; } // Jump does not resolve
	f__B511_01BE_000E_2DA5(); return;
}

/**
 * Decompiled function f__B511_0304_000B_0F32()
 *
 * @name f__B511_0304_000B_0F32
 * @implements B511:0304:000B:0F32 ()
 *
 * Called From: B511:02FF:0013:AED8
 */
void f__B511_0304_000B_0F32()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_cs); emu_push(0x030F); emu_cs = 0x10BE; f__10BE_01E2_0027_C454();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_030F_0002_03D8();
}

/**
 * Decompiled function f__B511_030F_0002_03D8()
 *
 * @name f__B511_030F_0002_03D8
 * @implements B511:030F:0002:03D8 ()
 *
 * Called From: B511:030F:000B:0F32
 */
void f__B511_030F_0002_03D8()
{
	f__B511_034B_0019_7527(); return;
}

/**
 * Decompiled function f__B511_0311_000B_FCBE()
 *
 * @name f__B511_0311_000B_FCBE
 * @implements B511:0311:000B:FCBE ()
 *
 * Called From: B511:0359:0019:7527
 */
void f__B511_0311_000B_FCBE()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_push(emu_cs); emu_push(0x031C); emu_cs = 0x0C3A; f__0C3A_13BD_0022_281A();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_031C_0017_A169();
}

/**
 * Decompiled function f__B511_031C_0017_A169()
 *
 * @name f__B511_031C_0017_A169
 * @implements B511:031C:0017:A169 ()
 *
 * Called From: B511:031C:000B:FCBE
 */
void f__B511_031C_0017_A169()
{
	emu_pop(&emu_cx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x10), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0xE), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_push(emu_cs); emu_push(0x0333); emu_cs = 0x1423; f__1423_0DC3_0029_5F72();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_0333_000C_600B();
}

/**
 * Decompiled function f__B511_0333_000C_600B()
 *
 * @name f__B511_0333_000C_600B
 * @implements B511:0333:000C:600B ()
 *
 * Called From: B511:0333:0017:A169
 */
void f__B511_0333_000C_600B()
{
	emu_pop(&emu_cx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_push(emu_cs); emu_push(0x033F); emu_cs = 0x0C3A; f__0C3A_1F70_0010_7894();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_033F_000C_91FF();
}

/**
 * Decompiled function f__B511_033F_000C_91FF()
 *
 * @name f__B511_033F_000C_91FF
 * @implements B511:033F:000C:91FF ()
 *
 * Called From: B511:033F:000C:600B
 */
void f__B511_033F_000C_91FF()
{
	emu_pop(&emu_cx.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_cs); emu_push(0x034B); emu_cs = 0x10BE; f__10BE_020F_004E_EE3E();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_034B_0019_7527();
}

/**
 * Decompiled function f__B511_034B_0019_7527()
 *
 * @name f__B511_034B_0019_7527
 * @implements B511:034B:0019:7527 ()
 *
 * Called From: B511:030F:0002:03D8
 * Called From: B511:034B:000C:91FF
 */
void f__B511_034B_0019_7527()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xA));
	if (!emu_flags.zf) { f__B511_0311_000B_FCBE(); return; }
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3A38));
	emu_push(emu_cs); emu_push(0x0364); emu_cs = 0x34B8; ovl__34B8(3);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_0364_0015_4BD4();
}

/**
 * Decompiled function f__B511_0364_0015_4BD4()
 *
 * @name f__B511_0364_0015_4BD4
 * @implements B511:0364:0015:4BD4 ()
 *
 * Called From: 261F:01B9:001B:DA28
 */
void f__B511_0364_0015_4BD4()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_ax.x, 0x2DCE);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x440);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x7);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0379); emu_cs = 0x34B8; ovl__34B8(4);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_0379_0012_3382();
}

/**
 * Decompiled function f__B511_0379_0012_3382()
 *
 * @name f__B511_0379_0012_3382
 * @implements B511:0379:0012:3382 ()
 *
 * Called From: B511:0379:0015:4BD4
 */
void f__B511_0379_0012_3382()
{
	emu_addws(&emu_sp, 0x8);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x7303), 0x290);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3A02));
	emu_push(emu_cs); emu_push(0x038B); emu_cs = 0x0F78; f__0F78_02D5_0014_D8D1();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_038B_0011_B57E();
}

/**
 * Decompiled function f__B511_038B_0011_B57E()
 *
 * @name f__B511_038B_0011_B57E
 * @implements B511:038B:0011:B57E ()
 *
 * Called From: B511:038B:0012:3382
 */
void f__B511_038B_0011_B57E()
{
	emu_pop(&emu_cx.x);
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x38E8), 0xFF);
	if (emu_flags.zf) { f__B511_03A6_002C_748F(); return; }
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x38E8));
	emu_push(emu_cs); emu_push(0x039C); emu_cs = 0x1082; emu_ip = 0x073D; emu_last_cs = 0xB511; emu_last_ip = 0x0397; emu_last_length = 0x0011; emu_last_crc = 0xB57E; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__B511_03A6_002C_748F()
 *
 * @name f__B511_03A6_002C_748F
 * @implements B511:03A6:002C:748F ()
 *
 * Called From: B511:0391:0011:B57E
 */
void f__B511_03A6_002C_748F()
{
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x38E6), 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x38E4), 0x0);
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x38E2), 0xFF);
	if (emu_flags.zf) { f__B511_03D5_0009_DCFD(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x38E2));
	emu_movw(&emu_dx.x, 0x60);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_dx.x, 0x2C94);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_es, emu_dx.x);
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x44));
	emu_push(emu_cs); emu_push(0x03D2); emu_cs = 0x0F78; emu_ip = 0x0657; emu_last_cs = 0xB511; emu_last_ip = 0x03CD; emu_last_length = 0x002C; emu_last_crc = 0x748F; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__B511_03D5_0009_DCFD()
 *
 * @name f__B511_03D5_0009_DCFD
 * @implements B511:03D5:0009:DCFD ()
 *
 * Called From: B511:03B7:002C:748F
 */
void f__B511_03D5_0009_DCFD()
{
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3A02));
	emu_push(emu_cs); emu_push(0x03DE); emu_cs = 0x34CD; ovl__34CD(30);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_03DE_002D_03D4();
}

/**
 * Decompiled function f__B511_03DE_002D_03D4()
 *
 * @name f__B511_03DE_002D_03D4
 * @implements B511:03DE:002D:03D4 ()
 *
 * Called From: B511:03DE:0009:DCFD
 */
void f__B511_03DE_002D_03D4()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	if (emu_flags.zf) { emu_ip = 0x040C; emu_last_cs = 0xB511; emu_last_ip = 0x03EB; emu_last_length = 0x002D; emu_last_crc = 0x03D4; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x2));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_movw(&emu_dx.x, 0x60);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_dx.x, 0x2C94);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_es, emu_dx.x);
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x44));
	emu_push(emu_cs); emu_push(0x040B); emu_cs = 0x0F78; f__0F78_0285_001C_B090();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_040B_000A_ACE4();
}

/**
 * Decompiled function f__B511_040B_000A_ACE4()
 *
 * @name f__B511_040B_000A_ACE4
 * @implements B511:040B:000A:ACE4 ()
 *
 * Called From: B511:040B:002D:03D4
 */
void f__B511_040B_000A_ACE4()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3A38));
	emu_push(emu_cs); emu_push(0x0415); emu_cs = 0x3483; ovl__3483(4);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_0415_0031_FB81();
}

/**
 * Decompiled function f__B511_0415_0031_FB81()
 *
 * @name f__B511_0415_0031_FB81
 * @implements B511:0415:0031:FB81 ()
 *
 * Called From: 261F:01B9:001B:DA28
 */
void f__B511_0415_0031_FB81()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76B2));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76B0));
	emu_addws(&emu_dx.x, 0x46);
	emu_adcw(&emu_ax.x, 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x38C2), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x38C0), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x3A12), 0x1);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x38B6), 0xFFFF);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x3A0E), emu_ax.x);
	emu_decw(&emu_get_memory16(emu_ds, 0x00,  0x38BC));
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
 * Decompiled function f__B511_0A8F_000E_E3BE()
 *
 * @name f__B511_0A8F_000E_E3BE
 * @implements B511:0A8F:000E:E3BE ()
 *
 * Called From: B511:0031:0006:0298
 */
void f__B511_0A8F_000E_E3BE()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_cs); emu_push(0x0A9D); emu_cs = 0x0FE4; f__0FE4_013F_001C_6582();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_0A9D_000D_B864();
}

/**
 * Decompiled function f__B511_0A9D_000D_B864()
 *
 * @name f__B511_0A9D_000D_B864
 * @implements B511:0A9D:000D:B864 ()
 *
 * Called From: B511:0A9D:000E:E3BE
 */
void f__B511_0A9D_000D_B864()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_cs); emu_push(0x0AAA); emu_cs = 0x1082; f__1082_0098_001C_6F82();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_0AAA_000D_B710();
}

/**
 * Decompiled function f__B511_0AAA_000D_B710()
 *
 * @name f__B511_0AAA_000D_B710
 * @implements B511:0AAA:000D:B710 ()
 *
 * Called From: B511:0AAA:000D:B864
 */
void f__B511_0AAA_000D_B710()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_cs); emu_push(0x0AB7); emu_cs = 0x104B; f__104B_005D_001C_6A82();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_0AB7_000D_B1D4();
}

/**
 * Decompiled function f__B511_0AB7_000D_B1D4()
 *
 * @name f__B511_0AB7_000D_B1D4
 * @implements B511:0AB7:000D:B1D4 ()
 *
 * Called From: B511:0AB7:000D:B710
 */
void f__B511_0AB7_000D_B1D4()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_cs); emu_push(0x0AC4); emu_cs = 0x10BE; f__10BE_000C_0020_8CB4();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_0AC4_0016_4962();
}

/**
 * Decompiled function f__B511_0AC4_0016_4962()
 *
 * @name f__B511_0AC4_0016_4962
 * @implements B511:0AC4:0016:4962 ()
 *
 * Called From: B511:0AC4:000D:B1D4
 */
void f__B511_0AC4_0016_4962()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_ax.x, 0x770);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3958));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3956));
	emu_push(emu_cs); emu_push(0x0ADA); emu_cs = 0x01F7; f__01F7_2947_0014_9C5E();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_0ADA_0017_0416();
}

/**
 * Decompiled function f__B511_0ADA_0017_0416()
 *
 * @name f__B511_0ADA_0017_0416
 * @implements B511:0ADA:0017:0416 ()
 *
 * Called From: B511:0ADA:0016:4962
 */
void f__B511_0ADA_0017_0416()
{
	emu_addws(&emu_sp, 0x8);
	emu_movw(&emu_ax.x, 0x280);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x395C));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x395A));
	emu_push(emu_cs); emu_push(0x0AF1); emu_cs = 0x01F7; f__01F7_2947_0014_9C5E();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_0AF1_0017_D91B();
}

/**
 * Decompiled function f__B511_0AF1_0017_D91B()
 *
 * @name f__B511_0AF1_0017_D91B
 * @implements B511:0AF1:0017:D91B ()
 *
 * Called From: B511:0AF1:0017:0416
 */
void f__B511_0AF1_0017_D91B()
{
	emu_addws(&emu_sp, 0x8);
	emu_movw(&emu_ax.x, 0x4000);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x39EC));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x39EA));
	emu_push(emu_cs); emu_push(0x0B08); emu_cs = 0x01F7; f__01F7_2947_0014_9C5E();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_0B08_0014_497A();
}

/**
 * Decompiled function f__B511_0B08_0014_497A()
 *
 * @name f__B511_0B08_0014_497A
 * @implements B511:0B08:0014:497A ()
 *
 * Called From: B511:0B08:0017:D91B
 */
void f__B511_0B08_0014_497A()
{
	emu_addws(&emu_sp, 0x8);
	emu_movw(&emu_ax.x, 0x200);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x95E5);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0B1C); emu_cs = 0x01F7; f__01F7_2947_0014_9C5E();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_0B1C_0014_4A7A();
}

/**
 * Decompiled function f__B511_0B1C_0014_4A7A()
 *
 * @name f__B511_0B1C_0014_4A7A
 * @implements B511:0B1C:0014:4A7A ()
 *
 * Called From: B511:0B1C:0014:497A
 */
void f__B511_0B1C_0014_4A7A()
{
	emu_addws(&emu_sp, 0x8);
	emu_movw(&emu_ax.x, 0x200);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x93E5);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0B30); emu_cs = 0x01F7; f__01F7_2947_0014_9C5E();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_0B30_0014_4B7A();
}

/**
 * Decompiled function f__B511_0B30_0014_4B7A()
 *
 * @name f__B511_0B30_0014_4B7A
 * @implements B511:0B30:0014:4B7A ()
 *
 * Called From: B511:0B30:0014:4A7A
 */
void f__B511_0B30_0014_4B7A()
{
	emu_addws(&emu_sp, 0x8);
	emu_movw(&emu_ax.x, 0x200);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x91E5);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0B44); emu_cs = 0x01F7; f__01F7_2947_0014_9C5E();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_0B44_0014_447A();
}

/**
 * Decompiled function f__B511_0B44_0014_447A()
 *
 * @name f__B511_0B44_0014_447A
 * @implements B511:0B44:0014:447A ()
 *
 * Called From: B511:0B44:0014:4B7A
 */
void f__B511_0B44_0014_447A()
{
	emu_addws(&emu_sp, 0x8);
	emu_movw(&emu_ax.x, 0x200);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x8FE5);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0B58); emu_cs = 0x01F7; f__01F7_2947_0014_9C5E();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_0B58_0014_457A();
}

/**
 * Decompiled function f__B511_0B58_0014_457A()
 *
 * @name f__B511_0B58_0014_457A
 * @implements B511:0B58:0014:457A ()
 *
 * Called From: B511:0B58:0014:447A
 */
void f__B511_0B58_0014_457A()
{
	emu_addws(&emu_sp, 0x8);
	emu_movw(&emu_ax.x, 0x200);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x8DE5);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0B6C); emu_cs = 0x01F7; f__01F7_2947_0014_9C5E();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_0B6C_001D_7041();
}

/**
 * Decompiled function f__B511_0B6C_001D_7041()
 *
 * @name f__B511_0B6C_001D_7041
 * @implements B511:0B6C:001D:7041 ()
 *
 * Called From: B511:0B6C:0014:457A
 */
void f__B511_0B6C_001D_7041()
{
	emu_addws(&emu_sp, 0x8);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x38B4), 0x0);
	emu_movw(&emu_ax.x, 0x2080);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x2E9C);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x323F);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0B89); emu_cs = 0x01F7; f__01F7_2947_0014_9C5E();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_0B89_0014_4A4D();
}

/**
 * Decompiled function f__B511_0B89_0014_4A4D()
 *
 * @name f__B511_0B89_0014_4A4D
 * @implements B511:0B89:0014:4A4D ()
 *
 * Called From: B511:0B89:001D:7041
 */
void f__B511_0B89_0014_4A4D()
{
	emu_addws(&emu_sp, 0x8);
	emu_movw(&emu_ax.x, 0x36);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x97E7);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0B9D); emu_cs = 0x01F7; f__01F7_2947_0014_9C5E();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_0B9D_000C_C60B();
}

/**
 * Decompiled function f__B511_0B9D_000C_C60B()
 *
 * @name f__B511_0B9D_000C_C60B
 * @implements B511:0B9D:000C:C60B ()
 *
 * Called From: B511:0B9D:0014:4A4D
 */
void f__B511_0B9D_000C_C60B()
{
	emu_addws(&emu_sp, 0x8);
	emu_movw(&emu_ax.x, 0xFFFE);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0BA9); emu_cs = 0x3483; ovl__3483(2);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_0BA9_0058_2236();
}

/**
 * Decompiled function f__B511_0BA9_0058_2236()
 *
 * @name f__B511_0BA9_0058_2236
 * @implements B511:0BA9:0058:2236 ()
 *
 * Called From: B511:0BA9:000C:C60B
 */
void f__B511_0BA9_0058_2236()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x38FE), 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x38FC), 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x38FA), 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x38F4), 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x38F2), 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x38F6), 0xFFFF);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x38E2), 0xFFFF);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x38E6), 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x38E4), 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x38EC), 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x38EE), 0xFFFF);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x38F0), 0x0);
	emu_movw(&emu_ax.x, 0xFFFF);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_cs); emu_push(0x0C01); emu_cs = 0x10E4; f__10E4_09AB_0031_9946();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_0C01_0005_1CF2();
}

/**
 * Decompiled function f__B511_0C01_0005_1CF2()
 *
 * @name f__B511_0C01_0005_1CF2
 * @implements B511:0C01:0005:1CF2 ()
 *
 * Called From: B511:0C01:0058:2236
 */
void f__B511_0C01_0005_1CF2()
{
	emu_addws(&emu_sp, 0x6);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B511_0C06_002A_C6CE()
 *
 * @name f__B511_0C06_002A_C6CE
 * @implements B511:0C06:002A:C6CE ()
 *
 * Called From: B511:0019:000E:63C8
 */
void f__B511_0C06_002A_C6CE()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3A38));
	emu_movw(&emu_dx.x, 0x1E);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, emu_bx.x,  0x3810));
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x8D0D);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x38B2));
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_addw(&emu_ax.x, 0x4);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3A38));
	emu_push(emu_cs);
	emu_push(0x0C30); f__B511_0C93_0014_3D4C();
	f__B511_0C30_0005_1C92();
}

/**
 * Decompiled function f__B511_0C30_0005_1C92()
 *
 * @name f__B511_0C30_0005_1C92
 * @implements B511:0C30:0005:1C92 ()
 *
 * Called From: B511:0C30:002A:C6CE
 */
void f__B511_0C30_0005_1C92()
{
	emu_addws(&emu_sp, 0xA);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B511_0C35_002A_3C92()
 *
 * @name f__B511_0C35_002A_3C92
 * @implements B511:0C35:002A:3C92 ()
 *
 * Called From: 3511:0039:0005:1DE4
 * Called From: 3511:0039:0005:1DCA
 */
void f__B511_0C35_002A_3C92()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3A38));
	emu_movw(&emu_dx.x, 0x1E);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, emu_bx.x,  0x380C));
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x8D1B);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x38B2));
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_addw(&emu_ax.x, 0x5);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3A38));
	emu_push(emu_cs);
	emu_push(0x0C5F); f__B511_0C93_0014_3D4C();
	f__B511_0C5F_0005_1C92();
}

/**
 * Decompiled function f__B511_0C5F_0005_1C92()
 *
 * @name f__B511_0C5F_0005_1C92
 * @implements B511:0C5F:0005:1C92 ()
 *
 * Called From: B511:0C5F:002A:3C92
 */
void f__B511_0C5F_0005_1C92()
{
	emu_addws(&emu_sp, 0xA);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B511_0C93_0014_3D4C()
 *
 * @name f__B511_0C93_0014_3D4C
 * @implements B511:0C93:0014:3D4C ()
 *
 * Called From: B511:0C2D:002A:C6CE
 * Called From: B511:0C5C:002A:3C92
 */
void f__B511_0C93_0014_3D4C()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0xA);
	emu_push(emu_si);
	emu_movw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x37AE), 0x0);
	if (emu_flags.zf) { f__B511_0CA7_0015_5D71(); return; }
	emu_ip = 0x0E3F; emu_last_cs = 0xB511; emu_last_ip = 0x0CA4; emu_last_length = 0x0014; emu_last_crc = 0x3D4C; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B511_0CA7_0015_5D71()
 *
 * @name f__B511_0CA7_0015_5D71
 * @implements B511:0CA7:0015:5D71 ()
 *
 * Called From: B511:0CA2:0014:3D4C
 */
void f__B511_0CA7_0015_5D71()
{
	emu_movw(&emu_ax.x, 0x2DCE);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x440);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x7);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0CBC); emu_cs = 0x34B8; ovl__34B8(4);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_0CBC_001E_B649();
}

/**
 * Decompiled function f__B511_0CBC_001E_B649()
 *
 * @name f__B511_0CBC_001E_B649
 * @implements B511:0CBC:001E:B649 ()
 *
 * Called From: 261F:01B9:001B:DA28
 */
void f__B511_0CBC_001E_B649()
{
	emu_addws(&emu_sp, 0x8);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x6);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0xA8);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0xA8);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0xAF);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0CDA); emu_cs = 0x0FCB; f__0FCB_005F_001C_147D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_0CDA_000F_7E60();
}

/**
 * Decompiled function f__B511_0CDA_000F_7E60()
 *
 * @name f__B511_0CDA_000F_7E60
 * @implements B511:0CDA:000F:7E60 ()
 *
 * Called From: B511:0CDA:001E:B649
 */
void f__B511_0CDA_000F_7E60()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_es, emu_dx.x);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x0));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0CE9); emu_cs = 0x29DA; f__29DA_00D0_0013_27E9();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_0CE9_000B_FECA();
}

/**
 * Decompiled function f__B511_0CE9_000B_FECA()
 *
 * @name f__B511_0CE9_000B_FECA
 * @implements B511:0CE9:000B:FECA ()
 *
 * Called From: B511:0CE9:000F:7E60
 */
void f__B511_0CE9_000B_FECA()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0CF4); emu_cs = 0x34B8; ovl__34B8(0);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_0CF4_0024_A6A2();
}

/**
 * Decompiled function f__B511_0CF4_0024_A6A2()
 *
 * @name f__B511_0CF4_0024_A6A2
 * @implements B511:0CF4:0024:A6A2 ()
 *
 * Called From: B511:0CF4:000B:FECA
 */
void f__B511_0CF4_0024_A6A2()
{
	emu_addws(&emu_sp, 0xE);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x8);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0xA8);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0xF0);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0xB0);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0D18); emu_cs = 0x0FCB; f__0FCB_005F_001C_147D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_0D18_000F_7E60();
}

/**
 * Decompiled function f__B511_0D18_000F_7E60()
 *
 * @name f__B511_0D18_000F_7E60
 * @implements B511:0D18:000F:7E60 ()
 *
 * Called From: B511:0D18:0024:A6A2
 */
void f__B511_0D18_000F_7E60()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_es, emu_dx.x);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x0));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0D27); emu_cs = 0x29DA; f__29DA_00D0_0013_27E9();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_0D27_000B_FDCA();
}

/**
 * Decompiled function f__B511_0D27_000B_FDCA()
 *
 * @name f__B511_0D27_000B_FDCA
 * @implements B511:0D27:000B:FDCA ()
 *
 * Called From: B511:0D27:000F:7E60
 */
void f__B511_0D27_000B_FDCA()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0D32); emu_cs = 0x34B8; ovl__34B8(0);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_0D32_001A_78CB();
}

/**
 * Decompiled function f__B511_0D32_001A_78CB()
 *
 * @name f__B511_0D32_001A_78CB
 * @implements B511:0D32:001A:78CB ()
 *
 * Called From: B511:0D32:000B:FDCA
 */
void f__B511_0D32_001A_78CB()
{
	emu_addws(&emu_sp, 0xE);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x0D4C); emu_cs = 0x348B; ovl__348B(0);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_0D4C_0012_65CE();
}

/**
 * Decompiled function f__B511_0D4C_0012_65CE()
 *
 * @name f__B511_0D4C_0012_65CE
 * @implements B511:0D4C:0012:65CE ()
 *
 * Called From: B511:0D4C:001A:78CB
 */
void f__B511_0D4C_0012_65CE()
{
	emu_addws(&emu_sp, 0x8);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_movw(&emu_ax.x, 0xFFFE);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0D5E); emu_cs = 0x3483; ovl__3483(2);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_0D5E_000C_9261();
}

/**
 * Decompiled function f__B511_0D5E_000C_9261()
 *
 * @name f__B511_0D5E_000C_9261
 * @implements B511:0D5E:000C:9261 ()
 *
 * Called From: B511:0D5E:0012:65CE
 */
void f__B511_0D5E_000C_9261()
{
	emu_pop(&emu_cx.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_cs); emu_push(0x0D6A); emu_cs = 0x1DD7; f__1DD7_022D_0015_1B0E();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_0D6A_0008_7374();
}

/**
 * Decompiled function f__B511_0D6A_0008_7374()
 *
 * @name f__B511_0D6A_0008_7374
 * @implements B511:0D6A:0008:7374 ()
 *
 * Called From: B511:0D6A:000C:9261
 */
void f__B511_0D6A_0008_7374()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x0D72); emu_cs = 0x3483; ovl__3483(1);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_0D72_0023_685E();
}

/**
 * Decompiled function f__B511_0D72_0023_685E()
 *
 * @name f__B511_0D72_0023_685E
 * @implements B511:0D72:0023:685E ()
 *
 * Called From: B511:0D72:0008:7374
 */
void f__B511_0D72_0023_685E()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_dx.x, 0x1E);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, emu_bx.x,  0x37F8));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x0));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x2BDD);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x9939);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0D95); emu_cs = 0x01F7; f__01F7_378D_0020_4A95();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_0D95_001C_3411();
}

/**
 * Decompiled function f__B511_0D73_0022_6A96()
 *
 * @name f__B511_0D73_0022_6A96
 * @implements B511:0D73:0022:6A96 ()
 *
 * Called From: B511:0E01:0003:070A
 */
void f__B511_0D73_0022_6A96()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_dx.x, 0x1E);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, emu_bx.x,  0x37F8));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x0));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x2BDD);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x9939);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0D95); emu_cs = 0x01F7; f__01F7_378D_0020_4A95();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_0D95_001C_3411();
}

/**
 * Decompiled function f__B511_0D95_001C_3411()
 *
 * @name f__B511_0D95_001C_3411
 * @implements B511:0D95:001C:3411 ()
 *
 * Called From: B511:0D95:0023:685E
 * Called From: B511:0D95:0022:6A96
 */
void f__B511_0D95_001C_3411()
{
	emu_addws(&emu_sp, 0xA);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x38DE));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x38DC));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x38DA));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x9939);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0DB1); emu_cs = 0x0642; f__0642_075D_0011_56FC();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_0DB1_0009_CEF2();
}

/**
 * Decompiled function f__B511_0DB1_0009_CEF2()
 *
 * @name f__B511_0DB1_0009_CEF2
 * @implements B511:0DB1:0009:CEF2 ()
 *
 * Called From: B511:0DB1:001C:3411
 */
void f__B511_0DB1_0009_CEF2()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0DBA); emu_cs = 0x0FCB; f__0FCB_0088_0016_E17C();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_0DBA_0018_C1B2();
}

/**
 * Decompiled function f__B511_0DBA_0018_C1B2()
 *
 * @name f__B511_0DBA_0018_C1B2
 * @implements B511:0DBA:0018:C1B2 ()
 *
 * Called From: B511:0DBA:0009:CEF2
 */
void f__B511_0DBA_0018_C1B2()
{
	emu_addws(&emu_sp, 0xC);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x38DC));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x38DA));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x38DC));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x38DA));
	emu_push(emu_cs); emu_push(0x0DD2); emu_cs = 0x2502; f__2502_0008_0015_ED28();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_0DD2_0020_2039();
}

/**
 * Decompiled function f__B511_0DD2_0020_2039()
 *
 * @name f__B511_0DD2_0020_2039
 * @implements B511:0DD2:0020:2039 ()
 *
 * Called From: B511:0DD2:0018:C1B2
 */
void f__B511_0DD2_0020_2039()
{
	emu_addws(&emu_sp, 0x8);
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x38DC));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x38DA));
	emu_push(emu_cs);
	emu_push(0x0DF2); f__B511_0E44_000C_561B();
	f__B511_0DF2_000F_2B03();
}

/**
 * Decompiled function f__B511_0DF2_000F_2B03()
 *
 * @name f__B511_0DF2_000F_2B03
 * @implements B511:0DF2:000F:2B03 ()
 *
 * Called From: B511:0DF2:0020:2039
 */
void f__B511_0DF2_000F_2B03()
{
	emu_addws(&emu_sp, 0xE);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_ax.x);
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x8002);
	if (emu_flags.zf) { f__B511_0E01_0003_070A(); return; }
	f__B511_0E04_000B_32AD(); return;
}

/**
 * Decompiled function f__B511_0E01_0003_070A()
 *
 * @name f__B511_0E01_0003_070A
 * @implements B511:0E01:0003:070A ()
 *
 * Called From: B511:0DFD:000F:2B03
 */
void f__B511_0E01_0003_070A()
{
	f__B511_0D73_0022_6A96(); return;
}

/**
 * Decompiled function f__B511_0E04_000B_32AD()
 *
 * @name f__B511_0E04_000B_32AD
 * @implements B511:0E04:000B:32AD ()
 *
 * Called From: B511:0DFF:000F:2B03
 */
void f__B511_0E04_000B_32AD()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs); emu_push(0x0E0F); emu_cs = 0x23E1; f__23E1_01C2_0011_4E4B();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_0E0F_000D_8BA3();
}

/**
 * Decompiled function f__B511_0E0F_000D_8BA3()
 *
 * @name f__B511_0E0F_000D_8BA3
 * @implements B511:0E0F:000D:8BA3 ()
 *
 * Called From: B511:0E0F:000B:32AD
 */
void f__B511_0E0F_000D_8BA3()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x0E1C); emu_cs = 0x23E1; f__23E1_01C2_0011_4E4B();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_0E1C_000C_790A();
}

/**
 * Decompiled function f__B511_0E1C_000C_790A()
 *
 * @name f__B511_0E1C_000C_790A
 * @implements B511:0E1C:000C:790A ()
 *
 * Called From: B511:0E1C:000D:8BA3
 */
void f__B511_0E1C_000C_790A()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_cmpws(&emu_si, 0xFF);
	if (emu_flags.zf) { emu_ip = 0x0E28; emu_last_cs = 0xB511; emu_last_ip = 0x0E21; emu_last_length = 0x000C; emu_last_crc = 0x790A; emu_call(); return; } // Jump does not resolve
	emu_push(emu_cs); emu_push(0x0E28); emu_cs = 0x1DD7; f__1DD7_0B53_0025_71E0();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_0E28_0014_40F4();
}

/**
 * Decompiled function f__B511_0E28_0014_40F4()
 *
 * @name f__B511_0E28_0014_40F4
 * @implements B511:0E28:0014:40F4 ()
 *
 * Called From: B511:0E28:000C:790A
 */
void f__B511_0E28_0014_40F4()
{
	emu_movw(&emu_ax.x, 0x2DCE);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x440);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x7);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0E3C); emu_cs = 0x34B8; ovl__34B8(4);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_0E3C_0008_E7BA();
}

/**
 * Decompiled function f__B511_0E3C_0008_E7BA()
 *
 * @name f__B511_0E3C_0008_E7BA
 * @implements B511:0E3C:0008:E7BA ()
 *
 * Called From: B511:0E3C:0014:40F4
 */
void f__B511_0E3C_0008_E7BA()
{
	emu_addws(&emu_sp, 0x8);
	emu_pop(&emu_si);
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B511_0E44_000C_561B()
 *
 * @name f__B511_0E44_000C_561B
 * @implements B511:0E44:000C:561B ()
 *
 * Called From: B511:0DEF:0020:2039
 * Called From: B511:1363:0023:E3E8
 */
void f__B511_0E44_000C_561B()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x4);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x0E50); emu_cs = 0x34B8; ovl__34B8(1);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_0E50_000F_4CB0();
}

/**
 * Decompiled function f__B511_0E50_000F_4CB0()
 *
 * @name f__B511_0E50_000F_4CB0
 * @implements B511:0E50:000F:4CB0 ()
 *
 * Called From: B511:0E50:000C:561B
 */
void f__B511_0E50_000F_4CB0()
{
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3A38));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_cs); emu_push(0x0E5F); emu_cs = 0x34DA; ovl__34DA(0);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_0E5F_000C_7F65();
}

/**
 * Decompiled function f__B511_0E5F_000C_7F65()
 *
 * @name f__B511_0E5F_000C_7F65
 * @implements B511:0E5F:000C:7F65 ()
 *
 * Called From: 261F:01B9:001B:DA28
 */
void f__B511_0E5F_000C_7F65()
{
	emu_addws(&emu_sp, 0x6);
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0E6B); emu_cs = 0x2598; f__2598_0000_0017_D681();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_0E6B_000A_17B6();
}

/**
 * Decompiled function f__B511_0E6B_000A_17B6()
 *
 * @name f__B511_0E6B_000A_17B6
 * @implements B511:0E6B:000A:17B6 ()
 *
 * Called From: B511:0E6B:000C:7F65
 */
void f__B511_0E6B_000A_17B6()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_ax.x, 0x8);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0E75); emu_cs = 0x07AE; f__07AE_00E4_000D_C2A4();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_0E75_0023_275C();
}

/**
 * Decompiled function f__B511_0E75_0023_275C()
 *
 * @name f__B511_0E75_0023_275C
 * @implements B511:0E75:0023:275C ()
 *
 * Called From: B511:0E75:000A:17B6
 */
void f__B511_0E75_0023_275C()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xC));
	if (emu_flags.zf) { emu_ip = 0x0EE0; emu_last_cs = 0xB511; emu_last_ip = 0x0E7C; emu_last_length = 0x0023; emu_last_crc = 0x275C; emu_call(); return; } // Jump does not resolve
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6CE9));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6CE7));
	emu_movw(&emu_ax.x, 0x5);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0E98); emu_cs = 0x252E; f__252E_0001_0018_48C0();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_0E98_000E_EF1D();
}

/**
 * Decompiled function f__B511_0E98_000E_EF1D()
 *
 * @name f__B511_0E98_000E_EF1D
 * @implements B511:0E98:000E:EF1D ()
 *
 * Called From: B511:0E98:0023:275C
 */
void f__B511_0E98_000E_EF1D()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_cs); emu_push(0x0EA6); emu_cs = 0x352A; ovl__352A(0);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_0EA6_002A_301C();
}

/**
 * Decompiled function f__B511_0EA6_002A_301C()
 *
 * @name f__B511_0EA6_002A_301C
 * @implements B511:0EA6:002A:301C ()
 *
 * Called From: B511:0EA6:000E:EF1D
 */
void f__B511_0EA6_002A_301C()
{
	emu_addws(&emu_sp, 0x12);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x66D5));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00, -0x66D3));
	emu_movb(&emu_cx.l, 0x3);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x0ED0); emu_cs = 0x352A; ovl__352A(2);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_0ED0_000E_96ED();
}

/**
 * Decompiled function f__B511_0ED0_000E_96ED()
 *
 * @name f__B511_0ED0_000E_96ED
 * @implements B511:0ED0:000E:96ED ()
 *
 * Called From: B511:0ED0:002A:301C
 */
void f__B511_0ED0_000E_96ED()
{
	emu_addws(&emu_sp, 0xE);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x0EDE); emu_cs = 0x352A; ovl__352A(1);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_0EDE_000B_D8B2();
}

/**
 * Decompiled function f__B511_0EDE_000B_D8B2()
 *
 * @name f__B511_0EDE_000B_D8B2
 * @implements B511:0EDE:000B:D8B2 ()
 *
 * Called From: B511:0EDE:000E:96ED
 */
void f__B511_0EDE_000B_D8B2()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0EE9); emu_cs = 0x34DA; ovl__34DA(3);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_0EE9_0009_E46A();
}

/**
 * Decompiled function f__B511_0EE9_0009_E46A()
 *
 * @name f__B511_0EE9_0009_E46A
 * @implements B511:0EE9:0009:E46A ()
 *
 * Called From: B511:0EE9:000B:D8B2
 */
void f__B511_0EE9_0009_E46A()
{
	emu_pop(&emu_cx.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0EF2); emu_cs = 0x2598; f__2598_0000_0017_D681();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_0EF2_0006_079E();
}

/**
 * Decompiled function f__B511_0EF2_0006_079E()
 *
 * @name f__B511_0EF2_0006_079E
 * @implements B511:0EF2:0006:079E ()
 *
 * Called From: B511:0EF2:0009:E46A
 */
void f__B511_0EF2_0006_079E()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_cs); emu_push(0x0EF8); emu_cs = 0x2B6C; f__2B6C_0137_0020_17E5();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_0EF8_0020_7795();
}

/**
 * Decompiled function f__B511_0EF8_0020_7795()
 *
 * @name f__B511_0EF8_0020_7795
 * @implements B511:0EF8:0020:7795 ()
 *
 * Called From: B511:0EF8:0006:079E
 */
void f__B511_0EF8_0020_7795()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0xC8);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x28);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0F18); emu_cs = 0x24D0; f__24D0_000D_0039_9224();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_0F18_0008_F13E();
}

/**
 * Decompiled function f__B511_0F18_0008_F13E()
 *
 * @name f__B511_0F18_0008_F13E
 * @implements B511:0F18:0008:F13E ()
 *
 * Called From: B511:0F18:0020:7795
 */
void f__B511_0F18_0008_F13E()
{
	emu_addws(&emu_sp, 0x10);
	emu_push(emu_cs); emu_push(0x0F20); emu_cs = 0x2B6C; f__2B6C_0169_001E_97C8();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_0F20_0011_1E65();
}

/**
 * Decompiled function f__B511_0F20_0011_1E65()
 *
 * @name f__B511_0F20_0011_1E65
 * @implements B511:0F20:0011:1E65 ()
 *
 * Called From: B511:0F20:0008:F13E
 */
void f__B511_0F20_0011_1E65()
{
	emu_movw(&emu_ax.x, 0xF);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3C34));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3C32));
	emu_push(emu_cs); emu_push(0x0F31); emu_cs = 0x259E; f__259E_0006_0016_2DFF();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_0F31_0024_18D3();
}

/**
 * Decompiled function f__B511_0F31_0024_18D3()
 *
 * @name f__B511_0F31_0024_18D3
 * @implements B511:0F31:0024:18D3 ()
 *
 * Called From: B511:0F31:0011:1E65
 */
void f__B511_0F31_0024_18D3()
{
	emu_addws(&emu_sp, 0x6);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_cs); emu_push(0x0F55); emu_cs = 0x34DA; ovl__34DA(4);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_0F55_0018_AC2F();
}

/**
 * Decompiled function f__B511_0F55_0018_AC2F()
 *
 * @name f__B511_0F55_0018_AC2F
 * @implements B511:0F55:0018:AC2F ()
 *
 * Called From: 261F:01B9:001B:DA28
 */
void f__B511_0F55_0018_AC2F()
{
	emu_addws(&emu_sp, 0x12);
	emu_movw(&emu_si, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x10));
	if (emu_flags.zf) { f__B511_0F92_0005_137A(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x10));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_push(emu_cs); emu_push(0x0F6D); emu_cs = 0x348B; ovl__348B(7);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_0F6D_000D_6488();
}

/**
 * Decompiled function f__B511_0F6D_000D_6488()
 *
 * @name f__B511_0F6D_000D_6488
 * @implements B511:0F6D:000D:6488 ()
 *
 * Called From: B511:0F6D:0018:AC2F
 */
void f__B511_0F6D_000D_6488()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x10));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_push(emu_cs); emu_push(0x0F7A); emu_cs = 0x34A2; ovl__34A2(2);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_0F7A_0009_857C();
}

/**
 * Decompiled function f__B511_0F6F_000B_D486()
 *
 * @name f__B511_0F6F_000B_D486
 * @implements B511:0F6F:000B:D486 ()
 *
 * Called From: B511:0F90:000C:AE3B
 */
void f__B511_0F6F_000B_D486()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x10));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_push(emu_cs); emu_push(0x0F7A); emu_cs = 0x34A2; ovl__34A2(2);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_0F7A_0009_857C();
}

/**
 * Decompiled function f__B511_0F7A_0009_857C()
 *
 * @name f__B511_0F7A_0009_857C
 * @implements B511:0F7A:0009:857C ()
 *
 * Called From: B511:0F7A:000D:6488
 * Called From: B511:0F7A:000B:D486
 */
void f__B511_0F7A_0009_857C()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_si, emu_ax.x);
	emu_push(emu_cs); emu_push(0x0F83); emu_cs = 0x0642; f__0642_0559_0027_9047();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_0F83_0008_55E0();
}

/**
 * Decompiled function f__B511_0F83_0008_55E0()
 *
 * @name f__B511_0F83_0008_55E0
 * @implements B511:0F83:0008:55E0 ()
 *
 * Called From: B511:0F83:0009:857C
 */
void f__B511_0F83_0008_55E0()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0F8B); emu_cs = 0x34DA; ovl__34DA(2);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_0F8B_000C_AE3B();
}

/**
 * Decompiled function f__B511_0F8B_000C_AE3B()
 *
 * @name f__B511_0F8B_000C_AE3B
 * @implements B511:0F8B:000C:AE3B ()
 *
 * Called From: 261F:01B9:001B:DA28
 * Called From: B511:0F8B:0008:55E0
 */
void f__B511_0F8B_000C_AE3B()
{
	emu_pop(&emu_cx.x);
	emu_testw(&emu_si, 0x8000);
	if (emu_flags.zf) { f__B511_0F6F_000B_D486(); return; }
	emu_push(emu_cs); emu_push(0x0F97); emu_cs = 0x29E8; f__29E8_073F_000E_A6E4();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_0F97_000B_EE95();
}

/**
 * Decompiled function f__B511_0F92_0005_137A()
 *
 * @name f__B511_0F92_0005_137A
 * @implements B511:0F92:0005:137A ()
 *
 * Called From: B511:0F60:0018:AC2F
 */
void f__B511_0F92_0005_137A()
{
	emu_push(emu_cs); emu_push(0x0F97); emu_cs = 0x29E8; f__29E8_073F_000E_A6E4();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_0F97_000B_EE95();
}

/**
 * Decompiled function f__B511_0F97_000B_EE95()
 *
 * @name f__B511_0F97_000B_EE95
 * @implements B511:0F97:000B:EE95 ()
 *
 * Called From: B511:0F97:0005:137A
 * Called From: B511:0F97:000C:AE3B
 */
void f__B511_0F97_000B_EE95()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0x12), 0x0);
	if (emu_flags.zf) { f__B511_0FA7_0004_0D2C(); return; }
	emu_push(emu_cs); emu_push(0x0FA2); emu_cs = 0x34DA; ovl__34DA(1);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_0FA2_0005_1258();
}

/**
 * Decompiled function f__B511_0FA2_0005_1258()
 *
 * @name f__B511_0FA2_0005_1258
 * @implements B511:0FA2:0005:1258 ()
 *
 * Called From: B511:0FA2:000B:EE95
 */
void f__B511_0FA2_0005_1258()
{
	emu_push(emu_cs); emu_push(0x0FA7); emu_cs = 0x34B8; ovl__34B8(5);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_0FA7_0004_0D2C();
}

/**
 * Decompiled function f__B511_0FA7_0004_0D2C()
 *
 * @name f__B511_0FA7_0004_0D2C
 * @implements B511:0FA7:0004:0D2C ()
 *
 * Called From: 261F:01B9:001B:DA28
 * Called From: B511:0F9B:000B:EE95
 */
void f__B511_0FA7_0004_0D2C()
{
	emu_movw(&emu_ax.x, emu_si);
	f__B511_0FAB_0005_04BA(); return;
}

/**
 * Decompiled function f__B511_0FAB_0005_04BA()
 *
 * @name f__B511_0FAB_0005_04BA
 * @implements B511:0FAB:0005:04BA ()
 *
 * Called From: B511:0FA9:0004:0D2C
 */
void f__B511_0FAB_0005_04BA()
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
 * Decompiled function f__B511_0FB0_0028_715B()
 *
 * @name f__B511_0FB0_0028_715B
 * @implements B511:0FB0:0028:715B ()
 *
 * Called From: 3511:0043:0005:1582
 * Called From: 3511:0043:0005:16C0
 * Called From: 3511:0043:0005:1498
 * Called From: 3511:0043:0005:17DC
 */
void f__B511_0FB0_0028_715B()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subw(&emu_sp, 0x314);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_si, 0x5);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x0);
	emu_movw(&emu_ax.x, 0x300);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0x314);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0FD8); emu_cs = 0x01F7; f__01F7_2947_0014_9C5E();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_0FD8_000E_C25C();
}

/**
 * Decompiled function f__B511_0FD8_000E_C25C()
 *
 * @name f__B511_0FD8_000E_C25C
 * @implements B511:0FD8:000E:C25C ()
 *
 * Called From: B511:0FD8:0028:715B
 */
void f__B511_0FD8_000E_C25C()
{
	emu_addws(&emu_sp, 0x8);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_cs); emu_push(0x0FE6); emu_cs = 0x1DD7; f__1DD7_022D_0015_1B0E();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_0FE6_000B_DF66();
}

/**
 * Decompiled function f__B511_0FE6_000B_DF66()
 *
 * @name f__B511_0FE6_000B_DF66
 * @implements B511:0FE6:000B:DF66 ()
 *
 * Called From: B511:0FE6:000E:C25C
 */
void f__B511_0FE6_000B_DF66()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_ax.x, 0x5);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0FF1); emu_cs = 0x3483; ovl__3483(4);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_0FF1_0016_4B31();
}

/**
 * Decompiled function f__B511_0FF1_0016_4B31()
 *
 * @name f__B511_0FF1_0016_4B31
 * @implements B511:0FF1:0016:4B31 ()
 *
 * Called From: B511:0FF1:000B:DF66
 */
void f__B511_0FF1_0016_4B31()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_ax.x, 0x2DCE);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x440);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x7);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x1007); emu_cs = 0x34B8; ovl__34B8(4);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_1007_0008_EF90();
}

/**
 * Decompiled function f__B511_1007_0008_EF90()
 *
 * @name f__B511_1007_0008_EF90
 * @implements B511:1007:0008:EF90 ()
 *
 * Called From: 261F:01B9:001B:DA28
 * Called From: B511:1007:0016:4B31
 */
void f__B511_1007_0008_EF90()
{
	emu_addws(&emu_sp, 0x8);
	emu_xorw(&emu_di, emu_di);
	f__B511_10A1_0008_F4FE(); return;
}

/**
 * Decompiled function f__B511_100A_0005_0C90()
 *
 * @name f__B511_100A_0005_0C90
 * @implements B511:100A:0005:0C90 ()
 *
 * Called From: B511:14A9:0003:07C6
 */
void f__B511_100A_0005_0C90()
{
	emu_xorw(&emu_di, emu_di);
	f__B511_10A1_0008_F4FE(); return;
}

/**
 * Decompiled function f__B511_100F_0010_8CFF()
 *
 * @name f__B511_100F_0010_8CFF
 * @implements B511:100F:0010:8CFF ()
 *
 * Called From: B511:10A6:0008:F4FE
 * Called From: B511:10A6:0012:B135
 */
void f__B511_100F_0010_8CFF()
{
	emu_movw(&emu_ax.x, 0x10);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_movw(&emu_dx.x, 0x3C);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_cs); emu_push(0x101F); emu_cs = 0x23E1; f__23E1_0004_0014_DD3C();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_101F_0043_BB59();
}

/**
 * Decompiled function f__B511_101F_0043_BB59()
 *
 * @name f__B511_101F_0043_BB59
 * @implements B511:101F:0043:BB59 ()
 *
 * Called From: B511:101F:0010:8CFF
 */
void f__B511_101F_0043_BB59()
{
	emu_addws(&emu_sp, 0x6);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0xFFFF);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_di);
	emu_movw(&emu_dx.x, 0x6);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, emu_bx.x,  0x2BAE));
	emu_movw(&emu_ax.x, emu_di);
	emu_movw(&emu_dx.x, 0x6);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, emu_bx.x,  0x2BAC));
	emu_movw(&emu_ax.x, emu_di);
	emu_movw(&emu_dx.x, 0x6);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, emu_bx.x,  0x2BB0));
	emu_movw(&emu_ax.x, emu_di);
	emu_incw(&emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x1062); emu_cs = 0x34B8; ovl__34B8(0);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_1062_0035_23FE();
}

/**
 * Decompiled function f__B511_1062_0035_23FE()
 *
 * @name f__B511_1062_0035_23FE
 * @implements B511:1062:0035:23FE ()
 *
 * Called From: B511:1062:0043:BB59
 */
void f__B511_1062_0035_23FE()
{
	emu_addws(&emu_sp, 0xE);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0xE), 0x11C0);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x22), 0x60);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x24), 0x68);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_cs); emu_push(0x1097); emu_cs = 0x348B; ovl__348B(0);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_1097_0012_B135();
}

/**
 * Decompiled function f__B511_1097_0012_B135()
 *
 * @name f__B511_1097_0012_B135
 * @implements B511:1097:0012:B135 ()
 *
 * Called From: 261F:01B9:001B:DA28
 * Called From: B511:1097:0035:23FE
 */
void f__B511_1097_0012_B135()
{
	emu_addws(&emu_sp, 0x8);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax.x);
	emu_incw(&emu_di);
	emu_cmpws(&emu_di, 0x2);
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__B511_10A9_001C_72D4(); return; }
	f__B511_100F_0010_8CFF(); return;
}

/**
 * Decompiled function f__B511_10A1_0008_F4FE()
 *
 * @name f__B511_10A1_0008_F4FE
 * @implements B511:10A1:0008:F4FE ()
 *
 * Called From: B511:100C:0008:EF90
 * Called From: B511:100C:0005:0C90
 */
void f__B511_10A1_0008_F4FE()
{
	emu_cmpws(&emu_di, 0x2);
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { emu_ip = 0x10A9; emu_last_cs = 0xB511; emu_last_ip = 0x10A4; emu_last_length = 0x0008; emu_last_crc = 0xF4FE; emu_call(); return; } // Jump does not resolve
	f__B511_100F_0010_8CFF(); return;
}

/**
 * Decompiled function f__B511_10A9_001C_72D4()
 *
 * @name f__B511_10A9_001C_72D4
 * @implements B511:10A9:001C:72D4 ()
 *
 * Called From: B511:10A4:0012:B135
 */
void f__B511_10A9_001C_72D4()
{
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_movw(&emu_ax.x, 0x3);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x3);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x2BE4);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x10C5); emu_cs = 0x0642; f__0642_075D_0011_56FC();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_10C5_0009_C400();
}

/**
 * Decompiled function f__B511_10C5_0009_C400()
 *
 * @name f__B511_10C5_0009_C400
 * @implements B511:10C5:0009:C400 ()
 *
 * Called From: B511:10C5:001C:72D4
 */
void f__B511_10C5_0009_C400()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x10CE); emu_cs = 0x34CA; ovl__34CA(0);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_10CE_001B_6339();
}

/**
 * Decompiled function f__B511_10CE_001B_6339()
 *
 * @name f__B511_10CE_001B_6339
 * @implements B511:10CE:001B:6339 ()
 *
 * Called From: B511:10CE:0009:C400
 */
void f__B511_10CE_001B_6339()
{
	emu_addws(&emu_sp, 0xE);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x3);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x353F);
	emu_movw(&emu_es, emu_ax.x);

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_es, 0x00,  0x6630);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_es, 0x00,  0x6632);
	emu_push(0x10E9);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A604A5: f__22A6_04A5_000F_9D38(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0xB511; emu_last_ip = 0x10E4; emu_last_length = 0x001B; emu_last_crc = 0x6339;
			emu_call();
			return;
	}
	f__B511_10E9_0008_F2DE();
}

/**
 * Decompiled function f__B511_10E9_0008_F2DE()
 *
 * @name f__B511_10E9_0008_F2DE
 * @implements B511:10E9:0008:F2DE ()
 *
 * Called From: B511:10E9:001B:6339
 */
void f__B511_10E9_0008_F2DE()
{
	emu_addws(&emu_sp, 0x8);
	emu_push(emu_cs); emu_push(0x10F1); emu_cs = 0x2B6C; f__2B6C_0137_0020_17E5();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_10F1_0020_7795();
}

/**
 * Decompiled function f__B511_10F1_0020_7795()
 *
 * @name f__B511_10F1_0020_7795
 * @implements B511:10F1:0020:7795 ()
 *
 * Called From: B511:10F1:0008:F2DE
 */
void f__B511_10F1_0020_7795()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0xC8);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x28);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x1111); emu_cs = 0x24D0; f__24D0_000D_0039_9224();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_1111_0014_1035();
}

/**
 * Decompiled function f__B511_1111_0014_1035()
 *
 * @name f__B511_1111_0014_1035
 * @implements B511:1111:0014:1035 ()
 *
 * Called From: B511:1111:0020:7795
 */
void f__B511_1111_0014_1035()
{
	emu_addws(&emu_sp, 0x10);
	emu_movw(&emu_ax.x, 0xF);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3C34));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3C32));
	emu_push(emu_cs); emu_push(0x1125); emu_cs = 0x259E; f__259E_0006_0016_2DFF();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_1125_0008_F4BE();
}

/**
 * Decompiled function f__B511_1125_0008_F4BE()
 *
 * @name f__B511_1125_0008_F4BE
 * @implements B511:1125:0008:F4BE ()
 *
 * Called From: B511:1125:0014:1035
 */
void f__B511_1125_0008_F4BE()
{
	emu_addws(&emu_sp, 0x6);
	emu_push(emu_cs); emu_push(0x112D); emu_cs = 0x2B6C; f__2B6C_0169_001E_97C8();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_112D_0005_1CFE();
}

/**
 * Decompiled function f__B511_112D_0005_1CFE()
 *
 * @name f__B511_112D_0005_1CFE
 * @implements B511:112D:0005:1CFE ()
 *
 * Called From: B511:112D:0008:F4BE
 */
void f__B511_112D_0005_1CFE()
{
	emu_movw(&emu_si, 0xFFFE);
	f__B511_1177_000A_085D(); return;
}

/**
 * Decompiled function f__B511_1132_000B_3187()
 *
 * @name f__B511_1132_000B_3187
 * @implements B511:1132:000B:3187 ()
 *
 * Called From: B511:117A:000A:085D
 */
void f__B511_1132_000B_3187()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_cs); emu_push(0x113D); emu_cs = 0x34A2; ovl__34A2(2);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_113D_000A_577D();
}

/**
 * Decompiled function f__B511_113D_000A_577D()
 *
 * @name f__B511_113D_000A_577D
 * @implements B511:113D:000A:577D ()
 *
 * Called From: 261F:01B9:001B:DA28
 * Called From: B511:113D:000B:3187
 */
void f__B511_113D_000A_577D()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), emu_ax.x);
	emu_push(emu_cs); emu_push(0x1147); emu_cs = 0x0642; f__0642_0559_0027_9047();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_1147_0020_A254();
}

/**
 * Decompiled function f__B511_1147_0020_A254()
 *
 * @name f__B511_1147_0020_A254
 * @implements B511:1147:0020:A254 ()
 *
 * Called From: B511:1147:000A:577D
 */
void f__B511_1147_0020_A254()
{
	emu_testw(&emu_get_memory16(emu_ss, emu_bp, -0xE), 0x800);
	if (emu_flags.zf) { f__B511_1153_0014_A7BE(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), 0x0);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_cmpw(&emu_ax.x, 0x8001);
	if (emu_flags.zf) { emu_ip = 0x1167; emu_last_cs = 0xB511; emu_last_ip = 0x1159; emu_last_length = 0x0020; emu_last_crc = 0xA254; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_ax.x, 0x8002);
	if (emu_flags.zf) { emu_ip = 0x116C; emu_last_cs = 0xB511; emu_last_ip = 0x115E; emu_last_length = 0x0020; emu_last_crc = 0xA254; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_ax.x, 0x8003);
	if (emu_flags.zf) { emu_ip = 0x1171; emu_last_cs = 0xB511; emu_last_ip = 0x1163; emu_last_length = 0x0020; emu_last_crc = 0xA254; emu_call(); return; } // Jump does not resolve
	f__B511_1175_0002_03AC(); return;
}

/**
 * Decompiled function f__B511_1153_0014_A7BE()
 *
 * @name f__B511_1153_0014_A7BE
 * @implements B511:1153:0014:A7BE ()
 *
 * Called From: B511:114C:0020:A254
 */
void f__B511_1153_0014_A7BE()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_cmpw(&emu_ax.x, 0x8001);
	if (emu_flags.zf) { f__B511_1167_0005_146A(); return; }
	emu_cmpw(&emu_ax.x, 0x8002);
	if (emu_flags.zf) { f__B511_116C_0005_1440(); return; }
	emu_cmpw(&emu_ax.x, 0x8003);
	if (emu_flags.zf) { f__B511_1171_0004_0728(); return; }
	f__B511_1175_0002_03AC(); return;
}

/**
 * Decompiled function f__B511_1167_0005_146A()
 *
 * @name f__B511_1167_0005_146A
 * @implements B511:1167:0005:146A ()
 *
 * Called From: B511:1159:0014:A7BE
 */
void f__B511_1167_0005_146A()
{
	emu_movw(&emu_si, 0x1);
	f__B511_1177_000A_085D(); return;
}

/**
 * Decompiled function f__B511_116C_0005_1440()
 *
 * @name f__B511_116C_0005_1440
 * @implements B511:116C:0005:1440 ()
 *
 * Called From: B511:115E:0014:A7BE
 */
void f__B511_116C_0005_1440()
{
	emu_movw(&emu_si, 0x2);
	f__B511_1177_000A_085D(); return;
}

/**
 * Decompiled function f__B511_1171_0004_0728()
 *
 * @name f__B511_1171_0004_0728
 * @implements B511:1171:0004:0728 ()
 *
 * Called From: B511:1163:0014:A7BE
 */
void f__B511_1171_0004_0728()
{
	emu_xorw(&emu_si, emu_si);
	f__B511_1177_000A_085D(); return;
}

/**
 * Decompiled function f__B511_1175_0002_03AC()
 *
 * @name f__B511_1175_0002_03AC
 * @implements B511:1175:0002:03AC ()
 *
 * Called From: B511:1165:0014:A7BE
 * Called From: B511:1165:0020:A254
 */
void f__B511_1175_0002_03AC()
{
	f__B511_1177_000A_085D(); return;
}

/**
 * Decompiled function f__B511_1177_000A_085D()
 *
 * @name f__B511_1177_000A_085D
 * @implements B511:1177:000A:085D ()
 *
 * Called From: B511:1130:0005:1CFE
 * Called From: B511:116A:0005:146A
 * Called From: B511:116F:0005:1440
 * Called From: B511:1173:0004:0728
 * Called From: B511:1175:0002:03AC
 */
void f__B511_1177_000A_085D()
{
	emu_cmpws(&emu_si, 0xFE);
	if (emu_flags.zf) { f__B511_1132_000B_3187(); return; }
	emu_push(emu_cs); emu_push(0x1181); emu_cs = 0x2B6C; f__2B6C_0137_0020_17E5();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_1181_0014_D388();
}

/**
 * Decompiled function f__B511_1181_0014_D388()
 *
 * @name f__B511_1181_0014_D388
 * @implements B511:1181:0014:D388 ()
 *
 * Called From: B511:1181:000A:085D
 */
void f__B511_1181_0014_D388()
{
	emu_cmpws(&emu_si, 0xFF);
	if (!emu_flags.zf) { f__B511_119B_0012_0145(); return; }
	emu_movw(&emu_ax.x, 0xF);
	emu_push(emu_ax.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0x314);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x1195); emu_cs = 0x259E; emu_ip = 0x119B; emu_last_cs = 0xB511; emu_last_ip = 0x1190; emu_last_length = 0x0014; emu_last_crc = 0xD388; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__B511_119B_0012_0145()
 *
 * @name f__B511_119B_0012_0145
 * @implements B511:119B:0012:0145 ()
 *
 * Called From: B511:1184:0014:D388
 */
void f__B511_119B_0012_0145()
{
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x6D8F), 0x0);
	if (emu_flags.zf) { f__B511_11B9_0002_03FE(); return; }
	emu_movw(&emu_ax.x, emu_si);
	emu_addw(&emu_ax.x, 0x3E);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x11AD); emu_cs = 0x3483; emu_ip = 0x11D7; emu_last_cs = 0xB511; emu_last_ip = 0x11A8; emu_last_length = 0x0012; emu_last_crc = 0x0145; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__B511_11B9_0002_03FE()
 *
 * @name f__B511_11B9_0002_03FE
 * @implements B511:11B9:0002:03FE ()
 *
 * Called From: B511:11A0:0012:0145
 */
void f__B511_11B9_0002_03FE()
{
	f__B511_11E4_0017_955E(); return;
}

/**
 * Decompiled function f__B511_11BB_001B_6745()
 *
 * @name f__B511_11BB_001B_6745
 * @implements B511:11BB:001B:6745 ()
 *
 * Called From: B511:11EA:0017:955E
 * Called From: B511:11EA:0025:4DC6
 */
void f__B511_11BB_001B_6745()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x2));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), emu_dx.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_cs); emu_push(0x11D6); emu_cs = 0x23E1; f__23E1_01C2_0011_4E4B();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_11D6_0025_4DC6();
}

/**
 * Decompiled function f__B511_11D6_0025_4DC6()
 *
 * @name f__B511_11D6_0025_4DC6
 * @implements B511:11D6:0025:4DC6 ()
 *
 * Called From: B511:11D6:001B:6745
 */
void f__B511_11D6_0025_4DC6()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_dx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	if (!emu_flags.zf) { f__B511_11BB_001B_6745(); return; }
	emu_movw(&emu_ax.x, 0xF);
	emu_push(emu_ax.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0x314);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x11FB); emu_cs = 0x259E; f__259E_0006_0016_2DFF();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_11FB_0014_6737();
}

/**
 * Decompiled function f__B511_11E4_0017_955E()
 *
 * @name f__B511_11E4_0017_955E
 * @implements B511:11E4:0017:955E ()
 *
 * Called From: B511:11B9:0002:03FE
 */
void f__B511_11E4_0017_955E()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	if (!emu_flags.zf) { f__B511_11BB_001B_6745(); return; }
	emu_movw(&emu_ax.x, 0xF);
	emu_push(emu_ax.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0x314);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x11FB); emu_cs = 0x259E; emu_ip = 0x1201; emu_last_cs = 0xB511; emu_last_ip = 0x11F6; emu_last_length = 0x0017; emu_last_crc = 0x955E; emu_call(); // Jump does not resolve
	f__B511_11FB_0014_6737();
}

/**
 * Decompiled function f__B511_11FB_0014_6737()
 *
 * @name f__B511_11FB_0014_6737
 * @implements B511:11FB:0014:6737 ()
 *
 * Called From: B511:11FB:0025:4DC6
 */
void f__B511_11FB_0014_6737()
{
	emu_addws(&emu_sp, 0x6);
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x37AE), 0x0);
	if (!emu_flags.zf) { emu_ip = 0x120C; emu_last_cs = 0xB511; emu_last_ip = 0x1203; emu_last_length = 0x0014; emu_last_crc = 0x6737; emu_call(); return; } // Jump does not resolve
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x37A0), 0x0);
	if (emu_flags.zf) { f__B511_1212_0024_ED46(); return; }
	emu_ip = 0x14AC; emu_last_cs = 0xB511; emu_last_ip = 0x120C; emu_last_length = 0x0014; emu_last_crc = 0x6737; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B511_1212_0024_ED46()
 *
 * @name f__B511_1212_0024_ED46
 * @implements B511:1212:0024:ED46 ()
 *
 * Called From: B511:120A:0014:6737
 */
void f__B511_1212_0024_ED46()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), 0x0);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0xA8);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0xA8);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x6B);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x1236); emu_cs = 0x0FCB; f__0FCB_005F_001C_147D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_1236_000F_7E60();
}

/**
 * Decompiled function f__B511_1236_000F_7E60()
 *
 * @name f__B511_1236_000F_7E60
 * @implements B511:1236:000F:7E60 ()
 *
 * Called From: B511:1236:0024:ED46
 */
void f__B511_1236_000F_7E60()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_es, emu_dx.x);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x0));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x1245); emu_cs = 0x29DA; f__29DA_00D0_0013_27E9();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_1245_000B_FECA();
}

/**
 * Decompiled function f__B511_1245_000B_FECA()
 *
 * @name f__B511_1245_000B_FECA
 * @implements B511:1245:000B:FECA ()
 *
 * Called From: B511:1245:000F:7E60
 */
void f__B511_1245_000B_FECA()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x1250); emu_cs = 0x34B8; ovl__34B8(0);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_1250_001A_83B2();
}

/**
 * Decompiled function f__B511_1250_001A_83B2()
 *
 * @name f__B511_1250_001A_83B2
 * @implements B511:1250:001A:83B2 ()
 *
 * Called From: 261F:01B9:001B:DA28
 */
void f__B511_1250_001A_83B2()
{
	emu_addws(&emu_sp, 0xE);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_push(emu_cs); emu_push(0x126A); emu_cs = 0x348B; ovl__348B(0);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_126A_0024_BA1C();
}

/**
 * Decompiled function f__B511_126A_0024_BA1C()
 *
 * @name f__B511_126A_0024_BA1C
 * @implements B511:126A:0024:BA1C ()
 *
 * Called From: B511:126A:001A:83B2
 */
void f__B511_126A_0024_BA1C()
{
	emu_addws(&emu_sp, 0x8);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0xA8);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0xF0);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x6C);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x128E); emu_cs = 0x0FCB; f__0FCB_005F_001C_147D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_128E_000F_7E60();
}

/**
 * Decompiled function f__B511_128E_000F_7E60()
 *
 * @name f__B511_128E_000F_7E60
 * @implements B511:128E:000F:7E60 ()
 *
 * Called From: B511:128E:0024:BA1C
 */
void f__B511_128E_000F_7E60()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_es, emu_dx.x);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x0));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x129D); emu_cs = 0x29DA; f__29DA_00D0_0013_27E9();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_129D_000B_FDCA();
}

/**
 * Decompiled function f__B511_129D_000B_FDCA()
 *
 * @name f__B511_129D_000B_FDCA
 * @implements B511:129D:000B:FDCA ()
 *
 * Called From: B511:129D:000F:7E60
 */
void f__B511_129D_000B_FDCA()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x12A8); emu_cs = 0x34B8; ovl__34B8(0);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_12A8_001A_83B2();
}

/**
 * Decompiled function f__B511_12A8_001A_83B2()
 *
 * @name f__B511_12A8_001A_83B2
 * @implements B511:12A8:001A:83B2 ()
 *
 * Called From: 261F:01B9:001B:DA28
 * Called From: B511:12A8:000B:FDCA
 */
void f__B511_12A8_001A_83B2()
{
	emu_addws(&emu_sp, 0xE);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_push(emu_cs); emu_push(0x12C2); emu_cs = 0x348B; ovl__348B(0);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_12C2_002A_A3C3();
}

/**
 * Decompiled function f__B511_12C2_002A_A3C3()
 *
 * @name f__B511_12C2_002A_A3C3
 * @implements B511:12C2:002A:A3C3 ()
 *
 * Called From: B511:12C2:001A:83B2
 */
void f__B511_12C2_002A_A3C3()
{
	emu_addws(&emu_sp, 0x8);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), emu_ax.x);
	emu_movw(&emu_ax.x, emu_si);
	emu_movw(&emu_dx.x, 0x1E);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, emu_bx.x,  0x37F8));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x0));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x2BDD);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x9939);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x12EC); emu_cs = 0x01F7; f__01F7_378D_0020_4A95();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_12EC_001C_1401();
}

/**
 * Decompiled function f__B511_12EC_001C_1401()
 *
 * @name f__B511_12EC_001C_1401
 * @implements B511:12EC:001C:1401 ()
 *
 * Called From: B511:12EC:002A:A3C3
 */
void f__B511_12EC_001C_1401()
{
	emu_addws(&emu_sp, 0xA);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x38DE));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x38DC));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x38DA));
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x9939);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x1308); emu_cs = 0x0642; f__0642_075D_0011_56FC();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_1308_0009_CEF2();
}

/**
 * Decompiled function f__B511_1308_0009_CEF2()
 *
 * @name f__B511_1308_0009_CEF2
 * @implements B511:1308:0009:CEF2 ()
 *
 * Called From: B511:1308:001C:1401
 */
void f__B511_1308_0009_CEF2()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x1311); emu_cs = 0x0FCB; f__0FCB_0088_0016_E17C();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_1311_0018_C1B2();
}

/**
 * Decompiled function f__B511_1311_0018_C1B2()
 *
 * @name f__B511_1311_0018_C1B2
 * @implements B511:1311:0018:C1B2 ()
 *
 * Called From: B511:1311:0009:CEF2
 */
void f__B511_1311_0018_C1B2()
{
	emu_addws(&emu_sp, 0xC);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x38DC));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x38DA));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x38DC));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x38DA));
	emu_push(emu_cs); emu_push(0x1329); emu_cs = 0x2502; f__2502_0008_0015_ED28();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_1329_0011_139F();
}

/**
 * Decompiled function f__B511_1329_0011_139F()
 *
 * @name f__B511_1329_0011_139F
 * @implements B511:1329:0011:139F ()
 *
 * Called From: B511:1329:0018:C1B2
 */
void f__B511_1329_0011_139F()
{
	emu_addws(&emu_sp, 0x8);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x3A38), 0x5);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x133A); emu_cs = 0x2598; f__2598_0000_0017_D681();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_133A_0009_33BE();
}

/**
 * Decompiled function f__B511_133A_0009_33BE()
 *
 * @name f__B511_133A_0009_33BE
 * @implements B511:133A:0009:33BE ()
 *
 * Called From: B511:133A:0011:139F
 */
void f__B511_133A_0009_33BE()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_push(emu_cs); emu_push(0x1343); emu_cs = 0x2B6C; f__2B6C_0169_001E_97C8();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_1343_0023_E3E8();
}

/**
 * Decompiled function f__B511_1343_0023_E3E8()
 *
 * @name f__B511_1343_0023_E3E8
 * @implements B511:1343:0023:E3E8 ()
 *
 * Called From: B511:1343:0009:33BE
 */
void f__B511_1343_0023_E3E8()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_movw(&emu_bx.x, emu_si);
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_push(emu_get_memory16(emu_ds, emu_bx.x,  0x2BC0));
	emu_push(emu_get_memory16(emu_ds, emu_bx.x,  0x2BBE));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x38DC));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x38DA));
	emu_push(emu_cs);
	emu_push(0x1366); f__B511_0E44_000C_561B();
	f__B511_1366_0021_D565();
}

/**
 * Decompiled function f__B511_1366_0021_D565()
 *
 * @name f__B511_1366_0021_D565
 * @implements B511:1366:0021:D565 ()
 *
 * Called From: B511:1366:0023:E3E8
 */
void f__B511_1366_0021_D565()
{
	emu_addws(&emu_sp, 0xE);
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3C34));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3C32));
	emu_movw(&emu_ax.x, 0x3);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x3);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x2C0A);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x1387); emu_cs = 0x0642; f__0642_075D_0011_56FC();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_1387_0009_C400();
}

/**
 * Decompiled function f__B511_1387_0009_C400()
 *
 * @name f__B511_1387_0009_C400
 * @implements B511:1387:0009:C400 ()
 *
 * Called From: B511:1387:0021:D565
 */
void f__B511_1387_0009_C400()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x1390); emu_cs = 0x34CA; ovl__34CA(0);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_1390_0008_F35E();
}

/**
 * Decompiled function f__B511_1390_0008_F35E()
 *
 * @name f__B511_1390_0008_F35E
 * @implements B511:1390:0008:F35E ()
 *
 * Called From: B511:1390:0009:C400
 */
void f__B511_1390_0008_F35E()
{
	emu_addws(&emu_sp, 0xE);
	emu_push(emu_cs); emu_push(0x1398); emu_cs = 0x2B6C; f__2B6C_0137_0020_17E5();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_1398_0020_A4B5();
}

/**
 * Decompiled function f__B511_1398_0020_A4B5()
 *
 * @name f__B511_1398_0020_A4B5
 * @implements B511:1398:0020:A4B5 ()
 *
 * Called From: B511:1398:0008:F35E
 */
void f__B511_1398_0020_A4B5()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x18);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x1A);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x13B8); emu_cs = 0x24D0; f__24D0_000D_0039_9224();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_13B8_002C_720E();
}

/**
 * Decompiled function f__B511_13B8_002C_720E()
 *
 * @name f__B511_13B8_002C_720E
 * @implements B511:13B8:002C:720E ()
 *
 * Called From: B511:13B8:0020:A4B5
 */
void f__B511_13B8_002C_720E()
{
	emu_addws(&emu_sp, 0x10);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x18);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0xD);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x1A);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_si);
	emu_movw(&emu_dx.x, 0x18);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_addw(&emu_ax.x, 0x18);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x13E4); emu_cs = 0x24D0; f__24D0_000D_0039_9224();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_13E4_000E_690A();
}

/**
 * Decompiled function f__B511_13E4_000E_690A()
 *
 * @name f__B511_13E4_000E_690A
 * @implements B511:13E4:000E:690A ()
 *
 * Called From: B511:13E4:002C:720E
 */
void f__B511_13E4_000E_690A()
{
	emu_addws(&emu_sp, 0x10);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_push(emu_cs); emu_push(0x13F2); emu_cs = 0x348B; ovl__348B(7);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_13F2_0007_2EFE();
}

/**
 * Decompiled function f__B511_13F2_0007_2EFE()
 *
 * @name f__B511_13F2_0007_2EFE
 * @implements B511:13F2:0007:2EFE ()
 *
 * Called From: B511:13F2:000E:690A
 */
void f__B511_13F2_0007_2EFE()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_push(emu_cs); emu_push(0x13F9); emu_cs = 0x2B6C; f__2B6C_0169_001E_97C8();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_13F9_0029_3356();
}

/**
 * Decompiled function f__B511_13F9_0029_3356()
 *
 * @name f__B511_13F9_0029_3356
 * @implements B511:13F9:0029:3356 ()
 *
 * Called From: B511:13F9:0007:2EFE
 */
void f__B511_13F9_0029_3356()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_movw(&emu_bx.x, emu_si);
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_push(emu_get_memory16(emu_ds, emu_bx.x,  0x2BC0));
	emu_push(emu_get_memory16(emu_ds, emu_bx.x,  0x2BBE));
	emu_push(emu_cs); emu_push(0x1422); emu_cs = 0x34DA; ovl__34DA(4);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_1422_0019_35CB();
}

/**
 * Decompiled function f__B511_1422_0019_35CB()
 *
 * @name f__B511_1422_0019_35CB
 * @implements B511:1422:0019:35CB ()
 *
 * Called From: 261F:01B9:001B:DA28
 */
void f__B511_1422_0019_35CB()
{
	emu_addws(&emu_sp, 0x12);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_ax.x);
	emu_testw(&emu_get_memory16(emu_ss, emu_bp, -0xC), 0x8000);
	if (emu_flags.zf) { emu_ip = 0x13F9; emu_last_cs = 0xB511; emu_last_ip = 0x142D; emu_last_length = 0x0019; emu_last_crc = 0x35CB; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0xC), 0x8001);
	if (!emu_flags.zf) { f__B511_143D_000F_DF4B(); return; }
	emu_push(emu_cs); emu_push(0x143B); emu_cs = 0x1DD7; f__1DD7_0B53_0025_71E0();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_143B_0002_0388();
}

/**
 * Decompiled function f__B511_143B_0002_0388()
 *
 * @name f__B511_143B_0002_0388
 * @implements B511:143B:0002:0388 ()
 *
 * Called From: B511:143B:0019:35CB
 */
void f__B511_143B_0002_0388()
{
	f__B511_144F_0002_03FE(); return;
}

/**
 * Decompiled function f__B511_143D_000F_DF4B()
 *
 * @name f__B511_143D_000F_DF4B
 * @implements B511:143D:000F:DF4B ()
 *
 * Called From: B511:1434:0019:35CB
 */
void f__B511_143D_000F_DF4B()
{
	emu_movw(&emu_ax.x, 0xF);
	emu_push(emu_ax.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0x314);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x144C); emu_cs = 0x259E; f__259E_0006_0016_2DFF();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_144C_0005_1FEE();
}

/**
 * Decompiled function f__B511_144C_0005_1FEE()
 *
 * @name f__B511_144C_0005_1FEE
 * @implements B511:144C:0005:1FEE ()
 *
 * Called From: B511:144C:000F:DF4B
 */
void f__B511_144C_0005_1FEE()
{
	emu_addws(&emu_sp, 0x6);
	f__B511_147A_000D_C942(); return;
}

/**
 * Decompiled function f__B511_144F_0002_03FE()
 *
 * @name f__B511_144F_0002_03FE
 * @implements B511:144F:0002:03FE ()
 *
 * Called From: B511:143B:0002:0388
 */
void f__B511_144F_0002_03FE()
{
	f__B511_147A_000D_C942(); return;
}

/**
 * Decompiled function f__B511_1451_001B_ADCA()
 *
 * @name f__B511_1451_001B_ADCA
 * @implements B511:1451:001B:ADCA ()
 *
 * Called From: B511:1480:000D:C942
 * Called From: B511:1480:001B:60AA
 */
void f__B511_1451_001B_ADCA()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x2));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x12), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x14), emu_dx.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_push(emu_cs); emu_push(0x146C); emu_cs = 0x23E1; f__23E1_01C2_0011_4E4B();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_146C_001B_60AA();
}

/**
 * Decompiled function f__B511_146C_001B_60AA()
 *
 * @name f__B511_146C_001B_60AA
 * @implements B511:146C:001B:60AA ()
 *
 * Called From: B511:146C:001B:ADCA
 */
void f__B511_146C_001B_60AA()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), emu_dx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xE));
	if (!emu_flags.zf) { f__B511_1451_001B_ADCA(); return; }
	emu_push(emu_cs); emu_push(0x1487); emu_cs = 0x34DA; ovl__34DA(1);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_1487_0005_1258();
}

/**
 * Decompiled function f__B511_147A_000D_C942()
 *
 * @name f__B511_147A_000D_C942
 * @implements B511:147A:000D:C942 ()
 *
 * Called From: B511:144F:0005:1FEE
 * Called From: B511:144F:0002:03FE
 */
void f__B511_147A_000D_C942()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xE));
	if (!emu_flags.zf) { f__B511_1451_001B_ADCA(); return; }
	emu_push(emu_cs); emu_push(0x1487); emu_cs = 0x34DA; emu_ip = 0x14AC; emu_last_cs = 0xB511; emu_last_ip = 0x1482; emu_last_length = 0x000D; emu_last_crc = 0xC942; emu_call(); // Jump does not resolve
	f__B511_1487_0005_1258();
}

/**
 * Decompiled function f__B511_1487_0005_1258()
 *
 * @name f__B511_1487_0005_1258
 * @implements B511:1487:0005:1258 ()
 *
 * Called From: B511:1487:001B:60AA
 */
void f__B511_1487_0005_1258()
{
	emu_push(emu_cs); emu_push(0x148C); emu_cs = 0x34B8; ovl__34B8(5);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_148C_0008_EAEA();
}

/**
 * Decompiled function f__B511_148C_0008_EAEA()
 *
 * @name f__B511_148C_0008_EAEA
 * @implements B511:148C:0008:EAEA ()
 *
 * Called From: 261F:01B9:001B:DA28
 */
void f__B511_148C_0008_EAEA()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_cs); emu_push(0x1494); emu_cs = 0x2598; f__2598_0000_0017_D681();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_1494_0003_0164();
}

/**
 * Decompiled function f__B511_1494_0003_0164()
 *
 * @name f__B511_1494_0003_0164
 * @implements B511:1494:0003:0164 ()
 *
 * Called From: B511:1494:0008:EAEA
 */
void f__B511_1494_0003_0164()
{
	emu_pop(&emu_cx.x);
	f__B511_1497_0005_1E9E(); return;
}

/**
 * Decompiled function f__B511_1497_0005_1E9E()
 *
 * @name f__B511_1497_0005_1E9E
 * @implements B511:1497:0005:1E9E ()
 *
 * Called From: B511:1495:0003:0164
 */
void f__B511_1497_0005_1E9E()
{
	emu_push(emu_cs); emu_push(0x149C); emu_cs = 0x1DD7; f__1DD7_01EB_0013_AA5A();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_149C_000D_06A6();
}

/**
 * Decompiled function f__B511_149C_000D_06A6()
 *
 * @name f__B511_149C_000D_06A6
 * @implements B511:149C:000D:06A6 ()
 *
 * Called From: B511:149C:0005:1E9E
 */
void f__B511_149C_000D_06A6()
{
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.zf) { emu_ip = 0x1497; emu_last_cs = 0xB511; emu_last_ip = 0x149E; emu_last_length = 0x000D; emu_last_crc = 0x06A6; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0xC), 0x8001);
	if (!emu_flags.zf) { f__B511_14A9_0003_07C6(); return; }
	f__B511_14AC_0008_5474(); return;
}

/**
 * Decompiled function f__B511_14A9_0003_07C6()
 *
 * @name f__B511_14A9_0003_07C6
 * @implements B511:14A9:0003:07C6 ()
 *
 * Called From: B511:14A5:000D:06A6
 */
void f__B511_14A9_0003_07C6()
{
	f__B511_100A_0005_0C90(); return;
}

/**
 * Decompiled function f__B511_14AC_0008_5474()
 *
 * @name f__B511_14AC_0008_5474
 * @implements B511:14AC:0008:5474 ()
 *
 * Called From: B511:14A7:000D:06A6
 */
void f__B511_14AC_0008_5474()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x14B4); emu_cs = 0x3483; ovl__3483(1);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_14B4_0007_2A38();
}

/**
 * Decompiled function f__B511_14B4_0007_2A38()
 *
 * @name f__B511_14B4_0007_2A38
 * @implements B511:14B4:0007:2A38 ()
 *
 * Called From: B511:14B4:0008:5474
 */
void f__B511_14B4_0007_2A38()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x14BB); emu_cs = 0x34B8; ovl__34B8(3);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_14BB_0015_4BD4();
}

/**
 * Decompiled function f__B511_14BB_0015_4BD4()
 *
 * @name f__B511_14BB_0015_4BD4
 * @implements B511:14BB:0015:4BD4 ()
 *
 * Called From: 261F:01B9:001B:DA28
 */
void f__B511_14BB_0015_4BD4()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_ax.x, 0x2DCE);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x440);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x7);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x14D0); emu_cs = 0x34B8; ovl__34B8(4);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_14D0_0008_F07A();
}

/**
 * Decompiled function f__B511_14D0_0008_F07A()
 *
 * @name f__B511_14D0_0008_F07A
 * @implements B511:14D0:0008:F07A ()
 *
 * Called From: B511:14D0:0015:4BD4
 */
void f__B511_14D0_0008_F07A()
{
	emu_addws(&emu_sp, 0x8);
	emu_push(emu_cs); emu_push(0x14D8); emu_cs = 0x29E8; f__29E8_073F_000E_A6E4();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_14D8_0005_143E();
}

/**
 * Decompiled function f__B511_14D8_0005_143E()
 *
 * @name f__B511_14D8_0005_143E
 * @implements B511:14D8:0005:143E ()
 *
 * Called From: B511:14D8:0008:F07A
 */
void f__B511_14D8_0005_143E()
{
	emu_push(emu_cs); emu_push(0x14DD); emu_cs = 0x2B6C; f__2B6C_0169_001E_97C8();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_14DD_000F_DF4B();
}

/**
 * Decompiled function f__B511_14DD_000F_DF4B()
 *
 * @name f__B511_14DD_000F_DF4B
 * @implements B511:14DD:000F:DF4B ()
 *
 * Called From: B511:14DD:0005:143E
 */
void f__B511_14DD_000F_DF4B()
{
	emu_movw(&emu_ax.x, 0xF);
	emu_push(emu_ax.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0x314);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x14EC); emu_cs = 0x259E; f__259E_0006_0016_2DFF();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_14EC_0007_7D6C();
}

/**
 * Decompiled function f__B511_14EC_0007_7D6C()
 *
 * @name f__B511_14EC_0007_7D6C
 * @implements B511:14EC:0007:7D6C ()
 *
 * Called From: B511:14EC:000F:DF4B
 */
void f__B511_14EC_0007_7D6C()
{
	emu_addws(&emu_sp, 0x6);
	emu_movw(&emu_ax.x, emu_si);
	f__B511_14F3_0006_137A(); return;
}

/**
 * Decompiled function f__B511_14F3_0006_137A()
 *
 * @name f__B511_14F3_0006_137A
 * @implements B511:14F3:0006:137A ()
 *
 * Called From: B511:14F1:0007:7D6C
 */
void f__B511_14F3_0006_137A()
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

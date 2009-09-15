/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__1423_0009_0025_41B8()
 *
 * @name f__1423_0009_0025_41B8
 * @implements 1423:0009:0025:41B8 ()
 *
 * Called From: 1423:02D0:0004:0682
 */
void f__1423_0009_0025_41B8()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x6);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_xorw(&emu_si, emu_si);
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x379E), 0x0);
	if (emu_flags.zf) { f__1423_0037_001F_9621(); return; }
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x60AE);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x002E); emu_cs = 0x2B1E; emu_ip = 0x01B7; emu_last_cs = 0x1423; emu_last_ip = 0x0029; emu_last_length = 0x0025; emu_last_crc = 0x41B8; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__1423_0034_0003_0672()
 *
 * @name f__1423_0034_0003_0672
 * @implements 1423:0034:0003:0672 ()
 *
 * Called From: 1423:0054:001F:9621
 * Called From: 1423:0182:0005:1908
 */
void f__1423_0034_0003_0672()
{
	f__1423_0185_0006_137A(); return;
}

/**
 * Decompiled function f__1423_0037_001F_9621()
 *
 * @name f__1423_0037_001F_9621
 * @implements 1423:0037:001F:9621 ()
 *
 * Called From: 1423:0018:0025:41B8
 */
void f__1423_0037_001F_9621()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76B2));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76B0));
	emu_subw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x38AC));
	emu_sbbw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x38AE));
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__1423_0056_000B_252B(); return; }
	if ((emu_flags.sf != emu_flags.of)) { emu_ip = 0x0052; emu_last_cs = 0x1423; emu_last_ip = 0x004A; emu_last_length = 0x001F; emu_last_crc = 0x9621; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_dx.x, 0x1C20);
	if (!emu_flags.cf) { f__1423_0056_000B_252B(); return; }
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__1423_0034_0003_0672(); return;
}

/**
 * Decompiled function f__1423_0056_000B_252B()
 *
 * @name f__1423_0056_000B_252B
 * @implements 1423:0056:000B:252B ()
 *
 * Called From: 1423:0048:001F:9621
 * Called From: 1423:0050:001F:9621
 */
void f__1423_0056_000B_252B()
{
	emu_testw(&emu_get_memory16(emu_ds, 0x00, -0x72FF), 0x3);
	if (!emu_flags.zf) { f__1423_0061_001A_C150(); return; }
	emu_ip = 0x00FE; emu_last_cs = 0x1423; emu_last_ip = 0x005E; emu_last_length = 0x000B; emu_last_crc = 0x252B; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__1423_0061_001A_C150()
 *
 * @name f__1423_0061_001A_C150
 * @implements 1423:0061:001A:C150 ()
 *
 * Called From: 1423:005C:000B:252B
 */
void f__1423_0061_001A_C150()
{
	emu_xorw(&emu_di, emu_di);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x0);
	emu_movw(&emu_ax.x, 0xFFFF);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0xFFFF);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_cs); emu_push(0x007B); emu_cs = 0x1082; f__1082_00FD_003A_94E2();
	f__1423_007B_0005_1FA6();
}

/**
 * Decompiled function f__1423_007B_0005_1FA6()
 *
 * @name f__1423_007B_0005_1FA6
 * @implements 1423:007B:0005:1FA6 ()
 *
 * Called From: 1423:007B:001A:C150
 */
void f__1423_007B_0005_1FA6()
{
	emu_addws(&emu_sp, 0x8);
	f__1423_00B5_0046_49BD(); return;
}

/**
 * Decompiled function f__1423_0080_0025_9C28()
 *
 * @name f__1423_0080_0025_9C28
 * @implements 1423:0080:0025:9C28 ()
 *
 * Called From: 1423:00C1:0046:49BD
 * Called From: 1423:00C1:0048:3C3D
 */
void f__1423_0080_0025_9C28()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x2), 0xF);
	if (emu_flags.zf) { emu_ip = 0x00A8; emu_last_cs = 0x1423; emu_last_ip = 0x0088; emu_last_length = 0x0025; emu_last_crc = 0x9C28; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x2), 0x10);
	if (emu_flags.zf) { emu_ip = 0x00A8; emu_last_cs = 0x1423; emu_last_ip = 0x0092; emu_last_length = 0x0025; emu_last_crc = 0x9C28; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x8));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3A38));
	if (!emu_flags.zf) { emu_ip = 0x00A5; emu_last_cs = 0x1423; emu_last_ip = 0x00A0; emu_last_length = 0x0025; emu_last_crc = 0x9C28; emu_call(); return; } // Jump does not resolve
	emu_incw(&emu_di);
	f__1423_00A8_000B_0232(); return;
}

/**
 * Decompiled function f__1423_00A8_000B_0232()
 *
 * @name f__1423_00A8_000B_0232
 * @implements 1423:00A8:000B:0232 ()
 *
 * Called From: 1423:00A3:0025:9C28
 */
void f__1423_00A8_000B_0232()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_cs); emu_push(0x00B3); emu_cs = 0x1082; f__1082_013D_0038_03DE();
	f__1423_00B3_0048_3C3D();
}

/**
 * Decompiled function f__1423_00B3_0048_3C3D()
 *
 * @name f__1423_00B3_0048_3C3D
 * @implements 1423:00B3:0048:3C3D ()
 *
 * Called From: 1423:00B3:000B:0232
 */
void f__1423_00B3_0048_3C3D()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (!emu_flags.zf) { f__1423_0080_0025_9C28(); return; }
	emu_testw(&emu_get_memory16(emu_ds, 0x00, -0x72FF), 0x1);
	if (emu_flags.zf) { f__1423_00D4_0027_8954(); return; }
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x0);
	if (!emu_flags.zf) { emu_ip = 0x00D4; emu_last_cs = 0x1423; emu_last_ip = 0x00CF; emu_last_length = 0x0048; emu_last_crc = 0x3C3D; emu_call(); return; } // Jump does not resolve
	emu_orws(&emu_si, 0x1);
	emu_testw(&emu_get_memory16(emu_ds, 0x00, -0x72FF), 0x2);
	if (emu_flags.zf) { emu_ip = 0x00E3; emu_last_cs = 0x1423; emu_last_ip = 0x00DA; emu_last_length = 0x0048; emu_last_crc = 0x3C3D; emu_call(); return; } // Jump does not resolve
	emu_orw(&emu_di, emu_di);
	if (!emu_flags.zf) { emu_ip = 0x00E3; emu_last_cs = 0x1423; emu_last_ip = 0x00DE; emu_last_length = 0x0048; emu_last_crc = 0x3C3D; emu_call(); return; } // Jump does not resolve
	emu_orws(&emu_si, 0x1);
	emu_orw(&emu_si, emu_si);
	if (emu_flags.zf) { emu_ip = 0x00FE; emu_last_cs = 0x1423; emu_last_ip = 0x00E5; emu_last_length = 0x0048; emu_last_crc = 0x3C3D; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x60BA);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x00FB); emu_cs = 0x2B1E; emu_ip = 0x0284; emu_last_cs = 0x1423; emu_last_ip = 0x00F6; emu_last_length = 0x0048; emu_last_crc = 0x3C3D; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__1423_00B5_0046_49BD()
 *
 * @name f__1423_00B5_0046_49BD
 * @implements 1423:00B5:0046:49BD ()
 *
 * Called From: 1423:007E:0005:1FA6
 */
void f__1423_00B5_0046_49BD()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (!emu_flags.zf) { f__1423_0080_0025_9C28(); return; }
	emu_testw(&emu_get_memory16(emu_ds, 0x00, -0x72FF), 0x1);
	if (emu_flags.zf) { emu_ip = 0x00D4; emu_last_cs = 0x1423; emu_last_ip = 0x00C9; emu_last_length = 0x0046; emu_last_crc = 0x49BD; emu_call(); return; } // Jump does not resolve
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x0);
	if (!emu_flags.zf) { emu_ip = 0x00D4; emu_last_cs = 0x1423; emu_last_ip = 0x00CF; emu_last_length = 0x0046; emu_last_crc = 0x49BD; emu_call(); return; } // Jump does not resolve
	emu_orws(&emu_si, 0x1);
	emu_testw(&emu_get_memory16(emu_ds, 0x00, -0x72FF), 0x2);
	if (emu_flags.zf) { emu_ip = 0x00E3; emu_last_cs = 0x1423; emu_last_ip = 0x00DA; emu_last_length = 0x0046; emu_last_crc = 0x49BD; emu_call(); return; } // Jump does not resolve
	emu_orw(&emu_di, emu_di);
	if (!emu_flags.zf) { emu_ip = 0x00E3; emu_last_cs = 0x1423; emu_last_ip = 0x00DE; emu_last_length = 0x0046; emu_last_crc = 0x49BD; emu_call(); return; } // Jump does not resolve
	emu_orws(&emu_si, 0x1);
	emu_orw(&emu_si, emu_si);
	if (emu_flags.zf) { emu_ip = 0x00FE; emu_last_cs = 0x1423; emu_last_ip = 0x00E5; emu_last_length = 0x0046; emu_last_crc = 0x49BD; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x60BA);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x00FB); emu_cs = 0x2B1E; emu_ip = 0x0284; emu_last_cs = 0x1423; emu_last_ip = 0x00F6; emu_last_length = 0x0046; emu_last_crc = 0x49BD; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__1423_00D4_0027_8954()
 *
 * @name f__1423_00D4_0027_8954
 * @implements 1423:00D4:0027:8954 ()
 *
 * Called From: 1423:00C9:0048:3C3D
 */
void f__1423_00D4_0027_8954()
{
	emu_testw(&emu_get_memory16(emu_ds, 0x00, -0x72FF), 0x2);
	if (emu_flags.zf) { emu_ip = 0x00E3; emu_last_cs = 0x1423; emu_last_ip = 0x00DA; emu_last_length = 0x0027; emu_last_crc = 0x8954; emu_call(); return; } // Jump does not resolve
	emu_orw(&emu_di, emu_di);
	if (!emu_flags.zf) { f__1423_00E3_0018_0968(); return; }
	emu_orws(&emu_si, 0x1);
	emu_orw(&emu_si, emu_si);
	if (emu_flags.zf) { emu_ip = 0x00FE; emu_last_cs = 0x1423; emu_last_ip = 0x00E5; emu_last_length = 0x0027; emu_last_crc = 0x8954; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x60BA);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x00FB); emu_cs = 0x2B1E; emu_ip = 0x0284; emu_last_cs = 0x1423; emu_last_ip = 0x00F6; emu_last_length = 0x0027; emu_last_crc = 0x8954; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__1423_00E3_0018_0968()
 *
 * @name f__1423_00E3_0018_0968
 * @implements 1423:00E3:0018:0968 ()
 *
 * Called From: 1423:00DE:0027:8954
 */
void f__1423_00E3_0018_0968()
{
	emu_orw(&emu_si, emu_si);
	if (emu_flags.zf) { f__1423_00FE_0022_BFA4(); return; }
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x60BA);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x00FB); emu_cs = 0x2B1E; emu_ip = 0x0284; emu_last_cs = 0x1423; emu_last_ip = 0x00F6; emu_last_length = 0x0018; emu_last_crc = 0x0968; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__1423_00FE_0022_BFA4()
 *
 * @name f__1423_00FE_0022_BFA4
 * @implements 1423:00FE:0022:BFA4 ()
 *
 * Called From: 1423:00E5:0018:0968
 */
void f__1423_00FE_0022_BFA4()
{
	emu_testw(&emu_get_memory16(emu_ds, 0x00, -0x72FF), 0x4);
	if (emu_flags.zf) { emu_ip = 0x013F; emu_last_cs = 0x1423; emu_last_ip = 0x0104; emu_last_length = 0x0022; emu_last_crc = 0xBFA4; emu_call(); return; } // Jump does not resolve
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x38B6), 0xFF);
	if (emu_flags.zf) { emu_ip = 0x013F; emu_last_cs = 0x1423; emu_last_ip = 0x010B; emu_last_length = 0x0022; emu_last_crc = 0xBFA4; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x3A3A));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x1C));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x38B6));
	if (!(emu_flags.cf || emu_flags.zf)) { f__1423_0120_001C_886C(); return; }
	emu_movw(&emu_ax.x, 0x1);
	f__1423_0122_001A_B869(); return;
}

/**
 * Decompiled function f__1423_0120_001C_886C()
 *
 * @name f__1423_0120_001C_886C
 * @implements 1423:0120:001C:886C ()
 *
 * Called From: 1423:0119:0022:BFA4
 */
void f__1423_0120_001C_886C()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_orw(&emu_si, emu_ax.x);
	emu_orw(&emu_si, emu_si);
	if (emu_flags.zf) { f__1423_013F_0022_0837(); return; }
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x60C7);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x013C); emu_cs = 0x2B1E; emu_ip = 0x02C5; emu_last_cs = 0x1423; emu_last_ip = 0x0137; emu_last_length = 0x001C; emu_last_crc = 0x886C; emu_call(); // Jump does not resolve
	f__1423_013C_0025_1447();
}

/**
 * Decompiled function f__1423_0122_001A_B869()
 *
 * @name f__1423_0122_001A_B869
 * @implements 1423:0122:001A:B869 ()
 *
 * Called From: 1423:011E:0022:BFA4
 */
void f__1423_0122_001A_B869()
{
	emu_orw(&emu_si, emu_ax.x);
	emu_orw(&emu_si, emu_si);
	if (emu_flags.zf) { emu_ip = 0x013F; emu_last_cs = 0x1423; emu_last_ip = 0x0126; emu_last_length = 0x001A; emu_last_crc = 0xB869; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x60C7);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x013C); emu_cs = 0x2B1E; f__2B1E_0189_001B_A980();
	f__1423_013C_0025_1447();
}

/**
 * Decompiled function f__1423_013C_0025_1447()
 *
 * @name f__1423_013C_0025_1447
 * @implements 1423:013C:0025:1447 ()
 *
 * Called From: 1423:013C:001A:B869
 */
void f__1423_013C_0025_1447()
{
	emu_addws(&emu_sp, 0xA);
	emu_testw(&emu_get_memory16(emu_ds, 0x00, -0x72FF), 0x8);
	if (emu_flags.zf) { f__1423_0180_0005_1908(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76B2));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76B0));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x38BA));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { emu_ip = 0x0161; emu_last_cs = 0x1423; emu_last_ip = 0x0152; emu_last_length = 0x0025; emu_last_crc = 0x1447; emu_call(); return; } // Jump does not resolve
	if ((emu_flags.sf != emu_flags.of)) { emu_ip = 0x015C; emu_last_cs = 0x1423; emu_last_ip = 0x0154; emu_last_length = 0x0025; emu_last_crc = 0x1447; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x38B8));
	if (!emu_flags.cf) { emu_ip = 0x0161; emu_last_cs = 0x1423; emu_last_ip = 0x015A; emu_last_length = 0x0025; emu_last_crc = 0x1447; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, 0x1);
	emu_ip = 0x0163; emu_last_cs = 0x1423; emu_last_ip = 0x015F; emu_last_length = 0x0025; emu_last_crc = 0x1447; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__1423_013F_0022_0837()
 *
 * @name f__1423_013F_0022_0837
 * @implements 1423:013F:0022:0837 ()
 *
 * Called From: 1423:0126:001C:886C
 */
void f__1423_013F_0022_0837()
{
	emu_testw(&emu_get_memory16(emu_ds, 0x00, -0x72FF), 0x8);
	if (emu_flags.zf) { f__1423_0180_0005_1908(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76B2));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76B0));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x38BA));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { emu_ip = 0x0161; emu_last_cs = 0x1423; emu_last_ip = 0x0152; emu_last_length = 0x0022; emu_last_crc = 0x0837; emu_call(); return; } // Jump does not resolve
	if ((emu_flags.sf != emu_flags.of)) { emu_ip = 0x015C; emu_last_cs = 0x1423; emu_last_ip = 0x0154; emu_last_length = 0x0022; emu_last_crc = 0x0837; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x38B8));
	if (!emu_flags.cf) { emu_ip = 0x0161; emu_last_cs = 0x1423; emu_last_ip = 0x015A; emu_last_length = 0x0022; emu_last_crc = 0x0837; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, 0x1);
	emu_ip = 0x0163; emu_last_cs = 0x1423; emu_last_ip = 0x015F; emu_last_length = 0x0022; emu_last_crc = 0x0837; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__1423_0180_0005_1908()
 *
 * @name f__1423_0180_0005_1908
 * @implements 1423:0180:0005:1908 ()
 *
 * Called From: 1423:0145:0022:0837
 * Called From: 1423:0145:0025:1447
 */
void f__1423_0180_0005_1908()
{
	emu_movw(&emu_ax.x, emu_si);
	f__1423_0034_0003_0672(); return;
}

/**
 * Decompiled function f__1423_0185_0006_137A()
 *
 * @name f__1423_0185_0006_137A
 * @implements 1423:0185:0006:137A ()
 *
 * Called From: 1423:0034:0003:0672
 */
void f__1423_0185_0006_137A()
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
 * Decompiled function f__1423_018B_0015_371F()
 *
 * @name f__1423_018B_0015_371F
 * @implements 1423:018B:0015:371F ()
 *
 * Called From: 1423:0321:0005:0CE0
 */
void f__1423_018B_0015_371F()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x6);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x379E), 0x0);
	if (emu_flags.zf) { f__1423_01A0_000B_212B(); return; }
	emu_movw(&emu_ax.x, 0x1);
	emu_ip = 0x029F; emu_last_cs = 0x1423; emu_last_ip = 0x019D; emu_last_length = 0x0015; emu_last_crc = 0x371F; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__1423_019D_0003_04B4()
 *
 * @name f__1423_019D_0003_04B4
 * @implements 1423:019D:0003:04B4 ()
 *
 * Called From: 1423:029C:0005:184C
 */
void f__1423_019D_0003_04B4()
{
	f__1423_029F_0006_137A(); return;
}

/**
 * Decompiled function f__1423_01A0_000B_212B()
 *
 * @name f__1423_01A0_000B_212B
 * @implements 1423:01A0:000B:212B ()
 *
 * Called From: 1423:0198:0015:371F
 */
void f__1423_01A0_000B_212B()
{
	emu_testw(&emu_get_memory16(emu_ds, 0x00, -0x72FD), 0x3);
	if (!emu_flags.zf) { emu_ip = 0x01AB; emu_last_cs = 0x1423; emu_last_ip = 0x01A6; emu_last_length = 0x000B; emu_last_crc = 0x212B; emu_call(); return; } // Jump does not resolve
	f__1423_0248_0028_6752(); return;
}

/**
 * Decompiled function f__1423_0248_0028_6752()
 *
 * @name f__1423_0248_0028_6752
 * @implements 1423:0248:0028:6752 ()
 *
 * Called From: 1423:01A8:000B:212B
 */
void f__1423_0248_0028_6752()
{
	emu_xorw(&emu_si, emu_si);
	emu_testw(&emu_get_memory16(emu_ds, 0x00, -0x72FD), 0x4);
	if (emu_flags.zf) { emu_ip = 0x0274; emu_last_cs = 0x1423; emu_last_ip = 0x0250; emu_last_length = 0x0028; emu_last_crc = 0x6752; emu_call(); return; } // Jump does not resolve
	emu_orw(&emu_si, emu_si);
	if (!emu_flags.zf) { emu_ip = 0x0274; emu_last_cs = 0x1423; emu_last_ip = 0x0254; emu_last_length = 0x0028; emu_last_crc = 0x6752; emu_call(); return; } // Jump does not resolve
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x38B6), 0xFF);
	if (emu_flags.zf) { emu_ip = 0x0274; emu_last_cs = 0x1423; emu_last_ip = 0x025B; emu_last_length = 0x0028; emu_last_crc = 0x6752; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x3A3A));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x1C));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x38B6));
	if (!(emu_flags.cf || emu_flags.zf)) { emu_ip = 0x0270; emu_last_cs = 0x1423; emu_last_ip = 0x0269; emu_last_length = 0x0028; emu_last_crc = 0x6752; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, 0x1);
	f__1423_0272_0024_3F04(); return;
}

/**
 * Decompiled function f__1423_0272_0024_3F04()
 *
 * @name f__1423_0272_0024_3F04
 * @implements 1423:0272:0024:3F04 ()
 *
 * Called From: 1423:026E:0028:6752
 */
void f__1423_0272_0024_3F04()
{
	emu_movw(&emu_si, emu_ax.x);
	emu_testw(&emu_get_memory16(emu_ds, 0x00, -0x72FD), 0x8);
	if (emu_flags.zf) { f__1423_029A_0005_184C(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76B2));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76B0));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x38BA));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { emu_ip = 0x0296; emu_last_cs = 0x1423; emu_last_ip = 0x0287; emu_last_length = 0x0024; emu_last_crc = 0x3F04; emu_call(); return; } // Jump does not resolve
	if ((emu_flags.sf != emu_flags.of)) { emu_ip = 0x0291; emu_last_cs = 0x1423; emu_last_ip = 0x0289; emu_last_length = 0x0024; emu_last_crc = 0x3F04; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x38B8));
	if (!emu_flags.cf) { emu_ip = 0x0296; emu_last_cs = 0x1423; emu_last_ip = 0x028F; emu_last_length = 0x0024; emu_last_crc = 0x3F04; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, 0x1);
	emu_ip = 0x0298; emu_last_cs = 0x1423; emu_last_ip = 0x0294; emu_last_length = 0x0024; emu_last_crc = 0x3F04; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__1423_029A_0005_184C()
 *
 * @name f__1423_029A_0005_184C
 * @implements 1423:029A:0005:184C ()
 *
 * Called From: 1423:027A:0024:3F04
 */
void f__1423_029A_0005_184C()
{
	emu_movw(&emu_ax.x, emu_si);
	f__1423_019D_0003_04B4(); return;
}

/**
 * Decompiled function f__1423_029F_0006_137A()
 *
 * @name f__1423_029F_0006_137A
 * @implements 1423:029F:0006:137A ()
 *
 * Called From: 1423:019D:0003:04B4
 */
void f__1423_029F_0006_137A()
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
 * Decompiled function f__1423_02A5_002A_41EE()
 *
 * @name f__1423_02A5_002A_41EE
 * @implements 1423:02A5:002A:41EE ()
 *
 * Called From: 0642:03FD:0016:D23B
 */
void f__1423_02A5_002A_41EE()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x2);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x1);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x60A4));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x60A2));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76B2));
	if ((emu_flags.sf != emu_flags.of)) { emu_ip = 0x02CF; emu_last_cs = 0x1423; emu_last_ip = 0x02BB; emu_last_length = 0x002A; emu_last_crc = 0x41EE; emu_call(); return; } // Jump does not resolve
	if (!emu_flags.zf) { f__1423_02C5_000A_FC36(); return; }
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76B0));
	if (emu_flags.cf) { f__1423_02CF_0004_0682(); return; }
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x379E), 0x0);
	if (!emu_flags.zf) { emu_ip = 0x02CF; emu_last_cs = 0x1423; emu_last_ip = 0x02CA; emu_last_length = 0x002A; emu_last_crc = 0x41EE; emu_call(); return; } // Jump does not resolve
	f__1423_04E9_0005_115C(); return;
}

/**
 * Decompiled function f__1423_02C5_000A_FC36()
 *
 * @name f__1423_02C5_000A_FC36
 * @implements 1423:02C5:000A:FC36 ()
 *
 * Called From: 1423:02BD:002A:41EE
 */
void f__1423_02C5_000A_FC36()
{
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x379E), 0x0);
	if (!emu_flags.zf) { emu_ip = 0x02CF; emu_last_cs = 0x1423; emu_last_ip = 0x02CA; emu_last_length = 0x000A; emu_last_crc = 0xFC36; emu_call(); return; } // Jump does not resolve
	f__1423_04E9_0005_115C(); return;
}

/**
 * Decompiled function f__1423_02CF_0004_0682()
 *
 * @name f__1423_02CF_0004_0682
 * @implements 1423:02CF:0004:0682 ()
 *
 * Called From: 1423:02C3:002A:41EE
 */
void f__1423_02CF_0004_0682()
{
	emu_push(emu_cs);
	emu_push(0x02D3); f__1423_0009_0025_41B8();
	f__1423_02D3_000E_3F89();
}

/**
 * Decompiled function f__1423_02D3_000E_3F89()
 *
 * @name f__1423_02D3_000E_3F89
 * @implements 1423:02D3:000E:3F89 ()
 *
 * Called From: 1423:02D3:0004:0682
 */
void f__1423_02D3_000E_3F89()
{
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.zf) { f__1423_02E1_0008_5474(); return; }
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x379E), 0x0);
	if (!emu_flags.zf) { emu_ip = 0x02E1; emu_last_cs = 0x1423; emu_last_ip = 0x02DC; emu_last_length = 0x000E; emu_last_crc = 0x3F89; emu_call(); return; } // Jump does not resolve
	f__1423_04D4_001A_8C63(); return;
}

/**
 * Decompiled function f__1423_02E1_0008_5474()
 *
 * @name f__1423_02E1_0008_5474
 * @implements 1423:02E1:0008:5474 ()
 *
 * Called From: 1423:02D5:000E:3F89
 */
void f__1423_02E1_0008_5474()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x02E9); emu_cs = 0x3483; ovl__3483(1);
	f__1423_02E9_0021_40A7();
}

/**
 * Decompiled function f__1423_02E9_0021_40A7()
 *
 * @name f__1423_02E9_0021_40A7
 * @implements 1423:02E9:0021:40A7 ()
 *
 * Called From: 1423:02E9:0008:5474
 */
void f__1423_02E9_0021_40A7()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x3A34), 0x0);
	emu_movw(&emu_ax.x, 0x2DCE);
	emu_movw(&emu_es, emu_ax.x);
	emu_push(emu_get_memory16(emu_es, 0x00,  0x442));
	emu_push(emu_get_memory16(emu_es, 0x00,  0x440));
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x030A); emu_cs = 0x2B4C; f__2B4C_0002_0029_9CF8();
	f__1423_030A_000C_C60B();
}

/**
 * Decompiled function f__1423_030A_000C_C60B()
 *
 * @name f__1423_030A_000C_C60B
 * @implements 1423:030A:000C:C60B ()
 *
 * Called From: 1423:030A:0021:40A7
 */
void f__1423_030A_000C_C60B()
{
	emu_addws(&emu_sp, 0x8);
	emu_movw(&emu_ax.x, 0xFFFE);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0316); emu_cs = 0x3483; ovl__3483(2);
	f__1423_0316_0009_E72C();
}

/**
 * Decompiled function f__1423_0316_0009_E72C()
 *
 * @name f__1423_0316_0009_E72C
 * @implements 1423:0316:0009:E72C ()
 *
 * Called From: 1423:0316:000C:C60B
 */
void f__1423_0316_0009_E72C()
{
	emu_pop(&emu_cx.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x031F); emu_cs = 0x34E9; ovl__34E9(2);
	f__1423_031F_0005_0CE0();
}

/**
 * Decompiled function f__1423_031F_0005_0CE0()
 *
 * @name f__1423_031F_0005_0CE0
 * @implements 1423:031F:0005:0CE0 ()
 *
 * Called From: 1423:031F:0009:E72C
 */
void f__1423_031F_0005_0CE0()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_cs);
	emu_push(0x0324); f__1423_018B_0015_371F();
	f__1423_0324_0007_3CB6();
}

/**
 * Decompiled function f__1423_0324_0007_3CB6()
 *
 * @name f__1423_0324_0007_3CB6
 * @implements 1423:0324:0007:3CB6 ()
 *
 * Called From: 1423:0324:0005:0CE0
 */
void f__1423_0324_0007_3CB6()
{
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.zf) { f__1423_032B_0009_5F85(); return; }
	emu_ip = 0x0466; emu_last_cs = 0x1423; emu_last_ip = 0x0328; emu_last_length = 0x0007; emu_last_crc = 0x3CB6; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__1423_032B_0009_5F85()
 *
 * @name f__1423_032B_0009_5F85
 * @implements 1423:032B:0009:5F85 ()
 *
 * Called From: 1423:0326:0007:3CB6
 */
void f__1423_032B_0009_5F85()
{
	emu_movw(&emu_ax.x, 0x28);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0334); emu_cs = 0x3483; ovl__3483(2);
	f__1423_0334_000E_2B8B();
}

/**
 * Decompiled function f__1423_0334_000E_2B8B()
 *
 * @name f__1423_0334_000E_2B8B
 * @implements 1423:0334:000E:2B8B ()
 *
 * Called From: 1423:0334:0009:5F85
 */
void f__1423_0334_000E_2B8B()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_ax.x, 0xFFFF);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x52);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0342); emu_cs = 0x0FCB; f__0FCB_005F_001C_147D();
	f__1423_0342_0008_73D0();
}

/**
 * Decompiled function f__1423_0342_0008_73D0()
 *
 * @name f__1423_0342_0008_73D0
 * @implements 1423:0342:0008:73D0 ()
 *
 * Called From: 1423:0342:000E:2B8B
 */
void f__1423_0342_0008_73D0()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x034A); emu_cs = 0x10E4; f__10E4_0273_0029_4307();
	f__1423_034A_0008_F07E();
}

/**
 * Decompiled function f__1423_034A_0008_F07E()
 *
 * @name f__1423_034A_0008_F07E
 * @implements 1423:034A:0008:F07E ()
 *
 * Called From: 1423:034A:0008:73D0
 */
void f__1423_034A_0008_F07E()
{
	emu_addws(&emu_sp, 0x6);
	emu_push(emu_cs); emu_push(0x0352); emu_cs = 0x3511; ovl__3511(5);
	f__1423_0352_0005_1398();
}

/**
 * Decompiled function f__1423_0352_0005_1398()
 *
 * @name f__1423_0352_0005_1398
 * @implements 1423:0352:0005:1398 ()
 *
 * Called From: 1423:0352:0008:F07E
 */
void f__1423_0352_0005_1398()
{
	emu_push(emu_cs); emu_push(0x0357); emu_cs = 0x34B8; ovl__34B8(1);
	f__1423_0357_0029_38DE();
}

/**
 * Decompiled function f__1423_0357_0029_38DE()
 *
 * @name f__1423_0357_0029_38DE
 * @implements 1423:0357:0029:38DE ()
 *
 * Called From: 1423:0357:0005:1398
 */
void f__1423_0357_0029_38DE()
{
	emu_incw(&emu_get_memory16(emu_ds, 0x00,  0x38B2));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3A38));
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x7301));
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x72BF));
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x72C1));
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x72C3));
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x72C5));
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x72C7));
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x72C9));
	emu_push(emu_cs); emu_push(0x0380); emu_cs = 0x3518; ovl__3518(0);
	f__1423_0380_000F_D767();
}

/**
 * Decompiled function f__1423_0380_000F_D767()
 *
 * @name f__1423_0380_000F_D767
 * @implements 1423:0380:000F:D767 ()
 *
 * Called From: 1423:0380:0029:38DE
 */
void f__1423_0380_000F_D767()
{
	emu_addws(&emu_sp, 0x10);
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x38B2), 0x9);
	if (!emu_flags.zf) { f__1423_03BF_0005_11DE(); return; }
	emu_push(emu_cs); emu_push(0x038F); emu_cs = 0x2B6C; emu_ip = 0x04C6; emu_last_cs = 0x1423; emu_last_ip = 0x038A; emu_last_length = 0x000F; emu_last_crc = 0xD767; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__1423_03BF_0005_11DE()
 *
 * @name f__1423_03BF_0005_11DE
 * @implements 1423:03BF:0005:11DE ()
 *
 * Called From: 1423:0388:000F:D767
 */
void f__1423_03BF_0005_11DE()
{
	emu_push(emu_cs); emu_push(0x03C4); emu_cs = 0x2B6C; f__2B6C_0137_0020_17E5();
	f__1423_03C4_0005_1390();
}

/**
 * Decompiled function f__1423_03C4_0005_1390()
 *
 * @name f__1423_03C4_0005_1390
 * @implements 1423:03C4:0005:1390 ()
 *
 * Called From: 1423:03C4:0005:11DE
 */
void f__1423_03C4_0005_1390()
{
	emu_push(emu_cs); emu_push(0x03C9); emu_cs = 0x34AE; ovl__34AE(0);
	f__1423_03C9_0005_143E();
}

/**
 * Decompiled function f__1423_03C9_0005_143E()
 *
 * @name f__1423_03C9_0005_143E
 * @implements 1423:03C9:0005:143E ()
 *
 * Called From: 1423:03C9:0005:1390
 */
void f__1423_03C9_0005_143E()
{
	emu_push(emu_cs); emu_push(0x03CE); emu_cs = 0x2B6C; f__2B6C_0169_001E_97C8();
	f__1423_03CE_0019_DF8E();
}

/**
 * Decompiled function f__1423_03CE_0019_DF8E()
 *
 * @name f__1423_03CE_0019_DF8E
 * @implements 1423:03CE:0019:DF8E ()
 *
 * Called From: 1423:03CE:0005:143E
 */
void f__1423_03CE_0019_DF8E()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_movw(&emu_dx.x, 0x300);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3C34));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3C32));
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x60DF);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x03E7); emu_cs = 0x253D; f__253D_0000_0013_AAD7();
	f__1423_03E7_0010_DED3();
}

/**
 * Decompiled function f__1423_03E7_0010_DED3()
 *
 * @name f__1423_03E7_0010_DED3
 * @implements 1423:03E7:0010:DED3 ()
 *
 * Called From: 1423:03E7:0019:DF8E
 */
void f__1423_03E7_0010_DED3()
{
	emu_addws(&emu_sp, 0xC);
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x38B2));
	emu_push(emu_cs); emu_push(0x03F7); emu_cs = 0x3503; ovl__3503(0);
	f__1423_03F7_0016_6E55();
}

/**
 * Decompiled function f__1423_03F7_0016_6E55()
 *
 * @name f__1423_03F7_0016_6E55
 * @implements 1423:03F7:0016:6E55 ()
 *
 * Called From: 1423:03F7:0010:DED3
 */
void f__1423_03F7_0016_6E55()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x38B0), emu_ax.x);
	emu_movw(&emu_ax.x, 0xF);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3C38));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3C36));
	emu_push(emu_cs); emu_push(0x040D); emu_cs = 0x259E; f__259E_0006_0016_2DFF();
	f__1423_040D_0026_54FB();
}

/**
 * Decompiled function f__1423_040D_0026_54FB()
 *
 * @name f__1423_040D_0026_54FB
 * @implements 1423:040D:0026:54FB ()
 *
 * Called From: 1423:040D:0016:6E55
 */
void f__1423_040D_0026_54FB()
{
	emu_addws(&emu_sp, 0x6);
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x38B2), 0x1);
	if (emu_flags.zf) { f__1423_041E_0015_5D71(); return; }
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x38B2), 0x7);
	if (!emu_flags.zf) { emu_ip = 0x0464; emu_last_cs = 0x1423; emu_last_ip = 0x041C; emu_last_length = 0x0026; emu_last_crc = 0x54FB; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, 0x2DCE);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x440);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x7);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0433); emu_cs = 0x34B8; emu_ip = 0x0467; emu_last_cs = 0x1423; emu_last_ip = 0x042E; emu_last_length = 0x0026; emu_last_crc = 0x54FB; emu_call(); // Jump does not resolve
	f__1423_0433_0008_F0D0();
}

/**
 * Decompiled function f__1423_041E_0015_5D71()
 *
 * @name f__1423_041E_0015_5D71
 * @implements 1423:041E:0015:5D71 ()
 *
 * Called From: 1423:0415:0026:54FB
 */
void f__1423_041E_0015_5D71()
{
	emu_movw(&emu_ax.x, 0x2DCE);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x440);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x7);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0433); emu_cs = 0x34B8; ovl__34B8(4);
	f__1423_0433_0008_F0D0();
}

/**
 * Decompiled function f__1423_0433_0008_F0D0()
 *
 * @name f__1423_0433_0008_F0D0
 * @implements 1423:0433:0008:F0D0 ()
 *
 * Called From: 1423:0433:0015:5D71
 */
void f__1423_0433_0008_F0D0()
{
	emu_addws(&emu_sp, 0x8);
	emu_push(emu_cs); emu_push(0x043B); emu_cs = 0x34DA; ovl__34DA(5);
	f__1423_043B_0009_FE2A();
}

/**
 * Decompiled function f__1423_043B_0009_FE2A()
 *
 * @name f__1423_043B_0009_FE2A
 * @implements 1423:043B:0009:FE2A ()
 *
 * Called From: 1423:043B:0008:F0D0
 */
void f__1423_043B_0009_FE2A()
{
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.zf) { emu_ip = 0x044D; emu_last_cs = 0x1423; emu_last_ip = 0x043D; emu_last_length = 0x0009; emu_last_crc = 0xFE2A; emu_call(); return; } // Jump does not resolve
	emu_push(emu_cs); emu_push(0x0444); emu_cs = 0x3500; ovl__3500(0);
	f__1423_0444_0008_50F6();
}

/**
 * Decompiled function f__1423_0444_0008_50F6()
 *
 * @name f__1423_0444_0008_50F6
 * @implements 1423:0444:0008:50F6 ()
 *
 * Called From: 1423:0444:0009:FE2A
 */
void f__1423_0444_0008_50F6()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x044C); emu_cs = 0x01F7; f__01F7_0377_000D_71AA();
	emu_unknown_call();
}

/**
 * Decompiled function f__1423_04D4_001A_8C63()
 *
 * @name f__1423_04D4_001A_8C63
 * @implements 1423:04D4:001A:8C63 ()
 *
 * Called From: 1423:02DE:000E:3F89
 */
void f__1423_04D4_001A_8C63()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76B2));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76B0));
	emu_addw(&emu_dx.x, 0x12C);
	emu_adcw(&emu_ax.x, 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x60A4), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x60A2), emu_dx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	f__1423_04EE_0004_0F7A(); return;
}

/**
 * Decompiled function f__1423_04E9_0005_115C()
 *
 * @name f__1423_04E9_0005_115C
 * @implements 1423:04E9:0005:115C ()
 *
 * Called From: 1423:02CC:002A:41EE
 * Called From: 1423:02CC:000A:FC36
 */
void f__1423_04E9_0005_115C()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	f__1423_04EE_0004_0F7A(); return;
}

/**
 * Decompiled function f__1423_04EE_0004_0F7A()
 *
 * @name f__1423_04EE_0004_0F7A
 * @implements 1423:04EE:0004:0F7A ()
 *
 * Called From: 1423:04EC:001A:8C63
 * Called From: 1423:04EC:0005:115C
 */
void f__1423_04EE_0004_0F7A()
{
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__1423_08CD_0012_4CA9()
 *
 * @name f__1423_08CD_0012_4CA9
 * @implements 1423:08CD:0012:4CA9 ()
 *
 * Called From: 1A34:2A33:0036:D0C2
 * Called From: B4B5:05CF:001F:076F
 * Called From: B4CD:027A:000F:4D04
 * Called From: B4CD:1310:0008:7B74
 * Called From: B4CD:1479:0008:7B74
 */
void f__1423_08CD_0012_4CA9()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0xE);
	emu_push(emu_si);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (!emu_flags.zf) { f__1423_08DF_0008_DDA0(); return; }
	f__1423_0BC7_0005_04BA(); return;
}

/**
 * Decompiled function f__1423_08DF_0008_DDA0()
 *
 * @name f__1423_08DF_0008_DDA0
 * @implements 1423:08DF:0008:DDA0 ()
 *
 * Called From: 1423:08DA:0012:4CA9
 */
void f__1423_08DF_0008_DDA0()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_cs); emu_push(0x08E7); emu_cs = 0x10BE; f__10BE_01AB_002F_5CC7();
	f__1423_08E7_004C_6406();
}

/**
 * Decompiled function f__1423_08E7_004C_6406()
 *
 * @name f__1423_08E7_004C_6406
 * @implements 1423:08E7:004C:6406 ()
 *
 * Called From: 1423:08E7:0008:DDA0
 */
void f__1423_08E7_004C_6406()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax.x);
	emu_movw(&emu_ax.x, 0x1);
	emu_movb(&emu_cx.l, emu_get_memory8(emu_ss, emu_bp,  0xA));
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0xA), 0x1);
	if (!emu_flags.zf) { f__1423_090D_0026_2BB5(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x2), 0x19);
	if (emu_flags.zf) { emu_ip = 0x090D; emu_last_cs = 0x1423; emu_last_ip = 0x0907; emu_last_length = 0x004C; emu_last_crc = 0x6406; emu_call(); return; } // Jump does not resolve
	emu_orws(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x8);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x9));
	emu_movb(&emu_ax.h, 0x0);
	emu_testw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xA));
	if (emu_flags.zf) { f__1423_0933_002A_D89A(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), 0x8);
	if (emu_flags.zf) { f__1423_0933_002A_D89A(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ss, emu_bp, -0xA));
	emu_orb(&emu_get_memory8(emu_es, emu_bx.x,  0x9), emu_ax.l);
	f__1423_0BC7_0005_04BA(); return;
}

/**
 * Decompiled function f__1423_090D_0026_2BB5()
 *
 * @name f__1423_090D_0026_2BB5
 * @implements 1423:090D:0026:2BB5 ()
 *
 * Called From: 1423:08FD:004C:6406
 */
void f__1423_090D_0026_2BB5()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x9));
	emu_movb(&emu_ax.h, 0x0);
	emu_testw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xA));
	if (emu_flags.zf) { f__1423_0933_002A_D89A(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), 0x8);
	if (emu_flags.zf) { f__1423_0933_002A_D89A(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ss, emu_bp, -0xA));
	emu_orb(&emu_get_memory8(emu_es, emu_bx.x,  0x9), emu_ax.l);
	f__1423_0BC7_0005_04BA(); return;
}

/**
 * Decompiled function f__1423_0933_002A_D89A()
 *
 * @name f__1423_0933_002A_D89A
 * @implements 1423:0933:002A:D89A ()
 *
 * Called From: 1423:0919:004C:6406
 * Called From: 1423:0919:0026:2BB5
 * Called From: 1423:0924:0026:2BB5
 * Called From: 1423:0924:004C:6406
 */
void f__1423_0933_002A_D89A()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x2));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_movw(&emu_dx.x, 0x5A);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_dx.x, 0x2D07);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_es, emu_dx.x);
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0x36), 0x8000);
	if (!emu_flags.zf) { f__1423_095D_001C_1862(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x2), 0x19);
	if (emu_flags.zf) { emu_ip = 0x095D; emu_last_cs = 0x1423; emu_last_ip = 0x0958; emu_last_length = 0x002A; emu_last_crc = 0xD89A; emu_call(); return; } // Jump does not resolve
	emu_ip = 0x0BC7; emu_last_cs = 0x1423; emu_last_ip = 0x095A; emu_last_length = 0x002A; emu_last_crc = 0xD89A; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__1423_095D_001C_1862()
 *
 * @name f__1423_095D_001C_1862
 * @implements 1423:095D:001C:1862 ()
 *
 * Called From: 1423:094E:002A:D89A
 */
void f__1423_095D_001C_1862()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x9));
	emu_movb(&emu_ax.h, 0x0);
	emu_testw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xA));
	if (!emu_flags.zf) { f__1423_0997_002A_E88A(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x0979); emu_cs = 0x1A34; f__1A34_3623_0010_3F68();
	f__1423_0979_0008_76E6();
}

/**
 * Decompiled function f__1423_0979_0008_76E6()
 *
 * @name f__1423_0979_0008_76E6
 * @implements 1423:0979:0008:76E6 ()
 *
 * Called From: 1423:0979:001C:1862
 */
void f__1423_0979_0008_76E6()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x0981); f__1423_0F34_0017_4318();
	f__1423_0981_000F_9FE7();
}

/**
 * Decompiled function f__1423_0981_000F_9FE7()
 *
 * @name f__1423_0981_000F_9FE7
 * @implements 1423:0981:000F:9FE7 ()
 *
 * Called From: 1423:0981:0008:76E6
 */
void f__1423_0981_000F_9FE7()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (emu_flags.zf) { f__1423_0990_0031_A932(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_incw(&emu_get_memory16(emu_es, emu_bx.x,  0xC));
	f__1423_0997_002A_E88A(); return;
}

/**
 * Decompiled function f__1423_0990_0031_A932()
 *
 * @name f__1423_0990_0031_A932
 * @implements 1423:0990:0031:A932 ()
 *
 * Called From: 1423:0985:000F:9FE7
 */
void f__1423_0990_0031_A932()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_incw(&emu_get_memory16(emu_es, emu_bx.x,  0xA));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x2));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_movw(&emu_dx.x, 0x5A);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_dx.x, 0x2D07);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_es, emu_dx.x);
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x3C), 0x4);
	if (emu_flags.zf) { emu_ip = 0x09EF; emu_last_cs = 0x1423; emu_last_ip = 0x09B1; emu_last_length = 0x0031; emu_last_crc = 0xA932; emu_call(); return; } // Jump does not resolve
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x09C1); emu_cs = 0x1A34; f__1A34_3623_0010_3F68();
	f__1423_09C1_0008_7586();
}

/**
 * Decompiled function f__1423_0997_002A_E88A()
 *
 * @name f__1423_0997_002A_E88A
 * @implements 1423:0997:002A:E88A ()
 *
 * Called From: 1423:0969:001C:1862
 * Called From: 1423:098E:000F:9FE7
 */
void f__1423_0997_002A_E88A()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x2));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_movw(&emu_dx.x, 0x5A);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_dx.x, 0x2D07);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_es, emu_dx.x);
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x3C), 0x4);
	if (emu_flags.zf) { emu_ip = 0x09EF; emu_last_cs = 0x1423; emu_last_ip = 0x09B1; emu_last_length = 0x002A; emu_last_crc = 0xE88A; emu_call(); return; } // Jump does not resolve
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x09C1); emu_cs = 0x1A34; f__1A34_3623_0010_3F68();
	f__1423_09C1_0008_7586();
}

/**
 * Decompiled function f__1423_09C1_0008_7586()
 *
 * @name f__1423_09C1_0008_7586
 * @implements 1423:09C1:0008:7586 ()
 *
 * Called From: 1423:09C1:002A:E88A
 * Called From: 1423:09C1:0031:A932
 */
void f__1423_09C1_0008_7586()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x09C9); f__1423_0F34_0017_4318();
	f__1423_09C9_001C_DAFD();
}

/**
 * Decompiled function f__1423_09C9_001C_DAFD()
 *
 * @name f__1423_09C9_001C_DAFD
 * @implements 1423:09C9:001C:DAFD ()
 *
 * Called From: 1423:09C9:0008:7586
 */
void f__1423_09C9_001C_DAFD()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.zf) { f__1423_09EF_000C_C2E8(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_orws(&emu_get_memory16(emu_es, emu_bx.x,  0x4), 0x8);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x8));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x09E5); emu_cs = 0x10BE; f__10BE_01AB_002F_5CC7();
	f__1423_09E5_0016_4FD8();
}

/**
 * Decompiled function f__1423_09E5_0016_4FD8()
 *
 * @name f__1423_09E5_0016_4FD8
 * @implements 1423:09E5:0016:4FD8 ()
 *
 * Called From: 1423:09E5:001C:DAFD
 */
void f__1423_09E5_0016_4FD8()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_es, emu_dx.x);
	emu_orws(&emu_get_memory16(emu_es, emu_bx.x,  0x4), 0x8);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3A38));
	if (emu_flags.zf) { f__1423_09FB_000A_6BA8(); return; }
	emu_ip = 0x0B61; emu_last_cs = 0x1423; emu_last_ip = 0x09F8; emu_last_length = 0x0016; emu_last_crc = 0x4FD8; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__1423_09EF_000C_C2E8()
 *
 * @name f__1423_09EF_000C_C2E8
 * @implements 1423:09EF:000C:C2E8 ()
 *
 * Called From: 1423:09CD:001C:DAFD
 */
void f__1423_09EF_000C_C2E8()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3A38));
	if (emu_flags.zf) { f__1423_09FB_000A_6BA8(); return; }
	f__1423_0B61_0011_711A(); return;
}

/**
 * Decompiled function f__1423_09FB_000A_6BA8()
 *
 * @name f__1423_09FB_000A_6BA8
 * @implements 1423:09FB:000A:6BA8 ()
 *
 * Called From: 1423:09F6:000C:C2E8
 * Called From: 1423:09F6:0016:4FD8
 */
void f__1423_09FB_000A_6BA8()
{
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x3A0E), 0x0);
	if (!emu_flags.zf) { f__1423_0A05_000F_45D4(); return; }
	f__1423_0B61_0011_711A(); return;
}

/**
 * Decompiled function f__1423_0A05_000F_45D4()
 *
 * @name f__1423_0A05_000F_45D4
 * @implements 1423:0A05:000F:45D4 ()
 *
 * Called From: 1423:0A00:000A:6BA8
 */
void f__1423_0A05_000F_45D4()
{
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3A38));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x0A14); emu_cs = 0x1A34; f__1A34_3623_0010_3F68();
	f__1423_0A14_0008_744A();
}

/**
 * Decompiled function f__1423_0A14_0008_744A()
 *
 * @name f__1423_0A14_0008_744A
 * @implements 1423:0A14:0008:744A ()
 *
 * Called From: 1423:0A14:000F:45D4
 */
void f__1423_0A14_0008_744A()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x0A1C); f__1423_0F34_0017_4318();
	f__1423_0A1C_0013_FA2D();
}

/**
 * Decompiled function f__1423_0A1C_0013_FA2D()
 *
 * @name f__1423_0A1C_0013_FA2D
 * @implements 1423:0A1C:0013:FA2D ()
 *
 * Called From: 1423:0A1C:0008:744A
 */
void f__1423_0A1C_0013_FA2D()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (emu_flags.zf) { f__1423_0A2F_002B_8873(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x2), 0x19);
	if (emu_flags.zf) { emu_ip = 0x0A2F; emu_last_cs = 0x1423; emu_last_ip = 0x0A2A; emu_last_length = 0x0013; emu_last_crc = 0xFA2D; emu_call(); return; } // Jump does not resolve
	f__1423_0B61_0011_711A(); return;
}

/**
 * Decompiled function f__1423_0A2F_002B_8873()
 *
 * @name f__1423_0A2F_002B_8873
 * @implements 1423:0A2F:002B:8873 ()
 *
 * Called From: 1423:0A20:0013:FA2D
 */
void f__1423_0A2F_002B_8873()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x2), 0x19);
	if (!emu_flags.zf) { f__1423_0A7E_000E_4875(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x3A3A));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x26), 0x0);
	if (!emu_flags.zf) { emu_ip = 0x0A7B; emu_last_cs = 0x1423; emu_last_ip = 0x0A42; emu_last_length = 0x002B; emu_last_crc = 0x8873; emu_call(); return; } // Jump does not resolve
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x3E52), 0x0);
	if (!emu_flags.zf) { emu_ip = 0x0A51; emu_last_cs = 0x1423; emu_last_ip = 0x0A49; emu_last_length = 0x002B; emu_last_crc = 0x8873; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x3E52), 0x1);
	emu_movw(&emu_ax.x, 0x25);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0A5A); emu_cs = 0x3483; emu_ip = 0x0A84; emu_last_cs = 0x1423; emu_last_ip = 0x0A55; emu_last_length = 0x002B; emu_last_crc = 0x8873; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__1423_0A7E_000E_4875()
 *
 * @name f__1423_0A7E_000E_4875
 * @implements 1423:0A7E:000E:4875 ()
 *
 * Called From: 1423:0A37:002B:8873
 */
void f__1423_0A7E_000E_4875()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x3A3A));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x24), 0x0);
	if (emu_flags.zf) { f__1423_0A8C_0020_5E86(); return; }
	f__1423_0B3B_000E_162D(); return;
}

/**
 * Decompiled function f__1423_0A8C_0020_5E86()
 *
 * @name f__1423_0A8C_0020_5E86
 * @implements 1423:0A8C:0020:5E86 ()
 *
 * Called From: 1423:0A87:000E:4875
 */
void f__1423_0A8C_0020_5E86()
{
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x3E52), 0x0);
	if (!emu_flags.zf) { emu_ip = 0x0A99; emu_last_cs = 0x1423; emu_last_ip = 0x0A91; emu_last_length = 0x0020; emu_last_crc = 0x5E86; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x3E52), 0x1);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x2), 0x6);
	if (!emu_flags.zf) { f__1423_0AB0_001A_7FDE(); return; }
	emu_movw(&emu_ax.x, 0xC);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0AAC); emu_cs = 0x3483; emu_ip = 0x0AD6; emu_last_cs = 0x1423; emu_last_ip = 0x0AA7; emu_last_length = 0x0020; emu_last_crc = 0x5E86; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__1423_0AB0_001A_7FDE()
 *
 * @name f__1423_0AB0_001A_7FDE
 * @implements 1423:0AB0:001A:7FDE ()
 *
 * Called From: 1423:0AA1:0020:5E86
 */
void f__1423_0AB0_001A_7FDE()
{
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x38B0), 0x3);
	if (!emu_flags.cf) { emu_ip = 0x0B1F; emu_last_cs = 0x1423; emu_last_ip = 0x0AB5; emu_last_length = 0x001A; emu_last_crc = 0x7FDE; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, 0x8);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3A38));
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_cs); emu_push(0x0ACA); emu_cs = 0x1082; f__1082_00FD_003A_94E2();
	f__1423_0ACA_002C_99A1();
}

/**
 * Decompiled function f__1423_0ACA_002C_99A1()
 *
 * @name f__1423_0ACA_002C_99A1
 * @implements 1423:0ACA:002C:99A1 ()
 *
 * Called From: 1423:0ACA:001A:7FDE
 */
void f__1423_0ACA_002C_99A1()
{
	emu_addws(&emu_sp, 0x8);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xC));
	if (emu_flags.zf) { emu_ip = 0x0B13; emu_last_cs = 0x1423; emu_last_ip = 0x0AD9; emu_last_length = 0x002C; emu_last_crc = 0x99A1; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xA));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xA));
	emu_push(emu_cs); emu_push(0x0AF6); emu_cs = 0x0F3F; f__0F3F_0125_000D_0828();
	f__1423_0AF6_0009_C5ED();
}

/**
 * Decompiled function f__1423_0AF6_0009_C5ED()
 *
 * @name f__1423_0AF6_0009_C5ED
 * @implements 1423:0AF6:0009:C5ED ()
 *
 * Called From: 1423:0AF6:002C:99A1
 */
void f__1423_0AF6_0009_C5ED()
{
	emu_addws(&emu_sp, 0x8);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0AFF); emu_cs = 0x34CD; ovl__34CD(19);
	f__1423_0AFF_0014_7B46();
}

/**
 * Decompiled function f__1423_0AFF_0014_7B46()
 *
 * @name f__1423_0AFF_0014_7B46
 * @implements 1423:0AFF:0014:7B46 ()
 *
 * Called From: 1423:0AFF:0009:C5ED
 */
void f__1423_0AFF_0014_7B46()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_si, emu_ax.x);
	emu_incw(&emu_si);
	emu_andws(&emu_si, 0x7);
	emu_movw(&emu_ax.x, emu_si);
	emu_shrw(&emu_ax.x, 0x1);
	emu_movw(&emu_si, emu_ax.x);
	emu_movw(&emu_ax.x, emu_si);
	emu_addw(&emu_ax.x, 0x2);
	f__1423_0B16_0006_0784(); return;
}

/**
 * Decompiled function f__1423_0B16_0006_0784()
 *
 * @name f__1423_0B16_0006_0784
 * @implements 1423:0B16:0006:0784 ()
 *
 * Called From: 1423:0B11:0014:7B46
 */
void f__1423_0B16_0006_0784()
{
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0B1C); emu_cs = 0x3483; ovl__3483(2);
	f__1423_0B1C_0003_0140();
}

/**
 * Decompiled function f__1423_0B1C_0003_0140()
 *
 * @name f__1423_0B1C_0003_0140
 * @implements 1423:0B1C:0003:0140 ()
 *
 * Called From: 1423:0B1C:0006:0784
 */
void f__1423_0B1C_0003_0140()
{
	emu_pop(&emu_cx.x);
	f__1423_0B31_0018_D1E9(); return;
}

/**
 * Decompiled function f__1423_0B31_0018_D1E9()
 *
 * @name f__1423_0B31_0018_D1E9
 * @implements 1423:0B31:0018:D1E9 ()
 *
 * Called From: 1423:0B1D:0003:0140
 */
void f__1423_0B31_0018_D1E9()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x3A3A));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x24), 0x8);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x6F));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0B49); emu_cs = 0x104B; f__104B_0354_0023_3236();
	f__1423_0B49_0029_FF61();
}

/**
 * Decompiled function f__1423_0B3B_000E_162D()
 *
 * @name f__1423_0B3B_000E_162D
 * @implements 1423:0B3B:000E:162D ()
 *
 * Called From: 1423:0A89:000E:4875
 */
void f__1423_0B3B_000E_162D()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x6F));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0B49); emu_cs = 0x104B; f__104B_0354_0023_3236();
	f__1423_0B49_0029_FF61();
}

/**
 * Decompiled function f__1423_0B49_0029_FF61()
 *
 * @name f__1423_0B49_0029_FF61
 * @implements 1423:0B49:0029:FF61 ()
 *
 * Called From: 1423:0B49:0018:D1E9
 * Called From: 1423:0B49:000E:162D
 */
void f__1423_0B49_0029_FF61()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_flags.zf) { emu_ip = 0x0B61; emu_last_cs = 0x1423; emu_last_ip = 0x0B56; emu_last_length = 0x0029; emu_last_crc = 0xFF61; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x32), 0x1);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x8));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x0B72); f__1423_0F34_0017_4318();
	f__1423_0B72_001F_9606();
}

/**
 * Decompiled function f__1423_0B61_0011_711A()
 *
 * @name f__1423_0B61_0011_711A
 * @implements 1423:0B61:0011:711A ()
 *
 * Called From: 1423:09F8:000C:C2E8
 * Called From: 1423:0A02:000A:6BA8
 * Called From: 1423:0A2C:0013:FA2D
 */
void f__1423_0B61_0011_711A()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x8));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x0B72); f__1423_0F34_0017_4318();
	f__1423_0B72_001F_9606();
}

/**
 * Decompiled function f__1423_0B72_001F_9606()
 *
 * @name f__1423_0B72_001F_9606
 * @implements 1423:0B72:001F:9606 ()
 *
 * Called From: 1423:0B72:0011:711A
 * Called From: 1423:0B72:0029:FF61
 */
void f__1423_0B72_001F_9606()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.zf) { f__1423_0B94_0029_D179(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x4F), 0x8);
	if (!emu_flags.zf) { f__1423_0B94_0029_D179(); return; }
	emu_movw(&emu_ax.x, 0xB);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x0B91); emu_cs = 0x176C; f__176C_000E_000E_8C63();
	f__1423_0B91_002C_D977();
}

/**
 * Decompiled function f__1423_0B91_002C_D977()
 *
 * @name f__1423_0B91_002C_D977
 * @implements 1423:0B91:002C:D977 ()
 *
 * Called From: 1423:0B91:001F:9606
 */
void f__1423_0B91_002C_D977()
{
	emu_addws(&emu_sp, 0x6);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x8));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3A38));
	if (emu_flags.zf) { emu_ip = 0x0BB3; emu_last_cs = 0x1423; emu_last_ip = 0x0BA0; emu_last_length = 0x002C; emu_last_crc = 0xD977; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x8), 0x3);
	if (!emu_flags.zf) { f__1423_0BBD_000F_6906(); return; }
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x3A38), 0x1);
	if (!emu_flags.zf) { emu_ip = 0x0BBD; emu_last_cs = 0x1423; emu_last_ip = 0x0BB1; emu_last_length = 0x002C; emu_last_crc = 0xD977; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x9), 0xFF);
	emu_ip = 0x0BC7; emu_last_cs = 0x1423; emu_last_ip = 0x0BBB; emu_last_length = 0x002C; emu_last_crc = 0xD977; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__1423_0B94_0029_D179()
 *
 * @name f__1423_0B94_0029_D179
 * @implements 1423:0B94:0029:D179 ()
 *
 * Called From: 1423:0B76:001F:9606
 * Called From: 1423:0B80:001F:9606
 */
void f__1423_0B94_0029_D179()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x8));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3A38));
	if (emu_flags.zf) { f__1423_0BB3_000A_84B3(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x8), 0x3);
	if (!emu_flags.zf) { f__1423_0BBD_000F_6906(); return; }
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x3A38), 0x1);
	if (!emu_flags.zf) { emu_ip = 0x0BBD; emu_last_cs = 0x1423; emu_last_ip = 0x0BB1; emu_last_length = 0x0029; emu_last_crc = 0xD179; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x9), 0xFF);
	emu_ip = 0x0BC7; emu_last_cs = 0x1423; emu_last_ip = 0x0BBB; emu_last_length = 0x0029; emu_last_crc = 0xD179; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__1423_0BB3_000A_84B3()
 *
 * @name f__1423_0BB3_000A_84B3
 * @implements 1423:0BB3:000A:84B3 ()
 *
 * Called From: 1423:0BA0:0029:D179
 */
void f__1423_0BB3_000A_84B3()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x9), 0xFF);
	f__1423_0BC7_0005_04BA(); return;
}

/**
 * Decompiled function f__1423_0BBD_000F_6906()
 *
 * @name f__1423_0BBD_000F_6906
 * @implements 1423:0BBD:000F:6906 ()
 *
 * Called From: 1423:0BAA:0029:D179
 * Called From: 1423:0BAA:002C:D977
 */
void f__1423_0BBD_000F_6906()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ss, emu_bp, -0xA));
	emu_orb(&emu_get_memory8(emu_es, emu_bx.x,  0x9), emu_ax.l);
	emu_pop(&emu_si);
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__1423_0BC7_0005_04BA()
 *
 * @name f__1423_0BC7_0005_04BA
 * @implements 1423:0BC7:0005:04BA ()
 *
 * Called From: 1423:08DC:0012:4CA9
 * Called From: 1423:0930:0026:2BB5
 * Called From: 1423:0930:004C:6406
 * Called From: 1423:0BBB:000A:84B3
 */
void f__1423_0BC7_0005_04BA()
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
 * Decompiled function f__1423_0BCC_0012_0D48()
 *
 * @name f__1423_0BCC_0012_0D48
 * @implements 1423:0BCC:0012:0D48 ()
 *
 * Called From: 176C:1349:0019:E370
 * Called From: 176C:1349:0011:2239
 * Called From: 1A34:1150:0012:C901
 * Called From: 1A34:2B0E:0019:D384
 * Called From: B4CD:028B:000F:4D0C
 */
void f__1423_0BCC_0012_0D48()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x4);
	emu_push(emu_si);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (!emu_flags.zf) { f__1423_0BDE_000D_B854(); return; }
	emu_ip = 0x0C6F; emu_last_cs = 0x1423; emu_last_ip = 0x0BDB; emu_last_length = 0x0012; emu_last_crc = 0x0D48; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__1423_0BDE_000D_B854()
 *
 * @name f__1423_0BDE_000D_B854
 * @implements 1423:0BDE:000D:B854 ()
 *
 * Called From: 1423:0BD9:0012:0D48
 */
void f__1423_0BDE_000D_B854()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x9), 0x0);
	if (!emu_flags.zf) { f__1423_0BEB_000B_0F32(); return; }
	f__1423_0C6F_0005_04BA(); return;
}

/**
 * Decompiled function f__1423_0BEB_000B_0F32()
 *
 * @name f__1423_0BEB_000B_0F32
 * @implements 1423:0BEB:000B:0F32 ()
 *
 * Called From: 1423:0BE6:000D:B854
 */
void f__1423_0BEB_000B_0F32()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_cs); emu_push(0x0BF6); emu_cs = 0x10BE; f__10BE_01E2_0027_C454();
	f__1423_0BF6_0002_0362();
}

/**
 * Decompiled function f__1423_0BF6_0002_0362()
 *
 * @name f__1423_0BF6_0002_0362
 * @implements 1423:0BF6:0002:0362 ()
 *
 * Called From: 1423:0BF6:000B:0F32
 */
void f__1423_0BF6_0002_0362()
{
	f__1423_0C5F_0015_A8A1(); return;
}

/**
 * Decompiled function f__1423_0BF8_0029_82DC()
 *
 * @name f__1423_0BF8_0029_82DC
 * @implements 1423:0BF8:0029:82DC ()
 *
 * Called From: 1423:0C6D:0015:A8A1
 */
void f__1423_0BF8_0029_82DC()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x9));
	emu_movb(&emu_ax.h, 0x0);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_cx.l, emu_get_memory8(emu_es, emu_bx.x,  0x0));
	emu_movw(&emu_dx.x, 0x1);
	emu_shlw(&emu_dx.x, emu_cx.l);
	emu_testw(&emu_ax.x, emu_dx.x);
	if (emu_flags.zf) { f__1423_0C54_000B_01FA(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x0C21); emu_cs = 0x1A34; f__1A34_3623_0010_3F68();
	f__1423_0C21_0008_740A();
}

/**
 * Decompiled function f__1423_0C21_0008_740A()
 *
 * @name f__1423_0C21_0008_740A
 * @implements 1423:0C21:0008:740A ()
 *
 * Called From: 1423:0C21:0029:82DC
 */
void f__1423_0C21_0008_740A()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x0C29); f__1423_0F34_0017_4318();
	f__1423_0C29_000F_9557();
}

/**
 * Decompiled function f__1423_0C29_000F_9557()
 *
 * @name f__1423_0C29_000F_9557
 * @implements 1423:0C29:000F:9557 ()
 *
 * Called From: 1423:0C29:0008:740A
 */
void f__1423_0C29_000F_9557()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.zf) { f__1423_0C38_0027_BBCC(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_decw(&emu_get_memory16(emu_es, emu_bx.x,  0xA));
	f__1423_0C3F_0020_D570(); return;
}

/**
 * Decompiled function f__1423_0C38_0027_BBCC()
 *
 * @name f__1423_0C38_0027_BBCC
 * @implements 1423:0C38:0027:BBCC ()
 *
 * Called From: 1423:0C2D:000F:9557
 */
void f__1423_0C38_0027_BBCC()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_decw(&emu_get_memory16(emu_es, emu_bx.x,  0xC));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_es);
	emu_lfp(&emu_es, &emu_si, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_cx.l, emu_get_memory8(emu_es, emu_si,  0x0));
	emu_movb(&emu_ax.l, 0x1);
	emu_shlb(&emu_ax.l, emu_cx.l);
	emu_notb(&emu_ax.l, emu_ax.l);
	emu_pop(&emu_es);
	emu_andb(&emu_get_memory8(emu_es, emu_bx.x,  0x9), emu_ax.l);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_cs); emu_push(0x0C5F); emu_cs = 0x10BE; f__10BE_020F_004E_EE3E();
	f__1423_0C5F_0015_A8A1();
}

/**
 * Decompiled function f__1423_0C3F_0020_D570()
 *
 * @name f__1423_0C3F_0020_D570
 * @implements 1423:0C3F:0020:D570 ()
 *
 * Called From: 1423:0C36:000F:9557
 */
void f__1423_0C3F_0020_D570()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_es);
	emu_lfp(&emu_es, &emu_si, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_cx.l, emu_get_memory8(emu_es, emu_si,  0x0));
	emu_movb(&emu_ax.l, 0x1);
	emu_shlb(&emu_ax.l, emu_cx.l);
	emu_notb(&emu_ax.l, emu_ax.l);
	emu_pop(&emu_es);
	emu_andb(&emu_get_memory8(emu_es, emu_bx.x,  0x9), emu_ax.l);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_cs); emu_push(0x0C5F); emu_cs = 0x10BE; f__10BE_020F_004E_EE3E();
	f__1423_0C5F_0015_A8A1();
}

/**
 * Decompiled function f__1423_0C54_000B_01FA()
 *
 * @name f__1423_0C54_000B_01FA
 * @implements 1423:0C54:000B:01FA ()
 *
 * Called From: 1423:0C0E:0029:82DC
 */
void f__1423_0C54_000B_01FA()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_cs); emu_push(0x0C5F); emu_cs = 0x10BE; f__10BE_020F_004E_EE3E();
	f__1423_0C5F_0015_A8A1();
}

/**
 * Decompiled function f__1423_0C5F_0015_A8A1()
 *
 * @name f__1423_0C5F_0015_A8A1
 * @implements 1423:0C5F:0015:A8A1 ()
 *
 * Called From: 1423:0BF6:0002:0362
 * Called From: 1423:0C5F:000B:01FA
 * Called From: 1423:0C5F:0027:BBCC
 * Called From: 1423:0C5F:0020:D570
 */
void f__1423_0C5F_0015_A8A1()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (!emu_flags.zf) { f__1423_0BF8_0029_82DC(); return; }
	emu_pop(&emu_si);
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__1423_0C6F_0005_04BA()
 *
 * @name f__1423_0C6F_0005_04BA
 * @implements 1423:0C6F:0005:04BA ()
 *
 * Called From: 1423:0BE8:000D:B854
 */
void f__1423_0C6F_0005_04BA()
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
 * Decompiled function f__1423_0DC3_0029_5F72()
 *
 * @name f__1423_0DC3_0029_5F72
 * @implements 1423:0DC3:0029:5F72 ()
 *
 * Called From: B511:032E:0017:A169
 */
void f__1423_0DC3_0029_5F72()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x6);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_di, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x38BC));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x38BC), 0x0);
	emu_xorw(&emu_si, emu_si);
	emu_movw(&emu_ax.x, 0xFFFF);
	emu_push(emu_ax.x);
	emu_push(emu_di);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_cs); emu_push(0x0DEC); emu_cs = 0x1082; f__1082_00FD_003A_94E2();
	f__1423_0DEC_0005_1F80();
}

/**
 * Decompiled function f__1423_0DEC_0005_1F80()
 *
 * @name f__1423_0DEC_0005_1F80
 * @implements 1423:0DEC:0005:1F80 ()
 *
 * Called From: 1423:0DEC:0029:5F72
 */
void f__1423_0DEC_0005_1F80()
{
	emu_addws(&emu_sp, 0x8);
	f__1423_0E17_0018_AA9F(); return;
}

/**
 * Decompiled function f__1423_0DF1_0024_9BC3()
 *
 * @name f__1423_0DF1_0024_9BC3
 * @implements 1423:0DF1:0024:9BC3 ()
 *
 * Called From: 1423:0E23:0018:AA9F
 */
void f__1423_0DF1_0024_9BC3()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x2));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_movw(&emu_dx.x, 0x60);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_dx.x, 0x2C94);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_es, emu_dx.x);
	emu_addw(&emu_si, emu_get_memory16(emu_es, emu_bx.x,  0x40));
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_cs); emu_push(0x0E15); emu_cs = 0x1082; f__1082_013D_0038_03DE();
	f__1423_0E15_001A_7C9E();
}

/**
 * Decompiled function f__1423_0E15_001A_7C9E()
 *
 * @name f__1423_0E15_001A_7C9E
 * @implements 1423:0E15:001A:7C9E ()
 *
 * Called From: 1423:0E15:0024:9BC3
 */
void f__1423_0E15_001A_7C9E()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (!emu_flags.zf) { emu_ip = 0x0DF1; emu_last_cs = 0x1423; emu_last_ip = 0x0E23; emu_last_length = 0x001A; emu_last_crc = 0x7C9E; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_si, 0x7D00);
	if (!emu_flags.cf) { emu_ip = 0x0E2F; emu_last_cs = 0x1423; emu_last_ip = 0x0E29; emu_last_length = 0x001A; emu_last_crc = 0x7C9E; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_si);
	f__1423_0E32_0008_FDE0(); return;
}

/**
 * Decompiled function f__1423_0E17_0018_AA9F()
 *
 * @name f__1423_0E17_0018_AA9F
 * @implements 1423:0E17:0018:AA9F ()
 *
 * Called From: 1423:0DEF:0005:1F80
 */
void f__1423_0E17_0018_AA9F()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (!emu_flags.zf) { f__1423_0DF1_0024_9BC3(); return; }
	emu_cmpw(&emu_si, 0x7D00);
	if (!emu_flags.cf) { emu_ip = 0x0E2F; emu_last_cs = 0x1423; emu_last_ip = 0x0E29; emu_last_length = 0x0018; emu_last_crc = 0xAA9F; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_si);
	f__1423_0E32_0008_FDE0(); return;
}

/**
 * Decompiled function f__1423_0E32_0008_FDE0()
 *
 * @name f__1423_0E32_0008_FDE0
 * @implements 1423:0E32:0008:FDE0 ()
 *
 * Called From: 1423:0E2D:001A:7C9E
 * Called From: 1423:0E2D:0018:AA9F
 */
void f__1423_0E32_0008_FDE0()
{
	emu_movw(&emu_si, emu_ax.x);
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x0E3A); emu_cs = 0x10BE; f__10BE_01AB_002F_5CC7();
	f__1423_0E3A_0015_5BE3();
}

/**
 * Decompiled function f__1423_0E3A_0015_5BE3()
 *
 * @name f__1423_0E3A_0015_5BE3
 * @implements 1423:0E3A:0015:5BE3 ()
 *
 * Called From: 1423:0E3A:0008:FDE0
 */
void f__1423_0E3A_0015_5BE3()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_es, emu_dx.x);
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x14), emu_si);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x38BC), emu_ax.x);
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
 * Decompiled function f__1423_0E4F_0010_5595()
 *
 * @name f__1423_0E4F_0010_5595
 * @implements 1423:0E4F:0010:5595 ()
 *
 * Called From: 06F7:0362:000E:5153
 */
void f__1423_0E4F_0010_5595()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x8);
	emu_push(emu_si);
	emu_movw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x0E5F); emu_cs = 0x10BE; f__10BE_01AB_002F_5CC7();
	f__1423_0E5F_001D_7DDA();
}

/**
 * Decompiled function f__1423_0E5F_001D_7DDA()
 *
 * @name f__1423_0E5F_001D_7DDA
 * @implements 1423:0E5F:001D:7DDA ()
 *
 * Called From: 1423:0E5F:0010:5595
 */
void f__1423_0E5F_001D_7DDA()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_cmpw(&emu_si, emu_get_memory16(emu_ds, 0x00,  0x3A38));
	if (emu_flags.zf) { f__1423_0E7C_0026_BBB8(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), 0x4);
	if (emu_flags.zf) { emu_ip = 0x0E7C; emu_last_cs = 0x1423; emu_last_ip = 0x0E75; emu_last_length = 0x001D; emu_last_crc = 0x7DDA; emu_call(); return; } // Jump does not resolve
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_ip = 0x0F2F; emu_last_cs = 0x1423; emu_last_ip = 0x0E79; emu_last_length = 0x001D; emu_last_crc = 0x7DDA; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__1423_0E79_0003_0584()
 *
 * @name f__1423_0E79_0003_0584
 * @implements 1423:0E79:0003:0584 ()
 *
 * Called From: 1423:0F2C:0006:29BE
 */
void f__1423_0E79_0003_0584()
{
	f__1423_0F2F_0005_04BA(); return;
}

/**
 * Decompiled function f__1423_0E7C_0026_BBB8()
 *
 * @name f__1423_0E7C_0026_BBB8
 * @implements 1423:0E7C:0026:BBB8 ()
 *
 * Called From: 1423:0E6A:001D:7DDA
 */
void f__1423_0E7C_0026_BBB8()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_orws(&emu_get_memory16(emu_es, emu_bx.x,  0x4), 0x4);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), 0x2);
	if (emu_flags.zf) { emu_ip = 0x0EAE; emu_last_cs = 0x1423; emu_last_ip = 0x0E8D; emu_last_length = 0x0026; emu_last_crc = 0xBBB8; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x28), 0x0);
	if (!emu_flags.zf) { f__1423_0EAC_0002_035A(); return; }
	emu_movw(&emu_ax.x, 0x30);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0EA2); emu_cs = 0x3483; ovl__3483(2);
	f__1423_0EA2_000C_6299();
}

/**
 * Decompiled function f__1423_0EA2_000C_6299()
 *
 * @name f__1423_0EA2_000C_6299
 * @implements 1423:0EA2:000C:6299 ()
 *
 * Called From: 1423:0EA2:0026:BBB8
 */
void f__1423_0EA2_000C_6299()
{
	emu_pop(&emu_cx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x28), 0x8);
	f__1423_0F29_0006_29BE(); return;
}

/**
 * Decompiled function f__1423_0EAC_0002_035A()
 *
 * @name f__1423_0EAC_0002_035A
 * @implements 1423:0EAC:0002:035A ()
 *
 * Called From: 1423:0E97:0026:BBB8
 */
void f__1423_0EAC_0002_035A()
{
	f__1423_0F29_0006_29BE(); return;
}

/**
 * Decompiled function f__1423_0F29_0006_29BE()
 *
 * @name f__1423_0F29_0006_29BE
 * @implements 1423:0F29:0006:29BE ()
 *
 * Called From: 1423:0EAC:000C:6299
 * Called From: 1423:0EAC:0002:035A
 */
void f__1423_0F29_0006_29BE()
{
	emu_movw(&emu_ax.x, 0x1);
	f__1423_0E79_0003_0584(); return;
}

/**
 * Decompiled function f__1423_0F2F_0005_04BA()
 *
 * @name f__1423_0F2F_0005_04BA
 * @implements 1423:0F2F:0005:04BA ()
 *
 * Called From: 1423:0E79:0003:0584
 */
void f__1423_0F2F_0005_04BA()
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
 * Decompiled function f__1423_0F34_0017_4318()
 *
 * @name f__1423_0F34_0017_4318
 * @implements 1423:0F34:0017:4318 ()
 *
 * Called From: 06F7:0134:0008:715C
 * Called From: 0972:147E:001A:D13D
 * Called From: 0C3A:223B:0008:715C
 * Called From: 0FE4:0079:005B:9827
 * Called From: 1423:097E:0008:76E6
 * Called From: 1423:09C6:0008:7586
 * Called From: 1423:0A19:0008:744A
 * Called From: 1423:0B6F:0011:711A
 * Called From: 1423:0B6F:0029:FF61
 * Called From: 1423:0C26:0008:740A
 * Called From: 1A34:11E9:0008:715C
 * Called From: 1A34:1400:0008:715C
 * Called From: 1A34:2421:000A:B01F
 * Called From: 1A34:2B64:0008:715C
 * Called From: 1A34:2D39:0011:B626
 * Called From: 1A34:3209:0008:715C
 * Called From: B4CD:02AD:0008:715C
 * Called From: B518:0FED:0008:715C
 */
void f__1423_0F34_0017_4318()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_cmpws(&emu_dx.x, 0xFF);
	if (emu_flags.zf) { emu_ip = 0x0F47; emu_last_cs = 0x1423; emu_last_ip = 0x0F40; emu_last_length = 0x0017; emu_last_crc = 0x4318; emu_call(); return; } // Jump does not resolve
	emu_cmpws(&emu_bx.x, 0xFF);
	if (!emu_flags.zf) { f__1423_0F4B_0006_1000(); return; }
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_ip = 0x0F7C; emu_last_cs = 0x1423; emu_last_ip = 0x0F49; emu_last_length = 0x0017; emu_last_crc = 0x4318; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__1423_0F47_0004_06FE()
 *
 * @name f__1423_0F47_0004_06FE
 * @implements 1423:0F47:0004:06FE ()
 *
 * Called From: 1423:0F75:000E:B403
 * Called From: 1423:0F75:0002:020C
 */
void f__1423_0F47_0004_06FE()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__1423_0F7C_0002_00E2(); return;
}

/**
 * Decompiled function f__1423_0F49_0002_03CE()
 *
 * @name f__1423_0F49_0002_03CE
 * @implements 1423:0F49:0002:03CE ()
 *
 * Called From: 1423:0F7A:0005:1526
 */
void f__1423_0F49_0002_03CE()
{
	f__1423_0F7C_0002_00E2(); return;
}

/**
 * Decompiled function f__1423_0F4B_0006_1000()
 *
 * @name f__1423_0F4B_0006_1000
 * @implements 1423:0F4B:0006:1000 ()
 *
 * Called From: 1423:0F45:0017:4318
 */
void f__1423_0F4B_0006_1000()
{
	emu_cmpw(&emu_dx.x, emu_bx.x);
	if (!emu_flags.zf) { f__1423_0F51_0016_4F47(); return; }
	f__1423_0F77_0005_1526(); return;
}

/**
 * Decompiled function f__1423_0F51_0016_4F47()
 *
 * @name f__1423_0F51_0016_4F47
 * @implements 1423:0F51:0016:4F47 ()
 *
 * Called From: 1423:0F4D:0006:1000
 */
void f__1423_0F51_0016_4F47()
{
	emu_cmpws(&emu_dx.x, 0x3);
	if (emu_flags.zf) { emu_ip = 0x0F5B; emu_last_cs = 0x1423; emu_last_ip = 0x0F54; emu_last_length = 0x0016; emu_last_crc = 0x4F47; emu_call(); return; } // Jump does not resolve
	emu_cmpws(&emu_bx.x, 0x3);
	if (!emu_flags.zf) { f__1423_0F69_000E_B403(); return; }
	emu_cmpws(&emu_dx.x, 0x1);
	if (emu_flags.zf) { emu_ip = 0x0F65; emu_last_cs = 0x1423; emu_last_ip = 0x0F5E; emu_last_length = 0x0016; emu_last_crc = 0x4F47; emu_call(); return; } // Jump does not resolve
	emu_cmpws(&emu_bx.x, 0x1);
	if (!emu_flags.zf) { emu_ip = 0x0F67; emu_last_cs = 0x1423; emu_last_ip = 0x0F63; emu_last_length = 0x0016; emu_last_crc = 0x4F47; emu_call(); return; } // Jump does not resolve
	emu_ip = 0x0F77; emu_last_cs = 0x1423; emu_last_ip = 0x0F65; emu_last_length = 0x0016; emu_last_crc = 0x4F47; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__1423_0F69_000E_B403()
 *
 * @name f__1423_0F69_000E_B403
 * @implements 1423:0F69:000E:B403 ()
 *
 * Called From: 1423:0F59:0016:4F47
 */
void f__1423_0F69_000E_B403()
{
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x3A38));
	if (emu_flags.zf) { f__1423_0F75_0002_020C(); return; }
	emu_cmpw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00,  0x3A38));
	if (!emu_flags.zf) { emu_ip = 0x0F77; emu_last_cs = 0x1423; emu_last_ip = 0x0F73; emu_last_length = 0x000E; emu_last_crc = 0xB403; emu_call(); return; } // Jump does not resolve
	f__1423_0F47_0004_06FE(); return;
}

/**
 * Decompiled function f__1423_0F75_0002_020C()
 *
 * @name f__1423_0F75_0002_020C
 * @implements 1423:0F75:0002:020C ()
 *
 * Called From: 1423:0F6D:000E:B403
 */
void f__1423_0F75_0002_020C()
{
	f__1423_0F47_0004_06FE(); return;
}

/**
 * Decompiled function f__1423_0F77_0005_1526()
 *
 * @name f__1423_0F77_0005_1526
 * @implements 1423:0F77:0005:1526 ()
 *
 * Called From: 1423:0F4F:0006:1000
 */
void f__1423_0F77_0005_1526()
{
	emu_movw(&emu_ax.x, 0x1);
	f__1423_0F49_0002_03CE(); return;
}

/**
 * Decompiled function f__1423_0F7C_0002_00E2()
 *
 * @name f__1423_0F7C_0002_00E2
 * @implements 1423:0F7C:0002:00E2 ()
 *
 * Called From: 1423:0F49:0002:03CE
 * Called From: 1423:0F49:0004:06FE
 */
void f__1423_0F7C_0002_00E2()
{
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

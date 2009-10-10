/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__1391_000A_0035_2CB6()
 *
 * @name f__1391_000A_0035_2CB6
 * @implements 1391:000A:0035:2CB6 ()
 *
 * Called From: 0642:03CC:0005:ED74
 */
void f__1391_000A_0035_2CB6()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subw(&emu_sp, 0x20);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), 0x0);
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x37A0), 0x0);
	if (emu_flags.zf) { f__1391_003F_00C8_12AA(); return; }
	f__1391_0849_0006_F7CE(); return;
}

/**
 * Decompiled function f__1391_003F_00C8_12AA()
 *
 * @name f__1391_003F_00C8_12AA
 * @implements 1391:003F:00C8:12AA ()
 *
 * Called From: 1391:003A:0035:2CB6
 */
void f__1391_003F_00C8_12AA()
{
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x6088));
	emu_movw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x6086));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x76B2));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__1391_006E_0099_5702(); return; }
	if (!emu_flags.zf) { f__1391_0054_00B3_890D(); return; }
	emu_cmpw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x76B0));
	if (!(emu_flags.cf || emu_flags.zf)) { f__1391_006E_0099_5702(); return; }
	f__1391_0054_00B3_890D(); return;
}

/**
 * Decompiled function f__1391_0054_00B3_890D()
 *
 * @name f__1391_0054_00B3_890D
 * @implements 1391:0054:00B3:890D ()
 *
 * Called From: 1391:004C:00C8:12AA
 */
void f__1391_0054_00B3_890D()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x1);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x76B2));
	emu_movw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x76B0));
	emu_addw(&emu_dx, 0x384);
	emu_adcw(&emu_ax, 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x6088), emu_ax);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x6086), emu_dx);
	f__1391_006E_0099_5702(); return;
}

/**
 * Decompiled function f__1391_006E_0099_5702()
 *
 * @name f__1391_006E_0099_5702
 * @implements 1391:006E:0099:5702 ()
 *
 * Called From: 1391:004A:00C8:12AA
 * Called From: 1391:0052:00C8:12AA
 */
void f__1391_006E_0099_5702()
{
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x38C2));
	emu_movw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x38C0));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x76B2));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__1391_00B2_0055_86F4(); return; }
	if (!emu_flags.zf) { f__1391_0083_0084_0CD3(); return; }
	emu_cmpw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x76B0));
	if (!(emu_flags.cf || emu_flags.zf)) { f__1391_00B2_0055_86F4(); return; }
	f__1391_0083_0084_0CD3(); return;
}

/**
 * Decompiled function f__1391_0083_0084_0CD3()
 *
 * @name f__1391_0083_0084_0CD3
 * @implements 1391:0083:0084:0CD3 ()
 *
 * Called From: 1391:007B:0099:5702
 * Called From: 1391:007B:00C8:12AA
 * Called From: 1391:007B:00B3:890D
 */
void f__1391_0083_0084_0CD3()
{
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x608C));
	emu_movw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x608A));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x76B2));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__1391_00B2_0055_86F4(); return; }
	if ((emu_flags.sf != emu_flags.of)) { f__1391_0098_006F_AC38(); return; }
	emu_cmpw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x76B0));
	if (!emu_flags.cf) { f__1391_00B2_0055_86F4(); return; }
	f__1391_0098_006F_AC38(); return;
}

/**
 * Decompiled function f__1391_0098_006F_AC38()
 *
 * @name f__1391_0098_006F_AC38
 * @implements 1391:0098:006F:AC38 ()
 *
 * Called From: 1391:0090:0084:0CD3
 */
void f__1391_0098_006F_AC38()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x1);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x76B2));
	emu_movw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x76B0));
	emu_addw(&emu_dx, 0x2A30);
	emu_adcw(&emu_ax, 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x608C), emu_ax);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x608A), emu_dx);
	f__1391_00B2_0055_86F4(); return;
}

/**
 * Decompiled function f__1391_00B2_0055_86F4()
 *
 * @name f__1391_00B2_0055_86F4
 * @implements 1391:00B2:0055:86F4 ()
 *
 * Called From: 1391:0079:0099:5702
 * Called From: 1391:0081:0099:5702
 * Called From: 1391:0081:00C8:12AA
 * Called From: 1391:008E:0099:5702
 * Called From: 1391:008E:00C8:12AA
 * Called From: 1391:008E:0084:0CD3
 * Called From: 1391:0096:0084:0CD3
 * Called From: 1391:0096:0099:5702
 * Called From: 1391:0096:00C8:12AA
 * Called From: 1391:0096:00B3:890D
 */
void f__1391_00B2_0055_86F4()
{
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x6090));
	emu_movw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x608E));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x76B2));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__1391_00E1_0026_4CCC(); return; }
	if (!emu_flags.zf) { f__1391_00C7_0040_3A20(); return; }
	emu_cmpw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x76B0));
	if (!(emu_flags.cf || emu_flags.zf)) { f__1391_00E1_0026_4CCC(); return; }
	f__1391_00C7_0040_3A20(); return;
}

/**
 * Decompiled function f__1391_00C7_0040_3A20()
 *
 * @name f__1391_00C7_0040_3A20
 * @implements 1391:00C7:0040:3A20 ()
 *
 * Called From: 1391:00BF:006F:AC38
 * Called From: 1391:00BF:0084:0CD3
 * Called From: 1391:00BF:0055:86F4
 */
void f__1391_00C7_0040_3A20()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x1);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x76B2));
	emu_movw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x76B0));
	emu_addw(&emu_dx, 0xB4);
	emu_adcw(&emu_ax, 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x6090), emu_ax);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x608E), emu_dx);
	f__1391_00E1_0026_4CCC(); return;
}

/**
 * Decompiled function f__1391_00E1_0026_4CCC()
 *
 * @name f__1391_00E1_0026_4CCC
 * @implements 1391:00E1:0026:4CCC ()
 *
 * Called From: 1391:00BD:0055:86F4
 * Called From: 1391:00C5:0055:86F4
 * Called From: 1391:00C5:0084:0CD3
 * Called From: 1391:00C5:0099:5702
 * Called From: 1391:00C5:00C8:12AA
 * Called From: 1391:00C5:006F:AC38
 */
void f__1391_00E1_0026_4CCC()
{
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x6094));
	emu_movw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x6092));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x76B2));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__1391_011F_00A8_AA2F(); return; }
	if (!emu_flags.zf) { f__1391_00F6_0011_EC7E(); return; }
	emu_cmpw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x76B0));
	if (!(emu_flags.cf || emu_flags.zf)) { f__1391_011F_00A8_AA2F(); return; }
	f__1391_00F6_0011_EC7E(); return;
}

/**
 * Decompiled function f__1391_00F6_0011_EC7E()
 *
 * @name f__1391_00F6_0011_EC7E
 * @implements 1391:00F6:0011:EC7E ()
 *
 * Called From: 1391:00EE:0026:4CCC
 * Called From: 1391:00EE:0040:3A20
 * Called From: 1391:00EE:0055:86F4
 */
void f__1391_00F6_0011_EC7E()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x1);
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x379C), 0x0);
	if (emu_flags.zf) { f__1391_0107_00C0_28C2(); return; }
	emu_movw(&emu_ax, 0x3C);
	/* Unresolved jump */ emu_ip = 0x010A; emu_last_cs = 0x1391; emu_last_ip = 0x0105; emu_last_length = 0x0011; emu_last_crc = 0xEC7E; emu_call();
}

/**
 * Decompiled function f__1391_0107_00C0_28C2()
 *
 * @name f__1391_0107_00C0_28C2
 * @implements 1391:0107:00C0:28C2 ()
 *
 * Called From: 1391:0100:0011:EC7E
 * Called From: 1391:0100:0026:4CCC
 * Called From: 1391:0100:0055:86F4
 * Called From: 1391:0100:0099:5702
 * Called From: 1391:0100:00C8:12AA
 * Called From: 1391:0100:0084:0CD3
 * Called From: 1391:0100:0040:3A20
 */
void f__1391_0107_00C0_28C2()
{
	emu_movw(&emu_ax, 0x258);
	emu_cwd();
	emu_movw(&emu_bx, emu_get_memory16(emu_ds, 0x00, 0x76B2));
	emu_movw(&emu_cx, emu_get_memory16(emu_ds, 0x00, 0x76B0));
	emu_addw(&emu_cx, emu_ax);
	emu_adcw(&emu_bx, emu_dx);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x6094), emu_bx);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x6092), emu_cx);
	f__1391_011F_00A8_AA2F(); return;
}

/**
 * Decompiled function f__1391_011F_00A8_AA2F()
 *
 * @name f__1391_011F_00A8_AA2F
 * @implements 1391:011F:00A8:AA2F ()
 *
 * Called From: 1391:00EC:0026:4CCC
 * Called From: 1391:00EC:0055:86F4
 * Called From: 1391:00EC:0084:0CD3
 * Called From: 1391:00EC:0099:5702
 * Called From: 1391:00EC:00C8:12AA
 * Called From: 1391:00F4:0026:4CCC
 * Called From: 1391:00F4:0055:86F4
 * Called From: 1391:00F4:0084:0CD3
 * Called From: 1391:00F4:0099:5702
 * Called From: 1391:00F4:00C8:12AA
 * Called From: 1391:00F4:0040:3A20
 * Called From: 1391:00F4:006F:AC38
 */
void f__1391_011F_00A8_AA2F()
{
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x6098));
	emu_movw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x6096));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x76B2));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__1391_014D_007A_153C(); return; }
	if (!emu_flags.zf) { f__1391_0134_0093_0398(); return; }
	emu_cmpw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x76B0));
	if (!(emu_flags.cf || emu_flags.zf)) { f__1391_014D_007A_153C(); return; }
	f__1391_0134_0093_0398(); return;
}

/**
 * Decompiled function f__1391_0134_0093_0398()
 *
 * @name f__1391_0134_0093_0398
 * @implements 1391:0134:0093:0398 ()
 *
 * Called From: 1391:012C:00A8:AA2F
 * Called From: 1391:012C:00C0:28C2
 */
void f__1391_0134_0093_0398()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x1);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x76B2));
	emu_movw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x76B0));
	emu_addw(&emu_dx, 0x5);
	emu_adcw(&emu_ax, 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x6098), emu_ax);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x6096), emu_dx);
	f__1391_014D_007A_153C(); return;
}

/**
 * Decompiled function f__1391_014D_007A_153C()
 *
 * @name f__1391_014D_007A_153C
 * @implements 1391:014D:007A:153C ()
 *
 * Called From: 1391:012A:00A8:AA2F
 * Called From: 1391:0132:00A8:AA2F
 * Called From: 1391:0132:00C0:28C2
 */
void f__1391_014D_007A_153C()
{
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x609C));
	emu_movw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x609A));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x76B2));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__1391_017B_004C_FA99(); return; }
	if (!emu_flags.zf) { f__1391_0162_0065_FF33(); return; }
	emu_cmpw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x76B0));
	if (!(emu_flags.cf || emu_flags.zf)) { f__1391_017B_004C_FA99(); return; }
	f__1391_0162_0065_FF33(); return;
}

/**
 * Decompiled function f__1391_0162_0065_FF33()
 *
 * @name f__1391_0162_0065_FF33
 * @implements 1391:0162:0065:FF33 ()
 *
 * Called From: 1391:015A:007A:153C
 * Called From: 1391:015A:0093:0398
 */
void f__1391_0162_0065_FF33()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), 0x1);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x76B2));
	emu_movw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x76B0));
	emu_addw(&emu_dx, 0x3C);
	emu_adcw(&emu_ax, 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x609C), emu_ax);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x609A), emu_dx);
	f__1391_017B_004C_FA99(); return;
}

/**
 * Decompiled function f__1391_017B_004C_FA99()
 *
 * @name f__1391_017B_004C_FA99
 * @implements 1391:017B:004C:FA99 ()
 *
 * Called From: 1391:0158:007A:153C
 * Called From: 1391:0158:00A8:AA2F
 * Called From: 1391:0160:007A:153C
 * Called From: 1391:0160:0093:0398
 * Called From: 1391:0160:00A8:AA2F
 * Called From: 1391:0160:00C0:28C2
 */
void f__1391_017B_004C_FA99()
{
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x60A0));
	emu_movw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x609E));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x76B2));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__1391_01AA_001D_4FD0(); return; }
	if (!emu_flags.zf) { f__1391_0190_0037_8316(); return; }
	emu_cmpw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x76B0));
	if (!(emu_flags.cf || emu_flags.zf)) { f__1391_01AA_001D_4FD0(); return; }
	f__1391_0190_0037_8316(); return;
}

/**
 * Decompiled function f__1391_0190_0037_8316()
 *
 * @name f__1391_0190_0037_8316
 * @implements 1391:0190:0037:8316 ()
 *
 * Called From: 1391:0188:0065:FF33
 * Called From: 1391:0188:0093:0398
 * Called From: 1391:0188:004C:FA99
 */
void f__1391_0190_0037_8316()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), 0x1);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x76B2));
	emu_movw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x76B0));
	emu_addw(&emu_dx, 0x708);
	emu_adcw(&emu_ax, 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x60A0), emu_ax);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x609E), emu_dx);
	f__1391_01AA_001D_4FD0(); return;
}

/**
 * Decompiled function f__1391_01AA_001D_4FD0()
 *
 * @name f__1391_01AA_001D_4FD0
 * @implements 1391:01AA:001D:4FD0 ()
 *
 * Called From: 1391:0186:004C:FA99
 * Called From: 1391:0186:007A:153C
 * Called From: 1391:0186:00A8:AA2F
 * Called From: 1391:0186:00C0:28C2
 * Called From: 1391:018E:004C:FA99
 * Called From: 1391:018E:0065:FF33
 * Called From: 1391:018E:007A:153C
 * Called From: 1391:018E:00A8:AA2F
 * Called From: 1391:018E:00C0:28C2
 * Called From: 1391:018E:0093:0398
 */
void f__1391_01AA_001D_4FD0()
{
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0xC), 0x0);
	if (emu_flags.zf) { f__1391_01E5_0012_F977(); return; }
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x38FE), 0x0);
	if (emu_flags.zf) { f__1391_01E5_0012_F977(); return; }
	emu_decw(&emu_get_memory16(emu_ds, 0x00, 0x38FE));
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x38FE));
	emu_addw(&emu_ax, 0x29);
	emu_push(emu_ax);
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x01C7); emu_cs = 0x3483; emu_ip = 0x002A; emu_last_cs = 0x1391; emu_last_ip = 0x01C2; emu_last_length = 0x001D; emu_last_crc = 0x4FD0; emu_call();
	/* Unresolved jump */ emu_ip = 0x01C7; emu_last_cs = 0x1391; emu_last_ip = 0x01C7; emu_last_length = 0x001D; emu_last_crc = 0x4FD0; emu_call();
}

/**
 * Decompiled function f__1391_01E5_0012_F977()
 *
 * @name f__1391_01E5_0012_F977
 * @implements 1391:01E5:0012:F977 ()
 *
 * Called From: 1391:01AE:001D:4FD0
 * Called From: 1391:01AE:004C:FA99
 * Called From: 1391:01AE:0037:8316
 * Called From: 1391:01B5:001D:4FD0
 * Called From: 1391:01B5:0037:8316
 * Called From: 1391:01B5:007A:153C
 * Called From: 1391:01B5:00A8:AA2F
 * Called From: 1391:01B5:00C0:28C2
 * Called From: 1391:01B5:0065:FF33
 */
void f__1391_01E5_0012_F977()
{
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0xE), 0x0);
	if (emu_flags.zf) { f__1391_0230_0009_D032(); return; }
	emu_movw(&emu_ax, 0x1A);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x01F7); emu_cs = 0x2537; f__2537_000C_001C_86CB();
	f__1391_01F7_0031_36C0();
}

/**
 * Decompiled function f__1391_01F7_0031_36C0()
 *
 * @name f__1391_01F7_0031_36C0
 * @implements 1391:01F7:0031:36C0 ()
 *
 */
void f__1391_01F7_0031_36C0()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_movw(&emu_si, emu_ax);
	emu_movw(&emu_bx, emu_si);
	emu_shlw(&emu_bx, 0x1);
	emu_cmpw(&emu_get_memory16(emu_ds, emu_bx, 0x97E7), 0x0);
	if (emu_flags.zf) { f__1391_0230_0009_D032(); return; }
	emu_movw(&emu_bx, emu_si);
	emu_shlw(&emu_bx, 0x1);
	emu_cmpw(&emu_get_memory16(emu_ds, emu_bx, 0x97E7), 0xA);
	if (!(emu_flags.sf != emu_flags.of)) { f__1391_0230_0009_D032(); return; }
	emu_movw(&emu_bx, emu_si);
	emu_shlw(&emu_bx, 0x1);
	emu_cmpw(&emu_get_memory16(emu_ds, emu_bx, 0x97E7), 0xFFFF);
	if (!emu_flags.zf) { f__1391_0228_0011_014A(); return; }
	emu_movw(&emu_bx, emu_si);
	emu_shlw(&emu_bx, 0x1);
	emu_movw(&emu_get_memory16(emu_ds, emu_bx, 0x97E7), 0x1);
	f__1391_0230_0009_D032(); return;
}

/**
 * Decompiled function f__1391_0228_0011_014A()
 *
 * @name f__1391_0228_0011_014A
 * @implements 1391:0228:0011:014A ()
 *
 * Called From: 1391:021A:0031:36C0
 */
void f__1391_0228_0011_014A()
{
	emu_movw(&emu_bx, emu_si);
	emu_shlw(&emu_bx, 0x1);
	emu_incw(&emu_get_memory16(emu_ds, emu_bx, 0x97E7));
	f__1391_0230_0009_D032(); return;
}

/**
 * Decompiled function f__1391_0230_0009_D032()
 *
 * @name f__1391_0230_0009_D032
 * @implements 1391:0230:0009:D032 ()
 *
 * Called From: 1391:01E9:0012:F977
 * Called From: 1391:0204:0031:36C0
 * Called From: 1391:020F:0031:36C0
 * Called From: 1391:0226:0031:36C0
 */
void f__1391_0230_0009_D032()
{
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x0);
	if (!emu_flags.zf) { f__1391_0239_0019_F809(); return; }
	f__1391_0465_0031_20D9(); return;
}

/**
 * Decompiled function f__1391_0239_0019_F809()
 *
 * @name f__1391_0239_0019_F809
 * @implements 1391:0239:0019:F809 ()
 *
 * Called From: 1391:0234:0009:D032
 * Called From: 1391:0234:0011:014A
 */
void f__1391_0239_0019_F809()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x16), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x18), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x1A), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x1C), 0x0);
	emu_xorw(&emu_di, emu_di);
	f__1391_045D_0008_D28D(); return;
}

/**
 * Decompiled function f__1391_0252_0013_2798()
 *
 * @name f__1391_0252_0013_2798
 * @implements 1391:0252:0013:2798 ()
 *
 * Called From: 1391:0462:0008:D28D
 * Called From: 1391:0462:0009:52AE
 */
void f__1391_0252_0013_2798()
{
	emu_movw(&emu_ax, emu_di);
	emu_movw(&emu_dx, 0xA);
	emu_imuluw(&emu_ax, emu_dx);
	emu_movw(&emu_bx, emu_ax);
	emu_cmpw(&emu_get_memory16(emu_ds, emu_bx, 0x8D43), 0xFFFF);
	if (!emu_flags.zf) { f__1391_0265_0013_1F9F(); return; }
	f__1391_045C_0009_52AE(); return;
}

/**
 * Decompiled function f__1391_0265_0013_1F9F()
 *
 * @name f__1391_0265_0013_1F9F
 * @implements 1391:0265:0013:1F9F ()
 *
 * Called From: 1391:0260:0013:2798
 */
void f__1391_0265_0013_1F9F()
{
	emu_movw(&emu_ax, emu_di);
	emu_movw(&emu_dx, 0xA);
	emu_imuluw(&emu_ax, emu_dx);
	emu_movw(&emu_bx, emu_ax);
	emu_cmpw(&emu_get_memory16(emu_ds, emu_bx, 0x8D47), 0x0);
	if (!emu_flags.zf) { f__1391_0278_0020_AEEA(); return; }
	/* Unresolved jump */ emu_ip = 0x045C; emu_last_cs = 0x1391; emu_last_ip = 0x0275; emu_last_length = 0x0013; emu_last_crc = 0x1F9F; emu_call();
}

/**
 * Decompiled function f__1391_0278_0020_AEEA()
 *
 * @name f__1391_0278_0020_AEEA
 * @implements 1391:0278:0020:AEEA ()
 *
 * Called From: 1391:0273:0013:1F9F
 */
void f__1391_0278_0020_AEEA()
{
	emu_movw(&emu_ax, emu_di);
	emu_movw(&emu_dx, 0xA);
	emu_imuluw(&emu_ax, emu_dx);
	emu_movw(&emu_bx, emu_ax);
	emu_decw(&emu_get_memory16(emu_ds, emu_bx, 0x8D47));
	emu_movw(&emu_ax, emu_di);
	emu_movw(&emu_dx, 0xA);
	emu_imuluw(&emu_ax, emu_dx);
	emu_movw(&emu_bx, emu_ax);
	emu_cmpw(&emu_get_memory16(emu_ds, emu_bx, 0x8D47), 0x0);
	if (emu_flags.zf) { f__1391_0298_0012_8793(); return; }
	f__1391_045C_0009_52AE(); return;
}

/**
 * Decompiled function f__1391_0298_0012_8793()
 *
 * @name f__1391_0298_0012_8793
 * @implements 1391:0298:0012:8793 ()
 *
 * Called From: 1391:0293:0020:AEEA
 */
void f__1391_0298_0012_8793()
{
	emu_movw(&emu_ax, emu_di);
	emu_movw(&emu_dx, 0xA);
	emu_imuluw(&emu_ax, emu_dx);
	emu_movw(&emu_bx, emu_ax);
	emu_push(emu_get_memory16(emu_ds, emu_bx, 0x8D43));
	emu_push(emu_cs); emu_push(0x02AA); emu_cs = 0x0FE4; emu_Unit_Get_ByIndex();
	f__1391_02AA_0025_2E69();
}

/**
 * Decompiled function f__1391_02AA_0025_2E69()
 *
 * @name f__1391_02AA_0025_2E69
 * @implements 1391:02AA:0025:2E69 ()
 *
 */
void f__1391_02AA_0025_2E69()
{
	emu_pop(&emu_cx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x1A), emu_dx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x1C), emu_ax);
	emu_movw(&emu_ax, emu_di);
	emu_movw(&emu_dx, 0xA);
	emu_imuluw(&emu_ax, emu_dx);
	emu_movw(&emu_bx, emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, emu_bx, 0x8D45));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x1E), emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x20), 0x0);
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x1E), 0x4);
	if (!(emu_flags.sf != emu_flags.of)) { f__1391_02CF_001A_9F54(); return; }
	/* Unresolved jump */ emu_ip = 0x03A5; emu_last_cs = 0x1391; emu_last_ip = 0x02CC; emu_last_length = 0x0025; emu_last_crc = 0x2E69; emu_call();
}

/**
 * Decompiled function f__1391_02CF_001A_9F54()
 *
 * @name f__1391_02CF_001A_9F54
 * @implements 1391:02CF:001A:9F54 ()
 *
 * Called From: 1391:02CA:0025:2E69
 */
void f__1391_02CF_001A_9F54()
{
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x18));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x16));
	if (!emu_flags.zf) { f__1391_0352_0044_8FBF(); return; }
	emu_movw(&emu_ax, 0x64);
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x1C));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x8));
	emu_movws(&emu_ax, emu_al);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x02E9); emu_cs = 0x2BB4; f__2BB4_0004_0027_DC1D();
	f__1391_02E9_0009_1DF9();
}

/**
 * Decompiled function f__1391_02E9_0009_1DF9()
 *
 * @name f__1391_02E9_0009_1DF9
 * @implements 1391:02E9:0009:1DF9 ()
 *
 */
void f__1391_02E9_0009_1DF9()
{
	emu_andw(&emu_ax, 0x3);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x02F2); emu_cs = 0x34CD; ovl__34CD(24);
	f__1391_02F2_0008_0AE5();
}

/**
 * Decompiled function f__1391_02F2_0008_0AE5()
 *
 * @name f__1391_02F2_0008_0AE5
 * @implements 1391:02F2:0008:0AE5 ()
 *
 */
void f__1391_02F2_0008_0AE5()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x02FA); emu_cs = 0x0F3F; f__0F3F_009D_0017_8464();
	f__1391_02FA_0018_A575();
}

/**
 * Decompiled function f__1391_02FA_0018_A575()
 *
 * @name f__1391_02FA_0018_A575
 * @implements 1391:02FA:0018:A575 ()
 *
 */
void f__1391_02FA_0018_A575()
{
	emu_pop(&emu_cx);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x1C));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x8));
	emu_movws(&emu_ax, emu_al);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0xFFFF);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0312); emu_cs = 0x1A34; emu_Unit_Create();
	f__1391_0312_0027_6AEA();
}

/**
 * Decompiled function f__1391_0312_0027_6AEA()
 *
 * @name f__1391_0312_0027_6AEA
 * @implements 1391:0312:0027:6AEA ()
 *
 */
void f__1391_0312_0027_6AEA()
{
	emu_addw(&emu_sp, 0xC);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x16), emu_dx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x18), emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x18));
	emu_orw(&emu_get_memory16(emu_es, emu_bx, 0x4), 0x200);
	emu_movw(&emu_ax, 0x1);
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x1C));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x8));
	emu_movws(&emu_ax, emu_al);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x1E));
	emu_push(emu_cs); emu_push(0x0339); emu_cs = 0x34CD; ovl__34CD(24);
	f__1391_0339_0008_A673();
}

/**
 * Decompiled function f__1391_0339_0008_A673()
 *
 * @name f__1391_0339_0008_A673
 * @implements 1391:0339:0008:A673 ()
 *
 */
void f__1391_0339_0008_A673()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0341); emu_cs = 0x167E; f__167E_00F3_001E_8CB3();
	f__1391_0341_000E_E4D8();
}

/**
 * Decompiled function f__1391_0341_000E_E4D8()
 *
 * @name f__1391_0341_000E_E4D8
 * @implements 1391:0341:000E:E4D8 ()
 *
 */
void f__1391_0341_000E_E4D8()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x16));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x18));
	emu_push(emu_cs); emu_push(0x034F); emu_cs = 0x1A34; f__1A34_1B68_0019_AAA0();
	f__1391_034F_0047_9E8A();
}

/**
 * Decompiled function f__1391_034F_0047_9E8A()
 *
 * @name f__1391_034F_0047_9E8A
 * @implements 1391:034F:0047:9E8A ()
 *
 */
void f__1391_034F_0047_9E8A()
{
	emu_addw(&emu_sp, 0x6);
	f__1391_0352_0044_8FBF(); return;
}

/**
 * Decompiled function f__1391_0352_0044_8FBF()
 *
 * @name f__1391_0352_0044_8FBF
 * @implements 1391:0352:0044:8FBF ()
 *
 * Called From: 1391:02D5:001A:9F54
 */
void f__1391_0352_0044_8FBF()
{
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x18));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x16));
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0396; emu_last_cs = 0x1391; emu_last_ip = 0x0358; emu_last_length = 0x0044; emu_last_crc = 0x8FBF; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x18));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x3));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x1C));
	emu_movb(&emu_get_memory8(emu_es, emu_bx, 0x3), emu_al);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x18));
	emu_push(emu_es);
	emu_lfp(&emu_es, &emu_si, &emu_get_memory16(emu_ss, emu_bp, -0x1C));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_si, 0x0));
	emu_pop(&emu_es);
	emu_movb(&emu_get_memory8(emu_es, emu_bx, 0x3), emu_al);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x18));
	emu_orw(&emu_get_memory16(emu_es, emu_bx, 0x4), 0x100);
	emu_movw(&emu_ax, emu_di);
	emu_movw(&emu_dx, 0xA);
	emu_imuluw(&emu_ax, emu_dx);
	emu_movw(&emu_bx, emu_ax);
	emu_movw(&emu_get_memory16(emu_ds, emu_bx, 0x8D43), 0xFFFF);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x20), 0x1);
	f__1391_03A5_0017_8023(); return;
}

/**
 * Decompiled function f__1391_03A5_0017_8023()
 *
 * @name f__1391_03A5_0017_8023
 * @implements 1391:03A5:0017:8023 ()
 *
 * Called From: 1391:0394:0047:9E8A
 * Called From: 1391:0394:0044:8FBF
 */
void f__1391_03A5_0017_8023()
{
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x1E), 0x4);
	if (!(emu_flags.sf != emu_flags.of)) { f__1391_03D8_0040_703A(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x1C));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x8));
	emu_movws(&emu_ax, emu_al);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x1E));
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x03BC); emu_cs = 0x34CD; emu_ip = 0x0098; emu_last_cs = 0x1391; emu_last_ip = 0x03B7; emu_last_length = 0x0017; emu_last_crc = 0x8023; emu_call();
	/* Unresolved jump */ emu_ip = 0x03BC; emu_last_cs = 0x1391; emu_last_ip = 0x03BC; emu_last_length = 0x0017; emu_last_crc = 0x8023; emu_call();
}

/**
 * Decompiled function f__1391_03D8_0040_703A()
 *
 * @name f__1391_03D8_0040_703A
 * @implements 1391:03D8:0040:703A ()
 *
 * Called From: 1391:03A9:0017:8023
 */
void f__1391_03D8_0040_703A()
{
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x20), 0x0);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x045C; emu_last_cs = 0x1391; emu_last_ip = 0x03DC; emu_last_length = 0x0040; emu_last_crc = 0x703A; emu_call(); return; }
	emu_movw(&emu_ax, emu_di);
	emu_movw(&emu_dx, 0xA);
	emu_imuluw(&emu_ax, emu_dx);
	emu_movw(&emu_bx, emu_ax);
	emu_cmpw(&emu_get_memory16(emu_ds, emu_bx, 0x8D4B), 0x0);
	if (emu_flags.zf) { f__1391_045C_0009_52AE(); return; }
	emu_incw(&emu_get_memory16(emu_ds, 0x00, 0x38BC));
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0xFFFF);
	emu_movw(&emu_dx, 0xFFFF);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x1C));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x8));
	emu_movws(&emu_ax, emu_al);
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x1C));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x2));
	emu_movws(&emu_ax, emu_al);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0xFFFF);
	emu_push(emu_ax);
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x0418); emu_cs = 0x1A34; emu_ip = 0x08FB; emu_last_cs = 0x1391; emu_last_ip = 0x0413; emu_last_length = 0x0040; emu_last_crc = 0x703A; emu_call();
	/* Unresolved jump */ emu_ip = 0x0418; emu_last_cs = 0x1391; emu_last_ip = 0x0418; emu_last_length = 0x0040; emu_last_crc = 0x703A; emu_call();
}

/**
 * Decompiled function f__1391_045C_0009_52AE()
 *
 * @name f__1391_045C_0009_52AE
 * @implements 1391:045C:0009:52AE ()
 *
 * Called From: 1391:0262:0013:2798
 * Called From: 1391:0295:0020:AEEA
 * Called From: 1391:03EC:0040:703A
 */
void f__1391_045C_0009_52AE()
{
	emu_incw(&emu_di);
	f__1391_045D_0008_D28D(); return;
}

/**
 * Decompiled function f__1391_045D_0008_D28D()
 *
 * @name f__1391_045D_0008_D28D
 * @implements 1391:045D:0008:D28D ()
 *
 * Called From: 1391:024F:0019:F809
 */
void f__1391_045D_0008_D28D()
{
	emu_cmpw(&emu_di, 0x10);
	if (!(emu_flags.sf != emu_flags.of)) { f__1391_0465_0031_20D9(); return; }
	f__1391_0252_0013_2798(); return;
}

/**
 * Decompiled function f__1391_0465_0031_20D9()
 *
 * @name f__1391_0465_0031_20D9
 * @implements 1391:0465:0031:20D9 ()
 *
 * Called From: 1391:0236:0009:D032
 * Called From: 1391:0236:0011:014A
 * Called From: 1391:0460:0009:52AE
 */
void f__1391_0465_0031_20D9()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x394A));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x3A38));
	if (emu_flags.zf) { f__1391_0496_0018_8B16(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x394A));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x14));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x394A));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x12));
	if (!emu_flags.cf) { f__1391_0494_0002_E3BA(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x394A));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x14));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x394A));
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0x12), emu_ax);
	f__1391_04DD_000A_2ECE(); return;
}

/**
 * Decompiled function f__1391_0494_0002_E3BA()
 *
 * @name f__1391_0494_0002_E3BA
 * @implements 1391:0494:0002:E3BA ()
 *
 * Called From: 1391:0482:0031:20D9
 */
void f__1391_0494_0002_E3BA()
{
	f__1391_04DD_000A_2ECE(); return;
}

/**
 * Decompiled function f__1391_0496_0018_8B16()
 *
 * @name f__1391_0496_0018_8B16
 * @implements 1391:0496:0018:8B16 ()
 *
 * Called From: 1391:0470:0031:20D9
 */
void f__1391_0496_0018_8B16()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x394A));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x14));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x38B4));
	if ((emu_flags.cf || emu_flags.zf)) { f__1391_04AE_0024_200D(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x394A));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x14));
	f__1391_04B1_0021_2689(); return;
}

/**
 * Decompiled function f__1391_04AE_0024_200D()
 *
 * @name f__1391_04AE_0024_200D
 * @implements 1391:04AE:0024:200D ()
 *
 * Called From: 1391:04A2:0018:8B16
 */
void f__1391_04AE_0024_200D()
{
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x38B4));
	f__1391_04B1_0021_2689(); return;
}

/**
 * Decompiled function f__1391_04B1_0021_2689()
 *
 * @name f__1391_04B1_0021_2689
 * @implements 1391:04B1:0021:2689 ()
 *
 * Called From: 1391:04AC:0018:8B16
 */
void f__1391_04B1_0021_2689()
{
	emu_movw(&emu_si, emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x394A));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x12), emu_si);
	if ((emu_flags.cf || emu_flags.zf)) { f__1391_04DD_000A_2ECE(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x394A));
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0x12), emu_si);
	emu_movw(&emu_ax, 0x1);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x91);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x04D2); emu_cs = 0x0FCB; f__0FCB_005F_001C_FDC4();
	f__1391_04D2_0008_A466();
}

/**
 * Decompiled function f__1391_04D2_0008_A466()
 *
 * @name f__1391_04D2_0008_A466
 * @implements 1391:04D2:0008:A466 ()
 *
 */
void f__1391_04D2_0008_A466()
{
	emu_pop(&emu_cx);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x04DA); emu_cs = 0x10E4; f__10E4_09AB_0031_5E8E();
	f__1391_04DA_000D_FA8A();
}

/**
 * Decompiled function f__1391_04DA_000D_FA8A()
 *
 * @name f__1391_04DA_000D_FA8A
 * @implements 1391:04DA:000D:FA8A ()
 *
 */
void f__1391_04DA_000D_FA8A()
{
	emu_addw(&emu_sp, 0x6);
	f__1391_04DD_000A_2ECE(); return;
}

/**
 * Decompiled function f__1391_04DD_000A_2ECE()
 *
 * @name f__1391_04DD_000A_2ECE
 * @implements 1391:04DD:000A:2ECE ()
 *
 * Called From: 1391:0494:0002:E3BA
 * Called From: 1391:0494:0031:20D9
 * Called From: 1391:04BB:0024:200D
 * Called From: 1391:04BB:0021:2689
 */
void f__1391_04DD_000A_2ECE()
{
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x14);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x04E7); emu_cs = 0x10BE; emu_House_FindFirst();
	f__1391_04E7_0003_9CB2();
}

/**
 * Decompiled function f__1391_04E7_0003_9CB2()
 *
 * @name f__1391_04E7_0003_9CB2
 * @implements 1391:04E7:0003:9CB2 ()
 *
 */
void f__1391_04E7_0003_9CB2()
{
	f__1391_0834_0015_9C95(); return;
}

/**
 * Decompiled function f__1391_04EA_0009_911F()
 *
 * @name f__1391_04EA_0009_911F
 * @implements 1391:04EA:0009:911F ()
 *
 * Called From: 1391:0846:0015:9C95
 */
void f__1391_04EA_0009_911F()
{
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x0);
	if (!emu_flags.zf) { f__1391_04F3_0018_C01F(); return; }
	f__1391_059C_0012_3EDC(); return;
}

/**
 * Decompiled function f__1391_04F3_0018_C01F()
 *
 * @name f__1391_04F3_0018_C01F
 * @implements 1391:04F3:0018:C01F ()
 *
 * Called From: 1391:04EE:0009:911F
 */
void f__1391_04F3_0018_C01F()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x394A));
	emu_movw(&emu_si, emu_get_memory16(emu_es, emu_bx, 0x14));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x394A));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x3A38));
	if (emu_flags.zf) { f__1391_050B_001E_F492(); return; }
	f__1391_059C_0012_3EDC(); return;
}

/**
 * Decompiled function f__1391_050B_001E_F492()
 *
 * @name f__1391_050B_001E_F492
 * @implements 1391:050B:001E:F492 ()
 *
 * Called From: 1391:0506:0018:C01F
 */
void f__1391_050B_001E_F492()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x394A));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x14));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x38B4));
	if ((emu_flags.cf || emu_flags.zf)) { f__1391_051F_000A_0BF8(); return; }
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x38B4), 0x0);
	emu_cmpw(&emu_si, emu_get_memory16(emu_ds, 0x00, 0x38B4));
	if ((emu_flags.cf || emu_flags.zf)) { f__1391_0529_002C_37BF(); return; }
	emu_movw(&emu_ax, emu_si);
	f__1391_052C_0029_B3B9(); return;
}

/**
 * Decompiled function f__1391_051F_000A_0BF8()
 *
 * @name f__1391_051F_000A_0BF8
 * @implements 1391:051F:000A:0BF8 ()
 *
 * Called From: 1391:0517:001E:F492
 */
void f__1391_051F_000A_0BF8()
{
	emu_cmpw(&emu_si, emu_get_memory16(emu_ds, 0x00, 0x38B4));
	if ((emu_flags.cf || emu_flags.zf)) { f__1391_0529_002C_37BF(); return; }
	emu_movw(&emu_ax, emu_si);
	f__1391_052C_0029_B3B9(); return;
}

/**
 * Decompiled function f__1391_0529_002C_37BF()
 *
 * @name f__1391_0529_002C_37BF
 * @implements 1391:0529:002C:37BF ()
 *
 * Called From: 1391:0523:000A:0BF8
 */
void f__1391_0529_002C_37BF()
{
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x38B4));
	f__1391_052C_0029_B3B9(); return;
}

/**
 * Decompiled function f__1391_052C_0029_B3B9()
 *
 * @name f__1391_052C_0029_B3B9
 * @implements 1391:052C:0029:B3B9 ()
 *
 * Called From: 1391:0527:001E:F492
 */
void f__1391_052C_0029_B3B9()
{
	emu_movw(&emu_si, emu_ax);
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x38B4), 0x0);
	if (!emu_flags.zf) { f__1391_0573_001E_0E5D(); return; }
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x38B2), 0x1);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__1391_0573_001E_0E5D(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x394A));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x12), 0x0);
	if (emu_flags.zf) { f__1391_0573_001E_0E5D(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x394A));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x12));
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x0555); emu_cs = 0x34C1; ovl__34C1(2);
	f__1391_0555_0013_CAB6();
}

/**
 * Decompiled function f__1391_0555_0013_CAB6()
 *
 * @name f__1391_0555_0013_CAB6
 * @implements 1391:0555:0013:CAB6 ()
 *
 */
void f__1391_0555_0013_CAB6()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_cmpw(&emu_ax, 0xC8);
	if ((emu_flags.cf || emu_flags.zf)) { f__1391_0573_001E_0E5D(); return; }
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x142);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0568); emu_cs = 0x0FCB; f__0FCB_005F_001C_FDC4();
	f__1391_0568_0008_A466();
}

/**
 * Decompiled function f__1391_0568_0008_A466()
 *
 * @name f__1391_0568_0008_A466
 * @implements 1391:0568:0008:A466 ()
 *
 */
void f__1391_0568_0008_A466()
{
	emu_pop(&emu_cx);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0570); emu_cs = 0x10E4; f__10E4_09AB_0031_5E8E();
	f__1391_0570_0021_4319();
}

/**
 * Decompiled function f__1391_0570_0021_4319()
 *
 * @name f__1391_0570_0021_4319
 * @implements 1391:0570:0021:4319 ()
 *
 */
void f__1391_0570_0021_4319()
{
	emu_addw(&emu_sp, 0x6);
	f__1391_0573_001E_0E5D(); return;
}

/**
 * Decompiled function f__1391_0573_001E_0E5D()
 *
 * @name f__1391_0573_001E_0E5D
 * @implements 1391:0573:001E:0E5D ()
 *
 * Called From: 1391:0533:002C:37BF
 * Called From: 1391:053A:0029:B3B9
 * Called From: 1391:053A:002C:37BF
 * Called From: 1391:0545:0029:B3B9
 * Called From: 1391:055A:0013:CAB6
 */
void f__1391_0573_001E_0E5D()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x394A));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x12), 0x64);
	if (!emu_flags.cf) { f__1391_059C_0012_3EDC(); return; }
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x38B4), 0x0);
	if (emu_flags.zf) { f__1391_059C_0012_3EDC(); return; }
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x14B);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0591); emu_cs = 0x0FCB; f__0FCB_005F_001C_FDC4();
	f__1391_0591_0008_A466();
}

/**
 * Decompiled function f__1391_0591_0008_A466()
 *
 * @name f__1391_0591_0008_A466
 * @implements 1391:0591:0008:A466 ()
 *
 */
void f__1391_0591_0008_A466()
{
	emu_pop(&emu_cx);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0599); emu_cs = 0x10E4; f__10E4_09AB_0031_5E8E();
	f__1391_0599_0015_7A08();
}

/**
 * Decompiled function f__1391_0599_0015_7A08()
 *
 * @name f__1391_0599_0015_7A08
 * @implements 1391:0599:0015:7A08 ()
 *
 */
void f__1391_0599_0015_7A08()
{
	emu_addw(&emu_sp, 0x6);
	f__1391_059C_0012_3EDC(); return;
}

/**
 * Decompiled function f__1391_059C_0012_3EDC()
 *
 * @name f__1391_059C_0012_3EDC
 * @implements 1391:059C:0012:3EDC ()
 *
 * Called From: 1391:04F0:0009:911F
 * Called From: 1391:0508:0018:C01F
 * Called From: 1391:057C:001E:0E5D
 * Called From: 1391:057C:0021:4319
 * Called From: 1391:0583:001E:0E5D
 */
void f__1391_059C_0012_3EDC()
{
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x0);
	if (emu_flags.zf) { f__1391_05AF_000E_330E(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x394A));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_push(emu_cs); emu_push(0x05AE); emu_cs = 0x1A34; f__1A34_21E0_001A_547E();
	f__1391_05AE_000F_810E();
}

/**
 * Decompiled function f__1391_05AE_000F_810E()
 *
 * @name f__1391_05AE_000F_810E
 * @implements 1391:05AE:000F:810E ()
 *
 */
void f__1391_05AE_000F_810E()
{
	emu_pop(&emu_cx);
	f__1391_05AF_000E_330E(); return;
}

/**
 * Decompiled function f__1391_05AF_000E_330E()
 *
 * @name f__1391_05AF_000E_330E
 * @implements 1391:05AF:000E:330E ()
 *
 * Called From: 1391:05A0:0012:3EDC
 */
void f__1391_05AF_000E_330E()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x394A));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x2C), 0xFFFF);
	if (!emu_flags.zf) { f__1391_05BD_0009_5194(); return; }
	f__1391_076C_0009_D115(); return;
}

/**
 * Decompiled function f__1391_05BD_0009_5194()
 *
 * @name f__1391_05BD_0009_5194
 * @implements 1391:05BD:0009:5194 ()
 *
 * Called From: 1391:05B8:000E:330E
 */
void f__1391_05BD_0009_5194()
{
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x0);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x05C6; emu_last_cs = 0x1391; emu_last_ip = 0x05C1; emu_last_length = 0x0009; emu_last_crc = 0x5194; emu_call(); return; }
	f__1391_076C_0009_D115(); return;
}

/**
 * Decompiled function f__1391_076C_0009_D115()
 *
 * @name f__1391_076C_0009_D115
 * @implements 1391:076C:0009:D115 ()
 *
 * Called From: 1391:05BA:000F:810E
 * Called From: 1391:05BA:000E:330E
 * Called From: 1391:05C3:0009:5194
 */
void f__1391_076C_0009_D115()
{
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x0);
	if (!emu_flags.zf) { f__1391_0775_000C_2418(); return; }
	f__1391_07F5_0023_F0F1(); return;
}

/**
 * Decompiled function f__1391_0775_000C_2418()
 *
 * @name f__1391_0775_000C_2418
 * @implements 1391:0775:000C:2418 ()
 *
 * Called From: 1391:0770:0009:D115
 */
void f__1391_0775_000C_2418()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x394A));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_push(emu_cs); emu_push(0x0781); emu_cs = 0x0C3A; f__0C3A_1F70_0010_8DB3();
	f__1391_0781_000D_5BF0();
}

/**
 * Decompiled function f__1391_0781_000D_5BF0()
 *
 * @name f__1391_0781_000D_5BF0
 * @implements 1391:0781:000D:5BF0 ()
 *
 */
void f__1391_0781_000D_5BF0()
{
	emu_pop(&emu_cx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x394A));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_push(emu_cs); emu_push(0x078E); emu_cs = 0x0C3A; f__0C3A_20DB_0011_DA16();
	f__1391_078E_0058_0894();
}

/**
 * Decompiled function f__1391_078E_0058_0894()
 *
 * @name f__1391_078E_0058_0894
 * @implements 1391:078E:0058:0894 ()
 *
 */
void f__1391_078E_0058_0894()
{
	emu_pop(&emu_cx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x394A));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x24), 0x0);
	if (emu_flags.zf) { f__1391_07A2_0044_44DB(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x394A));
	emu_decw(&emu_get_memory16(emu_es, emu_bx, 0x24));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x394A));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x26), 0x0);
	if (emu_flags.zf) { f__1391_07B5_0031_AC71(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x394A));
	emu_decw(&emu_get_memory16(emu_es, emu_bx, 0x26));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x394A));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x28), 0x0);
	if (emu_flags.zf) { f__1391_07C8_001E_E4B4(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x394A));
	emu_decw(&emu_get_memory16(emu_es, emu_bx, 0x28));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x394A));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x2), 0x0);
	if ((emu_flags.cf || emu_flags.zf)) { f__1391_07F5_0023_F0F1(); return; }
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x10);
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x394A));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x0));
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x07E6); emu_cs = 0x1A34; emu_ip = 0x232C; emu_last_cs = 0x1391; emu_last_ip = 0x07E1; emu_last_length = 0x0058; emu_last_crc = 0x0894; emu_call();
	/* Unresolved jump */ emu_ip = 0x07E6; emu_last_cs = 0x1391; emu_last_ip = 0x07E6; emu_last_length = 0x0058; emu_last_crc = 0x0894; emu_call();
}

/**
 * Decompiled function f__1391_07A2_0044_44DB()
 *
 * @name f__1391_07A2_0044_44DB
 * @implements 1391:07A2:0044:44DB ()
 *
 * Called From: 1391:0798:0058:0894
 */
void f__1391_07A2_0044_44DB()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x394A));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x26), 0x0);
	if (emu_flags.zf) { f__1391_07B5_0031_AC71(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x394A));
	emu_decw(&emu_get_memory16(emu_es, emu_bx, 0x26));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x394A));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x28), 0x0);
	if (emu_flags.zf) { f__1391_07C8_001E_E4B4(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x394A));
	emu_decw(&emu_get_memory16(emu_es, emu_bx, 0x28));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x394A));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x2), 0x0);
	if ((emu_flags.cf || emu_flags.zf)) { f__1391_07F5_0023_F0F1(); return; }
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x10);
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x394A));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x0));
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x07E6); emu_cs = 0x1A34; emu_ip = 0x232C; emu_last_cs = 0x1391; emu_last_ip = 0x07E1; emu_last_length = 0x0044; emu_last_crc = 0x44DB; emu_call();
	/* Unresolved jump */ emu_ip = 0x07E6; emu_last_cs = 0x1391; emu_last_ip = 0x07E6; emu_last_length = 0x0044; emu_last_crc = 0x44DB; emu_call();
}

/**
 * Decompiled function f__1391_07B5_0031_AC71()
 *
 * @name f__1391_07B5_0031_AC71
 * @implements 1391:07B5:0031:AC71 ()
 *
 * Called From: 1391:07AB:0044:44DB
 * Called From: 1391:07AB:0058:0894
 */
void f__1391_07B5_0031_AC71()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x394A));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x28), 0x0);
	if (emu_flags.zf) { f__1391_07C8_001E_E4B4(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x394A));
	emu_decw(&emu_get_memory16(emu_es, emu_bx, 0x28));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x394A));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x2), 0x0);
	if ((emu_flags.cf || emu_flags.zf)) { f__1391_07F5_0023_F0F1(); return; }
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x10);
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x394A));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x0));
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x07E6); emu_cs = 0x1A34; emu_ip = 0x232C; emu_last_cs = 0x1391; emu_last_ip = 0x07E1; emu_last_length = 0x0031; emu_last_crc = 0xAC71; emu_call();
	/* Unresolved jump */ emu_ip = 0x07E6; emu_last_cs = 0x1391; emu_last_ip = 0x07E6; emu_last_length = 0x0031; emu_last_crc = 0xAC71; emu_call();
}

/**
 * Decompiled function f__1391_07C8_001E_E4B4()
 *
 * @name f__1391_07C8_001E_E4B4
 * @implements 1391:07C8:001E:E4B4 ()
 *
 * Called From: 1391:07BE:0031:AC71
 * Called From: 1391:07BE:0044:44DB
 * Called From: 1391:07BE:0058:0894
 */
void f__1391_07C8_001E_E4B4()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x394A));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x2), 0x0);
	if ((emu_flags.cf || emu_flags.zf)) { f__1391_07F5_0023_F0F1(); return; }
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x10);
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x394A));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x0));
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x07E6); emu_cs = 0x1A34; emu_ip = 0x232C; emu_last_cs = 0x1391; emu_last_ip = 0x07E1; emu_last_length = 0x001E; emu_last_crc = 0xE4B4; emu_call();
	/* Unresolved jump */ emu_ip = 0x07E6; emu_last_cs = 0x1391; emu_last_ip = 0x07E6; emu_last_length = 0x001E; emu_last_crc = 0xE4B4; emu_call();
}

/**
 * Decompiled function f__1391_07F5_0023_F0F1()
 *
 * @name f__1391_07F5_0023_F0F1
 * @implements 1391:07F5:0023:F0F1 ()
 *
 * Called From: 1391:0772:0009:D115
 * Called From: 1391:07D1:001E:E4B4
 * Called From: 1391:07D1:0031:AC71
 * Called From: 1391:07D1:0058:0894
 * Called From: 1391:07D1:0044:44DB
 */
void f__1391_07F5_0023_F0F1()
{
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x0);
	if (emu_flags.zf) { f__1391_082A_000A_FEA0(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x394A));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x18));
	emu_movb(&emu_cl, 0x5);
	emu_sarw(&emu_ax, emu_cl);
	emu_incw(&emu_ax);
	emu_movw(&emu_dx, emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x394A));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x12), emu_dx);
	if ((emu_flags.cf || emu_flags.zf)) { f__1391_0818_001C_4160(); return; }
	emu_movw(&emu_ax, emu_dx);
	f__1391_0820_0014_2438(); return;
}

/**
 * Decompiled function f__1391_0818_001C_4160()
 *
 * @name f__1391_0818_001C_4160
 * @implements 1391:0818:001C:4160 ()
 *
 * Called From: 1391:0812:0023:F0F1
 */
void f__1391_0818_001C_4160()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x394A));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x12));
	emu_movw(&emu_dx, emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x394A));
	emu_subw(&emu_get_memory16(emu_es, emu_bx, 0x12), emu_dx);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x14);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0834); emu_cs = 0x10BE; emu_House_FindNext();
	f__1391_0834_0015_9C95();
}

/**
 * Decompiled function f__1391_0820_0014_2438()
 *
 * @name f__1391_0820_0014_2438
 * @implements 1391:0820:0014:2438 ()
 *
 * Called From: 1391:0816:0023:F0F1
 */
void f__1391_0820_0014_2438()
{
	emu_movw(&emu_dx, emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x394A));
	emu_subw(&emu_get_memory16(emu_es, emu_bx, 0x12), emu_dx);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x14);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0834); emu_cs = 0x10BE; emu_House_FindNext();
	f__1391_0834_0015_9C95();
}

/**
 * Decompiled function f__1391_082A_000A_FEA0()
 *
 * @name f__1391_082A_000A_FEA0
 * @implements 1391:082A:000A:FEA0 ()
 *
 * Called From: 1391:07F9:0023:F0F1
 */
void f__1391_082A_000A_FEA0()
{
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x14);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0834); emu_cs = 0x10BE; emu_House_FindNext();
	f__1391_0834_0015_9C95();
}

/**
 * Decompiled function f__1391_0834_0015_9C95()
 *
 * @name f__1391_0834_0015_9C95
 * @implements 1391:0834:0015:9C95 ()
 *
 * Called From: 1391:04E7:0003:9CB2
 */
void f__1391_0834_0015_9C95()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x394C), emu_dx);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x394A), emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x394A));
	emu_orw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x394C));
	if (emu_flags.zf) { f__1391_0849_0006_F7CE(); return; }
	f__1391_04EA_0009_911F(); return;
}

/**
 * Decompiled function f__1391_0849_0006_F7CE()
 *
 * @name f__1391_0849_0006_F7CE
 * @implements 1391:0849:0006:F7CE ()
 *
 * Called From: 1391:003C:0035:2CB6
 * Called From: 1391:0844:0015:9C95
 */
void f__1391_0849_0006_F7CE()
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

/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__1DB6_0004_000B_BA01()
 *
 * @name f__1DB6_0004_000B_BA01
 * @implements 1DB6:0004:000B:BA01 ()
 *
 * Called From: 3FF1:010F:0030:230B
 * Called From: B480:010F:0030:230B
 */
void f__1DB6_0004_000B_BA01()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x2);
	emu_push(emu_cs); emu_push(0x000F); emu_cs = 0x263B; f__263B_0006_001C_EE50();
	f__1DB6_000F_000C_F865();
}

/**
 * Decompiled function f__1DB6_000F_000C_F865()
 *
 * @name f__1DB6_000F_000C_F865
 * @implements 1DB6:000F:000C:F865 ()
 *
 * Called From: 1DB6:000F:000B:BA01
 */
void f__1DB6_000F_000C_F865()
{
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x6E26), emu_ax.x);
	emu_movw(&emu_ax.x, 0x3F);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x001B); emu_cs = 0x01F7; f__01F7_04BD_000A_EF26();
	f__1DB6_001B_0021_BCC3();
}

/**
 * Decompiled function f__1DB6_001B_0021_BCC3()
 *
 * @name f__1DB6_001B_0021_BCC3
 * @implements 1DB6:001B:0021:BCC3 ()
 *
 * Called From: 1DB6:001B:000C:F865
 */
void f__1DB6_001B_0021_BCC3()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x67B8), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x67BA), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_flags.zf) { emu_ip = 0x0061; emu_last_cs = 0x1DB6; emu_last_ip = 0x0029; emu_last_length = 0x0021; emu_last_crc = 0xBCC3; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, 0x261F);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x8);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x3F);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x003C); emu_cs = 0x01F7; f__01F7_04CC_000E_9C78();
	f__1DB6_003C_0019_9A38();
}

/**
 * Decompiled function f__1DB6_003C_0019_9A38()
 *
 * @name f__1DB6_003C_0019_9A38
 * @implements 1DB6:003C:0019:9A38 ()
 *
 * Called From: 1DB6:003C:0021:BCC3
 */
void f__1DB6_003C_0019_9A38()
{
	emu_addws(&emu_sp, 0x6);
	emu_movw(&emu_ax.x, 0x9);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x62F7);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x67B8));
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x67BA));
	emu_push(emu_cs); emu_push(0x0055); emu_cs = 0x01F7; f__01F7_28B8_0024_D407();
	f__1DB6_0055_0011_208A();
}

/**
 * Decompiled function f__1DB6_0055_0011_208A()
 *
 * @name f__1DB6_0055_0011_208A
 * @implements 1DB6:0055:0011:208A ()
 *
 * Called From: 1DB6:0055:0019:9A38
 */
void f__1DB6_0055_0011_208A()
{
	emu_addws(&emu_sp, 0xA);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x67BA));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x65), 0xCB);
	emu_push(emu_cs); emu_push(0x0066); emu_cs = 0x01F7; f__01F7_0428_0010_4994();
	f__1DB6_0066_0008_87DE();
}

/**
 * Decompiled function f__1DB6_0066_0008_87DE()
 *
 * @name f__1DB6_0066_0008_87DE
 * @implements 1DB6:0066:0008:87DE ()
 *
 * Called From: 1DB6:0066:0011:208A
 */
void f__1DB6_0066_0008_87DE()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_push(emu_cs); emu_push(0x006E); emu_cs = 0x2531; f__2531_0019_0010_8C90();
	f__1DB6_006E_0005_1024();
}

/**
 * Decompiled function f__1DB6_006E_0005_1024()
 *
 * @name f__1DB6_006E_0005_1024
 * @implements 1DB6:006E:0005:1024 ()
 *
 * Called From: 1DB6:006E:0008:87DE
 */
void f__1DB6_006E_0005_1024()
{
	emu_push(emu_cs); emu_push(0x0073); emu_cs = 0x28FD; f__28FD_000C_0007_3E7E();
	f__1DB6_0073_000B_6FCF();
}

/**
 * Decompiled function f__1DB6_0073_000B_6FCF()
 *
 * @name f__1DB6_0073_000B_6FCF
 * @implements 1DB6:0073:000B:6FCF ()
 *
 * Called From: 1DB6:0073:0005:1024
 */
void f__1DB6_0073_000B_6FCF()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (!emu_flags.zf) { f__1DB6_007E_001A_BDE9(); return; }
	emu_ip = 0x0182; emu_last_cs = 0x1DB6; emu_last_ip = 0x007B; emu_last_length = 0x000B; emu_last_crc = 0x6FCF; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__1DB6_007E_001A_BDE9()
 *
 * @name f__1DB6_007E_001A_BDE9
 * @implements 1DB6:007E:001A:BDE9 ()
 *
 * Called From: 1DB6:0079:000B:6FCF
 */
void f__1DB6_007E_001A_BDE9()
{
	emu_movw(&emu_ax.x, 0x33F4);
	emu_movw(&emu_es, emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_es, 0x00,  0x128), 0x0);
	if (!emu_flags.zf) { f__1DB6_00B6_000F_D96E(); return; }
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6784));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6782));
	emu_push(emu_cs); emu_push(0x0098); emu_cs = 0x28E4; emu_ip = 0x009A; emu_last_cs = 0x1DB6; emu_last_ip = 0x0093; emu_last_length = 0x001A; emu_last_crc = 0xBDE9; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__1DB6_00B1_0003_070A()
 *
 * @name f__1DB6_00B1_0003_070A
 * @implements 1DB6:00B1:0003:070A ()
 *
 * Called From: 1DB6:01C1:000A:DC23
 */
void f__1DB6_00B1_0003_070A()
{
	f__1DB6_01C4_0004_0F7A(); return;
}

/**
 * Decompiled function f__1DB6_00B6_000F_D96E()
 *
 * @name f__1DB6_00B6_000F_D96E
 * @implements 1DB6:00B6:000F:D96E ()
 *
 * Called From: 1DB6:0089:001A:BDE9
 */
void f__1DB6_00B6_000F_D96E()
{
	emu_movw(&emu_ax.x, 0x33F4);
	emu_movw(&emu_es, emu_ax.x);
	emu_push(emu_get_memory16(emu_es, 0x00,  0x128));
	emu_push(emu_cs); emu_push(0x00C5); emu_cs = 0x01F7; f__01F7_23CC_0013_04A4();
	f__1DB6_00C5_0015_2267();
}

/**
 * Decompiled function f__1DB6_00C5_0015_2267()
 *
 * @name f__1DB6_00C5_0015_2267
 * @implements 1DB6:00C5:0015:2267 ()
 *
 * Called From: 1DB6:00C5:000F:D96E
 */
void f__1DB6_00C5_0015_2267()
{
	emu_pop(&emu_cx.x);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0x12), 0x0);
	if (emu_flags.zf) { emu_ip = 0x00F1; emu_last_cs = 0x1DB6; emu_last_ip = 0x00CA; emu_last_length = 0x0015; emu_last_crc = 0x2267; emu_call(); return; } // Jump does not resolve
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x00DA); emu_cs = 0x217E; f__217E_08F0_0016_64F5();
	f__1DB6_00DA_0014_2704();
}

/**
 * Decompiled function f__1DB6_00DA_0014_2704()
 *
 * @name f__1DB6_00DA_0014_2704
 * @implements 1DB6:00DA:0014:2704 ()
 *
 * Called From: 1DB6:00DA:0015:2267
 */
void f__1DB6_00DA_0014_2704()
{
	emu_addws(&emu_sp, 0x6);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_cs); emu_push(0x00EE); emu_cs = 0x217E; f__217E_0ABA_001A_91C2();
	f__1DB6_00EE_000E_2FEC();
}

/**
 * Decompiled function f__1DB6_00EE_000E_2FEC()
 *
 * @name f__1DB6_00EE_000E_2FEC
 * @implements 1DB6:00EE:000E:2FEC ()
 *
 * Called From: 1DB6:00EE:0014:2704
 */
void f__1DB6_00EE_000E_2FEC()
{
	emu_addws(&emu_sp, 0x8);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x00FC); emu_cs = 0x1FB5; f__1FB5_15B5_0015_6875();
	f__1DB6_00FC_0014_C3CB();
}

/**
 * Decompiled function f__1DB6_00FC_0014_C3CB()
 *
 * @name f__1DB6_00FC_0014_C3CB
 * @implements 1DB6:00FC:0014:C3CB ()
 *
 * Called From: 1DB6:00FC:000E:2FEC
 */
void f__1DB6_00FC_0014_C3CB()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (emu_flags.zf) { emu_ip = 0x0177; emu_last_cs = 0x1DB6; emu_last_ip = 0x0100; emu_last_length = 0x0014; emu_last_crc = 0xC3CB; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, 0x50);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x9882);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0110); emu_cs = 0x01F7; f__01F7_276F_000F_882B();
	f__1DB6_0110_0012_8307();
}

/**
 * Decompiled function f__1DB6_0110_0012_8307()
 *
 * @name f__1DB6_0110_0012_8307
 * @implements 1DB6:0110:0012:8307 ()
 *
 * Called From: 1DB6:0110:0014:C3CB
 */
void f__1DB6_0110_0012_8307()
{
	emu_addws(&emu_sp, 0x6);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x9882);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x998E);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0122); emu_cs = 0x01F7; f__01F7_38F6_0029_5C00();
	f__1DB6_0122_000D_A91B();
}

/**
 * Decompiled function f__1DB6_0122_000D_A91B()
 *
 * @name f__1DB6_0122_000D_A91B
 * @implements 1DB6:0122:000D:A91B ()
 *
 * Called From: 1DB6:0122:0012:8307
 */
void f__1DB6_0122_000D_A91B()
{
	emu_addws(&emu_sp, 0x8);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x9882);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x012F); emu_cs = 0x01F7; f__01F7_39A5_001F_856D();
	f__1DB6_012F_001B_9653();
}

/**
 * Decompiled function f__1DB6_012F_001B_9653()
 *
 * @name f__1DB6_012F_001B_9653
 * @implements 1DB6:012F:001B:9653 ()
 *
 * Called From: 1DB6:012F:000D:A91B
 */
void f__1DB6_012F_001B_9653()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_decw(&emu_ax.x);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_cmpb(&emu_get_memory8(emu_ds, emu_bx.x, -0x677E), 0x5C);
	if (emu_flags.zf) { f__1DB6_014D_0010_7721(); return; }
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x6300);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x9882);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x014A); emu_cs = 0x01F7; emu_ip = 0x3994; emu_last_cs = 0x1DB6; emu_last_ip = 0x0145; emu_last_length = 0x001B; emu_last_crc = 0x9653; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__1DB6_014D_0010_7721()
 *
 * @name f__1DB6_014D_0010_7721
 * @implements 1DB6:014D:0010:7721 ()
 *
 * Called From: 1DB6:0139:001B:9653
 */
void f__1DB6_014D_0010_7721()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x9882);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x015D); emu_cs = 0x01F7; f__01F7_384A_003F_A636();
	f__1DB6_015D_0017_198C();
}

/**
 * Decompiled function f__1DB6_015D_0017_198C()
 *
 * @name f__1DB6_015D_0017_198C
 * @implements 1DB6:015D:0017:198C ()
 *
 * Called From: 1DB6:015D:0010:7721
 */
void f__1DB6_015D_0017_198C()
{
	emu_addws(&emu_sp, 0x8);
	emu_movw(&emu_ax.x, 0x33F4);
	emu_movw(&emu_es, emu_ax.x);
	emu_movw(&emu_get_memory16(emu_es, 0x00,  0x128), 0xFFFF);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_cs); emu_push(0x0174); emu_cs = 0x01F7; f__01F7_0442_0015_621D();
	f__1DB6_0174_0003_0172();
}

/**
 * Decompiled function f__1DB6_0174_0003_0172()
 *
 * @name f__1DB6_0174_0003_0172
 * @implements 1DB6:0174:0003:0172 ()
 *
 * Called From: 1DB6:0174:0017:198C
 */
void f__1DB6_0174_0003_0172()
{
	emu_pop(&emu_cx.x);
	f__1DB6_0182_0005_13DA(); return;
}

/**
 * Decompiled function f__1DB6_0182_0005_13DA()
 *
 * @name f__1DB6_0182_0005_13DA
 * @implements 1DB6:0182:0005:13DA ()
 *
 * Called From: 1DB6:0175:0003:0172
 */
void f__1DB6_0182_0005_13DA()
{
	emu_push(emu_cs); emu_push(0x0187); emu_cs = 0x23E1; f__23E1_0334_000B_B6F7();
	f__1DB6_0187_0017_6058();
}

/**
 * Decompiled function f__1DB6_0187_0017_6058()
 *
 * @name f__1DB6_0187_0017_6058
 * @implements 1DB6:0187:0017:6058 ()
 *
 * Called From: 1DB6:0187:0005:13DA
 */
void f__1DB6_0187_0017_6058()
{
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0xC));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__1DB6_019E_000B_D09E(); return; }
	if ((emu_flags.sf != emu_flags.of)) { emu_ip = 0x0193; emu_last_cs = 0x1DB6; emu_last_ip = 0x018C; emu_last_length = 0x0017; emu_last_crc = 0x6058; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	if (!emu_flags.cf) { emu_ip = 0x019E; emu_last_cs = 0x1DB6; emu_last_ip = 0x0191; emu_last_length = 0x0017; emu_last_crc = 0x6058; emu_call(); return; } // Jump does not resolve
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x678C));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x678A));
	emu_ip = 0x0093; emu_last_cs = 0x1DB6; emu_last_ip = 0x019B; emu_last_length = 0x0017; emu_last_crc = 0x6058; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__1DB6_019E_000B_D09E()
 *
 * @name f__1DB6_019E_000B_D09E
 * @implements 1DB6:019E:000B:D09E ()
 *
 * Called From: 1DB6:018A:0017:6058
 */
void f__1DB6_019E_000B_D09E()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x10));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_push(emu_cs); emu_push(0x01A9); emu_cs = 0x2649; f__2649_0053_001D_29C8();
	f__1DB6_01A9_0007_2D2A();
}

/**
 * Decompiled function f__1DB6_01A9_0007_2D2A()
 *
 * @name f__1DB6_01A9_0007_2D2A
 * @implements 1DB6:01A9:0007:2D2A ()
 *
 * Called From: 1DB6:01A9:000B:D09E
 */
void f__1DB6_01A9_0007_2D2A()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_push(emu_cs); emu_push(0x01B0); emu_cs = 0x29E8; f__29E8_0971_0071_A820();
	f__1DB6_01B0_0005_1012();
}

/**
 * Decompiled function f__1DB6_01B0_0005_1012()
 *
 * @name f__1DB6_01B0_0005_1012
 * @implements 1DB6:01B0:0005:1012 ()
 *
 * Called From: 1DB6:01B0:0007:2D2A
 */
void f__1DB6_01B0_0005_1012()
{
	emu_push(emu_cs); emu_push(0x01B5); emu_cs = 0x2BD1; f__2BD1_0004_0001_0196();
	f__1DB6_01B5_0005_1C5A();
}

/**
 * Decompiled function f__1DB6_01B5_0005_1C5A()
 *
 * @name f__1DB6_01B5_0005_1C5A
 * @implements 1DB6:01B5:0005:1C5A ()
 *
 * Called From: 1DB6:01B5:0005:1012
 */
void f__1DB6_01B5_0005_1C5A()
{
	emu_push(emu_cs); emu_push(0x01BA); emu_cs = 0x1FB5; f__1FB5_18D3_000E_2DA7();
	f__1DB6_01BA_000A_DC23();
}

/**
 * Decompiled function f__1DB6_01BA_000A_DC23()
 *
 * @name f__1DB6_01BA_000A_DC23
 * @implements 1DB6:01BA:000A:DC23 ()
 *
 * Called From: 1DB6:01BA:0005:1C5A
 */
void f__1DB6_01BA_000A_DC23()
{
	emu_movb(&emu_get_memory8(emu_ds, 0x00,  0x62F6), 0x1);
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__1DB6_00B1_0003_070A(); return;
}

/**
 * Decompiled function f__1DB6_01C4_0004_0F7A()
 *
 * @name f__1DB6_01C4_0004_0F7A
 * @implements 1DB6:01C4:0004:0F7A ()
 *
 * Called From: 1DB6:00B1:0003:070A
 */
void f__1DB6_01C4_0004_0F7A()
{
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

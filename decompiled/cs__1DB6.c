/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__1DB6_0004_000B_BFBA()
 *
 * @name f__1DB6_0004_000B_BFBA
 * @implements 1DB6:0004:000B:BFBA ()
 *
 * Called From: B480:010F:0030:016D
 */
void f__1DB6_0004_000B_BFBA()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x2);
	emu_push(emu_cs); emu_push(0x000F); emu_cs = 0x263B; f__263B_0006_001C_9C72();
	f__1DB6_000F_000C_BA0F();
}

/**
 * Decompiled function f__1DB6_000F_000C_BA0F()
 *
 * @name f__1DB6_000F_000C_BA0F
 * @implements 1DB6:000F:000C:BA0F ()
 *
 * Called From: 1DB6:000F:000B:BFBA
 */
void f__1DB6_000F_000C_BA0F()
{
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x6E26), emu_ax.x);
	emu_movw(&emu_ax.x, 0x3F);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x001B); emu_cs = 0x01F7; f__01F7_04BD_000A_984A();
	f__1DB6_001B_0021_7587();
}

/**
 * Decompiled function f__1DB6_001B_0021_7587()
 *
 * @name f__1DB6_001B_0021_7587
 * @implements 1DB6:001B:0021:7587 ()
 *
 * Called From: 1DB6:001B:000C:BA0F
 */
void f__1DB6_001B_0021_7587()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x67B8), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x67BA), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_flags.zf) { emu_ip = 0x0061; emu_last_cs = 0x1DB6; emu_last_ip = 0x0029; emu_last_length = 0x0021; emu_last_crc = 0x7587; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, 0x261F);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x8);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x3F);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x003C); emu_cs = 0x01F7; f__01F7_04CC_000E_D711();
	f__1DB6_003C_0019_FD4E();
}

/**
 * Decompiled function f__1DB6_003C_0019_FD4E()
 *
 * @name f__1DB6_003C_0019_FD4E
 * @implements 1DB6:003C:0019:FD4E ()
 *
 * Called From: 1DB6:003C:0021:7587
 */
void f__1DB6_003C_0019_FD4E()
{
	emu_addws(&emu_sp, 0x6);
	emu_movw(&emu_ax.x, 0x9);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x62F7);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x67B8));
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x67BA));
	emu_push(emu_cs); emu_push(0x0055); emu_cs = 0x01F7; f__01F7_28B8_0024_83C9();
	f__1DB6_0055_0011_84E2();
}

/**
 * Decompiled function f__1DB6_0055_0011_84E2()
 *
 * @name f__1DB6_0055_0011_84E2
 * @implements 1DB6:0055:0011:84E2 ()
 *
 * Called From: 1DB6:0055:0019:FD4E
 */
void f__1DB6_0055_0011_84E2()
{
	emu_addws(&emu_sp, 0xA);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x67BA));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x65), 0xCB);
	emu_push(emu_cs); emu_push(0x0066); emu_cs = 0x01F7; f__01F7_0428_0010_87B4();
	f__1DB6_0066_0008_B7D2();
}

/**
 * Decompiled function f__1DB6_0066_0008_B7D2()
 *
 * @name f__1DB6_0066_0008_B7D2
 * @implements 1DB6:0066:0008:B7D2 ()
 *
 * Called From: 1DB6:0066:0011:84E2
 */
void f__1DB6_0066_0008_B7D2()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_push(emu_cs); emu_push(0x006E); emu_cs = 0x2531; f__2531_0019_0010_2000();
	f__1DB6_006E_0005_90EF();
}

/**
 * Decompiled function f__1DB6_006E_0005_90EF()
 *
 * @name f__1DB6_006E_0005_90EF
 * @implements 1DB6:006E:0005:90EF ()
 *
 * Called From: 1DB6:006E:0008:B7D2
 */
void f__1DB6_006E_0005_90EF()
{
	emu_push(emu_cs); emu_push(0x0073); emu_cs = 0x28FD; f__28FD_000C_0007_5DA9();
	f__1DB6_0073_000B_7417();
}

/**
 * Decompiled function f__1DB6_0073_000B_7417()
 *
 * @name f__1DB6_0073_000B_7417
 * @implements 1DB6:0073:000B:7417 ()
 *
 * Called From: 1DB6:0073:0005:90EF
 */
void f__1DB6_0073_000B_7417()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (!emu_flags.zf) { f__1DB6_007E_001A_B99F(); return; }
	emu_ip = 0x0182; emu_last_cs = 0x1DB6; emu_last_ip = 0x007B; emu_last_length = 0x000B; emu_last_crc = 0x7417; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__1DB6_007E_001A_B99F()
 *
 * @name f__1DB6_007E_001A_B99F
 * @implements 1DB6:007E:001A:B99F ()
 *
 * Called From: 1DB6:0079:000B:7417
 */
void f__1DB6_007E_001A_B99F()
{
	emu_movw(&emu_ax.x, 0x33F4);
	emu_movw(&emu_es, emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_es, 0x00,  0x128), 0x0);
	if (!emu_flags.zf) { f__1DB6_00B6_000F_5886(); return; }
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6784));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6782));
	emu_push(emu_cs); emu_push(0x0098); emu_cs = 0x28E4; emu_ip = 0x009A; emu_last_cs = 0x1DB6; emu_last_ip = 0x0093; emu_last_length = 0x001A; emu_last_crc = 0xB99F; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__1DB6_00B1_0003_1DA4()
 *
 * @name f__1DB6_00B1_0003_1DA4
 * @implements 1DB6:00B1:0003:1DA4 ()
 *
 * Called From: 1DB6:01C1:000A:E0C8
 */
void f__1DB6_00B1_0003_1DA4()
{
	f__1DB6_01C4_0004_893F(); return;
}

/**
 * Decompiled function f__1DB6_00B6_000F_5886()
 *
 * @name f__1DB6_00B6_000F_5886
 * @implements 1DB6:00B6:000F:5886 ()
 *
 * Called From: 1DB6:0089:001A:B99F
 */
void f__1DB6_00B6_000F_5886()
{
	emu_movw(&emu_ax.x, 0x33F4);
	emu_movw(&emu_es, emu_ax.x);
	emu_push(emu_get_memory16(emu_es, 0x00,  0x128));
	emu_push(emu_cs); emu_push(0x00C5); emu_cs = 0x01F7; f__01F7_23CC_0013_6B52();
	f__1DB6_00C5_0015_4555();
}

/**
 * Decompiled function f__1DB6_00C5_0015_4555()
 *
 * @name f__1DB6_00C5_0015_4555
 * @implements 1DB6:00C5:0015:4555 ()
 *
 * Called From: 1DB6:00C5:000F:5886
 */
void f__1DB6_00C5_0015_4555()
{
	emu_pop(&emu_cx.x);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0x12), 0x0);
	if (emu_flags.zf) { emu_ip = 0x00F1; emu_last_cs = 0x1DB6; emu_last_ip = 0x00CA; emu_last_length = 0x0015; emu_last_crc = 0x4555; emu_call(); return; } // Jump does not resolve
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x00DA); emu_cs = 0x217E; f__217E_08F0_0016_CE0F();
	f__1DB6_00DA_0014_2E19();
}

/**
 * Decompiled function f__1DB6_00DA_0014_2E19()
 *
 * @name f__1DB6_00DA_0014_2E19
 * @implements 1DB6:00DA:0014:2E19 ()
 *
 * Called From: 1DB6:00DA:0015:4555
 */
void f__1DB6_00DA_0014_2E19()
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
	emu_push(emu_cs); emu_push(0x00EE); emu_cs = 0x217E; f__217E_0ABA_001A_9AA0();
	f__1DB6_00EE_000E_212B();
}

/**
 * Decompiled function f__1DB6_00EE_000E_212B()
 *
 * @name f__1DB6_00EE_000E_212B
 * @implements 1DB6:00EE:000E:212B ()
 *
 * Called From: 1DB6:00EE:0014:2E19
 */
void f__1DB6_00EE_000E_212B()
{
	emu_addws(&emu_sp, 0x8);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x00FC); emu_cs = 0x1FB5; f__1FB5_15B5_0015_6A00();
	f__1DB6_00FC_0014_A7DD();
}

/**
 * Decompiled function f__1DB6_00FC_0014_A7DD()
 *
 * @name f__1DB6_00FC_0014_A7DD
 * @implements 1DB6:00FC:0014:A7DD ()
 *
 * Called From: 1DB6:00FC:000E:212B
 */
void f__1DB6_00FC_0014_A7DD()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (emu_flags.zf) { emu_ip = 0x0177; emu_last_cs = 0x1DB6; emu_last_ip = 0x0100; emu_last_length = 0x0014; emu_last_crc = 0xA7DD; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, 0x50);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x9882);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0110); emu_cs = 0x01F7; f__01F7_276F_000F_E56B();
	f__1DB6_0110_0012_EEC5();
}

/**
 * Decompiled function f__1DB6_0110_0012_EEC5()
 *
 * @name f__1DB6_0110_0012_EEC5
 * @implements 1DB6:0110:0012:EEC5 ()
 *
 * Called From: 1DB6:0110:0014:A7DD
 */
void f__1DB6_0110_0012_EEC5()
{
	emu_addws(&emu_sp, 0x6);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x9882);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x998E);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0122); emu_cs = 0x01F7; f__01F7_38F6_0029_8B99();
	f__1DB6_0122_000D_43EF();
}

/**
 * Decompiled function f__1DB6_0122_000D_43EF()
 *
 * @name f__1DB6_0122_000D_43EF
 * @implements 1DB6:0122:000D:43EF ()
 *
 * Called From: 1DB6:0122:0012:EEC5
 */
void f__1DB6_0122_000D_43EF()
{
	emu_addws(&emu_sp, 0x8);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x9882);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x012F); emu_cs = 0x01F7; f__01F7_39A5_001F_1A5D();
	f__1DB6_012F_001B_2F76();
}

/**
 * Decompiled function f__1DB6_012F_001B_2F76()
 *
 * @name f__1DB6_012F_001B_2F76
 * @implements 1DB6:012F:001B:2F76 ()
 *
 * Called From: 1DB6:012F:000D:43EF
 */
void f__1DB6_012F_001B_2F76()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_decw(&emu_ax.x);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_cmpb(&emu_get_memory8(emu_ds, emu_bx.x, -0x677E), 0x5C);
	if (emu_flags.zf) { f__1DB6_014D_0010_743C(); return; }
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x6300);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x9882);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x014A); emu_cs = 0x01F7; emu_ip = 0x3994; emu_last_cs = 0x1DB6; emu_last_ip = 0x0145; emu_last_length = 0x001B; emu_last_crc = 0x2F76; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__1DB6_014D_0010_743C()
 *
 * @name f__1DB6_014D_0010_743C
 * @implements 1DB6:014D:0010:743C ()
 *
 * Called From: 1DB6:0139:001B:2F76
 */
void f__1DB6_014D_0010_743C()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x9882);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x015D); emu_cs = 0x01F7; f__01F7_384A_003F_AE43();
	f__1DB6_015D_0017_0927();
}

/**
 * Decompiled function f__1DB6_015D_0017_0927()
 *
 * @name f__1DB6_015D_0017_0927
 * @implements 1DB6:015D:0017:0927 ()
 *
 * Called From: 1DB6:015D:0010:743C
 */
void f__1DB6_015D_0017_0927()
{
	emu_addws(&emu_sp, 0x8);
	emu_movw(&emu_ax.x, 0x33F4);
	emu_movw(&emu_es, emu_ax.x);
	emu_movw(&emu_get_memory16(emu_es, 0x00,  0x128), 0xFFFF);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_cs); emu_push(0x0174); emu_cs = 0x01F7; f__01F7_0442_0015_6A10();
	f__1DB6_0174_0003_CE9A();
}

/**
 * Decompiled function f__1DB6_0174_0003_CE9A()
 *
 * @name f__1DB6_0174_0003_CE9A
 * @implements 1DB6:0174:0003:CE9A ()
 *
 * Called From: 1DB6:0174:0017:0927
 */
void f__1DB6_0174_0003_CE9A()
{
	emu_pop(&emu_cx.x);
	f__1DB6_0182_0005_150B(); return;
}

/**
 * Decompiled function f__1DB6_0182_0005_150B()
 *
 * @name f__1DB6_0182_0005_150B
 * @implements 1DB6:0182:0005:150B ()
 *
 * Called From: 1DB6:0175:0003:CE9A
 */
void f__1DB6_0182_0005_150B()
{
	emu_push(emu_cs); emu_push(0x0187); emu_cs = 0x23E1; f__23E1_0334_000B_CF65();
	f__1DB6_0187_0017_B903();
}

/**
 * Decompiled function f__1DB6_0187_0017_B903()
 *
 * @name f__1DB6_0187_0017_B903
 * @implements 1DB6:0187:0017:B903 ()
 *
 * Called From: 1DB6:0187:0005:150B
 */
void f__1DB6_0187_0017_B903()
{
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0xC));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__1DB6_019E_000B_5DBC(); return; }
	if ((emu_flags.sf != emu_flags.of)) { emu_ip = 0x0193; emu_last_cs = 0x1DB6; emu_last_ip = 0x018C; emu_last_length = 0x0017; emu_last_crc = 0xB903; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	if (!emu_flags.cf) { emu_ip = 0x019E; emu_last_cs = 0x1DB6; emu_last_ip = 0x0191; emu_last_length = 0x0017; emu_last_crc = 0xB903; emu_call(); return; } // Jump does not resolve
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x678C));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x678A));
	emu_ip = 0x0093; emu_last_cs = 0x1DB6; emu_last_ip = 0x019B; emu_last_length = 0x0017; emu_last_crc = 0xB903; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__1DB6_019E_000B_5DBC()
 *
 * @name f__1DB6_019E_000B_5DBC
 * @implements 1DB6:019E:000B:5DBC ()
 *
 * Called From: 1DB6:018A:0017:B903
 */
void f__1DB6_019E_000B_5DBC()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x10));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_push(emu_cs); emu_push(0x01A9); emu_cs = 0x2649; f__2649_0053_001D_FEB5();
	f__1DB6_01A9_0007_65FE();
}

/**
 * Decompiled function f__1DB6_01A9_0007_65FE()
 *
 * @name f__1DB6_01A9_0007_65FE
 * @implements 1DB6:01A9:0007:65FE ()
 *
 * Called From: 1DB6:01A9:000B:5DBC
 */
void f__1DB6_01A9_0007_65FE()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_push(emu_cs); emu_push(0x01B0); emu_cs = 0x29E8; f__29E8_0971_0071_E515();
	f__1DB6_01B0_0005_1164();
}

/**
 * Decompiled function f__1DB6_01B0_0005_1164()
 *
 * @name f__1DB6_01B0_0005_1164
 * @implements 1DB6:01B0:0005:1164 ()
 *
 * Called From: 1DB6:01B0:0007:65FE
 */
void f__1DB6_01B0_0005_1164()
{
	emu_push(emu_cs); emu_push(0x01B5); emu_cs = 0x2BD1; f__2BD1_0004_0001_6580();
	f__1DB6_01B5_0005_7870();
}

/**
 * Decompiled function f__1DB6_01B5_0005_7870()
 *
 * @name f__1DB6_01B5_0005_7870
 * @implements 1DB6:01B5:0005:7870 ()
 *
 * Called From: 1DB6:01B5:0005:1164
 */
void f__1DB6_01B5_0005_7870()
{
	emu_push(emu_cs); emu_push(0x01BA); emu_cs = 0x1FB5; f__1FB5_18D3_000E_76AC();
	f__1DB6_01BA_000A_E0C8();
}

/**
 * Decompiled function f__1DB6_01BA_000A_E0C8()
 *
 * @name f__1DB6_01BA_000A_E0C8
 * @implements 1DB6:01BA:000A:E0C8 ()
 *
 * Called From: 1DB6:01BA:0005:7870
 */
void f__1DB6_01BA_000A_E0C8()
{
	emu_movb(&emu_get_memory8(emu_ds, 0x00,  0x62F6), 0x1);
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__1DB6_00B1_0003_1DA4(); return;
}

/**
 * Decompiled function f__1DB6_01C4_0004_893F()
 *
 * @name f__1DB6_01C4_0004_893F
 * @implements 1DB6:01C4:0004:893F ()
 *
 * Called From: 1DB6:00B1:0003:1DA4
 */
void f__1DB6_01C4_0004_893F()
{
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

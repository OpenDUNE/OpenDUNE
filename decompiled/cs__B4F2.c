/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__B4F2_0000_000D_D456()
 *
 * @name f__B4F2_0000_000D_D456
 * @implements B4F2:0000:000D:D456 ()
 *
 * Called From: 34F2:0020:0005:1DB8
 */
void f__B4F2_0000_000D_D456()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x2AB7);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x000D); emu_cs = 0x1FB5; f__1FB5_15B5_0015_6875();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { ovl__34F2(0xFF); }
	f__B4F2_000D_001C_FE04();
}

/**
 * Decompiled function f__B4F2_000D_001C_FE04()
 *
 * @name f__B4F2_000D_001C_FE04
 * @implements B4F2:000D:001C:FE04 ()
 *
 * Called From: B4F2:000D:000D:D456
 */
void f__B4F2_000D_001C_FE04()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (emu_flags.zf) { f__B4F2_004B_0004_0768(); return; }
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_movw(&emu_dx.x, 0xA);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x41C2);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x2AB7);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0029); emu_cs = 0x253D; f__253D_0000_0013_AAD7();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { ovl__34F2(0xFF); }
	f__B4F2_0029_000C_8F99();
}

/**
 * Decompiled function f__B4F2_0029_000C_8F99()
 *
 * @name f__B4F2_0029_000C_8F99
 * @implements B4F2:0029:000C:8F99 ()
 *
 * Called From: B4F2:0029:001C:FE04
 */
void f__B4F2_0029_000C_8F99()
{
	emu_addws(&emu_sp, 0xC);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x41C2));
	emu_push(emu_cs); emu_push(0x0035); emu_cs = 0x1DD7; f__1DD7_006F_001C_0982();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { ovl__34F2(0xFF); }
	f__B4F2_0035_000A_CE86();
}

/**
 * Decompiled function f__B4F2_0035_000A_CE86()
 *
 * @name f__B4F2_0035_000A_CE86
 * @implements B4F2:0035:000A:CE86 ()
 *
 * Called From: B4F2:0035:000C:8F99
 */
void f__B4F2_0035_000A_CE86()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x41C4));
	emu_push(emu_cs); emu_push(0x003F); emu_cs = 0x1DD7; f__1DD7_000E_001C_1082();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { ovl__34F2(0xFF); }
	f__B4F2_003F_000C_BBF7();
}

/**
 * Decompiled function f__B4F2_003F_000C_BBF7()
 *
 * @name f__B4F2_003F_000C_BBF7
 * @implements B4F2:003F:000C:BBF7 ()
 *
 * Called From: B4F2:003F:000A:CE86
 */
void f__B4F2_003F_000C_BBF7()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x41C6));
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x3900), emu_ax.x);
	emu_movw(&emu_ax.x, 0x1);
	f__B4F2_004F_0002_00E2(); return;
}

/**
 * Decompiled function f__B4F2_0049_0002_03A4()
 *
 * @name f__B4F2_0049_0002_03A4
 * @implements B4F2:0049:0002:03A4 ()
 *
 * Called From: B4F2:004D:0004:0768
 */
void f__B4F2_0049_0002_03A4()
{
	f__B4F2_004F_0002_00E2(); return;
}

/**
 * Decompiled function f__B4F2_004B_0004_0768()
 *
 * @name f__B4F2_004B_0004_0768
 * @implements B4F2:004B:0004:0768 ()
 *
 * Called From: B4F2:0011:001C:FE04
 */
void f__B4F2_004B_0004_0768()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__B4F2_0049_0002_03A4(); return;
}

/**
 * Decompiled function f__B4F2_004F_0002_00E2()
 *
 * @name f__B4F2_004F_0002_00E2
 * @implements B4F2:004F:0002:00E2 ()
 *
 * Called From: B4F2:0049:0002:03A4
 * Called From: B4F2:0049:000C:BBF7
 */
void f__B4F2_004F_0002_00E2()
{
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B4F2_0051_0012_60AA()
 *
 * @name f__B4F2_0051_0012_60AA
 * @implements B4F2:0051:0012:60AA ()
 *
 * Called From: B4F2:0338:0005:0D22
 */
void f__B4F2_0051_0012_60AA()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_si);
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x2AB7);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0063); emu_cs = 0x1FB5; f__1FB5_01FA_0010_D47C();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { ovl__34F2(0xFF); }
	f__B4F2_0063_0017_AE15();
}

/**
 * Decompiled function f__B4F2_0063_0017_AE15()
 *
 * @name f__B4F2_0063_0017_AE15
 * @implements B4F2:0063:0017:AE15 ()
 *
 * Called From: B4F2:0063:0012:60AA
 */
void f__B4F2_0063_0017_AE15()
{
	emu_addws(&emu_sp, 0x6);
	emu_movw(&emu_si, emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_movw(&emu_dx.x, 0xA);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x41C2);
	emu_push(emu_ax.x);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x007A); emu_cs = 0x1FB5; f__1FB5_0E9C_001B_711F();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { ovl__34F2(0xFF); }
	f__B4F2_007A_0009_CF13();
}

/**
 * Decompiled function f__B4F2_007A_0009_CF13()
 *
 * @name f__B4F2_007A_0009_CF13
 * @implements B4F2:007A:0009:CF13 ()
 *
 * Called From: B4F2:007A:0017:AE15
 */
void f__B4F2_007A_0009_CF13()
{
	emu_addws(&emu_sp, 0xA);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x0083); emu_cs = 0x1FB5; f__1FB5_09C7_0018_F3A8();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { ovl__34F2(0xFF); }
	f__B4F2_0083_0010_C27E();
}

/**
 * Decompiled function f__B4F2_0083_0010_C27E()
 *
 * @name f__B4F2_0083_0010_C27E
 * @implements B4F2:0083:0010:C27E ()
 *
 * Called From: B4F2:0083:0009:CF13
 */
void f__B4F2_0083_0010_C27E()
{
	emu_pop(&emu_cx.x);
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x41C2), 0x0);
	if (!emu_flags.zf) { f__B4F2_0094_0005_14BC(); return; }
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0093); emu_cs = 0x3483; emu_ip = 0x00B8; emu_last_cs = 0xB4F2; emu_last_ip = 0x008E; emu_last_length = 0x0010; emu_last_crc = 0xC27E; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__B4F2_0094_0005_14BC()
 *
 * @name f__B4F2_0094_0005_14BC
 * @implements B4F2:0094:0005:14BC ()
 *
 * Called From: B4F2:0089:0010:C27E
 */
void f__B4F2_0094_0005_14BC()
{
	emu_movw(&emu_ax.x, 0x1);
	f__B4F2_0099_0003_0212(); return;
}

/**
 * Decompiled function f__B4F2_0099_0003_0212()
 *
 * @name f__B4F2_0099_0003_0212
 * @implements B4F2:0099:0003:0212 ()
 *
 * Called From: B4F2:0097:0005:14BC
 */
void f__B4F2_0099_0003_0212()
{
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B4F2_009C_002E_5854()
 *
 * @name f__B4F2_009C_002E_5854
 * @implements B4F2:009C:002E:5854 ()
 *
 * Called From: 34F2:0025:0005:161C
 * Called From: 34F2:0025:0005:1722
 * Called From: 34F2:0025:0005:1714
 * Called From: 34F2:0025:0005:173A
 * Called From: 34F2:0025:0005:1720
 * Called From: 34F2:0025:0005:1654
 * Called From: 34F2:0025:0005:1496
 * Called From: 34F2:0025:0005:150A
 */
void f__B4F2_009C_002E_5854()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x2);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3A34));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x3A34), 0x0);
	emu_movw(&emu_ax.x, 0x2DCE);
	emu_movw(&emu_es, emu_ax.x);
	emu_push(emu_get_memory16(emu_es, 0x00,  0x442));
	emu_push(emu_get_memory16(emu_es, 0x00,  0x440));
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x00CA); emu_cs = 0x2B4C; f__2B4C_0002_0029_9CF8();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { ovl__34F2(0xFF); }
	f__B4F2_00CA_0008_F098();
}

/**
 * Decompiled function f__B4F2_00CA_0008_F098()
 *
 * @name f__B4F2_00CA_0008_F098
 * @implements B4F2:00CA:0008:F098 ()
 *
 * Called From: B4F2:00CA:002E:5854
 */
void f__B4F2_00CA_0008_F098()
{
	emu_addws(&emu_sp, 0x8);
	emu_push(emu_cs); emu_push(0x00D2); emu_cs = 0x34B8; ovl__34B8(1);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { ovl__34F2(0xFF); }
	f__B4F2_00D2_0019_82DA();
}

/**
 * Decompiled function f__B4F2_00D2_0019_82DA()
 *
 * @name f__B4F2_00D2_0019_82DA
 * @implements B4F2:00D2:0019:82DA ()
 *
 * Called From: 261F:01B9:001B:DA28
 */
void f__B4F2_00D2_0019_82DA()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_movw(&emu_dx.x, 0x300);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x6674));
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x6676));
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x70A2);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x00EB); emu_cs = 0x2B0E; f__2B0E_0006_0049_1E3C();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { ovl__34F2(0xFF); }
	f__B4F2_00EB_0014_0DB4();
}

/**
 * Decompiled function f__B4F2_00EB_0014_0DB4()
 *
 * @name f__B4F2_00EB_0014_0DB4
 * @implements B4F2:00EB:0014:0DB4 ()
 *
 * Called From: B4F2:00EB:0019:82DA
 */
void f__B4F2_00EB_0014_0DB4()
{
	emu_addws(&emu_sp, 0xC);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x7F50), 0x0);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_cs); emu_push(0x00FF); emu_cs = 0x1DD7; f__1DD7_022D_0015_1B0E();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { ovl__34F2(0xFF); }
	f__B4F2_00FF_000A_838D();
}

/**
 * Decompiled function f__B4F2_00FF_000A_838D()
 *
 * @name f__B4F2_00FF_000A_838D
 * @implements B4F2:00FF:000A:838D ()
 *
 * Called From: B4F2:00FF:0014:0DB4
 */
void f__B4F2_00FF_000A_838D()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0109); emu_cs = 0x34E9; ovl__34E9(0);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { ovl__34F2(0xFF); }
	f__B4F2_0109_001C_60FD();
}

/**
 * Decompiled function f__B4F2_0109_001C_60FD()
 *
 * @name f__B4F2_0109_001C_60FD
 * @implements B4F2:0109:001C:60FD ()
 *
 * Called From: B4F2:0109:000A:838D
 */
void f__B4F2_0109_001C_60FD()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_ax.x, 0x22);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_cs); emu_push(0x0125); emu_cs = 0x10E4; f__10E4_1EF1_0040_E33D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { ovl__34F2(0xFF); }
	f__B4F2_0125_000F_A61A();
}

/**
 * Decompiled function f__B4F2_0125_000F_A61A()
 *
 * @name f__B4F2_0125_000F_A61A
 * @implements B4F2:0125:000F:A61A ()
 *
 * Called From: B4F2:0125:001C:60FD
 */
void f__B4F2_0125_000F_A61A()
{
	emu_addws(&emu_sp, 0xE);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_movw(&emu_dx.x, 0x7530);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_cs);
	emu_push(0x0134); f__B4F2_11CF_0013_DC5E();
	f__B4F2_0134_0013_EA80();
}

/**
 * Decompiled function f__B4F2_0134_0013_EA80()
 *
 * @name f__B4F2_0134_0013_EA80
 * @implements B4F2:0134:0013:EA80 ()
 *
 * Called From: B4F2:0134:000F:A61A
 */
void f__B4F2_0134_0013_EA80()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x2A91), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x38D6));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x38D8));
	if (emu_flags.zf) { f__B4F2_016E_0005_1734(); return; }
	emu_push(emu_cs); emu_push(0x0147); emu_cs = 0x2B6C; emu_ip = 0x027E; emu_last_cs = 0xB4F2; emu_last_ip = 0x0142; emu_last_length = 0x0013; emu_last_crc = 0xEA80; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__B4F2_016E_0005_1734()
 *
 * @name f__B4F2_016E_0005_1734
 * @implements B4F2:016E:0005:1734 ()
 *
 * Called From: B4F2:0140:0013:EA80
 */
void f__B4F2_016E_0005_1734()
{
	emu_push(emu_cs);
	emu_push(0x0173); f__B4F2_0E16_0019_FF18();
	f__B4F2_0173_000A_5737();
}

/**
 * Decompiled function f__B4F2_0173_000A_5737()
 *
 * @name f__B4F2_0173_000A_5737
 * @implements B4F2:0173:000A:5737 ()
 *
 * Called From: B4F2:0173:0005:1734
 */
void f__B4F2_0173_000A_5737()
{
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x264C);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x017D); f__B4F2_0EE0_000E_F1BB();
	f__B4F2_017D_000C_0D9A();
}

/**
 * Decompiled function f__B4F2_017D_000C_0D9A()
 *
 * @name f__B4F2_017D_000C_0D9A
 * @implements B4F2:017D:000C:0D9A ()
 *
 * Called From: B4F2:017D:000A:5737
 */
void f__B4F2_017D_000C_0D9A()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x264C);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x0189); f__B4F2_0855_0013_DDE1();
	f__B4F2_0189_0008_5D32();
}

/**
 * Decompiled function f__B4F2_0189_0008_5D32()
 *
 * @name f__B4F2_0189_0008_5D32
 * @implements B4F2:0189:0008:5D32 ()
 *
 * Called From: B4F2:0189:000C:0D9A
 */
void f__B4F2_0189_0008_5D32()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_si, 0x1);
	f__B4F2_02A7_0007_3388(); return;
}

/**
 * Decompiled function f__B4F2_0191_000D_1819()
 *
 * @name f__B4F2_0191_000D_1819
 * @implements B4F2:0191:000D:1819 ()
 *
 * Called From: B4F2:02AB:0007:3388
 */
void f__B4F2_0191_000D_1819()
{
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x2A95));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x2A93));
	emu_push(emu_cs); emu_push(0x019E); emu_cs = 0x34A2; ovl__34A2(2);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { ovl__34F2(0xFF); }
	f__B4F2_019E_000D_0B0C();
}

/**
 * Decompiled function f__B4F2_019E_000D_0B0C()
 *
 * @name f__B4F2_019E_000D_0B0C
 * @implements B4F2:019E:000D:0B0C ()
 *
 * Called From: B4F2:019E:000D:1819
 */
void f__B4F2_019E_000D_0B0C()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_di, emu_ax.x);
	emu_testw(&emu_di, 0x8000);
	if (!emu_flags.zf) { f__B4F2_01AB_000E_D8F8(); return; }
	f__B4F2_02A2_0005_17FC(); return;
}

/**
 * Decompiled function f__B4F2_01AB_000E_D8F8()
 *
 * @name f__B4F2_01AB_000E_D8F8
 * @implements B4F2:01AB:000E:D8F8 ()
 *
 * Called From: B4F2:01A6:000D:0B0C
 */
void f__B4F2_01AB_000E_D8F8()
{
	emu_push(emu_di);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x2A95));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x2A93));
	emu_push(emu_cs); emu_push(0x01B9); emu_cs = 0x348B; ovl__348B(3);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { ovl__34F2(0xFF); }
	f__B4F2_01B9_0013_206A();
}

/**
 * Decompiled function f__B4F2_01B9_0013_206A()
 *
 * @name f__B4F2_01B9_0013_206A
 * @implements B4F2:01B9:0013:206A ()
 *
 * Called From: B4F2:01B9:000E:D8F8
 */
void f__B4F2_01B9_0013_206A()
{
	emu_addws(&emu_sp, 0x6);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0x8), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0x6), emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x264C);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x01CC); f__B4F2_0F24_000E_F1BB();
	f__B4F2_01CC_0013_2EC2();
}

/**
 * Decompiled function f__B4F2_01CC_0013_2EC2()
 *
 * @name f__B4F2_01CC_0013_2EC2
 * @implements B4F2:01CC:0013:2EC2 ()
 *
 * Called From: B4F2:01CC:0013:206A
 */
void f__B4F2_01CC_0013_2EC2()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_bx.x, emu_di);
	emu_andw(&emu_bx.x, 0x7FFF);
	emu_subws(&emu_bx.x, 0x1E);
	emu_cmpws(&emu_bx.x, 0x6);
	if ((emu_flags.cf || emu_flags.zf)) { f__B4F2_01DF_0007_5EAA(); return; }
	f__B4F2_027D_0002_03AC(); return;
}

/**
 * Decompiled function f__B4F2_01DF_0007_5EAA()
 *
 * @name f__B4F2_01DF_0007_5EAA
 * @implements B4F2:01DF:0007:5EAA ()
 *
 * Called From: B4F2:01DA:0013:2EC2
 */
void f__B4F2_01DF_0007_5EAA()
{
	emu_shlw(&emu_bx.x, 0x1);

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_cs, emu_bx.x,  0x379);
	switch (emu_ip) {
		case 0x01E6: f__B4F2_01E6_0008_5180(); return;
		case 0x01F8: f__B4F2_01F8_0009_727D(); return;
		case 0x020A: f__B4F2_020A_000B_E1EC(); return;
		case 0x0219: f__B4F2_0219_0009_04C5(); return;
		case 0x0231: f__B4F2_0231_0009_05A5(); return;
		case 0x024E: f__B4F2_024E_0004_0776(); return;
		case 0x0252: f__B4F2_0252_0009_1629(); return;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0xB4F2; emu_last_ip = 0x01E1; emu_last_length = 0x0007; emu_last_crc = 0x5EAA;
			emu_call();
			return;
	}
}

/**
 * Decompiled function f__B4F2_01E6_0008_5180()
 *
 * @name f__B4F2_01E6_0008_5180
 * @implements B4F2:01E6:0008:5180 ()
 *
 * Called From: B4F2:01E1:0007:5EAA
 */
void f__B4F2_01E6_0008_5180()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x01EE); f__B4F2_04B7_0015_8DF5();
	f__B4F2_01EE_000A_84D5();
}

/**
 * Decompiled function f__B4F2_01EE_000A_84D5()
 *
 * @name f__B4F2_01EE_000A_84D5
 * @implements B4F2:01EE:000A:84D5 ()
 *
 * Called From: B4F2:01EE:0008:5180
 */
void f__B4F2_01EE_000A_84D5()
{
	emu_pop(&emu_cx.x);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (emu_flags.zf) { f__B4F2_01F5_0003_0554(); return; }
	emu_xorw(&emu_si, emu_si);
	f__B4F2_027F_0015_C348(); return;
}

/**
 * Decompiled function f__B4F2_01F5_0003_0554()
 *
 * @name f__B4F2_01F5_0003_0554
 * @implements B4F2:01F5:0003:0554 ()
 *
 * Called From: B4F2:01F1:000A:84D5
 */
void f__B4F2_01F5_0003_0554()
{
	f__B4F2_027F_0015_C348(); return;
}

/**
 * Decompiled function f__B4F2_01F8_0009_727D()
 *
 * @name f__B4F2_01F8_0009_727D
 * @implements B4F2:01F8:0009:727D ()
 *
 * Called From: B4F2:01E1:0007:5EAA
 */
void f__B4F2_01F8_0009_727D()
{
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x0201); f__B4F2_04B7_0015_8DF5();
	f__B4F2_0201_0009_C386();
}

/**
 * Decompiled function f__B4F2_0201_0009_C386()
 *
 * @name f__B4F2_0201_0009_C386
 * @implements B4F2:0201:0009:C386 ()
 *
 * Called From: B4F2:0201:0009:727D
 */
void f__B4F2_0201_0009_C386()
{
	emu_pop(&emu_cx.x);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (emu_flags.zf) { emu_ip = 0x0208; emu_last_cs = 0xB4F2; emu_last_ip = 0x0204; emu_last_length = 0x0009; emu_last_crc = 0xC386; emu_call(); return; } // Jump does not resolve
	emu_xorw(&emu_si, emu_si);
	f__B4F2_027F_0015_C348(); return;
}

/**
 * Decompiled function f__B4F2_020A_000B_E1EC()
 *
 * @name f__B4F2_020A_000B_E1EC
 * @implements B4F2:020A:000B:E1EC ()
 *
 * Called From: B4F2:01E1:0007:5EAA
 */
void f__B4F2_020A_000B_E1EC()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x0215); f__B4F2_0387_000F_B68D();
	f__B4F2_0215_0004_0438();
}

/**
 * Decompiled function f__B4F2_0215_0004_0438()
 *
 * @name f__B4F2_0215_0004_0438
 * @implements B4F2:0215:0004:0438 ()
 *
 * Called From: B4F2:0215:000B:E1EC
 */
void f__B4F2_0215_0004_0438()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	f__B4F2_027F_0015_C348(); return;
}

/**
 * Decompiled function f__B4F2_0219_0009_04C5()
 *
 * @name f__B4F2_0219_0009_04C5
 * @implements B4F2:0219:0009:04C5 ()
 *
 * Called From: B4F2:01E1:0007:5EAA
 */
void f__B4F2_0219_0009_04C5()
{
	emu_movw(&emu_ax.x, 0x76);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x0222); f__B4F2_1100_0019_88C5();
	f__B4F2_0222_000F_8F90();
}

/**
 * Decompiled function f__B4F2_0222_000F_8F90()
 *
 * @name f__B4F2_0222_000F_8F90
 * @implements B4F2:0222:000F:8F90 ()
 *
 * Called From: B4F2:0222:0009:04C5
 */
void f__B4F2_0222_000F_8F90()
{
	emu_pop(&emu_cx.x);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (emu_flags.zf) { f__B4F2_022F_0002_0330(); return; }
	emu_xorw(&emu_si, emu_si);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x38BE), 0x1);
	f__B4F2_027F_0015_C348(); return;
}

/**
 * Decompiled function f__B4F2_022F_0002_0330()
 *
 * @name f__B4F2_022F_0002_0330
 * @implements B4F2:022F:0002:0330 ()
 *
 * Called From: B4F2:0225:000F:8F90
 */
void f__B4F2_022F_0002_0330()
{
	f__B4F2_027F_0015_C348(); return;
}

/**
 * Decompiled function f__B4F2_0231_0009_05A5()
 *
 * @name f__B4F2_0231_0009_05A5
 * @implements B4F2:0231:0009:05A5 ()
 *
 * Called From: B4F2:01E1:0007:5EAA
 */
void f__B4F2_0231_0009_05A5()
{
	emu_movw(&emu_ax.x, 0x77);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x023A); f__B4F2_1100_0019_88C5();
	f__B4F2_023A_000C_1C48();
}

/**
 * Decompiled function f__B4F2_023A_000C_1C48()
 *
 * @name f__B4F2_023A_000C_1C48
 * @implements B4F2:023A:000C:1C48 ()
 *
 * Called From: B4F2:023A:0009:05A5
 */
void f__B4F2_023A_000C_1C48()
{
	emu_pop(&emu_cx.x);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (emu_flags.zf) { f__B4F2_024C_0002_03CE(); return; }
	emu_xorw(&emu_si, emu_si);
	emu_push(emu_cs); emu_push(0x0246); emu_cs = 0x1DD7; f__1DD7_0B53_0025_71E0();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { ovl__34F2(0xFF); }
	f__B4F2_0246_0008_EF6E();
}

/**
 * Decompiled function f__B4F2_0246_0008_EF6E()
 *
 * @name f__B4F2_0246_0008_EF6E
 * @implements B4F2:0246:0008:EF6E ()
 *
 * Called From: B4F2:0246:000C:1C48
 */
void f__B4F2_0246_0008_EF6E()
{
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x38BE), 0x2);
	f__B4F2_027F_0015_C348(); return;
}

/**
 * Decompiled function f__B4F2_024C_0002_03CE()
 *
 * @name f__B4F2_024C_0002_03CE
 * @implements B4F2:024C:0002:03CE ()
 *
 * Called From: B4F2:023D:000C:1C48
 */
void f__B4F2_024C_0002_03CE()
{
	f__B4F2_027F_0015_C348(); return;
}

/**
 * Decompiled function f__B4F2_024E_0004_0776()
 *
 * @name f__B4F2_024E_0004_0776
 * @implements B4F2:024E:0004:0776 ()
 *
 * Called From: B4F2:01E1:0007:5EAA
 */
void f__B4F2_024E_0004_0776()
{
	emu_xorw(&emu_si, emu_si);
	f__B4F2_027F_0015_C348(); return;
}

/**
 * Decompiled function f__B4F2_0252_0009_1629()
 *
 * @name f__B4F2_0252_0009_1629
 * @implements B4F2:0252:0009:1629 ()
 *
 * Called From: B4F2:01E1:0007:5EAA
 */
void f__B4F2_0252_0009_1629()
{
	emu_movw(&emu_ax.x, 0x65);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x025B); f__B4F2_1100_0019_88C5();
	f__B4F2_025B_0014_27AA();
}

/**
 * Decompiled function f__B4F2_025B_0014_27AA()
 *
 * @name f__B4F2_025B_0014_27AA
 * @implements B4F2:025B:0014:27AA ()
 *
 * Called From: B4F2:025B:0009:1629
 */
void f__B4F2_025B_0014_27AA()
{
	emu_pop(&emu_cx.x);
	emu_negw(&emu_ax.x, emu_ax.x);
	emu_sbbw(&emu_ax.x, emu_ax.x);
	emu_incw(&emu_ax.x);
	emu_movw(&emu_si, emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x38F8), emu_ax.x);
	emu_movw(&emu_ax.x, 0xFFFE);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x026F); emu_cs = 0x3483; ovl__3483(2);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { ovl__34F2(0xFF); }
	f__B4F2_026F_0003_0164();
}

/**
 * Decompiled function f__B4F2_026F_0003_0164()
 *
 * @name f__B4F2_026F_0003_0164
 * @implements B4F2:026F:0003:0164 ()
 *
 * Called From: B4F2:026F:0014:27AA
 */
void f__B4F2_026F_0003_0164()
{
	emu_pop(&emu_cx.x);
	f__B4F2_0272_0005_1E9E(); return;
}

/**
 * Decompiled function f__B4F2_0272_0005_1E9E()
 *
 * @name f__B4F2_0272_0005_1E9E
 * @implements B4F2:0272:0005:1E9E ()
 *
 * Called From: B4F2:0270:0003:0164
 */
void f__B4F2_0272_0005_1E9E()
{
	emu_push(emu_cs); emu_push(0x0277); emu_cs = 0x1DD7; f__1DD7_01EB_0013_AA5A();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { ovl__34F2(0xFF); }
	f__B4F2_0277_0006_1980();
}

/**
 * Decompiled function f__B4F2_0277_0006_1980()
 *
 * @name f__B4F2_0277_0006_1980
 * @implements B4F2:0277:0006:1980 ()
 *
 * Called From: B4F2:0277:0005:1E9E
 */
void f__B4F2_0277_0006_1980()
{
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.zf) { emu_ip = 0x0272; emu_last_cs = 0xB4F2; emu_last_ip = 0x0279; emu_last_length = 0x0006; emu_last_crc = 0x1980; emu_call(); return; } // Jump does not resolve
	f__B4F2_027F_0015_C348(); return;
}

/**
 * Decompiled function f__B4F2_027D_0002_03AC()
 *
 * @name f__B4F2_027D_0002_03AC
 * @implements B4F2:027D:0002:03AC ()
 *
 * Called From: B4F2:01DC:0013:2EC2
 */
void f__B4F2_027D_0002_03AC()
{
	f__B4F2_027F_0015_C348(); return;
}

/**
 * Decompiled function f__B4F2_027F_0015_C348()
 *
 * @name f__B4F2_027F_0015_C348
 * @implements B4F2:027F:0015:C348 ()
 *
 * Called From: B4F2:01F5:0003:0554
 * Called From: B4F2:01F5:000A:84D5
 * Called From: B4F2:0208:0009:C386
 * Called From: B4F2:0217:0004:0438
 * Called From: B4F2:022F:0002:0330
 * Called From: B4F2:022F:000F:8F90
 * Called From: B4F2:024C:0002:03CE
 * Called From: B4F2:024C:0008:EF6E
 * Called From: B4F2:0250:0004:0776
 * Called From: B4F2:027B:0006:1980
 * Called From: B4F2:027D:0002:03AC
 */
void f__B4F2_027F_0015_C348()
{
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x38F8), 0x0);
	if (emu_flags.zf) { f__B4F2_02A2_0005_17FC(); return; }
	emu_orw(&emu_si, emu_si);
	if (emu_flags.zf) { f__B4F2_02A2_0005_17FC(); return; }
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x264C);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x0294); f__B4F2_0EE0_000E_F1BB();
	f__B4F2_0294_000C_0C78();
}

/**
 * Decompiled function f__B4F2_0294_000C_0C78()
 *
 * @name f__B4F2_0294_000C_0C78
 * @implements B4F2:0294:000C:0C78 ()
 *
 * Called From: B4F2:0294:0015:C348
 */
void f__B4F2_0294_000C_0C78()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x264C);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x02A0); f__B4F2_0855_0013_DDE1();
	f__B4F2_02A0_0007_2D3C();
}

/**
 * Decompiled function f__B4F2_02A0_0007_2D3C()
 *
 * @name f__B4F2_02A0_0007_2D3C
 * @implements B4F2:02A0:0007:2D3C ()
 *
 * Called From: B4F2:02A0:000C:0C78
 */
void f__B4F2_02A0_0007_2D3C()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_push(emu_cs); emu_push(0x02A7); emu_cs = 0x0642; f__0642_0559_0027_9047();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { ovl__34F2(0xFF); }
	f__B4F2_02A7_0007_3388();
}

/**
 * Decompiled function f__B4F2_02A2_0005_17FC()
 *
 * @name f__B4F2_02A2_0005_17FC
 * @implements B4F2:02A2:0005:17FC ()
 *
 * Called From: B4F2:01A8:000D:0B0C
 * Called From: B4F2:0284:0015:C348
 * Called From: B4F2:0288:0015:C348
 */
void f__B4F2_02A2_0005_17FC()
{
	emu_push(emu_cs); emu_push(0x02A7); emu_cs = 0x0642; f__0642_0559_0027_9047();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { ovl__34F2(0xFF); }
	f__B4F2_02A7_0007_3388();
}

/**
 * Decompiled function f__B4F2_02A7_0007_3388()
 *
 * @name f__B4F2_02A7_0007_3388
 * @implements B4F2:02A7:0007:3388 ()
 *
 * Called From: B4F2:018E:0008:5D32
 * Called From: B4F2:02A7:0005:17FC
 * Called From: B4F2:02A7:0007:2D3C
 */
void f__B4F2_02A7_0007_3388()
{
	emu_orw(&emu_si, emu_si);
	if (emu_flags.zf) { f__B4F2_02AE_001E_E722(); return; }
	f__B4F2_0191_000D_1819(); return;
}

/**
 * Decompiled function f__B4F2_02AE_001E_E722()
 *
 * @name f__B4F2_02AE_001E_E722
 * @implements B4F2:02AE:001E:E722 ()
 *
 * Called From: B4F2:02A9:0007:3388
 */
void f__B4F2_02AE_001E_E722()
{
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x38C4), 0x1);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x38D6));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x38D8));
	if (emu_flags.zf) { f__B4F2_0309_0005_1258(); return; }
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_movw(&emu_dx.x, 0xFA00);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x02CC); emu_cs = 0x252E; emu_ip = 0x02CD; emu_last_cs = 0xB4F2; emu_last_ip = 0x02C7; emu_last_length = 0x001E; emu_last_crc = 0xE722; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__B4F2_0309_0005_1258()
 *
 * @name f__B4F2_0309_0005_1258
 * @implements B4F2:0309:0005:1258 ()
 *
 * Called From: B4F2:02BB:001E:E722
 */
void f__B4F2_0309_0005_1258()
{
	emu_push(emu_cs); emu_push(0x030E); emu_cs = 0x34B8; ovl__34B8(5);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { ovl__34F2(0xFF); }
	f__B4F2_030E_0008_5F60();
}

/**
 * Decompiled function f__B4F2_030E_0008_5F60()
 *
 * @name f__B4F2_030E_0008_5F60
 * @implements B4F2:030E:0008:5F60 ()
 *
 * Called From: 261F:01B9:001B:DA28
 */
void f__B4F2_030E_0008_5F60()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0316); emu_cs = 0x10E4; f__10E4_2099_0012_A974();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { ovl__34F2(0xFF); }
	f__B4F2_0316_0006_00E8();
}

/**
 * Decompiled function f__B4F2_0316_0006_00E8()
 *
 * @name f__B4F2_0316_0006_00E8
 * @implements B4F2:0316:0006:00E8 ()
 *
 * Called From: 261F:01B9:001B:DA28
 */
void f__B4F2_0316_0006_00E8()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_cs);
	emu_push(0x031C); f__B4F2_0DE3_001F_0789();
	f__B4F2_031C_000E_2703();
}

/**
 * Decompiled function f__B4F2_031C_000E_2703()
 *
 * @name f__B4F2_031C_000E_2703
 * @implements B4F2:031C:000E:2703 ()
 *
 * Called From: B4F2:031C:0006:00E8
 */
void f__B4F2_031C_000E_2703()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x032A); emu_cs = 0x348B; ovl__348B(5);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { ovl__34F2(0xFF); }
	f__B4F2_032A_000C_7F83();
}

/**
 * Decompiled function f__B4F2_032A_000C_7F83()
 *
 * @name f__B4F2_032A_000C_7F83
 * @implements B4F2:032A:000C:7F83 ()
 *
 * Called From: B4F2:032A:000E:2703
 */
void f__B4F2_032A_000C_7F83()
{
	emu_addws(&emu_sp, 0x6);
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0336); emu_cs = 0x34E9; ovl__34E9(0);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { ovl__34F2(0xFF); }
	f__B4F2_0336_0005_0D22();
}

/**
 * Decompiled function f__B4F2_0336_0005_0D22()
 *
 * @name f__B4F2_0336_0005_0D22
 * @implements B4F2:0336:0005:0D22 ()
 *
 * Called From: B4F2:0336:000C:7F83
 */
void f__B4F2_0336_0005_0D22()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_cs);
	emu_push(0x033B); f__B4F2_0051_0012_60AA();
	f__B4F2_033B_0005_1198();
}

/**
 * Decompiled function f__B4F2_033B_0005_1198()
 *
 * @name f__B4F2_033B_0005_1198
 * @implements B4F2:033B:0005:1198 ()
 *
 * Called From: B4F2:033B:0005:0D22
 */
void f__B4F2_033B_0005_1198()
{
	emu_push(emu_cs); emu_push(0x0340); emu_cs = 0x1082; f__1082_000F_0012_EFE2();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { ovl__34F2(0xFF); }
	f__B4F2_0340_0005_1816();
}

/**
 * Decompiled function f__B4F2_0340_0005_1816()
 *
 * @name f__B4F2_0340_0005_1816
 * @implements B4F2:0340:0005:1816 ()
 *
 * Called From: B4F2:0340:0005:1198
 */
void f__B4F2_0340_0005_1816()
{
	emu_push(emu_cs); emu_push(0x0345); emu_cs = 0x0FE4; f__0FE4_018D_0012_EFE2();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { ovl__34F2(0xFF); }
	f__B4F2_0345_0027_2D5A();
}

/**
 * Decompiled function f__B4F2_0345_0027_2D5A()
 *
 * @name f__B4F2_0345_0027_2D5A
 * @implements B4F2:0345:0027:2D5A ()
 *
 * Called From: B4F2:0345:0005:1816
 */
void f__B4F2_0345_0027_2D5A()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x3A34), emu_ax.x);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, 0x2DCE);
	emu_movw(&emu_es, emu_ax.x);
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x442));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x440));
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x036C); emu_cs = 0x2B4C; f__2B4C_0002_0029_9CF8();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { ovl__34F2(0xFF); }
	f__B4F2_036C_0007_771C();
}

/**
 * Decompiled function f__B4F2_036C_0007_771C()
 *
 * @name f__B4F2_036C_0007_771C
 * @implements B4F2:036C:0007:771C ()
 *
 * Called From: B4F2:036C:0027:2D5A
 */
void f__B4F2_036C_0007_771C()
{
	emu_addws(&emu_sp, 0x8);
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__B4F2_0373_0006_137A(); return;
}

/**
 * Decompiled function f__B4F2_0373_0006_137A()
 *
 * @name f__B4F2_0373_0006_137A
 * @implements B4F2:0373:0006:137A ()
 *
 * Called From: B4F2:0371:0007:771C
 */
void f__B4F2_0373_0006_137A()
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
 * Decompiled function f__B4F2_0387_000F_B68D()
 *
 * @name f__B4F2_0387_000F_B68D
 * @implements B4F2:0387:000F:B68D ()
 *
 * Called From: B4F2:0212:000B:E1EC
 */
void f__B4F2_0387_000F_B68D()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x26B5);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x0396); f__B4F2_0EE0_000E_F1BB();
	f__B4F2_0396_000C_F562();
}

/**
 * Decompiled function f__B4F2_0396_000C_F562()
 *
 * @name f__B4F2_0396_000C_F562
 * @implements B4F2:0396:000C:F562 ()
 *
 * Called From: B4F2:0396:000F:B68D
 */
void f__B4F2_0396_000C_F562()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x26B5);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x03A2); f__B4F2_0855_0013_DDE1();
	f__B4F2_03A2_0008_5EB0();
}

/**
 * Decompiled function f__B4F2_03A2_0008_5EB0()
 *
 * @name f__B4F2_03A2_0008_5EB0
 * @implements B4F2:03A2:0008:5EB0 ()
 *
 * Called From: B4F2:03A2:000C:F562
 */
void f__B4F2_03A2_0008_5EB0()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_di, 0x1);
	f__B4F2_0490_0007_320A(); return;
}

/**
 * Decompiled function f__B4F2_03AA_000D_1819()
 *
 * @name f__B4F2_03AA_000D_1819
 * @implements B4F2:03AA:000D:1819 ()
 *
 * Called From: B4F2:0494:0007:320A
 */
void f__B4F2_03AA_000D_1819()
{
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x2A95));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x2A93));
	emu_push(emu_cs); emu_push(0x03B7); emu_cs = 0x34A2; ovl__34A2(2);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { ovl__34F2(0xFF); }
	f__B4F2_03B7_000D_2ACC();
}

/**
 * Decompiled function f__B4F2_03B7_000D_2ACC()
 *
 * @name f__B4F2_03B7_000D_2ACC
 * @implements B4F2:03B7:000D:2ACC ()
 *
 * Called From: B4F2:03B7:000D:1819
 */
void f__B4F2_03B7_000D_2ACC()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_si, emu_ax.x);
	emu_testw(&emu_si, 0x8000);
	if (!emu_flags.zf) { f__B4F2_03C4_0013_9F33(); return; }
	f__B4F2_048B_0005_17FC(); return;
}

/**
 * Decompiled function f__B4F2_03C4_0013_9F33()
 *
 * @name f__B4F2_03C4_0013_9F33
 * @implements B4F2:03C4:0013:9F33 ()
 *
 * Called From: B4F2:03BF:000D:2ACC
 */
void f__B4F2_03C4_0013_9F33()
{
	emu_movw(&emu_ax.x, emu_si);
	emu_andw(&emu_ax.x, 0x7FFF);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x2A95));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x2A93));
	emu_push(emu_cs); emu_push(0x03D7); emu_cs = 0x348B; ovl__348B(3);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { ovl__34F2(0xFF); }
	f__B4F2_03D7_001E_23A3();
}

/**
 * Decompiled function f__B4F2_03D7_001E_23A3()
 *
 * @name f__B4F2_03D7_001E_23A3
 * @implements B4F2:03D7:001E:23A3 ()
 *
 * Called From: B4F2:03D7:0013:9F33
 */
void f__B4F2_03D7_001E_23A3()
{
	emu_addws(&emu_sp, 0x6);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0x8), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0x6), emu_ax.x);
	emu_movw(&emu_bx.x, emu_si);
	emu_andw(&emu_bx.x, 0x7FFF);
	emu_subws(&emu_bx.x, 0x1E);
	emu_cmpws(&emu_bx.x, 0x5);
	if (!(emu_flags.cf || emu_flags.zf)) { emu_ip = 0x046B; emu_last_cs = 0xB4F2; emu_last_ip = 0x03EC; emu_last_length = 0x001E; emu_last_crc = 0x23A3; emu_call(); return; } // Jump does not resolve
	emu_shlw(&emu_bx.x, 0x1);

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_cs, emu_bx.x,  0x4AB);
	switch (emu_ip) {
		case 0x03F5: f__B4F2_03F5_0011_04CD(); return;
		case 0x0418: f__B4F2_0418_001A_37C8(); return;
		case 0x0440: f__B4F2_0440_0019_33D3(); return;
		case 0x0459: f__B4F2_0459_0007_52AE(); return;
		case 0x0460: f__B4F2_0460_0007_52F8(); return;
		case 0x0467: f__B4F2_0467_0004_0760(); return;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0xB4F2; emu_last_ip = 0x03F0; emu_last_length = 0x001E; emu_last_crc = 0x23A3;
			emu_call();
			return;
	}
}

/**
 * Decompiled function f__B4F2_03F5_0011_04CD()
 *
 * @name f__B4F2_03F5_0011_04CD
 * @implements B4F2:03F5:0011:04CD ()
 *
 * Called From: B4F2:03F0:001E:23A3
 */
void f__B4F2_03F5_0011_04CD()
{
	emu_xorws(&emu_get_memory16(emu_ds, 0x00,  0x41C2), 0x1);
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x41C2), 0x0);
	if (!emu_flags.zf) { f__B4F2_040C_0009_AF97(); return; }
	emu_push(emu_cs); emu_push(0x0406); emu_cs = 0x1DD7; f__1DD7_0A7B_001E_024D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { ovl__34F2(0xFF); }
	f__B4F2_0406_000F_A7EB();
}

/**
 * Decompiled function f__B4F2_0406_000F_A7EB()
 *
 * @name f__B4F2_0406_000F_A7EB
 * @implements B4F2:0406:000F:A7EB ()
 *
 * Called From: B4F2:0406:0011:04CD
 */
void f__B4F2_0406_000F_A7EB()
{
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x7F50), 0x1);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x41C2));
	emu_push(emu_cs); emu_push(0x0415); emu_cs = 0x1DD7; f__1DD7_006F_001C_0982();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { ovl__34F2(0xFF); }
	f__B4F2_0415_0003_01CE();
}

/**
 * Decompiled function f__B4F2_040C_0009_AF97()
 *
 * @name f__B4F2_040C_0009_AF97
 * @implements B4F2:040C:0009:AF97 ()
 *
 * Called From: B4F2:03FF:0011:04CD
 */
void f__B4F2_040C_0009_AF97()
{
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x41C2));
	emu_push(emu_cs); emu_push(0x0415); emu_cs = 0x1DD7; f__1DD7_006F_001C_0982();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { ovl__34F2(0xFF); }
	f__B4F2_0415_0003_01CE();
}

/**
 * Decompiled function f__B4F2_0415_0003_01CE()
 *
 * @name f__B4F2_0415_0003_01CE
 * @implements B4F2:0415:0003:01CE ()
 *
 * Called From: B4F2:0415:000F:A7EB
 * Called From: B4F2:0415:0009:AF97
 * Called From: B4F2:043E:0002:0206
 */
void f__B4F2_0415_0003_01CE()
{
	emu_pop(&emu_cx.x);
	f__B4F2_046D_000E_27D3(); return;
}

/**
 * Decompiled function f__B4F2_0418_001A_37C8()
 *
 * @name f__B4F2_0418_001A_37C8
 * @implements B4F2:0418:001A:37C8 ()
 *
 * Called From: B4F2:03F0:001E:23A3
 */
void f__B4F2_0418_001A_37C8()
{
	emu_xorws(&emu_get_memory16(emu_ds, 0x00,  0x41C4), 0x1);
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x41C4), 0x0);
	if (!emu_flags.zf) { f__B4F2_0435_0009_AA87(); return; }
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x0432); emu_cs = 0x348B; ovl__348B(4);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { ovl__34F2(0xFF); }
	f__B4F2_0432_000C_A289();
}

/**
 * Decompiled function f__B4F2_0432_000C_A289()
 *
 * @name f__B4F2_0432_000C_A289
 * @implements B4F2:0432:000C:A289 ()
 *
 * Called From: B4F2:0432:001A:37C8
 */
void f__B4F2_0432_000C_A289()
{
	emu_addws(&emu_sp, 0x6);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x41C4));
	emu_push(emu_cs); emu_push(0x043E); emu_cs = 0x1DD7; f__1DD7_000E_001C_1082();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { ovl__34F2(0xFF); }
	f__B4F2_043E_0002_0206();
}

/**
 * Decompiled function f__B4F2_0435_0009_AA87()
 *
 * @name f__B4F2_0435_0009_AA87
 * @implements B4F2:0435:0009:AA87 ()
 *
 * Called From: B4F2:0422:001A:37C8
 */
void f__B4F2_0435_0009_AA87()
{
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x41C4));
	emu_push(emu_cs); emu_push(0x043E); emu_cs = 0x1DD7; f__1DD7_000E_001C_1082();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { ovl__34F2(0xFF); }
	f__B4F2_043E_0002_0206();
}

/**
 * Decompiled function f__B4F2_043E_0002_0206()
 *
 * @name f__B4F2_043E_0002_0206
 * @implements B4F2:043E:0002:0206 ()
 *
 * Called From: B4F2:043E:000C:A289
 * Called From: B4F2:043E:0009:AA87
 */
void f__B4F2_043E_0002_0206()
{
	f__B4F2_0415_0003_01CE(); return;
}

/**
 * Decompiled function f__B4F2_0440_0019_33D3()
 *
 * @name f__B4F2_0440_0019_33D3
 * @implements B4F2:0440:0019:33D3 ()
 *
 * Called From: B4F2:03F0:001E:23A3
 */
void f__B4F2_0440_0019_33D3()
{
	emu_incw(&emu_get_memory16(emu_ds, 0x00,  0x41C6));
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x41C6), 0x5);
	if ((emu_flags.sf != emu_flags.of)) { f__B4F2_0451_0008_C46C(); return; }
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x41C6), 0x0);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x41C6));
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x3900), emu_ax.x);
	f__B4F2_046D_000E_27D3(); return;
}

/**
 * Decompiled function f__B4F2_0451_0008_C46C()
 *
 * @name f__B4F2_0451_0008_C46C
 * @implements B4F2:0451:0008:C46C ()
 *
 * Called From: B4F2:0449:0019:33D3
 */
void f__B4F2_0451_0008_C46C()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x41C6));
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x3900), emu_ax.x);
	f__B4F2_046D_000E_27D3(); return;
}

/**
 * Decompiled function f__B4F2_0459_0007_52AE()
 *
 * @name f__B4F2_0459_0007_52AE
 * @implements B4F2:0459:0007:52AE ()
 *
 * Called From: B4F2:03F0:001E:23A3
 */
void f__B4F2_0459_0007_52AE()
{
	emu_xorws(&emu_get_memory16(emu_ds, 0x00,  0x41C8), 0x1);
	f__B4F2_046D_000E_27D3(); return;
}

/**
 * Decompiled function f__B4F2_0460_0007_52F8()
 *
 * @name f__B4F2_0460_0007_52F8
 * @implements B4F2:0460:0007:52F8 ()
 *
 * Called From: B4F2:03F0:001E:23A3
 */
void f__B4F2_0460_0007_52F8()
{
	emu_xorws(&emu_get_memory16(emu_ds, 0x00,  0x41CA), 0x1);
	f__B4F2_046D_000E_27D3(); return;
}

/**
 * Decompiled function f__B4F2_0467_0004_0760()
 *
 * @name f__B4F2_0467_0004_0760
 * @implements B4F2:0467:0004:0760 ()
 *
 * Called From: B4F2:03F0:001E:23A3
 */
void f__B4F2_0467_0004_0760()
{
	emu_xorw(&emu_di, emu_di);
	f__B4F2_046D_000E_27D3(); return;
}

/**
 * Decompiled function f__B4F2_046D_000E_27D3()
 *
 * @name f__B4F2_046D_000E_27D3
 * @implements B4F2:046D:000E:27D3 ()
 *
 * Called From: B4F2:0416:0003:01CE
 * Called From: B4F2:0457:0008:C46C
 * Called From: B4F2:0457:0019:33D3
 * Called From: B4F2:045E:0007:52AE
 * Called From: B4F2:0465:0007:52F8
 * Called From: B4F2:0469:0004:0760
 */
void f__B4F2_046D_000E_27D3()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x047B); emu_cs = 0x348B; ovl__348B(4);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { ovl__34F2(0xFF); }
	f__B4F2_047B_000E_C61E();
}

/**
 * Decompiled function f__B4F2_047B_000E_C61E()
 *
 * @name f__B4F2_047B_000E_C61E
 * @implements B4F2:047B:000E:C61E ()
 *
 * Called From: B4F2:047B:000E:27D3
 */
void f__B4F2_047B_000E_C61E()
{
	emu_addws(&emu_sp, 0x6);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x0489); emu_cs = 0x34A2; ovl__34A2(0);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { ovl__34F2(0xFF); }
	f__B4F2_0489_0007_2D3C();
}

/**
 * Decompiled function f__B4F2_0489_0007_2D3C()
 *
 * @name f__B4F2_0489_0007_2D3C
 * @implements B4F2:0489:0007:2D3C ()
 *
 * Called From: B4F2:0489:000E:C61E
 */
void f__B4F2_0489_0007_2D3C()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_push(emu_cs); emu_push(0x0490); emu_cs = 0x0642; f__0642_0559_0027_9047();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { ovl__34F2(0xFF); }
	f__B4F2_0490_0007_320A();
}

/**
 * Decompiled function f__B4F2_048B_0005_17FC()
 *
 * @name f__B4F2_048B_0005_17FC
 * @implements B4F2:048B:0005:17FC ()
 *
 * Called From: B4F2:03C1:000D:2ACC
 */
void f__B4F2_048B_0005_17FC()
{
	emu_push(emu_cs); emu_push(0x0490); emu_cs = 0x0642; f__0642_0559_0027_9047();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { ovl__34F2(0xFF); }
	f__B4F2_0490_0007_320A();
}

/**
 * Decompiled function f__B4F2_0490_0007_320A()
 *
 * @name f__B4F2_0490_0007_320A
 * @implements B4F2:0490:0007:320A ()
 *
 * Called From: B4F2:03A7:0008:5EB0
 * Called From: B4F2:0490:0005:17FC
 * Called From: B4F2:0490:0007:2D3C
 */
void f__B4F2_0490_0007_320A()
{
	emu_orw(&emu_di, emu_di);
	if (emu_flags.zf) { f__B4F2_0497_000A_ADB9(); return; }
	f__B4F2_03AA_000D_1819(); return;
}

/**
 * Decompiled function f__B4F2_0497_000A_ADB9()
 *
 * @name f__B4F2_0497_000A_ADB9
 * @implements B4F2:0497:000A:ADB9 ()
 *
 * Called From: B4F2:0492:0007:320A
 */
void f__B4F2_0497_000A_ADB9()
{
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x26B5);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x04A1); f__B4F2_0F24_000E_F1BB();
	f__B4F2_04A1_0006_1BFC();
}

/**
 * Decompiled function f__B4F2_04A1_0006_1BFC()
 *
 * @name f__B4F2_04A1_0006_1BFC
 * @implements B4F2:04A1:0006:1BFC ()
 *
 * Called From: B4F2:04A1:000A:ADB9
 */
void f__B4F2_04A1_0006_1BFC()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__B4F2_04A7_0004_07E2(); return;
}

/**
 * Decompiled function f__B4F2_04A7_0004_07E2()
 *
 * @name f__B4F2_04A7_0004_07E2
 * @implements B4F2:04A7:0004:07E2 ()
 *
 * Called From: B4F2:04A5:0006:1BFC
 */
void f__B4F2_04A7_0004_07E2()
{
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B4F2_04B7_0015_8DF5()
 *
 * @name f__B4F2_04B7_0015_8DF5
 * @implements B4F2:04B7:0015:8DF5 ()
 *
 * Called From: 34F2:002A:0005:16E8
 * Called From: 34F2:002A:0005:1428
 * Called From: B4F2:01EB:0008:5180
 * Called From: B4F2:01FE:0009:727D
 */
void f__B4F2_04B7_0015_8DF5()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x16);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x0);
	emu_push(emu_cs);
	emu_push(0x04CC); f__B4F2_1181_000B_A76F();
	f__B4F2_04CC_000C_6485();
}

/**
 * Decompiled function f__B4F2_04CC_000C_6485()
 *
 * @name f__B4F2_04CC_000C_6485
 * @implements B4F2:04CC:000C:6485 ()
 *
 * Called From: B4F2:04CC:0015:8DF5
 */
void f__B4F2_04CC_000C_6485()
{
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x7F4E), emu_ax.x);
	emu_orw(&emu_si, emu_si);
	if (emu_flags.zf) { f__B4F2_04D8_0019_92CD(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x2A91));
	f__B4F2_04DA_0017_34CD(); return;
}

/**
 * Decompiled function f__B4F2_04D8_0019_92CD()
 *
 * @name f__B4F2_04D8_0019_92CD
 * @implements B4F2:04D8:0019:92CD ()
 *
 * Called From: B4F2:04D1:000C:6485
 */
void f__B4F2_04D8_0019_92CD()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00, -0x7F4E));
	emu_addw(&emu_dx.x, emu_ax.x);
	emu_decw(&emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x2A97), emu_dx.x);
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x2A97), 0x0);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__B4F2_04F1_000B_5CAD(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x2A97));
	emu_ip = 0x04F3; emu_last_cs = 0xB4F2; emu_last_ip = 0x04EF; emu_last_length = 0x0019; emu_last_crc = 0x92CD; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B4F2_04DA_0017_34CD()
 *
 * @name f__B4F2_04DA_0017_34CD
 * @implements B4F2:04DA:0017:34CD ()
 *
 * Called From: B4F2:04D6:000C:6485
 */
void f__B4F2_04DA_0017_34CD()
{
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00, -0x7F4E));
	emu_addw(&emu_dx.x, emu_ax.x);
	emu_decw(&emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x2A97), emu_dx.x);
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x2A97), 0x0);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__B4F2_04F1_000B_5CAD(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x2A97));
	emu_ip = 0x04F3; emu_last_cs = 0xB4F2; emu_last_ip = 0x04EF; emu_last_length = 0x0017; emu_last_crc = 0x34CD; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B4F2_04F1_000B_5CAD()
 *
 * @name f__B4F2_04F1_000B_5CAD
 * @implements B4F2:04F1:000B:5CAD ()
 *
 * Called From: B4F2:04EA:0019:92CD
 * Called From: B4F2:04EA:0017:34CD
 */
void f__B4F2_04F1_000B_5CAD()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x2A97), emu_ax.x);
	emu_push(emu_si);
	emu_push(emu_cs);
	emu_push(0x04FC); f__B4F2_1221_000D_9992();
	f__B4F2_04FC_000A_ADCB();
}

/**
 * Decompiled function f__B4F2_04FC_000A_ADCB()
 *
 * @name f__B4F2_04FC_000A_ADCB
 * @implements B4F2:04FC:000A:ADCB ()
 *
 * Called From: B4F2:04FC:000B:5CAD
 */
void f__B4F2_04FC_000A_ADCB()
{
	emu_pop(&emu_cx.x);
	emu_orw(&emu_si, emu_si);
	if (emu_flags.zf) { f__B4F2_0506_0010_D68E(); return; }
	emu_movw(&emu_ax.x, 0x62);
	f__B4F2_0509_000D_5606(); return;
}

/**
 * Decompiled function f__B4F2_0506_0010_D68E()
 *
 * @name f__B4F2_0506_0010_D68E
 * @implements B4F2:0506:0010:D68E ()
 *
 * Called From: B4F2:04FF:000A:ADCB
 */
void f__B4F2_0506_0010_D68E()
{
	emu_movw(&emu_ax.x, 0x61);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x2789), emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x2787);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x0516); f__B4F2_0EE0_000E_F1BB();
	f__B4F2_0516_000C_C5EC();
}

/**
 * Decompiled function f__B4F2_0509_000D_5606()
 *
 * @name f__B4F2_0509_000D_5606
 * @implements B4F2:0509:000D:5606 ()
 *
 * Called From: B4F2:0504:000A:ADCB
 */
void f__B4F2_0509_000D_5606()
{
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x2789), emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x2787);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x0516); f__B4F2_0EE0_000E_F1BB();
	f__B4F2_0516_000C_C5EC();
}

/**
 * Decompiled function f__B4F2_0516_000C_C5EC()
 *
 * @name f__B4F2_0516_000C_C5EC
 * @implements B4F2:0516:000C:C5EC ()
 *
 * Called From: B4F2:0516:0010:D68E
 * Called From: B4F2:0516:000D:5606
 */
void f__B4F2_0516_000C_C5EC()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x2787);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x0522); f__B4F2_0855_0013_DDE1();
	f__B4F2_0522_000C_92A5();
}

/**
 * Decompiled function f__B4F2_0522_000C_92A5()
 *
 * @name f__B4F2_0522_000C_92A5
 * @implements B4F2:0522:000C:92A5 ()
 *
 * Called From: B4F2:0522:000C:C5EC
 */
void f__B4F2_0522_000C_92A5()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_push(emu_si);
	emu_push(emu_cs);
	emu_push(0x052E); f__B4F2_0D52_0029_C02E();
	f__B4F2_052E_000A_0B8F();
}

/**
 * Decompiled function f__B4F2_052E_000A_0B8F()
 *
 * @name f__B4F2_052E_000A_0B8F
 * @implements B4F2:052E:000A:0B8F ()
 *
 * Called From: B4F2:052E:000C:92A5
 */
void f__B4F2_052E_000A_0B8F()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x1);
	f__B4F2_0691_0009_0D7D(); return;
}

/**
 * Decompiled function f__B4F2_0538_0009_8E74()
 *
 * @name f__B4F2_0538_0009_8E74
 * @implements B4F2:0538:0009:8E74 ()
 *
 * Called From: B4F2:0697:0009:0D7D
 */
void f__B4F2_0538_0009_8E74()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_si);
	emu_push(emu_cs);
	emu_push(0x0541); f__B4F2_0D52_0029_C02E();
	f__B4F2_0541_000F_D823();
}

/**
 * Decompiled function f__B4F2_0541_000F_D823()
 *
 * @name f__B4F2_0541_000F_D823
 * @implements B4F2:0541:000F:D823 ()
 *
 * Called From: B4F2:0541:0009:8E74
 */
void f__B4F2_0541_000F_D823()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x2A95));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x2A93));
	emu_push(emu_cs); emu_push(0x0550); emu_cs = 0x34A2; ovl__34A2(2);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { ovl__34F2(0xFF); }
	f__B4F2_0550_000D_086E();
}

/**
 * Decompiled function f__B4F2_0550_000D_086E()
 *
 * @name f__B4F2_0550_000D_086E
 * @implements B4F2:0550:000D:086E ()
 *
 * Called From: B4F2:0550:000F:D823
 */
void f__B4F2_0550_000D_086E()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_di, emu_ax.x);
	emu_testw(&emu_di, 0x8000);
	if (!emu_flags.zf) { f__B4F2_055D_0012_5BF2(); return; }
	f__B4F2_068C_0005_17FC(); return;
}

/**
 * Decompiled function f__B4F2_055D_0012_5BF2()
 *
 * @name f__B4F2_055D_0012_5BF2
 * @implements B4F2:055D:0012:5BF2 ()
 *
 * Called From: B4F2:0558:000D:086E
 */
void f__B4F2_055D_0012_5BF2()
{
	emu_andw(&emu_di, 0x7FFF);
	emu_push(emu_di);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x2A95));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x2A93));
	emu_push(emu_cs); emu_push(0x056F); emu_cs = 0x348B; ovl__348B(3);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { ovl__34F2(0xFF); }
	f__B4F2_056F_001C_159D();
}

/**
 * Decompiled function f__B4F2_056F_001C_159D()
 *
 * @name f__B4F2_056F_001C_159D
 * @implements B4F2:056F:001C:159D ()
 *
 * Called From: B4F2:056F:0012:5BF2
 */
void f__B4F2_056F_001C_159D()
{
	emu_addws(&emu_sp, 0x6);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax.x);
	emu_movw(&emu_ax.x, emu_di);
	emu_cmpw(&emu_ax.x, 0x23);
	if (emu_flags.zf) { f__B4F2_05EF_000D_BD2F(); return; }
	emu_cmpw(&emu_ax.x, 0x25);
	if (emu_flags.zf) { emu_ip = 0x058B; emu_last_cs = 0xB4F2; emu_last_ip = 0x0582; emu_last_length = 0x001C; emu_last_crc = 0x159D; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_ax.x, 0x26);
	if (emu_flags.zf) { emu_ip = 0x05DB; emu_last_cs = 0xB4F2; emu_last_ip = 0x0587; emu_last_length = 0x001C; emu_last_crc = 0x159D; emu_call(); return; } // Jump does not resolve
	f__B4F2_05FC_000A_9D4B(); return;
}

/**
 * Decompiled function f__B4F2_05EF_000D_BD2F()
 *
 * @name f__B4F2_05EF_000D_BD2F
 * @implements B4F2:05EF:000D:BD2F ()
 *
 * Called From: B4F2:057D:001C:159D
 */
void f__B4F2_05EF_000D_BD2F()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x0);
	f__B4F2_067B_000E_FC52(); return;
}

/**
 * Decompiled function f__B4F2_05FC_000A_9D4B()
 *
 * @name f__B4F2_05FC_000A_9D4B
 * @implements B4F2:05FC:000A:9D4B ()
 *
 * Called From: B4F2:0589:001C:159D
 */
void f__B4F2_05FC_000A_9D4B()
{
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x2787);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x0606); f__B4F2_0F24_000E_F1BB();
	f__B4F2_0606_0015_EB10();
}

/**
 * Decompiled function f__B4F2_0606_0015_EB10()
 *
 * @name f__B4F2_0606_0015_EB10
 * @implements B4F2:0606:0015:EB10 ()
 *
 * Called From: B4F2:0606:000A:9D4B
 */
void f__B4F2_0606_0015_EB10()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_subws(&emu_di, 0x1E);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x2A97));
	emu_subw(&emu_ax.x, emu_di);
	emu_push(emu_ax.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0x16);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x061B); f__B4F2_11B4_0016_60D6();
	f__B4F2_061B_000D_ADE5();
}

/**
 * Decompiled function f__B4F2_061B_000D_ADE5()
 *
 * @name f__B4F2_061B_000D_ADE5
 * @implements B4F2:061B:000D:ADE5 ()
 *
 * Called From: B4F2:061B:0015:EB10
 */
void f__B4F2_061B_000D_ADE5()
{
	emu_addws(&emu_sp, 0x6);
	emu_orw(&emu_si, emu_si);
	if (emu_flags.zf) { f__B4F2_0639_000A_74CF(); return; }
	emu_push(emu_di);
	emu_push(emu_cs);
	emu_push(0x0628); f__B4F2_06AE_0035_7CA4();
	f__B4F2_0628_000F_F2E3();
}

/**
 * Decompiled function f__B4F2_0628_000F_F2E3()
 *
 * @name f__B4F2_0628_000F_F2E3
 * @implements B4F2:0628:000F:F2E3 ()
 *
 * Called From: B4F2:0628:000D:ADE5
 */
void f__B4F2_0628_000F_F2E3()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x0);
	if (emu_flags.zf) { emu_ip = 0x0637; emu_last_cs = 0xB4F2; emu_last_ip = 0x0630; emu_last_length = 0x000F; emu_last_crc = 0xF2E3; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	f__B4F2_06A8_0006_137A(); return;
}

/**
 * Decompiled function f__B4F2_0632_0005_11AE()
 *
 * @name f__B4F2_0632_0005_11AE
 * @implements B4F2:0632:0005:11AE ()
 *
 * Called From: B4F2:06A6:0004:05E0
 */
void f__B4F2_0632_0005_11AE()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	f__B4F2_06A8_0006_137A(); return;
}

/**
 * Decompiled function f__B4F2_0635_0002_034E()
 *
 * @name f__B4F2_0635_0002_034E
 * @implements B4F2:0635:0002:034E ()
 *
 * Called From: B4F2:0648:0007:2FAA
 */
void f__B4F2_0635_0002_034E()
{
	f__B4F2_06A8_0006_137A(); return;
}

/**
 * Decompiled function f__B4F2_0639_000A_74CF()
 *
 * @name f__B4F2_0639_000A_74CF
 * @implements B4F2:0639:000A:74CF ()
 *
 * Called From: B4F2:0620:000D:ADE5
 */
void f__B4F2_0639_000A_74CF()
{
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0x16);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0643); emu_cs = 0x3511; ovl__3511(2);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { ovl__34F2(0xFF); }
	f__B4F2_0643_0007_2FAA();
}

/**
 * Decompiled function f__B4F2_0643_0007_2FAA()
 *
 * @name f__B4F2_0643_0007_2FAA
 * @implements B4F2:0643:0007:2FAA ()
 *
 * Called From: 261F:01B9:001B:DA28
 */
void f__B4F2_0643_0007_2FAA()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_ax.x, 0x1);
	f__B4F2_0635_0002_034E(); return;
}

/**
 * Decompiled function f__B4F2_067B_000E_FC52()
 *
 * @name f__B4F2_067B_000E_FC52
 * @implements B4F2:067B:000E:FC52 ()
 *
 * Called From: B4F2:05F9:000D:BD2F
 */
void f__B4F2_067B_000E_FC52()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs); emu_push(0x0689); emu_cs = 0x348B; ovl__348B(4);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { ovl__34F2(0xFF); }
	f__B4F2_0689_0008_F77C();
}

/**
 * Decompiled function f__B4F2_0689_0008_F77C()
 *
 * @name f__B4F2_0689_0008_F77C
 * @implements B4F2:0689:0008:F77C ()
 *
 * Called From: B4F2:0689:000E:FC52
 */
void f__B4F2_0689_0008_F77C()
{
	emu_addws(&emu_sp, 0x6);
	emu_push(emu_cs); emu_push(0x0691); emu_cs = 0x0642; f__0642_0559_0027_9047();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { ovl__34F2(0xFF); }
	f__B4F2_0691_0009_0D7D();
}

/**
 * Decompiled function f__B4F2_068C_0005_17FC()
 *
 * @name f__B4F2_068C_0005_17FC
 * @implements B4F2:068C:0005:17FC ()
 *
 * Called From: B4F2:055A:000D:086E
 */
void f__B4F2_068C_0005_17FC()
{
	emu_push(emu_cs); emu_push(0x0691); emu_cs = 0x0642; f__0642_0559_0027_9047();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { ovl__34F2(0xFF); }
	f__B4F2_0691_0009_0D7D();
}

/**
 * Decompiled function f__B4F2_0691_0009_0D7D()
 *
 * @name f__B4F2_0691_0009_0D7D
 * @implements B4F2:0691:0009:0D7D ()
 *
 * Called From: B4F2:0535:000A:0B8F
 * Called From: B4F2:0691:0005:17FC
 * Called From: B4F2:0691:0008:F77C
 */
void f__B4F2_0691_0009_0D7D()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x0);
	if (emu_flags.zf) { f__B4F2_069A_000A_9F31(); return; }
	f__B4F2_0538_0009_8E74(); return;
}

/**
 * Decompiled function f__B4F2_069A_000A_9F31()
 *
 * @name f__B4F2_069A_000A_9F31
 * @implements B4F2:069A:000A:9F31 ()
 *
 * Called From: B4F2:0695:0009:0D7D
 */
void f__B4F2_069A_000A_9F31()
{
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x2787);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x06A4); f__B4F2_0F24_000E_F1BB();
	f__B4F2_06A4_0004_05E0();
}

/**
 * Decompiled function f__B4F2_06A4_0004_05E0()
 *
 * @name f__B4F2_06A4_0004_05E0
 * @implements B4F2:06A4:0004:05E0 ()
 *
 * Called From: B4F2:06A4:000A:9F31
 */
void f__B4F2_06A4_0004_05E0()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	f__B4F2_0632_0005_11AE(); return;
}

/**
 * Decompiled function f__B4F2_06A8_0006_137A()
 *
 * @name f__B4F2_06A8_0006_137A
 * @implements B4F2:06A8:0006:137A ()
 *
 * Called From: B4F2:0635:0005:11AE
 * Called From: B4F2:0635:000F:F2E3
 * Called From: B4F2:0635:0002:034E
 */
void f__B4F2_06A8_0006_137A()
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
 * Decompiled function f__B4F2_06AE_0035_7CA4()
 *
 * @name f__B4F2_06AE_0035_7CA4
 * @implements B4F2:06AE:0035:7CA4 ()
 *
 * Called From: B4F2:0625:000D:ADE5
 */
void f__B4F2_06AE_0035_7CA4()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x18);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_si);
	emu_movw(&emu_dx.x, 0x33);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_addw(&emu_ax.x, 0x80B4);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ds);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0x5B);
	if (!emu_flags.zf) { emu_ip = 0x06D9; emu_last_cs = 0xB4F2; emu_last_ip = 0x06D0; emu_last_length = 0x0035; emu_last_crc = 0x7CA4; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0x0);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x27F0);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x06E3); f__B4F2_0EE0_000E_F1BB();
	f__B4F2_06E3_000C_B3BC();
}

/**
 * Decompiled function f__B4F2_06E3_000C_B3BC()
 *
 * @name f__B4F2_06E3_000C_B3BC
 * @implements B4F2:06E3:000C:B3BC ()
 *
 * Called From: B4F2:06E3:0035:7CA4
 */
void f__B4F2_06E3_000C_B3BC()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x27F0);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x06EF); f__B4F2_0855_0013_DDE1();
	f__B4F2_06EF_0023_FEAC();
}

/**
 * Decompiled function f__B4F2_06EF_0023_FEAC()
 *
 * @name f__B4F2_06EF_0023_FEAC
 * @implements B4F2:06EF:0023:FEAC ()
 *
 * Called From: B4F2:06EF:000C:B3BC
 */
void f__B4F2_06EF_0023_FEAC()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_xorw(&emu_di, emu_di);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x1);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x1);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0x5B);
	if (!emu_flags.zf) { f__B4F2_070A_0008_566A(); return; }
	emu_movw(&emu_si, emu_get_memory16(emu_ds, 0x00, -0x7F4E));
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0712); emu_cs = 0x2598; emu_ip = 0x0712; emu_last_cs = 0xB4F2; emu_last_ip = 0x070D; emu_last_length = 0x0023; emu_last_crc = 0xFEAC; emu_call(); // Jump does not resolve
	f__B4F2_0712_000A_1EF6();
}

/**
 * Decompiled function f__B4F2_070A_0008_566A()
 *
 * @name f__B4F2_070A_0008_566A
 * @implements B4F2:070A:0008:566A ()
 *
 * Called From: B4F2:0704:0023:FEAC
 */
void f__B4F2_070A_0008_566A()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0712); emu_cs = 0x2598; f__2598_0000_0017_D681();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { ovl__34F2(0xFF); }
	f__B4F2_0712_000A_1EF6();
}

/**
 * Decompiled function f__B4F2_0712_000A_1EF6()
 *
 * @name f__B4F2_0712_000A_1EF6
 * @implements B4F2:0712:000A:1EF6 ()
 *
 * Called From: B4F2:0712:0008:566A
 */
void f__B4F2_0712_000A_1EF6()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_ax.x, 0xF);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x071C); emu_cs = 0x07AE; f__07AE_0000_00DF_386F();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { ovl__34F2(0xFF); }
	f__B4F2_071C_0006_079E();
}

/**
 * Decompiled function f__B4F2_071C_0006_079E()
 *
 * @name f__B4F2_071C_0006_079E
 * @implements B4F2:071C:0006:079E ()
 *
 * Called From: B4F2:071C:000A:1EF6
 */
void f__B4F2_071C_0006_079E()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_cs); emu_push(0x0722); emu_cs = 0x2B6C; f__2B6C_0137_0020_17E5();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { ovl__34F2(0xFF); }
	f__B4F2_0722_002C_6043();
}

/**
 * Decompiled function f__B4F2_0722_002C_6043()
 *
 * @name f__B4F2_0722_002C_6043
 * @implements B4F2:0722:002C:6043 ()
 *
 * Called From: B4F2:0722:0006:079E
 */
void f__B4F2_0722_002C_6043()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x4);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00, -0x66CF));
	emu_addw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00, -0x66D1));
	emu_movb(&emu_cx.l, 0x3);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_addw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00, -0x66D5));
	emu_decw(&emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00, -0x66D3));
	emu_movb(&emu_cx.l, 0x3);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_decw(&emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x074E); emu_cs = 0x10E4; f__10E4_0008_0048_CEEB();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { ovl__34F2(0xFF); }
	f__B4F2_074E_0008_F63E();
}

/**
 * Decompiled function f__B4F2_074E_0008_F63E()
 *
 * @name f__B4F2_074E_0008_F63E
 * @implements B4F2:074E:0008:F63E ()
 *
 * Called From: B4F2:074E:002C:6043
 */
void f__B4F2_074E_0008_F63E()
{
	emu_addws(&emu_sp, 0xC);
	emu_push(emu_cs); emu_push(0x0756); emu_cs = 0x2B6C; f__2B6C_0169_001E_97C8();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { ovl__34F2(0xFF); }
	f__B4F2_0756_0003_043C();
}

/**
 * Decompiled function f__B4F2_0756_0003_043C()
 *
 * @name f__B4F2_0756_0003_043C
 * @implements B4F2:0756:0003:043C ()
 *
 * Called From: B4F2:0756:0008:F63E
 */
void f__B4F2_0756_0003_043C()
{
	f__B4F2_0836_0009_0D6F(); return;
}

/**
 * Decompiled function f__B4F2_0759_001D_38D8()
 *
 * @name f__B4F2_0759_001D_38D8
 * @implements B4F2:0759:001D:38D8 ()
 *
 * Called From: B4F2:083C:0009:0D6F
 */
void f__B4F2_0759_001D_38D8()
{
	emu_movw(&emu_ax.x, 0x22);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0xEB);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0xE8);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_cs); emu_push(0x0776); emu_cs = 0x10E4; f__10E4_1EF1_0040_E33D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { ovl__34F2(0xFF); }
	f__B4F2_0776_0027_AFEA();
}

/**
 * Decompiled function f__B4F2_0776_0027_AFEA()
 *
 * @name f__B4F2_0776_0027_AFEA
 * @implements B4F2:0776:0027:AFEA ()
 *
 * Called From: B4F2:0776:001D:38D8
 */
void f__B4F2_0776_0027_AFEA()
{
	emu_addws(&emu_sp, 0xE);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x2A95));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x2A93));
	emu_movw(&emu_ax.x, 0xF);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x32);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x079D); emu_cs = 0x3527; ovl__3527(0);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { ovl__34F2(0xFF); }
	f__B4F2_079D_0015_B348();
}

/**
 * Decompiled function f__B4F2_079D_0015_B348()
 *
 * @name f__B4F2_079D_0015_B348
 * @implements B4F2:079D:0015:B348 ()
 *
 * Called From: B4F2:079D:0027:AFEA
 */
void f__B4F2_079D_0015_B348()
{
	emu_addws(&emu_sp, 0x12);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x2);
	emu_testw(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x8000);
	if (!emu_flags.zf) { f__B4F2_07B2_0017_B2AB(); return; }
	emu_ip = 0x0836; emu_last_cs = 0xB4F2; emu_last_ip = 0x07AF; emu_last_length = 0x0015; emu_last_crc = 0xB348; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B4F2_07B2_0017_B2AB()
 *
 * @name f__B4F2_07B2_0017_B2AB
 * @implements B4F2:07B2:0017:B2AB ()
 *
 * Called From: B4F2:07AD:0015:B348
 */
void f__B4F2_07B2_0017_B2AB()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_andw(&emu_ax.x, 0x7FFF);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x2A95));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x2A93));
	emu_push(emu_cs); emu_push(0x07C9); emu_cs = 0x348B; ovl__348B(3);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { ovl__34F2(0xFF); }
	f__B4F2_07C9_000A_AD47();
}

/**
 * Decompiled function f__B4F2_07C9_000A_AD47()
 *
 * @name f__B4F2_07C9_000A_AD47
 * @implements B4F2:07C9:000A:AD47 ()
 *
 * Called From: B4F2:07C9:0017:B2AB
 */
void f__B4F2_07C9_000A_AD47()
{
	emu_addws(&emu_sp, 0x6);
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x07D3); emu_cs = 0x348B; ovl__348B(4);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { ovl__34F2(0xFF); }
	f__B4F2_07D3_0015_6D8B();
}

/**
 * Decompiled function f__B4F2_07D3_0015_6D8B()
 *
 * @name f__B4F2_07D3_0015_6D8B
 * @implements B4F2:07D3:0015:6D8B ()
 *
 * Called From: B4F2:07D3:000A:AD47
 */
void f__B4F2_07D3_0015_6D8B()
{
	emu_addws(&emu_sp, 0x6);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_andw(&emu_ax.x, 0x7FFF);
	emu_cmpw(&emu_ax.x, 0x1E);
	if (emu_flags.zf) { f__B4F2_07E8_0019_4069(); return; }
	emu_cmpw(&emu_ax.x, 0x1F);
	if (emu_flags.zf) { emu_ip = 0x0821; emu_last_cs = 0xB4F2; emu_last_ip = 0x07E4; emu_last_length = 0x0015; emu_last_crc = 0x6D8B; emu_call(); return; } // Jump does not resolve
	emu_ip = 0x0834; emu_last_cs = 0xB4F2; emu_last_ip = 0x07E6; emu_last_length = 0x0015; emu_last_crc = 0x6D8B; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B4F2_07E8_0019_4069()
 *
 * @name f__B4F2_07E8_0019_4069
 * @implements B4F2:07E8:0019:4069 ()
 *
 * Called From: B4F2:07DF:0015:6D8B
 */
void f__B4F2_07E8_0019_4069()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0x0);
	if (emu_flags.zf) { emu_ip = 0x081F; emu_last_cs = 0xB4F2; emu_last_ip = 0x07EF; emu_last_length = 0x0019; emu_last_crc = 0x4069; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x2A97));
	emu_subw(&emu_ax.x, emu_si);
	emu_push(emu_ax.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0x18);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x0801); f__B4F2_11B4_0016_60D6();
	f__B4F2_0801_0013_93CF();
}

/**
 * Decompiled function f__B4F2_0801_0013_93CF()
 *
 * @name f__B4F2_0801_0013_93CF
 * @implements B4F2:0801:0013:93CF ()
 *
 * Called From: B4F2:0801:0019:4069
 */
void f__B4F2_0801_0013_93CF()
{
	emu_addws(&emu_sp, 0x6);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0x18);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0814); emu_cs = 0x3511; ovl__3511(4);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { ovl__34F2(0xFF); }
	f__B4F2_0814_000D_1E69();
}

/**
 * Decompiled function f__B4F2_0814_000D_1E69()
 *
 * @name f__B4F2_0814_000D_1E69
 * @implements B4F2:0814:000D:1E69 ()
 *
 * Called From: 261F:01B9:001B:DA28
 */
void f__B4F2_0814_000D_1E69()
{
	emu_addws(&emu_sp, 0x8);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x0);
	emu_movw(&emu_di, 0x1);
	f__B4F2_0836_0009_0D6F(); return;
}

/**
 * Decompiled function f__B4F2_0836_0009_0D6F()
 *
 * @name f__B4F2_0836_0009_0D6F
 * @implements B4F2:0836:0009:0D6F ()
 *
 * Called From: B4F2:0756:0003:043C
 * Called From: B4F2:081F:000D:1E69
 */
void f__B4F2_0836_0009_0D6F()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x0);
	if (emu_flags.zf) { f__B4F2_083F_000A_E941(); return; }
	f__B4F2_0759_001D_38D8(); return;
}

/**
 * Decompiled function f__B4F2_083F_000A_E941()
 *
 * @name f__B4F2_083F_000A_E941
 * @implements B4F2:083F:000A:E941 ()
 *
 * Called From: B4F2:083A:0009:0D6F
 */
void f__B4F2_083F_000A_E941()
{
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x27F0);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x0849); f__B4F2_0F24_000E_F1BB();
	f__B4F2_0849_0006_1044();
}

/**
 * Decompiled function f__B4F2_0849_0006_1044()
 *
 * @name f__B4F2_0849_0006_1044
 * @implements B4F2:0849:0006:1044 ()
 *
 * Called From: B4F2:0849:000A:E941
 */
void f__B4F2_0849_0006_1044()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_ax.x, emu_di);
	f__B4F2_084F_0006_137A(); return;
}

/**
 * Decompiled function f__B4F2_084F_0006_137A()
 *
 * @name f__B4F2_084F_0006_137A
 * @implements B4F2:084F:0006:137A ()
 *
 * Called From: B4F2:084D:0006:1044
 */
void f__B4F2_084F_0006_137A()
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
 * Decompiled function f__B4F2_0855_0013_DDE1()
 *
 * @name f__B4F2_0855_0013_DDE1
 * @implements B4F2:0855:0013:DDE1 ()
 *
 * Called From: B4F2:0186:000C:0D9A
 * Called From: B4F2:029D:000C:0C78
 * Called From: B4F2:039F:000C:F562
 * Called From: B4F2:051F:000C:C5EC
 * Called From: B4F2:06EC:000C:B3BC
 * Called From: B4F2:1121:000B:2249
 */
void f__B4F2_0855_0013_DDE1()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x8);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (!emu_flags.zf) { f__B4F2_0868_0015_AB99(); return; }
	emu_ip = 0x0D4C; emu_last_cs = 0xB4F2; emu_last_ip = 0x0865; emu_last_length = 0x0013; emu_last_crc = 0xDDE1; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B4F2_0868_0015_AB99()
 *
 * @name f__B4F2_0868_0015_AB99
 * @implements B4F2:0868:0015:AB99 ()
 *
 * Called From: B4F2:0863:0013:DDE1
 */
void f__B4F2_0868_0015_AB99()
{
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x2A95), 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x2A93), 0x0);
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x087D); emu_cs = 0x2598; f__2598_0000_0017_D681();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { ovl__34F2(0xFF); }
	f__B4F2_087D_000C_81B4();
}

/**
 * Decompiled function f__B4F2_087D_000C_81B4()
 *
 * @name f__B4F2_087D_000C_81B4
 * @implements B4F2:087D:000C:81B4 ()
 *
 * Called From: B4F2:087D:0015:AB99
 */
void f__B4F2_087D_000C_81B4()
{
	emu_pop(&emu_cx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_push(emu_cs); emu_push(0x0889); emu_cs = 0x07AE; f__07AE_0000_00DF_386F();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { ovl__34F2(0xFF); }
	f__B4F2_0889_0012_8AFE();
}

/**
 * Decompiled function f__B4F2_0889_0012_8AFE()
 *
 * @name f__B4F2_0889_0012_8AFE
 * @implements B4F2:0889:0012:8AFE ()
 *
 * Called From: B4F2:0889:000C:81B4
 */
void f__B4F2_0889_0012_8AFE()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6D5D));
	emu_push(emu_cs); emu_push(0x089B); emu_cs = 0x10E4; f__10E4_057F_0052_B1B7();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { ovl__34F2(0xFF); }
	f__B4F2_089B_000F_74AE();
}

/**
 * Decompiled function f__B4F2_089B_000F_74AE()
 *
 * @name f__B4F2_089B_000F_74AE
 * @implements B4F2:089B:000F:74AE ()
 *
 * Called From: B4F2:089B:0012:8AFE
 */
void f__B4F2_089B_000F_74AE()
{
	emu_addws(&emu_sp, 0x6);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x2));
	emu_push(emu_cs);
	emu_push(0x08AA); f__B4F2_1303_0017_BCDF();
	f__B4F2_08AA_0023_26FB();
}

/**
 * Decompiled function f__B4F2_08AA_0023_26FB()
 *
 * @name f__B4F2_08AA_0023_26FB
 * @implements B4F2:08AA:0023:26FB ()
 *
 * Called From: B4F2:08AA:000F:74AE
 */
void f__B4F2_08AA_0023_26FB()
{
	emu_pop(&emu_cx.x);
	emu_orw(&emu_ax.x, emu_dx.x);
	if (emu_flags.zf) { emu_ip = 0x0902; emu_last_cs = 0xB4F2; emu_last_ip = 0x08AD; emu_last_length = 0x0023; emu_last_crc = 0x26FB; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, 0x122);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0xEE);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_ds);
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp,  0x8), emu_ax.x);
	if (!emu_flags.zf) { emu_ip = 0x08CD; emu_last_cs = 0xB4F2; emu_last_ip = 0x08BF; emu_last_length = 0x0023; emu_last_crc = 0x26FB; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp,  0x6), 0x271E);
	if (!emu_flags.zf) { f__B4F2_08CD_002A_1FD3(); return; }
	emu_movw(&emu_ax.x, 0x2);
	f__B4F2_08CF_0028_53D2(); return;
}

/**
 * Decompiled function f__B4F2_08CD_002A_1FD3()
 *
 * @name f__B4F2_08CD_002A_1FD3
 * @implements B4F2:08CD:002A:1FD3 ()
 *
 * Called From: B4F2:08C6:0023:26FB
 */
void f__B4F2_08CD_002A_1FD3()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00, -0x66D5));
	emu_addw(&emu_dx.x, emu_ax.x);
	emu_addws(&emu_dx.x, 0x6);
	emu_push(emu_dx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00, -0x66D3));
	emu_movb(&emu_cx.l, 0x3);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00, -0x66D1));
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_dx.x, emu_cx.l);
	emu_addw(&emu_ax.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x2));
	emu_push(emu_cs);
	emu_push(0x08F7); f__B4F2_1303_0017_BCDF();
	f__B4F2_08F7_0008_7B10();
}

/**
 * Decompiled function f__B4F2_08CF_0028_53D2()
 *
 * @name f__B4F2_08CF_0028_53D2
 * @implements B4F2:08CF:0028:53D2 ()
 *
 * Called From: B4F2:08CB:0023:26FB
 */
void f__B4F2_08CF_0028_53D2()
{
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00, -0x66D5));
	emu_addw(&emu_dx.x, emu_ax.x);
	emu_addws(&emu_dx.x, 0x6);
	emu_push(emu_dx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00, -0x66D3));
	emu_movb(&emu_cx.l, 0x3);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00, -0x66D1));
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_dx.x, emu_cx.l);
	emu_addw(&emu_ax.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x2));
	emu_push(emu_cs);
	emu_push(0x08F7); f__B4F2_1303_0017_BCDF();
	f__B4F2_08F7_0008_7B10();
}

/**
 * Decompiled function f__B4F2_08F7_0008_7B10()
 *
 * @name f__B4F2_08F7_0008_7B10
 * @implements B4F2:08F7:0008:7B10 ()
 *
 * Called From: B4F2:08F7:002A:1FD3
 * Called From: B4F2:08F7:0028:53D2
 */
void f__B4F2_08F7_0008_7B10()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x08FF); emu_cs = 0x10E4; f__10E4_1EF1_0040_E33D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { ovl__34F2(0xFF); }
	f__B4F2_08FF_000F_7759();
}

/**
 * Decompiled function f__B4F2_08FF_000F_7759()
 *
 * @name f__B4F2_08FF_000F_7759
 * @implements B4F2:08FF:000F:7759 ()
 *
 * Called From: B4F2:08FF:0008:7B10
 */
void f__B4F2_08FF_000F_7759()
{
	emu_addws(&emu_sp, 0xE);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x7));
	emu_push(emu_cs);
	emu_push(0x090E); f__B4F2_1303_0017_BCDF();
	f__B4F2_090E_002B_D108();
}

/**
 * Decompiled function f__B4F2_090E_002B_D108()
 *
 * @name f__B4F2_090E_002B_D108
 * @implements B4F2:090E:002B:D108 ()
 *
 * Called From: B4F2:090E:000F:7759
 */
void f__B4F2_090E_002B_D108()
{
	emu_pop(&emu_cx.x);
	emu_orw(&emu_ax.x, emu_dx.x);
	if (!emu_flags.zf) { f__B4F2_0944_0005_0FA8(); return; }
	emu_movw(&emu_ax.x, 0x22);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0xE8);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00, -0x66D5));
	emu_addw(&emu_ax.x, 0x2A);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00, -0x66D3));
	emu_addw(&emu_ax.x, 0x2);
	emu_movb(&emu_cx.l, 0x3);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x151);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0939); emu_cs = 0x0FCB; f__0FCB_005F_001C_147D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { ovl__34F2(0xFF); }
	f__B4F2_0939_0008_7B10();
}

/**
 * Decompiled function f__B4F2_0939_0008_7B10()
 *
 * @name f__B4F2_0939_0008_7B10
 * @implements B4F2:0939:0008:7B10 ()
 *
 * Called From: B4F2:0939:002B:D108
 */
void f__B4F2_0939_0008_7B10()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0941); emu_cs = 0x10E4; f__10E4_1EF1_0040_E33D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { ovl__34F2(0xFF); }
	f__B4F2_0941_0008_ED28();
}

/**
 * Decompiled function f__B4F2_0941_0008_ED28()
 *
 * @name f__B4F2_0941_0008_ED28
 * @implements B4F2:0941:0008:ED28 ()
 *
 * Called From: B4F2:0941:0008:7B10
 */
void f__B4F2_0941_0008_ED28()
{
	emu_addws(&emu_sp, 0xE);
	emu_xorw(&emu_di, emu_di);
	f__B4F2_0BA6_000F_DF20(); return;
}

/**
 * Decompiled function f__B4F2_0944_0005_0FA8()
 *
 * @name f__B4F2_0944_0005_0FA8
 * @implements B4F2:0944:0005:0FA8 ()
 *
 * Called From: B4F2:0911:002B:D108
 */
void f__B4F2_0944_0005_0FA8()
{
	emu_xorw(&emu_di, emu_di);
	f__B4F2_0BA6_000F_DF20(); return;
}

/**
 * Decompiled function f__B4F2_0949_0037_24EA()
 *
 * @name f__B4F2_0949_0037_24EA
 * @implements B4F2:0949:0037:24EA ()
 *
 * Called From: B4F2:0BB2:000F:DF20
 * Called From: B4F2:0BB2:0010:DF67
 * Called From: B4F2:0BB2:0013:D873
 */
void f__B4F2_0949_0037_24EA()
{
	emu_movw(&emu_bx.x, emu_di);
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, emu_bx.x,  0x2A77));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, emu_bx.x,  0x2A75));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_dx.x);
	emu_movw(&emu_ax.x, emu_di);
	emu_movw(&emu_dx.x, 0xE);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_addws(&emu_bx.x, 0x7);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_bx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_push(emu_cs);
	emu_push(0x0980); f__B4F2_1303_0017_BCDF();
	f__B4F2_0980_0008_65A8();
}

/**
 * Decompiled function f__B4F2_0980_0008_65A8()
 *
 * @name f__B4F2_0980_0008_65A8
 * @implements B4F2:0980:0008:65A8 ()
 *
 * Called From: B4F2:0980:0037:24EA
 */
void f__B4F2_0980_0008_65A8()
{
	emu_pop(&emu_cx.x);
	emu_orw(&emu_ax.x, emu_dx.x);
	if (!emu_flags.zf) { f__B4F2_0988_0079_3B74(); return; }
	f__B4F2_0BA5_0010_DF67(); return;
}

/**
 * Decompiled function f__B4F2_0988_0079_3B74()
 *
 * @name f__B4F2_0988_0079_3B74
 * @implements B4F2:0988:0079:3B74 ()
 *
 * Called From: B4F2:0983:0008:65A8
 */
void f__B4F2_0988_0079_3B74()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x2), 0x0);
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x0), 0x0);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x2));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x1E), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x4));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x20), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x6));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x22), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x8));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x24), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x6), 0x0);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x8), 0x0);
	emu_movw(&emu_ax.x, emu_ds);
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp,  0x8), emu_ax.x);
	if (!emu_flags.zf) { emu_ip = 0x09EE; emu_last_cs = 0xB4F2; emu_last_ip = 0x09E5; emu_last_length = 0x0079; emu_last_crc = 0x3B74; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp,  0x6), 0x27F0);
	if (emu_flags.zf) { f__B4F2_0A23_00A0_B77E(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0xA), 0x0);
	if (emu_flags.zf) { f__B4F2_0A01_000B_E22A(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xA));
	f__B4F2_0A07_0005_166C(); return;
}

/**
 * Decompiled function f__B4F2_0A01_000B_E22A()
 *
 * @name f__B4F2_0A01_000B_E22A
 * @implements B4F2:0A01:000B:E22A ()
 *
 * Called From: B4F2:09F6:0079:3B74
 */
void f__B4F2_0A01_000B_E22A()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_push(emu_cs);
	emu_push(0x0A0C); f__B4F2_1303_0017_BCDF();
	f__B4F2_0A0C_000F_7E60();
}

/**
 * Decompiled function f__B4F2_0A07_0005_166C()
 *
 * @name f__B4F2_0A07_0005_166C
 * @implements B4F2:0A07:0005:166C ()
 *
 * Called From: B4F2:09FF:0079:3B74
 */
void f__B4F2_0A07_0005_166C()
{
	emu_push(emu_cs);
	emu_push(0x0A0C); f__B4F2_1303_0017_BCDF();
	f__B4F2_0A0C_000F_7E60();
}

/**
 * Decompiled function f__B4F2_0A0C_000F_7E60()
 *
 * @name f__B4F2_0A0C_000F_7E60
 * @implements B4F2:0A0C:000F:7E60 ()
 *
 * Called From: B4F2:0A0C:000B:E22A
 * Called From: B4F2:0A0C:0005:166C
 */
void f__B4F2_0A0C_000F_7E60()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_es, emu_dx.x);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x0));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0A1B); emu_cs = 0x29DA; f__29DA_00D0_0013_27E9();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { ovl__34F2(0xFF); }
	f__B4F2_0A1B_00A8_83C6();
}

/**
 * Decompiled function f__B4F2_0A1B_00A8_83C6()
 *
 * @name f__B4F2_0A1B_00A8_83C6
 * @implements B4F2:0A1B:00A8:83C6 ()
 *
 * Called From: B4F2:0A1B:000F:7E60
 */
void f__B4F2_0A1B_00A8_83C6()
{
	emu_pop(&emu_cx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x6), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0xC));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x8), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x6), 0x1B);
	if (!emu_flags.zf) { f__B4F2_0A44_007F_FBD2(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x8), 0x13);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_es);
	emu_lfp(&emu_es, &emu_si, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_si,  0x0));
	emu_pop(&emu_es);
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x38), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0xA), 0x4);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0xB), 0x4);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0xC), 0x4);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x12), 0x34F2);
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x10), 0x61);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x16), 0x34F2);
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x14), 0x61);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x1A), 0x34F2);
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x18), 0x61);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_es);
	emu_lfp(&emu_es, &emu_si, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_si,  0x0));
	emu_pop(&emu_es);
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x1C), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x2E), 0x0);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x2A95));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x2A93));
	emu_push(emu_cs); emu_push(0x0AC3); emu_cs = 0x348B; ovl__348B(0);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { ovl__34F2(0xFF); }
	f__B4F2_0AC3_0015_2373();
}

/**
 * Decompiled function f__B4F2_0A23_00A0_B77E()
 *
 * @name f__B4F2_0A23_00A0_B77E
 * @implements B4F2:0A23:00A0:B77E ()
 *
 * Called From: B4F2:09EC:0079:3B74
 */
void f__B4F2_0A23_00A0_B77E()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0xC));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x8), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x6), 0x1B);
	if (!emu_flags.zf) { f__B4F2_0A44_007F_FBD2(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x8), 0x13);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_es);
	emu_lfp(&emu_es, &emu_si, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_si,  0x0));
	emu_pop(&emu_es);
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x38), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0xA), 0x4);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0xB), 0x4);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0xC), 0x4);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x12), 0x34F2);
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x10), 0x61);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x16), 0x34F2);
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x14), 0x61);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x1A), 0x34F2);
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x18), 0x61);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_es);
	emu_lfp(&emu_es, &emu_si, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_si,  0x0));
	emu_pop(&emu_es);
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x1C), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x2E), 0x0);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x2A95));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x2A93));
	emu_push(emu_cs); emu_push(0x0AC3); emu_cs = 0x348B; emu_ip = 0x0AE3; emu_last_cs = 0xB4F2; emu_last_ip = 0x0ABE; emu_last_length = 0x00A0; emu_last_crc = 0xB77E; emu_call(); // Jump does not resolve
	f__B4F2_0AC3_0015_2373();
}

/**
 * Decompiled function f__B4F2_0A44_007F_FBD2()
 *
 * @name f__B4F2_0A44_007F_FBD2
 * @implements B4F2:0A44:007F:FBD2 ()
 *
 * Called From: B4F2:0A39:00A8:83C6
 * Called From: B4F2:0A39:00A0:B77E
 */
void f__B4F2_0A44_007F_FBD2()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_es);
	emu_lfp(&emu_es, &emu_si, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_si,  0x0));
	emu_pop(&emu_es);
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x38), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0xA), 0x4);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0xB), 0x4);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0xC), 0x4);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x12), 0x34F2);
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x10), 0x61);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x16), 0x34F2);
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x14), 0x61);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x1A), 0x34F2);
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x18), 0x61);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_es);
	emu_lfp(&emu_es, &emu_si, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_si,  0x0));
	emu_pop(&emu_es);
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x1C), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x2E), 0x0);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x2A95));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x2A93));
	emu_push(emu_cs); emu_push(0x0AC3); emu_cs = 0x348B; ovl__348B(0);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { ovl__34F2(0xFF); }
	f__B4F2_0AC3_0015_2373();
}

/**
 * Decompiled function f__B4F2_0AC3_0015_2373()
 *
 * @name f__B4F2_0AC3_0015_2373
 * @implements B4F2:0AC3:0015:2373 ()
 *
 * Called From: B4F2:0AC3:007F:FBD2
 * Called From: B4F2:0AC3:00A8:83C6
 */
void f__B4F2_0AC3_0015_2373()
{
	emu_addws(&emu_sp, 0x8);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x2A95), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x2A93), emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs); emu_push(0x0AD8); emu_cs = 0x348B; ovl__348B(2);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { ovl__34F2(0xFF); }
	f__B4F2_0AD8_0010_7C27();
}

/**
 * Decompiled function f__B4F2_0AD8_0010_7C27()
 *
 * @name f__B4F2_0AD8_0010_7C27
 * @implements B4F2:0AD8:0010:7C27 ()
 *
 * Called From: B4F2:0AD8:0015:2373
 */
void f__B4F2_0AD8_0010_7C27()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs); emu_push(0x0AE8); emu_cs = 0x348B; ovl__348B(4);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { ovl__34F2(0xFF); }
	f__B4F2_0AE8_000E_1D9F();
}

/**
 * Decompiled function f__B4F2_0AE8_000E_1D9F()
 *
 * @name f__B4F2_0AE8_000E_1D9F
 * @implements B4F2:0AE8:000E:1D9F ()
 *
 * Called From: B4F2:0AE8:0010:7C27
 */
void f__B4F2_0AE8_000E_1D9F()
{
	emu_addws(&emu_sp, 0x6);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs); emu_push(0x0AF6); emu_cs = 0x34A2; ovl__34A2(0);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { ovl__34F2(0xFF); }
	f__B4F2_0AF6_000F_AF79();
}

/**
 * Decompiled function f__B4F2_0AF6_000F_AF79()
 *
 * @name f__B4F2_0AF6_000F_AF79
 * @implements B4F2:0AF6:000F:AF79 ()
 *
 * Called From: B4F2:0AF6:000E:1D9F
 */
void f__B4F2_0AF6_000F_AF79()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0xA), 0x0);
	if (!emu_flags.zf) { f__B4F2_0B05_0044_22C5(); return; }
	f__B4F2_0BA5_0010_DF67(); return;
}

/**
 * Decompiled function f__B4F2_0B05_0044_22C5()
 *
 * @name f__B4F2_0B05_0044_22C5
 * @implements B4F2:0B05:0044:22C5 ()
 *
 * Called From: B4F2:0B00:000F:AF79
 */
void f__B4F2_0B05_0044_22C5()
{
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x37B6), 0x1);
	if (!emu_flags.zf) { f__B4F2_0B49_0051_14F6(); return; }
	emu_movw(&emu_ax.x, 0x22);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0xE8);
	emu_push(emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x20));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_bx.x, emu_get_memory16(emu_es, emu_bx.x,  0x1C));
	emu_movb(&emu_cx.l, 0x4);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ds, emu_bx.x,  0x4064));
	emu_addw(&emu_ax.x, 0x3);
	emu_push(emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_bx.x, emu_get_memory16(emu_es, emu_bx.x,  0x1C));
	emu_movb(&emu_cx.l, 0x4);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, emu_bx.x,  0x4062));
	emu_movb(&emu_cx.l, 0x3);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_addw(&emu_ax.x, 0x28);
	emu_ip = 0x0B8D; emu_last_cs = 0xB4F2; emu_last_ip = 0x0B47; emu_last_length = 0x0044; emu_last_crc = 0x22C5; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B4F2_0B49_0051_14F6()
 *
 * @name f__B4F2_0B49_0051_14F6
 * @implements B4F2:0B49:0051:14F6 ()
 *
 * Called From: B4F2:0B0A:0044:22C5
 */
void f__B4F2_0B49_0051_14F6()
{
	emu_movw(&emu_ax.x, 0x222);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0xE8);
	emu_push(emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x20));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_bx.x, emu_get_memory16(emu_es, emu_bx.x,  0x1C));
	emu_movb(&emu_cx.l, 0x4);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ds, emu_bx.x,  0x4064));
	emu_addw(&emu_ax.x, 0x3);
	emu_push(emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x1E));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_bx.x, emu_get_memory16(emu_es, emu_bx.x,  0x1C));
	emu_movb(&emu_cx.l, 0x4);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, emu_bx.x,  0x4062));
	emu_movb(&emu_cx.l, 0x3);
	emu_shlw(&emu_dx.x, emu_cx.l);
	emu_addw(&emu_ax.x, emu_dx.x);
	emu_addw(&emu_ax.x, 0xFFF6);
	emu_push(emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xA));
	emu_push(emu_cs);
	emu_push(0x0B9A); f__B4F2_1303_0017_BCDF();
	f__B4F2_0B9A_0008_7B10();
}

/**
 * Decompiled function f__B4F2_0B9A_0008_7B10()
 *
 * @name f__B4F2_0B9A_0008_7B10
 * @implements B4F2:0B9A:0008:7B10 ()
 *
 * Called From: B4F2:0B9A:0051:14F6
 */
void f__B4F2_0B9A_0008_7B10()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0BA2); emu_cs = 0x10E4; f__10E4_1EF1_0040_E33D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { ovl__34F2(0xFF); }
	f__B4F2_0BA2_0013_D873();
}

/**
 * Decompiled function f__B4F2_0BA2_0013_D873()
 *
 * @name f__B4F2_0BA2_0013_D873
 * @implements B4F2:0BA2:0013:D873 ()
 *
 * Called From: B4F2:0BA2:0008:7B10
 */
void f__B4F2_0BA2_0013_D873()
{
	emu_addws(&emu_sp, 0xE);
	emu_incw(&emu_di);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x6));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_cmpw(&emu_ax.x, emu_di);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { emu_ip = 0x0BB5; emu_last_cs = 0xB4F2; emu_last_ip = 0x0BB0; emu_last_length = 0x0013; emu_last_crc = 0xD873; emu_call(); return; } // Jump does not resolve
	f__B4F2_0949_0037_24EA(); return;
}

/**
 * Decompiled function f__B4F2_0BA5_0010_DF67()
 *
 * @name f__B4F2_0BA5_0010_DF67
 * @implements B4F2:0BA5:0010:DF67 ()
 *
 * Called From: B4F2:0985:0008:65A8
 * Called From: B4F2:0B02:000F:AF79
 */
void f__B4F2_0BA5_0010_DF67()
{
	emu_incw(&emu_di);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x6));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_cmpw(&emu_ax.x, emu_di);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__B4F2_0BB5_000A_8A84(); return; }
	f__B4F2_0949_0037_24EA(); return;
}

/**
 * Decompiled function f__B4F2_0BA6_000F_DF20()
 *
 * @name f__B4F2_0BA6_000F_DF20
 * @implements B4F2:0BA6:000F:DF20 ()
 *
 * Called From: B4F2:0946:0005:0FA8
 * Called From: B4F2:0946:0008:ED28
 */
void f__B4F2_0BA6_000F_DF20()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x6));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_cmpw(&emu_ax.x, emu_di);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { emu_ip = 0x0BB5; emu_last_cs = 0xB4F2; emu_last_ip = 0x0BB0; emu_last_length = 0x000F; emu_last_crc = 0xDF20; emu_call(); return; } // Jump does not resolve
	f__B4F2_0949_0037_24EA(); return;
}

/**
 * Decompiled function f__B4F2_0BB5_000A_8A84()
 *
 * @name f__B4F2_0BB5_000A_8A84
 * @implements B4F2:0BB5:000A:8A84 ()
 *
 * Called From: B4F2:0BB0:0010:DF67
 */
void f__B4F2_0BB5_000A_8A84()
{
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00, -0x7F4E), 0x5);
	if (!(emu_flags.sf != emu_flags.of)) { emu_ip = 0x0BBF; emu_last_cs = 0xB4F2; emu_last_ip = 0x0BBA; emu_last_length = 0x000A; emu_last_crc = 0x8A84; emu_call(); return; } // Jump does not resolve
	f__B4F2_0D06_0005_11DE(); return;
}

/**
 * Decompiled function f__B4F2_0D06_0005_11DE()
 *
 * @name f__B4F2_0D06_0005_11DE
 * @implements B4F2:0D06:0005:11DE ()
 *
 * Called From: B4F2:0BBC:000A:8A84
 */
void f__B4F2_0D06_0005_11DE()
{
	emu_push(emu_cs); emu_push(0x0D0B); emu_cs = 0x2B6C; f__2B6C_0137_0020_17E5();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { ovl__34F2(0xFF); }
	f__B4F2_0D0B_000B_11B1();
}

/**
 * Decompiled function f__B4F2_0D0B_000B_11B1()
 *
 * @name f__B4F2_0D0B_000B_11B1
 * @implements B4F2:0D0B:000B:11B1 ()
 *
 * Called From: B4F2:0D0B:0005:11DE
 */
void f__B4F2_0D0B_000B_11B1()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_push(emu_cs); emu_push(0x0D16); emu_cs = 0x07AE; f__07AE_0000_00DF_386F();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { ovl__34F2(0xFF); }
	f__B4F2_0D16_0025_11EA();
}

/**
 * Decompiled function f__B4F2_0D16_0025_11EA()
 *
 * @name f__B4F2_0D16_0025_11EA
 * @implements B4F2:0D16:0025:11EA ()
 *
 * Called From: B4F2:0D16:000B:11B1
 */
void f__B4F2_0D16_0025_11EA()
{
	emu_pop(&emu_cx.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x66CF));
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x66D1));
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x66D5));
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x66D3));
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x66D5));
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x66D3));
	emu_push(emu_cs); emu_push(0x0D3B); emu_cs = 0x24D0; f__24D0_000D_0039_9224();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { ovl__34F2(0xFF); }
	f__B4F2_0D3B_0008_F13E();
}

/**
 * Decompiled function f__B4F2_0D3B_0008_F13E()
 *
 * @name f__B4F2_0D3B_0008_F13E
 * @implements B4F2:0D3B:0008:F13E ()
 *
 * Called From: B4F2:0D3B:0025:11EA
 */
void f__B4F2_0D3B_0008_F13E()
{
	emu_addws(&emu_sp, 0x10);
	emu_push(emu_cs); emu_push(0x0D43); emu_cs = 0x2B6C; f__2B6C_0169_001E_97C8();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { ovl__34F2(0xFF); }
	f__B4F2_0D43_0008_566A();
}

/**
 * Decompiled function f__B4F2_0D43_0008_566A()
 *
 * @name f__B4F2_0D43_0008_566A
 * @implements B4F2:0D43:0008:566A ()
 *
 * Called From: B4F2:0D43:0008:F13E
 */
void f__B4F2_0D43_0008_566A()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0D4B); emu_cs = 0x2598; f__2598_0000_0017_D681();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { ovl__34F2(0xFF); }
	f__B4F2_0D4B_0007_3FFA();
}

/**
 * Decompiled function f__B4F2_0D4B_0007_3FFA()
 *
 * @name f__B4F2_0D4B_0007_3FFA
 * @implements B4F2:0D4B:0007:3FFA ()
 *
 * Called From: B4F2:0D4B:0008:566A
 */
void f__B4F2_0D4B_0007_3FFA()
{
	emu_pop(&emu_cx.x);
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
 * Decompiled function f__B4F2_0D52_0029_C02E()
 *
 * @name f__B4F2_0D52_0029_C02E
 * @implements B4F2:0D52:0029:C02E ()
 *
 * Called From: B4F2:052B:000C:92A5
 * Called From: B4F2:053E:0009:8E74
 */
void f__B4F2_0D52_0029_C02E()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0x8), 0x0);
	if (!emu_flags.zf) { f__B4F2_0D64_0017_4C8B(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x2A97));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x2A99));
	if (emu_flags.zf) { f__B4F2_0DE1_0002_00E2(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x2A97));
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x2A99), emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x2A97), 0x5);
	if ((emu_flags.sf != emu_flags.of)) { emu_ip = 0x0D7F; emu_last_cs = 0xB4F2; emu_last_ip = 0x0D6F; emu_last_length = 0x0029; emu_last_crc = 0xC02E; emu_call(); return; } // Jump does not resolve
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x2A39);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0D7B); emu_cs = 0x348B; emu_ip = 0x0DA5; emu_last_cs = 0xB4F2; emu_last_ip = 0x0D76; emu_last_length = 0x0029; emu_last_crc = 0xC02E; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__B4F2_0D64_0017_4C8B()
 *
 * @name f__B4F2_0D64_0017_4C8B
 * @implements B4F2:0D64:0017:4C8B ()
 *
 * Called From: B4F2:0D59:0029:C02E
 */
void f__B4F2_0D64_0017_4C8B()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x2A97));
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x2A99), emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x2A97), 0x5);
	if ((emu_flags.sf != emu_flags.of)) { f__B4F2_0D7F_000A_2355(); return; }
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x2A39);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0D7B); emu_cs = 0x348B; emu_ip = 0x0DA5; emu_last_cs = 0xB4F2; emu_last_ip = 0x0D76; emu_last_length = 0x0017; emu_last_crc = 0x4C8B; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__B4F2_0D7F_000A_2355()
 *
 * @name f__B4F2_0D7F_000A_2355
 * @implements B4F2:0D7F:000A:2355 ()
 *
 * Called From: B4F2:0D6F:0017:4C8B
 */
void f__B4F2_0D7F_000A_2355()
{
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x2A39);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0D89); emu_cs = 0x348B; ovl__348B(1);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { ovl__34F2(0xFF); }
	f__B4F2_0D89_0010_053D();
}

/**
 * Decompiled function f__B4F2_0D89_0010_053D()
 *
 * @name f__B4F2_0D89_0010_053D
 * @implements B4F2:0D89:0010:053D ()
 *
 * Called From: B4F2:0D89:000A:2355
 */
void f__B4F2_0D89_0010_053D()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_ax.x, 0xE9);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x2A39);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x0D99); f__B4F2_13CE_0013_DC46();
	f__B4F2_0D99_000E_E8B5();
}

/**
 * Decompiled function f__B4F2_0D99_000E_E8B5()
 *
 * @name f__B4F2_0D99_000E_E8B5
 * @implements B4F2:0D99:000E:E8B5 ()
 *
 * Called From: B4F2:0D99:0010:053D
 */
void f__B4F2_0D99_000E_E8B5()
{
	emu_addws(&emu_sp, 0x6);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0x6), 0x0);
	if (emu_flags.zf) { f__B4F2_0DA7_0019_0DBE(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x2A91));
	f__B4F2_0DA9_0017_ABBE(); return;
}

/**
 * Decompiled function f__B4F2_0DA7_0019_0DBE()
 *
 * @name f__B4F2_0DA7_0019_0DBE
 * @implements B4F2:0DA7:0019:0DBE ()
 *
 * Called From: B4F2:0DA0:000E:E8B5
 */
void f__B4F2_0DA7_0019_0DBE()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00, -0x7F4E));
	emu_addw(&emu_dx.x, emu_ax.x);
	emu_decw(&emu_dx.x);
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x2A97));
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__B4F2_0DC4_000A_E6D5(); return; }
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x29FD);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0DC0); emu_cs = 0x348B; emu_ip = 0x0DEA; emu_last_cs = 0xB4F2; emu_last_ip = 0x0DBB; emu_last_length = 0x0019; emu_last_crc = 0x0DBE; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__B4F2_0DA9_0017_ABBE()
 *
 * @name f__B4F2_0DA9_0017_ABBE
 * @implements B4F2:0DA9:0017:ABBE ()
 *
 * Called From: B4F2:0DA5:000E:E8B5
 */
void f__B4F2_0DA9_0017_ABBE()
{
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00, -0x7F4E));
	emu_addw(&emu_dx.x, emu_ax.x);
	emu_decw(&emu_dx.x);
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x2A97));
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__B4F2_0DC4_000A_E6D5(); return; }
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x29FD);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0DC0); emu_cs = 0x348B; emu_ip = 0x0DEA; emu_last_cs = 0xB4F2; emu_last_ip = 0x0DBB; emu_last_length = 0x0017; emu_last_crc = 0xABBE; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__B4F2_0DC4_000A_E6D5()
 *
 * @name f__B4F2_0DC4_000A_E6D5
 * @implements B4F2:0DC4:000A:E6D5 ()
 *
 * Called From: B4F2:0DB4:0019:0DBE
 * Called From: B4F2:0DB4:0017:ABBE
 */
void f__B4F2_0DC4_000A_E6D5()
{
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x29FD);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0DCE); emu_cs = 0x348B; ovl__348B(1);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { ovl__34F2(0xFF); }
	f__B4F2_0DCE_0010_C3AF();
}

/**
 * Decompiled function f__B4F2_0DCE_0010_C3AF()
 *
 * @name f__B4F2_0DCE_0010_C3AF
 * @implements B4F2:0DCE:0010:C3AF ()
 *
 * Called From: B4F2:0DCE:000A:E6D5
 */
void f__B4F2_0DCE_0010_C3AF()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_ax.x, 0xE9);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x29FD);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x0DDE); f__B4F2_13CE_0013_DC46();
	f__B4F2_0DDE_0005_1CF2();
}

/**
 * Decompiled function f__B4F2_0DDE_0005_1CF2()
 *
 * @name f__B4F2_0DDE_0005_1CF2
 * @implements B4F2:0DDE:0005:1CF2 ()
 *
 * Called From: B4F2:0DDE:0010:C3AF
 */
void f__B4F2_0DDE_0005_1CF2()
{
	emu_addws(&emu_sp, 0x6);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B4F2_0DE1_0002_00E2()
 *
 * @name f__B4F2_0DE1_0002_00E2
 * @implements B4F2:0DE1:0002:00E2 ()
 *
 * Called From: B4F2:0D62:0029:C02E
 */
void f__B4F2_0DE1_0002_00E2()
{
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B4F2_0DE3_001F_0789()
 *
 * @name f__B4F2_0DE3_001F_0789
 * @implements B4F2:0DE3:001F:0789 ()
 *
 * Called From: B4F2:0319:0006:00E8
 */
void f__B4F2_0DE3_001F_0789()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_movw(&emu_dx.x, 0x300);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3C34));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3C32));
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x6674));
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x6676));
	emu_push(emu_cs); emu_push(0x0E02); emu_cs = 0x2B0E; f__2B0E_0006_0049_1E3C();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { ovl__34F2(0xFF); }
	f__B4F2_0E02_0010_1B8C();
}

/**
 * Decompiled function f__B4F2_0E02_0010_1B8C()
 *
 * @name f__B4F2_0E02_0010_1B8C
 * @implements B4F2:0E02:0010:1B8C ()
 *
 * Called From: B4F2:0E02:001F:0789
 */
void f__B4F2_0E02_0010_1B8C()
{
	emu_addws(&emu_sp, 0xC);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3C34));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3C32));
	emu_push(emu_cs); emu_push(0x0E12); emu_cs = 0x259E; f__259E_0040_0015_2233();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { ovl__34F2(0xFF); }
	f__B4F2_0E12_0004_07BA();
}

/**
 * Decompiled function f__B4F2_0E12_0004_07BA()
 *
 * @name f__B4F2_0E12_0004_07BA
 * @implements B4F2:0E12:0004:07BA ()
 *
 * Called From: B4F2:0E12:0010:1B8C
 */
void f__B4F2_0E12_0004_07BA()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B4F2_0E16_0019_FF18()
 *
 * @name f__B4F2_0E16_0019_FF18
 * @implements B4F2:0E16:0019:FF18 ()
 *
 * Called From: B4F2:0170:0005:1734
 */
void f__B4F2_0E16_0019_FF18()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x1A);
	emu_push(emu_si);
	emu_movw(&emu_ax.x, emu_bp - 0x1A);
	emu_push(emu_ss);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x2A9B);
	emu_push(emu_ds);
	emu_push(emu_ax.x);
	emu_movw(&emu_cx.x, 0x12);
	emu_push(emu_cs); emu_push(0x0E2F); emu_cs = 0x01F7; f__01F7_03C9_001C_6AB6();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { ovl__34F2(0xFF); }
	f__B4F2_0E2F_001C_A1FA();
}

/**
 * Decompiled function f__B4F2_0E2F_001C_A1FA()
 *
 * @name f__B4F2_0E2F_001C_A1FA
 * @implements B4F2:0E2F:001C:A1FA ()
 *
 * Called From: B4F2:0E2F:0019:FF18
 */
void f__B4F2_0E2F_001C_A1FA()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_movw(&emu_dx.x, 0x300);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x6674));
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x6676));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3C34));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3C32));
	emu_push(emu_cs); emu_push(0x0E4B); emu_cs = 0x2B0E; f__2B0E_0006_0049_1E3C();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { ovl__34F2(0xFF); }
	f__B4F2_0E4B_0014_D46C();
}

/**
 * Decompiled function f__B4F2_0E4B_0014_D46C()
 *
 * @name f__B4F2_0E4B_0014_D46C
 * @implements B4F2:0E4B:0014:D46C ()
 *
 * Called From: B4F2:0E4B:001C:A1FA
 */
void f__B4F2_0E4B_0014_D46C()
{
	emu_addws(&emu_sp, 0xC);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3C34));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x3C32));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_dx.x);
	emu_xorw(&emu_si, emu_si);
	f__B4F2_0E73_0011_140B(); return;
}

/**
 * Decompiled function f__B4F2_0E5F_0025_79F1()
 *
 * @name f__B4F2_0E5F_0025_79F1
 * @implements B4F2:0E5F:0025:79F1 ()
 *
 * Called From: B4F2:0E77:0011:140B
 * Called From: B4F2:0E77:0025:79F1
 */
void f__B4F2_0E5F_0025_79F1()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x0));
	emu_movb(&emu_ax.h, 0x0);
	emu_sarw(&emu_ax.x, 0x1);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), emu_ax.l);
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_incw(&emu_si);
	emu_cmpw(&emu_si, 0x300);
	if ((emu_flags.sf != emu_flags.of)) { f__B4F2_0E5F_0025_79F1(); return; }
	emu_movw(&emu_ax.x, emu_bp - 0x1A);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ss);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	f__B4F2_0EC3_0016_8C80(); return;
}

/**
 * Decompiled function f__B4F2_0E73_0011_140B()
 *
 * @name f__B4F2_0E73_0011_140B
 * @implements B4F2:0E73:0011:140B ()
 *
 * Called From: B4F2:0E5D:0014:D46C
 */
void f__B4F2_0E73_0011_140B()
{
	emu_cmpw(&emu_si, 0x300);
	if ((emu_flags.sf != emu_flags.of)) { f__B4F2_0E5F_0025_79F1(); return; }
	emu_movw(&emu_ax.x, emu_bp - 0x1A);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ss);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_ip = 0x0EC3; emu_last_cs = 0xB4F2; emu_last_ip = 0x0E82; emu_last_length = 0x0011; emu_last_crc = 0x140B; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B4F2_0E84_0038_A2DE()
 *
 * @name f__B4F2_0E84_0038_A2DE
 * @implements B4F2:0E84:0038:A2DE ()
 *
 * Called From: B4F2:0ECA:0016:8C80
 * Called From: B4F2:0ECA:001D:B19E
 */
void f__B4F2_0E84_0038_A2DE()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_movw(&emu_dx.x, 0x3);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_movw(&emu_dx.x, 0x3);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x3C32));
	emu_addw(&emu_dx.x, emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3C34));
	emu_push(emu_dx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_movw(&emu_dx.x, 0x3);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00, -0x6676));
	emu_addw(&emu_dx.x, emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x6674));
	emu_push(emu_dx.x);
	emu_push(emu_cs); emu_push(0x0EBC); emu_cs = 0x2B0E; f__2B0E_0006_0049_1E3C();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { ovl__34F2(0xFF); }
	f__B4F2_0EBC_001D_B19E();
}

/**
 * Decompiled function f__B4F2_0EBC_001D_B19E()
 *
 * @name f__B4F2_0EBC_001D_B19E
 * @implements B4F2:0EBC:001D:B19E ()
 *
 * Called From: B4F2:0EBC:0038:A2DE
 */
void f__B4F2_0EBC_001D_B19E()
{
	emu_addws(&emu_sp, 0xC);
	emu_addws(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x2);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x0), 0xFF);
	if (!emu_flags.zf) { f__B4F2_0E84_0038_A2DE(); return; }
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x6674));
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x6676));
	emu_push(emu_cs); emu_push(0x0ED9); emu_cs = 0x259E; f__259E_0040_0015_2233();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { ovl__34F2(0xFF); }
	f__B4F2_0ED9_0007_3E7A();
}

/**
 * Decompiled function f__B4F2_0EC3_0016_8C80()
 *
 * @name f__B4F2_0EC3_0016_8C80
 * @implements B4F2:0EC3:0016:8C80 ()
 *
 * Called From: B4F2:0E82:0025:79F1
 */
void f__B4F2_0EC3_0016_8C80()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x0), 0xFF);
	if (!emu_flags.zf) { f__B4F2_0E84_0038_A2DE(); return; }
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x6674));
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x6676));
	emu_push(emu_cs); emu_push(0x0ED9); emu_cs = 0x259E; emu_ip = 0x0F19; emu_last_cs = 0xB4F2; emu_last_ip = 0x0ED4; emu_last_length = 0x0016; emu_last_crc = 0x8C80; emu_call(); // Jump does not resolve
	f__B4F2_0ED9_0007_3E7A();
}

/**
 * Decompiled function f__B4F2_0ED9_0007_3E7A()
 *
 * @name f__B4F2_0ED9_0007_3E7A
 * @implements B4F2:0ED9:0007:3E7A ()
 *
 * Called From: B4F2:0ED9:001D:B19E
 */
void f__B4F2_0ED9_0007_3E7A()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_pop(&emu_si);
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B4F2_0EE0_000E_F1BB()
 *
 * @name f__B4F2_0EE0_000E_F1BB
 * @implements B4F2:0EE0:000E:F1BB ()
 *
 * Called From: B4F2:017A:000A:5737
 * Called From: B4F2:0291:0015:C348
 * Called From: B4F2:0393:000F:B68D
 * Called From: B4F2:0513:0010:D68E
 * Called From: B4F2:0513:000D:5606
 * Called From: B4F2:06E0:0035:7CA4
 * Called From: B4F2:1116:0019:88C5
 */
void f__B4F2_0EE0_000E_F1BB()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_push(emu_cs); emu_push(0x0EEE); emu_cs = 0x07AE; f__07AE_0000_00DF_386F();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { ovl__34F2(0xFF); }
	f__B4F2_0EEE_0006_079E();
}

/**
 * Decompiled function f__B4F2_0EEE_0006_079E()
 *
 * @name f__B4F2_0EEE_0006_079E
 * @implements B4F2:0EEE:0006:079E ()
 *
 * Called From: B4F2:0EEE:000E:F1BB
 */
void f__B4F2_0EEE_0006_079E()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_cs); emu_push(0x0EF4); emu_cs = 0x2B6C; f__2B6C_0137_0020_17E5();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { ovl__34F2(0xFF); }
	f__B4F2_0EF4_0009_72A3();
}

/**
 * Decompiled function f__B4F2_0EF4_0009_72A3()
 *
 * @name f__B4F2_0EF4_0009_72A3
 * @implements B4F2:0EF4:0009:72A3 ()
 *
 * Called From: B4F2:0EF4:0006:079E
 */
void f__B4F2_0EF4_0009_72A3()
{
	emu_movw(&emu_ax.x, 0x5);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0EFD); emu_cs = 0x252E; f__252E_0001_0018_48C0();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { ovl__34F2(0xFF); }
	f__B4F2_0EFD_001D_1D71();
}

/**
 * Decompiled function f__B4F2_0EFD_001D_1D71()
 *
 * @name f__B4F2_0EFD_001D_1D71
 * @implements B4F2:0EFD:001D:1D71 ()
 *
 * Called From: B4F2:0EFD:0009:72A3
 */
void f__B4F2_0EFD_001D_1D71()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x66CF));
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x66D1));
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x66D5));
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x66D3));
	emu_movw(&emu_ax.x, 0x353F);
	emu_movw(&emu_es, emu_ax.x);

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_es, 0x00,  0x66C0);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_es, 0x00,  0x66C2);
	emu_push(0x0F1A);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A6101C: f__22A6_101C_004B_C8B8(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0xB4F2; emu_last_ip = 0x0F15; emu_last_length = 0x001D; emu_last_crc = 0x1D71;
			emu_call();
			return;
	}
	f__B4F2_0F1A_0008_F63E();
}

/**
 * Decompiled function f__B4F2_0F1A_0008_F63E()
 *
 * @name f__B4F2_0F1A_0008_F63E
 * @implements B4F2:0F1A:0008:F63E ()
 *
 * Called From: B4F2:0F1A:001D:1D71
 */
void f__B4F2_0F1A_0008_F63E()
{
	emu_addws(&emu_sp, 0xC);
	emu_push(emu_cs); emu_push(0x0F22); emu_cs = 0x2B6C; f__2B6C_0169_001E_97C8();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { ovl__34F2(0xFF); }
	f__B4F2_0F22_0002_00E2();
}

/**
 * Decompiled function f__B4F2_0F22_0002_00E2()
 *
 * @name f__B4F2_0F22_0002_00E2
 * @implements B4F2:0F22:0002:00E2 ()
 *
 * Called From: B4F2:0F22:0008:F63E
 */
void f__B4F2_0F22_0002_00E2()
{
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B4F2_0F24_000E_F1BB()
 *
 * @name f__B4F2_0F24_000E_F1BB
 * @implements B4F2:0F24:000E:F1BB ()
 *
 * Called From: B4F2:01C9:0013:206A
 * Called From: B4F2:049E:000A:ADB9
 * Called From: B4F2:0603:000A:9D4B
 * Called From: B4F2:06A1:000A:9F31
 * Called From: B4F2:0846:000A:E941
 * Called From: B4F2:1172:000D:4829
 */
void f__B4F2_0F24_000E_F1BB()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_push(emu_cs); emu_push(0x0F32); emu_cs = 0x07AE; f__07AE_0000_00DF_386F();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { ovl__34F2(0xFF); }
	f__B4F2_0F32_0006_079E();
}

/**
 * Decompiled function f__B4F2_0F32_0006_079E()
 *
 * @name f__B4F2_0F32_0006_079E
 * @implements B4F2:0F32:0006:079E ()
 *
 * Called From: B4F2:0F32:000E:F1BB
 */
void f__B4F2_0F32_0006_079E()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_cs); emu_push(0x0F38); emu_cs = 0x2B6C; f__2B6C_0137_0020_17E5();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { ovl__34F2(0xFF); }
	f__B4F2_0F38_0009_72A3();
}

/**
 * Decompiled function f__B4F2_0F38_0009_72A3()
 *
 * @name f__B4F2_0F38_0009_72A3
 * @implements B4F2:0F38:0009:72A3 ()
 *
 * Called From: B4F2:0F38:0006:079E
 */
void f__B4F2_0F38_0009_72A3()
{
	emu_movw(&emu_ax.x, 0x5);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0F41); emu_cs = 0x252E; f__252E_0001_0018_48C0();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { ovl__34F2(0xFF); }
	f__B4F2_0F41_001D_1EC1();
}

/**
 * Decompiled function f__B4F2_0F41_001D_1EC1()
 *
 * @name f__B4F2_0F41_001D_1EC1
 * @implements B4F2:0F41:001D:1EC1 ()
 *
 * Called From: B4F2:0F41:0009:72A3
 */
void f__B4F2_0F41_001D_1EC1()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x66CF));
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x66D1));
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x66D5));
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x66D3));
	emu_movw(&emu_ax.x, 0x353F);
	emu_movw(&emu_es, emu_ax.x);

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_es, 0x00,  0x662C);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_es, 0x00,  0x662E);
	emu_push(0x0F5E);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A604F8: f__22A6_04F8_007A_D667(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0xB4F2; emu_last_ip = 0x0F59; emu_last_length = 0x001D; emu_last_crc = 0x1EC1;
			emu_call();
			return;
	}
	f__B4F2_0F5E_0008_F63E();
}

/**
 * Decompiled function f__B4F2_0F5E_0008_F63E()
 *
 * @name f__B4F2_0F5E_0008_F63E
 * @implements B4F2:0F5E:0008:F63E ()
 *
 * Called From: B4F2:0F5E:001D:1EC1
 */
void f__B4F2_0F5E_0008_F63E()
{
	emu_addws(&emu_sp, 0xC);
	emu_push(emu_cs); emu_push(0x0F66); emu_cs = 0x2B6C; f__2B6C_0169_001E_97C8();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { ovl__34F2(0xFF); }
	f__B4F2_0F66_0002_00E2();
}

/**
 * Decompiled function f__B4F2_0F66_0002_00E2()
 *
 * @name f__B4F2_0F66_0002_00E2
 * @implements B4F2:0F66:0002:00E2 ()
 *
 * Called From: B4F2:0F66:0008:F63E
 */
void f__B4F2_0F66_0002_00E2()
{
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B4F2_0F68_0011_7B02()
 *
 * @name f__B4F2_0F68_0011_7B02
 * @implements B4F2:0F68:0011:7B02 ()
 *
 * Called From: 34F2:0061:0005:1A32
 * Called From: 34F2:0061:0005:1802
 * Called From: 34F2:0061:0005:1B84
 * Called From: 34F2:0061:0005:19E0
 */
void f__B4F2_0F68_0011_7B02()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0xA);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0F79); emu_cs = 0x2598; f__2598_0000_0017_D681();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { ovl__34F2(0xFF); }
	f__B4F2_0F79_0086_C1A3();
}

/**
 * Decompiled function f__B4F2_0F79_0086_C1A3()
 *
 * @name f__B4F2_0F79_0086_C1A3
 * @implements B4F2:0F79:0086:C1A3 ()
 *
 * Called From: B4F2:0F79:0011:7B02
 */
void f__B4F2_0F79_0086_C1A3()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x1E));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_bx.x, emu_get_memory16(emu_es, emu_bx.x,  0x1C));
	emu_movb(&emu_cx.l, 0x4);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, emu_bx.x,  0x4062));
	emu_movb(&emu_cx.l, 0x3);
	emu_shlw(&emu_dx.x, emu_cx.l);
	emu_addw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_si, emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x20));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_bx.x, emu_get_memory16(emu_es, emu_bx.x,  0x1C));
	emu_movb(&emu_cx.l, 0x4);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ds, emu_bx.x,  0x4064));
	emu_movw(&emu_di, emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x22));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x24));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax.x);
	emu_movw(&emu_ax.x, emu_si);
	emu_movb(&emu_cx.l, 0x3);
	emu_sarw(&emu_ax.x, emu_cx.l);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x4192), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x4194), emu_di);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_cx.l, 0x3);
	emu_sarw(&emu_ax.x, emu_cx.l);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x4196), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x4198), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x2E));
	emu_andw(&emu_ax.x, 0x5);
	emu_cmpw(&emu_ax.x, 0x1);
	if (emu_flags.zf) { f__B4F2_100B_0007_6F48(); return; }
	emu_cmpw(&emu_ax.x, 0x4);
	if (emu_flags.zf) { f__B4F2_0FFF_000C_C537(); return; }
	emu_cmpw(&emu_ax.x, 0x5);
	if (emu_flags.zf) { f__B4F2_100B_0007_6F48(); return; }
	f__B4F2_1012_000C_C5E1(); return;
}

/**
 * Decompiled function f__B4F2_0FFF_000C_C537()
 *
 * @name f__B4F2_0FFF_000C_C537
 * @implements B4F2:0FFF:000C:C537 ()
 *
 * Called From: B4F2:0FF6:0086:C1A3
 */
void f__B4F2_0FFF_000C_C537()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x2);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0xE7);
	f__B4F2_101E_0010_4094(); return;
}

/**
 * Decompiled function f__B4F2_1004_0007_613A()
 *
 * @name f__B4F2_1004_0007_613A
 * @implements B4F2:1004:0007:613A ()
 *
 * Called From: B4F2:1010:0007:6F48
 */
void f__B4F2_1004_0007_613A()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0xE7);
	f__B4F2_101E_0010_4094(); return;
}

/**
 * Decompiled function f__B4F2_100B_0007_6F48()
 *
 * @name f__B4F2_100B_0007_6F48
 * @implements B4F2:100B:0007:6F48 ()
 *
 * Called From: B4F2:0FF1:0086:C1A3
 * Called From: B4F2:0FFB:0086:C1A3
 */
void f__B4F2_100B_0007_6F48()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x0);
	f__B4F2_1004_0007_613A(); return;
}

/**
 * Decompiled function f__B4F2_1012_000C_C5E1()
 *
 * @name f__B4F2_1012_000C_C5E1
 * @implements B4F2:1012:000C:C5E1 ()
 *
 * Called From: B4F2:0FFD:0086:C1A3
 */
void f__B4F2_1012_000C_C5E1()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x2);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0xE8);
	f__B4F2_101E_0010_4094(); return;
}

/**
 * Decompiled function f__B4F2_101E_0010_4094()
 *
 * @name f__B4F2_101E_0010_4094
 * @implements B4F2:101E:0010:4094 ()
 *
 * Called From: B4F2:1009:0007:613A
 * Called From: B4F2:1009:000C:C537
 * Called From: B4F2:101C:000C:C5E1
 */
void f__B4F2_101E_0010_4094()
{
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_ax.x, 0x13);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x102E); emu_cs = 0x10E4; f__10E4_057F_0052_B1B7();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { ovl__34F2(0xFF); }
	f__B4F2_102E_0047_186D();
}

/**
 * Decompiled function f__B4F2_102E_0047_186D()
 *
 * @name f__B4F2_102E_0047_186D
 * @implements B4F2:102E:0047:186D ()
 *
 * Called From: B4F2:102E:0010:4094
 */
void f__B4F2_102E_0047_186D()
{
	emu_addws(&emu_sp, 0x6);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x38), 0x1E);
	if (emu_flags.zf) { f__B4F2_1059_001C_39EE(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x38), 0x6B);
	if (emu_flags.zf) { f__B4F2_1059_001C_39EE(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x38), 0x6C);
	if (emu_flags.zf) { f__B4F2_1059_001C_39EE(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x38), 0x66);
	if (!emu_flags.zf) { f__B4F2_1075_0022_5CAE(); return; }
	emu_movw(&emu_ax.x, 0x122);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_movw(&emu_ax.x, emu_di);
	emu_addw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_sarw(&emu_ax.x, 0x1);
	emu_movw(&emu_dx.x, emu_si);
	emu_addw(&emu_dx.x, emu_ax.x);
	emu_push(emu_dx.x);
	f__B4F2_108B_000C_3A9A(); return;
}

/**
 * Decompiled function f__B4F2_1059_001C_39EE()
 *
 * @name f__B4F2_1059_001C_39EE
 * @implements B4F2:1059:001C:39EE ()
 *
 * Called From: B4F2:1039:0047:186D
 * Called From: B4F2:1043:0047:186D
 * Called From: B4F2:104D:0047:186D
 */
void f__B4F2_1059_001C_39EE()
{
	emu_movw(&emu_ax.x, 0x122);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_movw(&emu_ax.x, emu_di);
	emu_addw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_sarw(&emu_ax.x, 0x1);
	emu_movw(&emu_dx.x, emu_si);
	emu_addw(&emu_dx.x, emu_ax.x);
	emu_push(emu_dx.x);
	f__B4F2_108B_000C_3A9A(); return;
}

/**
 * Decompiled function f__B4F2_1075_0022_5CAE()
 *
 * @name f__B4F2_1075_0022_5CAE
 * @implements B4F2:1075:0022:5CAE ()
 *
 * Called From: B4F2:1057:0047:186D
 */
void f__B4F2_1075_0022_5CAE()
{
	emu_movw(&emu_ax.x, 0x22);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_movw(&emu_ax.x, emu_di);
	emu_addw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_si);
	emu_addw(&emu_ax.x, 0x3);
	emu_push(emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x38));
	emu_push(emu_cs);
	emu_push(0x1097); f__B4F2_1303_0017_BCDF();
	f__B4F2_1097_0008_7B10();
}

/**
 * Decompiled function f__B4F2_108B_000C_3A9A()
 *
 * @name f__B4F2_108B_000C_3A9A
 * @implements B4F2:108B:000C:3A9A ()
 *
 * Called From: B4F2:1073:001C:39EE
 * Called From: B4F2:1073:0047:186D
 */
void f__B4F2_108B_000C_3A9A()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x38));
	emu_push(emu_cs);
	emu_push(0x1097); f__B4F2_1303_0017_BCDF();
	f__B4F2_1097_0008_7B10();
}

/**
 * Decompiled function f__B4F2_1097_0008_7B10()
 *
 * @name f__B4F2_1097_0008_7B10
 * @implements B4F2:1097:0008:7B10 ()
 *
 * Called From: B4F2:1097:0022:5CAE
 * Called From: B4F2:1097:000C:3A9A
 */
void f__B4F2_1097_0008_7B10()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x109F); emu_cs = 0x10E4; f__10E4_1EF1_0040_E33D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { ovl__34F2(0xFF); }
	f__B4F2_109F_001C_AF51();
}

/**
 * Decompiled function f__B4F2_109F_001C_AF51()
 *
 * @name f__B4F2_109F_001C_AF51
 * @implements B4F2:109F:001C:AF51 ()
 *
 * Called From: B4F2:109F:0008:7B10
 */
void f__B4F2_109F_001C_AF51()
{
	emu_addws(&emu_sp, 0xE);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x0);
	if (!emu_flags.zf) { f__B4F2_10ED_0008_EAEA(); return; }
	emu_movw(&emu_ax.x, emu_di);
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_si);
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_ax.x);
	emu_push(emu_di);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x10BB); emu_cs = 0x2B6C; f__2B6C_0197_00CE_7027();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { ovl__34F2(0xFF); }
	f__B4F2_10BB_002A_B2DE();
}

/**
 * Decompiled function f__B4F2_10BB_002A_B2DE()
 *
 * @name f__B4F2_10BB_002A_B2DE
 * @implements B4F2:10BB:002A:B2DE ()
 *
 * Called From: B4F2:10BB:001C:AF51
 */
void f__B4F2_10BB_002A_B2DE()
{
	emu_addws(&emu_sp, 0x8);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_cx.l, 0x3);
	emu_sarw(&emu_ax.x, emu_cx.l);
	emu_push(emu_ax.x);
	emu_push(emu_di);
	emu_movw(&emu_ax.x, emu_si);
	emu_movb(&emu_cx.l, 0x3);
	emu_sarw(&emu_ax.x, emu_cx.l);
	emu_push(emu_ax.x);
	emu_push(emu_di);
	emu_movw(&emu_ax.x, emu_si);
	emu_movb(&emu_cx.l, 0x3);
	emu_sarw(&emu_ax.x, emu_cx.l);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x10E5); emu_cs = 0x24D0; f__24D0_000D_0039_9224();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { ovl__34F2(0xFF); }
	f__B4F2_10E5_0008_FE96();
}

/**
 * Decompiled function f__B4F2_10E5_0008_FE96()
 *
 * @name f__B4F2_10E5_0008_FE96
 * @implements B4F2:10E5:0008:FE96 ()
 *
 * Called From: B4F2:10E5:002A:B2DE
 */
void f__B4F2_10E5_0008_FE96()
{
	emu_addws(&emu_sp, 0x10);
	emu_push(emu_cs); emu_push(0x10ED); emu_cs = 0x2B6C; f__2B6C_0292_0028_CAA5();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { ovl__34F2(0xFF); }
	f__B4F2_10ED_0008_EAEA();
}

/**
 * Decompiled function f__B4F2_10ED_0008_EAEA()
 *
 * @name f__B4F2_10ED_0008_EAEA
 * @implements B4F2:10ED:0008:EAEA ()
 *
 * Called From: B4F2:10A6:001C:AF51
 * Called From: B4F2:10ED:0008:FE96
 */
void f__B4F2_10ED_0008_EAEA()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_cs); emu_push(0x10F5); emu_cs = 0x2598; f__2598_0000_0017_D681();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { ovl__34F2(0xFF); }
	f__B4F2_10F5_0005_0DBC();
}

/**
 * Decompiled function f__B4F2_10F5_0005_0DBC()
 *
 * @name f__B4F2_10F5_0005_0DBC
 * @implements B4F2:10F5:0005:0DBC ()
 *
 * Called From: B4F2:10F5:0008:EAEA
 */
void f__B4F2_10F5_0005_0DBC()
{
	emu_pop(&emu_cx.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__B4F2_10FA_0006_137A(); return;
}

/**
 * Decompiled function f__B4F2_10FA_0006_137A()
 *
 * @name f__B4F2_10FA_0006_137A
 * @implements B4F2:10FA:0006:137A ()
 *
 * Called From: B4F2:10F8:0005:0DBC
 */
void f__B4F2_10FA_0006_137A()
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
 * Decompiled function f__B4F2_1100_0019_88C5()
 *
 * @name f__B4F2_1100_0019_88C5
 * @implements B4F2:1100:0019:88C5 ()
 *
 * Called From: B4F2:021F:0009:04C5
 * Called From: B4F2:0237:0009:05A5
 * Called From: B4F2:0258:0009:1629
 */
void f__B4F2_1100_0019_88C5()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x2);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_xorw(&emu_si, emu_si);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x2720), emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x271E);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x1119); f__B4F2_0EE0_000E_F1BB();
	f__B4F2_1119_000B_2249();
}

/**
 * Decompiled function f__B4F2_1119_000B_2249()
 *
 * @name f__B4F2_1119_000B_2249
 * @implements B4F2:1119:000B:2249 ()
 *
 * Called From: B4F2:1119:0019:88C5
 */
void f__B4F2_1119_000B_2249()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x271E);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x1124); f__B4F2_0855_0013_DDE1();
	f__B4F2_1124_0007_2EE6();
}

/**
 * Decompiled function f__B4F2_1124_0007_2EE6()
 *
 * @name f__B4F2_1124_0007_2EE6
 * @implements B4F2:1124:0007:2EE6 ()
 *
 * Called From: B4F2:1124:000B:2249
 */
void f__B4F2_1124_0007_2EE6()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_di, 0x1);
	f__B4F2_1168_000D_4829(); return;
}

/**
 * Decompiled function f__B4F2_112B_000D_1819()
 *
 * @name f__B4F2_112B_000D_1819
 * @implements B4F2:112B:000D:1819 ()
 *
 * Called From: B4F2:116A:000D:4829
 */
void f__B4F2_112B_000D_1819()
{
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x2A95));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x2A93));
	emu_push(emu_cs); emu_push(0x1138); emu_cs = 0x34A2; ovl__34A2(2);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { ovl__34F2(0xFF); }
	f__B4F2_1138_001E_8854();
}

/**
 * Decompiled function f__B4F2_1138_001E_8854()
 *
 * @name f__B4F2_1138_001E_8854
 * @implements B4F2:1138:001E:8854 ()
 *
 * Called From: B4F2:1138:000D:1819
 */
void f__B4F2_1138_001E_8854()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_testw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x8000);
	if (emu_flags.zf) { f__B4F2_1163_0005_17FC(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_andw(&emu_ax.x, 0x7FFF);
	emu_cmpw(&emu_ax.x, 0x1E);
	if (emu_flags.zf) { f__B4F2_1156_0005_1470(); return; }
	emu_cmpw(&emu_ax.x, 0x1F);
	if (emu_flags.zf) { f__B4F2_115B_0004_0728(); return; }
	emu_ip = 0x115F; emu_last_cs = 0xB4F2; emu_last_ip = 0x1154; emu_last_length = 0x001E; emu_last_crc = 0x8854; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B4F2_1156_0005_1470()
 *
 * @name f__B4F2_1156_0005_1470
 * @implements B4F2:1156:0005:1470 ()
 *
 * Called From: B4F2:114D:001E:8854
 */
void f__B4F2_1156_0005_1470()
{
	emu_movw(&emu_si, 0x1);
	f__B4F2_1161_0007_31BC(); return;
}

/**
 * Decompiled function f__B4F2_115B_0004_0728()
 *
 * @name f__B4F2_115B_0004_0728
 * @implements B4F2:115B:0004:0728 ()
 *
 * Called From: B4F2:1152:001E:8854
 */
void f__B4F2_115B_0004_0728()
{
	emu_xorw(&emu_si, emu_si);
	f__B4F2_1161_0007_31BC(); return;
}

/**
 * Decompiled function f__B4F2_1161_0007_31BC()
 *
 * @name f__B4F2_1161_0007_31BC
 * @implements B4F2:1161:0007:31BC ()
 *
 * Called From: B4F2:1159:0005:1470
 * Called From: B4F2:115D:0004:0728
 */
void f__B4F2_1161_0007_31BC()
{
	emu_xorw(&emu_di, emu_di);
	emu_push(emu_cs); emu_push(0x1168); emu_cs = 0x0642; f__0642_0559_0027_9047();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { ovl__34F2(0xFF); }
	f__B4F2_1168_000D_4829();
}

/**
 * Decompiled function f__B4F2_1163_0005_17FC()
 *
 * @name f__B4F2_1163_0005_17FC
 * @implements B4F2:1163:0005:17FC ()
 *
 * Called From: B4F2:1142:001E:8854
 */
void f__B4F2_1163_0005_17FC()
{
	emu_push(emu_cs); emu_push(0x1168); emu_cs = 0x0642; f__0642_0559_0027_9047();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { ovl__34F2(0xFF); }
	f__B4F2_1168_000D_4829();
}

/**
 * Decompiled function f__B4F2_1168_000D_4829()
 *
 * @name f__B4F2_1168_000D_4829
 * @implements B4F2:1168:000D:4829 ()
 *
 * Called From: B4F2:1129:0007:2EE6
 * Called From: B4F2:1168:0005:17FC
 * Called From: B4F2:1168:0007:31BC
 */
void f__B4F2_1168_000D_4829()
{
	emu_orw(&emu_di, emu_di);
	if (!emu_flags.zf) { f__B4F2_112B_000D_1819(); return; }
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x271E);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x1175); f__B4F2_0F24_000E_F1BB();
	f__B4F2_1175_0006_104C();
}

/**
 * Decompiled function f__B4F2_1175_0006_104C()
 *
 * @name f__B4F2_1175_0006_104C
 * @implements B4F2:1175:0006:104C ()
 *
 * Called From: B4F2:1175:000D:4829
 */
void f__B4F2_1175_0006_104C()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_ax.x, emu_si);
	f__B4F2_117B_0006_137A(); return;
}

/**
 * Decompiled function f__B4F2_117B_0006_137A()
 *
 * @name f__B4F2_117B_0006_137A
 * @implements B4F2:117B:0006:137A ()
 *
 * Called From: B4F2:1179:0006:104C
 */
void f__B4F2_117B_0006_137A()
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
 * Decompiled function f__B4F2_1181_000B_A76F()
 *
 * @name f__B4F2_1181_000B_A76F
 * @implements B4F2:1181:000B:A76F ()
 *
 * Called From: B4F2:04C9:0015:8DF5
 */
void f__B4F2_1181_000B_A76F()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0xE);
	emu_push(emu_si);
	emu_xorw(&emu_si, emu_si);
	f__B4F2_118D_000B_CCD3(); return;
}

/**
 * Decompiled function f__B4F2_118C_000C_ACD7()
 *
 * @name f__B4F2_118C_000C_ACD7
 * @implements B4F2:118C:000C:ACD7 ()
 *
 * Called From: B4F2:11A9:000A:B14D
 */
void f__B4F2_118C_000C_ACD7()
{
	emu_incw(&emu_si);
	emu_push(emu_si);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0xE);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x1198); f__B4F2_11B4_0016_60D6();
	f__B4F2_1198_000D_634F();
}

/**
 * Decompiled function f__B4F2_118D_000B_CCD3()
 *
 * @name f__B4F2_118D_000B_CCD3
 * @implements B4F2:118D:000B:CCD3 ()
 *
 * Called From: B4F2:118A:000B:A76F
 */
void f__B4F2_118D_000B_CCD3()
{
	emu_push(emu_si);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0xE);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x1198); f__B4F2_11B4_0016_60D6();
	f__B4F2_1198_000D_634F();
}

/**
 * Decompiled function f__B4F2_1198_000D_634F()
 *
 * @name f__B4F2_1198_000D_634F
 * @implements B4F2:1198:000D:634F ()
 *
 * Called From: B4F2:1198:000B:CCD3
 * Called From: B4F2:1198:000C:ACD7
 */
void f__B4F2_1198_000D_634F()
{
	emu_addws(&emu_sp, 0x6);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0xE);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x11A5); emu_cs = 0x1FB5; f__1FB5_15B5_0015_6875();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { ovl__34F2(0xFF); }
	f__B4F2_11A5_000A_B14D();
}

/**
 * Decompiled function f__B4F2_11A5_000A_B14D()
 *
 * @name f__B4F2_11A5_000A_B14D
 * @implements B4F2:11A5:000A:B14D ()
 *
 * Called From: B4F2:11A5:000D:634F
 */
void f__B4F2_11A5_000A_B14D()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.zf) { f__B4F2_118C_000C_ACD7(); return; }
	emu_movw(&emu_ax.x, emu_si);
	f__B4F2_11AF_0005_04BA(); return;
}

/**
 * Decompiled function f__B4F2_11AF_0005_04BA()
 *
 * @name f__B4F2_11AF_0005_04BA
 * @implements B4F2:11AF:0005:04BA ()
 *
 * Called From: B4F2:11AD:000A:B14D
 */
void f__B4F2_11AF_0005_04BA()
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
 * Decompiled function f__B4F2_11B4_0016_60D6()
 *
 * @name f__B4F2_11B4_0016_60D6
 * @implements B4F2:11B4:0016:60D6 ()
 *
 * Called From: B4F2:0618:0015:EB10
 * Called From: B4F2:07FE:0019:4069
 * Called From: B4F2:1195:000B:CCD3
 * Called From: B4F2:1195:000C:ACD7
 * Called From: B4F2:1295:000F:72DB
 */
void f__B4F2_11B4_0016_60D6()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x2AC3);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x11CA); emu_cs = 0x01F7; f__01F7_378D_0020_4A95();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { ovl__34F2(0xFF); }
	f__B4F2_11CA_0005_1C92();
}

/**
 * Decompiled function f__B4F2_11CA_0005_1C92()
 *
 * @name f__B4F2_11CA_0005_1C92
 * @implements B4F2:11CA:0005:1C92 ()
 *
 * Called From: B4F2:11CA:0016:60D6
 */
void f__B4F2_11CA_0005_1C92()
{
	emu_addws(&emu_sp, 0xA);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B4F2_11CF_0013_DC5E()
 *
 * @name f__B4F2_11CF_0013_DC5E
 * @implements B4F2:11CF:0013:DC5E ()
 *
 * Called From: B4F2:0131:000F:A61A
 */
void f__B4F2_11CF_0013_DC5E()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x8);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0x8);
	emu_push(emu_ax.x);
	emu_movb(&emu_ax.l, 0x0);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x11E2); emu_cs = 0x01F7; f__01F7_0494_000D_E6E0();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { ovl__34F2(0xFF); }
	f__B4F2_11E2_0018_E126();
}

/**
 * Decompiled function f__B4F2_11E2_0018_E126()
 *
 * @name f__B4F2_11E2_0018_E126
 * @implements B4F2:11E2:0018:E126 ()
 *
 * Called From: B4F2:11E2:0013:DC5E
 */
void f__B4F2_11E2_0018_E126()
{
	emu_addws(&emu_sp, 0x6);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0xFF);
	if (emu_flags.zf) { emu_ip = 0x1219; emu_last_cs = 0xB4F2; emu_last_ip = 0x11E9; emu_last_length = 0x0018; emu_last_crc = 0xE126; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_xorw(&emu_cx.x, emu_cx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_cs); emu_push(0x11FA); emu_cs = 0x01F7; f__01F7_03B2_0017_6839();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { ovl__34F2(0xFF); }
	f__B4F2_11FA_000E_2DE1();
}

/**
 * Decompiled function f__B4F2_11FA_000E_2DE1()
 *
 * @name f__B4F2_11FA_000E_2DE1
 * @implements B4F2:11FA:000E:2DE1 ()
 *
 * Called From: B4F2:11FA:0018:E126
 */
void f__B4F2_11FA_000E_2DE1()
{
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_dx.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_pop(&emu_cx.x);
	emu_pop(&emu_bx.x);
	emu_push(emu_cs); emu_push(0x1208); emu_cs = 0x01F7; f__01F7_03B2_0017_6839();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { ovl__34F2(0xFF); }
	f__B4F2_1208_0011_10C9();
}

/**
 * Decompiled function f__B4F2_1208_0011_10C9()
 *
 * @name f__B4F2_1208_0011_10C9
 * @implements B4F2:1208:0011:10C9 ()
 *
 * Called From: B4F2:1208:000E:2DE1
 */
void f__B4F2_1208_0011_10C9()
{
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if ((emu_flags.sf != emu_flags.of)) { emu_ip = 0x1219; emu_last_cs = 0xB4F2; emu_last_ip = 0x120B; emu_last_length = 0x0011; emu_last_crc = 0x10C9; emu_call(); return; } // Jump does not resolve
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__B4F2_1214_0005_14B4(); return; }
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	if ((emu_flags.cf || emu_flags.zf)) { emu_ip = 0x1219; emu_last_cs = 0xB4F2; emu_last_ip = 0x1212; emu_last_length = 0x0011; emu_last_crc = 0x10C9; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, 0x1);
	emu_ip = 0x121D; emu_last_cs = 0xB4F2; emu_last_ip = 0x1217; emu_last_length = 0x0011; emu_last_crc = 0x10C9; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B4F2_1214_0005_14B4()
 *
 * @name f__B4F2_1214_0005_14B4
 * @implements B4F2:1214:0005:14B4 ()
 *
 * Called From: B4F2:120D:0011:10C9
 */
void f__B4F2_1214_0005_14B4()
{
	emu_movw(&emu_ax.x, 0x1);
	f__B4F2_121D_0004_0F7A(); return;
}

/**
 * Decompiled function f__B4F2_121D_0004_0F7A()
 *
 * @name f__B4F2_121D_0004_0F7A
 * @implements B4F2:121D:0004:0F7A ()
 *
 * Called From: B4F2:1217:0005:14B4
 */
void f__B4F2_121D_0004_0F7A()
{
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B4F2_1221_000D_9992()
 *
 * @name f__B4F2_1221_000D_9992
 * @implements B4F2:1221:000D:9992 ()
 *
 * Called From: B4F2:04F9:000B:5CAD
 */
void f__B4F2_1221_000D_9992()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0xE);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_xorw(&emu_si, emu_si);
	f__B4F2_12F5_0008_F4A2(); return;
}

/**
 * Decompiled function f__B4F2_122E_0018_2A56()
 *
 * @name f__B4F2_122E_0018_2A56
 * @implements B4F2:122E:0018:2A56 ()
 *
 * Called From: B4F2:12FA:0008:F4A2
 * Called From: B4F2:12FA:0009:78A2
 */
void f__B4F2_122E_0018_2A56()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x2A97));
	emu_subw(&emu_ax.x, emu_si);
	if (!(emu_flags.sf != emu_flags.of)) { f__B4F2_1246_001A_5C31(); return; }
	emu_movw(&emu_ax.x, emu_si);
	emu_movw(&emu_dx.x, 0x33);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movb(&emu_get_memory8(emu_ds, emu_bx.x, -0x7F4C), 0x0);
	f__B4F2_12F4_0009_78A2(); return;
}

/**
 * Decompiled function f__B4F2_1246_001A_5C31()
 *
 * @name f__B4F2_1246_001A_5C31
 * @implements B4F2:1246:001A:5C31 ()
 *
 * Called From: B4F2:1233:0018:2A56
 */
void f__B4F2_1246_001A_5C31()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x2A97));
	emu_subw(&emu_ax.x, emu_si);
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00, -0x7F4E));
	if (!emu_flags.zf) { f__B4F2_1289_000F_72DB(); return; }
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0x6), 0x0);
	if (emu_flags.zf) { f__B4F2_1279_0010_61FF(); return; }
	emu_movw(&emu_ax.x, 0x63);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x1260); f__B4F2_1303_0017_BCDF();
	f__B4F2_1260_0014_1EF6();
}

/**
 * Decompiled function f__B4F2_1260_0014_1EF6()
 *
 * @name f__B4F2_1260_0014_1EF6
 * @implements B4F2:1260:0014:1EF6 ()
 *
 * Called From: B4F2:1260:001A:5C31
 */
void f__B4F2_1260_0014_1EF6()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_si);
	emu_movw(&emu_dx.x, 0x33);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_addw(&emu_ax.x, 0x80B4);
	emu_push(emu_ds);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x1274); emu_cs = 0x01F7; f__01F7_38F6_0029_5C00();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { ovl__34F2(0xFF); }
	f__B4F2_1274_0005_1FD0();
}

/**
 * Decompiled function f__B4F2_1274_0005_1FD0()
 *
 * @name f__B4F2_1274_0005_1FD0
 * @implements B4F2:1274:0005:1FD0 ()
 *
 * Called From: B4F2:1274:0014:1EF6
 */
void f__B4F2_1274_0005_1FD0()
{
	emu_addws(&emu_sp, 0x8);
	f__B4F2_1287_0002_037A(); return;
}

/**
 * Decompiled function f__B4F2_1279_0010_61FF()
 *
 * @name f__B4F2_1279_0010_61FF
 * @implements B4F2:1279:0010:61FF ()
 *
 * Called From: B4F2:1255:001A:5C31
 */
void f__B4F2_1279_0010_61FF()
{
	emu_movw(&emu_ax.x, emu_si);
	emu_movw(&emu_dx.x, 0x33);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movb(&emu_get_memory8(emu_ds, emu_bx.x, -0x7F4C), 0x0);
	f__B4F2_12F4_0009_78A2(); return;
}

/**
 * Decompiled function f__B4F2_1287_0002_037A()
 *
 * @name f__B4F2_1287_0002_037A
 * @implements B4F2:1287:0002:037A ()
 *
 * Called From: B4F2:1277:0005:1FD0
 */
void f__B4F2_1287_0002_037A()
{
	f__B4F2_12F4_0009_78A2(); return;
}

/**
 * Decompiled function f__B4F2_1289_000F_72DB()
 *
 * @name f__B4F2_1289_000F_72DB
 * @implements B4F2:1289:000F:72DB ()
 *
 * Called From: B4F2:124F:001A:5C31
 */
void f__B4F2_1289_000F_72DB()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x2A97));
	emu_subw(&emu_ax.x, emu_si);
	emu_push(emu_ax.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0xE);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x1298); f__B4F2_11B4_0016_60D6();
	f__B4F2_1298_000D_634F();
}

/**
 * Decompiled function f__B4F2_1298_000D_634F()
 *
 * @name f__B4F2_1298_000D_634F
 * @implements B4F2:1298:000D:634F ()
 *
 * Called From: B4F2:1298:000F:72DB
 */
void f__B4F2_1298_000D_634F()
{
	emu_addws(&emu_sp, 0x6);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0xE);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x12A5); emu_cs = 0x1FB5; f__1FB5_15B5_0015_6875();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { ovl__34F2(0xFF); }
	f__B4F2_12A5_0010_A284();
}

/**
 * Decompiled function f__B4F2_12A5_0010_A284()
 *
 * @name f__B4F2_12A5_0010_A284
 * @implements B4F2:12A5:0010:A284 ()
 *
 * Called From: B4F2:12A5:000D:634F
 */
void f__B4F2_12A5_0010_A284()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (emu_flags.zf) { emu_ip = 0x12E6; emu_last_cs = 0xB4F2; emu_last_ip = 0x12A9; emu_last_length = 0x0010; emu_last_crc = 0xA284; emu_call(); return; } // Jump does not resolve
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0xE);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x12B5); emu_cs = 0x34B1; ovl__34B1(0);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { ovl__34F2(0xFF); }
	f__B4F2_12B5_0025_0C96();
}

/**
 * Decompiled function f__B4F2_12B5_0025_0C96()
 *
 * @name f__B4F2_12B5_0025_0C96
 * @implements B4F2:12B5:0025:0C96 ()
 *
 * Called From: B4F2:12B5:0010:A284
 */
void f__B4F2_12B5_0025_0C96()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_di, emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_movw(&emu_dx.x, 0x32);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, emu_si);
	emu_movw(&emu_dx.x, 0x33);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_addw(&emu_ax.x, 0x80B4);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x454D);
	emu_movw(&emu_dx.x, 0x414E);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x12DA); emu_cs = 0x34B1; ovl__34B1(1);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { ovl__34F2(0xFF); }
	f__B4F2_12DA_0009_C26D();
}

/**
 * Decompiled function f__B4F2_12DA_0009_C26D()
 *
 * @name f__B4F2_12DA_0009_C26D
 * @implements B4F2:12DA:0009:C26D ()
 *
 * Called From: B4F2:12DA:0025:0C96
 */
void f__B4F2_12DA_0009_C26D()
{
	emu_addws(&emu_sp, 0xE);
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x12E3); emu_cs = 0x34B1; ovl__34B1(4);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { ovl__34F2(0xFF); }
	f__B4F2_12E3_0003_0178();
}

/**
 * Decompiled function f__B4F2_12E3_0003_0178()
 *
 * @name f__B4F2_12E3_0003_0178
 * @implements B4F2:12E3:0003:0178 ()
 *
 * Called From: B4F2:12E3:0009:C26D
 */
void f__B4F2_12E3_0003_0178()
{
	emu_pop(&emu_cx.x);
	f__B4F2_12F4_0009_78A2(); return;
}

/**
 * Decompiled function f__B4F2_12F4_0009_78A2()
 *
 * @name f__B4F2_12F4_0009_78A2
 * @implements B4F2:12F4:0009:78A2 ()
 *
 * Called From: B4F2:1243:0018:2A56
 * Called From: B4F2:1287:0010:61FF
 * Called From: B4F2:1287:0002:037A
 * Called From: B4F2:12E4:0003:0178
 */
void f__B4F2_12F4_0009_78A2()
{
	emu_incw(&emu_si);
	emu_cmpws(&emu_si, 0x5);
	if (!(emu_flags.sf != emu_flags.of)) { f__B4F2_12FD_0006_137A(); return; }
	f__B4F2_122E_0018_2A56(); return;
}

/**
 * Decompiled function f__B4F2_12F5_0008_F4A2()
 *
 * @name f__B4F2_12F5_0008_F4A2
 * @implements B4F2:12F5:0008:F4A2 ()
 *
 * Called From: B4F2:122B:000D:9992
 */
void f__B4F2_12F5_0008_F4A2()
{
	emu_cmpws(&emu_si, 0x5);
	if (!(emu_flags.sf != emu_flags.of)) { emu_ip = 0x12FD; emu_last_cs = 0xB4F2; emu_last_ip = 0x12F8; emu_last_length = 0x0008; emu_last_crc = 0xF4A2; emu_call(); return; } // Jump does not resolve
	f__B4F2_122E_0018_2A56(); return;
}

/**
 * Decompiled function f__B4F2_12FD_0006_137A()
 *
 * @name f__B4F2_12FD_0006_137A
 * @implements B4F2:12FD:0006:137A ()
 *
 * Called From: B4F2:12F8:0009:78A2
 */
void f__B4F2_12FD_0006_137A()
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
 * Decompiled function f__B4F2_1303_0017_BCDF()
 *
 * @name f__B4F2_1303_0017_BCDF
 * @implements B4F2:1303:0017:BCDF ()
 *
 * Called From: B4F2:08A7:000F:74AE
 * Called From: B4F2:08F4:002A:1FD3
 * Called From: B4F2:08F4:0028:53D2
 * Called From: B4F2:090B:000F:7759
 * Called From: B4F2:097D:0037:24EA
 * Called From: B4F2:0A09:000B:E22A
 * Called From: B4F2:0A09:0005:166C
 * Called From: B4F2:0B97:0051:14F6
 * Called From: B4F2:1094:0022:5CAE
 * Called From: B4F2:1094:000C:3A9A
 * Called From: B4F2:125D:001A:5C31
 */
void f__B4F2_1303_0017_BCDF()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x4);
	emu_push(emu_si);
	emu_movw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_bx.x, emu_si);
	emu_subws(&emu_bx.x, 0xF2);
	emu_cmpws(&emu_bx.x, 0xD);
	if ((emu_flags.cf || emu_flags.zf)) { f__B4F2_131A_0007_5DA6(); return; }
	f__B4F2_13A2_0002_03AC(); return;
}

/**
 * Decompiled function f__B4F2_131A_0007_5DA6()
 *
 * @name f__B4F2_131A_0007_5DA6
 * @implements B4F2:131A:0007:5DA6 ()
 *
 * Called From: B4F2:1315:0017:BCDF
 */
void f__B4F2_131A_0007_5DA6()
{
	emu_shlw(&emu_bx.x, 0x1);

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_cs, emu_bx.x,  0x13B2);
	switch (emu_ip) {
		case 0x1321: f__B4F2_1321_002F_54AB(); return;
		case 0x1350: f__B4F2_1350_000C_6370(); return;
		case 0x1363: f__B4F2_1363_000C_7B70(); return;
		case 0x1374: f__B4F2_1374_000C_AECC(); return;
		case 0x1380: f__B4F2_1380_000C_4B70(); return;
		case 0x1391: f__B4F2_1391_000C_4370(); return;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0xB4F2; emu_last_ip = 0x131C; emu_last_length = 0x0007; emu_last_crc = 0x5DA6;
			emu_call();
			return;
	}
}

/**
 * Decompiled function f__B4F2_1321_002F_54AB()
 *
 * @name f__B4F2_1321_002F_54AB
 * @implements B4F2:1321:002F:54AB ()
 *
 * Called From: B4F2:131C:0007:5DA6
 */
void f__B4F2_1321_002F_54AB()
{
	emu_movw(&emu_ax.x, emu_si);
	emu_negw(&emu_ax.x, emu_ax.x);
	emu_movw(&emu_dx.x, 0x33);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_addw(&emu_ax.x, 0x8081);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ds);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x0));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.zf) { f__B4F2_1348_0008_8E76(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x0);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	f__B4F2_13AD_0005_04BA(); return;
}

/**
 * Decompiled function f__B4F2_1348_0008_8E76()
 *
 * @name f__B4F2_1348_0008_8E76
 * @implements B4F2:1348:0008:8E76 ()
 *
 * Called From: B4F2:133C:002F:54AB
 */
void f__B4F2_1348_0008_8E76()
{
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	f__B4F2_13AD_0005_04BA(); return;
}

/**
 * Decompiled function f__B4F2_134E_0002_0316()
 *
 * @name f__B4F2_134E_0002_0316
 * @implements B4F2:134E:0002:0316 ()
 *
 * Called From: B4F2:13AB:0003:0026
 */
void f__B4F2_134E_0002_0316()
{
	f__B4F2_13AD_0005_04BA(); return;
}

/**
 * Decompiled function f__B4F2_1350_000C_6370()
 *
 * @name f__B4F2_1350_000C_6370
 * @implements B4F2:1350:000C:6370 ()
 *
 * Called From: B4F2:131C:0007:5DA6
 */
void f__B4F2_1350_000C_6370()
{
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x41C2), 0x0);
	if (emu_flags.zf) { f__B4F2_135C_0007_4A9E(); return; }
	emu_movw(&emu_ax.x, 0x69);
	f__B4F2_135F_0004_0C1E(); return;
}

/**
 * Decompiled function f__B4F2_135C_0007_4A9E()
 *
 * @name f__B4F2_135C_0007_4A9E
 * @implements B4F2:135C:0007:4A9E ()
 *
 * Called From: B4F2:1355:000C:6370
 */
void f__B4F2_135C_0007_4A9E()
{
	emu_movw(&emu_ax.x, 0x6A);
	emu_movw(&emu_si, emu_ax.x);
	f__B4F2_13A4_0006_0002(); return;
}

/**
 * Decompiled function f__B4F2_135F_0004_0C1E()
 *
 * @name f__B4F2_135F_0004_0C1E
 * @implements B4F2:135F:0004:0C1E ()
 *
 * Called From: B4F2:135A:000C:6370
 * Called From: B4F2:1372:0002:027A
 * Called From: B4F2:1372:0005:13DA
 * Called From: B4F2:138F:0002:0230
 * Called From: B4F2:138F:0005:1390
 * Called From: B4F2:13A0:0005:1376
 * Called From: B4F2:13A0:0002:02D6
 */
void f__B4F2_135F_0004_0C1E()
{
	emu_movw(&emu_si, emu_ax.x);
	f__B4F2_13A4_0006_0002(); return;
}

/**
 * Decompiled function f__B4F2_1363_000C_7B70()
 *
 * @name f__B4F2_1363_000C_7B70
 * @implements B4F2:1363:000C:7B70 ()
 *
 * Called From: B4F2:131C:0007:5DA6
 */
void f__B4F2_1363_000C_7B70()
{
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x41C4), 0x0);
	if (emu_flags.zf) { f__B4F2_136F_0005_13DA(); return; }
	emu_movw(&emu_ax.x, 0x69);
	f__B4F2_1372_0002_027A(); return;
}

/**
 * Decompiled function f__B4F2_136F_0005_13DA()
 *
 * @name f__B4F2_136F_0005_13DA
 * @implements B4F2:136F:0005:13DA ()
 *
 * Called From: B4F2:1368:000C:7B70
 */
void f__B4F2_136F_0005_13DA()
{
	emu_movw(&emu_ax.x, 0x6A);
	f__B4F2_135F_0004_0C1E(); return;
}

/**
 * Decompiled function f__B4F2_1372_0002_027A()
 *
 * @name f__B4F2_1372_0002_027A
 * @implements B4F2:1372:0002:027A ()
 *
 * Called From: B4F2:136D:000C:7B70
 */
void f__B4F2_1372_0002_027A()
{
	f__B4F2_135F_0004_0C1E(); return;
}

/**
 * Decompiled function f__B4F2_1374_000C_AECC()
 *
 * @name f__B4F2_1374_000C_AECC
 * @implements B4F2:1374:000C:AECC ()
 *
 * Called From: B4F2:131C:0007:5DA6
 */
void f__B4F2_1374_000C_AECC()
{
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00,  0x3900));
	emu_shlw(&emu_bx.x, 0x1);
	emu_movw(&emu_si, emu_get_memory16(emu_ds, emu_bx.x,  0x2AAD));
	f__B4F2_13A4_0006_0002(); return;
}

/**
 * Decompiled function f__B4F2_1380_000C_4B70()
 *
 * @name f__B4F2_1380_000C_4B70
 * @implements B4F2:1380:000C:4B70 ()
 *
 * Called From: B4F2:131C:0007:5DA6
 */
void f__B4F2_1380_000C_4B70()
{
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x41C8), 0x0);
	if (emu_flags.zf) { f__B4F2_138C_0005_1390(); return; }
	emu_movw(&emu_ax.x, 0x69);
	f__B4F2_138F_0002_0230(); return;
}

/**
 * Decompiled function f__B4F2_138C_0005_1390()
 *
 * @name f__B4F2_138C_0005_1390
 * @implements B4F2:138C:0005:1390 ()
 *
 * Called From: B4F2:1385:000C:4B70
 */
void f__B4F2_138C_0005_1390()
{
	emu_movw(&emu_ax.x, 0x6A);
	f__B4F2_135F_0004_0C1E(); return;
}

/**
 * Decompiled function f__B4F2_138F_0002_0230()
 *
 * @name f__B4F2_138F_0002_0230
 * @implements B4F2:138F:0002:0230 ()
 *
 * Called From: B4F2:138A:000C:4B70
 */
void f__B4F2_138F_0002_0230()
{
	f__B4F2_135F_0004_0C1E(); return;
}

/**
 * Decompiled function f__B4F2_1391_000C_4370()
 *
 * @name f__B4F2_1391_000C_4370
 * @implements B4F2:1391:000C:4370 ()
 *
 * Called From: B4F2:131C:0007:5DA6
 */
void f__B4F2_1391_000C_4370()
{
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x41CA), 0x0);
	if (emu_flags.zf) { f__B4F2_139D_0005_1376(); return; }
	emu_movw(&emu_ax.x, 0x69);
	f__B4F2_13A0_0002_02D6(); return;
}

/**
 * Decompiled function f__B4F2_139D_0005_1376()
 *
 * @name f__B4F2_139D_0005_1376
 * @implements B4F2:139D:0005:1376 ()
 *
 * Called From: B4F2:1396:000C:4370
 */
void f__B4F2_139D_0005_1376()
{
	emu_movw(&emu_ax.x, 0x6A);
	f__B4F2_135F_0004_0C1E(); return;
}

/**
 * Decompiled function f__B4F2_13A0_0002_02D6()
 *
 * @name f__B4F2_13A0_0002_02D6
 * @implements B4F2:13A0:0002:02D6 ()
 *
 * Called From: B4F2:139B:000C:4370
 */
void f__B4F2_13A0_0002_02D6()
{
	f__B4F2_135F_0004_0C1E(); return;
}

/**
 * Decompiled function f__B4F2_13A2_0002_03AC()
 *
 * @name f__B4F2_13A2_0002_03AC
 * @implements B4F2:13A2:0002:03AC ()
 *
 * Called From: B4F2:1317:0017:BCDF
 */
void f__B4F2_13A2_0002_03AC()
{
	f__B4F2_13A4_0006_0002(); return;
}

/**
 * Decompiled function f__B4F2_13A4_0006_0002()
 *
 * @name f__B4F2_13A4_0006_0002
 * @implements B4F2:13A4:0006:0002 ()
 *
 * Called From: B4F2:1361:0004:0C1E
 * Called From: B4F2:1361:0007:4A9E
 * Called From: B4F2:137E:000C:AECC
 * Called From: B4F2:13A2:0002:03AC
 */
void f__B4F2_13A4_0006_0002()
{
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x13AA); emu_cs = 0x0FCB; f__0FCB_005F_001C_147D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { ovl__34F2(0xFF); }
	f__B4F2_13AA_0003_0026();
}

/**
 * Decompiled function f__B4F2_13AA_0003_0026()
 *
 * @name f__B4F2_13AA_0003_0026
 * @implements B4F2:13AA:0003:0026 ()
 *
 * Called From: B4F2:13AA:0006:0002
 */
void f__B4F2_13AA_0003_0026()
{
	emu_pop(&emu_cx.x);
	f__B4F2_134E_0002_0316(); return;
}

/**
 * Decompiled function f__B4F2_13AD_0005_04BA()
 *
 * @name f__B4F2_13AD_0005_04BA
 * @implements B4F2:13AD:0005:04BA ()
 *
 * Called From: B4F2:134E:0002:0316
 * Called From: B4F2:134E:002F:54AB
 * Called From: B4F2:134E:0008:8E76
 */
void f__B4F2_13AD_0005_04BA()
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
 * Decompiled function f__B4F2_13CE_0013_DC46()
 *
 * @name f__B4F2_13CE_0013_DC46
 * @implements B4F2:13CE:0013:DC46 ()
 *
 * Called From: B4F2:0D96:0010:053D
 * Called From: B4F2:0DDB:0010:C3AF
 */
void f__B4F2_13CE_0013_DC46()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x4);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (!emu_flags.zf) { f__B4F2_13E1_0060_6096(); return; }
	emu_ip = 0x1470; emu_last_cs = 0xB4F2; emu_last_ip = 0x13DE; emu_last_length = 0x0013; emu_last_crc = 0xDC46; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B4F2_13E1_0060_6096()
 *
 * @name f__B4F2_13E1_0060_6096
 * @implements B4F2:13E1:0060:6096 ()
 *
 * Called From: B4F2:13DC:0013:DC46
 */
void f__B4F2_13E1_0060_6096()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_si, emu_get_memory16(emu_es, emu_bx.x,  0x1E));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_di, emu_get_memory16(emu_es, emu_bx.x,  0x20));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x22));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x24));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_bx.x, emu_get_memory16(emu_es, emu_bx.x,  0x1C));
	emu_movb(&emu_cx.l, 0x4);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, emu_bx.x,  0x4062));
	emu_movb(&emu_cx.l, 0x3);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_addw(&emu_si, emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_bx.x, emu_get_memory16(emu_es, emu_bx.x,  0x1C));
	emu_movb(&emu_cx.l, 0x4);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_addw(&emu_di, emu_get_memory16(emu_ds, emu_bx.x,  0x4064));
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x6C91), 0x0);
	if (!emu_flags.zf) { emu_ip = 0x1444; emu_last_cs = 0xB4F2; emu_last_ip = 0x142C; emu_last_length = 0x0060; emu_last_crc = 0x6096; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_di);
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_si);
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_ax.x);
	emu_push(emu_di);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x1441); emu_cs = 0x2B6C; f__2B6C_0197_00CE_7027();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { ovl__34F2(0xFF); }
	f__B4F2_1441_0020_7036();
}

/**
 * Decompiled function f__B4F2_1441_0020_7036()
 *
 * @name f__B4F2_1441_0020_7036
 * @implements B4F2:1441:0020:7036 ()
 *
 * Called From: B4F2:1441:0060:6096
 */
void f__B4F2_1441_0020_7036()
{
	emu_addws(&emu_sp, 0x8);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movw(&emu_ax.x, emu_di);
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_decw(&emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_si);
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_decw(&emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_di);
	emu_push(emu_si);
	emu_movw(&emu_ax.x, 0x353F);
	emu_movw(&emu_es, emu_ax.x);

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_es, 0x00,  0x6668);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_es, 0x00,  0x666A);
	emu_push(0x1461);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A60D31: f__22A6_0D31_0015_D6F0(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0xB4F2; emu_last_ip = 0x145C; emu_last_length = 0x0020; emu_last_crc = 0x7036;
			emu_call();
			return;
	}
	f__B4F2_1461_000F_BC2C();
}

/**
 * Decompiled function f__B4F2_1461_000F_BC2C()
 *
 * @name f__B4F2_1461_000F_BC2C
 * @implements B4F2:1461:000F:BC2C ()
 *
 * Called From: B4F2:1461:0020:7036
 */
void f__B4F2_1461_000F_BC2C()
{
	emu_addws(&emu_sp, 0xA);
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x6C91), 0x0);
	if (!emu_flags.zf) { emu_ip = 0x1470; emu_last_cs = 0xB4F2; emu_last_ip = 0x1469; emu_last_length = 0x000F; emu_last_crc = 0xBC2C; emu_call(); return; } // Jump does not resolve
	emu_push(emu_cs); emu_push(0x1470); emu_cs = 0x2B6C; f__2B6C_0292_0028_CAA5();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { ovl__34F2(0xFF); }
	f__B4F2_1470_0006_137A();
}

/**
 * Decompiled function f__B4F2_1470_0006_137A()
 *
 * @name f__B4F2_1470_0006_137A
 * @implements B4F2:1470:0006:137A ()
 *
 * Called From: B4F2:1470:000F:BC2C
 */
void f__B4F2_1470_0006_137A()
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

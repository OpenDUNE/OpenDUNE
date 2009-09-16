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
	emu_ip = 0x027D; emu_last_cs = 0xB4F2; emu_last_ip = 0x01DC; emu_last_length = 0x0013; emu_last_crc = 0x2EC2; emu_call(); // Jump does not resolve
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
		case 0x024E: f__B4F2_024E_0004_0776(); return;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0xB4F2; emu_last_ip = 0x01E1; emu_last_length = 0x0007; emu_last_crc = 0x5EAA;
			emu_call();
			return;
	}
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
 * Decompiled function f__B4F2_027F_0015_C348()
 *
 * @name f__B4F2_027F_0015_C348
 * @implements B4F2:027F:0015:C348 ()
 *
 * Called From: B4F2:0250:0004:0776
 */
void f__B4F2_027F_0015_C348()
{
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x38F8), 0x0);
	if (emu_flags.zf) { emu_ip = 0x02A2; emu_last_cs = 0xB4F2; emu_last_ip = 0x0284; emu_last_length = 0x0015; emu_last_crc = 0xC348; emu_call(); return; } // Jump does not resolve
	emu_orw(&emu_si, emu_si);
	if (emu_flags.zf) { f__B4F2_02A2_0005_17FC(); return; }
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x264C);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x0294); emu_ip = 0x0EE0; emu_last_cs = 0xB4F2; emu_last_ip = 0x0291; emu_last_length = 0x0015; emu_last_crc = 0xC348; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__B4F2_02A2_0005_17FC()
 *
 * @name f__B4F2_02A2_0005_17FC
 * @implements B4F2:02A2:0005:17FC ()
 *
 * Called From: B4F2:01A8:000D:0B0C
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
 * Decompiled function f__B4F2_0855_0013_DDE1()
 *
 * @name f__B4F2_0855_0013_DDE1
 * @implements B4F2:0855:0013:DDE1 ()
 *
 * Called From: B4F2:0186:000C:0D9A
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
	emu_ip = 0x08CF; emu_last_cs = 0xB4F2; emu_last_ip = 0x08CB; emu_last_length = 0x0023; emu_last_crc = 0x26FB; emu_call(); // Jump does not resolve
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
 * Decompiled function f__B4F2_08F7_0008_7B10()
 *
 * @name f__B4F2_08F7_0008_7B10
 * @implements B4F2:08F7:0008:7B10 ()
 *
 * Called From: B4F2:08F7:002A:1FD3
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
	emu_push(emu_cs); emu_push(0x0939); emu_cs = 0x0FCB; emu_ip = 0x0998; emu_last_cs = 0xB4F2; emu_last_ip = 0x0934; emu_last_length = 0x002B; emu_last_crc = 0xD108; emu_call(); // Jump does not resolve
	emu_unknown_call();
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
	emu_ip = 0x0BA5; emu_last_cs = 0xB4F2; emu_last_ip = 0x0985; emu_last_length = 0x0008; emu_last_crc = 0x65A8; emu_call(); // Jump does not resolve
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
	if (emu_flags.zf) { emu_ip = 0x0A23; emu_last_cs = 0xB4F2; emu_last_ip = 0x09EC; emu_last_length = 0x0079; emu_last_crc = 0x3B74; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0xA), 0x0);
	if (emu_flags.zf) { f__B4F2_0A01_000B_E22A(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xA));
	emu_ip = 0x0A07; emu_last_cs = 0xB4F2; emu_last_ip = 0x09FF; emu_last_length = 0x0079; emu_last_crc = 0x3B74; emu_call(); // Jump does not resolve
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
 * Decompiled function f__B4F2_0A0C_000F_7E60()
 *
 * @name f__B4F2_0A0C_000F_7E60
 * @implements B4F2:0A0C:000F:7E60 ()
 *
 * Called From: B4F2:0A0C:000B:E22A
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
	emu_push(emu_cs); emu_push(0x0AC3); emu_cs = 0x348B; emu_ip = 0x0AE3; emu_last_cs = 0xB4F2; emu_last_ip = 0x0ABE; emu_last_length = 0x00A8; emu_last_crc = 0x83C6; emu_call(); // Jump does not resolve
	f__B4F2_0AC3_0015_2373();
}

/**
 * Decompiled function f__B4F2_0A44_007F_FBD2()
 *
 * @name f__B4F2_0A44_007F_FBD2
 * @implements B4F2:0A44:007F:FBD2 ()
 *
 * Called From: B4F2:0A39:00A8:83C6
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
	if (!emu_flags.zf) { emu_ip = 0x0B05; emu_last_cs = 0xB4F2; emu_last_ip = 0x0B00; emu_last_length = 0x000F; emu_last_crc = 0xAF79; emu_call(); return; } // Jump does not resolve
	f__B4F2_0BA5_0010_DF67(); return;
}

/**
 * Decompiled function f__B4F2_0BA5_0010_DF67()
 *
 * @name f__B4F2_0BA5_0010_DF67
 * @implements B4F2:0BA5:0010:DF67 ()
 *
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
	if (emu_flags.zf) { emu_ip = 0x0FFF; emu_last_cs = 0xB4F2; emu_last_ip = 0x0FF6; emu_last_length = 0x0086; emu_last_crc = 0xC1A3; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_ax.x, 0x5);
	if (emu_flags.zf) { f__B4F2_100B_0007_6F48(); return; }
	f__B4F2_1012_000C_C5E1(); return;
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
	if (emu_flags.zf) { emu_ip = 0x1059; emu_last_cs = 0xB4F2; emu_last_ip = 0x1039; emu_last_length = 0x0047; emu_last_crc = 0x186D; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x38), 0x6B);
	if (emu_flags.zf) { emu_ip = 0x1059; emu_last_cs = 0xB4F2; emu_last_ip = 0x1043; emu_last_length = 0x0047; emu_last_crc = 0x186D; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x38), 0x6C);
	if (emu_flags.zf) { emu_ip = 0x1059; emu_last_cs = 0xB4F2; emu_last_ip = 0x104D; emu_last_length = 0x0047; emu_last_crc = 0x186D; emu_call(); return; } // Jump does not resolve
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
	emu_ip = 0x108B; emu_last_cs = 0xB4F2; emu_last_ip = 0x1073; emu_last_length = 0x0047; emu_last_crc = 0x186D; emu_call(); // Jump does not resolve
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
 * Decompiled function f__B4F2_1097_0008_7B10()
 *
 * @name f__B4F2_1097_0008_7B10
 * @implements B4F2:1097:0008:7B10 ()
 *
 * Called From: B4F2:1097:0022:5CAE
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
 * Decompiled function f__B4F2_1303_0017_BCDF()
 *
 * @name f__B4F2_1303_0017_BCDF
 * @implements B4F2:1303:0017:BCDF ()
 *
 * Called From: B4F2:08A7:000F:74AE
 * Called From: B4F2:08F4:002A:1FD3
 * Called From: B4F2:090B:000F:7759
 * Called From: B4F2:097D:0037:24EA
 * Called From: B4F2:0A09:000B:E22A
 * Called From: B4F2:1094:0022:5CAE
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
	if ((emu_flags.cf || emu_flags.zf)) { emu_ip = 0x131A; emu_last_cs = 0xB4F2; emu_last_ip = 0x1315; emu_last_length = 0x0017; emu_last_crc = 0xBCDF; emu_call(); return; } // Jump does not resolve
	f__B4F2_13A2_0002_03AC(); return;
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

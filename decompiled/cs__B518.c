/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__B518_0000_0025_E9E8()
 *
 * @name f__B518_0000_0025_E9E8
 * @implements B518:0000:0025:E9E8 ()
 *
 * Called From: 3518:0020:0005:1DB8
 * Called From: 3518:0020:0005:1EFA
 */
void f__B518_0000_0025_E9E8()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x32);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_movw(&emu_dx.x, 0xE10);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76B2));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76B0));
	emu_subw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x38AC));
	emu_sbbw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x38AE));
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_cs); emu_push(0x0025); emu_cs = 0x01F7; f__01F7_04E0_0004_06F8();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_0025_0019_0296();
}

/**
 * Decompiled function f__B518_0025_0019_0296()
 *
 * @name f__B518_0025_0019_0296
 * @implements B518:0025:0019:0296 ()
 *
 * Called From: B518:0025:0025:E9E8
 */
void f__B518_0025_0019_0296()
{
	emu_incw(&emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x7E15), emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x14));
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp + 0x10);
	emu_push(emu_ax.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp + 0xE);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x12));
	emu_push(emu_cs);
	emu_push(0x003E); f__B518_0F54_0023_5BE3();
	f__B518_003E_0012_1D9E();
}

/**
 * Decompiled function f__B518_003E_0012_1D9E()
 *
 * @name f__B518_003E_0012_1D9E
 * @implements B518:003E:0012:1D9E ()
 *
 * Called From: B518:003E:0019:0296
 */
void f__B518_003E_0012_1D9E()
{
	emu_addws(&emu_sp, 0xC);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0x12), emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x38B0), 0x1);
	if (!emu_flags.zf) { emu_ip = 0x0050; emu_last_cs = 0xB518; emu_last_ip = 0x0049; emu_last_length = 0x0012; emu_last_crc = 0x1D9E; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, 0x2);
	f__B518_0053_0008_815E(); return;
}

/**
 * Decompiled function f__B518_0053_0008_815E()
 *
 * @name f__B518_0053_0008_815E
 * @implements B518:0053:0008:815E ()
 *
 * Called From: B518:004E:0012:1D9E
 */
void f__B518_0053_0008_815E()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x16), emu_ax.x);
	emu_push(emu_cs); emu_push(0x005B); emu_cs = 0x2B6C; f__2B6C_0137_0020_17E5();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_005B_0008_552C();
}

/**
 * Decompiled function f__B518_005B_0008_552C()
 *
 * @name f__B518_005B_0008_552C
 * @implements B518:005B:0008:552C ()
 *
 * Called From: B518:005B:0008:815E
 */
void f__B518_005B_0008_552C()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0063); emu_cs = 0x34E9; ovl__34E9(2);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_0063_000A_136A();
}

/**
 * Decompiled function f__B518_0063_000A_136A()
 *
 * @name f__B518_0063_000A_136A
 * @implements B518:0063:000A:136A ()
 *
 * Called From: B518:0063:0008:552C
 */
void f__B518_0063_000A_136A()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x006D); emu_cs = 0x2598; f__2598_0000_0017_D681();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_006D_000F_2FBA();
}

/**
 * Decompiled function f__B518_006D_000F_2FBA()
 *
 * @name f__B518_006D_000F_2FBA
 * @implements B518:006D:000F:2FBA ()
 *
 * Called From: B518:006D:000A:136A
 */
void f__B518_006D_000F_2FBA()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x14), emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x12));
	emu_push(emu_cs);
	emu_push(0x007C); f__B518_0B1D_0014_0C28();
	f__B518_007C_000F_DBAA();
}

/**
 * Decompiled function f__B518_007C_000F_DBAA()
 *
 * @name f__B518_007C_000F_DBAA
 * @implements B518:007C:000F:DBAA ()
 *
 * Called From: B518:007C:000F:2FBA
 */
void f__B518_007C_000F_DBAA()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_ax.x, 0x53);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x1A);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x008B); emu_cs = 0x0FCB; f__0FCB_005F_001C_147D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_008B_0008_73D2();
}

/**
 * Decompiled function f__B518_008B_0008_73D2()
 *
 * @name f__B518_008B_0008_73D2
 * @implements B518:008B:0008:73D2 ()
 *
 * Called From: B518:008B:000F:DBAA
 */
void f__B518_008B_0008_73D2()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x0093); f__B518_0E2D_0023_DFF4();
	f__B518_0093_0010_D972();
}

/**
 * Decompiled function f__B518_0093_0010_D972()
 *
 * @name f__B518_0093_0010_D972
 * @implements B518:0093:0010:D972 ()
 *
 * Called From: B518:0093:0008:73D2
 */
void f__B518_0093_0010_D972()
{
	emu_addws(&emu_sp, 0x6);
	emu_movw(&emu_ax.x, 0x77);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x18);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x00A3); emu_cs = 0x0FCB; f__0FCB_005F_001C_147D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_00A3_0008_73B2();
}

/**
 * Decompiled function f__B518_00A3_0008_73B2()
 *
 * @name f__B518_00A3_0008_73B2
 * @implements B518:00A3:0008:73B2 ()
 *
 * Called From: B518:00A3:0010:D972
 */
void f__B518_00A3_0008_73B2()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x00AB); f__B518_0E2D_0023_DFF4();
	f__B518_00AB_0017_E391();
}

/**
 * Decompiled function f__B518_00AB_0017_E391()
 *
 * @name f__B518_00AB_0017_E391
 * @implements B518:00AB:0017:E391 ()
 *
 * Called From: B518:00AB:0008:73B2
 */
void f__B518_00AB_0017_E391()
{
	emu_addws(&emu_sp, 0x6);
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x38B0), 0x1);
	if (emu_flags.zf) { f__B518_00CD_0009_3803(); return; }
	emu_movw(&emu_ax.x, 0x9B);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x19);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x00C2); emu_cs = 0x0FCB; emu_ip = 0x0121; emu_last_cs = 0xB518; emu_last_ip = 0x00BD; emu_last_length = 0x0017; emu_last_crc = 0xE391; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__B518_00CD_0009_3803()
 *
 * @name f__B518_00CD_0009_3803
 * @implements B518:00CD:0009:3803 ()
 *
 * Called From: B518:00B3:0017:E391
 */
void f__B518_00CD_0009_3803()
{
	emu_movw(&emu_ax.x, 0x149);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x00D6); emu_cs = 0x0FCB; f__0FCB_005F_001C_147D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_00D6_0008_74DE();
}

/**
 * Decompiled function f__B518_00D6_0008_74DE()
 *
 * @name f__B518_00D6_0008_74DE
 * @implements B518:00D6:0008:74DE ()
 *
 * Called From: B518:00D6:0009:3803
 */
void f__B518_00D6_0008_74DE()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x00DE); emu_cs = 0x2521; f__2521_0035_0015_2811();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_00DE_000C_2305();
}

/**
 * Decompiled function f__B518_00DE_000C_2305()
 *
 * @name f__B518_00DE_000C_2305
 * @implements B518:00DE:000C:2305 ()
 *
 * Called From: B518:00DE:0008:74DE
 */
void f__B518_00DE_000C_2305()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x14A);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x00EA); emu_cs = 0x0FCB; f__0FCB_005F_001C_147D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_00EA_0008_74DE();
}

/**
 * Decompiled function f__B518_00EA_0008_74DE()
 *
 * @name f__B518_00EA_0008_74DE
 * @implements B518:00EA:0008:74DE ()
 *
 * Called From: B518:00EA:000C:2305
 */
void f__B518_00EA_0008_74DE()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x00F2); emu_cs = 0x2521; f__2521_0035_0015_2811();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_00F2_0010_BC69();
}

/**
 * Decompiled function f__B518_00F2_0010_BC69()
 *
 * @name f__B518_00F2_0010_BC69
 * @implements B518:00F2:0010:BC69 ()
 *
 * Called From: B518:00F2:0008:74DE
 */
void f__B518_00F2_0010_BC69()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_pop(&emu_dx.x);
	emu_cmpw(&emu_dx.x, emu_ax.x);
	if ((emu_flags.cf || emu_flags.zf)) { f__B518_010E_0009_3B03(); return; }
	emu_movw(&emu_ax.x, 0x149);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0102); emu_cs = 0x0FCB; emu_ip = 0x0161; emu_last_cs = 0xB518; emu_last_ip = 0x00FD; emu_last_length = 0x0010; emu_last_crc = 0xBC69; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__B518_010E_0009_3B03()
 *
 * @name f__B518_010E_0009_3B03
 * @implements B518:010E:0009:3B03 ()
 *
 * Called From: B518:00F7:0010:BC69
 */
void f__B518_010E_0009_3B03()
{
	emu_movw(&emu_ax.x, 0x14A);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0117); emu_cs = 0x0FCB; f__0FCB_005F_001C_147D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_0117_0008_74DE();
}

/**
 * Decompiled function f__B518_0117_0008_74DE()
 *
 * @name f__B518_0117_0008_74DE
 * @implements B518:0117:0008:74DE ()
 *
 * Called From: B518:0117:0009:3B03
 */
void f__B518_0117_0008_74DE()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x011F); emu_cs = 0x2521; f__2521_0035_0015_2811();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_011F_001B_7E6B();
}

/**
 * Decompiled function f__B518_011F_001B_7E6B()
 *
 * @name f__B518_011F_001B_7E6B
 * @implements B518:011F:001B:7E6B ()
 *
 * Called From: B518:011F:0008:74DE
 */
void f__B518_011F_001B_7E6B()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_addw(&emu_ax.x, 0x13);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x18), emu_ax.x);
	emu_movw(&emu_ax.x, 0x105);
	emu_subw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x18));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x1A), emu_ax.x);
	emu_xorw(&emu_si, emu_si);
	f__B518_019D_0011_5C64(); return;
}

/**
 * Decompiled function f__B518_013A_0026_3BC8()
 *
 * @name f__B518_013A_0026_3BC8
 * @implements B518:013A:0026:3BC8 ()
 *
 * Called From: B518:01A0:0011:5C64
 * Called From: B518:01A0:0015:412C
 */
void f__B518_013A_0026_3BC8()
{
	emu_movw(&emu_ax.x, 0x221);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0xF);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_si);
	emu_movw(&emu_dx.x, 0x24);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_addw(&emu_ax.x, 0x5C);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x18));
	emu_addw(&emu_ax.x, 0xFFFC);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x149);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0160); emu_cs = 0x0FCB; f__0FCB_005F_001C_147D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_0160_0008_7B10();
}

/**
 * Decompiled function f__B518_0160_0008_7B10()
 *
 * @name f__B518_0160_0008_7B10
 * @implements B518:0160:0008:7B10 ()
 *
 * Called From: B518:0160:0026:3BC8
 */
void f__B518_0160_0008_7B10()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0168); emu_cs = 0x10E4; f__10E4_1EF1_0040_E33D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_0168_0029_FC01();
}

/**
 * Decompiled function f__B518_0168_0029_FC01()
 *
 * @name f__B518_0168_0029_FC01
 * @implements B518:0168:0029:FC01 ()
 *
 * Called From: B518:0168:0008:7B10
 */
void f__B518_0168_0029_FC01()
{
	emu_addws(&emu_sp, 0xE);
	emu_movw(&emu_ax.x, 0x221);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0xF);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_si);
	emu_movw(&emu_dx.x, 0x24);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_addw(&emu_ax.x, 0x65);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x18));
	emu_addw(&emu_ax.x, 0xFFFC);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x14A);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0191); emu_cs = 0x0FCB; f__0FCB_005F_001C_147D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_0191_0008_7B10();
}

/**
 * Decompiled function f__B518_0191_0008_7B10()
 *
 * @name f__B518_0191_0008_7B10
 * @implements B518:0191:0008:7B10 ()
 *
 * Called From: B518:0191:0029:FC01
 */
void f__B518_0191_0008_7B10()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0199); emu_cs = 0x10E4; f__10E4_1EF1_0040_E33D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_0199_0015_412C();
}

/**
 * Decompiled function f__B518_0199_0015_412C()
 *
 * @name f__B518_0199_0015_412C
 * @implements B518:0199:0015:412C ()
 *
 * Called From: B518:0199:0008:7B10
 */
void f__B518_0199_0015_412C()
{
	emu_addws(&emu_sp, 0xE);
	emu_incw(&emu_si);
	emu_cmpw(&emu_si, emu_get_memory16(emu_ss, emu_bp, -0x16));
	if ((emu_flags.sf != emu_flags.of)) { f__B518_013A_0026_3BC8(); return; }
	emu_movw(&emu_ax.x, 0x5);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x01AE); emu_cs = 0x2537; f__2537_000C_001C_1A9E();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_01AE_000B_B077();
}

/**
 * Decompiled function f__B518_019D_0011_5C64()
 *
 * @name f__B518_019D_0011_5C64
 * @implements B518:019D:0011:5C64 ()
 *
 * Called From: B518:0138:001B:7E6B
 */
void f__B518_019D_0011_5C64()
{
	emu_cmpw(&emu_si, emu_get_memory16(emu_ss, emu_bp, -0x16));
	if ((emu_flags.sf != emu_flags.of)) { f__B518_013A_0026_3BC8(); return; }
	emu_movw(&emu_ax.x, 0x5);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x01AE); emu_cs = 0x2537; emu_ip = 0x01BA; emu_last_cs = 0xB518; emu_last_ip = 0x01A9; emu_last_length = 0x0011; emu_last_crc = 0x5C64; emu_call(); // Jump does not resolve
	f__B518_01AE_000B_B077();
}

/**
 * Decompiled function f__B518_01AE_000B_B077()
 *
 * @name f__B518_01AE_000B_B077
 * @implements B518:01AE:000B:B077 ()
 *
 * Called From: B518:01AE:0015:412C
 */
void f__B518_01AE_000B_B077()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_addw(&emu_ax.x, 0x11);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x01B9); emu_cs = 0x3483; ovl__3483(1);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_01B9_0021_7727();
}

/**
 * Decompiled function f__B518_01B9_0021_7727()
 *
 * @name f__B518_01B9_0021_7727
 * @implements B518:01B9:0021:7727 ()
 *
 * Called From: B518:01B9:000B:B077
 */
void f__B518_01B9_0021_7727()
{
	emu_pop(&emu_cx.x);
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
	emu_push(emu_cs); emu_push(0x01DA); emu_cs = 0x24D0; f__24D0_000D_0039_9224();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_01DA_0008_F67A();
}

/**
 * Decompiled function f__B518_01DA_0008_F67A()
 *
 * @name f__B518_01DA_0008_F67A
 * @implements B518:01DA:0008:F67A ()
 *
 * Called From: B518:01DA:0021:7727
 */
void f__B518_01DA_0008_F67A()
{
	emu_addws(&emu_sp, 0x10);
	emu_push(emu_cs); emu_push(0x01E2); emu_cs = 0x29E8; f__29E8_073F_000E_A6E4();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_01E2_0029_3D64();
}

/**
 * Decompiled function f__B518_01E2_0029_3D64()
 *
 * @name f__B518_01E2_0029_3D64
 * @implements B518:01E2:0029:3D64 ()
 *
 * Called From: B518:01E2:0008:F67A
 */
void f__B518_01E2_0029_3D64()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x32), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x10));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2E), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2A), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x26), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x22), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x1E), emu_ax.x);
	emu_xorw(&emu_si, emu_si);
	f__B518_02E1_000C_4F36(); return;
}

/**
 * Decompiled function f__B518_020B_002E_D2DF()
 *
 * @name f__B518_020B_002E_D2DF
 * @implements B518:020B:002E:D2DF ()
 *
 * Called From: B518:02EA:000C:4F36
 * Called From: B518:02EA:000F:0F46
 */
void f__B518_020B_002E_D2DF()
{
	emu_movw(&emu_bx.x, emu_si);
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, emu_bp - 0x32);
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bx.x,  0x0));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax.x);
	emu_movw(&emu_bx.x, emu_si);
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, emu_bp - 0x2E);
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bx.x,  0x0));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_ax.x);
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0xFDE8);
	if (!emu_flags.cf) { emu_ip = 0x0239; emu_last_cs = 0xB518; emu_last_ip = 0x0232; emu_last_length = 0x002E; emu_last_crc = 0xD2DF; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	f__B518_023C_000F_3C99(); return;
}

/**
 * Decompiled function f__B518_023C_000F_3C99()
 *
 * @name f__B518_023C_000F_3C99
 * @implements B518:023C:000F:3C99 ()
 *
 * Called From: B518:0237:002E:D2DF
 */
void f__B518_023C_000F_3C99()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax.x);
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0xFDE8);
	if (!emu_flags.cf) { emu_ip = 0x024B; emu_last_cs = 0xB518; emu_last_ip = 0x0244; emu_last_length = 0x000F; emu_last_crc = 0x3C99; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xA));
	f__B518_024E_0032_9BCF(); return;
}

/**
 * Decompiled function f__B518_024E_0032_9BCF()
 *
 * @name f__B518_024E_0032_9BCF
 * @implements B518:024E:0032:9BCF ()
 *
 * Called From: B518:0249:000F:3C99
 */
void f__B518_024E_0032_9BCF()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_ax.x);
	emu_movw(&emu_bx.x, emu_si);
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, emu_bp - 0x32);
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_get_memory16(emu_ss, emu_bx.x,  0x0), emu_ax.x);
	emu_movw(&emu_bx.x, emu_si);
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, emu_bp - 0x2E);
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_movw(&emu_get_memory16(emu_ss, emu_bx.x,  0x0), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xA));
	if ((emu_flags.cf || emu_flags.zf)) { emu_ip = 0x0280; emu_last_cs = 0xB518; emu_last_ip = 0x0279; emu_last_length = 0x0032; emu_last_crc = 0x9BCF; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	f__B518_0283_003B_E14A(); return;
}

/**
 * Decompiled function f__B518_0283_003B_E14A()
 *
 * @name f__B518_0283_003B_E14A
 * @implements B518:0283:003B:E14A ()
 *
 * Called From: B518:027E:0032:9BCF
 */
void f__B518_0283_003B_E14A()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x1A));
	if ((emu_flags.cf || emu_flags.zf)) { f__B518_02BE_002F_0D46(); return; }
	emu_movw(&emu_bx.x, emu_si);
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, emu_bp - 0x30);
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_divw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x1A));
	emu_incw(&emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bx.x,  0x0), emu_ax.x);
	emu_movw(&emu_bx.x, emu_si);
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, emu_bp - 0x2C);
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_divw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x1A));
	emu_incw(&emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bx.x,  0x0), emu_ax.x);
	f__B518_02DE_000F_0F46(); return;
}

/**
 * Decompiled function f__B518_02BE_002F_0D46()
 *
 * @name f__B518_02BE_002F_0D46
 * @implements B518:02BE:002F:0D46 ()
 *
 * Called From: B518:028C:003B:E14A
 */
void f__B518_02BE_002F_0D46()
{
	emu_movw(&emu_bx.x, emu_si);
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, emu_bp - 0x30);
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bx.x,  0x0), 0x1);
	emu_movw(&emu_bx.x, emu_si);
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, emu_bp - 0x2C);
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bx.x,  0x0), 0x1);
	emu_addws(&emu_si, 0x2);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x16));
	emu_shlw(&emu_ax.x, 0x1);
	emu_cmpw(&emu_ax.x, emu_si);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__B518_02ED_0009_5FFB(); return; }
	emu_ip = 0x020B; emu_last_cs = 0xB518; emu_last_ip = 0x02EA; emu_last_length = 0x002F; emu_last_crc = 0x0D46; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B518_02DE_000F_0F46()
 *
 * @name f__B518_02DE_000F_0F46
 * @implements B518:02DE:000F:0F46 ()
 *
 * Called From: B518:02BC:003B:E14A
 */
void f__B518_02DE_000F_0F46()
{
	emu_addws(&emu_si, 0x2);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x16));
	emu_shlw(&emu_ax.x, 0x1);
	emu_cmpw(&emu_ax.x, emu_si);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { emu_ip = 0x02ED; emu_last_cs = 0xB518; emu_last_ip = 0x02E8; emu_last_length = 0x000F; emu_last_crc = 0x0F46; emu_call(); return; } // Jump does not resolve
	f__B518_020B_002E_D2DF(); return;
}

/**
 * Decompiled function f__B518_02E1_000C_4F36()
 *
 * @name f__B518_02E1_000C_4F36
 * @implements B518:02E1:000C:4F36 ()
 *
 * Called From: B518:0208:0029:3D64
 */
void f__B518_02E1_000C_4F36()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x16));
	emu_shlw(&emu_ax.x, 0x1);
	emu_cmpw(&emu_ax.x, emu_si);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { emu_ip = 0x02ED; emu_last_cs = 0xB518; emu_last_ip = 0x02E8; emu_last_length = 0x000C; emu_last_crc = 0x4F36; emu_call(); return; } // Jump does not resolve
	f__B518_020B_002E_D2DF(); return;
}

/**
 * Decompiled function f__B518_02ED_0009_5FFB()
 *
 * @name f__B518_02ED_0009_5FFB
 * @implements B518:02ED:0009:5FFB ()
 *
 * Called From: B518:02E8:002F:0D46
 */
void f__B518_02ED_0009_5FFB()
{
	emu_movw(&emu_ax.x, 0x2D);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x02F6); f__B518_14D4_0013_44E0();
	f__B518_02F6_000D_DF8E();
}

/**
 * Decompiled function f__B518_02F6_000D_DF8E()
 *
 * @name f__B518_02F6_000D_DF8E
 * @implements B518:02F6:000D:DF8E ()
 *
 * Called From: B518:02F6:0009:5FFB
 */
void f__B518_02F6_000D_DF8E()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x12));
	emu_push(emu_cs);
	emu_push(0x0303); f__B518_0EB1_000E_9DA1();
	f__B518_0303_000B_F398();
}

/**
 * Decompiled function f__B518_0303_000B_F398()
 *
 * @name f__B518_0303_000B_F398
 * @implements B518:0303:000B:F398 ()
 *
 * Called From: B518:0303:000D:DF8E
 */
void f__B518_0303_000B_F398()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_ax.x, 0x2D);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x030E); f__B518_14D4_0013_44E0();
	f__B518_030E_0006_1B92();
}

/**
 * Decompiled function f__B518_030E_0006_1B92()
 *
 * @name f__B518_030E_0006_1B92
 * @implements B518:030E:0006:1B92 ()
 *
 * Called From: B518:030E:000B:F398
 */
void f__B518_030E_0006_1B92()
{
	emu_pop(&emu_cx.x);
	emu_xorw(&emu_si, emu_si);
	f__B518_04FA_0008_33EC(); return;
}

/**
 * Decompiled function f__B518_0314_0005_16E6()
 *
 * @name f__B518_0314_0005_16E6
 * @implements B518:0314:0005:16E6 ()
 *
 * Called From: B518:04FF:0008:33EC
 * Called From: B518:04FF:000A:DBED
 */
void f__B518_0314_0005_16E6()
{
	emu_push(emu_cs);
	emu_push(0x0319); f__B518_14F2_003E_63EE();
	f__B518_0319_0008_DFDE();
}

/**
 * Decompiled function f__B518_0319_0008_DFDE()
 *
 * @name f__B518_0319_0008_DFDE
 * @implements B518:0319:0008:DFDE ()
 *
 * Called From: B518:0319:0005:16E6
 */
void f__B518_0319_0008_DFDE()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x0);
	f__B518_04E6_0009_0E6D(); return;
}

/**
 * Decompiled function f__B518_0321_0005_16B2()
 *
 * @name f__B518_0321_0005_16B2
 * @implements B518:0321:0005:16B2 ()
 *
 * Called From: B518:04EC:0009:0E6D
 * Called From: B518:04EC:000D:1668
 */
void f__B518_0321_0005_16B2()
{
	emu_push(emu_cs);
	emu_push(0x0326); f__B518_14F2_003E_63EE();
	f__B518_0326_000D_FE86();
}

/**
 * Decompiled function f__B518_0326_000D_FE86()
 *
 * @name f__B518_0326_000D_FE86
 * @implements B518:0326:000D:FE86 ()
 *
 * Called From: B518:0326:0005:16B2
 */
void f__B518_0326_000D_FE86()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x0);
	if (!emu_flags.zf) { f__B518_0333_0054_06BF(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x12), 0xFF);
	f__B518_0338_004F_0AE5(); return;
}

/**
 * Decompiled function f__B518_0333_0054_06BF()
 *
 * @name f__B518_0333_0054_06BF
 * @implements B518:0333:0054:06BF ()
 *
 * Called From: B518:032A:000D:FE86
 */
void f__B518_0333_0054_06BF()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x12), 0xD1);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x18));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_movw(&emu_ax.x, emu_si);
	emu_movw(&emu_dx.x, 0x24);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_dx.x, 0x9);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_pop(&emu_dx.x);
	emu_addw(&emu_dx.x, emu_ax.x);
	emu_addws(&emu_dx.x, 0x5D);
	emu_movw(&emu_di, emu_dx.x);
	emu_movw(&emu_bx.x, emu_si);
	emu_shlw(&emu_bx.x, 0x1);
	emu_addw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, emu_bp - 0x32);
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bx.x,  0x0));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), emu_ax.x);
	emu_movw(&emu_bx.x, emu_si);
	emu_shlw(&emu_bx.x, 0x1);
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, emu_bp - 0x30);
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bx.x,  0x0));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), 0x0);
	f__B518_045D_000B_841E(); return;
}

/**
 * Decompiled function f__B518_0338_004F_0AE5()
 *
 * @name f__B518_0338_004F_0AE5
 * @implements B518:0338:004F:0AE5 ()
 *
 * Called From: B518:0331:000D:FE86
 */
void f__B518_0338_004F_0AE5()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x18));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_movw(&emu_ax.x, emu_si);
	emu_movw(&emu_dx.x, 0x24);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_dx.x, 0x9);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_pop(&emu_dx.x);
	emu_addw(&emu_dx.x, emu_ax.x);
	emu_addws(&emu_dx.x, 0x5D);
	emu_movw(&emu_di, emu_dx.x);
	emu_movw(&emu_bx.x, emu_si);
	emu_shlw(&emu_bx.x, 0x1);
	emu_addw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, emu_bp - 0x32);
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bx.x,  0x0));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), emu_ax.x);
	emu_movw(&emu_bx.x, emu_si);
	emu_shlw(&emu_bx.x, 0x1);
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, emu_bp - 0x30);
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bx.x,  0x0));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), 0x0);
	f__B518_045D_000B_841E(); return;
}

/**
 * Decompiled function f__B518_0387_001D_945F()
 *
 * @name f__B518_0387_001D_945F
 * @implements B518:0387:001D:945F ()
 *
 * Called From: B518:0465:000B:841E
 * Called From: B518:0465:0015:4673
 */
void f__B518_0387_001D_945F()
{
	emu_movw(&emu_ax.x, 0xE2);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_di);
	emu_addw(&emu_ax.x, 0x5);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x12F);
	emu_push(emu_ax.x);
	emu_push(emu_di);
	emu_movw(&emu_ax.x, 0x10F);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x353F);
	emu_movw(&emu_es, emu_ax.x);

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_es, 0x00,  0x6668);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_es, 0x00,  0x666A);
	emu_push(0x03A4);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A60D31: f__22A6_0D31_0015_D6F0(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0xB518; emu_last_ip = 0x039F; emu_last_length = 0x001D; emu_last_crc = 0x945F;
			emu_call();
			return;
	}
	f__B518_03A4_0023_A70D();
}

/**
 * Decompiled function f__B518_03A4_0023_A70D()
 *
 * @name f__B518_03A4_0023_A70D
 * @implements B518:03A4:0023:A70D ()
 *
 * Called From: B518:03A4:001D:945F
 */
void f__B518_03A4_0023_A70D()
{
	emu_addws(&emu_sp, 0xA);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_movw(&emu_ax.x, 0x121);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x14);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_di);
	emu_decw(&emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x11F);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x2C3E);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x03C7); emu_cs = 0x10E4; f__10E4_1EF1_0040_E33D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_03C7_0008_F00E();
}

/**
 * Decompiled function f__B518_03C7_0008_F00E()
 *
 * @name f__B518_03C7_0008_F00E
 * @implements B518:03C7:0008:F00E ()
 *
 * Called From: B518:03C7:0023:A70D
 */
void f__B518_03C7_0008_F00E()
{
	emu_addws(&emu_sp, 0x10);
	emu_push(emu_cs);
	emu_push(0x03CF); f__B518_14F2_003E_63EE();
	f__B518_03CF_0026_1566();
}

/**
 * Decompiled function f__B518_03CF_0026_1566()
 *
 * @name f__B518_03CF_0026_1566
 * @implements B518:03CF:0026:1566 ()
 *
 * Called From: B518:03CF:0008:F00E
 */
void f__B518_03CF_0026_1566()
{
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x76B6), 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x76B4), 0x1);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_movw(&emu_ax.x, emu_di);
	emu_addw(&emu_ax.x, 0x5);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_di);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax.x, 0x353F);
	emu_movw(&emu_es, emu_ax.x);

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_es, 0x00,  0x6654);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_es, 0x00,  0x6656);
	emu_push(0x03F5);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A6094D: f__22A6_094D_000C_7956(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0xB518; emu_last_ip = 0x03F0; emu_last_length = 0x0026; emu_last_crc = 0x1566;
			emu_call();
			return;
	}
	f__B518_03F5_0024_19C4();
}

/**
 * Decompiled function f__B518_03F5_0024_19C4()
 *
 * @name f__B518_03F5_0024_19C4
 * @implements B518:03F5:0024:19C4 ()
 *
 * Called From: B518:03F5:0026:1566
 */
void f__B518_03F5_0024_19C4()
{
	emu_addws(&emu_sp, 0xA);
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax.x, 0xC);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_di);
	emu_addw(&emu_ax.x, 0x6);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax.x, emu_di);
	emu_incw(&emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax.x, 0x353F);
	emu_movw(&emu_es, emu_ax.x);

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_es, 0x00,  0x6654);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_es, 0x00,  0x6656);
	emu_push(0x0419);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A6094D: f__22A6_094D_000C_7956(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0xB518; emu_last_ip = 0x0414; emu_last_length = 0x0024; emu_last_crc = 0x19C4;
			emu_call();
			return;
	}
	f__B518_0419_0024_F53C();
}

/**
 * Decompiled function f__B518_0419_0024_F53C()
 *
 * @name f__B518_0419_0024_F53C
 * @implements B518:0419:0024:F53C ()
 *
 * Called From: B518:0419:0024:19C4
 */
void f__B518_0419_0024_F53C()
{
	emu_addws(&emu_sp, 0xA);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x7);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x130);
	emu_push(emu_ax.x);
	emu_push(emu_di);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x18));
	emu_push(emu_di);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x18));
	emu_movw(&emu_ax.x, 0x353F);
	emu_movw(&emu_es, emu_ax.x);

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_es, 0x00,  0x6624);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_es, 0x00,  0x6626);
	emu_push(0x043D);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A6034F: f__22A6_034F_000C_6447(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0xB518; emu_last_ip = 0x0438; emu_last_length = 0x0024; emu_last_crc = 0xF53C;
			emu_call();
			return;
	}
	f__B518_043D_000C_1779();
}

/**
 * Decompiled function f__B518_043D_000C_1779()
 *
 * @name f__B518_043D_000C_1779
 * @implements B518:043D:000C:1779 ()
 *
 * Called From: B518:043D:0024:F53C
 */
void f__B518_043D_000C_1779()
{
	emu_addws(&emu_sp, 0x10);
	emu_movw(&emu_ax.x, 0x34);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0449); emu_cs = 0x1DD7; f__1DD7_0477_000E_E978();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_0449_000A_FC04();
}

/**
 * Decompiled function f__B518_0449_000A_FC04()
 *
 * @name f__B518_0449_000A_FC04
 * @implements B518:0449:000A:FC04 ()
 *
 * Called From: B518:0449:000C:1779
 */
void f__B518_0449_000A_FC04()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x76B4));
	emu_push(emu_cs);
	emu_push(0x0453); f__B518_14D4_0013_44E0();
	f__B518_0453_0015_4673();
}

/**
 * Decompiled function f__B518_0453_0015_4673()
 *
 * @name f__B518_0453_0015_4673
 * @implements B518:0453:0015:4673 ()
 *
 * Called From: B518:0453:000A:FC04
 */
void f__B518_0453_0015_4673()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xE));
	if (!emu_flags.cf) { f__B518_0468_001D_945F(); return; }
	f__B518_0387_001D_945F(); return;
}

/**
 * Decompiled function f__B518_045D_000B_841E()
 *
 * @name f__B518_045D_000B_841E
 * @implements B518:045D:000B:841E ()
 *
 * Called From: B518:0384:004F:0AE5
 * Called From: B518:0384:0054:06BF
 */
void f__B518_045D_000B_841E()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xE));
	if (!emu_flags.cf) { f__B518_0468_001D_945F(); return; }
	f__B518_0387_001D_945F(); return;
}

/**
 * Decompiled function f__B518_0468_001D_945F()
 *
 * @name f__B518_0468_001D_945F
 * @implements B518:0468:001D:945F ()
 *
 * Called From: B518:0463:0015:4673
 * Called From: B518:0463:000B:841E
 */
void f__B518_0468_001D_945F()
{
	emu_movw(&emu_ax.x, 0xE2);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_di);
	emu_addw(&emu_ax.x, 0x5);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x12F);
	emu_push(emu_ax.x);
	emu_push(emu_di);
	emu_movw(&emu_ax.x, 0x10F);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x353F);
	emu_movw(&emu_es, emu_ax.x);

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_es, 0x00,  0x6668);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_es, 0x00,  0x666A);
	emu_push(0x0485);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A60D31: f__22A6_0D31_0015_D6F0(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0xB518; emu_last_ip = 0x0480; emu_last_length = 0x001D; emu_last_crc = 0x945F;
			emu_call();
			return;
	}
	f__B518_0485_0023_246C();
}

/**
 * Decompiled function f__B518_0485_0023_246C()
 *
 * @name f__B518_0485_0023_246C
 * @implements B518:0485:0023:246C ()
 *
 * Called From: B518:0485:001D:945F
 */
void f__B518_0485_0023_246C()
{
	emu_addws(&emu_sp, 0xA);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_movw(&emu_ax.x, 0x121);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0xF);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_di);
	emu_decw(&emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x11F);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x2C3E);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x04A8); emu_cs = 0x10E4; f__10E4_1EF1_0040_E33D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_04A8_0024_F554();
}

/**
 * Decompiled function f__B518_04A8_0024_F554()
 *
 * @name f__B518_04A8_0024_F554
 * @implements B518:04A8:0024:F554 ()
 *
 * Called From: B518:04A8:0023:246C
 */
void f__B518_04A8_0024_F554()
{
	emu_addws(&emu_sp, 0x10);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x7);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x130);
	emu_push(emu_ax.x);
	emu_push(emu_di);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x18));
	emu_push(emu_di);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x18));
	emu_movw(&emu_ax.x, 0x353F);
	emu_movw(&emu_es, emu_ax.x);

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_es, 0x00,  0x6624);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_es, 0x00,  0x6626);
	emu_push(0x04CC);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A6034F: f__22A6_034F_000C_6447(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0xB518; emu_last_ip = 0x04C7; emu_last_length = 0x0024; emu_last_crc = 0xF554;
			emu_call();
			return;
	}
	f__B518_04CC_000C_0579();
}

/**
 * Decompiled function f__B518_04CC_000C_0579()
 *
 * @name f__B518_04CC_000C_0579
 * @implements B518:04CC:000C:0579 ()
 *
 * Called From: B518:04CC:0024:F554
 */
void f__B518_04CC_000C_0579()
{
	emu_addws(&emu_sp, 0x10);
	emu_movw(&emu_ax.x, 0x26);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x04D8); emu_cs = 0x1DD7; f__1DD7_0477_000E_E978();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_04D8_000A_1A76();
}

/**
 * Decompiled function f__B518_04D8_000A_1A76()
 *
 * @name f__B518_04D8_000A_1A76
 * @implements B518:04D8:000A:1A76 ()
 *
 * Called From: B518:04D8:000C:0579
 */
void f__B518_04D8_000A_1A76()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_ax.x, 0xC);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x04E2); f__B518_14D4_0013_44E0();
	f__B518_04E2_000D_1668();
}

/**
 * Decompiled function f__B518_04E2_000D_1668()
 *
 * @name f__B518_04E2_000D_1668
 * @implements B518:04E2:000D:1668 ()
 *
 * Called From: B518:04E2:000A:1A76
 */
void f__B518_04E2_000D_1668()
{
	emu_pop(&emu_cx.x);
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x2);
	if (!(emu_flags.sf != emu_flags.of)) { f__B518_04EF_0009_4ECF(); return; }
	f__B518_0321_0005_16B2(); return;
}

/**
 * Decompiled function f__B518_04E6_0009_0E6D()
 *
 * @name f__B518_04E6_0009_0E6D
 * @implements B518:04E6:0009:0E6D ()
 *
 * Called From: B518:031E:0008:DFDE
 */
void f__B518_04E6_0009_0E6D()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x2);
	if (!(emu_flags.sf != emu_flags.of)) { emu_ip = 0x04EF; emu_last_cs = 0xB518; emu_last_ip = 0x04EA; emu_last_length = 0x0009; emu_last_crc = 0x0E6D; emu_call(); return; } // Jump does not resolve
	f__B518_0321_0005_16B2(); return;
}

/**
 * Decompiled function f__B518_04EF_0009_4ECF()
 *
 * @name f__B518_04EF_0009_4ECF
 * @implements B518:04EF:0009:4ECF ()
 *
 * Called From: B518:04EA:000D:1668
 */
void f__B518_04EF_0009_4ECF()
{
	emu_movw(&emu_ax.x, 0x3C);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x04F8); f__B518_14D4_0013_44E0();
	f__B518_04F8_000A_DBED();
}

/**
 * Decompiled function f__B518_04F8_000A_DBED()
 *
 * @name f__B518_04F8_000A_DBED
 * @implements B518:04F8:000A:DBED ()
 *
 * Called From: B518:04F8:0009:4ECF
 */
void f__B518_04F8_000A_DBED()
{
	emu_pop(&emu_cx.x);
	emu_incw(&emu_si);
	emu_cmpw(&emu_si, emu_get_memory16(emu_ss, emu_bp, -0x16));
	if (!(emu_flags.sf != emu_flags.of)) { f__B518_0502_0005_143E(); return; }
	f__B518_0314_0005_16E6(); return;
}

/**
 * Decompiled function f__B518_04FA_0008_33EC()
 *
 * @name f__B518_04FA_0008_33EC
 * @implements B518:04FA:0008:33EC ()
 *
 * Called From: B518:0311:0006:1B92
 */
void f__B518_04FA_0008_33EC()
{
	emu_cmpw(&emu_si, emu_get_memory16(emu_ss, emu_bp, -0x16));
	if (!(emu_flags.sf != emu_flags.of)) { emu_ip = 0x0502; emu_last_cs = 0xB518; emu_last_ip = 0x04FD; emu_last_length = 0x0008; emu_last_crc = 0x33EC; emu_call(); return; } // Jump does not resolve
	f__B518_0314_0005_16E6(); return;
}

/**
 * Decompiled function f__B518_0502_0005_143E()
 *
 * @name f__B518_0502_0005_143E
 * @implements B518:0502:0005:143E ()
 *
 * Called From: B518:04FD:000A:DBED
 */
void f__B518_0502_0005_143E()
{
	emu_push(emu_cs); emu_push(0x0507); emu_cs = 0x2B6C; f__2B6C_0169_001E_97C8();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_0507_0005_137A();
}

/**
 * Decompiled function f__B518_0507_0005_137A()
 *
 * @name f__B518_0507_0005_137A
 * @implements B518:0507:0005:137A ()
 *
 * Called From: B518:0507:0005:143E
 */
void f__B518_0507_0005_137A()
{
	emu_push(emu_cs); emu_push(0x050C); emu_cs = 0x29E8; f__29E8_073F_000E_A6E4();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_050C_0005_163A();
}

/**
 * Decompiled function f__B518_050C_0005_163A()
 *
 * @name f__B518_050C_0005_163A
 * @implements B518:050C:0005:163A ()
 *
 * Called From: B518:050C:0005:137A
 * Called From: B518:0518:0009:C3FA
 */
void f__B518_050C_0005_163A()
{
	emu_push(emu_cs);
	emu_push(0x0511); f__B518_14F2_003E_63EE();
	f__B518_0511_0005_14B2();
}

/**
 * Decompiled function f__B518_0511_0005_14B2()
 *
 * @name f__B518_0511_0005_14B2
 * @implements B518:0511:0005:14B2 ()
 *
 * Called From: B518:0511:0005:163A
 */
void f__B518_0511_0005_14B2()
{
	emu_push(emu_cs); emu_push(0x0516); emu_cs = 0x29E8; f__29E8_0643_0008_40B8();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_0516_0009_C3FA();
}

/**
 * Decompiled function f__B518_0516_0009_C3FA()
 *
 * @name f__B518_0516_0009_C3FA
 * @implements B518:0516:0009:C3FA ()
 *
 * Called From: B518:0516:0005:14B2
 */
void f__B518_0516_0009_C3FA()
{
	emu_orw(&emu_ax.x, emu_ax.x);
	if (emu_flags.zf) { f__B518_050C_0005_163A(); return; }
	emu_push(emu_cs); emu_push(0x051F); emu_cs = 0x29E8; f__29E8_073F_000E_A6E4();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_051F_0008_D5E4();
}

/**
 * Decompiled function f__B518_051F_0008_D5E4()
 *
 * @name f__B518_051F_0008_D5E4
 * @implements B518:051F:0008:D5E4 ()
 *
 * Called From: B518:051F:0009:C3FA
 */
void f__B518_051F_0008_D5E4()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x12));
	emu_push(emu_cs);
	emu_push(0x0527); f__B518_0558_0010_266B();
	f__B518_0527_001A_DA41();
}

/**
 * Decompiled function f__B518_0527_001A_DA41()
 *
 * @name f__B518_0527_001A_DA41
 * @implements B518:0527:001A:DA41 ()
 *
 * Called From: B518:0527:0008:D5E4
 */
void f__B518_0527_001A_DA41()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_ax.x, 0x3);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x81E8);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3C32));
	emu_addw(&emu_ax.x, 0x2FD);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3C34));
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0541); emu_cs = 0x01F7; f__01F7_28B8_0024_D407();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_0541_000B_F26D();
}

/**
 * Decompiled function f__B518_0541_000B_F26D()
 *
 * @name f__B518_0541_000B_F26D
 * @implements B518:0541:000B:F26D ()
 *
 * Called From: B518:0541:001A:DA41
 */
void f__B518_0541_000B_F26D()
{
	emu_addws(&emu_sp, 0xA);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_push(emu_cs); emu_push(0x054C); emu_cs = 0x2598; f__2598_0000_0017_D681();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_054C_0006_030E();
}

/**
 * Decompiled function f__B518_054C_0006_030E()
 *
 * @name f__B518_054C_0006_030E
 * @implements B518:054C:0006:030E ()
 *
 * Called From: B518:054C:000B:F26D
 */
void f__B518_054C_0006_030E()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_cs); emu_push(0x0552); emu_cs = 0x1DD7; f__1DD7_0B53_0025_71E0();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_0552_0006_137A();
}

/**
 * Decompiled function f__B518_0552_0006_137A()
 *
 * @name f__B518_0552_0006_137A
 * @implements B518:0552:0006:137A ()
 *
 * Called From: B518:0552:0006:030E
 */
void f__B518_0552_0006_137A()
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
 * Decompiled function f__B518_0558_0010_266B()
 *
 * @name f__B518_0558_0010_266B
 * @implements B518:0558:0010:266B ()
 *
 * Called From: 3518:0025:0005:1B52
 * Called From: 3518:0025:0005:187E
 * Called From: B518:0524:0008:D5E4
 */
void f__B518_0558_0010_266B()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x2A);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x0568); emu_cs = 0x2B6C; f__2B6C_0137_0020_17E5();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_0568_000F_1135();
}

/**
 * Decompiled function f__B518_0568_000F_1135()
 *
 * @name f__B518_0568_000F_1135
 * @implements B518:0568:000F:1135 ()
 *
 * Called From: B518:0568:0010:266B
 */
void f__B518_0568_000F_1135()
{
	emu_cmpws(&emu_si, 0xFF);
	if (!emu_flags.zf) { f__B518_058B_0009_72A3(); return; }
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x2C41);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0577); emu_cs = 0x1FB5; f__1FB5_15B5_0015_6875();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_0577_000B_56BD();
}

/**
 * Decompiled function f__B518_0577_000B_56BD()
 *
 * @name f__B518_0577_000B_56BD
 * @implements B518:0577:000B:56BD ()
 *
 * Called From: B518:0577:000F:1135
 */
void f__B518_0577_000B_56BD()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.zf) { f__B518_0585_000F_02D4(); return; }
	emu_push(emu_cs); emu_push(0x0582); emu_cs = 0x2B6C; emu_ip = 0x06EB; emu_last_cs = 0xB518; emu_last_ip = 0x057D; emu_last_length = 0x000B; emu_last_crc = 0x56BD; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__B518_0585_000F_02D4()
 *
 * @name f__B518_0585_000F_02D4
 * @implements B518:0585:000F:02D4 ()
 *
 * Called From: B518:057B:000B:56BD
 */
void f__B518_0585_000F_02D4()
{
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x7E15), 0x0);
	emu_movw(&emu_ax.x, 0x5);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0594); emu_cs = 0x252E; f__252E_0001_0018_48C0();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_0594_0011_C16E();
}

/**
 * Decompiled function f__B518_058B_0009_72A3()
 *
 * @name f__B518_058B_0009_72A3
 * @implements B518:058B:0009:72A3 ()
 *
 * Called From: B518:056B:000F:1135
 */
void f__B518_058B_0009_72A3()
{
	emu_movw(&emu_ax.x, 0x5);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0594); emu_cs = 0x252E; f__252E_0001_0018_48C0();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_0594_0011_C16E();
}

/**
 * Decompiled function f__B518_0594_0011_C16E()
 *
 * @name f__B518_0594_0011_C16E
 * @implements B518:0594:0011:C16E ()
 *
 * Called From: B518:0594:000F:02D4
 * Called From: B518:0594:0009:72A3
 */
void f__B518_0594_0011_C16E()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x2C41);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x05A5); emu_cs = 0x1FB5; f__1FB5_15B5_0015_6875();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_05A5_0018_9FA8();
}

/**
 * Decompiled function f__B518_05A5_0018_9FA8()
 *
 * @name f__B518_05A5_0018_9FA8
 * @implements B518:05A5:0018:9FA8 ()
 *
 * Called From: B518:05A5:0011:C16E
 */
void f__B518_05A5_0018_9FA8()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.zf) { f__B518_0613_0017_3F3F(); return; }
	emu_movw(&emu_ax.x, 0x80);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_cs); emu_push(0x05BD); emu_cs = 0x01F7; emu_ip = 0x2F04; emu_last_cs = 0xB518; emu_last_ip = 0x05B8; emu_last_length = 0x0018; emu_last_crc = 0x9FA8; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__B518_0613_0017_3F3F()
 *
 * @name f__B518_0613_0017_3F3F
 * @implements B518:0613:0017:3F3F ()
 *
 * Called From: B518:05A9:0018:9FA8
 */
void f__B518_0613_0017_3F3F()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_movw(&emu_dx.x, 0x80);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x2C41);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x062A); emu_cs = 0x253D; f__253D_0000_0013_AAD7();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_062A_000E_B6C5();
}

/**
 * Decompiled function f__B518_062A_000E_B6C5()
 *
 * @name f__B518_062A_000E_B6C5
 * @implements B518:062A:000E:B6C5 ()
 *
 * Called From: B518:062A:0017:3F3F
 */
void f__B518_062A_000E_B6C5()
{
	emu_addws(&emu_sp, 0xC);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_cs);
	emu_push(0x0638); f__B518_15A9_0016_239A();
	f__B518_0638_000C_9149();
}

/**
 * Decompiled function f__B518_0638_000C_9149()
 *
 * @name f__B518_0638_000C_9149
 * @implements B518:0638:000C:9149 ()
 *
 * Called From: B518:0638:000E:B6C5
 */
void f__B518_0638_000C_9149()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_push(emu_si);
	emu_push(emu_cs);
	emu_push(0x0644); f__B518_0B1D_0014_0C28();
	f__B518_0644_000E_DE19();
}

/**
 * Decompiled function f__B518_0644_000E_DE19()
 *
 * @name f__B518_0644_000E_DE19
 * @implements B518:0644:000E:DE19 ()
 *
 * Called From: B518:0644:000C:9149
 */
void f__B518_0644_000E_DE19()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_cmpws(&emu_si, 0xFF);
	if (!emu_flags.zf) { f__B518_0652_000C_56CE(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), 0x0);
	f__B518_0664_000E_F670(); return;
}

/**
 * Decompiled function f__B518_0652_000C_56CE()
 *
 * @name f__B518_0652_000C_56CE
 * @implements B518:0652:000C:56CE ()
 *
 * Called From: B518:0649:000E:DE19
 */
void f__B518_0652_000C_56CE()
{
	emu_push(emu_si);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_cs);
	emu_push(0x065E); f__B518_10DC_0011_8A9C();
	f__B518_065E_0014_F956();
}

/**
 * Decompiled function f__B518_065E_0014_F956()
 *
 * @name f__B518_065E_0014_F956
 * @implements B518:065E:0014:F956 ()
 *
 * Called From: B518:065E:000C:56CE
 */
void f__B518_065E_0014_F956()
{
	emu_addws(&emu_sp, 0x6);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_cs);
	emu_push(0x0672); f__B518_11C6_0011_5B02();
	f__B518_0672_0026_4B19();
}

/**
 * Decompiled function f__B518_0664_000E_F670()
 *
 * @name f__B518_0664_000E_F670
 * @implements B518:0664:000E:F670 ()
 *
 * Called From: B518:0650:000E:DE19
 */
void f__B518_0664_000E_F670()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_cs);
	emu_push(0x0672); f__B518_11C6_0011_5B02();
	f__B518_0672_0026_4B19();
}

/**
 * Decompiled function f__B518_0672_0026_4B19()
 *
 * @name f__B518_0672_0026_4B19
 * @implements B518:0672:0026:4B19 ()
 *
 * Called From: B518:0672:000E:F670
 * Called From: B518:0672:0014:F956
 */
void f__B518_0672_0026_4B19()
{
	emu_addws(&emu_sp, 0x6);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
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
	emu_push(emu_cs); emu_push(0x0698); emu_cs = 0x24D0; f__24D0_000D_0039_9224();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_0698_000C_5A29();
}

/**
 * Decompiled function f__B518_0698_000C_5A29()
 *
 * @name f__B518_0698_000C_5A29
 * @implements B518:0698:000C:5A29 ()
 *
 * Called From: B518:0698:0026:4B19
 */
void f__B518_0698_000C_5A29()
{
	emu_addws(&emu_sp, 0x10);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0xC), 0x0);
	if (!emu_flags.zf) { f__B518_06A4_0029_5839(); return; }
	f__B518_0823_0005_143E(); return;
}

/**
 * Decompiled function f__B518_06A4_0029_5839()
 *
 * @name f__B518_06A4_0029_5839
 * @implements B518:06A4:0029:5839 ()
 *
 * Called From: B518:069F:000C:5A29
 */
void f__B518_06A4_0029_5839()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_decw(&emu_ax.x);
	emu_movb(&emu_cx.l, 0x4);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_bx.x);
	emu_movw(&emu_ax.x, 0x10);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x4192);
	emu_push(emu_ax.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0x2A);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x06CD); emu_cs = 0x01F7; f__01F7_28B8_0024_D407();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_06CD_004F_9A17();
}

/**
 * Decompiled function f__B518_06CD_004F_9A17()
 *
 * @name f__B518_06CD_004F_9A17
 * @implements B518:06CD:004F:9A17 ()
 *
 * Called From: B518:06CD:0029:5839
 */
void f__B518_06CD_004F_9A17()
{
	emu_addws(&emu_sp, 0xA);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x4192), 0x4);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_decw(&emu_ax.x);
	emu_movw(&emu_dx.x, 0xB);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_addw(&emu_ax.x, 0x5A);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x4194), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movb(&emu_cx.l, 0x3);
	emu_sarw(&emu_ax.x, emu_cx.l);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x4196), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x4198), 0xB);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x419A), 0x6);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x419C), 0x74);
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
	emu_push(emu_cs); emu_push(0x071C); emu_cs = 0x10E4; f__10E4_1EF1_0040_E33D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_071C_0006_3DC8();
}

/**
 * Decompiled function f__B518_071C_0006_3DC8()
 *
 * @name f__B518_071C_0006_3DC8
 * @implements B518:071C:0006:3DC8 ()
 *
 * Called From: B518:071C:004F:9A17
 */
void f__B518_071C_0006_3DC8()
{
	emu_addws(&emu_sp, 0xE);
	f__B518_07AA_000E_1238(); return;
}

/**
 * Decompiled function f__B518_0722_0008_566A()
 *
 * @name f__B518_0722_0008_566A
 * @implements B518:0722:0008:566A ()
 *
 * Called From: B518:07B5:000E:1238
 */
void f__B518_0722_0008_566A()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x072A); emu_cs = 0x2598; f__2598_0000_0017_D681();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_072A_000D_70B5();
}

/**
 * Decompiled function f__B518_072A_000D_70B5()
 *
 * @name f__B518_072A_000D_70B5
 * @implements B518:072A:000D:70B5 ()
 *
 * Called From: B518:072A:0008:566A
 */
void f__B518_072A_000D_70B5()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x1A), emu_ax.x);
	emu_movw(&emu_ax.x, 0x13);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0737); emu_cs = 0x07AE; f__07AE_00E4_000D_C2A4();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_0737_0009_5EEA();
}

/**
 * Decompiled function f__B518_0737_0009_5EEA()
 *
 * @name f__B518_0737_0009_5EEA
 * @implements B518:0737:0009:5EEA ()
 *
 * Called From: B518:0737:000D:70B5
 */
void f__B518_0737_0009_5EEA()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x1A));
	emu_push(emu_cs); emu_push(0x0740); emu_cs = 0x2598; f__2598_0000_0017_D681();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_0740_0025_57B3();
}

/**
 * Decompiled function f__B518_0740_0025_57B3()
 *
 * @name f__B518_0740_0025_57B3
 * @implements B518:0740:0025:57B3 ()
 *
 * Called From: B518:0740:0009:5EEA
 */
void f__B518_0740_0025_57B3()
{
	emu_pop(&emu_cx.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x3518);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x66);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_movw(&emu_ax.x, 0x13);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x5);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_cs); emu_push(0x0765); emu_cs = 0x3527; ovl__3527(0);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_0765_0017_DDF7();
}

/**
 * Decompiled function f__B518_0765_0017_DDF7()
 *
 * @name f__B518_0765_0017_DDF7
 * @implements B518:0765:0017:DDF7 ()
 *
 * Called From: B518:0765:0025:57B3
 */
void f__B518_0765_0017_DDF7()
{
	emu_addws(&emu_sp, 0x12);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0x0);
	if (emu_flags.zf) { f__B518_07AA_000E_1238(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_cs); emu_push(0x077C); emu_cs = 0x01F7; f__01F7_39A5_001F_856D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_077C_0013_0708();
}

/**
 * Decompiled function f__B518_077C_0013_0708()
 *
 * @name f__B518_077C_0013_0708
 * @implements B518:077C:0013:0708 ()
 *
 * Called From: B518:077C:0017:DDF7
 */
void f__B518_077C_0013_0708()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_decw(&emu_ax.x);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x16), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x18), emu_bx.x);
	f__B518_0799_001F_98FB(); return;
}

/**
 * Decompiled function f__B518_0799_001F_98FB()
 *
 * @name f__B518_0799_001F_98FB
 * @implements B518:0799:001F:98FB ()
 *
 * Called From: B518:078D:0013:0708
 */
void f__B518_0799_001F_98FB()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x18));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0x20);
	if (!(emu_flags.cf || emu_flags.zf)) { f__B518_07AA_000E_1238(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x18));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xA));
	if (!emu_flags.cf) { emu_ip = 0x078F; emu_last_cs = 0xB518; emu_last_ip = 0x07A8; emu_last_length = 0x001F; emu_last_crc = 0x98FB; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x0));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.zf) { emu_ip = 0x07B8; emu_last_cs = 0xB518; emu_last_ip = 0x07B3; emu_last_length = 0x001F; emu_last_crc = 0x98FB; emu_call(); return; } // Jump does not resolve
	emu_ip = 0x0722; emu_last_cs = 0xB518; emu_last_ip = 0x07B5; emu_last_length = 0x001F; emu_last_crc = 0x98FB; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B518_07AA_000E_1238()
 *
 * @name f__B518_07AA_000E_1238
 * @implements B518:07AA:000E:1238 ()
 *
 * Called From: B518:071F:0006:3DC8
 * Called From: B518:076F:0017:DDF7
 * Called From: B518:07A0:001F:98FB
 */
void f__B518_07AA_000E_1238()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x0));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.zf) { f__B518_07B8_0013_D120(); return; }
	f__B518_0722_0008_566A(); return;
}

/**
 * Decompiled function f__B518_07B8_0013_D120()
 *
 * @name f__B518_07B8_0013_D120
 * @implements B518:07B8:0013:D120 ()
 *
 * Called From: B518:07B3:000E:1238
 */
void f__B518_07B8_0013_D120()
{
	emu_movw(&emu_ax.x, 0x10);
	emu_push(emu_ax.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0x2A);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x4192);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x07CB); emu_cs = 0x01F7; f__01F7_28B8_0024_D407();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_07CB_0012_7746();
}

/**
 * Decompiled function f__B518_07CB_0012_7746()
 *
 * @name f__B518_07CB_0012_7746
 * @implements B518:07CB:0012:7746 ()
 *
 * Called From: B518:07CB:0013:D120
 */
void f__B518_07CB_0012_7746()
{
	emu_addws(&emu_sp, 0xA);
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_cs);
	emu_push(0x07DD); f__B518_11C6_0011_5B02();
	f__B518_07DD_000E_1511();
}

/**
 * Decompiled function f__B518_07DD_000E_1511()
 *
 * @name f__B518_07DD_000E_1511
 * @implements B518:07DD:000E:1511 ()
 *
 * Called From: B518:07DD:0012:7746
 */
void f__B518_07DD_000E_1511()
{
	emu_addws(&emu_sp, 0x6);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_cs);
	emu_push(0x07EB); f__B518_1570_0016_239A();
	f__B518_07EB_0010_155A();
}

/**
 * Decompiled function f__B518_07EB_0010_155A()
 *
 * @name f__B518_07EB_0010_155A
 * @implements B518:07EB:0010:155A ()
 *
 * Called From: B518:07EB:000E:1511
 */
void f__B518_07EB_0010_155A()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x2C41);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x07FB); emu_cs = 0x1FB5; f__1FB5_01FA_0010_D47C();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_07FB_0018_F5C6();
}

/**
 * Decompiled function f__B518_07FB_0018_F5C6()
 *
 * @name f__B518_07FB_0018_F5C6
 * @implements B518:07FB:0018:F5C6 ()
 *
 * Called From: B518:07FB:0010:155A
 */
void f__B518_07FB_0018_F5C6()
{
	emu_addws(&emu_sp, 0x6);
	emu_movw(&emu_di, emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_movw(&emu_dx.x, 0x80);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x0813); emu_cs = 0x1FB5; f__1FB5_0E9C_001B_711F();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_0813_000F_0C2B();
}

/**
 * Decompiled function f__B518_0813_000F_0C2B()
 *
 * @name f__B518_0813_000F_0C2B
 * @implements B518:0813:000F:0C2B ()
 *
 * Called From: B518:0813:0018:F5C6
 */
void f__B518_0813_000F_0C2B()
{
	emu_addws(&emu_sp, 0xA);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), emu_ax.x);
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x0822); emu_cs = 0x1FB5; f__1FB5_09C7_0018_F3A8();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_0822_0006_027E();
}

/**
 * Decompiled function f__B518_0822_0006_027E()
 *
 * @name f__B518_0822_0006_027E
 * @implements B518:0822:0006:027E ()
 *
 * Called From: B518:0822:000F:0C2B
 */
void f__B518_0822_0006_027E()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_cs); emu_push(0x0828); emu_cs = 0x2B6C; f__2B6C_0169_001E_97C8();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_0828_000B_3683();
}

/**
 * Decompiled function f__B518_0823_0005_143E()
 *
 * @name f__B518_0823_0005_143E
 * @implements B518:0823:0005:143E ()
 *
 * Called From: B518:06A1:000C:5A29
 */
void f__B518_0823_0005_143E()
{
	emu_push(emu_cs); emu_push(0x0828); emu_cs = 0x2B6C; f__2B6C_0169_001E_97C8();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_0828_000B_3683();
}

/**
 * Decompiled function f__B518_0828_000B_3683()
 *
 * @name f__B518_0828_000B_3683
 * @implements B518:0828:000B:3683 ()
 *
 * Called From: B518:0828:0005:143E
 * Called From: B518:0828:0006:027E
 */
void f__B518_0828_000B_3683()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_cs);
	emu_push(0x0833); f__B518_089C_001A_022F();
	f__B518_0833_000D_FE70();
}

/**
 * Decompiled function f__B518_0833_000D_FE70()
 *
 * @name f__B518_0833_000D_FE70
 * @implements B518:0833:000D:FE70 ()
 *
 * Called From: B518:0833:000B:3683
 */
void f__B518_0833_000D_FE70()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x12), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x14), emu_ax.x);
	emu_push(emu_cs); emu_push(0x0840); emu_cs = 0x29E8; f__29E8_073F_000E_A6E4();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_0840_0008_566A();
}

/**
 * Decompiled function f__B518_0840_0008_566A()
 *
 * @name f__B518_0840_0008_566A
 * @implements B518:0840:0008:566A ()
 *
 * Called From: B518:0840:000D:FE70
 */
void f__B518_0840_0008_566A()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0848); emu_cs = 0x2598; f__2598_0000_0017_D681();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_0848_0012_50B8();
}

/**
 * Decompiled function f__B518_0848_0012_50B8()
 *
 * @name f__B518_0848_0012_50B8
 * @implements B518:0848:0012:50B8 ()
 *
 * Called From: B518:0848:0008:566A
 */
void f__B518_0848_0012_50B8()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x7E1A), 0x0);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_push(emu_cs); emu_push(0x085A); emu_cs = 0x34A2; ovl__34A2(2);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_085A_0014_D06B();
}

/**
 * Decompiled function f__B518_084F_000B_1007()
 *
 * @name f__B518_084F_000B_1007
 * @implements B518:084F:000B:1007 ()
 *
 * Called From: B518:0861:0014:D06B
 */
void f__B518_084F_000B_1007()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_push(emu_cs); emu_push(0x085A); emu_cs = 0x34A2; ovl__34A2(2);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_085A_0014_D06B();
}

/**
 * Decompiled function f__B518_085A_0014_D06B()
 *
 * @name f__B518_085A_0014_D06B
 * @implements B518:085A:0014:D06B ()
 *
 * Called From: B518:085A:0012:50B8
 * Called From: B518:085A:000B:1007
 */
void f__B518_085A_0014_D06B()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00, -0x7E1A), 0x0);
	if (emu_flags.zf) { f__B518_084F_000B_1007(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_push(emu_cs);
	emu_push(0x086E); f__B518_0A3E_0008_36FE();
	f__B518_086E_0007_29BA();
}

/**
 * Decompiled function f__B518_086E_0007_29BA()
 *
 * @name f__B518_086E_0007_29BA
 * @implements B518:086E:0007:29BA ()
 *
 * Called From: B518:086E:0014:D06B
 */
void f__B518_086E_0007_29BA()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_push(emu_cs); emu_push(0x0875); emu_cs = 0x29E8; f__29E8_073F_000E_A6E4();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_0875_001E_9E73();
}

/**
 * Decompiled function f__B518_0875_001E_9E73()
 *
 * @name f__B518_0875_001E_9E73
 * @implements B518:0875:001E:9E73 ()
 *
 * Called From: B518:0875:0007:29BA
 */
void f__B518_0875_001E_9E73()
{
	emu_cmpws(&emu_si, 0xFF);
	if (emu_flags.zf) { f__B518_0896_0006_137A(); return; }
	emu_movw(&emu_ax.x, 0x3);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x81E8);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3C32));
	emu_addw(&emu_ax.x, 0x2FD);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3C34));
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0893); emu_cs = 0x01F7; f__01F7_28B8_0024_D407();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_0893_0009_D47B();
}

/**
 * Decompiled function f__B518_0893_0009_D47B()
 *
 * @name f__B518_0893_0009_D47B
 * @implements B518:0893:0009:D47B ()
 *
 * Called From: B518:0893:001E:9E73
 */
void f__B518_0893_0009_D47B()
{
	emu_addws(&emu_sp, 0xA);
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
 * Decompiled function f__B518_0896_0006_137A()
 *
 * @name f__B518_0896_0006_137A
 * @implements B518:0896:0006:137A ()
 *
 * Called From: B518:0878:001E:9E73
 */
void f__B518_0896_0006_137A()
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
 * Decompiled function f__B518_089C_001A_022F()
 *
 * @name f__B518_089C_001A_022F
 * @implements B518:089C:001A:022F ()
 *
 * Called From: B518:0830:000B:3683
 */
void f__B518_089C_001A_022F()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x8);
	emu_push(emu_si);
	emu_movw(&emu_ax.x, 0x28);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x3604);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x81F1);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x08B6); emu_cs = 0x01F7; f__01F7_28B8_0024_D407();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_08B6_0016_64AC();
}

/**
 * Decompiled function f__B518_08B6_0016_64AC()
 *
 * @name f__B518_08B6_0016_64AC
 * @implements B518:08B6:0016:64AC ()
 *
 * Called From: B518:08B6:001A:022F
 */
void f__B518_08B6_0016_64AC()
{
	emu_addws(&emu_sp, 0xA);
	emu_movw(&emu_ax.x, 0x28);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x2C10);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x3604);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x08CC); emu_cs = 0x01F7; f__01F7_28B8_0024_D407();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_08CC_000C_0E0D();
}

/**
 * Decompiled function f__B518_08CC_000C_0E0D()
 *
 * @name f__B518_08CC_000C_0E0D
 * @implements B518:08CC:000C:0E0D ()
 *
 * Called From: B518:08CC:0016:64AC
 */
void f__B518_08CC_000C_0E0D()
{
	emu_addws(&emu_sp, 0xA);
	emu_movw(&emu_ax.x, 0x147);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x08D8); emu_cs = 0x0FCB; f__0FCB_005F_001C_147D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_08D8_0008_74DE();
}

/**
 * Decompiled function f__B518_08D8_0008_74DE()
 *
 * @name f__B518_08D8_0008_74DE
 * @implements B518:08D8:0008:74DE ()
 *
 * Called From: B518:08D8:000C:0E0D
 */
void f__B518_08D8_0008_74DE()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x08E0); emu_cs = 0x2521; f__2521_0035_0015_2811();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_08E0_000C_2F05();
}

/**
 * Decompiled function f__B518_08E0_000C_2F05()
 *
 * @name f__B518_08E0_000C_2F05
 * @implements B518:08E0:000C:2F05 ()
 *
 * Called From: B518:08E0:0008:74DE
 */
void f__B518_08E0_000C_2F05()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x146);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x08EC); emu_cs = 0x0FCB; f__0FCB_005F_001C_147D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_08EC_0008_74DE();
}

/**
 * Decompiled function f__B518_08EC_0008_74DE()
 *
 * @name f__B518_08EC_0008_74DE
 * @implements B518:08EC:0008:74DE ()
 *
 * Called From: B518:08EC:000C:2F05
 */
void f__B518_08EC_0008_74DE()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x08F4); emu_cs = 0x2521; f__2521_0035_0015_2811();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_08F4_0010_B269();
}

/**
 * Decompiled function f__B518_08F4_0010_B269()
 *
 * @name f__B518_08F4_0010_B269
 * @implements B518:08F4:0010:B269 ()
 *
 * Called From: B518:08F4:0008:74DE
 */
void f__B518_08F4_0010_B269()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_pop(&emu_dx.x);
	emu_cmpw(&emu_dx.x, emu_ax.x);
	if ((emu_flags.cf || emu_flags.zf)) { f__B518_0910_0009_3703(); return; }
	emu_movw(&emu_ax.x, 0x147);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0904); emu_cs = 0x0FCB; emu_ip = 0x0963; emu_last_cs = 0xB518; emu_last_ip = 0x08FF; emu_last_length = 0x0010; emu_last_crc = 0xB269; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__B518_0910_0009_3703()
 *
 * @name f__B518_0910_0009_3703
 * @implements B518:0910:0009:3703 ()
 *
 * Called From: B518:08F9:0010:B269
 */
void f__B518_0910_0009_3703()
{
	emu_movw(&emu_ax.x, 0x146);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0919); emu_cs = 0x0FCB; f__0FCB_005F_001C_147D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_0919_0008_74DE();
}

/**
 * Decompiled function f__B518_0919_0008_74DE()
 *
 * @name f__B518_0919_0008_74DE
 * @implements B518:0919:0008:74DE ()
 *
 * Called From: B518:0919:0009:3703
 */
void f__B518_0919_0008_74DE()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0921); emu_cs = 0x2521; f__2521_0035_0015_2811();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_0921_002A_8804();
}

/**
 * Decompiled function f__B518_0921_002A_8804()
 *
 * @name f__B518_0921_002A_8804
 * @implements B518:0921:002A:8804 ()
 *
 * Called From: B518:0921:0008:74DE
 */
void f__B518_0921_002A_8804()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_addw(&emu_ax.x, 0x6);
	emu_movw(&emu_si, emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x147);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0xFFFE);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0xB4);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_si);
	emu_addw(&emu_ax.x, 0x12);
	emu_movw(&emu_dx.x, 0xA0);
	emu_subw(&emu_dx.x, emu_ax.x);
	emu_push(emu_dx.x);
	emu_movw(&emu_ax.x, 0x147);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x094B); emu_cs = 0x0FCB; f__0FCB_005F_001C_147D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_094B_0013_226F();
}

/**
 * Decompiled function f__B518_094B_0013_226F()
 *
 * @name f__B518_094B_0013_226F
 * @implements B518:094B:0013:226F ()
 *
 * Called From: B518:094B:002A:8804
 */
void f__B518_094B_0013_226F()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_es, emu_dx.x);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x0));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x64);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x095E); emu_cs = 0x34B8; ovl__34B8(0);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_095E_0064_1E99();
}

/**
 * Decompiled function f__B518_095E_0064_1E99()
 *
 * @name f__B518_095E_0064_1E99
 * @implements B518:095E:0064:1E99 ()
 *
 * Called From: 261F:01B9:001B:DA28
 */
void f__B518_095E_0064_1E99()
{
	emu_addws(&emu_sp, 0xE);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x22), emu_si);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x24), 0xA);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x32), 0x3518);
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x30), 0x34);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0xE), 0x44C5);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x36), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x34), emu_dx.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x146);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0xFFFE);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0xB4);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0xB2);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x146);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x09C2); emu_cs = 0x0FCB; f__0FCB_005F_001C_147D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_09C2_0013_236F();
}

/**
 * Decompiled function f__B518_09C2_0013_236F()
 *
 * @name f__B518_09C2_0013_236F
 * @implements B518:09C2:0013:236F ()
 *
 * Called From: B518:09C2:0064:1E99
 */
void f__B518_09C2_0013_236F()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_es, emu_dx.x);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x0));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x65);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x09D5); emu_cs = 0x34B8; ovl__34B8(0);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_09D5_0053_0DB7();
}

/**
 * Decompiled function f__B518_09D5_0053_0DB7()
 *
 * @name f__B518_09D5_0053_0DB7
 * @implements B518:09D5:0053:0DB7 ()
 *
 * Called From: B518:09D5:0013:236F
 */
void f__B518_09D5_0053_0DB7()
{
	emu_addws(&emu_sp, 0xE);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x22), emu_si);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x24), 0xA);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x32), 0x3518);
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x30), 0x39);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0xE), 0x44C5);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x36), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x34), emu_dx.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs); emu_push(0x0A28); emu_cs = 0x348B; ovl__348B(6);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_0A28_0011_0E09();
}

/**
 * Decompiled function f__B518_0A28_0011_0E09()
 *
 * @name f__B518_0A28_0011_0E09
 * @implements B518:0A28:0011:0E09 ()
 *
 * Called From: B518:0A28:0053:0DB7
 */
void f__B518_0A28_0011_0E09()
{
	emu_addws(&emu_sp, 0x8);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax.x);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	f__B518_0A39_0005_04BA(); return;
}

/**
 * Decompiled function f__B518_0A39_0005_04BA()
 *
 * @name f__B518_0A39_0005_04BA
 * @implements B518:0A39:0005:04BA ()
 *
 * Called From: B518:0A37:0011:0E09
 */
void f__B518_0A39_0005_04BA()
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
 * Decompiled function f__B518_0A3E_0008_36FE()
 *
 * @name f__B518_0A3E_0008_36FE
 * @implements B518:0A3E:0008:36FE ()
 *
 * Called From: B518:086B:0014:D06B
 */
void f__B518_0A3E_0008_36FE()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x4);
	f__B518_0A6F_001B_C80F(); return;
}

/**
 * Decompiled function f__B518_0A46_0027_E4A2()
 *
 * @name f__B518_0A46_0027_E4A2
 * @implements B518:0A46:0027:E4A2 ()
 *
 * Called From: B518:0A75:001B:C80F
 * Called From: B518:0A75:001D:7801
 */
void f__B518_0A46_0027_E4A2()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_dx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x2));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0x8), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0x6), emu_dx.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x0A6D); emu_cs = 0x23E1; f__23E1_01C2_0011_4E4B();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_0A6D_001D_7801();
}

/**
 * Decompiled function f__B518_0A6D_001D_7801()
 *
 * @name f__B518_0A6D_001D_7801
 * @implements B518:0A6D:001D:7801 ()
 *
 * Called From: B518:0A6D:0027:E4A2
 */
void f__B518_0A6D_001D_7801()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (!emu_flags.zf) { f__B518_0A46_0027_E4A2(); return; }
	emu_movw(&emu_ax.x, 0x28);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x81F1);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x3604);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0A8A); emu_cs = 0x01F7; f__01F7_28B8_0024_D407();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_0A8A_0007_7EBA();
}

/**
 * Decompiled function f__B518_0A6F_001B_C80F()
 *
 * @name f__B518_0A6F_001B_C80F
 * @implements B518:0A6F:001B:C80F ()
 *
 * Called From: B518:0A44:0008:36FE
 */
void f__B518_0A6F_001B_C80F()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (!emu_flags.zf) { f__B518_0A46_0027_E4A2(); return; }
	emu_movw(&emu_ax.x, 0x28);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x81F1);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x3604);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0A8A); emu_cs = 0x01F7; emu_ip = 0x3342; emu_last_cs = 0xB518; emu_last_ip = 0x0A85; emu_last_length = 0x001B; emu_last_crc = 0xC80F; emu_call(); // Jump does not resolve
	f__B518_0A8A_0007_7EBA();
}

/**
 * Decompiled function f__B518_0A8A_0007_7EBA()
 *
 * @name f__B518_0A8A_0007_7EBA
 * @implements B518:0A8A:0007:7EBA ()
 *
 * Called From: B518:0A8A:001D:7801
 */
void f__B518_0A8A_0007_7EBA()
{
	emu_addws(&emu_sp, 0xA);
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B518_0B0D_000E_9931()
 *
 * @name f__B518_0B0D_000E_9931
 * @implements B518:0B0D:000E:9931 ()
 *
 * Called From: 3518:0039:0005:1E72
 * Called From: 3518:0039:0005:1DFE
 */
void f__B518_0B0D_000E_9931()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x7E1A), 0x1);
	emu_movw(&emu_ax.x, 0x1);
	f__B518_0B1B_0002_00E2(); return;
}

/**
 * Decompiled function f__B518_0B1B_0002_00E2()
 *
 * @name f__B518_0B1B_0002_00E2
 * @implements B518:0B1B:0002:00E2 ()
 *
 * Called From: B518:0B19:000E:9931
 */
void f__B518_0B1B_0002_00E2()
{
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B518_0B1D_0014_0C28()
 *
 * @name f__B518_0B1D_0014_0C28
 * @implements B518:0B1D:0014:0C28 ()
 *
 * Called From: B518:0079:000F:2FBA
 * Called From: B518:0641:000C:9149
 */
void f__B518_0B1D_0014_0C28()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0xA);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0B31); emu_cs = 0x2598; f__2598_0000_0017_D681();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_0B31_0022_716B();
}

/**
 * Decompiled function f__B518_0B31_0022_716B()
 *
 * @name f__B518_0B31_0022_716B
 * @implements B518:0B31:0022:716B ()
 *
 * Called From: B518:0B31:0014:0C28
 */
void f__B518_0B31_0022_716B()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x6674));
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x6676));
	emu_movw(&emu_ax.x, 0x3);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x3);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x2C4E);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0B53); emu_cs = 0x34CA; ovl__34CA(0);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_0B53_0016_A022();
}

/**
 * Decompiled function f__B518_0B53_0016_A022()
 *
 * @name f__B518_0B53_0016_A022
 * @implements B518:0B53:0016:A022 ()
 *
 * Called From: B518:0B53:0022:716B
 */
void f__B518_0B53_0016_A022()
{
	emu_addws(&emu_sp, 0xE);
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x3A38), 0x0);
	if ((emu_flags.sf != emu_flags.of)) { f__B518_0B64_0005_147E(); return; }
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x3A38), 0x2);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__B518_0B69_0032_7BF3(); return; }
	emu_movw(&emu_di, 0x1);
	emu_ip = 0x0B7A; emu_last_cs = 0xB518; emu_last_ip = 0x0B67; emu_last_length = 0x0016; emu_last_crc = 0xA022; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B518_0B64_0005_147E()
 *
 * @name f__B518_0B64_0005_147E
 * @implements B518:0B64:0005:147E ()
 *
 * Called From: B518:0B5B:0016:A022
 */
void f__B518_0B64_0005_147E()
{
	emu_movw(&emu_di, 0x1);
	f__B518_0B7A_0021_177E(); return;
}

/**
 * Decompiled function f__B518_0B69_0032_7BF3()
 *
 * @name f__B518_0B69_0032_7BF3
 * @implements B518:0B69:0032:7BF3 ()
 *
 * Called From: B518:0B62:0016:A022
 */
void f__B518_0B69_0032_7BF3()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3A38));
	emu_movw(&emu_dx.x, 0x38);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_addw(&emu_ax.x, 0x8);
	emu_movb(&emu_cx.l, 0x3);
	emu_sarw(&emu_ax.x, emu_cx.l);
	emu_movw(&emu_di, emu_ax.x);
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x38);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x7);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x8);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x88);
	emu_push(emu_ax.x);
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x0B9B); emu_cs = 0x24D0; f__24D0_000D_0039_9224();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_0B9B_0036_813D();
}

/**
 * Decompiled function f__B518_0B7A_0021_177E()
 *
 * @name f__B518_0B7A_0021_177E
 * @implements B518:0B7A:0021:177E ()
 *
 * Called From: B518:0B67:0005:147E
 */
void f__B518_0B7A_0021_177E()
{
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x38);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x7);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x8);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x88);
	emu_push(emu_ax.x);
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x0B9B); emu_cs = 0x24D0; f__24D0_000D_0039_9224();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_0B9B_0036_813D();
}

/**
 * Decompiled function f__B518_0B9B_0036_813D()
 *
 * @name f__B518_0B9B_0036_813D
 * @implements B518:0B9B:0036:813D ()
 *
 * Called From: B518:0B9B:0021:177E
 * Called From: B518:0B9B:0032:7BF3
 */
void f__B518_0B9B_0036_813D()
{
	emu_addws(&emu_sp, 0x10);
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x3A38), 0x0);
	if ((emu_flags.sf != emu_flags.of)) { f__B518_0BAC_0025_3501(); return; }
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x3A38), 0x2);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__B518_0BAF_0022_2929(); return; }
	emu_addws(&emu_di, 0x7);
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x38);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x7);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x8);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x21);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x88);
	emu_push(emu_ax.x);
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x0BD1); emu_cs = 0x24D0; emu_ip = 0x0BDE; emu_last_cs = 0xB518; emu_last_ip = 0x0BCC; emu_last_length = 0x0036; emu_last_crc = 0x813D; emu_call(); // Jump does not resolve
	f__B518_0BD1_0021_DBD0();
}

/**
 * Decompiled function f__B518_0BAC_0025_3501()
 *
 * @name f__B518_0BAC_0025_3501
 * @implements B518:0BAC:0025:3501 ()
 *
 * Called From: B518:0BA3:0036:813D
 */
void f__B518_0BAC_0025_3501()
{
	emu_addws(&emu_di, 0x7);
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x38);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x7);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x8);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x21);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x88);
	emu_push(emu_ax.x);
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x0BD1); emu_cs = 0x24D0; f__24D0_000D_0039_9224();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_0BD1_0021_DBD0();
}

/**
 * Decompiled function f__B518_0BAF_0022_2929()
 *
 * @name f__B518_0BAF_0022_2929
 * @implements B518:0BAF:0022:2929 ()
 *
 * Called From: B518:0BAA:0036:813D
 */
void f__B518_0BAF_0022_2929()
{
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x38);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x7);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x8);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x21);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x88);
	emu_push(emu_ax.x);
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x0BD1); emu_cs = 0x24D0; f__24D0_000D_0039_9224();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_0BD1_0021_DBD0();
}

/**
 * Decompiled function f__B518_0BD1_0021_DBD0()
 *
 * @name f__B518_0BD1_0021_DBD0
 * @implements B518:0BD1:0021:DBD0 ()
 *
 * Called From: B518:0BD1:0025:3501
 * Called From: B518:0BD1:0022:2929
 */
void f__B518_0BD1_0021_DBD0()
{
	emu_addws(&emu_sp, 0x10);
	emu_movw(&emu_ax.x, 0x74);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0xBF);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0xAF);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x88);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x8);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x353F);
	emu_movw(&emu_es, emu_ax.x);

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_es, 0x00,  0x6668);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_es, 0x00,  0x666A);
	emu_push(0x0BF2);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A60D31: f__22A6_0D31_0015_D6F0(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0xB518; emu_last_ip = 0x0BED; emu_last_length = 0x0021; emu_last_crc = 0xDBD0;
			emu_call();
			return;
	}
	f__B518_0BF2_0027_32F4();
}

/**
 * Decompiled function f__B518_0BF2_0027_32F4()
 *
 * @name f__B518_0BF2_0027_32F4
 * @implements B518:0BF2:0027:32F4 ()
 *
 * Called From: B518:0BF2:0021:DBD0
 */
void f__B518_0BF2_0027_32F4()
{
	emu_addws(&emu_sp, 0xA);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0x8), 0x1);
	if (!emu_flags.zf) { f__B518_0C2E_002A_2A31(); return; }
	emu_movw(&emu_ax.x, 0x74);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0xBF);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x137);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x50);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x8);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x353F);
	emu_movw(&emu_es, emu_ax.x);

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_es, 0x00,  0x6668);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_es, 0x00,  0x666A);
	emu_push(0x0C19);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A60D31: f__22A6_0D31_0015_D6F0(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0xB518; emu_last_ip = 0x0C14; emu_last_length = 0x0027; emu_last_crc = 0x32F4;
			emu_call();
			return;
	}
	f__B518_0C19_0011_F1CC();
}

/**
 * Decompiled function f__B518_0C19_0011_F1CC()
 *
 * @name f__B518_0C19_0011_F1CC
 * @implements B518:0C19:0011:F1CC ()
 *
 * Called From: B518:0C19:0027:32F4
 */
void f__B518_0C19_0011_F1CC()
{
	emu_addws(&emu_sp, 0xA);
	emu_cmpws(&emu_si, 0xFF);
	if (emu_flags.zf) { f__B518_0C2C_0002_036E(); return; }
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_si);
	emu_push(emu_cs);
	emu_push(0x0C2A); f__B518_0EB1_000E_9DA1();
	f__B518_0C2A_0004_0436();
}

/**
 * Decompiled function f__B518_0C2A_0004_0436()
 *
 * @name f__B518_0C2A_0004_0436
 * @implements B518:0C2A:0004:0436 ()
 *
 * Called From: B518:0C2A:0011:F1CC
 */
void f__B518_0C2A_0004_0436()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	f__B518_0C8F_0008_C96C(); return;
}

/**
 * Decompiled function f__B518_0C2C_0002_036E()
 *
 * @name f__B518_0C2C_0002_036E
 * @implements B518:0C2C:0002:036E ()
 *
 * Called From: B518:0C1F:0011:F1CC
 */
void f__B518_0C2C_0002_036E()
{
	f__B518_0C8F_0008_C96C(); return;
}

/**
 * Decompiled function f__B518_0C2E_002A_2A31()
 *
 * @name f__B518_0C2E_002A_2A31
 * @implements B518:0C2E:002A:2A31 ()
 *
 * Called From: B518:0BF9:0027:32F4
 */
void f__B518_0C2E_002A_2A31()
{
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x24);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x130);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x74);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x8);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x50);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x8);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x353F);
	emu_movw(&emu_es, emu_ax.x);

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_es, 0x00,  0x6624);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_es, 0x00,  0x6626);
	emu_push(0x0C58);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A6034F: f__22A6_034F_000C_6447(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0xB518; emu_last_ip = 0x0C53; emu_last_length = 0x002A; emu_last_crc = 0x2A31;
			emu_call();
			return;
	}
	f__B518_0C58_0034_F508();
}

/**
 * Decompiled function f__B518_0C58_0034_F508()
 *
 * @name f__B518_0C58_0034_F508
 * @implements B518:0C58:0034:F508 ()
 *
 * Called From: B518:0C58:002A:2A31
 */
void f__B518_0C58_0034_F508()
{
	emu_addws(&emu_sp, 0x10);
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x38B0), 0x1);
	if (emu_flags.zf) { f__B518_0C8F_0008_C96C(); return; }
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x24);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x130);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x98);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x8);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x50);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x8);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x353F);
	emu_movw(&emu_es, emu_ax.x);

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_es, 0x00,  0x6624);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_es, 0x00,  0x6626);
	emu_push(0x0C8C);
	switch ((emu_cs << 16) + emu_ip) {
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0xB518; emu_last_ip = 0x0C87; emu_last_length = 0x0034; emu_last_crc = 0xF508;
			emu_call();
			return;
	}
	emu_unknown_call();
}

/**
 * Decompiled function f__B518_0C8F_0008_C96C()
 *
 * @name f__B518_0C8F_0008_C96C
 * @implements B518:0C8F:0008:C96C ()
 *
 * Called From: B518:0C2C:0002:036E
 * Called From: B518:0C2C:0004:0436
 * Called From: B518:0C60:0034:F508
 */
void f__B518_0C8F_0008_C96C()
{
	emu_cmpws(&emu_si, 0xFF);
	if (!emu_flags.zf) { f__B518_0C97_001D_CF86(); return; }
	f__B518_0D74_001D_C5C4(); return;
}

/**
 * Decompiled function f__B518_0C97_001D_CF86()
 *
 * @name f__B518_0C97_001D_CF86
 * @implements B518:0C97:001D:CF86 ()
 *
 * Called From: B518:0C92:0008:C96C
 */
void f__B518_0C97_001D_CF86()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00, -0x7E15));
	emu_movw(&emu_bx.x, 0x3C);
	emu_cwd();
	emu_idivw(&emu_ax.x, emu_bx.x);
	emu_push(emu_dx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00, -0x7E15));
	emu_movw(&emu_bx.x, 0x3C);
	emu_cwd();
	emu_idivw(&emu_ax.x, emu_bx.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x16);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0CB4); emu_cs = 0x0FCB; f__0FCB_005F_001C_147D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_0CB4_000D_F07B();
}

/**
 * Decompiled function f__B518_0CB4_000D_F07B()
 *
 * @name f__B518_0CB4_000D_F07B
 * @implements B518:0CB4:000D:F07B ()
 *
 * Called From: B518:0CB4:001D:CF86
 */
void f__B518_0CB4_000D_F07B()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x9939);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0CC1); emu_cs = 0x01F7; f__01F7_378D_0020_4A95();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_0CC1_0018_04A0();
}

/**
 * Decompiled function f__B518_0CC1_0018_04A0()
 *
 * @name f__B518_0CC1_0018_04A0
 * @implements B518:0CC1:0018:04A0 ()
 *
 * Called From: B518:0CC1:000D:F07B
 */
void f__B518_0CC1_0018_04A0()
{
	emu_addws(&emu_sp, 0xC);
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00, -0x7E15), 0x3C);
	if (!(emu_flags.sf != emu_flags.of)) { emu_ip = 0x0D03; emu_last_cs = 0xB518; emu_last_ip = 0x0CC9; emu_last_length = 0x0018; emu_last_crc = 0x04A0; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, 0x30);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x9939);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0CD9); emu_cs = 0x01F7; f__01F7_3889_0033_9299();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_0CD9_000B_8977();
}

/**
 * Decompiled function f__B518_0CD9_000B_8977()
 *
 * @name f__B518_0CD9_000B_8977
 * @implements B518:0CD9:000B:8977 ()
 *
 * Called From: B518:0CD9:0018:04A0
 */
void f__B518_0CD9_000B_8977()
{
	emu_addws(&emu_sp, 0x6);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_ax.x);
	f__B518_0CFA_0026_F286(); return;
}

/**
 * Decompiled function f__B518_0CE4_0013_332D()
 *
 * @name f__B518_0CE4_0013_332D
 * @implements B518:0CE4:0013:332D ()
 *
 * Called From: B518:0D01:0026:F286
 * Called From: B518:0D01:0029:3487
 */
void f__B518_0CE4_0013_332D()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_incw(&emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_cs); emu_push(0x0CF7); emu_cs = 0x01F7; f__01F7_38F6_0029_5C00();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_0CF7_0029_3487();
}

/**
 * Decompiled function f__B518_0CF7_0029_3487()
 *
 * @name f__B518_0CF7_0029_3487
 * @implements B518:0CF7:0029:3487 ()
 *
 * Called From: B518:0CF7:0013:332D
 */
void f__B518_0CF7_0029_3487()
{
	emu_addws(&emu_sp, 0x8);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0x20);
	if (!emu_flags.zf) { f__B518_0CE4_0013_332D(); return; }
	emu_push(emu_si);
	emu_movw(&emu_ax.x, 0x22);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0xF);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0xF);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x48);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x15);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0D20); emu_cs = 0x0FCB; f__0FCB_005F_001C_147D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_0D20_0008_7B10();
}

/**
 * Decompiled function f__B518_0CFA_0026_F286()
 *
 * @name f__B518_0CFA_0026_F286
 * @implements B518:0CFA:0026:F286 ()
 *
 * Called From: B518:0CE2:000B:8977
 */
void f__B518_0CFA_0026_F286()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0x20);
	if (!emu_flags.zf) { f__B518_0CE4_0013_332D(); return; }
	emu_push(emu_si);
	emu_movw(&emu_ax.x, 0x22);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0xF);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0xF);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x48);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x15);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0D20); emu_cs = 0x0FCB; emu_ip = 0x0D7F; emu_last_cs = 0xB518; emu_last_ip = 0x0D1B; emu_last_length = 0x0026; emu_last_crc = 0xF286; emu_call(); // Jump does not resolve
	f__B518_0D20_0008_7B10();
}

/**
 * Decompiled function f__B518_0D20_0008_7B10()
 *
 * @name f__B518_0D20_0008_7B10
 * @implements B518:0D20:0008:7B10 ()
 *
 * Called From: B518:0D20:0029:3487
 */
void f__B518_0D20_0008_7B10()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0D28); emu_cs = 0x10E4; f__10E4_1EF1_0040_E33D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_0D28_0020_27E5();
}

/**
 * Decompiled function f__B518_0D28_0020_27E5()
 *
 * @name f__B518_0D28_0020_27E5
 * @implements B518:0D28:0020:27E5 ()
 *
 * Called From: B518:0D28:0008:7B10
 */
void f__B518_0D28_0020_27E5()
{
	emu_addws(&emu_sp, 0x10);
	emu_movw(&emu_ax.x, 0x222);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0xF);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0xF);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0xF8);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x9939);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0D48); emu_cs = 0x10E4; f__10E4_1EF1_0040_E33D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_0D48_001F_0216();
}

/**
 * Decompiled function f__B518_0D48_001F_0216()
 *
 * @name f__B518_0D48_001F_0216
 * @implements B518:0D48:001F:0216 ()
 *
 * Called From: B518:0D48:0020:27E5
 */
void f__B518_0D48_001F_0216()
{
	emu_addws(&emu_sp, 0xE);
	emu_movw(&emu_ax.x, 0x122);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0xF);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x26);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0xA0);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x17);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0D67); emu_cs = 0x0FCB; f__0FCB_005F_001C_147D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_0D67_0008_7B10();
}

/**
 * Decompiled function f__B518_0D67_0008_7B10()
 *
 * @name f__B518_0D67_0008_7B10
 * @implements B518:0D67:0008:7B10 ()
 *
 * Called From: B518:0D67:001F:0216
 */
void f__B518_0D67_0008_7B10()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0D6F); emu_cs = 0x10E4; f__10E4_1EF1_0040_E33D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_0D6F_0005_1FAC();
}

/**
 * Decompiled function f__B518_0D6F_0005_1FAC()
 *
 * @name f__B518_0D6F_0005_1FAC
 * @implements B518:0D6F:0005:1FAC ()
 *
 * Called From: B518:0D6F:0008:7B10
 */
void f__B518_0D6F_0005_1FAC()
{
	emu_addws(&emu_sp, 0xE);
	f__B518_0D9C_0013_BCCC(); return;
}

/**
 * Decompiled function f__B518_0D74_001D_C5C4()
 *
 * @name f__B518_0D74_001D_C5C4
 * @implements B518:0D74:001D:C5C4 ()
 *
 * Called From: B518:0C94:0008:C96C
 */
void f__B518_0D74_001D_C5C4()
{
	emu_push(emu_si);
	emu_movw(&emu_ax.x, 0x122);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0xF);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0xF);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0xA0);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x150);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0D91); emu_cs = 0x0FCB; f__0FCB_005F_001C_147D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_0D91_0008_7B10();
}

/**
 * Decompiled function f__B518_0D91_0008_7B10()
 *
 * @name f__B518_0D91_0008_7B10
 * @implements B518:0D91:0008:7B10 ()
 *
 * Called From: B518:0D91:001D:C5C4
 */
void f__B518_0D91_0008_7B10()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0D99); emu_cs = 0x10E4; f__10E4_1EF1_0040_E33D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_0D99_0016_858C();
}

/**
 * Decompiled function f__B518_0D99_0016_858C()
 *
 * @name f__B518_0D99_0016_858C
 * @implements B518:0D99:0016:858C ()
 *
 * Called From: B518:0D99:0008:7B10
 */
void f__B518_0D99_0016_858C()
{
	emu_addws(&emu_sp, 0x10);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3A38));
	emu_orw(&emu_ax.x, emu_ax.x);
	if (emu_flags.zf) { emu_ip = 0x0DAF; emu_last_cs = 0xB518; emu_last_ip = 0x0DA1; emu_last_length = 0x0016; emu_last_crc = 0x858C; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_ax.x, 0x1);
	if (emu_flags.zf) { emu_ip = 0x0DBB; emu_last_cs = 0xB518; emu_last_ip = 0x0DA6; emu_last_length = 0x0016; emu_last_crc = 0x858C; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_ax.x, 0x2);
	if (emu_flags.zf) { emu_ip = 0x0DC7; emu_last_cs = 0xB518; emu_last_ip = 0x0DAB; emu_last_length = 0x0016; emu_last_crc = 0x858C; emu_call(); return; } // Jump does not resolve
	f__B518_0DBB_000C_94D8(); return;
}

/**
 * Decompiled function f__B518_0D9C_0013_BCCC()
 *
 * @name f__B518_0D9C_0013_BCCC
 * @implements B518:0D9C:0013:BCCC ()
 *
 * Called From: B518:0D72:0005:1FAC
 */
void f__B518_0D9C_0013_BCCC()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3A38));
	emu_orw(&emu_ax.x, emu_ax.x);
	if (emu_flags.zf) { f__B518_0DAF_000C_F4D0(); return; }
	emu_cmpw(&emu_ax.x, 0x1);
	if (emu_flags.zf) { f__B518_0DBB_000C_94D8(); return; }
	emu_cmpw(&emu_ax.x, 0x2);
	if (emu_flags.zf) { emu_ip = 0x0DC7; emu_last_cs = 0xB518; emu_last_ip = 0x0DAB; emu_last_length = 0x0013; emu_last_crc = 0xBCCC; emu_call(); return; } // Jump does not resolve
	emu_ip = 0x0DBB; emu_last_cs = 0xB518; emu_last_ip = 0x0DAD; emu_last_length = 0x0013; emu_last_crc = 0xBCCC; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B518_0DAF_000C_F4D0()
 *
 * @name f__B518_0DAF_000C_F4D0
 * @implements B518:0DAF:000C:F4D0 ()
 *
 * Called From: B518:0DA1:0013:BCCC
 */
void f__B518_0DAF_000C_F4D0()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x95);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x0);
	f__B518_0DD3_0036_A372(); return;
}

/**
 * Decompiled function f__B518_0DBB_000C_94D8()
 *
 * @name f__B518_0DBB_000C_94D8
 * @implements B518:0DBB:000C:94D8 ()
 *
 * Called From: B518:0DA6:0013:BCCC
 * Called From: B518:0DAD:0016:858C
 */
void f__B518_0DBB_000C_94D8()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0xA5);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x2);
	f__B518_0DD3_0036_A372(); return;
}

/**
 * Decompiled function f__B518_0DD3_0036_A372()
 *
 * @name f__B518_0DD3_0036_A372
 * @implements B518:0DD3:0036:A372 ()
 *
 * Called From: B518:0DB9:000C:F4D0
 * Called From: B518:0DC5:000C:94D8
 */
void f__B518_0DD3_0036_A372()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3C34));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x3C32));
	emu_addw(&emu_dx.x, 0x2FD);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x7E11), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x7E13), emu_dx.x);
	emu_movw(&emu_ax.x, 0x3);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_dx.x, 0x3);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x3C32));
	emu_addw(&emu_dx.x, emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3C34));
	emu_push(emu_dx.x);
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x7E11));
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x7E13));
	emu_push(emu_cs); emu_push(0x0E09); emu_cs = 0x01F7; f__01F7_28B8_0024_D407();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_0E09_0015_7307();
}

/**
 * Decompiled function f__B518_0E09_0015_7307()
 *
 * @name f__B518_0E09_0015_7307
 * @implements B518:0E09:0015:7307 ()
 *
 * Called From: B518:0E09:0036:A372
 */
void f__B518_0E09_0015_7307()
{
	emu_addws(&emu_sp, 0xA);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_addw(&emu_get_memory16(emu_ds, 0x00, -0x7E13), emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0x8), 0x0);
	if (!emu_flags.zf) { f__B518_0E1E_0008_EAEA(); return; }
	emu_push(emu_cs);
	emu_push(0x0E1E); f__B518_14F2_003E_63EE();
	f__B518_0E1E_0008_EAEA();
}

/**
 * Decompiled function f__B518_0E1E_0008_EAEA()
 *
 * @name f__B518_0E1E_0008_EAEA
 * @implements B518:0E1E:0008:EAEA ()
 *
 * Called From: B518:0E17:0015:7307
 * Called From: B518:0E1E:0015:7307
 */
void f__B518_0E1E_0008_EAEA()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_cs); emu_push(0x0E26); emu_cs = 0x2598; f__2598_0000_0017_D681();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_0E26_0007_3FFA();
}

/**
 * Decompiled function f__B518_0E26_0007_3FFA()
 *
 * @name f__B518_0E26_0007_3FFA
 * @implements B518:0E26:0007:3FFA ()
 *
 * Called From: B518:0E26:0008:EAEA
 */
void f__B518_0E26_0007_3FFA()
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
 * Decompiled function f__B518_0E2D_0023_DFF4()
 *
 * @name f__B518_0E2D_0023_DFF4
 * @implements B518:0E2D:0023:DFF4 ()
 *
 * Called From: B518:0090:0008:73D2
 * Called From: B518:00A8:0008:73B2
 */
void f__B518_0E2D_0023_DFF4()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_di, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movw(&emu_ax.x, 0x121);
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
	emu_push(emu_cs); emu_push(0x0E50); emu_cs = 0x10E4; f__10E4_1EF1_0040_E33D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_0E50_000E_4560();
}

/**
 * Decompiled function f__B518_0E50_000E_4560()
 *
 * @name f__B518_0E50_000E_4560
 * @implements B518:0E50:000E:4560 ()
 *
 * Called From: B518:0E50:0023:DFF4
 */
void f__B518_0E50_000E_4560()
{
	emu_addws(&emu_sp, 0xE);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x0E5E); emu_cs = 0x2521; f__2521_0035_0015_2811();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_0E5E_002E_0347();
}

/**
 * Decompiled function f__B518_0E5E_002E_0347()
 *
 * @name f__B518_0E5E_002E_0347
 * @implements B518:0E5E:002E:0347 ()
 *
 * Called From: B518:0E5E:000E:4560
 */
void f__B518_0E5E_002E_0347()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_si, emu_ax.x);
	emu_movw(&emu_ax.x, emu_si);
	emu_sarw(&emu_ax.x, 0x1);
	emu_addw(&emu_ax.x, 0x4);
	emu_movw(&emu_si, emu_ax.x);
	emu_movw(&emu_ax.x, 0x74);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_di);
	emu_addw(&emu_ax.x, 0x6);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_si);
	emu_addw(&emu_ax.x, 0xA0);
	emu_push(emu_ax.x);
	emu_push(emu_di);
	emu_movw(&emu_ax.x, 0xA0);
	emu_subw(&emu_ax.x, emu_si);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x353F);
	emu_movw(&emu_es, emu_ax.x);

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_es, 0x00,  0x6668);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_es, 0x00,  0x666A);
	emu_push(0x0E8C);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A60D31: f__22A6_0D31_0015_D6F0(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0xB518; emu_last_ip = 0x0E87; emu_last_length = 0x002E; emu_last_crc = 0x0347;
			emu_call();
			return;
	}
	f__B518_0E8C_001E_3455();
}

/**
 * Decompiled function f__B518_0E8C_001E_3455()
 *
 * @name f__B518_0E8C_001E_3455
 * @implements B518:0E8C:001E:3455 ()
 *
 * Called From: B518:0E8C:002E:0347
 */
void f__B518_0E8C_001E_3455()
{
	emu_addws(&emu_sp, 0xA);
	emu_movw(&emu_ax.x, 0x121);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0xF);
	emu_push(emu_ax.x);
	emu_push(emu_di);
	emu_movw(&emu_ax.x, 0xA0);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x0EAA); emu_cs = 0x10E4; f__10E4_1EF1_0040_E33D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_0EAA_0007_76A2();
}

/**
 * Decompiled function f__B518_0EAA_0007_76A2()
 *
 * @name f__B518_0EAA_0007_76A2
 * @implements B518:0EAA:0007:76A2 ()
 *
 * Called From: B518:0EAA:001E:3455
 */
void f__B518_0EAA_0007_76A2()
{
	emu_addws(&emu_sp, 0xE);
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B518_0EB1_000E_9DA1()
 *
 * @name f__B518_0EB1_000E_9DA1
 * @implements B518:0EB1:000E:9DA1 ()
 *
 * Called From: B518:0300:000D:DF8E
 * Called From: B518:0C27:0011:F1CC
 */
void f__B518_0EB1_000E_9DA1()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x2);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x0EBF); f__B518_0F22_0007_13E8();
	f__B518_0EBF_0027_9DB9();
}

/**
 * Decompiled function f__B518_0EBF_0027_9DB9()
 *
 * @name f__B518_0EBF_0027_9DB9
 * @implements B518:0EBF:0027:9DB9 ()
 *
 * Called From: B518:0EBF:000E:9DA1
 */
void f__B518_0EBF_0027_9DB9()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_movw(&emu_ax.x, 0x122);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x6);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x31);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0xA0);
	emu_push(emu_ax.x);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_push(emu_get_memory16(emu_ds, emu_bx.x,  0x37C0));
	emu_push(emu_cs); emu_push(0x0EE6); emu_cs = 0x0FCB; f__0FCB_005F_001C_147D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_0EE6_0008_7B10();
}

/**
 * Decompiled function f__B518_0EE6_0008_7B10()
 *
 * @name f__B518_0EE6_0008_7B10
 * @implements B518:0EE6:0008:7B10 ()
 *
 * Called From: B518:0EE6:0027:9DB9
 */
void f__B518_0EE6_0008_7B10()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0EEE); emu_cs = 0x10E4; f__10E4_1EF1_0040_E33D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_0EEE_002D_7D51();
}

/**
 * Decompiled function f__B518_0EEE_002D_7D51()
 *
 * @name f__B518_0EEE_002D_7D51
 * @implements B518:0EEE:002D:7D51 ()
 *
 * Called From: B518:0EEE:0008:7B10
 */
void f__B518_0EEE_002D_7D51()
{
	emu_addws(&emu_sp, 0xE);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0x8), 0x0);
	if (emu_flags.zf) { f__B518_0F1E_0004_0F7A(); return; }
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0xC);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x14);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x31);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0xA);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x31);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0xA);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0F1B); emu_cs = 0x2C17; f__2C17_000C_002F_E104();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_0F1B_0007_7DFA();
}

/**
 * Decompiled function f__B518_0F1B_0007_7DFA()
 *
 * @name f__B518_0F1B_0007_7DFA
 * @implements B518:0F1B:0007:7DFA ()
 *
 * Called From: B518:0F1B:002D:7D51
 */
void f__B518_0F1B_0007_7DFA()
{
	emu_addws(&emu_sp, 0x10);
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B518_0F1E_0004_0F7A()
 *
 * @name f__B518_0F1E_0004_0F7A
 * @implements B518:0F1E:0004:0F7A ()
 *
 * Called From: B518:0EF5:002D:7D51
 */
void f__B518_0F1E_0004_0F7A()
{
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B518_0F22_0007_13E8()
 *
 * @name f__B518_0F22_0007_13E8
 * @implements B518:0F22:0007:13E8 ()
 *
 * Called From: B518:0EBC:000E:9DA1
 * Called From: B518:1163:0019:6CF9
 */
void f__B518_0F22_0007_13E8()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_xorw(&emu_dx.x, emu_dx.x);
	f__B518_0F3B_000E_EF74(); return;
}

/**
 * Decompiled function f__B518_0F29_0011_AE17()
 *
 * @name f__B518_0F29_0011_AE17
 * @implements B518:0F29:0011:AE17 ()
 *
 * Called From: B518:0F3E:000E:EF74
 * Called From: B518:0F3E:000F:EF55
 */
void f__B518_0F29_0011_AE17()
{
	emu_movw(&emu_bx.x, emu_dx.x);
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, emu_bx.x,  0x37C2));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__B518_0F3A_000F_EF55(); return; }
	f__B518_0F40_0009_EB4B(); return;
}

/**
 * Decompiled function f__B518_0F3A_000F_EF55()
 *
 * @name f__B518_0F3A_000F_EF55
 * @implements B518:0F3A:000F:EF55 ()
 *
 * Called From: B518:0F36:0011:AE17
 */
void f__B518_0F3A_000F_EF55()
{
	emu_incw(&emu_dx.x);
	emu_cmpws(&emu_dx.x, 0xC);
	if ((emu_flags.sf != emu_flags.of)) { f__B518_0F29_0011_AE17(); return; }
	emu_cmpws(&emu_dx.x, 0xB);
	if (!(emu_flags.sf != emu_flags.of)) { emu_ip = 0x0F49; emu_last_cs = 0xB518; emu_last_ip = 0x0F43; emu_last_length = 0x000F; emu_last_crc = 0xEF55; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_dx.x);
	emu_ip = 0x0F4C; emu_last_cs = 0xB518; emu_last_ip = 0x0F47; emu_last_length = 0x000F; emu_last_crc = 0xEF55; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B518_0F3B_000E_EF74()
 *
 * @name f__B518_0F3B_000E_EF74
 * @implements B518:0F3B:000E:EF74 ()
 *
 * Called From: B518:0F27:0007:13E8
 */
void f__B518_0F3B_000E_EF74()
{
	emu_cmpws(&emu_dx.x, 0xC);
	if ((emu_flags.sf != emu_flags.of)) { f__B518_0F29_0011_AE17(); return; }
	emu_cmpws(&emu_dx.x, 0xB);
	if (!(emu_flags.sf != emu_flags.of)) { emu_ip = 0x0F49; emu_last_cs = 0xB518; emu_last_ip = 0x0F43; emu_last_length = 0x000E; emu_last_crc = 0xEF74; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_dx.x);
	emu_ip = 0x0F4C; emu_last_cs = 0xB518; emu_last_ip = 0x0F47; emu_last_length = 0x000E; emu_last_crc = 0xEF74; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B518_0F40_0009_EB4B()
 *
 * @name f__B518_0F40_0009_EB4B
 * @implements B518:0F40:0009:EB4B ()
 *
 * Called From: B518:0F38:0011:AE17
 */
void f__B518_0F40_0009_EB4B()
{
	emu_cmpws(&emu_dx.x, 0xB);
	if (!(emu_flags.sf != emu_flags.of)) { emu_ip = 0x0F49; emu_last_cs = 0xB518; emu_last_ip = 0x0F43; emu_last_length = 0x0009; emu_last_crc = 0xEB4B; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_dx.x);
	f__B518_0F4C_0006_35CC(); return;
}

/**
 * Decompiled function f__B518_0F4C_0006_35CC()
 *
 * @name f__B518_0F4C_0006_35CC
 * @implements B518:0F4C:0006:35CC ()
 *
 * Called From: B518:0F47:0009:EB4B
 */
void f__B518_0F4C_0006_35CC()
{
	emu_movw(&emu_dx.x, emu_ax.x);
	emu_movw(&emu_ax.x, emu_dx.x);
	f__B518_0F52_0002_00E2(); return;
}

/**
 * Decompiled function f__B518_0F52_0002_00E2()
 *
 * @name f__B518_0F52_0002_00E2
 * @implements B518:0F52:0002:00E2 ()
 *
 * Called From: B518:0F50:0006:35CC
 */
void f__B518_0F52_0002_00E2()
{
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B518_0F54_0023_5BE3()
 *
 * @name f__B518_0F54_0023_5BE3
 * @implements B518:0F54:0023:5BE3 ()
 *
 * Called From: B518:003B:0019:0296
 */
void f__B518_0F54_0023_5BE3()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0xC);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_si, emu_si);
	if (!(emu_flags.sf != emu_flags.of)) { f__B518_0F65_0012_0DC3(); return; }
	emu_xorw(&emu_si, emu_si);
	emu_movw(&emu_ax.x, 0xFFFF);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x10));
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_cs); emu_push(0x0F77); emu_cs = 0x1082; emu_ip = 0x1074; emu_last_cs = 0xB518; emu_last_ip = 0x0F72; emu_last_length = 0x0023; emu_last_crc = 0x5BE3; emu_call(); // Jump does not resolve
	f__B518_0F77_0005_1F90();
}

/**
 * Decompiled function f__B518_0F65_0012_0DC3()
 *
 * @name f__B518_0F65_0012_0DC3
 * @implements B518:0F65:0012:0DC3 ()
 *
 * Called From: B518:0F61:0023:5BE3
 */
void f__B518_0F65_0012_0DC3()
{
	emu_movw(&emu_ax.x, 0xFFFF);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x10));
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_cs); emu_push(0x0F77); emu_cs = 0x1082; f__1082_00FD_003A_94E2();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_0F77_0005_1F90();
}

/**
 * Decompiled function f__B518_0F77_0005_1F90()
 *
 * @name f__B518_0F77_0005_1F90
 * @implements B518:0F77:0005:1F90 ()
 *
 * Called From: B518:0F77:0012:0DC3
 */
void f__B518_0F77_0005_1F90()
{
	emu_addws(&emu_sp, 0x8);
	f__B518_0FAA_002C_C2BA(); return;
}

/**
 * Decompiled function f__B518_0F7C_002C_9330()
 *
 * @name f__B518_0F7C_002C_9330
 * @implements B518:0F7C:002C:9330 ()
 *
 * Called From: B518:0FB6:002C:C2BA
 * Called From: B518:0FB6:002E:A2A7
 */
void f__B518_0F7C_002C_9330()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x2));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_movw(&emu_dx.x, 0x60);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_dx.x, 0x2C94);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_es, emu_dx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x20));
	emu_movw(&emu_bx.x, 0x64);
	emu_cwd();
	emu_idivw(&emu_ax.x, emu_bx.x);
	emu_addw(&emu_si, emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_cs); emu_push(0x0FA8); emu_cs = 0x1082; f__1082_013D_0038_03DE();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_0FA8_002E_A2A7();
}

/**
 * Decompiled function f__B518_0FA8_002E_A2A7()
 *
 * @name f__B518_0FA8_002E_A2A7
 * @implements B518:0FA8:002E:A2A7 ()
 *
 * Called From: B518:0FA8:002C:9330
 */
void f__B518_0FA8_002E_A2A7()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (!emu_flags.zf) { f__B518_0F7C_002C_9330(); return; }
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_ax.x);
	emu_movw(&emu_di, emu_ax.x);
	emu_incw(&emu_get_memory16(emu_ds, 0x00,  0x38BC));
	emu_movw(&emu_ax.x, 0x10);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0xFFFF);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_cs); emu_push(0x0FD6); emu_cs = 0x0FE4; f__0FE4_0243_003A_DEE2();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_0FD6_0005_1F5A();
}

/**
 * Decompiled function f__B518_0FAA_002C_C2BA()
 *
 * @name f__B518_0FAA_002C_C2BA
 * @implements B518:0FAA:002C:C2BA ()
 *
 * Called From: B518:0F7A:0005:1F90
 */
void f__B518_0FAA_002C_C2BA()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (!emu_flags.zf) { f__B518_0F7C_002C_9330(); return; }
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_ax.x);
	emu_movw(&emu_di, emu_ax.x);
	emu_incw(&emu_get_memory16(emu_ds, 0x00,  0x38BC));
	emu_movw(&emu_ax.x, 0x10);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0xFFFF);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_cs); emu_push(0x0FD6); emu_cs = 0x0FE4; emu_ip = 0x1219; emu_last_cs = 0xB518; emu_last_ip = 0x0FD1; emu_last_length = 0x002C; emu_last_crc = 0xC2BA; emu_call(); // Jump does not resolve
	f__B518_0FD6_0005_1F5A();
}

/**
 * Decompiled function f__B518_0FD6_0005_1F5A()
 *
 * @name f__B518_0FD6_0005_1F5A
 * @implements B518:0FD6:0005:1F5A ()
 *
 * Called From: B518:0FD6:002E:A2A7
 */
void f__B518_0FD6_0005_1F5A()
{
	emu_addws(&emu_sp, 0x8);
	f__B518_1026_0035_CE75(); return;
}

/**
 * Decompiled function f__B518_0FDB_000F_9E55()
 *
 * @name f__B518_0FDB_000F_9E55
 * @implements B518:0FDB:000F:9E55 ()
 *
 * Called From: B518:1032:0035:CE75
 */
void f__B518_0FDB_000F_9E55()
{
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3A38));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs); emu_push(0x0FEA); emu_cs = 0x1A34; f__1A34_3623_0010_3F68();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_0FEA_0008_715C();
}

/**
 * Decompiled function f__B518_0FEA_0008_715C()
 *
 * @name f__B518_0FEA_0008_715C
 * @implements B518:0FEA:0008:715C ()
 *
 * Called From: B518:0FEA:000F:9E55
 */
void f__B518_0FEA_0008_715C()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0FF2); emu_cs = 0x1423; f__1423_0F34_0017_4318();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_0FF2_0017_720F();
}

/**
 * Decompiled function f__B518_0FF2_0017_720F()
 *
 * @name f__B518_0FF2_0017_720F
 * @implements B518:0FF2:0017:720F ()
 *
 * Called From: B518:0FF2:0008:715C
 */
void f__B518_0FF2_0017_720F()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (emu_flags.zf) { emu_ip = 0x1009; emu_last_cs = 0xB518; emu_last_ip = 0x0FF6; emu_last_length = 0x0017; emu_last_crc = 0x720F; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x58));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_movw(&emu_dx.x, 0x7);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_addw(&emu_di, emu_ax.x);
	f__B518_1019_000B_086C(); return;
}

/**
 * Decompiled function f__B518_1019_000B_086C()
 *
 * @name f__B518_1019_000B_086C
 * @implements B518:1019:000B:086C ()
 *
 * Called From: B518:1007:0017:720F
 */
void f__B518_1019_000B_086C()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_cs); emu_push(0x1024); emu_cs = 0x0FE4; f__0FE4_0283_0038_0940();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_1024_0037_F4B5();
}

/**
 * Decompiled function f__B518_1024_0037_F4B5()
 *
 * @name f__B518_1024_0037_F4B5
 * @implements B518:1024:0037:F4B5 ()
 *
 * Called From: B518:1024:000B:086C
 */
void f__B518_1024_0037_F4B5()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	if (!emu_flags.zf) { emu_ip = 0x0FDB; emu_last_cs = 0xB518; emu_last_ip = 0x1032; emu_last_length = 0x0037; emu_last_crc = 0xF4B5; emu_call(); return; } // Jump does not resolve
	emu_decw(&emu_get_memory16(emu_ds, 0x00,  0x38BC));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_adcws(&emu_dx.x, 0x0);
	emu_orw(&emu_dx.x, emu_dx.x);
	if ((emu_flags.sf != emu_flags.of)) { emu_ip = 0x105B; emu_last_cs = 0xB518; emu_last_ip = 0x1048; emu_last_length = 0x0037; emu_last_crc = 0xF4B5; emu_call(); return; } // Jump does not resolve
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { emu_ip = 0x1051; emu_last_cs = 0xB518; emu_last_ip = 0x104A; emu_last_length = 0x0037; emu_last_crc = 0xF4B5; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_ax.x, 0xFDE8);
	if ((emu_flags.cf || emu_flags.zf)) { f__B518_105B_002B_A9B6(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x0), 0xFDE8);
	emu_ip = 0x1064; emu_last_cs = 0xB518; emu_last_ip = 0x1059; emu_last_length = 0x0037; emu_last_crc = 0xF4B5; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B518_1026_0035_CE75()
 *
 * @name f__B518_1026_0035_CE75
 * @implements B518:1026:0035:CE75 ()
 *
 * Called From: B518:0FD9:0005:1F5A
 */
void f__B518_1026_0035_CE75()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	if (!emu_flags.zf) { f__B518_0FDB_000F_9E55(); return; }
	emu_decw(&emu_get_memory16(emu_ds, 0x00,  0x38BC));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_adcws(&emu_dx.x, 0x0);
	emu_orw(&emu_dx.x, emu_dx.x);
	if ((emu_flags.sf != emu_flags.of)) { emu_ip = 0x105B; emu_last_cs = 0xB518; emu_last_ip = 0x1048; emu_last_length = 0x0035; emu_last_crc = 0xCE75; emu_call(); return; } // Jump does not resolve
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { emu_ip = 0x1051; emu_last_cs = 0xB518; emu_last_ip = 0x104A; emu_last_length = 0x0035; emu_last_crc = 0xCE75; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_ax.x, 0xFDE8);
	if ((emu_flags.cf || emu_flags.zf)) { emu_ip = 0x105B; emu_last_cs = 0xB518; emu_last_ip = 0x104F; emu_last_length = 0x0035; emu_last_crc = 0xCE75; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x0), 0xFDE8);
	emu_ip = 0x1064; emu_last_cs = 0xB518; emu_last_ip = 0x1059; emu_last_length = 0x0035; emu_last_crc = 0xCE75; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B518_105B_002B_A9B6()
 *
 * @name f__B518_105B_002B_A9B6
 * @implements B518:105B:002B:A9B6 ()
 *
 * Called From: B518:104F:0037:F4B5
 */
void f__B518_105B_002B_A9B6()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_addw(&emu_get_memory16(emu_es, emu_bx.x,  0x0), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_addw(&emu_ax.x, emu_di);
	emu_adcws(&emu_dx.x, 0x0);
	emu_orw(&emu_dx.x, emu_dx.x);
	if ((emu_flags.sf != emu_flags.of)) { emu_ip = 0x1086; emu_last_cs = 0xB518; emu_last_ip = 0x1073; emu_last_length = 0x002B; emu_last_crc = 0xA9B6; emu_call(); return; } // Jump does not resolve
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { emu_ip = 0x107C; emu_last_cs = 0xB518; emu_last_ip = 0x1075; emu_last_length = 0x002B; emu_last_crc = 0xA9B6; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_ax.x, 0xFDE8);
	if ((emu_flags.cf || emu_flags.zf)) { f__B518_1086_000E_D11B(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x0), 0xFDE8);
	emu_ip = 0x108C; emu_last_cs = 0xB518; emu_last_ip = 0x1084; emu_last_length = 0x002B; emu_last_crc = 0xA9B6; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B518_1086_000E_D11B()
 *
 * @name f__B518_1086_000E_D11B
 * @implements B518:1086:000E:D11B ()
 *
 * Called From: B518:107A:002B:A9B6
 */
void f__B518_1086_000E_D11B()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_addw(&emu_get_memory16(emu_es, emu_bx.x,  0x0), emu_di);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x10));
	emu_push(emu_cs); emu_push(0x1094); emu_cs = 0x10BE; f__10BE_01AB_002F_5CC7();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_1094_001E_B2DE();
}

/**
 * Decompiled function f__B518_1094_001E_B2DE()
 *
 * @name f__B518_1094_001E_B2DE
 * @implements B518:1094:001E:B2DE ()
 *
 * Called From: B518:1094:000E:D11B
 */
void f__B518_1094_001E_B2DE()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_es, emu_dx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x12));
	emu_movw(&emu_bx.x, 0x64);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_divw(&emu_ax.x, emu_bx.x);
	emu_movw(&emu_dx.x, emu_si);
	emu_addw(&emu_dx.x, emu_ax.x);
	emu_movw(&emu_si, emu_dx.x);
	emu_orw(&emu_si, emu_si);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { emu_ip = 0x10B2; emu_last_cs = 0xB518; emu_last_ip = 0x10AC; emu_last_length = 0x001E; emu_last_crc = 0xB2DE; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_si);
	f__B518_10B4_0022_7AE1(); return;
}

/**
 * Decompiled function f__B518_10B4_0022_7AE1()
 *
 * @name f__B518_10B4_0022_7AE1
 * @implements B518:10B4:0022:7AE1 ()
 *
 * Called From: B518:10B0:001E:B2DE
 */
void f__B518_10B4_0022_7AE1()
{
	emu_movw(&emu_si, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x38B2));
	emu_movw(&emu_dx.x, 0x2D);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00, -0x7E15));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xA));
	if (!(emu_flags.sf != emu_flags.of)) { emu_ip = 0x10D2; emu_last_cs = 0xB518; emu_last_ip = 0x10C7; emu_last_length = 0x0022; emu_last_crc = 0x7AE1; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_subw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00, -0x7E15));
	emu_addw(&emu_si, emu_ax.x);
	emu_movw(&emu_ax.x, emu_si);
	f__B518_10D6_0006_137A(); return;
}

/**
 * Decompiled function f__B518_10D6_0006_137A()
 *
 * @name f__B518_10D6_0006_137A
 * @implements B518:10D6:0006:137A ()
 *
 * Called From: B518:10D4:0022:7AE1
 */
void f__B518_10D6_0006_137A()
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
 * Decompiled function f__B518_10DC_0011_8A9C()
 *
 * @name f__B518_10DC_0011_8A9C
 * @implements B518:10DC:0011:8A9C ()
 *
 * Called From: B518:065B:000C:56CE
 */
void f__B518_10DC_0011_8A9C()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x6);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_di, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movw(&emu_si, 0x1);
	f__B518_11B4_0008_F7A2(); return;
}

/**
 * Decompiled function f__B518_10ED_000C_E92E()
 *
 * @name f__B518_10ED_000C_E92E
 * @implements B518:10ED:000C:E92E ()
 *
 * Called From: B518:11B9:0008:F7A2
 * Called From: B518:11B9:000D:0BB6
 */
void f__B518_10ED_000C_E92E()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx.x,  0x6), emu_di);
	if ((emu_flags.sf != emu_flags.of)) { f__B518_10F9_001C_160C(); return; }
	f__B518_11AF_000D_0BB6(); return;
}

/**
 * Decompiled function f__B518_10F9_001C_160C()
 *
 * @name f__B518_10F9_001C_160C
 * @implements B518:10F9:001C:160C ()
 *
 * Called From: B518:10F4:000C:E92E
 */
void f__B518_10F9_001C_160C()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_movw(&emu_dx.x, 0x80);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_addw(&emu_ax.x, 0x80);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x1115); emu_cs = 0x2B0E; f__2B0E_0006_0049_1E3C();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_1115_0023_0240();
}

/**
 * Decompiled function f__B518_1115_0023_0240()
 *
 * @name f__B518_1115_0023_0240
 * @implements B518:1115:0023:0240 ()
 *
 * Called From: B518:1115:001C:160C
 */
void f__B518_1115_0023_0240()
{
	emu_addws(&emu_sp, 0xC);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_movw(&emu_dx.x, 0x80);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_addw(&emu_ax.x, 0x10);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_addw(&emu_ax.x, 0x80);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x1138); emu_cs = 0x2B0E; f__2B0E_0006_0049_1E3C();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_1138_0015_3EB5();
}

/**
 * Decompiled function f__B518_1138_0015_3EB5()
 *
 * @name f__B518_1138_0015_3EB5
 * @implements B518:1138:0015:3EB5 ()
 *
 * Called From: B518:1138:0023:0240
 */
void f__B518_1138_0015_3EB5()
{
	emu_addws(&emu_sp, 0xC);
	emu_movw(&emu_ax.x, 0x6);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x114D); emu_cs = 0x01F7; f__01F7_2947_0014_9C5E();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_114D_0019_6CF9();
}

/**
 * Decompiled function f__B518_114D_0019_6CF9()
 *
 * @name f__B518_114D_0019_6CF9
 * @implements B518:114D:0019:6CF9 ()
 *
 * Called From: B518:114D:0015:3EB5
 */
void f__B518_114D_0019_6CF9()
{
	emu_addws(&emu_sp, 0x8);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x6), emu_di);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3A38));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0xC), emu_ax.x);
	emu_push(emu_di);
	emu_push(emu_cs);
	emu_push(0x1166); f__B518_0F22_0007_13E8();
	f__B518_1166_002E_7869();
}

/**
 * Decompiled function f__B518_1166_002E_7869()
 *
 * @name f__B518_1166_002E_7869
 * @implements B518:1166:002E:7869 ()
 *
 * Called From: B518:1166:0019:6CF9
 */
void f__B518_1166_002E_7869()
{
	emu_pop(&emu_cx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x8), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x38B2));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0xA), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_dx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0xE), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x0);
	f__B518_11A5_000A_062C(); return;
}

/**
 * Decompiled function f__B518_1194_001B_A533()
 *
 * @name f__B518_1194_001B_A533
 * @implements B518:1194:001B:A533 ()
 *
 * Called From: B518:11A9:000A:062C
 * Called From: B518:11A9:001B:A533
 */
void f__B518_1194_001B_A533()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x0));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_addw(&emu_get_memory16(emu_es, emu_bx.x,  0xE), emu_ax.x);
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0xE);
	if ((emu_flags.sf != emu_flags.of)) { f__B518_1194_001B_A533(); return; }
	emu_movw(&emu_ax.x, emu_si);
	f__B518_11C0_0006_137A(); return;
}

/**
 * Decompiled function f__B518_11A5_000A_062C()
 *
 * @name f__B518_11A5_000A_062C
 * @implements B518:11A5:000A:062C ()
 *
 * Called From: B518:1192:002E:7869
 */
void f__B518_11A5_000A_062C()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0xE);
	if ((emu_flags.sf != emu_flags.of)) { f__B518_1194_001B_A533(); return; }
	emu_movw(&emu_ax.x, emu_si);
	emu_ip = 0x11C0; emu_last_cs = 0xB518; emu_last_ip = 0x11AD; emu_last_length = 0x000A; emu_last_crc = 0x062C; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B518_11AF_000D_0BB6()
 *
 * @name f__B518_11AF_000D_0BB6
 * @implements B518:11AF:000D:0BB6 ()
 *
 * Called From: B518:10F6:000C:E92E
 */
void f__B518_11AF_000D_0BB6()
{
	emu_addws(&emu_get_memory16(emu_ss, emu_bp,  0x6), 0x10);
	emu_incw(&emu_si);
	emu_cmpws(&emu_si, 0x8);
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { emu_ip = 0x11BC; emu_last_cs = 0xB518; emu_last_ip = 0x11B7; emu_last_length = 0x000D; emu_last_crc = 0x0BB6; emu_call(); return; } // Jump does not resolve
	f__B518_10ED_000C_E92E(); return;
}

/**
 * Decompiled function f__B518_11B4_0008_F7A2()
 *
 * @name f__B518_11B4_0008_F7A2
 * @implements B518:11B4:0008:F7A2 ()
 *
 * Called From: B518:10EA:0011:8A9C
 */
void f__B518_11B4_0008_F7A2()
{
	emu_cmpws(&emu_si, 0x8);
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { emu_ip = 0x11BC; emu_last_cs = 0xB518; emu_last_ip = 0x11B7; emu_last_length = 0x0008; emu_last_crc = 0xF7A2; emu_call(); return; } // Jump does not resolve
	f__B518_10ED_000C_E92E(); return;
}

/**
 * Decompiled function f__B518_11C0_0006_137A()
 *
 * @name f__B518_11C0_0006_137A
 * @implements B518:11C0:0006:137A ()
 *
 * Called From: B518:11AD:001B:A533
 */
void f__B518_11C0_0006_137A()
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
 * Decompiled function f__B518_11C6_0011_5B02()
 *
 * @name f__B518_11C6_0011_5B02
 * @implements B518:11C6:0011:5B02 ()
 *
 * Called From: B518:066F:000E:F670
 * Called From: B518:066F:0014:F956
 * Called From: B518:07DA:0012:7746
 */
void f__B518_11C6_0011_5B02()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x8);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x11D7); emu_cs = 0x2598; f__2598_0000_0017_D681();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_11D7_0022_D2F6();
}

/**
 * Decompiled function f__B518_11D7_0022_D2F6()
 *
 * @name f__B518_11D7_0022_D2F6
 * @implements B518:11D7:0022:D2F6 ()
 *
 * Called From: B518:11D7:0011:5B02
 */
void f__B518_11D7_0022_D2F6()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax.x);
	emu_movw(&emu_ax.x, 0x74);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0xB2);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x137);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x50);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x8);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x353F);
	emu_movw(&emu_es, emu_ax.x);

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_es, 0x00,  0x6668);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_es, 0x00,  0x666A);
	emu_push(0x11F9);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A60D31: f__22A6_0D31_0015_D6F0(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0xB518; emu_last_ip = 0x11F4; emu_last_length = 0x0022; emu_last_crc = 0xD2F6;
			emu_call();
			return;
	}
	f__B518_11F9_001E_10C0();
}

/**
 * Decompiled function f__B518_11F9_001E_10C0()
 *
 * @name f__B518_11F9_001E_10C0
 * @implements B518:11F9:001E:10C0 ()
 *
 * Called From: B518:11F9:0022:D2F6
 */
void f__B518_11F9_001E_10C0()
{
	emu_addws(&emu_sp, 0xA);
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
	emu_push(emu_cs); emu_push(0x1217); emu_cs = 0x10E4; f__10E4_1EF1_0040_E33D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_1217_000C_1C0D();
}

/**
 * Decompiled function f__B518_1217_000C_1C0D()
 *
 * @name f__B518_1217_000C_1C0D
 * @implements B518:1217:000C:1C0D ()
 *
 * Called From: B518:1217:001E:10C0
 */
void f__B518_1217_000C_1C0D()
{
	emu_addws(&emu_sp, 0xE);
	emu_movw(&emu_ax.x, 0x145);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x1223); emu_cs = 0x0FCB; f__0FCB_005F_001C_147D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_1223_0008_74DE();
}

/**
 * Decompiled function f__B518_1223_0008_74DE()
 *
 * @name f__B518_1223_0008_74DE
 * @implements B518:1223:0008:74DE ()
 *
 * Called From: B518:1223:000C:1C0D
 */
void f__B518_1223_0008_74DE()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x122B); emu_cs = 0x2521; f__2521_0035_0015_2811();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_122B_0018_E0DE();
}

/**
 * Decompiled function f__B518_122B_0018_E0DE()
 *
 * @name f__B518_122B_0018_E0DE
 * @implements B518:122B:0018:E0DE ()
 *
 * Called From: B518:122B:0008:74DE
 */
void f__B518_122B_0018_E0DE()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_shrw(&emu_ax.x, 0x1);
	emu_addw(&emu_ax.x, 0xC);
	emu_movw(&emu_dx.x, 0x140);
	emu_subw(&emu_dx.x, emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_dx.x);
	emu_movw(&emu_ax.x, 0x144);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x1243); emu_cs = 0x0FCB; f__0FCB_005F_001C_147D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_1243_0008_74DE();
}

/**
 * Decompiled function f__B518_1243_0008_74DE()
 *
 * @name f__B518_1243_0008_74DE
 * @implements B518:1243:0008:74DE ()
 *
 * Called From: B518:1243:0018:E0DE
 */
void f__B518_1243_0008_74DE()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x124B); emu_cs = 0x2521; f__2521_0035_0015_2811();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_124B_000E_4415();
}

/**
 * Decompiled function f__B518_124B_000E_4415()
 *
 * @name f__B518_124B_000E_4415
 * @implements B518:124B:000E:4415 ()
 *
 * Called From: B518:124B:0008:74DE
 */
void f__B518_124B_000E_4415()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_shrw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x145);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x1259); emu_cs = 0x0FCB; f__0FCB_005F_001C_147D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_1259_0008_74DE();
}

/**
 * Decompiled function f__B518_1259_0008_74DE()
 *
 * @name f__B518_1259_0008_74DE
 * @implements B518:1259:0008:74DE ()
 *
 * Called From: B518:1259:000E:4415
 */
void f__B518_1259_0008_74DE()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x1261); emu_cs = 0x2521; f__2521_0035_0015_2811();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_1261_002E_A992();
}

/**
 * Decompiled function f__B518_1261_002E_A992()
 *
 * @name f__B518_1261_002E_A992
 * @implements B518:1261:002E:A992 ()
 *
 * Called From: B518:1261:0008:74DE
 */
void f__B518_1261_002E_A992()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_shrw(&emu_ax.x, 0x1);
	emu_pop(&emu_dx.x);
	emu_addw(&emu_dx.x, emu_ax.x);
	emu_addws(&emu_dx.x, 0x8);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_subw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_movw(&emu_si, 0x50);
	emu_movw(&emu_ax.x, 0x22);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x8);
	emu_push(emu_ax.x);
	emu_push(emu_si);
	emu_movw(&emu_ax.x, 0x20);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x143);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x128F); emu_cs = 0x0FCB; f__0FCB_005F_001C_147D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_128F_0008_7B10();
}

/**
 * Decompiled function f__B518_128F_0008_7B10()
 *
 * @name f__B518_128F_0008_7B10
 * @implements B518:128F:0008:7B10 ()
 *
 * Called From: B518:128F:002E:A992
 */
void f__B518_128F_0008_7B10()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x1297); emu_cs = 0x10E4; f__10E4_1EF1_0040_E33D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_1297_001B_F75D();
}

/**
 * Decompiled function f__B518_1297_001B_F75D()
 *
 * @name f__B518_1297_001B_F75D
 * @implements B518:1297:001B:F75D ()
 *
 * Called From: B518:1297:0008:7B10
 */
void f__B518_1297_001B_F75D()
{
	emu_addws(&emu_sp, 0xE);
	emu_movw(&emu_ax.x, 0x122);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x8);
	emu_push(emu_ax.x);
	emu_push(emu_si);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax.x, 0x144);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x12B2); emu_cs = 0x0FCB; f__0FCB_005F_001C_147D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_12B2_0008_7B10();
}

/**
 * Decompiled function f__B518_12B2_0008_7B10()
 *
 * @name f__B518_12B2_0008_7B10
 * @implements B518:12B2:0008:7B10 ()
 *
 * Called From: B518:12B2:001B:F75D
 */
void f__B518_12B2_0008_7B10()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x12BA); emu_cs = 0x10E4; f__10E4_1EF1_0040_E33D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_12BA_001B_EE5D();
}

/**
 * Decompiled function f__B518_12BA_001B_EE5D()
 *
 * @name f__B518_12BA_001B_EE5D
 * @implements B518:12BA:001B:EE5D ()
 *
 * Called From: B518:12BA:0008:7B10
 */
void f__B518_12BA_001B_EE5D()
{
	emu_addws(&emu_sp, 0xE);
	emu_movw(&emu_ax.x, 0x122);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x8);
	emu_push(emu_ax.x);
	emu_push(emu_si);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movw(&emu_ax.x, 0x145);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x12D5); emu_cs = 0x0FCB; f__0FCB_005F_001C_147D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_12D5_0008_7B10();
}

/**
 * Decompiled function f__B518_12D5_0008_7B10()
 *
 * @name f__B518_12D5_0008_7B10
 * @implements B518:12D5:0008:7B10 ()
 *
 * Called From: B518:12D5:001B:EE5D
 */
void f__B518_12D5_0008_7B10()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x12DD); emu_cs = 0x10E4; f__10E4_1EF1_0040_E33D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_12DD_000C_24C5();
}

/**
 * Decompiled function f__B518_12DD_000C_24C5()
 *
 * @name f__B518_12DD_000C_24C5
 * @implements B518:12DD:000C:24C5 ()
 *
 * Called From: B518:12DD:0008:7B10
 */
void f__B518_12DD_000C_24C5()
{
	emu_addws(&emu_sp, 0xE);
	emu_movw(&emu_si, 0x5A);
	emu_movw(&emu_di, 0x1);
	f__B518_1481_0008_F664(); return;
}

/**
 * Decompiled function f__B518_12E9_000D_B98A()
 *
 * @name f__B518_12E9_000D_B98A
 * @implements B518:12E9:000D:B98A ()
 *
 * Called From: B518:1486:0008:F664
 * Called From: B518:1486:0013:CFBA
 */
void f__B518_12E9_000D_B98A()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x6), 0x0);
	if (!emu_flags.zf) { f__B518_12F6_0010_C761(); return; }
	f__B518_1489_000B_D39B(); return;
}

/**
 * Decompiled function f__B518_12F6_0010_C761()
 *
 * @name f__B518_12F6_0010_C761
 * @implements B518:12F6:0010:C761 ()
 *
 * Called From: B518:12F1:000D:B98A
 */
void f__B518_12F6_0010_C761()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x9939);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x1306); emu_cs = 0x01F7; f__01F7_38F6_0029_5C00();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_1306_0012_DFD8();
}

/**
 * Decompiled function f__B518_1306_0012_DFD8()
 *
 * @name f__B518_1306_0012_DFD8
 * @implements B518:1306:0012:DFD8 ()
 *
 * Called From: B518:1306:0010:C761
 */
void f__B518_1306_0012_DFD8()
{
	emu_addws(&emu_sp, 0x8);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x2C57);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x9939);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x1318); emu_cs = 0x01F7; f__01F7_384A_003F_A636();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_1318_001E_C42F();
}

/**
 * Decompiled function f__B518_1318_001E_C42F()
 *
 * @name f__B518_1318_001E_C42F
 * @implements B518:1318:001E:C42F ()
 *
 * Called From: B518:1318:0012:DFD8
 */
void f__B518_1318_001E_C42F()
{
	emu_addws(&emu_sp, 0x8);
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x37B6), 0x1);
	if (!emu_flags.zf) { f__B518_1370_0020_5A3E(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_bx.x, emu_get_memory16(emu_es, emu_bx.x,  0x8));
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_push(emu_get_memory16(emu_ds, emu_bx.x,  0x37C0));
	emu_push(emu_cs); emu_push(0x1336); emu_cs = 0x0FCB; emu_ip = 0x1395; emu_last_cs = 0xB518; emu_last_ip = 0x1331; emu_last_length = 0x001E; emu_last_crc = 0xC42F; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__B518_1370_0020_5A3E()
 *
 * @name f__B518_1370_0020_5A3E
 * @implements B518:1370:0020:5A3E ()
 *
 * Called From: B518:1320:001E:C42F
 */
void f__B518_1370_0020_5A3E()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0xC));
	emu_movw(&emu_dx.x, 0x1E);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, emu_bx.x,  0x37FA));
	emu_push(emu_get_memory16(emu_ds, emu_bx.x,  0x37F8));
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x9939);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x1390); emu_cs = 0x01F7; f__01F7_384A_003F_A636();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_1390_0012_3FD9();
}

/**
 * Decompiled function f__B518_1390_0012_3FD9()
 *
 * @name f__B518_1390_0012_3FD9
 * @implements B518:1390:0012:3FD9 ()
 *
 * Called From: B518:1390:0020:5A3E
 */
void f__B518_1390_0012_3FD9()
{
	emu_addws(&emu_sp, 0x8);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x2C58);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x9939);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x13A2); emu_cs = 0x01F7; f__01F7_384A_003F_A636();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_13A2_0017_DA92();
}

/**
 * Decompiled function f__B518_13A2_0017_DA92()
 *
 * @name f__B518_13A2_0017_DA92
 * @implements B518:13A2:0017:DA92 ()
 *
 * Called From: B518:13A2:0012:3FD9
 */
void f__B518_13A2_0017_DA92()
{
	emu_addws(&emu_sp, 0x8);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_bx.x, emu_get_memory16(emu_es, emu_bx.x,  0x8));
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_push(emu_get_memory16(emu_ds, emu_bx.x,  0x37C0));
	emu_push(emu_cs); emu_push(0x13B9); emu_cs = 0x0FCB; f__0FCB_005F_001C_147D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_13B9_000D_FC73();
}

/**
 * Decompiled function f__B518_13B9_000D_FC73()
 *
 * @name f__B518_13B9_000D_FC73
 * @implements B518:13B9:000D:FC73 ()
 *
 * Called From: B518:13B9:0017:DA92
 */
void f__B518_13B9_000D_FC73()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x9939);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x13C6); emu_cs = 0x01F7; f__01F7_384A_003F_A636();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_13C6_0028_70D1();
}

/**
 * Decompiled function f__B518_13C6_0028_70D1()
 *
 * @name f__B518_13C6_0028_70D1
 * @implements B518:13C6:0028:70D1 ()
 *
 * Called From: B518:13C6:000D:FC73
 */
void f__B518_13C6_0028_70D1()
{
	emu_addws(&emu_sp, 0x8);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x0));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.zf) { f__B518_13F8_001A_6EFC(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_addw(&emu_ax.x, 0xFFFC);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_addw(&emu_ax.x, 0xFFE0);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x9939);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x13EE); emu_cs = 0x2521; f__2521_0035_0015_2811();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_13EE_000A_BDA7();
}

/**
 * Decompiled function f__B518_13EE_000A_BDA7()
 *
 * @name f__B518_13EE_000A_BDA7
 * @implements B518:13EE:000A:BDA7 ()
 *
 * Called From: B518:13EE:0028:70D1
 */
void f__B518_13EE_000A_BDA7()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_pop(&emu_dx.x);
	emu_subw(&emu_dx.x, emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx.x);
	f__B518_1415_001B_ED79(); return;
}

/**
 * Decompiled function f__B518_13F8_001A_6EFC()
 *
 * @name f__B518_13F8_001A_6EFC
 * @implements B518:13F8:001A:6EFC ()
 *
 * Called From: B518:13D2:0028:70D1
 */
void f__B518_13F8_001A_6EFC()
{
	emu_movw(&emu_ax.x, 0x22);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0xF);
	emu_push(emu_ax.x);
	emu_push(emu_si);
	emu_movw(&emu_ax.x, 0x20);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x9939);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x1412); emu_cs = 0x10E4; f__10E4_1EF1_0040_E33D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_1412_001E_4D41();
}

/**
 * Decompiled function f__B518_1412_001E_4D41()
 *
 * @name f__B518_1412_001E_4D41
 * @implements B518:1412:001E:4D41 ()
 *
 * Called From: B518:1412:001A:6EFC
 */
void f__B518_1412_001E_4D41()
{
	emu_addws(&emu_sp, 0xE);
	emu_push(emu_di);
	emu_movw(&emu_ax.x, 0x222);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0xF);
	emu_push(emu_ax.x);
	emu_push(emu_si);
	emu_movw(&emu_ax.x, 0x18);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x2C5A);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x1430); emu_cs = 0x10E4; f__10E4_1EF1_0040_E33D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_1430_0023_A066();
}

/**
 * Decompiled function f__B518_1415_001B_ED79()
 *
 * @name f__B518_1415_001B_ED79
 * @implements B518:1415:001B:ED79 ()
 *
 * Called From: B518:13F6:000A:BDA7
 */
void f__B518_1415_001B_ED79()
{
	emu_push(emu_di);
	emu_movw(&emu_ax.x, 0x222);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0xF);
	emu_push(emu_ax.x);
	emu_push(emu_si);
	emu_movw(&emu_ax.x, 0x18);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x2C5A);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x1430); emu_cs = 0x10E4; f__10E4_1EF1_0040_E33D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_1430_0023_A066();
}

/**
 * Decompiled function f__B518_1430_0023_A066()
 *
 * @name f__B518_1430_0023_A066
 * @implements B518:1430:0023:A066 ()
 *
 * Called From: B518:1430:001E:4D41
 * Called From: B518:1430:001B:ED79
 */
void f__B518_1430_0023_A066()
{
	emu_addws(&emu_sp, 0x10);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xA));
	emu_movw(&emu_ax.x, 0x122);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0xF);
	emu_push(emu_ax.x);
	emu_push(emu_si);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x2C3E);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x1453); emu_cs = 0x10E4; f__10E4_1EF1_0040_E33D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_1453_0023_A066();
}

/**
 * Decompiled function f__B518_1453_0023_A066()
 *
 * @name f__B518_1453_0023_A066
 * @implements B518:1453:0023:A066 ()
 *
 * Called From: B518:1453:0023:A066
 */
void f__B518_1453_0023_A066()
{
	emu_addws(&emu_sp, 0x10);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x6));
	emu_movw(&emu_ax.x, 0x122);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0xF);
	emu_push(emu_ax.x);
	emu_push(emu_si);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x2C3E);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x1476); emu_cs = 0x10E4; f__10E4_1EF1_0040_E33D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_1476_0013_CFBA();
}

/**
 * Decompiled function f__B518_1476_0013_CFBA()
 *
 * @name f__B518_1476_0013_CFBA
 * @implements B518:1476:0013:CFBA ()
 *
 * Called From: B518:1476:0023:A066
 */
void f__B518_1476_0013_CFBA()
{
	emu_addws(&emu_sp, 0x10);
	emu_addws(&emu_si, 0xB);
	emu_addws(&emu_get_memory16(emu_ss, emu_bp,  0x6), 0x10);
	emu_incw(&emu_di);
	emu_cmpws(&emu_di, 0x8);
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { emu_ip = 0x1489; emu_last_cs = 0xB518; emu_last_ip = 0x1484; emu_last_length = 0x0013; emu_last_crc = 0xCFBA; emu_call(); return; } // Jump does not resolve
	f__B518_12E9_000D_B98A(); return;
}

/**
 * Decompiled function f__B518_1481_0008_F664()
 *
 * @name f__B518_1481_0008_F664
 * @implements B518:1481:0008:F664 ()
 *
 * Called From: B518:12E6:000C:24C5
 */
void f__B518_1481_0008_F664()
{
	emu_cmpws(&emu_di, 0x8);
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { emu_ip = 0x1489; emu_last_cs = 0xB518; emu_last_ip = 0x1484; emu_last_length = 0x0008; emu_last_crc = 0xF664; emu_call(); return; } // Jump does not resolve
	f__B518_12E9_000D_B98A(); return;
}

/**
 * Decompiled function f__B518_1489_000B_D39B()
 *
 * @name f__B518_1489_000B_D39B
 * @implements B518:1489:000B:D39B ()
 *
 * Called From: B518:12F3:000D:B98A
 */
void f__B518_1489_000B_D39B()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0xA), 0x0);
	if (emu_flags.zf) { f__B518_14C0_0008_EB6A(); return; }
	emu_push(emu_cs); emu_push(0x1494); emu_cs = 0x2B6C; f__2B6C_0137_0020_17E5();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_1494_0024_60A8();
}

/**
 * Decompiled function f__B518_1494_0024_60A8()
 *
 * @name f__B518_1494_0024_60A8
 * @implements B518:1494:0024:60A8 ()
 *
 * Called From: B518:1494:000B:D39B
 */
void f__B518_1494_0024_60A8()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x64);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x26);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x50);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x50);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x14B8); emu_cs = 0x24D0; f__24D0_000D_0039_9224();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_14B8_0008_F13E();
}

/**
 * Decompiled function f__B518_14B8_0008_F13E()
 *
 * @name f__B518_14B8_0008_F13E
 * @implements B518:14B8:0008:F13E ()
 *
 * Called From: B518:14B8:0024:60A8
 */
void f__B518_14B8_0008_F13E()
{
	emu_addws(&emu_sp, 0x10);
	emu_push(emu_cs); emu_push(0x14C0); emu_cs = 0x2B6C; f__2B6C_0169_001E_97C8();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_14C0_0008_EB6A();
}

/**
 * Decompiled function f__B518_14C0_0008_EB6A()
 *
 * @name f__B518_14C0_0008_EB6A
 * @implements B518:14C0:0008:EB6A ()
 *
 * Called From: B518:148D:000B:D39B
 * Called From: B518:14C0:0008:F13E
 */
void f__B518_14C0_0008_EB6A()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs); emu_push(0x14C8); emu_cs = 0x2598; f__2598_0000_0017_D681();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_14C8_0006_071C();
}

/**
 * Decompiled function f__B518_14C8_0006_071C()
 *
 * @name f__B518_14C8_0006_071C
 * @implements B518:14C8:0006:071C ()
 *
 * Called From: B518:14C8:0008:EB6A
 */
void f__B518_14C8_0006_071C()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	f__B518_14CE_0006_137A(); return;
}

/**
 * Decompiled function f__B518_14CE_0006_137A()
 *
 * @name f__B518_14CE_0006_137A
 * @implements B518:14CE:0006:137A ()
 *
 * Called From: B518:14CC:0006:071C
 */
void f__B518_14CE_0006_137A()
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
 * Decompiled function f__B518_14D4_0013_44E0()
 *
 * @name f__B518_14D4_0013_44E0
 * @implements B518:14D4:0013:44E0 ()
 *
 * Called From: B518:02F3:0009:5FFB
 * Called From: B518:030B:000B:F398
 * Called From: B518:0450:000A:FC04
 * Called From: B518:04DF:000A:1A76
 * Called From: B518:04F5:0009:4ECF
 */
void f__B518_14D4_0013_44E0()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cwd();
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x76B6), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x76B4), emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x14E7); f__B518_14F2_003E_63EE();
	f__B518_14E7_000B_1F65();
}

/**
 * Decompiled function f__B518_14E2_0005_158C()
 *
 * @name f__B518_14E2_0005_158C
 * @implements B518:14E2:0005:158C ()
 *
 * Called From: B518:14EE:000B:1F65
 */
void f__B518_14E2_0005_158C()
{
	emu_push(emu_cs);
	emu_push(0x14E7); f__B518_14F2_003E_63EE();
	f__B518_14E7_000B_1F65();
}

/**
 * Decompiled function f__B518_14E7_000B_1F65()
 *
 * @name f__B518_14E7_000B_1F65
 * @implements B518:14E7:000B:1F65 ()
 *
 * Called From: B518:14E7:0013:44E0
 * Called From: B518:14E7:0005:158C
 */
void f__B518_14E7_000B_1F65()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76B4));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76B6));
	if (!emu_flags.zf) { f__B518_14E2_0005_158C(); return; }
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B518_14F2_003E_63EE()
 *
 * @name f__B518_14F2_003E_63EE
 * @implements B518:14F2:003E:63EE ()
 *
 * Called From: 3518:0066:0005:13B8
 * Called From: 3518:0066:0005:117A
 * Called From: B518:0316:0005:16E6
 * Called From: B518:0323:0005:16B2
 * Called From: B518:03CC:0008:F00E
 * Called From: B518:050E:0005:163A
 * Called From: B518:0E1B:0015:7307
 * Called From: B518:14E4:0013:44E0
 * Called From: B518:14E4:0005:158C
 */
void f__B518_14F2_003E_63EE()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x2C3C));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x2C3A));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76AE));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { emu_ip = 0x156A; emu_last_cs = 0xB518; emu_last_ip = 0x1500; emu_last_length = 0x003E; emu_last_crc = 0x63EE; emu_call(); return; } // Jump does not resolve
	if ((emu_flags.sf != emu_flags.of)) { f__B518_150A_0026_7660(); return; }
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76AC));
	if (!emu_flags.cf) { f__B518_156A_0004_069C(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76AE));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76AC));
	emu_addws(&emu_dx.x, 0x2);
	emu_adcw(&emu_ax.x, 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x2C3C), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x2C3A), emu_dx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x7E13));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0x3F);
	if (emu_flags.cf) { f__B518_1530_0037_1049(); return; }
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x2C38), 0xFFFF);
	f__B518_1540_0027_9137(); return;
}

/**
 * Decompiled function f__B518_150A_0026_7660()
 *
 * @name f__B518_150A_0026_7660
 * @implements B518:150A:0026:7660 ()
 *
 * Called From: B518:1502:003E:63EE
 */
void f__B518_150A_0026_7660()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76AE));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76AC));
	emu_addws(&emu_dx.x, 0x2);
	emu_adcw(&emu_ax.x, 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x2C3C), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x2C3A), emu_dx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x7E13));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0x3F);
	if (emu_flags.cf) { f__B518_1530_0037_1049(); return; }
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x2C38), 0xFFFF);
	emu_ip = 0x1540; emu_last_cs = 0xB518; emu_last_ip = 0x152E; emu_last_length = 0x0026; emu_last_crc = 0x7660; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B518_1530_0037_1049()
 *
 * @name f__B518_1530_0037_1049
 * @implements B518:1530:0037:1049 ()
 *
 * Called From: B518:1526:0026:7660
 * Called From: B518:1526:003E:63EE
 */
void f__B518_1530_0037_1049()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x7E13));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0x23);
	if (!(emu_flags.cf || emu_flags.zf)) { f__B518_1540_0027_9137(); return; }
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x2C38), 0x1);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x7E13));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x0));
	emu_addb(&emu_ax.l, emu_get_memory8(emu_ds, 0x00,  0x2C38));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x7E13));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), emu_ax.l);
	emu_movw(&emu_ax.x, 0xFF);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0xFF);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3C34));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3C32));
	emu_push(emu_cs); emu_push(0x1567); emu_cs = 0x2BA5; f__2BA5_0006_009C_1FA4();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_1567_0007_771C();
}

/**
 * Decompiled function f__B518_1540_0027_9137()
 *
 * @name f__B518_1540_0027_9137
 * @implements B518:1540:0027:9137 ()
 *
 * Called From: B518:152E:003E:63EE
 * Called From: B518:1538:0037:1049
 */
void f__B518_1540_0027_9137()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x7E13));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x0));
	emu_addb(&emu_ax.l, emu_get_memory8(emu_ds, 0x00,  0x2C38));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x7E13));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), emu_ax.l);
	emu_movw(&emu_ax.x, 0xFF);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0xFF);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3C34));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3C32));
	emu_push(emu_cs); emu_push(0x1567); emu_cs = 0x2BA5; f__2BA5_0006_009C_1FA4();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_1567_0007_771C();
}

/**
 * Decompiled function f__B518_1567_0007_771C()
 *
 * @name f__B518_1567_0007_771C
 * @implements B518:1567:0007:771C ()
 *
 * Called From: B518:1567:0037:1049
 * Called From: B518:1567:0027:9137
 */
void f__B518_1567_0007_771C()
{
	emu_addws(&emu_sp, 0x8);
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__B518_156E_0002_00E2(); return;
}

/**
 * Decompiled function f__B518_156A_0004_069C()
 *
 * @name f__B518_156A_0004_069C
 * @implements B518:156A:0004:069C ()
 *
 * Called From: B518:1508:003E:63EE
 */
void f__B518_156A_0004_069C()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__B518_156E_0002_00E2(); return;
}

/**
 * Decompiled function f__B518_156E_0002_00E2()
 *
 * @name f__B518_156E_0002_00E2
 * @implements B518:156E:0002:00E2 ()
 *
 * Called From: B518:156C:0007:771C
 * Called From: B518:156C:0004:069C
 */
void f__B518_156E_0002_00E2()
{
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B518_1570_0016_239A()
 *
 * @name f__B518_1570_0016_239A
 * @implements B518:1570:0016:239A ()
 *
 * Called From: B518:07E8:000E:1511
 */
void f__B518_1570_0016_239A()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x4);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_dx.x);
	emu_xorw(&emu_cx.x, emu_cx.x);
	f__B518_159F_000A_7A59(); return;
}

/**
 * Decompiled function f__B518_1586_0023_7C17()
 *
 * @name f__B518_1586_0023_7C17
 * @implements B518:1586:0023:7C17 ()
 *
 * Called From: B518:15A3:000A:7A59
 * Called From: B518:15A3:0023:7C17
 */
void f__B518_1586_0023_7C17()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x0));
	emu_addb(&emu_ax.l, emu_cx.l);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), emu_ax.l);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_xorb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0xA7);
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_incw(&emu_cx.x);
	emu_cmpw(&emu_cx.x, 0x80);
	if ((emu_flags.sf != emu_flags.of)) { f__B518_1586_0023_7C17(); return; }
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B518_159F_000A_7A59()
 *
 * @name f__B518_159F_000A_7A59
 * @implements B518:159F:000A:7A59 ()
 *
 * Called From: B518:1584:0016:239A
 */
void f__B518_159F_000A_7A59()
{
	emu_cmpw(&emu_cx.x, 0x80);
	if ((emu_flags.sf != emu_flags.of)) { f__B518_1586_0023_7C17(); return; }
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B518_15A9_0016_239A()
 *
 * @name f__B518_15A9_0016_239A
 * @implements B518:15A9:0016:239A ()
 *
 * Called From: B518:0635:000E:B6C5
 */
void f__B518_15A9_0016_239A()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x4);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_dx.x);
	emu_xorw(&emu_cx.x, emu_cx.x);
	f__B518_15D8_000A_7A59(); return;
}

/**
 * Decompiled function f__B518_15BF_0023_8E16()
 *
 * @name f__B518_15BF_0023_8E16
 * @implements B518:15BF:0023:8E16 ()
 *
 * Called From: B518:15DC:000A:7A59
 * Called From: B518:15DC:0023:8E16
 */
void f__B518_15BF_0023_8E16()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_xorb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0xA7);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x0));
	emu_subb(&emu_ax.l, emu_cx.l);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), emu_ax.l);
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_incw(&emu_cx.x);
	emu_cmpw(&emu_cx.x, 0x80);
	if ((emu_flags.sf != emu_flags.of)) { f__B518_15BF_0023_8E16(); return; }
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B518_15D8_000A_7A59()
 *
 * @name f__B518_15D8_000A_7A59
 * @implements B518:15D8:000A:7A59 ()
 *
 * Called From: B518:15BD:0016:239A
 */
void f__B518_15D8_000A_7A59()
{
	emu_cmpw(&emu_cx.x, 0x80);
	if ((emu_flags.sf != emu_flags.of)) { f__B518_15BF_0023_8E16(); return; }
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

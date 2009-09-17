/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__B518_0000_0025_FC16()
 *
 * @name f__B518_0000_0025_FC16
 * @implements B518:0000:0025:FC16 ()
 *
 * Called From: 3518:0020:0005:0000
 */
void f__B518_0000_0025_FC16()
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
	emu_push(emu_cs); emu_push(0x0025); emu_cs = 0x01F7; f__01F7_04E0_0004_E219();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_0025_0019_9691();
}

/**
 * Decompiled function f__B518_0025_0019_9691()
 *
 * @name f__B518_0025_0019_9691
 * @implements B518:0025:0019:9691 ()
 *
 * Called From: B518:0025:0025:FC16
 */
void f__B518_0025_0019_9691()
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
	emu_push(0x003E); f__B518_0F54_0023_0701();
	f__B518_003E_0012_348E();
}

/**
 * Decompiled function f__B518_003E_0012_348E()
 *
 * @name f__B518_003E_0012_348E
 * @implements B518:003E:0012:348E ()
 *
 * Called From: B518:003E:0019:9691
 */
void f__B518_003E_0012_348E()
{
	emu_addws(&emu_sp, 0xC);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0x12), emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x38B0), 0x1);
	if (!emu_flags.zf) { emu_ip = 0x0050; emu_last_cs = 0xB518; emu_last_ip = 0x0049; emu_last_length = 0x0012; emu_last_crc = 0x348E; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, 0x2);
	f__B518_0053_0008_40E7(); return;
}

/**
 * Decompiled function f__B518_0053_0008_40E7()
 *
 * @name f__B518_0053_0008_40E7
 * @implements B518:0053:0008:40E7 ()
 *
 * Called From: B518:004E:0012:348E
 */
void f__B518_0053_0008_40E7()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x16), emu_ax.x);
	emu_push(emu_cs); emu_push(0x005B); emu_cs = 0x2B6C; f__2B6C_0137_0020_C73F();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_005B_0008_8C69();
}

/**
 * Decompiled function f__B518_005B_0008_8C69()
 *
 * @name f__B518_005B_0008_8C69
 * @implements B518:005B:0008:8C69 ()
 *
 * Called From: B518:005B:0008:40E7
 */
void f__B518_005B_0008_8C69()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0063); emu_cs = 0x34E9; ovl__34E9(2);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_0063_000A_426B();
}

/**
 * Decompiled function f__B518_0063_000A_426B()
 *
 * @name f__B518_0063_000A_426B
 * @implements B518:0063:000A:426B ()
 *
 * Called From: B518:0063:0008:8C69
 */
void f__B518_0063_000A_426B()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x006D); emu_cs = 0x2598; f__2598_0000_0017_EB80();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_006D_000F_D58C();
}

/**
 * Decompiled function f__B518_006D_000F_D58C()
 *
 * @name f__B518_006D_000F_D58C
 * @implements B518:006D:000F:D58C ()
 *
 * Called From: B518:006D:000A:426B
 */
void f__B518_006D_000F_D58C()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x14), emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x12));
	emu_push(emu_cs);
	emu_push(0x007C); f__B518_0B1D_0014_307D();
	f__B518_007C_000F_0B6B();
}

/**
 * Decompiled function f__B518_007C_000F_0B6B()
 *
 * @name f__B518_007C_000F_0B6B
 * @implements B518:007C:000F:0B6B ()
 *
 * Called From: B518:007C:000F:D58C
 */
void f__B518_007C_000F_0B6B()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_ax.x, 0x53);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x1A);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x008B); emu_cs = 0x0FCB; f__0FCB_005F_001C_FDC4();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_008B_0008_6683();
}

/**
 * Decompiled function f__B518_008B_0008_6683()
 *
 * @name f__B518_008B_0008_6683
 * @implements B518:008B:0008:6683 ()
 *
 * Called From: B518:008B:000F:0B6B
 */
void f__B518_008B_0008_6683()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x0093); f__B518_0E2D_0023_FBEC();
	f__B518_0093_0010_30D5();
}

/**
 * Decompiled function f__B518_0093_0010_30D5()
 *
 * @name f__B518_0093_0010_30D5
 * @implements B518:0093:0010:30D5 ()
 *
 * Called From: B518:0093:0008:6683
 */
void f__B518_0093_0010_30D5()
{
	emu_addws(&emu_sp, 0x6);
	emu_movw(&emu_ax.x, 0x77);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x18);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x00A3); emu_cs = 0x0FCB; f__0FCB_005F_001C_FDC4();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_00A3_0008_6685();
}

/**
 * Decompiled function f__B518_00A3_0008_6685()
 *
 * @name f__B518_00A3_0008_6685
 * @implements B518:00A3:0008:6685 ()
 *
 * Called From: B518:00A3:0010:30D5
 */
void f__B518_00A3_0008_6685()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x00AB); f__B518_0E2D_0023_FBEC();
	f__B518_00AB_0017_653F();
}

/**
 * Decompiled function f__B518_00AB_0017_653F()
 *
 * @name f__B518_00AB_0017_653F
 * @implements B518:00AB:0017:653F ()
 *
 * Called From: B518:00AB:0008:6685
 */
void f__B518_00AB_0017_653F()
{
	emu_addws(&emu_sp, 0x6);
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x38B0), 0x1);
	if (emu_flags.zf) { f__B518_00CD_0009_3A38(); return; }
	emu_movw(&emu_ax.x, 0x9B);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x19);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x00C2); emu_cs = 0x0FCB; emu_ip = 0x0121; emu_last_cs = 0xB518; emu_last_ip = 0x00BD; emu_last_length = 0x0017; emu_last_crc = 0x653F; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__B518_00CD_0009_3A38()
 *
 * @name f__B518_00CD_0009_3A38
 * @implements B518:00CD:0009:3A38 ()
 *
 * Called From: B518:00B3:0017:653F
 */
void f__B518_00CD_0009_3A38()
{
	emu_movw(&emu_ax.x, 0x149);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x00D6); emu_cs = 0x0FCB; f__0FCB_005F_001C_FDC4();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_00D6_0008_1FFE();
}

/**
 * Decompiled function f__B518_00D6_0008_1FFE()
 *
 * @name f__B518_00D6_0008_1FFE
 * @implements B518:00D6:0008:1FFE ()
 *
 * Called From: B518:00D6:0009:3A38
 */
void f__B518_00D6_0008_1FFE()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x00DE); emu_cs = 0x2521; f__2521_0035_0015_AA0F();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_00DE_000C_08A3();
}

/**
 * Decompiled function f__B518_00DE_000C_08A3()
 *
 * @name f__B518_00DE_000C_08A3
 * @implements B518:00DE:000C:08A3 ()
 *
 * Called From: B518:00DE:0008:1FFE
 */
void f__B518_00DE_000C_08A3()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x14A);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x00EA); emu_cs = 0x0FCB; f__0FCB_005F_001C_FDC4();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_00EA_0008_1FFE();
}

/**
 * Decompiled function f__B518_00EA_0008_1FFE()
 *
 * @name f__B518_00EA_0008_1FFE
 * @implements B518:00EA:0008:1FFE ()
 *
 * Called From: B518:00EA:000C:08A3
 */
void f__B518_00EA_0008_1FFE()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x00F2); emu_cs = 0x2521; f__2521_0035_0015_AA0F();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_00F2_0010_9946();
}

/**
 * Decompiled function f__B518_00F2_0010_9946()
 *
 * @name f__B518_00F2_0010_9946
 * @implements B518:00F2:0010:9946 ()
 *
 * Called From: B518:00F2:0008:1FFE
 */
void f__B518_00F2_0010_9946()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_pop(&emu_dx.x);
	emu_cmpw(&emu_dx.x, emu_ax.x);
	if ((emu_flags.cf || emu_flags.zf)) { f__B518_010E_0009_3938(); return; }
	emu_movw(&emu_ax.x, 0x149);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0102); emu_cs = 0x0FCB; emu_ip = 0x0161; emu_last_cs = 0xB518; emu_last_ip = 0x00FD; emu_last_length = 0x0010; emu_last_crc = 0x9946; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__B518_010E_0009_3938()
 *
 * @name f__B518_010E_0009_3938
 * @implements B518:010E:0009:3938 ()
 *
 * Called From: B518:00F7:0010:9946
 */
void f__B518_010E_0009_3938()
{
	emu_movw(&emu_ax.x, 0x14A);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0117); emu_cs = 0x0FCB; f__0FCB_005F_001C_FDC4();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_0117_0008_1FFE();
}

/**
 * Decompiled function f__B518_0117_0008_1FFE()
 *
 * @name f__B518_0117_0008_1FFE
 * @implements B518:0117:0008:1FFE ()
 *
 * Called From: B518:0117:0009:3938
 */
void f__B518_0117_0008_1FFE()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x011F); emu_cs = 0x2521; f__2521_0035_0015_AA0F();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_011F_001B_F3A7();
}

/**
 * Decompiled function f__B518_011F_001B_F3A7()
 *
 * @name f__B518_011F_001B_F3A7
 * @implements B518:011F:001B:F3A7 ()
 *
 * Called From: B518:011F:0008:1FFE
 */
void f__B518_011F_001B_F3A7()
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
	f__B518_019D_0011_C777(); return;
}

/**
 * Decompiled function f__B518_013A_0026_A5B8()
 *
 * @name f__B518_013A_0026_A5B8
 * @implements B518:013A:0026:A5B8 ()
 *
 * Called From: B518:01A0:0011:C777
 * Called From: B518:01A0:0015:02B2
 */
void f__B518_013A_0026_A5B8()
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
	emu_push(emu_cs); emu_push(0x0160); emu_cs = 0x0FCB; f__0FCB_005F_001C_FDC4();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_0160_0008_0683();
}

/**
 * Decompiled function f__B518_0160_0008_0683()
 *
 * @name f__B518_0160_0008_0683
 * @implements B518:0160:0008:0683 ()
 *
 * Called From: B518:0160:0026:A5B8
 */
void f__B518_0160_0008_0683()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0168); emu_cs = 0x10E4; f__10E4_1EF1_0040_01F8();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_0168_0029_E5C5();
}

/**
 * Decompiled function f__B518_0168_0029_E5C5()
 *
 * @name f__B518_0168_0029_E5C5
 * @implements B518:0168:0029:E5C5 ()
 *
 * Called From: B518:0168:0008:0683
 */
void f__B518_0168_0029_E5C5()
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
	emu_push(emu_cs); emu_push(0x0191); emu_cs = 0x0FCB; f__0FCB_005F_001C_FDC4();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_0191_0008_0683();
}

/**
 * Decompiled function f__B518_0191_0008_0683()
 *
 * @name f__B518_0191_0008_0683
 * @implements B518:0191:0008:0683 ()
 *
 * Called From: B518:0191:0029:E5C5
 */
void f__B518_0191_0008_0683()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0199); emu_cs = 0x10E4; f__10E4_1EF1_0040_01F8();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_0199_0015_02B2();
}

/**
 * Decompiled function f__B518_0199_0015_02B2()
 *
 * @name f__B518_0199_0015_02B2
 * @implements B518:0199:0015:02B2 ()
 *
 * Called From: B518:0199:0008:0683
 */
void f__B518_0199_0015_02B2()
{
	emu_addws(&emu_sp, 0xE);
	emu_incw(&emu_si);
	emu_cmpw(&emu_si, emu_get_memory16(emu_ss, emu_bp, -0x16));
	if ((emu_flags.sf != emu_flags.of)) { f__B518_013A_0026_A5B8(); return; }
	emu_movw(&emu_ax.x, 0x5);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x01AE); emu_cs = 0x2537; f__2537_000C_001C_86CB();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_01AE_000B_69BA();
}

/**
 * Decompiled function f__B518_019D_0011_C777()
 *
 * @name f__B518_019D_0011_C777
 * @implements B518:019D:0011:C777 ()
 *
 * Called From: B518:0138:001B:F3A7
 */
void f__B518_019D_0011_C777()
{
	emu_cmpw(&emu_si, emu_get_memory16(emu_ss, emu_bp, -0x16));
	if ((emu_flags.sf != emu_flags.of)) { f__B518_013A_0026_A5B8(); return; }
	emu_movw(&emu_ax.x, 0x5);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x01AE); emu_cs = 0x2537; emu_ip = 0x01BA; emu_last_cs = 0xB518; emu_last_ip = 0x01A9; emu_last_length = 0x0011; emu_last_crc = 0xC777; emu_call(); // Jump does not resolve
	f__B518_01AE_000B_69BA();
}

/**
 * Decompiled function f__B518_01AE_000B_69BA()
 *
 * @name f__B518_01AE_000B_69BA
 * @implements B518:01AE:000B:69BA ()
 *
 * Called From: B518:01AE:0015:02B2
 */
void f__B518_01AE_000B_69BA()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_addw(&emu_ax.x, 0x11);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x01B9); emu_cs = 0x3483; ovl__3483(1);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_01B9_0021_2C9D();
}

/**
 * Decompiled function f__B518_01B9_0021_2C9D()
 *
 * @name f__B518_01B9_0021_2C9D
 * @implements B518:01B9:0021:2C9D ()
 *
 * Called From: B518:01B9:000B:69BA
 */
void f__B518_01B9_0021_2C9D()
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
	emu_push(emu_cs); emu_push(0x01DA); emu_cs = 0x24D0; f__24D0_000D_0039_C17D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_01DA_0008_2201();
}

/**
 * Decompiled function f__B518_01DA_0008_2201()
 *
 * @name f__B518_01DA_0008_2201
 * @implements B518:01DA:0008:2201 ()
 *
 * Called From: B518:01DA:0021:2C9D
 */
void f__B518_01DA_0008_2201()
{
	emu_addws(&emu_sp, 0x10);
	emu_push(emu_cs); emu_push(0x01E2); emu_cs = 0x29E8; f__29E8_073F_000E_6816();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_01E2_0029_5191();
}

/**
 * Decompiled function f__B518_01E2_0029_5191()
 *
 * @name f__B518_01E2_0029_5191
 * @implements B518:01E2:0029:5191 ()
 *
 * Called From: B518:01E2:0008:2201
 */
void f__B518_01E2_0029_5191()
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
	f__B518_02E1_000C_5B72(); return;
}

/**
 * Decompiled function f__B518_020B_002E_9375()
 *
 * @name f__B518_020B_002E_9375
 * @implements B518:020B:002E:9375 ()
 *
 * Called From: B518:02EA:000C:5B72
 * Called From: B518:02EA:000F:4E6B
 */
void f__B518_020B_002E_9375()
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
	if (!emu_flags.cf) { emu_ip = 0x0239; emu_last_cs = 0xB518; emu_last_ip = 0x0232; emu_last_length = 0x002E; emu_last_crc = 0x9375; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	f__B518_023C_000F_7435(); return;
}

/**
 * Decompiled function f__B518_023C_000F_7435()
 *
 * @name f__B518_023C_000F_7435
 * @implements B518:023C:000F:7435 ()
 *
 * Called From: B518:0237:002E:9375
 */
void f__B518_023C_000F_7435()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax.x);
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0xFDE8);
	if (!emu_flags.cf) { emu_ip = 0x024B; emu_last_cs = 0xB518; emu_last_ip = 0x0244; emu_last_length = 0x000F; emu_last_crc = 0x7435; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xA));
	f__B518_024E_0032_7CEE(); return;
}

/**
 * Decompiled function f__B518_024E_0032_7CEE()
 *
 * @name f__B518_024E_0032_7CEE
 * @implements B518:024E:0032:7CEE ()
 *
 * Called From: B518:0249:000F:7435
 */
void f__B518_024E_0032_7CEE()
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
	if ((emu_flags.cf || emu_flags.zf)) { emu_ip = 0x0280; emu_last_cs = 0xB518; emu_last_ip = 0x0279; emu_last_length = 0x0032; emu_last_crc = 0x7CEE; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	f__B518_0283_003B_0D74(); return;
}

/**
 * Decompiled function f__B518_0283_003B_0D74()
 *
 * @name f__B518_0283_003B_0D74
 * @implements B518:0283:003B:0D74 ()
 *
 * Called From: B518:027E:0032:7CEE
 */
void f__B518_0283_003B_0D74()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x1A));
	if ((emu_flags.cf || emu_flags.zf)) { f__B518_02BE_002F_4E63(); return; }
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
	f__B518_02DE_000F_4E6B(); return;
}

/**
 * Decompiled function f__B518_02BE_002F_4E63()
 *
 * @name f__B518_02BE_002F_4E63
 * @implements B518:02BE:002F:4E63 ()
 *
 * Called From: B518:028C:003B:0D74
 */
void f__B518_02BE_002F_4E63()
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
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__B518_02ED_0009_1C6A(); return; }
	emu_ip = 0x020B; emu_last_cs = 0xB518; emu_last_ip = 0x02EA; emu_last_length = 0x002F; emu_last_crc = 0x4E63; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B518_02DE_000F_4E6B()
 *
 * @name f__B518_02DE_000F_4E6B
 * @implements B518:02DE:000F:4E6B ()
 *
 * Called From: B518:02BC:003B:0D74
 */
void f__B518_02DE_000F_4E6B()
{
	emu_addws(&emu_si, 0x2);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x16));
	emu_shlw(&emu_ax.x, 0x1);
	emu_cmpw(&emu_ax.x, emu_si);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { emu_ip = 0x02ED; emu_last_cs = 0xB518; emu_last_ip = 0x02E8; emu_last_length = 0x000F; emu_last_crc = 0x4E6B; emu_call(); return; } // Jump does not resolve
	f__B518_020B_002E_9375(); return;
}

/**
 * Decompiled function f__B518_02E1_000C_5B72()
 *
 * @name f__B518_02E1_000C_5B72
 * @implements B518:02E1:000C:5B72 ()
 *
 * Called From: B518:0208:0029:5191
 */
void f__B518_02E1_000C_5B72()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x16));
	emu_shlw(&emu_ax.x, 0x1);
	emu_cmpw(&emu_ax.x, emu_si);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { emu_ip = 0x02ED; emu_last_cs = 0xB518; emu_last_ip = 0x02E8; emu_last_length = 0x000C; emu_last_crc = 0x5B72; emu_call(); return; } // Jump does not resolve
	f__B518_020B_002E_9375(); return;
}

/**
 * Decompiled function f__B518_02ED_0009_1C6A()
 *
 * @name f__B518_02ED_0009_1C6A
 * @implements B518:02ED:0009:1C6A ()
 *
 * Called From: B518:02E8:002F:4E63
 */
void f__B518_02ED_0009_1C6A()
{
	emu_movw(&emu_ax.x, 0x2D);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x02F6); f__B518_14D4_0013_5ED7();
	f__B518_02F6_000D_286D();
}

/**
 * Decompiled function f__B518_02F6_000D_286D()
 *
 * @name f__B518_02F6_000D_286D
 * @implements B518:02F6:000D:286D ()
 *
 * Called From: B518:02F6:0009:1C6A
 */
void f__B518_02F6_000D_286D()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x12));
	emu_push(emu_cs);
	emu_push(0x0303); f__B518_0EB1_000E_D2F5();
	f__B518_0303_000B_2A27();
}

/**
 * Decompiled function f__B518_0303_000B_2A27()
 *
 * @name f__B518_0303_000B_2A27
 * @implements B518:0303:000B:2A27 ()
 *
 * Called From: B518:0303:000D:286D
 */
void f__B518_0303_000B_2A27()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_ax.x, 0x2D);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x030E); f__B518_14D4_0013_5ED7();
	f__B518_030E_0006_980F();
}

/**
 * Decompiled function f__B518_030E_0006_980F()
 *
 * @name f__B518_030E_0006_980F
 * @implements B518:030E:0006:980F ()
 *
 * Called From: B518:030E:000B:2A27
 */
void f__B518_030E_0006_980F()
{
	emu_pop(&emu_cx.x);
	emu_xorw(&emu_si, emu_si);
	f__B518_04FA_0008_4223(); return;
}

/**
 * Decompiled function f__B518_0314_0005_B136()
 *
 * @name f__B518_0314_0005_B136
 * @implements B518:0314:0005:B136 ()
 *
 * Called From: B518:04FF:0008:4223
 * Called From: B518:04FF:000A:5440
 */
void f__B518_0314_0005_B136()
{
	emu_push(emu_cs);
	emu_push(0x0319); f__B518_14F2_003E_977C();
	f__B518_0319_0008_621E();
}

/**
 * Decompiled function f__B518_0319_0008_621E()
 *
 * @name f__B518_0319_0008_621E
 * @implements B518:0319:0008:621E ()
 *
 * Called From: B518:0319:0005:B136
 */
void f__B518_0319_0008_621E()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x0);
	f__B518_04E6_0009_2679(); return;
}

/**
 * Decompiled function f__B518_0321_0005_F133()
 *
 * @name f__B518_0321_0005_F133
 * @implements B518:0321:0005:F133 ()
 *
 * Called From: B518:04EC:0009:2679
 * Called From: B518:04EC:000D:1E03
 */
void f__B518_0321_0005_F133()
{
	emu_push(emu_cs);
	emu_push(0x0326); f__B518_14F2_003E_977C();
	f__B518_0326_000D_748B();
}

/**
 * Decompiled function f__B518_0326_000D_748B()
 *
 * @name f__B518_0326_000D_748B
 * @implements B518:0326:000D:748B ()
 *
 * Called From: B518:0326:0005:F133
 */
void f__B518_0326_000D_748B()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x0);
	if (!emu_flags.zf) { f__B518_0333_0054_72C1(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x12), 0xFF);
	f__B518_0338_004F_E2B6(); return;
}

/**
 * Decompiled function f__B518_0333_0054_72C1()
 *
 * @name f__B518_0333_0054_72C1
 * @implements B518:0333:0054:72C1 ()
 *
 * Called From: B518:032A:000D:748B
 */
void f__B518_0333_0054_72C1()
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
	f__B518_045D_000B_135B(); return;
}

/**
 * Decompiled function f__B518_0338_004F_E2B6()
 *
 * @name f__B518_0338_004F_E2B6
 * @implements B518:0338:004F:E2B6 ()
 *
 * Called From: B518:0331:000D:748B
 */
void f__B518_0338_004F_E2B6()
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
	f__B518_045D_000B_135B(); return;
}

/**
 * Decompiled function f__B518_0387_001D_D1AB()
 *
 * @name f__B518_0387_001D_D1AB
 * @implements B518:0387:001D:D1AB ()
 *
 * Called From: B518:0465:000B:135B
 * Called From: B518:0465:0015:75C7
 */
void f__B518_0387_001D_D1AB()
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
		case 0x22A60D31: f__22A6_0D31_0015_A4C3(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0xB518; emu_last_ip = 0x039F; emu_last_length = 0x001D; emu_last_crc = 0xD1AB;
			emu_call();
			return;
	}
	f__B518_03A4_0023_39C3();
}

/**
 * Decompiled function f__B518_03A4_0023_39C3()
 *
 * @name f__B518_03A4_0023_39C3
 * @implements B518:03A4:0023:39C3 ()
 *
 * Called From: B518:03A4:001D:D1AB
 */
void f__B518_03A4_0023_39C3()
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
	emu_push(emu_cs); emu_push(0x03C7); emu_cs = 0x10E4; f__10E4_1EF1_0040_01F8();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_03C7_0008_F380();
}

/**
 * Decompiled function f__B518_03C7_0008_F380()
 *
 * @name f__B518_03C7_0008_F380
 * @implements B518:03C7:0008:F380 ()
 *
 * Called From: B518:03C7:0023:39C3
 */
void f__B518_03C7_0008_F380()
{
	emu_addws(&emu_sp, 0x10);
	emu_push(emu_cs);
	emu_push(0x03CF); f__B518_14F2_003E_977C();
	f__B518_03CF_0026_F217();
}

/**
 * Decompiled function f__B518_03CF_0026_F217()
 *
 * @name f__B518_03CF_0026_F217
 * @implements B518:03CF:0026:F217 ()
 *
 * Called From: B518:03CF:0008:F380
 */
void f__B518_03CF_0026_F217()
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
		case 0x22A6094D: f__22A6_094D_000C_EC7D(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0xB518; emu_last_ip = 0x03F0; emu_last_length = 0x0026; emu_last_crc = 0xF217;
			emu_call();
			return;
	}
	f__B518_03F5_0024_F6ED();
}

/**
 * Decompiled function f__B518_03F5_0024_F6ED()
 *
 * @name f__B518_03F5_0024_F6ED
 * @implements B518:03F5:0024:F6ED ()
 *
 * Called From: B518:03F5:0026:F217
 */
void f__B518_03F5_0024_F6ED()
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
		case 0x22A6094D: f__22A6_094D_000C_EC7D(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0xB518; emu_last_ip = 0x0414; emu_last_length = 0x0024; emu_last_crc = 0xF6ED;
			emu_call();
			return;
	}
	f__B518_0419_0024_9C33();
}

/**
 * Decompiled function f__B518_0419_0024_9C33()
 *
 * @name f__B518_0419_0024_9C33
 * @implements B518:0419:0024:9C33 ()
 *
 * Called From: B518:0419:0024:F6ED
 */
void f__B518_0419_0024_9C33()
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
		case 0x22A6034F: f__22A6_034F_000C_5E0A(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0xB518; emu_last_ip = 0x0438; emu_last_length = 0x0024; emu_last_crc = 0x9C33;
			emu_call();
			return;
	}
	f__B518_043D_000C_4297();
}

/**
 * Decompiled function f__B518_043D_000C_4297()
 *
 * @name f__B518_043D_000C_4297
 * @implements B518:043D:000C:4297 ()
 *
 * Called From: B518:043D:0024:9C33
 */
void f__B518_043D_000C_4297()
{
	emu_addws(&emu_sp, 0x10);
	emu_movw(&emu_ax.x, 0x34);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0449); emu_cs = 0x1DD7; f__1DD7_0477_000E_5C89();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_0449_000A_C8F6();
}

/**
 * Decompiled function f__B518_0449_000A_C8F6()
 *
 * @name f__B518_0449_000A_C8F6
 * @implements B518:0449:000A:C8F6 ()
 *
 * Called From: B518:0449:000C:4297
 */
void f__B518_0449_000A_C8F6()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x76B4));
	emu_push(emu_cs);
	emu_push(0x0453); f__B518_14D4_0013_5ED7();
	f__B518_0453_0015_75C7();
}

/**
 * Decompiled function f__B518_0453_0015_75C7()
 *
 * @name f__B518_0453_0015_75C7
 * @implements B518:0453:0015:75C7 ()
 *
 * Called From: B518:0453:000A:C8F6
 */
void f__B518_0453_0015_75C7()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xE));
	if (!emu_flags.cf) { f__B518_0468_001D_D1AB(); return; }
	f__B518_0387_001D_D1AB(); return;
}

/**
 * Decompiled function f__B518_045D_000B_135B()
 *
 * @name f__B518_045D_000B_135B
 * @implements B518:045D:000B:135B ()
 *
 * Called From: B518:0384:004F:E2B6
 * Called From: B518:0384:0054:72C1
 */
void f__B518_045D_000B_135B()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xE));
	if (!emu_flags.cf) { f__B518_0468_001D_D1AB(); return; }
	f__B518_0387_001D_D1AB(); return;
}

/**
 * Decompiled function f__B518_0468_001D_D1AB()
 *
 * @name f__B518_0468_001D_D1AB
 * @implements B518:0468:001D:D1AB ()
 *
 * Called From: B518:0463:0015:75C7
 * Called From: B518:0463:000B:135B
 */
void f__B518_0468_001D_D1AB()
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
		case 0x22A60D31: f__22A6_0D31_0015_A4C3(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0xB518; emu_last_ip = 0x0480; emu_last_length = 0x001D; emu_last_crc = 0xD1AB;
			emu_call();
			return;
	}
	f__B518_0485_0023_3903();
}

/**
 * Decompiled function f__B518_0485_0023_3903()
 *
 * @name f__B518_0485_0023_3903
 * @implements B518:0485:0023:3903 ()
 *
 * Called From: B518:0485:001D:D1AB
 */
void f__B518_0485_0023_3903()
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
	emu_push(emu_cs); emu_push(0x04A8); emu_cs = 0x10E4; f__10E4_1EF1_0040_01F8();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_04A8_0024_1C35();
}

/**
 * Decompiled function f__B518_04A8_0024_1C35()
 *
 * @name f__B518_04A8_0024_1C35
 * @implements B518:04A8:0024:1C35 ()
 *
 * Called From: B518:04A8:0023:3903
 */
void f__B518_04A8_0024_1C35()
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
		case 0x22A6034F: f__22A6_034F_000C_5E0A(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0xB518; emu_last_ip = 0x04C7; emu_last_length = 0x0024; emu_last_crc = 0x1C35;
			emu_call();
			return;
	}
	f__B518_04CC_000C_5097();
}

/**
 * Decompiled function f__B518_04CC_000C_5097()
 *
 * @name f__B518_04CC_000C_5097
 * @implements B518:04CC:000C:5097 ()
 *
 * Called From: B518:04CC:0024:1C35
 */
void f__B518_04CC_000C_5097()
{
	emu_addws(&emu_sp, 0x10);
	emu_movw(&emu_ax.x, 0x26);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x04D8); emu_cs = 0x1DD7; f__1DD7_0477_000E_5C89();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_04D8_000A_2421();
}

/**
 * Decompiled function f__B518_04D8_000A_2421()
 *
 * @name f__B518_04D8_000A_2421
 * @implements B518:04D8:000A:2421 ()
 *
 * Called From: B518:04D8:000C:5097
 */
void f__B518_04D8_000A_2421()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_ax.x, 0xC);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x04E2); f__B518_14D4_0013_5ED7();
	f__B518_04E2_000D_1E03();
}

/**
 * Decompiled function f__B518_04E2_000D_1E03()
 *
 * @name f__B518_04E2_000D_1E03
 * @implements B518:04E2:000D:1E03 ()
 *
 * Called From: B518:04E2:000A:2421
 */
void f__B518_04E2_000D_1E03()
{
	emu_pop(&emu_cx.x);
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x2);
	if (!(emu_flags.sf != emu_flags.of)) { f__B518_04EF_0009_826A(); return; }
	f__B518_0321_0005_F133(); return;
}

/**
 * Decompiled function f__B518_04E6_0009_2679()
 *
 * @name f__B518_04E6_0009_2679
 * @implements B518:04E6:0009:2679 ()
 *
 * Called From: B518:031E:0008:621E
 */
void f__B518_04E6_0009_2679()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x2);
	if (!(emu_flags.sf != emu_flags.of)) { emu_ip = 0x04EF; emu_last_cs = 0xB518; emu_last_ip = 0x04EA; emu_last_length = 0x0009; emu_last_crc = 0x2679; emu_call(); return; } // Jump does not resolve
	f__B518_0321_0005_F133(); return;
}

/**
 * Decompiled function f__B518_04EF_0009_826A()
 *
 * @name f__B518_04EF_0009_826A
 * @implements B518:04EF:0009:826A ()
 *
 * Called From: B518:04EA:000D:1E03
 */
void f__B518_04EF_0009_826A()
{
	emu_movw(&emu_ax.x, 0x3C);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x04F8); f__B518_14D4_0013_5ED7();
	f__B518_04F8_000A_5440();
}

/**
 * Decompiled function f__B518_04F8_000A_5440()
 *
 * @name f__B518_04F8_000A_5440
 * @implements B518:04F8:000A:5440 ()
 *
 * Called From: B518:04F8:0009:826A
 */
void f__B518_04F8_000A_5440()
{
	emu_pop(&emu_cx.x);
	emu_incw(&emu_si);
	emu_cmpw(&emu_si, emu_get_memory16(emu_ss, emu_bp, -0x16));
	if (!(emu_flags.sf != emu_flags.of)) { f__B518_0502_0005_816D(); return; }
	f__B518_0314_0005_B136(); return;
}

/**
 * Decompiled function f__B518_04FA_0008_4223()
 *
 * @name f__B518_04FA_0008_4223
 * @implements B518:04FA:0008:4223 ()
 *
 * Called From: B518:0311:0006:980F
 */
void f__B518_04FA_0008_4223()
{
	emu_cmpw(&emu_si, emu_get_memory16(emu_ss, emu_bp, -0x16));
	if (!(emu_flags.sf != emu_flags.of)) { emu_ip = 0x0502; emu_last_cs = 0xB518; emu_last_ip = 0x04FD; emu_last_length = 0x0008; emu_last_crc = 0x4223; emu_call(); return; } // Jump does not resolve
	f__B518_0314_0005_B136(); return;
}

/**
 * Decompiled function f__B518_0502_0005_816D()
 *
 * @name f__B518_0502_0005_816D
 * @implements B518:0502:0005:816D ()
 *
 * Called From: B518:04FD:000A:5440
 */
void f__B518_0502_0005_816D()
{
	emu_push(emu_cs); emu_push(0x0507); emu_cs = 0x2B6C; f__2B6C_0169_001E_6939();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_0507_0005_E089();
}

/**
 * Decompiled function f__B518_0507_0005_E089()
 *
 * @name f__B518_0507_0005_E089
 * @implements B518:0507:0005:E089 ()
 *
 * Called From: B518:0507:0005:816D
 */
void f__B518_0507_0005_E089()
{
	emu_push(emu_cs); emu_push(0x050C); emu_cs = 0x29E8; f__29E8_073F_000E_6816();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_050C_0005_BE38();
}

/**
 * Decompiled function f__B518_050C_0005_BE38()
 *
 * @name f__B518_050C_0005_BE38
 * @implements B518:050C:0005:BE38 ()
 *
 * Called From: B518:050C:0005:E089
 * Called From: B518:0518:0009:6867
 */
void f__B518_050C_0005_BE38()
{
	emu_push(emu_cs);
	emu_push(0x0511); f__B518_14F2_003E_977C();
	f__B518_0511_0005_20AE();
}

/**
 * Decompiled function f__B518_0511_0005_20AE()
 *
 * @name f__B518_0511_0005_20AE
 * @implements B518:0511:0005:20AE ()
 *
 * Called From: B518:0511:0005:BE38
 */
void f__B518_0511_0005_20AE()
{
	emu_push(emu_cs); emu_push(0x0516); emu_cs = 0x29E8; f__29E8_0643_0008_ED98();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_0516_0009_6867();
}

/**
 * Decompiled function f__B518_0516_0009_6867()
 *
 * @name f__B518_0516_0009_6867
 * @implements B518:0516:0009:6867 ()
 *
 * Called From: B518:0516:0005:20AE
 */
void f__B518_0516_0009_6867()
{
	emu_orw(&emu_ax.x, emu_ax.x);
	if (emu_flags.zf) { f__B518_050C_0005_BE38(); return; }
	emu_push(emu_cs); emu_push(0x051F); emu_cs = 0x29E8; f__29E8_073F_000E_6816();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_051F_0008_0E60();
}

/**
 * Decompiled function f__B518_051F_0008_0E60()
 *
 * @name f__B518_051F_0008_0E60
 * @implements B518:051F:0008:0E60 ()
 *
 * Called From: B518:051F:0009:6867
 */
void f__B518_051F_0008_0E60()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x12));
	emu_push(emu_cs);
	emu_push(0x0527); f__B518_0558_0010_240A();
	f__B518_0527_001A_A983();
}

/**
 * Decompiled function f__B518_0527_001A_A983()
 *
 * @name f__B518_0527_001A_A983
 * @implements B518:0527:001A:A983 ()
 *
 * Called From: B518:0527:0008:0E60
 */
void f__B518_0527_001A_A983()
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
	emu_push(emu_cs); emu_push(0x0541); emu_cs = 0x01F7; f__01F7_28B8_0024_83C9();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_0541_000B_088C();
}

/**
 * Decompiled function f__B518_0541_000B_088C()
 *
 * @name f__B518_0541_000B_088C
 * @implements B518:0541:000B:088C ()
 *
 * Called From: B518:0541:001A:A983
 */
void f__B518_0541_000B_088C()
{
	emu_addws(&emu_sp, 0xA);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_push(emu_cs); emu_push(0x054C); emu_cs = 0x2598; f__2598_0000_0017_EB80();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_054C_0006_9F01();
}

/**
 * Decompiled function f__B518_054C_0006_9F01()
 *
 * @name f__B518_054C_0006_9F01
 * @implements B518:054C:0006:9F01 ()
 *
 * Called From: B518:054C:000B:088C
 */
void f__B518_054C_0006_9F01()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_cs); emu_push(0x0552); emu_cs = 0x1DD7; f__1DD7_0B53_0025_36F7();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_0552_0006_F7CE();
}

/**
 * Decompiled function f__B518_0552_0006_F7CE()
 *
 * @name f__B518_0552_0006_F7CE
 * @implements B518:0552:0006:F7CE ()
 *
 * Called From: B518:0552:0006:9F01
 */
void f__B518_0552_0006_F7CE()
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
 * Decompiled function f__B518_0558_0010_240A()
 *
 * @name f__B518_0558_0010_240A
 * @implements B518:0558:0010:240A ()
 *
 * Called From: 3518:0025:0005:0000
 * Called From: B518:0524:0008:0E60
 */
void f__B518_0558_0010_240A()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x2A);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x0568); emu_cs = 0x2B6C; f__2B6C_0137_0020_C73F();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_0568_000F_25FE();
}

/**
 * Decompiled function f__B518_0568_000F_25FE()
 *
 * @name f__B518_0568_000F_25FE
 * @implements B518:0568:000F:25FE ()
 *
 * Called From: B518:0568:0010:240A
 */
void f__B518_0568_000F_25FE()
{
	emu_cmpws(&emu_si, 0xFF);
	if (!emu_flags.zf) { f__B518_058B_0009_C306(); return; }
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x2C41);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0577); emu_cs = 0x1FB5; f__1FB5_15B5_0015_6A00();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_0577_000B_D7C9();
}

/**
 * Decompiled function f__B518_0577_000B_D7C9()
 *
 * @name f__B518_0577_000B_D7C9
 * @implements B518:0577:000B:D7C9 ()
 *
 * Called From: B518:0577:000F:25FE
 */
void f__B518_0577_000B_D7C9()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.zf) { f__B518_0585_000F_1D08(); return; }
	emu_push(emu_cs); emu_push(0x0582); emu_cs = 0x2B6C; emu_ip = 0x06EB; emu_last_cs = 0xB518; emu_last_ip = 0x057D; emu_last_length = 0x000B; emu_last_crc = 0xD7C9; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__B518_0585_000F_1D08()
 *
 * @name f__B518_0585_000F_1D08
 * @implements B518:0585:000F:1D08 ()
 *
 * Called From: B518:057B:000B:D7C9
 */
void f__B518_0585_000F_1D08()
{
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x7E15), 0x0);
	emu_movw(&emu_ax.x, 0x5);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0594); emu_cs = 0x252E; f__252E_0001_0018_08B3();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_0594_0011_90D1();
}

/**
 * Decompiled function f__B518_058B_0009_C306()
 *
 * @name f__B518_058B_0009_C306
 * @implements B518:058B:0009:C306 ()
 *
 * Called From: B518:056B:000F:25FE
 */
void f__B518_058B_0009_C306()
{
	emu_movw(&emu_ax.x, 0x5);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0594); emu_cs = 0x252E; f__252E_0001_0018_08B3();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_0594_0011_90D1();
}

/**
 * Decompiled function f__B518_0594_0011_90D1()
 *
 * @name f__B518_0594_0011_90D1
 * @implements B518:0594:0011:90D1 ()
 *
 * Called From: B518:0594:0009:C306
 * Called From: B518:0594:000F:1D08
 */
void f__B518_0594_0011_90D1()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x2C41);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x05A5); emu_cs = 0x1FB5; f__1FB5_15B5_0015_6A00();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_05A5_0018_9016();
}

/**
 * Decompiled function f__B518_05A5_0018_9016()
 *
 * @name f__B518_05A5_0018_9016
 * @implements B518:05A5:0018:9016 ()
 *
 * Called From: B518:05A5:0011:90D1
 */
void f__B518_05A5_0018_9016()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.zf) { f__B518_0613_0017_2C04(); return; }
	emu_movw(&emu_ax.x, 0x80);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_cs); emu_push(0x05BD); emu_cs = 0x01F7; f__01F7_2947_0014_02B8();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_05BD_000E_76AD();
}

/**
 * Decompiled function f__B518_05BD_000E_76AD()
 *
 * @name f__B518_05BD_000E_76AD
 * @implements B518:05BD:000E:76AD ()
 *
 * Called From: B518:05BD:0018:9016
 */
void f__B518_05BD_000E_76AD()
{
	emu_addws(&emu_sp, 0x8);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_cs);
	emu_push(0x05CB); f__B518_1570_0016_F4CA();
	f__B518_05CB_0010_4D64();
}

/**
 * Decompiled function f__B518_05CB_0010_4D64()
 *
 * @name f__B518_05CB_0010_4D64
 * @implements B518:05CB:0010:4D64 ()
 *
 * Called From: B518:05CB:000E:76AD
 */
void f__B518_05CB_0010_4D64()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x2C41);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x05DB); emu_cs = 0x1FB5; f__1FB5_01FA_0010_F89C();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_05DB_0018_058D();
}

/**
 * Decompiled function f__B518_05DB_0018_058D()
 *
 * @name f__B518_05DB_0018_058D
 * @implements B518:05DB:0018:058D ()
 *
 * Called From: B518:05DB:0010:4D64
 */
void f__B518_05DB_0018_058D()
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
	emu_push(emu_cs); emu_push(0x05F3); emu_cs = 0x1FB5; f__1FB5_0E9C_001B_37D1();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_05F3_000F_00FF();
}

/**
 * Decompiled function f__B518_05F3_000F_00FF()
 *
 * @name f__B518_05F3_000F_00FF
 * @implements B518:05F3:000F:00FF ()
 *
 * Called From: B518:05F3:0018:058D
 */
void f__B518_05F3_000F_00FF()
{
	emu_addws(&emu_sp, 0xA);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), emu_ax.x);
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x0602); emu_cs = 0x1FB5; f__1FB5_09C7_0018_922D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_0602_0011_0A44();
}

/**
 * Decompiled function f__B518_0602_0011_0A44()
 *
 * @name f__B518_0602_0011_0A44
 * @implements B518:0602:0011:0A44 ()
 *
 * Called From: B518:0602:000F:00FF
 */
void f__B518_0602_0011_0A44()
{
	emu_pop(&emu_cx.x);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0xE), 0x0);
	if (!emu_flags.zf) { emu_ip = 0x0610; emu_last_cs = 0xB518; emu_last_ip = 0x0607; emu_last_length = 0x0011; emu_last_crc = 0x0A44; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x10), 0x80);
	if (emu_flags.zf) { f__B518_0613_0017_2C04(); return; }
	emu_ip = 0x0896; emu_last_cs = 0xB518; emu_last_ip = 0x0610; emu_last_length = 0x0011; emu_last_crc = 0x0A44; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B518_0613_0017_2C04()
 *
 * @name f__B518_0613_0017_2C04
 * @implements B518:0613:0017:2C04 ()
 *
 * Called From: B518:05A9:0018:9016
 * Called From: B518:060E:0011:0A44
 */
void f__B518_0613_0017_2C04()
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
	emu_push(emu_cs); emu_push(0x062A); emu_cs = 0x253D; f__253D_0000_0013_38F4();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_062A_000E_76D8();
}

/**
 * Decompiled function f__B518_062A_000E_76D8()
 *
 * @name f__B518_062A_000E_76D8
 * @implements B518:062A:000E:76D8 ()
 *
 * Called From: B518:062A:0017:2C04
 */
void f__B518_062A_000E_76D8()
{
	emu_addws(&emu_sp, 0xC);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_cs);
	emu_push(0x0638); f__B518_15A9_0016_F4CA();
	f__B518_0638_000C_688C();
}

/**
 * Decompiled function f__B518_0638_000C_688C()
 *
 * @name f__B518_0638_000C_688C
 * @implements B518:0638:000C:688C ()
 *
 * Called From: B518:0638:000E:76D8
 */
void f__B518_0638_000C_688C()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_push(emu_si);
	emu_push(emu_cs);
	emu_push(0x0644); f__B518_0B1D_0014_307D();
	f__B518_0644_000E_6EA6();
}

/**
 * Decompiled function f__B518_0644_000E_6EA6()
 *
 * @name f__B518_0644_000E_6EA6
 * @implements B518:0644:000E:6EA6 ()
 *
 * Called From: B518:0644:000C:688C
 */
void f__B518_0644_000E_6EA6()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_cmpws(&emu_si, 0xFF);
	if (!emu_flags.zf) { f__B518_0652_000C_93F1(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), 0x0);
	f__B518_0664_000E_13D1(); return;
}

/**
 * Decompiled function f__B518_0652_000C_93F1()
 *
 * @name f__B518_0652_000C_93F1
 * @implements B518:0652:000C:93F1 ()
 *
 * Called From: B518:0649:000E:6EA6
 */
void f__B518_0652_000C_93F1()
{
	emu_push(emu_si);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_cs);
	emu_push(0x065E); f__B518_10DC_0011_9EE1();
	f__B518_065E_0014_179F();
}

/**
 * Decompiled function f__B518_065E_0014_179F()
 *
 * @name f__B518_065E_0014_179F
 * @implements B518:065E:0014:179F ()
 *
 * Called From: B518:065E:000C:93F1
 */
void f__B518_065E_0014_179F()
{
	emu_addws(&emu_sp, 0x6);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_cs);
	emu_push(0x0672); f__B518_11C6_0011_1160();
	f__B518_0672_0026_840E();
}

/**
 * Decompiled function f__B518_0664_000E_13D1()
 *
 * @name f__B518_0664_000E_13D1
 * @implements B518:0664:000E:13D1 ()
 *
 * Called From: B518:0650:000E:6EA6
 */
void f__B518_0664_000E_13D1()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_cs);
	emu_push(0x0672); f__B518_11C6_0011_1160();
	f__B518_0672_0026_840E();
}

/**
 * Decompiled function f__B518_0672_0026_840E()
 *
 * @name f__B518_0672_0026_840E
 * @implements B518:0672:0026:840E ()
 *
 * Called From: B518:0672:0014:179F
 * Called From: B518:0672:000E:13D1
 */
void f__B518_0672_0026_840E()
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
	emu_push(emu_cs); emu_push(0x0698); emu_cs = 0x24D0; f__24D0_000D_0039_C17D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_0698_000C_9D96();
}

/**
 * Decompiled function f__B518_0698_000C_9D96()
 *
 * @name f__B518_0698_000C_9D96
 * @implements B518:0698:000C:9D96 ()
 *
 * Called From: B518:0698:0026:840E
 */
void f__B518_0698_000C_9D96()
{
	emu_addws(&emu_sp, 0x10);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0xC), 0x0);
	if (!emu_flags.zf) { f__B518_06A4_0029_41CB(); return; }
	f__B518_0823_0005_816D(); return;
}

/**
 * Decompiled function f__B518_06A4_0029_41CB()
 *
 * @name f__B518_06A4_0029_41CB
 * @implements B518:06A4:0029:41CB ()
 *
 * Called From: B518:069F:000C:9D96
 */
void f__B518_06A4_0029_41CB()
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
	emu_push(emu_cs); emu_push(0x06CD); emu_cs = 0x01F7; f__01F7_28B8_0024_83C9();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_06CD_004F_2992();
}

/**
 * Decompiled function f__B518_06CD_004F_2992()
 *
 * @name f__B518_06CD_004F_2992
 * @implements B518:06CD:004F:2992 ()
 *
 * Called From: B518:06CD:0029:41CB
 */
void f__B518_06CD_004F_2992()
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
	emu_push(emu_cs); emu_push(0x071C); emu_cs = 0x10E4; f__10E4_1EF1_0040_01F8();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_071C_0006_F720();
}

/**
 * Decompiled function f__B518_071C_0006_F720()
 *
 * @name f__B518_071C_0006_F720
 * @implements B518:071C:0006:F720 ()
 *
 * Called From: B518:071C:004F:2992
 */
void f__B518_071C_0006_F720()
{
	emu_addws(&emu_sp, 0xE);
	f__B518_07AA_000E_D7F2(); return;
}

/**
 * Decompiled function f__B518_0722_0008_64F7()
 *
 * @name f__B518_0722_0008_64F7
 * @implements B518:0722:0008:64F7 ()
 *
 * Called From: B518:07B5:000E:D7F2
 */
void f__B518_0722_0008_64F7()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x072A); emu_cs = 0x2598; f__2598_0000_0017_EB80();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_072A_000D_AD32();
}

/**
 * Decompiled function f__B518_072A_000D_AD32()
 *
 * @name f__B518_072A_000D_AD32
 * @implements B518:072A:000D:AD32 ()
 *
 * Called From: B518:072A:0008:64F7
 */
void f__B518_072A_000D_AD32()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x1A), emu_ax.x);
	emu_movw(&emu_ax.x, 0x13);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0737); emu_cs = 0x07AE; f__07AE_00E4_000D_9955();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_0737_0009_F1B5();
}

/**
 * Decompiled function f__B518_0737_0009_F1B5()
 *
 * @name f__B518_0737_0009_F1B5
 * @implements B518:0737:0009:F1B5 ()
 *
 * Called From: B518:0737:000D:AD32
 */
void f__B518_0737_0009_F1B5()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x1A));
	emu_push(emu_cs); emu_push(0x0740); emu_cs = 0x2598; f__2598_0000_0017_EB80();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_0740_0025_430D();
}

/**
 * Decompiled function f__B518_0740_0025_430D()
 *
 * @name f__B518_0740_0025_430D
 * @implements B518:0740:0025:430D ()
 *
 * Called From: B518:0740:0009:F1B5
 */
void f__B518_0740_0025_430D()
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
	f__B518_0765_0017_5D3C();
}

/**
 * Decompiled function f__B518_0765_0017_5D3C()
 *
 * @name f__B518_0765_0017_5D3C
 * @implements B518:0765:0017:5D3C ()
 *
 * Called From: B518:0765:0025:430D
 */
void f__B518_0765_0017_5D3C()
{
	emu_addws(&emu_sp, 0x12);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0x0);
	if (emu_flags.zf) { emu_ip = 0x07AA; emu_last_cs = 0xB518; emu_last_ip = 0x076F; emu_last_length = 0x0017; emu_last_crc = 0x5D3C; emu_call(); return; } // Jump does not resolve
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_cs); emu_push(0x077C); emu_cs = 0x01F7; f__01F7_39A5_001F_1A5D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_077C_0013_40D3();
}

/**
 * Decompiled function f__B518_077C_0013_40D3()
 *
 * @name f__B518_077C_0013_40D3
 * @implements B518:077C:0013:40D3 ()
 *
 * Called From: B518:077C:0017:5D3C
 */
void f__B518_077C_0013_40D3()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_decw(&emu_ax.x);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x16), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x18), emu_bx.x);
	f__B518_0799_001F_FC03(); return;
}

/**
 * Decompiled function f__B518_0799_001F_FC03()
 *
 * @name f__B518_0799_001F_FC03
 * @implements B518:0799:001F:FC03 ()
 *
 * Called From: B518:078D:0013:40D3
 */
void f__B518_0799_001F_FC03()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x18));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0x20);
	if (!(emu_flags.cf || emu_flags.zf)) { f__B518_07AA_000E_D7F2(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x18));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xA));
	if (!emu_flags.cf) { emu_ip = 0x078F; emu_last_cs = 0xB518; emu_last_ip = 0x07A8; emu_last_length = 0x001F; emu_last_crc = 0xFC03; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x0));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.zf) { emu_ip = 0x07B8; emu_last_cs = 0xB518; emu_last_ip = 0x07B3; emu_last_length = 0x001F; emu_last_crc = 0xFC03; emu_call(); return; } // Jump does not resolve
	emu_ip = 0x0722; emu_last_cs = 0xB518; emu_last_ip = 0x07B5; emu_last_length = 0x001F; emu_last_crc = 0xFC03; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B518_07AA_000E_D7F2()
 *
 * @name f__B518_07AA_000E_D7F2
 * @implements B518:07AA:000E:D7F2 ()
 *
 * Called From: B518:071F:0006:F720
 * Called From: B518:07A0:001F:FC03
 */
void f__B518_07AA_000E_D7F2()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x0));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.zf) { f__B518_07B8_0013_9031(); return; }
	f__B518_0722_0008_64F7(); return;
}

/**
 * Decompiled function f__B518_07B8_0013_9031()
 *
 * @name f__B518_07B8_0013_9031
 * @implements B518:07B8:0013:9031 ()
 *
 * Called From: B518:07B3:000E:D7F2
 */
void f__B518_07B8_0013_9031()
{
	emu_movw(&emu_ax.x, 0x10);
	emu_push(emu_ax.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0x2A);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x4192);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x07CB); emu_cs = 0x01F7; f__01F7_28B8_0024_83C9();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_07CB_0012_801B();
}

/**
 * Decompiled function f__B518_07CB_0012_801B()
 *
 * @name f__B518_07CB_0012_801B
 * @implements B518:07CB:0012:801B ()
 *
 * Called From: B518:07CB:0013:9031
 */
void f__B518_07CB_0012_801B()
{
	emu_addws(&emu_sp, 0xA);
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_cs);
	emu_push(0x07DD); f__B518_11C6_0011_1160();
	f__B518_07DD_000E_7745();
}

/**
 * Decompiled function f__B518_07DD_000E_7745()
 *
 * @name f__B518_07DD_000E_7745
 * @implements B518:07DD:000E:7745 ()
 *
 * Called From: B518:07DD:0012:801B
 */
void f__B518_07DD_000E_7745()
{
	emu_addws(&emu_sp, 0x6);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_cs);
	emu_push(0x07EB); f__B518_1570_0016_F4CA();
	f__B518_07EB_0010_4D64();
}

/**
 * Decompiled function f__B518_07EB_0010_4D64()
 *
 * @name f__B518_07EB_0010_4D64
 * @implements B518:07EB:0010:4D64 ()
 *
 * Called From: B518:07EB:000E:7745
 */
void f__B518_07EB_0010_4D64()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x2C41);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x07FB); emu_cs = 0x1FB5; f__1FB5_01FA_0010_F89C();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_07FB_0018_058D();
}

/**
 * Decompiled function f__B518_07FB_0018_058D()
 *
 * @name f__B518_07FB_0018_058D
 * @implements B518:07FB:0018:058D ()
 *
 * Called From: B518:07FB:0010:4D64
 */
void f__B518_07FB_0018_058D()
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
	emu_push(emu_cs); emu_push(0x0813); emu_cs = 0x1FB5; f__1FB5_0E9C_001B_37D1();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_0813_000F_00FF();
}

/**
 * Decompiled function f__B518_0813_000F_00FF()
 *
 * @name f__B518_0813_000F_00FF
 * @implements B518:0813:000F:00FF ()
 *
 * Called From: B518:0813:0018:058D
 */
void f__B518_0813_000F_00FF()
{
	emu_addws(&emu_sp, 0xA);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), emu_ax.x);
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x0822); emu_cs = 0x1FB5; f__1FB5_09C7_0018_922D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_0822_0006_E56C();
}

/**
 * Decompiled function f__B518_0822_0006_E56C()
 *
 * @name f__B518_0822_0006_E56C
 * @implements B518:0822:0006:E56C ()
 *
 * Called From: B518:0822:000F:00FF
 */
void f__B518_0822_0006_E56C()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_cs); emu_push(0x0828); emu_cs = 0x2B6C; f__2B6C_0169_001E_6939();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_0828_000B_5394();
}

/**
 * Decompiled function f__B518_0823_0005_816D()
 *
 * @name f__B518_0823_0005_816D
 * @implements B518:0823:0005:816D ()
 *
 * Called From: B518:06A1:000C:9D96
 */
void f__B518_0823_0005_816D()
{
	emu_push(emu_cs); emu_push(0x0828); emu_cs = 0x2B6C; f__2B6C_0169_001E_6939();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_0828_000B_5394();
}

/**
 * Decompiled function f__B518_0828_000B_5394()
 *
 * @name f__B518_0828_000B_5394
 * @implements B518:0828:000B:5394 ()
 *
 * Called From: B518:0828:0006:E56C
 * Called From: B518:0828:0005:816D
 */
void f__B518_0828_000B_5394()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_cs);
	emu_push(0x0833); f__B518_089C_001A_542C();
	f__B518_0833_000D_2172();
}

/**
 * Decompiled function f__B518_0833_000D_2172()
 *
 * @name f__B518_0833_000D_2172
 * @implements B518:0833:000D:2172 ()
 *
 * Called From: B518:0833:000B:5394
 */
void f__B518_0833_000D_2172()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x12), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x14), emu_ax.x);
	emu_push(emu_cs); emu_push(0x0840); emu_cs = 0x29E8; f__29E8_073F_000E_6816();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_0840_0008_64F7();
}

/**
 * Decompiled function f__B518_0840_0008_64F7()
 *
 * @name f__B518_0840_0008_64F7
 * @implements B518:0840:0008:64F7 ()
 *
 * Called From: B518:0840:000D:2172
 */
void f__B518_0840_0008_64F7()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0848); emu_cs = 0x2598; f__2598_0000_0017_EB80();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_0848_0012_6168();
}

/**
 * Decompiled function f__B518_0848_0012_6168()
 *
 * @name f__B518_0848_0012_6168
 * @implements B518:0848:0012:6168 ()
 *
 * Called From: B518:0848:0008:64F7
 */
void f__B518_0848_0012_6168()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x7E1A), 0x0);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_push(emu_cs); emu_push(0x085A); emu_cs = 0x34A2; ovl__34A2(2);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_085A_0014_A312();
}

/**
 * Decompiled function f__B518_084F_000B_8CFD()
 *
 * @name f__B518_084F_000B_8CFD
 * @implements B518:084F:000B:8CFD ()
 *
 * Called From: B518:0861:0014:A312
 */
void f__B518_084F_000B_8CFD()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_push(emu_cs); emu_push(0x085A); emu_cs = 0x34A2; ovl__34A2(2);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_085A_0014_A312();
}

/**
 * Decompiled function f__B518_085A_0014_A312()
 *
 * @name f__B518_085A_0014_A312
 * @implements B518:085A:0014:A312 ()
 *
 * Called From: B518:085A:0012:6168
 * Called From: B518:085A:000B:8CFD
 */
void f__B518_085A_0014_A312()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00, -0x7E1A), 0x0);
	if (emu_flags.zf) { f__B518_084F_000B_8CFD(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_push(emu_cs);
	emu_push(0x086E); f__B518_0A3E_0008_F439();
	f__B518_086E_0007_843A();
}

/**
 * Decompiled function f__B518_086E_0007_843A()
 *
 * @name f__B518_086E_0007_843A
 * @implements B518:086E:0007:843A ()
 *
 * Called From: B518:086E:0014:A312
 */
void f__B518_086E_0007_843A()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_push(emu_cs); emu_push(0x0875); emu_cs = 0x29E8; f__29E8_073F_000E_6816();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_0875_001E_C536();
}

/**
 * Decompiled function f__B518_0875_001E_C536()
 *
 * @name f__B518_0875_001E_C536
 * @implements B518:0875:001E:C536 ()
 *
 * Called From: B518:0875:0007:843A
 */
void f__B518_0875_001E_C536()
{
	emu_cmpws(&emu_si, 0xFF);
	if (emu_flags.zf) { f__B518_0896_0006_F7CE(); return; }
	emu_movw(&emu_ax.x, 0x3);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x81E8);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3C32));
	emu_addw(&emu_ax.x, 0x2FD);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3C34));
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0893); emu_cs = 0x01F7; f__01F7_28B8_0024_83C9();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_0893_0009_B39B();
}

/**
 * Decompiled function f__B518_0893_0009_B39B()
 *
 * @name f__B518_0893_0009_B39B
 * @implements B518:0893:0009:B39B ()
 *
 * Called From: B518:0893:001E:C536
 */
void f__B518_0893_0009_B39B()
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
 * Decompiled function f__B518_0896_0006_F7CE()
 *
 * @name f__B518_0896_0006_F7CE
 * @implements B518:0896:0006:F7CE ()
 *
 * Called From: B518:0878:001E:C536
 */
void f__B518_0896_0006_F7CE()
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
 * Decompiled function f__B518_089C_001A_542C()
 *
 * @name f__B518_089C_001A_542C
 * @implements B518:089C:001A:542C ()
 *
 * Called From: B518:0830:000B:5394
 */
void f__B518_089C_001A_542C()
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
	emu_push(emu_cs); emu_push(0x08B6); emu_cs = 0x01F7; f__01F7_28B8_0024_83C9();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_08B6_0016_0385();
}

/**
 * Decompiled function f__B518_08B6_0016_0385()
 *
 * @name f__B518_08B6_0016_0385
 * @implements B518:08B6:0016:0385 ()
 *
 * Called From: B518:08B6:001A:542C
 */
void f__B518_08B6_0016_0385()
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
	emu_push(emu_cs); emu_push(0x08CC); emu_cs = 0x01F7; f__01F7_28B8_0024_83C9();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_08CC_000C_BE90();
}

/**
 * Decompiled function f__B518_08CC_000C_BE90()
 *
 * @name f__B518_08CC_000C_BE90
 * @implements B518:08CC:000C:BE90 ()
 *
 * Called From: B518:08CC:0016:0385
 */
void f__B518_08CC_000C_BE90()
{
	emu_addws(&emu_sp, 0xA);
	emu_movw(&emu_ax.x, 0x147);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x08D8); emu_cs = 0x0FCB; f__0FCB_005F_001C_FDC4();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_08D8_0008_1FFE();
}

/**
 * Decompiled function f__B518_08D8_0008_1FFE()
 *
 * @name f__B518_08D8_0008_1FFE
 * @implements B518:08D8:0008:1FFE ()
 *
 * Called From: B518:08D8:000C:BE90
 */
void f__B518_08D8_0008_1FFE()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x08E0); emu_cs = 0x2521; f__2521_0035_0015_AA0F();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_08E0_000C_04A3();
}

/**
 * Decompiled function f__B518_08E0_000C_04A3()
 *
 * @name f__B518_08E0_000C_04A3
 * @implements B518:08E0:000C:04A3 ()
 *
 * Called From: B518:08E0:0008:1FFE
 */
void f__B518_08E0_000C_04A3()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x146);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x08EC); emu_cs = 0x0FCB; f__0FCB_005F_001C_FDC4();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_08EC_0008_1FFE();
}

/**
 * Decompiled function f__B518_08EC_0008_1FFE()
 *
 * @name f__B518_08EC_0008_1FFE
 * @implements B518:08EC:0008:1FFE ()
 *
 * Called From: B518:08EC:000C:04A3
 */
void f__B518_08EC_0008_1FFE()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x08F4); emu_cs = 0x2521; f__2521_0035_0015_AA0F();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_08F4_0010_9746();
}

/**
 * Decompiled function f__B518_08F4_0010_9746()
 *
 * @name f__B518_08F4_0010_9746
 * @implements B518:08F4:0010:9746 ()
 *
 * Called From: B518:08F4:0008:1FFE
 */
void f__B518_08F4_0010_9746()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_pop(&emu_dx.x);
	emu_cmpw(&emu_dx.x, emu_ax.x);
	if ((emu_flags.cf || emu_flags.zf)) { f__B518_0910_0009_3538(); return; }
	emu_movw(&emu_ax.x, 0x147);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0904); emu_cs = 0x0FCB; emu_ip = 0x0963; emu_last_cs = 0xB518; emu_last_ip = 0x08FF; emu_last_length = 0x0010; emu_last_crc = 0x9746; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__B518_0910_0009_3538()
 *
 * @name f__B518_0910_0009_3538
 * @implements B518:0910:0009:3538 ()
 *
 * Called From: B518:08F9:0010:9746
 */
void f__B518_0910_0009_3538()
{
	emu_movw(&emu_ax.x, 0x146);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0919); emu_cs = 0x0FCB; f__0FCB_005F_001C_FDC4();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_0919_0008_1FFE();
}

/**
 * Decompiled function f__B518_0919_0008_1FFE()
 *
 * @name f__B518_0919_0008_1FFE
 * @implements B518:0919:0008:1FFE ()
 *
 * Called From: B518:0919:0009:3538
 */
void f__B518_0919_0008_1FFE()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0921); emu_cs = 0x2521; f__2521_0035_0015_AA0F();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_0921_002A_4D1C();
}

/**
 * Decompiled function f__B518_0921_002A_4D1C()
 *
 * @name f__B518_0921_002A_4D1C
 * @implements B518:0921:002A:4D1C ()
 *
 * Called From: B518:0921:0008:1FFE
 */
void f__B518_0921_002A_4D1C()
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
	emu_push(emu_cs); emu_push(0x094B); emu_cs = 0x0FCB; f__0FCB_005F_001C_FDC4();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_094B_0013_5DD3();
}

/**
 * Decompiled function f__B518_094B_0013_5DD3()
 *
 * @name f__B518_094B_0013_5DD3
 * @implements B518:094B:0013:5DD3 ()
 *
 * Called From: B518:094B:002A:4D1C
 */
void f__B518_094B_0013_5DD3()
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
	f__B518_095E_0064_9D4A();
}

/**
 * Decompiled function f__B518_095E_0064_9D4A()
 *
 * @name f__B518_095E_0064_9D4A
 * @implements B518:095E:0064:9D4A ()
 *
 * Called From: 261F:01B9:001B:EDBF
 */
void f__B518_095E_0064_9D4A()
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
	emu_push(emu_cs); emu_push(0x09C2); emu_cs = 0x0FCB; f__0FCB_005F_001C_FDC4();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_09C2_0013_5CD3();
}

/**
 * Decompiled function f__B518_09C2_0013_5CD3()
 *
 * @name f__B518_09C2_0013_5CD3
 * @implements B518:09C2:0013:5CD3 ()
 *
 * Called From: B518:09C2:0064:9D4A
 */
void f__B518_09C2_0013_5CD3()
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
	f__B518_09D5_0053_7EDA();
}

/**
 * Decompiled function f__B518_09D5_0053_7EDA()
 *
 * @name f__B518_09D5_0053_7EDA
 * @implements B518:09D5:0053:7EDA ()
 *
 * Called From: B518:09D5:0013:5CD3
 */
void f__B518_09D5_0053_7EDA()
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
	f__B518_0A28_0011_05E6();
}

/**
 * Decompiled function f__B518_0A28_0011_05E6()
 *
 * @name f__B518_0A28_0011_05E6
 * @implements B518:0A28:0011:05E6 ()
 *
 * Called From: B518:0A28:0053:7EDA
 */
void f__B518_0A28_0011_05E6()
{
	emu_addws(&emu_sp, 0x8);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax.x);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	f__B518_0A39_0005_8BCF(); return;
}

/**
 * Decompiled function f__B518_0A39_0005_8BCF()
 *
 * @name f__B518_0A39_0005_8BCF
 * @implements B518:0A39:0005:8BCF ()
 *
 * Called From: B518:0A37:0011:05E6
 */
void f__B518_0A39_0005_8BCF()
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
 * Decompiled function f__B518_0A3E_0008_F439()
 *
 * @name f__B518_0A3E_0008_F439
 * @implements B518:0A3E:0008:F439 ()
 *
 * Called From: B518:086B:0014:A312
 */
void f__B518_0A3E_0008_F439()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x4);
	f__B518_0A6F_001B_02CA(); return;
}

/**
 * Decompiled function f__B518_0A46_0027_5A8F()
 *
 * @name f__B518_0A46_0027_5A8F
 * @implements B518:0A46:0027:5A8F ()
 *
 * Called From: B518:0A75:001B:02CA
 * Called From: B518:0A75:001D:CF58
 */
void f__B518_0A46_0027_5A8F()
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
	emu_push(emu_cs); emu_push(0x0A6D); emu_cs = 0x23E1; f__23E1_01C2_0011_24E8();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_0A6D_001D_CF58();
}

/**
 * Decompiled function f__B518_0A6D_001D_CF58()
 *
 * @name f__B518_0A6D_001D_CF58
 * @implements B518:0A6D:001D:CF58 ()
 *
 * Called From: B518:0A6D:0027:5A8F
 */
void f__B518_0A6D_001D_CF58()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (!emu_flags.zf) { f__B518_0A46_0027_5A8F(); return; }
	emu_movw(&emu_ax.x, 0x28);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x81F1);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x3604);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0A8A); emu_cs = 0x01F7; f__01F7_28B8_0024_83C9();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_0A8A_0007_986A();
}

/**
 * Decompiled function f__B518_0A6F_001B_02CA()
 *
 * @name f__B518_0A6F_001B_02CA
 * @implements B518:0A6F:001B:02CA ()
 *
 * Called From: B518:0A44:0008:F439
 */
void f__B518_0A6F_001B_02CA()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (!emu_flags.zf) { f__B518_0A46_0027_5A8F(); return; }
	emu_movw(&emu_ax.x, 0x28);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x81F1);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x3604);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0A8A); emu_cs = 0x01F7; emu_ip = 0x3342; emu_last_cs = 0xB518; emu_last_ip = 0x0A85; emu_last_length = 0x001B; emu_last_crc = 0x02CA; emu_call(); // Jump does not resolve
	f__B518_0A8A_0007_986A();
}

/**
 * Decompiled function f__B518_0A8A_0007_986A()
 *
 * @name f__B518_0A8A_0007_986A
 * @implements B518:0A8A:0007:986A ()
 *
 * Called From: B518:0A8A:001D:CF58
 */
void f__B518_0A8A_0007_986A()
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
 * Decompiled function f__B518_0A91_000C_38F0()
 *
 * @name f__B518_0A91_000C_38F0
 * @implements B518:0A91:000C:38F0 ()
 *
 * Called From: 3518:0034:0005:0000
 */
void f__B518_0A91_000C_38F0()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_movw(&emu_ax.x, 0x148);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0A9D); emu_cs = 0x34F2; ovl__34F2(3);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_0A9D_001C_D99B();
}

/**
 * Decompiled function f__B518_0A9D_001C_D99B()
 *
 * @name f__B518_0A9D_001C_D99B
 * @implements B518:0A9D:001C:D99B ()
 *
 * Called From: 261F:01B9:001B:EDBF
 * Called From: B518:0A9D:000C:38F0
 */
void f__B518_0A9D_001C_D99B()
{
	emu_pop(&emu_cx.x);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (emu_flags.zf) { f__B518_0AF5_000E_814C(); return; }
	emu_movw(&emu_ax.x, 0x80);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x36));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x34));
	emu_push(emu_cs); emu_push(0x0AB9); emu_cs = 0x01F7; f__01F7_2947_0014_02B8();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_0AB9_000D_0B16();
}

/**
 * Decompiled function f__B518_0AB9_000D_0B16()
 *
 * @name f__B518_0AB9_000D_0B16
 * @implements B518:0AB9:000D:0B16 ()
 *
 * Called From: B518:0AB9:001C:D99B
 */
void f__B518_0AB9_000D_0B16()
{
	emu_addws(&emu_sp, 0x8);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x2C41);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0AC6); emu_cs = 0x1FB5; f__1FB5_15B5_0015_6A00();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_0AC6_0010_9A25();
}

/**
 * Decompiled function f__B518_0AC6_0010_9A25()
 *
 * @name f__B518_0AC6_0010_9A25
 * @implements B518:0AC6:0010:9A25 ()
 *
 * Called From: B518:0AC6:000D:0B16
 */
void f__B518_0AC6_0010_9A25()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (emu_flags.zf) { emu_ip = 0x0AD8; emu_last_cs = 0xB518; emu_last_ip = 0x0ACA; emu_last_length = 0x0010; emu_last_crc = 0x9A25; emu_call(); return; } // Jump does not resolve
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x2C41);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0AD6); emu_cs = 0x1FB5; f__1FB5_17FE_0011_2DA9();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_0AD6_0016_F50A();
}

/**
 * Decompiled function f__B518_0AD6_0016_F50A()
 *
 * @name f__B518_0AD6_0016_F50A
 * @implements B518:0AD6:0016:F50A ()
 *
 * Called From: B518:0AD6:0010:9A25
 */
void f__B518_0AD6_0016_F50A()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x36));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x34));
	emu_push(emu_cs);
	emu_push(0x0AEC); f__B518_11C6_0011_1160();
	f__B518_0AEC_0017_200D();
}

/**
 * Decompiled function f__B518_0AEC_0017_200D()
 *
 * @name f__B518_0AEC_0017_200D
 * @implements B518:0AEC:0017:200D ()
 *
 * Called From: B518:0AEC:0016:F50A
 */
void f__B518_0AEC_0017_200D()
{
	emu_addws(&emu_sp, 0x6);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x7E1A), 0x1);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x0B03); emu_cs = 0x348B; ovl__348B(4);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_0B03_0008_4F72();
}

/**
 * Decompiled function f__B518_0AF5_000E_814C()
 *
 * @name f__B518_0AF5_000E_814C
 * @implements B518:0AF5:000E:814C ()
 *
 * Called From: B518:0AA0:001C:D99B
 */
void f__B518_0AF5_000E_814C()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x0B03); emu_cs = 0x348B; ovl__348B(4);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_0B03_0008_4F72();
}

/**
 * Decompiled function f__B518_0B03_0008_4F72()
 *
 * @name f__B518_0B03_0008_4F72
 * @implements B518:0B03:0008:4F72 ()
 *
 * Called From: B518:0B03:000E:814C
 * Called From: B518:0B03:0017:200D
 */
void f__B518_0B03_0008_4F72()
{
	emu_addws(&emu_sp, 0x6);
	emu_movw(&emu_ax.x, 0x1);
	f__B518_0B0B_0002_2597(); return;
}

/**
 * Decompiled function f__B518_0B0B_0002_2597()
 *
 * @name f__B518_0B0B_0002_2597
 * @implements B518:0B0B:0002:2597 ()
 *
 * Called From: B518:0B09:0008:4F72
 */
void f__B518_0B0B_0002_2597()
{
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B518_0B0D_000E_E283()
 *
 * @name f__B518_0B0D_000E_E283
 * @implements B518:0B0D:000E:E283 ()
 *
 * Called From: 3518:0039:0005:0000
 */
void f__B518_0B0D_000E_E283()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x7E1A), 0x1);
	emu_movw(&emu_ax.x, 0x1);
	f__B518_0B1B_0002_2597(); return;
}

/**
 * Decompiled function f__B518_0B1B_0002_2597()
 *
 * @name f__B518_0B1B_0002_2597
 * @implements B518:0B1B:0002:2597 ()
 *
 * Called From: B518:0B19:000E:E283
 */
void f__B518_0B1B_0002_2597()
{
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B518_0B1D_0014_307D()
 *
 * @name f__B518_0B1D_0014_307D
 * @implements B518:0B1D:0014:307D ()
 *
 * Called From: B518:0079:000F:D58C
 * Called From: B518:0641:000C:688C
 */
void f__B518_0B1D_0014_307D()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0xA);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0B31); emu_cs = 0x2598; f__2598_0000_0017_EB80();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_0B31_0022_2268();
}

/**
 * Decompiled function f__B518_0B31_0022_2268()
 *
 * @name f__B518_0B31_0022_2268
 * @implements B518:0B31:0022:2268 ()
 *
 * Called From: B518:0B31:0014:307D
 */
void f__B518_0B31_0022_2268()
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
	f__B518_0B53_0016_5213();
}

/**
 * Decompiled function f__B518_0B53_0016_5213()
 *
 * @name f__B518_0B53_0016_5213
 * @implements B518:0B53:0016:5213 ()
 *
 * Called From: B518:0B53:0022:2268
 */
void f__B518_0B53_0016_5213()
{
	emu_addws(&emu_sp, 0xE);
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x3A38), 0x0);
	if ((emu_flags.sf != emu_flags.of)) { f__B518_0B64_0005_DD42(); return; }
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x3A38), 0x2);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__B518_0B69_0032_05DD(); return; }
	emu_movw(&emu_di, 0x1);
	emu_ip = 0x0B7A; emu_last_cs = 0xB518; emu_last_ip = 0x0B67; emu_last_length = 0x0016; emu_last_crc = 0x5213; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B518_0B64_0005_DD42()
 *
 * @name f__B518_0B64_0005_DD42
 * @implements B518:0B64:0005:DD42 ()
 *
 * Called From: B518:0B5B:0016:5213
 */
void f__B518_0B64_0005_DD42()
{
	emu_movw(&emu_di, 0x1);
	f__B518_0B7A_0021_F9AC(); return;
}

/**
 * Decompiled function f__B518_0B69_0032_05DD()
 *
 * @name f__B518_0B69_0032_05DD
 * @implements B518:0B69:0032:05DD ()
 *
 * Called From: B518:0B62:0016:5213
 */
void f__B518_0B69_0032_05DD()
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
	emu_push(emu_cs); emu_push(0x0B9B); emu_cs = 0x24D0; f__24D0_000D_0039_C17D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_0B9B_0036_6E22();
}

/**
 * Decompiled function f__B518_0B7A_0021_F9AC()
 *
 * @name f__B518_0B7A_0021_F9AC
 * @implements B518:0B7A:0021:F9AC ()
 *
 * Called From: B518:0B67:0005:DD42
 */
void f__B518_0B7A_0021_F9AC()
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
	emu_push(emu_cs); emu_push(0x0B9B); emu_cs = 0x24D0; f__24D0_000D_0039_C17D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_0B9B_0036_6E22();
}

/**
 * Decompiled function f__B518_0B9B_0036_6E22()
 *
 * @name f__B518_0B9B_0036_6E22
 * @implements B518:0B9B:0036:6E22 ()
 *
 * Called From: B518:0B9B:0032:05DD
 * Called From: B518:0B9B:0021:F9AC
 */
void f__B518_0B9B_0036_6E22()
{
	emu_addws(&emu_sp, 0x10);
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x3A38), 0x0);
	if ((emu_flags.sf != emu_flags.of)) { f__B518_0BAC_0025_1972(); return; }
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x3A38), 0x2);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__B518_0BAF_0022_6D86(); return; }
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
	emu_push(emu_cs); emu_push(0x0BD1); emu_cs = 0x24D0; emu_ip = 0x0BDE; emu_last_cs = 0xB518; emu_last_ip = 0x0BCC; emu_last_length = 0x0036; emu_last_crc = 0x6E22; emu_call(); // Jump does not resolve
	f__B518_0BD1_0021_7F09();
}

/**
 * Decompiled function f__B518_0BAC_0025_1972()
 *
 * @name f__B518_0BAC_0025_1972
 * @implements B518:0BAC:0025:1972 ()
 *
 * Called From: B518:0BA3:0036:6E22
 */
void f__B518_0BAC_0025_1972()
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
	emu_push(emu_cs); emu_push(0x0BD1); emu_cs = 0x24D0; f__24D0_000D_0039_C17D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_0BD1_0021_7F09();
}

/**
 * Decompiled function f__B518_0BAF_0022_6D86()
 *
 * @name f__B518_0BAF_0022_6D86
 * @implements B518:0BAF:0022:6D86 ()
 *
 * Called From: B518:0BAA:0036:6E22
 */
void f__B518_0BAF_0022_6D86()
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
	emu_push(emu_cs); emu_push(0x0BD1); emu_cs = 0x24D0; f__24D0_000D_0039_C17D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_0BD1_0021_7F09();
}

/**
 * Decompiled function f__B518_0BD1_0021_7F09()
 *
 * @name f__B518_0BD1_0021_7F09
 * @implements B518:0BD1:0021:7F09 ()
 *
 * Called From: B518:0BD1:0022:6D86
 * Called From: B518:0BD1:0025:1972
 */
void f__B518_0BD1_0021_7F09()
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
		case 0x22A60D31: f__22A6_0D31_0015_A4C3(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0xB518; emu_last_ip = 0x0BED; emu_last_length = 0x0021; emu_last_crc = 0x7F09;
			emu_call();
			return;
	}
	f__B518_0BF2_0027_2EE7();
}

/**
 * Decompiled function f__B518_0BF2_0027_2EE7()
 *
 * @name f__B518_0BF2_0027_2EE7
 * @implements B518:0BF2:0027:2EE7 ()
 *
 * Called From: B518:0BF2:0021:7F09
 */
void f__B518_0BF2_0027_2EE7()
{
	emu_addws(&emu_sp, 0xA);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0x8), 0x1);
	if (!emu_flags.zf) { f__B518_0C2E_002A_A18C(); return; }
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
		case 0x22A60D31: f__22A6_0D31_0015_A4C3(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0xB518; emu_last_ip = 0x0C14; emu_last_length = 0x0027; emu_last_crc = 0x2EE7;
			emu_call();
			return;
	}
	f__B518_0C19_0011_0A68();
}

/**
 * Decompiled function f__B518_0C19_0011_0A68()
 *
 * @name f__B518_0C19_0011_0A68
 * @implements B518:0C19:0011:0A68 ()
 *
 * Called From: B518:0C19:0027:2EE7
 */
void f__B518_0C19_0011_0A68()
{
	emu_addws(&emu_sp, 0xA);
	emu_cmpws(&emu_si, 0xFF);
	if (emu_flags.zf) { f__B518_0C2C_0002_F0BA(); return; }
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_si);
	emu_push(emu_cs);
	emu_push(0x0C2A); f__B518_0EB1_000E_D2F5();
	f__B518_0C2A_0004_6B9F();
}

/**
 * Decompiled function f__B518_0C2A_0004_6B9F()
 *
 * @name f__B518_0C2A_0004_6B9F
 * @implements B518:0C2A:0004:6B9F ()
 *
 * Called From: B518:0C2A:0011:0A68
 */
void f__B518_0C2A_0004_6B9F()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	f__B518_0C8F_0008_1040(); return;
}

/**
 * Decompiled function f__B518_0C2C_0002_F0BA()
 *
 * @name f__B518_0C2C_0002_F0BA
 * @implements B518:0C2C:0002:F0BA ()
 *
 * Called From: B518:0C1F:0011:0A68
 */
void f__B518_0C2C_0002_F0BA()
{
	f__B518_0C8F_0008_1040(); return;
}

/**
 * Decompiled function f__B518_0C2E_002A_A18C()
 *
 * @name f__B518_0C2E_002A_A18C
 * @implements B518:0C2E:002A:A18C ()
 *
 * Called From: B518:0BF9:0027:2EE7
 */
void f__B518_0C2E_002A_A18C()
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
		case 0x22A6034F: f__22A6_034F_000C_5E0A(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0xB518; emu_last_ip = 0x0C53; emu_last_length = 0x002A; emu_last_crc = 0xA18C;
			emu_call();
			return;
	}
	f__B518_0C58_0034_076C();
}

/**
 * Decompiled function f__B518_0C58_0034_076C()
 *
 * @name f__B518_0C58_0034_076C
 * @implements B518:0C58:0034:076C ()
 *
 * Called From: B518:0C58:002A:A18C
 */
void f__B518_0C58_0034_076C()
{
	emu_addws(&emu_sp, 0x10);
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x38B0), 0x1);
	if (emu_flags.zf) { f__B518_0C8F_0008_1040(); return; }
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
			emu_last_cs = 0xB518; emu_last_ip = 0x0C87; emu_last_length = 0x0034; emu_last_crc = 0x076C;
			emu_call();
			return;
	}
	emu_unknown_call();
}

/**
 * Decompiled function f__B518_0C8F_0008_1040()
 *
 * @name f__B518_0C8F_0008_1040
 * @implements B518:0C8F:0008:1040 ()
 *
 * Called From: B518:0C2C:0004:6B9F
 * Called From: B518:0C2C:0002:F0BA
 * Called From: B518:0C60:0034:076C
 */
void f__B518_0C8F_0008_1040()
{
	emu_cmpws(&emu_si, 0xFF);
	if (!emu_flags.zf) { f__B518_0C97_001D_C8E7(); return; }
	f__B518_0D74_001D_DCC9(); return;
}

/**
 * Decompiled function f__B518_0C97_001D_C8E7()
 *
 * @name f__B518_0C97_001D_C8E7
 * @implements B518:0C97:001D:C8E7 ()
 *
 * Called From: B518:0C92:0008:1040
 */
void f__B518_0C97_001D_C8E7()
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
	emu_push(emu_cs); emu_push(0x0CB4); emu_cs = 0x0FCB; f__0FCB_005F_001C_FDC4();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_0CB4_000D_A042();
}

/**
 * Decompiled function f__B518_0CB4_000D_A042()
 *
 * @name f__B518_0CB4_000D_A042
 * @implements B518:0CB4:000D:A042 ()
 *
 * Called From: B518:0CB4:001D:C8E7
 */
void f__B518_0CB4_000D_A042()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x9939);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0CC1); emu_cs = 0x01F7; f__01F7_378D_0020_0F64();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_0CC1_0018_CBCF();
}

/**
 * Decompiled function f__B518_0CC1_0018_CBCF()
 *
 * @name f__B518_0CC1_0018_CBCF
 * @implements B518:0CC1:0018:CBCF ()
 *
 * Called From: B518:0CC1:000D:A042
 */
void f__B518_0CC1_0018_CBCF()
{
	emu_addws(&emu_sp, 0xC);
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00, -0x7E15), 0x3C);
	if (!(emu_flags.sf != emu_flags.of)) { emu_ip = 0x0D03; emu_last_cs = 0xB518; emu_last_ip = 0x0CC9; emu_last_length = 0x0018; emu_last_crc = 0xCBCF; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, 0x30);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x9939);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0CD9); emu_cs = 0x01F7; f__01F7_3889_0033_4660();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_0CD9_000B_890A();
}

/**
 * Decompiled function f__B518_0CD9_000B_890A()
 *
 * @name f__B518_0CD9_000B_890A
 * @implements B518:0CD9:000B:890A ()
 *
 * Called From: B518:0CD9:0018:CBCF
 */
void f__B518_0CD9_000B_890A()
{
	emu_addws(&emu_sp, 0x6);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_ax.x);
	f__B518_0CFA_0026_1733(); return;
}

/**
 * Decompiled function f__B518_0CE4_0013_A981()
 *
 * @name f__B518_0CE4_0013_A981
 * @implements B518:0CE4:0013:A981 ()
 *
 * Called From: B518:0D01:0026:1733
 * Called From: B518:0D01:0029:5362
 */
void f__B518_0CE4_0013_A981()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_incw(&emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_cs); emu_push(0x0CF7); emu_cs = 0x01F7; f__01F7_38F6_0029_8B99();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_0CF7_0029_5362();
}

/**
 * Decompiled function f__B518_0CF7_0029_5362()
 *
 * @name f__B518_0CF7_0029_5362
 * @implements B518:0CF7:0029:5362 ()
 *
 * Called From: B518:0CF7:0013:A981
 */
void f__B518_0CF7_0029_5362()
{
	emu_addws(&emu_sp, 0x8);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0x20);
	if (!emu_flags.zf) { f__B518_0CE4_0013_A981(); return; }
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
	emu_push(emu_cs); emu_push(0x0D20); emu_cs = 0x0FCB; f__0FCB_005F_001C_FDC4();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_0D20_0008_0683();
}

/**
 * Decompiled function f__B518_0CFA_0026_1733()
 *
 * @name f__B518_0CFA_0026_1733
 * @implements B518:0CFA:0026:1733 ()
 *
 * Called From: B518:0CE2:000B:890A
 */
void f__B518_0CFA_0026_1733()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0x20);
	if (!emu_flags.zf) { f__B518_0CE4_0013_A981(); return; }
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
	emu_push(emu_cs); emu_push(0x0D20); emu_cs = 0x0FCB; emu_ip = 0x0D7F; emu_last_cs = 0xB518; emu_last_ip = 0x0D1B; emu_last_length = 0x0026; emu_last_crc = 0x1733; emu_call(); // Jump does not resolve
	f__B518_0D20_0008_0683();
}

/**
 * Decompiled function f__B518_0D20_0008_0683()
 *
 * @name f__B518_0D20_0008_0683
 * @implements B518:0D20:0008:0683 ()
 *
 * Called From: B518:0D20:0029:5362
 */
void f__B518_0D20_0008_0683()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0D28); emu_cs = 0x10E4; f__10E4_1EF1_0040_01F8();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_0D28_0020_B1AE();
}

/**
 * Decompiled function f__B518_0D28_0020_B1AE()
 *
 * @name f__B518_0D28_0020_B1AE
 * @implements B518:0D28:0020:B1AE ()
 *
 * Called From: B518:0D28:0008:0683
 */
void f__B518_0D28_0020_B1AE()
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
	emu_push(emu_cs); emu_push(0x0D48); emu_cs = 0x10E4; f__10E4_1EF1_0040_01F8();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_0D48_001F_5EF1();
}

/**
 * Decompiled function f__B518_0D48_001F_5EF1()
 *
 * @name f__B518_0D48_001F_5EF1
 * @implements B518:0D48:001F:5EF1 ()
 *
 * Called From: B518:0D48:0020:B1AE
 */
void f__B518_0D48_001F_5EF1()
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
	emu_push(emu_cs); emu_push(0x0D67); emu_cs = 0x0FCB; f__0FCB_005F_001C_FDC4();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_0D67_0008_0683();
}

/**
 * Decompiled function f__B518_0D67_0008_0683()
 *
 * @name f__B518_0D67_0008_0683
 * @implements B518:0D67:0008:0683 ()
 *
 * Called From: B518:0D67:001F:5EF1
 */
void f__B518_0D67_0008_0683()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0D6F); emu_cs = 0x10E4; f__10E4_1EF1_0040_01F8();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_0D6F_0005_91EE();
}

/**
 * Decompiled function f__B518_0D6F_0005_91EE()
 *
 * @name f__B518_0D6F_0005_91EE
 * @implements B518:0D6F:0005:91EE ()
 *
 * Called From: B518:0D6F:0008:0683
 */
void f__B518_0D6F_0005_91EE()
{
	emu_addws(&emu_sp, 0xE);
	f__B518_0D9C_0013_5519(); return;
}

/**
 * Decompiled function f__B518_0D74_001D_DCC9()
 *
 * @name f__B518_0D74_001D_DCC9
 * @implements B518:0D74:001D:DCC9 ()
 *
 * Called From: B518:0C94:0008:1040
 */
void f__B518_0D74_001D_DCC9()
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
	emu_push(emu_cs); emu_push(0x0D91); emu_cs = 0x0FCB; f__0FCB_005F_001C_FDC4();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_0D91_0008_0683();
}

/**
 * Decompiled function f__B518_0D91_0008_0683()
 *
 * @name f__B518_0D91_0008_0683
 * @implements B518:0D91:0008:0683 ()
 *
 * Called From: B518:0D91:001D:DCC9
 */
void f__B518_0D91_0008_0683()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0D99); emu_cs = 0x10E4; f__10E4_1EF1_0040_01F8();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_0D99_0016_5F3A();
}

/**
 * Decompiled function f__B518_0D99_0016_5F3A()
 *
 * @name f__B518_0D99_0016_5F3A
 * @implements B518:0D99:0016:5F3A ()
 *
 * Called From: B518:0D99:0008:0683
 */
void f__B518_0D99_0016_5F3A()
{
	emu_addws(&emu_sp, 0x10);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3A38));
	emu_orw(&emu_ax.x, emu_ax.x);
	if (emu_flags.zf) { emu_ip = 0x0DAF; emu_last_cs = 0xB518; emu_last_ip = 0x0DA1; emu_last_length = 0x0016; emu_last_crc = 0x5F3A; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_ax.x, 0x1);
	if (emu_flags.zf) { emu_ip = 0x0DBB; emu_last_cs = 0xB518; emu_last_ip = 0x0DA6; emu_last_length = 0x0016; emu_last_crc = 0x5F3A; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_ax.x, 0x2);
	if (emu_flags.zf) { emu_ip = 0x0DC7; emu_last_cs = 0xB518; emu_last_ip = 0x0DAB; emu_last_length = 0x0016; emu_last_crc = 0x5F3A; emu_call(); return; } // Jump does not resolve
	f__B518_0DBB_000C_8B4F(); return;
}

/**
 * Decompiled function f__B518_0D9C_0013_5519()
 *
 * @name f__B518_0D9C_0013_5519
 * @implements B518:0D9C:0013:5519 ()
 *
 * Called From: B518:0D72:0005:91EE
 */
void f__B518_0D9C_0013_5519()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3A38));
	emu_orw(&emu_ax.x, emu_ax.x);
	if (emu_flags.zf) { f__B518_0DAF_000C_A157(); return; }
	emu_cmpw(&emu_ax.x, 0x1);
	if (emu_flags.zf) { f__B518_0DBB_000C_8B4F(); return; }
	emu_cmpw(&emu_ax.x, 0x2);
	if (emu_flags.zf) { f__B518_0DC7_000C_BD47(); return; }
	emu_ip = 0x0DBB; emu_last_cs = 0xB518; emu_last_ip = 0x0DAD; emu_last_length = 0x0013; emu_last_crc = 0x5519; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B518_0DAF_000C_A157()
 *
 * @name f__B518_0DAF_000C_A157
 * @implements B518:0DAF:000C:A157 ()
 *
 * Called From: B518:0DA1:0013:5519
 */
void f__B518_0DAF_000C_A157()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x95);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x0);
	f__B518_0DD3_0036_0F81(); return;
}

/**
 * Decompiled function f__B518_0DBB_000C_8B4F()
 *
 * @name f__B518_0DBB_000C_8B4F
 * @implements B518:0DBB:000C:8B4F ()
 *
 * Called From: B518:0DA6:0013:5519
 * Called From: B518:0DAD:0016:5F3A
 */
void f__B518_0DBB_000C_8B4F()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0xA5);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x2);
	f__B518_0DD3_0036_0F81(); return;
}

/**
 * Decompiled function f__B518_0DC7_000C_BD47()
 *
 * @name f__B518_0DC7_000C_BD47
 * @implements B518:0DC7:000C:BD47 ()
 *
 * Called From: B518:0DAB:0013:5519
 */
void f__B518_0DC7_000C_BD47()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0xB5);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x1);
	f__B518_0DD3_0036_0F81(); return;
}

/**
 * Decompiled function f__B518_0DD3_0036_0F81()
 *
 * @name f__B518_0DD3_0036_0F81
 * @implements B518:0DD3:0036:0F81 ()
 *
 * Called From: B518:0DB9:000C:A157
 * Called From: B518:0DC5:000C:8B4F
 * Called From: B518:0DD1:000C:BD47
 */
void f__B518_0DD3_0036_0F81()
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
	emu_push(emu_cs); emu_push(0x0E09); emu_cs = 0x01F7; f__01F7_28B8_0024_83C9();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_0E09_0015_5548();
}

/**
 * Decompiled function f__B518_0E09_0015_5548()
 *
 * @name f__B518_0E09_0015_5548
 * @implements B518:0E09:0015:5548 ()
 *
 * Called From: B518:0E09:0036:0F81
 */
void f__B518_0E09_0015_5548()
{
	emu_addws(&emu_sp, 0xA);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_addw(&emu_get_memory16(emu_ds, 0x00, -0x7E13), emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0x8), 0x0);
	if (!emu_flags.zf) { f__B518_0E1E_0008_1199(); return; }
	emu_push(emu_cs);
	emu_push(0x0E1E); f__B518_14F2_003E_977C();
	f__B518_0E1E_0008_1199();
}

/**
 * Decompiled function f__B518_0E1E_0008_1199()
 *
 * @name f__B518_0E1E_0008_1199
 * @implements B518:0E1E:0008:1199 ()
 *
 * Called From: B518:0E17:0015:5548
 * Called From: B518:0E1E:0015:5548
 */
void f__B518_0E1E_0008_1199()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_cs); emu_push(0x0E26); emu_cs = 0x2598; f__2598_0000_0017_EB80();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_0E26_0007_F77C();
}

/**
 * Decompiled function f__B518_0E26_0007_F77C()
 *
 * @name f__B518_0E26_0007_F77C
 * @implements B518:0E26:0007:F77C ()
 *
 * Called From: B518:0E26:0008:1199
 */
void f__B518_0E26_0007_F77C()
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
 * Decompiled function f__B518_0E2D_0023_FBEC()
 *
 * @name f__B518_0E2D_0023_FBEC
 * @implements B518:0E2D:0023:FBEC ()
 *
 * Called From: B518:0090:0008:6683
 * Called From: B518:00A8:0008:6685
 */
void f__B518_0E2D_0023_FBEC()
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
	emu_push(emu_cs); emu_push(0x0E50); emu_cs = 0x10E4; f__10E4_1EF1_0040_01F8();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_0E50_000E_3EC6();
}

/**
 * Decompiled function f__B518_0E50_000E_3EC6()
 *
 * @name f__B518_0E50_000E_3EC6
 * @implements B518:0E50:000E:3EC6 ()
 *
 * Called From: B518:0E50:0023:FBEC
 */
void f__B518_0E50_000E_3EC6()
{
	emu_addws(&emu_sp, 0xE);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x0E5E); emu_cs = 0x2521; f__2521_0035_0015_AA0F();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_0E5E_002E_B3B3();
}

/**
 * Decompiled function f__B518_0E5E_002E_B3B3()
 *
 * @name f__B518_0E5E_002E_B3B3
 * @implements B518:0E5E:002E:B3B3 ()
 *
 * Called From: B518:0E5E:000E:3EC6
 */
void f__B518_0E5E_002E_B3B3()
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
		case 0x22A60D31: f__22A6_0D31_0015_A4C3(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0xB518; emu_last_ip = 0x0E87; emu_last_length = 0x002E; emu_last_crc = 0xB3B3;
			emu_call();
			return;
	}
	f__B518_0E8C_001E_2374();
}

/**
 * Decompiled function f__B518_0E8C_001E_2374()
 *
 * @name f__B518_0E8C_001E_2374
 * @implements B518:0E8C:001E:2374 ()
 *
 * Called From: B518:0E8C:002E:B3B3
 */
void f__B518_0E8C_001E_2374()
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
	emu_push(emu_cs); emu_push(0x0EAA); emu_cs = 0x10E4; f__10E4_1EF1_0040_01F8();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_0EAA_0007_CF27();
}

/**
 * Decompiled function f__B518_0EAA_0007_CF27()
 *
 * @name f__B518_0EAA_0007_CF27
 * @implements B518:0EAA:0007:CF27 ()
 *
 * Called From: B518:0EAA:001E:2374
 */
void f__B518_0EAA_0007_CF27()
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
 * Decompiled function f__B518_0EB1_000E_D2F5()
 *
 * @name f__B518_0EB1_000E_D2F5
 * @implements B518:0EB1:000E:D2F5 ()
 *
 * Called From: B518:0300:000D:286D
 * Called From: B518:0C27:0011:0A68
 */
void f__B518_0EB1_000E_D2F5()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x2);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x0EBF); f__B518_0F22_0007_C8B1();
	f__B518_0EBF_0027_CF00();
}

/**
 * Decompiled function f__B518_0EBF_0027_CF00()
 *
 * @name f__B518_0EBF_0027_CF00
 * @implements B518:0EBF:0027:CF00 ()
 *
 * Called From: B518:0EBF:000E:D2F5
 */
void f__B518_0EBF_0027_CF00()
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
	emu_push(emu_cs); emu_push(0x0EE6); emu_cs = 0x0FCB; f__0FCB_005F_001C_FDC4();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_0EE6_0008_0683();
}

/**
 * Decompiled function f__B518_0EE6_0008_0683()
 *
 * @name f__B518_0EE6_0008_0683
 * @implements B518:0EE6:0008:0683 ()
 *
 * Called From: B518:0EE6:0027:CF00
 */
void f__B518_0EE6_0008_0683()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0EEE); emu_cs = 0x10E4; f__10E4_1EF1_0040_01F8();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_0EEE_002D_1F4E();
}

/**
 * Decompiled function f__B518_0EEE_002D_1F4E()
 *
 * @name f__B518_0EEE_002D_1F4E
 * @implements B518:0EEE:002D:1F4E ()
 *
 * Called From: B518:0EEE:0008:0683
 */
void f__B518_0EEE_002D_1F4E()
{
	emu_addws(&emu_sp, 0xE);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0x8), 0x0);
	if (emu_flags.zf) { f__B518_0F1E_0004_893F(); return; }
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
	emu_push(emu_cs); emu_push(0x0F1B); emu_cs = 0x2C17; f__2C17_000C_002F_3016();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_0F1B_0007_98BA();
}

/**
 * Decompiled function f__B518_0F1B_0007_98BA()
 *
 * @name f__B518_0F1B_0007_98BA
 * @implements B518:0F1B:0007:98BA ()
 *
 * Called From: B518:0F1B:002D:1F4E
 */
void f__B518_0F1B_0007_98BA()
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
 * Decompiled function f__B518_0F1E_0004_893F()
 *
 * @name f__B518_0F1E_0004_893F
 * @implements B518:0F1E:0004:893F ()
 *
 * Called From: B518:0EF5:002D:1F4E
 */
void f__B518_0F1E_0004_893F()
{
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B518_0F22_0007_C8B1()
 *
 * @name f__B518_0F22_0007_C8B1
 * @implements B518:0F22:0007:C8B1 ()
 *
 * Called From: B518:0EBC:000E:D2F5
 * Called From: B518:1163:0019:C8A2
 */
void f__B518_0F22_0007_C8B1()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_xorw(&emu_dx.x, emu_dx.x);
	f__B518_0F3B_000E_8F00(); return;
}

/**
 * Decompiled function f__B518_0F29_0011_FCEF()
 *
 * @name f__B518_0F29_0011_FCEF
 * @implements B518:0F29:0011:FCEF ()
 *
 * Called From: B518:0F3E:000E:8F00
 * Called From: B518:0F3E:000F:0B00
 */
void f__B518_0F29_0011_FCEF()
{
	emu_movw(&emu_bx.x, emu_dx.x);
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, emu_bx.x,  0x37C2));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__B518_0F3A_000F_0B00(); return; }
	f__B518_0F40_0009_E784(); return;
}

/**
 * Decompiled function f__B518_0F3A_000F_0B00()
 *
 * @name f__B518_0F3A_000F_0B00
 * @implements B518:0F3A:000F:0B00 ()
 *
 * Called From: B518:0F36:0011:FCEF
 */
void f__B518_0F3A_000F_0B00()
{
	emu_incw(&emu_dx.x);
	emu_cmpws(&emu_dx.x, 0xC);
	if ((emu_flags.sf != emu_flags.of)) { f__B518_0F29_0011_FCEF(); return; }
	emu_cmpws(&emu_dx.x, 0xB);
	if (!(emu_flags.sf != emu_flags.of)) { emu_ip = 0x0F49; emu_last_cs = 0xB518; emu_last_ip = 0x0F43; emu_last_length = 0x000F; emu_last_crc = 0x0B00; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_dx.x);
	emu_ip = 0x0F4C; emu_last_cs = 0xB518; emu_last_ip = 0x0F47; emu_last_length = 0x000F; emu_last_crc = 0x0B00; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B518_0F3B_000E_8F00()
 *
 * @name f__B518_0F3B_000E_8F00
 * @implements B518:0F3B:000E:8F00 ()
 *
 * Called From: B518:0F27:0007:C8B1
 */
void f__B518_0F3B_000E_8F00()
{
	emu_cmpws(&emu_dx.x, 0xC);
	if ((emu_flags.sf != emu_flags.of)) { f__B518_0F29_0011_FCEF(); return; }
	emu_cmpws(&emu_dx.x, 0xB);
	if (!(emu_flags.sf != emu_flags.of)) { emu_ip = 0x0F49; emu_last_cs = 0xB518; emu_last_ip = 0x0F43; emu_last_length = 0x000E; emu_last_crc = 0x8F00; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_dx.x);
	emu_ip = 0x0F4C; emu_last_cs = 0xB518; emu_last_ip = 0x0F47; emu_last_length = 0x000E; emu_last_crc = 0x8F00; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B518_0F40_0009_E784()
 *
 * @name f__B518_0F40_0009_E784
 * @implements B518:0F40:0009:E784 ()
 *
 * Called From: B518:0F38:0011:FCEF
 */
void f__B518_0F40_0009_E784()
{
	emu_cmpws(&emu_dx.x, 0xB);
	if (!(emu_flags.sf != emu_flags.of)) { emu_ip = 0x0F49; emu_last_cs = 0xB518; emu_last_ip = 0x0F43; emu_last_length = 0x0009; emu_last_crc = 0xE784; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_dx.x);
	f__B518_0F4C_0006_42F0(); return;
}

/**
 * Decompiled function f__B518_0F4C_0006_42F0()
 *
 * @name f__B518_0F4C_0006_42F0
 * @implements B518:0F4C:0006:42F0 ()
 *
 * Called From: B518:0F47:0009:E784
 */
void f__B518_0F4C_0006_42F0()
{
	emu_movw(&emu_dx.x, emu_ax.x);
	emu_movw(&emu_ax.x, emu_dx.x);
	f__B518_0F52_0002_2597(); return;
}

/**
 * Decompiled function f__B518_0F52_0002_2597()
 *
 * @name f__B518_0F52_0002_2597
 * @implements B518:0F52:0002:2597 ()
 *
 * Called From: B518:0F50:0006:42F0
 */
void f__B518_0F52_0002_2597()
{
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B518_0F54_0023_0701()
 *
 * @name f__B518_0F54_0023_0701
 * @implements B518:0F54:0023:0701 ()
 *
 * Called From: B518:003B:0019:9691
 */
void f__B518_0F54_0023_0701()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0xC);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_si, emu_si);
	if (!(emu_flags.sf != emu_flags.of)) { f__B518_0F65_0012_7BEF(); return; }
	emu_xorw(&emu_si, emu_si);
	emu_movw(&emu_ax.x, 0xFFFF);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x10));
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_cs); emu_push(0x0F77); emu_cs = 0x1082; emu_ip = 0x1074; emu_last_cs = 0xB518; emu_last_ip = 0x0F72; emu_last_length = 0x0023; emu_last_crc = 0x0701; emu_call(); // Jump does not resolve
	f__B518_0F77_0005_922E();
}

/**
 * Decompiled function f__B518_0F65_0012_7BEF()
 *
 * @name f__B518_0F65_0012_7BEF
 * @implements B518:0F65:0012:7BEF ()
 *
 * Called From: B518:0F61:0023:0701
 */
void f__B518_0F65_0012_7BEF()
{
	emu_movw(&emu_ax.x, 0xFFFF);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x10));
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_cs); emu_push(0x0F77); emu_cs = 0x1082; f__1082_00FD_003A_D7E0();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_0F77_0005_922E();
}

/**
 * Decompiled function f__B518_0F77_0005_922E()
 *
 * @name f__B518_0F77_0005_922E
 * @implements B518:0F77:0005:922E ()
 *
 * Called From: B518:0F77:0012:7BEF
 */
void f__B518_0F77_0005_922E()
{
	emu_addws(&emu_sp, 0x8);
	f__B518_0FAA_002C_59A9(); return;
}

/**
 * Decompiled function f__B518_0F7C_002C_5E19()
 *
 * @name f__B518_0F7C_002C_5E19
 * @implements B518:0F7C:002C:5E19 ()
 *
 * Called From: B518:0FB6:002C:59A9
 * Called From: B518:0FB6:002E:90CF
 */
void f__B518_0F7C_002C_5E19()
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
	emu_push(emu_cs); emu_push(0x0FA8); emu_cs = 0x1082; f__1082_013D_0038_4AF1();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_0FA8_002E_90CF();
}

/**
 * Decompiled function f__B518_0FA8_002E_90CF()
 *
 * @name f__B518_0FA8_002E_90CF
 * @implements B518:0FA8:002E:90CF ()
 *
 * Called From: B518:0FA8:002C:5E19
 */
void f__B518_0FA8_002E_90CF()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (!emu_flags.zf) { f__B518_0F7C_002C_5E19(); return; }
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
	emu_push(emu_cs); emu_push(0x0FD6); emu_cs = 0x0FE4; f__0FE4_0243_003A_D5F2();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_0FD6_0005_A0AE();
}

/**
 * Decompiled function f__B518_0FAA_002C_59A9()
 *
 * @name f__B518_0FAA_002C_59A9
 * @implements B518:0FAA:002C:59A9 ()
 *
 * Called From: B518:0F7A:0005:922E
 */
void f__B518_0FAA_002C_59A9()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (!emu_flags.zf) { f__B518_0F7C_002C_5E19(); return; }
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
	emu_push(emu_cs); emu_push(0x0FD6); emu_cs = 0x0FE4; emu_ip = 0x1219; emu_last_cs = 0xB518; emu_last_ip = 0x0FD1; emu_last_length = 0x002C; emu_last_crc = 0x59A9; emu_call(); // Jump does not resolve
	f__B518_0FD6_0005_A0AE();
}

/**
 * Decompiled function f__B518_0FD6_0005_A0AE()
 *
 * @name f__B518_0FD6_0005_A0AE
 * @implements B518:0FD6:0005:A0AE ()
 *
 * Called From: B518:0FD6:002E:90CF
 */
void f__B518_0FD6_0005_A0AE()
{
	emu_addws(&emu_sp, 0x8);
	f__B518_1026_0035_B8DB(); return;
}

/**
 * Decompiled function f__B518_0FDB_000F_E06A()
 *
 * @name f__B518_0FDB_000F_E06A
 * @implements B518:0FDB:000F:E06A ()
 *
 * Called From: B518:1032:0035:B8DB
 */
void f__B518_0FDB_000F_E06A()
{
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3A38));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs); emu_push(0x0FEA); emu_cs = 0x1A34; f__1A34_3623_0010_B11C();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_0FEA_0008_9688();
}

/**
 * Decompiled function f__B518_0FEA_0008_9688()
 *
 * @name f__B518_0FEA_0008_9688
 * @implements B518:0FEA:0008:9688 ()
 *
 * Called From: B518:0FEA:000F:E06A
 */
void f__B518_0FEA_0008_9688()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0FF2); emu_cs = 0x1423; f__1423_0F34_0017_464D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_0FF2_0017_F1EF();
}

/**
 * Decompiled function f__B518_0FF2_0017_F1EF()
 *
 * @name f__B518_0FF2_0017_F1EF
 * @implements B518:0FF2:0017:F1EF ()
 *
 * Called From: B518:0FF2:0008:9688
 */
void f__B518_0FF2_0017_F1EF()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (emu_flags.zf) { emu_ip = 0x1009; emu_last_cs = 0xB518; emu_last_ip = 0x0FF6; emu_last_length = 0x0017; emu_last_crc = 0xF1EF; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x58));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_movw(&emu_dx.x, 0x7);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_addw(&emu_di, emu_ax.x);
	f__B518_1019_000B_799F(); return;
}

/**
 * Decompiled function f__B518_1019_000B_799F()
 *
 * @name f__B518_1019_000B_799F
 * @implements B518:1019:000B:799F ()
 *
 * Called From: B518:1007:0017:F1EF
 */
void f__B518_1019_000B_799F()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_cs); emu_push(0x1024); emu_cs = 0x0FE4; f__0FE4_0283_0038_4950();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_1024_0037_DC68();
}

/**
 * Decompiled function f__B518_1024_0037_DC68()
 *
 * @name f__B518_1024_0037_DC68
 * @implements B518:1024:0037:DC68 ()
 *
 * Called From: B518:1024:000B:799F
 */
void f__B518_1024_0037_DC68()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	if (!emu_flags.zf) { emu_ip = 0x0FDB; emu_last_cs = 0xB518; emu_last_ip = 0x1032; emu_last_length = 0x0037; emu_last_crc = 0xDC68; emu_call(); return; } // Jump does not resolve
	emu_decw(&emu_get_memory16(emu_ds, 0x00,  0x38BC));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_adcws(&emu_dx.x, 0x0);
	emu_orw(&emu_dx.x, emu_dx.x);
	if ((emu_flags.sf != emu_flags.of)) { emu_ip = 0x105B; emu_last_cs = 0xB518; emu_last_ip = 0x1048; emu_last_length = 0x0037; emu_last_crc = 0xDC68; emu_call(); return; } // Jump does not resolve
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { emu_ip = 0x1051; emu_last_cs = 0xB518; emu_last_ip = 0x104A; emu_last_length = 0x0037; emu_last_crc = 0xDC68; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_ax.x, 0xFDE8);
	if ((emu_flags.cf || emu_flags.zf)) { f__B518_105B_002B_3AA7(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x0), 0xFDE8);
	emu_ip = 0x1064; emu_last_cs = 0xB518; emu_last_ip = 0x1059; emu_last_length = 0x0037; emu_last_crc = 0xDC68; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B518_1026_0035_B8DB()
 *
 * @name f__B518_1026_0035_B8DB
 * @implements B518:1026:0035:B8DB ()
 *
 * Called From: B518:0FD9:0005:A0AE
 */
void f__B518_1026_0035_B8DB()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	if (!emu_flags.zf) { f__B518_0FDB_000F_E06A(); return; }
	emu_decw(&emu_get_memory16(emu_ds, 0x00,  0x38BC));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_adcws(&emu_dx.x, 0x0);
	emu_orw(&emu_dx.x, emu_dx.x);
	if ((emu_flags.sf != emu_flags.of)) { emu_ip = 0x105B; emu_last_cs = 0xB518; emu_last_ip = 0x1048; emu_last_length = 0x0035; emu_last_crc = 0xB8DB; emu_call(); return; } // Jump does not resolve
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { emu_ip = 0x1051; emu_last_cs = 0xB518; emu_last_ip = 0x104A; emu_last_length = 0x0035; emu_last_crc = 0xB8DB; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_ax.x, 0xFDE8);
	if ((emu_flags.cf || emu_flags.zf)) { emu_ip = 0x105B; emu_last_cs = 0xB518; emu_last_ip = 0x104F; emu_last_length = 0x0035; emu_last_crc = 0xB8DB; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x0), 0xFDE8);
	emu_ip = 0x1064; emu_last_cs = 0xB518; emu_last_ip = 0x1059; emu_last_length = 0x0035; emu_last_crc = 0xB8DB; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B518_105B_002B_3AA7()
 *
 * @name f__B518_105B_002B_3AA7
 * @implements B518:105B:002B:3AA7 ()
 *
 * Called From: B518:104F:0037:DC68
 */
void f__B518_105B_002B_3AA7()
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
	if ((emu_flags.sf != emu_flags.of)) { emu_ip = 0x1086; emu_last_cs = 0xB518; emu_last_ip = 0x1073; emu_last_length = 0x002B; emu_last_crc = 0x3AA7; emu_call(); return; } // Jump does not resolve
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { emu_ip = 0x107C; emu_last_cs = 0xB518; emu_last_ip = 0x1075; emu_last_length = 0x002B; emu_last_crc = 0x3AA7; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_ax.x, 0xFDE8);
	if ((emu_flags.cf || emu_flags.zf)) { f__B518_1086_000E_30F0(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x0), 0xFDE8);
	emu_ip = 0x108C; emu_last_cs = 0xB518; emu_last_ip = 0x1084; emu_last_length = 0x002B; emu_last_crc = 0x3AA7; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B518_1086_000E_30F0()
 *
 * @name f__B518_1086_000E_30F0
 * @implements B518:1086:000E:30F0 ()
 *
 * Called From: B518:107A:002B:3AA7
 */
void f__B518_1086_000E_30F0()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_addw(&emu_get_memory16(emu_es, emu_bx.x,  0x0), emu_di);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x10));
	emu_push(emu_cs); emu_push(0x1094); emu_cs = 0x10BE; f__10BE_01AB_002F_0E7B();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_1094_001E_664E();
}

/**
 * Decompiled function f__B518_1094_001E_664E()
 *
 * @name f__B518_1094_001E_664E
 * @implements B518:1094:001E:664E ()
 *
 * Called From: B518:1094:000E:30F0
 */
void f__B518_1094_001E_664E()
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
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { emu_ip = 0x10B2; emu_last_cs = 0xB518; emu_last_ip = 0x10AC; emu_last_length = 0x001E; emu_last_crc = 0x664E; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_si);
	f__B518_10B4_0022_C1BE(); return;
}

/**
 * Decompiled function f__B518_10B4_0022_C1BE()
 *
 * @name f__B518_10B4_0022_C1BE
 * @implements B518:10B4:0022:C1BE ()
 *
 * Called From: B518:10B0:001E:664E
 */
void f__B518_10B4_0022_C1BE()
{
	emu_movw(&emu_si, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x38B2));
	emu_movw(&emu_dx.x, 0x2D);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00, -0x7E15));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xA));
	if (!(emu_flags.sf != emu_flags.of)) { emu_ip = 0x10D2; emu_last_cs = 0xB518; emu_last_ip = 0x10C7; emu_last_length = 0x0022; emu_last_crc = 0xC1BE; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_subw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00, -0x7E15));
	emu_addw(&emu_si, emu_ax.x);
	emu_movw(&emu_ax.x, emu_si);
	f__B518_10D6_0006_F7CE(); return;
}

/**
 * Decompiled function f__B518_10D6_0006_F7CE()
 *
 * @name f__B518_10D6_0006_F7CE
 * @implements B518:10D6:0006:F7CE ()
 *
 * Called From: B518:10D4:0022:C1BE
 */
void f__B518_10D6_0006_F7CE()
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
 * Decompiled function f__B518_10DC_0011_9EE1()
 *
 * @name f__B518_10DC_0011_9EE1
 * @implements B518:10DC:0011:9EE1 ()
 *
 * Called From: B518:065B:000C:93F1
 */
void f__B518_10DC_0011_9EE1()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x6);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_di, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movw(&emu_si, 0x1);
	f__B518_11B4_0008_B3A8(); return;
}

/**
 * Decompiled function f__B518_10ED_000C_42CB()
 *
 * @name f__B518_10ED_000C_42CB
 * @implements B518:10ED:000C:42CB ()
 *
 * Called From: B518:11B9:0008:B3A8
 * Called From: B518:11B9:000D:6BEF
 */
void f__B518_10ED_000C_42CB()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx.x,  0x6), emu_di);
	if ((emu_flags.sf != emu_flags.of)) { f__B518_10F9_001C_5029(); return; }
	f__B518_11AF_000D_6BEF(); return;
}

/**
 * Decompiled function f__B518_10F9_001C_5029()
 *
 * @name f__B518_10F9_001C_5029
 * @implements B518:10F9:001C:5029 ()
 *
 * Called From: B518:10F4:000C:42CB
 */
void f__B518_10F9_001C_5029()
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
	emu_push(emu_cs); emu_push(0x1115); emu_cs = 0x2B0E; f__2B0E_0006_0049_87B1();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_1115_0023_A905();
}

/**
 * Decompiled function f__B518_1115_0023_A905()
 *
 * @name f__B518_1115_0023_A905
 * @implements B518:1115:0023:A905 ()
 *
 * Called From: B518:1115:001C:5029
 */
void f__B518_1115_0023_A905()
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
	emu_push(emu_cs); emu_push(0x1138); emu_cs = 0x2B0E; f__2B0E_0006_0049_87B1();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_1138_0015_484E();
}

/**
 * Decompiled function f__B518_1138_0015_484E()
 *
 * @name f__B518_1138_0015_484E
 * @implements B518:1138:0015:484E ()
 *
 * Called From: B518:1138:0023:A905
 */
void f__B518_1138_0015_484E()
{
	emu_addws(&emu_sp, 0xC);
	emu_movw(&emu_ax.x, 0x6);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x114D); emu_cs = 0x01F7; f__01F7_2947_0014_02B8();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_114D_0019_C8A2();
}

/**
 * Decompiled function f__B518_114D_0019_C8A2()
 *
 * @name f__B518_114D_0019_C8A2
 * @implements B518:114D:0019:C8A2 ()
 *
 * Called From: B518:114D:0015:484E
 */
void f__B518_114D_0019_C8A2()
{
	emu_addws(&emu_sp, 0x8);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x6), emu_di);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3A38));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0xC), emu_ax.x);
	emu_push(emu_di);
	emu_push(emu_cs);
	emu_push(0x1166); f__B518_0F22_0007_C8B1();
	f__B518_1166_002E_308B();
}

/**
 * Decompiled function f__B518_1166_002E_308B()
 *
 * @name f__B518_1166_002E_308B
 * @implements B518:1166:002E:308B ()
 *
 * Called From: B518:1166:0019:C8A2
 */
void f__B518_1166_002E_308B()
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
	f__B518_11A5_000A_49D8(); return;
}

/**
 * Decompiled function f__B518_1194_001B_8B65()
 *
 * @name f__B518_1194_001B_8B65
 * @implements B518:1194:001B:8B65 ()
 *
 * Called From: B518:11A9:000A:49D8
 * Called From: B518:11A9:001B:8B65
 */
void f__B518_1194_001B_8B65()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x0));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_addw(&emu_get_memory16(emu_es, emu_bx.x,  0xE), emu_ax.x);
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0xE);
	if ((emu_flags.sf != emu_flags.of)) { f__B518_1194_001B_8B65(); return; }
	emu_movw(&emu_ax.x, emu_si);
	f__B518_11C0_0006_F7CE(); return;
}

/**
 * Decompiled function f__B518_11A5_000A_49D8()
 *
 * @name f__B518_11A5_000A_49D8
 * @implements B518:11A5:000A:49D8 ()
 *
 * Called From: B518:1192:002E:308B
 */
void f__B518_11A5_000A_49D8()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0xE);
	if ((emu_flags.sf != emu_flags.of)) { f__B518_1194_001B_8B65(); return; }
	emu_movw(&emu_ax.x, emu_si);
	emu_ip = 0x11C0; emu_last_cs = 0xB518; emu_last_ip = 0x11AD; emu_last_length = 0x000A; emu_last_crc = 0x49D8; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B518_11AF_000D_6BEF()
 *
 * @name f__B518_11AF_000D_6BEF
 * @implements B518:11AF:000D:6BEF ()
 *
 * Called From: B518:10F6:000C:42CB
 */
void f__B518_11AF_000D_6BEF()
{
	emu_addws(&emu_get_memory16(emu_ss, emu_bp,  0x6), 0x10);
	emu_incw(&emu_si);
	emu_cmpws(&emu_si, 0x8);
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { emu_ip = 0x11BC; emu_last_cs = 0xB518; emu_last_ip = 0x11B7; emu_last_length = 0x000D; emu_last_crc = 0x6BEF; emu_call(); return; } // Jump does not resolve
	f__B518_10ED_000C_42CB(); return;
}

/**
 * Decompiled function f__B518_11B4_0008_B3A8()
 *
 * @name f__B518_11B4_0008_B3A8
 * @implements B518:11B4:0008:B3A8 ()
 *
 * Called From: B518:10EA:0011:9EE1
 */
void f__B518_11B4_0008_B3A8()
{
	emu_cmpws(&emu_si, 0x8);
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { emu_ip = 0x11BC; emu_last_cs = 0xB518; emu_last_ip = 0x11B7; emu_last_length = 0x0008; emu_last_crc = 0xB3A8; emu_call(); return; } // Jump does not resolve
	f__B518_10ED_000C_42CB(); return;
}

/**
 * Decompiled function f__B518_11C0_0006_F7CE()
 *
 * @name f__B518_11C0_0006_F7CE
 * @implements B518:11C0:0006:F7CE ()
 *
 * Called From: B518:11AD:001B:8B65
 */
void f__B518_11C0_0006_F7CE()
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
 * Decompiled function f__B518_11C6_0011_1160()
 *
 * @name f__B518_11C6_0011_1160
 * @implements B518:11C6:0011:1160 ()
 *
 * Called From: B518:066F:0014:179F
 * Called From: B518:066F:000E:13D1
 * Called From: B518:07DA:0012:801B
 * Called From: B518:0AE9:0016:F50A
 */
void f__B518_11C6_0011_1160()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x8);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x11D7); emu_cs = 0x2598; f__2598_0000_0017_EB80();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_11D7_0022_125A();
}

/**
 * Decompiled function f__B518_11D7_0022_125A()
 *
 * @name f__B518_11D7_0022_125A
 * @implements B518:11D7:0022:125A ()
 *
 * Called From: B518:11D7:0011:1160
 */
void f__B518_11D7_0022_125A()
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
		case 0x22A60D31: f__22A6_0D31_0015_A4C3(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0xB518; emu_last_ip = 0x11F4; emu_last_length = 0x0022; emu_last_crc = 0x125A;
			emu_call();
			return;
	}
	f__B518_11F9_001E_B9DD();
}

/**
 * Decompiled function f__B518_11F9_001E_B9DD()
 *
 * @name f__B518_11F9_001E_B9DD
 * @implements B518:11F9:001E:B9DD ()
 *
 * Called From: B518:11F9:0022:125A
 */
void f__B518_11F9_001E_B9DD()
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
	emu_push(emu_cs); emu_push(0x1217); emu_cs = 0x10E4; f__10E4_1EF1_0040_01F8();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_1217_000C_BD90();
}

/**
 * Decompiled function f__B518_1217_000C_BD90()
 *
 * @name f__B518_1217_000C_BD90
 * @implements B518:1217:000C:BD90 ()
 *
 * Called From: B518:1217:001E:B9DD
 */
void f__B518_1217_000C_BD90()
{
	emu_addws(&emu_sp, 0xE);
	emu_movw(&emu_ax.x, 0x145);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x1223); emu_cs = 0x0FCB; f__0FCB_005F_001C_FDC4();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_1223_0008_1FFE();
}

/**
 * Decompiled function f__B518_1223_0008_1FFE()
 *
 * @name f__B518_1223_0008_1FFE
 * @implements B518:1223:0008:1FFE ()
 *
 * Called From: B518:1223:000C:BD90
 */
void f__B518_1223_0008_1FFE()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x122B); emu_cs = 0x2521; f__2521_0035_0015_AA0F();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_122B_0018_55B9();
}

/**
 * Decompiled function f__B518_122B_0018_55B9()
 *
 * @name f__B518_122B_0018_55B9
 * @implements B518:122B:0018:55B9 ()
 *
 * Called From: B518:122B:0008:1FFE
 */
void f__B518_122B_0018_55B9()
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
	emu_push(emu_cs); emu_push(0x1243); emu_cs = 0x0FCB; f__0FCB_005F_001C_FDC4();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_1243_0008_1FFE();
}

/**
 * Decompiled function f__B518_1243_0008_1FFE()
 *
 * @name f__B518_1243_0008_1FFE
 * @implements B518:1243:0008:1FFE ()
 *
 * Called From: B518:1243:0018:55B9
 */
void f__B518_1243_0008_1FFE()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x124B); emu_cs = 0x2521; f__2521_0035_0015_AA0F();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_124B_000E_E653();
}

/**
 * Decompiled function f__B518_124B_000E_E653()
 *
 * @name f__B518_124B_000E_E653
 * @implements B518:124B:000E:E653 ()
 *
 * Called From: B518:124B:0008:1FFE
 */
void f__B518_124B_000E_E653()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_shrw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x145);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x1259); emu_cs = 0x0FCB; f__0FCB_005F_001C_FDC4();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_1259_0008_1FFE();
}

/**
 * Decompiled function f__B518_1259_0008_1FFE()
 *
 * @name f__B518_1259_0008_1FFE
 * @implements B518:1259:0008:1FFE ()
 *
 * Called From: B518:1259:000E:E653
 */
void f__B518_1259_0008_1FFE()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x1261); emu_cs = 0x2521; f__2521_0035_0015_AA0F();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_1261_002E_746D();
}

/**
 * Decompiled function f__B518_1261_002E_746D()
 *
 * @name f__B518_1261_002E_746D
 * @implements B518:1261:002E:746D ()
 *
 * Called From: B518:1261:0008:1FFE
 */
void f__B518_1261_002E_746D()
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
	emu_push(emu_cs); emu_push(0x128F); emu_cs = 0x0FCB; f__0FCB_005F_001C_FDC4();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_128F_0008_0683();
}

/**
 * Decompiled function f__B518_128F_0008_0683()
 *
 * @name f__B518_128F_0008_0683
 * @implements B518:128F:0008:0683 ()
 *
 * Called From: B518:128F:002E:746D
 */
void f__B518_128F_0008_0683()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x1297); emu_cs = 0x10E4; f__10E4_1EF1_0040_01F8();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_1297_001B_ED48();
}

/**
 * Decompiled function f__B518_1297_001B_ED48()
 *
 * @name f__B518_1297_001B_ED48
 * @implements B518:1297:001B:ED48 ()
 *
 * Called From: B518:1297:0008:0683
 */
void f__B518_1297_001B_ED48()
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
	emu_push(emu_cs); emu_push(0x12B2); emu_cs = 0x0FCB; f__0FCB_005F_001C_FDC4();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_12B2_0008_0683();
}

/**
 * Decompiled function f__B518_12B2_0008_0683()
 *
 * @name f__B518_12B2_0008_0683
 * @implements B518:12B2:0008:0683 ()
 *
 * Called From: B518:12B2:001B:ED48
 */
void f__B518_12B2_0008_0683()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x12BA); emu_cs = 0x10E4; f__10E4_1EF1_0040_01F8();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_12BA_001B_EDC8();
}

/**
 * Decompiled function f__B518_12BA_001B_EDC8()
 *
 * @name f__B518_12BA_001B_EDC8
 * @implements B518:12BA:001B:EDC8 ()
 *
 * Called From: B518:12BA:0008:0683
 */
void f__B518_12BA_001B_EDC8()
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
	emu_push(emu_cs); emu_push(0x12D5); emu_cs = 0x0FCB; f__0FCB_005F_001C_FDC4();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_12D5_0008_0683();
}

/**
 * Decompiled function f__B518_12D5_0008_0683()
 *
 * @name f__B518_12D5_0008_0683
 * @implements B518:12D5:0008:0683 ()
 *
 * Called From: B518:12D5:001B:EDC8
 */
void f__B518_12D5_0008_0683()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x12DD); emu_cs = 0x10E4; f__10E4_1EF1_0040_01F8();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_12DD_000C_307B();
}

/**
 * Decompiled function f__B518_12DD_000C_307B()
 *
 * @name f__B518_12DD_000C_307B
 * @implements B518:12DD:000C:307B ()
 *
 * Called From: B518:12DD:0008:0683
 */
void f__B518_12DD_000C_307B()
{
	emu_addws(&emu_sp, 0xE);
	emu_movw(&emu_si, 0x5A);
	emu_movw(&emu_di, 0x1);
	f__B518_1481_0008_F33E(); return;
}

/**
 * Decompiled function f__B518_12E9_000D_FD07()
 *
 * @name f__B518_12E9_000D_FD07
 * @implements B518:12E9:000D:FD07 ()
 *
 * Called From: B518:1486:0008:F33E
 * Called From: B518:1486:0013:3F86
 */
void f__B518_12E9_000D_FD07()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x6), 0x0);
	if (!emu_flags.zf) { f__B518_12F6_0010_0F35(); return; }
	f__B518_1489_000B_DA15(); return;
}

/**
 * Decompiled function f__B518_12F6_0010_0F35()
 *
 * @name f__B518_12F6_0010_0F35
 * @implements B518:12F6:0010:0F35 ()
 *
 * Called From: B518:12F1:000D:FD07
 */
void f__B518_12F6_0010_0F35()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x9939);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x1306); emu_cs = 0x01F7; f__01F7_38F6_0029_8B99();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_1306_0012_3A86();
}

/**
 * Decompiled function f__B518_1306_0012_3A86()
 *
 * @name f__B518_1306_0012_3A86
 * @implements B518:1306:0012:3A86 ()
 *
 * Called From: B518:1306:0010:0F35
 */
void f__B518_1306_0012_3A86()
{
	emu_addws(&emu_sp, 0x8);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x2C57);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x9939);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x1318); emu_cs = 0x01F7; f__01F7_384A_003F_AE43();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_1318_001E_C333();
}

/**
 * Decompiled function f__B518_1318_001E_C333()
 *
 * @name f__B518_1318_001E_C333
 * @implements B518:1318:001E:C333 ()
 *
 * Called From: B518:1318:0012:3A86
 */
void f__B518_1318_001E_C333()
{
	emu_addws(&emu_sp, 0x8);
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x37B6), 0x1);
	if (!emu_flags.zf) { f__B518_1370_0020_B4DF(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_bx.x, emu_get_memory16(emu_es, emu_bx.x,  0x8));
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_push(emu_get_memory16(emu_ds, emu_bx.x,  0x37C0));
	emu_push(emu_cs); emu_push(0x1336); emu_cs = 0x0FCB; emu_ip = 0x1395; emu_last_cs = 0xB518; emu_last_ip = 0x1331; emu_last_length = 0x001E; emu_last_crc = 0xC333; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__B518_1370_0020_B4DF()
 *
 * @name f__B518_1370_0020_B4DF
 * @implements B518:1370:0020:B4DF ()
 *
 * Called From: B518:1320:001E:C333
 */
void f__B518_1370_0020_B4DF()
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
	emu_push(emu_cs); emu_push(0x1390); emu_cs = 0x01F7; f__01F7_384A_003F_AE43();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_1390_0012_4286();
}

/**
 * Decompiled function f__B518_1390_0012_4286()
 *
 * @name f__B518_1390_0012_4286
 * @implements B518:1390:0012:4286 ()
 *
 * Called From: B518:1390:0020:B4DF
 */
void f__B518_1390_0012_4286()
{
	emu_addws(&emu_sp, 0x8);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x2C58);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x9939);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x13A2); emu_cs = 0x01F7; f__01F7_384A_003F_AE43();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_13A2_0017_7E44();
}

/**
 * Decompiled function f__B518_13A2_0017_7E44()
 *
 * @name f__B518_13A2_0017_7E44
 * @implements B518:13A2:0017:7E44 ()
 *
 * Called From: B518:13A2:0012:4286
 */
void f__B518_13A2_0017_7E44()
{
	emu_addws(&emu_sp, 0x8);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_bx.x, emu_get_memory16(emu_es, emu_bx.x,  0x8));
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_push(emu_get_memory16(emu_ds, emu_bx.x,  0x37C0));
	emu_push(emu_cs); emu_push(0x13B9); emu_cs = 0x0FCB; f__0FCB_005F_001C_FDC4();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_13B9_000D_D1AE();
}

/**
 * Decompiled function f__B518_13B9_000D_D1AE()
 *
 * @name f__B518_13B9_000D_D1AE
 * @implements B518:13B9:000D:D1AE ()
 *
 * Called From: B518:13B9:0017:7E44
 */
void f__B518_13B9_000D_D1AE()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x9939);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x13C6); emu_cs = 0x01F7; f__01F7_384A_003F_AE43();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_13C6_0028_C863();
}

/**
 * Decompiled function f__B518_13C6_0028_C863()
 *
 * @name f__B518_13C6_0028_C863
 * @implements B518:13C6:0028:C863 ()
 *
 * Called From: B518:13C6:000D:D1AE
 */
void f__B518_13C6_0028_C863()
{
	emu_addws(&emu_sp, 0x8);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x0));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.zf) { f__B518_13F8_001A_FDC5(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_addw(&emu_ax.x, 0xFFFC);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_addw(&emu_ax.x, 0xFFE0);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x9939);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x13EE); emu_cs = 0x2521; f__2521_0035_0015_AA0F();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_13EE_000A_390E();
}

/**
 * Decompiled function f__B518_13EE_000A_390E()
 *
 * @name f__B518_13EE_000A_390E
 * @implements B518:13EE:000A:390E ()
 *
 * Called From: B518:13EE:0028:C863
 */
void f__B518_13EE_000A_390E()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_pop(&emu_dx.x);
	emu_subw(&emu_dx.x, emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx.x);
	f__B518_1415_001B_BDA4(); return;
}

/**
 * Decompiled function f__B518_13F8_001A_FDC5()
 *
 * @name f__B518_13F8_001A_FDC5
 * @implements B518:13F8:001A:FDC5 ()
 *
 * Called From: B518:13D2:0028:C863
 */
void f__B518_13F8_001A_FDC5()
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
	emu_push(emu_cs); emu_push(0x1412); emu_cs = 0x10E4; f__10E4_1EF1_0040_01F8();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_1412_001E_9F4E();
}

/**
 * Decompiled function f__B518_1412_001E_9F4E()
 *
 * @name f__B518_1412_001E_9F4E
 * @implements B518:1412:001E:9F4E ()
 *
 * Called From: B518:1412:001A:FDC5
 */
void f__B518_1412_001E_9F4E()
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
	emu_push(emu_cs); emu_push(0x1430); emu_cs = 0x10E4; f__10E4_1EF1_0040_01F8();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_1430_0023_AF14();
}

/**
 * Decompiled function f__B518_1415_001B_BDA4()
 *
 * @name f__B518_1415_001B_BDA4
 * @implements B518:1415:001B:BDA4 ()
 *
 * Called From: B518:13F6:000A:390E
 */
void f__B518_1415_001B_BDA4()
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
	emu_push(emu_cs); emu_push(0x1430); emu_cs = 0x10E4; f__10E4_1EF1_0040_01F8();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_1430_0023_AF14();
}

/**
 * Decompiled function f__B518_1430_0023_AF14()
 *
 * @name f__B518_1430_0023_AF14
 * @implements B518:1430:0023:AF14 ()
 *
 * Called From: B518:1430:001B:BDA4
 * Called From: B518:1430:001E:9F4E
 */
void f__B518_1430_0023_AF14()
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
	emu_push(emu_cs); emu_push(0x1453); emu_cs = 0x10E4; f__10E4_1EF1_0040_01F8();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_1453_0023_6C14();
}

/**
 * Decompiled function f__B518_1453_0023_6C14()
 *
 * @name f__B518_1453_0023_6C14
 * @implements B518:1453:0023:6C14 ()
 *
 * Called From: B518:1453:0023:AF14
 */
void f__B518_1453_0023_6C14()
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
	emu_push(emu_cs); emu_push(0x1476); emu_cs = 0x10E4; f__10E4_1EF1_0040_01F8();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_1476_0013_3F86();
}

/**
 * Decompiled function f__B518_1476_0013_3F86()
 *
 * @name f__B518_1476_0013_3F86
 * @implements B518:1476:0013:3F86 ()
 *
 * Called From: B518:1476:0023:6C14
 */
void f__B518_1476_0013_3F86()
{
	emu_addws(&emu_sp, 0x10);
	emu_addws(&emu_si, 0xB);
	emu_addws(&emu_get_memory16(emu_ss, emu_bp,  0x6), 0x10);
	emu_incw(&emu_di);
	emu_cmpws(&emu_di, 0x8);
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { emu_ip = 0x1489; emu_last_cs = 0xB518; emu_last_ip = 0x1484; emu_last_length = 0x0013; emu_last_crc = 0x3F86; emu_call(); return; } // Jump does not resolve
	f__B518_12E9_000D_FD07(); return;
}

/**
 * Decompiled function f__B518_1481_0008_F33E()
 *
 * @name f__B518_1481_0008_F33E
 * @implements B518:1481:0008:F33E ()
 *
 * Called From: B518:12E6:000C:307B
 */
void f__B518_1481_0008_F33E()
{
	emu_cmpws(&emu_di, 0x8);
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { emu_ip = 0x1489; emu_last_cs = 0xB518; emu_last_ip = 0x1484; emu_last_length = 0x0008; emu_last_crc = 0xF33E; emu_call(); return; } // Jump does not resolve
	f__B518_12E9_000D_FD07(); return;
}

/**
 * Decompiled function f__B518_1489_000B_DA15()
 *
 * @name f__B518_1489_000B_DA15
 * @implements B518:1489:000B:DA15 ()
 *
 * Called From: B518:12F3:000D:FD07
 */
void f__B518_1489_000B_DA15()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0xA), 0x0);
	if (emu_flags.zf) { f__B518_14C0_0008_0999(); return; }
	emu_push(emu_cs); emu_push(0x1494); emu_cs = 0x2B6C; f__2B6C_0137_0020_C73F();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_1494_0024_CF61();
}

/**
 * Decompiled function f__B518_1494_0024_CF61()
 *
 * @name f__B518_1494_0024_CF61
 * @implements B518:1494:0024:CF61 ()
 *
 * Called From: B518:1494:000B:DA15
 */
void f__B518_1494_0024_CF61()
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
	emu_push(emu_cs); emu_push(0x14B8); emu_cs = 0x24D0; f__24D0_000D_0039_C17D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_14B8_0008_43E5();
}

/**
 * Decompiled function f__B518_14B8_0008_43E5()
 *
 * @name f__B518_14B8_0008_43E5
 * @implements B518:14B8:0008:43E5 ()
 *
 * Called From: B518:14B8:0024:CF61
 */
void f__B518_14B8_0008_43E5()
{
	emu_addws(&emu_sp, 0x10);
	emu_push(emu_cs); emu_push(0x14C0); emu_cs = 0x2B6C; f__2B6C_0169_001E_6939();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_14C0_0008_0999();
}

/**
 * Decompiled function f__B518_14C0_0008_0999()
 *
 * @name f__B518_14C0_0008_0999
 * @implements B518:14C0:0008:0999 ()
 *
 * Called From: B518:148D:000B:DA15
 * Called From: B518:14C0:0008:43E5
 */
void f__B518_14C0_0008_0999()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs); emu_push(0x14C8); emu_cs = 0x2598; f__2598_0000_0017_EB80();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_14C8_0006_DFA7();
}

/**
 * Decompiled function f__B518_14C8_0006_DFA7()
 *
 * @name f__B518_14C8_0006_DFA7
 * @implements B518:14C8:0006:DFA7 ()
 *
 * Called From: B518:14C8:0008:0999
 */
void f__B518_14C8_0006_DFA7()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	f__B518_14CE_0006_F7CE(); return;
}

/**
 * Decompiled function f__B518_14CE_0006_F7CE()
 *
 * @name f__B518_14CE_0006_F7CE
 * @implements B518:14CE:0006:F7CE ()
 *
 * Called From: B518:14CC:0006:DFA7
 */
void f__B518_14CE_0006_F7CE()
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
 * Decompiled function f__B518_14D4_0013_5ED7()
 *
 * @name f__B518_14D4_0013_5ED7
 * @implements B518:14D4:0013:5ED7 ()
 *
 * Called From: B518:02F3:0009:1C6A
 * Called From: B518:030B:000B:2A27
 * Called From: B518:0450:000A:C8F6
 * Called From: B518:04DF:000A:2421
 * Called From: B518:04F5:0009:826A
 */
void f__B518_14D4_0013_5ED7()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cwd();
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x76B6), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x76B4), emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x14E7); f__B518_14F2_003E_977C();
	f__B518_14E7_000B_B641();
}

/**
 * Decompiled function f__B518_14E2_0005_3982()
 *
 * @name f__B518_14E2_0005_3982
 * @implements B518:14E2:0005:3982 ()
 *
 * Called From: B518:14EE:000B:B641
 */
void f__B518_14E2_0005_3982()
{
	emu_push(emu_cs);
	emu_push(0x14E7); f__B518_14F2_003E_977C();
	f__B518_14E7_000B_B641();
}

/**
 * Decompiled function f__B518_14E7_000B_B641()
 *
 * @name f__B518_14E7_000B_B641
 * @implements B518:14E7:000B:B641 ()
 *
 * Called From: B518:14E7:0013:5ED7
 * Called From: B518:14E7:0005:3982
 */
void f__B518_14E7_000B_B641()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76B4));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76B6));
	if (!emu_flags.zf) { f__B518_14E2_0005_3982(); return; }
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B518_14F2_003E_977C()
 *
 * @name f__B518_14F2_003E_977C
 * @implements B518:14F2:003E:977C ()
 *
 * Called From: 3518:0066:0005:0000
 * Called From: B518:0316:0005:B136
 * Called From: B518:0323:0005:F133
 * Called From: B518:03CC:0008:F380
 * Called From: B518:050E:0005:BE38
 * Called From: B518:0E1B:0015:5548
 * Called From: B518:14E4:0013:5ED7
 * Called From: B518:14E4:0005:3982
 */
void f__B518_14F2_003E_977C()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x2C3C));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x2C3A));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76AE));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__B518_156A_0004_E839(); return; }
	if ((emu_flags.sf != emu_flags.of)) { emu_ip = 0x150A; emu_last_cs = 0xB518; emu_last_ip = 0x1502; emu_last_length = 0x003E; emu_last_crc = 0x977C; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76AC));
	if (!emu_flags.cf) { f__B518_156A_0004_E839(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76AE));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76AC));
	emu_addws(&emu_dx.x, 0x2);
	emu_adcw(&emu_ax.x, 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x2C3C), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x2C3A), emu_dx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x7E13));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0x3F);
	if (emu_flags.cf) { f__B518_1530_0037_4A8F(); return; }
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x2C38), 0xFFFF);
	f__B518_1540_0027_625D(); return;
}

/**
 * Decompiled function f__B518_1530_0037_4A8F()
 *
 * @name f__B518_1530_0037_4A8F
 * @implements B518:1530:0037:4A8F ()
 *
 * Called From: B518:1526:003E:977C
 */
void f__B518_1530_0037_4A8F()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x7E13));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0x23);
	if (!(emu_flags.cf || emu_flags.zf)) { f__B518_1540_0027_625D(); return; }
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
	emu_push(emu_cs); emu_push(0x1567); emu_cs = 0x2BA5; f__2BA5_0006_009C_A3D1();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_1567_0007_F97C();
}

/**
 * Decompiled function f__B518_1540_0027_625D()
 *
 * @name f__B518_1540_0027_625D
 * @implements B518:1540:0027:625D ()
 *
 * Called From: B518:152E:003E:977C
 * Called From: B518:1538:0037:4A8F
 */
void f__B518_1540_0027_625D()
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
	emu_push(emu_cs); emu_push(0x1567); emu_cs = 0x2BA5; f__2BA5_0006_009C_A3D1();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { ovl__3518(0xFF); }
	f__B518_1567_0007_F97C();
}

/**
 * Decompiled function f__B518_1567_0007_F97C()
 *
 * @name f__B518_1567_0007_F97C
 * @implements B518:1567:0007:F97C ()
 *
 * Called From: B518:1567:0037:4A8F
 * Called From: B518:1567:0027:625D
 */
void f__B518_1567_0007_F97C()
{
	emu_addws(&emu_sp, 0x8);
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__B518_156E_0002_2597(); return;
}

/**
 * Decompiled function f__B518_156A_0004_E839()
 *
 * @name f__B518_156A_0004_E839
 * @implements B518:156A:0004:E839 ()
 *
 * Called From: B518:1500:003E:977C
 * Called From: B518:1508:003E:977C
 */
void f__B518_156A_0004_E839()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__B518_156E_0002_2597(); return;
}

/**
 * Decompiled function f__B518_156E_0002_2597()
 *
 * @name f__B518_156E_0002_2597
 * @implements B518:156E:0002:2597 ()
 *
 * Called From: B518:156C:0007:F97C
 * Called From: B518:156C:0004:E839
 */
void f__B518_156E_0002_2597()
{
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B518_1570_0016_F4CA()
 *
 * @name f__B518_1570_0016_F4CA
 * @implements B518:1570:0016:F4CA ()
 *
 * Called From: B518:05C8:000E:76AD
 * Called From: B518:07E8:000E:7745
 */
void f__B518_1570_0016_F4CA()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x4);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_dx.x);
	emu_xorw(&emu_cx.x, emu_cx.x);
	f__B518_159F_000A_5E0A(); return;
}

/**
 * Decompiled function f__B518_1586_0023_77EC()
 *
 * @name f__B518_1586_0023_77EC
 * @implements B518:1586:0023:77EC ()
 *
 * Called From: B518:15A3:000A:5E0A
 * Called From: B518:15A3:0023:77EC
 */
void f__B518_1586_0023_77EC()
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
	if ((emu_flags.sf != emu_flags.of)) { f__B518_1586_0023_77EC(); return; }
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B518_159F_000A_5E0A()
 *
 * @name f__B518_159F_000A_5E0A
 * @implements B518:159F:000A:5E0A ()
 *
 * Called From: B518:1584:0016:F4CA
 */
void f__B518_159F_000A_5E0A()
{
	emu_cmpw(&emu_cx.x, 0x80);
	if ((emu_flags.sf != emu_flags.of)) { f__B518_1586_0023_77EC(); return; }
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B518_15A9_0016_F4CA()
 *
 * @name f__B518_15A9_0016_F4CA
 * @implements B518:15A9:0016:F4CA ()
 *
 * Called From: B518:0635:000E:76D8
 */
void f__B518_15A9_0016_F4CA()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x4);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_dx.x);
	emu_xorw(&emu_cx.x, emu_cx.x);
	f__B518_15D8_000A_5E0A(); return;
}

/**
 * Decompiled function f__B518_15BF_0023_1D70()
 *
 * @name f__B518_15BF_0023_1D70
 * @implements B518:15BF:0023:1D70 ()
 *
 * Called From: B518:15DC:000A:5E0A
 * Called From: B518:15DC:0023:1D70
 */
void f__B518_15BF_0023_1D70()
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
	if ((emu_flags.sf != emu_flags.of)) { f__B518_15BF_0023_1D70(); return; }
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B518_15D8_000A_5E0A()
 *
 * @name f__B518_15D8_000A_5E0A
 * @implements B518:15D8:000A:5E0A ()
 *
 * Called From: B518:15BD:0016:F4CA
 */
void f__B518_15D8_000A_5E0A()
{
	emu_cmpw(&emu_cx.x, 0x80);
	if ((emu_flags.sf != emu_flags.of)) { f__B518_15BF_0023_1D70(); return; }
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

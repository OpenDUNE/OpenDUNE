/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__0642_000C_001A_AF29()
 *
 * @name f__0642_000C_001A_AF29
 * @implements 0642:000C:001A:AF29 ()
 *
 * Called From: B480:02CF:0032:E148
 */
void f__0642_000C_001A_AF29()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subw(&emu_sp, 0x2);
	emu_push(emu_si);
	emu_movw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_al, emu_get_memory8(emu_ds, 0x00, 0x98E9));
	emu_movb(&emu_ah, 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x37B6), emu_ax);
	emu_cmpw(&emu_si, 0x1);
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x0026; emu_last_cs = 0x0642; emu_last_ip = 0x0021; emu_last_length = 0x001A; emu_last_crc = 0xAF29; emu_call(); return; }
	f__0642_00E0_000A_A0DD(); return;
}

/**
 * Decompiled function f__0642_00E0_000A_A0DD()
 *
 * @name f__0642_00E0_000A_A0DD
 * @implements 0642:00E0:000A:A0DD ()
 *
 * Called From: 0642:0023:001A:AF29
 */
void f__0642_00E0_000A_A0DD()
{
	emu_push(emu_ds);
	emu_movw(&emu_ax, 0x31F4);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x00EA); emu_cs = 0x0FCB; f__0FCB_000D_0019_5047();
	f__0642_00EA_000A_99DA();
}

/**
 * Decompiled function f__0642_00EA_000A_99DA()
 *
 * @name f__0642_00EA_000A_99DA
 * @implements 0642:00EA:000A:99DA ()
 *
 */
void f__0642_00EA_000A_99DA()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x00F4); f__0642_0AD2_002A_8B98();
	f__0642_00F4_000D_15EE();
}

/**
 * Decompiled function f__0642_00F4_000D_15EE()
 *
 * @name f__0642_00F4_000D_15EE
 * @implements 0642:00F4:000D:15EE ()
 *
 */
void f__0642_00F4_000D_15EE()
{
	emu_pop(&emu_cx);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x0101); emu_cs = 0x34B8; ovl__34B8(2);
	f__0642_0101_000C_BC6B();
}

/**
 * Decompiled function f__0642_0101_000C_BC6B()
 *
 * @name f__0642_0101_000C_BC6B
 * @implements 0642:0101:000C:BC6B ()
 *
 */
void f__0642_0101_000C_BC6B()
{
	emu_addw(&emu_sp, 0x6);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x37AA));
	emu_push(emu_cs); emu_push(0x010D); emu_cs = 0x34E9; ovl__34E9(0);
	f__0642_010D_0006_E56C();
}

/**
 * Decompiled function f__0642_010D_0006_E56C()
 *
 * @name f__0642_010D_0006_E56C
 * @implements 0642:010D:0006:E56C ()
 *
 */
void f__0642_010D_0006_E56C()
{
	emu_pop(&emu_cx);
	emu_push(emu_cs); emu_push(0x0113); emu_cs = 0x2B6C; f__2B6C_0169_001E_6939();
	f__0642_0113_000C_CF74();
}

/**
 * Decompiled function f__0642_0113_000C_CF74()
 *
 * @name f__0642_0113_000C_CF74
 * @implements 0642:0113:000C:CF74 ()
 *
 */
void f__0642_0113_000C_CF74()
{
	emu_movw(&emu_ax, 0x5);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x011F); emu_cs = 0x2537; f__2537_000C_001C_86CB();
	f__0642_011F_000B_70BA();
}

/**
 * Decompiled function f__0642_011F_000B_70BA()
 *
 * @name f__0642_011F_000B_70BA
 * @implements 0642:011F:000B:70BA ()
 *
 */
void f__0642_011F_000B_70BA()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_addw(&emu_ax, 0x8);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x012A); emu_cs = 0x3483; ovl__3483(1);
	f__0642_012A_0011_F8BB();
}

/**
 * Decompiled function f__0642_012A_0011_F8BB()
 *
 * @name f__0642_012A_0011_F8BB
 * @implements 0642:012A:0011:F8BB ()
 *
 */
void f__0642_012A_0011_F8BB()
{
	emu_pop(&emu_cx);
	f__0642_012B_0010_D43B(); return;
}

/**
 * Decompiled function f__0642_012B_0010_D43B()
 *
 * @name f__0642_012B_0010_D43B
 * @implements 0642:012B:0010:D43B ()
 *
 * Called From: 0642:040C:000D:9F2A
 * Called From: 0642:040C:000A:88A8
 */
void f__0642_012B_0010_D43B()
{
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x38BE), 0x2);
	if (!emu_flags.zf) { f__0642_0195_0012_6F93(); return; }
	emu_movw(&emu_ax, 0x1C);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x013B); emu_cs = 0x3483; ovl__3483(1);
	f__0642_013B_000C_B04E();
}

/**
 * Decompiled function f__0642_013B_000C_B04E()
 *
 * @name f__0642_013B_000C_B04E
 * @implements 0642:013B:000C:B04E ()
 *
 */
void f__0642_013B_000C_B04E()
{
	emu_pop(&emu_cx);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x3A38), 0x5);
	emu_push(emu_cs); emu_push(0x0147); emu_cs = 0x3511; ovl__3511(7);
	f__0642_0147_0008_2A18();
}

/**
 * Decompiled function f__0642_0147_0008_2A18()
 *
 * @name f__0642_0147_0008_2A18
 * @implements 0642:0147:0008:2A18 ()
 *
 */
void f__0642_0147_0008_2A18()
{
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x3A38), emu_ax);
	emu_push(emu_cs); emu_push(0x014F); emu_cs = 0x2B6C; f__2B6C_0137_0020_C73F();
	f__0642_014F_0009_07B9();
}

/**
 * Decompiled function f__0642_014F_0009_07B9()
 *
 * @name f__0642_014F_0009_07B9
 * @implements 0642:014F:0009:07B9 ()
 *
 */
void f__0642_014F_0009_07B9()
{
	emu_movw(&emu_ax, 0x1);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0158); emu_cs = 0x24DA; f__24DA_002D_0010_3EB2();
	f__0642_0158_0006_EAFC();
}

/**
 * Decompiled function f__0642_0158_0006_EAFC()
 *
 * @name f__0642_0158_0006_EAFC
 * @implements 0642:0158:0006:EAFC ()
 *
 */
void f__0642_0158_0006_EAFC()
{
	emu_pop(&emu_cx);
	emu_push(emu_cs); emu_push(0x015E); emu_cs = 0x34B8; ovl__34B8(5);
	f__0642_015E_0009_B0F3();
}

/**
 * Decompiled function f__0642_015E_0009_B0F3()
 *
 * @name f__0642_015E_0009_B0F3
 * @implements 0642:015E:0009:B0F3 ()
 *
 */
void f__0642_015E_0009_B0F3()
{
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3A38));
	emu_push(emu_cs); emu_push(0x0167); emu_cs = 0x34B8; ovl__34B8(3);
	f__0642_0167_000A_D6BC();
}

/**
 * Decompiled function f__0642_0167_000A_D6BC()
 *
 * @name f__0642_0167_000A_D6BC
 * @implements 0642:0167:000A:D6BC ()
 *
 */
void f__0642_0167_000A_D6BC()
{
	emu_pop(&emu_cx);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3A38));
	emu_push(emu_cs); emu_push(0x0171); emu_cs = 0x3483; ovl__3483(4);
	f__0642_0171_0006_E56C();
}

/**
 * Decompiled function f__0642_0171_0006_E56C()
 *
 * @name f__0642_0171_0006_E56C
 * @implements 0642:0171:0006:E56C ()
 *
 */
void f__0642_0171_0006_E56C()
{
	emu_pop(&emu_cx);
	emu_push(emu_cs); emu_push(0x0177); emu_cs = 0x2B6C; f__2B6C_0169_001E_6939();
	f__0642_0177_0030_A2C8();
}

/**
 * Decompiled function f__0642_0177_0030_A2C8()
 *
 * @name f__0642_0177_0030_A2C8
 * @implements 0642:0177:0030:A2C8 ()
 *
 */
void f__0642_0177_0030_A2C8()
{
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x38BE), 0x1);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x38B0), 0x1);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x38B2), 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x2AF6), 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x2AF4), 0x0);
	f__0642_0195_0012_6F93(); return;
}

/**
 * Decompiled function f__0642_0195_0012_6F93()
 *
 * @name f__0642_0195_0012_6F93
 * @implements 0642:0195:0012:6F93 ()
 *
 * Called From: 0642:0130:0011:F8BB
 * Called From: 0642:0130:0010:D43B
 */
void f__0642_0195_0012_6F93()
{
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x3A10));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x3A0E));
	if (emu_flags.zf) { f__0642_01A8_0005_F82B(); return; }
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3A10));
	emu_push(emu_cs); emu_push(0x01A7); emu_cs = 0x34E9; ovl__34E9(2);
	f__0642_01A7_0006_9C2A();
}

/**
 * Decompiled function f__0642_01A7_0006_9C2A()
 *
 * @name f__0642_01A7_0006_9C2A
 * @implements 0642:01A7:0006:9C2A ()
 *
 */
void f__0642_01A7_0006_9C2A()
{
	emu_pop(&emu_cx);
	f__0642_01A8_0005_F82B(); return;
}

/**
 * Decompiled function f__0642_01A8_0005_F82B()
 *
 * @name f__0642_01A8_0005_F82B
 * @implements 0642:01A8:0005:F82B ()
 *
 * Called From: 0642:019C:0012:6F93
 * Called From: 0642:019C:0030:A2C8
 */
void f__0642_01A8_0005_F82B()
{
	emu_push(emu_cs);
	emu_push(0x01AD); f__0642_0559_0027_3560();
	f__0642_01AD_000F_C47F();
}

/**
 * Decompiled function f__0642_01AD_000F_C47F()
 *
 * @name f__0642_01AD_000F_C47F
 * @implements 0642:01AD:000F:C47F ()
 *
 */
void f__0642_01AD_000F_C47F()
{
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x38BE), 0x1);
	if (!emu_flags.zf) { f__0642_0209_0012_4ECE(); return; }
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x01BC); emu_cs = 0x34E9; ovl__34E9(2);
	f__0642_01BC_000E_F44C();
}

/**
 * Decompiled function f__0642_01BC_000E_F44C()
 *
 * @name f__0642_01BC_000E_F44C
 * @implements 0642:01BC:000E:F44C ()
 *
 */
void f__0642_01BC_000E_F44C()
{
	emu_pop(&emu_cx);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x38B0));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3A38));
	emu_push(emu_cs); emu_push(0x01CA); emu_cs = 0x3511; ovl__3511(0);
	f__0642_01CA_0011_EBF0();
}

/**
 * Decompiled function f__0642_01CA_0011_EBF0()
 *
 * @name f__0642_01CA_0011_EBF0
 * @implements 0642:01CA:0011:EBF0 ()
 *
 */
void f__0642_01CA_0011_EBF0()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x38BE), 0x0);
	emu_movw(&emu_ax, 0x4);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x01DB); emu_cs = 0x34E9; ovl__34E9(2);
	f__0642_01DB_000D_A777();
}

/**
 * Decompiled function f__0642_01DB_000D_A777()
 *
 * @name f__0642_01DB_000D_A777
 * @implements 0642:01DB:000D:A777 ()
 *
 */
void f__0642_01DB_000D_A777()
{
	emu_pop(&emu_cx);
	emu_movw(&emu_ax, 0x8);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x01E8); emu_cs = 0x2537; f__2537_000C_001C_86CB();
	f__0642_01E8_000B_70BA();
}

/**
 * Decompiled function f__0642_01E8_000B_70BA()
 *
 * @name f__0642_01E8_000B_70BA
 * @implements 0642:01E8:000B:70BA ()
 *
 */
void f__0642_01E8_000B_70BA()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_addw(&emu_ax, 0x8);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x01F3); emu_cs = 0x3483; ovl__3483(1);
	f__0642_01F3_0028_7517();
}

/**
 * Decompiled function f__0642_01F3_0028_7517()
 *
 * @name f__0642_01F3_0028_7517
 * @implements 0642:01F3:0028:7517 ()
 *
 */
void f__0642_01F3_0028_7517()
{
	emu_pop(&emu_cx);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x76AE));
	emu_movw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x76AC));
	emu_addw(&emu_dx, 0x12C);
	emu_adcw(&emu_ax, 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x31BE), emu_ax);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x31BC), emu_dx);
	f__0642_0209_0012_4ECE(); return;
}

/**
 * Decompiled function f__0642_0209_0012_4ECE()
 *
 * @name f__0642_0209_0012_4ECE
 * @implements 0642:0209:0012:4ECE ()
 *
 * Called From: 0642:01B2:000F:C47F
 */
void f__0642_0209_0012_4ECE()
{
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x31C0));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x38EC));
	if (emu_flags.zf) { f__0642_022C_000A_93B9(); return; }
	emu_movw(&emu_ax, 0xFFFF);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x021B); emu_cs = 0x0F78; f__0F78_01B4_0016_23DD();
	f__0642_021B_000A_0B5A();
}

/**
 * Decompiled function f__0642_021B_000A_0B5A()
 *
 * @name f__0642_021B_000A_0B5A
 * @implements 0642:021B:000A:0B5A ()
 *
 */
void f__0642_021B_000A_0B5A()
{
	emu_pop(&emu_cx);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3A00));
	emu_push(emu_cs); emu_push(0x0225); emu_cs = 0x0F78; f__0F78_01B4_0016_23DD();
	f__0642_0225_0011_537A();
}

/**
 * Decompiled function f__0642_0225_0011_537A()
 *
 * @name f__0642_0225_0011_537A
 * @implements 0642:0225:0011:537A ()
 *
 */
void f__0642_0225_0011_537A()
{
	emu_pop(&emu_cx);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x38EC));
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x31C0), emu_ax);
	f__0642_022C_000A_93B9(); return;
}

/**
 * Decompiled function f__0642_022C_000A_93B9()
 *
 * @name f__0642_022C_000A_93B9
 * @implements 0642:022C:000A:93B9 ()
 *
 * Called From: 0642:0210:0012:4ECE
 * Called From: 0642:0210:0028:7517
 */
void f__0642_022C_000A_93B9()
{
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x6D8D), 0x4);
	if (!emu_flags.zf) { f__0642_0236_000A_17BC(); return; }
	f__0642_0306_0008_64F7(); return;
}

/**
 * Decompiled function f__0642_0236_000A_17BC()
 *
 * @name f__0642_0236_000A_17BC
 * @implements 0642:0236:000A:17BC ()
 *
 * Called From: 0642:0231:0011:537A
 * Called From: 0642:0231:000A:93B9
 */
void f__0642_0236_000A_17BC()
{
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x6D8D), 0x5);
	if (!emu_flags.zf) { f__0642_0240_0005_7A4B(); return; }
	f__0642_0306_0008_64F7(); return;
}

/**
 * Decompiled function f__0642_0240_0005_7A4B()
 *
 * @name f__0642_0240_0005_7A4B
 * @implements 0642:0240:0005:7A4B ()
 *
 * Called From: 0642:023B:000A:17BC
 */
void f__0642_0240_0005_7A4B()
{
	emu_push(emu_cs); emu_push(0x0245); emu_cs = 0x1DD7; f__1DD7_01EB_0013_9C3C();
	f__0642_0245_0007_AEBB();
}

/**
 * Decompiled function f__0642_0245_0007_AEBB()
 *
 * @name f__0642_0245_0007_AEBB
 * @implements 0642:0245:0007:AEBB ()
 *
 */
void f__0642_0245_0007_AEBB()
{
	emu_orw(&emu_ax, emu_ax);
	if (emu_flags.zf) { f__0642_024C_0005_2EF2(); return; }
	f__0642_0306_0008_64F7(); return;
}

/**
 * Decompiled function f__0642_024C_0005_2EF2()
 *
 * @name f__0642_024C_0005_2EF2
 * @implements 0642:024C:0005:2EF2 ()
 *
 * Called From: 0642:0247:0007:AEBB
 */
void f__0642_024C_0005_2EF2()
{
	emu_push(emu_cs); emu_push(0x0251); emu_cs = 0x3483; ovl__3483(3);
	f__0642_0251_0007_AEBE();
}

/**
 * Decompiled function f__0642_0251_0007_AEBE()
 *
 * @name f__0642_0251_0007_AEBE
 * @implements 0642:0251:0007:AEBE ()
 *
 */
void f__0642_0251_0007_AEBE()
{
	emu_orw(&emu_ax, emu_ax);
	if (emu_flags.zf) { f__0642_0258_0010_94D1(); return; }
	f__0642_0306_0008_64F7(); return;
}

/**
 * Decompiled function f__0642_0258_0010_94D1()
 *
 * @name f__0642_0258_0010_94D1
 * @implements 0642:0258:0010:94D1 ()
 *
 * Called From: 0642:0253:0007:AEBE
 */
void f__0642_0258_0010_94D1()
{
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x700C), 0x0);
	if (!emu_flags.zf) { f__0642_0272_0013_DFDC(); return; }
	emu_movw(&emu_ax, 0x2);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0268); emu_cs = 0x3483; ovl__3483(1);
	f__0642_0268_000A_7582();
}

/**
 * Decompiled function f__0642_0268_000A_7582()
 *
 * @name f__0642_0268_000A_7582
 * @implements 0642:0268:000A:7582 ()
 *
 */
void f__0642_0268_000A_7582()
{
	emu_pop(&emu_cx);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x3E52), 0x0);
	f__0642_0306_0008_64F7(); return;
}

/**
 * Decompiled function f__0642_0272_0013_DFDC()
 *
 * @name f__0642_0272_0013_DFDC
 * @implements 0642:0272:0013:DFDC ()
 *
 * Called From: 0642:025D:0010:94D1
 */
void f__0642_0272_0013_DFDC()
{
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x3E52), 0x0);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__0642_02AE_0027_9BAA(); return; }
	emu_movw(&emu_ax, 0x5);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0285); emu_cs = 0x2537; f__2537_000C_001C_86CB();
	f__0642_0285_000B_69BA();
}

/**
 * Decompiled function f__0642_0285_000B_69BA()
 *
 * @name f__0642_0285_000B_69BA
 * @implements 0642:0285:000B:69BA ()
 *
 */
void f__0642_0285_000B_69BA()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_addw(&emu_ax, 0x11);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0290); emu_cs = 0x3483; ovl__3483(1);
	f__0642_0290_001E_E9C7();
}

/**
 * Decompiled function f__0642_0290_001E_E9C7()
 *
 * @name f__0642_0290_001E_E9C7
 * @implements 0642:0290:001E:E9C7 ()
 *
 */
void f__0642_0290_001E_E9C7()
{
	emu_pop(&emu_cx);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x76AE));
	emu_movw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x76AC));
	emu_addw(&emu_dx, 0x12C);
	emu_adcw(&emu_ax, 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x31BE), emu_ax);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x31BC), emu_dx);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x3E52), 0xFFFF);
	f__0642_0306_0008_64F7(); return;
}

/**
 * Decompiled function f__0642_02AE_0027_9BAA()
 *
 * @name f__0642_02AE_0027_9BAA
 * @implements 0642:02AE:0027:9BAA ()
 *
 * Called From: 0642:0277:0013:DFDC
 */
void f__0642_02AE_0027_9BAA()
{
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x3E52), 0x0);
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x6D8D), 0x0);
	if (emu_flags.zf) { f__0642_0306_0008_64F7(); return; }
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x76AE));
	emu_movw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x76AC));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x31BE));
	if ((emu_flags.sf != emu_flags.of)) { f__0642_0306_0008_64F7(); return; }
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x02D0; emu_last_cs = 0x0642; emu_last_ip = 0x02C8; emu_last_length = 0x0027; emu_last_crc = 0x9BAA; emu_call(); return; }
	emu_cmpw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x31BC));
	if ((emu_flags.cf || emu_flags.zf)) { f__0642_0306_0008_64F7(); return; }
	emu_push(emu_cs); emu_push(0x02D5); emu_cs = 0x1DD7; f__1DD7_088A_0026_5144();
	f__0642_02D5_0010_86AA();
}

/**
 * Decompiled function f__0642_02D5_0010_86AA()
 *
 * @name f__0642_02D5_0010_86AA
 * @implements 0642:02D5:0010:86AA ()
 *
 */
void f__0642_02D5_0010_86AA()
{
	emu_orw(&emu_ax, emu_ax);
	if (!emu_flags.zf) { f__0642_0306_0008_64F7(); return; }
	emu_movw(&emu_ax, 0x8);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x02E5); emu_cs = 0x2537; f__2537_000C_001C_86CB();
	f__0642_02E5_000B_70BA();
}

/**
 * Decompiled function f__0642_02E5_000B_70BA()
 *
 * @name f__0642_02E5_000B_70BA
 * @implements 0642:02E5:000B:70BA ()
 *
 */
void f__0642_02E5_000B_70BA()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_addw(&emu_ax, 0x8);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x02F0); emu_cs = 0x3483; ovl__3483(1);
	f__0642_02F0_001E_0018();
}

/**
 * Decompiled function f__0642_02F0_001E_0018()
 *
 * @name f__0642_02F0_001E_0018
 * @implements 0642:02F0:001E:0018 ()
 *
 */
void f__0642_02F0_001E_0018()
{
	emu_pop(&emu_cx);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x76AE));
	emu_movw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x76AC));
	emu_addw(&emu_dx, 0x12C);
	emu_adcw(&emu_ax, 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x31BE), emu_ax);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x31BC), emu_dx);
	f__0642_0306_0008_64F7(); return;
}

/**
 * Decompiled function f__0642_0306_0008_64F7()
 *
 * @name f__0642_0306_0008_64F7
 * @implements 0642:0306:0008:64F7 ()
 *
 * Called From: 0642:0249:0007:AEBB
 * Called From: 0642:0255:0007:AEBE
 * Called From: 0642:026F:000A:7582
 * Called From: 0642:02AC:001E:E9C7
 * Called From: 0642:02B9:0027:9BAA
 * Called From: 0642:02CE:0027:9BAA
 */
void f__0642_0306_0008_64F7()
{
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x030E); emu_cs = 0x2598; f__2598_0000_0017_EB80();
	f__0642_030E_000E_8DCF();
}

/**
 * Decompiled function f__0642_030E_000E_8DCF()
 *
 * @name f__0642_030E_000E_8DCF
 * @implements 0642:030E:000E:8DCF ()
 *
 */
void f__0642_030E_000E_8DCF()
{
	emu_pop(&emu_cx);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C28));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C26));
	emu_push(emu_cs); emu_push(0x031C); emu_cs = 0x34A2; ovl__34A2(2);
	f__0642_031C_0012_D4EA();
}

/**
 * Decompiled function f__0642_031C_0012_D4EA()
 *
 * @name f__0642_031C_0012_D4EA
 * @implements 0642:031C:0012:D4EA ()
 *
 * Called From: B4A2:0062:0003:2E57
 */
void f__0642_031C_0012_D4EA()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax);
	emu_movw(&emu_bx, emu_get_memory16(emu_ds, 0x00, 0x3A0E));
	emu_decw(&emu_bx);
	emu_cmpw(&emu_bx, 0x3);
	if ((emu_flags.cf || emu_flags.zf)) { f__0642_032E_0007_2A20(); return; }
	f__0642_03DC_0002_C03A(); return;
}

/**
 * Decompiled function f__0642_032E_0007_2A20()
 *
 * @name f__0642_032E_0007_2A20
 * @implements 0642:032E:0007:2A20 ()
 *
 * Called From: 0642:0329:0012:D4EA
 */
void f__0642_032E_0007_2A20()
{
	emu_shlw(&emu_bx, 0x1);

	/* Jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_cs, emu_bx, 0x479);
	switch (emu_ip) {
		case 0x0335: f__0642_0335_002B_2F1D(); return;
		case 0x1EC4: f__176C_1EC4_0008_FE8A(); return;
		case 0x6E4F: f__176C_6E4F_0010_4C3C(); return;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x0642; emu_last_ip = 0x0330; emu_last_length = 0x0007; emu_last_crc = 0x2A20;
			emu_call();
			return;
	}
}

/**
 * Decompiled function f__0642_0335_002B_2F1D()
 *
 * @name f__0642_0335_002B_2F1D
 * @implements 0642:0335:002B:2F1D ()
 *
 * Called From: 0642:0330:0007:2A20
 */
void f__0642_0335_002B_2F1D()
{
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x3A0A));
	emu_orw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x3A0C));
	if (emu_flags.zf) { f__0642_039D_0008_DF89(); return; }
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x31C4));
	emu_movw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x31C2));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x76B2));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__0642_0377_0018_8AC7(); return; }
	if (!(emu_flags.sf != emu_flags.of)) {
		emu_cmpw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x76B0));
		if (!emu_flags.cf) { f__0642_0377_0018_8AC7(); return; }
	}
	f__0642_0353_000D_A6BA(); return;
}

/**
 * Decompiled function f__0642_0353_000D_A6BA()
 *
 * @name f__0642_0353_000D_A6BA
 * @implements 0642:0353:000D:A6BA ()
 *
 * Called From: 0642:034B:002B:2F1D
 */
void f__0642_0353_000D_A6BA()
{
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3A0C));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3A0A));
	emu_push(emu_cs); emu_push(0x0360); emu_cs = 0x1A34; f__1A34_27A8_0012_7198();
	f__0642_0360_002F_5F80();
}

/**
 * Decompiled function f__0642_0360_002F_5F80()
 *
 * @name f__0642_0360_002F_5F80
 * @implements 0642:0360:002F:5F80 ()
 *
 */
void f__0642_0360_002F_5F80()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x76B2));
	emu_movw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x76B0));
	emu_addw(&emu_dx, 0x12C);
	emu_adcw(&emu_ax, 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x31C4), emu_ax);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x31C2), emu_dx);
	f__0642_0377_0018_8AC7(); return;
}

/**
 * Decompiled function f__0642_0377_0018_8AC7()
 *
 * @name f__0642_0377_0018_8AC7
 * @implements 0642:0377:0018:8AC7 ()
 *
 * Called From: 0642:0349:002B:2F1D
 * Called From: 0642:0351:002B:2F1D
 */
void f__0642_0377_0018_8AC7()
{
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x3A0E), 0x1);
	if (emu_flags.zf) { f__0642_039D_0008_DF89(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x3A0A));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_push(emu_cs); emu_push(0x038F); emu_cs = 0x0F3F; f__0F3F_0275_0019_64C3();
	f__0642_038F_0009_3ADE();
}

/**
 * Decompiled function f__0642_038F_0009_3ADE()
 *
 * @name f__0642_038F_0009_3ADE
 * @implements 0642:038F:0009:3ADE ()
 *
 */
void f__0642_038F_0009_3ADE()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0398); emu_cs = 0x0F3F; f__0F3F_0086_0017_EA43();
	f__0642_0398_000D_7292();
}

/**
 * Decompiled function f__0642_0398_000D_7292()
 *
 * @name f__0642_0398_000D_7292
 * @implements 0642:0398:000D:7292 ()
 *
 */
void f__0642_0398_000D_7292()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x3A02), emu_ax);
	f__0642_039D_0008_DF89(); return;
}

/**
 * Decompiled function f__0642_039D_0008_DF89()
 *
 * @name f__0642_039D_0008_DF89
 * @implements 0642:039D:0008:DF89 ()
 *
 * Called From: 0642:033C:002B:2F1D
 * Called From: 0642:037C:0018:8AC7
 * Called From: 0642:037C:002F:5F80
 */
void f__0642_039D_0008_DF89()
{
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x03A5); emu_cs = 0x10E4; f__10E4_0F1A_0088_7622();
	f__0642_03A5_0009_BE77();
}

/**
 * Decompiled function f__0642_03A5_0009_BE77()
 *
 * @name f__0642_03A5_0009_BE77
 * @implements 0642:03A5:0009:BE77 ()
 *
 */
void f__0642_03A5_0009_BE77()
{
	emu_pop(&emu_cx);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_cs);
	emu_push(0x03AE); f__0642_0481_0010_36A4();
	f__0642_03AE_000D_DD0B();
}

/**
 * Decompiled function f__0642_03AE_000D_DD0B()
 *
 * @name f__0642_03AE_000D_DD0B
 * @implements 0642:03AE:000D:DD0B ()
 *
 */
void f__0642_03AE_000D_DD0B()
{
	emu_pop(&emu_cx);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3A38));
	emu_push(emu_cs); emu_push(0x03BB); emu_cs = 0x10E4; f__10E4_0675_0026_F126();
	f__0642_03BB_0007_BB52();
}

/**
 * Decompiled function f__0642_03BB_0007_BB52()
 *
 * @name f__0642_03BB_0007_BB52
 * @implements 0642:03BB:0007:BB52 ()
 *
 */
void f__0642_03BB_0007_BB52()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_cs); emu_push(0x03C2); emu_cs = 0x16C5; f__16C5_0009_0023_21B3();
	f__0642_03C2_0005_BF6B();
}

/**
 * Decompiled function f__0642_03C2_0005_BF6B()
 *
 * @name f__0642_03C2_0005_BF6B
 * @implements 0642:03C2:0005:BF6B ()
 *
 */
void f__0642_03C2_0005_BF6B()
{
	emu_push(emu_cs); emu_push(0x03C7); emu_cs = 0x176C; f__176C_010B_002F_7FAE();
	f__0642_03C7_0005_F04C();
}

/**
 * Decompiled function f__0642_03C7_0005_F04C()
 *
 * @name f__0642_03C7_0005_F04C
 * @implements 0642:03C7:0005:F04C ()
 *
 */
void f__0642_03C7_0005_F04C()
{
	emu_push(emu_cs); emu_push(0x03CC); emu_cs = 0x0972; f__0972_0007_0051_7645();
	f__0642_03CC_0005_ED74();
}

/**
 * Decompiled function f__0642_03CC_0005_ED74()
 *
 * @name f__0642_03CC_0005_ED74
 * @implements 0642:03CC:0005:ED74 ()
 *
 */
void f__0642_03CC_0005_ED74()
{
	emu_push(emu_cs); emu_push(0x03D1); emu_cs = 0x1391; f__1391_000A_0035_2CB6();
	f__0642_03D1_0008_75E4();
}

/**
 * Decompiled function f__0642_03D1_0008_75E4()
 *
 * @name f__0642_03D1_0008_75E4
 * @implements 0642:03D1:0008:75E4 ()
 *
 */
void f__0642_03D1_0008_75E4()
{
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x03D9); emu_cs = 0x07D4; f__07D4_0000_0027_FA61();
	f__0642_03D9_0003_CA1A();
}

/**
 * Decompiled function f__0642_03D9_0003_CA1A()
 *
 * @name f__0642_03D9_0003_CA1A
 * @implements 0642:03D9:0003:CA1A ()
 *
 */
void f__0642_03D9_0003_CA1A()
{
	emu_pop(&emu_cx);
	f__0642_03DE_000E_F2B7(); return;
}

/**
 * Decompiled function f__0642_03DC_0002_C03A()
 *
 * @name f__0642_03DC_0002_C03A
 * @implements 0642:03DC:0002:C03A ()
 *
 * Called From: 0642:032B:0012:D4EA
 */
void f__0642_03DC_0002_C03A()
{
	f__0642_03DE_000E_F2B7(); return;
}

/**
 * Decompiled function f__0642_03DE_000E_F2B7()
 *
 * @name f__0642_03DE_000E_F2B7
 * @implements 0642:03DE:000E:F2B7 ()
 *
 * Called From: 0642:03DA:0003:CA1A
 * Called From: 0642:03DC:0002:C03A
 */
void f__0642_03DE_000E_F2B7()
{
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x03EC); emu_cs = 0x10E4; f__10E4_09AB_0031_5E8E();
	f__0642_03EC_0016_21F1();
}

/**
 * Decompiled function f__0642_03EC_0016_21F1()
 *
 * @name f__0642_03EC_0016_21F1
 * @implements 0642:03EC:0016:21F1 ()
 *
 */
void f__0642_03EC_0016_21F1()
{
	emu_addw(&emu_sp, 0x6);
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x38F8), 0x0);
	if (emu_flags.zf) { f__0642_0405_000A_88A8(); return; }
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x37A0), 0x0);
	if (!emu_flags.zf) { f__0642_0405_000A_88A8(); return; }
	emu_push(emu_cs); emu_push(0x0402); emu_cs = 0x1423; f__1423_02A5_002A_29F1();
	f__0642_0402_000D_9F2A();
}

/**
 * Decompiled function f__0642_0402_000D_9F2A()
 *
 * @name f__0642_0402_000D_9F2A
 * @implements 0642:0402:000D:9F2A ()
 *
 */
void f__0642_0402_000D_9F2A()
{
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x38F8), emu_ax);
	f__0642_0405_000A_88A8(); return;
}

/**
 * Decompiled function f__0642_0405_000A_88A8()
 *
 * @name f__0642_0405_000A_88A8
 * @implements 0642:0405:000A:88A8 ()
 *
 * Called From: 0642:03F4:0016:21F1
 * Called From: 0642:03FB:0016:21F1
 */
void f__0642_0405_000A_88A8()
{
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x38F8), 0x0);
	if (emu_flags.zf) { f__0642_040F_0005_6168(); return; }
	f__0642_012B_0010_D43B(); return;
}

/**
 * Decompiled function f__0642_040F_0005_6168()
 *
 * @name f__0642_040F_0005_6168
 * @implements 0642:040F:0005:6168 ()
 *
 * Called From: 0642:040A:000D:9F2A
 * Called From: 0642:040A:000A:88A8
 */
void f__0642_040F_0005_6168()
{
	emu_push(emu_cs); emu_push(0x0414); emu_cs = 0x2B6C; f__2B6C_0137_0020_C73F();
	f__0642_0414_0014_A716();
}

/**
 * Decompiled function f__0642_0414_0014_A716()
 *
 * @name f__0642_0414_0014_A716
 * @implements 0642:0414:0014:A716 ()
 *
 */
void f__0642_0414_0014_A716()
{
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x379A), 0x0);
	if (emu_flags.zf) { f__0642_042B_0005_6168(); return; }
	emu_push(emu_ds);
	emu_movw(&emu_ax, 0x31F9);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x0428); emu_cs = 0x257A; emu_ip = 0x000D; emu_last_cs = 0x0642; emu_last_ip = 0x0423; emu_last_length = 0x0014; emu_last_crc = 0xA716; emu_call();
	/* Unresolved jump */ emu_ip = 0x0428; emu_last_cs = 0x0642; emu_last_ip = 0x0428; emu_last_length = 0x0014; emu_last_crc = 0xA716; emu_call();
}

/**
 * Decompiled function f__0642_042B_0005_6168()
 *
 * @name f__0642_042B_0005_6168
 * @implements 0642:042B:0005:6168 ()
 *
 * Called From: 0642:0419:0014:A716
 */
void f__0642_042B_0005_6168()
{
	emu_push(emu_cs); emu_push(0x0430); emu_cs = 0x2B6C; f__2B6C_0137_0020_C73F();
	f__0642_0430_0008_F5FA();
}

/**
 * Decompiled function f__0642_0430_0008_F5FA()
 *
 * @name f__0642_0430_0008_F5FA
 * @implements 0642:0430:0008:F5FA ()
 *
 */
void f__0642_0430_0008_F5FA()
{
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0438); emu_cs = 0x07AE; f__07AE_0000_00DF_A32C();
	f__0642_0438_000A_426B();
}

/**
 * Decompiled function f__0642_0438_000A_426B()
 *
 * @name f__0642_0438_000A_426B
 * @implements 0642:0438:000A:426B ()
 *
 */
void f__0642_0438_000A_426B()
{
	emu_pop(&emu_cx);
	emu_movw(&emu_ax, 0x2);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0442); emu_cs = 0x2598; f__2598_0000_0017_EB80();
	f__0642_0442_000B_7BE4();
}

/**
 * Decompiled function f__0642_0442_000B_7BE4()
 *
 * @name f__0642_0442_000B_7BE4
 * @implements 0642:0442:000B:7BE4 ()
 *
 */
void f__0642_0442_000B_7BE4()
{
	emu_pop(&emu_cx);
	emu_movw(&emu_ax, 0x353F);
	emu_movw(&emu_es, emu_ax);

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_es, 0x00, 0x6640);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_es, 0x00, 0x6642);
	emu_push(0x044D);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A60796: f__22A6_0796_000B_9035(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x0642; emu_last_ip = 0x0448; emu_last_length = 0x000B; emu_last_crc = 0x7BE4;
			emu_call();
			return;
	}
	f__0642_044D_0024_22E8();
}

/**
 * Decompiled function f__0642_044D_0024_22E8()
 *
 * @name f__0642_044D_0024_22E8
 * @implements 0642:044D:0024:22E8 ()
 *
 */
void f__0642_044D_0024_22E8()
{
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x2);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x9931));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x992F));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x992B));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x992D));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x992B));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x992D));
	emu_push(emu_cs); emu_push(0x0471); emu_cs = 0x2C17; f__2C17_000C_002F_3016();
	f__0642_0471_0008_4947();
}

/**
 * Decompiled function f__0642_0471_0008_4947()
 *
 * @name f__0642_0471_0008_4947
 * @implements 0642:0471:0008:4947 ()
 *
 */
void f__0642_0471_0008_4947()
{
	emu_addw(&emu_sp, 0x10);
	emu_pop(&emu_si);
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__0642_0481_0010_36A4()
 *
 * @name f__0642_0481_0010_36A4
 * @implements 0642:0481:0010:36A4 ()
 *
 * Called From: 0642:03AB:0009:BE77
 */
void f__0642_0481_0010_36A4()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subw(&emu_sp, 0x2);
	emu_push(emu_si);
	emu_movw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_si, emu_si);
	if (!emu_flags.zf) { f__0642_0491_0018_2263(); return; }
	f__0642_04EC_0005_8BCF(); return;
}

/**
 * Decompiled function f__0642_0491_0018_2263()
 *
 * @name f__0642_0491_0018_2263
 * @implements 0642:0491:0018:2263 ()
 *
 * Called From: 0642:048D:0010:36A4
 */
void f__0642_0491_0018_2263()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_si);
	emu_movw(&emu_cx, 0x1A);
	emu_movw(&emu_bx, 0x4F1);
	f__0642_049A_000F_4EEF(); return;
}

/**
 * Decompiled function f__0642_049A_000F_4EEF()
 *
 * @name f__0642_049A_000F_4EEF
 * @implements 0642:049A:000F:4EEF ()
 *
 * Called From: 0642:04A5:0018:2263
 * Called From: 0642:04A5:000F:4EEF
 */
void f__0642_049A_000F_4EEF()
{
	emu_movw(&emu_ax, emu_get_memory16(emu_cs, emu_bx, 0x0));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_flags.zf) { emu_InGame_Numpad_Move(); return; }
	emu_addw(&emu_bx, 0x2);
	if (--emu_cx != 0) { f__0642_049A_000F_4EEF(); return; }
	f__0642_04EA_0002_C03A(); return;
}

/**
 * Decompiled function emu_InGame_Numpad_Move()
 *
 * @name emu_InGame_Numpad_Move
 * @implements 0642:04A9:0004:25FB ()
 *
 * Called From: 0642:04A0:000F:4EEF
 */
void emu_InGame_Numpad_Move()
{

	/* Jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_cs, emu_bx, 0x34);
	switch (emu_ip) {
		case 0x04BD: f__0642_04BD_0005_B5FA(); return;
		case 0x04C2: f__0642_04C2_0005_E87A(); return;
		case 0x04C7: f__0642_04C7_0004_E3B9(); return;
		case 0x04CB: f__0642_04CB_0005_8CFA(); return;
		case 0x04D0: f__0642_04D0_0005_B37A(); return;
		case 0x04D5: f__0642_04D5_0005_91FA(); return;
		case 0x04DA: f__0642_04DA_0005_D47A(); return;
		case 0x04DF: f__0642_04DF_0009_1090(); return;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x0642; emu_last_ip = 0x04A9; emu_last_length = 0x0004; emu_last_crc = 0x25FB;
			emu_call();
			return;
	}
}

/**
 * Decompiled function f__0642_04B6_0003_D29A()
 *
 * @name f__0642_04B6_0003_D29A
 * @implements 0642:04B6:0003:D29A ()
 *
 * Called From: 0642:04E8:0002:A63A
 */
void f__0642_04B6_0003_D29A()
{
	emu_pop(&emu_cx);
	f__0642_04EC_0005_8BCF(); return;
}

/**
 * Decompiled function f__0642_04BD_0005_B5FA()
 *
 * @name f__0642_04BD_0005_B5FA
 * @implements 0642:04BD:0005:B5FA ()
 *
 * Called From: 0642:04A9:0004:25FB
 */
void f__0642_04BD_0005_B5FA()
{
	emu_movw(&emu_ax, 0x6);
	f__0642_04E2_0006_13CC(); return;
}

/**
 * Decompiled function f__0642_04C2_0005_E87A()
 *
 * @name f__0642_04C2_0005_E87A
 * @implements 0642:04C2:0005:E87A ()
 *
 * Called From: 0642:04A9:0004:25FB
 */
void f__0642_04C2_0005_E87A()
{
	emu_movw(&emu_ax, 0x2);
	f__0642_04E2_0006_13CC(); return;
}

/**
 * Decompiled function f__0642_04C7_0004_E3B9()
 *
 * @name f__0642_04C7_0004_E3B9
 * @implements 0642:04C7:0004:E3B9 ()
 *
 * Called From: 0642:04A9:0004:25FB
 */
void f__0642_04C7_0004_E3B9()
{
	emu_xorw(&emu_ax, emu_ax);
	f__0642_04E2_0006_13CC(); return;
}

/**
 * Decompiled function f__0642_04CB_0005_8CFA()
 *
 * @name f__0642_04CB_0005_8CFA
 * @implements 0642:04CB:0005:8CFA ()
 *
 * Called From: 0642:04A9:0004:25FB
 */
void f__0642_04CB_0005_8CFA()
{
	emu_movw(&emu_ax, 0x4);
	f__0642_04E2_0006_13CC(); return;
}

/**
 * Decompiled function f__0642_04D0_0005_B37A()
 *
 * @name f__0642_04D0_0005_B37A
 * @implements 0642:04D0:0005:B37A ()
 *
 * Called From: 0642:04A9:0004:25FB
 */
void f__0642_04D0_0005_B37A()
{
	emu_movw(&emu_ax, 0x7);
	f__0642_04E2_0006_13CC(); return;
}

/**
 * Decompiled function f__0642_04D5_0005_91FA()
 *
 * @name f__0642_04D5_0005_91FA
 * @implements 0642:04D5:0005:91FA ()
 *
 * Called From: 0642:04A9:0004:25FB
 */
void f__0642_04D5_0005_91FA()
{
	emu_movw(&emu_ax, 0x5);
	f__0642_04E2_0006_13CC(); return;
}

/**
 * Decompiled function f__0642_04DA_0005_D47A()
 *
 * @name f__0642_04DA_0005_D47A
 * @implements 0642:04DA:0005:D47A ()
 *
 * Called From: 0642:04A9:0004:25FB
 */
void f__0642_04DA_0005_D47A()
{
	emu_movw(&emu_ax, 0x1);
	f__0642_04E2_0006_13CC(); return;
}

/**
 * Decompiled function f__0642_04DF_0009_1090()
 *
 * @name f__0642_04DF_0009_1090
 * @implements 0642:04DF:0009:1090 ()
 *
 * Called From: 0642:04A9:0004:25FB
 */
void f__0642_04DF_0009_1090()
{
	emu_movw(&emu_ax, 0x3);
	f__0642_04E2_0006_13CC(); return;
}

/**
 * Decompiled function f__0642_04E2_0006_13CC()
 *
 * @name f__0642_04E2_0006_13CC
 * @implements 0642:04E2:0006:13CC ()
 *
 * Called From: 0642:04C0:0005:B5FA
 * Called From: 0642:04C5:0005:E87A
 * Called From: 0642:04C9:0004:E3B9
 * Called From: 0642:04CE:0005:8CFA
 * Called From: 0642:04D3:0005:B37A
 * Called From: 0642:04D8:0005:91FA
 * Called From: 0642:04DD:0005:D47A
 */
void f__0642_04E2_0006_13CC()
{
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x04E8); emu_cs = 0x0F78; f__0F78_0435_000E_32E0();
	f__0642_04E8_0002_A63A();
}

/**
 * Decompiled function f__0642_04E8_0002_A63A()
 *
 * @name f__0642_04E8_0002_A63A
 * @implements 0642:04E8:0002:A63A ()
 *
 */
void f__0642_04E8_0002_A63A()
{
	f__0642_04B6_0003_D29A(); return;
}

/**
 * Decompiled function f__0642_04EA_0002_C03A()
 *
 * @name f__0642_04EA_0002_C03A
 * @implements 0642:04EA:0002:C03A ()
 *
 * Called From: 0642:04A7:000F:4EEF
 */
void f__0642_04EA_0002_C03A()
{
	f__0642_04EC_0005_8BCF(); return;
}

/**
 * Decompiled function f__0642_04EC_0005_8BCF()
 *
 * @name f__0642_04EC_0005_8BCF
 * @implements 0642:04EC:0005:8BCF ()
 *
 * Called From: 0642:048F:0010:36A4
 * Called From: 0642:04B7:0003:D29A
 * Called From: 0642:04EA:0002:C03A
 */
void f__0642_04EC_0005_8BCF()
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
 * Decompiled function f__0642_0559_0027_3560()
 *
 * @name f__0642_0559_0027_3560
 * @implements 0642:0559:0027:3560 ()
 *
 * Called From: 0642:01AA:0005:F82B
 * Called From: 0642:01AA:0006:9C2A
 * Called From: 10E4:0483:0005:1765
 * Called From: 10E4:0496:0005:1765
 * Called From: B495:0098:0005:1765
 * Called From: B4B8:20BB:0005:1765
 * Called From: B4B8:20BB:0023:32FB
 * Called From: B4CD:0EAF:0008:ADED
 * Called From: B4CD:0F17:0008:ADED
 * Called From: B4DA:0C1B:0009:2F5C
 * Called From: B4F2:02A2:0005:1765
 * Called From: B4F2:02A2:0007:73D6
 * Called From: B4F2:048B:0005:1765
 * Called From: B4F2:048B:0007:73D6
 * Called From: B4F2:068C:0005:1765
 * Called From: B4F2:068C:0008:8DED
 * Called From: B4F2:1163:0005:1765
 * Called From: B4F2:1163:0007:EB00
 * Called From: B511:0F7E:0009:0F5C
 * Called From: B511:1142:000A:C086
 */
void f__0642_0559_0027_3560()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_si);
	emu_xorw(&emu_si, emu_si);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x31D0));
	emu_movw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x31CE));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x76AE));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__0642_05E8_0010_FCFE(); return; }
	if (!(emu_flags.sf != emu_flags.of)) {
		emu_cmpw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x76AC));
		if (!emu_flags.cf) { f__0642_05E8_0010_FCFE(); return; }
	}
	f__0642_0574_000C_4D0E(); return;
}

/**
 * Decompiled function f__0642_0574_000C_4D0E()
 *
 * @name f__0642_0574_000C_4D0E
 * @implements 0642:0574:000C:4D0E ()
 *
 * Called From: 0642:056C:0027:3560
 */
void f__0642_0574_000C_4D0E()
{
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x37B2), 0x0);
	if (emu_flags.zf) { f__0642_0580_000C_CC3D(); return; }
	emu_movw(&emu_si, 0xF);
	f__0642_0591_0026_A299(); return;
}

/**
 * Decompiled function f__0642_0580_000C_CC3D()
 *
 * @name f__0642_0580_000C_CC3D
 * @implements 0642:0580:000C:CC3D ()
 *
 * Called From: 0642:0579:0027:3560
 * Called From: 0642:0579:000C:4D0E
 */
void f__0642_0580_000C_CC3D()
{
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x31D2), 0x0);
	if (emu_flags.zf) { f__0642_058C_002B_2BAE(); return; }
	emu_movw(&emu_ax, 0x6);
	f__0642_058F_0028_2879(); return;
}

/**
 * Decompiled function f__0642_058C_002B_2BAE()
 *
 * @name f__0642_058C_002B_2BAE
 * @implements 0642:058C:002B:2BAE ()
 *
 * Called From: 0642:0585:000C:CC3D
 */
void f__0642_058C_002B_2BAE()
{
	emu_movw(&emu_ax, 0xF);
	f__0642_058F_0028_2879(); return;
}

/**
 * Decompiled function f__0642_058F_0028_2879()
 *
 * @name f__0642_058F_0028_2879
 * @implements 0642:058F:0028:2879 ()
 *
 * Called From: 0642:058A:000C:CC3D
 */
void f__0642_058F_0028_2879()
{
	emu_movw(&emu_si, emu_ax);
	f__0642_0591_0026_A299(); return;
}

/**
 * Decompiled function f__0642_0591_0026_A299()
 *
 * @name f__0642_0591_0026_A299
 * @implements 0642:0591:0026:A299 ()
 *
 * Called From: 0642:057E:000C:4D0E
 * Called From: 0642:057E:0027:3560
 */
void f__0642_0591_0026_A299()
{
	emu_movw(&emu_ax, 0x3);
	emu_push(emu_ax);
	emu_movw(&emu_ax, emu_si);
	emu_movw(&emu_dx, 0x3);
	emu_imuluw(&emu_ax, emu_dx);
	emu_movw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x3C32));
	emu_addw(&emu_dx, emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C34));
	emu_push(emu_dx);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x3C32));
	emu_addw(&emu_ax, 0x2CD);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C34));
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x05B7); emu_cs = 0x01F7; emu_Tools_Memmove();
	f__0642_05B7_0010_2CA3();
}

/**
 * Decompiled function f__0642_05B7_0010_2CA3()
 *
 * @name f__0642_05B7_0010_2CA3
 * @implements 0642:05B7:0010:2CA3 ()
 *
 */
void f__0642_05B7_0010_2CA3()
{
	emu_addw(&emu_sp, 0xA);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C34));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C32));
	emu_push(emu_cs); emu_push(0x05C7); emu_cs = 0x259E; f__259E_0040_0015_5E4A();
	f__0642_05C7_0031_5A24();
}

/**
 * Decompiled function f__0642_05C7_0031_5A24()
 *
 * @name f__0642_05C7_0031_5A24
 * @implements 0642:05C7:0031:5A24 ()
 *
 */
void f__0642_05C7_0031_5A24()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x31D2));
	emu_negw(&emu_ax, emu_ax);
	emu_sbbw(&emu_ax, emu_ax);
	emu_incw(&emu_ax);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x31D2), emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x76AE));
	emu_movw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x76AC));
	emu_addw(&emu_dx, 0x3C);
	emu_adcw(&emu_ax, 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x31D0), emu_ax);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x31CE), emu_dx);
	f__0642_05E8_0010_FCFE(); return;
}

/**
 * Decompiled function f__0642_05E8_0010_FCFE()
 *
 * @name f__0642_05E8_0010_FCFE
 * @implements 0642:05E8:0010:FCFE ()
 *
 * Called From: 0642:056A:0027:3560
 * Called From: 0642:0572:0027:3560
 */
void f__0642_05E8_0010_FCFE()
{
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x31CC));
	emu_movw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x31CA));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x76AE));
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__0642_05F8_000B_A38F(); return; }
	f__0642_06D4_002A_1932(); return;
}

/**
 * Decompiled function f__0642_05F8_000B_A38F()
 *
 * @name f__0642_05F8_000B_A38F
 * @implements 0642:05F8:000B:A38F ()
 *
 * Called From: 0642:05F3:0031:5A24
 * Called From: 0642:05F3:0010:FCFE
 */
void f__0642_05F8_000B_A38F()
{
	if ((emu_flags.sf != emu_flags.of)) { f__0642_0603_000A_C012(); return; }
	emu_cmpw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x76AC));
	if (emu_flags.cf) { f__0642_0603_000A_C012(); return; }
	f__0642_06D4_002A_1932(); return;
}

/**
 * Decompiled function f__0642_0603_000A_C012()
 *
 * @name f__0642_0603_000A_C012
 * @implements 0642:0603:000A:C012 ()
 *
 * Called From: 0642:05F8:000B:A38F
 * Called From: 0642:05FE:000B:A38F
 */
void f__0642_0603_000A_C012()
{
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x3A0E), 0x0);
	if (!emu_flags.zf) { f__0642_060D_0015_23C1(); return; }
	f__0642_06D4_002A_1932(); return;
}

/**
 * Decompiled function f__0642_060D_0015_23C1()
 *
 * @name f__0642_060D_0015_23C1
 * @implements 0642:060D:0015:23C1 ()
 *
 * Called From: 0642:0608:000A:C012
 */
void f__0642_060D_0015_23C1()
{
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x31D4));
	emu_movw(&emu_ax, 0xFF);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C34));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C32));
	emu_push(emu_cs); emu_push(0x0622); emu_cs = 0x2BA5; f__2BA5_00A2_0052_DEE3();
	f__0642_0622_0018_8149();
}

/**
 * Decompiled function f__0642_0622_0018_8149()
 *
 * @name f__0642_0622_0018_8149
 * @implements 0642:0622:0018:8149 ()
 *
 */
void f__0642_0622_0018_8149()
{
	emu_addw(&emu_sp, 0x8);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x31D4));
	emu_movw(&emu_ax, 0xFF);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C34));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C32));
	emu_push(emu_cs); emu_push(0x063A); emu_cs = 0x2BA5; f__2BA5_00A2_0052_DEE3();
	f__0642_063A_0018_8149();
}

/**
 * Decompiled function f__0642_063A_0018_8149()
 *
 * @name f__0642_063A_0018_8149
 * @implements 0642:063A:0018:8149 ()
 *
 */
void f__0642_063A_0018_8149()
{
	emu_addw(&emu_sp, 0x8);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x31D4));
	emu_movw(&emu_ax, 0xFF);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C34));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C32));
	emu_push(emu_cs); emu_push(0x0652); emu_cs = 0x2BA5; f__2BA5_00A2_0052_DEE3();
	f__0642_0652_0018_8149();
}

/**
 * Decompiled function f__0642_0652_0018_8149()
 *
 * @name f__0642_0652_0018_8149
 * @implements 0642:0652:0018:8149 ()
 *
 */
void f__0642_0652_0018_8149()
{
	emu_addw(&emu_sp, 0x8);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x31D4));
	emu_movw(&emu_ax, 0xFF);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C34));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C32));
	emu_push(emu_cs); emu_push(0x066A); emu_cs = 0x2BA5; f__2BA5_00A2_0052_DEE3();
	f__0642_066A_0016_3765();
}

/**
 * Decompiled function f__0642_066A_0016_3765()
 *
 * @name f__0642_066A_0016_3765
 * @implements 0642:066A:0016:3765 ()
 *
 */
void f__0642_066A_0016_3765()
{
	emu_addw(&emu_sp, 0x8);
	emu_orw(&emu_ax, emu_ax);
	if (emu_flags.zf) {
		emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x31D4), 0xD);
		if (emu_flags.zf) { f__0642_0680_001C_6279(); return; }
		emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x31D4), 0xD);
	}
	f__0642_06B1_000D_A409(); return;
}

/**
 * Decompiled function f__0642_0680_001C_6279()
 *
 * @name f__0642_0680_001C_6279
 * @implements 0642:0680:001C:6279 ()
 *
 * Called From: 0642:0676:0016:3765
 */
void f__0642_0680_001C_6279()
{
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x31D4), 0xF);
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x3A0E), 0x2);
	if (emu_flags.zf) {
		emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x38EC), 0x0);
		if (!emu_flags.zf) { f__0642_069C_000F_7F87(); return; }
		emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x31D4), 0x6);
	}
	f__0642_06B1_000D_A409(); return;
}

/**
 * Decompiled function f__0642_069C_000F_7F87()
 *
 * @name f__0642_069C_000F_7F87
 * @implements 0642:069C:000F:7F87 ()
 *
 * Called From: 0642:0692:001C:6279
 */
void f__0642_069C_000F_7F87()
{
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x38EC), 0x0);
	if (!(emu_flags.sf != emu_flags.of)) { f__0642_06AB_0013_48D9(); return; }
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x31D4), 0x5);
	f__0642_06B1_000D_A409(); return;
}

/**
 * Decompiled function f__0642_06AB_0013_48D9()
 *
 * @name f__0642_06AB_0013_48D9
 * @implements 0642:06AB:0013:48D9 ()
 *
 * Called From: 0642:06A1:000F:7F87
 */
void f__0642_06AB_0013_48D9()
{
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x31D4), 0xF);
	f__0642_06B1_000D_A409(); return;
}

/**
 * Decompiled function f__0642_06B1_000D_A409()
 *
 * @name f__0642_06B1_000D_A409
 * @implements 0642:06B1:000D:A409 ()
 *
 * Called From: 0642:066F:0016:3765
 * Called From: 0642:067E:0016:3765
 * Called From: 0642:068B:001C:6279
 * Called From: 0642:069A:001C:6279
 * Called From: 0642:06A9:000F:7F87
 */
void f__0642_06B1_000D_A409()
{
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C34));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C32));
	emu_push(emu_cs); emu_push(0x06BE); emu_cs = 0x259E; f__259E_0040_0015_5E4A();
	f__0642_06BE_0040_399F();
}

/**
 * Decompiled function f__0642_06BE_0040_399F()
 *
 * @name f__0642_06BE_0040_399F
 * @implements 0642:06BE:0040:399F ()
 *
 */
void f__0642_06BE_0040_399F()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x76AE));
	emu_movw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x76AC));
	emu_addw(&emu_dx, 0x3);
	emu_adcw(&emu_ax, 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x31CC), emu_ax);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x31CA), emu_dx);
	f__0642_06D4_002A_1932(); return;
}

/**
 * Decompiled function f__0642_06D4_002A_1932()
 *
 * @name f__0642_06D4_002A_1932
 * @implements 0642:06D4:002A:1932 ()
 *
 * Called From: 0642:05F5:0010:FCFE
 * Called From: 0642:05F5:0031:5A24
 * Called From: 0642:0600:000B:A38F
 * Called From: 0642:060A:000A:C012
 */
void f__0642_06D4_002A_1932()
{
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x31C8));
	emu_movw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x31C6));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x76AE));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__0642_0755_0005_2EF2(); return; }
	if (!(emu_flags.sf != emu_flags.of)) {
		emu_cmpw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x76AC));
		if (!emu_flags.cf) { f__0642_0755_0005_2EF2(); return; }
	}
	f__0642_06E9_0015_23A1(); return;
}

/**
 * Decompiled function f__0642_06E9_0015_23A1()
 *
 * @name f__0642_06E9_0015_23A1
 * @implements 0642:06E9:0015:23A1 ()
 *
 * Called From: 0642:06E1:0040:399F
 * Called From: 0642:06E1:002A:1932
 */
void f__0642_06E9_0015_23A1()
{
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x31D6));
	emu_movw(&emu_ax, 0xDF);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C34));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C32));
	emu_push(emu_cs); emu_push(0x06FE); emu_cs = 0x2BA5; f__2BA5_00A2_0052_DEE3();
	f__0642_06FE_0018_8129();
}

/**
 * Decompiled function f__0642_06FE_0018_8129()
 *
 * @name f__0642_06FE_0018_8129
 * @implements 0642:06FE:0018:8129 ()
 *
 */
void f__0642_06FE_0018_8129()
{
	emu_addw(&emu_sp, 0x8);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x31D6));
	emu_movw(&emu_ax, 0xDF);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C34));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C32));
	emu_push(emu_cs); emu_push(0x0716); emu_cs = 0x2BA5; f__2BA5_00A2_0052_DEE3();
	f__0642_0716_0016_04B0();
}

/**
 * Decompiled function f__0642_0716_0016_04B0()
 *
 * @name f__0642_0716_0016_04B0
 * @implements 0642:0716:0016:04B0 ()
 *
 */
void f__0642_0716_0016_04B0()
{
	emu_addw(&emu_sp, 0x8);
	emu_orw(&emu_ax, emu_ax);
	if (emu_flags.zf) {
		emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x31D6), 0xC);
		if (emu_flags.zf) { f__0642_072C_0013_43D9(); return; }
		emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x31D6), 0xC);
	}
	f__0642_0732_000D_A409(); return;
}

/**
 * Decompiled function f__0642_072C_0013_43D9()
 *
 * @name f__0642_072C_0013_43D9
 * @implements 0642:072C:0013:43D9 ()
 *
 * Called From: 0642:0722:0016:04B0
 */
void f__0642_072C_0013_43D9()
{
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x31D6), 0xA);
	f__0642_0732_000D_A409(); return;
}

/**
 * Decompiled function f__0642_0732_000D_A409()
 *
 * @name f__0642_0732_000D_A409
 * @implements 0642:0732:000D:A409 ()
 *
 * Called From: 0642:071B:0016:04B0
 * Called From: 0642:072A:0016:04B0
 */
void f__0642_0732_000D_A409()
{
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C34));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C32));
	emu_push(emu_cs); emu_push(0x073F); emu_cs = 0x259E; f__259E_0040_0015_5E4A();
	f__0642_073F_001B_0AF9();
}

/**
 * Decompiled function f__0642_073F_001B_0AF9()
 *
 * @name f__0642_073F_001B_0AF9
 * @implements 0642:073F:001B:0AF9 ()
 *
 */
void f__0642_073F_001B_0AF9()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x76AE));
	emu_movw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x76AC));
	emu_addw(&emu_dx, 0x5);
	emu_adcw(&emu_ax, 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x31C8), emu_ax);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x31C6), emu_dx);
	f__0642_0755_0005_2EF2(); return;
}

/**
 * Decompiled function f__0642_0755_0005_2EF2()
 *
 * @name f__0642_0755_0005_2EF2
 * @implements 0642:0755:0005:2EF2 ()
 *
 * Called From: 0642:06DF:002A:1932
 * Called From: 0642:06DF:0040:399F
 * Called From: 0642:06E7:002A:1932
 * Called From: 0642:06E7:0040:399F
 */
void f__0642_0755_0005_2EF2()
{
	emu_push(emu_cs); emu_push(0x075A); emu_cs = 0x3483; ovl__3483(3);
	f__0642_075A_0003_2E57();
}

/**
 * Decompiled function f__0642_075A_0003_2E57()
 *
 * @name f__0642_075A_0003_2E57
 * @implements 0642:075A:0003:2E57 ()
 *
 */
void f__0642_075A_0003_2E57()
{
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__0642_075D_0011_C164()
 *
 * @name f__0642_075D_0011_C164
 * @implements 0642:075D:0011:C164 ()
 *
 * Called From: 0FCB:0045:0016:C1AF
 * Called From: 0FCB:0045:0024:179B
 * Called From: B4B8:0AB9:0012:F330
 * Called From: B4B8:195F:0010:C42D
 * Called From: B4B8:1F90:006B:A553
 * Called From: B4BE:0274:001E:AB48
 * Called From: B4DA:1121:0042:2923
 * Called From: B4E0:0472:000D:05BD
 * Called From: B4E0:0795:0024:4F14
 * Called From: B511:0DAC:001C:BDE5
 * Called From: B511:10C0:001C:9617
 * Called From: B511:1303:001C:D688
 * Called From: B511:1382:0021:27D9
 */
void f__0642_075D_0011_C164()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (!emu_flags.zf) { f__0642_076E_0014_FFCC(); return; }
	emu_xorw(&emu_dx, emu_dx);
	emu_xorw(&emu_ax, emu_ax);
	f__0642_076C_0002_E73A(); return;
}

/**
 * Decompiled function f__0642_076C_0002_E73A()
 *
 * @name f__0642_076C_0002_E73A
 * @implements 0642:076C:0002:E73A ()
 *
 * Called From: 0642:07BA:000A:EC0B
 */
void f__0642_076C_0002_E73A()
{
	f__0642_07BC_0002_2597(); return;
}

/**
 * Decompiled function f__0642_076E_0014_FFCC()
 *
 * @name f__0642_076E_0014_FFCC
 * @implements 0642:076E:0014:FFCC ()
 *
 * Called From: 0642:0766:0011:C164
 */
void f__0642_076E_0014_FFCC()
{
	emu_movw(&emu_ax, 0xE);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_ds);
	emu_movw(&emu_ax, 0x8282);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0782); emu_cs = 0x01F7; emu_Tools_Memmove();
	f__0642_0782_0017_3AC1();
}

/**
 * Decompiled function f__0642_0782_0017_3AC1()
 *
 * @name f__0642_0782_0017_3AC1
 * @implements 0642:0782:0017:3AC1 ()
 *
 */
void f__0642_0782_0017_3AC1()
{
	emu_addw(&emu_sp, 0xA);
	emu_movb(&emu_get_memory8(emu_ds, 0x00, 0x828A), 0x0);
	emu_push(emu_ds);
	emu_movw(&emu_ax, 0x3202);
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_movw(&emu_ax, 0x8282);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0799); emu_cs = 0x01F7; f__01F7_384A_003F_AE43();
	f__0642_0799_0019_BAF4();
}

/**
 * Decompiled function f__0642_0799_0019_BAF4()
 *
 * @name f__0642_0799_0019_BAF4
 * @implements 0642:0799:0019:BAF4 ()
 *
 */
void f__0642_0799_0019_BAF4()
{
	emu_addw(&emu_sp, 0x8);
	emu_push(emu_ds);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x37B6));
	emu_movb(&emu_cl, 0x2);
	emu_shlw(&emu_ax, emu_cl);
	emu_addw(&emu_ax, 0x31D8);
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_movw(&emu_ax, 0x8282);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x07B2); emu_cs = 0x01F7; f__01F7_384A_003F_AE43();
	f__0642_07B2_000A_EC0B();
}

/**
 * Decompiled function f__0642_07B2_000A_EC0B()
 *
 * @name f__0642_07B2_000A_EC0B
 * @implements 0642:07B2:000A:EC0B ()
 *
 */
void f__0642_07B2_000A_EC0B()
{
	emu_addw(&emu_sp, 0x8);
	emu_movw(&emu_dx, emu_ds);
	emu_movw(&emu_ax, 0x8282);
	f__0642_076C_0002_E73A(); return;
}

/**
 * Decompiled function f__0642_07BC_0002_2597()
 *
 * @name f__0642_07BC_0002_2597
 * @implements 0642:07BC:0002:2597 ()
 *
 * Called From: 0642:076C:0002:E73A
 */
void f__0642_07BC_0002_2597()
{
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__0642_0AD2_002A_8B98()
 *
 * @name f__0642_0AD2_002A_8B98
 * @implements 0642:0AD2:002A:8B98 ()
 *
 * Called From: 0642:00F1:000A:99DA
 */
void f__0642_0AD2_002A_8B98()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_si);
	emu_xorw(&emu_si, emu_si);
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x6D8D), 0x6);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0AE6; emu_last_cs = 0x0642; emu_last_ip = 0x0ADD; emu_last_length = 0x002A; emu_last_crc = 0x8B98; emu_call(); return; }
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x6D8B), 0x6);
	if (!emu_flags.zf) { f__0642_0B55_0003_2E57(); return; }
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_ds);
	emu_movw(&emu_ax, 0x3204);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0AFC); emu_cs = 0x1DD7; f__1DD7_0719_0014_A78C();
	/* Unresolved jump */ emu_ip = 0x0AFC; emu_last_cs = 0x0642; emu_last_ip = 0x0AFC; emu_last_length = 0x002A; emu_last_crc = 0x8B98; emu_call();
}

/**
 * Decompiled function f__0642_0B55_0003_2E57()
 *
 * @name f__0642_0B55_0003_2E57
 * @implements 0642:0B55:0003:2E57 ()
 *
 * Called From: 0642:0AE4:002A:8B98
 */
void f__0642_0B55_0003_2E57()
{
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

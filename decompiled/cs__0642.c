/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__0642_000C_001A_8CFF()
 *
 * @name f__0642_000C_001A_8CFF
 * @implements 0642:000C:001A:8CFF ()
 *
 * Called From: 3FF1:02CF:0032:22B2
 * Called From: B480:02CF:0032:22B2
 */
void f__0642_000C_001A_8CFF()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x2);
	emu_push(emu_si);
	emu_movw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ds, 0x00, -0x6717));
	emu_movb(&emu_ax.h, 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x37B6), emu_ax.x);
	emu_cmpws(&emu_si, 0x1);
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { emu_ip = 0x0026; emu_last_cs = 0x0642; emu_last_ip = 0x0021; emu_last_length = 0x001A; emu_last_crc = 0x8CFF; emu_call(); return; } // Jump does not resolve
	f__0642_00E0_000A_E023(); return;
}

/**
 * Decompiled function f__0642_00E0_000A_E023()
 *
 * @name f__0642_00E0_000A_E023
 * @implements 0642:00E0:000A:E023 ()
 *
 * Called From: 0642:0023:001A:8CFF
 */
void f__0642_00E0_000A_E023()
{
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x31F4);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x00EA); emu_cs = 0x0FCB; f__0FCB_000D_0019_1BED();
	f__0642_00EA_000A_87CB();
}

/**
 * Decompiled function f__0642_00EA_000A_87CB()
 *
 * @name f__0642_00EA_000A_87CB
 * @implements 0642:00EA:000A:87CB ()
 *
 * Called From: 0642:00EA:000A:E023
 */
void f__0642_00EA_000A_87CB()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x00F4); f__0642_0AD2_002A_6ECC();
	f__0642_00F4_000D_C2EE();
}

/**
 * Decompiled function f__0642_00F4_000D_C2EE()
 *
 * @name f__0642_00F4_000D_C2EE
 * @implements 0642:00F4:000D:C2EE ()
 *
 * Called From: 0642:00F4:000A:87CB
 */
void f__0642_00F4_000D_C2EE()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x0101); emu_cs = 0x34B8; ovl__34B8(2);
	f__0642_0101_000C_8A43();
}

/**
 * Decompiled function f__0642_0101_000C_8A43()
 *
 * @name f__0642_0101_000C_8A43
 * @implements 0642:0101:000C:8A43 ()
 *
 * Called From: 0642:0101:000D:C2EE
 */
void f__0642_0101_000C_8A43()
{
	emu_addws(&emu_sp, 0x6);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x37AA));
	emu_push(emu_cs); emu_push(0x010D); emu_cs = 0x34E9; ovl__34E9(0);
	f__0642_010D_0006_027E();
}

/**
 * Decompiled function f__0642_010D_0006_027E()
 *
 * @name f__0642_010D_0006_027E
 * @implements 0642:010D:0006:027E ()
 *
 * Called From: 0642:010D:000C:8A43
 */
void f__0642_010D_0006_027E()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_cs); emu_push(0x0113); emu_cs = 0x2B6C; f__2B6C_0169_001E_97C8();
	f__0642_0113_000C_5C1D();
}

/**
 * Decompiled function f__0642_0113_000C_5C1D()
 *
 * @name f__0642_0113_000C_5C1D
 * @implements 0642:0113:000C:5C1D ()
 *
 * Called From: 0642:0113:0006:027E
 */
void f__0642_0113_000C_5C1D()
{
	emu_movw(&emu_ax.x, 0x5);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x011F); emu_cs = 0x2537; f__2537_000C_001C_1A9E();
	f__0642_011F_000B_A977();
}

/**
 * Decompiled function f__0642_011F_000B_A977()
 *
 * @name f__0642_011F_000B_A977
 * @implements 0642:011F:000B:A977 ()
 *
 * Called From: 0642:011F:000C:5C1D
 */
void f__0642_011F_000B_A977()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_addw(&emu_ax.x, 0x8);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x012A); emu_cs = 0x3483; ovl__3483(1);
	f__0642_012A_0011_EF71();
}

/**
 * Decompiled function f__0642_012A_0011_EF71()
 *
 * @name f__0642_012A_0011_EF71
 * @implements 0642:012A:0011:EF71 ()
 *
 * Called From: 0642:012A:000B:A977
 */
void f__0642_012A_0011_EF71()
{
	emu_pop(&emu_cx.x);
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x38BE), 0x2);
	if (!emu_flags.zf) { f__0642_0195_0012_362E(); return; }
	emu_movw(&emu_ax.x, 0x1C);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x013B); emu_cs = 0x3483; emu_ip = 0x0160; emu_last_cs = 0x0642; emu_last_ip = 0x0136; emu_last_length = 0x0011; emu_last_crc = 0xEF71; emu_call(); // Jump does not resolve
	f__0642_013B_000C_EFDD();
}

/**
 * Decompiled function f__0642_012B_0010_EFC3()
 *
 * @name f__0642_012B_0010_EFC3
 * @implements 0642:012B:0010:EFC3 ()
 *
 * Called From: 0642:040C:000D:BC6A
 * Called From: 0642:040C:000A:9C70
 */
void f__0642_012B_0010_EFC3()
{
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x38BE), 0x2);
	if (!emu_flags.zf) { f__0642_0195_0012_362E(); return; }
	emu_movw(&emu_ax.x, 0x1C);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x013B); emu_cs = 0x3483; ovl__3483(1);
	f__0642_013B_000C_EFDD();
}

/**
 * Decompiled function f__0642_013B_000C_EFDD()
 *
 * @name f__0642_013B_000C_EFDD
 * @implements 0642:013B:000C:EFDD ()
 *
 * Called From: 0642:013B:0010:EFC3
 */
void f__0642_013B_000C_EFDD()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x3A38), 0x5);
	emu_push(emu_cs); emu_push(0x0147); emu_cs = 0x3511; ovl__3511(7);
	f__0642_0147_0008_A05E();
}

/**
 * Decompiled function f__0642_0147_0008_A05E()
 *
 * @name f__0642_0147_0008_A05E
 * @implements 0642:0147:0008:A05E ()
 *
 * Called From: 0642:0147:000C:EFDD
 */
void f__0642_0147_0008_A05E()
{
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x3A38), emu_ax.x);
	emu_push(emu_cs); emu_push(0x014F); emu_cs = 0x2B6C; f__2B6C_0137_0020_17E5();
	f__0642_014F_0009_77B1();
}

/**
 * Decompiled function f__0642_014F_0009_77B1()
 *
 * @name f__0642_014F_0009_77B1
 * @implements 0642:014F:0009:77B1 ()
 *
 * Called From: 0642:014F:0008:A05E
 */
void f__0642_014F_0009_77B1()
{
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0158); emu_cs = 0x24DA; f__24DA_002D_0010_5D17();
	f__0642_0158_0006_0418();
}

/**
 * Decompiled function f__0642_0158_0006_0418()
 *
 * @name f__0642_0158_0006_0418
 * @implements 0642:0158:0006:0418 ()
 *
 * Called From: 0642:0158:0009:77B1
 */
void f__0642_0158_0006_0418()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_cs); emu_push(0x015E); emu_cs = 0x34B8; ovl__34B8(5);
	f__0642_015E_0009_C9B9();
}

/**
 * Decompiled function f__0642_015E_0009_C9B9()
 *
 * @name f__0642_015E_0009_C9B9
 * @implements 0642:015E:0009:C9B9 ()
 *
 * Called From: 0642:015E:0006:0418
 */
void f__0642_015E_0009_C9B9()
{
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3A38));
	emu_push(emu_cs); emu_push(0x0167); emu_cs = 0x34B8; ovl__34B8(3);
	f__0642_0167_000A_ACE4();
}

/**
 * Decompiled function f__0642_0167_000A_ACE4()
 *
 * @name f__0642_0167_000A_ACE4
 * @implements 0642:0167:000A:ACE4 ()
 *
 * Called From: 0642:0167:0009:C9B9
 */
void f__0642_0167_000A_ACE4()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3A38));
	emu_push(emu_cs); emu_push(0x0171); emu_cs = 0x3483; ovl__3483(4);
	f__0642_0171_0006_027E();
}

/**
 * Decompiled function f__0642_0171_0006_027E()
 *
 * @name f__0642_0171_0006_027E
 * @implements 0642:0171:0006:027E ()
 *
 * Called From: 0642:0171:000A:ACE4
 */
void f__0642_0171_0006_027E()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_cs); emu_push(0x0177); emu_cs = 0x2B6C; f__2B6C_0169_001E_97C8();
	f__0642_0177_0030_D806();
}

/**
 * Decompiled function f__0642_0177_0030_D806()
 *
 * @name f__0642_0177_0030_D806
 * @implements 0642:0177:0030:D806 ()
 *
 * Called From: 0642:0177:0006:027E
 */
void f__0642_0177_0030_D806()
{
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x38BE), 0x1);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x38B0), 0x1);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x38B2), 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x2AF6), 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x2AF4), 0x0);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3A10));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3A0E));
	if (emu_flags.zf) { f__0642_01A8_0005_1716(); return; }
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3A10));
	emu_push(emu_cs); emu_push(0x01A7); emu_cs = 0x34E9; emu_ip = 0x01D1; emu_last_cs = 0x0642; emu_last_ip = 0x01A2; emu_last_length = 0x0030; emu_last_crc = 0xD806; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__0642_0195_0012_362E()
 *
 * @name f__0642_0195_0012_362E
 * @implements 0642:0195:0012:362E ()
 *
 * Called From: 0642:0130:0011:EF71
 * Called From: 0642:0130:0010:EFC3
 */
void f__0642_0195_0012_362E()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3A10));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3A0E));
	if (emu_flags.zf) { f__0642_01A8_0005_1716(); return; }
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3A10));
	emu_push(emu_cs); emu_push(0x01A7); emu_cs = 0x34E9; emu_ip = 0x01D1; emu_last_cs = 0x0642; emu_last_ip = 0x01A2; emu_last_length = 0x0012; emu_last_crc = 0x362E; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__0642_01A8_0005_1716()
 *
 * @name f__0642_01A8_0005_1716
 * @implements 0642:01A8:0005:1716 ()
 *
 * Called From: 0642:019C:0012:362E
 * Called From: 0642:019C:0030:D806
 */
void f__0642_01A8_0005_1716()
{
	emu_push(emu_cs);
	emu_push(0x01AD); f__0642_0559_0027_9047();
	f__0642_01AD_000F_6377();
}

/**
 * Decompiled function f__0642_01AD_000F_6377()
 *
 * @name f__0642_01AD_000F_6377
 * @implements 0642:01AD:000F:6377 ()
 *
 * Called From: 0642:01AD:0005:1716
 */
void f__0642_01AD_000F_6377()
{
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x38BE), 0x1);
	if (!emu_flags.zf) { f__0642_0209_0012_3643(); return; }
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x01BC); emu_cs = 0x34E9; ovl__34E9(2);
	f__0642_01BC_000E_6BE0();
}

/**
 * Decompiled function f__0642_01BC_000E_6BE0()
 *
 * @name f__0642_01BC_000E_6BE0
 * @implements 0642:01BC:000E:6BE0 ()
 *
 * Called From: 0642:01BC:000F:6377
 */
void f__0642_01BC_000E_6BE0()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x38B0));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3A38));
	emu_push(emu_cs); emu_push(0x01CA); emu_cs = 0x3511; ovl__3511(0);
	f__0642_01CA_0011_32B0();
}

/**
 * Decompiled function f__0642_01CA_0011_32B0()
 *
 * @name f__0642_01CA_0011_32B0
 * @implements 0642:01CA:0011:32B0 ()
 *
 * Called From: 0642:01CA:000E:6BE0
 */
void f__0642_01CA_0011_32B0()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x38BE), 0x0);
	emu_movw(&emu_ax.x, 0x4);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x01DB); emu_cs = 0x34E9; ovl__34E9(2);
	f__0642_01DB_000D_1416();
}

/**
 * Decompiled function f__0642_01DB_000D_1416()
 *
 * @name f__0642_01DB_000D_1416
 * @implements 0642:01DB:000D:1416 ()
 *
 * Called From: 0642:01DB:0011:32B0
 */
void f__0642_01DB_000D_1416()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_ax.x, 0x8);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x01E8); emu_cs = 0x2537; f__2537_000C_001C_1A9E();
	f__0642_01E8_000B_A977();
}

/**
 * Decompiled function f__0642_01E8_000B_A977()
 *
 * @name f__0642_01E8_000B_A977
 * @implements 0642:01E8:000B:A977 ()
 *
 * Called From: 0642:01E8:000D:1416
 */
void f__0642_01E8_000B_A977()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_addw(&emu_ax.x, 0x8);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x01F3); emu_cs = 0x3483; ovl__3483(1);
	f__0642_01F3_0028_AA7C();
}

/**
 * Decompiled function f__0642_01F3_0028_AA7C()
 *
 * @name f__0642_01F3_0028_AA7C
 * @implements 0642:01F3:0028:AA7C ()
 *
 * Called From: 0642:01F3:000B:A977
 */
void f__0642_01F3_0028_AA7C()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76AE));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76AC));
	emu_addw(&emu_dx.x, 0x12C);
	emu_adcw(&emu_ax.x, 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x31BE), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x31BC), emu_dx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x31C0));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x38EC));
	if (emu_flags.zf) { f__0642_022C_000A_C01A(); return; }
	emu_movw(&emu_ax.x, 0xFFFF);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x021B); emu_cs = 0x0F78; emu_ip = 0x03CF; emu_last_cs = 0x0642; emu_last_ip = 0x0216; emu_last_length = 0x0028; emu_last_crc = 0xAA7C; emu_call(); // Jump does not resolve
	f__0642_021B_000A_BB76();
}

/**
 * Decompiled function f__0642_0209_0012_3643()
 *
 * @name f__0642_0209_0012_3643
 * @implements 0642:0209:0012:3643 ()
 *
 * Called From: 0642:01B2:000F:6377
 */
void f__0642_0209_0012_3643()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x31C0));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x38EC));
	if (emu_flags.zf) { f__0642_022C_000A_C01A(); return; }
	emu_movw(&emu_ax.x, 0xFFFF);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x021B); emu_cs = 0x0F78; f__0F78_01B4_0016_AE41();
	f__0642_021B_000A_BB76();
}

/**
 * Decompiled function f__0642_021B_000A_BB76()
 *
 * @name f__0642_021B_000A_BB76
 * @implements 0642:021B:000A:BB76 ()
 *
 * Called From: 0642:021B:0012:3643
 */
void f__0642_021B_000A_BB76()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3A00));
	emu_push(emu_cs); emu_push(0x0225); emu_cs = 0x0F78; f__0F78_01B4_0016_AE41();
	f__0642_0225_0011_2868();
}

/**
 * Decompiled function f__0642_0225_0011_2868()
 *
 * @name f__0642_0225_0011_2868
 * @implements 0642:0225:0011:2868 ()
 *
 * Called From: 0642:0225:000A:BB76
 */
void f__0642_0225_0011_2868()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x38EC));
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x31C0), emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x6D8D), 0x4);
	if (!emu_flags.zf) { f__0642_0236_000A_C002(); return; }
	emu_ip = 0x0306; emu_last_cs = 0x0642; emu_last_ip = 0x0233; emu_last_length = 0x0011; emu_last_crc = 0x2868; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__0642_022C_000A_C01A()
 *
 * @name f__0642_022C_000A_C01A
 * @implements 0642:022C:000A:C01A ()
 *
 * Called From: 0642:0210:0012:3643
 * Called From: 0642:0210:0028:AA7C
 */
void f__0642_022C_000A_C01A()
{
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x6D8D), 0x4);
	if (!emu_flags.zf) { f__0642_0236_000A_C002(); return; }
	emu_ip = 0x0306; emu_last_cs = 0x0642; emu_last_ip = 0x0233; emu_last_length = 0x000A; emu_last_crc = 0xC01A; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__0642_0236_000A_C002()
 *
 * @name f__0642_0236_000A_C002
 * @implements 0642:0236:000A:C002 ()
 *
 * Called From: 0642:0231:0011:2868
 * Called From: 0642:0231:000A:C01A
 */
void f__0642_0236_000A_C002()
{
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x6D8D), 0x5);
	if (!emu_flags.zf) { f__0642_0240_0005_1E9E(); return; }
	emu_ip = 0x0306; emu_last_cs = 0x0642; emu_last_ip = 0x023D; emu_last_length = 0x000A; emu_last_crc = 0xC002; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__0642_0240_0005_1E9E()
 *
 * @name f__0642_0240_0005_1E9E
 * @implements 0642:0240:0005:1E9E ()
 *
 * Called From: 0642:023B:000A:C002
 */
void f__0642_0240_0005_1E9E()
{
	emu_push(emu_cs); emu_push(0x0245); emu_cs = 0x1DD7; f__1DD7_01EB_0013_AA5A();
	f__0642_0245_0007_3E90();
}

/**
 * Decompiled function f__0642_0245_0007_3E90()
 *
 * @name f__0642_0245_0007_3E90
 * @implements 0642:0245:0007:3E90 ()
 *
 * Called From: 0642:0245:0005:1E9E
 */
void f__0642_0245_0007_3E90()
{
	emu_orw(&emu_ax.x, emu_ax.x);
	if (emu_flags.zf) { f__0642_024C_0005_13D4(); return; }
	emu_ip = 0x0306; emu_last_cs = 0x0642; emu_last_ip = 0x0249; emu_last_length = 0x0007; emu_last_crc = 0x3E90; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__0642_024C_0005_13D4()
 *
 * @name f__0642_024C_0005_13D4
 * @implements 0642:024C:0005:13D4 ()
 *
 * Called From: 0642:0247:0007:3E90
 */
void f__0642_024C_0005_13D4()
{
	emu_push(emu_cs); emu_push(0x0251); emu_cs = 0x3483; ovl__3483(3);
	f__0642_0251_0007_3EC0();
}

/**
 * Decompiled function f__0642_0251_0007_3EC0()
 *
 * @name f__0642_0251_0007_3EC0
 * @implements 0642:0251:0007:3EC0 ()
 *
 * Called From: 0642:0251:0005:13D4
 */
void f__0642_0251_0007_3EC0()
{
	emu_orw(&emu_ax.x, emu_ax.x);
	if (emu_flags.zf) { f__0642_0258_0010_91E7(); return; }
	emu_ip = 0x0306; emu_last_cs = 0x0642; emu_last_ip = 0x0255; emu_last_length = 0x0007; emu_last_crc = 0x3EC0; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__0642_0258_0010_91E7()
 *
 * @name f__0642_0258_0010_91E7
 * @implements 0642:0258:0010:91E7 ()
 *
 * Called From: 0642:0253:0007:3EC0
 */
void f__0642_0258_0010_91E7()
{
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x700C), 0x0);
	if (!emu_flags.zf) { f__0642_0272_0013_787E(); return; }
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0268); emu_cs = 0x3483; emu_ip = 0x028D; emu_last_cs = 0x0642; emu_last_ip = 0x0263; emu_last_length = 0x0010; emu_last_crc = 0x91E7; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__0642_0272_0013_787E()
 *
 * @name f__0642_0272_0013_787E
 * @implements 0642:0272:0013:787E ()
 *
 * Called From: 0642:025D:0010:91E7
 */
void f__0642_0272_0013_787E()
{
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x3E52), 0x0);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__0642_02AE_0027_A9D6(); return; }
	emu_movw(&emu_ax.x, 0x5);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0285); emu_cs = 0x2537; f__2537_000C_001C_1A9E();
	f__0642_0285_000B_B077();
}

/**
 * Decompiled function f__0642_0285_000B_B077()
 *
 * @name f__0642_0285_000B_B077
 * @implements 0642:0285:000B:B077 ()
 *
 * Called From: 0642:0285:0013:787E
 */
void f__0642_0285_000B_B077()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_addw(&emu_ax.x, 0x11);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0290); emu_cs = 0x3483; ovl__3483(1);
	f__0642_0290_001E_D3B3();
}

/**
 * Decompiled function f__0642_0290_001E_D3B3()
 *
 * @name f__0642_0290_001E_D3B3
 * @implements 0642:0290:001E:D3B3 ()
 *
 * Called From: 0642:0290:000B:B077
 */
void f__0642_0290_001E_D3B3()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76AE));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76AC));
	emu_addw(&emu_dx.x, 0x12C);
	emu_adcw(&emu_ax.x, 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x31BE), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x31BC), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x3E52), 0xFFFF);
	f__0642_0306_0008_566A(); return;
}

/**
 * Decompiled function f__0642_02AE_0027_A9D6()
 *
 * @name f__0642_02AE_0027_A9D6
 * @implements 0642:02AE:0027:A9D6 ()
 *
 * Called From: 0642:0277:0013:787E
 */
void f__0642_02AE_0027_A9D6()
{
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x3E52), 0x0);
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x6D8D), 0x0);
	if (emu_flags.zf) { f__0642_0306_0008_566A(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76AE));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76AC));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x31BE));
	if ((emu_flags.sf != emu_flags.of)) { emu_ip = 0x0306; emu_last_cs = 0x0642; emu_last_ip = 0x02C6; emu_last_length = 0x0027; emu_last_crc = 0xA9D6; emu_call(); return; } // Jump does not resolve
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { emu_ip = 0x02D0; emu_last_cs = 0x0642; emu_last_ip = 0x02C8; emu_last_length = 0x0027; emu_last_crc = 0xA9D6; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x31BC));
	if ((emu_flags.cf || emu_flags.zf)) { emu_ip = 0x0306; emu_last_cs = 0x0642; emu_last_ip = 0x02CE; emu_last_length = 0x0027; emu_last_crc = 0xA9D6; emu_call(); return; } // Jump does not resolve
	emu_push(emu_cs); emu_push(0x02D5); emu_cs = 0x1DD7; emu_ip = 0x0B5F; emu_last_cs = 0x0642; emu_last_ip = 0x02D0; emu_last_length = 0x0027; emu_last_crc = 0xA9D6; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__0642_0306_0008_566A()
 *
 * @name f__0642_0306_0008_566A
 * @implements 0642:0306:0008:566A ()
 *
 * Called From: 0642:02AC:001E:D3B3
 * Called From: 0642:02B9:0027:A9D6
 */
void f__0642_0306_0008_566A()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x030E); emu_cs = 0x2598; f__2598_0000_0017_D681();
	f__0642_030E_000E_B70A();
}

/**
 * Decompiled function f__0642_030E_000E_B70A()
 *
 * @name f__0642_030E_000E_B70A
 * @implements 0642:030E:000E:B70A ()
 *
 * Called From: 0642:030E:0008:566A
 */
void f__0642_030E_000E_B70A()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3C28));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3C26));
	emu_push(emu_cs); emu_push(0x031C); emu_cs = 0x34A2; ovl__34A2(2);
	f__0642_031C_0012_FA13();
}

/**
 * Decompiled function f__0642_031C_0012_FA13()
 *
 * @name f__0642_031C_0012_FA13
 * @implements 0642:031C:0012:FA13 ()
 *
 * Called From: 0642:031C:000E:B70A
 */
void f__0642_031C_0012_FA13()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00,  0x3A0E));
	emu_decw(&emu_bx.x);
	emu_cmpws(&emu_bx.x, 0x3);
	if ((emu_flags.cf || emu_flags.zf)) { f__0642_032E_0007_5EA4(); return; }
	emu_ip = 0x03DC; emu_last_cs = 0x0642; emu_last_ip = 0x032B; emu_last_length = 0x0012; emu_last_crc = 0xFA13; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__0642_032E_0007_5EA4()
 *
 * @name f__0642_032E_0007_5EA4
 * @implements 0642:032E:0007:5EA4 ()
 *
 * Called From: 0642:0329:0012:FA13
 */
void f__0642_032E_0007_5EA4()
{
	emu_shlw(&emu_bx.x, 0x1);

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_cs, emu_bx.x,  0x479);
	switch (emu_ip) {
		case 0x0335: f__0642_0335_002B_B4DC(); return;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x0642; emu_last_ip = 0x0330; emu_last_length = 0x0007; emu_last_crc = 0x5EA4;
			emu_call();
			return;
	}
}

/**
 * Decompiled function f__0642_0335_002B_B4DC()
 *
 * @name f__0642_0335_002B_B4DC
 * @implements 0642:0335:002B:B4DC ()
 *
 * Called From: 0642:0330:0007:5EA4
 */
void f__0642_0335_002B_B4DC()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3A0A));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3A0C));
	if (emu_flags.zf) { f__0642_039D_0008_5628(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x31C4));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x31C2));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76B2));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__0642_0377_0018_3C7B(); return; }
	if ((emu_flags.sf != emu_flags.of)) { f__0642_0353_000D_D381(); return; }
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76B0));
	if (!emu_flags.cf) { f__0642_0377_0018_3C7B(); return; }
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3A0C));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3A0A));
	emu_push(emu_cs); emu_push(0x0360); emu_cs = 0x1A34; f__1A34_27A8_0012_8D6B();
	f__0642_0360_002F_17AE();
}

/**
 * Decompiled function f__0642_0353_000D_D381()
 *
 * @name f__0642_0353_000D_D381
 * @implements 0642:0353:000D:D381 ()
 *
 * Called From: 0642:034B:002B:B4DC
 */
void f__0642_0353_000D_D381()
{
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3A0C));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3A0A));
	emu_push(emu_cs); emu_push(0x0360); emu_cs = 0x1A34; f__1A34_27A8_0012_8D6B();
	f__0642_0360_002F_17AE();
}

/**
 * Decompiled function f__0642_0360_002F_17AE()
 *
 * @name f__0642_0360_002F_17AE
 * @implements 0642:0360:002F:17AE ()
 *
 * Called From: 0642:0360:002B:B4DC
 * Called From: 0642:0360:000D:D381
 */
void f__0642_0360_002F_17AE()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76B2));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76B0));
	emu_addw(&emu_dx.x, 0x12C);
	emu_adcw(&emu_ax.x, 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x31C4), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x31C2), emu_dx.x);
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x3A0E), 0x1);
	if (emu_flags.zf) { f__0642_039D_0008_5628(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x3A0A));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xA));
	emu_push(emu_cs); emu_push(0x038F); emu_cs = 0x0F3F; f__0F3F_0275_0019_B286();
	f__0642_038F_0009_CDC2();
}

/**
 * Decompiled function f__0642_0377_0018_3C7B()
 *
 * @name f__0642_0377_0018_3C7B
 * @implements 0642:0377:0018:3C7B ()
 *
 * Called From: 0642:0349:002B:B4DC
 * Called From: 0642:0351:002B:B4DC
 */
void f__0642_0377_0018_3C7B()
{
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x3A0E), 0x1);
	if (emu_flags.zf) { f__0642_039D_0008_5628(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x3A0A));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xA));
	emu_push(emu_cs); emu_push(0x038F); emu_cs = 0x0F3F; f__0F3F_0275_0019_B286();
	f__0642_038F_0009_CDC2();
}

/**
 * Decompiled function f__0642_038F_0009_CDC2()
 *
 * @name f__0642_038F_0009_CDC2
 * @implements 0642:038F:0009:CDC2 ()
 *
 * Called From: 0642:038F:002F:17AE
 * Called From: 0642:038F:0018:3C7B
 */
void f__0642_038F_0009_CDC2()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0398); emu_cs = 0x0F3F; f__0F3F_0086_0017_9220();
	f__0642_0398_000D_8223();
}

/**
 * Decompiled function f__0642_0398_000D_8223()
 *
 * @name f__0642_0398_000D_8223
 * @implements 0642:0398:000D:8223 ()
 *
 * Called From: 0642:0398:0009:CDC2
 */
void f__0642_0398_000D_8223()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x3A02), emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x03A5); emu_cs = 0x10E4; f__10E4_0F1A_0088_3BE7();
	f__0642_03A5_0009_5F6C();
}

/**
 * Decompiled function f__0642_039D_0008_5628()
 *
 * @name f__0642_039D_0008_5628
 * @implements 0642:039D:0008:5628 ()
 *
 * Called From: 0642:033C:002B:B4DC
 * Called From: 0642:037C:0018:3C7B
 * Called From: 0642:037C:002F:17AE
 */
void f__0642_039D_0008_5628()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x03A5); emu_cs = 0x10E4; f__10E4_0F1A_0088_3BE7();
	f__0642_03A5_0009_5F6C();
}

/**
 * Decompiled function f__0642_03A5_0009_5F6C()
 *
 * @name f__0642_03A5_0009_5F6C
 * @implements 0642:03A5:0009:5F6C ()
 *
 * Called From: 0642:03A5:0008:5628
 * Called From: 0642:03A5:000D:8223
 */
void f__0642_03A5_0009_5F6C()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_cs);
	emu_push(0x03AE); f__0642_0481_0010_136F();
	f__0642_03AE_000D_9D1E();
}

/**
 * Decompiled function f__0642_03AE_000D_9D1E()
 *
 * @name f__0642_03AE_000D_9D1E
 * @implements 0642:03AE:000D:9D1E ()
 *
 * Called From: 0642:03AE:0009:5F6C
 */
void f__0642_03AE_000D_9D1E()
{
	emu_pop(&emu_cx.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3A38));
	emu_push(emu_cs); emu_push(0x03BB); emu_cs = 0x10E4; f__10E4_0675_0026_5758();
	f__0642_03BB_0007_2A28();
}

/**
 * Decompiled function f__0642_03BB_0007_2A28()
 *
 * @name f__0642_03BB_0007_2A28
 * @implements 0642:03BB:0007:2A28 ()
 *
 * Called From: 0642:03BB:000D:9D1E
 */
void f__0642_03BB_0007_2A28()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_push(emu_cs); emu_push(0x03C2); emu_cs = 0x16C5; f__16C5_0009_0023_95F8();
	f__0642_03C2_0005_1266();
}

/**
 * Decompiled function f__0642_03C2_0005_1266()
 *
 * @name f__0642_03C2_0005_1266
 * @implements 0642:03C2:0005:1266 ()
 *
 * Called From: 0642:03C2:0007:2A28
 */
void f__0642_03C2_0005_1266()
{
	emu_push(emu_cs); emu_push(0x03C7); emu_cs = 0x176C; f__176C_010B_002F_175F();
	f__0642_03C7_0005_12EA();
}

/**
 * Decompiled function f__0642_03C7_0005_12EA()
 *
 * @name f__0642_03C7_0005_12EA
 * @implements 0642:03C7:0005:12EA ()
 *
 * Called From: 0642:03C7:0005:1266
 */
void f__0642_03C7_0005_12EA()
{
	emu_push(emu_cs); emu_push(0x03CC); emu_cs = 0x0972; f__0972_0007_0051_0104();
	f__0642_03CC_0005_1182();
}

/**
 * Decompiled function f__0642_03CC_0005_1182()
 *
 * @name f__0642_03CC_0005_1182
 * @implements 0642:03CC:0005:1182 ()
 *
 * Called From: 0642:03CC:0005:12EA
 */
void f__0642_03CC_0005_1182()
{
	emu_push(emu_cs); emu_push(0x03D1); emu_cs = 0x1391; f__1391_000A_0035_D7FC();
	f__0642_03D1_0008_571E();
}

/**
 * Decompiled function f__0642_03D1_0008_571E()
 *
 * @name f__0642_03D1_0008_571E
 * @implements 0642:03D1:0008:571E ()
 *
 * Called From: 0642:03D1:0005:1182
 */
void f__0642_03D1_0008_571E()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x03D9); emu_cs = 0x07D4; f__07D4_0000_0027_B08E();
	f__0642_03D9_0003_0160();
}

/**
 * Decompiled function f__0642_03D9_0003_0160()
 *
 * @name f__0642_03D9_0003_0160
 * @implements 0642:03D9:0003:0160 ()
 *
 * Called From: 0642:03D9:0008:571E
 */
void f__0642_03D9_0003_0160()
{
	emu_pop(&emu_cx.x);
	f__0642_03DE_000E_CA9B(); return;
}

/**
 * Decompiled function f__0642_03DE_000E_CA9B()
 *
 * @name f__0642_03DE_000E_CA9B
 * @implements 0642:03DE:000E:CA9B ()
 *
 * Called From: 0642:03DA:0003:0160
 */
void f__0642_03DE_000E_CA9B()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_cs); emu_push(0x03EC); emu_cs = 0x10E4; f__10E4_09AB_0031_9946();
	f__0642_03EC_0016_D23B();
}

/**
 * Decompiled function f__0642_03EC_0016_D23B()
 *
 * @name f__0642_03EC_0016_D23B
 * @implements 0642:03EC:0016:D23B ()
 *
 * Called From: 0642:03EC:000E:CA9B
 */
void f__0642_03EC_0016_D23B()
{
	emu_addws(&emu_sp, 0x6);
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x38F8), 0x0);
	if (emu_flags.zf) { f__0642_0405_000A_9C70(); return; }
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x37A0), 0x0);
	if (!emu_flags.zf) { emu_ip = 0x0405; emu_last_cs = 0x0642; emu_last_ip = 0x03FB; emu_last_length = 0x0016; emu_last_crc = 0xD23B; emu_call(); return; } // Jump does not resolve
	emu_push(emu_cs); emu_push(0x0402); emu_cs = 0x1423; f__1423_02A5_002A_41EE();
	f__0642_0402_000D_BC6A();
}

/**
 * Decompiled function f__0642_0402_000D_BC6A()
 *
 * @name f__0642_0402_000D_BC6A
 * @implements 0642:0402:000D:BC6A ()
 *
 * Called From: 0642:0402:0016:D23B
 */
void f__0642_0402_000D_BC6A()
{
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x38F8), emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x38F8), 0x0);
	if (emu_flags.zf) { emu_ip = 0x040F; emu_last_cs = 0x0642; emu_last_ip = 0x040A; emu_last_length = 0x000D; emu_last_crc = 0xBC6A; emu_call(); return; } // Jump does not resolve
	f__0642_012B_0010_EFC3(); return;
}

/**
 * Decompiled function f__0642_0405_000A_9C70()
 *
 * @name f__0642_0405_000A_9C70
 * @implements 0642:0405:000A:9C70 ()
 *
 * Called From: 0642:03F4:0016:D23B
 */
void f__0642_0405_000A_9C70()
{
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x38F8), 0x0);
	if (emu_flags.zf) { f__0642_040F_0005_11DE(); return; }
	f__0642_012B_0010_EFC3(); return;
}

/**
 * Decompiled function f__0642_040F_0005_11DE()
 *
 * @name f__0642_040F_0005_11DE
 * @implements 0642:040F:0005:11DE ()
 *
 * Called From: 0642:040A:000A:9C70
 */
void f__0642_040F_0005_11DE()
{
	emu_push(emu_cs); emu_push(0x0414); emu_cs = 0x2B6C; f__2B6C_0137_0020_17E5();
	f__0642_0414_0014_B2C5();
}

/**
 * Decompiled function f__0642_0414_0014_B2C5()
 *
 * @name f__0642_0414_0014_B2C5
 * @implements 0642:0414:0014:B2C5 ()
 *
 * Called From: 0642:0414:0005:11DE
 */
void f__0642_0414_0014_B2C5()
{
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x379A), 0x0);
	if (emu_flags.zf) { f__0642_042B_0005_11DE(); return; }
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x31F9);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0428); emu_cs = 0x257A; emu_ip = 0x0435; emu_last_cs = 0x0642; emu_last_ip = 0x0423; emu_last_length = 0x0014; emu_last_crc = 0xB2C5; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__0642_042B_0005_11DE()
 *
 * @name f__0642_042B_0005_11DE
 * @implements 0642:042B:0005:11DE ()
 *
 * Called From: 0642:0419:0014:B2C5
 */
void f__0642_042B_0005_11DE()
{
	emu_push(emu_cs); emu_push(0x0430); emu_cs = 0x2B6C; f__2B6C_0137_0020_17E5();
	f__0642_0430_0008_56F6();
}

/**
 * Decompiled function f__0642_0430_0008_56F6()
 *
 * @name f__0642_0430_0008_56F6
 * @implements 0642:0430:0008:56F6 ()
 *
 * Called From: 0642:0430:0005:11DE
 */
void f__0642_0430_0008_56F6()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0438); emu_cs = 0x07AE; f__07AE_0000_00DF_386F();
	f__0642_0438_000A_136A();
}

/**
 * Decompiled function f__0642_0438_000A_136A()
 *
 * @name f__0642_0438_000A_136A
 * @implements 0642:0438:000A:136A ()
 *
 * Called From: 0642:0438:0008:56F6
 */
void f__0642_0438_000A_136A()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0442); emu_cs = 0x2598; f__2598_0000_0017_D681();
	f__0642_0442_000B_1E0C();
}

/**
 * Decompiled function f__0642_0442_000B_1E0C()
 *
 * @name f__0642_0442_000B_1E0C
 * @implements 0642:0442:000B:1E0C ()
 *
 * Called From: 0642:0442:000A:136A
 */
void f__0642_0442_000B_1E0C()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_ax.x, 0x353F);
	emu_movw(&emu_es, emu_ax.x);

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_es, 0x00,  0x6640);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_es, 0x00,  0x6642);
	emu_push(0x044D);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A60796: f__22A6_0796_000B_3851(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x0642; emu_last_ip = 0x0448; emu_last_length = 0x000B; emu_last_crc = 0x1E0C;
			emu_call();
			return;
	}
	f__0642_044D_0024_19D6();
}

/**
 * Decompiled function f__0642_044D_0024_19D6()
 *
 * @name f__0642_044D_0024_19D6
 * @implements 0642:044D:0024:19D6 ()
 *
 * Called From: 0642:044D:000B:1E0C
 */
void f__0642_044D_0024_19D6()
{
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
	emu_push(emu_cs); emu_push(0x0471); emu_cs = 0x2C17; f__2C17_000C_002F_E104();
	f__0642_0471_0008_E1BA();
}

/**
 * Decompiled function f__0642_0471_0008_E1BA()
 *
 * @name f__0642_0471_0008_E1BA
 * @implements 0642:0471:0008:E1BA ()
 *
 * Called From: 0642:0471:0024:19D6
 */
void f__0642_0471_0008_E1BA()
{
	emu_addws(&emu_sp, 0x10);
	emu_pop(&emu_si);
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__0642_0481_0010_136F()
 *
 * @name f__0642_0481_0010_136F
 * @implements 0642:0481:0010:136F ()
 *
 * Called From: 0642:03AB:0009:5F6C
 */
void f__0642_0481_0010_136F()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x2);
	emu_push(emu_si);
	emu_movw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_si, emu_si);
	if (!emu_flags.zf) { f__0642_0491_0018_54AB(); return; }
	f__0642_04EC_0005_04BA(); return;
}

/**
 * Decompiled function f__0642_0491_0018_54AB()
 *
 * @name f__0642_0491_0018_54AB
 * @implements 0642:0491:0018:54AB ()
 *
 * Called From: 0642:048D:0010:136F
 */
void f__0642_0491_0018_54AB()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_si);
	emu_movw(&emu_cx.x, 0x1A);
	emu_movw(&emu_bx.x, 0x4F1);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_cs, emu_bx.x,  0x0));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_flags.zf) { emu_ip = 0x04A9; emu_last_cs = 0x0642; emu_last_ip = 0x04A0; emu_last_length = 0x0018; emu_last_crc = 0x54AB; emu_call(); return; } // Jump does not resolve
	emu_addws(&emu_bx.x, 0x2);
	if (--emu_cx.x != 0) { f__0642_049A_000F_CCA1(); return; }
	emu_ip = 0x04EA; emu_last_cs = 0x0642; emu_last_ip = 0x04A7; emu_last_length = 0x0018; emu_last_crc = 0x54AB; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__0642_049A_000F_CCA1()
 *
 * @name f__0642_049A_000F_CCA1
 * @implements 0642:049A:000F:CCA1 ()
 *
 * Called From: 0642:04A5:0018:54AB
 * Called From: 0642:04A5:000F:CCA1
 */
void f__0642_049A_000F_CCA1()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_cs, emu_bx.x,  0x0));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_flags.zf) { emu_ip = 0x04A9; emu_last_cs = 0x0642; emu_last_ip = 0x04A0; emu_last_length = 0x000F; emu_last_crc = 0xCCA1; emu_call(); return; } // Jump does not resolve
	emu_addws(&emu_bx.x, 0x2);
	if (--emu_cx.x != 0) { f__0642_049A_000F_CCA1(); return; }
	f__0642_04EA_0002_03AC(); return;
}

/**
 * Decompiled function f__0642_04EA_0002_03AC()
 *
 * @name f__0642_04EA_0002_03AC
 * @implements 0642:04EA:0002:03AC ()
 *
 * Called From: 0642:04A7:000F:CCA1
 */
void f__0642_04EA_0002_03AC()
{
	f__0642_04EC_0005_04BA(); return;
}

/**
 * Decompiled function f__0642_04EC_0005_04BA()
 *
 * @name f__0642_04EC_0005_04BA
 * @implements 0642:04EC:0005:04BA ()
 *
 * Called From: 0642:048F:0010:136F
 * Called From: 0642:04EA:0002:03AC
 */
void f__0642_04EC_0005_04BA()
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
 * Decompiled function f__0642_0559_0027_9047()
 *
 * @name f__0642_0559_0027_9047
 * @implements 0642:0559:0027:9047 ()
 *
 * Called From: 0642:01AA:0005:1716
 * Called From: 10E4:0483:0005:17FC
 * Called From: 10E4:0496:0005:17FC
 * Called From: B495:0098:0005:17FC
 * Called From: B4B8:20BB:0005:17FC
 * Called From: B4B8:20BB:0023:825F
 * Called From: B4DA:0C1B:0009:877C
 * Called From: B4F2:02A2:0005:17FC
 * Called From: B4F2:02A2:0007:2D3C
 * Called From: B4F2:048B:0005:17FC
 * Called From: B4F2:048B:0007:2D3C
 * Called From: B4F2:1163:0005:17FC
 * Called From: B4F2:1163:0007:31BC
 * Called From: B511:0F7E:0009:857C
 * Called From: B511:1142:000A:577D
 */
void f__0642_0559_0027_9047()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_si);
	emu_xorw(&emu_si, emu_si);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x31D0));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x31CE));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76AE));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__0642_05E8_0010_E595(); return; }
	if ((emu_flags.sf != emu_flags.of)) { f__0642_0574_000C_49F5(); return; }
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76AC));
	if (!emu_flags.cf) { f__0642_05E8_0010_E595(); return; }
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x37B2), 0x0);
	if (emu_flags.zf) { f__0642_0580_000C_C580(); return; }
	emu_movw(&emu_si, 0xF);
	f__0642_0591_0026_4BFD(); return;
}

/**
 * Decompiled function f__0642_0574_000C_49F5()
 *
 * @name f__0642_0574_000C_49F5
 * @implements 0642:0574:000C:49F5 ()
 *
 * Called From: 0642:056C:0027:9047
 */
void f__0642_0574_000C_49F5()
{
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x37B2), 0x0);
	if (emu_flags.zf) { emu_ip = 0x0580; emu_last_cs = 0x0642; emu_last_ip = 0x0579; emu_last_length = 0x000C; emu_last_crc = 0x49F5; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_si, 0xF);
	f__0642_0591_0026_4BFD(); return;
}

/**
 * Decompiled function f__0642_0580_000C_C580()
 *
 * @name f__0642_0580_000C_C580
 * @implements 0642:0580:000C:C580 ()
 *
 * Called From: 0642:0579:0027:9047
 */
void f__0642_0580_000C_C580()
{
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x31D2), 0x0);
	if (emu_flags.zf) { f__0642_058C_002B_44F8(); return; }
	emu_movw(&emu_ax.x, 0x6);
	f__0642_058F_0028_B8FD(); return;
}

/**
 * Decompiled function f__0642_058C_002B_44F8()
 *
 * @name f__0642_058C_002B_44F8
 * @implements 0642:058C:002B:44F8 ()
 *
 * Called From: 0642:0585:000C:C580
 */
void f__0642_058C_002B_44F8()
{
	emu_movw(&emu_ax.x, 0xF);
	emu_movw(&emu_si, emu_ax.x);
	emu_movw(&emu_ax.x, 0x3);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_si);
	emu_movw(&emu_dx.x, 0x3);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x3C32));
	emu_addw(&emu_dx.x, emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3C34));
	emu_push(emu_dx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3C32));
	emu_addw(&emu_ax.x, 0x2CD);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3C34));
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x05B7); emu_cs = 0x01F7; f__01F7_28B8_0024_D407();
	f__0642_05B7_0010_9B8D();
}

/**
 * Decompiled function f__0642_058F_0028_B8FD()
 *
 * @name f__0642_058F_0028_B8FD
 * @implements 0642:058F:0028:B8FD ()
 *
 * Called From: 0642:058A:000C:C580
 */
void f__0642_058F_0028_B8FD()
{
	emu_movw(&emu_si, emu_ax.x);
	emu_movw(&emu_ax.x, 0x3);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_si);
	emu_movw(&emu_dx.x, 0x3);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x3C32));
	emu_addw(&emu_dx.x, emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3C34));
	emu_push(emu_dx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3C32));
	emu_addw(&emu_ax.x, 0x2CD);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3C34));
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x05B7); emu_cs = 0x01F7; f__01F7_28B8_0024_D407();
	f__0642_05B7_0010_9B8D();
}

/**
 * Decompiled function f__0642_0591_0026_4BFD()
 *
 * @name f__0642_0591_0026_4BFD
 * @implements 0642:0591:0026:4BFD ()
 *
 * Called From: 0642:057E:000C:49F5
 * Called From: 0642:057E:0027:9047
 */
void f__0642_0591_0026_4BFD()
{
	emu_movw(&emu_ax.x, 0x3);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_si);
	emu_movw(&emu_dx.x, 0x3);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x3C32));
	emu_addw(&emu_dx.x, emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3C34));
	emu_push(emu_dx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3C32));
	emu_addw(&emu_ax.x, 0x2CD);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3C34));
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x05B7); emu_cs = 0x01F7; f__01F7_28B8_0024_D407();
	f__0642_05B7_0010_9B8D();
}

/**
 * Decompiled function f__0642_05B7_0010_9B8D()
 *
 * @name f__0642_05B7_0010_9B8D
 * @implements 0642:05B7:0010:9B8D ()
 *
 * Called From: 0642:05B7:0026:4BFD
 * Called From: 0642:05B7:0028:B8FD
 * Called From: 0642:05B7:002B:44F8
 */
void f__0642_05B7_0010_9B8D()
{
	emu_addws(&emu_sp, 0xA);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3C34));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3C32));
	emu_push(emu_cs); emu_push(0x05C7); emu_cs = 0x259E; f__259E_0040_0015_2233();
	f__0642_05C7_0031_A900();
}

/**
 * Decompiled function f__0642_05C7_0031_A900()
 *
 * @name f__0642_05C7_0031_A900
 * @implements 0642:05C7:0031:A900 ()
 *
 * Called From: 0642:05C7:0010:9B8D
 */
void f__0642_05C7_0031_A900()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x31D2));
	emu_negw(&emu_ax.x, emu_ax.x);
	emu_sbbw(&emu_ax.x, emu_ax.x);
	emu_incw(&emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x31D2), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76AE));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76AC));
	emu_addws(&emu_dx.x, 0x3C);
	emu_adcw(&emu_ax.x, 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x31D0), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x31CE), emu_dx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x31CC));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x31CA));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76AE));
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__0642_05F8_000B_E5FF(); return; }
	emu_ip = 0x06D4; emu_last_cs = 0x0642; emu_last_ip = 0x05F5; emu_last_length = 0x0031; emu_last_crc = 0xA900; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__0642_05E8_0010_E595()
 *
 * @name f__0642_05E8_0010_E595
 * @implements 0642:05E8:0010:E595 ()
 *
 * Called From: 0642:056A:0027:9047
 * Called From: 0642:0572:0027:9047
 */
void f__0642_05E8_0010_E595()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x31CC));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x31CA));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76AE));
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__0642_05F8_000B_E5FF(); return; }
	f__0642_06D4_002A_9C65(); return;
}

/**
 * Decompiled function f__0642_05F8_000B_E5FF()
 *
 * @name f__0642_05F8_000B_E5FF
 * @implements 0642:05F8:000B:E5FF ()
 *
 * Called From: 0642:05F3:0010:E595
 * Called From: 0642:05F3:0031:A900
 */
void f__0642_05F8_000B_E5FF()
{
	if ((emu_flags.sf != emu_flags.of)) { f__0642_0603_000A_69C6(); return; }
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76AC));
	if (emu_flags.cf) { f__0642_0603_000A_69C6(); return; }
	f__0642_06D4_002A_9C65(); return;
}

/**
 * Decompiled function f__0642_0603_000A_69C6()
 *
 * @name f__0642_0603_000A_69C6
 * @implements 0642:0603:000A:69C6 ()
 *
 * Called From: 0642:05F8:000B:E5FF
 * Called From: 0642:05FE:000B:E5FF
 */
void f__0642_0603_000A_69C6()
{
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x3A0E), 0x0);
	if (!emu_flags.zf) { f__0642_060D_0015_0EC1(); return; }
	f__0642_06D4_002A_9C65(); return;
}

/**
 * Decompiled function f__0642_060D_0015_0EC1()
 *
 * @name f__0642_060D_0015_0EC1
 * @implements 0642:060D:0015:0EC1 ()
 *
 * Called From: 0642:0608:000A:69C6
 */
void f__0642_060D_0015_0EC1()
{
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x31D4));
	emu_movw(&emu_ax.x, 0xFF);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3C34));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3C32));
	emu_push(emu_cs); emu_push(0x0622); emu_cs = 0x2BA5; f__2BA5_00A2_0052_93F1();
	f__0642_0622_0018_EDC1();
}

/**
 * Decompiled function f__0642_0622_0018_EDC1()
 *
 * @name f__0642_0622_0018_EDC1
 * @implements 0642:0622:0018:EDC1 ()
 *
 * Called From: 0642:0622:0015:0EC1
 */
void f__0642_0622_0018_EDC1()
{
	emu_addws(&emu_sp, 0x8);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x31D4));
	emu_movw(&emu_ax.x, 0xFF);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3C34));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3C32));
	emu_push(emu_cs); emu_push(0x063A); emu_cs = 0x2BA5; f__2BA5_00A2_0052_93F1();
	f__0642_063A_0018_EDC1();
}

/**
 * Decompiled function f__0642_063A_0018_EDC1()
 *
 * @name f__0642_063A_0018_EDC1
 * @implements 0642:063A:0018:EDC1 ()
 *
 * Called From: 0642:063A:0018:EDC1
 */
void f__0642_063A_0018_EDC1()
{
	emu_addws(&emu_sp, 0x8);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x31D4));
	emu_movw(&emu_ax.x, 0xFF);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3C34));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3C32));
	emu_push(emu_cs); emu_push(0x0652); emu_cs = 0x2BA5; f__2BA5_00A2_0052_93F1();
	f__0642_0652_0018_EDC1();
}

/**
 * Decompiled function f__0642_0652_0018_EDC1()
 *
 * @name f__0642_0652_0018_EDC1
 * @implements 0642:0652:0018:EDC1 ()
 *
 * Called From: 0642:0652:0018:EDC1
 */
void f__0642_0652_0018_EDC1()
{
	emu_addws(&emu_sp, 0x8);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x31D4));
	emu_movw(&emu_ax.x, 0xFF);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3C34));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3C32));
	emu_push(emu_cs); emu_push(0x066A); emu_cs = 0x2BA5; f__2BA5_00A2_0052_93F1();
	f__0642_066A_0016_F75A();
}

/**
 * Decompiled function f__0642_066A_0016_F75A()
 *
 * @name f__0642_066A_0016_F75A
 * @implements 0642:066A:0016:F75A ()
 *
 * Called From: 0642:066A:0018:EDC1
 */
void f__0642_066A_0016_F75A()
{
	emu_addws(&emu_sp, 0x8);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.zf) { f__0642_06B1_000D_1B6E(); return; }
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x31D4), 0xD);
	if (emu_flags.zf) { f__0642_0680_001C_6B6E(); return; }
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x31D4), 0xD);
	f__0642_06B1_000D_1B6E(); return;
}

/**
 * Decompiled function f__0642_0680_001C_6B6E()
 *
 * @name f__0642_0680_001C_6B6E
 * @implements 0642:0680:001C:6B6E ()
 *
 * Called From: 0642:0676:0016:F75A
 */
void f__0642_0680_001C_6B6E()
{
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x31D4), 0xF);
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x3A0E), 0x2);
	if (!emu_flags.zf) { f__0642_06B1_000D_1B6E(); return; }
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x38EC), 0x0);
	if (!emu_flags.zf) { f__0642_069C_000F_1081(); return; }
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x31D4), 0x6);
	f__0642_06B1_000D_1B6E(); return;
}

/**
 * Decompiled function f__0642_069C_000F_1081()
 *
 * @name f__0642_069C_000F_1081
 * @implements 0642:069C:000F:1081 ()
 *
 * Called From: 0642:0692:001C:6B6E
 */
void f__0642_069C_000F_1081()
{
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x38EC), 0x0);
	if (!(emu_flags.sf != emu_flags.of)) { f__0642_06AB_0013_9CD0(); return; }
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x31D4), 0x5);
	f__0642_06B1_000D_1B6E(); return;
}

/**
 * Decompiled function f__0642_06AB_0013_9CD0()
 *
 * @name f__0642_06AB_0013_9CD0
 * @implements 0642:06AB:0013:9CD0 ()
 *
 * Called From: 0642:06A1:000F:1081
 */
void f__0642_06AB_0013_9CD0()
{
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x31D4), 0xF);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3C34));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3C32));
	emu_push(emu_cs); emu_push(0x06BE); emu_cs = 0x259E; f__259E_0040_0015_2233();
	f__0642_06BE_0040_8BA0();
}

/**
 * Decompiled function f__0642_06B1_000D_1B6E()
 *
 * @name f__0642_06B1_000D_1B6E
 * @implements 0642:06B1:000D:1B6E ()
 *
 * Called From: 0642:066F:0016:F75A
 * Called From: 0642:067E:0016:F75A
 * Called From: 0642:068B:001C:6B6E
 * Called From: 0642:069A:001C:6B6E
 * Called From: 0642:06A9:000F:1081
 */
void f__0642_06B1_000D_1B6E()
{
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3C34));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3C32));
	emu_push(emu_cs); emu_push(0x06BE); emu_cs = 0x259E; f__259E_0040_0015_2233();
	f__0642_06BE_0040_8BA0();
}

/**
 * Decompiled function f__0642_06BE_0040_8BA0()
 *
 * @name f__0642_06BE_0040_8BA0
 * @implements 0642:06BE:0040:8BA0 ()
 *
 * Called From: 0642:06BE:000D:1B6E
 * Called From: 0642:06BE:0013:9CD0
 */
void f__0642_06BE_0040_8BA0()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76AE));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76AC));
	emu_addws(&emu_dx.x, 0x3);
	emu_adcw(&emu_ax.x, 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x31CC), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x31CA), emu_dx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x31C8));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x31C6));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76AE));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { emu_ip = 0x0755; emu_last_cs = 0x0642; emu_last_ip = 0x06DF; emu_last_length = 0x0040; emu_last_crc = 0x8BA0; emu_call(); return; } // Jump does not resolve
	if ((emu_flags.sf != emu_flags.of)) { f__0642_06E9_0015_0EF1(); return; }
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76AC));
	if (!emu_flags.cf) { f__0642_0755_0005_13D4(); return; }
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x31D6));
	emu_movw(&emu_ax.x, 0xDF);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3C34));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3C32));
	emu_push(emu_cs); emu_push(0x06FE); emu_cs = 0x2BA5; f__2BA5_00A2_0052_93F1();
	f__0642_06FE_0018_EDF1();
}

/**
 * Decompiled function f__0642_06D4_002A_9C65()
 *
 * @name f__0642_06D4_002A_9C65
 * @implements 0642:06D4:002A:9C65 ()
 *
 * Called From: 0642:05F5:0010:E595
 * Called From: 0642:0600:000B:E5FF
 * Called From: 0642:060A:000A:69C6
 */
void f__0642_06D4_002A_9C65()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x31C8));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x31C6));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76AE));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__0642_0755_0005_13D4(); return; }
	if ((emu_flags.sf != emu_flags.of)) { f__0642_06E9_0015_0EF1(); return; }
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76AC));
	if (!emu_flags.cf) { f__0642_0755_0005_13D4(); return; }
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x31D6));
	emu_movw(&emu_ax.x, 0xDF);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3C34));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3C32));
	emu_push(emu_cs); emu_push(0x06FE); emu_cs = 0x2BA5; f__2BA5_00A2_0052_93F1();
	f__0642_06FE_0018_EDF1();
}

/**
 * Decompiled function f__0642_06E9_0015_0EF1()
 *
 * @name f__0642_06E9_0015_0EF1
 * @implements 0642:06E9:0015:0EF1 ()
 *
 * Called From: 0642:06E1:002A:9C65
 * Called From: 0642:06E1:0040:8BA0
 */
void f__0642_06E9_0015_0EF1()
{
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x31D6));
	emu_movw(&emu_ax.x, 0xDF);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3C34));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3C32));
	emu_push(emu_cs); emu_push(0x06FE); emu_cs = 0x2BA5; f__2BA5_00A2_0052_93F1();
	f__0642_06FE_0018_EDF1();
}

/**
 * Decompiled function f__0642_06FE_0018_EDF1()
 *
 * @name f__0642_06FE_0018_EDF1
 * @implements 0642:06FE:0018:EDF1 ()
 *
 * Called From: 0642:06FE:0015:0EF1
 * Called From: 0642:06FE:002A:9C65
 * Called From: 0642:06FE:0040:8BA0
 */
void f__0642_06FE_0018_EDF1()
{
	emu_addws(&emu_sp, 0x8);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x31D6));
	emu_movw(&emu_ax.x, 0xDF);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3C34));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3C32));
	emu_push(emu_cs); emu_push(0x0716); emu_cs = 0x2BA5; f__2BA5_00A2_0052_93F1();
	f__0642_0716_0016_BFF1();
}

/**
 * Decompiled function f__0642_0716_0016_BFF1()
 *
 * @name f__0642_0716_0016_BFF1
 * @implements 0642:0716:0016:BFF1 ()
 *
 * Called From: 0642:0716:0018:EDF1
 */
void f__0642_0716_0016_BFF1()
{
	emu_addws(&emu_sp, 0x8);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.zf) { f__0642_0732_000D_1B6E(); return; }
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x31D6), 0xC);
	if (emu_flags.zf) { f__0642_072C_0013_1CD6(); return; }
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x31D6), 0xC);
	f__0642_0732_000D_1B6E(); return;
}

/**
 * Decompiled function f__0642_072C_0013_1CD6()
 *
 * @name f__0642_072C_0013_1CD6
 * @implements 0642:072C:0013:1CD6 ()
 *
 * Called From: 0642:0722:0016:BFF1
 */
void f__0642_072C_0013_1CD6()
{
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x31D6), 0xA);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3C34));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3C32));
	emu_push(emu_cs); emu_push(0x073F); emu_cs = 0x259E; f__259E_0040_0015_2233();
	f__0642_073F_001B_1D6C();
}

/**
 * Decompiled function f__0642_0732_000D_1B6E()
 *
 * @name f__0642_0732_000D_1B6E
 * @implements 0642:0732:000D:1B6E ()
 *
 * Called From: 0642:071B:0016:BFF1
 * Called From: 0642:072A:0016:BFF1
 */
void f__0642_0732_000D_1B6E()
{
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3C34));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3C32));
	emu_push(emu_cs); emu_push(0x073F); emu_cs = 0x259E; f__259E_0040_0015_2233();
	f__0642_073F_001B_1D6C();
}

/**
 * Decompiled function f__0642_073F_001B_1D6C()
 *
 * @name f__0642_073F_001B_1D6C
 * @implements 0642:073F:001B:1D6C ()
 *
 * Called From: 0642:073F:000D:1B6E
 * Called From: 0642:073F:0013:1CD6
 */
void f__0642_073F_001B_1D6C()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76AE));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76AC));
	emu_addws(&emu_dx.x, 0x5);
	emu_adcw(&emu_ax.x, 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x31C8), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x31C6), emu_dx.x);
	emu_push(emu_cs); emu_push(0x075A); emu_cs = 0x3483; ovl__3483(3);
	f__0642_075A_0003_0212();
}

/**
 * Decompiled function f__0642_0755_0005_13D4()
 *
 * @name f__0642_0755_0005_13D4
 * @implements 0642:0755:0005:13D4 ()
 *
 * Called From: 0642:06DF:002A:9C65
 * Called From: 0642:06E7:002A:9C65
 * Called From: 0642:06E7:0040:8BA0
 */
void f__0642_0755_0005_13D4()
{
	emu_push(emu_cs); emu_push(0x075A); emu_cs = 0x3483; ovl__3483(3);
	f__0642_075A_0003_0212();
}

/**
 * Decompiled function f__0642_075A_0003_0212()
 *
 * @name f__0642_075A_0003_0212
 * @implements 0642:075A:0003:0212 ()
 *
 * Called From: 0642:075A:0005:13D4
 * Called From: 0642:075A:001B:1D6C
 */
void f__0642_075A_0003_0212()
{
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__0642_075D_0011_56FC()
 *
 * @name f__0642_075D_0011_56FC
 * @implements 0642:075D:0011:56FC ()
 *
 * Called From: 0FCB:0045:0016:896F
 * Called From: 0FCB:0045:0024:95F8
 * Called From: B4B8:0AB9:0012:BB93
 * Called From: B4B8:195F:0010:B245
 * Called From: B4B8:1F90:006B:6DBC
 * Called From: B4BE:0274:001E:A711
 * Called From: B4DA:1121:0042:5FCC
 * Called From: B4E0:0472:000D:7BB1
 * Called From: B4E0:0795:0024:2B25
 * Called From: B511:0DAC:001C:3411
 * Called From: B511:10C0:001C:72D4
 * Called From: B511:1303:001C:1401
 * Called From: B511:1382:0021:D565
 */
void f__0642_075D_0011_56FC()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (!emu_flags.zf) { f__0642_076E_0014_7ED1(); return; }
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_ip = 0x07BC; emu_last_cs = 0x0642; emu_last_ip = 0x076C; emu_last_length = 0x0011; emu_last_crc = 0x56FC; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__0642_076C_0002_0330()
 *
 * @name f__0642_076C_0002_0330
 * @implements 0642:076C:0002:0330 ()
 *
 * Called From: 0642:07BA:000A:E57F
 */
void f__0642_076C_0002_0330()
{
	f__0642_07BC_0002_00E2(); return;
}

/**
 * Decompiled function f__0642_076E_0014_7ED1()
 *
 * @name f__0642_076E_0014_7ED1
 * @implements 0642:076E:0014:7ED1 ()
 *
 * Called From: 0642:0766:0011:56FC
 */
void f__0642_076E_0014_7ED1()
{
	emu_movw(&emu_ax.x, 0xE);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x8282);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0782); emu_cs = 0x01F7; f__01F7_28B8_0024_D407();
	f__0642_0782_0017_5463();
}

/**
 * Decompiled function f__0642_0782_0017_5463()
 *
 * @name f__0642_0782_0017_5463
 * @implements 0642:0782:0017:5463 ()
 *
 * Called From: 0642:0782:0014:7ED1
 */
void f__0642_0782_0017_5463()
{
	emu_addws(&emu_sp, 0xA);
	emu_movb(&emu_get_memory8(emu_ds, 0x00, -0x7D76), 0x0);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x3202);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x8282);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0799); emu_cs = 0x01F7; f__01F7_384A_003F_A636();
	f__0642_0799_0019_C7FE();
}

/**
 * Decompiled function f__0642_0799_0019_C7FE()
 *
 * @name f__0642_0799_0019_C7FE
 * @implements 0642:0799:0019:C7FE ()
 *
 * Called From: 0642:0799:0017:5463
 */
void f__0642_0799_0019_C7FE()
{
	emu_addws(&emu_sp, 0x8);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x37B6));
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_addw(&emu_ax.x, 0x31D8);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x8282);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x07B2); emu_cs = 0x01F7; f__01F7_384A_003F_A636();
	f__0642_07B2_000A_E57F();
}

/**
 * Decompiled function f__0642_07B2_000A_E57F()
 *
 * @name f__0642_07B2_000A_E57F
 * @implements 0642:07B2:000A:E57F ()
 *
 * Called From: 0642:07B2:0019:C7FE
 */
void f__0642_07B2_000A_E57F()
{
	emu_addws(&emu_sp, 0x8);
	emu_movw(&emu_dx.x, emu_ds);
	emu_movw(&emu_ax.x, 0x8282);
	f__0642_076C_0002_0330(); return;
}

/**
 * Decompiled function f__0642_07BC_0002_00E2()
 *
 * @name f__0642_07BC_0002_00E2
 * @implements 0642:07BC:0002:00E2 ()
 *
 * Called From: 0642:076C:0002:0330
 */
void f__0642_07BC_0002_00E2()
{
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__0642_0AD2_002A_6ECC()
 *
 * @name f__0642_0AD2_002A_6ECC
 * @implements 0642:0AD2:002A:6ECC ()
 *
 * Called From: 0642:00F1:000A:87CB
 */
void f__0642_0AD2_002A_6ECC()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_si);
	emu_xorw(&emu_si, emu_si);
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x6D8D), 0x6);
	if (emu_flags.zf) { emu_ip = 0x0AE6; emu_last_cs = 0x0642; emu_last_ip = 0x0ADD; emu_last_length = 0x002A; emu_last_crc = 0x6ECC; emu_call(); return; } // Jump does not resolve
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x6D8B), 0x6);
	if (!emu_flags.zf) { f__0642_0B55_0003_0212(); return; }
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x3204);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0AFC); emu_cs = 0x1DD7; emu_ip = 0x1215; emu_last_cs = 0x0642; emu_last_ip = 0x0AF7; emu_last_length = 0x002A; emu_last_crc = 0x6ECC; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__0642_0B55_0003_0212()
 *
 * @name f__0642_0B55_0003_0212
 * @implements 0642:0B55:0003:0212 ()
 *
 * Called From: 0642:0AE4:002A:6ECC
 */
void f__0642_0B55_0003_0212()
{
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

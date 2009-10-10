/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__16C5_0009_0023_21B3()
 *
 * @name f__16C5_0009_0023_21B3
 * @implements 16C5:0009:0023:21B3 ()
 *
 * Called From: 0642:03BD:0007:BB52
 */
void f__16C5_0009_0023_21B3()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_si);
	emu_xorw(&emu_si, emu_si);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x6166));
	emu_movw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x6164));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x76B2));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__16C5_004A_0007_F6A9(); return; }
	if (emu_flags.zf) {
		emu_cmpw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x76B0));
		if (!(emu_flags.cf || emu_flags.zf)) { f__16C5_004A_0007_F6A9(); return; }
	}
	f__16C5_0024_0008_EF7F(); return;
}

/**
 * Decompiled function f__16C5_0024_0008_EF7F()
 *
 * @name f__16C5_0024_0008_EF7F
 * @implements 16C5:0024:0008:EF7F ()
 *
 * Called From: 16C5:001C:0023:21B3
 */
void f__16C5_0024_0008_EF7F()
{
	emu_movw(&emu_si, 0x1);
	emu_push(emu_cs); emu_push(0x002C); emu_cs = 0x2BB4; f__2BB4_0004_0027_DC1D();
	f__16C5_002C_0025_E446();
}

/**
 * Decompiled function f__16C5_002C_0025_E446()
 *
 * @name f__16C5_002C_0025_E446
 * @implements 16C5:002C:0025:E446 ()
 *
 */
void f__16C5_002C_0025_E446()
{
	emu_andw(&emu_ax, 0x7);
	emu_movw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x76B2));
	emu_movw(&emu_bx, emu_get_memory16(emu_ds, 0x00, 0x76B0));
	emu_addw(&emu_bx, emu_ax);
	emu_adcw(&emu_dx, 0x0);
	emu_addw(&emu_bx, 0x5);
	emu_adcw(&emu_dx, 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x6166), emu_dx);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x6164), emu_bx);
	f__16C5_004A_0007_F6A9(); return;
}

/**
 * Decompiled function f__16C5_004A_0007_F6A9()
 *
 * @name f__16C5_004A_0007_F6A9
 * @implements 16C5:004A:0007:F6A9 ()
 *
 * Called From: 16C5:001A:0023:21B3
 * Called From: 16C5:0022:0023:21B3
 */
void f__16C5_004A_0007_F6A9()
{
	emu_orw(&emu_si, emu_si);
	if (!emu_flags.zf) { f__16C5_0051_000F_288A(); return; }
	f__16C5_0121_0003_2E57(); return;
}

/**
 * Decompiled function f__16C5_0051_000F_288A()
 *
 * @name f__16C5_0051_000F_288A
 * @implements 16C5:0051:000F:288A ()
 *
 * Called From: 16C5:004C:0025:E446
 * Called From: 16C5:004C:0007:F6A9
 */
void f__16C5_0051_000F_288A()
{
	emu_movw(&emu_ax, 0xFFFF);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x0060); emu_cs = 0x104B; emu_AirUnit_FindFirst();
	f__16C5_0060_0006_7728();
}

/**
 * Decompiled function f__16C5_0060_0006_7728()
 *
 * @name f__16C5_0060_0006_7728
 * @implements 16C5:0060:0006:7728 ()
 *
 */
void f__16C5_0060_0006_7728()
{
	emu_addw(&emu_sp, 0x6);
	f__16C5_010E_0013_4DDB(); return;
}

/**
 * Decompiled function f__16C5_0066_000D_3A8A()
 *
 * @name f__16C5_0066_000D_3A8A
 * @implements 16C5:0066:000D:3A8A ()
 *
 * Called From: 16C5:011E:0013:4DDB
 * Called From: 16C5:011E:0015:DF16
 */
void f__16C5_0066_000D_3A8A()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6124));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x10));
	emu_push(emu_cs); emu_push(0x0073); emu_cs = 0x10BE; emu_House_Get_ByIndex();
	f__16C5_0073_002F_03B8();
}

/**
 * Decompiled function f__16C5_0073_002F_03B8()
 *
 * @name f__16C5_0073_002F_03B8
 * @implements 16C5:0073:002F:03B8 ()
 *
 */
void f__16C5_0073_002F_03B8()
{
	emu_pop(&emu_cx);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x394C), emu_dx);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x394A), emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x394A));
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0x4), 0x8);
	if (emu_flags.zf) { f__16C5_0101_000B_0673(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6124));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x1C), 0x0);
	if (!emu_flags.zf) { f__16C5_00F9_0013_BAAB(); return; }
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x6124));
	emu_addw(&emu_ax, 0x1E);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6126));
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x00A2); emu_cs = 0x15C2; f__15C2_0526_000F_EA1E();
	f__16C5_00A2_004D_9382();
}

/**
 * Decompiled function f__16C5_00A2_004D_9382()
 *
 * @name f__16C5_00A2_004D_9382
 * @implements 16C5:00A2:004D:9382 ()
 *
 */
void f__16C5_00A2_004D_9382()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_ax);
	if (emu_flags.zf) { f__16C5_00F7_0002_C43A(); return; }
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x379C), 0x0);
	if (!emu_flags.zf) {
		emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x37A4), 0x0);
		emu_incw(&emu_get_memory16(emu_ds, 0x00, 0x37A2));
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6124));
		emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x29));
		emu_movws(&emu_ax, emu_al);
		emu_movw(&emu_dx, 0xF);
		emu_subw(&emu_dx, emu_ax);
		emu_cmpw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x37A8));
		if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) {
			emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6124));
			emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x29));
			emu_movws(&emu_ax, emu_al);
			emu_movw(&emu_dx, 0xF);
			emu_subw(&emu_dx, emu_ax);
			emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x37A8), emu_dx);
		}
	}
	f__16C5_00DF_0010_2718(); return;
}

/**
 * Decompiled function f__16C5_00DF_0010_2718()
 *
 * @name f__16C5_00DF_0010_2718
 * @implements 16C5:00DF:0010:2718 ()
 *
 * Called From: 16C5:00AD:004D:9382
 */
void f__16C5_00DF_0010_2718()
{
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x6124));
	emu_addw(&emu_ax, 0x1E);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6126));
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x00EF); emu_cs = 0x15C2; f__15C2_0559_0015_E98A();
	f__16C5_00EF_0008_F6CF();
}

/**
 * Decompiled function f__16C5_00EF_0008_F6CF()
 *
 * @name f__16C5_00EF_0008_F6CF
 * @implements 16C5:00EF:0008:F6CF ()
 *
 */
void f__16C5_00EF_0008_F6CF()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_ax);
	if (!emu_flags.zf) { f__16C5_00F7_0002_C43A(); return; }
	f__16C5_0121_0003_2E57(); return;
}

/**
 * Decompiled function f__16C5_00F7_0002_C43A()
 *
 * @name f__16C5_00F7_0002_C43A
 * @implements 16C5:00F7:0002:C43A ()
 *
 * Called From: 16C5:00A6:004D:9382
 * Called From: 16C5:00F3:0008:F6CF
 */
void f__16C5_00F7_0002_C43A()
{
	f__16C5_0101_000B_0673(); return;
}

/**
 * Decompiled function f__16C5_00F9_0013_BAAB()
 *
 * @name f__16C5_00F9_0013_BAAB
 * @implements 16C5:00F9:0013:BAAB ()
 *
 * Called From: 16C5:0090:002F:03B8
 */
void f__16C5_00F9_0013_BAAB()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6124));
	emu_decw(&emu_get_memory16(emu_es, emu_bx, 0x1C));
	f__16C5_0101_000B_0673(); return;
}

/**
 * Decompiled function f__16C5_0101_000B_0673()
 *
 * @name f__16C5_0101_000B_0673
 * @implements 16C5:0101:000B:0673 ()
 *
 * Called From: 16C5:0085:002F:03B8
 * Called From: 16C5:00F7:0002:C43A
 */
void f__16C5_0101_000B_0673()
{
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x010C); emu_cs = 0x104B; emu_AirUnit_FindNext();
	f__16C5_010C_0015_DF16();
}

/**
 * Decompiled function f__16C5_010C_0015_DF16()
 *
 * @name f__16C5_010C_0015_DF16
 * @implements 16C5:010C:0015:DF16 ()
 *
 */
void f__16C5_010C_0015_DF16()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	f__16C5_010E_0013_4DDB(); return;
}

/**
 * Decompiled function f__16C5_010E_0013_4DDB()
 *
 * @name f__16C5_010E_0013_4DDB
 * @implements 16C5:010E:0013:4DDB ()
 *
 * Called From: 16C5:0063:0006:7728
 */
void f__16C5_010E_0013_4DDB()
{
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x6126), emu_dx);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x6124), emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x6124));
	emu_orw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x6126));
	if (emu_flags.zf) { f__16C5_0121_0003_2E57(); return; }
	f__16C5_0066_000D_3A8A(); return;
}

/**
 * Decompiled function f__16C5_0121_0003_2E57()
 *
 * @name f__16C5_0121_0003_2E57
 * @implements 16C5:0121:0003:2E57 ()
 *
 * Called From: 16C5:004E:0007:F6A9
 * Called From: 16C5:011C:0013:4DDB
 * Called From: 16C5:011C:0015:DF16
 */
void f__16C5_0121_0003_2E57()
{
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__16C5_01EF_000D_1984()
 *
 * @name f__16C5_01EF_000D_1984
 * @implements 16C5:01EF:000D:1984 ()
 *
 * Called From: 15C2:0932:003A:D1E0
 */
void f__16C5_01EF_000D_1984()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6124));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x4));
	f__16C5_01FC_0002_2597(); return;
}

/**
 * Decompiled function f__16C5_01FC_0002_2597()
 *
 * @name f__16C5_01FC_0002_2597
 * @implements 16C5:01FC:0002:2597 ()
 *
 * Called From: 16C5:01FA:000D:1984
 */
void f__16C5_01FC_0002_2597()
{
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__16C5_01FE_000D_19C4()
 *
 * @name f__16C5_01FE_000D_19C4
 * @implements 16C5:01FE:000D:19C4 ()
 *
 * Called From: 15C2:0932:003A:D1E0
 */
void f__16C5_01FE_000D_19C4()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6124));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x6));
	f__16C5_020B_0002_2597(); return;
}

/**
 * Decompiled function f__16C5_020B_0002_2597()
 *
 * @name f__16C5_020B_0002_2597
 * @implements 16C5:020B:0002:2597 ()
 *
 * Called From: 16C5:0209:000D:19C4
 */
void f__16C5_020B_0002_2597()
{
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__16C5_020D_000D_1A44()
 *
 * @name f__16C5_020D_000D_1A44
 * @implements 16C5:020D:000D:1A44 ()
 *
 * Called From: 15C2:0932:003A:D1E0
 */
void f__16C5_020D_000D_1A44()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6124));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x1A));
	f__16C5_021A_0002_2597(); return;
}

/**
 * Decompiled function f__16C5_021A_0002_2597()
 *
 * @name f__16C5_021A_0002_2597
 * @implements 16C5:021A:0002:2597 ()
 *
 * Called From: 16C5:0218:000D:1A44
 */
void f__16C5_021A_0002_2597()
{
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__16C5_021C_003A_2718()
 *
 * @name f__16C5_021C_003A_2718
 * @implements 16C5:021C:003A:2718 ()
 *
 * Called From: 15C2:0932:003A:D1E0
 */
void f__16C5_021C_003A_2718()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subw(&emu_sp, 0x12);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), 0x0);
	emu_xorw(&emu_di, emu_di);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), 0x0);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6124));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x4));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6124));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x8));
	if ((emu_flags.sf != emu_flags.of)) { f__16C5_0256_0017_FF04(); return; }
	f__16C5_0251_0005_DC2D(); return;
}

/**
 * Decompiled function f__16C5_0251_0005_DC2D()
 *
 * @name f__16C5_0251_0005_DC2D
 * @implements 16C5:0251:0005:DC2D ()
 *
 * Called From: 16C5:03BA:0003:6205
 */
void f__16C5_0251_0005_DC2D()
{
	emu_xorw(&emu_ax, emu_ax);
	f__16C5_0253_0003_DDB9(); return;
}

/**
 * Decompiled function f__16C5_0253_0003_DDB9()
 *
 * @name f__16C5_0253_0003_DDB9
 * @implements 16C5:0253:0003:DDB9 ()
 *
 * Called From: 16C5:03B7:0006:A824
 */
void f__16C5_0253_0003_DDB9()
{
	f__16C5_03BD_0006_F7CE(); return;
}

/**
 * Decompiled function f__16C5_0256_0017_FF04()
 *
 * @name f__16C5_0256_0017_FF04
 * @implements 16C5:0256:0017:FF04 ()
 *
 * Called From: 16C5:024F:003A:2718
 */
void f__16C5_0256_0017_FF04()
{
	emu_movw(&emu_ax, 0xFFFF);
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6124));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x10));
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x026D); emu_cs = 0x0FE4; emu_Unit_FindFirst();
	f__16C5_026D_0006_973F();
}

/**
 * Decompiled function f__16C5_026D_0006_973F()
 *
 * @name f__16C5_026D_0006_973F
 * @implements 16C5:026D:0006:973F ()
 *
 */
void f__16C5_026D_0006_973F()
{
	emu_addw(&emu_sp, 0x8);
	f__16C5_0367_0011_96EF(); return;
}

/**
 * Decompiled function f__16C5_0273_000E_E383()
 *
 * @name f__16C5_0273_000E_E383
 * @implements 16C5:0273:000E:E383 ()
 *
 * Called From: 16C5:0375:0011:96EF
 * Called From: 16C5:0375:0013:DDD9
 */
void f__16C5_0273_000E_E383()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0x4), 0x200);
	if (emu_flags.zf) { f__16C5_0281_000D_E586(); return; }
	f__16C5_035A_000B_799F(); return;
}

/**
 * Decompiled function f__16C5_0281_000D_E586()
 *
 * @name f__16C5_0281_000D_E586
 * @implements 16C5:0281:000D:E586 ()
 *
 * Called From: 16C5:027C:000E:E383
 */
void f__16C5_0281_000D_E586()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0x6);
	if (!emu_flags.zf) { f__16C5_028E_0026_21FC(); return; }
	f__16C5_035A_000B_799F(); return;
}

/**
 * Decompiled function f__16C5_028E_0026_21FC()
 *
 * @name f__16C5_028E_0026_21FC
 * @implements 16C5:028E:0026:21FC ()
 *
 * Called From: 16C5:0289:000D:E586
 */
void f__16C5_028E_0026_21FC()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x2));
	emu_movws(&emu_ax, emu_al);
	emu_movw(&emu_dx, 0x5A);
	emu_imuluw(&emu_ax, emu_dx);
	emu_movw(&emu_dx, 0x2D07);
	emu_movw(&emu_bx, emu_ax);
	emu_movw(&emu_es, emu_dx);
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x3C));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6124));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0xA));
	if (emu_flags.zf) { f__16C5_02B4_0028_C684(); return; }
	f__16C5_035A_000B_799F(); return;
}

/**
 * Decompiled function f__16C5_02B4_0028_C684()
 *
 * @name f__16C5_02B4_0028_C684
 * @implements 16C5:02B4:0028:C684 ()
 *
 * Called From: 16C5:02AF:0026:21FC
 */
void f__16C5_02B4_0028_C684()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x6F));
	emu_movws(&emu_ax, emu_al);
	emu_orw(&emu_ax, emu_ax);
	if (!emu_flags.zf) { f__16C5_02F9_000F_EECE(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6124));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x16));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x14));
	emu_push(emu_cs); emu_push(0x02DC); emu_cs = 0x0F3F; f__0F3F_00B4_002A_89B2();
	f__16C5_02DC_001D_4A1C();
}

/**
 * Decompiled function f__16C5_02DC_001D_4A1C()
 *
 * @name f__16C5_02DC_001D_4A1C
 * @implements 16C5:02DC:001D:4A1C ()
 *
 */
void f__16C5_02DC_001D_4A1C()
{
	emu_addw(&emu_sp, 0x8);
	emu_movw(&emu_si, emu_ax);
	emu_cmpw(&emu_si, emu_di);
	if (!(emu_flags.sf != emu_flags.of)) {
		emu_orw(&emu_di, emu_di);
		if (!emu_flags.zf) { f__16C5_02F7_0002_F0BA(); return; }
	}
	f__16C5_02E9_0010_5ED3(); return;
}

/**
 * Decompiled function f__16C5_02E9_0010_5ED3()
 *
 * @name f__16C5_02E9_0010_5ED3
 * @implements 16C5:02E9:0010:5ED3 ()
 *
 * Called From: 16C5:02E3:001D:4A1C
 */
void f__16C5_02E9_0010_5ED3()
{
	emu_movw(&emu_di, emu_si);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_dx);
	f__16C5_02F7_0002_F0BA(); return;
}

/**
 * Decompiled function f__16C5_02F7_0002_F0BA()
 *
 * @name f__16C5_02F7_0002_F0BA
 * @implements 16C5:02F7:0002:F0BA ()
 *
 * Called From: 16C5:02E7:001D:4A1C
 */
void f__16C5_02F7_0002_F0BA()
{
	f__16C5_035A_000B_799F(); return;
}

/**
 * Decompiled function f__16C5_02F9_000F_EECE()
 *
 * @name f__16C5_02F9_000F_EECE
 * @implements 16C5:02F9:000F:EECE ()
 *
 * Called From: 16C5:02BE:0028:C684
 */
void f__16C5_02F9_000F_EECE()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x6F));
	emu_movws(&emu_ax, emu_al);
	emu_decw(&emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0308); emu_cs = 0x104B; emu_AirUnit_Get_ByIndex();
	f__16C5_0308_0033_424B();
}

/**
 * Decompiled function f__16C5_0308_0033_424B()
 *
 * @name f__16C5_0308_0033_424B
 * @implements 16C5:0308:0033:424B ()
 *
 */
void f__16C5_0308_0033_424B()
{
	emu_pop(&emu_cx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), emu_dx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x12), emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x4));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x6));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__16C5_035A_000B_799F(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6124));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x16));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x14));
	emu_push(emu_cs); emu_push(0x033B); emu_cs = 0x0F3F; f__0F3F_00B4_002A_89B2();
	f__16C5_033B_002A_9578();
}

/**
 * Decompiled function f__16C5_033B_002A_9578()
 *
 * @name f__16C5_033B_002A_9578
 * @implements 16C5:033B:002A:9578 ()
 *
 */
void f__16C5_033B_002A_9578()
{
	emu_addw(&emu_sp, 0x8);
	emu_movw(&emu_si, emu_ax);
	emu_cmpw(&emu_si, emu_get_memory16(emu_ss, emu_bp, -0xE));
	if (!(emu_flags.sf != emu_flags.of)) {
		emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0xE), 0x0);
		if (!emu_flags.zf) { f__16C5_035A_000B_799F(); return; }
	}
	f__16C5_034B_001A_1855(); return;
}

/**
 * Decompiled function f__16C5_034B_001A_1855()
 *
 * @name f__16C5_034B_001A_1855
 * @implements 16C5:034B:001A:1855 ()
 *
 * Called From: 16C5:0343:002A:9578
 */
void f__16C5_034B_001A_1855()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), emu_si);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_dx);
	f__16C5_035A_000B_799F(); return;
}

/**
 * Decompiled function f__16C5_035A_000B_799F()
 *
 * @name f__16C5_035A_000B_799F
 * @implements 16C5:035A:000B:799F ()
 *
 * Called From: 16C5:027E:000E:E383
 * Called From: 16C5:02B1:0026:21FC
 * Called From: 16C5:02F7:001D:4A1C
 * Called From: 16C5:02F7:0002:F0BA
 * Called From: 16C5:02F7:0010:5ED3
 * Called From: 16C5:031D:0033:424B
 * Called From: 16C5:0349:002A:9578
 */
void f__16C5_035A_000B_799F()
{
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x0365); emu_cs = 0x0FE4; emu_Unit_FindNext();
	f__16C5_0365_0013_DDD9();
}

/**
 * Decompiled function f__16C5_0365_0013_DDD9()
 *
 * @name f__16C5_0365_0013_DDD9
 * @implements 16C5:0365:0013:DDD9 ()
 *
 */
void f__16C5_0365_0013_DDD9()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	f__16C5_0367_0011_96EF(); return;
}

/**
 * Decompiled function f__16C5_0367_0011_96EF()
 *
 * @name f__16C5_0367_0011_96EF
 * @implements 16C5:0367:0011:96EF ()
 *
 * Called From: 16C5:0270:0006:973F
 */
void f__16C5_0367_0011_96EF()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_flags.zf) { f__16C5_0378_0027_420B(); return; }
	f__16C5_0273_000E_E383(); return;
}

/**
 * Decompiled function f__16C5_0378_0027_420B()
 *
 * @name f__16C5_0378_0027_420B
 * @implements 16C5:0378:0027:420B ()
 *
 * Called From: 16C5:0373:0013:DDD9
 */
void f__16C5_0378_0027_420B()
{
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x6));
	if (emu_flags.zf) {
		emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0xA));
		emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0xC));
		emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax);
		emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_dx);
	}
	f__16C5_038C_0013_6D07(); return;
}

/**
 * Decompiled function f__16C5_038C_0013_6D07()
 *
 * @name f__16C5_038C_0013_6D07
 * @implements 16C5:038C:0013:6D07 ()
 *
 * Called From: 16C5:037E:0027:420B
 */
void f__16C5_038C_0013_6D07()
{
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x6));
	if (emu_flags.zf) { f__16C5_03BA_0003_6205(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs); emu_push(0x039F); emu_cs = 0x16BC; f__16BC_0044_0027_CB92();
	f__16C5_039F_0015_91C5();
}

/**
 * Decompiled function f__16C5_039F_0015_91C5()
 *
 * @name f__16C5_039F_0015_91C5
 * @implements 16C5:039F:0015:91C5 ()
 *
 */
void f__16C5_039F_0015_91C5()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6126));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6124));
	emu_push(emu_cs); emu_push(0x03B4); emu_cs = 0x16BC; f__16BC_0001_0018_AE47();
	f__16C5_03B4_0006_A824();
}

/**
 * Decompiled function f__16C5_03B4_0006_A824()
 *
 * @name f__16C5_03B4_0006_A824
 * @implements 16C5:03B4:0006:A824 ()
 *
 */
void f__16C5_03B4_0006_A824()
{
	emu_addw(&emu_sp, 0x8);
	f__16C5_0253_0003_DDB9(); return;
}

/**
 * Decompiled function f__16C5_03BA_0003_6205()
 *
 * @name f__16C5_03BA_0003_6205
 * @implements 16C5:03BA:0003:6205 ()
 *
 * Called From: 16C5:0392:0027:420B
 */
void f__16C5_03BA_0003_6205()
{
	f__16C5_0251_0005_DC2D(); return;
}

/**
 * Decompiled function f__16C5_03BD_0006_F7CE()
 *
 * @name f__16C5_03BD_0006_F7CE
 * @implements 16C5:03BD:0006:F7CE ()
 *
 * Called From: 16C5:0253:0003:DDB9
 * Called From: 16C5:0253:0005:DC2D
 * Called From: 16C5:0253:003A:2718
 */
void f__16C5_03BD_0006_F7CE()
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
 * Decompiled function f__16C5_03C3_002D_24E5()
 *
 * @name f__16C5_03C3_002D_24E5
 * @implements 16C5:03C3:002D:24E5 ()
 *
 * Called From: 15C2:0932:003A:D1E0
 */
void f__16C5_03C3_002D_24E5()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subw(&emu_sp, 0x8);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_xorw(&emu_si, emu_si);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x0);
	emu_xorw(&emu_di, emu_di);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x0);
	emu_movw(&emu_ax, 0xFFFF);
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6124));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x10));
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x03F0); emu_cs = 0x0FE4; emu_Unit_FindFirst();
	f__16C5_03F0_0005_A1AE();
}

/**
 * Decompiled function f__16C5_03F0_0005_A1AE()
 *
 * @name f__16C5_03F0_0005_A1AE
 * @implements 16C5:03F0:0005:A1AE ()
 *
 */
void f__16C5_03F0_0005_A1AE()
{
	emu_addw(&emu_sp, 0x8);
	f__16C5_043E_0015_8FEB(); return;
}

/**
 * Decompiled function f__16C5_03F5_0023_C4F4()
 *
 * @name f__16C5_03F5_0023_C4F4
 * @implements 16C5:03F5:0023:C4F4 ()
 *
 * Called From: 16C5:044A:0015:8FEB
 * Called From: 16C5:044A:0017:EB58
 */
void f__16C5_03F5_0023_C4F4()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x6F));
	emu_movws(&emu_ax, emu_al);
	emu_decw(&emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6124));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x0));
	if (!emu_flags.zf) { f__16C5_0431_000B_799F(); return; }
	emu_incw(&emu_si);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_push(emu_cs); emu_push(0x0418); emu_cs = 0x0F3F; f__0F3F_0046_000C_9E1E();
	f__16C5_0418_0014_7049();
}

/**
 * Decompiled function f__16C5_0418_0014_7049()
 *
 * @name f__16C5_0418_0014_7049
 * @implements 16C5:0418:0014:7049 ()
 *
 */
void f__16C5_0418_0014_7049()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_addw(&emu_di, emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_push(emu_cs); emu_push(0x042C); emu_cs = 0x0F3F; f__0F3F_0052_000C_9E02();
	f__16C5_042C_0010_F460();
}

/**
 * Decompiled function f__16C5_042C_0010_F460()
 *
 * @name f__16C5_042C_0010_F460
 * @implements 16C5:042C:0010:F460 ()
 *
 */
void f__16C5_042C_0010_F460()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax);
	f__16C5_0431_000B_799F(); return;
}

/**
 * Decompiled function f__16C5_0431_000B_799F()
 *
 * @name f__16C5_0431_000B_799F
 * @implements 16C5:0431:000B:799F ()
 *
 * Called From: 16C5:0405:0023:C4F4
 */
void f__16C5_0431_000B_799F()
{
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x043C); emu_cs = 0x0FE4; emu_Unit_FindNext();
	f__16C5_043C_0017_EB58();
}

/**
 * Decompiled function f__16C5_043C_0017_EB58()
 *
 * @name f__16C5_043C_0017_EB58
 * @implements 16C5:043C:0017:EB58 ()
 *
 */
void f__16C5_043C_0017_EB58()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	f__16C5_043E_0015_8FEB(); return;
}

/**
 * Decompiled function f__16C5_043E_0015_8FEB()
 *
 * @name f__16C5_043E_0015_8FEB
 * @implements 16C5:043E:0015:8FEB ()
 *
 * Called From: 16C5:03F3:0005:A1AE
 */
void f__16C5_043E_0015_8FEB()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (!emu_flags.zf) { f__16C5_03F5_0023_C4F4(); return; }
	emu_orw(&emu_si, emu_si);
	if (!emu_flags.zf) { f__16C5_0453_001B_4B24(); return; }
	f__16C5_0538_0005_BB66(); return;
}

/**
 * Decompiled function f__16C5_0453_001B_4B24()
 *
 * @name f__16C5_0453_001B_4B24
 * @implements 16C5:0453:001B:4B24 ()
 *
 * Called From: 16C5:044E:0017:EB58
 */
void f__16C5_0453_001B_4B24()
{
	emu_movw(&emu_ax, emu_di);
	emu_xorw(&emu_dx, emu_dx);
	emu_divw(&emu_ax, emu_si);
	emu_movw(&emu_di, emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_xorw(&emu_dx, emu_dx);
	emu_divw(&emu_ax, emu_si);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x046E); emu_cs = 0x0F3F; f__0F3F_0037_000F_E3D8();
	f__16C5_046E_0025_660E();
}

/**
 * Decompiled function f__16C5_046E_0025_660E()
 *
 * @name f__16C5_046E_0025_660E
 * @implements 16C5:046E:0025:660E ()
 *
 */
void f__16C5_046E_0025_660E()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6124));
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0x16), emu_dx);
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0x14), emu_ax);
	emu_movw(&emu_ax, 0xFFFF);
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6124));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x10));
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x0493); emu_cs = 0x0FE4; emu_Unit_FindFirst();
	f__16C5_0493_0005_A5AE();
}

/**
 * Decompiled function f__16C5_0493_0005_A5AE()
 *
 * @name f__16C5_0493_0005_A5AE
 * @implements 16C5:0493:0005:A5AE ()
 *
 */
void f__16C5_0493_0005_A5AE()
{
	emu_addw(&emu_sp, 0x8);
	f__16C5_04D9_003B_9EEA(); return;
}

/**
 * Decompiled function f__16C5_0498_002E_4299()
 *
 * @name f__16C5_0498_002E_4299
 * @implements 16C5:0498:002E:4299 ()
 *
 * Called From: 16C5:04E5:003B:9EEA
 * Called From: 16C5:04E5:003D:5378
 */
void f__16C5_0498_002E_4299()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x6F));
	emu_movws(&emu_ax, emu_al);
	emu_decw(&emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6124));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x0));
	if (!emu_flags.zf) { f__16C5_04CC_000B_799F(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6124));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x16));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x14));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_push(emu_cs); emu_push(0x04C6); emu_cs = 0x0F3F; f__0F3F_0104_0013_C3B8();
	f__16C5_04C6_0011_175D();
}

/**
 * Decompiled function f__16C5_04C6_0011_175D()
 *
 * @name f__16C5_04C6_0011_175D
 * @implements 16C5:04C6:0011:175D ()
 *
 */
void f__16C5_04C6_0011_175D()
{
	emu_addw(&emu_sp, 0x8);
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax);
	f__16C5_04CC_000B_799F(); return;
}

/**
 * Decompiled function f__16C5_04CC_000B_799F()
 *
 * @name f__16C5_04CC_000B_799F
 * @implements 16C5:04CC:000B:799F ()
 *
 * Called From: 16C5:04A8:002E:4299
 */
void f__16C5_04CC_000B_799F()
{
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x04D7); emu_cs = 0x0FE4; emu_Unit_FindNext();
	f__16C5_04D7_003D_5378();
}

/**
 * Decompiled function f__16C5_04D7_003D_5378()
 *
 * @name f__16C5_04D7_003D_5378
 * @implements 16C5:04D7:003D:5378 ()
 *
 */
void f__16C5_04D7_003D_5378()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	f__16C5_04D9_003B_9EEA(); return;
}

/**
 * Decompiled function f__16C5_04D9_003B_9EEA()
 *
 * @name f__16C5_04D9_003B_9EEA
 * @implements 16C5:04D9:003B:9EEA ()
 *
 * Called From: 16C5:0496:0005:A5AE
 */
void f__16C5_04D9_003B_9EEA()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (!emu_flags.zf) { f__16C5_0498_002E_4299(); return; }
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_xorw(&emu_dx, emu_dx);
	emu_divw(&emu_ax, emu_si);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6124));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x1A), 0x0);
	if (emu_flags.zf) { f__16C5_0538_0005_BB66(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6124));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x18), 0x0);
	if (emu_flags.zf) { f__16C5_0538_0005_BB66(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6124));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x1A));
	emu_push(emu_cs); emu_push(0x0514); emu_cs = 0x167E; f__167E_0162_000D_A6D2();
	f__16C5_0514_000B_9CBA();
}

/**
 * Decompiled function f__16C5_0514_000B_9CBA()
 *
 * @name f__16C5_0514_000B_9CBA
 * @implements 16C5:0514:000B:9CBA ()
 *
 */
void f__16C5_0514_000B_9CBA()
{
	emu_pop(&emu_cx);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x051F); emu_cs = 0x0F3F; f__0F3F_034C_0012_18EA();
	f__16C5_051F_0008_DA8A();
}

/**
 * Decompiled function f__16C5_051F_0008_DA8A()
 *
 * @name f__16C5_051F_0008_DA8A
 * @implements 16C5:051F:0008:DA8A ()
 *
 */
void f__16C5_051F_0008_DA8A()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0527); emu_cs = 0x0F3F; f__0F3F_0360_0038_97C0();
	f__16C5_0527_0016_F4ED();
}

/**
 * Decompiled function f__16C5_0527_0016_F4ED()
 *
 * @name f__16C5_0527_0016_F4ED
 * @implements 16C5:0527:0016:F4ED ()
 *
 */
void f__16C5_0527_0016_F4ED()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_cmpw(&emu_ax, 0xA);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) {
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6124));
		emu_movw(&emu_get_memory16(emu_es, emu_bx, 0x18), 0x2);
	}
	f__16C5_0538_0005_BB66(); return;
}

/**
 * Decompiled function f__16C5_0538_0005_BB66()
 *
 * @name f__16C5_0538_0005_BB66
 * @implements 16C5:0538:0005:BB66 ()
 *
 * Called From: 16C5:0450:0017:EB58
 * Called From: 16C5:04FA:003D:5378
 * Called From: 16C5:052C:0016:F4ED
 */
void f__16C5_0538_0005_BB66()
{
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x8));
	f__16C5_053D_0006_F7CE(); return;
}

/**
 * Decompiled function f__16C5_053D_0006_F7CE()
 *
 * @name f__16C5_053D_0006_F7CE
 * @implements 16C5:053D:0006:F7CE ()
 *
 * Called From: 16C5:053B:0005:BB66
 */
void f__16C5_053D_0006_F7CE()
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
 * Decompiled function f__16C5_0543_0034_CA88()
 *
 * @name f__16C5_0543_0034_CA88
 * @implements 16C5:0543:0034:CA88 ()
 *
 * Called From: 15C2:0932:003A:D1E0
 */
void f__16C5_0543_0034_CA88()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subw(&emu_sp, 0xE);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_xorw(&emu_si, emu_si);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0xB));
	emu_movws(&emu_ax, emu_al);
	emu_shlw(&emu_ax, 0x1);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_addw(&emu_bx, emu_ax);
	emu_movw(&emu_di, emu_get_memory16(emu_es, emu_bx, 0x16));
	emu_movw(&emu_ax, 0xFFFF);
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6124));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x10));
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x0577); emu_cs = 0x0FE4; emu_Unit_FindFirst();
	f__16C5_0577_0006_1789();
}

/**
 * Decompiled function f__16C5_0577_0006_1789()
 *
 * @name f__16C5_0577_0006_1789
 * @implements 16C5:0577:0006:1789 ()
 *
 */
void f__16C5_0577_0006_1789()
{
	emu_addw(&emu_sp, 0x8);
	f__16C5_06AB_0011_16E1(); return;
}

/**
 * Decompiled function f__16C5_057D_0015_F18F()
 *
 * @name f__16C5_057D_0015_F18F
 * @implements 16C5:057D:0015:F18F ()
 *
 * Called From: 16C5:06B9:0011:16E1
 * Called From: 16C5:06B9:0013:5DD7
 */
void f__16C5_057D_0015_F18F()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x6F));
	emu_movws(&emu_ax, emu_al);
	emu_decw(&emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6124));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x0));
	if (emu_flags.zf) { f__16C5_0592_000C_6B53(); return; }
	f__16C5_069E_000B_799F(); return;
}

/**
 * Decompiled function f__16C5_0592_000C_6B53()
 *
 * @name f__16C5_0592_000C_6B53
 * @implements 16C5:0592:000C:6B53 ()
 *
 * Called From: 16C5:058D:0015:F18F
 */
void f__16C5_0592_000C_6B53()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x56));
	emu_push(emu_cs); emu_push(0x059E); emu_cs = 0x167E; f__167E_01BB_0010_85F6();
	f__16C5_059E_0023_DF62();
}

/**
 * Decompiled function f__16C5_059E_0023_DF62()
 *
 * @name f__16C5_059E_0023_DF62
 * @implements 16C5:059E:0023:DF62 ()
 *
 */
void f__16C5_059E_0023_DF62()
{
	emu_pop(&emu_cx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_dx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6124));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x16));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x14));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_push(emu_cs); emu_push(0x05C1); emu_cs = 0x0F3F; f__0F3F_0104_0013_C3B8();
	f__16C5_05C1_0026_0FE7();
}

/**
 * Decompiled function f__16C5_05C1_0026_0FE7()
 *
 * @name f__16C5_05C1_0026_0FE7
 * @implements 16C5:05C1:0026:0FE7 ()
 *
 */
void f__16C5_05C1_0026_0FE7()
{
	emu_addw(&emu_sp, 0x8);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x56), 0x0);
	if (emu_flags.zf) { f__16C5_060C_0037_5F94(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_push(emu_cs); emu_push(0x05E7); emu_cs = 0x0F3F; f__0F3F_0104_0013_C3B8();
	f__16C5_05E7_001D_B1ED();
}

/**
 * Decompiled function f__16C5_05E7_001D_B1ED()
 *
 * @name f__16C5_05E7_001D_B1ED
 * @implements 16C5:05E7:001D:B1ED ()
 *
 */
void f__16C5_05E7_001D_B1ED()
{
	emu_addw(&emu_sp, 0x8);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6124));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x16));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x14));
	emu_push(emu_cs); emu_push(0x0604); emu_cs = 0x0F3F; f__0F3F_0104_0013_C3B8();
	f__16C5_0604_0008_1CBE();
}

/**
 * Decompiled function f__16C5_0604_0008_1CBE()
 *
 * @name f__16C5_0604_0008_1CBE
 * @implements 16C5:0604:0008:1CBE ()
 *
 */
void f__16C5_0604_0008_1CBE()
{
	emu_addw(&emu_sp, 0x8);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_ax);
	f__16C5_0615_002E_F6D7(); return;
}

/**
 * Decompiled function f__16C5_060C_0037_5F94()
 *
 * @name f__16C5_060C_0037_5F94
 * @implements 16C5:060C:0037:5F94 ()
 *
 * Called From: 16C5:05CF:0026:0FE7
 */
void f__16C5_060C_0037_5F94()
{
	emu_movw(&emu_ax, 0x40);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax);
	f__16C5_0615_002E_F6D7(); return;
}

/**
 * Decompiled function f__16C5_0615_002E_F6D7()
 *
 * @name f__16C5_0615_002E_F6D7
 * @implements 16C5:0615:002E:F6D7 ()
 *
 * Called From: 16C5:060A:0008:1CBE
 */
void f__16C5_0615_002E_F6D7()
{
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0xA));
	if (emu_flags.cf) {
		emu_movw(&emu_ax, emu_di);
		emu_addw(&emu_ax, 0x2);
		emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x8));
		if (emu_flags.cf) { f__16C5_0634_000F_6841(); return; }
	}
	f__16C5_0627_001C_37C4(); return;
}

/**
 * Decompiled function f__16C5_0627_001C_37C4()
 *
 * @name f__16C5_0627_001C_37C4
 * @implements 16C5:0627:001C:37C4 ()
 *
 * Called From: 16C5:061B:002E:F6D7
 * Called From: 16C5:061B:0037:5F94
 */
void f__16C5_0627_001C_37C4()
{
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0xA));
	if (emu_flags.cf) { f__16C5_068C_000F_6849(); return; }
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_di);
	if ((emu_flags.cf || emu_flags.zf)) { f__16C5_068C_000F_6849(); return; }
	f__16C5_0634_000F_6841(); return;
}

/**
 * Decompiled function f__16C5_0634_000F_6841()
 *
 * @name f__16C5_0634_000F_6841
 * @implements 16C5:0634:000F:6841 ()
 *
 * Called From: 16C5:0625:002E:F6D7
 */
void f__16C5_0634_000F_6841()
{
	emu_movw(&emu_ax, 0x1);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x0643); emu_cs = 0x176C; f__176C_000E_000E_633D();
	f__16C5_0643_0023_559B();
}

/**
 * Decompiled function f__16C5_0643_0023_559B()
 *
 * @name f__16C5_0643_0023_559B
 * @implements 16C5:0643:0023:559B ()
 *
 */
void f__16C5_0643_0023_559B()
{
	emu_addw(&emu_sp, 0x6);
	emu_movw(&emu_ax, 0x1);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x1);
	emu_push(emu_ax);
	emu_movw(&emu_ax, emu_di);
	emu_movb(&emu_cl, 0x4);
	emu_shlw(&emu_ax, emu_cl);
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6124));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x16));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x14));
	emu_push(emu_cs); emu_push(0x0666); emu_cs = 0x0F3F; f__0F3F_01A1_0018_9631();
	f__16C5_0666_000A_CB50();
}

/**
 * Decompiled function f__16C5_0666_000A_CB50()
 *
 * @name f__16C5_0666_000A_CB50
 * @implements 16C5:0666:000A:CB50 ()
 *
 */
void f__16C5_0666_000A_CB50()
{
	emu_addw(&emu_sp, 0x8);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0670); emu_cs = 0x0F3F; f__0F3F_0086_0017_EA43();
	f__16C5_0670_0008_A673();
}

/**
 * Decompiled function f__16C5_0670_0008_A673()
 *
 * @name f__16C5_0670_0008_A673
 * @implements 16C5:0670:0008:A673 ()
 *
 */
void f__16C5_0670_0008_A673()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0678); emu_cs = 0x167E; f__167E_00F3_001E_8CB3();
	f__16C5_0678_000E_B4D2();
}

/**
 * Decompiled function f__16C5_0678_000E_B4D2()
 *
 * @name f__16C5_0678_000E_B4D2
 * @implements 16C5:0678:000E:B4D2 ()
 *
 */
void f__16C5_0678_000E_B4D2()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x0686); emu_cs = 0x1A34; f__1A34_1B68_0019_AAA0();
	f__16C5_0686_0006_ABD8();
}

/**
 * Decompiled function f__16C5_0686_0006_ABD8()
 *
 * @name f__16C5_0686_0006_ABD8
 * @implements 16C5:0686:0006:ABD8 ()
 *
 */
void f__16C5_0686_0006_ABD8()
{
	emu_addw(&emu_sp, 0x6);
	emu_incw(&emu_si);
	f__16C5_069E_000B_799F(); return;
}

/**
 * Decompiled function f__16C5_068C_000F_6849()
 *
 * @name f__16C5_068C_000F_6849
 * @implements 16C5:068C:000F:6849 ()
 *
 * Called From: 16C5:062D:002E:F6D7
 * Called From: 16C5:0632:001C:37C4
 */
void f__16C5_068C_000F_6849()
{
	emu_movw(&emu_ax, 0x3);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x069B); emu_cs = 0x176C; f__176C_000E_000E_633D();
	f__16C5_069B_000E_5BF5();
}

/**
 * Decompiled function f__16C5_069B_000E_5BF5()
 *
 * @name f__16C5_069B_000E_5BF5
 * @implements 16C5:069B:000E:5BF5 ()
 *
 */
void f__16C5_069B_000E_5BF5()
{
	emu_addw(&emu_sp, 0x6);
	f__16C5_069E_000B_799F(); return;
}

/**
 * Decompiled function f__16C5_069E_000B_799F()
 *
 * @name f__16C5_069E_000B_799F
 * @implements 16C5:069E:000B:799F ()
 *
 * Called From: 16C5:058F:0015:F18F
 * Called From: 16C5:068A:0006:ABD8
 */
void f__16C5_069E_000B_799F()
{
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x06A9); emu_cs = 0x0FE4; emu_Unit_FindNext();
	f__16C5_06A9_0013_5DD7();
}

/**
 * Decompiled function f__16C5_06A9_0013_5DD7()
 *
 * @name f__16C5_06A9_0013_5DD7
 * @implements 16C5:06A9:0013:5DD7 ()
 *
 */
void f__16C5_06A9_0013_5DD7()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	f__16C5_06AB_0011_16E1(); return;
}

/**
 * Decompiled function f__16C5_06AB_0011_16E1()
 *
 * @name f__16C5_06AB_0011_16E1
 * @implements 16C5:06AB:0011:16E1 ()
 *
 * Called From: 16C5:057A:0006:1789
 */
void f__16C5_06AB_0011_16E1()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_flags.zf) { f__16C5_06BC_0004_68F2(); return; }
	f__16C5_057D_0015_F18F(); return;
}

/**
 * Decompiled function f__16C5_06BC_0004_68F2()
 *
 * @name f__16C5_06BC_0004_68F2
 * @implements 16C5:06BC:0004:68F2 ()
 *
 * Called From: 16C5:06B7:0013:5DD7
 */
void f__16C5_06BC_0004_68F2()
{
	emu_movw(&emu_ax, emu_si);
	f__16C5_06C0_0006_F7CE(); return;
}

/**
 * Decompiled function f__16C5_06C0_0006_F7CE()
 *
 * @name f__16C5_06C0_0006_F7CE
 * @implements 16C5:06C0:0006:F7CE ()
 *
 * Called From: 16C5:06BE:0004:68F2
 */
void f__16C5_06C0_0006_F7CE()
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
 * Decompiled function f__16C5_06C6_001D_94A6()
 *
 * @name f__16C5_06C6_001D_94A6
 * @implements 16C5:06C6:001D:94A6 ()
 *
 * Called From: 15C2:0932:003A:D1E0
 */
void f__16C5_06C6_001D_94A6()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subw(&emu_sp, 0xA);
	emu_push(emu_si);
	emu_movw(&emu_ax, 0xFFFF);
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6124));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x10));
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x6);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x06E3); emu_cs = 0x0FE4; emu_Unit_FindFirst();
	f__16C5_06E3_0006_D723();
}

/**
 * Decompiled function f__16C5_06E3_0006_D723()
 *
 * @name f__16C5_06E3_0006_D723
 * @implements 16C5:06E3:0006:D723 ()
 *
 */
void f__16C5_06E3_0006_D723()
{
	emu_addw(&emu_sp, 0x8);
	f__16C5_076E_0011_C2EE(); return;
}

/**
 * Decompiled function f__16C5_06E9_0022_CF9A()
 *
 * @name f__16C5_06E9_0022_CF9A
 * @implements 16C5:06E9:0022:CF9A ()
 *
 * Called From: 16C5:077C:0011:C2EE
 * Called From: 16C5:077C:0013:89D8
 */
void f__16C5_06E9_0022_CF9A()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x6F));
	emu_movws(&emu_ax, emu_al);
	emu_decw(&emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6124));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x0));
	if (!emu_flags.zf) { f__16C5_0762_000A_B112(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6124));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0xC), 0x3);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x070B; emu_last_cs = 0x16C5; emu_last_ip = 0x0704; emu_last_length = 0x0022; emu_last_crc = 0xCF9A; emu_call(); return; }
	emu_movw(&emu_ax, 0x4);
	f__16C5_070D_000C_2071(); return;
}

/**
 * Decompiled function f__16C5_070D_000C_2071()
 *
 * @name f__16C5_070D_000C_2071
 * @implements 16C5:070D:000C:2071 ()
 *
 * Called From: 16C5:0709:0022:CF9A
 */
void f__16C5_070D_000C_2071()
{
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_cs); emu_push(0x0719); emu_cs = 0x1A34; f__1A34_350F_0021_9B04();
	f__16C5_0719_0021_53DA();
}

/**
 * Decompiled function f__16C5_0719_0021_53DA()
 *
 * @name f__16C5_0719_0021_53DA
 * @implements 16C5:0719:0021:53DA ()
 *
 */
void f__16C5_0719_0021_53DA()
{
	emu_addw(&emu_sp, 0x6);
	emu_movw(&emu_si, emu_ax);
	emu_orw(&emu_si, emu_si);
	if (emu_flags.zf) { f__16C5_0762_000A_B112(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6124));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x1A), emu_si);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x075E; emu_last_cs = 0x16C5; emu_last_ip = 0x072A; emu_last_length = 0x0021; emu_last_crc = 0x53DA; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6124));
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0x1A), emu_si);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x073A); emu_cs = 0x167E; f__167E_0162_000D_A6D2();
	f__16C5_073A_0012_7F5F();
}

/**
 * Decompiled function f__16C5_073A_0012_7F5F()
 *
 * @name f__16C5_073A_0012_7F5F
 * @implements 16C5:073A:0012:7F5F ()
 *
 */
void f__16C5_073A_0012_7F5F()
{
	emu_pop(&emu_cx);
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_push(emu_cs); emu_push(0x074C); emu_cs = 0x0F3F; f__0F3F_0086_0017_EA43();
	f__16C5_074C_0008_1757();
}

/**
 * Decompiled function f__16C5_074C_0008_1757()
 *
 * @name f__16C5_074C_0008_1757
 * @implements 16C5:074C:0008:1757 ()
 *
 */
void f__16C5_074C_0008_1757()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0754); emu_cs = 0x34CD; ovl__34CD(17);
	f__16C5_0754_000E_CFB4();
}

/**
 * Decompiled function f__16C5_0754_000E_CFB4()
 *
 * @name f__16C5_0754_000E_CFB4
 * @implements 16C5:0754:000E:CFB4 ()
 *
 */
void f__16C5_0754_000E_CFB4()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6124));
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0x18), emu_ax);
	emu_movw(&emu_ax, emu_si);
	f__16C5_0783_0005_8BCF(); return;
}

/**
 * Decompiled function f__16C5_0762_000A_B112()
 *
 * @name f__16C5_0762_000A_B112
 * @implements 16C5:0762:000A:B112 ()
 *
 * Called From: 16C5:06F9:0022:CF9A
 */
void f__16C5_0762_000A_B112()
{
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x6);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x076C); emu_cs = 0x0FE4; emu_Unit_FindNext();
	f__16C5_076C_0013_89D8();
}

/**
 * Decompiled function f__16C5_076C_0013_89D8()
 *
 * @name f__16C5_076C_0013_89D8
 * @implements 16C5:076C:0013:89D8 ()
 *
 */
void f__16C5_076C_0013_89D8()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	f__16C5_076E_0011_C2EE(); return;
}

/**
 * Decompiled function f__16C5_076E_0011_C2EE()
 *
 * @name f__16C5_076E_0011_C2EE
 * @implements 16C5:076E:0011:C2EE ()
 *
 * Called From: 16C5:06E6:0006:D723
 */
void f__16C5_076E_0011_C2EE()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_dx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x8));
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x077F; emu_last_cs = 0x16C5; emu_last_ip = 0x077A; emu_last_length = 0x0011; emu_last_crc = 0xC2EE; emu_call(); return; }
	f__16C5_06E9_0022_CF9A(); return;
}

/**
 * Decompiled function f__16C5_0783_0005_8BCF()
 *
 * @name f__16C5_0783_0005_8BCF
 * @implements 16C5:0783:0005:8BCF ()
 *
 * Called From: 16C5:0760:000E:CFB4
 */
void f__16C5_0783_0005_8BCF()
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
 * Decompiled function f__16C5_0788_0018_4AA5()
 *
 * @name f__16C5_0788_0018_4AA5
 * @implements 16C5:0788:0018:4AA5 ()
 *
 * Called From: 15C2:0932:003A:D1E0
 */
void f__16C5_0788_0018_4AA5()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subw(&emu_sp, 0xC);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6124));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x1A), 0x0);
	if (!emu_flags.zf) { f__16C5_07A0_000D_11BB(); return; }
	f__16C5_079B_0005_9DB3(); return;
}

/**
 * Decompiled function f__16C5_079B_0005_9DB3()
 *
 * @name f__16C5_079B_0005_9DB3
 * @implements 16C5:079B:0005:9DB3 ()
 *
 * Called From: 16C5:09BB:0003:2397
 */
void f__16C5_079B_0005_9DB3()
{
	emu_xorw(&emu_ax, emu_ax);
	f__16C5_09BE_0006_F7CE(); return;
}

/**
 * Decompiled function f__16C5_07A0_000D_11BB()
 *
 * @name f__16C5_07A0_000D_11BB
 * @implements 16C5:07A0:000D:11BB ()
 *
 * Called From: 16C5:0799:0018:4AA5
 */
void f__16C5_07A0_000D_11BB()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6124));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x1A));
	emu_push(emu_cs); emu_push(0x07AD); emu_cs = 0x167E; f__167E_01BB_0010_85F6();
	f__16C5_07AD_0025_40DD();
}

/**
 * Decompiled function f__16C5_07AD_0025_40DD()
 *
 * @name f__16C5_07AD_0025_40DD
 * @implements 16C5:07AD:0025:40DD ()
 *
 */
void f__16C5_07AD_0025_40DD()
{
	emu_pop(&emu_cx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_dx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax);
	emu_xorw(&emu_di, emu_di);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6124));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x18), 0x0);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x07D6; emu_last_cs = 0x16C5; emu_last_ip = 0x07BF; emu_last_length = 0x0025; emu_last_crc = 0x40DD; emu_call(); return; }
	emu_movw(&emu_ax, 0x1);
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6124));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x18));
	emu_push(emu_cs); emu_push(0x07D2); emu_cs = 0x167E; f__167E_00F3_001E_8CB3();
	f__16C5_07D2_001B_B10A();
}

/**
 * Decompiled function f__16C5_07D2_001B_B10A()
 *
 * @name f__16C5_07D2_001B_B10A
 * @implements 16C5:07D2:001B:B10A ()
 *
 */
void f__16C5_07D2_001B_B10A()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_movw(&emu_di, emu_ax);
	emu_movw(&emu_ax, 0xFFFF);
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6124));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x10));
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x07ED); emu_cs = 0x0FE4; emu_Unit_FindFirst();
	f__16C5_07ED_0006_57AF();
}

/**
 * Decompiled function f__16C5_07ED_0006_57AF()
 *
 * @name f__16C5_07ED_0006_57AF
 * @implements 16C5:07ED:0006:57AF ()
 *
 */
void f__16C5_07ED_0006_57AF()
{
	emu_addw(&emu_sp, 0x8);
	f__16C5_09AA_0011_56DF(); return;
}

/**
 * Decompiled function f__16C5_07F3_0015_B1A9()
 *
 * @name f__16C5_07F3_0015_B1A9
 * @implements 16C5:07F3:0015:B1A9 ()
 *
 * Called From: 16C5:09B8:0011:56DF
 * Called From: 16C5:09B8:0013:1DE9
 */
void f__16C5_07F3_0015_B1A9()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x6F));
	emu_movws(&emu_ax, emu_al);
	emu_decw(&emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6124));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x0));
	if (emu_flags.zf) { f__16C5_0808_0002_E1BA(); return; }
	f__16C5_099D_000B_799F(); return;
}

/**
 * Decompiled function f__16C5_0808_0002_E1BA()
 *
 * @name f__16C5_0808_0002_E1BA
 * @implements 16C5:0808:0002:E1BA ()
 *
 * Called From: 16C5:0803:0015:B1A9
 */
void f__16C5_0808_0002_E1BA()
{
	f__16C5_084D_000E_09AD(); return;
}

/**
 * Decompiled function f__16C5_084D_000E_09AD()
 *
 * @name f__16C5_084D_000E_09AD
 * @implements 16C5:084D:000E:09AD ()
 *
 * Called From: 16C5:0808:0002:E1BA
 */
void f__16C5_084D_000E_09AD()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6124));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x1A), 0x0);
	if (!emu_flags.zf) { f__16C5_085B_0048_ACCD(); return; }
	/* Unresolved jump */ emu_ip = 0x098B; emu_last_cs = 0x16C5; emu_last_ip = 0x0858; emu_last_length = 0x000E; emu_last_crc = 0x09AD; emu_call();
}

/**
 * Decompiled function f__16C5_085B_0048_ACCD()
 *
 * @name f__16C5_085B_0048_ACCD
 * @implements 16C5:085B:0048:ACCD ()
 *
 * Called From: 16C5:0856:000E:09AD
 */
void f__16C5_085B_0048_ACCD()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x2));
	emu_movws(&emu_ax, emu_al);
	emu_movw(&emu_dx, 0x5A);
	emu_imuluw(&emu_ax, emu_dx);
	emu_movw(&emu_dx, 0x2D07);
	emu_movw(&emu_bx, emu_ax);
	emu_movw(&emu_es, emu_dx);
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x50));
	emu_movb(&emu_cl, 0x8);
	emu_shlw(&emu_ax, emu_cl);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x4F), 0x0);
	if (!emu_flags.zf) { f__16C5_08C4_0018_C08E(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x54));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6124));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x1A));
	if (!emu_flags.zf) { f__16C5_08C4_0018_C08E(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x56), 0x0);
	if (emu_flags.zf) { f__16C5_08A3_0016_8B23(); return; }
	f__16C5_0989_0002_C93A(); return;
}

/**
 * Decompiled function f__16C5_08A3_0016_8B23()
 *
 * @name f__16C5_08A3_0016_8B23
 * @implements 16C5:08A3:0016:8B23 ()
 *
 * Called From: 16C5:089E:0048:ACCD
 */
void f__16C5_08A3_0016_8B23()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_push(emu_cs); emu_push(0x08B9); emu_cs = 0x0F3F; f__0F3F_00B4_002A_89B2();
	f__16C5_08B9_000B_D46A();
}

/**
 * Decompiled function f__16C5_08B9_000B_D46A()
 *
 * @name f__16C5_08B9_000B_D46A
 * @implements 16C5:08B9:000B:D46A ()
 *
 */
void f__16C5_08B9_000B_D46A()
{
	emu_addw(&emu_sp, 0x8);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0xC));
	if ((emu_flags.sf != emu_flags.of)) { f__16C5_08C4_0018_C08E(); return; }
	f__16C5_0989_0002_C93A(); return;
}

/**
 * Decompiled function f__16C5_08C4_0018_C08E()
 *
 * @name f__16C5_08C4_0018_C08E
 * @implements 16C5:08C4:0018:C08E ()
 *
 * Called From: 16C5:0883:0048:ACCD
 */
void f__16C5_08C4_0018_C08E()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x4F), 0x0);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x08DF; emu_last_cs = 0x16C5; emu_last_ip = 0x08CC; emu_last_length = 0x0018; emu_last_crc = 0xC08E; emu_call(); return; }
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x08DC); emu_cs = 0x176C; f__176C_000E_000E_633D();
	f__16C5_08DC_0019_EFED();
}

/**
 * Decompiled function f__16C5_08DC_0019_EFED()
 *
 * @name f__16C5_08DC_0019_EFED
 * @implements 16C5:08DC:0019:EFED ()
 *
 */
void f__16C5_08DC_0019_EFED()
{
	emu_addw(&emu_sp, 0x6);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs); emu_push(0x08F5); emu_cs = 0x0F3F; f__0F3F_0125_000D_4868();
	f__16C5_08F5_0013_98D0();
}

/**
 * Decompiled function f__16C5_08F5_0013_98D0()
 *
 * @name f__16C5_08F5_0013_98D0
 * @implements 16C5:08F5:0013:98D0 ()
 *
 */
void f__16C5_08F5_0013_98D0()
{
	emu_addw(&emu_sp, 0x8);
	emu_addw(&emu_ax, 0xFFC0);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x7F);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0908); emu_cs = 0x2537; f__2537_000C_001C_86CB();
	f__16C5_0908_001E_7ACA();
}

/**
 * Decompiled function f__16C5_0908_001E_7ACA()
 *
 * @name f__16C5_0908_001E_7ACA
 * @implements 16C5:0908:001E:7ACA ()
 *
 */
void f__16C5_0908_001E_7ACA()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_pop(&emu_dx);
	emu_addw(&emu_dx, emu_ax);
	emu_movw(&emu_si, emu_dx);
	emu_orw(&emu_si, emu_si);
	if ((emu_flags.sf != emu_flags.of)) {
		emu_addw(&emu_si, 0x100);
	}
	f__16C5_0917_000F_9BA4(); return;
}

/**
 * Decompiled function f__16C5_0917_000F_9BA4()
 *
 * @name f__16C5_0917_000F_9BA4
 * @implements 16C5:0917:000F:9BA4 ()
 *
 * Called From: 16C5:0911:001E:7ACA
 */
void f__16C5_0917_000F_9BA4()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_si);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs); emu_push(0x0926); emu_cs = 0x0F3F; f__0F3F_028E_0015_1153();
	f__16C5_0926_000A_CB50();
}

/**
 * Decompiled function f__16C5_0926_000A_CB50()
 *
 * @name f__16C5_0926_000A_CB50
 * @implements 16C5:0926:000A:CB50 ()
 *
 */
void f__16C5_0926_000A_CB50()
{
	emu_addw(&emu_sp, 0x8);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0930); emu_cs = 0x0F3F; f__0F3F_0086_0017_EA43();
	f__16C5_0930_000D_8578();
}

/**
 * Decompiled function f__16C5_0930_000D_8578()
 *
 * @name f__16C5_0930_000D_8578
 * @implements 16C5:0930:000D:8578 ()
 *
 */
void f__16C5_0930_000D_8578()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_cs); emu_push(0x093D); emu_cs = 0x34CD; ovl__34CD(32);
	f__16C5_093D_000E_0652();
}

/**
 * Decompiled function f__16C5_093D_000E_0652()
 *
 * @name f__16C5_093D_000E_0652
 * @implements 16C5:093D:000E:0652 ()
 *
 */
void f__16C5_093D_000E_0652()
{
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_dx);
	if (!emu_flags.zf) { f__16C5_094B_000F_345F(); return; }
	emu_movw(&emu_ax, 0x1);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	f__16C5_095D_0005_BFC0(); return;
}

/**
 * Decompiled function f__16C5_094B_000F_345F()
 *
 * @name f__16C5_094B_000F_345F
 * @implements 16C5:094B:000F:345F ()
 *
 * Called From: 16C5:0940:000E:0652
 */
void f__16C5_094B_000F_345F()
{
	emu_movw(&emu_ax, 0x1);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs); emu_push(0x095A); emu_cs = 0x0F3F; f__0F3F_0086_0017_EA43();
	f__16C5_095A_0008_A673();
}

/**
 * Decompiled function f__16C5_095A_0008_A673()
 *
 * @name f__16C5_095A_0008_A673
 * @implements 16C5:095A:0008:A673 ()
 *
 */
void f__16C5_095A_0008_A673()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_ax);
	f__16C5_095D_0005_BFC0(); return;
}

/**
 * Decompiled function f__16C5_095D_0005_BFC0()
 *
 * @name f__16C5_095D_0005_BFC0
 * @implements 16C5:095D:0005:BFC0 ()
 *
 * Called From: 16C5:0949:000E:0652
 */
void f__16C5_095D_0005_BFC0()
{
	emu_push(emu_cs); emu_push(0x0962); emu_cs = 0x167E; f__167E_00F3_001E_8CB3();
	f__16C5_0962_000E_B4D2();
}

/**
 * Decompiled function f__16C5_0962_000E_B4D2()
 *
 * @name f__16C5_0962_000E_B4D2
 * @implements 16C5:0962:000E:B4D2 ()
 *
 */
void f__16C5_0962_000E_B4D2()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x0970); emu_cs = 0x1A34; f__1A34_1B68_0019_AAA0();
	f__16C5_0970_0016_8E0F();
}

/**
 * Decompiled function f__16C5_0970_0016_8E0F()
 *
 * @name f__16C5_0970_0016_8E0F
 * @implements 16C5:0970:0016:8E0F ()
 *
 */
void f__16C5_0970_0016_8E0F()
{
	emu_addw(&emu_sp, 0x6);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6124));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x1A));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x0986); emu_cs = 0x1A34; f__1A34_1A66_0011_34D4();
	f__16C5_0986_0005_8DEE();
}

/**
 * Decompiled function f__16C5_0986_0005_8DEE()
 *
 * @name f__16C5_0986_0005_8DEE
 * @implements 16C5:0986:0005:8DEE ()
 *
 */
void f__16C5_0986_0005_8DEE()
{
	emu_addw(&emu_sp, 0x6);
	f__16C5_0989_0002_C93A(); return;
}

/**
 * Decompiled function f__16C5_0989_0002_C93A()
 *
 * @name f__16C5_0989_0002_C93A
 * @implements 16C5:0989:0002:C93A ()
 *
 * Called From: 16C5:08A0:0048:ACCD
 * Called From: 16C5:08C1:000B:D46A
 */
void f__16C5_0989_0002_C93A()
{
	f__16C5_099D_000B_799F(); return;
}

/**
 * Decompiled function f__16C5_099D_000B_799F()
 *
 * @name f__16C5_099D_000B_799F
 * @implements 16C5:099D:000B:799F ()
 *
 * Called From: 16C5:0805:0015:B1A9
 * Called From: 16C5:0989:0005:8DEE
 * Called From: 16C5:0989:0002:C93A
 */
void f__16C5_099D_000B_799F()
{
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x09A8); emu_cs = 0x0FE4; emu_Unit_FindNext();
	f__16C5_09A8_0013_1DE9();
}

/**
 * Decompiled function f__16C5_09A8_0013_1DE9()
 *
 * @name f__16C5_09A8_0013_1DE9
 * @implements 16C5:09A8:0013:1DE9 ()
 *
 */
void f__16C5_09A8_0013_1DE9()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	f__16C5_09AA_0011_56DF(); return;
}

/**
 * Decompiled function f__16C5_09AA_0011_56DF()
 *
 * @name f__16C5_09AA_0011_56DF
 * @implements 16C5:09AA:0011:56DF ()
 *
 * Called From: 16C5:07F0:0006:57AF
 */
void f__16C5_09AA_0011_56DF()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_flags.zf) { f__16C5_09BB_0003_2397(); return; }
	f__16C5_07F3_0015_B1A9(); return;
}

/**
 * Decompiled function f__16C5_09BB_0003_2397()
 *
 * @name f__16C5_09BB_0003_2397
 * @implements 16C5:09BB:0003:2397 ()
 *
 * Called From: 16C5:09B6:0013:1DE9
 */
void f__16C5_09BB_0003_2397()
{
	f__16C5_079B_0005_9DB3(); return;
}

/**
 * Decompiled function f__16C5_09BE_0006_F7CE()
 *
 * @name f__16C5_09BE_0006_F7CE
 * @implements 16C5:09BE:0006:F7CE ()
 *
 * Called From: 16C5:079D:0005:9DB3
 */
void f__16C5_09BE_0006_F7CE()
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
 * Decompiled function f__16C5_09C4_003E_31D6()
 *
 * @name f__16C5_09C4_003E_31D6
 * @implements 16C5:09C4:003E:31D6 ()
 *
 * Called From: 15C2:0932:003A:D1E0
 */
void f__16C5_09C4_003E_31D6()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_si);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0xB));
	emu_movws(&emu_ax, emu_al);
	emu_shlw(&emu_ax, 0x1);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_addw(&emu_bx, emu_ax);
	emu_movw(&emu_si, emu_get_memory16(emu_es, emu_bx, 0x16));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6124));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0xC), emu_si);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0A19; emu_last_cs = 0x16C5; emu_last_ip = 0x09E3; emu_last_length = 0x003E; emu_last_crc = 0x31D6; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6124));
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0xC), emu_si);
	emu_push(emu_ds);
	emu_movw(&emu_ax, 0x392E);
	emu_push(emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x6124));
	emu_addw(&emu_ax, 0x1E);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6126));
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0A02); emu_cs = 0x15C2; f__15C2_0395_0044_304E();
	f__16C5_0A02_0014_245A();
}

/**
 * Decompiled function f__16C5_0A02_0014_245A()
 *
 * @name f__16C5_0A02_0014_245A
 * @implements 16C5:0A02:0014:245A ()
 *
 */
void f__16C5_0A02_0014_245A()
{
	emu_addw(&emu_sp, 0x8);
	emu_push(emu_si);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x6124));
	emu_addw(&emu_ax, 0x1E);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6126));
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0A16); emu_cs = 0x15C2; f__15C2_03D9_0011_D202();
	f__16C5_0A16_0007_F90C();
}

/**
 * Decompiled function f__16C5_0A16_0007_F90C()
 *
 * @name f__16C5_0A16_0007_F90C
 * @implements 16C5:0A16:0007:F90C ()
 *
 */
void f__16C5_0A16_0007_F90C()
{
	emu_addw(&emu_sp, 0x6);
	emu_xorw(&emu_ax, emu_ax);
	f__16C5_0A1D_0003_2E57(); return;
}

/**
 * Decompiled function f__16C5_0A1D_0003_2E57()
 *
 * @name f__16C5_0A1D_0003_2E57
 * @implements 16C5:0A1D:0003:2E57 ()
 *
 * Called From: 16C5:0A1B:0007:F90C
 */
void f__16C5_0A1D_0003_2E57()
{
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__16C5_0A20_003A_2375()
 *
 * @name f__16C5_0A20_003A_2375
 * @implements 16C5:0A20:003A:2375 ()
 *
 * Called From: 15C2:0932:003A:D1E0
 */
void f__16C5_0A20_003A_2375()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6124));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0xE));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6124));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0xC));
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0A78; emu_last_cs = 0x16C5; emu_last_ip = 0x0A33; emu_last_length = 0x003A; emu_last_crc = 0x2375; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6124));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0xE));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6124));
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0xC), emu_ax);
	emu_push(emu_ds);
	emu_movw(&emu_ax, 0x392E);
	emu_push(emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x6124));
	emu_addw(&emu_ax, 0x1E);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6126));
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0A5A); emu_cs = 0x15C2; f__15C2_0395_0044_304E();
	f__16C5_0A5A_001B_990F();
}

/**
 * Decompiled function f__16C5_0A5A_001B_990F()
 *
 * @name f__16C5_0A5A_001B_990F
 * @implements 16C5:0A5A:001B:990F ()
 *
 */
void f__16C5_0A5A_001B_990F()
{
	emu_addw(&emu_sp, 0x8);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6124));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xE));
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x6124));
	emu_addw(&emu_ax, 0x1E);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6126));
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0A75); emu_cs = 0x15C2; f__15C2_03D9_0011_D202();
	f__16C5_0A75_0007_F90C();
}

/**
 * Decompiled function f__16C5_0A75_0007_F90C()
 *
 * @name f__16C5_0A75_0007_F90C
 * @implements 16C5:0A75:0007:F90C ()
 *
 */
void f__16C5_0A75_0007_F90C()
{
	emu_addw(&emu_sp, 0x6);
	emu_xorw(&emu_ax, emu_ax);
	f__16C5_0A7C_0002_2597(); return;
}

/**
 * Decompiled function f__16C5_0A7C_0002_2597()
 *
 * @name f__16C5_0A7C_0002_2597
 * @implements 16C5:0A7C:0002:2597 ()
 *
 * Called From: 16C5:0A7A:0007:F90C
 */
void f__16C5_0A7C_0002_2597()
{
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

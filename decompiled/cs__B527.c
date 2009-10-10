/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__B527_0000_0016_BBD9()
 *
 * @name f__B527_0000_0016_BBD9
 * @implements B527:0000:0016:BBD9 ()
 *
 * Called From: 3527:0020:0005:0000
 */
void f__B527_0000_0016_BBD9()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subw(&emu_sp, 0x16);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), 0x0);
	emu_movw(&emu_ax, 0x2);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0016); emu_cs = 0x29E8; emu_Input_Flags_SetBits();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3527) { ovl__3527(0xFF); }
	f__B527_0016_000A_F6B9();
}

/**
 * Decompiled function f__B527_0016_000A_F6B9()
 *
 * @name f__B527_0016_000A_F6B9
 * @implements B527:0016:000A:F6B9 ()
 *
 */
void f__B527_0016_000A_F6B9()
{
	emu_pop(&emu_cx);
	emu_movw(&emu_ax, 0x2000);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0020); emu_cs = 0x29E8; emu_Input_Flags_ClearBits();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3527) { ovl__3527(0xFF); }
	f__B527_0020_0009_E4DB();
}

/**
 * Decompiled function f__B527_0020_0009_E4DB()
 *
 * @name f__B527_0020_0009_E4DB
 * @implements B527:0020:0009:E4DB ()
 *
 */
void f__B527_0020_0009_E4DB()
{
	emu_pop(&emu_cx);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0029); emu_cs = 0x2598; f__2598_0000_0017_EB80();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3527) { ovl__3527(0xFF); }
	f__B527_0029_000C_7CE1();
}

/**
 * Decompiled function f__B527_0029_000C_7CE1()
 *
 * @name f__B527_0029_000C_7CE1
 * @implements B527:0029:000C:7CE1 ()
 *
 */
void f__B527_0029_000C_7CE1()
{
	emu_pop(&emu_cx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x12), emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_cs); emu_push(0x0035); emu_cs = 0x07AE; f__07AE_0000_00DF_A32C();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3527) { ovl__3527(0xFF); }
	f__B527_0035_0016_DA67();
}

/**
 * Decompiled function f__B527_0035_0016_DA67()
 *
 * @name f__B527_0035_0016_DA67
 * @implements B527:0035:0016:DA67 ()
 *
 */
void f__B527_0035_0016_DA67()
{
	emu_pop(&emu_cx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x992D));
	emu_movb(&emu_cl, 0x3);
	emu_shlw(&emu_ax, emu_cl);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x14), emu_ax);
	emu_movb(&emu_al, 0x57);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x004B); emu_cs = 0x2521; f__2521_000F_0022_6D87();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3527) { ovl__3527(0xFF); }
	f__B527_004B_0023_4A7D();
}

/**
 * Decompiled function f__B527_004B_0023_4A7D()
 *
 * @name f__B527_004B_0023_4A7D
 * @implements B527:004B:0023:4A7D ()
 *
 */
void f__B527_004B_0023_4A7D()
{
	emu_pop(&emu_cx);
	emu_incw(&emu_ax);
	emu_movw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x992F));
	emu_movb(&emu_cl, 0x3);
	emu_shlw(&emu_dx, emu_cl);
	emu_subw(&emu_dx, emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_dx);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_dx);
	emu_xorw(&emu_ax, emu_ax);
	emu_movw(&emu_si, emu_ax);
	emu_movw(&emu_di, emu_ax);
	f__B527_0081_0025_7FAE(); return;
}

/**
 * Decompiled function f__B527_006E_000F_C442()
 *
 * @name f__B527_006E_000F_C442
 * @implements B527:006E:000F:C442 ()
 *
 * Called From: B527:008D:0025:7FAE
 * Called From: B527:008D:0029:E163
 */
void f__B527_006E_000F_C442()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x0));
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x007D); emu_cs = 0x2521; f__2521_000F_0022_6D87();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3527) { ovl__3527(0xFF); }
	f__B527_007D_0029_E163();
}

/**
 * Decompiled function f__B527_007D_0029_E163()
 *
 * @name f__B527_007D_0029_E163
 * @implements B527:007D:0029:E163 ()
 *
 */
void f__B527_007D_0029_E163()
{
	emu_pop(&emu_cx);
	emu_addw(&emu_si, emu_ax);
	emu_incw(&emu_di);
	f__B527_0081_0025_7FAE(); return;
}

/**
 * Decompiled function f__B527_0081_0025_7FAE()
 *
 * @name f__B527_0081_0025_7FAE
 * @implements B527:0081:0025:7FAE ()
 *
 * Called From: B527:006C:0023:4A7D
 */
void f__B527_0081_0025_7FAE()
{
	emu_cmpw(&emu_si, emu_get_memory16(emu_ss, emu_bp, -0xA));
	if (!(emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x008F; emu_last_cs = 0xB527; emu_last_ip = 0x0084; emu_last_length = 0x0025; emu_last_crc = 0x7FAE; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x0), 0x0);
	if (!emu_flags.zf) { f__B527_006E_000F_C442(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movb(&emu_get_memory8(emu_es, emu_bx, 0x0), 0x0);
	emu_testw(&emu_get_memory16(emu_ss, emu_bp,  0x16), 0x1);
	if (emu_flags.zf) { f__B527_00A1_0005_6168(); return; }
	emu_orw(&emu_get_memory16(emu_ss, emu_bp,  0x16), 0x4);
	emu_push(emu_cs); emu_push(0x00A6); emu_cs = 0x2B6C; f__2B6C_0137_0020_C73F();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3527) { ovl__3527(0xFF); }
	f__B527_00A6_000C_6949();
}

/**
 * Decompiled function f__B527_00A1_0005_6168()
 *
 * @name f__B527_00A1_0005_6168
 * @implements B527:00A1:0005:6168 ()
 *
 * Called From: B527:009B:0025:7FAE
 * Called From: B527:009B:0029:E163
 */
void f__B527_00A1_0005_6168()
{
	emu_push(emu_cs); emu_push(0x00A6); emu_cs = 0x2B6C; f__2B6C_0137_0020_C73F();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3527) { ovl__3527(0xFF); }
	f__B527_00A6_000C_6949();
}

/**
 * Decompiled function f__B527_00A6_000C_6949()
 *
 * @name f__B527_00A6_000C_6949
 * @implements B527:00A6:000C:6949 ()
 *
 */
void f__B527_00A6_000C_6949()
{
	emu_testw(&emu_get_memory16(emu_ss, emu_bp,  0x16), 0x4);
	if (emu_flags.zf) { f__B527_00B2_001D_E367(); return; }
	emu_push(emu_cs); emu_push(0x00B2); emu_cs = 0x07AE; f__07AE_0103_004C_B43B();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3527) { ovl__3527(0xFF); }
	f__B527_00B2_001D_E367();
}

/**
 * Decompiled function f__B527_00B2_001D_E367()
 *
 * @name f__B527_00B2_001D_E367
 * @implements B527:00B2:001D:E367 ()
 *
 * Called From: B527:00AB:000C:6949
 */
void f__B527_00B2_001D_E367()
{
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6D59));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6D5B));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x992B));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x00CF); emu_cs = 0x10E4; f__10E4_1EF1_0040_01F8();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3527) { ovl__3527(0xFF); }
	f__B527_00CF_0012_9D7B();
}

/**
 * Decompiled function f__B527_00CF_0012_9D7B()
 *
 * @name f__B527_00CF_0012_9D7B
 * @implements B527:00CF:0012:9D7B ()
 *
 */
void f__B527_00CF_0012_9D7B()
{
	emu_addw(&emu_sp, 0xE);
	emu_movw(&emu_ax, 0x1);
	emu_push(emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_addw(&emu_ax, emu_si);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x00E1); f__B527_02CB_005E_FFA4();
	f__B527_00E1_0007_E5DE();
}

/**
 * Decompiled function f__B527_00E1_0007_E5DE()
 *
 * @name f__B527_00E1_0007_E5DE
 * @implements B527:00E1:0007:E5DE ()
 *
 */
void f__B527_00E1_0007_E5DE()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_cs); emu_push(0x00E8); emu_cs = 0x2B6C; f__2B6C_0169_001E_6939();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3527) { ovl__3527(0xFF); }
	f__B527_00E8_0008_5A0B();
}

/**
 * Decompiled function f__B527_00E8_0008_5A0B()
 *
 * @name f__B527_00E8_0008_5A0B
 * @implements B527:00E8:0008:5A0B ()
 *
 */
void f__B527_00E8_0008_5A0B()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), 0x0);
	f__B527_0281_0009_2E30(); return;
}

/**
 * Decompiled function f__B527_00F0_000B_FF42()
 *
 * @name f__B527_00F0_000B_FF42
 * @implements B527:00F0:000B:FF42 ()
 *
 * Called From: B527:0287:0009:2E30
 */
void f__B527_00F0_000B_FF42()
{
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x12));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x14));
	if (emu_flags.zf) { f__B527_010C_000B_0481(); return; }

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_ss, emu_bp,  0x12);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_ss, emu_bp,  0x14);
	emu_push(0x00FB);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x34DA003E: ovl__34DA(6); break;
		case 0x35180066: ovl__3518(14); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0xB527; emu_last_ip = 0x00F8; emu_last_length = 0x000B; emu_last_crc = 0xFF42;
			emu_call();
			return;
	}
	f__B527_00FB_0011_1AD6();
}

/**
 * Decompiled function f__B527_00FB_0011_1AD6()
 *
 * @name f__B527_00FB_0011_1AD6
 * @implements B527:00FB:0011:1AD6 ()
 *
 */
void f__B527_00FB_0011_1AD6()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), emu_ax);
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0xE), 0x0);
	if (emu_flags.zf) { f__B527_010C_000B_0481(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), 0x1);
	/* Unresolved jump */ emu_ip = 0x0281; emu_last_cs = 0xB527; emu_last_ip = 0x0109; emu_last_length = 0x0011; emu_last_crc = 0x1AD6; emu_call();
}

/**
 * Decompiled function f__B527_010C_000B_0481()
 *
 * @name f__B527_010C_000B_0481
 * @implements B527:010C:000B:0481 ()
 *
 * Called From: B527:00F6:000B:FF42
 * Called From: B527:0102:0011:1AD6
 */
void f__B527_010C_000B_0481()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x10));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_push(emu_cs); emu_push(0x0117); emu_cs = 0x34A2; ovl__34A2(2);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3527) { ovl__3527(0xFF); }
	f__B527_0117_0014_47BE();
}

/**
 * Decompiled function f__B527_0117_0014_47BE()
 *
 * @name f__B527_0117_0014_47BE
 * @implements B527:0117:0014:47BE ()
 *
 */
void f__B527_0117_0014_47BE()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax);
	emu_movw(&emu_ax, 0x1);
	emu_push(emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_addw(&emu_ax, emu_si);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x012B); f__B527_02CB_005E_FFA4();
	f__B527_012B_0017_408E();
}

/**
 * Decompiled function f__B527_012B_0017_408E()
 *
 * @name f__B527_012B_0017_408E
 * @implements B527:012B:0017:408E ()
 *
 */
void f__B527_012B_0017_408E()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_testw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x8000);
	if (emu_flags.zf) { f__B527_0142_001B_D66A(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), 0x1);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), emu_ax);
	f__B527_0281_0009_2E30(); return;
}

/**
 * Decompiled function f__B527_0142_001B_D66A()
 *
 * @name f__B527_0142_001B_D66A
 * @implements B527:0142:001B:D66A ()
 *
 * Called From: B527:0132:0017:408E
 */
void f__B527_0142_001B_D66A()
{
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x16), emu_ax);
	emu_movw(&emu_cx, 0x4);
	emu_movw(&emu_bx, 0x2BB);
	f__B527_014E_000F_5E6F(); return;
}

/**
 * Decompiled function f__B527_014E_000F_5E6F()
 *
 * @name f__B527_014E_000F_5E6F
 * @implements B527:014E:000F:5E6F ()
 *
 * Called From: B527:0159:001B:D66A
 * Called From: B527:0159:000F:5E6F
 */
void f__B527_014E_000F_5E6F()
{
	emu_movw(&emu_ax, emu_get_memory16(emu_cs, emu_bx, 0x0));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x16));
	if (emu_flags.zf) { f__B527_015D_0004_3BFB(); return; }
	emu_addw(&emu_bx, 0x2);
	if (--emu_cx != 0) { f__B527_014E_000F_5E6F(); return; }
	f__B527_01C7_0008_8702(); return;
}

/**
 * Decompiled function f__B527_015D_0004_3BFB()
 *
 * @name f__B527_015D_0004_3BFB
 * @implements B527:015D:0004:3BFB ()
 *
 * Called From: B527:0154:001B:D66A
 * Called From: B527:0154:000F:5E6F
 */
void f__B527_015D_0004_3BFB()
{

	/* Jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_cs, emu_bx, 0x8);
	switch (emu_ip) {
		case 0x0161: f__B527_0161_0003_5DA7(); return;
		case 0x0178: f__B527_0178_000D_2FF0(); return;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0xB527; emu_last_ip = 0x015D; emu_last_length = 0x0004; emu_last_crc = 0x3BFB;
			emu_call();
			return;
	}
}

/**
 * Decompiled function f__B527_0161_0003_5DA7()
 *
 * @name f__B527_0161_0003_5DA7
 * @implements B527:0161:0003:5DA7 ()
 *
 * Called From: B527:015D:0004:3BFB
 */
void f__B527_0161_0003_5DA7()
{
	f__B527_0281_0009_2E30(); return;
}

/**
 * Decompiled function f__B527_0178_000D_2FF0()
 *
 * @name f__B527_0178_000D_2FF0
 * @implements B527:0178:000D:2FF0 ()
 *
 * Called From: B527:015D:0004:3BFB
 */
void f__B527_0178_000D_2FF0()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), 0x1);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), 0x2B);
	f__B527_0281_0009_2E30(); return;
}

/**
 * Decompiled function f__B527_01C7_0008_8702()
 *
 * @name f__B527_01C7_0008_8702
 * @implements B527:01C7:0008:8702 ()
 *
 * Called From: B527:015B:000F:5E6F
 */
void f__B527_01C7_0008_8702()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_cs); emu_push(0x01CF); emu_cs = 0x29E8; emu_Input_Keyboard_HandleKeys2();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3527) { ovl__3527(0xFF); }
	f__B527_01CF_0014_5990();
}

/**
 * Decompiled function f__B527_01CF_0014_5990()
 *
 * @name f__B527_01CF_0014_5990
 * @implements B527:01CF:0014:5990 ()
 *
 */
void f__B527_01CF_0014_5990()
{
	emu_pop(&emu_cx);
	emu_andw(&emu_ax, 0xFF);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax);
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x20);
	if (!emu_flags.zf) { f__B527_01E3_0009_9151(); return; }
	emu_orw(&emu_di, emu_di);
	if (!emu_flags.zf) { f__B527_01E3_0009_9151(); return; }
	/* Unresolved jump */ emu_ip = 0x027F; emu_last_cs = 0xB527; emu_last_ip = 0x01E0; emu_last_length = 0x0014; emu_last_crc = 0x5990; emu_call();
}

/**
 * Decompiled function f__B527_01E3_0009_9151()
 *
 * @name f__B527_01E3_0009_9151
 * @implements B527:01E3:0009:9151 ()
 *
 * Called From: B527:01DA:0014:5990
 * Called From: B527:01DE:0014:5990
 */
void f__B527_01E3_0009_9151()
{
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x20);
	if (!(emu_flags.sf != emu_flags.of)) { f__B527_01EC_0009_A94E(); return; }
	f__B527_027F_0002_C03A(); return;
}

/**
 * Decompiled function f__B527_01EC_0009_A94E()
 *
 * @name f__B527_01EC_0009_A94E
 * @implements B527:01EC:0009:A94E ()
 *
 * Called From: B527:01E7:0009:9151
 */
void f__B527_01EC_0009_A94E()
{
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x7E);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__B527_01F5_0009_A1E0(); return; }
	f__B527_027F_0002_C03A(); return;
}

/**
 * Decompiled function f__B527_01F5_0009_A1E0()
 *
 * @name f__B527_01F5_0009_A1E0
 * @implements B527:01F5:0009:A1E0 ()
 *
 * Called From: B527:01F0:0009:A94E
 */
void f__B527_01F5_0009_A1E0()
{
	emu_movb(&emu_al, emu_get_memory8(emu_ss, emu_bp, -0x2));
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x01FE); emu_cs = 0x2521; f__2521_000F_0022_6D87();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3527) { ovl__3527(0xFF); }
	f__B527_01FE_002A_3E48();
}

/**
 * Decompiled function f__B527_01FE_002A_3E48()
 *
 * @name f__B527_01FE_002A_3E48
 * @implements B527:01FE:002A:3E48 ()
 *
 */
void f__B527_01FE_002A_3E48()
{
	emu_pop(&emu_cx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_ax);
	emu_movw(&emu_ax, emu_si);
	emu_addw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0xA));
	if (!(emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x027F; emu_last_cs = 0xB527; emu_last_ip = 0x020A; emu_last_length = 0x002A; emu_last_crc = 0x3E48; emu_call(); return; }
	emu_cmpw(&emu_di, emu_get_memory16(emu_ss, emu_bp,  0xA));
	if (!(emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x027F; emu_last_cs = 0xB527; emu_last_ip = 0x020F; emu_last_length = 0x002A; emu_last_crc = 0x3E48; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movb(&emu_al, emu_get_memory8(emu_ss, emu_bp, -0x2));
	emu_movb(&emu_get_memory8(emu_es, emu_bx, 0x0), emu_al);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movb(&emu_get_memory8(emu_es, emu_bx, 0x1), 0x0);
	emu_incw(&emu_di);
	emu_push(emu_cs); emu_push(0x0228); emu_cs = 0x2B6C; f__2B6C_0137_0020_C73F();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3527) { ovl__3527(0xFF); }
	f__B527_0228_000E_8F05();
}

/**
 * Decompiled function f__B527_0228_000E_8F05()
 *
 * @name f__B527_0228_000E_8F05
 * @implements B527:0228:000E:8F05 ()
 *
 */
void f__B527_0228_000E_8F05()
{
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_addw(&emu_ax, emu_si);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x0236); f__B527_02CB_005E_FFA4();
	f__B527_0236_0023_ABEA();
}

/**
 * Decompiled function f__B527_0236_0023_ABEA()
 *
 * @name f__B527_0236_0023_ABEA
 * @implements B527:0236:0023:ABEA ()
 *
 */
void f__B527_0236_0023_ABEA()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_movw(&emu_ax, 0x20);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6D59));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6D5B));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x992B));
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_addw(&emu_ax, emu_si);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_cs); emu_push(0x0259); emu_cs = 0x10E4; f__10E4_1EF1_0040_01F8();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3527) { ovl__3527(0xFF); }
	f__B527_0259_0008_3BE5();
}

/**
 * Decompiled function f__B527_0259_0008_3BE5()
 *
 * @name f__B527_0259_0008_3BE5
 * @implements B527:0259:0008:3BE5 ()
 *
 */
void f__B527_0259_0008_3BE5()
{
	emu_addw(&emu_sp, 0xE);
	emu_push(emu_cs); emu_push(0x0261); emu_cs = 0x2B6C; f__2B6C_0169_001E_6939();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3527) { ovl__3527(0xFF); }
	f__B527_0261_0012_440D();
}

/**
 * Decompiled function f__B527_0261_0012_440D()
 *
 * @name f__B527_0261_0012_440D
 * @implements B527:0261:0012:440D ()
 *
 */
void f__B527_0261_0012_440D()
{
	emu_addw(&emu_si, emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_movw(&emu_ax, 0x1);
	emu_push(emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_addw(&emu_ax, emu_si);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x0273); f__B527_02CB_005E_FFA4();
	f__B527_0273_000E_4982();
}

/**
 * Decompiled function f__B527_0273_000E_4982()
 *
 * @name f__B527_0273_000E_4982
 * @implements B527:0273:000E:4982 ()
 *
 */
void f__B527_0273_000E_4982()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movb(&emu_get_memory8(emu_es, emu_bx, 0x0), 0x0);
	f__B527_0281_0009_2E30(); return;
}

/**
 * Decompiled function f__B527_027F_0002_C03A()
 *
 * @name f__B527_027F_0002_C03A
 * @implements B527:027F:0002:C03A ()
 *
 * Called From: B527:01E9:0009:9151
 * Called From: B527:01F2:0009:A94E
 */
void f__B527_027F_0002_C03A()
{
	f__B527_0281_0009_2E30(); return;
}

/**
 * Decompiled function f__B527_0281_0009_2E30()
 *
 * @name f__B527_0281_0009_2E30
 * @implements B527:0281:0009:2E30 ()
 *
 * Called From: B527:00ED:0008:5A0B
 * Called From: B527:013F:0017:408E
 * Called From: B527:0161:0003:5DA7
 * Called From: B527:0182:000D:2FF0
 * Called From: B527:027F:000E:4982
 * Called From: B527:027F:0002:C03A
 */
void f__B527_0281_0009_2E30()
{
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x10), 0x0);
	if (!emu_flags.zf) { f__B527_028A_0009_E2B9(); return; }
	f__B527_00F0_000B_FF42(); return;
}

/**
 * Decompiled function f__B527_028A_0009_E2B9()
 *
 * @name f__B527_028A_0009_E2B9
 * @implements B527:028A:0009:E2B9 ()
 *
 * Called From: B527:0285:0009:2E30
 */
void f__B527_028A_0009_E2B9()
{
	emu_movw(&emu_ax, 0x2);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0293); emu_cs = 0x29E8; emu_Input_Flags_ClearBits();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3527) { ovl__3527(0xFF); }
	f__B527_0293_000A_B6BD();
}

/**
 * Decompiled function f__B527_0293_000A_B6BD()
 *
 * @name f__B527_0293_000A_B6BD
 * @implements B527:0293:000A:B6BD ()
 *
 */
void f__B527_0293_000A_B6BD()
{
	emu_pop(&emu_cx);
	emu_movw(&emu_ax, 0x2000);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x029D); emu_cs = 0x29E8; emu_Input_Flags_SetBits();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3527) { ovl__3527(0xFF); }
	f__B527_029D_0009_18B8();
}

/**
 * Decompiled function f__B527_029D_0009_18B8()
 *
 * @name f__B527_029D_0009_18B8
 * @implements B527:029D:0009:18B8 ()
 *
 */
void f__B527_029D_0009_18B8()
{
	emu_pop(&emu_cx);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs); emu_push(0x02A6); emu_cs = 0x07AE; f__07AE_0000_00DF_A32C();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3527) { ovl__3527(0xFF); }
	f__B527_02A6_0009_D1B5();
}

/**
 * Decompiled function f__B527_02A6_0009_D1B5()
 *
 * @name f__B527_02A6_0009_D1B5
 * @implements B527:02A6:0009:D1B5 ()
 *
 */
void f__B527_02A6_0009_D1B5()
{
	emu_pop(&emu_cx);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_push(emu_cs); emu_push(0x02AF); emu_cs = 0x2598; f__2598_0000_0017_EB80();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3527) { ovl__3527(0xFF); }
	f__B527_02AF_0006_DE27();
}

/**
 * Decompiled function f__B527_02AF_0006_DE27()
 *
 * @name f__B527_02AF_0006_DE27
 * @implements B527:02AF:0006:DE27 ()
 *
 */
void f__B527_02AF_0006_DE27()
{
	emu_pop(&emu_cx);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0xE));
	f__B527_02B5_0006_F7CE(); return;
}

/**
 * Decompiled function f__B527_02B5_0006_F7CE()
 *
 * @name f__B527_02B5_0006_F7CE
 * @implements B527:02B5:0006:F7CE ()
 *
 * Called From: B527:02B3:0006:DE27
 */
void f__B527_02B5_0006_F7CE()
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
 * Decompiled function f__B527_02CB_005E_FFA4()
 *
 * @name f__B527_02CB_005E_FFA4
 * @implements B527:02CB:005E:FFA4 ()
 *
 * Called From: B527:00DE:0012:9D7B
 * Called From: B527:0128:0014:47BE
 * Called From: B527:0233:000E:8F05
 * Called From: B527:0270:0012:440D
 */
void f__B527_02CB_005E_FFA4()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_di, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_orw(&emu_di, emu_di);
	if (!emu_flags.zf) { f__B527_02EC_003D_CE40(); return; }
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x2C60), 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x2C5E), 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x2C62), 0x1);
	f__B527_02EC_003D_CE40(); return;
}

/**
 * Decompiled function f__B527_02EC_003D_CE40()
 *
 * @name f__B527_02EC_003D_CE40
 * @implements B527:02EC:003D:CE40 ()
 *
 * Called From: B527:02D8:005E:FFA4
 */
void f__B527_02EC_003D_CE40()
{
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x2C60));
	emu_movw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x2C5E));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x76AE));
	if (!(emu_flags.cf || emu_flags.zf)) { f__B527_0367_0004_DE52(); return; }
	if (!emu_flags.zf) { f__B527_0301_0028_A290(); return; }
	emu_cmpw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x76AC));
	if (!(emu_flags.cf || emu_flags.zf)) { f__B527_0367_0004_DE52(); return; }
	f__B527_0301_0028_A290(); return;
}

/**
 * Decompiled function f__B527_0301_0028_A290()
 *
 * @name f__B527_0301_0028_A290
 * @implements B527:0301:0028:A290 ()
 *
 * Called From: B527:02F9:003D:CE40
 * Called From: B527:02F9:005E:FFA4
 */
void f__B527_0301_0028_A290()
{
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x2C62));
	emu_negw(&emu_ax, emu_ax);
	emu_sbbw(&emu_ax, emu_ax);
	emu_incw(&emu_ax);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x2C62), emu_ax);
	emu_orw(&emu_di, emu_di);
	if (emu_flags.zf) { f__B527_0324_0005_6168(); return; }
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x76AE));
	emu_movw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x76AC));
	emu_addw(&emu_dx, 0x14);
	emu_adcw(&emu_ax, 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x2C60), emu_ax);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x2C5E), emu_dx);
	f__B527_0324_0005_6168(); return;
}

/**
 * Decompiled function f__B527_0324_0005_6168()
 *
 * @name f__B527_0324_0005_6168
 * @implements B527:0324:0005:6168 ()
 *
 * Called From: B527:030E:0028:A290
 * Called From: B527:030E:005E:FFA4
 */
void f__B527_0324_0005_6168()
{
	emu_push(emu_cs); emu_push(0x0329); emu_cs = 0x2B6C; f__2B6C_0137_0020_C73F();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3527) { ovl__3527(0xFF); }
	f__B527_0329_000C_BD5E();
}

/**
 * Decompiled function f__B527_0329_000C_BD5E()
 *
 * @name f__B527_0329_000C_BD5E
 * @implements B527:0329:000C:BD5E ()
 *
 */
void f__B527_0329_000C_BD5E()
{
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x2C62), 0x0);
	if (emu_flags.zf) { f__B527_0335_0015_ADC3(); return; }
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x6D5B));
	f__B527_0338_0012_356E(); return;
}

/**
 * Decompiled function f__B527_0335_0015_ADC3()
 *
 * @name f__B527_0335_0015_ADC3
 * @implements B527:0335:0015:ADC3 ()
 *
 * Called From: B527:032E:000C:BD5E
 */
void f__B527_0335_0015_ADC3()
{
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x6D59));
	f__B527_0338_0012_356E(); return;
}

/**
 * Decompiled function f__B527_0338_0012_356E()
 *
 * @name f__B527_0338_0012_356E
 * @implements B527:0338:0012:356E ()
 *
 * Called From: B527:0333:000C:BD5E
 */
void f__B527_0338_0012_356E()
{
	emu_push(emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x992B));
	emu_addw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x9931));
	emu_decw(&emu_ax);
	emu_push(emu_ax);
	emu_movb(&emu_al, 0x57);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x034A); emu_cs = 0x2521; f__2521_000F_0022_6D87();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3527) { ovl__3527(0xFF); }
	f__B527_034A_0015_34F5();
}

/**
 * Decompiled function f__B527_034A_0015_34F5()
 *
 * @name f__B527_034A_0015_34F5
 * @implements B527:034A:0015:34F5 ()
 *
 */
void f__B527_034A_0015_34F5()
{
	emu_pop(&emu_cx);
	emu_movw(&emu_dx, emu_si);
	emu_addw(&emu_dx, emu_ax);
	emu_push(emu_dx);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x992B));
	emu_push(emu_si);
	emu_movw(&emu_ax, 0x353F);
	emu_movw(&emu_es, emu_ax);

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_es, 0x00, 0x6668);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_es, 0x00, 0x666A);
	emu_push(0x035F);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A60D31: f__22A6_0D31_0015_A4C3(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0xB527; emu_last_ip = 0x035A; emu_last_length = 0x0015; emu_last_crc = 0x34F5;
			emu_call();
			return;
	}
	f__B527_035F_0008_2BE5();
}

/**
 * Decompiled function f__B527_035F_0008_2BE5()
 *
 * @name f__B527_035F_0008_2BE5
 * @implements B527:035F:0008:2BE5 ()
 *
 */
void f__B527_035F_0008_2BE5()
{
	emu_addw(&emu_sp, 0xA);
	emu_push(emu_cs); emu_push(0x0367); emu_cs = 0x2B6C; f__2B6C_0169_001E_6939();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3527) { ovl__3527(0xFF); }
	f__B527_0367_0004_DE52();
}

/**
 * Decompiled function f__B527_0367_0004_DE52()
 *
 * @name f__B527_0367_0004_DE52
 * @implements B527:0367:0004:DE52 ()
 *
 * Called From: B527:02F7:003D:CE40
 * Called From: B527:02FF:003D:CE40
 */
void f__B527_0367_0004_DE52()
{
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

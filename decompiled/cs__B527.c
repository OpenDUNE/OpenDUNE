/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__B527_0000_0016_D14C()
 *
 * @name f__B527_0000_0016_D14C
 * @implements B527:0000:0016:D14C ()
 *
 * Called From: 3527:0020:0005:1FC4
 * Called From: 3527:0020:0005:1E8A
 * Called From: 3527:0020:0005:1FF0
 * Called From: 3527:0020:0005:1C70
 */
void f__B527_0000_0016_D14C()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x16);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), 0x0);
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0016); emu_cs = 0x29E8; f__29E8_04AF_003C_3CE9();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3527) { ovl__3527(0xFF); }
	f__B527_0016_000A_0E22();
}

/**
 * Decompiled function f__B527_0016_000A_0E22()
 *
 * @name f__B527_0016_000A_0E22
 * @implements B527:0016:000A:0E22 ()
 *
 * Called From: B527:0016:0016:D14C
 */
void f__B527_0016_000A_0E22()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_ax.x, 0x2000);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0020); emu_cs = 0x29E8; f__29E8_04EB_0011_D0DB();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3527) { ovl__3527(0xFF); }
	f__B527_0020_0009_E46A();
}

/**
 * Decompiled function f__B527_0020_0009_E46A()
 *
 * @name f__B527_0020_0009_E46A
 * @implements B527:0020:0009:E46A ()
 *
 * Called From: B527:0020:000A:0E22
 */
void f__B527_0020_0009_E46A()
{
	emu_pop(&emu_cx.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0029); emu_cs = 0x2598; f__2598_0000_0017_D681();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3527) { ovl__3527(0xFF); }
	f__B527_0029_000C_CAF7();
}

/**
 * Decompiled function f__B527_0029_000C_CAF7()
 *
 * @name f__B527_0029_000C_CAF7
 * @implements B527:0029:000C:CAF7 ()
 *
 * Called From: B527:0029:0009:E46A
 */
void f__B527_0029_000C_CAF7()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x12), emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_cs); emu_push(0x0035); emu_cs = 0x07AE; f__07AE_0000_00DF_386F();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3527) { ovl__3527(0xFF); }
	f__B527_0035_0016_3231();
}

/**
 * Decompiled function f__B527_0035_0016_3231()
 *
 * @name f__B527_0035_0016_3231
 * @implements B527:0035:0016:3231 ()
 *
 * Called From: B527:0035:000C:CAF7
 */
void f__B527_0035_0016_3231()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00, -0x66D3));
	emu_movb(&emu_cx.l, 0x3);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x14), emu_ax.x);
	emu_movb(&emu_ax.l, 0x57);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x004B); emu_cs = 0x2521; f__2521_000F_0022_2292();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3527) { ovl__3527(0xFF); }
	f__B527_004B_0023_C7D2();
}

/**
 * Decompiled function f__B527_004B_0023_C7D2()
 *
 * @name f__B527_004B_0023_C7D2
 * @implements B527:004B:0023:C7D2 ()
 *
 * Called From: B527:004B:0016:3231
 */
void f__B527_004B_0023_C7D2()
{
	emu_pop(&emu_cx.x);
	emu_incw(&emu_ax.x);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00, -0x66D1));
	emu_movb(&emu_cx.l, 0x3);
	emu_shlw(&emu_dx.x, emu_cx.l);
	emu_subw(&emu_dx.x, emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_dx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_dx.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_movw(&emu_si, emu_ax.x);
	emu_movw(&emu_di, emu_ax.x);
	f__B527_0081_0025_A60F(); return;
}

/**
 * Decompiled function f__B527_0081_0025_A60F()
 *
 * @name f__B527_0081_0025_A60F
 * @implements B527:0081:0025:A60F ()
 *
 * Called From: B527:006C:0023:C7D2
 */
void f__B527_0081_0025_A60F()
{
	emu_cmpw(&emu_si, emu_get_memory16(emu_ss, emu_bp, -0xA));
	if (!(emu_flags.sf != emu_flags.of)) { emu_ip = 0x008F; emu_last_cs = 0xB527; emu_last_ip = 0x0084; emu_last_length = 0x0025; emu_last_crc = 0xA60F; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0x0);
	if (!emu_flags.zf) { emu_ip = 0x006E; emu_last_cs = 0xB527; emu_last_ip = 0x008D; emu_last_length = 0x0025; emu_last_crc = 0xA60F; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0x0);
	emu_testw(&emu_get_memory16(emu_ss, emu_bp,  0x16), 0x1);
	if (emu_flags.zf) { f__B527_00A1_0005_11DE(); return; }
	emu_orws(&emu_get_memory16(emu_ss, emu_bp,  0x16), 0x4);
	emu_push(emu_cs); emu_push(0x00A6); emu_cs = 0x2B6C; f__2B6C_0137_0020_17E5();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3527) { ovl__3527(0xFF); }
	f__B527_00A6_000C_3A83();
}

/**
 * Decompiled function f__B527_00A1_0005_11DE()
 *
 * @name f__B527_00A1_0005_11DE
 * @implements B527:00A1:0005:11DE ()
 *
 * Called From: B527:009B:0025:A60F
 */
void f__B527_00A1_0005_11DE()
{
	emu_push(emu_cs); emu_push(0x00A6); emu_cs = 0x2B6C; f__2B6C_0137_0020_17E5();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3527) { ovl__3527(0xFF); }
	f__B527_00A6_000C_3A83();
}

/**
 * Decompiled function f__B527_00A6_000C_3A83()
 *
 * @name f__B527_00A6_000C_3A83
 * @implements B527:00A6:000C:3A83 ()
 *
 * Called From: B527:00A6:0005:11DE
 * Called From: B527:00A6:0025:A60F
 */
void f__B527_00A6_000C_3A83()
{
	emu_testw(&emu_get_memory16(emu_ss, emu_bp,  0x16), 0x4);
	if (emu_flags.zf) { f__B527_00B2_001D_890D(); return; }
	emu_push(emu_cs); emu_push(0x00B2); emu_cs = 0x07AE; f__07AE_0103_004C_A52F();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3527) { ovl__3527(0xFF); }
	f__B527_00B2_001D_890D();
}

/**
 * Decompiled function f__B527_00B2_001D_890D()
 *
 * @name f__B527_00B2_001D_890D
 * @implements B527:00B2:001D:890D ()
 *
 * Called From: B527:00AB:000C:3A83
 * Called From: B527:00B2:000C:3A83
 */
void f__B527_00B2_001D_890D()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6D59));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6D5B));
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x66D5));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x00CF); emu_cs = 0x10E4; f__10E4_1EF1_0040_E33D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3527) { ovl__3527(0xFF); }
	f__B527_00CF_0012_B9DD();
}

/**
 * Decompiled function f__B527_00CF_0012_B9DD()
 *
 * @name f__B527_00CF_0012_B9DD
 * @implements B527:00CF:0012:B9DD ()
 *
 * Called From: B527:00CF:001D:890D
 */
void f__B527_00CF_0012_B9DD()
{
	emu_addws(&emu_sp, 0xE);
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_addw(&emu_ax.x, emu_si);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x00E1); f__B527_02CB_005E_E2DF();
	f__B527_00E1_0007_2EFE();
}

/**
 * Decompiled function f__B527_00E1_0007_2EFE()
 *
 * @name f__B527_00E1_0007_2EFE
 * @implements B527:00E1:0007:2EFE ()
 *
 * Called From: B527:00E1:0012:B9DD
 */
void f__B527_00E1_0007_2EFE()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_push(emu_cs); emu_push(0x00E8); emu_cs = 0x2B6C; f__2B6C_0169_001E_97C8();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3527) { ovl__3527(0xFF); }
	f__B527_00E8_0008_DD0E();
}

/**
 * Decompiled function f__B527_00E8_0008_DD0E()
 *
 * @name f__B527_00E8_0008_DD0E
 * @implements B527:00E8:0008:DD0E ()
 *
 * Called From: B527:00E8:0007:2EFE
 */
void f__B527_00E8_0008_DD0E()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), 0x0);
	f__B527_0281_0009_09BD(); return;
}

/**
 * Decompiled function f__B527_00F0_000B_4061()
 *
 * @name f__B527_00F0_000B_4061
 * @implements B527:00F0:000B:4061 ()
 *
 * Called From: B527:0287:0009:09BD
 */
void f__B527_00F0_000B_4061()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x12));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x14));
	if (emu_flags.zf) { f__B527_010C_000B_D486(); return; }

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_ss, emu_bp,  0x12);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_ss, emu_bp,  0x14);
	emu_push(0x00FB);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x34DA003E: ovl__34DA(6); break;
		case 0x35180066: ovl__3518(14); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0xB527; emu_last_ip = 0x00F8; emu_last_length = 0x000B; emu_last_crc = 0x4061;
			emu_call();
			return;
	}
	f__B527_00FB_0011_3FB2();
}

/**
 * Decompiled function f__B527_00FB_0011_3FB2()
 *
 * @name f__B527_00FB_0011_3FB2
 * @implements B527:00FB:0011:3FB2 ()
 *
 * Called From: B527:00FB:000B:4061
 */
void f__B527_00FB_0011_3FB2()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0xE), 0x0);
	if (emu_flags.zf) { f__B527_010C_000B_D486(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), 0x1);
	emu_ip = 0x0281; emu_last_cs = 0xB527; emu_last_ip = 0x0109; emu_last_length = 0x0011; emu_last_crc = 0x3FB2; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B527_010C_000B_D486()
 *
 * @name f__B527_010C_000B_D486
 * @implements B527:010C:000B:D486 ()
 *
 * Called From: B527:00F6:000B:4061
 * Called From: B527:0102:0011:3FB2
 */
void f__B527_010C_000B_D486()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x10));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_push(emu_cs); emu_push(0x0117); emu_cs = 0x34A2; ovl__34A2(2);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3527) { ovl__3527(0xFF); }
	f__B527_0117_0014_BE71();
}

/**
 * Decompiled function f__B527_0117_0014_BE71()
 *
 * @name f__B527_0117_0014_BE71
 * @implements B527:0117:0014:BE71 ()
 *
 * Called From: B527:0117:000B:D486
 */
void f__B527_0117_0014_BE71()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_addw(&emu_ax.x, emu_si);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x012B); f__B527_02CB_005E_E2DF();
	f__B527_012B_0017_23E2();
}

/**
 * Decompiled function f__B527_012B_0017_23E2()
 *
 * @name f__B527_012B_0017_23E2
 * @implements B527:012B:0017:23E2 ()
 *
 * Called From: B527:012B:0014:BE71
 */
void f__B527_012B_0017_23E2()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_testw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x8000);
	if (emu_flags.zf) { f__B527_0142_001B_A48B(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), 0x1);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), emu_ax.x);
	f__B527_0281_0009_09BD(); return;
}

/**
 * Decompiled function f__B527_0142_001B_A48B()
 *
 * @name f__B527_0142_001B_A48B
 * @implements B527:0142:001B:A48B ()
 *
 * Called From: B527:0132:0017:23E2
 */
void f__B527_0142_001B_A48B()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x16), emu_ax.x);
	emu_movw(&emu_cx.x, 0x4);
	emu_movw(&emu_bx.x, 0x2BB);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_cs, emu_bx.x,  0x0));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x16));
	if (emu_flags.zf) { f__B527_015D_0004_0494(); return; }
	emu_addws(&emu_bx.x, 0x2);
	if (--emu_cx.x != 0) { f__B527_014E_000F_9CF7(); return; }
	emu_ip = 0x01C7; emu_last_cs = 0xB527; emu_last_ip = 0x015B; emu_last_length = 0x001B; emu_last_crc = 0xA48B; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B527_014E_000F_9CF7()
 *
 * @name f__B527_014E_000F_9CF7
 * @implements B527:014E:000F:9CF7 ()
 *
 * Called From: B527:0159:001B:A48B
 * Called From: B527:0159:000F:9CF7
 */
void f__B527_014E_000F_9CF7()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_cs, emu_bx.x,  0x0));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x16));
	if (emu_flags.zf) { f__B527_015D_0004_0494(); return; }
	emu_addws(&emu_bx.x, 0x2);
	if (--emu_cx.x != 0) { f__B527_014E_000F_9CF7(); return; }
	f__B527_01C7_0008_EC82(); return;
}

/**
 * Decompiled function f__B527_015D_0004_0494()
 *
 * @name f__B527_015D_0004_0494
 * @implements B527:015D:0004:0494 ()
 *
 * Called From: B527:0154:001B:A48B
 * Called From: B527:0154:000F:9CF7
 */
void f__B527_015D_0004_0494()
{

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_cs, emu_bx.x,  0x8);
	switch (emu_ip) {
		case 0x0161: f__B527_0161_0003_073E(); return;
		case 0x0178: f__B527_0178_000D_DD43(); return;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0xB527; emu_last_ip = 0x015D; emu_last_length = 0x0004; emu_last_crc = 0x0494;
			emu_call();
			return;
	}
}

/**
 * Decompiled function f__B527_0161_0003_073E()
 *
 * @name f__B527_0161_0003_073E
 * @implements B527:0161:0003:073E ()
 *
 * Called From: B527:015D:0004:0494
 */
void f__B527_0161_0003_073E()
{
	f__B527_0281_0009_09BD(); return;
}

/**
 * Decompiled function f__B527_0178_000D_DD43()
 *
 * @name f__B527_0178_000D_DD43
 * @implements B527:0178:000D:DD43 ()
 *
 * Called From: B527:015D:0004:0494
 */
void f__B527_0178_000D_DD43()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), 0x1);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), 0x2B);
	f__B527_0281_0009_09BD(); return;
}

/**
 * Decompiled function f__B527_01C7_0008_EC82()
 *
 * @name f__B527_01C7_0008_EC82
 * @implements B527:01C7:0008:EC82 ()
 *
 * Called From: B527:015B:000F:9CF7
 */
void f__B527_01C7_0008_EC82()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_cs); emu_push(0x01CF); emu_cs = 0x29E8; f__29E8_0479_0009_7872();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3527) { ovl__3527(0xFF); }
	f__B527_01CF_0014_AB29();
}

/**
 * Decompiled function f__B527_01CF_0014_AB29()
 *
 * @name f__B527_01CF_0014_AB29
 * @implements B527:01CF:0014:AB29 ()
 *
 * Called From: B527:01CF:0008:EC82
 */
void f__B527_01CF_0014_AB29()
{
	emu_pop(&emu_cx.x);
	emu_andw(&emu_ax.x, 0xFF);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x20);
	if (!emu_flags.zf) { f__B527_01E3_0009_0595(); return; }
	emu_orw(&emu_di, emu_di);
	if (!emu_flags.zf) { f__B527_01E3_0009_0595(); return; }
	emu_ip = 0x027F; emu_last_cs = 0xB527; emu_last_ip = 0x01E0; emu_last_length = 0x0014; emu_last_crc = 0xAB29; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B527_01E3_0009_0595()
 *
 * @name f__B527_01E3_0009_0595
 * @implements B527:01E3:0009:0595 ()
 *
 * Called From: B527:01DA:0014:AB29
 * Called From: B527:01DE:0014:AB29
 */
void f__B527_01E3_0009_0595()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x20);
	if (!(emu_flags.sf != emu_flags.of)) { f__B527_01EC_0009_1211(); return; }
	f__B527_027F_0002_03AC(); return;
}

/**
 * Decompiled function f__B527_01EC_0009_1211()
 *
 * @name f__B527_01EC_0009_1211
 * @implements B527:01EC:0009:1211 ()
 *
 * Called From: B527:01E7:0009:0595
 */
void f__B527_01EC_0009_1211()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x7E);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__B527_01F5_0009_2A7F(); return; }
	f__B527_027F_0002_03AC(); return;
}

/**
 * Decompiled function f__B527_01F5_0009_2A7F()
 *
 * @name f__B527_01F5_0009_2A7F
 * @implements B527:01F5:0009:2A7F ()
 *
 * Called From: B527:01F0:0009:1211
 */
void f__B527_01F5_0009_2A7F()
{
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ss, emu_bp, -0x2));
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x01FE); emu_cs = 0x2521; f__2521_000F_0022_2292();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3527) { ovl__3527(0xFF); }
	f__B527_01FE_002A_89CC();
}

/**
 * Decompiled function f__B527_01FE_002A_89CC()
 *
 * @name f__B527_01FE_002A_89CC
 * @implements B527:01FE:002A:89CC ()
 *
 * Called From: B527:01FE:0009:2A7F
 */
void f__B527_01FE_002A_89CC()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_ax.x);
	emu_movw(&emu_ax.x, emu_si);
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xA));
	if (!(emu_flags.sf != emu_flags.of)) { emu_ip = 0x027F; emu_last_cs = 0xB527; emu_last_ip = 0x020A; emu_last_length = 0x002A; emu_last_crc = 0x89CC; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_di, emu_get_memory16(emu_ss, emu_bp,  0xA));
	if (!(emu_flags.sf != emu_flags.of)) { emu_ip = 0x027F; emu_last_cs = 0xB527; emu_last_ip = 0x020F; emu_last_length = 0x002A; emu_last_crc = 0x89CC; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ss, emu_bp, -0x2));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), emu_ax.l);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x1), 0x0);
	emu_incw(&emu_di);
	emu_push(emu_cs); emu_push(0x0228); emu_cs = 0x2B6C; f__2B6C_0137_0020_17E5();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3527) { ovl__3527(0xFF); }
	f__B527_0228_000E_3BE1();
}

/**
 * Decompiled function f__B527_0228_000E_3BE1()
 *
 * @name f__B527_0228_000E_3BE1
 * @implements B527:0228:000E:3BE1 ()
 *
 * Called From: B527:0228:002A:89CC
 */
void f__B527_0228_000E_3BE1()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_addw(&emu_ax.x, emu_si);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x0236); f__B527_02CB_005E_E2DF();
	f__B527_0236_0023_2326();
}

/**
 * Decompiled function f__B527_0236_0023_2326()
 *
 * @name f__B527_0236_0023_2326
 * @implements B527:0236:0023:2326 ()
 *
 * Called From: B527:0236:000E:3BE1
 */
void f__B527_0236_0023_2326()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_ax.x, 0x20);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6D59));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6D5B));
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x66D5));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_addw(&emu_ax.x, emu_si);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_cs); emu_push(0x0259); emu_cs = 0x10E4; f__10E4_1EF1_0040_E33D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3527) { ovl__3527(0xFF); }
	f__B527_0259_0008_F6BE();
}

/**
 * Decompiled function f__B527_0259_0008_F6BE()
 *
 * @name f__B527_0259_0008_F6BE
 * @implements B527:0259:0008:F6BE ()
 *
 * Called From: B527:0259:0023:2326
 */
void f__B527_0259_0008_F6BE()
{
	emu_addws(&emu_sp, 0xE);
	emu_push(emu_cs); emu_push(0x0261); emu_cs = 0x2B6C; f__2B6C_0169_001E_97C8();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3527) { ovl__3527(0xFF); }
	f__B527_0261_0012_B889();
}

/**
 * Decompiled function f__B527_0261_0012_B889()
 *
 * @name f__B527_0261_0012_B889
 * @implements B527:0261:0012:B889 ()
 *
 * Called From: B527:0261:0008:F6BE
 */
void f__B527_0261_0012_B889()
{
	emu_addw(&emu_si, emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_addw(&emu_ax.x, emu_si);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x0273); f__B527_02CB_005E_E2DF();
	f__B527_0273_000E_F18E();
}

/**
 * Decompiled function f__B527_0273_000E_F18E()
 *
 * @name f__B527_0273_000E_F18E
 * @implements B527:0273:000E:F18E ()
 *
 * Called From: B527:0273:0012:B889
 */
void f__B527_0273_000E_F18E()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0x0);
	f__B527_0281_0009_09BD(); return;
}

/**
 * Decompiled function f__B527_027F_0002_03AC()
 *
 * @name f__B527_027F_0002_03AC
 * @implements B527:027F:0002:03AC ()
 *
 * Called From: B527:01E9:0009:0595
 * Called From: B527:01F2:0009:1211
 */
void f__B527_027F_0002_03AC()
{
	f__B527_0281_0009_09BD(); return;
}

/**
 * Decompiled function f__B527_0281_0009_09BD()
 *
 * @name f__B527_0281_0009_09BD
 * @implements B527:0281:0009:09BD ()
 *
 * Called From: B527:00ED:0008:DD0E
 * Called From: B527:013F:0017:23E2
 * Called From: B527:0161:0003:073E
 * Called From: B527:0182:000D:DD43
 * Called From: B527:027F:0002:03AC
 * Called From: B527:027F:000E:F18E
 */
void f__B527_0281_0009_09BD()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x10), 0x0);
	if (!emu_flags.zf) { f__B527_028A_0009_7823(); return; }
	f__B527_00F0_000B_4061(); return;
}

/**
 * Decompiled function f__B527_028A_0009_7823()
 *
 * @name f__B527_028A_0009_7823
 * @implements B527:028A:0009:7823 ()
 *
 * Called From: B527:0285:0009:09BD
 */
void f__B527_028A_0009_7823()
{
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0293); emu_cs = 0x29E8; f__29E8_04EB_0011_D0DB();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3527) { ovl__3527(0xFF); }
	f__B527_0293_000A_0A62();
}

/**
 * Decompiled function f__B527_0293_000A_0A62()
 *
 * @name f__B527_0293_000A_0A62
 * @implements B527:0293:000A:0A62 ()
 *
 * Called From: B527:0293:0009:7823
 */
void f__B527_0293_000A_0A62()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_ax.x, 0x2000);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x029D); emu_cs = 0x29E8; f__29E8_04AF_003C_3CE9();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3527) { ovl__3527(0xFF); }
	f__B527_029D_0009_59F6();
}

/**
 * Decompiled function f__B527_029D_0009_59F6()
 *
 * @name f__B527_029D_0009_59F6
 * @implements B527:029D:0009:59F6 ()
 *
 * Called From: B527:029D:000A:0A62
 */
void f__B527_029D_0009_59F6()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs); emu_push(0x02A6); emu_cs = 0x07AE; f__07AE_0000_00DF_386F();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3527) { ovl__3527(0xFF); }
	f__B527_02A6_0009_5CEA();
}

/**
 * Decompiled function f__B527_02A6_0009_5CEA()
 *
 * @name f__B527_02A6_0009_5CEA
 * @implements B527:02A6:0009:5CEA ()
 *
 * Called From: B527:02A6:0009:59F6
 */
void f__B527_02A6_0009_5CEA()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_push(emu_cs); emu_push(0x02AF); emu_cs = 0x2598; f__2598_0000_0017_D681();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3527) { ovl__3527(0xFF); }
	f__B527_02AF_0006_077C();
}

/**
 * Decompiled function f__B527_02AF_0006_077C()
 *
 * @name f__B527_02AF_0006_077C
 * @implements B527:02AF:0006:077C ()
 *
 * Called From: B527:02AF:0009:5CEA
 */
void f__B527_02AF_0006_077C()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xE));
	f__B527_02B5_0006_137A(); return;
}

/**
 * Decompiled function f__B527_02B5_0006_137A()
 *
 * @name f__B527_02B5_0006_137A
 * @implements B527:02B5:0006:137A ()
 *
 * Called From: B527:02B3:0006:077C
 */
void f__B527_02B5_0006_137A()
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
 * Decompiled function f__B527_02CB_005E_E2DF()
 *
 * @name f__B527_02CB_005E_E2DF
 * @implements B527:02CB:005E:E2DF ()
 *
 * Called From: B527:00DE:0012:B9DD
 * Called From: B527:0128:0014:BE71
 * Called From: B527:0233:000E:3BE1
 * Called From: B527:0270:0012:B889
 */
void f__B527_02CB_005E_E2DF()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_di, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_orw(&emu_di, emu_di);
	if (!emu_flags.zf) { f__B527_02EC_003D_49AE(); return; }
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x2C60), 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x2C5E), 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x2C62), 0x1);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x2C60));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x2C5E));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76AE));
	if (!(emu_flags.cf || emu_flags.zf)) { emu_ip = 0x0367; emu_last_cs = 0xB527; emu_last_ip = 0x02F7; emu_last_length = 0x005E; emu_last_crc = 0xE2DF; emu_call(); return; } // Jump does not resolve
	if (!emu_flags.zf) { f__B527_0301_0028_279D(); return; }
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76AC));
	if (!(emu_flags.cf || emu_flags.zf)) { emu_ip = 0x0367; emu_last_cs = 0xB527; emu_last_ip = 0x02FF; emu_last_length = 0x005E; emu_last_crc = 0xE2DF; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x2C62));
	emu_negw(&emu_ax.x, emu_ax.x);
	emu_sbbw(&emu_ax.x, emu_ax.x);
	emu_incw(&emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x2C62), emu_ax.x);
	emu_orw(&emu_di, emu_di);
	if (emu_flags.zf) { f__B527_0324_0005_11DE(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76AE));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76AC));
	emu_addws(&emu_dx.x, 0x14);
	emu_adcw(&emu_ax.x, 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x2C60), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x2C5E), emu_dx.x);
	emu_push(emu_cs); emu_push(0x0329); emu_cs = 0x2B6C; emu_ip = 0x0460; emu_last_cs = 0xB527; emu_last_ip = 0x0324; emu_last_length = 0x005E; emu_last_crc = 0xE2DF; emu_call(); // Jump does not resolve
	f__B527_0329_000C_3A1A();
}

/**
 * Decompiled function f__B527_02EC_003D_49AE()
 *
 * @name f__B527_02EC_003D_49AE
 * @implements B527:02EC:003D:49AE ()
 *
 * Called From: B527:02D8:005E:E2DF
 */
void f__B527_02EC_003D_49AE()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x2C60));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x2C5E));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76AE));
	if (!(emu_flags.cf || emu_flags.zf)) { emu_ip = 0x0367; emu_last_cs = 0xB527; emu_last_ip = 0x02F7; emu_last_length = 0x003D; emu_last_crc = 0x49AE; emu_call(); return; } // Jump does not resolve
	if (!emu_flags.zf) { f__B527_0301_0028_279D(); return; }
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76AC));
	if (!(emu_flags.cf || emu_flags.zf)) { f__B527_0367_0004_07E2(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x2C62));
	emu_negw(&emu_ax.x, emu_ax.x);
	emu_sbbw(&emu_ax.x, emu_ax.x);
	emu_incw(&emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x2C62), emu_ax.x);
	emu_orw(&emu_di, emu_di);
	if (emu_flags.zf) { emu_ip = 0x0324; emu_last_cs = 0xB527; emu_last_ip = 0x030E; emu_last_length = 0x003D; emu_last_crc = 0x49AE; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76AE));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76AC));
	emu_addws(&emu_dx.x, 0x14);
	emu_adcw(&emu_ax.x, 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x2C60), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x2C5E), emu_dx.x);
	emu_push(emu_cs); emu_push(0x0329); emu_cs = 0x2B6C; f__2B6C_0137_0020_17E5();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3527) { ovl__3527(0xFF); }
	f__B527_0329_000C_3A1A();
}

/**
 * Decompiled function f__B527_0301_0028_279D()
 *
 * @name f__B527_0301_0028_279D
 * @implements B527:0301:0028:279D ()
 *
 * Called From: B527:02F9:003D:49AE
 * Called From: B527:02F9:005E:E2DF
 */
void f__B527_0301_0028_279D()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x2C62));
	emu_negw(&emu_ax.x, emu_ax.x);
	emu_sbbw(&emu_ax.x, emu_ax.x);
	emu_incw(&emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x2C62), emu_ax.x);
	emu_orw(&emu_di, emu_di);
	if (emu_flags.zf) { f__B527_0324_0005_11DE(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76AE));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76AC));
	emu_addws(&emu_dx.x, 0x14);
	emu_adcw(&emu_ax.x, 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x2C60), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x2C5E), emu_dx.x);
	emu_push(emu_cs); emu_push(0x0329); emu_cs = 0x2B6C; f__2B6C_0137_0020_17E5();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3527) { ovl__3527(0xFF); }
	f__B527_0329_000C_3A1A();
}

/**
 * Decompiled function f__B527_0324_0005_11DE()
 *
 * @name f__B527_0324_0005_11DE
 * @implements B527:0324:0005:11DE ()
 *
 * Called From: B527:030E:0028:279D
 * Called From: B527:030E:005E:E2DF
 */
void f__B527_0324_0005_11DE()
{
	emu_push(emu_cs); emu_push(0x0329); emu_cs = 0x2B6C; f__2B6C_0137_0020_17E5();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3527) { ovl__3527(0xFF); }
	f__B527_0329_000C_3A1A();
}

/**
 * Decompiled function f__B527_0329_000C_3A1A()
 *
 * @name f__B527_0329_000C_3A1A
 * @implements B527:0329:000C:3A1A ()
 *
 * Called From: B527:0329:0028:279D
 * Called From: B527:0329:003D:49AE
 * Called From: B527:0329:0005:11DE
 */
void f__B527_0329_000C_3A1A()
{
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x2C62), 0x0);
	if (emu_flags.zf) { f__B527_0335_0015_5645(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x6D5B));
	f__B527_0338_0012_449D(); return;
}

/**
 * Decompiled function f__B527_0335_0015_5645()
 *
 * @name f__B527_0335_0015_5645
 * @implements B527:0335:0015:5645 ()
 *
 * Called From: B527:032E:000C:3A1A
 */
void f__B527_0335_0015_5645()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x6D59));
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00, -0x66D5));
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00, -0x66CF));
	emu_decw(&emu_ax.x);
	emu_push(emu_ax.x);
	emu_movb(&emu_ax.l, 0x57);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x034A); emu_cs = 0x2521; f__2521_000F_0022_2292();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3527) { ovl__3527(0xFF); }
	f__B527_034A_0015_920C();
}

/**
 * Decompiled function f__B527_0338_0012_449D()
 *
 * @name f__B527_0338_0012_449D
 * @implements B527:0338:0012:449D ()
 *
 * Called From: B527:0333:000C:3A1A
 */
void f__B527_0338_0012_449D()
{
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00, -0x66D5));
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00, -0x66CF));
	emu_decw(&emu_ax.x);
	emu_push(emu_ax.x);
	emu_movb(&emu_ax.l, 0x57);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x034A); emu_cs = 0x2521; f__2521_000F_0022_2292();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3527) { ovl__3527(0xFF); }
	f__B527_034A_0015_920C();
}

/**
 * Decompiled function f__B527_034A_0015_920C()
 *
 * @name f__B527_034A_0015_920C
 * @implements B527:034A:0015:920C ()
 *
 * Called From: B527:034A:0015:5645
 * Called From: B527:034A:0012:449D
 */
void f__B527_034A_0015_920C()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_dx.x, emu_si);
	emu_addw(&emu_dx.x, emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x66D5));
	emu_push(emu_si);
	emu_movw(&emu_ax.x, 0x353F);
	emu_movw(&emu_es, emu_ax.x);

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_es, 0x00,  0x6668);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_es, 0x00,  0x666A);
	emu_push(0x035F);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A60D31: f__22A6_0D31_0015_D6F0(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0xB527; emu_last_ip = 0x035A; emu_last_length = 0x0015; emu_last_crc = 0x920C;
			emu_call();
			return;
	}
	f__B527_035F_0008_F7BE();
}

/**
 * Decompiled function f__B527_035F_0008_F7BE()
 *
 * @name f__B527_035F_0008_F7BE
 * @implements B527:035F:0008:F7BE ()
 *
 * Called From: B527:035F:0015:920C
 */
void f__B527_035F_0008_F7BE()
{
	emu_addws(&emu_sp, 0xA);
	emu_push(emu_cs); emu_push(0x0367); emu_cs = 0x2B6C; f__2B6C_0169_001E_97C8();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3527) { ovl__3527(0xFF); }
	f__B527_0367_0004_07E2();
}

/**
 * Decompiled function f__B527_0367_0004_07E2()
 *
 * @name f__B527_0367_0004_07E2
 * @implements B527:0367:0004:07E2 ()
 *
 * Called From: B527:02FF:003D:49AE
 * Called From: B527:0367:0008:F7BE
 */
void f__B527_0367_0004_07E2()
{
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

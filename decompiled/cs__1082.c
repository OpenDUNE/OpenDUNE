/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__1082_000F_0012_A3C7()
 *
 * @name f__1082_000F_0012_A3C7
 * @implements 1082:000F:0012:A3C7 ()
 *
 * Called From: B4C4:04D1:0005:7CF0
 * Called From: B4F2:033B:0005:7CF0
 * Called From: B511:00A9:001D:9C25
 */
void f__1082_000F_0012_A3C7()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x8);
	emu_push(emu_si);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_cs); emu_push(0x0021); emu_cs = 0x10BE; f__10BE_01E2_0027_6596();
	f__1082_0021_0002_CA3A();
}

/**
 * Decompiled function f__1082_0021_0002_CA3A()
 *
 * @name f__1082_0021_0002_CA3A
 * @implements 1082:0021:0002:CA3A ()
 *
 * Called From: 1082:0021:0012:A3C7
 */
void f__1082_0021_0002_CA3A()
{
	f__1082_0037_001A_16D1(); return;
}

/**
 * Decompiled function f__1082_0023_0014_E02C()
 *
 * @name f__1082_0023_0014_E02C
 * @implements 1082:0023:0014:E02C ()
 *
 * Called From: 1082:0045:001A:16D1
 */
void f__1082_0023_0014_E02C()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x6), 0x0);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_cs); emu_push(0x0037); emu_cs = 0x10BE; f__10BE_020F_004E_633B();
	f__1082_0037_001A_16D1();
}

/**
 * Decompiled function f__1082_0037_001A_16D1()
 *
 * @name f__1082_0037_001A_16D1
 * @implements 1082:0037:001A:16D1 ()
 *
 * Called From: 1082:0021:0002:CA3A
 * Called From: 1082:0037:0014:E02C
 */
void f__1082_0037_001A_16D1()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	if (!emu_flags.zf) { f__1082_0023_0014_E02C(); return; }
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x35F8), 0x0);
	emu_xorw(&emu_si, emu_si);
	f__1082_008E_000A_018A(); return;
}

/**
 * Decompiled function f__1082_0051_0047_3D25()
 *
 * @name f__1082_0051_0047_3D25
 * @implements 1082:0051:0047:3D25 ()
 *
 * Called From: 1082:0091:000A:018A
 * Called From: 1082:0091:0047:3D25
 * Called From: 1082:0091:000B:C182
 */
void f__1082_0051_0047_3D25()
{
	emu_movw(&emu_ax.x, emu_si);
	emu_movw(&emu_dx.x, 0x58);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x35F6));
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00,  0x35F4));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_bx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), 0x1);
	if (emu_flags.zf) { f__1082_008D_000B_C182(); return; }
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00,  0x35F8));
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_get_memory16(emu_ds, emu_bx.x,  0x8624), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, emu_bx.x,  0x8622), emu_dx.x);
	emu_incw(&emu_get_memory16(emu_ds, 0x00,  0x35F8));
	emu_incw(&emu_si);
	emu_cmpws(&emu_si, 0x52);
	if ((emu_flags.sf != emu_flags.of)) { f__1082_0051_0047_3D25(); return; }
	emu_pop(&emu_si);
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__1082_008D_000B_C182()
 *
 * @name f__1082_008D_000B_C182
 * @implements 1082:008D:000B:C182 ()
 *
 * Called From: 1082:0071:0047:3D25
 */
void f__1082_008D_000B_C182()
{
	emu_incw(&emu_si);
	emu_cmpws(&emu_si, 0x52);
	if ((emu_flags.sf != emu_flags.of)) { f__1082_0051_0047_3D25(); return; }
	emu_pop(&emu_si);
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__1082_008E_000A_018A()
 *
 * @name f__1082_008E_000A_018A
 * @implements 1082:008E:000A:018A ()
 *
 * Called From: 1082:004F:001A:16D1
 */
void f__1082_008E_000A_018A()
{
	emu_cmpws(&emu_si, 0x52);
	if ((emu_flags.sf != emu_flags.of)) { f__1082_0051_0047_3D25(); return; }
	emu_pop(&emu_si);
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__1082_0098_001C_39E2()
 *
 * @name f__1082_0098_001C_39E2
 * @implements 1082:0098:001C:39E2 ()
 *
 * Called From: B4B8:1B12:0013:0075
 * Called From: B511:0AA5:000D:8BD5
 */
void f__1082_0098_001C_39E2()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x35F8), 0x0);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_flags.zf) { f__1082_00BD_001D_48CA(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x00B4); emu_cs = 0x2B0E; f__2B0E_00D0_0022_EC76();
	f__1082_00B4_0026_CE00();
}

/**
 * Decompiled function f__1082_00B4_0026_CE00()
 *
 * @name f__1082_00B4_0026_CE00
 * @implements 1082:00B4:0026:CE00 ()
 *
 * Called From: 1082:00B4:001C:39E2
 */
void f__1082_00B4_0026_CE00()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x35F6), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x35F4), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x35F4));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x35F6));
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x00DD; emu_last_cs = 0x1082; emu_last_ip = 0x00C4; emu_last_length = 0x0026; emu_last_crc = 0xCE00; emu_call(); return; }
	emu_movw(&emu_ax.x, 0x1C30);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x35F6));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x35F4));
	emu_push(emu_cs); emu_push(0x00DA); emu_cs = 0x01F7; f__01F7_2947_0014_02B8();
	f__1082_00DA_000A_A6BE();
}

/**
 * Decompiled function f__1082_00BD_001D_48CA()
 *
 * @name f__1082_00BD_001D_48CA
 * @implements 1082:00BD:001D:48CA ()
 *
 * Called From: 1082:00A7:001C:39E2
 */
void f__1082_00BD_001D_48CA()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x35F4));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x35F6));
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x00DD; emu_last_cs = 0x1082; emu_last_ip = 0x00C4; emu_last_length = 0x001D; emu_last_crc = 0x48CA; emu_call(); return; }
	emu_movw(&emu_ax.x, 0x1C30);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x35F6));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x35F4));
	emu_push(emu_cs); emu_push(0x00DA); emu_cs = 0x01F7; f__01F7_2947_0014_02B8();
	f__1082_00DA_000A_A6BE();
}

/**
 * Decompiled function f__1082_00DA_000A_A6BE()
 *
 * @name f__1082_00DA_000A_A6BE
 * @implements 1082:00DA:000A:A6BE ()
 *
 * Called From: 1082:00DA:0026:CE00
 * Called From: 1082:00DA:001D:48CA
 */
void f__1082_00DA_000A_A6BE()
{
	emu_addws(&emu_sp, 0x8);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_movw(&emu_ax.x, 0x1C30);
	f__1082_00E4_0002_2597(); return;
}

/**
 * Decompiled function f__1082_00E4_0002_2597()
 *
 * @name f__1082_00E4_0002_2597
 * @implements 1082:00E4:0002:2597 ()
 *
 * Called From: 1082:00E2:000A:A6BE
 */
void f__1082_00E4_0002_2597()
{
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__1082_00FD_003A_D7E0()
 *
 * @name f__1082_00FD_003A_D7E0
 * @implements 1082:00FD:003A:D7E0 ()
 *
 * Called From: 0972:0126:006E:C639
 * Called From: 0972:0126:0012:F490
 * Called From: 0972:0126:0040:E14D
 * Called From: 0972:0126:002B:22A3
 * Called From: 0972:0126:0059:A980
 * Called From: 0972:0126:0086:1AD2
 * Called From: 0C3A:13DA:0022:D6F0
 * Called From: 0C3A:1FAF:0022:E6F2
 * Called From: 0C3A:2141:0016:7245
 * Called From: 0C3A:2141:0013:8247
 * Called From: 0C3A:2337:003A:85DA
 * Called From: 10E4:2191:0015:A299
 * Called From: 1423:0076:001A:9364
 * Called From: 1423:0AC5:001A:235A
 * Called From: 1423:0DE7:0029:D1E2
 * Called From: 176C:0DC0:000E:DA27
 * Called From: 176C:25DA:000E:DA27
 * Called From: 176C:29EC:000E:DA27
 * Called From: 1A34:21F5:001A:547E
 * Called From: 1A34:22C3:0010:8B9B
 * Called From: 1A34:335F:000E:DA27
 * Called From: 1A34:33E4:000E:DA27
 * Called From: 1A34:3700:0022:7EB7
 * Called From: B50B:0435:001E:0374
 * Called From: B511:01B3:0023:CF90
 * Called From: B518:0F72:0012:7BEF
 */
void f__1082_00FD_003A_D7E0()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (!emu_flags.zf) { f__1082_0110_0027_2707(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0x8), emu_ds);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0x6), 0x861C);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x0), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x2), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), 0xFFFF);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x0137); f__1082_013D_0038_4AF1();
	f__1082_0137_0004_5B1F();
}

/**
 * Decompiled function f__1082_0110_0027_2707()
 *
 * @name f__1082_0110_0027_2707
 * @implements 1082:0110:0027:2707 ()
 *
 * Called From: 1082:0106:003A:D7E0
 */
void f__1082_0110_0027_2707()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x0), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x2), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), 0xFFFF);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x0137); f__1082_013D_0038_4AF1();
	f__1082_0137_0004_5B1F();
}

/**
 * Decompiled function f__1082_0137_0004_5B1F()
 *
 * @name f__1082_0137_0004_5B1F
 * @implements 1082:0137:0004:5B1F ()
 *
 * Called From: 1082:0137:003A:D7E0
 * Called From: 1082:0137:0027:2707
 */
void f__1082_0137_0004_5B1F()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	f__1082_013B_0002_2597(); return;
}

/**
 * Decompiled function f__1082_013B_0002_2597()
 *
 * @name f__1082_013B_0002_2597
 * @implements 1082:013B:0002:2597 ()
 *
 * Called From: 1082:0139:0004:5B1F
 */
void f__1082_013B_0002_2597()
{
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__1082_013D_0038_4AF1()
 *
 * @name f__1082_013D_0038_4AF1
 * @implements 1082:013D:0038:4AF1 ()
 *
 * Called From: 0972:0A49:000A:DEF0
 * Called From: 0972:0A49:0012:2599
 * Called From: 0C3A:140C:000B:166D
 * Called From: 0C3A:140C:0011:5D2C
 * Called From: 0C3A:2060:000B:166D
 * Called From: 0C3A:2060:0015:64A0
 * Called From: 0C3A:21E9:000B:166D
 * Called From: 0C3A:21E9:000E:34E7
 * Called From: 0C3A:23FC:000B:166D
 * Called From: 0C3A:23FC:002B:25DC
 * Called From: 1082:0134:0027:2707
 * Called From: 1082:0134:003A:D7E0
 * Called From: 10E4:21AE:000D:DBFF
 * Called From: 1423:00AE:000B:166D
 * Called From: 1423:0E10:0024:7F0A
 * Called From: 176C:0E6D:000B:166D
 * Called From: 176C:261B:000B:166D
 * Called From: 176C:2A51:0026:C654
 * Called From: 176C:2A51:0019:4CA8
 * Called From: 176C:2A51:000B:166D
 * Called From: 1A34:223A:000B:166D
 * Called From: 1A34:33AF:000B:166D
 * Called From: 1A34:33AF:0019:4CA8
 * Called From: 1A34:342A:0019:4CA8
 * Called From: 1A34:342A:0026:4EDC
 * Called From: 1A34:342A:000B:166D
 * Called From: 1A34:3735:000A:DEC8
 * Called From: B50B:0483:000E:3487
 * Called From: B511:02EC:000B:166D
 * Called From: B511:02EC:0023:44EC
 * Called From: B518:0FA3:002C:5E19
 */
void f__1082_013D_0038_4AF1()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x6);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (!emu_flags.zf) { f__1082_0155_0020_8556(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0x8), emu_ds);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0x6), 0x861C);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_di, emu_get_memory16(emu_es, emu_bx.x,  0x2));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_si, emu_get_memory16(emu_es, emu_bx.x,  0x4));
	emu_cmpw(&emu_si, emu_get_memory16(emu_ds, 0x00,  0x35F8));
	if (!(emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x0173; emu_last_cs = 0x1082; emu_last_ip = 0x0170; emu_last_length = 0x0038; emu_last_crc = 0x4AF1; emu_call(); return; }
	emu_incw(&emu_si);
	f__1082_01CF_0013_4D5B(); return;
}

/**
 * Decompiled function f__1082_0155_0020_8556()
 *
 * @name f__1082_0155_0020_8556
 * @implements 1082:0155:0020:8556 ()
 *
 * Called From: 1082:014B:0038:4AF1
 */
void f__1082_0155_0020_8556()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_di, emu_get_memory16(emu_es, emu_bx.x,  0x2));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_si, emu_get_memory16(emu_es, emu_bx.x,  0x4));
	emu_cmpw(&emu_si, emu_get_memory16(emu_ds, 0x00,  0x35F8));
	if (!(emu_flags.sf != emu_flags.of)) { f__1082_0173_0002_ED3A(); return; }
	emu_incw(&emu_si);
	f__1082_01CF_0013_4D5B(); return;
}

/**
 * Decompiled function f__1082_0173_0002_ED3A()
 *
 * @name f__1082_0173_0002_ED3A
 * @implements 1082:0173:0002:ED3A ()
 *
 * Called From: 1082:0170:0020:8556
 */
void f__1082_0173_0002_ED3A()
{
	f__1082_01CF_0013_4D5B(); return;
}

/**
 * Decompiled function f__1082_0175_0059_CC2D()
 *
 * @name f__1082_0175_0059_CC2D
 * @implements 1082:0175:0059:CC2D ()
 *
 * Called From: 1082:01D3:0013:4D5B
 * Called From: 1082:01D3:0014:2D5F
 */
void f__1082_0175_0059_CC2D()
{
	emu_movw(&emu_bx.x, emu_si);
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, emu_bx.x,  0x8624));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, emu_bx.x,  0x8622));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_dx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), 0x4);
	if (emu_flags.zf) { f__1082_019B_0033_6811(); return; }
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x38BC), 0x0);
	if (emu_flags.zf) { f__1082_01CE_0014_2D5F(); return; }
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0xFF);
	if (emu_flags.zf) { f__1082_01AE_0020_C80A(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x8));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	if (!emu_flags.zf) { f__1082_01CE_0014_2D5F(); return; }
	emu_cmpws(&emu_di, 0xFF);
	if (emu_flags.zf) { f__1082_01BF_000F_4483(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x2));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_cmpw(&emu_ax.x, emu_di);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x01CE; emu_last_cs = 0x1082; emu_last_ip = 0x01BD; emu_last_length = 0x0059; emu_last_crc = 0xCC2D; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), emu_si);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	/* Unresolved jump */ emu_ip = 0x01E2; emu_last_cs = 0x1082; emu_last_ip = 0x01CC; emu_last_length = 0x0059; emu_last_crc = 0xCC2D; emu_call();
}

/**
 * Decompiled function f__1082_019B_0033_6811()
 *
 * @name f__1082_019B_0033_6811
 * @implements 1082:019B:0033:6811 ()
 *
 * Called From: 1082:0192:0059:CC2D
 */
void f__1082_019B_0033_6811()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0xFF);
	if (emu_flags.zf) { f__1082_01AE_0020_C80A(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x8));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	if (!emu_flags.zf) { f__1082_01CE_0014_2D5F(); return; }
	emu_cmpws(&emu_di, 0xFF);
	if (emu_flags.zf) { f__1082_01BF_000F_4483(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x2));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_cmpw(&emu_ax.x, emu_di);
	if (!emu_flags.zf) { f__1082_01CE_0014_2D5F(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), emu_si);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	f__1082_01E2_0006_F7CE(); return;
}

/**
 * Decompiled function f__1082_01AE_0020_C80A()
 *
 * @name f__1082_01AE_0020_C80A
 * @implements 1082:01AE:0020:C80A ()
 *
 * Called From: 1082:019F:0033:6811
 * Called From: 1082:019F:0059:CC2D
 */
void f__1082_01AE_0020_C80A()
{
	emu_cmpws(&emu_di, 0xFF);
	if (emu_flags.zf) { f__1082_01BF_000F_4483(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x2));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_cmpw(&emu_ax.x, emu_di);
	if (!emu_flags.zf) { f__1082_01CE_0014_2D5F(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), emu_si);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	/* Unresolved jump */ emu_ip = 0x01E2; emu_last_cs = 0x1082; emu_last_ip = 0x01CC; emu_last_length = 0x0020; emu_last_crc = 0xC80A; emu_call();
}

/**
 * Decompiled function f__1082_01BF_000F_4483()
 *
 * @name f__1082_01BF_000F_4483
 * @implements 1082:01BF:000F:4483 ()
 *
 * Called From: 1082:01B1:0020:C80A
 * Called From: 1082:01B1:0033:6811
 * Called From: 1082:01B1:0059:CC2D
 */
void f__1082_01BF_000F_4483()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), emu_si);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	f__1082_01E2_0006_F7CE(); return;
}

/**
 * Decompiled function f__1082_01CC_0002_CA3A()
 *
 * @name f__1082_01CC_0002_CA3A
 * @implements 1082:01CC:0002:CA3A ()
 *
 * Called From: 1082:01E0:0013:4D5B
 * Called From: 1082:01E0:0014:2D5F
 */
void f__1082_01CC_0002_CA3A()
{
	f__1082_01E2_0006_F7CE(); return;
}

/**
 * Decompiled function f__1082_01CE_0014_2D5F()
 *
 * @name f__1082_01CE_0014_2D5F
 * @implements 1082:01CE:0014:2D5F ()
 *
 * Called From: 1082:0199:0059:CC2D
 * Called From: 1082:01AC:0033:6811
 * Called From: 1082:01AC:0059:CC2D
 * Called From: 1082:01BD:0033:6811
 * Called From: 1082:01BD:0020:C80A
 */
void f__1082_01CE_0014_2D5F()
{
	emu_incw(&emu_si);
	emu_cmpw(&emu_si, emu_get_memory16(emu_ds, 0x00,  0x35F8));
	if ((emu_flags.sf != emu_flags.of)) { f__1082_0175_0059_CC2D(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), emu_si);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__1082_01CC_0002_CA3A(); return;
}

/**
 * Decompiled function f__1082_01CF_0013_4D5B()
 *
 * @name f__1082_01CF_0013_4D5B
 * @implements 1082:01CF:0013:4D5B ()
 *
 * Called From: 1082:0173:0020:8556
 * Called From: 1082:0173:0038:4AF1
 * Called From: 1082:0173:0002:ED3A
 */
void f__1082_01CF_0013_4D5B()
{
	emu_cmpw(&emu_si, emu_get_memory16(emu_ds, 0x00,  0x35F8));
	if ((emu_flags.sf != emu_flags.of)) { f__1082_0175_0059_CC2D(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), emu_si);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__1082_01CC_0002_CA3A(); return;
}

/**
 * Decompiled function f__1082_01E2_0006_F7CE()
 *
 * @name f__1082_01E2_0006_F7CE
 * @implements 1082:01E2:0006:F7CE ()
 *
 * Called From: 1082:01CC:000F:4483
 * Called From: 1082:01CC:0002:CA3A
 * Called From: 1082:01CC:0033:6811
 */
void f__1082_01E2_0006_F7CE()
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
 * Decompiled function f__1082_01E8_0020_FFB9()
 *
 * @name f__1082_01E8_0020_FFB9
 * @implements 1082:01E8:0020:FFB9 ()
 *
 * Called From: 0C3A:002D:0029:BF94
 */
void f__1082_01E8_0020_FFB9()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x4);
	emu_push(emu_si);
	emu_movw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x0);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x35F4));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x35F6));
	if (!emu_flags.zf) { f__1082_0208_0013_DB66(); return; }
	/* Unresolved jump */ emu_ip = 0x0318; emu_last_cs = 0x1082; emu_last_ip = 0x0205; emu_last_length = 0x0020; emu_last_crc = 0xFFB9; emu_call();
}

/**
 * Decompiled function f__1082_0208_0013_DB66()
 *
 * @name f__1082_0208_0013_DB66
 * @implements 1082:0208:0013:DB66 ()
 *
 * Called From: 1082:0203:0020:FFB9
 */
void f__1082_0208_0013_DB66()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_orw(&emu_ax.x, emu_ax.x);
	if (emu_flags.zf) { f__1082_021B_001C_EC5F(); return; }
	emu_cmpw(&emu_ax.x, 0x1);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0237; emu_last_cs = 0x1082; emu_last_ip = 0x0212; emu_last_length = 0x0013; emu_last_crc = 0xDB66; emu_call(); return; }
	emu_cmpw(&emu_ax.x, 0xE);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x023C; emu_last_cs = 0x1082; emu_last_ip = 0x0217; emu_last_length = 0x0013; emu_last_crc = 0xDB66; emu_call(); return; }
	f__1082_0241_0009_5317(); return;
}

/**
 * Decompiled function f__1082_021B_001C_EC5F()
 *
 * @name f__1082_021B_001C_EC5F
 * @implements 1082:021B:001C:EC5F ()
 *
 * Called From: 1082:020D:0013:DB66
 */
void f__1082_021B_001C_EC5F()
{
	emu_movw(&emu_si, 0x51);
	emu_movw(&emu_ax.x, emu_si);
	emu_movw(&emu_dx.x, 0x58);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x35F6));
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00,  0x35F4));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_bx.x);
	f__1082_02AE_001A_47E1(); return;
}

/**
 * Decompiled function f__1082_0241_0009_5317()
 *
 * @name f__1082_0241_0009_5317
 * @implements 1082:0241:0009:5317 ()
 *
 * Called From: 1082:0219:0013:DB66
 */
void f__1082_0241_0009_5317()
{
	emu_cmpws(&emu_si, 0xFF);
	if (!emu_flags.zf) { f__1082_0280_002E_B19B(); return; }
	emu_xorw(&emu_si, emu_si);
	f__1082_0279_0007_F4C0(); return;
}

/**
 * Decompiled function f__1082_024A_002E_B11B()
 *
 * @name f__1082_024A_002E_B11B
 * @implements 1082:024A:002E:B11B ()
 *
 * Called From: 1082:027C:0007:F4C0
 * Called From: 1082:027C:0008:B2C0
 */
void f__1082_024A_002E_B11B()
{
	emu_movw(&emu_ax.x, emu_si);
	emu_movw(&emu_dx.x, 0x58);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x35F4));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), 0x1);
	if (!emu_flags.zf) { f__1082_0278_0008_B2C0(); return; }
	emu_movw(&emu_ax.x, emu_si);
	emu_movw(&emu_dx.x, 0x58);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x35F6));
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00,  0x35F4));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_bx.x);
	f__1082_027E_0002_D63A(); return;
}

/**
 * Decompiled function f__1082_0278_0008_B2C0()
 *
 * @name f__1082_0278_0008_B2C0
 * @implements 1082:0278:0008:B2C0 ()
 *
 * Called From: 1082:025D:002E:B11B
 */
void f__1082_0278_0008_B2C0()
{
	emu_incw(&emu_si);
	emu_cmpws(&emu_si, 0x4F);
	if ((emu_flags.sf != emu_flags.of)) { f__1082_024A_002E_B11B(); return; }
	/* Unresolved jump */ emu_ip = 0x02AC; emu_last_cs = 0x1082; emu_last_ip = 0x027E; emu_last_length = 0x0008; emu_last_crc = 0xB2C0; emu_call();
}

/**
 * Decompiled function f__1082_0279_0007_F4C0()
 *
 * @name f__1082_0279_0007_F4C0
 * @implements 1082:0279:0007:F4C0 ()
 *
 * Called From: 1082:0248:0009:5317
 */
void f__1082_0279_0007_F4C0()
{
	emu_cmpws(&emu_si, 0x4F);
	if ((emu_flags.sf != emu_flags.of)) { f__1082_024A_002E_B11B(); return; }
	/* Unresolved jump */ emu_ip = 0x02AC; emu_last_cs = 0x1082; emu_last_ip = 0x027E; emu_last_length = 0x0007; emu_last_crc = 0xF4C0; emu_call();
}

/**
 * Decompiled function f__1082_027E_0002_D63A()
 *
 * @name f__1082_027E_0002_D63A
 * @implements 1082:027E:0002:D63A ()
 *
 * Called From: 1082:0276:002E:B11B
 */
void f__1082_027E_0002_D63A()
{
	f__1082_02AC_0002_C03A(); return;
}

/**
 * Decompiled function f__1082_0280_002E_B19B()
 *
 * @name f__1082_0280_002E_B19B
 * @implements 1082:0280:002E:B19B ()
 *
 * Called From: 1082:0244:0009:5317
 */
void f__1082_0280_002E_B19B()
{
	emu_movw(&emu_ax.x, emu_si);
	emu_movw(&emu_dx.x, 0x58);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x35F4));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), 0x1);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x02AC; emu_last_cs = 0x1082; emu_last_ip = 0x0293; emu_last_length = 0x002E; emu_last_crc = 0xB19B; emu_call(); return; }
	emu_movw(&emu_ax.x, emu_si);
	emu_movw(&emu_dx.x, 0x58);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x35F6));
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00,  0x35F4));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_bx.x);
	f__1082_02AE_001A_47E1(); return;
}

/**
 * Decompiled function f__1082_02AC_0002_C03A()
 *
 * @name f__1082_02AC_0002_C03A
 * @implements 1082:02AC:0002:C03A ()
 *
 * Called From: 1082:027E:0002:D63A
 */
void f__1082_02AC_0002_C03A()
{
	f__1082_02AE_001A_47E1(); return;
}

/**
 * Decompiled function f__1082_02AE_001A_47E1()
 *
 * @name f__1082_02AE_001A_47E1
 * @implements 1082:02AE:001A:47E1 ()
 *
 * Called From: 1082:0235:001C:EC5F
 * Called From: 1082:02AC:002E:B19B
 * Called From: 1082:02AC:0002:C03A
 */
void f__1082_02AE_001A_47E1()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0318; emu_last_cs = 0x1082; emu_last_ip = 0x02B4; emu_last_length = 0x001A; emu_last_crc = 0x47E1; emu_call(); return; }
	emu_movw(&emu_ax.x, 0x58);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x02C8); emu_cs = 0x01F7; f__01F7_2947_0014_02B8();
	f__1082_02C8_0058_AF1D();
}

/**
 * Decompiled function f__1082_02C8_0058_AF1D()
 *
 * @name f__1082_02C8_0058_AF1D
 * @implements 1082:02C8:0058:AF1D ()
 *
 * Called From: 1082:02C8:001A:47E1
 */
void f__1082_02C8_0058_AF1D()
{
	emu_addws(&emu_sp, 0x8);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x0), emu_si);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ss, emu_bp,  0x8));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x2), emu_ax.l);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), 0x3);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x6), 0x0);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x10), 0x0);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x3), 0xFF);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00,  0x35F8));
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_get_memory16(emu_ds, emu_bx.x,  0x8624), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, emu_bx.x,  0x8622), emu_dx.x);
	emu_incw(&emu_get_memory16(emu_ds, 0x00,  0x35F8));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	f__1082_0320_0005_8BCF(); return;
}

/**
 * Decompiled function f__1082_0320_0005_8BCF()
 *
 * @name f__1082_0320_0005_8BCF
 * @implements 1082:0320:0005:8BCF ()
 *
 * Called From: 1082:031E:0058:AF1D
 */
void f__1082_0320_0005_8BCF()
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
 * Decompiled function f__1082_0325_0018_025E()
 *
 * @name f__1082_0325_0018_025E
 * @implements 1082:0325:0018:025E ()
 *
 * Called From: 0C3A:04FB:0011:FFC9
 * Called From: 0C3A:1181:000B:C6E5
 * Called From: 0C3A:1EAA:0012:F3F8
 */
void f__1082_0325_0018_025E()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_si);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x3918);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_addw(&emu_ax.x, 0x12);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x033D); emu_cs = 0x15C2; f__15C2_0395_0044_304E();
	f__1082_033D_0010_68D6();
}

/**
 * Decompiled function f__1082_033D_0010_68D6()
 *
 * @name f__1082_033D_0010_68D6
 * @implements 1082:033D:0010:68D6 ()
 *
 * Called From: 1082:033D:0018:025E
 */
void f__1082_033D_0010_68D6()
{
	emu_addws(&emu_sp, 0x8);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), 0x0);
	emu_xorw(&emu_si, emu_si);
	f__1082_0398_0009_BE50(); return;
}

/**
 * Decompiled function f__1082_034D_0047_CEC1()
 *
 * @name f__1082_034D_0047_CEC1
 * @implements 1082:034D:0047:CEC1 ()
 *
 * Called From: 1082:039C:0009:BE50
 * Called From: 1082:039C:000A:AFD0
 * Called From: 1082:039C:000D:FB95
 */
void f__1082_034D_0047_CEC1()
{
	emu_movw(&emu_bx.x, emu_si);
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, emu_bx.x,  0x8624));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, emu_bx.x,  0x8622));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0397; emu_last_cs = 0x1082; emu_last_ip = 0x035E; emu_last_length = 0x0047; emu_last_crc = 0xCEC1; emu_call(); return; }
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	if (!emu_flags.zf) { f__1082_0397_000A_AFD0(); return; }
	emu_decw(&emu_get_memory16(emu_ds, 0x00,  0x35F8));
	emu_cmpw(&emu_si, emu_get_memory16(emu_ds, 0x00,  0x35F8));
	if (!(emu_flags.sf != emu_flags.of)) { f__1082_0397_000A_AFD0(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x35F8));
	emu_subw(&emu_ax.x, emu_si);
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, emu_si);
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_addw(&emu_ax.x, 0x8626);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, emu_si);
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_addw(&emu_ax.x, 0x8622);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0394); emu_cs = 0x01F7; f__01F7_28B8_0024_83C9();
	f__1082_0394_000D_FB95();
}

/**
 * Decompiled function f__1082_0394_000D_FB95()
 *
 * @name f__1082_0394_000D_FB95
 * @implements 1082:0394:000D:FB95 ()
 *
 * Called From: 1082:0394:0047:CEC1
 */
void f__1082_0394_000D_FB95()
{
	emu_addws(&emu_sp, 0xA);
	emu_incw(&emu_si);
	emu_cmpw(&emu_si, emu_get_memory16(emu_ds, 0x00,  0x35F8));
	if ((emu_flags.sf != emu_flags.of)) { f__1082_034D_0047_CEC1(); return; }
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__1082_0397_000A_AFD0()
 *
 * @name f__1082_0397_000A_AFD0
 * @implements 1082:0397:000A:AFD0 ()
 *
 * Called From: 1082:0363:0047:CEC1
 * Called From: 1082:036D:0047:CEC1
 */
void f__1082_0397_000A_AFD0()
{
	emu_incw(&emu_si);
	emu_cmpw(&emu_si, emu_get_memory16(emu_ds, 0x00,  0x35F8));
	if ((emu_flags.sf != emu_flags.of)) { f__1082_034D_0047_CEC1(); return; }
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__1082_0398_0009_BE50()
 *
 * @name f__1082_0398_0009_BE50
 * @implements 1082:0398:0009:BE50 ()
 *
 * Called From: 1082:034B:0010:68D6
 */
void f__1082_0398_0009_BE50()
{
	emu_cmpw(&emu_si, emu_get_memory16(emu_ds, 0x00,  0x35F8));
	if ((emu_flags.sf != emu_flags.of)) { f__1082_034D_0047_CEC1(); return; }
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__1082_03A1_0023_9F5D()
 *
 * @name f__1082_03A1_0023_9F5D
 * @implements 1082:03A1:0023:9F5D ()
 *
 * Called From: 0AEC:10D2:0018:52CC
 * Called From: 0C3A:0EDD:0022:A2EF
 * Called From: 0C3A:1E98:0018:6B6F
 * Called From: 167E:0065:0006:C09B
 * Called From: 167E:0196:0006:C49B
 * Called From: 167E:0226:0006:C49B
 * Called From: 167E:02C7:0007:DC29
 * Called From: 167E:02F8:0007:DC29
 * Called From: B4C4:0475:000B:A260
 * Called From: B4CD:10DD:0019:CA1D
 * Called From: B4CD:1167:0039:A02F
 */
void f__1082_03A1_0023_9F5D()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_movw(&emu_cx.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_cx.x, emu_cx.x);
	if ((emu_flags.sf != emu_flags.of)) { f__1082_03C4_0006_5EA9(); return; }
	emu_cmpws(&emu_cx.x, 0x52);
	if (!(emu_flags.sf != emu_flags.of)) { f__1082_03C4_0006_5EA9(); return; }
	emu_movw(&emu_ax.x, emu_cx.x);
	emu_movw(&emu_dx.x, 0x58);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x35F6));
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x35F4));
	emu_pop(&emu_bx.x);
	emu_addw(&emu_ax.x, emu_bx.x);
	f__1082_03CA_0002_2597(); return;
}

/**
 * Decompiled function f__1082_03C2_0002_C33A()
 *
 * @name f__1082_03C2_0002_C33A
 * @implements 1082:03C2:0002:C33A ()
 *
 * Called From: 1082:03C8:0006:5EA9
 */
void f__1082_03C2_0002_C33A()
{
	f__1082_03CA_0002_2597(); return;
}

/**
 * Decompiled function f__1082_03C4_0006_5EA9()
 *
 * @name f__1082_03C4_0006_5EA9
 * @implements 1082:03C4:0006:5EA9 ()
 *
 * Called From: 1082:03A9:0023:9F5D
 * Called From: 1082:03AE:0023:9F5D
 */
void f__1082_03C4_0006_5EA9()
{
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__1082_03C2_0002_C33A(); return;
}

/**
 * Decompiled function f__1082_03CA_0002_2597()
 *
 * @name f__1082_03CA_0002_2597
 * @implements 1082:03CA:0002:2597 ()
 *
 * Called From: 1082:03C2:0023:9F5D
 * Called From: 1082:03C2:0002:C33A
 */
void f__1082_03CA_0002_2597()
{
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

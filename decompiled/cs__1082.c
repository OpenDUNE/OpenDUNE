/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__1082_000F_0012_EFE2()
 *
 * @name f__1082_000F_0012_EFE2
 * @implements 1082:000F:0012:EFE2 ()
 *
 * Called From: B4C4:04D1:0005:1198
 * Called From: B4F2:033B:0005:1198
 * Called From: B511:00A9:001D:38AC
 */
void f__1082_000F_0012_EFE2()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x8);
	emu_push(emu_si);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_cs); emu_push(0x0021); emu_cs = 0x10BE; f__10BE_01E2_0027_C454();
	f__1082_0021_0002_0384();
}

/**
 * Decompiled function f__1082_0021_0002_0384()
 *
 * @name f__1082_0021_0002_0384
 * @implements 1082:0021:0002:0384 ()
 *
 * Called From: 1082:0021:0012:EFE2
 */
void f__1082_0021_0002_0384()
{
	f__1082_0037_001A_5F86(); return;
}

/**
 * Decompiled function f__1082_0023_0014_0C03()
 *
 * @name f__1082_0023_0014_0C03
 * @implements 1082:0023:0014:0C03 ()
 *
 * Called From: 1082:0045:001A:5F86
 */
void f__1082_0023_0014_0C03()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x6), 0x0);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_cs); emu_push(0x0037); emu_cs = 0x10BE; f__10BE_020F_004E_EE3E();
	f__1082_0037_001A_5F86();
}

/**
 * Decompiled function f__1082_0037_001A_5F86()
 *
 * @name f__1082_0037_001A_5F86
 * @implements 1082:0037:001A:5F86 ()
 *
 * Called From: 1082:0021:0002:0384
 * Called From: 1082:0037:0014:0C03
 */
void f__1082_0037_001A_5F86()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	if (!emu_flags.zf) { f__1082_0023_0014_0C03(); return; }
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x35F8), 0x0);
	emu_xorw(&emu_si, emu_si);
	f__1082_008E_000A_B739(); return;
}

/**
 * Decompiled function f__1082_0051_0047_3617()
 *
 * @name f__1082_0051_0047_3617
 * @implements 1082:0051:0047:3617 ()
 *
 * Called From: 1082:0091:000A:B739
 * Called From: 1082:0091:0047:3617
 * Called From: 1082:0091:000B:873B
 */
void f__1082_0051_0047_3617()
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
	if (emu_flags.zf) { f__1082_008D_000B_873B(); return; }
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00,  0x35F8));
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_get_memory16(emu_ds, emu_bx.x, -0x79DC), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, emu_bx.x, -0x79DE), emu_dx.x);
	emu_incw(&emu_get_memory16(emu_ds, 0x00,  0x35F8));
	emu_incw(&emu_si);
	emu_cmpws(&emu_si, 0x52);
	if ((emu_flags.sf != emu_flags.of)) { f__1082_0051_0047_3617(); return; }
	emu_pop(&emu_si);
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__1082_008D_000B_873B()
 *
 * @name f__1082_008D_000B_873B
 * @implements 1082:008D:000B:873B ()
 *
 * Called From: 1082:0071:0047:3617
 */
void f__1082_008D_000B_873B()
{
	emu_incw(&emu_si);
	emu_cmpws(&emu_si, 0x52);
	if ((emu_flags.sf != emu_flags.of)) { f__1082_0051_0047_3617(); return; }
	emu_pop(&emu_si);
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__1082_008E_000A_B739()
 *
 * @name f__1082_008E_000A_B739
 * @implements 1082:008E:000A:B739 ()
 *
 * Called From: 1082:004F:001A:5F86
 */
void f__1082_008E_000A_B739()
{
	emu_cmpws(&emu_si, 0x52);
	if ((emu_flags.sf != emu_flags.of)) { f__1082_0051_0047_3617(); return; }
	emu_pop(&emu_si);
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__1082_0098_001C_6F82()
 *
 * @name f__1082_0098_001C_6F82
 * @implements 1082:0098:001C:6F82 ()
 *
 * Called From: B4B8:1B12:0013:EF59
 * Called From: B511:0AA5:000D:B864
 */
void f__1082_0098_001C_6F82()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x35F8), 0x0);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_flags.zf) { f__1082_00BD_001D_5F11(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x00B4); emu_cs = 0x2B0E; f__2B0E_00D0_0022_D0C8();
	f__1082_00B4_0026_0937();
}

/**
 * Decompiled function f__1082_00B4_0026_0937()
 *
 * @name f__1082_00B4_0026_0937
 * @implements 1082:00B4:0026:0937 ()
 *
 * Called From: 1082:00B4:001C:6F82
 */
void f__1082_00B4_0026_0937()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x35F6), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x35F4), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x35F4));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x35F6));
	if (emu_flags.zf) { emu_ip = 0x00DD; emu_last_cs = 0x1082; emu_last_ip = 0x00C4; emu_last_length = 0x0026; emu_last_crc = 0x0937; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, 0x1C30);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x35F6));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x35F4));
	emu_push(emu_cs); emu_push(0x00DA); emu_cs = 0x01F7; f__01F7_2947_0014_9C5E();
	f__1082_00DA_000A_B64F();
}

/**
 * Decompiled function f__1082_00BD_001D_5F11()
 *
 * @name f__1082_00BD_001D_5F11
 * @implements 1082:00BD:001D:5F11 ()
 *
 * Called From: 1082:00A7:001C:6F82
 */
void f__1082_00BD_001D_5F11()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x35F4));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x35F6));
	if (emu_flags.zf) { emu_ip = 0x00DD; emu_last_cs = 0x1082; emu_last_ip = 0x00C4; emu_last_length = 0x001D; emu_last_crc = 0x5F11; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, 0x1C30);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x35F6));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x35F4));
	emu_push(emu_cs); emu_push(0x00DA); emu_cs = 0x01F7; f__01F7_2947_0014_9C5E();
	f__1082_00DA_000A_B64F();
}

/**
 * Decompiled function f__1082_00DA_000A_B64F()
 *
 * @name f__1082_00DA_000A_B64F
 * @implements 1082:00DA:000A:B64F ()
 *
 * Called From: 1082:00DA:001D:5F11
 * Called From: 1082:00DA:0026:0937
 */
void f__1082_00DA_000A_B64F()
{
	emu_addws(&emu_sp, 0x8);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_movw(&emu_ax.x, 0x1C30);
	f__1082_00E4_0002_00E2(); return;
}

/**
 * Decompiled function f__1082_00E4_0002_00E2()
 *
 * @name f__1082_00E4_0002_00E2
 * @implements 1082:00E4:0002:00E2 ()
 *
 * Called From: 1082:00E2:000A:B64F
 */
void f__1082_00E4_0002_00E2()
{
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__1082_00FD_003A_94E2()
 *
 * @name f__1082_00FD_003A_94E2
 * @implements 1082:00FD:003A:94E2 ()
 *
 * Called From: 0972:0126:006E:B658
 * Called From: 0972:0126:0012:E44C
 * Called From: 0972:0126:0040:A449
 * Called From: 0C3A:13DA:0022:281A
 * Called From: 0C3A:1FAF:0022:06ED
 * Called From: 0C3A:2141:0016:1479
 * Called From: 0C3A:2337:003A:312A
 * Called From: 10E4:2191:0015:2761
 * Called From: 1423:0076:001A:C150
 * Called From: 1423:0AC5:001A:7FDE
 * Called From: 1423:0DE7:0029:5F72
 * Called From: 176C:25DA:000E:6E22
 * Called From: 176C:29EC:000E:6E22
 * Called From: 1A34:21F5:001A:FB21
 * Called From: 1A34:22C3:0010:6E8B
 * Called From: 1A34:335F:000E:6E22
 * Called From: 1A34:33E4:000E:6E22
 * Called From: 1A34:3700:0022:9EA7
 * Called From: B50B:0435:001E:065C
 * Called From: B511:01B3:0023:C1F7
 * Called From: B518:0F72:0012:0DC3
 */
void f__1082_00FD_003A_94E2()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (!emu_flags.zf) { f__1082_0110_0027_0A3E(); return; }
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
	emu_push(0x0137); f__1082_013D_0038_03DE();
	f__1082_0137_0004_04F4();
}

/**
 * Decompiled function f__1082_0110_0027_0A3E()
 *
 * @name f__1082_0110_0027_0A3E
 * @implements 1082:0110:0027:0A3E ()
 *
 * Called From: 1082:0106:003A:94E2
 */
void f__1082_0110_0027_0A3E()
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
	emu_push(0x0137); f__1082_013D_0038_03DE();
	f__1082_0137_0004_04F4();
}

/**
 * Decompiled function f__1082_0137_0004_04F4()
 *
 * @name f__1082_0137_0004_04F4
 * @implements 1082:0137:0004:04F4 ()
 *
 * Called From: 1082:0137:003A:94E2
 * Called From: 1082:0137:0027:0A3E
 */
void f__1082_0137_0004_04F4()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	f__1082_013B_0002_00E2(); return;
}

/**
 * Decompiled function f__1082_013B_0002_00E2()
 *
 * @name f__1082_013B_0002_00E2
 * @implements 1082:013B:0002:00E2 ()
 *
 * Called From: 1082:0139:0004:04F4
 */
void f__1082_013B_0002_00E2()
{
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__1082_013D_0038_03DE()
 *
 * @name f__1082_013D_0038_03DE
 * @implements 1082:013D:0038:03DE ()
 *
 * Called From: 0972:0A49:000A:7BB1
 * Called From: 0972:0A49:0012:68F9
 * Called From: 0C3A:140C:0011:221D
 * Called From: 0C3A:2060:0015:7930
 * Called From: 0C3A:2060:000B:0232
 * Called From: 0C3A:21E9:000B:0232
 * Called From: 0C3A:23FC:002B:1135
 * Called From: 0C3A:23FC:000B:0232
 * Called From: 1082:0134:003A:94E2
 * Called From: 1082:0134:0027:0A3E
 * Called From: 10E4:21AE:000D:B23C
 * Called From: 1423:00AE:000B:0232
 * Called From: 1423:0E10:0024:9BC3
 * Called From: 176C:2A51:0026:EF96
 * Called From: 1A34:223A:000B:0232
 * Called From: 1A34:33AF:000B:0232
 * Called From: 1A34:342A:0019:4054
 * Called From: 1A34:3735:000A:75B1
 * Called From: B50B:0483:000E:A20A
 * Called From: B511:02EC:0023:0C62
 * Called From: B511:02EC:000B:0232
 * Called From: B518:0FA3:002C:9330
 */
void f__1082_013D_0038_03DE()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x6);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (!emu_flags.zf) { f__1082_0155_0020_8F59(); return; }
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
	if (!(emu_flags.sf != emu_flags.of)) { emu_ip = 0x0173; emu_last_cs = 0x1082; emu_last_ip = 0x0170; emu_last_length = 0x0038; emu_last_crc = 0x03DE; emu_call(); return; } // Jump does not resolve
	emu_incw(&emu_si);
	f__1082_01CF_0013_BE07(); return;
}

/**
 * Decompiled function f__1082_0155_0020_8F59()
 *
 * @name f__1082_0155_0020_8F59
 * @implements 1082:0155:0020:8F59 ()
 *
 * Called From: 1082:014B:0038:03DE
 */
void f__1082_0155_0020_8F59()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_di, emu_get_memory16(emu_es, emu_bx.x,  0x2));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_si, emu_get_memory16(emu_es, emu_bx.x,  0x4));
	emu_cmpw(&emu_si, emu_get_memory16(emu_ds, 0x00,  0x35F8));
	if (!(emu_flags.sf != emu_flags.of)) { f__1082_0173_0002_0318(); return; }
	emu_incw(&emu_si);
	f__1082_01CF_0013_BE07(); return;
}

/**
 * Decompiled function f__1082_0173_0002_0318()
 *
 * @name f__1082_0173_0002_0318
 * @implements 1082:0173:0002:0318 ()
 *
 * Called From: 1082:0170:0020:8F59
 */
void f__1082_0173_0002_0318()
{
	f__1082_01CF_0013_BE07(); return;
}

/**
 * Decompiled function f__1082_0175_0059_AE45()
 *
 * @name f__1082_0175_0059_AE45
 * @implements 1082:0175:0059:AE45 ()
 *
 * Called From: 1082:01D3:0013:BE07
 * Called From: 1082:01D3:0014:BA67
 */
void f__1082_0175_0059_AE45()
{
	emu_movw(&emu_bx.x, emu_si);
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, emu_bx.x, -0x79DC));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, emu_bx.x, -0x79DE));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_dx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), 0x4);
	if (emu_flags.zf) { f__1082_019B_0033_C3F1(); return; }
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x38BC), 0x0);
	if (emu_flags.zf) { f__1082_01CE_0014_BA67(); return; }
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0xFF);
	if (emu_flags.zf) { emu_ip = 0x01AE; emu_last_cs = 0x1082; emu_last_ip = 0x019F; emu_last_length = 0x0059; emu_last_crc = 0xAE45; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x8));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	if (!emu_flags.zf) { emu_ip = 0x01CE; emu_last_cs = 0x1082; emu_last_ip = 0x01AC; emu_last_length = 0x0059; emu_last_crc = 0xAE45; emu_call(); return; } // Jump does not resolve
	emu_cmpws(&emu_di, 0xFF);
	if (emu_flags.zf) { emu_ip = 0x01BF; emu_last_cs = 0x1082; emu_last_ip = 0x01B1; emu_last_length = 0x0059; emu_last_crc = 0xAE45; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x2));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_cmpw(&emu_ax.x, emu_di);
	if (!emu_flags.zf) { emu_ip = 0x01CE; emu_last_cs = 0x1082; emu_last_ip = 0x01BD; emu_last_length = 0x0059; emu_last_crc = 0xAE45; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), emu_si);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_ip = 0x01E2; emu_last_cs = 0x1082; emu_last_ip = 0x01CC; emu_last_length = 0x0059; emu_last_crc = 0xAE45; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__1082_019B_0033_C3F1()
 *
 * @name f__1082_019B_0033_C3F1
 * @implements 1082:019B:0033:C3F1 ()
 *
 * Called From: 1082:0192:0059:AE45
 */
void f__1082_019B_0033_C3F1()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0xFF);
	if (emu_flags.zf) { f__1082_01AE_0020_EB7C(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x8));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	if (!emu_flags.zf) { f__1082_01CE_0014_BA67(); return; }
	emu_cmpws(&emu_di, 0xFF);
	if (emu_flags.zf) { f__1082_01BF_000F_3296(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x2));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_cmpw(&emu_ax.x, emu_di);
	if (!emu_flags.zf) { f__1082_01CE_0014_BA67(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), emu_si);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	f__1082_01E2_0006_137A(); return;
}

/**
 * Decompiled function f__1082_01AE_0020_EB7C()
 *
 * @name f__1082_01AE_0020_EB7C
 * @implements 1082:01AE:0020:EB7C ()
 *
 * Called From: 1082:019F:0033:C3F1
 */
void f__1082_01AE_0020_EB7C()
{
	emu_cmpws(&emu_di, 0xFF);
	if (emu_flags.zf) { f__1082_01BF_000F_3296(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x2));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_cmpw(&emu_ax.x, emu_di);
	if (!emu_flags.zf) { f__1082_01CE_0014_BA67(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), emu_si);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_ip = 0x01E2; emu_last_cs = 0x1082; emu_last_ip = 0x01CC; emu_last_length = 0x0020; emu_last_crc = 0xEB7C; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__1082_01BF_000F_3296()
 *
 * @name f__1082_01BF_000F_3296
 * @implements 1082:01BF:000F:3296 ()
 *
 * Called From: 1082:01B1:0033:C3F1
 * Called From: 1082:01B1:0020:EB7C
 */
void f__1082_01BF_000F_3296()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), emu_si);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	f__1082_01E2_0006_137A(); return;
}

/**
 * Decompiled function f__1082_01CC_0002_0384()
 *
 * @name f__1082_01CC_0002_0384
 * @implements 1082:01CC:0002:0384 ()
 *
 * Called From: 1082:01E0:0013:BE07
 * Called From: 1082:01E0:0014:BA67
 */
void f__1082_01CC_0002_0384()
{
	f__1082_01E2_0006_137A(); return;
}

/**
 * Decompiled function f__1082_01CE_0014_BA67()
 *
 * @name f__1082_01CE_0014_BA67
 * @implements 1082:01CE:0014:BA67 ()
 *
 * Called From: 1082:0199:0059:AE45
 * Called From: 1082:01AC:0033:C3F1
 * Called From: 1082:01BD:0033:C3F1
 * Called From: 1082:01BD:0020:EB7C
 */
void f__1082_01CE_0014_BA67()
{
	emu_incw(&emu_si);
	emu_cmpw(&emu_si, emu_get_memory16(emu_ds, 0x00,  0x35F8));
	if ((emu_flags.sf != emu_flags.of)) { f__1082_0175_0059_AE45(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), emu_si);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__1082_01CC_0002_0384(); return;
}

/**
 * Decompiled function f__1082_01CF_0013_BE07()
 *
 * @name f__1082_01CF_0013_BE07
 * @implements 1082:01CF:0013:BE07 ()
 *
 * Called From: 1082:0173:0020:8F59
 * Called From: 1082:0173:0038:03DE
 * Called From: 1082:0173:0002:0318
 */
void f__1082_01CF_0013_BE07()
{
	emu_cmpw(&emu_si, emu_get_memory16(emu_ds, 0x00,  0x35F8));
	if ((emu_flags.sf != emu_flags.of)) { f__1082_0175_0059_AE45(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), emu_si);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__1082_01CC_0002_0384(); return;
}

/**
 * Decompiled function f__1082_01E2_0006_137A()
 *
 * @name f__1082_01E2_0006_137A
 * @implements 1082:01E2:0006:137A ()
 *
 * Called From: 1082:01CC:000F:3296
 * Called From: 1082:01CC:0002:0384
 * Called From: 1082:01CC:0033:C3F1
 */
void f__1082_01E2_0006_137A()
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
 * Decompiled function f__1082_01E8_0020_07B4()
 *
 * @name f__1082_01E8_0020_07B4
 * @implements 1082:01E8:0020:07B4 ()
 *
 * Called From: 0C3A:002D:0029:6B1F
 */
void f__1082_01E8_0020_07B4()
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
	if (!emu_flags.zf) { f__1082_0208_0013_8E9C(); return; }
	emu_ip = 0x0318; emu_last_cs = 0x1082; emu_last_ip = 0x0205; emu_last_length = 0x0020; emu_last_crc = 0x07B4; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__1082_0208_0013_8E9C()
 *
 * @name f__1082_0208_0013_8E9C
 * @implements 1082:0208:0013:8E9C ()
 *
 * Called From: 1082:0203:0020:07B4
 */
void f__1082_0208_0013_8E9C()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_orw(&emu_ax.x, emu_ax.x);
	if (emu_flags.zf) { f__1082_021B_001C_A008(); return; }
	emu_cmpw(&emu_ax.x, 0x1);
	if (emu_flags.zf) { emu_ip = 0x0237; emu_last_cs = 0x1082; emu_last_ip = 0x0212; emu_last_length = 0x0013; emu_last_crc = 0x8E9C; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_ax.x, 0xE);
	if (emu_flags.zf) { emu_ip = 0x023C; emu_last_cs = 0x1082; emu_last_ip = 0x0217; emu_last_length = 0x0013; emu_last_crc = 0x8E9C; emu_call(); return; } // Jump does not resolve
	f__1082_0241_0009_9AF3(); return;
}

/**
 * Decompiled function f__1082_021B_001C_A008()
 *
 * @name f__1082_021B_001C_A008
 * @implements 1082:021B:001C:A008 ()
 *
 * Called From: 1082:020D:0013:8E9C
 */
void f__1082_021B_001C_A008()
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
	f__1082_02AE_001A_A35A(); return;
}

/**
 * Decompiled function f__1082_0241_0009_9AF3()
 *
 * @name f__1082_0241_0009_9AF3
 * @implements 1082:0241:0009:9AF3 ()
 *
 * Called From: 1082:0219:0013:8E9C
 */
void f__1082_0241_0009_9AF3()
{
	emu_cmpws(&emu_si, 0xFF);
	if (!emu_flags.zf) { f__1082_0280_002E_836F(); return; }
	emu_xorw(&emu_si, emu_si);
	f__1082_0279_0007_75B4(); return;
}

/**
 * Decompiled function f__1082_024A_002E_BB63()
 *
 * @name f__1082_024A_002E_BB63
 * @implements 1082:024A:002E:BB63 ()
 *
 * Called From: 1082:027C:0007:75B4
 * Called From: 1082:027C:0008:33B4
 */
void f__1082_024A_002E_BB63()
{
	emu_movw(&emu_ax.x, emu_si);
	emu_movw(&emu_dx.x, 0x58);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x35F4));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), 0x1);
	if (!emu_flags.zf) { f__1082_0278_0008_33B4(); return; }
	emu_movw(&emu_ax.x, emu_si);
	emu_movw(&emu_dx.x, 0x58);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x35F6));
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00,  0x35F4));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_bx.x);
	f__1082_027E_0002_03F4(); return;
}

/**
 * Decompiled function f__1082_0278_0008_33B4()
 *
 * @name f__1082_0278_0008_33B4
 * @implements 1082:0278:0008:33B4 ()
 *
 * Called From: 1082:025D:002E:BB63
 */
void f__1082_0278_0008_33B4()
{
	emu_incw(&emu_si);
	emu_cmpws(&emu_si, 0x4F);
	if ((emu_flags.sf != emu_flags.of)) { f__1082_024A_002E_BB63(); return; }
	emu_ip = 0x02AC; emu_last_cs = 0x1082; emu_last_ip = 0x027E; emu_last_length = 0x0008; emu_last_crc = 0x33B4; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__1082_0279_0007_75B4()
 *
 * @name f__1082_0279_0007_75B4
 * @implements 1082:0279:0007:75B4 ()
 *
 * Called From: 1082:0248:0009:9AF3
 */
void f__1082_0279_0007_75B4()
{
	emu_cmpws(&emu_si, 0x4F);
	if ((emu_flags.sf != emu_flags.of)) { f__1082_024A_002E_BB63(); return; }
	emu_ip = 0x02AC; emu_last_cs = 0x1082; emu_last_ip = 0x027E; emu_last_length = 0x0007; emu_last_crc = 0x75B4; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__1082_027E_0002_03F4()
 *
 * @name f__1082_027E_0002_03F4
 * @implements 1082:027E:0002:03F4 ()
 *
 * Called From: 1082:0276:002E:BB63
 */
void f__1082_027E_0002_03F4()
{
	f__1082_02AC_0002_03AC(); return;
}

/**
 * Decompiled function f__1082_0280_002E_836F()
 *
 * @name f__1082_0280_002E_836F
 * @implements 1082:0280:002E:836F ()
 *
 * Called From: 1082:0244:0009:9AF3
 */
void f__1082_0280_002E_836F()
{
	emu_movw(&emu_ax.x, emu_si);
	emu_movw(&emu_dx.x, 0x58);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x35F4));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), 0x1);
	if (!emu_flags.zf) { emu_ip = 0x02AC; emu_last_cs = 0x1082; emu_last_ip = 0x0293; emu_last_length = 0x002E; emu_last_crc = 0x836F; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_si);
	emu_movw(&emu_dx.x, 0x58);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x35F6));
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00,  0x35F4));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_bx.x);
	f__1082_02AE_001A_A35A(); return;
}

/**
 * Decompiled function f__1082_02AC_0002_03AC()
 *
 * @name f__1082_02AC_0002_03AC
 * @implements 1082:02AC:0002:03AC ()
 *
 * Called From: 1082:027E:0002:03F4
 */
void f__1082_02AC_0002_03AC()
{
	f__1082_02AE_001A_A35A(); return;
}

/**
 * Decompiled function f__1082_02AE_001A_A35A()
 *
 * @name f__1082_02AE_001A_A35A
 * @implements 1082:02AE:001A:A35A ()
 *
 * Called From: 1082:0235:001C:A008
 * Called From: 1082:02AC:002E:836F
 * Called From: 1082:02AC:0002:03AC
 */
void f__1082_02AE_001A_A35A()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_flags.zf) { emu_ip = 0x0318; emu_last_cs = 0x1082; emu_last_ip = 0x02B4; emu_last_length = 0x001A; emu_last_crc = 0xA35A; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, 0x58);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x02C8); emu_cs = 0x01F7; f__01F7_2947_0014_9C5E();
	f__1082_02C8_0058_14A6();
}

/**
 * Decompiled function f__1082_02C8_0058_14A6()
 *
 * @name f__1082_02C8_0058_14A6
 * @implements 1082:02C8:0058:14A6 ()
 *
 * Called From: 1082:02C8:001A:A35A
 */
void f__1082_02C8_0058_14A6()
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
	emu_movw(&emu_get_memory16(emu_ds, emu_bx.x, -0x79DC), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, emu_bx.x, -0x79DE), emu_dx.x);
	emu_incw(&emu_get_memory16(emu_ds, 0x00,  0x35F8));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	f__1082_0320_0005_04BA(); return;
}

/**
 * Decompiled function f__1082_0320_0005_04BA()
 *
 * @name f__1082_0320_0005_04BA
 * @implements 1082:0320:0005:04BA ()
 *
 * Called From: 1082:031E:0058:14A6
 */
void f__1082_0320_0005_04BA()
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
 * Decompiled function f__1082_0325_0018_A45D()
 *
 * @name f__1082_0325_0018_A45D
 * @implements 1082:0325:0018:A45D ()
 *
 * Called From: 0C3A:04FB:0011:B7A6
 * Called From: 0C3A:1EAA:0012:3D5F
 */
void f__1082_0325_0018_A45D()
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
	emu_push(emu_cs); emu_push(0x033D); emu_cs = 0x15C2; f__15C2_0395_0044_6B4F();
	f__1082_033D_0010_0445();
}

/**
 * Decompiled function f__1082_033D_0010_0445()
 *
 * @name f__1082_033D_0010_0445
 * @implements 1082:033D:0010:0445 ()
 *
 * Called From: 1082:033D:0018:A45D
 */
void f__1082_033D_0010_0445()
{
	emu_addws(&emu_sp, 0x8);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), 0x0);
	emu_xorw(&emu_si, emu_si);
	f__1082_0398_0009_3622(); return;
}

/**
 * Decompiled function f__1082_034D_0047_1AA4()
 *
 * @name f__1082_034D_0047_1AA4
 * @implements 1082:034D:0047:1AA4 ()
 *
 * Called From: 1082:039C:0009:3622
 * Called From: 1082:039C:000A:2E23
 */
void f__1082_034D_0047_1AA4()
{
	emu_movw(&emu_bx.x, emu_si);
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, emu_bx.x, -0x79DC));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, emu_bx.x, -0x79DE));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (!emu_flags.zf) { emu_ip = 0x0397; emu_last_cs = 0x1082; emu_last_ip = 0x035E; emu_last_length = 0x0047; emu_last_crc = 0x1AA4; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	if (!emu_flags.zf) { f__1082_0397_000A_2E23(); return; }
	emu_decw(&emu_get_memory16(emu_ds, 0x00,  0x35F8));
	emu_cmpw(&emu_si, emu_get_memory16(emu_ds, 0x00,  0x35F8));
	if (!(emu_flags.sf != emu_flags.of)) { f__1082_0397_000A_2E23(); return; }
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
	emu_push(emu_cs); emu_push(0x0394); emu_cs = 0x01F7; emu_ip = 0x2C4C; emu_last_cs = 0x1082; emu_last_ip = 0x038F; emu_last_length = 0x0047; emu_last_crc = 0x1AA4; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__1082_0397_000A_2E23()
 *
 * @name f__1082_0397_000A_2E23
 * @implements 1082:0397:000A:2E23 ()
 *
 * Called From: 1082:0363:0047:1AA4
 * Called From: 1082:036D:0047:1AA4
 */
void f__1082_0397_000A_2E23()
{
	emu_incw(&emu_si);
	emu_cmpw(&emu_si, emu_get_memory16(emu_ds, 0x00,  0x35F8));
	if ((emu_flags.sf != emu_flags.of)) { f__1082_034D_0047_1AA4(); return; }
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__1082_0398_0009_3622()
 *
 * @name f__1082_0398_0009_3622
 * @implements 1082:0398:0009:3622 ()
 *
 * Called From: 1082:034B:0010:0445
 */
void f__1082_0398_0009_3622()
{
	emu_cmpw(&emu_si, emu_get_memory16(emu_ds, 0x00,  0x35F8));
	if ((emu_flags.sf != emu_flags.of)) { f__1082_034D_0047_1AA4(); return; }
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__1082_03A1_0023_2E20()
 *
 * @name f__1082_03A1_0023_2E20
 * @implements 1082:03A1:0023:2E20 ()
 *
 * Called From: 0AEC:10D2:0018:0D28
 * Called From: 0C3A:1E98:0018:1390
 * Called From: 167E:0065:0006:0EA0
 * Called From: 167E:0196:0006:0EE0
 * Called From: 167E:0226:0006:0EE0
 * Called From: 167E:02C7:0007:23E0
 * Called From: 167E:02F8:0007:23E0
 * Called From: B4C4:0475:000B:EE67
 * Called From: B4CD:10DD:0019:B54A
 * Called From: B4CD:1167:0039:7483
 */
void f__1082_03A1_0023_2E20()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_movw(&emu_cx.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_cx.x, emu_cx.x);
	if ((emu_flags.sf != emu_flags.of)) { emu_ip = 0x03C4; emu_last_cs = 0x1082; emu_last_ip = 0x03A9; emu_last_length = 0x0023; emu_last_crc = 0x2E20; emu_call(); return; } // Jump does not resolve
	emu_cmpws(&emu_cx.x, 0x52);
	if (!(emu_flags.sf != emu_flags.of)) { emu_ip = 0x03C4; emu_last_cs = 0x1082; emu_last_ip = 0x03AE; emu_last_length = 0x0023; emu_last_crc = 0x2E20; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_cx.x);
	emu_movw(&emu_dx.x, 0x58);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x35F6));
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x35F4));
	emu_pop(&emu_bx.x);
	emu_addw(&emu_ax.x, emu_bx.x);
	f__1082_03CA_0002_00E2(); return;
}

/**
 * Decompiled function f__1082_03CA_0002_00E2()
 *
 * @name f__1082_03CA_0002_00E2
 * @implements 1082:03CA:0002:00E2 ()
 *
 * Called From: 1082:03C2:0023:2E20
 */
void f__1082_03CA_0002_00E2()
{
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

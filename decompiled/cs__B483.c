/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__B483_0000_0019_FB79()
 *
 * @name f__B483_0000_0019_FB79
 * @implements B483:0000:0019:FB79 ()
 *
 * Called From: 3483:0020:0005:1C9A
 * Called From: 3483:0020:0005:1E2A
 * Called From: 3483:0020:0005:1E70
 * Called From: 3483:0020:0005:1E9C
 * Called From: 3483:0020:0005:1EA8
 * Called From: 3483:0020:0005:1ED4
 * Called From: 3483:0020:0005:1EFA
 * Called From: 3483:0020:0005:1F6C
 * Called From: 3483:0020:0005:1FC8
 */
void f__B483_0000_0019_FB79()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0xA);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_di, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_di, emu_di);
	if ((emu_flags.sf != emu_flags.of)) { emu_ip = 0x0016; emu_last_cs = 0xB483; emu_last_ip = 0x000D; emu_last_length = 0x0019; emu_last_crc = 0xFB79; emu_call(); return; } // Jump does not resolve
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x700A), 0x0);
	if (!emu_flags.zf) { f__B483_0019_001A_A8A0(); return; }
	emu_ip = 0x0150; emu_last_cs = 0xB483; emu_last_ip = 0x0016; emu_last_length = 0x0019; emu_last_crc = 0xFB79; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B483_0019_001A_A8A0()
 *
 * @name f__B483_0019_001A_A8A0
 * @implements B483:0019:001A:A8A0 ()
 *
 * Called From: B483:0014:0019:FB79
 */
void f__B483_0019_001A_A8A0()
{
	emu_movw(&emu_si, 0xFF);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	if (emu_flags.zf) { f__B483_006D_0015_EB48(); return; }
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x39FC));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_cs); emu_push(0x0033); emu_cs = 0x0F3F; f__0F3F_0086_0017_9220();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3483) { ovl__3483(0xFF); }
	f__B483_0033_0008_743A();
}

/**
 * Decompiled function f__B483_0033_0008_743A()
 *
 * @name f__B483_0033_0008_743A
 * @implements B483:0033:0008:743A ()
 *
 * Called From: B483:0033:001A:A8A0
 */
void f__B483_0033_0008_743A()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x003B); emu_cs = 0x0F3F; f__0F3F_0360_0038_031A();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3483) { ovl__3483(0xFF); }
	f__B483_003B_000D_E162();
}

/**
 * Decompiled function f__B483_003B_000D_E162()
 *
 * @name f__B483_003B_000D_E162
 * @implements B483:003B:000D:E162 ()
 *
 * Called From: B483:003B:0008:743A
 */
void f__B483_003B_000D_E162()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_si, emu_ax.x);
	emu_cmpws(&emu_si, 0x40);
	if (!emu_flags.cf) { emu_ip = 0x0048; emu_last_cs = 0xB483; emu_last_ip = 0x0042; emu_last_length = 0x000D; emu_last_crc = 0xE162; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_si);
	f__B483_004B_000C_4E83(); return;
}

/**
 * Decompiled function f__B483_004B_000C_4E83()
 *
 * @name f__B483_004B_000C_4E83
 * @implements B483:004B:000C:4E83 ()
 *
 * Called From: B483:0046:000D:E162
 */
void f__B483_004B_000C_4E83()
{
	emu_movw(&emu_si, emu_ax.x);
	emu_push(emu_si);
	emu_movw(&emu_ax.x, 0x50);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0057); emu_cs = 0x34C1; ovl__34C1(2);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3483) { ovl__3483(0xFF); }
	f__B483_0057_000E_813E();
}

/**
 * Decompiled function f__B483_0057_000E_813E()
 *
 * @name f__B483_0057_000E_813E
 * @implements B483:0057:000E:813E ()
 *
 * Called From: B483:0057:000C:4E83
 */
void f__B483_0057_000E_813E()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_si, emu_ax.x);
	emu_push(emu_si);
	emu_movw(&emu_ax.x, 0xFF);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0065); emu_cs = 0x34C1; ovl__34C1(0);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3483) { ovl__3483(0xFF); }
	f__B483_0065_001D_48C0();
}

/**
 * Decompiled function f__B483_0065_001D_48C0()
 *
 * @name f__B483_0065_001D_48C0
 * @implements B483:0065:001D:48C0 ()
 *
 * Called From: B483:0065:000E:813E
 */
void f__B483_0065_001D_48C0()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_si, emu_ax.x);
	emu_xorw(&emu_si, 0xFF);
	emu_movw(&emu_bx.x, emu_di);
	emu_shlw(&emu_bx.x, 0x1);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, emu_bx.x,  0x222));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x6D8F), 0x0);
	if (!emu_flags.zf) { emu_ip = 0x0082; emu_last_cs = 0xB483; emu_last_ip = 0x007D; emu_last_length = 0x001D; emu_last_crc = 0x48C0; emu_call(); return; } // Jump does not resolve
	f__B483_0147_0007_2666(); return;
}

/**
 * Decompiled function f__B483_006D_0015_EB48()
 *
 * @name f__B483_006D_0015_EB48
 * @implements B483:006D:0015:EB48 ()
 *
 * Called From: B483:0022:001A:A8A0
 */
void f__B483_006D_0015_EB48()
{
	emu_movw(&emu_bx.x, emu_di);
	emu_shlw(&emu_bx.x, 0x1);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, emu_bx.x,  0x222));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x6D8F), 0x0);
	if (!emu_flags.zf) { emu_ip = 0x0082; emu_last_cs = 0xB483; emu_last_ip = 0x007D; emu_last_length = 0x0015; emu_last_crc = 0xEB48; emu_call(); return; } // Jump does not resolve
	f__B483_0147_0007_2666(); return;
}

/**
 * Decompiled function f__B483_0147_0007_2666()
 *
 * @name f__B483_0147_0007_2666
 * @implements B483:0147:0007:2666 ()
 *
 * Called From: B483:007F:0015:EB48
 * Called From: B483:007F:001D:48C0
 */
void f__B483_0147_0007_2666()
{
	emu_push(emu_si);
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x014E); emu_cs = 0x1DD7; f__1DD7_048A_0017_00D5();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3483) { ovl__3483(0xFF); }
	f__B483_014E_0008_66FA();
}

/**
 * Decompiled function f__B483_014E_0008_66FA()
 *
 * @name f__B483_014E_0008_66FA
 * @implements B483:014E:0008:66FA ()
 *
 * Called From: B483:014E:0007:2666
 */
void f__B483_014E_0008_66FA()
{
	emu_pop(&emu_cx.x);
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
 * Decompiled function f__B483_0156_0019_B934()
 *
 * @name f__B483_0156_0019_B934
 * @implements B483:0156:0019:B934 ()
 *
 * Called From: 3483:0039:0005:19F2
 * Called From: 3483:0039:0005:1A04
 * Called From: 3483:0039:0005:1B18
 * Called From: 3483:0039:0005:1BBC
 * Called From: B483:0499:0019:4FFB
 */
void f__B483_0156_0019_B934()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x8);
	emu_push(emu_si);
	emu_movw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpws(&emu_si, 0xFF);
	if (emu_flags.zf) { f__B483_016C_0003_0776(); return; }
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x700A), 0x0);
	if (!emu_flags.zf) { f__B483_016F_0016_3FC0(); return; }
	emu_ip = 0x027E; emu_last_cs = 0xB483; emu_last_ip = 0x016C; emu_last_length = 0x0019; emu_last_crc = 0xB934; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B483_016C_0003_0776()
 *
 * @name f__B483_016C_0003_0776
 * @implements B483:016C:0003:0776 ()
 *
 * Called From: B483:0163:0019:B934
 */
void f__B483_016C_0003_0776()
{
	f__B483_027E_0005_04BA(); return;
}

/**
 * Decompiled function f__B483_016F_0016_3FC0()
 *
 * @name f__B483_016F_0016_3FC0
 * @implements B483:016F:0016:3FC0 ()
 *
 * Called From: B483:016A:0019:B934
 */
void f__B483_016F_0016_3FC0()
{
	emu_movw(&emu_ax.x, emu_si);
	emu_movw(&emu_dx.x, 0x6);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, emu_bx.x,  0xD5E));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x4060));
	if (!(emu_flags.sf != emu_flags.of)) { f__B483_0185_0037_5A30(); return; }
	emu_ip = 0x027E; emu_last_cs = 0xB483; emu_last_ip = 0x0182; emu_last_length = 0x0016; emu_last_crc = 0x3FC0; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B483_0185_0037_5A30()
 *
 * @name f__B483_0185_0037_5A30
 * @implements B483:0185:0037:5A30 ()
 *
 * Called From: B483:0180:0016:3FC0
 */
void f__B483_0185_0037_5A30()
{
	emu_movw(&emu_ax.x, emu_si);
	emu_movw(&emu_dx.x, 0x6);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, emu_bx.x,  0xD5E));
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x4060), emu_ax.x);
	emu_movw(&emu_bx.x, emu_si);
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, emu_bx.x,  0x3E56));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, emu_bx.x,  0x3E54));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_dx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_flags.zf) { f__B483_0211_003E_1583(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x01BC); emu_cs = 0x2649; emu_ip = 0x0D6A; emu_last_cs = 0xB483; emu_last_ip = 0x01B7; emu_last_length = 0x0037; emu_last_crc = 0x5A30; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__B483_0211_003E_1583()
 *
 * @name f__B483_0211_003E_1583
 * @implements B483:0211:003E:1583 ()
 *
 * Called From: B483:01AF:0037:5A30
 */
void f__B483_0211_003E_1583()
{
	emu_movw(&emu_ax.x, emu_si);
	emu_movw(&emu_dx.x, 0x6);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, emu_bx.x,  0xD5A));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0x3F);
	if (!emu_flags.zf) { f__B483_027E_0005_04BA(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3A38));
	emu_movw(&emu_dx.x, 0x1E);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, emu_bx.x,  0x3808));
	emu_movw(&emu_ax.x, emu_si);
	emu_movw(&emu_dx.x, 0x6);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, emu_bx.x,  0xD5A));
	emu_incw(&emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, emu_bx.x,  0xD5C));
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x9939);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x024F); emu_cs = 0x01F7; emu_ip = 0x39DC; emu_last_cs = 0xB483; emu_last_ip = 0x024A; emu_last_length = 0x003E; emu_last_crc = 0x1583; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__B483_027E_0005_04BA()
 *
 * @name f__B483_027E_0005_04BA
 * @implements B483:027E:0005:04BA ()
 *
 * Called From: B483:016C:0003:0776
 * Called From: B483:0222:003E:1583
 */
void f__B483_027E_0005_04BA()
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
 * Decompiled function f__B483_0283_0014_DEE0()
 *
 * @name f__B483_0283_0014_DEE0
 * @implements B483:0283:0014:DEE0 ()
 *
 * Called From: 3483:0025:0005:147A
 * Called From: 3483:0025:0005:1490
 * Called From: 3483:0025:0005:14BA
 * Called From: 3483:0025:0005:14DE
 * Called From: 3483:0025:0005:14E6
 * Called From: 3483:0025:0005:1526
 * Called From: 3483:0025:0005:1554
 * Called From: 3483:0025:0005:1562
 * Called From: 3483:0025:0005:15FE
 * Called From: 3483:0025:0005:160A
 * Called From: 3483:0025:0005:1616
 * Called From: 3483:0025:0005:164E
 * Called From: 3483:0025:0005:1650
 * Called From: 3483:0025:0005:1688
 * Called From: 3483:0025:0005:16BC
 * Called From: 3483:0025:0005:16DA
 * Called From: 3483:0025:0005:16F4
 * Called From: 3483:0025:0005:1712
 * Called From: 3483:0025:0005:1720
 * Called From: 3483:0025:0005:1748
 * Called From: 3483:0025:0005:174C
 * Called From: 3483:0025:0005:179C
 * Called From: 3483:0025:0005:17A4
 * Called From: 3483:0025:0005:17E8
 * Called From: 3483:0025:0005:17EE
 */
void f__B483_0283_0014_DEE0()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_si);
	emu_movw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpws(&emu_si, 0xFF);
	if (emu_flags.zf) { emu_ip = 0x0294; emu_last_cs = 0xB483; emu_last_ip = 0x028D; emu_last_length = 0x0014; emu_last_crc = 0xDEE0; emu_call(); return; } // Jump does not resolve
	emu_cmpws(&emu_si, 0x26);
	if ((emu_flags.sf != emu_flags.of)) { f__B483_0297_0020_DF99(); return; }
	emu_ip = 0x0360; emu_last_cs = 0xB483; emu_last_ip = 0x0294; emu_last_length = 0x0014; emu_last_crc = 0xDEE0; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B483_0297_0020_DF99()
 *
 * @name f__B483_0297_0020_DF99
 * @implements B483:0297:0020:DF99 ()
 *
 * Called From: B483:0292:0014:DEE0
 */
void f__B483_0297_0020_DF99()
{
	emu_movw(&emu_ax.x, emu_si);
	emu_movw(&emu_dx.x, 0x6);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, emu_bx.x,  0x106E));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, emu_bx.x,  0x106C));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3E50));
	if (!emu_flags.zf) { f__B483_02B7_001D_8D5E(); return; }
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x3E4E));
	if (!emu_flags.zf) { f__B483_02B7_001D_8D5E(); return; }
	f__B483_034D_0012_1089(); return;
}

/**
 * Decompiled function f__B483_02B7_001D_8D5E()
 *
 * @name f__B483_02B7_001D_8D5E
 * @implements B483:02B7:001D:8D5E ()
 *
 * Called From: B483:02AC:0020:DF99
 * Called From: B483:02B2:0020:DF99
 */
void f__B483_02B7_001D_8D5E()
{
	emu_movw(&emu_ax.x, emu_si);
	emu_movw(&emu_dx.x, 0x6);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, emu_bx.x,  0x106E));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, emu_bx.x,  0x106C));
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x3E50), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x3E4E), emu_dx.x);
	emu_push(emu_cs); emu_push(0x02D4); emu_cs = 0x1DD7; f__1DD7_0A7B_001E_024D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3483) { ovl__3483(0xFF); }
	f__B483_02D4_000B_0264();
}

/**
 * Decompiled function f__B483_02D4_000B_0264()
 *
 * @name f__B483_02D4_000B_0264
 * @implements B483:02D4:000B:0264 ()
 *
 * Called From: B483:02D4:001D:8D5E
 */
void f__B483_02D4_000B_0264()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_cs); emu_push(0x02DF); emu_cs = 0x1DD7; f__1DD7_022D_0015_1B0E();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3483) { ovl__3483(0xFF); }
	f__B483_02DF_0019_EB80();
}

/**
 * Decompiled function f__B483_02DF_0019_EB80()
 *
 * @name f__B483_02DF_0019_EB80
 * @implements B483:02DF:0019:EB80 ()
 *
 * Called From: B483:02DF:000B:0264
 */
void f__B483_02DF_0019_EB80()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_cs); emu_push(0x02F8); emu_cs = 0x1DD7; f__1DD7_0719_0014_11F3();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3483) { ovl__3483(0xFF); }
	f__B483_02F8_001A_8403();
}

/**
 * Decompiled function f__B483_02F8_001A_8403()
 *
 * @name f__B483_02F8_001A_8403
 * @implements B483:02F8:001A:8403 ()
 *
 * Called From: B483:02F8:0019:EB80
 */
void f__B483_02F8_001A_8403()
{
	emu_addws(&emu_sp, 0xC);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_cs); emu_push(0x0312); emu_cs = 0x1DD7; f__1DD7_05D0_0014_1313();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3483) { ovl__3483(0xFF); }
	f__B483_0312_001C_2F2F();
}

/**
 * Decompiled function f__B483_0312_001C_2F2F()
 *
 * @name f__B483_0312_001C_2F2F
 * @implements B483:0312:001C:2F2F ()
 *
 * Called From: B483:0312:001A:8403
 */
void f__B483_0312_001C_2F2F()
{
	emu_addws(&emu_sp, 0xC);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3E50));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3E4E));
	emu_push(emu_cs); emu_push(0x032E); emu_cs = 0x1DD7; f__1DD7_0719_0014_11F3();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3483) { ovl__3483(0xFF); }
	f__B483_032E_001C_23AF();
}

/**
 * Decompiled function f__B483_032E_001C_23AF()
 *
 * @name f__B483_032E_001C_23AF
 * @implements B483:032E:001C:23AF ()
 *
 * Called From: B483:032E:001C:2F2F
 */
void f__B483_032E_001C_23AF()
{
	emu_addws(&emu_sp, 0xC);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3E50));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3E4E));
	emu_push(emu_cs); emu_push(0x034A); emu_cs = 0x1DD7; f__1DD7_05D0_0014_1313();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3483) { ovl__3483(0xFF); }
	f__B483_034A_0015_0CC9();
}

/**
 * Decompiled function f__B483_034A_0015_0CC9()
 *
 * @name f__B483_034A_0015_0CC9
 * @implements B483:034A:0015:0CC9 ()
 *
 * Called From: B483:034A:001C:23AF
 */
void f__B483_034A_0015_0CC9()
{
	emu_addws(&emu_sp, 0xC);
	emu_movw(&emu_ax.x, emu_si);
	emu_movw(&emu_dx.x, 0x6);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, emu_bx.x,  0x1070));
	emu_push(emu_cs); emu_push(0x035F); emu_cs = 0x1DD7; f__1DD7_08EE_000E_E978();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3483) { ovl__3483(0xFF); }
	f__B483_035F_0004_0782();
}

/**
 * Decompiled function f__B483_034D_0012_1089()
 *
 * @name f__B483_034D_0012_1089
 * @implements B483:034D:0012:1089 ()
 *
 * Called From: B483:02B4:0020:DF99
 */
void f__B483_034D_0012_1089()
{
	emu_movw(&emu_ax.x, emu_si);
	emu_movw(&emu_dx.x, 0x6);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, emu_bx.x,  0x1070));
	emu_push(emu_cs); emu_push(0x035F); emu_cs = 0x1DD7; f__1DD7_08EE_000E_E978();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3483) { ovl__3483(0xFF); }
	f__B483_035F_0004_0782();
}

/**
 * Decompiled function f__B483_035F_0004_0782()
 *
 * @name f__B483_035F_0004_0782
 * @implements B483:035F:0004:0782 ()
 *
 * Called From: B483:035F:0012:1089
 * Called From: B483:035F:0015:0CC9
 */
void f__B483_035F_0004_0782()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B483_0363_0016_23BC()
 *
 * @name f__B483_0363_0016_23BC
 * @implements B483:0363:0016:23BC ()
 *
 * Called From: 3483:002A:0005:1802
 * Called From: 3483:002A:0005:1858
 * Called From: 3483:002A:0005:1880
 * Called From: 3483:002A:0005:18D2
 * Called From: 3483:002A:0005:18FC
 * Called From: 3483:002A:0005:1940
 * Called From: 3483:002A:0005:1944
 * Called From: 3483:002A:0005:1994
 * Called From: 3483:002A:0005:1A98
 * Called From: 3483:002A:0005:1AB2
 * Called From: 3483:002A:0005:1AD6
 * Called From: 3483:002A:0005:1AEE
 * Called From: 3483:002A:0005:1B5C
 */
void f__B483_0363_0016_23BC()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_di, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_di);
	emu_cmpw(&emu_ax.x, 0xFFFE);
	if (emu_flags.zf) { f__B483_0379_0004_073A(); return; }
	emu_cmpw(&emu_ax.x, 0xFFFF);
	if (emu_flags.zf) { emu_ip = 0x03BB; emu_last_cs = 0xB483; emu_last_ip = 0x0375; emu_last_length = 0x0016; emu_last_crc = 0x23BC; emu_call(); return; } // Jump does not resolve
	f__B483_03BE_002E_578C(); return;
}

/**
 * Decompiled function f__B483_0379_0004_073A()
 *
 * @name f__B483_0379_0004_073A
 * @implements B483:0379:0004:073A ()
 *
 * Called From: B483:0370:0016:23BC
 */
void f__B483_0379_0004_073A()
{
	emu_xorw(&emu_si, emu_si);
	f__B483_0388_000A_ED9D(); return;
}

/**
 * Decompiled function f__B483_037D_0015_550E()
 *
 * @name f__B483_037D_0015_550E
 * @implements B483:037D:0015:550E ()
 *
 * Called From: B483:038B:000A:ED9D
 * Called From: B483:038B:0015:550E
 */
void f__B483_037D_0015_550E()
{
	emu_movw(&emu_bx.x, emu_si);
	emu_shlw(&emu_bx.x, 0x1);
	emu_movw(&emu_get_memory16(emu_ds, emu_bx.x,  0x218), 0xFFFF);
	emu_incw(&emu_si);
	emu_cmpws(&emu_si, 0x5);
	if ((emu_flags.sf != emu_flags.of)) { f__B483_037D_0015_550E(); return; }
	emu_push(emu_cs); emu_push(0x0392); emu_cs = 0x1DD7; f__1DD7_01AB_0007_1284();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3483) { ovl__3483(0xFF); }
	f__B483_0392_0029_EFB4();
}

/**
 * Decompiled function f__B483_0388_000A_ED9D()
 *
 * @name f__B483_0388_000A_ED9D
 * @implements B483:0388:000A:ED9D ()
 *
 * Called From: B483:037B:0004:073A
 */
void f__B483_0388_000A_ED9D()
{
	emu_cmpws(&emu_si, 0x5);
	if ((emu_flags.sf != emu_flags.of)) { f__B483_037D_0015_550E(); return; }
	emu_push(emu_cs); emu_push(0x0392); emu_cs = 0x1DD7; emu_ip = 0x053D; emu_last_cs = 0xB483; emu_last_ip = 0x038D; emu_last_length = 0x000A; emu_last_crc = 0xED9D; emu_call(); // Jump does not resolve
	f__B483_0392_0029_EFB4();
}

/**
 * Decompiled function f__B483_0392_0029_EFB4()
 *
 * @name f__B483_0392_0029_EFB4
 * @implements B483:0392:0029:EFB4 ()
 *
 * Called From: B483:0392:0015:550E
 */
void f__B483_0392_0029_EFB4()
{
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x37BE), 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x37BC), 0x0);
	emu_testw(&emu_get_memory16(emu_ds, 0x00,  0x37BA), 0x1);
	if (emu_flags.zf) { f__B483_03B2_0009_AD8D(); return; }
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x3A12), 0x1);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x37BA), 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x4060), 0x0);
	emu_ip = 0x046C; emu_last_cs = 0xB483; emu_last_ip = 0x03B8; emu_last_length = 0x0029; emu_last_crc = 0xEFB4; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B483_03B2_0009_AD8D()
 *
 * @name f__B483_03B2_0009_AD8D
 * @implements B483:03B2:0009:AD8D ()
 *
 * Called From: B483:03A4:0029:EFB4
 */
void f__B483_03B2_0009_AD8D()
{
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x4060), 0x0);
	f__B483_046C_0004_07E2(); return;
}

/**
 * Decompiled function f__B483_03BE_002E_578C()
 *
 * @name f__B483_03BE_002E_578C
 * @implements B483:03BE:002E:578C ()
 *
 * Called From: B483:0377:0016:23BC
 */
void f__B483_03BE_002E_578C()
{
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x6D8F), 0x0);
	if (emu_flags.zf) { f__B483_03DA_0012_2ABF(); return; }
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x700A), 0x0);
	if (emu_flags.zf) { emu_ip = 0x03DA; emu_last_cs = 0xB483; emu_last_ip = 0x03CA; emu_last_length = 0x002E; emu_last_crc = 0x578C; emu_call(); return; } // Jump does not resolve
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x3A0E), 0x7);
	if (!emu_flags.zf) { emu_ip = 0x041D; emu_last_cs = 0xB483; emu_last_ip = 0x03D1; emu_last_length = 0x002E; emu_last_crc = 0x578C; emu_call(); return; } // Jump does not resolve
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x6D8F), 0x4);
	if (!emu_flags.zf) { emu_ip = 0x041D; emu_last_cs = 0xB483; emu_last_ip = 0x03D8; emu_last_length = 0x002E; emu_last_crc = 0x578C; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_di);
	emu_movw(&emu_dx.x, 0xE);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, emu_bx.x,  0x31E));
	emu_push(emu_cs); emu_push(0x03EC); emu_cs = 0x1DD7; emu_ip = 0x0863; emu_last_cs = 0xB483; emu_last_ip = 0x03E7; emu_last_length = 0x002E; emu_last_crc = 0x578C; emu_call(); // Jump does not resolve
	f__B483_03EC_0013_2B83();
}

/**
 * Decompiled function f__B483_03DA_0012_2ABF()
 *
 * @name f__B483_03DA_0012_2ABF
 * @implements B483:03DA:0012:2ABF ()
 *
 * Called From: B483:03C3:002E:578C
 */
void f__B483_03DA_0012_2ABF()
{
	emu_movw(&emu_ax.x, emu_di);
	emu_movw(&emu_dx.x, 0xE);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, emu_bx.x,  0x31E));
	emu_push(emu_cs); emu_push(0x03EC); emu_cs = 0x1DD7; f__1DD7_0477_000E_E978();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3483) { ovl__3483(0xFF); }
	f__B483_03EC_0013_2B83();
}

/**
 * Decompiled function f__B483_03EC_0013_2B83()
 *
 * @name f__B483_03EC_0013_2B83
 * @implements B483:03EC:0013:2B83 ()
 *
 * Called From: B483:03EC:0012:2ABF
 */
void f__B483_03EC_0013_2B83()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_ax.x, emu_di);
	emu_movw(&emu_dx.x, 0xE);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, emu_bx.x,  0x31C));
	emu_push(emu_cs); emu_push(0x03FF); emu_cs = 0x0FCB; f__0FCB_005F_001C_147D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3483) { ovl__3483(0xFF); }
	f__B483_03FF_001E_E1CE();
}

/**
 * Decompiled function f__B483_03FF_001E_E1CE()
 *
 * @name f__B483_03FF_001E_E1CE
 * @implements B483:03FF:001E:E1CE ()
 *
 * Called From: B483:03FF:0013:2B83
 */
void f__B483_03FF_001E_E1CE()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x37BE), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x37BC), emu_ax.x);
	emu_testw(&emu_get_memory16(emu_ds, 0x00,  0x37BA), 0x1);
	if (emu_flags.zf) { f__B483_0415_0008_EF16(); return; }
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x3A12), 0x1);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x37BA), 0x4);
	f__B483_046A_0002_03AC(); return;
}

/**
 * Decompiled function f__B483_0415_0008_EF16()
 *
 * @name f__B483_0415_0008_EF16
 * @implements B483:0415:0008:EF16 ()
 *
 * Called From: B483:040D:001E:E1CE
 */
void f__B483_0415_0008_EF16()
{
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x37BA), 0x4);
	f__B483_046A_0002_03AC(); return;
}

/**
 * Decompiled function f__B483_046A_0002_03AC()
 *
 * @name f__B483_046A_0002_03AC
 * @implements B483:046A:0002:03AC ()
 *
 * Called From: B483:041B:0008:EF16
 * Called From: B483:041B:001E:E1CE
 */
void f__B483_046A_0002_03AC()
{
	f__B483_046C_0004_07E2(); return;
}

/**
 * Decompiled function f__B483_046C_0004_07E2()
 *
 * @name f__B483_046C_0004_07E2
 * @implements B483:046C:0004:07E2 ()
 *
 * Called From: B483:03B8:0009:AD8D
 * Called From: B483:046A:0002:03AC
 */
void f__B483_046C_0004_07E2()
{
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B483_0470_000E_7FC4()
 *
 * @name f__B483_0470_000E_7FC4
 * @implements B483:0470:000E:7FC4 ()
 *
 * Called From: 3483:002F:0005:1820
 * Called From: 3483:002F:0005:184C
 * Called From: 3483:002F:0005:1898
 * Called From: 3483:002F:0005:189C
 * Called From: 3483:002F:0005:18AE
 * Called From: 3483:002F:0005:18B4
 * Called From: 3483:002F:0005:18E8
 * Called From: 3483:002F:0005:18EE
 * Called From: 3483:002F:0005:190A
 * Called From: 3483:002F:0005:194C
 * Called From: 3483:002F:0005:1950
 * Called From: 3483:002F:0005:1976
 * Called From: 3483:002F:0005:1988
 * Called From: 3483:002F:0005:1990
 * Called From: 3483:002F:0005:19BC
 * Called From: 3483:002F:0005:19DA
 * Called From: 3483:002F:0005:19F4
 * Called From: 3483:002F:0005:1A10
 * Called From: 3483:002F:0005:1A54
 * Called From: 3483:002F:0005:1A62
 * Called From: 3483:002F:0005:1AFE
 * Called From: 3483:002F:0005:1BA8
 * Called From: 3483:002F:0005:1BAA
 * Called From: 3483:002F:0005:1BBA
 * Called From: 3483:002F:0005:1BDE
 * Called From: 3483:002F:0005:1BE6
 * Called From: 3483:002F:0005:1BEA
 */
void f__B483_0470_000E_7FC4()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x700A), 0x0);
	if (!emu_flags.zf) { f__B483_047E_0005_1E9E(); return; }
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_ip = 0x04C9; emu_last_cs = 0xB483; emu_last_ip = 0x047C; emu_last_length = 0x000E; emu_last_crc = 0x7FC4; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B483_047A_0004_060A()
 *
 * @name f__B483_047A_0004_060A
 * @implements B483:047A:0004:060A ()
 *
 * Called From: B483:04C0:0002:02DC
 */
void f__B483_047A_0004_060A()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__B483_04C9_0002_00E2(); return;
}

/**
 * Decompiled function f__B483_047C_0002_033A()
 *
 * @name f__B483_047C_0002_033A
 * @implements B483:047C:0002:033A ()
 *
 * Called From: B483:04C7:0005:15DA
 */
void f__B483_047C_0002_033A()
{
	f__B483_04C9_0002_00E2(); return;
}

/**
 * Decompiled function f__B483_047E_0005_1E9E()
 *
 * @name f__B483_047E_0005_1E9E
 * @implements B483:047E:0005:1E9E ()
 *
 * Called From: B483:0478:000E:7FC4
 */
void f__B483_047E_0005_1E9E()
{
	emu_push(emu_cs); emu_push(0x0483); emu_cs = 0x1DD7; f__1DD7_01EB_0013_AA5A();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3483) { ovl__3483(0xFF); }
	f__B483_0483_0019_4FFB();
}

/**
 * Decompiled function f__B483_0483_0019_4FFB()
 *
 * @name f__B483_0483_0019_4FFB
 * @implements B483:0483:0019:4FFB ()
 *
 * Called From: B483:0483:0005:1E9E
 */
void f__B483_0483_0019_4FFB()
{
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.zf) { f__B483_04C4_0005_15DA(); return; }
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x4060), 0x0);
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x218), 0xFF);
	if (emu_flags.zf) { f__B483_04C0_0002_02DC(); return; }
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x218));
	emu_push(emu_cs);
	emu_push(0x049C); f__B483_0156_0019_B934();
	f__B483_049C_0017_873D();
}

/**
 * Decompiled function f__B483_049C_0017_873D()
 *
 * @name f__B483_049C_0017_873D
 * @implements B483:049C:0017:873D ()
 *
 * Called From: B483:049C:0019:4FFB
 */
void f__B483_049C_0017_873D()
{
	emu_pop(&emu_cx.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_movw(&emu_dx.x, 0x8);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x218);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x21A);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x04B3); emu_cs = 0x2B0E; f__2B0E_0006_0049_1E3C();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3483) { ovl__3483(0xFF); }
	f__B483_04B3_000B_D7EF();
}

/**
 * Decompiled function f__B483_04B3_000B_D7EF()
 *
 * @name f__B483_04B3_000B_D7EF
 * @implements B483:04B3:000B:D7EF ()
 *
 * Called From: B483:04B3:0017:873D
 */
void f__B483_04B3_000B_D7EF()
{
	emu_addws(&emu_sp, 0xC);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x220), 0xFFFF);
	f__B483_04C4_0005_15DA(); return;
}

/**
 * Decompiled function f__B483_04C0_0002_02DC()
 *
 * @name f__B483_04C0_0002_02DC
 * @implements B483:04C0:0002:02DC ()
 *
 * Called From: B483:0492:0019:4FFB
 */
void f__B483_04C0_0002_02DC()
{
	f__B483_047A_0004_060A(); return;
}

/**
 * Decompiled function f__B483_04C4_0005_15DA()
 *
 * @name f__B483_04C4_0005_15DA
 * @implements B483:04C4:0005:15DA ()
 *
 * Called From: B483:0485:0019:4FFB
 * Called From: B483:04BC:000B:D7EF
 */
void f__B483_04C4_0005_15DA()
{
	emu_movw(&emu_ax.x, 0x1);
	f__B483_047C_0002_033A(); return;
}

/**
 * Decompiled function f__B483_04C9_0002_00E2()
 *
 * @name f__B483_04C9_0002_00E2
 * @implements B483:04C9:0002:00E2 ()
 *
 * Called From: B483:047C:0002:033A
 * Called From: B483:047C:0004:060A
 */
void f__B483_04C9_0002_00E2()
{
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B483_04CB_0015_B680()
 *
 * @name f__B483_04CB_0015_B680
 * @implements B483:04CB:0015:B680 ()
 *
 * Called From: 3483:0034:0005:1056
 * Called From: 3483:0034:0005:120C
 * Called From: 3483:0034:0005:1238
 * Called From: 3483:0034:0005:126A
 * Called From: 3483:0034:0005:1272
 * Called From: 3483:0034:0005:12BA
 * Called From: 3483:0034:0005:12FE
 * Called From: 3483:0034:0005:1358
 * Called From: 3483:0034:0005:13A2
 */
void f__B483_04CB_0015_B680()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x4);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_di, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x6D8F), 0x0);
	if (!emu_flags.zf) { emu_ip = 0x04E0; emu_last_cs = 0xB483; emu_last_ip = 0x04DB; emu_last_length = 0x0015; emu_last_crc = 0xB680; emu_call(); return; } // Jump does not resolve
	f__B483_07F5_0006_137A(); return;
}

/**
 * Decompiled function f__B483_07F5_0006_137A()
 *
 * @name f__B483_07F5_0006_137A
 * @implements B483:07F5:0006:137A ()
 *
 * Called From: B483:04DD:0015:B680
 */
void f__B483_07F5_0006_137A()
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

/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__217E_0015_0019_532F()
 *
 * @name f__217E_0015_0019_532F
 * @implements 217E:0015:0019:532F ()
 *
 * Called From: 217E:0D77:0017:2FB6
 */
void f__217E_0015_0019_532F()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x14);
	emu_push(emu_ds);
	emu_movw(&emu_ds, emu_get_memory16(emu_cs, 0x00,  0xA));
	emu_push(emu_si);
	emu_push(emu_di);
	emu_cld();
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x110), 0x0);
	if (!emu_flags.zf) { f__217E_002E_0003_0516(); return; }
	emu_ip = 0x013A; emu_last_cs = 0x217E; emu_last_ip = 0x002B; emu_last_length = 0x0019; emu_last_crc = 0x532F; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__217E_002E_0003_0516()
 *
 * @name f__217E_002E_0003_0516
 * @implements 217E:002E:0003:0516 ()
 *
 * Called From: 217E:0029:0019:532F
 */
void f__217E_002E_0003_0516()
{
	emu_push(0x0031); f__217E_01C6_0004_09B6();
	f__217E_0031_0017_3B36();
}

/**
 * Decompiled function f__217E_0031_0017_3B36()
 *
 * @name f__217E_0031_0017_3B36
 * @implements 217E:0031:0017:3B36 ()
 *
 * Called From: 217E:0031:0003:0516
 */
void f__217E_0031_0017_3B36()
{
	if (!emu_flags.cf) { f__217E_005F_000C_6B9C(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (!emu_flags.zf) { emu_ip = 0x0045; emu_last_cs = 0x217E; emu_last_ip = 0x0039; emu_last_length = 0x0017; emu_last_crc = 0x3B36; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0x6), 0x710);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0x8), 0x340E);
	emu_push(0x0048); emu_ip = 0x01BA; emu_last_cs = 0x217E; emu_last_ip = 0x0045; emu_last_length = 0x0017; emu_last_crc = 0x3B36; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__217E_005F_000C_6B9C()
 *
 * @name f__217E_005F_000C_6B9C
 * @implements 217E:005F:000C:6B9C ()
 *
 * Called From: 217E:0031:0017:3B36
 */
void f__217E_005F_000C_6B9C()
{
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x128), emu_bx.x);
	emu_movw(&emu_cx.x, 0x14);
	emu_push(0x006B); f__217E_0290_000A_4DAF();
	f__217E_006B_0015_2919();
}

/**
 * Decompiled function f__217E_006B_0015_2919()
 *
 * @name f__217E_006B_0015_2919
 * @implements 217E:006B:0015:2919 ()
 *
 * Called From: 217E:006B:000C:6B9C
 */
void f__217E_006B_0015_2919()
{
	emu_movw(&emu_cx.x, 0xFFFD);
	if (emu_flags.cf) { emu_ip = 0x0055; emu_last_cs = 0x217E; emu_last_ip = 0x006E; emu_last_length = 0x0015; emu_last_crc = 0x2919; emu_call(); return; } // Jump does not resolve
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x14), 0x5A4D);
	if (emu_flags.zf) { f__217E_0080_0024_F8B6(); return; }
	emu_movw(&emu_cx.x, 0xFFFC);
	emu_ip = 0x0055; emu_last_cs = 0x217E; emu_last_ip = 0x007E; emu_last_length = 0x0015; emu_last_crc = 0x2919; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__217E_0080_0024_F8B6()
 *
 * @name f__217E_0080_0024_F8B6
 * @implements 217E:0080:0024:F8B6 ()
 *
 * Called From: 217E:0079:0015:2919
 */
void f__217E_0080_0024_F8B6()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_movw(&emu_cx.x, emu_get_memory16(emu_ss, emu_bp, -0x12));
	if (emu_cx.x == 0) { emu_ip = 0x0089; emu_last_cs = 0x217E; emu_last_ip = 0x0086; emu_last_length = 0x0024; emu_last_crc = 0xF8B6; emu_call(); return; } // Jump does not resolve
	emu_decw(&emu_ax.x);
	emu_movw(&emu_dx.x, 0x200);
	emu_mulw(&emu_ax.x, emu_dx.x);
	emu_addw(&emu_ax.x, emu_cx.x);
	emu_addw(&emu_ax.x, 0xF);
	emu_adcws(&emu_dx.x, 0x0);
	emu_andw(&emu_ax.x, 0xFFF0);
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_cx.x, emu_dx.x);
	emu_movw(&emu_dx.x, emu_ax.x);
	emu_movw(&emu_ax.x, 0x4200);
	emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = 0x0070; emu_push(0x00A4); f__0070_0108_0005_1CF6();
	f__217E_00A4_0006_289A();
}

/**
 * Decompiled function f__217E_00A4_0006_289A()
 *
 * @name f__217E_00A4_0006_289A
 * @implements 217E:00A4:0006:289A ()
 *
 * Called From: 217E:00A4:0024:F8B6
 */
void f__217E_00A4_0006_289A()
{
	emu_movw(&emu_cx.x, 0x10);
	emu_push(0x00AA); f__217E_0290_000A_4DAF();
	f__217E_00AA_0019_73D1();
}

/**
 * Decompiled function f__217E_00AA_0019_73D1()
 *
 * @name f__217E_00AA_0019_73D1
 * @implements 217E:00AA:0019:73D1 ()
 *
 * Called From: 217E:00AA:0006:289A
 */
void f__217E_00AA_0019_73D1()
{
	emu_pop(&emu_ax.x);
	emu_pop(&emu_dx.x);
	emu_movw(&emu_cx.x, 0xFFFD);
	if (emu_flags.cf) { emu_ip = 0x0055; emu_last_cs = 0x217E; emu_last_ip = 0x00AF; emu_last_length = 0x0019; emu_last_crc = 0x73D1; emu_call(); return; } // Jump does not resolve
	emu_addw(&emu_ax.x, 0x10);
	emu_adcws(&emu_dx.x, 0x0);
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x14), 0x4246);
	emu_movw(&emu_cx.x, 0xFFFC);
	if (emu_flags.zf) { f__217E_00C3_000F_5EF7(); return; }
	emu_ip = 0x0055; emu_last_cs = 0x217E; emu_last_ip = 0x00C1; emu_last_length = 0x0019; emu_last_crc = 0x73D1; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__217E_00C3_000F_5EF7()
 *
 * @name f__217E_00C3_000F_5EF7
 * @implements 217E:00C3:000F:5EF7 ()
 *
 * Called From: 217E:00BF:0019:73D1
 */
void f__217E_00C3_000F_5EF7()
{
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x12), 0x564F);
	if (emu_flags.zf) { f__217E_00D2_001E_E542(); return; }
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_adcw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_ip = 0x0099; emu_last_cs = 0x217E; emu_last_ip = 0x00D0; emu_last_length = 0x000F; emu_last_crc = 0x5EF7; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__217E_00D2_001E_E542()
 *
 * @name f__217E_00D2_001E_E542
 * @implements 217E:00D2:001E:E542 ()
 *
 * Called From: 217E:00C8:000F:5EF7
 */
void f__217E_00D2_001E_E542()
{
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x114), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x116), emu_dx.x);
	emu_movw(&emu_es, emu_get_memory16(emu_cs, 0x00,  0xC));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_movw(&emu_get_memory16(emu_es, 0x00,  0x661E), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_movw(&emu_get_memory16(emu_es, 0x00,  0x6620), emu_ax.x);
	emu_movb(&emu_ax.h, 0x3E);
	emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = 0x0070; emu_push(0x00F0); f__0070_0108_0005_1CF6();
	f__217E_00F0_000B_658E();
}

/**
 * Decompiled function f__217E_00F0_000B_658E()
 *
 * @name f__217E_00F0_000B_658E
 * @implements 217E:00F0:000B:658E ()
 *
 * Called From: 217E:00F0:001E:E542
 */
void f__217E_00F0_000B_658E()
{
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x128), 0x0);
	emu_push(emu_cs);
	emu_push(0x00FB); f__217E_0145_0010_E1D0();
	f__217E_00FB_0014_FA43();
}

/**
 * Decompiled function f__217E_00FB_0014_FA43()
 *
 * @name f__217E_00FB_0014_FA43
 * @implements 217E:00FB:0014:FA43 ()
 *
 * Called From: 217E:00FB:000B:658E
 */
void f__217E_00FB_0014_FA43()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_incw(&emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x124), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x120), emu_ax.x);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x126), emu_bx.x);
	emu_push(0x010F); f__217E_02A0_002C_C662();
	f__217E_010F_0014_4A5A();
}

/**
 * Decompiled function f__217E_010F_0014_4A5A()
 *
 * @name f__217E_010F_0014_4A5A
 * @implements 217E:010F:0014:4A5A ()
 *
 * Called From: 217E:010F:0014:FA43
 */
void f__217E_010F_0014_4A5A()
{
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00,  0x126));
	emu_subw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00,  0x124));
	emu_cmpw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00,  0x11A));
	if (!emu_flags.cf) { f__217E_0123_000B_299E(); return; }
	emu_movw(&emu_cx.x, 0xFFFB);
	emu_ip = 0x0055; emu_last_cs = 0x217E; emu_last_ip = 0x0120; emu_last_length = 0x0014; emu_last_crc = 0x4A5A; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__217E_0123_000B_299E()
 *
 * @name f__217E_0123_000B_299E
 * @implements 217E:0123:000B:299E ()
 *
 * Called From: 217E:011B:0014:4A5A
 */
void f__217E_0123_000B_299E()
{
	emu_shrw(&emu_bx.x, 0x1);
	emu_shrw(&emu_bx.x, 0x1);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x118), emu_bx.x);
	emu_push(0x012E); f__217E_0320_0049_3949();
	f__217E_012E_000B_B0C0();
}

/**
 * Decompiled function f__217E_012E_000B_B0C0()
 *
 * @name f__217E_012E_000B_B0C0
 * @implements 217E:012E:000B:B0C0 ()
 *
 * Called From: 217E:012E:000B:299E
 */
void f__217E_012E_000B_B0C0()
{
	if (!emu_flags.cf) { f__217E_013A_000B_4A42(); return; }
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00,  0x128));
	emu_movw(&emu_cx.x, 0xFFFF);
	emu_ip = 0x013C; emu_last_cs = 0x217E; emu_last_ip = 0x0137; emu_last_length = 0x000B; emu_last_crc = 0xB0C0; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__217E_013A_000B_4A42()
 *
 * @name f__217E_013A_000B_4A42
 * @implements 217E:013A:000B:4A42 ()
 *
 * Called From: 217E:012E:000B:B0C0
 */
void f__217E_013A_000B_4A42()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_pop(&emu_ds);
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	emu_sp += 8;
	return;
}

/**
 * Decompiled function f__217E_0145_0010_E1D0()
 *
 * @name f__217E_0145_0010_E1D0
 * @implements 217E:0145:0010:E1D0 ()
 *
 * Called From: 217E:00F8:000B:658E
 * Called From: 217E:01AA:0015:CAA0
 */
void f__217E_0145_0010_E1D0()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_ds);
	emu_movw(&emu_ds, emu_get_memory16(emu_cs, 0x00,  0xA));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ds, 0x00,  0x111));
	emu_movb(&emu_ax.h, 0x35);
	emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = 0x0070; emu_push(0x0155); f__0070_0108_0005_1CF6();
	f__217E_0155_0012_E1E2();
}

/**
 * Decompiled function f__217E_0155_0012_E1E2()
 *
 * @name f__217E_0155_0012_E1E2
 * @implements 217E:0155:0012:E1E2 ()
 *
 * Called From: 217E:0155:0010:E1D0
 */
void f__217E_0155_0012_E1E2()
{
	emu_push(emu_es);
	emu_push(emu_bx.x);
	emu_push(emu_ds);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ds, 0x00,  0x111));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x2));
	emu_movw(&emu_ds, emu_get_memory16(emu_ds, 0x00,  0x4));
	emu_movb(&emu_ax.h, 0x25);
	emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = 0x0070; emu_push(0x0167); f__0070_0108_0005_1CF6();
	f__217E_0167_0018_3A84();
}

/**
 * Decompiled function f__217E_0167_0018_3A84()
 *
 * @name f__217E_0167_0018_3A84
 * @implements 217E:0167:0018:3A84 ()
 *
 * Called From: 217E:0167:0012:E1E2
 */
void f__217E_0167_0018_3A84()
{
	emu_pop(&emu_ds);
	emu_pop(&emu_get_memory16(emu_ds, 0x00,  0x2));
	emu_pop(&emu_get_memory16(emu_ds, 0x00,  0x4));
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x128), 0x0);
	if (emu_flags.zf) { f__217E_0187_000B_6A53(); return; }
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00,  0x128));
	emu_movb(&emu_ax.h, 0x3E);
	emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = 0x0070; emu_push(0x017F); f__0070_0108_0005_1CF6();
	f__217E_017F_0008_CD90();
}

/**
 * Decompiled function f__217E_017F_0008_CD90()
 *
 * @name f__217E_017F_0008_CD90
 * @implements 217E:017F:0008:CD90 ()
 *
 * Called From: 217E:017F:0018:3A84
 */
void f__217E_017F_0008_CD90()
{
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x128), 0x0);
	f__217E_0195_0003_001A(); return;
}

/**
 * Decompiled function f__217E_0187_000B_6A53()
 *
 * @name f__217E_0187_000B_6A53
 * @implements 217E:0187:000B:6A53 ()
 *
 * Called From: 217E:0175:0018:3A84
 */
void f__217E_0187_000B_6A53()
{
	emu_movw(&emu_dx.x, 0x00 + 0x8C);
	emu_movb(&emu_ax.h, 0x3D);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ds, 0x00,  0x6));
	emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = 0x0070; emu_push(0x0192); f__0070_0108_0005_1CF6();
	f__217E_0192_0006_2DCA();
}

/**
 * Decompiled function f__217E_0192_0006_2DCA()
 *
 * @name f__217E_0192_0006_2DCA
 * @implements 217E:0192:0006:2DCA ()
 *
 * Called From: 217E:0192:000B:6A53
 */
void f__217E_0192_0006_2DCA()
{
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x128), emu_ax.x);
	emu_pop(&emu_ds);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__217E_0195_0003_001A()
 *
 * @name f__217E_0195_0003_001A
 * @implements 217E:0195:0003:001A ()
 *
 * Called From: 217E:0185:0008:CD90
 */
void f__217E_0195_0003_001A()
{
	emu_pop(&emu_ds);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__217E_0198_0015_CAA0()
 *
 * @name f__217E_0198_0015_CAA0
 * @implements 217E:0198:0015:CAA0 ()
 *
 * Called From: 01F7:0263:0015:2B26
 */
void f__217E_0198_0015_CAA0()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_ds);
	emu_movw(&emu_ds, emu_get_memory16(emu_cs, 0x00,  0xA));
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x128), 0x0);
	if (emu_flags.zf) { emu_ip = 0x01AD; emu_last_cs = 0x217E; emu_last_ip = 0x01A6; emu_last_length = 0x0015; emu_last_crc = 0xCAA0; emu_call(); return; } // Jump does not resolve
	emu_push(emu_cs);
	emu_push(0x01AD); f__217E_0145_0010_E1D0();
	f__217E_01AD_0005_0C90();
}

/**
 * Decompiled function f__217E_01AD_0005_0C90()
 *
 * @name f__217E_01AD_0005_0C90
 * @implements 217E:01AD:0005:0C90 ()
 *
 * Called From: 217E:01AD:0015:CAA0
 */
void f__217E_01AD_0005_0C90()
{
	emu_push(emu_cs);

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_ds, 0x00,  0x84);
	emu_push(0x01B2);
	switch (emu_ip) {
		case 0x125C: f__217E_125C_0001_0196(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x217E; emu_last_ip = 0x01AE; emu_last_length = 0x0005; emu_last_crc = 0x0C90;
			emu_call();
			return;
	}
	f__217E_01B2_0005_0C88();
}

/**
 * Decompiled function f__217E_01B2_0005_0C88()
 *
 * @name f__217E_01B2_0005_0C88
 * @implements 217E:01B2:0005:0C88 ()
 *
 * Called From: 217E:01B2:0005:0C90
 */
void f__217E_01B2_0005_0C88()
{
	emu_push(emu_cs);

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_ds, 0x00,  0x82);
	emu_push(0x01B7);
	switch (emu_ip) {
		case 0x125C: f__217E_125C_0001_0196(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x217E; emu_last_ip = 0x01B3; emu_last_length = 0x0005; emu_last_crc = 0x0C88;
			emu_call();
			return;
	}
	f__217E_01B7_0003_001A();
}

/**
 * Decompiled function f__217E_01B7_0003_001A()
 *
 * @name f__217E_01B7_0003_001A
 * @implements 217E:01B7:0003:001A ()
 *
 * Called From: 217E:01B7:0005:0C88
 */
void f__217E_01B7_0003_001A()
{
	emu_pop(&emu_ds);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__217E_01C6_0004_09B6()
 *
 * @name f__217E_01C6_0004_09B6
 * @implements 217E:01C6:0004:09B6 ()
 *
 * Called From: 217E:002E:0003:0516
 */
void f__217E_01C6_0004_09B6()
{
	emu_movb(&emu_ax.h, 0x30);
	emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = 0x0070; emu_push(0x01CA); f__0070_0108_0005_1CF6();
	f__217E_01CA_003A_EE5D();
}

/**
 * Decompiled function f__217E_01CA_003A_EE5D()
 *
 * @name f__217E_01CA_003A_EE5D
 * @implements 217E:01CA:003A:EE5D ()
 *
 * Called From: 217E:01CA:0004:09B6
 */
void f__217E_01CA_003A_EE5D()
{
	emu_cmpb(&emu_ax.l, 0x3);
	if (emu_flags.cf) { emu_ip = 0x020A; emu_last_cs = 0x217E; emu_last_ip = 0x01CC; emu_last_length = 0x003A; emu_last_crc = 0xEE5D; emu_call(); return; } // Jump does not resolve
	emu_movb(&emu_get_memory8(emu_ds, 0x00,  0x6), 0x20);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x353F);
	emu_movw(&emu_ds, emu_ax.x);
	emu_movw(&emu_ds, emu_get_memory16(emu_ds, 0x00,  0x77));
	emu_xorw(&emu_si, emu_si);
	emu_cld();
	emu_lodsb(emu_ds);
	emu_orb(&emu_ax.l, emu_ax.l);
	if (!emu_flags.zf) { f__217E_01E0_0024_18F3(); return; }
	emu_lodsb(emu_ds);
	emu_orb(&emu_ax.l, emu_ax.l);
	if (!emu_flags.zf) { emu_ip = 0x01E0; emu_last_cs = 0x217E; emu_last_ip = 0x01E8; emu_last_length = 0x003A; emu_last_crc = 0xEE5D; emu_call(); return; } // Jump does not resolve
	emu_lodsw(emu_ds);
	emu_movw(&emu_di, 0x00 + 0x8C);
	emu_movw(&emu_ax.x, 0x33F4);
	emu_movw(&emu_es, emu_ax.x);
	emu_movw(&emu_bx.x, emu_di);
	emu_lodsb(emu_ds);
	emu_stosb();
	emu_orb(&emu_ax.l, emu_ax.l);
	if (emu_flags.zf) { emu_ip = 0x0204; emu_last_cs = 0x217E; emu_last_ip = 0x01FA; emu_last_length = 0x003A; emu_last_crc = 0xEE5D; emu_call(); return; } // Jump does not resolve
	emu_cmpb(&emu_ax.l, 0x5C);
	if (!emu_flags.zf) { emu_ip = 0x01F6; emu_last_cs = 0x217E; emu_last_ip = 0x01FE; emu_last_length = 0x003A; emu_last_crc = 0xEE5D; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_bx.x, emu_di);
	emu_ip = 0x01F6; emu_last_cs = 0x217E; emu_last_ip = 0x0202; emu_last_length = 0x003A; emu_last_crc = 0xEE5D; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__217E_01E0_0024_18F3()
 *
 * @name f__217E_01E0_0024_18F3
 * @implements 217E:01E0:0024:18F3 ()
 *
 * Called From: 217E:01E3:0024:18F3
 * Called From: 217E:01E3:003A:EE5D
 * Called From: 217E:01E8:0024:18F3
 */
void f__217E_01E0_0024_18F3()
{
	emu_lodsb(emu_ds);
	emu_orb(&emu_ax.l, emu_ax.l);
	if (!emu_flags.zf) { f__217E_01E0_0024_18F3(); return; }
	emu_lodsb(emu_ds);
	emu_orb(&emu_ax.l, emu_ax.l);
	if (!emu_flags.zf) { f__217E_01E0_0024_18F3(); return; }
	emu_lodsw(emu_ds);
	emu_movw(&emu_di, 0x00 + 0x8C);
	emu_movw(&emu_ax.x, 0x33F4);
	emu_movw(&emu_es, emu_ax.x);
	emu_movw(&emu_bx.x, emu_di);
	emu_lodsb(emu_ds);
	emu_stosb();
	emu_orb(&emu_ax.l, emu_ax.l);
	if (emu_flags.zf) { emu_ip = 0x0204; emu_last_cs = 0x217E; emu_last_ip = 0x01FA; emu_last_length = 0x0024; emu_last_crc = 0x18F3; emu_call(); return; } // Jump does not resolve
	emu_cmpb(&emu_ax.l, 0x5C);
	if (!emu_flags.zf) { f__217E_01F6_000E_3DB9(); return; }
	emu_movw(&emu_bx.x, emu_di);
	emu_ip = 0x01F6; emu_last_cs = 0x217E; emu_last_ip = 0x0202; emu_last_length = 0x0024; emu_last_crc = 0x18F3; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__217E_01F6_000E_3DB9()
 *
 * @name f__217E_01F6_000E_3DB9
 * @implements 217E:01F6:000E:3DB9 ()
 *
 * Called From: 217E:01FE:000E:3DB9
 * Called From: 217E:01FE:0024:18F3
 * Called From: 217E:0202:000E:3DB9
 */
void f__217E_01F6_000E_3DB9()
{
	emu_lodsb(emu_ds);
	emu_stosb();
	emu_orb(&emu_ax.l, emu_ax.l);
	if (emu_flags.zf) { f__217E_0204_0005_18EC(); return; }
	emu_cmpb(&emu_ax.l, 0x5C);
	if (!emu_flags.zf) { f__217E_01F6_000E_3DB9(); return; }
	emu_movw(&emu_bx.x, emu_di);
	f__217E_01F6_000E_3DB9(); return;
}

/**
 * Decompiled function f__217E_0204_0005_18EC()
 *
 * @name f__217E_0204_0005_18EC
 * @implements 217E:0204:0005:18EC ()
 *
 * Called From: 217E:01FA:000E:3DB9
 */
void f__217E_0204_0005_18EC()
{
	emu_movw(&emu_di, emu_bx.x);
	emu_push(0x0209); f__217E_0268_0027_ED41();
	f__217E_0209_0002_01FA();
}

/**
 * Decompiled function f__217E_0209_0002_01FA()
 *
 * @name f__217E_0209_0002_01FA
 * @implements 217E:0209:0002:01FA ()
 *
 * Called From: 217E:0209:0005:18EC
 */
void f__217E_0209_0002_01FA()
{
	emu_pop(&emu_ds);

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__217E_0268_0027_ED41()
 *
 * @name f__217E_0268_0027_ED41
 * @implements 217E:0268:0027:ED41 ()
 *
 * Called From: 217E:0206:0005:18EC
 */
void f__217E_0268_0027_ED41()
{
	emu_lfp(&emu_ds, &emu_si, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_ds);
	emu_orw(&emu_ax.x, emu_si);
	if (emu_flags.zf) { f__217E_027F_0010_6AFE(); return; }
	emu_movw(&emu_cx.x, 0xC);
	emu_lodsb(emu_ds);
	emu_stosb();
	emu_orb(&emu_ax.l, emu_ax.l);
	if (emu_flags.zf) { emu_ip = 0x027F; emu_last_cs = 0x217E; emu_last_ip = 0x0278; emu_last_length = 0x0027; emu_last_crc = 0xED41; emu_call(); return; } // Jump does not resolve
	if (--emu_cx.x != 0) { emu_ip = 0x0274; emu_last_cs = 0x217E; emu_last_ip = 0x027A; emu_last_length = 0x0027; emu_last_crc = 0xED41; emu_call(); } // Jump does not resolve
	emu_subb(&emu_ax.l, emu_ax.l);
	emu_stosb();
	emu_movw(&emu_dx.x, 0x00 + 0x8C);
	emu_movw(&emu_ax.x, 0x33F4);
	emu_movw(&emu_ds, emu_ax.x);
	emu_movb(&emu_ax.h, 0x3D);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ds, 0x00,  0x6));
	emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = emu_get_memory16(0, 0, 0x21 * 4 + 2); emu_push(0x028F); emu_ip = emu_get_memory16(0, 0, 0x21 * 4 + 0); emu_last_cs = 0x217E; emu_last_ip = 0x028D; emu_last_length = 0x0027; emu_last_crc = 0xED41; emu_call(); // Jump does not resolve
	f__217E_028F_0001_0186();
}

/**
 * Decompiled function f__217E_027F_0010_6AFE()
 *
 * @name f__217E_027F_0010_6AFE
 * @implements 217E:027F:0010:6AFE ()
 *
 * Called From: 217E:026F:0027:ED41
 */
void f__217E_027F_0010_6AFE()
{
	emu_movw(&emu_dx.x, 0x00 + 0x8C);
	emu_movw(&emu_ax.x, 0x33F4);
	emu_movw(&emu_ds, emu_ax.x);
	emu_movb(&emu_ax.h, 0x3D);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ds, 0x00,  0x6));
	emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = 0x0070; emu_push(0x028F); f__0070_0108_0005_1CF6();
	f__217E_028F_0001_0186();
}

/**
 * Decompiled function f__217E_028F_0001_0186()
 *
 * @name f__217E_028F_0001_0186
 * @implements 217E:028F:0001:0186 ()
 *
 * Called From: 217E:028F:0010:6AFE
 */
void f__217E_028F_0001_0186()
{

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__217E_0290_000A_4DAF()
 *
 * @name f__217E_0290_000A_4DAF
 * @implements 217E:0290:000A:4DAF ()
 *
 * Called From: 217E:0068:000C:6B9C
 * Called From: 217E:00A7:0006:289A
 */
void f__217E_0290_000A_4DAF()
{
	emu_push(emu_ds);
	emu_movw(&emu_dx.x, emu_bp - 0x14);
	emu_push(emu_ss);
	emu_pop(&emu_ds);
	emu_movb(&emu_ax.h, 0x3F);
	emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = 0x0070; emu_push(0x029A); f__0070_0108_0005_1CF6();
	f__217E_029A_0006_0AFA();
}

/**
 * Decompiled function f__217E_029A_0006_0AFA()
 *
 * @name f__217E_029A_0006_0AFA
 * @implements 217E:029A:0006:0AFA ()
 *
 * Called From: 217E:029A:000A:4DAF
 */
void f__217E_029A_0006_0AFA()
{
	emu_pop(&emu_ds);
	if (emu_flags.cf) { emu_ip = 0x029F; emu_last_cs = 0x217E; emu_last_ip = 0x029B; emu_last_length = 0x0006; emu_last_crc = 0x0AFA; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_ax.x, emu_cx.x);

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__217E_02A0_002C_C662()
 *
 * @name f__217E_02A0_002C_C662
 * @implements 217E:02A0:002C:C662 ()
 *
 * Called From: 217E:010C:0014:FA43
 * Called From: 217E:0D34:000B:D38F
 */
void f__217E_02A0_002C_C662()
{
	emu_movw(&emu_ax.x, 0x353F);
	emu_movw(&emu_es, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, 0x00,  0x7B));
	emu_addw(&emu_ax.x, 0x10);
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x13), emu_ax.x);
	emu_movw(&emu_ax.x, 0x3405);
	emu_movw(&emu_es, emu_ax.x);
	emu_xorw(&emu_bx.x, emu_bx.x);
	emu_xorw(&emu_di, emu_di);
	emu_movw(&emu_si, 0x00 + 0x1A0);
	emu_testw(&emu_get_memory16(emu_ds, emu_si,  0x4), 0x2);
	if (emu_flags.zf) { f__217E_02CA_0002_03D2(); return; }
	emu_cmpws(&emu_get_memory16(emu_ds, emu_si,  0x2), 0x0);
	if (!emu_flags.zf) { emu_ip = 0x02CD; emu_last_cs = 0x217E; emu_last_ip = 0x02C8; emu_last_length = 0x002C; emu_last_crc = 0xC662; emu_call(); return; } // Jump does not resolve
	emu_ip = 0x030B; emu_last_cs = 0x217E; emu_last_ip = 0x02CA; emu_last_length = 0x002C; emu_last_crc = 0xC662; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__217E_02BD_000F_4571()
 *
 * @name f__217E_02BD_000F_4571
 * @implements 217E:02BD:000F:4571 ()
 *
 * Called From: 217E:0314:000B:C6C5
 * Called From: 217E:0314:0011:864D
 */
void f__217E_02BD_000F_4571()
{
	emu_testw(&emu_get_memory16(emu_ds, emu_si,  0x4), 0x2);
	if (emu_flags.zf) { f__217E_02CA_0002_03D2(); return; }
	emu_cmpws(&emu_get_memory16(emu_ds, emu_si,  0x2), 0x0);
	if (!emu_flags.zf) { f__217E_02CD_001B_433D(); return; }
	emu_ip = 0x030B; emu_last_cs = 0x217E; emu_last_ip = 0x02CA; emu_last_length = 0x000F; emu_last_crc = 0x4571; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__217E_02CA_0002_03D2()
 *
 * @name f__217E_02CA_0002_03D2
 * @implements 217E:02CA:0002:03D2 ()
 *
 * Called From: 217E:02C2:000F:4571
 * Called From: 217E:02C2:002C:C662
 */
void f__217E_02CA_0002_03D2()
{
	f__217E_030B_000B_C6C5(); return;
}

/**
 * Decompiled function f__217E_02CD_001B_433D()
 *
 * @name f__217E_02CD_001B_433D
 * @implements 217E:02CD:001B:433D ()
 *
 * Called From: 217E:02C8:000F:4571
 */
void f__217E_02CD_001B_433D()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, emu_si,  0x0));
	emu_push(emu_es);
	emu_movw(&emu_get_memory16(emu_es, 0x00,  0x12), emu_ax.x);
	emu_movw(&emu_es, emu_ax.x);
	emu_cmpb(&emu_get_memory8(emu_es, 0x00,  0x1A), 0xFF);
	if (!emu_flags.zf) { f__217E_02E9_001C_1FC0(); return; }
	emu_pop(&emu_es);
	emu_movw(&emu_get_memory16(emu_es, 0x00,  0x12), 0x0);
	emu_ip = 0x030B; emu_last_cs = 0x217E; emu_last_ip = 0x02E6; emu_last_length = 0x001B; emu_last_crc = 0x433D; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__217E_02E9_001C_1FC0()
 *
 * @name f__217E_02E9_001C_1FC0
 * @implements 217E:02E9:001C:1FC0 ()
 *
 * Called From: 217E:02DC:001B:433D
 */
void f__217E_02E9_001C_1FC0()
{
	emu_pop(&emu_ax.x);
	emu_movw(&emu_get_memory16(emu_es, 0x00,  0x18), 0x4CB);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x114));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x116));
	emu_addw(&emu_get_memory16(emu_es, 0x00,  0x4), emu_ax.x);
	emu_adcw(&emu_get_memory16(emu_es, 0x00,  0x6), emu_dx.x);
	emu_push(0x0305); f__217E_07B2_0018_3197();
	f__217E_0305_0011_864D();
}

/**
 * Decompiled function f__217E_0305_0011_864D()
 *
 * @name f__217E_0305_0011_864D
 * @implements 217E:0305:0011:864D ()
 *
 * Called From: 217E:0305:001C:1FC0
 */
void f__217E_0305_0011_864D()
{
	emu_cmpw(&emu_bx.x, emu_dx.x);
	if (!emu_flags.cf) { f__217E_030B_000B_C6C5(); return; }
	emu_xchgw(&emu_dx.x, &emu_bx.x);
	emu_addws(&emu_si, 0x8);
	emu_cmpw(&emu_si, 0x8B0);
	if (!emu_flags.cf) { emu_ip = 0x0316; emu_last_cs = 0x217E; emu_last_ip = 0x0312; emu_last_length = 0x0011; emu_last_crc = 0x864D; emu_call(); return; } // Jump does not resolve
	f__217E_02BD_000F_4571(); return;
}

/**
 * Decompiled function f__217E_030B_000B_C6C5()
 *
 * @name f__217E_030B_000B_C6C5
 * @implements 217E:030B:000B:C6C5 ()
 *
 * Called From: 217E:02CA:0002:03D2
 * Called From: 217E:0307:0011:864D
 */
void f__217E_030B_000B_C6C5()
{
	emu_addws(&emu_si, 0x8);
	emu_cmpw(&emu_si, 0x8B0);
	if (!emu_flags.cf) { f__217E_0316_000A_BF93(); return; }
	f__217E_02BD_000F_4571(); return;
}

/**
 * Decompiled function f__217E_0316_000A_BF93()
 *
 * @name f__217E_0316_000A_BF93
 * @implements 217E:0316:000A:BF93 ()
 *
 * Called From: 217E:0312:000B:C6C5
 */
void f__217E_0316_000A_BF93()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_addws(&emu_bx.x, 0x2);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x11A), emu_bx.x);

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__217E_0320_0049_3949()
 *
 * @name f__217E_0320_0049_3949
 * @implements 217E:0320:0049:3949 ()
 *
 * Called From: 217E:012B:000B:299E
 */
void f__217E_0320_0049_3949()
{
	emu_movw(&emu_cx.x, emu_get_memory16(emu_ds, 0x00,  0x122));
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x12C), emu_cx.x);
	emu_movw(&emu_bx.x, emu_cx.x);
	emu_movw(&emu_si, emu_get_memory16(emu_ds, 0x00,  0x124));
	emu_movw(&emu_di, emu_get_memory16(emu_ds, 0x00,  0x126));
	emu_push(emu_ds);
	emu_movw(&emu_ds, emu_cx.x);
	emu_movw(&emu_cx.x, emu_get_memory16(emu_ds, 0x00,  0x12));
	if (emu_cx.x == 0) { emu_ip = 0x0369; emu_last_cs = 0x217E; emu_last_ip = 0x0339; emu_last_length = 0x0049; emu_last_crc = 0x3949; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_es, emu_cx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, 0x00,  0x4));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_es, 0x00,  0x6));
	emu_subw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x4));
	emu_sbbw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x6));
	emu_movw(&emu_cx.x, 0x10);
	emu_divw(&emu_ax.x, emu_cx.x);
	emu_addw(&emu_ax.x, emu_si);
	emu_cmpw(&emu_ax.x, emu_di);
	if (!(emu_flags.cf || emu_flags.zf)) { emu_ip = 0x0369; emu_last_cs = 0x217E; emu_last_ip = 0x0357; emu_last_length = 0x0049; emu_last_crc = 0x3949; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x10), emu_si);
	emu_movw(&emu_si, emu_ax.x);
	emu_movw(&emu_cx.x, emu_es);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x1C), emu_cx.x);
	emu_movw(&emu_bx.x, emu_ds);
	f__217E_0333_0036_532B(); return;
}

/**
 * Decompiled function f__217E_0333_0036_532B()
 *
 * @name f__217E_0333_0036_532B
 * @implements 217E:0333:0036:532B ()
 *
 * Called From: 217E:0367:0036:532B
 * Called From: 217E:0367:0049:3949
 */
void f__217E_0333_0036_532B()
{
	emu_movw(&emu_ds, emu_cx.x);
	emu_movw(&emu_cx.x, emu_get_memory16(emu_ds, 0x00,  0x12));
	if (emu_cx.x == 0) { emu_ip = 0x0369; emu_last_cs = 0x217E; emu_last_ip = 0x0339; emu_last_length = 0x0036; emu_last_crc = 0x532B; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_es, emu_cx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, 0x00,  0x4));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_es, 0x00,  0x6));
	emu_subw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x4));
	emu_sbbw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x6));
	emu_movw(&emu_cx.x, 0x10);
	emu_divw(&emu_ax.x, emu_cx.x);
	emu_addw(&emu_ax.x, emu_si);
	emu_cmpw(&emu_ax.x, emu_di);
	if (!(emu_flags.cf || emu_flags.zf)) { f__217E_0369_0016_C6DF(); return; }
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x10), emu_si);
	emu_movw(&emu_si, emu_ax.x);
	emu_movw(&emu_cx.x, emu_es);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x1C), emu_cx.x);
	emu_movw(&emu_bx.x, emu_ds);
	f__217E_0333_0036_532B(); return;
}

/**
 * Decompiled function f__217E_0369_0016_C6DF()
 *
 * @name f__217E_0369_0016_C6DF
 * @implements 217E:0369:0016:C6DF ()
 *
 * Called From: 217E:0357:0036:532B
 */
void f__217E_0369_0016_C6DF()
{
	emu_movw(&emu_ds, emu_bx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x1C), 0x0);
	emu_pop(&emu_ds);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x120), emu_si);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x124));
	emu_subw(&emu_si, emu_ax.x);
	if (!emu_flags.zf) { f__217E_0380_001D_8AB2(); return; }
	emu_ip = 0x03DE; emu_last_cs = 0x217E; emu_last_ip = 0x037D; emu_last_length = 0x0016; emu_last_crc = 0xC6DF; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__217E_0380_001D_8AB2()
 *
 * @name f__217E_0380_001D_8AB2
 * @implements 217E:0380:001D:8AB2 ()
 *
 * Called From: 217E:037B:0016:C6DF
 */
void f__217E_0380_001D_8AB2()
{
	emu_movb(&emu_cx.l, 0x4);
	emu_rolw(&emu_si, emu_cx.l);
	emu_movw(&emu_di, emu_si);
	emu_andws(&emu_di, 0xF);
	emu_andws(&emu_si, 0xF0);
	emu_movw(&emu_es, emu_get_memory16(emu_ds, 0x00,  0x12C));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_es, 0x00,  0x4));
	emu_movw(&emu_cx.x, emu_get_memory16(emu_es, 0x00,  0x6));
	emu_push(0x039D); f__217E_03ED_000A_4A26();
	f__217E_039D_0012_FE3F();
}

/**
 * Decompiled function f__217E_039D_0012_FE3F()
 *
 * @name f__217E_039D_0012_FE3F
 * @implements 217E:039D:0012:FE3F ()
 *
 * Called From: 217E:039D:001D:8AB2
 */
void f__217E_039D_0012_FE3F()
{
	if (emu_flags.cf) { emu_ip = 0x03DF; emu_last_cs = 0x217E; emu_last_ip = 0x039D; emu_last_length = 0x0012; emu_last_crc = 0xFE3F; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x12C));
	emu_push(emu_ds);
	emu_movw(&emu_es, emu_ax.x);
	emu_movw(&emu_cx.x, emu_get_memory16(emu_es, 0x00,  0xA));
	if (emu_cx.x == 0) { emu_ip = 0x03AF; emu_last_cs = 0x217E; emu_last_ip = 0x03AA; emu_last_length = 0x0012; emu_last_crc = 0xFE3F; emu_call(); return; } // Jump does not resolve
	emu_push(0x03AF); f__217E_0426_003F_0EA1();
	f__217E_03AF_000B_468F();
}

/**
 * Decompiled function f__217E_03A3_000C_7FC3()
 *
 * @name f__217E_03A3_000C_7FC3
 * @implements 217E:03A3:000C:7FC3 ()
 *
 * Called From: 217E:03DB:000C:C9DD
 */
void f__217E_03A3_000C_7FC3()
{
	emu_movw(&emu_es, emu_ax.x);
	emu_movw(&emu_cx.x, emu_get_memory16(emu_es, 0x00,  0xA));
	if (emu_cx.x == 0) { f__217E_03AF_000B_468F(); return; }
	emu_push(0x03AF); f__217E_0426_003F_0EA1();
	f__217E_03AF_000B_468F();
}

/**
 * Decompiled function f__217E_03AF_000B_468F()
 *
 * @name f__217E_03AF_000B_468F
 * @implements 217E:03AF:000B:468F ()
 *
 * Called From: 217E:03AA:000C:7FC3
 * Called From: 217E:03AF:000C:7FC3
 * Called From: 217E:03AF:0012:FE3F
 */
void f__217E_03AF_000B_468F()
{
	emu_cmpws(&emu_get_memory16(emu_es, 0x00,  0xC), 0x0);
	if (emu_flags.zf) { f__217E_03BA_001A_3A87(); return; }
	emu_push(0x03BA); f__217E_0698_001E_84AA();
	f__217E_03BA_001A_3A87();
}

/**
 * Decompiled function f__217E_03BA_001A_3A87()
 *
 * @name f__217E_03BA_001A_3A87
 * @implements 217E:03BA:001A:3A87 ()
 *
 * Called From: 217E:03B5:000B:468F
 * Called From: 217E:03BA:000B:468F
 */
void f__217E_03BA_001A_3A87()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, 0x00,  0x10));
	emu_decw(&emu_ax.x);
	emu_movw(&emu_ds, emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0xE), emu_es);
	emu_push(emu_es);
	emu_movw(&emu_ax.x, 0xFFFF);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_ds, emu_get_memory16(emu_cs, 0x00,  0xA));

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_ds, 0x00,  0x86);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_ds, 0x00,  0x88);
	emu_push(0x03D4);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x01F702C9: f__01F7_02C9_0001_0196(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x217E; emu_last_ip = 0x03D0; emu_last_length = 0x001A; emu_last_crc = 0x3A87;
			emu_call();
			return;
	}
	f__217E_03D4_000C_C9DD();
}

/**
 * Decompiled function f__217E_03D4_000C_C9DD()
 *
 * @name f__217E_03D4_000C_C9DD
 * @implements 217E:03D4:000C:C9DD ()
 *
 * Called From: 217E:03D4:001A:3A87
 */
void f__217E_03D4_000C_C9DD()
{
	emu_pop(&emu_es);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, 0x00,  0x1C));
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.zf) { f__217E_03A3_000C_7FC3(); return; }
	emu_pop(&emu_ds);
	emu_clc();

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__217E_03ED_000A_4A26()
 *
 * @name f__217E_03ED_000A_4A26
 * @implements 217E:03ED:000A:4A26 ()
 *
 * Called From: 217E:039A:001D:8AB2
 * Called From: 217E:04E8:0020:0F58
 */
void f__217E_03ED_000A_4A26()
{
	emu_push(emu_ax.x);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00,  0x128));
	emu_movw(&emu_ax.x, 0x4200);
	emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = 0x0070; emu_push(0x03F7); f__0070_0108_0005_1CF6();
	f__217E_03F7_0006_1842();
}

/**
 * Decompiled function f__217E_03F7_0006_1842()
 *
 * @name f__217E_03F7_0006_1842
 * @implements 217E:03F7:0006:1842 ()
 *
 * Called From: 217E:03F7:000A:4A26
 */
void f__217E_03F7_0006_1842()
{
	emu_pop(&emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ds, emu_ax.x);
	f__217E_0404_000F_0B37(); return;
}

/**
 * Decompiled function f__217E_0404_000F_0B37()
 *
 * @name f__217E_0404_000F_0B37
 * @implements 217E:0404:000F:0B37 ()
 *
 * Called From: 217E:03FB:0006:1842
 */
void f__217E_0404_000F_0B37()
{
	emu_movw(&emu_cx.x, 0xFFF0);
	emu_orw(&emu_di, emu_di);
	if (!emu_flags.zf) { emu_ip = 0x040D; emu_last_cs = 0x217E; emu_last_ip = 0x0409; emu_last_length = 0x000F; emu_last_crc = 0x0B37; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_cx.x, emu_si);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_movb(&emu_ax.h, 0x3F);
	emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = 0x0070; emu_push(0x0413); f__0070_0108_0005_1CF6();
	f__217E_0413_0013_356F();
}

/**
 * Decompiled function f__217E_0413_0013_356F()
 *
 * @name f__217E_0413_0013_356F
 * @implements 217E:0413:0013:356F ()
 *
 * Called From: 217E:0413:000F:0B37
 */
void f__217E_0413_0013_356F()
{
	if (emu_flags.cf) { emu_ip = 0x0424; emu_last_cs = 0x217E; emu_last_ip = 0x0413; emu_last_length = 0x0013; emu_last_crc = 0x356F; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_ax.x, emu_cx.x);
	if (emu_flags.cf) { emu_ip = 0x0424; emu_last_cs = 0x217E; emu_last_ip = 0x0417; emu_last_length = 0x0013; emu_last_crc = 0x356F; emu_call(); return; } // Jump does not resolve
	emu_subw(&emu_si, emu_ax.x);
	emu_sbbws(&emu_di, 0x0);
	emu_movw(&emu_ax.x, emu_si);
	emu_orw(&emu_ax.x, emu_di);
	if (!emu_flags.zf) { emu_ip = 0x03FD; emu_last_cs = 0x217E; emu_last_ip = 0x0422; emu_last_length = 0x0013; emu_last_crc = 0x356F; emu_call(); return; } // Jump does not resolve
	emu_pop(&emu_ds);

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__217E_0426_003F_0EA1()
 *
 * @name f__217E_0426_003F_0EA1
 * @implements 217E:0426:003F:0EA1 ()
 *
 * Called From: 217E:03AC:000C:7FC3
 * Called From: 217E:03AC:0012:FE3F
 * Called From: 217E:04F4:000C:E754
 */
void f__217E_0426_003F_0EA1()
{
	emu_push(emu_ds);
	emu_push(emu_es);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, 0x00,  0x8));
	emu_movw(&emu_si, emu_ax.x);
	emu_andws(&emu_si, 0xF);
	emu_shrw(&emu_ax.x, 0x1);
	emu_shrw(&emu_ax.x, 0x1);
	emu_shrw(&emu_ax.x, 0x1);
	emu_shrw(&emu_ax.x, 0x1);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_es, 0x00,  0x10));
	emu_addw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_ds, emu_ax.x);
	emu_movw(&emu_es, emu_dx.x);
	emu_shrw(&emu_cx.x, 0x1);
	emu_cld();
	emu_lodsw(emu_ds);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_di, emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x340E);
	emu_movw(&emu_ds, emu_ax.x);
	emu_movw(&emu_ax.x, emu_di);
	emu_andws(&emu_di, 0xF8);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, emu_di,  0x0));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x0), emu_dx.x);
	emu_testw(&emu_ax.x, 0x1);
	if (emu_flags.zf) { f__217E_0465_0006_17B2(); return; }
	emu_push(0x0465); emu_ip = 0x046B; emu_last_cs = 0x217E; emu_last_ip = 0x0462; emu_last_length = 0x003F; emu_last_crc = 0x0EA1; emu_call(); // Jump does not resolve
	f__217E_0465_0006_17B2();
}

/**
 * Decompiled function f__217E_0447_001E_A203()
 *
 * @name f__217E_0447_001E_A203
 * @implements 217E:0447:001E:A203 ()
 *
 * Called From: 217E:0466:0006:17B2
 */
void f__217E_0447_001E_A203()
{
	emu_lodsw(emu_ds);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_di, emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x340E);
	emu_movw(&emu_ds, emu_ax.x);
	emu_movw(&emu_ax.x, emu_di);
	emu_andws(&emu_di, 0xF8);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, emu_di,  0x0));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x0), emu_dx.x);
	emu_testw(&emu_ax.x, 0x1);
	if (emu_flags.zf) { f__217E_0465_0006_17B2(); return; }
	emu_push(0x0465); emu_ip = 0x046B; emu_last_cs = 0x217E; emu_last_ip = 0x0462; emu_last_length = 0x001E; emu_last_crc = 0xA203; emu_call(); // Jump does not resolve
	f__217E_0465_0006_17B2();
}

/**
 * Decompiled function f__217E_0465_0006_17B2()
 *
 * @name f__217E_0465_0006_17B2
 * @implements 217E:0465:0006:17B2 ()
 *
 * Called From: 217E:0460:001E:A203
 * Called From: 217E:0460:003F:0EA1
 */
void f__217E_0465_0006_17B2()
{
	emu_pop(&emu_ds);
	if (--emu_cx.x != 0) { f__217E_0447_001E_A203(); return; }
	emu_pop(&emu_es);
	emu_pop(&emu_ds);

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__217E_04CB_0020_0F58()
 *
 * @name f__217E_04CB_0020_0F58
 * @implements 217E:04CB:0020:0F58 ()
 *
 * Called From: 217E:05D6:000E:9E22
 */
void f__217E_04CB_0020_0F58()
{
	emu_movw(&emu_si, emu_get_memory16(emu_es, 0x00,  0x8));
	emu_xorw(&emu_di, emu_di);
	emu_addw(&emu_si, emu_get_memory16(emu_es, 0x00,  0xA));
	emu_adcws(&emu_di, 0x0);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_es, 0x00,  0x4));
	emu_movw(&emu_cx.x, emu_get_memory16(emu_es, 0x00,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, 0x00,  0x10));
	emu_push(0x04EB); f__217E_03ED_000A_4A26();
	f__217E_04EB_000C_E754();
}

/**
 * Decompiled function f__217E_04EB_000C_E754()
 *
 * @name f__217E_04EB_000C_E754
 * @implements 217E:04EB:000C:E754 ()
 *
 * Called From: 217E:04EB:0020:0F58
 */
void f__217E_04EB_000C_E754()
{
	if (emu_flags.cf) { emu_ip = 0x04F8; emu_last_cs = 0x217E; emu_last_ip = 0x04EB; emu_last_length = 0x000C; emu_last_crc = 0xE754; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_cx.x, emu_get_memory16(emu_es, 0x00,  0xA));
	if (emu_cx.x == 0) { emu_ip = 0x04F7; emu_last_cs = 0x217E; emu_last_ip = 0x04F2; emu_last_length = 0x000C; emu_last_crc = 0xE754; emu_call(); return; } // Jump does not resolve
	emu_push(0x04F7); f__217E_0426_003F_0EA1();
	f__217E_04F7_0002_0266();
}

/**
 * Decompiled function f__217E_04F7_0002_0266()
 *
 * @name f__217E_04F7_0002_0266
 * @implements 217E:04F7:0002:0266 ()
 *
 * Called From: 217E:04F7:000C:E754
 */
void f__217E_04F7_0002_0266()
{
	emu_clc();

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__217E_04F9_000E_A643()
 *
 * @name f__217E_04F9_000E_A643
 * @implements 217E:04F9:000E:A643 ()
 *
 * Called From: 261F:0181:001D:A8B7
 */
void f__217E_04F9_000E_A643()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_addws(&emu_bp, 0x6);
	if (!emu_flags.zf) { f__217E_0507_001D_F972(); return; }
	emu_cs = 0x01F7; emu_ip = 0x07B3; emu_last_cs = 0x217E; emu_last_ip = 0x0502; emu_last_length = 0x000E; emu_last_crc = 0xA643; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__217E_0507_001D_F972()
 *
 * @name f__217E_0507_001D_F972
 * @implements 217E:0507:001D:F972 ()
 *
 * Called From: 217E:04FF:000E:A643
 */
void f__217E_0507_001D_F972()
{
	emu_push(emu_ax.x);
	emu_push(emu_bx.x);
	emu_push(emu_cx.x);
	emu_push(emu_dx.x);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_push(emu_ds);
	emu_push(emu_es);
	emu_movw(&emu_ax.x, 0x33F4);
	emu_movw(&emu_ds, emu_ax.x);
	emu_sti();
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x2));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_subws(&emu_get_memory16(emu_ss, emu_bp,  0x2), 0x2);
	if (!emu_flags.zf) { f__217E_0526_000F_996B(); return; }
	emu_push(0x0524); f__217E_05A9_001A_E917();
	f__217E_0524_0002_039C();
}

/**
 * Decompiled function f__217E_0524_0002_039C()
 *
 * @name f__217E_0524_0002_039C
 * @implements 217E:0524:0002:039C ()
 *
 * Called From: 217E:0524:001D:F972
 */
void f__217E_0524_0002_039C()
{
	f__217E_053E_0017_FBD1(); return;
}

/**
 * Decompiled function f__217E_0526_000F_996B()
 *
 * @name f__217E_0526_000F_996B
 * @implements 217E:0526:000F:996B ()
 *
 * Called From: 217E:051F:001D:F972
 */
void f__217E_0526_000F_996B()
{
	emu_addws(&emu_bp, 0x6);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x0));
	emu_xchgw(&emu_get_memory16(emu_ss, emu_bp, -0x6), &emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0x0), emu_ax.x);
	emu_push(0x0535); f__217E_05A9_001A_E917();
	f__217E_0535_0020_0368();
}

/**
 * Decompiled function f__217E_0535_0020_0368()
 *
 * @name f__217E_0535_0020_0368
 * @implements 217E:0535:0020:0368 ()
 *
 * Called From: 217E:0535:000F:996B
 */
void f__217E_0535_0020_0368()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x0));
	emu_xchgw(&emu_get_memory16(emu_ss, emu_bp, -0x6), &emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0x0), emu_ax.x);
	emu_pop(&emu_bx.x);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, 0x00,  0x1A));
	emu_andb(&emu_ax.l, 0x8);
	emu_andb(&emu_get_memory8(emu_es, 0x00,  0x1A), 0xF7);
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_movw(&emu_ds, emu_get_memory16(emu_cs, 0x00,  0xA));

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_ds, 0x00,  0x86);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_ds, 0x00,  0x88);
	emu_push(0x0555);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x01F702C9: f__01F7_02C9_0001_0196(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x217E; emu_last_ip = 0x0551; emu_last_length = 0x0020; emu_last_crc = 0x0368;
			emu_call();
			return;
	}
	f__217E_0555_000A_4832();
}

/**
 * Decompiled function f__217E_053E_0017_FBD1()
 *
 * @name f__217E_053E_0017_FBD1
 * @implements 217E:053E:0017:FBD1 ()
 *
 * Called From: 217E:0524:0002:039C
 */
void f__217E_053E_0017_FBD1()
{
	emu_pop(&emu_bx.x);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, 0x00,  0x1A));
	emu_andb(&emu_ax.l, 0x8);
	emu_andb(&emu_get_memory8(emu_es, 0x00,  0x1A), 0xF7);
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_movw(&emu_ds, emu_get_memory16(emu_cs, 0x00,  0xA));

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_ds, 0x00,  0x86);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_ds, 0x00,  0x88);
	emu_push(0x0555);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x01F702C9: f__01F7_02C9_0001_0196(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x217E; emu_last_ip = 0x0551; emu_last_length = 0x0017; emu_last_crc = 0xFBD1;
			emu_call();
			return;
	}
	f__217E_0555_000A_4832();
}

/**
 * Decompiled function f__217E_0555_000A_4832()
 *
 * @name f__217E_0555_000A_4832
 * @implements 217E:0555:000A:4832 ()
 *
 * Called From: 217E:0555:0017:FBD1
 * Called From: 217E:0555:0020:0368
 */
void f__217E_0555_000A_4832()
{
	emu_pop(&emu_es);
	emu_pop(&emu_ds);
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_pop(&emu_dx.x);
	emu_pop(&emu_cx.x);
	emu_pop(&emu_bx.x);
	emu_pop(&emu_ax.x);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__217E_055F_0008_7B38()
 *
 * @name f__217E_055F_0008_7B38
 * @implements 217E:055F:0008:7B38 ()
 *
 * Called From: 217E:05CA:0009:C9F6
 */
void f__217E_055F_0008_7B38()
{
	emu_push(emu_es);
	emu_incw(&emu_get_memory16(emu_ds, 0x00,  0x12A));
	emu_push(0x0567); f__217E_07B2_0018_3197();
	f__217E_0567_0002_03F0();
}

/**
 * Decompiled function f__217E_0567_0002_03F0()
 *
 * @name f__217E_0567_0002_03F0
 * @implements 217E:0567:0002:03F0 ()
 *
 * Called From: 217E:0567:0008:7B38
 */
void f__217E_0567_0002_03F0()
{
	f__217E_0597_0003_0482(); return;
}

/**
 * Decompiled function f__217E_0569_0007_5020()
 *
 * @name f__217E_0569_0007_5020
 * @implements 217E:0569:0007:5020 ()
 *
 * Called From: 217E:059D:000F:24EF
 */
void f__217E_0569_0007_5020()
{
	emu_popf();
	emu_push(emu_dx.x);
	if (!emu_flags.cf) { f__217E_0570_0016_2C78(); return; }
	emu_push(0x0570); f__217E_063C_002A_37A4();
	f__217E_0570_0016_2C78();
}

/**
 * Decompiled function f__217E_0570_0016_2C78()
 *
 * @name f__217E_0570_0016_2C78
 * @implements 217E:0570:0016:2C78 ()
 *
 * Called From: 217E:056B:0007:5020
 * Called From: 217E:0570:0007:5020
 */
void f__217E_0570_0016_2C78()
{
	emu_movw(&emu_es, emu_get_memory16(emu_ds, 0x00,  0x12C));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, 0x00,  0x1C));
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x12C), emu_ax.x);
	emu_cmpb(&emu_get_memory8(emu_es, 0x00,  0x1B), 0x0);
	if (!emu_flags.zf) { f__217E_058B_0008_5FFA(); return; }
	emu_push(0x0586); f__217E_0624_0003_057C();
	f__217E_0586_0003_0730();
}

/**
 * Decompiled function f__217E_0586_0003_0730()
 *
 * @name f__217E_0586_0003_0730
 * @implements 217E:0586:0003:0730 ()
 *
 * Called From: 217E:0586:0016:2C78
 */
void f__217E_0586_0003_0730()
{
	emu_push(0x0589); f__217E_07A6_000C_5759();
	f__217E_0589_0002_03BA();
}

/**
 * Decompiled function f__217E_0589_0002_03BA()
 *
 * @name f__217E_0589_0002_03BA
 * @implements 217E:0589:0002:03BA ()
 *
 * Called From: 217E:0589:0003:0730
 */
void f__217E_0589_0002_03BA()
{
	f__217E_0596_0004_0122(); return;
}

/**
 * Decompiled function f__217E_058B_0008_5FFA()
 *
 * @name f__217E_058B_0008_5FFA
 * @implements 217E:058B:0008:5FFA ()
 *
 * Called From: 217E:0581:0016:2C78
 */
void f__217E_058B_0008_5FFA()
{
	emu_decb(&emu_get_memory8(emu_es, 0x00,  0x1B));
	emu_push(0x0593); f__217E_06E9_0041_98B4();
	f__217E_0593_0003_05D2();
}

/**
 * Decompiled function f__217E_0593_0003_05D2()
 *
 * @name f__217E_0593_0003_05D2
 * @implements 217E:0593:0003:05D2 ()
 *
 * Called From: 217E:0593:0008:5FFA
 */
void f__217E_0593_0003_05D2()
{
	emu_push(0x0596); f__217E_073A_0003_06E4();
	f__217E_0596_0004_0122();
}

/**
 * Decompiled function f__217E_0596_0004_0122()
 *
 * @name f__217E_0596_0004_0122
 * @implements 217E:0596:0004:0122 ()
 *
 * Called From: 217E:0589:0002:03BA
 * Called From: 217E:0596:0003:05D2
 */
void f__217E_0596_0004_0122()
{
	emu_pop(&emu_dx.x);
	emu_push(0x059A); f__217E_078A_001C_43A7();
	f__217E_059A_000F_24EF();
}

/**
 * Decompiled function f__217E_0597_0003_0482()
 *
 * @name f__217E_0597_0003_0482
 * @implements 217E:0597:0003:0482 ()
 *
 * Called From: 217E:0567:0002:03F0
 */
void f__217E_0597_0003_0482()
{
	emu_push(0x059A); f__217E_078A_001C_43A7();
	f__217E_059A_000F_24EF();
}

/**
 * Decompiled function f__217E_059A_000F_24EF()
 *
 * @name f__217E_059A_000F_24EF
 * @implements 217E:059A:000F:24EF ()
 *
 * Called From: 217E:059A:0003:0482
 * Called From: 217E:059A:0004:0122
 */
void f__217E_059A_000F_24EF()
{
	emu_pushf();
	emu_cmpw(&emu_dx.x, emu_ax.x);
	if (!(emu_flags.cf || emu_flags.zf)) { f__217E_0569_0007_5020(); return; }
	emu_popf();
	emu_pop(&emu_es);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x120));
	emu_movw(&emu_get_memory16(emu_es, 0x00,  0x10), emu_ax.x);

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__217E_05A9_001A_E917()
 *
 * @name f__217E_05A9_001A_E917
 * @implements 217E:05A9:001A:E917 ()
 *
 * Called From: 217E:0521:001D:F972
 * Called From: 217E:0532:000F:996B
 */
void f__217E_05A9_001A_E917()
{
	emu_incw(&emu_get_memory16(emu_ds, 0x00,  0x11C));
	emu_cmpws(&emu_get_memory16(emu_es, 0x00,  0x10), 0x0);
	if (emu_flags.zf) { f__217E_05C4_0009_C9F6(); return; }
	emu_movb(&emu_get_memory8(emu_es, 0x00,  0x1B), 0x1);
	emu_orb(&emu_get_memory8(emu_es, 0x00,  0x1A), 0x4);
	f__217E_05E0_0003_0510(); return;
}

/**
 * Decompiled function f__217E_05C4_0009_C9F6()
 *
 * @name f__217E_05C4_0009_C9F6
 * @implements 217E:05C4:0009:C9F6 ()
 *
 * Called From: 217E:05B3:001A:E917
 */
void f__217E_05C4_0009_C9F6()
{
	emu_orb(&emu_get_memory8(emu_es, 0x00,  0x1A), 0x8);
	emu_push(0x05CD); f__217E_055F_0008_7B38();
	f__217E_05CD_000E_9E22();
}

/**
 * Decompiled function f__217E_05CD_000E_9E22()
 *
 * @name f__217E_05CD_000E_9E22
 * @implements 217E:05CD:000E:9E22 ()
 *
 * Called From: 217E:05CD:0009:C9F6
 */
void f__217E_05CD_000E_9E22()
{
	emu_push(emu_ds);
	emu_decw(&emu_ax.x);
	emu_movw(&emu_ds, emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0xE), emu_es);
	emu_pop(&emu_ds);

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_es, 0x00,  0x18);
	emu_push(0x05DB);
	switch (emu_ip) {
		case 0x04CB: f__217E_04CB_0020_0F58(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x217E; emu_last_ip = 0x05D6; emu_last_length = 0x000E; emu_last_crc = 0x9E22;
			emu_call();
			return;
	}
	f__217E_05DB_0005_0C4A();
}

/**
 * Decompiled function f__217E_05DB_0005_0C4A()
 *
 * @name f__217E_05DB_0005_0C4A
 * @implements 217E:05DB:0005:0C4A ()
 *
 * Called From: 217E:05DB:000E:9E22
 */
void f__217E_05DB_0005_0C4A()
{
	if (emu_flags.cf) { emu_ip = 0x061F; emu_last_cs = 0x217E; emu_last_ip = 0x05DB; emu_last_length = 0x0005; emu_last_crc = 0x0C4A; emu_call(); return; } // Jump does not resolve
	emu_push(0x05E0); f__217E_073A_0003_06E4();
	f__217E_05E0_0003_0510();
}

/**
 * Decompiled function f__217E_05E0_0003_0510()
 *
 * @name f__217E_05E0_0003_0510
 * @implements 217E:05E0:0003:0510 ()
 *
 * Called From: 217E:05C1:001A:E917
 * Called From: 217E:05E0:0005:0C4A
 */
void f__217E_05E0_0003_0510()
{
	emu_push(0x05E3); f__217E_0677_0009_D12A();
	f__217E_05E3_000F_20BB();
}

/**
 * Decompiled function f__217E_05E3_000F_20BB()
 *
 * @name f__217E_05E3_000F_20BB
 * @implements 217E:05E3:000F:20BB ()
 *
 * Called From: 217E:05E3:0003:0510
 */
void f__217E_05E3_000F_20BB()
{
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, 0x00,  0x1A));
	emu_andb(&emu_ax.l, 0x3);
	emu_addb(&emu_get_memory8(emu_es, 0x00,  0x1B), emu_ax.l);
	emu_push(emu_es);
	emu_push(0x05F2); f__217E_078A_001C_43A7();
	f__217E_05F2_001F_C614();
}

/**
 * Decompiled function f__217E_05F2_001F_C614()
 *
 * @name f__217E_05F2_001F_C614
 * @implements 217E:05F2:001F:C614 ()
 *
 * Called From: 217E:05F2:000F:20BB
 */
void f__217E_05F2_001F_C614()
{
	emu_movw(&emu_es, emu_get_memory16(emu_ds, 0x00,  0x12C));
	emu_movw(&emu_cx.x, emu_get_memory16(emu_es, 0x00,  0x1C));
	if (emu_cx.x == 0) { emu_ip = 0x061D; emu_last_cs = 0x217E; emu_last_ip = 0x05FB; emu_last_length = 0x001F; emu_last_crc = 0xC614; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x118));
	if (!emu_flags.cf) { f__217E_061D_0002_019A(); return; }
	emu_push(emu_cx.x);
	emu_push(emu_ax.x);
	emu_cmpb(&emu_get_memory8(emu_es, 0x00,  0x1B), 0x0);
	if (emu_flags.zf) { f__217E_0611_0003_05C8(); return; }
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__217E_0617_0006_1286(); return;
}

/**
 * Decompiled function f__217E_05F6_001B_D657()
 *
 * @name f__217E_05F6_001B_D657
 * @implements 217E:05F6:001B:D657 ()
 *
 * Called From: 217E:061B:0006:1286
 */
void f__217E_05F6_001B_D657()
{
	emu_movw(&emu_cx.x, emu_get_memory16(emu_es, 0x00,  0x1C));
	if (emu_cx.x == 0) { f__217E_061D_0002_019A(); return; }
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x118));
	if (!emu_flags.cf) { f__217E_061D_0002_019A(); return; }
	emu_push(emu_cx.x);
	emu_push(emu_ax.x);
	emu_cmpb(&emu_get_memory8(emu_es, 0x00,  0x1B), 0x0);
	if (emu_flags.zf) { f__217E_0611_0003_05C8(); return; }
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__217E_0617_0006_1286(); return;
}

/**
 * Decompiled function f__217E_0611_0003_05C8()
 *
 * @name f__217E_0611_0003_05C8
 * @implements 217E:0611:0003:05C8 ()
 *
 * Called From: 217E:060B:001B:D657
 * Called From: 217E:060B:001F:C614
 */
void f__217E_0611_0003_05C8()
{
	emu_push(0x0614); f__217E_06B6_0014_9921();
	f__217E_0614_0003_057E();
}

/**
 * Decompiled function f__217E_0614_0003_057E()
 *
 * @name f__217E_0614_0003_057E
 * @implements 217E:0614:0003:057E ()
 *
 * Called From: 217E:0614:0003:05C8
 */
void f__217E_0614_0003_057E()
{
	emu_push(0x0617); f__217E_07A6_000C_5759();
	f__217E_0617_0006_1286();
}

/**
 * Decompiled function f__217E_0617_0006_1286()
 *
 * @name f__217E_0617_0006_1286
 * @implements 217E:0617:0006:1286 ()
 *
 * Called From: 217E:060F:001B:D657
 * Called From: 217E:060F:001F:C614
 * Called From: 217E:0617:0003:057E
 */
void f__217E_0617_0006_1286()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_es);
	emu_addw(&emu_ax.x, emu_cx.x);
	f__217E_05F6_001B_D657(); return;
}

/**
 * Decompiled function f__217E_061D_0002_019A()
 *
 * @name f__217E_061D_0002_019A
 * @implements 217E:061D:0002:019A ()
 *
 * Called From: 217E:05FB:001B:D657
 * Called From: 217E:0601:001B:D657
 * Called From: 217E:0601:001F:C614
 */
void f__217E_061D_0002_019A()
{
	emu_pop(&emu_es);

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__217E_0624_0003_057C()
 *
 * @name f__217E_0624_0003_057C
 * @implements 217E:0624:0003:057C ()
 *
 * Called From: 217E:0583:0016:2C78
 */
void f__217E_0624_0003_057C()
{
	emu_push(0x0627); f__217E_06B6_0014_9921();
	f__217E_0627_000D_998D();
}

/**
 * Decompiled function f__217E_0627_000D_998D()
 *
 * @name f__217E_0627_000D_998D
 * @implements 217E:0627:000D:998D ()
 *
 * Called From: 217E:0627:0003:057C
 */
void f__217E_0627_000D_998D()
{
	emu_cmpw(&emu_get_memory16(emu_es, 0x00,  0x18), 0x4CB);
	if (!emu_flags.zf) { emu_ip = 0x0634; emu_last_cs = 0x217E; emu_last_ip = 0x062E; emu_last_length = 0x000D; emu_last_crc = 0x998D; emu_call(); return; } // Jump does not resolve

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_ds, 0x00,  0x80);
	emu_push(0x0634);
	switch (emu_ip) {
		case 0x125B: f__217E_125B_0001_0186(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x217E; emu_last_ip = 0x0630; emu_last_length = 0x000D; emu_last_crc = 0x998D;
			emu_call();
			return;
	}
	f__217E_0634_0008_4786();
}

/**
 * Decompiled function f__217E_0634_0008_4786()
 *
 * @name f__217E_0634_0008_4786
 * @implements 217E:0634:0008:4786 ()
 *
 * Called From: 217E:0634:000D:998D
 */
void f__217E_0634_0008_4786()
{
	emu_movw(&emu_get_memory16(emu_es, 0x00,  0x10), 0x0);

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__217E_063C_002A_37A4()
 *
 * @name f__217E_063C_002A_37A4
 * @implements 217E:063C:002A:37A4 ()
 *
 * Called From: 217E:056D:0007:5020
 */
void f__217E_063C_002A_37A4()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x12C));
	emu_xorw(&emu_cx.x, emu_cx.x);
	emu_incw(&emu_cx.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_es, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, 0x00,  0x1C));
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.zf) { f__217E_0641_0025_C166(); return; }
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x12C), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x126));
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x120), emu_ax.x);
	emu_pop(&emu_es);
	emu_push(emu_cx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x12C));
	emu_movw(&emu_get_memory16(emu_es, 0x00,  0x1C), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x12C), emu_es);
	emu_push(0x0666); emu_ip = 0x07A6; emu_last_cs = 0x217E; emu_last_ip = 0x0663; emu_last_length = 0x002A; emu_last_crc = 0x37A4; emu_call(); // Jump does not resolve
	f__217E_0666_0007_17A0();
}

/**
 * Decompiled function f__217E_0641_0025_C166()
 *
 * @name f__217E_0641_0025_C166
 * @implements 217E:0641:0025:C166 ()
 *
 * Called From: 217E:064B:0025:C166
 * Called From: 217E:064B:002A:37A4
 */
void f__217E_0641_0025_C166()
{
	emu_incw(&emu_cx.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_es, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, 0x00,  0x1C));
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.zf) { f__217E_0641_0025_C166(); return; }
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x12C), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x126));
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x120), emu_ax.x);
	emu_pop(&emu_es);
	emu_push(emu_cx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x12C));
	emu_movw(&emu_get_memory16(emu_es, 0x00,  0x1C), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x12C), emu_es);
	emu_push(0x0666); f__217E_07A6_000C_5759();
	f__217E_0666_0007_17A0();
}

/**
 * Decompiled function f__217E_0656_0010_9053()
 *
 * @name f__217E_0656_0010_9053
 * @implements 217E:0656:0010:9053 ()
 *
 * Called From: 217E:066E:000A:1512
 */
void f__217E_0656_0010_9053()
{
	emu_pop(&emu_es);
	emu_push(emu_cx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x12C));
	emu_movw(&emu_get_memory16(emu_es, 0x00,  0x1C), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x12C), emu_es);
	emu_push(0x0666); f__217E_07A6_000C_5759();
	f__217E_0666_0007_17A0();
}

/**
 * Decompiled function f__217E_0666_0007_17A0()
 *
 * @name f__217E_0666_0007_17A0
 * @implements 217E:0666:0007:17A0 ()
 *
 * Called From: 217E:0666:0010:9053
 * Called From: 217E:0666:0025:C166
 */
void f__217E_0666_0007_17A0()
{
	emu_subw(&emu_get_memory16(emu_ds, 0x00,  0x120), emu_ax.x);
	emu_push(0x066D); f__217E_06E9_0041_98B4();
	f__217E_066D_000A_1512();
}

/**
 * Decompiled function f__217E_066D_000A_1512()
 *
 * @name f__217E_066D_000A_1512
 * @implements 217E:066D:000A:1512 ()
 *
 * Called From: 217E:066D:0007:17A0
 */
void f__217E_066D_000A_1512()
{
	emu_pop(&emu_cx.x);
	if (--emu_cx.x != 0) { f__217E_0656_0010_9053(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x124));
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x120), emu_ax.x);

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__217E_0677_0009_D12A()
 *
 * @name f__217E_0677_0009_D12A
 * @implements 217E:0677:0009:D12A ()
 *
 * Called From: 217E:05E0:0003:0510
 */
void f__217E_0677_0009_D12A()
{
	emu_cmpws(&emu_get_memory16(emu_es, 0x00,  0xC), 0x0);
	if (!emu_flags.zf) { f__217E_0680_0018_EBDD(); return; }

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__217E_0680_0018_EBDD()
 *
 * @name f__217E_0680_0018_EBDD
 * @implements 217E:0680:0018:EBDD ()
 *
 * Called From: 217E:067D:0009:D12A
 */
void f__217E_0680_0018_EBDD()
{
	emu_cmpb(&emu_get_memory8(emu_es, 0x00,  0x20), 0xEA);
	if (emu_flags.zf) { emu_ip = 0x06B5; emu_last_cs = 0x217E; emu_last_ip = 0x0686; emu_last_length = 0x0018; emu_last_crc = 0xEBDD; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_cx.x, emu_get_memory16(emu_es, 0x00,  0x2));
	if (emu_cx.x == 0) { f__217E_0698_001E_84AA(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, 0x00,  0x10));
	emu_movw(&emu_dx.x, emu_es);
	emu_push(0x0698); f__217E_0758_0003_0764();
	f__217E_0698_001E_84AA();
}

/**
 * Decompiled function f__217E_0698_001E_84AA()
 *
 * @name f__217E_0698_001E_84AA
 * @implements 217E:0698:001E:84AA ()
 *
 * Called From: 217E:03B7:000B:468F
 * Called From: 217E:068D:0018:EBDD
 * Called From: 217E:0698:0018:EBDD
 */
void f__217E_0698_001E_84AA()
{
	emu_movw(&emu_bx.x, emu_get_memory16(emu_es, 0x00,  0x10));
	emu_movw(&emu_cx.x, emu_get_memory16(emu_es, 0x00,  0xC));
	emu_movw(&emu_di, 0x20);
	emu_cld();
	emu_movw(&emu_dx.x, emu_get_memory16(emu_es, emu_di,  0x2));
	emu_movb(&emu_ax.l, 0xEA);
	emu_stosb();
	emu_movw(&emu_ax.x, emu_dx.x);
	emu_stosw();
	emu_movw(&emu_ax.x, emu_bx.x);
	emu_stosw();
	if (--emu_cx.x != 0) { f__217E_06A6_0010_CCBB(); return; }

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__217E_06A6_0010_CCBB()
 *
 * @name f__217E_06A6_0010_CCBB
 * @implements 217E:06A6:0010:CCBB ()
 *
 * Called From: 217E:06B3:0010:CCBB
 * Called From: 217E:06B3:001E:84AA
 */
void f__217E_06A6_0010_CCBB()
{
	emu_movw(&emu_dx.x, emu_get_memory16(emu_es, emu_di,  0x2));
	emu_movb(&emu_ax.l, 0xEA);
	emu_stosb();
	emu_movw(&emu_ax.x, emu_dx.x);
	emu_stosw();
	emu_movw(&emu_ax.x, emu_bx.x);
	emu_stosw();
	if (--emu_cx.x != 0) { f__217E_06A6_0010_CCBB(); return; }

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__217E_06B6_0014_9921()
 *
 * @name f__217E_06B6_0014_9921
 * @implements 217E:06B6:0014:9921 ()
 *
 * Called From: 217E:0611:0003:05C8
 * Called From: 217E:0624:0003:057C
 */
void f__217E_06B6_0014_9921()
{
	emu_cmpb(&emu_get_memory8(emu_es, 0x00,  0x20), 0xCD);
	if (emu_flags.zf) { f__217E_06E8_0001_0186(); return; }
	emu_movw(&emu_ax.x, emu_es);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_es, 0x00,  0x10));
	emu_xorw(&emu_cx.x, emu_cx.x);
	emu_push(0x06CA); f__217E_0758_0003_0764();
	f__217E_06CA_001F_EE2C();
}

/**
 * Decompiled function f__217E_06CA_001F_EE2C()
 *
 * @name f__217E_06CA_001F_EE2C
 * @implements 217E:06CA:001F:EE2C ()
 *
 * Called From: 217E:06CA:0014:9921
 */
void f__217E_06CA_001F_EE2C()
{
	emu_movw(&emu_get_memory16(emu_es, 0x00,  0x2), emu_cx.x);
	emu_movw(&emu_cx.x, emu_get_memory16(emu_es, 0x00,  0xC));
	emu_movw(&emu_di, 0x20);
	emu_cld();
	emu_movw(&emu_dx.x, emu_get_memory16(emu_es, emu_di,  0x1));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x110));
	emu_stosw();
	emu_movw(&emu_ax.x, emu_dx.x);
	emu_stosw();
	emu_xorb(&emu_ax.l, emu_ax.l);
	emu_stosb();
	if (--emu_cx.x != 0) { f__217E_06D8_0011_DE0D(); return; }

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__217E_06D8_0011_DE0D()
 *
 * @name f__217E_06D8_0011_DE0D
 * @implements 217E:06D8:0011:DE0D ()
 *
 * Called From: 217E:06E6:0011:DE0D
 * Called From: 217E:06E6:001F:EE2C
 */
void f__217E_06D8_0011_DE0D()
{
	emu_movw(&emu_dx.x, emu_get_memory16(emu_es, emu_di,  0x1));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x110));
	emu_stosw();
	emu_movw(&emu_ax.x, emu_dx.x);
	emu_stosw();
	emu_xorb(&emu_ax.l, emu_ax.l);
	emu_stosb();
	if (--emu_cx.x != 0) { f__217E_06D8_0011_DE0D(); return; }

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__217E_06E8_0001_0186()
 *
 * @name f__217E_06E8_0001_0186
 * @implements 217E:06E8:0001:0186 ()
 *
 * Called From: 217E:06BC:0014:9921
 */
void f__217E_06E8_0001_0186()
{

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__217E_06E9_0041_98B4()
 *
 * @name f__217E_06E9_0041_98B4
 * @implements 217E:06E9:0041:98B4 ()
 *
 * Called From: 217E:0590:0008:5FFA
 * Called From: 217E:066A:0007:17A0
 */
void f__217E_06E9_0041_98B4()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x120));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_es, 0x00,  0x10));
	emu_movw(&emu_get_memory16(emu_es, 0x00,  0x10), emu_ax.x);
	emu_movw(&emu_cx.x, emu_get_memory16(emu_es, 0x00,  0x8));
	emu_incw(&emu_cx.x);
	emu_shrw(&emu_cx.x, 0x1);
	emu_xorw(&emu_si, emu_si);
	emu_cld();
	emu_cmpw(&emu_ax.x, emu_dx.x);
	if (emu_flags.cf) { f__217E_070A_0020_F719(); return; }
	emu_movw(&emu_si, emu_cx.x);
	emu_decw(&emu_si);
	emu_shlw(&emu_si, 0x1);
	emu_std();
	emu_movw(&emu_di, emu_si);
	emu_push(emu_ds);
	emu_push(emu_es);
	emu_movw(&emu_ds, emu_dx.x);
	emu_movw(&emu_es, emu_ax.x);
	emu_rep_movsw(emu_ds);
	emu_cld();
	emu_decw(&emu_ax.x);
	emu_movw(&emu_ds, emu_ax.x);
	emu_pop(&emu_es);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0xE), emu_es);
	emu_incw(&emu_ax.x);
	emu_pop(&emu_ds);
	emu_cmpb(&emu_get_memory8(emu_es, 0x00,  0x20), 0xCD);
	if (emu_flags.zf) { f__217E_0739_0001_0186(); return; }
	emu_push(0x072A); f__217E_0764_0006_13BC();
	f__217E_072A_0010_608A();
}

/**
 * Decompiled function f__217E_070A_0020_F719()
 *
 * @name f__217E_070A_0020_F719
 * @implements 217E:070A:0020:F719 ()
 *
 * Called From: 217E:0702:0041:98B4
 */
void f__217E_070A_0020_F719()
{
	emu_movw(&emu_di, emu_si);
	emu_push(emu_ds);
	emu_push(emu_es);
	emu_movw(&emu_ds, emu_dx.x);
	emu_movw(&emu_es, emu_ax.x);
	emu_rep_movsw(emu_ds);
	emu_cld();
	emu_decw(&emu_ax.x);
	emu_movw(&emu_ds, emu_ax.x);
	emu_pop(&emu_es);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0xE), emu_es);
	emu_incw(&emu_ax.x);
	emu_pop(&emu_ds);
	emu_cmpb(&emu_get_memory8(emu_es, 0x00,  0x20), 0xCD);
	if (emu_flags.zf) { emu_ip = 0x0739; emu_last_cs = 0x217E; emu_last_ip = 0x0725; emu_last_length = 0x0020; emu_last_crc = 0xF719; emu_call(); return; } // Jump does not resolve
	emu_push(0x072A); f__217E_0764_0006_13BC();
	f__217E_072A_0010_608A();
}

/**
 * Decompiled function f__217E_072A_0010_608A()
 *
 * @name f__217E_072A_0010_608A
 * @implements 217E:072A:0010:608A ()
 *
 * Called From: 217E:072A:0020:F719
 * Called From: 217E:072A:0041:98B4
 */
void f__217E_072A_0010_608A()
{
	emu_movw(&emu_cx.x, emu_get_memory16(emu_es, 0x00,  0xC));
	emu_movw(&emu_di, 0x23);
	emu_cld();
	emu_stosw();
	emu_addws(&emu_di, 0x3);
	if (--emu_cx.x != 0) { f__217E_0733_0007_68EE(); return; }

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__217E_0733_0007_68EE()
 *
 * @name f__217E_0733_0007_68EE
 * @implements 217E:0733:0007:68EE ()
 *
 * Called From: 217E:0737:0007:68EE
 * Called From: 217E:0737:0010:608A
 */
void f__217E_0733_0007_68EE()
{
	emu_stosw();
	emu_addws(&emu_di, 0x3);
	if (--emu_cx.x != 0) { f__217E_0733_0007_68EE(); return; }

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__217E_0739_0001_0186()
 *
 * @name f__217E_0739_0001_0186
 * @implements 217E:0739:0001:0186 ()
 *
 * Called From: 217E:0725:0041:98B4
 */
void f__217E_0739_0001_0186()
{

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__217E_073A_0003_06E4()
 *
 * @name f__217E_073A_0003_06E4
 * @implements 217E:073A:0003:06E4 ()
 *
 * Called From: 217E:0593:0003:05D2
 * Called From: 217E:05DD:0005:0C4A
 */
void f__217E_073A_0003_06E4()
{
	emu_push(0x073D); f__217E_07A6_000C_5759();
	f__217E_073D_001B_606C();
}

/**
 * Decompiled function f__217E_073D_001B_606C()
 *
 * @name f__217E_073D_001B_606C
 * @implements 217E:073D:001B:606C ()
 *
 * Called From: 217E:073D:0003:06E4
 */
void f__217E_073D_001B_606C()
{
	emu_addw(&emu_get_memory16(emu_ds, 0x00,  0x120), emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x3405);
	emu_movw(&emu_ds, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x1C));
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.zf) { f__217E_0745_0013_138C(); return; }
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x1C), emu_es);
	emu_movw(&emu_get_memory16(emu_es, 0x00,  0x1C), emu_ax.x);
	emu_pop(&emu_ds);

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__217E_0745_0013_138C()
 *
 * @name f__217E_0745_0013_138C
 * @implements 217E:0745:0013:138C ()
 *
 * Called From: 217E:074C:0013:138C
 * Called From: 217E:074C:001B:606C
 */
void f__217E_0745_0013_138C()
{
	emu_movw(&emu_ds, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x1C));
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.zf) { f__217E_0745_0013_138C(); return; }
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x1C), emu_es);
	emu_movw(&emu_get_memory16(emu_es, 0x00,  0x1C), emu_ax.x);
	emu_pop(&emu_ds);

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__217E_0758_0003_0764()
 *
 * @name f__217E_0758_0003_0764
 * @implements 217E:0758:0003:0764 ()
 *
 * Called From: 217E:0695:0018:EBDD
 * Called From: 217E:06C7:0014:9921
 */
void f__217E_0758_0003_0764()
{
	emu_push(0x075B); f__217E_0764_0006_13BC();
	f__217E_075B_0009_FB46();
}

/**
 * Decompiled function f__217E_075B_0009_FB46()
 *
 * @name f__217E_075B_0009_FB46
 * @implements 217E:075B:0009:FB46 ()
 *
 * Called From: 217E:075B:0003:0764
 */
void f__217E_075B_0009_FB46()
{
	emu_orw(&emu_bx.x, emu_bx.x);
	if (emu_flags.zf) { f__217E_0763_0001_0186(); return; }
	emu_xchgw(&emu_get_memory16(emu_ss, emu_bx.x,  0x2), &emu_cx.x);

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__217E_0763_0001_0186()
 *
 * @name f__217E_0763_0001_0186
 * @implements 217E:0763:0001:0186 ()
 *
 * Called From: 217E:075D:0009:FB46
 */
void f__217E_0763_0001_0186()
{

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__217E_0764_0006_13BC()
 *
 * @name f__217E_0764_0006_13BC
 * @implements 217E:0764:0006:13BC ()
 *
 * Called From: 217E:0727:0020:F719
 * Called From: 217E:0727:0041:98B4
 * Called From: 217E:0758:0003:0764
 */
void f__217E_0764_0006_13BC()
{
	emu_xorw(&emu_bx.x, emu_bx.x);
	emu_push(emu_cx.x);
	emu_push(emu_bp);
	f__217E_076E_0019_0599(); return;
}

/**
 * Decompiled function f__217E_076A_001D_C98A()
 *
 * @name f__217E_076A_001D_C98A
 * @implements 217E:076A:001D:C98A ()
 *
 * Called From: 217E:077A:0019:0599
 * Called From: 217E:077A:001D:C98A
 * Called From: 217E:0781:001D:C98A
 * Called From: 217E:0785:0019:0599
 * Called From: 217E:0785:001D:C98A
 */
void f__217E_076A_001D_C98A()
{
	emu_shlw(&emu_cx.x, 0x1);
	emu_movw(&emu_bp, emu_cx.x);
	emu_movw(&emu_cx.x, emu_get_memory16(emu_ss, emu_bp,  0x0));
	emu_shrw(&emu_cx.x, 0x1);
	if (emu_flags.zf) { f__217E_0787_0003_020A(); return; }
	if (emu_flags.cf) { emu_ip = 0x076A; emu_last_cs = 0x217E; emu_last_ip = 0x0775; emu_last_length = 0x001D; emu_last_crc = 0xC98A; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0x4));
	if (!emu_flags.zf) { f__217E_076A_001D_C98A(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0x4), emu_ax.x);
	emu_orw(&emu_bx.x, emu_bx.x);
	if (!emu_flags.zf) { f__217E_076A_001D_C98A(); return; }
	emu_movw(&emu_bx.x, emu_bp);
	f__217E_076A_001D_C98A(); return;
}

/**
 * Decompiled function f__217E_076E_0019_0599()
 *
 * @name f__217E_076E_0019_0599
 * @implements 217E:076E:0019:0599 ()
 *
 * Called From: 217E:0768:0006:13BC
 */
void f__217E_076E_0019_0599()
{
	emu_movw(&emu_cx.x, emu_get_memory16(emu_ss, emu_bp,  0x0));
	emu_shrw(&emu_cx.x, 0x1);
	if (emu_flags.zf) { emu_ip = 0x0787; emu_last_cs = 0x217E; emu_last_ip = 0x0773; emu_last_length = 0x0019; emu_last_crc = 0x0599; emu_call(); return; } // Jump does not resolve
	if (emu_flags.cf) { emu_ip = 0x076A; emu_last_cs = 0x217E; emu_last_ip = 0x0775; emu_last_length = 0x0019; emu_last_crc = 0x0599; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0x4));
	if (!emu_flags.zf) { f__217E_076A_001D_C98A(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0x4), emu_ax.x);
	emu_orw(&emu_bx.x, emu_bx.x);
	if (!emu_flags.zf) { emu_ip = 0x076A; emu_last_cs = 0x217E; emu_last_ip = 0x0781; emu_last_length = 0x0019; emu_last_crc = 0x0599; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_bx.x, emu_bp);
	f__217E_076A_001D_C98A(); return;
}

/**
 * Decompiled function f__217E_0787_0003_020A()
 *
 * @name f__217E_0787_0003_020A
 * @implements 217E:0787:0003:020A ()
 *
 * Called From: 217E:0773:001D:C98A
 */
void f__217E_0787_0003_020A()
{
	emu_pop(&emu_bp);
	emu_pop(&emu_cx.x);

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__217E_078A_001C_43A7()
 *
 * @name f__217E_078A_001C_43A7
 * @implements 217E:078A:001C:43A7 ()
 *
 * Called From: 217E:0597:0003:0482
 * Called From: 217E:0597:0004:0122
 * Called From: 217E:05EF:000F:20BB
 */
void f__217E_078A_001C_43A7()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x12C));
	emu_orw(&emu_ax.x, emu_ax.x);
	if (emu_flags.zf) { emu_ip = 0x079D; emu_last_cs = 0x217E; emu_last_ip = 0x078F; emu_last_length = 0x001C; emu_last_crc = 0x43A7; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_es, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, 0x00,  0x10));
	emu_subw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x120));
	if (!emu_flags.cf) { f__217E_07A5_0001_0186(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x126));
	emu_subw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x120));
	emu_stc();

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__217E_07A5_0001_0186()
 *
 * @name f__217E_07A5_0001_0186
 * @implements 217E:07A5:0001:0186 ()
 *
 * Called From: 217E:079B:001C:43A7
 */
void f__217E_07A5_0001_0186()
{

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__217E_07A6_000C_5759()
 *
 * @name f__217E_07A6_000C_5759
 * @implements 217E:07A6:000C:5759 ()
 *
 * Called From: 217E:0586:0003:0730
 * Called From: 217E:0614:0003:057E
 * Called From: 217E:0663:0010:9053
 * Called From: 217E:0663:0025:C166
 * Called From: 217E:073A:0003:06E4
 */
void f__217E_07A6_000C_5759()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, 0x00,  0x8));
	emu_addw(&emu_ax.x, 0x11);
	emu_movb(&emu_cx.l, 0x4);
	emu_shrw(&emu_ax.x, emu_cx.l);

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__217E_07B2_0018_3197()
 *
 * @name f__217E_07B2_0018_3197
 * @implements 217E:07B2:0018:3197 ()
 *
 * Called From: 217E:0302:001C:1FC0
 * Called From: 217E:0564:0008:7B38
 */
void f__217E_07B2_0018_3197()
{
	emu_movb(&emu_cx.l, 0x4);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, 0x00,  0x8));
	emu_addw(&emu_ax.x, 0x11);
	emu_shrw(&emu_ax.x, emu_cx.l);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_es, 0x00,  0xA));
	emu_addws(&emu_dx.x, 0xF);
	emu_shrw(&emu_dx.x, emu_cx.l);
	emu_addw(&emu_dx.x, emu_ax.x);

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__217E_08F0_0016_64F5()
 *
 * @name f__217E_08F0_0016_64F5
 * @implements 217E:08F0:0016:64F5 ()
 *
 * Called From: 1DB6:00D5:0015:2267
 */
void f__217E_08F0_0016_64F5()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_ds);
	emu_movw(&emu_ds, emu_get_memory16(emu_cs, 0x00,  0xA));
	emu_testb(&emu_get_memory8(emu_ds, 0x00,  0x10), 0x1);
	if (emu_flags.zf) { f__217E_0906_0017_DD43(); return; }
	emu_movw(&emu_ax.x, 0xFFFF);
	emu_ip = 0x09CD; emu_last_cs = 0x217E; emu_last_ip = 0x0903; emu_last_length = 0x0016; emu_last_crc = 0x64F5; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__217E_0900_0006_3A44()
 *
 * @name f__217E_0900_0006_3A44
 * @implements 217E:0900:0006:3A44 ()
 *
 * Called From: 217E:0924:0049:14DA
 */
void f__217E_0900_0006_3A44()
{
	emu_movw(&emu_ax.x, 0xFFFF);
	f__217E_09CD_0003_001A(); return;
}

/**
 * Decompiled function f__217E_0906_0017_DD43()
 *
 * @name f__217E_0906_0017_DD43
 * @implements 217E:0906:0017:DD43 ()
 *
 * Called From: 217E:08FE:0016:64F5
 */
void f__217E_0906_0017_DD43()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0x6), 0x0);
	if (emu_flags.zf) { f__217E_091D_0005_1410(); return; }
	emu_movw(&emu_cx.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	if (emu_cx.x == 0) { emu_ip = 0x0900; emu_last_cs = 0x217E; emu_last_ip = 0x090F; emu_last_length = 0x0017; emu_last_crc = 0xDD43; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_cx.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if ((emu_flags.cf || emu_flags.zf)) { emu_ip = 0x0900; emu_last_cs = 0x217E; emu_last_ip = 0x0914; emu_last_length = 0x0017; emu_last_crc = 0xDD43; emu_call(); return; } // Jump does not resolve
	emu_orb(&emu_get_memory8(emu_ds, 0x00,  0x38), 0x1);
	emu_ip = 0x093A; emu_last_cs = 0x217E; emu_last_ip = 0x091B; emu_last_length = 0x0017; emu_last_crc = 0xDD43; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__217E_091D_0005_1410()
 *
 * @name f__217E_091D_0005_1410
 * @implements 217E:091D:0005:1410 ()
 *
 * Called From: 217E:090A:0017:DD43
 */
void f__217E_091D_0005_1410()
{
	emu_push(emu_cs);
	emu_push(0x0922); f__217E_0D90_001F_908F();
	f__217E_0922_0049_14DA();
}

/**
 * Decompiled function f__217E_0922_0049_14DA()
 *
 * @name f__217E_0922_0049_14DA
 * @implements 217E:0922:0049:14DA ()
 *
 * Called From: 217E:0922:0005:1410
 */
void f__217E_0922_0049_14DA()
{
	emu_orw(&emu_ax.x, emu_ax.x);
	if (emu_flags.zf) { f__217E_0900_0006_3A44(); return; }
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_cmpw(&emu_bx.x, emu_ax.x);
	if (!emu_flags.cf) { emu_ip = 0x0900; emu_last_cs = 0x217E; emu_last_ip = 0x092B; emu_last_length = 0x0049; emu_last_crc = 0x14DA; emu_call(); return; } // Jump does not resolve
	emu_subw(&emu_ax.x, emu_bx.x);
	emu_movw(&emu_cx.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	if (emu_cx.x == 0) { emu_ip = 0x0938; emu_last_cs = 0x217E; emu_last_ip = 0x0932; emu_last_length = 0x0049; emu_last_crc = 0x14DA; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_cx.x, emu_ax.x);
	if (emu_flags.cf) { emu_ip = 0x093A; emu_last_cs = 0x217E; emu_last_ip = 0x0936; emu_last_length = 0x0049; emu_last_crc = 0x14DA; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_cx.x, emu_ax.x);
	emu_movw(&emu_es, emu_get_memory16(emu_cs, 0x00,  0xC));
	emu_movw(&emu_bx.x, 0x4000);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, 0x00,  0x661E));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_es, 0x00,  0x6620));
	emu_addw(&emu_ax.x, 0x3FFF);
	emu_adcws(&emu_dx.x, 0x0);
	emu_divw(&emu_ax.x, emu_bx.x);
	emu_cmpw(&emu_cx.x, emu_ax.x);
	if ((emu_flags.cf || emu_flags.zf)) { emu_ip = 0x0959; emu_last_cs = 0x217E; emu_last_ip = 0x0955; emu_last_length = 0x0049; emu_last_crc = 0x14DA; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_cx.x, emu_ax.x);
	emu_cmpws(&emu_cx.x, 0x4);
	if (!emu_flags.cf) { emu_ip = 0x096B; emu_last_cs = 0x217E; emu_last_ip = 0x095C; emu_last_length = 0x0049; emu_last_crc = 0x14DA; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, 0x400);
	emu_mulw(&emu_ax.x, emu_cx.x);
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x11A));
	if (!emu_flags.cf) { emu_ip = 0x096B; emu_last_cs = 0x217E; emu_last_ip = 0x0967; emu_last_length = 0x0049; emu_last_crc = 0x14DA; emu_call(); return; } // Jump does not resolve
	emu_ip = 0x0900; emu_last_cs = 0x217E; emu_last_ip = 0x0969; emu_last_length = 0x0049; emu_last_crc = 0x14DA; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__217E_09CD_0003_001A()
 *
 * @name f__217E_09CD_0003_001A
 * @implements 217E:09CD:0003:001A ()
 *
 * Called From: 217E:0903:0006:3A44
 */
void f__217E_09CD_0003_001A()
{
	emu_pop(&emu_ds);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__217E_0ABA_001A_91C2()
 *
 * @name f__217E_0ABA_001A_91C2
 * @implements 217E:0ABA:001A:91C2 ()
 *
 * Called From: 1DB6:00E9:0014:2704
 */
void f__217E_0ABA_001A_91C2()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x2);
	emu_push(emu_ds);
	emu_movw(&emu_ds, emu_get_memory16(emu_cs, 0x00,  0xA));
	emu_push(emu_si);
	emu_push(emu_di);
	emu_testb(&emu_get_memory8(emu_ds, 0x00,  0x10), 0x2);
	if (emu_flags.zf) { f__217E_0AD4_0009_A373(); return; }
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_ip = 0x0BCD; emu_last_cs = 0x217E; emu_last_ip = 0x0AD1; emu_last_length = 0x001A; emu_last_crc = 0x91C2; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__217E_0AD4_0009_A373()
 *
 * @name f__217E_0AD4_0009_A373
 * @implements 217E:0AD4:0009:A373 ()
 *
 * Called From: 217E:0ACD:001A:91C2
 */
void f__217E_0AD4_0009_A373()
{
	emu_movb(&emu_get_memory8(emu_ss, emu_bp, -0x2), 0x0);
	emu_push(emu_cs);
	emu_push(0x0ADD); f__217E_0ED2_001F_E7EB();
	f__217E_0ADD_000A_E4C1();
}

/**
 * Decompiled function f__217E_0ADD_000A_E4C1()
 *
 * @name f__217E_0ADD_000A_E4C1
 * @implements 217E:0ADD:000A:E4C1 ()
 *
 * Called From: 217E:0ADD:0009:A373
 */
void f__217E_0ADD_000A_E4C1()
{
	emu_orw(&emu_ax.x, emu_dx.x);
	if (!emu_flags.zf) { emu_ip = 0x0AE7; emu_last_cs = 0x217E; emu_last_ip = 0x0ADF; emu_last_length = 0x000A; emu_last_crc = 0xE4C1; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, 0xFFFF);
	f__217E_0BCD_0007_349A(); return;
}

/**
 * Decompiled function f__217E_0BCD_0007_349A()
 *
 * @name f__217E_0BCD_0007_349A
 * @implements 217E:0BCD:0007:349A ()
 *
 * Called From: 217E:0AE4:000A:E4C1
 */
void f__217E_0BCD_0007_349A()
{
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_pop(&emu_ds);
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__217E_0D2C_000B_D38F()
 *
 * @name f__217E_0D2C_000B_D38F
 * @implements 217E:0D2C:000B:D38F ()
 *
 * Called From: 01F7:0222:0015:2B26
 */
void f__217E_0D2C_000B_D38F()
{
	emu_push(emu_ds);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_ax.x, 0x33F4);
	emu_movw(&emu_ds, emu_ax.x);
	emu_push(0x0D37); f__217E_02A0_002C_C662();
	f__217E_0D37_001C_C087();
}

/**
 * Decompiled function f__217E_0D37_001C_C087()
 *
 * @name f__217E_0D37_001C_C087
 * @implements 217E:0D37:001C:C087 ()
 *
 * Called From: 217E:0D37:000B:D38F
 */
void f__217E_0D37_001C_C087()
{
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00,  0x11A));
	emu_movw(&emu_ax.x, 0x353F);
	emu_movw(&emu_ds, emu_ax.x);
	emu_movw(&emu_ax.x, 0x353F);
	emu_movw(&emu_es, emu_ax.x);
	emu_cmpw(&emu_bx.x, emu_get_memory16(emu_es, 0x00,  0x6622));
	if (!emu_flags.cf) { f__217E_0D53_0010_05BE(); return; }
	emu_movw(&emu_bx.x, emu_get_memory16(emu_es, 0x00,  0x6622));
	emu_ip = 0x0D55; emu_last_cs = 0x217E; emu_last_ip = 0x0D51; emu_last_length = 0x001C; emu_last_crc = 0xC087; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__217E_0D53_0010_05BE()
 *
 * @name f__217E_0D53_0010_05BE
 * @implements 217E:0D53:0010:05BE ()
 *
 * Called From: 217E:0D4A:001C:C087
 */
void f__217E_0D53_0010_05BE()
{
	emu_shlw(&emu_bx.x, 0x1);
	emu_incw(&emu_bx.x);
	emu_push(emu_bx.x);
	emu_movw(&emu_ax.x, 0x10);
	emu_mulw(&emu_ax.x, emu_bx.x);
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0D63); emu_cs = 0x01F7; f__01F7_1855_0053_5E94();
	f__217E_0D63_0017_2FB6();
}

/**
 * Decompiled function f__217E_0D63_0017_2FB6()
 *
 * @name f__217E_0D63_0017_2FB6
 * @implements 217E:0D63:0017:2FB6 ()
 *
 * Called From: 217E:0D63:0010:05BE
 */
void f__217E_0D63_0017_2FB6()
{
	emu_pop(&emu_bx.x);
	emu_pop(&emu_bx.x);
	emu_pop(&emu_bx.x);
	emu_movw(&emu_cx.x, emu_ax.x);
	emu_orw(&emu_cx.x, emu_dx.x);
	if (emu_cx.x == 0) { emu_ip = 0x0D82; emu_last_cs = 0x217E; emu_last_ip = 0x0D6A; emu_last_length = 0x0017; emu_last_crc = 0x2FB6; emu_call(); return; } // Jump does not resolve
	emu_incw(&emu_dx.x);
	emu_addw(&emu_bx.x, emu_dx.x);
	emu_push(emu_dx.x);
	emu_push(emu_bx.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x0D7A); f__217E_0015_0019_532F();
	f__217E_0D7A_0008_702A();
}

/**
 * Decompiled function f__217E_0D7A_0008_702A()
 *
 * @name f__217E_0D7A_0008_702A
 * @implements 217E:0D7A:0008:702A ()
 *
 * Called From: 217E:0D7A:0017:2FB6
 */
void f__217E_0D7A_0008_702A()
{
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.zf) { emu_ip = 0x0D82; emu_last_cs = 0x217E; emu_last_ip = 0x0D7C; emu_last_length = 0x0008; emu_last_crc = 0x702A; emu_call(); return; } // Jump does not resolve
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_pop(&emu_ds);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__217E_0D90_001F_908F()
 *
 * @name f__217E_0D90_001F_908F
 * @implements 217E:0D90:001F:908F ()
 *
 * Called From: 217E:091F:0005:1410
 */
void f__217E_0D90_001F_908F()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subw(&emu_sp, 0x102);
	emu_push(emu_ds);
	emu_movw(&emu_ds, emu_get_memory16(emu_cs, 0x00,  0xA));
	emu_push(emu_si);
	emu_push(emu_di);
	emu_testb(&emu_get_memory8(emu_ds, 0x00,  0x38), 0x1);
	if (emu_flags.zf) { f__217E_0DB6_000B_195E(); return; }
	emu_testb(&emu_get_memory8(emu_ds, 0x00,  0x38), 0x2);
	if (!emu_flags.zf) { emu_ip = 0x0DB0; emu_last_cs = 0x217E; emu_last_ip = 0x0DAB; emu_last_length = 0x001F; emu_last_crc = 0x908F; emu_call(); return; } // Jump does not resolve
	emu_ip = 0x0E1E; emu_last_cs = 0x217E; emu_last_ip = 0x0DAD; emu_last_length = 0x001F; emu_last_crc = 0x908F; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__217E_0DB6_000B_195E()
 *
 * @name f__217E_0DB6_000B_195E
 * @implements 217E:0DB6:000B:195E ()
 *
 * Called From: 217E:0DA4:001F:908F
 */
void f__217E_0DB6_000B_195E()
{
	emu_push(emu_ds);
	emu_push(emu_cs);
	emu_pop(&emu_ds);
	emu_movw(&emu_dx.x, 0xD87);
	emu_movw(&emu_ax.x, 0x3D00);
	emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = 0x0070; emu_push(0x0DC1); f__0070_0108_0005_1CF6();
	f__217E_0DC1_000A_95D7();
}

/**
 * Decompiled function f__217E_0DC1_000A_95D7()
 *
 * @name f__217E_0DC1_000A_95D7
 * @implements 217E:0DC1:000A:95D7 ()
 *
 * Called From: 217E:0DC1:000B:195E
 */
void f__217E_0DC1_000A_95D7()
{
	emu_pop(&emu_ds);
	emu_movw(&emu_bx.x, emu_ax.x);
	if (emu_flags.cf) { f__217E_0DE8_0002_0338(); return; }
	emu_movw(&emu_ax.x, 0x4400);
	emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = emu_get_memory16(0, 0, 0x21 * 4 + 2); emu_push(0x0DCB); emu_ip = emu_get_memory16(0, 0, 0x21 * 4 + 0); emu_last_cs = 0x217E; emu_last_ip = 0x0DC9; emu_last_length = 0x000A; emu_last_crc = 0x95D7; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__217E_0DE8_0002_0338()
 *
 * @name f__217E_0DE8_0002_0338
 * @implements 217E:0DE8:0002:0338 ()
 *
 * Called From: 217E:0DC4:000A:95D7
 */
void f__217E_0DE8_0002_0338()
{
	f__217E_0E34_000E_4482(); return;
}

/**
 * Decompiled function f__217E_0E34_000E_4482()
 *
 * @name f__217E_0E34_000E_4482
 * @implements 217E:0E34:000E:4482 ()
 *
 * Called From: 217E:0DE8:0002:0338
 */
void f__217E_0E34_000E_4482()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_movb(&emu_get_memory8(emu_ds, 0x00,  0x38), 0x0);
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_pop(&emu_ds);
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__217E_0ED2_001F_E7EB()
 *
 * @name f__217E_0ED2_001F_E7EB
 * @implements 217E:0ED2:001F:E7EB ()
 *
 * Called From: 217E:0ADA:0009:A373
 */
void f__217E_0ED2_001F_E7EB()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x22);
	emu_push(emu_ds);
	emu_movw(&emu_ds, emu_get_memory16(emu_cs, 0x00,  0xA));
	emu_push(emu_si);
	emu_push(emu_di);
	emu_testb(&emu_get_memory8(emu_ds, 0x00,  0x42), 0x1);
	if (emu_flags.zf) { f__217E_0EF1_0027_572C(); return; }
	emu_testb(&emu_get_memory8(emu_ds, 0x00,  0x42), 0x2);
	if (emu_flags.zf) { emu_ip = 0x0EF6; emu_last_cs = 0x217E; emu_last_ip = 0x0EEC; emu_last_length = 0x001F; emu_last_crc = 0xE7EB; emu_call(); return; } // Jump does not resolve
	emu_ip = 0x1067; emu_last_cs = 0x217E; emu_last_ip = 0x0EEE; emu_last_length = 0x001F; emu_last_crc = 0xE7EB; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__217E_0EF1_0027_572C()
 *
 * @name f__217E_0EF1_0027_572C
 * @implements 217E:0EF1:0027:572C ()
 *
 * Called From: 217E:0EE5:001F:E7EB
 */
void f__217E_0EF1_0027_572C()
{
	emu_movb(&emu_get_memory8(emu_ds, 0x00,  0x42), 0x1);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x3A), 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x3C), 0x10);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x3E), 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x40), 0x10);
	emu_push(emu_sp);
	emu_pop(&emu_ax.x);
	emu_cmpw(&emu_ax.x, emu_sp);
	if (!emu_flags.zf) { emu_ip = 0x0F1C; emu_last_cs = 0x217E; emu_last_ip = 0x0F12; emu_last_length = 0x0027; emu_last_crc = 0x572C; emu_call(); return; } // Jump does not resolve
	emu_movb(&emu_ax.h, 0x30);
	emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = 0x0070; emu_push(0x0F18); f__0070_0108_0005_1CF6();
	f__217E_0F18_0007_14DE();
}

/**
 * Decompiled function f__217E_0F18_0007_14DE()
 *
 * @name f__217E_0F18_0007_14DE
 * @implements 217E:0F18:0007:14DE ()
 *
 * Called From: 217E:0F18:0027:572C
 */
void f__217E_0F18_0007_14DE()
{
	emu_cmpb(&emu_ax.l, 0xA);
	if (emu_flags.cf) { f__217E_0F1F_0023_3D84(); return; }
	emu_ip = 0x1078; emu_last_cs = 0x217E; emu_last_ip = 0x0F1C; emu_last_length = 0x0007; emu_last_crc = 0x14DE; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__217E_0F1F_0023_3D84()
 *
 * @name f__217E_0F1F_0023_3D84
 * @implements 217E:0F1F:0023:3D84 ()
 *
 * Called From: 217E:0F1A:0007:14DE
 */
void f__217E_0F1F_0023_3D84()
{
	emu_xchgb(&emu_ax.h, &emu_ax.l);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x22), emu_ax.x);
	emu_movw(&emu_ax.x, 0xF000);
	emu_movw(&emu_es, emu_ax.x);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, 0x00, -0x2));
	emu_cmpb(&emu_ax.l, 0xFC);
	if (!(emu_flags.cf || emu_flags.zf)) { emu_ip = 0x0F1C; emu_last_cs = 0x217E; emu_last_ip = 0x0F2F; emu_last_length = 0x0023; emu_last_crc = 0x3D84; emu_call(); return; } // Jump does not resolve
	emu_cmpb(&emu_ax.l, 0xFB);
	if (emu_flags.zf) { emu_ip = 0x0F1C; emu_last_cs = 0x217E; emu_last_ip = 0x0F33; emu_last_length = 0x0023; emu_last_crc = 0x3D84; emu_call(); return; } // Jump does not resolve
	emu_cmpb(&emu_ax.l, 0xF9);
	if (emu_flags.zf) { emu_ip = 0x0F1C; emu_last_cs = 0x217E; emu_last_ip = 0x0F37; emu_last_length = 0x0023; emu_last_crc = 0x3D84; emu_call(); return; } // Jump does not resolve
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x22), 0x31);
	if (!emu_flags.cf) { f__217E_0F42_0005_1672(); return; }
	emu_ip = 0x0FC1; emu_last_cs = 0x217E; emu_last_ip = 0x0F3F; emu_last_length = 0x0023; emu_last_crc = 0x3D84; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__217E_0F3F_0003_06B4()
 *
 * @name f__217E_0F3F_0003_06B4
 * @implements 217E:0F3F:0003:06B4 ()
 *
 * Called From: 217E:0F49:0009:E8F2
 */
void f__217E_0F3F_0003_06B4()
{
	f__217E_0FC1_0004_0C1E(); return;
}

/**
 * Decompiled function f__217E_0F42_0005_1672()
 *
 * @name f__217E_0F42_0005_1672
 * @implements 217E:0F42:0005:1672 ()
 *
 * Called From: 217E:0F3D:0023:3D84
 */
void f__217E_0F42_0005_1672()
{
	emu_movw(&emu_ax.x, 0x4300);
	emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = 0x0070; emu_push(0x0F47); f__0070_0178_0005_1C86();
	f__217E_0F47_0009_E8F2();
}

/**
 * Decompiled function f__217E_0F47_0009_E8F2()
 *
 * @name f__217E_0F47_0009_E8F2
 * @implements 217E:0F47:0009:E8F2 ()
 *
 * Called From: 217E:0F47:0005:1672
 */
void f__217E_0F47_0009_E8F2()
{
	emu_cmpb(&emu_ax.l, 0x80);
	if (!emu_flags.zf) { f__217E_0F3F_0003_06B4(); return; }
	emu_movw(&emu_ax.x, 0x4310);
	emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = emu_get_memory16(0, 0, 0x2F * 4 + 2); emu_push(0x0F50); emu_ip = emu_get_memory16(0, 0, 0x2F * 4 + 0); emu_last_cs = 0x217E; emu_last_ip = 0x0F4E; emu_last_length = 0x0009; emu_last_crc = 0xE8F2; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__217E_0FC1_0004_0C1E()
 *
 * @name f__217E_0FC1_0004_0C1E
 * @implements 217E:0FC1:0004:0C1E ()
 *
 * Called From: 217E:0F3F:0003:06B4
 */
void f__217E_0FC1_0004_0C1E()
{
	emu_movb(&emu_ax.h, 0x88);
	emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = 0x0070; emu_push(0x0FC5); f__0070_00A8_0005_1D56();
	f__217E_0FC5_0007_3EE8();
}

/**
 * Decompiled function f__217E_0FC5_0007_3EE8()
 *
 * @name f__217E_0FC5_0007_3EE8
 * @implements 217E:0FC5:0007:3EE8 ()
 *
 * Called From: 217E:0FC5:0004:0C1E
 */
void f__217E_0FC5_0007_3EE8()
{
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.zf) { emu_ip = 0x0FCC; emu_last_cs = 0x217E; emu_last_ip = 0x0FC7; emu_last_length = 0x0007; emu_last_crc = 0x3EE8; emu_call(); return; } // Jump does not resolve
	f__217E_1078_000A_E19B(); return;
}

/**
 * Decompiled function f__217E_1078_000A_E19B()
 *
 * @name f__217E_1078_000A_E19B
 * @implements 217E:1078:000A:E19B ()
 *
 * Called From: 217E:0FC9:0007:3EE8
 */
void f__217E_1078_000A_E19B()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_cwd();
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_pop(&emu_ds);
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__217E_125B_0001_0186()
 *
 * @name f__217E_125B_0001_0186
 * @implements 217E:125B:0001:0186 ()
 *
 * Called From: 217E:0630:000D:998D
 */
void f__217E_125B_0001_0186()
{

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__217E_125C_0001_0196()
 *
 * @name f__217E_125C_0001_0196
 * @implements 217E:125C:0001:0196 ()
 *
 * Called From: 217E:01AE:0005:0C90
 * Called From: 217E:01B3:0005:0C88
 */
void f__217E_125C_0001_0196()
{

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

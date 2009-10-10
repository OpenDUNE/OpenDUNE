/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__217E_0015_0019_BAFF()
 *
 * @name f__217E_0015_0019_BAFF
 * @implements 217E:0015:0019:BAFF ()
 *
 * Called From: 217E:0D77:0017:4EFA
 */
void f__217E_0015_0019_BAFF()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subw(&emu_sp, 0x14);
	emu_push(emu_ds);
	emu_movw(&emu_ds, emu_get_memory16(emu_cs, 0x00, 0xA));
	emu_push(emu_si);
	emu_push(emu_di);
	emu_cld();
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x110), 0x0);
	if (!emu_flags.zf) { f__217E_002E_0003_5DA5(); return; }
	f__217E_013A_000B_6C7A(); return;
}

/**
 * Decompiled function f__217E_002E_0003_5DA5()
 *
 * @name f__217E_002E_0003_5DA5
 * @implements 217E:002E:0003:5DA5 ()
 *
 * Called From: 217E:0029:0019:BAFF
 */
void f__217E_002E_0003_5DA5()
{
	emu_push(0x0031); f__217E_01C6_0004_16B8();
	f__217E_0031_0017_9F5E();
}

/**
 * Decompiled function f__217E_0031_0017_9F5E()
 *
 * @name f__217E_0031_0017_9F5E
 * @implements 217E:0031:0017:9F5E ()
 *
 */
void f__217E_0031_0017_9F5E()
{
	if (!emu_flags.cf) { f__217E_005F_000C_BA4D(); return; }
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0045; emu_last_cs = 0x217E; emu_last_ip = 0x0039; emu_last_length = 0x0017; emu_last_crc = 0x9F5E; emu_call(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0x6), 0x710);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0x8), 0x340E);
	emu_push(0x0048); f__217E_01BA_000A_D507();
	f__217E_0048_0005_CE36();
}

/**
 * Decompiled function f__217E_0048_0005_CE36()
 *
 * @name f__217E_0048_0005_CE36
 * @implements 217E:0048:0005:CE36 ()
 *
 */
void f__217E_0048_0005_CE36()
{
	if (!emu_flags.cf) { f__217E_005F_000C_BA4D(); return; }
	emu_push(0x004D); f__217E_020B_0026_BE77();
	f__217E_004D_0008_B9C4();
}

/**
 * Decompiled function f__217E_004D_0008_B9C4()
 *
 * @name f__217E_004D_0008_B9C4
 * @implements 217E:004D:0008:B9C4 ()
 *
 */
void f__217E_004D_0008_B9C4()
{
	if (!emu_flags.cf) { f__217E_005F_000C_BA4D(); return; }
	emu_movw(&emu_ax, 0xFFFE);
	f__217E_013C_0009_3C7C(); return;
}

/**
 * Decompiled function f__217E_005F_000C_BA4D()
 *
 * @name f__217E_005F_000C_BA4D
 * @implements 217E:005F:000C:BA4D ()
 *
 * Called From: 217E:0031:0017:9F5E
 */
void f__217E_005F_000C_BA4D()
{
	emu_movw(&emu_bx, emu_ax);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x128), emu_bx);
	emu_movw(&emu_cx, 0x14);
	emu_push(0x006B); f__217E_0290_000A_9FBE();
	f__217E_006B_0015_650F();
}

/**
 * Decompiled function f__217E_006B_0015_650F()
 *
 * @name f__217E_006B_0015_650F
 * @implements 217E:006B:0015:650F ()
 *
 */
void f__217E_006B_0015_650F()
{
	emu_movw(&emu_cx, 0xFFFD);
	if (emu_flags.cf) { /* Unresolved jump */ emu_ip = 0x0055; emu_last_cs = 0x217E; emu_last_ip = 0x006E; emu_last_length = 0x0015; emu_last_crc = 0x650F; emu_call(); return; }
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x14), 0x5A4D);
	if (emu_flags.zf) { f__217E_0080_0024_0F55(); return; }
	emu_movw(&emu_cx, 0xFFFC);
	/* Unresolved jump */ emu_ip = 0x0055; emu_last_cs = 0x217E; emu_last_ip = 0x007E; emu_last_length = 0x0015; emu_last_crc = 0x650F; emu_call();
}

/**
 * Decompiled function f__217E_0080_0024_0F55()
 *
 * @name f__217E_0080_0024_0F55
 * @implements 217E:0080:0024:0F55 ()
 *
 * Called From: 217E:0079:0015:650F
 */
void f__217E_0080_0024_0F55()
{
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_movw(&emu_cx, emu_get_memory16(emu_ss, emu_bp, -0x12));
	if (emu_cx == 0) { /* Unresolved jump */ emu_ip = 0x0089; emu_last_cs = 0x217E; emu_last_ip = 0x0086; emu_last_length = 0x0024; emu_last_crc = 0x0F55; emu_call(); return; }
	emu_decw(&emu_ax);
	emu_movw(&emu_dx, 0x200);
	emu_mulw(&emu_ax, emu_dx);
	emu_addw(&emu_ax, emu_cx);
	emu_addw(&emu_ax, 0xF);
	emu_adcw(&emu_dx, 0x0);
	emu_andw(&emu_ax, 0xFFF0);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_movw(&emu_cx, emu_dx);
	emu_movw(&emu_dx, emu_ax);
	emu_movw(&emu_ax, 0x4200);
	emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = 0x0070; emu_push(0x00A4); Interrupt_DOS();
	f__217E_00A4_0006_793B();
}

/**
 * Decompiled function f__217E_00A4_0006_793B()
 *
 * @name f__217E_00A4_0006_793B
 * @implements 217E:00A4:0006:793B ()
 *
 */
void f__217E_00A4_0006_793B()
{
	emu_movw(&emu_cx, 0x10);
	emu_push(0x00AA); f__217E_0290_000A_9FBE();
	f__217E_00AA_0019_5FA2();
}

/**
 * Decompiled function f__217E_00AA_0019_5FA2()
 *
 * @name f__217E_00AA_0019_5FA2
 * @implements 217E:00AA:0019:5FA2 ()
 *
 */
void f__217E_00AA_0019_5FA2()
{
	emu_pop(&emu_ax);
	emu_pop(&emu_dx);
	emu_movw(&emu_cx, 0xFFFD);
	if (emu_flags.cf) { /* Unresolved jump */ emu_ip = 0x0055; emu_last_cs = 0x217E; emu_last_ip = 0x00AF; emu_last_length = 0x0019; emu_last_crc = 0x5FA2; emu_call(); return; }
	emu_addw(&emu_ax, 0x10);
	emu_adcw(&emu_dx, 0x0);
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x14), 0x4246);
	emu_movw(&emu_cx, 0xFFFC);
	if (emu_flags.zf) { f__217E_00C3_000F_B4E8(); return; }
	/* Unresolved jump */ emu_ip = 0x0055; emu_last_cs = 0x217E; emu_last_ip = 0x00C1; emu_last_length = 0x0019; emu_last_crc = 0x5FA2; emu_call();
}

/**
 * Decompiled function f__217E_00C3_000F_B4E8()
 *
 * @name f__217E_00C3_000F_B4E8
 * @implements 217E:00C3:000F:B4E8 ()
 *
 * Called From: 217E:00BF:0019:5FA2
 */
void f__217E_00C3_000F_B4E8()
{
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x12), 0x564F);
	if (emu_flags.zf) { f__217E_00D2_001E_E7B0(); return; }
	emu_addw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_adcw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0xE));
	/* Unresolved jump */ emu_ip = 0x0099; emu_last_cs = 0x217E; emu_last_ip = 0x00D0; emu_last_length = 0x000F; emu_last_crc = 0xB4E8; emu_call();
}

/**
 * Decompiled function f__217E_00D2_001E_E7B0()
 *
 * @name f__217E_00D2_001E_E7B0
 * @implements 217E:00D2:001E:E7B0 ()
 *
 * Called From: 217E:00C8:000F:B4E8
 */
void f__217E_00D2_001E_E7B0()
{
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x114), emu_ax);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x116), emu_dx);
	emu_movw(&emu_es, emu_get_memory16(emu_cs, 0x00, 0xC));
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_movw(&emu_get_memory16(emu_es, 0x00, 0x661E), emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_movw(&emu_get_memory16(emu_es, 0x00, 0x6620), emu_ax);
	emu_movb(&emu_ah, 0x3E);
	emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = 0x0070; emu_push(0x00F0); Interrupt_DOS();
	f__217E_00F0_000B_991E();
}

/**
 * Decompiled function f__217E_00F0_000B_991E()
 *
 * @name f__217E_00F0_000B_991E
 * @implements 217E:00F0:000B:991E ()
 *
 */
void f__217E_00F0_000B_991E()
{
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x128), 0x0);
	emu_push(emu_cs);
	emu_push(0x00FB); f__217E_0145_0010_73C0();
	f__217E_00FB_0014_F700();
}

/**
 * Decompiled function f__217E_00FB_0014_F700()
 *
 * @name f__217E_00FB_0014_F700
 * @implements 217E:00FB:0014:F700 ()
 *
 */
void f__217E_00FB_0014_F700()
{
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_incw(&emu_ax);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x124), emu_ax);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x120), emu_ax);
	emu_movw(&emu_bx, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x126), emu_bx);
	emu_push(0x010F); f__217E_02A0_002C_0B5F();
	f__217E_010F_0014_C0BC();
}

/**
 * Decompiled function f__217E_010F_0014_C0BC()
 *
 * @name f__217E_010F_0014_C0BC
 * @implements 217E:010F:0014:C0BC ()
 *
 */
void f__217E_010F_0014_C0BC()
{
	emu_movw(&emu_bx, emu_get_memory16(emu_ds, 0x00, 0x126));
	emu_subw(&emu_bx, emu_get_memory16(emu_ds, 0x00, 0x124));
	emu_cmpw(&emu_bx, emu_get_memory16(emu_ds, 0x00, 0x11A));
	if (!emu_flags.cf) { f__217E_0123_000B_85DC(); return; }
	emu_movw(&emu_cx, 0xFFFB);
	/* Unresolved jump */ emu_ip = 0x0055; emu_last_cs = 0x217E; emu_last_ip = 0x0120; emu_last_length = 0x0014; emu_last_crc = 0xC0BC; emu_call();
}

/**
 * Decompiled function f__217E_0123_000B_85DC()
 *
 * @name f__217E_0123_000B_85DC
 * @implements 217E:0123:000B:85DC ()
 *
 * Called From: 217E:011B:0014:C0BC
 */
void f__217E_0123_000B_85DC()
{
	emu_shrw(&emu_bx, 0x1);
	emu_shrw(&emu_bx, 0x1);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x118), emu_bx);
	emu_push(0x012E); f__217E_0320_0049_4A24();
	f__217E_012E_000B_D306();
}

/**
 * Decompiled function f__217E_012E_000B_D306()
 *
 * @name f__217E_012E_000B_D306
 * @implements 217E:012E:000B:D306 ()
 *
 */
void f__217E_012E_000B_D306()
{
	if (!emu_flags.cf) { f__217E_013A_000B_6C7A(); return; }
	emu_movw(&emu_bx, emu_get_memory16(emu_ds, 0x00, 0x128));
	emu_movw(&emu_cx, 0xFFFF);
	f__217E_013C_0009_3C7C(); return;
}

/**
 * Decompiled function f__217E_013A_000B_6C7A()
 *
 * @name f__217E_013A_000B_6C7A
 * @implements 217E:013A:000B:6C7A ()
 *
 * Called From: 217E:012E:000B:D306
 */
void f__217E_013A_000B_6C7A()
{
	emu_xorw(&emu_ax, emu_ax);
	f__217E_013C_0009_3C7C(); return;
}

/**
 * Decompiled function f__217E_013C_0009_3C7C()
 *
 * @name f__217E_013C_0009_3C7C
 * @implements 217E:013C:0009:3C7C ()
 *
 * Called From: 217E:0052:0008:B9C4
 */
void f__217E_013C_0009_3C7C()
{
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
 * Decompiled function f__217E_0145_0010_73C0()
 *
 * @name f__217E_0145_0010_73C0
 * @implements 217E:0145:0010:73C0 ()
 *
 * Called From: 217E:00F8:000B:991E
 * Called From: 217E:01AA:0015:D478
 */
void f__217E_0145_0010_73C0()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_ds);
	emu_movw(&emu_ds, emu_get_memory16(emu_cs, 0x00, 0xA));
	emu_movb(&emu_al, emu_get_memory8(emu_ds, 0x00, 0x111));
	emu_movb(&emu_ah, 0x35);
	emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = 0x0070; emu_push(0x0155); Interrupt_DOS();
	f__217E_0155_0012_A3CC();
}

/**
 * Decompiled function f__217E_0155_0012_A3CC()
 *
 * @name f__217E_0155_0012_A3CC
 * @implements 217E:0155:0012:A3CC ()
 *
 */
void f__217E_0155_0012_A3CC()
{
	emu_push(emu_es);
	emu_push(emu_bx);
	emu_push(emu_ds);
	emu_movb(&emu_al, emu_get_memory8(emu_ds, 0x00, 0x111));
	emu_movw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x2));
	emu_movw(&emu_ds, emu_get_memory16(emu_ds, 0x00, 0x4));
	emu_movb(&emu_ah, 0x25);
	emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = 0x0070; emu_push(0x0167); Interrupt_DOS();
	f__217E_0167_0018_F243();
}

/**
 * Decompiled function f__217E_0167_0018_F243()
 *
 * @name f__217E_0167_0018_F243
 * @implements 217E:0167:0018:F243 ()
 *
 */
void f__217E_0167_0018_F243()
{
	emu_pop(&emu_ds);
	emu_pop(&emu_get_memory16(emu_ds, 0x00, 0x2));
	emu_pop(&emu_get_memory16(emu_ds, 0x00, 0x4));
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x128), 0x0);
	if (emu_flags.zf) { f__217E_0187_000B_650C(); return; }
	emu_movw(&emu_bx, emu_get_memory16(emu_ds, 0x00, 0x128));
	emu_movb(&emu_ah, 0x3E);
	emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = 0x0070; emu_push(0x017F); Interrupt_DOS();
	f__217E_017F_0008_A03E();
}

/**
 * Decompiled function f__217E_017F_0008_A03E()
 *
 * @name f__217E_017F_0008_A03E
 * @implements 217E:017F:0008:A03E ()
 *
 */
void f__217E_017F_0008_A03E()
{
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x128), 0x0);
	f__217E_0195_0003_2677(); return;
}

/**
 * Decompiled function f__217E_0187_000B_650C()
 *
 * @name f__217E_0187_000B_650C
 * @implements 217E:0187:000B:650C ()
 *
 * Called From: 217E:0175:0018:F243
 */
void f__217E_0187_000B_650C()
{
	emu_movw(&emu_dx, 0x00 + 0x8C);
	emu_movb(&emu_ah, 0x3D);
	emu_movb(&emu_al, emu_get_memory8(emu_ds, 0x00, 0x6));
	emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = 0x0070; emu_push(0x0192); Interrupt_DOS();
	f__217E_0192_0006_BB35();
}

/**
 * Decompiled function f__217E_0192_0006_BB35()
 *
 * @name f__217E_0192_0006_BB35
 * @implements 217E:0192:0006:BB35 ()
 *
 */
void f__217E_0192_0006_BB35()
{
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x128), emu_ax);
	f__217E_0195_0003_2677(); return;
}

/**
 * Decompiled function f__217E_0195_0003_2677()
 *
 * @name f__217E_0195_0003_2677
 * @implements 217E:0195:0003:2677 ()
 *
 * Called From: 217E:0185:0008:A03E
 */
void f__217E_0195_0003_2677()
{
	emu_pop(&emu_ds);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__217E_0198_0015_D478()
 *
 * @name f__217E_0198_0015_D478
 * @implements 217E:0198:0015:D478 ()
 *
 * Called From: 01F7:0263:0015:AC4F
 */
void f__217E_0198_0015_D478()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_ds);
	emu_movw(&emu_ds, emu_get_memory16(emu_cs, 0x00, 0xA));
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x128), 0x0);
	if (emu_flags.zf) { f__217E_01AD_0005_F29E(); return; }
	emu_push(emu_cs);
	emu_push(0x01AD); f__217E_0145_0010_73C0();
	f__217E_01AD_0005_F29E();
}

/**
 * Decompiled function f__217E_01AD_0005_F29E()
 *
 * @name f__217E_01AD_0005_F29E
 * @implements 217E:01AD:0005:F29E ()
 *
 */
void f__217E_01AD_0005_F29E()
{
	emu_push(emu_cs);

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_ds, 0x00, 0x84);
	emu_push(0x01B2);
	switch (emu_ip) {
		case 0x125C: f__217E_125C_0001_6580(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x217E; emu_last_ip = 0x01AE; emu_last_length = 0x0005; emu_last_crc = 0xF29E;
			emu_call();
			return;
	}
	f__217E_01B2_0005_729F();
}

/**
 * Decompiled function f__217E_01B2_0005_729F()
 *
 * @name f__217E_01B2_0005_729F
 * @implements 217E:01B2:0005:729F ()
 *
 */
void f__217E_01B2_0005_729F()
{
	emu_push(emu_cs);

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_ds, 0x00, 0x82);
	emu_push(0x01B7);
	switch (emu_ip) {
		case 0x125C: f__217E_125C_0001_6580(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x217E; emu_last_ip = 0x01B3; emu_last_length = 0x0005; emu_last_crc = 0x729F;
			emu_call();
			return;
	}
	f__217E_01B7_0003_2677();
}

/**
 * Decompiled function f__217E_01B7_0003_2677()
 *
 * @name f__217E_01B7_0003_2677
 * @implements 217E:01B7:0003:2677 ()
 *
 */
void f__217E_01B7_0003_2677()
{
	emu_pop(&emu_ds);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__217E_01BA_000A_D507()
 *
 * @name f__217E_01BA_000A_D507
 * @implements 217E:01BA:000A:D507 ()
 *
 * Called From: 217E:0045:0017:9F5E
 */
void f__217E_01BA_000A_D507()
{
	emu_push(emu_ds);
	emu_movw(&emu_di, 0x00 + 0x8C);
	emu_push(emu_ds);
	emu_pop(&emu_es);
	emu_push(0x01C4); f__217E_0268_0027_C749();
	f__217E_01C4_0002_A187();
}

/**
 * Decompiled function f__217E_01C4_0002_A187()
 *
 * @name f__217E_01C4_0002_A187
 * @implements 217E:01C4:0002:A187 ()
 *
 */
void f__217E_01C4_0002_A187()
{
	emu_pop(&emu_ds);

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__217E_01C6_0004_16B8()
 *
 * @name f__217E_01C6_0004_16B8
 * @implements 217E:01C6:0004:16B8 ()
 *
 * Called From: 217E:002E:0003:5DA5
 */
void f__217E_01C6_0004_16B8()
{
	emu_movb(&emu_ah, 0x30);
	emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = 0x0070; emu_push(0x01CA); Interrupt_DOS();
	f__217E_01CA_003A_4E2F();
}

/**
 * Decompiled function f__217E_01CA_003A_4E2F()
 *
 * @name f__217E_01CA_003A_4E2F
 * @implements 217E:01CA:003A:4E2F ()
 *
 */
void f__217E_01CA_003A_4E2F()
{
	emu_cmpb(&emu_al, 0x3);
	if (emu_flags.cf) { /* Unresolved jump */ emu_ip = 0x020A; emu_last_cs = 0x217E; emu_last_ip = 0x01CC; emu_last_length = 0x003A; emu_last_crc = 0x4E2F; emu_call(); return; }
	emu_movb(&emu_get_memory8(emu_ds, 0x00, 0x6), 0x20);
	emu_push(emu_ds);
	emu_movw(&emu_ax, 0x353F);
	emu_movw(&emu_ds, emu_ax);
	emu_movw(&emu_ds, emu_get_memory16(emu_ds, 0x00, 0x77));
	emu_xorw(&emu_si, emu_si);
	emu_cld();
	f__217E_01E0_0024_5FAA(); return;
}

/**
 * Decompiled function f__217E_01E0_0024_5FAA()
 *
 * @name f__217E_01E0_0024_5FAA
 * @implements 217E:01E0:0024:5FAA ()
 *
 * Called From: 217E:01E3:003A:4E2F
 * Called From: 217E:01E3:0024:5FAA
 * Called From: 217E:01E8:0024:5FAA
 */
void f__217E_01E0_0024_5FAA()
{
	emu_lodsb(emu_ds);
	emu_orb(&emu_al, emu_al);
	if (!emu_flags.zf) { f__217E_01E0_0024_5FAA(); return; }
	emu_lodsb(emu_ds);
	emu_orb(&emu_al, emu_al);
	if (!emu_flags.zf) { f__217E_01E0_0024_5FAA(); return; }
	emu_lodsw(emu_ds);
	emu_movw(&emu_di, 0x00 + 0x8C);
	emu_movw(&emu_ax, 0x33F4);
	emu_movw(&emu_es, emu_ax);
	emu_movw(&emu_bx, emu_di);
	f__217E_01F6_000E_B2D2(); return;
}

/**
 * Decompiled function f__217E_01F6_000E_B2D2()
 *
 * @name f__217E_01F6_000E_B2D2
 * @implements 217E:01F6:000E:B2D2 ()
 *
 * Called From: 217E:01FE:0024:5FAA
 * Called From: 217E:01FE:000E:B2D2
 * Called From: 217E:0202:000E:B2D2
 */
void f__217E_01F6_000E_B2D2()
{
	emu_lodsb(emu_ds);
	emu_stosb();
	emu_orb(&emu_al, emu_al);
	if (emu_flags.zf) { f__217E_0204_0005_6940(); return; }
	emu_cmpb(&emu_al, 0x5C);
	if (emu_flags.zf) {
		emu_movw(&emu_bx, emu_di);
	}
	f__217E_01F6_000E_B2D2(); return;
}

/**
 * Decompiled function f__217E_0204_0005_6940()
 *
 * @name f__217E_0204_0005_6940
 * @implements 217E:0204:0005:6940 ()
 *
 * Called From: 217E:01FA:000E:B2D2
 */
void f__217E_0204_0005_6940()
{
	emu_movw(&emu_di, emu_bx);
	emu_push(0x0209); f__217E_0268_0027_C749();
	f__217E_0209_0002_A187();
}

/**
 * Decompiled function f__217E_0209_0002_A187()
 *
 * @name f__217E_0209_0002_A187
 * @implements 217E:0209:0002:A187 ()
 *
 */
void f__217E_0209_0002_A187()
{
	emu_pop(&emu_ds);

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__217E_020B_0026_BE77()
 *
 * @name f__217E_020B_0026_BE77
 * @implements 217E:020B:0026:BE77 ()
 *
 * Called From: 217E:004A:0005:CE36
 */
void f__217E_020B_0026_BE77()
{
	emu_push(emu_ds);
	emu_movw(&emu_ax, 0x353F);
	emu_movw(&emu_ds, emu_ax);
	emu_movw(&emu_ds, emu_get_memory16(emu_ds, 0x00, 0x77));
	emu_xorw(&emu_si, emu_si);
	emu_movw(&emu_di, 0xE);
	emu_push(emu_cs);
	emu_pop(&emu_es);
	emu_movw(&emu_cx, 0x5);
	emu_cld();
	emu_rep_cmpsb(emu_ds);
	if (emu_flags.zf) { f__217E_0231_001E_BC98(); return; }
	emu_decw(&emu_si);
	emu_lodsb(emu_ds);
	emu_orb(&emu_al, emu_al);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0225; emu_last_cs = 0x217E; emu_last_ip = 0x0228; emu_last_length = 0x0026; emu_last_crc = 0xBE77; emu_call(); return; }
	emu_cmpb(&emu_al, emu_get_memory8(emu_ds, emu_si, 0x0));
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0217; emu_last_cs = 0x217E; emu_last_ip = 0x022C; emu_last_length = 0x0026; emu_last_crc = 0xBE77; emu_call(); return; }
	f__217E_022E_0003_225E(); return;
}

/**
 * Decompiled function f__217E_022E_0003_225E()
 *
 * @name f__217E_022E_0003_225E
 * @implements 217E:022E:0003:225E ()
 *
 * Called From: 217E:0234:001E:BC98
 */
void f__217E_022E_0003_225E()
{
	emu_pop(&emu_ds);
	emu_stc();

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__217E_0231_001E_BC98()
 *
 * @name f__217E_0231_001E_BC98
 * @implements 217E:0231:001E:BC98 ()
 *
 * Called From: 217E:0222:0026:BE77
 * Called From: 217E:0264:0006:E019
 */
void f__217E_0231_001E_BC98()
{
	emu_cmpb(&emu_get_memory8(emu_ds, emu_si, 0x0), 0x0);
	if (emu_flags.zf) { f__217E_022E_0003_225E(); return; }
	emu_movw(&emu_di, 0x00 + 0x8C);
	emu_movw(&emu_ax, 0x33F4);
	emu_movw(&emu_es, emu_ax);
	emu_xorb(&emu_al, emu_al);
	f__217E_0241_000E_7C76(); return;
}

/**
 * Decompiled function f__217E_0241_000E_7C76()
 *
 * @name f__217E_0241_000E_7C76
 * @implements 217E:0241:000E:7C76 ()
 *
 * Called From: 217E:024D:001E:BC98
 * Called From: 217E:024D:000E:7C76
 */
void f__217E_0241_000E_7C76()
{
	emu_movb(&emu_ah, emu_al);
	emu_lodsb(emu_ds);
	emu_orb(&emu_al, emu_al);
	if (emu_flags.zf) { f__217E_024F_0013_687A(); return; }
	emu_cmpb(&emu_al, 0x3B);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0250; emu_last_cs = 0x217E; emu_last_ip = 0x024A; emu_last_length = 0x000E; emu_last_crc = 0x7C76; emu_call(); return; }
	emu_stosb();
	f__217E_0241_000E_7C76(); return;
}

/**
 * Decompiled function f__217E_024F_0013_687A()
 *
 * @name f__217E_024F_0013_687A
 * @implements 217E:024F:0013:687A ()
 *
 * Called From: 217E:0246:000E:7C76
 */
void f__217E_024F_0013_687A()
{
	emu_decw(&emu_si);
	emu_cmpb(&emu_ah, 0x3A);
	if (!emu_flags.zf) {
		emu_cmpb(&emu_ah, 0x5C);
		if (!emu_flags.zf) {
			emu_movb(&emu_al, 0x5C);
			emu_stosb();
		}
	}
	f__217E_025D_0005_FDF4(); return;
}

/**
 * Decompiled function f__217E_025D_0005_FDF4()
 *
 * @name f__217E_025D_0005_FDF4
 * @implements 217E:025D:0005:FDF4 ()
 *
 * Called From: 217E:0258:0013:687A
 */
void f__217E_025D_0005_FDF4()
{
	emu_push(emu_ds);
	emu_push(emu_si);
	emu_push(0x0262); f__217E_0268_0027_C749();
	f__217E_0262_0006_E019();
}

/**
 * Decompiled function f__217E_0262_0006_E019()
 *
 * @name f__217E_0262_0006_E019
 * @implements 217E:0262:0006:E019 ()
 *
 */
void f__217E_0262_0006_E019()
{
	emu_pop(&emu_si);
	emu_pop(&emu_ds);
	if (emu_flags.cf) { f__217E_0231_001E_BC98(); return; }
	emu_pop(&emu_ds);

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__217E_0268_0027_C749()
 *
 * @name f__217E_0268_0027_C749
 * @implements 217E:0268:0027:C749 ()
 *
 * Called From: 217E:01C1:000A:D507
 * Called From: 217E:0206:0005:6940
 * Called From: 217E:025F:0005:FDF4
 */
void f__217E_0268_0027_C749()
{
	emu_lfp(&emu_ds, &emu_si, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax, emu_ds);
	emu_orw(&emu_ax, emu_si);
	if (emu_flags.zf) { f__217E_027F_0010_B17F(); return; }
	emu_movw(&emu_cx, 0xC);
	f__217E_0274_001B_1868(); return;
}

/**
 * Decompiled function f__217E_0274_001B_1868()
 *
 * @name f__217E_0274_001B_1868
 * @implements 217E:0274:001B:1868 ()
 *
 * Called From: 217E:027A:0027:C749
 * Called From: 217E:027A:001B:1868
 */
void f__217E_0274_001B_1868()
{
	emu_lodsb(emu_ds);
	emu_stosb();
	emu_orb(&emu_al, emu_al);
	if (!emu_flags.zf) {
		if (--emu_cx != 0) { f__217E_0274_001B_1868(); return; }
		emu_subb(&emu_al, emu_al);
		emu_stosb();
	}
	f__217E_027F_0010_B17F(); return;
}

/**
 * Decompiled function f__217E_027F_0010_B17F()
 *
 * @name f__217E_027F_0010_B17F
 * @implements 217E:027F:0010:B17F ()
 *
 * Called From: 217E:026F:0027:C749
 * Called From: 217E:0278:001B:1868
 */
void f__217E_027F_0010_B17F()
{
	emu_movw(&emu_dx, 0x00 + 0x8C);
	emu_movw(&emu_ax, 0x33F4);
	emu_movw(&emu_ds, emu_ax);
	emu_movb(&emu_ah, 0x3D);
	emu_movb(&emu_al, emu_get_memory8(emu_ds, 0x00, 0x6));
	emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = 0x0070; emu_push(0x028F); Interrupt_DOS();
	f__217E_028F_0001_6180();
}

/**
 * Decompiled function f__217E_028F_0001_6180()
 *
 * @name f__217E_028F_0001_6180
 * @implements 217E:028F:0001:6180 ()
 *
 */
void f__217E_028F_0001_6180()
{

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__217E_0290_000A_9FBE()
 *
 * @name f__217E_0290_000A_9FBE
 * @implements 217E:0290:000A:9FBE ()
 *
 * Called From: 217E:0068:000C:BA4D
 * Called From: 217E:00A7:0006:793B
 */
void f__217E_0290_000A_9FBE()
{
	emu_push(emu_ds);
	emu_movw(&emu_dx, emu_bp - 0x14);
	emu_push(emu_ss);
	emu_pop(&emu_ds);
	emu_movb(&emu_ah, 0x3F);
	emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = 0x0070; emu_push(0x029A); Interrupt_DOS();
	f__217E_029A_0006_7940();
}

/**
 * Decompiled function f__217E_029A_0006_7940()
 *
 * @name f__217E_029A_0006_7940
 * @implements 217E:029A:0006:7940 ()
 *
 */
void f__217E_029A_0006_7940()
{
	emu_pop(&emu_ds);
	if (emu_flags.cf) { /* Unresolved jump */ emu_ip = 0x029F; emu_last_cs = 0x217E; emu_last_ip = 0x029B; emu_last_length = 0x0006; emu_last_crc = 0x7940; emu_call(); return; }
	emu_cmpw(&emu_ax, emu_cx);

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__217E_02A0_002C_0B5F()
 *
 * @name f__217E_02A0_002C_0B5F
 * @implements 217E:02A0:002C:0B5F ()
 *
 * Called From: 217E:010C:0014:F700
 * Called From: 217E:0D34:000B:83A7
 */
void f__217E_02A0_002C_0B5F()
{
	emu_movw(&emu_ax, 0x353F);
	emu_movw(&emu_es, emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_es, 0x00, 0x7B));
	emu_addw(&emu_ax, 0x10);
	emu_movw(&emu_get_memory16(emu_cs, 0x00, 0x13), emu_ax);
	emu_movw(&emu_ax, 0x3405);
	emu_movw(&emu_es, emu_ax);
	emu_xorw(&emu_bx, emu_bx);
	emu_xorw(&emu_di, emu_di);
	emu_movw(&emu_si, 0x00 + 0x1A0);
	f__217E_02BD_000F_D617(); return;
}

/**
 * Decompiled function f__217E_02BD_000F_D617()
 *
 * @name f__217E_02BD_000F_D617
 * @implements 217E:02BD:000F:D617 ()
 *
 * Called From: 217E:0314:000B:B2D7
 * Called From: 217E:0314:0011:7C21
 */
void f__217E_02BD_000F_D617()
{
	emu_testw(&emu_get_memory16(emu_ds, emu_si, 0x4), 0x2);
	if (!emu_flags.zf) {
		emu_cmpw(&emu_get_memory16(emu_ds, emu_si, 0x2), 0x0);
		if (!emu_flags.zf) { f__217E_02CD_001B_C258(); return; }
	}
	f__217E_02CA_0002_DFBA(); return;
}

/**
 * Decompiled function f__217E_02CA_0002_DFBA()
 *
 * @name f__217E_02CA_0002_DFBA
 * @implements 217E:02CA:0002:DFBA ()
 *
 * Called From: 217E:02C2:002C:0B5F
 * Called From: 217E:02C2:000F:D617
 */
void f__217E_02CA_0002_DFBA()
{
	f__217E_030B_000B_B2D7(); return;
}

/**
 * Decompiled function f__217E_02CD_001B_C258()
 *
 * @name f__217E_02CD_001B_C258
 * @implements 217E:02CD:001B:C258 ()
 *
 * Called From: 217E:02C8:000F:D617
 */
void f__217E_02CD_001B_C258()
{
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, emu_si, 0x0));
	emu_push(emu_es);
	emu_movw(&emu_get_memory16(emu_es, 0x00, 0x12), emu_ax);
	emu_movw(&emu_es, emu_ax);
	emu_cmpb(&emu_get_memory8(emu_es, 0x00, 0x1A), 0xFF);
	if (!emu_flags.zf) { f__217E_02E9_001C_2B54(); return; }
	emu_pop(&emu_es);
	emu_movw(&emu_get_memory16(emu_es, 0x00, 0x12), 0x0);
	f__217E_030B_000B_B2D7(); return;
}

/**
 * Decompiled function f__217E_02E9_001C_2B54()
 *
 * @name f__217E_02E9_001C_2B54
 * @implements 217E:02E9:001C:2B54 ()
 *
 * Called From: 217E:02DC:001B:C258
 */
void f__217E_02E9_001C_2B54()
{
	emu_pop(&emu_ax);
	emu_movw(&emu_get_memory16(emu_es, 0x00, 0x18), 0x4CB);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x114));
	emu_movw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x116));
	emu_addw(&emu_get_memory16(emu_es, 0x00, 0x4), emu_ax);
	emu_adcw(&emu_get_memory16(emu_es, 0x00, 0x6), emu_dx);
	emu_push(0x0305); f__217E_07B2_0018_C2D5();
	f__217E_0305_0011_7C21();
}

/**
 * Decompiled function f__217E_0305_0011_7C21()
 *
 * @name f__217E_0305_0011_7C21
 * @implements 217E:0305:0011:7C21 ()
 *
 */
void f__217E_0305_0011_7C21()
{
	emu_cmpw(&emu_bx, emu_dx);
	if (emu_flags.cf) {
		emu_xchgw(&emu_dx, &emu_bx);
	}
	f__217E_030B_000B_B2D7(); return;
}

/**
 * Decompiled function f__217E_030B_000B_B2D7()
 *
 * @name f__217E_030B_000B_B2D7
 * @implements 217E:030B:000B:B2D7 ()
 *
 * Called From: 217E:02CA:0002:DFBA
 * Called From: 217E:0307:0011:7C21
 */
void f__217E_030B_000B_B2D7()
{
	emu_addw(&emu_si, 0x8);
	emu_cmpw(&emu_si, 0x8B0);
	if (!emu_flags.cf) { f__217E_0316_000A_40AF(); return; }
	f__217E_02BD_000F_D617(); return;
}

/**
 * Decompiled function f__217E_0316_000A_40AF()
 *
 * @name f__217E_0316_000A_40AF
 * @implements 217E:0316:000A:40AF ()
 *
 * Called From: 217E:0312:000B:B2D7
 */
void f__217E_0316_000A_40AF()
{
	emu_xorw(&emu_ax, emu_ax);
	emu_addw(&emu_bx, 0x2);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x11A), emu_bx);

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__217E_0320_0049_4A24()
 *
 * @name f__217E_0320_0049_4A24
 * @implements 217E:0320:0049:4A24 ()
 *
 * Called From: 217E:012B:000B:85DC
 */
void f__217E_0320_0049_4A24()
{
	emu_movw(&emu_cx, emu_get_memory16(emu_ds, 0x00, 0x122));
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x12C), emu_cx);
	emu_movw(&emu_bx, emu_cx);
	emu_movw(&emu_si, emu_get_memory16(emu_ds, 0x00, 0x124));
	emu_movw(&emu_di, emu_get_memory16(emu_ds, 0x00, 0x126));
	emu_push(emu_ds);
	f__217E_0333_0036_7CC2(); return;
}

/**
 * Decompiled function f__217E_0333_0036_7CC2()
 *
 * @name f__217E_0333_0036_7CC2
 * @implements 217E:0333:0036:7CC2 ()
 *
 * Called From: 217E:0367:0049:4A24
 * Called From: 217E:0367:0036:7CC2
 */
void f__217E_0333_0036_7CC2()
{
	emu_movw(&emu_ds, emu_cx);
	emu_movw(&emu_cx, emu_get_memory16(emu_ds, 0x00, 0x12));
	if (emu_cx == 0) { f__217E_0369_0016_B542(); return; }
	emu_movw(&emu_es, emu_cx);
	emu_movw(&emu_ax, emu_get_memory16(emu_es, 0x00, 0x4));
	emu_movw(&emu_dx, emu_get_memory16(emu_es, 0x00, 0x6));
	emu_subw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x4));
	emu_sbbw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x6));
	emu_movw(&emu_cx, 0x10);
	emu_divw(&emu_ax, emu_cx);
	emu_addw(&emu_ax, emu_si);
	emu_cmpw(&emu_ax, emu_di);
	if (!(emu_flags.cf || emu_flags.zf)) { f__217E_0369_0016_B542(); return; }
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x10), emu_si);
	emu_movw(&emu_si, emu_ax);
	emu_movw(&emu_cx, emu_es);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x1C), emu_cx);
	emu_movw(&emu_bx, emu_ds);
	f__217E_0333_0036_7CC2(); return;
}

/**
 * Decompiled function f__217E_0369_0016_B542()
 *
 * @name f__217E_0369_0016_B542
 * @implements 217E:0369:0016:B542 ()
 *
 * Called From: 217E:0357:0036:7CC2
 */
void f__217E_0369_0016_B542()
{
	emu_movw(&emu_ds, emu_bx);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x1C), 0x0);
	emu_pop(&emu_ds);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x120), emu_si);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x124));
	emu_subw(&emu_si, emu_ax);
	if (!emu_flags.zf) { f__217E_0380_001D_F290(); return; }
	/* Unresolved jump */ emu_ip = 0x03DE; emu_last_cs = 0x217E; emu_last_ip = 0x037D; emu_last_length = 0x0016; emu_last_crc = 0xB542; emu_call();
}

/**
 * Decompiled function f__217E_0380_001D_F290()
 *
 * @name f__217E_0380_001D_F290
 * @implements 217E:0380:001D:F290 ()
 *
 * Called From: 217E:037B:0016:B542
 */
void f__217E_0380_001D_F290()
{
	emu_movb(&emu_cl, 0x4);
	emu_rolw(&emu_si, emu_cl);
	emu_movw(&emu_di, emu_si);
	emu_andw(&emu_di, 0xF);
	emu_andw(&emu_si, 0xFFF0);
	emu_movw(&emu_es, emu_get_memory16(emu_ds, 0x00, 0x12C));
	emu_movw(&emu_dx, emu_get_memory16(emu_es, 0x00, 0x4));
	emu_movw(&emu_cx, emu_get_memory16(emu_es, 0x00, 0x6));
	emu_push(0x039D); f__217E_03ED_000A_D326();
	f__217E_039D_0012_6D95();
}

/**
 * Decompiled function f__217E_039D_0012_6D95()
 *
 * @name f__217E_039D_0012_6D95
 * @implements 217E:039D:0012:6D95 ()
 *
 */
void f__217E_039D_0012_6D95()
{
	if (emu_flags.cf) { /* Unresolved jump */ emu_ip = 0x03DF; emu_last_cs = 0x217E; emu_last_ip = 0x039D; emu_last_length = 0x0012; emu_last_crc = 0x6D95; emu_call(); return; }
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x12C));
	emu_push(emu_ds);
	f__217E_03A3_000C_652C(); return;
}

/**
 * Decompiled function f__217E_03A3_000C_652C()
 *
 * @name f__217E_03A3_000C_652C
 * @implements 217E:03A3:000C:652C ()
 *
 * Called From: 217E:03DB:000C:E9D5
 */
void f__217E_03A3_000C_652C()
{
	emu_movw(&emu_es, emu_ax);
	emu_movw(&emu_cx, emu_get_memory16(emu_es, 0x00, 0xA));
	if (emu_cx == 0) { f__217E_03AF_000B_434C(); return; }
	emu_push(0x03AF); f__217E_0426_003F_15C8();
	f__217E_03AF_000B_434C();
}

/**
 * Decompiled function f__217E_03AF_000B_434C()
 *
 * @name f__217E_03AF_000B_434C
 * @implements 217E:03AF:000B:434C ()
 *
 * Called From: 217E:03AA:000C:652C
 */
void f__217E_03AF_000B_434C()
{
	emu_cmpw(&emu_get_memory16(emu_es, 0x00, 0xC), 0x0);
	if (emu_flags.zf) { f__217E_03BA_001A_D1EE(); return; }
	emu_push(0x03BA); f__217E_0698_001E_EA6B();
	f__217E_03BA_001A_D1EE();
}

/**
 * Decompiled function f__217E_03BA_001A_D1EE()
 *
 * @name f__217E_03BA_001A_D1EE
 * @implements 217E:03BA:001A:D1EE ()
 *
 * Called From: 217E:03B5:000B:434C
 */
void f__217E_03BA_001A_D1EE()
{
	emu_movw(&emu_ax, emu_get_memory16(emu_es, 0x00, 0x10));
	emu_decw(&emu_ax);
	emu_movw(&emu_ds, emu_ax);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0xE), emu_es);
	emu_push(emu_es);
	emu_movw(&emu_ax, 0xFFFF);
	emu_movw(&emu_bx, emu_ax);
	emu_movw(&emu_ds, emu_get_memory16(emu_cs, 0x00, 0xA));

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_ds, 0x00, 0x86);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_ds, 0x00, 0x88);
	emu_push(0x03D4);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x01F702C9: f__01F7_02C9_0001_6580(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x217E; emu_last_ip = 0x03D0; emu_last_length = 0x001A; emu_last_crc = 0xD1EE;
			emu_call();
			return;
	}
	f__217E_03D4_000C_E9D5();
}

/**
 * Decompiled function f__217E_03D4_000C_E9D5()
 *
 * @name f__217E_03D4_000C_E9D5
 * @implements 217E:03D4:000C:E9D5 ()
 *
 */
void f__217E_03D4_000C_E9D5()
{
	emu_pop(&emu_es);
	emu_movw(&emu_ax, emu_get_memory16(emu_es, 0x00, 0x1C));
	emu_orw(&emu_ax, emu_ax);
	if (!emu_flags.zf) { f__217E_03A3_000C_652C(); return; }
	emu_pop(&emu_ds);
	emu_clc();

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__217E_03ED_000A_D326()
 *
 * @name f__217E_03ED_000A_D326
 * @implements 217E:03ED:000A:D326 ()
 *
 * Called From: 217E:039A:001D:F290
 * Called From: 217E:04E8:0020:3089
 */
void f__217E_03ED_000A_D326()
{
	emu_push(emu_ax);
	emu_movw(&emu_bx, emu_get_memory16(emu_ds, 0x00, 0x128));
	emu_movw(&emu_ax, 0x4200);
	emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = 0x0070; emu_push(0x03F7); Interrupt_DOS();
	f__217E_03F7_0006_5843();
}

/**
 * Decompiled function f__217E_03F7_0006_5843()
 *
 * @name f__217E_03F7_0006_5843
 * @implements 217E:03F7:0006:5843 ()
 *
 */
void f__217E_03F7_0006_5843()
{
	emu_pop(&emu_ax);
	emu_push(emu_ds);
	emu_movw(&emu_ds, emu_ax);
	f__217E_0404_000F_237C(); return;
}

/**
 * Decompiled function f__217E_03FD_0016_DD85()
 *
 * @name f__217E_03FD_0016_DD85
 * @implements 217E:03FD:0016:DD85 ()
 *
 * Called From: 217E:0422:0013:7DEB
 */
void f__217E_03FD_0016_DD85()
{
	emu_movw(&emu_ax, emu_ds);
	emu_addw(&emu_ax, 0xFFF);
	emu_movw(&emu_ds, emu_ax);
	f__217E_0404_000F_237C(); return;
}

/**
 * Decompiled function f__217E_0404_000F_237C()
 *
 * @name f__217E_0404_000F_237C
 * @implements 217E:0404:000F:237C ()
 *
 * Called From: 217E:03FB:0006:5843
 */
void f__217E_0404_000F_237C()
{
	emu_movw(&emu_cx, 0xFFF0);
	emu_orw(&emu_di, emu_di);
	if (emu_flags.zf) {
		emu_movw(&emu_cx, emu_si);
	}
	f__217E_040D_0006_DDC8(); return;
}

/**
 * Decompiled function f__217E_040D_0006_DDC8()
 *
 * @name f__217E_040D_0006_DDC8
 * @implements 217E:040D:0006:DDC8 ()
 *
 * Called From: 217E:0409:000F:237C
 * Called From: 217E:0409:0016:DD85
 */
void f__217E_040D_0006_DDC8()
{
	emu_xorw(&emu_dx, emu_dx);
	emu_movb(&emu_ah, 0x3F);
	emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = 0x0070; emu_push(0x0413); Interrupt_DOS();
	f__217E_0413_0013_7DEB();
}

/**
 * Decompiled function f__217E_0413_0013_7DEB()
 *
 * @name f__217E_0413_0013_7DEB
 * @implements 217E:0413:0013:7DEB ()
 *
 */
void f__217E_0413_0013_7DEB()
{
	if (!emu_flags.cf) {
		emu_cmpw(&emu_ax, emu_cx);
		if (!emu_flags.cf) {
			emu_subw(&emu_si, emu_ax);
			emu_sbbw(&emu_di, 0x0);
			emu_movw(&emu_ax, emu_si);
			emu_orw(&emu_ax, emu_di);
			if (!emu_flags.zf) { f__217E_03FD_0016_DD85(); return; }
		}
	}
	f__217E_0424_0002_A187(); return;
}

/**
 * Decompiled function f__217E_0424_0002_A187()
 *
 * @name f__217E_0424_0002_A187
 * @implements 217E:0424:0002:A187 ()
 *
 * Called From: 217E:0417:0013:7DEB
 */
void f__217E_0424_0002_A187()
{
	emu_pop(&emu_ds);

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__217E_0426_003F_15C8()
 *
 * @name f__217E_0426_003F_15C8
 * @implements 217E:0426:003F:15C8 ()
 *
 * Called From: 217E:03AC:0012:6D95
 * Called From: 217E:03AC:000C:652C
 * Called From: 217E:04F4:000C:7563
 */
void f__217E_0426_003F_15C8()
{
	emu_push(emu_ds);
	emu_push(emu_es);
	emu_movw(&emu_ax, emu_get_memory16(emu_es, 0x00, 0x8));
	emu_movw(&emu_si, emu_ax);
	emu_andw(&emu_si, 0xF);
	emu_shrw(&emu_ax, 0x1);
	emu_shrw(&emu_ax, 0x1);
	emu_shrw(&emu_ax, 0x1);
	emu_shrw(&emu_ax, 0x1);
	emu_movw(&emu_dx, emu_get_memory16(emu_es, 0x00, 0x10));
	emu_addw(&emu_ax, emu_dx);
	emu_movw(&emu_ds, emu_ax);
	emu_movw(&emu_es, emu_dx);
	emu_shrw(&emu_cx, 0x1);
	emu_cld();
	f__217E_0447_001E_BA4B(); return;
}

/**
 * Decompiled function f__217E_0447_001E_BA4B()
 *
 * @name f__217E_0447_001E_BA4B
 * @implements 217E:0447:001E:BA4B ()
 *
 * Called From: 217E:0466:0006:2A7A
 */
void f__217E_0447_001E_BA4B()
{
	emu_lodsw(emu_ds);
	emu_movw(&emu_bx, emu_ax);
	emu_movw(&emu_di, emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_push(emu_ds);
	emu_movw(&emu_ax, 0x340E);
	emu_movw(&emu_ds, emu_ax);
	emu_movw(&emu_ax, emu_di);
	emu_andw(&emu_di, 0xFFF8);
	emu_movw(&emu_dx, emu_get_memory16(emu_ds, emu_di, 0x0));
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0x0), emu_dx);
	emu_testw(&emu_ax, 0x1);
	if (emu_flags.zf) { f__217E_0465_0006_2A7A(); return; }
	/* Unresolved call */ emu_push(0x0465); emu_ip = 0x046B; emu_last_cs = 0x217E; emu_last_ip = 0x0462; emu_last_length = 0x001E; emu_last_crc = 0xBA4B; emu_call();
	f__217E_0465_0006_2A7A();
}

/**
 * Decompiled function f__217E_0465_0006_2A7A()
 *
 * @name f__217E_0465_0006_2A7A
 * @implements 217E:0465:0006:2A7A ()
 *
 * Called From: 217E:0460:003F:15C8
 * Called From: 217E:0460:001E:BA4B
 */
void f__217E_0465_0006_2A7A()
{
	emu_pop(&emu_ds);
	if (--emu_cx != 0) { f__217E_0447_001E_BA4B(); return; }
	emu_pop(&emu_es);
	emu_pop(&emu_ds);

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__217E_04CB_0020_3089()
 *
 * @name f__217E_04CB_0020_3089
 * @implements 217E:04CB:0020:3089 ()
 *
 * Called From: 217E:05D6:000E:EA7B
 */
void f__217E_04CB_0020_3089()
{
	emu_movw(&emu_si, emu_get_memory16(emu_es, 0x00, 0x8));
	emu_xorw(&emu_di, emu_di);
	emu_addw(&emu_si, emu_get_memory16(emu_es, 0x00, 0xA));
	emu_adcw(&emu_di, 0x0);
	emu_movw(&emu_dx, emu_get_memory16(emu_es, 0x00, 0x4));
	emu_movw(&emu_cx, emu_get_memory16(emu_es, 0x00, 0x6));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, 0x00, 0x10));
	emu_push(0x04EB); f__217E_03ED_000A_D326();
	f__217E_04EB_000C_7563();
}

/**
 * Decompiled function f__217E_04EB_000C_7563()
 *
 * @name f__217E_04EB_000C_7563
 * @implements 217E:04EB:000C:7563 ()
 *
 */
void f__217E_04EB_000C_7563()
{
	if (emu_flags.cf) { f__217E_04F8_0001_6180(); return; }
	emu_movw(&emu_cx, emu_get_memory16(emu_es, 0x00, 0xA));
	if (emu_cx == 0) { f__217E_04F7_0002_61BE(); return; }
	emu_push(0x04F7); f__217E_0426_003F_15C8();
	f__217E_04F7_0002_61BE();
}

/**
 * Decompiled function f__217E_04F7_0002_61BE()
 *
 * @name f__217E_04F7_0002_61BE
 * @implements 217E:04F7:0002:61BE ()
 *
 */
void f__217E_04F7_0002_61BE()
{
	emu_clc();
	f__217E_04F8_0001_6180(); return;
}

/**
 * Decompiled function f__217E_04F8_0001_6180()
 *
 * @name f__217E_04F8_0001_6180
 * @implements 217E:04F8:0001:6180 ()
 *
 * Called From: 217E:04EB:000C:7563
 */
void f__217E_04F8_0001_6180()
{

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__217E_04F9_000E_346A()
 *
 * @name f__217E_04F9_000E_346A
 * @implements 217E:04F9:000E:346A ()
 *
 * Called From: 261F:0181:001D:22F4
 * Called From: 261F:0181:0010:C131
 */
void f__217E_04F9_000E_346A()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_addw(&emu_bp, 0x6);
	if (!emu_flags.zf) { f__217E_0507_001D_CFD2(); return; }
	emu_cs = 0x01F7; emu_File_Write2(); return;
}

/**
 * Decompiled function f__217E_0507_001D_CFD2()
 *
 * @name f__217E_0507_001D_CFD2
 * @implements 217E:0507:001D:CFD2 ()
 *
 * Called From: 217E:04FF:000E:346A
 */
void f__217E_0507_001D_CFD2()
{
	emu_push(emu_ax);
	emu_push(emu_bx);
	emu_push(emu_cx);
	emu_push(emu_dx);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_push(emu_ds);
	emu_push(emu_es);
	emu_movw(&emu_ax, 0x33F4);
	emu_movw(&emu_ds, emu_ax);
	emu_sti();
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x2));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_subw(&emu_get_memory16(emu_ss, emu_bp,  0x2), 0x2);
	if (!emu_flags.zf) { f__217E_0526_000F_0135(); return; }
	emu_push(0x0524); f__217E_05A9_001A_42B9();
	f__217E_0524_0002_CC3A();
}

/**
 * Decompiled function f__217E_0524_0002_CC3A()
 *
 * @name f__217E_0524_0002_CC3A
 * @implements 217E:0524:0002:CC3A ()
 *
 */
void f__217E_0524_0002_CC3A()
{
	f__217E_053E_0017_FADA(); return;
}

/**
 * Decompiled function f__217E_0526_000F_0135()
 *
 * @name f__217E_0526_000F_0135
 * @implements 217E:0526:000F:0135 ()
 *
 * Called From: 217E:051F:001D:CFD2
 */
void f__217E_0526_000F_0135()
{
	emu_addw(&emu_bp, 0x6);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x0));
	emu_xchgw(&emu_get_memory16(emu_ss, emu_bp, -0x6), &emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0x0), emu_ax);
	emu_push(0x0535); f__217E_05A9_001A_42B9();
	f__217E_0535_0020_2849();
}

/**
 * Decompiled function f__217E_0535_0020_2849()
 *
 * @name f__217E_0535_0020_2849
 * @implements 217E:0535:0020:2849 ()
 *
 */
void f__217E_0535_0020_2849()
{
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x0));
	emu_xchgw(&emu_get_memory16(emu_ss, emu_bp, -0x6), &emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0x0), emu_ax);
	f__217E_053E_0017_FADA(); return;
}

/**
 * Decompiled function f__217E_053E_0017_FADA()
 *
 * @name f__217E_053E_0017_FADA
 * @implements 217E:053E:0017:FADA ()
 *
 * Called From: 217E:0524:0002:CC3A
 */
void f__217E_053E_0017_FADA()
{
	emu_pop(&emu_bx);
	emu_movb(&emu_al, emu_get_memory8(emu_es, 0x00, 0x1A));
	emu_andb(&emu_al, 0x8);
	emu_andb(&emu_get_memory8(emu_es, 0x00, 0x1A), 0xF7);
	emu_movws(&emu_ax, emu_al);
	emu_movw(&emu_ds, emu_get_memory16(emu_cs, 0x00, 0xA));

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_ds, 0x00, 0x86);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_ds, 0x00, 0x88);
	emu_push(0x0555);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x01F702C9: f__01F7_02C9_0001_6580(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x217E; emu_last_ip = 0x0551; emu_last_length = 0x0017; emu_last_crc = 0xFADA;
			emu_call();
			return;
	}
	f__217E_0555_000A_2A28();
}

/**
 * Decompiled function f__217E_0555_000A_2A28()
 *
 * @name f__217E_0555_000A_2A28
 * @implements 217E:0555:000A:2A28 ()
 *
 */
void f__217E_0555_000A_2A28()
{
	emu_pop(&emu_es);
	emu_pop(&emu_ds);
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_pop(&emu_dx);
	emu_pop(&emu_cx);
	emu_pop(&emu_bx);
	emu_pop(&emu_ax);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__217E_055F_0008_D2BC()
 *
 * @name f__217E_055F_0008_D2BC
 * @implements 217E:055F:0008:D2BC ()
 *
 * Called From: 217E:05CA:0009:8AAB
 */
void f__217E_055F_0008_D2BC()
{
	emu_push(emu_es);
	emu_incw(&emu_get_memory16(emu_ds, 0x00, 0x12A));
	emu_push(0x0567); f__217E_07B2_0018_C2D5();
	f__217E_0567_0002_D73A();
}

/**
 * Decompiled function f__217E_0567_0002_D73A()
 *
 * @name f__217E_0567_0002_D73A
 * @implements 217E:0567:0002:D73A ()
 *
 */
void f__217E_0567_0002_D73A()
{
	f__217E_0597_0003_1DBC(); return;
}

/**
 * Decompiled function f__217E_0569_0007_6790()
 *
 * @name f__217E_0569_0007_6790
 * @implements 217E:0569:0007:6790 ()
 *
 * Called From: 217E:059D:000F:AF3B
 */
void f__217E_0569_0007_6790()
{
	emu_popf();
	emu_push(emu_dx);
	if (!emu_flags.cf) { f__217E_0570_0016_AF8C(); return; }
	emu_push(0x0570); f__217E_063C_002A_EC58();
	f__217E_0570_0016_AF8C();
}

/**
 * Decompiled function f__217E_0570_0016_AF8C()
 *
 * @name f__217E_0570_0016_AF8C
 * @implements 217E:0570:0016:AF8C ()
 *
 * Called From: 217E:056B:0007:6790
 */
void f__217E_0570_0016_AF8C()
{
	emu_movw(&emu_es, emu_get_memory16(emu_ds, 0x00, 0x12C));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, 0x00, 0x1C));
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x12C), emu_ax);
	emu_cmpb(&emu_get_memory8(emu_es, 0x00, 0x1B), 0x0);
	if (!emu_flags.zf) { f__217E_058B_0008_82B1(); return; }
	emu_push(0x0586); f__217E_0624_0003_DD23();
	f__217E_0586_0003_5C07();
}

/**
 * Decompiled function f__217E_0586_0003_5C07()
 *
 * @name f__217E_0586_0003_5C07
 * @implements 217E:0586:0003:5C07 ()
 *
 */
void f__217E_0586_0003_5C07()
{
	emu_push(0x0589); f__217E_07A6_000C_1B04();
	f__217E_0589_0002_C5BA();
}

/**
 * Decompiled function f__217E_0589_0002_C5BA()
 *
 * @name f__217E_0589_0002_C5BA
 * @implements 217E:0589:0002:C5BA ()
 *
 */
void f__217E_0589_0002_C5BA()
{
	f__217E_0596_0004_BDB9(); return;
}

/**
 * Decompiled function f__217E_058B_0008_82B1()
 *
 * @name f__217E_058B_0008_82B1
 * @implements 217E:058B:0008:82B1 ()
 *
 * Called From: 217E:0581:0016:AF8C
 */
void f__217E_058B_0008_82B1()
{
	emu_decb(&emu_get_memory8(emu_es, 0x00, 0x1B));
	emu_push(0x0593); f__217E_06E9_0041_701D();
	f__217E_0593_0003_1DA9();
}

/**
 * Decompiled function f__217E_0593_0003_1DA9()
 *
 * @name f__217E_0593_0003_1DA9
 * @implements 217E:0593:0003:1DA9 ()
 *
 */
void f__217E_0593_0003_1DA9()
{
	emu_push(0x0596); f__217E_073A_0003_5D1A();
	f__217E_0596_0004_BDB9();
}

/**
 * Decompiled function f__217E_0596_0004_BDB9()
 *
 * @name f__217E_0596_0004_BDB9
 * @implements 217E:0596:0004:BDB9 ()
 *
 * Called From: 217E:0589:0002:C5BA
 */
void f__217E_0596_0004_BDB9()
{
	emu_pop(&emu_dx);
	f__217E_0597_0003_1DBC(); return;
}

/**
 * Decompiled function f__217E_0597_0003_1DBC()
 *
 * @name f__217E_0597_0003_1DBC
 * @implements 217E:0597:0003:1DBC ()
 *
 * Called From: 217E:0567:0002:D73A
 */
void f__217E_0597_0003_1DBC()
{
	emu_push(0x059A); f__217E_078A_001C_ADD5();
	f__217E_059A_000F_AF3B();
}

/**
 * Decompiled function f__217E_059A_000F_AF3B()
 *
 * @name f__217E_059A_000F_AF3B
 * @implements 217E:059A:000F:AF3B ()
 *
 */
void f__217E_059A_000F_AF3B()
{
	emu_pushf();
	emu_cmpw(&emu_dx, emu_ax);
	if (!(emu_flags.cf || emu_flags.zf)) { f__217E_0569_0007_6790(); return; }
	emu_popf();
	emu_pop(&emu_es);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x120));
	emu_movw(&emu_get_memory16(emu_es, 0x00, 0x10), emu_ax);

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__217E_05A9_001A_42B9()
 *
 * @name f__217E_05A9_001A_42B9
 * @implements 217E:05A9:001A:42B9 ()
 *
 * Called From: 217E:0521:001D:CFD2
 * Called From: 217E:0532:000F:0135
 */
void f__217E_05A9_001A_42B9()
{
	emu_incw(&emu_get_memory16(emu_ds, 0x00, 0x11C));
	emu_cmpw(&emu_get_memory16(emu_es, 0x00, 0x10), 0x0);
	if (emu_flags.zf) { f__217E_05C4_0009_8AAB(); return; }
	emu_movb(&emu_get_memory8(emu_es, 0x00, 0x1B), 0x1);
	emu_orb(&emu_get_memory8(emu_es, 0x00, 0x1A), 0x4);
	f__217E_05E0_0003_1D25(); return;
}

/**
 * Decompiled function f__217E_05C4_0009_8AAB()
 *
 * @name f__217E_05C4_0009_8AAB
 * @implements 217E:05C4:0009:8AAB ()
 *
 * Called From: 217E:05B3:001A:42B9
 */
void f__217E_05C4_0009_8AAB()
{
	emu_orb(&emu_get_memory8(emu_es, 0x00, 0x1A), 0x8);
	emu_push(0x05CD); f__217E_055F_0008_D2BC();
	f__217E_05CD_000E_EA7B();
}

/**
 * Decompiled function f__217E_05CD_000E_EA7B()
 *
 * @name f__217E_05CD_000E_EA7B
 * @implements 217E:05CD:000E:EA7B ()
 *
 */
void f__217E_05CD_000E_EA7B()
{
	emu_push(emu_ds);
	emu_decw(&emu_ax);
	emu_movw(&emu_ds, emu_ax);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0xE), emu_es);
	emu_pop(&emu_ds);

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_es, 0x00, 0x18);
	emu_push(0x05DB);
	switch (emu_ip) {
		case 0x04CB: f__217E_04CB_0020_3089(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x217E; emu_last_ip = 0x05D6; emu_last_length = 0x000E; emu_last_crc = 0xEA7B;
			emu_call();
			return;
	}
	f__217E_05DB_0005_BE02();
}

/**
 * Decompiled function f__217E_05DB_0005_BE02()
 *
 * @name f__217E_05DB_0005_BE02
 * @implements 217E:05DB:0005:BE02 ()
 *
 */
void f__217E_05DB_0005_BE02()
{
	if (emu_flags.cf) { f__217E_061F_0005_07A7(); return; }
	emu_push(0x05E0); f__217E_073A_0003_5D1A();
	f__217E_05E0_0003_1D25();
}

/**
 * Decompiled function f__217E_05E0_0003_1D25()
 *
 * @name f__217E_05E0_0003_1D25
 * @implements 217E:05E0:0003:1D25 ()
 *
 * Called From: 217E:05C1:001A:42B9
 */
void f__217E_05E0_0003_1D25()
{
	emu_push(0x05E3); f__217E_0677_0009_9C4F();
	f__217E_05E3_000F_0FFD();
}

/**
 * Decompiled function f__217E_05E3_000F_0FFD()
 *
 * @name f__217E_05E3_000F_0FFD
 * @implements 217E:05E3:000F:0FFD ()
 *
 */
void f__217E_05E3_000F_0FFD()
{
	emu_movb(&emu_al, emu_get_memory8(emu_es, 0x00, 0x1A));
	emu_andb(&emu_al, 0x3);
	emu_addb(&emu_get_memory8(emu_es, 0x00, 0x1B), emu_al);
	emu_push(emu_es);
	emu_push(0x05F2); f__217E_078A_001C_ADD5();
	f__217E_05F2_001F_BC5D();
}

/**
 * Decompiled function f__217E_05F2_001F_BC5D()
 *
 * @name f__217E_05F2_001F_BC5D
 * @implements 217E:05F2:001F:BC5D ()
 *
 */
void f__217E_05F2_001F_BC5D()
{
	emu_movw(&emu_es, emu_get_memory16(emu_ds, 0x00, 0x12C));
	f__217E_05F6_001B_C055(); return;
}

/**
 * Decompiled function f__217E_05F6_001B_C055()
 *
 * @name f__217E_05F6_001B_C055
 * @implements 217E:05F6:001B:C055 ()
 *
 * Called From: 217E:061B:0006:E0A3
 */
void f__217E_05F6_001B_C055()
{
	emu_movw(&emu_cx, emu_get_memory16(emu_es, 0x00, 0x1C));
	if (emu_cx == 0) { f__217E_061D_0002_A181(); return; }
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x118));
	if (!emu_flags.cf) { f__217E_061D_0002_A181(); return; }
	emu_push(emu_cx);
	emu_push(emu_ax);
	emu_cmpb(&emu_get_memory8(emu_es, 0x00, 0x1B), 0x0);
	if (emu_flags.zf) { f__217E_0611_0003_9D28(); return; }
	emu_xorw(&emu_ax, emu_ax);
	f__217E_0617_0006_E0A3(); return;
}

/**
 * Decompiled function f__217E_0611_0003_9D28()
 *
 * @name f__217E_0611_0003_9D28
 * @implements 217E:0611:0003:9D28 ()
 *
 * Called From: 217E:060B:001F:BC5D
 * Called From: 217E:060B:001B:C055
 */
void f__217E_0611_0003_9D28()
{
	emu_push(0x0614); f__217E_06B6_0014_B057();
	f__217E_0614_0003_DDA3();
}

/**
 * Decompiled function f__217E_0614_0003_DDA3()
 *
 * @name f__217E_0614_0003_DDA3
 * @implements 217E:0614:0003:DDA3 ()
 *
 */
void f__217E_0614_0003_DDA3()
{
	emu_push(0x0617); f__217E_07A6_000C_1B04();
	f__217E_0617_0006_E0A3();
}

/**
 * Decompiled function f__217E_0617_0006_E0A3()
 *
 * @name f__217E_0617_0006_E0A3
 * @implements 217E:0617:0006:E0A3 ()
 *
 * Called From: 217E:060F:001B:C055
 * Called From: 217E:060F:001F:BC5D
 */
void f__217E_0617_0006_E0A3()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_es);
	emu_addw(&emu_ax, emu_cx);
	f__217E_05F6_001B_C055(); return;
}

/**
 * Decompiled function f__217E_061D_0002_A181()
 *
 * @name f__217E_061D_0002_A181
 * @implements 217E:061D:0002:A181 ()
 *
 * Called From: 217E:05FB:001B:C055
 * Called From: 217E:0601:001F:BC5D
 * Called From: 217E:0601:001B:C055
 */
void f__217E_061D_0002_A181()
{
	emu_pop(&emu_es);

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__217E_061F_0005_07A7()
 *
 * @name f__217E_061F_0005_07A7
 * @implements 217E:061F:0005:07A7 ()
 *
 * Called From: 217E:05DB:0005:BE02
 */
void f__217E_061F_0005_07A7()
{
	emu_cs = 0x01F7; emu_File_Write2(); return;
}

/**
 * Decompiled function f__217E_0624_0003_DD23()
 *
 * @name f__217E_0624_0003_DD23
 * @implements 217E:0624:0003:DD23 ()
 *
 * Called From: 217E:0583:0016:AF8C
 */
void f__217E_0624_0003_DD23()
{
	emu_push(0x0627); f__217E_06B6_0014_B057();
	f__217E_0627_000D_13D0();
}

/**
 * Decompiled function f__217E_0627_000D_13D0()
 *
 * @name f__217E_0627_000D_13D0
 * @implements 217E:0627:000D:13D0 ()
 *
 */
void f__217E_0627_000D_13D0()
{
	emu_cmpw(&emu_get_memory16(emu_es, 0x00, 0x18), 0x4CB);
	if (!emu_flags.zf) { f__217E_0634_0008_5E8E(); return; }

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_ds, 0x00, 0x80);
	emu_push(0x0634);
	switch (emu_ip) {
		case 0x125B: f__217E_125B_0001_6180(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x217E; emu_last_ip = 0x0630; emu_last_length = 0x000D; emu_last_crc = 0x13D0;
			emu_call();
			return;
	}
	f__217E_0634_0008_5E8E();
}

/**
 * Decompiled function f__217E_0634_0008_5E8E()
 *
 * @name f__217E_0634_0008_5E8E
 * @implements 217E:0634:0008:5E8E ()
 *
 */
void f__217E_0634_0008_5E8E()
{
	emu_movw(&emu_get_memory16(emu_es, 0x00, 0x10), 0x0);

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__217E_063C_002A_EC58()
 *
 * @name f__217E_063C_002A_EC58
 * @implements 217E:063C:002A:EC58 ()
 *
 * Called From: 217E:056D:0007:6790
 */
void f__217E_063C_002A_EC58()
{
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x12C));
	emu_xorw(&emu_cx, emu_cx);
	f__217E_0641_0025_E16B(); return;
}

/**
 * Decompiled function f__217E_0641_0025_E16B()
 *
 * @name f__217E_0641_0025_E16B
 * @implements 217E:0641:0025:E16B ()
 *
 * Called From: 217E:064B:002A:EC58
 * Called From: 217E:064B:0025:E16B
 */
void f__217E_0641_0025_E16B()
{
	emu_incw(&emu_cx);
	emu_push(emu_ax);
	emu_movw(&emu_es, emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_es, 0x00, 0x1C));
	emu_orw(&emu_ax, emu_ax);
	if (!emu_flags.zf) { f__217E_0641_0025_E16B(); return; }
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x12C), emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x126));
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x120), emu_ax);
	f__217E_0656_0010_3DB0(); return;
}

/**
 * Decompiled function f__217E_0656_0010_3DB0()
 *
 * @name f__217E_0656_0010_3DB0
 * @implements 217E:0656:0010:3DB0 ()
 *
 * Called From: 217E:066E:000A:74F1
 */
void f__217E_0656_0010_3DB0()
{
	emu_pop(&emu_es);
	emu_push(emu_cx);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x12C));
	emu_movw(&emu_get_memory16(emu_es, 0x00, 0x1C), emu_ax);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x12C), emu_es);
	emu_push(0x0666); f__217E_07A6_000C_1B04();
	f__217E_0666_0007_144D();
}

/**
 * Decompiled function f__217E_0666_0007_144D()
 *
 * @name f__217E_0666_0007_144D
 * @implements 217E:0666:0007:144D ()
 *
 */
void f__217E_0666_0007_144D()
{
	emu_subw(&emu_get_memory16(emu_ds, 0x00, 0x120), emu_ax);
	emu_push(0x066D); f__217E_06E9_0041_701D();
	f__217E_066D_000A_74F1();
}

/**
 * Decompiled function f__217E_066D_000A_74F1()
 *
 * @name f__217E_066D_000A_74F1
 * @implements 217E:066D:000A:74F1 ()
 *
 */
void f__217E_066D_000A_74F1()
{
	emu_pop(&emu_cx);
	if (--emu_cx != 0) { f__217E_0656_0010_3DB0(); return; }
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x124));
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x120), emu_ax);

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__217E_0677_0009_9C4F()
 *
 * @name f__217E_0677_0009_9C4F
 * @implements 217E:0677:0009:9C4F ()
 *
 * Called From: 217E:05E0:0003:1D25
 */
void f__217E_0677_0009_9C4F()
{
	emu_cmpw(&emu_get_memory16(emu_es, 0x00, 0xC), 0x0);
	if (!emu_flags.zf) { f__217E_0680_0018_29F1(); return; }

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__217E_0680_0018_29F1()
 *
 * @name f__217E_0680_0018_29F1
 * @implements 217E:0680:0018:29F1 ()
 *
 * Called From: 217E:067D:0009:9C4F
 */
void f__217E_0680_0018_29F1()
{
	emu_cmpb(&emu_get_memory8(emu_es, 0x00, 0x20), 0xEA);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x06B5; emu_last_cs = 0x217E; emu_last_ip = 0x0686; emu_last_length = 0x0018; emu_last_crc = 0x29F1; emu_call(); return; }
	emu_movw(&emu_cx, emu_get_memory16(emu_es, 0x00, 0x2));
	if (emu_cx == 0) { f__217E_0698_001E_EA6B(); return; }
	emu_movw(&emu_ax, emu_get_memory16(emu_es, 0x00, 0x10));
	emu_movw(&emu_dx, emu_es);
	emu_push(0x0698); f__217E_0758_0003_5D02();
	f__217E_0698_001E_EA6B();
}

/**
 * Decompiled function f__217E_0698_001E_EA6B()
 *
 * @name f__217E_0698_001E_EA6B
 * @implements 217E:0698:001E:EA6B ()
 *
 * Called From: 217E:03B7:000B:434C
 * Called From: 217E:068D:0018:29F1
 */
void f__217E_0698_001E_EA6B()
{
	emu_movw(&emu_bx, emu_get_memory16(emu_es, 0x00, 0x10));
	emu_movw(&emu_cx, emu_get_memory16(emu_es, 0x00, 0xC));
	emu_movw(&emu_di, 0x20);
	emu_cld();
	f__217E_06A6_0010_8211(); return;
}

/**
 * Decompiled function f__217E_06A6_0010_8211()
 *
 * @name f__217E_06A6_0010_8211
 * @implements 217E:06A6:0010:8211 ()
 *
 * Called From: 217E:06B3:001E:EA6B
 * Called From: 217E:06B3:0010:8211
 */
void f__217E_06A6_0010_8211()
{
	emu_movw(&emu_dx, emu_get_memory16(emu_es, emu_di, 0x2));
	emu_movb(&emu_al, 0xEA);
	emu_stosb();
	emu_movw(&emu_ax, emu_dx);
	emu_stosw();
	emu_movw(&emu_ax, emu_bx);
	emu_stosw();
	if (--emu_cx != 0) { f__217E_06A6_0010_8211(); return; }

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__217E_06B6_0014_B057()
 *
 * @name f__217E_06B6_0014_B057
 * @implements 217E:06B6:0014:B057 ()
 *
 * Called From: 217E:0611:0003:9D28
 * Called From: 217E:0624:0003:DD23
 */
void f__217E_06B6_0014_B057()
{
	emu_cmpb(&emu_get_memory8(emu_es, 0x00, 0x20), 0xCD);
	if (emu_flags.zf) { f__217E_06E8_0001_6180(); return; }
	emu_movw(&emu_ax, emu_es);
	emu_movw(&emu_dx, emu_get_memory16(emu_es, 0x00, 0x10));
	emu_xorw(&emu_cx, emu_cx);
	emu_push(0x06CA); f__217E_0758_0003_5D02();
	f__217E_06CA_001F_56B3();
}

/**
 * Decompiled function f__217E_06CA_001F_56B3()
 *
 * @name f__217E_06CA_001F_56B3
 * @implements 217E:06CA:001F:56B3 ()
 *
 */
void f__217E_06CA_001F_56B3()
{
	emu_movw(&emu_get_memory16(emu_es, 0x00, 0x2), emu_cx);
	emu_movw(&emu_cx, emu_get_memory16(emu_es, 0x00, 0xC));
	emu_movw(&emu_di, 0x20);
	emu_cld();
	f__217E_06D8_0011_EAAF(); return;
}

/**
 * Decompiled function f__217E_06D8_0011_EAAF()
 *
 * @name f__217E_06D8_0011_EAAF
 * @implements 217E:06D8:0011:EAAF ()
 *
 * Called From: 217E:06E6:001F:56B3
 * Called From: 217E:06E6:0011:EAAF
 */
void f__217E_06D8_0011_EAAF()
{
	emu_movw(&emu_dx, emu_get_memory16(emu_es, emu_di, 0x1));
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x110));
	emu_stosw();
	emu_movw(&emu_ax, emu_dx);
	emu_stosw();
	emu_xorb(&emu_al, emu_al);
	emu_stosb();
	if (--emu_cx != 0) { f__217E_06D8_0011_EAAF(); return; }
	f__217E_06E8_0001_6180(); return;
}

/**
 * Decompiled function f__217E_06E8_0001_6180()
 *
 * @name f__217E_06E8_0001_6180
 * @implements 217E:06E8:0001:6180 ()
 *
 * Called From: 217E:06BC:0014:B057
 */
void f__217E_06E8_0001_6180()
{

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__217E_06E9_0041_701D()
 *
 * @name f__217E_06E9_0041_701D
 * @implements 217E:06E9:0041:701D ()
 *
 * Called From: 217E:0590:0008:82B1
 * Called From: 217E:066A:0007:144D
 */
void f__217E_06E9_0041_701D()
{
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x120));
	emu_movw(&emu_dx, emu_get_memory16(emu_es, 0x00, 0x10));
	emu_movw(&emu_get_memory16(emu_es, 0x00, 0x10), emu_ax);
	emu_movw(&emu_cx, emu_get_memory16(emu_es, 0x00, 0x8));
	emu_incw(&emu_cx);
	emu_shrw(&emu_cx, 0x1);
	emu_xorw(&emu_si, emu_si);
	emu_cld();
	emu_cmpw(&emu_ax, emu_dx);
	if (!emu_flags.cf) {
		emu_movw(&emu_si, emu_cx);
		emu_decw(&emu_si);
		emu_shlw(&emu_si, 0x1);
		emu_std();
	}
	f__217E_070A_0020_8DAA(); return;
}

/**
 * Decompiled function f__217E_070A_0020_8DAA()
 *
 * @name f__217E_070A_0020_8DAA
 * @implements 217E:070A:0020:8DAA ()
 *
 * Called From: 217E:0702:0041:701D
 */
void f__217E_070A_0020_8DAA()
{
	emu_movw(&emu_di, emu_si);
	emu_push(emu_ds);
	emu_push(emu_es);
	emu_movw(&emu_ds, emu_dx);
	emu_movw(&emu_es, emu_ax);
	emu_rep_movsw(emu_ds);
	emu_cld();
	emu_decw(&emu_ax);
	emu_movw(&emu_ds, emu_ax);
	emu_pop(&emu_es);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0xE), emu_es);
	emu_incw(&emu_ax);
	emu_pop(&emu_ds);
	emu_cmpb(&emu_get_memory8(emu_es, 0x00, 0x20), 0xCD);
	if (emu_flags.zf) { f__217E_0739_0001_6180(); return; }
	emu_push(0x072A); f__217E_0764_0006_1247();
	f__217E_072A_0010_A45A();
}

/**
 * Decompiled function f__217E_072A_0010_A45A()
 *
 * @name f__217E_072A_0010_A45A
 * @implements 217E:072A:0010:A45A ()
 *
 */
void f__217E_072A_0010_A45A()
{
	emu_movw(&emu_cx, emu_get_memory16(emu_es, 0x00, 0xC));
	emu_movw(&emu_di, 0x23);
	emu_cld();
	f__217E_0733_0007_C692(); return;
}

/**
 * Decompiled function f__217E_0733_0007_C692()
 *
 * @name f__217E_0733_0007_C692
 * @implements 217E:0733:0007:C692 ()
 *
 * Called From: 217E:0737:0010:A45A
 * Called From: 217E:0737:0007:C692
 */
void f__217E_0733_0007_C692()
{
	emu_stosw();
	emu_addw(&emu_di, 0x3);
	if (--emu_cx != 0) { f__217E_0733_0007_C692(); return; }
	f__217E_0739_0001_6180(); return;
}

/**
 * Decompiled function f__217E_0739_0001_6180()
 *
 * @name f__217E_0739_0001_6180
 * @implements 217E:0739:0001:6180 ()
 *
 * Called From: 217E:0725:0041:701D
 */
void f__217E_0739_0001_6180()
{

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__217E_073A_0003_5D1A()
 *
 * @name f__217E_073A_0003_5D1A
 * @implements 217E:073A:0003:5D1A ()
 *
 * Called From: 217E:0593:0003:1DA9
 * Called From: 217E:05DD:0005:BE02
 */
void f__217E_073A_0003_5D1A()
{
	emu_push(0x073D); f__217E_07A6_000C_1B04();
	f__217E_073D_001B_E516();
}

/**
 * Decompiled function f__217E_073D_001B_E516()
 *
 * @name f__217E_073D_001B_E516
 * @implements 217E:073D:001B:E516 ()
 *
 */
void f__217E_073D_001B_E516()
{
	emu_addw(&emu_get_memory16(emu_ds, 0x00, 0x120), emu_ax);
	emu_push(emu_ds);
	emu_movw(&emu_ax, 0x3405);
	f__217E_0745_0013_6593(); return;
}

/**
 * Decompiled function f__217E_0745_0013_6593()
 *
 * @name f__217E_0745_0013_6593
 * @implements 217E:0745:0013:6593 ()
 *
 * Called From: 217E:074C:001B:E516
 * Called From: 217E:074C:0013:6593
 */
void f__217E_0745_0013_6593()
{
	emu_movw(&emu_ds, emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x1C));
	emu_orw(&emu_ax, emu_ax);
	if (!emu_flags.zf) { f__217E_0745_0013_6593(); return; }
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x1C), emu_es);
	emu_movw(&emu_get_memory16(emu_es, 0x00, 0x1C), emu_ax);
	emu_pop(&emu_ds);

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__217E_0758_0003_5D02()
 *
 * @name f__217E_0758_0003_5D02
 * @implements 217E:0758:0003:5D02 ()
 *
 * Called From: 217E:0695:0018:29F1
 * Called From: 217E:06C7:0014:B057
 */
void f__217E_0758_0003_5D02()
{
	emu_push(0x075B); f__217E_0764_0006_1247();
	f__217E_075B_0009_D235();
}

/**
 * Decompiled function f__217E_075B_0009_D235()
 *
 * @name f__217E_075B_0009_D235
 * @implements 217E:075B:0009:D235 ()
 *
 */
void f__217E_075B_0009_D235()
{
	emu_orw(&emu_bx, emu_bx);
	if (!emu_flags.zf) {
		emu_xchgw(&emu_get_memory16(emu_ss, emu_bx, 0x2), &emu_cx);
	}
	f__217E_0763_0001_6180(); return;
}

/**
 * Decompiled function f__217E_0763_0001_6180()
 *
 * @name f__217E_0763_0001_6180
 * @implements 217E:0763:0001:6180 ()
 *
 * Called From: 217E:075D:0009:D235
 */
void f__217E_0763_0001_6180()
{

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__217E_0764_0006_1247()
 *
 * @name f__217E_0764_0006_1247
 * @implements 217E:0764:0006:1247 ()
 *
 * Called From: 217E:0727:0041:701D
 * Called From: 217E:0727:0020:8DAA
 * Called From: 217E:0758:0003:5D02
 */
void f__217E_0764_0006_1247()
{
	emu_xorw(&emu_bx, emu_bx);
	emu_push(emu_cx);
	emu_push(emu_bp);
	f__217E_076E_0019_CE13(); return;
}

/**
 * Decompiled function f__217E_076A_001D_1254()
 *
 * @name f__217E_076A_001D_1254
 * @implements 217E:076A:001D:1254 ()
 *
 * Called From: 217E:0775:0019:CE13
 * Called From: 217E:077A:0019:CE13
 * Called From: 217E:077A:001D:1254
 * Called From: 217E:0781:001D:1254
 * Called From: 217E:0785:001D:1254
 * Called From: 217E:0785:0019:CE13
 */
void f__217E_076A_001D_1254()
{
	emu_shlw(&emu_cx, 0x1);
	emu_movw(&emu_bp, emu_cx);
	f__217E_076E_0019_CE13(); return;
}

/**
 * Decompiled function f__217E_076E_0019_CE13()
 *
 * @name f__217E_076E_0019_CE13
 * @implements 217E:076E:0019:CE13 ()
 *
 * Called From: 217E:0768:0006:1247
 */
void f__217E_076E_0019_CE13()
{
	emu_movw(&emu_cx, emu_get_memory16(emu_ss, emu_bp,  0x0));
	emu_shrw(&emu_cx, 0x1);
	if (emu_flags.zf) { f__217E_0787_0003_2A36(); return; }
	if (!emu_flags.cf) {
		emu_cmpw(&emu_dx, emu_get_memory16(emu_ss, emu_bp,  0x4));
		if (emu_flags.zf) {
			emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0x4), emu_ax);
			emu_orw(&emu_bx, emu_bx);
			if (emu_flags.zf) {
				emu_movw(&emu_bx, emu_bp);
			}
		}
	}
	f__217E_076A_001D_1254(); return;
}

/**
 * Decompiled function f__217E_0787_0003_2A36()
 *
 * @name f__217E_0787_0003_2A36
 * @implements 217E:0787:0003:2A36 ()
 *
 * Called From: 217E:0773:001D:1254
 * Called From: 217E:0773:0019:CE13
 */
void f__217E_0787_0003_2A36()
{
	emu_pop(&emu_bp);
	emu_pop(&emu_cx);

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__217E_078A_001C_ADD5()
 *
 * @name f__217E_078A_001C_ADD5
 * @implements 217E:078A:001C:ADD5 ()
 *
 * Called From: 217E:0597:0003:1DBC
 * Called From: 217E:0597:0004:BDB9
 * Called From: 217E:05EF:000F:0FFD
 */
void f__217E_078A_001C_ADD5()
{
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x12C));
	emu_orw(&emu_ax, emu_ax);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x079D; emu_last_cs = 0x217E; emu_last_ip = 0x078F; emu_last_length = 0x001C; emu_last_crc = 0xADD5; emu_call(); return; }
	emu_movw(&emu_es, emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_es, 0x00, 0x10));
	emu_subw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x120));
	if (emu_flags.cf) {
		emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x126));
		emu_subw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x120));
		emu_stc();
	}
	f__217E_07A5_0001_6180(); return;
}

/**
 * Decompiled function f__217E_07A5_0001_6180()
 *
 * @name f__217E_07A5_0001_6180
 * @implements 217E:07A5:0001:6180 ()
 *
 * Called From: 217E:079B:001C:ADD5
 */
void f__217E_07A5_0001_6180()
{

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__217E_07A6_000C_1B04()
 *
 * @name f__217E_07A6_000C_1B04
 * @implements 217E:07A6:000C:1B04 ()
 *
 * Called From: 217E:0586:0003:5C07
 * Called From: 217E:0614:0003:DDA3
 * Called From: 217E:0663:0025:E16B
 * Called From: 217E:0663:0010:3DB0
 * Called From: 217E:073A:0003:5D1A
 */
void f__217E_07A6_000C_1B04()
{
	emu_movw(&emu_ax, emu_get_memory16(emu_es, 0x00, 0x8));
	emu_addw(&emu_ax, 0x11);
	emu_movb(&emu_cl, 0x4);
	emu_shrw(&emu_ax, emu_cl);

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__217E_07B2_0018_C2D5()
 *
 * @name f__217E_07B2_0018_C2D5
 * @implements 217E:07B2:0018:C2D5 ()
 *
 * Called From: 217E:0302:001C:2B54
 * Called From: 217E:0564:0008:D2BC
 */
void f__217E_07B2_0018_C2D5()
{
	emu_movb(&emu_cl, 0x4);
	emu_movw(&emu_ax, emu_get_memory16(emu_es, 0x00, 0x8));
	emu_addw(&emu_ax, 0x11);
	emu_shrw(&emu_ax, emu_cl);
	emu_movw(&emu_dx, emu_get_memory16(emu_es, 0x00, 0xA));
	emu_addw(&emu_dx, 0xF);
	emu_shrw(&emu_dx, emu_cl);
	emu_addw(&emu_dx, emu_ax);

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__217E_08F0_0016_CE0F()
 *
 * @name f__217E_08F0_0016_CE0F
 * @implements 217E:08F0:0016:CE0F ()
 *
 * Called From: 1DB6:00D5:0015:4555
 */
void f__217E_08F0_0016_CE0F()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_ds);
	emu_movw(&emu_ds, emu_get_memory16(emu_cs, 0x00, 0xA));
	emu_testb(&emu_get_memory8(emu_ds, 0x00, 0x10), 0x1);
	if (emu_flags.zf) { f__217E_0906_0017_402E(); return; }
	f__217E_0900_0006_CAE4(); return;
}

/**
 * Decompiled function f__217E_0900_0006_CAE4()
 *
 * @name f__217E_0900_0006_CAE4
 * @implements 217E:0900:0006:CAE4 ()
 *
 * Called From: 217E:0924:0049:697A
 */
void f__217E_0900_0006_CAE4()
{
	emu_movw(&emu_ax, 0xFFFF);
	f__217E_09CD_0003_2677(); return;
}

/**
 * Decompiled function f__217E_0906_0017_402E()
 *
 * @name f__217E_0906_0017_402E
 * @implements 217E:0906:0017:402E ()
 *
 * Called From: 217E:08FE:0016:CE0F
 */
void f__217E_0906_0017_402E()
{
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp,  0x6), 0x0);
	if (emu_flags.zf) { f__217E_091D_0005_7B9B(); return; }
	emu_movw(&emu_cx, emu_get_memory16(emu_ss, emu_bp,  0xA));
	if (emu_cx == 0) { f__217E_0900_0006_CAE4(); return; }
	emu_cmpw(&emu_cx, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if ((emu_flags.cf || emu_flags.zf)) { f__217E_0900_0006_CAE4(); return; }
	emu_orb(&emu_get_memory8(emu_ds, 0x00, 0x38), 0x1);
	/* Unresolved jump */ emu_ip = 0x093A; emu_last_cs = 0x217E; emu_last_ip = 0x091B; emu_last_length = 0x0017; emu_last_crc = 0x402E; emu_call();
}

/**
 * Decompiled function f__217E_091D_0005_7B9B()
 *
 * @name f__217E_091D_0005_7B9B
 * @implements 217E:091D:0005:7B9B ()
 *
 * Called From: 217E:090A:0017:402E
 */
void f__217E_091D_0005_7B9B()
{
	emu_push(emu_cs);
	emu_push(0x0922); f__217E_0D90_001F_C453();
	f__217E_0922_0049_697A();
}

/**
 * Decompiled function f__217E_0922_0049_697A()
 *
 * @name f__217E_0922_0049_697A
 * @implements 217E:0922:0049:697A ()
 *
 */
void f__217E_0922_0049_697A()
{
	emu_orw(&emu_ax, emu_ax);
	if (!emu_flags.zf) {
		emu_movw(&emu_bx, emu_get_memory16(emu_ss, emu_bp,  0x8));
		emu_cmpw(&emu_bx, emu_ax);
		if (emu_flags.cf) {
			emu_subw(&emu_ax, emu_bx);
			emu_movw(&emu_cx, emu_get_memory16(emu_ss, emu_bp,  0xA));
			if (emu_cx == 0) { /* Unresolved jump */ emu_ip = 0x0938; emu_last_cs = 0x217E; emu_last_ip = 0x0932; emu_last_length = 0x0049; emu_last_crc = 0x697A; emu_call(); return; }
			emu_cmpw(&emu_cx, emu_ax);
			if (emu_flags.cf) { /* Unresolved jump */ emu_ip = 0x093A; emu_last_cs = 0x217E; emu_last_ip = 0x0936; emu_last_length = 0x0049; emu_last_crc = 0x697A; emu_call(); return; }
			emu_movw(&emu_cx, emu_ax);
			emu_movw(&emu_es, emu_get_memory16(emu_cs, 0x00, 0xC));
			emu_movw(&emu_bx, 0x4000);
			emu_movw(&emu_ax, emu_get_memory16(emu_es, 0x00, 0x661E));
			emu_movw(&emu_dx, emu_get_memory16(emu_es, 0x00, 0x6620));
			emu_addw(&emu_ax, 0x3FFF);
			emu_adcw(&emu_dx, 0x0);
			emu_divw(&emu_ax, emu_bx);
			emu_cmpw(&emu_cx, emu_ax);
			if ((emu_flags.cf || emu_flags.zf)) { /* Unresolved jump */ emu_ip = 0x0959; emu_last_cs = 0x217E; emu_last_ip = 0x0955; emu_last_length = 0x0049; emu_last_crc = 0x697A; emu_call(); return; }
			emu_movw(&emu_cx, emu_ax);
			emu_cmpw(&emu_cx, 0x4);
			if (!emu_flags.cf) { /* Unresolved jump */ emu_ip = 0x096B; emu_last_cs = 0x217E; emu_last_ip = 0x095C; emu_last_length = 0x0049; emu_last_crc = 0x697A; emu_call(); return; }
			emu_movw(&emu_ax, 0x400);
			emu_mulw(&emu_ax, emu_cx);
			emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x11A));
			if (!emu_flags.cf) { /* Unresolved jump */ emu_ip = 0x096B; emu_last_cs = 0x217E; emu_last_ip = 0x0967; emu_last_length = 0x0049; emu_last_crc = 0x697A; emu_call(); return; }
		}
	}
	f__217E_0900_0006_CAE4(); return;
}

/**
 * Decompiled function f__217E_09CD_0003_2677()
 *
 * @name f__217E_09CD_0003_2677
 * @implements 217E:09CD:0003:2677 ()
 *
 * Called From: 217E:0903:0006:CAE4
 */
void f__217E_09CD_0003_2677()
{
	emu_pop(&emu_ds);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__217E_0ABA_001A_9AA0()
 *
 * @name f__217E_0ABA_001A_9AA0
 * @implements 217E:0ABA:001A:9AA0 ()
 *
 * Called From: 1DB6:00E9:0014:2E19
 */
void f__217E_0ABA_001A_9AA0()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subw(&emu_sp, 0x2);
	emu_push(emu_ds);
	emu_movw(&emu_ds, emu_get_memory16(emu_cs, 0x00, 0xA));
	emu_push(emu_si);
	emu_push(emu_di);
	emu_testb(&emu_get_memory8(emu_ds, 0x00, 0x10), 0x2);
	if (emu_flags.zf) { f__217E_0AD4_0009_FFA2(); return; }
	emu_xorw(&emu_ax, emu_ax);
	f__217E_0BCD_0007_F178(); return;
}

/**
 * Decompiled function f__217E_0AD4_0009_FFA2()
 *
 * @name f__217E_0AD4_0009_FFA2
 * @implements 217E:0AD4:0009:FFA2 ()
 *
 * Called From: 217E:0ACD:001A:9AA0
 */
void f__217E_0AD4_0009_FFA2()
{
	emu_movb(&emu_get_memory8(emu_ss, emu_bp, -0x2), 0x0);
	emu_push(emu_cs);
	emu_push(0x0ADD); f__217E_0ED2_001F_0CC9();
	f__217E_0ADD_000A_FD41();
}

/**
 * Decompiled function f__217E_0ADD_000A_FD41()
 *
 * @name f__217E_0ADD_000A_FD41
 * @implements 217E:0ADD:000A:FD41 ()
 *
 */
void f__217E_0ADD_000A_FD41()
{
	emu_orw(&emu_ax, emu_dx);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0AE7; emu_last_cs = 0x217E; emu_last_ip = 0x0ADF; emu_last_length = 0x000A; emu_last_crc = 0xFD41; emu_call(); return; }
	emu_movw(&emu_ax, 0xFFFF);
	f__217E_0BCD_0007_F178(); return;
}

/**
 * Decompiled function f__217E_0BCD_0007_F178()
 *
 * @name f__217E_0BCD_0007_F178
 * @implements 217E:0BCD:0007:F178 ()
 *
 * Called From: 217E:0AE4:000A:FD41
 */
void f__217E_0BCD_0007_F178()
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
 * Decompiled function f__217E_0D2C_000B_83A7()
 *
 * @name f__217E_0D2C_000B_83A7
 * @implements 217E:0D2C:000B:83A7 ()
 *
 * Called From: 01F7:0222:0015:AC4F
 */
void f__217E_0D2C_000B_83A7()
{
	emu_push(emu_ds);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_ax, 0x33F4);
	emu_movw(&emu_ds, emu_ax);
	emu_push(0x0D37); f__217E_02A0_002C_0B5F();
	f__217E_0D37_001C_2DB2();
}

/**
 * Decompiled function f__217E_0D37_001C_2DB2()
 *
 * @name f__217E_0D37_001C_2DB2
 * @implements 217E:0D37:001C:2DB2 ()
 *
 */
void f__217E_0D37_001C_2DB2()
{
	emu_movw(&emu_bx, emu_get_memory16(emu_ds, 0x00, 0x11A));
	emu_movw(&emu_ax, 0x353F);
	emu_movw(&emu_ds, emu_ax);
	emu_movw(&emu_ax, 0x353F);
	emu_movw(&emu_es, emu_ax);
	emu_cmpw(&emu_bx, emu_get_memory16(emu_es, 0x00, 0x6622));
	if (!emu_flags.cf) { f__217E_0D53_0010_E0EA(); return; }
	emu_movw(&emu_bx, emu_get_memory16(emu_es, 0x00, 0x6622));
	/* Unresolved jump */ emu_ip = 0x0D55; emu_last_cs = 0x217E; emu_last_ip = 0x0D51; emu_last_length = 0x001C; emu_last_crc = 0x2DB2; emu_call();
}

/**
 * Decompiled function f__217E_0D53_0010_E0EA()
 *
 * @name f__217E_0D53_0010_E0EA
 * @implements 217E:0D53:0010:E0EA ()
 *
 * Called From: 217E:0D4A:001C:2DB2
 */
void f__217E_0D53_0010_E0EA()
{
	emu_shlw(&emu_bx, 0x1);
	emu_incw(&emu_bx);
	emu_push(emu_bx);
	emu_movw(&emu_ax, 0x10);
	emu_mulw(&emu_ax, emu_bx);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0D63); emu_cs = 0x01F7; f__01F7_1855_0053_AC2D();
	f__217E_0D63_0017_4EFA();
}

/**
 * Decompiled function f__217E_0D63_0017_4EFA()
 *
 * @name f__217E_0D63_0017_4EFA
 * @implements 217E:0D63:0017:4EFA ()
 *
 */
void f__217E_0D63_0017_4EFA()
{
	emu_pop(&emu_bx);
	emu_pop(&emu_bx);
	emu_pop(&emu_bx);
	emu_movw(&emu_cx, emu_ax);
	emu_orw(&emu_cx, emu_dx);
	if (emu_cx == 0) { f__217E_0D82_0005_67AA(); return; }
	emu_incw(&emu_dx);
	emu_addw(&emu_bx, emu_dx);
	emu_push(emu_dx);
	emu_push(emu_bx);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x0D7A); f__217E_0015_0019_BAFF();
	f__217E_0D7A_0008_80E3();
}

/**
 * Decompiled function f__217E_0D7A_0008_80E3()
 *
 * @name f__217E_0D7A_0008_80E3
 * @implements 217E:0D7A:0008:80E3 ()
 *
 */
void f__217E_0D7A_0008_80E3()
{
	emu_orw(&emu_ax, emu_ax);
	if (!emu_flags.zf) { f__217E_0D82_0005_67AA(); return; }
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_pop(&emu_ds);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__217E_0D82_0005_67AA()
 *
 * @name f__217E_0D82_0005_67AA
 * @implements 217E:0D82:0005:67AA ()
 *
 * Called From: 217E:0D7C:0008:80E3
 */
void f__217E_0D82_0005_67AA()
{
	emu_cs = 0x01F7; f__01F7_027A_000E_2C9D(); return;
}

/**
 * Decompiled function f__217E_0D90_001F_C453()
 *
 * @name f__217E_0D90_001F_C453
 * @implements 217E:0D90:001F:C453 ()
 *
 * Called From: 217E:091F:0005:7B9B
 */
void f__217E_0D90_001F_C453()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subw(&emu_sp, 0x102);
	emu_push(emu_ds);
	emu_movw(&emu_ds, emu_get_memory16(emu_cs, 0x00, 0xA));
	emu_push(emu_si);
	emu_push(emu_di);
	emu_testb(&emu_get_memory8(emu_ds, 0x00, 0x38), 0x1);
	if (emu_flags.zf) { f__217E_0DB6_000B_9E51(); return; }
	emu_testb(&emu_get_memory8(emu_ds, 0x00, 0x38), 0x2);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0DB0; emu_last_cs = 0x217E; emu_last_ip = 0x0DAB; emu_last_length = 0x001F; emu_last_crc = 0xC453; emu_call(); return; }
	/* Unresolved jump */ emu_ip = 0x0E1E; emu_last_cs = 0x217E; emu_last_ip = 0x0DAD; emu_last_length = 0x001F; emu_last_crc = 0xC453; emu_call();
}

/**
 * Decompiled function f__217E_0DB6_000B_9E51()
 *
 * @name f__217E_0DB6_000B_9E51
 * @implements 217E:0DB6:000B:9E51 ()
 *
 * Called From: 217E:0DA4:001F:C453
 */
void f__217E_0DB6_000B_9E51()
{
	emu_push(emu_ds);
	emu_push(emu_cs);
	emu_pop(&emu_ds);
	emu_movw(&emu_dx, 0xD87);
	emu_movw(&emu_ax, 0x3D00);
	emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = 0x0070; emu_push(0x0DC1); Interrupt_DOS();
	f__217E_0DC1_000A_8A92();
}

/**
 * Decompiled function f__217E_0DC1_000A_8A92()
 *
 * @name f__217E_0DC1_000A_8A92
 * @implements 217E:0DC1:000A:8A92 ()
 *
 */
void f__217E_0DC1_000A_8A92()
{
	emu_pop(&emu_ds);
	emu_movw(&emu_bx, emu_ax);
	if (emu_flags.cf) { f__217E_0DE8_0002_E53A(); return; }
	emu_movw(&emu_ax, 0x4400);
	/* Unresolved jump */ emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = emu_get_memory16(0, 0, 0x21 * 4 + 2); emu_push(0x0DCB); emu_ip = emu_get_memory16(0, 0, 0x21 * 4 + 0); emu_last_cs = 0x217E; emu_last_ip = 0x0DC9; emu_last_length = 0x000A; emu_last_crc = 0x8A92; emu_call();
	/* Unresolved jump */ emu_ip = 0x0DCB; emu_last_cs = 0x217E; emu_last_ip = 0x0DCB; emu_last_length = 0x000A; emu_last_crc = 0x8A92; emu_call();
}

/**
 * Decompiled function f__217E_0DE8_0002_E53A()
 *
 * @name f__217E_0DE8_0002_E53A
 * @implements 217E:0DE8:0002:E53A ()
 *
 * Called From: 217E:0DC4:000A:8A92
 */
void f__217E_0DE8_0002_E53A()
{
	f__217E_0E34_000E_33D2(); return;
}

/**
 * Decompiled function f__217E_0E34_000E_33D2()
 *
 * @name f__217E_0E34_000E_33D2
 * @implements 217E:0E34:000E:33D2 ()
 *
 * Called From: 217E:0DE8:0002:E53A
 */
void f__217E_0E34_000E_33D2()
{
	emu_xorw(&emu_ax, emu_ax);
	emu_movb(&emu_get_memory8(emu_ds, 0x00, 0x38), 0x0);
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
 * Decompiled function f__217E_0ED2_001F_0CC9()
 *
 * @name f__217E_0ED2_001F_0CC9
 * @implements 217E:0ED2:001F:0CC9 ()
 *
 * Called From: 217E:0ADA:0009:FFA2
 */
void f__217E_0ED2_001F_0CC9()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subw(&emu_sp, 0x22);
	emu_push(emu_ds);
	emu_movw(&emu_ds, emu_get_memory16(emu_cs, 0x00, 0xA));
	emu_push(emu_si);
	emu_push(emu_di);
	emu_testb(&emu_get_memory8(emu_ds, 0x00, 0x42), 0x1);
	if (emu_flags.zf) { f__217E_0EF1_0027_166D(); return; }
	emu_testb(&emu_get_memory8(emu_ds, 0x00, 0x42), 0x2);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0EF6; emu_last_cs = 0x217E; emu_last_ip = 0x0EEC; emu_last_length = 0x001F; emu_last_crc = 0x0CC9; emu_call(); return; }
	/* Unresolved jump */ emu_ip = 0x1067; emu_last_cs = 0x217E; emu_last_ip = 0x0EEE; emu_last_length = 0x001F; emu_last_crc = 0x0CC9; emu_call();
}

/**
 * Decompiled function f__217E_0EF1_0027_166D()
 *
 * @name f__217E_0EF1_0027_166D
 * @implements 217E:0EF1:0027:166D ()
 *
 * Called From: 217E:0EE5:001F:0CC9
 */
void f__217E_0EF1_0027_166D()
{
	emu_movb(&emu_get_memory8(emu_ds, 0x00, 0x42), 0x1);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x3A), 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x3C), 0x10);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x3E), 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x40), 0x10);
	emu_push(emu_sp);
	emu_pop(&emu_ax);
	emu_cmpw(&emu_ax, emu_sp);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0F1C; emu_last_cs = 0x217E; emu_last_ip = 0x0F12; emu_last_length = 0x0027; emu_last_crc = 0x166D; emu_call(); return; }
	emu_movb(&emu_ah, 0x30);
	emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = 0x0070; emu_push(0x0F18); Interrupt_DOS();
	f__217E_0F18_0007_465E();
}

/**
 * Decompiled function f__217E_0F18_0007_465E()
 *
 * @name f__217E_0F18_0007_465E
 * @implements 217E:0F18:0007:465E ()
 *
 */
void f__217E_0F18_0007_465E()
{
	emu_cmpb(&emu_al, 0xA);
	if (emu_flags.cf) { f__217E_0F1F_0023_307C(); return; }
	f__217E_1078_000A_64D8(); return;
}

/**
 * Decompiled function f__217E_0F1F_0023_307C()
 *
 * @name f__217E_0F1F_0023_307C
 * @implements 217E:0F1F:0023:307C ()
 *
 * Called From: 217E:0F1A:0007:465E
 */
void f__217E_0F1F_0023_307C()
{
	emu_xchgb(&emu_ah, &emu_al);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x22), emu_ax);
	emu_movw(&emu_ax, 0xF000);
	emu_movw(&emu_es, emu_ax);
	emu_movb(&emu_al, emu_get_memory8(emu_es, 0x00, 0xFFFE));
	emu_cmpb(&emu_al, 0xFC);
	if (!(emu_flags.cf || emu_flags.zf)) { /* Unresolved jump */ emu_ip = 0x0F1C; emu_last_cs = 0x217E; emu_last_ip = 0x0F2F; emu_last_length = 0x0023; emu_last_crc = 0x307C; emu_call(); return; }
	emu_cmpb(&emu_al, 0xFB);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0F1C; emu_last_cs = 0x217E; emu_last_ip = 0x0F33; emu_last_length = 0x0023; emu_last_crc = 0x307C; emu_call(); return; }
	emu_cmpb(&emu_al, 0xF9);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0F1C; emu_last_cs = 0x217E; emu_last_ip = 0x0F37; emu_last_length = 0x0023; emu_last_crc = 0x307C; emu_call(); return; }
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x22), 0x31);
	if (!emu_flags.cf) { f__217E_0F42_0005_5A13(); return; }
	f__217E_0F3F_0003_DD3F(); return;
}

/**
 * Decompiled function f__217E_0F3F_0003_DD3F()
 *
 * @name f__217E_0F3F_0003_DD3F
 * @implements 217E:0F3F:0003:DD3F ()
 *
 * Called From: 217E:0F49:0009:0AE5
 */
void f__217E_0F3F_0003_DD3F()
{
	f__217E_0FC1_0004_1BB8(); return;
}

/**
 * Decompiled function f__217E_0F42_0005_5A13()
 *
 * @name f__217E_0F42_0005_5A13
 * @implements 217E:0F42:0005:5A13 ()
 *
 * Called From: 217E:0F3D:0023:307C
 */
void f__217E_0F42_0005_5A13()
{
	emu_movw(&emu_ax, 0x4300);
	emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = 0x0070; emu_push(0x0F47); Interrupt_DOS_Multiplex();
	f__217E_0F47_0009_0AE5();
}

/**
 * Decompiled function f__217E_0F47_0009_0AE5()
 *
 * @name f__217E_0F47_0009_0AE5
 * @implements 217E:0F47:0009:0AE5 ()
 *
 */
void f__217E_0F47_0009_0AE5()
{
	emu_cmpb(&emu_al, 0x80);
	if (!emu_flags.zf) { f__217E_0F3F_0003_DD3F(); return; }
	emu_movw(&emu_ax, 0x4310);
	/* Unresolved jump */ emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = emu_get_memory16(0, 0, 0x2F * 4 + 2); emu_push(0x0F50); emu_ip = emu_get_memory16(0, 0, 0x2F * 4 + 0); emu_last_cs = 0x217E; emu_last_ip = 0x0F4E; emu_last_length = 0x0009; emu_last_crc = 0x0AE5; emu_call();
	/* Unresolved jump */ emu_ip = 0x0F50; emu_last_cs = 0x217E; emu_last_ip = 0x0F50; emu_last_length = 0x0009; emu_last_crc = 0x0AE5; emu_call();
}

/**
 * Decompiled function f__217E_0FC1_0004_1BB8()
 *
 * @name f__217E_0FC1_0004_1BB8
 * @implements 217E:0FC1:0004:1BB8 ()
 *
 * Called From: 217E:0F3F:0003:DD3F
 */
void f__217E_0FC1_0004_1BB8()
{
	emu_movb(&emu_ah, 0x88);
	emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = 0x0070; emu_push(0x0FC5); Interrupt_System();
	f__217E_0FC5_0007_2EB6();
}

/**
 * Decompiled function f__217E_0FC5_0007_2EB6()
 *
 * @name f__217E_0FC5_0007_2EB6
 * @implements 217E:0FC5:0007:2EB6 ()
 *
 */
void f__217E_0FC5_0007_2EB6()
{
	emu_orw(&emu_ax, emu_ax);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0FCC; emu_last_cs = 0x217E; emu_last_ip = 0x0FC7; emu_last_length = 0x0007; emu_last_crc = 0x2EB6; emu_call(); return; }
	f__217E_1078_000A_64D8(); return;
}

/**
 * Decompiled function f__217E_1078_000A_64D8()
 *
 * @name f__217E_1078_000A_64D8
 * @implements 217E:1078:000A:64D8 ()
 *
 * Called From: 217E:0FC9:0007:2EB6
 */
void f__217E_1078_000A_64D8()
{
	emu_xorw(&emu_ax, emu_ax);
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
 * Decompiled function f__217E_125B_0001_6180()
 *
 * @name f__217E_125B_0001_6180
 * @implements 217E:125B:0001:6180 ()
 *
 * Called From: 217E:0630:000D:13D0
 */
void f__217E_125B_0001_6180()
{

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__217E_125C_0001_6580()
 *
 * @name f__217E_125C_0001_6580
 * @implements 217E:125C:0001:6580 ()
 *
 * Called From: 217E:01AE:0005:F29E
 * Called From: 217E:01B3:0005:729F
 */
void f__217E_125C_0001_6580()
{

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

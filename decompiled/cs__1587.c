/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__1587_0008_0012_30AE()
 *
 * @name f__1587_0008_0012_30AE
 * @implements 1587:0008:0012:30AE ()
 *
 * Called From: B4B8:0D62:0025:9D20
 */
void f__1587_0008_0012_30AE()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x12);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_xorw(&emu_si, emu_si);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_cs); emu_push(0x001A); emu_cs = 0x252E; f__252E_0001_0018_08B3();
	f__1587_001A_000F_6FDC();
}

/**
 * Decompiled function f__1587_001A_000F_6FDC()
 *
 * @name f__1587_001A_000F_6FDC
 * @implements 1587:001A:000F:6FDC ()
 *
 * Called From: 1587:001A:0012:30AE
 */
void f__1587_001A_000F_6FDC()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_cs); emu_push(0x0029); emu_cs = 0x252E; f__252E_0001_0018_08B3();
	f__1587_0029_0012_912E();
}

/**
 * Decompiled function f__1587_0029_0012_912E()
 *
 * @name f__1587_0029_0012_912E
 * @implements 1587:0029:0012:912E ()
 *
 * Called From: 1587:0029:000F:6FDC
 */
void f__1587_0029_0012_912E()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x003B); emu_cs = 0x34B1; ovl__34B1(0);
	f__1587_003B_001E_34C3();
}

/**
 * Decompiled function f__1587_003B_001E_34C3()
 *
 * @name f__1587_003B_001E_34C3
 * @implements 1587:003B:001E:34C3 ()
 *
 * Called From: 1587:003B:0012:912E
 */
void f__1587_003B_001E_34C3()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_di, emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_movw(&emu_dx.x, 0x4);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0x12);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x464E);
	emu_movw(&emu_dx.x, 0x4953);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x0059); emu_cs = 0x34B1; ovl__34B1(1);
	f__1587_0059_001D_BB2F();
}

/**
 * Decompiled function f__1587_0059_001D_BB2F()
 *
 * @name f__1587_0059_001D_BB2F
 * @implements 1587:0059:001D:BB2F ()
 *
 * Called From: 1587:0059:001E:34C3
 */
void f__1587_0059_001D_BB2F()
{
	emu_addws(&emu_sp, 0xE);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ss, emu_bp, -0x11));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_push(emu_ax.x);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ss, emu_bp, -0x12));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x353F);
	emu_movw(&emu_es, emu_ax.x);

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_es, 0x00,  0x66DC);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_es, 0x00,  0x66DE);
	emu_push(0x0076);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A61158: f__22A6_1158_0069_1890(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x1587; emu_last_ip = 0x0071; emu_last_length = 0x001D; emu_last_crc = 0xBB2F;
			emu_call();
			return;
	}
	f__1587_0076_0030_84AA();
}

/**
 * Decompiled function f__1587_0076_0030_84AA()
 *
 * @name f__1587_0076_0030_84AA
 * @implements 1587:0076:0030:84AA ()
 *
 * Called From: 1587:0076:001D:BB2F
 */
void f__1587_0076_0030_84AA()
{
	emu_addws(&emu_sp, 0x8);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ss, emu_bp, -0x11));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_push(emu_ax.x);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ss, emu_bp, -0x12));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_movb(&emu_cx.l, 0x3);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_movw(&emu_dx.x, emu_ax.x);
	emu_pop(&emu_ax.x);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ss, emu_bp, -0xF));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_movw(&emu_dx.x, emu_ax.x);
	emu_pop(&emu_ax.x);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), emu_ax.x);
	emu_movw(&emu_ax.x, 0x5445);
	emu_movw(&emu_dx.x, 0x5353);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x00A6); emu_cs = 0x34B1; ovl__34B1(3);
	f__1587_00A6_0020_1EA1();
}

/**
 * Decompiled function f__1587_00A6_0020_1EA1()
 *
 * @name f__1587_00A6_0020_1EA1
 * @implements 1587:00A6:0020:1EA1 ()
 *
 * Called From: 1587:00A6:0030:84AA
 */
void f__1587_00A6_0020_1EA1()
{
	emu_addws(&emu_sp, 0x6);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, emu_bx.x,  0x6CD5));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, emu_bx.x,  0x6CD3));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (!emu_flags.cf) { f__1587_00C6_000A_39D1(); return; }
	/* Unresolved jump */ emu_ip = 0x035B; emu_last_cs = 0x1587; emu_last_ip = 0x00C3; emu_last_length = 0x0020; emu_last_crc = 0x1EA1; emu_call();
}

/**
 * Decompiled function f__1587_00C6_000A_39D1()
 *
 * @name f__1587_00C6_000A_39D1
 * @implements 1587:00C6:000A:39D1 ()
 *
 * Called From: 1587:00C1:0020:1EA1
 */
void f__1587_00C6_000A_39D1()
{
	if (!(emu_flags.cf || emu_flags.zf)) { /* Unresolved jump */ emu_ip = 0x00D0; emu_last_cs = 0x1587; emu_last_ip = 0x00C6; emu_last_length = 0x000A; emu_last_crc = 0x39D1; emu_call(); return; }
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	if (!(emu_flags.cf || emu_flags.zf)) { f__1587_00D0_0032_21EE(); return; }
	/* Unresolved jump */ emu_ip = 0x035B; emu_last_cs = 0x1587; emu_last_ip = 0x00CD; emu_last_length = 0x000A; emu_last_crc = 0x39D1; emu_call();
}

/**
 * Decompiled function f__1587_00D0_0032_21EE()
 *
 * @name f__1587_00D0_0032_21EE
 * @implements 1587:00D0:0032:21EE ()
 *
 * Called From: 1587:00CB:000A:39D1
 */
void f__1587_00D0_0032_21EE()
{
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_shlw(&emu_bx.x, 0x1);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, emu_bx.x,  0x6C93));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), 0x0);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, emu_bx.x,  0x6CD3));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_addws(&emu_dx.x, 0x8);
	emu_subw(&emu_ax.x, emu_dx.x);
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_cs); emu_push(0x0102); emu_cs = 0x2B0E; f__2B0E_00D0_0022_EC76();
	f__1587_0102_002D_9847();
}

/**
 * Decompiled function f__1587_0102_002D_9847()
 *
 * @name f__1587_0102_002D_9847
 * @implements 1587:0102:002D:9847 ()
 *
 * Called From: 1587:0102:0032:21EE
 */
void f__1587_0102_002D_9847()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), 0x0);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_movw(&emu_ax.x, 0x5445);
	emu_movw(&emu_dx.x, 0x5353);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x012F); emu_cs = 0x34B1; ovl__34B1(1);
	f__1587_012F_001A_412B();
}

/**
 * Decompiled function f__1587_012F_001A_412B()
 *
 * @name f__1587_012F_001A_412B
 * @implements 1587:012F:001A:412B ()
 *
 * Called From: 1587:012F:002D:9847
 */
void f__1587_012F_001A_412B()
{
	emu_addws(&emu_sp, 0xE);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_cs); emu_push(0x0149); emu_cs = 0x253D; f__253D_023A_0038_2BAE();
	f__1587_0149_000A_DCE4();
}

/**
 * Decompiled function f__1587_0149_000A_DCE4()
 *
 * @name f__1587_0149_000A_DCE4
 * @implements 1587:0149:000A:DCE4 ()
 *
 * Called From: 1587:0149:001A:412B
 */
void f__1587_0149_000A_DCE4()
{
	emu_addws(&emu_sp, 0x8);
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0153); emu_cs = 0x01F7; f__01F7_04E7_0005_D2F2();
	f__1587_0153_0010_4D09();
}

/**
 * Decompiled function f__1587_0153_0010_4D09()
 *
 * @name f__1587_0153_0010_4D09
 * @implements 1587:0153:0010:4D09 ()
 *
 * Called From: 1587:0153:000A:DCE4
 */
void f__1587_0153_0010_4D09()
{
	emu_movw(&emu_si, emu_ax.x);
	emu_movw(&emu_bx.x, emu_si);
	emu_xorw(&emu_cx.x, emu_cx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_cs); emu_push(0x0163); emu_cs = 0x01F7; f__01F7_03B2_0017_7CBE();
	f__1587_0163_0024_1952();
}

/**
 * Decompiled function f__1587_0163_0024_1952()
 *
 * @name f__1587_0163_0024_1952
 * @implements 1587:0163:0024:1952 ()
 *
 * Called From: 1587:0163:0010:4D09
 */
void f__1587_0163_0024_1952()
{
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x6116), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x6114), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x611E));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x6120));
	if (emu_flags.zf) { f__1587_018F_001D_E85C(); return; }
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x6122), 0x0);
	if (!emu_flags.zf) { f__1587_018F_001D_E85C(); return; }
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6120));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x611E));
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x0187); emu_cs = 0x23E1; emu_ip = 0x01C2; emu_last_cs = 0x1587; emu_last_ip = 0x0182; emu_last_length = 0x0024; emu_last_crc = 0x1952; emu_call();
	/* Unresolved jump */ emu_ip = 0x0187; emu_last_cs = 0x1587; emu_last_ip = 0x0187; emu_last_length = 0x0024; emu_last_crc = 0x1952; emu_call();
}

/**
 * Decompiled function f__1587_018F_001D_E85C()
 *
 * @name f__1587_018F_001D_E85C
 * @implements 1587:018F:001D:E85C ()
 *
 * Called From: 1587:0171:0024:1952
 * Called From: 1587:0178:0024:1952
 */
void f__1587_018F_001D_E85C()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x6118));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x611A));
	if (emu_flags.zf) { f__1587_01B4_0020_400C(); return; }
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x611C), 0x0);
	if (!emu_flags.zf) { f__1587_01B4_0020_400C(); return; }
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x611A));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6118));
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x01AC); emu_cs = 0x23E1; emu_ip = 0x01C2; emu_last_cs = 0x1587; emu_last_ip = 0x01A7; emu_last_length = 0x001D; emu_last_crc = 0xE85C; emu_call();
	/* Unresolved jump */ emu_ip = 0x01AC; emu_last_cs = 0x1587; emu_last_ip = 0x01AC; emu_last_length = 0x001D; emu_last_crc = 0xE85C; emu_call();
}

/**
 * Decompiled function f__1587_01B4_0020_400C()
 *
 * @name f__1587_01B4_0020_400C
 * @implements 1587:01B4:0020:400C ()
 *
 * Called From: 1587:0196:001D:E85C
 * Called From: 1587:019D:001D:E85C
 */
void f__1587_01B4_0020_400C()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, emu_bx.x,  0x6CD5));
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ds, emu_bx.x,  0x6CD3));
	emu_subw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00,  0x6114));
	emu_sbbw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x6116));
	emu_cmpw(&emu_ax.x, emu_dx.x);
	if ((emu_flags.cf || emu_flags.zf)) { f__1587_01D4_0009_A5C5(); return; }
	/* Unresolved jump */ emu_ip = 0x02C2; emu_last_cs = 0x1587; emu_last_ip = 0x01D1; emu_last_length = 0x0020; emu_last_crc = 0x400C; emu_call();
}

/**
 * Decompiled function f__1587_01D4_0009_A5C5()
 *
 * @name f__1587_01D4_0009_A5C5
 * @implements 1587:01D4:0009:A5C5 ()
 *
 * Called From: 1587:01CF:0020:400C
 */
void f__1587_01D4_0009_A5C5()
{
	if (emu_flags.cf) { /* Unresolved jump */ emu_ip = 0x01DD; emu_last_cs = 0x1587; emu_last_ip = 0x01D4; emu_last_length = 0x0009; emu_last_crc = 0xA5C5; emu_call(); return; }
	emu_cmpw(&emu_si, emu_bx.x);
	if (emu_flags.cf) { f__1587_01DD_0022_74BF(); return; }
	/* Unresolved jump */ emu_ip = 0x02C2; emu_last_cs = 0x1587; emu_last_ip = 0x01DA; emu_last_length = 0x0009; emu_last_crc = 0xA5C5; emu_call();
}

/**
 * Decompiled function f__1587_01DD_0022_74BF()
 *
 * @name f__1587_01DD_0022_74BF
 * @implements 1587:01DD:0022:74BF ()
 *
 * Called From: 1587:01D8:0009:A5C5
 */
void f__1587_01DD_0022_74BF()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_addw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x6114));
	emu_adcw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x6116));
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x6120), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x611E), emu_dx.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6120));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x611E));
	emu_push(emu_cs); emu_push(0x01FF); emu_cs = 0x2B0E; f__2B0E_00D0_0022_EC76();
	f__1587_01FF_002F_599A();
}

/**
 * Decompiled function f__1587_01FF_002F_599A()
 *
 * @name f__1587_01FF_002F_599A
 * @implements 1587:01FF:002F:599A ()
 *
 * Called From: 1587:01FF:0022:74BF
 */
void f__1587_01FF_002F_599A()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x6120), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x611E), emu_ax.x);
	emu_movw(&emu_ax.x, emu_si);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_addw(&emu_ax.x, 0xF);
	emu_adcws(&emu_dx.x, 0x0);
	emu_andw(&emu_ax.x, 0xFFF0);
	emu_andws(&emu_dx.x, 0xFF);
	emu_addw(&emu_get_memory16(emu_ds, 0x00,  0x6114), emu_ax.x);
	emu_adcw(&emu_get_memory16(emu_ds, 0x00,  0x6116), emu_dx.x);
	emu_movw(&emu_ax.x, 0x4C41);
	emu_movw(&emu_dx.x, 0x5052);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x022E); emu_cs = 0x34B1; ovl__34B1(3);
	f__1587_022E_004E_CAB0();
}

/**
 * Decompiled function f__1587_022E_004E_CAB0()
 *
 * @name f__1587_022E_004E_CAB0
 * @implements 1587:022E:004E:CAB0 ()
 *
 * Called From: 1587:022E:002F:599A
 */
void f__1587_022E_004E_CAB0()
{
	emu_addws(&emu_sp, 0x6);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, emu_bx.x,  0x6CD5));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, emu_bx.x,  0x6CD3));
	emu_subw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x6114));
	emu_sbbw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x6116));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_flags.cf) { /* Unresolved jump */ emu_ip = 0x02A1; emu_last_cs = 0x1587; emu_last_ip = 0x0251; emu_last_length = 0x004E; emu_last_crc = 0xCAB0; emu_call(); return; }
	if (!(emu_flags.cf || emu_flags.zf)) { /* Unresolved jump */ emu_ip = 0x025A; emu_last_cs = 0x1587; emu_last_ip = 0x0253; emu_last_length = 0x004E; emu_last_crc = 0xCAB0; emu_call(); return; }
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	if ((emu_flags.cf || emu_flags.zf)) { /* Unresolved jump */ emu_ip = 0x02A1; emu_last_cs = 0x1587; emu_last_ip = 0x0258; emu_last_length = 0x004E; emu_last_crc = 0xCAB0; emu_call(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_addw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x6114));
	emu_adcw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x6116));
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x611A), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x6118), emu_dx.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x611A));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6118));
	emu_push(emu_cs); emu_push(0x027C); emu_cs = 0x2B0E; f__2B0E_00D0_0022_EC76();
	f__1587_027C_0025_B913();
}

/**
 * Decompiled function f__1587_027C_0025_B913()
 *
 * @name f__1587_027C_0025_B913
 * @implements 1587:027C:0025:B913 ()
 *
 * Called From: 1587:027C:004E:CAB0
 */
void f__1587_027C_0025_B913()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x611A), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x6118), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x611A));
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x611A), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x6118), 0x0);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_addw(&emu_get_memory16(emu_ds, 0x00,  0x6114), emu_dx.x);
	emu_adcw(&emu_get_memory16(emu_ds, 0x00,  0x6116), emu_ax.x);
	f__1587_02C0_0002_DE3A(); return;
}

/**
 * Decompiled function f__1587_02C0_0002_DE3A()
 *
 * @name f__1587_02C0_0002_DE3A
 * @implements 1587:02C0:0002:DE3A ()
 *
 * Called From: 1587:029F:0025:B913
 */
void f__1587_02C0_0002_DE3A()
{
	f__1587_02FE_001A_F478(); return;
}

/**
 * Decompiled function f__1587_02FE_001A_F478()
 *
 * @name f__1587_02FE_001A_F478
 * @implements 1587:02FE:001A:F478 ()
 *
 * Called From: 1587:02C0:0002:DE3A
 */
void f__1587_02FE_001A_F478()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_si);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6120));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x611E));
	emu_movw(&emu_ax.x, 0x4C42);
	emu_movw(&emu_dx.x, 0x5452);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x0318); emu_cs = 0x34B1; ovl__34B1(1);
	f__1587_0318_001F_629B();
}

/**
 * Decompiled function f__1587_0318_001F_629B()
 *
 * @name f__1587_0318_001F_629B
 * @implements 1587:0318:001F:629B ()
 *
 * Called From: 1587:0318:001A:F478
 */
void f__1587_0318_001F_629B()
{
	emu_addws(&emu_sp, 0xE);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x611A));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6118));
	emu_movw(&emu_ax.x, 0x4C41);
	emu_movw(&emu_dx.x, 0x5052);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x0337); emu_cs = 0x34B1; ovl__34B1(1);
	f__1587_0337_0021_C368();
}

/**
 * Decompiled function f__1587_0337_0021_C368()
 *
 * @name f__1587_0337_0021_C368
 * @implements 1587:0337:0021:C368 ()
 *
 * Called From: 1587:0337:001F:629B
 */
void f__1587_0337_0021_C368()
{
	emu_addws(&emu_sp, 0xE);
	emu_push(emu_si);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6120));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x611E));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x611A));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6118));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_movw(&emu_ax.x, 0x353F);
	emu_movw(&emu_es, emu_ax.x);

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_es, 0x00,  0x6674);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_es, 0x00,  0x6676);
	emu_push(0x0358);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A60EDB: f__22A6_0EDB_000A_151A(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x1587; emu_last_ip = 0x0353; emu_last_length = 0x0021; emu_last_crc = 0xC368;
			emu_call();
			return;
	}
	f__1587_0358_0009_06A7();
}

/**
 * Decompiled function f__1587_0358_0009_06A7()
 *
 * @name f__1587_0358_0009_06A7
 * @implements 1587:0358:0009:06A7 ()
 *
 * Called From: 1587:0358:0021:C368
 */
void f__1587_0358_0009_06A7()
{
	emu_addws(&emu_sp, 0xC);
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x0361); emu_cs = 0x34B1; ovl__34B1(4);
	f__1587_0361_0005_6A3A();
}

/**
 * Decompiled function f__1587_0361_0005_6A3A()
 *
 * @name f__1587_0361_0005_6A3A
 * @implements 1587:0361:0005:6A3A ()
 *
 * Called From: 1587:0361:0009:06A7
 */
void f__1587_0361_0005_6A3A()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_ax.x, emu_si);
	f__1587_0366_0006_F7CE(); return;
}

/**
 * Decompiled function f__1587_0366_0006_F7CE()
 *
 * @name f__1587_0366_0006_F7CE
 * @implements 1587:0366:0006:F7CE ()
 *
 * Called From: 1587:0364:0005:6A3A
 */
void f__1587_0366_0006_F7CE()
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

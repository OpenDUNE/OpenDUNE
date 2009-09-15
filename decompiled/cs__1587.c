/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__1587_0008_0012_EC72()
 *
 * @name f__1587_0008_0012_EC72
 * @implements 1587:0008:0012:EC72 ()
 *
 * Called From: B4B8:0D62:0025:A6D8
 */
void f__1587_0008_0012_EC72()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x12);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_xorw(&emu_si, emu_si);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_cs); emu_push(0x001A); emu_cs = 0x252E; f__252E_0001_0018_48C0();
	f__1587_001A_000F_D52D();
}

/**
 * Decompiled function f__1587_001A_000F_D52D()
 *
 * @name f__1587_001A_000F_D52D
 * @implements 1587:001A:000F:D52D ()
 *
 * Called From: 1587:001A:0012:EC72
 */
void f__1587_001A_000F_D52D()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_cs); emu_push(0x0029); emu_cs = 0x252E; f__252E_0001_0018_48C0();
	f__1587_0029_0012_2614();
}

/**
 * Decompiled function f__1587_0029_0012_2614()
 *
 * @name f__1587_0029_0012_2614
 * @implements 1587:0029:0012:2614 ()
 *
 * Called From: 1587:0029:000F:D52D
 */
void f__1587_0029_0012_2614()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x003B); emu_cs = 0x34B1; ovl__34B1(0);
	f__1587_003B_001E_38A6();
}

/**
 * Decompiled function f__1587_003B_001E_38A6()
 *
 * @name f__1587_003B_001E_38A6
 * @implements 1587:003B:001E:38A6 ()
 *
 * Called From: 1587:003B:0012:2614
 */
void f__1587_003B_001E_38A6()
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
	f__1587_0059_001D_C42D();
}

/**
 * Decompiled function f__1587_0059_001D_C42D()
 *
 * @name f__1587_0059_001D_C42D
 * @implements 1587:0059:001D:C42D ()
 *
 * Called From: 1587:0059:001E:38A6
 */
void f__1587_0059_001D_C42D()
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

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_es, 0x00,  0x66DC);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_es, 0x00,  0x66DE);
	emu_push(0x0076);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A61158: f__22A6_1158_0069_98BA(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x1587; emu_last_ip = 0x0071; emu_last_length = 0x001D; emu_last_crc = 0xC42D;
			emu_call();
			return;
	}
	f__1587_0076_0030_5494();
}

/**
 * Decompiled function f__1587_0076_0030_5494()
 *
 * @name f__1587_0076_0030_5494
 * @implements 1587:0076:0030:5494 ()
 *
 * Called From: 1587:0076:001D:C42D
 */
void f__1587_0076_0030_5494()
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
	f__1587_00A6_0020_CE0C();
}

/**
 * Decompiled function f__1587_00A6_0020_CE0C()
 *
 * @name f__1587_00A6_0020_CE0C
 * @implements 1587:00A6:0020:CE0C ()
 *
 * Called From: 1587:00A6:0030:5494
 */
void f__1587_00A6_0020_CE0C()
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
	if (!emu_flags.cf) { f__1587_00C6_000A_E8B1(); return; }
	emu_ip = 0x035B; emu_last_cs = 0x1587; emu_last_ip = 0x00C3; emu_last_length = 0x0020; emu_last_crc = 0xCE0C; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__1587_00C6_000A_E8B1()
 *
 * @name f__1587_00C6_000A_E8B1
 * @implements 1587:00C6:000A:E8B1 ()
 *
 * Called From: 1587:00C1:0020:CE0C
 */
void f__1587_00C6_000A_E8B1()
{
	if (!(emu_flags.cf || emu_flags.zf)) { emu_ip = 0x00D0; emu_last_cs = 0x1587; emu_last_ip = 0x00C6; emu_last_length = 0x000A; emu_last_crc = 0xE8B1; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	if (!(emu_flags.cf || emu_flags.zf)) { f__1587_00D0_0032_465B(); return; }
	emu_ip = 0x035B; emu_last_cs = 0x1587; emu_last_ip = 0x00CD; emu_last_length = 0x000A; emu_last_crc = 0xE8B1; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__1587_00D0_0032_465B()
 *
 * @name f__1587_00D0_0032_465B
 * @implements 1587:00D0:0032:465B ()
 *
 * Called From: 1587:00CB:000A:E8B1
 */
void f__1587_00D0_0032_465B()
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
	emu_push(emu_cs); emu_push(0x0102); emu_cs = 0x2B0E; f__2B0E_00D0_0022_D0C8();
	f__1587_0102_002D_733A();
}

/**
 * Decompiled function f__1587_0102_002D_733A()
 *
 * @name f__1587_0102_002D_733A
 * @implements 1587:0102:002D:733A ()
 *
 * Called From: 1587:0102:0032:465B
 */
void f__1587_0102_002D_733A()
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
	f__1587_012F_001A_0289();
}

/**
 * Decompiled function f__1587_012F_001A_0289()
 *
 * @name f__1587_012F_001A_0289
 * @implements 1587:012F:001A:0289 ()
 *
 * Called From: 1587:012F:002D:733A
 */
void f__1587_012F_001A_0289()
{
	emu_addws(&emu_sp, 0xE);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_cs); emu_push(0x0149); emu_cs = 0x253D; f__253D_023A_0038_FBF9();
	f__1587_0149_000A_AFCD();
}

/**
 * Decompiled function f__1587_0149_000A_AFCD()
 *
 * @name f__1587_0149_000A_AFCD
 * @implements 1587:0149:000A:AFCD ()
 *
 * Called From: 1587:0149:001A:0289
 */
void f__1587_0149_000A_AFCD()
{
	emu_addws(&emu_sp, 0x8);
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0153); emu_cs = 0x01F7; f__01F7_04E7_0005_1480();
	f__1587_0153_0010_1C6B();
}

/**
 * Decompiled function f__1587_0153_0010_1C6B()
 *
 * @name f__1587_0153_0010_1C6B
 * @implements 1587:0153:0010:1C6B ()
 *
 * Called From: 1587:0153:000A:AFCD
 */
void f__1587_0153_0010_1C6B()
{
	emu_movw(&emu_si, emu_ax.x);
	emu_movw(&emu_bx.x, emu_si);
	emu_xorw(&emu_cx.x, emu_cx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_cs); emu_push(0x0163); emu_cs = 0x01F7; f__01F7_03B2_0017_6839();
	f__1587_0163_0024_A05F();
}

/**
 * Decompiled function f__1587_0163_0024_A05F()
 *
 * @name f__1587_0163_0024_A05F
 * @implements 1587:0163:0024:A05F ()
 *
 * Called From: 1587:0163:0010:1C6B
 */
void f__1587_0163_0024_A05F()
{
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x6116), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x6114), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x611E));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x6120));
	if (emu_flags.zf) { f__1587_018F_001D_61AD(); return; }
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x6122), 0x0);
	if (!emu_flags.zf) { f__1587_018F_001D_61AD(); return; }
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6120));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x611E));
	emu_push(emu_cs); emu_push(0x0187); emu_cs = 0x23E1; emu_ip = 0x0349; emu_last_cs = 0x1587; emu_last_ip = 0x0182; emu_last_length = 0x0024; emu_last_crc = 0xA05F; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__1587_018F_001D_61AD()
 *
 * @name f__1587_018F_001D_61AD
 * @implements 1587:018F:001D:61AD ()
 *
 * Called From: 1587:0171:0024:A05F
 * Called From: 1587:0178:0024:A05F
 */
void f__1587_018F_001D_61AD()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x6118));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x611A));
	if (emu_flags.zf) { f__1587_01B4_0020_04A6(); return; }
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x611C), 0x0);
	if (!emu_flags.zf) { f__1587_01B4_0020_04A6(); return; }
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x611A));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6118));
	emu_push(emu_cs); emu_push(0x01AC); emu_cs = 0x23E1; emu_ip = 0x036E; emu_last_cs = 0x1587; emu_last_ip = 0x01A7; emu_last_length = 0x001D; emu_last_crc = 0x61AD; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__1587_01B4_0020_04A6()
 *
 * @name f__1587_01B4_0020_04A6
 * @implements 1587:01B4:0020:04A6 ()
 *
 * Called From: 1587:0196:001D:61AD
 * Called From: 1587:019D:001D:61AD
 */
void f__1587_01B4_0020_04A6()
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
	if ((emu_flags.cf || emu_flags.zf)) { f__1587_01D4_0009_C8EC(); return; }
	emu_ip = 0x02C2; emu_last_cs = 0x1587; emu_last_ip = 0x01D1; emu_last_length = 0x0020; emu_last_crc = 0x04A6; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__1587_01D4_0009_C8EC()
 *
 * @name f__1587_01D4_0009_C8EC
 * @implements 1587:01D4:0009:C8EC ()
 *
 * Called From: 1587:01CF:0020:04A6
 */
void f__1587_01D4_0009_C8EC()
{
	if (emu_flags.cf) { emu_ip = 0x01DD; emu_last_cs = 0x1587; emu_last_ip = 0x01D4; emu_last_length = 0x0009; emu_last_crc = 0xC8EC; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_si, emu_bx.x);
	if (emu_flags.cf) { f__1587_01DD_0022_8761(); return; }
	emu_ip = 0x02C2; emu_last_cs = 0x1587; emu_last_ip = 0x01DA; emu_last_length = 0x0009; emu_last_crc = 0xC8EC; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__1587_01DD_0022_8761()
 *
 * @name f__1587_01DD_0022_8761
 * @implements 1587:01DD:0022:8761 ()
 *
 * Called From: 1587:01D8:0009:C8EC
 */
void f__1587_01DD_0022_8761()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_addw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x6114));
	emu_adcw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x6116));
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x6120), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x611E), emu_dx.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6120));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x611E));
	emu_push(emu_cs); emu_push(0x01FF); emu_cs = 0x2B0E; f__2B0E_00D0_0022_D0C8();
	f__1587_01FF_002F_C18F();
}

/**
 * Decompiled function f__1587_01FF_002F_C18F()
 *
 * @name f__1587_01FF_002F_C18F
 * @implements 1587:01FF:002F:C18F ()
 *
 * Called From: 1587:01FF:0022:8761
 */
void f__1587_01FF_002F_C18F()
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
	f__1587_022E_004E_56EF();
}

/**
 * Decompiled function f__1587_022E_004E_56EF()
 *
 * @name f__1587_022E_004E_56EF
 * @implements 1587:022E:004E:56EF ()
 *
 * Called From: 1587:022E:002F:C18F
 */
void f__1587_022E_004E_56EF()
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
	if (emu_flags.cf) { emu_ip = 0x02A1; emu_last_cs = 0x1587; emu_last_ip = 0x0251; emu_last_length = 0x004E; emu_last_crc = 0x56EF; emu_call(); return; } // Jump does not resolve
	if (!(emu_flags.cf || emu_flags.zf)) { emu_ip = 0x025A; emu_last_cs = 0x1587; emu_last_ip = 0x0253; emu_last_length = 0x004E; emu_last_crc = 0x56EF; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	if ((emu_flags.cf || emu_flags.zf)) { emu_ip = 0x02A1; emu_last_cs = 0x1587; emu_last_ip = 0x0258; emu_last_length = 0x004E; emu_last_crc = 0x56EF; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_addw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x6114));
	emu_adcw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x6116));
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x611A), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x6118), emu_dx.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x611A));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6118));
	emu_push(emu_cs); emu_push(0x027C); emu_cs = 0x2B0E; f__2B0E_00D0_0022_D0C8();
	f__1587_027C_0025_D8D2();
}

/**
 * Decompiled function f__1587_027C_0025_D8D2()
 *
 * @name f__1587_027C_0025_D8D2
 * @implements 1587:027C:0025:D8D2 ()
 *
 * Called From: 1587:027C:004E:56EF
 */
void f__1587_027C_0025_D8D2()
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
	f__1587_02C0_0002_03D4(); return;
}

/**
 * Decompiled function f__1587_02C0_0002_03D4()
 *
 * @name f__1587_02C0_0002_03D4
 * @implements 1587:02C0:0002:03D4 ()
 *
 * Called From: 1587:029F:0025:D8D2
 */
void f__1587_02C0_0002_03D4()
{
	f__1587_02FE_001A_43ED(); return;
}

/**
 * Decompiled function f__1587_02FE_001A_43ED()
 *
 * @name f__1587_02FE_001A_43ED
 * @implements 1587:02FE:001A:43ED ()
 *
 * Called From: 1587:02C0:0002:03D4
 */
void f__1587_02FE_001A_43ED()
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
	f__1587_0318_001F_1135();
}

/**
 * Decompiled function f__1587_0318_001F_1135()
 *
 * @name f__1587_0318_001F_1135
 * @implements 1587:0318:001F:1135 ()
 *
 * Called From: 1587:0318:001A:43ED
 */
void f__1587_0318_001F_1135()
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
	f__1587_0337_0021_3043();
}

/**
 * Decompiled function f__1587_0337_0021_3043()
 *
 * @name f__1587_0337_0021_3043
 * @implements 1587:0337:0021:3043 ()
 *
 * Called From: 1587:0337:001F:1135
 */
void f__1587_0337_0021_3043()
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

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_es, 0x00,  0x6674);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_es, 0x00,  0x6676);
	emu_push(0x0358);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A60EDB: f__22A6_0EDB_000A_AA0A(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x1587; emu_last_ip = 0x0353; emu_last_length = 0x0021; emu_last_crc = 0x3043;
			emu_call();
			return;
	}
	f__1587_0358_0009_C36D();
}

/**
 * Decompiled function f__1587_0358_0009_C36D()
 *
 * @name f__1587_0358_0009_C36D
 * @implements 1587:0358:0009:C36D ()
 *
 * Called From: 1587:0358:0021:3043
 */
void f__1587_0358_0009_C36D()
{
	emu_addws(&emu_sp, 0xC);
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x0361); emu_cs = 0x34B1; ovl__34B1(4);
	f__1587_0361_0005_060C();
}

/**
 * Decompiled function f__1587_0361_0005_060C()
 *
 * @name f__1587_0361_0005_060C
 * @implements 1587:0361:0005:060C ()
 *
 * Called From: 1587:0361:0009:C36D
 */
void f__1587_0361_0005_060C()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_ax.x, emu_si);
	f__1587_0366_0006_137A(); return;
}

/**
 * Decompiled function f__1587_0366_0006_137A()
 *
 * @name f__1587_0366_0006_137A
 * @implements 1587:0366:0006:137A ()
 *
 * Called From: 1587:0364:0005:060C
 */
void f__1587_0366_0006_137A()
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

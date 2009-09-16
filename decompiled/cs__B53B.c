/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__B53B_0000_0050_2F00()
 *
 * @name f__B53B_0000_0050_2F00
 * @implements B53B:0000:0050:2F00 ()
 *
 * Called From: B53B:0171:000B:EA2B
 * Called From: B53B:020C:0008:B71E
 */
void f__B53B_0000_0050_2F00()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_si);
	emu_movw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00,  0x6D5D));
	emu_movb(&emu_cx.l, 0x4);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_subw(&emu_get_memory16(emu_ds, emu_bx.x,  0x4062), emu_si);
	emu_movw(&emu_ax.x, emu_si);
	emu_movb(&emu_cx.l, 0x3);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00,  0x6D5D));
	emu_movb(&emu_cx.l, 0x4);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_subw(&emu_get_memory16(emu_ds, emu_bx.x,  0x4064), emu_ax.x);
	emu_movw(&emu_ax.x, emu_si);
	emu_shlw(&emu_ax.x, 0x1);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00,  0x6D5D));
	emu_movb(&emu_cx.l, 0x4);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_addw(&emu_get_memory16(emu_ds, emu_bx.x,  0x4066), emu_ax.x);
	emu_movw(&emu_ax.x, emu_si);
	emu_movb(&emu_cx.l, 0x4);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00,  0x6D5D));
	emu_movb(&emu_cx.l, 0x4);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_addw(&emu_get_memory16(emu_ds, emu_bx.x,  0x4068), emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6D5D));
	emu_push(emu_cs); emu_push(0x0050); emu_cs = 0x07AE; f__07AE_0000_00DF_386F();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x353B) { ovl__353B(0xFF); }
	f__B53B_0050_000C_1464();
}

/**
 * Decompiled function f__B53B_0050_000C_1464()
 *
 * @name f__B53B_0050_000C_1464
 * @implements B53B:0050:000C:1464 ()
 *
 * Called From: B53B:0050:0050:2F00
 */
void f__B53B_0050_000C_1464()
{
	emu_pop(&emu_cx.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x66CD), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x66CB), emu_ax.x);
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B53B_005C_000F_2EC4()
 *
 * @name f__B53B_005C_000F_2EC4
 * @implements B53B:005C:000F:2EC4 ()
 *
 * Called From: B53B:02A5:001F:F144
 */
void f__B53B_005C_000F_2EC4()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x1C);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_xorw(&emu_si, emu_si);
	emu_push(emu_cs); emu_push(0x006B); emu_cs = 0x2B6C; f__2B6C_0137_0020_17E5();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x353B) { ovl__353B(0xFF); }
	f__B53B_006B_001D_79DA();
}

/**
 * Decompiled function f__B53B_006B_001D_79DA()
 *
 * @name f__B53B_006B_001D_79DA
 * @implements B53B:006B:001D:79DA ()
 *
 * Called From: B53B:006B:000F:2EC4
 */
void f__B53B_006B_001D_79DA()
{
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, emu_bx.x,  0x6730));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, emu_bx.x,  0x672E));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x12), emu_dx.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0088); emu_cs = 0x2598; f__2598_0000_0017_D681();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x353B) { ovl__353B(0xFF); }
	f__B53B_0088_000D_E7F5();
}

/**
 * Decompiled function f__B53B_0088_000D_E7F5()
 *
 * @name f__B53B_0088_000D_E7F5
 * @implements B53B:0088:000D:E7F5 ()
 *
 * Called From: B53B:0088:001D:79DA
 */
void f__B53B_0088_000D_E7F5()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x1C), emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6C6A));
	emu_push(emu_cs); emu_push(0x0095); emu_cs = 0x07AE; f__07AE_0000_00DF_386F();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x353B) { ovl__353B(0xFF); }
	f__B53B_0095_0011_6627();
}

/**
 * Decompiled function f__B53B_0095_0011_6627()
 *
 * @name f__B53B_0095_0011_6627
 * @implements B53B:0095:0011:6627 ()
 *
 * Called From: B53B:0095:000D:E7F5
 */
void f__B53B_0095_0011_6627()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x660F));
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x6611));
	emu_push(emu_cs); emu_push(0x00A6); emu_cs = 0x2605; f__2605_000C_006D_4FAF();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x353B) { ovl__353B(0xFF); }
	f__B53B_00A6_0051_3A1F();
}

/**
 * Decompiled function f__B53B_00A6_0051_3A1F()
 *
 * @name f__B53B_00A6_0051_3A1F
 * @implements B53B:00A6:0051:3A1F ()
 *
 * Called From: B53B:00A6:0011:6627
 */
void f__B53B_00A6_0051_3A1F()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x14), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x16), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00, -0x66D3));
	emu_movb(&emu_cx.l, 0x3);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00, -0x66D5));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00, -0x66D1));
	emu_movb(&emu_cx.l, 0x3);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_ax.x);
	emu_movw(&emu_di, emu_get_memory16(emu_ds, 0x00, -0x66CF));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_decw(&emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_addw(&emu_ax.x, emu_di);
	emu_decw(&emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x31B2));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x31B4));
	if (!emu_flags.zf) { emu_ip = 0x0124; emu_last_cs = 0xB53B; emu_last_ip = 0x00E6; emu_last_length = 0x0051; emu_last_crc = 0x3A1F; emu_call(); return; } // Jump does not resolve
	emu_push(emu_di);
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x66D1));
	emu_movw(&emu_ax.x, 0x353F);
	emu_movw(&emu_es, emu_ax.x);

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_es, 0x00,  0x66E4);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_es, 0x00,  0x66E6);
	emu_push(0x00F7);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A6127B: f__22A6_127B_0036_5409(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0xB53B; emu_last_ip = 0x00F2; emu_last_length = 0x0051; emu_last_crc = 0x3A1F;
			emu_call();
			return;
	}
	f__B53B_00F7_0009_815A();
}

/**
 * Decompiled function f__B53B_00F7_0009_815A()
 *
 * @name f__B53B_00F7_0009_815A
 * @implements B53B:00F7:0009:815A ()
 *
 * Called From: B53B:00F7:0051:3A1F
 */
void f__B53B_00F7_0009_815A()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_si, emu_ax.x);
	emu_push(emu_cs); emu_push(0x0100); emu_cs = 0x23E1; f__23E1_0334_000B_B6F7();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x353B) { ovl__353B(0xFF); }
	f__B53B_0100_0016_656D();
}

/**
 * Decompiled function f__B53B_0100_0016_656D()
 *
 * @name f__B53B_0100_0016_656D
 * @implements B53B:0100:0016:656D ()
 *
 * Called From: B53B:0100:0009:815A
 */
void f__B53B_0100_0016_656D()
{
	emu_orw(&emu_dx.x, emu_dx.x);
	if ((emu_flags.sf != emu_flags.of)) { emu_ip = 0x0122; emu_last_cs = 0xB53B; emu_last_ip = 0x0102; emu_last_length = 0x0016; emu_last_crc = 0x656D; emu_call(); return; } // Jump does not resolve
	if (!emu_flags.zf) { f__B53B_010A_000C_FB46(); return; }
	emu_cmpw(&emu_ax.x, emu_si);
	if (emu_flags.cf) { emu_ip = 0x0122; emu_last_cs = 0xB53B; emu_last_ip = 0x0108; emu_last_length = 0x0016; emu_last_crc = 0x656D; emu_call(); return; } // Jump does not resolve
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x0116); emu_cs = 0x23E1; emu_ip = 0x011A; emu_last_cs = 0xB53B; emu_last_ip = 0x0111; emu_last_length = 0x0016; emu_last_crc = 0x656D; emu_call(); // Jump does not resolve
	f__B53B_0116_000C_472F();
}

/**
 * Decompiled function f__B53B_010A_000C_FB46()
 *
 * @name f__B53B_010A_000C_FB46
 * @implements B53B:010A:000C:FB46 ()
 *
 * Called From: B53B:0104:0016:656D
 */
void f__B53B_010A_000C_FB46()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x0116); emu_cs = 0x23E1; f__23E1_0004_0014_DD3C();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x353B) { ovl__353B(0xFF); }
	f__B53B_0116_000C_472F();
}

/**
 * Decompiled function f__B53B_0116_000C_472F()
 *
 * @name f__B53B_0116_000C_472F
 * @implements B53B:0116:000C:472F ()
 *
 * Called From: B53B:0116:000C:FB46
 */
void f__B53B_0116_000C_472F()
{
	emu_addws(&emu_sp, 0x6);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x31B4), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x31B2), emu_ax.x);
	f__B53B_0124_0028_4EF1(); return;
}

/**
 * Decompiled function f__B53B_0124_0028_4EF1()
 *
 * @name f__B53B_0124_0028_4EF1
 * @implements B53B:0124:0028:4EF1 ()
 *
 * Called From: B53B:0120:000C:472F
 */
void f__B53B_0124_0028_4EF1()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x31B2));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x31B4));
	if (emu_flags.zf) { emu_ip = 0x014F; emu_last_cs = 0xB53B; emu_last_ip = 0x012B; emu_last_length = 0x0028; emu_last_crc = 0x4EF1; emu_call(); return; } // Jump does not resolve
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x31B4));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x31B2));
	emu_push(emu_di);
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x66D1));
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x66D5));
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x66D3));
	emu_movw(&emu_ax.x, 0x353F);
	emu_movw(&emu_es, emu_ax.x);

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_es, 0x00,  0x66C0);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_es, 0x00,  0x66C2);
	emu_push(0x014C);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A6101C: f__22A6_101C_004B_C8B8(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0xB53B; emu_last_ip = 0x0147; emu_last_length = 0x0028; emu_last_crc = 0x4EF1;
			emu_call();
			return;
	}
	f__B53B_014C_0008_F3CE();
}

/**
 * Decompiled function f__B53B_014C_0008_F3CE()
 *
 * @name f__B53B_014C_0008_F3CE
 * @implements B53B:014C:0008:F3CE ()
 *
 * Called From: B53B:014C:0028:4EF1
 */
void f__B53B_014C_0008_F3CE()
{
	emu_addws(&emu_sp, 0xC);
	emu_push(emu_cs); emu_push(0x0154); emu_cs = 0x07AE; f__07AE_0103_004C_A52F();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x353B) { ovl__353B(0xFF); }
	f__B53B_0154_0015_6E9E();
}

/**
 * Decompiled function f__B53B_0154_0015_6E9E()
 *
 * @name f__B53B_0154_0015_6E9E
 * @implements B53B:0154:0015:6E9E ()
 *
 * Called From: B53B:0154:0008:F3CE
 */
void f__B53B_0154_0015_6E9E()
{
	emu_movw(&emu_ax.x, 0xF);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_cs); emu_push(0x0169); emu_cs = 0x251B; f__251B_0000_001E_12D9();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x353B) { ovl__353B(0xFF); }
	f__B53B_0169_000B_EA2B();
}

/**
 * Decompiled function f__B53B_0169_000B_EA2B()
 *
 * @name f__B53B_0169_000B_EA2B
 * @implements B53B:0169:000B:EA2B ()
 *
 * Called From: B53B:0169:0015:6E9E
 */
void f__B53B_0169_000B_EA2B()
{
	emu_addws(&emu_sp, 0xA);
	emu_movw(&emu_ax.x, 0xFFFF);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x0174); f__B53B_0000_0050_2F00();
	f__B53B_0174_000C_76B1();
}

/**
 * Decompiled function f__B53B_0174_000C_76B1()
 *
 * @name f__B53B_0174_000C_76B1
 * @implements B53B:0174:000C:76B1 ()
 *
 * Called From: B53B:0174:000B:EA2B
 */
void f__B53B_0174_000C_76B1()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_cs); emu_push(0x0180); emu_cs = 0x1FB5; f__1FB5_175A_000F_4174();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x353B) { ovl__353B(0xFF); }
	f__B53B_0180_0016_BF01();
}

/**
 * Decompiled function f__B53B_0180_0016_BF01()
 *
 * @name f__B53B_0180_0016_BF01
 * @implements B53B:0180:0016:BF01 ()
 *
 * Called From: B53B:0180:000C:76B1
 */
void f__B53B_0180_0016_BF01()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x7D80), emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_push(emu_cs); emu_push(0x0196); emu_cs = 0x3536; ovl__3536(5);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x353B) { ovl__353B(0xFF); }
	f__B53B_0196_0033_21EB();
}

/**
 * Decompiled function f__B53B_0196_0033_21EB()
 *
 * @name f__B53B_0196_0033_21EB
 * @implements B53B:0196:0033:21EB ()
 *
 * Called From: B53B:0196:0016:BF01
 */
void f__B53B_0196_0033_21EB()
{
	emu_addws(&emu_sp, 0x8);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0x6), 0x2);
	if (emu_flags.zf) { f__B53B_01A5_0024_79EB(); return; }
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0x6), 0x0);
	if (!emu_flags.zf) { emu_ip = 0x01CC; emu_last_cs = 0xB53B; emu_last_ip = 0x01A3; emu_last_length = 0x0033; emu_last_crc = 0x21EB; emu_call(); return; } // Jump does not resolve
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ds, 0x00, -0x7D80));
	emu_addb(&emu_ax.l, 0x31);
	emu_movb(&emu_get_memory8(emu_ss, emu_bp, -0x1A), emu_ax.l);
	emu_movb(&emu_get_memory8(emu_ss, emu_bp, -0x19), 0x0);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0x1A);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6778));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6776));
	emu_push(emu_cs); emu_push(0x01C9); emu_cs = 0x3536; emu_ip = 0x0202; emu_last_cs = 0xB53B; emu_last_ip = 0x01C4; emu_last_length = 0x0033; emu_last_crc = 0x21EB; emu_call(); // Jump does not resolve
	f__B53B_01C9_0008_F17A();
}

/**
 * Decompiled function f__B53B_01A5_0024_79EB()
 *
 * @name f__B53B_01A5_0024_79EB
 * @implements B53B:01A5:0024:79EB ()
 *
 * Called From: B53B:019D:0033:21EB
 */
void f__B53B_01A5_0024_79EB()
{
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ds, 0x00, -0x7D80));
	emu_addb(&emu_ax.l, 0x31);
	emu_movb(&emu_get_memory8(emu_ss, emu_bp, -0x1A), emu_ax.l);
	emu_movb(&emu_get_memory8(emu_ss, emu_bp, -0x19), 0x0);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0x1A);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6778));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6776));
	emu_push(emu_cs); emu_push(0x01C9); emu_cs = 0x3536; ovl__3536(5);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x353B) { ovl__353B(0xFF); }
	f__B53B_01C9_0008_F17A();
}

/**
 * Decompiled function f__B53B_01C9_0008_F17A()
 *
 * @name f__B53B_01C9_0008_F17A
 * @implements B53B:01C9:0008:F17A ()
 *
 * Called From: B53B:01C9:0024:79EB
 */
void f__B53B_01C9_0008_F17A()
{
	emu_addws(&emu_sp, 0xC);
	emu_push(emu_cs); emu_push(0x01D1); emu_cs = 0x29E8; f__29E8_073F_000E_A6E4();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x353B) { ovl__353B(0xFF); }
	f__B53B_01D1_0005_1F2A();
}

/**
 * Decompiled function f__B53B_01D1_0005_1F2A()
 *
 * @name f__B53B_01D1_0005_1F2A
 * @implements B53B:01D1:0005:1F2A ()
 *
 * Called From: B53B:01D1:0008:F17A
 */
void f__B53B_01D1_0005_1F2A()
{
	emu_push(emu_cs); emu_push(0x01D6); emu_cs = 0x29E8; f__29E8_07FA_0020_41C7();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x353B) { ovl__353B(0xFF); }
	f__B53B_01D6_000E_626F();
}

/**
 * Decompiled function f__B53B_01D6_000E_626F()
 *
 * @name f__B53B_01D6_000E_626F
 * @implements B53B:01D6:000E:626F ()
 *
 * Called From: B53B:01D6:0005:1F2A
 */
void f__B53B_01D6_000E_626F()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x1B);
	if (!emu_flags.zf) { f__B53B_0207_0008_B71E(); return; }
	emu_push(emu_cs); emu_push(0x01E4); emu_cs = 0x07AE; emu_ip = 0x02E7; emu_last_cs = 0xB53B; emu_last_ip = 0x01DF; emu_last_length = 0x000E; emu_last_crc = 0x626F; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__B53B_0207_0008_B71E()
 *
 * @name f__B53B_0207_0008_B71E
 * @implements B53B:0207:0008:B71E ()
 *
 * Called From: B53B:01DD:000E:626F
 */
void f__B53B_0207_0008_B71E()
{
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x020F); f__B53B_0000_0050_2F00();
	f__B53B_020F_0029_FF41();
}

/**
 * Decompiled function f__B53B_020F_0029_FF41()
 *
 * @name f__B53B_020F_0029_FF41
 * @implements B53B:020F:0029:FF41 ()
 *
 * Called From: B53B:020F:0008:B71E
 */
void f__B53B_020F_0029_FF41()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x31B2));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x31B4));
	if (emu_flags.zf) { emu_ip = 0x023B; emu_last_cs = 0xB53B; emu_last_ip = 0x0217; emu_last_length = 0x0029; emu_last_crc = 0xFF41; emu_call(); return; } // Jump does not resolve
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x31B4));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x31B2));
	emu_push(emu_di);
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x66D1));
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x66D5));
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x66D3));
	emu_movw(&emu_ax.x, 0x353F);
	emu_movw(&emu_es, emu_ax.x);

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_es, 0x00,  0x662C);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_es, 0x00,  0x662E);
	emu_push(0x0238);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A604F8: f__22A6_04F8_007A_D667(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0xB53B; emu_last_ip = 0x0233; emu_last_length = 0x0029; emu_last_crc = 0xFF41;
			emu_call();
			return;
	}
	f__B53B_0238_000B_FA71();
}

/**
 * Decompiled function f__B53B_0238_000B_FA71()
 *
 * @name f__B53B_0238_000B_FA71
 * @implements B53B:0238:000B:FA71 ()
 *
 * Called From: B53B:0238:0029:FF41
 */
void f__B53B_0238_000B_FA71()
{
	emu_addws(&emu_sp, 0xC);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_cs); emu_push(0x0243); emu_cs = 0x07AE; f__07AE_0000_00DF_386F();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x353B) { ovl__353B(0xFF); }
	f__B53B_0243_000C_855A();
}

/**
 * Decompiled function f__B53B_0243_000C_855A()
 *
 * @name f__B53B_0243_000C_855A
 * @implements B53B:0243:000C:855A ()
 *
 * Called From: B53B:0243:000B:FA71
 */
void f__B53B_0243_000C_855A()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x16));
	emu_push(emu_cs); emu_push(0x024F); emu_cs = 0x2605; f__2605_000C_006D_4FAF();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x353B) { ovl__353B(0xFF); }
	f__B53B_024F_000A_3A6B();
}

/**
 * Decompiled function f__B53B_024F_000A_3A6B()
 *
 * @name f__B53B_024F_000A_3A6B
 * @implements B53B:024F:000A:3A6B ()
 *
 * Called From: B53B:024F:000C:855A
 */
void f__B53B_024F_000A_3A6B()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x1C));
	emu_push(emu_cs); emu_push(0x0259); emu_cs = 0x2598; f__2598_0000_0017_D681();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x353B) { ovl__353B(0xFF); }
	f__B53B_0259_0012_A44A();
}

/**
 * Decompiled function f__B53B_0259_0012_A44A()
 *
 * @name f__B53B_0259_0012_A44A
 * @implements B53B:0259:0012:A44A ()
 *
 * Called From: B53B:0259:000A:3A6B
 */
void f__B53B_0259_0012_A44A()
{
	emu_pop(&emu_cx.x);
	emu_orw(&emu_si, emu_si);
	if (emu_flags.zf) { emu_ip = 0x0279; emu_last_cs = 0xB53B; emu_last_ip = 0x025C; emu_last_length = 0x0012; emu_last_crc = 0xA44A; emu_call(); return; } // Jump does not resolve
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x31B4));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x31B2));
	emu_push(emu_cs); emu_push(0x026B); emu_cs = 0x23E1; f__23E1_01C2_0011_4E4B();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x353B) { ovl__353B(0xFF); }
	f__B53B_026B_0013_234B();
}

/**
 * Decompiled function f__B53B_026B_0013_234B()
 *
 * @name f__B53B_026B_0013_234B
 * @implements B53B:026B:0013:234B ()
 *
 * Called From: B53B:026B:0012:A44A
 */
void f__B53B_026B_0013_234B()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x31B4), 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x31B2), 0x0);
	emu_push(emu_cs); emu_push(0x027E); emu_cs = 0x2B6C; f__2B6C_0169_001E_97C8();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x353B) { ovl__353B(0xFF); }
	f__B53B_027E_0005_14BC();
}

/**
 * Decompiled function f__B53B_027E_0005_14BC()
 *
 * @name f__B53B_027E_0005_14BC
 * @implements B53B:027E:0005:14BC ()
 *
 * Called From: B53B:027E:0013:234B
 */
void f__B53B_027E_0005_14BC()
{
	emu_movw(&emu_ax.x, 0x1);
	f__B53B_0283_0006_137A(); return;
}

/**
 * Decompiled function f__B53B_0283_0006_137A()
 *
 * @name f__B53B_0283_0006_137A
 * @implements B53B:0283:0006:137A ()
 *
 * Called From: B53B:0281:0005:14BC
 */
void f__B53B_0283_0006_137A()
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
 * Decompiled function f__B53B_0289_001F_F144()
 *
 * @name f__B53B_0289_001F_F144
 * @implements B53B:0289:001F:F144 ()
 *
 * Called From: 353B:0020:0005:14B2
 * Called From: 353B:0020:0005:17BA
 * Called From: 353B:0020:0005:1666
 */
void f__B53B_0289_001F_F144()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x2);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x6C91));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x6C91), 0x0);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x02A8); f__B53B_005C_000F_2EC4();
	f__B53B_02A8_000E_7800();
}

/**
 * Decompiled function f__B53B_02A8_000E_7800()
 *
 * @name f__B53B_02A8_000E_7800
 * @implements B53B:02A8:000E:7800 ()
 *
 * Called From: B53B:02A8:001F:F144
 */
void f__B53B_02A8_000E_7800()
{
	emu_addws(&emu_sp, 0x6);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x6C91), emu_ax.x);
	emu_movw(&emu_ax.x, 0x1);
	f__B53B_02B6_0004_0F7A(); return;
}

/**
 * Decompiled function f__B53B_02B6_0004_0F7A()
 *
 * @name f__B53B_02B6_0004_0F7A
 * @implements B53B:02B6:0004:0F7A ()
 *
 * Called From: B53B:02B4:000E:7800
 */
void f__B53B_02B6_0004_0F7A()
{
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

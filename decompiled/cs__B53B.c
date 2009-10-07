/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__B53B_0000_0050_FEA6()
 *
 * @name f__B53B_0000_0050_FEA6
 * @implements B53B:0000:0050:FEA6 ()
 *
 * Called From: B53B:0171:000B:944B
 */
void f__B53B_0000_0050_FEA6()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_si);
	emu_movw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_bx, emu_get_memory16(emu_ds, 0x00,  0x6D5D));
	emu_movb(&emu_cl, 0x4);
	emu_shlw(&emu_bx, emu_cl);
	emu_subw(&emu_get_memory16(emu_ds, emu_bx,  0x4062), emu_si);
	emu_movw(&emu_ax, emu_si);
	emu_movb(&emu_cl, 0x3);
	emu_shlw(&emu_ax, emu_cl);
	emu_movw(&emu_bx, emu_get_memory16(emu_ds, 0x00,  0x6D5D));
	emu_movb(&emu_cl, 0x4);
	emu_shlw(&emu_bx, emu_cl);
	emu_subw(&emu_get_memory16(emu_ds, emu_bx,  0x4064), emu_ax);
	emu_movw(&emu_ax, emu_si);
	emu_shlw(&emu_ax, 0x1);
	emu_movw(&emu_bx, emu_get_memory16(emu_ds, 0x00,  0x6D5D));
	emu_movb(&emu_cl, 0x4);
	emu_shlw(&emu_bx, emu_cl);
	emu_addw(&emu_get_memory16(emu_ds, emu_bx,  0x4066), emu_ax);
	emu_movw(&emu_ax, emu_si);
	emu_movb(&emu_cl, 0x4);
	emu_shlw(&emu_ax, emu_cl);
	emu_movw(&emu_bx, emu_get_memory16(emu_ds, 0x00,  0x6D5D));
	emu_movb(&emu_cl, 0x4);
	emu_shlw(&emu_bx, emu_cl);
	emu_addw(&emu_get_memory16(emu_ds, emu_bx,  0x4068), emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6D5D));
	emu_push(emu_cs); emu_push(0x0050); emu_cs = 0x07AE; f__07AE_0000_00DF_A32C();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x353B) { ovl__353B(0xFF); }
	f__B53B_0050_000C_D401();
}

/**
 * Decompiled function f__B53B_0050_000C_D401()
 *
 * @name f__B53B_0050_000C_D401
 * @implements B53B:0050:000C:D401 ()
 *
 * Called From: B53B:0050:0050:FEA6
 */
void f__B53B_0050_000C_D401()
{
	emu_pop(&emu_cx);
	emu_xorw(&emu_ax, emu_ax);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x9933), emu_ax);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x9935), emu_ax);
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B53B_005C_000F_A920()
 *
 * @name f__B53B_005C_000F_A920
 * @implements B53B:005C:000F:A920 ()
 *
 * Called From: B53B:02A5:001F:95C1
 */
void f__B53B_005C_000F_A920()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x1C);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_xorw(&emu_si, emu_si);
	emu_push(emu_cs); emu_push(0x006B); emu_cs = 0x2B6C; f__2B6C_0137_0020_C73F();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x353B) { ovl__353B(0xFF); }
	f__B53B_006B_001D_6E01();
}

/**
 * Decompiled function f__B53B_006B_001D_6E01()
 *
 * @name f__B53B_006B_001D_6E01
 * @implements B53B:006B:001D:6E01 ()
 *
 * Called From: B53B:006B:000F:A920
 */
void f__B53B_006B_001D_6E01()
{
	emu_movw(&emu_bx, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_cl, 0x2);
	emu_shlw(&emu_bx, emu_cl);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, emu_bx,  0x6730));
	emu_movw(&emu_dx, emu_get_memory16(emu_ds, emu_bx,  0x672E));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x12), emu_dx);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0088); emu_cs = 0x2598; f__2598_0000_0017_EB80();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x353B) { ovl__353B(0xFF); }
	f__B53B_0088_000D_B84B();
}

/**
 * Decompiled function f__B53B_0088_000D_B84B()
 *
 * @name f__B53B_0088_000D_B84B
 * @implements B53B:0088:000D:B84B ()
 *
 * Called From: B53B:0088:001D:6E01
 */
void f__B53B_0088_000D_B84B()
{
	emu_pop(&emu_cx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x1C), emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6C6A));
	emu_push(emu_cs); emu_push(0x0095); emu_cs = 0x07AE; f__07AE_0000_00DF_A32C();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x353B) { ovl__353B(0xFF); }
	f__B53B_0095_0011_1ABA();
}

/**
 * Decompiled function f__B53B_0095_0011_1ABA()
 *
 * @name f__B53B_0095_0011_1ABA
 * @implements B53B:0095:0011:1ABA ()
 *
 * Called From: B53B:0095:000D:B84B
 */
void f__B53B_0095_0011_1ABA()
{
	emu_pop(&emu_cx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x99F1));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x99EF));
	emu_push(emu_cs); emu_push(0x00A6); emu_cs = 0x2605; f__2605_000C_006D_F8B2();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x353B) { ovl__353B(0xFF); }
	f__B53B_00A6_0051_C06D();
}

/**
 * Decompiled function f__B53B_00A6_0051_C06D()
 *
 * @name f__B53B_00A6_0051_C06D
 * @implements B53B:00A6:0051:C06D ()
 *
 * Called From: B53B:00A6:0011:1ABA
 */
void f__B53B_00A6_0051_C06D()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x14), emu_dx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x16), emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00,  0x992D));
	emu_movb(&emu_cl, 0x3);
	emu_shlw(&emu_ax, emu_cl);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00,  0x992B));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00,  0x992F));
	emu_movb(&emu_cl, 0x3);
	emu_shlw(&emu_ax, emu_cl);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_ax);
	emu_movw(&emu_di, emu_get_memory16(emu_ds, 0x00,  0x9931));
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_addw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_decw(&emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_addw(&emu_ax, emu_di);
	emu_decw(&emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00,  0x31B2));
	emu_orw(&emu_ax, emu_get_memory16(emu_ds, 0x00,  0x31B4));
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0124; emu_last_cs = 0xB53B; emu_last_ip = 0x00E6; emu_last_length = 0x0051; emu_last_crc = 0xC06D; emu_call(); return; }
	emu_push(emu_di);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x992F));
	emu_movw(&emu_ax, 0x353F);
	emu_movw(&emu_es, emu_ax);

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_es, 0x00,  0x66E4);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_es, 0x00,  0x66E6);
	emu_push(0x00F7);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A6127B: f__22A6_127B_0036_F8C9(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0xB53B; emu_last_ip = 0x00F2; emu_last_length = 0x0051; emu_last_crc = 0xC06D;
			emu_call();
			return;
	}
	f__B53B_00F7_0009_0D32();
}

/**
 * Decompiled function f__B53B_00F7_0009_0D32()
 *
 * @name f__B53B_00F7_0009_0D32
 * @implements B53B:00F7:0009:0D32 ()
 *
 * Called From: B53B:00F7:0051:C06D
 */
void f__B53B_00F7_0009_0D32()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_movw(&emu_si, emu_ax);
	emu_push(emu_cs); emu_push(0x0100); emu_cs = 0x23E1; f__23E1_0334_000B_CF65();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x353B) { ovl__353B(0xFF); }
	f__B53B_0100_0016_FC40();
}

/**
 * Decompiled function f__B53B_0100_0016_FC40()
 *
 * @name f__B53B_0100_0016_FC40
 * @implements B53B:0100:0016:FC40 ()
 *
 * Called From: B53B:0100:0009:0D32
 */
void f__B53B_0100_0016_FC40()
{
	emu_orw(&emu_dx, emu_dx);
	if ((emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x0122; emu_last_cs = 0xB53B; emu_last_ip = 0x0102; emu_last_length = 0x0016; emu_last_crc = 0xFC40; emu_call(); return; }
	if (!emu_flags.zf) { f__B53B_010A_000C_1AF8(); return; }
	emu_cmpw(&emu_ax, emu_si);
	if (emu_flags.cf) { /* Unresolved jump */ emu_ip = 0x0122; emu_last_cs = 0xB53B; emu_last_ip = 0x0108; emu_last_length = 0x0016; emu_last_crc = 0xFC40; emu_call(); return; }
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_si);
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x0116); emu_cs = 0x23E1; emu_ip = 0x0004; emu_last_cs = 0xB53B; emu_last_ip = 0x0111; emu_last_length = 0x0016; emu_last_crc = 0xFC40; emu_call();
	f__B53B_0116_000C_388D();
}

/**
 * Decompiled function f__B53B_010A_000C_1AF8()
 *
 * @name f__B53B_010A_000C_1AF8
 * @implements B53B:010A:000C:1AF8 ()
 *
 * Called From: B53B:0104:0016:FC40
 */
void f__B53B_010A_000C_1AF8()
{
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x0116); emu_cs = 0x23E1; f__23E1_0004_0014_2BC0();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x353B) { ovl__353B(0xFF); }
	f__B53B_0116_000C_388D();
}

/**
 * Decompiled function f__B53B_0116_000C_388D()
 *
 * @name f__B53B_0116_000C_388D
 * @implements B53B:0116:000C:388D ()
 *
 * Called From: B53B:0116:000C:1AF8
 */
void f__B53B_0116_000C_388D()
{
	emu_addws(&emu_sp, 0x6);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x31B4), emu_dx);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x31B2), emu_ax);
	f__B53B_0124_0028_D443(); return;
}

/**
 * Decompiled function f__B53B_0124_0028_D443()
 *
 * @name f__B53B_0124_0028_D443
 * @implements B53B:0124:0028:D443 ()
 *
 * Called From: B53B:0120:000C:388D
 */
void f__B53B_0124_0028_D443()
{
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00,  0x31B2));
	emu_orw(&emu_ax, emu_get_memory16(emu_ds, 0x00,  0x31B4));
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x014F; emu_last_cs = 0xB53B; emu_last_ip = 0x012B; emu_last_length = 0x0028; emu_last_crc = 0xD443; emu_call(); return; }
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x31B4));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x31B2));
	emu_push(emu_di);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x992F));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x992B));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x992D));
	emu_movw(&emu_ax, 0x353F);
	emu_movw(&emu_es, emu_ax);

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_es, 0x00,  0x66C0);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_es, 0x00,  0x66C2);
	emu_push(0x014C);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A6101C: f__22A6_101C_004B_D9F3(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0xB53B; emu_last_ip = 0x0147; emu_last_length = 0x0028; emu_last_crc = 0xD443;
			emu_call();
			return;
	}
	f__B53B_014C_0008_05D3();
}

/**
 * Decompiled function f__B53B_014C_0008_05D3()
 *
 * @name f__B53B_014C_0008_05D3
 * @implements B53B:014C:0008:05D3 ()
 *
 * Called From: B53B:014C:0028:D443
 */
void f__B53B_014C_0008_05D3()
{
	emu_addws(&emu_sp, 0xC);
	emu_push(emu_cs); emu_push(0x0154); emu_cs = 0x07AE; f__07AE_0103_004C_B43B();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x353B) { ovl__353B(0xFF); }
	f__B53B_0154_0015_EEC6();
}

/**
 * Decompiled function f__B53B_0154_0015_EEC6()
 *
 * @name f__B53B_0154_0015_EEC6
 * @implements B53B:0154:0015:EEC6 ()
 *
 * Called From: B53B:0154:0008:05D3
 */
void f__B53B_0154_0015_EEC6()
{
	emu_movw(&emu_ax, 0xF);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_cs); emu_push(0x0169); emu_cs = 0x251B; f__251B_0000_001E_7202();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x353B) { ovl__353B(0xFF); }
	f__B53B_0169_000B_944B();
}

/**
 * Decompiled function f__B53B_0169_000B_944B()
 *
 * @name f__B53B_0169_000B_944B
 * @implements B53B:0169:000B:944B ()
 *
 * Called From: B53B:0169:0015:EEC6
 */
void f__B53B_0169_000B_944B()
{
	emu_addws(&emu_sp, 0xA);
	emu_movw(&emu_ax, 0xFFFF);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x0174); f__B53B_0000_0050_FEA6();
	f__B53B_0174_000C_CE7E();
}

/**
 * Decompiled function f__B53B_0174_000C_CE7E()
 *
 * @name f__B53B_0174_000C_CE7E
 * @implements B53B:0174:000C:CE7E ()
 *
 * Called From: B53B:0174:000B:944B
 */
void f__B53B_0174_000C_CE7E()
{
	emu_pop(&emu_cx);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_cs); emu_push(0x0180); emu_cs = 0x1FB5; f__1FB5_175A_000F_6F28();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x353B) { ovl__353B(0xFF); }
	f__B53B_0180_0016_AA3C();
}

/**
 * Decompiled function f__B53B_0180_0016_AA3C()
 *
 * @name f__B53B_0180_0016_AA3C
 * @implements B53B:0180:0016:AA3C ()
 *
 * Called From: B53B:0180:000C:CE7E
 */
void f__B53B_0180_0016_AA3C()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x8280), emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_push(emu_cs); emu_push(0x0196); emu_cs = 0x3536; ovl__3536(5);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x353B) { ovl__353B(0xFF); }
	f__B53B_0196_0033_F614();
}

/**
 * Decompiled function f__B53B_0196_0033_F614()
 *
 * @name f__B53B_0196_0033_F614
 * @implements B53B:0196:0033:F614 ()
 *
 * Called From: B53B:0196:0016:AA3C
 */
void f__B53B_0196_0033_F614()
{
	emu_addws(&emu_sp, 0x8);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0x6), 0x2);
	if (emu_flags.zf) { f__B53B_01A5_0024_3A58(); return; }
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0x6), 0x0);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x01CC; emu_last_cs = 0xB53B; emu_last_ip = 0x01A3; emu_last_length = 0x0033; emu_last_crc = 0xF614; emu_call(); return; }
	emu_movb(&emu_al, emu_get_memory8(emu_ds, 0x00,  0x8280));
	emu_addb(&emu_al, 0x31);
	emu_movb(&emu_get_memory8(emu_ss, emu_bp, -0x1A), emu_al);
	emu_movb(&emu_get_memory8(emu_ss, emu_bp, -0x19), 0x0);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x1A);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6778));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6776));
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x01C9); emu_cs = 0x3536; emu_ip = 0x0039; emu_last_cs = 0xB53B; emu_last_ip = 0x01C4; emu_last_length = 0x0033; emu_last_crc = 0xF614; emu_call();
	f__B53B_01C9_0008_5201();
}

/**
 * Decompiled function f__B53B_01A5_0024_3A58()
 *
 * @name f__B53B_01A5_0024_3A58
 * @implements B53B:01A5:0024:3A58 ()
 *
 * Called From: B53B:019D:0033:F614
 */
void f__B53B_01A5_0024_3A58()
{
	emu_movb(&emu_al, emu_get_memory8(emu_ds, 0x00,  0x8280));
	emu_addb(&emu_al, 0x31);
	emu_movb(&emu_get_memory8(emu_ss, emu_bp, -0x1A), emu_al);
	emu_movb(&emu_get_memory8(emu_ss, emu_bp, -0x19), 0x0);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x1A);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6778));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6776));
	emu_push(emu_cs); emu_push(0x01C9); emu_cs = 0x3536; ovl__3536(5);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x353B) { ovl__353B(0xFF); }
	f__B53B_01C9_0008_5201();
}

/**
 * Decompiled function f__B53B_01C9_0008_5201()
 *
 * @name f__B53B_01C9_0008_5201
 * @implements B53B:01C9:0008:5201 ()
 *
 * Called From: B53B:01C9:0024:3A58
 */
void f__B53B_01C9_0008_5201()
{
	emu_addws(&emu_sp, 0xC);
	emu_push(emu_cs); emu_push(0x01D1); emu_cs = 0x29E8; emu_Input_History_Clear();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x353B) { ovl__353B(0xFF); }
	f__B53B_01D1_0005_B085();
}

/**
 * Decompiled function f__B53B_01D1_0005_B085()
 *
 * @name f__B53B_01D1_0005_B085
 * @implements B53B:01D1:0005:B085 ()
 *
 * Called From: B53B:01D1:0008:5201
 */
void f__B53B_01D1_0005_B085()
{
	emu_push(emu_cs); emu_push(0x01D6); emu_cs = 0x29E8; f__29E8_07FA_0020_177A();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x353B) { ovl__353B(0xFF); }
	/* Unresolved jump */ emu_ip = 0x01D6; emu_last_cs = 0xB53B; emu_last_ip = 0x01D6; emu_last_length = 0x0005; emu_last_crc = 0xB085; emu_call();
}

/**
 * Decompiled function f__B53B_0289_001F_95C1()
 *
 * @name f__B53B_0289_001F_95C1
 * @implements B53B:0289:001F:95C1 ()
 *
 * Called From: 353B:0020:0005:0000
 */
void f__B53B_0289_001F_95C1()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x2);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00,  0x6C91));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x6C91), 0x0);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x02A8); f__B53B_005C_000F_A920();
	/* Unresolved jump */ emu_ip = 0x02A8; emu_last_cs = 0xB53B; emu_last_ip = 0x02A8; emu_last_length = 0x001F; emu_last_crc = 0x95C1; emu_call();
}

/**
 * Decompiled function f__B53B_02ED_0019_AA57()
 *
 * @name f__B53B_02ED_0019_AA57
 * @implements B53B:02ED:0019:AA57 ()
 *
 * Called From: 353B:002F:0005:0000
 */
void f__B53B_02ED_0019_AA57()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6780));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x677E));
	emu_push(emu_cs); emu_push(0x0306); emu_cs = 0x01F7; f__01F7_2BC4_0019_3608();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x353B) { ovl__353B(0xFF); }
	f__B53B_0306_000D_8D50();
}

/**
 * Decompiled function f__B53B_0306_000D_8D50()
 *
 * @name f__B53B_0306_000D_8D50
 * @implements B53B:0306:000D:8D50 ()
 *
 * Called From: B53B:0306:0019:AA57
 */
void f__B53B_0306_000D_8D50()
{
	emu_addws(&emu_sp, 0xA);
	emu_movb(&emu_get_memory8(emu_ds, 0x00,  0x62F6), 0x0);
	emu_push(emu_cs); emu_push(0x0313); emu_cs = 0x3500; ovl__3500(0);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x353B) { ovl__353B(0xFF); }
	f__B53B_0313_0009_F157();
}

/**
 * Decompiled function f__B53B_0313_0009_F157()
 *
 * @name f__B53B_0313_0009_F157
 * @implements B53B:0313:0009:F157 ()
 *
 * Called From: B53B:0313:000D:8D50
 */
void f__B53B_0313_0009_F157()
{
	emu_movw(&emu_ax, 0x5);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x031C); emu_cs = 0x01F7; f__01F7_0377_000D_81BB();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x353B) { ovl__353B(0xFF); }
	/* Unresolved jump */ emu_ip = 0x031C; emu_last_cs = 0xB53B; emu_last_ip = 0x031C; emu_last_length = 0x0009; emu_last_crc = 0xF157; emu_call();
}

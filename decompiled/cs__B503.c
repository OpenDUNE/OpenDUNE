/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__B503_0000_0016_B170()
 *
 * @name f__B503_0000_0016_B170
 * @implements B503:0000:0016:B170 ()
 *
 * Called From: 3503:0020:0005:0000
 */
void f__B503_0000_0016_B170()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subw(&emu_sp, 0x316);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_si, emu_si);
	if (!emu_flags.zf) { f__B503_0016_0009_BCB2(); return; }
	emu_movw(&emu_ax.x, 0x1);
	f__B503_0580_0006_F7CE(); return;
}

/**
 * Decompiled function f__B503_0013_0003_9FBA()
 *
 * @name f__B503_0013_0003_9FBA
 * @implements B503:0013:0003:9FBA ()
 *
 * Called From: B503:057D:0008:378B
 */
void f__B503_0013_0003_9FBA()
{
	f__B503_0580_0006_F7CE(); return;
}

/**
 * Decompiled function f__B503_0016_0009_BCB2()
 *
 * @name f__B503_0016_0009_BCB2
 * @implements B503:0016:0009:BCB2 ()
 *
 * Called From: B503:000E:0016:B170
 */
void f__B503_0016_0009_BCB2()
{
	emu_movw(&emu_ax.x, 0xA);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x001F); emu_cs = 0x24FD; f__24FD_000A_000B_2043();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { ovl__3503(0xFF); }
	f__B503_001F_000A_C5EF();
}

/**
 * Decompiled function f__B503_001F_000A_C5EF()
 *
 * @name f__B503_001F_000A_C5EF
 * @implements B503:001F:000A:C5EF ()
 *
 * Called From: B503:001F:0009:BCB2
 */
void f__B503_001F_000A_C5EF()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_ax.x, 0x1D);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0029); emu_cs = 0x3483; ovl__3483(1);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { ovl__3503(0xFF); }
	f__B503_0029_0013_4B76();
}

/**
 * Decompiled function f__B503_0029_0013_4B76()
 *
 * @name f__B503_0029_0013_4B76
 * @implements B503:0029:0013:4B76 ()
 *
 * Called From: B503:0029:000A:C5EF
 */
void f__B503_0029_0013_4B76()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_ax.x, 0x300);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0x30A);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x003C); emu_cs = 0x01F7; f__01F7_2947_0014_02B8();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { ovl__3503(0xFF); }
	f__B503_003C_0011_AE34();
}

/**
 * Decompiled function f__B503_003C_0011_AE34()
 *
 * @name f__B503_003C_0011_AE34
 * @implements B503:003C:0011:AE34 ()
 *
 * Called From: B503:003C:0013:4B76
 */
void f__B503_003C_0011_AE34()
{
	emu_addws(&emu_sp, 0x8);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0x8), 0x0);
	if (emu_flags.zf) { emu_ip = 0x004D; emu_last_cs = 0xB503; emu_last_ip = 0x0043; emu_last_length = 0x0011; emu_last_crc = 0xAE34; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_si);
	emu_decw(&emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	f__B503_0050_000C_A435(); return;
}

/**
 * Decompiled function f__B503_0050_000C_A435()
 *
 * @name f__B503_0050_000C_A435
 * @implements B503:0050:000C:A435 ()
 *
 * Called From: B503:004B:0011:AE34
 */
void f__B503_0050_000C_A435()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_si);
	emu_movw(&emu_ax.x, 0x4);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x005C); emu_cs = 0x2598; f__2598_0000_0017_EB80();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { ovl__3503(0xFF); }
	f__B503_005C_0013_BF46();
}

/**
 * Decompiled function f__B503_005C_0013_BF46()
 *
 * @name f__B503_005C_0013_BF46
 * @implements B503:005C:0013:BF46 ()
 *
 * Called From: B503:005C:000C:A435
 */
void f__B503_005C_0013_BF46()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_ax.x);
	emu_movw(&emu_ax.x, 0xF);
	emu_push(emu_ax.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0x30A);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x006F); emu_cs = 0x259E; f__259E_0006_0016_858A();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { ovl__3503(0xFF); }
	f__B503_006F_0018_3CBB();
}

/**
 * Decompiled function f__B503_006F_0018_3CBB()
 *
 * @name f__B503_006F_0018_3CBB
 * @implements B503:006F:0018:3CBB ()
 *
 * Called From: B503:006F:0013:BF46
 */
void f__B503_006F_0018_3CBB()
{
	emu_addws(&emu_sp, 0x6);
	emu_movw(&emu_ax.x, 0x8F);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x137);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x18);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x8);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0087); emu_cs = 0x2B42; f__2B42_0000_0022_1DB2();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { ovl__3503(0xFF); }
	f__B503_0087_0010_58CB();
}

/**
 * Decompiled function f__B503_0087_0010_58CB()
 *
 * @name f__B503_0087_0010_58CB
 * @implements B503:0087:0010:58CB ()
 *
 * Called From: B503:0087:0018:3CBB
 */
void f__B503_0087_0010_58CB()
{
	emu_addws(&emu_sp, 0x8);
	emu_movw(&emu_ax.x, 0x54);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0xA0);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0097); emu_cs = 0x2B99; f__2B99_007B_0019_5737();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { ovl__3503(0xFF); }
	f__B503_0097_0020_07EE();
}

/**
 * Decompiled function f__B503_0097_0020_07EE()
 *
 * @name f__B503_0097_0020_07EE
 * @implements B503:0097:0020:07EE ()
 *
 * Called From: B503:0097:0010:58CB
 */
void f__B503_0097_0020_07EE()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x6674));
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x6676));
	emu_movw(&emu_ax.x, 0x5);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x5);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x2B12);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x00B7); emu_cs = 0x34CA; ovl__34CA(0);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { ovl__3503(0xFF); }
	f__B503_00B7_0022_934B();
}

/**
 * Decompiled function f__B503_00B7_0022_934B()
 *
 * @name f__B503_00B7_0022_934B
 * @implements B503:00B7:0022:934B ()
 *
 * Called From: B503:00B7:0020:07EE
 */
void f__B503_00B7_0022_934B()
{
	emu_addws(&emu_sp, 0xE);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3C44));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3C42));
	emu_movw(&emu_ax.x, 0x5);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0xC8);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x140);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x00D9); emu_cs = 0x2BB6; f__2BB6_004F_0014_AB2C();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { ovl__3503(0xFF); }
	f__B503_00D9_001B_7075();
}

/**
 * Decompiled function f__B503_00D9_001B_7075()
 *
 * @name f__B503_00D9_001B_7075
 * @implements B503:00D9:001B:7075 ()
 *
 * Called From: B503:00D9:0022:934B
 */
void f__B503_00D9_001B_7075()
{
	emu_addws(&emu_sp, 0xE);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_movw(&emu_ax.x, 0x4);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x5);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x353F);
	emu_movw(&emu_es, emu_ax.x);

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_es, 0x00,  0x6630);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_es, 0x00,  0x6632);
	emu_push(0x00F4);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A604A5: f__22A6_04A5_000F_3B8F(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0xB503; emu_last_ip = 0x00EF; emu_last_length = 0x001B; emu_last_crc = 0x7075;
			emu_call();
			return;
	}
	f__B503_00F4_001D_A0E4();
}

/**
 * Decompiled function f__B503_00F4_001D_A0E4()
 *
 * @name f__B503_00F4_001D_A0E4
 * @implements B503:00F4:001D:A0E4 ()
 *
 * Called From: B503:00F4:001B:7075
 */
void f__B503_00F4_001D_A0E4()
{
	emu_addws(&emu_sp, 0x8);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax.x);
	emu_movw(&emu_di, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3A38));
	emu_orw(&emu_ax.x, emu_ax.x);
	if (emu_flags.zf) { f__B503_0111_0009_26E5(); return; }
	emu_cmpw(&emu_ax.x, 0x1);
	if (emu_flags.zf) { f__B503_011A_0005_AFC0(); return; }
	emu_cmpw(&emu_ax.x, 0x2);
	if (emu_flags.zf) { f__B503_011F_000A_F1B4(); return; }
	emu_ip = 0x011A; emu_last_cs = 0xB503; emu_last_ip = 0x010F; emu_last_length = 0x001D; emu_last_crc = 0xA0E4; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B503_0111_0009_26E5()
 *
 * @name f__B503_0111_0009_26E5
 * @implements B503:0111:0009:26E5 ()
 *
 * Called From: B503:0103:001D:A0E4
 */
void f__B503_0111_0009_26E5()
{
	emu_xorw(&emu_di, emu_di);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x98);
	f__B503_0129_001A_AA1B(); return;
}

/**
 * Decompiled function f__B503_0113_0007_59FC()
 *
 * @name f__B503_0113_0007_59FC
 * @implements B503:0113:0007:59FC ()
 *
 * Called From: B503:011D:0005:AFC0
 */
void f__B503_0113_0007_59FC()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x98);
	f__B503_0129_001A_AA1B(); return;
}

/**
 * Decompiled function f__B503_011A_0005_AFC0()
 *
 * @name f__B503_011A_0005_AFC0
 * @implements B503:011A:0005:AFC0 ()
 *
 * Called From: B503:0108:001D:A0E4
 */
void f__B503_011A_0005_AFC0()
{
	emu_movw(&emu_di, 0x21);
	f__B503_0113_0007_59FC(); return;
}

/**
 * Decompiled function f__B503_011F_000A_F1B4()
 *
 * @name f__B503_011F_000A_F1B4
 * @implements B503:011F:000A:F1B4 ()
 *
 * Called From: B503:010D:001D:A0E4
 */
void f__B503_011F_000A_F1B4()
{
	emu_movw(&emu_di, 0x1);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x18);
	f__B503_0129_001A_AA1B(); return;
}

/**
 * Decompiled function f__B503_0129_001A_AA1B()
 *
 * @name f__B503_0129_001A_AA1B
 * @implements B503:0129:001A:AA1B ()
 *
 * Called From: B503:0118:0009:26E5
 * Called From: B503:0118:0007:59FC
 * Called From: B503:0127:000A:F1B4
 */
void f__B503_0129_001A_AA1B()
{
	emu_movw(&emu_ax.x, 0xC);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3C32));
	emu_addw(&emu_ax.x, 0x2F1);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3C34));
	emu_push(emu_ax.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0x316);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0143); emu_cs = 0x01F7; f__01F7_28B8_0024_83C9();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { ovl__3503(0xFF); }
	f__B503_0143_002B_640D();
}

/**
 * Decompiled function f__B503_0143_002B_640D()
 *
 * @name f__B503_0143_002B_640D
 * @implements B503:0143:002B:640D ()
 *
 * Called From: B503:0143:001A:AA1B
 */
void f__B503_0143_002B_640D()
{
	emu_addws(&emu_sp, 0xA);
	emu_movw(&emu_ax.x, 0xC);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3A38));
	emu_movb(&emu_cx.l, 0x4);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_addw(&emu_ax.x, 0x90);
	emu_movw(&emu_dx.x, 0x3);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x3C32));
	emu_addw(&emu_dx.x, emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3C34));
	emu_push(emu_dx.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x81BA);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x016E); emu_cs = 0x01F7; f__01F7_28B8_0024_83C9();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { ovl__3503(0xFF); }
	f__B503_016E_0016_9A37();
}

/**
 * Decompiled function f__B503_016E_0016_9A37()
 *
 * @name f__B503_016E_0016_9A37
 * @implements B503:016E:0016:9A37 ()
 *
 * Called From: B503:016E:002B:640D
 */
void f__B503_016E_0016_9A37()
{
	emu_addws(&emu_sp, 0xA);
	emu_movw(&emu_ax.x, 0xC);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x81BA);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x81C6);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0184); emu_cs = 0x01F7; f__01F7_28B8_0024_83C9();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { ovl__3503(0xFF); }
	f__B503_0184_0023_CE81();
}

/**
 * Decompiled function f__B503_0184_0023_CE81()
 *
 * @name f__B503_0184_0023_CE81
 * @implements B503:0184:0023:CE81 ()
 *
 * Called From: B503:0184:0016:9A37
 */
void f__B503_0184_0023_CE81()
{
	emu_addws(&emu_sp, 0xA);
	emu_movw(&emu_ax.x, 0x4);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x4);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x28);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x7);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x98);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x01A7); emu_cs = 0x24D0; f__24D0_000D_0039_C17D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { ovl__3503(0xFF); }
	f__B503_01A7_0024_5AA3();
}

/**
 * Decompiled function f__B503_01A7_0024_5AA3()
 *
 * @name f__B503_01A7_0024_5AA3
 * @implements B503:01A7:0024:5AA3 ()
 *
 * Called From: B503:01A7:0023:CE81
 */
void f__B503_01A7_0024_5AA3()
{
	emu_addws(&emu_sp, 0x10);
	emu_movw(&emu_ax.x, 0x4);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x4);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x28);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x7);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x98);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x21);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x01CB); emu_cs = 0x24D0; f__24D0_000D_0039_C17D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { ovl__3503(0xFF); }
	f__B503_01CB_0012_E385();
}

/**
 * Decompiled function f__B503_01CB_0012_E385()
 *
 * @name f__B503_01CB_0012_E385
 * @implements B503:01CB:0012:E385 ()
 *
 * Called From: B503:01CB:0024:5AA3
 */
void f__B503_01CB_0012_E385()
{
	emu_addws(&emu_sp, 0x10);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x37B6));
	emu_cmpw(&emu_ax.x, 0x1);
	if (emu_flags.zf) { emu_ip = 0x0206; emu_last_cs = 0xB503; emu_last_ip = 0x01D4; emu_last_length = 0x0012; emu_last_crc = 0xE385; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_ax.x, 0x2);
	if (emu_flags.zf) { emu_ip = 0x01DD; emu_last_cs = 0xB503; emu_last_ip = 0x01D9; emu_last_length = 0x0012; emu_last_crc = 0xE385; emu_call(); return; } // Jump does not resolve
	f__B503_0222_0002_C03A(); return;
}

/**
 * Decompiled function f__B503_0222_0002_C03A()
 *
 * @name f__B503_0222_0002_C03A
 * @implements B503:0222:0002:C03A ()
 *
 * Called From: B503:01DB:0012:E385
 */
void f__B503_0222_0002_C03A()
{
	f__B503_0224_001E_8296(); return;
}

/**
 * Decompiled function f__B503_0224_001E_8296()
 *
 * @name f__B503_0224_001E_8296
 * @implements B503:0224:001E:8296 ()
 *
 * Called From: B503:0222:0002:C03A
 */
void f__B503_0224_001E_8296()
{
	emu_movw(&emu_ax.x, 0xC);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x8F);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x137);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x18);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x8);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x353F);
	emu_movw(&emu_es, emu_ax.x);

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_es, 0x00,  0x6668);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_es, 0x00,  0x666A);
	emu_push(0x0242);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A60D31: f__22A6_0D31_0015_A4C3(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0xB503; emu_last_ip = 0x023D; emu_last_length = 0x001E; emu_last_crc = 0x8296;
			emu_call();
			return;
	}
	f__B503_0242_0008_CBE0();
}

/**
 * Decompiled function f__B503_0242_0008_CBE0()
 *
 * @name f__B503_0242_0008_CBE0
 * @implements B503:0242:0008:CBE0 ()
 *
 * Called From: B503:0242:001E:8296
 */
void f__B503_0242_0008_CBE0()
{
	emu_addws(&emu_sp, 0xA);
	emu_push(emu_cs); emu_push(0x024A); emu_cs = 0x2B6C; f__2B6C_0137_0020_C73F();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { ovl__3503(0xFF); }
	f__B503_024A_0020_007D();
}

/**
 * Decompiled function f__B503_024A_0020_007D()
 *
 * @name f__B503_024A_0020_007D
 * @implements B503:024A:0020:007D ()
 *
 * Called From: B503:024A:0008:CBE0
 */
void f__B503_024A_0020_007D()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x4);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0xC8);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x28);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x026A); emu_cs = 0x24D0; f__24D0_000D_0039_C17D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { ovl__3503(0xFF); }
	f__B503_026A_0014_B1CE();
}

/**
 * Decompiled function f__B503_026A_0014_B1CE()
 *
 * @name f__B503_026A_0014_B1CE
 * @implements B503:026A:0014:B1CE ()
 *
 * Called From: B503:026A:0020:007D
 */
void f__B503_026A_0014_B1CE()
{
	emu_addws(&emu_sp, 0x10);
	emu_movw(&emu_ax.x, 0xF);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3C34));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3C32));
	emu_push(emu_cs); emu_push(0x027E); emu_cs = 0x259E; f__259E_0006_0016_858A();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { ovl__3503(0xFF); }
	f__B503_027E_0008_7A01();
}

/**
 * Decompiled function f__B503_027E_0008_7A01()
 *
 * @name f__B503_027E_0008_7A01
 * @implements B503:027E:0008:7A01 ()
 *
 * Called From: B503:027E:0014:B1CE
 */
void f__B503_027E_0008_7A01()
{
	emu_addws(&emu_sp, 0x6);
	emu_push(emu_cs); emu_push(0x0286); emu_cs = 0x29E8; f__29E8_073F_000E_6816();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { ovl__3503(0xFF); }
	f__B503_0286_000F_B642();
}

/**
 * Decompiled function f__B503_0286_000F_B642()
 *
 * @name f__B503_0286_000F_B642
 * @implements B503:0286:000F:B642 ()
 *
 * Called From: B503:0286:0008:7A01
 */
void f__B503_0286_000F_B642()
{
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x7E4C), 0x0);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0x8), 0x0);
	if (!emu_flags.zf) { f__B503_0295_0008_E8E9(); return; }
	emu_ip = 0x03F2; emu_last_cs = 0xB503; emu_last_ip = 0x0292; emu_last_length = 0x000F; emu_last_crc = 0xB642; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B503_0295_0008_E8E9()
 *
 * @name f__B503_0295_0008_E8E9
 * @implements B503:0295:0008:E8E9 ()
 *
 * Called From: B503:0290:000F:B642
 */
void f__B503_0295_0008_E8E9()
{
	emu_cmpws(&emu_si, 0x1);
	if (emu_flags.zf) { f__B503_029D_001E_8AB7(); return; }
	emu_ip = 0x03F2; emu_last_cs = 0xB503; emu_last_ip = 0x029A; emu_last_length = 0x0008; emu_last_crc = 0xE8E9; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B503_029D_001E_8AB7()
 *
 * @name f__B503_029D_001E_8AB7
 * @implements B503:029D:001E:8AB7 ()
 *
 * Called From: B503:0298:0008:E8E9
 */
void f__B503_029D_001E_8AB7()
{
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x6674));
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x6676));
	emu_movw(&emu_ax.x, 0x3);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x3);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x2B1E);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x02BB); emu_cs = 0x34CA; ovl__34CA(0);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { ovl__3503(0xFF); }
	f__B503_02BB_001B_4375();
}

/**
 * Decompiled function f__B503_02BB_001B_4375()
 *
 * @name f__B503_02BB_001B_4375
 * @implements B503:02BB:001B:4375 ()
 *
 * Called From: B503:02BB:001E:8AB7
 */
void f__B503_02BB_001B_4375()
{
	emu_addws(&emu_sp, 0xE);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x3);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x353F);
	emu_movw(&emu_es, emu_ax.x);

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_es, 0x00,  0x6630);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_es, 0x00,  0x6632);
	emu_push(0x02D6);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A604A5: f__22A6_04A5_000F_3B8F(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0xB503; emu_last_ip = 0x02D1; emu_last_length = 0x001B; emu_last_crc = 0x4375;
			emu_call();
			return;
	}
	f__B503_02D6_000C_E210();
}

/**
 * Decompiled function f__B503_02D6_000C_E210()
 *
 * @name f__B503_02D6_000C_E210
 * @implements B503:02D6:000C:E210 ()
 *
 * Called From: B503:02D6:001B:4375
 */
void f__B503_02D6_000C_E210()
{
	emu_addws(&emu_sp, 0x8);
	emu_movw(&emu_ax.x, 0x11B);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x02E2); emu_cs = 0x0FCB; f__0FCB_005F_001C_FDC4();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { ovl__3503(0xFF); }
	f__B503_02E2_0008_662D();
}

/**
 * Decompiled function f__B503_02E2_0008_662D()
 *
 * @name f__B503_02E2_0008_662D
 * @implements B503:02E2:0008:662D ()
 *
 * Called From: B503:02E2:000C:E210
 */
void f__B503_02E2_0008_662D()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x02EA); f__B503_0F0C_0010_028B();
	f__B503_02EA_0024_D285();
}

/**
 * Decompiled function f__B503_02EA_0024_D285()
 *
 * @name f__B503_02EA_0024_D285
 * @implements B503:02EA:0024:D285 ()
 *
 * Called From: B503:02EA:0008:662D
 */
void f__B503_02EA_0024_D285()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x78);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x130);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x18);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x8);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x030E); emu_cs = 0x3488; ovl__3488(0);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { ovl__3503(0xFF); }
	f__B503_030E_0008_2201();
}

/**
 * Decompiled function f__B503_030E_0008_2201()
 *
 * @name f__B503_030E_0008_2201
 * @implements B503:030E:0008:2201 ()
 *
 * Called From: B503:030E:0024:D285
 */
void f__B503_030E_0008_2201()
{
	emu_addws(&emu_sp, 0x10);
	emu_push(emu_cs); emu_push(0x0316); emu_cs = 0x29E8; f__29E8_073F_000E_6816();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { ovl__3503(0xFF); }
	f__B503_0316_0011_E66D();
}

/**
 * Decompiled function f__B503_0316_0011_E66D()
 *
 * @name f__B503_0316_0011_E66D
 * @implements B503:0316:0011:E66D ()
 *
 * Called From: B503:0316:0008:2201
 */
void f__B503_0316_0011_E66D()
{
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x76B6), 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x76B4), 0x78);
	emu_push(emu_cs);
	emu_push(0x0327); f__B503_1029_000F_8100();
	f__B503_0327_0002_C03A();
}

/**
 * Decompiled function f__B503_0327_0002_C03A()
 *
 * @name f__B503_0327_0002_C03A
 * @implements B503:0327:0002:C03A ()
 *
 * Called From: B503:0327:0011:E66D
 */
void f__B503_0327_0002_C03A()
{
	f__B503_0329_000E_A771(); return;
}

/**
 * Decompiled function f__B503_0329_000E_A771()
 *
 * @name f__B503_0329_000E_A771
 * @implements B503:0329:000E:A771 ()
 *
 * Called From: B503:0327:0002:C03A
 * Called From: B503:0339:0022:C1C0
 */
void f__B503_0329_000E_A771()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76B4));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76B6));
	if (emu_flags.zf) { f__B503_033B_001E_BDB7(); return; }
	emu_push(emu_cs);
	emu_push(0x0337); f__B503_13C2_0008_C4BB();
	f__B503_0337_0022_C1C0();
}

/**
 * Decompiled function f__B503_0337_0022_C1C0()
 *
 * @name f__B503_0337_0022_C1C0
 * @implements B503:0337:0022:C1C0 ()
 *
 * Called From: B503:0337:000E:A771
 */
void f__B503_0337_0022_C1C0()
{
	emu_orw(&emu_ax.x, emu_ax.x);
	if (emu_flags.zf) { f__B503_0329_000E_A771(); return; }
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x6674));
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x6676));
	emu_movw(&emu_ax.x, 0x3);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x3);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x2B29);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0359); emu_cs = 0x34CA; emu_ip = 0x0379; emu_last_cs = 0xB503; emu_last_ip = 0x0354; emu_last_length = 0x0022; emu_last_crc = 0xC1C0; emu_call(); // Jump does not resolve
	f__B503_0359_001B_4375();
}

/**
 * Decompiled function f__B503_033B_001E_BDB7()
 *
 * @name f__B503_033B_001E_BDB7
 * @implements B503:033B:001E:BDB7 ()
 *
 * Called From: B503:0330:000E:A771
 */
void f__B503_033B_001E_BDB7()
{
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x6674));
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x6676));
	emu_movw(&emu_ax.x, 0x3);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x3);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x2B29);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0359); emu_cs = 0x34CA; ovl__34CA(0);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { ovl__3503(0xFF); }
	f__B503_0359_001B_4375();
}

/**
 * Decompiled function f__B503_0359_001B_4375()
 *
 * @name f__B503_0359_001B_4375
 * @implements B503:0359:001B:4375 ()
 *
 * Called From: B503:0359:001E:BDB7
 */
void f__B503_0359_001B_4375()
{
	emu_addws(&emu_sp, 0xE);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x3);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x353F);
	emu_movw(&emu_es, emu_ax.x);

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_es, 0x00,  0x6630);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_es, 0x00,  0x6632);
	emu_push(0x0374);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A604A5: f__22A6_04A5_000F_3B8F(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0xB503; emu_last_ip = 0x036F; emu_last_length = 0x001B; emu_last_crc = 0x4375;
			emu_call();
			return;
	}
	f__B503_0374_000C_E510();
}

/**
 * Decompiled function f__B503_0374_000C_E510()
 *
 * @name f__B503_0374_000C_E510
 * @implements B503:0374:000C:E510 ()
 *
 * Called From: B503:0374:001B:4375
 */
void f__B503_0374_000C_E510()
{
	emu_addws(&emu_sp, 0x8);
	emu_movw(&emu_ax.x, 0x11C);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0380); emu_cs = 0x0FCB; f__0FCB_005F_001C_FDC4();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { ovl__3503(0xFF); }
	f__B503_0380_0008_E584();
}

/**
 * Decompiled function f__B503_0380_0008_E584()
 *
 * @name f__B503_0380_0008_E584
 * @implements B503:0380:0008:E584 ()
 *
 * Called From: B503:0380:000C:E510
 */
void f__B503_0380_0008_E584()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x0388); f__B503_0F0C_0010_028B();
	f__B503_0388_000A_1561();
}

/**
 * Decompiled function f__B503_0388_000A_1561()
 *
 * @name f__B503_0388_000A_1561
 * @implements B503:0388:000A:1561 ()
 *
 * Called From: B503:0388:0008:E584
 */
void f__B503_0388_000A_1561()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x0392); f__B503_13C2_0008_C4BB();
	f__B503_0392_0008_3318();
}

/**
 * Decompiled function f__B503_0392_0008_3318()
 *
 * @name f__B503_0392_0008_3318
 * @implements B503:0392:0008:3318 ()
 *
 * Called From: B503:0392:000A:1561
 */
void f__B503_0392_0008_3318()
{
	emu_orw(&emu_ax.x, emu_ax.x);
	if (emu_flags.zf) { f__B503_039A_0020_8E44(); return; }
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_ip = 0x039D; emu_last_cs = 0xB503; emu_last_ip = 0x0398; emu_last_length = 0x0008; emu_last_crc = 0x3318; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B503_039A_0020_8E44()
 *
 * @name f__B503_039A_0020_8E44
 * @implements B503:039A:0020:8E44 ()
 *
 * Called From: B503:0394:0008:3318
 */
void f__B503_039A_0020_8E44()
{
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x78);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x130);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x18);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x8);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x03BA); emu_cs = 0x3488; ovl__3488(0);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { ovl__3503(0xFF); }
	f__B503_03BA_0011_8DB1();
}

/**
 * Decompiled function f__B503_03BA_0011_8DB1()
 *
 * @name f__B503_03BA_0011_8DB1
 * @implements B503:03BA:0011:8DB1 ()
 *
 * Called From: B503:03BA:0020:8E44
 */
void f__B503_03BA_0011_8DB1()
{
	emu_addws(&emu_sp, 0x10);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x76B6), 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x76B4), 0x3C);
	f__B503_03CB_000E_28E9(); return;
}

/**
 * Decompiled function f__B503_03CB_000E_28E9()
 *
 * @name f__B503_03CB_000E_28E9
 * @implements B503:03CB:000E:28E9 ()
 *
 * Called From: B503:03C9:0011:8DB1
 * Called From: B503:03DB:000D:81B6
 */
void f__B503_03CB_000E_28E9()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76B4));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76B6));
	if (emu_flags.zf) { f__B503_03DD_0009_6E38(); return; }
	emu_push(emu_cs);
	emu_push(0x03D9); f__B503_13C2_0008_C4BB();
	f__B503_03D9_000D_81B6();
}

/**
 * Decompiled function f__B503_03D9_000D_81B6()
 *
 * @name f__B503_03D9_000D_81B6
 * @implements B503:03D9:000D:81B6 ()
 *
 * Called From: B503:03D9:000E:28E9
 */
void f__B503_03D9_000D_81B6()
{
	emu_orw(&emu_ax.x, emu_ax.x);
	if (emu_flags.zf) { f__B503_03CB_000E_28E9(); return; }
	emu_movw(&emu_ax.x, 0x11D);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x03E6); emu_cs = 0x0FCB; emu_ip = 0x0445; emu_last_cs = 0xB503; emu_last_ip = 0x03E1; emu_last_length = 0x000D; emu_last_crc = 0x81B6; emu_call(); // Jump does not resolve
	f__B503_03E6_0008_65A2();
}

/**
 * Decompiled function f__B503_03DD_0009_6E38()
 *
 * @name f__B503_03DD_0009_6E38
 * @implements B503:03DD:0009:6E38 ()
 *
 * Called From: B503:03D2:000E:28E9
 */
void f__B503_03DD_0009_6E38()
{
	emu_movw(&emu_ax.x, 0x11D);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x03E6); emu_cs = 0x0FCB; f__0FCB_005F_001C_FDC4();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { ovl__3503(0xFF); }
	f__B503_03E6_0008_65A2();
}

/**
 * Decompiled function f__B503_03E6_0008_65A2()
 *
 * @name f__B503_03E6_0008_65A2
 * @implements B503:03E6:0008:65A2 ()
 *
 * Called From: B503:03E6:0009:6E38
 */
void f__B503_03E6_0008_65A2()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x03EE); f__B503_0F0C_0010_028B();
	f__B503_03EE_0004_599F();
}

/**
 * Decompiled function f__B503_03EE_0004_599F()
 *
 * @name f__B503_03EE_0004_599F
 * @implements B503:03EE:0004:599F ()
 *
 * Called From: B503:03EE:0008:65A2
 */
void f__B503_03EE_0004_599F()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	f__B503_03F7_001E_A1B7(); return;
}

/**
 * Decompiled function f__B503_03F7_001E_A1B7()
 *
 * @name f__B503_03F7_001E_A1B7
 * @implements B503:03F7:001E:A1B7 ()
 *
 * Called From: B503:03F0:0004:599F
 */
void f__B503_03F7_001E_A1B7()
{
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x6674));
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x6676));
	emu_movw(&emu_ax.x, 0x3);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x3);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x2B35);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0415); emu_cs = 0x34CA; ovl__34CA(0);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { ovl__3503(0xFF); }
	f__B503_0415_001B_4375();
}

/**
 * Decompiled function f__B503_0415_001B_4375()
 *
 * @name f__B503_0415_001B_4375
 * @implements B503:0415:001B:4375 ()
 *
 * Called From: B503:0415:001E:A1B7
 */
void f__B503_0415_001B_4375()
{
	emu_addws(&emu_sp, 0xE);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x3);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x353F);
	emu_movw(&emu_es, emu_ax.x);

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_es, 0x00,  0x6630);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_es, 0x00,  0x6632);
	emu_push(0x0430);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A604A5: f__22A6_04A5_000F_3B8F(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0xB503; emu_last_ip = 0x042B; emu_last_length = 0x001B; emu_last_crc = 0x4375;
			emu_call();
			return;
	}
	f__B503_0430_000C_DE03();
}

/**
 * Decompiled function f__B503_0430_000C_DE03()
 *
 * @name f__B503_0430_000C_DE03
 * @implements B503:0430:000C:DE03 ()
 *
 * Called From: B503:0430:001B:4375
 */
void f__B503_0430_000C_DE03()
{
	emu_addws(&emu_sp, 0x8);
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x043C); emu_cs = 0x2598; f__2598_0000_0017_EB80();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { ovl__3503(0xFF); }
	f__B503_043C_0009_B5CB();
}

/**
 * Decompiled function f__B503_043C_0009_B5CB()
 *
 * @name f__B503_043C_0009_B5CB
 * @implements B503:043C:0009:B5CB ()
 *
 * Called From: B503:043C:000C:DE03
 */
void f__B503_043C_0009_B5CB()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs);
	emu_push(0x0445); f__B503_0B68_000D_957E();
	f__B503_0445_0006_5A1C();
}

/**
 * Decompiled function f__B503_0445_0006_5A1C()
 *
 * @name f__B503_0445_0006_5A1C
 * @implements B503:0445:0006:5A1C ()
 *
 * Called From: B503:0445:0009:B5CB
 */
void f__B503_0445_0006_5A1C()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_cs);
	emu_push(0x044B); f__B503_13C2_0008_C4BB();
	f__B503_044B_0028_9194();
}

/**
 * Decompiled function f__B503_044B_0028_9194()
 *
 * @name f__B503_044B_0028_9194
 * @implements B503:044B:0028:9194 ()
 *
 * Called From: B503:044B:0006:5A1C
 */
void f__B503_044B_0028_9194()
{
	emu_orw(&emu_ax.x, emu_ax.x);
	if (emu_flags.zf) { f__B503_0475_0022_49A0(); return; }
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x78);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x26);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x18);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x18);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0473); emu_cs = 0x24D0; emu_ip = 0x0480; emu_last_cs = 0xB503; emu_last_ip = 0x046E; emu_last_length = 0x0028; emu_last_crc = 0x9194; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__B503_0475_0022_49A0()
 *
 * @name f__B503_0475_0022_49A0
 * @implements B503:0475:0022:49A0 ()
 *
 * Called From: B503:044D:0028:9194
 */
void f__B503_0475_0022_49A0()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x78);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x130);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x18);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x8);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0497); emu_cs = 0x3488; ovl__3488(0);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { ovl__3503(0xFF); }
	f__B503_0497_0023_DE89();
}

/**
 * Decompiled function f__B503_0497_0023_DE89()
 *
 * @name f__B503_0497_0023_DE89
 * @implements B503:0497:0023:DE89 ()
 *
 * Called From: B503:0497:0022:49A0
 */
void f__B503_0497_0023_DE89()
{
	emu_addws(&emu_sp, 0x10);
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0xC8);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x28);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x04BA); emu_cs = 0x24D0; f__24D0_000D_0039_C17D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { ovl__3503(0xFF); }
	f__B503_04BA_0013_3B9E();
}

/**
 * Decompiled function f__B503_04BA_0013_3B9E()
 *
 * @name f__B503_04BA_0013_3B9E
 * @implements B503:04BA:0013:3B9E ()
 *
 * Called From: B503:04BA:0023:DE89
 */
void f__B503_04BA_0013_3B9E()
{
	emu_addws(&emu_sp, 0x10);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	if (emu_flags.zf) { emu_ip = 0x04CE; emu_last_cs = 0xB503; emu_last_ip = 0x04C3; emu_last_length = 0x0013; emu_last_crc = 0x3B9E; emu_call(); return; } // Jump does not resolve
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_cs);
	emu_push(0x04CD); f__B503_0CB3_001A_FEEE();
	f__B503_04CD_0006_E56C();
}

/**
 * Decompiled function f__B503_04CD_0006_E56C()
 *
 * @name f__B503_04CD_0006_E56C
 * @implements B503:04CD:0006:E56C ()
 *
 * Called From: B503:04CD:0013:3B9E
 */
void f__B503_04CD_0006_E56C()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_cs); emu_push(0x04D3); emu_cs = 0x2B6C; f__2B6C_0169_001E_6939();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { ovl__3503(0xFF); }
	f__B503_04D3_0012_2CFC();
}

/**
 * Decompiled function f__B503_04D3_0012_2CFC()
 *
 * @name f__B503_04D3_0012_2CFC
 * @implements B503:04D3:0012:2CFC ()
 *
 * Called From: B503:04D3:0006:E56C
 */
void f__B503_04D3_0012_2CFC()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x7E2E));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx.x,  0x0), emu_si);
	if ((emu_flags.sf != emu_flags.of)) { emu_ip = 0x04FB; emu_last_cs = 0xB503; emu_last_ip = 0x04DA; emu_last_length = 0x0012; emu_last_crc = 0x2CFC; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, 0x11E);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x04E5); emu_cs = 0x0FCB; f__0FCB_005F_001C_FDC4();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { ovl__3503(0xFF); }
	f__B503_04E5_0008_2522();
}

/**
 * Decompiled function f__B503_04E5_0008_2522()
 *
 * @name f__B503_04E5_0008_2522
 * @implements B503:04E5:0008:2522 ()
 *
 * Called From: B503:04E5:0012:2CFC
 */
void f__B503_04E5_0008_2522()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x04ED); f__B503_0F0C_0010_028B();
	f__B503_04ED_0008_B817();
}

/**
 * Decompiled function f__B503_04ED_0008_B817()
 *
 * @name f__B503_04ED_0008_B817
 * @implements B503:04ED:0008:B817 ()
 *
 * Called From: B503:04ED:0008:2522
 */
void f__B503_04ED_0008_B817()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_push(emu_si);
	emu_push(emu_cs);
	emu_push(0x04F5); f__B503_0586_0017_050A();
	f__B503_04F5_0006_DD37();
}

/**
 * Decompiled function f__B503_04F5_0006_DD37()
 *
 * @name f__B503_04F5_0006_DD37
 * @implements B503:04F5:0006:DD37 ()
 *
 * Called From: B503:04F5:0008:B817
 */
void f__B503_04F5_0006_DD37()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	f__B503_0500_0005_FB00(); return;
}

/**
 * Decompiled function f__B503_0500_0005_FB00()
 *
 * @name f__B503_0500_0005_FB00
 * @implements B503:0500:0005:FB00 ()
 *
 * Called From: B503:04F9:0006:DD37
 */
void f__B503_0500_0005_FB00()
{
	emu_push(emu_cs); emu_push(0x0505); emu_cs = 0x1DD7; f__1DD7_0B53_0025_36F7();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { ovl__3503(0xFF); }
	f__B503_0505_0008_3199();
}

/**
 * Decompiled function f__B503_0505_0008_3199()
 *
 * @name f__B503_0505_0008_3199
 * @implements B503:0505:0008:3199 ()
 *
 * Called From: B503:0505:0005:FB00
 */
void f__B503_0505_0008_3199()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_cs); emu_push(0x050D); emu_cs = 0x2598; f__2598_0000_0017_EB80();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { ovl__3503(0xFF); }
	f__B503_050D_0014_8976();
}

/**
 * Decompiled function f__B503_050D_0014_8976()
 *
 * @name f__B503_050D_0014_8976
 * @implements B503:050D:0014:8976 ()
 *
 * Called From: B503:050D:0008:3199
 */
void f__B503_050D_0014_8976()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_ax.x, 0xC7);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x13F);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0521); emu_cs = 0x2B42; f__2B42_0000_0022_1DB2();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { ovl__3503(0xFF); }
	f__B503_0521_0008_4201();
}

/**
 * Decompiled function f__B503_0521_0008_4201()
 *
 * @name f__B503_0521_0008_4201
 * @implements B503:0521:0008:4201 ()
 *
 * Called From: B503:0521:0014:8976
 */
void f__B503_0521_0008_4201()
{
	emu_addws(&emu_sp, 0x8);
	emu_push(emu_cs); emu_push(0x0529); emu_cs = 0x29E8; f__29E8_073F_000E_6816();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { ovl__3503(0xFF); }
	f__B503_0529_001A_2E3C();
}

/**
 * Decompiled function f__B503_0529_001A_2E3C()
 *
 * @name f__B503_0529_001A_2E3C
 * @implements B503:0529:001A:2E3C ()
 *
 * Called From: B503:0529:0008:4201
 */
void f__B503_0529_001A_2E3C()
{
	emu_movw(&emu_ax.x, 0xC);
	emu_push(emu_ax.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0x316);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3C32));
	emu_addw(&emu_ax.x, 0x2F1);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3C34));
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0543); emu_cs = 0x01F7; f__01F7_28B8_0024_83C9();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { ovl__3503(0xFF); }
	f__B503_0543_0012_7598();
}

/**
 * Decompiled function f__B503_0543_0012_7598()
 *
 * @name f__B503_0543_0012_7598
 * @implements B503:0543:0012:7598 ()
 *
 * Called From: B503:0543:001A:2E3C
 */
void f__B503_0543_0012_7598()
{
	emu_addws(&emu_sp, 0xA);
	emu_movw(&emu_ax.x, 0xF);
	emu_push(emu_ax.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0x30A);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0555); emu_cs = 0x259E; f__259E_0006_0016_858A();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { ovl__3503(0xFF); }
	f__B503_0555_0008_FBE0();
}

/**
 * Decompiled function f__B503_0555_0008_FBE0()
 *
 * @name f__B503_0555_0008_FBE0
 * @implements B503:0555:0008:FBE0 ()
 *
 * Called From: B503:0555:0012:7598
 */
void f__B503_0555_0008_FBE0()
{
	emu_addws(&emu_sp, 0x6);
	emu_push(emu_cs); emu_push(0x055D); emu_cs = 0x2B6C; f__2B6C_0137_0020_C73F();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { ovl__3503(0xFF); }
	f__B503_055D_0008_A467();
}

/**
 * Decompiled function f__B503_055D_0008_A467()
 *
 * @name f__B503_055D_0008_A467
 * @implements B503:055D:0008:A467 ()
 *
 * Called From: B503:055D:0008:FBE0
 */
void f__B503_055D_0008_A467()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0565); emu_cs = 0x24DA; f__24DA_0004_000E_FD1B();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { ovl__3503(0xFF); }
	f__B503_0565_0006_E56C();
}

/**
 * Decompiled function f__B503_0565_0006_E56C()
 *
 * @name f__B503_0565_0006_E56C
 * @implements B503:0565:0006:E56C ()
 *
 * Called From: B503:0565:0008:A467
 */
void f__B503_0565_0006_E56C()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_cs); emu_push(0x056B); emu_cs = 0x2B6C; f__2B6C_0169_001E_6939();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { ovl__3503(0xFF); }
	f__B503_056B_000D_A409();
}

/**
 * Decompiled function f__B503_056B_000D_A409()
 *
 * @name f__B503_056B_000D_A409
 * @implements B503:056B:000D:A409 ()
 *
 * Called From: B503:056B:0006:E56C
 */
void f__B503_056B_000D_A409()
{
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3C34));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3C32));
	emu_push(emu_cs); emu_push(0x0578); emu_cs = 0x259E; f__259E_0040_0015_5E4A();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { ovl__3503(0xFF); }
	f__B503_0578_0008_378B();
}

/**
 * Decompiled function f__B503_0578_0008_378B()
 *
 * @name f__B503_0578_0008_378B
 * @implements B503:0578:0008:378B ()
 *
 * Called From: B503:0578:000D:A409
 */
void f__B503_0578_0008_378B()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	f__B503_0013_0003_9FBA(); return;
}

/**
 * Decompiled function f__B503_0580_0006_F7CE()
 *
 * @name f__B503_0580_0006_F7CE
 * @implements B503:0580:0006:F7CE ()
 *
 * Called From: B503:0013:0003:9FBA
 * Called From: B503:0013:0016:B170
 */
void f__B503_0580_0006_F7CE()
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
 * Decompiled function f__B503_0586_0017_050A()
 *
 * @name f__B503_0586_0017_050A
 * @implements B503:0586:0017:050A ()
 *
 * Called From: B503:04F2:0008:B817
 */
void f__B503_0586_0017_050A()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subw(&emu_sp, 0xC4);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x14), 0x0);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3A38));
	emu_push(emu_cs); emu_push(0x059D); emu_cs = 0x34B8; ovl__34B8(3);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { ovl__3503(0xFF); }
	f__B503_059D_0013_54BB();
}

/**
 * Decompiled function f__B503_059D_0013_54BB()
 *
 * @name f__B503_059D_0013_54BB
 * @implements B503:059D:0013:54BB ()
 *
 * Called From: B503:059D:0017:050A
 */
void f__B503_059D_0013_54BB()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x2B41);
	emu_push(emu_ax.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0x24);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x05B0); emu_cs = 0x01F7; f__01F7_378D_0020_0F64();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { ovl__3503(0xFF); }
	f__B503_05B0_0029_2499();
}

/**
 * Decompiled function f__B503_05B0_0029_2499()
 *
 * @name f__B503_05B0_0029_2499
 * @implements B503:05B0:0029:2499 ()
 *
 * Called From: B503:05B0:0013:54BB
 */
void f__B503_05B0_0029_2499()
{
	emu_addws(&emu_sp, 0xA);
	emu_movw(&emu_ax.x, emu_bp - 0xC4);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_ss);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x12), 0x1);
	emu_movw(&emu_ax.x, 0xA0);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0xC4);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x05D9); emu_cs = 0x01F7; f__01F7_2947_0014_02B8();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { ovl__3503(0xFF); }
	f__B503_05D9_0008_DEB0();
}

/**
 * Decompiled function f__B503_05D9_0008_DEB0()
 *
 * @name f__B503_05D9_0008_DEB0
 * @implements B503:05D9:0008:DEB0 ()
 *
 * Called From: B503:05D9:0029:2499
 */
void f__B503_05D9_0008_DEB0()
{
	emu_addws(&emu_sp, 0x8);
	emu_xorw(&emu_si, emu_si);
	f__B503_071D_0008_831B(); return;
}

/**
 * Decompiled function f__B503_05E1_0013_55F7()
 *
 * @name f__B503_05E1_0013_55F7
 * @implements B503:05E1:0013:55F7 ()
 *
 * Called From: B503:0722:0008:831B
 * Called From: B503:0722:0014:9629
 */
void f__B503_05E1_0013_55F7()
{
	emu_movw(&emu_ax.x, emu_si);
	emu_incw(&emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x2B49);
	emu_push(emu_ax.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0xA);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x05F4); emu_cs = 0x01F7; f__01F7_378D_0020_0F64();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { ovl__3503(0xFF); }
	f__B503_05F4_0029_3F74();
}

/**
 * Decompiled function f__B503_05F4_0029_3F74()
 *
 * @name f__B503_05F4_0029_3F74
 * @implements B503:05F4:0029:3F74 ()
 *
 * Called From: B503:05F4:0013:55F7
 */
void f__B503_05F4_0029_3F74()
{
	emu_addws(&emu_sp, 0xA);
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x7E24));
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x7E26));
	emu_movw(&emu_ax.x, 0x50);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x9939);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0xA);
	emu_push(emu_ax.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0x24);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x061D); emu_cs = 0x34FC; ovl__34FC(1);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { ovl__3503(0xFF); }
	f__B503_061D_000A_9000();
}

/**
 * Decompiled function f__B503_061D_000A_9000()
 *
 * @name f__B503_061D_000A_9000
 * @implements B503:061D:000A:9000 ()
 *
 * Called From: B503:061D:0029:3F74
 */
void f__B503_061D_000A_9000()
{
	emu_addws(&emu_sp, 0x16);
	emu_orw(&emu_ax.x, emu_dx.x);
	if (!emu_flags.zf) { f__B503_0627_0033_8391(); return; }
	f__B503_0725_0017_C95A(); return;
}

/**
 * Decompiled function f__B503_0627_0033_8391()
 *
 * @name f__B503_0627_0033_8391
 * @implements B503:0627:0033:8391 ()
 *
 * Called From: B503:0622:000A:9000
 */
void f__B503_0627_0033_8391()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_addw(&emu_ax.x, 0x6);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_addw(&emu_ax.x, 0x4);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_addw(&emu_ax.x, 0x2);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x2B4F);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x9939);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x065A); emu_cs = 0x01F7; f__01F7_3803_001E_AAD4();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { ovl__3503(0xFF); }
	f__B503_065A_000E_3033();
}

/**
 * Decompiled function f__B503_065A_000E_3033()
 *
 * @name f__B503_065A_000E_3033
 * @implements B503:065A:000E:3033 ()
 *
 * Called From: B503:065A:0033:8391
 */
void f__B503_065A_000E_3033()
{
	emu_addws(&emu_sp, 0x18);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_push(emu_cs);
	emu_push(0x0668); f__B503_1302_0013_473F();
	f__B503_0668_0039_8E6A();
}

/**
 * Decompiled function f__B503_0668_0039_8E6A()
 *
 * @name f__B503_0668_0039_8E6A
 * @implements B503:0668:0039:8E6A ()
 *
 * Called From: B503:0668:000E:3033
 */
void f__B503_0668_0039_8E6A()
{
	emu_pop(&emu_cx.x);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.zf) { emu_ip = 0x0672; emu_last_cs = 0xB503; emu_last_ip = 0x066B; emu_last_length = 0x0039; emu_last_crc = 0x8E6A; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x12), 0x0);
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x10);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x10);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x98);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x6));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x4));
	emu_movw(&emu_ax.x, 0x353F);
	emu_movw(&emu_es, emu_ax.x);

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_es, 0x00,  0x6624);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_es, 0x00,  0x6626);
	emu_push(0x06A1);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A6034F: f__22A6_034F_000C_5E0A(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0xB503; emu_last_ip = 0x069C; emu_last_length = 0x0039; emu_last_crc = 0x8E6A;
			emu_call();
			return;
	}
	f__B503_06A1_0031_36AF();
}

/**
 * Decompiled function f__B503_06A1_0031_36AF()
 *
 * @name f__B503_06A1_0031_36AF
 * @implements B503:06A1:0031:36AF ()
 *
 * Called From: B503:06A1:0039:8E6A
 */
void f__B503_06A1_0031_36AF()
{
	emu_addws(&emu_sp, 0x10);
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x10);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x10);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x6));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x4));
	emu_movw(&emu_ax.x, 0x353F);
	emu_movw(&emu_es, emu_ax.x);

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_es, 0x00,  0x6624);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_es, 0x00,  0x6626);
	emu_push(0x06D2);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A6034F: f__22A6_034F_000C_5E0A(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0xB503; emu_last_ip = 0x06CD; emu_last_length = 0x0031; emu_last_crc = 0x36AF;
			emu_call();
			return;
	}
	f__B503_06D2_0031_E97D();
}

/**
 * Decompiled function f__B503_06D2_0031_E97D()
 *
 * @name f__B503_06D2_0031_E97D
 * @implements B503:06D2:0031:E97D ()
 *
 * Called From: B503:06D2:0031:36AF
 */
void f__B503_06D2_0031_E97D()
{
	emu_addws(&emu_sp, 0x10);
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3C44));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3C42));
	emu_movw(&emu_ax.x, 0x100);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x98);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x2));
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x7E20));
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x7E22));
	emu_push(emu_cs); emu_push(0x0703); emu_cs = 0x2903; f__2903_007A_0032_762D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { ovl__3503(0xFF); }
	f__B503_0703_000E_6448();
}

/**
 * Decompiled function f__B503_0703_000E_6448()
 *
 * @name f__B503_0703_000E_6448
 * @implements B503:0703:000E:6448 ()
 *
 * Called From: B503:0703:0031:E97D
 */
void f__B503_0703_000E_6448()
{
	emu_addws(&emu_sp, 0x6);
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0711); emu_cs = 0x2903; f__2903_0158_001A_2931();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { ovl__3503(0xFF); }
	f__B503_0711_0014_9629();
}

/**
 * Decompiled function f__B503_0711_0014_9629()
 *
 * @name f__B503_0711_0014_9629
 * @implements B503:0711:0014:9629 ()
 *
 * Called From: B503:0711:000E:6448
 */
void f__B503_0711_0014_9629()
{
	emu_addws(&emu_sp, 0x14);
	emu_addws(&emu_get_memory16(emu_ss, emu_bp, -0xE), 0x8);
	emu_addws(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x10);
	emu_incw(&emu_si);
	emu_cmpws(&emu_si, 0x14);
	if (!(emu_flags.sf != emu_flags.of)) { emu_ip = 0x0725; emu_last_cs = 0xB503; emu_last_ip = 0x0720; emu_last_length = 0x0014; emu_last_crc = 0x9629; emu_call(); return; } // Jump does not resolve
	f__B503_05E1_0013_55F7(); return;
}

/**
 * Decompiled function f__B503_071D_0008_831B()
 *
 * @name f__B503_071D_0008_831B
 * @implements B503:071D:0008:831B ()
 *
 * Called From: B503:05DE:0008:DEB0
 */
void f__B503_071D_0008_831B()
{
	emu_cmpws(&emu_si, 0x14);
	if (!(emu_flags.sf != emu_flags.of)) { emu_ip = 0x0725; emu_last_cs = 0xB503; emu_last_ip = 0x0720; emu_last_length = 0x0008; emu_last_crc = 0x831B; emu_call(); return; } // Jump does not resolve
	f__B503_05E1_0013_55F7(); return;
}

/**
 * Decompiled function f__B503_0725_0017_C95A()
 *
 * @name f__B503_0725_0017_C95A
 * @implements B503:0725:0017:C95A ()
 *
 * Called From: B503:0624:000A:9000
 */
void f__B503_0725_0017_C95A()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_si);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x12), 0x0);
	if (emu_flags.zf) { f__B503_0758_000E_F83E(); return; }
	emu_movw(&emu_ax.x, emu_bp - 0xC4);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_ss);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), emu_ax.x);
	emu_xorw(&emu_si, emu_si);
	emu_ip = 0x0751; emu_last_cs = 0xB503; emu_last_ip = 0x073A; emu_last_length = 0x0017; emu_last_crc = 0xC95A; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B503_0758_000E_F83E()
 *
 * @name f__B503_0758_000E_F83E
 * @implements B503:0758:000E:F83E ()
 *
 * Called From: B503:072C:0017:C95A
 */
void f__B503_0758_000E_F83E()
{
	emu_movw(&emu_ax.x, emu_bp - 0xC4);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_ss);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), emu_ax.x);
	emu_xorw(&emu_si, emu_si);
	f__B503_0783_0019_B1FA(); return;
}

/**
 * Decompiled function f__B503_0766_000B_D03B()
 *
 * @name f__B503_0766_000B_D03B
 * @implements B503:0766:000B:D03B ()
 *
 * Called From: B503:0786:0019:B1FA
 * Called From: B503:0786:001E:9D55
 */
void f__B503_0766_000B_D03B()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_push(emu_cs);
	emu_push(0x0771); f__B503_1302_0013_473F();
	f__B503_0771_002B_3E63();
}

/**
 * Decompiled function f__B503_0771_002B_3E63()
 *
 * @name f__B503_0771_002B_3E63
 * @implements B503:0771:002B:3E63 ()
 *
 * Called From: B503:0771:000B:D03B
 */
void f__B503_0771_002B_3E63()
{
	emu_pop(&emu_cx.x);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (emu_flags.zf) { f__B503_077E_001E_9D55(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x0), 0x0);
	emu_addws(&emu_get_memory16(emu_ss, emu_bp, -0xE), 0x8);
	emu_incw(&emu_si);
	emu_cmpw(&emu_si, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if ((emu_flags.sf != emu_flags.of)) { emu_ip = 0x0766; emu_last_cs = 0xB503; emu_last_ip = 0x0786; emu_last_length = 0x002B; emu_last_crc = 0x3E63; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_bp - 0xC4);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_ss);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x0);
	emu_push(emu_cs); emu_push(0x079C); emu_cs = 0x2B6C; emu_ip = 0x08D3; emu_last_cs = 0xB503; emu_last_ip = 0x0797; emu_last_length = 0x002B; emu_last_crc = 0x3E63; emu_call(); // Jump does not resolve
	f__B503_079C_0004_CF79();
}

/**
 * Decompiled function f__B503_077E_001E_9D55()
 *
 * @name f__B503_077E_001E_9D55
 * @implements B503:077E:001E:9D55 ()
 *
 * Called From: B503:0774:002B:3E63
 */
void f__B503_077E_001E_9D55()
{
	emu_addws(&emu_get_memory16(emu_ss, emu_bp, -0xE), 0x8);
	emu_incw(&emu_si);
	emu_cmpw(&emu_si, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if ((emu_flags.sf != emu_flags.of)) { f__B503_0766_000B_D03B(); return; }
	emu_movw(&emu_ax.x, emu_bp - 0xC4);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_ss);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x0);
	emu_push(emu_cs); emu_push(0x079C); emu_cs = 0x2B6C; f__2B6C_0137_0020_C73F();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { ovl__3503(0xFF); }
	f__B503_079C_0004_CF79();
}

/**
 * Decompiled function f__B503_0783_0019_B1FA()
 *
 * @name f__B503_0783_0019_B1FA
 * @implements B503:0783:0019:B1FA ()
 *
 * Called From: B503:0764:000E:F83E
 */
void f__B503_0783_0019_B1FA()
{
	emu_cmpw(&emu_si, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if ((emu_flags.sf != emu_flags.of)) { f__B503_0766_000B_D03B(); return; }
	emu_movw(&emu_ax.x, emu_bp - 0xC4);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_ss);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x0);
	emu_push(emu_cs); emu_push(0x079C); emu_cs = 0x2B6C; emu_ip = 0x08D3; emu_last_cs = 0xB503; emu_last_ip = 0x0797; emu_last_length = 0x0019; emu_last_crc = 0xB1FA; emu_call(); // Jump does not resolve
	f__B503_079C_0004_CF79();
}

/**
 * Decompiled function f__B503_079C_0004_CF79()
 *
 * @name f__B503_079C_0004_CF79
 * @implements B503:079C:0004:CF79 ()
 *
 * Called From: B503:079C:001E:9D55
 */
void f__B503_079C_0004_CF79()
{
	emu_xorw(&emu_si, emu_si);
	f__B503_07E3_000A_916C(); return;
}

/**
 * Decompiled function f__B503_07A0_0037_C389()
 *
 * @name f__B503_07A0_0037_C389
 * @implements B503:07A0:0037:C389 ()
 *
 * Called From: B503:07E6:000A:916C
 * Called From: B503:07E6:0016:22B8
 */
void f__B503_07A0_0037_C389()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x0), 0x0);
	if (emu_flags.zf) { emu_ip = 0x07DA; emu_last_cs = 0xB503; emu_last_ip = 0x07A7; emu_last_length = 0x0037; emu_last_crc = 0xC389; emu_call(); return; } // Jump does not resolve
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x10);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x10);
	emu_push(emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x6));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x4));
	emu_movw(&emu_ax.x, 0x98);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax.x, 0x353F);
	emu_movw(&emu_es, emu_ax.x);

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_es, 0x00,  0x6624);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_es, 0x00,  0x6626);
	emu_push(0x07D7);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A6034F: f__22A6_034F_000C_5E0A(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0xB503; emu_last_ip = 0x07D2; emu_last_length = 0x0037; emu_last_crc = 0xC389;
			emu_call();
			return;
	}
	f__B503_07D7_0016_22B8();
}

/**
 * Decompiled function f__B503_07D7_0016_22B8()
 *
 * @name f__B503_07D7_0016_22B8
 * @implements B503:07D7:0016:22B8 ()
 *
 * Called From: B503:07D7:0037:C389
 */
void f__B503_07D7_0016_22B8()
{
	emu_addws(&emu_sp, 0x10);
	emu_addws(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x10);
	emu_addws(&emu_get_memory16(emu_ss, emu_bp, -0xE), 0x8);
	emu_incw(&emu_si);
	emu_cmpw(&emu_si, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if ((emu_flags.sf != emu_flags.of)) { f__B503_07A0_0037_C389(); return; }
	emu_push(emu_cs); emu_push(0x07ED); emu_cs = 0x2B6C; f__2B6C_0169_001E_6939();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { ovl__3503(0xFF); }
	f__B503_07ED_0005_E089();
}

/**
 * Decompiled function f__B503_07E3_000A_916C()
 *
 * @name f__B503_07E3_000A_916C
 * @implements B503:07E3:000A:916C ()
 *
 * Called From: B503:079E:0004:CF79
 */
void f__B503_07E3_000A_916C()
{
	emu_cmpw(&emu_si, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if ((emu_flags.sf != emu_flags.of)) { f__B503_07A0_0037_C389(); return; }
	emu_push(emu_cs); emu_push(0x07ED); emu_cs = 0x2B6C; emu_ip = 0x0956; emu_last_cs = 0xB503; emu_last_ip = 0x07E8; emu_last_length = 0x000A; emu_last_crc = 0x916C; emu_call(); // Jump does not resolve
	f__B503_07ED_0005_E089();
}

/**
 * Decompiled function f__B503_07ED_0005_E089()
 *
 * @name f__B503_07ED_0005_E089
 * @implements B503:07ED:0005:E089 ()
 *
 * Called From: B503:07ED:0016:22B8
 */
void f__B503_07ED_0005_E089()
{
	emu_push(emu_cs); emu_push(0x07F2); emu_cs = 0x29E8; f__29E8_073F_000E_6816();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { ovl__3503(0xFF); }
	f__B503_07F2_0009_067A();
}

/**
 * Decompiled function f__B503_07F2_0009_067A()
 *
 * @name f__B503_07F2_0009_067A
 * @implements B503:07F2:0009:067A ()
 *
 * Called From: B503:07F2:0005:E089
 */
void f__B503_07F2_0009_067A()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_movw(&emu_di, emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), emu_ax.x);
	f__B503_0835_0010_3623(); return;
}

/**
 * Decompiled function f__B503_07FB_0005_39A2()
 *
 * @name f__B503_07FB_0005_39A2
 * @implements B503:07FB:0005:39A2 ()
 *
 * Called From: B503:0839:0010:3623
 */
void f__B503_07FB_0005_39A2()
{
	emu_push(emu_cs);
	emu_push(0x0800); f__B503_088B_000B_B072();
	f__B503_0800_0014_B640();
}

/**
 * Decompiled function f__B503_0800_0014_B640()
 *
 * @name f__B503_0800_0014_B640
 * @implements B503:0800:0014:B640 ()
 *
 * Called From: B503:0800:0005:39A2
 */
void f__B503_0800_0014_B640()
{
	emu_movw(&emu_di, emu_ax.x);
	emu_orw(&emu_di, emu_di);
	if (emu_flags.zf) { f__B503_0835_0010_3623(); return; }
	emu_movw(&emu_ax.x, emu_bp - 0xC4);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_ss);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), emu_ax.x);
	emu_xorw(&emu_si, emu_si);
	f__B503_0830_0015_27A3(); return;
}

/**
 * Decompiled function f__B503_0814_0005_7C0A()
 *
 * @name f__B503_0814_0005_7C0A
 * @implements B503:0814:0005:7C0A ()
 *
 * Called From: B503:0833:0015:27A3
 * Called From: B503:0833:001A:ED51
 */
void f__B503_0814_0005_7C0A()
{
	emu_push(emu_cs);
	emu_push(0x0819); f__B503_1343_003B_6432();
	f__B503_0819_0012_A163();
}

/**
 * Decompiled function f__B503_0819_0012_A163()
 *
 * @name f__B503_0819_0012_A163
 * @implements B503:0819:0012:A163 ()
 *
 * Called From: B503:0819:0005:7C0A
 */
void f__B503_0819_0012_A163()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx.x,  0x0), emu_di);
	if (!emu_flags.zf) { f__B503_082B_001A_ED51(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), 0x1);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x14), emu_si);
	f__B503_0835_0010_3623(); return;
}

/**
 * Decompiled function f__B503_082B_001A_ED51()
 *
 * @name f__B503_082B_001A_ED51
 * @implements B503:082B:001A:ED51 ()
 *
 * Called From: B503:081F:0012:A163
 */
void f__B503_082B_001A_ED51()
{
	emu_addws(&emu_get_memory16(emu_ss, emu_bp, -0xE), 0x8);
	emu_incw(&emu_si);
	emu_cmpw(&emu_si, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if ((emu_flags.sf != emu_flags.of)) { f__B503_0814_0005_7C0A(); return; }
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x10), 0x0);
	if (emu_flags.zf) { emu_ip = 0x07FB; emu_last_cs = 0xB503; emu_last_ip = 0x0839; emu_last_length = 0x001A; emu_last_crc = 0xED51; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_push(emu_di);
	emu_push(emu_cs);
	emu_push(0x0845); emu_ip = 0x12AC; emu_last_cs = 0xB503; emu_last_ip = 0x0842; emu_last_length = 0x001A; emu_last_crc = 0xED51; emu_call(); // Jump does not resolve
	f__B503_0845_000C_45BE();
}

/**
 * Decompiled function f__B503_0830_0015_27A3()
 *
 * @name f__B503_0830_0015_27A3
 * @implements B503:0830:0015:27A3 ()
 *
 * Called From: B503:0812:0014:B640
 */
void f__B503_0830_0015_27A3()
{
	emu_cmpw(&emu_si, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if ((emu_flags.sf != emu_flags.of)) { f__B503_0814_0005_7C0A(); return; }
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x10), 0x0);
	if (emu_flags.zf) { emu_ip = 0x07FB; emu_last_cs = 0xB503; emu_last_ip = 0x0839; emu_last_length = 0x0015; emu_last_crc = 0x27A3; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_push(emu_di);
	emu_push(emu_cs);
	emu_push(0x0845); emu_ip = 0x12AC; emu_last_cs = 0xB503; emu_last_ip = 0x0842; emu_last_length = 0x0015; emu_last_crc = 0x27A3; emu_call(); // Jump does not resolve
	f__B503_0845_000C_45BE();
}

/**
 * Decompiled function f__B503_0835_0010_3623()
 *
 * @name f__B503_0835_0010_3623
 * @implements B503:0835:0010:3623 ()
 *
 * Called From: B503:07F9:0009:067A
 * Called From: B503:0804:0014:B640
 * Called From: B503:0829:0012:A163
 */
void f__B503_0835_0010_3623()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x10), 0x0);
	if (emu_flags.zf) { f__B503_07FB_0005_39A2(); return; }
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_push(emu_di);
	emu_push(emu_cs);
	emu_push(0x0845); f__B503_12AC_0013_473F();
	f__B503_0845_000C_45BE();
}

/**
 * Decompiled function f__B503_0845_000C_45BE()
 *
 * @name f__B503_0845_000C_45BE
 * @implements B503:0845:000C:45BE ()
 *
 * Called From: B503:0845:0010:3623
 */
void f__B503_0845_000C_45BE()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x2B1D);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x0851); f__B503_0F0C_0010_028B();
	f__B503_0851_000E_13B7();
}

/**
 * Decompiled function f__B503_0851_000E_13B7()
 *
 * @name f__B503_0851_000E_13B7
 * @implements B503:0851:000E:13B7 ()
 *
 * Called From: B503:0851:000C:45BE
 */
void f__B503_0851_000E_13B7()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0xC4);
	emu_push(emu_ax.x);
	emu_push(emu_di);
	emu_push(emu_cs);
	emu_push(0x085F); f__B503_08DB_0014_ECA4();
	f__B503_085F_0026_6D71();
}

/**
 * Decompiled function f__B503_085F_0026_6D71()
 *
 * @name f__B503_085F_0026_6D71
 * @implements B503:085F:0026:6D71 ()
 *
 * Called From: B503:085F:000E:13B7
 */
void f__B503_085F_0026_6D71()
{
	emu_addws(&emu_sp, 0x6);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_decw(&emu_ax.x);
	emu_movw(&emu_dx.x, 0x3);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_addw(&emu_ax.x, 0x2);
	emu_movw(&emu_di, emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0x6), 0x7);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__B503_087A_000B_19C5(); return; }
	emu_decw(&emu_di);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0x6), 0x8);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { emu_ip = 0x0881; emu_last_cs = 0xB503; emu_last_ip = 0x087E; emu_last_length = 0x0026; emu_last_crc = 0x6D71; emu_call(); return; } // Jump does not resolve
	emu_decw(&emu_di);
	emu_movw(&emu_ax.x, emu_di);
	emu_ip = 0x0885; emu_last_cs = 0xB503; emu_last_ip = 0x0883; emu_last_length = 0x0026; emu_last_crc = 0x6D71; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B503_087A_000B_19C5()
 *
 * @name f__B503_087A_000B_19C5
 * @implements B503:087A:000B:19C5 ()
 *
 * Called From: B503:0877:0026:6D71
 */
void f__B503_087A_000B_19C5()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0x6), 0x8);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__B503_0881_0004_68D2(); return; }
	emu_decw(&emu_di);
	emu_movw(&emu_ax.x, emu_di);
	emu_ip = 0x0885; emu_last_cs = 0xB503; emu_last_ip = 0x0883; emu_last_length = 0x000B; emu_last_crc = 0x19C5; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B503_0881_0004_68D2()
 *
 * @name f__B503_0881_0004_68D2
 * @implements B503:0881:0004:68D2 ()
 *
 * Called From: B503:087E:000B:19C5
 */
void f__B503_0881_0004_68D2()
{
	emu_movw(&emu_ax.x, emu_di);
	f__B503_0885_0006_F7CE(); return;
}

/**
 * Decompiled function f__B503_0885_0006_F7CE()
 *
 * @name f__B503_0885_0006_F7CE
 * @implements B503:0885:0006:F7CE ()
 *
 * Called From: B503:0883:0004:68D2
 */
void f__B503_0885_0006_F7CE()
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
 * Decompiled function f__B503_088B_000B_B072()
 *
 * @name f__B503_088B_000B_B072
 * @implements B503:088B:000B:B072 ()
 *
 * Called From: B503:07FD:0005:39A2
 */
void f__B503_088B_000B_B072()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_si);
	emu_xorw(&emu_si, emu_si);
	emu_push(emu_cs);
	emu_push(0x0896); f__B503_1343_003B_6432();
	f__B503_0896_0005_20AE();
}

/**
 * Decompiled function f__B503_0896_0005_20AE()
 *
 * @name f__B503_0896_0005_20AE
 * @implements B503:0896:0005:20AE ()
 *
 * Called From: B503:0896:000B:B072
 */
void f__B503_0896_0005_20AE()
{
	emu_push(emu_cs); emu_push(0x089B); emu_cs = 0x29E8; f__29E8_0643_0008_ED98();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { ovl__3503(0xFF); }
	f__B503_089B_0008_2C18();
}

/**
 * Decompiled function f__B503_089B_0008_2C18()
 *
 * @name f__B503_089B_0008_2C18
 * @implements B503:089B:0008:2C18 ()
 *
 * Called From: B503:089B:0005:20AE
 */
void f__B503_089B_0008_2C18()
{
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.zf) { f__B503_08A3_0005_B085(); return; }
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__B503_08D8_0003_2E57(); return;
}

/**
 * Decompiled function f__B503_08A1_0002_DABA()
 *
 * @name f__B503_08A1_0002_DABA
 * @implements B503:08A1:0002:DABA ()
 *
 * Called From: B503:08D6:0020:4B31
 */
void f__B503_08A1_0002_DABA()
{
	f__B503_08D8_0003_2E57(); return;
}

/**
 * Decompiled function f__B503_08A3_0005_B085()
 *
 * @name f__B503_08A3_0005_B085
 * @implements B503:08A3:0005:B085 ()
 *
 * Called From: B503:089D:0008:2C18
 */
void f__B503_08A3_0005_B085()
{
	emu_push(emu_cs); emu_push(0x08A8); emu_cs = 0x29E8; f__29E8_07FA_0020_177A();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { ovl__3503(0xFF); }
	f__B503_08A8_0010_6CEF();
}

/**
 * Decompiled function f__B503_08A8_0010_6CEF()
 *
 * @name f__B503_08A8_0010_6CEF
 * @implements B503:08A8:0010:6CEF ()
 *
 * Called From: B503:08A8:0005:B085
 */
void f__B503_08A8_0010_6CEF()
{
	emu_movw(&emu_si, emu_ax.x);
	emu_cmpw(&emu_si, 0xC6);
	if (emu_flags.zf) { f__B503_08B8_0020_4B31(); return; }
	emu_cmpw(&emu_si, 0xC7);
	if (emu_flags.zf) { emu_ip = 0x08B8; emu_last_cs = 0xB503; emu_last_ip = 0x08B4; emu_last_length = 0x0010; emu_last_crc = 0x6CEF; emu_call(); return; } // Jump does not resolve
	emu_ip = 0x089F; emu_last_cs = 0xB503; emu_last_ip = 0x08B6; emu_last_length = 0x0010; emu_last_crc = 0x6CEF; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B503_08B8_0020_4B31()
 *
 * @name f__B503_08B8_0020_4B31
 * @implements B503:08B8:0020:4B31 ()
 *
 * Called From: B503:08AE:0010:6CEF
 */
void f__B503_08B8_0020_4B31()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x7066));
	emu_addw(&emu_ax.x, 0xFFE8);
	emu_movw(&emu_dx.x, 0x130);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00,  0x7064));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_es, emu_get_memory16(emu_ds, 0x00, -0x7E28));
	emu_addw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00, -0x7E2A));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x, -0x8));
	emu_movws(&emu_ax.x, emu_ax.l);
	f__B503_08A1_0002_DABA(); return;
}

/**
 * Decompiled function f__B503_08D8_0003_2E57()
 *
 * @name f__B503_08D8_0003_2E57
 * @implements B503:08D8:0003:2E57 ()
 *
 * Called From: B503:08A1:0008:2C18
 * Called From: B503:08A1:0002:DABA
 */
void f__B503_08D8_0003_2E57()
{
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B503_08DB_0014_ECA4()
 *
 * @name f__B503_08DB_0014_ECA4
 * @implements B503:08DB:0014:ECA4 ()
 *
 * Called From: B503:085C:000E:13B7
 */
void f__B503_08DB_0014_ECA4()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x16);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_di, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3A38));
	emu_push(emu_cs); emu_push(0x08EF); emu_cs = 0x34B8; ovl__34B8(3);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { ovl__3503(0xFF); }
	f__B503_08EF_0016_7F7D();
}

/**
 * Decompiled function f__B503_08EF_0016_7F7D()
 *
 * @name f__B503_08EF_0016_7F7D
 * @implements B503:08EF:0016:7F7D ()
 *
 * Called From: B503:08EF:0014:ECA4
 */
void f__B503_08EF_0016_7F7D()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x12), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x14), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x16), 0x0);
	emu_xorw(&emu_si, emu_si);
	f__B503_095E_0015_2B3D(); return;
}

/**
 * Decompiled function f__B503_0905_0005_BC8E()
 *
 * @name f__B503_0905_0005_BC8E
 * @implements B503:0905:0005:BC8E ()
 *
 * Called From: B503:0961:0015:2B3D
 * Called From: B503:0961:001E:C363
 */
void f__B503_0905_0005_BC8E()
{
	emu_push(emu_cs);
	emu_push(0x090A); f__B503_1343_003B_6432();
	f__B503_090A_0016_7A72();
}

/**
 * Decompiled function f__B503_090A_0016_7A72()
 *
 * @name f__B503_090A_0016_7A72
 * @implements B503:090A:0016:7A72 ()
 *
 * Called From: B503:090A:0005:BC8E
 */
void f__B503_090A_0016_7A72()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x0), 0x0);
	if (emu_flags.zf) { f__B503_0955_001E_C363(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx.x,  0x0), emu_di);
	if (emu_flags.zf) { f__B503_0955_001E_C363(); return; }
	emu_push(emu_cs); emu_push(0x0920); emu_cs = 0x2B6C; f__2B6C_0137_0020_C73F();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { ovl__3503(0xFF); }
	f__B503_0920_002D_DAC3();
}

/**
 * Decompiled function f__B503_0920_002D_DAC3()
 *
 * @name f__B503_0920_002D_DAC3
 * @implements B503:0920:002D:DAC3 ()
 *
 * Called From: B503:0920:0016:7A72
 */
void f__B503_0920_002D_DAC3()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x10);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x10);
	emu_push(emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x6));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x4));
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x16));
	emu_movw(&emu_ax.x, 0x353F);
	emu_movw(&emu_es, emu_ax.x);

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_es, 0x00,  0x6624);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_es, 0x00,  0x6626);
	emu_push(0x094D);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A6034F: f__22A6_034F_000C_5E0A(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0xB503; emu_last_ip = 0x0948; emu_last_length = 0x002D; emu_last_crc = 0xDAC3;
			emu_call();
			return;
	}
	f__B503_094D_0008_43E5();
}

/**
 * Decompiled function f__B503_094D_0008_43E5()
 *
 * @name f__B503_094D_0008_43E5
 * @implements B503:094D:0008:43E5 ()
 *
 * Called From: B503:094D:002D:DAC3
 */
void f__B503_094D_0008_43E5()
{
	emu_addws(&emu_sp, 0x10);
	emu_push(emu_cs); emu_push(0x0955); emu_cs = 0x2B6C; f__2B6C_0169_001E_6939();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { ovl__3503(0xFF); }
	f__B503_0955_001E_C363();
}

/**
 * Decompiled function f__B503_0955_001E_C363()
 *
 * @name f__B503_0955_001E_C363
 * @implements B503:0955:001E:C363 ()
 *
 * Called From: B503:0911:0016:7A72
 * Called From: B503:0919:0016:7A72
 * Called From: B503:0955:0008:43E5
 */
void f__B503_0955_001E_C363()
{
	emu_addws(&emu_get_memory16(emu_ss, emu_bp, -0x16), 0x10);
	emu_addws(&emu_get_memory16(emu_ss, emu_bp, -0x14), 0x8);
	emu_incw(&emu_si);
	emu_cmpws(&emu_si, 0x14);
	if ((emu_flags.sf != emu_flags.of)) { f__B503_0905_0005_BC8E(); return; }
	emu_push(emu_di);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x2B46);
	emu_push(emu_ax.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0x4);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0973); emu_cs = 0x01F7; f__01F7_378D_0020_0F64();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { ovl__3503(0xFF); }
	f__B503_0973_0029_A120();
}

/**
 * Decompiled function f__B503_095E_0015_2B3D()
 *
 * @name f__B503_095E_0015_2B3D
 * @implements B503:095E:0015:2B3D ()
 *
 * Called From: B503:0903:0016:7F7D
 */
void f__B503_095E_0015_2B3D()
{
	emu_cmpws(&emu_si, 0x14);
	if ((emu_flags.sf != emu_flags.of)) { f__B503_0905_0005_BC8E(); return; }
	emu_push(emu_di);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x2B46);
	emu_push(emu_ax.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0x4);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0973); emu_cs = 0x01F7; emu_ip = 0x4100; emu_last_cs = 0xB503; emu_last_ip = 0x096E; emu_last_length = 0x0015; emu_last_crc = 0x2B3D; emu_call(); // Jump does not resolve
	f__B503_0973_0029_A120();
}

/**
 * Decompiled function f__B503_0973_0029_A120()
 *
 * @name f__B503_0973_0029_A120
 * @implements B503:0973:0029:A120 ()
 *
 * Called From: B503:0973:001E:C363
 */
void f__B503_0973_0029_A120()
{
	emu_addws(&emu_sp, 0xA);
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x7E24));
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x7E26));
	emu_movw(&emu_ax.x, 0x50);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x9939);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0x4);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x2B5B);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x099C); emu_cs = 0x34FC; ovl__34FC(1);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { ovl__3503(0xFF); }
	f__B503_099C_001C_7696();
}

/**
 * Decompiled function f__B503_099C_001C_7696()
 *
 * @name f__B503_099C_001C_7696
 * @implements B503:099C:001C:7696 ()
 *
 * Called From: B503:099C:0029:A120
 */
void f__B503_099C_001C_7696()
{
	emu_addws(&emu_sp, 0x16);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0x8);
	emu_push(emu_ax.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0x6);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x2B55);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x9939);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x09B8); emu_cs = 0x01F7; f__01F7_3803_001E_AAD4();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { ovl__3503(0xFF); }
	f__B503_09B8_0011_F8CD();
}

/**
 * Decompiled function f__B503_09B8_0011_F8CD()
 *
 * @name f__B503_09B8_0011_F8CD
 * @implements B503:09B8:0011:F8CD ()
 *
 * Called From: B503:09B8:001C:7696
 */
void f__B503_09B8_0011_F8CD()
{
	emu_addws(&emu_sp, 0x10);
	emu_push(emu_di);
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x7E1C));
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x7E1E));
	emu_push(emu_cs); emu_push(0x09C9); emu_cs = 0x2903; f__2903_007A_0032_762D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { ovl__3503(0xFF); }
	f__B503_09C9_0014_80A1();
}

/**
 * Decompiled function f__B503_09C9_0014_80A1()
 *
 * @name f__B503_09C9_0014_80A1
 * @implements B503:09C9:0014:80A1 ()
 *
 * Called From: B503:09C9:0011:F8CD
 */
void f__B503_09C9_0014_80A1()
{
	emu_addws(&emu_sp, 0x6);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_push(emu_cs); emu_push(0x09DD); emu_cs = 0x260F; f__260F_003A_0014_CA10();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { ovl__3503(0xFF); }
	f__B503_09DD_0010_DAC0();
}

/**
 * Decompiled function f__B503_09DD_0010_DAC0()
 *
 * @name f__B503_09DD_0010_DAC0
 * @implements B503:09DD:0010:DAC0 ()
 *
 * Called From: B503:09DD:0014:80A1
 */
void f__B503_09DD_0010_DAC0()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_push(emu_cs); emu_push(0x09ED); emu_cs = 0x260F; f__260F_0054_0016_0011();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { ovl__3503(0xFF); }
	f__B503_09ED_0012_7B6D();
}

/**
 * Decompiled function f__B503_09ED_0012_7B6D()
 *
 * @name f__B503_09ED_0012_7B6D
 * @implements B503:09ED:0012:7B6D ()
 *
 * Called From: B503:09ED:0010:DAC0
 */
void f__B503_09ED_0012_7B6D()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_ax.x);
	emu_addws(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x8);
	emu_addws(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x18);
	emu_push(emu_cs); emu_push(0x09FF); emu_cs = 0x2B6C; f__2B6C_0137_0020_C73F();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { ovl__3503(0xFF); }
	f__B503_09FF_0025_C6F5();
}

/**
 * Decompiled function f__B503_09FF_0025_C6F5()
 *
 * @name f__B503_09FF_0025_C6F5
 * @implements B503:09FF:0025:C6F5 ()
 *
 * Called From: B503:09FF:0012:7B6D
 */
void f__B503_09FF_0025_C6F5()
{
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_movw(&emu_ax.x, 0x10);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x10);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movw(&emu_ax.x, 0x353F);
	emu_movw(&emu_es, emu_ax.x);

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_es, 0x00,  0x6624);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_es, 0x00,  0x6626);
	emu_push(0x0A24);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A6034F: f__22A6_034F_000C_5E0A(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0xB503; emu_last_ip = 0x0A1F; emu_last_length = 0x0025; emu_last_crc = 0xC6F5;
			emu_call();
			return;
	}
	f__B503_0A24_0008_43E5();
}

/**
 * Decompiled function f__B503_0A24_0008_43E5()
 *
 * @name f__B503_0A24_0008_43E5
 * @implements B503:0A24:0008:43E5 ()
 *
 * Called From: B503:0A24:0025:C6F5
 */
void f__B503_0A24_0008_43E5()
{
	emu_addws(&emu_sp, 0x10);
	emu_push(emu_cs); emu_push(0x0A2C); emu_cs = 0x2B6C; f__2B6C_0169_001E_6939();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { ovl__3503(0xFF); }
	f__B503_0A2C_0028_7281();
}

/**
 * Decompiled function f__B503_0A2C_0028_7281()
 *
 * @name f__B503_0A2C_0028_7281
 * @implements B503:0A2C:0028:7281 ()
 *
 * Called From: B503:0A2C:0008:43E5
 */
void f__B503_0A2C_0028_7281()
{
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_movw(&emu_ax.x, 0x10);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0xB0);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x10);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x10);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x353F);
	emu_movw(&emu_es, emu_ax.x);

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_es, 0x00,  0x6624);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_es, 0x00,  0x6626);
	emu_push(0x0A54);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A6034F: f__22A6_034F_000C_5E0A(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0xB503; emu_last_ip = 0x0A4F; emu_last_length = 0x0028; emu_last_crc = 0x7281;
			emu_call();
			return;
	}
	f__B503_0A54_002D_25DF();
}

/**
 * Decompiled function f__B503_0A54_002D_25DF()
 *
 * @name f__B503_0A54_002D_25DF
 * @implements B503:0A54:002D:25DF ()
 *
 * Called From: B503:0A54:0028:7281
 */
void f__B503_0A54_002D_25DF()
{
	emu_addws(&emu_sp, 0x10);
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3C44));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3C42));
	emu_movw(&emu_ax.x, 0x100);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x10);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x10);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0A81); emu_cs = 0x2903; f__2903_0158_001A_2931();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { ovl__3503(0xFF); }
	f__B503_0A81_0013_847E();
}

/**
 * Decompiled function f__B503_0A81_0013_847E()
 *
 * @name f__B503_0A81_0013_847E
 * @implements B503:0A81:0013:847E ()
 *
 * Called From: B503:0A81:002D:25DF
 */
void f__B503_0A81_0013_847E()
{
	emu_addws(&emu_sp, 0x14);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x12), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x14), emu_dx.x);
	emu_xorw(&emu_si, emu_si);
	f__B503_0AFA_0009_4939(); return;
}

/**
 * Decompiled function f__B503_0A94_0005_7DAA()
 *
 * @name f__B503_0A94_0005_7DAA
 * @implements B503:0A94:0005:7DAA ()
 *
 * Called From: B503:0AFD:0009:4939
 * Called From: B503:0AFD:000E:6476
 * Called From: B503:0AFD:0011:0D32
 */
void f__B503_0A94_0005_7DAA()
{
	emu_push(emu_cs);
	emu_push(0x0A99); f__B503_1343_003B_6432();
	f__B503_0A99_004B_3A88();
}

/**
 * Decompiled function f__B503_0A99_004B_3A88()
 *
 * @name f__B503_0A99_004B_3A88
 * @implements B503:0A99:004B:3A88 ()
 *
 * Called From: B503:0A99:0005:7DAA
 */
void f__B503_0A99_004B_3A88()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx.x,  0x0), emu_di);
	if (!emu_flags.zf) { f__B503_0AF5_000E_6476(); return; }
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3C44));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3C42));
	emu_movw(&emu_ax.x, 0x100);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x6));
	emu_addw(&emu_ax.x, 0x10);
	emu_subw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x4));
	emu_addw(&emu_ax.x, 0x10);
	emu_subw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x2));
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x7E20));
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x7E22));
	emu_push(emu_cs); emu_push(0x0AE4); emu_cs = 0x2903; f__2903_007A_0032_762D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { ovl__3503(0xFF); }
	f__B503_0AE4_000E_6448();
}

/**
 * Decompiled function f__B503_0AE4_000E_6448()
 *
 * @name f__B503_0AE4_000E_6448
 * @implements B503:0AE4:000E:6448 ()
 *
 * Called From: B503:0AE4:004B:3A88
 */
void f__B503_0AE4_000E_6448()
{
	emu_addws(&emu_sp, 0x6);
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0AF2); emu_cs = 0x2903; f__2903_0158_001A_2931();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { ovl__3503(0xFF); }
	f__B503_0AF2_0011_0D32();
}

/**
 * Decompiled function f__B503_0AF2_0011_0D32()
 *
 * @name f__B503_0AF2_0011_0D32
 * @implements B503:0AF2:0011:0D32 ()
 *
 * Called From: B503:0AF2:000E:6448
 */
void f__B503_0AF2_0011_0D32()
{
	emu_addws(&emu_sp, 0x14);
	emu_addws(&emu_get_memory16(emu_ss, emu_bp, -0x14), 0x8);
	emu_incw(&emu_si);
	emu_cmpws(&emu_si, 0x14);
	if ((emu_flags.sf != emu_flags.of)) { f__B503_0A94_0005_7DAA(); return; }
	emu_xorw(&emu_si, emu_si);
	f__B503_0B5D_000B_D51E(); return;
}

/**
 * Decompiled function f__B503_0AF5_000E_6476()
 *
 * @name f__B503_0AF5_000E_6476
 * @implements B503:0AF5:000E:6476 ()
 *
 * Called From: B503:0A9F:004B:3A88
 */
void f__B503_0AF5_000E_6476()
{
	emu_addws(&emu_get_memory16(emu_ss, emu_bp, -0x14), 0x8);
	emu_incw(&emu_si);
	emu_cmpws(&emu_si, 0x14);
	if ((emu_flags.sf != emu_flags.of)) { f__B503_0A94_0005_7DAA(); return; }
	emu_xorw(&emu_si, emu_si);
	f__B503_0B5D_000B_D51E(); return;
}

/**
 * Decompiled function f__B503_0AFA_0009_4939()
 *
 * @name f__B503_0AFA_0009_4939
 * @implements B503:0AFA:0009:4939 ()
 *
 * Called From: B503:0A92:0013:847E
 */
void f__B503_0AFA_0009_4939()
{
	emu_cmpws(&emu_si, 0x14);
	if ((emu_flags.sf != emu_flags.of)) { f__B503_0A94_0005_7DAA(); return; }
	emu_xorw(&emu_si, emu_si);
	emu_ip = 0x0B5D; emu_last_cs = 0xB503; emu_last_ip = 0x0B01; emu_last_length = 0x0009; emu_last_crc = 0x4939; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B503_0B03_0005_6168()
 *
 * @name f__B503_0B03_0005_6168
 * @implements B503:0B03:0005:6168 ()
 *
 * Called From: B503:0B60:000B:D51E
 * Called From: B503:0B60:0015:24DA
 */
void f__B503_0B03_0005_6168()
{
	emu_push(emu_cs); emu_push(0x0B08); emu_cs = 0x2B6C; f__2B6C_0137_0020_C73F();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { ovl__3503(0xFF); }
	f__B503_0B08_0022_7823();
}

/**
 * Decompiled function f__B503_0B08_0022_7823()
 *
 * @name f__B503_0B08_0022_7823
 * @implements B503:0B08:0022:7823 ()
 *
 * Called From: B503:0B08:0005:6168
 */
void f__B503_0B08_0022_7823()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movw(&emu_ax.x, 0x10);
	emu_push(emu_ax.x);
	emu_testw(&emu_si, 0x1);
	if (emu_flags.zf) { f__B503_0B2A_000E_D91C(); return; }
	emu_movw(&emu_ax.x, 0xB0);
	f__B503_0B2D_000B_5BFC(); return;
}

/**
 * Decompiled function f__B503_0B2A_000E_D91C()
 *
 * @name f__B503_0B2A_000E_D91C
 * @implements B503:0B2A:000E:D91C ()
 *
 * Called From: B503:0B23:0022:7823
 */
void f__B503_0B2A_000E_D91C()
{
	emu_movw(&emu_ax.x, 0x10);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x353F);
	emu_movw(&emu_es, emu_ax.x);

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_es, 0x00,  0x6624);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_es, 0x00,  0x6626);
	emu_push(0x0B38);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A6034F: f__22A6_034F_000C_5E0A(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0xB503; emu_last_ip = 0x0B33; emu_last_length = 0x000E; emu_last_crc = 0xD91C;
			emu_call();
			return;
	}
	f__B503_0B38_0008_43E5();
}

/**
 * Decompiled function f__B503_0B2D_000B_5BFC()
 *
 * @name f__B503_0B2D_000B_5BFC
 * @implements B503:0B2D:000B:5BFC ()
 *
 * Called From: B503:0B28:0022:7823
 */
void f__B503_0B2D_000B_5BFC()
{
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x353F);
	emu_movw(&emu_es, emu_ax.x);

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_es, 0x00,  0x6624);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_es, 0x00,  0x6626);
	emu_push(0x0B38);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A6034F: f__22A6_034F_000C_5E0A(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0xB503; emu_last_ip = 0x0B33; emu_last_length = 0x000B; emu_last_crc = 0x5BFC;
			emu_call();
			return;
	}
	f__B503_0B38_0008_43E5();
}

/**
 * Decompiled function f__B503_0B38_0008_43E5()
 *
 * @name f__B503_0B38_0008_43E5
 * @implements B503:0B38:0008:43E5 ()
 *
 * Called From: B503:0B38:000E:D91C
 * Called From: B503:0B38:000B:5BFC
 */
void f__B503_0B38_0008_43E5()
{
	emu_addws(&emu_sp, 0x10);
	emu_push(emu_cs); emu_push(0x0B40); emu_cs = 0x2B6C; f__2B6C_0169_001E_6939();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { ovl__3503(0xFF); }
	f__B503_0B40_000E_6E77();
}

/**
 * Decompiled function f__B503_0B40_000E_6E77()
 *
 * @name f__B503_0B40_000E_6E77
 * @implements B503:0B40:000E:6E77 ()
 *
 * Called From: B503:0B40:0008:43E5
 */
void f__B503_0B40_000E_6E77()
{
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x76B6), 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x76B4), 0x14);
	f__B503_0B53_0015_24DA(); return;
}

/**
 * Decompiled function f__B503_0B4E_0005_FA3C()
 *
 * @name f__B503_0B4E_0005_FA3C
 * @implements B503:0B4E:0005:FA3C ()
 *
 * Called From: B503:0B5A:0015:24DA
 */
void f__B503_0B4E_0005_FA3C()
{
	emu_push(emu_cs);
	emu_push(0x0B53); f__B503_1343_003B_6432();
	f__B503_0B53_0015_24DA();
}

/**
 * Decompiled function f__B503_0B53_0015_24DA()
 *
 * @name f__B503_0B53_0015_24DA
 * @implements B503:0B53:0015:24DA ()
 *
 * Called From: B503:0B4C:000E:6E77
 * Called From: B503:0B53:0005:FA3C
 */
void f__B503_0B53_0015_24DA()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76B4));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76B6));
	if (!emu_flags.zf) { f__B503_0B4E_0005_FA3C(); return; }
	emu_incw(&emu_si);
	emu_cmpws(&emu_si, 0x4);
	if ((emu_flags.sf != emu_flags.of)) { f__B503_0B03_0005_6168(); return; }
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
 * Decompiled function f__B503_0B5D_000B_D51E()
 *
 * @name f__B503_0B5D_000B_D51E
 * @implements B503:0B5D:000B:D51E ()
 *
 * Called From: B503:0B01:000E:6476
 * Called From: B503:0B01:0011:0D32
 */
void f__B503_0B5D_000B_D51E()
{
	emu_cmpws(&emu_si, 0x4);
	if ((emu_flags.sf != emu_flags.of)) { f__B503_0B03_0005_6168(); return; }
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
 * Decompiled function f__B503_0B68_000D_957E()
 *
 * @name f__B503_0B68_000D_957E
 * @implements B503:0B68:000D:957E ()
 *
 * Called From: B503:0442:0009:B5CB
 */
void f__B503_0B68_000D_957E()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x4);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_si, 0x1);
	f__B503_0BA5_001A_2779(); return;
}

/**
 * Decompiled function f__B503_0BA5_001A_2779()
 *
 * @name f__B503_0BA5_001A_2779
 * @implements B503:0BA5:001A:2779 ()
 *
 * Called From: B503:0B73:000D:957E
 */
void f__B503_0BA5_001A_2779()
{
	emu_cmpw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0x6));
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { emu_ip = 0x0B75; emu_last_cs = 0xB503; emu_last_ip = 0x0BA8; emu_last_length = 0x001A; emu_last_crc = 0x2779; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00, -0x7E2C));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00, -0x7E2E));
	emu_addws(&emu_dx.x, 0x2);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_dx.x);
	emu_movw(&emu_di, 0x1);
	f__B503_0BDF_000F_D554(); return;
}

/**
 * Decompiled function f__B503_0BBF_0018_8CAA()
 *
 * @name f__B503_0BBF_0018_8CAA
 * @implements B503:0BBF:0018:8CAA ()
 *
 * Called From: B503:0BE6:000F:D554
 * Called From: B503:0BE6:0014:ECE4
 */
void f__B503_0BBF_0018_8CAA()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x0), 0xFF);
	if (emu_flags.zf) { f__B503_0BDA_0014_ECE4(); return; }
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_di);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_push(emu_cs);
	emu_push(0x0BD7); emu_ip = 0x0DFF; emu_last_cs = 0xB503; emu_last_ip = 0x0BD4; emu_last_length = 0x0018; emu_last_crc = 0x8CAA; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__B503_0BDA_0014_ECE4()
 *
 * @name f__B503_0BDA_0014_ECE4
 * @implements B503:0BDA:0014:ECE4 ()
 *
 * Called From: B503:0BC6:0018:8CAA
 */
void f__B503_0BDA_0014_ECE4()
{
	emu_addws(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x2);
	emu_incw(&emu_di);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x7E2E));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx.x,  0x0), emu_di);
	if (!(emu_flags.sf != emu_flags.of)) { f__B503_0BBF_0018_8CAA(); return; }
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
 * Decompiled function f__B503_0BDF_000F_D554()
 *
 * @name f__B503_0BDF_000F_D554
 * @implements B503:0BDF:000F:D554 ()
 *
 * Called From: B503:0BBD:001A:2779
 */
void f__B503_0BDF_000F_D554()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x7E2E));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx.x,  0x0), emu_di);
	if (!(emu_flags.sf != emu_flags.of)) { f__B503_0BBF_0018_8CAA(); return; }
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
 * Decompiled function f__B503_0CB3_001A_FEEE()
 *
 * @name f__B503_0CB3_001A_FEEE
 * @implements B503:0CB3:001A:FEEE ()
 *
 * Called From: B503:04CA:0013:3B9E
 */
void f__B503_0CB3_001A_FEEE()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x7E);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x2B41);
	emu_push(emu_ax.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0x14);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0CCD); emu_cs = 0x01F7; f__01F7_378D_0020_0F64();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { ovl__3503(0xFF); }
	f__B503_0CCD_0008_D6BB();
}

/**
 * Decompiled function f__B503_0CCD_0008_D6BB()
 *
 * @name f__B503_0CCD_0008_D6BB
 * @implements B503:0CCD:0008:D6BB ()
 *
 * Called From: B503:0CCD:001A:FEEE
 */
void f__B503_0CCD_0008_D6BB()
{
	emu_addws(&emu_sp, 0xA);
	emu_xorw(&emu_si, emu_si);
	f__B503_0DE5_0008_CB0E(); return;
}

/**
 * Decompiled function f__B503_0CD5_002E_9EAC()
 *
 * @name f__B503_0CD5_002E_9EAC
 * @implements B503:0CD5:002E:9EAC ()
 *
 * Called From: B503:0DEA:0008:CB0E
 * Called From: B503:0DEA:0009:CB2D
 */
void f__B503_0CD5_002E_9EAC()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3A38));
	emu_addw(&emu_ax.x, emu_si);
	emu_movw(&emu_bx.x, 0x6);
	emu_cwd();
	emu_idivw(&emu_ax.x, emu_bx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x1A), emu_dx.x);
	emu_movw(&emu_ax.x, 0x3);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x1A));
	emu_movw(&emu_dx.x, 0x1E);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, emu_bx.x,  0x37FA));
	emu_push(emu_get_memory16(emu_ds, emu_bx.x,  0x37F8));
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0xA);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0D03); emu_cs = 0x01F7; f__01F7_39C4_0031_EE87();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { ovl__3503(0xFF); }
	f__B503_0D03_002D_828A();
}

/**
 * Decompiled function f__B503_0D03_002D_828A()
 *
 * @name f__B503_0D03_002D_828A
 * @implements B503:0D03:002D:828A ()
 *
 * Called From: B503:0D03:002E:9EAC
 */
void f__B503_0D03_002D_828A()
{
	emu_addws(&emu_sp, 0xA);
	emu_movb(&emu_get_memory8(emu_ss, emu_bp, -0x7), 0x0);
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x7E24));
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x7E26));
	emu_movw(&emu_ax.x, 0x63);
	emu_push(emu_ax.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0x7E);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0xA);
	emu_push(emu_ax.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0x14);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0D30); emu_cs = 0x34FC; ovl__34FC(1);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { ovl__3503(0xFF); }
	f__B503_0D30_000A_9015();
}

/**
 * Decompiled function f__B503_0D30_000A_9015()
 *
 * @name f__B503_0D30_000A_9015
 * @implements B503:0D30:000A:9015 ()
 *
 * Called From: B503:0D30:002D:828A
 */
void f__B503_0D30_000A_9015()
{
	emu_addws(&emu_sp, 0x16);
	emu_orw(&emu_ax.x, emu_dx.x);
	if (!emu_flags.zf) { f__B503_0D3A_0017_BC75(); return; }
	f__B503_0DE4_0009_CB2D(); return;
}

/**
 * Decompiled function f__B503_0D3A_0017_BC75()
 *
 * @name f__B503_0D3A_0017_BC75
 * @implements B503:0D3A:0017:BC75 ()
 *
 * Called From: B503:0D35:000A:9015
 */
void f__B503_0D3A_0017_BC75()
{
	emu_movw(&emu_ax.x, emu_bp - 0x7F);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x16), emu_ss);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x18), emu_ax.x);
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x18));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x16));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x18));
	emu_push(emu_cs); emu_push(0x0D51); emu_cs = 0x01F7; f__01F7_2252_0045_03CB();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { ovl__3503(0xFF); }
	f__B503_0D51_0024_968B();
}

/**
 * Decompiled function f__B503_0D43_000E_7F53()
 *
 * @name f__B503_0D43_000E_7F53
 * @implements B503:0D43:000E:7F53 ()
 *
 * Called From: B503:0DE1:0021:7B5F
 */
void f__B503_0D43_000E_7F53()
{
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x18));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x16));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x18));
	emu_push(emu_cs); emu_push(0x0D51); emu_cs = 0x01F7; f__01F7_2252_0045_03CB();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { ovl__3503(0xFF); }
	f__B503_0D51_0024_968B();
}

/**
 * Decompiled function f__B503_0D51_0024_968B()
 *
 * @name f__B503_0D51_0024_968B
 * @implements B503:0D51:0024:968B ()
 *
 * Called From: B503:0D51:0017:BC75
 * Called From: B503:0D51:000E:7F53
 */
void f__B503_0D51_0024_968B()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_di, emu_ax.x);
	emu_orw(&emu_di, emu_di);
	if (emu_flags.zf) { emu_ip = 0x0DC1; emu_last_cs = 0xB503; emu_last_ip = 0x0D57; emu_last_length = 0x0024; emu_last_crc = 0x968B; emu_call(); return; } // Jump does not resolve
	emu_push(emu_di);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x37B6));
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_addw(&emu_ax.x, 0x2AF8);
	emu_push(emu_ds);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x2B62);
	emu_push(emu_ax.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0xA);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0D75); emu_cs = 0x01F7; f__01F7_378D_0020_0F64();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { ovl__3503(0xFF); }
	f__B503_0D75_0029_3F1C();
}

/**
 * Decompiled function f__B503_0D75_0029_3F1C()
 *
 * @name f__B503_0D75_0029_3F1C
 * @implements B503:0D75:0029:3F1C ()
 *
 * Called From: B503:0D75:0024:968B
 */
void f__B503_0D75_0029_3F1C()
{
	emu_addws(&emu_sp, 0xE);
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x7E24));
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x7E26));
	emu_movw(&emu_ax.x, 0x50);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x9939);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0xA);
	emu_push(emu_ax.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0x14);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0D9E); emu_cs = 0x34FC; ovl__34FC(1);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { ovl__3503(0xFF); }
	f__B503_0D9E_0011_3CD7();
}

/**
 * Decompiled function f__B503_0D9E_0011_3CD7()
 *
 * @name f__B503_0D9E_0011_3CD7
 * @implements B503:0D9E:0011:3CD7 ()
 *
 * Called From: B503:0D9E:0029:3F1C
 */
void f__B503_0D9E_0011_3CD7()
{
	emu_addws(&emu_sp, 0x16);
	emu_orw(&emu_ax.x, emu_dx.x);
	if (emu_flags.zf) { f__B503_0DB1_000D_8A41(); return; }
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x9939);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x0DAF); f__B503_0F0C_0010_028B();
	f__B503_0DAF_000F_3925();
}

/**
 * Decompiled function f__B503_0DAF_000F_3925()
 *
 * @name f__B503_0DAF_000F_3925
 * @implements B503:0DAF:000F:3925 ()
 *
 * Called From: B503:0DAF:0011:3CD7
 */
void f__B503_0DAF_000F_3925()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_push(emu_di);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x1A));
	emu_push(emu_cs);
	emu_push(0x0DBE); f__B503_0DFF_0012_112D();
	f__B503_0DBE_0005_856E();
}

/**
 * Decompiled function f__B503_0DB1_000D_8A41()
 *
 * @name f__B503_0DB1_000D_8A41
 * @implements B503:0DB1:000D:8A41 ()
 *
 * Called From: B503:0DA3:0011:3CD7
 */
void f__B503_0DB1_000D_8A41()
{
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_push(emu_di);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x1A));
	emu_push(emu_cs);
	emu_push(0x0DBE); f__B503_0DFF_0012_112D();
	f__B503_0DBE_0005_856E();
}

/**
 * Decompiled function f__B503_0DBE_0005_856E()
 *
 * @name f__B503_0DBE_0005_856E
 * @implements B503:0DBE:0005:856E ()
 *
 * Called From: B503:0DBE:000F:3925
 * Called From: B503:0DBE:000D:8A41
 */
void f__B503_0DBE_0005_856E()
{
	emu_addws(&emu_sp, 0x6);
	f__B503_0DC6_001E_D498(); return;
}

/**
 * Decompiled function f__B503_0DC3_0021_7B5F()
 *
 * @name f__B503_0DC3_0021_7B5F
 * @implements B503:0DC3:0021:7B5F ()
 *
 * Called From: B503:0DD6:001E:D498
 * Called From: B503:0DD6:0021:7B5F
 */
void f__B503_0DC3_0021_7B5F()
{
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x18));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x18));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0x0);
	if (emu_flags.zf) { f__B503_0DD8_000C_5739(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x18));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0x2C);
	if (!emu_flags.zf) { f__B503_0DC3_0021_7B5F(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x18));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0x2C);
	if (!emu_flags.zf) { emu_ip = 0x0DE4; emu_last_cs = 0xB503; emu_last_ip = 0x0DDF; emu_last_length = 0x0021; emu_last_crc = 0x7B5F; emu_call(); return; } // Jump does not resolve
	f__B503_0D43_000E_7F53(); return;
}

/**
 * Decompiled function f__B503_0DC6_001E_D498()
 *
 * @name f__B503_0DC6_001E_D498
 * @implements B503:0DC6:001E:D498 ()
 *
 * Called From: B503:0DC1:0005:856E
 */
void f__B503_0DC6_001E_D498()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x18));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0x0);
	if (emu_flags.zf) { emu_ip = 0x0DD8; emu_last_cs = 0xB503; emu_last_ip = 0x0DCD; emu_last_length = 0x001E; emu_last_crc = 0xD498; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x18));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0x2C);
	if (!emu_flags.zf) { f__B503_0DC3_0021_7B5F(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x18));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0x2C);
	if (!emu_flags.zf) { emu_ip = 0x0DE4; emu_last_cs = 0xB503; emu_last_ip = 0x0DDF; emu_last_length = 0x001E; emu_last_crc = 0xD498; emu_call(); return; } // Jump does not resolve
	emu_ip = 0x0D43; emu_last_cs = 0xB503; emu_last_ip = 0x0DE1; emu_last_length = 0x001E; emu_last_crc = 0xD498; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B503_0DD8_000C_5739()
 *
 * @name f__B503_0DD8_000C_5739
 * @implements B503:0DD8:000C:5739 ()
 *
 * Called From: B503:0DCD:0021:7B5F
 */
void f__B503_0DD8_000C_5739()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x18));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0x2C);
	if (!emu_flags.zf) { f__B503_0DE4_0009_CB2D(); return; }
	emu_ip = 0x0D43; emu_last_cs = 0xB503; emu_last_ip = 0x0DE1; emu_last_length = 0x000C; emu_last_crc = 0x5739; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B503_0DE4_0009_CB2D()
 *
 * @name f__B503_0DE4_0009_CB2D
 * @implements B503:0DE4:0009:CB2D ()
 *
 * Called From: B503:0D37:000A:9015
 * Called From: B503:0DDF:000C:5739
 */
void f__B503_0DE4_0009_CB2D()
{
	emu_incw(&emu_si);
	emu_cmpws(&emu_si, 0x6);
	if (!(emu_flags.sf != emu_flags.of)) { f__B503_0DED_000A_E38E(); return; }
	f__B503_0CD5_002E_9EAC(); return;
}

/**
 * Decompiled function f__B503_0DE5_0008_CB0E()
 *
 * @name f__B503_0DE5_0008_CB0E
 * @implements B503:0DE5:0008:CB0E ()
 *
 * Called From: B503:0CD2:0008:D6BB
 */
void f__B503_0DE5_0008_CB0E()
{
	emu_cmpws(&emu_si, 0x6);
	if (!(emu_flags.sf != emu_flags.of)) { emu_ip = 0x0DED; emu_last_cs = 0xB503; emu_last_ip = 0x0DE8; emu_last_length = 0x0008; emu_last_crc = 0xCB0E; emu_call(); return; } // Jump does not resolve
	f__B503_0CD5_002E_9EAC(); return;
}

/**
 * Decompiled function f__B503_0DED_000A_E38E()
 *
 * @name f__B503_0DED_000A_E38E
 * @implements B503:0DED:000A:E38E ()
 *
 * Called From: B503:0DE8:0009:CB2D
 */
void f__B503_0DED_000A_E38E()
{
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x2B1D);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x0DF7); f__B503_0F0C_0010_028B();
	f__B503_0DF7_0008_AE7C();
}

/**
 * Decompiled function f__B503_0DF7_0008_AE7C()
 *
 * @name f__B503_0DF7_0008_AE7C
 * @implements B503:0DF7:0008:AE7C ()
 *
 * Called From: B503:0DF7:000A:E38E
 */
void f__B503_0DF7_0008_AE7C()
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
 * Decompiled function f__B503_0DFF_0012_112D()
 *
 * @name f__B503_0DFF_0012_112D
 * @implements B503:0DFF:0012:112D ()
 *
 * Called From: B503:0DBB:000F:3925
 * Called From: B503:0DBB:000D:8A41
 */
void f__B503_0DFF_0012_112D()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0xC);
	emu_push(emu_si);
	emu_movw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x0E11); emu_cs = 0x34B8; ovl__34B8(3);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { ovl__3503(0xFF); }
	f__B503_0E11_0011_B034();
}

/**
 * Decompiled function f__B503_0E11_0011_B034()
 *
 * @name f__B503_0E11_0011_B034
 * @implements B503:0E11:0011:B034 ()
 *
 * Called From: 261F:01B9:001B:EDBF
 * Called From: B503:0E11:0012:112D
 */
void f__B503_0E11_0011_B034()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_si);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x2B46);
	emu_push(emu_ax.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0x4);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0E22); emu_cs = 0x01F7; f__01F7_378D_0020_0F64();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { ovl__3503(0xFF); }
	f__B503_0E22_0029_A120();
}

/**
 * Decompiled function f__B503_0E22_0029_A120()
 *
 * @name f__B503_0E22_0029_A120
 * @implements B503:0E22:0029:A120 ()
 *
 * Called From: B503:0E22:0011:B034
 */
void f__B503_0E22_0029_A120()
{
	emu_addws(&emu_sp, 0xA);
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x7E24));
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x7E26));
	emu_movw(&emu_ax.x, 0x50);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x9939);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0x4);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x2B5B);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0E4B); emu_cs = 0x34FC; ovl__34FC(1);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { ovl__3503(0xFF); }
	f__B503_0E4B_001C_7696();
}

/**
 * Decompiled function f__B503_0E4B_001C_7696()
 *
 * @name f__B503_0E4B_001C_7696
 * @implements B503:0E4B:001C:7696 ()
 *
 * Called From: B503:0E4B:0029:A120
 */
void f__B503_0E4B_001C_7696()
{
	emu_addws(&emu_sp, 0x16);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0x8);
	emu_push(emu_ax.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0x6);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x2B55);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x9939);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0E67); emu_cs = 0x01F7; f__01F7_3803_001E_AAD4();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { ovl__3503(0xFF); }
	f__B503_0E67_0011_F8C9();
}

/**
 * Decompiled function f__B503_0E67_0011_F8C9()
 *
 * @name f__B503_0E67_0011_F8C9
 * @implements B503:0E67:0011:F8C9 ()
 *
 * Called From: B503:0E67:001C:7696
 */
void f__B503_0E67_0011_F8C9()
{
	emu_addws(&emu_sp, 0x10);
	emu_push(emu_si);
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x7E1C));
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x7E1E));
	emu_push(emu_cs); emu_push(0x0E78); emu_cs = 0x2903; f__2903_007A_0032_762D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { ovl__3503(0xFF); }
	f__B503_0E78_0039_5737();
}

/**
 * Decompiled function f__B503_0E78_0039_5737()
 *
 * @name f__B503_0E78_0039_5737
 * @implements B503:0E78:0039:5737 ()
 *
 * Called From: B503:0E78:0011:F8C9
 */
void f__B503_0E78_0039_5737()
{
	emu_addws(&emu_sp, 0x6);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_ax.x);
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3C44));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3C42));
	emu_movw(&emu_ax.x, 0x100);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_addw(&emu_ax.x, 0x18);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_addw(&emu_ax.x, 0x8);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_movw(&emu_ax.x, 0x3);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0EB1); emu_cs = 0x2903; f__2903_0158_001A_2931();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { ovl__3503(0xFF); }
	f__B503_0EB1_0011_8F4C();
}

/**
 * Decompiled function f__B503_0EB1_0011_8F4C()
 *
 * @name f__B503_0EB1_0011_8F4C
 * @implements B503:0EB1:0011:8F4C ()
 *
 * Called From: B503:0EB1:0039:5737
 */
void f__B503_0EB1_0011_8F4C()
{
	emu_addws(&emu_sp, 0x14);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0xA), 0x0);
	if (emu_flags.zf) { emu_ip = 0x0F07; emu_last_cs = 0xB503; emu_last_ip = 0x0EB8; emu_last_length = 0x0011; emu_last_crc = 0x8F4C; emu_call(); return; } // Jump does not resolve
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x0EC2); f__B503_13C2_0008_C4BB();
	f__B503_0EC2_0008_3318();
}

/**
 * Decompiled function f__B503_0EC2_0008_3318()
 *
 * @name f__B503_0EC2_0008_3318
 * @implements B503:0EC2:0008:3318 ()
 *
 * Called From: B503:0EC2:0011:8F4C
 */
void f__B503_0EC2_0008_3318()
{
	emu_orw(&emu_ax.x, emu_ax.x);
	if (emu_flags.zf) { f__B503_0ECA_0016_7A82(); return; }
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_ip = 0x0ECD; emu_last_cs = 0xB503; emu_last_ip = 0x0EC8; emu_last_length = 0x0008; emu_last_crc = 0x3318; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B503_0ECA_0016_7A82()
 *
 * @name f__B503_0ECA_0016_7A82
 * @implements B503:0ECA:0016:7A82 ()
 *
 * Called From: B503:0EC4:0008:3318
 */
void f__B503_0ECA_0016_7A82()
{
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_cs); emu_push(0x0EE0); emu_cs = 0x260F; f__260F_0054_0016_0011();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { ovl__3503(0xFF); }
	f__B503_0EE0_000E_69BD();
}

/**
 * Decompiled function f__B503_0EE0_000E_69BD()
 *
 * @name f__B503_0EE0_000E_69BD
 * @implements B503:0EE0:000E:69BD ()
 *
 * Called From: B503:0EE0:0016:7A82
 */
void f__B503_0EE0_000E_69BD()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_cs); emu_push(0x0EEE); emu_cs = 0x260F; f__260F_003A_0014_CA10();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { ovl__3503(0xFF); }
	f__B503_0EEE_0016_1B71();
}

/**
 * Decompiled function f__B503_0EEE_0016_1B71()
 *
 * @name f__B503_0EEE_0016_1B71
 * @implements B503:0EEE:0016:1B71 ()
 *
 * Called From: B503:0EEE:000E:69BD
 */
void f__B503_0EEE_0016_1B71()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_addw(&emu_ax.x, 0x18);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_addw(&emu_ax.x, 0x8);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0F04); emu_cs = 0x3488; ovl__3488(0);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { ovl__3503(0xFF); }
	f__B503_0F04_0008_4947();
}

/**
 * Decompiled function f__B503_0F04_0008_4947()
 *
 * @name f__B503_0F04_0008_4947
 * @implements B503:0F04:0008:4947 ()
 *
 * Called From: B503:0F04:0016:1B71
 */
void f__B503_0F04_0008_4947()
{
	emu_addws(&emu_sp, 0x10);
	emu_pop(&emu_si);
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B503_0F0C_0010_028B()
 *
 * @name f__B503_0F0C_0010_028B
 * @implements B503:0F0C:0010:028B ()
 *
 * Called From: B503:02E7:0008:662D
 * Called From: B503:0385:0008:E584
 * Called From: B503:03EB:0008:65A2
 * Called From: B503:04EA:0008:2522
 * Called From: B503:084E:000C:45BE
 * Called From: B503:0DAC:0011:3CD7
 * Called From: B503:0DF4:000A:E38E
 */
void f__B503_0F0C_0010_028B()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x2);
	emu_push(emu_si);
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0F1C); emu_cs = 0x2598; f__2598_0000_0017_EB80();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { ovl__3503(0xFF); }
	f__B503_0F1C_0028_4A19();
}

/**
 * Decompiled function f__B503_0F1C_0028_4A19()
 *
 * @name f__B503_0F1C_0028_4A19
 * @implements B503:0F1C:0028:4A19 ()
 *
 * Called From: B503:0F1C:0010:028B
 */
void f__B503_0F1C_0028_4A19()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0xE);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x18);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0xBA);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x8);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0xA5);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x8);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0F44); emu_cs = 0x24D0; f__24D0_000D_0039_C17D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { ovl__3503(0xFF); }
	f__B503_0F44_0015_E236();
}

/**
 * Decompiled function f__B503_0F44_0015_E236()
 *
 * @name f__B503_0F44_0015_E236
 * @implements B503:0F44:0015:E236 ()
 *
 * Called From: B503:0F44:0028:4A19
 */
void f__B503_0F44_0015_E236()
{
	emu_addws(&emu_sp, 0x10);
	emu_movw(&emu_ax.x, 0xBA);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x40);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x353F);
	emu_movw(&emu_es, emu_ax.x);

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_es, 0x00,  0x666C);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_es, 0x00,  0x666E);
	emu_push(0x0F59);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A60E34: f__22A6_0E34_002B_E39A(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0xB503; emu_last_ip = 0x0F54; emu_last_length = 0x0015; emu_last_crc = 0xE236;
			emu_call();
			return;
	}
	f__B503_0F59_001D_21BD();
}

/**
 * Decompiled function f__B503_0F59_001D_21BD()
 *
 * @name f__B503_0F59_001D_21BD
 * @implements B503:0F59:001D:21BD ()
 *
 * Called From: B503:0F59:0015:E236
 */
void f__B503_0F59_001D_21BD()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0xB9);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0xFF);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0xAC);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x40);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x353F);
	emu_movw(&emu_es, emu_ax.x);

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_es, 0x00,  0x6668);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_es, 0x00,  0x666A);
	emu_push(0x0F76);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A60D31: f__22A6_0D31_0015_A4C3(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0xB503; emu_last_ip = 0x0F71; emu_last_length = 0x001D; emu_last_crc = 0x21BD;
			emu_call();
			return;
	}
	f__B503_0F76_0021_0C50();
}

/**
 * Decompiled function f__B503_0F76_0021_0C50()
 *
 * @name f__B503_0F76_0021_0C50
 * @implements B503:0F76:0021:0C50 ()
 *
 * Called From: B503:0F76:001D:21BD
 */
void f__B503_0F76_0021_0C50()
{
	emu_addws(&emu_sp, 0xA);
	emu_movw(&emu_ax.x, 0x12);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0xC);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0xAF);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x40);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x0F97); emu_cs = 0x10E4; f__10E4_1EF1_0040_01F8();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { ovl__3503(0xFF); }
	f__B503_0F97_0005_85EE();
}

/**
 * Decompiled function f__B503_0F97_0005_85EE()
 *
 * @name f__B503_0F97_0005_85EE
 * @implements B503:0F97:0005:85EE ()
 *
 * Called From: B503:0F97:0021:0C50
 */
void f__B503_0F97_0005_85EE()
{
	emu_addws(&emu_sp, 0xE);
	f__B503_0F9C_0020_EDC6(); return;
}

/**
 * Decompiled function f__B503_0F9C_0020_EDC6()
 *
 * @name f__B503_0F9C_0020_EDC6
 * @implements B503:0F9C:0020:EDC6 ()
 *
 * Called From: B503:0F9A:0005:85EE
 */
void f__B503_0F9C_0020_EDC6()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76AE));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76AC));
	emu_addws(&emu_dx.x, 0x5A);
	emu_adcw(&emu_ax.x, 0x0);
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x2B0E));
	if (emu_flags.cf) { emu_ip = 0x0F9C; emu_last_cs = 0xB503; emu_last_ip = 0x0FAD; emu_last_length = 0x0020; emu_last_crc = 0xEDC6; emu_call(); return; } // Jump does not resolve
	if (!emu_flags.zf) { emu_ip = 0x0FB7; emu_last_cs = 0xB503; emu_last_ip = 0x0FAF; emu_last_length = 0x0020; emu_last_crc = 0xEDC6; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x2B0C));
	if (emu_flags.cf) { emu_ip = 0x0F9C; emu_last_cs = 0xB503; emu_last_ip = 0x0FB5; emu_last_length = 0x0020; emu_last_crc = 0xEDC6; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_si, 0xB9);
	f__B503_1001_0022_259B(); return;
}

/**
 * Decompiled function f__B503_0FBC_0021_44B2()
 *
 * @name f__B503_0FBC_0021_44B2
 * @implements B503:0FBC:0021:44B2 ()
 *
 * Called From: B503:1005:0022:259B
 * Called From: B503:1005:0023:2C5B
 */
void f__B503_0FBC_0021_44B2()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0xE);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x18);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0xA5);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x8);
	emu_push(emu_ax.x);
	emu_push(emu_si);
	emu_movw(&emu_ax.x, 0x8);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0FDD); emu_cs = 0x24D0; f__24D0_000D_0039_C17D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { ovl__3503(0xFF); }
	f__B503_0FDD_0011_7DB2();
}

/**
 * Decompiled function f__B503_0FDD_0011_7DB2()
 *
 * @name f__B503_0FDD_0011_7DB2
 * @implements B503:0FDD:0011:7DB2 ()
 *
 * Called From: B503:0FDD:0021:44B2
 */
void f__B503_0FDD_0011_7DB2()
{
	emu_addws(&emu_sp, 0x10);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x76B6), 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x76B4), 0x3);
	f__B503_0FEE_000E_EEE2(); return;
}

/**
 * Decompiled function f__B503_0FEE_000E_EEE2()
 *
 * @name f__B503_0FEE_000E_EEE2
 * @implements B503:0FEE:000E:EEE2 ()
 *
 * Called From: B503:0FEC:0011:7DB2
 * Called From: B503:0FFE:0027:CFE0
 */
void f__B503_0FEE_000E_EEE2()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76B4));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76B6));
	if (emu_flags.zf) { f__B503_1000_0023_2C5B(); return; }
	emu_push(emu_cs);
	emu_push(0x0FFC); f__B503_13C2_0008_C4BB();
	f__B503_0FFC_0027_CFE0();
}

/**
 * Decompiled function f__B503_0FFC_0027_CFE0()
 *
 * @name f__B503_0FFC_0027_CFE0
 * @implements B503:0FFC:0027:CFE0 ()
 *
 * Called From: B503:0FFC:000E:EEE2
 */
void f__B503_0FFC_0027_CFE0()
{
	emu_orw(&emu_ax.x, emu_ax.x);
	if (emu_flags.zf) { f__B503_0FEE_000E_EEE2(); return; }
	emu_decw(&emu_si);
	emu_cmpw(&emu_si, 0xAC);
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { emu_ip = 0x0FBC; emu_last_cs = 0xB503; emu_last_ip = 0x1005; emu_last_length = 0x0027; emu_last_crc = 0xCFE0; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76AE));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76AC));
	emu_addws(&emu_dx.x, 0x5A);
	emu_adcw(&emu_ax.x, 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x2B0E), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x2B0C), emu_dx.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_cs); emu_push(0x1023); emu_cs = 0x2598; emu_ip = 0x1023; emu_last_cs = 0xB503; emu_last_ip = 0x101E; emu_last_length = 0x0027; emu_last_crc = 0xCFE0; emu_call(); // Jump does not resolve
	f__B503_1023_0006_EFCE();
}

/**
 * Decompiled function f__B503_1000_0023_2C5B()
 *
 * @name f__B503_1000_0023_2C5B
 * @implements B503:1000:0023:2C5B ()
 *
 * Called From: B503:0FF5:000E:EEE2
 */
void f__B503_1000_0023_2C5B()
{
	emu_decw(&emu_si);
	emu_cmpw(&emu_si, 0xAC);
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__B503_0FBC_0021_44B2(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76AE));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76AC));
	emu_addws(&emu_dx.x, 0x5A);
	emu_adcw(&emu_ax.x, 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x2B0E), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x2B0C), emu_dx.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_cs); emu_push(0x1023); emu_cs = 0x2598; f__2598_0000_0017_EB80();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { ovl__3503(0xFF); }
	f__B503_1023_0006_EFCE();
}

/**
 * Decompiled function f__B503_1001_0022_259B()
 *
 * @name f__B503_1001_0022_259B
 * @implements B503:1001:0022:259B ()
 *
 * Called From: B503:0FBA:0020:EDC6
 */
void f__B503_1001_0022_259B()
{
	emu_cmpw(&emu_si, 0xAC);
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__B503_0FBC_0021_44B2(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76AE));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76AC));
	emu_addws(&emu_dx.x, 0x5A);
	emu_adcw(&emu_ax.x, 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x2B0E), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x2B0C), emu_dx.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_cs); emu_push(0x1023); emu_cs = 0x2598; emu_ip = 0x1023; emu_last_cs = 0xB503; emu_last_ip = 0x101E; emu_last_length = 0x0022; emu_last_crc = 0x259B; emu_call(); // Jump does not resolve
	f__B503_1023_0006_EFCE();
}

/**
 * Decompiled function f__B503_1023_0006_EFCE()
 *
 * @name f__B503_1023_0006_EFCE
 * @implements B503:1023:0006:EFCE ()
 *
 * Called From: B503:1023:0023:2C5B
 */
void f__B503_1023_0006_EFCE()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_si);
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B503_1029_000F_8100()
 *
 * @name f__B503_1029_000F_8100
 * @implements B503:1029:000F:8100 ()
 *
 * Called From: B503:0324:0011:E66D
 */
void f__B503_1029_000F_8100()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x8);
	emu_movw(&emu_ax.x, 0x5);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x1038); emu_cs = 0x252E; f__252E_0001_0018_08B3();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { ovl__3503(0xFF); }
	f__B503_1038_0026_D203();
}

/**
 * Decompiled function f__B503_1038_0026_D203()
 *
 * @name f__B503_1038_0026_D203
 * @implements B503:1038:0026:D203 ()
 *
 * Called From: B503:1038:000F:8100
 */
void f__B503_1038_0026_D203()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x7E28), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x7E2A), emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_movw(&emu_ax.x, 0x5);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x5);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x2B6A);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x105E); emu_cs = 0x253D; f__253D_00FA_0010_873D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { ovl__3503(0xFF); }
	f__B503_105E_000E_E9C5();
}

/**
 * Decompiled function f__B503_105E_000E_E9C5()
 *
 * @name f__B503_105E_000E_E9C5
 * @implements B503:105E:000E:E9C5 ()
 *
 * Called From: B503:105E:0026:D203
 */
void f__B503_105E_000E_E9C5()
{
	emu_addws(&emu_sp, 0xC);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs);
	emu_push(0x106C); f__B503_116F_001B_4CA0();
	f__B503_106C_0017_539E();
}

/**
 * Decompiled function f__B503_106C_0017_539E()
 *
 * @name f__B503_106C_0017_539E
 * @implements B503:106C:0017:539E ()
 *
 * Called From: B503:106C:000E:E9C5
 */
void f__B503_106C_0017_539E()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x1083); emu_cs = 0x2B0E; f__2B0E_00D0_0022_EC76();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { ovl__3503(0xFF); }
	f__B503_1083_001F_216D();
}

/**
 * Decompiled function f__B503_1083_001F_216D()
 *
 * @name f__B503_1083_001F_216D
 * @implements B503:1083:001F:216D ()
 *
 * Called From: B503:1083:0017:539E
 */
void f__B503_1083_001F_216D()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x7E1C), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x7E1E), emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x2B75);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x10A2); f__B503_11BE_0016_067A();
	f__B503_10A2_0018_95A5();
}

/**
 * Decompiled function f__B503_10A2_0018_95A5()
 *
 * @name f__B503_10A2_0018_95A5
 * @implements B503:10A2:0018:95A5 ()
 *
 * Called From: B503:10A2:001F:216D
 */
void f__B503_10A2_0018_95A5()
{
	emu_addws(&emu_sp, 0x8);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x10BA); emu_cs = 0x2B0E; f__2B0E_00D0_0022_EC76();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { ovl__3503(0xFF); }
	f__B503_10BA_001F_94FC();
}

/**
 * Decompiled function f__B503_10BA_001F_94FC()
 *
 * @name f__B503_10BA_001F_94FC
 * @implements B503:10BA:001F:94FC ()
 *
 * Called From: B503:10BA:0018:95A5
 */
void f__B503_10BA_001F_94FC()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x7E20), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x7E22), emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x2B80);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x10D9); f__B503_11BE_0016_067A();
	f__B503_10D9_0018_95A5();
}

/**
 * Decompiled function f__B503_10D9_0018_95A5()
 *
 * @name f__B503_10D9_0018_95A5
 * @implements B503:10D9:0018:95A5 ()
 *
 * Called From: B503:10D9:001F:94FC
 */
void f__B503_10D9_0018_95A5()
{
	emu_addws(&emu_sp, 0x8);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x10F1); emu_cs = 0x2B0E; f__2B0E_00D0_0022_EC76();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { ovl__3503(0xFF); }
	f__B503_10F1_0031_8BDC();
}

/**
 * Decompiled function f__B503_10F1_0031_8BDC()
 *
 * @name f__B503_10F1_0031_8BDC
 * @implements B503:10F1:0031:8BDC ()
 *
 * Called From: B503:10F1:0018:95A5
 */
void f__B503_10F1_0031_8BDC()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x7E24), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x7E26), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3A38));
	emu_movw(&emu_dx.x, 0x1E);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, emu_bx.x,  0x37F8));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x0));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x2B8B);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x9939);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x1122); emu_cs = 0x01F7; f__01F7_378D_0020_0F64();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { ovl__3503(0xFF); }
	f__B503_1122_0013_4363();
}

/**
 * Decompiled function f__B503_1122_0013_4363()
 *
 * @name f__B503_1122_0013_4363
 * @implements B503:1122:0013:4363 ()
 *
 * Called From: B503:1122:0031:8BDC
 */
void f__B503_1122_0013_4363()
{
	emu_addws(&emu_sp, 0xA);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x9939);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x1135); f__B503_11BE_0016_067A();
	f__B503_1135_0018_95A5();
}

/**
 * Decompiled function f__B503_1135_0018_95A5()
 *
 * @name f__B503_1135_0018_95A5
 * @implements B503:1135:0018:95A5 ()
 *
 * Called From: B503:1135:0013:4363
 */
void f__B503_1135_0018_95A5()
{
	emu_addws(&emu_sp, 0x8);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x114D); emu_cs = 0x2B0E; f__2B0E_00D0_0022_EC76();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { ovl__3503(0xFF); }
	f__B503_114D_0014_2120();
}

/**
 * Decompiled function f__B503_114D_0014_2120()
 *
 * @name f__B503_114D_0014_2120
 * @implements B503:114D:0014:2120 ()
 *
 * Called From: B503:114D:0018:95A5
 */
void f__B503_114D_0014_2120()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x7E2C), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x7E2E), emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x1161); f__B503_122D_002D_E562();
	f__B503_1161_000E_6657();
}

/**
 * Decompiled function f__B503_1161_000E_6657()
 *
 * @name f__B503_1161_000E_6657
 * @implements B503:1161:000E:6657 ()
 *
 * Called From: B503:1161:0014:2120
 */
void f__B503_1161_000E_6657()
{
	emu_shlw(&emu_ax.x, 0x1);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax.x);
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B503_116F_001B_4CA0()
 *
 * @name f__B503_116F_001B_4CA0
 * @implements B503:116F:001B:4CA0 ()
 *
 * Called From: B503:1069:000E:E9C5
 */
void f__B503_116F_001B_4CA0()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x4);
	emu_push(emu_si);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_addw(&emu_dx.x, 0x1E08);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_dx.x);
	emu_xorw(&emu_si, emu_si);
	f__B503_11AD_000C_9246(); return;
}

/**
 * Decompiled function f__B503_118A_0015_612E()
 *
 * @name f__B503_118A_0015_612E
 * @implements B503:118A:0015:612E ()
 *
 * Called From: B503:11B0:000C:9246
 * Called From: B503:11B0:001A:722E
 */
void f__B503_118A_0015_612E()
{
	emu_movw(&emu_ax.x, 0x130);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x119F); emu_cs = 0x01F7; f__01F7_28B8_0024_83C9();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { ovl__3503(0xFF); }
	f__B503_119F_001A_722E();
}

/**
 * Decompiled function f__B503_119F_001A_722E()
 *
 * @name f__B503_119F_001A_722E
 * @implements B503:119F:001A:722E ()
 *
 * Called From: B503:119F:0015:612E
 */
void f__B503_119F_001A_722E()
{
	emu_addws(&emu_sp, 0xA);
	emu_addw(&emu_get_memory16(emu_ss, emu_bp,  0x6), 0x130);
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x140);
	emu_incw(&emu_si);
	emu_cmpws(&emu_si, 0x78);
	if ((emu_flags.sf != emu_flags.of)) { f__B503_118A_0015_612E(); return; }
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_movw(&emu_ax.x, 0x8E80);
	f__B503_11B9_0005_8BCF(); return;
}

/**
 * Decompiled function f__B503_11AD_000C_9246()
 *
 * @name f__B503_11AD_000C_9246
 * @implements B503:11AD:000C:9246 ()
 *
 * Called From: B503:1188:001B:4CA0
 */
void f__B503_11AD_000C_9246()
{
	emu_cmpws(&emu_si, 0x78);
	if ((emu_flags.sf != emu_flags.of)) { f__B503_118A_0015_612E(); return; }
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_movw(&emu_ax.x, 0x8E80);
	emu_ip = 0x11B9; emu_last_cs = 0xB503; emu_last_ip = 0x11B7; emu_last_length = 0x000C; emu_last_crc = 0x9246; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B503_11B9_0005_8BCF()
 *
 * @name f__B503_11B9_0005_8BCF
 * @implements B503:11B9:0005:8BCF ()
 *
 * Called From: B503:11B7:001A:722E
 */
void f__B503_11B9_0005_8BCF()
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
 * Decompiled function f__B503_11BE_0016_067A()
 *
 * @name f__B503_11BE_0016_067A
 * @implements B503:11BE:0016:067A ()
 *
 * Called From: B503:109F:001F:216D
 * Called From: B503:10D6:001F:94FC
 * Called From: B503:1132:0013:4363
 */
void f__B503_11BE_0016_067A()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x4);
	emu_push(emu_si);
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x11D4); emu_cs = 0x1FB5; f__1FB5_01FA_0010_F89C();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { ovl__3503(0xFF); }
	f__B503_11D4_0015_4655();
}

/**
 * Decompiled function f__B503_11D4_0015_4655()
 *
 * @name f__B503_11D4_0015_4655
 * @implements B503:11D4:0015:4655 ()
 *
 * Called From: B503:11D4:0016:067A
 */
void f__B503_11D4_0015_4655()
{
	emu_addws(&emu_sp, 0x6);
	emu_movw(&emu_si, emu_ax.x);
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x11E9); emu_cs = 0x1FB5; f__1FB5_1207_001B_2A6C();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { ovl__3503(0xFF); }
	f__B503_11E9_0018_61C0();
}

/**
 * Decompiled function f__B503_11E9_0018_61C0()
 *
 * @name f__B503_11E9_0018_61C0
 * @implements B503:11E9:0018:61C0 ()
 *
 * Called From: B503:11E9:0015:4655
 */
void f__B503_11E9_0018_61C0()
{
	emu_addws(&emu_sp, 0x8);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x1201); emu_cs = 0x1FB5; f__1FB5_1207_001B_2A6C();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { ovl__3503(0xFF); }
	f__B503_1201_0015_49AC();
}

/**
 * Decompiled function f__B503_1201_0015_49AC()
 *
 * @name f__B503_1201_0015_49AC
 * @implements B503:1201:0015:49AC ()
 *
 * Called From: B503:1201:0018:61C0
 */
void f__B503_1201_0015_49AC()
{
	emu_addws(&emu_sp, 0x8);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x1216); emu_cs = 0x1FB5; f__1FB5_0AEC_001B_A5E4();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { ovl__3503(0xFF); }
	f__B503_1216_0009_2605();
}

/**
 * Decompiled function f__B503_1216_0009_2605()
 *
 * @name f__B503_1216_0009_2605
 * @implements B503:1216:0009:2605 ()
 *
 * Called From: B503:1216:0015:49AC
 */
void f__B503_1216_0009_2605()
{
	emu_addws(&emu_sp, 0xA);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x121F); emu_cs = 0x1FB5; f__1FB5_09C7_0018_922D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { ovl__3503(0xFF); }
	f__B503_121F_0009_4865();
}

/**
 * Decompiled function f__B503_121F_0009_4865()
 *
 * @name f__B503_121F_0009_4865
 * @implements B503:121F:0009:4865 ()
 *
 * Called From: B503:121F:0009:2605
 */
void f__B503_121F_0009_4865()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	f__B503_1228_0005_8BCF(); return;
}

/**
 * Decompiled function f__B503_1228_0005_8BCF()
 *
 * @name f__B503_1228_0005_8BCF
 * @implements B503:1228:0005:8BCF ()
 *
 * Called From: B503:1226:0009:4865
 */
void f__B503_1228_0005_8BCF()
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
 * Decompiled function f__B503_122D_002D_E562()
 *
 * @name f__B503_122D_002D_E562
 * @implements B503:122D:002D:E562 ()
 *
 * Called From: B503:115E:0014:2120
 */
void f__B503_122D_002D_E562()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x6);
	emu_push(emu_si);
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x7E24));
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x7E26));
	emu_movw(&emu_ax.x, 0x50);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x9939);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x2B9D);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x2B98);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x125A); emu_cs = 0x34FC; ovl__34FC(1);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { ovl__3503(0xFF); }
	f__B503_125A_0017_1F8F();
}

/**
 * Decompiled function f__B503_125A_0017_1F8F()
 *
 * @name f__B503_125A_0017_1F8F
 * @implements B503:125A:0017:1F8F ()
 *
 * Called From: B503:125A:002D:E562
 */
void f__B503_125A_0017_1F8F()
{
	emu_addws(&emu_sp, 0x16);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0x2);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x2B46);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x9939);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x1271); emu_cs = 0x01F7; f__01F7_3803_001E_AAD4();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { ovl__3503(0xFF); }
	f__B503_1271_001E_2E6F();
}

/**
 * Decompiled function f__B503_1271_001E_2E6F()
 *
 * @name f__B503_1271_001E_2E6F
 * @implements B503:1271:001E:2E6F ()
 *
 * Called From: B503:1271:0017:1F8F
 */
void f__B503_1271_001E_2E6F()
{
	emu_addws(&emu_sp, 0xC);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x7E2E));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x0), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00, -0x7E2C));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00, -0x7E2E));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_dx.x);
	emu_xorw(&emu_si, emu_si);
	f__B503_129C_000B_0623(); return;
}

/**
 * Decompiled function f__B503_128F_0018_4412()
 *
 * @name f__B503_128F_0018_4412
 * @implements B503:128F:0018:4412 ()
 *
 * Called From: B503:129F:000B:0623
 * Called From: B503:129F:0018:4412
 */
void f__B503_128F_0018_4412()
{
	emu_addws(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x2);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x0), 0xFFFF);
	emu_incw(&emu_si);
	emu_cmpw(&emu_si, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if ((emu_flags.sf != emu_flags.of)) { f__B503_128F_0018_4412(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_incw(&emu_ax.x);
	f__B503_12A7_0005_8BCF(); return;
}

/**
 * Decompiled function f__B503_129C_000B_0623()
 *
 * @name f__B503_129C_000B_0623
 * @implements B503:129C:000B:0623 ()
 *
 * Called From: B503:128D:001E:2E6F
 */
void f__B503_129C_000B_0623()
{
	emu_cmpw(&emu_si, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if ((emu_flags.sf != emu_flags.of)) { f__B503_128F_0018_4412(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_incw(&emu_ax.x);
	emu_ip = 0x12A7; emu_last_cs = 0xB503; emu_last_ip = 0x12A5; emu_last_length = 0x000B; emu_last_crc = 0x0623; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B503_12A7_0005_8BCF()
 *
 * @name f__B503_12A7_0005_8BCF
 * @implements B503:12A7:0005:8BCF ()
 *
 * Called From: B503:12A5:0018:4412
 */
void f__B503_12A7_0005_8BCF()
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
 * Decompiled function f__B503_12AC_0013_473F()
 *
 * @name f__B503_12AC_0013_473F
 * @implements B503:12AC:0013:473F ()
 *
 * Called From: B503:0842:0010:3623
 */
void f__B503_12AC_0013_473F()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x4);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_movw(&emu_ax.x, 0x1);
	emu_movb(&emu_cx.l, emu_get_memory8(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x12BF); emu_cs = 0x01F7; f__01F7_058E_0015_CED2();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { ovl__3503(0xFF); }
	f__B503_12BF_001B_3D87();
}

/**
 * Decompiled function f__B503_12BF_001B_3D87()
 *
 * @name f__B503_12BF_001B_3D87
 * @implements B503:12BF:001B:3D87 ()
 *
 * Called From: B503:12BF:0013:473F
 */
void f__B503_12BF_001B_3D87()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0x8), 0x0);
	if (emu_flags.zf) { emu_ip = 0x12DA; emu_last_cs = 0xB503; emu_last_ip = 0x12C9; emu_last_length = 0x001B; emu_last_crc = 0x3D87; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x2AF6));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x2AF4));
	emu_orw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	f__B503_12F7_000B_8CC1(); return;
}

/**
 * Decompiled function f__B503_12F7_000B_8CC1()
 *
 * @name f__B503_12F7_000B_8CC1
 * @implements B503:12F7:000B:8CC1 ()
 *
 * Called From: B503:12D8:001B:3D87
 */
void f__B503_12F7_000B_8CC1()
{
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x2AF6), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x2AF4), emu_dx.x);
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B503_1302_0013_473F()
 *
 * @name f__B503_1302_0013_473F
 * @implements B503:1302:0013:473F ()
 *
 * Called From: B503:0665:000E:3033
 * Called From: B503:076E:000B:D03B
 */
void f__B503_1302_0013_473F()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x4);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_movw(&emu_ax.x, 0x1);
	emu_movb(&emu_cx.l, emu_get_memory8(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x1315); emu_cs = 0x01F7; f__01F7_058E_0015_CED2();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { ovl__3503(0xFF); }
	f__B503_1315_0026_0E6A();
}

/**
 * Decompiled function f__B503_1315_0026_0E6A()
 *
 * @name f__B503_1315_0026_0E6A
 * @implements B503:1315:0026:0E6A ()
 *
 * Called From: B503:1315:0013:473F
 */
void f__B503_1315_0026_0E6A()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x2AF6));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x2AF4));
	emu_andw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_andw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_dx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_flags.zf) { f__B503_133B_0004_E839(); return; }
	emu_movw(&emu_ax.x, 0x1);
	emu_ip = 0x133D; emu_last_cs = 0xB503; emu_last_ip = 0x1339; emu_last_length = 0x0026; emu_last_crc = 0x0E6A; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B503_133B_0004_E839()
 *
 * @name f__B503_133B_0004_E839
 * @implements B503:133B:0004:E839 ()
 *
 * Called From: B503:1334:0026:0E6A
 */
void f__B503_133B_0004_E839()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__B503_133F_0004_893F(); return;
}

/**
 * Decompiled function f__B503_133F_0004_893F()
 *
 * @name f__B503_133F_0004_893F
 * @implements B503:133F:0004:893F ()
 *
 * Called From: B503:133D:0004:E839
 */
void f__B503_133F_0004_893F()
{
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B503_1343_003B_6432()
 *
 * @name f__B503_1343_003B_6432
 * @implements B503:1343:003B:6432 ()
 *
 * Called From: B503:0816:0005:7C0A
 * Called From: B503:0893:000B:B072
 * Called From: B503:0907:0005:BC8E
 * Called From: B503:0A96:0005:7DAA
 * Called From: B503:0B50:0005:FA3C
 */
void f__B503_1343_003B_6432()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00, -0x7E48));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00, -0x7E4A));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76AE));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { emu_ip = 0x13C0; emu_last_cs = 0xB503; emu_last_ip = 0x1351; emu_last_length = 0x003B; emu_last_crc = 0x6432; emu_call(); return; } // Jump does not resolve
	if ((emu_flags.sf != emu_flags.of)) { emu_ip = 0x135B; emu_last_cs = 0xB503; emu_last_ip = 0x1353; emu_last_length = 0x003B; emu_last_crc = 0x6432; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76AC));
	if (!emu_flags.cf) { f__B503_13C0_0002_2597(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76AE));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76AC));
	emu_addws(&emu_dx.x, 0x7);
	emu_adcw(&emu_ax.x, 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x7E48), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x7E4A), emu_dx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x2B10));
	emu_incw(&emu_ax.x);
	emu_cmpw(&emu_ax.x, 0x4);
	if (!(emu_flags.sf != emu_flags.of)) { f__B503_137E_0027_FA79(); return; }
	emu_incw(&emu_get_memory16(emu_ds, 0x00,  0x2B10));
	f__B503_1384_0021_5375(); return;
}

/**
 * Decompiled function f__B503_137E_0027_FA79()
 *
 * @name f__B503_137E_0027_FA79
 * @implements B503:137E:0027:FA79 ()
 *
 * Called From: B503:1376:003B:6432
 */
void f__B503_137E_0027_FA79()
{
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x2B10), 0x0);
	emu_movw(&emu_ax.x, 0xC);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x2B10));
	emu_movw(&emu_dx.x, 0x3);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_addw(&emu_ax.x, 0x81BA);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3C32));
	emu_addw(&emu_ax.x, 0x2F1);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3C34));
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x13A5); emu_cs = 0x01F7; f__01F7_28B8_0024_83C9();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { ovl__3503(0xFF); }
	f__B503_13A5_0018_11EB();
}

/**
 * Decompiled function f__B503_1384_0021_5375()
 *
 * @name f__B503_1384_0021_5375
 * @implements B503:1384:0021:5375 ()
 *
 * Called From: B503:137C:003B:6432
 */
void f__B503_1384_0021_5375()
{
	emu_movw(&emu_ax.x, 0xC);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x2B10));
	emu_movw(&emu_dx.x, 0x3);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_addw(&emu_ax.x, 0x81BA);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3C32));
	emu_addw(&emu_ax.x, 0x2F1);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3C34));
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x13A5); emu_cs = 0x01F7; f__01F7_28B8_0024_83C9();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { ovl__3503(0xFF); }
	f__B503_13A5_0018_11EB();
}

/**
 * Decompiled function f__B503_13A5_0018_11EB()
 *
 * @name f__B503_13A5_0018_11EB
 * @implements B503:13A5:0018:11EB ()
 *
 * Called From: B503:13A5:0021:5375
 * Called From: B503:13A5:0027:FA79
 */
void f__B503_13A5_0018_11EB()
{
	emu_addws(&emu_sp, 0xA);
	emu_movw(&emu_ax.x, 0xFE);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0xFB);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3C34));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3C32));
	emu_push(emu_cs); emu_push(0x13BD); emu_cs = 0x2BA5; f__2BA5_0006_009C_A3D1();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { ovl__3503(0xFF); }
	f__B503_13BD_0005_6083();
}

/**
 * Decompiled function f__B503_13BD_0005_6083()
 *
 * @name f__B503_13BD_0005_6083
 * @implements B503:13BD:0005:6083 ()
 *
 * Called From: B503:13BD:0018:11EB
 */
void f__B503_13BD_0005_6083()
{
	emu_addws(&emu_sp, 0x8);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B503_13C0_0002_2597()
 *
 * @name f__B503_13C0_0002_2597
 * @implements B503:13C0:0002:2597 ()
 *
 * Called From: B503:1359:003B:6432
 */
void f__B503_13C0_0002_2597()
{
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B503_13C2_0008_C4BB()
 *
 * @name f__B503_13C2_0008_C4BB
 * @implements B503:13C2:0008:C4BB ()
 *
 * Called From: B503:0334:000E:A771
 * Called From: B503:038F:000A:1561
 * Called From: B503:03D6:000E:28E9
 * Called From: B503:0448:0006:5A1C
 * Called From: B503:0EBF:0011:8F4C
 * Called From: B503:0FF9:000E:EEE2
 */
void f__B503_13C2_0008_C4BB()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_cs); emu_push(0x13CA); emu_cs = 0x29E8; f__29E8_0643_0008_ED98();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { ovl__3503(0xFF); }
	f__B503_13CA_0009_9868();
}

/**
 * Decompiled function f__B503_13CA_0009_9868()
 *
 * @name f__B503_13CA_0009_9868
 * @implements B503:13CA:0009:9868 ()
 *
 * Called From: B503:13CA:0008:C4BB
 */
void f__B503_13CA_0009_9868()
{
	emu_orw(&emu_ax.x, emu_ax.x);
	if (emu_flags.zf) { f__B503_13E8_0005_9519(); return; }
	emu_push(emu_cs); emu_push(0x13D3); emu_cs = 0x29E8; f__29E8_07FA_0020_177A();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { ovl__3503(0xFF); }
	f__B503_13D3_0015_3017();
}

/**
 * Decompiled function f__B503_13D3_0015_3017()
 *
 * @name f__B503_13D3_0015_3017
 * @implements B503:13D3:0015:3017 ()
 *
 * Called From: B503:13D3:0009:9868
 */
void f__B503_13D3_0015_3017()
{
	emu_cmpw(&emu_ax.x, 0x1B);
	if (!emu_flags.zf) { f__B503_13E8_0005_9519(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00, -0x7E4C));
	emu_negw(&emu_ax.x, emu_ax.x);
	emu_sbbw(&emu_ax.x, emu_ax.x);
	emu_incw(&emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x7E4C), emu_ax.x);
	emu_push(emu_cs); emu_push(0x13E8); emu_cs = 0x29E8; emu_ip = 0x1B27; emu_last_cs = 0xB503; emu_last_ip = 0x13E3; emu_last_length = 0x0015; emu_last_crc = 0x3017; emu_call(); // Jump does not resolve
	f__B503_13E8_0005_9519();
}

/**
 * Decompiled function f__B503_13E8_0005_9519()
 *
 * @name f__B503_13E8_0005_9519
 * @implements B503:13E8:0005:9519 ()
 *
 * Called From: B503:13CC:0009:9868
 * Called From: B503:13D6:0015:3017
 */
void f__B503_13E8_0005_9519()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00, -0x7E4C));
	f__B503_13ED_0002_2597(); return;
}

/**
 * Decompiled function f__B503_13ED_0002_2597()
 *
 * @name f__B503_13ED_0002_2597
 * @implements B503:13ED:0002:2597 ()
 *
 * Called From: B503:13EB:0005:9519
 */
void f__B503_13ED_0002_2597()
{
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

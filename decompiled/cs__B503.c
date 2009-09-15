/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__B503_0000_0016_6394()
 *
 * @name f__B503_0000_0016_6394
 * @implements B503:0000:0016:6394 ()
 *
 * Called From: 3503:0020:0005:1EFA
 * Called From: 3503:0020:0005:1C82
 */
void f__B503_0000_0016_6394()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subw(&emu_sp, 0x316);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_si, emu_si);
	if (!emu_flags.zf) { f__B503_0016_0009_7E5D(); return; }
	emu_movw(&emu_ax.x, 0x1);
	emu_ip = 0x0580; emu_last_cs = 0xB503; emu_last_ip = 0x0013; emu_last_length = 0x0016; emu_last_crc = 0x6394; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B503_0013_0003_06EA()
 *
 * @name f__B503_0013_0003_06EA
 * @implements B503:0013:0003:06EA ()
 *
 * Called From: B503:057D:0008:5490
 */
void f__B503_0013_0003_06EA()
{
	f__B503_0580_0006_137A(); return;
}

/**
 * Decompiled function f__B503_0016_0009_7E5D()
 *
 * @name f__B503_0016_0009_7E5D
 * @implements B503:0016:0009:7E5D ()
 *
 * Called From: B503:000E:0016:6394
 */
void f__B503_0016_0009_7E5D()
{
	emu_movw(&emu_ax.x, 0xA);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x001F); emu_cs = 0x24FD; f__24FD_000A_000B_BF4F();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { ovl__3503(0xFF); }
	f__B503_001F_000A_0E74();
}

/**
 * Decompiled function f__B503_001F_000A_0E74()
 *
 * @name f__B503_001F_000A_0E74
 * @implements B503:001F:000A:0E74 ()
 *
 * Called From: B503:001F:0009:7E5D
 */
void f__B503_001F_000A_0E74()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_ax.x, 0x1D);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0029); emu_cs = 0x3483; ovl__3483(1);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { ovl__3503(0xFF); }
	f__B503_0029_0013_C1B7();
}

/**
 * Decompiled function f__B503_0029_0013_C1B7()
 *
 * @name f__B503_0029_0013_C1B7
 * @implements B503:0029:0013:C1B7 ()
 *
 * Called From: B503:0029:000A:0E74
 */
void f__B503_0029_0013_C1B7()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_ax.x, 0x300);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0x30A);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x003C); emu_cs = 0x01F7; f__01F7_2947_0014_9C5E();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { ovl__3503(0xFF); }
	f__B503_003C_0011_AAE2();
}

/**
 * Decompiled function f__B503_003C_0011_AAE2()
 *
 * @name f__B503_003C_0011_AAE2
 * @implements B503:003C:0011:AAE2 ()
 *
 * Called From: B503:003C:0013:C1B7
 */
void f__B503_003C_0011_AAE2()
{
	emu_addws(&emu_sp, 0x8);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0x8), 0x0);
	if (emu_flags.zf) { emu_ip = 0x004D; emu_last_cs = 0xB503; emu_last_ip = 0x0043; emu_last_length = 0x0011; emu_last_crc = 0xAAE2; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_si);
	emu_decw(&emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	f__B503_0050_000C_B963(); return;
}

/**
 * Decompiled function f__B503_0050_000C_B963()
 *
 * @name f__B503_0050_000C_B963
 * @implements B503:0050:000C:B963 ()
 *
 * Called From: B503:004B:0011:AAE2
 */
void f__B503_0050_000C_B963()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_si);
	emu_movw(&emu_ax.x, 0x4);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x005C); emu_cs = 0x2598; f__2598_0000_0017_D681();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { ovl__3503(0xFF); }
	f__B503_005C_0013_C5DD();
}

/**
 * Decompiled function f__B503_005C_0013_C5DD()
 *
 * @name f__B503_005C_0013_C5DD
 * @implements B503:005C:0013:C5DD ()
 *
 * Called From: B503:005C:000C:B963
 */
void f__B503_005C_0013_C5DD()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_ax.x);
	emu_movw(&emu_ax.x, 0xF);
	emu_push(emu_ax.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0x30A);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x006F); emu_cs = 0x259E; f__259E_0006_0016_2DFF();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { ovl__3503(0xFF); }
	f__B503_006F_0018_C16B();
}

/**
 * Decompiled function f__B503_006F_0018_C16B()
 *
 * @name f__B503_006F_0018_C16B
 * @implements B503:006F:0018:C16B ()
 *
 * Called From: B503:006F:0013:C5DD
 */
void f__B503_006F_0018_C16B()
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
	emu_push(emu_cs); emu_push(0x0087); emu_cs = 0x2B42; f__2B42_0000_0022_87EE();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { ovl__3503(0xFF); }
	f__B503_0087_0010_D233();
}

/**
 * Decompiled function f__B503_0087_0010_D233()
 *
 * @name f__B503_0087_0010_D233
 * @implements B503:0087:0010:D233 ()
 *
 * Called From: B503:0087:0018:C16B
 */
void f__B503_0087_0010_D233()
{
	emu_addws(&emu_sp, 0x8);
	emu_movw(&emu_ax.x, 0x54);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0xA0);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0097); emu_cs = 0x2B99; f__2B99_007B_0019_447B();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { ovl__3503(0xFF); }
	f__B503_0097_0020_6EDD();
}

/**
 * Decompiled function f__B503_0097_0020_6EDD()
 *
 * @name f__B503_0097_0020_6EDD
 * @implements B503:0097:0020:6EDD ()
 *
 * Called From: B503:0097:0010:D233
 */
void f__B503_0097_0020_6EDD()
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
	f__B503_00B7_0022_CF71();
}

/**
 * Decompiled function f__B503_00B7_0022_CF71()
 *
 * @name f__B503_00B7_0022_CF71
 * @implements B503:00B7:0022:CF71 ()
 *
 * Called From: B503:00B7:0020:6EDD
 */
void f__B503_00B7_0022_CF71()
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
	emu_push(emu_cs); emu_push(0x00D9); emu_cs = 0x2BB6; f__2BB6_004F_0014_E253();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { ovl__3503(0xFF); }
	f__B503_00D9_001B_A335();
}

/**
 * Decompiled function f__B503_00D9_001B_A335()
 *
 * @name f__B503_00D9_001B_A335
 * @implements B503:00D9:001B:A335 ()
 *
 * Called From: B503:00D9:0022:CF71
 */
void f__B503_00D9_001B_A335()
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
		case 0x22A604A5: f__22A6_04A5_000F_9D38(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0xB503; emu_last_ip = 0x00EF; emu_last_length = 0x001B; emu_last_crc = 0xA335;
			emu_call();
			return;
	}
	f__B503_00F4_001D_196B();
}

/**
 * Decompiled function f__B503_00F4_001D_196B()
 *
 * @name f__B503_00F4_001D_196B
 * @implements B503:00F4:001D:196B ()
 *
 * Called From: B503:00F4:001B:A335
 */
void f__B503_00F4_001D_196B()
{
	emu_addws(&emu_sp, 0x8);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax.x);
	emu_movw(&emu_di, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3A38));
	emu_orw(&emu_ax.x, emu_ax.x);
	if (emu_flags.zf) { f__B503_0111_0009_FE32(); return; }
	emu_cmpw(&emu_ax.x, 0x1);
	if (emu_flags.zf) { f__B503_011A_0005_17B4(); return; }
	emu_cmpw(&emu_ax.x, 0x2);
	if (emu_flags.zf) { emu_ip = 0x011F; emu_last_cs = 0xB503; emu_last_ip = 0x010D; emu_last_length = 0x001D; emu_last_crc = 0x196B; emu_call(); return; } // Jump does not resolve
	emu_ip = 0x011A; emu_last_cs = 0xB503; emu_last_ip = 0x010F; emu_last_length = 0x001D; emu_last_crc = 0x196B; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B503_0111_0009_FE32()
 *
 * @name f__B503_0111_0009_FE32
 * @implements B503:0111:0009:FE32 ()
 *
 * Called From: B503:0103:001D:196B
 */
void f__B503_0111_0009_FE32()
{
	emu_xorw(&emu_di, emu_di);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x98);
	f__B503_0129_001A_6C9C(); return;
}

/**
 * Decompiled function f__B503_0113_0007_6732()
 *
 * @name f__B503_0113_0007_6732
 * @implements B503:0113:0007:6732 ()
 *
 * Called From: B503:011D:0005:17B4
 */
void f__B503_0113_0007_6732()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x98);
	f__B503_0129_001A_6C9C(); return;
}

/**
 * Decompiled function f__B503_011A_0005_17B4()
 *
 * @name f__B503_011A_0005_17B4
 * @implements B503:011A:0005:17B4 ()
 *
 * Called From: B503:0108:001D:196B
 */
void f__B503_011A_0005_17B4()
{
	emu_movw(&emu_di, 0x21);
	f__B503_0113_0007_6732(); return;
}

/**
 * Decompiled function f__B503_0129_001A_6C9C()
 *
 * @name f__B503_0129_001A_6C9C
 * @implements B503:0129:001A:6C9C ()
 *
 * Called From: B503:0118:0009:FE32
 * Called From: B503:0118:0007:6732
 */
void f__B503_0129_001A_6C9C()
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
	emu_push(emu_cs); emu_push(0x0143); emu_cs = 0x01F7; f__01F7_28B8_0024_D407();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { ovl__3503(0xFF); }
	f__B503_0143_002B_101F();
}

/**
 * Decompiled function f__B503_0143_002B_101F()
 *
 * @name f__B503_0143_002B_101F
 * @implements B503:0143:002B:101F ()
 *
 * Called From: B503:0143:001A:6C9C
 */
void f__B503_0143_002B_101F()
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
	emu_push(emu_cs); emu_push(0x016E); emu_cs = 0x01F7; f__01F7_28B8_0024_D407();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { ovl__3503(0xFF); }
	f__B503_016E_0016_6DA3();
}

/**
 * Decompiled function f__B503_016E_0016_6DA3()
 *
 * @name f__B503_016E_0016_6DA3
 * @implements B503:016E:0016:6DA3 ()
 *
 * Called From: B503:016E:002B:101F
 */
void f__B503_016E_0016_6DA3()
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
	emu_push(emu_cs); emu_push(0x0184); emu_cs = 0x01F7; f__01F7_28B8_0024_D407();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { ovl__3503(0xFF); }
	f__B503_0184_0023_2B1C();
}

/**
 * Decompiled function f__B503_0184_0023_2B1C()
 *
 * @name f__B503_0184_0023_2B1C
 * @implements B503:0184:0023:2B1C ()
 *
 * Called From: B503:0184:0016:6DA3
 */
void f__B503_0184_0023_2B1C()
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
	emu_push(emu_cs); emu_push(0x01A7); emu_cs = 0x24D0; f__24D0_000D_0039_9224();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { ovl__3503(0xFF); }
	f__B503_01A7_0024_F5A6();
}

/**
 * Decompiled function f__B503_01A7_0024_F5A6()
 *
 * @name f__B503_01A7_0024_F5A6
 * @implements B503:01A7:0024:F5A6 ()
 *
 * Called From: B503:01A7:0023:2B1C
 */
void f__B503_01A7_0024_F5A6()
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
	emu_push(emu_cs); emu_push(0x01CB); emu_cs = 0x24D0; f__24D0_000D_0039_9224();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { ovl__3503(0xFF); }
	f__B503_01CB_0012_F99A();
}

/**
 * Decompiled function f__B503_01CB_0012_F99A()
 *
 * @name f__B503_01CB_0012_F99A
 * @implements B503:01CB:0012:F99A ()
 *
 * Called From: B503:01CB:0024:F5A6
 */
void f__B503_01CB_0012_F99A()
{
	emu_addws(&emu_sp, 0x10);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x37B6));
	emu_cmpw(&emu_ax.x, 0x1);
	if (emu_flags.zf) { emu_ip = 0x0206; emu_last_cs = 0xB503; emu_last_ip = 0x01D4; emu_last_length = 0x0012; emu_last_crc = 0xF99A; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_ax.x, 0x2);
	if (emu_flags.zf) { emu_ip = 0x01DD; emu_last_cs = 0xB503; emu_last_ip = 0x01D9; emu_last_length = 0x0012; emu_last_crc = 0xF99A; emu_call(); return; } // Jump does not resolve
	f__B503_0222_0002_03AC(); return;
}

/**
 * Decompiled function f__B503_0222_0002_03AC()
 *
 * @name f__B503_0222_0002_03AC
 * @implements B503:0222:0002:03AC ()
 *
 * Called From: B503:01DB:0012:F99A
 */
void f__B503_0222_0002_03AC()
{
	f__B503_0224_001E_A825(); return;
}

/**
 * Decompiled function f__B503_0224_001E_A825()
 *
 * @name f__B503_0224_001E_A825
 * @implements B503:0224:001E:A825 ()
 *
 * Called From: B503:0222:0002:03AC
 */
void f__B503_0224_001E_A825()
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
		case 0x22A60D31: f__22A6_0D31_0015_D6F0(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0xB503; emu_last_ip = 0x023D; emu_last_length = 0x001E; emu_last_crc = 0xA825;
			emu_call();
			return;
	}
	f__B503_0242_0008_F25E();
}

/**
 * Decompiled function f__B503_0242_0008_F25E()
 *
 * @name f__B503_0242_0008_F25E
 * @implements B503:0242:0008:F25E ()
 *
 * Called From: B503:0242:001E:A825
 */
void f__B503_0242_0008_F25E()
{
	emu_addws(&emu_sp, 0xA);
	emu_push(emu_cs); emu_push(0x024A); emu_cs = 0x2B6C; f__2B6C_0137_0020_17E5();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { ovl__3503(0xFF); }
	f__B503_024A_0020_1795();
}

/**
 * Decompiled function f__B503_024A_0020_1795()
 *
 * @name f__B503_024A_0020_1795
 * @implements B503:024A:0020:1795 ()
 *
 * Called From: B503:024A:0008:F25E
 */
void f__B503_024A_0020_1795()
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
	emu_push(emu_cs); emu_push(0x026A); emu_cs = 0x24D0; f__24D0_000D_0039_9224();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { ovl__3503(0xFF); }
	f__B503_026A_0014_1035();
}

/**
 * Decompiled function f__B503_026A_0014_1035()
 *
 * @name f__B503_026A_0014_1035
 * @implements B503:026A:0014:1035 ()
 *
 * Called From: B503:026A:0020:1795
 */
void f__B503_026A_0014_1035()
{
	emu_addws(&emu_sp, 0x10);
	emu_movw(&emu_ax.x, 0xF);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3C34));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3C32));
	emu_push(emu_cs); emu_push(0x027E); emu_cs = 0x259E; f__259E_0006_0016_2DFF();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { ovl__3503(0xFF); }
	f__B503_027E_0008_F3FA();
}

/**
 * Decompiled function f__B503_027E_0008_F3FA()
 *
 * @name f__B503_027E_0008_F3FA
 * @implements B503:027E:0008:F3FA ()
 *
 * Called From: B503:027E:0014:1035
 */
void f__B503_027E_0008_F3FA()
{
	emu_addws(&emu_sp, 0x6);
	emu_push(emu_cs); emu_push(0x0286); emu_cs = 0x29E8; f__29E8_073F_000E_A6E4();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { ovl__3503(0xFF); }
	f__B503_0286_000F_E4D3();
}

/**
 * Decompiled function f__B503_0286_000F_E4D3()
 *
 * @name f__B503_0286_000F_E4D3
 * @implements B503:0286:000F:E4D3 ()
 *
 * Called From: B503:0286:0008:F3FA
 */
void f__B503_0286_000F_E4D3()
{
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x7E4C), 0x0);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0x8), 0x0);
	if (!emu_flags.zf) { f__B503_0295_0008_F4EE(); return; }
	emu_ip = 0x03F2; emu_last_cs = 0xB503; emu_last_ip = 0x0292; emu_last_length = 0x000F; emu_last_crc = 0xE4D3; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B503_0295_0008_F4EE()
 *
 * @name f__B503_0295_0008_F4EE
 * @implements B503:0295:0008:F4EE ()
 *
 * Called From: B503:0290:000F:E4D3
 */
void f__B503_0295_0008_F4EE()
{
	emu_cmpws(&emu_si, 0x1);
	if (emu_flags.zf) { f__B503_029D_001E_22A4(); return; }
	emu_ip = 0x03F2; emu_last_cs = 0xB503; emu_last_ip = 0x029A; emu_last_length = 0x0008; emu_last_crc = 0xF4EE; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B503_029D_001E_22A4()
 *
 * @name f__B503_029D_001E_22A4
 * @implements B503:029D:001E:22A4 ()
 *
 * Called From: B503:0298:0008:F4EE
 */
void f__B503_029D_001E_22A4()
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
	f__B503_02BB_001B_6339();
}

/**
 * Decompiled function f__B503_02BB_001B_6339()
 *
 * @name f__B503_02BB_001B_6339
 * @implements B503:02BB:001B:6339 ()
 *
 * Called From: B503:02BB:001E:22A4
 */
void f__B503_02BB_001B_6339()
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
		case 0x22A604A5: f__22A6_04A5_000F_9D38(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0xB503; emu_last_ip = 0x02D1; emu_last_length = 0x001B; emu_last_crc = 0x6339;
			emu_call();
			return;
	}
	f__B503_02D6_000C_5A0D();
}

/**
 * Decompiled function f__B503_02D6_000C_5A0D()
 *
 * @name f__B503_02D6_000C_5A0D
 * @implements B503:02D6:000C:5A0D ()
 *
 * Called From: B503:02D6:001B:6339
 */
void f__B503_02D6_000C_5A0D()
{
	emu_addws(&emu_sp, 0x8);
	emu_movw(&emu_ax.x, 0x11B);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x02E2); emu_cs = 0x0FCB; f__0FCB_005F_001C_147D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { ovl__3503(0xFF); }
	f__B503_02E2_0008_7130();
}

/**
 * Decompiled function f__B503_02E2_0008_7130()
 *
 * @name f__B503_02E2_0008_7130
 * @implements B503:02E2:0008:7130 ()
 *
 * Called From: B503:02E2:000C:5A0D
 */
void f__B503_02E2_0008_7130()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x02EA); f__B503_0F0C_0010_1F5F();
	f__B503_02EA_0024_BFE8();
}

/**
 * Decompiled function f__B503_02EA_0024_BFE8()
 *
 * @name f__B503_02EA_0024_BFE8
 * @implements B503:02EA:0024:BFE8 ()
 *
 * Called From: B503:02EA:0008:7130
 */
void f__B503_02EA_0024_BFE8()
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
	f__B503_030E_0008_F67A();
}

/**
 * Decompiled function f__B503_030E_0008_F67A()
 *
 * @name f__B503_030E_0008_F67A
 * @implements B503:030E:0008:F67A ()
 *
 * Called From: B503:030E:0024:BFE8
 */
void f__B503_030E_0008_F67A()
{
	emu_addws(&emu_sp, 0x10);
	emu_push(emu_cs); emu_push(0x0316); emu_cs = 0x29E8; f__29E8_073F_000E_A6E4();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { ovl__3503(0xFF); }
	f__B503_0316_0011_967B();
}

/**
 * Decompiled function f__B503_0316_0011_967B()
 *
 * @name f__B503_0316_0011_967B
 * @implements B503:0316:0011:967B ()
 *
 * Called From: B503:0316:0008:F67A
 */
void f__B503_0316_0011_967B()
{
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x76B6), 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x76B4), 0x78);
	emu_push(emu_cs);
	emu_push(0x0327); f__B503_1029_000F_C2B9();
	f__B503_0327_0002_03AC();
}

/**
 * Decompiled function f__B503_0327_0002_03AC()
 *
 * @name f__B503_0327_0002_03AC
 * @implements B503:0327:0002:03AC ()
 *
 * Called From: B503:0327:0011:967B
 */
void f__B503_0327_0002_03AC()
{
	f__B503_0329_000E_D5D4(); return;
}

/**
 * Decompiled function f__B503_0329_000E_D5D4()
 *
 * @name f__B503_0329_000E_D5D4
 * @implements B503:0329:000E:D5D4 ()
 *
 * Called From: B503:0327:0002:03AC
 * Called From: B503:0339:0022:140B
 */
void f__B503_0329_000E_D5D4()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76B4));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76B6));
	if (emu_flags.zf) { f__B503_033B_001E_15A4(); return; }
	emu_push(emu_cs);
	emu_push(0x0337); f__B503_13C2_0008_3F32();
	f__B503_0337_0022_140B();
}

/**
 * Decompiled function f__B503_0337_0022_140B()
 *
 * @name f__B503_0337_0022_140B
 * @implements B503:0337:0022:140B ()
 *
 * Called From: B503:0337:000E:D5D4
 */
void f__B503_0337_0022_140B()
{
	emu_orw(&emu_ax.x, emu_ax.x);
	if (emu_flags.zf) { f__B503_0329_000E_D5D4(); return; }
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
	emu_push(emu_cs); emu_push(0x0359); emu_cs = 0x34CA; emu_ip = 0x0379; emu_last_cs = 0xB503; emu_last_ip = 0x0354; emu_last_length = 0x0022; emu_last_crc = 0x140B; emu_call(); // Jump does not resolve
	f__B503_0359_001B_6339();
}

/**
 * Decompiled function f__B503_033B_001E_15A4()
 *
 * @name f__B503_033B_001E_15A4
 * @implements B503:033B:001E:15A4 ()
 *
 * Called From: B503:0330:000E:D5D4
 */
void f__B503_033B_001E_15A4()
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
	f__B503_0359_001B_6339();
}

/**
 * Decompiled function f__B503_0359_001B_6339()
 *
 * @name f__B503_0359_001B_6339
 * @implements B503:0359:001B:6339 ()
 *
 * Called From: B503:0359:001E:15A4
 */
void f__B503_0359_001B_6339()
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
		case 0x22A604A5: f__22A6_04A5_000F_9D38(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0xB503; emu_last_ip = 0x036F; emu_last_length = 0x001B; emu_last_crc = 0x6339;
			emu_call();
			return;
	}
	f__B503_0374_000C_5D0D();
}

/**
 * Decompiled function f__B503_0374_000C_5D0D()
 *
 * @name f__B503_0374_000C_5D0D
 * @implements B503:0374:000C:5D0D ()
 *
 * Called From: B503:0374:001B:6339
 */
void f__B503_0374_000C_5D0D()
{
	emu_addws(&emu_sp, 0x8);
	emu_movw(&emu_ax.x, 0x11C);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0380); emu_cs = 0x0FCB; f__0FCB_005F_001C_147D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { ovl__3503(0xFF); }
	f__B503_0380_0008_73A6();
}

/**
 * Decompiled function f__B503_0380_0008_73A6()
 *
 * @name f__B503_0380_0008_73A6
 * @implements B503:0380:0008:73A6 ()
 *
 * Called From: B503:0380:000C:5D0D
 */
void f__B503_0380_0008_73A6()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x0388); f__B503_0F0C_0010_1F5F();
	f__B503_0388_000A_8441();
}

/**
 * Decompiled function f__B503_0388_000A_8441()
 *
 * @name f__B503_0388_000A_8441
 * @implements B503:0388:000A:8441 ()
 *
 * Called From: B503:0388:0008:73A6
 */
void f__B503_0388_000A_8441()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x0392); f__B503_13C2_0008_3F32();
	f__B503_0392_0008_701A();
}

/**
 * Decompiled function f__B503_0392_0008_701A()
 *
 * @name f__B503_0392_0008_701A
 * @implements B503:0392:0008:701A ()
 *
 * Called From: B503:0392:000A:8441
 */
void f__B503_0392_0008_701A()
{
	emu_orw(&emu_ax.x, emu_ax.x);
	if (emu_flags.zf) { f__B503_039A_0020_B93D(); return; }
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_ip = 0x039D; emu_last_cs = 0xB503; emu_last_ip = 0x0398; emu_last_length = 0x0008; emu_last_crc = 0x701A; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B503_039A_0020_B93D()
 *
 * @name f__B503_039A_0020_B93D
 * @implements B503:039A:0020:B93D ()
 *
 * Called From: B503:0394:0008:701A
 */
void f__B503_039A_0020_B93D()
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
	f__B503_03BA_0011_365F();
}

/**
 * Decompiled function f__B503_03BA_0011_365F()
 *
 * @name f__B503_03BA_0011_365F
 * @implements B503:03BA:0011:365F ()
 *
 * Called From: B503:03BA:0020:B93D
 */
void f__B503_03BA_0011_365F()
{
	emu_addws(&emu_sp, 0x10);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x76B6), 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x76B4), 0x3C);
	f__B503_03CB_000E_D462(); return;
}

/**
 * Decompiled function f__B503_03CB_000E_D462()
 *
 * @name f__B503_03CB_000E_D462
 * @implements B503:03CB:000E:D462 ()
 *
 * Called From: B503:03C9:0011:365F
 * Called From: B503:03DB:000D:140E
 */
void f__B503_03CB_000E_D462()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76B4));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76B6));
	if (emu_flags.zf) { f__B503_03DD_0009_6C03(); return; }
	emu_push(emu_cs);
	emu_push(0x03D9); f__B503_13C2_0008_3F32();
	f__B503_03D9_000D_140E();
}

/**
 * Decompiled function f__B503_03D9_000D_140E()
 *
 * @name f__B503_03D9_000D_140E
 * @implements B503:03D9:000D:140E ()
 *
 * Called From: B503:03D9:000E:D462
 */
void f__B503_03D9_000D_140E()
{
	emu_orw(&emu_ax.x, emu_ax.x);
	if (emu_flags.zf) { f__B503_03CB_000E_D462(); return; }
	emu_movw(&emu_ax.x, 0x11D);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x03E6); emu_cs = 0x0FCB; emu_ip = 0x0445; emu_last_cs = 0xB503; emu_last_ip = 0x03E1; emu_last_length = 0x000D; emu_last_crc = 0x140E; emu_call(); // Jump does not resolve
	f__B503_03E6_0008_71CE();
}

/**
 * Decompiled function f__B503_03DD_0009_6C03()
 *
 * @name f__B503_03DD_0009_6C03
 * @implements B503:03DD:0009:6C03 ()
 *
 * Called From: B503:03D2:000E:D462
 */
void f__B503_03DD_0009_6C03()
{
	emu_movw(&emu_ax.x, 0x11D);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x03E6); emu_cs = 0x0FCB; f__0FCB_005F_001C_147D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { ovl__3503(0xFF); }
	f__B503_03E6_0008_71CE();
}

/**
 * Decompiled function f__B503_03E6_0008_71CE()
 *
 * @name f__B503_03E6_0008_71CE
 * @implements B503:03E6:0008:71CE ()
 *
 * Called From: B503:03E6:0009:6C03
 */
void f__B503_03E6_0008_71CE()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x03EE); f__B503_0F0C_0010_1F5F();
	f__B503_03EE_0004_04FE();
}

/**
 * Decompiled function f__B503_03EE_0004_04FE()
 *
 * @name f__B503_03EE_0004_04FE
 * @implements B503:03EE:0004:04FE ()
 *
 * Called From: B503:03EE:0008:71CE
 */
void f__B503_03EE_0004_04FE()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	f__B503_03F7_001E_09A4(); return;
}

/**
 * Decompiled function f__B503_03F7_001E_09A4()
 *
 * @name f__B503_03F7_001E_09A4
 * @implements B503:03F7:001E:09A4 ()
 *
 * Called From: B503:03F0:0004:04FE
 */
void f__B503_03F7_001E_09A4()
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
	f__B503_0415_001B_6339();
}

/**
 * Decompiled function f__B503_0415_001B_6339()
 *
 * @name f__B503_0415_001B_6339
 * @implements B503:0415:001B:6339 ()
 *
 * Called From: B503:0415:001E:09A4
 */
void f__B503_0415_001B_6339()
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
		case 0x22A604A5: f__22A6_04A5_000F_9D38(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0xB503; emu_last_ip = 0x042B; emu_last_length = 0x001B; emu_last_crc = 0x6339;
			emu_call();
			return;
	}
	f__B503_0430_000C_4765();
}

/**
 * Decompiled function f__B503_0430_000C_4765()
 *
 * @name f__B503_0430_000C_4765
 * @implements B503:0430:000C:4765 ()
 *
 * Called From: B503:0430:001B:6339
 */
void f__B503_0430_000C_4765()
{
	emu_addws(&emu_sp, 0x8);
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x043C); emu_cs = 0x2598; f__2598_0000_0017_D681();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { ovl__3503(0xFF); }
	f__B503_043C_0009_5C22();
}

/**
 * Decompiled function f__B503_043C_0009_5C22()
 *
 * @name f__B503_043C_0009_5C22
 * @implements B503:043C:0009:5C22 ()
 *
 * Called From: B503:043C:000C:4765
 */
void f__B503_043C_0009_5C22()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs);
	emu_push(0x0445); f__B503_0B68_000D_8ADA();
	f__B503_0445_0006_0222();
}

/**
 * Decompiled function f__B503_0445_0006_0222()
 *
 * @name f__B503_0445_0006_0222
 * @implements B503:0445:0006:0222 ()
 *
 * Called From: B503:0445:0009:5C22
 */
void f__B503_0445_0006_0222()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_cs);
	emu_push(0x044B); f__B503_13C2_0008_3F32();
	f__B503_044B_0028_56ED();
}

/**
 * Decompiled function f__B503_044B_0028_56ED()
 *
 * @name f__B503_044B_0028_56ED
 * @implements B503:044B:0028:56ED ()
 *
 * Called From: B503:044B:0006:0222
 */
void f__B503_044B_0028_56ED()
{
	emu_orw(&emu_ax.x, emu_ax.x);
	if (emu_flags.zf) { f__B503_0475_0022_B8B0(); return; }
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
	emu_push(emu_cs); emu_push(0x0473); emu_cs = 0x24D0; emu_ip = 0x0480; emu_last_cs = 0xB503; emu_last_ip = 0x046E; emu_last_length = 0x0028; emu_last_crc = 0x56ED; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__B503_0475_0022_B8B0()
 *
 * @name f__B503_0475_0022_B8B0
 * @implements B503:0475:0022:B8B0 ()
 *
 * Called From: B503:044D:0028:56ED
 */
void f__B503_0475_0022_B8B0()
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
	f__B503_0497_0023_605B();
}

/**
 * Decompiled function f__B503_0497_0023_605B()
 *
 * @name f__B503_0497_0023_605B
 * @implements B503:0497:0023:605B ()
 *
 * Called From: B503:0497:0022:B8B0
 */
void f__B503_0497_0023_605B()
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
	emu_push(emu_cs); emu_push(0x04BA); emu_cs = 0x24D0; f__24D0_000D_0039_9224();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { ovl__3503(0xFF); }
	f__B503_04BA_0013_490D();
}

/**
 * Decompiled function f__B503_04BA_0013_490D()
 *
 * @name f__B503_04BA_0013_490D
 * @implements B503:04BA:0013:490D ()
 *
 * Called From: B503:04BA:0023:605B
 */
void f__B503_04BA_0013_490D()
{
	emu_addws(&emu_sp, 0x10);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	if (emu_flags.zf) { emu_ip = 0x04CE; emu_last_cs = 0xB503; emu_last_ip = 0x04C3; emu_last_length = 0x0013; emu_last_crc = 0x490D; emu_call(); return; } // Jump does not resolve
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_cs);
	emu_push(0x04CD); f__B503_0CB3_001A_B050();
	f__B503_04CD_0006_027E();
}

/**
 * Decompiled function f__B503_04CD_0006_027E()
 *
 * @name f__B503_04CD_0006_027E
 * @implements B503:04CD:0006:027E ()
 *
 * Called From: B503:04CD:0013:490D
 */
void f__B503_04CD_0006_027E()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_cs); emu_push(0x04D3); emu_cs = 0x2B6C; f__2B6C_0169_001E_97C8();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { ovl__3503(0xFF); }
	f__B503_04D3_0012_A0B3();
}

/**
 * Decompiled function f__B503_04D3_0012_A0B3()
 *
 * @name f__B503_04D3_0012_A0B3
 * @implements B503:04D3:0012:A0B3 ()
 *
 * Called From: B503:04D3:0006:027E
 */
void f__B503_04D3_0012_A0B3()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x7E2E));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx.x,  0x0), emu_si);
	if ((emu_flags.sf != emu_flags.of)) { emu_ip = 0x04FB; emu_last_cs = 0xB503; emu_last_ip = 0x04DA; emu_last_length = 0x0012; emu_last_crc = 0xA0B3; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, 0x11E);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x04E5); emu_cs = 0x0FCB; f__0FCB_005F_001C_147D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { ovl__3503(0xFF); }
	f__B503_04E5_0008_71C8();
}

/**
 * Decompiled function f__B503_04E5_0008_71C8()
 *
 * @name f__B503_04E5_0008_71C8
 * @implements B503:04E5:0008:71C8 ()
 *
 * Called From: B503:04E5:0012:A0B3
 */
void f__B503_04E5_0008_71C8()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x04ED); f__B503_0F0C_0010_1F5F();
	f__B503_04ED_0008_77E4();
}

/**
 * Decompiled function f__B503_04ED_0008_77E4()
 *
 * @name f__B503_04ED_0008_77E4
 * @implements B503:04ED:0008:77E4 ()
 *
 * Called From: B503:04ED:0008:71C8
 */
void f__B503_04ED_0008_77E4()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_push(emu_si);
	emu_push(emu_cs);
	emu_push(0x04F5); f__B503_0586_0017_9053();
	f__B503_04F5_0006_0756();
}

/**
 * Decompiled function f__B503_04F5_0006_0756()
 *
 * @name f__B503_04F5_0006_0756
 * @implements B503:04F5:0006:0756 ()
 *
 * Called From: B503:04F5:0008:77E4
 */
void f__B503_04F5_0006_0756()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	f__B503_0500_0005_154E(); return;
}

/**
 * Decompiled function f__B503_0500_0005_154E()
 *
 * @name f__B503_0500_0005_154E
 * @implements B503:0500:0005:154E ()
 *
 * Called From: B503:04F9:0006:0756
 */
void f__B503_0500_0005_154E()
{
	emu_push(emu_cs); emu_push(0x0505); emu_cs = 0x1DD7; f__1DD7_0B53_0025_71E0();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { ovl__3503(0xFF); }
	f__B503_0505_0008_E8EA();
}

/**
 * Decompiled function f__B503_0505_0008_E8EA()
 *
 * @name f__B503_0505_0008_E8EA
 * @implements B503:0505:0008:E8EA ()
 *
 * Called From: B503:0505:0005:154E
 */
void f__B503_0505_0008_E8EA()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_cs); emu_push(0x050D); emu_cs = 0x2598; f__2598_0000_0017_D681();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { ovl__3503(0xFF); }
	f__B503_050D_0014_8E56();
}

/**
 * Decompiled function f__B503_050D_0014_8E56()
 *
 * @name f__B503_050D_0014_8E56
 * @implements B503:050D:0014:8E56 ()
 *
 * Called From: B503:050D:0008:E8EA
 */
void f__B503_050D_0014_8E56()
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
	emu_push(emu_cs); emu_push(0x0521); emu_cs = 0x2B42; f__2B42_0000_0022_87EE();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { ovl__3503(0xFF); }
	f__B503_0521_0008_F07A();
}

/**
 * Decompiled function f__B503_0521_0008_F07A()
 *
 * @name f__B503_0521_0008_F07A
 * @implements B503:0521:0008:F07A ()
 *
 * Called From: B503:0521:0014:8E56
 */
void f__B503_0521_0008_F07A()
{
	emu_addws(&emu_sp, 0x8);
	emu_push(emu_cs); emu_push(0x0529); emu_cs = 0x29E8; f__29E8_073F_000E_A6E4();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { ovl__3503(0xFF); }
	f__B503_0529_001A_DCA7();
}

/**
 * Decompiled function f__B503_0529_001A_DCA7()
 *
 * @name f__B503_0529_001A_DCA7
 * @implements B503:0529:001A:DCA7 ()
 *
 * Called From: B503:0529:0008:F07A
 */
void f__B503_0529_001A_DCA7()
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
	emu_push(emu_cs); emu_push(0x0543); emu_cs = 0x01F7; f__01F7_28B8_0024_D407();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { ovl__3503(0xFF); }
	f__B503_0543_0012_C6C5();
}

/**
 * Decompiled function f__B503_0543_0012_C6C5()
 *
 * @name f__B503_0543_0012_C6C5
 * @implements B503:0543:0012:C6C5 ()
 *
 * Called From: B503:0543:001A:DCA7
 */
void f__B503_0543_0012_C6C5()
{
	emu_addws(&emu_sp, 0xA);
	emu_movw(&emu_ax.x, 0xF);
	emu_push(emu_ax.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0x30A);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0555); emu_cs = 0x259E; f__259E_0006_0016_2DFF();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { ovl__3503(0xFF); }
	f__B503_0555_0008_F15E();
}

/**
 * Decompiled function f__B503_0555_0008_F15E()
 *
 * @name f__B503_0555_0008_F15E
 * @implements B503:0555:0008:F15E ()
 *
 * Called From: B503:0555:0012:C6C5
 */
void f__B503_0555_0008_F15E()
{
	emu_addws(&emu_sp, 0x6);
	emu_push(emu_cs); emu_push(0x055D); emu_cs = 0x2B6C; f__2B6C_0137_0020_17E5();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { ovl__3503(0xFF); }
	f__B503_055D_0008_5720();
}

/**
 * Decompiled function f__B503_055D_0008_5720()
 *
 * @name f__B503_055D_0008_5720
 * @implements B503:055D:0008:5720 ()
 *
 * Called From: B503:055D:0008:F15E
 */
void f__B503_055D_0008_5720()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0565); emu_cs = 0x24DA; f__24DA_0004_000E_98E7();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { ovl__3503(0xFF); }
	f__B503_0565_0006_027E();
}

/**
 * Decompiled function f__B503_0565_0006_027E()
 *
 * @name f__B503_0565_0006_027E
 * @implements B503:0565:0006:027E ()
 *
 * Called From: B503:0565:0008:5720
 */
void f__B503_0565_0006_027E()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_cs); emu_push(0x056B); emu_cs = 0x2B6C; f__2B6C_0169_001E_97C8();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { ovl__3503(0xFF); }
	f__B503_056B_000D_1B6E();
}

/**
 * Decompiled function f__B503_056B_000D_1B6E()
 *
 * @name f__B503_056B_000D_1B6E
 * @implements B503:056B:000D:1B6E ()
 *
 * Called From: B503:056B:0006:027E
 */
void f__B503_056B_000D_1B6E()
{
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3C34));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3C32));
	emu_push(emu_cs); emu_push(0x0578); emu_cs = 0x259E; f__259E_0040_0015_2233();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { ovl__3503(0xFF); }
	f__B503_0578_0008_5490();
}

/**
 * Decompiled function f__B503_0578_0008_5490()
 *
 * @name f__B503_0578_0008_5490
 * @implements B503:0578:0008:5490 ()
 *
 * Called From: B503:0578:000D:1B6E
 */
void f__B503_0578_0008_5490()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	f__B503_0013_0003_06EA(); return;
}

/**
 * Decompiled function f__B503_0580_0006_137A()
 *
 * @name f__B503_0580_0006_137A
 * @implements B503:0580:0006:137A ()
 *
 * Called From: B503:0013:0003:06EA
 */
void f__B503_0580_0006_137A()
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
 * Decompiled function f__B503_0586_0017_9053()
 *
 * @name f__B503_0586_0017_9053
 * @implements B503:0586:0017:9053 ()
 *
 * Called From: B503:04F2:0008:77E4
 */
void f__B503_0586_0017_9053()
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
	f__B503_059D_0013_7600();
}

/**
 * Decompiled function f__B503_059D_0013_7600()
 *
 * @name f__B503_059D_0013_7600
 * @implements B503:059D:0013:7600 ()
 *
 * Called From: B503:059D:0017:9053
 */
void f__B503_059D_0013_7600()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x2B41);
	emu_push(emu_ax.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0x24);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x05B0); emu_cs = 0x01F7; f__01F7_378D_0020_4A95();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { ovl__3503(0xFF); }
	f__B503_05B0_0029_64FB();
}

/**
 * Decompiled function f__B503_05B0_0029_64FB()
 *
 * @name f__B503_05B0_0029_64FB
 * @implements B503:05B0:0029:64FB ()
 *
 * Called From: B503:05B0:0013:7600
 */
void f__B503_05B0_0029_64FB()
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
	emu_push(emu_cs); emu_push(0x05D9); emu_cs = 0x01F7; f__01F7_2947_0014_9C5E();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { ovl__3503(0xFF); }
	f__B503_05D9_0008_EDBA();
}

/**
 * Decompiled function f__B503_05D9_0008_EDBA()
 *
 * @name f__B503_05D9_0008_EDBA
 * @implements B503:05D9:0008:EDBA ()
 *
 * Called From: B503:05D9:0029:64FB
 */
void f__B503_05D9_0008_EDBA()
{
	emu_addws(&emu_sp, 0x8);
	emu_xorw(&emu_si, emu_si);
	f__B503_071D_0008_F2D4(); return;
}

/**
 * Decompiled function f__B503_05E1_0013_654F()
 *
 * @name f__B503_05E1_0013_654F
 * @implements B503:05E1:0013:654F ()
 *
 * Called From: B503:0722:0008:F2D4
 * Called From: B503:0722:0014:D1BC
 */
void f__B503_05E1_0013_654F()
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
	emu_push(emu_cs); emu_push(0x05F4); emu_cs = 0x01F7; f__01F7_378D_0020_4A95();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { ovl__3503(0xFF); }
	f__B503_05F4_0029_9982();
}

/**
 * Decompiled function f__B503_05F4_0029_9982()
 *
 * @name f__B503_05F4_0029_9982
 * @implements B503:05F4:0029:9982 ()
 *
 * Called From: B503:05F4:0013:654F
 */
void f__B503_05F4_0029_9982()
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
	f__B503_061D_000A_AD23();
}

/**
 * Decompiled function f__B503_061D_000A_AD23()
 *
 * @name f__B503_061D_000A_AD23
 * @implements B503:061D:000A:AD23 ()
 *
 * Called From: B503:061D:0029:9982
 */
void f__B503_061D_000A_AD23()
{
	emu_addws(&emu_sp, 0x16);
	emu_orw(&emu_ax.x, emu_dx.x);
	if (!emu_flags.zf) { f__B503_0627_0033_19AB(); return; }
	f__B503_0725_0017_D2AA(); return;
}

/**
 * Decompiled function f__B503_0627_0033_19AB()
 *
 * @name f__B503_0627_0033_19AB
 * @implements B503:0627:0033:19AB ()
 *
 * Called From: B503:0622:000A:AD23
 */
void f__B503_0627_0033_19AB()
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
	emu_push(emu_cs); emu_push(0x065A); emu_cs = 0x01F7; f__01F7_3803_001E_4ADA();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { ovl__3503(0xFF); }
	f__B503_065A_000E_3FAF();
}

/**
 * Decompiled function f__B503_065A_000E_3FAF()
 *
 * @name f__B503_065A_000E_3FAF
 * @implements B503:065A:000E:3FAF ()
 *
 * Called From: B503:065A:0033:19AB
 */
void f__B503_065A_000E_3FAF()
{
	emu_addws(&emu_sp, 0x18);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_push(emu_cs);
	emu_push(0x0668); f__B503_1302_0013_3170();
	f__B503_0668_0039_68DC();
}

/**
 * Decompiled function f__B503_0668_0039_68DC()
 *
 * @name f__B503_0668_0039_68DC
 * @implements B503:0668:0039:68DC ()
 *
 * Called From: B503:0668:000E:3FAF
 */
void f__B503_0668_0039_68DC()
{
	emu_pop(&emu_cx.x);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.zf) { emu_ip = 0x0672; emu_last_cs = 0xB503; emu_last_ip = 0x066B; emu_last_length = 0x0039; emu_last_crc = 0x68DC; emu_call(); return; } // Jump does not resolve
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
		case 0x22A6034F: f__22A6_034F_000C_6447(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0xB503; emu_last_ip = 0x069C; emu_last_length = 0x0039; emu_last_crc = 0x68DC;
			emu_call();
			return;
	}
	f__B503_06A1_0031_00AA();
}

/**
 * Decompiled function f__B503_06A1_0031_00AA()
 *
 * @name f__B503_06A1_0031_00AA
 * @implements B503:06A1:0031:00AA ()
 *
 * Called From: B503:06A1:0039:68DC
 */
void f__B503_06A1_0031_00AA()
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
		case 0x22A6034F: f__22A6_034F_000C_6447(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0xB503; emu_last_ip = 0x06CD; emu_last_length = 0x0031; emu_last_crc = 0x00AA;
			emu_call();
			return;
	}
	f__B503_06D2_0031_026C();
}

/**
 * Decompiled function f__B503_06D2_0031_026C()
 *
 * @name f__B503_06D2_0031_026C
 * @implements B503:06D2:0031:026C ()
 *
 * Called From: B503:06D2:0031:00AA
 */
void f__B503_06D2_0031_026C()
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
	emu_push(emu_cs); emu_push(0x0703); emu_cs = 0x2903; f__2903_007A_0032_6B6A();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { ovl__3503(0xFF); }
	f__B503_0703_000E_80AC();
}

/**
 * Decompiled function f__B503_0703_000E_80AC()
 *
 * @name f__B503_0703_000E_80AC
 * @implements B503:0703:000E:80AC ()
 *
 * Called From: B503:0703:0031:026C
 */
void f__B503_0703_000E_80AC()
{
	emu_addws(&emu_sp, 0x6);
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0711); emu_cs = 0x2903; f__2903_0158_001A_A9AA();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { ovl__3503(0xFF); }
	f__B503_0711_0014_D1BC();
}

/**
 * Decompiled function f__B503_0711_0014_D1BC()
 *
 * @name f__B503_0711_0014_D1BC
 * @implements B503:0711:0014:D1BC ()
 *
 * Called From: B503:0711:000E:80AC
 */
void f__B503_0711_0014_D1BC()
{
	emu_addws(&emu_sp, 0x14);
	emu_addws(&emu_get_memory16(emu_ss, emu_bp, -0xE), 0x8);
	emu_addws(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x10);
	emu_incw(&emu_si);
	emu_cmpws(&emu_si, 0x14);
	if (!(emu_flags.sf != emu_flags.of)) { emu_ip = 0x0725; emu_last_cs = 0xB503; emu_last_ip = 0x0720; emu_last_length = 0x0014; emu_last_crc = 0xD1BC; emu_call(); return; } // Jump does not resolve
	f__B503_05E1_0013_654F(); return;
}

/**
 * Decompiled function f__B503_071D_0008_F2D4()
 *
 * @name f__B503_071D_0008_F2D4
 * @implements B503:071D:0008:F2D4 ()
 *
 * Called From: B503:05DE:0008:EDBA
 */
void f__B503_071D_0008_F2D4()
{
	emu_cmpws(&emu_si, 0x14);
	if (!(emu_flags.sf != emu_flags.of)) { emu_ip = 0x0725; emu_last_cs = 0xB503; emu_last_ip = 0x0720; emu_last_length = 0x0008; emu_last_crc = 0xF2D4; emu_call(); return; } // Jump does not resolve
	f__B503_05E1_0013_654F(); return;
}

/**
 * Decompiled function f__B503_0725_0017_D2AA()
 *
 * @name f__B503_0725_0017_D2AA
 * @implements B503:0725:0017:D2AA ()
 *
 * Called From: B503:0624:000A:AD23
 */
void f__B503_0725_0017_D2AA()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_si);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x12), 0x0);
	if (emu_flags.zf) { f__B503_0758_000E_9C63(); return; }
	emu_movw(&emu_ax.x, emu_bp - 0xC4);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_ss);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), emu_ax.x);
	emu_xorw(&emu_si, emu_si);
	emu_ip = 0x0751; emu_last_cs = 0xB503; emu_last_ip = 0x073A; emu_last_length = 0x0017; emu_last_crc = 0xD2AA; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B503_0758_000E_9C63()
 *
 * @name f__B503_0758_000E_9C63
 * @implements B503:0758:000E:9C63 ()
 *
 * Called From: B503:072C:0017:D2AA
 */
void f__B503_0758_000E_9C63()
{
	emu_movw(&emu_ax.x, emu_bp - 0xC4);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_ss);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), emu_ax.x);
	emu_xorw(&emu_si, emu_si);
	f__B503_0783_0019_DB7B(); return;
}

/**
 * Decompiled function f__B503_0766_000B_FFB4()
 *
 * @name f__B503_0766_000B_FFB4
 * @implements B503:0766:000B:FFB4 ()
 *
 * Called From: B503:0786:0019:DB7B
 * Called From: B503:0786:001E:A35D
 */
void f__B503_0766_000B_FFB4()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_push(emu_cs);
	emu_push(0x0771); f__B503_1302_0013_3170();
	f__B503_0771_002B_809C();
}

/**
 * Decompiled function f__B503_0771_002B_809C()
 *
 * @name f__B503_0771_002B_809C
 * @implements B503:0771:002B:809C ()
 *
 * Called From: B503:0771:000B:FFB4
 */
void f__B503_0771_002B_809C()
{
	emu_pop(&emu_cx.x);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (emu_flags.zf) { f__B503_077E_001E_A35D(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x0), 0x0);
	emu_addws(&emu_get_memory16(emu_ss, emu_bp, -0xE), 0x8);
	emu_incw(&emu_si);
	emu_cmpw(&emu_si, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if ((emu_flags.sf != emu_flags.of)) { emu_ip = 0x0766; emu_last_cs = 0xB503; emu_last_ip = 0x0786; emu_last_length = 0x002B; emu_last_crc = 0x809C; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_bp - 0xC4);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_ss);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x0);
	emu_push(emu_cs); emu_push(0x079C); emu_cs = 0x2B6C; emu_ip = 0x08D3; emu_last_cs = 0xB503; emu_last_ip = 0x0797; emu_last_length = 0x002B; emu_last_crc = 0x809C; emu_call(); // Jump does not resolve
	f__B503_079C_0004_07AA();
}

/**
 * Decompiled function f__B503_077E_001E_A35D()
 *
 * @name f__B503_077E_001E_A35D
 * @implements B503:077E:001E:A35D ()
 *
 * Called From: B503:0774:002B:809C
 */
void f__B503_077E_001E_A35D()
{
	emu_addws(&emu_get_memory16(emu_ss, emu_bp, -0xE), 0x8);
	emu_incw(&emu_si);
	emu_cmpw(&emu_si, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if ((emu_flags.sf != emu_flags.of)) { f__B503_0766_000B_FFB4(); return; }
	emu_movw(&emu_ax.x, emu_bp - 0xC4);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_ss);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x0);
	emu_push(emu_cs); emu_push(0x079C); emu_cs = 0x2B6C; f__2B6C_0137_0020_17E5();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { ovl__3503(0xFF); }
	f__B503_079C_0004_07AA();
}

/**
 * Decompiled function f__B503_0783_0019_DB7B()
 *
 * @name f__B503_0783_0019_DB7B
 * @implements B503:0783:0019:DB7B ()
 *
 * Called From: B503:0764:000E:9C63
 */
void f__B503_0783_0019_DB7B()
{
	emu_cmpw(&emu_si, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if ((emu_flags.sf != emu_flags.of)) { f__B503_0766_000B_FFB4(); return; }
	emu_movw(&emu_ax.x, emu_bp - 0xC4);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_ss);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x0);
	emu_push(emu_cs); emu_push(0x079C); emu_cs = 0x2B6C; emu_ip = 0x08D3; emu_last_cs = 0xB503; emu_last_ip = 0x0797; emu_last_length = 0x0019; emu_last_crc = 0xDB7B; emu_call(); // Jump does not resolve
	f__B503_079C_0004_07AA();
}

/**
 * Decompiled function f__B503_079C_0004_07AA()
 *
 * @name f__B503_079C_0004_07AA
 * @implements B503:079C:0004:07AA ()
 *
 * Called From: B503:079C:001E:A35D
 */
void f__B503_079C_0004_07AA()
{
	emu_xorw(&emu_si, emu_si);
	f__B503_07E3_000A_FA3E(); return;
}

/**
 * Decompiled function f__B503_07A0_0037_0CE6()
 *
 * @name f__B503_07A0_0037_0CE6
 * @implements B503:07A0:0037:0CE6 ()
 *
 * Called From: B503:07E6:000A:FA3E
 * Called From: B503:07E6:0016:37DA
 */
void f__B503_07A0_0037_0CE6()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x0), 0x0);
	if (emu_flags.zf) { emu_ip = 0x07DA; emu_last_cs = 0xB503; emu_last_ip = 0x07A7; emu_last_length = 0x0037; emu_last_crc = 0x0CE6; emu_call(); return; } // Jump does not resolve
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
		case 0x22A6034F: f__22A6_034F_000C_6447(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0xB503; emu_last_ip = 0x07D2; emu_last_length = 0x0037; emu_last_crc = 0x0CE6;
			emu_call();
			return;
	}
	f__B503_07D7_0016_37DA();
}

/**
 * Decompiled function f__B503_07D7_0016_37DA()
 *
 * @name f__B503_07D7_0016_37DA
 * @implements B503:07D7:0016:37DA ()
 *
 * Called From: B503:07D7:0037:0CE6
 */
void f__B503_07D7_0016_37DA()
{
	emu_addws(&emu_sp, 0x10);
	emu_addws(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x10);
	emu_addws(&emu_get_memory16(emu_ss, emu_bp, -0xE), 0x8);
	emu_incw(&emu_si);
	emu_cmpw(&emu_si, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if ((emu_flags.sf != emu_flags.of)) { f__B503_07A0_0037_0CE6(); return; }
	emu_push(emu_cs); emu_push(0x07ED); emu_cs = 0x2B6C; f__2B6C_0169_001E_97C8();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { ovl__3503(0xFF); }
	f__B503_07ED_0005_137A();
}

/**
 * Decompiled function f__B503_07E3_000A_FA3E()
 *
 * @name f__B503_07E3_000A_FA3E
 * @implements B503:07E3:000A:FA3E ()
 *
 * Called From: B503:079E:0004:07AA
 */
void f__B503_07E3_000A_FA3E()
{
	emu_cmpw(&emu_si, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if ((emu_flags.sf != emu_flags.of)) { f__B503_07A0_0037_0CE6(); return; }
	emu_push(emu_cs); emu_push(0x07ED); emu_cs = 0x2B6C; emu_ip = 0x0956; emu_last_cs = 0xB503; emu_last_ip = 0x07E8; emu_last_length = 0x000A; emu_last_crc = 0xFA3E; emu_call(); // Jump does not resolve
	f__B503_07ED_0005_137A();
}

/**
 * Decompiled function f__B503_07ED_0005_137A()
 *
 * @name f__B503_07ED_0005_137A
 * @implements B503:07ED:0005:137A ()
 *
 * Called From: B503:07ED:0016:37DA
 */
void f__B503_07ED_0005_137A()
{
	emu_push(emu_cs); emu_push(0x07F2); emu_cs = 0x29E8; f__29E8_073F_000E_A6E4();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { ovl__3503(0xFF); }
	f__B503_07F2_0009_CC98();
}

/**
 * Decompiled function f__B503_07F2_0009_CC98()
 *
 * @name f__B503_07F2_0009_CC98
 * @implements B503:07F2:0009:CC98 ()
 *
 * Called From: B503:07F2:0005:137A
 */
void f__B503_07F2_0009_CC98()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_movw(&emu_di, emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), emu_ax.x);
	f__B503_0835_0010_8B6B(); return;
}

/**
 * Decompiled function f__B503_07FB_0005_178C()
 *
 * @name f__B503_07FB_0005_178C
 * @implements B503:07FB:0005:178C ()
 *
 * Called From: B503:0839:0010:8B6B
 */
void f__B503_07FB_0005_178C()
{
	emu_push(emu_cs);
	emu_push(0x0800); f__B503_088B_000B_3901();
	f__B503_0800_0014_12A0();
}

/**
 * Decompiled function f__B503_0800_0014_12A0()
 *
 * @name f__B503_0800_0014_12A0
 * @implements B503:0800:0014:12A0 ()
 *
 * Called From: B503:0800:0005:178C
 */
void f__B503_0800_0014_12A0()
{
	emu_movw(&emu_di, emu_ax.x);
	emu_orw(&emu_di, emu_di);
	if (emu_flags.zf) { f__B503_0835_0010_8B6B(); return; }
	emu_movw(&emu_ax.x, emu_bp - 0xC4);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_ss);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), emu_ax.x);
	emu_xorw(&emu_si, emu_si);
	f__B503_0830_0015_8CD5(); return;
}

/**
 * Decompiled function f__B503_0814_0005_151E()
 *
 * @name f__B503_0814_0005_151E
 * @implements B503:0814:0005:151E ()
 *
 * Called From: B503:0833:0015:8CD5
 * Called From: B503:0833:001A:EB57
 */
void f__B503_0814_0005_151E()
{
	emu_push(emu_cs);
	emu_push(0x0819); f__B503_1343_003B_4403();
	f__B503_0819_0012_D158();
}

/**
 * Decompiled function f__B503_0819_0012_D158()
 *
 * @name f__B503_0819_0012_D158
 * @implements B503:0819:0012:D158 ()
 *
 * Called From: B503:0819:0005:151E
 */
void f__B503_0819_0012_D158()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx.x,  0x0), emu_di);
	if (!emu_flags.zf) { f__B503_082B_001A_EB57(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), 0x1);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x14), emu_si);
	f__B503_0835_0010_8B6B(); return;
}

/**
 * Decompiled function f__B503_082B_001A_EB57()
 *
 * @name f__B503_082B_001A_EB57
 * @implements B503:082B:001A:EB57 ()
 *
 * Called From: B503:081F:0012:D158
 */
void f__B503_082B_001A_EB57()
{
	emu_addws(&emu_get_memory16(emu_ss, emu_bp, -0xE), 0x8);
	emu_incw(&emu_si);
	emu_cmpw(&emu_si, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if ((emu_flags.sf != emu_flags.of)) { f__B503_0814_0005_151E(); return; }
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x10), 0x0);
	if (emu_flags.zf) { emu_ip = 0x07FB; emu_last_cs = 0xB503; emu_last_ip = 0x0839; emu_last_length = 0x001A; emu_last_crc = 0xEB57; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_push(emu_di);
	emu_push(emu_cs);
	emu_push(0x0845); emu_ip = 0x12AC; emu_last_cs = 0xB503; emu_last_ip = 0x0842; emu_last_length = 0x001A; emu_last_crc = 0xEB57; emu_call(); // Jump does not resolve
	f__B503_0845_000C_5BC6();
}

/**
 * Decompiled function f__B503_0830_0015_8CD5()
 *
 * @name f__B503_0830_0015_8CD5
 * @implements B503:0830:0015:8CD5 ()
 *
 * Called From: B503:0812:0014:12A0
 */
void f__B503_0830_0015_8CD5()
{
	emu_cmpw(&emu_si, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if ((emu_flags.sf != emu_flags.of)) { f__B503_0814_0005_151E(); return; }
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x10), 0x0);
	if (emu_flags.zf) { emu_ip = 0x07FB; emu_last_cs = 0xB503; emu_last_ip = 0x0839; emu_last_length = 0x0015; emu_last_crc = 0x8CD5; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_push(emu_di);
	emu_push(emu_cs);
	emu_push(0x0845); emu_ip = 0x12AC; emu_last_cs = 0xB503; emu_last_ip = 0x0842; emu_last_length = 0x0015; emu_last_crc = 0x8CD5; emu_call(); // Jump does not resolve
	f__B503_0845_000C_5BC6();
}

/**
 * Decompiled function f__B503_0835_0010_8B6B()
 *
 * @name f__B503_0835_0010_8B6B
 * @implements B503:0835:0010:8B6B ()
 *
 * Called From: B503:07F9:0009:CC98
 * Called From: B503:0804:0014:12A0
 * Called From: B503:0829:0012:D158
 */
void f__B503_0835_0010_8B6B()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x10), 0x0);
	if (emu_flags.zf) { f__B503_07FB_0005_178C(); return; }
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_push(emu_di);
	emu_push(emu_cs);
	emu_push(0x0845); f__B503_12AC_0013_3170();
	f__B503_0845_000C_5BC6();
}

/**
 * Decompiled function f__B503_0845_000C_5BC6()
 *
 * @name f__B503_0845_000C_5BC6
 * @implements B503:0845:000C:5BC6 ()
 *
 * Called From: B503:0845:0010:8B6B
 */
void f__B503_0845_000C_5BC6()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x2B1D);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x0851); f__B503_0F0C_0010_1F5F();
	f__B503_0851_000E_DE8A();
}

/**
 * Decompiled function f__B503_0851_000E_DE8A()
 *
 * @name f__B503_0851_000E_DE8A
 * @implements B503:0851:000E:DE8A ()
 *
 * Called From: B503:0851:000C:5BC6
 */
void f__B503_0851_000E_DE8A()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0xC4);
	emu_push(emu_ax.x);
	emu_push(emu_di);
	emu_push(emu_cs);
	emu_push(0x085F); f__B503_08DB_0014_F2F4();
	f__B503_085F_0026_B16E();
}

/**
 * Decompiled function f__B503_085F_0026_B16E()
 *
 * @name f__B503_085F_0026_B16E
 * @implements B503:085F:0026:B16E ()
 *
 * Called From: B503:085F:000E:DE8A
 */
void f__B503_085F_0026_B16E()
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
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__B503_087A_000B_DF81(); return; }
	emu_decw(&emu_di);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0x6), 0x8);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { emu_ip = 0x0881; emu_last_cs = 0xB503; emu_last_ip = 0x087E; emu_last_length = 0x0026; emu_last_crc = 0xB16E; emu_call(); return; } // Jump does not resolve
	emu_decw(&emu_di);
	emu_movw(&emu_ax.x, emu_di);
	emu_ip = 0x0885; emu_last_cs = 0xB503; emu_last_ip = 0x0883; emu_last_length = 0x0026; emu_last_crc = 0xB16E; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B503_087A_000B_DF81()
 *
 * @name f__B503_087A_000B_DF81
 * @implements B503:087A:000B:DF81 ()
 *
 * Called From: B503:0877:0026:B16E
 */
void f__B503_087A_000B_DF81()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0x6), 0x8);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__B503_0881_0004_0D24(); return; }
	emu_decw(&emu_di);
	emu_movw(&emu_ax.x, emu_di);
	emu_ip = 0x0885; emu_last_cs = 0xB503; emu_last_ip = 0x0883; emu_last_length = 0x000B; emu_last_crc = 0xDF81; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B503_0881_0004_0D24()
 *
 * @name f__B503_0881_0004_0D24
 * @implements B503:0881:0004:0D24 ()
 *
 * Called From: B503:087E:000B:DF81
 */
void f__B503_0881_0004_0D24()
{
	emu_movw(&emu_ax.x, emu_di);
	f__B503_0885_0006_137A(); return;
}

/**
 * Decompiled function f__B503_0885_0006_137A()
 *
 * @name f__B503_0885_0006_137A
 * @implements B503:0885:0006:137A ()
 *
 * Called From: B503:0883:0004:0D24
 */
void f__B503_0885_0006_137A()
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
 * Decompiled function f__B503_088B_000B_3901()
 *
 * @name f__B503_088B_000B_3901
 * @implements B503:088B:000B:3901 ()
 *
 * Called From: B503:07FD:0005:178C
 */
void f__B503_088B_000B_3901()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_si);
	emu_xorw(&emu_si, emu_si);
	emu_push(emu_cs);
	emu_push(0x0896); f__B503_1343_003B_4403();
	f__B503_0896_0005_14B2();
}

/**
 * Decompiled function f__B503_0896_0005_14B2()
 *
 * @name f__B503_0896_0005_14B2
 * @implements B503:0896:0005:14B2 ()
 *
 * Called From: B503:0896:000B:3901
 */
void f__B503_0896_0005_14B2()
{
	emu_push(emu_cs); emu_push(0x089B); emu_cs = 0x29E8; f__29E8_0643_0008_40B8();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { ovl__3503(0xFF); }
	f__B503_089B_0008_7036();
}

/**
 * Decompiled function f__B503_089B_0008_7036()
 *
 * @name f__B503_089B_0008_7036
 * @implements B503:089B:0008:7036 ()
 *
 * Called From: B503:089B:0005:14B2
 */
void f__B503_089B_0008_7036()
{
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.zf) { f__B503_08A3_0005_1F2A(); return; }
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__B503_08D8_0003_0212(); return;
}

/**
 * Decompiled function f__B503_08A1_0002_03C6()
 *
 * @name f__B503_08A1_0002_03C6
 * @implements B503:08A1:0002:03C6 ()
 *
 * Called From: B503:08D6:0020:EF71
 */
void f__B503_08A1_0002_03C6()
{
	f__B503_08D8_0003_0212(); return;
}

/**
 * Decompiled function f__B503_08A3_0005_1F2A()
 *
 * @name f__B503_08A3_0005_1F2A
 * @implements B503:08A3:0005:1F2A ()
 *
 * Called From: B503:089D:0008:7036
 */
void f__B503_08A3_0005_1F2A()
{
	emu_push(emu_cs); emu_push(0x08A8); emu_cs = 0x29E8; f__29E8_07FA_0020_41C7();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { ovl__3503(0xFF); }
	f__B503_08A8_0010_EA33();
}

/**
 * Decompiled function f__B503_08A8_0010_EA33()
 *
 * @name f__B503_08A8_0010_EA33
 * @implements B503:08A8:0010:EA33 ()
 *
 * Called From: B503:08A8:0005:1F2A
 */
void f__B503_08A8_0010_EA33()
{
	emu_movw(&emu_si, emu_ax.x);
	emu_cmpw(&emu_si, 0xC6);
	if (emu_flags.zf) { f__B503_08B8_0020_EF71(); return; }
	emu_cmpw(&emu_si, 0xC7);
	if (emu_flags.zf) { emu_ip = 0x08B8; emu_last_cs = 0xB503; emu_last_ip = 0x08B4; emu_last_length = 0x0010; emu_last_crc = 0xEA33; emu_call(); return; } // Jump does not resolve
	emu_ip = 0x089F; emu_last_cs = 0xB503; emu_last_ip = 0x08B6; emu_last_length = 0x0010; emu_last_crc = 0xEA33; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B503_08B8_0020_EF71()
 *
 * @name f__B503_08B8_0020_EF71
 * @implements B503:08B8:0020:EF71 ()
 *
 * Called From: B503:08AE:0010:EA33
 */
void f__B503_08B8_0020_EF71()
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
	f__B503_08A1_0002_03C6(); return;
}

/**
 * Decompiled function f__B503_08D8_0003_0212()
 *
 * @name f__B503_08D8_0003_0212
 * @implements B503:08D8:0003:0212 ()
 *
 * Called From: B503:08A1:0008:7036
 * Called From: B503:08A1:0002:03C6
 */
void f__B503_08D8_0003_0212()
{
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B503_08DB_0014_F2F4()
 *
 * @name f__B503_08DB_0014_F2F4
 * @implements B503:08DB:0014:F2F4 ()
 *
 * Called From: B503:085C:000E:DE8A
 */
void f__B503_08DB_0014_F2F4()
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
	f__B503_08EF_0016_EB46();
}

/**
 * Decompiled function f__B503_08EF_0016_EB46()
 *
 * @name f__B503_08EF_0016_EB46
 * @implements B503:08EF:0016:EB46 ()
 *
 * Called From: B503:08EF:0014:F2F4
 */
void f__B503_08EF_0016_EB46()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x12), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x14), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x16), 0x0);
	emu_xorw(&emu_si, emu_si);
	f__B503_095E_0015_981D(); return;
}

/**
 * Decompiled function f__B503_0905_0005_1550()
 *
 * @name f__B503_0905_0005_1550
 * @implements B503:0905:0005:1550 ()
 *
 * Called From: B503:0961:0015:981D
 * Called From: B503:0961:001E:C1B9
 */
void f__B503_0905_0005_1550()
{
	emu_push(emu_cs);
	emu_push(0x090A); f__B503_1343_003B_4403();
	f__B503_090A_0016_472C();
}

/**
 * Decompiled function f__B503_090A_0016_472C()
 *
 * @name f__B503_090A_0016_472C
 * @implements B503:090A:0016:472C ()
 *
 * Called From: B503:090A:0005:1550
 */
void f__B503_090A_0016_472C()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x0), 0x0);
	if (emu_flags.zf) { f__B503_0955_001E_C1B9(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx.x,  0x0), emu_di);
	if (emu_flags.zf) { f__B503_0955_001E_C1B9(); return; }
	emu_push(emu_cs); emu_push(0x0920); emu_cs = 0x2B6C; f__2B6C_0137_0020_17E5();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { ovl__3503(0xFF); }
	f__B503_0920_002D_4FDE();
}

/**
 * Decompiled function f__B503_0920_002D_4FDE()
 *
 * @name f__B503_0920_002D_4FDE
 * @implements B503:0920:002D:4FDE ()
 *
 * Called From: B503:0920:0016:472C
 */
void f__B503_0920_002D_4FDE()
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
		case 0x22A6034F: f__22A6_034F_000C_6447(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0xB503; emu_last_ip = 0x0948; emu_last_length = 0x002D; emu_last_crc = 0x4FDE;
			emu_call();
			return;
	}
	f__B503_094D_0008_F13E();
}

/**
 * Decompiled function f__B503_094D_0008_F13E()
 *
 * @name f__B503_094D_0008_F13E
 * @implements B503:094D:0008:F13E ()
 *
 * Called From: B503:094D:002D:4FDE
 */
void f__B503_094D_0008_F13E()
{
	emu_addws(&emu_sp, 0x10);
	emu_push(emu_cs); emu_push(0x0955); emu_cs = 0x2B6C; f__2B6C_0169_001E_97C8();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { ovl__3503(0xFF); }
	f__B503_0955_001E_C1B9();
}

/**
 * Decompiled function f__B503_0955_001E_C1B9()
 *
 * @name f__B503_0955_001E_C1B9
 * @implements B503:0955:001E:C1B9 ()
 *
 * Called From: B503:0911:0016:472C
 * Called From: B503:0919:0016:472C
 * Called From: B503:0955:0008:F13E
 */
void f__B503_0955_001E_C1B9()
{
	emu_addws(&emu_get_memory16(emu_ss, emu_bp, -0x16), 0x10);
	emu_addws(&emu_get_memory16(emu_ss, emu_bp, -0x14), 0x8);
	emu_incw(&emu_si);
	emu_cmpws(&emu_si, 0x14);
	if ((emu_flags.sf != emu_flags.of)) { f__B503_0905_0005_1550(); return; }
	emu_push(emu_di);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x2B46);
	emu_push(emu_ax.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0x4);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0973); emu_cs = 0x01F7; f__01F7_378D_0020_4A95();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { ovl__3503(0xFF); }
	f__B503_0973_0029_1502();
}

/**
 * Decompiled function f__B503_095E_0015_981D()
 *
 * @name f__B503_095E_0015_981D
 * @implements B503:095E:0015:981D ()
 *
 * Called From: B503:0903:0016:EB46
 */
void f__B503_095E_0015_981D()
{
	emu_cmpws(&emu_si, 0x14);
	if ((emu_flags.sf != emu_flags.of)) { f__B503_0905_0005_1550(); return; }
	emu_push(emu_di);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x2B46);
	emu_push(emu_ax.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0x4);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0973); emu_cs = 0x01F7; emu_ip = 0x4100; emu_last_cs = 0xB503; emu_last_ip = 0x096E; emu_last_length = 0x0015; emu_last_crc = 0x981D; emu_call(); // Jump does not resolve
	f__B503_0973_0029_1502();
}

/**
 * Decompiled function f__B503_0973_0029_1502()
 *
 * @name f__B503_0973_0029_1502
 * @implements B503:0973:0029:1502 ()
 *
 * Called From: B503:0973:001E:C1B9
 */
void f__B503_0973_0029_1502()
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
	f__B503_099C_001C_137E();
}

/**
 * Decompiled function f__B503_099C_001C_137E()
 *
 * @name f__B503_099C_001C_137E
 * @implements B503:099C:001C:137E ()
 *
 * Called From: B503:099C:0029:1502
 */
void f__B503_099C_001C_137E()
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
	emu_push(emu_cs); emu_push(0x09B8); emu_cs = 0x01F7; f__01F7_3803_001E_4ADA();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { ovl__3503(0xFF); }
	f__B503_09B8_0011_E839();
}

/**
 * Decompiled function f__B503_09B8_0011_E839()
 *
 * @name f__B503_09B8_0011_E839
 * @implements B503:09B8:0011:E839 ()
 *
 * Called From: B503:09B8:001C:137E
 */
void f__B503_09B8_0011_E839()
{
	emu_addws(&emu_sp, 0x10);
	emu_push(emu_di);
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x7E1C));
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x7E1E));
	emu_push(emu_cs); emu_push(0x09C9); emu_cs = 0x2903; f__2903_007A_0032_6B6A();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { ovl__3503(0xFF); }
	f__B503_09C9_0014_A387();
}

/**
 * Decompiled function f__B503_09C9_0014_A387()
 *
 * @name f__B503_09C9_0014_A387
 * @implements B503:09C9:0014:A387 ()
 *
 * Called From: B503:09C9:0011:E839
 */
void f__B503_09C9_0014_A387()
{
	emu_addws(&emu_sp, 0x6);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_push(emu_cs); emu_push(0x09DD); emu_cs = 0x260F; f__260F_003A_0014_CDCF();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { ovl__3503(0xFF); }
	f__B503_09DD_0010_4A27();
}

/**
 * Decompiled function f__B503_09DD_0010_4A27()
 *
 * @name f__B503_09DD_0010_4A27
 * @implements B503:09DD:0010:4A27 ()
 *
 * Called From: B503:09DD:0014:A387
 */
void f__B503_09DD_0010_4A27()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_push(emu_cs); emu_push(0x09ED); emu_cs = 0x260F; f__260F_0054_0016_11EB();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { ovl__3503(0xFF); }
	f__B503_09ED_0012_DA8D();
}

/**
 * Decompiled function f__B503_09ED_0012_DA8D()
 *
 * @name f__B503_09ED_0012_DA8D
 * @implements B503:09ED:0012:DA8D ()
 *
 * Called From: B503:09ED:0010:4A27
 */
void f__B503_09ED_0012_DA8D()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_ax.x);
	emu_addws(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x8);
	emu_addws(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x18);
	emu_push(emu_cs); emu_push(0x09FF); emu_cs = 0x2B6C; f__2B6C_0137_0020_17E5();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { ovl__3503(0xFF); }
	f__B503_09FF_0025_AC0C();
}

/**
 * Decompiled function f__B503_09FF_0025_AC0C()
 *
 * @name f__B503_09FF_0025_AC0C
 * @implements B503:09FF:0025:AC0C ()
 *
 * Called From: B503:09FF:0012:DA8D
 */
void f__B503_09FF_0025_AC0C()
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
		case 0x22A6034F: f__22A6_034F_000C_6447(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0xB503; emu_last_ip = 0x0A1F; emu_last_length = 0x0025; emu_last_crc = 0xAC0C;
			emu_call();
			return;
	}
	f__B503_0A24_0008_F13E();
}

/**
 * Decompiled function f__B503_0A24_0008_F13E()
 *
 * @name f__B503_0A24_0008_F13E
 * @implements B503:0A24:0008:F13E ()
 *
 * Called From: B503:0A24:0025:AC0C
 */
void f__B503_0A24_0008_F13E()
{
	emu_addws(&emu_sp, 0x10);
	emu_push(emu_cs); emu_push(0x0A2C); emu_cs = 0x2B6C; f__2B6C_0169_001E_97C8();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { ovl__3503(0xFF); }
	f__B503_0A2C_0028_0F0C();
}

/**
 * Decompiled function f__B503_0A2C_0028_0F0C()
 *
 * @name f__B503_0A2C_0028_0F0C
 * @implements B503:0A2C:0028:0F0C ()
 *
 * Called From: B503:0A2C:0008:F13E
 */
void f__B503_0A2C_0028_0F0C()
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
		case 0x22A6034F: f__22A6_034F_000C_6447(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0xB503; emu_last_ip = 0x0A4F; emu_last_length = 0x0028; emu_last_crc = 0x0F0C;
			emu_call();
			return;
	}
	f__B503_0A54_002D_316B();
}

/**
 * Decompiled function f__B503_0A54_002D_316B()
 *
 * @name f__B503_0A54_002D_316B
 * @implements B503:0A54:002D:316B ()
 *
 * Called From: B503:0A54:0028:0F0C
 */
void f__B503_0A54_002D_316B()
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
	emu_push(emu_cs); emu_push(0x0A81); emu_cs = 0x2903; f__2903_0158_001A_A9AA();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { ovl__3503(0xFF); }
	f__B503_0A81_0013_CAFC();
}

/**
 * Decompiled function f__B503_0A81_0013_CAFC()
 *
 * @name f__B503_0A81_0013_CAFC
 * @implements B503:0A81:0013:CAFC ()
 *
 * Called From: B503:0A81:002D:316B
 */
void f__B503_0A81_0013_CAFC()
{
	emu_addws(&emu_sp, 0x14);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x12), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x14), emu_dx.x);
	emu_xorw(&emu_si, emu_si);
	f__B503_0AFA_0009_F839(); return;
}

/**
 * Decompiled function f__B503_0A94_0005_1718()
 *
 * @name f__B503_0A94_0005_1718
 * @implements B503:0A94:0005:1718 ()
 *
 * Called From: B503:0AFD:0009:F839
 * Called From: B503:0AFD:000E:601E
 * Called From: B503:0AFD:0011:61D6
 */
void f__B503_0A94_0005_1718()
{
	emu_push(emu_cs);
	emu_push(0x0A99); f__B503_1343_003B_4403();
	f__B503_0A99_004B_501D();
}

/**
 * Decompiled function f__B503_0A99_004B_501D()
 *
 * @name f__B503_0A99_004B_501D
 * @implements B503:0A99:004B:501D ()
 *
 * Called From: B503:0A99:0005:1718
 */
void f__B503_0A99_004B_501D()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx.x,  0x0), emu_di);
	if (!emu_flags.zf) { f__B503_0AF5_000E_601E(); return; }
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
	emu_push(emu_cs); emu_push(0x0AE4); emu_cs = 0x2903; f__2903_007A_0032_6B6A();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { ovl__3503(0xFF); }
	f__B503_0AE4_000E_80AC();
}

/**
 * Decompiled function f__B503_0AE4_000E_80AC()
 *
 * @name f__B503_0AE4_000E_80AC
 * @implements B503:0AE4:000E:80AC ()
 *
 * Called From: B503:0AE4:004B:501D
 */
void f__B503_0AE4_000E_80AC()
{
	emu_addws(&emu_sp, 0x6);
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0AF2); emu_cs = 0x2903; f__2903_0158_001A_A9AA();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { ovl__3503(0xFF); }
	f__B503_0AF2_0011_61D6();
}

/**
 * Decompiled function f__B503_0AF2_0011_61D6()
 *
 * @name f__B503_0AF2_0011_61D6
 * @implements B503:0AF2:0011:61D6 ()
 *
 * Called From: B503:0AF2:000E:80AC
 */
void f__B503_0AF2_0011_61D6()
{
	emu_addws(&emu_sp, 0x14);
	emu_addws(&emu_get_memory16(emu_ss, emu_bp, -0x14), 0x8);
	emu_incw(&emu_si);
	emu_cmpws(&emu_si, 0x14);
	if ((emu_flags.sf != emu_flags.of)) { f__B503_0A94_0005_1718(); return; }
	emu_xorw(&emu_si, emu_si);
	emu_ip = 0x0B5D; emu_last_cs = 0xB503; emu_last_ip = 0x0B01; emu_last_length = 0x0011; emu_last_crc = 0x61D6; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B503_0AF5_000E_601E()
 *
 * @name f__B503_0AF5_000E_601E
 * @implements B503:0AF5:000E:601E ()
 *
 * Called From: B503:0A9F:004B:501D
 */
void f__B503_0AF5_000E_601E()
{
	emu_addws(&emu_get_memory16(emu_ss, emu_bp, -0x14), 0x8);
	emu_incw(&emu_si);
	emu_cmpws(&emu_si, 0x14);
	if ((emu_flags.sf != emu_flags.of)) { f__B503_0A94_0005_1718(); return; }
	emu_xorw(&emu_si, emu_si);
	f__B503_0B5D_000B_D7FD(); return;
}

/**
 * Decompiled function f__B503_0AFA_0009_F839()
 *
 * @name f__B503_0AFA_0009_F839
 * @implements B503:0AFA:0009:F839 ()
 *
 * Called From: B503:0A92:0013:CAFC
 */
void f__B503_0AFA_0009_F839()
{
	emu_cmpws(&emu_si, 0x14);
	if ((emu_flags.sf != emu_flags.of)) { f__B503_0A94_0005_1718(); return; }
	emu_xorw(&emu_si, emu_si);
	emu_ip = 0x0B5D; emu_last_cs = 0xB503; emu_last_ip = 0x0B01; emu_last_length = 0x0009; emu_last_crc = 0xF839; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B503_0B03_0005_11DE()
 *
 * @name f__B503_0B03_0005_11DE
 * @implements B503:0B03:0005:11DE ()
 *
 * Called From: B503:0B60:000B:D7FD
 * Called From: B503:0B60:0015:AB87
 */
void f__B503_0B03_0005_11DE()
{
	emu_push(emu_cs); emu_push(0x0B08); emu_cs = 0x2B6C; f__2B6C_0137_0020_17E5();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { ovl__3503(0xFF); }
	f__B503_0B08_0022_2ADB();
}

/**
 * Decompiled function f__B503_0B08_0022_2ADB()
 *
 * @name f__B503_0B08_0022_2ADB
 * @implements B503:0B08:0022:2ADB ()
 *
 * Called From: B503:0B08:0005:11DE
 */
void f__B503_0B08_0022_2ADB()
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
	if (emu_flags.zf) { f__B503_0B2A_000E_57B0(); return; }
	emu_movw(&emu_ax.x, 0xB0);
	f__B503_0B2D_000B_579C(); return;
}

/**
 * Decompiled function f__B503_0B2A_000E_57B0()
 *
 * @name f__B503_0B2A_000E_57B0
 * @implements B503:0B2A:000E:57B0 ()
 *
 * Called From: B503:0B23:0022:2ADB
 */
void f__B503_0B2A_000E_57B0()
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
		case 0x22A6034F: f__22A6_034F_000C_6447(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0xB503; emu_last_ip = 0x0B33; emu_last_length = 0x000E; emu_last_crc = 0x57B0;
			emu_call();
			return;
	}
	f__B503_0B38_0008_F13E();
}

/**
 * Decompiled function f__B503_0B2D_000B_579C()
 *
 * @name f__B503_0B2D_000B_579C
 * @implements B503:0B2D:000B:579C ()
 *
 * Called From: B503:0B28:0022:2ADB
 */
void f__B503_0B2D_000B_579C()
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
		case 0x22A6034F: f__22A6_034F_000C_6447(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0xB503; emu_last_ip = 0x0B33; emu_last_length = 0x000B; emu_last_crc = 0x579C;
			emu_call();
			return;
	}
	f__B503_0B38_0008_F13E();
}

/**
 * Decompiled function f__B503_0B38_0008_F13E()
 *
 * @name f__B503_0B38_0008_F13E
 * @implements B503:0B38:0008:F13E ()
 *
 * Called From: B503:0B38:000E:57B0
 * Called From: B503:0B38:000B:579C
 */
void f__B503_0B38_0008_F13E()
{
	emu_addws(&emu_sp, 0x10);
	emu_push(emu_cs); emu_push(0x0B40); emu_cs = 0x2B6C; f__2B6C_0169_001E_97C8();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { ovl__3503(0xFF); }
	f__B503_0B40_000E_351F();
}

/**
 * Decompiled function f__B503_0B40_000E_351F()
 *
 * @name f__B503_0B40_000E_351F
 * @implements B503:0B40:000E:351F ()
 *
 * Called From: B503:0B40:0008:F13E
 */
void f__B503_0B40_000E_351F()
{
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x76B6), 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x76B4), 0x14);
	f__B503_0B53_0015_AB87(); return;
}

/**
 * Decompiled function f__B503_0B4E_0005_166E()
 *
 * @name f__B503_0B4E_0005_166E
 * @implements B503:0B4E:0005:166E ()
 *
 * Called From: B503:0B5A:0015:AB87
 */
void f__B503_0B4E_0005_166E()
{
	emu_push(emu_cs);
	emu_push(0x0B53); f__B503_1343_003B_4403();
	f__B503_0B53_0015_AB87();
}

/**
 * Decompiled function f__B503_0B53_0015_AB87()
 *
 * @name f__B503_0B53_0015_AB87
 * @implements B503:0B53:0015:AB87 ()
 *
 * Called From: B503:0B4C:000E:351F
 * Called From: B503:0B53:0005:166E
 */
void f__B503_0B53_0015_AB87()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76B4));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76B6));
	if (!emu_flags.zf) { f__B503_0B4E_0005_166E(); return; }
	emu_incw(&emu_si);
	emu_cmpws(&emu_si, 0x4);
	if ((emu_flags.sf != emu_flags.of)) { f__B503_0B03_0005_11DE(); return; }
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
 * Decompiled function f__B503_0B5D_000B_D7FD()
 *
 * @name f__B503_0B5D_000B_D7FD
 * @implements B503:0B5D:000B:D7FD ()
 *
 * Called From: B503:0B01:000E:601E
 */
void f__B503_0B5D_000B_D7FD()
{
	emu_cmpws(&emu_si, 0x4);
	if ((emu_flags.sf != emu_flags.of)) { f__B503_0B03_0005_11DE(); return; }
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
 * Decompiled function f__B503_0B68_000D_8ADA()
 *
 * @name f__B503_0B68_000D_8ADA
 * @implements B503:0B68:000D:8ADA ()
 *
 * Called From: B503:0442:0009:5C22
 */
void f__B503_0B68_000D_8ADA()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x4);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_si, 0x1);
	f__B503_0BA5_001A_111A(); return;
}

/**
 * Decompiled function f__B503_0BA5_001A_111A()
 *
 * @name f__B503_0BA5_001A_111A
 * @implements B503:0BA5:001A:111A ()
 *
 * Called From: B503:0B73:000D:8ADA
 */
void f__B503_0BA5_001A_111A()
{
	emu_cmpw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0x6));
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { emu_ip = 0x0B75; emu_last_cs = 0xB503; emu_last_ip = 0x0BA8; emu_last_length = 0x001A; emu_last_crc = 0x111A; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00, -0x7E2C));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00, -0x7E2E));
	emu_addws(&emu_dx.x, 0x2);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_dx.x);
	emu_movw(&emu_di, 0x1);
	f__B503_0BDF_000F_7F8C(); return;
}

/**
 * Decompiled function f__B503_0BBF_0018_CB6A()
 *
 * @name f__B503_0BBF_0018_CB6A
 * @implements B503:0BBF:0018:CB6A ()
 *
 * Called From: B503:0BE6:000F:7F8C
 * Called From: B503:0BE6:0014:763F
 */
void f__B503_0BBF_0018_CB6A()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x0), 0xFF);
	if (emu_flags.zf) { f__B503_0BDA_0014_763F(); return; }
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_di);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_push(emu_cs);
	emu_push(0x0BD7); emu_ip = 0x0DFF; emu_last_cs = 0xB503; emu_last_ip = 0x0BD4; emu_last_length = 0x0018; emu_last_crc = 0xCB6A; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__B503_0BDA_0014_763F()
 *
 * @name f__B503_0BDA_0014_763F
 * @implements B503:0BDA:0014:763F ()
 *
 * Called From: B503:0BC6:0018:CB6A
 */
void f__B503_0BDA_0014_763F()
{
	emu_addws(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x2);
	emu_incw(&emu_di);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x7E2E));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx.x,  0x0), emu_di);
	if (!(emu_flags.sf != emu_flags.of)) { f__B503_0BBF_0018_CB6A(); return; }
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
 * Decompiled function f__B503_0BDF_000F_7F8C()
 *
 * @name f__B503_0BDF_000F_7F8C
 * @implements B503:0BDF:000F:7F8C ()
 *
 * Called From: B503:0BBD:001A:111A
 */
void f__B503_0BDF_000F_7F8C()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x7E2E));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx.x,  0x0), emu_di);
	if (!(emu_flags.sf != emu_flags.of)) { f__B503_0BBF_0018_CB6A(); return; }
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
 * Decompiled function f__B503_0CB3_001A_B050()
 *
 * @name f__B503_0CB3_001A_B050
 * @implements B503:0CB3:001A:B050 ()
 *
 * Called From: B503:04CA:0013:490D
 */
void f__B503_0CB3_001A_B050()
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
	emu_push(emu_cs); emu_push(0x0CCD); emu_cs = 0x01F7; f__01F7_378D_0020_4A95();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { ovl__3503(0xFF); }
	f__B503_0CCD_0008_ED8A();
}

/**
 * Decompiled function f__B503_0CCD_0008_ED8A()
 *
 * @name f__B503_0CCD_0008_ED8A
 * @implements B503:0CCD:0008:ED8A ()
 *
 * Called From: B503:0CCD:001A:B050
 */
void f__B503_0CCD_0008_ED8A()
{
	emu_addws(&emu_sp, 0xA);
	emu_xorw(&emu_si, emu_si);
	f__B503_0DE5_0008_F704(); return;
}

/**
 * Decompiled function f__B503_0CD5_002E_93EA()
 *
 * @name f__B503_0CD5_002E_93EA
 * @implements B503:0CD5:002E:93EA ()
 *
 * Called From: B503:0DEA:0008:F704
 * Called From: B503:0DEA:0009:7B04
 */
void f__B503_0CD5_002E_93EA()
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
	emu_push(emu_cs); emu_push(0x0D03); emu_cs = 0x01F7; f__01F7_39C4_0031_C789();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { ovl__3503(0xFF); }
	f__B503_0D03_002D_031A();
}

/**
 * Decompiled function f__B503_0D03_002D_031A()
 *
 * @name f__B503_0D03_002D_031A
 * @implements B503:0D03:002D:031A ()
 *
 * Called From: B503:0D03:002E:93EA
 */
void f__B503_0D03_002D_031A()
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
	f__B503_0D30_000A_AC73();
}

/**
 * Decompiled function f__B503_0D30_000A_AC73()
 *
 * @name f__B503_0D30_000A_AC73
 * @implements B503:0D30:000A:AC73 ()
 *
 * Called From: B503:0D30:002D:031A
 */
void f__B503_0D30_000A_AC73()
{
	emu_addws(&emu_sp, 0x16);
	emu_orw(&emu_ax.x, emu_dx.x);
	if (!emu_flags.zf) { f__B503_0D3A_0017_D148(); return; }
	f__B503_0DE4_0009_7B04(); return;
}

/**
 * Decompiled function f__B503_0D3A_0017_D148()
 *
 * @name f__B503_0D3A_0017_D148
 * @implements B503:0D3A:0017:D148 ()
 *
 * Called From: B503:0D35:000A:AC73
 */
void f__B503_0D3A_0017_D148()
{
	emu_movw(&emu_ax.x, emu_bp - 0x7F);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x16), emu_ss);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x18), emu_ax.x);
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x18));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x16));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x18));
	emu_push(emu_cs); emu_push(0x0D51); emu_cs = 0x01F7; f__01F7_2252_0045_E30C();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { ovl__3503(0xFF); }
	f__B503_0D51_0024_D7AC();
}

/**
 * Decompiled function f__B503_0D43_000E_9E90()
 *
 * @name f__B503_0D43_000E_9E90
 * @implements B503:0D43:000E:9E90 ()
 *
 * Called From: B503:0DE1:0021:CDFD
 */
void f__B503_0D43_000E_9E90()
{
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x18));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x16));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x18));
	emu_push(emu_cs); emu_push(0x0D51); emu_cs = 0x01F7; f__01F7_2252_0045_E30C();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { ovl__3503(0xFF); }
	f__B503_0D51_0024_D7AC();
}

/**
 * Decompiled function f__B503_0D51_0024_D7AC()
 *
 * @name f__B503_0D51_0024_D7AC
 * @implements B503:0D51:0024:D7AC ()
 *
 * Called From: B503:0D51:0017:D148
 * Called From: B503:0D51:000E:9E90
 */
void f__B503_0D51_0024_D7AC()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_di, emu_ax.x);
	emu_orw(&emu_di, emu_di);
	if (emu_flags.zf) { emu_ip = 0x0DC1; emu_last_cs = 0xB503; emu_last_ip = 0x0D57; emu_last_length = 0x0024; emu_last_crc = 0xD7AC; emu_call(); return; } // Jump does not resolve
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
	emu_push(emu_cs); emu_push(0x0D75); emu_cs = 0x01F7; f__01F7_378D_0020_4A95();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { ovl__3503(0xFF); }
	f__B503_0D75_0029_8382();
}

/**
 * Decompiled function f__B503_0D75_0029_8382()
 *
 * @name f__B503_0D75_0029_8382
 * @implements B503:0D75:0029:8382 ()
 *
 * Called From: B503:0D75:0024:D7AC
 */
void f__B503_0D75_0029_8382()
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
	f__B503_0D9E_0011_DC83();
}

/**
 * Decompiled function f__B503_0D9E_0011_DC83()
 *
 * @name f__B503_0D9E_0011_DC83
 * @implements B503:0D9E:0011:DC83 ()
 *
 * Called From: B503:0D9E:0029:8382
 */
void f__B503_0D9E_0011_DC83()
{
	emu_addws(&emu_sp, 0x16);
	emu_orw(&emu_ax.x, emu_dx.x);
	if (emu_flags.zf) { f__B503_0DB1_000D_1732(); return; }
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x9939);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x0DAF); f__B503_0F0C_0010_1F5F();
	f__B503_0DAF_000F_D708();
}

/**
 * Decompiled function f__B503_0DAF_000F_D708()
 *
 * @name f__B503_0DAF_000F_D708
 * @implements B503:0DAF:000F:D708 ()
 *
 * Called From: B503:0DAF:0011:DC83
 */
void f__B503_0DAF_000F_D708()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_push(emu_di);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x1A));
	emu_push(emu_cs);
	emu_push(0x0DBE); f__B503_0DFF_0012_266D();
	f__B503_0DBE_0005_1FBA();
}

/**
 * Decompiled function f__B503_0DB1_000D_1732()
 *
 * @name f__B503_0DB1_000D_1732
 * @implements B503:0DB1:000D:1732 ()
 *
 * Called From: B503:0DA3:0011:DC83
 */
void f__B503_0DB1_000D_1732()
{
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_push(emu_di);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x1A));
	emu_push(emu_cs);
	emu_push(0x0DBE); f__B503_0DFF_0012_266D();
	f__B503_0DBE_0005_1FBA();
}

/**
 * Decompiled function f__B503_0DBE_0005_1FBA()
 *
 * @name f__B503_0DBE_0005_1FBA
 * @implements B503:0DBE:0005:1FBA ()
 *
 * Called From: B503:0DBE:000F:D708
 * Called From: B503:0DBE:000D:1732
 */
void f__B503_0DBE_0005_1FBA()
{
	emu_addws(&emu_sp, 0x6);
	f__B503_0DC6_001E_CC31(); return;
}

/**
 * Decompiled function f__B503_0DC3_0021_CDFD()
 *
 * @name f__B503_0DC3_0021_CDFD
 * @implements B503:0DC3:0021:CDFD ()
 *
 * Called From: B503:0DD6:001E:CC31
 * Called From: B503:0DD6:0021:CDFD
 */
void f__B503_0DC3_0021_CDFD()
{
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x18));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x18));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0x0);
	if (emu_flags.zf) { f__B503_0DD8_000C_C1D7(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x18));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0x2C);
	if (!emu_flags.zf) { f__B503_0DC3_0021_CDFD(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x18));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0x2C);
	if (!emu_flags.zf) { emu_ip = 0x0DE4; emu_last_cs = 0xB503; emu_last_ip = 0x0DDF; emu_last_length = 0x0021; emu_last_crc = 0xCDFD; emu_call(); return; } // Jump does not resolve
	f__B503_0D43_000E_9E90(); return;
}

/**
 * Decompiled function f__B503_0DC6_001E_CC31()
 *
 * @name f__B503_0DC6_001E_CC31
 * @implements B503:0DC6:001E:CC31 ()
 *
 * Called From: B503:0DC1:0005:1FBA
 */
void f__B503_0DC6_001E_CC31()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x18));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0x0);
	if (emu_flags.zf) { emu_ip = 0x0DD8; emu_last_cs = 0xB503; emu_last_ip = 0x0DCD; emu_last_length = 0x001E; emu_last_crc = 0xCC31; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x18));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0x2C);
	if (!emu_flags.zf) { f__B503_0DC3_0021_CDFD(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x18));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0x2C);
	if (!emu_flags.zf) { emu_ip = 0x0DE4; emu_last_cs = 0xB503; emu_last_ip = 0x0DDF; emu_last_length = 0x001E; emu_last_crc = 0xCC31; emu_call(); return; } // Jump does not resolve
	emu_ip = 0x0D43; emu_last_cs = 0xB503; emu_last_ip = 0x0DE1; emu_last_length = 0x001E; emu_last_crc = 0xCC31; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B503_0DD8_000C_C1D7()
 *
 * @name f__B503_0DD8_000C_C1D7
 * @implements B503:0DD8:000C:C1D7 ()
 *
 * Called From: B503:0DCD:0021:CDFD
 */
void f__B503_0DD8_000C_C1D7()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x18));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0x2C);
	if (!emu_flags.zf) { f__B503_0DE4_0009_7B04(); return; }
	emu_ip = 0x0D43; emu_last_cs = 0xB503; emu_last_ip = 0x0DE1; emu_last_length = 0x000C; emu_last_crc = 0xC1D7; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B503_0DE4_0009_7B04()
 *
 * @name f__B503_0DE4_0009_7B04
 * @implements B503:0DE4:0009:7B04 ()
 *
 * Called From: B503:0D37:000A:AC73
 * Called From: B503:0DDF:000C:C1D7
 */
void f__B503_0DE4_0009_7B04()
{
	emu_incw(&emu_si);
	emu_cmpws(&emu_si, 0x6);
	if (!(emu_flags.sf != emu_flags.of)) { f__B503_0DED_000A_0177(); return; }
	f__B503_0CD5_002E_93EA(); return;
}

/**
 * Decompiled function f__B503_0DE5_0008_F704()
 *
 * @name f__B503_0DE5_0008_F704
 * @implements B503:0DE5:0008:F704 ()
 *
 * Called From: B503:0CD2:0008:ED8A
 */
void f__B503_0DE5_0008_F704()
{
	emu_cmpws(&emu_si, 0x6);
	if (!(emu_flags.sf != emu_flags.of)) { emu_ip = 0x0DED; emu_last_cs = 0xB503; emu_last_ip = 0x0DE8; emu_last_length = 0x0008; emu_last_crc = 0xF704; emu_call(); return; } // Jump does not resolve
	f__B503_0CD5_002E_93EA(); return;
}

/**
 * Decompiled function f__B503_0DED_000A_0177()
 *
 * @name f__B503_0DED_000A_0177
 * @implements B503:0DED:000A:0177 ()
 *
 * Called From: B503:0DE8:0009:7B04
 */
void f__B503_0DED_000A_0177()
{
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x2B1D);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x0DF7); f__B503_0F0C_0010_1F5F();
	f__B503_0DF7_0008_66FA();
}

/**
 * Decompiled function f__B503_0DF7_0008_66FA()
 *
 * @name f__B503_0DF7_0008_66FA
 * @implements B503:0DF7:0008:66FA ()
 *
 * Called From: B503:0DF7:000A:0177
 */
void f__B503_0DF7_0008_66FA()
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
 * Decompiled function f__B503_0DFF_0012_266D()
 *
 * @name f__B503_0DFF_0012_266D
 * @implements B503:0DFF:0012:266D ()
 *
 * Called From: B503:0DBB:000F:D708
 * Called From: B503:0DBB:000D:1732
 */
void f__B503_0DFF_0012_266D()
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
	f__B503_0E11_0011_873A();
}

/**
 * Decompiled function f__B503_0E11_0011_873A()
 *
 * @name f__B503_0E11_0011_873A
 * @implements B503:0E11:0011:873A ()
 *
 * Called From: 261F:01B9:001B:DA28
 * Called From: B503:0E11:0012:266D
 */
void f__B503_0E11_0011_873A()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_si);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x2B46);
	emu_push(emu_ax.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0x4);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0E22); emu_cs = 0x01F7; f__01F7_378D_0020_4A95();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { ovl__3503(0xFF); }
	f__B503_0E22_0029_1502();
}

/**
 * Decompiled function f__B503_0E22_0029_1502()
 *
 * @name f__B503_0E22_0029_1502
 * @implements B503:0E22:0029:1502 ()
 *
 * Called From: B503:0E22:0011:873A
 */
void f__B503_0E22_0029_1502()
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
	f__B503_0E4B_001C_137E();
}

/**
 * Decompiled function f__B503_0E4B_001C_137E()
 *
 * @name f__B503_0E4B_001C_137E
 * @implements B503:0E4B:001C:137E ()
 *
 * Called From: B503:0E4B:0029:1502
 */
void f__B503_0E4B_001C_137E()
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
	emu_push(emu_cs); emu_push(0x0E67); emu_cs = 0x01F7; f__01F7_3803_001E_4ADA();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { ovl__3503(0xFF); }
	f__B503_0E67_0011_A839();
}

/**
 * Decompiled function f__B503_0E67_0011_A839()
 *
 * @name f__B503_0E67_0011_A839
 * @implements B503:0E67:0011:A839 ()
 *
 * Called From: B503:0E67:001C:137E
 */
void f__B503_0E67_0011_A839()
{
	emu_addws(&emu_sp, 0x10);
	emu_push(emu_si);
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x7E1C));
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x7E1E));
	emu_push(emu_cs); emu_push(0x0E78); emu_cs = 0x2903; f__2903_007A_0032_6B6A();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { ovl__3503(0xFF); }
	f__B503_0E78_0039_7A89();
}

/**
 * Decompiled function f__B503_0E78_0039_7A89()
 *
 * @name f__B503_0E78_0039_7A89
 * @implements B503:0E78:0039:7A89 ()
 *
 * Called From: B503:0E78:0011:A839
 */
void f__B503_0E78_0039_7A89()
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
	emu_push(emu_cs); emu_push(0x0EB1); emu_cs = 0x2903; f__2903_0158_001A_A9AA();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { ovl__3503(0xFF); }
	f__B503_0EB1_0011_B94C();
}

/**
 * Decompiled function f__B503_0EB1_0011_B94C()
 *
 * @name f__B503_0EB1_0011_B94C
 * @implements B503:0EB1:0011:B94C ()
 *
 * Called From: B503:0EB1:0039:7A89
 */
void f__B503_0EB1_0011_B94C()
{
	emu_addws(&emu_sp, 0x14);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0xA), 0x0);
	if (emu_flags.zf) { emu_ip = 0x0F07; emu_last_cs = 0xB503; emu_last_ip = 0x0EB8; emu_last_length = 0x0011; emu_last_crc = 0xB94C; emu_call(); return; } // Jump does not resolve
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x0EC2); f__B503_13C2_0008_3F32();
	f__B503_0EC2_0008_701A();
}

/**
 * Decompiled function f__B503_0EC2_0008_701A()
 *
 * @name f__B503_0EC2_0008_701A
 * @implements B503:0EC2:0008:701A ()
 *
 * Called From: B503:0EC2:0011:B94C
 */
void f__B503_0EC2_0008_701A()
{
	emu_orw(&emu_ax.x, emu_ax.x);
	if (emu_flags.zf) { f__B503_0ECA_0016_8E92(); return; }
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_ip = 0x0ECD; emu_last_cs = 0xB503; emu_last_ip = 0x0EC8; emu_last_length = 0x0008; emu_last_crc = 0x701A; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B503_0ECA_0016_8E92()
 *
 * @name f__B503_0ECA_0016_8E92
 * @implements B503:0ECA:0016:8E92 ()
 *
 * Called From: B503:0EC4:0008:701A
 */
void f__B503_0ECA_0016_8E92()
{
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_cs); emu_push(0x0EE0); emu_cs = 0x260F; f__260F_0054_0016_11EB();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { ovl__3503(0xFF); }
	f__B503_0EE0_000E_458F();
}

/**
 * Decompiled function f__B503_0EE0_000E_458F()
 *
 * @name f__B503_0EE0_000E_458F
 * @implements B503:0EE0:000E:458F ()
 *
 * Called From: B503:0EE0:0016:8E92
 */
void f__B503_0EE0_000E_458F()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_cs); emu_push(0x0EEE); emu_cs = 0x260F; f__260F_003A_0014_CDCF();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { ovl__3503(0xFF); }
	f__B503_0EEE_0016_71D2();
}

/**
 * Decompiled function f__B503_0EEE_0016_71D2()
 *
 * @name f__B503_0EEE_0016_71D2
 * @implements B503:0EEE:0016:71D2 ()
 *
 * Called From: B503:0EEE:000E:458F
 */
void f__B503_0EEE_0016_71D2()
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
	f__B503_0F04_0008_E1BA();
}

/**
 * Decompiled function f__B503_0F04_0008_E1BA()
 *
 * @name f__B503_0F04_0008_E1BA
 * @implements B503:0F04:0008:E1BA ()
 *
 * Called From: B503:0F04:0016:71D2
 */
void f__B503_0F04_0008_E1BA()
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
 * Decompiled function f__B503_0F0C_0010_1F5F()
 *
 * @name f__B503_0F0C_0010_1F5F
 * @implements B503:0F0C:0010:1F5F ()
 *
 * Called From: B503:02E7:0008:7130
 * Called From: B503:0385:0008:73A6
 * Called From: B503:03EB:0008:71CE
 * Called From: B503:04EA:0008:71C8
 * Called From: B503:084E:000C:5BC6
 * Called From: B503:0DAC:0011:DC83
 * Called From: B503:0DF4:000A:0177
 */
void f__B503_0F0C_0010_1F5F()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x2);
	emu_push(emu_si);
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0F1C); emu_cs = 0x2598; f__2598_0000_0017_D681();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { ovl__3503(0xFF); }
	f__B503_0F1C_0028_B4A9();
}

/**
 * Decompiled function f__B503_0F1C_0028_B4A9()
 *
 * @name f__B503_0F1C_0028_B4A9
 * @implements B503:0F1C:0028:B4A9 ()
 *
 * Called From: B503:0F1C:0010:1F5F
 */
void f__B503_0F1C_0028_B4A9()
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
	emu_push(emu_cs); emu_push(0x0F44); emu_cs = 0x24D0; f__24D0_000D_0039_9224();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { ovl__3503(0xFF); }
	f__B503_0F44_0015_4986();
}

/**
 * Decompiled function f__B503_0F44_0015_4986()
 *
 * @name f__B503_0F44_0015_4986
 * @implements B503:0F44:0015:4986 ()
 *
 * Called From: B503:0F44:0028:B4A9
 */
void f__B503_0F44_0015_4986()
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
		case 0x22A60E34: f__22A6_0E34_002B_D20B(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0xB503; emu_last_ip = 0x0F54; emu_last_length = 0x0015; emu_last_crc = 0x4986;
			emu_call();
			return;
	}
	f__B503_0F59_001D_EC75();
}

/**
 * Decompiled function f__B503_0F59_001D_EC75()
 *
 * @name f__B503_0F59_001D_EC75
 * @implements B503:0F59:001D:EC75 ()
 *
 * Called From: B503:0F59:0015:4986
 */
void f__B503_0F59_001D_EC75()
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
		case 0x22A60D31: f__22A6_0D31_0015_D6F0(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0xB503; emu_last_ip = 0x0F71; emu_last_length = 0x001D; emu_last_crc = 0xEC75;
			emu_call();
			return;
	}
	f__B503_0F76_0021_6A1B();
}

/**
 * Decompiled function f__B503_0F76_0021_6A1B()
 *
 * @name f__B503_0F76_0021_6A1B
 * @implements B503:0F76:0021:6A1B ()
 *
 * Called From: B503:0F76:001D:EC75
 */
void f__B503_0F76_0021_6A1B()
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
	emu_push(emu_cs); emu_push(0x0F97); emu_cs = 0x10E4; f__10E4_1EF1_0040_E33D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { ovl__3503(0xFF); }
	f__B503_0F97_0005_1FFC();
}

/**
 * Decompiled function f__B503_0F97_0005_1FFC()
 *
 * @name f__B503_0F97_0005_1FFC
 * @implements B503:0F97:0005:1FFC ()
 *
 * Called From: B503:0F97:0021:6A1B
 */
void f__B503_0F97_0005_1FFC()
{
	emu_addws(&emu_sp, 0xE);
	f__B503_0F9C_0020_F972(); return;
}

/**
 * Decompiled function f__B503_0F9C_0020_F972()
 *
 * @name f__B503_0F9C_0020_F972
 * @implements B503:0F9C:0020:F972 ()
 *
 * Called From: B503:0F9A:0005:1FFC
 */
void f__B503_0F9C_0020_F972()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76AE));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76AC));
	emu_addws(&emu_dx.x, 0x5A);
	emu_adcw(&emu_ax.x, 0x0);
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x2B0E));
	if (emu_flags.cf) { emu_ip = 0x0F9C; emu_last_cs = 0xB503; emu_last_ip = 0x0FAD; emu_last_length = 0x0020; emu_last_crc = 0xF972; emu_call(); return; } // Jump does not resolve
	if (!emu_flags.zf) { f__B503_0FB7_0005_1F76(); return; }
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x2B0C));
	if (emu_flags.cf) { emu_ip = 0x0F9C; emu_last_cs = 0xB503; emu_last_ip = 0x0FB5; emu_last_length = 0x0020; emu_last_crc = 0xF972; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_si, 0xB9);
	f__B503_1001_0022_42A3(); return;
}

/**
 * Decompiled function f__B503_0FB7_0005_1F76()
 *
 * @name f__B503_0FB7_0005_1F76
 * @implements B503:0FB7:0005:1F76 ()
 *
 * Called From: B503:0FAF:0020:F972
 */
void f__B503_0FB7_0005_1F76()
{
	emu_movw(&emu_si, 0xB9);
	f__B503_1001_0022_42A3(); return;
}

/**
 * Decompiled function f__B503_0FBC_0021_9C17()
 *
 * @name f__B503_0FBC_0021_9C17
 * @implements B503:0FBC:0021:9C17 ()
 *
 * Called From: B503:1005:0022:42A3
 * Called From: B503:1005:0023:40D3
 */
void f__B503_0FBC_0021_9C17()
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
	emu_push(emu_cs); emu_push(0x0FDD); emu_cs = 0x24D0; f__24D0_000D_0039_9224();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { ovl__3503(0xFF); }
	f__B503_0FDD_0011_35AF();
}

/**
 * Decompiled function f__B503_0FDD_0011_35AF()
 *
 * @name f__B503_0FDD_0011_35AF
 * @implements B503:0FDD:0011:35AF ()
 *
 * Called From: B503:0FDD:0021:9C17
 */
void f__B503_0FDD_0011_35AF()
{
	emu_addws(&emu_sp, 0x10);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x76B6), 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x76B4), 0x3);
	f__B503_0FEE_000E_D4C6(); return;
}

/**
 * Decompiled function f__B503_0FEE_000E_D4C6()
 *
 * @name f__B503_0FEE_000E_D4C6
 * @implements B503:0FEE:000E:D4C6 ()
 *
 * Called From: B503:0FEC:0011:35AF
 * Called From: B503:0FFE:0027:7533
 */
void f__B503_0FEE_000E_D4C6()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76B4));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76B6));
	if (emu_flags.zf) { f__B503_1000_0023_40D3(); return; }
	emu_push(emu_cs);
	emu_push(0x0FFC); f__B503_13C2_0008_3F32();
	f__B503_0FFC_0027_7533();
}

/**
 * Decompiled function f__B503_0FFC_0027_7533()
 *
 * @name f__B503_0FFC_0027_7533
 * @implements B503:0FFC:0027:7533 ()
 *
 * Called From: B503:0FFC:000E:D4C6
 */
void f__B503_0FFC_0027_7533()
{
	emu_orw(&emu_ax.x, emu_ax.x);
	if (emu_flags.zf) { f__B503_0FEE_000E_D4C6(); return; }
	emu_decw(&emu_si);
	emu_cmpw(&emu_si, 0xAC);
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { emu_ip = 0x0FBC; emu_last_cs = 0xB503; emu_last_ip = 0x1005; emu_last_length = 0x0027; emu_last_crc = 0x7533; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76AE));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76AC));
	emu_addws(&emu_dx.x, 0x5A);
	emu_adcw(&emu_ax.x, 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x2B0E), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x2B0C), emu_dx.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_cs); emu_push(0x1023); emu_cs = 0x2598; emu_ip = 0x1023; emu_last_cs = 0xB503; emu_last_ip = 0x101E; emu_last_length = 0x0027; emu_last_crc = 0x7533; emu_call(); // Jump does not resolve
	f__B503_1023_0006_12FA();
}

/**
 * Decompiled function f__B503_1000_0023_40D3()
 *
 * @name f__B503_1000_0023_40D3
 * @implements B503:1000:0023:40D3 ()
 *
 * Called From: B503:0FF5:000E:D4C6
 */
void f__B503_1000_0023_40D3()
{
	emu_decw(&emu_si);
	emu_cmpw(&emu_si, 0xAC);
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__B503_0FBC_0021_9C17(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76AE));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76AC));
	emu_addws(&emu_dx.x, 0x5A);
	emu_adcw(&emu_ax.x, 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x2B0E), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x2B0C), emu_dx.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_cs); emu_push(0x1023); emu_cs = 0x2598; f__2598_0000_0017_D681();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { ovl__3503(0xFF); }
	f__B503_1023_0006_12FA();
}

/**
 * Decompiled function f__B503_1001_0022_42A3()
 *
 * @name f__B503_1001_0022_42A3
 * @implements B503:1001:0022:42A3 ()
 *
 * Called From: B503:0FBA:0005:1F76
 * Called From: B503:0FBA:0020:F972
 */
void f__B503_1001_0022_42A3()
{
	emu_cmpw(&emu_si, 0xAC);
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__B503_0FBC_0021_9C17(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76AE));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76AC));
	emu_addws(&emu_dx.x, 0x5A);
	emu_adcw(&emu_ax.x, 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x2B0E), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x2B0C), emu_dx.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_cs); emu_push(0x1023); emu_cs = 0x2598; emu_ip = 0x1023; emu_last_cs = 0xB503; emu_last_ip = 0x101E; emu_last_length = 0x0022; emu_last_crc = 0x42A3; emu_call(); // Jump does not resolve
	f__B503_1023_0006_12FA();
}

/**
 * Decompiled function f__B503_1023_0006_12FA()
 *
 * @name f__B503_1023_0006_12FA
 * @implements B503:1023:0006:12FA ()
 *
 * Called From: B503:1023:0023:40D3
 */
void f__B503_1023_0006_12FA()
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
 * Decompiled function f__B503_1029_000F_C2B9()
 *
 * @name f__B503_1029_000F_C2B9
 * @implements B503:1029:000F:C2B9 ()
 *
 * Called From: B503:0324:0011:967B
 */
void f__B503_1029_000F_C2B9()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x8);
	emu_movw(&emu_ax.x, 0x5);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x1038); emu_cs = 0x252E; f__252E_0001_0018_48C0();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { ovl__3503(0xFF); }
	f__B503_1038_0026_4AD0();
}

/**
 * Decompiled function f__B503_1038_0026_4AD0()
 *
 * @name f__B503_1038_0026_4AD0
 * @implements B503:1038:0026:4AD0 ()
 *
 * Called From: B503:1038:000F:C2B9
 */
void f__B503_1038_0026_4AD0()
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
	emu_push(emu_cs); emu_push(0x105E); emu_cs = 0x253D; f__253D_00FA_0010_5316();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { ovl__3503(0xFF); }
	f__B503_105E_000E_B291();
}

/**
 * Decompiled function f__B503_105E_000E_B291()
 *
 * @name f__B503_105E_000E_B291
 * @implements B503:105E:000E:B291 ()
 *
 * Called From: B503:105E:0026:4AD0
 */
void f__B503_105E_000E_B291()
{
	emu_addws(&emu_sp, 0xC);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs);
	emu_push(0x106C); f__B503_116F_001B_C6F2();
	f__B503_106C_0017_B665();
}

/**
 * Decompiled function f__B503_106C_0017_B665()
 *
 * @name f__B503_106C_0017_B665
 * @implements B503:106C:0017:B665 ()
 *
 * Called From: B503:106C:000E:B291
 */
void f__B503_106C_0017_B665()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x1083); emu_cs = 0x2B0E; f__2B0E_00D0_0022_D0C8();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { ovl__3503(0xFF); }
	f__B503_1083_001F_FF9E();
}

/**
 * Decompiled function f__B503_1083_001F_FF9E()
 *
 * @name f__B503_1083_001F_FF9E
 * @implements B503:1083:001F:FF9E ()
 *
 * Called From: B503:1083:0017:B665
 */
void f__B503_1083_001F_FF9E()
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
	emu_push(0x10A2); f__B503_11BE_0016_A6CB();
	f__B503_10A2_0018_6FA5();
}

/**
 * Decompiled function f__B503_10A2_0018_6FA5()
 *
 * @name f__B503_10A2_0018_6FA5
 * @implements B503:10A2:0018:6FA5 ()
 *
 * Called From: B503:10A2:001F:FF9E
 */
void f__B503_10A2_0018_6FA5()
{
	emu_addws(&emu_sp, 0x8);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x10BA); emu_cs = 0x2B0E; f__2B0E_00D0_0022_D0C8();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { ovl__3503(0xFF); }
	f__B503_10BA_001F_0908();
}

/**
 * Decompiled function f__B503_10BA_001F_0908()
 *
 * @name f__B503_10BA_001F_0908
 * @implements B503:10BA:001F:0908 ()
 *
 * Called From: B503:10BA:0018:6FA5
 */
void f__B503_10BA_001F_0908()
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
	emu_push(0x10D9); f__B503_11BE_0016_A6CB();
	f__B503_10D9_0018_6FA5();
}

/**
 * Decompiled function f__B503_10D9_0018_6FA5()
 *
 * @name f__B503_10D9_0018_6FA5
 * @implements B503:10D9:0018:6FA5 ()
 *
 * Called From: B503:10D9:001F:0908
 */
void f__B503_10D9_0018_6FA5()
{
	emu_addws(&emu_sp, 0x8);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x10F1); emu_cs = 0x2B0E; f__2B0E_00D0_0022_D0C8();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { ovl__3503(0xFF); }
	f__B503_10F1_0031_6DD1();
}

/**
 * Decompiled function f__B503_10F1_0031_6DD1()
 *
 * @name f__B503_10F1_0031_6DD1
 * @implements B503:10F1:0031:6DD1 ()
 *
 * Called From: B503:10F1:0018:6FA5
 */
void f__B503_10F1_0031_6DD1()
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
	emu_push(emu_cs); emu_push(0x1122); emu_cs = 0x01F7; f__01F7_378D_0020_4A95();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { ovl__3503(0xFF); }
	f__B503_1122_0013_99FD();
}

/**
 * Decompiled function f__B503_1122_0013_99FD()
 *
 * @name f__B503_1122_0013_99FD
 * @implements B503:1122:0013:99FD ()
 *
 * Called From: B503:1122:0031:6DD1
 */
void f__B503_1122_0013_99FD()
{
	emu_addws(&emu_sp, 0xA);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x9939);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x1135); f__B503_11BE_0016_A6CB();
	f__B503_1135_0018_6FA5();
}

/**
 * Decompiled function f__B503_1135_0018_6FA5()
 *
 * @name f__B503_1135_0018_6FA5
 * @implements B503:1135:0018:6FA5 ()
 *
 * Called From: B503:1135:0013:99FD
 */
void f__B503_1135_0018_6FA5()
{
	emu_addws(&emu_sp, 0x8);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x114D); emu_cs = 0x2B0E; f__2B0E_00D0_0022_D0C8();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { ovl__3503(0xFF); }
	f__B503_114D_0014_0BBE();
}

/**
 * Decompiled function f__B503_114D_0014_0BBE()
 *
 * @name f__B503_114D_0014_0BBE
 * @implements B503:114D:0014:0BBE ()
 *
 * Called From: B503:114D:0018:6FA5
 */
void f__B503_114D_0014_0BBE()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x7E2C), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x7E2E), emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x1161); f__B503_122D_002D_C81A();
	f__B503_1161_000E_AD5F();
}

/**
 * Decompiled function f__B503_1161_000E_AD5F()
 *
 * @name f__B503_1161_000E_AD5F
 * @implements B503:1161:000E:AD5F ()
 *
 * Called From: B503:1161:0014:0BBE
 */
void f__B503_1161_000E_AD5F()
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
 * Decompiled function f__B503_116F_001B_C6F2()
 *
 * @name f__B503_116F_001B_C6F2
 * @implements B503:116F:001B:C6F2 ()
 *
 * Called From: B503:1069:000E:B291
 */
void f__B503_116F_001B_C6F2()
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
	f__B503_11AD_000C_35D2(); return;
}

/**
 * Decompiled function f__B503_118A_0015_3B59()
 *
 * @name f__B503_118A_0015_3B59
 * @implements B503:118A:0015:3B59 ()
 *
 * Called From: B503:11B0:000C:35D2
 * Called From: B503:11B0:001A:6B45
 */
void f__B503_118A_0015_3B59()
{
	emu_movw(&emu_ax.x, 0x130);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x119F); emu_cs = 0x01F7; f__01F7_28B8_0024_D407();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { ovl__3503(0xFF); }
	f__B503_119F_001A_6B45();
}

/**
 * Decompiled function f__B503_119F_001A_6B45()
 *
 * @name f__B503_119F_001A_6B45
 * @implements B503:119F:001A:6B45 ()
 *
 * Called From: B503:119F:0015:3B59
 */
void f__B503_119F_001A_6B45()
{
	emu_addws(&emu_sp, 0xA);
	emu_addw(&emu_get_memory16(emu_ss, emu_bp,  0x6), 0x130);
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x140);
	emu_incw(&emu_si);
	emu_cmpws(&emu_si, 0x78);
	if ((emu_flags.sf != emu_flags.of)) { f__B503_118A_0015_3B59(); return; }
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_movw(&emu_ax.x, 0x8E80);
	f__B503_11B9_0005_04BA(); return;
}

/**
 * Decompiled function f__B503_11AD_000C_35D2()
 *
 * @name f__B503_11AD_000C_35D2
 * @implements B503:11AD:000C:35D2 ()
 *
 * Called From: B503:1188:001B:C6F2
 */
void f__B503_11AD_000C_35D2()
{
	emu_cmpws(&emu_si, 0x78);
	if ((emu_flags.sf != emu_flags.of)) { f__B503_118A_0015_3B59(); return; }
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_movw(&emu_ax.x, 0x8E80);
	emu_ip = 0x11B9; emu_last_cs = 0xB503; emu_last_ip = 0x11B7; emu_last_length = 0x000C; emu_last_crc = 0x35D2; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B503_11B9_0005_04BA()
 *
 * @name f__B503_11B9_0005_04BA
 * @implements B503:11B9:0005:04BA ()
 *
 * Called From: B503:11B7:001A:6B45
 */
void f__B503_11B9_0005_04BA()
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
 * Decompiled function f__B503_11BE_0016_A6CB()
 *
 * @name f__B503_11BE_0016_A6CB
 * @implements B503:11BE:0016:A6CB ()
 *
 * Called From: B503:109F:001F:FF9E
 * Called From: B503:10D6:001F:0908
 * Called From: B503:1132:0013:99FD
 */
void f__B503_11BE_0016_A6CB()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x4);
	emu_push(emu_si);
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x11D4); emu_cs = 0x1FB5; f__1FB5_01FA_0010_D47C();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { ovl__3503(0xFF); }
	f__B503_11D4_0015_3AA1();
}

/**
 * Decompiled function f__B503_11D4_0015_3AA1()
 *
 * @name f__B503_11D4_0015_3AA1
 * @implements B503:11D4:0015:3AA1 ()
 *
 * Called From: B503:11D4:0016:A6CB
 */
void f__B503_11D4_0015_3AA1()
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
	emu_push(emu_cs); emu_push(0x11E9); emu_cs = 0x1FB5; f__1FB5_1207_001B_7505();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { ovl__3503(0xFF); }
	f__B503_11E9_0018_5709();
}

/**
 * Decompiled function f__B503_11E9_0018_5709()
 *
 * @name f__B503_11E9_0018_5709
 * @implements B503:11E9:0018:5709 ()
 *
 * Called From: B503:11E9:0015:3AA1
 */
void f__B503_11E9_0018_5709()
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
	emu_push(emu_cs); emu_push(0x1201); emu_cs = 0x1FB5; f__1FB5_1207_001B_7505();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { ovl__3503(0xFF); }
	f__B503_1201_0015_6844();
}

/**
 * Decompiled function f__B503_1201_0015_6844()
 *
 * @name f__B503_1201_0015_6844
 * @implements B503:1201:0015:6844 ()
 *
 * Called From: B503:1201:0018:5709
 */
void f__B503_1201_0015_6844()
{
	emu_addws(&emu_sp, 0x8);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x1216); emu_cs = 0x1FB5; f__1FB5_0AEC_001B_7557();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { ovl__3503(0xFF); }
	f__B503_1216_0009_CF13();
}

/**
 * Decompiled function f__B503_1216_0009_CF13()
 *
 * @name f__B503_1216_0009_CF13
 * @implements B503:1216:0009:CF13 ()
 *
 * Called From: B503:1216:0015:6844
 */
void f__B503_1216_0009_CF13()
{
	emu_addws(&emu_sp, 0xA);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x121F); emu_cs = 0x1FB5; f__1FB5_09C7_0018_F3A8();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { ovl__3503(0xFF); }
	f__B503_121F_0009_3CCC();
}

/**
 * Decompiled function f__B503_121F_0009_3CCC()
 *
 * @name f__B503_121F_0009_3CCC
 * @implements B503:121F:0009:3CCC ()
 *
 * Called From: B503:121F:0009:CF13
 */
void f__B503_121F_0009_3CCC()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	f__B503_1228_0005_04BA(); return;
}

/**
 * Decompiled function f__B503_1228_0005_04BA()
 *
 * @name f__B503_1228_0005_04BA
 * @implements B503:1228:0005:04BA ()
 *
 * Called From: B503:1226:0009:3CCC
 */
void f__B503_1228_0005_04BA()
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
 * Decompiled function f__B503_122D_002D_C81A()
 *
 * @name f__B503_122D_002D_C81A
 * @implements B503:122D:002D:C81A ()
 *
 * Called From: B503:115E:0014:0BBE
 */
void f__B503_122D_002D_C81A()
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
	f__B503_125A_0017_FF3A();
}

/**
 * Decompiled function f__B503_125A_0017_FF3A()
 *
 * @name f__B503_125A_0017_FF3A
 * @implements B503:125A:0017:FF3A ()
 *
 * Called From: B503:125A:002D:C81A
 */
void f__B503_125A_0017_FF3A()
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
	emu_push(emu_cs); emu_push(0x1271); emu_cs = 0x01F7; f__01F7_3803_001E_4ADA();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { ovl__3503(0xFF); }
	f__B503_1271_001E_0440();
}

/**
 * Decompiled function f__B503_1271_001E_0440()
 *
 * @name f__B503_1271_001E_0440
 * @implements B503:1271:001E:0440 ()
 *
 * Called From: B503:1271:0017:FF3A
 */
void f__B503_1271_001E_0440()
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
	f__B503_129C_000B_D34D(); return;
}

/**
 * Decompiled function f__B503_128F_0018_8079()
 *
 * @name f__B503_128F_0018_8079
 * @implements B503:128F:0018:8079 ()
 *
 * Called From: B503:129F:000B:D34D
 * Called From: B503:129F:0018:8079
 */
void f__B503_128F_0018_8079()
{
	emu_addws(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x2);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x0), 0xFFFF);
	emu_incw(&emu_si);
	emu_cmpw(&emu_si, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if ((emu_flags.sf != emu_flags.of)) { f__B503_128F_0018_8079(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_incw(&emu_ax.x);
	f__B503_12A7_0005_04BA(); return;
}

/**
 * Decompiled function f__B503_129C_000B_D34D()
 *
 * @name f__B503_129C_000B_D34D
 * @implements B503:129C:000B:D34D ()
 *
 * Called From: B503:128D:001E:0440
 */
void f__B503_129C_000B_D34D()
{
	emu_cmpw(&emu_si, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if ((emu_flags.sf != emu_flags.of)) { f__B503_128F_0018_8079(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_incw(&emu_ax.x);
	emu_ip = 0x12A7; emu_last_cs = 0xB503; emu_last_ip = 0x12A5; emu_last_length = 0x000B; emu_last_crc = 0xD34D; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B503_12A7_0005_04BA()
 *
 * @name f__B503_12A7_0005_04BA
 * @implements B503:12A7:0005:04BA ()
 *
 * Called From: B503:12A5:0018:8079
 */
void f__B503_12A7_0005_04BA()
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
 * Decompiled function f__B503_12AC_0013_3170()
 *
 * @name f__B503_12AC_0013_3170
 * @implements B503:12AC:0013:3170 ()
 *
 * Called From: B503:0842:0010:8B6B
 */
void f__B503_12AC_0013_3170()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x4);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_movw(&emu_ax.x, 0x1);
	emu_movb(&emu_cx.l, emu_get_memory8(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x12BF); emu_cs = 0x01F7; f__01F7_058E_0015_66E9();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { ovl__3503(0xFF); }
	f__B503_12BF_001B_B426();
}

/**
 * Decompiled function f__B503_12BF_001B_B426()
 *
 * @name f__B503_12BF_001B_B426
 * @implements B503:12BF:001B:B426 ()
 *
 * Called From: B503:12BF:0013:3170
 */
void f__B503_12BF_001B_B426()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0x8), 0x0);
	if (emu_flags.zf) { emu_ip = 0x12DA; emu_last_cs = 0xB503; emu_last_ip = 0x12C9; emu_last_length = 0x001B; emu_last_crc = 0xB426; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x2AF6));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x2AF4));
	emu_orw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	f__B503_12F7_000B_213C(); return;
}

/**
 * Decompiled function f__B503_12F7_000B_213C()
 *
 * @name f__B503_12F7_000B_213C
 * @implements B503:12F7:000B:213C ()
 *
 * Called From: B503:12D8:001B:B426
 */
void f__B503_12F7_000B_213C()
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
 * Decompiled function f__B503_1302_0013_3170()
 *
 * @name f__B503_1302_0013_3170
 * @implements B503:1302:0013:3170 ()
 *
 * Called From: B503:0665:000E:3FAF
 * Called From: B503:076E:000B:FFB4
 */
void f__B503_1302_0013_3170()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x4);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_movw(&emu_ax.x, 0x1);
	emu_movb(&emu_cx.l, emu_get_memory8(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x1315); emu_cs = 0x01F7; f__01F7_058E_0015_66E9();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { ovl__3503(0xFF); }
	f__B503_1315_0026_5F34();
}

/**
 * Decompiled function f__B503_1315_0026_5F34()
 *
 * @name f__B503_1315_0026_5F34
 * @implements B503:1315:0026:5F34 ()
 *
 * Called From: B503:1315:0013:3170
 */
void f__B503_1315_0026_5F34()
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
	if (emu_flags.zf) { f__B503_133B_0004_069C(); return; }
	emu_movw(&emu_ax.x, 0x1);
	emu_ip = 0x133D; emu_last_cs = 0xB503; emu_last_ip = 0x1339; emu_last_length = 0x0026; emu_last_crc = 0x5F34; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B503_133B_0004_069C()
 *
 * @name f__B503_133B_0004_069C
 * @implements B503:133B:0004:069C ()
 *
 * Called From: B503:1334:0026:5F34
 */
void f__B503_133B_0004_069C()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__B503_133F_0004_0F7A(); return;
}

/**
 * Decompiled function f__B503_133F_0004_0F7A()
 *
 * @name f__B503_133F_0004_0F7A
 * @implements B503:133F:0004:0F7A ()
 *
 * Called From: B503:133D:0004:069C
 */
void f__B503_133F_0004_0F7A()
{
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B503_1343_003B_4403()
 *
 * @name f__B503_1343_003B_4403
 * @implements B503:1343:003B:4403 ()
 *
 * Called From: B503:0816:0005:151E
 * Called From: B503:0893:000B:3901
 * Called From: B503:0907:0005:1550
 * Called From: B503:0A96:0005:1718
 * Called From: B503:0B50:0005:166E
 */
void f__B503_1343_003B_4403()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00, -0x7E48));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00, -0x7E4A));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76AE));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { emu_ip = 0x13C0; emu_last_cs = 0xB503; emu_last_ip = 0x1351; emu_last_length = 0x003B; emu_last_crc = 0x4403; emu_call(); return; } // Jump does not resolve
	if ((emu_flags.sf != emu_flags.of)) { f__B503_135B_0023_B976(); return; }
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76AC));
	if (!emu_flags.cf) { f__B503_13C0_0002_00E2(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76AE));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76AC));
	emu_addws(&emu_dx.x, 0x7);
	emu_adcw(&emu_ax.x, 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x7E48), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x7E4A), emu_dx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x2B10));
	emu_incw(&emu_ax.x);
	emu_cmpw(&emu_ax.x, 0x4);
	if (!(emu_flags.sf != emu_flags.of)) { f__B503_137E_0027_DB91(); return; }
	emu_incw(&emu_get_memory16(emu_ds, 0x00,  0x2B10));
	f__B503_1384_0021_B921(); return;
}

/**
 * Decompiled function f__B503_135B_0023_B976()
 *
 * @name f__B503_135B_0023_B976
 * @implements B503:135B:0023:B976 ()
 *
 * Called From: B503:1353:003B:4403
 */
void f__B503_135B_0023_B976()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76AE));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76AC));
	emu_addws(&emu_dx.x, 0x7);
	emu_adcw(&emu_ax.x, 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x7E48), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x7E4A), emu_dx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x2B10));
	emu_incw(&emu_ax.x);
	emu_cmpw(&emu_ax.x, 0x4);
	if (!(emu_flags.sf != emu_flags.of)) { emu_ip = 0x137E; emu_last_cs = 0xB503; emu_last_ip = 0x1376; emu_last_length = 0x0023; emu_last_crc = 0xB976; emu_call(); return; } // Jump does not resolve
	emu_incw(&emu_get_memory16(emu_ds, 0x00,  0x2B10));
	f__B503_1384_0021_B921(); return;
}

/**
 * Decompiled function f__B503_137E_0027_DB91()
 *
 * @name f__B503_137E_0027_DB91
 * @implements B503:137E:0027:DB91 ()
 *
 * Called From: B503:1376:003B:4403
 */
void f__B503_137E_0027_DB91()
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
	emu_push(emu_cs); emu_push(0x13A5); emu_cs = 0x01F7; f__01F7_28B8_0024_D407();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { ovl__3503(0xFF); }
	f__B503_13A5_0018_E441();
}

/**
 * Decompiled function f__B503_1384_0021_B921()
 *
 * @name f__B503_1384_0021_B921
 * @implements B503:1384:0021:B921 ()
 *
 * Called From: B503:137C:0023:B976
 * Called From: B503:137C:003B:4403
 */
void f__B503_1384_0021_B921()
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
	emu_push(emu_cs); emu_push(0x13A5); emu_cs = 0x01F7; f__01F7_28B8_0024_D407();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { ovl__3503(0xFF); }
	f__B503_13A5_0018_E441();
}

/**
 * Decompiled function f__B503_13A5_0018_E441()
 *
 * @name f__B503_13A5_0018_E441
 * @implements B503:13A5:0018:E441 ()
 *
 * Called From: B503:13A5:0021:B921
 * Called From: B503:13A5:0027:DB91
 */
void f__B503_13A5_0018_E441()
{
	emu_addws(&emu_sp, 0xA);
	emu_movw(&emu_ax.x, 0xFE);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0xFB);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3C34));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3C32));
	emu_push(emu_cs); emu_push(0x13BD); emu_cs = 0x2BA5; f__2BA5_0006_009C_1FA4();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { ovl__3503(0xFF); }
	f__B503_13BD_0005_1C82();
}

/**
 * Decompiled function f__B503_13BD_0005_1C82()
 *
 * @name f__B503_13BD_0005_1C82
 * @implements B503:13BD:0005:1C82 ()
 *
 * Called From: B503:13BD:0018:E441
 */
void f__B503_13BD_0005_1C82()
{
	emu_addws(&emu_sp, 0x8);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B503_13C0_0002_00E2()
 *
 * @name f__B503_13C0_0002_00E2
 * @implements B503:13C0:0002:00E2 ()
 *
 * Called From: B503:1359:003B:4403
 */
void f__B503_13C0_0002_00E2()
{
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B503_13C2_0008_3F32()
 *
 * @name f__B503_13C2_0008_3F32
 * @implements B503:13C2:0008:3F32 ()
 *
 * Called From: B503:0334:000E:D5D4
 * Called From: B503:038F:000A:8441
 * Called From: B503:03D6:000E:D462
 * Called From: B503:0448:0006:0222
 * Called From: B503:0EBF:0011:B94C
 * Called From: B503:0FF9:000E:D4C6
 */
void f__B503_13C2_0008_3F32()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_cs); emu_push(0x13CA); emu_cs = 0x29E8; f__29E8_0643_0008_40B8();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { ovl__3503(0xFF); }
	f__B503_13CA_0009_F5AA();
}

/**
 * Decompiled function f__B503_13CA_0009_F5AA()
 *
 * @name f__B503_13CA_0009_F5AA
 * @implements B503:13CA:0009:F5AA ()
 *
 * Called From: B503:13CA:0008:3F32
 */
void f__B503_13CA_0009_F5AA()
{
	emu_orw(&emu_ax.x, emu_ax.x);
	if (emu_flags.zf) { f__B503_13E8_0005_18C4(); return; }
	emu_push(emu_cs); emu_push(0x13D3); emu_cs = 0x29E8; emu_ip = 0x1BCD; emu_last_cs = 0xB503; emu_last_ip = 0x13CE; emu_last_length = 0x0009; emu_last_crc = 0xF5AA; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__B503_13E8_0005_18C4()
 *
 * @name f__B503_13E8_0005_18C4
 * @implements B503:13E8:0005:18C4 ()
 *
 * Called From: B503:13CC:0009:F5AA
 */
void f__B503_13E8_0005_18C4()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00, -0x7E4C));
	f__B503_13ED_0002_00E2(); return;
}

/**
 * Decompiled function f__B503_13ED_0002_00E2()
 *
 * @name f__B503_13ED_0002_00E2
 * @implements B503:13ED:0002:00E2 ()
 *
 * Called From: B503:13EB:0005:18C4
 */
void f__B503_13ED_0002_00E2()
{
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

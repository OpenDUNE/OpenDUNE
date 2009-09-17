/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__B500_0000_0008_FE1F()
 *
 * @name f__B500_0000_0008_FE1F
 * @implements B500:0000:0008:FE1F ()
 *
 * Called From: 3500:0020:0005:0000
 */
void f__B500_0000_0008_FE1F()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_cs); emu_push(0x0008); emu_cs = 0x1DD7; f__1DD7_03FD_000C_8340();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3500) { ovl__3500(0xFF); }
	f__B500_0008_000C_F964();
}

/**
 * Decompiled function f__B500_0008_000C_F964()
 *
 * @name f__B500_0008_000C_F964
 * @implements B500:0008:000C:F964 ()
 *
 * Called From: B500:0008:0008:FE1F
 */
void f__B500_0008_000C_F964()
{
	emu_cmpb(&emu_get_memory8(emu_ds, 0x00,  0x7096), 0x0);
	if (emu_flags.zf) { emu_ip = 0x0014; emu_last_cs = 0xB500; emu_last_ip = 0x000D; emu_last_length = 0x000C; emu_last_crc = 0xF964; emu_call(); return; } // Jump does not resolve
	emu_push(emu_cs); emu_push(0x0014); emu_cs = 0x29A3; f__29A3_02BD_0018_A1B5();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3500) { ovl__3500(0xFF); }
	f__B500_0014_0015_D8D5();
}

/**
 * Decompiled function f__B500_0014_0015_D8D5()
 *
 * @name f__B500_0014_0015_D8D5
 * @implements B500:0014:0015:D8D5 ()
 *
 * Called From: B500:0014:000C:F964
 */
void f__B500_0014_0015_D8D5()
{
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x7011), 0xFF);
	if (emu_flags.zf) { f__B500_002C_000C_D965(); return; }
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0029); emu_cs = 0x257A; emu_ip = 0x000D; emu_last_cs = 0xB500; emu_last_ip = 0x0024; emu_last_length = 0x0015; emu_last_crc = 0xD8D5; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__B500_002C_000C_D965()
 *
 * @name f__B500_002C_000C_D965
 * @implements B500:002C:000C:D965 ()
 *
 * Called From: B500:0019:0015:D8D5
 */
void f__B500_002C_000C_D965()
{
	emu_cmpb(&emu_get_memory8(emu_ds, 0x00,  0x62F6), 0x0);
	if (emu_flags.zf) { emu_ip = 0x0038; emu_last_cs = 0xB500; emu_last_ip = 0x0031; emu_last_length = 0x000C; emu_last_crc = 0xD965; emu_call(); return; } // Jump does not resolve
	emu_push(emu_cs); emu_push(0x0038); emu_cs = 0x1FB5; f__1FB5_1A67_0005_8AB7();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3500) { ovl__3500(0xFF); }
	f__B500_0038_0005_0164();
}

/**
 * Decompiled function f__B500_0038_0005_0164()
 *
 * @name f__B500_0038_0005_0164
 * @implements B500:0038:0005:0164 ()
 *
 * Called From: B500:0038:000C:D965
 */
void f__B500_0038_0005_0164()
{
	emu_push(emu_cs); emu_push(0x003D); emu_cs = 0x2BD1; f__2BD1_0005_0001_6580();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3500) { ovl__3500(0xFF); }
	f__B500_003D_0005_B18D();
}

/**
 * Decompiled function f__B500_003D_0005_B18D()
 *
 * @name f__B500_003D_0005_B18D
 * @implements B500:003D:0005:B18D ()
 *
 * Called From: B500:003D:0005:0164
 */
void f__B500_003D_0005_B18D()
{
	emu_push(emu_cs); emu_push(0x0042); emu_cs = 0x29E8; f__29E8_0F7A_000D_B1AA();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3500) { ovl__3500(0xFF); }
	f__B500_0042_000D_7184();
}

/**
 * Decompiled function f__B500_0042_000D_7184()
 *
 * @name f__B500_0042_000D_7184
 * @implements B500:0042:000D:7184 ()
 *
 * Called From: B500:0042:0005:B18D
 */
void f__B500_0042_000D_7184()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x6C66));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x6C68));
	if (emu_flags.zf) { f__B500_004F_0005_B7DE(); return; }

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_ds, 0x00,  0x6C66);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_ds, 0x00,  0x6C68);
	emu_push(0x004F);
	switch ((emu_cs << 16) + emu_ip) {
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0xB500; emu_last_ip = 0x004B; emu_last_length = 0x000D; emu_last_crc = 0x7184;
			emu_call();
			return;
	}
	f__B500_004F_0005_B7DE();
}

/**
 * Decompiled function f__B500_004F_0005_B7DE()
 *
 * @name f__B500_004F_0005_B7DE
 * @implements B500:004F:0005:B7DE ()
 *
 * Called From: B500:0049:000D:7184
 */
void f__B500_004F_0005_B7DE()
{
	emu_push(emu_cs); emu_push(0x0054); emu_cs = 0x263B; f__263B_0006_001C_9C72();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3500) { ovl__3500(0xFF); }
	f__B500_0054_000F_ACF6();
}

/**
 * Decompiled function f__B500_0054_000F_ACF6()
 *
 * @name f__B500_0054_000F_ACF6
 * @implements B500:0054:000F:ACF6 ()
 *
 * Called From: B500:0054:0005:B7DE
 */
void f__B500_0054_000F_ACF6()
{
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x6E26));
	if (emu_flags.zf) { emu_ip = 0x0064; emu_last_cs = 0xB500; emu_last_ip = 0x0058; emu_last_length = 0x000F; emu_last_crc = 0xACF6; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, 0x9);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0063); emu_cs = 0x263B; f__263B_002F_0016_FDB0();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3500) { ovl__3500(0xFF); }
	f__B500_0063_0006_928E();
}

/**
 * Decompiled function f__B500_0063_0006_928E()
 *
 * @name f__B500_0063_0006_928E
 * @implements B500:0063:0006:928E ()
 *
 * Called From: B500:0063:000F:ACF6
 */
void f__B500_0063_0006_928E()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_cs); emu_push(0x0069); emu_cs = 0x2649; f__2649_0ADA_000E_EEB3();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3500) { ovl__3500(0xFF); }
	f__B500_0069_0005_F701();
}

/**
 * Decompiled function f__B500_0069_0005_F701()
 *
 * @name f__B500_0069_0005_F701
 * @implements B500:0069:0005:F701 ()
 *
 * Called From: B500:0069:0006:928E
 */
void f__B500_0069_0005_F701()
{
	emu_push(emu_cs); emu_push(0x006E); emu_cs = 0x01F7; f__01F7_1BC3_000F_9450();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3500) { ovl__3500(0xFF); }
	f__B500_006E_0012_AD3C();
}

/**
 * Decompiled function f__B500_006E_0012_AD3C()
 *
 * @name f__B500_006E_0012_AD3C
 * @implements B500:006E:0012:AD3C ()
 *
 * Called From: B500:006E:0005:F701
 */
void f__B500_006E_0012_AD3C()
{
	emu_cmpw(&emu_ax.x, 0xFFFF);
	if (!emu_flags.zf) { f__B500_0082_0011_8B05(); return; }
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6724));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6722));
	emu_push(emu_cs); emu_push(0x0080); emu_cs = 0x28E4; emu_ip = 0x0002; emu_last_cs = 0xB500; emu_last_ip = 0x007B; emu_last_length = 0x0012; emu_last_crc = 0xAD3C; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__B500_0082_0011_8B05()
 *
 * @name f__B500_0082_0011_8B05
 * @implements B500:0082:0011:8B05 ()
 *
 * Called From: B500:0071:0012:AD3C
 */
void f__B500_0082_0011_8B05()
{
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x67B8));
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x67BA));
	emu_movw(&emu_ax.x, 0x3F);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0093); emu_cs = 0x01F7; f__01F7_04CC_000E_D711();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3500) { ovl__3500(0xFF); }
	f__B500_0093_0005_6143();
}

/**
 * Decompiled function f__B500_0093_0005_6143()
 *
 * @name f__B500_0093_0005_6143
 * @implements B500:0093:0005:6143 ()
 *
 * Called From: B500:0093:0011:8B05
 */
void f__B500_0093_0005_6143()
{
	emu_addws(&emu_sp, 0x6);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

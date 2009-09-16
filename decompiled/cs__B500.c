/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__B500_0000_0008_346E()
 *
 * @name f__B500_0000_0008_346E
 * @implements B500:0000:0008:346E ()
 *
 * Called From: 3500:0020:0005:1C7E
 * Called From: 3500:0020:0005:1CAC
 * Called From: 3500:0020:0005:1CC2
 * Called From: 3500:0020:0005:1D42
 * Called From: 3500:0020:0005:1DD6
 * Called From: 3500:0020:0005:1DE0
 * Called From: 3500:0020:0005:1EBC
 * Called From: 3500:0020:0005:1EFA
 * Called From: 3500:0020:0005:1DDC
 * Called From: 3500:0020:0005:1F2A
 */
void f__B500_0000_0008_346E()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_cs); emu_push(0x0008); emu_cs = 0x1DD7; f__1DD7_03FD_000C_36A5();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3500) { ovl__3500(0xFF); }
	f__B500_0008_000C_6915();
}

/**
 * Decompiled function f__B500_0008_000C_6915()
 *
 * @name f__B500_0008_000C_6915
 * @implements B500:0008:000C:6915 ()
 *
 * Called From: B500:0008:0008:346E
 */
void f__B500_0008_000C_6915()
{
	emu_cmpb(&emu_get_memory8(emu_ds, 0x00,  0x7096), 0x0);
	if (emu_flags.zf) { emu_ip = 0x0014; emu_last_cs = 0xB500; emu_last_ip = 0x000D; emu_last_length = 0x000C; emu_last_crc = 0x6915; emu_call(); return; } // Jump does not resolve
	emu_push(emu_cs); emu_push(0x0014); emu_cs = 0x29A3; f__29A3_02BD_0018_1436();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3500) { ovl__3500(0xFF); }
	f__B500_0014_0015_4268();
}

/**
 * Decompiled function f__B500_0014_0015_4268()
 *
 * @name f__B500_0014_0015_4268
 * @implements B500:0014:0015:4268 ()
 *
 * Called From: B500:0014:000C:6915
 */
void f__B500_0014_0015_4268()
{
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x7011), 0xFF);
	if (emu_flags.zf) { f__B500_002C_000C_C040(); return; }
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0029); emu_cs = 0x257A; emu_ip = 0x0036; emu_last_cs = 0xB500; emu_last_ip = 0x0024; emu_last_length = 0x0015; emu_last_crc = 0x4268; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__B500_002C_000C_C040()
 *
 * @name f__B500_002C_000C_C040
 * @implements B500:002C:000C:C040 ()
 *
 * Called From: B500:0019:0015:4268
 */
void f__B500_002C_000C_C040()
{
	emu_cmpb(&emu_get_memory8(emu_ds, 0x00,  0x62F6), 0x0);
	if (emu_flags.zf) { emu_ip = 0x0038; emu_last_cs = 0xB500; emu_last_ip = 0x0031; emu_last_length = 0x000C; emu_last_crc = 0xC040; emu_call(); return; } // Jump does not resolve
	emu_push(emu_cs); emu_push(0x0038); emu_cs = 0x1FB5; f__1FB5_1A67_0005_0592();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3500) { ovl__3500(0xFF); }
	f__B500_0038_0005_1002();
}

/**
 * Decompiled function f__B500_0038_0005_1002()
 *
 * @name f__B500_0038_0005_1002
 * @implements B500:0038:0005:1002 ()
 *
 * Called From: B500:0038:000C:C040
 */
void f__B500_0038_0005_1002()
{
	emu_push(emu_cs); emu_push(0x003D); emu_cs = 0x2BD1; f__2BD1_0005_0001_0196();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3500) { ovl__3500(0xFF); }
	f__B500_003D_0005_176A();
}

/**
 * Decompiled function f__B500_003D_0005_176A()
 *
 * @name f__B500_003D_0005_176A
 * @implements B500:003D:0005:176A ()
 *
 * Called From: B500:003D:0005:1002
 */
void f__B500_003D_0005_176A()
{
	emu_push(emu_cs); emu_push(0x0042); emu_cs = 0x29E8; f__29E8_0F7A_000D_CDE0();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3500) { ovl__3500(0xFF); }
	f__B500_0042_000D_4DD1();
}

/**
 * Decompiled function f__B500_0042_000D_4DD1()
 *
 * @name f__B500_0042_000D_4DD1
 * @implements B500:0042:000D:4DD1 ()
 *
 * Called From: B500:0042:0005:176A
 */
void f__B500_0042_000D_4DD1()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x6C66));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x6C68));
	if (emu_flags.zf) { f__B500_004F_0005_1380(); return; }

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_ds, 0x00,  0x6C66);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_ds, 0x00,  0x6C68);
	emu_push(0x004F);
	switch ((emu_cs << 16) + emu_ip) {
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0xB500; emu_last_ip = 0x004B; emu_last_length = 0x000D; emu_last_crc = 0x4DD1;
			emu_call();
			return;
	}
	f__B500_004F_0005_1380();
}

/**
 * Decompiled function f__B500_004F_0005_1380()
 *
 * @name f__B500_004F_0005_1380
 * @implements B500:004F:0005:1380 ()
 *
 * Called From: B500:0049:000D:4DD1
 */
void f__B500_004F_0005_1380()
{
	emu_push(emu_cs); emu_push(0x0054); emu_cs = 0x263B; f__263B_0006_001C_EE50();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3500) { ovl__3500(0xFF); }
	f__B500_0054_000F_D40C();
}

/**
 * Decompiled function f__B500_0054_000F_D40C()
 *
 * @name f__B500_0054_000F_D40C
 * @implements B500:0054:000F:D40C ()
 *
 * Called From: B500:0054:0005:1380
 */
void f__B500_0054_000F_D40C()
{
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x6E26));
	if (emu_flags.zf) { emu_ip = 0x0064; emu_last_cs = 0xB500; emu_last_ip = 0x0058; emu_last_length = 0x000F; emu_last_crc = 0xD40C; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, 0x9);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0063); emu_cs = 0x263B; f__263B_002F_0016_AA17();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3500) { ovl__3500(0xFF); }
	f__B500_0063_0006_0998();
}

/**
 * Decompiled function f__B500_0063_0006_0998()
 *
 * @name f__B500_0063_0006_0998
 * @implements B500:0063:0006:0998 ()
 *
 * Called From: B500:0063:000F:D40C
 */
void f__B500_0063_0006_0998()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_cs); emu_push(0x0069); emu_cs = 0x2649; f__2649_0ADA_000E_DD19();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3500) { ovl__3500(0xFF); }
	f__B500_0069_0005_1C76();
}

/**
 * Decompiled function f__B500_0069_0005_1C76()
 *
 * @name f__B500_0069_0005_1C76
 * @implements B500:0069:0005:1C76 ()
 *
 * Called From: B500:0069:0006:0998
 */
void f__B500_0069_0005_1C76()
{
	emu_push(emu_cs); emu_push(0x006E); emu_cs = 0x01F7; f__01F7_1BC3_000F_5F02();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3500) { ovl__3500(0xFF); }
	f__B500_006E_0012_ADB1();
}

/**
 * Decompiled function f__B500_006E_0012_ADB1()
 *
 * @name f__B500_006E_0012_ADB1
 * @implements B500:006E:0012:ADB1 ()
 *
 * Called From: B500:006E:0005:1C76
 */
void f__B500_006E_0012_ADB1()
{
	emu_cmpw(&emu_ax.x, 0xFFFF);
	if (!emu_flags.zf) { f__B500_0082_0011_96A9(); return; }
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6724));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6722));
	emu_push(emu_cs); emu_push(0x0080); emu_cs = 0x28E4; emu_ip = 0x0082; emu_last_cs = 0xB500; emu_last_ip = 0x007B; emu_last_length = 0x0012; emu_last_crc = 0xADB1; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__B500_0082_0011_96A9()
 *
 * @name f__B500_0082_0011_96A9
 * @implements B500:0082:0011:96A9 ()
 *
 * Called From: B500:0071:0012:ADB1
 */
void f__B500_0082_0011_96A9()
{
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x67B8));
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x67BA));
	emu_movw(&emu_ax.x, 0x3F);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0093); emu_cs = 0x01F7; f__01F7_04CC_000E_9C78();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3500) { ovl__3500(0xFF); }
	f__B500_0093_0005_1CF2();
}

/**
 * Decompiled function f__B500_0093_0005_1CF2()
 *
 * @name f__B500_0093_0005_1CF2
 * @implements B500:0093:0005:1CF2 ()
 *
 * Called From: B500:0093:0011:96A9
 */
void f__B500_0093_0005_1CF2()
{
	emu_addws(&emu_sp, 0x6);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

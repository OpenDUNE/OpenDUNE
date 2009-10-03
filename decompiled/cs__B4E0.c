/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__B4E0_0000_000F_14AD()
 *
 * @name f__B4E0_0000_000F_14AD
 * @implements B4E0:0000:000F:14AD ()
 *
 * Called From: 34E0:0020:0005:0000
 */
void f__B4E0_0000_000F_14AD()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x2);
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x000F); emu_cs = 0x2598; f__2598_0000_0017_EB80();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { ovl__34E0(0xFF); }
	f__B4E0_000F_000D_9EA7();
}

/**
 * Decompiled function f__B4E0_000F_000D_9EA7()
 *
 * @name f__B4E0_000F_000D_9EA7
 * @implements B4E0:000F:000D:9EA7 ()
 *
 * Called From: B4E0:000F:000F:14AD
 */
void f__B4E0_000F_000D_9EA7()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x001C); emu_cs = 0x29E8; emu_Input_Flags_SetBits();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { ovl__34E0(0xFF); }
	f__B4E0_001C_0006_8488();
}

/**
 * Decompiled function f__B4E0_001C_0006_8488()
 *
 * @name f__B4E0_001C_0006_8488
 * @implements B4E0:001C:0006:8488 ()
 *
 * Called From: B4E0:001C:000D:9EA7
 */
void f__B4E0_001C_0006_8488()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_cs); emu_push(0x0022); emu_cs = 0x29E8; emu_Input_History_Clear();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { ovl__34E0(0xFF); }
	f__B4E0_0022_000F_E922();
}

/**
 * Decompiled function f__B4E0_0022_000F_E922()
 *
 * @name f__B4E0_0022_000F_E922
 * @implements B4E0:0022:000F:E922 ()
 *
 * Called From: B4E0:0022:0006:8488
 */
void f__B4E0_0022_000F_E922()
{
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3A38));
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_cs); emu_push(0x0031); emu_cs = 0x34DA; ovl__34DA(0);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { ovl__34E0(0xFF); }
	f__B4E0_0031_0016_8766();
}

/**
 * Decompiled function f__B4E0_0031_0016_8766()
 *
 * @name f__B4E0_0031_0016_8766
 * @implements B4E0:0031:0016:8766 ()
 *
 * Called From: B4E0:0031:000F:E922
 */
void f__B4E0_0031_0016_8766()
{
	emu_addws(&emu_sp, 0x6);
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x5);
	emu_push(emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0x6), 0x0);
	if (emu_flags.zf) { f__B4E0_0047_0015_7283(); return; }
	emu_movw(&emu_ax.x, 0x6);
	/* Unresolved jump */ emu_ip = 0x004A; emu_last_cs = 0xB4E0; emu_last_ip = 0x0045; emu_last_length = 0x0016; emu_last_crc = 0x8766; emu_call();
}

/**
 * Decompiled function f__B4E0_0047_0015_7283()
 *
 * @name f__B4E0_0047_0015_7283
 * @implements B4E0:0047:0015:7283 ()
 *
 * Called From: B4E0:0040:0016:8766
 */
void f__B4E0_0047_0015_7283()
{
	emu_movw(&emu_ax.x, 0x4);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0xA8);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0xC8);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0xC1);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x005C); emu_cs = 0x0FCB; f__0FCB_005F_001C_FDC4();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { ovl__34E0(0xFF); }
	f__B4E0_005C_000F_E74D();
}

/**
 * Decompiled function f__B4E0_005C_000F_E74D()
 *
 * @name f__B4E0_005C_000F_E74D
 * @implements B4E0:005C:000F:E74D ()
 *
 * Called From: B4E0:005C:0015:7283
 */
void f__B4E0_005C_000F_E74D()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_es, emu_dx.x);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x0));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x006B); emu_cs = 0x29DA; f__29DA_00D0_0013_E21A();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { ovl__34E0(0xFF); }
	f__B4E0_006B_000B_6BAA();
}

/**
 * Decompiled function f__B4E0_006B_000B_6BAA()
 *
 * @name f__B4E0_006B_000B_6BAA
 * @implements B4E0:006B:000B:6BAA ()
 *
 * Called From: B4E0:006B:000F:E74D
 */
void f__B4E0_006B_000B_6BAA()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0076); emu_cs = 0x34B8; ovl__34B8(0);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { ovl__34E0(0xFF); }
	f__B4E0_0076_0019_D6BB();
}

/**
 * Decompiled function f__B4E0_0076_0019_D6BB()
 *
 * @name f__B4E0_0076_0019_D6BB
 * @implements B4E0:0076:0019:D6BB ()
 *
 * Called From: 261F:01B9:001B:EDBF
 */
void f__B4E0_0076_0019_D6BB()
{
	emu_addws(&emu_sp, 0xE);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x8028), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x8026), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x8026));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x8), 0x6E);
	emu_push(emu_cs);
	emu_push(0x008F); f__B4E0_0B86_001E_9967();
	f__B4E0_008F_0005_6168();
}

/**
 * Decompiled function f__B4E0_008F_0005_6168()
 *
 * @name f__B4E0_008F_0005_6168
 * @implements B4E0:008F:0005:6168 ()
 *
 * Called From: B4E0:008F:0019:D6BB
 */
void f__B4E0_008F_0005_6168()
{
	emu_push(emu_cs); emu_push(0x0094); emu_cs = 0x2B6C; f__2B6C_0137_0020_C73F();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { ovl__34E0(0xFF); }
	f__B4E0_0094_0020_001D();
}

/**
 * Decompiled function f__B4E0_0094_0020_001D()
 *
 * @name f__B4E0_0094_0020_001D
 * @implements B4E0:0094:0020:001D ()
 *
 * Called From: B4E0:0094:0005:6168
 */
void f__B4E0_0094_0020_001D()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x2);
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
	emu_push(emu_cs); emu_push(0x00B4); emu_cs = 0x24D0; f__24D0_000D_0039_C17D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { ovl__34E0(0xFF); }
	f__B4E0_00B4_0008_43E5();
}

/**
 * Decompiled function f__B4E0_00B4_0008_43E5()
 *
 * @name f__B4E0_00B4_0008_43E5
 * @implements B4E0:00B4:0008:43E5 ()
 *
 * Called From: B4E0:00B4:0020:001D
 */
void f__B4E0_00B4_0008_43E5()
{
	emu_addws(&emu_sp, 0x10);
	emu_push(emu_cs); emu_push(0x00BC); emu_cs = 0x2B6C; f__2B6C_0169_001E_6939();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { ovl__34E0(0xFF); }
	f__B4E0_00BC_0009_B94B();
}

/**
 * Decompiled function f__B4E0_00BC_0009_B94B()
 *
 * @name f__B4E0_00BC_0009_B94B
 * @implements B4E0:00BC:0009:B94B ()
 *
 * Called From: B4E0:00BC:0008:43E5
 */
void f__B4E0_00BC_0009_B94B()
{
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x00C5); f__B4E0_041D_0017_C8A5();
	f__B4E0_00C5_000A_AD03();
}

/**
 * Decompiled function f__B4E0_00C5_000A_AD03()
 *
 * @name f__B4E0_00C5_000A_AD03
 * @implements B4E0:00C5:000A:AD03 ()
 *
 * Called From: B4E0:00C5:0009:B94B
 */
void f__B4E0_00C5_000A_AD03()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x00CF); f__B4E0_0847_0019_A380();
	f__B4E0_00CF_0009_E4DB();
}

/**
 * Decompiled function f__B4E0_00CF_0009_E4DB()
 *
 * @name f__B4E0_00CF_0009_E4DB
 * @implements B4E0:00CF:0009:E4DB ()
 *
 * Called From: B4E0:00CF:000A:AD03
 */
void f__B4E0_00CF_0009_E4DB()
{
	emu_pop(&emu_cx.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x00D8); emu_cs = 0x2598; f__2598_0000_0017_EB80();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { ovl__34E0(0xFF); }
	f__B4E0_00D8_0006_5D9D();
}

/**
 * Decompiled function f__B4E0_00D8_0006_5D9D()
 *
 * @name f__B4E0_00D8_0006_5D9D
 * @implements B4E0:00D8:0006:5D9D ()
 *
 * Called From: B4E0:00D8:0009:E4DB
 */
void f__B4E0_00D8_0006_5D9D()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_cs);
	emu_push(0x00DE); f__B4E0_0151_000D_E28D();
	f__B4E0_00DE_000D_1817();
}

/**
 * Decompiled function f__B4E0_00DE_000D_1817()
 *
 * @name f__B4E0_00DE_000D_1817
 * @implements B4E0:00DE:000D:1817 ()
 *
 * Called From: B4E0:00DE:0006:5D9D
 */
void f__B4E0_00DE_000D_1817()
{
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x8028));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x8026));
	emu_push(emu_cs); emu_push(0x00EB); emu_cs = 0x23E1; f__23E1_01C2_0011_24E8();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { ovl__34E0(0xFF); }
	f__B4E0_00EB_0007_AA57();
}

/**
 * Decompiled function f__B4E0_00EB_0007_AA57()
 *
 * @name f__B4E0_00EB_0007_AA57
 * @implements B4E0:00EB:0007:AA57 ()
 *
 * Called From: B4E0:00EB:000D:1817
 */
void f__B4E0_00EB_0007_AA57()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_push(emu_cs); emu_push(0x00F2); emu_cs = 0x34DA; ovl__34DA(1);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { ovl__34E0(0xFF); }
	f__B4E0_00F2_000D_332A();
}

/**
 * Decompiled function f__B4E0_00F2_000D_332A()
 *
 * @name f__B4E0_00F2_000D_332A
 * @implements B4E0:00F2:000D:332A ()
 *
 * Called From: B4E0:00F2:0007:AA57
 */
void f__B4E0_00F2_000D_332A()
{
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x8038));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x8036));
	emu_push(emu_cs); emu_push(0x00FF); emu_cs = 0x3520; ovl__3520(4);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { ovl__34E0(0xFF); }
	f__B4E0_00FF_000F_B046();
}

/**
 * Decompiled function f__B4E0_00FF_000F_B046()
 *
 * @name f__B4E0_00FF_000F_B046
 * @implements B4E0:00FF:000F:B046 ()
 *
 * Called From: B4E0:00FF:000D:332A
 */
void f__B4E0_00FF_000F_B046()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x8034));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x8032));
	emu_push(emu_cs); emu_push(0x010E); emu_cs = 0x3520; ovl__3520(3);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { ovl__34E0(0xFF); }
	f__B4E0_010E_000F_307E();
}

/**
 * Decompiled function f__B4E0_010E_000F_307E()
 *
 * @name f__B4E0_010E_000F_307E
 * @implements B4E0:010E:000F:307E ()
 *
 * Called From: B4E0:010E:000F:B046
 */
void f__B4E0_010E_000F_307E()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x8030));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x802E));
	emu_push(emu_cs); emu_push(0x011D); emu_cs = 0x3520; ovl__3520(3);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { ovl__34E0(0xFF); }
	f__B4E0_011D_0024_0DEA();
}

/**
 * Decompiled function f__B4E0_011D_0024_0DEA()
 *
 * @name f__B4E0_011D_0024_0DEA
 * @implements B4E0:011D:0024:0DEA ()
 *
 * Called From: B4E0:011D:000F:307E
 */
void f__B4E0_011D_0024_0DEA()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x8030), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x802E), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x8034), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x8032), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x8038), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x8036), emu_dx.x);
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0141); emu_cs = 0x29E8; emu_Input_Flags_ClearBits();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { ovl__34E0(0xFF); }
	f__B4E0_0141_0009_91B5();
}

/**
 * Decompiled function f__B4E0_0141_0009_91B5()
 *
 * @name f__B4E0_0141_0009_91B5
 * @implements B4E0:0141:0009:91B5 ()
 *
 * Called From: B4E0:0141:0024:0DEA
 */
void f__B4E0_0141_0009_91B5()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_cs); emu_push(0x014A); emu_cs = 0x2598; f__2598_0000_0017_EB80();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { ovl__34E0(0xFF); }
	f__B4E0_014A_0003_CB1A();
}

/**
 * Decompiled function f__B4E0_014A_0003_CB1A()
 *
 * @name f__B4E0_014A_0003_CB1A
 * @implements B4E0:014A:0003:CB1A ()
 *
 * Called From: B4E0:014A:0009:91B5
 */
void f__B4E0_014A_0003_CB1A()
{
	emu_pop(&emu_cx.x);
	f__B4E0_014D_0004_893F(); return;
}

/**
 * Decompiled function f__B4E0_014D_0004_893F()
 *
 * @name f__B4E0_014D_0004_893F
 * @implements B4E0:014D:0004:893F ()
 *
 * Called From: B4E0:014B:0003:CB1A
 */
void f__B4E0_014D_0004_893F()
{
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B4E0_0151_000D_E28D()
 *
 * @name f__B4E0_0151_000D_E28D
 * @implements B4E0:0151:000D:E28D ()
 *
 * Called From: B4E0:00DB:0006:5D9D
 */
void f__B4E0_0151_000D_E28D()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x2);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_xorw(&emu_si, emu_si);
	f__B4E0_0299_0009_2FEF(); return;
}

/**
 * Decompiled function f__B4E0_015E_0008_4C65()
 *
 * @name f__B4E0_015E_0008_4C65
 * @implements B4E0:015E:0008:4C65 ()
 *
 * Called From: B4E0:029F:0009:2FEF
 * Called From: B4E0:029F:000F:D3A0
 */
void f__B4E0_015E_0008_4C65()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0166); emu_cs = 0x34DA; ovl__34DA(2);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { ovl__34E0(0xFF); }
	f__B4E0_0166_000E_D2D5();
}

/**
 * Decompiled function f__B4E0_0166_000E_D2D5()
 *
 * @name f__B4E0_0166_000E_D2D5
 * @implements B4E0:0166:000E:D2D5 ()
 *
 * Called From: B4E0:0166:0008:4C65
 */
void f__B4E0_0166_000E_D2D5()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x802C));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x802A));
	emu_push(emu_cs); emu_push(0x0174); emu_cs = 0x34A2; ovl__34A2(2);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { ovl__34E0(0xFF); }
	f__B4E0_0174_0015_151C();
}

/**
 * Decompiled function f__B4E0_0174_0015_151C()
 *
 * @name f__B4E0_0174_0015_151C
 * @implements B4E0:0174:0015:151C ()
 *
 * Called From: B4E0:0174:000E:D2D5
 */
void f__B4E0_0174_0015_151C()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_si, emu_ax.x);
	emu_testw(&emu_si, 0x800);
	if (emu_flags.zf) { f__B4E0_0180_0009_104E(); return; }
	emu_xorw(&emu_si, emu_si);
	emu_cmpw(&emu_si, 0x8001);
	if (!emu_flags.zf) { f__B4E0_0189_0023_C1DF(); return; }
	/* Unresolved jump */ emu_ip = 0x02A2; emu_last_cs = 0xB4E0; emu_last_ip = 0x0186; emu_last_length = 0x0015; emu_last_crc = 0x151C; emu_call();
}

/**
 * Decompiled function f__B4E0_0180_0009_104E()
 *
 * @name f__B4E0_0180_0009_104E
 * @implements B4E0:0180:0009:104E ()
 *
 * Called From: B4E0:017C:0015:151C
 */
void f__B4E0_0180_0009_104E()
{
	emu_cmpw(&emu_si, 0x8001);
	if (!emu_flags.zf) { f__B4E0_0189_0023_C1DF(); return; }
	f__B4E0_02A2_0006_F7CE(); return;
}

/**
 * Decompiled function f__B4E0_0189_0023_C1DF()
 *
 * @name f__B4E0_0189_0023_C1DF
 * @implements B4E0:0189:0023:C1DF ()
 *
 * Called From: B4E0:0184:0009:104E
 * Called From: B4E0:0184:0015:151C
 */
void f__B4E0_0189_0023_C1DF()
{
	emu_andw(&emu_si, 0x80FF);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x25CE), 0x1);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_si);
	emu_movw(&emu_cx.x, 0x16);
	emu_movw(&emu_bx.x, 0x2A8);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_cs, emu_bx.x,  0x0));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_flags.zf) { f__B4E0_01AC_0004_29FB(); return; }
	emu_addws(&emu_bx.x, 0x2);
	if (--emu_cx.x != 0) { f__B4E0_019C_0010_F7C9(); return; }
	/* Unresolved jump */ emu_ip = 0x0291; emu_last_cs = 0xB4E0; emu_last_ip = 0x01A9; emu_last_length = 0x0023; emu_last_crc = 0xC1DF; emu_call();
}

/**
 * Decompiled function f__B4E0_019C_0010_F7C9()
 *
 * @name f__B4E0_019C_0010_F7C9
 * @implements B4E0:019C:0010:F7C9 ()
 *
 * Called From: B4E0:01A7:0023:C1DF
 * Called From: B4E0:01A7:0010:F7C9
 */
void f__B4E0_019C_0010_F7C9()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_cs, emu_bx.x,  0x0));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_flags.zf) { f__B4E0_01AC_0004_29FB(); return; }
	emu_addws(&emu_bx.x, 0x2);
	if (--emu_cx.x != 0) { f__B4E0_019C_0010_F7C9(); return; }
	f__B4E0_0291_0002_C03A(); return;
}

/**
 * Decompiled function f__B4E0_01AC_0004_29FB()
 *
 * @name f__B4E0_01AC_0004_29FB
 * @implements B4E0:01AC:0004:29FB ()
 *
 * Called From: B4E0:01A2:0023:C1DF
 * Called From: B4E0:01A2:0010:F7C9
 */
void f__B4E0_01AC_0004_29FB()
{

	/* Jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_cs, emu_bx.x,  0x2C);
	switch (emu_ip) {
		case 0x01B0: f__B4E0_01B0_0003_1D18(); return;
		case 0x0266: f__B4E0_0266_0009_DDFD(); return;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0xB4E0; emu_last_ip = 0x01AC; emu_last_length = 0x0004; emu_last_crc = 0x29FB;
			emu_call();
			return;
	}
}

/**
 * Decompiled function f__B4E0_01B0_0003_1D18()
 *
 * @name f__B4E0_01B0_0003_1D18
 * @implements B4E0:01B0:0003:1D18 ()
 *
 * Called From: B4E0:01AC:0004:29FB
 */
void f__B4E0_01B0_0003_1D18()
{
	f__B4E0_0293_000F_D3A0(); return;
}

/**
 * Decompiled function f__B4E0_0266_0009_DDFD()
 *
 * @name f__B4E0_0266_0009_DDFD
 * @implements B4E0:0266:0009:DDFD ()
 *
 * Called From: B4E0:01AC:0004:29FB
 */
void f__B4E0_0266_0009_DDFD()
{
	emu_cmpb(&emu_get_memory8(emu_ds, 0x00,  0x98E5), 0x1);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x026F; emu_last_cs = 0xB4E0; emu_last_ip = 0x026B; emu_last_length = 0x0009; emu_last_crc = 0xDDFD; emu_call(); return; }
	f__B4E0_0293_000F_D3A0(); return;
}

/**
 * Decompiled function f__B4E0_0291_0002_C03A()
 *
 * @name f__B4E0_0291_0002_C03A
 * @implements B4E0:0291:0002:C03A ()
 *
 * Called From: B4E0:01A9:0010:F7C9
 */
void f__B4E0_0291_0002_C03A()
{
	f__B4E0_0293_000F_D3A0(); return;
}

/**
 * Decompiled function f__B4E0_0293_000F_D3A0()
 *
 * @name f__B4E0_0293_000F_D3A0
 * @implements B4E0:0293:000F:D3A0 ()
 *
 * Called From: B4E0:01B0:0003:1D18
 * Called From: B4E0:026D:0009:DDFD
 * Called From: B4E0:0291:0002:C03A
 */
void f__B4E0_0293_000F_D3A0()
{
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x25CE), 0x0);
	emu_cmpw(&emu_si, 0x8001);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x02A2; emu_last_cs = 0xB4E0; emu_last_ip = 0x029D; emu_last_length = 0x000F; emu_last_crc = 0xD3A0; emu_call(); return; }
	f__B4E0_015E_0008_4C65(); return;
}

/**
 * Decompiled function f__B4E0_0299_0009_2FEF()
 *
 * @name f__B4E0_0299_0009_2FEF
 * @implements B4E0:0299:0009:2FEF ()
 *
 * Called From: B4E0:015B:000D:E28D
 */
void f__B4E0_0299_0009_2FEF()
{
	emu_cmpw(&emu_si, 0x8001);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x02A2; emu_last_cs = 0xB4E0; emu_last_ip = 0x029D; emu_last_length = 0x0009; emu_last_crc = 0x2FEF; emu_call(); return; }
	f__B4E0_015E_0008_4C65(); return;
}

/**
 * Decompiled function f__B4E0_02A2_0006_F7CE()
 *
 * @name f__B4E0_02A2_0006_F7CE
 * @implements B4E0:02A2:0006:F7CE ()
 *
 * Called From: B4E0:0186:0009:104E
 */
void f__B4E0_02A2_0006_F7CE()
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
 * Decompiled function f__B4E0_0300_001B_4F41()
 *
 * @name f__B4E0_0300_001B_4F41
 * @implements B4E0:0300:001B:4F41 ()
 *
 * Called From: 34E0:002A:0005:0000
 */
void f__B4E0_0300_001B_4F41()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x4);
	emu_push(emu_si);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x803C));
	emu_addw(&emu_ax.x, 0x3);
	emu_movw(&emu_si, emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), emu_si);
	if (!emu_flags.zf) { f__B4E0_031B_000E_C2E3(); return; }
	f__B4E0_03BF_002A_1184(); return;
}

/**
 * Decompiled function f__B4E0_031B_000E_C2E3()
 *
 * @name f__B4E0_031B_000E_C2E3
 * @implements B4E0:031B:000E:C2E3 ()
 *
 * Called From: B4E0:0316:001B:4F41
 */
void f__B4E0_031B_000E_C2E3()
{
	emu_push(emu_si);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x802C));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x802A));
	emu_push(emu_cs); emu_push(0x0329); emu_cs = 0x348B; ovl__348B(3);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { ovl__34E0(0xFF); }
	f__B4E0_0329_0017_3649();
}

/**
 * Decompiled function f__B4E0_0329_0017_3649()
 *
 * @name f__B4E0_0329_0017_3649
 * @implements B4E0:0329:0017:3649 ()
 *
 * Called From: B4E0:0329:000E:C2E3
 */
void f__B4E0_0329_0017_3649()
{
	emu_addws(&emu_sp, 0x6);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x0340); emu_cs = 0x348B; ovl__348B(4);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { ovl__34E0(0xFF); }
	f__B4E0_0340_0011_2470();
}

/**
 * Decompiled function f__B4E0_0340_0011_2470()
 *
 * @name f__B4E0_0340_0011_2470
 * @implements B4E0:0340:0011:2470 ()
 *
 * Called From: B4E0:0340:0017:3649
 */
void f__B4E0_0340_0011_2470()
{
	emu_addws(&emu_sp, 0x6);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x0351); emu_cs = 0x348B; ovl__348B(4);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { ovl__34E0(0xFF); }
	f__B4E0_0351_002F_ED25();
}

/**
 * Decompiled function f__B4E0_0351_002F_ED25()
 *
 * @name f__B4E0_0351_002F_ED25
 * @implements B4E0:0351:002F:ED25 ()
 *
 * Called From: B4E0:0351:0011:2470
 */
void f__B4E0_0351_002F_ED25()
{
	emu_addws(&emu_sp, 0x6);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x38), 0x31);
	if (!emu_flags.zf) { f__B4E0_0382_002C_0F24(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_ax.l, 0xF);
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x2C), emu_ax.l);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x2A), emu_ax.l);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x26), emu_ax.l);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x0380); emu_cs = 0x34A2; ovl__34A2(0);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { ovl__34E0(0xFF); }
	f__B4E0_0380_002E_C642();
}

/**
 * Decompiled function f__B4E0_0380_002E_C642()
 *
 * @name f__B4E0_0380_002E_C642
 * @implements B4E0:0380:002E:C642 ()
 *
 * Called From: B4E0:0380:002F:ED25
 */
void f__B4E0_0380_002E_C642()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x38), 0x31);
	if (!emu_flags.zf) { f__B4E0_03B0_000F_D8ED(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, 0x8);
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x2C), emu_ax.l);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x2A), emu_ax.l);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x26), emu_ax.l);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x03AE); emu_cs = 0x34A2; ovl__34A2(0);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { ovl__34E0(0xFF); }
	f__B4E0_03AE_0011_F434();
}

/**
 * Decompiled function f__B4E0_0382_002C_0F24()
 *
 * @name f__B4E0_0382_002C_0F24
 * @implements B4E0:0382:002C:0F24 ()
 *
 * Called From: B4E0:035C:002F:ED25
 */
void f__B4E0_0382_002C_0F24()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x38), 0x31);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x03B0; emu_last_cs = 0xB4E0; emu_last_ip = 0x038A; emu_last_length = 0x002C; emu_last_crc = 0x0F24; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, 0x8);
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x2C), emu_ax.l);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x2A), emu_ax.l);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x26), emu_ax.l);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x03AE); emu_cs = 0x34A2; ovl__34A2(0);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { ovl__34E0(0xFF); }
	f__B4E0_03AE_0011_F434();
}

/**
 * Decompiled function f__B4E0_03AE_0011_F434()
 *
 * @name f__B4E0_03AE_0011_F434
 * @implements B4E0:03AE:0011:F434 ()
 *
 * Called From: B4E0:03AE:002C:0F24
 * Called From: B4E0:03AE:002E:C642
 */
void f__B4E0_03AE_0011_F434()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x4));
	emu_subw(&emu_ax.x, 0x3);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x803C), emu_ax.x);
	f__B4E0_0413_0005_A97A(); return;
}

/**
 * Decompiled function f__B4E0_03B0_000F_D8ED()
 *
 * @name f__B4E0_03B0_000F_D8ED
 * @implements B4E0:03B0:000F:D8ED ()
 *
 * Called From: B4E0:038A:002E:C642
 */
void f__B4E0_03B0_000F_D8ED()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x4));
	emu_subw(&emu_ax.x, 0x3);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x803C), emu_ax.x);
	f__B4E0_0413_0005_A97A(); return;
}

/**
 * Decompiled function f__B4E0_03BF_002A_1184()
 *
 * @name f__B4E0_03BF_002A_1184
 * @implements B4E0:03BF:002A:1184 ()
 *
 * Called From: B4E0:0318:001B:4F41
 */
void f__B4E0_03BF_002A_1184()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0x2E), 0x1100);
	if (!emu_flags.zf) { f__B4E0_03D1_0018_0BD3(); return; }
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x25CE), 0x0);
	if (emu_flags.zf) { f__B4E0_0413_0005_A97A(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x38), 0x31);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0413; emu_last_cs = 0xB4E0; emu_last_ip = 0x03D9; emu_last_length = 0x002A; emu_last_crc = 0x1184; emu_call(); return; }
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x03E9); emu_cs = 0x348B; emu_ip = 0x0034; emu_last_cs = 0xB4E0; emu_last_ip = 0x03E4; emu_last_length = 0x002A; emu_last_crc = 0x1184; emu_call();
	f__B4E0_03E9_0008_E3A2();
}

/**
 * Decompiled function f__B4E0_03D1_0018_0BD3()
 *
 * @name f__B4E0_03D1_0018_0BD3
 * @implements B4E0:03D1:0018:0BD3 ()
 *
 * Called From: B4E0:03C8:002A:1184
 */
void f__B4E0_03D1_0018_0BD3()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x38), 0x31);
	if (!emu_flags.zf) { f__B4E0_0413_0005_A97A(); return; }
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x03E9); emu_cs = 0x348B; ovl__348B(4);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { ovl__34E0(0xFF); }
	f__B4E0_03E9_0008_E3A2();
}

/**
 * Decompiled function f__B4E0_03E9_0008_E3A2()
 *
 * @name f__B4E0_03E9_0008_E3A2
 * @implements B4E0:03E9:0008:E3A2 ()
 *
 * Called From: B4E0:03E9:0018:0BD3
 */
void f__B4E0_03E9_0008_E3A2()
{
	emu_addws(&emu_sp, 0x6);
	emu_push(emu_cs);
	emu_push(0x03F1); f__B4E0_059B_001B_5C8D();
	f__B4E0_03F1_0009_FACE();
}

/**
 * Decompiled function f__B4E0_03F1_0009_FACE()
 *
 * @name f__B4E0_03F1_0009_FACE
 * @implements B4E0:03F1:0009:FACE ()
 *
 * Called From: B4E0:03F1:0008:E3A2
 */
void f__B4E0_03F1_0009_FACE()
{
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x03FA); f__B4E0_0847_0019_A380();
	f__B4E0_03FA_000A_A623();
}

/**
 * Decompiled function f__B4E0_03FA_000A_A623()
 *
 * @name f__B4E0_03FA_000A_A623
 * @implements B4E0:03FA:000A:A623 ()
 *
 * Called From: B4E0:03FA:0009:FACE
 */
void f__B4E0_03FA_000A_A623()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_ax.x, 0x841);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0404); emu_cs = 0x29E8; emu_Input_HandleInputSafe();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { ovl__34E0(0xFF); }
	f__B4E0_0404_000A_A523();
}

/**
 * Decompiled function f__B4E0_0404_000A_A523()
 *
 * @name f__B4E0_0404_000A_A523
 * @implements B4E0:0404:000A:A523 ()
 *
 * Called From: B4E0:0404:000A:A623
 */
void f__B4E0_0404_000A_A523()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_ax.x, 0x842);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x040E); emu_cs = 0x29E8; emu_Input_HandleInputSafe();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { ovl__34E0(0xFF); }
	f__B4E0_040E_0005_E871();
}

/**
 * Decompiled function f__B4E0_040E_0005_E871()
 *
 * @name f__B4E0_040E_0005_E871
 * @implements B4E0:040E:0005:E871 ()
 *
 * Called From: B4E0:040E:000A:A523
 */
void f__B4E0_040E_0005_E871()
{
	emu_pop(&emu_cx.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__B4E0_0418_0005_8BCF(); return;
}

/**
 * Decompiled function f__B4E0_0411_0002_C2BA()
 *
 * @name f__B4E0_0411_0002_C2BA
 * @implements B4E0:0411:0002:C2BA ()
 *
 * Called From: B4E0:0416:0005:A97A
 */
void f__B4E0_0411_0002_C2BA()
{
	f__B4E0_0418_0005_8BCF(); return;
}

/**
 * Decompiled function f__B4E0_0413_0005_A97A()
 *
 * @name f__B4E0_0413_0005_A97A
 * @implements B4E0:0413:0005:A97A ()
 *
 * Called From: B4E0:03BD:0011:F434
 * Called From: B4E0:03BD:000F:D8ED
 * Called From: B4E0:03CF:002A:1184
 * Called From: B4E0:03D9:0018:0BD3
 */
void f__B4E0_0413_0005_A97A()
{
	emu_movw(&emu_ax.x, 0x1);
	f__B4E0_0411_0002_C2BA(); return;
}

/**
 * Decompiled function f__B4E0_0418_0005_8BCF()
 *
 * @name f__B4E0_0418_0005_8BCF
 * @implements B4E0:0418:0005:8BCF ()
 *
 * Called From: B4E0:0411:0002:C2BA
 * Called From: B4E0:0411:0005:E871
 */
void f__B4E0_0418_0005_8BCF()
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
 * Decompiled function f__B4E0_041D_0017_C8A5()
 *
 * @name f__B4E0_041D_0017_C8A5
 * @implements B4E0:041D:0017:C8A5 ()
 *
 * Called From: B4E0:00C2:0009:B94B
 * Called From: B4E0:082E:000A:A4FC
 */
void f__B4E0_041D_0017_C8A5()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0xE);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0x6), 0x0);
	if (emu_flags.zf) { f__B4E0_0488_000A_5823(); return; }
	emu_movw(&emu_ax.x, 0x3);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0434); emu_cs = 0x252E; f__252E_0001_0018_08B3();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { ovl__34E0(0xFF); }
	f__B4E0_0434_0036_4669();
}

/**
 * Decompiled function f__B4E0_0434_0036_4669()
 *
 * @name f__B4E0_0434_0036_4669
 * @implements B4E0:0434:0036:4669 ()
 *
 * Called From: B4E0:0434:0017:C8A5
 */
void f__B4E0_0434_0036_4669()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x25D2), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x25D0), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x803E), 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x803C), 0x0);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3A38));
	emu_movw(&emu_dx.x, 0x1E);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, emu_bx.x,  0x37F8));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x0));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x25D6);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x8040);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x046A); emu_cs = 0x01F7; f__01F7_378D_0020_0F64();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { ovl__34E0(0xFF); }
	f__B4E0_046A_000D_05BD();
}

/**
 * Decompiled function f__B4E0_046A_000D_05BD()
 *
 * @name f__B4E0_046A_000D_05BD
 * @implements B4E0:046A:000D:05BD ()
 *
 * Called From: B4E0:046A:0036:4669
 */
void f__B4E0_046A_000D_05BD()
{
	emu_addws(&emu_sp, 0xA);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x8040);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0477); emu_cs = 0x0642; f__0642_075D_0011_C164();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { ovl__34E0(0xFF); }
	f__B4E0_0477_000E_69F3();
}

/**
 * Decompiled function f__B4E0_0477_000E_69F3()
 *
 * @name f__B4E0_0477_000E_69F3
 * @implements B4E0:0477:000E:69F3 ()
 *
 * Called From: B4E0:0477:000D:05BD
 */
void f__B4E0_0477_000E_69F3()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x8040);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0485); emu_cs = 0x01F7; f__01F7_38F6_0029_8B99();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { ovl__34E0(0xFF); }
	f__B4E0_0485_000D_4C66();
}

/**
 * Decompiled function f__B4E0_0485_000D_4C66()
 *
 * @name f__B4E0_0485_000D_4C66
 * @implements B4E0:0485:000D:4C66 ()
 *
 * Called From: B4E0:0485:000E:69F3
 */
void f__B4E0_0485_000D_4C66()
{
	emu_addws(&emu_sp, 0x8);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x8040);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0492); emu_cs = 0x34B1; ovl__34B1(0);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { ovl__34E0(0xFF); }
	f__B4E0_0492_0022_B650();
}

/**
 * Decompiled function f__B4E0_0488_000A_5823()
 *
 * @name f__B4E0_0488_000A_5823
 * @implements B4E0:0488:000A:5823 ()
 *
 * Called From: B4E0:0429:0017:C8A5
 */
void f__B4E0_0488_000A_5823()
{
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x8040);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0492); emu_cs = 0x34B1; ovl__34B1(0);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { ovl__34E0(0xFF); }
	f__B4E0_0492_0022_B650();
}

/**
 * Decompiled function f__B4E0_0492_0022_B650()
 *
 * @name f__B4E0_0492_0022_B650
 * @implements B4E0:0492:0022:B650 ()
 *
 * Called From: B4E0:0492:000D:4C66
 * Called From: B4E0:0492:000A:5823
 */
void f__B4E0_0492_0022_B650()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_di, emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6CE1));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6CDF));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x25D2));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x25D0));
	emu_movw(&emu_ax.x, 0x454D);
	emu_movw(&emu_dx.x, 0x414E);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x04B4); emu_cs = 0x34B1; ovl__34B1(1);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { ovl__34E0(0xFF); }
	f__B4E0_04B4_000F_0749();
}

/**
 * Decompiled function f__B4E0_04B4_000F_0749()
 *
 * @name f__B4E0_04B4_000F_0749
 * @implements B4E0:04B4:000F:0749 ()
 *
 * Called From: B4E0:04B4:0022:B650
 */
void f__B4E0_04B4_000F_0749()
{
	emu_addws(&emu_sp, 0xE);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x04C3); emu_cs = 0x34B1; ovl__34B1(4);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { ovl__34E0(0xFF); }
	f__B4E0_04C3_0020_26EC();
}

/**
 * Decompiled function f__B4E0_04C3_0020_26EC()
 *
 * @name f__B4E0_04C3_0020_26EC
 * @implements B4E0:04C3:0020:26EC ()
 *
 * Called From: B4E0:04C3:000F:0749
 */
void f__B4E0_04C3_0020_26EC()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x803A), 0x0);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x25D2));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x25D0));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_dx.x);
	f__B4E0_0542_0022_EF7C(); return;
}

/**
 * Decompiled function f__B4E0_04E3_002F_1851()
 *
 * @name f__B4E0_04E3_002F_1851
 * @implements B4E0:04E3:002F:1851 ()
 *
 * Called From: B4E0:0552:0022:EF7C
 * Called From: B4E0:0552:003C:6C9E
 */
void f__B4E0_04E3_002F_1851()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x0));
	emu_movb(&emu_ax.h, 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_cwd();
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax.x);
	emu_adcw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_dx.x);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_movw(&emu_es, emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_addw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0xFFFF));
	emu_movb(&emu_ax.h, 0x0);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x38B2));
	emu_incw(&emu_dx.x);
	emu_cmpw(&emu_ax.x, emu_dx.x);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__B4E0_0528_003C_6C9E(); return; }
	f__B4E0_051C_000C_911E(); return;
}

/**
 * Decompiled function f__B4E0_0512_0016_1B8D()
 *
 * @name f__B4E0_0512_0016_1B8D
 * @implements B4E0:0512:0016:1B8D ()
 *
 * Called From: B4E0:0524:000C:911E
 * Called From: B4E0:0524:0016:1B8D
 */
void f__B4E0_0512_0016_1B8D()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0x0);
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_decw(&emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.zf) { f__B4E0_0512_0016_1B8D(); return; }
	f__B4E0_0542_0022_EF7C(); return;
}

/**
 * Decompiled function f__B4E0_051C_000C_911E()
 *
 * @name f__B4E0_051C_000C_911E
 * @implements B4E0:051C:000C:911E ()
 *
 * Called From: B4E0:0510:002F:1851
 */
void f__B4E0_051C_000C_911E()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_decw(&emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.zf) { f__B4E0_0512_0016_1B8D(); return; }
	/* Unresolved jump */ emu_ip = 0x0542; emu_last_cs = 0xB4E0; emu_last_ip = 0x0526; emu_last_length = 0x000C; emu_last_crc = 0x911E; emu_call();
}

/**
 * Decompiled function f__B4E0_0528_003C_6C9E()
 *
 * @name f__B4E0_0528_003C_6C9E
 * @implements B4E0:0528:003C:6C9E ()
 *
 * Called From: B4E0:050E:002F:1851
 */
void f__B4E0_0528_003C_6C9E()
{
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_movw(&emu_es, emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_addw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ss, emu_bp, -0xE));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0xFFFF), emu_ax.l);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_ax.x);
	emu_incw(&emu_get_memory16(emu_ds, 0x00,  0x803A));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if ((emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x04E3; emu_last_cs = 0xB4E0; emu_last_ip = 0x054B; emu_last_length = 0x003C; emu_last_crc = 0x6C9E; emu_call(); return; }
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0554; emu_last_cs = 0xB4E0; emu_last_ip = 0x054D; emu_last_length = 0x003C; emu_last_crc = 0x6C9E; emu_call(); return; }
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	if (emu_flags.cf) { f__B4E0_04E3_002F_1851(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x25D2));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x25D0));
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x804F), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x804D), emu_dx.x);
	/* Unresolved jump */ emu_ip = 0x0568; emu_last_cs = 0xB4E0; emu_last_ip = 0x0562; emu_last_length = 0x003C; emu_last_crc = 0x6C9E; emu_call();
}

/**
 * Decompiled function f__B4E0_0542_0022_EF7C()
 *
 * @name f__B4E0_0542_0022_EF7C
 * @implements B4E0:0542:0022:EF7C ()
 *
 * Called From: B4E0:04E1:0020:26EC
 * Called From: B4E0:0526:0016:1B8D
 */
void f__B4E0_0542_0022_EF7C()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if ((emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x04E3; emu_last_cs = 0xB4E0; emu_last_ip = 0x054B; emu_last_length = 0x0022; emu_last_crc = 0xEF7C; emu_call(); return; }
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0554; emu_last_cs = 0xB4E0; emu_last_ip = 0x054D; emu_last_length = 0x0022; emu_last_crc = 0xEF7C; emu_call(); return; }
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	if (emu_flags.cf) { f__B4E0_04E3_002F_1851(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x25D2));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x25D0));
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x804F), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x804D), emu_dx.x);
	f__B4E0_0568_0010_4671(); return;
}

/**
 * Decompiled function f__B4E0_0568_0010_4671()
 *
 * @name f__B4E0_0568_0010_4671
 * @implements B4E0:0568:0010:4671 ()
 *
 * Called From: B4E0:0562:0022:EF7C
 */
void f__B4E0_0568_0010_4671()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x804D));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x0));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0564; emu_last_cs = 0xB4E0; emu_last_ip = 0x0572; emu_last_length = 0x0010; emu_last_crc = 0x4671; emu_call(); return; }
	emu_xorw(&emu_si, emu_si);
	f__B4E0_058F_000C_487E(); return;
}

/**
 * Decompiled function f__B4E0_0578_000D_76A5()
 *
 * @name f__B4E0_0578_000D_76A5
 * @implements B4E0:0578:000D:76A5 ()
 *
 * Called From: B4E0:0593:000C:487E
 * Called From: B4E0:0593:0016:94CD
 */
void f__B4E0_0578_000D_76A5()
{
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x804F));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x804D));
	emu_push(emu_cs);
	emu_push(0x0585); f__B4E0_0B35_0010_5ED9();
	f__B4E0_0585_0016_94CD();
}

/**
 * Decompiled function f__B4E0_0585_0016_94CD()
 *
 * @name f__B4E0_0585_0016_94CD
 * @implements B4E0:0585:0016:94CD ()
 *
 * Called From: B4E0:0585:000D:76A5
 */
void f__B4E0_0585_0016_94CD()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x804F), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x804D), emu_ax.x);
	emu_incw(&emu_si);
	emu_cmpw(&emu_si, emu_get_memory16(emu_ds, 0x00,  0x803E));
	if (emu_flags.cf) { f__B4E0_0578_000D_76A5(); return; }
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
 * Decompiled function f__B4E0_058F_000C_487E()
 *
 * @name f__B4E0_058F_000C_487E
 * @implements B4E0:058F:000C:487E ()
 *
 * Called From: B4E0:0576:0010:4671
 */
void f__B4E0_058F_000C_487E()
{
	emu_cmpw(&emu_si, emu_get_memory16(emu_ds, 0x00,  0x803E));
	if (emu_flags.cf) { f__B4E0_0578_000D_76A5(); return; }
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
 * Decompiled function f__B4E0_059B_001B_5C8D()
 *
 * @name f__B4E0_059B_001B_5C8D
 * @implements B4E0:059B:001B:5C8D ()
 *
 * Called From: B4E0:03EE:0008:E3A2
 */
void f__B4E0_059B_001B_5C8D()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x2C);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_di, emu_get_memory16(emu_ds, 0x00,  0x803C));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x804F));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x804D));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x14), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x16), emu_dx.x);
	f__B4E0_05C9_0016_55D4(); return;
}

/**
 * Decompiled function f__B4E0_05B6_000B_511B()
 *
 * @name f__B4E0_05B6_000B_511B
 * @implements B4E0:05B6:000B:511B ()
 *
 * Called From: B4E0:05CE:0016:55D4
 * Called From: B4E0:05CE:001E:A8B8
 */
void f__B4E0_05B6_000B_511B()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x16));
	emu_push(emu_cs);
	emu_push(0x05C1); f__B4E0_0B35_0010_5ED9();
	f__B4E0_05C1_001E_A8B8();
}

/**
 * Decompiled function f__B4E0_05C1_001E_A8B8()
 *
 * @name f__B4E0_05C1_001E_A8B8
 * @implements B4E0:05C1:001E:A8B8 ()
 *
 * Called From: B4E0:05C1:000B:511B
 */
void f__B4E0_05C1_001E_A8B8()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x14), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x16), emu_ax.x);
	emu_movw(&emu_ax.x, emu_di);
	emu_decw(&emu_di);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.zf) { f__B4E0_05B6_000B_511B(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x16));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x5), 0x30);
	if (!emu_flags.zf) { f__B4E0_05DF_0021_C9E6(); return; }
	emu_movw(&emu_ax.x, 0x1);
	f__B4E0_05E1_001F_D0A6(); return;
}

/**
 * Decompiled function f__B4E0_05C9_0016_55D4()
 *
 * @name f__B4E0_05C9_0016_55D4
 * @implements B4E0:05C9:0016:55D4 ()
 *
 * Called From: B4E0:05B4:001B:5C8D
 */
void f__B4E0_05C9_0016_55D4()
{
	emu_movw(&emu_ax.x, emu_di);
	emu_decw(&emu_di);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.zf) { f__B4E0_05B6_000B_511B(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x16));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x5), 0x30);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x05DF; emu_last_cs = 0xB4E0; emu_last_ip = 0x05D8; emu_last_length = 0x0016; emu_last_crc = 0x55D4; emu_call(); return; }
	emu_movw(&emu_ax.x, 0x1);
	/* Unresolved jump */ emu_ip = 0x05E1; emu_last_cs = 0xB4E0; emu_last_ip = 0x05DD; emu_last_length = 0x0016; emu_last_crc = 0x55D4; emu_call();
}

/**
 * Decompiled function f__B4E0_05DF_0021_C9E6()
 *
 * @name f__B4E0_05DF_0021_C9E6
 * @implements B4E0:05DF:0021:C9E6 ()
 *
 * Called From: B4E0:05D8:001E:A8B8
 */
void f__B4E0_05DF_0021_C9E6()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x1C), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x16));
	emu_incw(&emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x1E), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x20), emu_dx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x20));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x2));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_push(emu_cs); emu_push(0x0600); emu_cs = 0x2BC0; f__2BC0_0004_000F_950B();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { ovl__34E0(0xFF); }
	f__B4E0_0600_0012_17E4();
}

/**
 * Decompiled function f__B4E0_05E1_001F_D0A6()
 *
 * @name f__B4E0_05E1_001F_D0A6
 * @implements B4E0:05E1:001F:D0A6 ()
 *
 * Called From: B4E0:05DD:001E:A8B8
 */
void f__B4E0_05E1_001F_D0A6()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x1C), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x16));
	emu_incw(&emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x1E), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x20), emu_dx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x20));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x2));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_push(emu_cs); emu_push(0x0600); emu_cs = 0x2BC0; f__2BC0_0004_000F_950B();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { ovl__34E0(0xFF); }
	f__B4E0_0600_0012_17E4();
}

/**
 * Decompiled function f__B4E0_0600_0012_17E4()
 *
 * @name f__B4E0_0600_0012_17E4
 * @implements B4E0:0600:0012:17E4 ()
 *
 * Called From: B4E0:0600:001F:D0A6
 * Called From: B4E0:0600:0021:C9E6
 */
void f__B4E0_0600_0012_17E4()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x18), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x1A), emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x8040);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0612); emu_cs = 0x34B1; ovl__34B1(0);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { ovl__34E0(0xFF); }
	f__B4E0_0612_001E_F6FB();
}

/**
 * Decompiled function f__B4E0_0612_001E_F6FB()
 *
 * @name f__B4E0_0612_001E_F6FB
 * @implements B4E0:0612:001E:F6FB ()
 *
 * Called From: B4E0:0612:0012:17E4
 */
void f__B4E0_0612_001E_F6FB()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_si, emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_movw(&emu_dx.x, 0xC);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0x2C);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x4F46);
	emu_movw(&emu_dx.x, 0x4E49);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x0630); emu_cs = 0x34B1; ovl__34B1(1);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { ovl__34E0(0xFF); }
	f__B4E0_0630_0009_02A3();
}

/**
 * Decompiled function f__B4E0_0630_0009_02A3()
 *
 * @name f__B4E0_0630_0009_02A3
 * @implements B4E0:0630:0009:02A3 ()
 *
 * Called From: B4E0:0630:001E:F6FB
 */
void f__B4E0_0630_0009_02A3()
{
	emu_addws(&emu_sp, 0xE);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x0639); emu_cs = 0x34B1; ovl__34B1(4);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { ovl__34E0(0xFF); }
	f__B4E0_0639_000C_36ED();
}

/**
 * Decompiled function f__B4E0_0639_000C_36ED()
 *
 * @name f__B4E0_0639_000C_36ED
 * @implements B4E0:0639:000C:36ED ()
 *
 * Called From: B4E0:0639:0009:02A3
 */
void f__B4E0_0639_000C_36ED()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x26));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x28));
	emu_push(emu_cs); emu_push(0x0645); emu_cs = 0x2BC0; f__2BC0_0004_000F_950B();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { ovl__34E0(0xFF); }
	f__B4E0_0645_0013_A738();
}

/**
 * Decompiled function f__B4E0_0645_0013_A738()
 *
 * @name f__B4E0_0645_0013_A738
 * @implements B4E0:0645:0013:A738 ()
 *
 * Called From: B4E0:0645:000C:36ED
 */
void f__B4E0_0645_0013_A738()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x26), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x28), emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x22));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x24));
	emu_push(emu_cs); emu_push(0x0658); emu_cs = 0x2BC0; f__2BC0_0004_000F_950B();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { ovl__34E0(0xFF); }
	f__B4E0_0658_0024_52EC();
}

/**
 * Decompiled function f__B4E0_0658_0024_52EC()
 *
 * @name f__B4E0_0658_0024_52EC
 * @implements B4E0:0658:0024:52EC ()
 *
 * Called From: B4E0:0658:0013:A738
 */
void f__B4E0_0658_0024_52EC()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x22), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x24), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x38DC));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x38DA));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), emu_dx.x);
	emu_movw(&emu_ax.x, 0x3);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x067C); emu_cs = 0x252E; f__252E_0001_0018_08B3();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { ovl__34E0(0xFF); }
	f__B4E0_067C_0015_539F();
}

/**
 * Decompiled function f__B4E0_067C_0015_539F()
 *
 * @name f__B4E0_067C_0015_539F
 * @implements B4E0:067C:0015:539F ()
 *
 * Called From: B4E0:067C:0024:52EC
 */
void f__B4E0_067C_0015_539F()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_ax.x);
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x8040);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0691); emu_cs = 0x1FB5; f__1FB5_01FA_0010_F89C();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { ovl__34E0(0xFF); }
	f__B4E0_0691_0014_6B8A();
}

/**
 * Decompiled function f__B4E0_0691_0014_6B8A()
 *
 * @name f__B4E0_0691_0014_6B8A
 * @implements B4E0:0691:0014:6B8A ()
 *
 * Called From: B4E0:0691:0015:539F
 */
void f__B4E0_0691_0014_6B8A()
{
	emu_addws(&emu_sp, 0x6);
	emu_movw(&emu_si, emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x18));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x1A));
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x06A5); emu_cs = 0x1FB5; f__1FB5_1207_001B_2A6C();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { ovl__34E0(0xFF); }
	f__B4E0_06A5_0015_76F1();
}

/**
 * Decompiled function f__B4E0_06A5_0015_76F1()
 *
 * @name f__B4E0_06A5_0015_76F1
 * @implements B4E0:06A5:0015:76F1 ()
 *
 * Called From: B4E0:06A5:0014:6B8A
 */
void f__B4E0_06A5_0015_76F1()
{
	emu_addws(&emu_sp, 0x8);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x22));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x24));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x06BA); emu_cs = 0x1FB5; f__1FB5_0AEC_001B_A5E4();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { ovl__34E0(0xFF); }
	f__B4E0_06BA_0014_7316();
}

/**
 * Decompiled function f__B4E0_06BA_0014_7316()
 *
 * @name f__B4E0_06BA_0014_7316
 * @implements B4E0:06BA:0014:7316 ()
 *
 * Called From: B4E0:06BA:0015:76F1
 */
void f__B4E0_06BA_0014_7316()
{
	emu_addws(&emu_sp, 0xA);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_cs); emu_push(0x06CE); emu_cs = 0x2502; f__2502_00FA_0009_9EB2();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { ovl__34E0(0xFF); }
	f__B4E0_06CE_0014_F31D();
}

/**
 * Decompiled function f__B4E0_06CE_0014_F31D()
 *
 * @name f__B4E0_06CE_0014_F31D
 * @implements B4E0:06CE:0014:F31D ()
 *
 * Called From: B4E0:06CE:0014:7316
 */
void f__B4E0_06CE_0014_F31D()
{
	emu_addws(&emu_sp, 0x8);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x06E2); emu_cs = 0x2502; f__2502_0008_0015_FFBD();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { ovl__34E0(0xFF); }
	f__B4E0_06E2_0009_2601();
}

/**
 * Decompiled function f__B4E0_06E2_0009_2601()
 *
 * @name f__B4E0_06E2_0009_2601
 * @implements B4E0:06E2:0009:2601 ()
 *
 * Called From: B4E0:06E2:0014:F31D
 */
void f__B4E0_06E2_0009_2601()
{
	emu_addws(&emu_sp, 0x8);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x06EB); emu_cs = 0x1FB5; f__1FB5_09C7_0018_922D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { ovl__34E0(0xFF); }
	f__B4E0_06EB_0003_CA9A();
}

/**
 * Decompiled function f__B4E0_06EB_0003_CA9A()
 *
 * @name f__B4E0_06EB_0003_CA9A
 * @implements B4E0:06EB:0003:CA9A ()
 *
 * Called From: B4E0:06EB:0009:2601
 */
void f__B4E0_06EB_0003_CA9A()
{
	emu_pop(&emu_cx.x);
	f__B4E0_06F1_0020_15C1(); return;
}

/**
 * Decompiled function f__B4E0_06EE_0023_F430()
 *
 * @name f__B4E0_06EE_0023_F430
 * @implements B4E0:06EE:0023:F430 ()
 *
 * Called From: B4E0:0701:0020:15C1
 * Called From: B4E0:0701:0023:F430
 */
void f__B4E0_06EE_0023_F430()
{
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0x2A);
	if (emu_flags.zf) { f__B4E0_0703_000E_76D9(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0x3F);
	if (!emu_flags.zf) { f__B4E0_06EE_0023_F430(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0x2A);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0711; emu_last_cs = 0xB4E0; emu_last_ip = 0x070A; emu_last_length = 0x0023; emu_last_crc = 0xF430; emu_call(); return; }
	emu_movw(&emu_ax.x, 0x1);
	/* Unresolved jump */ emu_ip = 0x0713; emu_last_cs = 0xB4E0; emu_last_ip = 0x070F; emu_last_length = 0x0023; emu_last_crc = 0xF430; emu_call();
}

/**
 * Decompiled function f__B4E0_06F1_0020_15C1()
 *
 * @name f__B4E0_06F1_0020_15C1
 * @implements B4E0:06F1:0020:15C1 ()
 *
 * Called From: B4E0:06EC:0003:CA9A
 */
void f__B4E0_06F1_0020_15C1()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0x2A);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0703; emu_last_cs = 0xB4E0; emu_last_ip = 0x06F8; emu_last_length = 0x0020; emu_last_crc = 0x15C1; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0x3F);
	if (!emu_flags.zf) { f__B4E0_06EE_0023_F430(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0x2A);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0711; emu_last_cs = 0xB4E0; emu_last_ip = 0x070A; emu_last_length = 0x0020; emu_last_crc = 0x15C1; emu_call(); return; }
	emu_movw(&emu_ax.x, 0x1);
	/* Unresolved jump */ emu_ip = 0x0713; emu_last_cs = 0xB4E0; emu_last_ip = 0x070F; emu_last_length = 0x0020; emu_last_crc = 0x15C1; emu_call();
}

/**
 * Decompiled function f__B4E0_0703_000E_76D9()
 *
 * @name f__B4E0_0703_000E_76D9
 * @implements B4E0:0703:000E:76D9 ()
 *
 * Called From: B4E0:06F8:0023:F430
 */
void f__B4E0_0703_000E_76D9()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0x2A);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0711; emu_last_cs = 0xB4E0; emu_last_ip = 0x070A; emu_last_length = 0x000E; emu_last_crc = 0x76D9; emu_call(); return; }
	emu_movw(&emu_ax.x, 0x1);
	f__B4E0_0713_0016_4D4D(); return;
}

/**
 * Decompiled function f__B4E0_0713_0016_4D4D()
 *
 * @name f__B4E0_0713_0016_4D4D
 * @implements B4E0:0713:0016:4D4D ()
 *
 * Called From: B4E0:070F:000E:76D9
 */
void f__B4E0_0713_0016_4D4D()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x12), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0x0);
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x1C), 0x0);
	if (!emu_flags.zf) { f__B4E0_0729_004D_2BC6(); return; }
	f__B4E0_07BC_000E_9359(); return;
}

/**
 * Decompiled function f__B4E0_0729_004D_2BC6()
 *
 * @name f__B4E0_0729_004D_2BC6
 * @implements B4E0:0729:004D:2BC6 ()
 *
 * Called From: B4E0:0724:0016:4D4D
 */
void f__B4E0_0729_004D_2BC6()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x0));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_addw(&emu_ax.x, 0xFFD0);
	emu_movw(&emu_di, emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), emu_ds);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), 0x8D0D);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x0);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x38DC));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x38DA));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_dx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3A38));
	emu_movw(&emu_dx.x, 0x1E);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, emu_bx.x,  0x37F8));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x0));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x25DF);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x9939);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0776); emu_cs = 0x01F7; f__01F7_378D_0020_0F64();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { ovl__34E0(0xFF); }
	f__B4E0_0776_0024_4F14();
}

/**
 * Decompiled function f__B4E0_0776_0024_4F14()
 *
 * @name f__B4E0_0776_0024_4F14
 * @implements B4E0:0776:0024:4F14 ()
 *
 * Called From: B4E0:0776:004D:2BC6
 */
void f__B4E0_0776_0024_4F14()
{
	emu_addws(&emu_sp, 0xA);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x38DE));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x38B2));
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_addw(&emu_ax.x, 0x4);
	emu_addw(&emu_ax.x, emu_di);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x9939);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x079A); emu_cs = 0x0642; f__0642_075D_0011_C164();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { ovl__34E0(0xFF); }
	f__B4E0_079A_0009_DAE3();
}

/**
 * Decompiled function f__B4E0_079A_0009_DAE3()
 *
 * @name f__B4E0_079A_0009_DAE3
 * @implements B4E0:079A:0009:DAE3 ()
 *
 * Called From: B4E0:079A:0024:4F14
 */
void f__B4E0_079A_0009_DAE3()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x07A3); emu_cs = 0x0FCB; f__0FCB_0088_0016_2DD9();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { ovl__34E0(0xFF); }
	f__B4E0_07A3_0014_EB5E();
}

/**
 * Decompiled function f__B4E0_07A3_0014_EB5E()
 *
 * @name f__B4E0_07A3_0014_EB5E
 * @implements B4E0:07A3:0014:EB5E ()
 *
 * Called From: B4E0:07A3:0009:DAE3
 */
void f__B4E0_07A3_0014_EB5E()
{
	emu_addws(&emu_sp, 0xC);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs); emu_push(0x07B7); emu_cs = 0x2502; f__2502_0008_0015_FFBD();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { ovl__34E0(0xFF); }
	f__B4E0_07B7_0005_9E2E();
}

/**
 * Decompiled function f__B4E0_07B7_0005_9E2E()
 *
 * @name f__B4E0_07B7_0005_9E2E
 * @implements B4E0:07B7:0005:9E2E ()
 *
 * Called From: B4E0:07B7:0014:EB5E
 */
void f__B4E0_07B7_0005_9E2E()
{
	emu_addws(&emu_sp, 0x8);
	f__B4E0_07F2_0022_B89A(); return;
}

/**
 * Decompiled function f__B4E0_07BC_000E_9359()
 *
 * @name f__B4E0_07BC_000E_9359
 * @implements B4E0:07BC:000E:9359 ()
 *
 * Called From: B4E0:0726:0016:4D4D
 */
void f__B4E0_07BC_000E_9359()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_dx.x);
	f__B4E0_07CD_0047_7CA3(); return;
}

/**
 * Decompiled function f__B4E0_07CA_004A_BB40()
 *
 * @name f__B4E0_07CA_004A_BB40
 * @implements B4E0:07CA:004A:BB40 ()
 *
 * Called From: B4E0:07DD:0047:7CA3
 * Called From: B4E0:07DD:004A:BB40
 */
void f__B4E0_07CA_004A_BB40()
{
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0x0);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x07DF; emu_last_cs = 0xB4E0; emu_last_ip = 0x07D4; emu_last_length = 0x004A; emu_last_crc = 0xBB40; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0xC);
	if (!emu_flags.zf) { f__B4E0_07CA_004A_BB40(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0x0);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x07F2; emu_last_cs = 0xB4E0; emu_last_ip = 0x07E6; emu_last_length = 0x004A; emu_last_crc = 0xBB40; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0x0);
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x8028));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x8026));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_push(emu_cs); emu_push(0x0814); emu_cs = 0x34DA; ovl__34DA(4);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { ovl__34E0(0xFF); }
	f__B4E0_0814_0013_6B81();
}

/**
 * Decompiled function f__B4E0_07CD_0047_7CA3()
 *
 * @name f__B4E0_07CD_0047_7CA3
 * @implements B4E0:07CD:0047:7CA3 ()
 *
 * Called From: B4E0:07C8:000E:9359
 */
void f__B4E0_07CD_0047_7CA3()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0x0);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x07DF; emu_last_cs = 0xB4E0; emu_last_ip = 0x07D4; emu_last_length = 0x0047; emu_last_crc = 0x7CA3; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0xC);
	if (!emu_flags.zf) { f__B4E0_07CA_004A_BB40(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0x0);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x07F2; emu_last_cs = 0xB4E0; emu_last_ip = 0x07E6; emu_last_length = 0x0047; emu_last_crc = 0x7CA3; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0x0);
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x8028));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x8026));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x10));
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x0814); emu_cs = 0x34DA; emu_ip = 0x0034; emu_last_cs = 0xB4E0; emu_last_ip = 0x080F; emu_last_length = 0x0047; emu_last_crc = 0x7CA3; emu_call();
	f__B4E0_0814_0013_6B81();
}

/**
 * Decompiled function f__B4E0_07F2_0022_B89A()
 *
 * @name f__B4E0_07F2_0022_B89A
 * @implements B4E0:07F2:0022:B89A ()
 *
 * Called From: B4E0:07BA:0005:9E2E
 */
void f__B4E0_07F2_0022_B89A()
{
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x8028));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x8026));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_push(emu_cs); emu_push(0x0814); emu_cs = 0x34DA; ovl__34DA(4);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { ovl__34E0(0xFF); }
	f__B4E0_0814_0013_6B81();
}

/**
 * Decompiled function f__B4E0_0814_0013_6B81()
 *
 * @name f__B4E0_0814_0013_6B81
 * @implements B4E0:0814:0013:6B81 ()
 *
 * Called From: 261F:01B9:001B:EDBF
 */
void f__B4E0_0814_0013_6B81()
{
	emu_addws(&emu_sp, 0x12);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x8028));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x8026));
	emu_push(emu_cs); emu_push(0x0827); emu_cs = 0x348B; ovl__348B(4);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { ovl__34E0(0xFF); }
	f__B4E0_0827_000A_A4FC();
}

/**
 * Decompiled function f__B4E0_0827_000A_A4FC()
 *
 * @name f__B4E0_0827_000A_A4FC
 * @implements B4E0:0827:000A:A4FC ()
 *
 * Called From: 261F:01B9:001B:EDBF
 */
void f__B4E0_0827_000A_A4FC()
{
	emu_addws(&emu_sp, 0x6);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x0831); f__B4E0_041D_0017_C8A5();
	f__B4E0_0831_0006_5C12();
}

/**
 * Decompiled function f__B4E0_0831_0006_5C12()
 *
 * @name f__B4E0_0831_0006_5C12
 * @implements B4E0:0831:0006:5C12 ()
 *
 * Called From: B4E0:0831:000A:A4FC
 */
void f__B4E0_0831_0006_5C12()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_cs);
	emu_push(0x0837); f__B4E0_0B86_001E_9967();
	f__B4E0_0837_0009_78DC();
}

/**
 * Decompiled function f__B4E0_0837_0009_78DC()
 *
 * @name f__B4E0_0837_0009_78DC
 * @implements B4E0:0837:0009:78DC ()
 *
 * Called From: B4E0:0837:0006:5C12
 */
void f__B4E0_0837_0009_78DC()
{
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x0840); f__B4E0_0847_0019_A380();
	f__B4E0_0840_0007_F77C();
}

/**
 * Decompiled function f__B4E0_0840_0007_F77C()
 *
 * @name f__B4E0_0840_0007_F77C
 * @implements B4E0:0840:0007:F77C ()
 *
 * Called From: B4E0:0840:0009:78DC
 */
void f__B4E0_0840_0007_F77C()
{
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
 * Decompiled function f__B4E0_0847_0019_A380()
 *
 * @name f__B4E0_0847_0019_A380
 * @implements B4E0:0847:0019:A380 ()
 *
 * Called From: B4E0:00CC:000A:AD03
 * Called From: B4E0:03F7:0009:FACE
 * Called From: B4E0:083D:0009:78DC
 * Called From: B4E0:0AA5:0008:1842
 */
void f__B4E0_0847_0019_A380()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0xA);
	emu_push(emu_si);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0x6), 0x0);
	if (!emu_flags.zf) { f__B4E0_0860_000F_95BC(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x803E));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x25D4));
	if (!emu_flags.zf) { f__B4E0_0860_000F_95BC(); return; }
	f__B4E0_0A81_0005_8BCF(); return;
}

/**
 * Decompiled function f__B4E0_0860_000F_95BC()
 *
 * @name f__B4E0_0860_000F_95BC
 * @implements B4E0:0860:000F:95BC ()
 *
 * Called From: B4E0:0852:0019:A380
 * Called From: B4E0:085B:0019:A380
 */
void f__B4E0_0860_000F_95BC()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x803E));
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x25D4), emu_ax.x);
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x086F); emu_cs = 0x2598; f__2598_0000_0017_EB80();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { ovl__34E0(0xFF); }
	f__B4E0_086F_000D_B232();
}

/**
 * Decompiled function f__B4E0_086F_000D_B232()
 *
 * @name f__B4E0_086F_000D_B232
 * @implements B4E0:086F:000D:B232 ()
 *
 * Called From: B4E0:086F:000F:95BC
 */
void f__B4E0_086F_000D_B232()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_ax.x);
	emu_movw(&emu_ax.x, 0x8);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x087C); emu_cs = 0x07AE; f__07AE_00E4_000D_9955();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { ovl__34E0(0xFF); }
	f__B4E0_087C_000A_3AF9();
}

/**
 * Decompiled function f__B4E0_087C_000A_3AF9()
 *
 * @name f__B4E0_087C_000A_3AF9
 * @implements B4E0:087C:000A:3AF9 ()
 *
 * Called From: B4E0:087C:000D:B232
 */
void f__B4E0_087C_000A_3AF9()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0886); emu_cs = 0x34DA; ovl__34DA(3);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { ovl__34E0(0xFF); }
	f__B4E0_0886_0027_44E5();
}

/**
 * Decompiled function f__B4E0_0886_0027_44E5()
 *
 * @name f__B4E0_0886_0027_44E5
 * @implements B4E0:0886:0027:44E5 ()
 *
 * Called From: 261F:01B9:001B:EDBF
 * Called From: B4E0:0886:000A:3AF9
 */
void f__B4E0_0886_0027_44E5()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_ax.x, 0x12);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0xC);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x992B));
	emu_addw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x992D));
	emu_movb(&emu_cx.l, 0x3);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_addw(&emu_ax.x, 0x10);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x30);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x08AD); emu_cs = 0x0FCB; f__0FCB_005F_001C_FDC4();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { ovl__34E0(0xFF); }
	f__B4E0_08AD_0008_0683();
}

/**
 * Decompiled function f__B4E0_08AD_0008_0683()
 *
 * @name f__B4E0_08AD_0008_0683
 * @implements B4E0:08AD:0008:0683 ()
 *
 * Called From: B4E0:08AD:0027:44E5
 */
void f__B4E0_08AD_0008_0683()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x08B5); emu_cs = 0x10E4; f__10E4_1EF1_0040_01F8();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { ovl__34E0(0xFF); }
	f__B4E0_08B5_001E_B55D();
}

/**
 * Decompiled function f__B4E0_08B5_001E_B55D()
 *
 * @name f__B4E0_08B5_001E_B55D
 * @implements B4E0:08B5:001E:B55D ()
 *
 * Called From: B4E0:08B5:0008:0683
 */
void f__B4E0_08B5_001E_B55D()
{
	emu_addws(&emu_sp, 0xE);
	emu_movw(&emu_ax.x, 0x11);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_cs); emu_push(0x08D3); emu_cs = 0x10E4; f__10E4_1EF1_0040_01F8();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { ovl__34E0(0xFF); }
	f__B4E0_08D3_0014_3673();
}

/**
 * Decompiled function f__B4E0_08D3_0014_3673()
 *
 * @name f__B4E0_08D3_0014_3673
 * @implements B4E0:08D3:0014:3673 ()
 *
 * Called From: B4E0:08D3:001E:B55D
 */
void f__B4E0_08D3_0014_3673()
{
	emu_addws(&emu_sp, 0xE);
	emu_movw(&emu_ax.x, 0x3);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x802C));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x802A));
	emu_push(emu_cs); emu_push(0x08E7); emu_cs = 0x348B; ovl__348B(3);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { ovl__34E0(0xFF); }
	f__B4E0_08E7_001B_AEC2();
}

/**
 * Decompiled function f__B4E0_08E7_001B_AEC2()
 *
 * @name f__B4E0_08E7_001B_AEC2
 * @implements B4E0:08E7:001B:AEC2 ()
 *
 * Called From: B4E0:08E7:0014:3673
 */
void f__B4E0_08E7_001B_AEC2()
{
	emu_addws(&emu_sp, 0x6);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x804F));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x804D));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_dx.x);
	emu_xorw(&emu_si, emu_si);
	f__B4E0_09D9_0008_BFCC(); return;
}

/**
 * Decompiled function f__B4E0_0902_005F_B97B()
 *
 * @name f__B4E0_0902_005F_B97B
 * @implements B4E0:0902:005F:B97B ()
 *
 * Called From: B4E0:09DE:0008:BFCC
 * Called From: B4E0:09DE:0011:A6F0
 */
void f__B4E0_0902_005F_B97B()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_addws(&emu_dx.x, 0x7);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x1A), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x18), emu_dx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x16), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x14), emu_dx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x12), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x10), emu_dx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x6), 0x30);
	if (!emu_flags.zf) { f__B4E0_0961_001F_94F8(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x1E), 0x10);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_ax.l, 0xB);
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x28), emu_ax.l);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x2A), emu_ax.l);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x26), emu_ax.l);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x38), 0x30);
	f__B4E0_0997_000E_6934(); return;
}

/**
 * Decompiled function f__B4E0_0961_001F_94F8()
 *
 * @name f__B4E0_0961_001F_94F8
 * @implements B4E0:0961:001F:94F8 ()
 *
 * Called From: B4E0:0934:005F:B97B
 */
void f__B4E0_0961_001F_94F8()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x1E), 0x18);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x38), 0x31);
	emu_cmpw(&emu_si, emu_get_memory16(emu_ds, 0x00,  0x803C));
	if (!emu_flags.zf) { f__B4E0_0980_0025_643A(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_ax.l, 0x8);
	f__B4E0_0985_0020_9A33(); return;
}

/**
 * Decompiled function f__B4E0_0980_0025_643A()
 *
 * @name f__B4E0_0980_0025_643A
 * @implements B4E0:0980:0025:643A ()
 *
 * Called From: B4E0:0977:001F:94F8
 */
void f__B4E0_0980_0025_643A()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_ax.l, 0xF);
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x28), emu_ax.l);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x2A), emu_ax.l);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x26), emu_ax.l);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x09A5); emu_cs = 0x348B; ovl__348B(4);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { ovl__34E0(0xFF); }
	f__B4E0_09A5_000E_4E9F();
}

/**
 * Decompiled function f__B4E0_0985_0020_9A33()
 *
 * @name f__B4E0_0985_0020_9A33
 * @implements B4E0:0985:0020:9A33 ()
 *
 * Called From: B4E0:097E:001F:94F8
 */
void f__B4E0_0985_0020_9A33()
{
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x28), emu_ax.l);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x2A), emu_ax.l);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x26), emu_ax.l);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x09A5); emu_cs = 0x348B; ovl__348B(4);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { ovl__34E0(0xFF); }
	f__B4E0_09A5_000E_4E9F();
}

/**
 * Decompiled function f__B4E0_0997_000E_6934()
 *
 * @name f__B4E0_0997_000E_6934
 * @implements B4E0:0997:000E:6934 ()
 *
 * Called From: B4E0:095F:005F:B97B
 */
void f__B4E0_0997_000E_6934()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x09A5); emu_cs = 0x348B; ovl__348B(4);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { ovl__34E0(0xFF); }
	f__B4E0_09A5_000E_4E9F();
}

/**
 * Decompiled function f__B4E0_09A5_000E_4E9F()
 *
 * @name f__B4E0_09A5_000E_4E9F
 * @implements B4E0:09A5:000E:4E9F ()
 *
 * Called From: 261F:01B9:001B:EDBF
 * Called From: B4E0:09A5:000E:6934
 * Called From: B4E0:09A5:0025:643A
 * Called From: B4E0:09A5:0020:9A33
 */
void f__B4E0_09A5_000E_4E9F()
{
	emu_addws(&emu_sp, 0x6);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x09B3); emu_cs = 0x34A2; ovl__34A2(0);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { ovl__34E0(0xFF); }
	f__B4E0_09B3_001D_8E21();
}

/**
 * Decompiled function f__B4E0_09B3_001D_8E21()
 *
 * @name f__B4E0_09B3_001D_8E21
 * @implements B4E0:09B3:001D:8E21 ()
 *
 * Called From: B4E0:09B3:000E:4E9F
 */
void f__B4E0_09B3_001D_8E21()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x2));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_dx.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs);
	emu_push(0x09D0); f__B4E0_0B35_0010_5ED9();
	f__B4E0_09D0_0011_A6F0();
}

/**
 * Decompiled function f__B4E0_09D0_0011_A6F0()
 *
 * @name f__B4E0_09D0_0011_A6F0
 * @implements B4E0:09D0:0011:A6F0 ()
 *
 * Called From: B4E0:09D0:001D:8E21
 */
void f__B4E0_09D0_0011_A6F0()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax.x);
	emu_incw(&emu_si);
	emu_cmpws(&emu_si, 0xB);
	if (!emu_flags.cf) { f__B4E0_09E1_001D_AE52(); return; }
	f__B4E0_0902_005F_B97B(); return;
}

/**
 * Decompiled function f__B4E0_09D9_0008_BFCC()
 *
 * @name f__B4E0_09D9_0008_BFCC
 * @implements B4E0:09D9:0008:BFCC ()
 *
 * Called From: B4E0:08FF:001B:AEC2
 */
void f__B4E0_09D9_0008_BFCC()
{
	emu_cmpws(&emu_si, 0xB);
	if (!emu_flags.cf) { /* Unresolved jump */ emu_ip = 0x09E1; emu_last_cs = 0xB4E0; emu_last_ip = 0x09DC; emu_last_length = 0x0008; emu_last_crc = 0xBFCC; emu_call(); return; }
	f__B4E0_0902_005F_B97B(); return;
}

/**
 * Decompiled function f__B4E0_09E1_001D_AE52()
 *
 * @name f__B4E0_09E1_001D_AE52
 * @implements B4E0:09E1:001D:AE52 ()
 *
 * Called From: B4E0:09DC:0011:A6F0
 */
void f__B4E0_09E1_001D_AE52()
{
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x803E));
	emu_movw(&emu_ax.x, 0xB);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x803A));
	emu_movw(&emu_ax.x, 0xF);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x802C));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x802A));
	emu_push(emu_cs); emu_push(0x09FE); emu_cs = 0x348B; ovl__348B(3);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { ovl__34E0(0xFF); }
	f__B4E0_09FE_000A_A85B();
}

/**
 * Decompiled function f__B4E0_09FE_000A_A85B()
 *
 * @name f__B4E0_09FE_000A_A85B
 * @implements B4E0:09FE:000A:A85B ()
 *
 * Called From: B4E0:09FE:001D:AE52
 */
void f__B4E0_09FE_000A_A85B()
{
	emu_addws(&emu_sp, 0x6);
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0A08); emu_cs = 0x3520; ovl__3520(9);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { ovl__34E0(0xFF); }
	f__B4E0_0A08_0014_3661();
}

/**
 * Decompiled function f__B4E0_0A08_0014_3661()
 *
 * @name f__B4E0_0A08_0014_3661
 * @implements B4E0:0A08:0014:3661 ()
 *
 * Called From: B4E0:0A08:000A:A85B
 */
void f__B4E0_0A08_0014_3661()
{
	emu_addws(&emu_sp, 0xA);
	emu_movw(&emu_ax.x, 0x10);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x802C));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x802A));
	emu_push(emu_cs); emu_push(0x0A1C); emu_cs = 0x348B; ovl__348B(3);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { ovl__34E0(0xFF); }
	f__B4E0_0A1C_000A_F8FD();
}

/**
 * Decompiled function f__B4E0_0A1C_000A_F8FD()
 *
 * @name f__B4E0_0A1C_000A_F8FD
 * @implements B4E0:0A1C:000A:F8FD ()
 *
 * Called From: B4E0:0A1C:0014:3661
 */
void f__B4E0_0A1C_000A_F8FD()
{
	emu_addws(&emu_sp, 0x6);
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0A26); emu_cs = 0x34A2; ovl__34A2(0);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { ovl__34E0(0xFF); }
	f__B4E0_0A26_0013_D5DC();
}

/**
 * Decompiled function f__B4E0_0A26_0013_D5DC()
 *
 * @name f__B4E0_0A26_0013_D5DC
 * @implements B4E0:0A26:0013:D5DC ()
 *
 * Called From: B4E0:0A26:000A:F8FD
 */
void f__B4E0_0A26_0013_D5DC()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_ax.x, 0x11);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x802C));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x802A));
	emu_push(emu_cs); emu_push(0x0A39); emu_cs = 0x348B; ovl__348B(3);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { ovl__34E0(0xFF); }
	f__B4E0_0A39_000A_F8FD();
}

/**
 * Decompiled function f__B4E0_0A39_000A_F8FD()
 *
 * @name f__B4E0_0A39_000A_F8FD
 * @implements B4E0:0A39:000A:F8FD ()
 *
 * Called From: B4E0:0A39:0013:D5DC
 */
void f__B4E0_0A39_000A_F8FD()
{
	emu_addws(&emu_sp, 0x6);
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0A43); emu_cs = 0x34A2; ovl__34A2(0);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { ovl__34E0(0xFF); }
	f__B4E0_0A43_0007_05DB();
}

/**
 * Decompiled function f__B4E0_0A43_0007_05DB()
 *
 * @name f__B4E0_0A43_0007_05DB
 * @implements B4E0:0A43:0007:05DB ()
 *
 * Called From: B4E0:0A43:000A:F8FD
 */
void f__B4E0_0A43_0007_05DB()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_push(emu_cs); emu_push(0x0A4A); emu_cs = 0x2B6C; f__2B6C_0137_0020_C73F();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { ovl__34E0(0xFF); }
	f__B4E0_0A4A_0024_F6D9();
}

/**
 * Decompiled function f__B4E0_0A4A_0024_F6D9()
 *
 * @name f__B4E0_0A4A_0024_F6D9
 * @implements B4E0:0A4A:0024:F6D9 ()
 *
 * Called From: B4E0:0A4A:0007:05DB
 */
void f__B4E0_0A4A_0024_F6D9()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x9931));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x992F));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x992B));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x992D));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x992B));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x992D));
	emu_push(emu_cs); emu_push(0x0A6E); emu_cs = 0x24D0; f__24D0_000D_0039_C17D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { ovl__34E0(0xFF); }
	f__B4E0_0A6E_0008_43E5();
}

/**
 * Decompiled function f__B4E0_0A6E_0008_43E5()
 *
 * @name f__B4E0_0A6E_0008_43E5
 * @implements B4E0:0A6E:0008:43E5 ()
 *
 * Called From: B4E0:0A6E:0024:F6D9
 */
void f__B4E0_0A6E_0008_43E5()
{
	emu_addws(&emu_sp, 0x10);
	emu_push(emu_cs); emu_push(0x0A76); emu_cs = 0x2B6C; f__2B6C_0169_001E_6939();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { ovl__34E0(0xFF); }
	f__B4E0_0A76_0008_3199();
}

/**
 * Decompiled function f__B4E0_0A76_0008_3199()
 *
 * @name f__B4E0_0A76_0008_3199
 * @implements B4E0:0A76:0008:3199 ()
 *
 * Called From: B4E0:0A76:0008:43E5
 */
void f__B4E0_0A76_0008_3199()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_cs); emu_push(0x0A7E); emu_cs = 0x2598; f__2598_0000_0017_EB80();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { ovl__34E0(0xFF); }
	f__B4E0_0A7E_0003_CB1A();
}

/**
 * Decompiled function f__B4E0_0A7E_0003_CB1A()
 *
 * @name f__B4E0_0A7E_0003_CB1A
 * @implements B4E0:0A7E:0003:CB1A ()
 *
 * Called From: B4E0:0A7E:0008:3199
 */
void f__B4E0_0A7E_0003_CB1A()
{
	emu_pop(&emu_cx.x);
	f__B4E0_0A81_0005_8BCF(); return;
}

/**
 * Decompiled function f__B4E0_0A81_0005_8BCF()
 *
 * @name f__B4E0_0A81_0005_8BCF
 * @implements B4E0:0A81:0005:8BCF ()
 *
 * Called From: B4E0:085D:0019:A380
 * Called From: B4E0:0A7F:0003:CB1A
 */
void f__B4E0_0A81_0005_8BCF()
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
 * Decompiled function f__B4E0_0A86_000E_D3BB()
 *
 * @name f__B4E0_0A86_000E_D3BB
 * @implements B4E0:0A86:000E:D3BB ()
 *
 * Called From: 34E0:003E:0005:0000
 */
void f__B4E0_0A86_000E_D3BB()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x0A94); emu_cs = 0x3520; ovl__3520(8);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { ovl__34E0(0xFF); }
	f__B4E0_0A94_000C_E9DA();
}

/**
 * Decompiled function f__B4E0_0A94_000C_E9DA()
 *
 * @name f__B4E0_0A94_000C_E9DA
 * @implements B4E0:0A94:000C:E9DA ()
 *
 * Called From: B4E0:0A94:000E:D3BB
 */
void f__B4E0_0A94_000C_E9DA()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_subw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x803E));
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x0AA0); f__B4E0_0AAD_002E_796D();
	f__B4E0_0AA0_0008_1842();
}

/**
 * Decompiled function f__B4E0_0AA0_0008_1842()
 *
 * @name f__B4E0_0AA0_0008_1842
 * @implements B4E0:0AA0:0008:1842 ()
 *
 * Called From: B4E0:0AA0:000C:E9DA
 */
void f__B4E0_0AA0_0008_1842()
{
	emu_pop(&emu_cx.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x0AA8); f__B4E0_0847_0019_A380();
	f__B4E0_0AA8_0003_CB1A();
}

/**
 * Decompiled function f__B4E0_0AA8_0003_CB1A()
 *
 * @name f__B4E0_0AA8_0003_CB1A
 * @implements B4E0:0AA8:0003:CB1A ()
 *
 * Called From: B4E0:0AA8:0008:1842
 */
void f__B4E0_0AA8_0003_CB1A()
{
	emu_pop(&emu_cx.x);
	f__B4E0_0AAB_0002_2597(); return;
}

/**
 * Decompiled function f__B4E0_0AAB_0002_2597()
 *
 * @name f__B4E0_0AAB_0002_2597
 * @implements B4E0:0AAB:0002:2597 ()
 *
 * Called From: B4E0:0AA9:0003:CB1A
 */
void f__B4E0_0AAB_0002_2597()
{
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B4E0_0AAD_002E_796D()
 *
 * @name f__B4E0_0AAD_002E_796D
 * @implements B4E0:0AAD:002E:796D ()
 *
 * Called From: B4E0:0A9D:000C:E9DA
 */
void f__B4E0_0AAD_002E_796D()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_si);
	emu_movw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_si, emu_si);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__B4E0_0AFA_001B_02D4(); return; }
	emu_movw(&emu_ax.x, emu_si);
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x803E));
	emu_addw(&emu_ax.x, 0xB);
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x803A));
	if ((emu_flags.cf || emu_flags.zf)) { f__B4E0_0AD5_0006_3E89(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x803E));
	emu_addw(&emu_ax.x, 0xB);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x803A));
	emu_subw(&emu_dx.x, emu_ax.x);
	emu_movw(&emu_si, emu_dx.x);
	emu_addw(&emu_get_memory16(emu_ds, 0x00,  0x803E), emu_si);
	/* Unresolved jump */ emu_ip = 0x0AF1; emu_last_cs = 0xB4E0; emu_last_ip = 0x0AD9; emu_last_length = 0x002E; emu_last_crc = 0x796D; emu_call();
}

/**
 * Decompiled function f__B4E0_0AD5_0006_3E89()
 *
 * @name f__B4E0_0AD5_0006_3E89
 * @implements B4E0:0AD5:0006:3E89 ()
 *
 * Called From: B4E0:0AC5:002E:796D
 */
void f__B4E0_0AD5_0006_3E89()
{
	emu_addw(&emu_get_memory16(emu_ds, 0x00,  0x803E), emu_si);
	f__B4E0_0AF1_0009_FC84(); return;
}

/**
 * Decompiled function f__B4E0_0ADB_000D_341A()
 *
 * @name f__B4E0_0ADB_000D_341A
 * @implements B4E0:0ADB:000D:341A ()
 *
 * Called From: B4E0:0AF6:0009:FC84
 * Called From: B4E0:0AF6:0012:379A
 */
void f__B4E0_0ADB_000D_341A()
{
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x804F));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x804D));
	emu_push(emu_cs);
	emu_push(0x0AE8); f__B4E0_0B35_0010_5ED9();
	f__B4E0_0AE8_0012_379A();
}

/**
 * Decompiled function f__B4E0_0AE8_0012_379A()
 *
 * @name f__B4E0_0AE8_0012_379A
 * @implements B4E0:0AE8:0012:379A ()
 *
 * Called From: B4E0:0AE8:000D:341A
 */
void f__B4E0_0AE8_0012_379A()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x804F), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x804D), emu_ax.x);
	emu_movw(&emu_ax.x, emu_si);
	emu_decw(&emu_si);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.zf) { f__B4E0_0ADB_000D_341A(); return; }
	f__B4E0_0B32_0003_2E57(); return;
}

/**
 * Decompiled function f__B4E0_0AF1_0009_FC84()
 *
 * @name f__B4E0_0AF1_0009_FC84
 * @implements B4E0:0AF1:0009:FC84 ()
 *
 * Called From: B4E0:0AD9:0006:3E89
 */
void f__B4E0_0AF1_0009_FC84()
{
	emu_movw(&emu_ax.x, emu_si);
	emu_decw(&emu_si);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.zf) { f__B4E0_0ADB_000D_341A(); return; }
	/* Unresolved jump */ emu_ip = 0x0B32; emu_last_cs = 0xB4E0; emu_last_ip = 0x0AF8; emu_last_length = 0x0009; emu_last_crc = 0xFC84; emu_call();
}

/**
 * Decompiled function f__B4E0_0AFA_001B_02D4()
 *
 * @name f__B4E0_0AFA_001B_02D4
 * @implements B4E0:0AFA:001B:02D4 ()
 *
 * Called From: B4E0:0AB6:002E:796D
 */
void f__B4E0_0AFA_001B_02D4()
{
	emu_orw(&emu_si, emu_si);
	if (!(emu_flags.sf != emu_flags.of)) { f__B4E0_0B32_0003_2E57(); return; }
	emu_movw(&emu_ax.x, emu_si);
	emu_negw(&emu_ax.x, emu_ax.x);
	emu_movw(&emu_si, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x803E));
	emu_subw(&emu_ax.x, emu_si);
	if (!(emu_flags.sf != emu_flags.of)) { f__B4E0_0B0F_0006_9E89(); return; }
	emu_movw(&emu_si, emu_get_memory16(emu_ds, 0x00,  0x803E));
	emu_subw(&emu_get_memory16(emu_ds, 0x00,  0x803E), emu_si);
	/* Unresolved jump */ emu_ip = 0x0B2B; emu_last_cs = 0xB4E0; emu_last_ip = 0x0B13; emu_last_length = 0x001B; emu_last_crc = 0x02D4; emu_call();
}

/**
 * Decompiled function f__B4E0_0B0F_0006_9E89()
 *
 * @name f__B4E0_0B0F_0006_9E89
 * @implements B4E0:0B0F:0006:9E89 ()
 *
 * Called From: B4E0:0B09:001B:02D4
 */
void f__B4E0_0B0F_0006_9E89()
{
	emu_subw(&emu_get_memory16(emu_ds, 0x00,  0x803E), emu_si);
	f__B4E0_0B2B_000A_7147(); return;
}

/**
 * Decompiled function f__B4E0_0B15_000D_B407()
 *
 * @name f__B4E0_0B15_000D_B407
 * @implements B4E0:0B15:000D:B407 ()
 *
 * Called From: B4E0:0B30:000A:7147
 * Called From: B4E0:0B30:0013:FE22
 */
void f__B4E0_0B15_000D_B407()
{
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x804F));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x804D));
	emu_push(emu_cs);
	emu_push(0x0B22); f__B4E0_0B5D_0005_6F1A();
	f__B4E0_0B22_0013_FE22();
}

/**
 * Decompiled function f__B4E0_0B22_0013_FE22()
 *
 * @name f__B4E0_0B22_0013_FE22
 * @implements B4E0:0B22:0013:FE22 ()
 *
 * Called From: B4E0:0B22:000D:B407
 */
void f__B4E0_0B22_0013_FE22()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x804F), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x804D), emu_ax.x);
	emu_movw(&emu_ax.x, emu_si);
	emu_decw(&emu_si);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.zf) { f__B4E0_0B15_000D_B407(); return; }
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B4E0_0B2B_000A_7147()
 *
 * @name f__B4E0_0B2B_000A_7147
 * @implements B4E0:0B2B:000A:7147 ()
 *
 * Called From: B4E0:0B13:0006:9E89
 */
void f__B4E0_0B2B_000A_7147()
{
	emu_movw(&emu_ax.x, emu_si);
	emu_decw(&emu_si);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.zf) { f__B4E0_0B15_000D_B407(); return; }
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B4E0_0B32_0003_2E57()
 *
 * @name f__B4E0_0B32_0003_2E57
 * @implements B4E0:0B32:0003:2E57 ()
 *
 * Called From: B4E0:0AF8:0012:379A
 * Called From: B4E0:0AFC:001B:02D4
 */
void f__B4E0_0B32_0003_2E57()
{
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B4E0_0B35_0010_5ED9()
 *
 * @name f__B4E0_0B35_0010_5ED9
 * @implements B4E0:0B35:0010:5ED9 ()
 *
 * Called From: B4E0:0582:000D:76A5
 * Called From: B4E0:05BE:000B:511B
 * Called From: B4E0:09CD:001D:8E21
 * Called From: B4E0:0AE5:000D:341A
 */
void f__B4E0_0B35_0010_5ED9()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x0));
	emu_movb(&emu_ax.h, 0x0);
	emu_addw(&emu_get_memory16(emu_ss, emu_bp,  0x6), emu_ax.x);
	f__B4E0_0B48_0013_5D73(); return;
}

/**
 * Decompiled function f__B4E0_0B45_0016_C340()
 *
 * @name f__B4E0_0B45_0016_C340
 * @implements B4E0:0B45:0016:C340 ()
 *
 * Called From: B4E0:0B51:0013:5D73
 * Called From: B4E0:0B51:0016:C340
 */
void f__B4E0_0B45_0016_C340()
{
	emu_incw(&emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x0));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (emu_flags.zf) { f__B4E0_0B45_0016_C340(); return; }
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	f__B4E0_0B5B_0002_2597(); return;
}

/**
 * Decompiled function f__B4E0_0B48_0013_5D73()
 *
 * @name f__B4E0_0B48_0013_5D73
 * @implements B4E0:0B48:0013:5D73 ()
 *
 * Called From: B4E0:0B43:0010:5ED9
 */
void f__B4E0_0B48_0013_5D73()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x0));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (emu_flags.zf) { f__B4E0_0B45_0016_C340(); return; }
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	f__B4E0_0B5B_0002_2597(); return;
}

/**
 * Decompiled function f__B4E0_0B5B_0002_2597()
 *
 * @name f__B4E0_0B5B_0002_2597
 * @implements B4E0:0B5B:0002:2597 ()
 *
 * Called From: B4E0:0B59:0013:5D73
 * Called From: B4E0:0B59:0016:C340
 */
void f__B4E0_0B5B_0002_2597()
{
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B4E0_0B5D_0005_6F1A()
 *
 * @name f__B4E0_0B5D_0005_6F1A
 * @implements B4E0:0B5D:0005:6F1A ()
 *
 * Called From: B4E0:0B1F:000D:B407
 */
void f__B4E0_0B5D_0005_6F1A()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	f__B4E0_0B62_0022_6717(); return;
}

/**
 * Decompiled function f__B4E0_0B62_0022_6717()
 *
 * @name f__B4E0_0B62_0022_6717
 * @implements B4E0:0B62:0022:6717 ()
 *
 * Called From: B4E0:0B60:0005:6F1A
 * Called From: B4E0:0B6E:0022:6717
 */
void f__B4E0_0B62_0022_6717()
{
	emu_decw(&emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x0));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (emu_flags.zf) { f__B4E0_0B62_0022_6717(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x0));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_decw(&emu_ax.x);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_pop(&emu_bx.x);
	emu_subw(&emu_ax.x, emu_bx.x);
	f__B4E0_0B84_0002_2597(); return;
}

/**
 * Decompiled function f__B4E0_0B84_0002_2597()
 *
 * @name f__B4E0_0B84_0002_2597
 * @implements B4E0:0B84:0002:2597 ()
 *
 * Called From: B4E0:0B82:0022:6717
 */
void f__B4E0_0B84_0002_2597()
{
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B4E0_0B86_001E_9967()
 *
 * @name f__B4E0_0B86_001E_9967
 * @implements B4E0:0B86:001E:9967 ()
 *
 * Called From: B4E0:008C:0019:D6BB
 * Called From: B4E0:0834:0006:5C12
 */
void f__B4E0_0B86_001E_9967()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x8);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x8036));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x8038));
	if (emu_flags.zf) { f__B4E0_0BA6_0016_F565(); return; }
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x8038));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x8036));
	emu_push(emu_cs); emu_push(0x0BA4); emu_cs = 0x3520; ovl__3520(4);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { ovl__34E0(0xFF); }
	f__B4E0_0BA4_0018_ACD7();
}

/**
 * Decompiled function f__B4E0_0BA4_0018_ACD7()
 *
 * @name f__B4E0_0BA4_0018_ACD7
 * @implements B4E0:0BA4:0018:ACD7 ()
 *
 * Called From: B4E0:0BA4:001E:9967
 */
void f__B4E0_0BA4_0018_ACD7()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x8032));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x8034));
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0BBE; emu_last_cs = 0xB4E0; emu_last_ip = 0x0BAD; emu_last_length = 0x0018; emu_last_crc = 0xACD7; emu_call(); return; }
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x8034));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x8032));
	emu_push(emu_cs); emu_push(0x0BBC); emu_cs = 0x3520; ovl__3520(3);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { ovl__34E0(0xFF); }
	f__B4E0_0BBC_0018_2E0F();
}

/**
 * Decompiled function f__B4E0_0BA6_0016_F565()
 *
 * @name f__B4E0_0BA6_0016_F565
 * @implements B4E0:0BA6:0016:F565 ()
 *
 * Called From: B4E0:0B95:001E:9967
 */
void f__B4E0_0BA6_0016_F565()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x8032));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x8034));
	if (emu_flags.zf) { f__B4E0_0BBE_0016_77BD(); return; }
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x8034));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x8032));
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x0BBC); emu_cs = 0x3520; emu_ip = 0x002F; emu_last_cs = 0xB4E0; emu_last_ip = 0x0BB7; emu_last_length = 0x0016; emu_last_crc = 0xF565; emu_call();
	f__B4E0_0BBC_0018_2E0F();
}

/**
 * Decompiled function f__B4E0_0BBC_0018_2E0F()
 *
 * @name f__B4E0_0BBC_0018_2E0F
 * @implements B4E0:0BBC:0018:2E0F ()
 *
 * Called From: B4E0:0BBC:0018:ACD7
 */
void f__B4E0_0BBC_0018_2E0F()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x802E));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x8030));
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0BD6; emu_last_cs = 0xB4E0; emu_last_ip = 0x0BC5; emu_last_length = 0x0018; emu_last_crc = 0x2E0F; emu_call(); return; }
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x8030));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x802E));
	emu_push(emu_cs); emu_push(0x0BD4); emu_cs = 0x3520; ovl__3520(3);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { ovl__34E0(0xFF); }
	f__B4E0_0BD4_001A_EE8D();
}

/**
 * Decompiled function f__B4E0_0BBE_0016_77BD()
 *
 * @name f__B4E0_0BBE_0016_77BD
 * @implements B4E0:0BBE:0016:77BD ()
 *
 * Called From: B4E0:0BAD:0016:F565
 */
void f__B4E0_0BBE_0016_77BD()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x802E));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x8030));
	if (emu_flags.zf) { f__B4E0_0BD6_0018_78E1(); return; }
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x8030));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x802E));
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x0BD4); emu_cs = 0x3520; emu_ip = 0x002F; emu_last_cs = 0xB4E0; emu_last_ip = 0x0BCF; emu_last_length = 0x0016; emu_last_crc = 0x77BD; emu_call();
	f__B4E0_0BD4_001A_EE8D();
}

/**
 * Decompiled function f__B4E0_0BD4_001A_EE8D()
 *
 * @name f__B4E0_0BD4_001A_EE8D
 * @implements B4E0:0BD4:001A:EE8D ()
 *
 * Called From: B4E0:0BD4:0018:2E0F
 */
void f__B4E0_0BD4_001A_EE8D()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x802C), 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x802A), 0x0);
	emu_movw(&emu_di, 0x8);
	emu_movw(&emu_ax.x, 0x5);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0BEE); emu_cs = 0x252E; f__252E_0001_0018_08B3();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { ovl__34E0(0xFF); }
	f__B4E0_0BEE_0019_6AEE();
}

/**
 * Decompiled function f__B4E0_0BD6_0018_78E1()
 *
 * @name f__B4E0_0BD6_0018_78E1
 * @implements B4E0:0BD6:0018:78E1 ()
 *
 * Called From: B4E0:0BC5:0016:77BD
 */
void f__B4E0_0BD6_0018_78E1()
{
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x802C), 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x802A), 0x0);
	emu_movw(&emu_di, 0x8);
	emu_movw(&emu_ax.x, 0x5);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0BEE); emu_cs = 0x252E; f__252E_0001_0018_08B3();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { ovl__34E0(0xFF); }
	f__B4E0_0BEE_0019_6AEE();
}

/**
 * Decompiled function f__B4E0_0BEE_0019_6AEE()
 *
 * @name f__B4E0_0BEE_0019_6AEE
 * @implements B4E0:0BEE:0019:6AEE ()
 *
 * Called From: B4E0:0BEE:0018:78E1
 * Called From: B4E0:0BEE:001A:EE8D
 */
void f__B4E0_0BEE_0019_6AEE()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_movw(&emu_ax.x, 0x30C);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x0C07); emu_cs = 0x01F7; f__01F7_2947_0014_02B8();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { ovl__34E0(0xFF); }
	f__B4E0_0C07_0008_1E0D();
}

/**
 * Decompiled function f__B4E0_0C07_0008_1E0D()
 *
 * @name f__B4E0_0C07_0008_1E0D
 * @implements B4E0:0C07:0008:1E0D ()
 *
 * Called From: B4E0:0C07:0019:6AEE
 */
void f__B4E0_0C07_0008_1E0D()
{
	emu_addws(&emu_sp, 0x8);
	emu_xorw(&emu_si, emu_si);
	f__B4E0_0CDA_0008_A7CF(); return;
}

/**
 * Decompiled function f__B4E0_0C0F_00AA_9694()
 *
 * @name f__B4E0_0C0F_00AA_9694
 * @implements B4E0:0C0F:00AA:9694 ()
 *
 * Called From: B4E0:0CDF:0008:A7CF
 * Called From: B4E0:0CDF:001D:1F21
 * Called From: B4E0:0CDF:0010:BA35
 */
void f__B4E0_0C0F_00AA_9694()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax.x, emu_si);
	emu_addw(&emu_ax.x, 0x2);
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0xE), 0x1900);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x32), 0x34E0);
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x30), 0x2A);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax.x, emu_ds);
	emu_movw(&emu_dx.x, 0x25DE);
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x1A), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x18), emu_dx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x16), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x14), emu_dx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x12), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x10), emu_dx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0xA), 0x2);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0xD), 0x1);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x2E), 0x0);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x1E), 0x18);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x20), emu_di);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x22), 0x88);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x24), 0x8);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x1C), 0x8);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x802A));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x802C));
	if (emu_flags.zf) { f__B4E0_0CC5_001D_1F21(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x802C));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x802A));
	emu_push(emu_cs); emu_push(0x0CB9); emu_cs = 0x348B; ovl__348B(0);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { ovl__34E0(0xFF); }
	f__B4E0_0CB9_000C_6F96();
}

/**
 * Decompiled function f__B4E0_0CB9_000C_6F96()
 *
 * @name f__B4E0_0CB9_000C_6F96
 * @implements B4E0:0CB9:000C:6F96 ()
 *
 * Called From: B4E0:0CB9:00AA:9694
 */
void f__B4E0_0CB9_000C_6F96()
{
	emu_addws(&emu_sp, 0x8);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x802C), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x802A), emu_ax.x);
	f__B4E0_0CD2_0010_BA35(); return;
}

/**
 * Decompiled function f__B4E0_0CC5_001D_1F21()
 *
 * @name f__B4E0_0CC5_001D_1F21
 * @implements B4E0:0CC5:001D:1F21 ()
 *
 * Called From: B4E0:0CA4:00AA:9694
 */
void f__B4E0_0CC5_001D_1F21()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x802C), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x802A), emu_dx.x);
	emu_addws(&emu_di, 0x8);
	emu_addws(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x3C);
	emu_incw(&emu_si);
	emu_cmpws(&emu_si, 0xD);
	if (!emu_flags.cf) { /* Unresolved jump */ emu_ip = 0x0CE2; emu_last_cs = 0xB4E0; emu_last_ip = 0x0CDD; emu_last_length = 0x001D; emu_last_crc = 0x1F21; emu_call(); return; }
	f__B4E0_0C0F_00AA_9694(); return;
}

/**
 * Decompiled function f__B4E0_0CD2_0010_BA35()
 *
 * @name f__B4E0_0CD2_0010_BA35
 * @implements B4E0:0CD2:0010:BA35 ()
 *
 * Called From: B4E0:0CC3:000C:6F96
 */
void f__B4E0_0CD2_0010_BA35()
{
	emu_addws(&emu_di, 0x8);
	emu_addws(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x3C);
	emu_incw(&emu_si);
	emu_cmpws(&emu_si, 0xD);
	if (!emu_flags.cf) { f__B4E0_0CE2_0011_DAA4(); return; }
	f__B4E0_0C0F_00AA_9694(); return;
}

/**
 * Decompiled function f__B4E0_0CDA_0008_A7CF()
 *
 * @name f__B4E0_0CDA_0008_A7CF
 * @implements B4E0:0CDA:0008:A7CF ()
 *
 * Called From: B4E0:0C0C:0008:1E0D
 */
void f__B4E0_0CDA_0008_A7CF()
{
	emu_cmpws(&emu_si, 0xD);
	if (!emu_flags.cf) { /* Unresolved jump */ emu_ip = 0x0CE2; emu_last_cs = 0xB4E0; emu_last_ip = 0x0CDD; emu_last_length = 0x0008; emu_last_crc = 0xA7CF; emu_call(); return; }
	f__B4E0_0C0F_00AA_9694(); return;
}

/**
 * Decompiled function f__B4E0_0CE2_0011_DAA4()
 *
 * @name f__B4E0_0CE2_0011_DAA4
 * @implements B4E0:0CE2:0011:DAA4 ()
 *
 * Called From: B4E0:0CDD:0010:BA35
 */
void f__B4E0_0CE2_0011_DAA4()
{
	emu_subws(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x3C);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x802C));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x802A));
	emu_push(emu_cs); emu_push(0x0CF3); emu_cs = 0x348B; ovl__348B(1);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { ovl__34E0(0xFF); }
	f__B4E0_0CF3_000D_B16D();
}

/**
 * Decompiled function f__B4E0_0CF3_000D_B16D()
 *
 * @name f__B4E0_0CF3_000D_B16D
 * @implements B4E0:0CF3:000D:B16D ()
 *
 * Called From: B4E0:0CF3:0011:DAA4
 */
void f__B4E0_0CF3_000D_B16D()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x0D00); emu_cs = 0x348B; ovl__348B(1);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { ovl__34E0(0xFF); }
	f__B4E0_0D00_002B_CAB1();
}

/**
 * Decompiled function f__B4E0_0D00_002B_CAB1()
 *
 * @name f__B4E0_0D00_002B_CAB1
 * @implements B4E0:0D00:002B:CAB1 ()
 *
 * Called From: B4E0:0D00:000D:B16D
 */
void f__B4E0_0D00_002B_CAB1()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_addws(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x3C);
	emu_movw(&emu_ax.x, 0x34E0);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x3E);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x48);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x8);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x18);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0xA8);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x8);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0xF);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0D2B); emu_cs = 0x3520; ovl__3520(1);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { ovl__34E0(0xFF); }
	f__B4E0_0D2B_001F_A27B();
}

/**
 * Decompiled function f__B4E0_0D2B_001F_A27B()
 *
 * @name f__B4E0_0D2B_001F_A27B
 * @implements B4E0:0D2B:001F:A27B ()
 *
 * Called From: B4E0:0D2B:002B:CAB1
 */
void f__B4E0_0D2B_001F_A27B()
{
	emu_addws(&emu_sp, 0x10);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x8038), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x8036), emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x8038));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x8036));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x802C));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x802A));
	emu_push(emu_cs); emu_push(0x0D4A); emu_cs = 0x348B; ovl__348B(0);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { ovl__34E0(0xFF); }
	f__B4E0_0D4A_0027_BAC7();
}

/**
 * Decompiled function f__B4E0_0D4A_0027_BAC7()
 *
 * @name f__B4E0_0D4A_0027_BAC7
 * @implements B4E0:0D4A:0027:BAC7 ()
 *
 * Called From: B4E0:0D4A:001F:A27B
 */
void f__B4E0_0D4A_0027_BAC7()
{
	emu_addws(&emu_sp, 0x8);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x802C), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x802A), emu_ax.x);
	emu_addws(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x3C);
	emu_addws(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x3C);
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0xF);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x802C));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x802A));
	emu_push(emu_cs); emu_push(0x0D71); emu_cs = 0x348B; ovl__348B(3);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { ovl__34E0(0xFF); }
	f__B4E0_0D71_0037_B415();
}

/**
 * Decompiled function f__B4E0_0D71_0037_B415()
 *
 * @name f__B4E0_0D71_0037_B415
 * @implements B4E0:0D71:0037:B415 ()
 *
 * Called From: B4E0:0D71:0027:BAC7
 */
void f__B4E0_0D71_0037_B415()
{
	emu_addws(&emu_sp, 0x6);
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x2DCE);
	emu_movw(&emu_es, emu_ax.x);
	emu_push(emu_get_memory16(emu_es, 0x00,  0x476));
	emu_push(emu_get_memory16(emu_es, 0x00,  0x474));
	emu_movw(&emu_ax.x, 0x2DCE);
	emu_movw(&emu_es, emu_ax.x);
	emu_push(emu_get_memory16(emu_es, 0x00,  0x472));
	emu_push(emu_get_memory16(emu_es, 0x00,  0x470));
	emu_movw(&emu_ax.x, 0x60);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0xA8);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x10);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0DA8); emu_cs = 0x3520; ovl__3520(0);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { ovl__34E0(0xFF); }
	f__B4E0_0DA8_003E_B602();
}

/**
 * Decompiled function f__B4E0_0DA8_003E_B602()
 *
 * @name f__B4E0_0DA8_003E_B602
 * @implements B4E0:0DA8:003E:B602 ()
 *
 * Called From: B4E0:0DA8:0037:B415
 */
void f__B4E0_0DA8_003E_B602()
{
	emu_addws(&emu_sp, 0x16);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x8034), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x8032), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x6), 0x0);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x8), 0x0);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x1C), 0x8);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x802C));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x802A));
	emu_push(emu_cs); emu_push(0x0DE6); emu_cs = 0x348B; ovl__348B(0);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { ovl__34E0(0xFF); }
	f__B4E0_0DE6_0022_7628();
}

/**
 * Decompiled function f__B4E0_0DE6_0022_7628()
 *
 * @name f__B4E0_0DE6_0022_7628
 * @implements B4E0:0DE6:0022:7628 ()
 *
 * Called From: B4E0:0DE6:003E:B602
 */
void f__B4E0_0DE6_0022_7628()
{
	emu_addws(&emu_sp, 0x8);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x802C), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x802A), emu_ax.x);
	emu_addws(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x3C);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0xF);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x802C));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x802A));
	emu_push(emu_cs); emu_push(0x0E08); emu_cs = 0x348B; ovl__348B(3);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { ovl__34E0(0xFF); }
	f__B4E0_0E08_0037_DDD6();
}

/**
 * Decompiled function f__B4E0_0E08_0037_DDD6()
 *
 * @name f__B4E0_0E08_0037_DDD6
 * @implements B4E0:0E08:0037:DDD6 ()
 *
 * Called From: B4E0:0E08:0022:7628
 */
void f__B4E0_0E08_0037_DDD6()
{
	emu_addws(&emu_sp, 0x6);
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x2DCE);
	emu_movw(&emu_es, emu_ax.x);
	emu_push(emu_get_memory16(emu_es, 0x00,  0x46E));
	emu_push(emu_get_memory16(emu_es, 0x00,  0x46C));
	emu_movw(&emu_ax.x, 0x2DCE);
	emu_movw(&emu_es, emu_ax.x);
	emu_push(emu_get_memory16(emu_es, 0x00,  0x46A));
	emu_push(emu_get_memory16(emu_es, 0x00,  0x468));
	emu_movw(&emu_ax.x, 0x10);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0xA8);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x11);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0E3F); emu_cs = 0x3520; ovl__3520(0);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { ovl__34E0(0xFF); }
	f__B4E0_0E3F_003E_B69E();
}

/**
 * Decompiled function f__B4E0_0E3F_003E_B69E()
 *
 * @name f__B4E0_0E3F_003E_B69E
 * @implements B4E0:0E3F:003E:B69E ()
 *
 * Called From: B4E0:0E3F:0037:DDD6
 */
void f__B4E0_0E3F_003E_B69E()
{
	emu_addws(&emu_sp, 0x16);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x8030), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x802E), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x6), 0x0);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x8), 0x0);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x1C), 0x8);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x802C));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x802A));
	emu_push(emu_cs); emu_push(0x0E7D); emu_cs = 0x348B; ovl__348B(0);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { ovl__34E0(0xFF); }
	f__B4E0_0E7D_001F_4543();
}

/**
 * Decompiled function f__B4E0_0E7D_001F_4543()
 *
 * @name f__B4E0_0E7D_001F_4543
 * @implements B4E0:0E7D:001F:4543 ()
 *
 * Called From: B4E0:0E7D:003E:B69E
 */
void f__B4E0_0E7D_001F_4543()
{
	emu_addws(&emu_sp, 0x8);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x802C), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x802A), emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x8028));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x8026));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x802C));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x802A));
	emu_push(emu_cs); emu_push(0x0E9C); emu_cs = 0x348B; ovl__348B(0);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { ovl__34E0(0xFF); }
	f__B4E0_0E9C_0017_668C();
}

/**
 * Decompiled function f__B4E0_0E9C_0017_668C()
 *
 * @name f__B4E0_0E9C_0017_668C
 * @implements B4E0:0E9C:0017:668C ()
 *
 * Called From: B4E0:0E9C:001F:4543
 */
void f__B4E0_0E9C_0017_668C()
{
	emu_addws(&emu_sp, 0x8);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x802C), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x802A), emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x8028));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x8026));
	emu_push(emu_cs); emu_push(0x0EB3); emu_cs = 0x34A2; ovl__34A2(0);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { ovl__34E0(0xFF); }
	f__B4E0_0EB3_0004_5B1F();
}

/**
 * Decompiled function f__B4E0_0EB3_0004_5B1F()
 *
 * @name f__B4E0_0EB3_0004_5B1F
 * @implements B4E0:0EB3:0004:5B1F ()
 *
 * Called From: B4E0:0EB3:0017:668C
 */
void f__B4E0_0EB3_0004_5B1F()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	f__B4E0_0EB7_0006_F7CE(); return;
}

/**
 * Decompiled function f__B4E0_0EB7_0006_F7CE()
 *
 * @name f__B4E0_0EB7_0006_F7CE
 * @implements B4E0:0EB7:0006:F7CE ()
 *
 * Called From: B4E0:0EB5:0004:5B1F
 */
void f__B4E0_0EB7_0006_F7CE()
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

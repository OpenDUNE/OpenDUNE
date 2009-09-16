/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__B4E0_0000_000F_EF71()
 *
 * @name f__B4E0_0000_000F_EF71
 * @implements B4E0:0000:000F:EF71 ()
 *
 * Called From: 34E0:0020:0005:1C34
 * Called From: 34E0:0020:0005:1DB8
 * Called From: 34E0:0020:0005:1C4C
 */
void f__B4E0_0000_000F_EF71()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x2);
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x000F); emu_cs = 0x2598; f__2598_0000_0017_D681();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { ovl__34E0(0xFF); }
	f__B4E0_000F_000D_0761();
}

/**
 * Decompiled function f__B4E0_000F_000D_0761()
 *
 * @name f__B4E0_000F_000D_0761
 * @implements B4E0:000F:000D:0761 ()
 *
 * Called From: B4E0:000F:000F:EF71
 */
void f__B4E0_000F_000D_0761()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x001C); emu_cs = 0x29E8; f__29E8_04AF_003C_3CE9();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { ovl__34E0(0xFF); }
	f__B4E0_001C_0006_053A();
}

/**
 * Decompiled function f__B4E0_001C_0006_053A()
 *
 * @name f__B4E0_001C_0006_053A
 * @implements B4E0:001C:0006:053A ()
 *
 * Called From: B4E0:001C:000D:0761
 */
void f__B4E0_001C_0006_053A()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_cs); emu_push(0x0022); emu_cs = 0x29E8; f__29E8_073F_000E_A6E4();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { ovl__34E0(0xFF); }
	f__B4E0_0022_000F_A2B4();
}

/**
 * Decompiled function f__B4E0_0022_000F_A2B4()
 *
 * @name f__B4E0_0022_000F_A2B4
 * @implements B4E0:0022:000F:A2B4 ()
 *
 * Called From: B4E0:0022:0006:053A
 */
void f__B4E0_0022_000F_A2B4()
{
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3A38));
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_cs); emu_push(0x0031); emu_cs = 0x34DA; ovl__34DA(0);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { ovl__34E0(0xFF); }
	f__B4E0_0031_0016_BE63();
}

/**
 * Decompiled function f__B4E0_0031_0016_BE63()
 *
 * @name f__B4E0_0031_0016_BE63
 * @implements B4E0:0031:0016:BE63 ()
 *
 * Called From: B4E0:0031:000F:A2B4
 */
void f__B4E0_0031_0016_BE63()
{
	emu_addws(&emu_sp, 0x6);
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x5);
	emu_push(emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0x6), 0x0);
	if (emu_flags.zf) { f__B4E0_0047_0015_6755(); return; }
	emu_movw(&emu_ax.x, 0x6);
	emu_ip = 0x004A; emu_last_cs = 0xB4E0; emu_last_ip = 0x0045; emu_last_length = 0x0016; emu_last_crc = 0xBE63; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B4E0_0047_0015_6755()
 *
 * @name f__B4E0_0047_0015_6755
 * @implements B4E0:0047:0015:6755 ()
 *
 * Called From: B4E0:0040:0016:BE63
 */
void f__B4E0_0047_0015_6755()
{
	emu_movw(&emu_ax.x, 0x4);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0xA8);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0xC8);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0xC1);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x005C); emu_cs = 0x0FCB; f__0FCB_005F_001C_147D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { ovl__34E0(0xFF); }
	f__B4E0_005C_000F_7E60();
}

/**
 * Decompiled function f__B4E0_005C_000F_7E60()
 *
 * @name f__B4E0_005C_000F_7E60
 * @implements B4E0:005C:000F:7E60 ()
 *
 * Called From: B4E0:005C:0015:6755
 */
void f__B4E0_005C_000F_7E60()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_es, emu_dx.x);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x0));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x006B); emu_cs = 0x29DA; f__29DA_00D0_0013_27E9();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { ovl__34E0(0xFF); }
	f__B4E0_006B_000B_FECA();
}

/**
 * Decompiled function f__B4E0_006B_000B_FECA()
 *
 * @name f__B4E0_006B_000B_FECA
 * @implements B4E0:006B:000B:FECA ()
 *
 * Called From: B4E0:006B:000F:7E60
 */
void f__B4E0_006B_000B_FECA()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0076); emu_cs = 0x34B8; ovl__34B8(0);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { ovl__34E0(0xFF); }
	f__B4E0_0076_0019_2A42();
}

/**
 * Decompiled function f__B4E0_0076_0019_2A42()
 *
 * @name f__B4E0_0076_0019_2A42
 * @implements B4E0:0076:0019:2A42 ()
 *
 * Called From: 261F:01B9:001B:DA28
 */
void f__B4E0_0076_0019_2A42()
{
	emu_addws(&emu_sp, 0xE);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x7FD8), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x7FDA), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x7FDA));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x8), 0x6E);
	emu_push(emu_cs);
	emu_push(0x008F); f__B4E0_0B86_001E_6070();
	f__B4E0_008F_0005_11DE();
}

/**
 * Decompiled function f__B4E0_008F_0005_11DE()
 *
 * @name f__B4E0_008F_0005_11DE
 * @implements B4E0:008F:0005:11DE ()
 *
 * Called From: B4E0:008F:0019:2A42
 */
void f__B4E0_008F_0005_11DE()
{
	emu_push(emu_cs); emu_push(0x0094); emu_cs = 0x2B6C; f__2B6C_0137_0020_17E5();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { ovl__34E0(0xFF); }
	f__B4E0_0094_0020_7795();
}

/**
 * Decompiled function f__B4E0_0094_0020_7795()
 *
 * @name f__B4E0_0094_0020_7795
 * @implements B4E0:0094:0020:7795 ()
 *
 * Called From: B4E0:0094:0005:11DE
 */
void f__B4E0_0094_0020_7795()
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
	emu_push(emu_cs); emu_push(0x00B4); emu_cs = 0x24D0; f__24D0_000D_0039_9224();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { ovl__34E0(0xFF); }
	f__B4E0_00B4_0008_F13E();
}

/**
 * Decompiled function f__B4E0_00B4_0008_F13E()
 *
 * @name f__B4E0_00B4_0008_F13E
 * @implements B4E0:00B4:0008:F13E ()
 *
 * Called From: B4E0:00B4:0020:7795
 */
void f__B4E0_00B4_0008_F13E()
{
	emu_addws(&emu_sp, 0x10);
	emu_push(emu_cs); emu_push(0x00BC); emu_cs = 0x2B6C; f__2B6C_0169_001E_97C8();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { ovl__34E0(0xFF); }
	f__B4E0_00BC_0009_71C7();
}

/**
 * Decompiled function f__B4E0_00BC_0009_71C7()
 *
 * @name f__B4E0_00BC_0009_71C7
 * @implements B4E0:00BC:0009:71C7 ()
 *
 * Called From: B4E0:00BC:0008:F13E
 */
void f__B4E0_00BC_0009_71C7()
{
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x00C5); f__B4E0_041D_0017_7AAC();
	f__B4E0_00C5_000A_154E();
}

/**
 * Decompiled function f__B4E0_00C5_000A_154E()
 *
 * @name f__B4E0_00C5_000A_154E
 * @implements B4E0:00C5:000A:154E ()
 *
 * Called From: B4E0:00C5:0009:71C7
 */
void f__B4E0_00C5_000A_154E()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x00CF); f__B4E0_0847_0019_50AB();
	f__B4E0_00CF_0009_E46A();
}

/**
 * Decompiled function f__B4E0_00CF_0009_E46A()
 *
 * @name f__B4E0_00CF_0009_E46A
 * @implements B4E0:00CF:0009:E46A ()
 *
 * Called From: B4E0:00CF:000A:154E
 */
void f__B4E0_00CF_0009_E46A()
{
	emu_pop(&emu_cx.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x00D8); emu_cs = 0x2598; f__2598_0000_0017_D681();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { ovl__34E0(0xFF); }
	f__B4E0_00D8_0006_022C();
}

/**
 * Decompiled function f__B4E0_00D8_0006_022C()
 *
 * @name f__B4E0_00D8_0006_022C
 * @implements B4E0:00D8:0006:022C ()
 *
 * Called From: B4E0:00D8:0009:E46A
 */
void f__B4E0_00D8_0006_022C()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_cs);
	emu_push(0x00DE); f__B4E0_0151_000D_9660();
	f__B4E0_00DE_000D_27B4();
}

/**
 * Decompiled function f__B4E0_00DE_000D_27B4()
 *
 * @name f__B4E0_00DE_000D_27B4
 * @implements B4E0:00DE:000D:27B4 ()
 *
 * Called From: B4E0:00DE:0006:022C
 */
void f__B4E0_00DE_000D_27B4()
{
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x7FD8));
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x7FDA));
	emu_push(emu_cs); emu_push(0x00EB); emu_cs = 0x23E1; f__23E1_01C2_0011_4E4B();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { ovl__34E0(0xFF); }
	f__B4E0_00EB_0007_28D0();
}

/**
 * Decompiled function f__B4E0_00EB_0007_28D0()
 *
 * @name f__B4E0_00EB_0007_28D0
 * @implements B4E0:00EB:0007:28D0 ()
 *
 * Called From: B4E0:00EB:000D:27B4
 */
void f__B4E0_00EB_0007_28D0()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_push(emu_cs); emu_push(0x00F2); emu_cs = 0x34DA; ovl__34DA(1);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { ovl__34E0(0xFF); }
	f__B4E0_00F2_000D_A3F4();
}

/**
 * Decompiled function f__B4E0_00F2_000D_A3F4()
 *
 * @name f__B4E0_00F2_000D_A3F4
 * @implements B4E0:00F2:000D:A3F4 ()
 *
 * Called From: B4E0:00F2:0007:28D0
 */
void f__B4E0_00F2_000D_A3F4()
{
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x7FC8));
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x7FCA));
	emu_push(emu_cs); emu_push(0x00FF); emu_cs = 0x3520; ovl__3520(4);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { ovl__34E0(0xFF); }
	f__B4E0_00FF_000F_007E();
}

/**
 * Decompiled function f__B4E0_00FF_000F_007E()
 *
 * @name f__B4E0_00FF_000F_007E
 * @implements B4E0:00FF:000F:007E ()
 *
 * Called From: B4E0:00FF:000D:A3F4
 */
void f__B4E0_00FF_000F_007E()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x7FCC));
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x7FCE));
	emu_push(emu_cs); emu_push(0x010E); emu_cs = 0x3520; ovl__3520(3);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { ovl__34E0(0xFF); }
	f__B4E0_010E_000F_2E7E();
}

/**
 * Decompiled function f__B4E0_010E_000F_2E7E()
 *
 * @name f__B4E0_010E_000F_2E7E
 * @implements B4E0:010E:000F:2E7E ()
 *
 * Called From: B4E0:010E:000F:007E
 */
void f__B4E0_010E_000F_2E7E()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x7FD0));
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x7FD2));
	emu_push(emu_cs); emu_push(0x011D); emu_cs = 0x3520; ovl__3520(3);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { ovl__34E0(0xFF); }
	f__B4E0_011D_0024_C4AB();
}

/**
 * Decompiled function f__B4E0_011D_0024_C4AB()
 *
 * @name f__B4E0_011D_0024_C4AB
 * @implements B4E0:011D:0024:C4AB ()
 *
 * Called From: B4E0:011D:000F:2E7E
 */
void f__B4E0_011D_0024_C4AB()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x7FD0), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x7FD2), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x7FCC), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x7FCE), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x7FC8), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x7FCA), emu_dx.x);
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0141); emu_cs = 0x29E8; f__29E8_04EB_0011_D0DB();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { ovl__34E0(0xFF); }
	f__B4E0_0141_0009_58EA();
}

/**
 * Decompiled function f__B4E0_0141_0009_58EA()
 *
 * @name f__B4E0_0141_0009_58EA
 * @implements B4E0:0141:0009:58EA ()
 *
 * Called From: B4E0:0141:0024:C4AB
 */
void f__B4E0_0141_0009_58EA()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_cs); emu_push(0x014A); emu_cs = 0x2598; f__2598_0000_0017_D681();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { ovl__34E0(0xFF); }
	f__B4E0_014A_0003_0164();
}

/**
 * Decompiled function f__B4E0_014A_0003_0164()
 *
 * @name f__B4E0_014A_0003_0164
 * @implements B4E0:014A:0003:0164 ()
 *
 * Called From: B4E0:014A:0009:58EA
 */
void f__B4E0_014A_0003_0164()
{
	emu_pop(&emu_cx.x);
	f__B4E0_014D_0004_0F7A(); return;
}

/**
 * Decompiled function f__B4E0_014D_0004_0F7A()
 *
 * @name f__B4E0_014D_0004_0F7A
 * @implements B4E0:014D:0004:0F7A ()
 *
 * Called From: B4E0:014B:0003:0164
 */
void f__B4E0_014D_0004_0F7A()
{
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B4E0_0151_000D_9660()
 *
 * @name f__B4E0_0151_000D_9660
 * @implements B4E0:0151:000D:9660 ()
 *
 * Called From: B4E0:00DB:0006:022C
 */
void f__B4E0_0151_000D_9660()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x2);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_xorw(&emu_si, emu_si);
	f__B4E0_0299_0009_D675(); return;
}

/**
 * Decompiled function f__B4E0_015E_0008_55E0()
 *
 * @name f__B4E0_015E_0008_55E0
 * @implements B4E0:015E:0008:55E0 ()
 *
 * Called From: B4E0:029F:0009:D675
 * Called From: B4E0:029F:000F:460C
 */
void f__B4E0_015E_0008_55E0()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0166); emu_cs = 0x34DA; ovl__34DA(2);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { ovl__34E0(0xFF); }
	f__B4E0_0166_000E_4E08();
}

/**
 * Decompiled function f__B4E0_0166_000E_4E08()
 *
 * @name f__B4E0_0166_000E_4E08
 * @implements B4E0:0166:000E:4E08 ()
 *
 * Called From: B4E0:0166:0008:55E0
 */
void f__B4E0_0166_000E_4E08()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x7FD4));
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x7FD6));
	emu_push(emu_cs); emu_push(0x0174); emu_cs = 0x34A2; ovl__34A2(2);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { ovl__34E0(0xFF); }
	f__B4E0_0174_0015_3D31();
}

/**
 * Decompiled function f__B4E0_0174_0015_3D31()
 *
 * @name f__B4E0_0174_0015_3D31
 * @implements B4E0:0174:0015:3D31 ()
 *
 * Called From: B4E0:0174:000E:4E08
 */
void f__B4E0_0174_0015_3D31()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_si, emu_ax.x);
	emu_testw(&emu_si, 0x800);
	if (emu_flags.zf) { f__B4E0_0180_0009_D53F(); return; }
	emu_xorw(&emu_si, emu_si);
	emu_cmpw(&emu_si, 0x8001);
	if (!emu_flags.zf) { f__B4E0_0189_0023_2BA9(); return; }
	emu_ip = 0x02A2; emu_last_cs = 0xB4E0; emu_last_ip = 0x0186; emu_last_length = 0x0015; emu_last_crc = 0x3D31; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B4E0_0180_0009_D53F()
 *
 * @name f__B4E0_0180_0009_D53F
 * @implements B4E0:0180:0009:D53F ()
 *
 * Called From: B4E0:017C:0015:3D31
 */
void f__B4E0_0180_0009_D53F()
{
	emu_cmpw(&emu_si, 0x8001);
	if (!emu_flags.zf) { f__B4E0_0189_0023_2BA9(); return; }
	f__B4E0_02A2_0006_137A(); return;
}

/**
 * Decompiled function f__B4E0_0189_0023_2BA9()
 *
 * @name f__B4E0_0189_0023_2BA9
 * @implements B4E0:0189:0023:2BA9 ()
 *
 * Called From: B4E0:0184:0009:D53F
 * Called From: B4E0:0184:0015:3D31
 */
void f__B4E0_0189_0023_2BA9()
{
	emu_andw(&emu_si, 0x80FF);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x25CE), 0x1);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_si);
	emu_movw(&emu_cx.x, 0x16);
	emu_movw(&emu_bx.x, 0x2A8);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_cs, emu_bx.x,  0x0));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_flags.zf) { f__B4E0_01AC_0004_04DC(); return; }
	emu_addws(&emu_bx.x, 0x2);
	if (--emu_cx.x != 0) { f__B4E0_019C_0010_85C3(); return; }
	emu_ip = 0x0291; emu_last_cs = 0xB4E0; emu_last_ip = 0x01A9; emu_last_length = 0x0023; emu_last_crc = 0x2BA9; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B4E0_019C_0010_85C3()
 *
 * @name f__B4E0_019C_0010_85C3
 * @implements B4E0:019C:0010:85C3 ()
 *
 * Called From: B4E0:01A7:0023:2BA9
 * Called From: B4E0:01A7:0010:85C3
 */
void f__B4E0_019C_0010_85C3()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_cs, emu_bx.x,  0x0));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_flags.zf) { f__B4E0_01AC_0004_04DC(); return; }
	emu_addws(&emu_bx.x, 0x2);
	if (--emu_cx.x != 0) { f__B4E0_019C_0010_85C3(); return; }
	f__B4E0_0291_0002_03AC(); return;
}

/**
 * Decompiled function f__B4E0_01AC_0004_04DC()
 *
 * @name f__B4E0_01AC_0004_04DC
 * @implements B4E0:01AC:0004:04DC ()
 *
 * Called From: B4E0:01A2:0023:2BA9
 * Called From: B4E0:01A2:0010:85C3
 */
void f__B4E0_01AC_0004_04DC()
{

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_cs, emu_bx.x,  0x2C);
	switch (emu_ip) {
		case 0x01B0: f__B4E0_01B0_0003_04C8(); return;
		case 0x0266: f__B4E0_0266_0009_6E05(); return;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0xB4E0; emu_last_ip = 0x01AC; emu_last_length = 0x0004; emu_last_crc = 0x04DC;
			emu_call();
			return;
	}
}

/**
 * Decompiled function f__B4E0_01B0_0003_04C8()
 *
 * @name f__B4E0_01B0_0003_04C8
 * @implements B4E0:01B0:0003:04C8 ()
 *
 * Called From: B4E0:01AC:0004:04DC
 */
void f__B4E0_01B0_0003_04C8()
{
	f__B4E0_0293_000F_460C(); return;
}

/**
 * Decompiled function f__B4E0_0266_0009_6E05()
 *
 * @name f__B4E0_0266_0009_6E05
 * @implements B4E0:0266:0009:6E05 ()
 *
 * Called From: B4E0:01AC:0004:04DC
 */
void f__B4E0_0266_0009_6E05()
{
	emu_cmpb(&emu_get_memory8(emu_ds, 0x00, -0x671B), 0x1);
	if (!emu_flags.zf) { emu_ip = 0x026F; emu_last_cs = 0xB4E0; emu_last_ip = 0x026B; emu_last_length = 0x0009; emu_last_crc = 0x6E05; emu_call(); return; } // Jump does not resolve
	f__B4E0_0293_000F_460C(); return;
}

/**
 * Decompiled function f__B4E0_0291_0002_03AC()
 *
 * @name f__B4E0_0291_0002_03AC
 * @implements B4E0:0291:0002:03AC ()
 *
 * Called From: B4E0:01A9:0010:85C3
 */
void f__B4E0_0291_0002_03AC()
{
	f__B4E0_0293_000F_460C(); return;
}

/**
 * Decompiled function f__B4E0_0293_000F_460C()
 *
 * @name f__B4E0_0293_000F_460C
 * @implements B4E0:0293:000F:460C ()
 *
 * Called From: B4E0:01B0:0003:04C8
 * Called From: B4E0:026D:0009:6E05
 * Called From: B4E0:0291:0002:03AC
 */
void f__B4E0_0293_000F_460C()
{
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x25CE), 0x0);
	emu_cmpw(&emu_si, 0x8001);
	if (emu_flags.zf) { emu_ip = 0x02A2; emu_last_cs = 0xB4E0; emu_last_ip = 0x029D; emu_last_length = 0x000F; emu_last_crc = 0x460C; emu_call(); return; } // Jump does not resolve
	f__B4E0_015E_0008_55E0(); return;
}

/**
 * Decompiled function f__B4E0_0299_0009_D675()
 *
 * @name f__B4E0_0299_0009_D675
 * @implements B4E0:0299:0009:D675 ()
 *
 * Called From: B4E0:015B:000D:9660
 */
void f__B4E0_0299_0009_D675()
{
	emu_cmpw(&emu_si, 0x8001);
	if (emu_flags.zf) { emu_ip = 0x02A2; emu_last_cs = 0xB4E0; emu_last_ip = 0x029D; emu_last_length = 0x0009; emu_last_crc = 0xD675; emu_call(); return; } // Jump does not resolve
	f__B4E0_015E_0008_55E0(); return;
}

/**
 * Decompiled function f__B4E0_02A2_0006_137A()
 *
 * @name f__B4E0_02A2_0006_137A
 * @implements B4E0:02A2:0006:137A ()
 *
 * Called From: B4E0:0186:0009:D53F
 */
void f__B4E0_02A2_0006_137A()
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
 * Decompiled function f__B4E0_0300_001B_87C2()
 *
 * @name f__B4E0_0300_001B_87C2
 * @implements B4E0:0300:001B:87C2 ()
 *
 * Called From: 34E0:002A:0005:1EE2
 * Called From: 34E0:002A:0005:1EF8
 */
void f__B4E0_0300_001B_87C2()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x4);
	emu_push(emu_si);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00, -0x7FC4));
	emu_addw(&emu_ax.x, 0x3);
	emu_movw(&emu_si, emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), emu_si);
	if (!emu_flags.zf) { f__B4E0_031B_000E_8EFF(); return; }
	f__B4E0_03BF_002A_888E(); return;
}

/**
 * Decompiled function f__B4E0_031B_000E_8EFF()
 *
 * @name f__B4E0_031B_000E_8EFF
 * @implements B4E0:031B:000E:8EFF ()
 *
 * Called From: B4E0:0316:001B:87C2
 */
void f__B4E0_031B_000E_8EFF()
{
	emu_push(emu_si);
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x7FD4));
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x7FD6));
	emu_push(emu_cs); emu_push(0x0329); emu_cs = 0x348B; ovl__348B(3);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { ovl__34E0(0xFF); }
	f__B4E0_0329_0017_5F61();
}

/**
 * Decompiled function f__B4E0_0329_0017_5F61()
 *
 * @name f__B4E0_0329_0017_5F61
 * @implements B4E0:0329:0017:5F61 ()
 *
 * Called From: B4E0:0329:000E:8EFF
 */
void f__B4E0_0329_0017_5F61()
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
	f__B4E0_0340_0011_F493();
}

/**
 * Decompiled function f__B4E0_0340_0011_F493()
 *
 * @name f__B4E0_0340_0011_F493
 * @implements B4E0:0340:0011:F493 ()
 *
 * Called From: B4E0:0340:0017:5F61
 */
void f__B4E0_0340_0011_F493()
{
	emu_addws(&emu_sp, 0x6);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x0351); emu_cs = 0x348B; ovl__348B(4);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { ovl__34E0(0xFF); }
	f__B4E0_0351_002F_F7C5();
}

/**
 * Decompiled function f__B4E0_0351_002F_F7C5()
 *
 * @name f__B4E0_0351_002F_F7C5
 * @implements B4E0:0351:002F:F7C5 ()
 *
 * Called From: B4E0:0351:0011:F493
 */
void f__B4E0_0351_002F_F7C5()
{
	emu_addws(&emu_sp, 0x6);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x38), 0x31);
	if (!emu_flags.zf) { f__B4E0_0382_002C_3036(); return; }
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
	f__B4E0_0380_002E_502B();
}

/**
 * Decompiled function f__B4E0_0380_002E_502B()
 *
 * @name f__B4E0_0380_002E_502B
 * @implements B4E0:0380:002E:502B ()
 *
 * Called From: B4E0:0380:002F:F7C5
 */
void f__B4E0_0380_002E_502B()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x38), 0x31);
	if (!emu_flags.zf) { f__B4E0_03B0_000F_5056(); return; }
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
	f__B4E0_03AE_0011_50BD();
}

/**
 * Decompiled function f__B4E0_0382_002C_3036()
 *
 * @name f__B4E0_0382_002C_3036
 * @implements B4E0:0382:002C:3036 ()
 *
 * Called From: B4E0:035C:002F:F7C5
 */
void f__B4E0_0382_002C_3036()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x38), 0x31);
	if (!emu_flags.zf) { emu_ip = 0x03B0; emu_last_cs = 0xB4E0; emu_last_ip = 0x038A; emu_last_length = 0x002C; emu_last_crc = 0x3036; emu_call(); return; } // Jump does not resolve
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
	f__B4E0_03AE_0011_50BD();
}

/**
 * Decompiled function f__B4E0_03AE_0011_50BD()
 *
 * @name f__B4E0_03AE_0011_50BD
 * @implements B4E0:03AE:0011:50BD ()
 *
 * Called From: B4E0:03AE:002C:3036
 * Called From: B4E0:03AE:002E:502B
 */
void f__B4E0_03AE_0011_50BD()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x4));
	emu_subw(&emu_ax.x, 0x3);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x7FC4), emu_ax.x);
	f__B4E0_0413_0005_154E(); return;
}

/**
 * Decompiled function f__B4E0_03B0_000F_5056()
 *
 * @name f__B4E0_03B0_000F_5056
 * @implements B4E0:03B0:000F:5056 ()
 *
 * Called From: B4E0:038A:002E:502B
 */
void f__B4E0_03B0_000F_5056()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x4));
	emu_subw(&emu_ax.x, 0x3);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x7FC4), emu_ax.x);
	f__B4E0_0413_0005_154E(); return;
}

/**
 * Decompiled function f__B4E0_03BF_002A_888E()
 *
 * @name f__B4E0_03BF_002A_888E
 * @implements B4E0:03BF:002A:888E ()
 *
 * Called From: B4E0:0318:001B:87C2
 */
void f__B4E0_03BF_002A_888E()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0x2E), 0x1100);
	if (!emu_flags.zf) { f__B4E0_03D1_0018_C2B0(); return; }
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x25CE), 0x0);
	if (emu_flags.zf) { f__B4E0_0413_0005_154E(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x38), 0x31);
	if (!emu_flags.zf) { emu_ip = 0x0413; emu_last_cs = 0xB4E0; emu_last_ip = 0x03D9; emu_last_length = 0x002A; emu_last_crc = 0x888E; emu_call(); return; } // Jump does not resolve
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x03E9); emu_cs = 0x348B; emu_ip = 0x041D; emu_last_cs = 0xB4E0; emu_last_ip = 0x03E4; emu_last_length = 0x002A; emu_last_crc = 0x888E; emu_call(); // Jump does not resolve
	f__B4E0_03E9_0008_F78A();
}

/**
 * Decompiled function f__B4E0_03D1_0018_C2B0()
 *
 * @name f__B4E0_03D1_0018_C2B0
 * @implements B4E0:03D1:0018:C2B0 ()
 *
 * Called From: B4E0:03C8:002A:888E
 */
void f__B4E0_03D1_0018_C2B0()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x38), 0x31);
	if (!emu_flags.zf) { emu_ip = 0x0413; emu_last_cs = 0xB4E0; emu_last_ip = 0x03D9; emu_last_length = 0x0018; emu_last_crc = 0xC2B0; emu_call(); return; } // Jump does not resolve
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x03E9); emu_cs = 0x348B; ovl__348B(4);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { ovl__34E0(0xFF); }
	f__B4E0_03E9_0008_F78A();
}

/**
 * Decompiled function f__B4E0_03E9_0008_F78A()
 *
 * @name f__B4E0_03E9_0008_F78A
 * @implements B4E0:03E9:0008:F78A ()
 *
 * Called From: B4E0:03E9:0018:C2B0
 */
void f__B4E0_03E9_0008_F78A()
{
	emu_addws(&emu_sp, 0x6);
	emu_push(emu_cs);
	emu_push(0x03F1); f__B4E0_059B_001B_5C28();
	f__B4E0_03F1_0009_719D();
}

/**
 * Decompiled function f__B4E0_03F1_0009_719D()
 *
 * @name f__B4E0_03F1_0009_719D
 * @implements B4E0:03F1:0009:719D ()
 *
 * Called From: B4E0:03F1:0008:F78A
 */
void f__B4E0_03F1_0009_719D()
{
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x03FA); f__B4E0_0847_0019_50AB();
	f__B4E0_03FA_000A_5142();
}

/**
 * Decompiled function f__B4E0_03FA_000A_5142()
 *
 * @name f__B4E0_03FA_000A_5142
 * @implements B4E0:03FA:000A:5142 ()
 *
 * Called From: B4E0:03FA:0009:719D
 */
void f__B4E0_03FA_000A_5142()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_ax.x, 0x841);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0404); emu_cs = 0x29E8; f__29E8_0A4A_0040_4DD0();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { ovl__34E0(0xFF); }
	f__B4E0_0404_000A_5242();
}

/**
 * Decompiled function f__B4E0_0404_000A_5242()
 *
 * @name f__B4E0_0404_000A_5242
 * @implements B4E0:0404:000A:5242 ()
 *
 * Called From: B4E0:0404:000A:5142
 */
void f__B4E0_0404_000A_5242()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_ax.x, 0x842);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x040E); emu_cs = 0x29E8; f__29E8_0A4A_0040_4DD0();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { ovl__34E0(0xFF); }
	f__B4E0_040E_0005_0DB6();
}

/**
 * Decompiled function f__B4E0_040E_0005_0DB6()
 *
 * @name f__B4E0_040E_0005_0DB6
 * @implements B4E0:040E:0005:0DB6 ()
 *
 * Called From: B4E0:040E:000A:5242
 */
void f__B4E0_040E_0005_0DB6()
{
	emu_pop(&emu_cx.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__B4E0_0418_0005_04BA(); return;
}

/**
 * Decompiled function f__B4E0_0411_0002_03A6()
 *
 * @name f__B4E0_0411_0002_03A6
 * @implements B4E0:0411:0002:03A6 ()
 *
 * Called From: B4E0:0416:0005:154E
 */
void f__B4E0_0411_0002_03A6()
{
	f__B4E0_0418_0005_04BA(); return;
}

/**
 * Decompiled function f__B4E0_0413_0005_154E()
 *
 * @name f__B4E0_0413_0005_154E
 * @implements B4E0:0413:0005:154E ()
 *
 * Called From: B4E0:03BD:0011:50BD
 * Called From: B4E0:03BD:000F:5056
 * Called From: B4E0:03CF:002A:888E
 */
void f__B4E0_0413_0005_154E()
{
	emu_movw(&emu_ax.x, 0x1);
	f__B4E0_0411_0002_03A6(); return;
}

/**
 * Decompiled function f__B4E0_0418_0005_04BA()
 *
 * @name f__B4E0_0418_0005_04BA
 * @implements B4E0:0418:0005:04BA ()
 *
 * Called From: B4E0:0411:0002:03A6
 * Called From: B4E0:0411:0005:0DB6
 */
void f__B4E0_0418_0005_04BA()
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
 * Decompiled function f__B4E0_041D_0017_7AAC()
 *
 * @name f__B4E0_041D_0017_7AAC
 * @implements B4E0:041D:0017:7AAC ()
 *
 * Called From: B4E0:00C2:0009:71C7
 * Called From: B4E0:082E:000A:A465
 */
void f__B4E0_041D_0017_7AAC()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0xE);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0x6), 0x0);
	if (emu_flags.zf) { f__B4E0_0488_000A_0FED(); return; }
	emu_movw(&emu_ax.x, 0x3);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0434); emu_cs = 0x252E; f__252E_0001_0018_48C0();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { ovl__34E0(0xFF); }
	f__B4E0_0434_0036_25C9();
}

/**
 * Decompiled function f__B4E0_0434_0036_25C9()
 *
 * @name f__B4E0_0434_0036_25C9
 * @implements B4E0:0434:0036:25C9 ()
 *
 * Called From: B4E0:0434:0017:7AAC
 */
void f__B4E0_0434_0036_25C9()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x25D2), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x25D0), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x7FC2), 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x7FC4), 0x0);
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
	emu_push(emu_cs); emu_push(0x046A); emu_cs = 0x01F7; f__01F7_378D_0020_4A95();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { ovl__34E0(0xFF); }
	f__B4E0_046A_000D_7BB1();
}

/**
 * Decompiled function f__B4E0_046A_000D_7BB1()
 *
 * @name f__B4E0_046A_000D_7BB1
 * @implements B4E0:046A:000D:7BB1 ()
 *
 * Called From: B4E0:046A:0036:25C9
 */
void f__B4E0_046A_000D_7BB1()
{
	emu_addws(&emu_sp, 0xA);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x8040);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0477); emu_cs = 0x0642; f__0642_075D_0011_56FC();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { ovl__34E0(0xFF); }
	f__B4E0_0477_000E_C225();
}

/**
 * Decompiled function f__B4E0_0477_000E_C225()
 *
 * @name f__B4E0_0477_000E_C225
 * @implements B4E0:0477:000E:C225 ()
 *
 * Called From: B4E0:0477:000D:7BB1
 */
void f__B4E0_0477_000E_C225()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x8040);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0485); emu_cs = 0x01F7; f__01F7_38F6_0029_5C00();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { ovl__34E0(0xFF); }
	f__B4E0_0485_000D_6FF1();
}

/**
 * Decompiled function f__B4E0_0485_000D_6FF1()
 *
 * @name f__B4E0_0485_000D_6FF1
 * @implements B4E0:0485:000D:6FF1 ()
 *
 * Called From: B4E0:0485:000E:C225
 */
void f__B4E0_0485_000D_6FF1()
{
	emu_addws(&emu_sp, 0x8);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x8040);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0492); emu_cs = 0x34B1; ovl__34B1(0);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { ovl__34E0(0xFF); }
	f__B4E0_0492_0022_5B17();
}

/**
 * Decompiled function f__B4E0_0488_000A_0FED()
 *
 * @name f__B4E0_0488_000A_0FED
 * @implements B4E0:0488:000A:0FED ()
 *
 * Called From: B4E0:0429:0017:7AAC
 */
void f__B4E0_0488_000A_0FED()
{
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x8040);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0492); emu_cs = 0x34B1; ovl__34B1(0);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { ovl__34E0(0xFF); }
	f__B4E0_0492_0022_5B17();
}

/**
 * Decompiled function f__B4E0_0492_0022_5B17()
 *
 * @name f__B4E0_0492_0022_5B17
 * @implements B4E0:0492:0022:5B17 ()
 *
 * Called From: B4E0:0492:000D:6FF1
 * Called From: B4E0:0492:000A:0FED
 */
void f__B4E0_0492_0022_5B17()
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
	f__B4E0_04B4_000F_B515();
}

/**
 * Decompiled function f__B4E0_04B4_000F_B515()
 *
 * @name f__B4E0_04B4_000F_B515
 * @implements B4E0:04B4:000F:B515 ()
 *
 * Called From: B4E0:04B4:0022:5B17
 */
void f__B4E0_04B4_000F_B515()
{
	emu_addws(&emu_sp, 0xE);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x04C3); emu_cs = 0x34B1; ovl__34B1(4);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { ovl__34E0(0xFF); }
	f__B4E0_04C3_0020_1E7E();
}

/**
 * Decompiled function f__B4E0_04C3_0020_1E7E()
 *
 * @name f__B4E0_04C3_0020_1E7E
 * @implements B4E0:04C3:0020:1E7E ()
 *
 * Called From: B4E0:04C3:000F:B515
 */
void f__B4E0_04C3_0020_1E7E()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x7FC6), 0x0);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x25D2));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x25D0));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_dx.x);
	f__B4E0_0542_0022_14C3(); return;
}

/**
 * Decompiled function f__B4E0_04E3_002F_13C9()
 *
 * @name f__B4E0_04E3_002F_13C9
 * @implements B4E0:04E3:002F:13C9 ()
 *
 * Called From: B4E0:0552:0022:14C3
 * Called From: B4E0:0552:003C:D3E2
 */
void f__B4E0_04E3_002F_13C9()
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
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x, -0x1));
	emu_movb(&emu_ax.h, 0x0);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x38B2));
	emu_incw(&emu_dx.x);
	emu_cmpw(&emu_ax.x, emu_dx.x);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__B4E0_0528_003C_D3E2(); return; }
	f__B4E0_051C_000C_9860(); return;
}

/**
 * Decompiled function f__B4E0_0512_0016_2FB6()
 *
 * @name f__B4E0_0512_0016_2FB6
 * @implements B4E0:0512:0016:2FB6 ()
 *
 * Called From: B4E0:0524:000C:9860
 * Called From: B4E0:0524:0016:2FB6
 */
void f__B4E0_0512_0016_2FB6()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0x0);
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_decw(&emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.zf) { f__B4E0_0512_0016_2FB6(); return; }
	f__B4E0_0542_0022_14C3(); return;
}

/**
 * Decompiled function f__B4E0_051C_000C_9860()
 *
 * @name f__B4E0_051C_000C_9860
 * @implements B4E0:051C:000C:9860 ()
 *
 * Called From: B4E0:0510:002F:13C9
 */
void f__B4E0_051C_000C_9860()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_decw(&emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.zf) { f__B4E0_0512_0016_2FB6(); return; }
	emu_ip = 0x0542; emu_last_cs = 0xB4E0; emu_last_ip = 0x0526; emu_last_length = 0x000C; emu_last_crc = 0x9860; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B4E0_0528_003C_D3E2()
 *
 * @name f__B4E0_0528_003C_D3E2
 * @implements B4E0:0528:003C:D3E2 ()
 *
 * Called From: B4E0:050E:002F:13C9
 */
void f__B4E0_0528_003C_D3E2()
{
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_movw(&emu_es, emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_addw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ss, emu_bp, -0xE));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x, -0x1), emu_ax.l);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_ax.x);
	emu_incw(&emu_get_memory16(emu_ds, 0x00, -0x7FC6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if ((emu_flags.sf != emu_flags.of)) { emu_ip = 0x04E3; emu_last_cs = 0xB4E0; emu_last_ip = 0x054B; emu_last_length = 0x003C; emu_last_crc = 0xD3E2; emu_call(); return; } // Jump does not resolve
	if (!emu_flags.zf) { emu_ip = 0x0554; emu_last_cs = 0xB4E0; emu_last_ip = 0x054D; emu_last_length = 0x003C; emu_last_crc = 0xD3E2; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	if (emu_flags.cf) { f__B4E0_04E3_002F_13C9(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x25D2));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x25D0));
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x7FB1), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x7FB3), emu_dx.x);
	emu_ip = 0x0568; emu_last_cs = 0xB4E0; emu_last_ip = 0x0562; emu_last_length = 0x003C; emu_last_crc = 0xD3E2; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B4E0_0542_0022_14C3()
 *
 * @name f__B4E0_0542_0022_14C3
 * @implements B4E0:0542:0022:14C3 ()
 *
 * Called From: B4E0:04E1:0020:1E7E
 * Called From: B4E0:0526:0016:2FB6
 */
void f__B4E0_0542_0022_14C3()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if ((emu_flags.sf != emu_flags.of)) { emu_ip = 0x04E3; emu_last_cs = 0xB4E0; emu_last_ip = 0x054B; emu_last_length = 0x0022; emu_last_crc = 0x14C3; emu_call(); return; } // Jump does not resolve
	if (!emu_flags.zf) { emu_ip = 0x0554; emu_last_cs = 0xB4E0; emu_last_ip = 0x054D; emu_last_length = 0x0022; emu_last_crc = 0x14C3; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	if (emu_flags.cf) { f__B4E0_04E3_002F_13C9(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x25D2));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x25D0));
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x7FB1), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x7FB3), emu_dx.x);
	f__B4E0_0568_0010_33CD(); return;
}

/**
 * Decompiled function f__B4E0_0568_0010_33CD()
 *
 * @name f__B4E0_0568_0010_33CD
 * @implements B4E0:0568:0010:33CD ()
 *
 * Called From: B4E0:0562:0022:14C3
 */
void f__B4E0_0568_0010_33CD()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x7FB3));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x0));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (emu_flags.zf) { emu_ip = 0x0564; emu_last_cs = 0xB4E0; emu_last_ip = 0x0572; emu_last_length = 0x0010; emu_last_crc = 0x33CD; emu_call(); return; } // Jump does not resolve
	emu_xorw(&emu_si, emu_si);
	f__B4E0_058F_000C_E8F9(); return;
}

/**
 * Decompiled function f__B4E0_0578_000D_21F7()
 *
 * @name f__B4E0_0578_000D_21F7
 * @implements B4E0:0578:000D:21F7 ()
 *
 * Called From: B4E0:0593:000C:E8F9
 * Called From: B4E0:0593:0016:BD28
 */
void f__B4E0_0578_000D_21F7()
{
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x7FB1));
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x7FB3));
	emu_push(emu_cs);
	emu_push(0x0585); f__B4E0_0B35_0010_06ED();
	f__B4E0_0585_0016_BD28();
}

/**
 * Decompiled function f__B4E0_0585_0016_BD28()
 *
 * @name f__B4E0_0585_0016_BD28
 * @implements B4E0:0585:0016:BD28 ()
 *
 * Called From: B4E0:0585:000D:21F7
 */
void f__B4E0_0585_0016_BD28()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x7FB1), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x7FB3), emu_ax.x);
	emu_incw(&emu_si);
	emu_cmpw(&emu_si, emu_get_memory16(emu_ds, 0x00, -0x7FC2));
	if (emu_flags.cf) { f__B4E0_0578_000D_21F7(); return; }
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
 * Decompiled function f__B4E0_058F_000C_E8F9()
 *
 * @name f__B4E0_058F_000C_E8F9
 * @implements B4E0:058F:000C:E8F9 ()
 *
 * Called From: B4E0:0576:0010:33CD
 */
void f__B4E0_058F_000C_E8F9()
{
	emu_cmpw(&emu_si, emu_get_memory16(emu_ds, 0x00, -0x7FC2));
	if (emu_flags.cf) { f__B4E0_0578_000D_21F7(); return; }
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
 * Decompiled function f__B4E0_059B_001B_5C28()
 *
 * @name f__B4E0_059B_001B_5C28
 * @implements B4E0:059B:001B:5C28 ()
 *
 * Called From: B4E0:03EE:0008:F78A
 */
void f__B4E0_059B_001B_5C28()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x2C);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_di, emu_get_memory16(emu_ds, 0x00, -0x7FC4));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00, -0x7FB1));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00, -0x7FB3));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x14), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x16), emu_dx.x);
	f__B4E0_05C9_0016_7493(); return;
}

/**
 * Decompiled function f__B4E0_05B6_000B_12FD()
 *
 * @name f__B4E0_05B6_000B_12FD
 * @implements B4E0:05B6:000B:12FD ()
 *
 * Called From: B4E0:05CE:0016:7493
 * Called From: B4E0:05CE:001E:A586
 */
void f__B4E0_05B6_000B_12FD()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x16));
	emu_push(emu_cs);
	emu_push(0x05C1); f__B4E0_0B35_0010_06ED();
	f__B4E0_05C1_001E_A586();
}

/**
 * Decompiled function f__B4E0_05C1_001E_A586()
 *
 * @name f__B4E0_05C1_001E_A586
 * @implements B4E0:05C1:001E:A586 ()
 *
 * Called From: B4E0:05C1:000B:12FD
 */
void f__B4E0_05C1_001E_A586()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x14), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x16), emu_ax.x);
	emu_movw(&emu_ax.x, emu_di);
	emu_decw(&emu_di);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.zf) { f__B4E0_05B6_000B_12FD(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x16));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x5), 0x30);
	if (!emu_flags.zf) { f__B4E0_05DF_0021_0124(); return; }
	emu_movw(&emu_ax.x, 0x1);
	f__B4E0_05E1_001F_0182(); return;
}

/**
 * Decompiled function f__B4E0_05C9_0016_7493()
 *
 * @name f__B4E0_05C9_0016_7493
 * @implements B4E0:05C9:0016:7493 ()
 *
 * Called From: B4E0:05B4:001B:5C28
 */
void f__B4E0_05C9_0016_7493()
{
	emu_movw(&emu_ax.x, emu_di);
	emu_decw(&emu_di);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.zf) { f__B4E0_05B6_000B_12FD(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x16));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x5), 0x30);
	if (!emu_flags.zf) { emu_ip = 0x05DF; emu_last_cs = 0xB4E0; emu_last_ip = 0x05D8; emu_last_length = 0x0016; emu_last_crc = 0x7493; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, 0x1);
	emu_ip = 0x05E1; emu_last_cs = 0xB4E0; emu_last_ip = 0x05DD; emu_last_length = 0x0016; emu_last_crc = 0x7493; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B4E0_05DF_0021_0124()
 *
 * @name f__B4E0_05DF_0021_0124
 * @implements B4E0:05DF:0021:0124 ()
 *
 * Called From: B4E0:05D8:001E:A586
 */
void f__B4E0_05DF_0021_0124()
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
	emu_push(emu_cs); emu_push(0x0600); emu_cs = 0x2BC0; f__2BC0_0004_000F_2F6C();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { ovl__34E0(0xFF); }
	f__B4E0_0600_0012_7EB1();
}

/**
 * Decompiled function f__B4E0_05E1_001F_0182()
 *
 * @name f__B4E0_05E1_001F_0182
 * @implements B4E0:05E1:001F:0182 ()
 *
 * Called From: B4E0:05DD:001E:A586
 */
void f__B4E0_05E1_001F_0182()
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
	emu_push(emu_cs); emu_push(0x0600); emu_cs = 0x2BC0; f__2BC0_0004_000F_2F6C();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { ovl__34E0(0xFF); }
	f__B4E0_0600_0012_7EB1();
}

/**
 * Decompiled function f__B4E0_0600_0012_7EB1()
 *
 * @name f__B4E0_0600_0012_7EB1
 * @implements B4E0:0600:0012:7EB1 ()
 *
 * Called From: B4E0:0600:0021:0124
 * Called From: B4E0:0600:001F:0182
 */
void f__B4E0_0600_0012_7EB1()
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
	f__B4E0_0612_001E_8ADD();
}

/**
 * Decompiled function f__B4E0_0612_001E_8ADD()
 *
 * @name f__B4E0_0612_001E_8ADD
 * @implements B4E0:0612:001E:8ADD ()
 *
 * Called From: B4E0:0612:0012:7EB1
 */
void f__B4E0_0612_001E_8ADD()
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
	f__B4E0_0630_0009_C22D();
}

/**
 * Decompiled function f__B4E0_0630_0009_C22D()
 *
 * @name f__B4E0_0630_0009_C22D
 * @implements B4E0:0630:0009:C22D ()
 *
 * Called From: B4E0:0630:001E:8ADD
 */
void f__B4E0_0630_0009_C22D()
{
	emu_addws(&emu_sp, 0xE);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x0639); emu_cs = 0x34B1; ovl__34B1(4);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { ovl__34E0(0xFF); }
	f__B4E0_0639_000C_E654();
}

/**
 * Decompiled function f__B4E0_0639_000C_E654()
 *
 * @name f__B4E0_0639_000C_E654
 * @implements B4E0:0639:000C:E654 ()
 *
 * Called From: B4E0:0639:0009:C22D
 */
void f__B4E0_0639_000C_E654()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x26));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x28));
	emu_push(emu_cs); emu_push(0x0645); emu_cs = 0x2BC0; f__2BC0_0004_000F_2F6C();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { ovl__34E0(0xFF); }
	f__B4E0_0645_0013_7DF3();
}

/**
 * Decompiled function f__B4E0_0645_0013_7DF3()
 *
 * @name f__B4E0_0645_0013_7DF3
 * @implements B4E0:0645:0013:7DF3 ()
 *
 * Called From: B4E0:0645:000C:E654
 */
void f__B4E0_0645_0013_7DF3()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x26), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x28), emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x22));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x24));
	emu_push(emu_cs); emu_push(0x0658); emu_cs = 0x2BC0; f__2BC0_0004_000F_2F6C();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { ovl__34E0(0xFF); }
	f__B4E0_0658_0024_3268();
}

/**
 * Decompiled function f__B4E0_0658_0024_3268()
 *
 * @name f__B4E0_0658_0024_3268
 * @implements B4E0:0658:0024:3268 ()
 *
 * Called From: B4E0:0658:0013:7DF3
 */
void f__B4E0_0658_0024_3268()
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
	emu_push(emu_cs); emu_push(0x067C); emu_cs = 0x252E; f__252E_0001_0018_48C0();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { ovl__34E0(0xFF); }
	f__B4E0_067C_0015_A1D9();
}

/**
 * Decompiled function f__B4E0_067C_0015_A1D9()
 *
 * @name f__B4E0_067C_0015_A1D9
 * @implements B4E0:067C:0015:A1D9 ()
 *
 * Called From: B4E0:067C:0024:3268
 */
void f__B4E0_067C_0015_A1D9()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_ax.x);
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x8040);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0691); emu_cs = 0x1FB5; f__1FB5_01FA_0010_D47C();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { ovl__34E0(0xFF); }
	f__B4E0_0691_0014_9009();
}

/**
 * Decompiled function f__B4E0_0691_0014_9009()
 *
 * @name f__B4E0_0691_0014_9009
 * @implements B4E0:0691:0014:9009 ()
 *
 * Called From: B4E0:0691:0015:A1D9
 */
void f__B4E0_0691_0014_9009()
{
	emu_addws(&emu_sp, 0x6);
	emu_movw(&emu_si, emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x18));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x1A));
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x06A5); emu_cs = 0x1FB5; f__1FB5_1207_001B_7505();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { ovl__34E0(0xFF); }
	f__B4E0_06A5_0015_FF63();
}

/**
 * Decompiled function f__B4E0_06A5_0015_FF63()
 *
 * @name f__B4E0_06A5_0015_FF63
 * @implements B4E0:06A5:0015:FF63 ()
 *
 * Called From: B4E0:06A5:0014:9009
 */
void f__B4E0_06A5_0015_FF63()
{
	emu_addws(&emu_sp, 0x8);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x22));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x24));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x06BA); emu_cs = 0x1FB5; f__1FB5_0AEC_001B_7557();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { ovl__34E0(0xFF); }
	f__B4E0_06BA_0014_E654();
}

/**
 * Decompiled function f__B4E0_06BA_0014_E654()
 *
 * @name f__B4E0_06BA_0014_E654
 * @implements B4E0:06BA:0014:E654 ()
 *
 * Called From: B4E0:06BA:0015:FF63
 */
void f__B4E0_06BA_0014_E654()
{
	emu_addws(&emu_sp, 0xA);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_cs); emu_push(0x06CE); emu_cs = 0x2502; f__2502_00FA_0009_4FCC();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { ovl__34E0(0xFF); }
	f__B4E0_06CE_0014_FB7C();
}

/**
 * Decompiled function f__B4E0_06CE_0014_FB7C()
 *
 * @name f__B4E0_06CE_0014_FB7C
 * @implements B4E0:06CE:0014:FB7C ()
 *
 * Called From: B4E0:06CE:0014:E654
 */
void f__B4E0_06CE_0014_FB7C()
{
	emu_addws(&emu_sp, 0x8);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x06E2); emu_cs = 0x2502; f__2502_0008_0015_ED28();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { ovl__34E0(0xFF); }
	f__B4E0_06E2_0009_CE13();
}

/**
 * Decompiled function f__B4E0_06E2_0009_CE13()
 *
 * @name f__B4E0_06E2_0009_CE13
 * @implements B4E0:06E2:0009:CE13 ()
 *
 * Called From: B4E0:06E2:0014:FB7C
 */
void f__B4E0_06E2_0009_CE13()
{
	emu_addws(&emu_sp, 0x8);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x06EB); emu_cs = 0x1FB5; f__1FB5_09C7_0018_F3A8();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { ovl__34E0(0xFF); }
	f__B4E0_06EB_0003_0162();
}

/**
 * Decompiled function f__B4E0_06EB_0003_0162()
 *
 * @name f__B4E0_06EB_0003_0162
 * @implements B4E0:06EB:0003:0162 ()
 *
 * Called From: B4E0:06EB:0009:CE13
 */
void f__B4E0_06EB_0003_0162()
{
	emu_pop(&emu_cx.x);
	f__B4E0_06F1_0020_D675(); return;
}

/**
 * Decompiled function f__B4E0_06EE_0023_D16D()
 *
 * @name f__B4E0_06EE_0023_D16D
 * @implements B4E0:06EE:0023:D16D ()
 *
 * Called From: B4E0:0701:0020:D675
 * Called From: B4E0:0701:0023:D16D
 */
void f__B4E0_06EE_0023_D16D()
{
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0x2A);
	if (emu_flags.zf) { f__B4E0_0703_000E_4B4E(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0x3F);
	if (!emu_flags.zf) { f__B4E0_06EE_0023_D16D(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0x2A);
	if (!emu_flags.zf) { emu_ip = 0x0711; emu_last_cs = 0xB4E0; emu_last_ip = 0x070A; emu_last_length = 0x0023; emu_last_crc = 0xD16D; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, 0x1);
	emu_ip = 0x0713; emu_last_cs = 0xB4E0; emu_last_ip = 0x070F; emu_last_length = 0x0023; emu_last_crc = 0xD16D; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B4E0_06F1_0020_D675()
 *
 * @name f__B4E0_06F1_0020_D675
 * @implements B4E0:06F1:0020:D675 ()
 *
 * Called From: B4E0:06EC:0003:0162
 */
void f__B4E0_06F1_0020_D675()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0x2A);
	if (emu_flags.zf) { emu_ip = 0x0703; emu_last_cs = 0xB4E0; emu_last_ip = 0x06F8; emu_last_length = 0x0020; emu_last_crc = 0xD675; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0x3F);
	if (!emu_flags.zf) { f__B4E0_06EE_0023_D16D(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0x2A);
	if (!emu_flags.zf) { emu_ip = 0x0711; emu_last_cs = 0xB4E0; emu_last_ip = 0x070A; emu_last_length = 0x0020; emu_last_crc = 0xD675; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, 0x1);
	emu_ip = 0x0713; emu_last_cs = 0xB4E0; emu_last_ip = 0x070F; emu_last_length = 0x0020; emu_last_crc = 0xD675; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B4E0_0703_000E_4B4E()
 *
 * @name f__B4E0_0703_000E_4B4E
 * @implements B4E0:0703:000E:4B4E ()
 *
 * Called From: B4E0:06F8:0023:D16D
 */
void f__B4E0_0703_000E_4B4E()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0x2A);
	if (!emu_flags.zf) { emu_ip = 0x0711; emu_last_cs = 0xB4E0; emu_last_ip = 0x070A; emu_last_length = 0x000E; emu_last_crc = 0x4B4E; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, 0x1);
	f__B4E0_0713_0016_D31F(); return;
}

/**
 * Decompiled function f__B4E0_0713_0016_D31F()
 *
 * @name f__B4E0_0713_0016_D31F
 * @implements B4E0:0713:0016:D31F ()
 *
 * Called From: B4E0:070F:000E:4B4E
 */
void f__B4E0_0713_0016_D31F()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x12), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0x0);
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x1C), 0x0);
	if (!emu_flags.zf) { f__B4E0_0729_004D_063C(); return; }
	f__B4E0_07BC_000E_9C8B(); return;
}

/**
 * Decompiled function f__B4E0_0729_004D_063C()
 *
 * @name f__B4E0_0729_004D_063C
 * @implements B4E0:0729:004D:063C ()
 *
 * Called From: B4E0:0724:0016:D31F
 */
void f__B4E0_0729_004D_063C()
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
	emu_push(emu_cs); emu_push(0x0776); emu_cs = 0x01F7; f__01F7_378D_0020_4A95();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { ovl__34E0(0xFF); }
	f__B4E0_0776_0024_2B25();
}

/**
 * Decompiled function f__B4E0_0776_0024_2B25()
 *
 * @name f__B4E0_0776_0024_2B25
 * @implements B4E0:0776:0024:2B25 ()
 *
 * Called From: B4E0:0776:004D:063C
 */
void f__B4E0_0776_0024_2B25()
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
	emu_push(emu_cs); emu_push(0x079A); emu_cs = 0x0642; f__0642_075D_0011_56FC();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { ovl__34E0(0xFF); }
	f__B4E0_079A_0009_CEF2();
}

/**
 * Decompiled function f__B4E0_079A_0009_CEF2()
 *
 * @name f__B4E0_079A_0009_CEF2
 * @implements B4E0:079A:0009:CEF2 ()
 *
 * Called From: B4E0:079A:0024:2B25
 */
void f__B4E0_079A_0009_CEF2()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x07A3); emu_cs = 0x0FCB; f__0FCB_0088_0016_E17C();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { ovl__34E0(0xFF); }
	f__B4E0_07A3_0014_B26E();
}

/**
 * Decompiled function f__B4E0_07A3_0014_B26E()
 *
 * @name f__B4E0_07A3_0014_B26E
 * @implements B4E0:07A3:0014:B26E ()
 *
 * Called From: B4E0:07A3:0009:CEF2
 */
void f__B4E0_07A3_0014_B26E()
{
	emu_addws(&emu_sp, 0xC);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs); emu_push(0x07B7); emu_cs = 0x2502; f__2502_0008_0015_ED28();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { ovl__34E0(0xFF); }
	f__B4E0_07B7_0005_1FA0();
}

/**
 * Decompiled function f__B4E0_07B7_0005_1FA0()
 *
 * @name f__B4E0_07B7_0005_1FA0
 * @implements B4E0:07B7:0005:1FA0 ()
 *
 * Called From: B4E0:07B7:0014:B26E
 */
void f__B4E0_07B7_0005_1FA0()
{
	emu_addws(&emu_sp, 0x8);
	f__B4E0_07F2_0022_01EA(); return;
}

/**
 * Decompiled function f__B4E0_07BC_000E_9C8B()
 *
 * @name f__B4E0_07BC_000E_9C8B
 * @implements B4E0:07BC:000E:9C8B ()
 *
 * Called From: B4E0:0726:0016:D31F
 */
void f__B4E0_07BC_000E_9C8B()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_dx.x);
	f__B4E0_07CD_0047_7126(); return;
}

/**
 * Decompiled function f__B4E0_07CA_004A_F925()
 *
 * @name f__B4E0_07CA_004A_F925
 * @implements B4E0:07CA:004A:F925 ()
 *
 * Called From: B4E0:07DD:0047:7126
 * Called From: B4E0:07DD:004A:F925
 */
void f__B4E0_07CA_004A_F925()
{
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0x0);
	if (emu_flags.zf) { emu_ip = 0x07DF; emu_last_cs = 0xB4E0; emu_last_ip = 0x07D4; emu_last_length = 0x004A; emu_last_crc = 0xF925; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0xC);
	if (!emu_flags.zf) { f__B4E0_07CA_004A_F925(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0x0);
	if (emu_flags.zf) { emu_ip = 0x07F2; emu_last_cs = 0xB4E0; emu_last_ip = 0x07E6; emu_last_length = 0x004A; emu_last_crc = 0xF925; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0x0);
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x7FD8));
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x7FDA));
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
	f__B4E0_0814_0013_2E31();
}

/**
 * Decompiled function f__B4E0_07CD_0047_7126()
 *
 * @name f__B4E0_07CD_0047_7126
 * @implements B4E0:07CD:0047:7126 ()
 *
 * Called From: B4E0:07C8:000E:9C8B
 */
void f__B4E0_07CD_0047_7126()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0x0);
	if (emu_flags.zf) { emu_ip = 0x07DF; emu_last_cs = 0xB4E0; emu_last_ip = 0x07D4; emu_last_length = 0x0047; emu_last_crc = 0x7126; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0xC);
	if (!emu_flags.zf) { f__B4E0_07CA_004A_F925(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0x0);
	if (emu_flags.zf) { emu_ip = 0x07F2; emu_last_cs = 0xB4E0; emu_last_ip = 0x07E6; emu_last_length = 0x0047; emu_last_crc = 0x7126; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0x0);
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x7FD8));
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x7FDA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_push(emu_cs); emu_push(0x0814); emu_cs = 0x34DA; emu_ip = 0x0848; emu_last_cs = 0xB4E0; emu_last_ip = 0x080F; emu_last_length = 0x0047; emu_last_crc = 0x7126; emu_call(); // Jump does not resolve
	f__B4E0_0814_0013_2E31();
}

/**
 * Decompiled function f__B4E0_07F2_0022_01EA()
 *
 * @name f__B4E0_07F2_0022_01EA
 * @implements B4E0:07F2:0022:01EA ()
 *
 * Called From: B4E0:07BA:0005:1FA0
 */
void f__B4E0_07F2_0022_01EA()
{
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x7FD8));
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x7FDA));
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
	f__B4E0_0814_0013_2E31();
}

/**
 * Decompiled function f__B4E0_0814_0013_2E31()
 *
 * @name f__B4E0_0814_0013_2E31
 * @implements B4E0:0814:0013:2E31 ()
 *
 * Called From: 261F:01B9:001B:DA28
 */
void f__B4E0_0814_0013_2E31()
{
	emu_addws(&emu_sp, 0x12);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x7FD8));
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x7FDA));
	emu_push(emu_cs); emu_push(0x0827); emu_cs = 0x348B; ovl__348B(4);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { ovl__34E0(0xFF); }
	f__B4E0_0827_000A_A465();
}

/**
 * Decompiled function f__B4E0_0827_000A_A465()
 *
 * @name f__B4E0_0827_000A_A465
 * @implements B4E0:0827:000A:A465 ()
 *
 * Called From: 261F:01B9:001B:DA28
 */
void f__B4E0_0827_000A_A465()
{
	emu_addws(&emu_sp, 0x6);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x0831); f__B4E0_041D_0017_7AAC();
	f__B4E0_0831_0006_02DA();
}

/**
 * Decompiled function f__B4E0_0831_0006_02DA()
 *
 * @name f__B4E0_0831_0006_02DA
 * @implements B4E0:0831:0006:02DA ()
 *
 * Called From: B4E0:0831:000A:A465
 */
void f__B4E0_0831_0006_02DA()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_cs);
	emu_push(0x0837); f__B4E0_0B86_001E_6070();
	f__B4E0_0837_0009_70BD();
}

/**
 * Decompiled function f__B4E0_0837_0009_70BD()
 *
 * @name f__B4E0_0837_0009_70BD
 * @implements B4E0:0837:0009:70BD ()
 *
 * Called From: B4E0:0837:0006:02DA
 */
void f__B4E0_0837_0009_70BD()
{
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x0840); f__B4E0_0847_0019_50AB();
	f__B4E0_0840_0007_3FFA();
}

/**
 * Decompiled function f__B4E0_0840_0007_3FFA()
 *
 * @name f__B4E0_0840_0007_3FFA
 * @implements B4E0:0840:0007:3FFA ()
 *
 * Called From: B4E0:0840:0009:70BD
 */
void f__B4E0_0840_0007_3FFA()
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
 * Decompiled function f__B4E0_0847_0019_50AB()
 *
 * @name f__B4E0_0847_0019_50AB
 * @implements B4E0:0847:0019:50AB ()
 *
 * Called From: B4E0:00CC:000A:154E
 * Called From: B4E0:03F7:0009:719D
 * Called From: B4E0:083D:0009:70BD
 * Called From: B4E0:0AA5:0008:7EA6
 */
void f__B4E0_0847_0019_50AB()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0xA);
	emu_push(emu_si);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0x6), 0x0);
	if (!emu_flags.zf) { f__B4E0_0860_000F_7328(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00, -0x7FC2));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x25D4));
	if (!emu_flags.zf) { f__B4E0_0860_000F_7328(); return; }
	f__B4E0_0A81_0005_04BA(); return;
}

/**
 * Decompiled function f__B4E0_0860_000F_7328()
 *
 * @name f__B4E0_0860_000F_7328
 * @implements B4E0:0860:000F:7328 ()
 *
 * Called From: B4E0:0852:0019:50AB
 * Called From: B4E0:085B:0019:50AB
 */
void f__B4E0_0860_000F_7328()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00, -0x7FC2));
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x25D4), emu_ax.x);
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x086F); emu_cs = 0x2598; f__2598_0000_0017_D681();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { ovl__34E0(0xFF); }
	f__B4E0_086F_000D_2BB5();
}

/**
 * Decompiled function f__B4E0_086F_000D_2BB5()
 *
 * @name f__B4E0_086F_000D_2BB5
 * @implements B4E0:086F:000D:2BB5 ()
 *
 * Called From: B4E0:086F:000F:7328
 */
void f__B4E0_086F_000D_2BB5()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_ax.x);
	emu_movw(&emu_ax.x, 0x8);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x087C); emu_cs = 0x07AE; f__07AE_00E4_000D_C2A4();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { ovl__34E0(0xFF); }
	f__B4E0_087C_000A_10B0();
}

/**
 * Decompiled function f__B4E0_087C_000A_10B0()
 *
 * @name f__B4E0_087C_000A_10B0
 * @implements B4E0:087C:000A:10B0 ()
 *
 * Called From: B4E0:087C:000D:2BB5
 */
void f__B4E0_087C_000A_10B0()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0886); emu_cs = 0x34DA; ovl__34DA(3);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { ovl__34E0(0xFF); }
	f__B4E0_0886_0027_B2AD();
}

/**
 * Decompiled function f__B4E0_0886_0027_B2AD()
 *
 * @name f__B4E0_0886_0027_B2AD
 * @implements B4E0:0886:0027:B2AD ()
 *
 * Called From: 261F:01B9:001B:DA28
 * Called From: B4E0:0886:000A:10B0
 */
void f__B4E0_0886_0027_B2AD()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_ax.x, 0x12);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0xC);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00, -0x66D5));
	emu_addw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00, -0x66D3));
	emu_movb(&emu_cx.l, 0x3);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_addw(&emu_ax.x, 0x10);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x30);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x08AD); emu_cs = 0x0FCB; f__0FCB_005F_001C_147D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { ovl__34E0(0xFF); }
	f__B4E0_08AD_0008_7B10();
}

/**
 * Decompiled function f__B4E0_08AD_0008_7B10()
 *
 * @name f__B4E0_08AD_0008_7B10
 * @implements B4E0:08AD:0008:7B10 ()
 *
 * Called From: B4E0:08AD:0027:B2AD
 */
void f__B4E0_08AD_0008_7B10()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x08B5); emu_cs = 0x10E4; f__10E4_1EF1_0040_E33D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { ovl__34E0(0xFF); }
	f__B4E0_08B5_001E_9CC0();
}

/**
 * Decompiled function f__B4E0_08B5_001E_9CC0()
 *
 * @name f__B4E0_08B5_001E_9CC0
 * @implements B4E0:08B5:001E:9CC0 ()
 *
 * Called From: B4E0:08B5:0008:7B10
 */
void f__B4E0_08B5_001E_9CC0()
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
	emu_push(emu_cs); emu_push(0x08D3); emu_cs = 0x10E4; f__10E4_1EF1_0040_E33D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { ovl__34E0(0xFF); }
	f__B4E0_08D3_0014_01A5();
}

/**
 * Decompiled function f__B4E0_08D3_0014_01A5()
 *
 * @name f__B4E0_08D3_0014_01A5
 * @implements B4E0:08D3:0014:01A5 ()
 *
 * Called From: B4E0:08D3:001E:9CC0
 */
void f__B4E0_08D3_0014_01A5()
{
	emu_addws(&emu_sp, 0xE);
	emu_movw(&emu_ax.x, 0x3);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x7FD4));
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x7FD6));
	emu_push(emu_cs); emu_push(0x08E7); emu_cs = 0x348B; ovl__348B(3);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { ovl__34E0(0xFF); }
	f__B4E0_08E7_001B_1CEC();
}

/**
 * Decompiled function f__B4E0_08E7_001B_1CEC()
 *
 * @name f__B4E0_08E7_001B_1CEC
 * @implements B4E0:08E7:001B:1CEC ()
 *
 * Called From: B4E0:08E7:0014:01A5
 */
void f__B4E0_08E7_001B_1CEC()
{
	emu_addws(&emu_sp, 0x6);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00, -0x7FB1));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00, -0x7FB3));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_dx.x);
	emu_xorw(&emu_si, emu_si);
	f__B4E0_09D9_0008_F6A2(); return;
}

/**
 * Decompiled function f__B4E0_0902_005F_4E73()
 *
 * @name f__B4E0_0902_005F_4E73
 * @implements B4E0:0902:005F:4E73 ()
 *
 * Called From: B4E0:09DE:0008:F6A2
 * Called From: B4E0:09DE:0011:7A0E
 */
void f__B4E0_0902_005F_4E73()
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
	if (!emu_flags.zf) { f__B4E0_0961_001F_B80C(); return; }
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
	f__B4E0_0997_000E_F552(); return;
}

/**
 * Decompiled function f__B4E0_0961_001F_B80C()
 *
 * @name f__B4E0_0961_001F_B80C
 * @implements B4E0:0961:001F:B80C ()
 *
 * Called From: B4E0:0934:005F:4E73
 */
void f__B4E0_0961_001F_B80C()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x1E), 0x18);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x38), 0x31);
	emu_cmpw(&emu_si, emu_get_memory16(emu_ds, 0x00, -0x7FC4));
	if (!emu_flags.zf) { f__B4E0_0980_0025_9B2B(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_ax.l, 0x8);
	f__B4E0_0985_0020_8375(); return;
}

/**
 * Decompiled function f__B4E0_0980_0025_9B2B()
 *
 * @name f__B4E0_0980_0025_9B2B
 * @implements B4E0:0980:0025:9B2B ()
 *
 * Called From: B4E0:0977:001F:B80C
 */
void f__B4E0_0980_0025_9B2B()
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
	f__B4E0_09A5_000E_149F();
}

/**
 * Decompiled function f__B4E0_0985_0020_8375()
 *
 * @name f__B4E0_0985_0020_8375
 * @implements B4E0:0985:0020:8375 ()
 *
 * Called From: B4E0:097E:001F:B80C
 */
void f__B4E0_0985_0020_8375()
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
	f__B4E0_09A5_000E_149F();
}

/**
 * Decompiled function f__B4E0_0997_000E_F552()
 *
 * @name f__B4E0_0997_000E_F552
 * @implements B4E0:0997:000E:F552 ()
 *
 * Called From: B4E0:095F:005F:4E73
 */
void f__B4E0_0997_000E_F552()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x09A5); emu_cs = 0x348B; ovl__348B(4);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { ovl__34E0(0xFF); }
	f__B4E0_09A5_000E_149F();
}

/**
 * Decompiled function f__B4E0_09A5_000E_149F()
 *
 * @name f__B4E0_09A5_000E_149F
 * @implements B4E0:09A5:000E:149F ()
 *
 * Called From: 261F:01B9:001B:DA28
 * Called From: B4E0:09A5:000E:F552
 * Called From: B4E0:09A5:0025:9B2B
 * Called From: B4E0:09A5:0020:8375
 */
void f__B4E0_09A5_000E_149F()
{
	emu_addws(&emu_sp, 0x6);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x09B3); emu_cs = 0x34A2; ovl__34A2(0);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { ovl__34E0(0xFF); }
	f__B4E0_09B3_001D_1F51();
}

/**
 * Decompiled function f__B4E0_09B3_001D_1F51()
 *
 * @name f__B4E0_09B3_001D_1F51
 * @implements B4E0:09B3:001D:1F51 ()
 *
 * Called From: B4E0:09B3:000E:149F
 */
void f__B4E0_09B3_001D_1F51()
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
	emu_push(0x09D0); f__B4E0_0B35_0010_06ED();
	f__B4E0_09D0_0011_7A0E();
}

/**
 * Decompiled function f__B4E0_09D0_0011_7A0E()
 *
 * @name f__B4E0_09D0_0011_7A0E
 * @implements B4E0:09D0:0011:7A0E ()
 *
 * Called From: B4E0:09D0:001D:1F51
 */
void f__B4E0_09D0_0011_7A0E()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax.x);
	emu_incw(&emu_si);
	emu_cmpws(&emu_si, 0xB);
	if (!emu_flags.cf) { f__B4E0_09E1_001D_0FCF(); return; }
	f__B4E0_0902_005F_4E73(); return;
}

/**
 * Decompiled function f__B4E0_09D9_0008_F6A2()
 *
 * @name f__B4E0_09D9_0008_F6A2
 * @implements B4E0:09D9:0008:F6A2 ()
 *
 * Called From: B4E0:08FF:001B:1CEC
 */
void f__B4E0_09D9_0008_F6A2()
{
	emu_cmpws(&emu_si, 0xB);
	if (!emu_flags.cf) { emu_ip = 0x09E1; emu_last_cs = 0xB4E0; emu_last_ip = 0x09DC; emu_last_length = 0x0008; emu_last_crc = 0xF6A2; emu_call(); return; } // Jump does not resolve
	f__B4E0_0902_005F_4E73(); return;
}

/**
 * Decompiled function f__B4E0_09E1_001D_0FCF()
 *
 * @name f__B4E0_09E1_001D_0FCF
 * @implements B4E0:09E1:001D:0FCF ()
 *
 * Called From: B4E0:09DC:0011:7A0E
 */
void f__B4E0_09E1_001D_0FCF()
{
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x7FC2));
	emu_movw(&emu_ax.x, 0xB);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x7FC6));
	emu_movw(&emu_ax.x, 0xF);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x7FD4));
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x7FD6));
	emu_push(emu_cs); emu_push(0x09FE); emu_cs = 0x348B; ovl__348B(3);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { ovl__34E0(0xFF); }
	f__B4E0_09FE_000A_A879();
}

/**
 * Decompiled function f__B4E0_09FE_000A_A879()
 *
 * @name f__B4E0_09FE_000A_A879
 * @implements B4E0:09FE:000A:A879 ()
 *
 * Called From: B4E0:09FE:001D:0FCF
 */
void f__B4E0_09FE_000A_A879()
{
	emu_addws(&emu_sp, 0x6);
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0A08); emu_cs = 0x3520; ovl__3520(9);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { ovl__34E0(0xFF); }
	f__B4E0_0A08_0014_01A6();
}

/**
 * Decompiled function f__B4E0_0A08_0014_01A6()
 *
 * @name f__B4E0_0A08_0014_01A6
 * @implements B4E0:0A08:0014:01A6 ()
 *
 * Called From: B4E0:0A08:000A:A879
 */
void f__B4E0_0A08_0014_01A6()
{
	emu_addws(&emu_sp, 0xA);
	emu_movw(&emu_ax.x, 0x10);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x7FD4));
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x7FD6));
	emu_push(emu_cs); emu_push(0x0A1C); emu_cs = 0x348B; ovl__348B(3);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { ovl__34E0(0xFF); }
	f__B4E0_0A1C_000A_ACA3();
}

/**
 * Decompiled function f__B4E0_0A1C_000A_ACA3()
 *
 * @name f__B4E0_0A1C_000A_ACA3
 * @implements B4E0:0A1C:000A:ACA3 ()
 *
 * Called From: B4E0:0A1C:0014:01A6
 */
void f__B4E0_0A1C_000A_ACA3()
{
	emu_addws(&emu_sp, 0x6);
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0A26); emu_cs = 0x34A2; ovl__34A2(0);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { ovl__34E0(0xFF); }
	f__B4E0_0A26_0013_0C33();
}

/**
 * Decompiled function f__B4E0_0A26_0013_0C33()
 *
 * @name f__B4E0_0A26_0013_0C33
 * @implements B4E0:0A26:0013:0C33 ()
 *
 * Called From: B4E0:0A26:000A:ACA3
 */
void f__B4E0_0A26_0013_0C33()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_ax.x, 0x11);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x7FD4));
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x7FD6));
	emu_push(emu_cs); emu_push(0x0A39); emu_cs = 0x348B; ovl__348B(3);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { ovl__34E0(0xFF); }
	f__B4E0_0A39_000A_ACA3();
}

/**
 * Decompiled function f__B4E0_0A39_000A_ACA3()
 *
 * @name f__B4E0_0A39_000A_ACA3
 * @implements B4E0:0A39:000A:ACA3 ()
 *
 * Called From: B4E0:0A39:0013:0C33
 */
void f__B4E0_0A39_000A_ACA3()
{
	emu_addws(&emu_sp, 0x6);
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0A43); emu_cs = 0x34A2; ovl__34A2(0);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { ovl__34E0(0xFF); }
	f__B4E0_0A43_0007_2B1E();
}

/**
 * Decompiled function f__B4E0_0A43_0007_2B1E()
 *
 * @name f__B4E0_0A43_0007_2B1E
 * @implements B4E0:0A43:0007:2B1E ()
 *
 * Called From: B4E0:0A43:000A:ACA3
 */
void f__B4E0_0A43_0007_2B1E()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_push(emu_cs); emu_push(0x0A4A); emu_cs = 0x2B6C; f__2B6C_0137_0020_17E5();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { ovl__34E0(0xFF); }
	f__B4E0_0A4A_0024_1ACA();
}

/**
 * Decompiled function f__B4E0_0A4A_0024_1ACA()
 *
 * @name f__B4E0_0A4A_0024_1ACA
 * @implements B4E0:0A4A:0024:1ACA ()
 *
 * Called From: B4E0:0A4A:0007:2B1E
 */
void f__B4E0_0A4A_0024_1ACA()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x66CF));
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x66D1));
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x66D5));
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x66D3));
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x66D5));
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x66D3));
	emu_push(emu_cs); emu_push(0x0A6E); emu_cs = 0x24D0; f__24D0_000D_0039_9224();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { ovl__34E0(0xFF); }
	f__B4E0_0A6E_0008_F13E();
}

/**
 * Decompiled function f__B4E0_0A6E_0008_F13E()
 *
 * @name f__B4E0_0A6E_0008_F13E
 * @implements B4E0:0A6E:0008:F13E ()
 *
 * Called From: B4E0:0A6E:0024:1ACA
 */
void f__B4E0_0A6E_0008_F13E()
{
	emu_addws(&emu_sp, 0x10);
	emu_push(emu_cs); emu_push(0x0A76); emu_cs = 0x2B6C; f__2B6C_0169_001E_97C8();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { ovl__34E0(0xFF); }
	f__B4E0_0A76_0008_E8EA();
}

/**
 * Decompiled function f__B4E0_0A76_0008_E8EA()
 *
 * @name f__B4E0_0A76_0008_E8EA
 * @implements B4E0:0A76:0008:E8EA ()
 *
 * Called From: B4E0:0A76:0008:F13E
 */
void f__B4E0_0A76_0008_E8EA()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_cs); emu_push(0x0A7E); emu_cs = 0x2598; f__2598_0000_0017_D681();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { ovl__34E0(0xFF); }
	f__B4E0_0A7E_0003_0164();
}

/**
 * Decompiled function f__B4E0_0A7E_0003_0164()
 *
 * @name f__B4E0_0A7E_0003_0164
 * @implements B4E0:0A7E:0003:0164 ()
 *
 * Called From: B4E0:0A7E:0008:E8EA
 */
void f__B4E0_0A7E_0003_0164()
{
	emu_pop(&emu_cx.x);
	f__B4E0_0A81_0005_04BA(); return;
}

/**
 * Decompiled function f__B4E0_0A81_0005_04BA()
 *
 * @name f__B4E0_0A81_0005_04BA
 * @implements B4E0:0A81:0005:04BA ()
 *
 * Called From: B4E0:085D:0019:50AB
 * Called From: B4E0:0A7F:0003:0164
 */
void f__B4E0_0A81_0005_04BA()
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
 * Decompiled function f__B4E0_0A86_000E_02A6()
 *
 * @name f__B4E0_0A86_000E_02A6
 * @implements B4E0:0A86:000E:02A6 ()
 *
 * Called From: 34E0:003E:0005:16CA
 * Called From: 34E0:003E:0005:16D0
 */
void f__B4E0_0A86_000E_02A6()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x0A94); emu_cs = 0x3520; ovl__3520(8);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { ovl__34E0(0xFF); }
	f__B4E0_0A94_000C_8793();
}

/**
 * Decompiled function f__B4E0_0A94_000C_8793()
 *
 * @name f__B4E0_0A94_000C_8793
 * @implements B4E0:0A94:000C:8793 ()
 *
 * Called From: B4E0:0A94:000E:02A6
 */
void f__B4E0_0A94_000C_8793()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_subw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00, -0x7FC2));
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x0AA0); f__B4E0_0AAD_002E_61F2();
	f__B4E0_0AA0_0008_7EA6();
}

/**
 * Decompiled function f__B4E0_0AA0_0008_7EA6()
 *
 * @name f__B4E0_0AA0_0008_7EA6
 * @implements B4E0:0AA0:0008:7EA6 ()
 *
 * Called From: B4E0:0AA0:000C:8793
 */
void f__B4E0_0AA0_0008_7EA6()
{
	emu_pop(&emu_cx.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x0AA8); f__B4E0_0847_0019_50AB();
	f__B4E0_0AA8_0003_0164();
}

/**
 * Decompiled function f__B4E0_0AA8_0003_0164()
 *
 * @name f__B4E0_0AA8_0003_0164
 * @implements B4E0:0AA8:0003:0164 ()
 *
 * Called From: B4E0:0AA8:0008:7EA6
 */
void f__B4E0_0AA8_0003_0164()
{
	emu_pop(&emu_cx.x);
	f__B4E0_0AAB_0002_00E2(); return;
}

/**
 * Decompiled function f__B4E0_0AAB_0002_00E2()
 *
 * @name f__B4E0_0AAB_0002_00E2
 * @implements B4E0:0AAB:0002:00E2 ()
 *
 * Called From: B4E0:0AA9:0003:0164
 */
void f__B4E0_0AAB_0002_00E2()
{
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B4E0_0AAD_002E_61F2()
 *
 * @name f__B4E0_0AAD_002E_61F2
 * @implements B4E0:0AAD:002E:61F2 ()
 *
 * Called From: B4E0:0A9D:000C:8793
 */
void f__B4E0_0AAD_002E_61F2()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_si);
	emu_movw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_si, emu_si);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__B4E0_0AFA_001B_E930(); return; }
	emu_movw(&emu_ax.x, emu_si);
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00, -0x7FC2));
	emu_addw(&emu_ax.x, 0xB);
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00, -0x7FC6));
	if ((emu_flags.cf || emu_flags.zf)) { f__B4E0_0AD5_0006_02E0(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00, -0x7FC2));
	emu_addw(&emu_ax.x, 0xB);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00, -0x7FC6));
	emu_subw(&emu_dx.x, emu_ax.x);
	emu_movw(&emu_si, emu_dx.x);
	emu_addw(&emu_get_memory16(emu_ds, 0x00, -0x7FC2), emu_si);
	emu_ip = 0x0AF1; emu_last_cs = 0xB4E0; emu_last_ip = 0x0AD9; emu_last_length = 0x002E; emu_last_crc = 0x61F2; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B4E0_0AD5_0006_02E0()
 *
 * @name f__B4E0_0AD5_0006_02E0
 * @implements B4E0:0AD5:0006:02E0 ()
 *
 * Called From: B4E0:0AC5:002E:61F2
 */
void f__B4E0_0AD5_0006_02E0()
{
	emu_addw(&emu_get_memory16(emu_ds, 0x00, -0x7FC2), emu_si);
	f__B4E0_0AF1_0009_EE55(); return;
}

/**
 * Decompiled function f__B4E0_0ADB_000D_2209()
 *
 * @name f__B4E0_0ADB_000D_2209
 * @implements B4E0:0ADB:000D:2209 ()
 *
 * Called From: B4E0:0AF6:0009:EE55
 * Called From: B4E0:0AF6:0012:7708
 */
void f__B4E0_0ADB_000D_2209()
{
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x7FB1));
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x7FB3));
	emu_push(emu_cs);
	emu_push(0x0AE8); f__B4E0_0B35_0010_06ED();
	f__B4E0_0AE8_0012_7708();
}

/**
 * Decompiled function f__B4E0_0AE8_0012_7708()
 *
 * @name f__B4E0_0AE8_0012_7708
 * @implements B4E0:0AE8:0012:7708 ()
 *
 * Called From: B4E0:0AE8:000D:2209
 */
void f__B4E0_0AE8_0012_7708()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x7FB1), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x7FB3), emu_ax.x);
	emu_movw(&emu_ax.x, emu_si);
	emu_decw(&emu_si);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.zf) { f__B4E0_0ADB_000D_2209(); return; }
	f__B4E0_0B32_0003_0212(); return;
}

/**
 * Decompiled function f__B4E0_0AF1_0009_EE55()
 *
 * @name f__B4E0_0AF1_0009_EE55
 * @implements B4E0:0AF1:0009:EE55 ()
 *
 * Called From: B4E0:0AD9:0006:02E0
 */
void f__B4E0_0AF1_0009_EE55()
{
	emu_movw(&emu_ax.x, emu_si);
	emu_decw(&emu_si);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.zf) { f__B4E0_0ADB_000D_2209(); return; }
	emu_ip = 0x0B32; emu_last_cs = 0xB4E0; emu_last_ip = 0x0AF8; emu_last_length = 0x0009; emu_last_crc = 0xEE55; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B4E0_0AFA_001B_E930()
 *
 * @name f__B4E0_0AFA_001B_E930
 * @implements B4E0:0AFA:001B:E930 ()
 *
 * Called From: B4E0:0AB6:002E:61F2
 */
void f__B4E0_0AFA_001B_E930()
{
	emu_orw(&emu_si, emu_si);
	if (!(emu_flags.sf != emu_flags.of)) { f__B4E0_0B32_0003_0212(); return; }
	emu_movw(&emu_ax.x, emu_si);
	emu_negw(&emu_ax.x, emu_ax.x);
	emu_movw(&emu_si, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00, -0x7FC2));
	emu_subw(&emu_ax.x, emu_si);
	if (!(emu_flags.sf != emu_flags.of)) { f__B4E0_0B0F_0006_08E0(); return; }
	emu_movw(&emu_si, emu_get_memory16(emu_ds, 0x00, -0x7FC2));
	emu_subw(&emu_get_memory16(emu_ds, 0x00, -0x7FC2), emu_si);
	emu_ip = 0x0B2B; emu_last_cs = 0xB4E0; emu_last_ip = 0x0B13; emu_last_length = 0x001B; emu_last_crc = 0xE930; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B4E0_0B0F_0006_08E0()
 *
 * @name f__B4E0_0B0F_0006_08E0
 * @implements B4E0:0B0F:0006:08E0 ()
 *
 * Called From: B4E0:0B09:001B:E930
 */
void f__B4E0_0B0F_0006_08E0()
{
	emu_subw(&emu_get_memory16(emu_ds, 0x00, -0x7FC2), emu_si);
	f__B4E0_0B2B_000A_D901(); return;
}

/**
 * Decompiled function f__B4E0_0B15_000D_23D1()
 *
 * @name f__B4E0_0B15_000D_23D1
 * @implements B4E0:0B15:000D:23D1 ()
 *
 * Called From: B4E0:0B30:000A:D901
 * Called From: B4E0:0B30:0013:EBBA
 */
void f__B4E0_0B15_000D_23D1()
{
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x7FB1));
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x7FB3));
	emu_push(emu_cs);
	emu_push(0x0B22); f__B4E0_0B5D_0005_06DC();
	f__B4E0_0B22_0013_EBBA();
}

/**
 * Decompiled function f__B4E0_0B22_0013_EBBA()
 *
 * @name f__B4E0_0B22_0013_EBBA
 * @implements B4E0:0B22:0013:EBBA ()
 *
 * Called From: B4E0:0B22:000D:23D1
 */
void f__B4E0_0B22_0013_EBBA()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x7FB1), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x7FB3), emu_ax.x);
	emu_movw(&emu_ax.x, emu_si);
	emu_decw(&emu_si);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.zf) { f__B4E0_0B15_000D_23D1(); return; }
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B4E0_0B2B_000A_D901()
 *
 * @name f__B4E0_0B2B_000A_D901
 * @implements B4E0:0B2B:000A:D901 ()
 *
 * Called From: B4E0:0B13:0006:08E0
 */
void f__B4E0_0B2B_000A_D901()
{
	emu_movw(&emu_ax.x, emu_si);
	emu_decw(&emu_si);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.zf) { f__B4E0_0B15_000D_23D1(); return; }
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B4E0_0B32_0003_0212()
 *
 * @name f__B4E0_0B32_0003_0212
 * @implements B4E0:0B32:0003:0212 ()
 *
 * Called From: B4E0:0AF8:0012:7708
 * Called From: B4E0:0AFC:001B:E930
 */
void f__B4E0_0B32_0003_0212()
{
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B4E0_0B35_0010_06ED()
 *
 * @name f__B4E0_0B35_0010_06ED
 * @implements B4E0:0B35:0010:06ED ()
 *
 * Called From: B4E0:0582:000D:21F7
 * Called From: B4E0:05BE:000B:12FD
 * Called From: B4E0:09CD:001D:1F51
 * Called From: B4E0:0AE5:000D:2209
 */
void f__B4E0_0B35_0010_06ED()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x0));
	emu_movb(&emu_ax.h, 0x0);
	emu_addw(&emu_get_memory16(emu_ss, emu_bp,  0x6), emu_ax.x);
	f__B4E0_0B48_0013_F7BF(); return;
}

/**
 * Decompiled function f__B4E0_0B45_0016_C0DF()
 *
 * @name f__B4E0_0B45_0016_C0DF
 * @implements B4E0:0B45:0016:C0DF ()
 *
 * Called From: B4E0:0B51:0013:F7BF
 * Called From: B4E0:0B51:0016:C0DF
 */
void f__B4E0_0B45_0016_C0DF()
{
	emu_incw(&emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x0));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (emu_flags.zf) { f__B4E0_0B45_0016_C0DF(); return; }
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	f__B4E0_0B5B_0002_00E2(); return;
}

/**
 * Decompiled function f__B4E0_0B48_0013_F7BF()
 *
 * @name f__B4E0_0B48_0013_F7BF
 * @implements B4E0:0B48:0013:F7BF ()
 *
 * Called From: B4E0:0B43:0010:06ED
 */
void f__B4E0_0B48_0013_F7BF()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x0));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (emu_flags.zf) { f__B4E0_0B45_0016_C0DF(); return; }
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	f__B4E0_0B5B_0002_00E2(); return;
}

/**
 * Decompiled function f__B4E0_0B5B_0002_00E2()
 *
 * @name f__B4E0_0B5B_0002_00E2
 * @implements B4E0:0B5B:0002:00E2 ()
 *
 * Called From: B4E0:0B59:0013:F7BF
 * Called From: B4E0:0B59:0016:C0DF
 */
void f__B4E0_0B5B_0002_00E2()
{
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B4E0_0B5D_0005_06DC()
 *
 * @name f__B4E0_0B5D_0005_06DC
 * @implements B4E0:0B5D:0005:06DC ()
 *
 * Called From: B4E0:0B1F:000D:23D1
 */
void f__B4E0_0B5D_0005_06DC()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	f__B4E0_0B62_0022_9CF8(); return;
}

/**
 * Decompiled function f__B4E0_0B62_0022_9CF8()
 *
 * @name f__B4E0_0B62_0022_9CF8
 * @implements B4E0:0B62:0022:9CF8 ()
 *
 * Called From: B4E0:0B60:0005:06DC
 * Called From: B4E0:0B6E:0022:9CF8
 */
void f__B4E0_0B62_0022_9CF8()
{
	emu_decw(&emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x0));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (emu_flags.zf) { f__B4E0_0B62_0022_9CF8(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x0));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_decw(&emu_ax.x);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_pop(&emu_bx.x);
	emu_subw(&emu_ax.x, emu_bx.x);
	f__B4E0_0B84_0002_00E2(); return;
}

/**
 * Decompiled function f__B4E0_0B84_0002_00E2()
 *
 * @name f__B4E0_0B84_0002_00E2
 * @implements B4E0:0B84:0002:00E2 ()
 *
 * Called From: B4E0:0B82:0022:9CF8
 */
void f__B4E0_0B84_0002_00E2()
{
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B4E0_0B86_001E_6070()
 *
 * @name f__B4E0_0B86_001E_6070
 * @implements B4E0:0B86:001E:6070 ()
 *
 * Called From: B4E0:008C:0019:2A42
 * Called From: B4E0:0834:0006:02DA
 */
void f__B4E0_0B86_001E_6070()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x8);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00, -0x7FCA));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00, -0x7FC8));
	if (emu_flags.zf) { f__B4E0_0BA6_0016_26D5(); return; }
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x7FC8));
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x7FCA));
	emu_push(emu_cs); emu_push(0x0BA4); emu_cs = 0x3520; ovl__3520(4);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { ovl__34E0(0xFF); }
	f__B4E0_0BA4_0018_5355();
}

/**
 * Decompiled function f__B4E0_0BA4_0018_5355()
 *
 * @name f__B4E0_0BA4_0018_5355
 * @implements B4E0:0BA4:0018:5355 ()
 *
 * Called From: B4E0:0BA4:001E:6070
 */
void f__B4E0_0BA4_0018_5355()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00, -0x7FCE));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00, -0x7FCC));
	if (emu_flags.zf) { emu_ip = 0x0BBE; emu_last_cs = 0xB4E0; emu_last_ip = 0x0BAD; emu_last_length = 0x0018; emu_last_crc = 0x5355; emu_call(); return; } // Jump does not resolve
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x7FCC));
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x7FCE));
	emu_push(emu_cs); emu_push(0x0BBC); emu_cs = 0x3520; ovl__3520(3);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { ovl__34E0(0xFF); }
	f__B4E0_0BBC_0018_7EDD();
}

/**
 * Decompiled function f__B4E0_0BA6_0016_26D5()
 *
 * @name f__B4E0_0BA6_0016_26D5
 * @implements B4E0:0BA6:0016:26D5 ()
 *
 * Called From: B4E0:0B95:001E:6070
 */
void f__B4E0_0BA6_0016_26D5()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00, -0x7FCE));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00, -0x7FCC));
	if (emu_flags.zf) { f__B4E0_0BBE_0016_0B5D(); return; }
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x7FCC));
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x7FCE));
	emu_push(emu_cs); emu_push(0x0BBC); emu_cs = 0x3520; emu_ip = 0x0BEB; emu_last_cs = 0xB4E0; emu_last_ip = 0x0BB7; emu_last_length = 0x0016; emu_last_crc = 0x26D5; emu_call(); // Jump does not resolve
	f__B4E0_0BBC_0018_7EDD();
}

/**
 * Decompiled function f__B4E0_0BBC_0018_7EDD()
 *
 * @name f__B4E0_0BBC_0018_7EDD
 * @implements B4E0:0BBC:0018:7EDD ()
 *
 * Called From: B4E0:0BBC:0018:5355
 */
void f__B4E0_0BBC_0018_7EDD()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00, -0x7FD2));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00, -0x7FD0));
	if (emu_flags.zf) { emu_ip = 0x0BD6; emu_last_cs = 0xB4E0; emu_last_ip = 0x0BC5; emu_last_length = 0x0018; emu_last_crc = 0x7EDD; emu_call(); return; } // Jump does not resolve
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x7FD0));
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x7FD2));
	emu_push(emu_cs); emu_push(0x0BD4); emu_cs = 0x3520; ovl__3520(3);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { ovl__34E0(0xFF); }
	f__B4E0_0BD4_001A_C8D3();
}

/**
 * Decompiled function f__B4E0_0BBE_0016_0B5D()
 *
 * @name f__B4E0_0BBE_0016_0B5D
 * @implements B4E0:0BBE:0016:0B5D ()
 *
 * Called From: B4E0:0BAD:0016:26D5
 */
void f__B4E0_0BBE_0016_0B5D()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00, -0x7FD2));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00, -0x7FD0));
	if (emu_flags.zf) { f__B4E0_0BD6_0018_1ED2(); return; }
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x7FD0));
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x7FD2));
	emu_push(emu_cs); emu_push(0x0BD4); emu_cs = 0x3520; emu_ip = 0x0C03; emu_last_cs = 0xB4E0; emu_last_ip = 0x0BCF; emu_last_length = 0x0016; emu_last_crc = 0x0B5D; emu_call(); // Jump does not resolve
	f__B4E0_0BD4_001A_C8D3();
}

/**
 * Decompiled function f__B4E0_0BD4_001A_C8D3()
 *
 * @name f__B4E0_0BD4_001A_C8D3
 * @implements B4E0:0BD4:001A:C8D3 ()
 *
 * Called From: B4E0:0BD4:0018:7EDD
 */
void f__B4E0_0BD4_001A_C8D3()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x7FD4), 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x7FD6), 0x0);
	emu_movw(&emu_di, 0x8);
	emu_movw(&emu_ax.x, 0x5);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0BEE); emu_cs = 0x252E; f__252E_0001_0018_48C0();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { ovl__34E0(0xFF); }
	f__B4E0_0BEE_0019_CD43();
}

/**
 * Decompiled function f__B4E0_0BD6_0018_1ED2()
 *
 * @name f__B4E0_0BD6_0018_1ED2
 * @implements B4E0:0BD6:0018:1ED2 ()
 *
 * Called From: B4E0:0BC5:0016:0B5D
 */
void f__B4E0_0BD6_0018_1ED2()
{
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x7FD4), 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x7FD6), 0x0);
	emu_movw(&emu_di, 0x8);
	emu_movw(&emu_ax.x, 0x5);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0BEE); emu_cs = 0x252E; f__252E_0001_0018_48C0();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { ovl__34E0(0xFF); }
	f__B4E0_0BEE_0019_CD43();
}

/**
 * Decompiled function f__B4E0_0BEE_0019_CD43()
 *
 * @name f__B4E0_0BEE_0019_CD43
 * @implements B4E0:0BEE:0019:CD43 ()
 *
 * Called From: B4E0:0BEE:0018:1ED2
 * Called From: B4E0:0BEE:001A:C8D3
 */
void f__B4E0_0BEE_0019_CD43()
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
	emu_push(emu_cs); emu_push(0x0C07); emu_cs = 0x01F7; f__01F7_2947_0014_9C5E();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { ovl__34E0(0xFF); }
	f__B4E0_0C07_0008_EE64();
}

/**
 * Decompiled function f__B4E0_0C07_0008_EE64()
 *
 * @name f__B4E0_0C07_0008_EE64
 * @implements B4E0:0C07:0008:EE64 ()
 *
 * Called From: B4E0:0C07:0019:CD43
 */
void f__B4E0_0C07_0008_EE64()
{
	emu_addws(&emu_sp, 0x8);
	emu_xorw(&emu_si, emu_si);
	f__B4E0_0CDA_0008_F712(); return;
}

/**
 * Decompiled function f__B4E0_0C0F_00AA_1157()
 *
 * @name f__B4E0_0C0F_00AA_1157
 * @implements B4E0:0C0F:00AA:1157 ()
 *
 * Called From: B4E0:0CDF:0008:F712
 * Called From: B4E0:0CDF:001D:24FB
 * Called From: B4E0:0CDF:0010:EBE3
 */
void f__B4E0_0C0F_00AA_1157()
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
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00, -0x7FD6));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00, -0x7FD4));
	if (emu_flags.zf) { f__B4E0_0CC5_001D_24FB(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x7FD4));
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x7FD6));
	emu_push(emu_cs); emu_push(0x0CB9); emu_cs = 0x348B; ovl__348B(0);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { ovl__34E0(0xFF); }
	f__B4E0_0CB9_000C_1379();
}

/**
 * Decompiled function f__B4E0_0CB9_000C_1379()
 *
 * @name f__B4E0_0CB9_000C_1379
 * @implements B4E0:0CB9:000C:1379 ()
 *
 * Called From: B4E0:0CB9:00AA:1157
 */
void f__B4E0_0CB9_000C_1379()
{
	emu_addws(&emu_sp, 0x8);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x7FD4), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x7FD6), emu_ax.x);
	f__B4E0_0CD2_0010_EBE3(); return;
}

/**
 * Decompiled function f__B4E0_0CC5_001D_24FB()
 *
 * @name f__B4E0_0CC5_001D_24FB
 * @implements B4E0:0CC5:001D:24FB ()
 *
 * Called From: B4E0:0CA4:00AA:1157
 */
void f__B4E0_0CC5_001D_24FB()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x7FD4), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x7FD6), emu_dx.x);
	emu_addws(&emu_di, 0x8);
	emu_addws(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x3C);
	emu_incw(&emu_si);
	emu_cmpws(&emu_si, 0xD);
	if (!emu_flags.cf) { emu_ip = 0x0CE2; emu_last_cs = 0xB4E0; emu_last_ip = 0x0CDD; emu_last_length = 0x001D; emu_last_crc = 0x24FB; emu_call(); return; } // Jump does not resolve
	f__B4E0_0C0F_00AA_1157(); return;
}

/**
 * Decompiled function f__B4E0_0CD2_0010_EBE3()
 *
 * @name f__B4E0_0CD2_0010_EBE3
 * @implements B4E0:0CD2:0010:EBE3 ()
 *
 * Called From: B4E0:0CC3:000C:1379
 */
void f__B4E0_0CD2_0010_EBE3()
{
	emu_addws(&emu_di, 0x8);
	emu_addws(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x3C);
	emu_incw(&emu_si);
	emu_cmpws(&emu_si, 0xD);
	if (!emu_flags.cf) { f__B4E0_0CE2_0011_0F53(); return; }
	f__B4E0_0C0F_00AA_1157(); return;
}

/**
 * Decompiled function f__B4E0_0CDA_0008_F712()
 *
 * @name f__B4E0_0CDA_0008_F712
 * @implements B4E0:0CDA:0008:F712 ()
 *
 * Called From: B4E0:0C0C:0008:EE64
 */
void f__B4E0_0CDA_0008_F712()
{
	emu_cmpws(&emu_si, 0xD);
	if (!emu_flags.cf) { emu_ip = 0x0CE2; emu_last_cs = 0xB4E0; emu_last_ip = 0x0CDD; emu_last_length = 0x0008; emu_last_crc = 0xF712; emu_call(); return; } // Jump does not resolve
	f__B4E0_0C0F_00AA_1157(); return;
}

/**
 * Decompiled function f__B4E0_0CE2_0011_0F53()
 *
 * @name f__B4E0_0CE2_0011_0F53
 * @implements B4E0:0CE2:0011:0F53 ()
 *
 * Called From: B4E0:0CDD:0010:EBE3
 */
void f__B4E0_0CE2_0011_0F53()
{
	emu_subws(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x3C);
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x7FD4));
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x7FD6));
	emu_push(emu_cs); emu_push(0x0CF3); emu_cs = 0x348B; ovl__348B(1);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { ovl__34E0(0xFF); }
	f__B4E0_0CF3_000D_845D();
}

/**
 * Decompiled function f__B4E0_0CF3_000D_845D()
 *
 * @name f__B4E0_0CF3_000D_845D
 * @implements B4E0:0CF3:000D:845D ()
 *
 * Called From: B4E0:0CF3:0011:0F53
 */
void f__B4E0_0CF3_000D_845D()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x0D00); emu_cs = 0x348B; ovl__348B(1);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { ovl__34E0(0xFF); }
	f__B4E0_0D00_002B_854A();
}

/**
 * Decompiled function f__B4E0_0D00_002B_854A()
 *
 * @name f__B4E0_0D00_002B_854A
 * @implements B4E0:0D00:002B:854A ()
 *
 * Called From: B4E0:0D00:000D:845D
 */
void f__B4E0_0D00_002B_854A()
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
	f__B4E0_0D2B_001F_C8D2();
}

/**
 * Decompiled function f__B4E0_0D2B_001F_C8D2()
 *
 * @name f__B4E0_0D2B_001F_C8D2
 * @implements B4E0:0D2B:001F:C8D2 ()
 *
 * Called From: B4E0:0D2B:002B:854A
 */
void f__B4E0_0D2B_001F_C8D2()
{
	emu_addws(&emu_sp, 0x10);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x7FC8), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x7FCA), emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x7FC8));
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x7FCA));
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x7FD4));
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x7FD6));
	emu_push(emu_cs); emu_push(0x0D4A); emu_cs = 0x348B; ovl__348B(0);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { ovl__34E0(0xFF); }
	f__B4E0_0D4A_0027_4045();
}

/**
 * Decompiled function f__B4E0_0D4A_0027_4045()
 *
 * @name f__B4E0_0D4A_0027_4045
 * @implements B4E0:0D4A:0027:4045 ()
 *
 * Called From: B4E0:0D4A:001F:C8D2
 */
void f__B4E0_0D4A_0027_4045()
{
	emu_addws(&emu_sp, 0x8);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x7FD4), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x7FD6), emu_ax.x);
	emu_addws(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x3C);
	emu_addws(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x3C);
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0xF);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x7FD4));
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x7FD6));
	emu_push(emu_cs); emu_push(0x0D71); emu_cs = 0x348B; ovl__348B(3);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { ovl__34E0(0xFF); }
	f__B4E0_0D71_0037_51BE();
}

/**
 * Decompiled function f__B4E0_0D71_0037_51BE()
 *
 * @name f__B4E0_0D71_0037_51BE
 * @implements B4E0:0D71:0037:51BE ()
 *
 * Called From: B4E0:0D71:0027:4045
 */
void f__B4E0_0D71_0037_51BE()
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
	f__B4E0_0DA8_003E_4A92();
}

/**
 * Decompiled function f__B4E0_0DA8_003E_4A92()
 *
 * @name f__B4E0_0DA8_003E_4A92
 * @implements B4E0:0DA8:003E:4A92 ()
 *
 * Called From: B4E0:0DA8:0037:51BE
 */
void f__B4E0_0DA8_003E_4A92()
{
	emu_addws(&emu_sp, 0x16);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x7FCC), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x7FCE), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x6), 0x0);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x8), 0x0);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x1C), 0x8);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x7FD4));
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x7FD6));
	emu_push(emu_cs); emu_push(0x0DE6); emu_cs = 0x348B; ovl__348B(0);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { ovl__34E0(0xFF); }
	f__B4E0_0DE6_0022_A0B5();
}

/**
 * Decompiled function f__B4E0_0DE6_0022_A0B5()
 *
 * @name f__B4E0_0DE6_0022_A0B5
 * @implements B4E0:0DE6:0022:A0B5 ()
 *
 * Called From: B4E0:0DE6:003E:4A92
 */
void f__B4E0_0DE6_0022_A0B5()
{
	emu_addws(&emu_sp, 0x8);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x7FD4), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x7FD6), emu_ax.x);
	emu_addws(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x3C);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0xF);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x7FD4));
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x7FD6));
	emu_push(emu_cs); emu_push(0x0E08); emu_cs = 0x348B; ovl__348B(3);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { ovl__34E0(0xFF); }
	f__B4E0_0E08_0037_F63E();
}

/**
 * Decompiled function f__B4E0_0E08_0037_F63E()
 *
 * @name f__B4E0_0E08_0037_F63E
 * @implements B4E0:0E08:0037:F63E ()
 *
 * Called From: B4E0:0E08:0022:A0B5
 */
void f__B4E0_0E08_0037_F63E()
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
	f__B4E0_0E3F_003E_4AAE();
}

/**
 * Decompiled function f__B4E0_0E3F_003E_4AAE()
 *
 * @name f__B4E0_0E3F_003E_4AAE
 * @implements B4E0:0E3F:003E:4AAE ()
 *
 * Called From: B4E0:0E3F:0037:F63E
 */
void f__B4E0_0E3F_003E_4AAE()
{
	emu_addws(&emu_sp, 0x16);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x7FD0), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x7FD2), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x6), 0x0);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x8), 0x0);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x1C), 0x8);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x7FD4));
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x7FD6));
	emu_push(emu_cs); emu_push(0x0E7D); emu_cs = 0x348B; ovl__348B(0);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { ovl__34E0(0xFF); }
	f__B4E0_0E7D_001F_9659();
}

/**
 * Decompiled function f__B4E0_0E7D_001F_9659()
 *
 * @name f__B4E0_0E7D_001F_9659
 * @implements B4E0:0E7D:001F:9659 ()
 *
 * Called From: B4E0:0E7D:003E:4AAE
 */
void f__B4E0_0E7D_001F_9659()
{
	emu_addws(&emu_sp, 0x8);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x7FD4), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x7FD6), emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x7FD8));
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x7FDA));
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x7FD4));
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x7FD6));
	emu_push(emu_cs); emu_push(0x0E9C); emu_cs = 0x348B; ovl__348B(0);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { ovl__34E0(0xFF); }
	f__B4E0_0E9C_0017_5038();
}

/**
 * Decompiled function f__B4E0_0E9C_0017_5038()
 *
 * @name f__B4E0_0E9C_0017_5038
 * @implements B4E0:0E9C:0017:5038 ()
 *
 * Called From: B4E0:0E9C:001F:9659
 */
void f__B4E0_0E9C_0017_5038()
{
	emu_addws(&emu_sp, 0x8);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x7FD4), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x7FD6), emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x7FD8));
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x7FDA));
	emu_push(emu_cs); emu_push(0x0EB3); emu_cs = 0x34A2; ovl__34A2(0);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { ovl__34E0(0xFF); }
	f__B4E0_0EB3_0004_04F4();
}

/**
 * Decompiled function f__B4E0_0EB3_0004_04F4()
 *
 * @name f__B4E0_0EB3_0004_04F4
 * @implements B4E0:0EB3:0004:04F4 ()
 *
 * Called From: B4E0:0EB3:0017:5038
 */
void f__B4E0_0EB3_0004_04F4()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	f__B4E0_0EB7_0006_137A(); return;
}

/**
 * Decompiled function f__B4E0_0EB7_0006_137A()
 *
 * @name f__B4E0_0EB7_0006_137A
 * @implements B4E0:0EB7:0006:137A ()
 *
 * Called From: B4E0:0EB5:0004:04F4
 */
void f__B4E0_0EB7_0006_137A()
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

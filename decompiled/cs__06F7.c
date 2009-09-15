/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__06F7_0008_0018_013C()
 *
 * @name f__06F7_0008_0018_013C
 * @implements 06F7:0008:0018:013C ()
 *
 * Called From: 1A34:04BC:004B:E51D
 * Called From: 1A34:0655:0035:F69B
 */
void f__06F7_0008_0018_013C()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x24);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_di, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_cmpws(&emu_di, 0xB);
	if (!emu_flags.zf) { f__06F7_0020_0011_6880(); return; }
	emu_movw(&emu_ax.x, 0x20);
	emu_ip = 0x0023; emu_last_cs = 0x06F7; emu_last_ip = 0x001E; emu_last_length = 0x0018; emu_last_crc = 0x013C; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__06F7_0020_0011_6880()
 *
 * @name f__06F7_0020_0011_6880
 * @implements 06F7:0020:0011:6880 ()
 *
 * Called From: 06F7:0019:0018:013C
 */
void f__06F7_0020_0011_6880()
{
	emu_movw(&emu_ax.x, 0x10);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x20), emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_cs); emu_push(0x0031); emu_cs = 0x0F3F; f__0F3F_0086_0017_9220();
	f__06F7_0031_000F_F17A();
}

/**
 * Decompiled function f__06F7_0031_000F_F17A()
 *
 * @name f__06F7_0031_000F_F17A
 * @implements 06F7:0031:000F:F17A ()
 *
 * Called From: 06F7:0031:0011:6880
 */
void f__06F7_0031_000F_F17A()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x37B0), 0x0);
	if (emu_flags.zf) { f__06F7_0040_0007_32CC(); return; }
	emu_ip = 0x030B; emu_last_cs = 0x06F7; emu_last_ip = 0x003D; emu_last_length = 0x000F; emu_last_crc = 0xF17A; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__06F7_0040_0007_32CC()
 *
 * @name f__06F7_0040_0007_32CC
 * @implements 06F7:0040:0007:32CC ()
 *
 * Called From: 06F7:003B:000F:F17A
 */
void f__06F7_0040_0007_32CC()
{
	emu_orw(&emu_si, emu_si);
	if (!emu_flags.zf) { f__06F7_0047_0012_EA1A(); return; }
	emu_ip = 0x030B; emu_last_cs = 0x06F7; emu_last_ip = 0x0044; emu_last_length = 0x0007; emu_last_crc = 0x32CC; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__06F7_0047_0012_EA1A()
 *
 * @name f__06F7_0047_0012_EA1A
 * @implements 06F7:0047:0012:EA1A ()
 *
 * Called From: 06F7:0042:0007:32CC
 */
void f__06F7_0047_0012_EA1A()
{
	emu_movw(&emu_ax.x, 0xFFFF);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0xFFFF);
	emu_push(emu_ax.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0x6);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0059); emu_cs = 0x0FE4; f__0FE4_0243_003A_DEE2();
	f__06F7_0059_0006_3DE0();
}

/**
 * Decompiled function f__06F7_0059_0006_3DE0()
 *
 * @name f__06F7_0059_0006_3DE0
 * @implements 06F7:0059:0006:3DE0 ()
 *
 * Called From: 06F7:0059:0012:EA1A
 */
void f__06F7_0059_0006_3DE0()
{
	emu_addws(&emu_sp, 0x8);
	f__06F7_02FA_0011_3CCE(); return;
}

/**
 * Decompiled function f__06F7_005F_002E_47F3()
 *
 * @name f__06F7_005F_002E_47F3
 * @implements 06F7:005F:002E:47F3 ()
 *
 * Called From: 06F7:0308:0011:3CCE
 * Called From: 06F7:0308:0013:3F62
 */
void f__06F7_005F_002E_47F3()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x2));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_movw(&emu_dx.x, 0x5A);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_addw(&emu_ax.x, 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x2D07);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_cs); emu_push(0x008D); emu_cs = 0x0F3F; f__0F3F_00B4_002A_0887();
	f__06F7_008D_0015_13EF();
}

/**
 * Decompiled function f__06F7_008D_0015_13EF()
 *
 * @name f__06F7_008D_0015_13EF
 * @implements 06F7:008D:0015:13EF ()
 *
 * Called From: 06F7:008D:002E:47F3
 */
void f__06F7_008D_0015_13EF()
{
	emu_addws(&emu_sp, 0x8);
	emu_movb(&emu_cx.l, 0x4);
	emu_sarw(&emu_ax.x, emu_cx.l);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x1E), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x1E));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x20));
	if ((emu_flags.sf != emu_flags.of)) { f__06F7_00A2_0035_1FCA(); return; }
	f__06F7_02EE_000A_75EF(); return;
}

/**
 * Decompiled function f__06F7_00A2_0035_1FCA()
 *
 * @name f__06F7_00A2_0035_1FCA
 * @implements 06F7:00A2:0035:1FCA ()
 *
 * Called From: 06F7:009D:0015:13EF
 */
void f__06F7_00A2_0035_1FCA()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x2), 0x19);
	if (!emu_flags.zf) { f__06F7_00B1_0026_2A43(); return; }
	emu_cmpws(&emu_di, 0xD);
	if (emu_flags.zf) { emu_ip = 0x00DA; emu_last_cs = 0x06F7; emu_last_ip = 0x00AF; emu_last_length = 0x0035; emu_last_crc = 0x1FCA; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x2), 0x1A);
	if (emu_flags.zf) { emu_ip = 0x00DA; emu_last_cs = 0x06F7; emu_last_ip = 0x00B9; emu_last_length = 0x0035; emu_last_crc = 0x1FCA; emu_call(); return; } // Jump does not resolve
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x1E));
	emu_movb(&emu_cx.l, 0x2);
	emu_sarw(&emu_ax.x, emu_cx.l);
	emu_movw(&emu_dx.x, emu_si);
	emu_movb(&emu_cx.l, emu_ax.l);
	emu_shrw(&emu_dx.x, emu_cx.l);
	emu_push(emu_dx.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_push(emu_cs); emu_push(0x00D7); emu_cs = 0x1A34; emu_ip = 0x0C48; emu_last_cs = 0x06F7; emu_last_ip = 0x00D2; emu_last_length = 0x0035; emu_last_crc = 0x1FCA; emu_call(); // Jump does not resolve
	f__06F7_00D7_0014_F4D0();
}

/**
 * Decompiled function f__06F7_00B1_0026_2A43()
 *
 * @name f__06F7_00B1_0026_2A43
 * @implements 06F7:00B1:0026:2A43 ()
 *
 * Called From: 06F7:00AA:0035:1FCA
 */
void f__06F7_00B1_0026_2A43()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x2), 0x1A);
	if (emu_flags.zf) { emu_ip = 0x00DA; emu_last_cs = 0x06F7; emu_last_ip = 0x00B9; emu_last_length = 0x0026; emu_last_crc = 0x2A43; emu_call(); return; } // Jump does not resolve
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x1E));
	emu_movb(&emu_cx.l, 0x2);
	emu_sarw(&emu_ax.x, emu_cx.l);
	emu_movw(&emu_dx.x, emu_si);
	emu_movb(&emu_cx.l, emu_ax.l);
	emu_shrw(&emu_dx.x, emu_cx.l);
	emu_push(emu_dx.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_push(emu_cs); emu_push(0x00D7); emu_cs = 0x1A34; f__1A34_0B71_0033_CB84();
	f__06F7_00D7_0014_F4D0();
}

/**
 * Decompiled function f__06F7_00D7_0014_F4D0()
 *
 * @name f__06F7_00D7_0014_F4D0
 * @implements 06F7:00D7:0014:F4D0 ()
 *
 * Called From: 06F7:00D7:0026:2A43
 */
void f__06F7_00D7_0014_F4D0()
{
	emu_addws(&emu_sp, 0x8);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x8));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3A38));
	if (!emu_flags.zf) { f__06F7_00EB_0008_DD44(); return; }
	f__06F7_02EE_000A_75EF(); return;
}

/**
 * Decompiled function f__06F7_00EB_0008_DD44()
 *
 * @name f__06F7_00EB_0008_DD44
 * @implements 06F7:00EB:0008:DD44 ()
 *
 * Called From: 06F7:00E6:0014:F4D0
 */
void f__06F7_00EB_0008_DD44()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_push(emu_cs); emu_push(0x00F3); emu_cs = 0x167E; f__167E_0284_000C_AAF8();
	f__06F7_00F3_0012_C189();
}

/**
 * Decompiled function f__06F7_00F3_0012_C189()
 *
 * @name f__06F7_00F3_0012_C189
 * @implements 06F7:00F3:0012:C189 ()
 *
 * Called From: 06F7:00F3:0008:DD44
 */
void f__06F7_00F3_0012_C189()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x12), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x14), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x12));
	if (!emu_flags.zf) { f__06F7_0105_0013_7680(); return; }
	emu_ip = 0x02EE; emu_last_cs = 0x06F7; emu_last_ip = 0x0102; emu_last_length = 0x0012; emu_last_crc = 0xC189; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__06F7_0105_0013_7680()
 *
 * @name f__06F7_0105_0013_7680
 * @implements 06F7:0105:0013:7680 ()
 *
 * Called From: 06F7:0100:0012:C189
 */
void f__06F7_0105_0013_7680()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xE));
	if (!emu_flags.zf) { emu_ip = 0x0118; emu_last_cs = 0x06F7; emu_last_ip = 0x010E; emu_last_length = 0x0013; emu_last_crc = 0x7680; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x10));
	if (!emu_flags.zf) { f__06F7_0118_000B_2C23(); return; }
	emu_ip = 0x02EE; emu_last_cs = 0x06F7; emu_last_ip = 0x0115; emu_last_length = 0x0013; emu_last_crc = 0x7680; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__06F7_0118_000B_2C23()
 *
 * @name f__06F7_0118_000B_2C23
 * @implements 06F7:0118:000B:2C23 ()
 *
 * Called From: 06F7:0113:0013:7680
 */
void f__06F7_0118_000B_2C23()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_push(emu_cs); emu_push(0x0123); emu_cs = 0x1A34; f__1A34_3623_0010_3F68();
	f__06F7_0123_000E_733B();
}

/**
 * Decompiled function f__06F7_0123_000E_733B()
 *
 * @name f__06F7_0123_000E_733B
 * @implements 06F7:0123:000E:733B ()
 *
 * Called From: 06F7:0123:000B:2C23
 */
void f__06F7_0123_000E_733B()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_push(emu_cs); emu_push(0x0131); emu_cs = 0x1A34; f__1A34_3623_0010_3F68();
	f__06F7_0131_0008_715C();
}

/**
 * Decompiled function f__06F7_0131_0008_715C()
 *
 * @name f__06F7_0131_0008_715C
 * @implements 06F7:0131:0008:715C ()
 *
 * Called From: 06F7:0131:000E:733B
 */
void f__06F7_0131_0008_715C()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0139); emu_cs = 0x1423; f__1423_0F34_0017_4318();
	f__06F7_0139_0009_D5CA();
}

/**
 * Decompiled function f__06F7_0139_0009_D5CA()
 *
 * @name f__06F7_0139_0009_D5CA
 * @implements 06F7:0139:0009:D5CA ()
 *
 * Called From: 06F7:0139:0008:715C
 */
void f__06F7_0139_0009_D5CA()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (emu_flags.zf) { f__06F7_0142_000B_2FD9(); return; }
	f__06F7_02EE_000A_75EF(); return;
}

/**
 * Decompiled function f__06F7_0142_000B_2FD9()
 *
 * @name f__06F7_0142_000B_2FD9
 * @implements 06F7:0142:000B:2FD9 ()
 *
 * Called From: 06F7:013D:0009:D5CA
 */
void f__06F7_0142_000B_2FD9()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_push(emu_cs); emu_push(0x014D); emu_cs = 0x0FE4; f__0FE4_0632_0031_8E67();
	f__06F7_014D_0025_E426();
}

/**
 * Decompiled function f__06F7_014D_0025_E426()
 *
 * @name f__06F7_014D_0025_E426
 * @implements 06F7:014D:0025:E426 ()
 *
 * Called From: 06F7:014D:000B:2FD9
 */
void f__06F7_014D_0025_E426()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x16), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x18), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x18));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x16));
	if (emu_flags.zf) { f__06F7_01D0_0049_0422(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x18));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0xC), 0x1);
	if (!emu_flags.zf) { emu_ip = 0x0188; emu_last_cs = 0x06F7; emu_last_ip = 0x0165; emu_last_length = 0x0025; emu_last_crc = 0xE426; emu_call(); return; } // Jump does not resolve
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_push(emu_cs); emu_push(0x0172); emu_cs = 0x16BC; emu_ip = 0x01B6; emu_last_cs = 0x06F7; emu_last_ip = 0x016D; emu_last_length = 0x0025; emu_last_crc = 0xE426; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__06F7_01D0_0049_0422()
 *
 * @name f__06F7_01D0_0049_0422
 * @implements 06F7:01D0:0049:0422 ()
 *
 * Called From: 06F7:015B:0025:E426
 */
void f__06F7_01D0_0049_0422()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x2), 0x10);
	if (!emu_flags.zf) { f__06F7_0229_001F_31EB(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x2));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_movw(&emu_dx.x, 0x5A);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_dx.x, 0x2D07);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_es, emu_dx.x);
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x3C), 0x0);
	if (!emu_flags.zf) { emu_ip = 0x0229; emu_last_cs = 0x06F7; emu_last_ip = 0x01F4; emu_last_length = 0x0049; emu_last_crc = 0x0422; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x56), 0x0);
	if (!emu_flags.zf) { emu_ip = 0x0229; emu_last_cs = 0x06F7; emu_last_ip = 0x01FE; emu_last_length = 0x0049; emu_last_crc = 0x0422; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x4F), 0x1);
	if (emu_flags.zf) { emu_ip = 0x021C; emu_last_cs = 0x06F7; emu_last_ip = 0x0208; emu_last_length = 0x0049; emu_last_crc = 0x0422; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_push(emu_cs); emu_push(0x0219); emu_cs = 0x176C; emu_ip = 0x0227; emu_last_cs = 0x06F7; emu_last_ip = 0x0214; emu_last_length = 0x0049; emu_last_crc = 0x0422; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__06F7_0229_001F_31EB()
 *
 * @name f__06F7_0229_001F_31EB
 * @implements 06F7:0229:001F:31EB ()
 *
 * Called From: 06F7:01D8:0049:0422
 */
void f__06F7_0229_001F_31EB()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x2));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_movw(&emu_dx.x, 0x5A);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_dx.x, 0x2D07);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_es, emu_dx.x);
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x56), 0xFF);
	if (!emu_flags.zf) { f__06F7_0248_0032_FEE5(); return; }
	f__06F7_02EE_000A_75EF(); return;
}

/**
 * Decompiled function f__06F7_0248_0032_FEE5()
 *
 * @name f__06F7_0248_0032_FEE5
 * @implements 06F7:0248:0032:FEE5 ()
 *
 * Called From: 06F7:0243:001F:31EB
 */
void f__06F7_0248_0032_FEE5()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x8));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3A38));
	if (emu_flags.zf) { emu_ip = 0x027D; emu_last_cs = 0x06F7; emu_last_ip = 0x0254; emu_last_length = 0x0032; emu_last_crc = 0xFEE5; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x4F), 0x3);
	if (!emu_flags.zf) { f__06F7_027D_002A_E676(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), 0x200);
	if (emu_flags.zf) { emu_ip = 0x027D; emu_last_cs = 0x06F7; emu_last_ip = 0x0269; emu_last_length = 0x0032; emu_last_crc = 0xFEE5; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, 0xB);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_push(emu_cs); emu_push(0x027A); emu_cs = 0x176C; f__176C_000E_000E_8C63();
	f__06F7_027A_002D_F66A();
}

/**
 * Decompiled function f__06F7_027A_002D_F66A()
 *
 * @name f__06F7_027A_002D_F66A
 * @implements 06F7:027A:002D:F66A ()
 *
 * Called From: 06F7:027A:0032:FEE5
 */
void f__06F7_027A_002D_F66A()
{
	emu_addws(&emu_sp, 0x6);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x54), 0x0);
	if (emu_flags.zf) { emu_ip = 0x0291; emu_last_cs = 0x06F7; emu_last_ip = 0x0285; emu_last_length = 0x002D; emu_last_crc = 0xF66A; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x4F), 0xB);
	if (emu_flags.zf) { f__06F7_029B_000C_F749(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x54), 0x0);
	if (!emu_flags.zf) { emu_ip = 0x02EE; emu_last_cs = 0x06F7; emu_last_ip = 0x0299; emu_last_length = 0x002D; emu_last_crc = 0xF66A; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x54));
	emu_push(emu_cs); emu_push(0x02A7); emu_cs = 0x167E; emu_ip = 0x052B; emu_last_cs = 0x06F7; emu_last_ip = 0x02A2; emu_last_length = 0x002D; emu_last_crc = 0xF66A; emu_call(); // Jump does not resolve
	f__06F7_02A7_0015_252F();
}

/**
 * Decompiled function f__06F7_027D_002A_E676()
 *
 * @name f__06F7_027D_002A_E676
 * @implements 06F7:027D:002A:E676 ()
 *
 * Called From: 06F7:025E:0032:FEE5
 */
void f__06F7_027D_002A_E676()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x54), 0x0);
	if (emu_flags.zf) { f__06F7_0291_0016_E108(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x4F), 0xB);
	if (emu_flags.zf) { f__06F7_029B_000C_F749(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x54), 0x0);
	if (!emu_flags.zf) { f__06F7_02EE_000A_75EF(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x54));
	emu_push(emu_cs); emu_push(0x02A7); emu_cs = 0x167E; emu_ip = 0x052B; emu_last_cs = 0x06F7; emu_last_ip = 0x02A2; emu_last_length = 0x002A; emu_last_crc = 0xE676; emu_call(); // Jump does not resolve
	f__06F7_02A7_0015_252F();
}

/**
 * Decompiled function f__06F7_0291_0016_E108()
 *
 * @name f__06F7_0291_0016_E108
 * @implements 06F7:0291:0016:E108 ()
 *
 * Called From: 06F7:0285:002A:E676
 */
void f__06F7_0291_0016_E108()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x54), 0x0);
	if (!emu_flags.zf) { emu_ip = 0x02EE; emu_last_cs = 0x06F7; emu_last_ip = 0x0299; emu_last_length = 0x0016; emu_last_crc = 0xE108; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x54));
	emu_push(emu_cs); emu_push(0x02A7); emu_cs = 0x167E; f__167E_0284_000C_AAF8();
	f__06F7_02A7_0015_252F();
}

/**
 * Decompiled function f__06F7_029B_000C_F749()
 *
 * @name f__06F7_029B_000C_F749
 * @implements 06F7:029B:000C:F749 ()
 *
 * Called From: 06F7:028F:002A:E676
 * Called From: 06F7:028F:002D:F66A
 */
void f__06F7_029B_000C_F749()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x54));
	emu_push(emu_cs); emu_push(0x02A7); emu_cs = 0x167E; f__167E_0284_000C_AAF8();
	f__06F7_02A7_0015_252F();
}

/**
 * Decompiled function f__06F7_02A7_0015_252F()
 *
 * @name f__06F7_02A7_0015_252F
 * @implements 06F7:02A7:0015:252F ()
 *
 * Called From: 06F7:02A7:000C:F749
 * Called From: 06F7:02A7:0016:E108
 */
void f__06F7_02A7_0015_252F()
{
	emu_pop(&emu_cx.x);
	emu_orw(&emu_ax.x, emu_dx.x);
	if (emu_flags.zf) { f__06F7_02DD_000E_C922(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xA));
	emu_push(emu_cs); emu_push(0x02BC); emu_cs = 0x0F3F; f__0F3F_0086_0017_9220();
	f__06F7_02BC_000F_3901();
}

/**
 * Decompiled function f__06F7_02BC_000F_3901()
 *
 * @name f__06F7_02BC_000F_3901
 * @implements 06F7:02BC:000F:3901 ()
 *
 * Called From: 06F7:02BC:0015:252F
 */
void f__06F7_02BC_000F_3901()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_push(emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x54));
	emu_push(emu_cs); emu_push(0x02CB); emu_cs = 0x167E; f__167E_0162_000D_3E1A();
	f__06F7_02CB_0007_2D3A();
}

/**
 * Decompiled function f__06F7_02CB_0007_2D3A()
 *
 * @name f__06F7_02CB_0007_2D3A
 * @implements 06F7:02CB:0007:2D3A ()
 *
 * Called From: 06F7:02CB:000F:3901
 */
void f__06F7_02CB_0007_2D3A()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x02D2); emu_cs = 0x0F3F; f__0F3F_0360_0038_031A();
	f__06F7_02D2_0019_CB10();
}

/**
 * Decompiled function f__06F7_02D2_0019_CB10()
 *
 * @name f__06F7_02D2_0019_CB10
 * @implements 06F7:02D2:0019:CB10 ()
 *
 * Called From: 06F7:02D2:0007:2D3A
 */
void f__06F7_02D2_0019_CB10()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x50));
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__06F7_02EE_000A_75EF(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_push(emu_cs); emu_push(0x02EB); emu_cs = 0x1A34; f__1A34_1A66_0011_4E2C();
	f__06F7_02EB_000D_65F3();
}

/**
 * Decompiled function f__06F7_02DD_000E_C922()
 *
 * @name f__06F7_02DD_000E_C922
 * @implements 06F7:02DD:000E:C922 ()
 *
 * Called From: 06F7:02AA:0015:252F
 */
void f__06F7_02DD_000E_C922()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_push(emu_cs); emu_push(0x02EB); emu_cs = 0x1A34; f__1A34_1A66_0011_4E2C();
	f__06F7_02EB_000D_65F3();
}

/**
 * Decompiled function f__06F7_02EB_000D_65F3()
 *
 * @name f__06F7_02EB_000D_65F3
 * @implements 06F7:02EB:000D:65F3 ()
 *
 * Called From: 06F7:02EB:000E:C922
 * Called From: 06F7:02EB:0019:CB10
 */
void f__06F7_02EB_000D_65F3()
{
	emu_addws(&emu_sp, 0x6);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0x6);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x02F8); emu_cs = 0x0FE4; f__0FE4_0283_0038_0940();
	f__06F7_02F8_0013_3F62();
}

/**
 * Decompiled function f__06F7_02EE_000A_75EF()
 *
 * @name f__06F7_02EE_000A_75EF
 * @implements 06F7:02EE:000A:75EF ()
 *
 * Called From: 06F7:009F:0015:13EF
 * Called From: 06F7:00E8:0014:F4D0
 * Called From: 06F7:013F:0009:D5CA
 * Called From: 06F7:0245:001F:31EB
 * Called From: 06F7:0299:002A:E676
 * Called From: 06F7:02DB:0019:CB10
 */
void f__06F7_02EE_000A_75EF()
{
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0x6);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x02F8); emu_cs = 0x0FE4; f__0FE4_0283_0038_0940();
	f__06F7_02F8_0013_3F62();
}

/**
 * Decompiled function f__06F7_02F8_0013_3F62()
 *
 * @name f__06F7_02F8_0013_3F62
 * @implements 06F7:02F8:0013:3F62 ()
 *
 * Called From: 06F7:02F8:000A:75EF
 * Called From: 06F7:02F8:000D:65F3
 */
void f__06F7_02F8_0013_3F62()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xE));
	if (emu_flags.zf) { f__06F7_030B_0013_BFDD(); return; }
	f__06F7_005F_002E_47F3(); return;
}

/**
 * Decompiled function f__06F7_02FA_0011_3CCE()
 *
 * @name f__06F7_02FA_0011_3CCE
 * @implements 06F7:02FA:0011:3CCE ()
 *
 * Called From: 06F7:005C:0006:3DE0
 */
void f__06F7_02FA_0011_3CCE()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xE));
	if (emu_flags.zf) { emu_ip = 0x030B; emu_last_cs = 0x06F7; emu_last_ip = 0x0306; emu_last_length = 0x0011; emu_last_crc = 0x3CCE; emu_call(); return; } // Jump does not resolve
	f__06F7_005F_002E_47F3(); return;
}

/**
 * Decompiled function f__06F7_030B_0013_BFDD()
 *
 * @name f__06F7_030B_0013_BFDD
 * @implements 06F7:030B:0013:BFDD ()
 *
 * Called From: 06F7:0306:0013:3F62
 */
void f__06F7_030B_0013_BFDD()
{
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x37B0), 0x0);
	if (!emu_flags.zf) { emu_ip = 0x037A; emu_last_cs = 0x06F7; emu_last_ip = 0x0310; emu_last_length = 0x0013; emu_last_crc = 0xBFDD; emu_call(); return; } // Jump does not resolve
	emu_orw(&emu_si, emu_si);
	if (emu_flags.zf) { emu_ip = 0x037A; emu_last_cs = 0x06F7; emu_last_ip = 0x0314; emu_last_length = 0x0013; emu_last_crc = 0xBFDD; emu_call(); return; } // Jump does not resolve
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_cs); emu_push(0x031E); emu_cs = 0x34CD; ovl__34CD(30);
	f__06F7_031E_0049_7F58();
}

/**
 * Decompiled function f__06F7_031E_0049_7F58()
 *
 * @name f__06F7_031E_0049_7F58
 * @implements 06F7:031E:0049:7F58 ()
 *
 * Called From: 06F7:031E:0013:BFDD
 */
void f__06F7_031E_0049_7F58()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x1A), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x1C), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x1C));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x1A));
	if (emu_flags.zf) { f__06F7_037A_0008_EF0C(); return; }
	emu_cmpws(&emu_di, 0x2);
	if (!emu_flags.zf) { f__06F7_0359_000E_5153(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x1C));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x2));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_movw(&emu_dx.x, 0x60);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_dx.x, 0x2C94);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_es, emu_dx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x1A));
	emu_sarw(&emu_ax.x, 0x1);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x1C));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0xE));
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { emu_ip = 0x0359; emu_last_cs = 0x06F7; emu_last_ip = 0x0354; emu_last_length = 0x0049; emu_last_crc = 0x7F58; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_di, 0xF);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x1C));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x8));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0367); emu_cs = 0x1423; emu_ip = 0x11B6; emu_last_cs = 0x06F7; emu_last_ip = 0x0362; emu_last_length = 0x0049; emu_last_crc = 0x7F58; emu_call(); // Jump does not resolve
	f__06F7_0367_0010_E338();
}

/**
 * Decompiled function f__06F7_0359_000E_5153()
 *
 * @name f__06F7_0359_000E_5153
 * @implements 06F7:0359:000E:5153 ()
 *
 * Called From: 06F7:0330:0049:7F58
 */
void f__06F7_0359_000E_5153()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x1C));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x8));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0367); emu_cs = 0x1423; f__1423_0E4F_0010_5595();
	f__06F7_0367_0010_E338();
}

/**
 * Decompiled function f__06F7_0367_0010_E338()
 *
 * @name f__06F7_0367_0010_E338
 * @implements 06F7:0367:0010:E338 ()
 *
 * Called From: 06F7:0367:000E:5153
 */
void f__06F7_0367_0010_E338()
{
	emu_pop(&emu_cx.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_si);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x1A));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x1C));
	emu_push(emu_cs); emu_push(0x0377); emu_cs = 0x0C3A; f__0C3A_1216_0013_DFEC();
	f__06F7_0377_000B_F70B();
}

/**
 * Decompiled function f__06F7_0377_000B_F70B()
 *
 * @name f__06F7_0377_000B_F70B
 * @implements 06F7:0377:000B:F70B ()
 *
 * Called From: 06F7:0377:0010:E338
 */
void f__06F7_0377_000B_F70B()
{
	emu_addws(&emu_sp, 0x8);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_cs); emu_push(0x0382); emu_cs = 0x34CD; ovl__34CD(13);
	f__06F7_0382_001B_64C0();
}

/**
 * Decompiled function f__06F7_037A_0008_EF0C()
 *
 * @name f__06F7_037A_0008_EF0C
 * @implements 06F7:037A:0008:EF0C ()
 *
 * Called From: 06F7:032B:0049:7F58
 */
void f__06F7_037A_0008_EF0C()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_cs); emu_push(0x0382); emu_cs = 0x34CD; ovl__34CD(13);
	f__06F7_0382_001B_64C0();
}

/**
 * Decompiled function f__06F7_0382_001B_64C0()
 *
 * @name f__06F7_0382_001B_64C0
 * @implements 06F7:0382:001B:64C0 ()
 *
 * Called From: 06F7:0382:0008:EF0C
 * Called From: 06F7:0382:000B:F70B
 */
void f__06F7_0382_001B_64C0()
{
	emu_pop(&emu_cx.x);
	emu_cmpw(&emu_ax.x, 0xB);
	if (!emu_flags.zf) { f__06F7_03E0_0019_59C9(); return; }
	emu_orw(&emu_si, emu_si);
	if (emu_flags.zf) { emu_ip = 0x03E0; emu_last_cs = 0x06F7; emu_last_ip = 0x038A; emu_last_length = 0x001B; emu_last_crc = 0x64C0; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, 0x2C94);
	emu_movw(&emu_es, emu_ax.x);
	emu_cmpw(&emu_get_memory16(emu_es, 0x00,  0x55A), emu_si);
	if (!(emu_flags.cf || emu_flags.zf)) { emu_ip = 0x039D; emu_last_cs = 0x06F7; emu_last_ip = 0x0396; emu_last_length = 0x001B; emu_last_crc = 0x64C0; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, 0x1);
	emu_ip = 0x039F; emu_last_cs = 0x06F7; emu_last_ip = 0x039B; emu_last_length = 0x001B; emu_last_crc = 0x64C0; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__06F7_03E0_0019_59C9()
 *
 * @name f__06F7_03E0_0019_59C9
 * @implements 06F7:03E0:0019:59C9 ()
 *
 * Called From: 06F7:0386:001B:64C0
 */
void f__06F7_03E0_0019_59C9()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_bx.x, emu_di);
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_push(emu_get_memory16(emu_ds, emu_bx.x,  0x3214));
	emu_push(emu_get_memory16(emu_ds, emu_bx.x,  0x3212));
	emu_push(emu_cs);
	emu_push(0x03F9); f__06F7_0493_0015_6B5B();
	f__06F7_03F9_0009_D57B();
}

/**
 * Decompiled function f__06F7_03F9_0009_D57B()
 *
 * @name f__06F7_03F9_0009_D57B
 * @implements 06F7:03F9:0009:D57B ()
 *
 * Called From: 06F7:03F9:0019:59C9
 */
void f__06F7_03F9_0009_D57B()
{
	emu_addws(&emu_sp, 0x8);
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
 * Decompiled function f__06F7_0493_0015_6B5B()
 *
 * @name f__06F7_0493_0015_6B5B
 * @implements 06F7:0493:0015:6B5B ()
 *
 * Called From: 06F7:03F6:0019:59C9
 */
void f__06F7_0493_0015_6B5B()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x4);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (!emu_flags.zf) { f__06F7_04A8_000B_E544(); return; }
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_ip = 0x0576; emu_last_cs = 0x06F7; emu_last_ip = 0x04A5; emu_last_length = 0x0015; emu_last_crc = 0x6B5B; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__06F7_04A5_0003_0470()
 *
 * @name f__06F7_04A5_0003_0470
 * @implements 06F7:04A5:0003:0470 ()
 *
 * Called From: 06F7:0567:008D:99DA
 */
void f__06F7_04A5_0003_0470()
{
	f__06F7_0576_0006_137A(); return;
}

/**
 * Decompiled function f__06F7_04A8_000B_E544()
 *
 * @name f__06F7_04A8_000B_E544
 * @implements 06F7:04A8:000B:E544 ()
 *
 * Called From: 06F7:04A1:0015:6B5B
 */
void f__06F7_04A8_000B_E544()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_cs); emu_push(0x04B3); emu_cs = 0x0F3F; f__0F3F_0086_0017_9220();
	f__06F7_04B3_000A_239D();
}

/**
 * Decompiled function f__06F7_04B3_000A_239D()
 *
 * @name f__06F7_04B3_000A_239D
 * @implements 06F7:04B3:000A:239D ()
 *
 * Called From: 06F7:04B3:000B:E544
 */
void f__06F7_04B3_000A_239D()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_di, emu_ax.x);
	emu_push(emu_di);
	emu_push(emu_cs);
	emu_push(0x04BD); f__06F7_057C_001F_3A4C();
	f__06F7_04BD_0006_1AA8();
}

/**
 * Decompiled function f__06F7_04BD_0006_1AA8()
 *
 * @name f__06F7_04BD_0006_1AA8
 * @implements 06F7:04BD:0006:1AA8 ()
 *
 * Called From: 06F7:04BD:000A:239D
 */
void f__06F7_04BD_0006_1AA8()
{
	emu_pop(&emu_cx.x);
	emu_xorw(&emu_si, emu_si);
	f__06F7_056B_0008_FC66(); return;
}

/**
 * Decompiled function f__06F7_04C3_001A_9263()
 *
 * @name f__06F7_04C3_001A_9263
 * @implements 06F7:04C3:001A:9263 ()
 *
 * Called From: 06F7:0570:0008:FC66
 * Called From: 06F7:0570:0009:7066
 */
void f__06F7_04C3_001A_9263()
{
	emu_movw(&emu_ax.x, emu_si);
	emu_movw(&emu_dx.x, 0x14);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x395A));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0xC));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0xE));
	if (emu_flags.zf) { f__06F7_04DD_008D_99DA(); return; }
	f__06F7_056A_0009_7066(); return;
}

/**
 * Decompiled function f__06F7_04DD_008D_99DA()
 *
 * @name f__06F7_04DD_008D_99DA
 * @implements 06F7:04DD:008D:99DA ()
 *
 * Called From: 06F7:04D8:001A:9263
 */
void f__06F7_04DD_008D_99DA()
{
	emu_movw(&emu_ax.x, emu_si);
	emu_movw(&emu_dx.x, 0x14);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x395C));
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00,  0x395A));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_bx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), emu_si);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0xE), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0xC), emu_dx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x9), 0x0);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0xA), 0x0);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x12), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x10), emu_dx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x7), 0x0);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76AE));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76AC));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x2), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x0), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x3210), 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x320E), 0x0);
	emu_movw(&emu_ax.x, emu_di);
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x39EA));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_orb(&emu_get_memory8(emu_es, emu_bx.x,  0x2), 0x80);
	emu_movw(&emu_ax.x, 0x1);
	f__06F7_04A5_0003_0470(); return;
}

/**
 * Decompiled function f__06F7_056A_0009_7066()
 *
 * @name f__06F7_056A_0009_7066
 * @implements 06F7:056A:0009:7066 ()
 *
 * Called From: 06F7:04DA:001A:9263
 */
void f__06F7_056A_0009_7066()
{
	emu_incw(&emu_si);
	emu_cmpws(&emu_si, 0x20);
	if (!(emu_flags.sf != emu_flags.of)) { emu_ip = 0x0573; emu_last_cs = 0x06F7; emu_last_ip = 0x056E; emu_last_length = 0x0009; emu_last_crc = 0x7066; emu_call(); return; } // Jump does not resolve
	f__06F7_04C3_001A_9263(); return;
}

/**
 * Decompiled function f__06F7_056B_0008_FC66()
 *
 * @name f__06F7_056B_0008_FC66
 * @implements 06F7:056B:0008:FC66 ()
 *
 * Called From: 06F7:04C0:0006:1AA8
 */
void f__06F7_056B_0008_FC66()
{
	emu_cmpws(&emu_si, 0x20);
	if (!(emu_flags.sf != emu_flags.of)) { emu_ip = 0x0573; emu_last_cs = 0x06F7; emu_last_ip = 0x056E; emu_last_length = 0x0008; emu_last_crc = 0xFC66; emu_call(); return; } // Jump does not resolve
	f__06F7_04C3_001A_9263(); return;
}

/**
 * Decompiled function f__06F7_0576_0006_137A()
 *
 * @name f__06F7_0576_0006_137A
 * @implements 06F7:0576:0006:137A ()
 *
 * Called From: 06F7:04A5:0003:0470
 */
void f__06F7_0576_0006_137A()
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
 * Decompiled function f__06F7_057C_001F_3A4C()
 *
 * @name f__06F7_057C_001F_3A4C
 * @implements 06F7:057C:001F:3A4C ()
 *
 * Called From: 06F7:04BA:000A:239D
 */
void f__06F7_057C_001F_3A4C()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_di, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_di);
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x39EA));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_testb(&emu_get_memory8(emu_es, emu_bx.x,  0x2), 0x80);
	if (emu_flags.zf) { f__06F7_05FA_0004_0768(); return; }
	emu_xorw(&emu_si, emu_si);
	f__06F7_05F0_000A_D337(); return;
}

/**
 * Decompiled function f__06F7_059B_0031_AE21()
 *
 * @name f__06F7_059B_0031_AE21
 * @implements 06F7:059B:0031:AE21 ()
 *
 * Called From: 06F7:05F3:000A:D337
 * Called From: 06F7:05F3:000E:C30D
 * Called From: 06F7:05F3:000B:E335
 */
void f__06F7_059B_0031_AE21()
{
	emu_movw(&emu_ax.x, emu_si);
	emu_movw(&emu_dx.x, 0x14);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x395A));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0xC));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0xE));
	if (emu_flags.zf) { f__06F7_05EF_000B_E335(); return; }
	emu_movw(&emu_ax.x, emu_si);
	emu_movw(&emu_dx.x, 0x14);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x395A));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x12));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x10));
	emu_push(emu_cs); emu_push(0x05CC); emu_cs = 0x0F3F; f__0F3F_0086_0017_9220();
	f__06F7_05CC_0020_A751();
}

/**
 * Decompiled function f__06F7_05CC_0020_A751()
 *
 * @name f__06F7_05CC_0020_A751
 * @implements 06F7:05CC:0020:A751 ()
 *
 * Called From: 06F7:05CC:0031:AE21
 */
void f__06F7_05CC_0020_A751()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_cmpw(&emu_ax.x, emu_di);
	if (!emu_flags.zf) { emu_ip = 0x05EF; emu_last_cs = 0x06F7; emu_last_ip = 0x05D0; emu_last_length = 0x0020; emu_last_crc = 0xA751; emu_call(); return; } // Jump does not resolve
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_si);
	emu_movw(&emu_dx.x, 0x14);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x395A));
	emu_addw(&emu_dx.x, emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x395C));
	emu_push(emu_dx.x);
	emu_push(emu_cs);
	emu_push(0x05EC); f__06F7_0A6C_0016_DAEC();
	f__06F7_05EC_000E_C30D();
}

/**
 * Decompiled function f__06F7_05EC_000E_C30D()
 *
 * @name f__06F7_05EC_000E_C30D
 * @implements 06F7:05EC:000E:C30D ()
 *
 * Called From: 06F7:05EC:0020:A751
 */
void f__06F7_05EC_000E_C30D()
{
	emu_addws(&emu_sp, 0x6);
	emu_incw(&emu_si);
	emu_cmpws(&emu_si, 0x20);
	if ((emu_flags.sf != emu_flags.of)) { f__06F7_059B_0031_AE21(); return; }
	emu_movw(&emu_ax.x, 0x1);
	emu_ip = 0x05FE; emu_last_cs = 0x06F7; emu_last_ip = 0x05F8; emu_last_length = 0x000E; emu_last_crc = 0xC30D; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__06F7_05EF_000B_E335()
 *
 * @name f__06F7_05EF_000B_E335
 * @implements 06F7:05EF:000B:E335 ()
 *
 * Called From: 06F7:05B0:0031:AE21
 */
void f__06F7_05EF_000B_E335()
{
	emu_incw(&emu_si);
	emu_cmpws(&emu_si, 0x20);
	if ((emu_flags.sf != emu_flags.of)) { f__06F7_059B_0031_AE21(); return; }
	emu_movw(&emu_ax.x, 0x1);
	f__06F7_05FE_0004_07E2(); return;
}

/**
 * Decompiled function f__06F7_05F0_000A_D337()
 *
 * @name f__06F7_05F0_000A_D337
 * @implements 06F7:05F0:000A:D337 ()
 *
 * Called From: 06F7:0599:001F:3A4C
 */
void f__06F7_05F0_000A_D337()
{
	emu_cmpws(&emu_si, 0x20);
	if ((emu_flags.sf != emu_flags.of)) { f__06F7_059B_0031_AE21(); return; }
	emu_movw(&emu_ax.x, 0x1);
	emu_ip = 0x05FE; emu_last_cs = 0x06F7; emu_last_ip = 0x05F8; emu_last_length = 0x000A; emu_last_crc = 0xD337; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__06F7_05F8_0002_03A4()
 *
 * @name f__06F7_05F8_0002_03A4
 * @implements 06F7:05F8:0002:03A4 ()
 *
 * Called From: 06F7:05FC:0004:0768
 */
void f__06F7_05F8_0002_03A4()
{
	f__06F7_05FE_0004_07E2(); return;
}

/**
 * Decompiled function f__06F7_05FA_0004_0768()
 *
 * @name f__06F7_05FA_0004_0768
 * @implements 06F7:05FA:0004:0768 ()
 *
 * Called From: 06F7:0595:001F:3A4C
 */
void f__06F7_05FA_0004_0768()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__06F7_05F8_0002_03A4(); return;
}

/**
 * Decompiled function f__06F7_05FE_0004_07E2()
 *
 * @name f__06F7_05FE_0004_07E2
 * @implements 06F7:05FE:0004:07E2 ()
 *
 * Called From: 06F7:05F8:0002:03A4
 * Called From: 06F7:05F8:000B:E335
 */
void f__06F7_05FE_0004_07E2()
{
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__06F7_0602_0018_3DB3()
 *
 * @name f__06F7_0602_0018_3DB3
 * @implements 06F7:0602:0018:3DB3 ()
 *
 * Called From: 07D4:0044:0015:CD4B
 * Called From: 07D4:0044:0005:1080
 */
void f__06F7_0602_0018_3DB3()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x8);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3210));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x320E));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76AE));
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__06F7_061A_000B_AD47(); return; }
	f__06F7_0704_0009_127D(); return;
}

/**
 * Decompiled function f__06F7_061A_000B_AD47()
 *
 * @name f__06F7_061A_000B_AD47
 * @implements 06F7:061A:000B:AD47 ()
 *
 * Called From: 06F7:0615:0018:3DB3
 */
void f__06F7_061A_000B_AD47()
{
	if (!emu_flags.zf) { f__06F7_0625_0010_DCD1(); return; }
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76AC));
	if ((emu_flags.cf || emu_flags.zf)) { f__06F7_0625_0010_DCD1(); return; }
	f__06F7_0704_0009_127D(); return;
}

/**
 * Decompiled function f__06F7_0625_0010_DCD1()
 *
 * @name f__06F7_0625_0010_DCD1
 * @implements 06F7:0625:0010:DCD1 ()
 *
 * Called From: 06F7:061A:000B:AD47
 * Called From: 06F7:0620:000B:AD47
 */
void f__06F7_0625_0010_DCD1()
{
	emu_addw(&emu_get_memory16(emu_ds, 0x00,  0x320E), 0x2710);
	emu_adcws(&emu_get_memory16(emu_ds, 0x00,  0x3210), 0x0);
	emu_xorw(&emu_si, emu_si);
	f__06F7_06FC_0008_FDE2(); return;
}

/**
 * Decompiled function f__06F7_0635_0027_420E()
 *
 * @name f__06F7_0635_0027_420E
 * @implements 06F7:0635:0027:420E ()
 *
 * Called From: 06F7:0701:0008:FDE2
 * Called From: 06F7:0701:0009:71E2
 * Called From: 06F7:0701:003F:9B59
 * Called From: 06F7:0701:0042:98DB
 * Called From: 06F7:0701:001A:6764
 */
void f__06F7_0635_0027_420E()
{
	emu_movw(&emu_ax.x, emu_si);
	emu_movw(&emu_dx.x, 0x14);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x395C));
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00,  0x395A));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_bx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0xC));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0xE));
	if (!emu_flags.zf) { f__06F7_065C_0066_17A5(); return; }
	f__06F7_06FB_0009_71E2(); return;
}

/**
 * Decompiled function f__06F7_065C_0066_17A5()
 *
 * @name f__06F7_065C_0066_17A5
 * @implements 06F7:065C:0066:17A5 ()
 *
 * Called From: 06F7:0657:0027:420E
 */
void f__06F7_065C_0066_17A5()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x2));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76AE));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { emu_ip = 0x06C5; emu_last_cs = 0x06F7; emu_last_ip = 0x066A; emu_last_length = 0x0066; emu_last_crc = 0x17A5; emu_call(); return; } // Jump does not resolve
	if (!emu_flags.zf) { emu_ip = 0x0674; emu_last_cs = 0x06F7; emu_last_ip = 0x066C; emu_last_length = 0x0066; emu_last_crc = 0x17A5; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76AC));
	if (!(emu_flags.cf || emu_flags.zf)) { f__06F7_06C5_003F_9B59(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x9));
	emu_incb(&emu_get_memory8(emu_es, emu_bx.x,  0x9));
	emu_movb(&emu_ax.h, 0x0);
	emu_shlw(&emu_ax.x, 0x1);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_es, emu_bx.x,  0xC));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_andw(&emu_ax.x, 0xFFF);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_cx.l, 0xC);
	emu_shrw(&emu_ax.x, emu_cx.l);
	emu_andw(&emu_ax.x, 0xF);
	emu_movw(&emu_di, emu_ax.x);
	emu_cmpws(&emu_di, 0xE);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__06F7_06AF_0013_C77E(); return; }
	emu_movw(&emu_di, 0xE);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_bx.x, emu_di);
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_bx.x, emu_cx.l);

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_ds, emu_bx.x,  0x3262);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_ds, emu_bx.x,  0x3264);
	emu_push(0x06C2);
	switch ((emu_cs << 16) + emu_ip) {
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x06F7; emu_last_ip = 0x06BE; emu_last_length = 0x0066; emu_last_crc = 0x17A5;
			emu_call();
			return;
	}
	f__06F7_06C2_0042_98DB();
}

/**
 * Decompiled function f__06F7_06AF_0013_C77E()
 *
 * @name f__06F7_06AF_0013_C77E
 * @implements 06F7:06AF:0013:C77E ()
 *
 * Called From: 06F7:06AA:0066:17A5
 */
void f__06F7_06AF_0013_C77E()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_bx.x, emu_di);
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_bx.x, emu_cx.l);

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_ds, emu_bx.x,  0x3262);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_ds, emu_bx.x,  0x3264);
	emu_push(0x06C2);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x06F7072B: f__06F7_072B_0018_E346(); break;
		case 0x06F708BD: f__06F7_08BD_0016_BC52(); break;
		case 0x06F70913: f__06F7_0913_0013_D6FC(); break;
		case 0x06F70A6C: f__06F7_0A6C_0016_DAEC(); break;
		case 0x06F70AC1: f__06F7_0AC1_001F_3510(); break;
		case 0x06F70B14: f__06F7_0B14_0024_6B4A(); break;
		case 0x06F70B42: f__06F7_0B42_0024_6B4B(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x06F7; emu_last_ip = 0x06BE; emu_last_length = 0x0013; emu_last_crc = 0xC77E;
			emu_call();
			return;
	}
	f__06F7_06C2_0042_98DB();
}

/**
 * Decompiled function f__06F7_06C2_0042_98DB()
 *
 * @name f__06F7_06C2_0042_98DB
 * @implements 06F7:06C2:0042:98DB ()
 *
 * Called From: 06F7:06C2:0013:C77E
 */
void f__06F7_06C2_0042_98DB()
{
	emu_addws(&emu_sp, 0x6);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0xC));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0xE));
	if (emu_flags.zf) { f__06F7_06FB_0009_71E2(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x2));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3210));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__06F7_06FB_0009_71E2(); return; }
	if ((emu_flags.sf != emu_flags.of)) { f__06F7_06EA_001A_6764(); return; }
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x320E));
	if (!emu_flags.cf) { f__06F7_06FB_0009_71E2(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x2));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x3210), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x320E), emu_dx.x);
	emu_incw(&emu_si);
	emu_cmpws(&emu_si, 0x20);
	if (!(emu_flags.sf != emu_flags.of)) { emu_ip = 0x0704; emu_last_cs = 0x06F7; emu_last_ip = 0x06FF; emu_last_length = 0x0042; emu_last_crc = 0x98DB; emu_call(); return; } // Jump does not resolve
	f__06F7_0635_0027_420E(); return;
}

/**
 * Decompiled function f__06F7_06C5_003F_9B59()
 *
 * @name f__06F7_06C5_003F_9B59
 * @implements 06F7:06C5:003F:9B59 ()
 *
 * Called From: 06F7:0672:0066:17A5
 */
void f__06F7_06C5_003F_9B59()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0xC));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0xE));
	if (emu_flags.zf) { emu_ip = 0x06FB; emu_last_cs = 0x06F7; emu_last_ip = 0x06D0; emu_last_length = 0x003F; emu_last_crc = 0x9B59; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x2));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3210));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__06F7_06FB_0009_71E2(); return; }
	if ((emu_flags.sf != emu_flags.of)) { f__06F7_06EA_001A_6764(); return; }
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x320E));
	if (!emu_flags.cf) { f__06F7_06FB_0009_71E2(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x2));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x3210), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x320E), emu_dx.x);
	emu_incw(&emu_si);
	emu_cmpws(&emu_si, 0x20);
	if (!(emu_flags.sf != emu_flags.of)) { emu_ip = 0x0704; emu_last_cs = 0x06F7; emu_last_ip = 0x06FF; emu_last_length = 0x003F; emu_last_crc = 0x9B59; emu_call(); return; } // Jump does not resolve
	f__06F7_0635_0027_420E(); return;
}

/**
 * Decompiled function f__06F7_06EA_001A_6764()
 *
 * @name f__06F7_06EA_001A_6764
 * @implements 06F7:06EA:001A:6764 ()
 *
 * Called From: 06F7:06E2:0042:98DB
 * Called From: 06F7:06E2:003F:9B59
 */
void f__06F7_06EA_001A_6764()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x2));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x3210), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x320E), emu_dx.x);
	emu_incw(&emu_si);
	emu_cmpws(&emu_si, 0x20);
	if (!(emu_flags.sf != emu_flags.of)) { emu_ip = 0x0704; emu_last_cs = 0x06F7; emu_last_ip = 0x06FF; emu_last_length = 0x001A; emu_last_crc = 0x6764; emu_call(); return; } // Jump does not resolve
	f__06F7_0635_0027_420E(); return;
}

/**
 * Decompiled function f__06F7_06FB_0009_71E2()
 *
 * @name f__06F7_06FB_0009_71E2
 * @implements 06F7:06FB:0009:71E2 ()
 *
 * Called From: 06F7:0659:0027:420E
 * Called From: 06F7:06D0:0042:98DB
 * Called From: 06F7:06E0:0042:98DB
 * Called From: 06F7:06E0:003F:9B59
 * Called From: 06F7:06E8:0042:98DB
 * Called From: 06F7:06E8:003F:9B59
 */
void f__06F7_06FB_0009_71E2()
{
	emu_incw(&emu_si);
	emu_cmpws(&emu_si, 0x20);
	if (!(emu_flags.sf != emu_flags.of)) { f__06F7_0704_0009_127D(); return; }
	f__06F7_0635_0027_420E(); return;
}

/**
 * Decompiled function f__06F7_06FC_0008_FDE2()
 *
 * @name f__06F7_06FC_0008_FDE2
 * @implements 06F7:06FC:0008:FDE2 ()
 *
 * Called From: 06F7:0632:0010:DCD1
 */
void f__06F7_06FC_0008_FDE2()
{
	emu_cmpws(&emu_si, 0x20);
	if (!(emu_flags.sf != emu_flags.of)) { emu_ip = 0x0704; emu_last_cs = 0x06F7; emu_last_ip = 0x06FF; emu_last_length = 0x0008; emu_last_crc = 0xFDE2; emu_call(); return; } // Jump does not resolve
	f__06F7_0635_0027_420E(); return;
}

/**
 * Decompiled function f__06F7_0704_0009_127D()
 *
 * @name f__06F7_0704_0009_127D
 * @implements 06F7:0704:0009:127D ()
 *
 * Called From: 06F7:0617:0018:3DB3
 * Called From: 06F7:0622:000B:AD47
 * Called From: 06F7:06FF:0009:71E2
 */
void f__06F7_0704_0009_127D()
{
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x3210));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x320E));
	f__06F7_070D_0006_137A(); return;
}

/**
 * Decompiled function f__06F7_070D_0006_137A()
 *
 * @name f__06F7_070D_0006_137A
 * @implements 06F7:070D:0006:137A ()
 *
 * Called From: 06F7:070B:0009:127D
 */
void f__06F7_070D_0006_137A()
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
 * Decompiled function f__06F7_072B_0018_E346()
 *
 * @name f__06F7_072B_0018_E346
 * @implements 06F7:072B:0018:E346 ()
 *
 * Called From: 06F7:06BE:0013:C77E
 */
void f__06F7_072B_0018_E346()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x6);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x12));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x10));
	emu_push(emu_cs); emu_push(0x0743); emu_cs = 0x0F3F; f__0F3F_0086_0017_9220();
	f__06F7_0743_000A_244D();
}

/**
 * Decompiled function f__06F7_0743_000A_244D()
 *
 * @name f__06F7_0743_000A_244D
 * @implements 06F7:0743:000A:244D ()
 *
 * Called From: 06F7:0743:0018:E346
 */
void f__06F7_0743_000A_244D()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_si, emu_ax.x);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x074D); emu_cs = 0x34CD; ovl__34CD(9);
	f__06F7_074D_000A_856B();
}

/**
 * Decompiled function f__06F7_074D_000A_856B()
 *
 * @name f__06F7_074D_000A_856B
 * @implements 06F7:074D:000A:856B ()
 *
 * Called From: 06F7:074D:000A:244D
 */
void f__06F7_074D_000A_856B()
{
	emu_pop(&emu_cx.x);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.zf) { f__06F7_0757_0006_038C(); return; }
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__06F7_08B7_0006_137A(); return;
}

/**
 * Decompiled function f__06F7_0754_0003_06CA()
 *
 * @name f__06F7_0754_0003_06CA
 * @implements 06F7:0754:0003:06CA ()
 *
 * Called From: 06F7:08B4:0009:EBE1
 */
void f__06F7_0754_0003_06CA()
{
	f__06F7_08B7_0006_137A(); return;
}

/**
 * Decompiled function f__06F7_0757_0006_038C()
 *
 * @name f__06F7_0757_0006_038C
 * @implements 06F7:0757:0006:038C ()
 *
 * Called From: 06F7:0750:000A:856B
 */
void f__06F7_0757_0006_038C()
{
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x075D); emu_cs = 0x34CD; ovl__34CD(13);
	f__06F7_075D_000C_3D88();
}

/**
 * Decompiled function f__06F7_075D_000C_3D88()
 *
 * @name f__06F7_075D_000C_3D88
 * @implements 06F7:075D:000C:3D88 ()
 *
 * Called From: 06F7:075D:0006:038C
 */
void f__06F7_075D_000C_3D88()
{
	emu_pop(&emu_cx.x);
	emu_cmpw(&emu_ax.x, 0xD);
	if (emu_flags.zf) { emu_ip = 0x076F; emu_last_cs = 0x06F7; emu_last_ip = 0x0761; emu_last_length = 0x000C; emu_last_crc = 0x3D88; emu_call(); return; } // Jump does not resolve
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x0769); emu_cs = 0x34CD; ovl__34CD(13);
	f__06F7_0769_0008_41AE();
}

/**
 * Decompiled function f__06F7_0769_0008_41AE()
 *
 * @name f__06F7_0769_0008_41AE
 * @implements 06F7:0769:0008:41AE ()
 *
 * Called From: 06F7:0769:000C:3D88
 */
void f__06F7_0769_0008_41AE()
{
	emu_pop(&emu_cx.x);
	emu_cmpw(&emu_ax.x, 0xC);
	if (!emu_flags.zf) { f__06F7_0771_0006_038C(); return; }
	emu_ip = 0x0752; emu_last_cs = 0x06F7; emu_last_ip = 0x076F; emu_last_length = 0x0008; emu_last_crc = 0x41AE; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__06F7_0771_0006_038C()
 *
 * @name f__06F7_0771_0006_038C
 * @implements 06F7:0771:0006:038C ()
 *
 * Called From: 06F7:076D:0008:41AE
 */
void f__06F7_0771_0006_038C()
{
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x0777); emu_cs = 0x34CD; ovl__34CD(13);
	f__06F7_0777_003A_D351();
}

/**
 * Decompiled function f__06F7_0777_003A_D351()
 *
 * @name f__06F7_0777_003A_D351
 * @implements 06F7:0777:003A:D351 ()
 *
 * Called From: 06F7:0777:0006:038C
 */
void f__06F7_0777_003A_D351()
{
	emu_pop(&emu_cx.x);
	emu_cmpw(&emu_ax.x, 0xA);
	if (!emu_flags.zf) { f__06F7_07B4_0006_038C(); return; }
	emu_movw(&emu_bx.x, emu_si);
	emu_shlw(&emu_bx.x, 0x1);
	emu_movw(&emu_ax.x, 0x2E9C);
	emu_movw(&emu_es, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x323F));
	emu_andw(&emu_ax.x, 0x7FFF);
	emu_andw(&emu_ax.x, 0x1FF);
	emu_movw(&emu_dx.x, emu_si);
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_dx.x, emu_cx.l);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x39EA));
	emu_addw(&emu_bx.x, emu_dx.x);
	emu_andw(&emu_get_memory16(emu_es, emu_bx.x,  0x0), 0xFE00);
	emu_orw(&emu_get_memory16(emu_es, emu_bx.x,  0x0), emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x07B1); emu_cs = 0x34CD; emu_ip = 0x0862; emu_last_cs = 0x06F7; emu_last_ip = 0x07AC; emu_last_length = 0x003A; emu_last_crc = 0xD351; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__06F7_07B4_0006_038C()
 *
 * @name f__06F7_07B4_0006_038C
 * @implements 06F7:07B4:0006:038C ()
 *
 * Called From: 06F7:077B:003A:D351
 */
void f__06F7_07B4_0006_038C()
{
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x07BA); emu_cs = 0x34CD; ovl__34CD(13);
	f__06F7_07BA_001E_23BF();
}

/**
 * Decompiled function f__06F7_07BA_001E_23BF()
 *
 * @name f__06F7_07BA_001E_23BF
 * @implements 06F7:07BA:001E:23BF ()
 *
 * Called From: 06F7:07BA:0006:038C
 */
void f__06F7_07BA_001E_23BF()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_dx.x, 0x1C);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ds, emu_bx.x,  0x3A52));
	emu_shlw(&emu_bx.x, 0x1);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, emu_bx.x,  0x329E));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0xFF);
	if (!emu_flags.zf) { f__06F7_07D8_002A_8341(); return; }
	emu_ip = 0x0752; emu_last_cs = 0x06F7; emu_last_ip = 0x07D5; emu_last_length = 0x001E; emu_last_crc = 0x23BF; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__06F7_07D8_002A_8341()
 *
 * @name f__06F7_07D8_002A_8341
 * @implements 06F7:07D8:002A:8341 ()
 *
 * Called From: 06F7:07D3:001E:23BF
 */
void f__06F7_07D8_002A_8341()
{
	emu_movw(&emu_ax.x, emu_si);
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x39EA));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x1));
	emu_shrw(&emu_ax.x, 0x1);
	emu_andw(&emu_ax.x, 0x7F);
	emu_movw(&emu_di, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x39F2));
	emu_subw(&emu_ax.x, 0x10);
	emu_cmpw(&emu_ax.x, emu_di);
	if (!emu_flags.cf) { f__06F7_0802_0036_0B9B(); return; }
	emu_cmpw(&emu_di, emu_get_memory16(emu_ds, 0x00,  0x39F2));
	if (!(emu_flags.cf || emu_flags.zf)) { emu_ip = 0x0802; emu_last_cs = 0x06F7; emu_last_ip = 0x07FD; emu_last_length = 0x002A; emu_last_crc = 0x8341; emu_call(); return; } // Jump does not resolve
	emu_ip = 0x0752; emu_last_cs = 0x06F7; emu_last_ip = 0x07FF; emu_last_length = 0x002A; emu_last_crc = 0x8341; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__06F7_0802_0036_0B9B()
 *
 * @name f__06F7_0802_0036_0B9B
 * @implements 06F7:0802:0036:0B9B ()
 *
 * Called From: 06F7:07F7:002A:8341
 */
void f__06F7_0802_0036_0B9B()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_shlw(&emu_ax.x, 0x1);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x39EE));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_shlw(&emu_ax.x, 0x1);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x39F0));
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00,  0x39EE));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_bx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx.x,  0x0), emu_di);
	if (!(emu_flags.cf || emu_flags.zf)) { f__06F7_0833_0005_1186(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx.x,  0xA), emu_di);
	if (!emu_flags.cf) { f__06F7_083F_0018_5604(); return; }
	emu_push(emu_cs); emu_push(0x0838); emu_cs = 0x2BB4; emu_ip = 0x083C; emu_last_cs = 0x06F7; emu_last_ip = 0x0833; emu_last_length = 0x0036; emu_last_crc = 0x0B9B; emu_call(); // Jump does not resolve
	f__06F7_0838_0007_1E00();
}

/**
 * Decompiled function f__06F7_0833_0005_1186()
 *
 * @name f__06F7_0833_0005_1186
 * @implements 06F7:0833:0005:1186 ()
 *
 * Called From: 06F7:0828:0036:0B9B
 */
void f__06F7_0833_0005_1186()
{
	emu_push(emu_cs); emu_push(0x0838); emu_cs = 0x2BB4; f__2BB4_0004_0027_4CDD();
	f__06F7_0838_0007_1E00();
}

/**
 * Decompiled function f__06F7_0838_0007_1E00()
 *
 * @name f__06F7_0838_0007_1E00
 * @implements 06F7:0838:0007:1E00 ()
 *
 * Called From: 06F7:0838:0005:1186
 */
void f__06F7_0838_0007_1E00()
{
	emu_andw(&emu_ax.x, 0x1);
	emu_movw(&emu_di, emu_ax.x);
	f__06F7_084D_000A_C65F(); return;
}

/**
 * Decompiled function f__06F7_083F_0018_5604()
 *
 * @name f__06F7_083F_0018_5604
 * @implements 06F7:083F:0018:5604 ()
 *
 * Called From: 06F7:0831:0036:0B9B
 */
void f__06F7_083F_0018_5604()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_subw(&emu_di, emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_cmpws(&emu_di, 0x4);
	if (!emu_flags.cf) { f__06F7_084D_000A_C65F(); return; }
	emu_addws(&emu_di, 0x2);
	emu_movw(&emu_ax.x, 0xFFFF);
	emu_push(emu_ax.x);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x0857); emu_cs = 0x34CD; ovl__34CD(28);
	f__06F7_0857_0024_6A83();
}

/**
 * Decompiled function f__06F7_084D_000A_C65F()
 *
 * @name f__06F7_084D_000A_C65F
 * @implements 06F7:084D:000A:C65F ()
 *
 * Called From: 06F7:083D:0007:1E00
 * Called From: 06F7:0848:0018:5604
 */
void f__06F7_084D_000A_C65F()
{
	emu_movw(&emu_ax.x, 0xFFFF);
	emu_push(emu_ax.x);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x0857); emu_cs = 0x34CD; ovl__34CD(28);
	f__06F7_0857_0024_6A83();
}

/**
 * Decompiled function f__06F7_0857_0024_6A83()
 *
 * @name f__06F7_0857_0024_6A83
 * @implements 06F7:0857:0024:6A83 ()
 *
 * Called From: 06F7:0857:000A:C65F
 * Called From: 06F7:0857:0018:5604
 */
void f__06F7_0857_0024_6A83()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_ax.x, emu_si);
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x39EA));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_andw(&emu_ax.x, 0x1FF);
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x39F4));
	if (!emu_flags.zf) { f__06F7_0880_002E_2DFE(); return; }
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3A38));
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x087B); emu_cs = 0x34CD; emu_ip = 0x090E; emu_last_cs = 0x06F7; emu_last_ip = 0x0876; emu_last_length = 0x0024; emu_last_crc = 0x6A83; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__06F7_0880_002E_2DFE()
 *
 * @name f__06F7_0880_002E_2DFE
 * @implements 06F7:0880:002E:2DFE ()
 *
 * Called From: 06F7:086F:0024:6A83
 */
void f__06F7_0880_002E_2DFE()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax.x, emu_di);
	emu_addw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_andw(&emu_ax.x, 0x7F);
	emu_movw(&emu_dx.x, emu_si);
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_dx.x, emu_cx.l);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x39EA));
	emu_addw(&emu_bx.x, emu_dx.x);
	emu_andb(&emu_get_memory8(emu_es, emu_bx.x,  0x1), 0x1);
	emu_shlb(&emu_ax.l, 0x1);
	emu_orb(&emu_get_memory8(emu_es, emu_bx.x,  0x1), emu_ax.l);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x08AE); emu_cs = 0x34CD; ovl__34CD(29);
	f__06F7_08AE_0009_EBE1();
}

/**
 * Decompiled function f__06F7_08AE_0009_EBE1()
 *
 * @name f__06F7_08AE_0009_EBE1
 * @implements 06F7:08AE:0009:EBE1 ()
 *
 * Called From: 06F7:08AE:002E:2DFE
 */
void f__06F7_08AE_0009_EBE1()
{
	emu_addws(&emu_sp, 0x6);
	emu_movw(&emu_ax.x, 0x1);
	f__06F7_0754_0003_06CA(); return;
}

/**
 * Decompiled function f__06F7_08B7_0006_137A()
 *
 * @name f__06F7_08B7_0006_137A
 * @implements 06F7:08B7:0006:137A ()
 *
 * Called From: 06F7:0754:0003:06CA
 * Called From: 06F7:0754:000A:856B
 */
void f__06F7_08B7_0006_137A()
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
 * Decompiled function f__06F7_08BD_0016_BC52()
 *
 * @name f__06F7_08BD_0016_BC52
 * @implements 06F7:08BD:0016:BC52 ()
 *
 * Called From: 06F7:06BE:0013:C77E
 */
void f__06F7_08BD_0016_BC52()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x12));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x10));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_cs); emu_push(0x08D3); emu_cs = 0x3483; ovl__3483(0);
	f__06F7_08D3_0008_F43C();
}

/**
 * Decompiled function f__06F7_08D3_0008_F43C()
 *
 * @name f__06F7_08D3_0008_F43C
 * @implements 06F7:08D3:0008:F43C ()
 *
 * Called From: 06F7:08D3:0016:BC52
 */
void f__06F7_08D3_0008_F43C()
{
	emu_addws(&emu_sp, 0x6);
	emu_movw(&emu_ax.x, 0x1);
	f__06F7_08DB_0002_00E2(); return;
}

/**
 * Decompiled function f__06F7_08DB_0002_00E2()
 *
 * @name f__06F7_08DB_0002_00E2
 * @implements 06F7:08DB:0002:00E2 ()
 *
 * Called From: 06F7:08D9:0008:F43C
 */
void f__06F7_08DB_0002_00E2()
{
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__06F7_0913_0013_D6FC()
 *
 * @name f__06F7_0913_0013_D6FC
 * @implements 06F7:0913:0013:D6FC ()
 *
 * Called From: 06F7:06BE:0013:C77E
 */
void f__06F7_0913_0013_D6FC()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x12));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x10));
	emu_push(emu_cs); emu_push(0x0926); emu_cs = 0x0F3F; f__0F3F_0086_0017_9220();
	f__06F7_0926_002C_D78C();
}

/**
 * Decompiled function f__06F7_0926_002C_D78C()
 *
 * @name f__06F7_0926_002C_D78C
 * @implements 06F7:0926:002C:D78C ()
 *
 * Called From: 06F7:0926:0013:D6FC
 */
void f__06F7_0926_002C_D78C()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x39EA));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_andw(&emu_ax.x, 0x1FF);
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x39F4));
	if (!emu_flags.zf) { f__06F7_0960_0005_154E(); return; }
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3A38));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x12));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x10));
	emu_push(emu_cs); emu_push(0x0952); emu_cs = 0x0F3F; emu_ip = 0x09D8; emu_last_cs = 0x06F7; emu_last_ip = 0x094D; emu_last_length = 0x002C; emu_last_crc = 0xD78C; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__06F7_095E_0002_03A6()
 *
 * @name f__06F7_095E_0002_03A6
 * @implements 06F7:095E:0002:03A6 ()
 *
 * Called From: 06F7:0963:0005:154E
 */
void f__06F7_095E_0002_03A6()
{
	f__06F7_0965_0002_00E2(); return;
}

/**
 * Decompiled function f__06F7_0960_0005_154E()
 *
 * @name f__06F7_0960_0005_154E
 * @implements 06F7:0960:0005:154E ()
 *
 * Called From: 06F7:093C:002C:D78C
 */
void f__06F7_0960_0005_154E()
{
	emu_movw(&emu_ax.x, 0x1);
	f__06F7_095E_0002_03A6(); return;
}

/**
 * Decompiled function f__06F7_0965_0002_00E2()
 *
 * @name f__06F7_0965_0002_00E2
 * @implements 06F7:0965:0002:00E2 ()
 *
 * Called From: 06F7:095E:0002:03A6
 */
void f__06F7_0965_0002_00E2()
{
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__06F7_0A6C_0016_DAEC()
 *
 * @name f__06F7_0A6C_0016_DAEC
 * @implements 06F7:0A6C:0016:DAEC ()
 *
 * Called From: 06F7:05E9:0020:A751
 * Called From: 06F7:06BE:0013:C77E
 */
void f__06F7_0A6C_0016_DAEC()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x2);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x12));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x10));
	emu_push(emu_cs); emu_push(0x0A82); emu_cs = 0x0F3F; f__0F3F_0086_0017_9220();
	f__06F7_0A82_0025_0CB1();
}

/**
 * Decompiled function f__06F7_0A82_0025_0CB1()
 *
 * @name f__06F7_0A82_0025_0CB1
 * @implements 06F7:0A82:0025:0CB1 ()
 *
 * Called From: 06F7:0A82:0016:DAEC
 */
void f__06F7_0A82_0025_0CB1()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x39EA));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_andb(&emu_get_memory8(emu_es, emu_bx.x,  0x2), 0x7F);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0AA7); emu_cs = 0x34CD; ovl__34CD(14);
	f__06F7_0AA7_0016_EEBC();
}

/**
 * Decompiled function f__06F7_0AA7_0016_EEBC()
 *
 * @name f__06F7_0AA7_0016_EEBC
 * @implements 06F7:0AA7:0016:EEBC ()
 *
 * Called From: 06F7:0AA7:0025:0CB1
 */
void f__06F7_0AA7_0016_EEBC()
{
	emu_addws(&emu_sp, 0x6);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0xE), 0x0);
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0xC), 0x0);
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__06F7_0ABD_0004_0F7A(); return;
}

/**
 * Decompiled function f__06F7_0ABD_0004_0F7A()
 *
 * @name f__06F7_0ABD_0004_0F7A
 * @implements 06F7:0ABD:0004:0F7A ()
 *
 * Called From: 06F7:0ABB:0016:EEBC
 */
void f__06F7_0ABD_0004_0F7A()
{
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__06F7_0AC1_001F_3510()
 *
 * @name f__06F7_0AC1_001F_3510
 * @implements 06F7:0AC1:001F:3510 ()
 *
 * Called From: 06F7:06BE:0013:C77E
 */
void f__06F7_0AC1_001F_3510()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76AE));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76AC));
	emu_addw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_adcw(&emu_ax.x, 0x0);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x2), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x0), emu_dx.x);
	emu_movw(&emu_ax.x, 0x1);
	f__06F7_0AE0_0002_00E2(); return;
}

/**
 * Decompiled function f__06F7_0AE0_0002_00E2()
 *
 * @name f__06F7_0AE0_0002_00E2
 * @implements 06F7:0AE0:0002:00E2 ()
 *
 * Called From: 06F7:0ADE:001F:3510
 */
void f__06F7_0AE0_0002_00E2()
{
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__06F7_0B14_0024_6B4A()
 *
 * @name f__06F7_0B14_0024_6B4A
 * @implements 06F7:0B14:0024:6B4A ()
 *
 * Called From: 06F7:06BE:0013:C77E
 */
void f__06F7_0B14_0024_6B4A()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0xA), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x8), 0x0);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0B38); emu_cs = 0x34CD; ovl__34CD(14);
	f__06F7_0B38_0008_F43C();
}

/**
 * Decompiled function f__06F7_0B38_0008_F43C()
 *
 * @name f__06F7_0B38_0008_F43C
 * @implements 06F7:0B38:0008:F43C ()
 *
 * Called From: 06F7:0B38:0024:6B4A
 */
void f__06F7_0B38_0008_F43C()
{
	emu_addws(&emu_sp, 0x6);
	emu_movw(&emu_ax.x, 0x1);
	f__06F7_0B40_0002_00E2(); return;
}

/**
 * Decompiled function f__06F7_0B40_0002_00E2()
 *
 * @name f__06F7_0B40_0002_00E2
 * @implements 06F7:0B40:0002:00E2 ()
 *
 * Called From: 06F7:0B3E:0008:F43C
 */
void f__06F7_0B40_0002_00E2()
{
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__06F7_0B42_0024_6B4B()
 *
 * @name f__06F7_0B42_0024_6B4B
 * @implements 06F7:0B42:0024:6B4B ()
 *
 * Called From: 06F7:06BE:0013:C77E
 */
void f__06F7_0B42_0024_6B4B()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0xA), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x8), 0x1);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0B66); emu_cs = 0x34CD; ovl__34CD(14);
	f__06F7_0B66_0008_F43C();
}

/**
 * Decompiled function f__06F7_0B66_0008_F43C()
 *
 * @name f__06F7_0B66_0008_F43C
 * @implements 06F7:0B66:0008:F43C ()
 *
 * Called From: 06F7:0B66:0024:6B4B
 */
void f__06F7_0B66_0008_F43C()
{
	emu_addws(&emu_sp, 0x6);
	emu_movw(&emu_ax.x, 0x1);
	f__06F7_0B6E_0002_00E2(); return;
}

/**
 * Decompiled function f__06F7_0B6E_0002_00E2()
 *
 * @name f__06F7_0B6E_0002_00E2
 * @implements 06F7:0B6E:0002:00E2 ()
 *
 * Called From: 06F7:0B6C:0008:F43C
 */
void f__06F7_0B6E_0002_00E2()
{
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

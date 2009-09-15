/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__B4DA_0000_002C_ACE1()
 *
 * @name f__B4DA_0000_002C_ACE1
 * @implements B4DA:0000:002C:ACE1 ()
 *
 * Called From: 34DA:0020:0005:1EFA
 * Called From: 34DA:0020:0005:1DB8
 * Called From: B4DA:118F:0011:D0FD
 */
void f__B4DA_0000_002C_ACE1()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x6);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_di, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movw(&emu_ax.x, emu_di);
	emu_movw(&emu_dx.x, 0x1E);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, emu_bx.x,  0x37F8));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x0));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x2586);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x9939);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x002C); emu_cs = 0x01F7; f__01F7_378D_0020_4A95();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_002C_0021_5D63();
}

/**
 * Decompiled function f__B4DA_002C_0021_5D63()
 *
 * @name f__B4DA_002C_0021_5D63
 * @implements B4DA:002C:0021:5D63 ()
 *
 * Called From: B4DA:002C:002C:ACE1
 */
void f__B4DA_002C_0021_5D63()
{
	emu_addws(&emu_sp, 0xA);
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x6674));
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x6676));
	emu_movw(&emu_ax.x, 0x3);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x3);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x9939);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x004D); emu_cs = 0x34CA; ovl__34CA(0);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_004D_001B_6339();
}

/**
 * Decompiled function f__B4DA_004D_001B_6339()
 *
 * @name f__B4DA_004D_001B_6339
 * @implements B4DA:004D:001B:6339 ()
 *
 * Called From: B4DA:004D:0021:5D63
 */
void f__B4DA_004D_001B_6339()
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
	emu_push(0x0068);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A604A5: f__22A6_04A5_000F_9D38(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0xB4DA; emu_last_ip = 0x0063; emu_last_length = 0x001B; emu_last_crc = 0x6339;
			emu_call();
			return;
	}
	f__B4DA_0068_000C_4765();
}

/**
 * Decompiled function f__B4DA_0068_000C_4765()
 *
 * @name f__B4DA_0068_000C_4765
 * @implements B4DA:0068:000C:4765 ()
 *
 * Called From: B4DA:0068:001B:6339
 */
void f__B4DA_0068_000C_4765()
{
	emu_addws(&emu_sp, 0x8);
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0074); emu_cs = 0x2598; f__2598_0000_0017_D681();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_0074_0022_197D();
}

/**
 * Decompiled function f__B4DA_0074_0022_197D()
 *
 * @name f__B4DA_0074_0022_197D
 * @implements B4DA:0074:0022:197D ()
 *
 * Called From: B4DA:0074:000C:4765
 */
void f__B4DA_0074_0022_197D()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_cmpws(&emu_di, 0x5);
	if (!emu_flags.zf) { f__B4DA_0099_0011_112B(); return; }
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_movw(&emu_dx.x, 0x300);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3C34));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3C32));
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x2593);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0096); emu_cs = 0x253D; f__253D_0000_0013_AAD7();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_0096_0014_1F0B();
}

/**
 * Decompiled function f__B4DA_0096_0014_1F0B()
 *
 * @name f__B4DA_0096_0014_1F0B
 * @implements B4DA:0096:0014:1F0B ()
 *
 * Called From: B4DA:0096:0022:197D
 */
void f__B4DA_0096_0014_1F0B()
{
	emu_addws(&emu_sp, 0xC);
	emu_movw(&emu_ax.x, 0x60);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x7FC6);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x00AA); emu_cs = 0x01F7; f__01F7_2947_0014_9C5E();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_00AA_0033_EA3E();
}

/**
 * Decompiled function f__B4DA_0099_0011_112B()
 *
 * @name f__B4DA_0099_0011_112B
 * @implements B4DA:0099:0011:112B ()
 *
 * Called From: B4DA:007B:0022:197D
 */
void f__B4DA_0099_0011_112B()
{
	emu_movw(&emu_ax.x, 0x60);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x7FC6);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x00AA); emu_cs = 0x01F7; f__01F7_2947_0014_9C5E();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_00AA_0033_EA3E();
}

/**
 * Decompiled function f__B4DA_00AA_0033_EA3E()
 *
 * @name f__B4DA_00AA_0033_EA3E
 * @implements B4DA:00AA:0033:EA3E ()
 *
 * Called From: B4DA:00AA:0014:1F0B
 * Called From: B4DA:00AA:0011:112B
 */
void f__B4DA_00AA_0033_EA3E()
{
	emu_addws(&emu_sp, 0x8);
	emu_movw(&emu_bx.x, emu_di);
	emu_movb(&emu_cx.l, 0x3);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, 0x2C6C);
	emu_movw(&emu_es, emu_ax.x);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x0));
	emu_movb(&emu_get_memory8(emu_ds, 0x00, -0x7FF8), emu_ax.l);
	emu_movb(&emu_get_memory8(emu_ds, 0x00, -0x7FFA), emu_ax.l);
	emu_movw(&emu_bx.x, emu_di);
	emu_movb(&emu_cx.l, 0x3);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, 0x2C6C);
	emu_movw(&emu_es, emu_ax.x);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x1));
	emu_movb(&emu_get_memory8(emu_ds, 0x00, -0x7FF7), emu_ax.l);
	emu_movb(&emu_get_memory8(emu_ds, 0x00, -0x7FF9), emu_ax.l);
	emu_xorw(&emu_si, emu_si);
	f__B4DA_0101_0012_5BB4(); return;
}

/**
 * Decompiled function f__B4DA_00DD_0036_0576()
 *
 * @name f__B4DA_00DD_0036_0576
 * @implements B4DA:00DD:0036:0576 ()
 *
 * Called From: B4DA:0104:0012:5BB4
 * Called From: B4DA:0104:0036:0576
 */
void f__B4DA_00DD_0036_0576()
{
	emu_movw(&emu_bx.x, emu_si);
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, 0x2DCE);
	emu_movw(&emu_es, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x47A));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_es, emu_bx.x,  0x478));
	emu_movw(&emu_bx.x, emu_si);
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_get_memory16(emu_ds, emu_bx.x,  0x7FC8), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, emu_bx.x,  0x7FC6), emu_dx.x);
	emu_incw(&emu_si);
	emu_cmpws(&emu_si, 0x5);
	if ((emu_flags.sf != emu_flags.of)) { f__B4DA_00DD_0036_0576(); return; }
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x7FC8));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x7FC6));
	emu_push(emu_cs); emu_push(0x0113); emu_cs = 0x260F; f__260F_003A_0014_CDCF();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_0113_0019_3E58();
}

/**
 * Decompiled function f__B4DA_0101_0012_5BB4()
 *
 * @name f__B4DA_0101_0012_5BB4
 * @implements B4DA:0101:0012:5BB4 ()
 *
 * Called From: B4DA:00DB:0033:EA3E
 */
void f__B4DA_0101_0012_5BB4()
{
	emu_cmpws(&emu_si, 0x5);
	if ((emu_flags.sf != emu_flags.of)) { f__B4DA_00DD_0036_0576(); return; }
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x7FC8));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x7FC6));
	emu_push(emu_cs); emu_push(0x0113); emu_cs = 0x260F; emu_ip = 0x014D; emu_last_cs = 0xB4DA; emu_last_ip = 0x010E; emu_last_length = 0x0012; emu_last_crc = 0x5BB4; emu_call(); // Jump does not resolve
	f__B4DA_0113_0019_3E58();
}

/**
 * Decompiled function f__B4DA_0113_0019_3E58()
 *
 * @name f__B4DA_0113_0019_3E58
 * @implements B4DA:0113:0019:3E58 ()
 *
 * Called From: B4DA:0113:0036:0576
 */
void f__B4DA_0113_0019_3E58()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movb(&emu_dx.l, emu_get_memory8(emu_ds, 0x00, -0x7FF8));
	emu_addb(&emu_dx.l, emu_ax.l);
	emu_movb(&emu_get_memory8(emu_ds, 0x00, -0x7FF8), emu_dx.l);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x7FC8));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x7FC6));
	emu_push(emu_cs); emu_push(0x012C); emu_cs = 0x260F; f__260F_0054_0016_11EB();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_012C_003C_00BD();
}

/**
 * Decompiled function f__B4DA_012C_003C_00BD()
 *
 * @name f__B4DA_012C_003C_00BD
 * @implements B4DA:012C:003C:00BD ()
 *
 * Called From: B4DA:012C:0019:3E58
 */
void f__B4DA_012C_003C_00BD()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movb(&emu_dx.l, emu_get_memory8(emu_ds, 0x00, -0x7FF7));
	emu_addb(&emu_dx.l, emu_ax.l);
	emu_movb(&emu_get_memory8(emu_ds, 0x00, -0x7FF7), emu_dx.l);
	emu_movw(&emu_bx.x, emu_di);
	emu_movb(&emu_cx.l, 0x3);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, 0x2C6C);
	emu_movw(&emu_es, emu_ax.x);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x2));
	emu_movb(&emu_get_memory8(emu_ds, 0x00, -0x7FF4), emu_ax.l);
	emu_movb(&emu_get_memory8(emu_ds, 0x00, -0x7FF6), emu_ax.l);
	emu_movw(&emu_bx.x, emu_di);
	emu_movb(&emu_cx.l, 0x3);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, 0x2C6C);
	emu_movw(&emu_es, emu_ax.x);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x3));
	emu_movb(&emu_get_memory8(emu_ds, 0x00, -0x7FF3), emu_ax.l);
	emu_movb(&emu_get_memory8(emu_ds, 0x00, -0x7FF5), emu_ax.l);
	emu_xorw(&emu_si, emu_si);
	f__B4DA_018C_0012_F5B4(); return;
}

/**
 * Decompiled function f__B4DA_0168_0036_7356()
 *
 * @name f__B4DA_0168_0036_7356
 * @implements B4DA:0168:0036:7356 ()
 *
 * Called From: B4DA:018F:0012:F5B4
 * Called From: B4DA:018F:0036:7356
 */
void f__B4DA_0168_0036_7356()
{
	emu_movw(&emu_bx.x, emu_si);
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, 0x2DCE);
	emu_movw(&emu_es, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x48E));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_es, emu_bx.x,  0x48C));
	emu_movw(&emu_bx.x, emu_si);
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_get_memory16(emu_ds, emu_bx.x,  0x7FDC), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, emu_bx.x,  0x7FDA), emu_dx.x);
	emu_incw(&emu_si);
	emu_cmpws(&emu_si, 0x5);
	if ((emu_flags.sf != emu_flags.of)) { f__B4DA_0168_0036_7356(); return; }
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x7FDC));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x7FDA));
	emu_push(emu_cs); emu_push(0x019E); emu_cs = 0x260F; f__260F_003A_0014_CDCF();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_019E_0019_90DA();
}

/**
 * Decompiled function f__B4DA_018C_0012_F5B4()
 *
 * @name f__B4DA_018C_0012_F5B4
 * @implements B4DA:018C:0012:F5B4 ()
 *
 * Called From: B4DA:0166:003C:00BD
 */
void f__B4DA_018C_0012_F5B4()
{
	emu_cmpws(&emu_si, 0x5);
	if ((emu_flags.sf != emu_flags.of)) { f__B4DA_0168_0036_7356(); return; }
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x7FDC));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x7FDA));
	emu_push(emu_cs); emu_push(0x019E); emu_cs = 0x260F; emu_ip = 0x01D8; emu_last_cs = 0xB4DA; emu_last_ip = 0x0199; emu_last_length = 0x0012; emu_last_crc = 0xF5B4; emu_call(); // Jump does not resolve
	f__B4DA_019E_0019_90DA();
}

/**
 * Decompiled function f__B4DA_019E_0019_90DA()
 *
 * @name f__B4DA_019E_0019_90DA
 * @implements B4DA:019E:0019:90DA ()
 *
 * Called From: B4DA:019E:0036:7356
 */
void f__B4DA_019E_0019_90DA()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movb(&emu_dx.l, emu_get_memory8(emu_ds, 0x00, -0x7FF4));
	emu_addb(&emu_dx.l, emu_ax.l);
	emu_movb(&emu_get_memory8(emu_ds, 0x00, -0x7FF4), emu_dx.l);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x7FDC));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x7FDA));
	emu_push(emu_cs); emu_push(0x01B7); emu_cs = 0x260F; f__260F_0054_0016_11EB();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_01B7_0036_B053();
}

/**
 * Decompiled function f__B4DA_01B7_0036_B053()
 *
 * @name f__B4DA_01B7_0036_B053
 * @implements B4DA:01B7:0036:B053 ()
 *
 * Called From: B4DA:01B7:0019:90DA
 */
void f__B4DA_01B7_0036_B053()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movb(&emu_dx.l, emu_get_memory8(emu_ds, 0x00, -0x7FF3));
	emu_addb(&emu_dx.l, emu_ax.l);
	emu_movb(&emu_get_memory8(emu_ds, 0x00, -0x7FF3), emu_dx.l);
	emu_movw(&emu_bx.x, emu_di);
	emu_movb(&emu_cx.l, 0x3);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, 0x2C6C);
	emu_movw(&emu_es, emu_ax.x);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x4));
	emu_movb(&emu_get_memory8(emu_ds, 0x00, -0x7FF2), emu_ax.l);
	emu_movw(&emu_bx.x, emu_di);
	emu_movb(&emu_cx.l, 0x3);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, 0x2C6C);
	emu_movw(&emu_es, emu_ax.x);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x5));
	emu_movb(&emu_get_memory8(emu_ds, 0x00, -0x7FF1), emu_ax.l);
	emu_xorw(&emu_si, emu_si);
	f__B4DA_0211_0049_F90D(); return;
}

/**
 * Decompiled function f__B4DA_01ED_006D_6875()
 *
 * @name f__B4DA_01ED_006D_6875
 * @implements B4DA:01ED:006D:6875 ()
 *
 * Called From: B4DA:0214:0049:F90D
 * Called From: B4DA:0214:006D:6875
 */
void f__B4DA_01ED_006D_6875()
{
	emu_movw(&emu_bx.x, emu_si);
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, 0x2DCE);
	emu_movw(&emu_es, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x4A6));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_es, emu_bx.x,  0x4A4));
	emu_movw(&emu_bx.x, emu_si);
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_get_memory16(emu_ds, emu_bx.x,  0x7FF0), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, emu_bx.x,  0x7FEE), emu_dx.x);
	emu_incw(&emu_si);
	emu_cmpws(&emu_si, 0x4);
	if ((emu_flags.sf != emu_flags.of)) { f__B4DA_01ED_006D_6875(); return; }
	emu_movw(&emu_bx.x, emu_di);
	emu_movb(&emu_cx.l, 0x3);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, 0x2C6C);
	emu_movw(&emu_es, emu_ax.x);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x6));
	emu_movb(&emu_get_memory8(emu_ds, 0x00, -0x7FF0), emu_ax.l);
	emu_movw(&emu_bx.x, emu_di);
	emu_movb(&emu_cx.l, 0x3);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, 0x2C6C);
	emu_movw(&emu_es, emu_ax.x);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x7));
	emu_movb(&emu_get_memory8(emu_ds, 0x00, -0x7FEF), emu_ax.l);
	emu_movw(&emu_ax.x, 0x2DCE);
	emu_movw(&emu_es, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, 0x00,  0x4A2));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_es, 0x00,  0x4A0));
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x7FFC), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x7FFE), emu_dx.x);
	emu_movw(&emu_ax.x, 0x8);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x025A); emu_cs = 0x07AE; f__07AE_00E4_000D_C2A4();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_025A_0023_A750();
}

/**
 * Decompiled function f__B4DA_0211_0049_F90D()
 *
 * @name f__B4DA_0211_0049_F90D
 * @implements B4DA:0211:0049:F90D ()
 *
 * Called From: B4DA:01EB:0036:B053
 */
void f__B4DA_0211_0049_F90D()
{
	emu_cmpws(&emu_si, 0x4);
	if ((emu_flags.sf != emu_flags.of)) { f__B4DA_01ED_006D_6875(); return; }
	emu_movw(&emu_bx.x, emu_di);
	emu_movb(&emu_cx.l, 0x3);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, 0x2C6C);
	emu_movw(&emu_es, emu_ax.x);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x6));
	emu_movb(&emu_get_memory8(emu_ds, 0x00, -0x7FF0), emu_ax.l);
	emu_movw(&emu_bx.x, emu_di);
	emu_movb(&emu_cx.l, 0x3);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, 0x2C6C);
	emu_movw(&emu_es, emu_ax.x);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x7));
	emu_movb(&emu_get_memory8(emu_ds, 0x00, -0x7FEF), emu_ax.l);
	emu_movw(&emu_ax.x, 0x2DCE);
	emu_movw(&emu_es, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, 0x00,  0x4A2));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_es, 0x00,  0x4A0));
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x7FFC), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x7FFE), emu_dx.x);
	emu_movw(&emu_ax.x, 0x8);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x025A); emu_cs = 0x07AE; emu_ip = 0x033E; emu_last_cs = 0xB4DA; emu_last_ip = 0x0255; emu_last_length = 0x0049; emu_last_crc = 0xF90D; emu_call(); // Jump does not resolve
	f__B4DA_025A_0023_A750();
}

/**
 * Decompiled function f__B4DA_025A_0023_A750()
 *
 * @name f__B4DA_025A_0023_A750
 * @implements B4DA:025A:0023:A750 ()
 *
 * Called From: B4DA:025A:006D:6875
 */
void f__B4DA_025A_0023_A750()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_flags.zf) { f__B4DA_02C5_0009_8D2F(); return; }
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6CE9));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6CE7));
	emu_movw(&emu_ax.x, 0x5);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x027D); emu_cs = 0x252E; f__252E_0001_0018_48C0();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_027D_000E_E41D();
}

/**
 * Decompiled function f__B4DA_027D_000E_E41D()
 *
 * @name f__B4DA_027D_000E_E41D
 * @implements B4DA:027D:000E:E41D ()
 *
 * Called From: B4DA:027D:0023:A750
 */
void f__B4DA_027D_000E_E41D()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x028B); emu_cs = 0x352A; ovl__352A(0);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_028B_002A_35C4();
}

/**
 * Decompiled function f__B4DA_028B_002A_35C4()
 *
 * @name f__B4DA_028B_002A_35C4
 * @implements B4DA:028B:002A:35C4 ()
 *
 * Called From: B4DA:028B:000E:E41D
 */
void f__B4DA_028B_002A_35C4()
{
	emu_addws(&emu_sp, 0x12);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x66D5));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00, -0x66D3));
	emu_movb(&emu_cx.l, 0x3);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_cs); emu_push(0x02B5); emu_cs = 0x352A; ovl__352A(2);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_02B5_000E_936D();
}

/**
 * Decompiled function f__B4DA_02B5_000E_936D()
 *
 * @name f__B4DA_02B5_000E_936D
 * @implements B4DA:02B5:000E:936D ()
 *
 * Called From: B4DA:02B5:002A:35C4
 */
void f__B4DA_02B5_000E_936D()
{
	emu_addws(&emu_sp, 0xE);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_cs); emu_push(0x02C3); emu_cs = 0x352A; ovl__352A(1);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_02C3_000B_212C();
}

/**
 * Decompiled function f__B4DA_02C3_000B_212C()
 *
 * @name f__B4DA_02C3_000B_212C
 * @implements B4DA:02C3:000B:212C ()
 *
 * Called From: B4DA:02C3:000E:936D
 */
void f__B4DA_02C3_000B_212C()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6C91));
	emu_push(emu_cs);
	emu_push(0x02CE); f__B4DA_0A8E_0025_F0AA();
	f__B4DA_02CE_0009_58EA();
}

/**
 * Decompiled function f__B4DA_02C5_0009_8D2F()
 *
 * @name f__B4DA_02C5_0009_8D2F
 * @implements B4DA:02C5:0009:8D2F ()
 *
 * Called From: B4DA:0261:0023:A750
 */
void f__B4DA_02C5_0009_8D2F()
{
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6C91));
	emu_push(emu_cs);
	emu_push(0x02CE); f__B4DA_0A8E_0025_F0AA();
	f__B4DA_02CE_0009_58EA();
}

/**
 * Decompiled function f__B4DA_02CE_0009_58EA()
 *
 * @name f__B4DA_02CE_0009_58EA
 * @implements B4DA:02CE:0009:58EA ()
 *
 * Called From: B4DA:02CE:000B:212C
 * Called From: B4DA:02CE:0009:8D2F
 */
void f__B4DA_02CE_0009_58EA()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_cs); emu_push(0x02D7); emu_cs = 0x2598; f__2598_0000_0017_D681();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_02D7_0003_0164();
}

/**
 * Decompiled function f__B4DA_02D7_0003_0164()
 *
 * @name f__B4DA_02D7_0003_0164
 * @implements B4DA:02D7:0003:0164 ()
 *
 * Called From: B4DA:02D7:0009:58EA
 */
void f__B4DA_02D7_0003_0164()
{
	emu_pop(&emu_cx.x);
	f__B4DA_02DA_0006_137A(); return;
}

/**
 * Decompiled function f__B4DA_02DA_0006_137A()
 *
 * @name f__B4DA_02DA_0006_137A
 * @implements B4DA:02DA:0006:137A ()
 *
 * Called From: B4DA:02D8:0003:0164
 */
void f__B4DA_02DA_0006_137A()
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
 * Decompiled function f__B4DA_02E0_0023_77C4()
 *
 * @name f__B4DA_02E0_0023_77C4
 * @implements B4DA:02E0:0023:77C4 ()
 *
 * Called From: 34DA:0025:0005:10EA
 * Called From: 34DA:0025:0005:1058
 * Called From: 34DA:0025:0005:1168
 * Called From: 34DA:0025:0005:11D4
 * Called From: B4DA:16B5:0004:06D8
 */
void f__B4DA_02E0_0023_77C4()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x3A38), 0x5);
	if (!emu_flags.zf) { f__B4DA_0306_0002_00E2(); return; }
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_movw(&emu_dx.x, 0x300);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3C34));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3C32));
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x259C);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0303); emu_cs = 0x253D; f__253D_0000_0013_AAD7();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_0303_0005_1CA2();
}

/**
 * Decompiled function f__B4DA_0303_0005_1CA2()
 *
 * @name f__B4DA_0303_0005_1CA2
 * @implements B4DA:0303:0005:1CA2 ()
 *
 * Called From: B4DA:0303:0023:77C4
 */
void f__B4DA_0303_0005_1CA2()
{
	emu_addws(&emu_sp, 0xC);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B4DA_0306_0002_00E2()
 *
 * @name f__B4DA_0306_0002_00E2
 * @implements B4DA:0306:0002:00E2 ()
 *
 * Called From: B4DA:02E8:0023:77C4
 */
void f__B4DA_0306_0002_00E2()
{
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B4DA_0308_0018_D7B1()
 *
 * @name f__B4DA_0308_0018_D7B1
 * @implements B4DA:0308:0018:D7B1 ()
 *
 * Called From: 34DA:002A:0005:1FAC
 * Called From: 34DA:002A:0005:1ED0
 * Called From: 34DA:002A:0005:1FE0
 * Called From: 34DA:002A:0005:1F5C
 * Called From: B4DA:0EFF:0007:7950
 * Called From: B4DA:16ED:0008:B258
 * Called From: B4DA:16ED:0005:0CD8
 */
void f__B4DA_0308_0018_D7B1()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x6);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00, -0x7FE4));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00, -0x7FE6));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76AE));
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__B4DA_0320_000B_E77D(); return; }
	emu_ip = 0x049C; emu_last_cs = 0xB4DA; emu_last_ip = 0x031D; emu_last_length = 0x0018; emu_last_crc = 0xD7B1; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B4DA_0320_000B_E77D()
 *
 * @name f__B4DA_0320_000B_E77D
 * @implements B4DA:0320:000B:E77D ()
 *
 * Called From: B4DA:031B:0018:D7B1
 */
void f__B4DA_0320_000B_E77D()
{
	if ((emu_flags.sf != emu_flags.of)) { f__B4DA_032B_000A_EAE4(); return; }
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76AC));
	if (emu_flags.cf) { f__B4DA_032B_000A_EAE4(); return; }
	f__B4DA_049C_0009_715D(); return;
}

/**
 * Decompiled function f__B4DA_032B_000A_EAE4()
 *
 * @name f__B4DA_032B_000A_EAE4
 * @implements B4DA:032B:000A:EAE4 ()
 *
 * Called From: B4DA:0320:000B:E77D
 * Called From: B4DA:0326:000B:E77D
 */
void f__B4DA_032B_000A_EAE4()
{
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x2580), 0x0);
	if (emu_flags.zf) { f__B4DA_0335_000C_F530(); return; }
	f__B4DA_049C_0009_715D(); return;
}

/**
 * Decompiled function f__B4DA_0335_000C_F530()
 *
 * @name f__B4DA_0335_000C_F530
 * @implements B4DA:0335:000C:F530 ()
 *
 * Called From: B4DA:0330:000A:EAE4
 */
void f__B4DA_0335_000C_F530()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00, -0x7FE6));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00, -0x7FE4));
	if (!emu_flags.zf) { f__B4DA_0341_000E_DC1A(); return; }
	f__B4DA_03F9_000A_F05A(); return;
}

/**
 * Decompiled function f__B4DA_0341_000E_DC1A()
 *
 * @name f__B4DA_0341_000E_DC1A
 * @implements B4DA:0341:000E:DC1A ()
 *
 * Called From: B4DA:033C:000C:F530
 */
void f__B4DA_0341_000E_DC1A()
{
	emu_movw(&emu_di, emu_get_memory16(emu_ds, 0x00, -0x7FDC));
	emu_orw(&emu_di, emu_di);
	if (!(emu_flags.sf != emu_flags.of)) { f__B4DA_034F_0015_1E50(); return; }
	emu_movw(&emu_ax.x, emu_di);
	emu_negw(&emu_ax.x, emu_ax.x);
	f__B4DA_0351_0013_0340(); return;
}

/**
 * Decompiled function f__B4DA_034F_0015_1E50()
 *
 * @name f__B4DA_034F_0015_1E50
 * @implements B4DA:034F:0015:1E50 ()
 *
 * Called From: B4DA:0347:000E:DC1A
 */
void f__B4DA_034F_0015_1E50()
{
	emu_movw(&emu_ax.x, emu_di);
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, emu_bx.x,  0x7FF2));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ds, emu_bx.x,  0x7FF4));
	if (emu_flags.zf) { f__B4DA_0364_0015_45A5(); return; }
	emu_incw(&emu_di);
	f__B4DA_036B_000E_5C1A(); return;
}

/**
 * Decompiled function f__B4DA_0351_0013_0340()
 *
 * @name f__B4DA_0351_0013_0340
 * @implements B4DA:0351:0013:0340 ()
 *
 * Called From: B4DA:034D:000E:DC1A
 */
void f__B4DA_0351_0013_0340()
{
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, emu_bx.x,  0x7FF2));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ds, emu_bx.x,  0x7FF4));
	if (emu_flags.zf) { emu_ip = 0x0364; emu_last_cs = 0xB4DA; emu_last_ip = 0x035F; emu_last_length = 0x0013; emu_last_crc = 0x0340; emu_call(); return; } // Jump does not resolve
	emu_incw(&emu_di);
	f__B4DA_036B_000E_5C1A(); return;
}

/**
 * Decompiled function f__B4DA_0364_0015_45A5()
 *
 * @name f__B4DA_0364_0015_45A5
 * @implements B4DA:0364:0015:45A5 ()
 *
 * Called From: B4DA:035F:0015:1E50
 */
void f__B4DA_0364_0015_45A5()
{
	emu_movw(&emu_ax.x, emu_di);
	emu_negw(&emu_ax.x, emu_ax.x);
	emu_incw(&emu_ax.x);
	emu_movw(&emu_di, emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x7FDC), emu_di);
	emu_orw(&emu_di, emu_di);
	if (!(emu_flags.sf != emu_flags.of)) { emu_ip = 0x0379; emu_last_cs = 0xB4DA; emu_last_ip = 0x0371; emu_last_length = 0x0015; emu_last_crc = 0x45A5; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_di);
	emu_negw(&emu_ax.x, emu_ax.x);
	f__B4DA_037B_0025_76EC(); return;
}

/**
 * Decompiled function f__B4DA_036B_000E_5C1A()
 *
 * @name f__B4DA_036B_000E_5C1A
 * @implements B4DA:036B:000E:5C1A ()
 *
 * Called From: B4DA:0362:0015:1E50
 * Called From: B4DA:0362:0013:0340
 */
void f__B4DA_036B_000E_5C1A()
{
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x7FDC), emu_di);
	emu_orw(&emu_di, emu_di);
	if (!(emu_flags.sf != emu_flags.of)) { f__B4DA_0379_0027_02AC(); return; }
	emu_movw(&emu_ax.x, emu_di);
	emu_negw(&emu_ax.x, emu_ax.x);
	f__B4DA_037B_0025_76EC(); return;
}

/**
 * Decompiled function f__B4DA_0379_0027_02AC()
 *
 * @name f__B4DA_0379_0027_02AC
 * @implements B4DA:0379:0027:02AC ()
 *
 * Called From: B4DA:0371:000E:5C1A
 */
void f__B4DA_0379_0027_02AC()
{
	emu_movw(&emu_ax.x, emu_di);
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, emu_bx.x,  0x7FF0));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, emu_bx.x,  0x7FEE));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_dx.x);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ds, 0x00, -0x7FF1));
	emu_movb(&emu_ax.h, 0x0);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x03A0); emu_cs = 0x260F; f__260F_0054_0016_11EB();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_03A0_0017_00C9();
}

/**
 * Decompiled function f__B4DA_037B_0025_76EC()
 *
 * @name f__B4DA_037B_0025_76EC
 * @implements B4DA:037B:0025:76EC ()
 *
 * Called From: B4DA:0377:0015:45A5
 * Called From: B4DA:0377:000E:5C1A
 */
void f__B4DA_037B_0025_76EC()
{
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, emu_bx.x,  0x7FF0));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, emu_bx.x,  0x7FEE));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_dx.x);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ds, 0x00, -0x7FF1));
	emu_movb(&emu_ax.h, 0x0);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x03A0); emu_cs = 0x260F; f__260F_0054_0016_11EB();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_03A0_0017_00C9();
}

/**
 * Decompiled function f__B4DA_03A0_0017_00C9()
 *
 * @name f__B4DA_03A0_0017_00C9
 * @implements B4DA:03A0:0017:00C9 ()
 *
 * Called From: B4DA:03A0:0027:02AC
 * Called From: B4DA:03A0:0025:76EC
 */
void f__B4DA_03A0_0017_00C9()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_pop(&emu_dx.x);
	emu_addw(&emu_dx.x, emu_ax.x);
	emu_push(emu_dx.x);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ds, 0x00, -0x7FF2));
	emu_movb(&emu_ax.h, 0x0);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x03B7); emu_cs = 0x260F; f__260F_003A_0014_CDCF();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_03B7_0017_B485();
}

/**
 * Decompiled function f__B4DA_03B7_0017_B485()
 *
 * @name f__B4DA_03B7_0017_B485
 * @implements B4DA:03B7:0017:B485 ()
 *
 * Called From: B4DA:03B7:0017:00C9
 */
void f__B4DA_03B7_0017_B485()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_pop(&emu_dx.x);
	emu_addw(&emu_dx.x, emu_ax.x);
	emu_push(emu_dx.x);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ds, 0x00, -0x7FF1));
	emu_movb(&emu_ax.h, 0x0);
	emu_push(emu_ax.x);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ds, 0x00, -0x7FF2));
	emu_movb(&emu_ax.h, 0x0);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x03CE); emu_cs = 0x2B6C; f__2B6C_0197_00CE_7027();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_03CE_0023_C9CA();
}

/**
 * Decompiled function f__B4DA_03CE_0023_C9CA()
 *
 * @name f__B4DA_03CE_0023_C9CA
 * @implements B4DA:03CE:0023:C9CA ()
 *
 * Called From: B4DA:03CE:0017:B485
 */
void f__B4DA_03CE_0023_C9CA()
{
	emu_addws(&emu_sp, 0x8);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ds, 0x00, -0x7FF1));
	emu_movb(&emu_ax.h, 0x0);
	emu_push(emu_ax.x);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ds, 0x00, -0x7FF2));
	emu_movb(&emu_ax.h, 0x0);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x03F1); emu_cs = 0x2903; f__2903_0158_001A_A9AA();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_03F1_0008_F916();
}

/**
 * Decompiled function f__B4DA_03F1_0008_F916()
 *
 * @name f__B4DA_03F1_0008_F916
 * @implements B4DA:03F1:0008:F916 ()
 *
 * Called From: B4DA:03F1:0023:C9CA
 */
void f__B4DA_03F1_0008_F916()
{
	emu_addws(&emu_sp, 0xE);
	emu_push(emu_cs); emu_push(0x03F9); emu_cs = 0x2B6C; f__2B6C_0292_0028_CAA5();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_03F9_000A_F05A();
}

/**
 * Decompiled function f__B4DA_03F9_000A_F05A()
 *
 * @name f__B4DA_03F9_000A_F05A
 * @implements B4DA:03F9:000A:F05A ()
 *
 * Called From: B4DA:033E:000C:F530
 * Called From: B4DA:03F9:0008:F916
 */
void f__B4DA_03F9_000A_F05A()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3A38));
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.zf) { f__B4DA_0403_000D_4506(); return; }
	f__B4DA_0483_0017_D3E8(); return;
}

/**
 * Decompiled function f__B4DA_0403_000D_4506()
 *
 * @name f__B4DA_0403_000D_4506
 * @implements B4DA:0403:000D:4506 ()
 *
 * Called From: B4DA:03FE:000A:F05A
 */
void f__B4DA_0403_000D_4506()
{
	emu_cmpw(&emu_ax.x, 0x1);
	if (emu_flags.zf) { f__B4DA_0410_000D_0601(); return; }
	emu_cmpw(&emu_ax.x, 0x2);
	if (emu_flags.zf) { emu_ip = 0x043B; emu_last_cs = 0xB4DA; emu_last_ip = 0x040B; emu_last_length = 0x000D; emu_last_crc = 0x4506; emu_call(); return; } // Jump does not resolve
	f__B4DA_049A_0002_03AC(); return;
}

/**
 * Decompiled function f__B4DA_0410_000D_0601()
 *
 * @name f__B4DA_0410_000D_0601
 * @implements B4DA:0410:000D:0601 ()
 *
 * Called From: B4DA:0406:000D:4506
 */
void f__B4DA_0410_000D_0601()
{
	emu_movw(&emu_ax.x, 0x3);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x041D); emu_cs = 0x2537; f__2537_000C_001C_1A9E();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_041D_001E_C0DE();
}

/**
 * Decompiled function f__B4DA_041D_001E_C0DE()
 *
 * @name f__B4DA_041D_001E_C0DE
 * @implements B4DA:041D:001E:C0DE ()
 *
 * Called From: B4DA:041D:000D:0601
 */
void f__B4DA_041D_001E_C0DE()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_dx.x, 0x3C);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76AE));
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00,  0x76AC));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_adcws(&emu_dx.x, 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x7FE4), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x7FE6), emu_bx.x);
	f__B4DA_049C_0009_715D(); return;
}

/**
 * Decompiled function f__B4DA_0483_0017_D3E8()
 *
 * @name f__B4DA_0483_0017_D3E8
 * @implements B4DA:0483:0017:D3E8 ()
 *
 * Called From: B4DA:0400:000A:F05A
 */
void f__B4DA_0483_0017_D3E8()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76AE));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76AC));
	emu_addw(&emu_dx.x, 0x4650);
	emu_adcw(&emu_ax.x, 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x7FE4), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x7FE6), emu_dx.x);
	f__B4DA_049C_0009_715D(); return;
}

/**
 * Decompiled function f__B4DA_049A_0002_03AC()
 *
 * @name f__B4DA_049A_0002_03AC
 * @implements B4DA:049A:0002:03AC ()
 *
 * Called From: B4DA:040D:000D:4506
 */
void f__B4DA_049A_0002_03AC()
{
	f__B4DA_049C_0009_715D(); return;
}

/**
 * Decompiled function f__B4DA_049C_0009_715D()
 *
 * @name f__B4DA_049C_0009_715D
 * @implements B4DA:049C:0009:715D ()
 *
 * Called From: B4DA:0328:000B:E77D
 * Called From: B4DA:0332:000A:EAE4
 * Called From: B4DA:0439:001E:C0DE
 * Called From: B4DA:0498:0017:D3E8
 * Called From: B4DA:049A:0002:03AC
 */
void f__B4DA_049C_0009_715D()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0x6), 0x1);
	if (emu_flags.zf) { f__B4DA_04A5_0010_813F(); return; }
	f__B4DA_059E_000E_9E95(); return;
}

/**
 * Decompiled function f__B4DA_04A5_0010_813F()
 *
 * @name f__B4DA_04A5_0010_813F
 * @implements B4DA:04A5:0010:813F ()
 *
 * Called From: B4DA:04A0:0009:715D
 */
void f__B4DA_04A5_0010_813F()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00, -0x7FE8));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00, -0x7FEA));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76AE));
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__B4DA_04B5_000B_E5D7(); return; }
	emu_ip = 0x059B; emu_last_cs = 0xB4DA; emu_last_ip = 0x04B2; emu_last_length = 0x0010; emu_last_crc = 0x813F; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B4DA_04B5_000B_E5D7()
 *
 * @name f__B4DA_04B5_000B_E5D7
 * @implements B4DA:04B5:000B:E5D7 ()
 *
 * Called From: B4DA:04B0:0010:813F
 */
void f__B4DA_04B5_000B_E5D7()
{
	if ((emu_flags.sf != emu_flags.of)) { f__B4DA_04C0_000C_541D(); return; }
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76AC));
	if (emu_flags.cf) { f__B4DA_04C0_000C_541D(); return; }
	f__B4DA_059B_0003_0736(); return;
}

/**
 * Decompiled function f__B4DA_04C0_000C_541D()
 *
 * @name f__B4DA_04C0_000C_541D
 * @implements B4DA:04C0:000C:541D ()
 *
 * Called From: B4DA:04B5:000B:E5D7
 * Called From: B4DA:04BB:000B:E5D7
 */
void f__B4DA_04C0_000C_541D()
{
	emu_movw(&emu_ax.x, 0x4);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x04CC); emu_cs = 0x2537; f__2537_000C_001C_1A9E();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_04CC_002C_D6BB();
}

/**
 * Decompiled function f__B4DA_04CC_002C_D6BB()
 *
 * @name f__B4DA_04CC_002C_D6BB
 * @implements B4DA:04CC:002C:D6BB ()
 *
 * Called From: B4DA:04CC:000C:541D
 */
void f__B4DA_04CC_002C_D6BB()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x7FDE), emu_ax.x);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00, -0x7FDE));
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, emu_bx.x,  0x7FDC));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, emu_bx.x,  0x7FDA));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_dx.x);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ds, 0x00, -0x7FF5));
	emu_movb(&emu_ax.h, 0x0);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x04F8); emu_cs = 0x260F; f__260F_0054_0016_11EB();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_04F8_0017_00CD();
}

/**
 * Decompiled function f__B4DA_04F8_0017_00CD()
 *
 * @name f__B4DA_04F8_0017_00CD
 * @implements B4DA:04F8:0017:00CD ()
 *
 * Called From: B4DA:04F8:002C:D6BB
 */
void f__B4DA_04F8_0017_00CD()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_pop(&emu_dx.x);
	emu_addw(&emu_dx.x, emu_ax.x);
	emu_push(emu_dx.x);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ds, 0x00, -0x7FF6));
	emu_movb(&emu_ax.h, 0x0);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x050F); emu_cs = 0x260F; f__260F_003A_0014_CDCF();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_050F_0017_A481();
}

/**
 * Decompiled function f__B4DA_050F_0017_A481()
 *
 * @name f__B4DA_050F_0017_A481
 * @implements B4DA:050F:0017:A481 ()
 *
 * Called From: B4DA:050F:0017:00CD
 */
void f__B4DA_050F_0017_A481()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_pop(&emu_dx.x);
	emu_addw(&emu_dx.x, emu_ax.x);
	emu_push(emu_dx.x);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ds, 0x00, -0x7FF5));
	emu_movb(&emu_ax.h, 0x0);
	emu_push(emu_ax.x);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ds, 0x00, -0x7FF6));
	emu_movb(&emu_ax.h, 0x0);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0526); emu_cs = 0x2B6C; f__2B6C_0197_00CE_7027();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_0526_0023_C1EA();
}

/**
 * Decompiled function f__B4DA_0526_0023_C1EA()
 *
 * @name f__B4DA_0526_0023_C1EA
 * @implements B4DA:0526:0023:C1EA ()
 *
 * Called From: B4DA:0526:0017:A481
 */
void f__B4DA_0526_0023_C1EA()
{
	emu_addws(&emu_sp, 0x8);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ds, 0x00, -0x7FF5));
	emu_movb(&emu_ax.h, 0x0);
	emu_push(emu_ax.x);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ds, 0x00, -0x7FF6));
	emu_movb(&emu_ax.h, 0x0);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0549); emu_cs = 0x2903; f__2903_0158_001A_A9AA();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_0549_0008_F916();
}

/**
 * Decompiled function f__B4DA_0549_0008_F916()
 *
 * @name f__B4DA_0549_0008_F916
 * @implements B4DA:0549:0008:F916 ()
 *
 * Called From: B4DA:0549:0023:C1EA
 */
void f__B4DA_0549_0008_F916()
{
	emu_addws(&emu_sp, 0xE);
	emu_push(emu_cs); emu_push(0x0551); emu_cs = 0x2B6C; f__2B6C_0292_0028_CAA5();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_0551_0010_F4DF();
}

/**
 * Decompiled function f__B4DA_0551_0010_F4DF()
 *
 * @name f__B4DA_0551_0010_F4DF
 * @implements B4DA:0551:0010:F4DF ()
 *
 * Called From: B4DA:0551:0008:F916
 */
void f__B4DA_0551_0010_F4DF()
{
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00, -0x7FDE));
	emu_cmpws(&emu_bx.x, 0x4);
	if (!(emu_flags.cf || emu_flags.zf)) { emu_ip = 0x0599; emu_last_cs = 0xB4DA; emu_last_ip = 0x0558; emu_last_length = 0x0010; emu_last_crc = 0xF4DF; emu_call(); return; } // Jump does not resolve
	emu_shlw(&emu_bx.x, 0x1);

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_cs, emu_bx.x,  0xA84);
	switch (emu_ip) {
		case 0x0561: f__B4DA_0561_000D_D000(); return;
		case 0x0587: f__B4DA_0587_0009_7B7D(); return;
		case 0x0590: f__B4DA_0590_0009_7763(); return;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0xB4DA; emu_last_ip = 0x055C; emu_last_length = 0x0010; emu_last_crc = 0xF4DF;
			emu_call();
			return;
	}
}

/**
 * Decompiled function f__B4DA_0561_000D_D000()
 *
 * @name f__B4DA_0561_000D_D000
 * @implements B4DA:0561:000D:D000 ()
 *
 * Called From: B4DA:055C:0010:F4DF
 */
void f__B4DA_0561_000D_D000()
{
	emu_movw(&emu_ax.x, 0x1E);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x7);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x056E); emu_cs = 0x2537; f__2537_000C_001C_1A9E();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_056E_0019_0BE2();
}

/**
 * Decompiled function f__B4DA_0568_0006_0716()
 *
 * @name f__B4DA_0568_0006_0716
 * @implements B4DA:0568:0006:0716 ()
 *
 * Called From: B4DA:058E:0009:7B7D
 * Called From: B4DA:0597:0009:7763
 */
void f__B4DA_0568_0006_0716()
{
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x056E); emu_cs = 0x2537; f__2537_000C_001C_1A9E();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_056E_0019_0BE2();
}

/**
 * Decompiled function f__B4DA_056E_0019_0BE2()
 *
 * @name f__B4DA_056E_0019_0BE2
 * @implements B4DA:056E:0019:0BE2 ()
 *
 * Called From: B4DA:056E:0006:0716
 * Called From: B4DA:056E:000D:D000
 */
void f__B4DA_056E_0019_0BE2()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76AE));
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00,  0x76AC));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_adcws(&emu_dx.x, 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x7FE8), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x7FEA), emu_bx.x);
	f__B4DA_059B_0003_0736(); return;
}

/**
 * Decompiled function f__B4DA_0587_0009_7B7D()
 *
 * @name f__B4DA_0587_0009_7B7D
 * @implements B4DA:0587:0009:7B7D ()
 *
 * Called From: B4DA:055C:0010:F4DF
 */
void f__B4DA_0587_0009_7B7D()
{
	emu_movw(&emu_ax.x, 0xA);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x6);
	f__B4DA_0568_0006_0716(); return;
}

/**
 * Decompiled function f__B4DA_0590_0009_7763()
 *
 * @name f__B4DA_0590_0009_7763
 * @implements B4DA:0590:0009:7763 ()
 *
 * Called From: B4DA:055C:0010:F4DF
 */
void f__B4DA_0590_0009_7763()
{
	emu_movw(&emu_ax.x, 0x6);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x5);
	f__B4DA_0568_0006_0716(); return;
}

/**
 * Decompiled function f__B4DA_059B_0003_0736()
 *
 * @name f__B4DA_059B_0003_0736
 * @implements B4DA:059B:0003:0736 ()
 *
 * Called From: B4DA:04BD:000B:E5D7
 * Called From: B4DA:0585:0019:0BE2
 */
void f__B4DA_059B_0003_0736()
{
	f__B4DA_06BD_000E_9E95(); return;
}

/**
 * Decompiled function f__B4DA_059E_000E_9E95()
 *
 * @name f__B4DA_059E_000E_9E95
 * @implements B4DA:059E:000E:9E95 ()
 *
 * Called From: B4DA:04A2:0009:715D
 */
void f__B4DA_059E_000E_9E95()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x0);
	emu_movw(&emu_ax.x, 0x41);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x05AC); emu_cs = 0x29E8; f__29E8_08B5_000A_9E8C();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_05AC_000E_8DBB();
}

/**
 * Decompiled function f__B4DA_05AC_000E_8DBB()
 *
 * @name f__B4DA_05AC_000E_8DBB
 * @implements B4DA:05AC:000E:8DBB ()
 *
 * Called From: B4DA:05AC:000E:9E95
 */
void f__B4DA_05AC_000E_8DBB()
{
	emu_pop(&emu_cx.x);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.zf) { f__B4DA_05BF_001D_8C1B(); return; }
	emu_movw(&emu_ax.x, 0x42);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x05BA); emu_cs = 0x29E8; f__29E8_08B5_000A_9E8C();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_05BA_0022_4D86();
}

/**
 * Decompiled function f__B4DA_05BA_0022_4D86()
 *
 * @name f__B4DA_05BA_0022_4D86
 * @implements B4DA:05BA:0022:4D86 ()
 *
 * Called From: B4DA:05BA:000E:8DBB
 */
void f__B4DA_05BA_0022_4D86()
{
	emu_pop(&emu_cx.x);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (emu_flags.zf) { f__B4DA_0616_0027_2096(); return; }
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ds, 0x00, -0x7FF3));
	emu_movb(&emu_ax.h, 0x0);
	emu_push(emu_ax.x);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ds, 0x00, -0x7FF4));
	emu_movb(&emu_ax.h, 0x0);
	emu_push(emu_ax.x);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ds, 0x00, -0x7FF5));
	emu_movb(&emu_ax.h, 0x0);
	emu_push(emu_ax.x);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ds, 0x00, -0x7FF6));
	emu_movb(&emu_ax.h, 0x0);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x05DC); emu_cs = 0x29A3; f__29A3_02DA_003B_5D68();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_05DC_002E_D840();
}

/**
 * Decompiled function f__B4DA_05BF_001D_8C1B()
 *
 * @name f__B4DA_05BF_001D_8C1B
 * @implements B4DA:05BF:001D:8C1B ()
 *
 * Called From: B4DA:05AF:000E:8DBB
 */
void f__B4DA_05BF_001D_8C1B()
{
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ds, 0x00, -0x7FF3));
	emu_movb(&emu_ax.h, 0x0);
	emu_push(emu_ax.x);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ds, 0x00, -0x7FF4));
	emu_movb(&emu_ax.h, 0x0);
	emu_push(emu_ax.x);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ds, 0x00, -0x7FF5));
	emu_movb(&emu_ax.h, 0x0);
	emu_push(emu_ax.x);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ds, 0x00, -0x7FF6));
	emu_movb(&emu_ax.h, 0x0);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x05DC); emu_cs = 0x29A3; f__29A3_02DA_003B_5D68();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_05DC_002E_D840();
}

/**
 * Decompiled function f__B4DA_05DC_002E_D840()
 *
 * @name f__B4DA_05DC_002E_D840
 * @implements B4DA:05DC:002E:D840 ()
 *
 * Called From: B4DA:05DC:0022:4D86
 * Called From: B4DA:05DC:001D:8C1B
 */
void f__B4DA_05DC_002E_D840()
{
	emu_addws(&emu_sp, 0x8);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (emu_flags.zf) { f__B4DA_0616_0027_2096(); return; }
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00, -0x7FE8), 0xFF);
	if (!emu_flags.zf) { emu_ip = 0x05F1; emu_last_cs = 0xB4DA; emu_last_ip = 0x05E8; emu_last_length = 0x002E; emu_last_crc = 0xD840; emu_call(); return; } // Jump does not resolve
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00, -0x7FEA), 0xFF);
	if (emu_flags.zf) { emu_ip = 0x0614; emu_last_cs = 0xB4DA; emu_last_ip = 0x05EF; emu_last_length = 0x002E; emu_last_crc = 0xD840; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x7FE8), 0xFFFF);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x7FEA), 0xFFFF);
	emu_movw(&emu_ax.x, 0x4);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x060A); emu_cs = 0x2537; emu_ip = 0x0616; emu_last_cs = 0xB4DA; emu_last_ip = 0x0605; emu_last_length = 0x002E; emu_last_crc = 0xD840; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__B4DA_0616_0027_2096()
 *
 * @name f__B4DA_0616_0027_2096
 * @implements B4DA:0616:0027:2096 ()
 *
 * Called From: B4DA:05BD:0022:4D86
 * Called From: B4DA:05E1:002E:D840
 */
void f__B4DA_0616_0027_2096()
{
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00, -0x7FDE), 0x0);
	if (emu_flags.zf) { f__B4DA_0634_0009_0ED9(); return; }
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x7FDE), 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x7FE8), 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x7FEA), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x1);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x0);
	if (!emu_flags.zf) { f__B4DA_063D_0027_C6BE(); return; }
	emu_ip = 0x06BD; emu_last_cs = 0xB4DA; emu_last_ip = 0x063A; emu_last_length = 0x0027; emu_last_crc = 0x2096; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B4DA_0634_0009_0ED9()
 *
 * @name f__B4DA_0634_0009_0ED9
 * @implements B4DA:0634:0009:0ED9 ()
 *
 * Called From: B4DA:061B:0027:2096
 */
void f__B4DA_0634_0009_0ED9()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x0);
	if (!emu_flags.zf) { f__B4DA_063D_0027_C6BE(); return; }
	f__B4DA_06BD_000E_9E95(); return;
}

/**
 * Decompiled function f__B4DA_063D_0027_C6BE()
 *
 * @name f__B4DA_063D_0027_C6BE
 * @implements B4DA:063D:0027:C6BE ()
 *
 * Called From: B4DA:0638:0027:2096
 * Called From: B4DA:0638:0009:0ED9
 */
void f__B4DA_063D_0027_C6BE()
{
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00, -0x7FDE));
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, emu_bx.x,  0x7FDC));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, emu_bx.x,  0x7FDA));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_dx.x);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ds, 0x00, -0x7FF5));
	emu_movb(&emu_ax.h, 0x0);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x0664); emu_cs = 0x260F; f__260F_0054_0016_11EB();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_0664_0017_00CD();
}

/**
 * Decompiled function f__B4DA_0664_0017_00CD()
 *
 * @name f__B4DA_0664_0017_00CD
 * @implements B4DA:0664:0017:00CD ()
 *
 * Called From: B4DA:0664:0027:C6BE
 */
void f__B4DA_0664_0017_00CD()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_pop(&emu_dx.x);
	emu_addw(&emu_dx.x, emu_ax.x);
	emu_push(emu_dx.x);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ds, 0x00, -0x7FF6));
	emu_movb(&emu_ax.h, 0x0);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x067B); emu_cs = 0x260F; f__260F_003A_0014_CDCF();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_067B_0017_A481();
}

/**
 * Decompiled function f__B4DA_067B_0017_A481()
 *
 * @name f__B4DA_067B_0017_A481
 * @implements B4DA:067B:0017:A481 ()
 *
 * Called From: B4DA:067B:0017:00CD
 */
void f__B4DA_067B_0017_A481()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_pop(&emu_dx.x);
	emu_addw(&emu_dx.x, emu_ax.x);
	emu_push(emu_dx.x);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ds, 0x00, -0x7FF5));
	emu_movb(&emu_ax.h, 0x0);
	emu_push(emu_ax.x);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ds, 0x00, -0x7FF6));
	emu_movb(&emu_ax.h, 0x0);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0692); emu_cs = 0x2B6C; f__2B6C_0197_00CE_7027();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_0692_0023_C1EA();
}

/**
 * Decompiled function f__B4DA_0692_0023_C1EA()
 *
 * @name f__B4DA_0692_0023_C1EA
 * @implements B4DA:0692:0023:C1EA ()
 *
 * Called From: B4DA:0692:0017:A481
 */
void f__B4DA_0692_0023_C1EA()
{
	emu_addws(&emu_sp, 0x8);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ds, 0x00, -0x7FF5));
	emu_movb(&emu_ax.h, 0x0);
	emu_push(emu_ax.x);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ds, 0x00, -0x7FF6));
	emu_movb(&emu_ax.h, 0x0);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x06B5); emu_cs = 0x2903; f__2903_0158_001A_A9AA();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_06B5_0008_F916();
}

/**
 * Decompiled function f__B4DA_06B5_0008_F916()
 *
 * @name f__B4DA_06B5_0008_F916
 * @implements B4DA:06B5:0008:F916 ()
 *
 * Called From: B4DA:06B5:0023:C1EA
 */
void f__B4DA_06B5_0008_F916()
{
	emu_addws(&emu_sp, 0xE);
	emu_push(emu_cs); emu_push(0x06BD); emu_cs = 0x2B6C; f__2B6C_0292_0028_CAA5();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_06BD_000E_9E95();
}

/**
 * Decompiled function f__B4DA_06BD_000E_9E95()
 *
 * @name f__B4DA_06BD_000E_9E95
 * @implements B4DA:06BD:000E:9E95 ()
 *
 * Called From: B4DA:059B:0003:0736
 * Called From: B4DA:063A:0009:0ED9
 * Called From: B4DA:06BD:0008:F916
 */
void f__B4DA_06BD_000E_9E95()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x0);
	emu_movw(&emu_ax.x, 0x41);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x06CB); emu_cs = 0x29E8; f__29E8_08B5_000A_9E8C();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_06CB_000E_8DBB();
}

/**
 * Decompiled function f__B4DA_06CB_000E_8DBB()
 *
 * @name f__B4DA_06CB_000E_8DBB
 * @implements B4DA:06CB:000E:8DBB ()
 *
 * Called From: B4DA:06CB:000E:9E95
 */
void f__B4DA_06CB_000E_8DBB()
{
	emu_pop(&emu_cx.x);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.zf) { f__B4DA_06DE_001D_FD17(); return; }
	emu_movw(&emu_ax.x, 0x42);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x06D9); emu_cs = 0x29E8; f__29E8_08B5_000A_9E8C();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_06D9_0022_7C89();
}

/**
 * Decompiled function f__B4DA_06D9_0022_7C89()
 *
 * @name f__B4DA_06D9_0022_7C89
 * @implements B4DA:06D9:0022:7C89 ()
 *
 * Called From: B4DA:06D9:000E:8DBB
 */
void f__B4DA_06D9_0022_7C89()
{
	emu_pop(&emu_cx.x);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (emu_flags.zf) { f__B4DA_0738_0029_3A9B(); return; }
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ds, 0x00, -0x7FF7));
	emu_movb(&emu_ax.h, 0x0);
	emu_push(emu_ax.x);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ds, 0x00, -0x7FF8));
	emu_movb(&emu_ax.h, 0x0);
	emu_push(emu_ax.x);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ds, 0x00, -0x7FF9));
	emu_movb(&emu_ax.h, 0x0);
	emu_push(emu_ax.x);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ds, 0x00, -0x7FFA));
	emu_movb(&emu_ax.h, 0x0);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x06FB); emu_cs = 0x29A3; f__29A3_02DA_003B_5D68();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_06FB_0022_E0CE();
}

/**
 * Decompiled function f__B4DA_06DE_001D_FD17()
 *
 * @name f__B4DA_06DE_001D_FD17
 * @implements B4DA:06DE:001D:FD17 ()
 *
 * Called From: B4DA:06CE:000E:8DBB
 */
void f__B4DA_06DE_001D_FD17()
{
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ds, 0x00, -0x7FF7));
	emu_movb(&emu_ax.h, 0x0);
	emu_push(emu_ax.x);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ds, 0x00, -0x7FF8));
	emu_movb(&emu_ax.h, 0x0);
	emu_push(emu_ax.x);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ds, 0x00, -0x7FF9));
	emu_movb(&emu_ax.h, 0x0);
	emu_push(emu_ax.x);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ds, 0x00, -0x7FFA));
	emu_movb(&emu_ax.h, 0x0);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x06FB); emu_cs = 0x29A3; f__29A3_02DA_003B_5D68();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_06FB_0022_E0CE();
}

/**
 * Decompiled function f__B4DA_06FB_0022_E0CE()
 *
 * @name f__B4DA_06FB_0022_E0CE
 * @implements B4DA:06FB:0022:E0CE ()
 *
 * Called From: B4DA:06FB:001D:FD17
 * Called From: B4DA:06FB:0022:7C89
 */
void f__B4DA_06FB_0022_E0CE()
{
	emu_addws(&emu_sp, 0x8);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (emu_flags.zf) { f__B4DA_0738_0029_3A9B(); return; }
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00, -0x7FE2), 0x4);
	if (emu_flags.zf) { f__B4DA_0735_0003_05A0(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x1);
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00, -0x7FE2), 0x3);
	if (emu_flags.zf) { f__B4DA_071D_001B_A14F(); return; }
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x7FE2), 0x3);
	f__B4DA_0723_0015_3F49(); return;
}

/**
 * Decompiled function f__B4DA_071D_001B_A14F()
 *
 * @name f__B4DA_071D_001B_A14F
 * @implements B4DA:071D:001B:A14F ()
 *
 * Called From: B4DA:0713:0022:E0CE
 */
void f__B4DA_071D_001B_A14F()
{
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x7FE2), 0x4);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x7FE0), 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x7FEC), 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x7FEE), 0x0);
	f__B4DA_09F3_0009_0ED9(); return;
}

/**
 * Decompiled function f__B4DA_0723_0015_3F49()
 *
 * @name f__B4DA_0723_0015_3F49
 * @implements B4DA:0723:0015:3F49 ()
 *
 * Called From: B4DA:071B:0022:E0CE
 */
void f__B4DA_0723_0015_3F49()
{
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x7FE0), 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x7FEC), 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x7FEE), 0x0);
	f__B4DA_09F3_0009_0ED9(); return;
}

/**
 * Decompiled function f__B4DA_0735_0003_05A0()
 *
 * @name f__B4DA_0735_0003_05A0
 * @implements B4DA:0735:0003:05A0 ()
 *
 * Called From: B4DA:0707:0022:E0CE
 */
void f__B4DA_0735_0003_05A0()
{
	f__B4DA_09F3_0009_0ED9(); return;
}

/**
 * Decompiled function f__B4DA_0738_0029_3A9B()
 *
 * @name f__B4DA_0738_0029_3A9B
 * @implements B4DA:0738:0029:3A9B ()
 *
 * Called From: B4DA:06DC:0022:7C89
 * Called From: B4DA:0700:0022:E0CE
 */
void f__B4DA_0738_0029_3A9B()
{
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ds, 0x00, -0x7FF7));
	emu_movb(&emu_ax.h, 0x0);
	emu_addw(&emu_ax.x, 0x18);
	emu_push(emu_ax.x);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ds, 0x00, -0x7FF8));
	emu_movb(&emu_ax.h, 0x0);
	emu_addw(&emu_ax.x, 0x10);
	emu_push(emu_ax.x);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ds, 0x00, -0x7FF9));
	emu_movb(&emu_ax.h, 0x0);
	emu_addw(&emu_ax.x, 0xFFF8);
	emu_push(emu_ax.x);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ds, 0x00, -0x7FFA));
	emu_movb(&emu_ax.h, 0x0);
	emu_addw(&emu_ax.x, 0xFFF0);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0761); emu_cs = 0x29A3; f__29A3_02DA_003B_5D68();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_0761_000A_B2BF();
}

/**
 * Decompiled function f__B4DA_0761_000A_B2BF()
 *
 * @name f__B4DA_0761_000A_B2BF
 * @implements B4DA:0761:000A:B2BF ()
 *
 * Called From: B4DA:0761:0029:3A9B
 */
void f__B4DA_0761_000A_B2BF()
{
	emu_addws(&emu_sp, 0x8);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.zf) { f__B4DA_076B_0021_B632(); return; }
	f__B4DA_0824_0010_A053(); return;
}

/**
 * Decompiled function f__B4DA_076B_0021_B632()
 *
 * @name f__B4DA_076B_0021_B632
 * @implements B4DA:076B:0021:B632 ()
 *
 * Called From: B4DA:0766:000A:B2BF
 */
void f__B4DA_076B_0021_B632()
{
	emu_movw(&emu_ax.x, 0xC7);
	emu_push(emu_ax.x);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ds, 0x00, -0x7FF8));
	emu_movb(&emu_ax.h, 0x0);
	emu_addw(&emu_ax.x, 0x8);
	emu_push(emu_ax.x);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ds, 0x00, -0x7FF7));
	emu_movb(&emu_ax.h, 0x0);
	emu_push(emu_ax.x);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ds, 0x00, -0x7FFA));
	emu_movb(&emu_ax.h, 0x0);
	emu_addw(&emu_ax.x, 0xFFF8);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x078C); emu_cs = 0x29A3; f__29A3_02DA_003B_5D68();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_078C_000C_C9DE();
}

/**
 * Decompiled function f__B4DA_078C_000C_C9DE()
 *
 * @name f__B4DA_078C_000C_C9DE
 * @implements B4DA:078C:000C:C9DE ()
 *
 * Called From: B4DA:078C:0021:B632
 */
void f__B4DA_078C_000C_C9DE()
{
	emu_addws(&emu_sp, 0x8);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (emu_flags.zf) { f__B4DA_0798_0026_86D8(); return; }
	emu_movw(&emu_si, 0x3);
	f__B4DA_07FE_0026_F41E(); return;
}

/**
 * Decompiled function f__B4DA_0798_0026_86D8()
 *
 * @name f__B4DA_0798_0026_86D8
 * @implements B4DA:0798:0026:86D8 ()
 *
 * Called From: B4DA:0791:000C:C9DE
 */
void f__B4DA_0798_0026_86D8()
{
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ds, 0x00, -0x7FF7));
	emu_movb(&emu_ax.h, 0x0);
	emu_addw(&emu_ax.x, 0x8);
	emu_push(emu_ax.x);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ds, 0x00, -0x7FF8));
	emu_movb(&emu_ax.h, 0x0);
	emu_addw(&emu_ax.x, 0x10);
	emu_push(emu_ax.x);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ds, 0x00, -0x7FF9));
	emu_movb(&emu_ax.h, 0x0);
	emu_addw(&emu_ax.x, 0xFFF8);
	emu_push(emu_ax.x);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ds, 0x00, -0x7FF8));
	emu_movb(&emu_ax.h, 0x0);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x07BE); emu_cs = 0x29A3; f__29A3_02DA_003B_5D68();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_07BE_000C_C96A();
}

/**
 * Decompiled function f__B4DA_07BE_000C_C96A()
 *
 * @name f__B4DA_07BE_000C_C96A
 * @implements B4DA:07BE:000C:C96A ()
 *
 * Called From: B4DA:07BE:0026:86D8
 */
void f__B4DA_07BE_000C_C96A()
{
	emu_addws(&emu_sp, 0x8);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (emu_flags.zf) { f__B4DA_07CA_0026_62BC(); return; }
	emu_movw(&emu_si, 0x2);
	f__B4DA_07FE_0026_F41E(); return;
}

/**
 * Decompiled function f__B4DA_07CA_0026_62BC()
 *
 * @name f__B4DA_07CA_0026_62BC
 * @implements B4DA:07CA:0026:62BC ()
 *
 * Called From: B4DA:07C3:000C:C96A
 */
void f__B4DA_07CA_0026_62BC()
{
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ds, 0x00, -0x7FF7));
	emu_movb(&emu_ax.h, 0x0);
	emu_addw(&emu_ax.x, 0x8);
	emu_push(emu_ax.x);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ds, 0x00, -0x7FFA));
	emu_movb(&emu_ax.h, 0x0);
	emu_push(emu_ax.x);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ds, 0x00, -0x7FF9));
	emu_movb(&emu_ax.h, 0x0);
	emu_addw(&emu_ax.x, 0xFFF8);
	emu_push(emu_ax.x);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ds, 0x00, -0x7FFA));
	emu_movb(&emu_ax.h, 0x0);
	emu_addw(&emu_ax.x, 0xFFF0);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x07F0); emu_cs = 0x29A3; f__29A3_02DA_003B_5D68();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_07F0_000C_C936();
}

/**
 * Decompiled function f__B4DA_07F0_000C_C936()
 *
 * @name f__B4DA_07F0_000C_C936
 * @implements B4DA:07F0:000C:C936 ()
 *
 * Called From: B4DA:07F0:0026:62BC
 */
void f__B4DA_07F0_000C_C936()
{
	emu_addws(&emu_sp, 0x8);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (emu_flags.zf) { f__B4DA_07FC_0028_BC1E(); return; }
	emu_movw(&emu_si, 0x1);
	f__B4DA_07FE_0026_F41E(); return;
}

/**
 * Decompiled function f__B4DA_07FC_0028_BC1E()
 *
 * @name f__B4DA_07FC_0028_BC1E
 * @implements B4DA:07FC:0028:BC1E ()
 *
 * Called From: B4DA:07F5:000C:C936
 */
void f__B4DA_07FC_0028_BC1E()
{
	emu_xorw(&emu_si, emu_si);
	emu_cmpw(&emu_si, emu_get_memory16(emu_ds, 0x00, -0x7FE2));
	if (emu_flags.zf) { f__B4DA_0821_0003_0476(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x1);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x7FE2), emu_si);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x7FE0), 0x0);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76AE));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76AC));
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x7FEC), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x7FEE), emu_dx.x);
	f__B4DA_09F3_0009_0ED9(); return;
}

/**
 * Decompiled function f__B4DA_07FE_0026_F41E()
 *
 * @name f__B4DA_07FE_0026_F41E
 * @implements B4DA:07FE:0026:F41E ()
 *
 * Called From: B4DA:0796:000C:C9DE
 * Called From: B4DA:07C8:000C:C96A
 * Called From: B4DA:07FA:000C:C936
 */
void f__B4DA_07FE_0026_F41E()
{
	emu_cmpw(&emu_si, emu_get_memory16(emu_ds, 0x00, -0x7FE2));
	if (emu_flags.zf) { f__B4DA_0821_0003_0476(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x1);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x7FE2), emu_si);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x7FE0), 0x0);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76AE));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76AC));
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x7FEC), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x7FEE), emu_dx.x);
	f__B4DA_09F3_0009_0ED9(); return;
}

/**
 * Decompiled function f__B4DA_0821_0003_0476()
 *
 * @name f__B4DA_0821_0003_0476
 * @implements B4DA:0821:0003:0476 ()
 *
 * Called From: B4DA:0802:0026:F41E
 * Called From: B4DA:0802:0028:BC1E
 */
void f__B4DA_0821_0003_0476()
{
	f__B4DA_09F3_0009_0ED9(); return;
}

/**
 * Decompiled function f__B4DA_0824_0010_A053()
 *
 * @name f__B4DA_0824_0010_A053
 * @implements B4DA:0824:0010:A053 ()
 *
 * Called From: B4DA:0768:000A:B2BF
 */
void f__B4DA_0824_0010_A053()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00, -0x7FEC));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00, -0x7FEE));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76AE));
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__B4DA_0834_000B_E47D(); return; }
	f__B4DA_09F0_0003_0564(); return;
}

/**
 * Decompiled function f__B4DA_0834_000B_E47D()
 *
 * @name f__B4DA_0834_000B_E47D
 * @implements B4DA:0834:000B:E47D ()
 *
 * Called From: B4DA:082F:0010:A053
 */
void f__B4DA_0834_000B_E47D()
{
	if ((emu_flags.sf != emu_flags.of)) { f__B4DA_083F_0028_A376(); return; }
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76AC));
	if (emu_flags.cf) { f__B4DA_083F_0028_A376(); return; }
	f__B4DA_09F0_0003_0564(); return;
}

/**
 * Decompiled function f__B4DA_083F_0028_A376()
 *
 * @name f__B4DA_083F_0028_A376
 * @implements B4DA:083F:0028:A376 ()
 *
 * Called From: B4DA:0834:000B:E47D
 * Called From: B4DA:083A:000B:E47D
 */
void f__B4DA_083F_0028_A376()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x1);
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00, -0x7FE0), 0x0);
	if (emu_flags.zf) { f__B4DA_088E_0015_8E62(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00, -0x7FE0));
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x7FE2), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x7FE0), 0x0);
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00, -0x7FE2), 0x4);
	if (!emu_flags.zf) { f__B4DA_0867_000D_630A(); return; }
	emu_movw(&emu_ax.x, 0x1E);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0xC);
	f__B4DA_086E_0006_0716(); return;
}

/**
 * Decompiled function f__B4DA_0867_000D_630A()
 *
 * @name f__B4DA_0867_000D_630A
 * @implements B4DA:0867:000D:630A ()
 *
 * Called From: B4DA:085C:0028:A376
 */
void f__B4DA_0867_000D_630A()
{
	emu_movw(&emu_ax.x, 0xB4);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x14);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0874); emu_cs = 0x2537; f__2537_000C_001C_1A9E();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_0874_001A_0E86();
}

/**
 * Decompiled function f__B4DA_086E_0006_0716()
 *
 * @name f__B4DA_086E_0006_0716
 * @implements B4DA:086E:0006:0716 ()
 *
 * Called From: B4DA:0865:0028:A376
 */
void f__B4DA_086E_0006_0716()
{
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0874); emu_cs = 0x2537; f__2537_000C_001C_1A9E();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_0874_001A_0E86();
}

/**
 * Decompiled function f__B4DA_0874_001A_0E86()
 *
 * @name f__B4DA_0874_001A_0E86
 * @implements B4DA:0874:001A:0E86 ()
 *
 * Called From: B4DA:0874:0006:0716
 * Called From: B4DA:0874:000D:630A
 */
void f__B4DA_0874_001A_0E86()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76AE));
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00,  0x76AC));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_adcws(&emu_dx.x, 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x7FEC), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x7FEE), emu_bx.x);
	f__B4DA_09EE_0002_03AA(); return;
}

/**
 * Decompiled function f__B4DA_088E_0015_8E62()
 *
 * @name f__B4DA_088E_0015_8E62
 * @implements B4DA:088E:0015:8E62 ()
 *
 * Called From: B4DA:0849:0028:A376
 */
void f__B4DA_088E_0015_8E62()
{
	emu_xorw(&emu_si, emu_si);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax.x, emu_ax.x);
	if (emu_flags.zf) { f__B4DA_08A3_000C_4C1D(); return; }
	emu_cmpw(&emu_ax.x, 0x1);
	if (emu_flags.zf) { f__B4DA_08C7_000C_BFD0(); return; }
	emu_cmpw(&emu_ax.x, 0x2);
	if (emu_flags.zf) { f__B4DA_0902_0016_AE41(); return; }
	emu_ip = 0x0902; emu_last_cs = 0xB4DA; emu_last_ip = 0x08A1; emu_last_length = 0x0015; emu_last_crc = 0x8E62; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B4DA_08A3_000C_4C1D()
 *
 * @name f__B4DA_08A3_000C_4C1D
 * @implements B4DA:08A3:000C:4C1D ()
 *
 * Called From: B4DA:0895:0015:8E62
 */
void f__B4DA_08A3_000C_4C1D()
{
	emu_movw(&emu_ax.x, 0x7);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x08AF); emu_cs = 0x2537; f__2537_000C_001C_1A9E();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_08AF_000E_8F3D();
}

/**
 * Decompiled function f__B4DA_08AF_000E_8F3D()
 *
 * @name f__B4DA_08AF_000E_8F3D
 * @implements B4DA:08AF:000E:8F3D ()
 *
 * Called From: B4DA:08AF:000C:4C1D
 */
void f__B4DA_08AF_000E_8F3D()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_si, emu_ax.x);
	emu_cmpws(&emu_si, 0x5);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__B4DA_08BD_000A_DBBD(); return; }
	emu_movw(&emu_si, 0x1);
	f__B4DA_08C5_0002_037E(); return;
}

/**
 * Decompiled function f__B4DA_08BD_000A_DBBD()
 *
 * @name f__B4DA_08BD_000A_DBBD
 * @implements B4DA:08BD:000A:DBBD ()
 *
 * Called From: B4DA:08B6:000E:8F3D
 */
void f__B4DA_08BD_000A_DBBD()
{
	emu_cmpws(&emu_si, 0x5);
	if (!emu_flags.zf) { f__B4DA_08C5_0002_037E(); return; }
	emu_movw(&emu_si, 0x4);
	f__B4DA_0930_002F_9848(); return;
}

/**
 * Decompiled function f__B4DA_08C5_0002_037E()
 *
 * @name f__B4DA_08C5_0002_037E
 * @implements B4DA:08C5:0002:037E ()
 *
 * Called From: B4DA:08BB:000E:8F3D
 * Called From: B4DA:08C0:000A:DBBD
 */
void f__B4DA_08C5_0002_037E()
{
	f__B4DA_0930_002F_9848(); return;
}

/**
 * Decompiled function f__B4DA_08C7_000C_BFD0()
 *
 * @name f__B4DA_08C7_000C_BFD0
 * @implements B4DA:08C7:000C:BFD0 ()
 *
 * Called From: B4DA:089A:0015:8E62
 */
void f__B4DA_08C7_000C_BFD0()
{
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x3C4A), 0x0);
	if (emu_flags.zf) { f__B4DA_08D3_000C_94EB(); return; }
	emu_movw(&emu_ax.x, 0x3);
	f__B4DA_08D5_000A_A4EE(); return;
}

/**
 * Decompiled function f__B4DA_08D3_000C_94EB()
 *
 * @name f__B4DA_08D3_000C_94EB
 * @implements B4DA:08D3:000C:94EB ()
 *
 * Called From: B4DA:08CC:000C:BFD0
 */
void f__B4DA_08D3_000C_94EB()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00, -0x7FE2));
	if (emu_flags.zf) { f__B4DA_08DF_000C_FC1D(); return; }
	emu_xorw(&emu_si, emu_si);
	f__B4DA_0900_0002_03F0(); return;
}

/**
 * Decompiled function f__B4DA_08D5_000A_A4EE()
 *
 * @name f__B4DA_08D5_000A_A4EE
 * @implements B4DA:08D5:000A:A4EE ()
 *
 * Called From: B4DA:08D1:000C:BFD0
 */
void f__B4DA_08D5_000A_A4EE()
{
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00, -0x7FE2));
	if (emu_flags.zf) { f__B4DA_08DF_000C_FC1D(); return; }
	emu_xorw(&emu_si, emu_si);
	f__B4DA_0900_0002_03F0(); return;
}

/**
 * Decompiled function f__B4DA_08DF_000C_FC1D()
 *
 * @name f__B4DA_08DF_000C_FC1D
 * @implements B4DA:08DF:000C:FC1D ()
 *
 * Called From: B4DA:08D9:000C:94EB
 * Called From: B4DA:08D9:000A:A4EE
 */
void f__B4DA_08DF_000C_FC1D()
{
	emu_movw(&emu_ax.x, 0x11);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x08EB); emu_cs = 0x2537; f__2537_000C_001C_1A9E();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_08EB_000D_CCB4();
}

/**
 * Decompiled function f__B4DA_08EB_000D_CCB4()
 *
 * @name f__B4DA_08EB_000D_CCB4
 * @implements B4DA:08EB:000D:CCB4 ()
 *
 * Called From: B4DA:08EB:000C:FC1D
 */
void f__B4DA_08EB_000D_CCB4()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_si, emu_ax.x);
	emu_cmpws(&emu_si, 0x9);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__B4DA_08F8_000A_DFB3(); return; }
	emu_xorw(&emu_si, emu_si);
	f__B4DA_0900_0002_03F0(); return;
}

/**
 * Decompiled function f__B4DA_08F8_000A_DFB3()
 *
 * @name f__B4DA_08F8_000A_DFB3
 * @implements B4DA:08F8:000A:DFB3 ()
 *
 * Called From: B4DA:08F2:000D:CCB4
 */
void f__B4DA_08F8_000A_DFB3()
{
	emu_cmpws(&emu_si, 0x5);
	if ((emu_flags.sf != emu_flags.of)) { f__B4DA_0900_0002_03F0(); return; }
	emu_movw(&emu_si, 0x4);
	f__B4DA_0930_002F_9848(); return;
}

/**
 * Decompiled function f__B4DA_0900_0002_03F0()
 *
 * @name f__B4DA_0900_0002_03F0
 * @implements B4DA:0900:0002:03F0 ()
 *
 * Called From: B4DA:08DD:000C:94EB
 * Called From: B4DA:08DD:000A:A4EE
 * Called From: B4DA:08F6:000D:CCB4
 * Called From: B4DA:08FB:000A:DFB3
 */
void f__B4DA_0900_0002_03F0()
{
	f__B4DA_0930_002F_9848(); return;
}

/**
 * Decompiled function f__B4DA_0902_0016_AE41()
 *
 * @name f__B4DA_0902_0016_AE41
 * @implements B4DA:0902:0016:AE41 ()
 *
 * Called From: B4DA:089F:0015:8E62
 */
void f__B4DA_0902_0016_AE41()
{
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00, -0x7FE2), 0x2);
	if (emu_flags.zf) { f__B4DA_090C_000C_0C1D(); return; }
	emu_movw(&emu_si, 0x2);
	emu_movw(&emu_ax.x, 0xF);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0918); emu_cs = 0x2537; f__2537_000C_001C_1A9E();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_0918_000E_800D();
}

/**
 * Decompiled function f__B4DA_090C_000C_0C1D()
 *
 * @name f__B4DA_090C_000C_0C1D
 * @implements B4DA:090C:000C:0C1D ()
 *
 * Called From: B4DA:0907:0016:AE41
 */
void f__B4DA_090C_000C_0C1D()
{
	emu_movw(&emu_ax.x, 0xF);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0918); emu_cs = 0x2537; f__2537_000C_001C_1A9E();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_0918_000E_800D();
}

/**
 * Decompiled function f__B4DA_0918_000E_800D()
 *
 * @name f__B4DA_0918_000E_800D
 * @implements B4DA:0918:000E:800D ()
 *
 * Called From: B4DA:0918:0016:AE41
 * Called From: B4DA:0918:000C:0C1D
 */
void f__B4DA_0918_000E_800D()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_si, emu_ax.x);
	emu_cmpws(&emu_si, 0xA);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__B4DA_0926_000A_DFEF(); return; }
	emu_movw(&emu_si, 0x2);
	f__B4DA_092E_0002_03AC(); return;
}

/**
 * Decompiled function f__B4DA_0926_000A_DFEF()
 *
 * @name f__B4DA_0926_000A_DFEF
 * @implements B4DA:0926:000A:DFEF ()
 *
 * Called From: B4DA:091F:000E:800D
 */
void f__B4DA_0926_000A_DFEF()
{
	emu_cmpws(&emu_si, 0x5);
	if ((emu_flags.sf != emu_flags.of)) { f__B4DA_092E_0002_03AC(); return; }
	emu_movw(&emu_si, 0x4);
	f__B4DA_0930_002F_9848(); return;
}

/**
 * Decompiled function f__B4DA_092E_0002_03AC()
 *
 * @name f__B4DA_092E_0002_03AC
 * @implements B4DA:092E:0002:03AC ()
 *
 * Called From: B4DA:0924:000E:800D
 * Called From: B4DA:0929:000A:DFEF
 */
void f__B4DA_092E_0002_03AC()
{
	f__B4DA_0930_002F_9848(); return;
}

/**
 * Decompiled function f__B4DA_0930_002F_9848()
 *
 * @name f__B4DA_0930_002F_9848
 * @implements B4DA:0930:002F:9848 ()
 *
 * Called From: B4DA:08C5:0002:037E
 * Called From: B4DA:08C5:000A:DBBD
 * Called From: B4DA:0900:0002:03F0
 * Called From: B4DA:0900:000A:DFB3
 * Called From: B4DA:092E:0002:03AC
 * Called From: B4DA:092E:000A:DFEF
 */
void f__B4DA_0930_002F_9848()
{
	emu_cmpws(&emu_si, 0x2);
	if (!emu_flags.zf) { f__B4DA_093C_0023_9033(); return; }
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00, -0x7FE2), 0x1);
	if (emu_flags.zf) { f__B4DA_0948_0017_259D(); return; }
	emu_cmpws(&emu_si, 0x1);
	if (!emu_flags.zf) { f__B4DA_0978_002C_329F(); return; }
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00, -0x7FE2), 0x2);
	if (!emu_flags.zf) { emu_ip = 0x0978; emu_last_cs = 0xB4DA; emu_last_ip = 0x0946; emu_last_length = 0x002F; emu_last_crc = 0x9848; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x7FE0), emu_si);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x7FE2), 0x0);
	emu_movw(&emu_ax.x, 0x5);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x095F); emu_cs = 0x2537; emu_ip = 0x096B; emu_last_cs = 0xB4DA; emu_last_ip = 0x095A; emu_last_length = 0x002F; emu_last_crc = 0x9848; emu_call(); // Jump does not resolve
	f__B4DA_095F_0019_074E();
}

/**
 * Decompiled function f__B4DA_093C_0023_9033()
 *
 * @name f__B4DA_093C_0023_9033
 * @implements B4DA:093C:0023:9033 ()
 *
 * Called From: B4DA:0933:002F:9848
 */
void f__B4DA_093C_0023_9033()
{
	emu_cmpws(&emu_si, 0x1);
	if (!emu_flags.zf) { f__B4DA_0978_002C_329F(); return; }
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00, -0x7FE2), 0x2);
	if (!emu_flags.zf) { f__B4DA_0978_002C_329F(); return; }
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x7FE0), emu_si);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x7FE2), 0x0);
	emu_movw(&emu_ax.x, 0x5);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x095F); emu_cs = 0x2537; f__2537_000C_001C_1A9E();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_095F_0019_074E();
}

/**
 * Decompiled function f__B4DA_0948_0017_259D()
 *
 * @name f__B4DA_0948_0017_259D
 * @implements B4DA:0948:0017:259D ()
 *
 * Called From: B4DA:093A:002F:9848
 */
void f__B4DA_0948_0017_259D()
{
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x7FE0), emu_si);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x7FE2), 0x0);
	emu_movw(&emu_ax.x, 0x5);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x095F); emu_cs = 0x2537; f__2537_000C_001C_1A9E();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_095F_0019_074E();
}

/**
 * Decompiled function f__B4DA_095F_0019_074E()
 *
 * @name f__B4DA_095F_0019_074E
 * @implements B4DA:095F:0019:074E ()
 *
 * Called From: B4DA:095F:0017:259D
 * Called From: B4DA:095F:0023:9033
 */
void f__B4DA_095F_0019_074E()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76AE));
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00,  0x76AC));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_adcws(&emu_dx.x, 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x7FEC), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x7FEE), emu_bx.x);
	f__B4DA_09DA_0016_EAFB(); return;
}

/**
 * Decompiled function f__B4DA_0978_002C_329F()
 *
 * @name f__B4DA_0978_002C_329F
 * @implements B4DA:0978:002C:329F ()
 *
 * Called From: B4DA:093F:002F:9848
 * Called From: B4DA:093F:0023:9033
 * Called From: B4DA:0946:0023:9033
 */
void f__B4DA_0978_002C_329F()
{
	emu_cmpw(&emu_si, emu_get_memory16(emu_ds, 0x00, -0x7FE2));
	if (emu_flags.zf) { f__B4DA_09A4_0012_82E9(); return; }
	emu_cmpws(&emu_si, 0x4);
	if (emu_flags.zf) { f__B4DA_098A_001A_1070(); return; }
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00, -0x7FE2), 0x4);
	if (!emu_flags.zf) { f__B4DA_09A4_0012_82E9(); return; }
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x7FE0), emu_si);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x7FE2), 0x3);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76AE));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76AC));
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x7FEC), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x7FEE), emu_dx.x);
	f__B4DA_09DA_0016_EAFB(); return;
}

/**
 * Decompiled function f__B4DA_098A_001A_1070()
 *
 * @name f__B4DA_098A_001A_1070
 * @implements B4DA:098A:001A:1070 ()
 *
 * Called From: B4DA:0981:002C:329F
 */
void f__B4DA_098A_001A_1070()
{
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x7FE0), emu_si);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x7FE2), 0x3);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76AE));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76AC));
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x7FEC), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x7FEE), emu_dx.x);
	f__B4DA_09DA_0016_EAFB(); return;
}

/**
 * Decompiled function f__B4DA_09A4_0012_82E9()
 *
 * @name f__B4DA_09A4_0012_82E9
 * @implements B4DA:09A4:0012:82E9 ()
 *
 * Called From: B4DA:097C:002C:329F
 * Called From: B4DA:0988:002C:329F
 */
void f__B4DA_09A4_0012_82E9()
{
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x7FE2), emu_si);
	emu_cmpws(&emu_si, 0x4);
	if (!emu_flags.zf) { f__B4DA_09B6_000D_780A(); return; }
	emu_movw(&emu_ax.x, 0x3C);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x6);
	f__B4DA_09BD_0006_0716(); return;
}

/**
 * Decompiled function f__B4DA_09B6_000D_780A()
 *
 * @name f__B4DA_09B6_000D_780A
 * @implements B4DA:09B6:000D:780A ()
 *
 * Called From: B4DA:09AB:0012:82E9
 */
void f__B4DA_09B6_000D_780A()
{
	emu_movw(&emu_ax.x, 0xB4);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0xF);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x09C3); emu_cs = 0x2537; f__2537_000C_001C_1A9E();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_09C3_002D_A89B();
}

/**
 * Decompiled function f__B4DA_09BD_0006_0716()
 *
 * @name f__B4DA_09BD_0006_0716
 * @implements B4DA:09BD:0006:0716 ()
 *
 * Called From: B4DA:09B4:0012:82E9
 */
void f__B4DA_09BD_0006_0716()
{
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x09C3); emu_cs = 0x2537; f__2537_000C_001C_1A9E();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_09C3_002D_A89B();
}

/**
 * Decompiled function f__B4DA_09C3_002D_A89B()
 *
 * @name f__B4DA_09C3_002D_A89B
 * @implements B4DA:09C3:002D:A89B ()
 *
 * Called From: B4DA:09C3:000D:780A
 * Called From: B4DA:09C3:0006:0716
 */
void f__B4DA_09C3_002D_A89B()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76AE));
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00,  0x76AC));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_adcws(&emu_dx.x, 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x7FEC), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x7FEE), emu_bx.x);
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x3C4A), 0x0);
	if (emu_flags.zf) { f__B4DA_09EE_0002_03AA(); return; }
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00, -0x7FE2), 0x0);
	if (!emu_flags.zf) { f__B4DA_09EE_0002_03AA(); return; }
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x7FE2), 0x3);
	f__B4DA_09F3_0009_0ED9(); return;
}

/**
 * Decompiled function f__B4DA_09DA_0016_EAFB()
 *
 * @name f__B4DA_09DA_0016_EAFB
 * @implements B4DA:09DA:0016:EAFB ()
 *
 * Called From: B4DA:0976:0019:074E
 * Called From: B4DA:09A2:001A:1070
 * Called From: B4DA:09A2:002C:329F
 */
void f__B4DA_09DA_0016_EAFB()
{
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x3C4A), 0x0);
	if (emu_flags.zf) { f__B4DA_09EE_0002_03AA(); return; }
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00, -0x7FE2), 0x0);
	if (!emu_flags.zf) { f__B4DA_09EE_0002_03AA(); return; }
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x7FE2), 0x3);
	f__B4DA_09F3_0009_0ED9(); return;
}

/**
 * Decompiled function f__B4DA_09EE_0002_03AA()
 *
 * @name f__B4DA_09EE_0002_03AA
 * @implements B4DA:09EE:0002:03AA ()
 *
 * Called From: B4DA:088B:001A:0E86
 * Called From: B4DA:09DF:002D:A89B
 * Called From: B4DA:09DF:0016:EAFB
 * Called From: B4DA:09E6:0016:EAFB
 * Called From: B4DA:09E6:002D:A89B
 */
void f__B4DA_09EE_0002_03AA()
{
	f__B4DA_09F3_0009_0ED9(); return;
}

/**
 * Decompiled function f__B4DA_09F0_0003_0564()
 *
 * @name f__B4DA_09F0_0003_0564
 * @implements B4DA:09F0:0003:0564 ()
 *
 * Called From: B4DA:0831:0010:A053
 * Called From: B4DA:083C:000B:E47D
 */
void f__B4DA_09F0_0003_0564()
{
	f__B4DA_0A7E_0006_137A(); return;
}

/**
 * Decompiled function f__B4DA_09F3_0009_0ED9()
 *
 * @name f__B4DA_09F3_0009_0ED9
 * @implements B4DA:09F3:0009:0ED9 ()
 *
 * Called From: B4DA:0735:0015:3F49
 * Called From: B4DA:0735:001B:A14F
 * Called From: B4DA:0735:0003:05A0
 * Called From: B4DA:0821:0026:F41E
 * Called From: B4DA:0821:0003:0476
 * Called From: B4DA:0821:0028:BC1E
 * Called From: B4DA:09EE:0002:03AA
 * Called From: B4DA:09EE:002D:A89B
 * Called From: B4DA:09EE:0016:EAFB
 */
void f__B4DA_09F3_0009_0ED9()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x0);
	if (!emu_flags.zf) { f__B4DA_09FC_0027_7930(); return; }
	f__B4DA_0A7C_0002_03AC(); return;
}

/**
 * Decompiled function f__B4DA_09FC_0027_7930()
 *
 * @name f__B4DA_09FC_0027_7930
 * @implements B4DA:09FC:0027:7930 ()
 *
 * Called From: B4DA:09F7:0009:0ED9
 */
void f__B4DA_09FC_0027_7930()
{
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00, -0x7FE2));
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, emu_bx.x,  0x7FC8));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, emu_bx.x,  0x7FC6));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_dx.x);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ds, 0x00, -0x7FF9));
	emu_movb(&emu_ax.h, 0x0);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x0A23); emu_cs = 0x260F; f__260F_0054_0016_11EB();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_0A23_0017_00C1();
}

/**
 * Decompiled function f__B4DA_0A23_0017_00C1()
 *
 * @name f__B4DA_0A23_0017_00C1
 * @implements B4DA:0A23:0017:00C1 ()
 *
 * Called From: B4DA:0A23:0027:7930
 */
void f__B4DA_0A23_0017_00C1()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_pop(&emu_dx.x);
	emu_addw(&emu_dx.x, emu_ax.x);
	emu_push(emu_dx.x);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ds, 0x00, -0x7FFA));
	emu_movb(&emu_ax.h, 0x0);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x0A3A); emu_cs = 0x260F; f__260F_003A_0014_CDCF();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_0A3A_0017_948D();
}

/**
 * Decompiled function f__B4DA_0A3A_0017_948D()
 *
 * @name f__B4DA_0A3A_0017_948D
 * @implements B4DA:0A3A:0017:948D ()
 *
 * Called From: B4DA:0A3A:0017:00C1
 */
void f__B4DA_0A3A_0017_948D()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_pop(&emu_dx.x);
	emu_addw(&emu_dx.x, emu_ax.x);
	emu_push(emu_dx.x);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ds, 0x00, -0x7FF9));
	emu_movb(&emu_ax.h, 0x0);
	emu_push(emu_ax.x);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ds, 0x00, -0x7FFA));
	emu_movb(&emu_ax.h, 0x0);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0A51); emu_cs = 0x2B6C; f__2B6C_0197_00CE_7027();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_0A51_0023_D98A();
}

/**
 * Decompiled function f__B4DA_0A51_0023_D98A()
 *
 * @name f__B4DA_0A51_0023_D98A
 * @implements B4DA:0A51:0023:D98A ()
 *
 * Called From: B4DA:0A51:0017:948D
 */
void f__B4DA_0A51_0023_D98A()
{
	emu_addws(&emu_sp, 0x8);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ds, 0x00, -0x7FF9));
	emu_movb(&emu_ax.h, 0x0);
	emu_push(emu_ax.x);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ds, 0x00, -0x7FFA));
	emu_movb(&emu_ax.h, 0x0);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0A74); emu_cs = 0x2903; f__2903_0158_001A_A9AA();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_0A74_0008_F916();
}

/**
 * Decompiled function f__B4DA_0A74_0008_F916()
 *
 * @name f__B4DA_0A74_0008_F916
 * @implements B4DA:0A74:0008:F916 ()
 *
 * Called From: B4DA:0A74:0023:D98A
 */
void f__B4DA_0A74_0008_F916()
{
	emu_addws(&emu_sp, 0xE);
	emu_push(emu_cs); emu_push(0x0A7C); emu_cs = 0x2B6C; f__2B6C_0292_0028_CAA5();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_0A7C_0002_03AC();
}

/**
 * Decompiled function f__B4DA_0A7C_0002_03AC()
 *
 * @name f__B4DA_0A7C_0002_03AC
 * @implements B4DA:0A7C:0002:03AC ()
 *
 * Called From: B4DA:09F9:0009:0ED9
 * Called From: B4DA:0A7C:0008:F916
 */
void f__B4DA_0A7C_0002_03AC()
{
	f__B4DA_0A7E_0006_137A(); return;
}

/**
 * Decompiled function f__B4DA_0A7E_0006_137A()
 *
 * @name f__B4DA_0A7E_0006_137A
 * @implements B4DA:0A7E:0006:137A ()
 *
 * Called From: B4DA:09F0:0003:0564
 * Called From: B4DA:0A7C:0002:03AC
 */
void f__B4DA_0A7E_0006_137A()
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
 * Decompiled function f__B4DA_0A8E_0025_F0AA()
 *
 * @name f__B4DA_0A8E_0025_F0AA
 * @implements B4DA:0A8E:0025:F0AA ()
 *
 * Called From: 34DA:002F:0005:164A
 * Called From: 34DA:002F:0005:1490
 * Called From: 34DA:002F:0005:17C8
 * Called From: B4DA:02CB:000B:212C
 * Called From: B4DA:02CB:0009:8D2F
 * Called From: B4DA:0FC5:000B:994B
 * Called From: B4DA:1031:0009:053C
 * Called From: B4DA:132A:000A:61CB
 */
void f__B4DA_0A8E_0025_F0AA()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ds, 0x00, -0x7FEF));
	emu_movb(&emu_ax.h, 0x0);
	emu_push(emu_ax.x);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ds, 0x00, -0x7FF0));
	emu_movb(&emu_ax.h, 0x0);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x7FFC));
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x7FFE));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x0AB3); emu_cs = 0x2903; f__2903_0158_001A_A9AA();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_0AB3_0005_1CB2();
}

/**
 * Decompiled function f__B4DA_0AB3_0005_1CB2()
 *
 * @name f__B4DA_0AB3_0005_1CB2
 * @implements B4DA:0AB3:0005:1CB2 ()
 *
 * Called From: B4DA:0AB3:0025:F0AA
 */
void f__B4DA_0AB3_0005_1CB2()
{
	emu_addws(&emu_sp, 0xE);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B4DA_0AB8_002A_328A()
 *
 * @name f__B4DA_0AB8_002A_328A
 * @implements B4DA:0AB8:002A:328A ()
 *
 * Called From: 34DA:0034:0005:152A
 * Called From: 34DA:0034:0005:1474
 * Called From: 34DA:0034:0005:17F0
 * Called From: B4DA:11F3:0023:77ED
 */
void f__B4DA_0AB8_002A_328A()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x28);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x1C), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x1E), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x20), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x22), 0x0);
	emu_movw(&emu_ax.x, 0x8);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0AE2); emu_cs = 0x07AE; f__07AE_0000_00DF_386F();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_0AE2_000D_2169();
}

/**
 * Decompiled function f__B4DA_0AE2_000D_2169()
 *
 * @name f__B4DA_0AE2_000D_2169
 * @implements B4DA:0AE2:000D:2169 ()
 *
 * Called From: B4DA:0AE2:002A:328A
 */
void f__B4DA_0AE2_000D_2169()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_ax.x);
	emu_movw(&emu_ax.x, 0x4);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0AEF); emu_cs = 0x2598; f__2598_0000_0017_D681();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_0AEF_0030_6E00();
}

/**
 * Decompiled function f__B4DA_0AEF_0030_6E00()
 *
 * @name f__B4DA_0AEF_0030_6E00
 * @implements B4DA:0AEF:0030:6E00 ()
 *
 * Called From: B4DA:0AEF:000D:2169
 */
void f__B4DA_0AEF_0030_6E00()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x0);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_flags.zf) { emu_ip = 0x0B36; emu_last_cs = 0xB4DA; emu_last_ip = 0x0B03; emu_last_length = 0x0030; emu_last_crc = 0x6E00; emu_call(); return; } // Jump does not resolve
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6CE1));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6CDF));
	emu_movw(&emu_ax.x, 0x3);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0B1F); emu_cs = 0x252E; f__252E_0001_0018_48C0();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_0B1F_000E_E41D();
}

/**
 * Decompiled function f__B4DA_0B1F_000E_E41D()
 *
 * @name f__B4DA_0B1F_000E_E41D
 * @implements B4DA:0B1F:000E:E41D ()
 *
 * Called From: B4DA:0B1F:0030:6E00
 */
void f__B4DA_0B1F_000E_E41D()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x0B2D); emu_cs = 0x352A; ovl__352A(0);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_0B2D_0016_AAC5();
}

/**
 * Decompiled function f__B4DA_0B2D_0016_AAC5()
 *
 * @name f__B4DA_0B2D_0016_AAC5
 * @implements B4DA:0B2D:0016:AAC5 ()
 *
 * Called From: B4DA:0B2D:000E:E41D
 */
void f__B4DA_0B2D_0016_AAC5()
{
	emu_addws(&emu_sp, 0x12);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (!emu_flags.zf) { f__B4DA_0B48_001D_BCF1(); return; }
	emu_push(emu_cs); emu_push(0x0B43); emu_cs = 0x07AE; emu_ip = 0x0C46; emu_last_cs = 0xB4DA; emu_last_ip = 0x0B3E; emu_last_length = 0x0016; emu_last_crc = 0xAAC5; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__B4DA_0B48_001D_BCF1()
 *
 * @name f__B4DA_0B48_001D_BCF1
 * @implements B4DA:0B48:001D:BCF1 ()
 *
 * Called From: B4DA:0B3C:0016:AAC5
 */
void f__B4DA_0B48_001D_BCF1()
{
	emu_xorw(&emu_si, emu_si);
	emu_movw(&emu_ax.x, 0x31);
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
	emu_push(emu_cs); emu_push(0x0B65); emu_cs = 0x10E4; f__10E4_1EF1_0040_E33D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_0B65_001C_6313();
}

/**
 * Decompiled function f__B4DA_0B65_001C_6313()
 *
 * @name f__B4DA_0B65_001C_6313
 * @implements B4DA:0B65:001C:6313 ()
 *
 * Called From: B4DA:0B65:001D:BCF1
 */
void f__B4DA_0B65_001C_6313()
{
	emu_addws(&emu_sp, 0xE);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00, -0x66D1));
	emu_movb(&emu_cx.l, 0x3);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_subw(&emu_ax.x, 0xA);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_cs); emu_push(0x0B81); emu_cs = 0x10E4; f__10E4_01B8_0014_EE14();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_0B81_0021_F119();
}

/**
 * Decompiled function f__B4DA_0B81_0021_F119()
 *
 * @name f__B4DA_0B81_0021_F119
 * @implements B4DA:0B81:0021:F119 ()
 *
 * Called From: B4DA:0B81:001C:6313
 */
void f__B4DA_0B81_0021_F119()
{
	emu_addws(&emu_sp, 0x8);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x24), emu_ax.x);
	emu_movw(&emu_ax.x, 0x32);
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
	emu_push(emu_cs); emu_push(0x0BA2); emu_cs = 0x10E4; f__10E4_1EF1_0040_E33D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_0BA2_0012_F29D();
}

/**
 * Decompiled function f__B4DA_0BA2_0012_F29D()
 *
 * @name f__B4DA_0BA2_0012_F29D
 * @implements B4DA:0BA2:0012:F29D ()
 *
 * Called From: B4DA:0BA2:0021:F119
 */
void f__B4DA_0BA2_0012_F29D()
{
	emu_addws(&emu_sp, 0xE);
	emu_movw(&emu_ax.x, 0x130);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x10));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_push(emu_cs);
	emu_push(0x0BB4); f__B4DA_1893_001C_E5FE();
	f__B4DA_0BB4_003F_67FA();
}

/**
 * Decompiled function f__B4DA_0BB4_003F_67FA()
 *
 * @name f__B4DA_0BB4_003F_67FA
 * @implements B4DA:0BB4:003F:67FA ()
 *
 * Called From: B4DA:0BB4:0012:F29D
 */
void f__B4DA_0BB4_003F_67FA()
{
	emu_addws(&emu_sp, 0x6);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x28), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x18), 0x2);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x26), 0x0);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), emu_ax.x);
	emu_cwd();
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x76B6), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x76B4), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76AE));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76AC));
	emu_addws(&emu_dx.x, 0x1E);
	emu_adcw(&emu_ax.x, 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x14), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x16), emu_dx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00, -0x66D3));
	emu_movb(&emu_cx.l, 0x3);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x12), emu_ax.x);
	emu_push(emu_cs); emu_push(0x0BF3); emu_cs = 0x29E8; f__29E8_073F_000E_A6E4();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_0BF3_0010_9AB6();
}

/**
 * Decompiled function f__B4DA_0BF3_0010_9AB6()
 *
 * @name f__B4DA_0BF3_0010_9AB6
 * @implements B4DA:0BF3:0010:9AB6 ()
 *
 * Called From: B4DA:0BF3:003F:67FA
 */
void f__B4DA_0BF3_0010_9AB6()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x1A), 0x0);
	f__B4DA_1004_0009_0FF7(); return;
}

/**
 * Decompiled function f__B4DA_0C03_0008_566A()
 *
 * @name f__B4DA_0C03_0008_566A
 * @implements B4DA:0C03:0008:566A ()
 *
 * Called From: B4DA:100A:0009:0FF7
 * Called From: B4DA:100A:000E:AFC1
 */
void f__B4DA_0C03_0008_566A()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0C0B); emu_cs = 0x2598; f__2598_0000_0017_D681();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_0C0B_000C_4E03();
}

/**
 * Decompiled function f__B4DA_0C0B_000C_4E03()
 *
 * @name f__B4DA_0C0B_000C_4E03
 * @implements B4DA:0C0B:000C:4E03 ()
 *
 * Called From: B4DA:0C0B:0008:566A
 */
void f__B4DA_0C0B_000C_4E03()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x16));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x14));
	emu_push(emu_cs); emu_push(0x0C17); emu_cs = 0x34A2; ovl__34A2(2);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_0C17_0009_877C();
}

/**
 * Decompiled function f__B4DA_0C17_0009_877C()
 *
 * @name f__B4DA_0C17_0009_877C
 * @implements B4DA:0C17:0009:877C ()
 *
 * Called From: B4DA:0C17:000C:4E03
 */
void f__B4DA_0C17_0009_877C()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_di, emu_ax.x);
	emu_push(emu_cs); emu_push(0x0C20); emu_cs = 0x0642; f__0642_0559_0027_9047();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_0C20_000E_4CB9();
}

/**
 * Decompiled function f__B4DA_0C20_000E_4CB9()
 *
 * @name f__B4DA_0C20_000E_4CB9
 * @implements B4DA:0C20:000E:4CB9 ()
 *
 * Called From: 261F:01B9:001B:DA28
 * Called From: B4DA:0C20:0009:877C
 */
void f__B4DA_0C20_000E_4CB9()
{
	emu_orw(&emu_di, emu_di);
	if (emu_flags.zf) { f__B4DA_0C50_000A_6403(); return; }
	emu_testw(&emu_di, 0x800);
	if (emu_flags.zf) { f__B4DA_0C2E_0019_4788(); return; }
	emu_xorw(&emu_di, emu_di);
	f__B4DA_0C50_000A_6403(); return;
}

/**
 * Decompiled function f__B4DA_0C2E_0019_4788()
 *
 * @name f__B4DA_0C2E_0019_4788
 * @implements B4DA:0C2E:0019:4788 ()
 *
 * Called From: B4DA:0C28:000E:4CB9
 */
void f__B4DA_0C2E_0019_4788()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x14));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x16));
	if (emu_flags.zf) { f__B4DA_0C47_0013_5024(); return; }
	emu_testw(&emu_di, 0x8000);
	if (emu_flags.zf) { f__B4DA_0C45_0002_03BE(); return; }
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x1A), 0x0);
	if (!emu_flags.zf) { emu_ip = 0x0C45; emu_last_cs = 0xB4DA; emu_last_ip = 0x0C40; emu_last_length = 0x0019; emu_last_crc = 0x4788; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x1A), emu_di);
	f__B4DA_0C50_000A_6403(); return;
}

/**
 * Decompiled function f__B4DA_0C45_0002_03BE()
 *
 * @name f__B4DA_0C45_0002_03BE
 * @implements B4DA:0C45:0002:03BE ()
 *
 * Called From: B4DA:0C3A:0019:4788
 */
void f__B4DA_0C45_0002_03BE()
{
	f__B4DA_0C50_000A_6403(); return;
}

/**
 * Decompiled function f__B4DA_0C47_0013_5024()
 *
 * @name f__B4DA_0C47_0013_5024
 * @implements B4DA:0C47:0013:5024 ()
 *
 * Called From: B4DA:0C34:0019:4788
 */
void f__B4DA_0C47_0013_5024()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x0);
	if (emu_flags.zf) { f__B4DA_0C50_000A_6403(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x1A), emu_di);
	emu_movw(&emu_bx.x, emu_si);
	emu_cmpws(&emu_bx.x, 0x5);
	if ((emu_flags.cf || emu_flags.zf)) { f__B4DA_0C5A_0007_5D5C(); return; }
	emu_ip = 0x0EF9; emu_last_cs = 0xB4DA; emu_last_ip = 0x0C57; emu_last_length = 0x0013; emu_last_crc = 0x5024; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B4DA_0C50_000A_6403()
 *
 * @name f__B4DA_0C50_000A_6403
 * @implements B4DA:0C50:000A:6403 ()
 *
 * Called From: B4DA:0C22:000E:4CB9
 * Called From: B4DA:0C2C:000E:4CB9
 * Called From: B4DA:0C45:0002:03BE
 * Called From: B4DA:0C45:0019:4788
 * Called From: B4DA:0C4B:0013:5024
 */
void f__B4DA_0C50_000A_6403()
{
	emu_movw(&emu_bx.x, emu_si);
	emu_cmpws(&emu_bx.x, 0x5);
	if ((emu_flags.cf || emu_flags.zf)) { f__B4DA_0C5A_0007_5D5C(); return; }
	emu_ip = 0x0EF9; emu_last_cs = 0xB4DA; emu_last_ip = 0x0C57; emu_last_length = 0x000A; emu_last_crc = 0x6403; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B4DA_0C5A_0007_5D5C()
 *
 * @name f__B4DA_0C5A_0007_5D5C
 * @implements B4DA:0C5A:0007:5D5C ()
 *
 * Called From: B4DA:0C55:000A:6403
 * Called From: B4DA:0C55:0013:5024
 */
void f__B4DA_0C5A_0007_5D5C()
{
	emu_shlw(&emu_bx.x, 0x1);

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_cs, emu_bx.x,  0x108D);
	switch (emu_ip) {
		case 0x0C61: f__B4DA_0C61_0007_31D0(); return;
		case 0x0C75: f__B4DA_0C75_0010_A6D6(); return;
		case 0x0CE7: f__B4DA_0CE7_0013_41A5(); return;
		case 0x0D2C: f__B4DA_0D2C_0040_D39E(); return;
		case 0x0EDA: f__B4DA_0EDA_0013_BC61(); return;
		case 0x0EED: f__B4DA_0EED_000C_C4B5(); return;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0xB4DA; emu_last_ip = 0x0C5C; emu_last_length = 0x0007; emu_last_crc = 0x5D5C;
			emu_call();
			return;
	}
}

/**
 * Decompiled function f__B4DA_0C61_0007_31D0()
 *
 * @name f__B4DA_0C61_0007_31D0
 * @implements B4DA:0C61:0007:31D0 ()
 *
 * Called From: B4DA:0C5C:0007:5D5C
 */
void f__B4DA_0C61_0007_31D0()
{
	emu_orw(&emu_di, emu_di);
	if (!emu_flags.zf) { f__B4DA_0C68_0008_8152(); return; }
	f__B4DA_0EFB_0007_7950(); return;
}

/**
 * Decompiled function f__B4DA_0C68_0008_8152()
 *
 * @name f__B4DA_0C68_0008_8152
 * @implements B4DA:0C68:0008:8152 ()
 *
 * Called From: B4DA:0C63:0007:31D0
 */
void f__B4DA_0C68_0008_8152()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x1A), 0x0);
	if (emu_flags.zf) { f__B4DA_0C72_0013_A322(); return; }
	emu_ip = 0x0C7F; emu_last_cs = 0xB4DA; emu_last_ip = 0x0C6E; emu_last_length = 0x0008; emu_last_crc = 0x8152; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B4DA_0C72_0013_A322()
 *
 * @name f__B4DA_0C72_0013_A322
 * @implements B4DA:0C72:0013:A322 ()
 *
 * Called From: B4DA:0C6C:0008:8152
 */
void f__B4DA_0C72_0013_A322()
{
	emu_movw(&emu_si, 0x1);
	emu_orw(&emu_di, emu_di);
	if (emu_flags.zf) { emu_ip = 0x0C92; emu_last_cs = 0xB4DA; emu_last_ip = 0x0C77; emu_last_length = 0x0013; emu_last_crc = 0xA322; emu_call(); return; } // Jump does not resolve
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x1A), 0x0);
	if (emu_flags.zf) { f__B4DA_0C85_000D_FCB1(); return; }
	emu_movw(&emu_si, 0x5);
	emu_ip = 0x0EFB; emu_last_cs = 0xB4DA; emu_last_ip = 0x0C82; emu_last_length = 0x0013; emu_last_crc = 0xA322; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B4DA_0C75_0010_A6D6()
 *
 * @name f__B4DA_0C75_0010_A6D6
 * @implements B4DA:0C75:0010:A6D6 ()
 *
 * Called From: B4DA:0C5C:0007:5D5C
 */
void f__B4DA_0C75_0010_A6D6()
{
	emu_orw(&emu_di, emu_di);
	if (emu_flags.zf) { f__B4DA_0C92_0049_72EC(); return; }
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x1A), 0x0);
	if (emu_flags.zf) { f__B4DA_0C85_000D_FCB1(); return; }
	emu_movw(&emu_si, 0x5);
	emu_ip = 0x0EFB; emu_last_cs = 0xB4DA; emu_last_ip = 0x0C82; emu_last_length = 0x0010; emu_last_crc = 0xA6D6; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B4DA_0C85_000D_FCB1()
 *
 * @name f__B4DA_0C85_000D_FCB1
 * @implements B4DA:0C85:000D:FCB1 ()
 *
 * Called From: B4DA:0C7D:0013:A322
 * Called From: B4DA:0C7D:0010:A6D6
 */
void f__B4DA_0C85_000D_FCB1()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x24));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x26), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x1);
	f__B4DA_0CC0_001B_BFB9(); return;
}

/**
 * Decompiled function f__B4DA_0C92_0049_72EC()
 *
 * @name f__B4DA_0C92_0049_72EC
 * @implements B4DA:0C92:0049:72EC ()
 *
 * Called From: B4DA:0C77:0010:A6D6
 */
void f__B4DA_0C92_0049_72EC()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76AE));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76AC));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x14));
	if ((emu_flags.sf != emu_flags.of)) { emu_ip = 0x0CC0; emu_last_cs = 0xB4DA; emu_last_ip = 0x0C9C; emu_last_length = 0x0049; emu_last_crc = 0x72EC; emu_call(); return; } // Jump does not resolve
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { emu_ip = 0x0CA5; emu_last_cs = 0xB4DA; emu_last_ip = 0x0C9E; emu_last_length = 0x0049; emu_last_crc = 0x72EC; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x16));
	if ((emu_flags.cf || emu_flags.zf)) { f__B4DA_0CC0_001B_BFB9(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76AE));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76AC));
	emu_addws(&emu_dx.x, 0xF);
	emu_adcw(&emu_ax.x, 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x14), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x16), emu_dx.x);
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x26));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x1);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x26));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x24));
	if (!(emu_flags.sf != emu_flags.of)) { f__B4DA_0CCE_000D_EF1F(); return; }
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x26), 0xC);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { emu_ip = 0x0CE4; emu_last_cs = 0xB4DA; emu_last_ip = 0x0CCC; emu_last_length = 0x0049; emu_last_crc = 0x72EC; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x10));
	if (emu_flags.zf) { emu_ip = 0x0CDB; emu_last_cs = 0xB4DA; emu_last_ip = 0x0CD4; emu_last_length = 0x0049; emu_last_crc = 0x72EC; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_si, 0x2);
	emu_ip = 0x0CDE; emu_last_cs = 0xB4DA; emu_last_ip = 0x0CD9; emu_last_length = 0x0049; emu_last_crc = 0x72EC; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B4DA_0CC0_001B_BFB9()
 *
 * @name f__B4DA_0CC0_001B_BFB9
 * @implements B4DA:0CC0:001B:BFB9 ()
 *
 * Called From: B4DA:0C90:000D:FCB1
 * Called From: B4DA:0CA3:0049:72EC
 */
void f__B4DA_0CC0_001B_BFB9()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x26));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x24));
	if (!(emu_flags.sf != emu_flags.of)) { f__B4DA_0CCE_000D_EF1F(); return; }
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x26), 0xC);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { emu_ip = 0x0CE4; emu_last_cs = 0xB4DA; emu_last_ip = 0x0CCC; emu_last_length = 0x001B; emu_last_crc = 0xBFB9; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x10));
	if (emu_flags.zf) { emu_ip = 0x0CDB; emu_last_cs = 0xB4DA; emu_last_ip = 0x0CD4; emu_last_length = 0x001B; emu_last_crc = 0xBFB9; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_si, 0x2);
	emu_ip = 0x0CDE; emu_last_cs = 0xB4DA; emu_last_ip = 0x0CD9; emu_last_length = 0x001B; emu_last_crc = 0xBFB9; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B4DA_0CCE_000D_EF1F()
 *
 * @name f__B4DA_0CCE_000D_EF1F
 * @implements B4DA:0CCE:000D:EF1F ()
 *
 * Called From: B4DA:0CC6:0049:72EC
 * Called From: B4DA:0CC6:001B:BFB9
 */
void f__B4DA_0CCE_000D_EF1F()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x10));
	if (emu_flags.zf) { f__B4DA_0CDB_000C_DE36(); return; }
	emu_movw(&emu_si, 0x2);
	f__B4DA_0CDE_0009_1E3D(); return;
}

/**
 * Decompiled function f__B4DA_0CDB_000C_DE36()
 *
 * @name f__B4DA_0CDB_000C_DE36
 * @implements B4DA:0CDB:000C:DE36 ()
 *
 * Called From: B4DA:0CD4:000D:EF1F
 */
void f__B4DA_0CDB_000C_DE36()
{
	emu_movw(&emu_si, 0x4);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x24));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x26), emu_ax.x);
	f__B4DA_0EFB_0007_7950(); return;
}

/**
 * Decompiled function f__B4DA_0CDE_0009_1E3D()
 *
 * @name f__B4DA_0CDE_0009_1E3D
 * @implements B4DA:0CDE:0009:1E3D ()
 *
 * Called From: B4DA:0CD9:000D:EF1F
 */
void f__B4DA_0CDE_0009_1E3D()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x24));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x26), emu_ax.x);
	f__B4DA_0EFB_0007_7950(); return;
}

/**
 * Decompiled function f__B4DA_0CE7_0013_41A5()
 *
 * @name f__B4DA_0CE7_0013_41A5
 * @implements B4DA:0CE7:0013:41A5 ()
 *
 * Called From: B4DA:0C5C:0007:5D5C
 */
void f__B4DA_0CE7_0013_41A5()
{
	emu_movw(&emu_ax.x, 0x28);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x140);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0CFA); emu_cs = 0x2B6C; f__2B6C_0197_00CE_7027();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_0CFA_0024_F2D9();
}

/**
 * Decompiled function f__B4DA_0CFA_0024_F2D9()
 *
 * @name f__B4DA_0CFA_0024_F2D9
 * @implements B4DA:0CFA:0024:F2D9 ()
 *
 * Called From: B4DA:0CFA:0013:41A5
 */
void f__B4DA_0CFA_0024_F2D9()
{
	emu_addws(&emu_sp, 0x8);
	emu_movw(&emu_ax.x, 0x4);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x28);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x28);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0xA0);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0D1E); emu_cs = 0x24D0; f__24D0_000D_0039_9224();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_0D1E_0008_FE96();
}

/**
 * Decompiled function f__B4DA_0D1E_0008_FE96()
 *
 * @name f__B4DA_0D1E_0008_FE96
 * @implements B4DA:0D1E:0008:FE96 ()
 *
 * Called From: B4DA:0D1E:0024:F2D9
 */
void f__B4DA_0D1E_0008_FE96()
{
	emu_addws(&emu_sp, 0x10);
	emu_push(emu_cs); emu_push(0x0D26); emu_cs = 0x2B6C; f__2B6C_0292_0028_CAA5();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_0D26_0046_F982();
}

/**
 * Decompiled function f__B4DA_0D26_0046_F982()
 *
 * @name f__B4DA_0D26_0046_F982
 * @implements B4DA:0D26:0046:F982 ()
 *
 * Called From: B4DA:0D26:0008:FE96
 */
void f__B4DA_0D26_0046_F982()
{
	emu_movw(&emu_si, 0x3);
	emu_movw(&emu_di, 0x1);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x18), 0x2);
	if (!emu_flags.zf) { emu_ip = 0x0D49; emu_last_cs = 0xB4DA; emu_last_ip = 0x0D30; emu_last_length = 0x0046; emu_last_crc = 0xF982; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x1C));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x1E));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76AE));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { emu_ip = 0x0D49; emu_last_cs = 0xB4DA; emu_last_ip = 0x0D3C; emu_last_length = 0x0046; emu_last_crc = 0xF982; emu_call(); return; } // Jump does not resolve
	if ((emu_flags.sf != emu_flags.of)) { f__B4DA_0D46_0026_1C6D(); return; }
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76AC));
	if (!emu_flags.cf) { emu_ip = 0x0D49; emu_last_cs = 0xB4DA; emu_last_ip = 0x0D44; emu_last_length = 0x0046; emu_last_crc = 0xF982; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_di, 0x1);
	emu_orw(&emu_di, emu_di);
	if (emu_flags.zf) { emu_ip = 0x0D53; emu_last_cs = 0xB4DA; emu_last_ip = 0x0D4B; emu_last_length = 0x0046; emu_last_crc = 0xF982; emu_call(); return; } // Jump does not resolve
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x0);
	if (!emu_flags.zf) { emu_ip = 0x0D59; emu_last_cs = 0xB4DA; emu_last_ip = 0x0D51; emu_last_length = 0x0046; emu_last_crc = 0xF982; emu_call(); return; } // Jump does not resolve
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x1A), 0x0);
	if (emu_flags.zf) { f__B4DA_0DA3_0007_304C(); return; }
	emu_movw(&emu_ax.x, 0x28);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x140);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0D6C); emu_cs = 0x2B6C; emu_ip = 0x0F03; emu_last_cs = 0xB4DA; emu_last_ip = 0x0D67; emu_last_length = 0x0046; emu_last_crc = 0xF982; emu_call(); // Jump does not resolve
	f__B4DA_0D6C_0024_49B9();
}

/**
 * Decompiled function f__B4DA_0D2C_0040_D39E()
 *
 * @name f__B4DA_0D2C_0040_D39E
 * @implements B4DA:0D2C:0040:D39E ()
 *
 * Called From: B4DA:0C5C:0007:5D5C
 */
void f__B4DA_0D2C_0040_D39E()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x18), 0x2);
	if (!emu_flags.zf) { f__B4DA_0D49_0023_338D(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x1C));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x1E));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76AE));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__B4DA_0D49_0023_338D(); return; }
	if ((emu_flags.sf != emu_flags.of)) { emu_ip = 0x0D46; emu_last_cs = 0xB4DA; emu_last_ip = 0x0D3E; emu_last_length = 0x0040; emu_last_crc = 0xD39E; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76AC));
	if (!emu_flags.cf) { f__B4DA_0D49_0023_338D(); return; }
	emu_movw(&emu_di, 0x1);
	emu_orw(&emu_di, emu_di);
	if (emu_flags.zf) { emu_ip = 0x0D53; emu_last_cs = 0xB4DA; emu_last_ip = 0x0D4B; emu_last_length = 0x0040; emu_last_crc = 0xD39E; emu_call(); return; } // Jump does not resolve
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x0);
	if (!emu_flags.zf) { f__B4DA_0D59_0013_41A5(); return; }
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x1A), 0x0);
	if (emu_flags.zf) { f__B4DA_0DA3_0007_304C(); return; }
	emu_movw(&emu_ax.x, 0x28);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x140);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0D6C); emu_cs = 0x2B6C; emu_ip = 0x0F03; emu_last_cs = 0xB4DA; emu_last_ip = 0x0D67; emu_last_length = 0x0040; emu_last_crc = 0xD39E; emu_call(); // Jump does not resolve
	f__B4DA_0D6C_0024_49B9();
}

/**
 * Decompiled function f__B4DA_0D46_0026_1C6D()
 *
 * @name f__B4DA_0D46_0026_1C6D
 * @implements B4DA:0D46:0026:1C6D ()
 *
 * Called From: B4DA:0D3E:0046:F982
 */
void f__B4DA_0D46_0026_1C6D()
{
	emu_movw(&emu_di, 0x1);
	emu_orw(&emu_di, emu_di);
	if (emu_flags.zf) { emu_ip = 0x0D53; emu_last_cs = 0xB4DA; emu_last_ip = 0x0D4B; emu_last_length = 0x0026; emu_last_crc = 0x1C6D; emu_call(); return; } // Jump does not resolve
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x0);
	if (!emu_flags.zf) { emu_ip = 0x0D59; emu_last_cs = 0xB4DA; emu_last_ip = 0x0D51; emu_last_length = 0x0026; emu_last_crc = 0x1C6D; emu_call(); return; } // Jump does not resolve
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x1A), 0x0);
	if (emu_flags.zf) { f__B4DA_0DA3_0007_304C(); return; }
	emu_movw(&emu_ax.x, 0x28);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x140);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0D6C); emu_cs = 0x2B6C; emu_ip = 0x0F03; emu_last_cs = 0xB4DA; emu_last_ip = 0x0D67; emu_last_length = 0x0026; emu_last_crc = 0x1C6D; emu_call(); // Jump does not resolve
	f__B4DA_0D6C_0024_49B9();
}

/**
 * Decompiled function f__B4DA_0D49_0023_338D()
 *
 * @name f__B4DA_0D49_0023_338D
 * @implements B4DA:0D49:0023:338D ()
 *
 * Called From: B4DA:0D30:0040:D39E
 * Called From: B4DA:0D3C:0040:D39E
 * Called From: B4DA:0D44:0040:D39E
 */
void f__B4DA_0D49_0023_338D()
{
	emu_orw(&emu_di, emu_di);
	if (emu_flags.zf) { f__B4DA_0D53_0019_4084(); return; }
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x0);
	if (!emu_flags.zf) { f__B4DA_0D59_0013_41A5(); return; }
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x1A), 0x0);
	if (emu_flags.zf) { f__B4DA_0DA3_0007_304C(); return; }
	emu_movw(&emu_ax.x, 0x28);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x140);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0D6C); emu_cs = 0x2B6C; emu_ip = 0x0F03; emu_last_cs = 0xB4DA; emu_last_ip = 0x0D67; emu_last_length = 0x0023; emu_last_crc = 0x338D; emu_call(); // Jump does not resolve
	f__B4DA_0D6C_0024_49B9();
}

/**
 * Decompiled function f__B4DA_0D53_0019_4084()
 *
 * @name f__B4DA_0D53_0019_4084
 * @implements B4DA:0D53:0019:4084 ()
 *
 * Called From: B4DA:0D4B:0023:338D
 */
void f__B4DA_0D53_0019_4084()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x1A), 0x0);
	if (emu_flags.zf) { f__B4DA_0DA3_0007_304C(); return; }
	emu_movw(&emu_ax.x, 0x28);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x140);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0D6C); emu_cs = 0x2B6C; emu_ip = 0x0F03; emu_last_cs = 0xB4DA; emu_last_ip = 0x0D67; emu_last_length = 0x0019; emu_last_crc = 0x4084; emu_call(); // Jump does not resolve
	f__B4DA_0D6C_0024_49B9();
}

/**
 * Decompiled function f__B4DA_0D59_0013_41A5()
 *
 * @name f__B4DA_0D59_0013_41A5
 * @implements B4DA:0D59:0013:41A5 ()
 *
 * Called From: B4DA:0D51:0040:D39E
 * Called From: B4DA:0D51:0023:338D
 */
void f__B4DA_0D59_0013_41A5()
{
	emu_movw(&emu_ax.x, 0x28);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x140);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0D6C); emu_cs = 0x2B6C; f__2B6C_0197_00CE_7027();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_0D6C_0024_49B9();
}

/**
 * Decompiled function f__B4DA_0D6C_0024_49B9()
 *
 * @name f__B4DA_0D6C_0024_49B9
 * @implements B4DA:0D6C:0024:49B9 ()
 *
 * Called From: B4DA:0D6C:0013:41A5
 */
void f__B4DA_0D6C_0024_49B9()
{
	emu_addws(&emu_sp, 0x8);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x4);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x28);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x28);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0xA0);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0D90); emu_cs = 0x24D0; f__24D0_000D_0039_9224();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_0D90_0008_FE96();
}

/**
 * Decompiled function f__B4DA_0D90_0008_FE96()
 *
 * @name f__B4DA_0D90_0008_FE96
 * @implements B4DA:0D90:0008:FE96 ()
 *
 * Called From: B4DA:0D90:0024:49B9
 */
void f__B4DA_0D90_0008_FE96()
{
	emu_addws(&emu_sp, 0x10);
	emu_push(emu_cs); emu_push(0x0D98); emu_cs = 0x2B6C; f__2B6C_0292_0028_CAA5();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_0D98_000B_399B();
}

/**
 * Decompiled function f__B4DA_0D98_000B_399B()
 *
 * @name f__B4DA_0D98_000B_399B
 * @implements B4DA:0D98:000B:399B ()
 *
 * Called From: B4DA:0D98:0008:FE96
 */
void f__B4DA_0D98_000B_399B()
{
	emu_movw(&emu_si, 0x4);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x18), 0x0);
	f__B4DA_0ED8_0002_03EE(); return;
}

/**
 * Decompiled function f__B4DA_0DA3_0007_304C()
 *
 * @name f__B4DA_0DA3_0007_304C
 * @implements B4DA:0DA3:0007:304C ()
 *
 * Called From: B4DA:0D57:0046:F982
 * Called From: B4DA:0D57:0019:4084
 * Called From: B4DA:0D57:0040:D39E
 * Called From: B4DA:0D57:0023:338D
 * Called From: B4DA:0D57:0026:1C6D
 */
void f__B4DA_0DA3_0007_304C()
{
	emu_orw(&emu_di, emu_di);
	if (!emu_flags.zf) { f__B4DA_0DAA_0022_45C7(); return; }
	f__B4DA_0E9F_003B_E98F(); return;
}

/**
 * Decompiled function f__B4DA_0DAA_0022_45C7()
 *
 * @name f__B4DA_0DAA_0022_45C7
 * @implements B4DA:0DAA:0022:45C7 ()
 *
 * Called From: B4DA:0DA5:0007:304C
 */
void f__B4DA_0DAA_0022_45C7()
{
	emu_movw(&emu_ax.x, 0x4);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x4);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x28);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x28);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0xA0);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0DCC); emu_cs = 0x24D0; f__24D0_000D_0039_9224();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_0DCC_0010_46A1();
}

/**
 * Decompiled function f__B4DA_0DCC_0010_46A1()
 *
 * @name f__B4DA_0DCC_0010_46A1
 * @implements B4DA:0DCC:0010:46A1 ()
 *
 * Called From: B4DA:0DCC:0022:45C7
 */
void f__B4DA_0DCC_0010_46A1()
{
	emu_addws(&emu_sp, 0x10);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x28));
	emu_decw(&emu_get_memory16(emu_ss, emu_bp, -0x28));
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.zf) { f__B4DA_0DDC_0009_716B(); return; }
	emu_ip = 0x0E5F; emu_last_cs = 0xB4DA; emu_last_ip = 0x0DD9; emu_last_length = 0x0010; emu_last_crc = 0x46A1; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B4DA_0DDC_0009_716B()
 *
 * @name f__B4DA_0DDC_0009_716B
 * @implements B4DA:0DDC:0009:716B ()
 *
 * Called From: B4DA:0DD7:0010:46A1
 */
void f__B4DA_0DDC_0009_716B()
{
	emu_movw(&emu_ax.x, 0x4);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0DE5); emu_cs = 0x2598; f__2598_0000_0017_D681();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_0DE5_001F_FEED();
}

/**
 * Decompiled function f__B4DA_0DE5_001F_FEED()
 *
 * @name f__B4DA_0DE5_001F_FEED
 * @implements B4DA:0DE5:001F:FEED ()
 *
 * Called From: B4DA:0DE5:0009:716B
 */
void f__B4DA_0DE5_001F_FEED()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_ax.x, 0x32);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6D5B));
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x4);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x10));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_push(emu_cs); emu_push(0x0E04); emu_cs = 0x10E4; f__10E4_1EF1_0040_E33D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_0E04_0013_FB4A();
}

/**
 * Decompiled function f__B4DA_0E04_0013_FB4A()
 *
 * @name f__B4DA_0E04_0013_FB4A
 * @implements B4DA:0E04:0013:FB4A ()
 *
 * Called From: B4DA:0E04:001F:FEED
 */
void f__B4DA_0E04_0013_FB4A()
{
	emu_addws(&emu_sp, 0xE);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x18), 0x1);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x10));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_push(emu_cs); emu_push(0x0E17); emu_cs = 0x01F7; f__01F7_39A5_001F_856D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_0E17_000B_5855();
}

/**
 * Decompiled function f__B4DA_0E17_000B_5855()
 *
 * @name f__B4DA_0E17_000B_5855
 * @implements B4DA:0E17:000B:5855 ()
 *
 * Called From: B4DA:0E17:0013:FB4A
 */
void f__B4DA_0E17_000B_5855()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_movb(&emu_cx.l, 0x2);
	emu_push(emu_cs); emu_push(0x0E22); emu_cs = 0x01F7; f__01F7_058E_0015_66E9();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_0E22_0021_0370();
}

/**
 * Decompiled function f__B4DA_0E22_0021_0370()
 *
 * @name f__B4DA_0E22_0021_0370
 * @implements B4DA:0E22:0021:0370 ()
 *
 * Called From: B4DA:0E22:000B:5855
 */
void f__B4DA_0E22_0021_0370()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x20), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x22), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76AE));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76AC));
	emu_addw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x22));
	emu_adcw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x20));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x1C), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x1E), emu_dx.x);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x28), 0x0);
	if (emu_flags.zf) { f__B4DA_0E51_000D_6271(); return; }
	f__B4DA_0E43_000E_B6AA(); return;
}

/**
 * Decompiled function f__B4DA_0E43_000E_B6AA()
 *
 * @name f__B4DA_0E43_000E_B6AA
 * @implements B4DA:0E43:000E:B6AA ()
 *
 * Called From: B4DA:0E41:0021:0370
 * Called From: B4DA:0E4D:000E:B6AA
 */
void f__B4DA_0E43_000E_B6AA()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_incw(&emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0x0);
	if (!emu_flags.zf) { f__B4DA_0E43_000E_B6AA(); return; }
	f__B4DA_0E56_0008_566A(); return;
}

/**
 * Decompiled function f__B4DA_0E51_000D_6271()
 *
 * @name f__B4DA_0E51_000D_6271
 * @implements B4DA:0E51:000D:6271 ()
 *
 * Called From: B4DA:0E3F:0021:0370
 */
void f__B4DA_0E51_000D_6271()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x1);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0E5E); emu_cs = 0x2598; f__2598_0000_0017_D681();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_0E5E_0014_4435();
}

/**
 * Decompiled function f__B4DA_0E56_0008_566A()
 *
 * @name f__B4DA_0E56_0008_566A
 * @implements B4DA:0E56:0008:566A ()
 *
 * Called From: B4DA:0E4F:000E:B6AA
 */
void f__B4DA_0E56_0008_566A()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0E5E); emu_cs = 0x2598; f__2598_0000_0017_D681();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_0E5E_0014_4435();
}

/**
 * Decompiled function f__B4DA_0E5E_0014_4435()
 *
 * @name f__B4DA_0E5E_0014_4435
 * @implements B4DA:0E5E:0014:4435 ()
 *
 * Called From: B4DA:0E5E:0008:566A
 * Called From: B4DA:0E5E:000D:6271
 */
void f__B4DA_0E5E_0014_4435()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_ax.x, 0x28);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x140);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0E72); emu_cs = 0x2B6C; f__2B6C_0197_00CE_7027();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_0E72_0023_F08D();
}

/**
 * Decompiled function f__B4DA_0E72_0023_F08D()
 *
 * @name f__B4DA_0E72_0023_F08D
 * @implements B4DA:0E72:0023:F08D ()
 *
 * Called From: B4DA:0E72:0014:4435
 */
void f__B4DA_0E72_0023_F08D()
{
	emu_addws(&emu_sp, 0x8);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x4);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x28);
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
	emu_push(emu_cs); emu_push(0x0E95); emu_cs = 0x24D0; f__24D0_000D_0039_9224();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_0E95_0008_FE96();
}

/**
 * Decompiled function f__B4DA_0E95_0008_FE96()
 *
 * @name f__B4DA_0E95_0008_FE96
 * @implements B4DA:0E95:0008:FE96 ()
 *
 * Called From: B4DA:0E95:0023:F08D
 */
void f__B4DA_0E95_0008_FE96()
{
	emu_addws(&emu_sp, 0x10);
	emu_push(emu_cs); emu_push(0x0E9D); emu_cs = 0x2B6C; f__2B6C_0292_0028_CAA5();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_0E9D_0002_03DE();
}

/**
 * Decompiled function f__B4DA_0E9D_0002_03DE()
 *
 * @name f__B4DA_0E9D_0002_03DE
 * @implements B4DA:0E9D:0002:03DE ()
 *
 * Called From: B4DA:0E9D:0008:FE96
 */
void f__B4DA_0E9D_0002_03DE()
{
	f__B4DA_0ED8_0002_03EE(); return;
}

/**
 * Decompiled function f__B4DA_0E9F_003B_E98F()
 *
 * @name f__B4DA_0E9F_003B_E98F
 * @implements B4DA:0E9F:003B:E98F ()
 *
 * Called From: B4DA:0DA7:0007:304C
 */
void f__B4DA_0E9F_003B_E98F()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x18), 0x1);
	if (!emu_flags.zf) { f__B4DA_0ED8_0002_03EE(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x1C));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x1E));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76AE));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { emu_ip = 0x0ED8; emu_last_cs = 0xB4DA; emu_last_ip = 0x0EAF; emu_last_length = 0x003B; emu_last_crc = 0xE98F; emu_call(); return; } // Jump does not resolve
	if ((emu_flags.sf != emu_flags.of)) { emu_ip = 0x0EB9; emu_last_cs = 0xB4DA; emu_last_ip = 0x0EB1; emu_last_length = 0x003B; emu_last_crc = 0xE98F; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76AC));
	if (!emu_flags.cf) { f__B4DA_0ED8_0002_03EE(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x18), 0x2);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x20));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x22));
	emu_sarw(&emu_ax.x, 0x1);
	emu_rcrw(&emu_dx.x, 0x1);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp, -0x20));
	emu_movw(&emu_cx.x, emu_get_memory16(emu_ss, emu_bp, -0x22));
	emu_addw(&emu_cx.x, emu_dx.x);
	emu_adcw(&emu_bx.x, emu_ax.x);
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x1E), emu_cx.x);
	emu_adcw(&emu_get_memory16(emu_ss, emu_bp, -0x1C), emu_bx.x);
	f__B4DA_0EFB_0007_7950(); return;
}

/**
 * Decompiled function f__B4DA_0ED8_0002_03EE()
 *
 * @name f__B4DA_0ED8_0002_03EE
 * @implements B4DA:0ED8:0002:03EE ()
 *
 * Called From: B4DA:0DA0:000B:399B
 * Called From: B4DA:0E9D:0002:03DE
 * Called From: B4DA:0EA3:003B:E98F
 * Called From: B4DA:0EB7:003B:E98F
 */
void f__B4DA_0ED8_0002_03EE()
{
	f__B4DA_0EFB_0007_7950(); return;
}

/**
 * Decompiled function f__B4DA_0EDA_0013_BC61()
 *
 * @name f__B4DA_0EDA_0013_BC61
 * @implements B4DA:0EDA:0013:BC61 ()
 *
 * Called From: B4DA:0C5C:0007:5D5C
 */
void f__B4DA_0EDA_0013_BC61()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x1A), 0x0);
	if (!emu_flags.zf) { f__B4DA_0EE8_0005_1420(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x14));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x16));
	if (!emu_flags.zf) { f__B4DA_0EEB_0002_03B0(); return; }
	emu_movw(&emu_si, 0x5);
	f__B4DA_0EFB_0007_7950(); return;
}

/**
 * Decompiled function f__B4DA_0EE8_0005_1420()
 *
 * @name f__B4DA_0EE8_0005_1420
 * @implements B4DA:0EE8:0005:1420 ()
 *
 * Called From: B4DA:0EDE:0013:BC61
 */
void f__B4DA_0EE8_0005_1420()
{
	emu_movw(&emu_si, 0x5);
	f__B4DA_0EFB_0007_7950(); return;
}

/**
 * Decompiled function f__B4DA_0EEB_0002_03B0()
 *
 * @name f__B4DA_0EEB_0002_03B0
 * @implements B4DA:0EEB:0002:03B0 ()
 *
 * Called From: B4DA:0EE6:0013:BC61
 */
void f__B4DA_0EEB_0002_03B0()
{
	f__B4DA_0EFB_0007_7950(); return;
}

/**
 * Decompiled function f__B4DA_0EED_000C_C4B5()
 *
 * @name f__B4DA_0EED_000C_C4B5
 * @implements B4DA:0EED:000C:C4B5 ()
 *
 * Called From: B4DA:0C5C:0007:5D5C
 */
void f__B4DA_0EED_000C_C4B5()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x1);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x1);
	f__B4DA_0EFB_0007_7950(); return;
}

/**
 * Decompiled function f__B4DA_0EFB_0007_7950()
 *
 * @name f__B4DA_0EFB_0007_7950
 * @implements B4DA:0EFB:0007:7950 ()
 *
 * Called From: B4DA:0C65:0007:31D0
 * Called From: B4DA:0CE4:0009:1E3D
 * Called From: B4DA:0CE4:000C:DE36
 * Called From: B4DA:0ED8:0002:03EE
 * Called From: B4DA:0ED8:003B:E98F
 * Called From: B4DA:0EEB:0013:BC61
 * Called From: B4DA:0EEB:0002:03B0
 * Called From: B4DA:0EEB:0005:1420
 * Called From: B4DA:0EF7:000C:C4B5
 */
void f__B4DA_0EFB_0007_7950()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x18));
	emu_push(emu_cs);
	emu_push(0x0F02); f__B4DA_0308_0018_D7B1();
	f__B4DA_0F02_000C_37A5();
}

/**
 * Decompiled function f__B4DA_0F02_000C_37A5()
 *
 * @name f__B4DA_0F02_000C_37A5
 * @implements B4DA:0F02:000C:37A5 ()
 *
 * Called From: B4DA:0F02:0007:7950
 */
void f__B4DA_0F02_000C_37A5()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (!emu_flags.zf) { f__B4DA_0F0E_0042_CD59(); return; }
	emu_ip = 0x0F8D; emu_last_cs = 0xB4DA; emu_last_ip = 0x0F0B; emu_last_length = 0x000C; emu_last_crc = 0x37A5; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B4DA_0F0E_0042_CD59()
 *
 * @name f__B4DA_0F0E_0042_CD59
 * @implements B4DA:0F0E:0042:CD59 ()
 *
 * Called From: B4DA:0F09:000C:37A5
 */
void f__B4DA_0F0E_0042_CD59()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76B4));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76B6));
	if (!emu_flags.zf) { f__B4DA_0F8D_0030_3B7E(); return; }
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x76B6), 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x76B4), 0x7);
	emu_orw(&emu_si, emu_si);
	if (!emu_flags.zf) { f__B4DA_0F30_0020_D060(); return; }
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x10), 0x4);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__B4DA_0F30_0020_D060(); return; }
	emu_movw(&emu_si, 0x1);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x4);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x66D5));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x0F50); emu_cs = 0x352A; ovl__352A(2);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_0F50_001B_71DE();
}

/**
 * Decompiled function f__B4DA_0F23_002D_5768()
 *
 * @name f__B4DA_0F23_002D_5768
 * @implements B4DA:0F23:002D:5768 ()
 *
 * Called From: B4DA:0F86:003B:3CEE
 */
void f__B4DA_0F23_002D_5768()
{
	emu_orw(&emu_si, emu_si);
	if (!emu_flags.zf) { f__B4DA_0F30_0020_D060(); return; }
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x10), 0x4);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { emu_ip = 0x0F30; emu_last_cs = 0xB4DA; emu_last_ip = 0x0F2B; emu_last_length = 0x002D; emu_last_crc = 0x5768; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_si, 0x1);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x4);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x66D5));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x0F50); emu_cs = 0x352A; emu_ip = 0x0F7A; emu_last_cs = 0xB4DA; emu_last_ip = 0x0F4B; emu_last_length = 0x002D; emu_last_crc = 0x5768; emu_call(); // Jump does not resolve
	f__B4DA_0F50_001B_71DE();
}

/**
 * Decompiled function f__B4DA_0F30_0020_D060()
 *
 * @name f__B4DA_0F30_0020_D060
 * @implements B4DA:0F30:0020:D060 ()
 *
 * Called From: B4DA:0F25:0042:CD59
 * Called From: B4DA:0F25:002D:5768
 * Called From: B4DA:0F2B:0042:CD59
 */
void f__B4DA_0F30_0020_D060()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x4);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x66D5));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x0F50); emu_cs = 0x352A; ovl__352A(2);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_0F50_001B_71DE();
}

/**
 * Decompiled function f__B4DA_0F50_001B_71DE()
 *
 * @name f__B4DA_0F50_001B_71DE
 * @implements B4DA:0F50:001B:71DE ()
 *
 * Called From: 261F:01B9:001B:DA28
 * Called From: B4DA:0F50:0020:D060
 * Called From: B4DA:0F50:0042:CD59
 */
void f__B4DA_0F50_001B_71DE()
{
	emu_addws(&emu_sp, 0xE);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.zf) { f__B4DA_0F82_003B_3CEE(); return; }
	emu_orw(&emu_si, emu_si);
	if (!emu_flags.zf) { f__B4DA_0F5E_000D_9095(); return; }
	emu_movw(&emu_si, 0x1);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0x12), 0x0);
	if (emu_flags.zf) { emu_ip = 0x0F6B; emu_last_cs = 0xB4DA; emu_last_ip = 0x0F62; emu_last_length = 0x001B; emu_last_crc = 0x71DE; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), 0x0);
	f__B4DA_0F82_003B_3CEE(); return;
}

/**
 * Decompiled function f__B4DA_0F5E_000D_9095()
 *
 * @name f__B4DA_0F5E_000D_9095
 * @implements B4DA:0F5E:000D:9095 ()
 *
 * Called From: B4DA:0F59:001B:71DE
 */
void f__B4DA_0F5E_000D_9095()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0x12), 0x0);
	if (emu_flags.zf) { emu_ip = 0x0F6B; emu_last_cs = 0xB4DA; emu_last_ip = 0x0F62; emu_last_length = 0x000D; emu_last_crc = 0x9095; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), 0x0);
	f__B4DA_0F82_003B_3CEE(); return;
}

/**
 * Decompiled function f__B4DA_0F82_003B_3CEE()
 *
 * @name f__B4DA_0F82_003B_3CEE
 * @implements B4DA:0F82:003B:3CEE ()
 *
 * Called From: B4DA:0F55:001B:71DE
 * Called From: B4DA:0F69:000D:9095
 * Called From: B4DA:0F69:001B:71DE
 */
void f__B4DA_0F82_003B_3CEE()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x10), 0x0);
	if (emu_flags.zf) { f__B4DA_0F23_002D_5768(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x1);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x0);
	if (emu_flags.zf) { emu_ip = 0x1004; emu_last_cs = 0xB4DA; emu_last_ip = 0x0F91; emu_last_length = 0x003B; emu_last_crc = 0x3CEE; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, 0x31);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x26));
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x8);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00, -0x66D5));
	emu_addw(&emu_ax.x, 0x3);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_addw(&emu_ax.x, 0x5);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_cs);
	emu_push(0x0FBD); f__B4DA_19E6_0016_A4B0();
	f__B4DA_0FBD_000B_994B();
}

/**
 * Decompiled function f__B4DA_0F8D_0030_3B7E()
 *
 * @name f__B4DA_0F8D_0030_3B7E
 * @implements B4DA:0F8D:0030:3B7E ()
 *
 * Called From: B4DA:0F15:0042:CD59
 */
void f__B4DA_0F8D_0030_3B7E()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x0);
	if (emu_flags.zf) { f__B4DA_1004_0009_0FF7(); return; }
	emu_movw(&emu_ax.x, 0x31);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x26));
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x8);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00, -0x66D5));
	emu_addw(&emu_ax.x, 0x3);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_addw(&emu_ax.x, 0x5);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_cs);
	emu_push(0x0FBD); f__B4DA_19E6_0016_A4B0();
	f__B4DA_0FBD_000B_994B();
}

/**
 * Decompiled function f__B4DA_0FBD_000B_994B()
 *
 * @name f__B4DA_0FBD_000B_994B
 * @implements B4DA:0FBD:000B:994B ()
 *
 * Called From: B4DA:0FBD:003B:3CEE
 * Called From: B4DA:0FBD:0030:3B7E
 */
void f__B4DA_0FBD_000B_994B()
{
	emu_addws(&emu_sp, 0x12);
	emu_movw(&emu_ax.x, 0x4);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x0FC8); f__B4DA_0A8E_0025_F0AA();
	f__B4DA_0FC8_000A_8BE4();
}

/**
 * Decompiled function f__B4DA_0FC8_000A_8BE4()
 *
 * @name f__B4DA_0FC8_000A_8BE4
 * @implements B4DA:0FC8:000A:8BE4 ()
 *
 * Called From: B4DA:0FC8:000B:994B
 */
void f__B4DA_0FC8_000A_8BE4()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6D5D));
	emu_push(emu_cs); emu_push(0x0FD2); emu_cs = 0x2642; f__2642_0002_005E_D1F0();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_0FD2_0025_11EC();
}

/**
 * Decompiled function f__B4DA_0FD2_0025_11EC()
 *
 * @name f__B4DA_0FD2_0025_11EC
 * @implements B4DA:0FD2:0025:11EC ()
 *
 * Called From: B4DA:0FD2:000A:8BE4
 */
void f__B4DA_0FD2_0025_11EC()
{
	emu_pop(&emu_cx.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x4);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x66CF));
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x66D1));
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x66D5));
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x66D3));
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x66D5));
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x66D3));
	emu_push(emu_cs); emu_push(0x0FF7); emu_cs = 0x24D0; f__24D0_000D_0039_9224();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_0FF7_0008_F194();
}

/**
 * Decompiled function f__B4DA_0FF7_0008_F194()
 *
 * @name f__B4DA_0FF7_0008_F194
 * @implements B4DA:0FF7:0008:F194 ()
 *
 * Called From: B4DA:0FF7:0025:11EC
 */
void f__B4DA_0FF7_0008_F194()
{
	emu_addws(&emu_sp, 0x10);
	emu_push(emu_cs); emu_push(0x0FFF); emu_cs = 0x2642; f__2642_0069_0008_3016();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_0FFF_000E_AFC1();
}

/**
 * Decompiled function f__B4DA_0FFF_000E_AFC1()
 *
 * @name f__B4DA_0FFF_000E_AFC1
 * @implements B4DA:0FFF:000E:AFC1 ()
 *
 * Called From: B4DA:0FFF:0008:F194
 */
void f__B4DA_0FFF_000E_AFC1()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x0);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x0);
	if (!emu_flags.zf) { f__B4DA_100D_0013_E274(); return; }
	f__B4DA_0C03_0008_566A(); return;
}

/**
 * Decompiled function f__B4DA_1004_0009_0FF7()
 *
 * @name f__B4DA_1004_0009_0FF7
 * @implements B4DA:1004:0009:0FF7 ()
 *
 * Called From: B4DA:0C00:0010:9AB6
 * Called From: B4DA:0F91:0030:3B7E
 */
void f__B4DA_1004_0009_0FF7()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x0);
	if (!emu_flags.zf) { emu_ip = 0x100D; emu_last_cs = 0xB4DA; emu_last_ip = 0x1008; emu_last_length = 0x0009; emu_last_crc = 0x0FF7; emu_call(); return; } // Jump does not resolve
	f__B4DA_0C03_0008_566A(); return;
}

/**
 * Decompiled function f__B4DA_100D_0013_E274()
 *
 * @name f__B4DA_100D_0013_E274
 * @implements B4DA:100D:0013:E274 ()
 *
 * Called From: B4DA:1008:000E:AFC1
 */
void f__B4DA_100D_0013_E274()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_flags.zf) { emu_ip = 0x1022; emu_last_cs = 0xB4DA; emu_last_ip = 0x1013; emu_last_length = 0x0013; emu_last_crc = 0xE274; emu_call(); return; } // Jump does not resolve
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x1020); emu_cs = 0x352A; ovl__352A(1);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_1020_000B_DD68();
}

/**
 * Decompiled function f__B4DA_1020_000B_DD68()
 *
 * @name f__B4DA_1020_000B_DD68
 * @implements B4DA:1020:000B:DD68 ()
 *
 * Called From: B4DA:1020:0013:E274
 */
void f__B4DA_1020_000B_DD68()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_ax.x, 0x4);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x102B); emu_cs = 0x2598; f__2598_0000_0017_D681();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_102B_0009_053C();
}

/**
 * Decompiled function f__B4DA_102B_0009_053C()
 *
 * @name f__B4DA_102B_0009_053C
 * @implements B4DA:102B:0009:053C ()
 *
 * Called From: B4DA:102B:000B:DD68
 */
void f__B4DA_102B_0009_053C()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_ax.x, 0x4);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x1034); f__B4DA_0A8E_0025_F0AA();
	f__B4DA_1034_000A_8BE4();
}

/**
 * Decompiled function f__B4DA_1034_000A_8BE4()
 *
 * @name f__B4DA_1034_000A_8BE4
 * @implements B4DA:1034:000A:8BE4 ()
 *
 * Called From: B4DA:1034:0009:053C
 */
void f__B4DA_1034_000A_8BE4()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6D5D));
	emu_push(emu_cs); emu_push(0x103E); emu_cs = 0x2642; f__2642_0002_005E_D1F0();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_103E_0025_11EC();
}

/**
 * Decompiled function f__B4DA_103E_0025_11EC()
 *
 * @name f__B4DA_103E_0025_11EC
 * @implements B4DA:103E:0025:11EC ()
 *
 * Called From: B4DA:103E:000A:8BE4
 */
void f__B4DA_103E_0025_11EC()
{
	emu_pop(&emu_cx.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x4);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x66CF));
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x66D1));
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x66D5));
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x66D3));
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x66D5));
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x66D3));
	emu_push(emu_cs); emu_push(0x1063); emu_cs = 0x24D0; f__24D0_000D_0039_9224();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_1063_0008_F194();
}

/**
 * Decompiled function f__B4DA_1063_0008_F194()
 *
 * @name f__B4DA_1063_0008_F194
 * @implements B4DA:1063:0008:F194 ()
 *
 * Called From: B4DA:1063:0025:11EC
 */
void f__B4DA_1063_0008_F194()
{
	emu_addws(&emu_sp, 0x10);
	emu_push(emu_cs); emu_push(0x106B); emu_cs = 0x2642; f__2642_0069_0008_3016();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_106B_0008_E8F6();
}

/**
 * Decompiled function f__B4DA_106B_0008_E8F6()
 *
 * @name f__B4DA_106B_0008_E8F6
 * @implements B4DA:106B:0008:E8F6 ()
 *
 * Called From: B4DA:106B:0008:F194
 */
void f__B4DA_106B_0008_E8F6()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_cs); emu_push(0x1073); emu_cs = 0x07AE; f__07AE_0000_00DF_386F();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_1073_0009_5BEA();
}

/**
 * Decompiled function f__B4DA_1073_0009_5BEA()
 *
 * @name f__B4DA_1073_0009_5BEA
 * @implements B4DA:1073:0009:5BEA ()
 *
 * Called From: B4DA:1073:0008:E8F6
 */
void f__B4DA_1073_0009_5BEA()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_push(emu_cs); emu_push(0x107C); emu_cs = 0x2598; f__2598_0000_0017_D681();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_107C_0006_053A();
}

/**
 * Decompiled function f__B4DA_107C_0006_053A()
 *
 * @name f__B4DA_107C_0006_053A
 * @implements B4DA:107C:0006:053A ()
 *
 * Called From: B4DA:107C:0009:5BEA
 */
void f__B4DA_107C_0006_053A()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_cs); emu_push(0x1082); emu_cs = 0x29E8; f__29E8_073F_000E_A6E4();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_1082_0005_119C();
}

/**
 * Decompiled function f__B4DA_1082_0005_119C()
 *
 * @name f__B4DA_1082_0005_119C
 * @implements B4DA:1082:0005:119C ()
 *
 * Called From: B4DA:1082:0006:053A
 */
void f__B4DA_1082_0005_119C()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x1A));
	f__B4DA_1087_0006_137A(); return;
}

/**
 * Decompiled function f__B4DA_1087_0006_137A()
 *
 * @name f__B4DA_1087_0006_137A
 * @implements B4DA:1087:0006:137A ()
 *
 * Called From: B4DA:1085:0005:119C
 */
void f__B4DA_1087_0006_137A()
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
 * Decompiled function f__B4DA_1099_0024_A337()
 *
 * @name f__B4DA_1099_0024_A337
 * @implements B4DA:1099:0024:A337 ()
 *
 * Called From: 34DA:0039:0005:14A8
 */
void f__B4DA_1099_0024_A337()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x20);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_ax.x, 0x1);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x2580), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x3C4A), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3A38));
	emu_orw(&emu_ax.x, emu_ax.x);
	if (emu_flags.zf) { f__B4DA_10BD_000A_022E(); return; }
	emu_cmpw(&emu_ax.x, 0x1);
	if (emu_flags.zf) { f__B4DA_10C7_000A_02B2(); return; }
	emu_cmpw(&emu_ax.x, 0x2);
	if (emu_flags.zf) { emu_ip = 0x10D1; emu_last_cs = 0xB4DA; emu_last_ip = 0x10B9; emu_last_length = 0x0024; emu_last_crc = 0xA337; emu_call(); return; } // Jump does not resolve
	emu_ip = 0x10C7; emu_last_cs = 0xB4DA; emu_last_ip = 0x10BB; emu_last_length = 0x0024; emu_last_crc = 0xA337; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B4DA_10BD_000A_022E()
 *
 * @name f__B4DA_10BD_000A_022E
 * @implements B4DA:10BD:000A:022E ()
 *
 * Called From: B4DA:10AF:0024:A337
 */
void f__B4DA_10BD_000A_022E()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x18), emu_ds);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x1A), 0x25A4);
	f__B4DA_10DB_0009_74A3(); return;
}

/**
 * Decompiled function f__B4DA_10C7_000A_02B2()
 *
 * @name f__B4DA_10C7_000A_02B2
 * @implements B4DA:10C7:000A:02B2 ()
 *
 * Called From: B4DA:10B4:0024:A337
 */
void f__B4DA_10C7_000A_02B2()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x18), emu_ds);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x1A), 0x25AE);
	f__B4DA_10DB_0009_74A3(); return;
}

/**
 * Decompiled function f__B4DA_10DB_0009_74A3()
 *
 * @name f__B4DA_10DB_0009_74A3
 * @implements B4DA:10DB:0009:74A3 ()
 *
 * Called From: B4DA:10C5:000A:022E
 * Called From: B4DA:10CF:000A:02B2
 */
void f__B4DA_10DB_0009_74A3()
{
	emu_movw(&emu_ax.x, 0x3);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x10E4); emu_cs = 0x252E; f__252E_0001_0018_48C0();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_10E4_0042_5FCC();
}

/**
 * Decompiled function f__B4DA_10E4_0042_5FCC()
 *
 * @name f__B4DA_10E4_0042_5FCC
 * @implements B4DA:10E4:0042:5FCC ()
 *
 * Called From: B4DA:10E4:0009:74A3
 */
void f__B4DA_10E4_0042_5FCC()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x6CE1));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x6CDF));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), emu_dx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x38DE));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x38DC));
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x38DA));
	emu_addw(&emu_ax.x, 0xFC18);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x38E0));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x38DE));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x38DC));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x38DA));
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x25C3);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x1126); emu_cs = 0x0642; f__0642_075D_0011_56FC();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_1126_0009_C5FE();
}

/**
 * Decompiled function f__B4DA_1126_0009_C5FE()
 *
 * @name f__B4DA_1126_0009_C5FE
 * @implements B4DA:1126:0009:C5FE ()
 *
 * Called From: B4DA:1126:0042:5FCC
 */
void f__B4DA_1126_0009_C5FE()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x112F); emu_cs = 0x253D; f__253D_0000_0013_AAD7();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_112F_0020_D5F7();
}

/**
 * Decompiled function f__B4DA_112F_0020_D5F7()
 *
 * @name f__B4DA_112F_0020_D5F7
 * @implements B4DA:112F:0020:D5F7 ()
 *
 * Called From: B4DA:112F:0009:C5FE
 */
void f__B4DA_112F_0020_D5F7()
{
	emu_addws(&emu_sp, 0xC);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3A38));
	emu_movw(&emu_dx.x, 0x3);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_incw(&emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x38DC));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x38DA));
	emu_push(emu_cs); emu_push(0x114F); emu_cs = 0x2502; f__2502_0165_0027_0314();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_114F_000A_A3A1();
}

/**
 * Decompiled function f__B4DA_114F_000A_A3A1()
 *
 * @name f__B4DA_114F_000A_A3A1
 * @implements B4DA:114F:000A:A3A1 ()
 *
 * Called From: B4DA:114F:0020:D5F7
 */
void f__B4DA_114F_000A_A3A1()
{
	emu_addws(&emu_sp, 0x6);
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x1159); emu_cs = 0x2502; f__2502_00FA_0009_4FCC();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_1159_0014_B27E();
}

/**
 * Decompiled function f__B4DA_1159_0014_B27E()
 *
 * @name f__B4DA_1159_0014_B27E
 * @implements B4DA:1159:0014:B27E ()
 *
 * Called From: B4DA:1159:000A:A3A1
 */
void f__B4DA_1159_0014_B27E()
{
	emu_addws(&emu_sp, 0x8);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs); emu_push(0x116D); emu_cs = 0x2502; f__2502_0008_0015_ED28();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_116D_0014_7255();
}

/**
 * Decompiled function f__B4DA_116D_0014_7255()
 *
 * @name f__B4DA_116D_0014_7255
 * @implements B4DA:116D:0014:7255 ()
 *
 * Called From: B4DA:116D:0014:B27E
 */
void f__B4DA_116D_0014_7255()
{
	emu_addws(&emu_sp, 0x8);
	emu_movw(&emu_ax.x, 0xF);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3C38));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3C36));
	emu_push(emu_cs); emu_push(0x1181); emu_cs = 0x259E; f__259E_0006_0016_2DFF();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_1181_0011_D0FD();
}

/**
 * Decompiled function f__B4DA_1181_0011_D0FD()
 *
 * @name f__B4DA_1181_0011_D0FD
 * @implements B4DA:1181:0011:D0FD ()
 *
 * Called From: B4DA:1181:0014:7255
 */
void f__B4DA_1181_0011_D0FD()
{
	emu_addws(&emu_sp, 0x6);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3A38));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x18));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x1A));
	emu_push(emu_cs);
	emu_push(0x1192); f__B4DA_0000_002C_ACE1();
	f__B4DA_1192_0008_F15E();
}

/**
 * Decompiled function f__B4DA_1192_0008_F15E()
 *
 * @name f__B4DA_1192_0008_F15E
 * @implements B4DA:1192:0008:F15E ()
 *
 * Called From: B4DA:1192:0011:D0FD
 */
void f__B4DA_1192_0008_F15E()
{
	emu_addws(&emu_sp, 0x6);
	emu_push(emu_cs); emu_push(0x119A); emu_cs = 0x2B6C; f__2B6C_0137_0020_17E5();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_119A_0020_7795();
}

/**
 * Decompiled function f__B4DA_119A_0020_7795()
 *
 * @name f__B4DA_119A_0020_7795
 * @implements B4DA:119A:0020:7795 ()
 *
 * Called From: B4DA:119A:0008:F15E
 */
void f__B4DA_119A_0020_7795()
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
	emu_push(emu_cs); emu_push(0x11BA); emu_cs = 0x24D0; f__24D0_000D_0039_9224();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_11BA_0008_F13E();
}

/**
 * Decompiled function f__B4DA_11BA_0008_F13E()
 *
 * @name f__B4DA_11BA_0008_F13E
 * @implements B4DA:11BA:0008:F13E ()
 *
 * Called From: B4DA:11BA:0020:7795
 */
void f__B4DA_11BA_0008_F13E()
{
	emu_addws(&emu_sp, 0x10);
	emu_push(emu_cs); emu_push(0x11C2); emu_cs = 0x2B6C; f__2B6C_0169_001E_97C8();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_11C2_0011_1E65();
}

/**
 * Decompiled function f__B4DA_11C2_0011_1E65()
 *
 * @name f__B4DA_11C2_0011_1E65
 * @implements B4DA:11C2:0011:1E65 ()
 *
 * Called From: B4DA:11C2:0008:F13E
 */
void f__B4DA_11C2_0011_1E65()
{
	emu_movw(&emu_ax.x, 0xF);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3C34));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3C32));
	emu_push(emu_cs); emu_push(0x11D3); emu_cs = 0x259E; f__259E_0006_0016_2DFF();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_11D3_0023_77ED();
}

/**
 * Decompiled function f__B4DA_11D3_0023_77ED()
 *
 * @name f__B4DA_11D3_0023_77ED
 * @implements B4DA:11D3:0023:77ED ()
 *
 * Called From: B4DA:11D3:0011:1E65
 */
void f__B4DA_11D3_0023_77ED()
{
	emu_addws(&emu_sp, 0x6);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x18));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x1A));
	emu_push(emu_cs);
	emu_push(0x11F6); f__B4DA_0AB8_002A_328A();
	f__B4DA_11F6_0019_CC77();
}

/**
 * Decompiled function f__B4DA_11F6_0019_CC77()
 *
 * @name f__B4DA_11F6_0019_CC77
 * @implements B4DA:11F6:0019:CC77 ()
 *
 * Called From: B4DA:11F6:0023:77ED
 */
void f__B4DA_11F6_0019_CC77()
{
	emu_addws(&emu_sp, 0x12);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x38DC));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x38DA));
	emu_push(emu_cs); emu_push(0x120F); emu_cs = 0x2502; f__2502_0165_0027_0314();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_120F_000A_A3A1();
}

/**
 * Decompiled function f__B4DA_120F_000A_A3A1()
 *
 * @name f__B4DA_120F_000A_A3A1
 * @implements B4DA:120F:000A:A3A1 ()
 *
 * Called From: B4DA:120F:0019:CC77
 */
void f__B4DA_120F_000A_A3A1()
{
	emu_addws(&emu_sp, 0x6);
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x1219); emu_cs = 0x2502; f__2502_00FA_0009_4FCC();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_1219_0014_B27E();
}

/**
 * Decompiled function f__B4DA_1219_0014_B27E()
 *
 * @name f__B4DA_1219_0014_B27E
 * @implements B4DA:1219:0014:B27E ()
 *
 * Called From: B4DA:1219:000A:A3A1
 */
void f__B4DA_1219_0014_B27E()
{
	emu_addws(&emu_sp, 0x8);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs); emu_push(0x122D); emu_cs = 0x2502; f__2502_0008_0015_ED28();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_122D_0018_B720();
}

/**
 * Decompiled function f__B4DA_122D_0018_B720()
 *
 * @name f__B4DA_122D_0018_B720
 * @implements B4DA:122D:0018:B720 ()
 *
 * Called From: B4DA:122D:0014:B27E
 */
void f__B4DA_122D_0018_B720()
{
	emu_addws(&emu_sp, 0x8);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0x12);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x25CB);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs); emu_push(0x1245); emu_cs = 0x01F7; f__01F7_3803_001E_4ADA();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_1245_000C_5DF9();
}

/**
 * Decompiled function f__B4DA_1245_000C_5DF9()
 *
 * @name f__B4DA_1245_000C_5DF9
 * @implements B4DA:1245:000C:5DF9 ()
 *
 * Called From: B4DA:1245:0018:B720
 */
void f__B4DA_1245_000C_5DF9()
{
	emu_addws(&emu_sp, 0xC);
	emu_movw(&emu_ax.x, 0x8);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x1251); emu_cs = 0x07AE; f__07AE_0000_00DF_386F();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_1251_000D_4169();
}

/**
 * Decompiled function f__B4DA_1251_000D_4169()
 *
 * @name f__B4DA_1251_000D_4169
 * @implements B4DA:1251:000D:4169 ()
 *
 * Called From: B4DA:1251:000C:5DF9
 */
void f__B4DA_1251_000D_4169()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x14), emu_ax.x);
	emu_movw(&emu_ax.x, 0x4);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x125E); emu_cs = 0x2598; f__2598_0000_0017_D681();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_125E_000E_B9C9();
}

/**
 * Decompiled function f__B4DA_125E_000E_B9C9()
 *
 * @name f__B4DA_125E_000E_B9C9
 * @implements B4DA:125E:000E:B9C9 ()
 *
 * Called From: B4DA:125E:000D:4169
 */
void f__B4DA_125E_000E_B9C9()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x16), emu_ax.x);
	emu_xorw(&emu_di, emu_di);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x20), 0x0);
	f__B4DA_168F_000E_DF2F(); return;
}

/**
 * Decompiled function f__B4DA_126C_000D_A405()
 *
 * @name f__B4DA_126C_000D_A405
 * @implements B4DA:126C:000D:A405 ()
 *
 * Called From: B4DA:169A:000E:DF2F
 * Called From: B4DA:169A:000F:5F0C
 */
void f__B4DA_126C_000D_A405()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_decw(&emu_ax.x);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x1279); emu_cs = 0x2537; f__2537_000C_001C_1A9E();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_1279_0019_6F2E();
}

/**
 * Decompiled function f__B4DA_1279_0019_6F2E()
 *
 * @name f__B4DA_1279_0019_6F2E
 * @implements B4DA:1279:0019:6F2E ()
 *
 * Called From: B4DA:1279:000D:A405
 */
void f__B4DA_1279_0019_6F2E()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_si, emu_ax.x);
	emu_movw(&emu_ax.x, emu_si);
	emu_movw(&emu_dx.x, 0x3);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_addw(&emu_ax.x, 0xA);
	emu_movw(&emu_si, emu_ax.x);
	emu_movw(&emu_ax.x, 0x8);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x1292); emu_cs = 0x07AE; f__07AE_0000_00DF_386F();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_1292_0018_1445();
}

/**
 * Decompiled function f__B4DA_1292_0018_1445()
 *
 * @name f__B4DA_1292_0018_1445
 * @implements B4DA:1292:0018:1445 ()
 *
 * Called From: B4DA:1292:0019:6F2E
 */
void f__B4DA_1292_0018_1445()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_ax.x, emu_si);
	emu_incw(&emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x38DC));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x38DA));
	emu_push(emu_cs); emu_push(0x12AA); emu_cs = 0x2502; f__2502_0165_0027_0314();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_12AA_000A_A3A1();
}

/**
 * Decompiled function f__B4DA_12AA_000A_A3A1()
 *
 * @name f__B4DA_12AA_000A_A3A1
 * @implements B4DA:12AA:000A:A3A1 ()
 *
 * Called From: B4DA:12AA:0018:1445
 */
void f__B4DA_12AA_000A_A3A1()
{
	emu_addws(&emu_sp, 0x6);
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x12B4); emu_cs = 0x2502; f__2502_00FA_0009_4FCC();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_12B4_0014_B27E();
}

/**
 * Decompiled function f__B4DA_12B4_0014_B27E()
 *
 * @name f__B4DA_12B4_0014_B27E
 * @implements B4DA:12B4:0014:B27E ()
 *
 * Called From: B4DA:12B4:000A:A3A1
 */
void f__B4DA_12B4_0014_B27E()
{
	emu_addws(&emu_sp, 0x8);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs); emu_push(0x12C8); emu_cs = 0x2502; f__2502_0008_0015_ED28();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_12C8_0023_06D3();
}

/**
 * Decompiled function f__B4DA_12C8_0023_06D3()
 *
 * @name f__B4DA_12C8_0023_06D3
 * @implements B4DA:12C8:0023:06D3 ()
 *
 * Called From: B4DA:12C8:0014:B27E
 */
void f__B4DA_12C8_0023_06D3()
{
	emu_addws(&emu_sp, 0x8);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs); emu_push(0x12EB); emu_cs = 0x352A; ovl__352A(0);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_12EB_002A_F01C();
}

/**
 * Decompiled function f__B4DA_12EB_002A_F01C()
 *
 * @name f__B4DA_12EB_002A_F01C
 * @implements B4DA:12EB:002A:F01C ()
 *
 * Called From: B4DA:12EB:0023:06D3
 */
void f__B4DA_12EB_002A_F01C()
{
	emu_addws(&emu_sp, 0x12);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x4);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x66D5));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00, -0x66D3));
	emu_movb(&emu_cx.l, 0x3);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x1315); emu_cs = 0x352A; ovl__352A(2);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_1315_000E_96ED();
}

/**
 * Decompiled function f__B4DA_1315_000E_96ED()
 *
 * @name f__B4DA_1315_000E_96ED
 * @implements B4DA:1315:000E:96ED ()
 *
 * Called From: B4DA:1315:002A:F01C
 */
void f__B4DA_1315_000E_96ED()
{
	emu_addws(&emu_sp, 0xE);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x1323); emu_cs = 0x352A; ovl__352A(1);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_1323_000A_61CB();
}

/**
 * Decompiled function f__B4DA_1323_000A_61CB()
 *
 * @name f__B4DA_1323_000A_61CB
 * @implements B4DA:1323:000A:61CB ()
 *
 * Called From: B4DA:1323:000E:96ED
 */
void f__B4DA_1323_000A_61CB()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_ax.x, 0x4);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x132D); f__B4DA_0A8E_0025_F0AA();
	f__B4DA_132D_000A_8BE4();
}

/**
 * Decompiled function f__B4DA_132D_000A_8BE4()
 *
 * @name f__B4DA_132D_000A_8BE4
 * @implements B4DA:132D:000A:8BE4 ()
 *
 * Called From: B4DA:132D:000A:61CB
 */
void f__B4DA_132D_000A_8BE4()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6D5D));
	emu_push(emu_cs); emu_push(0x1337); emu_cs = 0x2642; f__2642_0002_005E_D1F0();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_1337_0025_11EC();
}

/**
 * Decompiled function f__B4DA_1337_0025_11EC()
 *
 * @name f__B4DA_1337_0025_11EC
 * @implements B4DA:1337:0025:11EC ()
 *
 * Called From: B4DA:1337:000A:8BE4
 */
void f__B4DA_1337_0025_11EC()
{
	emu_pop(&emu_cx.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x4);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x66CF));
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x66D1));
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x66D5));
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x66D3));
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x66D5));
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x66D3));
	emu_push(emu_cs); emu_push(0x135C); emu_cs = 0x24D0; f__24D0_000D_0039_9224();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_135C_0008_F194();
}

/**
 * Decompiled function f__B4DA_135C_0008_F194()
 *
 * @name f__B4DA_135C_0008_F194
 * @implements B4DA:135C:0008:F194 ()
 *
 * Called From: B4DA:135C:0025:11EC
 */
void f__B4DA_135C_0008_F194()
{
	emu_addws(&emu_sp, 0x10);
	emu_push(emu_cs); emu_push(0x1364); emu_cs = 0x2642; f__2642_0069_0008_3016();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_1364_0014_B008();
}

/**
 * Decompiled function f__B4DA_1364_0014_B008()
 *
 * @name f__B4DA_1364_0014_B008
 * @implements B4DA:1364:0014:B008 ()
 *
 * Called From: B4DA:1364:0008:F194
 */
void f__B4DA_1364_0014_B008()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_si);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x38DC));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x38DA));
	emu_push(emu_cs); emu_push(0x1378); emu_cs = 0x2502; f__2502_0165_0027_0314();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_1378_000A_A3A1();
}

/**
 * Decompiled function f__B4DA_1378_000A_A3A1()
 *
 * @name f__B4DA_1378_000A_A3A1
 * @implements B4DA:1378:000A:A3A1 ()
 *
 * Called From: B4DA:1378:0014:B008
 */
void f__B4DA_1378_000A_A3A1()
{
	emu_addws(&emu_sp, 0x6);
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x1382); emu_cs = 0x2502; f__2502_00FA_0009_4FCC();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_1382_0014_B27E();
}

/**
 * Decompiled function f__B4DA_1382_0014_B27E()
 *
 * @name f__B4DA_1382_0014_B27E
 * @implements B4DA:1382:0014:B27E ()
 *
 * Called From: B4DA:1382:000A:A3A1
 */
void f__B4DA_1382_0014_B27E()
{
	emu_addws(&emu_sp, 0x8);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs); emu_push(0x1396); emu_cs = 0x2502; f__2502_0008_0015_ED28();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_1396_000E_F8B9();
}

/**
 * Decompiled function f__B4DA_1396_000E_F8B9()
 *
 * @name f__B4DA_1396_000E_F8B9
 * @implements B4DA:1396:000E:F8B9 ()
 *
 * Called From: B4DA:1396:0014:B27E
 */
void f__B4DA_1396_000E_F8B9()
{
	emu_addws(&emu_sp, 0x8);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs);
	emu_push(0x13A4); f__B4DA_176C_000F_E971();
	f__B4DA_13A4_000D_850F();
}

/**
 * Decompiled function f__B4DA_13A4_000D_850F()
 *
 * @name f__B4DA_13A4_000D_850F
 * @implements B4DA:13A4:000D:850F ()
 *
 * Called From: B4DA:13A4:000E:F8B9
 */
void f__B4DA_13A4_000D_850F()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs); emu_push(0x13B1); emu_cs = 0x01F7; f__01F7_39A5_001F_856D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_13B1_000B_5855();
}

/**
 * Decompiled function f__B4DA_13B1_000B_5855()
 *
 * @name f__B4DA_13B1_000B_5855
 * @implements B4DA:13B1:000B:5855 ()
 *
 * Called From: B4DA:13B1:000D:850F
 */
void f__B4DA_13B1_000B_5855()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_movb(&emu_cx.l, 0x2);
	emu_push(emu_cs); emu_push(0x13BC); emu_cs = 0x01F7; f__01F7_058E_0015_66E9();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_13BC_001D_0D20();
}

/**
 * Decompiled function f__B4DA_13BC_001D_0D20()
 *
 * @name f__B4DA_13BC_001D_0D20
 * @implements B4DA:13BC:001D:0D20 ()
 *
 * Called From: B4DA:13BC:000B:5855
 */
void f__B4DA_13BC_001D_0D20()
{
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00,  0x76AE));
	emu_movw(&emu_cx.x, emu_get_memory16(emu_ds, 0x00,  0x76AC));
	emu_addw(&emu_cx.x, emu_ax.x);
	emu_adcw(&emu_bx.x, emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x2584), emu_bx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x2582), emu_cx.x);
	emu_movw(&emu_ax.x, 0x9);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x13D9); emu_cs = 0x07AE; f__07AE_0000_00DF_386F();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_13D9_0006_079E();
}

/**
 * Decompiled function f__B4DA_13D9_0006_079E()
 *
 * @name f__B4DA_13D9_0006_079E
 * @implements B4DA:13D9:0006:079E ()
 *
 * Called From: B4DA:13D9:001D:0D20
 */
void f__B4DA_13D9_0006_079E()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_cs); emu_push(0x13DF); emu_cs = 0x2B6C; f__2B6C_0137_0020_17E5();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_13DF_002C_158C();
}

/**
 * Decompiled function f__B4DA_13DF_002C_158C()
 *
 * @name f__B4DA_13DF_002C_158C
 * @implements B4DA:13DF:002C:158C ()
 *
 * Called From: B4DA:13DF:0006:079E
 */
void f__B4DA_13DF_002C_158C()
{
	emu_movw(&emu_ax.x, 0x4);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00, -0x66CF));
	emu_addw(&emu_ax.x, 0x10);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00, -0x66D1));
	emu_addw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00, -0x66D5));
	emu_subw(&emu_ax.x, 0x8);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00, -0x66D3));
	emu_decw(&emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x140B); emu_cs = 0x24D0; f__24D0_000D_0039_9224();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_140B_0008_F13E();
}

/**
 * Decompiled function f__B4DA_140B_0008_F13E()
 *
 * @name f__B4DA_140B_0008_F13E
 * @implements B4DA:140B:0008:F13E ()
 *
 * Called From: B4DA:140B:002C:158C
 */
void f__B4DA_140B_0008_F13E()
{
	emu_addws(&emu_sp, 0x10);
	emu_push(emu_cs); emu_push(0x1413); emu_cs = 0x2B6C; f__2B6C_0169_001E_97C8();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_1413_0008_566A();
}

/**
 * Decompiled function f__B4DA_1413_0008_566A()
 *
 * @name f__B4DA_1413_0008_566A
 * @implements B4DA:1413:0008:566A ()
 *
 * Called From: B4DA:1413:0008:F13E
 */
void f__B4DA_1413_0008_566A()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x141B); emu_cs = 0x2598; f__2598_0000_0017_D681();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_141B_0006_079E();
}

/**
 * Decompiled function f__B4DA_141B_0006_079E()
 *
 * @name f__B4DA_141B_0006_079E
 * @implements B4DA:141B:0006:079E ()
 *
 * Called From: B4DA:141B:0008:566A
 */
void f__B4DA_141B_0006_079E()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_cs); emu_push(0x1421); emu_cs = 0x2B6C; f__2B6C_0137_0020_17E5();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_1421_0031_DD6F();
}

/**
 * Decompiled function f__B4DA_1421_0031_DD6F()
 *
 * @name f__B4DA_1421_0031_DD6F
 * @implements B4DA:1421:0031:DD6F ()
 *
 * Called From: B4DA:1421:0006:079E
 */
void f__B4DA_1421_0031_DD6F()
{
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00, -0x66CF));
	emu_addw(&emu_ax.x, 0xC);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00, -0x66D1));
	emu_movb(&emu_cx.l, 0x3);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_addw(&emu_ax.x, 0xC);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00, -0x66D5));
	emu_subw(&emu_ax.x, 0x6);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00, -0x66D3));
	emu_movb(&emu_cx.l, 0x3);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_subw(&emu_ax.x, 0x6);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x1452); emu_cs = 0x10E4; f__10E4_0008_0048_CEEB();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_1452_0033_CE7D();
}

/**
 * Decompiled function f__B4DA_1452_0033_CE7D()
 *
 * @name f__B4DA_1452_0033_CE7D
 * @implements B4DA:1452:0033:CE7D ()
 *
 * Called From: B4DA:1452:0031:DD6F
 */
void f__B4DA_1452_0033_CE7D()
{
	emu_addws(&emu_sp, 0xC);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00, -0x66CF));
	emu_addw(&emu_ax.x, 0x4);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00, -0x66D1));
	emu_movb(&emu_cx.l, 0x3);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_addw(&emu_ax.x, 0x4);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00, -0x66D5));
	emu_subw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00, -0x66D3));
	emu_movb(&emu_cx.l, 0x3);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_subw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x1485); emu_cs = 0x10E4; f__10E4_0008_0048_CEEB();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_1485_0008_F63E();
}

/**
 * Decompiled function f__B4DA_1485_0008_F63E()
 *
 * @name f__B4DA_1485_0008_F63E
 * @implements B4DA:1485:0008:F63E ()
 *
 * Called From: B4DA:1485:0033:CE7D
 */
void f__B4DA_1485_0008_F63E()
{
	emu_addws(&emu_sp, 0xC);
	emu_push(emu_cs); emu_push(0x148D); emu_cs = 0x2B6C; f__2B6C_0169_001E_97C8();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_148D_0005_137A();
}

/**
 * Decompiled function f__B4DA_148D_0005_137A()
 *
 * @name f__B4DA_148D_0005_137A
 * @implements B4DA:148D:0005:137A ()
 *
 * Called From: B4DA:148D:0008:F63E
 */
void f__B4DA_148D_0005_137A()
{
	emu_push(emu_cs); emu_push(0x1492); emu_cs = 0x29E8; f__29E8_073F_000E_A6E4();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_1492_0020_9020();
}

/**
 * Decompiled function f__B4DA_1492_0020_9020()
 *
 * @name f__B4DA_1492_0020_9020
 * @implements B4DA:1492:0020:9020 ()
 *
 * Called From: B4DA:1492:0005:137A
 */
void f__B4DA_1492_0020_9020()
{
	emu_movb(&emu_get_memory8(emu_ds, 0x00, -0x66C7), 0x0);
	emu_movw(&emu_ax.x, 0x22);
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
	emu_push(emu_cs); emu_push(0x14B2); emu_cs = 0x10E4; f__10E4_1EF1_0040_E33D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_14B2_0026_529B();
}

/**
 * Decompiled function f__B4DA_14B2_0026_529B()
 *
 * @name f__B4DA_14B2_0026_529B
 * @implements B4DA:14B2:0026:529B ()
 *
 * Called From: B4DA:14B2:0020:9020
 */
void f__B4DA_14B2_0026_529B()
{
	emu_addws(&emu_sp, 0xE);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x34DA);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x3E);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_movw(&emu_ax.x, 0x9);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x50);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x9939);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x14D8); emu_cs = 0x3527; ovl__3527(0);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_14D8_0008_F226();
}

/**
 * Decompiled function f__B4DA_14D8_0008_F226()
 *
 * @name f__B4DA_14D8_0008_F226
 * @implements B4DA:14D8:0008:F226 ()
 *
 * Called From: B4DA:14D8:0026:529B
 */
void f__B4DA_14D8_0008_F226()
{
	emu_addws(&emu_sp, 0x12);
	emu_push(emu_cs);
	emu_push(0x14E0); f__B4DA_1860_0008_3A5E();
	f__B4DA_14E0_0005_11DE();
}

/**
 * Decompiled function f__B4DA_14E0_0005_11DE()
 *
 * @name f__B4DA_14E0_0005_11DE
 * @implements B4DA:14E0:0005:11DE ()
 *
 * Called From: B4DA:14E0:0008:F226
 */
void f__B4DA_14E0_0005_11DE()
{
	emu_push(emu_cs); emu_push(0x14E5); emu_cs = 0x2B6C; f__2B6C_0137_0020_17E5();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_14E5_002C_A792();
}

/**
 * Decompiled function f__B4DA_14E5_002C_A792()
 *
 * @name f__B4DA_14E5_002C_A792
 * @implements B4DA:14E5:002C:A792 ()
 *
 * Called From: B4DA:14E5:0005:11DE
 */
void f__B4DA_14E5_002C_A792()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x4);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00, -0x66CF));
	emu_addw(&emu_ax.x, 0x10);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00, -0x66D1));
	emu_addw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00, -0x66D5));
	emu_subw(&emu_ax.x, 0x8);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00, -0x66D3));
	emu_decw(&emu_ax.x);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x1511); emu_cs = 0x24D0; f__24D0_000D_0039_9224();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_1511_0008_F13E();
}

/**
 * Decompiled function f__B4DA_1511_0008_F13E()
 *
 * @name f__B4DA_1511_0008_F13E
 * @implements B4DA:1511:0008:F13E ()
 *
 * Called From: B4DA:1511:002C:A792
 */
void f__B4DA_1511_0008_F13E()
{
	emu_addws(&emu_sp, 0x10);
	emu_push(emu_cs); emu_push(0x1519); emu_cs = 0x2B6C; f__2B6C_0169_001E_97C8();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_1519_000A_7F77();
}

/**
 * Decompiled function f__B4DA_1519_000A_7F77()
 *
 * @name f__B4DA_1519_000A_7F77
 * @implements B4DA:1519:000A:7F77 ()
 *
 * Called From: B4DA:1519:0008:F13E
 */
void f__B4DA_1519_000A_7F77()
{
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x9939);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x1523); f__B4DA_16F8_001A_9B42();
	f__B4DA_1523_001B_5E9F();
}

/**
 * Decompiled function f__B4DA_1523_001B_5E9F()
 *
 * @name f__B4DA_1523_001B_5E9F
 * @implements B4DA:1523:001B:5E9F ()
 *
 * Called From: B4DA:1523:000A:7F77
 */
void f__B4DA_1523_001B_5E9F()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_ax.x, emu_si);
	emu_addw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x38DC));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x38DA));
	emu_push(emu_cs); emu_push(0x153E); emu_cs = 0x2502; f__2502_0165_0027_0314();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_153E_000A_A3A1();
}

/**
 * Decompiled function f__B4DA_153E_000A_A3A1()
 *
 * @name f__B4DA_153E_000A_A3A1
 * @implements B4DA:153E:000A:A3A1 ()
 *
 * Called From: B4DA:153E:001B:5E9F
 */
void f__B4DA_153E_000A_A3A1()
{
	emu_addws(&emu_sp, 0x6);
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x1548); emu_cs = 0x2502; f__2502_00FA_0009_4FCC();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_1548_0014_B27E();
}

/**
 * Decompiled function f__B4DA_1548_0014_B27E()
 *
 * @name f__B4DA_1548_0014_B27E
 * @implements B4DA:1548:0014:B27E ()
 *
 * Called From: B4DA:1548:000A:A3A1
 */
void f__B4DA_1548_0014_B27E()
{
	emu_addws(&emu_sp, 0x8);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs); emu_push(0x155C); emu_cs = 0x2502; f__2502_0008_0015_ED28();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_155C_000E_F9A5();
}

/**
 * Decompiled function f__B4DA_155C_000E_F9A5()
 *
 * @name f__B4DA_155C_000E_F9A5
 * @implements B4DA:155C:000E:F9A5 ()
 *
 * Called From: B4DA:155C:0014:B27E
 */
void f__B4DA_155C_000E_F9A5()
{
	emu_addws(&emu_sp, 0x8);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs);
	emu_push(0x156A); f__B4DA_16F8_001A_9B42();
	f__B4DA_156A_0012_52B5();
}

/**
 * Decompiled function f__B4DA_156A_0012_52B5()
 *
 * @name f__B4DA_156A_0012_52B5
 * @implements B4DA:156A:0012:52B5 ()
 *
 * Called From: B4DA:156A:000E:F9A5
 */
void f__B4DA_156A_0012_52B5()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x9939);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs); emu_push(0x157C); emu_cs = 0x01F7; f__01F7_38C6_0030_9B78();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_157C_0026_A8ED();
}

/**
 * Decompiled function f__B4DA_157C_0026_A8ED()
 *
 * @name f__B4DA_157C_0026_A8ED
 * @implements B4DA:157C:0026:A8ED ()
 *
 * Called From: B4DA:157C:0012:52B5
 */
void f__B4DA_157C_0026_A8ED()
{
	emu_addws(&emu_sp, 0x8);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (emu_flags.zf) { emu_ip = 0x15C5; emu_last_cs = 0xB4DA; emu_last_ip = 0x1581; emu_last_length = 0x0026; emu_last_crc = 0xA8ED; emu_call(); return; } // Jump does not resolve
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3A38));
	emu_movw(&emu_dx.x, 0x3);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_addw(&emu_ax.x, 0x3);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x38DC));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x38DA));
	emu_push(emu_cs); emu_push(0x15A2); emu_cs = 0x2502; f__2502_0165_0027_0314();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_15A2_000A_A3A1();
}

/**
 * Decompiled function f__B4DA_15A2_000A_A3A1()
 *
 * @name f__B4DA_15A2_000A_A3A1
 * @implements B4DA:15A2:000A:A3A1 ()
 *
 * Called From: B4DA:15A2:0026:A8ED
 */
void f__B4DA_15A2_000A_A3A1()
{
	emu_addws(&emu_sp, 0x6);
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x15AC); emu_cs = 0x2502; f__2502_00FA_0009_4FCC();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_15AC_0014_B27E();
}

/**
 * Decompiled function f__B4DA_15AC_0014_B27E()
 *
 * @name f__B4DA_15AC_0014_B27E
 * @implements B4DA:15AC:0014:B27E ()
 *
 * Called From: B4DA:15AC:000A:A3A1
 */
void f__B4DA_15AC_0014_B27E()
{
	emu_addws(&emu_sp, 0x8);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs); emu_push(0x15C0); emu_cs = 0x2502; f__2502_0008_0015_ED28();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_15C0_0005_1F46();
}

/**
 * Decompiled function f__B4DA_15C0_0005_1F46()
 *
 * @name f__B4DA_15C0_0005_1F46
 * @implements B4DA:15C0:0005:1F46 ()
 *
 * Called From: B4DA:15C0:0014:B27E
 */
void f__B4DA_15C0_0005_1F46()
{
	emu_addws(&emu_sp, 0x8);
	f__B4DA_160A_000B_3AF9(); return;
}

/**
 * Decompiled function f__B4DA_160A_000B_3AF9()
 *
 * @name f__B4DA_160A_000B_3AF9
 * @implements B4DA:160A:000B:3AF9 ()
 *
 * Called From: B4DA:15C3:0005:1F46
 */
void f__B4DA_160A_000B_3AF9()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs);
	emu_push(0x1615); f__B4DA_176C_000F_E971();
	f__B4DA_1615_000D_850F();
}

/**
 * Decompiled function f__B4DA_1615_000D_850F()
 *
 * @name f__B4DA_1615_000D_850F
 * @implements B4DA:1615:000D:850F ()
 *
 * Called From: B4DA:1615:000B:3AF9
 */
void f__B4DA_1615_000D_850F()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs); emu_push(0x1622); emu_cs = 0x01F7; f__01F7_39A5_001F_856D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_1622_000B_5855();
}

/**
 * Decompiled function f__B4DA_1622_000B_5855()
 *
 * @name f__B4DA_1622_000B_5855
 * @implements B4DA:1622:000B:5855 ()
 *
 * Called From: B4DA:1622:000D:850F
 */
void f__B4DA_1622_000B_5855()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_movb(&emu_cx.l, 0x2);
	emu_push(emu_cs); emu_push(0x162D); emu_cs = 0x01F7; f__01F7_058E_0015_66E9();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_162D_0017_682C();
}

/**
 * Decompiled function f__B4DA_162D_0017_682C()
 *
 * @name f__B4DA_162D_0017_682C
 * @implements B4DA:162D:0017:682C ()
 *
 * Called From: B4DA:162D:000B:5855
 */
void f__B4DA_162D_0017_682C()
{
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00,  0x76AE));
	emu_movw(&emu_cx.x, emu_get_memory16(emu_ds, 0x00,  0x76AC));
	emu_addw(&emu_cx.x, emu_ax.x);
	emu_adcw(&emu_bx.x, emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x1C), emu_bx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x1E), emu_cx.x);
	emu_push(emu_cs); emu_push(0x1644); emu_cs = 0x29E8; f__29E8_073F_000E_A6E4();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_1644_0002_03EE();
}

/**
 * Decompiled function f__B4DA_1644_0002_03EE()
 *
 * @name f__B4DA_1644_0002_03EE
 * @implements B4DA:1644:0002:03EE ()
 *
 * Called From: B4DA:1644:0017:682C
 */
void f__B4DA_1644_0002_03EE()
{
	f__B4DA_1667_001E_1445(); return;
}

/**
 * Decompiled function f__B4DA_1667_001E_1445()
 *
 * @name f__B4DA_1667_001E_1445
 * @implements B4DA:1667:001E:1445 ()
 *
 * Called From: B4DA:1644:0002:03EE
 */
void f__B4DA_1667_001E_1445()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76AE));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76AC));
	emu_addws(&emu_dx.x, 0x78);
	emu_adcw(&emu_ax.x, 0x0);
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x1C));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { emu_ip = 0x1689; emu_last_cs = 0xB4DA; emu_last_ip = 0x1677; emu_last_length = 0x001E; emu_last_crc = 0x1445; emu_call(); return; } // Jump does not resolve
	if ((emu_flags.sf != emu_flags.of)) { emu_ip = 0x1680; emu_last_cs = 0xB4DA; emu_last_ip = 0x1679; emu_last_length = 0x001E; emu_last_crc = 0x1445; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x1E));
	if (!emu_flags.cf) { f__B4DA_1689_0005_16EA(); return; }
	emu_push(emu_cs); emu_push(0x1685); emu_cs = 0x29E8; emu_ip = 0x1CC8; emu_last_cs = 0xB4DA; emu_last_ip = 0x1680; emu_last_length = 0x001E; emu_last_crc = 0x1445; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__B4DA_1689_0005_16EA()
 *
 * @name f__B4DA_1689_0005_16EA
 * @implements B4DA:1689:0005:16EA ()
 *
 * Called From: B4DA:167E:001E:1445
 */
void f__B4DA_1689_0005_16EA()
{
	emu_push(emu_cs);
	emu_push(0x168E); f__B4DA_1860_0008_3A5E();
	f__B4DA_168E_000F_5F0C();
}

/**
 * Decompiled function f__B4DA_168E_000F_5F0C()
 *
 * @name f__B4DA_168E_000F_5F0C
 * @implements B4DA:168E:000F:5F0C ()
 *
 * Called From: B4DA:168E:0005:16EA
 */
void f__B4DA_168E_000F_5F0C()
{
	emu_incw(&emu_di);
	emu_cmpws(&emu_di, 0x3);
	if (!(emu_flags.sf != emu_flags.of)) { f__B4DA_169D_0008_EEF6(); return; }
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x20), 0x0);
	if (!emu_flags.zf) { emu_ip = 0x169D; emu_last_cs = 0xB4DA; emu_last_ip = 0x1698; emu_last_length = 0x000F; emu_last_crc = 0x5F0C; emu_call(); return; } // Jump does not resolve
	f__B4DA_126C_000D_A405(); return;
}

/**
 * Decompiled function f__B4DA_168F_000E_DF2F()
 *
 * @name f__B4DA_168F_000E_DF2F
 * @implements B4DA:168F:000E:DF2F ()
 *
 * Called From: B4DA:1269:000E:B9C9
 */
void f__B4DA_168F_000E_DF2F()
{
	emu_cmpws(&emu_di, 0x3);
	if (!(emu_flags.sf != emu_flags.of)) { emu_ip = 0x169D; emu_last_cs = 0xB4DA; emu_last_ip = 0x1692; emu_last_length = 0x000E; emu_last_crc = 0xDF2F; emu_call(); return; } // Jump does not resolve
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x20), 0x0);
	if (!emu_flags.zf) { emu_ip = 0x169D; emu_last_cs = 0xB4DA; emu_last_ip = 0x1698; emu_last_length = 0x000E; emu_last_crc = 0xDF2F; emu_call(); return; } // Jump does not resolve
	f__B4DA_126C_000D_A405(); return;
}

/**
 * Decompiled function f__B4DA_169D_0008_EEF6()
 *
 * @name f__B4DA_169D_0008_EEF6
 * @implements B4DA:169D:0008:EEF6 ()
 *
 * Called From: B4DA:1692:000F:5F0C
 */
void f__B4DA_169D_0008_EEF6()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_push(emu_cs); emu_push(0x16A5); emu_cs = 0x07AE; f__07AE_0000_00DF_386F();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_16A5_0009_5DEA();
}

/**
 * Decompiled function f__B4DA_16A5_0009_5DEA()
 *
 * @name f__B4DA_16A5_0009_5DEA
 * @implements B4DA:16A5:0009:5DEA ()
 *
 * Called From: B4DA:16A5:0008:EEF6
 */
void f__B4DA_16A5_0009_5DEA()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x16));
	emu_push(emu_cs); emu_push(0x16AE); emu_cs = 0x2598; f__2598_0000_0017_D681();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_16AE_0006_053A();
}

/**
 * Decompiled function f__B4DA_16AE_0006_053A()
 *
 * @name f__B4DA_16AE_0006_053A
 * @implements B4DA:16AE:0006:053A ()
 *
 * Called From: B4DA:16AE:0009:5DEA
 */
void f__B4DA_16AE_0006_053A()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_cs); emu_push(0x16B4); emu_cs = 0x29E8; f__29E8_073F_000E_A6E4();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_16B4_0004_06D8();
}

/**
 * Decompiled function f__B4DA_16B4_0004_06D8()
 *
 * @name f__B4DA_16B4_0004_06D8
 * @implements B4DA:16B4:0004:06D8 ()
 *
 * Called From: B4DA:16B4:0006:053A
 */
void f__B4DA_16B4_0004_06D8()
{
	emu_push(emu_cs);
	emu_push(0x16B8); f__B4DA_02E0_0023_77C4();
	f__B4DA_16B8_000D_D3E2();
}

/**
 * Decompiled function f__B4DA_16B8_000D_D3E2()
 *
 * @name f__B4DA_16B8_000D_D3E2
 * @implements B4DA:16B8:000D:D3E2 ()
 *
 * Called From: B4DA:16B8:0004:06D8
 */
void f__B4DA_16B8_000D_D3E2()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x3C4A), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x2580), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x20));
	f__B4DA_16C5_0006_137A(); return;
}

/**
 * Decompiled function f__B4DA_16C5_0006_137A()
 *
 * @name f__B4DA_16C5_0006_137A
 * @implements B4DA:16C5:0006:137A ()
 *
 * Called From: B4DA:16C3:000D:D3E2
 */
void f__B4DA_16C5_0006_137A()
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
 * Decompiled function f__B4DA_16CB_001D_298B()
 *
 * @name f__B4DA_16CB_001D_298B
 * @implements B4DA:16CB:001D:298B ()
 *
 * Called From: 34DA:003E:0005:1020
 */
void f__B4DA_16CB_001D_298B()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_si);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x2584));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x2582));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76AE));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { emu_ip = 0x16E8; emu_last_cs = 0xB4DA; emu_last_ip = 0x16DA; emu_last_length = 0x001D; emu_last_crc = 0x298B; emu_call(); return; } // Jump does not resolve
	if ((emu_flags.sf != emu_flags.of)) { emu_ip = 0x16E4; emu_last_cs = 0xB4DA; emu_last_ip = 0x16DC; emu_last_length = 0x001D; emu_last_crc = 0x298B; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76AC));
	if (!emu_flags.cf) { f__B4DA_16E8_0008_B258(); return; }
	emu_xorw(&emu_si, emu_si);
	f__B4DA_16EB_0005_0CD8(); return;
}

/**
 * Decompiled function f__B4DA_16E8_0008_B258()
 *
 * @name f__B4DA_16E8_0008_B258
 * @implements B4DA:16E8:0008:B258 ()
 *
 * Called From: B4DA:16E2:001D:298B
 */
void f__B4DA_16E8_0008_B258()
{
	emu_movw(&emu_si, 0x1);
	emu_push(emu_si);
	emu_push(emu_cs);
	emu_push(0x16F0); f__B4DA_0308_0018_D7B1();
	f__B4DA_16F0_0005_0DBC();
}

/**
 * Decompiled function f__B4DA_16EB_0005_0CD8()
 *
 * @name f__B4DA_16EB_0005_0CD8
 * @implements B4DA:16EB:0005:0CD8 ()
 *
 * Called From: B4DA:16E6:001D:298B
 */
void f__B4DA_16EB_0005_0CD8()
{
	emu_push(emu_si);
	emu_push(emu_cs);
	emu_push(0x16F0); f__B4DA_0308_0018_D7B1();
	f__B4DA_16F0_0005_0DBC();
}

/**
 * Decompiled function f__B4DA_16F0_0005_0DBC()
 *
 * @name f__B4DA_16F0_0005_0DBC
 * @implements B4DA:16F0:0005:0DBC ()
 *
 * Called From: B4DA:16F0:0008:B258
 * Called From: B4DA:16F0:0005:0CD8
 */
void f__B4DA_16F0_0005_0DBC()
{
	emu_pop(&emu_cx.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__B4DA_16F5_0003_0212(); return;
}

/**
 * Decompiled function f__B4DA_16F5_0003_0212()
 *
 * @name f__B4DA_16F5_0003_0212
 * @implements B4DA:16F5:0003:0212 ()
 *
 * Called From: B4DA:16F3:0005:0DBC
 */
void f__B4DA_16F5_0003_0212()
{
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B4DA_16F8_001A_9B42()
 *
 * @name f__B4DA_16F8_001A_9B42
 * @implements B4DA:16F8:001A:9B42 ()
 *
 * Called From: B4DA:1520:000A:7F77
 * Called From: B4DA:1567:000E:F9A5
 */
void f__B4DA_16F8_001A_9B42()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x8);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_dx.x);
	f__B4DA_1758_0014_DE2A(); return;
}

/**
 * Decompiled function f__B4DA_1712_002D_8F3A()
 *
 * @name f__B4DA_1712_002D_8F3A
 * @implements B4DA:1712:002D:8F3A ()
 *
 * Called From: B4DA:175F:0014:DE2A
 * Called From: B4DA:175F:002D:CEE0
 * Called From: B4DA:175F:0017:AFAA
 * Called From: B4DA:175F:0026:6966
 */
void f__B4DA_1712_002D_8F3A()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x0));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_testb(&emu_get_memory8(emu_ds, emu_bx.x,  0x76BD), 0xE);
	if (emu_flags.zf) { f__B4DA_1755_0017_AFAA(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x0));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_testb(&emu_get_memory8(emu_ds, emu_bx.x,  0x76BD), 0x8);
	if (emu_flags.zf) { f__B4DA_1746_0026_6966(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x0));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x173F); emu_cs = 0x01F7; f__01F7_10C3_0010_906C();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_173F_002D_CEE0();
}

/**
 * Decompiled function f__B4DA_173F_002D_CEE0()
 *
 * @name f__B4DA_173F_002D_CEE0
 * @implements B4DA:173F:002D:CEE0 ()
 *
 * Called From: B4DA:173F:002D:8F3A
 */
void f__B4DA_173F_002D_CEE0()
{
	emu_pop(&emu_cx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), emu_ax.l);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x0));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), emu_ax.l);
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0x0);
	if (!emu_flags.zf) { f__B4DA_1712_002D_8F3A(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0x0);
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B4DA_1746_0026_6966()
 *
 * @name f__B4DA_1746_0026_6966
 * @implements B4DA:1746:0026:6966 ()
 *
 * Called From: B4DA:1730:002D:8F3A
 */
void f__B4DA_1746_0026_6966()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x0));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), emu_ax.l);
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0x0);
	if (!emu_flags.zf) { f__B4DA_1712_002D_8F3A(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0x0);
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B4DA_1755_0017_AFAA()
 *
 * @name f__B4DA_1755_0017_AFAA
 * @implements B4DA:1755:0017:AFAA ()
 *
 * Called From: B4DA:1720:002D:8F3A
 */
void f__B4DA_1755_0017_AFAA()
{
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0x0);
	if (!emu_flags.zf) { f__B4DA_1712_002D_8F3A(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0x0);
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B4DA_1758_0014_DE2A()
 *
 * @name f__B4DA_1758_0014_DE2A
 * @implements B4DA:1758:0014:DE2A ()
 *
 * Called From: B4DA:1710:001A:9B42
 */
void f__B4DA_1758_0014_DE2A()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0x0);
	if (!emu_flags.zf) { f__B4DA_1712_002D_8F3A(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0x0);
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B4DA_176C_000F_E971()
 *
 * @name f__B4DA_176C_000F_E971
 * @implements B4DA:176C:000F:E971 ()
 *
 * Called From: B4DA:13A1:000E:F8B9
 * Called From: B4DA:1612:000B:3AF9
 */
void f__B4DA_176C_000F_E971()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x2);
	emu_movw(&emu_ax.x, 0x4);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x177B); emu_cs = 0x2598; f__2598_0000_0017_D681();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_177B_0017_4845();
}

/**
 * Decompiled function f__B4DA_177B_0017_4845()
 *
 * @name f__B4DA_177B_0017_4845
 * @implements B4DA:177B:0017:4845 ()
 *
 * Called From: B4DA:177B:000F:E971
 */
void f__B4DA_177B_0017_4845()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_movw(&emu_ax.x, 0x28);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x140);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x1792); emu_cs = 0x2B6C; f__2B6C_0197_00CE_7027();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_1792_0023_8068();
}

/**
 * Decompiled function f__B4DA_1792_0023_8068()
 *
 * @name f__B4DA_1792_0023_8068
 * @implements B4DA:1792:0023:8068 ()
 *
 * Called From: B4DA:1792:0017:4845
 */
void f__B4DA_1792_0023_8068()
{
	emu_addws(&emu_sp, 0x8);
	emu_movw(&emu_ax.x, 0x4);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x28);
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
	emu_push(emu_cs); emu_push(0x17B5); emu_cs = 0x24D0; f__24D0_000D_0039_9224();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_17B5_0008_FE96();
}

/**
 * Decompiled function f__B4DA_17B5_0008_FE96()
 *
 * @name f__B4DA_17B5_0008_FE96
 * @implements B4DA:17B5:0008:FE96 ()
 *
 * Called From: B4DA:17B5:0023:8068
 */
void f__B4DA_17B5_0008_FE96()
{
	emu_addws(&emu_sp, 0x10);
	emu_push(emu_cs); emu_push(0x17BD); emu_cs = 0x2B6C; f__2B6C_0292_0028_CAA5();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_17BD_0022_1F6D();
}

/**
 * Decompiled function f__B4DA_17BD_0022_1F6D()
 *
 * @name f__B4DA_17BD_0022_1F6D
 * @implements B4DA:17BD:0022:1F6D ()
 *
 * Called From: B4DA:17BD:0008:FE96
 */
void f__B4DA_17BD_0022_1F6D()
{
	emu_movw(&emu_ax.x, 0x4);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x4);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x28);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x28);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0xA0);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x17DF); emu_cs = 0x24D0; f__24D0_000D_0039_9224();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_17DF_0012_C16F();
}

/**
 * Decompiled function f__B4DA_17DF_0012_C16F()
 *
 * @name f__B4DA_17DF_0012_C16F
 * @implements B4DA:17DF:0012:C16F ()
 *
 * Called From: B4DA:17DF:0022:1F6D
 */
void f__B4DA_17DF_0012_C16F()
{
	emu_addws(&emu_sp, 0x10);
	emu_movw(&emu_ax.x, 0x130);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x17F1); f__B4DA_1893_001C_E5FE();
	f__B4DA_17F1_0021_4D00();
}

/**
 * Decompiled function f__B4DA_17F1_0021_4D00()
 *
 * @name f__B4DA_17F1_0021_4D00
 * @implements B4DA:17F1:0021:4D00 ()
 *
 * Called From: B4DA:17F1:0012:C16F
 */
void f__B4DA_17F1_0021_4D00()
{
	emu_addws(&emu_sp, 0x6);
	emu_movw(&emu_ax.x, 0x32);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6D5B));
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x4);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x1812); emu_cs = 0x10E4; f__10E4_1EF1_0040_E33D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_1812_0016_7905();
}

/**
 * Decompiled function f__B4DA_1812_0016_7905()
 *
 * @name f__B4DA_1812_0016_7905
 * @implements B4DA:1812:0016:7905 ()
 *
 * Called From: B4DA:1812:0021:4D00
 */
void f__B4DA_1812_0016_7905()
{
	emu_addws(&emu_sp, 0xE);
	emu_movw(&emu_ax.x, 0x28);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x140);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x1828); emu_cs = 0x2B6C; f__2B6C_0197_00CE_7027();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_1828_0023_F08D();
}

/**
 * Decompiled function f__B4DA_1828_0023_F08D()
 *
 * @name f__B4DA_1828_0023_F08D
 * @implements B4DA:1828:0023:F08D ()
 *
 * Called From: B4DA:1828:0016:7905
 */
void f__B4DA_1828_0023_F08D()
{
	emu_addws(&emu_sp, 0x8);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x4);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x28);
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
	emu_push(emu_cs); emu_push(0x184B); emu_cs = 0x24D0; f__24D0_000D_0039_9224();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_184B_0008_FE96();
}

/**
 * Decompiled function f__B4DA_184B_0008_FE96()
 *
 * @name f__B4DA_184B_0008_FE96
 * @implements B4DA:184B:0008:FE96 ()
 *
 * Called From: B4DA:184B:0023:F08D
 */
void f__B4DA_184B_0008_FE96()
{
	emu_addws(&emu_sp, 0x10);
	emu_push(emu_cs); emu_push(0x1853); emu_cs = 0x2B6C; f__2B6C_0292_0028_CAA5();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_1853_0008_EAEA();
}

/**
 * Decompiled function f__B4DA_1853_0008_EAEA()
 *
 * @name f__B4DA_1853_0008_EAEA
 * @implements B4DA:1853:0008:EAEA ()
 *
 * Called From: B4DA:1853:0008:FE96
 */
void f__B4DA_1853_0008_EAEA()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_cs); emu_push(0x185B); emu_cs = 0x2598; f__2598_0000_0017_D681();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_185B_0005_045A();
}

/**
 * Decompiled function f__B4DA_185B_0005_045A()
 *
 * @name f__B4DA_185B_0005_045A
 * @implements B4DA:185B:0005:045A ()
 *
 * Called From: B4DA:185B:0008:EAEA
 */
void f__B4DA_185B_0005_045A()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B4DA_1860_0008_3A5E()
 *
 * @name f__B4DA_1860_0008_3A5E
 * @implements B4DA:1860:0008:3A5E ()
 *
 * Called From: B4DA:14DD:0008:F226
 * Called From: B4DA:168B:0005:16EA
 */
void f__B4DA_1860_0008_3A5E()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_cs); emu_push(0x1868); emu_cs = 0x2B6C; f__2B6C_0137_0020_17E5();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_1868_0021_4789();
}

/**
 * Decompiled function f__B4DA_1868_0021_4789()
 *
 * @name f__B4DA_1868_0021_4789
 * @implements B4DA:1868:0021:4789 ()
 *
 * Called From: B4DA:1868:0008:3A5E
 */
void f__B4DA_1868_0021_4789()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x4);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x28);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x28);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0xA0);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x1889); emu_cs = 0x24D0; f__24D0_000D_0039_9224();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_1889_0008_F13E();
}

/**
 * Decompiled function f__B4DA_1889_0008_F13E()
 *
 * @name f__B4DA_1889_0008_F13E
 * @implements B4DA:1889:0008:F13E ()
 *
 * Called From: B4DA:1889:0021:4789
 */
void f__B4DA_1889_0008_F13E()
{
	emu_addws(&emu_sp, 0x10);
	emu_push(emu_cs); emu_push(0x1891); emu_cs = 0x2B6C; f__2B6C_0169_001E_97C8();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_1891_0002_00E2();
}

/**
 * Decompiled function f__B4DA_1891_0002_00E2()
 *
 * @name f__B4DA_1891_0002_00E2
 * @implements B4DA:1891:0002:00E2 ()
 *
 * Called From: B4DA:1891:0008:F13E
 */
void f__B4DA_1891_0002_00E2()
{
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B4DA_1893_001C_E5FE()
 *
 * @name f__B4DA_1893_001C_E5FE
 * @implements B4DA:1893:001C:E5FE ()
 *
 * Called From: B4DA:0BB1:0012:F29D
 * Called From: B4DA:17EE:0012:C16F
 */
void f__B4DA_1893_001C_E5FE()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x2);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_xorw(&emu_di, emu_di);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x0);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (!emu_flags.zf) { f__B4DA_18AF_0003_073A(); return; }
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__B4DA_19E0_0006_137A(); return;
}

/**
 * Decompiled function f__B4DA_18AC_0003_078E()
 *
 * @name f__B4DA_18AC_0003_078E
 * @implements B4DA:18AC:0003:078E ()
 *
 * Called From: B4DA:19DD:0006:2064
 */
void f__B4DA_18AC_0003_078E()
{
	f__B4DA_19E0_0006_137A(); return;
}

/**
 * Decompiled function f__B4DA_18AF_0003_073A()
 *
 * @name f__B4DA_18AF_0003_073A
 * @implements B4DA:18AF:0003:073A ()
 *
 * Called From: B4DA:18A8:001C:E5FE
 */
void f__B4DA_18AF_0003_073A()
{
	f__B4DA_19CE_000C_70EA(); return;
}

/**
 * Decompiled function f__B4DA_18B2_0004_0708()
 *
 * @name f__B4DA_18B2_0004_0708
 * @implements B4DA:18B2:0004:0708 ()
 *
 * Called From: B4DA:19D7:000C:70EA
 */
void f__B4DA_18B2_0004_0708()
{
	emu_xorw(&emu_si, emu_si);
	f__B4DA_18C8_0039_05C9(); return;
}

/**
 * Decompiled function f__B4DA_18B6_000F_5A86()
 *
 * @name f__B4DA_18B6_000F_5A86
 * @implements B4DA:18B6:000F:5A86 ()
 *
 * Called From: B4DA:18F8:0039:05C9
 * Called From: B4DA:18F8:003C:4DCF
 */
void f__B4DA_18B6_000F_5A86()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_incw(&emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x0));
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x18C5); emu_cs = 0x2521; f__2521_000F_0022_2292();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_18C5_003C_4DCF();
}

/**
 * Decompiled function f__B4DA_18C5_003C_4DCF()
 *
 * @name f__B4DA_18C5_003C_4DCF
 * @implements B4DA:18C5:003C:4DCF ()
 *
 * Called From: B4DA:18C5:000F:5A86
 */
void f__B4DA_18C5_003C_4DCF()
{
	emu_pop(&emu_cx.x);
	emu_addw(&emu_si, emu_ax.x);
	emu_cmpw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0xA));
	if (!(emu_flags.sf != emu_flags.of)) { f__B4DA_18FA_0007_05E0(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0x2E);
	if (emu_flags.zf) { f__B4DA_18FA_0007_05E0(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0x21);
	if (emu_flags.zf) { f__B4DA_18FA_0007_05E0(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0x3F);
	if (emu_flags.zf) { f__B4DA_18FA_0007_05E0(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0x0);
	if (emu_flags.zf) { emu_ip = 0x18FA; emu_last_cs = 0xB4DA; emu_last_ip = 0x18EF; emu_last_length = 0x003C; emu_last_crc = 0x4DCF; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0xD);
	if (!emu_flags.zf) { f__B4DA_18B6_000F_5A86(); return; }
	emu_cmpw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0xA));
	if ((emu_flags.sf != emu_flags.of)) { f__B4DA_191C_003E_3618(); return; }
	emu_ip = 0x1913; emu_last_cs = 0xB4DA; emu_last_ip = 0x18FF; emu_last_length = 0x003C; emu_last_crc = 0x4DCF; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B4DA_18C8_0039_05C9()
 *
 * @name f__B4DA_18C8_0039_05C9
 * @implements B4DA:18C8:0039:05C9 ()
 *
 * Called From: B4DA:18B4:0004:0708
 */
void f__B4DA_18C8_0039_05C9()
{
	emu_cmpw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0xA));
	if (!(emu_flags.sf != emu_flags.of)) { emu_ip = 0x18FA; emu_last_cs = 0xB4DA; emu_last_ip = 0x18CB; emu_last_length = 0x0039; emu_last_crc = 0x05C9; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0x2E);
	if (emu_flags.zf) { emu_ip = 0x18FA; emu_last_cs = 0xB4DA; emu_last_ip = 0x18D4; emu_last_length = 0x0039; emu_last_crc = 0x05C9; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0x21);
	if (emu_flags.zf) { emu_ip = 0x18FA; emu_last_cs = 0xB4DA; emu_last_ip = 0x18DD; emu_last_length = 0x0039; emu_last_crc = 0x05C9; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0x3F);
	if (emu_flags.zf) { emu_ip = 0x18FA; emu_last_cs = 0xB4DA; emu_last_ip = 0x18E6; emu_last_length = 0x0039; emu_last_crc = 0x05C9; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0x0);
	if (emu_flags.zf) { emu_ip = 0x18FA; emu_last_cs = 0xB4DA; emu_last_ip = 0x18EF; emu_last_length = 0x0039; emu_last_crc = 0x05C9; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0xD);
	if (!emu_flags.zf) { f__B4DA_18B6_000F_5A86(); return; }
	emu_cmpw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0xA));
	if ((emu_flags.sf != emu_flags.of)) { emu_ip = 0x191C; emu_last_cs = 0xB4DA; emu_last_ip = 0x18FD; emu_last_length = 0x0039; emu_last_crc = 0x05C9; emu_call(); return; } // Jump does not resolve
	emu_ip = 0x1913; emu_last_cs = 0xB4DA; emu_last_ip = 0x18FF; emu_last_length = 0x0039; emu_last_crc = 0x05C9; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B4DA_18FA_0007_05E0()
 *
 * @name f__B4DA_18FA_0007_05E0
 * @implements B4DA:18FA:0007:05E0 ()
 *
 * Called From: B4DA:18CB:003C:4DCF
 * Called From: B4DA:18D4:003C:4DCF
 * Called From: B4DA:18DD:003C:4DCF
 * Called From: B4DA:18E6:003C:4DCF
 */
void f__B4DA_18FA_0007_05E0()
{
	emu_cmpw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0xA));
	if ((emu_flags.sf != emu_flags.of)) { f__B4DA_191C_003E_3618(); return; }
	f__B4DA_1913_0047_C583(); return;
}

/**
 * Decompiled function f__B4DA_1901_000F_1A86()
 *
 * @name f__B4DA_1901_000F_1A86
 * @implements B4DA:1901:000F:1A86 ()
 *
 * Called From: B4DA:191A:0047:C583
 * Called From: B4DA:191A:004A:0782
 */
void f__B4DA_1901_000F_1A86()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_decw(&emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x0));
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x1910); emu_cs = 0x2521; f__2521_000F_0022_2292();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_1910_004A_0782();
}

/**
 * Decompiled function f__B4DA_1910_004A_0782()
 *
 * @name f__B4DA_1910_004A_0782
 * @implements B4DA:1910:004A:0782 ()
 *
 * Called From: B4DA:1910:000F:1A86
 */
void f__B4DA_1910_004A_0782()
{
	emu_pop(&emu_cx.x);
	emu_subw(&emu_si, emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0x20);
	if (!emu_flags.zf) { f__B4DA_1901_000F_1A86(); return; }
	emu_incw(&emu_di);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0x0);
	if (emu_flags.zf) { emu_ip = 0x1953; emu_last_cs = 0xB4DA; emu_last_ip = 0x1924; emu_last_length = 0x004A; emu_last_crc = 0x0782; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0x2E);
	if (emu_flags.zf) { emu_ip = 0x1958; emu_last_cs = 0xB4DA; emu_last_ip = 0x192D; emu_last_length = 0x004A; emu_last_crc = 0x0782; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0x21);
	if (emu_flags.zf) { emu_ip = 0x1958; emu_last_cs = 0xB4DA; emu_last_ip = 0x1936; emu_last_length = 0x004A; emu_last_crc = 0x0782; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0x3F);
	if (emu_flags.zf) { emu_ip = 0x1958; emu_last_cs = 0xB4DA; emu_last_ip = 0x193F; emu_last_length = 0x004A; emu_last_crc = 0x0782; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0x0);
	if (emu_flags.zf) { emu_ip = 0x1958; emu_last_cs = 0xB4DA; emu_last_ip = 0x1948; emu_last_length = 0x004A; emu_last_crc = 0x0782; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0xD);
	if (emu_flags.zf) { emu_ip = 0x1958; emu_last_cs = 0xB4DA; emu_last_ip = 0x1951; emu_last_length = 0x004A; emu_last_crc = 0x0782; emu_call(); return; } // Jump does not resolve
	emu_cmpws(&emu_di, 0x3);
	if ((emu_flags.sf != emu_flags.of)) { f__B4DA_19B4_0015_A633(); return; }
	emu_ip = 0x195D; emu_last_cs = 0xB4DA; emu_last_ip = 0x1958; emu_last_length = 0x004A; emu_last_crc = 0x0782; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B4DA_1913_0047_C583()
 *
 * @name f__B4DA_1913_0047_C583
 * @implements B4DA:1913:0047:C583 ()
 *
 * Called From: B4DA:18FF:0007:05E0
 */
void f__B4DA_1913_0047_C583()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0x20);
	if (!emu_flags.zf) { f__B4DA_1901_000F_1A86(); return; }
	emu_incw(&emu_di);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0x0);
	if (emu_flags.zf) { emu_ip = 0x1953; emu_last_cs = 0xB4DA; emu_last_ip = 0x1924; emu_last_length = 0x0047; emu_last_crc = 0xC583; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0x2E);
	if (emu_flags.zf) { emu_ip = 0x1958; emu_last_cs = 0xB4DA; emu_last_ip = 0x192D; emu_last_length = 0x0047; emu_last_crc = 0xC583; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0x21);
	if (emu_flags.zf) { emu_ip = 0x1958; emu_last_cs = 0xB4DA; emu_last_ip = 0x1936; emu_last_length = 0x0047; emu_last_crc = 0xC583; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0x3F);
	if (emu_flags.zf) { emu_ip = 0x1958; emu_last_cs = 0xB4DA; emu_last_ip = 0x193F; emu_last_length = 0x0047; emu_last_crc = 0xC583; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0x0);
	if (emu_flags.zf) { emu_ip = 0x1958; emu_last_cs = 0xB4DA; emu_last_ip = 0x1948; emu_last_length = 0x0047; emu_last_crc = 0xC583; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0xD);
	if (emu_flags.zf) { emu_ip = 0x1958; emu_last_cs = 0xB4DA; emu_last_ip = 0x1951; emu_last_length = 0x0047; emu_last_crc = 0xC583; emu_call(); return; } // Jump does not resolve
	emu_cmpws(&emu_di, 0x3);
	if ((emu_flags.sf != emu_flags.of)) { f__B4DA_19B4_0015_A633(); return; }
	emu_ip = 0x195D; emu_last_cs = 0xB4DA; emu_last_ip = 0x1958; emu_last_length = 0x0047; emu_last_crc = 0xC583; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B4DA_191C_003E_3618()
 *
 * @name f__B4DA_191C_003E_3618
 * @implements B4DA:191C:003E:3618 ()
 *
 * Called From: B4DA:18FD:003C:4DCF
 * Called From: B4DA:18FD:0007:05E0
 */
void f__B4DA_191C_003E_3618()
{
	emu_incw(&emu_di);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0x0);
	if (emu_flags.zf) { emu_ip = 0x1953; emu_last_cs = 0xB4DA; emu_last_ip = 0x1924; emu_last_length = 0x003E; emu_last_crc = 0x3618; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0x2E);
	if (emu_flags.zf) { f__B4DA_1958_0002_03AA(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0x21);
	if (emu_flags.zf) { f__B4DA_1958_0002_03AA(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0x3F);
	if (emu_flags.zf) { f__B4DA_1958_0002_03AA(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0x0);
	if (emu_flags.zf) { emu_ip = 0x1958; emu_last_cs = 0xB4DA; emu_last_ip = 0x1948; emu_last_length = 0x003E; emu_last_crc = 0x3618; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0xD);
	if (emu_flags.zf) { f__B4DA_1958_0002_03AA(); return; }
	emu_cmpws(&emu_di, 0x3);
	if ((emu_flags.sf != emu_flags.of)) { emu_ip = 0x19B4; emu_last_cs = 0xB4DA; emu_last_ip = 0x1956; emu_last_length = 0x003E; emu_last_crc = 0x3618; emu_call(); return; } // Jump does not resolve
	emu_ip = 0x195D; emu_last_cs = 0xB4DA; emu_last_ip = 0x1958; emu_last_length = 0x003E; emu_last_crc = 0x3618; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B4DA_1958_0002_03AA()
 *
 * @name f__B4DA_1958_0002_03AA
 * @implements B4DA:1958:0002:03AA ()
 *
 * Called From: B4DA:192D:003E:3618
 * Called From: B4DA:1936:003E:3618
 * Called From: B4DA:193F:003E:3618
 * Called From: B4DA:1951:003E:3618
 */
void f__B4DA_1958_0002_03AA()
{
	f__B4DA_195D_0057_715F(); return;
}

/**
 * Decompiled function f__B4DA_195A_005A_075C()
 *
 * @name f__B4DA_195A_005A_075C
 * @implements B4DA:195A:005A:075C ()
 *
 * Called From: B4DA:196D:005A:075C
 * Called From: B4DA:1976:0057:715F
 * Called From: B4DA:197F:0057:715F
 * Called From: B4DA:1988:0057:715F
 * Called From: B4DA:199A:0057:715F
 */
void f__B4DA_195A_005A_075C()
{
	emu_incw(&emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0x0);
	if (emu_flags.zf) { f__B4DA_199C_0018_2C81(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0x20);
	if (emu_flags.zf) { f__B4DA_195A_005A_075C(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0x2E);
	if (emu_flags.zf) { emu_ip = 0x195A; emu_last_cs = 0xB4DA; emu_last_ip = 0x1976; emu_last_length = 0x005A; emu_last_crc = 0x075C; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0x21);
	if (emu_flags.zf) { emu_ip = 0x195A; emu_last_cs = 0xB4DA; emu_last_ip = 0x197F; emu_last_length = 0x005A; emu_last_crc = 0x075C; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0x3F);
	if (emu_flags.zf) { emu_ip = 0x195A; emu_last_cs = 0xB4DA; emu_last_ip = 0x1988; emu_last_length = 0x005A; emu_last_crc = 0x075C; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0x0);
	if (emu_flags.zf) { emu_ip = 0x195A; emu_last_cs = 0xB4DA; emu_last_ip = 0x1991; emu_last_length = 0x005A; emu_last_crc = 0x075C; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0xD);
	if (emu_flags.zf) { emu_ip = 0x195A; emu_last_cs = 0xB4DA; emu_last_ip = 0x199A; emu_last_length = 0x005A; emu_last_crc = 0x075C; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0x0);
	if (emu_flags.zf) { emu_ip = 0x19AD; emu_last_cs = 0xB4DA; emu_last_ip = 0x19A3; emu_last_length = 0x005A; emu_last_crc = 0x075C; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x, -0x1), 0x0);
	emu_xorw(&emu_di, emu_di);
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x2));
	f__B4DA_19CE_000C_70EA(); return;
}

/**
 * Decompiled function f__B4DA_195D_0057_715F()
 *
 * @name f__B4DA_195D_0057_715F
 * @implements B4DA:195D:0057:715F ()
 *
 * Called From: B4DA:1958:0002:03AA
 */
void f__B4DA_195D_0057_715F()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0x0);
	if (emu_flags.zf) { emu_ip = 0x199C; emu_last_cs = 0xB4DA; emu_last_ip = 0x1964; emu_last_length = 0x0057; emu_last_crc = 0x715F; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0x20);
	if (emu_flags.zf) { emu_ip = 0x195A; emu_last_cs = 0xB4DA; emu_last_ip = 0x196D; emu_last_length = 0x0057; emu_last_crc = 0x715F; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0x2E);
	if (emu_flags.zf) { f__B4DA_195A_005A_075C(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0x21);
	if (emu_flags.zf) { f__B4DA_195A_005A_075C(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0x3F);
	if (emu_flags.zf) { f__B4DA_195A_005A_075C(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0x0);
	if (emu_flags.zf) { emu_ip = 0x195A; emu_last_cs = 0xB4DA; emu_last_ip = 0x1991; emu_last_length = 0x0057; emu_last_crc = 0x715F; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0xD);
	if (emu_flags.zf) { f__B4DA_195A_005A_075C(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0x0);
	if (emu_flags.zf) { emu_ip = 0x19AD; emu_last_cs = 0xB4DA; emu_last_ip = 0x19A3; emu_last_length = 0x0057; emu_last_crc = 0x715F; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x, -0x1), 0x0);
	emu_xorw(&emu_di, emu_di);
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_ip = 0x19CE; emu_last_cs = 0xB4DA; emu_last_ip = 0x19B2; emu_last_length = 0x0057; emu_last_crc = 0x715F; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B4DA_199C_0018_2C81()
 *
 * @name f__B4DA_199C_0018_2C81
 * @implements B4DA:199C:0018:2C81 ()
 *
 * Called From: B4DA:1964:005A:075C
 */
void f__B4DA_199C_0018_2C81()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0x0);
	if (emu_flags.zf) { f__B4DA_19AD_0007_39A8(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x, -0x1), 0x0);
	emu_xorw(&emu_di, emu_di);
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_ip = 0x19CE; emu_last_cs = 0xB4DA; emu_last_ip = 0x19B2; emu_last_length = 0x0018; emu_last_crc = 0x2C81; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B4DA_19AD_0007_39A8()
 *
 * @name f__B4DA_19AD_0007_39A8
 * @implements B4DA:19AD:0007:39A8 ()
 *
 * Called From: B4DA:19A3:0018:2C81
 */
void f__B4DA_19AD_0007_39A8()
{
	emu_xorw(&emu_di, emu_di);
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x2));
	f__B4DA_19CE_000C_70EA(); return;
}

/**
 * Decompiled function f__B4DA_19B4_0015_A633()
 *
 * @name f__B4DA_19B4_0015_A633
 * @implements B4DA:19B4:0015:A633 ()
 *
 * Called From: B4DA:1956:004A:0782
 * Called From: B4DA:1956:0047:C583
 */
void f__B4DA_19B4_0015_A633()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0x0);
	if (emu_flags.zf) { emu_ip = 0x19C9; emu_last_cs = 0xB4DA; emu_last_ip = 0x19BB; emu_last_length = 0x0015; emu_last_crc = 0xA633; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0xD);
	emu_incw(&emu_get_memory16(emu_ss, emu_bp,  0x6));
	f__B4DA_19CE_000C_70EA(); return;
}

/**
 * Decompiled function f__B4DA_19CE_000C_70EA()
 *
 * @name f__B4DA_19CE_000C_70EA
 * @implements B4DA:19CE:000C:70EA ()
 *
 * Called From: B4DA:18AF:0003:073A
 * Called From: B4DA:19B2:005A:075C
 * Called From: B4DA:19B2:0007:39A8
 * Called From: B4DA:19C7:0015:A633
 */
void f__B4DA_19CE_000C_70EA()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0x0);
	if (emu_flags.zf) { f__B4DA_19DA_0006_2064(); return; }
	f__B4DA_18B2_0004_0708(); return;
}

/**
 * Decompiled function f__B4DA_19DA_0006_2064()
 *
 * @name f__B4DA_19DA_0006_2064
 * @implements B4DA:19DA:0006:2064 ()
 *
 * Called From: B4DA:19D5:000C:70EA
 */
void f__B4DA_19DA_0006_2064()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	f__B4DA_18AC_0003_078E(); return;
}

/**
 * Decompiled function f__B4DA_19E0_0006_137A()
 *
 * @name f__B4DA_19E0_0006_137A
 * @implements B4DA:19E0:0006:137A ()
 *
 * Called From: B4DA:18AC:0003:078E
 * Called From: B4DA:18AC:001C:E5FE
 */
void f__B4DA_19E0_0006_137A()
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
 * Decompiled function f__B4DA_19E6_0016_A4B0()
 *
 * @name f__B4DA_19E6_0016_A4B0
 * @implements B4DA:19E6:0016:A4B0 ()
 *
 * Called From: B4DA:0FBA:003B:3CEE
 * Called From: B4DA:0FBA:0030:3B7E
 */
void f__B4DA_19E6_0016_A4B0()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x2);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_movw(&emu_di, emu_get_memory16(emu_ss, emu_bp,  0x12));
	emu_orw(&emu_di, emu_di);
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { emu_ip = 0x19FC; emu_last_cs = 0xB4DA; emu_last_ip = 0x19F6; emu_last_length = 0x0016; emu_last_crc = 0xA4B0; emu_call(); return; } // Jump does not resolve
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__B4DA_1A76_0006_137A(); return;
}

/**
 * Decompiled function f__B4DA_1A76_0006_137A()
 *
 * @name f__B4DA_1A76_0006_137A
 * @implements B4DA:1A76:0006:137A ()
 *
 * Called From: B4DA:19FA:0016:A4B0
 */
void f__B4DA_1A76_0006_137A()
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

/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__B4ED_0000_0079_AC5D()
 *
 * @name f__B4ED_0000_0079_AC5D
 * @implements B4ED:0000:0079:AC5D ()
 *
 * Called From: 34ED:0020:0005:0000
 */
void f__B4ED_0000_0079_AC5D()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x12);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x7FA0), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x7FA2), emu_dx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x7FA4), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x7FA6), emu_dx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x12));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0x10));
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x7FA8), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x7FAA), emu_dx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x7F9E), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x6C6C), 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x7F8E), 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x7F90), 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x7F98), 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x7F52), 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x7F54), 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x7F8C), 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x7F92), 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x7F94), 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x7F96), 0xFFFF);
	emu_movw(&emu_ax.x, 0x353F);
	emu_movw(&emu_es, emu_ax.x);

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_es, 0x00,  0x6640);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_es, 0x00,  0x6642);
	emu_push(0x0079);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A60796: f__22A6_0796_000B_9035(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0xB4ED; emu_last_ip = 0x0074; emu_last_length = 0x0079; emu_last_crc = 0xAC5D;
			emu_call();
			return;
	}
	f__B4ED_0079_0019_2129();
}

/**
 * Decompiled function f__B4ED_0079_0019_2129()
 *
 * @name f__B4ED_0079_0019_2129
 * @implements B4ED:0079:0019:2129 ()
 *
 * Called From: B4ED:0079:0079:AC5D
 */
void f__B4ED_0079_0019_2129()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_movw(&emu_dx.x, 0x300);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3C34));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3C32));
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x25E8);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0092); emu_cs = 0x253D; f__253D_0000_0013_38F4();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34ED) { ovl__34ED(0xFF); }
	f__B4ED_0092_001C_7E78();
}

/**
 * Decompiled function f__B4ED_0092_001C_7E78()
 *
 * @name f__B4ED_0092_001C_7E78
 * @implements B4ED:0092:001C:7E78 ()
 *
 * Called From: B4ED:0092:0019:2129
 */
void f__B4ED_0092_001C_7E78()
{
	emu_addws(&emu_sp, 0xC);
	emu_movw(&emu_ax.x, 0x300);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3C34));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3C32));
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x6674));
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x6676));
	emu_push(emu_cs); emu_push(0x00AE); emu_cs = 0x01F7; f__01F7_28B8_0024_83C9();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34ED) { ovl__34ED(0xFF); }
	f__B4ED_00AE_000D_F799();
}

/**
 * Decompiled function f__B4ED_00AE_000D_F799()
 *
 * @name f__B4ED_00AE_000D_F799
 * @implements B4ED:00AE:000D:F799 ()
 *
 * Called From: B4ED:00AE:001C:7E78
 */
void f__B4ED_00AE_000D_F799()
{
	emu_addws(&emu_sp, 0xA);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x25F2);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x00BB); emu_cs = 0x256D; f__256D_0004_001C_9F23();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34ED) { ovl__34ED(0xFF); }
	f__B4ED_00BB_0016_C4B4();
}

/**
 * Decompiled function f__B4ED_00BB_0016_C4B4()
 *
 * @name f__B4ED_00BB_0016_C4B4
 * @implements B4ED:00BB:0016:C4B4 ()
 *
 * Called From: B4ED:00BB:000D:F799
 */
void f__B4ED_00BB_0016_C4B4()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x7F9A), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x7F9C), emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x7F9A));
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x7F9C));
	emu_push(emu_cs); emu_push(0x00D1); emu_cs = 0x2605; f__2605_000C_006D_F8B2();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34ED) { ovl__34ED(0xFF); }
	f__B4ED_00D1_000A_F29B();
}

/**
 * Decompiled function f__B4ED_00D1_000A_F29B()
 *
 * @name f__B4ED_00D1_000A_F29B
 * @implements B4ED:00D1:000A:F29B ()
 *
 * Called From: B4ED:00D1:0016:C4B4
 */
void f__B4ED_00D1_000A_F29B()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x00DB); emu_cs = 0x2598; f__2598_0000_0017_EB80();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34ED) { ovl__34ED(0xFF); }
	f__B4ED_00DB_002E_CBCB();
}

/**
 * Decompiled function f__B4ED_00DB_002E_CBCB()
 *
 * @name f__B4ED_00DB_002E_CBCB
 * @implements B4ED:00DB:002E:CBCB ()
 *
 * Called From: B4ED:00DB:000A:F29B
 */
void f__B4ED_00DB_002E_CBCB()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_ax.x, 0x12);
	emu_push(emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x7FA6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x2));
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
	emu_movw(&emu_ax.x, 0x809A);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0109); emu_cs = 0x01F7; f__01F7_28B8_0024_83C9();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34ED) { ovl__34ED(0xFF); }
	f__B4ED_0109_001A_B36D();
}

/**
 * Decompiled function f__B4ED_0109_001A_B36D()
 *
 * @name f__B4ED_0109_001A_B36D
 * @implements B4ED:0109:001A:B36D ()
 *
 * Called From: B4ED:0109:002E:CBCB
 */
void f__B4ED_0109_001A_B36D()
{
	emu_addws(&emu_sp, 0xA);
	emu_movw(&emu_ax.x, 0x12);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3C32));
	emu_addw(&emu_ax.x, 0x285);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3C34));
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0123); emu_cs = 0x01F7; f__01F7_2947_0014_02B8();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34ED) { ovl__34ED(0xFF); }
	f__B4ED_0123_0016_7423();
}

/**
 * Decompiled function f__B4ED_0123_0016_7423()
 *
 * @name f__B4ED_0123_0016_7423
 * @implements B4ED:0123:0016:7423 ()
 *
 * Called From: B4ED:0123:001A:B36D
 */
void f__B4ED_0123_0016_7423()
{
	emu_addws(&emu_sp, 0x8);
	emu_movw(&emu_ax.x, 0x12);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x809A);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x8088);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0139); emu_cs = 0x01F7; f__01F7_28B8_0024_83C9();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34ED) { ovl__34ED(0xFF); }
	f__B4ED_0139_0014_E047();
}

/**
 * Decompiled function f__B4ED_0139_0014_E047()
 *
 * @name f__B4ED_0139_0014_E047
 * @implements B4ED:0139:0014:E047 ()
 *
 * Called From: B4ED:0139:0016:7423
 */
void f__B4ED_0139_0014_E047()
{
	emu_addws(&emu_sp, 0xA);
	emu_movw(&emu_ax.x, 0x12);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x8076);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x014D); emu_cs = 0x01F7; f__01F7_2947_0014_02B8();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34ED) { ovl__34ED(0xFF); }
	f__B4ED_014D_000E_24A0();
}

/**
 * Decompiled function f__B4ED_014D_000E_24A0()
 *
 * @name f__B4ED_014D_000E_24A0
 * @implements B4ED:014D:000E:24A0 ()
 *
 * Called From: B4ED:014D:0014:E047
 */
void f__B4ED_014D_000E_24A0()
{
	emu_addws(&emu_sp, 0x8);
	emu_movb(&emu_get_memory8(emu_ss, emu_bp, -0x12), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x0);
	f__B4ED_016E_0010_2CC9(); return;
}

/**
 * Decompiled function f__B4ED_015B_0023_78FA()
 *
 * @name f__B4ED_015B_0023_78FA
 * @implements B4ED:015B:0023:78FA ()
 *
 * Called From: B4ED:0172:0010:2CC9
 * Called From: B4ED:0172:0023:78FA
 */
void f__B4ED_015B_0023_78FA()
{
	emu_movw(&emu_ax.x, emu_bp - 0x11);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ss, emu_bp, -0x2));
	emu_addb(&emu_ax.l, 0xD7);
	emu_movb(&emu_get_memory8(emu_ss, emu_bx.x,  0x0), emu_ax.l);
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x6);
	if ((emu_flags.sf != emu_flags.of)) { f__B4ED_015B_0023_78FA(); return; }
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0x12);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x017E); emu_cs = 0x259E; f__259E_0021_001A_E253();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34ED) { ovl__34ED(0xFF); }
	f__B4ED_017E_0006_EFF6();
}

/**
 * Decompiled function f__B4ED_016E_0010_2CC9()
 *
 * @name f__B4ED_016E_0010_2CC9
 * @implements B4ED:016E:0010:2CC9 ()
 *
 * Called From: B4ED:0159:000E:24A0
 */
void f__B4ED_016E_0010_2CC9()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x6);
	if ((emu_flags.sf != emu_flags.of)) { f__B4ED_015B_0023_78FA(); return; }
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0x12);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x017E); emu_cs = 0x259E; emu_ip = 0x019F; emu_last_cs = 0xB4ED; emu_last_ip = 0x0179; emu_last_length = 0x0010; emu_last_crc = 0x2CC9; emu_call(); // Jump does not resolve
	f__B4ED_017E_0006_EFF6();
}

/**
 * Decompiled function f__B4ED_017E_0006_EFF6()
 *
 * @name f__B4ED_017E_0006_EFF6
 * @implements B4ED:017E:0006:EFF6 ()
 *
 * Called From: B4ED:017E:0023:78FA
 */
void f__B4ED_017E_0006_EFF6()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B4ED_0184_0010_CD7E()
 *
 * @name f__B4ED_0184_0010_CD7E
 * @implements B4ED:0184:0010:CD7E ()
 *
 * Called From: 34ED:0025:0005:0000
 */
void f__B4ED_0184_0010_CD7E()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x7F9A));
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x7F9C));
	emu_push(emu_cs); emu_push(0x0194); emu_cs = 0x23E1; f__23E1_01C2_0011_24E8();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34ED) { ovl__34ED(0xFF); }
	f__B4ED_0194_001D_5E25();
}

/**
 * Decompiled function f__B4ED_0194_001D_5E25()
 *
 * @name f__B4ED_0194_001D_5E25
 * @implements B4ED:0194:001D:5E25 ()
 *
 * Called From: B4ED:0194:0010:CD7E
 */
void f__B4ED_0194_001D_5E25()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_ax.x, 0x1);
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
	emu_push(emu_cs); emu_push(0x01B1); emu_cs = 0x10E4; f__10E4_1EF1_0040_01F8();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34ED) { ovl__34ED(0xFF); }
	f__B4ED_01B1_001E_B19D();
}

/**
 * Decompiled function f__B4ED_01B1_001E_B19D()
 *
 * @name f__B4ED_01B1_001E_B19D
 * @implements B4ED:01B1:001E:B19D ()
 *
 * Called From: B4ED:01B1:001D:5E25
 */
void f__B4ED_01B1_001E_B19D()
{
	emu_addws(&emu_sp, 0xE);
	emu_movw(&emu_ax.x, 0x2);
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
	emu_push(emu_cs); emu_push(0x01CF); emu_cs = 0x10E4; f__10E4_1EF1_0040_01F8();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34ED) { ovl__34ED(0xFF); }
	f__B4ED_01CF_0014_B1F3();
}

/**
 * Decompiled function f__B4ED_01CF_0014_B1F3()
 *
 * @name f__B4ED_01CF_0014_B1F3
 * @implements B4ED:01CF:0014:B1F3 ()
 *
 * Called From: B4ED:01CF:001E:B19D
 */
void f__B4ED_01CF_0014_B1F3()
{
	emu_addws(&emu_sp, 0xE);
	emu_movw(&emu_ax.x, 0x3C);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3C38));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3C36));
	emu_push(emu_cs); emu_push(0x01E3); emu_cs = 0x259E; f__259E_0006_0016_858A();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34ED) { ovl__34ED(0xFF); }
	f__B4ED_01E3_000B_F574();
}

/**
 * Decompiled function f__B4ED_01E3_000B_F574()
 *
 * @name f__B4ED_01E3_000B_F574
 * @implements B4ED:01E3:000B:F574 ()
 *
 * Called From: B4ED:01E3:0014:B1F3
 */
void f__B4ED_01E3_000B_F574()
{
	emu_addws(&emu_sp, 0x6);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x01EE); emu_cs = 0x24DA; f__24DA_0004_000E_FD1B();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34ED) { ovl__34ED(0xFF); }
	f__B4ED_01EE_0006_8488();
}

/**
 * Decompiled function f__B4ED_01EE_0006_8488()
 *
 * @name f__B4ED_01EE_0006_8488
 * @implements B4ED:01EE:0006:8488 ()
 *
 * Called From: B4ED:01EE:000B:F574
 */
void f__B4ED_01EE_0006_8488()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_cs); emu_push(0x01F4); emu_cs = 0x29E8; f__29E8_073F_000E_6816();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34ED) { ovl__34ED(0xFF); }
	f__B4ED_01F4_0009_01B9();
}

/**
 * Decompiled function f__B4ED_01F4_0009_01B9()
 *
 * @name f__B4ED_01F4_0009_01B9
 * @implements B4ED:01F4:0009:01B9 ()
 *
 * Called From: B4ED:01F4:0006:8488
 */
void f__B4ED_01F4_0009_01B9()
{
	emu_movw(&emu_ax.x, 0x7);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x01FD); emu_cs = 0x24DA; f__24DA_002D_0010_3EB2();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34ED) { ovl__34ED(0xFF); }
	f__B4ED_01FD_0003_2EB7();
}

/**
 * Decompiled function f__B4ED_01FD_0003_2EB7()
 *
 * @name f__B4ED_01FD_0003_2EB7
 * @implements B4ED:01FD:0003:2EB7 ()
 *
 * Called From: B4ED:01FD:0009:01B9
 */
void f__B4ED_01FD_0003_2EB7()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B4ED_0200_000F_1FF4()
 *
 * @name f__B4ED_0200_000F_1FF4
 * @implements B4ED:0200:000F:1FF4 ()
 *
 * Called From: 34ED:002A:0005:0000
 */
void f__B4ED_0200_000F_1FF4()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x24);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movb(&emu_get_memory8(emu_ss, emu_bp, -0x1), 0x0);
	f__B4ED_073F_000E_5398(); return;
}

/**
 * Decompiled function f__B4ED_020F_0044_6A12()
 *
 * @name f__B4ED_020F_0044_6A12
 * @implements B4ED:020F:0044:6A12 ()
 *
 * Called From: B4ED:074A:000E:5398
 * Called From: B4ED:074A:0022:D446
 */
void f__B4ED_020F_0044_6A12()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x7FA2));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x4));
	emu_movb(&emu_ax.h, 0x0);
	emu_movw(&emu_dx.x, 0x6);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_cwd();
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00,  0x76AE));
	emu_movw(&emu_cx.x, emu_get_memory16(emu_ds, 0x00,  0x76AC));
	emu_addw(&emu_cx.x, emu_ax.x);
	emu_adcw(&emu_bx.x, emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), emu_bx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), emu_cx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_addws(&emu_dx.x, 0x1E);
	emu_adcw(&emu_ax.x, 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x12), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x14), emu_dx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x7FA2));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0x6), 0x20);
	if (emu_flags.zf) { f__B4ED_0253_0016_DA6E(); return; }
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__B4ED_0256_0013_3AAC(); return;
}

/**
 * Decompiled function f__B4ED_0253_0016_DA6E()
 *
 * @name f__B4ED_0253_0016_DA6E
 * @implements B4ED:0253:0016:DA6E ()
 *
 * Called From: B4ED:024D:0044:6A12
 */
void f__B4ED_0253_0016_DA6E()
{
	emu_movw(&emu_ax.x, 0x18);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x7FA2));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0x6), 0x20);
	if (emu_flags.zf) { f__B4ED_0269_002F_EAB8(); return; }
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_ip = 0x026C; emu_last_cs = 0xB4ED; emu_last_ip = 0x0267; emu_last_length = 0x0016; emu_last_crc = 0xDA6E; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B4ED_0256_0013_3AAC()
 *
 * @name f__B4ED_0256_0013_3AAC
 * @implements B4ED:0256:0013:3AAC ()
 *
 * Called From: B4ED:0251:0044:6A12
 */
void f__B4ED_0256_0013_3AAC()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x7FA2));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0x6), 0x20);
	if (emu_flags.zf) { emu_ip = 0x0269; emu_last_cs = 0xB4ED; emu_last_ip = 0x0263; emu_last_length = 0x0013; emu_last_crc = 0x3AAC; emu_call(); return; } // Jump does not resolve
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__B4ED_026C_002C_9A99(); return;
}

/**
 * Decompiled function f__B4ED_0269_002F_EAB8()
 *
 * @name f__B4ED_0269_002F_EAB8
 * @implements B4ED:0269:002F:EAB8 ()
 *
 * Called From: B4ED:0263:0016:DA6E
 */
void f__B4ED_0269_002F_EAB8()
{
	emu_movw(&emu_ax.x, 0x8);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x7FA2));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x6));
	emu_andw(&emu_ax.x, 0x3);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x1E), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x7F98), 0x0);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x1E), 0x0);
	if (!emu_flags.zf) { f__B4ED_0298_0019_37B7(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), 0x0);
	emu_xorw(&emu_si, emu_si);
	f__B4ED_0375_0019_B984(); return;
}

/**
 * Decompiled function f__B4ED_026C_002C_9A99()
 *
 * @name f__B4ED_026C_002C_9A99
 * @implements B4ED:026C:002C:9A99 ()
 *
 * Called From: B4ED:0267:0013:3AAC
 */
void f__B4ED_026C_002C_9A99()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x7FA2));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x6));
	emu_andw(&emu_ax.x, 0x3);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x1E), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x7F98), 0x0);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x1E), 0x0);
	if (!emu_flags.zf) { f__B4ED_0298_0019_37B7(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), 0x0);
	emu_xorw(&emu_si, emu_si);
	emu_ip = 0x0375; emu_last_cs = 0xB4ED; emu_last_ip = 0x0295; emu_last_length = 0x002C; emu_last_crc = 0x9A99; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B4ED_0298_0019_37B7()
 *
 * @name f__B4ED_0298_0019_37B7
 * @implements B4ED:0298:0019:37B7 ()
 *
 * Called From: B4ED:0287:002C:9A99
 * Called From: B4ED:0287:002F:EAB8
 */
void f__B4ED_0298_0019_37B7()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x1E), 0x3);
	if (!emu_flags.zf) { f__B4ED_02B1_0025_710A(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x7FA2));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x5));
	emu_movb(&emu_ax.h, 0x0);
	emu_movw(&emu_si, emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x20), 0x1);
	emu_ip = 0x02C1; emu_last_cs = 0xB4ED; emu_last_ip = 0x02AF; emu_last_length = 0x0019; emu_last_crc = 0x37B7; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B4ED_02B1_0025_710A()
 *
 * @name f__B4ED_02B1_0025_710A
 * @implements B4ED:02B1:0025:710A ()
 *
 * Called From: B4ED:029C:0019:37B7
 */
void f__B4ED_02B1_0025_710A()
{
	emu_xorw(&emu_si, emu_si);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x7FA2));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x6));
	emu_andw(&emu_ax.x, 0x40);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x20), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x7FA2));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0x6), 0x480);
	if (emu_flags.zf) { f__B4ED_0303_0009_C506(); return; }
	emu_movw(&emu_ax.x, 0x3);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x02D6); emu_cs = 0x24DA; f__24DA_0004_000E_FD1B();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34ED) { ovl__34ED(0xFF); }
	f__B4ED_02D6_000A_D546();
}

/**
 * Decompiled function f__B4ED_02D6_000A_D546()
 *
 * @name f__B4ED_02D6_000A_D546
 * @implements B4ED:02D6:000A:D546 ()
 *
 * Called From: B4ED:02D6:0025:710A
 */
void f__B4ED_02D6_000A_D546()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_ax.x, 0x5);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x02E0); emu_cs = 0x252E; f__252E_0001_0018_08B3();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34ED) { ovl__34ED(0xFF); }
	f__B4ED_02E0_0023_E899();
}

/**
 * Decompiled function f__B4ED_02E0_0023_E899()
 *
 * @name f__B4ED_02E0_0023_E899
 * @implements B4ED:02E0:0023:E899 ()
 *
 * Called From: B4ED:02E0:000A:D546
 */
void f__B4ED_02E0_0023_E899()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x6CE9));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x6CE7));
	emu_addw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x6CEF));
	emu_adcw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x6CF1));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x22), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x24), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x20), 0x0);
	f__B4ED_0330_001A_CFD9(); return;
}

/**
 * Decompiled function f__B4ED_0303_0009_C506()
 *
 * @name f__B4ED_0303_0009_C506
 * @implements B4ED:0303:0009:C506 ()
 *
 * Called From: B4ED:02CB:0025:710A
 */
void f__B4ED_0303_0009_C506()
{
	emu_movw(&emu_ax.x, 0x3);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x030C); emu_cs = 0x252E; f__252E_0001_0018_08B3();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34ED) { ovl__34ED(0xFF); }
	f__B4ED_030C_003E_5B9C();
}

/**
 * Decompiled function f__B4ED_030C_003E_5B9C()
 *
 * @name f__B4ED_030C_003E_5B9C
 * @implements B4ED:030C:003E:5B9C ()
 *
 * Called From: B4ED:030C:0009:C506
 */
void f__B4ED_030C_003E_5B9C()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x6CE1));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x6CDF));
	emu_addw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x6CE7));
	emu_adcw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x6CE9));
	emu_addw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x6CEF));
	emu_adcw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x6CF1));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x22), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x24), emu_dx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x7FA2));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x2));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x25FC);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x9939);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x034A); emu_cs = 0x01F7; f__01F7_378D_0020_0F64();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34ED) { ovl__34ED(0xFF); }
	f__B4ED_034A_0022_2E92();
}

/**
 * Decompiled function f__B4ED_0330_001A_CFD9()
 *
 * @name f__B4ED_0330_001A_CFD9
 * @implements B4ED:0330:001A:CFD9 ()
 *
 * Called From: B4ED:0301:0023:E899
 */
void f__B4ED_0330_001A_CFD9()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x7FA2));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x2));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x25FC);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x9939);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x034A); emu_cs = 0x01F7; f__01F7_378D_0020_0F64();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34ED) { ovl__34ED(0xFF); }
	f__B4ED_034A_0022_2E92();
}

/**
 * Decompiled function f__B4ED_034A_0022_2E92()
 *
 * @name f__B4ED_034A_0022_2E92
 * @implements B4ED:034A:0022:2E92 ()
 *
 * Called From: B4ED:034A:003E:5B9C
 * Called From: B4ED:034A:001A:CFD9
 */
void f__B4ED_034A_0022_2E92()
{
	emu_addws(&emu_sp, 0xC);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x20));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x22));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x24));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x9939);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x036C); emu_cs = 0x352A; ovl__352A(0);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34ED) { ovl__34ED(0xFF); }
	f__B4ED_036C_0022_4D70();
}

/**
 * Decompiled function f__B4ED_036C_0022_4D70()
 *
 * @name f__B4ED_036C_0022_4D70
 * @implements B4ED:036C:0022:4D70 ()
 *
 * Called From: B4ED:036C:0022:2E92
 */
void f__B4ED_036C_0022_4D70()
{
	emu_addws(&emu_sp, 0x12);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_ax.x);
	emu_xorw(&emu_di, emu_di);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x7FA2));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0x6), 0x8);
	if (emu_flags.zf) { f__B4ED_038E_002A_7906(); return; }
	emu_subws(&emu_get_memory16(emu_ss, emu_bp, -0x10), 0x2D);
	emu_sbbws(&emu_get_memory16(emu_ss, emu_bp, -0xE), 0x0);
	emu_incw(&emu_di);
	f__B4ED_03A3_0015_B9E5(); return;
}

/**
 * Decompiled function f__B4ED_0375_0019_B984()
 *
 * @name f__B4ED_0375_0019_B984
 * @implements B4ED:0375:0019:B984 ()
 *
 * Called From: B4ED:0295:002F:EAB8
 */
void f__B4ED_0375_0019_B984()
{
	emu_xorw(&emu_di, emu_di);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x7FA2));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0x6), 0x8);
	if (emu_flags.zf) { f__B4ED_038E_002A_7906(); return; }
	emu_subws(&emu_get_memory16(emu_ss, emu_bp, -0x10), 0x2D);
	emu_sbbws(&emu_get_memory16(emu_ss, emu_bp, -0xE), 0x0);
	emu_incw(&emu_di);
	f__B4ED_03A3_0015_B9E5(); return;
}

/**
 * Decompiled function f__B4ED_038E_002A_7906()
 *
 * @name f__B4ED_038E_002A_7906
 * @implements B4ED:038E:002A:7906 ()
 *
 * Called From: B4ED:0381:0019:B984
 * Called From: B4ED:0381:0022:4D70
 */
void f__B4ED_038E_002A_7906()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x7FA2));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0x6), 0x10);
	if (emu_flags.zf) { f__B4ED_03A3_0015_B9E5(); return; }
	emu_subws(&emu_get_memory16(emu_ss, emu_bp, -0x10), 0xF);
	emu_sbbws(&emu_get_memory16(emu_ss, emu_bp, -0xE), 0x0);
	emu_incw(&emu_di);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x7FA2));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0x6), 0x4);
	if (emu_flags.zf) { f__B4ED_0408_000F_7430(); return; }
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ss, emu_bp, -0x1));
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x03B8); emu_ip = 0x07B6; emu_last_cs = 0xB4ED; emu_last_ip = 0x03B5; emu_last_length = 0x002A; emu_last_crc = 0x7906; emu_call(); // Jump does not resolve
	f__B4ED_03B8_001C_684D();
}

/**
 * Decompiled function f__B4ED_03A3_0015_B9E5()
 *
 * @name f__B4ED_03A3_0015_B9E5
 * @implements B4ED:03A3:0015:B9E5 ()
 *
 * Called From: B4ED:038C:0019:B984
 * Called From: B4ED:038C:0022:4D70
 * Called From: B4ED:0398:002A:7906
 */
void f__B4ED_03A3_0015_B9E5()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x7FA2));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0x6), 0x4);
	if (emu_flags.zf) { f__B4ED_0408_000F_7430(); return; }
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ss, emu_bp, -0x1));
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x03B8); f__B4ED_07B6_0013_1343();
	f__B4ED_03B8_001C_684D();
}

/**
 * Decompiled function f__B4ED_03B8_001C_684D()
 *
 * @name f__B4ED_03B8_001C_684D
 * @implements B4ED:03B8:001C:684D ()
 *
 * Called From: B4ED:03B8:0015:B9E5
 */
void f__B4ED_03B8_001C_684D()
{
	emu_pop(&emu_cx.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movw(&emu_ax.x, emu_si);
	emu_incw(&emu_si);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_cs); emu_push(0x03D4); emu_cs = 0x352A; ovl__352A(2);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34ED) { ovl__34ED(0xFF); }
	f__B4ED_03D4_000C_7044();
}

/**
 * Decompiled function f__B4ED_03D4_000C_7044()
 *
 * @name f__B4ED_03D4_000C_7044
 * @implements B4ED:03D4:000C:7044 ()
 *
 * Called From: B4ED:03D4:001C:684D
 */
void f__B4ED_03D4_000C_7044()
{
	emu_addws(&emu_sp, 0xE);
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x03E0); f__B4ED_0AA5_0010_6B85();
	f__B4ED_03E0_000E_4927();
}

/**
 * Decompiled function f__B4ED_03E0_000E_4927()
 *
 * @name f__B4ED_03E0_000E_4927
 * @implements B4ED:03E0:000E:4927 ()
 *
 * Called From: B4ED:03E0:000C:7044
 */
void f__B4ED_03E0_000E_4927()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3C34));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3C32));
	emu_push(emu_cs);
	emu_push(0x03EE); f__B4ED_0BD4_001B_FFBA();
	f__B4ED_03EE_0013_D256();
}

/**
 * Decompiled function f__B4ED_03EE_0013_D256()
 *
 * @name f__B4ED_03EE_0013_D256
 * @implements B4ED:03EE:0013:D256 ()
 *
 * Called From: B4ED:03EE:000E:4927
 */
void f__B4ED_03EE_0013_D256()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_ax.x, 0x2D);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3C34));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3C32));
	emu_push(emu_cs); emu_push(0x0401); emu_cs = 0x259E; f__259E_0006_0016_858A();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34ED) { ovl__34ED(0xFF); }
	f__B4ED_0401_0007_7C39();
}

/**
 * Decompiled function f__B4ED_0401_0007_7C39()
 *
 * @name f__B4ED_0401_0007_7C39
 * @implements B4ED:0401:0007:7C39 ()
 *
 * Called From: B4ED:0401:0013:D256
 */
void f__B4ED_0401_0007_7C39()
{
	emu_addws(&emu_sp, 0x6);
	emu_incw(&emu_di);
	f__B4ED_04A8_002E_E9B3(); return;
}

/**
 * Decompiled function f__B4ED_0408_000F_7430()
 *
 * @name f__B4ED_0408_000F_7430
 * @implements B4ED:0408:000F:7430 ()
 *
 * Called From: B4ED:03AD:0015:B9E5
 * Called From: B4ED:03AD:002A:7906
 */
void f__B4ED_0408_000F_7430()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x7FA2));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0x6), 0x480);
	if (!emu_flags.zf) { f__B4ED_0417_0009_7F9F(); return; }
	f__B4ED_04A8_002E_E9B3(); return;
}

/**
 * Decompiled function f__B4ED_0417_0009_7F9F()
 *
 * @name f__B4ED_0417_0009_7F9F
 * @implements B4ED:0417:0009:7F9F ()
 *
 * Called From: B4ED:0412:000F:7430
 */
void f__B4ED_0417_0009_7F9F()
{
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ss, emu_bp, -0x1));
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x0420); f__B4ED_07B6_0013_1343();
	f__B4ED_0420_001D_D205();
}

/**
 * Decompiled function f__B4ED_0420_001D_D205()
 *
 * @name f__B4ED_0420_001D_D205
 * @implements B4ED:0420:001D:D205 ()
 *
 * Called From: B4ED:0420:0009:7F9F
 */
void f__B4ED_0420_001D_D205()
{
	emu_pop(&emu_cx.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movw(&emu_ax.x, emu_si);
	emu_incw(&emu_si);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_cs); emu_push(0x043D); emu_cs = 0x352A; ovl__352A(2);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34ED) { ovl__34ED(0xFF); }
	f__B4ED_043D_001B_44DE();
}

/**
 * Decompiled function f__B4ED_043D_001B_44DE()
 *
 * @name f__B4ED_043D_001B_44DE
 * @implements B4ED:043D:001B:44DE ()
 *
 * Called From: B4ED:043D:001D:D205
 */
void f__B4ED_043D_001B_44DE()
{
	emu_addws(&emu_sp, 0xE);
	emu_incw(&emu_di);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x7FA2));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x6));
	emu_andw(&emu_ax.x, 0x480);
	emu_cmpw(&emu_ax.x, 0x80);
	if (emu_flags.zf) { f__B4ED_0458_0023_A014(); return; }
	emu_cmpw(&emu_ax.x, 0x400);
	if (emu_flags.zf) { f__B4ED_0480_0024_9E14(); return; }
	emu_ip = 0x04A6; emu_last_cs = 0xB4ED; emu_last_ip = 0x0456; emu_last_length = 0x001B; emu_last_crc = 0x44DE; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B4ED_0458_0023_A014()
 *
 * @name f__B4ED_0458_0023_A014
 * @implements B4ED:0458:0023:A014 ()
 *
 * Called From: B4ED:044F:001B:44DE
 */
void f__B4ED_0458_0023_A014()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
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
	emu_push(emu_cs); emu_push(0x047B); emu_cs = 0x3488; ovl__3488(0);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34ED) { ovl__34ED(0xFF); }
	f__B4ED_047B_0005_922E();
}

/**
 * Decompiled function f__B4ED_047B_0005_922E()
 *
 * @name f__B4ED_047B_0005_922E
 * @implements B4ED:047B:0005:922E ()
 *
 * Called From: B4ED:047B:0023:A014
 * Called From: B4ED:04A4:0002:AABA
 */
void f__B4ED_047B_0005_922E()
{
	emu_addws(&emu_sp, 0x10);
	f__B4ED_04A8_002E_E9B3(); return;
}

/**
 * Decompiled function f__B4ED_0480_0024_9E14()
 *
 * @name f__B4ED_0480_0024_9E14
 * @implements B4ED:0480:0024:9E14 ()
 *
 * Called From: B4ED:0454:001B:44DE
 */
void f__B4ED_0480_0024_9E14()
{
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
	emu_push(emu_cs); emu_push(0x04A4); emu_cs = 0x2C17; f__2C17_000C_002F_3016();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34ED) { ovl__34ED(0xFF); }
	f__B4ED_04A4_0002_AABA();
}

/**
 * Decompiled function f__B4ED_04A4_0002_AABA()
 *
 * @name f__B4ED_04A4_0002_AABA
 * @implements B4ED:04A4:0002:AABA ()
 *
 * Called From: B4ED:04A4:0024:9E14
 */
void f__B4ED_04A4_0002_AABA()
{
	f__B4ED_047B_0005_922E(); return;
}

/**
 * Decompiled function f__B4ED_04A8_002E_E9B3()
 *
 * @name f__B4ED_04A8_002E_E9B3
 * @implements B4ED:04A8:002E:E9B3 ()
 *
 * Called From: B4ED:0405:0007:7C39
 * Called From: B4ED:0414:000F:7430
 * Called From: B4ED:047E:0005:922E
 */
void f__B4ED_04A8_002E_E9B3()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_subw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76AC));
	emu_sbbw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76AE));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x1A), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x1C), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x16), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x18), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x1);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp, -0x1E));
	emu_cmpws(&emu_bx.x, 0x3);
	if ((emu_flags.cf || emu_flags.zf)) { f__B4ED_04D6_0007_2BAB(); return; }
	emu_ip = 0x0574; emu_last_cs = 0xB4ED; emu_last_ip = 0x04D3; emu_last_length = 0x002E; emu_last_crc = 0xE9B3; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B4ED_04D6_0007_2BAB()
 *
 * @name f__B4ED_04D6_0007_2BAB
 * @implements B4ED:04D6:0007:2BAB ()
 *
 * Called From: B4ED:04D1:002E:E9B3
 */
void f__B4ED_04D6_0007_2BAB()
{
	emu_shlw(&emu_bx.x, 0x1);

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_cs, emu_bx.x,  0x755);
	switch (emu_ip) {
		case 0x04DD: f__B4ED_04DD_0020_1485(); return;
		case 0x0506: f__B4ED_0506_000B_BC53(); return;
		case 0x0522: f__B4ED_0522_000B_BC53(); return;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0xB4ED; emu_last_ip = 0x04D8; emu_last_length = 0x0007; emu_last_crc = 0x2BAB;
			emu_call();
			return;
	}
}

/**
 * Decompiled function f__B4ED_04DD_0020_1485()
 *
 * @name f__B4ED_04DD_0020_1485
 * @implements B4ED:04DD:0020:1485 ()
 *
 * Called From: B4ED:04D8:0007:2BAB
 */
void f__B4ED_04DD_0020_1485()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x7FA2));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x5));
	emu_movb(&emu_ax.h, 0x0);
	emu_subw(&emu_ax.x, emu_di);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cwd();
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x1A));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x1C));
	emu_push(emu_cs); emu_push(0x04FD); emu_cs = 0x01F7; f__01F7_04E0_0004_E219();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34ED) { ovl__34ED(0xFF); }
	f__B4ED_04FD_0009_ACAF();
}

/**
 * Decompiled function f__B4ED_04EF_000E_C186()
 *
 * @name f__B4ED_04EF_000E_C186
 * @implements B4ED:04EF:000E:C186 ()
 *
 * Called From: B4ED:0520:0011:D9C8
 */
void f__B4ED_04EF_000E_C186()
{
	emu_cwd();
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x1A));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x1C));
	emu_push(emu_cs); emu_push(0x04FD); emu_cs = 0x01F7; f__01F7_04E0_0004_E219();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34ED) { ovl__34ED(0xFF); }
	f__B4ED_04FD_0009_ACAF();
}

/**
 * Decompiled function f__B4ED_04FD_0009_ACAF()
 *
 * @name f__B4ED_04FD_0009_ACAF
 * @implements B4ED:04FD:0009:ACAF ()
 *
 * Called From: B4ED:04FD:0020:1485
 * Called From: B4ED:04FD:000E:C186
 */
void f__B4ED_04FD_0009_ACAF()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x16), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x18), emu_ax.x);
	f__B4ED_0595_0003_5D04(); return;
}

/**
 * Decompiled function f__B4ED_0506_000B_BC53()
 *
 * @name f__B4ED_0506_000B_BC53
 * @implements B4ED:0506:000B:BC53 ()
 *
 * Called From: B4ED:04D8:0007:2BAB
 */
void f__B4ED_0506_000B_BC53()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_cs); emu_push(0x0511); emu_cs = 0x352A; ovl__352A(3);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34ED) { ovl__34ED(0xFF); }
	f__B4ED_0511_0011_D9C8();
}

/**
 * Decompiled function f__B4ED_0511_0011_D9C8()
 *
 * @name f__B4ED_0511_0011_D9C8
 * @implements B4ED:0511:0011:D9C8 ()
 *
 * Called From: B4ED:0511:000B:BC53
 */
void f__B4ED_0511_0011_D9C8()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x7FA2));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x5));
	emu_movb(&emu_ax.h, 0x0);
	f__B4ED_04EF_000E_C186(); return;
}

/**
 * Decompiled function f__B4ED_0522_000B_BC53()
 *
 * @name f__B4ED_0522_000B_BC53
 * @implements B4ED:0522:000B:BC53 ()
 *
 * Called From: B4ED:04D8:0007:2BAB
 */
void f__B4ED_0522_000B_BC53()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_cs); emu_push(0x052D); emu_cs = 0x352A; ovl__352A(3);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34ED) { ovl__34ED(0xFF); }
	f__B4ED_052D_0018_173C();
}

/**
 * Decompiled function f__B4ED_052D_0018_173C()
 *
 * @name f__B4ED_052D_0018_173C
 * @implements B4ED:052D:0018:173C ()
 *
 * Called From: B4ED:052D:000B:BC53
 */
void f__B4ED_052D_0018_173C()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_subw(&emu_ax.x, emu_di);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cwd();
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x1A));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x1C));
	emu_push(emu_cs); emu_push(0x0545); emu_cs = 0x01F7; f__01F7_04E0_0004_E219();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34ED) { ovl__34ED(0xFF); }
	f__B4ED_0545_0014_8E47();
}

/**
 * Decompiled function f__B4ED_0545_0014_8E47()
 *
 * @name f__B4ED_0545_0014_8E47
 * @implements B4ED:0545:0014:8E47 ()
 *
 * Called From: B4ED:0545:0018:173C
 */
void f__B4ED_0545_0014_8E47()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x16), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x18), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x16));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x18));
	emu_subw(&emu_get_memory16(emu_ss, emu_bp, -0x10), emu_dx.x);
	emu_sbbw(&emu_get_memory16(emu_ss, emu_bp, -0xE), emu_ax.x);
	f__B4ED_0595_0003_5D04(); return;
}

/**
 * Decompiled function f__B4ED_0595_0003_5D04()
 *
 * @name f__B4ED_0595_0003_5D04
 * @implements B4ED:0595:0003:5D04 ()
 *
 * Called From: B4ED:0503:0009:ACAF
 * Called From: B4ED:0557:0014:8E47
 */
void f__B4ED_0595_0003_5D04()
{
	f__B4ED_0629_000F_7DAC(); return;
}

/**
 * Decompiled function f__B4ED_0598_0016_2DF9()
 *
 * @name f__B4ED_0598_0016_2DF9
 * @implements B4ED:0598:0016:2DF9 ()
 *
 * Called From: B4ED:0640:000B:FC0F
 */
void f__B4ED_0598_0016_2DF9()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x16));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x18));
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x76B6), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x76B4), emu_dx.x);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ss, emu_bp, -0x1));
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x05AE); f__B4ED_07B6_0013_1343();
	f__B4ED_05AE_001C_684D();
}

/**
 * Decompiled function f__B4ED_05AE_001C_684D()
 *
 * @name f__B4ED_05AE_001C_684D
 * @implements B4ED:05AE:001C:684D ()
 *
 * Called From: B4ED:05AE:0016:2DF9
 */
void f__B4ED_05AE_001C_684D()
{
	emu_pop(&emu_cx.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movw(&emu_ax.x, emu_si);
	emu_incw(&emu_si);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_cs); emu_push(0x05CA); emu_cs = 0x352A; ovl__352A(2);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34ED) { ovl__34ED(0xFF); }
	f__B4ED_05CA_0012_D933();
}

/**
 * Decompiled function f__B4ED_05CA_0012_D933()
 *
 * @name f__B4ED_05CA_0012_D933
 * @implements B4ED:05CA:0012:D933 ()
 *
 * Called From: B4ED:05CA:001C:684D
 */
void f__B4ED_05CA_0012_D933()
{
	emu_addws(&emu_sp, 0xE);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x1E), 0x1);
	if (!emu_flags.zf) { f__B4ED_05DC_000C_1D13(); return; }
	emu_cmpw(&emu_si, emu_get_memory16(emu_ss, emu_bp, -0x4));
	if (!emu_flags.zf) { f__B4ED_05DC_000C_1D13(); return; }
	emu_xorw(&emu_si, emu_si);
	f__B4ED_05E3_0005_20AE(); return;
}

/**
 * Decompiled function f__B4ED_05DC_000C_1D13()
 *
 * @name f__B4ED_05DC_000C_1D13
 * @implements B4ED:05DC:000C:1D13 ()
 *
 * Called From: B4ED:05D1:0012:D933
 * Called From: B4ED:05D6:0012:D933
 */
void f__B4ED_05DC_000C_1D13()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x1E), 0x3);
	if (!emu_flags.zf) { f__B4ED_05E3_0005_20AE(); return; }
	emu_decw(&emu_si);
	emu_push(emu_cs); emu_push(0x05E8); emu_cs = 0x29E8; emu_ip = 0x0C2B; emu_last_cs = 0xB4ED; emu_last_ip = 0x05E3; emu_last_length = 0x000C; emu_last_crc = 0x1D13; emu_call(); // Jump does not resolve
	f__B4ED_05E8_0016_6423();
}

/**
 * Decompiled function f__B4ED_05E3_0005_20AE()
 *
 * @name f__B4ED_05E3_0005_20AE
 * @implements B4ED:05E3:0005:20AE ()
 *
 * Called From: B4ED:05DA:0012:D933
 * Called From: B4ED:05E0:000C:1D13
 */
void f__B4ED_05E3_0005_20AE()
{
	emu_push(emu_cs); emu_push(0x05E8); emu_cs = 0x29E8; f__29E8_0643_0008_ED98();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34ED) { ovl__34ED(0xFF); }
	f__B4ED_05E8_0016_6423();
}

/**
 * Decompiled function f__B4ED_05E8_0016_6423()
 *
 * @name f__B4ED_05E8_0016_6423
 * @implements B4ED:05E8:0016:6423 ()
 *
 * Called From: B4ED:05E8:0005:20AE
 */
void f__B4ED_05E8_0016_6423()
{
	emu_orw(&emu_ax.x, emu_ax.x);
	if (emu_flags.zf) { f__B4ED_0603_0008_0927(); return; }
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x37B4), 0x0);
	if (emu_flags.zf) { f__B4ED_0603_0008_0927(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_cs); emu_push(0x05FE); emu_cs = 0x352A; ovl__352A(1);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34ED) { ovl__34ED(0xFF); }
	f__B4ED_05FE_0005_8F7E();
}

/**
 * Decompiled function f__B4ED_05FE_0005_8F7E()
 *
 * @name f__B4ED_05FE_0005_8F7E
 * @implements B4ED:05FE:0005:8F7E ()
 *
 * Called From: B4ED:05FE:0016:6423
 */
void f__B4ED_05FE_0005_8F7E()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	f__B4ED_074F_0006_F7CE(); return;
}

/**
 * Decompiled function f__B4ED_0603_0008_0927()
 *
 * @name f__B4ED_0603_0008_0927
 * @implements B4ED:0603:0008:0927 ()
 *
 * Called From: B4ED:05EA:0016:6423
 * Called From: B4ED:05F1:0016:6423
 * Called From: B4ED:0627:002D:C9E4
 */
void f__B4ED_0603_0008_0927()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x060B); f__B4ED_0AA5_0010_6B85();
	f__B4ED_060B_002D_C9E4();
}

/**
 * Decompiled function f__B4ED_060B_002D_C9E4()
 *
 * @name f__B4ED_060B_002D_C9E4
 * @implements B4ED:060B:002D:C9E4 ()
 *
 * Called From: B4ED:060B:0008:0927
 */
void f__B4ED_060B_002D_C9E4()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76B4));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76B6));
	if (emu_flags.zf) { f__B4ED_0629_000F_7DAC(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76AE));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { emu_ip = 0x0603; emu_last_cs = 0xB4ED; emu_last_ip = 0x061F; emu_last_length = 0x002D; emu_last_crc = 0xC9E4; emu_call(); return; } // Jump does not resolve
	if (!emu_flags.zf) { emu_ip = 0x0629; emu_last_cs = 0xB4ED; emu_last_ip = 0x0621; emu_last_length = 0x002D; emu_last_crc = 0xC9E4; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76AC));
	if (!(emu_flags.cf || emu_flags.zf)) { f__B4ED_0603_0008_0927(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76AE));
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__B4ED_0638_000B_FC0F(); return; }
	emu_ip = 0x0598; emu_last_cs = 0xB4ED; emu_last_ip = 0x0635; emu_last_length = 0x002D; emu_last_crc = 0xC9E4; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B4ED_0629_000F_7DAC()
 *
 * @name f__B4ED_0629_000F_7DAC
 * @implements B4ED:0629:000F:7DAC ()
 *
 * Called From: B4ED:0595:0003:5D04
 * Called From: B4ED:0613:002D:C9E4
 */
void f__B4ED_0629_000F_7DAC()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76AE));
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__B4ED_0638_000B_FC0F(); return; }
	emu_ip = 0x0598; emu_last_cs = 0xB4ED; emu_last_ip = 0x0635; emu_last_length = 0x000F; emu_last_crc = 0x7DAC; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B4ED_0638_000B_FC0F()
 *
 * @name f__B4ED_0638_000B_FC0F
 * @implements B4ED:0638:000B:FC0F ()
 *
 * Called From: B4ED:0633:000F:7DAC
 * Called From: B4ED:0633:002D:C9E4
 */
void f__B4ED_0638_000B_FC0F()
{
	if (!emu_flags.zf) { emu_ip = 0x0643; emu_last_cs = 0xB4ED; emu_last_ip = 0x0638; emu_last_length = 0x000B; emu_last_crc = 0xFC0F; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76AC));
	if ((emu_flags.cf || emu_flags.zf)) { f__B4ED_0643_000F_4273(); return; }
	f__B4ED_0598_0016_2DF9(); return;
}

/**
 * Decompiled function f__B4ED_0643_000F_4273()
 *
 * @name f__B4ED_0643_000F_4273
 * @implements B4ED:0643:000F:4273 ()
 *
 * Called From: B4ED:063E:000B:FC0F
 */
void f__B4ED_0643_000F_4273()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x1E), 0x2);
	if (!emu_flags.zf) { f__B4ED_0675_0024_2109(); return; }
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ss, emu_bp, -0x1));
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x0652); f__B4ED_07B6_0013_1343();
	f__B4ED_0652_001C_684D();
}

/**
 * Decompiled function f__B4ED_0649_0009_FEA3()
 *
 * @name f__B4ED_0649_0009_FEA3
 * @implements B4ED:0649:0009:FEA3 ()
 *
 * Called From: B4ED:0673:002B:A83F
 */
void f__B4ED_0649_0009_FEA3()
{
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ss, emu_bp, -0x1));
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x0652); f__B4ED_07B6_0013_1343();
	f__B4ED_0652_001C_684D();
}

/**
 * Decompiled function f__B4ED_0652_001C_684D()
 *
 * @name f__B4ED_0652_001C_684D
 * @implements B4ED:0652:001C:684D ()
 *
 * Called From: B4ED:0652:000F:4273
 * Called From: B4ED:0652:0009:FEA3
 */
void f__B4ED_0652_001C_684D()
{
	emu_pop(&emu_cx.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movw(&emu_ax.x, emu_si);
	emu_incw(&emu_si);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_cs); emu_push(0x066E); emu_cs = 0x352A; ovl__352A(2);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34ED) { ovl__34ED(0xFF); }
	f__B4ED_066E_002B_A83F();
}

/**
 * Decompiled function f__B4ED_066E_002B_A83F()
 *
 * @name f__B4ED_066E_002B_A83F
 * @implements B4ED:066E:002B:A83F ()
 *
 * Called From: B4ED:066E:001C:684D
 */
void f__B4ED_066E_002B_A83F()
{
	emu_addws(&emu_sp, 0xE);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.zf) { f__B4ED_0649_0009_FEA3(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x7FA2));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0x6), 0x10);
	if (emu_flags.zf) { f__B4ED_06DB_0015_4210(); return; }
	emu_movw(&emu_ax.x, 0x2FD);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x3F);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00, -0x6676));
	emu_addw(&emu_ax.x, 0x3);
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x6674));
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0699); emu_cs = 0x01F7; f__01F7_2947_0014_02B8();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34ED) { ovl__34ED(0xFF); }
	f__B4ED_0699_0010_3DF7();
}

/**
 * Decompiled function f__B4ED_0675_0024_2109()
 *
 * @name f__B4ED_0675_0024_2109
 * @implements B4ED:0675:0024:2109 ()
 *
 * Called From: B4ED:0647:000F:4273
 */
void f__B4ED_0675_0024_2109()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x7FA2));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0x6), 0x10);
	if (emu_flags.zf) { f__B4ED_06DB_0015_4210(); return; }
	emu_movw(&emu_ax.x, 0x2FD);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x3F);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00, -0x6676));
	emu_addw(&emu_ax.x, 0x3);
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x6674));
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0699); emu_cs = 0x01F7; emu_ip = 0x2FE0; emu_last_cs = 0xB4ED; emu_last_ip = 0x0694; emu_last_length = 0x0024; emu_last_crc = 0x2109; emu_call(); // Jump does not resolve
	f__B4ED_0699_0010_3DF7();
}

/**
 * Decompiled function f__B4ED_0699_0010_3DF7()
 *
 * @name f__B4ED_0699_0010_3DF7
 * @implements B4ED:0699:0010:3DF7 ()
 *
 * Called From: B4ED:0699:002B:A83F
 */
void f__B4ED_0699_0010_3DF7()
{
	emu_addws(&emu_sp, 0x8);
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x6674));
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x6676));
	emu_push(emu_cs);
	emu_push(0x06A9); f__B4ED_0BD4_001B_FFBA();
	f__B4ED_06A9_0013_6E51();
}

/**
 * Decompiled function f__B4ED_06A9_0013_6E51()
 *
 * @name f__B4ED_06A9_0013_6E51
 * @implements B4ED:06A9:0013:6E51 ()
 *
 * Called From: B4ED:06A9:0010:3DF7
 */
void f__B4ED_06A9_0013_6E51()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_ax.x, 0xF);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x6674));
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x6676));
	emu_push(emu_cs); emu_push(0x06BC); emu_cs = 0x259E; f__259E_0006_0016_858A();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34ED) { ovl__34ED(0xFF); }
	f__B4ED_06BC_001C_7CF8();
}

/**
 * Decompiled function f__B4ED_06BC_001C_7CF8()
 *
 * @name f__B4ED_06BC_001C_7CF8
 * @implements B4ED:06BC:001C:7CF8 ()
 *
 * Called From: B4ED:06BC:0013:6E51
 */
void f__B4ED_06BC_001C_7CF8()
{
	emu_addws(&emu_sp, 0x6);
	emu_movw(&emu_ax.x, 0x300);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3C34));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3C32));
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x6674));
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x6676));
	emu_push(emu_cs); emu_push(0x06D8); emu_cs = 0x01F7; f__01F7_28B8_0024_83C9();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34ED) { ovl__34ED(0xFF); }
	f__B4ED_06D8_0018_E898();
}

/**
 * Decompiled function f__B4ED_06D8_0018_E898()
 *
 * @name f__B4ED_06D8_0018_E898
 * @implements B4ED:06D8:0018:E898 ()
 *
 * Called From: B4ED:06D8:001C:7CF8
 */
void f__B4ED_06D8_0018_E898()
{
	emu_addws(&emu_sp, 0xA);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x7FA2));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0x6), 0x8);
	if (emu_flags.zf) { f__B4ED_0714_000B_1C53(); return; }
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x06F0); emu_ip = 0x0AA5; emu_last_cs = 0xB4ED; emu_last_ip = 0x06ED; emu_last_length = 0x0018; emu_last_crc = 0xE898; emu_call(); // Jump does not resolve
	f__B4ED_06F0_000E_F48E();
}

/**
 * Decompiled function f__B4ED_06DB_0015_4210()
 *
 * @name f__B4ED_06DB_0015_4210
 * @implements B4ED:06DB:0015:4210 ()
 *
 * Called From: B4ED:067F:0024:2109
 * Called From: B4ED:067F:002B:A83F
 */
void f__B4ED_06DB_0015_4210()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x7FA2));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0x6), 0x8);
	if (emu_flags.zf) { f__B4ED_0714_000B_1C53(); return; }
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x06F0); f__B4ED_0AA5_0010_6B85();
	f__B4ED_06F0_000E_F48E();
}

/**
 * Decompiled function f__B4ED_06F0_000E_F48E()
 *
 * @name f__B4ED_06F0_000E_F48E
 * @implements B4ED:06F0:000E:F48E ()
 *
 * Called From: B4ED:06F0:0015:4210
 */
void f__B4ED_06F0_000E_F48E()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x6674));
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x6676));
	emu_push(emu_cs);
	emu_push(0x06FE); f__B4ED_0BD4_001B_FFBA();
	f__B4ED_06FE_0013_525F();
}

/**
 * Decompiled function f__B4ED_06FE_0013_525F()
 *
 * @name f__B4ED_06FE_0013_525F
 * @implements B4ED:06FE:0013:525F ()
 *
 * Called From: B4ED:06FE:000E:F48E
 */
void f__B4ED_06FE_0013_525F()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_ax.x, 0x2D);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3C38));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3C36));
	emu_push(emu_cs); emu_push(0x0711); emu_cs = 0x259E; f__259E_0006_0016_858A();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34ED) { ovl__34ED(0xFF); }
	f__B4ED_0711_000E_3E39();
}

/**
 * Decompiled function f__B4ED_0711_000E_3E39()
 *
 * @name f__B4ED_0711_000E_3E39
 * @implements B4ED:0711:000E:3E39 ()
 *
 * Called From: B4ED:0711:0013:525F
 */
void f__B4ED_0711_000E_3E39()
{
	emu_addws(&emu_sp, 0x6);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_cs); emu_push(0x071F); emu_cs = 0x352A; ovl__352A(1);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34ED) { ovl__34ED(0xFF); }
	f__B4ED_071F_000C_3FFC();
}

/**
 * Decompiled function f__B4ED_0714_000B_1C53()
 *
 * @name f__B4ED_0714_000B_1C53
 * @implements B4ED:0714:000B:1C53 ()
 *
 * Called From: B4ED:06E5:0015:4210
 * Called From: B4ED:06E5:0018:E898
 */
void f__B4ED_0714_000B_1C53()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_cs); emu_push(0x071F); emu_cs = 0x352A; ovl__352A(1);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34ED) { ovl__34ED(0xFF); }
	f__B4ED_071F_000C_3FFC();
}

/**
 * Decompiled function f__B4ED_071F_000C_3FFC()
 *
 * @name f__B4ED_071F_000C_3FFC
 * @implements B4ED:071F:000C:3FFC ()
 *
 * Called From: B4ED:071F:000B:1C53
 * Called From: B4ED:071F:000E:3E39
 */
void f__B4ED_071F_000C_3FFC()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_incb(&emu_get_memory8(emu_ss, emu_bp, -0x1));
	emu_addws(&emu_get_memory16(emu_ds, 0x00, -0x7FA2), 0x8);
	f__B4ED_072B_0022_D446(); return;
}

/**
 * Decompiled function f__B4ED_072B_0022_D446()
 *
 * @name f__B4ED_072B_0022_D446
 * @implements B4ED:072B:0022:D446 ()
 *
 * Called From: B4ED:0729:000C:3FFC
 * Called From: B4ED:073D:0022:D446
 */
void f__B4ED_072B_0022_D446()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76AE));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { emu_ip = 0x072B; emu_last_cs = 0xB4ED; emu_last_ip = 0x0735; emu_last_length = 0x0022; emu_last_crc = 0xD446; emu_call(); return; } // Jump does not resolve
	if (!emu_flags.zf) { emu_ip = 0x073F; emu_last_cs = 0xB4ED; emu_last_ip = 0x0737; emu_last_length = 0x0022; emu_last_crc = 0xD446; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76AC));
	if (!(emu_flags.cf || emu_flags.zf)) { f__B4ED_072B_0022_D446(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x7FA2));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x4), 0x0);
	if (emu_flags.zf) { f__B4ED_074D_0002_C03A(); return; }
	f__B4ED_020F_0044_6A12(); return;
}

/**
 * Decompiled function f__B4ED_073F_000E_5398()
 *
 * @name f__B4ED_073F_000E_5398
 * @implements B4ED:073F:000E:5398 ()
 *
 * Called From: B4ED:020C:000F:1FF4
 */
void f__B4ED_073F_000E_5398()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x7FA2));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x4), 0x0);
	if (emu_flags.zf) { emu_ip = 0x074D; emu_last_cs = 0xB4ED; emu_last_ip = 0x0748; emu_last_length = 0x000E; emu_last_crc = 0x5398; emu_call(); return; } // Jump does not resolve
	f__B4ED_020F_0044_6A12(); return;
}

/**
 * Decompiled function f__B4ED_074D_0002_C03A()
 *
 * @name f__B4ED_074D_0002_C03A
 * @implements B4ED:074D:0002:C03A ()
 *
 * Called From: B4ED:0748:0022:D446
 */
void f__B4ED_074D_0002_C03A()
{
	f__B4ED_074F_0006_F7CE(); return;
}

/**
 * Decompiled function f__B4ED_074F_0006_F7CE()
 *
 * @name f__B4ED_074F_0006_F7CE
 * @implements B4ED:074F:0006:F7CE ()
 *
 * Called From: B4ED:0600:0005:8F7E
 * Called From: B4ED:074D:0002:C03A
 */
void f__B4ED_074F_0006_F7CE()
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
 * Decompiled function f__B4ED_075D_002B_59B5()
 *
 * @name f__B4ED_075D_002B_59B5
 * @implements B4ED:075D:002B:59B5 ()
 *
 * Called From: B4ED:07C6:0013:1343
 */
void f__B4ED_075D_002B_59B5()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x4);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00, -0x7F90));
	emu_movw(&emu_dx.x, 0x3);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00, -0x7FA8));
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00, -0x7FAA));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_bx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x0));
	emu_cmpb(&emu_ax.l, emu_get_memory8(emu_ss, emu_bp,  0x6));
	if ((emu_flags.cf || emu_flags.zf)) { f__B4ED_0788_0023_561F(); return; }
	f__B4ED_07B2_0004_893F(); return;
}

/**
 * Decompiled function f__B4ED_0788_0023_561F()
 *
 * @name f__B4ED_0788_0023_561F
 * @implements B4ED:0788:0023:561F ()
 *
 * Called From: B4ED:0784:002B:59B5
 */
void f__B4ED_0788_0023_561F()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x2));
	emu_movb(&emu_ax.h, 0x0);
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00, -0x7F98));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__B4ED_07B2_0004_893F(); return; }
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x1));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x07AB); emu_cs = 0x3483; ovl__3483(0);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34ED) { ovl__34ED(0xFF); }
	f__B4ED_07AB_000B_E321();
}

/**
 * Decompiled function f__B4ED_07AB_000B_E321()
 *
 * @name f__B4ED_07AB_000B_E321
 * @implements B4ED:07AB:000B:E321 ()
 *
 * Called From: B4ED:07AB:0023:561F
 */
void f__B4ED_07AB_000B_E321()
{
	emu_addws(&emu_sp, 0x6);
	emu_incw(&emu_get_memory16(emu_ds, 0x00, -0x7F90));
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B4ED_07B2_0004_893F()
 *
 * @name f__B4ED_07B2_0004_893F
 * @implements B4ED:07B2:0004:893F ()
 *
 * Called From: B4ED:0786:002B:59B5
 * Called From: B4ED:0795:0023:561F
 */
void f__B4ED_07B2_0004_893F()
{
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B4ED_07B6_0013_1343()
 *
 * @name f__B4ED_07B6_0013_1343
 * @implements B4ED:07B6:0013:1343 ()
 *
 * Called From: B4ED:03B5:0015:B9E5
 * Called From: B4ED:041D:0009:7F9F
 * Called From: B4ED:05AB:0016:2DF9
 * Called From: B4ED:064F:000F:4273
 * Called From: B4ED:064F:0009:FEA3
 */
void f__B4ED_07B6_0013_1343()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x16);
	emu_push(emu_si);
	emu_incw(&emu_get_memory16(emu_ds, 0x00, -0x7F98));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ss, emu_bp,  0x6));
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x07C9); f__B4ED_075D_002B_59B5();
	f__B4ED_07C9_0031_DE45();
}

/**
 * Decompiled function f__B4ED_07C9_0031_DE45()
 *
 * @name f__B4ED_07C9_0031_DE45
 * @implements B4ED:07C9:0031:DE45 ()
 *
 * Called From: B4ED:07C9:0013:1343
 */
void f__B4ED_07C9_0031_DE45()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00, -0x7F8E));
	emu_movw(&emu_dx.x, 0xA);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00, -0x7FA4));
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00, -0x7FA6));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_bx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x0), 0xFF);
	if (emu_flags.zf) { f__B4ED_07F7_0003_9C09(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x4));
	emu_cmpb(&emu_ax.l, emu_get_memory8(emu_ss, emu_bp,  0x6));
	if ((emu_flags.cf || emu_flags.zf)) { f__B4ED_07FA_000A_FB76(); return; }
	f__B4ED_0AA0_0005_8BCF(); return;
}

/**
 * Decompiled function f__B4ED_07F7_0003_9C09()
 *
 * @name f__B4ED_07F7_0003_9C09
 * @implements B4ED:07F7:0003:9C09 ()
 *
 * Called From: B4ED:07E9:0031:DE45
 */
void f__B4ED_07F7_0003_9C09()
{
	f__B4ED_0AA0_0005_8BCF(); return;
}

/**
 * Decompiled function f__B4ED_07FA_000A_FB76()
 *
 * @name f__B4ED_07FA_000A_FB76
 * @implements B4ED:07FA:000A:FB76 ()
 *
 * Called From: B4ED:07F5:0031:DE45
 */
void f__B4ED_07FA_000A_FB76()
{
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00, -0x7F8C), 0x0);
	if (!emu_flags.zf) { f__B4ED_0804_0048_45EC(); return; }
	f__B4ED_088A_0021_7FDF(); return;
}

/**
 * Decompiled function f__B4ED_0804_0048_45EC()
 *
 * @name f__B4ED_0804_0048_45EC
 * @implements B4ED:0804:0048:45EC ()
 *
 * Called From: B4ED:07FF:000A:FB76
 */
void f__B4ED_0804_0048_45EC()
{
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00, -0x7F96), 0xFF);
	if (!emu_flags.zf) { f__B4ED_0817_0035_D459(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x8));
	emu_movb(&emu_ax.h, 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x7F96), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00, -0x7F96));
	emu_decw(&emu_get_memory16(emu_ds, 0x00, -0x7F96));
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.zf) { f__B4ED_0887_0003_9C25(); return; }
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x7F8C), 0x0);
	emu_incw(&emu_get_memory16(emu_ds, 0x00, -0x7F8E));
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x7F52), 0x2);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x9), 0x0);
	if (emu_flags.zf) { emu_ip = 0x086B; emu_last_cs = 0xB4ED; emu_last_ip = 0x083A; emu_last_length = 0x0048; emu_last_crc = 0x45EC; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x9));
	emu_movb(&emu_ax.h, 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x7F54), emu_ax.x);
	emu_xorw(&emu_si, emu_si);
	emu_ip = 0x0864; emu_last_cs = 0xB4ED; emu_last_ip = 0x084A; emu_last_length = 0x0048; emu_last_crc = 0x45EC; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B4ED_0817_0035_D459()
 *
 * @name f__B4ED_0817_0035_D459
 * @implements B4ED:0817:0035:D459 ()
 *
 * Called From: B4ED:0809:0048:45EC
 */
void f__B4ED_0817_0035_D459()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00, -0x7F96));
	emu_decw(&emu_get_memory16(emu_ds, 0x00, -0x7F96));
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.zf) { f__B4ED_0887_0003_9C25(); return; }
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x7F8C), 0x0);
	emu_incw(&emu_get_memory16(emu_ds, 0x00, -0x7F8E));
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x7F52), 0x2);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x9), 0x0);
	if (emu_flags.zf) { f__B4ED_086B_0013_0001(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x9));
	emu_movb(&emu_ax.h, 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x7F54), emu_ax.x);
	emu_xorw(&emu_si, emu_si);
	f__B4ED_0864_0007_EBC8(); return;
}

/**
 * Decompiled function f__B4ED_084C_001F_079B()
 *
 * @name f__B4ED_084C_001F_079B
 * @implements B4ED:084C:001F:079B ()
 *
 * Called From: B4ED:0867:0007:EBC8
 * Called From: B4ED:0867:0008:ADC8
 * Called From: B4ED:0867:001F:079B
 */
void f__B4ED_084C_001F_079B()
{
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ds, emu_si, -0x7F66));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_cwd();
	emu_idivw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00, -0x7F54));
	emu_movb(&emu_get_memory8(emu_ds, emu_si, -0x7F8A), emu_ax.l);
	emu_orb(&emu_ax.l, emu_ax.l);
	if (!emu_flags.zf) { f__B4ED_0863_0008_ADC8(); return; }
	emu_movb(&emu_get_memory8(emu_ds, emu_si, -0x7F8A), 0x1);
	emu_incw(&emu_si);
	emu_cmpws(&emu_si, 0x12);
	if ((emu_flags.sf != emu_flags.of)) { f__B4ED_084C_001F_079B(); return; }
	f__B4ED_0887_0003_9C25(); return;
}

/**
 * Decompiled function f__B4ED_0863_0008_ADC8()
 *
 * @name f__B4ED_0863_0008_ADC8
 * @implements B4ED:0863:0008:ADC8 ()
 *
 * Called From: B4ED:085C:001F:079B
 */
void f__B4ED_0863_0008_ADC8()
{
	emu_incw(&emu_si);
	emu_cmpws(&emu_si, 0x12);
	if ((emu_flags.sf != emu_flags.of)) { f__B4ED_084C_001F_079B(); return; }
	f__B4ED_0887_0003_9C25(); return;
}

/**
 * Decompiled function f__B4ED_0864_0007_EBC8()
 *
 * @name f__B4ED_0864_0007_EBC8
 * @implements B4ED:0864:0007:EBC8 ()
 *
 * Called From: B4ED:084A:0035:D459
 */
void f__B4ED_0864_0007_EBC8()
{
	emu_cmpws(&emu_si, 0x12);
	if ((emu_flags.sf != emu_flags.of)) { f__B4ED_084C_001F_079B(); return; }
	emu_ip = 0x0887; emu_last_cs = 0xB4ED; emu_last_ip = 0x0869; emu_last_length = 0x0007; emu_last_crc = 0xEBC8; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B4ED_086B_0013_0001()
 *
 * @name f__B4ED_086B_0013_0001
 * @implements B4ED:086B:0013:0001 ()
 *
 * Called From: B4ED:083A:0035:D459
 */
void f__B4ED_086B_0013_0001()
{
	emu_movw(&emu_ax.x, 0x12);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x809A);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x8076);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x087E); emu_cs = 0x01F7; f__01F7_28B8_0024_83C9();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34ED) { ovl__34ED(0xFF); }
	f__B4ED_087E_000C_91BC();
}

/**
 * Decompiled function f__B4ED_087E_000C_91BC()
 *
 * @name f__B4ED_087E_000C_91BC
 * @implements B4ED:087E:000C:91BC ()
 *
 * Called From: B4ED:087E:0013:0001
 */
void f__B4ED_087E_000C_91BC()
{
	emu_addws(&emu_sp, 0xA);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x7F54), 0x1);
	f__B4ED_0AA0_0005_8BCF(); return;
}

/**
 * Decompiled function f__B4ED_0887_0003_9C25()
 *
 * @name f__B4ED_0887_0003_9C25
 * @implements B4ED:0887:0003:9C25 ()
 *
 * Called From: B4ED:0820:0048:45EC
 * Called From: B4ED:0820:0035:D459
 * Called From: B4ED:0869:001F:079B
 * Called From: B4ED:0869:0008:ADC8
 */
void f__B4ED_0887_0003_9C25()
{
	f__B4ED_0AA0_0005_8BCF(); return;
}

/**
 * Decompiled function f__B4ED_088A_0021_7FDF()
 *
 * @name f__B4ED_088A_0021_7FDF
 * @implements B4ED:088A:0021:7FDF ()
 *
 * Called From: B4ED:0801:000A:FB76
 */
void f__B4ED_088A_0021_7FDF()
{
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00, -0x7F96), 0xFF);
	if (!emu_flags.zf) { f__B4ED_089D_000E_5705(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x6));
	emu_movb(&emu_ax.h, 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x7F96), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00, -0x7F96));
	emu_decw(&emu_get_memory16(emu_ds, 0x00, -0x7F96));
	emu_orw(&emu_ax.x, emu_ax.x);
	if (emu_flags.zf) { f__B4ED_08AB_002C_7E4B(); return; }
	f__B4ED_0AA0_0005_8BCF(); return;
}

/**
 * Decompiled function f__B4ED_089D_000E_5705()
 *
 * @name f__B4ED_089D_000E_5705
 * @implements B4ED:089D:000E:5705 ()
 *
 * Called From: B4ED:088F:0021:7FDF
 */
void f__B4ED_089D_000E_5705()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00, -0x7F96));
	emu_decw(&emu_get_memory16(emu_ds, 0x00, -0x7F96));
	emu_orw(&emu_ax.x, emu_ax.x);
	if (emu_flags.zf) { f__B4ED_08AB_002C_7E4B(); return; }
	f__B4ED_0AA0_0005_8BCF(); return;
}

/**
 * Decompiled function f__B4ED_08AB_002C_7E4B()
 *
 * @name f__B4ED_08AB_002C_7E4B
 * @implements B4ED:08AB:002C:7E4B ()
 *
 * Called From: B4ED:08A6:000E:5705
 * Called From: B4ED:08A6:0021:7FDF
 */
void f__B4ED_08AB_002C_7E4B()
{
	emu_movw(&emu_ax.x, 0x12);
	emu_push(emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x2));
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
	emu_movw(&emu_ax.x, 0x809A);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x08D7); emu_cs = 0x01F7; f__01F7_28B8_0024_83C9();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34ED) { ovl__34ED(0xFF); }
	f__B4ED_08D7_0022_BFE2();
}

/**
 * Decompiled function f__B4ED_08D7_0022_BFE2()
 *
 * @name f__B4ED_08D7_0022_BFE2
 * @implements B4ED:08D7:0022:BFE2 ()
 *
 * Called From: B4ED:08D7:002C:7E4B
 */
void f__B4ED_08D7_0022_BFE2()
{
	emu_addws(&emu_sp, 0xA);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x7F8C), 0x1);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x5), 0x55);
	if (!emu_flags.zf) { f__B4ED_08F9_0022_0A36(); return; }
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0xC7);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x13F);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__B4ED_090D_000E_CEAE(); return;
}

/**
 * Decompiled function f__B4ED_08F9_0022_0A36()
 *
 * @name f__B4ED_08F9_0022_0A36
 * @implements B4ED:08F9:0022:0A36 ()
 *
 * Called From: B4ED:08E8:0022:BFE2
 */
void f__B4ED_08F9_0022_0A36()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0xC7);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x13F);
	emu_push(emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x5));
	emu_movb(&emu_ax.h, 0x0);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x353F);
	emu_movw(&emu_es, emu_ax.x);

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_es, 0x00,  0x6668);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_es, 0x00,  0x666A);
	emu_push(0x091B);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A60D31: f__22A6_0D31_0015_A4C3(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0xB4ED; emu_last_ip = 0x0916; emu_last_length = 0x0022; emu_last_crc = 0x0A36;
			emu_call();
			return;
	}
	f__B4ED_091B_0036_53F7();
}

/**
 * Decompiled function f__B4ED_090D_000E_CEAE()
 *
 * @name f__B4ED_090D_000E_CEAE
 * @implements B4ED:090D:000E:CEAE ()
 *
 * Called From: B4ED:08F7:0022:BFE2
 */
void f__B4ED_090D_000E_CEAE()
{
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x353F);
	emu_movw(&emu_es, emu_ax.x);

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_es, 0x00,  0x6668);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_es, 0x00,  0x666A);
	emu_push(0x091B);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A60D31: f__22A6_0D31_0015_A4C3(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0xB4ED; emu_last_ip = 0x0916; emu_last_length = 0x000E; emu_last_crc = 0xCEAE;
			emu_call();
			return;
	}
	f__B4ED_091B_0036_53F7();
}

/**
 * Decompiled function f__B4ED_091B_0036_53F7()
 *
 * @name f__B4ED_091B_0036_53F7
 * @implements B4ED:091B:0036:53F7 ()
 *
 * Called From: B4ED:091B:0022:0A36
 * Called From: B4ED:091B:000E:CEAE
 */
void f__B4ED_091B_0036_53F7()
{
	emu_addws(&emu_sp, 0xA);
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x6D8F), 0x0);
	if (emu_flags.zf) { f__B4ED_0985_001E_72A5(); return; }
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x6D8F), 0x4);
	if (emu_flags.zf) { emu_ip = 0x0985; emu_last_cs = 0xB4ED; emu_last_ip = 0x092A; emu_last_length = 0x0036; emu_last_crc = 0x53F7; emu_call(); return; } // Jump does not resolve
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00, -0x7F9E), 0xFF);
	if (emu_flags.zf) { emu_ip = 0x0985; emu_last_cs = 0xB4ED; emu_last_ip = 0x0931; emu_last_length = 0x0036; emu_last_crc = 0x53F7; emu_call(); return; } // Jump does not resolve
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00, -0x7F8E), 0x0);
	if (emu_flags.zf) { emu_ip = 0x0985; emu_last_cs = 0xB4ED; emu_last_ip = 0x0938; emu_last_length = 0x0036; emu_last_crc = 0x53F7; emu_call(); return; } // Jump does not resolve
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x37B6), 0x0);
	if (!emu_flags.zf) { emu_ip = 0x0985; emu_last_cs = 0xB4ED; emu_last_ip = 0x093F; emu_last_length = 0x0036; emu_last_crc = 0x53F7; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00, -0x7F9E));
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00, -0x7F8E));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0951); emu_cs = 0x3483; emu_ip = 0x097B; emu_last_cs = 0xB4ED; emu_last_ip = 0x094C; emu_last_length = 0x0036; emu_last_crc = 0x53F7; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__B4ED_0985_001E_72A5()
 *
 * @name f__B4ED_0985_001E_72A5
 * @implements B4ED:0985:001E:72A5 ()
 *
 * Called From: B4ED:0923:0036:53F7
 */
void f__B4ED_0985_001E_72A5()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x0), 0x0);
	if (emu_flags.zf) { f__B4ED_09AE_0020_96D5(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x5));
	emu_movb(&emu_ax.h, 0x0);
	emu_push(emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_push(emu_cs); emu_push(0x09A3); emu_cs = 0x0FCB; f__0FCB_005F_001C_FDC4();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34ED) { ovl__34ED(0xFF); }
	f__B4ED_09A3_0008_A137();
}

/**
 * Decompiled function f__B4ED_09A3_0008_A137()
 *
 * @name f__B4ED_09A3_0008_A137
 * @implements B4ED:09A3:0008:A137 ()
 *
 * Called From: B4ED:09A3:001E:72A5
 */
void f__B4ED_09A3_0008_A137()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x09AB); f__B4ED_0BF4_001B_A3A9();
	f__B4ED_09AB_0023_8584();
}

/**
 * Decompiled function f__B4ED_09AB_0023_8584()
 *
 * @name f__B4ED_09AB_0023_8584
 * @implements B4ED:09AB:0023:8584 ()
 *
 * Called From: B4ED:09AB:0008:A137
 */
void f__B4ED_09AB_0023_8584()
{
	emu_addws(&emu_sp, 0x6);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x7F52), 0x1);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x7), 0x0);
	if (emu_flags.zf) { f__B4ED_09ED_0013_0001(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x7));
	emu_movb(&emu_ax.h, 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x7F54), emu_ax.x);
	emu_xorw(&emu_si, emu_si);
	f__B4ED_09E6_0007_EBC8(); return;
}

/**
 * Decompiled function f__B4ED_09AE_0020_96D5()
 *
 * @name f__B4ED_09AE_0020_96D5
 * @implements B4ED:09AE:0020:96D5 ()
 *
 * Called From: B4ED:098C:001E:72A5
 */
void f__B4ED_09AE_0020_96D5()
{
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x7F52), 0x1);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x7), 0x0);
	if (emu_flags.zf) { emu_ip = 0x09ED; emu_last_cs = 0xB4ED; emu_last_ip = 0x09BC; emu_last_length = 0x0020; emu_last_crc = 0x96D5; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x7));
	emu_movb(&emu_ax.h, 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x7F54), emu_ax.x);
	emu_xorw(&emu_si, emu_si);
	f__B4ED_09E6_0007_EBC8(); return;
}

/**
 * Decompiled function f__B4ED_09CE_001F_079B()
 *
 * @name f__B4ED_09CE_001F_079B
 * @implements B4ED:09CE:001F:079B ()
 *
 * Called From: B4ED:09E9:0007:EBC8
 * Called From: B4ED:09E9:0008:ADC8
 * Called From: B4ED:09E9:001F:079B
 */
void f__B4ED_09CE_001F_079B()
{
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ds, emu_si, -0x7F66));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_cwd();
	emu_idivw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00, -0x7F54));
	emu_movb(&emu_get_memory8(emu_ds, emu_si, -0x7F8A), emu_ax.l);
	emu_orb(&emu_ax.l, emu_ax.l);
	if (!emu_flags.zf) { f__B4ED_09E5_0008_ADC8(); return; }
	emu_movb(&emu_get_memory8(emu_ds, emu_si, -0x7F8A), 0x1);
	emu_incw(&emu_si);
	emu_cmpws(&emu_si, 0x12);
	if ((emu_flags.sf != emu_flags.of)) { f__B4ED_09CE_001F_079B(); return; }
	f__B4ED_0A09_000A_8A0B(); return;
}

/**
 * Decompiled function f__B4ED_09E5_0008_ADC8()
 *
 * @name f__B4ED_09E5_0008_ADC8
 * @implements B4ED:09E5:0008:ADC8 ()
 *
 * Called From: B4ED:09DE:001F:079B
 */
void f__B4ED_09E5_0008_ADC8()
{
	emu_incw(&emu_si);
	emu_cmpws(&emu_si, 0x12);
	if ((emu_flags.sf != emu_flags.of)) { f__B4ED_09CE_001F_079B(); return; }
	f__B4ED_0A09_000A_8A0B(); return;
}

/**
 * Decompiled function f__B4ED_09E6_0007_EBC8()
 *
 * @name f__B4ED_09E6_0007_EBC8
 * @implements B4ED:09E6:0007:EBC8 ()
 *
 * Called From: B4ED:09CC:0023:8584
 * Called From: B4ED:09CC:0020:96D5
 */
void f__B4ED_09E6_0007_EBC8()
{
	emu_cmpws(&emu_si, 0x12);
	if ((emu_flags.sf != emu_flags.of)) { f__B4ED_09CE_001F_079B(); return; }
	emu_ip = 0x0A09; emu_last_cs = 0xB4ED; emu_last_ip = 0x09EB; emu_last_length = 0x0007; emu_last_crc = 0xEBC8; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B4ED_09ED_0013_0001()
 *
 * @name f__B4ED_09ED_0013_0001
 * @implements B4ED:09ED:0013:0001 ()
 *
 * Called From: B4ED:09BC:0023:8584
 */
void f__B4ED_09ED_0013_0001()
{
	emu_movw(&emu_ax.x, 0x12);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x809A);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x8076);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0A00); emu_cs = 0x01F7; f__01F7_28B8_0024_83C9();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34ED) { ovl__34ED(0xFF); }
	f__B4ED_0A00_0013_9139();
}

/**
 * Decompiled function f__B4ED_0A00_0013_9139()
 *
 * @name f__B4ED_0A00_0013_9139
 * @implements B4ED:0A00:0013:9139 ()
 *
 * Called From: B4ED:0A00:0013:0001
 */
void f__B4ED_0A00_0013_9139()
{
	emu_addws(&emu_sp, 0xA);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x7F54), 0x1);
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x3A38), 0xFF);
	if (emu_flags.zf) { f__B4ED_0A13_000A_B57F(); return; }
	emu_ip = 0x0AA0; emu_last_cs = 0xB4ED; emu_last_ip = 0x0A10; emu_last_length = 0x0013; emu_last_crc = 0x9139; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B4ED_0A09_000A_8A0B()
 *
 * @name f__B4ED_0A09_000A_8A0B
 * @implements B4ED:0A09:000A:8A0B ()
 *
 * Called From: B4ED:09EB:001F:079B
 * Called From: B4ED:09EB:0008:ADC8
 */
void f__B4ED_0A09_000A_8A0B()
{
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x3A38), 0xFF);
	if (emu_flags.zf) { f__B4ED_0A13_000A_B57F(); return; }
	emu_ip = 0x0AA0; emu_last_cs = 0xB4ED; emu_last_ip = 0x0A10; emu_last_length = 0x000A; emu_last_crc = 0x8A0B; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B4ED_0A13_000A_B57F()
 *
 * @name f__B4ED_0A13_000A_B57F
 * @implements B4ED:0A13:000A:B57F ()
 *
 * Called From: B4ED:0A0E:000A:8A0B
 * Called From: B4ED:0A0E:0013:9139
 */
void f__B4ED_0A13_000A_B57F()
{
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00, -0x7F8E), 0x2);
	if (emu_flags.zf) { f__B4ED_0A1D_001B_9BB7(); return; }
	f__B4ED_0AA0_0005_8BCF(); return;
}

/**
 * Decompiled function f__B4ED_0A1D_001B_9BB7()
 *
 * @name f__B4ED_0A1D_001B_9BB7
 * @implements B4ED:0A1D:001B:9BB7 ()
 *
 * Called From: B4ED:0A18:000A:B57F
 */
void f__B4ED_0A1D_001B_9BB7()
{
	emu_movw(&emu_ax.x, 0x21);
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
	emu_push(emu_cs); emu_push(0x0A38); emu_cs = 0x10E4; f__10E4_1EF1_0040_01F8();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34ED) { ovl__34ED(0xFF); }
	f__B4ED_0A38_0020_556A();
}

/**
 * Decompiled function f__B4ED_0A38_0020_556A()
 *
 * @name f__B4ED_0A38_0020_556A
 * @implements B4ED:0A38:0020:556A ()
 *
 * Called From: B4ED:0A38:001B:9BB7
 */
void f__B4ED_0A38_0020_556A()
{
	emu_addws(&emu_sp, 0xE);
	emu_movw(&emu_ax.x, 0x112);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0xD7);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0xBD);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0xA0);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x2620);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0A58); emu_cs = 0x10E4; f__10E4_1EF1_0040_01F8();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34ED) { ovl__34ED(0xFF); }
	f__B4ED_0A58_0014_14B5();
}

/**
 * Decompiled function f__B4ED_0A58_0014_14B5()
 *
 * @name f__B4ED_0A58_0014_14B5
 * @implements B4ED:0A58:0014:14B5 ()
 *
 * Called From: B4ED:0A58:0020:556A
 */
void f__B4ED_0A58_0014_14B5()
{
	emu_addws(&emu_sp, 0xE);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x6C6C), 0x0);
	emu_movb(&emu_get_memory8(emu_ss, emu_bp, -0x16), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x0);
	f__B4ED_0A7F_0010_2CD1(); return;
}

/**
 * Decompiled function f__B4ED_0A6C_0023_78F0()
 *
 * @name f__B4ED_0A6C_0023_78F0
 * @implements B4ED:0A6C:0023:78F0 ()
 *
 * Called From: B4ED:0A83:0010:2CD1
 * Called From: B4ED:0A83:0023:78F0
 */
void f__B4ED_0A6C_0023_78F0()
{
	emu_movw(&emu_ax.x, emu_bp - 0x15);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ss, emu_bp, -0x6));
	emu_addb(&emu_ax.l, 0xD7);
	emu_movb(&emu_get_memory8(emu_ss, emu_bx.x,  0x0), emu_ax.l);
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x6);
	if ((emu_flags.sf != emu_flags.of)) { f__B4ED_0A6C_0023_78F0(); return; }
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0x16);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0A8F); emu_cs = 0x259E; f__259E_0021_001A_E253();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34ED) { ovl__34ED(0xFF); }
	f__B4ED_0A8F_000F_896B();
}

/**
 * Decompiled function f__B4ED_0A7F_0010_2CD1()
 *
 * @name f__B4ED_0A7F_0010_2CD1
 * @implements B4ED:0A7F:0010:2CD1 ()
 *
 * Called From: B4ED:0A6A:0014:14B5
 */
void f__B4ED_0A7F_0010_2CD1()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x6);
	if ((emu_flags.sf != emu_flags.of)) { f__B4ED_0A6C_0023_78F0(); return; }
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0x16);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0A8F); emu_cs = 0x259E; emu_ip = 0x0AB0; emu_last_cs = 0xB4ED; emu_last_ip = 0x0A8A; emu_last_length = 0x0010; emu_last_crc = 0x2CD1; emu_call(); // Jump does not resolve
	f__B4ED_0A8F_000F_896B();
}

/**
 * Decompiled function f__B4ED_0A8F_000F_896B()
 *
 * @name f__B4ED_0A8F_000F_896B
 * @implements B4ED:0A8F:000F:896B ()
 *
 * Called From: B4ED:0A8F:0023:78F0
 */
void f__B4ED_0A8F_000F_896B()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x7F9A));
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x7F9C));
	emu_push(emu_cs); emu_push(0x0A9E); emu_cs = 0x2605; f__2605_000C_006D_F8B2();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34ED) { ovl__34ED(0xFF); }
	f__B4ED_0A9E_0007_EF7C();
}

/**
 * Decompiled function f__B4ED_0A9E_0007_EF7C()
 *
 * @name f__B4ED_0A9E_0007_EF7C
 * @implements B4ED:0A9E:0007:EF7C ()
 *
 * Called From: B4ED:0A9E:000F:896B
 */
void f__B4ED_0A9E_0007_EF7C()
{
	emu_pop(&emu_cx.x);
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
 * Decompiled function f__B4ED_0AA0_0005_8BCF()
 *
 * @name f__B4ED_0AA0_0005_8BCF
 * @implements B4ED:0AA0:0005:8BCF ()
 *
 * Called From: B4ED:07F7:0031:DE45
 * Called From: B4ED:07F7:0003:9C09
 * Called From: B4ED:0887:0003:9C25
 * Called From: B4ED:0887:000C:91BC
 * Called From: B4ED:08A8:0021:7FDF
 * Called From: B4ED:08A8:000E:5705
 * Called From: B4ED:0A1A:000A:B57F
 */
void f__B4ED_0AA0_0005_8BCF()
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
 * Decompiled function f__B4ED_0AA5_0010_6B85()
 *
 * @name f__B4ED_0AA5_0010_6B85
 * @implements B4ED:0AA5:0010:6B85 ()
 *
 * Called From: B4ED:03DD:000C:7044
 * Called From: B4ED:0608:0008:0927
 * Called From: B4ED:06ED:0015:4210
 */
void f__B4ED_0AA5_0010_6B85()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x2);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_di, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x0AB5); emu_cs = 0x3483; ovl__3483(3);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34ED) { ovl__34ED(0xFF); }
	f__B4ED_0AB5_000A_21D5();
}

/**
 * Decompiled function f__B4ED_0AB5_000A_21D5()
 *
 * @name f__B4ED_0AB5_000A_21D5
 * @implements B4ED:0AB5:000A:21D5 ()
 *
 * Called From: B4ED:0AB5:0010:6B85
 */
void f__B4ED_0AB5_000A_21D5()
{
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00, -0x7F52), 0x0);
	if (!emu_flags.zf) { f__B4ED_0ABF_001C_4DFB(); return; }
	f__B4ED_0BC9_0005_3538(); return;
}

/**
 * Decompiled function f__B4ED_0ABF_001C_4DFB()
 *
 * @name f__B4ED_0ABF_001C_4DFB
 * @implements B4ED:0ABF:001C:4DFB ()
 *
 * Called From: B4ED:0ABA:000A:21D5
 */
void f__B4ED_0ABF_001C_4DFB()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00, -0x7F92));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00, -0x7F94));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76AE));
	if ((emu_flags.sf != emu_flags.of)) { emu_ip = 0x0ADB; emu_last_cs = 0xB4ED; emu_last_ip = 0x0ACA; emu_last_length = 0x001C; emu_last_crc = 0x4DFB; emu_call(); return; } // Jump does not resolve
	if (!emu_flags.zf) { emu_ip = 0x0AD4; emu_last_cs = 0xB4ED; emu_last_ip = 0x0ACC; emu_last_length = 0x001C; emu_last_crc = 0x4DFB; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76AC));
	if (emu_flags.cf) { f__B4ED_0ADB_0038_50FD(); return; }
	emu_orw(&emu_di, emu_di);
	if (!emu_flags.zf) { f__B4ED_0ADB_0038_50FD(); return; }
	f__B4ED_0BC9_0005_3538(); return;
}

/**
 * Decompiled function f__B4ED_0ADB_0038_50FD()
 *
 * @name f__B4ED_0ADB_0038_50FD
 * @implements B4ED:0ADB:0038:50FD ()
 *
 * Called From: B4ED:0AD2:001C:4DFB
 * Called From: B4ED:0AD6:001C:4DFB
 */
void f__B4ED_0ADB_0038_50FD()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76AE));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76AC));
	emu_addws(&emu_dx.x, 0x7);
	emu_adcw(&emu_ax.x, 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x7F92), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x7F94), emu_dx.x);
	emu_decw(&emu_get_memory16(emu_ds, 0x00, -0x7F54));
	if (emu_flags.zf) { f__B4ED_0AF9_001A_F677(); return; }
	emu_orw(&emu_di, emu_di);
	if (emu_flags.zf) { f__B4ED_0B34_000B_C01D(); return; }
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00, -0x7F52), 0x1);
	if (!emu_flags.zf) { f__B4ED_0B18_0011_B6CD(); return; }
	emu_movw(&emu_ax.x, 0x12);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x809A);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x8088);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0B13); emu_cs = 0x01F7; emu_ip = 0x33CB; emu_last_cs = 0xB4ED; emu_last_ip = 0x0B0E; emu_last_length = 0x0038; emu_last_crc = 0x50FD; emu_call(); // Jump does not resolve
	f__B4ED_0B13_0005_8F6E();
}

/**
 * Decompiled function f__B4ED_0AF9_001A_F677()
 *
 * @name f__B4ED_0AF9_001A_F677
 * @implements B4ED:0AF9:001A:F677 ()
 *
 * Called From: B4ED:0AF3:0038:50FD
 */
void f__B4ED_0AF9_001A_F677()
{
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00, -0x7F52), 0x1);
	if (!emu_flags.zf) { f__B4ED_0B18_0011_B6CD(); return; }
	emu_movw(&emu_ax.x, 0x12);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x809A);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x8088);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0B13); emu_cs = 0x01F7; f__01F7_28B8_0024_83C9();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34ED) { ovl__34ED(0xFF); }
	f__B4ED_0B13_0005_8F6E();
}

/**
 * Decompiled function f__B4ED_0B13_0005_8F6E()
 *
 * @name f__B4ED_0B13_0005_8F6E
 * @implements B4ED:0B13:0005:8F6E ()
 *
 * Called From: B4ED:0B13:001A:F677
 */
void f__B4ED_0B13_0005_8F6E()
{
	emu_addws(&emu_sp, 0xA);
	f__B4ED_0B2C_0008_8E34(); return;
}

/**
 * Decompiled function f__B4ED_0B18_0011_B6CD()
 *
 * @name f__B4ED_0B18_0011_B6CD
 * @implements B4ED:0B18:0011:B6CD ()
 *
 * Called From: B4ED:0AFE:001A:F677
 * Called From: B4ED:0AFE:0038:50FD
 */
void f__B4ED_0B18_0011_B6CD()
{
	emu_movw(&emu_ax.x, 0x12);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x8088);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0B29); emu_cs = 0x01F7; f__01F7_2947_0014_02B8();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34ED) { ovl__34ED(0xFF); }
	f__B4ED_0B29_000B_DF20();
}

/**
 * Decompiled function f__B4ED_0B29_000B_DF20()
 *
 * @name f__B4ED_0B29_000B_DF20
 * @implements B4ED:0B29:000B:DF20 ()
 *
 * Called From: B4ED:0B29:0011:B6CD
 */
void f__B4ED_0B29_000B_DF20()
{
	emu_addws(&emu_sp, 0x8);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x7F52), 0x0);
	f__B4ED_0B9E_0011_D835(); return;
}

/**
 * Decompiled function f__B4ED_0B2C_0008_8E34()
 *
 * @name f__B4ED_0B2C_0008_8E34
 * @implements B4ED:0B2C:0008:8E34 ()
 *
 * Called From: B4ED:0B16:0005:8F6E
 */
void f__B4ED_0B2C_0008_8E34()
{
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x7F52), 0x0);
	f__B4ED_0B9E_0011_D835(); return;
}

/**
 * Decompiled function f__B4ED_0B34_000B_C01D()
 *
 * @name f__B4ED_0B34_000B_C01D
 * @implements B4ED:0B34:000B:C01D ()
 *
 * Called From: B4ED:0AF7:0038:50FD
 */
void f__B4ED_0B34_000B_C01D()
{
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00, -0x7F52), 0x1);
	if (!emu_flags.zf) { f__B4ED_0B6F_0004_FDF9(); return; }
	emu_xorw(&emu_si, emu_si);
	f__B4ED_0B68_0007_F468(); return;
}

/**
 * Decompiled function f__B4ED_0B3F_0020_1BA6()
 *
 * @name f__B4ED_0B3F_0020_1BA6
 * @implements B4ED:0B3F:0020:1BA6 ()
 *
 * Called From: B4ED:0B6B:0007:F468
 * Called From: B4ED:0B6B:0010:125F
 * Called From: B4ED:0B6B:000C:18B8
 */
void f__B4ED_0B3F_0020_1BA6()
{
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ds, emu_si, -0x7F8A));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_push(emu_ax.x);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ds, emu_si, -0x7F78));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_pop(&emu_dx.x);
	emu_addw(&emu_dx.x, emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx.x);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ds, emu_si, -0x7F66));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__B4ED_0B5F_0010_125F(); return; }
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ss, emu_bp, -0x2));
	f__B4ED_0B63_000C_18B8(); return;
}

/**
 * Decompiled function f__B4ED_0B5F_0010_125F()
 *
 * @name f__B4ED_0B5F_0010_125F
 * @implements B4ED:0B5F:0010:125F ()
 *
 * Called From: B4ED:0B58:0020:1BA6
 */
void f__B4ED_0B5F_0010_125F()
{
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ds, emu_si, -0x7F66));
	emu_movb(&emu_get_memory8(emu_ds, emu_si, -0x7F78), emu_ax.l);
	emu_incw(&emu_si);
	emu_cmpws(&emu_si, 0x12);
	if ((emu_flags.sf != emu_flags.of)) { f__B4ED_0B3F_0020_1BA6(); return; }
	f__B4ED_0B9E_0011_D835(); return;
}

/**
 * Decompiled function f__B4ED_0B63_000C_18B8()
 *
 * @name f__B4ED_0B63_000C_18B8
 * @implements B4ED:0B63:000C:18B8 ()
 *
 * Called From: B4ED:0B5D:0020:1BA6
 */
void f__B4ED_0B63_000C_18B8()
{
	emu_movb(&emu_get_memory8(emu_ds, emu_si, -0x7F78), emu_ax.l);
	emu_incw(&emu_si);
	emu_cmpws(&emu_si, 0x12);
	if ((emu_flags.sf != emu_flags.of)) { f__B4ED_0B3F_0020_1BA6(); return; }
	f__B4ED_0B9E_0011_D835(); return;
}

/**
 * Decompiled function f__B4ED_0B68_0007_F468()
 *
 * @name f__B4ED_0B68_0007_F468
 * @implements B4ED:0B68:0007:F468 ()
 *
 * Called From: B4ED:0B3D:000B:C01D
 */
void f__B4ED_0B68_0007_F468()
{
	emu_cmpws(&emu_si, 0x12);
	if ((emu_flags.sf != emu_flags.of)) { f__B4ED_0B3F_0020_1BA6(); return; }
	emu_ip = 0x0B9E; emu_last_cs = 0xB4ED; emu_last_ip = 0x0B6D; emu_last_length = 0x0007; emu_last_crc = 0xF468; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B4ED_0B6F_0004_FDF9()
 *
 * @name f__B4ED_0B6F_0004_FDF9
 * @implements B4ED:0B6F:0004:FDF9 ()
 *
 * Called From: B4ED:0B39:000B:C01D
 */
void f__B4ED_0B6F_0004_FDF9()
{
	emu_xorw(&emu_si, emu_si);
	f__B4ED_0B99_0016_BC73(); return;
}

/**
 * Decompiled function f__B4ED_0B73_0020_F173()
 *
 * @name f__B4ED_0B73_0020_F173
 * @implements B4ED:0B73:0020:F173 ()
 *
 * Called From: B4ED:0B9C:0016:BC73
 * Called From: B4ED:0B9C:0017:BCFF
 * Called From: B4ED:0B9C:001C:12CF
 */
void f__B4ED_0B73_0020_F173()
{
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ds, emu_si, -0x7F78));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_push(emu_ax.x);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ds, emu_si, -0x7F8A));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_pop(&emu_dx.x);
	emu_subw(&emu_dx.x, emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx.x);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x0);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__B4ED_0B93_001C_12CF(); return; }
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ss, emu_bp, -0x2));
	emu_movb(&emu_get_memory8(emu_ds, emu_si, -0x7F78), emu_ax.l);
	f__B4ED_0B98_0017_BCFF(); return;
}

/**
 * Decompiled function f__B4ED_0B93_001C_12CF()
 *
 * @name f__B4ED_0B93_001C_12CF
 * @implements B4ED:0B93:001C:12CF ()
 *
 * Called From: B4ED:0B88:0020:F173
 */
void f__B4ED_0B93_001C_12CF()
{
	emu_movb(&emu_get_memory8(emu_ds, emu_si, -0x7F78), 0x0);
	emu_incw(&emu_si);
	emu_cmpws(&emu_si, 0x12);
	if ((emu_flags.sf != emu_flags.of)) { f__B4ED_0B73_0020_F173(); return; }
	emu_orw(&emu_di, emu_di);
	if (!emu_flags.zf) { emu_ip = 0x0BC9; emu_last_cs = 0xB4ED; emu_last_ip = 0x0BA0; emu_last_length = 0x001C; emu_last_crc = 0x12CF; emu_call(); return; } // Jump does not resolve
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x6674));
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x6676));
	emu_push(emu_cs);
	emu_push(0x0BAF); f__B4ED_0BD4_001B_FFBA();
	f__B4ED_0BAF_0017_53DB();
}

/**
 * Decompiled function f__B4ED_0B98_0017_BCFF()
 *
 * @name f__B4ED_0B98_0017_BCFF
 * @implements B4ED:0B98:0017:BCFF ()
 *
 * Called From: B4ED:0B91:0020:F173
 */
void f__B4ED_0B98_0017_BCFF()
{
	emu_incw(&emu_si);
	emu_cmpws(&emu_si, 0x12);
	if ((emu_flags.sf != emu_flags.of)) { f__B4ED_0B73_0020_F173(); return; }
	emu_orw(&emu_di, emu_di);
	if (!emu_flags.zf) { emu_ip = 0x0BC9; emu_last_cs = 0xB4ED; emu_last_ip = 0x0BA0; emu_last_length = 0x0017; emu_last_crc = 0xBCFF; emu_call(); return; } // Jump does not resolve
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x6674));
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x6676));
	emu_push(emu_cs);
	emu_push(0x0BAF); f__B4ED_0BD4_001B_FFBA();
	f__B4ED_0BAF_0017_53DB();
}

/**
 * Decompiled function f__B4ED_0B99_0016_BC73()
 *
 * @name f__B4ED_0B99_0016_BC73
 * @implements B4ED:0B99:0016:BC73 ()
 *
 * Called From: B4ED:0B71:0004:FDF9
 */
void f__B4ED_0B99_0016_BC73()
{
	emu_cmpws(&emu_si, 0x12);
	if ((emu_flags.sf != emu_flags.of)) { f__B4ED_0B73_0020_F173(); return; }
	emu_orw(&emu_di, emu_di);
	if (!emu_flags.zf) { emu_ip = 0x0BC9; emu_last_cs = 0xB4ED; emu_last_ip = 0x0BA0; emu_last_length = 0x0016; emu_last_crc = 0xBC73; emu_call(); return; } // Jump does not resolve
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x6674));
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x6676));
	emu_push(emu_cs);
	emu_push(0x0BAF); emu_ip = 0x0BD4; emu_last_cs = 0xB4ED; emu_last_ip = 0x0BAC; emu_last_length = 0x0016; emu_last_crc = 0xBC73; emu_call(); // Jump does not resolve
	f__B4ED_0BAF_0017_53DB();
}

/**
 * Decompiled function f__B4ED_0B9E_0011_D835()
 *
 * @name f__B4ED_0B9E_0011_D835
 * @implements B4ED:0B9E:0011:D835 ()
 *
 * Called From: B4ED:0B32:0008:8E34
 * Called From: B4ED:0B32:000B:DF20
 * Called From: B4ED:0B6D:0010:125F
 * Called From: B4ED:0B6D:000C:18B8
 */
void f__B4ED_0B9E_0011_D835()
{
	emu_orw(&emu_di, emu_di);
	if (!emu_flags.zf) { f__B4ED_0BC9_0005_3538(); return; }
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x6674));
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x6676));
	emu_push(emu_cs);
	emu_push(0x0BAF); f__B4ED_0BD4_001B_FFBA();
	f__B4ED_0BAF_0017_53DB();
}

/**
 * Decompiled function f__B4ED_0BAF_0017_53DB()
 *
 * @name f__B4ED_0BAF_0017_53DB
 * @implements B4ED:0BAF:0017:53DB ()
 *
 * Called From: B4ED:0BAF:0011:D835
 * Called From: B4ED:0BAF:001C:12CF
 * Called From: B4ED:0BAF:0017:BCFF
 */
void f__B4ED_0BAF_0017_53DB()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_ax.x, 0xDD);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0xD7);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x6674));
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x6676));
	emu_push(emu_cs); emu_push(0x0BC6); emu_cs = 0x2BA5; f__2BA5_0006_009C_A3D1();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34ED) { ovl__34ED(0xFF); }
	f__B4ED_0BC6_0008_97B0();
}

/**
 * Decompiled function f__B4ED_0BC6_0008_97B0()
 *
 * @name f__B4ED_0BC6_0008_97B0
 * @implements B4ED:0BC6:0008:97B0 ()
 *
 * Called From: B4ED:0BC6:0017:53DB
 */
void f__B4ED_0BC6_0008_97B0()
{
	emu_addws(&emu_sp, 0x8);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00, -0x7F52));
	f__B4ED_0BCE_0006_F7CE(); return;
}

/**
 * Decompiled function f__B4ED_0BC9_0005_3538()
 *
 * @name f__B4ED_0BC9_0005_3538
 * @implements B4ED:0BC9:0005:3538 ()
 *
 * Called From: B4ED:0ABC:000A:21D5
 * Called From: B4ED:0AD8:001C:4DFB
 * Called From: B4ED:0BA0:0011:D835
 */
void f__B4ED_0BC9_0005_3538()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00, -0x7F52));
	f__B4ED_0BCE_0006_F7CE(); return;
}

/**
 * Decompiled function f__B4ED_0BCE_0006_F7CE()
 *
 * @name f__B4ED_0BCE_0006_F7CE
 * @implements B4ED:0BCE:0006:F7CE ()
 *
 * Called From: B4ED:0BCC:0005:3538
 * Called From: B4ED:0BCC:0008:97B0
 */
void f__B4ED_0BCE_0006_F7CE()
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
 * Decompiled function f__B4ED_0BD4_001B_FFBA()
 *
 * @name f__B4ED_0BD4_001B_FFBA
 * @implements B4ED:0BD4:001B:FFBA ()
 *
 * Called From: B4ED:03EB:000E:4927
 * Called From: B4ED:06A6:0010:3DF7
 * Called From: B4ED:06FB:000E:F48E
 * Called From: B4ED:0BAC:0011:D835
 * Called From: B4ED:0BAC:001C:12CF
 * Called From: B4ED:0BAC:0017:BCFF
 */
void f__B4ED_0BD4_001B_FFBA()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_movw(&emu_ax.x, 0x12);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x8088);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_addw(&emu_ax.x, 0x285);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0BEF); emu_cs = 0x01F7; f__01F7_28B8_0024_83C9();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34ED) { ovl__34ED(0xFF); }
	f__B4ED_0BEF_0005_60C3();
}

/**
 * Decompiled function f__B4ED_0BEF_0005_60C3()
 *
 * @name f__B4ED_0BEF_0005_60C3
 * @implements B4ED:0BEF:0005:60C3 ()
 *
 * Called From: B4ED:0BEF:001B:FFBA
 */
void f__B4ED_0BEF_0005_60C3()
{
	emu_addws(&emu_sp, 0xA);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B4ED_0BF4_001B_A3A9()
 *
 * @name f__B4ED_0BF4_001B_A3A9
 * @implements B4ED:0BF4:001B:A3A9 ()
 *
 * Called From: B4ED:09A8:0008:A137
 */
void f__B4ED_0BF4_001B_A3A9()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x8);
	emu_push(emu_si);
	emu_movw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x0C0F); f__B4ED_0CB5_0015_3E7D();
	f__B4ED_0C0F_0017_23CA();
}

/**
 * Decompiled function f__B4ED_0C0F_0017_23CA()
 *
 * @name f__B4ED_0C0F_0017_23CA
 * @implements B4ED:0C0F:0017:23CA ()
 *
 * Called From: B4ED:0C0F:001B:A3A9
 */
void f__B4ED_0C0F_0017_23CA()
{
	emu_addws(&emu_sp, 0x8);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_dx.x);
	f__B4ED_0C29_002A_12B1(); return;
}

/**
 * Decompiled function f__B4ED_0C26_002D_EEC9()
 *
 * @name f__B4ED_0C26_002D_EEC9
 * @implements B4ED:0C26:002D:EEC9 ()
 *
 * Called From: B4ED:0C3C:002A:12B1
 * Called From: B4ED:0C3C:002D:EEC9
 */
void f__B4ED_0C26_002D_EEC9()
{
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0x0);
	if (emu_flags.zf) { f__B4ED_0C3E_0015_D153(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x0));
	emu_cmpb(&emu_ax.l, emu_get_memory8(emu_ds, 0x00,  0x264A));
	if (!emu_flags.zf) { f__B4ED_0C26_002D_EEC9(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0x0);
	if (emu_flags.zf) { emu_ip = 0x0C53; emu_last_cs = 0xB4ED; emu_last_ip = 0x0C45; emu_last_length = 0x002D; emu_last_crc = 0xEEC9; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0x0);
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x8));
	f__B4ED_0C5D_001B_FAE7(); return;
}

/**
 * Decompiled function f__B4ED_0C29_002A_12B1()
 *
 * @name f__B4ED_0C29_002A_12B1
 * @implements B4ED:0C29:002A:12B1 ()
 *
 * Called From: B4ED:0C24:0017:23CA
 */
void f__B4ED_0C29_002A_12B1()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0x0);
	if (emu_flags.zf) { emu_ip = 0x0C3E; emu_last_cs = 0xB4ED; emu_last_ip = 0x0C30; emu_last_length = 0x002A; emu_last_crc = 0x12B1; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x0));
	emu_cmpb(&emu_ax.l, emu_get_memory8(emu_ds, 0x00,  0x264A));
	if (!emu_flags.zf) { f__B4ED_0C26_002D_EEC9(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0x0);
	if (emu_flags.zf) { emu_ip = 0x0C53; emu_last_cs = 0xB4ED; emu_last_ip = 0x0C45; emu_last_length = 0x002A; emu_last_crc = 0x12B1; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0x0);
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_ip = 0x0C5D; emu_last_cs = 0xB4ED; emu_last_ip = 0x0C51; emu_last_length = 0x002A; emu_last_crc = 0x12B1; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B4ED_0C3E_0015_D153()
 *
 * @name f__B4ED_0C3E_0015_D153
 * @implements B4ED:0C3E:0015:D153 ()
 *
 * Called From: B4ED:0C30:002D:EEC9
 */
void f__B4ED_0C3E_0015_D153()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0x0);
	if (emu_flags.zf) { f__B4ED_0C53_0025_0CBC(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0x0);
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_ip = 0x0C5D; emu_last_cs = 0xB4ED; emu_last_ip = 0x0C51; emu_last_length = 0x0015; emu_last_crc = 0xD153; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B4ED_0C53_0025_0CBC()
 *
 * @name f__B4ED_0C53_0025_0CBC
 * @implements B4ED:0C53:0025:0CBC ()
 *
 * Called From: B4ED:0C45:0015:D153
 */
void f__B4ED_0C53_0025_0CBC()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x0);
	emu_movw(&emu_ax.x, 0x100);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0xD7);
	emu_push(emu_ax.x);
	emu_push(emu_si);
	emu_movw(&emu_ax.x, 0xA0);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x0C78); emu_cs = 0x10E4; f__10E4_1EF1_0040_01F8();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34ED) { ovl__34ED(0xFF); }
	f__B4ED_0C78_002B_3DD8();
}

/**
 * Decompiled function f__B4ED_0C5D_001B_FAE7()
 *
 * @name f__B4ED_0C5D_001B_FAE7
 * @implements B4ED:0C5D:001B:FAE7 ()
 *
 * Called From: B4ED:0C51:002D:EEC9
 */
void f__B4ED_0C5D_001B_FAE7()
{
	emu_movw(&emu_ax.x, 0x100);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0xD7);
	emu_push(emu_ax.x);
	emu_push(emu_si);
	emu_movw(&emu_ax.x, 0xA0);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x0C78); emu_cs = 0x10E4; f__10E4_1EF1_0040_01F8();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34ED) { ovl__34ED(0xFF); }
	f__B4ED_0C78_002B_3DD8();
}

/**
 * Decompiled function f__B4ED_0C78_002B_3DD8()
 *
 * @name f__B4ED_0C78_002B_3DD8
 * @implements B4ED:0C78:002B:3DD8 ()
 *
 * Called From: B4ED:0C78:0025:0CBC
 * Called From: B4ED:0C78:001B:FAE7
 */
void f__B4ED_0C78_002B_3DD8()
{
	emu_addws(&emu_sp, 0xE);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	if (emu_flags.zf) { f__B4ED_0CB0_0005_8BCF(); return; }
	emu_movw(&emu_ax.x, 0x100);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0xD7);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_si);
	emu_addw(&emu_ax.x, 0x12);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0xA0);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs); emu_push(0x0CA3); emu_cs = 0x10E4; f__10E4_1EF1_0040_01F8();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34ED) { ovl__34ED(0xFF); }
	f__B4ED_0CA3_0012_1689();
}

/**
 * Decompiled function f__B4ED_0CA3_0012_1689()
 *
 * @name f__B4ED_0CA3_0012_1689
 * @implements B4ED:0CA3:0012:1689 ()
 *
 * Called From: B4ED:0CA3:002B:3DD8
 */
void f__B4ED_0CA3_0012_1689()
{
	emu_addws(&emu_sp, 0xE);
	emu_decw(&emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0xD);
	emu_pop(&emu_si);
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B4ED_0CB0_0005_8BCF()
 *
 * @name f__B4ED_0CB0_0005_8BCF
 * @implements B4ED:0CB0:0005:8BCF ()
 *
 * Called From: B4ED:0C81:002B:3DD8
 */
void f__B4ED_0CB0_0005_8BCF()
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
 * Decompiled function f__B4ED_0CB5_0015_3E7D()
 *
 * @name f__B4ED_0CB5_0015_3E7D
 * @implements B4ED:0CB5:0015:3E7D ()
 *
 * Called From: B4ED:0C0C:001B:A3A9
 */
void f__B4ED_0CB5_0015_3E7D()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_flags.zf) { emu_ip = 0x0D04; emu_last_cs = 0xB4ED; emu_last_ip = 0x0CBE; emu_last_length = 0x0015; emu_last_crc = 0x3E7D; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xC));
	if (emu_flags.zf) { emu_ip = 0x0D04; emu_last_cs = 0xB4ED; emu_last_ip = 0x0CC6; emu_last_length = 0x0015; emu_last_crc = 0x3E7D; emu_call(); return; } // Jump does not resolve
	f__B4ED_0CF4_0012_9FA9(); return;
}

/**
 * Decompiled function f__B4ED_0CCA_0018_4398()
 *
 * @name f__B4ED_0CCA_0018_4398
 * @implements B4ED:0CCA:0018:4398 ()
 *
 * Called From: B4ED:0CFB:0012:9FA9
 * Called From: B4ED:0CFB:0024:596B
 */
void f__B4ED_0CCA_0018_4398()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0xE1);
	if (!emu_flags.zf) { f__B4ED_0CE2_0024_596B(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0x1);
	emu_incw(&emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_incw(&emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_ip = 0x0CF4; emu_last_cs = 0xB4ED; emu_last_ip = 0x0CE0; emu_last_length = 0x0018; emu_last_crc = 0x4398; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B4ED_0CE2_0024_596B()
 *
 * @name f__B4ED_0CE2_0024_596B
 * @implements B4ED:0CE2:0024:596B ()
 *
 * Called From: B4ED:0CD1:0018:4398
 */
void f__B4ED_0CE2_0024_596B()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x0));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), emu_ax.l);
	emu_incw(&emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_incw(&emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0x0);
	if (!emu_flags.zf) { f__B4ED_0CCA_0018_4398(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0x0);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B4ED_0CF4_0012_9FA9()
 *
 * @name f__B4ED_0CF4_0012_9FA9
 * @implements B4ED:0CF4:0012:9FA9 ()
 *
 * Called From: B4ED:0CC8:0015:3E7D
 */
void f__B4ED_0CF4_0012_9FA9()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0x0);
	if (!emu_flags.zf) { f__B4ED_0CCA_0018_4398(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0x0);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

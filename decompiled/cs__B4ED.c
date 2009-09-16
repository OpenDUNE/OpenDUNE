/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__B4ED_0000_0079_1F8D()
 *
 * @name f__B4ED_0000_0079_1F8D
 * @implements B4ED:0000:0079:1F8D ()
 *
 * Called From: 34ED:0020:0005:1CAC
 * Called From: 34ED:0020:0005:1CFE
 * Called From: 34ED:0020:0005:1D70
 * Called From: 34ED:0020:0005:1DE2
 * Called From: 34ED:0020:0005:1E20
 * Called From: 34ED:0020:0005:1E3E
 * Called From: 34ED:0020:0005:1E6C
 * Called From: 34ED:0020:0005:1E92
 * Called From: 34ED:0020:0005:1EFA
 */
void f__B4ED_0000_0079_1F8D()
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
		case 0x22A60796: f__22A6_0796_000B_3851(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0xB4ED; emu_last_ip = 0x0074; emu_last_length = 0x0079; emu_last_crc = 0x1F8D;
			emu_call();
			return;
	}
	f__B4ED_0079_0019_CA0E();
}

/**
 * Decompiled function f__B4ED_0079_0019_CA0E()
 *
 * @name f__B4ED_0079_0019_CA0E
 * @implements B4ED:0079:0019:CA0E ()
 *
 * Called From: B4ED:0079:0079:1F8D
 */
void f__B4ED_0079_0019_CA0E()
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
	emu_push(emu_cs); emu_push(0x0092); emu_cs = 0x253D; f__253D_0000_0013_AAD7();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34ED) { ovl__34ED(0xFF); }
	f__B4ED_0092_001C_6C84();
}

/**
 * Decompiled function f__B4ED_0092_001C_6C84()
 *
 * @name f__B4ED_0092_001C_6C84
 * @implements B4ED:0092:001C:6C84 ()
 *
 * Called From: B4ED:0092:0019:CA0E
 */
void f__B4ED_0092_001C_6C84()
{
	emu_addws(&emu_sp, 0xC);
	emu_movw(&emu_ax.x, 0x300);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3C34));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3C32));
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x6674));
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x6676));
	emu_push(emu_cs); emu_push(0x00AE); emu_cs = 0x01F7; f__01F7_28B8_0024_D407();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34ED) { ovl__34ED(0xFF); }
	f__B4ED_00AE_000D_9E63();
}

/**
 * Decompiled function f__B4ED_00AE_000D_9E63()
 *
 * @name f__B4ED_00AE_000D_9E63
 * @implements B4ED:00AE:000D:9E63 ()
 *
 * Called From: B4ED:00AE:001C:6C84
 */
void f__B4ED_00AE_000D_9E63()
{
	emu_addws(&emu_sp, 0xA);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x25F2);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x00BB); emu_cs = 0x256D; f__256D_0004_001C_37ED();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34ED) { ovl__34ED(0xFF); }
	f__B4ED_00BB_0016_6CAD();
}

/**
 * Decompiled function f__B4ED_00BB_0016_6CAD()
 *
 * @name f__B4ED_00BB_0016_6CAD
 * @implements B4ED:00BB:0016:6CAD ()
 *
 * Called From: B4ED:00BB:000D:9E63
 */
void f__B4ED_00BB_0016_6CAD()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x7F9A), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x7F9C), emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x7F9A));
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x7F9C));
	emu_push(emu_cs); emu_push(0x00D1); emu_cs = 0x2605; f__2605_000C_006D_4FAF();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34ED) { ovl__34ED(0xFF); }
	f__B4ED_00D1_000A_806B();
}

/**
 * Decompiled function f__B4ED_00D1_000A_806B()
 *
 * @name f__B4ED_00D1_000A_806B
 * @implements B4ED:00D1:000A:806B ()
 *
 * Called From: B4ED:00D1:0016:6CAD
 */
void f__B4ED_00D1_000A_806B()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x00DB); emu_cs = 0x2598; f__2598_0000_0017_D681();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34ED) { ovl__34ED(0xFF); }
	f__B4ED_00DB_002E_26E0();
}

/**
 * Decompiled function f__B4ED_00DB_002E_26E0()
 *
 * @name f__B4ED_00DB_002E_26E0
 * @implements B4ED:00DB:002E:26E0 ()
 *
 * Called From: B4ED:00DB:000A:806B
 */
void f__B4ED_00DB_002E_26E0()
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
	emu_push(emu_cs); emu_push(0x0109); emu_cs = 0x01F7; f__01F7_28B8_0024_D407();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34ED) { ovl__34ED(0xFF); }
	f__B4ED_0109_001A_8AA1();
}

/**
 * Decompiled function f__B4ED_0109_001A_8AA1()
 *
 * @name f__B4ED_0109_001A_8AA1
 * @implements B4ED:0109:001A:8AA1 ()
 *
 * Called From: B4ED:0109:002E:26E0
 */
void f__B4ED_0109_001A_8AA1()
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
	emu_push(emu_cs); emu_push(0x0123); emu_cs = 0x01F7; f__01F7_2947_0014_9C5E();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34ED) { ovl__34ED(0xFF); }
	f__B4ED_0123_0016_337F();
}

/**
 * Decompiled function f__B4ED_0123_0016_337F()
 *
 * @name f__B4ED_0123_0016_337F
 * @implements B4ED:0123:0016:337F ()
 *
 * Called From: B4ED:0123:001A:8AA1
 */
void f__B4ED_0123_0016_337F()
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
	emu_push(emu_cs); emu_push(0x0139); emu_cs = 0x01F7; f__01F7_28B8_0024_D407();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34ED) { ovl__34ED(0xFF); }
	f__B4ED_0139_0014_D0E1();
}

/**
 * Decompiled function f__B4ED_0139_0014_D0E1()
 *
 * @name f__B4ED_0139_0014_D0E1
 * @implements B4ED:0139:0014:D0E1 ()
 *
 * Called From: B4ED:0139:0016:337F
 */
void f__B4ED_0139_0014_D0E1()
{
	emu_addws(&emu_sp, 0xA);
	emu_movw(&emu_ax.x, 0x12);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x8076);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x014D); emu_cs = 0x01F7; f__01F7_2947_0014_9C5E();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34ED) { ovl__34ED(0xFF); }
	f__B4ED_014D_000E_5A74();
}

/**
 * Decompiled function f__B4ED_014D_000E_5A74()
 *
 * @name f__B4ED_014D_000E_5A74
 * @implements B4ED:014D:000E:5A74 ()
 *
 * Called From: B4ED:014D:0014:D0E1
 */
void f__B4ED_014D_000E_5A74()
{
	emu_addws(&emu_sp, 0x8);
	emu_movb(&emu_get_memory8(emu_ss, emu_bp, -0x12), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x0);
	f__B4ED_016E_0010_CCE0(); return;
}

/**
 * Decompiled function f__B4ED_015B_0023_68B0()
 *
 * @name f__B4ED_015B_0023_68B0
 * @implements B4ED:015B:0023:68B0 ()
 *
 * Called From: B4ED:0172:0010:CCE0
 * Called From: B4ED:0172:0023:68B0
 */
void f__B4ED_015B_0023_68B0()
{
	emu_movw(&emu_ax.x, emu_bp - 0x11);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ss, emu_bp, -0x2));
	emu_addb(&emu_ax.l, 0xD7);
	emu_movb(&emu_get_memory8(emu_ss, emu_bx.x,  0x0), emu_ax.l);
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x6);
	if ((emu_flags.sf != emu_flags.of)) { f__B4ED_015B_0023_68B0(); return; }
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0x12);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x017E); emu_cs = 0x259E; f__259E_0021_001A_9268();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34ED) { ovl__34ED(0xFF); }
	f__B4ED_017E_0006_121A();
}

/**
 * Decompiled function f__B4ED_016E_0010_CCE0()
 *
 * @name f__B4ED_016E_0010_CCE0
 * @implements B4ED:016E:0010:CCE0 ()
 *
 * Called From: B4ED:0159:000E:5A74
 */
void f__B4ED_016E_0010_CCE0()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x6);
	if ((emu_flags.sf != emu_flags.of)) { f__B4ED_015B_0023_68B0(); return; }
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0x12);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x017E); emu_cs = 0x259E; emu_ip = 0x019F; emu_last_cs = 0xB4ED; emu_last_ip = 0x0179; emu_last_length = 0x0010; emu_last_crc = 0xCCE0; emu_call(); // Jump does not resolve
	f__B4ED_017E_0006_121A();
}

/**
 * Decompiled function f__B4ED_017E_0006_121A()
 *
 * @name f__B4ED_017E_0006_121A
 * @implements B4ED:017E:0006:121A ()
 *
 * Called From: B4ED:017E:0023:68B0
 */
void f__B4ED_017E_0006_121A()
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
 * Decompiled function f__B4ED_0184_0010_F69D()
 *
 * @name f__B4ED_0184_0010_F69D
 * @implements B4ED:0184:0010:F69D ()
 *
 * Called From: 34ED:0025:0005:14B6
 * Called From: 34ED:0025:0005:14E4
 * Called From: 34ED:0025:0005:1538
 * Called From: 34ED:0025:0005:15AA
 * Called From: 34ED:0025:0005:1624
 * Called From: 34ED:0025:0005:1668
 * Called From: 34ED:0025:0005:1676
 * Called From: 34ED:0025:0005:16DA
 * Called From: 34ED:0025:0005:16B2
 */
void f__B4ED_0184_0010_F69D()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x7F9A));
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x7F9C));
	emu_push(emu_cs); emu_push(0x0194); emu_cs = 0x23E1; f__23E1_01C2_0011_4E4B();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34ED) { ovl__34ED(0xFF); }
	f__B4ED_0194_001D_CCF6();
}

/**
 * Decompiled function f__B4ED_0194_001D_CCF6()
 *
 * @name f__B4ED_0194_001D_CCF6
 * @implements B4ED:0194:001D:CCF6 ()
 *
 * Called From: B4ED:0194:0010:F69D
 */
void f__B4ED_0194_001D_CCF6()
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
	emu_push(emu_cs); emu_push(0x01B1); emu_cs = 0x10E4; f__10E4_1EF1_0040_E33D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34ED) { ovl__34ED(0xFF); }
	f__B4ED_01B1_001E_D0C0();
}

/**
 * Decompiled function f__B4ED_01B1_001E_D0C0()
 *
 * @name f__B4ED_01B1_001E_D0C0
 * @implements B4ED:01B1:001E:D0C0 ()
 *
 * Called From: B4ED:01B1:001D:CCF6
 */
void f__B4ED_01B1_001E_D0C0()
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
	emu_push(emu_cs); emu_push(0x01CF); emu_cs = 0x10E4; f__10E4_1EF1_0040_E33D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34ED) { ovl__34ED(0xFF); }
	f__B4ED_01CF_0014_727E();
}

/**
 * Decompiled function f__B4ED_01CF_0014_727E()
 *
 * @name f__B4ED_01CF_0014_727E
 * @implements B4ED:01CF:0014:727E ()
 *
 * Called From: B4ED:01CF:001E:D0C0
 */
void f__B4ED_01CF_0014_727E()
{
	emu_addws(&emu_sp, 0xE);
	emu_movw(&emu_ax.x, 0x3C);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3C38));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3C36));
	emu_push(emu_cs); emu_push(0x01E3); emu_cs = 0x259E; f__259E_0006_0016_2DFF();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34ED) { ovl__34ED(0xFF); }
	f__B4ED_01E3_000B_5327();
}

/**
 * Decompiled function f__B4ED_01E3_000B_5327()
 *
 * @name f__B4ED_01E3_000B_5327
 * @implements B4ED:01E3:000B:5327 ()
 *
 * Called From: B4ED:01E3:0014:727E
 */
void f__B4ED_01E3_000B_5327()
{
	emu_addws(&emu_sp, 0x6);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x01EE); emu_cs = 0x24DA; f__24DA_0004_000E_98E7();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34ED) { ovl__34ED(0xFF); }
	f__B4ED_01EE_0006_053A();
}

/**
 * Decompiled function f__B4ED_01EE_0006_053A()
 *
 * @name f__B4ED_01EE_0006_053A
 * @implements B4ED:01EE:0006:053A ()
 *
 * Called From: B4ED:01EE:000B:5327
 */
void f__B4ED_01EE_0006_053A()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_cs); emu_push(0x01F4); emu_cs = 0x29E8; f__29E8_073F_000E_A6E4();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34ED) { ovl__34ED(0xFF); }
	f__B4ED_01F4_0009_71B1();
}

/**
 * Decompiled function f__B4ED_01F4_0009_71B1()
 *
 * @name f__B4ED_01F4_0009_71B1
 * @implements B4ED:01F4:0009:71B1 ()
 *
 * Called From: B4ED:01F4:0006:053A
 */
void f__B4ED_01F4_0009_71B1()
{
	emu_movw(&emu_ax.x, 0x7);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x01FD); emu_cs = 0x24DA; f__24DA_002D_0010_5D17();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34ED) { ovl__34ED(0xFF); }
	f__B4ED_01FD_0003_022A();
}

/**
 * Decompiled function f__B4ED_01FD_0003_022A()
 *
 * @name f__B4ED_01FD_0003_022A
 * @implements B4ED:01FD:0003:022A ()
 *
 * Called From: B4ED:01FD:0009:71B1
 */
void f__B4ED_01FD_0003_022A()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B4ED_0200_000F_91F8()
 *
 * @name f__B4ED_0200_000F_91F8
 * @implements B4ED:0200:000F:91F8 ()
 *
 * Called From: 34ED:002A:0005:1CBC
 * Called From: 34ED:002A:0005:1CEE
 * Called From: 34ED:002A:0005:1D60
 * Called From: 34ED:002A:0005:1DF2
 * Called From: 34ED:002A:0005:1E2E
 * Called From: 34ED:002A:0005:1E30
 * Called From: 34ED:002A:0005:1E7C
 * Called From: 34ED:002A:0005:1E82
 * Called From: 34ED:002A:0005:1EEA
 */
void f__B4ED_0200_000F_91F8()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x24);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movb(&emu_get_memory8(emu_ss, emu_bp, -0x1), 0x0);
	f__B4ED_073F_000E_CE36(); return;
}

/**
 * Decompiled function f__B4ED_020F_0044_5381()
 *
 * @name f__B4ED_020F_0044_5381
 * @implements B4ED:020F:0044:5381 ()
 *
 * Called From: B4ED:074A:000E:CE36
 * Called From: B4ED:074A:0022:81E9
 */
void f__B4ED_020F_0044_5381()
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
	if (emu_flags.zf) { f__B4ED_0253_0016_5A72(); return; }
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__B4ED_0256_0013_7772(); return;
}

/**
 * Decompiled function f__B4ED_0253_0016_5A72()
 *
 * @name f__B4ED_0253_0016_5A72
 * @implements B4ED:0253:0016:5A72 ()
 *
 * Called From: B4ED:024D:0044:5381
 */
void f__B4ED_0253_0016_5A72()
{
	emu_movw(&emu_ax.x, 0x18);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x7FA2));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0x6), 0x20);
	if (emu_flags.zf) { f__B4ED_0269_002F_B64B(); return; }
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_ip = 0x026C; emu_last_cs = 0xB4ED; emu_last_ip = 0x0267; emu_last_length = 0x0016; emu_last_crc = 0x5A72; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B4ED_0256_0013_7772()
 *
 * @name f__B4ED_0256_0013_7772
 * @implements B4ED:0256:0013:7772 ()
 *
 * Called From: B4ED:0251:0044:5381
 */
void f__B4ED_0256_0013_7772()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x7FA2));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0x6), 0x20);
	if (emu_flags.zf) { emu_ip = 0x0269; emu_last_cs = 0xB4ED; emu_last_ip = 0x0263; emu_last_length = 0x0013; emu_last_crc = 0x7772; emu_call(); return; } // Jump does not resolve
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__B4ED_026C_002C_B615(); return;
}

/**
 * Decompiled function f__B4ED_0269_002F_B64B()
 *
 * @name f__B4ED_0269_002F_B64B
 * @implements B4ED:0269:002F:B64B ()
 *
 * Called From: B4ED:0263:0016:5A72
 */
void f__B4ED_0269_002F_B64B()
{
	emu_movw(&emu_ax.x, 0x8);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x7FA2));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x6));
	emu_andw(&emu_ax.x, 0x3);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x1E), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x7F98), 0x0);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x1E), 0x0);
	if (!emu_flags.zf) { f__B4ED_0298_0019_1B94(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), 0x0);
	emu_xorw(&emu_si, emu_si);
	f__B4ED_0375_0019_E9D4(); return;
}

/**
 * Decompiled function f__B4ED_026C_002C_B615()
 *
 * @name f__B4ED_026C_002C_B615
 * @implements B4ED:026C:002C:B615 ()
 *
 * Called From: B4ED:0267:0013:7772
 */
void f__B4ED_026C_002C_B615()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x7FA2));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x6));
	emu_andw(&emu_ax.x, 0x3);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x1E), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x7F98), 0x0);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x1E), 0x0);
	if (!emu_flags.zf) { f__B4ED_0298_0019_1B94(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), 0x0);
	emu_xorw(&emu_si, emu_si);
	emu_ip = 0x0375; emu_last_cs = 0xB4ED; emu_last_ip = 0x0295; emu_last_length = 0x002C; emu_last_crc = 0xB615; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B4ED_0298_0019_1B94()
 *
 * @name f__B4ED_0298_0019_1B94
 * @implements B4ED:0298:0019:1B94 ()
 *
 * Called From: B4ED:0287:002C:B615
 * Called From: B4ED:0287:002F:B64B
 */
void f__B4ED_0298_0019_1B94()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x1E), 0x3);
	if (!emu_flags.zf) { f__B4ED_02B1_0025_A366(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x7FA2));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x5));
	emu_movb(&emu_ax.h, 0x0);
	emu_movw(&emu_si, emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x20), 0x1);
	emu_ip = 0x02C1; emu_last_cs = 0xB4ED; emu_last_ip = 0x02AF; emu_last_length = 0x0019; emu_last_crc = 0x1B94; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B4ED_02B1_0025_A366()
 *
 * @name f__B4ED_02B1_0025_A366
 * @implements B4ED:02B1:0025:A366 ()
 *
 * Called From: B4ED:029C:0019:1B94
 */
void f__B4ED_02B1_0025_A366()
{
	emu_xorw(&emu_si, emu_si);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x7FA2));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x6));
	emu_andw(&emu_ax.x, 0x40);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x20), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x7FA2));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0x6), 0x480);
	if (emu_flags.zf) { f__B4ED_0303_0009_74A3(); return; }
	emu_movw(&emu_ax.x, 0x3);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x02D6); emu_cs = 0x24DA; f__24DA_0004_000E_98E7();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34ED) { ovl__34ED(0xFF); }
	f__B4ED_02D6_000A_16A2();
}

/**
 * Decompiled function f__B4ED_02D6_000A_16A2()
 *
 * @name f__B4ED_02D6_000A_16A2
 * @implements B4ED:02D6:000A:16A2 ()
 *
 * Called From: B4ED:02D6:0025:A366
 */
void f__B4ED_02D6_000A_16A2()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_ax.x, 0x5);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x02E0); emu_cs = 0x252E; f__252E_0001_0018_48C0();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34ED) { ovl__34ED(0xFF); }
	f__B4ED_02E0_0023_0E1C();
}

/**
 * Decompiled function f__B4ED_02E0_0023_0E1C()
 *
 * @name f__B4ED_02E0_0023_0E1C
 * @implements B4ED:02E0:0023:0E1C ()
 *
 * Called From: B4ED:02E0:000A:16A2
 */
void f__B4ED_02E0_0023_0E1C()
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
	f__B4ED_0330_001A_021B(); return;
}

/**
 * Decompiled function f__B4ED_0303_0009_74A3()
 *
 * @name f__B4ED_0303_0009_74A3
 * @implements B4ED:0303:0009:74A3 ()
 *
 * Called From: B4ED:02CB:0025:A366
 */
void f__B4ED_0303_0009_74A3()
{
	emu_movw(&emu_ax.x, 0x3);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x030C); emu_cs = 0x252E; f__252E_0001_0018_48C0();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34ED) { ovl__34ED(0xFF); }
	f__B4ED_030C_003E_A015();
}

/**
 * Decompiled function f__B4ED_030C_003E_A015()
 *
 * @name f__B4ED_030C_003E_A015
 * @implements B4ED:030C:003E:A015 ()
 *
 * Called From: B4ED:030C:0009:74A3
 */
void f__B4ED_030C_003E_A015()
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
	emu_push(emu_cs); emu_push(0x034A); emu_cs = 0x01F7; f__01F7_378D_0020_4A95();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34ED) { ovl__34ED(0xFF); }
	f__B4ED_034A_0022_1035();
}

/**
 * Decompiled function f__B4ED_0330_001A_021B()
 *
 * @name f__B4ED_0330_001A_021B
 * @implements B4ED:0330:001A:021B ()
 *
 * Called From: B4ED:0301:0023:0E1C
 */
void f__B4ED_0330_001A_021B()
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
	emu_push(emu_cs); emu_push(0x034A); emu_cs = 0x01F7; f__01F7_378D_0020_4A95();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34ED) { ovl__34ED(0xFF); }
	f__B4ED_034A_0022_1035();
}

/**
 * Decompiled function f__B4ED_034A_0022_1035()
 *
 * @name f__B4ED_034A_0022_1035
 * @implements B4ED:034A:0022:1035 ()
 *
 * Called From: B4ED:034A:001A:021B
 * Called From: B4ED:034A:003E:A015
 */
void f__B4ED_034A_0022_1035()
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
	f__B4ED_036C_0022_5A04();
}

/**
 * Decompiled function f__B4ED_036C_0022_5A04()
 *
 * @name f__B4ED_036C_0022_5A04
 * @implements B4ED:036C:0022:5A04 ()
 *
 * Called From: B4ED:036C:0022:1035
 */
void f__B4ED_036C_0022_5A04()
{
	emu_addws(&emu_sp, 0x12);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_ax.x);
	emu_xorw(&emu_di, emu_di);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x7FA2));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0x6), 0x8);
	if (emu_flags.zf) { f__B4ED_038E_002A_F827(); return; }
	emu_subws(&emu_get_memory16(emu_ss, emu_bp, -0x10), 0x2D);
	emu_sbbws(&emu_get_memory16(emu_ss, emu_bp, -0xE), 0x0);
	emu_incw(&emu_di);
	f__B4ED_03A3_0015_72D4(); return;
}

/**
 * Decompiled function f__B4ED_0375_0019_E9D4()
 *
 * @name f__B4ED_0375_0019_E9D4
 * @implements B4ED:0375:0019:E9D4 ()
 *
 * Called From: B4ED:0295:002F:B64B
 */
void f__B4ED_0375_0019_E9D4()
{
	emu_xorw(&emu_di, emu_di);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x7FA2));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0x6), 0x8);
	if (emu_flags.zf) { f__B4ED_038E_002A_F827(); return; }
	emu_subws(&emu_get_memory16(emu_ss, emu_bp, -0x10), 0x2D);
	emu_sbbws(&emu_get_memory16(emu_ss, emu_bp, -0xE), 0x0);
	emu_incw(&emu_di);
	f__B4ED_03A3_0015_72D4(); return;
}

/**
 * Decompiled function f__B4ED_038E_002A_F827()
 *
 * @name f__B4ED_038E_002A_F827
 * @implements B4ED:038E:002A:F827 ()
 *
 * Called From: B4ED:0381:0019:E9D4
 * Called From: B4ED:0381:0022:5A04
 */
void f__B4ED_038E_002A_F827()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x7FA2));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0x6), 0x10);
	if (emu_flags.zf) { f__B4ED_03A3_0015_72D4(); return; }
	emu_subws(&emu_get_memory16(emu_ss, emu_bp, -0x10), 0xF);
	emu_sbbws(&emu_get_memory16(emu_ss, emu_bp, -0xE), 0x0);
	emu_incw(&emu_di);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x7FA2));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0x6), 0x4);
	if (emu_flags.zf) { f__B4ED_0408_000F_6EF8(); return; }
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ss, emu_bp, -0x1));
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x03B8); emu_ip = 0x07B6; emu_last_cs = 0xB4ED; emu_last_ip = 0x03B5; emu_last_length = 0x002A; emu_last_crc = 0xF827; emu_call(); // Jump does not resolve
	f__B4ED_03B8_001C_17F1();
}

/**
 * Decompiled function f__B4ED_03A3_0015_72D4()
 *
 * @name f__B4ED_03A3_0015_72D4
 * @implements B4ED:03A3:0015:72D4 ()
 *
 * Called From: B4ED:038C:0019:E9D4
 * Called From: B4ED:038C:0022:5A04
 * Called From: B4ED:0398:002A:F827
 */
void f__B4ED_03A3_0015_72D4()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x7FA2));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0x6), 0x4);
	if (emu_flags.zf) { f__B4ED_0408_000F_6EF8(); return; }
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ss, emu_bp, -0x1));
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x03B8); f__B4ED_07B6_0013_8727();
	f__B4ED_03B8_001C_17F1();
}

/**
 * Decompiled function f__B4ED_03B8_001C_17F1()
 *
 * @name f__B4ED_03B8_001C_17F1
 * @implements B4ED:03B8:001C:17F1 ()
 *
 * Called From: B4ED:03B8:0015:72D4
 */
void f__B4ED_03B8_001C_17F1()
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
	f__B4ED_03D4_000C_5BB7();
}

/**
 * Decompiled function f__B4ED_03D4_000C_5BB7()
 *
 * @name f__B4ED_03D4_000C_5BB7
 * @implements B4ED:03D4:000C:5BB7 ()
 *
 * Called From: B4ED:03D4:001C:17F1
 */
void f__B4ED_03D4_000C_5BB7()
{
	emu_addws(&emu_sp, 0xE);
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x03E0); f__B4ED_0AA5_0010_6060();
	f__B4ED_03E0_000E_583C();
}

/**
 * Decompiled function f__B4ED_03E0_000E_583C()
 *
 * @name f__B4ED_03E0_000E_583C
 * @implements B4ED:03E0:000E:583C ()
 *
 * Called From: B4ED:03E0:000C:5BB7
 */
void f__B4ED_03E0_000E_583C()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3C34));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3C32));
	emu_push(emu_cs);
	emu_push(0x03EE); f__B4ED_0BD4_001B_D25E();
	f__B4ED_03EE_0013_1DEB();
}

/**
 * Decompiled function f__B4ED_03EE_0013_1DEB()
 *
 * @name f__B4ED_03EE_0013_1DEB
 * @implements B4ED:03EE:0013:1DEB ()
 *
 * Called From: B4ED:03EE:000E:583C
 */
void f__B4ED_03EE_0013_1DEB()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_ax.x, 0x2D);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3C34));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3C32));
	emu_push(emu_cs); emu_push(0x0401); emu_cs = 0x259E; f__259E_0006_0016_2DFF();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34ED) { ovl__34ED(0xFF); }
	f__B4ED_0401_0007_71F8();
}

/**
 * Decompiled function f__B4ED_0401_0007_71F8()
 *
 * @name f__B4ED_0401_0007_71F8
 * @implements B4ED:0401:0007:71F8 ()
 *
 * Called From: B4ED:0401:0013:1DEB
 */
void f__B4ED_0401_0007_71F8()
{
	emu_addws(&emu_sp, 0x6);
	emu_incw(&emu_di);
	f__B4ED_04A8_002E_7629(); return;
}

/**
 * Decompiled function f__B4ED_0408_000F_6EF8()
 *
 * @name f__B4ED_0408_000F_6EF8
 * @implements B4ED:0408:000F:6EF8 ()
 *
 * Called From: B4ED:03AD:0015:72D4
 * Called From: B4ED:03AD:002A:F827
 */
void f__B4ED_0408_000F_6EF8()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x7FA2));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0x6), 0x480);
	if (!emu_flags.zf) { f__B4ED_0417_0009_2E7F(); return; }
	f__B4ED_04A8_002E_7629(); return;
}

/**
 * Decompiled function f__B4ED_0417_0009_2E7F()
 *
 * @name f__B4ED_0417_0009_2E7F
 * @implements B4ED:0417:0009:2E7F ()
 *
 * Called From: B4ED:0412:000F:6EF8
 */
void f__B4ED_0417_0009_2E7F()
{
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ss, emu_bp, -0x1));
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x0420); f__B4ED_07B6_0013_8727();
	f__B4ED_0420_001D_CEF8();
}

/**
 * Decompiled function f__B4ED_0420_001D_CEF8()
 *
 * @name f__B4ED_0420_001D_CEF8
 * @implements B4ED:0420:001D:CEF8 ()
 *
 * Called From: B4ED:0420:0009:2E7F
 */
void f__B4ED_0420_001D_CEF8()
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
	f__B4ED_043D_001B_12C6();
}

/**
 * Decompiled function f__B4ED_043D_001B_12C6()
 *
 * @name f__B4ED_043D_001B_12C6
 * @implements B4ED:043D:001B:12C6 ()
 *
 * Called From: B4ED:043D:001D:CEF8
 */
void f__B4ED_043D_001B_12C6()
{
	emu_addws(&emu_sp, 0xE);
	emu_incw(&emu_di);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x7FA2));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x6));
	emu_andw(&emu_ax.x, 0x480);
	emu_cmpw(&emu_ax.x, 0x80);
	if (emu_flags.zf) { f__B4ED_0458_0023_BB05(); return; }
	emu_cmpw(&emu_ax.x, 0x400);
	if (emu_flags.zf) { f__B4ED_0480_0024_2731(); return; }
	emu_ip = 0x04A6; emu_last_cs = 0xB4ED; emu_last_ip = 0x0456; emu_last_length = 0x001B; emu_last_crc = 0x12C6; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B4ED_0458_0023_BB05()
 *
 * @name f__B4ED_0458_0023_BB05
 * @implements B4ED:0458:0023:BB05 ()
 *
 * Called From: B4ED:044F:001B:12C6
 */
void f__B4ED_0458_0023_BB05()
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
	f__B4ED_047B_0005_1F5C();
}

/**
 * Decompiled function f__B4ED_047B_0005_1F5C()
 *
 * @name f__B4ED_047B_0005_1F5C
 * @implements B4ED:047B:0005:1F5C ()
 *
 * Called From: B4ED:047B:0023:BB05
 * Called From: B4ED:04A4:0002:0206
 */
void f__B4ED_047B_0005_1F5C()
{
	emu_addws(&emu_sp, 0x10);
	f__B4ED_04A8_002E_7629(); return;
}

/**
 * Decompiled function f__B4ED_0480_0024_2731()
 *
 * @name f__B4ED_0480_0024_2731
 * @implements B4ED:0480:0024:2731 ()
 *
 * Called From: B4ED:0454:001B:12C6
 */
void f__B4ED_0480_0024_2731()
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
	emu_push(emu_cs); emu_push(0x04A4); emu_cs = 0x2C17; f__2C17_000C_002F_E104();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34ED) { ovl__34ED(0xFF); }
	f__B4ED_04A4_0002_0206();
}

/**
 * Decompiled function f__B4ED_04A4_0002_0206()
 *
 * @name f__B4ED_04A4_0002_0206
 * @implements B4ED:04A4:0002:0206 ()
 *
 * Called From: B4ED:04A4:0024:2731
 */
void f__B4ED_04A4_0002_0206()
{
	f__B4ED_047B_0005_1F5C(); return;
}

/**
 * Decompiled function f__B4ED_04A8_002E_7629()
 *
 * @name f__B4ED_04A8_002E_7629
 * @implements B4ED:04A8:002E:7629 ()
 *
 * Called From: B4ED:0405:0007:71F8
 * Called From: B4ED:0414:000F:6EF8
 * Called From: B4ED:047E:0005:1F5C
 */
void f__B4ED_04A8_002E_7629()
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
	if ((emu_flags.cf || emu_flags.zf)) { f__B4ED_04D6_0007_5E12(); return; }
	emu_ip = 0x0574; emu_last_cs = 0xB4ED; emu_last_ip = 0x04D3; emu_last_length = 0x002E; emu_last_crc = 0x7629; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B4ED_04D6_0007_5E12()
 *
 * @name f__B4ED_04D6_0007_5E12
 * @implements B4ED:04D6:0007:5E12 ()
 *
 * Called From: B4ED:04D1:002E:7629
 */
void f__B4ED_04D6_0007_5E12()
{
	emu_shlw(&emu_bx.x, 0x1);

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_cs, emu_bx.x,  0x755);
	switch (emu_ip) {
		case 0x04DD: f__B4ED_04DD_0020_0705(); return;
		case 0x0506: f__B4ED_0506_000B_2475(); return;
		case 0x0522: f__B4ED_0522_000B_2475(); return;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0xB4ED; emu_last_ip = 0x04D8; emu_last_length = 0x0007; emu_last_crc = 0x5E12;
			emu_call();
			return;
	}
}

/**
 * Decompiled function f__B4ED_04DD_0020_0705()
 *
 * @name f__B4ED_04DD_0020_0705
 * @implements B4ED:04DD:0020:0705 ()
 *
 * Called From: B4ED:04D8:0007:5E12
 */
void f__B4ED_04DD_0020_0705()
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
	emu_push(emu_cs); emu_push(0x04FD); emu_cs = 0x01F7; f__01F7_04E0_0004_06F8();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34ED) { ovl__34ED(0xFF); }
	f__B4ED_04FD_0009_1075();
}

/**
 * Decompiled function f__B4ED_04EF_000E_0F90()
 *
 * @name f__B4ED_04EF_000E_0F90
 * @implements B4ED:04EF:000E:0F90 ()
 *
 * Called From: B4ED:0520:0011:33BB
 */
void f__B4ED_04EF_000E_0F90()
{
	emu_cwd();
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x1A));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x1C));
	emu_push(emu_cs); emu_push(0x04FD); emu_cs = 0x01F7; f__01F7_04E0_0004_06F8();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34ED) { ovl__34ED(0xFF); }
	f__B4ED_04FD_0009_1075();
}

/**
 * Decompiled function f__B4ED_04FD_0009_1075()
 *
 * @name f__B4ED_04FD_0009_1075
 * @implements B4ED:04FD:0009:1075 ()
 *
 * Called From: B4ED:04FD:000E:0F90
 * Called From: B4ED:04FD:0020:0705
 */
void f__B4ED_04FD_0009_1075()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x16), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x18), emu_ax.x);
	f__B4ED_0595_0003_050C(); return;
}

/**
 * Decompiled function f__B4ED_0506_000B_2475()
 *
 * @name f__B4ED_0506_000B_2475
 * @implements B4ED:0506:000B:2475 ()
 *
 * Called From: B4ED:04D8:0007:5E12
 */
void f__B4ED_0506_000B_2475()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_cs); emu_push(0x0511); emu_cs = 0x352A; ovl__352A(3);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34ED) { ovl__34ED(0xFF); }
	f__B4ED_0511_0011_33BB();
}

/**
 * Decompiled function f__B4ED_0511_0011_33BB()
 *
 * @name f__B4ED_0511_0011_33BB
 * @implements B4ED:0511:0011:33BB ()
 *
 * Called From: B4ED:0511:000B:2475
 */
void f__B4ED_0511_0011_33BB()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x7FA2));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x5));
	emu_movb(&emu_ax.h, 0x0);
	f__B4ED_04EF_000E_0F90(); return;
}

/**
 * Decompiled function f__B4ED_0522_000B_2475()
 *
 * @name f__B4ED_0522_000B_2475
 * @implements B4ED:0522:000B:2475 ()
 *
 * Called From: B4ED:04D8:0007:5E12
 */
void f__B4ED_0522_000B_2475()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_cs); emu_push(0x052D); emu_cs = 0x352A; ovl__352A(3);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34ED) { ovl__34ED(0xFF); }
	f__B4ED_052D_0018_604E();
}

/**
 * Decompiled function f__B4ED_052D_0018_604E()
 *
 * @name f__B4ED_052D_0018_604E
 * @implements B4ED:052D:0018:604E ()
 *
 * Called From: B4ED:052D:000B:2475
 */
void f__B4ED_052D_0018_604E()
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
	emu_push(emu_cs); emu_push(0x0545); emu_cs = 0x01F7; f__01F7_04E0_0004_06F8();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34ED) { ovl__34ED(0xFF); }
	f__B4ED_0545_0014_458C();
}

/**
 * Decompiled function f__B4ED_0545_0014_458C()
 *
 * @name f__B4ED_0545_0014_458C
 * @implements B4ED:0545:0014:458C ()
 *
 * Called From: B4ED:0545:0018:604E
 */
void f__B4ED_0545_0014_458C()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x16), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x18), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x16));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x18));
	emu_subw(&emu_get_memory16(emu_ss, emu_bp, -0x10), emu_dx.x);
	emu_sbbw(&emu_get_memory16(emu_ss, emu_bp, -0xE), emu_ax.x);
	f__B4ED_0595_0003_050C(); return;
}

/**
 * Decompiled function f__B4ED_0595_0003_050C()
 *
 * @name f__B4ED_0595_0003_050C
 * @implements B4ED:0595:0003:050C ()
 *
 * Called From: B4ED:0503:0009:1075
 * Called From: B4ED:0557:0014:458C
 */
void f__B4ED_0595_0003_050C()
{
	f__B4ED_0629_000F_B205(); return;
}

/**
 * Decompiled function f__B4ED_0598_0016_B484()
 *
 * @name f__B4ED_0598_0016_B484
 * @implements B4ED:0598:0016:B484 ()
 *
 * Called From: B4ED:0640:000B:AE91
 */
void f__B4ED_0598_0016_B484()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x16));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x18));
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x76B6), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x76B4), emu_dx.x);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ss, emu_bp, -0x1));
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x05AE); f__B4ED_07B6_0013_8727();
	f__B4ED_05AE_001C_17F1();
}

/**
 * Decompiled function f__B4ED_05AE_001C_17F1()
 *
 * @name f__B4ED_05AE_001C_17F1
 * @implements B4ED:05AE:001C:17F1 ()
 *
 * Called From: B4ED:05AE:0016:B484
 */
void f__B4ED_05AE_001C_17F1()
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
	f__B4ED_05CA_0012_BB29();
}

/**
 * Decompiled function f__B4ED_05CA_0012_BB29()
 *
 * @name f__B4ED_05CA_0012_BB29
 * @implements B4ED:05CA:0012:BB29 ()
 *
 * Called From: B4ED:05CA:001C:17F1
 */
void f__B4ED_05CA_0012_BB29()
{
	emu_addws(&emu_sp, 0xE);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x1E), 0x1);
	if (!emu_flags.zf) { f__B4ED_05DC_000C_3CBA(); return; }
	emu_cmpw(&emu_si, emu_get_memory16(emu_ss, emu_bp, -0x4));
	if (!emu_flags.zf) { f__B4ED_05DC_000C_3CBA(); return; }
	emu_xorw(&emu_si, emu_si);
	f__B4ED_05E3_0005_14B2(); return;
}

/**
 * Decompiled function f__B4ED_05DC_000C_3CBA()
 *
 * @name f__B4ED_05DC_000C_3CBA
 * @implements B4ED:05DC:000C:3CBA ()
 *
 * Called From: B4ED:05D1:0012:BB29
 * Called From: B4ED:05D6:0012:BB29
 */
void f__B4ED_05DC_000C_3CBA()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x1E), 0x3);
	if (!emu_flags.zf) { f__B4ED_05E3_0005_14B2(); return; }
	emu_decw(&emu_si);
	emu_push(emu_cs); emu_push(0x05E8); emu_cs = 0x29E8; emu_ip = 0x0C2B; emu_last_cs = 0xB4ED; emu_last_ip = 0x05E3; emu_last_length = 0x000C; emu_last_crc = 0x3CBA; emu_call(); // Jump does not resolve
	f__B4ED_05E8_0016_3B3D();
}

/**
 * Decompiled function f__B4ED_05E3_0005_14B2()
 *
 * @name f__B4ED_05E3_0005_14B2
 * @implements B4ED:05E3:0005:14B2 ()
 *
 * Called From: B4ED:05DA:0012:BB29
 * Called From: B4ED:05E0:000C:3CBA
 */
void f__B4ED_05E3_0005_14B2()
{
	emu_push(emu_cs); emu_push(0x05E8); emu_cs = 0x29E8; f__29E8_0643_0008_40B8();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34ED) { ovl__34ED(0xFF); }
	f__B4ED_05E8_0016_3B3D();
}

/**
 * Decompiled function f__B4ED_05E8_0016_3B3D()
 *
 * @name f__B4ED_05E8_0016_3B3D
 * @implements B4ED:05E8:0016:3B3D ()
 *
 * Called From: B4ED:05E8:0005:14B2
 */
void f__B4ED_05E8_0016_3B3D()
{
	emu_orw(&emu_ax.x, emu_ax.x);
	if (emu_flags.zf) { f__B4ED_0603_0008_50C0(); return; }
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x37B4), 0x0);
	if (emu_flags.zf) { f__B4ED_0603_0008_50C0(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_cs); emu_push(0x05FE); emu_cs = 0x352A; ovl__352A(1);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34ED) { ovl__34ED(0xFF); }
	f__B4ED_05FE_0005_08CA();
}

/**
 * Decompiled function f__B4ED_05FE_0005_08CA()
 *
 * @name f__B4ED_05FE_0005_08CA
 * @implements B4ED:05FE:0005:08CA ()
 *
 * Called From: B4ED:05FE:0016:3B3D
 */
void f__B4ED_05FE_0005_08CA()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	f__B4ED_074F_0006_137A(); return;
}

/**
 * Decompiled function f__B4ED_0603_0008_50C0()
 *
 * @name f__B4ED_0603_0008_50C0
 * @implements B4ED:0603:0008:50C0 ()
 *
 * Called From: B4ED:05EA:0016:3B3D
 * Called From: B4ED:05F1:0016:3B3D
 * Called From: B4ED:061F:002D:2AF7
 * Called From: B4ED:0627:002D:2AF7
 */
void f__B4ED_0603_0008_50C0()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x060B); f__B4ED_0AA5_0010_6060();
	f__B4ED_060B_002D_2AF7();
}

/**
 * Decompiled function f__B4ED_060B_002D_2AF7()
 *
 * @name f__B4ED_060B_002D_2AF7
 * @implements B4ED:060B:002D:2AF7 ()
 *
 * Called From: B4ED:060B:0008:50C0
 */
void f__B4ED_060B_002D_2AF7()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76B4));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76B6));
	if (emu_flags.zf) { f__B4ED_0629_000F_B205(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76AE));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__B4ED_0603_0008_50C0(); return; }
	if (!emu_flags.zf) { emu_ip = 0x0629; emu_last_cs = 0xB4ED; emu_last_ip = 0x0621; emu_last_length = 0x002D; emu_last_crc = 0x2AF7; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76AC));
	if (!(emu_flags.cf || emu_flags.zf)) { f__B4ED_0603_0008_50C0(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76AE));
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__B4ED_0638_000B_AE91(); return; }
	emu_ip = 0x0598; emu_last_cs = 0xB4ED; emu_last_ip = 0x0635; emu_last_length = 0x002D; emu_last_crc = 0x2AF7; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B4ED_0629_000F_B205()
 *
 * @name f__B4ED_0629_000F_B205
 * @implements B4ED:0629:000F:B205 ()
 *
 * Called From: B4ED:0595:0003:050C
 * Called From: B4ED:0613:002D:2AF7
 */
void f__B4ED_0629_000F_B205()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76AE));
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__B4ED_0638_000B_AE91(); return; }
	emu_ip = 0x0598; emu_last_cs = 0xB4ED; emu_last_ip = 0x0635; emu_last_length = 0x000F; emu_last_crc = 0xB205; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B4ED_0638_000B_AE91()
 *
 * @name f__B4ED_0638_000B_AE91
 * @implements B4ED:0638:000B:AE91 ()
 *
 * Called From: B4ED:0633:000F:B205
 * Called From: B4ED:0633:002D:2AF7
 */
void f__B4ED_0638_000B_AE91()
{
	if (!emu_flags.zf) { emu_ip = 0x0643; emu_last_cs = 0xB4ED; emu_last_ip = 0x0638; emu_last_length = 0x000B; emu_last_crc = 0xAE91; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76AC));
	if ((emu_flags.cf || emu_flags.zf)) { f__B4ED_0643_000F_55F2(); return; }
	f__B4ED_0598_0016_B484(); return;
}

/**
 * Decompiled function f__B4ED_0643_000F_55F2()
 *
 * @name f__B4ED_0643_000F_55F2
 * @implements B4ED:0643:000F:55F2 ()
 *
 * Called From: B4ED:063E:000B:AE91
 */
void f__B4ED_0643_000F_55F2()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x1E), 0x2);
	if (!emu_flags.zf) { f__B4ED_0675_0024_AFBB(); return; }
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ss, emu_bp, -0x1));
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x0652); f__B4ED_07B6_0013_8727();
	f__B4ED_0652_001C_17F1();
}

/**
 * Decompiled function f__B4ED_0649_0009_2DB3()
 *
 * @name f__B4ED_0649_0009_2DB3
 * @implements B4ED:0649:0009:2DB3 ()
 *
 * Called From: B4ED:0673:002B:D77C
 */
void f__B4ED_0649_0009_2DB3()
{
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ss, emu_bp, -0x1));
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x0652); f__B4ED_07B6_0013_8727();
	f__B4ED_0652_001C_17F1();
}

/**
 * Decompiled function f__B4ED_0652_001C_17F1()
 *
 * @name f__B4ED_0652_001C_17F1
 * @implements B4ED:0652:001C:17F1 ()
 *
 * Called From: B4ED:0652:0009:2DB3
 * Called From: B4ED:0652:000F:55F2
 */
void f__B4ED_0652_001C_17F1()
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
	f__B4ED_066E_002B_D77C();
}

/**
 * Decompiled function f__B4ED_066E_002B_D77C()
 *
 * @name f__B4ED_066E_002B_D77C
 * @implements B4ED:066E:002B:D77C ()
 *
 * Called From: B4ED:066E:001C:17F1
 */
void f__B4ED_066E_002B_D77C()
{
	emu_addws(&emu_sp, 0xE);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.zf) { f__B4ED_0649_0009_2DB3(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x7FA2));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0x6), 0x10);
	if (emu_flags.zf) { f__B4ED_06DB_0015_7F78(); return; }
	emu_movw(&emu_ax.x, 0x2FD);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x3F);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00, -0x6676));
	emu_addw(&emu_ax.x, 0x3);
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x6674));
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0699); emu_cs = 0x01F7; f__01F7_2947_0014_9C5E();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34ED) { ovl__34ED(0xFF); }
	f__B4ED_0699_0010_3ABE();
}

/**
 * Decompiled function f__B4ED_0675_0024_AFBB()
 *
 * @name f__B4ED_0675_0024_AFBB
 * @implements B4ED:0675:0024:AFBB ()
 *
 * Called From: B4ED:0647:000F:55F2
 */
void f__B4ED_0675_0024_AFBB()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x7FA2));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0x6), 0x10);
	if (emu_flags.zf) { f__B4ED_06DB_0015_7F78(); return; }
	emu_movw(&emu_ax.x, 0x2FD);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x3F);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00, -0x6676));
	emu_addw(&emu_ax.x, 0x3);
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x6674));
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0699); emu_cs = 0x01F7; emu_ip = 0x2FE0; emu_last_cs = 0xB4ED; emu_last_ip = 0x0694; emu_last_length = 0x0024; emu_last_crc = 0xAFBB; emu_call(); // Jump does not resolve
	f__B4ED_0699_0010_3ABE();
}

/**
 * Decompiled function f__B4ED_0699_0010_3ABE()
 *
 * @name f__B4ED_0699_0010_3ABE
 * @implements B4ED:0699:0010:3ABE ()
 *
 * Called From: B4ED:0699:002B:D77C
 */
void f__B4ED_0699_0010_3ABE()
{
	emu_addws(&emu_sp, 0x8);
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x6674));
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x6676));
	emu_push(emu_cs);
	emu_push(0x06A9); f__B4ED_0BD4_001B_D25E();
	f__B4ED_06A9_0013_3C8E();
}

/**
 * Decompiled function f__B4ED_06A9_0013_3C8E()
 *
 * @name f__B4ED_06A9_0013_3C8E
 * @implements B4ED:06A9:0013:3C8E ()
 *
 * Called From: B4ED:06A9:0010:3ABE
 */
void f__B4ED_06A9_0013_3C8E()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_ax.x, 0xF);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x6674));
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x6676));
	emu_push(emu_cs); emu_push(0x06BC); emu_cs = 0x259E; f__259E_0006_0016_2DFF();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34ED) { ovl__34ED(0xFF); }
	f__B4ED_06BC_001C_4484();
}

/**
 * Decompiled function f__B4ED_06BC_001C_4484()
 *
 * @name f__B4ED_06BC_001C_4484
 * @implements B4ED:06BC:001C:4484 ()
 *
 * Called From: B4ED:06BC:0013:3C8E
 */
void f__B4ED_06BC_001C_4484()
{
	emu_addws(&emu_sp, 0x6);
	emu_movw(&emu_ax.x, 0x300);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3C34));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3C32));
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x6674));
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x6676));
	emu_push(emu_cs); emu_push(0x06D8); emu_cs = 0x01F7; f__01F7_28B8_0024_D407();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34ED) { ovl__34ED(0xFF); }
	f__B4ED_06D8_0018_9CF8();
}

/**
 * Decompiled function f__B4ED_06D8_0018_9CF8()
 *
 * @name f__B4ED_06D8_0018_9CF8
 * @implements B4ED:06D8:0018:9CF8 ()
 *
 * Called From: B4ED:06D8:001C:4484
 */
void f__B4ED_06D8_0018_9CF8()
{
	emu_addws(&emu_sp, 0xA);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x7FA2));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0x6), 0x8);
	if (emu_flags.zf) { f__B4ED_0714_000B_24D5(); return; }
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x06F0); emu_ip = 0x0AA5; emu_last_cs = 0xB4ED; emu_last_ip = 0x06ED; emu_last_length = 0x0018; emu_last_crc = 0x9CF8; emu_call(); // Jump does not resolve
	f__B4ED_06F0_000E_79BD();
}

/**
 * Decompiled function f__B4ED_06DB_0015_7F78()
 *
 * @name f__B4ED_06DB_0015_7F78
 * @implements B4ED:06DB:0015:7F78 ()
 *
 * Called From: B4ED:067F:0024:AFBB
 * Called From: B4ED:067F:002B:D77C
 */
void f__B4ED_06DB_0015_7F78()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x7FA2));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0x6), 0x8);
	if (emu_flags.zf) { f__B4ED_0714_000B_24D5(); return; }
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x06F0); f__B4ED_0AA5_0010_6060();
	f__B4ED_06F0_000E_79BD();
}

/**
 * Decompiled function f__B4ED_06F0_000E_79BD()
 *
 * @name f__B4ED_06F0_000E_79BD
 * @implements B4ED:06F0:000E:79BD ()
 *
 * Called From: B4ED:06F0:0015:7F78
 */
void f__B4ED_06F0_000E_79BD()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x6674));
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x6676));
	emu_push(emu_cs);
	emu_push(0x06FE); f__B4ED_0BD4_001B_D25E();
	f__B4ED_06FE_0013_7FEB();
}

/**
 * Decompiled function f__B4ED_06FE_0013_7FEB()
 *
 * @name f__B4ED_06FE_0013_7FEB
 * @implements B4ED:06FE:0013:7FEB ()
 *
 * Called From: B4ED:06FE:000E:79BD
 */
void f__B4ED_06FE_0013_7FEB()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_ax.x, 0x2D);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3C38));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3C36));
	emu_push(emu_cs); emu_push(0x0711); emu_cs = 0x259E; f__259E_0006_0016_2DFF();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34ED) { ovl__34ED(0xFF); }
	f__B4ED_0711_000E_04ED();
}

/**
 * Decompiled function f__B4ED_0711_000E_04ED()
 *
 * @name f__B4ED_0711_000E_04ED
 * @implements B4ED:0711:000E:04ED ()
 *
 * Called From: B4ED:0711:0013:7FEB
 */
void f__B4ED_0711_000E_04ED()
{
	emu_addws(&emu_sp, 0x6);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_cs); emu_push(0x071F); emu_cs = 0x352A; ovl__352A(1);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34ED) { ovl__34ED(0xFF); }
	f__B4ED_071F_000C_9328();
}

/**
 * Decompiled function f__B4ED_0714_000B_24D5()
 *
 * @name f__B4ED_0714_000B_24D5
 * @implements B4ED:0714:000B:24D5 ()
 *
 * Called From: B4ED:06E5:0015:7F78
 * Called From: B4ED:06E5:0018:9CF8
 */
void f__B4ED_0714_000B_24D5()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_cs); emu_push(0x071F); emu_cs = 0x352A; ovl__352A(1);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34ED) { ovl__34ED(0xFF); }
	f__B4ED_071F_000C_9328();
}

/**
 * Decompiled function f__B4ED_071F_000C_9328()
 *
 * @name f__B4ED_071F_000C_9328
 * @implements B4ED:071F:000C:9328 ()
 *
 * Called From: B4ED:071F:000B:24D5
 * Called From: B4ED:071F:000E:04ED
 */
void f__B4ED_071F_000C_9328()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_incb(&emu_get_memory8(emu_ss, emu_bp, -0x1));
	emu_addws(&emu_get_memory16(emu_ds, 0x00, -0x7FA2), 0x8);
	f__B4ED_072B_0022_81E9(); return;
}

/**
 * Decompiled function f__B4ED_072B_0022_81E9()
 *
 * @name f__B4ED_072B_0022_81E9
 * @implements B4ED:072B:0022:81E9 ()
 *
 * Called From: B4ED:0729:000C:9328
 * Called From: B4ED:0735:0022:81E9
 * Called From: B4ED:073D:0022:81E9
 */
void f__B4ED_072B_0022_81E9()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76AE));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__B4ED_072B_0022_81E9(); return; }
	if (!emu_flags.zf) { emu_ip = 0x073F; emu_last_cs = 0xB4ED; emu_last_ip = 0x0737; emu_last_length = 0x0022; emu_last_crc = 0x81E9; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76AC));
	if (!(emu_flags.cf || emu_flags.zf)) { f__B4ED_072B_0022_81E9(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x7FA2));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x4), 0x0);
	if (emu_flags.zf) { f__B4ED_074D_0002_03AC(); return; }
	f__B4ED_020F_0044_5381(); return;
}

/**
 * Decompiled function f__B4ED_073F_000E_CE36()
 *
 * @name f__B4ED_073F_000E_CE36
 * @implements B4ED:073F:000E:CE36 ()
 *
 * Called From: B4ED:020C:000F:91F8
 */
void f__B4ED_073F_000E_CE36()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x7FA2));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x4), 0x0);
	if (emu_flags.zf) { emu_ip = 0x074D; emu_last_cs = 0xB4ED; emu_last_ip = 0x0748; emu_last_length = 0x000E; emu_last_crc = 0xCE36; emu_call(); return; } // Jump does not resolve
	f__B4ED_020F_0044_5381(); return;
}

/**
 * Decompiled function f__B4ED_074D_0002_03AC()
 *
 * @name f__B4ED_074D_0002_03AC
 * @implements B4ED:074D:0002:03AC ()
 *
 * Called From: B4ED:0748:0022:81E9
 */
void f__B4ED_074D_0002_03AC()
{
	f__B4ED_074F_0006_137A(); return;
}

/**
 * Decompiled function f__B4ED_074F_0006_137A()
 *
 * @name f__B4ED_074F_0006_137A
 * @implements B4ED:074F:0006:137A ()
 *
 * Called From: B4ED:0600:0005:08CA
 * Called From: B4ED:074D:0002:03AC
 */
void f__B4ED_074F_0006_137A()
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
 * Decompiled function f__B4ED_075D_002B_74D9()
 *
 * @name f__B4ED_075D_002B_74D9
 * @implements B4ED:075D:002B:74D9 ()
 *
 * Called From: B4ED:07C6:0013:8727
 */
void f__B4ED_075D_002B_74D9()
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
	if ((emu_flags.cf || emu_flags.zf)) { f__B4ED_0788_0023_CA4A(); return; }
	f__B4ED_07B2_0004_0F7A(); return;
}

/**
 * Decompiled function f__B4ED_0788_0023_CA4A()
 *
 * @name f__B4ED_0788_0023_CA4A
 * @implements B4ED:0788:0023:CA4A ()
 *
 * Called From: B4ED:0784:002B:74D9
 */
void f__B4ED_0788_0023_CA4A()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x2));
	emu_movb(&emu_ax.h, 0x0);
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00, -0x7F98));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__B4ED_07B2_0004_0F7A(); return; }
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
	f__B4ED_07AB_000B_FB7D();
}

/**
 * Decompiled function f__B4ED_07AB_000B_FB7D()
 *
 * @name f__B4ED_07AB_000B_FB7D
 * @implements B4ED:07AB:000B:FB7D ()
 *
 * Called From: B4ED:07AB:0023:CA4A
 */
void f__B4ED_07AB_000B_FB7D()
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
 * Decompiled function f__B4ED_07B2_0004_0F7A()
 *
 * @name f__B4ED_07B2_0004_0F7A
 * @implements B4ED:07B2:0004:0F7A ()
 *
 * Called From: B4ED:0786:002B:74D9
 * Called From: B4ED:0795:0023:CA4A
 */
void f__B4ED_07B2_0004_0F7A()
{
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B4ED_07B6_0013_8727()
 *
 * @name f__B4ED_07B6_0013_8727
 * @implements B4ED:07B6:0013:8727 ()
 *
 * Called From: B4ED:03B5:0015:72D4
 * Called From: B4ED:041D:0009:2E7F
 * Called From: B4ED:05AB:0016:B484
 * Called From: B4ED:064F:0009:2DB3
 * Called From: B4ED:064F:000F:55F2
 */
void f__B4ED_07B6_0013_8727()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x16);
	emu_push(emu_si);
	emu_incw(&emu_get_memory16(emu_ds, 0x00, -0x7F98));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ss, emu_bp,  0x6));
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x07C9); f__B4ED_075D_002B_74D9();
	f__B4ED_07C9_0031_22A2();
}

/**
 * Decompiled function f__B4ED_07C9_0031_22A2()
 *
 * @name f__B4ED_07C9_0031_22A2
 * @implements B4ED:07C9:0031:22A2 ()
 *
 * Called From: B4ED:07C9:0013:8727
 */
void f__B4ED_07C9_0031_22A2()
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
	if (emu_flags.zf) { f__B4ED_07F7_0003_05D4(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x4));
	emu_cmpb(&emu_ax.l, emu_get_memory8(emu_ss, emu_bp,  0x6));
	if ((emu_flags.cf || emu_flags.zf)) { f__B4ED_07FA_000A_4FC2(); return; }
	f__B4ED_0AA0_0005_04BA(); return;
}

/**
 * Decompiled function f__B4ED_07F7_0003_05D4()
 *
 * @name f__B4ED_07F7_0003_05D4
 * @implements B4ED:07F7:0003:05D4 ()
 *
 * Called From: B4ED:07E9:0031:22A2
 */
void f__B4ED_07F7_0003_05D4()
{
	f__B4ED_0AA0_0005_04BA(); return;
}

/**
 * Decompiled function f__B4ED_07FA_000A_4FC2()
 *
 * @name f__B4ED_07FA_000A_4FC2
 * @implements B4ED:07FA:000A:4FC2 ()
 *
 * Called From: B4ED:07F5:0031:22A2
 */
void f__B4ED_07FA_000A_4FC2()
{
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00, -0x7F8C), 0x0);
	if (!emu_flags.zf) { f__B4ED_0804_0048_3F44(); return; }
	f__B4ED_088A_0021_177E(); return;
}

/**
 * Decompiled function f__B4ED_0804_0048_3F44()
 *
 * @name f__B4ED_0804_0048_3F44
 * @implements B4ED:0804:0048:3F44 ()
 *
 * Called From: B4ED:07FF:000A:4FC2
 */
void f__B4ED_0804_0048_3F44()
{
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00, -0x7F96), 0xFF);
	if (!emu_flags.zf) { f__B4ED_0817_0035_321A(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x8));
	emu_movb(&emu_ax.h, 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x7F96), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00, -0x7F96));
	emu_decw(&emu_get_memory16(emu_ds, 0x00, -0x7F96));
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.zf) { f__B4ED_0887_0003_0714(); return; }
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x7F8C), 0x0);
	emu_incw(&emu_get_memory16(emu_ds, 0x00, -0x7F8E));
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x7F52), 0x2);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x9), 0x0);
	if (emu_flags.zf) { emu_ip = 0x086B; emu_last_cs = 0xB4ED; emu_last_ip = 0x083A; emu_last_length = 0x0048; emu_last_crc = 0x3F44; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x9));
	emu_movb(&emu_ax.h, 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x7F54), emu_ax.x);
	emu_xorw(&emu_si, emu_si);
	emu_ip = 0x0864; emu_last_cs = 0xB4ED; emu_last_ip = 0x084A; emu_last_length = 0x0048; emu_last_crc = 0x3F44; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B4ED_0817_0035_321A()
 *
 * @name f__B4ED_0817_0035_321A
 * @implements B4ED:0817:0035:321A ()
 *
 * Called From: B4ED:0809:0048:3F44
 */
void f__B4ED_0817_0035_321A()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00, -0x7F96));
	emu_decw(&emu_get_memory16(emu_ds, 0x00, -0x7F96));
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.zf) { f__B4ED_0887_0003_0714(); return; }
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x7F8C), 0x0);
	emu_incw(&emu_get_memory16(emu_ds, 0x00, -0x7F8E));
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x7F52), 0x2);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x9), 0x0);
	if (emu_flags.zf) { f__B4ED_086B_0013_F5BF(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x9));
	emu_movb(&emu_ax.h, 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x7F54), emu_ax.x);
	emu_xorw(&emu_si, emu_si);
	f__B4ED_0864_0007_7F0C(); return;
}

/**
 * Decompiled function f__B4ED_084C_001F_917A()
 *
 * @name f__B4ED_084C_001F_917A
 * @implements B4ED:084C:001F:917A ()
 *
 * Called From: B4ED:0867:0007:7F0C
 * Called From: B4ED:0867:0008:390C
 * Called From: B4ED:0867:001F:917A
 */
void f__B4ED_084C_001F_917A()
{
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ds, emu_si, -0x7F66));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_cwd();
	emu_idivw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00, -0x7F54));
	emu_movb(&emu_get_memory8(emu_ds, emu_si, -0x7F8A), emu_ax.l);
	emu_orb(&emu_ax.l, emu_ax.l);
	if (!emu_flags.zf) { f__B4ED_0863_0008_390C(); return; }
	emu_movb(&emu_get_memory8(emu_ds, emu_si, -0x7F8A), 0x1);
	emu_incw(&emu_si);
	emu_cmpws(&emu_si, 0x12);
	if ((emu_flags.sf != emu_flags.of)) { f__B4ED_084C_001F_917A(); return; }
	f__B4ED_0887_0003_0714(); return;
}

/**
 * Decompiled function f__B4ED_0863_0008_390C()
 *
 * @name f__B4ED_0863_0008_390C
 * @implements B4ED:0863:0008:390C ()
 *
 * Called From: B4ED:085C:001F:917A
 */
void f__B4ED_0863_0008_390C()
{
	emu_incw(&emu_si);
	emu_cmpws(&emu_si, 0x12);
	if ((emu_flags.sf != emu_flags.of)) { f__B4ED_084C_001F_917A(); return; }
	f__B4ED_0887_0003_0714(); return;
}

/**
 * Decompiled function f__B4ED_0864_0007_7F0C()
 *
 * @name f__B4ED_0864_0007_7F0C
 * @implements B4ED:0864:0007:7F0C ()
 *
 * Called From: B4ED:084A:0035:321A
 */
void f__B4ED_0864_0007_7F0C()
{
	emu_cmpws(&emu_si, 0x12);
	if ((emu_flags.sf != emu_flags.of)) { f__B4ED_084C_001F_917A(); return; }
	emu_ip = 0x0887; emu_last_cs = 0xB4ED; emu_last_ip = 0x0869; emu_last_length = 0x0007; emu_last_crc = 0x7F0C; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B4ED_086B_0013_F5BF()
 *
 * @name f__B4ED_086B_0013_F5BF
 * @implements B4ED:086B:0013:F5BF ()
 *
 * Called From: B4ED:083A:0035:321A
 */
void f__B4ED_086B_0013_F5BF()
{
	emu_movw(&emu_ax.x, 0x12);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x809A);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x8076);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x087E); emu_cs = 0x01F7; f__01F7_28B8_0024_D407();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34ED) { ovl__34ED(0xFF); }
	f__B4ED_087E_000C_C13B();
}

/**
 * Decompiled function f__B4ED_087E_000C_C13B()
 *
 * @name f__B4ED_087E_000C_C13B
 * @implements B4ED:087E:000C:C13B ()
 *
 * Called From: B4ED:087E:0013:F5BF
 */
void f__B4ED_087E_000C_C13B()
{
	emu_addws(&emu_sp, 0xA);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x7F54), 0x1);
	f__B4ED_0AA0_0005_04BA(); return;
}

/**
 * Decompiled function f__B4ED_0887_0003_0714()
 *
 * @name f__B4ED_0887_0003_0714
 * @implements B4ED:0887:0003:0714 ()
 *
 * Called From: B4ED:0820:0035:321A
 * Called From: B4ED:0820:0048:3F44
 * Called From: B4ED:0869:0008:390C
 * Called From: B4ED:0869:001F:917A
 */
void f__B4ED_0887_0003_0714()
{
	f__B4ED_0AA0_0005_04BA(); return;
}

/**
 * Decompiled function f__B4ED_088A_0021_177E()
 *
 * @name f__B4ED_088A_0021_177E
 * @implements B4ED:088A:0021:177E ()
 *
 * Called From: B4ED:0801:000A:4FC2
 */
void f__B4ED_088A_0021_177E()
{
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00, -0x7F96), 0xFF);
	if (!emu_flags.zf) { f__B4ED_089D_000E_AB84(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x6));
	emu_movb(&emu_ax.h, 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x7F96), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00, -0x7F96));
	emu_decw(&emu_get_memory16(emu_ds, 0x00, -0x7F96));
	emu_orw(&emu_ax.x, emu_ax.x);
	if (emu_flags.zf) { f__B4ED_08AB_002C_F9EB(); return; }
	f__B4ED_0AA0_0005_04BA(); return;
}

/**
 * Decompiled function f__B4ED_089D_000E_AB84()
 *
 * @name f__B4ED_089D_000E_AB84
 * @implements B4ED:089D:000E:AB84 ()
 *
 * Called From: B4ED:088F:0021:177E
 */
void f__B4ED_089D_000E_AB84()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00, -0x7F96));
	emu_decw(&emu_get_memory16(emu_ds, 0x00, -0x7F96));
	emu_orw(&emu_ax.x, emu_ax.x);
	if (emu_flags.zf) { f__B4ED_08AB_002C_F9EB(); return; }
	f__B4ED_0AA0_0005_04BA(); return;
}

/**
 * Decompiled function f__B4ED_08AB_002C_F9EB()
 *
 * @name f__B4ED_08AB_002C_F9EB
 * @implements B4ED:08AB:002C:F9EB ()
 *
 * Called From: B4ED:08A6:000E:AB84
 * Called From: B4ED:08A6:0021:177E
 */
void f__B4ED_08AB_002C_F9EB()
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
	emu_push(emu_cs); emu_push(0x08D7); emu_cs = 0x01F7; f__01F7_28B8_0024_D407();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34ED) { ovl__34ED(0xFF); }
	f__B4ED_08D7_0022_0F58();
}

/**
 * Decompiled function f__B4ED_08D7_0022_0F58()
 *
 * @name f__B4ED_08D7_0022_0F58
 * @implements B4ED:08D7:0022:0F58 ()
 *
 * Called From: B4ED:08D7:002C:F9EB
 */
void f__B4ED_08D7_0022_0F58()
{
	emu_addws(&emu_sp, 0xA);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x7F8C), 0x1);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x5), 0x55);
	if (!emu_flags.zf) { f__B4ED_08F9_0022_F451(); return; }
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0xC7);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x13F);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__B4ED_090D_000E_36B2(); return;
}

/**
 * Decompiled function f__B4ED_08F9_0022_F451()
 *
 * @name f__B4ED_08F9_0022_F451
 * @implements B4ED:08F9:0022:F451 ()
 *
 * Called From: B4ED:08E8:0022:0F58
 */
void f__B4ED_08F9_0022_F451()
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
		case 0x22A60D31: f__22A6_0D31_0015_D6F0(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0xB4ED; emu_last_ip = 0x0916; emu_last_length = 0x0022; emu_last_crc = 0xF451;
			emu_call();
			return;
	}
	f__B4ED_091B_0036_47E6();
}

/**
 * Decompiled function f__B4ED_090D_000E_36B2()
 *
 * @name f__B4ED_090D_000E_36B2
 * @implements B4ED:090D:000E:36B2 ()
 *
 * Called From: B4ED:08F7:0022:0F58
 */
void f__B4ED_090D_000E_36B2()
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
		case 0x22A60D31: f__22A6_0D31_0015_D6F0(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0xB4ED; emu_last_ip = 0x0916; emu_last_length = 0x000E; emu_last_crc = 0x36B2;
			emu_call();
			return;
	}
	f__B4ED_091B_0036_47E6();
}

/**
 * Decompiled function f__B4ED_091B_0036_47E6()
 *
 * @name f__B4ED_091B_0036_47E6
 * @implements B4ED:091B:0036:47E6 ()
 *
 * Called From: B4ED:091B:000E:36B2
 * Called From: B4ED:091B:0022:F451
 */
void f__B4ED_091B_0036_47E6()
{
	emu_addws(&emu_sp, 0xA);
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x6D8F), 0x0);
	if (emu_flags.zf) { f__B4ED_0985_001E_0A93(); return; }
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x6D8F), 0x4);
	if (emu_flags.zf) { emu_ip = 0x0985; emu_last_cs = 0xB4ED; emu_last_ip = 0x092A; emu_last_length = 0x0036; emu_last_crc = 0x47E6; emu_call(); return; } // Jump does not resolve
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00, -0x7F9E), 0xFF);
	if (emu_flags.zf) { emu_ip = 0x0985; emu_last_cs = 0xB4ED; emu_last_ip = 0x0931; emu_last_length = 0x0036; emu_last_crc = 0x47E6; emu_call(); return; } // Jump does not resolve
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00, -0x7F8E), 0x0);
	if (emu_flags.zf) { emu_ip = 0x0985; emu_last_cs = 0xB4ED; emu_last_ip = 0x0938; emu_last_length = 0x0036; emu_last_crc = 0x47E6; emu_call(); return; } // Jump does not resolve
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x37B6), 0x0);
	if (!emu_flags.zf) { emu_ip = 0x0985; emu_last_cs = 0xB4ED; emu_last_ip = 0x093F; emu_last_length = 0x0036; emu_last_crc = 0x47E6; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00, -0x7F9E));
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00, -0x7F8E));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0951); emu_cs = 0x3483; emu_ip = 0x097B; emu_last_cs = 0xB4ED; emu_last_ip = 0x094C; emu_last_length = 0x0036; emu_last_crc = 0x47E6; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__B4ED_0985_001E_0A93()
 *
 * @name f__B4ED_0985_001E_0A93
 * @implements B4ED:0985:001E:0A93 ()
 *
 * Called From: B4ED:0923:0036:47E6
 */
void f__B4ED_0985_001E_0A93()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x0), 0x0);
	if (emu_flags.zf) { f__B4ED_09AE_0020_BCA5(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x5));
	emu_movb(&emu_ax.h, 0x0);
	emu_push(emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_push(emu_cs); emu_push(0x09A3); emu_cs = 0x0FCB; f__0FCB_005F_001C_147D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34ED) { ovl__34ED(0xFF); }
	f__B4ED_09A3_0008_7080();
}

/**
 * Decompiled function f__B4ED_09A3_0008_7080()
 *
 * @name f__B4ED_09A3_0008_7080
 * @implements B4ED:09A3:0008:7080 ()
 *
 * Called From: B4ED:09A3:001E:0A93
 */
void f__B4ED_09A3_0008_7080()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x09AB); f__B4ED_0BF4_001B_29EA();
	f__B4ED_09AB_0023_BBA1();
}

/**
 * Decompiled function f__B4ED_09AB_0023_BBA1()
 *
 * @name f__B4ED_09AB_0023_BBA1
 * @implements B4ED:09AB:0023:BBA1 ()
 *
 * Called From: B4ED:09AB:0008:7080
 */
void f__B4ED_09AB_0023_BBA1()
{
	emu_addws(&emu_sp, 0x6);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x7F52), 0x1);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x7), 0x0);
	if (emu_flags.zf) { f__B4ED_09ED_0013_F5BF(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x7));
	emu_movb(&emu_ax.h, 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x7F54), emu_ax.x);
	emu_xorw(&emu_si, emu_si);
	f__B4ED_09E6_0007_7F0C(); return;
}

/**
 * Decompiled function f__B4ED_09AE_0020_BCA5()
 *
 * @name f__B4ED_09AE_0020_BCA5
 * @implements B4ED:09AE:0020:BCA5 ()
 *
 * Called From: B4ED:098C:001E:0A93
 */
void f__B4ED_09AE_0020_BCA5()
{
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x7F52), 0x1);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x7), 0x0);
	if (emu_flags.zf) { emu_ip = 0x09ED; emu_last_cs = 0xB4ED; emu_last_ip = 0x09BC; emu_last_length = 0x0020; emu_last_crc = 0xBCA5; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x7));
	emu_movb(&emu_ax.h, 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x7F54), emu_ax.x);
	emu_xorw(&emu_si, emu_si);
	f__B4ED_09E6_0007_7F0C(); return;
}

/**
 * Decompiled function f__B4ED_09CE_001F_917A()
 *
 * @name f__B4ED_09CE_001F_917A
 * @implements B4ED:09CE:001F:917A ()
 *
 * Called From: B4ED:09E9:0007:7F0C
 * Called From: B4ED:09E9:0008:390C
 * Called From: B4ED:09E9:001F:917A
 */
void f__B4ED_09CE_001F_917A()
{
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ds, emu_si, -0x7F66));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_cwd();
	emu_idivw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00, -0x7F54));
	emu_movb(&emu_get_memory8(emu_ds, emu_si, -0x7F8A), emu_ax.l);
	emu_orb(&emu_ax.l, emu_ax.l);
	if (!emu_flags.zf) { f__B4ED_09E5_0008_390C(); return; }
	emu_movb(&emu_get_memory8(emu_ds, emu_si, -0x7F8A), 0x1);
	emu_incw(&emu_si);
	emu_cmpws(&emu_si, 0x12);
	if ((emu_flags.sf != emu_flags.of)) { f__B4ED_09CE_001F_917A(); return; }
	f__B4ED_0A09_000A_610E(); return;
}

/**
 * Decompiled function f__B4ED_09E5_0008_390C()
 *
 * @name f__B4ED_09E5_0008_390C
 * @implements B4ED:09E5:0008:390C ()
 *
 * Called From: B4ED:09DE:001F:917A
 */
void f__B4ED_09E5_0008_390C()
{
	emu_incw(&emu_si);
	emu_cmpws(&emu_si, 0x12);
	if ((emu_flags.sf != emu_flags.of)) { f__B4ED_09CE_001F_917A(); return; }
	f__B4ED_0A09_000A_610E(); return;
}

/**
 * Decompiled function f__B4ED_09E6_0007_7F0C()
 *
 * @name f__B4ED_09E6_0007_7F0C
 * @implements B4ED:09E6:0007:7F0C ()
 *
 * Called From: B4ED:09CC:0020:BCA5
 * Called From: B4ED:09CC:0023:BBA1
 */
void f__B4ED_09E6_0007_7F0C()
{
	emu_cmpws(&emu_si, 0x12);
	if ((emu_flags.sf != emu_flags.of)) { f__B4ED_09CE_001F_917A(); return; }
	emu_ip = 0x0A09; emu_last_cs = 0xB4ED; emu_last_ip = 0x09EB; emu_last_length = 0x0007; emu_last_crc = 0x7F0C; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B4ED_09ED_0013_F5BF()
 *
 * @name f__B4ED_09ED_0013_F5BF
 * @implements B4ED:09ED:0013:F5BF ()
 *
 * Called From: B4ED:09BC:0023:BBA1
 */
void f__B4ED_09ED_0013_F5BF()
{
	emu_movw(&emu_ax.x, 0x12);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x809A);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x8076);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0A00); emu_cs = 0x01F7; f__01F7_28B8_0024_D407();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34ED) { ovl__34ED(0xFF); }
	f__B4ED_0A00_0013_76ED();
}

/**
 * Decompiled function f__B4ED_0A00_0013_76ED()
 *
 * @name f__B4ED_0A00_0013_76ED
 * @implements B4ED:0A00:0013:76ED ()
 *
 * Called From: B4ED:0A00:0013:F5BF
 */
void f__B4ED_0A00_0013_76ED()
{
	emu_addws(&emu_sp, 0xA);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x7F54), 0x1);
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x3A38), 0xFF);
	if (emu_flags.zf) { f__B4ED_0A13_000A_4976(); return; }
	emu_ip = 0x0AA0; emu_last_cs = 0xB4ED; emu_last_ip = 0x0A10; emu_last_length = 0x0013; emu_last_crc = 0x76ED; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B4ED_0A09_000A_610E()
 *
 * @name f__B4ED_0A09_000A_610E
 * @implements B4ED:0A09:000A:610E ()
 *
 * Called From: B4ED:09EB:0008:390C
 * Called From: B4ED:09EB:001F:917A
 */
void f__B4ED_0A09_000A_610E()
{
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x3A38), 0xFF);
	if (emu_flags.zf) { f__B4ED_0A13_000A_4976(); return; }
	emu_ip = 0x0AA0; emu_last_cs = 0xB4ED; emu_last_ip = 0x0A10; emu_last_length = 0x000A; emu_last_crc = 0x610E; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B4ED_0A13_000A_4976()
 *
 * @name f__B4ED_0A13_000A_4976
 * @implements B4ED:0A13:000A:4976 ()
 *
 * Called From: B4ED:0A0E:000A:610E
 * Called From: B4ED:0A0E:0013:76ED
 */
void f__B4ED_0A13_000A_4976()
{
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00, -0x7F8E), 0x2);
	if (emu_flags.zf) { f__B4ED_0A1D_001B_FCF8(); return; }
	f__B4ED_0AA0_0005_04BA(); return;
}

/**
 * Decompiled function f__B4ED_0A1D_001B_FCF8()
 *
 * @name f__B4ED_0A1D_001B_FCF8
 * @implements B4ED:0A1D:001B:FCF8 ()
 *
 * Called From: B4ED:0A18:000A:4976
 */
void f__B4ED_0A1D_001B_FCF8()
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
	emu_push(emu_cs); emu_push(0x0A38); emu_cs = 0x10E4; f__10E4_1EF1_0040_E33D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34ED) { ovl__34ED(0xFF); }
	f__B4ED_0A38_0020_E30E();
}

/**
 * Decompiled function f__B4ED_0A38_0020_E30E()
 *
 * @name f__B4ED_0A38_0020_E30E
 * @implements B4ED:0A38:0020:E30E ()
 *
 * Called From: B4ED:0A38:001B:FCF8
 */
void f__B4ED_0A38_0020_E30E()
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
	emu_push(emu_cs); emu_push(0x0A58); emu_cs = 0x10E4; f__10E4_1EF1_0040_E33D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34ED) { ovl__34ED(0xFF); }
	f__B4ED_0A58_0014_9D41();
}

/**
 * Decompiled function f__B4ED_0A58_0014_9D41()
 *
 * @name f__B4ED_0A58_0014_9D41
 * @implements B4ED:0A58:0014:9D41 ()
 *
 * Called From: B4ED:0A58:0020:E30E
 */
void f__B4ED_0A58_0014_9D41()
{
	emu_addws(&emu_sp, 0xE);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x6C6C), 0x0);
	emu_movb(&emu_get_memory8(emu_ss, emu_bp, -0x16), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x0);
	f__B4ED_0A7F_0010_CEE1(); return;
}

/**
 * Decompiled function f__B4ED_0A6C_0023_62B0()
 *
 * @name f__B4ED_0A6C_0023_62B0
 * @implements B4ED:0A6C:0023:62B0 ()
 *
 * Called From: B4ED:0A83:0010:CEE1
 * Called From: B4ED:0A83:0023:62B0
 */
void f__B4ED_0A6C_0023_62B0()
{
	emu_movw(&emu_ax.x, emu_bp - 0x15);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ss, emu_bp, -0x6));
	emu_addb(&emu_ax.l, 0xD7);
	emu_movb(&emu_get_memory8(emu_ss, emu_bx.x,  0x0), emu_ax.l);
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x6);
	if ((emu_flags.sf != emu_flags.of)) { f__B4ED_0A6C_0023_62B0(); return; }
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0x16);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0A8F); emu_cs = 0x259E; f__259E_0021_001A_9268();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34ED) { ovl__34ED(0xFF); }
	f__B4ED_0A8F_000F_B9FE();
}

/**
 * Decompiled function f__B4ED_0A7F_0010_CEE1()
 *
 * @name f__B4ED_0A7F_0010_CEE1
 * @implements B4ED:0A7F:0010:CEE1 ()
 *
 * Called From: B4ED:0A6A:0014:9D41
 */
void f__B4ED_0A7F_0010_CEE1()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x6);
	if ((emu_flags.sf != emu_flags.of)) { f__B4ED_0A6C_0023_62B0(); return; }
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0x16);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0A8F); emu_cs = 0x259E; emu_ip = 0x0AB0; emu_last_cs = 0xB4ED; emu_last_ip = 0x0A8A; emu_last_length = 0x0010; emu_last_crc = 0xCEE1; emu_call(); // Jump does not resolve
	f__B4ED_0A8F_000F_B9FE();
}

/**
 * Decompiled function f__B4ED_0A8F_000F_B9FE()
 *
 * @name f__B4ED_0A8F_000F_B9FE
 * @implements B4ED:0A8F:000F:B9FE ()
 *
 * Called From: B4ED:0A8F:0023:62B0
 */
void f__B4ED_0A8F_000F_B9FE()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x7F9A));
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x7F9C));
	emu_push(emu_cs); emu_push(0x0A9E); emu_cs = 0x2605; f__2605_000C_006D_4FAF();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34ED) { ovl__34ED(0xFF); }
	f__B4ED_0A9E_0007_3E7A();
}

/**
 * Decompiled function f__B4ED_0A9E_0007_3E7A()
 *
 * @name f__B4ED_0A9E_0007_3E7A
 * @implements B4ED:0A9E:0007:3E7A ()
 *
 * Called From: B4ED:0A9E:000F:B9FE
 */
void f__B4ED_0A9E_0007_3E7A()
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
 * Decompiled function f__B4ED_0AA0_0005_04BA()
 *
 * @name f__B4ED_0AA0_0005_04BA
 * @implements B4ED:0AA0:0005:04BA ()
 *
 * Called From: B4ED:07F7:0003:05D4
 * Called From: B4ED:07F7:0031:22A2
 * Called From: B4ED:0887:0003:0714
 * Called From: B4ED:0887:000C:C13B
 * Called From: B4ED:08A8:000E:AB84
 * Called From: B4ED:08A8:0021:177E
 * Called From: B4ED:0A1A:000A:4976
 */
void f__B4ED_0AA0_0005_04BA()
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
 * Decompiled function f__B4ED_0AA5_0010_6060()
 *
 * @name f__B4ED_0AA5_0010_6060
 * @implements B4ED:0AA5:0010:6060 ()
 *
 * Called From: B4ED:03DD:000C:5BB7
 * Called From: B4ED:0608:0008:50C0
 * Called From: B4ED:06ED:0015:7F78
 */
void f__B4ED_0AA5_0010_6060()
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
	f__B4ED_0AB5_000A_97F0();
}

/**
 * Decompiled function f__B4ED_0AB5_000A_97F0()
 *
 * @name f__B4ED_0AB5_000A_97F0
 * @implements B4ED:0AB5:000A:97F0 ()
 *
 * Called From: B4ED:0AB5:0010:6060
 */
void f__B4ED_0AB5_000A_97F0()
{
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00, -0x7F52), 0x0);
	if (!emu_flags.zf) { f__B4ED_0ABF_001C_1E4C(); return; }
	f__B4ED_0BC9_0005_196C(); return;
}

/**
 * Decompiled function f__B4ED_0ABF_001C_1E4C()
 *
 * @name f__B4ED_0ABF_001C_1E4C
 * @implements B4ED:0ABF:001C:1E4C ()
 *
 * Called From: B4ED:0ABA:000A:97F0
 */
void f__B4ED_0ABF_001C_1E4C()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00, -0x7F92));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00, -0x7F94));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76AE));
	if ((emu_flags.sf != emu_flags.of)) { emu_ip = 0x0ADB; emu_last_cs = 0xB4ED; emu_last_ip = 0x0ACA; emu_last_length = 0x001C; emu_last_crc = 0x1E4C; emu_call(); return; } // Jump does not resolve
	if (!emu_flags.zf) { f__B4ED_0AD4_0007_3020(); return; }
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76AC));
	if (emu_flags.cf) { f__B4ED_0ADB_0038_397F(); return; }
	emu_orw(&emu_di, emu_di);
	if (!emu_flags.zf) { f__B4ED_0ADB_0038_397F(); return; }
	f__B4ED_0BC9_0005_196C(); return;
}

/**
 * Decompiled function f__B4ED_0AD4_0007_3020()
 *
 * @name f__B4ED_0AD4_0007_3020
 * @implements B4ED:0AD4:0007:3020 ()
 *
 * Called From: B4ED:0ACC:001C:1E4C
 */
void f__B4ED_0AD4_0007_3020()
{
	emu_orw(&emu_di, emu_di);
	if (!emu_flags.zf) { emu_ip = 0x0ADB; emu_last_cs = 0xB4ED; emu_last_ip = 0x0AD6; emu_last_length = 0x0007; emu_last_crc = 0x3020; emu_call(); return; } // Jump does not resolve
	f__B4ED_0BC9_0005_196C(); return;
}

/**
 * Decompiled function f__B4ED_0ADB_0038_397F()
 *
 * @name f__B4ED_0ADB_0038_397F
 * @implements B4ED:0ADB:0038:397F ()
 *
 * Called From: B4ED:0AD2:001C:1E4C
 * Called From: B4ED:0AD6:001C:1E4C
 */
void f__B4ED_0ADB_0038_397F()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76AE));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76AC));
	emu_addws(&emu_dx.x, 0x7);
	emu_adcw(&emu_ax.x, 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x7F92), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x7F94), emu_dx.x);
	emu_decw(&emu_get_memory16(emu_ds, 0x00, -0x7F54));
	if (emu_flags.zf) { f__B4ED_0AF9_001A_9ADD(); return; }
	emu_orw(&emu_di, emu_di);
	if (emu_flags.zf) { f__B4ED_0B34_000B_203B(); return; }
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00, -0x7F52), 0x1);
	if (!emu_flags.zf) { f__B4ED_0B18_0011_20D9(); return; }
	emu_movw(&emu_ax.x, 0x12);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x809A);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x8088);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0B13); emu_cs = 0x01F7; f__01F7_28B8_0024_D407();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34ED) { ovl__34ED(0xFF); }
	f__B4ED_0B13_0005_1FF4();
}

/**
 * Decompiled function f__B4ED_0AF9_001A_9ADD()
 *
 * @name f__B4ED_0AF9_001A_9ADD
 * @implements B4ED:0AF9:001A:9ADD ()
 *
 * Called From: B4ED:0AF3:0038:397F
 */
void f__B4ED_0AF9_001A_9ADD()
{
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00, -0x7F52), 0x1);
	if (!emu_flags.zf) { f__B4ED_0B18_0011_20D9(); return; }
	emu_movw(&emu_ax.x, 0x12);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x809A);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x8088);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0B13); emu_cs = 0x01F7; f__01F7_28B8_0024_D407();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34ED) { ovl__34ED(0xFF); }
	f__B4ED_0B13_0005_1FF4();
}

/**
 * Decompiled function f__B4ED_0B13_0005_1FF4()
 *
 * @name f__B4ED_0B13_0005_1FF4
 * @implements B4ED:0B13:0005:1FF4 ()
 *
 * Called From: B4ED:0B13:001A:9ADD
 * Called From: B4ED:0B13:0038:397F
 */
void f__B4ED_0B13_0005_1FF4()
{
	emu_addws(&emu_sp, 0xA);
	f__B4ED_0B2C_0008_FCF8(); return;
}

/**
 * Decompiled function f__B4ED_0B18_0011_20D9()
 *
 * @name f__B4ED_0B18_0011_20D9
 * @implements B4ED:0B18:0011:20D9 ()
 *
 * Called From: B4ED:0AFE:001A:9ADD
 * Called From: B4ED:0AFE:0038:397F
 */
void f__B4ED_0B18_0011_20D9()
{
	emu_movw(&emu_ax.x, 0x12);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x8088);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0B29); emu_cs = 0x01F7; f__01F7_2947_0014_9C5E();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34ED) { ovl__34ED(0xFF); }
	f__B4ED_0B29_000B_E4FF();
}

/**
 * Decompiled function f__B4ED_0B29_000B_E4FF()
 *
 * @name f__B4ED_0B29_000B_E4FF
 * @implements B4ED:0B29:000B:E4FF ()
 *
 * Called From: B4ED:0B29:0011:20D9
 */
void f__B4ED_0B29_000B_E4FF()
{
	emu_addws(&emu_sp, 0x8);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x7F52), 0x0);
	f__B4ED_0B9E_0011_7AB5(); return;
}

/**
 * Decompiled function f__B4ED_0B2C_0008_FCF8()
 *
 * @name f__B4ED_0B2C_0008_FCF8
 * @implements B4ED:0B2C:0008:FCF8 ()
 *
 * Called From: B4ED:0B16:0005:1FF4
 */
void f__B4ED_0B2C_0008_FCF8()
{
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x7F52), 0x0);
	f__B4ED_0B9E_0011_7AB5(); return;
}

/**
 * Decompiled function f__B4ED_0B34_000B_203B()
 *
 * @name f__B4ED_0B34_000B_203B
 * @implements B4ED:0B34:000B:203B ()
 *
 * Called From: B4ED:0AF7:0038:397F
 */
void f__B4ED_0B34_000B_203B()
{
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00, -0x7F52), 0x1);
	if (!emu_flags.zf) { f__B4ED_0B6F_0004_0760(); return; }
	emu_xorw(&emu_si, emu_si);
	f__B4ED_0B68_0007_7EE2(); return;
}

/**
 * Decompiled function f__B4ED_0B3F_0020_7004()
 *
 * @name f__B4ED_0B3F_0020_7004
 * @implements B4ED:0B3F:0020:7004 ()
 *
 * Called From: B4ED:0B6B:0007:7EE2
 * Called From: B4ED:0B6B:000C:B8ED
 * Called From: B4ED:0B6B:0010:3813
 */
void f__B4ED_0B3F_0020_7004()
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
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__B4ED_0B5F_0010_3813(); return; }
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ss, emu_bp, -0x2));
	f__B4ED_0B63_000C_B8ED(); return;
}

/**
 * Decompiled function f__B4ED_0B5F_0010_3813()
 *
 * @name f__B4ED_0B5F_0010_3813
 * @implements B4ED:0B5F:0010:3813 ()
 *
 * Called From: B4ED:0B58:0020:7004
 */
void f__B4ED_0B5F_0010_3813()
{
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ds, emu_si, -0x7F66));
	emu_movb(&emu_get_memory8(emu_ds, emu_si, -0x7F78), emu_ax.l);
	emu_incw(&emu_si);
	emu_cmpws(&emu_si, 0x12);
	if ((emu_flags.sf != emu_flags.of)) { f__B4ED_0B3F_0020_7004(); return; }
	f__B4ED_0B9E_0011_7AB5(); return;
}

/**
 * Decompiled function f__B4ED_0B63_000C_B8ED()
 *
 * @name f__B4ED_0B63_000C_B8ED
 * @implements B4ED:0B63:000C:B8ED ()
 *
 * Called From: B4ED:0B5D:0020:7004
 */
void f__B4ED_0B63_000C_B8ED()
{
	emu_movb(&emu_get_memory8(emu_ds, emu_si, -0x7F78), emu_ax.l);
	emu_incw(&emu_si);
	emu_cmpws(&emu_si, 0x12);
	if ((emu_flags.sf != emu_flags.of)) { f__B4ED_0B3F_0020_7004(); return; }
	f__B4ED_0B9E_0011_7AB5(); return;
}

/**
 * Decompiled function f__B4ED_0B68_0007_7EE2()
 *
 * @name f__B4ED_0B68_0007_7EE2
 * @implements B4ED:0B68:0007:7EE2 ()
 *
 * Called From: B4ED:0B3D:000B:203B
 */
void f__B4ED_0B68_0007_7EE2()
{
	emu_cmpws(&emu_si, 0x12);
	if ((emu_flags.sf != emu_flags.of)) { f__B4ED_0B3F_0020_7004(); return; }
	emu_ip = 0x0B9E; emu_last_cs = 0xB4ED; emu_last_ip = 0x0B6D; emu_last_length = 0x0007; emu_last_crc = 0x7EE2; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B4ED_0B6F_0004_0760()
 *
 * @name f__B4ED_0B6F_0004_0760
 * @implements B4ED:0B6F:0004:0760 ()
 *
 * Called From: B4ED:0B39:000B:203B
 */
void f__B4ED_0B6F_0004_0760()
{
	emu_xorw(&emu_si, emu_si);
	f__B4ED_0B99_0016_4421(); return;
}

/**
 * Decompiled function f__B4ED_0B73_0020_3911()
 *
 * @name f__B4ED_0B73_0020_3911
 * @implements B4ED:0B73:0020:3911 ()
 *
 * Called From: B4ED:0B9C:0016:4421
 * Called From: B4ED:0B9C:0017:6721
 * Called From: B4ED:0B9C:001C:072A
 */
void f__B4ED_0B73_0020_3911()
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
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__B4ED_0B93_001C_072A(); return; }
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ss, emu_bp, -0x2));
	emu_movb(&emu_get_memory8(emu_ds, emu_si, -0x7F78), emu_ax.l);
	f__B4ED_0B98_0017_6721(); return;
}

/**
 * Decompiled function f__B4ED_0B93_001C_072A()
 *
 * @name f__B4ED_0B93_001C_072A
 * @implements B4ED:0B93:001C:072A ()
 *
 * Called From: B4ED:0B88:0020:3911
 */
void f__B4ED_0B93_001C_072A()
{
	emu_movb(&emu_get_memory8(emu_ds, emu_si, -0x7F78), 0x0);
	emu_incw(&emu_si);
	emu_cmpws(&emu_si, 0x12);
	if ((emu_flags.sf != emu_flags.of)) { f__B4ED_0B73_0020_3911(); return; }
	emu_orw(&emu_di, emu_di);
	if (!emu_flags.zf) { emu_ip = 0x0BC9; emu_last_cs = 0xB4ED; emu_last_ip = 0x0BA0; emu_last_length = 0x001C; emu_last_crc = 0x072A; emu_call(); return; } // Jump does not resolve
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x6674));
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x6676));
	emu_push(emu_cs);
	emu_push(0x0BAF); f__B4ED_0BD4_001B_D25E();
	f__B4ED_0BAF_0017_1E5A();
}

/**
 * Decompiled function f__B4ED_0B98_0017_6721()
 *
 * @name f__B4ED_0B98_0017_6721
 * @implements B4ED:0B98:0017:6721 ()
 *
 * Called From: B4ED:0B91:0020:3911
 */
void f__B4ED_0B98_0017_6721()
{
	emu_incw(&emu_si);
	emu_cmpws(&emu_si, 0x12);
	if ((emu_flags.sf != emu_flags.of)) { f__B4ED_0B73_0020_3911(); return; }
	emu_orw(&emu_di, emu_di);
	if (!emu_flags.zf) { emu_ip = 0x0BC9; emu_last_cs = 0xB4ED; emu_last_ip = 0x0BA0; emu_last_length = 0x0017; emu_last_crc = 0x6721; emu_call(); return; } // Jump does not resolve
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x6674));
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x6676));
	emu_push(emu_cs);
	emu_push(0x0BAF); f__B4ED_0BD4_001B_D25E();
	f__B4ED_0BAF_0017_1E5A();
}

/**
 * Decompiled function f__B4ED_0B99_0016_4421()
 *
 * @name f__B4ED_0B99_0016_4421
 * @implements B4ED:0B99:0016:4421 ()
 *
 * Called From: B4ED:0B71:0004:0760
 */
void f__B4ED_0B99_0016_4421()
{
	emu_cmpws(&emu_si, 0x12);
	if ((emu_flags.sf != emu_flags.of)) { f__B4ED_0B73_0020_3911(); return; }
	emu_orw(&emu_di, emu_di);
	if (!emu_flags.zf) { emu_ip = 0x0BC9; emu_last_cs = 0xB4ED; emu_last_ip = 0x0BA0; emu_last_length = 0x0016; emu_last_crc = 0x4421; emu_call(); return; } // Jump does not resolve
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x6674));
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x6676));
	emu_push(emu_cs);
	emu_push(0x0BAF); emu_ip = 0x0BD4; emu_last_cs = 0xB4ED; emu_last_ip = 0x0BAC; emu_last_length = 0x0016; emu_last_crc = 0x4421; emu_call(); // Jump does not resolve
	f__B4ED_0BAF_0017_1E5A();
}

/**
 * Decompiled function f__B4ED_0B9E_0011_7AB5()
 *
 * @name f__B4ED_0B9E_0011_7AB5
 * @implements B4ED:0B9E:0011:7AB5 ()
 *
 * Called From: B4ED:0B32:0008:FCF8
 * Called From: B4ED:0B32:000B:E4FF
 * Called From: B4ED:0B6D:000C:B8ED
 * Called From: B4ED:0B6D:0010:3813
 */
void f__B4ED_0B9E_0011_7AB5()
{
	emu_orw(&emu_di, emu_di);
	if (!emu_flags.zf) { f__B4ED_0BC9_0005_196C(); return; }
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x6674));
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x6676));
	emu_push(emu_cs);
	emu_push(0x0BAF); f__B4ED_0BD4_001B_D25E();
	f__B4ED_0BAF_0017_1E5A();
}

/**
 * Decompiled function f__B4ED_0BAF_0017_1E5A()
 *
 * @name f__B4ED_0BAF_0017_1E5A
 * @implements B4ED:0BAF:0017:1E5A ()
 *
 * Called From: B4ED:0BAF:0011:7AB5
 * Called From: B4ED:0BAF:0017:6721
 * Called From: B4ED:0BAF:001C:072A
 */
void f__B4ED_0BAF_0017_1E5A()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_ax.x, 0xDD);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0xD7);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x6674));
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x6676));
	emu_push(emu_cs); emu_push(0x0BC6); emu_cs = 0x2BA5; f__2BA5_0006_009C_1FA4();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34ED) { ovl__34ED(0xFF); }
	f__B4ED_0BC6_0008_FA6C();
}

/**
 * Decompiled function f__B4ED_0BC6_0008_FA6C()
 *
 * @name f__B4ED_0BC6_0008_FA6C
 * @implements B4ED:0BC6:0008:FA6C ()
 *
 * Called From: B4ED:0BC6:0017:1E5A
 */
void f__B4ED_0BC6_0008_FA6C()
{
	emu_addws(&emu_sp, 0x8);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00, -0x7F52));
	f__B4ED_0BCE_0006_137A(); return;
}

/**
 * Decompiled function f__B4ED_0BC9_0005_196C()
 *
 * @name f__B4ED_0BC9_0005_196C
 * @implements B4ED:0BC9:0005:196C ()
 *
 * Called From: B4ED:0ABC:000A:97F0
 * Called From: B4ED:0AD8:0007:3020
 * Called From: B4ED:0AD8:001C:1E4C
 * Called From: B4ED:0BA0:0011:7AB5
 */
void f__B4ED_0BC9_0005_196C()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00, -0x7F52));
	f__B4ED_0BCE_0006_137A(); return;
}

/**
 * Decompiled function f__B4ED_0BCE_0006_137A()
 *
 * @name f__B4ED_0BCE_0006_137A
 * @implements B4ED:0BCE:0006:137A ()
 *
 * Called From: B4ED:0BCC:0005:196C
 * Called From: B4ED:0BCC:0008:FA6C
 */
void f__B4ED_0BCE_0006_137A()
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
 * Decompiled function f__B4ED_0BD4_001B_D25E()
 *
 * @name f__B4ED_0BD4_001B_D25E
 * @implements B4ED:0BD4:001B:D25E ()
 *
 * Called From: B4ED:03EB:000E:583C
 * Called From: B4ED:06A6:0010:3ABE
 * Called From: B4ED:06FB:000E:79BD
 * Called From: B4ED:0BAC:0011:7AB5
 * Called From: B4ED:0BAC:0017:6721
 * Called From: B4ED:0BAC:001C:072A
 */
void f__B4ED_0BD4_001B_D25E()
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
	emu_push(emu_cs); emu_push(0x0BEF); emu_cs = 0x01F7; f__01F7_28B8_0024_D407();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34ED) { ovl__34ED(0xFF); }
	f__B4ED_0BEF_0005_1C92();
}

/**
 * Decompiled function f__B4ED_0BEF_0005_1C92()
 *
 * @name f__B4ED_0BEF_0005_1C92
 * @implements B4ED:0BEF:0005:1C92 ()
 *
 * Called From: B4ED:0BEF:001B:D25E
 */
void f__B4ED_0BEF_0005_1C92()
{
	emu_addws(&emu_sp, 0xA);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B4ED_0BF4_001B_29EA()
 *
 * @name f__B4ED_0BF4_001B_29EA
 * @implements B4ED:0BF4:001B:29EA ()
 *
 * Called From: B4ED:09A8:0008:7080
 */
void f__B4ED_0BF4_001B_29EA()
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
	emu_push(0x0C0F); f__B4ED_0CB5_0015_DD1C();
	f__B4ED_0C0F_0017_3FC8();
}

/**
 * Decompiled function f__B4ED_0C0F_0017_3FC8()
 *
 * @name f__B4ED_0C0F_0017_3FC8
 * @implements B4ED:0C0F:0017:3FC8 ()
 *
 * Called From: B4ED:0C0F:001B:29EA
 */
void f__B4ED_0C0F_0017_3FC8()
{
	emu_addws(&emu_sp, 0x8);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_dx.x);
	f__B4ED_0C29_002A_F52E(); return;
}

/**
 * Decompiled function f__B4ED_0C26_002D_B532()
 *
 * @name f__B4ED_0C26_002D_B532
 * @implements B4ED:0C26:002D:B532 ()
 *
 * Called From: B4ED:0C3C:002A:F52E
 * Called From: B4ED:0C3C:002D:B532
 */
void f__B4ED_0C26_002D_B532()
{
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0x0);
	if (emu_flags.zf) { f__B4ED_0C3E_0015_5D6E(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x0));
	emu_cmpb(&emu_ax.l, emu_get_memory8(emu_ds, 0x00,  0x264A));
	if (!emu_flags.zf) { f__B4ED_0C26_002D_B532(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0x0);
	if (emu_flags.zf) { emu_ip = 0x0C53; emu_last_cs = 0xB4ED; emu_last_ip = 0x0C45; emu_last_length = 0x002D; emu_last_crc = 0xB532; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0x0);
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x8));
	f__B4ED_0C5D_001B_842D(); return;
}

/**
 * Decompiled function f__B4ED_0C29_002A_F52E()
 *
 * @name f__B4ED_0C29_002A_F52E
 * @implements B4ED:0C29:002A:F52E ()
 *
 * Called From: B4ED:0C24:0017:3FC8
 */
void f__B4ED_0C29_002A_F52E()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0x0);
	if (emu_flags.zf) { emu_ip = 0x0C3E; emu_last_cs = 0xB4ED; emu_last_ip = 0x0C30; emu_last_length = 0x002A; emu_last_crc = 0xF52E; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x0));
	emu_cmpb(&emu_ax.l, emu_get_memory8(emu_ds, 0x00,  0x264A));
	if (!emu_flags.zf) { f__B4ED_0C26_002D_B532(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0x0);
	if (emu_flags.zf) { emu_ip = 0x0C53; emu_last_cs = 0xB4ED; emu_last_ip = 0x0C45; emu_last_length = 0x002A; emu_last_crc = 0xF52E; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0x0);
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_ip = 0x0C5D; emu_last_cs = 0xB4ED; emu_last_ip = 0x0C51; emu_last_length = 0x002A; emu_last_crc = 0xF52E; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B4ED_0C3E_0015_5D6E()
 *
 * @name f__B4ED_0C3E_0015_5D6E
 * @implements B4ED:0C3E:0015:5D6E ()
 *
 * Called From: B4ED:0C30:002D:B532
 */
void f__B4ED_0C3E_0015_5D6E()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0x0);
	if (emu_flags.zf) { f__B4ED_0C53_0025_9FA7(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0x0);
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_ip = 0x0C5D; emu_last_cs = 0xB4ED; emu_last_ip = 0x0C51; emu_last_length = 0x0015; emu_last_crc = 0x5D6E; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B4ED_0C53_0025_9FA7()
 *
 * @name f__B4ED_0C53_0025_9FA7
 * @implements B4ED:0C53:0025:9FA7 ()
 *
 * Called From: B4ED:0C45:0015:5D6E
 */
void f__B4ED_0C53_0025_9FA7()
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
	emu_push(emu_cs); emu_push(0x0C78); emu_cs = 0x10E4; f__10E4_1EF1_0040_E33D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34ED) { ovl__34ED(0xFF); }
	f__B4ED_0C78_002B_2EBC();
}

/**
 * Decompiled function f__B4ED_0C5D_001B_842D()
 *
 * @name f__B4ED_0C5D_001B_842D
 * @implements B4ED:0C5D:001B:842D ()
 *
 * Called From: B4ED:0C51:002D:B532
 */
void f__B4ED_0C5D_001B_842D()
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
	emu_push(emu_cs); emu_push(0x0C78); emu_cs = 0x10E4; f__10E4_1EF1_0040_E33D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34ED) { ovl__34ED(0xFF); }
	f__B4ED_0C78_002B_2EBC();
}

/**
 * Decompiled function f__B4ED_0C78_002B_2EBC()
 *
 * @name f__B4ED_0C78_002B_2EBC
 * @implements B4ED:0C78:002B:2EBC ()
 *
 * Called From: B4ED:0C78:001B:842D
 * Called From: B4ED:0C78:0025:9FA7
 */
void f__B4ED_0C78_002B_2EBC()
{
	emu_addws(&emu_sp, 0xE);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	if (emu_flags.zf) { f__B4ED_0CB0_0005_04BA(); return; }
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
	emu_push(emu_cs); emu_push(0x0CA3); emu_cs = 0x10E4; f__10E4_1EF1_0040_E33D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34ED) { ovl__34ED(0xFF); }
	f__B4ED_0CA3_0012_DD8E();
}

/**
 * Decompiled function f__B4ED_0CA3_0012_DD8E()
 *
 * @name f__B4ED_0CA3_0012_DD8E
 * @implements B4ED:0CA3:0012:DD8E ()
 *
 * Called From: B4ED:0CA3:002B:2EBC
 */
void f__B4ED_0CA3_0012_DD8E()
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
 * Decompiled function f__B4ED_0CB0_0005_04BA()
 *
 * @name f__B4ED_0CB0_0005_04BA
 * @implements B4ED:0CB0:0005:04BA ()
 *
 * Called From: B4ED:0C81:002B:2EBC
 */
void f__B4ED_0CB0_0005_04BA()
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
 * Decompiled function f__B4ED_0CB5_0015_DD1C()
 *
 * @name f__B4ED_0CB5_0015_DD1C
 * @implements B4ED:0CB5:0015:DD1C ()
 *
 * Called From: B4ED:0C0C:001B:29EA
 */
void f__B4ED_0CB5_0015_DD1C()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_flags.zf) { emu_ip = 0x0D04; emu_last_cs = 0xB4ED; emu_last_ip = 0x0CBE; emu_last_length = 0x0015; emu_last_crc = 0xDD1C; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xC));
	if (emu_flags.zf) { emu_ip = 0x0D04; emu_last_cs = 0xB4ED; emu_last_ip = 0x0CC6; emu_last_length = 0x0015; emu_last_crc = 0xDD1C; emu_call(); return; } // Jump does not resolve
	f__B4ED_0CF4_0012_BD4D(); return;
}

/**
 * Decompiled function f__B4ED_0CCA_0018_AC11()
 *
 * @name f__B4ED_0CCA_0018_AC11
 * @implements B4ED:0CCA:0018:AC11 ()
 *
 * Called From: B4ED:0CFB:0012:BD4D
 * Called From: B4ED:0CFB:0024:8B49
 */
void f__B4ED_0CCA_0018_AC11()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0xE1);
	if (!emu_flags.zf) { f__B4ED_0CE2_0024_8B49(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0x1);
	emu_incw(&emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_incw(&emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_ip = 0x0CF4; emu_last_cs = 0xB4ED; emu_last_ip = 0x0CE0; emu_last_length = 0x0018; emu_last_crc = 0xAC11; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B4ED_0CE2_0024_8B49()
 *
 * @name f__B4ED_0CE2_0024_8B49
 * @implements B4ED:0CE2:0024:8B49 ()
 *
 * Called From: B4ED:0CD1:0018:AC11
 */
void f__B4ED_0CE2_0024_8B49()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x0));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), emu_ax.l);
	emu_incw(&emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_incw(&emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0x0);
	if (!emu_flags.zf) { f__B4ED_0CCA_0018_AC11(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0x0);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B4ED_0CF4_0012_BD4D()
 *
 * @name f__B4ED_0CF4_0012_BD4D
 * @implements B4ED:0CF4:0012:BD4D ()
 *
 * Called From: B4ED:0CC8:0015:DD1C
 */
void f__B4ED_0CF4_0012_BD4D()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0x0);
	if (!emu_flags.zf) { f__B4ED_0CCA_0018_AC11(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0x0);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

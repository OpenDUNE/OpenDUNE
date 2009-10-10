/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__B4DA_0000_002C_B3C2()
 *
 * @name f__B4DA_0000_002C_B3C2
 * @implements B4DA:0000:002C:B3C2 ()
 *
 * Called From: 34DA:0020:0005:0000
 * Called From: B4DA:118F:0011:BE11
 */
void f__B4DA_0000_002C_B3C2()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subw(&emu_sp, 0x6);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_di, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movw(&emu_ax, emu_di);
	emu_movw(&emu_dx, 0x1E);
	emu_imuluw(&emu_ax, emu_dx);
	emu_movw(&emu_bx, emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, emu_bx, 0x37F8));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x0));
	emu_movws(&emu_ax, emu_al);
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_movw(&emu_ax, 0x2586);
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_movw(&emu_ax, 0x9939);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x002C); emu_cs = 0x01F7; f__01F7_378D_0020_0F64();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_002C_0021_F997();
}

/**
 * Decompiled function f__B4DA_002C_0021_F997()
 *
 * @name f__B4DA_002C_0021_F997
 * @implements B4DA:002C:0021:F997 ()
 *
 * Called From: B4DA:002C:002C:B3C2
 */
void f__B4DA_002C_0021_F997()
{
	emu_addw(&emu_sp, 0xA);
	emu_movw(&emu_ax, 0x1);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x998C));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x998A));
	emu_movw(&emu_ax, 0x3);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x3);
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_movw(&emu_ax, 0x9939);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x004D); emu_cs = 0x34CA; ovl__34CA(0);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_004D_001B_4375();
}

/**
 * Decompiled function f__B4DA_004D_001B_4375()
 *
 * @name f__B4DA_004D_001B_4375
 * @implements B4DA:004D:001B:4375 ()
 *
 * Called From: B4DA:004D:0021:F997
 */
void f__B4DA_004D_001B_4375()
{
	emu_addw(&emu_sp, 0xE);
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_movw(&emu_ax, 0x2);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x3);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x353F);
	emu_movw(&emu_es, emu_ax);

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_es, 0x00, 0x6630);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_es, 0x00, 0x6632);
	emu_push(0x0068);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A604A5: f__22A6_04A5_000F_3B8F(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0xB4DA; emu_last_ip = 0x0063; emu_last_length = 0x001B; emu_last_crc = 0x4375;
			emu_call();
			return;
	}
	f__B4DA_0068_000C_DE03();
}

/**
 * Decompiled function f__B4DA_0068_000C_DE03()
 *
 * @name f__B4DA_0068_000C_DE03
 * @implements B4DA:0068:000C:DE03 ()
 *
 * Called From: B4DA:0068:001B:4375
 */
void f__B4DA_0068_000C_DE03()
{
	emu_addw(&emu_sp, 0x8);
	emu_movw(&emu_ax, 0x2);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0074); emu_cs = 0x2598; f__2598_0000_0017_EB80();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_0074_0022_FFAD();
}

/**
 * Decompiled function f__B4DA_0074_0022_FFAD()
 *
 * @name f__B4DA_0074_0022_FFAD
 * @implements B4DA:0074:0022:FFAD ()
 *
 * Called From: B4DA:0074:000C:DE03
 */
void f__B4DA_0074_0022_FFAD()
{
	emu_pop(&emu_cx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax);
	emu_cmpw(&emu_di, 0x5);
	if (!emu_flags.zf) { f__B4DA_0099_0011_F941(); return; }
	emu_xorw(&emu_ax, emu_ax);
	emu_movw(&emu_dx, 0x300);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C34));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C32));
	emu_push(emu_ds);
	emu_movw(&emu_ax, 0x2593);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0096); emu_cs = 0x253D; f__253D_0000_0013_38F4();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_0096_0014_D1CA();
}

/**
 * Decompiled function f__B4DA_0096_0014_D1CA()
 *
 * @name f__B4DA_0096_0014_D1CA
 * @implements B4DA:0096:0014:D1CA ()
 *
 * Called From: B4DA:0096:0022:FFAD
 */
void f__B4DA_0096_0014_D1CA()
{
	emu_addw(&emu_sp, 0xC);
	emu_movw(&emu_ax, 0x60);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_movw(&emu_ax, 0x7FC6);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x00AA); emu_cs = 0x01F7; emu_Tools_Memset();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_00AA_0033_44E2();
}

/**
 * Decompiled function f__B4DA_0099_0011_F941()
 *
 * @name f__B4DA_0099_0011_F941
 * @implements B4DA:0099:0011:F941 ()
 *
 * Called From: B4DA:007B:0022:FFAD
 */
void f__B4DA_0099_0011_F941()
{
	emu_movw(&emu_ax, 0x60);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_movw(&emu_ax, 0x7FC6);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x00AA); emu_cs = 0x01F7; emu_Tools_Memset();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_00AA_0033_44E2();
}

/**
 * Decompiled function f__B4DA_00AA_0033_44E2()
 *
 * @name f__B4DA_00AA_0033_44E2
 * @implements B4DA:00AA:0033:44E2 ()
 *
 * Called From: B4DA:00AA:0014:D1CA
 * Called From: B4DA:00AA:0011:F941
 */
void f__B4DA_00AA_0033_44E2()
{
	emu_addw(&emu_sp, 0x8);
	emu_movw(&emu_bx, emu_di);
	emu_movb(&emu_cl, 0x3);
	emu_shlw(&emu_bx, emu_cl);
	emu_movw(&emu_ax, 0x2C6C);
	emu_movw(&emu_es, emu_ax);
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x0));
	emu_movb(&emu_get_memory8(emu_ds, 0x00, 0x8008), emu_al);
	emu_movb(&emu_get_memory8(emu_ds, 0x00, 0x8006), emu_al);
	emu_movw(&emu_bx, emu_di);
	emu_movb(&emu_cl, 0x3);
	emu_shlw(&emu_bx, emu_cl);
	emu_movw(&emu_ax, 0x2C6C);
	emu_movw(&emu_es, emu_ax);
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x1));
	emu_movb(&emu_get_memory8(emu_ds, 0x00, 0x8009), emu_al);
	emu_movb(&emu_get_memory8(emu_ds, 0x00, 0x8007), emu_al);
	emu_xorw(&emu_si, emu_si);
	f__B4DA_0101_0012_9CE5(); return;
}

/**
 * Decompiled function f__B4DA_00DD_0036_600D()
 *
 * @name f__B4DA_00DD_0036_600D
 * @implements B4DA:00DD:0036:600D ()
 *
 * Called From: B4DA:0104:0012:9CE5
 * Called From: B4DA:0104:0036:600D
 */
void f__B4DA_00DD_0036_600D()
{
	emu_movw(&emu_bx, emu_si);
	emu_movb(&emu_cl, 0x2);
	emu_shlw(&emu_bx, emu_cl);
	emu_movw(&emu_ax, 0x2DCE);
	emu_movw(&emu_es, emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x47A));
	emu_movw(&emu_dx, emu_get_memory16(emu_es, emu_bx, 0x478));
	emu_movw(&emu_bx, emu_si);
	emu_movb(&emu_cl, 0x2);
	emu_shlw(&emu_bx, emu_cl);
	emu_movw(&emu_get_memory16(emu_ds, emu_bx, 0x7FC8), emu_ax);
	emu_movw(&emu_get_memory16(emu_ds, emu_bx, 0x7FC6), emu_dx);
	emu_incw(&emu_si);
	emu_cmpw(&emu_si, 0x5);
	if ((emu_flags.sf != emu_flags.of)) { f__B4DA_00DD_0036_600D(); return; }
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x7FC8));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x7FC6));
	emu_push(emu_cs); emu_push(0x0113); emu_cs = 0x260F; f__260F_003A_0014_CA10();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_0113_0019_EE88();
}

/**
 * Decompiled function f__B4DA_0101_0012_9CE5()
 *
 * @name f__B4DA_0101_0012_9CE5
 * @implements B4DA:0101:0012:9CE5 ()
 *
 * Called From: B4DA:00DB:0033:44E2
 */
void f__B4DA_0101_0012_9CE5()
{
	emu_cmpw(&emu_si, 0x5);
	if ((emu_flags.sf != emu_flags.of)) { f__B4DA_00DD_0036_600D(); return; }
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x7FC8));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x7FC6));
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x0113); emu_cs = 0x260F; emu_ip = 0x003A; emu_last_cs = 0xB4DA; emu_last_ip = 0x010E; emu_last_length = 0x0012; emu_last_crc = 0x9CE5; emu_call();
	f__B4DA_0113_0019_EE88();
}

/**
 * Decompiled function f__B4DA_0113_0019_EE88()
 *
 * @name f__B4DA_0113_0019_EE88
 * @implements B4DA:0113:0019:EE88 ()
 *
 * Called From: B4DA:0113:0036:600D
 */
void f__B4DA_0113_0019_EE88()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_movb(&emu_dl, emu_get_memory8(emu_ds, 0x00, 0x8008));
	emu_addb(&emu_dl, emu_al);
	emu_movb(&emu_get_memory8(emu_ds, 0x00, 0x8008), emu_dl);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x7FC8));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x7FC6));
	emu_push(emu_cs); emu_push(0x012C); emu_cs = 0x260F; f__260F_0054_0016_0011();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_012C_003C_6B0B();
}

/**
 * Decompiled function f__B4DA_012C_003C_6B0B()
 *
 * @name f__B4DA_012C_003C_6B0B
 * @implements B4DA:012C:003C:6B0B ()
 *
 * Called From: B4DA:012C:0019:EE88
 */
void f__B4DA_012C_003C_6B0B()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_movb(&emu_dl, emu_get_memory8(emu_ds, 0x00, 0x8009));
	emu_addb(&emu_dl, emu_al);
	emu_movb(&emu_get_memory8(emu_ds, 0x00, 0x8009), emu_dl);
	emu_movw(&emu_bx, emu_di);
	emu_movb(&emu_cl, 0x3);
	emu_shlw(&emu_bx, emu_cl);
	emu_movw(&emu_ax, 0x2C6C);
	emu_movw(&emu_es, emu_ax);
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x2));
	emu_movb(&emu_get_memory8(emu_ds, 0x00, 0x800C), emu_al);
	emu_movb(&emu_get_memory8(emu_ds, 0x00, 0x800A), emu_al);
	emu_movw(&emu_bx, emu_di);
	emu_movb(&emu_cl, 0x3);
	emu_shlw(&emu_bx, emu_cl);
	emu_movw(&emu_ax, 0x2C6C);
	emu_movw(&emu_es, emu_ax);
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x3));
	emu_movb(&emu_get_memory8(emu_ds, 0x00, 0x800D), emu_al);
	emu_movb(&emu_get_memory8(emu_ds, 0x00, 0x800B), emu_al);
	emu_xorw(&emu_si, emu_si);
	f__B4DA_018C_0012_1CDF(); return;
}

/**
 * Decompiled function f__B4DA_0168_0036_0A5D()
 *
 * @name f__B4DA_0168_0036_0A5D
 * @implements B4DA:0168:0036:0A5D ()
 *
 * Called From: B4DA:018F:0012:1CDF
 * Called From: B4DA:018F:0036:0A5D
 */
void f__B4DA_0168_0036_0A5D()
{
	emu_movw(&emu_bx, emu_si);
	emu_movb(&emu_cl, 0x2);
	emu_shlw(&emu_bx, emu_cl);
	emu_movw(&emu_ax, 0x2DCE);
	emu_movw(&emu_es, emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x48E));
	emu_movw(&emu_dx, emu_get_memory16(emu_es, emu_bx, 0x48C));
	emu_movw(&emu_bx, emu_si);
	emu_movb(&emu_cl, 0x2);
	emu_shlw(&emu_bx, emu_cl);
	emu_movw(&emu_get_memory16(emu_ds, emu_bx, 0x7FDC), emu_ax);
	emu_movw(&emu_get_memory16(emu_ds, emu_bx, 0x7FDA), emu_dx);
	emu_incw(&emu_si);
	emu_cmpw(&emu_si, 0x5);
	if ((emu_flags.sf != emu_flags.of)) { f__B4DA_0168_0036_0A5D(); return; }
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x7FDC));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x7FDA));
	emu_push(emu_cs); emu_push(0x019E); emu_cs = 0x260F; f__260F_003A_0014_CA10();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_019E_0019_6692();
}

/**
 * Decompiled function f__B4DA_018C_0012_1CDF()
 *
 * @name f__B4DA_018C_0012_1CDF
 * @implements B4DA:018C:0012:1CDF ()
 *
 * Called From: B4DA:0166:003C:6B0B
 */
void f__B4DA_018C_0012_1CDF()
{
	emu_cmpw(&emu_si, 0x5);
	if ((emu_flags.sf != emu_flags.of)) { f__B4DA_0168_0036_0A5D(); return; }
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x7FDC));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x7FDA));
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x019E); emu_cs = 0x260F; emu_ip = 0x003A; emu_last_cs = 0xB4DA; emu_last_ip = 0x0199; emu_last_length = 0x0012; emu_last_crc = 0x1CDF; emu_call();
	f__B4DA_019E_0019_6692();
}

/**
 * Decompiled function f__B4DA_019E_0019_6692()
 *
 * @name f__B4DA_019E_0019_6692
 * @implements B4DA:019E:0019:6692 ()
 *
 * Called From: B4DA:019E:0036:0A5D
 */
void f__B4DA_019E_0019_6692()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_movb(&emu_dl, emu_get_memory8(emu_ds, 0x00, 0x800C));
	emu_addb(&emu_dl, emu_al);
	emu_movb(&emu_get_memory8(emu_ds, 0x00, 0x800C), emu_dl);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x7FDC));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x7FDA));
	emu_push(emu_cs); emu_push(0x01B7); emu_cs = 0x260F; f__260F_0054_0016_0011();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_01B7_0036_2861();
}

/**
 * Decompiled function f__B4DA_01B7_0036_2861()
 *
 * @name f__B4DA_01B7_0036_2861
 * @implements B4DA:01B7:0036:2861 ()
 *
 * Called From: B4DA:01B7:0019:6692
 */
void f__B4DA_01B7_0036_2861()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_movb(&emu_dl, emu_get_memory8(emu_ds, 0x00, 0x800D));
	emu_addb(&emu_dl, emu_al);
	emu_movb(&emu_get_memory8(emu_ds, 0x00, 0x800D), emu_dl);
	emu_movw(&emu_bx, emu_di);
	emu_movb(&emu_cl, 0x3);
	emu_shlw(&emu_bx, emu_cl);
	emu_movw(&emu_ax, 0x2C6C);
	emu_movw(&emu_es, emu_ax);
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x4));
	emu_movb(&emu_get_memory8(emu_ds, 0x00, 0x800E), emu_al);
	emu_movw(&emu_bx, emu_di);
	emu_movb(&emu_cl, 0x3);
	emu_shlw(&emu_bx, emu_cl);
	emu_movw(&emu_ax, 0x2C6C);
	emu_movw(&emu_es, emu_ax);
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x5));
	emu_movb(&emu_get_memory8(emu_ds, 0x00, 0x800F), emu_al);
	emu_xorw(&emu_si, emu_si);
	f__B4DA_0211_0049_3061(); return;
}

/**
 * Decompiled function f__B4DA_01ED_006D_4409()
 *
 * @name f__B4DA_01ED_006D_4409
 * @implements B4DA:01ED:006D:4409 ()
 *
 * Called From: B4DA:0214:0049:3061
 * Called From: B4DA:0214:006D:4409
 */
void f__B4DA_01ED_006D_4409()
{
	emu_movw(&emu_bx, emu_si);
	emu_movb(&emu_cl, 0x2);
	emu_shlw(&emu_bx, emu_cl);
	emu_movw(&emu_ax, 0x2DCE);
	emu_movw(&emu_es, emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x4A6));
	emu_movw(&emu_dx, emu_get_memory16(emu_es, emu_bx, 0x4A4));
	emu_movw(&emu_bx, emu_si);
	emu_movb(&emu_cl, 0x2);
	emu_shlw(&emu_bx, emu_cl);
	emu_movw(&emu_get_memory16(emu_ds, emu_bx, 0x7FF0), emu_ax);
	emu_movw(&emu_get_memory16(emu_ds, emu_bx, 0x7FEE), emu_dx);
	emu_incw(&emu_si);
	emu_cmpw(&emu_si, 0x4);
	if ((emu_flags.sf != emu_flags.of)) { f__B4DA_01ED_006D_4409(); return; }
	emu_movw(&emu_bx, emu_di);
	emu_movb(&emu_cl, 0x3);
	emu_shlw(&emu_bx, emu_cl);
	emu_movw(&emu_ax, 0x2C6C);
	emu_movw(&emu_es, emu_ax);
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x6));
	emu_movb(&emu_get_memory8(emu_ds, 0x00, 0x8010), emu_al);
	emu_movw(&emu_bx, emu_di);
	emu_movb(&emu_cl, 0x3);
	emu_shlw(&emu_bx, emu_cl);
	emu_movw(&emu_ax, 0x2C6C);
	emu_movw(&emu_es, emu_ax);
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x7));
	emu_movb(&emu_get_memory8(emu_ds, 0x00, 0x8011), emu_al);
	emu_movw(&emu_ax, 0x2DCE);
	emu_movw(&emu_es, emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_es, 0x00, 0x4A2));
	emu_movw(&emu_dx, emu_get_memory16(emu_es, 0x00, 0x4A0));
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x8004), emu_ax);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x8002), emu_dx);
	emu_movw(&emu_ax, 0x8);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x025A); emu_cs = 0x07AE; f__07AE_00E4_000D_9955();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_025A_0023_C3A8();
}

/**
 * Decompiled function f__B4DA_0211_0049_3061()
 *
 * @name f__B4DA_0211_0049_3061
 * @implements B4DA:0211:0049:3061 ()
 *
 * Called From: B4DA:01EB:0036:2861
 */
void f__B4DA_0211_0049_3061()
{
	emu_cmpw(&emu_si, 0x4);
	if ((emu_flags.sf != emu_flags.of)) { f__B4DA_01ED_006D_4409(); return; }
	emu_movw(&emu_bx, emu_di);
	emu_movb(&emu_cl, 0x3);
	emu_shlw(&emu_bx, emu_cl);
	emu_movw(&emu_ax, 0x2C6C);
	emu_movw(&emu_es, emu_ax);
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x6));
	emu_movb(&emu_get_memory8(emu_ds, 0x00, 0x8010), emu_al);
	emu_movw(&emu_bx, emu_di);
	emu_movb(&emu_cl, 0x3);
	emu_shlw(&emu_bx, emu_cl);
	emu_movw(&emu_ax, 0x2C6C);
	emu_movw(&emu_es, emu_ax);
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x7));
	emu_movb(&emu_get_memory8(emu_ds, 0x00, 0x8011), emu_al);
	emu_movw(&emu_ax, 0x2DCE);
	emu_movw(&emu_es, emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_es, 0x00, 0x4A2));
	emu_movw(&emu_dx, emu_get_memory16(emu_es, 0x00, 0x4A0));
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x8004), emu_ax);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x8002), emu_dx);
	emu_movw(&emu_ax, 0x8);
	emu_push(emu_ax);
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x025A); emu_cs = 0x07AE; emu_ip = 0x00E4; emu_last_cs = 0xB4DA; emu_last_ip = 0x0255; emu_last_length = 0x0049; emu_last_crc = 0x3061; emu_call();
	f__B4DA_025A_0023_C3A8();
}

/**
 * Decompiled function f__B4DA_025A_0023_C3A8()
 *
 * @name f__B4DA_025A_0023_C3A8
 * @implements B4DA:025A:0023:C3A8 ()
 *
 * Called From: B4DA:025A:006D:4409
 */
void f__B4DA_025A_0023_C3A8()
{
	emu_pop(&emu_cx);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_flags.zf) { f__B4DA_02C5_0009_FD6C(); return; }
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6CE9));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6CE7));
	emu_movw(&emu_ax, 0x5);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x027D); emu_cs = 0x252E; f__252E_0001_0018_08B3();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_027D_000E_1049();
}

/**
 * Decompiled function f__B4DA_027D_000E_1049()
 *
 * @name f__B4DA_027D_000E_1049
 * @implements B4DA:027D:000E:1049 ()
 *
 * Called From: B4DA:027D:0023:C3A8
 */
void f__B4DA_027D_000E_1049()
{
	emu_pop(&emu_cx);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x028B); emu_cs = 0x352A; ovl__352A(0);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_028B_002A_115B();
}

/**
 * Decompiled function f__B4DA_028B_002A_115B()
 *
 * @name f__B4DA_028B_002A_115B
 * @implements B4DA:028B:002A:115B ()
 *
 * Called From: B4DA:028B:000E:1049
 */
void f__B4DA_028B_002A_115B()
{
	emu_addw(&emu_sp, 0x12);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_dx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x2);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x992B));
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x992D));
	emu_movb(&emu_cl, 0x3);
	emu_shlw(&emu_ax, emu_cl);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_cs); emu_push(0x02B5); emu_cs = 0x352A; ovl__352A(2);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_02B5_000E_06BC();
}

/**
 * Decompiled function f__B4DA_02B5_000E_06BC()
 *
 * @name f__B4DA_02B5_000E_06BC
 * @implements B4DA:02B5:000E:06BC ()
 *
 * Called From: B4DA:02B5:002A:115B
 */
void f__B4DA_02B5_000E_06BC()
{
	emu_addw(&emu_sp, 0xE);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_cs); emu_push(0x02C3); emu_cs = 0x352A; ovl__352A(1);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_02C3_000B_CB27();
}

/**
 * Decompiled function f__B4DA_02C3_000B_CB27()
 *
 * @name f__B4DA_02C3_000B_CB27
 * @implements B4DA:02C3:000B:CB27 ()
 *
 * Called From: B4DA:02C3:000E:06BC
 */
void f__B4DA_02C3_000B_CB27()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6C91));
	emu_push(emu_cs);
	emu_push(0x02CE); f__B4DA_0A8E_0025_4AC8();
	f__B4DA_02CE_0009_91B5();
}

/**
 * Decompiled function f__B4DA_02C5_0009_FD6C()
 *
 * @name f__B4DA_02C5_0009_FD6C
 * @implements B4DA:02C5:0009:FD6C ()
 *
 * Called From: B4DA:0261:0023:C3A8
 */
void f__B4DA_02C5_0009_FD6C()
{
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6C91));
	emu_push(emu_cs);
	emu_push(0x02CE); f__B4DA_0A8E_0025_4AC8();
	f__B4DA_02CE_0009_91B5();
}

/**
 * Decompiled function f__B4DA_02CE_0009_91B5()
 *
 * @name f__B4DA_02CE_0009_91B5
 * @implements B4DA:02CE:0009:91B5 ()
 *
 * Called From: B4DA:02CE:000B:CB27
 * Called From: B4DA:02CE:0009:FD6C
 */
void f__B4DA_02CE_0009_91B5()
{
	emu_pop(&emu_cx);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_cs); emu_push(0x02D7); emu_cs = 0x2598; f__2598_0000_0017_EB80();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_02D7_0003_CB1A();
}

/**
 * Decompiled function f__B4DA_02D7_0003_CB1A()
 *
 * @name f__B4DA_02D7_0003_CB1A
 * @implements B4DA:02D7:0003:CB1A ()
 *
 * Called From: B4DA:02D7:0009:91B5
 */
void f__B4DA_02D7_0003_CB1A()
{
	emu_pop(&emu_cx);
	f__B4DA_02DA_0006_F7CE(); return;
}

/**
 * Decompiled function f__B4DA_02DA_0006_F7CE()
 *
 * @name f__B4DA_02DA_0006_F7CE
 * @implements B4DA:02DA:0006:F7CE ()
 *
 * Called From: B4DA:02D8:0003:CB1A
 */
void f__B4DA_02DA_0006_F7CE()
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
 * Decompiled function f__B4DA_02E0_0023_E297()
 *
 * @name f__B4DA_02E0_0023_E297
 * @implements B4DA:02E0:0023:E297 ()
 *
 * Called From: 34DA:0025:0005:0000
 * Called From: B4DA:16B5:0004:8B0A
 */
void f__B4DA_02E0_0023_E297()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x3A38), 0x5);
	if (!emu_flags.zf) { f__B4DA_0306_0002_2597(); return; }
	emu_xorw(&emu_ax, emu_ax);
	emu_movw(&emu_dx, 0x300);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C34));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C32));
	emu_push(emu_ds);
	emu_movw(&emu_ax, 0x259C);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0303); emu_cs = 0x253D; f__253D_0000_0013_38F4();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_0303_0005_6003();
}

/**
 * Decompiled function f__B4DA_0303_0005_6003()
 *
 * @name f__B4DA_0303_0005_6003
 * @implements B4DA:0303:0005:6003 ()
 *
 * Called From: B4DA:0303:0023:E297
 */
void f__B4DA_0303_0005_6003()
{
	emu_addw(&emu_sp, 0xC);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B4DA_0306_0002_2597()
 *
 * @name f__B4DA_0306_0002_2597
 * @implements B4DA:0306:0002:2597 ()
 *
 * Called From: B4DA:02E8:0023:E297
 */
void f__B4DA_0306_0002_2597()
{
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B4DA_0308_0018_F99F()
 *
 * @name f__B4DA_0308_0018_F99F
 * @implements B4DA:0308:0018:F99F ()
 *
 * Called From: 34DA:002A:0005:0000
 * Called From: B4DA:0EFF:0007:D9BE
 * Called From: B4DA:1663:0005:09A8
 * Called From: B4DA:16ED:0008:37B4
 * Called From: B4DA:16ED:0005:89B6
 */
void f__B4DA_0308_0018_F99F()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subw(&emu_sp, 0x6);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x801C));
	emu_movw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x801A));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x76AE));
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__B4DA_0320_000B_A327(); return; }
	f__B4DA_049C_0009_94F3(); return;
}

/**
 * Decompiled function f__B4DA_0320_000B_A327()
 *
 * @name f__B4DA_0320_000B_A327
 * @implements B4DA:0320:000B:A327 ()
 *
 * Called From: B4DA:031B:0018:F99F
 */
void f__B4DA_0320_000B_A327()
{
	if ((emu_flags.sf != emu_flags.of)) { f__B4DA_032B_000A_4E8C(); return; }
	emu_cmpw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x76AC));
	if (emu_flags.cf) { f__B4DA_032B_000A_4E8C(); return; }
	f__B4DA_049C_0009_94F3(); return;
}

/**
 * Decompiled function f__B4DA_032B_000A_4E8C()
 *
 * @name f__B4DA_032B_000A_4E8C
 * @implements B4DA:032B:000A:4E8C ()
 *
 * Called From: B4DA:0320:000B:A327
 * Called From: B4DA:0326:000B:A327
 */
void f__B4DA_032B_000A_4E8C()
{
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x2580), 0x0);
	if (emu_flags.zf) { f__B4DA_0335_000C_C28A(); return; }
	f__B4DA_049C_0009_94F3(); return;
}

/**
 * Decompiled function f__B4DA_0335_000C_C28A()
 *
 * @name f__B4DA_0335_000C_C28A
 * @implements B4DA:0335:000C:C28A ()
 *
 * Called From: B4DA:0330:000A:4E8C
 */
void f__B4DA_0335_000C_C28A()
{
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x801A));
	emu_orw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x801C));
	if (!emu_flags.zf) { f__B4DA_0341_000E_8FC1(); return; }
	f__B4DA_03F9_000A_3CE1(); return;
}

/**
 * Decompiled function f__B4DA_0341_000E_8FC1()
 *
 * @name f__B4DA_0341_000E_8FC1
 * @implements B4DA:0341:000E:8FC1 ()
 *
 * Called From: B4DA:033C:000C:C28A
 */
void f__B4DA_0341_000E_8FC1()
{
	emu_movw(&emu_di, emu_get_memory16(emu_ds, 0x00, 0x8024));
	emu_orw(&emu_di, emu_di);
	if (!(emu_flags.sf != emu_flags.of)) { f__B4DA_034F_0015_93C9(); return; }
	emu_movw(&emu_ax, emu_di);
	emu_negw(&emu_ax, emu_ax);
	f__B4DA_0351_0013_E79D(); return;
}

/**
 * Decompiled function f__B4DA_034F_0015_93C9()
 *
 * @name f__B4DA_034F_0015_93C9
 * @implements B4DA:034F:0015:93C9 ()
 *
 * Called From: B4DA:0347:000E:8FC1
 */
void f__B4DA_034F_0015_93C9()
{
	emu_movw(&emu_ax, emu_di);
	emu_movb(&emu_cl, 0x2);
	emu_shlw(&emu_ax, emu_cl);
	emu_movw(&emu_bx, emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, emu_bx, 0x7FF2));
	emu_orw(&emu_ax, emu_get_memory16(emu_ds, emu_bx, 0x7FF4));
	if (emu_flags.zf) { f__B4DA_0364_0015_35C1(); return; }
	emu_incw(&emu_di);
	f__B4DA_036B_000E_8FC9(); return;
}

/**
 * Decompiled function f__B4DA_0351_0013_E79D()
 *
 * @name f__B4DA_0351_0013_E79D
 * @implements B4DA:0351:0013:E79D ()
 *
 * Called From: B4DA:034D:000E:8FC1
 */
void f__B4DA_0351_0013_E79D()
{
	emu_movb(&emu_cl, 0x2);
	emu_shlw(&emu_ax, emu_cl);
	emu_movw(&emu_bx, emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, emu_bx, 0x7FF2));
	emu_orw(&emu_ax, emu_get_memory16(emu_ds, emu_bx, 0x7FF4));
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0364; emu_last_cs = 0xB4DA; emu_last_ip = 0x035F; emu_last_length = 0x0013; emu_last_crc = 0xE79D; emu_call(); return; }
	emu_incw(&emu_di);
	f__B4DA_036B_000E_8FC9(); return;
}

/**
 * Decompiled function f__B4DA_0364_0015_35C1()
 *
 * @name f__B4DA_0364_0015_35C1
 * @implements B4DA:0364:0015:35C1 ()
 *
 * Called From: B4DA:035F:0015:93C9
 */
void f__B4DA_0364_0015_35C1()
{
	emu_movw(&emu_ax, emu_di);
	emu_negw(&emu_ax, emu_ax);
	emu_incw(&emu_ax);
	emu_movw(&emu_di, emu_ax);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x8024), emu_di);
	emu_orw(&emu_di, emu_di);
	if (!(emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x0379; emu_last_cs = 0xB4DA; emu_last_ip = 0x0371; emu_last_length = 0x0015; emu_last_crc = 0x35C1; emu_call(); return; }
	emu_movw(&emu_ax, emu_di);
	emu_negw(&emu_ax, emu_ax);
	f__B4DA_037B_0025_65D7(); return;
}

/**
 * Decompiled function f__B4DA_036B_000E_8FC9()
 *
 * @name f__B4DA_036B_000E_8FC9
 * @implements B4DA:036B:000E:8FC9 ()
 *
 * Called From: B4DA:0362:0013:E79D
 * Called From: B4DA:0362:0015:93C9
 */
void f__B4DA_036B_000E_8FC9()
{
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x8024), emu_di);
	emu_orw(&emu_di, emu_di);
	if (!(emu_flags.sf != emu_flags.of)) { f__B4DA_0379_0027_78C2(); return; }
	emu_movw(&emu_ax, emu_di);
	emu_negw(&emu_ax, emu_ax);
	f__B4DA_037B_0025_65D7(); return;
}

/**
 * Decompiled function f__B4DA_0379_0027_78C2()
 *
 * @name f__B4DA_0379_0027_78C2
 * @implements B4DA:0379:0027:78C2 ()
 *
 * Called From: B4DA:0371:000E:8FC9
 */
void f__B4DA_0379_0027_78C2()
{
	emu_movw(&emu_ax, emu_di);
	emu_movb(&emu_cl, 0x2);
	emu_shlw(&emu_ax, emu_cl);
	emu_movw(&emu_bx, emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, emu_bx, 0x7FF0));
	emu_movw(&emu_dx, emu_get_memory16(emu_ds, emu_bx, 0x7FEE));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_dx);
	emu_movb(&emu_al, emu_get_memory8(emu_ds, 0x00, 0x800F));
	emu_movb(&emu_ah, 0x0);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x03A0); emu_cs = 0x260F; f__260F_0054_0016_0011();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_03A0_0017_1E77();
}

/**
 * Decompiled function f__B4DA_037B_0025_65D7()
 *
 * @name f__B4DA_037B_0025_65D7
 * @implements B4DA:037B:0025:65D7 ()
 *
 * Called From: B4DA:0377:0015:35C1
 * Called From: B4DA:0377:000E:8FC9
 */
void f__B4DA_037B_0025_65D7()
{
	emu_movb(&emu_cl, 0x2);
	emu_shlw(&emu_ax, emu_cl);
	emu_movw(&emu_bx, emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, emu_bx, 0x7FF0));
	emu_movw(&emu_dx, emu_get_memory16(emu_ds, emu_bx, 0x7FEE));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_dx);
	emu_movb(&emu_al, emu_get_memory8(emu_ds, 0x00, 0x800F));
	emu_movb(&emu_ah, 0x0);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x03A0); emu_cs = 0x260F; f__260F_0054_0016_0011();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_03A0_0017_1E77();
}

/**
 * Decompiled function f__B4DA_03A0_0017_1E77()
 *
 * @name f__B4DA_03A0_0017_1E77
 * @implements B4DA:03A0:0017:1E77 ()
 *
 * Called From: B4DA:03A0:0025:65D7
 * Called From: B4DA:03A0:0027:78C2
 */
void f__B4DA_03A0_0017_1E77()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_pop(&emu_dx);
	emu_addw(&emu_dx, emu_ax);
	emu_push(emu_dx);
	emu_movb(&emu_al, emu_get_memory8(emu_ds, 0x00, 0x800E));
	emu_movb(&emu_ah, 0x0);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x03B7); emu_cs = 0x260F; f__260F_003A_0014_CA10();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_03B7_0017_0D1E();
}

/**
 * Decompiled function f__B4DA_03B7_0017_0D1E()
 *
 * @name f__B4DA_03B7_0017_0D1E
 * @implements B4DA:03B7:0017:0D1E ()
 *
 * Called From: B4DA:03B7:0017:1E77
 */
void f__B4DA_03B7_0017_0D1E()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_pop(&emu_dx);
	emu_addw(&emu_dx, emu_ax);
	emu_push(emu_dx);
	emu_movb(&emu_al, emu_get_memory8(emu_ds, 0x00, 0x800F));
	emu_movb(&emu_ah, 0x0);
	emu_push(emu_ax);
	emu_movb(&emu_al, emu_get_memory8(emu_ds, 0x00, 0x800E));
	emu_movb(&emu_ah, 0x0);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x03CE); emu_cs = 0x2B6C; f__2B6C_0197_00CE_4D32();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_03CE_0023_B227();
}

/**
 * Decompiled function f__B4DA_03CE_0023_B227()
 *
 * @name f__B4DA_03CE_0023_B227
 * @implements B4DA:03CE:0023:B227 ()
 *
 * Called From: B4DA:03CE:0017:0D1E
 */
void f__B4DA_03CE_0023_B227()
{
	emu_addw(&emu_sp, 0x8);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_movb(&emu_al, emu_get_memory8(emu_ds, 0x00, 0x800F));
	emu_movb(&emu_ah, 0x0);
	emu_push(emu_ax);
	emu_movb(&emu_al, emu_get_memory8(emu_ds, 0x00, 0x800E));
	emu_movb(&emu_ah, 0x0);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x03F1); emu_cs = 0x2903; f__2903_0158_001A_2931();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_03F1_0008_8B8A();
}

/**
 * Decompiled function f__B4DA_03F1_0008_8B8A()
 *
 * @name f__B4DA_03F1_0008_8B8A
 * @implements B4DA:03F1:0008:8B8A ()
 *
 * Called From: B4DA:03F1:0023:B227
 */
void f__B4DA_03F1_0008_8B8A()
{
	emu_addw(&emu_sp, 0xE);
	emu_push(emu_cs); emu_push(0x03F9); emu_cs = 0x2B6C; f__2B6C_0292_0028_3AD7();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_03F9_000A_3CE1();
}

/**
 * Decompiled function f__B4DA_03F9_000A_3CE1()
 *
 * @name f__B4DA_03F9_000A_3CE1
 * @implements B4DA:03F9:000A:3CE1 ()
 *
 * Called From: B4DA:033E:000C:C28A
 * Called From: B4DA:03F9:0008:8B8A
 */
void f__B4DA_03F9_000A_3CE1()
{
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x3A38));
	emu_orw(&emu_ax, emu_ax);
	if (!emu_flags.zf) { f__B4DA_0403_000D_B6B1(); return; }
	f__B4DA_0483_0017_4F59(); return;
}

/**
 * Decompiled function f__B4DA_0403_000D_B6B1()
 *
 * @name f__B4DA_0403_000D_B6B1
 * @implements B4DA:0403:000D:B6B1 ()
 *
 * Called From: B4DA:03FE:000A:3CE1
 */
void f__B4DA_0403_000D_B6B1()
{
	emu_cmpw(&emu_ax, 0x1);
	if (emu_flags.zf) { f__B4DA_0410_000D_8335(); return; }
	emu_cmpw(&emu_ax, 0x2);
	if (emu_flags.zf) { f__B4DA_043B_001D_00AB(); return; }
	f__B4DA_049A_0002_C03A(); return;
}

/**
 * Decompiled function f__B4DA_0410_000D_8335()
 *
 * @name f__B4DA_0410_000D_8335
 * @implements B4DA:0410:000D:8335 ()
 *
 * Called From: B4DA:0406:000D:B6B1
 */
void f__B4DA_0410_000D_8335()
{
	emu_movw(&emu_ax, 0x3);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x1);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x041D); emu_cs = 0x2537; f__2537_000C_001C_86CB();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_041D_001E_988C();
}

/**
 * Decompiled function f__B4DA_041D_001E_988C()
 *
 * @name f__B4DA_041D_001E_988C
 * @implements B4DA:041D:001E:988C ()
 *
 * Called From: B4DA:041D:000D:8335
 */
void f__B4DA_041D_001E_988C()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_movw(&emu_dx, 0x3C);
	emu_imuluw(&emu_ax, emu_dx);
	emu_movw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x76AE));
	emu_movw(&emu_bx, emu_get_memory16(emu_ds, 0x00, 0x76AC));
	emu_addw(&emu_bx, emu_ax);
	emu_adcw(&emu_dx, 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x801C), emu_dx);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x801A), emu_bx);
	f__B4DA_049C_0009_94F3(); return;
}

/**
 * Decompiled function f__B4DA_043B_001D_00AB()
 *
 * @name f__B4DA_043B_001D_00AB
 * @implements B4DA:043B:001D:00AB ()
 *
 * Called From: B4DA:040B:000D:B6B1
 */
void f__B4DA_043B_001D_00AB()
{
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x8024), 0x0);
	if (emu_flags.zf) { f__B4DA_0458_000D_8995(); return; }
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x76AE));
	emu_movw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x76AC));
	emu_addw(&emu_dx, 0x6);
	emu_adcw(&emu_ax, 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x801C), emu_ax);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x801A), emu_dx);
	f__B4DA_0481_0002_CCBA(); return;
}

/**
 * Decompiled function f__B4DA_0458_000D_8995()
 *
 * @name f__B4DA_0458_000D_8995
 * @implements B4DA:0458:000D:8995 ()
 *
 * Called From: B4DA:0440:001D:00AB
 */
void f__B4DA_0458_000D_8995()
{
	emu_movw(&emu_ax, 0x19);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0xA);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0465); emu_cs = 0x2537; f__2537_000C_001C_86CB();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_0465_001E_A48C();
}

/**
 * Decompiled function f__B4DA_0465_001E_A48C()
 *
 * @name f__B4DA_0465_001E_A48C
 * @implements B4DA:0465:001E:A48C ()
 *
 * Called From: B4DA:0465:000D:8995
 */
void f__B4DA_0465_001E_A48C()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_movw(&emu_dx, 0x3C);
	emu_imuluw(&emu_ax, emu_dx);
	emu_movw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x76AE));
	emu_movw(&emu_bx, emu_get_memory16(emu_ds, 0x00, 0x76AC));
	emu_addw(&emu_bx, emu_ax);
	emu_adcw(&emu_dx, 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x801C), emu_dx);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x801A), emu_bx);
	f__B4DA_049C_0009_94F3(); return;
}

/**
 * Decompiled function f__B4DA_0481_0002_CCBA()
 *
 * @name f__B4DA_0481_0002_CCBA
 * @implements B4DA:0481:0002:CCBA ()
 *
 * Called From: B4DA:0456:001D:00AB
 */
void f__B4DA_0481_0002_CCBA()
{
	f__B4DA_049C_0009_94F3(); return;
}

/**
 * Decompiled function f__B4DA_0483_0017_4F59()
 *
 * @name f__B4DA_0483_0017_4F59
 * @implements B4DA:0483:0017:4F59 ()
 *
 * Called From: B4DA:0400:000A:3CE1
 */
void f__B4DA_0483_0017_4F59()
{
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x76AE));
	emu_movw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x76AC));
	emu_addw(&emu_dx, 0x4650);
	emu_adcw(&emu_ax, 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x801C), emu_ax);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x801A), emu_dx);
	f__B4DA_049C_0009_94F3(); return;
}

/**
 * Decompiled function f__B4DA_049A_0002_C03A()
 *
 * @name f__B4DA_049A_0002_C03A
 * @implements B4DA:049A:0002:C03A ()
 *
 * Called From: B4DA:040D:000D:B6B1
 */
void f__B4DA_049A_0002_C03A()
{
	f__B4DA_049C_0009_94F3(); return;
}

/**
 * Decompiled function f__B4DA_049C_0009_94F3()
 *
 * @name f__B4DA_049C_0009_94F3
 * @implements B4DA:049C:0009:94F3 ()
 *
 * Called From: B4DA:031D:0018:F99F
 * Called From: B4DA:0328:000B:A327
 * Called From: B4DA:0332:000A:4E8C
 * Called From: B4DA:0439:001E:988C
 * Called From: B4DA:0481:0002:CCBA
 * Called From: B4DA:0481:001E:A48C
 * Called From: B4DA:0498:0017:4F59
 * Called From: B4DA:049A:0002:C03A
 */
void f__B4DA_049C_0009_94F3()
{
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp,  0x6), 0x1);
	if (emu_flags.zf) { f__B4DA_04A5_0010_7A6E(); return; }
	f__B4DA_059E_000E_7C82(); return;
}

/**
 * Decompiled function f__B4DA_04A5_0010_7A6E()
 *
 * @name f__B4DA_04A5_0010_7A6E
 * @implements B4DA:04A5:0010:7A6E ()
 *
 * Called From: B4DA:04A0:0009:94F3
 */
void f__B4DA_04A5_0010_7A6E()
{
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x8018));
	emu_movw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x8016));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x76AE));
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__B4DA_04B5_000B_238D(); return; }
	f__B4DA_059B_0003_DDA7(); return;
}

/**
 * Decompiled function f__B4DA_04B5_000B_238D()
 *
 * @name f__B4DA_04B5_000B_238D
 * @implements B4DA:04B5:000B:238D ()
 *
 * Called From: B4DA:04B0:0010:7A6E
 */
void f__B4DA_04B5_000B_238D()
{
	if ((emu_flags.sf != emu_flags.of)) { f__B4DA_04C0_000C_EF74(); return; }
	emu_cmpw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x76AC));
	if (emu_flags.cf) { f__B4DA_04C0_000C_EF74(); return; }
	f__B4DA_059B_0003_DDA7(); return;
}

/**
 * Decompiled function f__B4DA_04C0_000C_EF74()
 *
 * @name f__B4DA_04C0_000C_EF74
 * @implements B4DA:04C0:000C:EF74 ()
 *
 * Called From: B4DA:04B5:000B:238D
 * Called From: B4DA:04BB:000B:238D
 */
void f__B4DA_04C0_000C_EF74()
{
	emu_movw(&emu_ax, 0x4);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x04CC); emu_cs = 0x2537; f__2537_000C_001C_86CB();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_04CC_002C_7547();
}

/**
 * Decompiled function f__B4DA_04CC_002C_7547()
 *
 * @name f__B4DA_04CC_002C_7547
 * @implements B4DA:04CC:002C:7547 ()
 *
 * Called From: B4DA:04CC:000C:EF74
 */
void f__B4DA_04CC_002C_7547()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x8022), emu_ax);
	emu_movw(&emu_bx, emu_get_memory16(emu_ds, 0x00, 0x8022));
	emu_movb(&emu_cl, 0x2);
	emu_shlw(&emu_bx, emu_cl);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, emu_bx, 0x7FDC));
	emu_movw(&emu_dx, emu_get_memory16(emu_ds, emu_bx, 0x7FDA));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_dx);
	emu_movb(&emu_al, emu_get_memory8(emu_ds, 0x00, 0x800B));
	emu_movb(&emu_ah, 0x0);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x04F8); emu_cs = 0x260F; f__260F_0054_0016_0011();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_04F8_0017_1E73();
}

/**
 * Decompiled function f__B4DA_04F8_0017_1E73()
 *
 * @name f__B4DA_04F8_0017_1E73
 * @implements B4DA:04F8:0017:1E73 ()
 *
 * Called From: B4DA:04F8:002C:7547
 */
void f__B4DA_04F8_0017_1E73()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_pop(&emu_dx);
	emu_addw(&emu_dx, emu_ax);
	emu_push(emu_dx);
	emu_movb(&emu_al, emu_get_memory8(emu_ds, 0x00, 0x800A));
	emu_movb(&emu_ah, 0x0);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x050F); emu_cs = 0x260F; f__260F_003A_0014_CA10();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_050F_0017_0C1A();
}

/**
 * Decompiled function f__B4DA_050F_0017_0C1A()
 *
 * @name f__B4DA_050F_0017_0C1A
 * @implements B4DA:050F:0017:0C1A ()
 *
 * Called From: B4DA:050F:0017:1E73
 */
void f__B4DA_050F_0017_0C1A()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_pop(&emu_dx);
	emu_addw(&emu_dx, emu_ax);
	emu_push(emu_dx);
	emu_movb(&emu_al, emu_get_memory8(emu_ds, 0x00, 0x800B));
	emu_movb(&emu_ah, 0x0);
	emu_push(emu_ax);
	emu_movb(&emu_al, emu_get_memory8(emu_ds, 0x00, 0x800A));
	emu_movb(&emu_ah, 0x0);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0526); emu_cs = 0x2B6C; f__2B6C_0197_00CE_4D32();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_0526_0023_B2A5();
}

/**
 * Decompiled function f__B4DA_0526_0023_B2A5()
 *
 * @name f__B4DA_0526_0023_B2A5
 * @implements B4DA:0526:0023:B2A5 ()
 *
 * Called From: B4DA:0526:0017:0C1A
 */
void f__B4DA_0526_0023_B2A5()
{
	emu_addw(&emu_sp, 0x8);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_movb(&emu_al, emu_get_memory8(emu_ds, 0x00, 0x800B));
	emu_movb(&emu_ah, 0x0);
	emu_push(emu_ax);
	emu_movb(&emu_al, emu_get_memory8(emu_ds, 0x00, 0x800A));
	emu_movb(&emu_ah, 0x0);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0549); emu_cs = 0x2903; f__2903_0158_001A_2931();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_0549_0008_8B8A();
}

/**
 * Decompiled function f__B4DA_0549_0008_8B8A()
 *
 * @name f__B4DA_0549_0008_8B8A
 * @implements B4DA:0549:0008:8B8A ()
 *
 * Called From: B4DA:0549:0023:B2A5
 */
void f__B4DA_0549_0008_8B8A()
{
	emu_addw(&emu_sp, 0xE);
	emu_push(emu_cs); emu_push(0x0551); emu_cs = 0x2B6C; f__2B6C_0292_0028_3AD7();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_0551_0010_870C();
}

/**
 * Decompiled function f__B4DA_0551_0010_870C()
 *
 * @name f__B4DA_0551_0010_870C
 * @implements B4DA:0551:0010:870C ()
 *
 * Called From: B4DA:0551:0008:8B8A
 */
void f__B4DA_0551_0010_870C()
{
	emu_movw(&emu_bx, emu_get_memory16(emu_ds, 0x00, 0x8022));
	emu_cmpw(&emu_bx, 0x4);
	if (!(emu_flags.cf || emu_flags.zf)) { /* Unresolved jump */ emu_ip = 0x0599; emu_last_cs = 0xB4DA; emu_last_ip = 0x0558; emu_last_length = 0x0010; emu_last_crc = 0x870C; emu_call(); return; }
	emu_shlw(&emu_bx, 0x1);

	/* Jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_cs, emu_bx, 0xA84);
	switch (emu_ip) {
		case 0x0561: f__B4DA_0561_000D_84E5(); return;
		case 0x0587: f__B4DA_0587_0009_83A7(); return;
		case 0x0590: f__B4DA_0590_0009_B427(); return;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0xB4DA; emu_last_ip = 0x055C; emu_last_length = 0x0010; emu_last_crc = 0x870C;
			emu_call();
			return;
	}
}

/**
 * Decompiled function f__B4DA_0561_000D_84E5()
 *
 * @name f__B4DA_0561_000D_84E5
 * @implements B4DA:0561:000D:84E5 ()
 *
 * Called From: B4DA:055C:0010:870C
 */
void f__B4DA_0561_000D_84E5()
{
	emu_movw(&emu_ax, 0x1E);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x7);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x056E); emu_cs = 0x2537; f__2537_000C_001C_86CB();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_056E_0019_979A();
}

/**
 * Decompiled function f__B4DA_0568_0006_565C()
 *
 * @name f__B4DA_0568_0006_565C
 * @implements B4DA:0568:0006:565C ()
 *
 * Called From: B4DA:058E:0009:83A7
 * Called From: B4DA:0597:0009:B427
 */
void f__B4DA_0568_0006_565C()
{
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x056E); emu_cs = 0x2537; f__2537_000C_001C_86CB();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_056E_0019_979A();
}

/**
 * Decompiled function f__B4DA_056E_0019_979A()
 *
 * @name f__B4DA_056E_0019_979A
 * @implements B4DA:056E:0019:979A ()
 *
 * Called From: B4DA:056E:0006:565C
 * Called From: B4DA:056E:000D:84E5
 */
void f__B4DA_056E_0019_979A()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_movw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x76AE));
	emu_movw(&emu_bx, emu_get_memory16(emu_ds, 0x00, 0x76AC));
	emu_addw(&emu_bx, emu_ax);
	emu_adcw(&emu_dx, 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x8018), emu_dx);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x8016), emu_bx);
	f__B4DA_059B_0003_DDA7(); return;
}

/**
 * Decompiled function f__B4DA_0587_0009_83A7()
 *
 * @name f__B4DA_0587_0009_83A7
 * @implements B4DA:0587:0009:83A7 ()
 *
 * Called From: B4DA:055C:0010:870C
 */
void f__B4DA_0587_0009_83A7()
{
	emu_movw(&emu_ax, 0xA);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x6);
	f__B4DA_0568_0006_565C(); return;
}

/**
 * Decompiled function f__B4DA_0590_0009_B427()
 *
 * @name f__B4DA_0590_0009_B427
 * @implements B4DA:0590:0009:B427 ()
 *
 * Called From: B4DA:055C:0010:870C
 */
void f__B4DA_0590_0009_B427()
{
	emu_movw(&emu_ax, 0x6);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x5);
	f__B4DA_0568_0006_565C(); return;
}

/**
 * Decompiled function f__B4DA_059B_0003_DDA7()
 *
 * @name f__B4DA_059B_0003_DDA7
 * @implements B4DA:059B:0003:DDA7 ()
 *
 * Called From: B4DA:04B2:0010:7A6E
 * Called From: B4DA:04BD:000B:238D
 * Called From: B4DA:0585:0019:979A
 */
void f__B4DA_059B_0003_DDA7()
{
	f__B4DA_06BD_000E_7C82(); return;
}

/**
 * Decompiled function f__B4DA_059E_000E_7C82()
 *
 * @name f__B4DA_059E_000E_7C82
 * @implements B4DA:059E:000E:7C82 ()
 *
 * Called From: B4DA:04A2:0009:94F3
 */
void f__B4DA_059E_000E_7C82()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x0);
	emu_movw(&emu_ax, 0x41);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x05AC); emu_cs = 0x29E8; f__29E8_08B5_000A_FC14();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_05AC_000E_B5D6();
}

/**
 * Decompiled function f__B4DA_05AC_000E_B5D6()
 *
 * @name f__B4DA_05AC_000E_B5D6
 * @implements B4DA:05AC:000E:B5D6 ()
 *
 * Called From: B4DA:05AC:000E:7C82
 */
void f__B4DA_05AC_000E_B5D6()
{
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_ax);
	if (!emu_flags.zf) { f__B4DA_05BF_001D_D9A0(); return; }
	emu_movw(&emu_ax, 0x42);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x05BA); emu_cs = 0x29E8; f__29E8_08B5_000A_FC14();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_05BA_0022_75AA();
}

/**
 * Decompiled function f__B4DA_05BA_0022_75AA()
 *
 * @name f__B4DA_05BA_0022_75AA
 * @implements B4DA:05BA:0022:75AA ()
 *
 * Called From: B4DA:05BA:000E:B5D6
 */
void f__B4DA_05BA_0022_75AA()
{
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_ax);
	if (emu_flags.zf) { f__B4DA_0616_0027_AA61(); return; }
	emu_movb(&emu_al, emu_get_memory8(emu_ds, 0x00, 0x800D));
	emu_movb(&emu_ah, 0x0);
	emu_push(emu_ax);
	emu_movb(&emu_al, emu_get_memory8(emu_ds, 0x00, 0x800C));
	emu_movb(&emu_ah, 0x0);
	emu_push(emu_ax);
	emu_movb(&emu_al, emu_get_memory8(emu_ds, 0x00, 0x800B));
	emu_movb(&emu_ah, 0x0);
	emu_push(emu_ax);
	emu_movb(&emu_al, emu_get_memory8(emu_ds, 0x00, 0x800A));
	emu_movb(&emu_ah, 0x0);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x05DC); emu_cs = 0x29A3; emu_Input_Mouse_InsideRegion();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_05DC_002E_839C();
}

/**
 * Decompiled function f__B4DA_05BF_001D_D9A0()
 *
 * @name f__B4DA_05BF_001D_D9A0
 * @implements B4DA:05BF:001D:D9A0 ()
 *
 * Called From: B4DA:05AF:000E:B5D6
 */
void f__B4DA_05BF_001D_D9A0()
{
	emu_movb(&emu_al, emu_get_memory8(emu_ds, 0x00, 0x800D));
	emu_movb(&emu_ah, 0x0);
	emu_push(emu_ax);
	emu_movb(&emu_al, emu_get_memory8(emu_ds, 0x00, 0x800C));
	emu_movb(&emu_ah, 0x0);
	emu_push(emu_ax);
	emu_movb(&emu_al, emu_get_memory8(emu_ds, 0x00, 0x800B));
	emu_movb(&emu_ah, 0x0);
	emu_push(emu_ax);
	emu_movb(&emu_al, emu_get_memory8(emu_ds, 0x00, 0x800A));
	emu_movb(&emu_ah, 0x0);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x05DC); emu_cs = 0x29A3; emu_Input_Mouse_InsideRegion();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_05DC_002E_839C();
}

/**
 * Decompiled function f__B4DA_05DC_002E_839C()
 *
 * @name f__B4DA_05DC_002E_839C
 * @implements B4DA:05DC:002E:839C ()
 *
 * Called From: B4DA:05DC:001D:D9A0
 * Called From: B4DA:05DC:0022:75AA
 */
void f__B4DA_05DC_002E_839C()
{
	emu_addw(&emu_sp, 0x8);
	emu_orw(&emu_ax, emu_ax);
	if (emu_flags.zf) { f__B4DA_0616_0027_AA61(); return; }
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x8018), 0xFFFF);
	if (!emu_flags.zf) { f__B4DA_05F1_0019_9C7F(); return; }
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x8016), 0xFFFF);
	if (emu_flags.zf) { f__B4DA_0614_0002_CF3A(); return; }
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x8018), 0xFFFF);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x8016), 0xFFFF);
	emu_movw(&emu_ax, 0x4);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x1);
	emu_push(emu_ax);
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x060A); emu_cs = 0x2537; emu_ip = 0x000C; emu_last_cs = 0xB4DA; emu_last_ip = 0x0605; emu_last_length = 0x002E; emu_last_crc = 0x839C; emu_call();
	f__B4DA_060A_000C_4C2F();
}

/**
 * Decompiled function f__B4DA_05F1_0019_9C7F()
 *
 * @name f__B4DA_05F1_0019_9C7F
 * @implements B4DA:05F1:0019:9C7F ()
 *
 * Called From: B4DA:05E8:002E:839C
 */
void f__B4DA_05F1_0019_9C7F()
{
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x8018), 0xFFFF);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x8016), 0xFFFF);
	emu_movw(&emu_ax, 0x4);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x1);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x060A); emu_cs = 0x2537; f__2537_000C_001C_86CB();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_060A_000C_4C2F();
}

/**
 * Decompiled function f__B4DA_060A_000C_4C2F()
 *
 * @name f__B4DA_060A_000C_4C2F
 * @implements B4DA:060A:000C:4C2F ()
 *
 * Called From: B4DA:060A:0019:9C7F
 */
void f__B4DA_060A_000C_4C2F()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x8022), emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x1);
	f__B4DA_0634_0009_D11D(); return;
}

/**
 * Decompiled function f__B4DA_0614_0002_CF3A()
 *
 * @name f__B4DA_0614_0002_CF3A
 * @implements B4DA:0614:0002:CF3A ()
 *
 * Called From: B4DA:05EF:002E:839C
 */
void f__B4DA_0614_0002_CF3A()
{
	f__B4DA_0634_0009_D11D(); return;
}

/**
 * Decompiled function f__B4DA_0616_0027_AA61()
 *
 * @name f__B4DA_0616_0027_AA61
 * @implements B4DA:0616:0027:AA61 ()
 *
 * Called From: B4DA:05BD:0022:75AA
 * Called From: B4DA:05E1:002E:839C
 */
void f__B4DA_0616_0027_AA61()
{
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x8022), 0x0);
	if (emu_flags.zf) { f__B4DA_0634_0009_D11D(); return; }
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x8022), 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x8018), 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x8016), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x1);
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x0);
	if (!emu_flags.zf) { f__B4DA_063D_0027_F80D(); return; }
	/* Unresolved jump */ emu_ip = 0x06BD; emu_last_cs = 0xB4DA; emu_last_ip = 0x063A; emu_last_length = 0x0027; emu_last_crc = 0xAA61; emu_call();
}

/**
 * Decompiled function f__B4DA_0634_0009_D11D()
 *
 * @name f__B4DA_0634_0009_D11D
 * @implements B4DA:0634:0009:D11D ()
 *
 * Called From: B4DA:0614:000C:4C2F
 * Called From: B4DA:0614:0002:CF3A
 * Called From: B4DA:061B:0027:AA61
 */
void f__B4DA_0634_0009_D11D()
{
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x0);
	if (!emu_flags.zf) { f__B4DA_063D_0027_F80D(); return; }
	f__B4DA_06BD_000E_7C82(); return;
}

/**
 * Decompiled function f__B4DA_063D_0027_F80D()
 *
 * @name f__B4DA_063D_0027_F80D
 * @implements B4DA:063D:0027:F80D ()
 *
 * Called From: B4DA:0638:0027:AA61
 * Called From: B4DA:0638:0009:D11D
 */
void f__B4DA_063D_0027_F80D()
{
	emu_movw(&emu_bx, emu_get_memory16(emu_ds, 0x00, 0x8022));
	emu_movb(&emu_cl, 0x2);
	emu_shlw(&emu_bx, emu_cl);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, emu_bx, 0x7FDC));
	emu_movw(&emu_dx, emu_get_memory16(emu_ds, emu_bx, 0x7FDA));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_dx);
	emu_movb(&emu_al, emu_get_memory8(emu_ds, 0x00, 0x800B));
	emu_movb(&emu_ah, 0x0);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x0664); emu_cs = 0x260F; f__260F_0054_0016_0011();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_0664_0017_1E73();
}

/**
 * Decompiled function f__B4DA_0664_0017_1E73()
 *
 * @name f__B4DA_0664_0017_1E73
 * @implements B4DA:0664:0017:1E73 ()
 *
 * Called From: B4DA:0664:0027:F80D
 */
void f__B4DA_0664_0017_1E73()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_pop(&emu_dx);
	emu_addw(&emu_dx, emu_ax);
	emu_push(emu_dx);
	emu_movb(&emu_al, emu_get_memory8(emu_ds, 0x00, 0x800A));
	emu_movb(&emu_ah, 0x0);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x067B); emu_cs = 0x260F; f__260F_003A_0014_CA10();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_067B_0017_0C1A();
}

/**
 * Decompiled function f__B4DA_067B_0017_0C1A()
 *
 * @name f__B4DA_067B_0017_0C1A
 * @implements B4DA:067B:0017:0C1A ()
 *
 * Called From: B4DA:067B:0017:1E73
 */
void f__B4DA_067B_0017_0C1A()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_pop(&emu_dx);
	emu_addw(&emu_dx, emu_ax);
	emu_push(emu_dx);
	emu_movb(&emu_al, emu_get_memory8(emu_ds, 0x00, 0x800B));
	emu_movb(&emu_ah, 0x0);
	emu_push(emu_ax);
	emu_movb(&emu_al, emu_get_memory8(emu_ds, 0x00, 0x800A));
	emu_movb(&emu_ah, 0x0);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0692); emu_cs = 0x2B6C; f__2B6C_0197_00CE_4D32();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_0692_0023_B2A5();
}

/**
 * Decompiled function f__B4DA_0692_0023_B2A5()
 *
 * @name f__B4DA_0692_0023_B2A5
 * @implements B4DA:0692:0023:B2A5 ()
 *
 * Called From: B4DA:0692:0017:0C1A
 */
void f__B4DA_0692_0023_B2A5()
{
	emu_addw(&emu_sp, 0x8);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_movb(&emu_al, emu_get_memory8(emu_ds, 0x00, 0x800B));
	emu_movb(&emu_ah, 0x0);
	emu_push(emu_ax);
	emu_movb(&emu_al, emu_get_memory8(emu_ds, 0x00, 0x800A));
	emu_movb(&emu_ah, 0x0);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x06B5); emu_cs = 0x2903; f__2903_0158_001A_2931();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_06B5_0008_8B8A();
}

/**
 * Decompiled function f__B4DA_06B5_0008_8B8A()
 *
 * @name f__B4DA_06B5_0008_8B8A
 * @implements B4DA:06B5:0008:8B8A ()
 *
 * Called From: B4DA:06B5:0023:B2A5
 */
void f__B4DA_06B5_0008_8B8A()
{
	emu_addw(&emu_sp, 0xE);
	emu_push(emu_cs); emu_push(0x06BD); emu_cs = 0x2B6C; f__2B6C_0292_0028_3AD7();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_06BD_000E_7C82();
}

/**
 * Decompiled function f__B4DA_06BD_000E_7C82()
 *
 * @name f__B4DA_06BD_000E_7C82
 * @implements B4DA:06BD:000E:7C82 ()
 *
 * Called From: B4DA:059B:0003:DDA7
 * Called From: B4DA:063A:0009:D11D
 * Called From: B4DA:06BD:0008:8B8A
 */
void f__B4DA_06BD_000E_7C82()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x0);
	emu_movw(&emu_ax, 0x41);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x06CB); emu_cs = 0x29E8; f__29E8_08B5_000A_FC14();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_06CB_000E_B5D6();
}

/**
 * Decompiled function f__B4DA_06CB_000E_B5D6()
 *
 * @name f__B4DA_06CB_000E_B5D6
 * @implements B4DA:06CB:000E:B5D6 ()
 *
 * Called From: B4DA:06CB:000E:7C82
 */
void f__B4DA_06CB_000E_B5D6()
{
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_ax);
	if (!emu_flags.zf) { f__B4DA_06DE_001D_CAEC(); return; }
	emu_movw(&emu_ax, 0x42);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x06D9); emu_cs = 0x29E8; f__29E8_08B5_000A_FC14();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_06D9_0022_66D2();
}

/**
 * Decompiled function f__B4DA_06D9_0022_66D2()
 *
 * @name f__B4DA_06D9_0022_66D2
 * @implements B4DA:06D9:0022:66D2 ()
 *
 * Called From: B4DA:06D9:000E:B5D6
 */
void f__B4DA_06D9_0022_66D2()
{
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_ax);
	if (emu_flags.zf) { f__B4DA_0738_0029_DB1C(); return; }
	emu_movb(&emu_al, emu_get_memory8(emu_ds, 0x00, 0x8009));
	emu_movb(&emu_ah, 0x0);
	emu_push(emu_ax);
	emu_movb(&emu_al, emu_get_memory8(emu_ds, 0x00, 0x8008));
	emu_movb(&emu_ah, 0x0);
	emu_push(emu_ax);
	emu_movb(&emu_al, emu_get_memory8(emu_ds, 0x00, 0x8007));
	emu_movb(&emu_ah, 0x0);
	emu_push(emu_ax);
	emu_movb(&emu_al, emu_get_memory8(emu_ds, 0x00, 0x8006));
	emu_movb(&emu_ah, 0x0);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x06FB); emu_cs = 0x29A3; emu_Input_Mouse_InsideRegion();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_06FB_0022_1904();
}

/**
 * Decompiled function f__B4DA_06DE_001D_CAEC()
 *
 * @name f__B4DA_06DE_001D_CAEC
 * @implements B4DA:06DE:001D:CAEC ()
 *
 * Called From: B4DA:06CE:000E:B5D6
 */
void f__B4DA_06DE_001D_CAEC()
{
	emu_movb(&emu_al, emu_get_memory8(emu_ds, 0x00, 0x8009));
	emu_movb(&emu_ah, 0x0);
	emu_push(emu_ax);
	emu_movb(&emu_al, emu_get_memory8(emu_ds, 0x00, 0x8008));
	emu_movb(&emu_ah, 0x0);
	emu_push(emu_ax);
	emu_movb(&emu_al, emu_get_memory8(emu_ds, 0x00, 0x8007));
	emu_movb(&emu_ah, 0x0);
	emu_push(emu_ax);
	emu_movb(&emu_al, emu_get_memory8(emu_ds, 0x00, 0x8006));
	emu_movb(&emu_ah, 0x0);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x06FB); emu_cs = 0x29A3; emu_Input_Mouse_InsideRegion();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_06FB_0022_1904();
}

/**
 * Decompiled function f__B4DA_06FB_0022_1904()
 *
 * @name f__B4DA_06FB_0022_1904
 * @implements B4DA:06FB:0022:1904 ()
 *
 * Called From: B4DA:06FB:001D:CAEC
 * Called From: B4DA:06FB:0022:66D2
 */
void f__B4DA_06FB_0022_1904()
{
	emu_addw(&emu_sp, 0x8);
	emu_orw(&emu_ax, emu_ax);
	if (emu_flags.zf) { f__B4DA_0738_0029_DB1C(); return; }
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x801E), 0x4);
	if (emu_flags.zf) { f__B4DA_0735_0003_DC0E(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x1);
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x801E), 0x3);
	if (emu_flags.zf) { f__B4DA_071D_001B_7FD5(); return; }
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x801E), 0x3);
	f__B4DA_0723_0015_1E4A(); return;
}

/**
 * Decompiled function f__B4DA_071D_001B_7FD5()
 *
 * @name f__B4DA_071D_001B_7FD5
 * @implements B4DA:071D:001B:7FD5 ()
 *
 * Called From: B4DA:0713:0022:1904
 */
void f__B4DA_071D_001B_7FD5()
{
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x801E), 0x4);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x8020), 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x8014), 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x8012), 0x0);
	f__B4DA_09F3_0009_D11D(); return;
}

/**
 * Decompiled function f__B4DA_0723_0015_1E4A()
 *
 * @name f__B4DA_0723_0015_1E4A
 * @implements B4DA:0723:0015:1E4A ()
 *
 * Called From: B4DA:071B:0022:1904
 */
void f__B4DA_0723_0015_1E4A()
{
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x8020), 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x8014), 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x8012), 0x0);
	f__B4DA_09F3_0009_D11D(); return;
}

/**
 * Decompiled function f__B4DA_0735_0003_DC0E()
 *
 * @name f__B4DA_0735_0003_DC0E
 * @implements B4DA:0735:0003:DC0E ()
 *
 * Called From: B4DA:0707:0022:1904
 */
void f__B4DA_0735_0003_DC0E()
{
	f__B4DA_09F3_0009_D11D(); return;
}

/**
 * Decompiled function f__B4DA_0738_0029_DB1C()
 *
 * @name f__B4DA_0738_0029_DB1C
 * @implements B4DA:0738:0029:DB1C ()
 *
 * Called From: B4DA:06DC:0022:66D2
 * Called From: B4DA:0700:0022:1904
 */
void f__B4DA_0738_0029_DB1C()
{
	emu_movb(&emu_al, emu_get_memory8(emu_ds, 0x00, 0x8009));
	emu_movb(&emu_ah, 0x0);
	emu_addw(&emu_ax, 0x18);
	emu_push(emu_ax);
	emu_movb(&emu_al, emu_get_memory8(emu_ds, 0x00, 0x8008));
	emu_movb(&emu_ah, 0x0);
	emu_addw(&emu_ax, 0x10);
	emu_push(emu_ax);
	emu_movb(&emu_al, emu_get_memory8(emu_ds, 0x00, 0x8007));
	emu_movb(&emu_ah, 0x0);
	emu_addw(&emu_ax, 0xFFF8);
	emu_push(emu_ax);
	emu_movb(&emu_al, emu_get_memory8(emu_ds, 0x00, 0x8006));
	emu_movb(&emu_ah, 0x0);
	emu_addw(&emu_ax, 0xFFF0);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0761); emu_cs = 0x29A3; emu_Input_Mouse_InsideRegion();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_0761_000A_4611();
}

/**
 * Decompiled function f__B4DA_0761_000A_4611()
 *
 * @name f__B4DA_0761_000A_4611
 * @implements B4DA:0761:000A:4611 ()
 *
 * Called From: B4DA:0761:0029:DB1C
 */
void f__B4DA_0761_000A_4611()
{
	emu_addw(&emu_sp, 0x8);
	emu_orw(&emu_ax, emu_ax);
	if (!emu_flags.zf) { f__B4DA_076B_0021_7FD6(); return; }
	f__B4DA_0824_0010_62F8(); return;
}

/**
 * Decompiled function f__B4DA_076B_0021_7FD6()
 *
 * @name f__B4DA_076B_0021_7FD6
 * @implements B4DA:076B:0021:7FD6 ()
 *
 * Called From: B4DA:0766:000A:4611
 */
void f__B4DA_076B_0021_7FD6()
{
	emu_movw(&emu_ax, 0xC7);
	emu_push(emu_ax);
	emu_movb(&emu_al, emu_get_memory8(emu_ds, 0x00, 0x8008));
	emu_movb(&emu_ah, 0x0);
	emu_addw(&emu_ax, 0x8);
	emu_push(emu_ax);
	emu_movb(&emu_al, emu_get_memory8(emu_ds, 0x00, 0x8009));
	emu_movb(&emu_ah, 0x0);
	emu_push(emu_ax);
	emu_movb(&emu_al, emu_get_memory8(emu_ds, 0x00, 0x8006));
	emu_movb(&emu_ah, 0x0);
	emu_addw(&emu_ax, 0xFFF8);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x078C); emu_cs = 0x29A3; emu_Input_Mouse_InsideRegion();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_078C_000C_180F();
}

/**
 * Decompiled function f__B4DA_078C_000C_180F()
 *
 * @name f__B4DA_078C_000C_180F
 * @implements B4DA:078C:000C:180F ()
 *
 * Called From: B4DA:078C:0021:7FD6
 */
void f__B4DA_078C_000C_180F()
{
	emu_addw(&emu_sp, 0x8);
	emu_orw(&emu_ax, emu_ax);
	if (emu_flags.zf) { f__B4DA_0798_0026_9772(); return; }
	emu_movw(&emu_si, 0x3);
	f__B4DA_07FE_0026_C904(); return;
}

/**
 * Decompiled function f__B4DA_0798_0026_9772()
 *
 * @name f__B4DA_0798_0026_9772
 * @implements B4DA:0798:0026:9772 ()
 *
 * Called From: B4DA:0791:000C:180F
 */
void f__B4DA_0798_0026_9772()
{
	emu_movb(&emu_al, emu_get_memory8(emu_ds, 0x00, 0x8009));
	emu_movb(&emu_ah, 0x0);
	emu_addw(&emu_ax, 0x8);
	emu_push(emu_ax);
	emu_movb(&emu_al, emu_get_memory8(emu_ds, 0x00, 0x8008));
	emu_movb(&emu_ah, 0x0);
	emu_addw(&emu_ax, 0x10);
	emu_push(emu_ax);
	emu_movb(&emu_al, emu_get_memory8(emu_ds, 0x00, 0x8007));
	emu_movb(&emu_ah, 0x0);
	emu_addw(&emu_ax, 0xFFF8);
	emu_push(emu_ax);
	emu_movb(&emu_al, emu_get_memory8(emu_ds, 0x00, 0x8008));
	emu_movb(&emu_ah, 0x0);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x07BE); emu_cs = 0x29A3; emu_Input_Mouse_InsideRegion();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_07BE_000C_210F();
}

/**
 * Decompiled function f__B4DA_07BE_000C_210F()
 *
 * @name f__B4DA_07BE_000C_210F
 * @implements B4DA:07BE:000C:210F ()
 *
 * Called From: B4DA:07BE:0026:9772
 */
void f__B4DA_07BE_000C_210F()
{
	emu_addw(&emu_sp, 0x8);
	emu_orw(&emu_ax, emu_ax);
	if (emu_flags.zf) { f__B4DA_07CA_0026_D694(); return; }
	emu_movw(&emu_si, 0x2);
	f__B4DA_07FE_0026_C904(); return;
}

/**
 * Decompiled function f__B4DA_07CA_0026_D694()
 *
 * @name f__B4DA_07CA_0026_D694
 * @implements B4DA:07CA:0026:D694 ()
 *
 * Called From: B4DA:07C3:000C:210F
 */
void f__B4DA_07CA_0026_D694()
{
	emu_movb(&emu_al, emu_get_memory8(emu_ds, 0x00, 0x8009));
	emu_movb(&emu_ah, 0x0);
	emu_addw(&emu_ax, 0x8);
	emu_push(emu_ax);
	emu_movb(&emu_al, emu_get_memory8(emu_ds, 0x00, 0x8006));
	emu_movb(&emu_ah, 0x0);
	emu_push(emu_ax);
	emu_movb(&emu_al, emu_get_memory8(emu_ds, 0x00, 0x8007));
	emu_movb(&emu_ah, 0x0);
	emu_addw(&emu_ax, 0xFFF8);
	emu_push(emu_ax);
	emu_movb(&emu_al, emu_get_memory8(emu_ds, 0x00, 0x8006));
	emu_movb(&emu_ah, 0x0);
	emu_addw(&emu_ax, 0xFFF0);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x07F0); emu_cs = 0x29A3; emu_Input_Mouse_InsideRegion();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_07F0_000C_0A0F();
}

/**
 * Decompiled function f__B4DA_07F0_000C_0A0F()
 *
 * @name f__B4DA_07F0_000C_0A0F
 * @implements B4DA:07F0:000C:0A0F ()
 *
 * Called From: B4DA:07F0:0026:D694
 */
void f__B4DA_07F0_000C_0A0F()
{
	emu_addw(&emu_sp, 0x8);
	emu_orw(&emu_ax, emu_ax);
	if (emu_flags.zf) { f__B4DA_07FC_0028_FBE8(); return; }
	emu_movw(&emu_si, 0x1);
	f__B4DA_07FE_0026_C904(); return;
}

/**
 * Decompiled function f__B4DA_07FC_0028_FBE8()
 *
 * @name f__B4DA_07FC_0028_FBE8
 * @implements B4DA:07FC:0028:FBE8 ()
 *
 * Called From: B4DA:07F5:000C:0A0F
 */
void f__B4DA_07FC_0028_FBE8()
{
	emu_xorw(&emu_si, emu_si);
	emu_cmpw(&emu_si, emu_get_memory16(emu_ds, 0x00, 0x801E));
	if (emu_flags.zf) { f__B4DA_0821_0003_DD93(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x1);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x801E), emu_si);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x8020), 0x0);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x76AE));
	emu_movw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x76AC));
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x8014), emu_ax);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x8012), emu_dx);
	f__B4DA_09F3_0009_D11D(); return;
}

/**
 * Decompiled function f__B4DA_07FE_0026_C904()
 *
 * @name f__B4DA_07FE_0026_C904
 * @implements B4DA:07FE:0026:C904 ()
 *
 * Called From: B4DA:0796:000C:180F
 * Called From: B4DA:07C8:000C:210F
 * Called From: B4DA:07FA:000C:0A0F
 */
void f__B4DA_07FE_0026_C904()
{
	emu_cmpw(&emu_si, emu_get_memory16(emu_ds, 0x00, 0x801E));
	if (emu_flags.zf) { f__B4DA_0821_0003_DD93(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x1);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x801E), emu_si);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x8020), 0x0);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x76AE));
	emu_movw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x76AC));
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x8014), emu_ax);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x8012), emu_dx);
	f__B4DA_09F3_0009_D11D(); return;
}

/**
 * Decompiled function f__B4DA_0821_0003_DD93()
 *
 * @name f__B4DA_0821_0003_DD93
 * @implements B4DA:0821:0003:DD93 ()
 *
 * Called From: B4DA:0802:0028:FBE8
 * Called From: B4DA:0802:0026:C904
 */
void f__B4DA_0821_0003_DD93()
{
	f__B4DA_09F3_0009_D11D(); return;
}

/**
 * Decompiled function f__B4DA_0824_0010_62F8()
 *
 * @name f__B4DA_0824_0010_62F8
 * @implements B4DA:0824:0010:62F8 ()
 *
 * Called From: B4DA:0768:000A:4611
 */
void f__B4DA_0824_0010_62F8()
{
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x8014));
	emu_movw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x8012));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x76AE));
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__B4DA_0834_000B_A317(); return; }
	f__B4DA_09F0_0003_DD02(); return;
}

/**
 * Decompiled function f__B4DA_0834_000B_A317()
 *
 * @name f__B4DA_0834_000B_A317
 * @implements B4DA:0834:000B:A317 ()
 *
 * Called From: B4DA:082F:0010:62F8
 */
void f__B4DA_0834_000B_A317()
{
	if ((emu_flags.sf != emu_flags.of)) { f__B4DA_083F_0028_8918(); return; }
	emu_cmpw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x76AC));
	if (emu_flags.cf) { f__B4DA_083F_0028_8918(); return; }
	f__B4DA_09F0_0003_DD02(); return;
}

/**
 * Decompiled function f__B4DA_083F_0028_8918()
 *
 * @name f__B4DA_083F_0028_8918
 * @implements B4DA:083F:0028:8918 ()
 *
 * Called From: B4DA:0834:000B:A317
 * Called From: B4DA:083A:000B:A317
 */
void f__B4DA_083F_0028_8918()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x1);
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x8020), 0x0);
	if (emu_flags.zf) { f__B4DA_088E_0015_B131(); return; }
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x8020));
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x801E), emu_ax);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x8020), 0x0);
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x801E), 0x4);
	if (!emu_flags.zf) { f__B4DA_0867_000D_9D45(); return; }
	emu_movw(&emu_ax, 0x1E);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0xC);
	f__B4DA_086E_0006_565C(); return;
}

/**
 * Decompiled function f__B4DA_0867_000D_9D45()
 *
 * @name f__B4DA_0867_000D_9D45
 * @implements B4DA:0867:000D:9D45 ()
 *
 * Called From: B4DA:085C:0028:8918
 */
void f__B4DA_0867_000D_9D45()
{
	emu_movw(&emu_ax, 0xB4);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x14);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0874); emu_cs = 0x2537; f__2537_000C_001C_86CB();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_0874_001A_CDB0();
}

/**
 * Decompiled function f__B4DA_086E_0006_565C()
 *
 * @name f__B4DA_086E_0006_565C
 * @implements B4DA:086E:0006:565C ()
 *
 * Called From: B4DA:0865:0028:8918
 */
void f__B4DA_086E_0006_565C()
{
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0874); emu_cs = 0x2537; f__2537_000C_001C_86CB();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_0874_001A_CDB0();
}

/**
 * Decompiled function f__B4DA_0874_001A_CDB0()
 *
 * @name f__B4DA_0874_001A_CDB0
 * @implements B4DA:0874:001A:CDB0 ()
 *
 * Called From: B4DA:0874:0006:565C
 * Called From: B4DA:0874:000D:9D45
 */
void f__B4DA_0874_001A_CDB0()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_movw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x76AE));
	emu_movw(&emu_bx, emu_get_memory16(emu_ds, 0x00, 0x76AC));
	emu_addw(&emu_bx, emu_ax);
	emu_adcw(&emu_dx, 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x8014), emu_dx);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x8012), emu_bx);
	f__B4DA_09EE_0002_C1BA(); return;
}

/**
 * Decompiled function f__B4DA_088E_0015_B131()
 *
 * @name f__B4DA_088E_0015_B131
 * @implements B4DA:088E:0015:B131 ()
 *
 * Called From: B4DA:0849:0028:8918
 */
void f__B4DA_088E_0015_B131()
{
	emu_xorw(&emu_si, emu_si);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax, emu_ax);
	if (emu_flags.zf) { f__B4DA_08A3_000C_8F74(); return; }
	emu_cmpw(&emu_ax, 0x1);
	if (emu_flags.zf) { f__B4DA_08C7_000C_3ABB(); return; }
	emu_cmpw(&emu_ax, 0x2);
	if (emu_flags.zf) { f__B4DA_0902_0016_B48C(); return; }
	/* Unresolved jump */ emu_ip = 0x0902; emu_last_cs = 0xB4DA; emu_last_ip = 0x08A1; emu_last_length = 0x0015; emu_last_crc = 0xB131; emu_call();
}

/**
 * Decompiled function f__B4DA_08A3_000C_8F74()
 *
 * @name f__B4DA_08A3_000C_8F74
 * @implements B4DA:08A3:000C:8F74 ()
 *
 * Called From: B4DA:0895:0015:B131
 */
void f__B4DA_08A3_000C_8F74()
{
	emu_movw(&emu_ax, 0x7);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x08AF); emu_cs = 0x2537; f__2537_000C_001C_86CB();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_08AF_000E_2141();
}

/**
 * Decompiled function f__B4DA_08AF_000E_2141()
 *
 * @name f__B4DA_08AF_000E_2141
 * @implements B4DA:08AF:000E:2141 ()
 *
 * Called From: B4DA:08AF:000C:8F74
 */
void f__B4DA_08AF_000E_2141()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_movw(&emu_si, emu_ax);
	emu_cmpw(&emu_si, 0x5);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__B4DA_08BD_000A_981F(); return; }
	emu_movw(&emu_si, 0x1);
	f__B4DA_08C5_0002_F4BA(); return;
}

/**
 * Decompiled function f__B4DA_08BD_000A_981F()
 *
 * @name f__B4DA_08BD_000A_981F
 * @implements B4DA:08BD:000A:981F ()
 *
 * Called From: B4DA:08B6:000E:2141
 */
void f__B4DA_08BD_000A_981F()
{
	emu_cmpw(&emu_si, 0x5);
	if (!emu_flags.zf) { f__B4DA_08C5_0002_F4BA(); return; }
	emu_movw(&emu_si, 0x4);
	f__B4DA_0930_002F_7B15(); return;
}

/**
 * Decompiled function f__B4DA_08C5_0002_F4BA()
 *
 * @name f__B4DA_08C5_0002_F4BA
 * @implements B4DA:08C5:0002:F4BA ()
 *
 * Called From: B4DA:08BB:000E:2141
 * Called From: B4DA:08C0:000A:981F
 */
void f__B4DA_08C5_0002_F4BA()
{
	f__B4DA_0930_002F_7B15(); return;
}

/**
 * Decompiled function f__B4DA_08C7_000C_3ABB()
 *
 * @name f__B4DA_08C7_000C_3ABB
 * @implements B4DA:08C7:000C:3ABB ()
 *
 * Called From: B4DA:089A:0015:B131
 */
void f__B4DA_08C7_000C_3ABB()
{
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x3C4A), 0x0);
	if (emu_flags.zf) { f__B4DA_08D3_000C_3CB3(); return; }
	emu_movw(&emu_ax, 0x3);
	f__B4DA_08D5_000A_3F9B(); return;
}

/**
 * Decompiled function f__B4DA_08D3_000C_3CB3()
 *
 * @name f__B4DA_08D3_000C_3CB3
 * @implements B4DA:08D3:000C:3CB3 ()
 *
 * Called From: B4DA:08CC:000C:3ABB
 */
void f__B4DA_08D3_000C_3CB3()
{
	emu_xorw(&emu_ax, emu_ax);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x801E));
	if (emu_flags.zf) { f__B4DA_08DF_000C_4F76(); return; }
	emu_xorw(&emu_si, emu_si);
	f__B4DA_0900_0002_D73A(); return;
}

/**
 * Decompiled function f__B4DA_08D5_000A_3F9B()
 *
 * @name f__B4DA_08D5_000A_3F9B
 * @implements B4DA:08D5:000A:3F9B ()
 *
 * Called From: B4DA:08D1:000C:3ABB
 */
void f__B4DA_08D5_000A_3F9B()
{
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x801E));
	if (emu_flags.zf) { f__B4DA_08DF_000C_4F76(); return; }
	emu_xorw(&emu_si, emu_si);
	f__B4DA_0900_0002_D73A(); return;
}

/**
 * Decompiled function f__B4DA_08DF_000C_4F76()
 *
 * @name f__B4DA_08DF_000C_4F76
 * @implements B4DA:08DF:000C:4F76 ()
 *
 * Called From: B4DA:08D9:000C:3CB3
 * Called From: B4DA:08D9:000A:3F9B
 */
void f__B4DA_08DF_000C_4F76()
{
	emu_movw(&emu_ax, 0x11);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x08EB); emu_cs = 0x2537; f__2537_000C_001C_86CB();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_08EB_000D_FD08();
}

/**
 * Decompiled function f__B4DA_08EB_000D_FD08()
 *
 * @name f__B4DA_08EB_000D_FD08
 * @implements B4DA:08EB:000D:FD08 ()
 *
 * Called From: B4DA:08EB:000C:4F76
 */
void f__B4DA_08EB_000D_FD08()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_movw(&emu_si, emu_ax);
	emu_cmpw(&emu_si, 0x9);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__B4DA_08F8_000A_BB8D(); return; }
	emu_xorw(&emu_si, emu_si);
	f__B4DA_0900_0002_D73A(); return;
}

/**
 * Decompiled function f__B4DA_08F8_000A_BB8D()
 *
 * @name f__B4DA_08F8_000A_BB8D
 * @implements B4DA:08F8:000A:BB8D ()
 *
 * Called From: B4DA:08F2:000D:FD08
 */
void f__B4DA_08F8_000A_BB8D()
{
	emu_cmpw(&emu_si, 0x5);
	if ((emu_flags.sf != emu_flags.of)) { f__B4DA_0900_0002_D73A(); return; }
	emu_movw(&emu_si, 0x4);
	f__B4DA_0930_002F_7B15(); return;
}

/**
 * Decompiled function f__B4DA_0900_0002_D73A()
 *
 * @name f__B4DA_0900_0002_D73A
 * @implements B4DA:0900:0002:D73A ()
 *
 * Called From: B4DA:08DD:000C:3CB3
 * Called From: B4DA:08DD:000A:3F9B
 * Called From: B4DA:08F6:000D:FD08
 * Called From: B4DA:08FB:000A:BB8D
 */
void f__B4DA_0900_0002_D73A()
{
	f__B4DA_0930_002F_7B15(); return;
}

/**
 * Decompiled function f__B4DA_0902_0016_B48C()
 *
 * @name f__B4DA_0902_0016_B48C
 * @implements B4DA:0902:0016:B48C ()
 *
 * Called From: B4DA:089F:0015:B131
 */
void f__B4DA_0902_0016_B48C()
{
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x801E), 0x2);
	if (emu_flags.zf) { f__B4DA_090C_000C_8F75(); return; }
	emu_movw(&emu_si, 0x2);
	emu_movw(&emu_ax, 0xF);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0918); emu_cs = 0x2537; f__2537_000C_001C_86CB();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_0918_000E_1E41();
}

/**
 * Decompiled function f__B4DA_090C_000C_8F75()
 *
 * @name f__B4DA_090C_000C_8F75
 * @implements B4DA:090C:000C:8F75 ()
 *
 * Called From: B4DA:0907:0016:B48C
 */
void f__B4DA_090C_000C_8F75()
{
	emu_movw(&emu_ax, 0xF);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0918); emu_cs = 0x2537; f__2537_000C_001C_86CB();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_0918_000E_1E41();
}

/**
 * Decompiled function f__B4DA_0918_000E_1E41()
 *
 * @name f__B4DA_0918_000E_1E41
 * @implements B4DA:0918:000E:1E41 ()
 *
 * Called From: B4DA:0918:0016:B48C
 * Called From: B4DA:0918:000C:8F75
 */
void f__B4DA_0918_000E_1E41()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_movw(&emu_si, emu_ax);
	emu_cmpw(&emu_si, 0xA);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__B4DA_0926_000A_AC8D(); return; }
	emu_movw(&emu_si, 0x2);
	f__B4DA_092E_0002_C03A(); return;
}

/**
 * Decompiled function f__B4DA_0926_000A_AC8D()
 *
 * @name f__B4DA_0926_000A_AC8D
 * @implements B4DA:0926:000A:AC8D ()
 *
 * Called From: B4DA:091F:000E:1E41
 */
void f__B4DA_0926_000A_AC8D()
{
	emu_cmpw(&emu_si, 0x5);
	if ((emu_flags.sf != emu_flags.of)) { f__B4DA_092E_0002_C03A(); return; }
	emu_movw(&emu_si, 0x4);
	f__B4DA_0930_002F_7B15(); return;
}

/**
 * Decompiled function f__B4DA_092E_0002_C03A()
 *
 * @name f__B4DA_092E_0002_C03A
 * @implements B4DA:092E:0002:C03A ()
 *
 * Called From: B4DA:0924:000E:1E41
 * Called From: B4DA:0929:000A:AC8D
 */
void f__B4DA_092E_0002_C03A()
{
	f__B4DA_0930_002F_7B15(); return;
}

/**
 * Decompiled function f__B4DA_0930_002F_7B15()
 *
 * @name f__B4DA_0930_002F_7B15
 * @implements B4DA:0930:002F:7B15 ()
 *
 * Called From: B4DA:08C5:0002:F4BA
 * Called From: B4DA:08C5:000A:981F
 * Called From: B4DA:0900:0002:D73A
 * Called From: B4DA:0900:000A:BB8D
 * Called From: B4DA:092E:000A:AC8D
 * Called From: B4DA:092E:0002:C03A
 */
void f__B4DA_0930_002F_7B15()
{
	emu_cmpw(&emu_si, 0x2);
	if (!emu_flags.zf) { f__B4DA_093C_0023_71C3(); return; }
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x801E), 0x1);
	if (emu_flags.zf) { f__B4DA_0948_0017_CC2E(); return; }
	emu_cmpw(&emu_si, 0x1);
	if (!emu_flags.zf) { f__B4DA_0978_002C_C19C(); return; }
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x801E), 0x2);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0978; emu_last_cs = 0xB4DA; emu_last_ip = 0x0946; emu_last_length = 0x002F; emu_last_crc = 0x7B15; emu_call(); return; }
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x8020), emu_si);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x801E), 0x0);
	emu_movw(&emu_ax, 0x5);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x1);
	emu_push(emu_ax);
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x095F); emu_cs = 0x2537; emu_ip = 0x000C; emu_last_cs = 0xB4DA; emu_last_ip = 0x095A; emu_last_length = 0x002F; emu_last_crc = 0x7B15; emu_call();
	f__B4DA_095F_0019_E09A();
}

/**
 * Decompiled function f__B4DA_093C_0023_71C3()
 *
 * @name f__B4DA_093C_0023_71C3
 * @implements B4DA:093C:0023:71C3 ()
 *
 * Called From: B4DA:0933:002F:7B15
 */
void f__B4DA_093C_0023_71C3()
{
	emu_cmpw(&emu_si, 0x1);
	if (!emu_flags.zf) { f__B4DA_0978_002C_C19C(); return; }
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x801E), 0x2);
	if (!emu_flags.zf) { f__B4DA_0978_002C_C19C(); return; }
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x8020), emu_si);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x801E), 0x0);
	emu_movw(&emu_ax, 0x5);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x1);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x095F); emu_cs = 0x2537; f__2537_000C_001C_86CB();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_095F_0019_E09A();
}

/**
 * Decompiled function f__B4DA_0948_0017_CC2E()
 *
 * @name f__B4DA_0948_0017_CC2E
 * @implements B4DA:0948:0017:CC2E ()
 *
 * Called From: B4DA:093A:002F:7B15
 */
void f__B4DA_0948_0017_CC2E()
{
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x8020), emu_si);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x801E), 0x0);
	emu_movw(&emu_ax, 0x5);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x1);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x095F); emu_cs = 0x2537; f__2537_000C_001C_86CB();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_095F_0019_E09A();
}

/**
 * Decompiled function f__B4DA_095F_0019_E09A()
 *
 * @name f__B4DA_095F_0019_E09A
 * @implements B4DA:095F:0019:E09A ()
 *
 * Called From: B4DA:095F:0017:CC2E
 * Called From: B4DA:095F:0023:71C3
 */
void f__B4DA_095F_0019_E09A()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_movw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x76AE));
	emu_movw(&emu_bx, emu_get_memory16(emu_ds, 0x00, 0x76AC));
	emu_addw(&emu_bx, emu_ax);
	emu_adcw(&emu_dx, 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x8014), emu_dx);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x8012), emu_bx);
	f__B4DA_09DA_0016_3977(); return;
}

/**
 * Decompiled function f__B4DA_0978_002C_C19C()
 *
 * @name f__B4DA_0978_002C_C19C
 * @implements B4DA:0978:002C:C19C ()
 *
 * Called From: B4DA:093F:0023:71C3
 * Called From: B4DA:093F:002F:7B15
 * Called From: B4DA:0946:0023:71C3
 */
void f__B4DA_0978_002C_C19C()
{
	emu_cmpw(&emu_si, emu_get_memory16(emu_ds, 0x00, 0x801E));
	if (emu_flags.zf) { f__B4DA_09A4_0012_D11F(); return; }
	emu_cmpw(&emu_si, 0x4);
	if (emu_flags.zf) { f__B4DA_098A_001A_EC38(); return; }
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x801E), 0x4);
	if (!emu_flags.zf) { f__B4DA_09A4_0012_D11F(); return; }
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x8020), emu_si);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x801E), 0x3);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x76AE));
	emu_movw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x76AC));
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x8014), emu_ax);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x8012), emu_dx);
	f__B4DA_09DA_0016_3977(); return;
}

/**
 * Decompiled function f__B4DA_098A_001A_EC38()
 *
 * @name f__B4DA_098A_001A_EC38
 * @implements B4DA:098A:001A:EC38 ()
 *
 * Called From: B4DA:0981:002C:C19C
 */
void f__B4DA_098A_001A_EC38()
{
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x8020), emu_si);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x801E), 0x3);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x76AE));
	emu_movw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x76AC));
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x8014), emu_ax);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x8012), emu_dx);
	f__B4DA_09DA_0016_3977(); return;
}

/**
 * Decompiled function f__B4DA_09A4_0012_D11F()
 *
 * @name f__B4DA_09A4_0012_D11F
 * @implements B4DA:09A4:0012:D11F ()
 *
 * Called From: B4DA:097C:002C:C19C
 * Called From: B4DA:0988:002C:C19C
 */
void f__B4DA_09A4_0012_D11F()
{
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x801E), emu_si);
	emu_cmpw(&emu_si, 0x4);
	if (!emu_flags.zf) { f__B4DA_09B6_000D_8645(); return; }
	emu_movw(&emu_ax, 0x3C);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x6);
	f__B4DA_09BD_0006_565C(); return;
}

/**
 * Decompiled function f__B4DA_09B6_000D_8645()
 *
 * @name f__B4DA_09B6_000D_8645
 * @implements B4DA:09B6:000D:8645 ()
 *
 * Called From: B4DA:09AB:0012:D11F
 */
void f__B4DA_09B6_000D_8645()
{
	emu_movw(&emu_ax, 0xB4);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0xF);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x09C3); emu_cs = 0x2537; f__2537_000C_001C_86CB();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_09C3_002D_386D();
}

/**
 * Decompiled function f__B4DA_09BD_0006_565C()
 *
 * @name f__B4DA_09BD_0006_565C
 * @implements B4DA:09BD:0006:565C ()
 *
 * Called From: B4DA:09B4:0012:D11F
 */
void f__B4DA_09BD_0006_565C()
{
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x09C3); emu_cs = 0x2537; f__2537_000C_001C_86CB();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_09C3_002D_386D();
}

/**
 * Decompiled function f__B4DA_09C3_002D_386D()
 *
 * @name f__B4DA_09C3_002D_386D
 * @implements B4DA:09C3:002D:386D ()
 *
 * Called From: B4DA:09C3:0006:565C
 * Called From: B4DA:09C3:000D:8645
 */
void f__B4DA_09C3_002D_386D()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_movw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x76AE));
	emu_movw(&emu_bx, emu_get_memory16(emu_ds, 0x00, 0x76AC));
	emu_addw(&emu_bx, emu_ax);
	emu_adcw(&emu_dx, 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x8014), emu_dx);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x8012), emu_bx);
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x3C4A), 0x0);
	if (emu_flags.zf) { f__B4DA_09EE_0002_C1BA(); return; }
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x801E), 0x0);
	if (!emu_flags.zf) { f__B4DA_09EE_0002_C1BA(); return; }
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x801E), 0x3);
	f__B4DA_09F3_0009_D11D(); return;
}

/**
 * Decompiled function f__B4DA_09DA_0016_3977()
 *
 * @name f__B4DA_09DA_0016_3977
 * @implements B4DA:09DA:0016:3977 ()
 *
 * Called From: B4DA:0976:0019:E09A
 * Called From: B4DA:09A2:001A:EC38
 * Called From: B4DA:09A2:002C:C19C
 */
void f__B4DA_09DA_0016_3977()
{
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x3C4A), 0x0);
	if (emu_flags.zf) { f__B4DA_09EE_0002_C1BA(); return; }
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x801E), 0x0);
	if (!emu_flags.zf) { f__B4DA_09EE_0002_C1BA(); return; }
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x801E), 0x3);
	f__B4DA_09F3_0009_D11D(); return;
}

/**
 * Decompiled function f__B4DA_09EE_0002_C1BA()
 *
 * @name f__B4DA_09EE_0002_C1BA
 * @implements B4DA:09EE:0002:C1BA ()
 *
 * Called From: B4DA:088B:001A:CDB0
 * Called From: B4DA:09DF:0016:3977
 * Called From: B4DA:09DF:002D:386D
 * Called From: B4DA:09E6:0016:3977
 * Called From: B4DA:09E6:002D:386D
 */
void f__B4DA_09EE_0002_C1BA()
{
	f__B4DA_09F3_0009_D11D(); return;
}

/**
 * Decompiled function f__B4DA_09F0_0003_DD02()
 *
 * @name f__B4DA_09F0_0003_DD02
 * @implements B4DA:09F0:0003:DD02 ()
 *
 * Called From: B4DA:0831:0010:62F8
 * Called From: B4DA:083C:000B:A317
 */
void f__B4DA_09F0_0003_DD02()
{
	f__B4DA_0A7E_0006_F7CE(); return;
}

/**
 * Decompiled function f__B4DA_09F3_0009_D11D()
 *
 * @name f__B4DA_09F3_0009_D11D
 * @implements B4DA:09F3:0009:D11D ()
 *
 * Called From: B4DA:0735:0015:1E4A
 * Called From: B4DA:0735:001B:7FD5
 * Called From: B4DA:0735:0003:DC0E
 * Called From: B4DA:0821:0003:DD93
 * Called From: B4DA:0821:0026:C904
 * Called From: B4DA:0821:0028:FBE8
 * Called From: B4DA:09EE:0002:C1BA
 * Called From: B4DA:09EE:002D:386D
 * Called From: B4DA:09EE:0016:3977
 */
void f__B4DA_09F3_0009_D11D()
{
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x0);
	if (!emu_flags.zf) { f__B4DA_09FC_0027_59EF(); return; }
	f__B4DA_0A7C_0002_C03A(); return;
}

/**
 * Decompiled function f__B4DA_09FC_0027_59EF()
 *
 * @name f__B4DA_09FC_0027_59EF
 * @implements B4DA:09FC:0027:59EF ()
 *
 * Called From: B4DA:09F7:0009:D11D
 */
void f__B4DA_09FC_0027_59EF()
{
	emu_movw(&emu_bx, emu_get_memory16(emu_ds, 0x00, 0x801E));
	emu_movb(&emu_cl, 0x2);
	emu_shlw(&emu_bx, emu_cl);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, emu_bx, 0x7FC8));
	emu_movw(&emu_dx, emu_get_memory16(emu_ds, emu_bx, 0x7FC6));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_dx);
	emu_movb(&emu_al, emu_get_memory8(emu_ds, 0x00, 0x8007));
	emu_movb(&emu_ah, 0x0);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x0A23); emu_cs = 0x260F; f__260F_0054_0016_0011();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_0A23_0017_1E7F();
}

/**
 * Decompiled function f__B4DA_0A23_0017_1E7F()
 *
 * @name f__B4DA_0A23_0017_1E7F
 * @implements B4DA:0A23:0017:1E7F ()
 *
 * Called From: B4DA:0A23:0027:59EF
 */
void f__B4DA_0A23_0017_1E7F()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_pop(&emu_dx);
	emu_addw(&emu_dx, emu_ax);
	emu_push(emu_dx);
	emu_movb(&emu_al, emu_get_memory8(emu_ds, 0x00, 0x8006));
	emu_movb(&emu_ah, 0x0);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x0A3A); emu_cs = 0x260F; f__260F_003A_0014_CA10();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_0A3A_0017_0F16();
}

/**
 * Decompiled function f__B4DA_0A3A_0017_0F16()
 *
 * @name f__B4DA_0A3A_0017_0F16
 * @implements B4DA:0A3A:0017:0F16 ()
 *
 * Called From: B4DA:0A3A:0017:1E7F
 */
void f__B4DA_0A3A_0017_0F16()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_pop(&emu_dx);
	emu_addw(&emu_dx, emu_ax);
	emu_push(emu_dx);
	emu_movb(&emu_al, emu_get_memory8(emu_ds, 0x00, 0x8007));
	emu_movb(&emu_ah, 0x0);
	emu_push(emu_ax);
	emu_movb(&emu_al, emu_get_memory8(emu_ds, 0x00, 0x8006));
	emu_movb(&emu_ah, 0x0);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0A51); emu_cs = 0x2B6C; f__2B6C_0197_00CE_4D32();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_0A51_0023_B323();
}

/**
 * Decompiled function f__B4DA_0A51_0023_B323()
 *
 * @name f__B4DA_0A51_0023_B323
 * @implements B4DA:0A51:0023:B323 ()
 *
 * Called From: B4DA:0A51:0017:0F16
 */
void f__B4DA_0A51_0023_B323()
{
	emu_addw(&emu_sp, 0x8);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_movb(&emu_al, emu_get_memory8(emu_ds, 0x00, 0x8007));
	emu_movb(&emu_ah, 0x0);
	emu_push(emu_ax);
	emu_movb(&emu_al, emu_get_memory8(emu_ds, 0x00, 0x8006));
	emu_movb(&emu_ah, 0x0);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0A74); emu_cs = 0x2903; f__2903_0158_001A_2931();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_0A74_0008_8B8A();
}

/**
 * Decompiled function f__B4DA_0A74_0008_8B8A()
 *
 * @name f__B4DA_0A74_0008_8B8A
 * @implements B4DA:0A74:0008:8B8A ()
 *
 * Called From: B4DA:0A74:0023:B323
 */
void f__B4DA_0A74_0008_8B8A()
{
	emu_addw(&emu_sp, 0xE);
	emu_push(emu_cs); emu_push(0x0A7C); emu_cs = 0x2B6C; f__2B6C_0292_0028_3AD7();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_0A7C_0002_C03A();
}

/**
 * Decompiled function f__B4DA_0A7C_0002_C03A()
 *
 * @name f__B4DA_0A7C_0002_C03A
 * @implements B4DA:0A7C:0002:C03A ()
 *
 * Called From: B4DA:09F9:0009:D11D
 * Called From: B4DA:0A7C:0008:8B8A
 */
void f__B4DA_0A7C_0002_C03A()
{
	f__B4DA_0A7E_0006_F7CE(); return;
}

/**
 * Decompiled function f__B4DA_0A7E_0006_F7CE()
 *
 * @name f__B4DA_0A7E_0006_F7CE
 * @implements B4DA:0A7E:0006:F7CE ()
 *
 * Called From: B4DA:09F0:0003:DD02
 * Called From: B4DA:0A7C:0002:C03A
 */
void f__B4DA_0A7E_0006_F7CE()
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
 * Decompiled function f__B4DA_0A8E_0025_4AC8()
 *
 * @name f__B4DA_0A8E_0025_4AC8
 * @implements B4DA:0A8E:0025:4AC8 ()
 *
 * Called From: 34DA:002F:0005:0000
 * Called From: B4DA:02CB:000B:CB27
 * Called From: B4DA:02CB:0009:FD6C
 * Called From: B4DA:0FC5:000B:EBA0
 * Called From: B4DA:1031:0009:3AB2
 * Called From: B4DA:132A:000A:EA7C
 */
void f__B4DA_0A8E_0025_4AC8()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_movb(&emu_al, emu_get_memory8(emu_ds, 0x00, 0x8011));
	emu_movb(&emu_ah, 0x0);
	emu_push(emu_ax);
	emu_movb(&emu_al, emu_get_memory8(emu_ds, 0x00, 0x8010));
	emu_movb(&emu_ah, 0x0);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x8004));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x8002));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x0AB3); emu_cs = 0x2903; f__2903_0158_001A_2931();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_0AB3_0005_6043();
}

/**
 * Decompiled function f__B4DA_0AB3_0005_6043()
 *
 * @name f__B4DA_0AB3_0005_6043
 * @implements B4DA:0AB3:0005:6043 ()
 *
 * Called From: B4DA:0AB3:0025:4AC8
 */
void f__B4DA_0AB3_0005_6043()
{
	emu_addw(&emu_sp, 0xE);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B4DA_0AB8_002A_AAB2()
 *
 * @name f__B4DA_0AB8_002A_AAB2
 * @implements B4DA:0AB8:002A:AAB2 ()
 *
 * Called From: 34DA:0034:0005:0000
 * Called From: B4DA:11F3:0023:09B4
 */
void f__B4DA_0AB8_002A_AAB2()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subw(&emu_sp, 0x28);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x1C), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x1E), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x20), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x22), 0x0);
	emu_movw(&emu_ax, 0x8);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0AE2); emu_cs = 0x07AE; f__07AE_0000_00DF_A32C();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_0AE2_000D_6FB1();
}

/**
 * Decompiled function f__B4DA_0AE2_000D_6FB1()
 *
 * @name f__B4DA_0AE2_000D_6FB1
 * @implements B4DA:0AE2:000D:6FB1 ()
 *
 * Called From: B4DA:0AE2:002A:AAB2
 */
void f__B4DA_0AE2_000D_6FB1()
{
	emu_pop(&emu_cx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_ax);
	emu_movw(&emu_ax, 0x4);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0AEF); emu_cs = 0x2598; f__2598_0000_0017_EB80();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_0AEF_0030_D055();
}

/**
 * Decompiled function f__B4DA_0AEF_0030_D055()
 *
 * @name f__B4DA_0AEF_0030_D055
 * @implements B4DA:0AEF:0030:D055 ()
 *
 * Called From: B4DA:0AEF:000D:6FB1
 */
void f__B4DA_0AEF_0030_D055()
{
	emu_pop(&emu_cx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x0);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0B36; emu_last_cs = 0xB4DA; emu_last_ip = 0x0B03; emu_last_length = 0x0030; emu_last_crc = 0xD055; emu_call(); return; }
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6CE1));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6CDF));
	emu_movw(&emu_ax, 0x3);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0B1F); emu_cs = 0x252E; f__252E_0001_0018_08B3();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_0B1F_000E_1049();
}

/**
 * Decompiled function f__B4DA_0B1F_000E_1049()
 *
 * @name f__B4DA_0B1F_000E_1049
 * @implements B4DA:0B1F:000E:1049 ()
 *
 * Called From: B4DA:0B1F:0030:D055
 */
void f__B4DA_0B1F_000E_1049()
{
	emu_pop(&emu_cx);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x0B2D); emu_cs = 0x352A; ovl__352A(0);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_0B2D_0016_F446();
}

/**
 * Decompiled function f__B4DA_0B2D_0016_F446()
 *
 * @name f__B4DA_0B2D_0016_F446
 * @implements B4DA:0B2D:0016:F446 ()
 *
 * Called From: 261F:01B9:001B:EDBF
 * Called From: B4DA:0B2D:000E:1049
 */
void f__B4DA_0B2D_0016_F446()
{
	emu_addw(&emu_sp, 0x12);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (!emu_flags.zf) { f__B4DA_0B48_001D_08D6(); return; }
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x0B43); emu_cs = 0x07AE; emu_ip = 0x0103; emu_last_cs = 0xB4DA; emu_last_ip = 0x0B3E; emu_last_length = 0x0016; emu_last_crc = 0xF446; emu_call();
	/* Unresolved jump */ emu_ip = 0x0B43; emu_last_cs = 0xB4DA; emu_last_ip = 0x0B43; emu_last_length = 0x0016; emu_last_crc = 0xF446; emu_call();
}

/**
 * Decompiled function f__B4DA_0B48_001D_08D6()
 *
 * @name f__B4DA_0B48_001D_08D6
 * @implements B4DA:0B48:001D:08D6 ()
 *
 * Called From: B4DA:0B3C:0016:F446
 */
void f__B4DA_0B48_001D_08D6()
{
	emu_xorw(&emu_si, emu_si);
	emu_movw(&emu_ax, 0x31);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x0B65); emu_cs = 0x10E4; f__10E4_1EF1_0040_01F8();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_0B65_001C_98BD();
}

/**
 * Decompiled function f__B4DA_0B65_001C_98BD()
 *
 * @name f__B4DA_0B65_001C_98BD
 * @implements B4DA:0B65:001C:98BD ()
 *
 * Called From: B4DA:0B65:001D:08D6
 */
void f__B4DA_0B65_001C_98BD()
{
	emu_addw(&emu_sp, 0xE);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x992F));
	emu_movb(&emu_cl, 0x3);
	emu_shlw(&emu_ax, emu_cl);
	emu_subw(&emu_ax, 0xA);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_cs); emu_push(0x0B81); emu_cs = 0x10E4; f__10E4_01B8_0014_5104();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_0B81_0021_F1D5();
}

/**
 * Decompiled function f__B4DA_0B81_0021_F1D5()
 *
 * @name f__B4DA_0B81_0021_F1D5
 * @implements B4DA:0B81:0021:F1D5 ()
 *
 * Called From: B4DA:0B81:001C:98BD
 */
void f__B4DA_0B81_0021_F1D5()
{
	emu_addw(&emu_sp, 0x8);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x24), emu_ax);
	emu_movw(&emu_ax, 0x32);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x0BA2); emu_cs = 0x10E4; f__10E4_1EF1_0040_01F8();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_0BA2_0012_DA23();
}

/**
 * Decompiled function f__B4DA_0BA2_0012_DA23()
 *
 * @name f__B4DA_0BA2_0012_DA23
 * @implements B4DA:0BA2:0012:DA23 ()
 *
 * Called From: B4DA:0BA2:0021:F1D5
 */
void f__B4DA_0BA2_0012_DA23()
{
	emu_addw(&emu_sp, 0xE);
	emu_movw(&emu_ax, 0x130);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x10));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_push(emu_cs);
	emu_push(0x0BB4); f__B4DA_1893_001C_7AC4();
	f__B4DA_0BB4_003F_C2EE();
}

/**
 * Decompiled function f__B4DA_0BB4_003F_C2EE()
 *
 * @name f__B4DA_0BB4_003F_C2EE
 * @implements B4DA:0BB4:003F:C2EE ()
 *
 * Called From: B4DA:0BB4:0012:DA23
 */
void f__B4DA_0BB4_003F_C2EE()
{
	emu_addw(&emu_sp, 0x6);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x28), emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x18), 0x2);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x26), 0x0);
	emu_xorw(&emu_ax, emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), emu_ax);
	emu_cwd();
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x76B6), emu_dx);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x76B4), emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x76AE));
	emu_movw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x76AC));
	emu_addw(&emu_dx, 0x1E);
	emu_adcw(&emu_ax, 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x14), emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x16), emu_dx);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x992D));
	emu_movb(&emu_cl, 0x3);
	emu_shlw(&emu_ax, emu_cl);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x12), emu_ax);
	emu_push(emu_cs); emu_push(0x0BF3); emu_cs = 0x29E8; emu_Input_History_Clear();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_0BF3_0010_8C36();
}

/**
 * Decompiled function f__B4DA_0BF3_0010_8C36()
 *
 * @name f__B4DA_0BF3_0010_8C36
 * @implements B4DA:0BF3:0010:8C36 ()
 *
 * Called From: B4DA:0BF3:003F:C2EE
 */
void f__B4DA_0BF3_0010_8C36()
{
	emu_xorw(&emu_ax, emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x1A), 0x0);
	f__B4DA_1004_0009_2C84(); return;
}

/**
 * Decompiled function f__B4DA_0C03_0008_64F7()
 *
 * @name f__B4DA_0C03_0008_64F7
 * @implements B4DA:0C03:0008:64F7 ()
 *
 * Called From: B4DA:100A:0009:2C84
 * Called From: B4DA:100A:000E:103A
 */
void f__B4DA_0C03_0008_64F7()
{
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0C0B); emu_cs = 0x2598; f__2598_0000_0017_EB80();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_0C0B_000C_6912();
}

/**
 * Decompiled function f__B4DA_0C0B_000C_6912()
 *
 * @name f__B4DA_0C0B_000C_6912
 * @implements B4DA:0C0B:000C:6912 ()
 *
 * Called From: B4DA:0C0B:0008:64F7
 */
void f__B4DA_0C0B_000C_6912()
{
	emu_pop(&emu_cx);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x16));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x14));
	emu_push(emu_cs); emu_push(0x0C17); emu_cs = 0x34A2; ovl__34A2(2);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_0C17_0009_2F5C();
}

/**
 * Decompiled function f__B4DA_0C17_0009_2F5C()
 *
 * @name f__B4DA_0C17_0009_2F5C
 * @implements B4DA:0C17:0009:2F5C ()
 *
 * Called From: B4DA:0C17:000C:6912
 */
void f__B4DA_0C17_0009_2F5C()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_movw(&emu_di, emu_ax);
	emu_push(emu_cs); emu_push(0x0C20); emu_cs = 0x0642; f__0642_0559_0027_3560();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_0C20_000E_EC25();
}

/**
 * Decompiled function f__B4DA_0C20_000E_EC25()
 *
 * @name f__B4DA_0C20_000E_EC25
 * @implements B4DA:0C20:000E:EC25 ()
 *
 * Called From: 261F:01B9:001B:EDBF
 * Called From: B4DA:0C20:0009:2F5C
 */
void f__B4DA_0C20_000E_EC25()
{
	emu_orw(&emu_di, emu_di);
	if (emu_flags.zf) { f__B4DA_0C50_000A_5BEE(); return; }
	emu_testw(&emu_di, 0x800);
	if (emu_flags.zf) { f__B4DA_0C2E_0019_5030(); return; }
	emu_xorw(&emu_di, emu_di);
	f__B4DA_0C50_000A_5BEE(); return;
}

/**
 * Decompiled function f__B4DA_0C2E_0019_5030()
 *
 * @name f__B4DA_0C2E_0019_5030
 * @implements B4DA:0C2E:0019:5030 ()
 *
 * Called From: B4DA:0C28:000E:EC25
 */
void f__B4DA_0C2E_0019_5030()
{
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x14));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x16));
	if (emu_flags.zf) { f__B4DA_0C47_0013_D765(); return; }
	emu_testw(&emu_di, 0x8000);
	if (emu_flags.zf) { f__B4DA_0C45_0002_C4BA(); return; }
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x1A), 0x0);
	if (!emu_flags.zf) { f__B4DA_0C45_0002_C4BA(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x1A), emu_di);
	f__B4DA_0C50_000A_5BEE(); return;
}

/**
 * Decompiled function f__B4DA_0C45_0002_C4BA()
 *
 * @name f__B4DA_0C45_0002_C4BA
 * @implements B4DA:0C45:0002:C4BA ()
 *
 * Called From: B4DA:0C3A:0019:5030
 * Called From: B4DA:0C40:0019:5030
 */
void f__B4DA_0C45_0002_C4BA()
{
	f__B4DA_0C50_000A_5BEE(); return;
}

/**
 * Decompiled function f__B4DA_0C47_0013_D765()
 *
 * @name f__B4DA_0C47_0013_D765
 * @implements B4DA:0C47:0013:D765 ()
 *
 * Called From: B4DA:0C34:0019:5030
 */
void f__B4DA_0C47_0013_D765()
{
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x0);
	if (emu_flags.zf) { f__B4DA_0C50_000A_5BEE(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x1A), emu_di);
	emu_movw(&emu_bx, emu_si);
	emu_cmpw(&emu_bx, 0x5);
	if ((emu_flags.cf || emu_flags.zf)) { f__B4DA_0C5A_0007_201D(); return; }
	/* Unresolved jump */ emu_ip = 0x0EF9; emu_last_cs = 0xB4DA; emu_last_ip = 0x0C57; emu_last_length = 0x0013; emu_last_crc = 0xD765; emu_call();
}

/**
 * Decompiled function f__B4DA_0C50_000A_5BEE()
 *
 * @name f__B4DA_0C50_000A_5BEE
 * @implements B4DA:0C50:000A:5BEE ()
 *
 * Called From: B4DA:0C22:000E:EC25
 * Called From: B4DA:0C2C:000E:EC25
 * Called From: B4DA:0C45:0002:C4BA
 * Called From: B4DA:0C45:0019:5030
 * Called From: B4DA:0C4B:0013:D765
 */
void f__B4DA_0C50_000A_5BEE()
{
	emu_movw(&emu_bx, emu_si);
	emu_cmpw(&emu_bx, 0x5);
	if ((emu_flags.cf || emu_flags.zf)) { f__B4DA_0C5A_0007_201D(); return; }
	f__B4DA_0EF9_0002_C03A(); return;
}

/**
 * Decompiled function f__B4DA_0C5A_0007_201D()
 *
 * @name f__B4DA_0C5A_0007_201D
 * @implements B4DA:0C5A:0007:201D ()
 *
 * Called From: B4DA:0C55:000A:5BEE
 * Called From: B4DA:0C55:0013:D765
 */
void f__B4DA_0C5A_0007_201D()
{
	emu_shlw(&emu_bx, 0x1);

	/* Jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_cs, emu_bx, 0x108D);
	switch (emu_ip) {
		case 0x0C61: f__B4DA_0C61_0007_13B9(); return;
		case 0x0C75: f__B4DA_0C75_0010_D67E(); return;
		case 0x0CE7: f__B4DA_0CE7_0013_2896(); return;
		case 0x0D2C: f__B4DA_0D2C_0040_42E1(); return;
		case 0x0EDA: f__B4DA_0EDA_0013_5FFA(); return;
		case 0x0EED: f__B4DA_0EED_000C_BD8D(); return;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0xB4DA; emu_last_ip = 0x0C5C; emu_last_length = 0x0007; emu_last_crc = 0x201D;
			emu_call();
			return;
	}
}

/**
 * Decompiled function f__B4DA_0C61_0007_13B9()
 *
 * @name f__B4DA_0C61_0007_13B9
 * @implements B4DA:0C61:0007:13B9 ()
 *
 * Called From: B4DA:0C5C:0007:201D
 */
void f__B4DA_0C61_0007_13B9()
{
	emu_orw(&emu_di, emu_di);
	if (!emu_flags.zf) { f__B4DA_0C68_0008_9CC2(); return; }
	f__B4DA_0EFB_0007_D9BE(); return;
}

/**
 * Decompiled function f__B4DA_0C68_0008_9CC2()
 *
 * @name f__B4DA_0C68_0008_9CC2
 * @implements B4DA:0C68:0008:9CC2 ()
 *
 * Called From: B4DA:0C63:0007:13B9
 */
void f__B4DA_0C68_0008_9CC2()
{
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x1A), 0x0);
	if (emu_flags.zf) { f__B4DA_0C72_0013_81BE(); return; }
	f__B4DA_0C7F_0006_6417(); return;
}

/**
 * Decompiled function f__B4DA_0C72_0013_81BE()
 *
 * @name f__B4DA_0C72_0013_81BE
 * @implements B4DA:0C72:0013:81BE ()
 *
 * Called From: B4DA:0C6C:0008:9CC2
 */
void f__B4DA_0C72_0013_81BE()
{
	emu_movw(&emu_si, 0x1);
	emu_orw(&emu_di, emu_di);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0C92; emu_last_cs = 0xB4DA; emu_last_ip = 0x0C77; emu_last_length = 0x0013; emu_last_crc = 0x81BE; emu_call(); return; }
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x1A), 0x0);
	if (emu_flags.zf) { f__B4DA_0C85_000D_FD79(); return; }
	emu_movw(&emu_si, 0x5);
	/* Unresolved jump */ emu_ip = 0x0EFB; emu_last_cs = 0xB4DA; emu_last_ip = 0x0C82; emu_last_length = 0x0013; emu_last_crc = 0x81BE; emu_call();
}

/**
 * Decompiled function f__B4DA_0C75_0010_D67E()
 *
 * @name f__B4DA_0C75_0010_D67E
 * @implements B4DA:0C75:0010:D67E ()
 *
 * Called From: B4DA:0C5C:0007:201D
 */
void f__B4DA_0C75_0010_D67E()
{
	emu_orw(&emu_di, emu_di);
	if (emu_flags.zf) { f__B4DA_0C92_0049_646C(); return; }
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x1A), 0x0);
	if (emu_flags.zf) { f__B4DA_0C85_000D_FD79(); return; }
	emu_movw(&emu_si, 0x5);
	/* Unresolved jump */ emu_ip = 0x0EFB; emu_last_cs = 0xB4DA; emu_last_ip = 0x0C82; emu_last_length = 0x0010; emu_last_crc = 0xD67E; emu_call();
}

/**
 * Decompiled function f__B4DA_0C7F_0006_6417()
 *
 * @name f__B4DA_0C7F_0006_6417
 * @implements B4DA:0C7F:0006:6417 ()
 *
 * Called From: B4DA:0C6E:0008:9CC2
 */
void f__B4DA_0C7F_0006_6417()
{
	emu_movw(&emu_si, 0x5);
	f__B4DA_0EFB_0007_D9BE(); return;
}

/**
 * Decompiled function f__B4DA_0C85_000D_FD79()
 *
 * @name f__B4DA_0C85_000D_FD79
 * @implements B4DA:0C85:000D:FD79 ()
 *
 * Called From: B4DA:0C7D:0010:D67E
 * Called From: B4DA:0C7D:0013:81BE
 */
void f__B4DA_0C85_000D_FD79()
{
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x24));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x26), emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x1);
	f__B4DA_0CC0_001B_2694(); return;
}

/**
 * Decompiled function f__B4DA_0C92_0049_646C()
 *
 * @name f__B4DA_0C92_0049_646C
 * @implements B4DA:0C92:0049:646C ()
 *
 * Called From: B4DA:0C77:0010:D67E
 */
void f__B4DA_0C92_0049_646C()
{
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x76AE));
	emu_movw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x76AC));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x14));
	if ((emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x0CC0; emu_last_cs = 0xB4DA; emu_last_ip = 0x0C9C; emu_last_length = 0x0049; emu_last_crc = 0x646C; emu_call(); return; }
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__B4DA_0CA5_0036_4855(); return; }
	emu_cmpw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0x16));
	if ((emu_flags.cf || emu_flags.zf)) { f__B4DA_0CC0_001B_2694(); return; }
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x76AE));
	emu_movw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x76AC));
	emu_addw(&emu_dx, 0xF);
	emu_adcw(&emu_ax, 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x14), emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x16), emu_dx);
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x26));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x1);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x26));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x24));
	if (!(emu_flags.sf != emu_flags.of)) { f__B4DA_0CCE_000D_7E24(); return; }
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x26), 0xC);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__B4DA_0CE4_0003_1C25(); return; }
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x10));
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0CDB; emu_last_cs = 0xB4DA; emu_last_ip = 0x0CD4; emu_last_length = 0x0049; emu_last_crc = 0x646C; emu_call(); return; }
	emu_movw(&emu_si, 0x2);
	/* Unresolved jump */ emu_ip = 0x0CDE; emu_last_cs = 0xB4DA; emu_last_ip = 0x0CD9; emu_last_length = 0x0049; emu_last_crc = 0x646C; emu_call();
}

/**
 * Decompiled function f__B4DA_0CA5_0036_4855()
 *
 * @name f__B4DA_0CA5_0036_4855
 * @implements B4DA:0CA5:0036:4855 ()
 *
 * Called From: B4DA:0C9E:0049:646C
 */
void f__B4DA_0CA5_0036_4855()
{
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x76AE));
	emu_movw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x76AC));
	emu_addw(&emu_dx, 0xF);
	emu_adcw(&emu_ax, 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x14), emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x16), emu_dx);
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x26));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x1);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x26));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x24));
	if (!(emu_flags.sf != emu_flags.of)) { f__B4DA_0CCE_000D_7E24(); return; }
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x26), 0xC);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x0CE4; emu_last_cs = 0xB4DA; emu_last_ip = 0x0CCC; emu_last_length = 0x0036; emu_last_crc = 0x4855; emu_call(); return; }
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x10));
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0CDB; emu_last_cs = 0xB4DA; emu_last_ip = 0x0CD4; emu_last_length = 0x0036; emu_last_crc = 0x4855; emu_call(); return; }
	emu_movw(&emu_si, 0x2);
	/* Unresolved jump */ emu_ip = 0x0CDE; emu_last_cs = 0xB4DA; emu_last_ip = 0x0CD9; emu_last_length = 0x0036; emu_last_crc = 0x4855; emu_call();
}

/**
 * Decompiled function f__B4DA_0CC0_001B_2694()
 *
 * @name f__B4DA_0CC0_001B_2694
 * @implements B4DA:0CC0:001B:2694 ()
 *
 * Called From: B4DA:0C90:000D:FD79
 * Called From: B4DA:0CA3:0049:646C
 */
void f__B4DA_0CC0_001B_2694()
{
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x26));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x24));
	if (!(emu_flags.sf != emu_flags.of)) { f__B4DA_0CCE_000D_7E24(); return; }
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x26), 0xC);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__B4DA_0CE4_0003_1C25(); return; }
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x10));
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0CDB; emu_last_cs = 0xB4DA; emu_last_ip = 0x0CD4; emu_last_length = 0x001B; emu_last_crc = 0x2694; emu_call(); return; }
	emu_movw(&emu_si, 0x2);
	/* Unresolved jump */ emu_ip = 0x0CDE; emu_last_cs = 0xB4DA; emu_last_ip = 0x0CD9; emu_last_length = 0x001B; emu_last_crc = 0x2694; emu_call();
}

/**
 * Decompiled function f__B4DA_0CCE_000D_7E24()
 *
 * @name f__B4DA_0CCE_000D_7E24
 * @implements B4DA:0CCE:000D:7E24 ()
 *
 * Called From: B4DA:0CC6:0049:646C
 * Called From: B4DA:0CC6:001B:2694
 * Called From: B4DA:0CC6:0036:4855
 */
void f__B4DA_0CCE_000D_7E24()
{
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x10));
	if (emu_flags.zf) { f__B4DA_0CDB_000C_D607(); return; }
	emu_movw(&emu_si, 0x2);
	f__B4DA_0CDE_0009_5DE7(); return;
}

/**
 * Decompiled function f__B4DA_0CDB_000C_D607()
 *
 * @name f__B4DA_0CDB_000C_D607
 * @implements B4DA:0CDB:000C:D607 ()
 *
 * Called From: B4DA:0CD4:000D:7E24
 */
void f__B4DA_0CDB_000C_D607()
{
	emu_movw(&emu_si, 0x4);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x24));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x26), emu_ax);
	f__B4DA_0EFB_0007_D9BE(); return;
}

/**
 * Decompiled function f__B4DA_0CDE_0009_5DE7()
 *
 * @name f__B4DA_0CDE_0009_5DE7
 * @implements B4DA:0CDE:0009:5DE7 ()
 *
 * Called From: B4DA:0CD9:000D:7E24
 */
void f__B4DA_0CDE_0009_5DE7()
{
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x24));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x26), emu_ax);
	f__B4DA_0EFB_0007_D9BE(); return;
}

/**
 * Decompiled function f__B4DA_0CE4_0003_1C25()
 *
 * @name f__B4DA_0CE4_0003_1C25
 * @implements B4DA:0CE4:0003:1C25 ()
 *
 * Called From: B4DA:0CCC:0049:646C
 * Called From: B4DA:0CCC:001B:2694
 */
void f__B4DA_0CE4_0003_1C25()
{
	f__B4DA_0EFB_0007_D9BE(); return;
}

/**
 * Decompiled function f__B4DA_0CE7_0013_2896()
 *
 * @name f__B4DA_0CE7_0013_2896
 * @implements B4DA:0CE7:0013:2896 ()
 *
 * Called From: B4DA:0C5C:0007:201D
 */
void f__B4DA_0CE7_0013_2896()
{
	emu_movw(&emu_ax, 0x28);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x140);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0CFA); emu_cs = 0x2B6C; f__2B6C_0197_00CE_4D32();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_0CFA_0024_359C();
}

/**
 * Decompiled function f__B4DA_0CFA_0024_359C()
 *
 * @name f__B4DA_0CFA_0024_359C
 * @implements B4DA:0CFA:0024:359C ()
 *
 * Called From: B4DA:0CFA:0013:2896
 */
void f__B4DA_0CFA_0024_359C()
{
	emu_addw(&emu_sp, 0x8);
	emu_movw(&emu_ax, 0x4);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x28);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x28);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0xA0);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0D1E); emu_cs = 0x24D0; f__24D0_000D_0039_C17D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_0D1E_0008_F38A();
}

/**
 * Decompiled function f__B4DA_0D1E_0008_F38A()
 *
 * @name f__B4DA_0D1E_0008_F38A
 * @implements B4DA:0D1E:0008:F38A ()
 *
 * Called From: B4DA:0D1E:0024:359C
 */
void f__B4DA_0D1E_0008_F38A()
{
	emu_addw(&emu_sp, 0x10);
	emu_push(emu_cs); emu_push(0x0D26); emu_cs = 0x2B6C; f__2B6C_0292_0028_3AD7();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_0D26_0046_ED1B();
}

/**
 * Decompiled function f__B4DA_0D26_0046_ED1B()
 *
 * @name f__B4DA_0D26_0046_ED1B
 * @implements B4DA:0D26:0046:ED1B ()
 *
 * Called From: B4DA:0D26:0008:F38A
 */
void f__B4DA_0D26_0046_ED1B()
{
	emu_movw(&emu_si, 0x3);
	emu_movw(&emu_di, 0x1);
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x18), 0x2);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0D49; emu_last_cs = 0xB4DA; emu_last_ip = 0x0D30; emu_last_length = 0x0046; emu_last_crc = 0xED1B; emu_call(); return; }
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x1C));
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0x1E));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x76AE));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x0D49; emu_last_cs = 0xB4DA; emu_last_ip = 0x0D3C; emu_last_length = 0x0046; emu_last_crc = 0xED1B; emu_call(); return; }
	if ((emu_flags.sf != emu_flags.of)) { f__B4DA_0D46_0026_659C(); return; }
	emu_cmpw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x76AC));
	if (!emu_flags.cf) { /* Unresolved jump */ emu_ip = 0x0D49; emu_last_cs = 0xB4DA; emu_last_ip = 0x0D44; emu_last_length = 0x0046; emu_last_crc = 0xED1B; emu_call(); return; }
	emu_movw(&emu_di, 0x1);
	emu_orw(&emu_di, emu_di);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0D53; emu_last_cs = 0xB4DA; emu_last_ip = 0x0D4B; emu_last_length = 0x0046; emu_last_crc = 0xED1B; emu_call(); return; }
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x0);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0D59; emu_last_cs = 0xB4DA; emu_last_ip = 0x0D51; emu_last_length = 0x0046; emu_last_crc = 0xED1B; emu_call(); return; }
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x1A), 0x0);
	if (emu_flags.zf) { f__B4DA_0DA3_0007_92A0(); return; }
	emu_movw(&emu_ax, 0x28);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x140);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0D6C); emu_cs = 0x2B6C; f__2B6C_0197_00CE_4D32();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_0D6C_0024_8C51();
}

/**
 * Decompiled function f__B4DA_0D2C_0040_42E1()
 *
 * @name f__B4DA_0D2C_0040_42E1
 * @implements B4DA:0D2C:0040:42E1 ()
 *
 * Called From: B4DA:0C5C:0007:201D
 */
void f__B4DA_0D2C_0040_42E1()
{
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x18), 0x2);
	if (!emu_flags.zf) { f__B4DA_0D49_0023_9996(); return; }
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x1C));
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0x1E));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x76AE));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__B4DA_0D49_0023_9996(); return; }
	if ((emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x0D46; emu_last_cs = 0xB4DA; emu_last_ip = 0x0D3E; emu_last_length = 0x0040; emu_last_crc = 0x42E1; emu_call(); return; }
	emu_cmpw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x76AC));
	if (!emu_flags.cf) { f__B4DA_0D49_0023_9996(); return; }
	emu_movw(&emu_di, 0x1);
	emu_orw(&emu_di, emu_di);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0D53; emu_last_cs = 0xB4DA; emu_last_ip = 0x0D4B; emu_last_length = 0x0040; emu_last_crc = 0x42E1; emu_call(); return; }
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x0);
	if (!emu_flags.zf) { f__B4DA_0D59_0013_2896(); return; }
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x1A), 0x0);
	if (emu_flags.zf) { f__B4DA_0DA3_0007_92A0(); return; }
	emu_movw(&emu_ax, 0x28);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x140);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x0D6C); emu_cs = 0x2B6C; emu_ip = 0x0197; emu_last_cs = 0xB4DA; emu_last_ip = 0x0D67; emu_last_length = 0x0040; emu_last_crc = 0x42E1; emu_call();
	f__B4DA_0D6C_0024_8C51();
}

/**
 * Decompiled function f__B4DA_0D46_0026_659C()
 *
 * @name f__B4DA_0D46_0026_659C
 * @implements B4DA:0D46:0026:659C ()
 *
 * Called From: B4DA:0D3E:0046:ED1B
 */
void f__B4DA_0D46_0026_659C()
{
	emu_movw(&emu_di, 0x1);
	emu_orw(&emu_di, emu_di);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0D53; emu_last_cs = 0xB4DA; emu_last_ip = 0x0D4B; emu_last_length = 0x0026; emu_last_crc = 0x659C; emu_call(); return; }
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x0);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0D59; emu_last_cs = 0xB4DA; emu_last_ip = 0x0D51; emu_last_length = 0x0026; emu_last_crc = 0x659C; emu_call(); return; }
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x1A), 0x0);
	if (emu_flags.zf) { f__B4DA_0DA3_0007_92A0(); return; }
	emu_movw(&emu_ax, 0x28);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x140);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x0D6C); emu_cs = 0x2B6C; emu_ip = 0x0197; emu_last_cs = 0xB4DA; emu_last_ip = 0x0D67; emu_last_length = 0x0026; emu_last_crc = 0x659C; emu_call();
	f__B4DA_0D6C_0024_8C51();
}

/**
 * Decompiled function f__B4DA_0D49_0023_9996()
 *
 * @name f__B4DA_0D49_0023_9996
 * @implements B4DA:0D49:0023:9996 ()
 *
 * Called From: B4DA:0D30:0040:42E1
 * Called From: B4DA:0D3C:0040:42E1
 * Called From: B4DA:0D44:0040:42E1
 */
void f__B4DA_0D49_0023_9996()
{
	emu_orw(&emu_di, emu_di);
	if (emu_flags.zf) { f__B4DA_0D53_0019_74BF(); return; }
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x0);
	if (!emu_flags.zf) { f__B4DA_0D59_0013_2896(); return; }
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x1A), 0x0);
	if (emu_flags.zf) { f__B4DA_0DA3_0007_92A0(); return; }
	emu_movw(&emu_ax, 0x28);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x140);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0D6C); emu_cs = 0x2B6C; f__2B6C_0197_00CE_4D32();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_0D6C_0024_8C51();
}

/**
 * Decompiled function f__B4DA_0D53_0019_74BF()
 *
 * @name f__B4DA_0D53_0019_74BF
 * @implements B4DA:0D53:0019:74BF ()
 *
 * Called From: B4DA:0D4B:0023:9996
 */
void f__B4DA_0D53_0019_74BF()
{
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x1A), 0x0);
	if (emu_flags.zf) { f__B4DA_0DA3_0007_92A0(); return; }
	emu_movw(&emu_ax, 0x28);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x140);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0D6C); emu_cs = 0x2B6C; f__2B6C_0197_00CE_4D32();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_0D6C_0024_8C51();
}

/**
 * Decompiled function f__B4DA_0D59_0013_2896()
 *
 * @name f__B4DA_0D59_0013_2896
 * @implements B4DA:0D59:0013:2896 ()
 *
 * Called From: B4DA:0D51:0040:42E1
 * Called From: B4DA:0D51:0023:9996
 */
void f__B4DA_0D59_0013_2896()
{
	emu_movw(&emu_ax, 0x28);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x140);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0D6C); emu_cs = 0x2B6C; f__2B6C_0197_00CE_4D32();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_0D6C_0024_8C51();
}

/**
 * Decompiled function f__B4DA_0D6C_0024_8C51()
 *
 * @name f__B4DA_0D6C_0024_8C51
 * @implements B4DA:0D6C:0024:8C51 ()
 *
 * Called From: B4DA:0D6C:0013:2896
 * Called From: B4DA:0D6C:0019:74BF
 * Called From: B4DA:0D6C:0023:9996
 * Called From: B4DA:0D6C:0046:ED1B
 */
void f__B4DA_0D6C_0024_8C51()
{
	emu_addw(&emu_sp, 0x8);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x4);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x28);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x28);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0xA0);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0D90); emu_cs = 0x24D0; f__24D0_000D_0039_C17D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_0D90_0008_F38A();
}

/**
 * Decompiled function f__B4DA_0D90_0008_F38A()
 *
 * @name f__B4DA_0D90_0008_F38A
 * @implements B4DA:0D90:0008:F38A ()
 *
 * Called From: B4DA:0D90:0024:8C51
 */
void f__B4DA_0D90_0008_F38A()
{
	emu_addw(&emu_sp, 0x10);
	emu_push(emu_cs); emu_push(0x0D98); emu_cs = 0x2B6C; f__2B6C_0292_0028_3AD7();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_0D98_000B_FB35();
}

/**
 * Decompiled function f__B4DA_0D98_000B_FB35()
 *
 * @name f__B4DA_0D98_000B_FB35
 * @implements B4DA:0D98:000B:FB35 ()
 *
 * Called From: B4DA:0D98:0008:F38A
 */
void f__B4DA_0D98_000B_FB35()
{
	emu_movw(&emu_si, 0x4);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x18), 0x0);
	f__B4DA_0ED8_0002_D0BA(); return;
}

/**
 * Decompiled function f__B4DA_0DA3_0007_92A0()
 *
 * @name f__B4DA_0DA3_0007_92A0
 * @implements B4DA:0DA3:0007:92A0 ()
 *
 * Called From: B4DA:0D57:0046:ED1B
 * Called From: B4DA:0D57:0019:74BF
 * Called From: B4DA:0D57:0040:42E1
 * Called From: B4DA:0D57:0023:9996
 * Called From: B4DA:0D57:0026:659C
 */
void f__B4DA_0DA3_0007_92A0()
{
	emu_orw(&emu_di, emu_di);
	if (!emu_flags.zf) { f__B4DA_0DAA_0022_BFB5(); return; }
	f__B4DA_0E9F_003B_09B8(); return;
}

/**
 * Decompiled function f__B4DA_0DAA_0022_BFB5()
 *
 * @name f__B4DA_0DAA_0022_BFB5
 * @implements B4DA:0DAA:0022:BFB5 ()
 *
 * Called From: B4DA:0DA5:0007:92A0
 */
void f__B4DA_0DAA_0022_BFB5()
{
	emu_movw(&emu_ax, 0x4);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x4);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x28);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x28);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0xA0);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0DCC); emu_cs = 0x24D0; f__24D0_000D_0039_C17D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_0DCC_0010_DDE7();
}

/**
 * Decompiled function f__B4DA_0DCC_0010_DDE7()
 *
 * @name f__B4DA_0DCC_0010_DDE7
 * @implements B4DA:0DCC:0010:DDE7 ()
 *
 * Called From: B4DA:0DCC:0022:BFB5
 */
void f__B4DA_0DCC_0010_DDE7()
{
	emu_addw(&emu_sp, 0x10);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x28));
	emu_decw(&emu_get_memory16(emu_ss, emu_bp, -0x28));
	emu_orw(&emu_ax, emu_ax);
	if (!emu_flags.zf) { f__B4DA_0DDC_0009_522B(); return; }
	f__B4DA_0E5F_0013_2896(); return;
}

/**
 * Decompiled function f__B4DA_0DDC_0009_522B()
 *
 * @name f__B4DA_0DDC_0009_522B
 * @implements B4DA:0DDC:0009:522B ()
 *
 * Called From: B4DA:0DD7:0010:DDE7
 */
void f__B4DA_0DDC_0009_522B()
{
	emu_movw(&emu_ax, 0x4);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0DE5); emu_cs = 0x2598; f__2598_0000_0017_EB80();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_0DE5_001F_7077();
}

/**
 * Decompiled function f__B4DA_0DE5_001F_7077()
 *
 * @name f__B4DA_0DE5_001F_7077
 * @implements B4DA:0DE5:001F:7077 ()
 *
 * Called From: B4DA:0DE5:0009:522B
 */
void f__B4DA_0DE5_001F_7077()
{
	emu_pop(&emu_cx);
	emu_movw(&emu_ax, 0x32);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6D5B));
	emu_movw(&emu_ax, 0x1);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x4);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x10));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_push(emu_cs); emu_push(0x0E04); emu_cs = 0x10E4; f__10E4_1EF1_0040_01F8();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_0E04_0013_390A();
}

/**
 * Decompiled function f__B4DA_0E04_0013_390A()
 *
 * @name f__B4DA_0E04_0013_390A
 * @implements B4DA:0E04:0013:390A ()
 *
 * Called From: B4DA:0E04:001F:7077
 */
void f__B4DA_0E04_0013_390A()
{
	emu_addw(&emu_sp, 0xE);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x18), 0x1);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x10));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_push(emu_cs); emu_push(0x0E17); emu_cs = 0x01F7; f__01F7_39A5_001F_1A5D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_0E17_000B_49F5();
}

/**
 * Decompiled function f__B4DA_0E17_000B_49F5()
 *
 * @name f__B4DA_0E17_000B_49F5
 * @implements B4DA:0E17:000B:49F5 ()
 *
 * Called From: B4DA:0E17:0013:390A
 */
void f__B4DA_0E17_000B_49F5()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_xorw(&emu_dx, emu_dx);
	emu_movb(&emu_cl, 0x2);
	emu_push(emu_cs); emu_push(0x0E22); emu_cs = 0x01F7; f__01F7_058E_0015_CED2();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_0E22_0021_9354();
}

/**
 * Decompiled function f__B4DA_0E22_0021_9354()
 *
 * @name f__B4DA_0E22_0021_9354
 * @implements B4DA:0E22:0021:9354 ()
 *
 * Called From: B4DA:0E22:000B:49F5
 */
void f__B4DA_0E22_0021_9354()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x20), emu_dx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x22), emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x76AE));
	emu_movw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x76AC));
	emu_addw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0x22));
	emu_adcw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x20));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x1C), emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x1E), emu_dx);
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x28), 0x0);
	if (emu_flags.zf) { f__B4DA_0E51_000D_98CF(); return; }
	f__B4DA_0E43_000E_5557(); return;
}

/**
 * Decompiled function f__B4DA_0E43_000E_5557()
 *
 * @name f__B4DA_0E43_000E_5557
 * @implements B4DA:0E43:000E:5557 ()
 *
 * Called From: B4DA:0E41:0021:9354
 * Called From: B4DA:0E4D:000E:5557
 */
void f__B4DA_0E43_000E_5557()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_incw(&emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x0), 0x0);
	if (!emu_flags.zf) { f__B4DA_0E43_000E_5557(); return; }
	f__B4DA_0E56_0008_64F7(); return;
}

/**
 * Decompiled function f__B4DA_0E51_000D_98CF()
 *
 * @name f__B4DA_0E51_000D_98CF
 * @implements B4DA:0E51:000D:98CF ()
 *
 * Called From: B4DA:0E3F:0021:9354
 */
void f__B4DA_0E51_000D_98CF()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x1);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0E5E); emu_cs = 0x2598; f__2598_0000_0017_EB80();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_0E5E_0014_B893();
}

/**
 * Decompiled function f__B4DA_0E56_0008_64F7()
 *
 * @name f__B4DA_0E56_0008_64F7
 * @implements B4DA:0E56:0008:64F7 ()
 *
 * Called From: B4DA:0E4F:000E:5557
 */
void f__B4DA_0E56_0008_64F7()
{
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0E5E); emu_cs = 0x2598; f__2598_0000_0017_EB80();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_0E5E_0014_B893();
}

/**
 * Decompiled function f__B4DA_0E5E_0014_B893()
 *
 * @name f__B4DA_0E5E_0014_B893
 * @implements B4DA:0E5E:0014:B893 ()
 *
 * Called From: B4DA:0E5E:0008:64F7
 * Called From: B4DA:0E5E:000D:98CF
 */
void f__B4DA_0E5E_0014_B893()
{
	emu_pop(&emu_cx);
	emu_movw(&emu_ax, 0x28);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x140);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0E72); emu_cs = 0x2B6C; f__2B6C_0197_00CE_4D32();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_0E72_0023_F42C();
}

/**
 * Decompiled function f__B4DA_0E5F_0013_2896()
 *
 * @name f__B4DA_0E5F_0013_2896
 * @implements B4DA:0E5F:0013:2896 ()
 *
 * Called From: B4DA:0DD9:0010:DDE7
 */
void f__B4DA_0E5F_0013_2896()
{
	emu_movw(&emu_ax, 0x28);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x140);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0E72); emu_cs = 0x2B6C; f__2B6C_0197_00CE_4D32();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_0E72_0023_F42C();
}

/**
 * Decompiled function f__B4DA_0E72_0023_F42C()
 *
 * @name f__B4DA_0E72_0023_F42C
 * @implements B4DA:0E72:0023:F42C ()
 *
 * Called From: B4DA:0E72:0014:B893
 * Called From: B4DA:0E72:0013:2896
 */
void f__B4DA_0E72_0023_F42C()
{
	emu_addw(&emu_sp, 0x8);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x4);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x28);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x28);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0E95); emu_cs = 0x24D0; f__24D0_000D_0039_C17D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_0E95_0008_F38A();
}

/**
 * Decompiled function f__B4DA_0E95_0008_F38A()
 *
 * @name f__B4DA_0E95_0008_F38A
 * @implements B4DA:0E95:0008:F38A ()
 *
 * Called From: B4DA:0E95:0023:F42C
 */
void f__B4DA_0E95_0008_F38A()
{
	emu_addw(&emu_sp, 0x10);
	emu_push(emu_cs); emu_push(0x0E9D); emu_cs = 0x2B6C; f__2B6C_0292_0028_3AD7();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_0E9D_0002_DCBA();
}

/**
 * Decompiled function f__B4DA_0E9D_0002_DCBA()
 *
 * @name f__B4DA_0E9D_0002_DCBA
 * @implements B4DA:0E9D:0002:DCBA ()
 *
 * Called From: B4DA:0E9D:0008:F38A
 */
void f__B4DA_0E9D_0002_DCBA()
{
	f__B4DA_0ED8_0002_D0BA(); return;
}

/**
 * Decompiled function f__B4DA_0E9F_003B_09B8()
 *
 * @name f__B4DA_0E9F_003B_09B8
 * @implements B4DA:0E9F:003B:09B8 ()
 *
 * Called From: B4DA:0DA7:0007:92A0
 */
void f__B4DA_0E9F_003B_09B8()
{
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x18), 0x1);
	if (!emu_flags.zf) { f__B4DA_0ED8_0002_D0BA(); return; }
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x1C));
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0x1E));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x76AE));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__B4DA_0ED8_0002_D0BA(); return; }
	if ((emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x0EB9; emu_last_cs = 0xB4DA; emu_last_ip = 0x0EB1; emu_last_length = 0x003B; emu_last_crc = 0x09B8; emu_call(); return; }
	emu_cmpw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x76AC));
	if (!emu_flags.cf) { f__B4DA_0ED8_0002_D0BA(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x18), 0x2);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x20));
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0x22));
	emu_sarw(&emu_ax, 0x1);
	emu_rcrw(&emu_dx, 0x1);
	emu_movw(&emu_bx, emu_get_memory16(emu_ss, emu_bp, -0x20));
	emu_movw(&emu_cx, emu_get_memory16(emu_ss, emu_bp, -0x22));
	emu_addw(&emu_cx, emu_dx);
	emu_adcw(&emu_bx, emu_ax);
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x1E), emu_cx);
	emu_adcw(&emu_get_memory16(emu_ss, emu_bp, -0x1C), emu_bx);
	f__B4DA_0EFB_0007_D9BE(); return;
}

/**
 * Decompiled function f__B4DA_0ED8_0002_D0BA()
 *
 * @name f__B4DA_0ED8_0002_D0BA
 * @implements B4DA:0ED8:0002:D0BA ()
 *
 * Called From: B4DA:0DA0:000B:FB35
 * Called From: B4DA:0E9D:0002:DCBA
 * Called From: B4DA:0EA3:003B:09B8
 * Called From: B4DA:0EAF:003B:09B8
 * Called From: B4DA:0EB7:003B:09B8
 */
void f__B4DA_0ED8_0002_D0BA()
{
	f__B4DA_0EFB_0007_D9BE(); return;
}

/**
 * Decompiled function f__B4DA_0EDA_0013_5FFA()
 *
 * @name f__B4DA_0EDA_0013_5FFA
 * @implements B4DA:0EDA:0013:5FFA ()
 *
 * Called From: B4DA:0C5C:0007:201D
 */
void f__B4DA_0EDA_0013_5FFA()
{
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x1A), 0x0);
	if (!emu_flags.zf) { f__B4DA_0EE8_0005_92CA(); return; }
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x14));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x16));
	if (!emu_flags.zf) { f__B4DA_0EEB_0002_C73A(); return; }
	emu_movw(&emu_si, 0x5);
	f__B4DA_0EFB_0007_D9BE(); return;
}

/**
 * Decompiled function f__B4DA_0EE8_0005_92CA()
 *
 * @name f__B4DA_0EE8_0005_92CA
 * @implements B4DA:0EE8:0005:92CA ()
 *
 * Called From: B4DA:0EDE:0013:5FFA
 */
void f__B4DA_0EE8_0005_92CA()
{
	emu_movw(&emu_si, 0x5);
	f__B4DA_0EFB_0007_D9BE(); return;
}

/**
 * Decompiled function f__B4DA_0EEB_0002_C73A()
 *
 * @name f__B4DA_0EEB_0002_C73A
 * @implements B4DA:0EEB:0002:C73A ()
 *
 * Called From: B4DA:0EE6:0013:5FFA
 */
void f__B4DA_0EEB_0002_C73A()
{
	f__B4DA_0EFB_0007_D9BE(); return;
}

/**
 * Decompiled function f__B4DA_0EED_000C_BD8D()
 *
 * @name f__B4DA_0EED_000C_BD8D
 * @implements B4DA:0EED:000C:BD8D ()
 *
 * Called From: B4DA:0C5C:0007:201D
 */
void f__B4DA_0EED_000C_BD8D()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x1);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x1);
	f__B4DA_0EFB_0007_D9BE(); return;
}

/**
 * Decompiled function f__B4DA_0EF9_0002_C03A()
 *
 * @name f__B4DA_0EF9_0002_C03A
 * @implements B4DA:0EF9:0002:C03A ()
 *
 * Called From: B4DA:0C57:000A:5BEE
 */
void f__B4DA_0EF9_0002_C03A()
{
	f__B4DA_0EFB_0007_D9BE(); return;
}

/**
 * Decompiled function f__B4DA_0EFB_0007_D9BE()
 *
 * @name f__B4DA_0EFB_0007_D9BE
 * @implements B4DA:0EFB:0007:D9BE ()
 *
 * Called From: B4DA:0C65:0007:13B9
 * Called From: B4DA:0C82:0006:6417
 * Called From: B4DA:0CE4:0009:5DE7
 * Called From: B4DA:0CE4:000C:D607
 * Called From: B4DA:0CE4:0003:1C25
 * Called From: B4DA:0ED8:0002:D0BA
 * Called From: B4DA:0ED8:003B:09B8
 * Called From: B4DA:0EEB:0013:5FFA
 * Called From: B4DA:0EEB:0002:C73A
 * Called From: B4DA:0EEB:0005:92CA
 * Called From: B4DA:0EF7:000C:BD8D
 * Called From: B4DA:0EF9:0002:C03A
 */
void f__B4DA_0EFB_0007_D9BE()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x18));
	emu_push(emu_cs);
	emu_push(0x0F02); f__B4DA_0308_0018_F99F();
	f__B4DA_0F02_000C_6967();
}

/**
 * Decompiled function f__B4DA_0F02_000C_6967()
 *
 * @name f__B4DA_0F02_000C_6967
 * @implements B4DA:0F02:000C:6967 ()
 *
 * Called From: B4DA:0F02:0007:D9BE
 */
void f__B4DA_0F02_000C_6967()
{
	emu_pop(&emu_cx);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (!emu_flags.zf) { f__B4DA_0F0E_0042_4333(); return; }
	/* Unresolved jump */ emu_ip = 0x0F8D; emu_last_cs = 0xB4DA; emu_last_ip = 0x0F0B; emu_last_length = 0x000C; emu_last_crc = 0x6967; emu_call();
}

/**
 * Decompiled function f__B4DA_0F0E_0042_4333()
 *
 * @name f__B4DA_0F0E_0042_4333
 * @implements B4DA:0F0E:0042:4333 ()
 *
 * Called From: B4DA:0F09:000C:6967
 */
void f__B4DA_0F0E_0042_4333()
{
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x76B4));
	emu_orw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x76B6));
	if (!emu_flags.zf) { f__B4DA_0F8D_0030_D5CF(); return; }
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x76B6), 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x76B4), 0x7);
	emu_orw(&emu_si, emu_si);
	if (!emu_flags.zf) { f__B4DA_0F30_0020_A8B8(); return; }
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x10), 0x4);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__B4DA_0F30_0020_A8B8(); return; }
	emu_movw(&emu_si, 0x1);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x4);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x992B));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x0F50); emu_cs = 0x352A; ovl__352A(2);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_0F50_001B_EE44();
}

/**
 * Decompiled function f__B4DA_0F23_002D_D607()
 *
 * @name f__B4DA_0F23_002D_D607
 * @implements B4DA:0F23:002D:D607 ()
 *
 * Called From: B4DA:0F86:003B:FFB1
 */
void f__B4DA_0F23_002D_D607()
{
	emu_orw(&emu_si, emu_si);
	if (!emu_flags.zf) { f__B4DA_0F30_0020_A8B8(); return; }
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x10), 0x4);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x0F30; emu_last_cs = 0xB4DA; emu_last_ip = 0x0F2B; emu_last_length = 0x002D; emu_last_crc = 0xD607; emu_call(); return; }
	emu_movw(&emu_si, 0x1);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x4);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x992B));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x0F50); emu_cs = 0x352A; emu_ip = 0x002A; emu_last_cs = 0xB4DA; emu_last_ip = 0x0F4B; emu_last_length = 0x002D; emu_last_crc = 0xD607; emu_call();
	f__B4DA_0F50_001B_EE44();
}

/**
 * Decompiled function f__B4DA_0F30_0020_A8B8()
 *
 * @name f__B4DA_0F30_0020_A8B8
 * @implements B4DA:0F30:0020:A8B8 ()
 *
 * Called From: B4DA:0F25:0042:4333
 * Called From: B4DA:0F25:002D:D607
 * Called From: B4DA:0F2B:0042:4333
 */
void f__B4DA_0F30_0020_A8B8()
{
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x4);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x992B));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x0F50); emu_cs = 0x352A; ovl__352A(2);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_0F50_001B_EE44();
}

/**
 * Decompiled function f__B4DA_0F50_001B_EE44()
 *
 * @name f__B4DA_0F50_001B_EE44
 * @implements B4DA:0F50:001B:EE44 ()
 *
 * Called From: 261F:01B9:001B:EDBF
 * Called From: B4DA:0F50:0020:A8B8
 * Called From: B4DA:0F50:0042:4333
 */
void f__B4DA_0F50_001B_EE44()
{
	emu_addw(&emu_sp, 0xE);
	emu_orw(&emu_ax, emu_ax);
	if (!emu_flags.zf) { f__B4DA_0F82_003B_FFB1(); return; }
	emu_orw(&emu_si, emu_si);
	if (!emu_flags.zf) { f__B4DA_0F5E_000D_8D69(); return; }
	emu_movw(&emu_si, 0x1);
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp,  0x12), 0x0);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0F6B; emu_last_cs = 0xB4DA; emu_last_ip = 0x0F62; emu_last_length = 0x001B; emu_last_crc = 0xEE44; emu_call(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), 0x0);
	f__B4DA_0F82_003B_FFB1(); return;
}

/**
 * Decompiled function f__B4DA_0F5E_000D_8D69()
 *
 * @name f__B4DA_0F5E_000D_8D69
 * @implements B4DA:0F5E:000D:8D69 ()
 *
 * Called From: B4DA:0F59:001B:EE44
 */
void f__B4DA_0F5E_000D_8D69()
{
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp,  0x12), 0x0);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0F6B; emu_last_cs = 0xB4DA; emu_last_ip = 0x0F62; emu_last_length = 0x000D; emu_last_crc = 0x8D69; emu_call(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), 0x0);
	f__B4DA_0F82_003B_FFB1(); return;
}

/**
 * Decompiled function f__B4DA_0F82_003B_FFB1()
 *
 * @name f__B4DA_0F82_003B_FFB1
 * @implements B4DA:0F82:003B:FFB1 ()
 *
 * Called From: B4DA:0F55:001B:EE44
 * Called From: B4DA:0F69:000D:8D69
 * Called From: B4DA:0F69:001B:EE44
 */
void f__B4DA_0F82_003B_FFB1()
{
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x10), 0x0);
	if (emu_flags.zf) { f__B4DA_0F23_002D_D607(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x1);
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x0);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x1004; emu_last_cs = 0xB4DA; emu_last_ip = 0x0F91; emu_last_length = 0x003B; emu_last_crc = 0xFFB1; emu_call(); return; }
	emu_movw(&emu_ax, 0x31);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x26));
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x8);
	emu_push(emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x992B));
	emu_addw(&emu_ax, 0x3);
	emu_push(emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_addw(&emu_ax, 0x5);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_cs);
	emu_push(0x0FBD); f__B4DA_19E6_0016_C1CB();
	f__B4DA_0FBD_000B_EBA0();
}

/**
 * Decompiled function f__B4DA_0F8D_0030_D5CF()
 *
 * @name f__B4DA_0F8D_0030_D5CF
 * @implements B4DA:0F8D:0030:D5CF ()
 *
 * Called From: B4DA:0F15:0042:4333
 */
void f__B4DA_0F8D_0030_D5CF()
{
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x0);
	if (emu_flags.zf) { f__B4DA_1004_0009_2C84(); return; }
	emu_movw(&emu_ax, 0x31);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x26));
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x8);
	emu_push(emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x992B));
	emu_addw(&emu_ax, 0x3);
	emu_push(emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_addw(&emu_ax, 0x5);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_cs);
	emu_push(0x0FBD); f__B4DA_19E6_0016_C1CB();
	f__B4DA_0FBD_000B_EBA0();
}

/**
 * Decompiled function f__B4DA_0FBD_000B_EBA0()
 *
 * @name f__B4DA_0FBD_000B_EBA0
 * @implements B4DA:0FBD:000B:EBA0 ()
 *
 * Called From: B4DA:0FBD:003B:FFB1
 * Called From: B4DA:0FBD:0030:D5CF
 */
void f__B4DA_0FBD_000B_EBA0()
{
	emu_addw(&emu_sp, 0x12);
	emu_movw(&emu_ax, 0x4);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x0FC8); f__B4DA_0A8E_0025_4AC8();
	f__B4DA_0FC8_000A_A344();
}

/**
 * Decompiled function f__B4DA_0FC8_000A_A344()
 *
 * @name f__B4DA_0FC8_000A_A344
 * @implements B4DA:0FC8:000A:A344 ()
 *
 * Called From: B4DA:0FC8:000B:EBA0
 */
void f__B4DA_0FC8_000A_A344()
{
	emu_pop(&emu_cx);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6D5D));
	emu_push(emu_cs); emu_push(0x0FD2); emu_cs = 0x2642; f__2642_0002_005E_87F6();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_0FD2_0025_F417();
}

/**
 * Decompiled function f__B4DA_0FD2_0025_F417()
 *
 * @name f__B4DA_0FD2_0025_F417
 * @implements B4DA:0FD2:0025:F417 ()
 *
 * Called From: B4DA:0FD2:000A:A344
 */
void f__B4DA_0FD2_0025_F417()
{
	emu_pop(&emu_cx);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x4);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x9931));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x992F));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x992B));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x992D));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x992B));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x992D));
	emu_push(emu_cs); emu_push(0x0FF7); emu_cs = 0x24D0; f__24D0_000D_0039_C17D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_0FF7_0008_C54E();
}

/**
 * Decompiled function f__B4DA_0FF7_0008_C54E()
 *
 * @name f__B4DA_0FF7_0008_C54E
 * @implements B4DA:0FF7:0008:C54E ()
 *
 * Called From: B4DA:0FF7:0025:F417
 */
void f__B4DA_0FF7_0008_C54E()
{
	emu_addw(&emu_sp, 0x10);
	emu_push(emu_cs); emu_push(0x0FFF); emu_cs = 0x2642; f__2642_0069_0008_D517();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_0FFF_000E_103A();
}

/**
 * Decompiled function f__B4DA_0FFF_000E_103A()
 *
 * @name f__B4DA_0FFF_000E_103A
 * @implements B4DA:0FFF:000E:103A ()
 *
 * Called From: B4DA:0FFF:0008:C54E
 */
void f__B4DA_0FFF_000E_103A()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x0);
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x0);
	if (!emu_flags.zf) { f__B4DA_100D_0013_FC06(); return; }
	f__B4DA_0C03_0008_64F7(); return;
}

/**
 * Decompiled function f__B4DA_1004_0009_2C84()
 *
 * @name f__B4DA_1004_0009_2C84
 * @implements B4DA:1004:0009:2C84 ()
 *
 * Called From: B4DA:0C00:0010:8C36
 * Called From: B4DA:0F91:0030:D5CF
 */
void f__B4DA_1004_0009_2C84()
{
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x0);
	if (!emu_flags.zf) { f__B4DA_100D_0013_FC06(); return; }
	f__B4DA_0C03_0008_64F7(); return;
}

/**
 * Decompiled function f__B4DA_100D_0013_FC06()
 *
 * @name f__B4DA_100D_0013_FC06
 * @implements B4DA:100D:0013:FC06 ()
 *
 * Called From: B4DA:1008:000E:103A
 * Called From: B4DA:1008:0009:2C84
 */
void f__B4DA_100D_0013_FC06()
{
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x1022; emu_last_cs = 0xB4DA; emu_last_ip = 0x1013; emu_last_length = 0x0013; emu_last_crc = 0xFC06; emu_call(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x1020); emu_cs = 0x352A; ovl__352A(1);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_1020_000B_6460();
}

/**
 * Decompiled function f__B4DA_1020_000B_6460()
 *
 * @name f__B4DA_1020_000B_6460
 * @implements B4DA:1020:000B:6460 ()
 *
 * Called From: B4DA:1020:0013:FC06
 */
void f__B4DA_1020_000B_6460()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_movw(&emu_ax, 0x4);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x102B); emu_cs = 0x2598; f__2598_0000_0017_EB80();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_102B_0009_3AB2();
}

/**
 * Decompiled function f__B4DA_102B_0009_3AB2()
 *
 * @name f__B4DA_102B_0009_3AB2
 * @implements B4DA:102B:0009:3AB2 ()
 *
 * Called From: B4DA:102B:000B:6460
 */
void f__B4DA_102B_0009_3AB2()
{
	emu_pop(&emu_cx);
	emu_movw(&emu_ax, 0x4);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x1034); f__B4DA_0A8E_0025_4AC8();
	f__B4DA_1034_000A_A344();
}

/**
 * Decompiled function f__B4DA_1034_000A_A344()
 *
 * @name f__B4DA_1034_000A_A344
 * @implements B4DA:1034:000A:A344 ()
 *
 * Called From: B4DA:1034:0009:3AB2
 */
void f__B4DA_1034_000A_A344()
{
	emu_pop(&emu_cx);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6D5D));
	emu_push(emu_cs); emu_push(0x103E); emu_cs = 0x2642; f__2642_0002_005E_87F6();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_103E_0025_F417();
}

/**
 * Decompiled function f__B4DA_103E_0025_F417()
 *
 * @name f__B4DA_103E_0025_F417
 * @implements B4DA:103E:0025:F417 ()
 *
 * Called From: B4DA:103E:000A:A344
 */
void f__B4DA_103E_0025_F417()
{
	emu_pop(&emu_cx);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x4);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x9931));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x992F));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x992B));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x992D));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x992B));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x992D));
	emu_push(emu_cs); emu_push(0x1063); emu_cs = 0x24D0; f__24D0_000D_0039_C17D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_1063_0008_C54E();
}

/**
 * Decompiled function f__B4DA_1063_0008_C54E()
 *
 * @name f__B4DA_1063_0008_C54E
 * @implements B4DA:1063:0008:C54E ()
 *
 * Called From: B4DA:1063:0025:F417
 */
void f__B4DA_1063_0008_C54E()
{
	emu_addw(&emu_sp, 0x10);
	emu_push(emu_cs); emu_push(0x106B); emu_cs = 0x2642; f__2642_0069_0008_D517();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_106B_0008_A894();
}

/**
 * Decompiled function f__B4DA_106B_0008_A894()
 *
 * @name f__B4DA_106B_0008_A894
 * @implements B4DA:106B:0008:A894 ()
 *
 * Called From: B4DA:106B:0008:C54E
 */
void f__B4DA_106B_0008_A894()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_cs); emu_push(0x1073); emu_cs = 0x07AE; f__07AE_0000_00DF_A32C();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_1073_0009_A1B5();
}

/**
 * Decompiled function f__B4DA_1073_0009_A1B5()
 *
 * @name f__B4DA_1073_0009_A1B5
 * @implements B4DA:1073:0009:A1B5 ()
 *
 * Called From: B4DA:1073:0008:A894
 */
void f__B4DA_1073_0009_A1B5()
{
	emu_pop(&emu_cx);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_push(emu_cs); emu_push(0x107C); emu_cs = 0x2598; f__2598_0000_0017_EB80();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_107C_0006_8488();
}

/**
 * Decompiled function f__B4DA_107C_0006_8488()
 *
 * @name f__B4DA_107C_0006_8488
 * @implements B4DA:107C:0006:8488 ()
 *
 * Called From: B4DA:107C:0009:A1B5
 */
void f__B4DA_107C_0006_8488()
{
	emu_pop(&emu_cx);
	emu_push(emu_cs); emu_push(0x1082); emu_cs = 0x29E8; emu_Input_History_Clear();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_1082_0005_B8A6();
}

/**
 * Decompiled function f__B4DA_1082_0005_B8A6()
 *
 * @name f__B4DA_1082_0005_B8A6
 * @implements B4DA:1082:0005:B8A6 ()
 *
 * Called From: B4DA:1082:0006:8488
 */
void f__B4DA_1082_0005_B8A6()
{
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x1A));
	f__B4DA_1087_0006_F7CE(); return;
}

/**
 * Decompiled function f__B4DA_1087_0006_F7CE()
 *
 * @name f__B4DA_1087_0006_F7CE
 * @implements B4DA:1087:0006:F7CE ()
 *
 * Called From: B4DA:1085:0005:B8A6
 */
void f__B4DA_1087_0006_F7CE()
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
 * Decompiled function f__B4DA_1099_0024_C93B()
 *
 * @name f__B4DA_1099_0024_C93B
 * @implements B4DA:1099:0024:C93B ()
 *
 * Called From: 34DA:0039:0005:0000
 */
void f__B4DA_1099_0024_C93B()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subw(&emu_sp, 0x20);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_ax, 0x1);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x2580), emu_ax);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x3C4A), emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x3A38));
	emu_orw(&emu_ax, emu_ax);
	if (emu_flags.zf) { f__B4DA_10BD_000A_5B00(); return; }
	emu_cmpw(&emu_ax, 0x1);
	if (emu_flags.zf) { f__B4DA_10C7_000A_F400(); return; }
	emu_cmpw(&emu_ax, 0x2);
	if (emu_flags.zf) { f__B4DA_10D1_000A_9101(); return; }
	/* Unresolved jump */ emu_ip = 0x10C7; emu_last_cs = 0xB4DA; emu_last_ip = 0x10BB; emu_last_length = 0x0024; emu_last_crc = 0xC93B; emu_call();
}

/**
 * Decompiled function f__B4DA_10BD_000A_5B00()
 *
 * @name f__B4DA_10BD_000A_5B00
 * @implements B4DA:10BD:000A:5B00 ()
 *
 * Called From: B4DA:10AF:0024:C93B
 */
void f__B4DA_10BD_000A_5B00()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x18), emu_ds);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x1A), 0x25A4);
	f__B4DA_10DB_0009_C506(); return;
}

/**
 * Decompiled function f__B4DA_10C7_000A_F400()
 *
 * @name f__B4DA_10C7_000A_F400
 * @implements B4DA:10C7:000A:F400 ()
 *
 * Called From: B4DA:10B4:0024:C93B
 */
void f__B4DA_10C7_000A_F400()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x18), emu_ds);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x1A), 0x25AE);
	f__B4DA_10DB_0009_C506(); return;
}

/**
 * Decompiled function f__B4DA_10D1_000A_9101()
 *
 * @name f__B4DA_10D1_000A_9101
 * @implements B4DA:10D1:000A:9101 ()
 *
 * Called From: B4DA:10B9:0024:C93B
 */
void f__B4DA_10D1_000A_9101()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x18), emu_ds);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x1A), 0x25B8);
	f__B4DA_10DB_0009_C506(); return;
}

/**
 * Decompiled function f__B4DA_10DB_0009_C506()
 *
 * @name f__B4DA_10DB_0009_C506
 * @implements B4DA:10DB:0009:C506 ()
 *
 * Called From: B4DA:10C5:000A:5B00
 * Called From: B4DA:10CF:000A:F400
 * Called From: B4DA:10D9:000A:9101
 */
void f__B4DA_10DB_0009_C506()
{
	emu_movw(&emu_ax, 0x3);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x10E4); emu_cs = 0x252E; f__252E_0001_0018_08B3();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_10E4_0042_2923();
}

/**
 * Decompiled function f__B4DA_10E4_0042_2923()
 *
 * @name f__B4DA_10E4_0042_2923
 * @implements B4DA:10E4:0042:2923 ()
 *
 * Called From: B4DA:10E4:0009:C506
 */
void f__B4DA_10E4_0042_2923()
{
	emu_pop(&emu_cx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_dx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x6CE1));
	emu_movw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x6CDF));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), emu_dx);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x38DE));
	emu_movw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x38DC));
	emu_addw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x38DA));
	emu_addw(&emu_ax, 0xFC18);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_dx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x38E0));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x38DE));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x38DC));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x38DA));
	emu_push(emu_ds);
	emu_movw(&emu_ax, 0x25C3);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1126); emu_cs = 0x0642; f__0642_075D_0011_C164();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_1126_0009_CFD6();
}

/**
 * Decompiled function f__B4DA_1126_0009_CFD6()
 *
 * @name f__B4DA_1126_0009_CFD6
 * @implements B4DA:1126:0009:CFD6 ()
 *
 * Called From: B4DA:1126:0042:2923
 */
void f__B4DA_1126_0009_CFD6()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x112F); emu_cs = 0x253D; f__253D_0000_0013_38F4();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_112F_0020_AE23();
}

/**
 * Decompiled function f__B4DA_112F_0020_AE23()
 *
 * @name f__B4DA_112F_0020_AE23
 * @implements B4DA:112F:0020:AE23 ()
 *
 * Called From: B4DA:112F:0009:CFD6
 */
void f__B4DA_112F_0020_AE23()
{
	emu_addw(&emu_sp, 0xC);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x3A38));
	emu_movw(&emu_dx, 0x3);
	emu_imuluw(&emu_ax, emu_dx);
	emu_incw(&emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x38DC));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x38DA));
	emu_push(emu_cs); emu_push(0x114F); emu_cs = 0x2502; f__2502_0165_0027_41E7();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_114F_000A_5058();
}

/**
 * Decompiled function f__B4DA_114F_000A_5058()
 *
 * @name f__B4DA_114F_000A_5058
 * @implements B4DA:114F:000A:5058 ()
 *
 * Called From: B4DA:114F:0020:AE23
 */
void f__B4DA_114F_000A_5058()
{
	emu_addw(&emu_sp, 0x6);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1159); emu_cs = 0x2502; f__2502_00FA_0009_9EB2();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_1159_0014_EB5F();
}

/**
 * Decompiled function f__B4DA_1159_0014_EB5F()
 *
 * @name f__B4DA_1159_0014_EB5F
 * @implements B4DA:1159:0014:EB5F ()
 *
 * Called From: B4DA:1159:000A:5058
 */
void f__B4DA_1159_0014_EB5F()
{
	emu_addw(&emu_sp, 0x8);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs); emu_push(0x116D); emu_cs = 0x2502; f__2502_0008_0015_FFBD();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_116D_0014_31C1();
}

/**
 * Decompiled function f__B4DA_116D_0014_31C1()
 *
 * @name f__B4DA_116D_0014_31C1
 * @implements B4DA:116D:0014:31C1 ()
 *
 * Called From: B4DA:116D:0014:EB5F
 */
void f__B4DA_116D_0014_31C1()
{
	emu_addw(&emu_sp, 0x8);
	emu_movw(&emu_ax, 0xF);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C38));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C36));
	emu_push(emu_cs); emu_push(0x1181); emu_cs = 0x259E; f__259E_0006_0016_858A();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_1181_0011_BE11();
}

/**
 * Decompiled function f__B4DA_1181_0011_BE11()
 *
 * @name f__B4DA_1181_0011_BE11
 * @implements B4DA:1181:0011:BE11 ()
 *
 * Called From: B4DA:1181:0014:31C1
 */
void f__B4DA_1181_0011_BE11()
{
	emu_addw(&emu_sp, 0x6);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3A38));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x18));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x1A));
	emu_push(emu_cs);
	emu_push(0x1192); f__B4DA_0000_002C_B3C2();
	f__B4DA_1192_0008_FBE0();
}

/**
 * Decompiled function f__B4DA_1192_0008_FBE0()
 *
 * @name f__B4DA_1192_0008_FBE0
 * @implements B4DA:1192:0008:FBE0 ()
 *
 * Called From: B4DA:1192:0011:BE11
 */
void f__B4DA_1192_0008_FBE0()
{
	emu_addw(&emu_sp, 0x6);
	emu_push(emu_cs); emu_push(0x119A); emu_cs = 0x2B6C; f__2B6C_0137_0020_C73F();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_119A_0020_001D();
}

/**
 * Decompiled function f__B4DA_119A_0020_001D()
 *
 * @name f__B4DA_119A_0020_001D
 * @implements B4DA:119A:0020:001D ()
 *
 * Called From: B4DA:119A:0008:FBE0
 */
void f__B4DA_119A_0020_001D()
{
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x2);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0xC8);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x28);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x11BA); emu_cs = 0x24D0; f__24D0_000D_0039_C17D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_11BA_0008_43E5();
}

/**
 * Decompiled function f__B4DA_11BA_0008_43E5()
 *
 * @name f__B4DA_11BA_0008_43E5
 * @implements B4DA:11BA:0008:43E5 ()
 *
 * Called From: B4DA:11BA:0020:001D
 */
void f__B4DA_11BA_0008_43E5()
{
	emu_addw(&emu_sp, 0x10);
	emu_push(emu_cs); emu_push(0x11C2); emu_cs = 0x2B6C; f__2B6C_0169_001E_6939();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_11C2_0011_9942();
}

/**
 * Decompiled function f__B4DA_11C2_0011_9942()
 *
 * @name f__B4DA_11C2_0011_9942
 * @implements B4DA:11C2:0011:9942 ()
 *
 * Called From: B4DA:11C2:0008:43E5
 */
void f__B4DA_11C2_0011_9942()
{
	emu_movw(&emu_ax, 0xF);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C34));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C32));
	emu_push(emu_cs); emu_push(0x11D3); emu_cs = 0x259E; f__259E_0006_0016_858A();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_11D3_0023_09B4();
}

/**
 * Decompiled function f__B4DA_11D3_0023_09B4()
 *
 * @name f__B4DA_11D3_0023_09B4
 * @implements B4DA:11D3:0023:09B4 ()
 *
 * Called From: B4DA:11D3:0011:9942
 */
void f__B4DA_11D3_0023_09B4()
{
	emu_addw(&emu_sp, 0x6);
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_movw(&emu_ax, 0x1);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x18));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x1A));
	emu_push(emu_cs);
	emu_push(0x11F6); f__B4DA_0AB8_002A_AAB2();
	f__B4DA_11F6_0019_9D97();
}

/**
 * Decompiled function f__B4DA_11F6_0019_9D97()
 *
 * @name f__B4DA_11F6_0019_9D97
 * @implements B4DA:11F6:0019:9D97 ()
 *
 * Called From: B4DA:11F6:0023:09B4
 */
void f__B4DA_11F6_0019_9D97()
{
	emu_addw(&emu_sp, 0x12);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x38DC));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x38DA));
	emu_push(emu_cs); emu_push(0x120F); emu_cs = 0x2502; f__2502_0165_0027_41E7();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_120F_000A_5058();
}

/**
 * Decompiled function f__B4DA_120F_000A_5058()
 *
 * @name f__B4DA_120F_000A_5058
 * @implements B4DA:120F:000A:5058 ()
 *
 * Called From: B4DA:120F:0019:9D97
 */
void f__B4DA_120F_000A_5058()
{
	emu_addw(&emu_sp, 0x6);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1219); emu_cs = 0x2502; f__2502_00FA_0009_9EB2();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_1219_0014_EB5F();
}

/**
 * Decompiled function f__B4DA_1219_0014_EB5F()
 *
 * @name f__B4DA_1219_0014_EB5F
 * @implements B4DA:1219:0014:EB5F ()
 *
 * Called From: B4DA:1219:000A:5058
 */
void f__B4DA_1219_0014_EB5F()
{
	emu_addw(&emu_sp, 0x8);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs); emu_push(0x122D); emu_cs = 0x2502; f__2502_0008_0015_FFBD();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_122D_0018_9D99();
}

/**
 * Decompiled function f__B4DA_122D_0018_9D99()
 *
 * @name f__B4DA_122D_0018_9D99
 * @implements B4DA:122D:0018:9D99 ()
 *
 * Called From: B4DA:122D:0014:EB5F
 */
void f__B4DA_122D_0018_9D99()
{
	emu_addw(&emu_sp, 0x8);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x12);
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_movw(&emu_ax, 0x25CB);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs); emu_push(0x1245); emu_cs = 0x01F7; f__01F7_3803_001E_AAD4();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_1245_000C_440E();
}

/**
 * Decompiled function f__B4DA_1245_000C_440E()
 *
 * @name f__B4DA_1245_000C_440E
 * @implements B4DA:1245:000C:440E ()
 *
 * Called From: B4DA:1245:0018:9D99
 */
void f__B4DA_1245_000C_440E()
{
	emu_addw(&emu_sp, 0xC);
	emu_movw(&emu_ax, 0x8);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1251); emu_cs = 0x07AE; f__07AE_0000_00DF_A32C();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_1251_000D_69B1();
}

/**
 * Decompiled function f__B4DA_1251_000D_69B1()
 *
 * @name f__B4DA_1251_000D_69B1
 * @implements B4DA:1251:000D:69B1 ()
 *
 * Called From: B4DA:1251:000C:440E
 */
void f__B4DA_1251_000D_69B1()
{
	emu_pop(&emu_cx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x14), emu_ax);
	emu_movw(&emu_ax, 0x4);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x125E); emu_cs = 0x2598; f__2598_0000_0017_EB80();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_125E_000E_1905();
}

/**
 * Decompiled function f__B4DA_125E_000E_1905()
 *
 * @name f__B4DA_125E_000E_1905
 * @implements B4DA:125E:000E:1905 ()
 *
 * Called From: B4DA:125E:000D:69B1
 */
void f__B4DA_125E_000E_1905()
{
	emu_pop(&emu_cx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x16), emu_ax);
	emu_xorw(&emu_di, emu_di);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x20), 0x0);
	f__B4DA_168F_000E_34CE(); return;
}

/**
 * Decompiled function f__B4DA_126C_000D_EA8D()
 *
 * @name f__B4DA_126C_000D_EA8D
 * @implements B4DA:126C:000D:EA8D ()
 *
 * Called From: B4DA:169A:000E:34CE
 * Called From: B4DA:169A:000F:BACE
 */
void f__B4DA_126C_000D_EA8D()
{
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_decw(&emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1279); emu_cs = 0x2537; f__2537_000C_001C_86CB();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_1279_0019_BCF8();
}

/**
 * Decompiled function f__B4DA_1279_0019_BCF8()
 *
 * @name f__B4DA_1279_0019_BCF8
 * @implements B4DA:1279:0019:BCF8 ()
 *
 * Called From: B4DA:1279:000D:EA8D
 */
void f__B4DA_1279_0019_BCF8()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_movw(&emu_si, emu_ax);
	emu_movw(&emu_ax, emu_si);
	emu_movw(&emu_dx, 0x3);
	emu_imuluw(&emu_ax, emu_dx);
	emu_addw(&emu_ax, 0xA);
	emu_movw(&emu_si, emu_ax);
	emu_movw(&emu_ax, 0x8);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1292); emu_cs = 0x07AE; f__07AE_0000_00DF_A32C();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_1292_0018_5919();
}

/**
 * Decompiled function f__B4DA_1292_0018_5919()
 *
 * @name f__B4DA_1292_0018_5919
 * @implements B4DA:1292:0018:5919 ()
 *
 * Called From: B4DA:1292:0019:BCF8
 */
void f__B4DA_1292_0018_5919()
{
	emu_pop(&emu_cx);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_ax, emu_si);
	emu_incw(&emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x38DC));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x38DA));
	emu_push(emu_cs); emu_push(0x12AA); emu_cs = 0x2502; f__2502_0165_0027_41E7();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_12AA_000A_5058();
}

/**
 * Decompiled function f__B4DA_12AA_000A_5058()
 *
 * @name f__B4DA_12AA_000A_5058
 * @implements B4DA:12AA:000A:5058 ()
 *
 * Called From: B4DA:12AA:0018:5919
 */
void f__B4DA_12AA_000A_5058()
{
	emu_addw(&emu_sp, 0x6);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x12B4); emu_cs = 0x2502; f__2502_00FA_0009_9EB2();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_12B4_0014_EB5F();
}

/**
 * Decompiled function f__B4DA_12B4_0014_EB5F()
 *
 * @name f__B4DA_12B4_0014_EB5F
 * @implements B4DA:12B4:0014:EB5F ()
 *
 * Called From: B4DA:12B4:000A:5058
 */
void f__B4DA_12B4_0014_EB5F()
{
	emu_addw(&emu_sp, 0x8);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs); emu_push(0x12C8); emu_cs = 0x2502; f__2502_0008_0015_FFBD();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_12C8_0023_6E82();
}

/**
 * Decompiled function f__B4DA_12C8_0023_6E82()
 *
 * @name f__B4DA_12C8_0023_6E82
 * @implements B4DA:12C8:0023:6E82 ()
 *
 * Called From: B4DA:12C8:0014:EB5F
 */
void f__B4DA_12C8_0023_6E82()
{
	emu_addw(&emu_sp, 0x8);
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs); emu_push(0x12EB); emu_cs = 0x352A; ovl__352A(0);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_12EB_002A_B94B();
}

/**
 * Decompiled function f__B4DA_12EB_002A_B94B()
 *
 * @name f__B4DA_12EB_002A_B94B
 * @implements B4DA:12EB:002A:B94B ()
 *
 * Called From: B4DA:12EB:0023:6E82
 */
void f__B4DA_12EB_002A_B94B()
{
	emu_addw(&emu_sp, 0x12);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x4);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x992B));
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x992D));
	emu_movb(&emu_cl, 0x3);
	emu_shlw(&emu_ax, emu_cl);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x1315); emu_cs = 0x352A; ovl__352A(2);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_1315_000E_1EBD();
}

/**
 * Decompiled function f__B4DA_1315_000E_1EBD()
 *
 * @name f__B4DA_1315_000E_1EBD
 * @implements B4DA:1315:000E:1EBD ()
 *
 * Called From: B4DA:1315:002A:B94B
 */
void f__B4DA_1315_000E_1EBD()
{
	emu_addw(&emu_sp, 0xE);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x1323); emu_cs = 0x352A; ovl__352A(1);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_1323_000A_EA7C();
}

/**
 * Decompiled function f__B4DA_1323_000A_EA7C()
 *
 * @name f__B4DA_1323_000A_EA7C
 * @implements B4DA:1323:000A:EA7C ()
 *
 * Called From: B4DA:1323:000E:1EBD
 */
void f__B4DA_1323_000A_EA7C()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_movw(&emu_ax, 0x4);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x132D); f__B4DA_0A8E_0025_4AC8();
	f__B4DA_132D_000A_A344();
}

/**
 * Decompiled function f__B4DA_132D_000A_A344()
 *
 * @name f__B4DA_132D_000A_A344
 * @implements B4DA:132D:000A:A344 ()
 *
 * Called From: B4DA:132D:000A:EA7C
 */
void f__B4DA_132D_000A_A344()
{
	emu_pop(&emu_cx);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6D5D));
	emu_push(emu_cs); emu_push(0x1337); emu_cs = 0x2642; f__2642_0002_005E_87F6();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_1337_0025_F417();
}

/**
 * Decompiled function f__B4DA_1337_0025_F417()
 *
 * @name f__B4DA_1337_0025_F417
 * @implements B4DA:1337:0025:F417 ()
 *
 * Called From: B4DA:1337:000A:A344
 */
void f__B4DA_1337_0025_F417()
{
	emu_pop(&emu_cx);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x4);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x9931));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x992F));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x992B));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x992D));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x992B));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x992D));
	emu_push(emu_cs); emu_push(0x135C); emu_cs = 0x24D0; f__24D0_000D_0039_C17D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_135C_0008_C54E();
}

/**
 * Decompiled function f__B4DA_135C_0008_C54E()
 *
 * @name f__B4DA_135C_0008_C54E
 * @implements B4DA:135C:0008:C54E ()
 *
 * Called From: B4DA:135C:0025:F417
 */
void f__B4DA_135C_0008_C54E()
{
	emu_addw(&emu_sp, 0x10);
	emu_push(emu_cs); emu_push(0x1364); emu_cs = 0x2642; f__2642_0069_0008_D517();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_1364_0014_149F();
}

/**
 * Decompiled function f__B4DA_1364_0014_149F()
 *
 * @name f__B4DA_1364_0014_149F
 * @implements B4DA:1364:0014:149F ()
 *
 * Called From: B4DA:1364:0008:C54E
 */
void f__B4DA_1364_0014_149F()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_si);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x38DC));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x38DA));
	emu_push(emu_cs); emu_push(0x1378); emu_cs = 0x2502; f__2502_0165_0027_41E7();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_1378_000A_5058();
}

/**
 * Decompiled function f__B4DA_1378_000A_5058()
 *
 * @name f__B4DA_1378_000A_5058
 * @implements B4DA:1378:000A:5058 ()
 *
 * Called From: B4DA:1378:0014:149F
 */
void f__B4DA_1378_000A_5058()
{
	emu_addw(&emu_sp, 0x6);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1382); emu_cs = 0x2502; f__2502_00FA_0009_9EB2();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_1382_0014_EB5F();
}

/**
 * Decompiled function f__B4DA_1382_0014_EB5F()
 *
 * @name f__B4DA_1382_0014_EB5F
 * @implements B4DA:1382:0014:EB5F ()
 *
 * Called From: B4DA:1382:000A:5058
 */
void f__B4DA_1382_0014_EB5F()
{
	emu_addw(&emu_sp, 0x8);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs); emu_push(0x1396); emu_cs = 0x2502; f__2502_0008_0015_FFBD();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_1396_000E_38B5();
}

/**
 * Decompiled function f__B4DA_1396_000E_38B5()
 *
 * @name f__B4DA_1396_000E_38B5
 * @implements B4DA:1396:000E:38B5 ()
 *
 * Called From: B4DA:1396:0014:EB5F
 */
void f__B4DA_1396_000E_38B5()
{
	emu_addw(&emu_sp, 0x8);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs);
	emu_push(0x13A4); f__B4DA_176C_000F_12AD();
	f__B4DA_13A4_000D_BCD8();
}

/**
 * Decompiled function f__B4DA_13A4_000D_BCD8()
 *
 * @name f__B4DA_13A4_000D_BCD8
 * @implements B4DA:13A4:000D:BCD8 ()
 *
 * Called From: B4DA:13A4:000E:38B5
 */
void f__B4DA_13A4_000D_BCD8()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs); emu_push(0x13B1); emu_cs = 0x01F7; f__01F7_39A5_001F_1A5D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_13B1_000B_49F5();
}

/**
 * Decompiled function f__B4DA_13B1_000B_49F5()
 *
 * @name f__B4DA_13B1_000B_49F5
 * @implements B4DA:13B1:000B:49F5 ()
 *
 * Called From: B4DA:13B1:000D:BCD8
 */
void f__B4DA_13B1_000B_49F5()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_xorw(&emu_dx, emu_dx);
	emu_movb(&emu_cl, 0x2);
	emu_push(emu_cs); emu_push(0x13BC); emu_cs = 0x01F7; f__01F7_058E_0015_CED2();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_13BC_001D_52B6();
}

/**
 * Decompiled function f__B4DA_13BC_001D_52B6()
 *
 * @name f__B4DA_13BC_001D_52B6
 * @implements B4DA:13BC:001D:52B6 ()
 *
 * Called From: B4DA:13BC:000B:49F5
 */
void f__B4DA_13BC_001D_52B6()
{
	emu_movw(&emu_bx, emu_get_memory16(emu_ds, 0x00, 0x76AE));
	emu_movw(&emu_cx, emu_get_memory16(emu_ds, 0x00, 0x76AC));
	emu_addw(&emu_cx, emu_ax);
	emu_adcw(&emu_bx, emu_dx);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x2584), emu_bx);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x2582), emu_cx);
	emu_movw(&emu_ax, 0x9);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x13D9); emu_cs = 0x07AE; f__07AE_0000_00DF_A32C();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_13D9_0006_0569();
}

/**
 * Decompiled function f__B4DA_13D9_0006_0569()
 *
 * @name f__B4DA_13D9_0006_0569
 * @implements B4DA:13D9:0006:0569 ()
 *
 * Called From: B4DA:13D9:001D:52B6
 */
void f__B4DA_13D9_0006_0569()
{
	emu_pop(&emu_cx);
	emu_push(emu_cs); emu_push(0x13DF); emu_cs = 0x2B6C; f__2B6C_0137_0020_C73F();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_13DF_002C_2B53();
}

/**
 * Decompiled function f__B4DA_13DF_002C_2B53()
 *
 * @name f__B4DA_13DF_002C_2B53
 * @implements B4DA:13DF:002C:2B53 ()
 *
 * Called From: B4DA:13DF:0006:0569
 */
void f__B4DA_13DF_002C_2B53()
{
	emu_movw(&emu_ax, 0x4);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x9931));
	emu_addw(&emu_ax, 0x10);
	emu_push(emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x992F));
	emu_addw(&emu_ax, 0x2);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x992B));
	emu_subw(&emu_ax, 0x8);
	emu_push(emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x992D));
	emu_decw(&emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x140B); emu_cs = 0x24D0; f__24D0_000D_0039_C17D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_140B_0008_43E5();
}

/**
 * Decompiled function f__B4DA_140B_0008_43E5()
 *
 * @name f__B4DA_140B_0008_43E5
 * @implements B4DA:140B:0008:43E5 ()
 *
 * Called From: B4DA:140B:002C:2B53
 */
void f__B4DA_140B_0008_43E5()
{
	emu_addw(&emu_sp, 0x10);
	emu_push(emu_cs); emu_push(0x1413); emu_cs = 0x2B6C; f__2B6C_0169_001E_6939();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_1413_0008_64F7();
}

/**
 * Decompiled function f__B4DA_1413_0008_64F7()
 *
 * @name f__B4DA_1413_0008_64F7
 * @implements B4DA:1413:0008:64F7 ()
 *
 * Called From: B4DA:1413:0008:43E5
 */
void f__B4DA_1413_0008_64F7()
{
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x141B); emu_cs = 0x2598; f__2598_0000_0017_EB80();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_141B_0006_0569();
}

/**
 * Decompiled function f__B4DA_141B_0006_0569()
 *
 * @name f__B4DA_141B_0006_0569
 * @implements B4DA:141B:0006:0569 ()
 *
 * Called From: B4DA:141B:0008:64F7
 */
void f__B4DA_141B_0006_0569()
{
	emu_pop(&emu_cx);
	emu_push(emu_cs); emu_push(0x1421); emu_cs = 0x2B6C; f__2B6C_0137_0020_C73F();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_1421_0031_E430();
}

/**
 * Decompiled function f__B4DA_1421_0031_E430()
 *
 * @name f__B4DA_1421_0031_E430
 * @implements B4DA:1421:0031:E430 ()
 *
 * Called From: B4DA:1421:0006:0569
 */
void f__B4DA_1421_0031_E430()
{
	emu_movw(&emu_ax, 0x1);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x1);
	emu_push(emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x9931));
	emu_addw(&emu_ax, 0xC);
	emu_push(emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x992F));
	emu_movb(&emu_cl, 0x3);
	emu_shlw(&emu_ax, emu_cl);
	emu_addw(&emu_ax, 0xC);
	emu_push(emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x992B));
	emu_subw(&emu_ax, 0x6);
	emu_push(emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x992D));
	emu_movb(&emu_cl, 0x3);
	emu_shlw(&emu_ax, emu_cl);
	emu_subw(&emu_ax, 0x6);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1452); emu_cs = 0x10E4; f__10E4_0008_0048_5BD4();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_1452_0033_28A2();
}

/**
 * Decompiled function f__B4DA_1452_0033_28A2()
 *
 * @name f__B4DA_1452_0033_28A2
 * @implements B4DA:1452:0033:28A2 ()
 *
 * Called From: B4DA:1452:0031:E430
 */
void f__B4DA_1452_0033_28A2()
{
	emu_addw(&emu_sp, 0xC);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x2);
	emu_push(emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x9931));
	emu_addw(&emu_ax, 0x4);
	emu_push(emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x992F));
	emu_movb(&emu_cl, 0x3);
	emu_shlw(&emu_ax, emu_cl);
	emu_addw(&emu_ax, 0x4);
	emu_push(emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x992B));
	emu_subw(&emu_ax, 0x2);
	emu_push(emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x992D));
	emu_movb(&emu_cl, 0x3);
	emu_shlw(&emu_ax, emu_cl);
	emu_subw(&emu_ax, 0x2);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1485); emu_cs = 0x10E4; f__10E4_0008_0048_5BD4();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_1485_0008_33E5();
}

/**
 * Decompiled function f__B4DA_1485_0008_33E5()
 *
 * @name f__B4DA_1485_0008_33E5
 * @implements B4DA:1485:0008:33E5 ()
 *
 * Called From: B4DA:1485:0033:28A2
 */
void f__B4DA_1485_0008_33E5()
{
	emu_addw(&emu_sp, 0xC);
	emu_push(emu_cs); emu_push(0x148D); emu_cs = 0x2B6C; f__2B6C_0169_001E_6939();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_148D_0005_E089();
}

/**
 * Decompiled function f__B4DA_148D_0005_E089()
 *
 * @name f__B4DA_148D_0005_E089
 * @implements B4DA:148D:0005:E089 ()
 *
 * Called From: B4DA:148D:0008:33E5
 */
void f__B4DA_148D_0005_E089()
{
	emu_push(emu_cs); emu_push(0x1492); emu_cs = 0x29E8; emu_Input_History_Clear();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_1492_0020_5F51();
}

/**
 * Decompiled function f__B4DA_1492_0020_5F51()
 *
 * @name f__B4DA_1492_0020_5F51
 * @implements B4DA:1492:0020:5F51 ()
 *
 * Called From: B4DA:1492:0005:E089
 */
void f__B4DA_1492_0020_5F51()
{
	emu_movb(&emu_get_memory8(emu_ds, 0x00, 0x9939), 0x0);
	emu_movw(&emu_ax, 0x22);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x14B2); emu_cs = 0x10E4; f__10E4_1EF1_0040_01F8();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_14B2_0026_4E11();
}

/**
 * Decompiled function f__B4DA_14B2_0026_4E11()
 *
 * @name f__B4DA_14B2_0026_4E11
 * @implements B4DA:14B2:0026:4E11 ()
 *
 * Called From: B4DA:14B2:0020:5F51
 */
void f__B4DA_14B2_0026_4E11()
{
	emu_addw(&emu_sp, 0xE);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x34DA);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x3E);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_movw(&emu_ax, 0x9);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x50);
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_movw(&emu_ax, 0x9939);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x14D8); emu_cs = 0x3527; ovl__3527(0);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_14D8_0008_32A8();
}

/**
 * Decompiled function f__B4DA_14D8_0008_32A8()
 *
 * @name f__B4DA_14D8_0008_32A8
 * @implements B4DA:14D8:0008:32A8 ()
 *
 * Called From: B4DA:14D8:0026:4E11
 */
void f__B4DA_14D8_0008_32A8()
{
	emu_addw(&emu_sp, 0x12);
	emu_push(emu_cs);
	emu_push(0x14E0); f__B4DA_1860_0008_857D();
	f__B4DA_14E0_0005_6168();
}

/**
 * Decompiled function f__B4DA_14E0_0005_6168()
 *
 * @name f__B4DA_14E0_0005_6168
 * @implements B4DA:14E0:0005:6168 ()
 *
 * Called From: B4DA:14E0:0008:32A8
 */
void f__B4DA_14E0_0005_6168()
{
	emu_push(emu_cs); emu_push(0x14E5); emu_cs = 0x2B6C; f__2B6C_0137_0020_C73F();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_14E5_002C_97CE();
}

/**
 * Decompiled function f__B4DA_14E5_002C_97CE()
 *
 * @name f__B4DA_14E5_002C_97CE
 * @implements B4DA:14E5:002C:97CE ()
 *
 * Called From: B4DA:14E5:0005:6168
 */
void f__B4DA_14E5_002C_97CE()
{
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x4);
	emu_push(emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x9931));
	emu_addw(&emu_ax, 0x10);
	emu_push(emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x992F));
	emu_addw(&emu_ax, 0x2);
	emu_push(emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x992B));
	emu_subw(&emu_ax, 0x8);
	emu_push(emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x992D));
	emu_decw(&emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1511); emu_cs = 0x24D0; f__24D0_000D_0039_C17D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_1511_0008_43E5();
}

/**
 * Decompiled function f__B4DA_1511_0008_43E5()
 *
 * @name f__B4DA_1511_0008_43E5
 * @implements B4DA:1511:0008:43E5 ()
 *
 * Called From: B4DA:1511:002C:97CE
 */
void f__B4DA_1511_0008_43E5()
{
	emu_addw(&emu_sp, 0x10);
	emu_push(emu_cs); emu_push(0x1519); emu_cs = 0x2B6C; f__2B6C_0169_001E_6939();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_1519_000A_C6DA();
}

/**
 * Decompiled function f__B4DA_1519_000A_C6DA()
 *
 * @name f__B4DA_1519_000A_C6DA
 * @implements B4DA:1519:000A:C6DA ()
 *
 * Called From: B4DA:1519:0008:43E5
 */
void f__B4DA_1519_000A_C6DA()
{
	emu_push(emu_ds);
	emu_movw(&emu_ax, 0x9939);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x1523); f__B4DA_16F8_001A_D84F();
	f__B4DA_1523_001B_C82E();
}

/**
 * Decompiled function f__B4DA_1523_001B_C82E()
 *
 * @name f__B4DA_1523_001B_C82E
 * @implements B4DA:1523:001B:C82E ()
 *
 * Called From: B4DA:1523:000A:C6DA
 */
void f__B4DA_1523_001B_C82E()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_ax, emu_si);
	emu_addw(&emu_ax, 0x2);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x38DC));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x38DA));
	emu_push(emu_cs); emu_push(0x153E); emu_cs = 0x2502; f__2502_0165_0027_41E7();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_153E_000A_5058();
}

/**
 * Decompiled function f__B4DA_153E_000A_5058()
 *
 * @name f__B4DA_153E_000A_5058
 * @implements B4DA:153E:000A:5058 ()
 *
 * Called From: B4DA:153E:001B:C82E
 */
void f__B4DA_153E_000A_5058()
{
	emu_addw(&emu_sp, 0x6);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1548); emu_cs = 0x2502; f__2502_00FA_0009_9EB2();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_1548_0014_EB5F();
}

/**
 * Decompiled function f__B4DA_1548_0014_EB5F()
 *
 * @name f__B4DA_1548_0014_EB5F
 * @implements B4DA:1548:0014:EB5F ()
 *
 * Called From: B4DA:1548:000A:5058
 */
void f__B4DA_1548_0014_EB5F()
{
	emu_addw(&emu_sp, 0x8);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs); emu_push(0x155C); emu_cs = 0x2502; f__2502_0008_0015_FFBD();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_155C_000E_B9A4();
}

/**
 * Decompiled function f__B4DA_155C_000E_B9A4()
 *
 * @name f__B4DA_155C_000E_B9A4
 * @implements B4DA:155C:000E:B9A4 ()
 *
 * Called From: B4DA:155C:0014:EB5F
 */
void f__B4DA_155C_000E_B9A4()
{
	emu_addw(&emu_sp, 0x8);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs);
	emu_push(0x156A); f__B4DA_16F8_001A_D84F();
	f__B4DA_156A_0012_9005();
}

/**
 * Decompiled function f__B4DA_156A_0012_9005()
 *
 * @name f__B4DA_156A_0012_9005
 * @implements B4DA:156A:0012:9005 ()
 *
 * Called From: B4DA:156A:000E:B9A4
 */
void f__B4DA_156A_0012_9005()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_ds);
	emu_movw(&emu_ax, 0x9939);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs); emu_push(0x157C); emu_cs = 0x01F7; f__01F7_38C6_0030_705A();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	emu_Security_ValidateAnswer();
}

/**
 * Decompiled function emu_Security_ValidateAnswer()
 *
 * @name emu_Security_ValidateAnswer
 * @implements B4DA:157C:0026:46F6 ()
 *
 * Called From: B4DA:157C:0012:9005
 */
void emu_Security_ValidateAnswer()
{
	emu_addw(&emu_sp, 0x8);
	emu_orw(&emu_ax, emu_ax);
	if (emu_flags.zf) { f__B4DA_15C5_001F_F7C7(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x3A38));
	emu_movw(&emu_dx, 0x3);
	emu_imuluw(&emu_ax, emu_dx);
	emu_addw(&emu_ax, 0x3);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x38DC));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x38DA));
	emu_push(emu_cs); emu_push(0x15A2); emu_cs = 0x2502; f__2502_0165_0027_41E7();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_15A2_000A_5058();
}

/**
 * Decompiled function f__B4DA_15A2_000A_5058()
 *
 * @name f__B4DA_15A2_000A_5058
 * @implements B4DA:15A2:000A:5058 ()
 *
 * Called From: B4DA:15A2:0026:46F6
 */
void f__B4DA_15A2_000A_5058()
{
	emu_addw(&emu_sp, 0x6);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x15AC); emu_cs = 0x2502; f__2502_00FA_0009_9EB2();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_15AC_0014_EB5F();
}

/**
 * Decompiled function f__B4DA_15AC_0014_EB5F()
 *
 * @name f__B4DA_15AC_0014_EB5F
 * @implements B4DA:15AC:0014:EB5F ()
 *
 * Called From: B4DA:15AC:000A:5058
 */
void f__B4DA_15AC_0014_EB5F()
{
	emu_addw(&emu_sp, 0x8);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs); emu_push(0x15C0); emu_cs = 0x2502; f__2502_0008_0015_FFBD();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_15C0_0005_A7AE();
}

/**
 * Decompiled function f__B4DA_15C0_0005_A7AE()
 *
 * @name f__B4DA_15C0_0005_A7AE
 * @implements B4DA:15C0:0005:A7AE ()
 *
 * Called From: B4DA:15C0:0014:EB5F
 */
void f__B4DA_15C0_0005_A7AE()
{
	emu_addw(&emu_sp, 0x8);
	f__B4DA_160A_000B_DB18(); return;
}

/**
 * Decompiled function f__B4DA_15C5_001F_F7C7()
 *
 * @name f__B4DA_15C5_001F_F7C7
 * @implements B4DA:15C5:001F:F7C7 ()
 *
 * Called From: B4DA:1581:0026:46F6
 */
void f__B4DA_15C5_001F_F7C7()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x3A38));
	emu_movw(&emu_dx, 0x3);
	emu_imuluw(&emu_ax, emu_dx);
	emu_addw(&emu_ax, 0x2);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x38DC));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x38DA));
	emu_push(emu_cs); emu_push(0x15E4); emu_cs = 0x2502; f__2502_0165_0027_41E7();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_15E4_000A_5058();
}

/**
 * Decompiled function f__B4DA_15E4_000A_5058()
 *
 * @name f__B4DA_15E4_000A_5058
 * @implements B4DA:15E4:000A:5058 ()
 *
 * Called From: B4DA:15E4:001F:F7C7
 */
void f__B4DA_15E4_000A_5058()
{
	emu_addw(&emu_sp, 0x6);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x15EE); emu_cs = 0x2502; f__2502_00FA_0009_9EB2();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_15EE_0014_EB5F();
}

/**
 * Decompiled function f__B4DA_15EE_0014_EB5F()
 *
 * @name f__B4DA_15EE_0014_EB5F
 * @implements B4DA:15EE:0014:EB5F ()
 *
 * Called From: B4DA:15EE:000A:5058
 */
void f__B4DA_15EE_0014_EB5F()
{
	emu_addw(&emu_sp, 0x8);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs); emu_push(0x1602); emu_cs = 0x2502; f__2502_0008_0015_FFBD();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_1602_0013_480E();
}

/**
 * Decompiled function f__B4DA_1602_0013_480E()
 *
 * @name f__B4DA_1602_0013_480E
 * @implements B4DA:1602:0013:480E ()
 *
 * Called From: B4DA:1602:0014:EB5F
 */
void f__B4DA_1602_0013_480E()
{
	emu_addw(&emu_sp, 0x8);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x20), 0x1);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs);
	emu_push(0x1615); f__B4DA_176C_000F_12AD();
	f__B4DA_1615_000D_BCD8();
}

/**
 * Decompiled function f__B4DA_160A_000B_DB18()
 *
 * @name f__B4DA_160A_000B_DB18
 * @implements B4DA:160A:000B:DB18 ()
 *
 * Called From: B4DA:15C3:0005:A7AE
 */
void f__B4DA_160A_000B_DB18()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs);
	emu_push(0x1615); f__B4DA_176C_000F_12AD();
	f__B4DA_1615_000D_BCD8();
}

/**
 * Decompiled function f__B4DA_1615_000D_BCD8()
 *
 * @name f__B4DA_1615_000D_BCD8
 * @implements B4DA:1615:000D:BCD8 ()
 *
 * Called From: B4DA:1615:000B:DB18
 * Called From: B4DA:1615:0013:480E
 */
void f__B4DA_1615_000D_BCD8()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs); emu_push(0x1622); emu_cs = 0x01F7; f__01F7_39A5_001F_1A5D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_1622_000B_49F5();
}

/**
 * Decompiled function f__B4DA_1622_000B_49F5()
 *
 * @name f__B4DA_1622_000B_49F5
 * @implements B4DA:1622:000B:49F5 ()
 *
 * Called From: B4DA:1622:000D:BCD8
 */
void f__B4DA_1622_000B_49F5()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_xorw(&emu_dx, emu_dx);
	emu_movb(&emu_cl, 0x2);
	emu_push(emu_cs); emu_push(0x162D); emu_cs = 0x01F7; f__01F7_058E_0015_CED2();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_162D_0017_9D01();
}

/**
 * Decompiled function f__B4DA_162D_0017_9D01()
 *
 * @name f__B4DA_162D_0017_9D01
 * @implements B4DA:162D:0017:9D01 ()
 *
 * Called From: B4DA:162D:000B:49F5
 */
void f__B4DA_162D_0017_9D01()
{
	emu_movw(&emu_bx, emu_get_memory16(emu_ds, 0x00, 0x76AE));
	emu_movw(&emu_cx, emu_get_memory16(emu_ds, 0x00, 0x76AC));
	emu_addw(&emu_cx, emu_ax);
	emu_adcw(&emu_bx, emu_dx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x1C), emu_bx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x1E), emu_cx);
	emu_push(emu_cs); emu_push(0x1644); emu_cs = 0x29E8; emu_Input_History_Clear();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_1644_0002_D0BA();
}

/**
 * Decompiled function f__B4DA_1644_0002_D0BA()
 *
 * @name f__B4DA_1644_0002_D0BA
 * @implements B4DA:1644:0002:D0BA ()
 *
 * Called From: B4DA:1644:0017:9D01
 */
void f__B4DA_1644_0002_D0BA()
{
	f__B4DA_1667_001E_27BA(); return;
}

/**
 * Decompiled function f__B4DA_1646_0019_CAB6()
 *
 * @name f__B4DA_1646_0019_CAB6
 * @implements B4DA:1646:0019:CAB6 ()
 *
 * Called From: B4DA:1687:0009:CDDB
 */
void f__B4DA_1646_0019_CAB6()
{
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x1C));
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0x1E));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x76AE));
	if ((emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x165F; emu_last_cs = 0xB4DA; emu_last_ip = 0x1650; emu_last_length = 0x0019; emu_last_crc = 0xCAB6; emu_call(); return; }
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x165A; emu_last_cs = 0xB4DA; emu_last_ip = 0x1652; emu_last_length = 0x0019; emu_last_crc = 0xCAB6; emu_call(); return; }
	emu_cmpw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x76AC));
	if ((emu_flags.cf || emu_flags.zf)) { /* Unresolved jump */ emu_ip = 0x165F; emu_last_cs = 0xB4DA; emu_last_ip = 0x1658; emu_last_length = 0x0019; emu_last_crc = 0xCAB6; emu_call(); return; }
	emu_movw(&emu_ax, 0x1);
	f__B4DA_1661_0005_09A8(); return;
}

/**
 * Decompiled function f__B4DA_1661_0005_09A8()
 *
 * @name f__B4DA_1661_0005_09A8
 * @implements B4DA:1661:0005:09A8 ()
 *
 * Called From: B4DA:165D:0019:CAB6
 */
void f__B4DA_1661_0005_09A8()
{
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x1666); f__B4DA_0308_0018_F99F();
	f__B4DA_1666_001F_95BA();
}

/**
 * Decompiled function f__B4DA_1666_001F_95BA()
 *
 * @name f__B4DA_1666_001F_95BA
 * @implements B4DA:1666:001F:95BA ()
 *
 * Called From: B4DA:1666:0005:09A8
 */
void f__B4DA_1666_001F_95BA()
{
	emu_pop(&emu_cx);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x76AE));
	emu_movw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x76AC));
	emu_addw(&emu_dx, 0x78);
	emu_adcw(&emu_ax, 0x0);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x1C));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x1689; emu_last_cs = 0xB4DA; emu_last_ip = 0x1677; emu_last_length = 0x001F; emu_last_crc = 0x95BA; emu_call(); return; }
	if ((emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x1680; emu_last_cs = 0xB4DA; emu_last_ip = 0x1679; emu_last_length = 0x001F; emu_last_crc = 0x95BA; emu_call(); return; }
	emu_cmpw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0x1E));
	if (!emu_flags.cf) { f__B4DA_1689_0005_7934(); return; }
	emu_push(emu_cs); emu_push(0x1685); emu_cs = 0x29E8; emu_Input_Keyboard_NextKey();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_1685_0009_CDDB();
}

/**
 * Decompiled function f__B4DA_1667_001E_27BA()
 *
 * @name f__B4DA_1667_001E_27BA
 * @implements B4DA:1667:001E:27BA ()
 *
 * Called From: B4DA:1644:0002:D0BA
 */
void f__B4DA_1667_001E_27BA()
{
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x76AE));
	emu_movw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x76AC));
	emu_addw(&emu_dx, 0x78);
	emu_adcw(&emu_ax, 0x0);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x1C));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x1689; emu_last_cs = 0xB4DA; emu_last_ip = 0x1677; emu_last_length = 0x001E; emu_last_crc = 0x27BA; emu_call(); return; }
	if ((emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x1680; emu_last_cs = 0xB4DA; emu_last_ip = 0x1679; emu_last_length = 0x001E; emu_last_crc = 0x27BA; emu_call(); return; }
	emu_cmpw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0x1E));
	if (!emu_flags.cf) { f__B4DA_1689_0005_7934(); return; }
	emu_push(emu_cs); emu_push(0x1685); emu_cs = 0x29E8; emu_Input_Keyboard_NextKey();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_1685_0009_CDDB();
}

/**
 * Decompiled function f__B4DA_1685_0009_CDDB()
 *
 * @name f__B4DA_1685_0009_CDDB
 * @implements B4DA:1685:0009:CDDB ()
 *
 * Called From: B4DA:1685:001E:27BA
 * Called From: B4DA:1685:001F:95BA
 */
void f__B4DA_1685_0009_CDDB()
{
	emu_orw(&emu_ax, emu_ax);
	if (emu_flags.zf) { f__B4DA_1646_0019_CAB6(); return; }
	emu_push(emu_cs);
	emu_push(0x168E); f__B4DA_1860_0008_857D();
	f__B4DA_168E_000F_BACE();
}

/**
 * Decompiled function f__B4DA_1689_0005_7934()
 *
 * @name f__B4DA_1689_0005_7934
 * @implements B4DA:1689:0005:7934 ()
 *
 * Called From: B4DA:167E:001E:27BA
 * Called From: B4DA:167E:001F:95BA
 */
void f__B4DA_1689_0005_7934()
{
	emu_push(emu_cs);
	emu_push(0x168E); f__B4DA_1860_0008_857D();
	f__B4DA_168E_000F_BACE();
}

/**
 * Decompiled function f__B4DA_168E_000F_BACE()
 *
 * @name f__B4DA_168E_000F_BACE
 * @implements B4DA:168E:000F:BACE ()
 *
 * Called From: B4DA:168E:0005:7934
 * Called From: B4DA:168E:0009:CDDB
 */
void f__B4DA_168E_000F_BACE()
{
	emu_incw(&emu_di);
	emu_cmpw(&emu_di, 0x3);
	if (!(emu_flags.sf != emu_flags.of)) { f__B4DA_169D_0008_C894(); return; }
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x20), 0x0);
	if (!emu_flags.zf) { f__B4DA_169D_0008_C894(); return; }
	f__B4DA_126C_000D_EA8D(); return;
}

/**
 * Decompiled function f__B4DA_168F_000E_34CE()
 *
 * @name f__B4DA_168F_000E_34CE
 * @implements B4DA:168F:000E:34CE ()
 *
 * Called From: B4DA:1269:000E:1905
 */
void f__B4DA_168F_000E_34CE()
{
	emu_cmpw(&emu_di, 0x3);
	if (!(emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x169D; emu_last_cs = 0xB4DA; emu_last_ip = 0x1692; emu_last_length = 0x000E; emu_last_crc = 0x34CE; emu_call(); return; }
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x20), 0x0);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x169D; emu_last_cs = 0xB4DA; emu_last_ip = 0x1698; emu_last_length = 0x000E; emu_last_crc = 0x34CE; emu_call(); return; }
	f__B4DA_126C_000D_EA8D(); return;
}

/**
 * Decompiled function f__B4DA_169D_0008_C894()
 *
 * @name f__B4DA_169D_0008_C894
 * @implements B4DA:169D:0008:C894 ()
 *
 * Called From: B4DA:1692:000F:BACE
 * Called From: B4DA:1698:000F:BACE
 */
void f__B4DA_169D_0008_C894()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_push(emu_cs); emu_push(0x16A5); emu_cs = 0x07AE; f__07AE_0000_00DF_A32C();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_16A5_0009_C1B5();
}

/**
 * Decompiled function f__B4DA_16A5_0009_C1B5()
 *
 * @name f__B4DA_16A5_0009_C1B5
 * @implements B4DA:16A5:0009:C1B5 ()
 *
 * Called From: B4DA:16A5:0008:C894
 */
void f__B4DA_16A5_0009_C1B5()
{
	emu_pop(&emu_cx);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x16));
	emu_push(emu_cs); emu_push(0x16AE); emu_cs = 0x2598; f__2598_0000_0017_EB80();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_16AE_0006_8488();
}

/**
 * Decompiled function f__B4DA_16AE_0006_8488()
 *
 * @name f__B4DA_16AE_0006_8488
 * @implements B4DA:16AE:0006:8488 ()
 *
 * Called From: B4DA:16AE:0009:C1B5
 */
void f__B4DA_16AE_0006_8488()
{
	emu_pop(&emu_cx);
	emu_push(emu_cs); emu_push(0x16B4); emu_cs = 0x29E8; emu_Input_History_Clear();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_16B4_0004_8B0A();
}

/**
 * Decompiled function f__B4DA_16B4_0004_8B0A()
 *
 * @name f__B4DA_16B4_0004_8B0A
 * @implements B4DA:16B4:0004:8B0A ()
 *
 * Called From: B4DA:16B4:0006:8488
 */
void f__B4DA_16B4_0004_8B0A()
{
	emu_push(emu_cs);
	emu_push(0x16B8); f__B4DA_02E0_0023_E297();
	f__B4DA_16B8_000D_68ED();
}

/**
 * Decompiled function f__B4DA_16B8_000D_68ED()
 *
 * @name f__B4DA_16B8_000D_68ED
 * @implements B4DA:16B8:000D:68ED ()
 *
 * Called From: B4DA:16B8:0004:8B0A
 */
void f__B4DA_16B8_000D_68ED()
{
	emu_xorw(&emu_ax, emu_ax);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x3C4A), emu_ax);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x2580), emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x20));
	f__B4DA_16C5_0006_F7CE(); return;
}

/**
 * Decompiled function f__B4DA_16C5_0006_F7CE()
 *
 * @name f__B4DA_16C5_0006_F7CE
 * @implements B4DA:16C5:0006:F7CE ()
 *
 * Called From: B4DA:16C3:000D:68ED
 */
void f__B4DA_16C5_0006_F7CE()
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
 * Decompiled function f__B4DA_16CB_001D_31CC()
 *
 * @name f__B4DA_16CB_001D_31CC
 * @implements B4DA:16CB:001D:31CC ()
 *
 * Called From: 34DA:003E:0005:0000
 */
void f__B4DA_16CB_001D_31CC()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_si);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x2584));
	emu_movw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x2582));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x76AE));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x16E8; emu_last_cs = 0xB4DA; emu_last_ip = 0x16DA; emu_last_length = 0x001D; emu_last_crc = 0x31CC; emu_call(); return; }
	if ((emu_flags.sf != emu_flags.of)) { f__B4DA_16E4_0004_EF79(); return; }
	emu_cmpw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x76AC));
	if (!emu_flags.cf) { f__B4DA_16E8_0008_37B4(); return; }
	emu_xorw(&emu_si, emu_si);
	f__B4DA_16EB_0005_89B6(); return;
}

/**
 * Decompiled function f__B4DA_16E4_0004_EF79()
 *
 * @name f__B4DA_16E4_0004_EF79
 * @implements B4DA:16E4:0004:EF79 ()
 *
 * Called From: B4DA:16DC:001D:31CC
 */
void f__B4DA_16E4_0004_EF79()
{
	emu_xorw(&emu_si, emu_si);
	f__B4DA_16EB_0005_89B6(); return;
}

/**
 * Decompiled function f__B4DA_16E8_0008_37B4()
 *
 * @name f__B4DA_16E8_0008_37B4
 * @implements B4DA:16E8:0008:37B4 ()
 *
 * Called From: B4DA:16E2:001D:31CC
 */
void f__B4DA_16E8_0008_37B4()
{
	emu_movw(&emu_si, 0x1);
	emu_push(emu_si);
	emu_push(emu_cs);
	emu_push(0x16F0); f__B4DA_0308_0018_F99F();
	f__B4DA_16F0_0005_EAF1();
}

/**
 * Decompiled function f__B4DA_16EB_0005_89B6()
 *
 * @name f__B4DA_16EB_0005_89B6
 * @implements B4DA:16EB:0005:89B6 ()
 *
 * Called From: B4DA:16E6:001D:31CC
 * Called From: B4DA:16E6:0004:EF79
 */
void f__B4DA_16EB_0005_89B6()
{
	emu_push(emu_si);
	emu_push(emu_cs);
	emu_push(0x16F0); f__B4DA_0308_0018_F99F();
	f__B4DA_16F0_0005_EAF1();
}

/**
 * Decompiled function f__B4DA_16F0_0005_EAF1()
 *
 * @name f__B4DA_16F0_0005_EAF1
 * @implements B4DA:16F0:0005:EAF1 ()
 *
 * Called From: B4DA:16F0:0008:37B4
 * Called From: B4DA:16F0:0005:89B6
 */
void f__B4DA_16F0_0005_EAF1()
{
	emu_pop(&emu_cx);
	emu_xorw(&emu_ax, emu_ax);
	f__B4DA_16F5_0003_2E57(); return;
}

/**
 * Decompiled function f__B4DA_16F5_0003_2E57()
 *
 * @name f__B4DA_16F5_0003_2E57
 * @implements B4DA:16F5:0003:2E57 ()
 *
 * Called From: B4DA:16F3:0005:EAF1
 */
void f__B4DA_16F5_0003_2E57()
{
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B4DA_16F8_001A_D84F()
 *
 * @name f__B4DA_16F8_001A_D84F
 * @implements B4DA:16F8:001A:D84F ()
 *
 * Called From: B4DA:1520:000A:C6DA
 * Called From: B4DA:1567:000E:B9A4
 */
void f__B4DA_16F8_001A_D84F()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subw(&emu_sp, 0x8);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_dx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_dx);
	f__B4DA_1758_0014_A037(); return;
}

/**
 * Decompiled function f__B4DA_1712_002D_1CF6()
 *
 * @name f__B4DA_1712_002D_1CF6
 * @implements B4DA:1712:002D:1CF6 ()
 *
 * Called From: B4DA:175F:0014:A037
 * Called From: B4DA:175F:002D:F8A4
 * Called From: B4DA:175F:0017:BE28
 * Called From: B4DA:175F:0026:4BF0
 */
void f__B4DA_1712_002D_1CF6()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x0));
	emu_movws(&emu_ax, emu_al);
	emu_movw(&emu_bx, emu_ax);
	emu_testb(&emu_get_memory8(emu_ds, emu_bx, 0x76BD), 0xE);
	if (emu_flags.zf) { f__B4DA_1755_0017_BE28(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x0));
	emu_movws(&emu_ax, emu_al);
	emu_movw(&emu_bx, emu_ax);
	emu_testb(&emu_get_memory8(emu_ds, emu_bx, 0x76BD), 0x8);
	if (emu_flags.zf) { f__B4DA_1746_0026_4BF0(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x0));
	emu_movws(&emu_ax, emu_al);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x173F); emu_cs = 0x01F7; f__01F7_10C3_0010_64C2();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_173F_002D_F8A4();
}

/**
 * Decompiled function f__B4DA_173F_002D_F8A4()
 *
 * @name f__B4DA_173F_002D_F8A4
 * @implements B4DA:173F:002D:F8A4 ()
 *
 * Called From: B4DA:173F:002D:1CF6
 */
void f__B4DA_173F_002D_F8A4()
{
	emu_pop(&emu_cx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_get_memory8(emu_es, emu_bx, 0x0), emu_al);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x0));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movb(&emu_get_memory8(emu_es, emu_bx, 0x0), emu_al);
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x0), 0x0);
	if (!emu_flags.zf) { f__B4DA_1712_002D_1CF6(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movb(&emu_get_memory8(emu_es, emu_bx, 0x0), 0x0);
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B4DA_1746_0026_4BF0()
 *
 * @name f__B4DA_1746_0026_4BF0
 * @implements B4DA:1746:0026:4BF0 ()
 *
 * Called From: B4DA:1730:002D:1CF6
 */
void f__B4DA_1746_0026_4BF0()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x0));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movb(&emu_get_memory8(emu_es, emu_bx, 0x0), emu_al);
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x0), 0x0);
	if (!emu_flags.zf) { f__B4DA_1712_002D_1CF6(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movb(&emu_get_memory8(emu_es, emu_bx, 0x0), 0x0);
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B4DA_1755_0017_BE28()
 *
 * @name f__B4DA_1755_0017_BE28
 * @implements B4DA:1755:0017:BE28 ()
 *
 * Called From: B4DA:1720:002D:1CF6
 */
void f__B4DA_1755_0017_BE28()
{
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x0), 0x0);
	if (!emu_flags.zf) { f__B4DA_1712_002D_1CF6(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movb(&emu_get_memory8(emu_es, emu_bx, 0x0), 0x0);
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B4DA_1758_0014_A037()
 *
 * @name f__B4DA_1758_0014_A037
 * @implements B4DA:1758:0014:A037 ()
 *
 * Called From: B4DA:1710:001A:D84F
 */
void f__B4DA_1758_0014_A037()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x0), 0x0);
	if (!emu_flags.zf) { f__B4DA_1712_002D_1CF6(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movb(&emu_get_memory8(emu_es, emu_bx, 0x0), 0x0);
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B4DA_176C_000F_12AD()
 *
 * @name f__B4DA_176C_000F_12AD
 * @implements B4DA:176C:000F:12AD ()
 *
 * Called From: B4DA:13A1:000E:38B5
 * Called From: B4DA:1612:000B:DB18
 * Called From: B4DA:1612:0013:480E
 */
void f__B4DA_176C_000F_12AD()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subw(&emu_sp, 0x2);
	emu_movw(&emu_ax, 0x4);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x177B); emu_cs = 0x2598; f__2598_0000_0017_EB80();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_177B_0017_EE19();
}

/**
 * Decompiled function f__B4DA_177B_0017_EE19()
 *
 * @name f__B4DA_177B_0017_EE19
 * @implements B4DA:177B:0017:EE19 ()
 *
 * Called From: B4DA:177B:000F:12AD
 */
void f__B4DA_177B_0017_EE19()
{
	emu_pop(&emu_cx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax);
	emu_movw(&emu_ax, 0x28);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x140);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1792); emu_cs = 0x2B6C; f__2B6C_0197_00CE_4D32();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_1792_0023_3E89();
}

/**
 * Decompiled function f__B4DA_1792_0023_3E89()
 *
 * @name f__B4DA_1792_0023_3E89
 * @implements B4DA:1792:0023:3E89 ()
 *
 * Called From: B4DA:1792:0017:EE19
 */
void f__B4DA_1792_0023_3E89()
{
	emu_addw(&emu_sp, 0x8);
	emu_movw(&emu_ax, 0x4);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x28);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x28);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x17B5); emu_cs = 0x24D0; f__24D0_000D_0039_C17D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_17B5_0008_F38A();
}

/**
 * Decompiled function f__B4DA_17B5_0008_F38A()
 *
 * @name f__B4DA_17B5_0008_F38A
 * @implements B4DA:17B5:0008:F38A ()
 *
 * Called From: B4DA:17B5:0023:3E89
 */
void f__B4DA_17B5_0008_F38A()
{
	emu_addw(&emu_sp, 0x10);
	emu_push(emu_cs); emu_push(0x17BD); emu_cs = 0x2B6C; f__2B6C_0292_0028_3AD7();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_17BD_0022_549D();
}

/**
 * Decompiled function f__B4DA_17BD_0022_549D()
 *
 * @name f__B4DA_17BD_0022_549D
 * @implements B4DA:17BD:0022:549D ()
 *
 * Called From: B4DA:17BD:0008:F38A
 */
void f__B4DA_17BD_0022_549D()
{
	emu_movw(&emu_ax, 0x4);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x4);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x28);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x28);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0xA0);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x17DF); emu_cs = 0x24D0; f__24D0_000D_0039_C17D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_17DF_0012_BC2E();
}

/**
 * Decompiled function f__B4DA_17DF_0012_BC2E()
 *
 * @name f__B4DA_17DF_0012_BC2E
 * @implements B4DA:17DF:0012:BC2E ()
 *
 * Called From: B4DA:17DF:0022:549D
 */
void f__B4DA_17DF_0012_BC2E()
{
	emu_addw(&emu_sp, 0x10);
	emu_movw(&emu_ax, 0x130);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x17F1); f__B4DA_1893_001C_7AC4();
	f__B4DA_17F1_0021_AF3F();
}

/**
 * Decompiled function f__B4DA_17F1_0021_AF3F()
 *
 * @name f__B4DA_17F1_0021_AF3F
 * @implements B4DA:17F1:0021:AF3F ()
 *
 * Called From: B4DA:17F1:0012:BC2E
 */
void f__B4DA_17F1_0021_AF3F()
{
	emu_addw(&emu_sp, 0x6);
	emu_movw(&emu_ax, 0x32);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6D5B));
	emu_movw(&emu_ax, 0x1);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x4);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x1812); emu_cs = 0x10E4; f__10E4_1EF1_0040_01F8();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_1812_0016_C2B4();
}

/**
 * Decompiled function f__B4DA_1812_0016_C2B4()
 *
 * @name f__B4DA_1812_0016_C2B4
 * @implements B4DA:1812:0016:C2B4 ()
 *
 * Called From: B4DA:1812:0021:AF3F
 */
void f__B4DA_1812_0016_C2B4()
{
	emu_addw(&emu_sp, 0xE);
	emu_movw(&emu_ax, 0x28);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x140);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1828); emu_cs = 0x2B6C; f__2B6C_0197_00CE_4D32();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_1828_0023_F42C();
}

/**
 * Decompiled function f__B4DA_1828_0023_F42C()
 *
 * @name f__B4DA_1828_0023_F42C
 * @implements B4DA:1828:0023:F42C ()
 *
 * Called From: B4DA:1828:0016:C2B4
 */
void f__B4DA_1828_0023_F42C()
{
	emu_addw(&emu_sp, 0x8);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x4);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x28);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x28);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x184B); emu_cs = 0x24D0; f__24D0_000D_0039_C17D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_184B_0008_F38A();
}

/**
 * Decompiled function f__B4DA_184B_0008_F38A()
 *
 * @name f__B4DA_184B_0008_F38A
 * @implements B4DA:184B:0008:F38A ()
 *
 * Called From: B4DA:184B:0023:F42C
 */
void f__B4DA_184B_0008_F38A()
{
	emu_addw(&emu_sp, 0x10);
	emu_push(emu_cs); emu_push(0x1853); emu_cs = 0x2B6C; f__2B6C_0292_0028_3AD7();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_1853_0008_1199();
}

/**
 * Decompiled function f__B4DA_1853_0008_1199()
 *
 * @name f__B4DA_1853_0008_1199
 * @implements B4DA:1853:0008:1199 ()
 *
 * Called From: B4DA:1853:0008:F38A
 */
void f__B4DA_1853_0008_1199()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_cs); emu_push(0x185B); emu_cs = 0x2598; f__2598_0000_0017_EB80();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_185B_0005_8BF7();
}

/**
 * Decompiled function f__B4DA_185B_0005_8BF7()
 *
 * @name f__B4DA_185B_0005_8BF7
 * @implements B4DA:185B:0005:8BF7 ()
 *
 * Called From: B4DA:185B:0008:1199
 */
void f__B4DA_185B_0005_8BF7()
{
	emu_pop(&emu_cx);
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B4DA_1860_0008_857D()
 *
 * @name f__B4DA_1860_0008_857D
 * @implements B4DA:1860:0008:857D ()
 *
 * Called From: B4DA:14DD:0008:32A8
 * Called From: B4DA:168B:0005:7934
 * Called From: B4DA:168B:0009:CDDB
 */
void f__B4DA_1860_0008_857D()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_cs); emu_push(0x1868); emu_cs = 0x2B6C; f__2B6C_0137_0020_C73F();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_1868_0021_A4DB();
}

/**
 * Decompiled function f__B4DA_1868_0021_A4DB()
 *
 * @name f__B4DA_1868_0021_A4DB
 * @implements B4DA:1868:0021:A4DB ()
 *
 * Called From: B4DA:1868:0008:857D
 */
void f__B4DA_1868_0021_A4DB()
{
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x4);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x28);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x28);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0xA0);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1889); emu_cs = 0x24D0; f__24D0_000D_0039_C17D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_1889_0008_43E5();
}

/**
 * Decompiled function f__B4DA_1889_0008_43E5()
 *
 * @name f__B4DA_1889_0008_43E5
 * @implements B4DA:1889:0008:43E5 ()
 *
 * Called From: B4DA:1889:0021:A4DB
 */
void f__B4DA_1889_0008_43E5()
{
	emu_addw(&emu_sp, 0x10);
	emu_push(emu_cs); emu_push(0x1891); emu_cs = 0x2B6C; f__2B6C_0169_001E_6939();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_1891_0002_2597();
}

/**
 * Decompiled function f__B4DA_1891_0002_2597()
 *
 * @name f__B4DA_1891_0002_2597
 * @implements B4DA:1891:0002:2597 ()
 *
 * Called From: B4DA:1891:0008:43E5
 */
void f__B4DA_1891_0002_2597()
{
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B4DA_1893_001C_7AC4()
 *
 * @name f__B4DA_1893_001C_7AC4
 * @implements B4DA:1893:001C:7AC4 ()
 *
 * Called From: B4DA:0BB1:0012:DA23
 * Called From: B4DA:17EE:0012:BC2E
 */
void f__B4DA_1893_001C_7AC4()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subw(&emu_sp, 0x2);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_xorw(&emu_di, emu_di);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x0);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (!emu_flags.zf) { f__B4DA_18AF_0003_1DA7(); return; }
	emu_xorw(&emu_ax, emu_ax);
	f__B4DA_19E0_0006_F7CE(); return;
}

/**
 * Decompiled function f__B4DA_18AC_0003_5DAC()
 *
 * @name f__B4DA_18AC_0003_5DAC
 * @implements B4DA:18AC:0003:5DAC ()
 *
 * Called From: B4DA:19DD:0006:AC2E
 */
void f__B4DA_18AC_0003_5DAC()
{
	f__B4DA_19E0_0006_F7CE(); return;
}

/**
 * Decompiled function f__B4DA_18AF_0003_1DA7()
 *
 * @name f__B4DA_18AF_0003_1DA7
 * @implements B4DA:18AF:0003:1DA7 ()
 *
 * Called From: B4DA:18A8:001C:7AC4
 */
void f__B4DA_18AF_0003_1DA7()
{
	f__B4DA_19CE_000C_1C10(); return;
}

/**
 * Decompiled function f__B4DA_18B2_0004_E7F9()
 *
 * @name f__B4DA_18B2_0004_E7F9
 * @implements B4DA:18B2:0004:E7F9 ()
 *
 * Called From: B4DA:19D7:000C:1C10
 */
void f__B4DA_18B2_0004_E7F9()
{
	emu_xorw(&emu_si, emu_si);
	f__B4DA_18C8_0039_A880(); return;
}

/**
 * Decompiled function f__B4DA_18B6_000F_1B45()
 *
 * @name f__B4DA_18B6_000F_1B45
 * @implements B4DA:18B6:000F:1B45 ()
 *
 * Called From: B4DA:18F8:0039:A880
 * Called From: B4DA:18F8:003C:F110
 */
void f__B4DA_18B6_000F_1B45()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_incw(&emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x0));
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x18C5); emu_cs = 0x2521; f__2521_000F_0022_6D87();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_18C5_003C_F110();
}

/**
 * Decompiled function f__B4DA_18C5_003C_F110()
 *
 * @name f__B4DA_18C5_003C_F110
 * @implements B4DA:18C5:003C:F110 ()
 *
 * Called From: B4DA:18C5:000F:1B45
 */
void f__B4DA_18C5_003C_F110()
{
	emu_pop(&emu_cx);
	emu_addw(&emu_si, emu_ax);
	emu_cmpw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0xA));
	if (!(emu_flags.sf != emu_flags.of)) { f__B4DA_18FA_0007_D2BA(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x0), 0x2E);
	if (emu_flags.zf) { f__B4DA_18FA_0007_D2BA(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x0), 0x21);
	if (emu_flags.zf) { f__B4DA_18FA_0007_D2BA(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x0), 0x3F);
	if (emu_flags.zf) { f__B4DA_18FA_0007_D2BA(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x0), 0x0);
	if (emu_flags.zf) { f__B4DA_18FA_0007_D2BA(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x0), 0xD);
	if (!emu_flags.zf) { f__B4DA_18B6_000F_1B45(); return; }
	emu_cmpw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0xA));
	if ((emu_flags.sf != emu_flags.of)) { f__B4DA_191C_003E_B159(); return; }
	/* Unresolved jump */ emu_ip = 0x1913; emu_last_cs = 0xB4DA; emu_last_ip = 0x18FF; emu_last_length = 0x003C; emu_last_crc = 0xF110; emu_call();
}

/**
 * Decompiled function f__B4DA_18C8_0039_A880()
 *
 * @name f__B4DA_18C8_0039_A880
 * @implements B4DA:18C8:0039:A880 ()
 *
 * Called From: B4DA:18B4:0004:E7F9
 */
void f__B4DA_18C8_0039_A880()
{
	emu_cmpw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0xA));
	if (!(emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x18FA; emu_last_cs = 0xB4DA; emu_last_ip = 0x18CB; emu_last_length = 0x0039; emu_last_crc = 0xA880; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x0), 0x2E);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x18FA; emu_last_cs = 0xB4DA; emu_last_ip = 0x18D4; emu_last_length = 0x0039; emu_last_crc = 0xA880; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x0), 0x21);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x18FA; emu_last_cs = 0xB4DA; emu_last_ip = 0x18DD; emu_last_length = 0x0039; emu_last_crc = 0xA880; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x0), 0x3F);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x18FA; emu_last_cs = 0xB4DA; emu_last_ip = 0x18E6; emu_last_length = 0x0039; emu_last_crc = 0xA880; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x0), 0x0);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x18FA; emu_last_cs = 0xB4DA; emu_last_ip = 0x18EF; emu_last_length = 0x0039; emu_last_crc = 0xA880; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x0), 0xD);
	if (!emu_flags.zf) { f__B4DA_18B6_000F_1B45(); return; }
	emu_cmpw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0xA));
	if ((emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x191C; emu_last_cs = 0xB4DA; emu_last_ip = 0x18FD; emu_last_length = 0x0039; emu_last_crc = 0xA880; emu_call(); return; }
	/* Unresolved jump */ emu_ip = 0x1913; emu_last_cs = 0xB4DA; emu_last_ip = 0x18FF; emu_last_length = 0x0039; emu_last_crc = 0xA880; emu_call();
}

/**
 * Decompiled function f__B4DA_18FA_0007_D2BA()
 *
 * @name f__B4DA_18FA_0007_D2BA
 * @implements B4DA:18FA:0007:D2BA ()
 *
 * Called From: B4DA:18CB:003C:F110
 * Called From: B4DA:18D4:003C:F110
 * Called From: B4DA:18DD:003C:F110
 * Called From: B4DA:18E6:003C:F110
 * Called From: B4DA:18EF:003C:F110
 */
void f__B4DA_18FA_0007_D2BA()
{
	emu_cmpw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0xA));
	if ((emu_flags.sf != emu_flags.of)) { f__B4DA_191C_003E_B159(); return; }
	f__B4DA_1913_0047_A299(); return;
}

/**
 * Decompiled function f__B4DA_1901_000F_1B44()
 *
 * @name f__B4DA_1901_000F_1B44
 * @implements B4DA:1901:000F:1B44 ()
 *
 * Called From: B4DA:191A:0047:A299
 * Called From: B4DA:191A:004A:C4CC
 */
void f__B4DA_1901_000F_1B44()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_decw(&emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x0));
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1910); emu_cs = 0x2521; f__2521_000F_0022_6D87();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_1910_004A_C4CC();
}

/**
 * Decompiled function f__B4DA_1910_004A_C4CC()
 *
 * @name f__B4DA_1910_004A_C4CC
 * @implements B4DA:1910:004A:C4CC ()
 *
 * Called From: B4DA:1910:000F:1B44
 */
void f__B4DA_1910_004A_C4CC()
{
	emu_pop(&emu_cx);
	emu_subw(&emu_si, emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x0), 0x20);
	if (!emu_flags.zf) { f__B4DA_1901_000F_1B44(); return; }
	emu_incw(&emu_di);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x0), 0x0);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x1953; emu_last_cs = 0xB4DA; emu_last_ip = 0x1924; emu_last_length = 0x004A; emu_last_crc = 0xC4CC; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x0), 0x2E);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x1958; emu_last_cs = 0xB4DA; emu_last_ip = 0x192D; emu_last_length = 0x004A; emu_last_crc = 0xC4CC; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x0), 0x21);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x1958; emu_last_cs = 0xB4DA; emu_last_ip = 0x1936; emu_last_length = 0x004A; emu_last_crc = 0xC4CC; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x0), 0x3F);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x1958; emu_last_cs = 0xB4DA; emu_last_ip = 0x193F; emu_last_length = 0x004A; emu_last_crc = 0xC4CC; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x0), 0x0);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x1958; emu_last_cs = 0xB4DA; emu_last_ip = 0x1948; emu_last_length = 0x004A; emu_last_crc = 0xC4CC; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x0), 0xD);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x1958; emu_last_cs = 0xB4DA; emu_last_ip = 0x1951; emu_last_length = 0x004A; emu_last_crc = 0xC4CC; emu_call(); return; }
	emu_cmpw(&emu_di, 0x3);
	if ((emu_flags.sf != emu_flags.of)) { f__B4DA_19B4_0015_DD53(); return; }
	/* Unresolved jump */ emu_ip = 0x195D; emu_last_cs = 0xB4DA; emu_last_ip = 0x1958; emu_last_length = 0x004A; emu_last_crc = 0xC4CC; emu_call();
}

/**
 * Decompiled function f__B4DA_1913_0047_A299()
 *
 * @name f__B4DA_1913_0047_A299
 * @implements B4DA:1913:0047:A299 ()
 *
 * Called From: B4DA:18FF:0007:D2BA
 */
void f__B4DA_1913_0047_A299()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x0), 0x20);
	if (!emu_flags.zf) { f__B4DA_1901_000F_1B44(); return; }
	emu_incw(&emu_di);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x0), 0x0);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x1953; emu_last_cs = 0xB4DA; emu_last_ip = 0x1924; emu_last_length = 0x0047; emu_last_crc = 0xA299; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x0), 0x2E);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x1958; emu_last_cs = 0xB4DA; emu_last_ip = 0x192D; emu_last_length = 0x0047; emu_last_crc = 0xA299; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x0), 0x21);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x1958; emu_last_cs = 0xB4DA; emu_last_ip = 0x1936; emu_last_length = 0x0047; emu_last_crc = 0xA299; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x0), 0x3F);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x1958; emu_last_cs = 0xB4DA; emu_last_ip = 0x193F; emu_last_length = 0x0047; emu_last_crc = 0xA299; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x0), 0x0);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x1958; emu_last_cs = 0xB4DA; emu_last_ip = 0x1948; emu_last_length = 0x0047; emu_last_crc = 0xA299; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x0), 0xD);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x1958; emu_last_cs = 0xB4DA; emu_last_ip = 0x1951; emu_last_length = 0x0047; emu_last_crc = 0xA299; emu_call(); return; }
	emu_cmpw(&emu_di, 0x3);
	if ((emu_flags.sf != emu_flags.of)) { f__B4DA_19B4_0015_DD53(); return; }
	/* Unresolved jump */ emu_ip = 0x195D; emu_last_cs = 0xB4DA; emu_last_ip = 0x1958; emu_last_length = 0x0047; emu_last_crc = 0xA299; emu_call();
}

/**
 * Decompiled function f__B4DA_191C_003E_B159()
 *
 * @name f__B4DA_191C_003E_B159
 * @implements B4DA:191C:003E:B159 ()
 *
 * Called From: B4DA:18FD:003C:F110
 * Called From: B4DA:18FD:0007:D2BA
 */
void f__B4DA_191C_003E_B159()
{
	emu_incw(&emu_di);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x0), 0x0);
	if (emu_flags.zf) { f__B4DA_1953_0007_F720(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x0), 0x2E);
	if (emu_flags.zf) { f__B4DA_1958_0002_C1BA(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x0), 0x21);
	if (emu_flags.zf) { f__B4DA_1958_0002_C1BA(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x0), 0x3F);
	if (emu_flags.zf) { f__B4DA_1958_0002_C1BA(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x0), 0x0);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x1958; emu_last_cs = 0xB4DA; emu_last_ip = 0x1948; emu_last_length = 0x003E; emu_last_crc = 0xB159; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x0), 0xD);
	if (emu_flags.zf) { f__B4DA_1958_0002_C1BA(); return; }
	emu_cmpw(&emu_di, 0x3);
	if ((emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x19B4; emu_last_cs = 0xB4DA; emu_last_ip = 0x1956; emu_last_length = 0x003E; emu_last_crc = 0xB159; emu_call(); return; }
	/* Unresolved jump */ emu_ip = 0x195D; emu_last_cs = 0xB4DA; emu_last_ip = 0x1958; emu_last_length = 0x003E; emu_last_crc = 0xB159; emu_call();
}

/**
 * Decompiled function f__B4DA_1953_0007_F720()
 *
 * @name f__B4DA_1953_0007_F720
 * @implements B4DA:1953:0007:F720 ()
 *
 * Called From: B4DA:1924:003E:B159
 */
void f__B4DA_1953_0007_F720()
{
	emu_cmpw(&emu_di, 0x3);
	if ((emu_flags.sf != emu_flags.of)) { f__B4DA_19B4_0015_DD53(); return; }
	/* Unresolved jump */ emu_ip = 0x195D; emu_last_cs = 0xB4DA; emu_last_ip = 0x1958; emu_last_length = 0x0007; emu_last_crc = 0xF720; emu_call();
}

/**
 * Decompiled function f__B4DA_1958_0002_C1BA()
 *
 * @name f__B4DA_1958_0002_C1BA
 * @implements B4DA:1958:0002:C1BA ()
 *
 * Called From: B4DA:192D:003E:B159
 * Called From: B4DA:1936:003E:B159
 * Called From: B4DA:193F:003E:B159
 * Called From: B4DA:1951:003E:B159
 */
void f__B4DA_1958_0002_C1BA()
{
	f__B4DA_195D_0057_84AF(); return;
}

/**
 * Decompiled function f__B4DA_195A_005A_BD4C()
 *
 * @name f__B4DA_195A_005A_BD4C
 * @implements B4DA:195A:005A:BD4C ()
 *
 * Called From: B4DA:196D:005A:BD4C
 * Called From: B4DA:1976:0057:84AF
 * Called From: B4DA:197F:0057:84AF
 * Called From: B4DA:1988:0057:84AF
 * Called From: B4DA:199A:0057:84AF
 */
void f__B4DA_195A_005A_BD4C()
{
	emu_incw(&emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x0), 0x0);
	if (emu_flags.zf) { f__B4DA_199C_0018_43B1(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x0), 0x20);
	if (emu_flags.zf) { f__B4DA_195A_005A_BD4C(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x0), 0x2E);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x195A; emu_last_cs = 0xB4DA; emu_last_ip = 0x1976; emu_last_length = 0x005A; emu_last_crc = 0xBD4C; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x0), 0x21);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x195A; emu_last_cs = 0xB4DA; emu_last_ip = 0x197F; emu_last_length = 0x005A; emu_last_crc = 0xBD4C; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x0), 0x3F);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x195A; emu_last_cs = 0xB4DA; emu_last_ip = 0x1988; emu_last_length = 0x005A; emu_last_crc = 0xBD4C; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x0), 0x0);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x195A; emu_last_cs = 0xB4DA; emu_last_ip = 0x1991; emu_last_length = 0x005A; emu_last_crc = 0xBD4C; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x0), 0xD);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x195A; emu_last_cs = 0xB4DA; emu_last_ip = 0x199A; emu_last_length = 0x005A; emu_last_crc = 0xBD4C; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x0), 0x0);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x19AD; emu_last_cs = 0xB4DA; emu_last_ip = 0x19A3; emu_last_length = 0x005A; emu_last_crc = 0xBD4C; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_get_memory8(emu_es, emu_bx, 0xFFFF), 0x0);
	emu_xorw(&emu_di, emu_di);
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x2));
	f__B4DA_19CE_000C_1C10(); return;
}

/**
 * Decompiled function f__B4DA_195D_0057_84AF()
 *
 * @name f__B4DA_195D_0057_84AF
 * @implements B4DA:195D:0057:84AF ()
 *
 * Called From: B4DA:1958:0002:C1BA
 */
void f__B4DA_195D_0057_84AF()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x0), 0x0);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x199C; emu_last_cs = 0xB4DA; emu_last_ip = 0x1964; emu_last_length = 0x0057; emu_last_crc = 0x84AF; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x0), 0x20);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x195A; emu_last_cs = 0xB4DA; emu_last_ip = 0x196D; emu_last_length = 0x0057; emu_last_crc = 0x84AF; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x0), 0x2E);
	if (emu_flags.zf) { f__B4DA_195A_005A_BD4C(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x0), 0x21);
	if (emu_flags.zf) { f__B4DA_195A_005A_BD4C(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x0), 0x3F);
	if (emu_flags.zf) { f__B4DA_195A_005A_BD4C(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x0), 0x0);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x195A; emu_last_cs = 0xB4DA; emu_last_ip = 0x1991; emu_last_length = 0x0057; emu_last_crc = 0x84AF; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x0), 0xD);
	if (emu_flags.zf) { f__B4DA_195A_005A_BD4C(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x0), 0x0);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x19AD; emu_last_cs = 0xB4DA; emu_last_ip = 0x19A3; emu_last_length = 0x0057; emu_last_crc = 0x84AF; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_get_memory8(emu_es, emu_bx, 0xFFFF), 0x0);
	emu_xorw(&emu_di, emu_di);
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x2));
	/* Unresolved jump */ emu_ip = 0x19CE; emu_last_cs = 0xB4DA; emu_last_ip = 0x19B2; emu_last_length = 0x0057; emu_last_crc = 0x84AF; emu_call();
}

/**
 * Decompiled function f__B4DA_199C_0018_43B1()
 *
 * @name f__B4DA_199C_0018_43B1
 * @implements B4DA:199C:0018:43B1 ()
 *
 * Called From: B4DA:1964:005A:BD4C
 */
void f__B4DA_199C_0018_43B1()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x0), 0x0);
	if (emu_flags.zf) { f__B4DA_19AD_0007_4963(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_get_memory8(emu_es, emu_bx, 0xFFFF), 0x0);
	emu_xorw(&emu_di, emu_di);
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x2));
	/* Unresolved jump */ emu_ip = 0x19CE; emu_last_cs = 0xB4DA; emu_last_ip = 0x19B2; emu_last_length = 0x0018; emu_last_crc = 0x43B1; emu_call();
}

/**
 * Decompiled function f__B4DA_19AD_0007_4963()
 *
 * @name f__B4DA_19AD_0007_4963
 * @implements B4DA:19AD:0007:4963 ()
 *
 * Called From: B4DA:19A3:0018:43B1
 */
void f__B4DA_19AD_0007_4963()
{
	emu_xorw(&emu_di, emu_di);
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x2));
	f__B4DA_19CE_000C_1C10(); return;
}

/**
 * Decompiled function f__B4DA_19B4_0015_DD53()
 *
 * @name f__B4DA_19B4_0015_DD53
 * @implements B4DA:19B4:0015:DD53 ()
 *
 * Called From: B4DA:1956:004A:C4CC
 * Called From: B4DA:1956:0047:A299
 * Called From: B4DA:1956:0007:F720
 */
void f__B4DA_19B4_0015_DD53()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x0), 0x0);
	if (emu_flags.zf) { f__B4DA_19C9_0011_671C(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_get_memory8(emu_es, emu_bx, 0x0), 0xD);
	emu_incw(&emu_get_memory16(emu_ss, emu_bp,  0x6));
	f__B4DA_19CE_000C_1C10(); return;
}

/**
 * Decompiled function f__B4DA_19C9_0011_671C()
 *
 * @name f__B4DA_19C9_0011_671C
 * @implements B4DA:19C9:0011:671C ()
 *
 * Called From: B4DA:19BB:0015:DD53
 */
void f__B4DA_19C9_0011_671C()
{
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_xorw(&emu_di, emu_di);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x0), 0x0);
	if (emu_flags.zf) { f__B4DA_19DA_0006_AC2E(); return; }
	/* Unresolved jump */ emu_ip = 0x18B2; emu_last_cs = 0xB4DA; emu_last_ip = 0x19D7; emu_last_length = 0x0011; emu_last_crc = 0x671C; emu_call();
}

/**
 * Decompiled function f__B4DA_19CE_000C_1C10()
 *
 * @name f__B4DA_19CE_000C_1C10
 * @implements B4DA:19CE:000C:1C10 ()
 *
 * Called From: B4DA:18AF:0003:1DA7
 * Called From: B4DA:19B2:005A:BD4C
 * Called From: B4DA:19B2:0007:4963
 * Called From: B4DA:19C7:0015:DD53
 */
void f__B4DA_19CE_000C_1C10()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x0), 0x0);
	if (emu_flags.zf) { f__B4DA_19DA_0006_AC2E(); return; }
	f__B4DA_18B2_0004_E7F9(); return;
}

/**
 * Decompiled function f__B4DA_19DA_0006_AC2E()
 *
 * @name f__B4DA_19DA_0006_AC2E
 * @implements B4DA:19DA:0006:AC2E ()
 *
 * Called From: B4DA:19D5:000C:1C10
 * Called From: B4DA:19D5:0011:671C
 */
void f__B4DA_19DA_0006_AC2E()
{
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	f__B4DA_18AC_0003_5DAC(); return;
}

/**
 * Decompiled function f__B4DA_19E0_0006_F7CE()
 *
 * @name f__B4DA_19E0_0006_F7CE
 * @implements B4DA:19E0:0006:F7CE ()
 *
 * Called From: B4DA:18AC:0003:5DAC
 * Called From: B4DA:18AC:001C:7AC4
 */
void f__B4DA_19E0_0006_F7CE()
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
 * Decompiled function f__B4DA_19E6_0016_C1CB()
 *
 * @name f__B4DA_19E6_0016_C1CB
 * @implements B4DA:19E6:0016:C1CB ()
 *
 * Called From: B4DA:0FBA:003B:FFB1
 * Called From: B4DA:0FBA:0030:D5CF
 */
void f__B4DA_19E6_0016_C1CB()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subw(&emu_sp, 0x2);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_movw(&emu_di, emu_get_memory16(emu_ss, emu_bp,  0x12));
	emu_orw(&emu_di, emu_di);
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__B4DA_19FC_0009_522B(); return; }
	emu_xorw(&emu_ax, emu_ax);
	f__B4DA_1A76_0006_F7CE(); return;
}

/**
 * Decompiled function f__B4DA_19FA_0002_FD3A()
 *
 * @name f__B4DA_19FA_0002_FD3A
 * @implements B4DA:19FA:0002:FD3A ()
 *
 * Called From: B4DA:1A74:0006:F3FB
 */
void f__B4DA_19FA_0002_FD3A()
{
	f__B4DA_1A76_0006_F7CE(); return;
}

/**
 * Decompiled function f__B4DA_19FC_0009_522B()
 *
 * @name f__B4DA_19FC_0009_522B
 * @implements B4DA:19FC:0009:522B ()
 *
 * Called From: B4DA:19F6:0016:C1CB
 */
void f__B4DA_19FC_0009_522B()
{
	emu_movw(&emu_ax, 0x4);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1A05); emu_cs = 0x2598; f__2598_0000_0017_EB80();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_1A05_0006_D737();
}

/**
 * Decompiled function f__B4DA_1A05_0006_D737()
 *
 * @name f__B4DA_1A05_0006_D737
 * @implements B4DA:1A05:0006:D737 ()
 *
 * Called From: B4DA:1A05:0009:522B
 */
void f__B4DA_1A05_0006_D737()
{
	emu_pop(&emu_cx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax);
	f__B4DA_1A1C_000C_B8FA(); return;
}

/**
 * Decompiled function f__B4DA_1A1C_000C_B8FA()
 *
 * @name f__B4DA_1A1C_000C_B8FA
 * @implements B4DA:1A1C:000C:B8FA ()
 *
 * Called From: B4DA:1A09:0006:D737
 */
void f__B4DA_1A1C_000C_B8FA()
{
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x10));
	emu_decw(&emu_get_memory16(emu_ss, emu_bp,  0x10));
	emu_orw(&emu_ax, emu_ax);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x1A0B; emu_last_cs = 0xB4DA; emu_last_ip = 0x1A24; emu_last_length = 0x000C; emu_last_crc = 0xB8FA; emu_call(); return; }
	f__B4DA_1A61_000F_610E(); return;
}

/**
 * Decompiled function f__B4DA_1A28_0022_8A60()
 *
 * @name f__B4DA_1A28_0022_8A60
 * @implements B4DA:1A28:0022:8A60 ()
 *
 * Called From: B4DA:1A66:000F:610E
 * Called From: B4DA:1A66:0015:98C5
 */
void f__B4DA_1A28_0022_8A60()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x0), 0x0);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x1A4D; emu_last_cs = 0xB4DA; emu_last_ip = 0x1A2F; emu_last_length = 0x0022; emu_last_crc = 0x8A60; emu_call(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x16));
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6D5B));
	emu_push(emu_si);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x1A4A); emu_cs = 0x10E4; f__10E4_1EF1_0040_01F8();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_1A4A_0011_649B();
}

/**
 * Decompiled function f__B4DA_1A4A_0011_649B()
 *
 * @name f__B4DA_1A4A_0011_649B
 * @implements B4DA:1A4A:0011:649B ()
 *
 * Called From: B4DA:1A4A:0022:8A60
 */
void f__B4DA_1A4A_0011_649B()
{
	emu_addw(&emu_sp, 0xE);
	emu_addw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x1A5B); emu_cs = 0x01F7; f__01F7_39A5_001F_1A5D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_1A5B_0015_98C5();
}

/**
 * Decompiled function f__B4DA_1A5B_0015_98C5()
 *
 * @name f__B4DA_1A5B_0015_98C5
 * @implements B4DA:1A5B:0015:98C5 ()
 *
 * Called From: B4DA:1A5B:0011:649B
 */
void f__B4DA_1A5B_0015_98C5()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_incw(&emu_ax);
	emu_addw(&emu_get_memory16(emu_ss, emu_bp,  0x6), emu_ax);
	emu_movw(&emu_ax, emu_di);
	emu_decw(&emu_di);
	emu_orw(&emu_ax, emu_ax);
	if (!emu_flags.zf) { f__B4DA_1A28_0022_8A60(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_cs); emu_push(0x1A70); emu_cs = 0x2598; f__2598_0000_0017_EB80();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { ovl__34DA(0xFF); }
	f__B4DA_1A70_0006_F3FB();
}

/**
 * Decompiled function f__B4DA_1A61_000F_610E()
 *
 * @name f__B4DA_1A61_000F_610E
 * @implements B4DA:1A61:000F:610E ()
 *
 * Called From: B4DA:1A26:000C:B8FA
 */
void f__B4DA_1A61_000F_610E()
{
	emu_movw(&emu_ax, emu_di);
	emu_decw(&emu_di);
	emu_orw(&emu_ax, emu_ax);
	if (!emu_flags.zf) { f__B4DA_1A28_0022_8A60(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x1A70); emu_cs = 0x2598; emu_ip = 0x0000; emu_last_cs = 0xB4DA; emu_last_ip = 0x1A6B; emu_last_length = 0x000F; emu_last_crc = 0x610E; emu_call();
	f__B4DA_1A70_0006_F3FB();
}

/**
 * Decompiled function f__B4DA_1A70_0006_F3FB()
 *
 * @name f__B4DA_1A70_0006_F3FB
 * @implements B4DA:1A70:0006:F3FB ()
 *
 * Called From: B4DA:1A70:0015:98C5
 */
void f__B4DA_1A70_0006_F3FB()
{
	emu_pop(&emu_cx);
	emu_movw(&emu_ax, 0x1);
	f__B4DA_19FA_0002_FD3A(); return;
}

/**
 * Decompiled function f__B4DA_1A76_0006_F7CE()
 *
 * @name f__B4DA_1A76_0006_F7CE
 * @implements B4DA:1A76:0006:F7CE ()
 *
 * Called From: B4DA:19FA:0016:C1CB
 * Called From: B4DA:19FA:0002:FD3A
 */
void f__B4DA_1A76_0006_F7CE()
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

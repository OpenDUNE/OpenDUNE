/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__B4DA_0000_002C_B3C2()
 *
 * @name f__B4DA_0000_002C_B3C2
 * @implements B4DA:0000:002C:B3C2 ()
 * @implements B4DA:002C:0021:F997
 * @implements B4DA:004D:001B:4375
 * @implements B4DA:0068:000C:DE03
 * @implements B4DA:0074:0022:FFAD
 * @implements B4DA:0096:0014:D1CA
 * @implements B4DA:0099:0011:F941
 * @implements B4DA:00AA:0033:44E2
 * @implements B4DA:00DD:0036:600D
 * @implements B4DA:0101:0012:9CE5
 * @implements B4DA:0113:0019:EE88
 * @implements B4DA:012C:003C:6B0B
 * @implements B4DA:0168:0036:0A5D
 * @implements B4DA:018C:0012:1CDF
 * @implements B4DA:019E:0019:6692
 * @implements B4DA:01B7:0036:2861
 * @implements B4DA:01ED:006D:4409
 * @implements B4DA:0211:0049:3061
 * @implements B4DA:025A:0023:C3A8
 * @implements B4DA:027D:000E:1049
 * @implements B4DA:028B:002A:115B
 * @implements B4DA:02B5:000E:06BC
 * @implements B4DA:02C3:000B:CB27
 * @implements B4DA:02C5:0009:FD6C
 * @implements B4DA:02CE:0009:91B5
 * @implements B4DA:02D7:0003:CB1A
 * @implements B4DA:02DA:0006:F7CE
 *
 * Called From: 34DA:0020:0005:0000
 * Called From: B4DA:118F:0011:BE11
 */
void f__B4DA_0000_002C_B3C2()
{
l__0000:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x6);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_di = emu_get_memory16(emu_ss, emu_bp,  0xA);
	emu_ax = emu_di;
	emu_dx = 0x1E;
	emu_imuluw(&emu_ax, emu_dx);
	emu_bx = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, emu_bx, 0x37F8));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x0);
	emu_ax = (int8)emu_al;
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x2586;
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x9939;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x002C); emu_cs = 0x01F7; emu_String_sprintf();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }
l__002C:
	emu_addw(&emu_sp, 0xA);
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x998C));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x998A));
	emu_ax = 0x3;
	emu_push(emu_ax);
	emu_ax = 0x3;
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x9939;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x004D); emu_cs = 0x34CA; overlay(0x34CA, 0); f__B4CA_020F_0017_A939();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }
l__004D:
	emu_addw(&emu_sp, 0xE);
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_ax = 0x3;
	emu_push(emu_ax);
	emu_ax = 0x353F;
	emu_es = emu_ax;

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
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }
l__0068:
	emu_addw(&emu_sp, 0x8);
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0074); emu_cs = 0x2598; f__2598_0000_0017_EB80();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }
l__0074:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ax;
	emu_cmpw(&emu_di, 0x5);
	if (emu_di != 0x5) goto l__0099;
	emu_xorw(&emu_ax, emu_ax);
	emu_dx = 0x300;
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C34));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C32));
	emu_push(emu_ds);
	emu_ax = 0x2593;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0096); emu_cs = 0x253D; f__253D_0000_0013_38F4();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }
l__0096:
	emu_addw(&emu_sp, 0xC);
l__0099:
	emu_ax = 0x60;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x7FC6;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x00AA); emu_cs = 0x01F7; emu_Tools_Memset();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }
l__00AA:
	emu_addw(&emu_sp, 0x8);
	emu_bx = emu_di;
	emu_cl = 0x3;
	emu_shlw(&emu_bx, emu_cl);
	emu_ax = 0x2C6C;
	emu_es = emu_ax;
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x0);
	emu_get_memory8(emu_ds, 0x00, 0x8008) = emu_al;
	emu_get_memory8(emu_ds, 0x00, 0x8006) = emu_al;
	emu_bx = emu_di;
	emu_cl = 0x3;
	emu_shlw(&emu_bx, emu_cl);
	emu_ax = 0x2C6C;
	emu_es = emu_ax;
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x1);
	emu_get_memory8(emu_ds, 0x00, 0x8009) = emu_al;
	emu_get_memory8(emu_ds, 0x00, 0x8007) = emu_al;
	emu_xorw(&emu_si, emu_si);
	goto l__0101;
l__00DD:
	emu_bx = emu_si;
	emu_cl = 0x2;
	emu_shlw(&emu_bx, emu_cl);
	emu_ax = 0x2DCE;
	emu_es = emu_ax;
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x47A);
	emu_dx = emu_get_memory16(emu_es, emu_bx, 0x478);
	emu_bx = emu_si;
	emu_cl = 0x2;
	emu_shlw(&emu_bx, emu_cl);
	emu_get_memory16(emu_ds, emu_bx, 0x7FC8) = emu_ax;
	emu_get_memory16(emu_ds, emu_bx, 0x7FC6) = emu_dx;
	emu_incw(&emu_si);
l__0101:
	emu_cmpw(&emu_si, 0x5);
	if ((int16)emu_si < (int16)0x5) goto l__00DD;
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x7FC8));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x7FC6));
	emu_push(emu_cs); emu_push(0x0113); emu_cs = 0x260F; f__260F_003A_0014_CA10();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }
l__0113:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_dl = emu_get_memory8(emu_ds, 0x00, 0x8008);
	emu_addb(&emu_dl, emu_al);
	emu_get_memory8(emu_ds, 0x00, 0x8008) = emu_dl;
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x7FC8));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x7FC6));
	emu_push(emu_cs); emu_push(0x012C); emu_cs = 0x260F; f__260F_0054_0016_0011();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }
l__012C:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_dl = emu_get_memory8(emu_ds, 0x00, 0x8009);
	emu_addb(&emu_dl, emu_al);
	emu_get_memory8(emu_ds, 0x00, 0x8009) = emu_dl;
	emu_bx = emu_di;
	emu_cl = 0x3;
	emu_shlw(&emu_bx, emu_cl);
	emu_ax = 0x2C6C;
	emu_es = emu_ax;
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x2);
	emu_get_memory8(emu_ds, 0x00, 0x800C) = emu_al;
	emu_get_memory8(emu_ds, 0x00, 0x800A) = emu_al;
	emu_bx = emu_di;
	emu_cl = 0x3;
	emu_shlw(&emu_bx, emu_cl);
	emu_ax = 0x2C6C;
	emu_es = emu_ax;
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x3);
	emu_get_memory8(emu_ds, 0x00, 0x800D) = emu_al;
	emu_get_memory8(emu_ds, 0x00, 0x800B) = emu_al;
	emu_xorw(&emu_si, emu_si);
	goto l__018C;
l__0168:
	emu_bx = emu_si;
	emu_cl = 0x2;
	emu_shlw(&emu_bx, emu_cl);
	emu_ax = 0x2DCE;
	emu_es = emu_ax;
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x48E);
	emu_dx = emu_get_memory16(emu_es, emu_bx, 0x48C);
	emu_bx = emu_si;
	emu_cl = 0x2;
	emu_shlw(&emu_bx, emu_cl);
	emu_get_memory16(emu_ds, emu_bx, 0x7FDC) = emu_ax;
	emu_get_memory16(emu_ds, emu_bx, 0x7FDA) = emu_dx;
	emu_incw(&emu_si);
l__018C:
	emu_cmpw(&emu_si, 0x5);
	if ((int16)emu_si < (int16)0x5) goto l__0168;
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x7FDC));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x7FDA));
	emu_push(emu_cs); emu_push(0x019E); emu_cs = 0x260F; f__260F_003A_0014_CA10();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }
l__019E:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_dl = emu_get_memory8(emu_ds, 0x00, 0x800C);
	emu_addb(&emu_dl, emu_al);
	emu_get_memory8(emu_ds, 0x00, 0x800C) = emu_dl;
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x7FDC));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x7FDA));
	emu_push(emu_cs); emu_push(0x01B7); emu_cs = 0x260F; f__260F_0054_0016_0011();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }
l__01B7:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_dl = emu_get_memory8(emu_ds, 0x00, 0x800D);
	emu_addb(&emu_dl, emu_al);
	emu_get_memory8(emu_ds, 0x00, 0x800D) = emu_dl;
	emu_bx = emu_di;
	emu_cl = 0x3;
	emu_shlw(&emu_bx, emu_cl);
	emu_ax = 0x2C6C;
	emu_es = emu_ax;
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x4);
	emu_get_memory8(emu_ds, 0x00, 0x800E) = emu_al;
	emu_bx = emu_di;
	emu_cl = 0x3;
	emu_shlw(&emu_bx, emu_cl);
	emu_ax = 0x2C6C;
	emu_es = emu_ax;
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x5);
	emu_get_memory8(emu_ds, 0x00, 0x800F) = emu_al;
	emu_xorw(&emu_si, emu_si);
	goto l__0211;
l__01ED:
	emu_bx = emu_si;
	emu_cl = 0x2;
	emu_shlw(&emu_bx, emu_cl);
	emu_ax = 0x2DCE;
	emu_es = emu_ax;
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x4A6);
	emu_dx = emu_get_memory16(emu_es, emu_bx, 0x4A4);
	emu_bx = emu_si;
	emu_cl = 0x2;
	emu_shlw(&emu_bx, emu_cl);
	emu_get_memory16(emu_ds, emu_bx, 0x7FF0) = emu_ax;
	emu_get_memory16(emu_ds, emu_bx, 0x7FEE) = emu_dx;
	emu_incw(&emu_si);
l__0211:
	emu_cmpw(&emu_si, 0x4);
	if ((int16)emu_si < (int16)0x4) goto l__01ED;
	emu_bx = emu_di;
	emu_cl = 0x3;
	emu_shlw(&emu_bx, emu_cl);
	emu_ax = 0x2C6C;
	emu_es = emu_ax;
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x6);
	emu_get_memory8(emu_ds, 0x00, 0x8010) = emu_al;
	emu_bx = emu_di;
	emu_cl = 0x3;
	emu_shlw(&emu_bx, emu_cl);
	emu_ax = 0x2C6C;
	emu_es = emu_ax;
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x7);
	emu_get_memory8(emu_ds, 0x00, 0x8011) = emu_al;
	emu_ax = 0x2DCE;
	emu_es = emu_ax;
	emu_ax = emu_get_memory16(emu_es, 0x00, 0x4A2);
	emu_dx = emu_get_memory16(emu_es, 0x00, 0x4A0);
	emu_get_memory16(emu_ds, 0x00, 0x8004) = emu_ax;
	emu_get_memory16(emu_ds, 0x00, 0x8002) = emu_dx;
	emu_ax = 0x8;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x025A); emu_cs = 0x07AE; f__07AE_00E4_000D_9955();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }
l__025A:
	emu_pop(&emu_cx);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_ax == 0) goto l__02C5;
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6CE9));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6CE7));
	emu_ax = 0x5;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x027D); emu_cs = 0x252E; f__252E_0001_0018_08B3();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }
l__027D:
	emu_pop(&emu_cx);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x028B); emu_cs = 0x352A; overlay(0x352A, 0); f__B52A_0000_0019_1617();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }
l__028B:
	emu_addw(&emu_sp, 0x12);
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_ax;
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x992B));
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x992D);
	emu_cl = 0x3;
	emu_shlw(&emu_ax, emu_cl);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_cs); emu_push(0x02B5); emu_cs = 0x352A; overlay(0x352A, 0); f__B52A_04AC_0033_548A();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }
l__02B5:
	emu_addw(&emu_sp, 0xE);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_cs); emu_push(0x02C3); emu_cs = 0x352A; overlay(0x352A, 0); f__B52A_0476_0030_9D41();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }
l__02C3:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
l__02C5:
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6C91));
	emu_push(emu_cs);
	emu_push(0x02CE); f__B4DA_0A8E_0025_4AC8();
l__02CE:
	emu_pop(&emu_cx);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_cs); emu_push(0x02D7); emu_cs = 0x2598; f__2598_0000_0017_EB80();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }
l__02D7:
	emu_pop(&emu_cx);
	goto l__02DA;
l__02DA:
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_sp = emu_bp;
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
 * @implements B4DA:0303:0005:6003
 * @implements B4DA:0306:0002:2597
 *
 * Called From: 34DA:0025:0005:0000
 * Called From: B4DA:16B5:0004:8B0A
 */
void f__B4DA_02E0_0023_E297()
{
l__02E0:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x3A38), 0x5);
	if (emu_get_memory16(emu_ds, 0x00, 0x3A38) != 0x5) goto l__0306;
	emu_xorw(&emu_ax, emu_ax);
	emu_dx = 0x300;
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C34));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C32));
	emu_push(emu_ds);
	emu_ax = 0x259C;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0303); emu_cs = 0x253D; f__253D_0000_0013_38F4();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }
l__0303:
	emu_addw(&emu_sp, 0xC);
l__0306:
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
 * @implements B4DA:0320:000B:A327
 * @implements B4DA:032B:000A:4E8C
 * @implements B4DA:0335:000C:C28A
 * @implements B4DA:0341:000E:8FC1
 * @implements B4DA:034F:0015:93C9
 * @implements B4DA:0351:0013:E79D
 * @implements B4DA:0364:0015:35C1
 * @implements B4DA:036B:000E:8FC9
 * @implements B4DA:0379:0027:78C2
 * @implements B4DA:037B:0025:65D7
 * @implements B4DA:03A0:0017:1E77
 * @implements B4DA:03B7:0017:0D1E
 * @implements B4DA:03CE:0023:B227
 * @implements B4DA:03F1:0008:8B8A
 * @implements B4DA:03F9:000A:3CE1
 * @implements B4DA:0403:000D:B6B1
 * @implements B4DA:0410:000D:8335
 * @implements B4DA:041D:001E:988C
 * @implements B4DA:043B:001D:00AB
 * @implements B4DA:0458:000D:8995
 * @implements B4DA:0465:001E:A48C
 * @implements B4DA:0481:0002:CCBA
 * @implements B4DA:0483:0017:4F59
 * @implements B4DA:049A:0002:C03A
 * @implements B4DA:049C:0009:94F3
 * @implements B4DA:04A5:0010:7A6E
 * @implements B4DA:04B5:000B:238D
 * @implements B4DA:04C0:000C:EF74
 * @implements B4DA:04CC:002C:7547
 * @implements B4DA:04F8:0017:1E73
 * @implements B4DA:050F:0017:0C1A
 * @implements B4DA:0526:0023:B2A5
 * @implements B4DA:0549:0008:8B8A
 * @implements B4DA:0551:0010:870C
 * @implements B4DA:0561:000D:84E5
 * @implements B4DA:0568:0006:565C
 * @implements B4DA:056E:0019:979A
 * @implements B4DA:0587:0009:83A7
 * @implements B4DA:0590:0009:B427
 * @implements B4DA:059B:0003:DDA7
 * @implements B4DA:059E:000E:7C82
 * @implements B4DA:05AC:000E:B5D6
 * @implements B4DA:05BA:0022:75AA
 * @implements B4DA:05BF:001D:D9A0
 * @implements B4DA:05DC:002E:839C
 * @implements B4DA:05F1:0019:9C7F
 * @implements B4DA:060A:000C:4C2F
 * @implements B4DA:0614:0002:CF3A
 * @implements B4DA:0616:0027:AA61
 * @implements B4DA:0634:0009:D11D
 * @implements B4DA:063D:0027:F80D
 * @implements B4DA:0664:0017:1E73
 * @implements B4DA:067B:0017:0C1A
 * @implements B4DA:0692:0023:B2A5
 * @implements B4DA:06B5:0008:8B8A
 * @implements B4DA:06BD:000E:7C82
 * @implements B4DA:06CB:000E:B5D6
 * @implements B4DA:06D9:0022:66D2
 * @implements B4DA:06DE:001D:CAEC
 * @implements B4DA:06FB:0022:1904
 * @implements B4DA:071D:001B:7FD5
 * @implements B4DA:0723:0015:1E4A
 * @implements B4DA:0735:0003:DC0E
 * @implements B4DA:0738:0029:DB1C
 * @implements B4DA:0761:000A:4611
 * @implements B4DA:076B:0021:7FD6
 * @implements B4DA:078C:000C:180F
 * @implements B4DA:0798:0026:9772
 * @implements B4DA:07BE:000C:210F
 * @implements B4DA:07CA:0026:D694
 * @implements B4DA:07F0:000C:0A0F
 * @implements B4DA:07FC:0028:FBE8
 * @implements B4DA:07FE:0026:C904
 * @implements B4DA:0821:0003:DD93
 * @implements B4DA:0824:0010:62F8
 * @implements B4DA:0834:000B:A317
 * @implements B4DA:083F:0028:8918
 * @implements B4DA:0867:000D:9D45
 * @implements B4DA:086E:0006:565C
 * @implements B4DA:0874:001A:CDB0
 * @implements B4DA:088E:0015:B131
 * @implements B4DA:08A3:000C:8F74
 * @implements B4DA:08AF:000E:2141
 * @implements B4DA:08BD:000A:981F
 * @implements B4DA:08C5:0002:F4BA
 * @implements B4DA:08C7:000C:3ABB
 * @implements B4DA:08D3:000C:3CB3
 * @implements B4DA:08D5:000A:3F9B
 * @implements B4DA:08DF:000C:4F76
 * @implements B4DA:08EB:000D:FD08
 * @implements B4DA:08F8:000A:BB8D
 * @implements B4DA:0900:0002:D73A
 * @implements B4DA:0902:0016:B48C
 * @implements B4DA:090C:000C:8F75
 * @implements B4DA:0918:000E:1E41
 * @implements B4DA:0926:000A:AC8D
 * @implements B4DA:092E:0002:C03A
 * @implements B4DA:0930:002F:7B15
 * @implements B4DA:093C:0023:71C3
 * @implements B4DA:0948:0017:CC2E
 * @implements B4DA:095F:0019:E09A
 * @implements B4DA:0978:002C:C19C
 * @implements B4DA:098A:001A:EC38
 * @implements B4DA:09A4:0012:D11F
 * @implements B4DA:09B6:000D:8645
 * @implements B4DA:09BD:0006:565C
 * @implements B4DA:09C3:002D:386D
 * @implements B4DA:09DA:0016:3977
 * @implements B4DA:09EE:0002:C1BA
 * @implements B4DA:09F0:0003:DD02
 * @implements B4DA:09F3:0009:D11D
 * @implements B4DA:09FC:0027:59EF
 * @implements B4DA:0A23:0017:1E7F
 * @implements B4DA:0A3A:0017:0F16
 * @implements B4DA:0A51:0023:B323
 * @implements B4DA:0A74:0008:8B8A
 * @implements B4DA:0A7C:0002:C03A
 * @implements B4DA:0A7E:0006:F7CE
 *
 * Called From: 34DA:002A:0005:0000
 * Called From: B4DA:0EFF:0007:D9BE
 * Called From: B4DA:1663:0005:09A8
 * Called From: B4DA:16ED:0008:37B4
 * Called From: B4DA:16ED:0005:89B6
 */
void f__B4DA_0308_0018_F99F()
{
l__0308:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x6);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x801C);
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x801A);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x76AE));
	if ((int16)emu_ax <= (int16)emu_get_memory16(emu_ds, 0x00, 0x76AE)) goto l__0320;
	goto l__049C;
l__0320:
	if ((emu_flags.sf != emu_flags.of)) goto l__032B;
	emu_cmpw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x76AC));
	if (emu_dx < emu_get_memory16(emu_ds, 0x00, 0x76AC)) goto l__032B;
	goto l__049C;
l__032B:
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x2580), 0x0);
	if (emu_get_memory16(emu_ds, 0x00, 0x2580) == 0x0) goto l__0335;
	goto l__049C;
l__0335:
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x801A);
	emu_orw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x801C));
	if (emu_ax != 0) goto l__0341;
	goto l__03F9;
l__0341:
	emu_di = emu_get_memory16(emu_ds, 0x00, 0x8024);
	emu_orw(&emu_di, emu_di);
	if (!(emu_flags.sf != emu_flags.of)) goto l__034F;
	emu_ax = emu_di;
	emu_negw(&emu_ax, emu_ax);
	goto l__0351;
l__034F:
	emu_ax = emu_di;
l__0351:
	emu_cl = 0x2;
	emu_shlw(&emu_ax, emu_cl);
	emu_bx = emu_ax;
	emu_ax = emu_get_memory16(emu_ds, emu_bx, 0x7FF2);
	emu_orw(&emu_ax, emu_get_memory16(emu_ds, emu_bx, 0x7FF4));
	if (emu_ax == 0) goto l__0364;
	emu_incw(&emu_di);
	goto l__036B;
l__0364:
	emu_ax = emu_di;
	emu_negw(&emu_ax, emu_ax);
	emu_incw(&emu_ax);
	emu_di = emu_ax;
l__036B:
	emu_get_memory16(emu_ds, 0x00, 0x8024) = emu_di;
	emu_orw(&emu_di, emu_di);
	if (!(emu_flags.sf != emu_flags.of)) goto l__0379;
	emu_ax = emu_di;
	emu_negw(&emu_ax, emu_ax);
	goto l__037B;
l__0379:
	emu_ax = emu_di;
l__037B:
	emu_cl = 0x2;
	emu_shlw(&emu_ax, emu_cl);
	emu_bx = emu_ax;
	emu_ax = emu_get_memory16(emu_ds, emu_bx, 0x7FF0);
	emu_dx = emu_get_memory16(emu_ds, emu_bx, 0x7FEE);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_dx;
	emu_al = emu_get_memory8(emu_ds, 0x00, 0x800F);
	emu_ah = 0x0;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x03A0); emu_cs = 0x260F; f__260F_0054_0016_0011();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }
l__03A0:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_pop(&emu_dx);
	emu_addw(&emu_dx, emu_ax);
	emu_push(emu_dx);
	emu_al = emu_get_memory8(emu_ds, 0x00, 0x800E);
	emu_ah = 0x0;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x03B7); emu_cs = 0x260F; f__260F_003A_0014_CA10();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }
l__03B7:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_pop(&emu_dx);
	emu_addw(&emu_dx, emu_ax);
	emu_push(emu_dx);
	emu_al = emu_get_memory8(emu_ds, 0x00, 0x800F);
	emu_ah = 0x0;
	emu_push(emu_ax);
	emu_al = emu_get_memory8(emu_ds, 0x00, 0x800E);
	emu_ah = 0x0;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x03CE); emu_cs = 0x2B6C; f__2B6C_0197_00CE_4D32();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }
l__03CE:
	emu_addw(&emu_sp, 0x8);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_al = emu_get_memory8(emu_ds, 0x00, 0x800F);
	emu_ah = 0x0;
	emu_push(emu_ax);
	emu_al = emu_get_memory8(emu_ds, 0x00, 0x800E);
	emu_ah = 0x0;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x03F1); emu_cs = 0x2903; f__2903_0158_001A_2931();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }
l__03F1:
	emu_addw(&emu_sp, 0xE);
	emu_push(emu_cs); emu_push(0x03F9); emu_cs = 0x2B6C; f__2B6C_0292_0028_3AD7();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }
l__03F9:
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x3A38);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax != 0) goto l__0403;
	goto l__0483;
l__0403:
	emu_cmpw(&emu_ax, 0x1);
	if (emu_ax == 0x1) goto l__0410;
	emu_cmpw(&emu_ax, 0x2);
	if (emu_ax == 0x2) goto l__043B;
	goto l__049A;
l__0410:
	emu_ax = 0x3;
	emu_push(emu_ax);
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x041D); emu_cs = 0x2537; f__2537_000C_001C_86CB();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }
l__041D:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_dx = 0x3C;
	emu_imuluw(&emu_ax, emu_dx);
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x76AE);
	emu_bx = emu_get_memory16(emu_ds, 0x00, 0x76AC);
	emu_addw(&emu_bx, emu_ax);
	emu_adcw(&emu_dx, 0x0);
	emu_get_memory16(emu_ds, 0x00, 0x801C) = emu_dx;
	emu_get_memory16(emu_ds, 0x00, 0x801A) = emu_bx;
	goto l__049C;
l__043B:
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x8024), 0x0);
	if (emu_get_memory16(emu_ds, 0x00, 0x8024) == 0x0) goto l__0458;
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x76AE);
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x76AC);
	emu_addw(&emu_dx, 0x6);
	emu_adcw(&emu_ax, 0x0);
	emu_get_memory16(emu_ds, 0x00, 0x801C) = emu_ax;
	emu_get_memory16(emu_ds, 0x00, 0x801A) = emu_dx;
	goto l__0481;
l__0458:
	emu_ax = 0x19;
	emu_push(emu_ax);
	emu_ax = 0xA;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0465); emu_cs = 0x2537; f__2537_000C_001C_86CB();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }
l__0465:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_dx = 0x3C;
	emu_imuluw(&emu_ax, emu_dx);
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x76AE);
	emu_bx = emu_get_memory16(emu_ds, 0x00, 0x76AC);
	emu_addw(&emu_bx, emu_ax);
	emu_adcw(&emu_dx, 0x0);
	emu_get_memory16(emu_ds, 0x00, 0x801C) = emu_dx;
	emu_get_memory16(emu_ds, 0x00, 0x801A) = emu_bx;
l__0481:
	goto l__049C;
l__0483:
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x76AE);
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x76AC);
	emu_addw(&emu_dx, 0x4650);
	emu_adcw(&emu_ax, 0x0);
	emu_get_memory16(emu_ds, 0x00, 0x801C) = emu_ax;
	emu_get_memory16(emu_ds, 0x00, 0x801A) = emu_dx;
	goto l__049C;
l__049A:
	goto l__049C;
l__049C:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp,  0x6), 0x1);
	if (emu_get_memory16(emu_ss, emu_bp,  0x6) == 0x1) goto l__04A5;
	goto l__059E;
l__04A5:
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x8018);
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x8016);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x76AE));
	if ((int16)emu_ax <= (int16)emu_get_memory16(emu_ds, 0x00, 0x76AE)) goto l__04B5;
	goto l__059B;
l__04B5:
	if ((emu_flags.sf != emu_flags.of)) goto l__04C0;
	emu_cmpw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x76AC));
	if (emu_dx < emu_get_memory16(emu_ds, 0x00, 0x76AC)) goto l__04C0;
	goto l__059B;
l__04C0:
	emu_ax = 0x4;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x04CC); emu_cs = 0x2537; f__2537_000C_001C_86CB();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }
l__04CC:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ds, 0x00, 0x8022) = emu_ax;
	emu_bx = emu_get_memory16(emu_ds, 0x00, 0x8022);
	emu_cl = 0x2;
	emu_shlw(&emu_bx, emu_cl);
	emu_ax = emu_get_memory16(emu_ds, emu_bx, 0x7FDC);
	emu_dx = emu_get_memory16(emu_ds, emu_bx, 0x7FDA);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_dx;
	emu_al = emu_get_memory8(emu_ds, 0x00, 0x800B);
	emu_ah = 0x0;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x04F8); emu_cs = 0x260F; f__260F_0054_0016_0011();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }
l__04F8:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_pop(&emu_dx);
	emu_addw(&emu_dx, emu_ax);
	emu_push(emu_dx);
	emu_al = emu_get_memory8(emu_ds, 0x00, 0x800A);
	emu_ah = 0x0;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x050F); emu_cs = 0x260F; f__260F_003A_0014_CA10();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }
l__050F:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_pop(&emu_dx);
	emu_addw(&emu_dx, emu_ax);
	emu_push(emu_dx);
	emu_al = emu_get_memory8(emu_ds, 0x00, 0x800B);
	emu_ah = 0x0;
	emu_push(emu_ax);
	emu_al = emu_get_memory8(emu_ds, 0x00, 0x800A);
	emu_ah = 0x0;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0526); emu_cs = 0x2B6C; f__2B6C_0197_00CE_4D32();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }
l__0526:
	emu_addw(&emu_sp, 0x8);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_al = emu_get_memory8(emu_ds, 0x00, 0x800B);
	emu_ah = 0x0;
	emu_push(emu_ax);
	emu_al = emu_get_memory8(emu_ds, 0x00, 0x800A);
	emu_ah = 0x0;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0549); emu_cs = 0x2903; f__2903_0158_001A_2931();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }
l__0549:
	emu_addw(&emu_sp, 0xE);
	emu_push(emu_cs); emu_push(0x0551); emu_cs = 0x2B6C; f__2B6C_0292_0028_3AD7();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }
l__0551:
	emu_bx = emu_get_memory16(emu_ds, 0x00, 0x8022);
	emu_cmpw(&emu_bx, 0x4);
	if (emu_bx > 0x4) { /* Unresolved jump */ emu_ip = 0x0599; emu_last_cs = 0xB4DA; emu_last_ip = 0x0558; emu_last_length = 0x0010; emu_last_crc = 0x870C; emu_call(); return; }
	emu_shlw(&emu_bx, 0x1);

	/* Jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_cs, emu_bx, 0xA84);
	switch (emu_ip) {
		case 0x0561: goto l__0561;
		case 0x0587: goto l__0587;
		case 0x0590: goto l__0590;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0xB4DA; emu_last_ip = 0x055C; emu_last_length = 0x0010; emu_last_crc = 0x870C;
			emu_call();
			return;
	}
l__0561:
	emu_ax = 0x1E;
	emu_push(emu_ax);
	emu_ax = 0x7;
l__0568:
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x056E); emu_cs = 0x2537; f__2537_000C_001C_86CB();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }
l__056E:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x76AE);
	emu_bx = emu_get_memory16(emu_ds, 0x00, 0x76AC);
	emu_addw(&emu_bx, emu_ax);
	emu_adcw(&emu_dx, 0x0);
	emu_get_memory16(emu_ds, 0x00, 0x8018) = emu_dx;
	emu_get_memory16(emu_ds, 0x00, 0x8016) = emu_bx;
	goto l__059B;
l__0587:
	emu_ax = 0xA;
	emu_push(emu_ax);
	emu_ax = 0x6;
	goto l__0568;
l__0590:
	emu_ax = 0x6;
	emu_push(emu_ax);
	emu_ax = 0x5;
	goto l__0568;
l__059B:
	goto l__06BD;
l__059E:
	emu_get_memory16(emu_ss, emu_bp, -0x6) = 0x0;
	emu_ax = 0x41;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x05AC); emu_cs = 0x29E8; f__29E8_08B5_000A_FC14();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }
l__05AC:
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax != 0) goto l__05BF;
	emu_ax = 0x42;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x05BA); emu_cs = 0x29E8; f__29E8_08B5_000A_FC14();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }
l__05BA:
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax == 0) goto l__0616;
l__05BF:
	emu_al = emu_get_memory8(emu_ds, 0x00, 0x800D);
	emu_ah = 0x0;
	emu_push(emu_ax);
	emu_al = emu_get_memory8(emu_ds, 0x00, 0x800C);
	emu_ah = 0x0;
	emu_push(emu_ax);
	emu_al = emu_get_memory8(emu_ds, 0x00, 0x800B);
	emu_ah = 0x0;
	emu_push(emu_ax);
	emu_al = emu_get_memory8(emu_ds, 0x00, 0x800A);
	emu_ah = 0x0;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x05DC); emu_cs = 0x29A3; emu_Mouse_InsideRegion();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }
l__05DC:
	emu_addw(&emu_sp, 0x8);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax == 0) goto l__0616;
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x8018), 0xFFFF);
	if (emu_get_memory16(emu_ds, 0x00, 0x8018) == 0xFFFF) {
		emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x8016), 0xFFFF);
		if (emu_get_memory16(emu_ds, 0x00, 0x8016) == 0xFFFF) goto l__0614;
	}
l__05F1:
	emu_get_memory16(emu_ds, 0x00, 0x8018) = 0xFFFF;
	emu_get_memory16(emu_ds, 0x00, 0x8016) = 0xFFFF;
	emu_ax = 0x4;
	emu_push(emu_ax);
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x060A); emu_cs = 0x2537; f__2537_000C_001C_86CB();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }
l__060A:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ds, 0x00, 0x8022) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x6) = 0x1;
l__0614:
	goto l__0634;
l__0616:
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x8022), 0x0);
	if (emu_get_memory16(emu_ds, 0x00, 0x8022) != 0x0) {
		emu_get_memory16(emu_ds, 0x00, 0x8022) = 0x0;
		emu_get_memory16(emu_ds, 0x00, 0x8018) = 0x0;
		emu_get_memory16(emu_ds, 0x00, 0x8016) = 0x0;
		emu_get_memory16(emu_ss, emu_bp, -0x6) = 0x1;
	}
l__0634:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp, -0x6) != 0x0) goto l__063D;
	goto l__06BD;
l__063D:
	emu_bx = emu_get_memory16(emu_ds, 0x00, 0x8022);
	emu_cl = 0x2;
	emu_shlw(&emu_bx, emu_cl);
	emu_ax = emu_get_memory16(emu_ds, emu_bx, 0x7FDC);
	emu_dx = emu_get_memory16(emu_ds, emu_bx, 0x7FDA);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_dx;
	emu_al = emu_get_memory8(emu_ds, 0x00, 0x800B);
	emu_ah = 0x0;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x0664); emu_cs = 0x260F; f__260F_0054_0016_0011();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }
l__0664:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_pop(&emu_dx);
	emu_addw(&emu_dx, emu_ax);
	emu_push(emu_dx);
	emu_al = emu_get_memory8(emu_ds, 0x00, 0x800A);
	emu_ah = 0x0;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x067B); emu_cs = 0x260F; f__260F_003A_0014_CA10();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }
l__067B:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_pop(&emu_dx);
	emu_addw(&emu_dx, emu_ax);
	emu_push(emu_dx);
	emu_al = emu_get_memory8(emu_ds, 0x00, 0x800B);
	emu_ah = 0x0;
	emu_push(emu_ax);
	emu_al = emu_get_memory8(emu_ds, 0x00, 0x800A);
	emu_ah = 0x0;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0692); emu_cs = 0x2B6C; f__2B6C_0197_00CE_4D32();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }
l__0692:
	emu_addw(&emu_sp, 0x8);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_al = emu_get_memory8(emu_ds, 0x00, 0x800B);
	emu_ah = 0x0;
	emu_push(emu_ax);
	emu_al = emu_get_memory8(emu_ds, 0x00, 0x800A);
	emu_ah = 0x0;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x06B5); emu_cs = 0x2903; f__2903_0158_001A_2931();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }
l__06B5:
	emu_addw(&emu_sp, 0xE);
	emu_push(emu_cs); emu_push(0x06BD); emu_cs = 0x2B6C; f__2B6C_0292_0028_3AD7();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }
l__06BD:
	emu_get_memory16(emu_ss, emu_bp, -0x6) = 0x0;
	emu_ax = 0x41;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x06CB); emu_cs = 0x29E8; f__29E8_08B5_000A_FC14();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }
l__06CB:
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax != 0) goto l__06DE;
	emu_ax = 0x42;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x06D9); emu_cs = 0x29E8; f__29E8_08B5_000A_FC14();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }
l__06D9:
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax == 0) goto l__0738;
l__06DE:
	emu_al = emu_get_memory8(emu_ds, 0x00, 0x8009);
	emu_ah = 0x0;
	emu_push(emu_ax);
	emu_al = emu_get_memory8(emu_ds, 0x00, 0x8008);
	emu_ah = 0x0;
	emu_push(emu_ax);
	emu_al = emu_get_memory8(emu_ds, 0x00, 0x8007);
	emu_ah = 0x0;
	emu_push(emu_ax);
	emu_al = emu_get_memory8(emu_ds, 0x00, 0x8006);
	emu_ah = 0x0;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x06FB); emu_cs = 0x29A3; emu_Mouse_InsideRegion();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }
l__06FB:
	emu_addw(&emu_sp, 0x8);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax == 0) goto l__0738;
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x801E), 0x4);
	if (emu_get_memory16(emu_ds, 0x00, 0x801E) == 0x4) goto l__0735;
	emu_get_memory16(emu_ss, emu_bp, -0x6) = 0x1;
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x801E), 0x3);
	if (emu_get_memory16(emu_ds, 0x00, 0x801E) == 0x3) goto l__071D;
	emu_get_memory16(emu_ds, 0x00, 0x801E) = 0x3;
	goto l__0723;
l__071D:
	emu_get_memory16(emu_ds, 0x00, 0x801E) = 0x4;
l__0723:
	emu_get_memory16(emu_ds, 0x00, 0x8020) = 0x0;
	emu_get_memory16(emu_ds, 0x00, 0x8014) = 0x0;
	emu_get_memory16(emu_ds, 0x00, 0x8012) = 0x0;
l__0735:
	goto l__09F3;
l__0738:
	emu_al = emu_get_memory8(emu_ds, 0x00, 0x8009);
	emu_ah = 0x0;
	emu_addw(&emu_ax, 0x18);
	emu_push(emu_ax);
	emu_al = emu_get_memory8(emu_ds, 0x00, 0x8008);
	emu_ah = 0x0;
	emu_addw(&emu_ax, 0x10);
	emu_push(emu_ax);
	emu_al = emu_get_memory8(emu_ds, 0x00, 0x8007);
	emu_ah = 0x0;
	emu_addw(&emu_ax, 0xFFF8);
	emu_push(emu_ax);
	emu_al = emu_get_memory8(emu_ds, 0x00, 0x8006);
	emu_ah = 0x0;
	emu_addw(&emu_ax, 0xFFF0);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0761); emu_cs = 0x29A3; emu_Mouse_InsideRegion();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }
l__0761:
	emu_addw(&emu_sp, 0x8);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax != 0) goto l__076B;
	goto l__0824;
l__076B:
	emu_ax = 0xC7;
	emu_push(emu_ax);
	emu_al = emu_get_memory8(emu_ds, 0x00, 0x8008);
	emu_ah = 0x0;
	emu_addw(&emu_ax, 0x8);
	emu_push(emu_ax);
	emu_al = emu_get_memory8(emu_ds, 0x00, 0x8009);
	emu_ah = 0x0;
	emu_push(emu_ax);
	emu_al = emu_get_memory8(emu_ds, 0x00, 0x8006);
	emu_ah = 0x0;
	emu_addw(&emu_ax, 0xFFF8);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x078C); emu_cs = 0x29A3; emu_Mouse_InsideRegion();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }
l__078C:
	emu_addw(&emu_sp, 0x8);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax == 0) goto l__0798;
	emu_si = 0x3;
	goto l__07FE;
l__0798:
	emu_al = emu_get_memory8(emu_ds, 0x00, 0x8009);
	emu_ah = 0x0;
	emu_addw(&emu_ax, 0x8);
	emu_push(emu_ax);
	emu_al = emu_get_memory8(emu_ds, 0x00, 0x8008);
	emu_ah = 0x0;
	emu_addw(&emu_ax, 0x10);
	emu_push(emu_ax);
	emu_al = emu_get_memory8(emu_ds, 0x00, 0x8007);
	emu_ah = 0x0;
	emu_addw(&emu_ax, 0xFFF8);
	emu_push(emu_ax);
	emu_al = emu_get_memory8(emu_ds, 0x00, 0x8008);
	emu_ah = 0x0;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x07BE); emu_cs = 0x29A3; emu_Mouse_InsideRegion();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }
l__07BE:
	emu_addw(&emu_sp, 0x8);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax == 0) goto l__07CA;
	emu_si = 0x2;
	goto l__07FE;
l__07CA:
	emu_al = emu_get_memory8(emu_ds, 0x00, 0x8009);
	emu_ah = 0x0;
	emu_addw(&emu_ax, 0x8);
	emu_push(emu_ax);
	emu_al = emu_get_memory8(emu_ds, 0x00, 0x8006);
	emu_ah = 0x0;
	emu_push(emu_ax);
	emu_al = emu_get_memory8(emu_ds, 0x00, 0x8007);
	emu_ah = 0x0;
	emu_addw(&emu_ax, 0xFFF8);
	emu_push(emu_ax);
	emu_al = emu_get_memory8(emu_ds, 0x00, 0x8006);
	emu_ah = 0x0;
	emu_addw(&emu_ax, 0xFFF0);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x07F0); emu_cs = 0x29A3; emu_Mouse_InsideRegion();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }
l__07F0:
	emu_addw(&emu_sp, 0x8);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax == 0) goto l__07FC;
	emu_si = 0x1;
	goto l__07FE;
l__07FC:
	emu_xorw(&emu_si, emu_si);
l__07FE:
	emu_cmpw(&emu_si, emu_get_memory16(emu_ds, 0x00, 0x801E));
	if (emu_si != emu_get_memory16(emu_ds, 0x00, 0x801E)) {
		emu_get_memory16(emu_ss, emu_bp, -0x6) = 0x1;
		emu_get_memory16(emu_ds, 0x00, 0x801E) = emu_si;
		emu_get_memory16(emu_ds, 0x00, 0x8020) = 0x0;
		emu_ax = emu_get_memory16(emu_ds, 0x00, 0x76AE);
		emu_dx = emu_get_memory16(emu_ds, 0x00, 0x76AC);
		emu_get_memory16(emu_ds, 0x00, 0x8014) = emu_ax;
		emu_get_memory16(emu_ds, 0x00, 0x8012) = emu_dx;
	}
l__0821:
	goto l__09F3;
l__0824:
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x8014);
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x8012);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x76AE));
	if ((int16)emu_ax <= (int16)emu_get_memory16(emu_ds, 0x00, 0x76AE)) goto l__0834;
	goto l__09F0;
l__0834:
	if ((emu_flags.sf != emu_flags.of)) goto l__083F;
	emu_cmpw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x76AC));
	if (emu_dx < emu_get_memory16(emu_ds, 0x00, 0x76AC)) goto l__083F;
	goto l__09F0;
l__083F:
	emu_get_memory16(emu_ss, emu_bp, -0x6) = 0x1;
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x8020), 0x0);
	if (emu_get_memory16(emu_ds, 0x00, 0x8020) == 0x0) goto l__088E;
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x8020);
	emu_get_memory16(emu_ds, 0x00, 0x801E) = emu_ax;
	emu_get_memory16(emu_ds, 0x00, 0x8020) = 0x0;
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x801E), 0x4);
	if (emu_get_memory16(emu_ds, 0x00, 0x801E) != 0x4) goto l__0867;
	emu_ax = 0x1E;
	emu_push(emu_ax);
	emu_ax = 0xC;
	goto l__086E;
l__0867:
	emu_ax = 0xB4;
	emu_push(emu_ax);
	emu_ax = 0x14;
l__086E:
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0874); emu_cs = 0x2537; f__2537_000C_001C_86CB();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }
l__0874:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x76AE);
	emu_bx = emu_get_memory16(emu_ds, 0x00, 0x76AC);
	emu_addw(&emu_bx, emu_ax);
	emu_adcw(&emu_dx, 0x0);
	emu_get_memory16(emu_ds, 0x00, 0x8014) = emu_dx;
	emu_get_memory16(emu_ds, 0x00, 0x8012) = emu_bx;
	goto l__09EE;
l__088E:
	emu_xorw(&emu_si, emu_si);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax == 0) goto l__08A3;
	emu_cmpw(&emu_ax, 0x1);
	if (emu_ax == 0x1) goto l__08C7;
	emu_cmpw(&emu_ax, 0x2);
	if (emu_ax != 0x2) {
		goto l__0902;
	}
	goto l__0902;
l__08A3:
	emu_ax = 0x7;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x08AF); emu_cs = 0x2537; f__2537_000C_001C_86CB();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }
l__08AF:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_si = emu_ax;
	emu_cmpw(&emu_si, 0x5);
	if ((int16)emu_si <= (int16)0x5) goto l__08BD;
	emu_si = 0x1;
	goto l__08C5;
l__08BD:
	emu_cmpw(&emu_si, 0x5);
	if (emu_si == 0x5) {
		emu_si = 0x4;
	}
l__08C5:
	goto l__0930;
l__08C7:
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x3C4A), 0x0);
	if (emu_get_memory16(emu_ds, 0x00, 0x3C4A) == 0x0) goto l__08D3;
	emu_ax = 0x3;
	goto l__08D5;
l__08D3:
	emu_xorw(&emu_ax, emu_ax);
l__08D5:
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x801E));
	if (emu_ax == emu_get_memory16(emu_ds, 0x00, 0x801E)) goto l__08DF;
	emu_xorw(&emu_si, emu_si);
	goto l__0900;
l__08DF:
	emu_ax = 0x11;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x08EB); emu_cs = 0x2537; f__2537_000C_001C_86CB();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }
l__08EB:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_si = emu_ax;
	emu_cmpw(&emu_si, 0x9);
	if ((int16)emu_si <= (int16)0x9) goto l__08F8;
	emu_xorw(&emu_si, emu_si);
	goto l__0900;
l__08F8:
	emu_cmpw(&emu_si, 0x5);
	if ((int16)emu_si >= (int16)0x5) {
		emu_si = 0x4;
	}
l__0900:
	goto l__0930;
l__0902:
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x801E), 0x2);
	if (emu_get_memory16(emu_ds, 0x00, 0x801E) != 0x2) {
		emu_si = 0x2;
	}
l__090C:
	emu_ax = 0xF;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0918); emu_cs = 0x2537; f__2537_000C_001C_86CB();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }
l__0918:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_si = emu_ax;
	emu_cmpw(&emu_si, 0xA);
	if ((int16)emu_si <= (int16)0xA) goto l__0926;
	emu_si = 0x2;
	goto l__092E;
l__0926:
	emu_cmpw(&emu_si, 0x5);
	if ((int16)emu_si >= (int16)0x5) {
		emu_si = 0x4;
	}
l__092E:
	goto l__0930;
l__0930:
	emu_cmpw(&emu_si, 0x2);
	if (emu_si == 0x2) {
		emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x801E), 0x1);
		if (emu_get_memory16(emu_ds, 0x00, 0x801E) == 0x1) goto l__0948;
	}
l__093C:
	emu_cmpw(&emu_si, 0x1);
	if (emu_si != 0x1) goto l__0978;
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x801E), 0x2);
	if (emu_get_memory16(emu_ds, 0x00, 0x801E) != 0x2) goto l__0978;
l__0948:
	emu_get_memory16(emu_ds, 0x00, 0x8020) = emu_si;
	emu_get_memory16(emu_ds, 0x00, 0x801E) = 0x0;
	emu_ax = 0x5;
	emu_push(emu_ax);
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x095F); emu_cs = 0x2537; f__2537_000C_001C_86CB();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }
l__095F:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x76AE);
	emu_bx = emu_get_memory16(emu_ds, 0x00, 0x76AC);
	emu_addw(&emu_bx, emu_ax);
	emu_adcw(&emu_dx, 0x0);
	emu_get_memory16(emu_ds, 0x00, 0x8014) = emu_dx;
	emu_get_memory16(emu_ds, 0x00, 0x8012) = emu_bx;
	goto l__09DA;
l__0978:
	emu_cmpw(&emu_si, emu_get_memory16(emu_ds, 0x00, 0x801E));
	if (emu_si == emu_get_memory16(emu_ds, 0x00, 0x801E)) goto l__09A4;
	emu_cmpw(&emu_si, 0x4);
	if (emu_si != 0x4) {
		emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x801E), 0x4);
		if (emu_get_memory16(emu_ds, 0x00, 0x801E) != 0x4) goto l__09A4;
	}
l__098A:
	emu_get_memory16(emu_ds, 0x00, 0x8020) = emu_si;
	emu_get_memory16(emu_ds, 0x00, 0x801E) = 0x3;
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x76AE);
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x76AC);
	emu_get_memory16(emu_ds, 0x00, 0x8014) = emu_ax;
	emu_get_memory16(emu_ds, 0x00, 0x8012) = emu_dx;
	goto l__09DA;
l__09A4:
	emu_get_memory16(emu_ds, 0x00, 0x801E) = emu_si;
	emu_cmpw(&emu_si, 0x4);
	if (emu_si != 0x4) goto l__09B6;
	emu_ax = 0x3C;
	emu_push(emu_ax);
	emu_ax = 0x6;
	goto l__09BD;
l__09B6:
	emu_ax = 0xB4;
	emu_push(emu_ax);
	emu_ax = 0xF;
l__09BD:
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x09C3); emu_cs = 0x2537; f__2537_000C_001C_86CB();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }
l__09C3:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x76AE);
	emu_bx = emu_get_memory16(emu_ds, 0x00, 0x76AC);
	emu_addw(&emu_bx, emu_ax);
	emu_adcw(&emu_dx, 0x0);
	emu_get_memory16(emu_ds, 0x00, 0x8014) = emu_dx;
	emu_get_memory16(emu_ds, 0x00, 0x8012) = emu_bx;
l__09DA:
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x3C4A), 0x0);
	if (emu_get_memory16(emu_ds, 0x00, 0x3C4A) != 0x0) {
		emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x801E), 0x0);
		if (emu_get_memory16(emu_ds, 0x00, 0x801E) == 0x0) {
			emu_get_memory16(emu_ds, 0x00, 0x801E) = 0x3;
		}
	}
l__09EE:
	goto l__09F3;
l__09F0:
	goto l__0A7E;
l__09F3:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp, -0x6) != 0x0) goto l__09FC;
	goto l__0A7C;
l__09FC:
	emu_bx = emu_get_memory16(emu_ds, 0x00, 0x801E);
	emu_cl = 0x2;
	emu_shlw(&emu_bx, emu_cl);
	emu_ax = emu_get_memory16(emu_ds, emu_bx, 0x7FC8);
	emu_dx = emu_get_memory16(emu_ds, emu_bx, 0x7FC6);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_dx;
	emu_al = emu_get_memory8(emu_ds, 0x00, 0x8007);
	emu_ah = 0x0;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x0A23); emu_cs = 0x260F; f__260F_0054_0016_0011();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }
l__0A23:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_pop(&emu_dx);
	emu_addw(&emu_dx, emu_ax);
	emu_push(emu_dx);
	emu_al = emu_get_memory8(emu_ds, 0x00, 0x8006);
	emu_ah = 0x0;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x0A3A); emu_cs = 0x260F; f__260F_003A_0014_CA10();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }
l__0A3A:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_pop(&emu_dx);
	emu_addw(&emu_dx, emu_ax);
	emu_push(emu_dx);
	emu_al = emu_get_memory8(emu_ds, 0x00, 0x8007);
	emu_ah = 0x0;
	emu_push(emu_ax);
	emu_al = emu_get_memory8(emu_ds, 0x00, 0x8006);
	emu_ah = 0x0;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0A51); emu_cs = 0x2B6C; f__2B6C_0197_00CE_4D32();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }
l__0A51:
	emu_addw(&emu_sp, 0x8);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_al = emu_get_memory8(emu_ds, 0x00, 0x8007);
	emu_ah = 0x0;
	emu_push(emu_ax);
	emu_al = emu_get_memory8(emu_ds, 0x00, 0x8006);
	emu_ah = 0x0;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0A74); emu_cs = 0x2903; f__2903_0158_001A_2931();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }
l__0A74:
	emu_addw(&emu_sp, 0xE);
	emu_push(emu_cs); emu_push(0x0A7C); emu_cs = 0x2B6C; f__2B6C_0292_0028_3AD7();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }
l__0A7C:
	goto l__0A7E;
l__0A7E:
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_sp = emu_bp;
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
 * @implements B4DA:0AB3:0005:6043
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
l__0A8E:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_al = emu_get_memory8(emu_ds, 0x00, 0x8011);
	emu_ah = 0x0;
	emu_push(emu_ax);
	emu_al = emu_get_memory8(emu_ds, 0x00, 0x8010);
	emu_ah = 0x0;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x8004));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x8002));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x0AB3); emu_cs = 0x2903; f__2903_0158_001A_2931();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }
l__0AB3:
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
 * @implements B4DA:0AE2:000D:6FB1
 * @implements B4DA:0AEF:0030:D055
 * @implements B4DA:0B1F:000E:1049
 * @implements B4DA:0B2D:0016:F446
 * @implements B4DA:0B48:001D:08D6
 * @implements B4DA:0B65:001C:98BD
 * @implements B4DA:0B81:0021:F1D5
 * @implements B4DA:0BA2:0012:DA23
 * @implements B4DA:0BB4:003F:C2EE
 * @implements B4DA:0BF3:0010:8C36
 * @implements B4DA:0C03:0008:64F7
 * @implements B4DA:0C0B:000C:6912
 * @implements B4DA:0C17:0009:2F5C
 * @implements B4DA:0C20:000E:EC25
 * @implements B4DA:0C2E:0019:5030
 * @implements B4DA:0C45:0002:C4BA
 * @implements B4DA:0C47:0013:D765
 * @implements B4DA:0C50:000A:5BEE
 * @implements B4DA:0C5A:0007:201D
 * @implements B4DA:0C61:0007:13B9
 * @implements B4DA:0C68:0008:9CC2
 * @implements B4DA:0C72:0013:81BE
 * @implements B4DA:0C75:0010:D67E
 * @implements B4DA:0C7F:0006:6417
 * @implements B4DA:0C85:000D:FD79
 * @implements B4DA:0C92:0049:646C
 * @implements B4DA:0CA5:0036:4855
 * @implements B4DA:0CC0:001B:2694
 * @implements B4DA:0CCE:000D:7E24
 * @implements B4DA:0CDB:000C:D607
 * @implements B4DA:0CDE:0009:5DE7
 * @implements B4DA:0CE4:0003:1C25
 * @implements B4DA:0CE7:0013:2896
 * @implements B4DA:0CFA:0024:359C
 * @implements B4DA:0D1E:0008:F38A
 * @implements B4DA:0D26:0046:ED1B
 * @implements B4DA:0D2C:0040:42E1
 * @implements B4DA:0D46:0026:659C
 * @implements B4DA:0D49:0023:9996
 * @implements B4DA:0D53:0019:74BF
 * @implements B4DA:0D59:0013:2896
 * @implements B4DA:0D6C:0024:8C51
 * @implements B4DA:0D90:0008:F38A
 * @implements B4DA:0D98:000B:FB35
 * @implements B4DA:0DA3:0007:92A0
 * @implements B4DA:0DAA:0022:BFB5
 * @implements B4DA:0DCC:0010:DDE7
 * @implements B4DA:0DDC:0009:522B
 * @implements B4DA:0DE5:001F:7077
 * @implements B4DA:0E04:0013:390A
 * @implements B4DA:0E17:000B:49F5
 * @implements B4DA:0E22:0021:9354
 * @implements B4DA:0E43:000E:5557
 * @implements B4DA:0E51:000D:98CF
 * @implements B4DA:0E56:0008:64F7
 * @implements B4DA:0E5E:0014:B893
 * @implements B4DA:0E5F:0013:2896
 * @implements B4DA:0E72:0023:F42C
 * @implements B4DA:0E95:0008:F38A
 * @implements B4DA:0E9D:0002:DCBA
 * @implements B4DA:0E9F:003B:09B8
 * @implements B4DA:0ED8:0002:D0BA
 * @implements B4DA:0EDA:0013:5FFA
 * @implements B4DA:0EE8:0005:92CA
 * @implements B4DA:0EEB:0002:C73A
 * @implements B4DA:0EED:000C:BD8D
 * @implements B4DA:0EF9:0002:C03A
 * @implements B4DA:0EFB:0007:D9BE
 * @implements B4DA:0F02:000C:6967
 * @implements B4DA:0F0E:0042:4333
 * @implements B4DA:0F23:002D:D607
 * @implements B4DA:0F30:0020:A8B8
 * @implements B4DA:0F50:001B:EE44
 * @implements B4DA:0F5E:000D:8D69
 * @implements B4DA:0F82:003B:FFB1
 * @implements B4DA:0F8D:0030:D5CF
 * @implements B4DA:0FBD:000B:EBA0
 * @implements B4DA:0FC8:000A:A344
 * @implements B4DA:0FD2:0025:F417
 * @implements B4DA:0FF7:0008:C54E
 * @implements B4DA:0FFF:000E:103A
 * @implements B4DA:1004:0009:2C84
 * @implements B4DA:100D:0013:FC06
 * @implements B4DA:1020:000B:6460
 * @implements B4DA:102B:0009:3AB2
 * @implements B4DA:1034:000A:A344
 * @implements B4DA:103E:0025:F417
 * @implements B4DA:1063:0008:C54E
 * @implements B4DA:106B:0008:A894
 * @implements B4DA:1073:0009:A1B5
 * @implements B4DA:107C:0006:8488
 * @implements B4DA:1082:0005:B8A6
 * @implements B4DA:1087:0006:F7CE
 *
 * Called From: 34DA:0034:0005:0000
 * Called From: B4DA:11F3:0023:09B4
 */
void f__B4DA_0AB8_002A_AAB2()
{
l__0AB8:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x28);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = 0x0;
	emu_get_memory16(emu_ss, emu_bp, -0x1C) = 0x0;
	emu_get_memory16(emu_ss, emu_bp, -0x1E) = 0x0;
	emu_get_memory16(emu_ss, emu_bp, -0x20) = 0x0;
	emu_get_memory16(emu_ss, emu_bp, -0x22) = 0x0;
	emu_ax = 0x8;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0AE2); emu_cs = 0x07AE; f__07AE_0000_00DF_A32C();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }
l__0AE2:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0xC) = emu_ax;
	emu_ax = 0x4;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0AEF); emu_cs = 0x2598; f__2598_0000_0017_EB80();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }
l__0AEF:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0xE) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x2) = 0x0;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = 0x0;
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_ax == 0) { /* Unresolved jump */ emu_ip = 0x0B36; emu_last_cs = 0xB4DA; emu_last_ip = 0x0B03; emu_last_length = 0x0030; emu_last_crc = 0xD055; emu_call(); return; }
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6CE1));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6CDF));
	emu_ax = 0x3;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0B1F); emu_cs = 0x252E; f__252E_0001_0018_08B3();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }
l__0B1F:
	emu_pop(&emu_cx);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x0B2D); emu_cs = 0x352A; overlay(0x352A, 0); f__B52A_0000_0019_1617();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }
l__0B2D:
	emu_addw(&emu_sp, 0x12);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_ax != 0) goto l__0B48;
	emu_push(emu_cs); emu_push(0x0B43); emu_cs = 0x07AE; f__07AE_0103_004C_B43B();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }
	/* Unresolved jump */ emu_ip = 0x0B43; emu_last_cs = 0xB4DA; emu_last_ip = 0x0B43; emu_last_length = 0x0016; emu_last_crc = 0xF446; emu_call();
l__0B48:
	emu_xorw(&emu_si, emu_si);
	emu_ax = 0x31;
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
	if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }
l__0B65:
	emu_addw(&emu_sp, 0xE);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x992F);
	emu_cl = 0x3;
	emu_shlw(&emu_ax, emu_cl);
	emu_subw(&emu_ax, 0xA);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_cs); emu_push(0x0B81); emu_cs = 0x10E4; f__10E4_01B8_0014_5104();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }
l__0B81:
	emu_addw(&emu_sp, 0x8);
	emu_get_memory16(emu_ss, emu_bp, -0x24) = emu_ax;
	emu_ax = 0x32;
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
	if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }
l__0BA2:
	emu_addw(&emu_sp, 0xE);
	emu_ax = 0x130;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x10));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_push(emu_cs);
	emu_push(0x0BB4); f__B4DA_1893_001C_7AC4();
l__0BB4:
	emu_addw(&emu_sp, 0x6);
	emu_get_memory16(emu_ss, emu_bp, -0x28) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x18) = 0x2;
	emu_get_memory16(emu_ss, emu_bp, -0x26) = 0x0;
	emu_xorw(&emu_ax, emu_ax);
	emu_get_memory16(emu_ss, emu_bp, -0x10) = emu_ax;
	emu_cwd();
	emu_get_memory16(emu_ds, 0x00, 0x76B6) = emu_dx;
	emu_get_memory16(emu_ds, 0x00, 0x76B4) = emu_ax;
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x76AE);
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x76AC);
	emu_addw(&emu_dx, 0x1E);
	emu_adcw(&emu_ax, 0x0);
	emu_get_memory16(emu_ss, emu_bp, -0x14) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x16) = emu_dx;
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x992D);
	emu_cl = 0x3;
	emu_shlw(&emu_ax, emu_cl);
	emu_get_memory16(emu_ss, emu_bp, -0x12) = emu_ax;
	emu_push(emu_cs); emu_push(0x0BF3); emu_cs = 0x29E8; emu_Input_History_Clear();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }
l__0BF3:
	emu_xorw(&emu_ax, emu_ax);
	emu_get_memory16(emu_ss, emu_bp, -0xA) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x1A) = 0x0;
	goto l__1004;
l__0C03:
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0C0B); emu_cs = 0x2598; f__2598_0000_0017_EB80();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }
l__0C0B:
	emu_pop(&emu_cx);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x16));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x14));
	emu_push(emu_cs); emu_push(0x0C17); emu_cs = 0x34A2; overlay(0x34A2, 0); f__B4A2_0039_000B_EC51();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }
l__0C17:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_di = emu_ax;
	emu_push(emu_cs); emu_push(0x0C20); emu_cs = 0x0642; f__0642_0559_0027_3560();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }
l__0C20:
	emu_orw(&emu_di, emu_di);
	if (emu_di != 0) {
		emu_testw(&emu_di, 0x800);
		if ((emu_di & 0x800) == 0) goto l__0C2E;
		emu_xorw(&emu_di, emu_di);
	}
	goto l__0C50;
l__0C2E:
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x14);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x16));
	if (emu_ax == 0) goto l__0C47;
	emu_testw(&emu_di, 0x8000);
	if ((emu_di & 0x8000) != 0) {
		emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x1A), 0x0);
		if (emu_get_memory16(emu_ss, emu_bp, -0x1A) == 0x0) {
			emu_get_memory16(emu_ss, emu_bp, -0x1A) = emu_di;
		}
	}
l__0C45:
	goto l__0C50;
l__0C47:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp, -0xA) != 0x0) {
		emu_get_memory16(emu_ss, emu_bp, -0x1A) = emu_di;
	}
l__0C50:
	emu_bx = emu_si;
	emu_cmpw(&emu_bx, 0x5);
	if (emu_bx <= 0x5) goto l__0C5A;
	goto l__0EF9;
l__0C5A:
	emu_shlw(&emu_bx, 0x1);

	/* Jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_cs, emu_bx, 0x108D);
	switch (emu_ip) {
		case 0x0C61: goto l__0C61;
		case 0x0C75: goto l__0C75;
		case 0x0CE7: goto l__0CE7;
		case 0x0D2C: goto l__0D2C;
		case 0x0EDA: goto l__0EDA;
		case 0x0EED: goto l__0EED;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0xB4DA; emu_last_ip = 0x0C5C; emu_last_length = 0x0007; emu_last_crc = 0x201D;
			emu_call();
			return;
	}
l__0C61:
	emu_orw(&emu_di, emu_di);
	if (emu_di != 0) goto l__0C68;
	goto l__0EFB;
l__0C68:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x1A), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp, -0x1A) == 0x0) goto l__0C72;
	goto l__0C7F;
l__0C72:
	emu_si = 0x1;
l__0C75:
	emu_orw(&emu_di, emu_di);
	if (emu_di == 0) goto l__0C92;
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x1A), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp, -0x1A) == 0x0) goto l__0C85;
l__0C7F:
	emu_si = 0x5;
	goto l__0EFB;
l__0C85:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x24);
	emu_get_memory16(emu_ss, emu_bp, -0x26) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x6) = 0x1;
	goto l__0CC0;
l__0C92:
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x76AE);
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x76AC);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x14));
	if ((int16)emu_ax < (int16)emu_get_memory16(emu_ss, emu_bp, -0x14)) goto l__0CC0;
	if ((int16)emu_ax <= (int16)emu_get_memory16(emu_ss, emu_bp, -0x14)) {
		emu_cmpw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0x16));
		if (emu_dx <= emu_get_memory16(emu_ss, emu_bp, -0x16)) goto l__0CC0;
	}
l__0CA5:
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x76AE);
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x76AC);
	emu_addw(&emu_dx, 0xF);
	emu_adcw(&emu_ax, 0x0);
	emu_get_memory16(emu_ss, emu_bp, -0x14) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x16) = emu_dx;
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x26));
	emu_get_memory16(emu_ss, emu_bp, -0x6) = 0x1;
l__0CC0:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x26);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x24));
	if ((int16)emu_ax < (int16)emu_get_memory16(emu_ss, emu_bp, -0x24)) {
		emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x26), 0xC);
		if ((int16)emu_get_memory16(emu_ss, emu_bp, -0x26) <= (int16)0xC) goto l__0CE4;
	}
l__0CCE:
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0xE);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x10));
	if (emu_ax == 0) goto l__0CDB;
	emu_si = 0x2;
	goto l__0CDE;
l__0CDB:
	emu_si = 0x4;
l__0CDE:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x24);
	emu_get_memory16(emu_ss, emu_bp, -0x26) = emu_ax;
l__0CE4:
	goto l__0EFB;
l__0CE7:
	emu_ax = 0x28;
	emu_push(emu_ax);
	emu_ax = 0x140;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0CFA); emu_cs = 0x2B6C; f__2B6C_0197_00CE_4D32();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }
l__0CFA:
	emu_addw(&emu_sp, 0x8);
	emu_ax = 0x4;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = 0x28;
	emu_push(emu_ax);
	emu_ax = 0x28;
	emu_push(emu_ax);
	emu_ax = 0xA0;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0D1E); emu_cs = 0x24D0; f__24D0_000D_0039_C17D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }
l__0D1E:
	emu_addw(&emu_sp, 0x10);
	emu_push(emu_cs); emu_push(0x0D26); emu_cs = 0x2B6C; f__2B6C_0292_0028_3AD7();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }
l__0D26:
	emu_si = 0x3;
	emu_di = 0x1;
l__0D2C:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x18), 0x2);
	if (emu_get_memory16(emu_ss, emu_bp, -0x18) != 0x2) goto l__0D49;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x1C);
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x1E);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x76AE));
	if ((int16)emu_ax > (int16)emu_get_memory16(emu_ds, 0x00, 0x76AE)) goto l__0D49;
	if ((int16)emu_ax >= (int16)emu_get_memory16(emu_ds, 0x00, 0x76AE)) {
		emu_cmpw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x76AC));
		if (emu_dx >= emu_get_memory16(emu_ds, 0x00, 0x76AC)) goto l__0D49;
	}
l__0D46:
	emu_di = 0x1;
l__0D49:
	emu_orw(&emu_di, emu_di);
	if (emu_di != 0) {
		emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x0);
		if (emu_get_memory16(emu_ss, emu_bp, -0xA) != 0x0) goto l__0D59;
	}
l__0D53:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x1A), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp, -0x1A) == 0x0) goto l__0DA3;
l__0D59:
	emu_ax = 0x28;
	emu_push(emu_ax);
	emu_ax = 0x140;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0D6C); emu_cs = 0x2B6C; f__2B6C_0197_00CE_4D32();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }
l__0D6C:
	emu_addw(&emu_sp, 0x8);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = 0x4;
	emu_push(emu_ax);
	emu_ax = 0x28;
	emu_push(emu_ax);
	emu_ax = 0x28;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = 0xA0;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0D90); emu_cs = 0x24D0; f__24D0_000D_0039_C17D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }
l__0D90:
	emu_addw(&emu_sp, 0x10);
	emu_push(emu_cs); emu_push(0x0D98); emu_cs = 0x2B6C; f__2B6C_0292_0028_3AD7();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }
l__0D98:
	emu_si = 0x4;
	emu_get_memory16(emu_ss, emu_bp, -0x18) = 0x0;
	goto l__0ED8;
l__0DA3:
	emu_orw(&emu_di, emu_di);
	if (emu_di != 0) goto l__0DAA;
	goto l__0E9F;
l__0DAA:
	emu_ax = 0x4;
	emu_push(emu_ax);
	emu_ax = 0x4;
	emu_push(emu_ax);
	emu_ax = 0x28;
	emu_push(emu_ax);
	emu_ax = 0x28;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = 0xA0;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0DCC); emu_cs = 0x24D0; f__24D0_000D_0039_C17D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }
l__0DCC:
	emu_addw(&emu_sp, 0x10);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x28);
	emu_decw(&emu_get_memory16(emu_ss, emu_bp, -0x28));
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax != 0) goto l__0DDC;
	goto l__0E5F;
l__0DDC:
	emu_ax = 0x4;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0DE5); emu_cs = 0x2598; f__2598_0000_0017_EB80();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }
l__0DE5:
	emu_pop(&emu_cx);
	emu_ax = 0x32;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6D5B));
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_ax = 0x4;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x10));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_push(emu_cs); emu_push(0x0E04); emu_cs = 0x10E4; f__10E4_1EF1_0040_01F8();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }
l__0E04:
	emu_addw(&emu_sp, 0xE);
	emu_get_memory16(emu_ss, emu_bp, -0x18) = 0x1;
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x10));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_push(emu_cs); emu_push(0x0E17); emu_cs = 0x01F7; emu_String_strlen();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }
l__0E17:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_xorw(&emu_dx, emu_dx);
	emu_cl = 0x2;
	emu_push(emu_cs); emu_push(0x0E22); emu_cs = 0x01F7; emu_Tools_Shld();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }
l__0E22:
	emu_get_memory16(emu_ss, emu_bp, -0x20) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x22) = emu_ax;
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x76AE);
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x76AC);
	emu_addw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0x22));
	emu_adcw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x20));
	emu_get_memory16(emu_ss, emu_bp, -0x1C) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x1E) = emu_dx;
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x28), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp, -0x28) == 0x0) goto l__0E51;
	goto l__0E43;
l__0E43:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_incw(&emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x0), 0x0);
	if (emu_get_memory8(emu_es, emu_bx, 0x0) != 0x0) goto l__0E43;
	goto l__0E56;
l__0E51:
	emu_get_memory16(emu_ss, emu_bp, -0xA) = 0x1;
l__0E56:
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0E5E); emu_cs = 0x2598; f__2598_0000_0017_EB80();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }
l__0E5E:
	emu_pop(&emu_cx);
l__0E5F:
	emu_ax = 0x28;
	emu_push(emu_ax);
	emu_ax = 0x140;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0E72); emu_cs = 0x2B6C; f__2B6C_0197_00CE_4D32();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }
l__0E72:
	emu_addw(&emu_sp, 0x8);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = 0x4;
	emu_push(emu_ax);
	emu_ax = 0x28;
	emu_push(emu_ax);
	emu_ax = 0x28;
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
	if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }
l__0E95:
	emu_addw(&emu_sp, 0x10);
	emu_push(emu_cs); emu_push(0x0E9D); emu_cs = 0x2B6C; f__2B6C_0292_0028_3AD7();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }
l__0E9D:
	goto l__0ED8;
l__0E9F:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x18), 0x1);
	if (emu_get_memory16(emu_ss, emu_bp, -0x18) == 0x1) {
		emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x1C);
		emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x1E);
		emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x76AE));
		if ((int16)emu_ax <= (int16)emu_get_memory16(emu_ds, 0x00, 0x76AE)) {
			if ((int16)emu_ax < (int16)emu_get_memory16(emu_ds, 0x00, 0x76AE)) { /* Unresolved jump */ emu_ip = 0x0EB9; emu_last_cs = 0xB4DA; emu_last_ip = 0x0EB1; emu_last_length = 0x003B; emu_last_crc = 0x09B8; emu_call(); return; }
			emu_cmpw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x76AC));
			if (emu_dx < emu_get_memory16(emu_ds, 0x00, 0x76AC)) {
				emu_get_memory16(emu_ss, emu_bp, -0x18) = 0x2;
				emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x20);
				emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x22);
				emu_sarw(&emu_ax, 0x1);
				emu_rcrw(&emu_dx, 0x1);
				emu_bx = emu_get_memory16(emu_ss, emu_bp, -0x20);
				emu_cx = emu_get_memory16(emu_ss, emu_bp, -0x22);
				emu_addw(&emu_cx, emu_dx);
				emu_adcw(&emu_bx, emu_ax);
				emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x1E), emu_cx);
				emu_adcw(&emu_get_memory16(emu_ss, emu_bp, -0x1C), emu_bx);
			}
		}
	}
l__0ED8:
	goto l__0EFB;
l__0EDA:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x1A), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp, -0x1A) == 0x0) {
		emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x14);
		emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x16));
		if (emu_ax != 0) goto l__0EEB;
	}
l__0EE8:
	emu_si = 0x5;
l__0EEB:
	goto l__0EFB;
l__0EED:
	emu_get_memory16(emu_ss, emu_bp, -0x6) = 0x1;
	emu_get_memory16(emu_ss, emu_bp, -0x8) = 0x1;
	goto l__0EFB;
l__0EF9:
	goto l__0EFB;
l__0EFB:
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x18));
	emu_push(emu_cs);
	emu_push(0x0F02); f__B4DA_0308_0018_F99F();
l__0F02:
	emu_pop(&emu_cx);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_ax != 0) goto l__0F0E;
	goto l__0F8D;
l__0F0E:
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x76B4);
	emu_orw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x76B6));
	if (emu_ax != 0) goto l__0F8D;
	emu_get_memory16(emu_ds, 0x00, 0x76B6) = 0x0;
	emu_get_memory16(emu_ds, 0x00, 0x76B4) = 0x7;
l__0F23:
	emu_orw(&emu_si, emu_si);
	if (emu_si == 0) {
		emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x10), 0x4);
		if ((int16)emu_get_memory16(emu_ss, emu_bp, -0x10) > (int16)0x4) {
			emu_si = 0x1;
		}
	}
l__0F30:
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = 0x4;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x992B));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x10);
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x0F50); emu_cs = 0x352A; overlay(0x352A, 0); f__B52A_04AC_0033_548A();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }
l__0F50:
	emu_addw(&emu_sp, 0xE);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax != 0) goto l__0F82;
	emu_orw(&emu_si, emu_si);
	if (emu_si == 0) {
		emu_si = 0x1;
	}
l__0F5E:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp,  0x12), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp,  0x12) == 0x0) { /* Unresolved jump */ emu_ip = 0x0F6B; emu_last_cs = 0xB4DA; emu_last_ip = 0x0F62; emu_last_length = 0x000D; emu_last_crc = 0x8D69; emu_call(); return; }
	emu_get_memory16(emu_ss, emu_bp, -0x10) = 0x0;
	goto l__0F82;
l__0F82:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x10), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp, -0x10) == 0x0) goto l__0F23;
	emu_get_memory16(emu_ss, emu_bp, -0x6) = 0x1;
l__0F8D:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp, -0x6) == 0x0) goto l__1004;
	emu_ax = 0x31;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x26));
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = 0x8;
	emu_push(emu_ax);
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x992B);
	emu_addw(&emu_ax, 0x3);
	emu_push(emu_ax);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x12);
	emu_addw(&emu_ax, 0x5);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_cs);
	emu_push(0x0FBD); f__B4DA_19E6_0016_C1CB();
l__0FBD:
	emu_addw(&emu_sp, 0x12);
	emu_ax = 0x4;
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x0FC8); f__B4DA_0A8E_0025_4AC8();
l__0FC8:
	emu_pop(&emu_cx);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6D5D));
	emu_push(emu_cs); emu_push(0x0FD2); emu_cs = 0x2642; f__2642_0002_005E_87F6();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }
l__0FD2:
	emu_pop(&emu_cx);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = 0x4;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x9931));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x992F));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x992B));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x992D));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x992B));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x992D));
	emu_push(emu_cs); emu_push(0x0FF7); emu_cs = 0x24D0; f__24D0_000D_0039_C17D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }
l__0FF7:
	emu_addw(&emu_sp, 0x10);
	emu_push(emu_cs); emu_push(0x0FFF); emu_cs = 0x2642; f__2642_0069_0008_D517();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }
l__0FFF:
	emu_get_memory16(emu_ss, emu_bp, -0x6) = 0x0;
l__1004:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp, -0x8) != 0x0) goto l__100D;
	goto l__0C03;
l__100D:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_ax == 0) { /* Unresolved jump */ emu_ip = 0x1022; emu_last_cs = 0xB4DA; emu_last_ip = 0x1013; emu_last_length = 0x0013; emu_last_crc = 0xFC06; emu_call(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x1020); emu_cs = 0x352A; overlay(0x352A, 0); f__B52A_0476_0030_9D41();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }
l__1020:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_ax = 0x4;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x102B); emu_cs = 0x2598; f__2598_0000_0017_EB80();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }
l__102B:
	emu_pop(&emu_cx);
	emu_ax = 0x4;
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x1034); f__B4DA_0A8E_0025_4AC8();
l__1034:
	emu_pop(&emu_cx);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6D5D));
	emu_push(emu_cs); emu_push(0x103E); emu_cs = 0x2642; f__2642_0002_005E_87F6();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }
l__103E:
	emu_pop(&emu_cx);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = 0x4;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x9931));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x992F));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x992B));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x992D));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x992B));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x992D));
	emu_push(emu_cs); emu_push(0x1063); emu_cs = 0x24D0; f__24D0_000D_0039_C17D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }
l__1063:
	emu_addw(&emu_sp, 0x10);
	emu_push(emu_cs); emu_push(0x106B); emu_cs = 0x2642; f__2642_0069_0008_D517();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }
l__106B:
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_cs); emu_push(0x1073); emu_cs = 0x07AE; f__07AE_0000_00DF_A32C();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }
l__1073:
	emu_pop(&emu_cx);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_push(emu_cs); emu_push(0x107C); emu_cs = 0x2598; f__2598_0000_0017_EB80();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }
l__107C:
	emu_pop(&emu_cx);
	emu_push(emu_cs); emu_push(0x1082); emu_cs = 0x29E8; emu_Input_History_Clear();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }
l__1082:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x1A);
	goto l__1087;
l__1087:
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function emu_Security_Main()
 *
 * @name emu_Security_Main
 * @implements B4DA:1099:0024:C93B ()
 * @implements B4DA:10BD:000A:5B00
 * @implements B4DA:10C7:000A:F400
 * @implements B4DA:10D1:000A:9101
 * @implements B4DA:10DB:0009:C506
 * @implements B4DA:10E4:0042:2923
 * @implements B4DA:1126:0009:CFD6
 * @implements B4DA:112F:0020:AE23
 * @implements B4DA:114F:000A:5058
 * @implements B4DA:1159:0014:EB5F
 * @implements B4DA:116D:0014:31C1
 * @implements B4DA:1181:0011:BE11
 * @implements B4DA:1192:0008:FBE0
 * @implements B4DA:119A:0020:001D
 * @implements B4DA:11BA:0008:43E5
 * @implements B4DA:11C2:0011:9942
 * @implements B4DA:11D3:0023:09B4
 * @implements B4DA:11F6:0019:9D97
 * @implements B4DA:120F:000A:5058
 * @implements B4DA:1219:0014:EB5F
 * @implements B4DA:122D:0018:9D99
 * @implements B4DA:1245:000C:440E
 * @implements B4DA:1251:000D:69B1
 * @implements B4DA:125E:000E:1905
 * @implements B4DA:126C:000D:EA8D
 * @implements B4DA:1279:0019:BCF8
 * @implements B4DA:1292:0018:5919
 * @implements B4DA:12AA:000A:5058
 * @implements B4DA:12B4:0014:EB5F
 * @implements B4DA:12C8:0023:6E82
 * @implements B4DA:12EB:002A:B94B
 * @implements B4DA:1315:000E:1EBD
 * @implements B4DA:1323:000A:EA7C
 * @implements B4DA:132D:000A:A344
 * @implements B4DA:1337:0025:F417
 * @implements B4DA:135C:0008:C54E
 * @implements B4DA:1364:0014:149F
 * @implements B4DA:1378:000A:5058
 * @implements B4DA:1382:0014:EB5F
 * @implements B4DA:1396:000E:38B5
 * @implements B4DA:13A4:000D:BCD8
 * @implements B4DA:13B1:000B:49F5
 * @implements B4DA:13BC:001D:52B6
 * @implements B4DA:13D9:0006:0569
 * @implements B4DA:13DF:002C:2B53
 * @implements B4DA:140B:0008:43E5
 * @implements B4DA:1413:0008:64F7
 * @implements B4DA:141B:0006:0569
 * @implements B4DA:1421:0031:E430
 * @implements B4DA:1452:0033:28A2
 * @implements B4DA:1485:0008:33E5
 * @implements B4DA:148D:0005:E089
 * @implements B4DA:1492:0020:5F51
 * @implements B4DA:14B2:0026:4E11
 * @implements B4DA:14D8:0008:32A8
 * @implements B4DA:14E0:0005:6168
 * @implements B4DA:14E5:002C:97CE
 * @implements B4DA:1511:0008:43E5
 * @implements B4DA:1519:000A:C6DA
 * @implements B4DA:1523:001B:C82E
 * @implements B4DA:153E:000A:5058
 * @implements B4DA:1548:0014:EB5F
 * @implements B4DA:155C:000E:B9A4
 * @implements B4DA:156A:0012:9005
 * @implements B4DA:157C:0026:46F6
 * @implements B4DA:15A2:000A:5058
 * @implements B4DA:15AC:0014:EB5F
 * @implements B4DA:15C0:0005:A7AE
 * @implements B4DA:15C5:001F:F7C7
 * @implements B4DA:15E4:000A:5058
 * @implements B4DA:15EE:0014:EB5F
 * @implements B4DA:1602:0013:480E
 * @implements B4DA:160A:000B:DB18
 * @implements B4DA:1615:000D:BCD8
 * @implements B4DA:1622:000B:49F5
 * @implements B4DA:162D:0017:9D01
 * @implements B4DA:1644:0002:D0BA
 * @implements B4DA:1646:0019:CAB6
 * @implements B4DA:1661:0005:09A8
 * @implements B4DA:1666:001F:95BA
 * @implements B4DA:1667:001E:27BA
 * @implements B4DA:1685:0009:CDDB
 * @implements B4DA:1689:0005:7934
 * @implements B4DA:168E:000F:BACE
 * @implements B4DA:168F:000E:34CE
 * @implements B4DA:169D:0008:C894
 * @implements B4DA:16A5:0009:C1B5
 * @implements B4DA:16AE:0006:8488
 * @implements B4DA:16B4:0004:8B0A
 * @implements B4DA:16B8:000D:68ED
 * @implements B4DA:16C5:0006:F7CE
 *
 * Called From: 34DA:0039:0005:0000
 */
void emu_Security_Main()
{
l__1099:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x20);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_ax = 0x1;
	emu_get_memory16(emu_ds, 0x00, 0x2580) = emu_ax;
	emu_get_memory16(emu_ds, 0x00, 0x3C4A) = emu_ax;
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x3A38);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax == 0) goto l__10BD;
	emu_cmpw(&emu_ax, 0x1);
	if (emu_ax != 0x1) {
		emu_cmpw(&emu_ax, 0x2);
		if (emu_ax == 0x2) goto l__10D1;
	}
	goto l__10C7;
l__10BD:
	emu_get_memory16(emu_ss, emu_bp, -0x18) = emu_ds;
	emu_get_memory16(emu_ss, emu_bp, -0x1A) = 0x25A4;
	goto l__10DB;
l__10C7:
	emu_get_memory16(emu_ss, emu_bp, -0x18) = emu_ds;
	emu_get_memory16(emu_ss, emu_bp, -0x1A) = 0x25AE;
	goto l__10DB;
l__10D1:
	emu_get_memory16(emu_ss, emu_bp, -0x18) = emu_ds;
	emu_get_memory16(emu_ss, emu_bp, -0x1A) = 0x25B8;
	goto l__10DB;
l__10DB:
	emu_ax = 0x3;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x10E4); emu_cs = 0x252E; f__252E_0001_0018_08B3();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }
l__10E4:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0xA) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0xC) = emu_ax;
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x6CE1);
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x6CDF);
	emu_get_memory16(emu_ss, emu_bp, -0xE) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x10) = emu_dx;
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x38DE);
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x38DC);
	emu_addw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x38DA));
	emu_addw(&emu_ax, 0xFC18);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_ax;
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x38E0));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x38DE));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x38DC));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x38DA));
	emu_push(emu_ds);
	emu_ax = 0x25C3;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1126); emu_cs = 0x0642; f__0642_075D_0011_C164();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }
l__1126:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x112F); emu_cs = 0x253D; f__253D_0000_0013_38F4();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }
l__112F:
	emu_addw(&emu_sp, 0xC);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x3A38);
	emu_dx = 0x3;
	emu_imuluw(&emu_ax, emu_dx);
	emu_incw(&emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x38DC));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x38DA));
	emu_push(emu_cs); emu_push(0x114F); emu_cs = 0x2502; f__2502_0165_0027_41E7();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }
l__114F:
	emu_addw(&emu_sp, 0x6);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1159); emu_cs = 0x2502; f__2502_00FA_0009_9EB2();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }
l__1159:
	emu_addw(&emu_sp, 0x8);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs); emu_push(0x116D); emu_cs = 0x2502; f__2502_0008_0015_FFBD();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }
l__116D:
	emu_addw(&emu_sp, 0x8);
	emu_ax = 0xF;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C38));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C36));
	emu_push(emu_cs); emu_push(0x1181); emu_cs = 0x259E; f__259E_0006_0016_858A();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }
l__1181:
	emu_addw(&emu_sp, 0x6);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3A38));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x18));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x1A));
	emu_push(emu_cs);
	emu_push(0x1192); f__B4DA_0000_002C_B3C2();
l__1192:
	emu_addw(&emu_sp, 0x6);
	emu_push(emu_cs); emu_push(0x119A); emu_cs = 0x2B6C; f__2B6C_0137_0020_C73F();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }
l__119A:
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_ax = 0xC8;
	emu_push(emu_ax);
	emu_ax = 0x28;
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
	if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }
l__11BA:
	emu_addw(&emu_sp, 0x10);
	emu_push(emu_cs); emu_push(0x11C2); emu_cs = 0x2B6C; f__2B6C_0169_001E_6939();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }
l__11C2:
	emu_ax = 0xF;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C34));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C32));
	emu_push(emu_cs); emu_push(0x11D3); emu_cs = 0x259E; f__259E_0006_0016_858A();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }
l__11D3:
	emu_addw(&emu_sp, 0x6);
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_ax = 0x1;
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
l__11F6:
	emu_addw(&emu_sp, 0x12);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x38DC));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x38DA));
	emu_push(emu_cs); emu_push(0x120F); emu_cs = 0x2502; f__2502_0165_0027_41E7();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }
l__120F:
	emu_addw(&emu_sp, 0x6);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1219); emu_cs = 0x2502; f__2502_00FA_0009_9EB2();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }
l__1219:
	emu_addw(&emu_sp, 0x8);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs); emu_push(0x122D); emu_cs = 0x2502; f__2502_0008_0015_FFBD();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }
l__122D:
	emu_addw(&emu_sp, 0x8);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x12);
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x25CB;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs); emu_push(0x1245); emu_cs = 0x01F7; f__01F7_3803_001E_AAD4();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }
l__1245:
	emu_addw(&emu_sp, 0xC);
	emu_ax = 0x8;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1251); emu_cs = 0x07AE; f__07AE_0000_00DF_A32C();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }
l__1251:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x14) = emu_ax;
	emu_ax = 0x4;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x125E); emu_cs = 0x2598; f__2598_0000_0017_EB80();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }
l__125E:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x16) = emu_ax;
	emu_xorw(&emu_di, emu_di);
	emu_get_memory16(emu_ss, emu_bp, -0x20) = 0x0;
	goto l__168F;
l__126C:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x12);
	emu_decw(&emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1279); emu_cs = 0x2537; f__2537_000C_001C_86CB();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }
l__1279:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_si = emu_ax;
	emu_ax = emu_si;
	emu_dx = 0x3;
	emu_imuluw(&emu_ax, emu_dx);
	emu_addw(&emu_ax, 0xA);
	emu_si = emu_ax;
	emu_ax = 0x8;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1292); emu_cs = 0x07AE; f__07AE_0000_00DF_A32C();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }
l__1292:
	emu_pop(&emu_cx);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_ax = emu_si;
	emu_incw(&emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x38DC));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x38DA));
	emu_push(emu_cs); emu_push(0x12AA); emu_cs = 0x2502; f__2502_0165_0027_41E7();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }
l__12AA:
	emu_addw(&emu_sp, 0x6);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x12B4); emu_cs = 0x2502; f__2502_00FA_0009_9EB2();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }
l__12B4:
	emu_addw(&emu_sp, 0x8);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs); emu_push(0x12C8); emu_cs = 0x2502; f__2502_0008_0015_FFBD();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }
l__12C8:
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
	emu_push(emu_cs); emu_push(0x12EB); emu_cs = 0x352A; overlay(0x352A, 0); f__B52A_0000_0019_1617();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }
l__12EB:
	emu_addw(&emu_sp, 0x12);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = 0x4;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x992B));
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x992D);
	emu_cl = 0x3;
	emu_shlw(&emu_ax, emu_cl);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x1315); emu_cs = 0x352A; overlay(0x352A, 0); f__B52A_04AC_0033_548A();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }
l__1315:
	emu_addw(&emu_sp, 0xE);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x1323); emu_cs = 0x352A; overlay(0x352A, 0); f__B52A_0476_0030_9D41();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }
l__1323:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_ax = 0x4;
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x132D); f__B4DA_0A8E_0025_4AC8();
l__132D:
	emu_pop(&emu_cx);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6D5D));
	emu_push(emu_cs); emu_push(0x1337); emu_cs = 0x2642; f__2642_0002_005E_87F6();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }
l__1337:
	emu_pop(&emu_cx);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = 0x4;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x9931));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x992F));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x992B));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x992D));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x992B));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x992D));
	emu_push(emu_cs); emu_push(0x135C); emu_cs = 0x24D0; f__24D0_000D_0039_C17D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }
l__135C:
	emu_addw(&emu_sp, 0x10);
	emu_push(emu_cs); emu_push(0x1364); emu_cs = 0x2642; f__2642_0069_0008_D517();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }
l__1364:
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_si);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x38DC));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x38DA));
	emu_push(emu_cs); emu_push(0x1378); emu_cs = 0x2502; f__2502_0165_0027_41E7();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }
l__1378:
	emu_addw(&emu_sp, 0x6);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1382); emu_cs = 0x2502; f__2502_00FA_0009_9EB2();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }
l__1382:
	emu_addw(&emu_sp, 0x8);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs); emu_push(0x1396); emu_cs = 0x2502; f__2502_0008_0015_FFBD();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }
l__1396:
	emu_addw(&emu_sp, 0x8);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs);
	emu_push(0x13A4); f__B4DA_176C_000F_12AD();
l__13A4:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs); emu_push(0x13B1); emu_cs = 0x01F7; emu_String_strlen();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }
l__13B1:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_xorw(&emu_dx, emu_dx);
	emu_cl = 0x2;
	emu_push(emu_cs); emu_push(0x13BC); emu_cs = 0x01F7; emu_Tools_Shld();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }
l__13BC:
	emu_bx = emu_get_memory16(emu_ds, 0x00, 0x76AE);
	emu_cx = emu_get_memory16(emu_ds, 0x00, 0x76AC);
	emu_addw(&emu_cx, emu_ax);
	emu_adcw(&emu_bx, emu_dx);
	emu_get_memory16(emu_ds, 0x00, 0x2584) = emu_bx;
	emu_get_memory16(emu_ds, 0x00, 0x2582) = emu_cx;
	emu_ax = 0x9;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x13D9); emu_cs = 0x07AE; f__07AE_0000_00DF_A32C();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }
l__13D9:
	emu_pop(&emu_cx);
	emu_push(emu_cs); emu_push(0x13DF); emu_cs = 0x2B6C; f__2B6C_0137_0020_C73F();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }
l__13DF:
	emu_ax = 0x4;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x9931);
	emu_addw(&emu_ax, 0x10);
	emu_push(emu_ax);
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x992F);
	emu_addw(&emu_ax, 0x2);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x992B);
	emu_subw(&emu_ax, 0x8);
	emu_push(emu_ax);
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x992D);
	emu_decw(&emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x140B); emu_cs = 0x24D0; f__24D0_000D_0039_C17D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }
l__140B:
	emu_addw(&emu_sp, 0x10);
	emu_push(emu_cs); emu_push(0x1413); emu_cs = 0x2B6C; f__2B6C_0169_001E_6939();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }
l__1413:
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x141B); emu_cs = 0x2598; f__2598_0000_0017_EB80();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }
l__141B:
	emu_pop(&emu_cx);
	emu_push(emu_cs); emu_push(0x1421); emu_cs = 0x2B6C; f__2B6C_0137_0020_C73F();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }
l__1421:
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x9931);
	emu_addw(&emu_ax, 0xC);
	emu_push(emu_ax);
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x992F);
	emu_cl = 0x3;
	emu_shlw(&emu_ax, emu_cl);
	emu_addw(&emu_ax, 0xC);
	emu_push(emu_ax);
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x992B);
	emu_subw(&emu_ax, 0x6);
	emu_push(emu_ax);
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x992D);
	emu_cl = 0x3;
	emu_shlw(&emu_ax, emu_cl);
	emu_subw(&emu_ax, 0x6);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1452); emu_cs = 0x10E4; f__10E4_0008_0048_5BD4();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }
l__1452:
	emu_addw(&emu_sp, 0xC);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x9931);
	emu_addw(&emu_ax, 0x4);
	emu_push(emu_ax);
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x992F);
	emu_cl = 0x3;
	emu_shlw(&emu_ax, emu_cl);
	emu_addw(&emu_ax, 0x4);
	emu_push(emu_ax);
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x992B);
	emu_subw(&emu_ax, 0x2);
	emu_push(emu_ax);
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x992D);
	emu_cl = 0x3;
	emu_shlw(&emu_ax, emu_cl);
	emu_subw(&emu_ax, 0x2);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1485); emu_cs = 0x10E4; f__10E4_0008_0048_5BD4();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }
l__1485:
	emu_addw(&emu_sp, 0xC);
	emu_push(emu_cs); emu_push(0x148D); emu_cs = 0x2B6C; f__2B6C_0169_001E_6939();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }
l__148D:
	emu_push(emu_cs); emu_push(0x1492); emu_cs = 0x29E8; emu_Input_History_Clear();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }
l__1492:
	emu_get_memory8(emu_ds, 0x00, 0x9939) = 0x0;
	emu_ax = 0x22;
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
	if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }
l__14B2:
	emu_addw(&emu_sp, 0xE);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = 0x34DA;
	emu_push(emu_ax);
	emu_ax = 0x3E;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_ax = 0x9;
	emu_push(emu_ax);
	emu_ax = 0x50;
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x9939;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x14D8); emu_cs = 0x3527; overlay(0x3527, 0); f__B527_0000_0016_BBD9();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }
l__14D8:
	emu_addw(&emu_sp, 0x12);
	emu_push(emu_cs);
	emu_push(0x14E0); f__B4DA_1860_0008_857D();
l__14E0:
	emu_push(emu_cs); emu_push(0x14E5); emu_cs = 0x2B6C; f__2B6C_0137_0020_C73F();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }
l__14E5:
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = 0x4;
	emu_push(emu_ax);
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x9931);
	emu_addw(&emu_ax, 0x10);
	emu_push(emu_ax);
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x992F);
	emu_addw(&emu_ax, 0x2);
	emu_push(emu_ax);
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x992B);
	emu_subw(&emu_ax, 0x8);
	emu_push(emu_ax);
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x992D);
	emu_decw(&emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1511); emu_cs = 0x24D0; f__24D0_000D_0039_C17D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }
l__1511:
	emu_addw(&emu_sp, 0x10);
	emu_push(emu_cs); emu_push(0x1519); emu_cs = 0x2B6C; f__2B6C_0169_001E_6939();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }
l__1519:
	emu_push(emu_ds);
	emu_ax = 0x9939;
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x1523); f__B4DA_16F8_001A_D84F();
l__1523:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_ax = emu_si;
	emu_addw(&emu_ax, 0x2);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x38DC));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x38DA));
	emu_push(emu_cs); emu_push(0x153E); emu_cs = 0x2502; f__2502_0165_0027_41E7();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }
l__153E:
	emu_addw(&emu_sp, 0x6);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1548); emu_cs = 0x2502; f__2502_00FA_0009_9EB2();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }
l__1548:
	emu_addw(&emu_sp, 0x8);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs); emu_push(0x155C); emu_cs = 0x2502; f__2502_0008_0015_FFBD();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }
l__155C:
	emu_addw(&emu_sp, 0x8);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs);
	emu_push(0x156A); f__B4DA_16F8_001A_D84F();
l__156A:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_ds);
	emu_ax = 0x9939;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs); emu_push(0x157C); emu_cs = 0x01F7; emu_String_strcmp();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }
l__157C:
	emu_addw(&emu_sp, 0x8);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax == 0) goto l__15C5;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x3A38);
	emu_dx = 0x3;
	emu_imuluw(&emu_ax, emu_dx);
	emu_addw(&emu_ax, 0x3);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x38DC));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x38DA));
	emu_push(emu_cs); emu_push(0x15A2); emu_cs = 0x2502; f__2502_0165_0027_41E7();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }
l__15A2:
	emu_addw(&emu_sp, 0x6);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x15AC); emu_cs = 0x2502; f__2502_00FA_0009_9EB2();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }
l__15AC:
	emu_addw(&emu_sp, 0x8);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs); emu_push(0x15C0); emu_cs = 0x2502; f__2502_0008_0015_FFBD();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }
l__15C0:
	emu_addw(&emu_sp, 0x8);
	goto l__160A;
l__15C5:
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x3A38);
	emu_dx = 0x3;
	emu_imuluw(&emu_ax, emu_dx);
	emu_addw(&emu_ax, 0x2);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x38DC));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x38DA));
	emu_push(emu_cs); emu_push(0x15E4); emu_cs = 0x2502; f__2502_0165_0027_41E7();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }
l__15E4:
	emu_addw(&emu_sp, 0x6);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x15EE); emu_cs = 0x2502; f__2502_00FA_0009_9EB2();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }
l__15EE:
	emu_addw(&emu_sp, 0x8);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs); emu_push(0x1602); emu_cs = 0x2502; f__2502_0008_0015_FFBD();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }
l__1602:
	emu_addw(&emu_sp, 0x8);
	emu_get_memory16(emu_ss, emu_bp, -0x20) = 0x1;
l__160A:
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs);
	emu_push(0x1615); f__B4DA_176C_000F_12AD();
l__1615:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs); emu_push(0x1622); emu_cs = 0x01F7; emu_String_strlen();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }
l__1622:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_xorw(&emu_dx, emu_dx);
	emu_cl = 0x2;
	emu_push(emu_cs); emu_push(0x162D); emu_cs = 0x01F7; emu_Tools_Shld();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }
l__162D:
	emu_bx = emu_get_memory16(emu_ds, 0x00, 0x76AE);
	emu_cx = emu_get_memory16(emu_ds, 0x00, 0x76AC);
	emu_addw(&emu_cx, emu_ax);
	emu_adcw(&emu_bx, emu_dx);
	emu_get_memory16(emu_ss, emu_bp, -0x1C) = emu_bx;
	emu_get_memory16(emu_ss, emu_bp, -0x1E) = emu_cx;
	emu_push(emu_cs); emu_push(0x1644); emu_cs = 0x29E8; emu_Input_History_Clear();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }
l__1644:
	goto l__1667;
l__1646:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x1C);
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x1E);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x76AE));
	if ((int16)emu_ax < (int16)emu_get_memory16(emu_ds, 0x00, 0x76AE)) { /* Unresolved jump */ emu_ip = 0x165F; emu_last_cs = 0xB4DA; emu_last_ip = 0x1650; emu_last_length = 0x0019; emu_last_crc = 0xCAB6; emu_call(); return; }
	if ((int16)emu_ax > (int16)emu_get_memory16(emu_ds, 0x00, 0x76AE)) { /* Unresolved jump */ emu_ip = 0x165A; emu_last_cs = 0xB4DA; emu_last_ip = 0x1652; emu_last_length = 0x0019; emu_last_crc = 0xCAB6; emu_call(); return; }
	emu_cmpw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x76AC));
	if (emu_dx <= emu_get_memory16(emu_ds, 0x00, 0x76AC)) { /* Unresolved jump */ emu_ip = 0x165F; emu_last_cs = 0xB4DA; emu_last_ip = 0x1658; emu_last_length = 0x0019; emu_last_crc = 0xCAB6; emu_call(); return; }
	emu_ax = 0x1;
	goto l__1661;
l__1661:
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x1666); f__B4DA_0308_0018_F99F();
l__1666:
	emu_pop(&emu_cx);
l__1667:
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x76AE);
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x76AC);
	emu_addw(&emu_dx, 0x78);
	emu_adcw(&emu_ax, 0x0);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x1C));
	if ((int16)emu_ax > (int16)emu_get_memory16(emu_ss, emu_bp, -0x1C)) goto l__1689;
	if ((int16)emu_ax < (int16)emu_get_memory16(emu_ss, emu_bp, -0x1C)) { /* Unresolved jump */ emu_ip = 0x1680; emu_last_cs = 0xB4DA; emu_last_ip = 0x1679; emu_last_length = 0x001E; emu_last_crc = 0x27BA; emu_call(); return; }
	emu_cmpw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0x1E));
	if (emu_dx >= emu_get_memory16(emu_ss, emu_bp, -0x1E)) goto l__1689;
	emu_push(emu_cs); emu_push(0x1685); emu_cs = 0x29E8; emu_Input_Keyboard_NextKey();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }
l__1685:
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax == 0) goto l__1646;
l__1689:
	emu_push(emu_cs);
	emu_push(0x168E); f__B4DA_1860_0008_857D();
l__168E:
	emu_incw(&emu_di);
l__168F:
	emu_cmpw(&emu_di, 0x3);
	if ((int16)emu_di >= (int16)0x3) goto l__169D;
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x20), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp, -0x20) != 0x0) goto l__169D;
	goto l__126C;
l__169D:
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_push(emu_cs); emu_push(0x16A5); emu_cs = 0x07AE; f__07AE_0000_00DF_A32C();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }
l__16A5:
	emu_pop(&emu_cx);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x16));
	emu_push(emu_cs); emu_push(0x16AE); emu_cs = 0x2598; f__2598_0000_0017_EB80();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }
l__16AE:
	emu_pop(&emu_cx);
	emu_push(emu_cs); emu_push(0x16B4); emu_cs = 0x29E8; emu_Input_History_Clear();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }
l__16B4:
	emu_push(emu_cs);
	emu_push(0x16B8); f__B4DA_02E0_0023_E297();
l__16B8:
	emu_xorw(&emu_ax, emu_ax);
	emu_get_memory16(emu_ds, 0x00, 0x3C4A) = emu_ax;
	emu_get_memory16(emu_ds, 0x00, 0x2580) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x20);
	goto l__16C5;
l__16C5:
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_sp = emu_bp;
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
 * @implements B4DA:16E4:0004:EF79
 * @implements B4DA:16E8:0008:37B4
 * @implements B4DA:16EB:0005:89B6
 * @implements B4DA:16F0:0005:EAF1
 * @implements B4DA:16F5:0003:2E57
 *
 * Called From: 34DA:003E:0005:0000
 */
void f__B4DA_16CB_001D_31CC()
{
l__16CB:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_si);
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x2584);
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x2582);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x76AE));
	if ((int16)emu_ax > (int16)emu_get_memory16(emu_ds, 0x00, 0x76AE)) goto l__16E8;
	if ((int16)emu_ax >= (int16)emu_get_memory16(emu_ds, 0x00, 0x76AE)) {
		emu_cmpw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x76AC));
		if (emu_dx >= emu_get_memory16(emu_ds, 0x00, 0x76AC)) goto l__16E8;
	}
l__16E4:
	emu_xorw(&emu_si, emu_si);
	goto l__16EB;
l__16E8:
	emu_si = 0x1;
l__16EB:
	emu_push(emu_si);
	emu_push(emu_cs);
	emu_push(0x16F0); f__B4DA_0308_0018_F99F();
l__16F0:
	emu_pop(&emu_cx);
	emu_xorw(&emu_ax, emu_ax);
	goto l__16F5;
l__16F5:
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
 * @implements B4DA:1712:002D:1CF6
 * @implements B4DA:173F:002D:F8A4
 * @implements B4DA:1746:0026:4BF0
 * @implements B4DA:1755:0017:BE28
 * @implements B4DA:1758:0014:A037
 *
 * Called From: B4DA:1520:000A:C6DA
 * Called From: B4DA:1567:000E:B9A4
 */
void f__B4DA_16F8_001A_D84F()
{
l__16F8:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x8);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_dx = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_dx;
	goto l__1758;
l__1712:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x0);
	emu_ax = (int8)emu_al;
	emu_bx = emu_ax;
	emu_testb(&emu_get_memory8(emu_ds, emu_bx, 0x76BD), 0xE);
	if ((emu_get_memory8(emu_ds, emu_bx, 0x76BD) & 0xE) == 0) goto l__1755;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x0);
	emu_ax = (int8)emu_al;
	emu_bx = emu_ax;
	emu_testb(&emu_get_memory8(emu_ds, emu_bx, 0x76BD), 0x8);
	if ((emu_get_memory8(emu_ds, emu_bx, 0x76BD) & 0x8) == 0) goto l__1746;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x0);
	emu_ax = (int8)emu_al;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x173F); emu_cs = 0x01F7; emu_String_toupper();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }
l__173F:
	emu_pop(&emu_cx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_get_memory8(emu_es, emu_bx, 0x0) = emu_al;
l__1746:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x0);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_get_memory8(emu_es, emu_bx, 0x0) = emu_al;
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x8));
l__1755:
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x4));
l__1758:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x0), 0x0);
	if (emu_get_memory8(emu_es, emu_bx, 0x0) != 0x0) goto l__1712;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_get_memory8(emu_es, emu_bx, 0x0) = 0x0;
	emu_sp = emu_bp;
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
 * @implements B4DA:177B:0017:EE19
 * @implements B4DA:1792:0023:3E89
 * @implements B4DA:17B5:0008:F38A
 * @implements B4DA:17BD:0022:549D
 * @implements B4DA:17DF:0012:BC2E
 * @implements B4DA:17F1:0021:AF3F
 * @implements B4DA:1812:0016:C2B4
 * @implements B4DA:1828:0023:F42C
 * @implements B4DA:184B:0008:F38A
 * @implements B4DA:1853:0008:1199
 * @implements B4DA:185B:0005:8BF7
 *
 * Called From: B4DA:13A1:000E:38B5
 * Called From: B4DA:1612:000B:DB18
 * Called From: B4DA:1612:0013:480E
 */
void f__B4DA_176C_000F_12AD()
{
l__176C:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x2);
	emu_ax = 0x4;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x177B); emu_cs = 0x2598; f__2598_0000_0017_EB80();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }
l__177B:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ax;
	emu_ax = 0x28;
	emu_push(emu_ax);
	emu_ax = 0x140;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1792); emu_cs = 0x2B6C; f__2B6C_0197_00CE_4D32();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }
l__1792:
	emu_addw(&emu_sp, 0x8);
	emu_ax = 0x4;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = 0x28;
	emu_push(emu_ax);
	emu_ax = 0x28;
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
	if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }
l__17B5:
	emu_addw(&emu_sp, 0x10);
	emu_push(emu_cs); emu_push(0x17BD); emu_cs = 0x2B6C; f__2B6C_0292_0028_3AD7();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }
l__17BD:
	emu_ax = 0x4;
	emu_push(emu_ax);
	emu_ax = 0x4;
	emu_push(emu_ax);
	emu_ax = 0x28;
	emu_push(emu_ax);
	emu_ax = 0x28;
	emu_push(emu_ax);
	emu_ax = 0xA0;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x17DF); emu_cs = 0x24D0; f__24D0_000D_0039_C17D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }
l__17DF:
	emu_addw(&emu_sp, 0x10);
	emu_ax = 0x130;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x17F1); f__B4DA_1893_001C_7AC4();
l__17F1:
	emu_addw(&emu_sp, 0x6);
	emu_ax = 0x32;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6D5B));
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_ax = 0x4;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x1812); emu_cs = 0x10E4; f__10E4_1EF1_0040_01F8();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }
l__1812:
	emu_addw(&emu_sp, 0xE);
	emu_ax = 0x28;
	emu_push(emu_ax);
	emu_ax = 0x140;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1828); emu_cs = 0x2B6C; f__2B6C_0197_00CE_4D32();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }
l__1828:
	emu_addw(&emu_sp, 0x8);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = 0x4;
	emu_push(emu_ax);
	emu_ax = 0x28;
	emu_push(emu_ax);
	emu_ax = 0x28;
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
	if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }
l__184B:
	emu_addw(&emu_sp, 0x10);
	emu_push(emu_cs); emu_push(0x1853); emu_cs = 0x2B6C; f__2B6C_0292_0028_3AD7();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }
l__1853:
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_cs); emu_push(0x185B); emu_cs = 0x2598; f__2598_0000_0017_EB80();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }
l__185B:
	emu_pop(&emu_cx);
	emu_sp = emu_bp;
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
 * @implements B4DA:1868:0021:A4DB
 * @implements B4DA:1889:0008:43E5
 * @implements B4DA:1891:0002:2597
 *
 * Called From: B4DA:14DD:0008:32A8
 * Called From: B4DA:168B:0005:7934
 * Called From: B4DA:168B:0009:CDDB
 */
void f__B4DA_1860_0008_857D()
{
l__1860:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_cs); emu_push(0x1868); emu_cs = 0x2B6C; f__2B6C_0137_0020_C73F();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }
l__1868:
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = 0x4;
	emu_push(emu_ax);
	emu_ax = 0x28;
	emu_push(emu_ax);
	emu_ax = 0x28;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = 0xA0;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1889); emu_cs = 0x24D0; f__24D0_000D_0039_C17D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }
l__1889:
	emu_addw(&emu_sp, 0x10);
	emu_push(emu_cs); emu_push(0x1891); emu_cs = 0x2B6C; f__2B6C_0169_001E_6939();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }
l__1891:
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
 * @implements B4DA:18AC:0003:5DAC
 * @implements B4DA:18AF:0003:1DA7
 * @implements B4DA:18B2:0004:E7F9
 * @implements B4DA:18B6:000F:1B45
 * @implements B4DA:18C5:003C:F110
 * @implements B4DA:18C8:0039:A880
 * @implements B4DA:18FA:0007:D2BA
 * @implements B4DA:1901:000F:1B44
 * @implements B4DA:1910:004A:C4CC
 * @implements B4DA:1913:0047:A299
 * @implements B4DA:191C:003E:B159
 * @implements B4DA:1953:0007:F720
 * @implements B4DA:1958:0002:C1BA
 * @implements B4DA:195A:005A:BD4C
 * @implements B4DA:195D:0057:84AF
 * @implements B4DA:199C:0018:43B1
 * @implements B4DA:19AD:0007:4963
 * @implements B4DA:19B4:0015:DD53
 * @implements B4DA:19C9:0011:671C
 * @implements B4DA:19CE:000C:1C10
 * @implements B4DA:19DA:0006:AC2E
 * @implements B4DA:19E0:0006:F7CE
 *
 * Called From: B4DA:0BB1:0012:DA23
 * Called From: B4DA:17EE:0012:BC2E
 */
void f__B4DA_1893_001C_7AC4()
{
l__1893:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x2);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_xorw(&emu_di, emu_di);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = 0x0;
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_ax != 0) goto l__18AF;
	emu_xorw(&emu_ax, emu_ax);
l__18AC:
	goto l__19E0;
l__18AF:
	goto l__19CE;
l__18B2:
	emu_xorw(&emu_si, emu_si);
	goto l__18C8;
l__18B6:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_incw(&emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x0);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x18C5); emu_cs = 0x2521; f__2521_000F_0022_6D87();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }
l__18C5:
	emu_pop(&emu_cx);
	emu_addw(&emu_si, emu_ax);
l__18C8:
	emu_cmpw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0xA));
	if ((int16)emu_si < (int16)emu_get_memory16(emu_ss, emu_bp,  0xA)) {
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
		emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x0), 0x2E);
		if (emu_get_memory8(emu_es, emu_bx, 0x0) != 0x2E) {
			emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
			emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x0), 0x21);
			if (emu_get_memory8(emu_es, emu_bx, 0x0) != 0x21) {
				emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
				emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x0), 0x3F);
				if (emu_get_memory8(emu_es, emu_bx, 0x0) != 0x3F) {
					emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
					emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x0), 0x0);
					if (emu_get_memory8(emu_es, emu_bx, 0x0) != 0x0) {
						emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
						emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x0), 0xD);
						if (emu_get_memory8(emu_es, emu_bx, 0x0) != 0xD) goto l__18B6;
					}
				}
			}
		}
	}
l__18FA:
	emu_cmpw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0xA));
	if ((int16)emu_si < (int16)emu_get_memory16(emu_ss, emu_bp,  0xA)) goto l__191C;
	goto l__1913;
l__1901:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_decw(&emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x0);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1910); emu_cs = 0x2521; f__2521_000F_0022_6D87();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }
l__1910:
	emu_pop(&emu_cx);
	emu_subw(&emu_si, emu_ax);
l__1913:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x0), 0x20);
	if (emu_get_memory8(emu_es, emu_bx, 0x0) != 0x20) goto l__1901;
l__191C:
	emu_incw(&emu_di);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x0), 0x0);
	if (emu_get_memory8(emu_es, emu_bx, 0x0) != 0x0) {
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
		emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x0), 0x2E);
		if (emu_get_memory8(emu_es, emu_bx, 0x0) == 0x2E) goto l__1958;
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
		emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x0), 0x21);
		if (emu_get_memory8(emu_es, emu_bx, 0x0) == 0x21) goto l__1958;
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
		emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x0), 0x3F);
		if (emu_get_memory8(emu_es, emu_bx, 0x0) == 0x3F) goto l__1958;
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
		emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x0), 0x0);
		if (emu_get_memory8(emu_es, emu_bx, 0x0) == 0x0) goto l__1958;
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
		emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x0), 0xD);
		if (emu_get_memory8(emu_es, emu_bx, 0x0) == 0xD) goto l__1958;
	}
l__1953:
	emu_cmpw(&emu_di, 0x3);
	if ((int16)emu_di < (int16)0x3) goto l__19B4;
l__1958:
	goto l__195D;
l__195A:
	emu_incw(&emu_get_memory16(emu_ss, emu_bp,  0x6));
l__195D:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x0), 0x0);
	if (emu_get_memory8(emu_es, emu_bx, 0x0) != 0x0) {
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
		emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x0), 0x20);
		if (emu_get_memory8(emu_es, emu_bx, 0x0) == 0x20) goto l__195A;
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
		emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x0), 0x2E);
		if (emu_get_memory8(emu_es, emu_bx, 0x0) == 0x2E) goto l__195A;
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
		emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x0), 0x21);
		if (emu_get_memory8(emu_es, emu_bx, 0x0) == 0x21) goto l__195A;
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
		emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x0), 0x3F);
		if (emu_get_memory8(emu_es, emu_bx, 0x0) == 0x3F) goto l__195A;
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
		emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x0), 0x0);
		if (emu_get_memory8(emu_es, emu_bx, 0x0) == 0x0) goto l__195A;
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
		emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x0), 0xD);
		if (emu_get_memory8(emu_es, emu_bx, 0x0) == 0xD) goto l__195A;
	}
l__199C:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x0), 0x0);
	if (emu_get_memory8(emu_es, emu_bx, 0x0) != 0x0) {
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
		emu_get_memory8(emu_es, emu_bx, 0xFFFF) = 0x0;
	}
l__19AD:
	emu_xorw(&emu_di, emu_di);
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x2));
	goto l__19CE;
l__19B4:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x0), 0x0);
	if (emu_get_memory8(emu_es, emu_bx, 0x0) == 0x0) goto l__19C9;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_get_memory8(emu_es, emu_bx, 0x0) = 0xD;
	emu_incw(&emu_get_memory16(emu_ss, emu_bp,  0x6));
	goto l__19CE;
l__19C9:
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_xorw(&emu_di, emu_di);
l__19CE:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x0), 0x0);
	if (emu_get_memory8(emu_es, emu_bx, 0x0) == 0x0) goto l__19DA;
	goto l__18B2;
l__19DA:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x2);
	goto l__18AC;
l__19E0:
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_sp = emu_bp;
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
 * @implements B4DA:19FA:0002:FD3A
 * @implements B4DA:19FC:0009:522B
 * @implements B4DA:1A05:0006:D737
 * @implements B4DA:1A1C:000C:B8FA
 * @implements B4DA:1A28:0022:8A60
 * @implements B4DA:1A4A:0011:649B
 * @implements B4DA:1A5B:0015:98C5
 * @implements B4DA:1A61:000F:610E
 * @implements B4DA:1A70:0006:F3FB
 * @implements B4DA:1A76:0006:F7CE
 *
 * Called From: B4DA:0FBA:003B:FFB1
 * Called From: B4DA:0FBA:0030:D5CF
 */
void f__B4DA_19E6_0016_C1CB()
{
l__19E6:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x2);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_si = emu_get_memory16(emu_ss, emu_bp,  0xC);
	emu_di = emu_get_memory16(emu_ss, emu_bp,  0x12);
	emu_orw(&emu_di, emu_di);
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) goto l__19FC;
	emu_xorw(&emu_ax, emu_ax);
l__19FA:
	goto l__1A76;
l__19FC:
	emu_ax = 0x4;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1A05); emu_cs = 0x2598; f__2598_0000_0017_EB80();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }
l__1A05:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ax;
	goto l__1A1C;
l__1A1C:
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x10);
	emu_decw(&emu_get_memory16(emu_ss, emu_bp,  0x10));
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax != 0) { /* Unresolved jump */ emu_ip = 0x1A0B; emu_last_cs = 0xB4DA; emu_last_ip = 0x1A24; emu_last_length = 0x000C; emu_last_crc = 0xB8FA; emu_call(); return; }
	goto l__1A61;
l__1A28:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x0), 0x0);
	if (emu_get_memory8(emu_es, emu_bx, 0x0) == 0x0) { /* Unresolved jump */ emu_ip = 0x1A4D; emu_last_cs = 0xB4DA; emu_last_ip = 0x1A2F; emu_last_length = 0x0022; emu_last_crc = 0x8A60; emu_call(); return; }
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
	if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }
l__1A4A:
	emu_addw(&emu_sp, 0xE);
	emu_addw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x1A5B); emu_cs = 0x01F7; emu_String_strlen();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }
l__1A5B:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_incw(&emu_ax);
	emu_addw(&emu_get_memory16(emu_ss, emu_bp,  0x6), emu_ax);
l__1A61:
	emu_ax = emu_di;
	emu_decw(&emu_di);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax != 0) goto l__1A28;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_cs); emu_push(0x1A70); emu_cs = 0x2598; f__2598_0000_0017_EB80();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }
l__1A70:
	emu_pop(&emu_cx);
	emu_ax = 0x1;
	goto l__19FA;
l__1A76:
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

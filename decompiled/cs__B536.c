/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__B536_0000_004B_3AF8()
 *
 * @name f__B536_0000_004B_3AF8
 * @implements B536:0000:004B:3AF8 ()
 * @implements B536:004B:0018:9FD2
 * @implements B536:0063:001A:03A1
 * @implements B536:007D:000F:9A7C
 * @implements B536:008C:0005:E089
 * @implements B536:0091:0005:B085
 * @implements B536:0096:0010:094E
 * @implements B536:00A6:0024:6B9F
 * @implements B536:00CA:0009:B39B
 *
 * Called From: 3536:0020:0005:0000
 */
void f__B536_0000_004B_3AF8()
{
l__0000:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x2);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_al = emu_get_memory8(emu_ds, 0x00, 0x6C70);
	emu_ax = (int8)emu_al;
	emu_addw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x6C6C));
	emu_dx = emu_get_memory16(emu_ss, emu_bp,  0xA);
	emu_decw(&emu_dx);
	emu_imuluw(&emu_ax, emu_dx);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ax;
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x992D);
	emu_addw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x992F));
	emu_cl = 0x3;
	emu_shlw(&emu_ax, emu_cl);
	emu_subw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_si = emu_ax;
	emu_al = emu_get_memory8(emu_ds, 0x00, 0x6C71);
	emu_ax = (int8)emu_al;
	emu_addw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x6C6E));
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x9933);
	emu_decw(&emu_dx);
	emu_imuluw(&emu_ax, emu_dx);
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x992B);
	emu_addw(&emu_dx, emu_ax);
	emu_di = emu_dx;
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp,  0xE), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp,  0xE) == 0x0) goto l__004B;
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0xE);
	/* Unresolved jump */ emu_ip = 0x0057; emu_last_cs = 0xB536; emu_last_ip = 0x0049; emu_last_length = 0x004B; emu_last_crc = 0x3AF8; emu_call();
l__004B:
	emu_bx = emu_get_memory16(emu_ds, 0x00, 0x6D5D);
	emu_cl = 0x4;
	emu_shlw(&emu_bx, emu_cl);
	emu_ax = emu_get_memory16(emu_ds, emu_bx, 0x406A);
	emu_push(emu_ax);
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp,  0xC), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp,  0xC) == 0x0) goto l__0063;
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0xC);
	/* Unresolved jump */ emu_ip = 0x006F; emu_last_cs = 0xB536; emu_last_ip = 0x0061; emu_last_length = 0x0018; emu_last_crc = 0x9FD2; emu_call();
l__0063:
	emu_bx = emu_get_memory16(emu_ds, 0x00, 0x6D5D);
	emu_cl = 0x4;
	emu_shlw(&emu_bx, emu_cl);
	emu_ax = emu_get_memory16(emu_ds, emu_bx, 0x406C);
	emu_push(emu_ax);
	emu_push(emu_di);
	emu_push(emu_si);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x007D); emu_cs = 0x2BC2; f__2BC2_000A_0044_2E0E();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3536) { overlay(0x3536, 1); }
l__007D:
	emu_addw(&emu_sp, 0xC);
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x6C91), 0x0);
	if (emu_get_memory16(emu_ds, 0x00, 0x6C91) == 0x0) {
		emu_push(emu_cs); emu_push(0x008C); emu_cs = 0x2642; f__2642_0069_0008_D517();
		/* Check if this overlay should be reloaded */
		if (emu_cs == 0x3536) { overlay(0x3536, 1); }
	}
l__008C:
	emu_push(emu_cs); emu_push(0x0091); emu_cs = 0x29E8; emu_Input_History_Clear();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3536) { overlay(0x3536, 1); }
l__0091:
	emu_push(emu_cs); emu_push(0x0096); emu_cs = 0x29E8; f__29E8_07FA_0020_177A();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3536) { overlay(0x3536, 1); }
l__0096:
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x6C91), 0x0);
	if (emu_get_memory16(emu_ds, 0x00, 0x6C91) != 0x0) { /* Unresolved jump */ emu_ip = 0x00A7; emu_last_cs = 0xB536; emu_last_ip = 0x009B; emu_last_length = 0x0010; emu_last_crc = 0x094E; emu_call(); return; }
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6D5D));
	emu_push(emu_cs); emu_push(0x00A6); emu_cs = 0x2642; f__2642_0002_005E_87F6();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3536) { overlay(0x3536, 1); }
l__00A6:
	emu_pop(&emu_cx);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6D59));
	emu_al = emu_get_memory8(emu_ds, 0x00, 0x6C71);
	emu_ax = (int8)emu_al;
	emu_addw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x6C6E));
	emu_addw(&emu_ax, emu_di);
	emu_decw(&emu_ax);
	emu_push(emu_ax);
	emu_ax = emu_si;
	emu_addw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_decw(&emu_ax);
	emu_push(emu_ax);
	emu_push(emu_di);
	emu_push(emu_si);
	emu_ax = 0x353F;
	emu_es = emu_ax;

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_es, 0x00, 0x6668);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_es, 0x00, 0x666A);
	emu_push(0x00CA);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A60D31: emu_GUI_DrawRectangle(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0xB536; emu_last_ip = 0x00C5; emu_last_length = 0x0024; emu_last_crc = 0x6B9F;
			emu_call();
			return;
	}
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3536) { overlay(0x3536, 1); }
l__00CA:
	emu_addw(&emu_sp, 0xA);
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
 * Decompiled function f__B536_0129_000A_8178()
 *
 * @name f__B536_0129_000A_8178
 * @implements B536:0129:000A:8178 ()
 *
 * Called From: 3536:002F:0005:0000
 */
void f__B536_0129_000A_8178()
{
l__0129:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_get_memory8(emu_ds, 0x00, 0x6C8C) = 0x0;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B536_0148_0060_01F3()
 *
 * @name f__B536_0148_0060_01F3
 * @implements B536:0148:0060:01F3 ()
 * @implements B536:01A8:0006:9EB9
 * @implements B536:01A9:0005:FAB8
 * @implements B536:01AE:000E:5BB9
 * @implements B536:01BC:000C:EA0C
 * @implements B536:01C8:0009:451E
 * @implements B536:01D1:000A:DD58
 * @implements B536:01DB:000D:0562
 * @implements B536:01E8:0032:5EA7
 * @implements B536:021A:0005:99DE
 * @implements B536:0263:000F:4AE1
 * @implements B536:0272:0007:6ABE
 * @implements B536:02E7:0005:3811
 * @implements B536:02EC:0015:7F44
 * @implements B536:0301:0018:68DC
 * @implements B536:0319:0013:1C1F
 * @implements B536:032C:0004:CDBE
 * @implements B536:0338:0005:78BD
 * @implements B536:033D:0011:B8BF
 * @implements B536:0463:0009:A1E6
 * @implements B536:046C:002F:1EA6
 * @implements B536:049B:0002:C03A
 * @implements B536:049D:0003:23A2
 * @implements B536:04A0:000C:EFFF
 * @implements B536:04AC:004E:C8CD
 * @implements B536:04FA:0006:F7CE
 *
 * Called From: 3536:0039:0005:0000
 */
void f__B536_0148_0060_01F3()
{
l__0148:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x16);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_ax, emu_bp + 0xA);
	emu_get_memory16(emu_ss, emu_bp, -0x14) = emu_ss;
	emu_get_memory16(emu_ss, emu_bp, -0x16) = emu_ax;
	emu_get_memory8(emu_ds, 0x00, 0x3198) = 0x0;
	emu_xorw(&emu_ax, emu_ax);
	emu_get_memory16(emu_ds, 0x00, 0x8227) = emu_ax;
	emu_get_memory16(emu_ds, 0x00, 0x8229) = emu_ax;
	emu_get_memory8(emu_ds, 0x00, 0x822B) = 0x0;
	emu_al = 0x0;
	emu_get_memory8(emu_ds, 0x00, 0x821C) = emu_al;
	emu_get_memory8(emu_ds, 0x00, 0x821B) = emu_al;
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_dx = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_get_memory16(emu_ds, 0x00, 0x8223) = emu_ax;
	emu_get_memory16(emu_ds, 0x00, 0x8221) = emu_dx;
	emu_get_memory16(emu_ds, 0x00, 0x821F) = 0x0;
	emu_get_memory16(emu_ds, 0x00, 0x821D) = 0x0;
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x6D5B);
	emu_get_memory16(emu_ss, emu_bp, -0x10) = emu_ax;
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x6D59);
	emu_get_memory16(emu_ss, emu_bp, -0x12) = emu_ax;
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x6C91), 0x0);
	if (emu_get_memory16(emu_ds, 0x00, 0x6C91) != 0x0) goto l__01A9;
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6D5D));
	emu_push(emu_cs); emu_push(0x01A8); emu_cs = 0x2642; f__2642_0002_005E_87F6();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3536) { overlay(0x3536, 1); }
l__01A8:
	emu_pop(&emu_cx);
l__01A9:
	emu_push(emu_cs);
	emu_push(0x01AE); f__B536_088E_0017_56C5();
l__01AE:
	emu_get_memory8(emu_ss, emu_bp, -0x3) = emu_al;
	emu_al = emu_get_memory8(emu_ss, emu_bp, -0x3);
	emu_ax = (int8)emu_al;
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax != 0) goto l__01BC;
	goto l__04A0;
l__01BC:
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x821D);
	emu_orw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x821F));
	if (emu_ax == 0) goto l__01C8;
	goto l__0263;
l__01C8:
	emu_cmpb(&emu_get_memory8(emu_ss, emu_bp, -0x3), 0x25);
	if (emu_get_memory8(emu_ss, emu_bp, -0x3) == 0x25) goto l__01D1;
	goto l__0263;
l__01D1:
	emu_al = emu_get_memory8(emu_ds, 0x00, 0x821B);
	emu_ax = (int8)emu_al;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x01DB); emu_cs = 0x01F7; emu_String_tolower();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3536) { overlay(0x3536, 1); }
l__01DB:
	emu_pop(&emu_cx);
	emu_cmpw(&emu_ax, 0x64);
	if (emu_ax == 0x64) { /* Unresolved jump */ emu_ip = 0x021F; emu_last_cs = 0xB536; emu_last_ip = 0x01DF; emu_last_length = 0x000D; emu_last_crc = 0x0562; emu_call(); return; }
	emu_cmpw(&emu_ax, 0x73);
	if (emu_ax == 0x73) goto l__01E8;
	/* Unresolved jump */ emu_ip = 0x0261; emu_last_cs = 0xB536; emu_last_ip = 0x01E6; emu_last_length = 0x000D; emu_last_crc = 0x0562; emu_call();
l__01E8:
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x16), 0x4);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x16));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0xFFFE);
	emu_dx = emu_get_memory16(emu_es, emu_bx, 0xFFFC);
	emu_get_memory16(emu_ds, 0x00, 0x821F) = emu_ax;
	emu_get_memory16(emu_ds, 0x00, 0x821D) = emu_dx;
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x821D);
	emu_orw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x821F));
	if (emu_ax == 0) { /* Unresolved jump */ emu_ip = 0x021D; emu_last_cs = 0xB536; emu_last_ip = 0x0205; emu_last_length = 0x0032; emu_last_crc = 0x5EA7; emu_call(); return; }
	emu_al = emu_get_memory8(emu_ds, 0x00, 0x821C);
	emu_get_memory8(emu_ds, 0x00, 0x821A) = emu_al;
	emu_al = 0x0;
	emu_get_memory8(emu_ds, 0x00, 0x821C) = emu_al;
	emu_get_memory8(emu_ds, 0x00, 0x821B) = emu_al;
	emu_push(emu_cs);
	emu_push(0x021A); f__B536_088E_0017_56C5();
l__021A:
	emu_get_memory8(emu_ss, emu_bp, -0x3) = emu_al;
	goto l__0263;
l__0263:
	emu_al = emu_get_memory8(emu_ss, emu_bp, -0x3);
	emu_ax = (int8)emu_al;
	emu_decw(&emu_ax);
	emu_bx = emu_ax;
	emu_cmpw(&emu_bx, 0x1C);
	if (emu_bx <= 0x1C) goto l__0272;
	goto l__0463;
l__0272:
	emu_shlw(&emu_bx, 0x1);

	/* Jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_cs, emu_bx, 0x500);
	switch (emu_ip) {
		case 0x02E7: goto l__02E7;
		case 0x0338: goto l__0338;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0xB536; emu_last_ip = 0x0274; emu_last_length = 0x0007; emu_last_crc = 0x6ABE;
			emu_call();
			return;
	}
l__02E7:
	emu_push(emu_cs);
	emu_push(0x02EC); f__B536_0633_000A_6A3F();
l__02EC:
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x6D55);
	emu_orw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x6D57));
	if (emu_ax == 0) { /* Unresolved jump */ emu_ip = 0x032D; emu_last_cs = 0xB536; emu_last_ip = 0x02F3; emu_last_length = 0x0015; emu_last_crc = 0x7F44; emu_call(); return; }
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x6C91), 0x0);
	if (emu_get_memory16(emu_ds, 0x00, 0x6C91) == 0x0) {
		emu_push(emu_cs); emu_push(0x0301); emu_cs = 0x2642; f__2642_0069_0008_D517();
		/* Check if this overlay should be reloaded */
		if (emu_cs == 0x3536) { overlay(0x3536, 1); }
	}
l__0301:
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x319D));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x319B));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3199));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6790));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x678E));

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_ds, 0x00, 0x6D55);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_ds, 0x00, 0x6D57);
	emu_push(0x0319);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x35360020: overlay(0x3536, 0); f__B536_0000_004B_3AF8(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0xB536; emu_last_ip = 0x0315; emu_last_length = 0x0018; emu_last_crc = 0x68DC;
			emu_call();
			return;
	}
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3536) { overlay(0x3536, 1); }
l__0319:
	emu_addw(&emu_sp, 0xA);
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x6C91), 0x0);
	if (emu_get_memory16(emu_ds, 0x00, 0x6C91) != 0x0) { /* Unresolved jump */ emu_ip = 0x032D; emu_last_cs = 0xB536; emu_last_ip = 0x0321; emu_last_length = 0x0013; emu_last_crc = 0x1C1F; emu_call(); return; }
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6D5D));
	emu_push(emu_cs); emu_push(0x032C); emu_cs = 0x2642; f__2642_0002_005E_87F6();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3536) { overlay(0x3536, 1); }
l__032C:
	emu_pop(&emu_cx);
	goto l__049D;
l__0338:
	emu_push(emu_cs);
	emu_push(0x033D); f__B536_0633_000A_6A3F();
l__033D:
	emu_incw(&emu_get_memory16(emu_ds, 0x00, 0x3196));
	emu_get_memory16(emu_ds, 0x00, 0x9935) = 0x0;
	emu_incw(&emu_get_memory16(emu_ds, 0x00, 0x9933));
	goto l__049D;
l__0463:
	emu_al = emu_get_memory8(emu_ss, emu_bp, -0x3);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x046C); emu_cs = 0x2521; emu_Font_GetCharWidth();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3536) { overlay(0x3536, 1); }
l__046C:
	emu_pop(&emu_cx);
	emu_addw(&emu_get_memory16(emu_ds, 0x00, 0x8227), emu_ax);
	emu_bx = emu_get_memory16(emu_ds, 0x00, 0x8229);
	emu_al = emu_get_memory8(emu_ss, emu_bp, -0x3);
	emu_get_memory8(emu_ds, emu_bx, 0x822B) = emu_al;
	emu_incw(&emu_get_memory16(emu_ds, 0x00, 0x8229));
	emu_bx = emu_get_memory16(emu_ds, 0x00, 0x8229);
	emu_get_memory8(emu_ds, emu_bx, 0x822B) = 0x0;
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x9935);
	emu_addw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x8227));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x6D63));
	if (emu_ax > emu_get_memory16(emu_ds, 0x00, 0x6D63)) {
		emu_push(emu_cs);
		emu_push(0x049B); f__B536_0633_000A_6A3F();
	}
l__049B:
	goto l__049D;
l__049D:
	goto l__01A9;
l__04A0:
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x8229), 0x0);
	if (emu_get_memory16(emu_ds, 0x00, 0x8229) != 0x0) {
		emu_push(emu_cs);
		emu_push(0x04AC); f__B536_0633_000A_6A3F();
	}
l__04AC:
	emu_bx = emu_get_memory16(emu_ds, 0x00, 0x6D5D);
	emu_cl = 0x4;
	emu_shlw(&emu_bx, emu_cl);
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x9935);
	emu_get_memory16(emu_ds, emu_bx, 0x406E) = emu_ax;
	emu_bx = emu_get_memory16(emu_ds, 0x00, 0x6D5D);
	emu_cl = 0x4;
	emu_shlw(&emu_bx, emu_cl);
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x9933);
	emu_get_memory16(emu_ds, emu_bx, 0x4070) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x10);
	emu_get_memory16(emu_ds, 0x00, 0x6D5B) = emu_ax;
	emu_bx = emu_get_memory16(emu_ds, 0x00, 0x6D5D);
	emu_cl = 0x4;
	emu_shlw(&emu_bx, emu_cl);
	emu_get_memory16(emu_ds, emu_bx, 0x406A) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x12);
	emu_get_memory16(emu_ds, 0x00, 0x6D59) = emu_ax;
	emu_bx = emu_get_memory16(emu_ds, 0x00, 0x6D5D);
	emu_cl = 0x4;
	emu_shlw(&emu_bx, emu_cl);
	emu_get_memory16(emu_ds, emu_bx, 0x406C) = emu_ax;
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x6C91), 0x0);
	if (emu_get_memory16(emu_ds, 0x00, 0x6C91) == 0x0) {
		emu_push(emu_cs); emu_push(0x04FA); emu_cs = 0x2642; f__2642_0069_0008_D517();
		/* Check if this overlay should be reloaded */
		if (emu_cs == 0x3536) { overlay(0x3536, 1); }
	}
l__04FA:
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
 * Decompiled function f__B536_0633_000A_6A3F()
 *
 * @name f__B536_0633_000A_6A3F
 * @implements B536:0633:000A:6A3F ()
 * @implements B536:064E:007D:44E1
 * @implements B536:06A0:002B:7C16
 * @implements B536:06CB:0010:4E1D
 * @implements B536:06DB:002A:F627
 * @implements B536:06F0:0015:70D0
 * @implements B536:0705:0026:F583
 * @implements B536:0706:0025:C982
 * @implements B536:070A:0021:7605
 * @implements B536:072E:0024:12A7
 * @implements B536:0752:0031:E2A6
 * @implements B536:076A:0019:782C
 * @implements B536:0772:0011:1D0E
 * @implements B536:0783:000D:EADB
 * @implements B536:0790:000F:8263
 * @implements B536:079F:0025:1C79
 * @implements B536:07B4:0010:3A58
 * @implements B536:07C4:000A:5E6F
 * @implements B536:07C8:0006:F7CE
 *
 * Called From: B536:02E9:0005:3811
 * Called From: B536:033A:0005:78BD
 * Called From: B536:0498:002F:1EA6
 * Called From: B536:04A9:000C:EFFF
 * Called From: B536:07C1:0010:3A58
 */
void f__B536_0633_000A_6A3F()
{
l__0633:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0xC);
	emu_push(emu_si);
	emu_push(emu_di);
	goto l__064E;
l__064E:
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x9933);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x6D5F));
	if (emu_ax >= emu_get_memory16(emu_ds, 0x00, 0x6D5F)) { /* Unresolved jump */ emu_ip = 0x063D; emu_last_cs = 0xB536; emu_last_ip = 0x0655; emu_last_length = 0x007D; emu_last_crc = 0x44E1; emu_call(); return; }
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x992D);
	emu_cl = 0x3;
	emu_shlw(&emu_ax, emu_cl);
	emu_addw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x9935));
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_ax;
	emu_al = emu_get_memory8(emu_ds, 0x00, 0x6C71);
	emu_ax = (int8)emu_al;
	emu_addw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x6C6E));
	emu_imuluw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x9933));
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x992B);
	emu_addw(&emu_dx, emu_ax);
	emu_get_memory16(emu_ss, emu_bp, -0xA) = emu_dx;
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x6D63);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_ax;
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x6D5F);
	emu_decw(&emu_ax);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x3196));
	if ((int16)emu_ax <= (int16)emu_get_memory16(emu_ds, 0x00, 0x3196)) {
		emu_cmpb(&emu_get_memory8(emu_ds, 0x00, 0x6C8C), 0x0);
		if (emu_get_memory8(emu_ds, 0x00, 0x6C8C) != 0x0) {
			emu_al = emu_get_memory8(emu_ds, 0x00, 0x6C70);
			emu_ax = (int8)emu_al;
			emu_addw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x6C6C));
			emu_imuluw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x3199));
			emu_subw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax);
		}
	}
l__06A0:
	emu_si = emu_get_memory16(emu_ds, 0x00, 0x8229);
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x8227);
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x9935);
	emu_addw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x6));
	if (emu_ax <= emu_get_memory16(emu_ss, emu_bp, -0x6)) goto l__072E;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x6);
	emu_subw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x9935));
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x2) = 0x0;
	emu_ax = emu_si;
	emu_decw(&emu_ax);
	emu_di = emu_ax;
	goto l__0706;
l__06CB:
	emu_al = emu_get_memory8(emu_ds, emu_di, 0x822B);
	emu_get_memory8(emu_ss, emu_bp, -0xB) = emu_al;
	emu_al = emu_get_memory8(emu_ss, emu_bp, -0xB);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x06DB); emu_cs = 0x2521; emu_Font_GetCharWidth();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3536) { overlay(0x3536, 1); }
l__06DB:
	emu_pop(&emu_cx);
	emu_subw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax);
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp, -0x2) == 0x0) {
		emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x4);
		emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x6));
		if ((int16)emu_ax <= (int16)emu_get_memory16(emu_ss, emu_bp, -0x6)) {
			emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_di;
		}
	}
l__06F0:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp, -0x2) == 0x0) goto l__0705;
	emu_cmpb(&emu_get_memory8(emu_ss, emu_bp, -0xB), 0x20);
	if (emu_get_memory8(emu_ss, emu_bp, -0xB) != 0x20) goto l__0705;
	emu_si = emu_di;
	emu_get_memory8(emu_ds, 0x00, 0x3198) = 0x0;
	goto l__070A;
l__0705:
	emu_decw(&emu_di);
l__0706:
	emu_orw(&emu_di, emu_di);
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) goto l__06CB;
l__070A:
	emu_orw(&emu_di, emu_di);
	if (emu_di == 0) {
		emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x9935), 0x0);
		if (emu_get_memory16(emu_ds, 0x00, 0x9935) == 0x0) { /* Unresolved jump */ emu_ip = 0x072B; emu_last_cs = 0xB536; emu_last_ip = 0x0713; emu_last_length = 0x0021; emu_last_crc = 0x7605; emu_call(); return; }
		emu_al = emu_get_memory8(emu_ds, 0x00, 0x3198);
		emu_ax = (int8)emu_al;
		emu_orw(&emu_ax, emu_ax);
		if (emu_ax != 0) { /* Unresolved jump */ emu_ip = 0x072B; emu_last_cs = 0xB536; emu_last_ip = 0x071B; emu_last_length = 0x0021; emu_last_crc = 0x7605; emu_call(); return; }
		emu_xorw(&emu_ax, emu_ax);
		emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
		emu_si = emu_ax;
		emu_get_memory8(emu_ds, 0x00, 0x3198) = 0x1;
	}
	goto l__072E;
l__072E:
	emu_al = emu_get_memory8(emu_ds, emu_si, 0x822B);
	emu_get_memory8(emu_ss, emu_bp, -0xB) = emu_al;
	emu_get_memory8(emu_ds, emu_si, 0x822B) = 0x0;
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6D59));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6D5B));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_ds);
	emu_ax = 0x822B;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0752); emu_cs = 0x2BC2; f__2BC2_000A_0044_2E0E();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3536) { overlay(0x3536, 1); }
l__0752:
	emu_addw(&emu_sp, 0xC);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_addw(&emu_get_memory16(emu_ds, 0x00, 0x9935), emu_ax);
	emu_al = emu_get_memory8(emu_ss, emu_bp, -0xB);
	emu_get_memory8(emu_ds, emu_si, 0x822B) = emu_al;
	emu_cmpb(&emu_get_memory8(emu_ss, emu_bp, -0xB), 0x20);
	if (emu_get_memory8(emu_ss, emu_bp, -0xB) == 0x20) {
		emu_incw(&emu_si);
	}
l__076A:
	emu_cmpb(&emu_get_memory8(emu_ds, emu_si, 0x822B), 0x20);
	if (emu_get_memory8(emu_ds, emu_si, 0x822B) == 0x20) {
		emu_incw(&emu_si);
	}
l__0772:
	emu_push(emu_ds);
	emu_ax = emu_si;
	emu_addw(&emu_ax, 0x822B);
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x822B;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0783); emu_cs = 0x01F7; emu_String_strcpy();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3536) { overlay(0x3536, 1); }
l__0783:
	emu_addw(&emu_sp, 0x8);
	emu_push(emu_ds);
	emu_ax = 0x822B;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0790); emu_cs = 0x01F7; emu_String_strlen();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3536) { overlay(0x3536, 1); }
l__0790:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ds, 0x00, 0x8229) = emu_ax;
	emu_push(emu_ds);
	emu_ax = 0x822B;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x079F); emu_cs = 0x2521; emu_Font_GetStringWidth();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3536) { overlay(0x3536, 1); }
l__079F:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ds, 0x00, 0x8227) = emu_ax;
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x8229), 0x0);
	if (emu_get_memory16(emu_ds, 0x00, 0x8229) == 0x0) {
		emu_ax = emu_get_memory16(emu_ds, 0x00, 0x9935);
		emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x6D63));
		if (emu_ax < emu_get_memory16(emu_ds, 0x00, 0x6D63)) goto l__07C8;
	}
l__07B4:
	emu_xorw(&emu_ax, emu_ax);
	emu_get_memory16(emu_ds, 0x00, 0x8225) = emu_ax;
	emu_get_memory16(emu_ds, 0x00, 0x9935) = emu_ax;
	emu_incw(&emu_get_memory16(emu_ds, 0x00, 0x9933));
	emu_push(emu_cs);
	emu_push(0x07C4); f__B536_0633_000A_6A3F();
l__07C4:
	emu_incw(&emu_get_memory16(emu_ds, 0x00, 0x3196));
l__07C8:
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
 * Decompiled function f__B536_07CE_0032_AF6A()
 *
 * @name f__B536_07CE_0032_AF6A
 * @implements B536:07CE:0032:AF6A ()
 * @implements B536:0800:0033:ED56
 * @implements B536:080B:0028:450A
 * @implements B536:0833:005B:8E64
 * @implements B536:083E:0050:D2DD
 * @implements B536:0878:0016:607A
 *
 * Called From: B536:08A2:0017:56C5
 * Called From: B536:08C6:0024:D73B
 * Called From: B536:08C6:0022:4C1E
 */
void f__B536_07CE_0032_AF6A()
{
l__07CE:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x2);
	emu_al = 0x0;
	emu_get_memory8(emu_ss, emu_bp, -0x1) = emu_al;
	emu_dl = emu_al;
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x821D);
	emu_orw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x821F));
	if (emu_ax != 0) {
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x821D));
		emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x0), 0x0);
		if (emu_get_memory8(emu_es, emu_bx, 0x0) != 0x0) goto l__0800;
		emu_get_memory16(emu_ds, 0x00, 0x821F) = 0x0;
		emu_get_memory16(emu_ds, 0x00, 0x821D) = 0x0;
		emu_dl = emu_get_memory8(emu_ds, 0x00, 0x821A);
	}
	goto l__080B;
l__0800:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x821D));
	emu_dl = emu_get_memory8(emu_es, emu_bx, 0x0);
	emu_incw(&emu_get_memory16(emu_ds, 0x00, 0x821D));
l__080B:
	emu_al = emu_dl;
	emu_ax = (int8)emu_al;
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax == 0) {
		emu_ax = emu_get_memory16(emu_ds, 0x00, 0x8221);
		emu_orw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x8223));
		if (emu_ax != 0) {
			emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8221));
			emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x0), 0x0);
			if (emu_get_memory8(emu_es, emu_bx, 0x0) != 0x0) goto l__0833;
			emu_get_memory16(emu_ds, 0x00, 0x8223) = 0x0;
			emu_get_memory16(emu_ds, 0x00, 0x8221) = 0x0;
		}
	}
	goto l__083E;
l__0833:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8221));
	emu_dl = emu_get_memory8(emu_es, emu_bx, 0x0);
	emu_incw(&emu_get_memory16(emu_ds, 0x00, 0x8221));
l__083E:
	emu_testb(&emu_dl, 0x80);
	if ((emu_dl & 0x80) != 0) {
		emu_andb(&emu_dl, 0x7F);
		emu_al = emu_dl;
		emu_andb(&emu_al, 0x7);
		emu_get_memory8(emu_ss, emu_bp, -0x1) = emu_al;
		emu_al = emu_dl;
		emu_ax = (int8)emu_al;
		emu_andw(&emu_ax, 0x78);
		emu_cl = 0x3;
		emu_sarw(&emu_ax, emu_cl);
		emu_dl = emu_al;
		emu_al = emu_dl;
		emu_ax = (int8)emu_al;
		emu_cl = 0x3;
		emu_shlw(&emu_ax, emu_cl);
		emu_push(emu_ax);
		emu_al = emu_get_memory8(emu_ss, emu_bp, -0x1);
		emu_ax = (int8)emu_al;
		emu_pop(&emu_bx);
		emu_addw(&emu_bx, emu_ax);
		emu_al = emu_get_memory8(emu_ds, emu_bx, 0x6E98);
		emu_get_memory8(emu_ss, emu_bp, -0x1) = emu_al;
		emu_al = emu_dl;
		emu_ax = (int8)emu_al;
		emu_bx = emu_ax;
		emu_dl = emu_get_memory8(emu_ds, emu_bx, 0x6E88);
	}
l__0878:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_get_memory8(emu_es, emu_bx, 0x0) = emu_dl;
	emu_incw(&emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_ss, emu_bp, -0x1);
	emu_get_memory8(emu_es, emu_bx, 0x0) = emu_al;
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B536_088E_0017_56C5()
 *
 * @name f__B536_088E_0017_56C5
 * @implements B536:088E:0017:56C5 ()
 * @implements B536:08A5:0024:D73B
 * @implements B536:08A7:0022:4C1E
 * @implements B536:08C9:0007:DF3D
 * @implements B536:08D0:0004:893F
 *
 * Called From: B536:01AB:0006:9EB9
 * Called From: B536:01AB:0005:FAB8
 * Called From: B536:0217:0032:5EA7
 */
void f__B536_088E_0017_56C5()
{
l__088E:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x2);
	emu_al = emu_get_memory8(emu_ds, 0x00, 0x821B);
	emu_ax = (int8)emu_al;
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax != 0) goto l__08A7;
	emu_push(emu_ds);
	emu_ax = 0x821B;
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x08A5); f__B536_07CE_0032_AF6A();
l__08A5:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
l__08A7:
	emu_al = emu_get_memory8(emu_ds, 0x00, 0x821B);
	emu_get_memory8(emu_ss, emu_bp, -0x1) = emu_al;
	emu_al = emu_get_memory8(emu_ds, 0x00, 0x821C);
	emu_get_memory8(emu_ds, 0x00, 0x821B) = emu_al;
	emu_get_memory8(emu_ds, 0x00, 0x821C) = 0x0;
	emu_al = emu_get_memory8(emu_ds, 0x00, 0x821B);
	emu_ax = (int8)emu_al;
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax != 0) { /* Unresolved jump */ emu_ip = 0x08CB; emu_last_cs = 0xB536; emu_last_ip = 0x08BE; emu_last_length = 0x0022; emu_last_crc = 0x4C1E; emu_call(); return; }
	emu_push(emu_ds);
	emu_ax = 0x821B;
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x08C9); f__B536_07CE_0032_AF6A();
l__08C9:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_al = emu_get_memory8(emu_ss, emu_bp, -0x1);
	goto l__08D0;
l__08D0:
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__B511_0000_000E_B463()
 *
 * @name f__B511_0000_000E_B463
 * @implements B511:0000:000E:B463 ()
 * @implements B511:000E:000E:C19A
 * @implements B511:001C:0002:2597
 *
 * Called From: 3511:0020:0005:0000
 */
void f__B511_0000_000E_B463()
{
l__0000:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x000E); f__B511_001E_0010_AE09();
	goto l__000E;
l__000E:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x37A0), 0x0);
	if (emu_get_memory16(emu_ds, 0x00, 0x37A0) == 0x0) {
		emu_push(emu_cs);
		emu_push(0x001C); f__B511_0C06_002A_8725();
	}
	goto l__001C;
l__001C:
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B511_001E_0010_AE09()
 *
 * @name f__B511_001E_0010_AE09
 * @implements B511:001E:0010:AE09 ()
 * @implements B511:002E:0006:5897
 * @implements B511:0034:000D:86FD
 * @implements B511:0041:000B:5F37
 * @implements B511:004C:001F:8760
 * @implements B511:0069:0002:CFBA
 * @implements B511:006B:000E:4438
 * @implements B511:008A:0007:924A
 *
 * Called From: B511:000B:000E:B463
 */
void f__B511_001E_0010_AE09()
{
l__001E:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_si);
	emu_si = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_ax = 0xFFFE;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x002E); emu_cs = 0x3483; overlay(0x3483, 0); f__B483_0363_0016_83DF();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
	goto l__002E;
l__002E:
	emu_pop(&emu_cx);
	emu_push(emu_cs);
	emu_push(0x0034); f__B511_0A8F_000E_EE64();
	goto l__0034;
l__0034:
	emu_incw(&emu_get_memory16(emu_ds, 0x00, 0x38BC));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x0041); emu_cs = 0x34B5; overlay(0x34B5, 0); f__B4B5_0000_0014_F092();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
	goto l__0041;
l__0041:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax == 0) goto l__006B;
	emu_push(emu_cs);
	emu_push(0x004C); f__B511_0091_001D_9C25();
	goto l__004C;
l__004C:
	emu_cmpw(&emu_si, 0x5);
	if (emu_si < 0x5) {
		emu_get_memory16(emu_ds, 0x00, 0x37F2) = 0x0;
		emu_get_memory16(emu_ds, 0x00, 0x37F0) = 0x0;
		emu_get_memory16(emu_ds, 0x00, 0x37F6) = 0x0;
		emu_get_memory16(emu_ds, 0x00, 0x37F4) = 0x0;
	}
	goto l__0069;
l__0069:
	goto l__008A;
l__006B:
	emu_ax = 0xFFFF;
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x2BCA;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0079); emu_cs = 0x10E4; f__10E4_0273_0029_DCE5();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
	/* Unresolved jump */ emu_ip = 0x0079; emu_last_cs = 0xB511; emu_last_ip = 0x0079; emu_last_length = 0x000E; emu_last_crc = 0x4438; emu_call();
l__008A:
	emu_decw(&emu_get_memory16(emu_ds, 0x00, 0x38BC));
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B511_0091_001D_9C25()
 *
 * @name f__B511_0091_001D_9C25
 * @implements B511:0091:001D:9C25 ()
 * @implements B511:00AE:0005:D341
 * @implements B511:00B3:0005:ACC2
 * @implements B511:00B8:0005:6C97
 * @implements B511:00BD:0006:22E8
 * @implements B511:00C3:0031:A63E
 * @implements B511:00DD:0017:80BE
 * @implements B511:00EE:0006:62E9
 * @implements B511:00F4:0048:84FE
 * @implements B511:010E:002E:C197
 * @implements B511:011F:001D:05F8
 * @implements B511:013C:000C:1A4E
 * @implements B511:013E:000A:3FD5
 * @implements B511:013F:0009:2E15
 * @implements B511:0148:0013:5F86
 * @implements B511:015B:0005:9EAE
 * @implements B511:0160:0016:EAC5
 * @implements B511:0176:0011:2C4F
 * @implements B511:0187:000E:5BF5
 * @implements B511:018A:000B:799F
 * @implements B511:0195:0023:CF90
 * @implements B511:0197:0021:84A6
 * @implements B511:01B8:0006:D78F
 * @implements B511:01BE:000E:2B7B
 * @implements B511:01CC:000B:5450
 * @implements B511:01D7:0024:B3E5
 * @implements B511:01FB:0024:131D
 * @implements B511:021F:000F:97B3
 * @implements B511:022E:0020:51C6
 * @implements B511:0258:0018:7FFC
 * @implements B511:0270:001B:5DD0
 * @implements B511:02A3:000E:EBD1
 * @implements B511:02B1:001D:CE78
 * @implements B511:02CE:0023:44EC
 * @implements B511:02E6:000B:166D
 * @implements B511:02F1:0013:858B
 * @implements B511:02F3:0011:CEBD
 * @implements B511:0304:000B:E66F
 * @implements B511:030F:0002:DD3A
 * @implements B511:0311:000B:3CA9
 * @implements B511:031C:0017:D892
 * @implements B511:0333:000C:E8B5
 * @implements B511:033F:000C:3391
 * @implements B511:034B:0019:B08E
 * @implements B511:0364:0015:3476
 * @implements B511:0379:0012:C11C
 * @implements B511:038B:0011:D3A9
 * @implements B511:03A6:002C:6CEA
 * @implements B511:03D5:0009:6093
 * @implements B511:03DE:002D:9F7E
 * @implements B511:040B:000A:D6BC
 * @implements B511:040C:0009:C0FC
 * @implements B511:0415:0031:D2AD
 *
 * Called From: B511:0049:000B:5F37
 * Called From: B511:0717:000C:C3E1
 */
void f__B511_0091_001D_9C25()
{
l__0091:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0xE);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_incw(&emu_get_memory16(emu_ds, 0x00, 0x38BC));
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x3A0E);
	emu_get_memory16(emu_ss, emu_bp, -0xE) = emu_ax;
	emu_get_memory16(emu_ds, 0x00, 0x3A0E) = 0x0;
	emu_push(emu_cs); emu_push(0x00AE); emu_cs = 0x1082; emu_Building_Recount();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
	goto l__00AE;
l__00AE:
	emu_push(emu_cs); emu_push(0x00B3); emu_cs = 0x0FE4; emu_Unit_Recount();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
	goto l__00B3;
l__00B3:
	emu_push(emu_cs); emu_push(0x00B8); emu_cs = 0x104B; emu_AirUnit_Recount();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
	goto l__00B8;
l__00B8:
	emu_xorw(&emu_di, emu_di);
	goto l__013F;
l__00BD:
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x00C3); emu_cs = 0x34CD; overlay(0x34CD, 0); f__B4CD_10EE_0039_EC73();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
	goto l__00C3;
l__00C3:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_ax != 0) {
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
		emu_testw(&emu_get_memory16(emu_es, emu_bx, 0x4), 0x1);
		if ((emu_get_memory16(emu_es, emu_bx, 0x4) & 0x1) != 0) goto l__00EE;
	}
	goto l__00DD;
l__00DD:
	emu_ax = emu_di;
	emu_cl = 0x2;
	emu_shlw(&emu_ax, emu_cl);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x39EA));
	emu_addw(&emu_bx, emu_ax);
	emu_andb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0xEF);
	goto l__00EE;
l__00EE:
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x00F4); emu_cs = 0x34CD; overlay(0x34CD, 0); f__B4CD_1133_0039_A02F();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
	goto l__00F4;
l__00F4:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x8);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x6));
	if (emu_ax != 0) {
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
		emu_testw(&emu_get_memory16(emu_es, emu_bx, 0x4), 0x1);
		if ((emu_get_memory16(emu_es, emu_bx, 0x4) & 0x1) != 0) goto l__011F;
	}
	goto l__010E;
l__010E:
	emu_ax = emu_di;
	emu_cl = 0x2;
	emu_shlw(&emu_ax, emu_cl);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x39EA));
	emu_addw(&emu_bx, emu_ax);
	emu_andb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0xDF);
	goto l__011F;
l__011F:
	emu_ax = emu_di;
	emu_cl = 0x2;
	emu_shlw(&emu_ax, emu_cl);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x39EA));
	emu_addw(&emu_bx, emu_ax);
	emu_testb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0x8);
	if ((emu_get_memory8(emu_es, emu_bx, 0x2) & 0x8) == 0) goto l__013E;
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3A38));
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x013C); emu_cs = 0x34CD; overlay(0x34CD, 0); f__B4CD_1269_0019_A3E5();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
	goto l__013C;
l__013C:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	goto l__013E;
l__013E:
	emu_incw(&emu_di);
	goto l__013F;
l__013F:
	emu_cmpw(&emu_di, 0x1000);
	if ((int16)emu_di >= (int16)0x1000) goto l__0148;
	goto l__00BD;
l__0148:
	emu_ax = 0xFFFF;
	emu_push(emu_ax);
	emu_ax = 0xFFFF;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x015B); emu_cs = 0x0FE4; emu_Unit_FindFirst();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
	goto l__015B;
l__015B:
	emu_addw(&emu_sp, 0x8);
	goto l__0197;
l__0160:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0x4), 0x4);
	if ((emu_get_memory16(emu_es, emu_bx, 0x4) & 0x4) != 0) goto l__018A;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x0176); emu_cs = 0x1A34; f__1A34_2B18_0011_E4D5();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
	goto l__0176;
l__0176:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0187); emu_cs = 0x34CD; overlay(0x34CD, 0); f__B4CD_01BF_0016_E78F();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
	goto l__0187;
l__0187:
	emu_addw(&emu_sp, 0x6);
	goto l__018A;
l__018A:
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x0195); emu_cs = 0x0FE4; emu_Unit_FindNext();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
	goto l__0195;
l__0195:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	goto l__0197;
l__0197:
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_ax != 0) goto l__0160;
	emu_ax = 0xFFFF;
	emu_push(emu_ax);
	emu_ax = 0xFFFF;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x01B8); emu_cs = 0x1082; emu_Building_FindFirst();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
	goto l__01B8;
l__01B8:
	emu_addw(&emu_sp, 0x8);
	goto l__02F3;
l__01BE:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0x4), 0x4);
	if ((emu_get_memory16(emu_es, emu_bx, 0x4) & 0x4) == 0) goto l__01CC;
	goto l__02E6;
l__01CC:
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs); emu_push(0x01D7); emu_cs = 0x0C3A; f__0C3A_2433_0042_DBC6();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
	goto l__01D7;
l__01D7:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0xB);
	if (emu_get_memory8(emu_es, emu_bx, 0x2) != 0xB) goto l__0258;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x3), 0xFF);
	if (emu_get_memory8(emu_es, emu_bx, 0x3) == 0xFF) goto l__0258;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x3);
	emu_ax = (int8)emu_al;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x01FB); emu_cs = 0x0FE4; emu_Unit_Get_ByIndex();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
	goto l__01FB;
l__01FB:
	emu_pop(&emu_cx);
	emu_bx = emu_ax;
	emu_es = emu_dx;
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x4);
	emu_andw(&emu_ax, 0x5);
	emu_cmpw(&emu_ax, 0x5);
	if (emu_ax == 0x5) goto l__021F;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_get_memory8(emu_es, emu_bx, 0x3) = 0xFF;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_get_memory16(emu_es, emu_bx, 0x50) = 0x0;
	goto l__0258;
l__021F:
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs); emu_push(0x022E); emu_cs = 0x0C3A; f__0C3A_1398_000D_8766();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
	goto l__022E;
l__022E:
	emu_addw(&emu_sp, 0x6);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x50), 0x0);
	if (emu_get_memory16(emu_es, emu_bx, 0x50) == 0x0) goto l__0258;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x50), 0x1);
	if ((int16)emu_get_memory16(emu_es, emu_bx, 0x50) <= (int16)0x1) { /* Unresolved jump */ emu_ip = 0x024E; emu_last_cs = 0xB511; emu_last_ip = 0x0243; emu_last_length = 0x0020; emu_last_crc = 0x51C6; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x50);
	/* Unresolved jump */ emu_ip = 0x0251; emu_last_cs = 0xB511; emu_last_ip = 0x024C; emu_last_length = 0x0020; emu_last_crc = 0x51C6; emu_call();
l__0258:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x2);
	emu_ax = (int8)emu_al;
	emu_push(emu_ax);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x8);
	emu_addw(&emu_ax, 0x12);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0270); emu_cs = 0x15C2; f__15C2_03D9_0011_D202();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
	goto l__0270;
l__0270:
	emu_addw(&emu_sp, 0x6);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0x2);
	if (emu_get_memory8(emu_es, emu_bx, 0x2) != 0x2) goto l__02A3;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x8);
	emu_ax = (int8)emu_al;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x028B); emu_cs = 0x10BE; emu_House_Get_ByIndex();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
	/* Unresolved jump */ emu_ip = 0x028B; emu_last_cs = 0xB511; emu_last_ip = 0x028B; emu_last_length = 0x001B; emu_last_crc = 0x5DD0; emu_call();
l__02A3:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x8);
	emu_ax = (int8)emu_al;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x02B1); emu_cs = 0x10BE; emu_House_Get_ByIndex();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
	goto l__02B1;
l__02B1:
	emu_pop(&emu_cx);
	emu_bx = emu_ax;
	emu_es = emu_dx;
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x1E);
	emu_orw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x20));
	if (emu_ax != 0) goto l__02E6;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x8);
	emu_ax = (int8)emu_al;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x02CE); emu_cs = 0x10BE; emu_House_Get_ByIndex();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
	goto l__02CE;
l__02CE:
	emu_pop(&emu_cx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_cx = emu_get_memory16(emu_es, emu_bx, 0xC);
	emu_bx = emu_get_memory16(emu_es, emu_bx, 0xA);
	emu_si = emu_ax;
	emu_es = emu_dx;
	emu_get_memory16(emu_es, emu_si, 0x20) = emu_cx;
	emu_get_memory16(emu_es, emu_si, 0x1E) = emu_bx;
	goto l__02E6;
l__02E6:
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x02F1); emu_cs = 0x1082; emu_Building_FindNext();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
	goto l__02F1;
l__02F1:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	goto l__02F3;
l__02F3:
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x8);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x6));
	if (emu_ax == 0) goto l__0304;
	goto l__01BE;
l__0304:
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x030F); emu_cs = 0x10BE; emu_House_FindFirst();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
	goto l__030F;
l__030F:
	goto l__034B;
l__0311:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_push(emu_cs); emu_push(0x031C); emu_cs = 0x0C3A; f__0C3A_13BD_0022_D6F0();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
	goto l__031C;
l__031C:
	emu_pop(&emu_cx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_get_memory16(emu_es, emu_bx, 0x10) = emu_dx;
	emu_get_memory16(emu_es, emu_bx, 0xE) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_push(emu_cs); emu_push(0x0333); emu_cs = 0x1423; f__1423_0DC3_0029_D1E2();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
	goto l__0333;
l__0333:
	emu_pop(&emu_cx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_push(emu_cs); emu_push(0x033F); emu_cs = 0x0C3A; f__0C3A_1F70_0010_8DB3();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
	goto l__033F;
l__033F:
	emu_pop(&emu_cx);
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x034B); emu_cs = 0x10BE; emu_House_FindNext();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
	goto l__034B;
l__034B:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0xA) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0xC) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0xC);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0xA));
	if (emu_ax != 0) goto l__0311;
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3A38));
	emu_push(emu_cs); emu_push(0x0364); emu_cs = 0x34B8; overlay(0x34B8, 0); f__B4B8_110D_000D_FD5C();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
	goto l__0364;
l__0364:
	emu_pop(&emu_cx);
	emu_ax = 0x2DCE;
	emu_push(emu_ax);
	emu_ax = 0x440;
	emu_push(emu_ax);
	emu_ax = 0x7;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0379); emu_cs = 0x34B8; overlay(0x34B8, 0); f__B4B8_0A1E_001A_E094();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
	goto l__0379;
l__0379:
	emu_addw(&emu_sp, 0x8);
	emu_get_memory16(emu_ds, 0x00, 0x8CFD) = 0x290;
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3A02));
	emu_push(emu_cs); emu_push(0x038B); emu_cs = 0x0F78; f__0F78_02D5_0014_4ABC();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
	goto l__038B;
l__038B:
	emu_pop(&emu_cx);
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x38E8), 0xFFFF);
	if (emu_get_memory16(emu_ds, 0x00, 0x38E8) == 0xFFFF) goto l__03A6;
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x38E8));
	emu_push(emu_cs); emu_push(0x039C); emu_cs = 0x1082; emu_Building_Get_ByIndex();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
	/* Unresolved jump */ emu_ip = 0x039C; emu_last_cs = 0xB511; emu_last_ip = 0x039C; emu_last_length = 0x0011; emu_last_crc = 0xD3A9; emu_call();
l__03A6:
	emu_get_memory16(emu_ds, 0x00, 0x38E6) = 0x0;
	emu_get_memory16(emu_ds, 0x00, 0x38E4) = 0x0;
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x38E2), 0xFFFF);
	if (emu_get_memory16(emu_ds, 0x00, 0x38E2) == 0xFFFF) goto l__03D5;
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x38E2);
	emu_dx = 0x60;
	emu_imuluw(&emu_ax, emu_dx);
	emu_dx = 0x2C94;
	emu_bx = emu_ax;
	emu_es = emu_dx;
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x44));
	emu_push(emu_cs); emu_push(0x03D2); emu_cs = 0x0F78; f__0F78_0285_001C_04DB();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
	/* Unresolved jump */ emu_ip = 0x03D2; emu_last_cs = 0xB511; emu_last_ip = 0x03D2; emu_last_length = 0x002C; emu_last_crc = 0x6CEA; emu_call();
l__03D5:
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3A02));
	emu_push(emu_cs); emu_push(0x03DE); emu_cs = 0x34CD; overlay(0x34CD, 0); f__B4CD_1133_0039_A02F();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
	goto l__03DE;
l__03DE:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x8);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x6));
	if (emu_ax == 0) goto l__040C;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x2);
	emu_ax = (int8)emu_al;
	emu_dx = 0x60;
	emu_imuluw(&emu_ax, emu_dx);
	emu_dx = 0x2C94;
	emu_bx = emu_ax;
	emu_es = emu_dx;
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x44));
	emu_push(emu_cs); emu_push(0x040B); emu_cs = 0x0F78; f__0F78_0285_001C_04DB();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
	goto l__040B;
l__040B:
	emu_pop(&emu_cx);
	goto l__040C;
l__040C:
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3A38));
	emu_push(emu_cs); emu_push(0x0415); emu_cs = 0x3483; overlay(0x3483, 0); f__B483_04CB_0015_EBB4();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
	goto l__0415;
l__0415:
	emu_pop(&emu_cx);
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x76B2);
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x76B0);
	emu_addw(&emu_dx, 0x46);
	emu_adcw(&emu_ax, 0x0);
	emu_get_memory16(emu_ds, 0x00, 0x38C2) = emu_ax;
	emu_get_memory16(emu_ds, 0x00, 0x38C0) = emu_dx;
	emu_get_memory16(emu_ds, 0x00, 0x3A12) = 0x1;
	emu_get_memory16(emu_ds, 0x00, 0x38B6) = 0xFFFF;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0xE);
	emu_get_memory16(emu_ds, 0x00, 0x3A0E) = emu_ax;
	emu_decw(&emu_get_memory16(emu_ds, 0x00, 0x38BC));
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
 * Decompiled function f__B511_0446_0013_E4E5()
 *
 * @name f__B511_0446_0013_E4E5
 * @implements B511:0446:0013:E4E5 ()
 * @implements B511:0459:0009:C151
 * @implements B511:0462:0006:5E88
 * @implements B511:0468:000F:1E3D
 * @implements B511:0477:000B:28F6
 * @implements B511:0482:0008:C68B
 * @implements B511:048D:0005:8EFD
 * @implements B511:0492:000B:4489
 * @implements B511:049D:000D:5685
 * @implements B511:04AA:0023:7B53
 * @implements B511:04CD:000C:4C78
 * @implements B511:04D9:000D:34BA
 * @implements B511:0592:000C:E98C
 * @implements B511:059E:000A:88AF
 * @implements B511:05A8:0009:C506
 * @implements B511:05B1:0023:4CA4
 * @implements B511:05D4:0011:66E3
 * @implements B511:05E5:000C:4CAE
 * @implements B511:05F1:0023:84C2
 * @implements B511:0614:0011:96E3
 * @implements B511:0625:000C:4CAE
 * @implements B511:0631:0023:05E3
 * @implements B511:0654:0011:C6E3
 * @implements B511:0665:000C:4CAE
 * @implements B511:0671:0023:6912
 * @implements B511:0694:0011:76E2
 * @implements B511:06A5:000C:4CAE
 * @implements B511:06B1:0023:C436
 * @implements B511:06D4:0011:A6E2
 * @implements B511:06E5:0005:83EE
 * @implements B511:06F8:0002:C73A
 * @implements B511:06FA:0005:1E52
 * @implements B511:06FF:0008:C68B
 * @implements B511:0708:0006:42FE
 * @implements B511:070E:000C:C3E1
 * @implements B511:071A:000A:7479
 *
 * Called From: 3511:002A:0005:0000
 */
void f__B511_0446_0013_E4E5()
{
l__0446:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0xC);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_ax != 0) goto l__0459;
	/* Unresolved jump */ emu_ip = 0x071E; emu_last_cs = 0xB511; emu_last_ip = 0x0456; emu_last_length = 0x0013; emu_last_crc = 0xE4E5; emu_call();
l__0459:
	emu_ax = 0xFFFE;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0462); emu_cs = 0x3483; overlay(0x3483, 0); f__B483_0363_0016_83DF();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
	goto l__0462;
l__0462:
	emu_pop(&emu_cx);
	emu_push(emu_cs);
	emu_push(0x0468); f__B511_0A8F_000E_EE64();
	goto l__0468;
l__0468:
	emu_incw(&emu_get_memory16(emu_ds, 0x00, 0x38BC));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x0477); emu_cs = 0x1FB5; f__1FB5_15B5_0015_6A00();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
	goto l__0477;
l__0477:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax != 0) goto l__048D;
	emu_push(emu_cs); emu_push(0x0482); emu_cs = 0x3500; overlay(0x3500, 0); f__B500_0000_0008_FE1F();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
	goto l__0482;
l__0482:
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x048A); emu_cs = 0x01F7; emu_Terminate_Normal();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
	/* Unresolved jump */ emu_ip = 0x048A; emu_last_cs = 0xB511; emu_last_ip = 0x048A; emu_last_length = 0x0008; emu_last_crc = 0xC68B; emu_call();
l__048D:
	emu_push(emu_cs); emu_push(0x0492); emu_cs = 0x34B8; overlay(0x34B8, 0); f__B4B8_0D23_0010_BA99();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
	goto l__0492;
l__0492:
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x049D); emu_cs = 0x34B1; overlay(0x34B1, 0); f__B4B1_0000_0016_067A();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
	goto l__049D;
l__049D:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_di = emu_ax;
	emu_ax = 0x3;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x04AA); emu_cs = 0x252E; f__252E_0001_0018_08B3();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
	goto l__04AA;
l__04AA:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6CE1));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6CDF));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_ax = 0x4F46;
	emu_dx = 0x4E49;
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x04CD); emu_cs = 0x34B1; overlay(0x34B1, 0); f__B4B1_01CD_002A_CE8A();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
	goto l__04CD;
l__04CD:
	emu_addw(&emu_sp, 0xE);
	emu_si = emu_ax;
	emu_orw(&emu_si, emu_si);
	if (emu_si != 0) goto l__04D9;
	goto l__06FA;
l__04D9:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x0), 0x290);
	if (emu_get_memory16(emu_es, emu_bx, 0x0) != 0x290) { /* Unresolved jump */ emu_ip = 0x04E6; emu_last_cs = 0xB511; emu_last_ip = 0x04E1; emu_last_length = 0x000D; emu_last_crc = 0x34BA; emu_call(); return; }
	goto l__0592;
l__0592:
	emu_push(emu_si);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x059E); emu_cs = 0x34C4; overlay(0x34C4, 0); f__B4C4_0000_001C_B22A();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
	goto l__059E;
l__059E:
	emu_addw(&emu_sp, 0x6);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax != 0) goto l__05A8;
	/* Unresolved jump */ emu_ip = 0x06EA; emu_last_cs = 0xB511; emu_last_ip = 0x05A5; emu_last_length = 0x000A; emu_last_crc = 0x88AF; emu_call();
l__05A8:
	emu_ax = 0x3;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x05B1); emu_cs = 0x252E; f__252E_0001_0018_08B3();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
	goto l__05B1;
l__05B1:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6CE1));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6CDF));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_ax = 0x2050;
	emu_dx = 0x414D;
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x05D4); emu_cs = 0x34B1; overlay(0x34B1, 0); f__B4B1_01CD_002A_CE8A();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
	goto l__05D4;
l__05D4:
	emu_addw(&emu_sp, 0xE);
	emu_si = emu_ax;
	emu_push(emu_si);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x05E5); emu_cs = 0x34C4; overlay(0x34C4, 0); f__B4C4_0255_0009_A812();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
	goto l__05E5;
l__05E5:
	emu_addw(&emu_sp, 0x6);
	emu_ax = 0x3;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x05F1); emu_cs = 0x252E; f__252E_0001_0018_08B3();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
	goto l__05F1;
l__05F1:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6CE1));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6CDF));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_ax = 0x5259;
	emu_dx = 0x4C50;
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x0614); emu_cs = 0x34B1; overlay(0x34B1, 0); f__B4B1_01CD_002A_CE8A();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
	goto l__0614;
l__0614:
	emu_addw(&emu_sp, 0xE);
	emu_si = emu_ax;
	emu_push(emu_si);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x0625); emu_cs = 0x34C4; overlay(0x34C4, 0); f__B4C4_0311_0009_BC94();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
	goto l__0625;
l__0625:
	emu_addw(&emu_sp, 0x6);
	emu_ax = 0x3;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0631); emu_cs = 0x252E; f__252E_0001_0018_08B3();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
	goto l__0631;
l__0631:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6CE1));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6CDF));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_ax = 0x5449;
	emu_dx = 0x4E55;
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x0654); emu_cs = 0x34B1; overlay(0x34B1, 0); f__B4B1_01CD_002A_CE8A();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
	goto l__0654;
l__0654:
	emu_addw(&emu_sp, 0xE);
	emu_si = emu_ax;
	emu_push(emu_si);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x0665); emu_cs = 0x34C4; overlay(0x34C4, 0); f__B4C4_03AA_0009_B4A2();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
	goto l__0665;
l__0665:
	emu_addw(&emu_sp, 0x6);
	emu_ax = 0x3;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0671); emu_cs = 0x252E; f__252E_0001_0018_08B3();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
	goto l__0671;
l__0671:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6CE1));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6CDF));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_ax = 0x4744;
	emu_dx = 0x4C42;
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x0694); emu_cs = 0x34B1; overlay(0x34B1, 0); f__B4B1_01CD_002A_CE8A();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
	goto l__0694;
l__0694:
	emu_addw(&emu_sp, 0xE);
	emu_si = emu_ax;
	emu_push(emu_si);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x06A5); emu_cs = 0x34C4; overlay(0x34C4, 0); f__B4C4_043C_0009_1C95();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
	goto l__06A5;
l__06A5:
	emu_addw(&emu_sp, 0x6);
	emu_ax = 0x3;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x06B1); emu_cs = 0x252E; f__252E_0001_0018_08B3();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
	goto l__06B1;
l__06B1:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6CE1));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6CDF));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_ax = 0x4D41;
	emu_dx = 0x4554;
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x06D4); emu_cs = 0x34B1; overlay(0x34B1, 0); f__B4B1_01CD_002A_CE8A();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
	goto l__06D4;
l__06D4:
	emu_addw(&emu_sp, 0xE);
	emu_si = emu_ax;
	emu_push(emu_si);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x06E5); emu_cs = 0x34C4; overlay(0x34C4, 0); f__B4C4_04DA_0008_C6B9();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
	goto l__06E5;
l__06E5:
	emu_addw(&emu_sp, 0x6);
	goto l__06F8;
l__06F8:
	goto l__0708;
l__06FA:
	emu_push(emu_cs); emu_push(0x06FF); emu_cs = 0x3500; overlay(0x3500, 0); f__B500_0000_0008_FE1F();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
	goto l__06FF;
l__06FF:
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0707); emu_cs = 0x01F7; emu_Terminate_Normal();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
	/* Unresolved jump */ emu_ip = 0x0707; emu_last_cs = 0xB511; emu_last_ip = 0x0707; emu_last_length = 0x0008; emu_last_crc = 0xC68B; emu_call();
l__0708:
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x070E); emu_cs = 0x34B1; overlay(0x34B1, 0); f__B4B1_0082_0012_D287();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
	goto l__070E;
l__070E:
	emu_pop(&emu_cx);
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x38BE), 0x1);
	if (emu_get_memory16(emu_ds, 0x00, 0x38BE) != 0x1) {
		emu_push(emu_cs);
		emu_push(0x071A); f__B511_0091_001D_9C25();
	}
	goto l__071A;
l__071A:
	emu_decw(&emu_get_memory16(emu_ds, 0x00, 0x38BC));
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
 * Decompiled function f__B511_0729_0016_F168()
 *
 * @name f__B511_0729_0016_F168
 * @implements B511:0729:0016:F168 ()
 * @implements B511:0800:000F:842C
 * @implements B511:080F:0021:E6D5
 * @implements B511:0830:001F:5866
 * @implements B511:084F:001F:AE21
 * @implements B511:086E:000E:C613
 * @implements B511:087C:001C:2075
 * @implements B511:0898:000E:9B98
 * @implements B511:08A6:001B:5CCA
 * @implements B511:08C1:001A:7CEF
 * @implements B511:08DB:0015:0963
 * @implements B511:08F0:002F:3CDB
 * @implements B511:091F:000C:4FAE
 * @implements B511:0922:0009:C506
 * @implements B511:092B:0012:F13A
 * @implements B511:093D:001C:1421
 * @implements B511:0959:000C:4EAE
 * @implements B511:0965:0012:513A
 * @implements B511:0977:001C:EBB0
 * @implements B511:0993:000C:4EAE
 * @implements B511:099F:0012:013A
 * @implements B511:09B1:001C:6A91
 * @implements B511:09CD:000C:4EAE
 * @implements B511:09D9:0012:B13B
 * @implements B511:09EB:001C:0660
 * @implements B511:0A07:000C:4EAE
 * @implements B511:0A13:0012:A13A
 * @implements B511:0A25:001C:23D6
 * @implements B511:0A41:000C:4EAE
 * @implements B511:0A4D:0012:613B
 * @implements B511:0A5F:001C:AB44
 * @implements B511:0A7B:0009:260D
 * @implements B511:0A84:000B:5472
 *
 * Called From: 3511:0034:0005:0000
 */
void f__B511_0729_0016_F168()
{
l__0729:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x12);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_incw(&emu_get_memory16(emu_ds, 0x00, 0x38BC));
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x37A0), 0x0);
	if (emu_get_memory16(emu_ds, 0x00, 0x37A0) != 0x0) { /* Unresolved jump */ emu_ip = 0x073F; emu_last_cs = 0xB511; emu_last_ip = 0x073A; emu_last_length = 0x0016; emu_last_crc = 0xF168; emu_call(); return; }
	goto l__0800;
l__0800:
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x080F); emu_cs = 0x1FB5; f__1FB5_01FA_0010_F89C();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
	goto l__080F;
l__080F:
	emu_addw(&emu_sp, 0x6);
	emu_si = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x2) = 0x4D52;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = 0x4F46;
	emu_xorw(&emu_ax, emu_ax);
	emu_dx = 0x4;
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x4);
	emu_push(emu_ax);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x0830); emu_cs = 0x1FB5; f__1FB5_0E9C_001B_37D1();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
	goto l__0830;
l__0830:
	emu_addw(&emu_sp, 0xA);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = 0x0;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = 0x0;
	emu_xorw(&emu_ax, emu_ax);
	emu_dx = 0x4;
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x4);
	emu_push(emu_ax);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x084F); emu_cs = 0x1FB5; f__1FB5_0E9C_001B_37D1();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
	goto l__084F;
l__084F:
	emu_addw(&emu_sp, 0xA);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = 0x4E45;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = 0x4353;
	emu_xorw(&emu_ax, emu_ax);
	emu_dx = 0x4;
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x4);
	emu_push(emu_ax);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x086E); emu_cs = 0x1FB5; f__1FB5_0E9C_001B_37D1();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
	goto l__086E;
l__086E:
	emu_addw(&emu_sp, 0xA);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0xA);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0xC));
	if (emu_ax != 0) goto l__087C;
	goto l__0922;
l__087C:
	emu_get_memory16(emu_ss, emu_bp, -0x2) = 0x454D;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = 0x414E;
	emu_xorw(&emu_ax, emu_ax);
	emu_dx = 0x4;
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x4);
	emu_push(emu_ax);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x0898); emu_cs = 0x1FB5; f__1FB5_0E9C_001B_37D1();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
	goto l__0898;
l__0898:
	emu_addw(&emu_sp, 0xA);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_cs); emu_push(0x08A6); emu_cs = 0x01F7; f__01F7_39A5_001F_1A5D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
	goto l__08A6;
l__08A6:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_xorw(&emu_dx, emu_dx);
	emu_addw(&emu_ax, 0x1);
	emu_adcw(&emu_dx, 0x0);
	emu_get_memory16(emu_ss, emu_bp, -0xA) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0xC) = emu_ax;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_cs); emu_push(0x08C1); emu_cs = 0x2BC0; f__2BC0_0004_000F_950B();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
	goto l__08C1;
l__08C1:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_xorw(&emu_ax, emu_ax);
	emu_dx = 0x4;
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x4);
	emu_push(emu_ax);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x08DB); emu_cs = 0x1FB5; f__1FB5_0E9C_001B_37D1();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
	goto l__08DB;
l__08DB:
	emu_addw(&emu_sp, 0xA);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x08F0); emu_cs = 0x1FB5; f__1FB5_0E9C_001B_37D1();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
	goto l__08F0;
l__08F0:
	emu_addw(&emu_sp, 0xA);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0xA);
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0xC);
	emu_andw(&emu_dx, 0x1);
	emu_andw(&emu_ax, 0x0);
	emu_orw(&emu_dx, emu_ax);
	if (emu_dx == 0) goto l__0922;
	emu_get_memory16(emu_ss, emu_bp, -0xA) = 0x0;
	emu_get_memory16(emu_ss, emu_bp, -0xC) = 0x0;
	emu_xorw(&emu_ax, emu_ax);
	emu_dx = 0x1;
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0xC);
	emu_push(emu_ax);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x091F); emu_cs = 0x1FB5; f__1FB5_0E9C_001B_37D1();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
	goto l__091F;
l__091F:
	emu_addw(&emu_sp, 0xA);
	goto l__0922;
l__0922:
	emu_ax = 0x3;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x092B); emu_cs = 0x252E; f__252E_0001_0018_08B3();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
	goto l__092B;
l__092B:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_ax;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs); emu_push(0x093D); emu_cs = 0x350B; overlay(0x350B, 0); f__B50B_0000_0029_BDBF();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
	goto l__093D;
l__093D:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_di = emu_ax;
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_di);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_ax = 0x4F46;
	emu_dx = 0x4E49;
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x0959); emu_cs = 0x34B1; overlay(0x34B1, 0); f__B4B1_0373_001A_90A2();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
	goto l__0959;
l__0959:
	emu_addw(&emu_sp, 0xE);
	emu_ax = 0x3;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0965); emu_cs = 0x252E; f__252E_0001_0018_08B3();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
	goto l__0965;
l__0965:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_ax;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs); emu_push(0x0977); emu_cs = 0x350B; overlay(0x350B, 0); f__B50B_0326_0016_CD5C();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
	goto l__0977;
l__0977:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_di = emu_ax;
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_di);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_ax = 0x5259;
	emu_dx = 0x4C50;
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x0993); emu_cs = 0x34B1; overlay(0x34B1, 0); f__B4B1_0373_001A_90A2();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
	goto l__0993;
l__0993:
	emu_addw(&emu_sp, 0xE);
	emu_ax = 0x3;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x099F); emu_cs = 0x252E; f__252E_0001_0018_08B3();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
	goto l__099F;
l__099F:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_ax;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs); emu_push(0x09B1); emu_cs = 0x350B; overlay(0x350B, 0); f__B50B_0394_001F_01AF();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
	goto l__09B1;
l__09B1:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_di = emu_ax;
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_di);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_ax = 0x5449;
	emu_dx = 0x4E55;
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x09CD); emu_cs = 0x34B1; overlay(0x34B1, 0); f__B4B1_0373_001A_90A2();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
	goto l__09CD;
l__09CD:
	emu_addw(&emu_sp, 0xE);
	emu_ax = 0x3;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x09D9); emu_cs = 0x252E; f__252E_0001_0018_08B3();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
	goto l__09D9;
l__09D9:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_ax;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs); emu_push(0x09EB); emu_cs = 0x350B; overlay(0x350B, 0); f__B50B_041C_001E_0374();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
	goto l__09EB;
l__09EB:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_di = emu_ax;
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_di);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_ax = 0x4744;
	emu_dx = 0x4C42;
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x0A07); emu_cs = 0x34B1; overlay(0x34B1, 0); f__B4B1_0373_001A_90A2();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
	goto l__0A07;
l__0A07:
	emu_addw(&emu_sp, 0xE);
	emu_ax = 0x3;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0A13); emu_cs = 0x252E; f__252E_0001_0018_08B3();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
	goto l__0A13;
l__0A13:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_ax;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs); emu_push(0x0A25); emu_cs = 0x350B; overlay(0x350B, 0); f__B50B_0268_0012_E6D0();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
	goto l__0A25;
l__0A25:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_di = emu_ax;
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_di);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_ax = 0x2050;
	emu_dx = 0x414D;
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x0A41); emu_cs = 0x34B1; overlay(0x34B1, 0); f__B4B1_0373_001A_90A2();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
	goto l__0A41;
l__0A41:
	emu_addw(&emu_sp, 0xE);
	emu_ax = 0x3;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0A4D); emu_cs = 0x252E; f__252E_0001_0018_08B3();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
	goto l__0A4D;
l__0A4D:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_ax;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs); emu_push(0x0A5F); emu_cs = 0x350B; overlay(0x350B, 0); f__B50B_04A1_001A_1AA9();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
	goto l__0A5F;
l__0A5F:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_di = emu_ax;
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_di);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_ax = 0x4D41;
	emu_dx = 0x4554;
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x0A7B); emu_cs = 0x34B1; overlay(0x34B1, 0); f__B4B1_0373_001A_90A2();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
	goto l__0A7B;
l__0A7B:
	emu_addw(&emu_sp, 0xE);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x0A84); emu_cs = 0x1FB5; f__1FB5_09C7_0018_922D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
	goto l__0A84;
l__0A84:
	emu_pop(&emu_cx);
	emu_decw(&emu_get_memory16(emu_ds, 0x00, 0x38BC));
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
 * Decompiled function f__B511_0A8F_000E_EE64()
 *
 * @name f__B511_0A8F_000E_EE64
 * @implements B511:0A8F:000E:EE64 ()
 * @implements B511:0A9D:000D:8BD5
 * @implements B511:0AAA:000D:9BEB
 * @implements B511:0AB7:000D:CBD3
 * @implements B511:0AC4:0016:9707
 * @implements B511:0ADA:0017:3E92
 * @implements B511:0AF1:0017:AFF4
 * @implements B511:0B08:0014:F77F
 * @implements B511:0B1C:0014:F773
 * @implements B511:0B30:0014:F777
 * @implements B511:0B44:0014:F74B
 * @implements B511:0B58:0014:F74F
 * @implements B511:0B6C:001D:7B37
 * @implements B511:0B89:0014:F14D
 * @implements B511:0B9D:000C:4B79
 * @implements B511:0BA9:0058:9298
 * @implements B511:0C01:0005:6143
 *
 * Called From: B511:0031:0006:5897
 * Called From: B511:0465:0006:5E88
 */
void f__B511_0A8F_000E_EE64()
{
l__0A8F:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x0A9D); emu_cs = 0x0FE4; emu_Unit_Init();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
	goto l__0A9D;
l__0A9D:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x0AAA); emu_cs = 0x1082; emu_Building_Init();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
	goto l__0AAA;
l__0AAA:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x0AB7); emu_cs = 0x104B; emu_AirUnit_Init();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
	goto l__0AB7;
l__0AB7:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x0AC4); emu_cs = 0x10BE; emu_House_Init();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
	goto l__0AC4;
l__0AC4:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_ax = 0x770;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3958));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3956));
	emu_push(emu_cs); emu_push(0x0ADA); emu_cs = 0x01F7; emu_Tools_Memset();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
	goto l__0ADA;
l__0ADA:
	emu_addw(&emu_sp, 0x8);
	emu_ax = 0x280;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x395C));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x395A));
	emu_push(emu_cs); emu_push(0x0AF1); emu_cs = 0x01F7; emu_Tools_Memset();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
	goto l__0AF1;
l__0AF1:
	emu_addw(&emu_sp, 0x8);
	emu_ax = 0x4000;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x39EC));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x39EA));
	emu_push(emu_cs); emu_push(0x0B08); emu_cs = 0x01F7; emu_Tools_Memset();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
	goto l__0B08;
l__0B08:
	emu_addw(&emu_sp, 0x8);
	emu_ax = 0x200;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x95E5;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0B1C); emu_cs = 0x01F7; emu_Tools_Memset();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
	goto l__0B1C;
l__0B1C:
	emu_addw(&emu_sp, 0x8);
	emu_ax = 0x200;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x93E5;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0B30); emu_cs = 0x01F7; emu_Tools_Memset();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
	goto l__0B30;
l__0B30:
	emu_addw(&emu_sp, 0x8);
	emu_ax = 0x200;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x91E5;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0B44); emu_cs = 0x01F7; emu_Tools_Memset();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
	goto l__0B44;
l__0B44:
	emu_addw(&emu_sp, 0x8);
	emu_ax = 0x200;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x8FE5;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0B58); emu_cs = 0x01F7; emu_Tools_Memset();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
	goto l__0B58;
l__0B58:
	emu_addw(&emu_sp, 0x8);
	emu_ax = 0x200;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x8DE5;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0B6C); emu_cs = 0x01F7; emu_Tools_Memset();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
	goto l__0B6C;
l__0B6C:
	emu_addw(&emu_sp, 0x8);
	emu_get_memory16(emu_ds, 0x00, 0x38B4) = 0x0;
	emu_ax = 0x2080;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = 0x2E9C;
	emu_push(emu_ax);
	emu_ax = 0x323F;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0B89); emu_cs = 0x01F7; emu_Tools_Memset();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
	goto l__0B89;
l__0B89:
	emu_addw(&emu_sp, 0x8);
	emu_ax = 0x36;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x97E7;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0B9D); emu_cs = 0x01F7; emu_Tools_Memset();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
	goto l__0B9D;
l__0B9D:
	emu_addw(&emu_sp, 0x8);
	emu_ax = 0xFFFE;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0BA9); emu_cs = 0x3483; overlay(0x3483, 0); f__B483_0363_0016_83DF();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
	goto l__0BA9;
l__0BA9:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ds, 0x00, 0x38FE) = 0x0;
	emu_get_memory16(emu_ds, 0x00, 0x38FC) = 0x0;
	emu_get_memory16(emu_ds, 0x00, 0x38FA) = 0x0;
	emu_get_memory16(emu_ds, 0x00, 0x38F4) = 0x0;
	emu_get_memory16(emu_ds, 0x00, 0x38F2) = 0x0;
	emu_get_memory16(emu_ds, 0x00, 0x38F6) = 0xFFFF;
	emu_get_memory16(emu_ds, 0x00, 0x38E2) = 0xFFFF;
	emu_get_memory16(emu_ds, 0x00, 0x38E6) = 0x0;
	emu_get_memory16(emu_ds, 0x00, 0x38E4) = 0x0;
	emu_get_memory16(emu_ds, 0x00, 0x38EC) = 0x0;
	emu_get_memory16(emu_ds, 0x00, 0x38EE) = 0xFFFF;
	emu_get_memory16(emu_ds, 0x00, 0x38F0) = 0x0;
	emu_ax = 0xFFFF;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x0C01); emu_cs = 0x10E4; f__10E4_09AB_0031_5E8E();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
	goto l__0C01;
l__0C01:
	emu_addw(&emu_sp, 0x6);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B511_0C06_002A_8725()
 *
 * @name f__B511_0C06_002A_8725
 * @implements B511:0C06:002A:8725 ()
 * @implements B511:0C30:0005:60C3
 *
 * Called From: B511:0019:000E:C19A
 */
void f__B511_0C06_002A_8725()
{
l__0C06:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x3A38);
	emu_dx = 0x1E;
	emu_imuluw(&emu_ax, emu_dx);
	emu_bx = emu_ax;
	emu_push(emu_get_memory16(emu_ds, emu_bx, 0x3810));
	emu_push(emu_ds);
	emu_ax = 0x8D0D;
	emu_push(emu_ax);
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x38B2);
	emu_cl = 0x2;
	emu_shlw(&emu_ax, emu_cl);
	emu_addw(&emu_ax, 0x4);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3A38));
	emu_push(emu_cs);
	emu_push(0x0C30); f__B511_0C93_0014_2A98();
	goto l__0C30;
l__0C30:
	emu_addw(&emu_sp, 0xA);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B511_0C35_002A_C70F()
 *
 * @name f__B511_0C35_002A_C70F
 * @implements B511:0C35:002A:C70F ()
 * @implements B511:0C5F:0005:60C3
 *
 * Called From: 3511:0039:0005:0000
 */
void f__B511_0C35_002A_C70F()
{
l__0C35:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x3A38);
	emu_dx = 0x1E;
	emu_imuluw(&emu_ax, emu_dx);
	emu_bx = emu_ax;
	emu_push(emu_get_memory16(emu_ds, emu_bx, 0x380C));
	emu_push(emu_ds);
	emu_ax = 0x8D1B;
	emu_push(emu_ax);
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x38B2);
	emu_cl = 0x2;
	emu_shlw(&emu_ax, emu_cl);
	emu_addw(&emu_ax, 0x5);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3A38));
	emu_push(emu_cs);
	emu_push(0x0C5F); f__B511_0C93_0014_2A98();
	goto l__0C5F;
l__0C5F:
	emu_addw(&emu_sp, 0xA);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B511_0C64_002A_C757()
 *
 * @name f__B511_0C64_002A_C757
 * @implements B511:0C64:002A:C757 ()
 * @implements B511:0C8E:0005:60C3
 *
 * Called From: 3511:003E:0005:0000
 */
void f__B511_0C64_002A_C757()
{
l__0C64:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x3A38);
	emu_dx = 0x1E;
	emu_imuluw(&emu_ax, emu_dx);
	emu_bx = emu_ax;
	emu_push(emu_get_memory16(emu_ds, emu_bx, 0x380E));
	emu_push(emu_ds);
	emu_ax = 0x8D29;
	emu_push(emu_ax);
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x38B2);
	emu_cl = 0x2;
	emu_shlw(&emu_ax, emu_cl);
	emu_addw(&emu_ax, 0x6);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3A38));
	emu_push(emu_cs);
	emu_push(0x0C8E); f__B511_0C93_0014_2A98();
	goto l__0C8E;
l__0C8E:
	emu_addw(&emu_sp, 0xA);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B511_0C93_0014_2A98()
 *
 * @name f__B511_0C93_0014_2A98
 * @implements B511:0C93:0014:2A98 ()
 * @implements B511:0CA7:0015:7EAD
 * @implements B511:0CBC:001E:3AA6
 * @implements B511:0CDA:000F:E74D
 * @implements B511:0CE9:000B:6BAA
 * @implements B511:0CF4:0024:CF16
 * @implements B511:0D18:000F:E74D
 * @implements B511:0D27:000B:68AA
 * @implements B511:0D32:001A:F3E0
 * @implements B511:0D4C:0012:77BF
 * @implements B511:0D5E:000C:5509
 * @implements B511:0D6A:0008:8F41
 * @implements B511:0D72:0023:911C
 * @implements B511:0D73:0022:9A3C
 * @implements B511:0D95:001C:BDE5
 * @implements B511:0DB1:0009:DAE3
 * @implements B511:0DBA:0018:314D
 * @implements B511:0DD2:0020:BA81
 * @implements B511:0DF2:000F:F258
 * @implements B511:0E01:0003:A2BB
 * @implements B511:0E04:000B:9749
 * @implements B511:0E0F:000D:4AD9
 * @implements B511:0E1C:000C:15CC
 * @implements B511:0E28:0014:36BE
 * @implements B511:0E3C:0008:2947
 *
 * Called From: B511:0C2D:002A:8725
 * Called From: B511:0C5C:002A:C70F
 * Called From: B511:0C8B:002A:C757
 */
void f__B511_0C93_0014_2A98()
{
l__0C93:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0xA);
	emu_push(emu_si);
	emu_si = emu_get_memory16(emu_ss, emu_bp,  0xE);
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x37AE), 0x0);
	if (emu_get_memory16(emu_ds, 0x00, 0x37AE) == 0x0) goto l__0CA7;
	/* Unresolved jump */ emu_ip = 0x0E3F; emu_last_cs = 0xB511; emu_last_ip = 0x0CA4; emu_last_length = 0x0014; emu_last_crc = 0x2A98; emu_call();
l__0CA7:
	emu_ax = 0x2DCE;
	emu_push(emu_ax);
	emu_ax = 0x440;
	emu_push(emu_ax);
	emu_ax = 0x7;
	emu_push(emu_ax);
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0CBC); emu_cs = 0x34B8; overlay(0x34B8, 0); f__B4B8_0A1E_001A_E094();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
	goto l__0CBC;
l__0CBC:
	emu_addw(&emu_sp, 0x8);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = 0x6;
	emu_push(emu_ax);
	emu_ax = 0xA8;
	emu_push(emu_ax);
	emu_ax = 0xA8;
	emu_push(emu_ax);
	emu_ax = 0xAF;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0CDA); emu_cs = 0x0FCB; f__0FCB_005F_001C_FDC4();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
	goto l__0CDA;
l__0CDA:
	emu_pop(&emu_cx);
	emu_bx = emu_ax;
	emu_es = emu_dx;
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x0);
	emu_ax = (int8)emu_al;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0CE9); emu_cs = 0x29DA; f__29DA_00D0_0013_E21A();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
	goto l__0CE9;
l__0CE9:
	emu_pop(&emu_cx);
	emu_push(emu_ax);
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0CF4); emu_cs = 0x34B8; overlay(0x34B8, 0); f__B4B8_0ED9_001E_DC63();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
	goto l__0CF4;
l__0CF4:
	emu_addw(&emu_sp, 0xE);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = 0x8;
	emu_push(emu_ax);
	emu_ax = 0xA8;
	emu_push(emu_ax);
	emu_ax = 0xF0;
	emu_push(emu_ax);
	emu_ax = 0xB0;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0D18); emu_cs = 0x0FCB; f__0FCB_005F_001C_FDC4();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
	goto l__0D18;
l__0D18:
	emu_pop(&emu_cx);
	emu_bx = emu_ax;
	emu_es = emu_dx;
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x0);
	emu_ax = (int8)emu_al;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0D27); emu_cs = 0x29DA; f__29DA_00D0_0013_E21A();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
	goto l__0D27;
l__0D27:
	emu_pop(&emu_cx);
	emu_push(emu_ax);
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0D32); emu_cs = 0x34B8; overlay(0x34B8, 0); f__B4B8_0ED9_001E_DC63();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
	goto l__0D32;
l__0D32:
	emu_addw(&emu_sp, 0xE);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_ax;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x0D4C); emu_cs = 0x348B; overlay(0x348B, 0); f__B48B_0000_001E_7E97();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
	goto l__0D4C;
l__0D4C:
	emu_addw(&emu_sp, 0x8);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_ax = 0xFFFE;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0D5E); emu_cs = 0x3483; overlay(0x3483, 0); f__B483_0363_0016_83DF();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
	goto l__0D5E;
l__0D5E:
	emu_pop(&emu_cx);
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x0D6A); emu_cs = 0x1DD7; f__1DD7_022D_0015_1956();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
	goto l__0D6A;
l__0D6A:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x0D72); emu_cs = 0x3483; overlay(0x3483, 0); f__B483_0283_0014_983A();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
	goto l__0D72;
l__0D72:
	emu_pop(&emu_cx);
	goto l__0D73;
l__0D73:
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_dx = 0x1E;
	emu_imuluw(&emu_ax, emu_dx);
	emu_bx = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, emu_bx, 0x37F8));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x0);
	emu_ax = (int8)emu_al;
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x2BDD;
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x9939;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0D95); emu_cs = 0x01F7; f__01F7_378D_0020_0F64();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
	goto l__0D95;
l__0D95:
	emu_addw(&emu_sp, 0xA);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x38DE));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x38DC));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x38DA));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_ds);
	emu_ax = 0x9939;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0DB1); emu_cs = 0x0642; f__0642_075D_0011_C164();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
	goto l__0DB1;
l__0DB1:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0DBA); emu_cs = 0x0FCB; f__0FCB_0088_0016_2DD9();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
	goto l__0DBA;
l__0DBA:
	emu_addw(&emu_sp, 0xC);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x38DC));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x38DA));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x38DC));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x38DA));
	emu_push(emu_cs); emu_push(0x0DD2); emu_cs = 0x2502; f__2502_0008_0015_FFBD();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
	goto l__0DD2;
l__0DD2:
	emu_addw(&emu_sp, 0x8);
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x38DC));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x38DA));
	emu_push(emu_cs);
	emu_push(0x0DF2); f__B511_0E44_000C_24F5();
	goto l__0DF2;
l__0DF2:
	emu_addw(&emu_sp, 0xE);
	emu_get_memory16(emu_ss, emu_bp, -0xA) = emu_ax;
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x8002);
	if (emu_get_memory16(emu_ss, emu_bp, -0xA) == 0x8002) goto l__0E01;
	goto l__0E04;
l__0E01:
	goto l__0D73;
l__0E04:
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs); emu_push(0x0E0F); emu_cs = 0x23E1; f__23E1_01C2_0011_24E8();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
	goto l__0E0F;
l__0E0F:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x0E1C); emu_cs = 0x23E1; f__23E1_01C2_0011_24E8();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
	goto l__0E1C;
l__0E1C:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_cmpw(&emu_si, 0xFFFF);
	if (emu_si != 0xFFFF) {
		emu_push(emu_cs); emu_push(0x0E28); emu_cs = 0x1DD7; f__1DD7_0B53_0025_36F7();
		/* Check if this overlay should be reloaded */
		if (emu_cs == 0x3511) { overlay(0x3511, 1); }
	}
	goto l__0E28;
l__0E28:
	emu_ax = 0x2DCE;
	emu_push(emu_ax);
	emu_ax = 0x440;
	emu_push(emu_ax);
	emu_ax = 0x7;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0E3C); emu_cs = 0x34B8; overlay(0x34B8, 0); f__B4B8_0A1E_001A_E094();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
	goto l__0E3C;
l__0E3C:
	emu_addw(&emu_sp, 0x8);
	emu_pop(&emu_si);
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B511_0E44_000C_24F5()
 *
 * @name f__B511_0E44_000C_24F5
 * @implements B511:0E44:000C:24F5 ()
 * @implements B511:0E50:000F:89E9
 * @implements B511:0E5F:000C:DD83
 * @implements B511:0E6B:000A:9968
 * @implements B511:0E75:0023:E3A4
 * @implements B511:0E98:000E:204B
 * @implements B511:0EA6:002A:894B
 * @implements B511:0ED0:000E:1EBD
 * @implements B511:0EDE:000B:1AF2
 * @implements B511:0EE9:0009:E4DB
 * @implements B511:0EF2:0006:0569
 * @implements B511:0EF8:0020:001D
 * @implements B511:0F18:0008:43E5
 * @implements B511:0F20:0011:9942
 * @implements B511:0F31:0024:AB3F
 * @implements B511:0F55:0018:A36B
 * @implements B511:0F6D:000D:C913
 * @implements B511:0F6F:000B:0481
 * @implements B511:0F7A:0009:0F5C
 * @implements B511:0F83:0008:4C65
 * @implements B511:0F8B:000C:C06C
 * @implements B511:0F92:0005:E089
 * @implements B511:0F97:000B:9995
 * @implements B511:0FA2:0005:8EFD
 * @implements B511:0FA7:0004:68F2
 * @implements B511:0FAB:0005:8BCF
 *
 * Called From: B511:0DEF:0020:BA81
 * Called From: B511:1363:0023:0A38
 */
void f__B511_0E44_000C_24F5()
{
l__0E44:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x4);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x0E50); emu_cs = 0x34B8; overlay(0x34B8, 0); f__B4B8_0ECE_000B_BD2E();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
	goto l__0E50;
l__0E50:
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3A38));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_cs); emu_push(0x0E5F); emu_cs = 0x34DA; overlay(0x34DA, 0); f__B4DA_0000_002C_B3C2();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
	goto l__0E5F;
l__0E5F:
	emu_addw(&emu_sp, 0x6);
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0E6B); emu_cs = 0x2598; f__2598_0000_0017_EB80();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
	goto l__0E6B;
l__0E6B:
	emu_pop(&emu_cx);
	emu_ax = 0x8;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0E75); emu_cs = 0x07AE; f__07AE_00E4_000D_9955();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
	goto l__0E75;
l__0E75:
	emu_pop(&emu_cx);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0xA);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0xC));
	if (emu_ax == 0) { /* Unresolved jump */ emu_ip = 0x0EE0; emu_last_cs = 0xB511; emu_last_ip = 0x0E7C; emu_last_length = 0x0023; emu_last_crc = 0xE3A4; emu_call(); return; }
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
	emu_push(emu_cs); emu_push(0x0E98); emu_cs = 0x252E; f__252E_0001_0018_08B3();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
	goto l__0E98;
l__0E98:
	emu_pop(&emu_cx);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_cs); emu_push(0x0EA6); emu_cs = 0x352A; overlay(0x352A, 0); f__B52A_0000_0019_1617();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
	goto l__0EA6;
l__0EA6:
	emu_addw(&emu_sp, 0x12);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
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
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x0ED0); emu_cs = 0x352A; overlay(0x352A, 0); f__B52A_04AC_0033_548A();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
	goto l__0ED0;
l__0ED0:
	emu_addw(&emu_sp, 0xE);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x0EDE); emu_cs = 0x352A; overlay(0x352A, 0); f__B52A_0476_0030_9D41();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
	goto l__0EDE;
l__0EDE:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0EE9); emu_cs = 0x34DA; overlay(0x34DA, 0); f__B4DA_0A8E_0025_4AC8();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
	goto l__0EE9;
l__0EE9:
	emu_pop(&emu_cx);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0EF2); emu_cs = 0x2598; f__2598_0000_0017_EB80();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
	goto l__0EF2;
l__0EF2:
	emu_pop(&emu_cx);
	emu_push(emu_cs); emu_push(0x0EF8); emu_cs = 0x2B6C; f__2B6C_0137_0020_C73F();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
	goto l__0EF8;
l__0EF8:
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
	emu_push(emu_cs); emu_push(0x0F18); emu_cs = 0x24D0; f__24D0_000D_0039_C17D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
	goto l__0F18;
l__0F18:
	emu_addw(&emu_sp, 0x10);
	emu_push(emu_cs); emu_push(0x0F20); emu_cs = 0x2B6C; f__2B6C_0169_001E_6939();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
	goto l__0F20;
l__0F20:
	emu_ax = 0xF;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C34));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C32));
	emu_push(emu_cs); emu_push(0x0F31); emu_cs = 0x259E; f__259E_0006_0016_858A();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
	goto l__0F31;
l__0F31:
	emu_addw(&emu_sp, 0x6);
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_cs); emu_push(0x0F55); emu_cs = 0x34DA; overlay(0x34DA, 0); f__B4DA_0AB8_002A_AAB2();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
	goto l__0F55;
l__0F55:
	emu_addw(&emu_sp, 0x12);
	emu_si = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0xE);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x10));
	if (emu_ax == 0) goto l__0F92;
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x10));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_push(emu_cs); emu_push(0x0F6D); emu_cs = 0x348B; overlay(0x348B, 0); f__B48B_03A4_0005_619A();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
	goto l__0F6D;
l__0F6D:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	goto l__0F6F;
l__0F6F:
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x10));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_push(emu_cs); emu_push(0x0F7A); emu_cs = 0x34A2; overlay(0x34A2, 0); f__B4A2_0039_000B_EC51();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
	goto l__0F7A;
l__0F7A:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_si = emu_ax;
	emu_push(emu_cs); emu_push(0x0F83); emu_cs = 0x0642; f__0642_0559_0027_3560();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
	goto l__0F83;
l__0F83:
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0F8B); emu_cs = 0x34DA; overlay(0x34DA, 0); f__B4DA_0308_0018_F99F();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
	goto l__0F8B;
l__0F8B:
	emu_pop(&emu_cx);
	emu_testw(&emu_si, 0x8000);
	if ((emu_si & 0x8000) == 0) goto l__0F6F;
	goto l__0F92;
l__0F92:
	emu_push(emu_cs); emu_push(0x0F97); emu_cs = 0x29E8; emu_Input_History_Clear();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
	goto l__0F97;
l__0F97:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp,  0x12), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp,  0x12) == 0x0) goto l__0FA7;
	emu_push(emu_cs); emu_push(0x0FA2); emu_cs = 0x34DA; overlay(0x34DA, 0); f__B4DA_02E0_0023_E297();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
	goto l__0FA2;
l__0FA2:
	emu_push(emu_cs); emu_push(0x0FA7); emu_cs = 0x34B8; overlay(0x34B8, 0); f__B4B8_0D23_0010_BA99();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
	goto l__0FA7;
l__0FA7:
	emu_ax = emu_si;
	goto l__0FAB;
l__0FAB:
	emu_pop(&emu_si);
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B511_0FB0_0028_02A0()
 *
 * @name f__B511_0FB0_0028_02A0
 * @implements B511:0FB0:0028:02A0 ()
 * @implements B511:0FD8:000E:7213
 * @implements B511:0FE6:000B:EDE5
 * @implements B511:0FF1:0016:1AAC
 * @implements B511:1007:0008:CE1B
 * @implements B511:100A:0005:6C93
 * @implements B511:100F:0010:D0C5
 * @implements B511:101F:0043:8F6D
 * @implements B511:1062:0035:7C26
 * @implements B511:1097:0012:7CF2
 * @implements B511:10A1:0008:5BBF
 * @implements B511:10A9:001C:9617
 * @implements B511:10C5:0009:0769
 * @implements B511:10CE:001B:4375
 * @implements B511:10E9:0008:C3E0
 * @implements B511:10F1:0020:001D
 * @implements B511:1111:0014:B1CE
 * @implements B511:1125:0008:1BE5
 * @implements B511:112D:0005:18A5
 * @implements B511:1132:000B:D4F4
 * @implements B511:113D:000A:C086
 * @implements B511:1147:0020:6FFF
 * @implements B511:1153:0014:A689
 * @implements B511:1167:0005:D04A
 * @implements B511:116C:0005:E6CA
 * @implements B511:1171:0004:EFF9
 * @implements B511:1175:0002:C03A
 * @implements B511:1177:000A:673D
 * @implements B511:1181:0014:18D0
 * @implements B511:119B:0012:75BC
 * @implements B511:11B9:0002:D4BA
 * @implements B511:11BB:001B:9F2E
 * @implements B511:11D6:0025:9022
 * @implements B511:11E4:0017:51C5
 * @implements B511:11FB:0014:EDAC
 * @implements B511:1212:0024:1AEB
 * @implements B511:1236:000F:E74D
 * @implements B511:1245:000B:6BAA
 * @implements B511:1250:001A:4715
 * @implements B511:126A:0024:2BD7
 * @implements B511:128E:000F:E74D
 * @implements B511:129D:000B:68AA
 * @implements B511:12A8:001A:4715
 * @implements B511:12C2:002A:D28B
 * @implements B511:12EC:001C:D688
 * @implements B511:1308:0009:DAE3
 * @implements B511:1311:0018:314D
 * @implements B511:1329:0011:4468
 * @implements B511:133A:0009:70CE
 * @implements B511:1343:0023:0A38
 * @implements B511:1366:0021:27D9
 * @implements B511:1387:0009:0769
 * @implements B511:1390:0008:DBE0
 * @implements B511:1398:0020:F01E
 * @implements B511:13B8:002C:FE1E
 * @implements B511:13E4:000E:0FF5
 * @implements B511:13F2:0007:E5DE
 * @implements B511:13F9:0029:4034
 * @implements B511:1422:0019:858B
 * @implements B511:143B:0002:C93A
 * @implements B511:143D:000F:CDB2
 * @implements B511:144C:0005:906E
 * @implements B511:144F:0002:D4BA
 * @implements B511:1451:001B:8EEC
 * @implements B511:146C:001B:0682
 * @implements B511:147A:000D:5E94
 * @implements B511:1487:0005:8EFD
 * @implements B511:148C:0008:1199
 * @implements B511:1494:0003:CB1A
 * @implements B511:1497:0005:7A4B
 * @implements B511:149C:000D:A79B
 * @implements B511:14A9:0003:E0B7
 * @implements B511:14AC:0008:FC73
 * @implements B511:14B4:0007:B64F
 * @implements B511:14BB:0015:3476
 * @implements B511:14D0:0008:4201
 * @implements B511:14D8:0005:816D
 * @implements B511:14DD:000F:CDB2
 * @implements B511:14EC:0007:79C7
 * @implements B511:14F3:0006:F7CE
 *
 * Called From: 3511:0043:0005:0000
 */
void f__B511_0FB0_0028_02A0()
{
l__0FB0:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x314);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_si = 0x5;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = 0x0;
	emu_get_memory16(emu_ss, emu_bp, -0x6) = 0x0;
	emu_ax = 0x300;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x314);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0FD8); emu_cs = 0x01F7; emu_Tools_Memset();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
	goto l__0FD8;
l__0FD8:
	emu_addw(&emu_sp, 0x8);
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x0FE6); emu_cs = 0x1DD7; f__1DD7_022D_0015_1956();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
	goto l__0FE6;
l__0FE6:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_ax = 0x5;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0FF1); emu_cs = 0x3483; overlay(0x3483, 0); f__B483_04CB_0015_EBB4();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
	goto l__0FF1;
l__0FF1:
	emu_pop(&emu_cx);
	emu_ax = 0x2DCE;
	emu_push(emu_ax);
	emu_ax = 0x440;
	emu_push(emu_ax);
	emu_ax = 0x7;
	emu_push(emu_ax);
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1007); emu_cs = 0x34B8; overlay(0x34B8, 0); f__B4B8_0A1E_001A_E094();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
	goto l__1007;
l__1007:
	emu_addw(&emu_sp, 0x8);
	goto l__100A;
l__100A:
	emu_xorw(&emu_di, emu_di);
	goto l__10A1;
l__100F:
	emu_ax = 0x10;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_dx = 0x3C;
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x101F); emu_cs = 0x23E1; f__23E1_0004_0014_2BC0();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
	goto l__101F;
l__101F:
	emu_addw(&emu_sp, 0x6);
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0xA) = emu_ax;
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = 0xFFFF;
	emu_push(emu_ax);
	emu_ax = emu_di;
	emu_dx = 0x6;
	emu_imuluw(&emu_ax, emu_dx);
	emu_bx = emu_ax;
	emu_push(emu_get_memory16(emu_ds, emu_bx, 0x2BAE));
	emu_ax = emu_di;
	emu_dx = 0x6;
	emu_imuluw(&emu_ax, emu_dx);
	emu_bx = emu_ax;
	emu_push(emu_get_memory16(emu_ds, emu_bx, 0x2BAC));
	emu_ax = emu_di;
	emu_dx = 0x6;
	emu_imuluw(&emu_ax, emu_dx);
	emu_bx = emu_ax;
	emu_push(emu_get_memory16(emu_ds, emu_bx, 0x2BB0));
	emu_ax = emu_di;
	emu_incw(&emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1062); emu_cs = 0x34B8; overlay(0x34B8, 0); f__B4B8_0ED9_001E_DC63();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
	goto l__1062;
l__1062:
	emu_addw(&emu_sp, 0xE);
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0xA) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_get_memory16(emu_es, emu_bx, 0xE) = 0x11C0;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_get_memory16(emu_es, emu_bx, 0x22) = 0x60;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_get_memory16(emu_es, emu_bx, 0x24) = 0x68;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_cs); emu_push(0x1097); emu_cs = 0x348B; overlay(0x348B, 0); f__B48B_0000_001E_7E97();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
	goto l__1097;
l__1097:
	emu_addw(&emu_sp, 0x8);
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_ax;
	emu_incw(&emu_di);
	goto l__10A1;
l__10A1:
	emu_cmpw(&emu_di, 0x2);
	if ((int16)emu_di > (int16)0x2) goto l__10A9;
	goto l__100F;
l__10A9:
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_ax = 0x3;
	emu_push(emu_ax);
	emu_ax = 0x3;
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x2BE4;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x10C5); emu_cs = 0x0642; f__0642_075D_0011_C164();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
	goto l__10C5;
l__10C5:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x10CE); emu_cs = 0x34CA; overlay(0x34CA, 0); f__B4CA_020F_0017_A939();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
	goto l__10CE;
l__10CE:
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
	emu_push(0x10E9);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A604A5: f__22A6_04A5_000F_3B8F(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0xB511; emu_last_ip = 0x10E4; emu_last_length = 0x001B; emu_last_crc = 0x4375;
			emu_call();
			return;
	}
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
	goto l__10E9;
l__10E9:
	emu_addw(&emu_sp, 0x8);
	emu_push(emu_cs); emu_push(0x10F1); emu_cs = 0x2B6C; f__2B6C_0137_0020_C73F();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
	goto l__10F1;
l__10F1:
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
	emu_push(emu_cs); emu_push(0x1111); emu_cs = 0x24D0; f__24D0_000D_0039_C17D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
	goto l__1111;
l__1111:
	emu_addw(&emu_sp, 0x10);
	emu_ax = 0xF;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C34));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C32));
	emu_push(emu_cs); emu_push(0x1125); emu_cs = 0x259E; f__259E_0006_0016_858A();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
	goto l__1125;
l__1125:
	emu_addw(&emu_sp, 0x6);
	emu_push(emu_cs); emu_push(0x112D); emu_cs = 0x2B6C; f__2B6C_0169_001E_6939();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
	goto l__112D;
l__112D:
	emu_si = 0xFFFE;
	goto l__1177;
l__1132:
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_cs); emu_push(0x113D); emu_cs = 0x34A2; overlay(0x34A2, 0); f__B4A2_0039_000B_EC51();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
	goto l__113D;
l__113D:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0xE) = emu_ax;
	emu_push(emu_cs); emu_push(0x1147); emu_cs = 0x0642; f__0642_0559_0027_3560();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
	goto l__1147;
l__1147:
	emu_testw(&emu_get_memory16(emu_ss, emu_bp, -0xE), 0x800);
	if ((emu_get_memory16(emu_ss, emu_bp, -0xE) & 0x800) != 0) {
		emu_get_memory16(emu_ss, emu_bp, -0xE) = 0x0;
	}
	goto l__1153;
l__1153:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0xE);
	emu_cmpw(&emu_ax, 0x8001);
	if (emu_ax == 0x8001) goto l__1167;
	emu_cmpw(&emu_ax, 0x8002);
	if (emu_ax == 0x8002) goto l__116C;
	emu_cmpw(&emu_ax, 0x8003);
	if (emu_ax == 0x8003) goto l__1171;
	goto l__1175;
l__1167:
	emu_si = 0x1;
	goto l__1177;
l__116C:
	emu_si = 0x2;
	goto l__1177;
l__1171:
	emu_xorw(&emu_si, emu_si);
	goto l__1177;
l__1175:
	goto l__1177;
l__1177:
	emu_cmpw(&emu_si, 0xFFFE);
	if (emu_si == 0xFFFE) goto l__1132;
	emu_push(emu_cs); emu_push(0x1181); emu_cs = 0x2B6C; f__2B6C_0137_0020_C73F();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
	goto l__1181;
l__1181:
	emu_cmpw(&emu_si, 0xFFFF);
	if (emu_si != 0xFFFF) goto l__119B;
	emu_ax = 0xF;
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x314);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1195); emu_cs = 0x259E; f__259E_0006_0016_858A();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
	/* Unresolved jump */ emu_ip = 0x1195; emu_last_cs = 0xB511; emu_last_ip = 0x1195; emu_last_length = 0x0014; emu_last_crc = 0x18D0; emu_call();
l__119B:
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x6D8F), 0x0);
	if (emu_get_memory16(emu_ds, 0x00, 0x6D8F) == 0x0) goto l__11B9;
	emu_ax = emu_si;
	emu_addw(&emu_ax, 0x3E);
	emu_push(emu_ax);
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x11AD); emu_cs = 0x3483; emu_ip = 0x002A; emu_last_cs = 0xB511; emu_last_ip = 0x11A8; emu_last_length = 0x0012; emu_last_crc = 0x75BC; emu_call();
	/* Unresolved jump */ emu_ip = 0x11AD; emu_last_cs = 0xB511; emu_last_ip = 0x11AD; emu_last_length = 0x0012; emu_last_crc = 0x75BC; emu_call();
l__11B9:
	goto l__11E4;
l__11BB:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x2);
	emu_dx = emu_get_memory16(emu_es, emu_bx, 0x0);
	emu_get_memory16(emu_ss, emu_bp, -0xE) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x10) = emu_dx;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_cs); emu_push(0x11D6); emu_cs = 0x23E1; f__23E1_01C2_0011_24E8();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
	goto l__11D6;
l__11D6:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0xE);
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x10);
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_dx;
	goto l__11E4;
l__11E4:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x6);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x4));
	if (emu_ax != 0) goto l__11BB;
	emu_ax = 0xF;
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x314);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x11FB); emu_cs = 0x259E; f__259E_0006_0016_858A();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
	goto l__11FB;
l__11FB:
	emu_addw(&emu_sp, 0x6);
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x37AE), 0x0);
	if (emu_get_memory16(emu_ds, 0x00, 0x37AE) != 0x0) { /* Unresolved jump */ emu_ip = 0x120C; emu_last_cs = 0xB511; emu_last_ip = 0x1203; emu_last_length = 0x0014; emu_last_crc = 0xEDAC; emu_call(); return; }
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x37A0), 0x0);
	if (emu_get_memory16(emu_ds, 0x00, 0x37A0) == 0x0) goto l__1212;
	goto l__14AC;
l__1212:
	emu_get_memory16(emu_ss, emu_bp, -0xE) = 0x0;
	emu_get_memory16(emu_ss, emu_bp, -0x10) = 0x0;
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = 0xA8;
	emu_push(emu_ax);
	emu_ax = 0xA8;
	emu_push(emu_ax);
	emu_ax = 0x6B;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1236); emu_cs = 0x0FCB; f__0FCB_005F_001C_FDC4();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
	goto l__1236;
l__1236:
	emu_pop(&emu_cx);
	emu_bx = emu_ax;
	emu_es = emu_dx;
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x0);
	emu_ax = (int8)emu_al;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1245); emu_cs = 0x29DA; f__29DA_00D0_0013_E21A();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
	goto l__1245;
l__1245:
	emu_pop(&emu_cx);
	emu_push(emu_ax);
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1250); emu_cs = 0x34B8; overlay(0x34B8, 0); f__B4B8_0ED9_001E_DC63();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
	goto l__1250;
l__1250:
	emu_addw(&emu_sp, 0xE);
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0xA) = emu_ax;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_push(emu_cs); emu_push(0x126A); emu_cs = 0x348B; overlay(0x348B, 0); f__B48B_0000_001E_7E97();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
	goto l__126A;
l__126A:
	emu_addw(&emu_sp, 0x8);
	emu_get_memory16(emu_ss, emu_bp, -0xE) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x10) = emu_ax;
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_ax = 0xA8;
	emu_push(emu_ax);
	emu_ax = 0xF0;
	emu_push(emu_ax);
	emu_ax = 0x6C;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x128E); emu_cs = 0x0FCB; f__0FCB_005F_001C_FDC4();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
	goto l__128E;
l__128E:
	emu_pop(&emu_cx);
	emu_bx = emu_ax;
	emu_es = emu_dx;
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x0);
	emu_ax = (int8)emu_al;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x129D); emu_cs = 0x29DA; f__29DA_00D0_0013_E21A();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
	goto l__129D;
l__129D:
	emu_pop(&emu_cx);
	emu_push(emu_ax);
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x12A8); emu_cs = 0x34B8; overlay(0x34B8, 0); f__B4B8_0ED9_001E_DC63();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
	goto l__12A8;
l__12A8:
	emu_addw(&emu_sp, 0xE);
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0xA) = emu_ax;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_push(emu_cs); emu_push(0x12C2); emu_cs = 0x348B; overlay(0x348B, 0); f__B48B_0000_001E_7E97();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
	goto l__12C2;
l__12C2:
	emu_addw(&emu_sp, 0x8);
	emu_get_memory16(emu_ss, emu_bp, -0xE) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x10) = emu_ax;
	emu_ax = emu_si;
	emu_dx = 0x1E;
	emu_imuluw(&emu_ax, emu_dx);
	emu_bx = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, emu_bx, 0x37F8));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x0);
	emu_ax = (int8)emu_al;
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x2BDD;
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x9939;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x12EC); emu_cs = 0x01F7; f__01F7_378D_0020_0F64();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
	goto l__12EC;
l__12EC:
	emu_addw(&emu_sp, 0xA);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x38DE));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x38DC));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x38DA));
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x9939;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1308); emu_cs = 0x0642; f__0642_075D_0011_C164();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
	goto l__1308;
l__1308:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1311); emu_cs = 0x0FCB; f__0FCB_0088_0016_2DD9();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
	goto l__1311;
l__1311:
	emu_addw(&emu_sp, 0xC);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x38DC));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x38DA));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x38DC));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x38DA));
	emu_push(emu_cs); emu_push(0x1329); emu_cs = 0x2502; f__2502_0008_0015_FFBD();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
	goto l__1329;
l__1329:
	emu_addw(&emu_sp, 0x8);
	emu_get_memory16(emu_ds, 0x00, 0x3A38) = 0x5;
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x133A); emu_cs = 0x2598; f__2598_0000_0017_EB80();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
	goto l__133A;
l__133A:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ax;
	emu_push(emu_cs); emu_push(0x1343); emu_cs = 0x2B6C; f__2B6C_0169_001E_6939();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
	goto l__1343;
l__1343:
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_bx = emu_si;
	emu_cl = 0x2;
	emu_shlw(&emu_bx, emu_cl);
	emu_push(emu_get_memory16(emu_ds, emu_bx, 0x2BC0));
	emu_push(emu_get_memory16(emu_ds, emu_bx, 0x2BBE));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x38DC));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x38DA));
	emu_push(emu_cs);
	emu_push(0x1366); f__B511_0E44_000C_24F5();
	goto l__1366;
l__1366:
	emu_addw(&emu_sp, 0xE);
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C34));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C32));
	emu_ax = 0x3;
	emu_push(emu_ax);
	emu_ax = 0x3;
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x2C0A;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1387); emu_cs = 0x0642; f__0642_075D_0011_C164();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
	goto l__1387;
l__1387:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1390); emu_cs = 0x34CA; overlay(0x34CA, 0); f__B4CA_020F_0017_A939();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
	goto l__1390;
l__1390:
	emu_addw(&emu_sp, 0xE);
	emu_push(emu_cs); emu_push(0x1398); emu_cs = 0x2B6C; f__2B6C_0137_0020_C73F();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
	goto l__1398;
l__1398:
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_ax = 0x18;
	emu_push(emu_ax);
	emu_ax = 0x1A;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x13B8); emu_cs = 0x24D0; f__24D0_000D_0039_C17D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
	goto l__13B8;
l__13B8:
	emu_addw(&emu_sp, 0x10);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_ax = 0x18;
	emu_push(emu_ax);
	emu_ax = 0xD;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = 0x1A;
	emu_push(emu_ax);
	emu_ax = emu_si;
	emu_dx = 0x18;
	emu_imuluw(&emu_ax, emu_dx);
	emu_addw(&emu_ax, 0x18);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x13E4); emu_cs = 0x24D0; f__24D0_000D_0039_C17D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
	goto l__13E4;
l__13E4:
	emu_addw(&emu_sp, 0x10);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_push(emu_cs); emu_push(0x13F2); emu_cs = 0x348B; overlay(0x348B, 0); f__B48B_03A4_0005_619A();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
	goto l__13F2;
l__13F2:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_cs); emu_push(0x13F9); emu_cs = 0x2B6C; f__2B6C_0169_001E_6939();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
	goto l__13F9;
l__13F9:
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_bx = emu_si;
	emu_cl = 0x2;
	emu_shlw(&emu_bx, emu_cl);
	emu_push(emu_get_memory16(emu_ds, emu_bx, 0x2BC0));
	emu_push(emu_get_memory16(emu_ds, emu_bx, 0x2BBE));
	emu_push(emu_cs); emu_push(0x1422); emu_cs = 0x34DA; overlay(0x34DA, 0); f__B4DA_0AB8_002A_AAB2();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
	goto l__1422;
l__1422:
	emu_addw(&emu_sp, 0x12);
	emu_get_memory16(emu_ss, emu_bp, -0xC) = emu_ax;
	emu_testw(&emu_get_memory16(emu_ss, emu_bp, -0xC), 0x8000);
	if ((emu_get_memory16(emu_ss, emu_bp, -0xC) & 0x8000) == 0) goto l__13F9;
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0xC), 0x8001);
	if (emu_get_memory16(emu_ss, emu_bp, -0xC) != 0x8001) goto l__143D;
	emu_push(emu_cs); emu_push(0x143B); emu_cs = 0x1DD7; f__1DD7_0B53_0025_36F7();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
	goto l__143B;
l__143B:
	goto l__144F;
l__143D:
	emu_ax = 0xF;
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x314);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x144C); emu_cs = 0x259E; f__259E_0006_0016_858A();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
	goto l__144C;
l__144C:
	emu_addw(&emu_sp, 0x6);
	goto l__144F;
l__144F:
	goto l__147A;
l__1451:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x2);
	emu_dx = emu_get_memory16(emu_es, emu_bx, 0x0);
	emu_get_memory16(emu_ss, emu_bp, -0x12) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x14) = emu_dx;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_push(emu_cs); emu_push(0x146C); emu_cs = 0x23E1; f__23E1_01C2_0011_24E8();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
	goto l__146C;
l__146C:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x12);
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x14);
	emu_get_memory16(emu_ss, emu_bp, -0xE) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x10) = emu_dx;
	goto l__147A;
l__147A:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x10);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0xE));
	if (emu_ax != 0) goto l__1451;
	emu_push(emu_cs); emu_push(0x1487); emu_cs = 0x34DA; overlay(0x34DA, 0); f__B4DA_02E0_0023_E297();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
	goto l__1487;
l__1487:
	emu_push(emu_cs); emu_push(0x148C); emu_cs = 0x34B8; overlay(0x34B8, 0); f__B4B8_0D23_0010_BA99();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
	goto l__148C;
l__148C:
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_cs); emu_push(0x1494); emu_cs = 0x2598; f__2598_0000_0017_EB80();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
	goto l__1494;
l__1494:
	emu_pop(&emu_cx);
	goto l__1497;
l__1497:
	emu_push(emu_cs); emu_push(0x149C); emu_cs = 0x1DD7; f__1DD7_01EB_0013_9C3C();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
	goto l__149C;
l__149C:
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax != 0) goto l__1497;
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0xC), 0x8001);
	if (emu_get_memory16(emu_ss, emu_bp, -0xC) != 0x8001) goto l__14A9;
	goto l__14AC;
l__14A9:
	goto l__100A;
l__14AC:
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x14B4); emu_cs = 0x3483; overlay(0x3483, 0); f__B483_0283_0014_983A();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
	goto l__14B4;
l__14B4:
	emu_pop(&emu_cx);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x14BB); emu_cs = 0x34B8; overlay(0x34B8, 0); f__B4B8_110D_000D_FD5C();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
	goto l__14BB;
l__14BB:
	emu_pop(&emu_cx);
	emu_ax = 0x2DCE;
	emu_push(emu_ax);
	emu_ax = 0x440;
	emu_push(emu_ax);
	emu_ax = 0x7;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x14D0); emu_cs = 0x34B8; overlay(0x34B8, 0); f__B4B8_0A1E_001A_E094();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
	goto l__14D0;
l__14D0:
	emu_addw(&emu_sp, 0x8);
	emu_push(emu_cs); emu_push(0x14D8); emu_cs = 0x29E8; emu_Input_History_Clear();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
	goto l__14D8;
l__14D8:
	emu_push(emu_cs); emu_push(0x14DD); emu_cs = 0x2B6C; f__2B6C_0169_001E_6939();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
	goto l__14DD;
l__14DD:
	emu_ax = 0xF;
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x314);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x14EC); emu_cs = 0x259E; f__259E_0006_0016_858A();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
	goto l__14EC;
l__14EC:
	emu_addw(&emu_sp, 0x6);
	emu_ax = emu_si;
	goto l__14F3;
l__14F3:
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

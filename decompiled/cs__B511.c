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
l__000E:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x37A0), 0x0);
	if (emu_get_memory16(emu_ds, 0x00, 0x37A0) == 0x0) {
		emu_push(emu_cs);
		emu_push(0x001C); f__B511_0C06_002A_8725();
	}
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
 * @implements B511:0079:0008:84DA
 * @implements B511:0081:0008:C68B
 * @implements B511:008A:0007:924A
 *
 * Called From: 3511:0025:0005:0000
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
	emu_push(emu_cs); emu_push(0x002E); emu_cs = 0x3483; overlay(0x3483, 0); emu_Unknown_B483_0363();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
l__002E:
	emu_pop(&emu_cx);
	emu_push(emu_cs);
	emu_push(0x0034); f__B511_0A8F_000E_EE64();
l__0034:
	emu_incw(&emu_get_memory16(emu_ds, 0x00, 0x38BC));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x0041); emu_cs = 0x34B5; overlay(0x34B5, 0); emu_Scenario_Load();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
l__0041:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax == 0) goto l__006B;
	emu_push(emu_cs);
	emu_push(0x004C); f__B511_0091_001D_9C25();
l__004C:
	emu_cmpw(&emu_si, 0x5);
	if (emu_si < 0x5) {
		emu_get_memory16(emu_ds, 0x00, 0x37F2) = 0x0;
		emu_get_memory16(emu_ds, 0x00, 0x37F0) = 0x0;
		emu_get_memory16(emu_ds, 0x00, 0x37F6) = 0x0;
		emu_get_memory16(emu_ds, 0x00, 0x37F4) = 0x0;
	}
l__0069:
	goto l__008A;
l__006B:
	emu_ax = 0xFFFF;
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x2BCA;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0079); emu_cs = 0x10E4; emu_GUI_DisplayModalMessage();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
l__0079:
	emu_addw(&emu_sp, 0x6);
	emu_push(emu_cs); emu_push(0x0081); emu_cs = 0x3500; overlay(0x3500, 0); f__B500_0000_0008_FE1F();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
l__0081:
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0089); emu_cs = 0x01F7; emu_Terminate_Normal();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
	/* Unresolved jump */ emu_ip = 0x0089; emu_last_cs = 0xB511; emu_last_ip = 0x0089; emu_last_length = 0x0008; emu_last_crc = 0xC68B; emu_call();
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
 * @implements B511:028B:0026:BBFB
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
	emu_push(emu_cs); emu_push(0x00AE); emu_cs = 0x1082; emu_Structure_Recount();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
l__00AE:
	emu_push(emu_cs); emu_push(0x00B3); emu_cs = 0x0FE4; emu_Unit_Recount();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
l__00B3:
	emu_push(emu_cs); emu_push(0x00B8); emu_cs = 0x104B; emu_Team_Recount();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
l__00B8:
	emu_xorw(&emu_di, emu_di);
	goto l__013F;
l__00BD:
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x00C3); emu_cs = 0x34CD; overlay(0x34CD, 0); emu_Unit_Get_ByPackedTile();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
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
l__00DD:
	emu_ax = emu_di;
	emu_cl = 0x2;
	emu_shlw(&emu_ax, emu_cl);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x39EA));
	emu_addw(&emu_bx, emu_ax);
	emu_andb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0xEF);
l__00EE:
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x00F4); emu_cs = 0x34CD; overlay(0x34CD, 0); emu_Structure_Get_ByPackedTile();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
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
l__010E:
	emu_ax = emu_di;
	emu_cl = 0x2;
	emu_shlw(&emu_ax, emu_cl);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x39EA));
	emu_addw(&emu_bx, emu_ax);
	emu_andb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0xDF);
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
	emu_push(emu_cs); emu_push(0x013C); emu_cs = 0x34CD; overlay(0x34CD, 0); emu_Map_UnveilTile();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
l__013C:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
l__013E:
	emu_incw(&emu_di);
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
l__015B:
	emu_addw(&emu_sp, 0x8);
	goto l__0197;
l__0160:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0x4), 0x4);
	if ((emu_get_memory16(emu_es, emu_bx, 0x4) & 0x4) != 0) goto l__018A;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x0176); emu_cs = 0x1A34; emu_Unit_RemoveFog();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
l__0176:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0187); emu_cs = 0x34CD; overlay(0x34CD, 0); emu_Unit_B4CD_01BF();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
l__0187:
	emu_addw(&emu_sp, 0x6);
l__018A:
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x0195); emu_cs = 0x0FE4; emu_Unit_FindNext();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
l__0195:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
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
	emu_push(emu_cs); emu_push(0x01B8); emu_cs = 0x1082; emu_Structure_FindFirst();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
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
	emu_push(emu_cs); emu_push(0x01D7); emu_cs = 0x0C3A; emu_Structure_RemoveFog();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
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
	emu_push(emu_cs); emu_push(0x022E); emu_cs = 0x0C3A; emu_Structure_SetAnimation();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
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
	emu_push(emu_cs); emu_push(0x0270); emu_cs = 0x15C2; emu_Script_Load();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
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
l__028B:
	emu_pop(&emu_cx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_cx = emu_get_memory16(emu_es, emu_bx, 0xC);
	emu_bx = emu_get_memory16(emu_es, emu_bx, 0xA);
	emu_si = emu_ax;
	emu_es = emu_dx;
	emu_get_memory16(emu_es, emu_si, 0x20) = emu_cx;
	emu_get_memory16(emu_es, emu_si, 0x1E) = emu_bx;
l__02A3:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x8);
	emu_ax = (int8)emu_al;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x02B1); emu_cs = 0x10BE; emu_House_Get_ByIndex();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
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
l__02CE:
	emu_pop(&emu_cx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_cx = emu_get_memory16(emu_es, emu_bx, 0xC);
	emu_bx = emu_get_memory16(emu_es, emu_bx, 0xA);
	emu_si = emu_ax;
	emu_es = emu_dx;
	emu_get_memory16(emu_es, emu_si, 0x20) = emu_cx;
	emu_get_memory16(emu_es, emu_si, 0x1E) = emu_bx;
l__02E6:
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x02F1); emu_cs = 0x1082; emu_Structure_FindNext();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
l__02F1:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
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
l__030F:
	goto l__034B;
l__0311:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_push(emu_cs); emu_push(0x031C); emu_cs = 0x0C3A; emu_Structure_GetStructuresBuilt();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
l__031C:
	emu_pop(&emu_cx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_get_memory16(emu_es, emu_bx, 0x10) = emu_dx;
	emu_get_memory16(emu_es, emu_bx, 0xE) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_push(emu_cs); emu_push(0x0333); emu_cs = 0x1423; emu_House_UpdateCreditsStorage();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
l__0333:
	emu_pop(&emu_cx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_push(emu_cs); emu_push(0x033F); emu_cs = 0x0C3A; emu_Structure_CalculatePowerAndCredit();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
l__033F:
	emu_pop(&emu_cx);
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x034B); emu_cs = 0x10BE; emu_House_FindNext();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
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
	emu_push(emu_cs); emu_push(0x0379); emu_cs = 0x34B8; overlay(0x34B8, 0); emu_Sprites_Load();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
l__0379:
	emu_addw(&emu_sp, 0x8);
	emu_get_memory16(emu_ds, 0x00, 0x8CFD) = 0x290;
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3A02));
	emu_push(emu_cs); emu_push(0x038B); emu_cs = 0x0F78; emu_Map_SetSelection();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
l__038B:
	emu_pop(&emu_cx);
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x38E8), 0xFFFF);
	if (emu_get_memory16(emu_ds, 0x00, 0x38E8) == 0xFFFF) goto l__03A6;
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x38E8));
	emu_push(emu_cs); emu_push(0x039C); emu_cs = 0x1082; emu_Structure_Get_ByIndex();
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
	emu_push(emu_cs); emu_push(0x03D2); emu_cs = 0x0F78; emu_Map_SetSelectionSize();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
	/* Unresolved jump */ emu_ip = 0x03D2; emu_last_cs = 0xB511; emu_last_ip = 0x03D2; emu_last_length = 0x002C; emu_last_crc = 0x6CEA; emu_call();
l__03D5:
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3A02));
	emu_push(emu_cs); emu_push(0x03DE); emu_cs = 0x34CD; overlay(0x34CD, 0); emu_Structure_Get_ByPackedTile();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
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
	emu_push(emu_cs); emu_push(0x040B); emu_cs = 0x0F78; emu_Map_SetSelectionSize();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
l__040B:
	emu_pop(&emu_cx);
l__040C:
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3A38));
	emu_push(emu_cs); emu_push(0x0415); emu_cs = 0x3483; overlay(0x3483, 0); f__B483_04CB_0015_EBB4();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
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
l__0A9D:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x0AAA); emu_cs = 0x1082; emu_Structure_Init();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
l__0AAA:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x0AB7); emu_cs = 0x104B; emu_Team_Init();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
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
l__0B9D:
	emu_addw(&emu_sp, 0x8);
	emu_ax = 0xFFFE;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0BA9); emu_cs = 0x3483; overlay(0x3483, 0); emu_Unknown_B483_0363();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
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
	emu_push(emu_cs); emu_push(0x0C01); emu_cs = 0x10E4; emu_GUI_DisplayText();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
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
 * @implements B511:0E3F:0005:8BCF
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
	goto l__0E3F;
l__0CA7:
	emu_ax = 0x2DCE;
	emu_push(emu_ax);
	emu_ax = 0x440;
	emu_push(emu_ax);
	emu_ax = 0x7;
	emu_push(emu_ax);
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0CBC); emu_cs = 0x34B8; overlay(0x34B8, 0); emu_Sprites_Load();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
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
	emu_push(emu_cs); emu_push(0x0CDA); emu_cs = 0x0FCB; emu_String_Get_ByIndex();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
l__0CDA:
	emu_pop(&emu_cx);
	emu_bx = emu_ax;
	emu_es = emu_dx;
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x0);
	emu_ax = (int8)emu_al;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0CE9); emu_cs = 0x29DA; emu_GUI_Widget_GetShortcut();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
l__0CE9:
	emu_pop(&emu_cx);
	emu_push(emu_ax);
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0CF4); emu_cs = 0x34B8; overlay(0x34B8, 0); emu_GUI_Widget_Allocate();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
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
	emu_push(emu_cs); emu_push(0x0D18); emu_cs = 0x0FCB; emu_String_Get_ByIndex();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
l__0D18:
	emu_pop(&emu_cx);
	emu_bx = emu_ax;
	emu_es = emu_dx;
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x0);
	emu_ax = (int8)emu_al;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0D27); emu_cs = 0x29DA; emu_GUI_Widget_GetShortcut();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
l__0D27:
	emu_pop(&emu_cx);
	emu_push(emu_ax);
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0D32); emu_cs = 0x34B8; overlay(0x34B8, 0); emu_GUI_Widget_Allocate();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
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
l__0D4C:
	emu_addw(&emu_sp, 0x8);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_ax = 0xFFFE;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0D5E); emu_cs = 0x3483; overlay(0x3483, 0); emu_Unknown_B483_0363();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
l__0D5E:
	emu_pop(&emu_cx);
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x0D6A); emu_cs = 0x1DD7; f__1DD7_022D_0015_1956();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
l__0D6A:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x0D72); emu_cs = 0x3483; overlay(0x3483, 0); emu_Music_Play();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
l__0D72:
	emu_pop(&emu_cx);
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
	emu_push(emu_cs); emu_push(0x0D95); emu_cs = 0x01F7; emu_String_sprintf();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
l__0D95:
	emu_addw(&emu_sp, 0xA);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x38DE));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x38DC));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x38DA));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_ds);
	emu_ax = 0x9939;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0DB1); emu_cs = 0x0642; emu_String_GenerateFilename();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
l__0DB1:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0DBA); emu_cs = 0x0FCB; emu_String_LoadFile();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
l__0DBA:
	emu_addw(&emu_sp, 0xC);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x38DC));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x38DA));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x38DC));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x38DA));
	emu_push(emu_cs); emu_push(0x0DD2); emu_cs = 0x2502; emu_String_TranslateSpecial();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
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
	emu_push(emu_cs); emu_push(0x0E0F); emu_cs = 0x23E1; emu_Tools_Free();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
l__0E0F:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x0E1C); emu_cs = 0x23E1; emu_Tools_Free();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
l__0E1C:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_cmpw(&emu_si, 0xFFFF);
	if (emu_si != 0xFFFF) {
		emu_push(emu_cs); emu_push(0x0E28); emu_cs = 0x1DD7; f__1DD7_0B53_0025_36F7();
		/* Check if this overlay should be reloaded */
		if (emu_cs == 0x3511) { overlay(0x3511, 1); }
	}
l__0E28:
	emu_ax = 0x2DCE;
	emu_push(emu_ax);
	emu_ax = 0x440;
	emu_push(emu_ax);
	emu_ax = 0x7;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0E3C); emu_cs = 0x34B8; overlay(0x34B8, 0); emu_Sprites_Load();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
l__0E3C:
	emu_addw(&emu_sp, 0x8);
l__0E3F:
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
	emu_push(emu_cs); emu_push(0x0E50); emu_cs = 0x34B8; overlay(0x34B8, 0); emu_Sprites_UnloadTiles();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
l__0E50:
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3A38));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_cs); emu_push(0x0E5F); emu_cs = 0x34DA; overlay(0x34DA, 0); f__B4DA_0000_002C_B3C2();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
l__0E5F:
	emu_addw(&emu_sp, 0x6);
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0E6B); emu_cs = 0x2598; f__2598_0000_0017_EB80();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
l__0E6B:
	emu_pop(&emu_cx);
	emu_ax = 0x8;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0E75); emu_cs = 0x07AE; emu_Unknown_07AE_00E4();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
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
	emu_push(emu_cs); emu_push(0x0E98); emu_cs = 0x252E; emu_Memory_GetBlock1();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
l__0E98:
	emu_pop(&emu_cx);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_cs); emu_push(0x0EA6); emu_cs = 0x352A; overlay(0x352A, 0); emu_WSA_LoadFile();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
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
	emu_push(emu_cs); emu_push(0x0ED0); emu_cs = 0x352A; overlay(0x352A, 0); emu_WSA_DisplayFrame();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
l__0ED0:
	emu_addw(&emu_sp, 0xE);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x0EDE); emu_cs = 0x352A; overlay(0x352A, 0); emu_WSA_Unload();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
l__0EDE:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0EE9); emu_cs = 0x34DA; overlay(0x34DA, 0); f__B4DA_0A8E_0025_4AC8();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
l__0EE9:
	emu_pop(&emu_cx);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0EF2); emu_cs = 0x2598; f__2598_0000_0017_EB80();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
l__0EF2:
	emu_pop(&emu_cx);
	emu_push(emu_cs); emu_push(0x0EF8); emu_cs = 0x2B6C; f__2B6C_0137_0020_C73F();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
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
l__0F18:
	emu_addw(&emu_sp, 0x10);
	emu_push(emu_cs); emu_push(0x0F20); emu_cs = 0x2B6C; f__2B6C_0169_001E_6939();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
l__0F20:
	emu_ax = 0xF;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C34));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C32));
	emu_push(emu_cs); emu_push(0x0F31); emu_cs = 0x259E; f__259E_0006_0016_858A();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
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
l__0F55:
	emu_addw(&emu_sp, 0x12);
	emu_si = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0xE);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x10));
	if (emu_ax == 0) goto l__0F92;
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x10));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_push(emu_cs); emu_push(0x0F6D); emu_cs = 0x348B; overlay(0x348B, 0); emu_GUI_Widget_DrawAll();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
l__0F6D:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
l__0F6F:
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x10));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_push(emu_cs); emu_push(0x0F7A); emu_cs = 0x34A2; overlay(0x34A2, 0); emu_GUI_Widget_HandleEvents();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
l__0F7A:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_si = emu_ax;
	emu_push(emu_cs); emu_push(0x0F83); emu_cs = 0x0642; emu_GUI_PaletteAnimate();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
l__0F83:
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0F8B); emu_cs = 0x34DA; overlay(0x34DA, 0); f__B4DA_0308_0018_F99F();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
l__0F8B:
	emu_pop(&emu_cx);
	emu_testw(&emu_si, 0x8000);
	if ((emu_si & 0x8000) == 0) goto l__0F6F;
l__0F92:
	emu_push(emu_cs); emu_push(0x0F97); emu_cs = 0x29E8; emu_Input_History_Clear();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
l__0F97:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp,  0x12), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp,  0x12) == 0x0) goto l__0FA7;
	emu_push(emu_cs); emu_push(0x0FA2); emu_cs = 0x34DA; overlay(0x34DA, 0); f__B4DA_02E0_0023_E297();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
l__0FA2:
	emu_push(emu_cs); emu_push(0x0FA7); emu_cs = 0x34B8; overlay(0x34B8, 0); emu_Sprites_LoadTiles();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
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

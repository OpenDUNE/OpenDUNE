/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function emu_GUI_Options()
 *
 * @name emu_GUI_Options
 * @implements B4F2:009C:002E:D76F ()
 * @implements B4F2:00CA:0008:EC74
 * @implements B4F2:00D2:0019:2DA2
 * @implements B4F2:00EB:0014:7995
 * @implements B4F2:00FF:000A:BA05
 * @implements B4F2:0109:001C:9EE7
 * @implements B4F2:0125:000F:54A6
 * @implements B4F2:0134:0013:7748
 * @implements B4F2:016E:0005:3FA8
 * @implements B4F2:0173:000A:3489
 * @implements B4F2:017D:000C:D4B9
 * @implements B4F2:0189:0008:3C1D
 * @implements B4F2:0191:000D:7056
 * @implements B4F2:019E:000D:3A4F
 * @implements B4F2:01AB:000E:6100
 * @implements B4F2:01B9:0013:C71B
 * @implements B4F2:01CC:0013:9E8D
 * @implements B4F2:01DF:0007:29A0
 * @implements B4F2:01E6:0008:CA33
 * @implements B4F2:01EE:000A:E23B
 * @implements B4F2:01F5:0003:DD01
 * @implements B4F2:01F8:0009:39F0
 * @implements B4F2:0201:0009:8EC4
 * @implements B4F2:0208:0002:FABA
 * @implements B4F2:020A:000B:636B
 * @implements B4F2:0215:0004:681F
 * @implements B4F2:0219:0009:48EA
 * @implements B4F2:0222:000F:7024
 * @implements B4F2:022F:0002:E73A
 * @implements B4F2:0231:0009:49EC
 * @implements B4F2:023A:000C:7BCE
 * @implements B4F2:0246:0008:C674
 * @implements B4F2:024C:0002:D8BA
 * @implements B4F2:024E:0004:F879
 * @implements B4F2:0252:0009:9BF4
 * @implements B4F2:025B:0014:44C6
 * @implements B4F2:026F:0003:CB1A
 * @implements B4F2:0272:0005:7A4B
 * @implements B4F2:0277:0006:A5DD
 * @implements B4F2:027D:0002:C03A
 * @implements B4F2:027F:0015:800B
 * @implements B4F2:0294:000C:9527
 * @implements B4F2:02A0:0007:73D6
 * @implements B4F2:02A2:0005:1765
 * @implements B4F2:02A7:0007:49AD
 * @implements B4F2:02AE:001E:2B44
 * @implements B4F2:0309:0005:8EFD
 * @implements B4F2:030E:0008:EA61
 * @implements B4F2:0316:0006:58B0
 * @implements B4F2:031C:000E:514C
 * @implements B4F2:032A:000C:961D
 * @implements B4F2:0336:0005:014D
 * @implements B4F2:033B:0005:7CF0
 * @implements B4F2:0340:0005:D341
 * @implements B4F2:0345:0027:E6B6
 * @implements B4F2:036C:0007:F97C
 * @implements B4F2:0373:0006:F7CE
 *
 * Called From: 34F2:0025:0005:0000
 */
void emu_GUI_Options()
{
l__009C:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x2);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x3A34);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ax;
	emu_get_memory16(emu_ds, 0x00, 0x3A34) = 0x0;
	emu_ax = 0x2DCE;
	emu_es = emu_ax;
	emu_push(emu_get_memory16(emu_es, 0x00, 0x442));
	emu_push(emu_get_memory16(emu_es, 0x00, 0x440));
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x00CA); emu_cs = 0x2B4C; f__2B4C_0002_0029_64AF();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { overlay(0x34F2, 1); }
l__00CA:
	emu_addw(&emu_sp, 0x8);
	emu_push(emu_cs); emu_push(0x00D2); emu_cs = 0x34B8; overlay(0x34B8, 0); emu_Sprites_UnloadTiles();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { overlay(0x34F2, 1); }
l__00D2:
	emu_xorw(&emu_ax, emu_ax);
	emu_dx = 0x300;
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x998C));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x998A));
	emu_push(emu_ds);
	emu_ax = 0x70A2;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x00EB); emu_cs = 0x2B0E; emu_Tools_Memmove();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { overlay(0x34F2, 1); }
l__00EB:
	emu_addw(&emu_sp, 0xC);
	emu_get_memory16(emu_ds, 0x00, 0x80B0) = 0x0;
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x00FF); emu_cs = 0x1DD7; f__1DD7_022D_0015_1956();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { overlay(0x34F2, 1); }
l__00FF:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0109); emu_cs = 0x34E9; overlay(0x34E9, 0); emu_Unknown_B4E9_0000();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { overlay(0x34F2, 1); }
l__0109:
	emu_pop(&emu_cx);
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
	emu_push(emu_cs); emu_push(0x0125); emu_cs = 0x10E4; emu_GUI_DrawText_Wrapper();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { overlay(0x34F2, 1); }
l__0125:
	emu_addw(&emu_sp, 0xE);
	emu_xorw(&emu_ax, emu_ax);
	emu_dx = 0x7530;
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs);
	emu_push(0x0134); f__B4F2_11CF_0013_5635();
l__0134:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ds, 0x00, 0x2A91) = emu_ax;
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x38D6);
	emu_orw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x38D8));
	if (emu_ax == 0) goto l__016E;
	emu_push(emu_cs); emu_push(0x0147); emu_cs = 0x2B6C; f__2B6C_0137_0020_C73F();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { overlay(0x34F2, 1); }
	/* Unresolved jump */ emu_ip = 0x0147; emu_last_cs = 0xB4F2; emu_last_ip = 0x0147; emu_last_length = 0x0013; emu_last_crc = 0x7748; emu_call();
l__016E:
	emu_push(emu_cs);
	emu_push(0x0173); f__B4F2_0E16_0019_86E9();
l__0173:
	emu_push(emu_ds);
	emu_ax = 0x264C;
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x017D); f__B4F2_0EE0_000E_BC8E();
l__017D:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_ds);
	emu_ax = 0x264C;
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x0189); emu_GUI_Option_CreateWindow();
l__0189:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_si = 0x1;
	goto l__02A7;
l__0191:
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x2A95));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x2A93));
	emu_push(emu_cs); emu_push(0x019E); emu_cs = 0x34A2; overlay(0x34A2, 0); emu_GUI_Widget_HandleEvents();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { overlay(0x34F2, 1); }
l__019E:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_di = emu_ax;
	emu_testw(&emu_di, 0x8000);
	if ((emu_di & 0x8000) != 0) goto l__01AB;
	goto l__02A2;
l__01AB:
	emu_push(emu_di);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x2A95));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x2A93));
	emu_push(emu_cs); emu_push(0x01B9); emu_cs = 0x348B; overlay(0x348B, 0); emu_GUI_Widget_Get_ByIndex();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { overlay(0x34F2, 1); }
l__01B9:
	emu_addw(&emu_sp, 0x6);
	emu_get_memory16(emu_ss, emu_bp,  0x8) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp,  0x6) = emu_ax;
	emu_push(emu_ds);
	emu_ax = 0x264C;
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x01CC); f__B4F2_0F24_000E_BC8E();
l__01CC:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_bx = emu_di;
	emu_andw(&emu_bx, 0x7FFF);
	emu_subw(&emu_bx, 0x1E);
	emu_cmpw(&emu_bx, 0x6);
	if (emu_bx <= 0x6) goto l__01DF;
	goto l__027D;
l__01DF:
	emu_shlw(&emu_bx, 0x1);

	/* Jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_cs, emu_bx, 0x379);
	switch (emu_ip) {
		case 0x01E6: goto l__01E6;
		case 0x01F8: goto l__01F8;
		case 0x020A: goto l__020A;
		case 0x0219: goto l__0219;
		case 0x0231: goto l__0231;
		case 0x024E: goto l__024E;
		case 0x0252: goto l__0252;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0xB4F2; emu_last_ip = 0x01E1; emu_last_length = 0x0007; emu_last_crc = 0x29A0;
			emu_call();
			return;
	}
l__01E6:
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x01EE); emu_GUI_SaveLoad_List();
l__01EE:
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax != 0) {
		emu_xorw(&emu_si, emu_si);
	}
l__01F5:
	goto l__027F;
l__01F8:
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x0201); emu_GUI_SaveLoad_List();
l__0201:
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax != 0) {
		emu_xorw(&emu_si, emu_si);
	}
l__0208:
	goto l__027F;
l__020A:
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x0215); emu_GUI_GameOptions();
l__0215:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	goto l__027F;
l__0219:
	emu_ax = 0x76;
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x0222); emu_GUI_YesNo();
l__0222:
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax != 0) {
		emu_xorw(&emu_si, emu_si);
		emu_get_memory16(emu_ds, 0x00, 0x38BE) = 0x1;
	}
l__022F:
	goto l__027F;
l__0231:
	emu_ax = 0x77;
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x023A); emu_GUI_YesNo();
l__023A:
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax == 0) goto l__024C;
	emu_xorw(&emu_si, emu_si);
	emu_push(emu_cs); emu_push(0x0246); emu_cs = 0x1DD7; f__1DD7_0B53_0025_36F7();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { overlay(0x34F2, 1); }
l__0246:
	emu_get_memory16(emu_ds, 0x00, 0x38BE) = 0x2;
l__024C:
	goto l__027F;
l__024E:
	emu_xorw(&emu_si, emu_si);
	goto l__027F;
l__0252:
	emu_ax = 0x65;
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x025B); emu_GUI_YesNo();
l__025B:
	emu_pop(&emu_cx);
	emu_negw(&emu_ax, emu_ax);
	emu_sbbw(&emu_ax, emu_ax);
	emu_incw(&emu_ax);
	emu_si = emu_ax;
	emu_get_memory16(emu_ds, 0x00, 0x38F8) = emu_ax;
	emu_ax = 0xFFFE;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x026F); emu_cs = 0x3483; overlay(0x3483, 0); emu_Unknown_B483_0363();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { overlay(0x34F2, 1); }
l__026F:
	emu_pop(&emu_cx);
	goto l__0272;
l__0272:
	emu_push(emu_cs); emu_push(0x0277); emu_cs = 0x1DD7; emu_Driver_Voice_01EB();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { overlay(0x34F2, 1); }
l__0277:
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax != 0) goto l__0272;
	goto l__027F;
l__027D:
	goto l__027F;
l__027F:
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x38F8), 0x0);
	if (emu_get_memory16(emu_ds, 0x00, 0x38F8) == 0x0) goto l__02A2;
	emu_orw(&emu_si, emu_si);
	if (emu_si == 0) goto l__02A2;
	emu_push(emu_ds);
	emu_ax = 0x264C;
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x0294); f__B4F2_0EE0_000E_BC8E();
l__0294:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_ds);
	emu_ax = 0x264C;
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x02A0); emu_GUI_Option_CreateWindow();
l__02A0:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
l__02A2:
	emu_push(emu_cs); emu_push(0x02A7); emu_cs = 0x0642; emu_GUI_PaletteAnimate();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { overlay(0x34F2, 1); }
l__02A7:
	emu_orw(&emu_si, emu_si);
	if (emu_si == 0) goto l__02AE;
	goto l__0191;
l__02AE:
	emu_get_memory16(emu_ds, 0x00, 0x38C4) = 0x1;
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x38D6);
	emu_orw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x38D8));
	if (emu_ax == 0) goto l__0309;
	emu_xorw(&emu_ax, emu_ax);
	emu_dx = 0xFA00;
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x02CC); emu_cs = 0x252E; emu_Memory_GetBlock1();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { overlay(0x34F2, 1); }
	/* Unresolved jump */ emu_ip = 0x02CC; emu_last_cs = 0xB4F2; emu_last_ip = 0x02CC; emu_last_length = 0x001E; emu_last_crc = 0x2B44; emu_call();
l__0309:
	emu_push(emu_cs); emu_push(0x030E); emu_cs = 0x34B8; overlay(0x34B8, 0); emu_Sprites_LoadTiles();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { overlay(0x34F2, 1); }
l__030E:
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0316); emu_cs = 0x10E4; f__10E4_2099_0012_A216();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { overlay(0x34F2, 1); }
l__0316:
	emu_pop(&emu_cx);
	emu_push(emu_cs);
	emu_push(0x031C); f__B4F2_0DE3_001F_AB1C();
l__031C:
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x032A); emu_cs = 0x348B; overlay(0x348B, 0); f__B48B_01CE_002B_7574();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { overlay(0x34F2, 1); }
l__032A:
	emu_addw(&emu_sp, 0x6);
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0336); emu_cs = 0x34E9; overlay(0x34E9, 0); emu_Unknown_B4E9_0000();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { overlay(0x34F2, 1); }
l__0336:
	emu_pop(&emu_cx);
	emu_push(emu_cs);
	emu_push(0x033B); emu_GameOptions_Save();
l__033B:
	emu_push(emu_cs); emu_push(0x0340); emu_cs = 0x1082; emu_Structure_Recount();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { overlay(0x34F2, 1); }
l__0340:
	emu_push(emu_cs); emu_push(0x0345); emu_cs = 0x0FE4; emu_Unit_Recount();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { overlay(0x34F2, 1); }
l__0345:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x2);
	emu_get_memory16(emu_ds, 0x00, 0x3A34) = emu_ax;
	emu_bx = emu_get_memory16(emu_ss, emu_bp, -0x2);
	emu_cl = 0x2;
	emu_shlw(&emu_bx, emu_cl);
	emu_ax = 0x2DCE;
	emu_es = emu_ax;
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x442));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x440));
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x036C); emu_cs = 0x2B4C; f__2B4C_0002_0029_64AF();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { overlay(0x34F2, 1); }
l__036C:
	emu_addw(&emu_sp, 0x8);
	emu_xorw(&emu_ax, emu_ax);
	goto l__0373;
l__0373:
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
 * Decompiled function emu_GUI_GameOptions()
 *
 * @name emu_GUI_GameOptions
 * @implements B4F2:0387:000F:A3C2 ()
 * @implements B4F2:0396:000C:ECA6
 * @implements B4F2:03A2:0008:38A1
 * @implements B4F2:03AA:000D:7056
 * @implements B4F2:03B7:000D:3943
 * @implements B4F2:03C4:0013:1C32
 * @implements B4F2:03D7:001E:062C
 * @implements B4F2:03F5:0011:E3EC
 * @implements B4F2:0406:000F:AF85
 * @implements B4F2:040C:0009:8999
 * @implements B4F2:0415:0003:E19A
 * @implements B4F2:0418:001A:FFEB
 * @implements B4F2:0432:000C:103B
 * @implements B4F2:0435:0009:9993
 * @implements B4F2:043E:0002:AABA
 * @implements B4F2:0440:0019:423E
 * @implements B4F2:0451:0008:6C8F
 * @implements B4F2:0459:0007:09D8
 * @implements B4F2:0460:0007:0C48
 * @implements B4F2:0467:0004:EED9
 * @implements B4F2:046B:0002:C03A
 * @implements B4F2:046D:000E:814C
 * @implements B4F2:047B:000E:A6E7
 * @implements B4F2:0489:0007:73D6
 * @implements B4F2:048B:0005:1765
 * @implements B4F2:0490:0007:6D11
 * @implements B4F2:0497:000A:CE31
 * @implements B4F2:04A1:0006:8EF0
 * @implements B4F2:04A7:0004:DE52
 *
 * Called From: B4F2:0212:000B:636B
 */
void emu_GUI_GameOptions()
{
l__0387:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_si);
	emu_push(emu_di);
	emu_push(emu_ds);
	emu_ax = 0x26B5;
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x0396); f__B4F2_0EE0_000E_BC8E();
l__0396:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_ds);
	emu_ax = 0x26B5;
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x03A2); emu_GUI_Option_CreateWindow();
l__03A2:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_di = 0x1;
	goto l__0490;
l__03AA:
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x2A95));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x2A93));
	emu_push(emu_cs); emu_push(0x03B7); emu_cs = 0x34A2; overlay(0x34A2, 0); emu_GUI_Widget_HandleEvents();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { overlay(0x34F2, 1); }
l__03B7:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_si = emu_ax;
	emu_testw(&emu_si, 0x8000);
	if ((emu_si & 0x8000) != 0) goto l__03C4;
	goto l__048B;
l__03C4:
	emu_ax = emu_si;
	emu_andw(&emu_ax, 0x7FFF);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x2A95));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x2A93));
	emu_push(emu_cs); emu_push(0x03D7); emu_cs = 0x348B; overlay(0x348B, 0); emu_GUI_Widget_Get_ByIndex();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { overlay(0x34F2, 1); }
l__03D7:
	emu_addw(&emu_sp, 0x6);
	emu_get_memory16(emu_ss, emu_bp,  0x8) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp,  0x6) = emu_ax;
	emu_bx = emu_si;
	emu_andw(&emu_bx, 0x7FFF);
	emu_subw(&emu_bx, 0x1E);
	emu_cmpw(&emu_bx, 0x5);
	if (emu_bx > 0x5) goto l__046B;
	emu_shlw(&emu_bx, 0x1);

	/* Jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_cs, emu_bx, 0x4AB);
	switch (emu_ip) {
		case 0x03F5: goto l__03F5;
		case 0x0418: goto l__0418;
		case 0x0440: goto l__0440;
		case 0x0459: goto l__0459;
		case 0x0460: goto l__0460;
		case 0x0467: goto l__0467;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0xB4F2; emu_last_ip = 0x03F0; emu_last_length = 0x001E; emu_last_crc = 0x062C;
			emu_call();
			return;
	}
l__03F5:
	emu_xorw(&emu_get_memory16(emu_ds, 0x00, 0x41C2), 0x1);
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x41C2), 0x0);
	if (emu_get_memory16(emu_ds, 0x00, 0x41C2) != 0x0) goto l__040C;
	emu_push(emu_cs); emu_push(0x0406); emu_cs = 0x1DD7; emu_Driver_Music_Stop();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { overlay(0x34F2, 1); }
l__0406:
	emu_get_memory16(emu_ds, 0x00, 0x80B0) = 0x1;
l__040C:
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x41C2));
	emu_push(emu_cs); emu_push(0x0415); emu_cs = 0x1DD7; emu_Drivers_EnableMusic();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { overlay(0x34F2, 1); }
l__0415:
	emu_pop(&emu_cx);
	goto l__046D;
l__0418:
	emu_xorw(&emu_get_memory16(emu_ds, 0x00, 0x41C4), 0x1);
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x41C4), 0x0);
	if (emu_get_memory16(emu_ds, 0x00, 0x41C4) != 0x0) goto l__0435;
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x0432); emu_cs = 0x348B; overlay(0x348B, 0); emu_GUI_Widget_Update();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { overlay(0x34F2, 1); }
l__0432:
	emu_addw(&emu_sp, 0x6);
l__0435:
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x41C4));
	emu_push(emu_cs); emu_push(0x043E); emu_cs = 0x1DD7; emu_Drivers_EnableSounds();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { overlay(0x34F2, 1); }
l__043E:
	goto l__0415;
l__0440:
	emu_incw(&emu_get_memory16(emu_ds, 0x00, 0x41C6));
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x41C6), 0x5);
	if ((int16)emu_get_memory16(emu_ds, 0x00, 0x41C6) >= (int16)0x5) {
		emu_get_memory16(emu_ds, 0x00, 0x41C6) = 0x0;
	}
l__0451:
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x41C6);
	emu_get_memory16(emu_ds, 0x00, 0x3900) = emu_ax;
	goto l__046D;
l__0459:
	emu_xorw(&emu_get_memory16(emu_ds, 0x00, 0x41C8), 0x1);
	goto l__046D;
l__0460:
	emu_xorw(&emu_get_memory16(emu_ds, 0x00, 0x41CA), 0x1);
	goto l__046D;
l__0467:
	emu_xorw(&emu_di, emu_di);
	goto l__046D;
l__046B:
	goto l__046D;
l__046D:
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x047B); emu_cs = 0x348B; overlay(0x348B, 0); emu_GUI_Widget_Update();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { overlay(0x34F2, 1); }
l__047B:
	emu_addw(&emu_sp, 0x6);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x0489); emu_cs = 0x34A2; overlay(0x34A2, 0); emu_GUI_Widget_Draw();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { overlay(0x34F2, 1); }
l__0489:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
l__048B:
	emu_push(emu_cs); emu_push(0x0490); emu_cs = 0x0642; emu_GUI_PaletteAnimate();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { overlay(0x34F2, 1); }
l__0490:
	emu_orw(&emu_di, emu_di);
	if (emu_di == 0) goto l__0497;
	goto l__03AA;
l__0497:
	emu_push(emu_ds);
	emu_ax = 0x26B5;
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x04A1); f__B4F2_0F24_000E_BC8E();
l__04A1:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_xorw(&emu_ax, emu_ax);
	goto l__04A7;
l__04A7:
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function emu_GUI_SaveLoad_List()
 *
 * @name emu_GUI_SaveLoad_List
 * @implements B4F2:04B7:0015:5960 ()
 * @implements B4F2:04CC:000C:D9B0
 * @implements B4F2:04D8:0019:0F72
 * @implements B4F2:04DA:0017:4F6B
 * @implements B4F2:04F1:000B:A00B
 * @implements B4F2:04F3:0009:F00D
 * @implements B4F2:04FC:000A:90D1
 * @implements B4F2:0506:0010:8F88
 * @implements B4F2:0509:000D:4D30
 * @implements B4F2:0516:000C:DD04
 * @implements B4F2:0522:000C:2EB3
 * @implements B4F2:052E:000A:F45D
 * @implements B4F2:0538:0009:A53C
 * @implements B4F2:0541:000F:C332
 * @implements B4F2:0550:000D:3AF9
 * @implements B4F2:055D:0012:AC5F
 * @implements B4F2:056F:001C:386D
 * @implements B4F2:058B:000D:A163
 * @implements B4F2:0598:0014:05F3
 * @implements B4F2:059A:0012:2DF0
 * @implements B4F2:05AC:0009:B396
 * @implements B4F2:05B5:0013:3A48
 * @implements B4F2:05B7:0011:3C18
 * @implements B4F2:05BF:0009:F092
 * @implements B4F2:05C8:000E:A13E
 * @implements B4F2:05D6:0005:8FC5
 * @implements B4F2:05DB:0010:06C7
 * @implements B4F2:05ED:0002:A83A
 * @implements B4F2:05EF:000D:5EC9
 * @implements B4F2:05FC:000A:BD94
 * @implements B4F2:0606:0015:09D0
 * @implements B4F2:061B:000D:8771
 * @implements B4F2:0628:000F:6786
 * @implements B4F2:0632:0005:8366
 * @implements B4F2:0635:0002:F8BA
 * @implements B4F2:0637:0002:C8BA
 * @implements B4F2:0639:000A:7C45
 * @implements B4F2:0643:0007:C4C9
 * @implements B4F2:064A:000A:3D30
 * @implements B4F2:0654:000C:A986
 * @implements B4F2:0660:000C:5C32
 * @implements B4F2:066C:000C:A98C
 * @implements B4F2:0678:0003:A2B6
 * @implements B4F2:067B:000E:7936
 * @implements B4F2:0689:0008:8DED
 * @implements B4F2:068C:0005:1765
 * @implements B4F2:0691:0009:2E1A
 * @implements B4F2:069A:000A:3D33
 * @implements B4F2:06A4:0004:1E1F
 * @implements B4F2:06A8:0006:F7CE
 *
 * Called From: 34F2:002A:0005:0000
 * Called From: B4F2:01EB:0008:CA33
 * Called From: B4F2:01FE:0009:39F0
 */
void emu_GUI_SaveLoad_List()
{
l__04B7:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x16);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_si = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_get_memory16(emu_ss, emu_bp, -0x4) = 0x0;
	emu_push(emu_cs);
	emu_push(0x04CC); emu_Load_SavegameCount();
l__04CC:
	emu_get_memory16(emu_ds, 0x00, 0x80B2) = emu_ax;
	emu_orw(&emu_si, emu_si);
	if (emu_si == 0) goto l__04D8;
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x2A91);
	goto l__04DA;
l__04D8:
	emu_xorw(&emu_ax, emu_ax);
l__04DA:
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x80B2);
	emu_addw(&emu_dx, emu_ax);
	emu_decw(&emu_dx);
	emu_get_memory16(emu_ds, 0x00, 0x2A97) = emu_dx;
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x2A97), 0x0);
	if ((int16)emu_get_memory16(emu_ds, 0x00, 0x2A97) <= (int16)0x0) goto l__04F1;
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x2A97);
	goto l__04F3;
l__04F1:
	emu_xorw(&emu_ax, emu_ax);
l__04F3:
	emu_get_memory16(emu_ds, 0x00, 0x2A97) = emu_ax;
	emu_push(emu_si);
	emu_push(emu_cs);
	emu_push(0x04FC); f__B4F2_1221_000D_EE32();
l__04FC:
	emu_pop(&emu_cx);
	emu_orw(&emu_si, emu_si);
	if (emu_si == 0) goto l__0506;
	emu_ax = 0x62;
	goto l__0509;
l__0506:
	emu_ax = 0x61;
l__0509:
	emu_get_memory16(emu_ds, 0x00, 0x2789) = emu_ax;
	emu_push(emu_ds);
	emu_ax = 0x2787;
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x0516); f__B4F2_0EE0_000E_BC8E();
l__0516:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_ds);
	emu_ax = 0x2787;
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x0522); emu_GUI_Option_CreateWindow();
l__0522:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_push(emu_si);
	emu_push(emu_cs);
	emu_push(0x052E); f__B4F2_0D52_0029_1FC2();
l__052E:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = 0x1;
	goto l__0691;
l__0538:
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_si);
	emu_push(emu_cs);
	emu_push(0x0541); f__B4F2_0D52_0029_1FC2();
l__0541:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x2A95));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x2A93));
	emu_push(emu_cs); emu_push(0x0550); emu_cs = 0x34A2; overlay(0x34A2, 0); emu_GUI_Widget_HandleEvents();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { overlay(0x34F2, 1); }
l__0550:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_di = emu_ax;
	emu_testw(&emu_di, 0x8000);
	if ((emu_di & 0x8000) != 0) goto l__055D;
	goto l__068C;
l__055D:
	emu_andw(&emu_di, 0x7FFF);
	emu_push(emu_di);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x2A95));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x2A93));
	emu_push(emu_cs); emu_push(0x056F); emu_cs = 0x348B; overlay(0x348B, 0); emu_GUI_Widget_Get_ByIndex();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { overlay(0x34F2, 1); }
l__056F:
	emu_addw(&emu_sp, 0x6);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_ax;
	emu_ax = emu_di;
	emu_cmpw(&emu_ax, 0x23);
	if (emu_ax == 0x23) goto l__05EF;
	emu_cmpw(&emu_ax, 0x25);
	if (emu_ax == 0x25) goto l__058B;
	emu_cmpw(&emu_ax, 0x26);
	if (emu_ax == 0x26) goto l__05DB;
	goto l__05FC;
l__058B:
	emu_incw(&emu_get_memory16(emu_ds, 0x00, 0x2A97));
	emu_orw(&emu_si, emu_si);
	if (emu_si == 0) goto l__0598;
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x2A91);
	goto l__059A;
l__0598:
	emu_xorw(&emu_ax, emu_ax);
l__059A:
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x80B2);
	emu_addw(&emu_dx, emu_ax);
	emu_decw(&emu_dx);
	emu_cmpw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x2A97));
	if ((int16)emu_dx <= (int16)emu_get_memory16(emu_ds, 0x00, 0x2A97)) goto l__05AC;
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x2A97);
	goto l__05BF;
l__05AC:
	emu_orw(&emu_si, emu_si);
	if (emu_si == 0) goto l__05B5;
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x2A91);
	goto l__05B7;
l__05B5:
	emu_xorw(&emu_ax, emu_ax);
l__05B7:
	emu_push(emu_ax);
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x80B2);
	emu_pop(&emu_dx);
	emu_addw(&emu_ax, emu_dx);
	emu_decw(&emu_ax);
l__05BF:
	emu_get_memory16(emu_ds, 0x00, 0x2A97) = emu_ax;
	emu_push(emu_si);
	emu_push(emu_cs);
	emu_push(0x05C8); f__B4F2_1221_000D_EE32();
l__05C8:
	emu_pop(&emu_cx);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x2A95));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x2A93));
	emu_push(emu_cs); emu_push(0x05D6); emu_cs = 0x348B; overlay(0x348B, 0); f__B48B_03A4_0005_619A();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { overlay(0x34F2, 1); }
l__05D6:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	goto l__067B;
l__05DB:
	emu_decw(&emu_get_memory16(emu_ds, 0x00, 0x2A97));
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x2A97), 0x0);
	if ((int16)emu_get_memory16(emu_ds, 0x00, 0x2A97) <= (int16)0x0) { /* Unresolved jump */ emu_ip = 0x05EB; emu_last_cs = 0xB4F2; emu_last_ip = 0x05E4; emu_last_length = 0x0010; emu_last_crc = 0x06C7; emu_call(); return; }
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x2A97);
	goto l__05ED;
l__05ED:
	goto l__05BF;
l__05EF:
	emu_get_memory16(emu_ss, emu_bp, -0x4) = 0x0;
	emu_get_memory16(emu_ss, emu_bp, -0x2) = 0x0;
	goto l__067B;
l__05FC:
	emu_push(emu_ds);
	emu_ax = 0x2787;
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x0606); f__B4F2_0F24_000E_BC8E();
l__0606:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_subw(&emu_di, 0x1E);
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x2A97);
	emu_subw(&emu_ax, emu_di);
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x16);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x061B); emu_String_GenerateSavegameFilename();
l__061B:
	emu_addw(&emu_sp, 0x6);
	emu_orw(&emu_si, emu_si);
	if (emu_si == 0) goto l__0639;
	emu_push(emu_di);
	emu_push(emu_cs);
	emu_push(0x0628); emu_GUI_Save_AskName();
l__0628:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp, -0x4) == 0x0) goto l__0637;
l__0632:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x4);
l__0635:
	goto l__06A8;
l__0637:
	goto l__064A;
l__0639:
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x16);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0643); emu_cs = 0x3511; overlay(0x3511, 0); emu_LoadFile();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { overlay(0x34F2, 1); }
l__0643:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_ax = 0x1;
	goto l__0635;
l__064A:
	emu_push(emu_ds);
	emu_ax = 0x2787;
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x0654); f__B4F2_0EE0_000E_BC8E();
l__0654:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_push(emu_si);
	emu_push(emu_cs);
	emu_push(0x0660); f__B4F2_0D52_0029_1FC2();
l__0660:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_ds);
	emu_ax = 0x2787;
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x066C); emu_GUI_Option_CreateWindow();
l__066C:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_push(emu_si);
	emu_push(emu_cs);
	emu_push(0x0678); f__B4F2_0D52_0029_1FC2();
l__0678:
	goto l__05D6;
l__067B:
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs); emu_push(0x0689); emu_cs = 0x348B; overlay(0x348B, 0); emu_GUI_Widget_Update();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { overlay(0x34F2, 1); }
l__0689:
	emu_addw(&emu_sp, 0x6);
l__068C:
	emu_push(emu_cs); emu_push(0x0691); emu_cs = 0x0642; emu_GUI_PaletteAnimate();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { overlay(0x34F2, 1); }
l__0691:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp, -0x2) == 0x0) goto l__069A;
	goto l__0538;
l__069A:
	emu_push(emu_ds);
	emu_ax = 0x2787;
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x06A4); f__B4F2_0F24_000E_BC8E();
l__06A4:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	goto l__0632;
l__06A8:
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
 * Decompiled function emu_GUI_Save_AskName()
 *
 * @name emu_GUI_Save_AskName
 * @implements B4F2:06AE:0035:32F1 ()
 * @implements B4F2:06D9:000A:0DAC
 * @implements B4F2:06E3:000C:EB11
 * @implements B4F2:06EF:0023:EA60
 * @implements B4F2:070A:0008:64F7
 * @implements B4F2:0712:000A:DE66
 * @implements B4F2:071C:0006:0569
 * @implements B4F2:0722:002C:58CA
 * @implements B4F2:074E:0008:33E5
 * @implements B4F2:0756:0003:5D17
 * @implements B4F2:0759:001D:11B0
 * @implements B4F2:0776:0027:A2D1
 * @implements B4F2:079D:0015:8FF6
 * @implements B4F2:07B2:0017:B773
 * @implements B4F2:07C9:000A:F8F6
 * @implements B4F2:07D3:0015:0F31
 * @implements B4F2:07E8:0019:E1DC
 * @implements B4F2:0801:0013:1F6E
 * @implements B4F2:0814:000D:00E4
 * @implements B4F2:0821:0010:6C88
 * @implements B4F2:0831:0003:CA1A
 * @implements B4F2:0836:0009:2EB3
 * @implements B4F2:083F:000A:8D25
 * @implements B4F2:0849:0006:0E1B
 * @implements B4F2:084F:0006:F7CE
 *
 * Called From: B4F2:0625:000D:8771
 */
void emu_GUI_Save_AskName()
{
l__06AE:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x18);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_si = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_ax = emu_si;
	emu_dx = 0x33;
	emu_imuluw(&emu_ax, emu_dx);
	emu_addw(&emu_ax, 0x80B4);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ds;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x0), 0x5B);
	if (emu_get_memory8(emu_es, emu_bx, 0x0) == 0x5B) {
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
		emu_get_memory8(emu_es, emu_bx, 0x0) = 0x0;
	}
l__06D9:
	emu_push(emu_ds);
	emu_ax = 0x27F0;
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x06E3); f__B4F2_0EE0_000E_BC8E();
l__06E3:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_ds);
	emu_ax = 0x27F0;
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x06EF); emu_GUI_Option_CreateWindow();
l__06EF:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_xorw(&emu_di, emu_di);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = 0x1;
	emu_get_memory16(emu_ss, emu_bp, -0x8) = 0x1;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x0), 0x5B);
	if (emu_get_memory8(emu_es, emu_bx, 0x0) == 0x5B) {
		emu_si = emu_get_memory16(emu_ds, 0x00, 0x80B2);
	}
l__070A:
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0712); emu_cs = 0x2598; f__2598_0000_0017_EB80();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { overlay(0x34F2, 1); }
l__0712:
	emu_pop(&emu_cx);
	emu_ax = 0xF;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x071C); emu_cs = 0x07AE; emu_Unknown_07AE_0000();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { overlay(0x34F2, 1); }
l__071C:
	emu_pop(&emu_cx);
	emu_push(emu_cs); emu_push(0x0722); emu_cs = 0x2B6C; f__2B6C_0137_0020_C73F();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { overlay(0x34F2, 1); }
l__0722:
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = 0x4;
	emu_push(emu_ax);
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x9931);
	emu_addw(&emu_ax, 0x2);
	emu_push(emu_ax);
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x992F);
	emu_cl = 0x3;
	emu_shlw(&emu_ax, emu_cl);
	emu_addw(&emu_ax, 0x2);
	emu_push(emu_ax);
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x992B);
	emu_decw(&emu_ax);
	emu_push(emu_ax);
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x992D);
	emu_cl = 0x3;
	emu_shlw(&emu_ax, emu_cl);
	emu_decw(&emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x074E); emu_cs = 0x10E4; emu_GUI_Widget_DrawBorder2();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { overlay(0x34F2, 1); }
l__074E:
	emu_addw(&emu_sp, 0xC);
	emu_push(emu_cs); emu_push(0x0756); emu_cs = 0x2B6C; f__2B6C_0169_001E_6939();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { overlay(0x34F2, 1); }
l__0756:
	goto l__0836;
l__0759:
	emu_ax = 0x22;
	emu_push(emu_ax);
	emu_ax = 0xEB;
	emu_push(emu_ax);
	emu_ax = 0xE8;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x0776); emu_cs = 0x10E4; emu_GUI_DrawText_Wrapper();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { overlay(0x34F2, 1); }
l__0776:
	emu_addw(&emu_sp, 0xE);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x2A95));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x2A93));
	emu_ax = 0xF;
	emu_push(emu_ax);
	emu_ax = 0x32;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x079D); emu_cs = 0x3527; overlay(0x3527, 0); emu_GUI_EditBox();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { overlay(0x34F2, 1); }
l__079D:
	emu_addw(&emu_sp, 0x12);
	emu_get_memory16(emu_ss, emu_bp, -0xA) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x8) = 0x2;
	emu_testw(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x8000);
	if ((emu_get_memory16(emu_ss, emu_bp, -0xA) & 0x8000) != 0) goto l__07B2;
	goto l__0836;
l__07B2:
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0xA);
	emu_andw(&emu_ax, 0x7FFF);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x2A95));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x2A93));
	emu_push(emu_cs); emu_push(0x07C9); emu_cs = 0x348B; overlay(0x348B, 0); emu_GUI_Widget_Get_ByIndex();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { overlay(0x34F2, 1); }
l__07C9:
	emu_addw(&emu_sp, 0x6);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x07D3); emu_cs = 0x348B; overlay(0x348B, 0); emu_GUI_Widget_Update();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { overlay(0x34F2, 1); }
l__07D3:
	emu_addw(&emu_sp, 0x6);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0xA);
	emu_andw(&emu_ax, 0x7FFF);
	emu_cmpw(&emu_ax, 0x1E);
	if (emu_ax == 0x1E) goto l__07E8;
	emu_cmpw(&emu_ax, 0x1F);
	if (emu_ax == 0x1F) goto l__0821;
	/* Unresolved jump */ emu_ip = 0x0834; emu_last_cs = 0xB4F2; emu_last_ip = 0x07E6; emu_last_length = 0x0015; emu_last_crc = 0x0F31; emu_call();
l__07E8:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x0), 0x0);
	if (emu_get_memory8(emu_es, emu_bx, 0x0) == 0x0) { /* Unresolved jump */ emu_ip = 0x081F; emu_last_cs = 0xB4F2; emu_last_ip = 0x07EF; emu_last_length = 0x0019; emu_last_crc = 0xE1DC; emu_call(); return; }
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x2A97);
	emu_subw(&emu_ax, emu_si);
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x18);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x0801); emu_String_GenerateSavegameFilename();
l__0801:
	emu_addw(&emu_sp, 0x6);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x18);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0814); emu_cs = 0x3511; overlay(0x3511, 0); emu_SaveFile();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { overlay(0x34F2, 1); }
l__0814:
	emu_addw(&emu_sp, 0x8);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = 0x0;
	emu_di = 0x1;
	goto l__0836;
l__0821:
	emu_get_memory16(emu_ss, emu_bp, -0x6) = 0x0;
	emu_xorw(&emu_di, emu_di);
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x0831); f__B4F2_1221_000D_EE32();
l__0831:
	emu_pop(&emu_cx);
	goto l__0836;
l__0836:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp, -0x6) == 0x0) goto l__083F;
	goto l__0759;
l__083F:
	emu_push(emu_ds);
	emu_ax = 0x27F0;
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x0849); f__B4F2_0F24_000E_BC8E();
l__0849:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_ax = emu_di;
	goto l__084F;
l__084F:
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
 * Decompiled function emu_GUI_Option_CreateWindow()
 *
 * @name emu_GUI_Option_CreateWindow
 * @implements B4F2:0855:0013:A7FD ()
 * @implements B4F2:0868:0015:B404
 * @implements B4F2:087D:000C:EE8E
 * @implements B4F2:0889:0012:37F8
 * @implements B4F2:089B:000F:B3B1
 * @implements B4F2:08AA:0023:995F
 * @implements B4F2:08CD:002A:5752
 * @implements B4F2:08CF:0028:5BF2
 * @implements B4F2:08F7:0008:0683
 * @implements B4F2:08FF:000F:E61A
 * @implements B4F2:090E:002B:B1B5
 * @implements B4F2:0939:0008:0683
 * @implements B4F2:0941:0008:1728
 * @implements B4F2:0944:0005:ADA0
 * @implements B4F2:0949:0037:8E4A
 * @implements B4F2:0980:0008:3E9A
 * @implements B4F2:0988:0079:A2B2
 * @implements B4F2:0A01:000B:51A5
 * @implements B4F2:0A07:0005:3DBD
 * @implements B4F2:0A0C:000F:E74D
 * @implements B4F2:0A1B:00A8:6448
 * @implements B4F2:0A23:00A0:F132
 * @implements B4F2:0A44:007F:1761
 * @implements B4F2:0AC3:0015:5E76
 * @implements B4F2:0AD8:0010:CB6F
 * @implements B4F2:0AE8:000E:5E9D
 * @implements B4F2:0AF6:000F:CEE8
 * @implements B4F2:0B05:0044:6791
 * @implements B4F2:0B49:0051:E4E8
 * @implements B4F2:0B8D:000D:1EAE
 * @implements B4F2:0B9A:0008:0683
 * @implements B4F2:0BA2:0013:29DD
 * @implements B4F2:0BA5:0010:3E8C
 * @implements B4F2:0BA6:000F:3ECB
 * @implements B4F2:0BB5:000A:6986
 * @implements B4F2:0BBF:000D:BD29
 * @implements B4F2:0BCC:0061:4869
 * @implements B4F2:0C2D:000D:E03B
 * @implements B4F2:0C3A:0010:B81A
 * @implements B4F2:0C4A:0015:5B32
 * @implements B4F2:0C5F:006B:6F08
 * @implements B4F2:0CCA:000D:243D
 * @implements B4F2:0CD7:0010:BC84
 * @implements B4F2:0CE7:0015:5DF6
 * @implements B4F2:0CFC:000F:C398
 * @implements B4F2:0D06:0005:6168
 * @implements B4F2:0D0B:000B:EB1E
 * @implements B4F2:0D16:0025:F411
 * @implements B4F2:0D3B:0008:43E5
 * @implements B4F2:0D43:0008:64F7
 * @implements B4F2:0D4B:0007:F77C
 *
 * Called From: B4F2:0186:000C:D4B9
 * Called From: B4F2:029D:000C:9527
 * Called From: B4F2:039F:000C:ECA6
 * Called From: B4F2:051F:000C:DD04
 * Called From: B4F2:0669:000C:5C32
 * Called From: B4F2:06EC:000C:EB11
 * Called From: B4F2:1121:000B:D674
 */
void emu_GUI_Option_CreateWindow()
{
l__0855:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x8);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_ax != 0) goto l__0868;
	/* Unresolved jump */ emu_ip = 0x0D4C; emu_last_cs = 0xB4F2; emu_last_ip = 0x0865; emu_last_length = 0x0013; emu_last_crc = 0xA7FD; emu_call();
l__0868:
	emu_get_memory16(emu_ds, 0x00, 0x2A95) = 0x0;
	emu_get_memory16(emu_ds, 0x00, 0x2A93) = 0x0;
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x087D); emu_cs = 0x2598; f__2598_0000_0017_EB80();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { overlay(0x34F2, 1); }
l__087D:
	emu_pop(&emu_cx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_push(emu_cs); emu_push(0x0889); emu_cs = 0x07AE; emu_Unknown_07AE_0000();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { overlay(0x34F2, 1); }
l__0889:
	emu_pop(&emu_cx);
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6D5D));
	emu_push(emu_cs); emu_push(0x089B); emu_cs = 0x10E4; emu_GUI_Widget_DrawBorder();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { overlay(0x34F2, 1); }
l__089B:
	emu_addw(&emu_sp, 0x6);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x2));
	emu_push(emu_cs);
	emu_push(0x08AA); emu_GUI_String_Get_ByIndex();
l__08AA:
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_dx);
	if (emu_ax == 0) { /* Unresolved jump */ emu_ip = 0x0902; emu_last_cs = 0xB4F2; emu_last_ip = 0x08AD; emu_last_length = 0x0023; emu_last_crc = 0x995F; emu_call(); return; }
	emu_ax = 0x122;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = 0xEE;
	emu_push(emu_ax);
	emu_ax = emu_ds;
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp,  0x8), emu_ax);
	if (emu_get_memory16(emu_ss, emu_bp,  0x8) != emu_ax) goto l__08CD;
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp,  0x6), 0x271E);
	if (emu_get_memory16(emu_ss, emu_bp,  0x6) != 0x271E) goto l__08CD;
	emu_ax = 0x2;
	goto l__08CF;
l__08CD:
	emu_xorw(&emu_ax, emu_ax);
l__08CF:
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x992B);
	emu_addw(&emu_dx, emu_ax);
	emu_addw(&emu_dx, 0x6);
	emu_push(emu_dx);
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x992D);
	emu_cl = 0x3;
	emu_shlw(&emu_ax, emu_cl);
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x992F);
	emu_cl = 0x2;
	emu_shlw(&emu_dx, emu_cl);
	emu_addw(&emu_ax, emu_dx);
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x2));
	emu_push(emu_cs);
	emu_push(0x08F7); emu_GUI_String_Get_ByIndex();
l__08F7:
	emu_pop(&emu_cx);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x08FF); emu_cs = 0x10E4; emu_GUI_DrawText_Wrapper();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { overlay(0x34F2, 1); }
l__08FF:
	emu_addw(&emu_sp, 0xE);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x7));
	emu_push(emu_cs);
	emu_push(0x090E); emu_GUI_String_Get_ByIndex();
l__090E:
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_dx);
	if (emu_ax != 0) goto l__0944;
	emu_ax = 0x22;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = 0xE8;
	emu_push(emu_ax);
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x992B);
	emu_addw(&emu_ax, 0x2A);
	emu_push(emu_ax);
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x992D);
	emu_addw(&emu_ax, 0x2);
	emu_cl = 0x3;
	emu_shlw(&emu_ax, emu_cl);
	emu_push(emu_ax);
	emu_ax = 0x151;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0939); emu_cs = 0x0FCB; emu_String_Get_ByIndex();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { overlay(0x34F2, 1); }
l__0939:
	emu_pop(&emu_cx);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0941); emu_cs = 0x10E4; emu_GUI_DrawText_Wrapper();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { overlay(0x34F2, 1); }
l__0941:
	emu_addw(&emu_sp, 0xE);
l__0944:
	emu_xorw(&emu_di, emu_di);
	goto l__0BA6;
l__0949:
	emu_bx = emu_di;
	emu_cl = 0x2;
	emu_shlw(&emu_bx, emu_cl);
	emu_ax = emu_get_memory16(emu_ds, emu_bx, 0x2A77);
	emu_dx = emu_get_memory16(emu_ds, emu_bx, 0x2A75);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_dx;
	emu_ax = emu_di;
	emu_dx = 0xE;
	emu_imuluw(&emu_ax, emu_dx);
	emu_dx = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_bx = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_addw(&emu_bx, emu_ax);
	emu_addw(&emu_bx, 0x7);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_bx;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_push(emu_cs);
	emu_push(0x0980); emu_GUI_String_Get_ByIndex();
l__0980:
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_dx);
	if (emu_ax != 0) goto l__0988;
	goto l__0BA5;
l__0988:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_get_memory16(emu_es, emu_bx, 0x2) = 0x0;
	emu_get_memory16(emu_es, emu_bx, 0x0) = 0x0;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x2);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_get_memory16(emu_es, emu_bx, 0x1E) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x4);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_get_memory16(emu_es, emu_bx, 0x20) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x6);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_get_memory16(emu_es, emu_bx, 0x22) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x8);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_get_memory16(emu_es, emu_bx, 0x24) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_get_memory16(emu_es, emu_bx, 0x6) = 0x0;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_get_memory16(emu_es, emu_bx, 0x8) = 0x0;
	emu_ax = emu_ds;
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp,  0x8), emu_ax);
	if (emu_get_memory16(emu_ss, emu_bp,  0x8) != emu_ax) { /* Unresolved jump */ emu_ip = 0x09EE; emu_last_cs = 0xB4F2; emu_last_ip = 0x09E5; emu_last_length = 0x0079; emu_last_crc = 0xA2B2; emu_call(); return; }
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp,  0x6), 0x27F0);
	if (emu_get_memory16(emu_ss, emu_bp,  0x6) == 0x27F0) goto l__0A23;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0xA), 0x0);
	if (emu_get_memory16(emu_es, emu_bx, 0xA) == 0x0) goto l__0A01;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	goto l__0A07;
l__0A01:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x0));
l__0A07:
	emu_push(emu_cs);
	emu_push(0x0A0C); emu_GUI_String_Get_ByIndex();
l__0A0C:
	emu_pop(&emu_cx);
	emu_bx = emu_ax;
	emu_es = emu_dx;
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x0);
	emu_ax = (int8)emu_al;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0A1B); emu_cs = 0x29DA; emu_GUI_Widget_GetShortcut();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { overlay(0x34F2, 1); }
l__0A1B:
	emu_pop(&emu_cx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_get_memory16(emu_es, emu_bx, 0x6) = emu_ax;
l__0A23:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0xC);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_get_memory16(emu_es, emu_bx, 0x8) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x6), 0x1B);
	if (emu_get_memory16(emu_es, emu_bx, 0x6) == 0x1B) {
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
		emu_get_memory16(emu_es, emu_bx, 0x8) = 0x13;
	}
l__0A44:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_es);
	emu_lfp(&emu_es, &emu_si, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_ax = emu_get_memory16(emu_es, emu_si, 0x0);
	emu_pop(&emu_es);
	emu_get_memory16(emu_es, emu_bx, 0x38) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_get_memory8(emu_es, emu_bx, 0xA) = 0x4;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_get_memory8(emu_es, emu_bx, 0xB) = 0x4;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_get_memory8(emu_es, emu_bx, 0xC) = 0x4;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_get_memory16(emu_es, emu_bx, 0x12) = 0x34F2;
	emu_get_memory16(emu_es, emu_bx, 0x10) = 0x61;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_get_memory16(emu_es, emu_bx, 0x16) = 0x34F2;
	emu_get_memory16(emu_es, emu_bx, 0x14) = 0x61;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_get_memory16(emu_es, emu_bx, 0x1A) = 0x34F2;
	emu_get_memory16(emu_es, emu_bx, 0x18) = 0x61;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_es);
	emu_lfp(&emu_es, &emu_si, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_ax = emu_get_memory16(emu_es, emu_si, 0x0);
	emu_pop(&emu_es);
	emu_get_memory16(emu_es, emu_bx, 0x1C) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_get_memory16(emu_es, emu_bx, 0x2E) = 0x0;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x2A95));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x2A93));
	emu_push(emu_cs); emu_push(0x0AC3); emu_cs = 0x348B; overlay(0x348B, 0); f__B48B_0000_001E_7E97();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { overlay(0x34F2, 1); }
l__0AC3:
	emu_addw(&emu_sp, 0x8);
	emu_get_memory16(emu_ds, 0x00, 0x2A95) = emu_dx;
	emu_get_memory16(emu_ds, 0x00, 0x2A93) = emu_ax;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs); emu_push(0x0AD8); emu_cs = 0x348B; overlay(0x348B, 0); f__B48B_00BD_0029_3530();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { overlay(0x34F2, 1); }
l__0AD8:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs); emu_push(0x0AE8); emu_cs = 0x348B; overlay(0x348B, 0); emu_GUI_Widget_Update();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { overlay(0x34F2, 1); }
l__0AE8:
	emu_addw(&emu_sp, 0x6);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs); emu_push(0x0AF6); emu_cs = 0x34A2; overlay(0x34A2, 0); emu_GUI_Widget_Draw();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { overlay(0x34F2, 1); }
l__0AF6:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0xA), 0x0);
	if (emu_get_memory16(emu_es, emu_bx, 0xA) != 0x0) goto l__0B05;
	goto l__0BA5;
l__0B05:
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x37B6), 0x1);
	if (emu_get_memory16(emu_ds, 0x00, 0x37B6) != 0x1) goto l__0B49;
	emu_ax = 0x22;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = 0xE8;
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x20);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_bx = emu_get_memory16(emu_es, emu_bx, 0x1C);
	emu_cl = 0x4;
	emu_shlw(&emu_bx, emu_cl);
	emu_addw(&emu_ax, emu_get_memory16(emu_ds, emu_bx, 0x4064));
	emu_addw(&emu_ax, 0x3);
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_bx = emu_get_memory16(emu_es, emu_bx, 0x1C);
	emu_cl = 0x4;
	emu_shlw(&emu_bx, emu_cl);
	emu_ax = emu_get_memory16(emu_ds, emu_bx, 0x4062);
	emu_cl = 0x3;
	emu_shlw(&emu_ax, emu_cl);
	emu_addw(&emu_ax, 0x28);
	goto l__0B8D;
l__0B49:
	emu_ax = 0x222;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = 0xE8;
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x20);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_bx = emu_get_memory16(emu_es, emu_bx, 0x1C);
	emu_cl = 0x4;
	emu_shlw(&emu_bx, emu_cl);
	emu_addw(&emu_ax, emu_get_memory16(emu_ds, emu_bx, 0x4064));
	emu_addw(&emu_ax, 0x3);
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x1E);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_bx = emu_get_memory16(emu_es, emu_bx, 0x1C);
	emu_cl = 0x4;
	emu_shlw(&emu_bx, emu_cl);
	emu_dx = emu_get_memory16(emu_ds, emu_bx, 0x4062);
	emu_cl = 0x3;
	emu_shlw(&emu_dx, emu_cl);
	emu_addw(&emu_ax, emu_dx);
	emu_addw(&emu_ax, 0xFFF6);
l__0B8D:
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_push(emu_cs);
	emu_push(0x0B9A); emu_GUI_String_Get_ByIndex();
l__0B9A:
	emu_pop(&emu_cx);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0BA2); emu_cs = 0x10E4; emu_GUI_DrawText_Wrapper();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { overlay(0x34F2, 1); }
l__0BA2:
	emu_addw(&emu_sp, 0xE);
l__0BA5:
	emu_incw(&emu_di);
l__0BA6:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x6);
	emu_ax = (int8)emu_al;
	emu_cmpw(&emu_ax, emu_di);
	if ((int16)emu_ax <= (int16)emu_di) goto l__0BB5;
	goto l__0949;
l__0BB5:
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x80B2), 0x5);
	if ((int16)emu_get_memory16(emu_ds, 0x00, 0x80B2) >= (int16)0x5) goto l__0BBF;
	goto l__0D06;
l__0BBF:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x4), 0x0);
	if (emu_get_memory16(emu_es, emu_bx, 0x4) != 0x0) goto l__0BCC;
	goto l__0D06;
l__0BCC:
	emu_ax = 0x2DCE;
	emu_es = emu_ax;
	emu_ax = emu_get_memory16(emu_es, 0x00, 0x52E);
	emu_dx = emu_get_memory16(emu_es, 0x00, 0x52C);
	emu_get_memory16(emu_ds, 0x00, 0x2A0F) = emu_ax;
	emu_get_memory16(emu_ds, 0x00, 0x2A0D) = emu_dx;
	emu_ax = 0x2DCE;
	emu_es = emu_ax;
	emu_ax = emu_get_memory16(emu_es, 0x00, 0x532);
	emu_dx = emu_get_memory16(emu_es, 0x00, 0x530);
	emu_get_memory16(emu_ds, 0x00, 0x2A13) = emu_ax;
	emu_get_memory16(emu_ds, 0x00, 0x2A11) = emu_dx;
	emu_ax = 0x2DCE;
	emu_es = emu_ax;
	emu_ax = emu_get_memory16(emu_es, 0x00, 0x532);
	emu_dx = emu_get_memory16(emu_es, 0x00, 0x530);
	emu_get_memory16(emu_ds, 0x00, 0x2A17) = emu_ax;
	emu_get_memory16(emu_ds, 0x00, 0x2A15) = emu_dx;
	emu_get_memory16(emu_ds, 0x00, 0x29FF) = 0x0;
	emu_get_memory16(emu_ds, 0x00, 0x29FD) = 0x0;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x0);
	emu_get_memory16(emu_ds, 0x00, 0x2A19) = emu_ax;
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x29FD;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0C2D); emu_cs = 0x348B; overlay(0x348B, 0); emu_GUI_Widget_Update();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { overlay(0x34F2, 1); }
l__0C2D:
	emu_addw(&emu_sp, 0x6);
	emu_push(emu_ds);
	emu_ax = 0x29FD;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0C3A); emu_cs = 0x348B; overlay(0x348B, 0); emu_GUI_Widget_MakeInvisible();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { overlay(0x34F2, 1); }
l__0C3A:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_ax = 0xE9;
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x29FD;
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x0C4A); f__B4F2_13CE_0013_65D7();
l__0C4A:
	emu_addw(&emu_sp, 0x6);
	emu_push(emu_ds);
	emu_ax = 0x29FD;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x2A95));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x2A93));
	emu_push(emu_cs); emu_push(0x0C5F); emu_cs = 0x348B; overlay(0x348B, 0); f__B48B_0000_001E_7E97();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { overlay(0x34F2, 1); }
l__0C5F:
	emu_addw(&emu_sp, 0x8);
	emu_get_memory16(emu_ds, 0x00, 0x2A95) = emu_dx;
	emu_get_memory16(emu_ds, 0x00, 0x2A93) = emu_ax;
	emu_ax = 0x2DCE;
	emu_es = emu_ax;
	emu_ax = emu_get_memory16(emu_es, 0x00, 0x536);
	emu_dx = emu_get_memory16(emu_es, 0x00, 0x534);
	emu_get_memory16(emu_ds, 0x00, 0x2A4B) = emu_ax;
	emu_get_memory16(emu_ds, 0x00, 0x2A49) = emu_dx;
	emu_ax = 0x2DCE;
	emu_es = emu_ax;
	emu_ax = emu_get_memory16(emu_es, 0x00, 0x53A);
	emu_dx = emu_get_memory16(emu_es, 0x00, 0x538);
	emu_get_memory16(emu_ds, 0x00, 0x2A4F) = emu_ax;
	emu_get_memory16(emu_ds, 0x00, 0x2A4D) = emu_dx;
	emu_ax = 0x2DCE;
	emu_es = emu_ax;
	emu_ax = emu_get_memory16(emu_es, 0x00, 0x53A);
	emu_dx = emu_get_memory16(emu_es, 0x00, 0x538);
	emu_get_memory16(emu_ds, 0x00, 0x2A53) = emu_ax;
	emu_get_memory16(emu_ds, 0x00, 0x2A51) = emu_dx;
	emu_get_memory16(emu_ds, 0x00, 0x2A3B) = 0x0;
	emu_get_memory16(emu_ds, 0x00, 0x2A39) = 0x0;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x0);
	emu_get_memory16(emu_ds, 0x00, 0x2A55) = emu_ax;
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x2A39;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0CCA); emu_cs = 0x348B; overlay(0x348B, 0); emu_GUI_Widget_Update();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { overlay(0x34F2, 1); }
l__0CCA:
	emu_addw(&emu_sp, 0x6);
	emu_push(emu_ds);
	emu_ax = 0x2A39;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0CD7); emu_cs = 0x348B; overlay(0x348B, 0); emu_GUI_Widget_MakeInvisible();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { overlay(0x34F2, 1); }
l__0CD7:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_ax = 0xE9;
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x2A39;
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x0CE7); f__B4F2_13CE_0013_65D7();
l__0CE7:
	emu_addw(&emu_sp, 0x6);
	emu_push(emu_ds);
	emu_ax = 0x2A39;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x2A95));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x2A93));
	emu_push(emu_cs); emu_push(0x0CFC); emu_cs = 0x348B; overlay(0x348B, 0); f__B48B_0000_001E_7E97();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { overlay(0x34F2, 1); }
l__0CFC:
	emu_addw(&emu_sp, 0x8);
	emu_get_memory16(emu_ds, 0x00, 0x2A95) = emu_dx;
	emu_get_memory16(emu_ds, 0x00, 0x2A93) = emu_ax;
l__0D06:
	emu_push(emu_cs); emu_push(0x0D0B); emu_cs = 0x2B6C; f__2B6C_0137_0020_C73F();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { overlay(0x34F2, 1); }
l__0D0B:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_push(emu_cs); emu_push(0x0D16); emu_cs = 0x07AE; emu_Unknown_07AE_0000();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { overlay(0x34F2, 1); }
l__0D16:
	emu_pop(&emu_cx);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x9931));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x992F));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x992B));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x992D));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x992B));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x992D));
	emu_push(emu_cs); emu_push(0x0D3B); emu_cs = 0x24D0; f__24D0_000D_0039_C17D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { overlay(0x34F2, 1); }
l__0D3B:
	emu_addw(&emu_sp, 0x10);
	emu_push(emu_cs); emu_push(0x0D43); emu_cs = 0x2B6C; f__2B6C_0169_001E_6939();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { overlay(0x34F2, 1); }
l__0D43:
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0D4B); emu_cs = 0x2598; f__2598_0000_0017_EB80();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { overlay(0x34F2, 1); }
l__0D4B:
	emu_pop(&emu_cx);
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
 * Decompiled function f__B4F2_0D52_0029_1FC2()
 *
 * @name f__B4F2_0D52_0029_1FC2
 * @implements B4F2:0D52:0029:1FC2 ()
 * @implements B4F2:0D64:0017:7F9F
 * @implements B4F2:0D7B:0004:559F
 * @implements B4F2:0D7F:000A:F079
 * @implements B4F2:0D89:0010:3CB0
 * @implements B4F2:0D99:000E:986A
 * @implements B4F2:0D9C:000B:BA00
 * @implements B4F2:0DA7:0019:443B
 * @implements B4F2:0DA9:0017:0422
 * @implements B4F2:0DC0:0004:559F
 * @implements B4F2:0DC4:000A:347F
 * @implements B4F2:0DCE:0010:B907
 * @implements B4F2:0DDE:0005:6143
 * @implements B4F2:0DE1:0002:2597
 *
 * Called From: B4F2:052B:000C:2EB3
 * Called From: B4F2:053E:0009:A53C
 * Called From: B4F2:065D:000C:A986
 * Called From: B4F2:0675:000C:A98C
 */
void f__B4F2_0D52_0029_1FC2()
{
l__0D52:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp,  0x8), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp,  0x8) == 0x0) {
		emu_ax = emu_get_memory16(emu_ds, 0x00, 0x2A97);
		emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x2A99));
		if (emu_ax == emu_get_memory16(emu_ds, 0x00, 0x2A99)) goto l__0DE1;
	}
l__0D64:
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x2A97);
	emu_get_memory16(emu_ds, 0x00, 0x2A99) = emu_ax;
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x2A97), 0x5);
	if ((int16)emu_get_memory16(emu_ds, 0x00, 0x2A97) < (int16)0x5) goto l__0D7F;
	emu_push(emu_ds);
	emu_ax = 0x2A39;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0D7B); emu_cs = 0x348B; overlay(0x348B, 0); f__B48B_00BD_0029_3530();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { overlay(0x34F2, 1); }
l__0D7B:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	goto l__0D9C;
l__0D7F:
	emu_push(emu_ds);
	emu_ax = 0x2A39;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0D89); emu_cs = 0x348B; overlay(0x348B, 0); emu_GUI_Widget_MakeInvisible();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { overlay(0x34F2, 1); }
l__0D89:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_ax = 0xE9;
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x2A39;
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x0D99); f__B4F2_13CE_0013_65D7();
l__0D99:
	emu_addw(&emu_sp, 0x6);
l__0D9C:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp,  0x6), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp,  0x6) == 0x0) goto l__0DA7;
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x2A91);
	goto l__0DA9;
l__0DA7:
	emu_xorw(&emu_ax, emu_ax);
l__0DA9:
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x80B2);
	emu_addw(&emu_dx, emu_ax);
	emu_decw(&emu_dx);
	emu_cmpw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x2A97));
	if ((int16)emu_dx <= (int16)emu_get_memory16(emu_ds, 0x00, 0x2A97)) goto l__0DC4;
	emu_push(emu_ds);
	emu_ax = 0x29FD;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0DC0); emu_cs = 0x348B; overlay(0x348B, 0); f__B48B_00BD_0029_3530();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { overlay(0x34F2, 1); }
l__0DC0:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	goto l__0DE1;
l__0DC4:
	emu_push(emu_ds);
	emu_ax = 0x29FD;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0DCE); emu_cs = 0x348B; overlay(0x348B, 0); emu_GUI_Widget_MakeInvisible();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { overlay(0x34F2, 1); }
l__0DCE:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_ax = 0xE9;
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x29FD;
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x0DDE); f__B4F2_13CE_0013_65D7();
l__0DDE:
	emu_addw(&emu_sp, 0x6);
l__0DE1:
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B4F2_0DE3_001F_AB1C()
 *
 * @name f__B4F2_0DE3_001F_AB1C
 * @implements B4F2:0DE3:001F:AB1C ()
 * @implements B4F2:0E02:0010:2CBB
 * @implements B4F2:0E12:0004:BEB2
 *
 * Called From: B4F2:0319:0006:58B0
 */
void f__B4F2_0DE3_001F_AB1C()
{
l__0DE3:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_xorw(&emu_ax, emu_ax);
	emu_dx = 0x300;
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C34));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C32));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x998C));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x998A));
	emu_push(emu_cs); emu_push(0x0E02); emu_cs = 0x2B0E; emu_Tools_Memmove();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { overlay(0x34F2, 1); }
l__0E02:
	emu_addw(&emu_sp, 0xC);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C34));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C32));
	emu_push(emu_cs); emu_push(0x0E12); emu_cs = 0x259E; f__259E_0040_0015_5E4A();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { overlay(0x34F2, 1); }
l__0E12:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B4F2_0E16_0019_86E9()
 *
 * @name f__B4F2_0E16_0019_86E9
 * @implements B4F2:0E16:0019:86E9 ()
 * @implements B4F2:0E2F:001C:FAAE
 * @implements B4F2:0E4B:0014:537D
 * @implements B4F2:0E5F:0025:489F
 * @implements B4F2:0E73:0011:CF2A
 * @implements B4F2:0E84:0038:CF2A
 * @implements B4F2:0EBC:001D:B10D
 * @implements B4F2:0EC3:0016:F9AF
 * @implements B4F2:0ED9:0007:EF7C
 *
 * Called From: B4F2:0170:0005:3FA8
 */
void f__B4F2_0E16_0019_86E9()
{
l__0E16:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x1A);
	emu_push(emu_si);
	emu_movw(&emu_ax, emu_bp - 0x1A);
	emu_push(emu_ss);
	emu_push(emu_ax);
	emu_ax = 0x2A9B;
	emu_push(emu_ds);
	emu_push(emu_ax);
	emu_cx = 0x12;
	emu_push(emu_cs); emu_push(0x0E2F); emu_cs = 0x01F7; emu_Tools_MemcopyCX();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { overlay(0x34F2, 1); }
l__0E2F:
	emu_xorw(&emu_ax, emu_ax);
	emu_dx = 0x300;
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x998C));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x998A));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C34));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C32));
	emu_push(emu_cs); emu_push(0x0E4B); emu_cs = 0x2B0E; emu_Tools_Memmove();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { overlay(0x34F2, 1); }
l__0E4B:
	emu_addw(&emu_sp, 0xC);
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x3C34);
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x3C32);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_dx;
	emu_xorw(&emu_si, emu_si);
	goto l__0E73;
l__0E5F:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x0);
	emu_ah = 0x0;
	emu_sarw(&emu_ax, 0x1);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_get_memory8(emu_es, emu_bx, 0x0) = emu_al;
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_incw(&emu_si);
l__0E73:
	emu_cmpw(&emu_si, 0x300);
	if ((int16)emu_si < (int16)0x300) goto l__0E5F;
	emu_movw(&emu_ax, emu_bp - 0x1A);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ss;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	goto l__0EC3;
l__0E84:
	emu_xorw(&emu_ax, emu_ax);
	emu_dx = 0x3;
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x0);
	emu_dx = 0x3;
	emu_imuluw(&emu_ax, emu_dx);
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x3C32);
	emu_addw(&emu_dx, emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C34));
	emu_push(emu_dx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x0);
	emu_dx = 0x3;
	emu_imuluw(&emu_ax, emu_dx);
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x998A);
	emu_addw(&emu_dx, emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x998C));
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x0EBC); emu_cs = 0x2B0E; emu_Tools_Memmove();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { overlay(0x34F2, 1); }
l__0EBC:
	emu_addw(&emu_sp, 0xC);
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x2);
l__0EC3:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x0), 0xFFFF);
	if (emu_get_memory16(emu_es, emu_bx, 0x0) != 0xFFFF) goto l__0E84;
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x998C));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x998A));
	emu_push(emu_cs); emu_push(0x0ED9); emu_cs = 0x259E; f__259E_0040_0015_5E4A();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { overlay(0x34F2, 1); }
l__0ED9:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_pop(&emu_si);
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B4F2_0EE0_000E_BC8E()
 *
 * @name f__B4F2_0EE0_000E_BC8E
 * @implements B4F2:0EE0:000E:BC8E ()
 * @implements B4F2:0EEE:0006:0569
 * @implements B4F2:0EF4:0009:C306
 * @implements B4F2:0EFD:001D:FFB4
 * @implements B4F2:0F1A:0008:33E5
 * @implements B4F2:0F22:0002:2597
 *
 * Called From: B4F2:017A:000A:3489
 * Called From: B4F2:0291:0015:800B
 * Called From: B4F2:0393:000F:A3C2
 * Called From: B4F2:0513:000D:4D30
 * Called From: B4F2:0513:0010:8F88
 * Called From: B4F2:0651:000A:3D30
 * Called From: B4F2:06E0:000A:0DAC
 * Called From: B4F2:06E0:0035:32F1
 * Called From: B4F2:1116:0019:B3DC
 */
void f__B4F2_0EE0_000E_BC8E()
{
l__0EE0:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_push(emu_cs); emu_push(0x0EEE); emu_cs = 0x07AE; emu_Unknown_07AE_0000();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { overlay(0x34F2, 1); }
l__0EEE:
	emu_pop(&emu_cx);
	emu_push(emu_cs); emu_push(0x0EF4); emu_cs = 0x2B6C; f__2B6C_0137_0020_C73F();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { overlay(0x34F2, 1); }
l__0EF4:
	emu_ax = 0x5;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0EFD); emu_cs = 0x252E; emu_Memory_GetBlock1();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { overlay(0x34F2, 1); }
l__0EFD:
	emu_pop(&emu_cx);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x9931));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x992F));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x992B));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x992D));
	emu_ax = 0x353F;
	emu_es = emu_ax;

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_es, 0x00, 0x66C0);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_es, 0x00, 0x66C2);
	emu_push(0x0F1A);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A6101C: emu_GUI_CopyToBuffer(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0xB4F2; emu_last_ip = 0x0F15; emu_last_length = 0x001D; emu_last_crc = 0xFFB4;
			emu_call();
			return;
	}
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { overlay(0x34F2, 1); }
l__0F1A:
	emu_addw(&emu_sp, 0xC);
	emu_push(emu_cs); emu_push(0x0F22); emu_cs = 0x2B6C; f__2B6C_0169_001E_6939();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { overlay(0x34F2, 1); }
l__0F22:
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B4F2_0F24_000E_BC8E()
 *
 * @name f__B4F2_0F24_000E_BC8E
 * @implements B4F2:0F24:000E:BC8E ()
 * @implements B4F2:0F32:0006:0569
 * @implements B4F2:0F38:0009:C306
 * @implements B4F2:0F41:001D:FF8F
 * @implements B4F2:0F5E:0008:33E5
 * @implements B4F2:0F66:0002:2597
 *
 * Called From: B4F2:01C9:0013:C71B
 * Called From: B4F2:049E:000A:CE31
 * Called From: B4F2:0603:000A:BD94
 * Called From: B4F2:06A1:000A:3D33
 * Called From: B4F2:0846:000A:8D25
 * Called From: B4F2:1172:000D:BD26
 */
void f__B4F2_0F24_000E_BC8E()
{
l__0F24:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_push(emu_cs); emu_push(0x0F32); emu_cs = 0x07AE; emu_Unknown_07AE_0000();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { overlay(0x34F2, 1); }
l__0F32:
	emu_pop(&emu_cx);
	emu_push(emu_cs); emu_push(0x0F38); emu_cs = 0x2B6C; f__2B6C_0137_0020_C73F();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { overlay(0x34F2, 1); }
l__0F38:
	emu_ax = 0x5;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0F41); emu_cs = 0x252E; emu_Memory_GetBlock1();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { overlay(0x34F2, 1); }
l__0F41:
	emu_pop(&emu_cx);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x9931));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x992F));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x992B));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x992D));
	emu_ax = 0x353F;
	emu_es = emu_ax;

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_es, 0x00, 0x662C);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_es, 0x00, 0x662E);
	emu_push(0x0F5E);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A604F8: emu_GUI_CopyFromBuffer(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0xB4F2; emu_last_ip = 0x0F59; emu_last_length = 0x001D; emu_last_crc = 0xFF8F;
			emu_call();
			return;
	}
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { overlay(0x34F2, 1); }
l__0F5E:
	emu_addw(&emu_sp, 0xC);
	emu_push(emu_cs); emu_push(0x0F66); emu_cs = 0x2B6C; f__2B6C_0169_001E_6939();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { overlay(0x34F2, 1); }
l__0F66:
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function emu_GUI_YesNo()
 *
 * @name emu_GUI_YesNo
 * @implements B4F2:1100:0019:B3DC ()
 * @implements B4F2:1119:000B:D674
 * @implements B4F2:1124:0007:AFF1
 * @implements B4F2:112B:000D:7056
 * @implements B4F2:1138:001E:D0F3
 * @implements B4F2:1156:0005:D6CA
 * @implements B4F2:115B:0004:EFF9
 * @implements B4F2:1161:0007:EB00
 * @implements B4F2:1163:0005:1765
 * @implements B4F2:1168:000D:BD26
 * @implements B4F2:1175:0006:0E3B
 * @implements B4F2:117B:0006:F7CE
 *
 * Called From: 34F2:002F:0005:0000
 * Called From: B4F2:021F:0009:48EA
 * Called From: B4F2:0237:0009:49EC
 * Called From: B4F2:0258:0009:9BF4
 */
void emu_GUI_YesNo()
{
l__1100:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x2);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_xorw(&emu_si, emu_si);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_get_memory16(emu_ds, 0x00, 0x2720) = emu_ax;
	emu_push(emu_ds);
	emu_ax = 0x271E;
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x1119); f__B4F2_0EE0_000E_BC8E();
l__1119:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_ds);
	emu_ax = 0x271E;
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x1124); emu_GUI_Option_CreateWindow();
l__1124:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_di = 0x1;
	goto l__1168;
l__112B:
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x2A95));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x2A93));
	emu_push(emu_cs); emu_push(0x1138); emu_cs = 0x34A2; overlay(0x34A2, 0); emu_GUI_Widget_HandleEvents();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { overlay(0x34F2, 1); }
l__1138:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ax;
	emu_testw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x8000);
	if ((emu_get_memory16(emu_ss, emu_bp, -0x2) & 0x8000) == 0) goto l__1163;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x2);
	emu_andw(&emu_ax, 0x7FFF);
	emu_cmpw(&emu_ax, 0x1E);
	if (emu_ax == 0x1E) goto l__1156;
	emu_cmpw(&emu_ax, 0x1F);
	if (emu_ax == 0x1F) goto l__115B;
	/* Unresolved jump */ emu_ip = 0x115F; emu_last_cs = 0xB4F2; emu_last_ip = 0x1154; emu_last_length = 0x001E; emu_last_crc = 0xD0F3; emu_call();
l__1156:
	emu_si = 0x1;
	goto l__1161;
l__115B:
	emu_xorw(&emu_si, emu_si);
	goto l__1161;
l__1161:
	emu_xorw(&emu_di, emu_di);
l__1163:
	emu_push(emu_cs); emu_push(0x1168); emu_cs = 0x0642; emu_GUI_PaletteAnimate();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { overlay(0x34F2, 1); }
l__1168:
	emu_orw(&emu_di, emu_di);
	if (emu_di != 0) goto l__112B;
	emu_push(emu_ds);
	emu_ax = 0x271E;
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x1175); f__B4F2_0F24_000E_BC8E();
l__1175:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_ax = emu_si;
	goto l__117B;
l__117B:
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
 * Decompiled function emu_Load_SavegameCount()
 *
 * @name emu_Load_SavegameCount
 * @implements B4F2:1181:000B:D4AD ()
 * @implements B4F2:118C:000C:BFCE
 * @implements B4F2:118D:000B:BBAE
 * @implements B4F2:1198:000D:4FB1
 * @implements B4F2:11A5:000A:2717
 * @implements B4F2:11AF:0005:8BCF
 *
 * Called From: B4F2:04C9:0015:5960
 */
void emu_Load_SavegameCount()
{
l__1181:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0xE);
	emu_push(emu_si);
	emu_xorw(&emu_si, emu_si);
	goto l__118D;
l__118C:
	emu_incw(&emu_si);
l__118D:
	emu_push(emu_si);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0xE);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x1198); emu_String_GenerateSavegameFilename();
l__1198:
	emu_addw(&emu_sp, 0x6);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0xE);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x11A5); emu_cs = 0x1FB5; emu_File_Exists();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { overlay(0x34F2, 1); }
l__11A5:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax != 0) goto l__118C;
	emu_ax = emu_si;
	goto l__11AF;
l__11AF:
	emu_pop(&emu_si);
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B4F2_11CF_0013_5635()
 *
 * @name f__B4F2_11CF_0013_5635
 * @implements B4F2:11CF:0013:5635 ()
 * @implements B4F2:11E2:0018:1D91
 * @implements B4F2:11FA:000E:5317
 * @implements B4F2:1208:0011:0023
 * @implements B4F2:1214:0005:D7FA
 * @implements B4F2:121D:0004:893F
 *
 * Called From: B4F2:0131:000F:54A6
 */
void f__B4F2_11CF_0013_5635()
{
l__11CF:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x8);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x8);
	emu_push(emu_ax);
	emu_al = 0x0;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x11E2); emu_cs = 0x01F7; emu_Drive_Get_Free_Space();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { overlay(0x34F2, 1); }
l__11E2:
	emu_addw(&emu_sp, 0x6);
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0xFFFF);
	if (emu_get_memory16(emu_ss, emu_bp, -0x2) == 0xFFFF) { /* Unresolved jump */ emu_ip = 0x1219; emu_last_cs = 0xB4F2; emu_last_ip = 0x11E9; emu_last_length = 0x0018; emu_last_crc = 0x1D91; emu_call(); return; }
	emu_bx = emu_get_memory16(emu_ss, emu_bp, -0x8);
	emu_xorw(&emu_cx, emu_cx);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_cs); emu_push(0x11FA); emu_cs = 0x01F7; emu_Tools_MulCSIP_csip();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { overlay(0x34F2, 1); }
l__11FA:
	emu_push(emu_ax);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x2);
	emu_push(emu_dx);
	emu_xorw(&emu_dx, emu_dx);
	emu_pop(&emu_cx);
	emu_pop(&emu_bx);
	emu_push(emu_cs); emu_push(0x1208); emu_cs = 0x01F7; emu_Tools_MulCSIP_csip();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { overlay(0x34F2, 1); }
l__1208:
	emu_cmpw(&emu_dx, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if ((int16)emu_dx < (int16)emu_get_memory16(emu_ss, emu_bp,  0x8)) { /* Unresolved jump */ emu_ip = 0x1219; emu_last_cs = 0xB4F2; emu_last_ip = 0x120B; emu_last_length = 0x0011; emu_last_crc = 0x0023; emu_call(); return; }
	if ((int16)emu_dx <= (int16)emu_get_memory16(emu_ss, emu_bp,  0x8)) {
		emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x6));
		if (emu_ax <= emu_get_memory16(emu_ss, emu_bp,  0x6)) { /* Unresolved jump */ emu_ip = 0x1219; emu_last_cs = 0xB4F2; emu_last_ip = 0x1212; emu_last_length = 0x0011; emu_last_crc = 0x0023; emu_call(); return; }
	}
l__1214:
	emu_ax = 0x1;
	goto l__121D;
l__121D:
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B4F2_1221_000D_EE32()
 *
 * @name f__B4F2_1221_000D_EE32
 * @implements B4F2:1221:000D:EE32 ()
 * @implements B4F2:122E:0018:F493
 * @implements B4F2:1246:001A:72DC
 * @implements B4F2:1260:0014:86F2
 * @implements B4F2:1274:0005:822E
 * @implements B4F2:1279:0010:7924
 * @implements B4F2:1287:0002:F5BA
 * @implements B4F2:1289:000F:0377
 * @implements B4F2:1298:000D:4FB1
 * @implements B4F2:12A5:0010:09E9
 * @implements B4F2:12B5:0025:4F31
 * @implements B4F2:12DA:0009:06A3
 * @implements B4F2:12E3:0003:CC1A
 * @implements B4F2:12F4:0009:879B
 * @implements B4F2:12F5:0008:87B8
 * @implements B4F2:12FD:0006:F7CE
 *
 * Called From: B4F2:04F9:000B:A00B
 * Called From: B4F2:04F9:0009:F00D
 * Called From: B4F2:05C5:0009:F092
 * Called From: B4F2:05C5:0011:3C18
 * Called From: B4F2:05C5:0013:3A48
 * Called From: B4F2:082E:0010:6C88
 */
void f__B4F2_1221_000D_EE32()
{
l__1221:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0xE);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_xorw(&emu_si, emu_si);
	goto l__12F5;
l__122E:
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x2A97);
	emu_subw(&emu_ax, emu_si);
	if (!(emu_flags.sf != emu_flags.of)) goto l__1246;
	emu_ax = emu_si;
	emu_dx = 0x33;
	emu_imuluw(&emu_ax, emu_dx);
	emu_bx = emu_ax;
	emu_get_memory8(emu_ds, emu_bx, 0x80B4) = 0x0;
	goto l__12F4;
l__1246:
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x2A97);
	emu_subw(&emu_ax, emu_si);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x80B2));
	if (emu_ax != emu_get_memory16(emu_ds, 0x00, 0x80B2)) goto l__1289;
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp,  0x6), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp,  0x6) == 0x0) goto l__1279;
	emu_ax = 0x63;
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x1260); emu_GUI_String_Get_ByIndex();
l__1260:
	emu_pop(&emu_cx);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_ax = emu_si;
	emu_dx = 0x33;
	emu_imuluw(&emu_ax, emu_dx);
	emu_addw(&emu_ax, 0x80B4);
	emu_push(emu_ds);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1274); emu_cs = 0x01F7; emu_String_strcpy();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { overlay(0x34F2, 1); }
l__1274:
	emu_addw(&emu_sp, 0x8);
	goto l__1287;
l__1279:
	emu_ax = emu_si;
	emu_dx = 0x33;
	emu_imuluw(&emu_ax, emu_dx);
	emu_bx = emu_ax;
	emu_get_memory8(emu_ds, emu_bx, 0x80B4) = 0x0;
l__1287:
	goto l__12F4;
l__1289:
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x2A97);
	emu_subw(&emu_ax, emu_si);
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0xE);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x1298); emu_String_GenerateSavegameFilename();
l__1298:
	emu_addw(&emu_sp, 0x6);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0xE);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x12A5); emu_cs = 0x1FB5; emu_File_Exists();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { overlay(0x34F2, 1); }
l__12A5:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax == 0) { /* Unresolved jump */ emu_ip = 0x12E6; emu_last_cs = 0xB4F2; emu_last_ip = 0x12A9; emu_last_length = 0x0010; emu_last_crc = 0x09E9; emu_call(); return; }
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0xE);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x12B5); emu_cs = 0x34B1; overlay(0x34B1, 0); emu_ChunkFile_Open();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { overlay(0x34F2, 1); }
l__12B5:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_di = emu_ax;
	emu_xorw(&emu_ax, emu_ax);
	emu_dx = 0x32;
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_ds);
	emu_ax = emu_si;
	emu_dx = 0x33;
	emu_imuluw(&emu_ax, emu_dx);
	emu_addw(&emu_ax, 0x80B4);
	emu_push(emu_ax);
	emu_ax = 0x454D;
	emu_dx = 0x414E;
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x12DA); emu_cs = 0x34B1; overlay(0x34B1, 0); emu_ChunkFile_Read();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { overlay(0x34F2, 1); }
l__12DA:
	emu_addw(&emu_sp, 0xE);
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x12E3); emu_cs = 0x34B1; overlay(0x34B1, 0); emu_ChunkFile_Close();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { overlay(0x34F2, 1); }
l__12E3:
	emu_pop(&emu_cx);
	goto l__12F4;
l__12F4:
	emu_incw(&emu_si);
l__12F5:
	emu_cmpw(&emu_si, 0x5);
	if ((int16)emu_si >= (int16)0x5) goto l__12FD;
	goto l__122E;
l__12FD:
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
 * Decompiled function emu_GUI_String_Get_ByIndex()
 *
 * @name emu_GUI_String_Get_ByIndex
 * @implements B4F2:1303:0017:56DB ()
 * @implements B4F2:131A:0007:E192
 * @implements B4F2:1321:002F:0347
 * @implements B4F2:1348:0008:E6C9
 * @implements B4F2:134E:0002:EEBA
 * @implements B4F2:1350:000C:3803
 * @implements B4F2:135C:0007:E7C3
 * @implements B4F2:135F:0004:4EB2
 * @implements B4F2:1363:000C:3983
 * @implements B4F2:136F:0005:107C
 * @implements B4F2:1372:0002:B5BA
 * @implements B4F2:1374:000C:B6A3
 * @implements B4F2:1380:000C:3A83
 * @implements B4F2:138C:0005:02FC
 * @implements B4F2:138F:0002:A73A
 * @implements B4F2:1391:000C:3A03
 * @implements B4F2:139D:0005:3B7C
 * @implements B4F2:13A0:0002:9EBA
 * @implements B4F2:13A2:0002:C03A
 * @implements B4F2:13A4:0006:6B66
 * @implements B4F2:13AA:0003:9B9A
 * @implements B4F2:13AD:0005:8BCF
 *
 * Called From: B4F2:08A7:000F:B3B1
 * Called From: B4F2:08F4:002A:5752
 * Called From: B4F2:08F4:0028:5BF2
 * Called From: B4F2:090B:000F:E61A
 * Called From: B4F2:097D:0037:8E4A
 * Called From: B4F2:0A09:000B:51A5
 * Called From: B4F2:0A09:0005:3DBD
 * Called From: B4F2:0B97:0051:E4E8
 * Called From: B4F2:0B97:000D:1EAE
 * Called From: B4F2:1094:0022:D216
 * Called From: B4F2:1094:000C:2AAD
 * Called From: B4F2:125D:001A:72DC
 */
void emu_GUI_String_Get_ByIndex()
{
l__1303:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x4);
	emu_push(emu_si);
	emu_si = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_bx = emu_si;
	emu_subw(&emu_bx, 0xFFF2);
	emu_cmpw(&emu_bx, 0xD);
	if (emu_bx <= 0xD) goto l__131A;
	goto l__13A2;
l__131A:
	emu_shlw(&emu_bx, 0x1);

	/* Jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_cs, emu_bx, 0x13B2);
	switch (emu_ip) {
		case 0x1321: goto l__1321;
		case 0x1350: goto l__1350;
		case 0x1363: goto l__1363;
		case 0x1374: goto l__1374;
		case 0x1380: goto l__1380;
		case 0x1391: goto l__1391;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0xB4F2; emu_last_ip = 0x131C; emu_last_length = 0x0007; emu_last_crc = 0xE192;
			emu_call();
			return;
	}
l__1321:
	emu_ax = emu_si;
	emu_negw(&emu_ax, emu_ax);
	emu_dx = 0x33;
	emu_imuluw(&emu_ax, emu_dx);
	emu_addw(&emu_ax, 0x8081);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ds;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x0);
	emu_ax = (int8)emu_al;
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax == 0) {
		emu_get_memory16(emu_ss, emu_bp, -0x2) = 0x0;
		emu_get_memory16(emu_ss, emu_bp, -0x4) = 0x0;
	}
l__1348:
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x2);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x4);
l__134E:
	goto l__13AD;
l__1350:
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x41C2), 0x0);
	if (emu_get_memory16(emu_ds, 0x00, 0x41C2) == 0x0) goto l__135C;
	emu_ax = 0x69;
	goto l__135F;
l__135C:
	emu_ax = 0x6A;
l__135F:
	emu_si = emu_ax;
	goto l__13A4;
l__1363:
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x41C4), 0x0);
	if (emu_get_memory16(emu_ds, 0x00, 0x41C4) == 0x0) goto l__136F;
	emu_ax = 0x69;
	goto l__1372;
l__136F:
	emu_ax = 0x6A;
l__1372:
	goto l__135F;
l__1374:
	emu_bx = emu_get_memory16(emu_ds, 0x00, 0x3900);
	emu_shlw(&emu_bx, 0x1);
	emu_si = emu_get_memory16(emu_ds, emu_bx, 0x2AAD);
	goto l__13A4;
l__1380:
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x41C8), 0x0);
	if (emu_get_memory16(emu_ds, 0x00, 0x41C8) == 0x0) goto l__138C;
	emu_ax = 0x69;
	goto l__138F;
l__138C:
	emu_ax = 0x6A;
l__138F:
	goto l__135F;
l__1391:
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x41CA), 0x0);
	if (emu_get_memory16(emu_ds, 0x00, 0x41CA) == 0x0) goto l__139D;
	emu_ax = 0x69;
	goto l__13A0;
l__139D:
	emu_ax = 0x6A;
l__13A0:
	goto l__135F;
l__13A2:
	goto l__13A4;
l__13A4:
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x13AA); emu_cs = 0x0FCB; emu_String_Get_ByIndex();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { overlay(0x34F2, 1); }
l__13AA:
	emu_pop(&emu_cx);
	goto l__134E;
l__13AD:
	emu_pop(&emu_si);
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B4F2_13CE_0013_65D7()
 *
 * @name f__B4F2_13CE_0013_65D7
 * @implements B4F2:13CE:0013:65D7 ()
 * @implements B4F2:13E1:0060:F8EA
 * @implements B4F2:1441:0020:1786
 * @implements B4F2:1444:001D:9F24
 * @implements B4F2:1461:000F:9CB8
 * @implements B4F2:1470:0006:F7CE
 *
 * Called From: B4F2:0C47:0010:B81A
 * Called From: B4F2:0CE4:0010:BC84
 * Called From: B4F2:0D96:0010:3CB0
 * Called From: B4F2:0DDB:0010:B907
 */
void f__B4F2_13CE_0013_65D7()
{
l__13CE:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x4);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_ax != 0) goto l__13E1;
	goto l__1470;
l__13E1:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_si = emu_get_memory16(emu_es, emu_bx, 0x1E);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_di = emu_get_memory16(emu_es, emu_bx, 0x20);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x22);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x24);
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_bx = emu_get_memory16(emu_es, emu_bx, 0x1C);
	emu_cl = 0x4;
	emu_shlw(&emu_bx, emu_cl);
	emu_ax = emu_get_memory16(emu_ds, emu_bx, 0x4062);
	emu_cl = 0x3;
	emu_shlw(&emu_ax, emu_cl);
	emu_addw(&emu_si, emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_bx = emu_get_memory16(emu_es, emu_bx, 0x1C);
	emu_cl = 0x4;
	emu_shlw(&emu_bx, emu_cl);
	emu_addw(&emu_di, emu_get_memory16(emu_ds, emu_bx, 0x4064));
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x6C91), 0x0);
	if (emu_get_memory16(emu_ds, 0x00, 0x6C91) != 0x0) goto l__1444;
	emu_ax = emu_di;
	emu_addw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_ax);
	emu_ax = emu_si;
	emu_addw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_ax);
	emu_push(emu_di);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x1441); emu_cs = 0x2B6C; f__2B6C_0197_00CE_4D32();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { overlay(0x34F2, 1); }
l__1441:
	emu_addw(&emu_sp, 0x8);
l__1444:
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_ax = emu_di;
	emu_addw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x4));
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
	emu_push(0x1461);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A60D31: emu_GUI_DrawFilledRectangle(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0xB4F2; emu_last_ip = 0x145C; emu_last_length = 0x001D; emu_last_crc = 0x9F24;
			emu_call();
			return;
	}
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { overlay(0x34F2, 1); }
l__1461:
	emu_addw(&emu_sp, 0xA);
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x6C91), 0x0);
	if (emu_get_memory16(emu_ds, 0x00, 0x6C91) == 0x0) {
		emu_push(emu_cs); emu_push(0x1470); emu_cs = 0x2B6C; f__2B6C_0292_0028_3AD7();
		/* Check if this overlay should be reloaded */
		if (emu_cs == 0x34F2) { overlay(0x34F2, 1); }
	}
l__1470:
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

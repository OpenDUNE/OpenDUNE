/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__B4CD_0D74_0020_7CC1()
 *
 * @name f__B4CD_0D74_0020_7CC1
 * @implements B4CD:0D74:0020:7CC1 ()
 * @implements B4CD:0D91:0003:5D9C
 * @implements B4CD:0D94:0008:DB39
 * @implements B4CD:0D9C:008E:1E0C
 * @implements B4CD:0DD5:0055:82D9
 * @implements B4CD:0DD8:0052:A721
 * @implements B4CD:0E0B:001F:9678
 * @implements B4CD:0E2A:000D:60E7
 * @implements B4CD:0E37:0014:9D6D
 * @implements B4CD:0E4B:0002:C03A
 * @implements B4CD:0E4D:0005:7A4B
 * @implements B4CD:0E52:0013:7F23
 * @implements B4CD:0E65:0012:019A
 * @implements B4CD:0E68:000F:A3BC
 * @implements B4CD:0E77:0009:22AF
 * @implements B4CD:0E80:000C:89C5
 * @implements B4CD:0E8C:0006:15FB
 * @implements B4CD:0E92:001A:BEC5
 * @implements B4CD:0EAC:0008:ADED
 * @implements B4CD:0EB4:000E:1CF6
 * @implements B4CD:0EC2:0018:A5DB
 * @implements B4CD:0ECC:000E:8D40
 * @implements B4CD:0EDA:000F:4404
 * @implements B4CD:0EE9:000C:AA07
 * @implements B4CD:0EF5:0005:F131
 * @implements B4CD:0EFA:001A:BEC5
 * @implements B4CD:0F14:0008:ADED
 * @implements B4CD:0F1C:000E:1CF6
 * @implements B4CD:0F2A:0015:5591
 * @implements B4CD:0F34:000B:8C55
 * @implements B4CD:0F3F:0010:7BD6
 * @implements B4CD:0F4F:0002:C03A
 * @implements B4CD:0F51:000F:9BBA
 * @implements B4CD:0F60:000D:976C
 * @implements B4CD:0F6D:0008:D74D
 * @implements B4CD:0F75:000B:41A4
 * @implements B4CD:0F76:000A:61AF
 * @implements B4CD:0F80:0005:63B7
 * @implements B4CD:0F82:0003:6223
 * @implements B4CD:0F85:0006:F7CE
 *
 * Called From: 34CD:0070:0005:0000
 */
void f__B4CD_0D74_0020_7CC1()
{
l__0D74:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x8);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = 0x0;
	emu_get_memory16(emu_ss, emu_bp, -0x8) = 0x0;
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x3A38));
	if (emu_ax == emu_get_memory16(emu_ds, 0x00, 0x3A38)) goto l__0D94;
	emu_xorw(&emu_ax, emu_ax);
l__0D91:
	goto l__0F85;
l__0D94:
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x0D9C); emu_cs = 0x10BE; emu_House_Get_ByIndex();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { overlay(0x34CD, 1); }
l__0D9C:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_xorw(&emu_di, emu_di);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0x4), 0x10);
	if ((emu_get_memory16(emu_es, emu_bx, 0x4) & 0x10) == 0) goto l__0DD8;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x10);
	emu_dx = emu_get_memory16(emu_es, emu_bx, 0xE);
	emu_andw(&emu_dx, 0x0);
	emu_andw(&emu_ax, 0x4);
	emu_orw(&emu_dx, emu_ax);
	if (emu_dx != 0) {
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
		emu_ax = emu_get_memory16(emu_es, emu_bx, 0x18);
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
		emu_cmpw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x16));
		if ((int16)emu_ax <= (int16)emu_get_memory16(emu_es, emu_bx, 0x16)) goto l__0DD8;
	}
l__0DD5:
	emu_di = 0x2;
l__0DD8:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0x4), 0x10);
	if ((emu_get_memory16(emu_es, emu_bx, 0x4) & 0x10) == 0) {
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
		emu_ax = emu_get_memory16(emu_es, emu_bx, 0x10);
		emu_dx = emu_get_memory16(emu_es, emu_bx, 0xE);
		emu_andw(&emu_dx, 0x0);
		emu_andw(&emu_ax, 0x4);
		emu_orw(&emu_dx, emu_ax);
		if (emu_dx != 0) {
			emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
			emu_ax = emu_get_memory16(emu_es, emu_bx, 0x18);
			emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
			emu_cmpw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x16));
			if ((int16)emu_ax <= (int16)emu_get_memory16(emu_es, emu_bx, 0x16)) {
				emu_di = 0x1;
			}
		}
	}
l__0E0B:
	emu_orw(&emu_di, emu_di);
	if (emu_di == 0) goto l__0E68;
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6CE1));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6CDF));
	emu_ax = 0x3;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0E2A); emu_cs = 0x252E; emu_Memory_GetBlock1();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { overlay(0x34CD, 1); }
l__0E2A:
	emu_pop(&emu_cx);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x2574;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0E37); emu_cs = 0x352A; overlay(0x352A, 0); emu_WSA_LoadFile();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { overlay(0x34CD, 1); }
l__0E37:
	emu_addw(&emu_sp, 0x12);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_ax;
	emu_get_memory16(emu_ds, 0x00, 0x38C4) = 0x1;
	emu_push(emu_cs); emu_push(0x0E4B); emu_cs = 0x2B6C; f__2B6C_0137_0020_C73F();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { overlay(0x34CD, 1); }
l__0E4B:
	goto l__0E4D;
l__0E4D:
	emu_push(emu_cs); emu_push(0x0E52); emu_cs = 0x1DD7; emu_Driver_Voice_01EB();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { overlay(0x34CD, 1); }
l__0E52:
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax != 0) goto l__0E4D;
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_ax = 0x3E;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0E65); emu_cs = 0x3483; overlay(0x3483, 0); f__B483_0000_0019_F96A();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { overlay(0x34CD, 1); }
l__0E65:
	emu_addw(&emu_sp, 0x6);
l__0E68:
	emu_ax = emu_di;
	emu_cmpw(&emu_ax, 0x1);
	if (emu_ax == 0x1) goto l__0E77;
	emu_cmpw(&emu_ax, 0x2);
	if (emu_ax == 0x2) goto l__0EDA;
	goto l__0F4F;
l__0E77:
	emu_ax = 0x1C;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0E80); emu_cs = 0x3483; overlay(0x3483, 0); emu_Unknown_B483_0363();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { overlay(0x34CD, 1); }
l__0E80:
	emu_pop(&emu_cx);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs); emu_push(0x0E8C); emu_cs = 0x352A; overlay(0x352A, 0); emu_WSA_GetFrameCount();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { overlay(0x34CD, 1); }
l__0E8C:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_si = emu_ax;
	goto l__0ECC;
l__0E92:
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = 0x88;
	emu_push(emu_ax);
	emu_ax = 0x100;
	emu_push(emu_ax);
	emu_push(emu_si);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs); emu_push(0x0EAC); emu_cs = 0x352A; overlay(0x352A, 0); emu_WSA_DisplayFrame();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { overlay(0x34CD, 1); }
l__0EAC:
	emu_addw(&emu_sp, 0xE);
	emu_push(emu_cs); emu_push(0x0EB4); emu_cs = 0x0642; emu_GUI_PaletteAnimate();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { overlay(0x34CD, 1); }
l__0EB4:
	emu_get_memory16(emu_ds, 0x00, 0x76B6) = 0x0;
	emu_get_memory16(emu_ds, 0x00, 0x76B4) = 0x3;
	goto l__0EC2;
l__0EC2:
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x76B4);
	emu_orw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x76B6));
	if (emu_ax != 0) goto l__0EC2;
	emu_decw(&emu_si);
l__0ECC:
	emu_orw(&emu_si, emu_si);
	if (!(emu_flags.sf != emu_flags.of)) goto l__0E92;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_orw(&emu_get_memory16(emu_es, emu_bx, 0x4), 0x10);
	goto l__0F51;
l__0EDA:
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_ax = 0x3E;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0EE9); emu_cs = 0x3483; overlay(0x3483, 0); f__B483_0000_0019_F96A();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { overlay(0x34CD, 1); }
l__0EE9:
	emu_addw(&emu_sp, 0x6);
	emu_ax = 0x1D;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0EF5); emu_cs = 0x3483; overlay(0x3483, 0); emu_Unknown_B483_0363();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { overlay(0x34CD, 1); }
l__0EF5:
	emu_pop(&emu_cx);
	emu_xorw(&emu_si, emu_si);
	goto l__0F34;
l__0EFA:
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = 0x88;
	emu_push(emu_ax);
	emu_ax = 0x100;
	emu_push(emu_ax);
	emu_push(emu_si);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs); emu_push(0x0F14); emu_cs = 0x352A; overlay(0x352A, 0); emu_WSA_DisplayFrame();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { overlay(0x34CD, 1); }
l__0F14:
	emu_addw(&emu_sp, 0xE);
	emu_push(emu_cs); emu_push(0x0F1C); emu_cs = 0x0642; emu_GUI_PaletteAnimate();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { overlay(0x34CD, 1); }
l__0F1C:
	emu_get_memory16(emu_ds, 0x00, 0x76B6) = 0x0;
	emu_get_memory16(emu_ds, 0x00, 0x76B4) = 0x3;
	goto l__0F2A;
l__0F2A:
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x76B4);
	emu_orw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x76B6));
	if (emu_ax != 0) goto l__0F2A;
	emu_incw(&emu_si);
l__0F34:
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs); emu_push(0x0F3F); emu_cs = 0x352A; overlay(0x352A, 0); emu_WSA_GetFrameCount();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { overlay(0x34CD, 1); }
l__0F3F:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_cmpw(&emu_ax, emu_si);
	if ((int16)emu_ax > (int16)emu_si) goto l__0EFA;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_andw(&emu_get_memory16(emu_es, emu_bx, 0x4), 0xFFEF);
	goto l__0F51;
l__0F4F:
	goto l__0F51;
l__0F51:
	emu_orw(&emu_di, emu_di);
	if (emu_di == 0) goto l__0F76;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs); emu_push(0x0F60); emu_cs = 0x352A; overlay(0x352A, 0); emu_WSA_Unload();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { overlay(0x34CD, 1); }
l__0F60:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ds, 0x00, 0x3A12) = 0x1;
	emu_push(emu_cs); emu_push(0x0F6D); emu_cs = 0x2B6C; f__2B6C_0169_001E_6939();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { overlay(0x34CD, 1); }
l__0F6D:
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0F75); emu_cs = 0x07D4; emu_Unknown_07D4_159A();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { overlay(0x34CD, 1); }
l__0F75:
	emu_pop(&emu_cx);
l__0F76:
	emu_cmpw(&emu_di, 0x1);
	if (emu_di != 0x1) goto l__0F80;
	emu_ax = 0x1;
	goto l__0F82;
l__0F80:
	emu_xorw(&emu_ax, emu_ax);
l__0F82:
	goto l__0D91;
l__0F85:
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
 * Decompiled function f__B4CD_1019_0011_089E()
 *
 * @name f__B4CD_1019_0011_089E
 * @implements B4CD:1019:0011:089E ()
 * @implements B4CD:102A:0009:C1E1
 * @implements B4CD:1033:000D:8FA0
 * @implements B4CD:1040:000E:8921
 * @implements B4CD:104E:0011:EE01
 * @implements B4CD:105F:000F:A93B
 * @implements B4CD:106E:000D:792A
 * @implements B4CD:1077:0004:EAB9
 * @implements B4CD:1079:0002:C2BA
 * @implements B4CD:107B:0005:A97A
 * @implements B4CD:1080:0006:F7CE
 *
 * Called From: 34CD:0089:0005:0000
 */
void f__B4CD_1019_0011_089E()
{
l__1019:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x2);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_si = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x102A); emu_cs = 0x0F3F; emu_Tile_GetPackX();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { overlay(0x34CD, 1); }
l__102A:
	emu_pop(&emu_cx);
	emu_di = emu_ax;
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x1033); emu_cs = 0x0F3F; emu_Tile_GetPackY();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { overlay(0x34CD, 1); }
l__1033:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ax;
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x39FC));
	emu_push(emu_cs); emu_push(0x1040); emu_cs = 0x0F3F; emu_Tile_GetPackX();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { overlay(0x34CD, 1); }
l__1040:
	emu_pop(&emu_cx);
	emu_cmpw(&emu_ax, emu_di);
	if (emu_ax > emu_di) goto l__1077;
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x39FC));
	emu_push(emu_cs); emu_push(0x104E); emu_cs = 0x0F3F; emu_Tile_GetPackX();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { overlay(0x34CD, 1); }
l__104E:
	emu_pop(&emu_cx);
	emu_addw(&emu_ax, 0xF);
	emu_cmpw(&emu_ax, emu_di);
	if (emu_ax <= emu_di) goto l__1077;
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x39FC));
	emu_push(emu_cs); emu_push(0x105F); emu_cs = 0x0F3F; emu_Tile_GetPackY();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { overlay(0x34CD, 1); }
l__105F:
	emu_pop(&emu_cx);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_ax > emu_get_memory16(emu_ss, emu_bp, -0x2)) goto l__1077;
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x39FC));
	emu_push(emu_cs); emu_push(0x106E); emu_cs = 0x0F3F; emu_Tile_GetPackY();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { overlay(0x34CD, 1); }
l__106E:
	emu_pop(&emu_cx);
	emu_addw(&emu_ax, 0xA);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_ax > emu_get_memory16(emu_ss, emu_bp, -0x2)) goto l__107B;
l__1077:
	emu_xorw(&emu_ax, emu_ax);
l__1079:
	goto l__1080;
l__107B:
	emu_ax = 0x1;
	goto l__1079;
l__1080:
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
 * Decompiled function f__B4CD_1269_0019_A3E5()
 *
 * @name f__B4CD_1269_0019_A3E5
 * @implements B4CD:1269:0019:A3E5 ()
 * @implements B4CD:127D:0005:DC8B
 * @implements B4CD:127F:0003:DD1F
 * @implements B4CD:1282:0041:6812
 * @implements B4CD:12C1:0002:9D3A
 * @implements B4CD:12C3:0006:BB3C
 * @implements B4CD:12C9:0009:C1E1
 * @implements B4CD:12D2:001B:74F7
 * @implements B4CD:12EB:0002:883A
 * @implements B4CD:12ED:0017:38A6
 * @implements B4CD:1304:0009:9EC8
 * @implements B4CD:130D:0008:0671
 * @implements B4CD:1315:0008:9A3D
 * @implements B4CD:131D:0030:3072
 * @implements B4CD:1348:0005:7FBE
 * @implements B4CD:134D:000A:D12D
 * @implements B4CD:1357:000A:7128
 * @implements B4CD:1361:000C:8CAD
 * @implements B4CD:136D:000C:71AB
 * @implements B4CD:1379:0008:92A7
 * @implements B4CD:1381:0006:F7CE
 *
 * Called From: 34CD:00CA:0005:0000
 * Called From: B4CD:04A5:0008:A0B3
 * Called From: B4CD:08CC:0013:109B
 */
void f__B4CD_1269_0019_A3E5()
{
l__1269:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x8);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_si = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x3A38));
	if (emu_ax == emu_get_memory16(emu_ds, 0x00, 0x3A38)) goto l__1282;
l__127D:
	emu_xorw(&emu_ax, emu_ax);
l__127F:
	goto l__1381;
l__1282:
	emu_ax = emu_si;
	emu_cl = 0x2;
	emu_shlw(&emu_ax, emu_cl);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x39EA));
	emu_addw(&emu_bx, emu_ax);
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x1);
	emu_shrw(&emu_ax, 0x1);
	emu_andw(&emu_ax, 0x7F);
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_ax = emu_si;
	emu_cl = 0x2;
	emu_shlw(&emu_ax, emu_cl);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x39EA));
	emu_addw(&emu_bx, emu_ax);
	emu_testb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0x8);
	if ((emu_get_memory8(emu_es, emu_bx, 0x2) & 0x8) == 0) goto l__12C3;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x39F2));
	if (emu_ax <= emu_get_memory16(emu_ds, 0x00, 0x39F2)) {
		emu_ax = emu_get_memory16(emu_ds, 0x00, 0x39F2);
		emu_subw(&emu_ax, 0x10);
		emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x4));
		if (emu_ax <= emu_get_memory16(emu_ss, emu_bp, -0x4)) goto l__12C3;
	}
l__12C1:
	goto l__127D;
l__12C3:
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x12C9); emu_cs = 0x0F3F; emu_Tile_GetPackX();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { overlay(0x34CD, 1); }
l__12C9:
	emu_pop(&emu_cx);
	emu_di = emu_ax;
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x12D2); emu_cs = 0x0F3F; emu_Tile_GetPackY();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { overlay(0x34CD, 1); }
l__12D2:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ax;
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x0);
	if ((int16)emu_get_memory16(emu_ss, emu_bp, -0x2) >= (int16)0x0) {
		emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x40);
		if ((int16)emu_get_memory16(emu_ss, emu_bp, -0x2) < (int16)0x40) {
			emu_orw(&emu_di, emu_di);
			if (!(emu_flags.sf != emu_flags.of)) {
				emu_cmpw(&emu_di, 0x40);
				if ((int16)emu_di < (int16)0x40) goto l__12ED;
			}
		}
	}
l__12EB:
	goto l__127D;
l__12ED:
	emu_ax = emu_si;
	emu_cl = 0x2;
	emu_shlw(&emu_ax, emu_cl);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x39EA));
	emu_addw(&emu_bx, emu_ax);
	emu_orb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0x8);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x1304); emu_cs = 0x07D4; emu_Unknown_07D4_02F8();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { overlay(0x34CD, 1); }
l__1304:
	emu_pop(&emu_cx);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_si);
	emu_push(emu_cs);
	emu_push(0x130D); emu_Unit_Get_ByPackedTile();
l__130D:
	emu_pop(&emu_cx);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1315); emu_cs = 0x1423; f__1423_08CD_0012_0004();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { overlay(0x34CD, 1); }
l__1315:
	emu_addw(&emu_sp, 0x6);
	emu_push(emu_si);
	emu_push(emu_cs);
	emu_push(0x131D); emu_Structure_Get_ByPackedTile();
l__131D:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x8);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x6));
	if (emu_ax != 0) {
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
		emu_al = 0x1;
		emu_cl = emu_get_memory8(emu_ss, emu_bp,  0x8);
		emu_shlb(&emu_al, emu_cl);
		emu_orb(&emu_get_memory8(emu_es, emu_bx, 0x9), emu_al);
		emu_cmpw(&emu_get_memory16(emu_ss, emu_bp,  0x8), 0x1);
		if (emu_get_memory16(emu_ss, emu_bp,  0x8) == 0x1) {
			emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
			emu_orb(&emu_get_memory8(emu_es, emu_bx, 0x9), 0x8);
		}
	}
l__1348:
	emu_push(emu_si);
	emu_push(emu_cs);
	emu_push(0x134D); f__B4CD_1387_002A_D695();
l__134D:
	emu_pop(&emu_cx);
	emu_ax = emu_si;
	emu_incw(&emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x1357); f__B4CD_1387_002A_D695();
l__1357:
	emu_pop(&emu_cx);
	emu_ax = emu_si;
	emu_decw(&emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x1361); f__B4CD_1387_002A_D695();
l__1361:
	emu_pop(&emu_cx);
	emu_ax = emu_si;
	emu_addw(&emu_ax, 0xFFC0);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x136D); f__B4CD_1387_002A_D695();
l__136D:
	emu_pop(&emu_cx);
	emu_ax = emu_si;
	emu_addw(&emu_ax, 0x40);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x1379); f__B4CD_1387_002A_D695();
l__1379:
	emu_pop(&emu_cx);
	emu_ax = 0x1;
	goto l__127F;
l__1381:
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
 * Decompiled function f__B4CD_1387_002A_D695()
 *
 * @name f__B4CD_1387_002A_D695
 * @implements B4CD:1387:002A:D695 ()
 * @implements B4CD:13B1:0031:0880
 * @implements B4CD:13E2:0009:91DC
 * @implements B4CD:13EB:0016:BAD0
 * @implements B4CD:1401:000C:A8AF
 * @implements B4CD:140D:0028:D1A8
 * @implements B4CD:1429:000C:5200
 * @implements B4CD:1435:0041:6709
 * @implements B4CD:145B:001B:2DF2
 * @implements B4CD:145E:0018:DC12
 * @implements B4CD:1464:0012:772A
 * @implements B4CD:1476:0008:0671
 * @implements B4CD:147E:0043:D5C5
 * @implements B4CD:1481:0040:C694
 * @implements B4CD:149A:0027:F865
 * @implements B4CD:14C1:0009:B383
 * @implements B4CD:14C4:0006:F7CE
 *
 * Called From: B4CD:134A:0005:7FBE
 * Called From: B4CD:134A:0030:3072
 * Called From: B4CD:1354:000A:D12D
 * Called From: B4CD:135E:000A:7128
 * Called From: B4CD:136A:000C:8CAD
 * Called From: B4CD:1376:000C:71AB
 */
void f__B4CD_1387_002A_D695()
{
l__1387:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x8);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_di = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_andw(&emu_di, 0xFFF);
	emu_xorw(&emu_si, emu_si);
	emu_ax = emu_di;
	emu_cl = 0x2;
	emu_shlw(&emu_ax, emu_cl);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x39EA));
	emu_addw(&emu_bx, emu_ax);
	emu_testb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0x8);
	if ((emu_get_memory8(emu_es, emu_bx, 0x2) & 0x8) != 0) goto l__13B1;
	emu_si = 0xF;
	goto l__1464;
l__13B1:
	emu_ax = emu_di;
	emu_cl = 0x2;
	emu_shlw(&emu_ax, emu_cl);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x39EA));
	emu_addw(&emu_bx, emu_ax);
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x1);
	emu_shrw(&emu_ax, 0x1);
	emu_andw(&emu_ax, 0x7F);
	emu_si = emu_ax;
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x38BC), 0x0);
	if (emu_get_memory16(emu_ds, 0x00, 0x38BC) != 0x0) goto l__13E2;
	emu_cmpw(&emu_si, emu_get_memory16(emu_ds, 0x00, 0x39F2));
	if (emu_si > emu_get_memory16(emu_ds, 0x00, 0x39F2)) { /* Unresolved jump */ emu_ip = 0x13DF; emu_last_cs = 0xB4CD; emu_last_ip = 0x13D3; emu_last_length = 0x0031; emu_last_crc = 0x0880; emu_call(); return; }
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x39F2);
	emu_subw(&emu_ax, 0xF);
	emu_cmpw(&emu_ax, emu_si);
	if (emu_ax <= emu_si) goto l__13E2;
	goto l__14C4;
l__13E2:
	emu_xorw(&emu_si, emu_si);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = 0x0;
	goto l__145E;
l__13EB:
	emu_bx = emu_get_memory16(emu_ss, emu_bp, -0x2);
	emu_shlw(&emu_bx, 0x1);
	emu_ax = emu_di;
	emu_addw(&emu_ax, emu_get_memory16(emu_ds, emu_bx, 0x2566));
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x1401); emu_cs = 0x0F3F; emu_Tile_GetPackX();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { overlay(0x34CD, 1); }
l__1401:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_ax;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x140D); emu_cs = 0x0F3F; emu_Tile_GetPackY();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { overlay(0x34CD, 1); }
l__140D:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_ax;
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x0);
	if ((int16)emu_get_memory16(emu_ss, emu_bp, -0x6) >= (int16)0x0) {
		emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x40);
		if ((int16)emu_get_memory16(emu_ss, emu_bp, -0x6) < (int16)0x40) {
			emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x0);
			if ((int16)emu_get_memory16(emu_ss, emu_bp, -0x8) >= (int16)0x0) {
				emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x40);
				if ((int16)emu_get_memory16(emu_ss, emu_bp, -0x8) < (int16)0x40) goto l__1435;
			}
		}
	}
l__1429:
	emu_ax = 0x1;
	emu_cl = emu_get_memory8(emu_ss, emu_bp, -0x2);
	emu_shlw(&emu_ax, emu_cl);
	emu_orw(&emu_si, emu_ax);
	goto l__145B;
l__1435:
	emu_bx = emu_get_memory16(emu_ss, emu_bp, -0x2);
	emu_shlw(&emu_bx, 0x1);
	emu_ax = emu_di;
	emu_addw(&emu_ax, emu_get_memory16(emu_ds, emu_bx, 0x2566));
	emu_cl = 0x2;
	emu_shlw(&emu_ax, emu_cl);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x39EA));
	emu_addw(&emu_bx, emu_ax);
	emu_testb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0x8);
	if ((emu_get_memory8(emu_es, emu_bx, 0x2) & 0x8) == 0) {
		emu_ax = 0x1;
		emu_cl = emu_get_memory8(emu_ss, emu_bp, -0x2);
		emu_shlw(&emu_ax, emu_cl);
		emu_orw(&emu_si, emu_ax);
	}
l__145B:
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x2));
l__145E:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x4);
	if ((int16)emu_get_memory16(emu_ss, emu_bp, -0x2) < (int16)0x4) goto l__13EB;
l__1464:
	emu_orw(&emu_si, emu_si);
	if (emu_si == 0) goto l__149A;
	emu_cmpw(&emu_si, 0xF);
	if (emu_si == 0xF) goto l__1481;
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3A38));
	emu_push(emu_di);
	emu_push(emu_cs);
	emu_push(0x1476); emu_Unit_Get_ByPackedTile();
l__1476:
	emu_pop(&emu_cx);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x147E); emu_cs = 0x1423; f__1423_08CD_0012_0004();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { overlay(0x34CD, 1); }
l__147E:
	emu_addw(&emu_sp, 0x6);
l__1481:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x39EE));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0xE);
	emu_shlw(&emu_ax, 0x1);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x39EE));
	emu_addw(&emu_bx, emu_ax);
	emu_ax = emu_si;
	emu_shlw(&emu_ax, 0x1);
	emu_addw(&emu_bx, emu_ax);
	emu_si = emu_get_memory16(emu_es, emu_bx, 0x0);
l__149A:
	emu_ax = emu_si;
	emu_andw(&emu_ax, 0x7F);
	emu_dx = emu_di;
	emu_cl = 0x2;
	emu_shlw(&emu_dx, emu_cl);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x39EA));
	emu_addw(&emu_bx, emu_dx);
	emu_andb(&emu_get_memory8(emu_es, emu_bx, 0x1), 0x1);
	emu_shlb(&emu_al, 0x1);
	emu_orb(&emu_get_memory8(emu_es, emu_bx, 0x1), emu_al);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_di);
	emu_push(emu_cs);
	emu_push(0x14C1); emu_Map_Update();
l__14C1:
	emu_addw(&emu_sp, 0x6);
l__14C4:
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function emu_Window_WidgetClick_Create()
 *
 * @name emu_Window_WidgetClick_Create
 * @implements B4B8:0BC1:000C:1630 ()
 * @implements B4B8:0BCD:008A:FDF3
 * @implements B4B8:0C57:00A3:B72D
 * @implements B4B8:0CAA:0050:EFB0
 * @implements B4B8:0CFA:0024:2C86
 * @implements B4B8:0D05:0019:9B88
 * @implements B4B8:0D1E:0005:8BCF
 *
 * Called From: B4B8:1A37:000B:A1A7
 */
void emu_Window_WidgetClick_Create()
{
l__0BC1:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x4);
	emu_push(emu_si);
	emu_xorw(&emu_si, emu_si);
	goto l__0D05;
l__0BCD:
	emu_ax = emu_si;
	emu_dx = 0x18;
	emu_imuluw(&emu_ax, emu_dx);
	emu_dx = 0x2E6B;
	emu_bx = emu_ax;
	emu_es = emu_dx;
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x16));
	emu_ax = emu_si;
	emu_dx = 0x18;
	emu_imuluw(&emu_ax, emu_dx);
	emu_dx = 0x2E6B;
	emu_bx = emu_ax;
	emu_es = emu_dx;
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x14));
	emu_ax = emu_si;
	emu_dx = 0x18;
	emu_imuluw(&emu_ax, emu_dx);
	emu_dx = 0x2E6B;
	emu_bx = emu_ax;
	emu_es = emu_dx;
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_ax = emu_si;
	emu_dx = 0x18;
	emu_imuluw(&emu_ax, emu_dx);
	emu_dx = 0x2E6B;
	emu_bx = emu_ax;
	emu_es = emu_dx;
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xE));
	emu_ax = emu_si;
	emu_dx = 0x18;
	emu_imuluw(&emu_ax, emu_dx);
	emu_dx = 0x2E6B;
	emu_bx = emu_ax;
	emu_es = emu_dx;
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_ax = emu_si;
	emu_dx = 0x18;
	emu_imuluw(&emu_ax, emu_dx);
	emu_dx = 0x2E6B;
	emu_bx = emu_ax;
	emu_es = emu_dx;
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x6));
	emu_ax = emu_si;
	emu_dx = 0x18;
	emu_imuluw(&emu_ax, emu_dx);
	emu_dx = 0x2E6B;
	emu_bx = emu_ax;
	emu_es = emu_dx;
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_push(emu_cs);
	emu_push(0x0C57); emu_GUI_Widget_Allocate();
l__0C57:
	emu_addw(&emu_sp, 0xE);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_ax = emu_si;
	emu_dx = 0x18;
	emu_imuluw(&emu_ax, emu_dx);
	emu_dx = 0x2E6B;
	emu_bx = emu_ax;
	emu_es = emu_dx;
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0xA), 0x0);
	if ((int16)emu_get_memory16(emu_es, emu_bx, 0xA) < (int16)0x0) {
		emu_ax = emu_si;
		emu_dx = 0x18;
		emu_imuluw(&emu_ax, emu_dx);
		emu_dx = 0x2E6B;
		emu_bx = emu_ax;
		emu_es = emu_dx;
		emu_ax = emu_get_memory16(emu_es, emu_bx, 0x10);
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
		emu_get_memory16(emu_es, emu_bx, 0x22) = emu_ax;
		emu_ax = emu_si;
		emu_dx = 0x18;
		emu_imuluw(&emu_ax, emu_dx);
		emu_dx = 0x2E6B;
		emu_bx = emu_ax;
		emu_es = emu_dx;
		emu_ax = emu_get_memory16(emu_es, emu_bx, 0x12);
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
		emu_get_memory16(emu_es, emu_bx, 0x24) = emu_ax;
	}
l__0CAA:
	emu_ax = emu_si;
	emu_dx = 0x18;
	emu_imuluw(&emu_ax, emu_dx);
	emu_dx = 0x2E6B;
	emu_bx = emu_ax;
	emu_es = emu_dx;
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x4);
	emu_dx = emu_get_memory16(emu_es, emu_bx, 0x2);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_get_memory16(emu_es, emu_bx, 0x32) = emu_ax;
	emu_get_memory16(emu_es, emu_bx, 0x30) = emu_dx;
	emu_ax = emu_si;
	emu_dx = 0x18;
	emu_imuluw(&emu_ax, emu_dx);
	emu_dx = 0x2E6B;
	emu_bx = emu_ax;
	emu_es = emu_dx;
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x8);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_get_memory16(emu_es, emu_bx, 0xE) = emu_ax;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C28));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C26));
	emu_push(emu_cs); emu_push(0x0CFA); emu_cs = 0x348B; overlay(0x348B, 0); f__B48B_0242_0017_581D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { overlay(0x34B8, 1); }
l__0CFA:
	emu_addw(&emu_sp, 0x8);
	emu_get_memory16(emu_ds, 0x00, 0x3C28) = emu_dx;
	emu_get_memory16(emu_ds, 0x00, 0x3C26) = emu_ax;
	emu_incw(&emu_si);
l__0D05:
	emu_ax = emu_si;
	emu_dx = 0x18;
	emu_imuluw(&emu_ax, emu_dx);
	emu_dx = 0x2E6B;
	emu_bx = emu_ax;
	emu_es = emu_dx;
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x0), 0xFFFF);
	if (emu_get_memory16(emu_es, emu_bx, 0x0) == 0xFFFF) goto l__0D1E;
	goto l__0BCD;
l__0D1E:
	emu_pop(&emu_si);
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B4B8_116F_0013_15F7()
 *
 * @name f__B4B8_116F_0013_15F7
 * @implements B4B8:116F:0013:15F7 ()
 * @implements B4B8:1182:000B:03A1
 * @implements B4B8:118D:0009:F53F
 * @implements B4B8:1196:0009:C506
 * @implements B4B8:119F:0019:6C90
 * @implements B4B8:11B8:001C:8274
 * @implements B4B8:11D4:000E:4382
 * @implements B4B8:11E2:004D:9641
 * @implements B4B8:122F:0006:778E
 * @implements B4B8:1369:000C:2396
 * @implements B4B8:1375:000A:92AE
 * @implements B4B8:14DB:0039:83D0
 * @implements B4B8:1514:0006:F780
 * @implements B4B8:151A:0026:AD40
 * @implements B4B8:1540:000E:6379
 * @implements B4B8:154E:0026:6A7F
 * @implements B4B8:1574:000B:42FA
 * @implements B4B8:157F:000F:726A
 * @implements B4B8:158E:0023:DD60
 * @implements B4B8:15B1:005D:ED2E
 * @implements B4B8:160E:0009:7F8A
 * @implements B4B8:160F:0008:7FA9
 * @implements B4B8:1617:000B:714A
 * @implements B4B8:1622:0012:0C56
 * @implements B4B8:1628:000C:A39F
 * @implements B4B8:1634:000A:921D
 * @implements B4B8:16CE:0005:8BCF
 *
 * Called From: B4B8:17DE:0013:8AC6
 */
void f__B4B8_116F_0013_15F7()
{
l__116F:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0xA4);
	emu_push(emu_si);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_ax != 0) goto l__1182;
	goto l__16CE;
l__1182:
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x118D); emu_cs = 0x1FB5; emu_File_Exists();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { overlay(0x34B8, 1); }
l__118D:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax != 0) goto l__1196;
	goto l__16CE;
l__1196:
	emu_ax = 0x3;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x119F); emu_cs = 0x252E; emu_Screen_GetSegment_ByIndex_1();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { overlay(0x34B8, 1); }
l__119F:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_ax = 0x7D00;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x11B8); emu_cs = 0x01F7; emu_Tools_Memset();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { overlay(0x34B8, 1); }
l__11B8:
	emu_addw(&emu_sp, 0x8);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6CE1));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6CDF));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x11D4); emu_cs = 0x253D; emu_File_ReadBlockFile();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { overlay(0x34B8, 1); }
l__11D4:
	emu_addw(&emu_sp, 0xC);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x11E2); emu_cs = 0x01F7; emu_String_strlen();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { overlay(0x34B8, 1); }
l__11E2:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x2);
	emu_bx = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_addw(&emu_bx, emu_ax);
	emu_addw(&emu_bx, 0x1388);
	emu_get_memory16(emu_ss, emu_bp, -0x24) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x26) = emu_bx;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x24);
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x26);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_dx;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_get_memory8(emu_es, emu_bx, 0x0) = 0x0;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_ax = 0x7D0;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_ds);
	emu_ax = 0x2255;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x122F); emu_cs = 0x34FC; overlay(0x34FC, 0); emu_Ini_GetString();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { overlay(0x34B8, 1); }
l__122F:
	emu_addw(&emu_sp, 0x16);
	goto l__1369;
l__1369:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x0), 0x0);
	if (emu_get_memory8(emu_es, emu_bx, 0x0) == 0x0) goto l__1375;
	/* Unresolved jump */ emu_ip = 0x1235; emu_last_cs = 0xB4B8; emu_last_ip = 0x1372; emu_last_length = 0x000C; emu_last_crc = 0x2396; emu_call();
l__1375:
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x379C), 0x0);
	if (emu_get_memory16(emu_ds, 0x00, 0x379C) != 0x0) { /* Unresolved jump */ emu_ip = 0x137F; emu_last_cs = 0xB4B8; emu_last_ip = 0x137A; emu_last_length = 0x000A; emu_last_crc = 0x92AE; emu_call(); return; }
	goto l__14DB;
l__14DB:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x24);
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x26);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_dx;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_get_memory8(emu_es, emu_bx, 0x0) = 0x0;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_ax = 0x7D0;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_ds);
	emu_ax = 0x229A;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1514); emu_cs = 0x34FC; overlay(0x34FC, 0); emu_Ini_GetString();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { overlay(0x34B8, 1); }
l__1514:
	emu_addw(&emu_sp, 0x16);
	goto l__1628;
l__151A:
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_ax = 0x78;
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0xA4);
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0xA4);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_ds);
	emu_ax = 0x229A;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1540); emu_cs = 0x34FC; overlay(0x34FC, 0); emu_Ini_GetString();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { overlay(0x34B8, 1); }
l__1540:
	emu_addw(&emu_sp, 0x16);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0xA4);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x154E); emu_cs = 0x34FC; overlay(0x34FC, 0); emu_String_Trim();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { overlay(0x34B8, 1); }
l__154E:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x12);
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x10);
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x1C);
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0xE);
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x226B;
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0xA4);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1574); emu_cs = 0x01F7; emu_String_sscanf();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { overlay(0x34B8, 1); }
l__1574:
	emu_addw(&emu_sp, 0x18);
	emu_cmpw(&emu_ax, 0x4);
	if ((int16)emu_ax >= (int16)0x4) goto l__157F;
	goto l__1617;
l__157F:
	emu_get_memory16(emu_ss, emu_bp, -0x1E) = 0x0;
	emu_get_memory16(emu_ss, emu_bp, -0x20) = 0x0;
	emu_xorw(&emu_si, emu_si);
	goto l__160F;
l__158E:
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_ax = emu_si;
	emu_dx = 0x5A;
	emu_imuluw(&emu_ax, emu_dx);
	emu_dx = 0x2D07;
	emu_bx = emu_ax;
	emu_es = emu_dx;
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x4));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x2));
	emu_push(emu_cs); emu_push(0x15B1); emu_cs = 0x01F7; emu_String_strcasecmp();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { overlay(0x34B8, 1); }
l__15B1:
	emu_addw(&emu_sp, 0x8);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax != 0) goto l__160E;
	emu_ax = emu_si;
	emu_dx = 0x5A;
	emu_imuluw(&emu_ax, emu_dx);
	emu_dx = 0x2D07;
	emu_bx = emu_get_memory16(emu_ss, emu_bp, -0x1C);
	emu_es = emu_dx;
	emu_xchgw(&emu_ax, &emu_bx);
	emu_get_memory16(emu_es, emu_bx, 0x52) = emu_ax;
	emu_ax = emu_si;
	emu_dx = 0x5A;
	emu_imuluw(&emu_ax, emu_dx);
	emu_dx = 0x2D07;
	emu_bx = emu_get_memory16(emu_ss, emu_bp, -0x12);
	emu_es = emu_dx;
	emu_xchgw(&emu_ax, &emu_bx);
	emu_get_memory16(emu_es, emu_bx, 0x40) = emu_ax;
	emu_ax = emu_si;
	emu_dx = 0x5A;
	emu_imuluw(&emu_ax, emu_dx);
	emu_dx = 0x2D07;
	emu_bx = emu_get_memory16(emu_ss, emu_bp, -0x10);
	emu_es = emu_dx;
	emu_xchgw(&emu_ax, &emu_bx);
	emu_get_memory16(emu_es, emu_bx, 0x4E) = emu_ax;
	emu_ax = emu_si;
	emu_dx = 0x5A;
	emu_imuluw(&emu_ax, emu_dx);
	emu_dx = 0x2D07;
	emu_bx = emu_get_memory16(emu_ss, emu_bp, -0xE);
	emu_es = emu_dx;
	emu_xchgw(&emu_ax, &emu_bx);
	emu_get_memory16(emu_es, emu_bx, 0x50) = emu_ax;
	goto l__1617;
l__160E:
	emu_incw(&emu_si);
l__160F:
	emu_cmpw(&emu_si, 0x1B);
	if ((int16)emu_si >= (int16)0x1B) goto l__1617;
	goto l__158E;
l__1617:
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs); emu_push(0x1622); emu_cs = 0x01F7; emu_String_strlen();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { overlay(0x34B8, 1); }
l__1622:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_incw(&emu_ax);
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax);
l__1628:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x0), 0x0);
	if (emu_get_memory8(emu_es, emu_bx, 0x0) == 0x0) goto l__1634;
	goto l__151A;
l__1634:
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x379C), 0x0);
	if (emu_get_memory16(emu_ds, 0x00, 0x379C) != 0x0) { /* Unresolved jump */ emu_ip = 0x163E; emu_last_cs = 0xB4B8; emu_last_ip = 0x1639; emu_last_length = 0x000A; emu_last_crc = 0x921D; emu_call(); return; }
	goto l__16CE;
l__16CE:
	emu_pop(&emu_si);
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

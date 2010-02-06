/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__1587_0008_0012_30AE()
 *
 * @name f__1587_0008_0012_30AE
 * @implements 1587:0008:0012:30AE ()
 * @implements 1587:001A:000F:6FDC
 * @implements 1587:0029:0012:912E
 * @implements 1587:003B:001E:34C3
 * @implements 1587:0059:001D:BB2F
 * @implements 1587:0076:0030:84AA
 * @implements 1587:00A6:0020:1EA1
 * @implements 1587:00C6:000A:39D1
 * @implements 1587:00D0:0032:21EE
 * @implements 1587:0102:002D:9847
 * @implements 1587:012F:001A:412B
 * @implements 1587:0149:000A:DCE4
 * @implements 1587:0153:0010:4D09
 * @implements 1587:0163:0024:1952
 * @implements 1587:018F:001D:E85C
 * @implements 1587:01B4:0020:400C
 * @implements 1587:01D4:0009:A5C5
 * @implements 1587:01DD:0022:74BF
 * @implements 1587:01FF:002F:599A
 * @implements 1587:022E:004E:CAB0
 * @implements 1587:027C:0025:B913
 * @implements 1587:02C0:0002:DE3A
 * @implements 1587:02FE:001A:F478
 * @implements 1587:0318:001F:629B
 * @implements 1587:0337:0021:C368
 * @implements 1587:0358:0009:06A7
 * @implements 1587:0361:0005:6A3A
 * @implements 1587:0366:0006:F7CE
 *
 * Called From: B4B8:0D62:0025:9D20
 */
void f__1587_0008_0012_30AE()
{
l__0008:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x12);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_xorw(&emu_si, emu_si);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_cs); emu_push(0x001A); emu_cs = 0x252E; emu_Unknown_252E_0001();
l__001A:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_ax;
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_cs); emu_push(0x0029); emu_cs = 0x252E; emu_Unknown_252E_0001();
l__0029:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0xA) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0xC) = emu_ax;
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x003B); emu_cs = 0x34B1; overlay(0x34B1, 0); emu_ChunkFile_LoadFile();
l__003B:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_di = emu_ax;
	emu_xorw(&emu_ax, emu_ax);
	emu_dx = 0x4;
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x12);
	emu_push(emu_ax);
	emu_ax = 0x464E;
	emu_dx = 0x4953;
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x0059); emu_cs = 0x34B1; overlay(0x34B1, 0); f__B4B1_01CD_002A_CE8A();
l__0059:
	emu_addw(&emu_sp, 0xE);
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_al = emu_get_memory8(emu_ss, emu_bp, -0x11);
	emu_ax = (int8)emu_al;
	emu_push(emu_ax);
	emu_al = emu_get_memory8(emu_ss, emu_bp, -0x12);
	emu_ax = (int8)emu_al;
	emu_push(emu_ax);
	emu_ax = 0x353F;
	emu_es = emu_ax;

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_es, 0x00, 0x66DC);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_es, 0x00, 0x66DE);
	emu_push(0x0076);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A61158: f__22A6_1158_0069_1890(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x1587; emu_last_ip = 0x0071; emu_last_length = 0x001D; emu_last_crc = 0xBB2F;
			emu_call();
			return;
	}
l__0076:
	emu_addw(&emu_sp, 0x8);
	emu_al = emu_get_memory8(emu_ss, emu_bp, -0x11);
	emu_ax = (int8)emu_al;
	emu_push(emu_ax);
	emu_al = emu_get_memory8(emu_ss, emu_bp, -0x12);
	emu_ax = (int8)emu_al;
	emu_cl = 0x3;
	emu_shlw(&emu_ax, emu_cl);
	emu_dx = emu_ax;
	emu_pop(&emu_ax);
	emu_imuluw(&emu_ax, emu_dx);
	emu_push(emu_ax);
	emu_al = emu_get_memory8(emu_ss, emu_bp, -0xF);
	emu_ax = (int8)emu_al;
	emu_dx = emu_ax;
	emu_pop(&emu_ax);
	emu_imuluw(&emu_ax, emu_dx);
	emu_get_memory16(emu_ss, emu_bp, -0xE) = emu_ax;
	emu_ax = 0x5445;
	emu_dx = 0x5353;
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x00A6); emu_cs = 0x34B1; overlay(0x34B1, 0); f__B4B1_0098_002A_CE8A();
l__00A6:
	emu_addw(&emu_sp, 0x6);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_bx = emu_get_memory16(emu_ss, emu_bp,  0xA);
	emu_cl = 0x2;
	emu_shlw(&emu_bx, emu_cl);
	emu_ax = emu_get_memory16(emu_ds, emu_bx, 0x6CD5);
	emu_dx = emu_get_memory16(emu_ds, emu_bx, 0x6CD3);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_ax >= emu_get_memory16(emu_ss, emu_bp, -0x2)) goto l__00C6;
	/* Unresolved jump */ emu_ip = 0x035B; emu_last_cs = 0x1587; emu_last_ip = 0x00C3; emu_last_length = 0x0020; emu_last_crc = 0x1EA1; emu_call();
l__00C6:
	if (!(emu_flags.cf || emu_flags.zf)) goto l__00D0;
	emu_cmpw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0x4));
	if (emu_dx > emu_get_memory16(emu_ss, emu_bp, -0x4)) goto l__00D0;
	/* Unresolved jump */ emu_ip = 0x035B; emu_last_cs = 0x1587; emu_last_ip = 0x00CD; emu_last_length = 0x000A; emu_last_crc = 0x39D1; emu_call();
l__00D0:
	emu_bx = emu_get_memory16(emu_ss, emu_bp,  0xA);
	emu_shlw(&emu_bx, 0x1);
	emu_ax = emu_get_memory16(emu_ds, emu_bx, 0x6C93);
	emu_get_memory16(emu_ss, emu_bp, -0xA) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0xC) = 0x0;
	emu_bx = emu_get_memory16(emu_ss, emu_bp,  0xA);
	emu_cl = 0x2;
	emu_shlw(&emu_bx, emu_cl);
	emu_ax = emu_get_memory16(emu_ds, emu_bx, 0x6CD3);
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_addw(&emu_dx, 0x8);
	emu_subw(&emu_ax, emu_dx);
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_cs); emu_push(0x0102); emu_cs = 0x2B0E; emu_Tools_GetSmallestIP();
l__0102:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0xA) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0xC) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0xA);
	emu_get_memory16(emu_ss, emu_bp, -0xA) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0xC) = 0x0;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_ax = 0x5445;
	emu_dx = 0x5353;
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x012F); emu_cs = 0x34B1; overlay(0x34B1, 0); f__B4B1_01CD_002A_CE8A();
l__012F:
	emu_addw(&emu_sp, 0xE);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_cs); emu_push(0x0149); emu_cs = 0x253D; f__253D_023A_0038_2BAE();
l__0149:
	emu_addw(&emu_sp, 0x8);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0153); emu_cs = 0x01F7; emu_Tools_Divd2();
l__0153:
	emu_si = emu_ax;
	emu_bx = emu_si;
	emu_xorw(&emu_cx, emu_cx);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0xE);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_cs); emu_push(0x0163); emu_cs = 0x01F7; emu_Tools_MulCSIP_csip();
l__0163:
	emu_get_memory16(emu_ds, 0x00, 0x6116) = emu_dx;
	emu_get_memory16(emu_ds, 0x00, 0x6114) = emu_ax;
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x611E);
	emu_orw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x6120));
	if (emu_ax == 0) goto l__018F;
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x6122), 0x0);
	if (emu_get_memory16(emu_ds, 0x00, 0x6122) != 0x0) goto l__018F;
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6120));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x611E));
	emu_push(emu_cs); emu_push(0x0187); emu_cs = 0x23E1; f__23E1_01C2_0011_24E8();
	/* Unresolved jump */ emu_ip = 0x0187; emu_last_cs = 0x1587; emu_last_ip = 0x0187; emu_last_length = 0x0024; emu_last_crc = 0x1952; emu_call();
l__018F:
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x6118);
	emu_orw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x611A));
	if (emu_ax == 0) goto l__01B4;
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x611C), 0x0);
	if (emu_get_memory16(emu_ds, 0x00, 0x611C) != 0x0) goto l__01B4;
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x611A));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6118));
	emu_push(emu_cs); emu_push(0x01AC); emu_cs = 0x23E1; f__23E1_01C2_0011_24E8();
	/* Unresolved jump */ emu_ip = 0x01AC; emu_last_cs = 0x1587; emu_last_ip = 0x01AC; emu_last_length = 0x001D; emu_last_crc = 0xE85C; emu_call();
l__01B4:
	emu_xorw(&emu_ax, emu_ax);
	emu_bx = emu_get_memory16(emu_ss, emu_bp,  0xC);
	emu_cl = 0x2;
	emu_shlw(&emu_bx, emu_cl);
	emu_dx = emu_get_memory16(emu_ds, emu_bx, 0x6CD5);
	emu_bx = emu_get_memory16(emu_ds, emu_bx, 0x6CD3);
	emu_subw(&emu_bx, emu_get_memory16(emu_ds, 0x00, 0x6114));
	emu_sbbw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x6116));
	emu_cmpw(&emu_ax, emu_dx);
	if (emu_ax <= emu_dx) goto l__01D4;
	/* Unresolved jump */ emu_ip = 0x02C2; emu_last_cs = 0x1587; emu_last_ip = 0x01D1; emu_last_length = 0x0020; emu_last_crc = 0x400C; emu_call();
l__01D4:
	if (emu_flags.cf) goto l__01DD;
	emu_cmpw(&emu_si, emu_bx);
	if (emu_si < emu_bx) goto l__01DD;
	/* Unresolved jump */ emu_ip = 0x02C2; emu_last_cs = 0x1587; emu_last_ip = 0x01DA; emu_last_length = 0x0009; emu_last_crc = 0xA5C5; emu_call();
l__01DD:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x6);
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x8);
	emu_addw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x6114));
	emu_adcw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x6116));
	emu_get_memory16(emu_ds, 0x00, 0x6120) = emu_ax;
	emu_get_memory16(emu_ds, 0x00, 0x611E) = emu_dx;
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6120));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x611E));
	emu_push(emu_cs); emu_push(0x01FF); emu_cs = 0x2B0E; emu_Tools_GetSmallestIP();
l__01FF:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ds, 0x00, 0x6120) = emu_dx;
	emu_get_memory16(emu_ds, 0x00, 0x611E) = emu_ax;
	emu_ax = emu_si;
	emu_xorw(&emu_dx, emu_dx);
	emu_addw(&emu_ax, 0xF);
	emu_adcw(&emu_dx, 0x0);
	emu_andw(&emu_ax, 0xFFF0);
	emu_andw(&emu_dx, 0xFFFF);
	emu_addw(&emu_get_memory16(emu_ds, 0x00, 0x6114), emu_ax);
	emu_adcw(&emu_get_memory16(emu_ds, 0x00, 0x6116), emu_dx);
	emu_ax = 0x4C41;
	emu_dx = 0x5052;
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x022E); emu_cs = 0x34B1; overlay(0x34B1, 0); f__B4B1_0098_002A_CE8A();
l__022E:
	emu_addw(&emu_sp, 0x6);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_bx = emu_get_memory16(emu_ss, emu_bp,  0xC);
	emu_cl = 0x2;
	emu_shlw(&emu_bx, emu_cl);
	emu_ax = emu_get_memory16(emu_ds, emu_bx, 0x6CD5);
	emu_dx = emu_get_memory16(emu_ds, emu_bx, 0x6CD3);
	emu_subw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x6114));
	emu_sbbw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x6116));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_ax < emu_get_memory16(emu_ss, emu_bp, -0x2)) { /* Unresolved jump */ emu_ip = 0x02A1; emu_last_cs = 0x1587; emu_last_ip = 0x0251; emu_last_length = 0x004E; emu_last_crc = 0xCAB0; emu_call(); return; }
	if (emu_ax > emu_get_memory16(emu_ss, emu_bp, -0x2)) { /* Unresolved jump */ emu_ip = 0x025A; emu_last_cs = 0x1587; emu_last_ip = 0x0253; emu_last_length = 0x004E; emu_last_crc = 0xCAB0; emu_call(); return; }
	emu_cmpw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0x4));
	if (emu_dx <= emu_get_memory16(emu_ss, emu_bp, -0x4)) { /* Unresolved jump */ emu_ip = 0x02A1; emu_last_cs = 0x1587; emu_last_ip = 0x0258; emu_last_length = 0x004E; emu_last_crc = 0xCAB0; emu_call(); return; }
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x6);
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x8);
	emu_addw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x6114));
	emu_adcw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x6116));
	emu_get_memory16(emu_ds, 0x00, 0x611A) = emu_ax;
	emu_get_memory16(emu_ds, 0x00, 0x6118) = emu_dx;
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x611A));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6118));
	emu_push(emu_cs); emu_push(0x027C); emu_cs = 0x2B0E; emu_Tools_GetSmallestIP();
l__027C:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ds, 0x00, 0x611A) = emu_dx;
	emu_get_memory16(emu_ds, 0x00, 0x6118) = emu_ax;
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x611A);
	emu_get_memory16(emu_ds, 0x00, 0x611A) = emu_ax;
	emu_get_memory16(emu_ds, 0x00, 0x6118) = 0x0;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x2);
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_addw(&emu_get_memory16(emu_ds, 0x00, 0x6114), emu_dx);
	emu_adcw(&emu_get_memory16(emu_ds, 0x00, 0x6116), emu_ax);
	goto l__02C0;
l__02C0:
	goto l__02FE;
l__02FE:
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_si);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6120));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x611E));
	emu_ax = 0x4C42;
	emu_dx = 0x5452;
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x0318); emu_cs = 0x34B1; overlay(0x34B1, 0); f__B4B1_01CD_002A_CE8A();
l__0318:
	emu_addw(&emu_sp, 0xE);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x611A));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6118));
	emu_ax = 0x4C41;
	emu_dx = 0x5052;
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x0337); emu_cs = 0x34B1; overlay(0x34B1, 0); f__B4B1_01CD_002A_CE8A();
l__0337:
	emu_addw(&emu_sp, 0xE);
	emu_push(emu_si);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6120));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x611E));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x611A));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6118));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_ax = 0x353F;
	emu_es = emu_ax;

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_es, 0x00, 0x6674);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_es, 0x00, 0x6676);
	emu_push(0x0358);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A60EDB: f__22A6_0EDB_000A_151A(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x1587; emu_last_ip = 0x0353; emu_last_length = 0x0021; emu_last_crc = 0xC368;
			emu_call();
			return;
	}
l__0358:
	emu_addw(&emu_sp, 0xC);
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x0361); emu_cs = 0x34B1; overlay(0x34B1, 0); f__B4B1_0082_0012_D287();
l__0361:
	emu_pop(&emu_cx);
	emu_ax = emu_si;
	goto l__0366;
l__0366:
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

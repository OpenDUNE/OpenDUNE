/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__2649_0003_0014_67A9()
 *
 * @name f__2649_0003_0014_67A9
 * @implements 2649:0003:0014:67A9 ()
 * @implements 2649:0017:0008:33E4
 * @implements 2649:001F:000A:4104
 * @implements 2649:0027:0002:D43A
 * @implements 2649:0029:0008:E3E9
 * @implements 2649:0031:000A:49FE
 * @implements 2649:003B:0016:AC2D
 * @implements 2649:0051:0002:2597
 *
 * Called From: 2649:006D:001D:FEB5
 */
void f__2649_0003_0014_67A9()
{
l__0003:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_ax = 0x1C;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x9A18;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0017); emu_cs = 0x01F7; emu_Tools_Memset();
l__0017:
	emu_addw(&emu_sp, 0x8);
	emu_push(emu_cs); emu_push(0x001F); emu_cs = 0x2BF2; f__2BF2_0000_0007_42B5();
l__001F:
	emu_orw(&emu_ax, emu_dx);
	if (emu_ax != 0) goto l__0029;
	emu_xorw(&emu_dx, emu_dx);
	emu_xorw(&emu_ax, emu_ax);
l__0027:
	goto l__0051;
l__0029:
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0031); emu_cs = 0x2BF2; f__2BF2_0040_000E_71D1();
l__0031:
	emu_pop(&emu_cx);
	emu_xorw(&emu_dx, emu_dx);
	emu_cl = 0xA;
	emu_push(emu_cs); emu_push(0x003B); emu_cs = 0x01F7; emu_Tools_Shld();
l__003B:
	emu_get_memory16(emu_ds, 0x00, 0x9A38) = emu_dx;
	emu_get_memory16(emu_ds, 0x00, 0x9A36) = emu_ax;
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x9A38);
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x9A36);
	emu_subw(&emu_ax, 0x430);
	emu_sbbw(&emu_dx, 0x0);
	goto l__0027;
l__0051:
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__2649_0053_001D_FEB5()
 *
 * @name f__2649_0053_001D_FEB5
 * @implements 2649:0053:001D:FEB5 ()
 * @implements 2649:0070:0009:4B54
 * @implements 2649:0076:0003:1C2F
 * @implements 2649:0079:0043:6149
 * @implements 2649:00BC:0041:CAB4
 * @implements 2649:00F2:000B:0957
 * @implements 2649:00FD:0049:FCE0
 * @implements 2649:0146:000E:B2AC
 * @implements 2649:0154:001A:935F
 * @implements 2649:016E:001E:D8B1
 * @implements 2649:018C:0085:D343
 * @implements 2649:0211:000E:9E44
 * @implements 2649:021F:008D:2919
 * @implements 2649:02AC:0009:87CB
 * @implements 2649:02B5:0004:893F
 *
 * Called From: 1DB6:01A4:000B:5DBC
 */
void f__2649_0053_001D_FEB5()
{
l__0053:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x1C);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = 0x0;
	emu_get_memory16(emu_ss, emu_bp, -0x8) = 0x0;
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x6E3E);
	emu_orw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x6E40));
	if (emu_ax != 0) goto l__0079;
	emu_push(emu_cs);
	emu_push(0x0070); f__2649_0003_0014_67A9();
l__0070:
	emu_orw(&emu_ax, emu_dx);
	if (emu_ax != 0) goto l__0079;
	emu_xorw(&emu_ax, emu_ax);
l__0076:
	goto l__02B5;
l__0079:
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_dx = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_addw(&emu_dx, 0xF);
	emu_adcw(&emu_ax, 0x0);
	emu_andw(&emu_dx, 0xFFF0);
	emu_andw(&emu_ax, 0xFFFF);
	emu_get_memory16(emu_ss, emu_bp,  0x8) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp,  0x6) = emu_dx;
	emu_addw(&emu_get_memory16(emu_ss, emu_bp,  0x6), 0x10);
	emu_adcw(&emu_get_memory16(emu_ss, emu_bp,  0x8), 0x0);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_dx = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x9A38));
	if (emu_ax < emu_get_memory16(emu_ds, 0x00, 0x9A38)) goto l__00BC;
	if (emu_ax > emu_get_memory16(emu_ds, 0x00, 0x9A38)) { /* Unresolved jump */ emu_ip = 0x00AD; emu_last_cs = 0x2649; emu_last_ip = 0x00A5; emu_last_length = 0x0043; emu_last_crc = 0x6149; emu_call(); return; }
	emu_cmpw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x9A36));
	if (emu_dx <= emu_get_memory16(emu_ds, 0x00, 0x9A36)) goto l__00BC;
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x9A38);
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x9A36);
	emu_get_memory16(emu_ss, emu_bp,  0x8) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp,  0x6) = emu_dx;
	/* Unresolved jump */ emu_ip = 0x012D; emu_last_cs = 0x2649; emu_last_ip = 0x00BA; emu_last_length = 0x0043; emu_last_crc = 0x6149; emu_call();
l__00BC:
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_dx = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_addw(&emu_dx, 0x10);
	emu_adcw(&emu_ax, 0x0);
	emu_bx = emu_get_memory16(emu_ds, 0x00, 0x9A38);
	emu_cx = emu_get_memory16(emu_ds, 0x00, 0x9A36);
	emu_subw(&emu_cx, emu_dx);
	emu_sbbw(&emu_bx, emu_ax);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_bx;
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_cx;
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x0);
	if ((int16)emu_get_memory16(emu_ss, emu_bp, -0x6) <= (int16)0x0) {
		if ((int16)emu_get_memory16(emu_ss, emu_bp, -0x6) < (int16)0x0) { /* Unresolved jump */ emu_ip = 0x00E8; emu_last_cs = 0x2649; emu_last_ip = 0x00E0; emu_last_length = 0x0041; emu_last_crc = 0xCAB4; emu_call(); return; }
		emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x0);
		if (emu_get_memory16(emu_ss, emu_bp, -0x8) < 0x0) {
			emu_get_memory16(emu_ss, emu_bp, -0x6) = 0x0;
			emu_get_memory16(emu_ss, emu_bp, -0x8) = 0x0;
		}
	}
l__00F2:
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs); emu_push(0x00FD); emu_cs = 0x1FB5; emu_File_Obsolete5();
l__00FD:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x6);
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x8);
	emu_addw(&emu_dx, 0xF);
	emu_adcw(&emu_ax, 0x0);
	emu_andw(&emu_dx, 0xFFF0);
	emu_andw(&emu_ax, 0xFFFF);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_dx;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x8);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x6));
	if (emu_ax == 0) { /* Unresolved jump */ emu_ip = 0x012D; emu_last_cs = 0x2649; emu_last_ip = 0x0123; emu_last_length = 0x0049; emu_last_crc = 0xFCE0; emu_call(); return; }
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x10);
	emu_adcw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x0);
	emu_dx = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_addw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_adcw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_addw(&emu_ax, 0x3FF);
	emu_adcw(&emu_dx, 0x0);
	emu_cl = 0xA;
	emu_push(emu_cs); emu_push(0x0146); emu_cs = 0x01F7; f__01F7_05CF_0015_0AD7();
l__0146:
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x0154); emu_cs = 0x2BF2; f__2BF2_006A_000E_61D9();
l__0154:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ds, 0x00, 0x9A34) = emu_ax;
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x9A34), 0x0);
	if (emu_get_memory16(emu_ds, 0x00, 0x9A34) != 0x0) goto l__016E;
	emu_get_memory16(emu_ds, 0x00, 0x6E40) = 0x0;
	emu_get_memory16(emu_ds, 0x00, 0x6E3E) = 0x0;
	/* Unresolved jump */ emu_ip = 0x0074; emu_last_cs = 0x2649; emu_last_ip = 0x016B; emu_last_length = 0x001A; emu_last_crc = 0x935F; emu_call();
l__016E:
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_dx = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_addw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_adcw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_get_memory16(emu_ds, 0x00, 0x9A38) = emu_ax;
	emu_get_memory16(emu_ds, 0x00, 0x9A36) = emu_dx;
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_ax != 0) goto l__018C;
	/* Unresolved jump */ emu_ip = 0x0214; emu_last_cs = 0x2649; emu_last_ip = 0x0189; emu_last_length = 0x001E; emu_last_crc = 0xD8B1; emu_call();
l__018C:
	emu_get_memory16(emu_ss, emu_bp, -0xA) = emu_ds;
	emu_get_memory16(emu_ss, emu_bp, -0xC) = 0x9A18;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x9A34);
	emu_get_memory16(emu_es, emu_bx, 0x0) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_get_memory16(emu_es, emu_bx, 0x4) = 0x0;
	emu_get_memory16(emu_es, emu_bx, 0x2) = 0x0;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_dx = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_get_memory16(emu_es, emu_bx, 0x8) = emu_ax;
	emu_get_memory16(emu_es, emu_bx, 0x6) = emu_dx;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_get_memory16(emu_es, emu_bx, 0xC) = 0x0;
	emu_get_memory16(emu_es, emu_bx, 0xA) = 0x0;
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_dx = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_subw(&emu_dx, 0x10);
	emu_sbbw(&emu_ax, 0x0);
	emu_get_memory16(emu_ss, emu_bp, -0x1A) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x1C) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x16) = 0x0;
	emu_get_memory16(emu_ss, emu_bp, -0x18) = 0x1;
	emu_get_memory16(emu_ss, emu_bp, -0x12) = 0x0;
	emu_get_memory16(emu_ss, emu_bp, -0x14) = 0x0;
	emu_get_memory16(emu_ss, emu_bp, -0xE) = 0x0;
	emu_get_memory16(emu_ss, emu_bp, -0x10) = 0x0;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x4));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x2));
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x1C);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x0211); f__2649_0EBE_003A_3C21();
l__0211:
	emu_addw(&emu_sp, 0x8);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x8);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x6));
	if (emu_ax != 0) goto l__021F;
	/* Unresolved jump */ emu_ip = 0x02AF; emu_last_cs = 0x2649; emu_last_ip = 0x021C; emu_last_length = 0x000E; emu_last_crc = 0x9E44; emu_call();
l__021F:
	emu_get_memory16(emu_ss, emu_bp, -0xA) = emu_ds;
	emu_get_memory16(emu_ss, emu_bp, -0xC) = 0x9A26;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x9A34);
	emu_get_memory16(emu_es, emu_bx, 0x0) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_dx = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_get_memory16(emu_es, emu_bx, 0x4) = emu_ax;
	emu_get_memory16(emu_es, emu_bx, 0x2) = emu_dx;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x6);
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x8);
	emu_get_memory16(emu_es, emu_bx, 0x8) = emu_ax;
	emu_get_memory16(emu_es, emu_bx, 0x6) = emu_dx;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_dx = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_get_memory16(emu_es, emu_bx, 0xC) = emu_ax;
	emu_get_memory16(emu_es, emu_bx, 0xA) = emu_dx;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x6);
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x8);
	emu_subw(&emu_dx, 0x10);
	emu_sbbw(&emu_ax, 0x0);
	emu_get_memory16(emu_ss, emu_bp, -0x1A) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x1C) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x16) = 0x0;
	emu_get_memory16(emu_ss, emu_bp, -0x18) = 0x1;
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_dx = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_get_memory16(emu_ss, emu_bp, -0x12) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x14) = emu_dx;
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_dx = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_get_memory16(emu_ss, emu_bp, -0xE) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x10) = emu_dx;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x4));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x2));
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x1C);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x02AC); f__2649_0EBE_003A_3C21();
l__02AC:
	emu_addw(&emu_sp, 0x8);
	emu_ax = 0x1;
	goto l__0076;
l__02B5:
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__2649_0336_004C_0948()
 *
 * @name f__2649_0336_004C_0948
 * @implements 2649:0336:004C:0948 ()
 * @implements 2649:037B:0007:55C7
 * @implements 2649:037F:0003:1C36
 * @implements 2649:0382:003F:1C78
 * @implements 2649:03C1:0017:F342
 * @implements 2649:03D6:0002:D03A
 * @implements 2649:03F8:0032:C224
 * @implements 2649:041C:000E:5A1C
 * @implements 2649:04E8:0022:B3AA
 * @implements 2649:050A:0047:CEF8
 * @implements 2649:0551:004D:D9F1
 * @implements 2649:05C0:0014:5396
 * @implements 2649:05D4:0006:49AB
 * @implements 2649:05DA:0005:8BCF
 *
 * Called From: 23E1:002F:001C:B654
 * Called From: 23E1:002F:0015:7A84
 */
void f__2649_0336_004C_0948()
{
l__0336:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x30);
	emu_push(emu_si);
	emu_si = emu_get_memory16(emu_ss, emu_bp,  0xA);
	emu_ax = emu_si;
	emu_dx = 0xE;
	emu_imuluw(&emu_ax, emu_dx);
	emu_addw(&emu_ax, 0x9A18);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ds;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x6E3E);
	emu_orw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x6E40));
	if (emu_ax != 0) {
		emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
		emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
		if (emu_ax != 0) {
			emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
			emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x0), 0x0);
			if (emu_get_memory16(emu_es, emu_bx, 0x0) != 0x0) {
				emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
				emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0xC), 0x0);
				if (emu_get_memory16(emu_es, emu_bx, 0xC) != 0x0) goto l__0382;
				emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0xA), 0x1);
				if (emu_get_memory16(emu_es, emu_bx, 0xA) != 0x1) goto l__0382;
			}
		}
	}
l__037B:
	emu_xorw(&emu_dx, emu_dx);
	emu_xorw(&emu_ax, emu_ax);
l__037F:
	goto l__05DA;
l__0382:
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_dx = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_addw(&emu_dx, 0xF);
	emu_adcw(&emu_ax, 0x0);
	emu_andw(&emu_dx, 0xFFF0);
	emu_andw(&emu_ax, 0xFFFF);
	emu_get_memory16(emu_ss, emu_bp,  0x8) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp,  0x6) = emu_dx;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0xC);
	emu_dx = emu_get_memory16(emu_es, emu_bx, 0xA);
	emu_get_memory16(emu_ss, emu_bp, -0xA) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0xC) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_dx;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x20);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x03C1); f__2649_0EFC_003A_7D24();
l__03C1:
	emu_addw(&emu_sp, 0x8);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x1E);
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x20);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_ax < emu_get_memory16(emu_ss, emu_bp,  0x8)) { /* Unresolved jump */ emu_ip = 0x03D8; emu_last_cs = 0x2649; emu_last_ip = 0x03CD; emu_last_length = 0x0017; emu_last_crc = 0xF342; emu_call(); return; }
	if (emu_ax == emu_get_memory16(emu_ss, emu_bp,  0x8)) {
		emu_cmpw(&emu_dx, emu_get_memory16(emu_ss, emu_bp,  0x6));
		if (emu_dx < emu_get_memory16(emu_ss, emu_bp,  0x6)) { /* Unresolved jump */ emu_ip = 0x03D8; emu_last_cs = 0x2649; emu_last_ip = 0x03D4; emu_last_length = 0x0017; emu_last_crc = 0xF342; emu_call(); return; }
	}
l__03D6:
	goto l__03F8;
l__03F8:
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_dx = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_addw(&emu_dx, 0x40);
	emu_adcw(&emu_ax, 0x0);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x1E));
	if (emu_ax >= emu_get_memory16(emu_ss, emu_bp, -0x1E)) {
		if (emu_ax != emu_get_memory16(emu_ss, emu_bp, -0x1E)) { /* Unresolved jump */ emu_ip = 0x0410; emu_last_cs = 0x2649; emu_last_ip = 0x0409; emu_last_length = 0x0032; emu_last_crc = 0xC224; emu_call(); return; }
		emu_cmpw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0x20));
		if (emu_dx >= emu_get_memory16(emu_ss, emu_bp, -0x20)) {
			emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x1E);
			emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x20);
			emu_get_memory16(emu_ss, emu_bp,  0x8) = emu_ax;
			emu_get_memory16(emu_ss, emu_bp,  0x6) = emu_dx;
		}
	}
l__041C:
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_dx = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x1E));
	if (emu_ax == emu_get_memory16(emu_ss, emu_bp, -0x1E)) { /* Unresolved jump */ emu_ip = 0x042A; emu_last_cs = 0x2649; emu_last_ip = 0x0425; emu_last_length = 0x000E; emu_last_crc = 0x5A1C; emu_call(); return; }
	goto l__04E8;
l__04E8:
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_dx = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_addw(&emu_dx, 0x10);
	emu_adcw(&emu_ax, 0x0);
	emu_subw(&emu_get_memory16(emu_ss, emu_bp, -0x20), emu_dx);
	emu_sbbw(&emu_get_memory16(emu_ss, emu_bp, -0x1E), emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x20);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x050A); f__2649_0EBE_003A_3C21();
l__050A:
	emu_addw(&emu_sp, 0x8);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_dx = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_get_memory16(emu_ss, emu_bp, -0x2E) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x30) = emu_dx;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0xA);
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0xC);
	emu_get_memory16(emu_ss, emu_bp, -0x2A) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x2C) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x26) = 0x0;
	emu_get_memory16(emu_ss, emu_bp, -0x28) = 0x1;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x1E);
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x20);
	emu_addw(&emu_dx, 0x10);
	emu_adcw(&emu_ax, 0x0);
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_dx);
	emu_adcw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x30);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x0551); f__2649_0EBE_003A_3C21();
l__0551:
	emu_addw(&emu_sp, 0x8);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0xA);
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0xC);
	emu_addw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0x30));
	emu_adcw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2E));
	emu_addw(&emu_dx, 0x10);
	emu_adcw(&emu_ax, 0x0);
	emu_get_memory16(emu_ss, emu_bp, -0xE) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x10) = emu_dx;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x4);
	emu_dx = emu_get_memory16(emu_es, emu_bx, 0x2);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_addw(&emu_dx, emu_get_memory16(emu_es, emu_bx, 0x6));
	emu_adcw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x8));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0xE));
	if (emu_ax < emu_get_memory16(emu_ss, emu_bp, -0xE)) goto l__05C0;
	if (emu_ax > emu_get_memory16(emu_ss, emu_bp, -0xE)) { /* Unresolved jump */ emu_ip = 0x058E; emu_last_cs = 0x2649; emu_last_ip = 0x0587; emu_last_length = 0x004D; emu_last_crc = 0xD9F1; emu_call(); return; }
	emu_cmpw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0x10));
	if (emu_dx <= emu_get_memory16(emu_ss, emu_bp, -0x10)) goto l__05C0;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x20);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x059E); f__2649_0EFC_003A_7D24();
	/* Unresolved jump */ emu_ip = 0x059E; emu_last_cs = 0x2649; emu_last_ip = 0x059E; emu_last_length = 0x004D; emu_last_crc = 0xD9F1; emu_call();
l__05C0:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0xA);
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0xC);
	emu_addw(&emu_dx, 0x10);
	emu_adcw(&emu_ax, 0x0);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_si);
	emu_push(emu_cs);
	emu_push(0x05D4); f__2649_0F3A_0034_A58B();
l__05D4:
	emu_addw(&emu_sp, 0x6);
	goto l__037F;
l__05DA:
	emu_pop(&emu_si);
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__2649_05DF_0011_F459()
 *
 * @name f__2649_05DF_0011_F459
 * @implements 2649:05DF:0011:F459 ()
 * @implements 2649:05F0:0009:B586
 * @implements 2649:05F9:000B:617F
 * @implements 2649:0604:0019:982D
 * @implements 2649:061D:0020:1112
 * @implements 2649:063D:0012:4368
 * @implements 2649:064F:0018:ED25
 * @implements 2649:0667:0010:AFFA
 * @implements 2649:0677:005D:1EAC
 * @implements 2649:0740:0009:51D0
 * @implements 2649:0749:0009:95D2
 * @implements 2649:085F:0009:51DD
 * @implements 2649:0868:0009:95D7
 * @implements 2649:098A:0034:A0DB
 * @implements 2649:09C1:001F:0160
 * @implements 2649:0ACD:0006:783B
 * @implements 2649:0AD3:0007:987A
 * @implements 2649:0AD6:0004:893F
 *
 * Called From: 23E1:01EA:0011:2432
 */
void f__2649_05DF_0011_F459()
{
l__05DF:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x50);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x05F0); f__2649_0BAE_001D_25B1();
l__05F0:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax != 0) goto l__05F9;
	goto l__0AD6;
l__05F9:
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x0604); f__2649_0B26_0011_B1B8();
l__0604:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_subw(&emu_ax, 0x10);
	emu_sbbw(&emu_dx, 0x0);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_ax;
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x061D); f__2649_0F72_001C_A19C();
l__061D:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_dx = 0xE;
	emu_imuluw(&emu_ax, emu_dx);
	emu_addw(&emu_ax, 0x9A18);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ds;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x20);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x063D); f__2649_0EFC_003A_7D24();
l__063D:
	emu_addw(&emu_sp, 0x8);
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x16), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp, -0x16) != 0x0) { /* Unresolved jump */ emu_ip = 0x064C; emu_last_cs = 0x2649; emu_last_ip = 0x0644; emu_last_length = 0x0012; emu_last_crc = 0x4368; emu_call(); return; }
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x18), 0x1);
	if (emu_get_memory16(emu_ss, emu_bp, -0x18) == 0x1) goto l__064F;
	goto l__0AD6;
l__064F:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x1A), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp, -0x1A) != 0x0) goto l__0667;
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x1C), 0x1);
	if (emu_get_memory16(emu_ss, emu_bp, -0x1C) != 0x1) goto l__0667;
	emu_get_memory16(emu_ss, emu_bp, -0x36) = 0x0;
	emu_get_memory16(emu_ss, emu_bp, -0x38) = 0x1;
	/* Unresolved jump */ emu_ip = 0x067A; emu_last_cs = 0x2649; emu_last_ip = 0x0665; emu_last_length = 0x0018; emu_last_crc = 0xED25; emu_call();
l__0667:
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x1A));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x1C));
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x40);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x0677); f__2649_0EFC_003A_7D24();
l__0677:
	emu_addw(&emu_sp, 0x8);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x6);
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x8);
	emu_addw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0x20));
	emu_adcw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x1E));
	emu_addw(&emu_dx, 0x10);
	emu_adcw(&emu_ax, 0x0);
	emu_get_memory16(emu_ss, emu_bp, -0xA) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0xC) = emu_dx;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x4);
	emu_dx = emu_get_memory16(emu_es, emu_bx, 0x2);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_addw(&emu_dx, emu_get_memory16(emu_es, emu_bx, 0x6));
	emu_adcw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x8));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0xA));
	if (emu_ax > emu_get_memory16(emu_ss, emu_bp, -0xA)) { /* Unresolved jump */ emu_ip = 0x06D4; emu_last_cs = 0x2649; emu_last_ip = 0x06AB; emu_last_length = 0x005D; emu_last_crc = 0x1EAC; emu_call(); return; }
	if (emu_ax != emu_get_memory16(emu_ss, emu_bp, -0xA)) { /* Unresolved jump */ emu_ip = 0x06B4; emu_last_cs = 0x2649; emu_last_ip = 0x06AD; emu_last_length = 0x005D; emu_last_crc = 0x1EAC; emu_call(); return; }
	emu_cmpw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0xC));
	if (emu_dx > emu_get_memory16(emu_ss, emu_bp, -0xC)) { /* Unresolved jump */ emu_ip = 0x06D4; emu_last_cs = 0x2649; emu_last_ip = 0x06B2; emu_last_length = 0x005D; emu_last_crc = 0x1EAC; emu_call(); return; }
	emu_get_memory16(emu_ss, emu_bp, -0x26) = 0x0;
	emu_get_memory16(emu_ss, emu_bp, -0x28) = 0x1;
	emu_get_memory16(emu_ss, emu_bp, -0xA) = 0x0;
	emu_get_memory16(emu_ss, emu_bp, -0xC) = 0x1;
	emu_get_memory16(emu_ss, emu_bp, -0xE) = 0x0;
	emu_get_memory16(emu_ss, emu_bp, -0x10) = 0x1;
	goto l__0740;
l__0740:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x36), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp, -0x36) == 0x0) goto l__0749;
	goto l__085F;
l__0749:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x38), 0x1);
	if (emu_get_memory16(emu_ss, emu_bp, -0x38) == 0x1) { /* Unresolved jump */ emu_ip = 0x0752; emu_last_cs = 0x2649; emu_last_ip = 0x074D; emu_last_length = 0x0009; emu_last_crc = 0x95D2; emu_call(); return; }
	goto l__085F;
l__085F:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x36), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp, -0x36) == 0x0) goto l__0868;
	goto l__098A;
l__0868:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x38), 0x1);
	if (emu_get_memory16(emu_ss, emu_bp, -0x38) == 0x1) { /* Unresolved jump */ emu_ip = 0x0871; emu_last_cs = 0x2649; emu_last_ip = 0x086C; emu_last_length = 0x0009; emu_last_crc = 0x95D7; emu_call(); return; }
	goto l__098A;
l__098A:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x26), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp, -0x26) != 0x0) { /* Unresolved jump */ emu_ip = 0x09E0; emu_last_cs = 0x2649; emu_last_ip = 0x098E; emu_last_length = 0x0034; emu_last_crc = 0xA0DB; emu_call(); return; }
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x28), 0x1);
	if (emu_get_memory16(emu_ss, emu_bp, -0x28) != 0x1) { /* Unresolved jump */ emu_ip = 0x09E0; emu_last_cs = 0x2649; emu_last_ip = 0x0994; emu_last_length = 0x0034; emu_last_crc = 0xA0DB; emu_call(); return; }
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp, -0xA) != 0x0) { /* Unresolved jump */ emu_ip = 0x09A2; emu_last_cs = 0x2649; emu_last_ip = 0x099A; emu_last_length = 0x0034; emu_last_crc = 0xA0DB; emu_call(); return; }
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0xC), 0x1);
	if (emu_get_memory16(emu_ss, emu_bp, -0xC) == 0x1) goto l__09C1;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x1A);
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x1C);
	emu_get_memory16(emu_ss, emu_bp, -0x2A) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x2C) = emu_dx;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x30);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x09BE); f__2649_0EBE_003A_3C21();
	/* Unresolved jump */ emu_ip = 0x09BE; emu_last_cs = 0x2649; emu_last_ip = 0x09BE; emu_last_length = 0x0034; emu_last_crc = 0xA0DB; emu_call();
l__09C1:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x1E);
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x20);
	emu_addw(&emu_dx, 0x10);
	emu_adcw(&emu_ax, 0x0);
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x40), emu_dx);
	emu_adcw(&emu_get_memory16(emu_ss, emu_bp, -0x3E), emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x1A));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x1C));
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x40);
	goto l__0ACD;
l__0ACD:
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x0AD3); f__2649_0EBE_003A_3C21();
l__0AD3:
	emu_addw(&emu_sp, 0x8);
l__0AD6:
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__2649_0ADA_000E_EEB3()
 *
 * @name f__2649_0ADA_000E_EEB3
 * @implements 2649:0ADA:000E:EEB3 ()
 * @implements 2649:0AE8:0010:11AB
 * @implements 2649:0AF8:000F:5CFA
 * @implements 2649:0B05:0002:2597
 *
 * Called From: B500:0064:0006:928E
 * Called From: B500:0064:0005:F68F
 */
void f__2649_0ADA_000E_EEB3()
{
l__0ADA:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x6E3E);
	emu_orw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x6E40));
	if (emu_ax != 0) goto l__0AE8;
	goto l__0B05;
l__0AE8:
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x9A34), 0x0);
	if (emu_get_memory16(emu_ds, 0x00, 0x9A34) == 0x0) { /* Unresolved jump */ emu_ip = 0x0AF9; emu_last_cs = 0x2649; emu_last_ip = 0x0AED; emu_last_length = 0x0010; emu_last_crc = 0x11AB; emu_call(); return; }
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x9A34));
	emu_push(emu_cs); emu_push(0x0AF8); emu_cs = 0x2BF2; f__2BF2_00B7_000E_61C1();
l__0AF8:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ds, 0x00, 0x6E40) = 0x0;
	emu_get_memory16(emu_ds, 0x00, 0x6E3E) = 0x0;
l__0B05:
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__2649_0B26_0011_B1B8()
 *
 * @name f__2649_0B26_0011_B1B8
 * @implements 2649:0B26:0011:B1B8 ()
 * @implements 2649:0B37:0029:37CA
 * @implements 2649:0B60:0004:893F
 *
 * Called From: 2649:0601:000B:617F
 */
void f__2649_0B26_0011_B1B8()
{
l__0B26:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x4);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x0B37); f__2649_0F72_001C_A19C();
l__0B37:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_dx = 0xE;
	emu_imuluw(&emu_ax, emu_dx);
	emu_dx = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_bx = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_xchgw(&emu_ax, &emu_bx);
	emu_addw(&emu_ax, emu_get_memory16(emu_ds, emu_bx, 0x9A1A));
	emu_adcw(&emu_dx, emu_get_memory16(emu_ds, emu_bx, 0x9A1C));
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_andw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0xFF);
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x2);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x4);
	goto l__0B60;
l__0B60:
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__2649_0BAE_001D_25B1()
 *
 * @name f__2649_0BAE_001D_25B1
 * @implements 2649:0BAE:001D:25B1 ()
 * @implements 2649:0BC7:0004:F539
 * @implements 2649:0BC9:0002:DD3A
 * @implements 2649:0BCB:0011:A36B
 * @implements 2649:0BDC:0024:C147
 * @implements 2649:0BFE:0002:A3BA
 * @implements 2649:0C00:0005:B7FA
 * @implements 2649:0C05:0004:893F
 *
 * Called From: 1FB5:0C32:000B:94DE
 * Called From: 1FB5:0F28:0019:04E8
 * Called From: 23E1:01D9:000B:ACDF
 * Called From: 2649:05ED:0011:F459
 */
void f__2649_0BAE_001D_25B1()
{
l__0BAE:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x4);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_dx = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_dx;
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0xF000);
	if (emu_get_memory16(emu_ss, emu_bp, -0x2) >= 0xF000) goto l__0BCB;
l__0BC7:
	emu_xorw(&emu_ax, emu_ax);
l__0BC9:
	goto l__0C05;
l__0BCB:
	emu_al = emu_get_memory8(emu_ss, emu_bp, -0x1);
	emu_ah = 0x0;
	emu_andw(&emu_ax, 0xF);
	emu_cx = emu_ax;
	emu_cmpw(&emu_cx, 0x2);
	if ((int16)emu_cx <= (int16)0x2) goto l__0BDC;
	goto l__0BC7;
l__0BDC:
	emu_andw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0xFF);
	emu_ax = emu_cx;
	emu_dx = 0xE;
	emu_imuluw(&emu_ax, emu_dx);
	emu_bx = emu_ax;
	emu_ax = emu_get_memory16(emu_ds, emu_bx, 0x9A20);
	emu_dx = emu_get_memory16(emu_ds, emu_bx, 0x9A1E);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_ax > emu_get_memory16(emu_ss, emu_bp, -0x2)) goto l__0C00;
	if (emu_ax == emu_get_memory16(emu_ss, emu_bp, -0x2)) {
		emu_cmpw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0x4));
		if (emu_dx > emu_get_memory16(emu_ss, emu_bp, -0x4)) goto l__0C00;
	}
l__0BFE:
	goto l__0BC7;
l__0C00:
	emu_ax = 0x1;
	goto l__0BC9;
l__0C05:
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__2649_0EBE_003A_3C21()
 *
 * @name f__2649_0EBE_003A_3C21
 * @implements 2649:0EBE:003A:3C21 ()
 * @implements 2649:0EF8:0002:C03A
 * @implements 2649:0EFA:0002:2597
 *
 * Called From: 2649:020E:0085:D343
 * Called From: 2649:02A9:008D:2919
 * Called From: 2649:0507:0022:B3AA
 * Called From: 2649:054E:0047:CEF8
 * Called From: 2649:0AD0:0006:783B
 */
void f__2649_0EBE_003A_3C21()
{
l__0EBE:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_get_memory16(emu_ds, 0x00, 0x9A40) = 0x0;
	emu_get_memory16(emu_ds, 0x00, 0x9A3E) = 0x10;
	emu_get_memory16(emu_ds, 0x00, 0x9A42) = 0x0;
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_dx = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_get_memory16(emu_ds, 0x00, 0x9A46) = emu_ax;
	emu_get_memory16(emu_ds, 0x00, 0x9A44) = emu_dx;
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x9A34);
	emu_get_memory16(emu_ds, 0x00, 0x9A48) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0xC);
	emu_dx = emu_get_memory16(emu_ss, emu_bp,  0xA);
	emu_get_memory16(emu_ds, 0x00, 0x9A4C) = emu_ax;
	emu_get_memory16(emu_ds, 0x00, 0x9A4A) = emu_dx;
	emu_push(emu_cs); emu_push(0x0EF8); emu_cs = 0x2BF2; f__2BF2_008E_0013_1D73();
l__0EF8:
	goto l__0EFA;
l__0EFA:
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__2649_0EFC_003A_7D24()
 *
 * @name f__2649_0EFC_003A_7D24
 * @implements 2649:0EFC:003A:7D24 ()
 * @implements 2649:0F36:0002:C03A
 * @implements 2649:0F38:0002:2597
 *
 * Called From: 2649:03BE:003F:1C78
 * Called From: 2649:063A:0020:1112
 * Called From: 2649:0674:0010:AFFA
 */
void f__2649_0EFC_003A_7D24()
{
l__0EFC:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_get_memory16(emu_ds, 0x00, 0x9A40) = 0x0;
	emu_get_memory16(emu_ds, 0x00, 0x9A3E) = 0x10;
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x9A34);
	emu_get_memory16(emu_ds, 0x00, 0x9A42) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0xC);
	emu_dx = emu_get_memory16(emu_ss, emu_bp,  0xA);
	emu_get_memory16(emu_ds, 0x00, 0x9A46) = emu_ax;
	emu_get_memory16(emu_ds, 0x00, 0x9A44) = emu_dx;
	emu_get_memory16(emu_ds, 0x00, 0x9A48) = 0x0;
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_dx = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_get_memory16(emu_ds, 0x00, 0x9A4C) = emu_ax;
	emu_get_memory16(emu_ds, 0x00, 0x9A4A) = emu_dx;
	emu_push(emu_cs); emu_push(0x0F36); emu_cs = 0x2BF2; f__2BF2_008E_0013_1D73();
l__0F36:
	goto l__0F38;
l__0F38:
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__2649_0F3A_0034_A58B()
 *
 * @name f__2649_0F3A_0034_A58B
 * @implements 2649:0F3A:0034:A58B ()
 * @implements 2649:0F6E:0004:893F
 *
 * Called From: 2649:05D1:0014:5396
 */
void f__2649_0F3A_0034_A58B()
{
l__0F3A:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x4);
	emu_cx = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_ax = emu_cx;
	emu_dx = 0xE;
	emu_imuluw(&emu_ax, emu_dx);
	emu_dx = emu_get_memory16(emu_ss, emu_bp,  0xA);
	emu_bx = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_xchgw(&emu_ax, &emu_bx);
	emu_subw(&emu_ax, emu_get_memory16(emu_ds, emu_bx, 0x9A1A));
	emu_sbbw(&emu_dx, emu_get_memory16(emu_ds, emu_bx, 0x9A1C));
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_al = 0xF0;
	emu_orb(&emu_al, emu_cl);
	emu_orb(&emu_get_memory8(emu_ss, emu_bp, -0x1), emu_al);
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x2);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x4);
	goto l__0F6E;
l__0F6E:
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__2649_0F72_001C_A19C()
 *
 * @name f__2649_0F72_001C_A19C
 * @implements 2649:0F72:001C:A19C ()
 * @implements 2649:0F8E:0004:893F
 *
 * Called From: 2649:061A:0019:982D
 * Called From: 2649:0B34:0011:B1B8
 */
void f__2649_0F72_001C_A19C()
{
l__0F72:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x4);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_dx = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_dx;
	emu_al = emu_get_memory8(emu_ss, emu_bp, -0x1);
	emu_ah = 0x0;
	emu_andw(&emu_ax, 0xF);
	goto l__0F8E;
l__0F8E:
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

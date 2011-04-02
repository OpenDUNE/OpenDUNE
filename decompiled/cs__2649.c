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
l__0074:
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
	if (emu_ax > emu_get_memory16(emu_ds, 0x00, 0x9A38)) goto l__00AD;
	emu_cmpw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x9A36));
	if (emu_dx <= emu_get_memory16(emu_ds, 0x00, 0x9A36)) goto l__00BC;
l__00AD:
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x9A38);
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x9A36);
	emu_get_memory16(emu_ss, emu_bp,  0x8) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp,  0x6) = emu_dx;
	goto l__012D;
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
		if ((int16)emu_get_memory16(emu_ss, emu_bp, -0x6) < (int16)0x0) goto l__00E8;
		emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x0);
		if (emu_get_memory16(emu_ss, emu_bp, -0x8) < 0x0) {
l__00E8:
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
	if (emu_ax == 0)goto l__012D;
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x10);
	emu_adcw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x0);
l__012D:
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
	goto l__0074;
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
	goto l__0214;
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
l__0214:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x8);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x6));
	if (emu_ax != 0) goto l__021F;
	goto l__02AF;
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
l__02AF:
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
 * @implements 2649:03D8:001E:A287
 * @implements 2649:03F8:0032:C224
 * @implements 2649:041C:000E:5A1C
 * @implements 2649:042A:0008:1502
 * @implements 2649:04E8:0022:B3AA
 * @implements 2649:050A:0047:CEF8
 * @implements 2649:0551:004D:D9F1
 * @implements 2649:058E:0010:EF5E
 * @implements 2649:059E:001F:EDC4
 * @implements 2649:05BD:0017:42D3
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
l__03B1:
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
	if (emu_ax < emu_get_memory16(emu_ss, emu_bp,  0x8)) goto l__03D8;
	if (emu_ax == emu_get_memory16(emu_ss, emu_bp,  0x8)) {
		emu_cmpw(&emu_dx, emu_get_memory16(emu_ss, emu_bp,  0x6));
		if (emu_dx < emu_get_memory16(emu_ss, emu_bp,  0x6)) goto l__03D8;
	}
l__03D6:
	goto l__03F8;
l__03D8:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x16);
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x18);
	emu_get_memory16(emu_ss, emu_bp, -0xA) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0xC) = emu_dx;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x6);
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x8);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0xA));
	if (emu_ax != emu_get_memory16(emu_ss, emu_bp, -0xA)) goto l__03F6;
	emu_cmpw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0xC));
	if (emu_dx != emu_get_memory16(emu_ss, emu_bp, -0xC)) goto l__03F6;
	goto l__037B;
l__03F6:
	goto l__03B1;
l__03F8:
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_dx = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_addw(&emu_dx, 0x40);
	emu_adcw(&emu_ax, 0x0);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x1E));
	if (emu_ax >= emu_get_memory16(emu_ss, emu_bp, -0x1E)) {
		if (emu_ax != emu_get_memory16(emu_ss, emu_bp, -0x1E)) goto l__0410;
		emu_cmpw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0x20));
		if (emu_dx >= emu_get_memory16(emu_ss, emu_bp, -0x20)) {
l__0410:
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
	if (emu_ax == emu_get_memory16(emu_ss, emu_bp, -0x1E)) goto l__042A;
	goto l__04E8;
l__042A:
	emu_cmpw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0x20));
	if (emu_dx == emu_get_memory16(emu_ss, emu_bp, -0x20)) goto l__0432;
	goto l__04E8;
l__0432:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x12);
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x14);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0xA));
	if (emu_ax != emu_get_memory16(emu_ss, emu_bp, -0xA)) goto l__0453;
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0xC));
	if (emu_ax != emu_get_memory16(emu_ss, emu_bp, -0xC)) goto l__0453;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_get_memory16(emu_es, emu_bx, 0xC) = 0x0;
	emu_get_memory16(emu_es, emu_bx, 0xA) = 0x1;
	goto l__04C8;
l__0453:
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x30);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x0463); f__2649_0EFC_003A_7D24();
l__0463:
	emu_sp += 8;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x16);
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x18);
	emu_get_memory16(emu_ss, emu_bp, -0x26) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x28) = emu_dx;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x30);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x0482); f__2649_0EBE_003A_3C21();
l__0482:
	emu_sp += 8;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x16));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x18));
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x30);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x0495); f__2649_0EFC_003A_7D24();
l__0495:
	emu_sp += 8;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x12);
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x14);
	emu_get_memory16(emu_ss, emu_bp, -0x22) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x24) = emu_dx;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x16));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x18));
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x30);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x04B4); f__2649_0EBE_003A_3C21();
l__04B4:
	emu_sp += 8;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x16);
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x18);
	emu_get_memory16(emu_es, emu_bx, 0xC) = emu_ax;
	emu_get_memory16(emu_es, emu_bx, 0xA) = emu_dx;
l__04C8:
	emu_get_memory16(emu_ss, emu_bp, -0x16) = 0x0;
	emu_get_memory16(emu_ss, emu_bp, -0x18) = 0x1;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x30);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x04E2); f__2649_0EBE_003A_3C21();
l__04E2:
	emu_sp += 8;
	goto l__05C0;
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
	if (emu_ax <= emu_get_memory16(emu_ss, emu_bp, -0xE)) {
		emu_cmpw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0x10));
		if (emu_dx <= emu_get_memory16(emu_ss, emu_bp, -0x10)) goto l__05C0;
	}
l__058E:
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x20);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x059E); f__2649_0EFC_003A_7D24();
l__059E:
	emu_addw(&emu_sp, 0x8);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0xA);
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0xC);
	emu_get_memory16(emu_ss, emu_bp, -0x1A) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x1C) = emu_dx;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x20);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x05BD); f__2649_0EBE_003A_3C21();
l__05BD:
	emu_addw(&emu_sp, 0x8);
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
 * @implements 2649:06D4:0010:EFBF
 * @implements 2649:06E4:004D:A8F4
 * @implements 2649:0721:0010:A8DB
 * @implements 2649:0731:0005:802E
 * @implements 2649:0736:0013:AC3F
 * @implements 2649:0740:0009:51D0
 * @implements 2649:0749:0009:95D2
 * @implements 2649:0752:0009:D1F4
 * @implements 2649:075B:0009:154F
 * @implements 2649:0764:0037:1AF5
 * @implements 2649:079B:0021:9330
 * @implements 2649:07BC:0043:7D69
 * @implements 2649:07FF:0005:966E
 * @implements 2649:0804:0010:E8E0
 * @implements 2649:0814:0013:BC9E
 * @implements 2649:0827:001F:FF73
 * @implements 2649:082A:001C:BA62
 * @implements 2649:0846:0013:3CA0
 * @implements 2649:0859:0006:561F
 * @implements 2649:085F:0009:51DD
 * @implements 2649:0868:0009:95D7
 * @implements 2649:0871:0036:5195
 * @implements 2649:08A7:0028:8D49
 * @implements 2649:08CF:001F:34E8
 * @implements 2649:08EE:0013:3D15
 * @implements 2649:0901:001F:7ECA
 * @implements 2649:0920:0013:BD1B
 * @implements 2649:0933:0051:A460
 * @implements 2649:095C:0028:5A5E
 * @implements 2649:0968:001C:4566
 * @implements 2649:0984:0006:9791
 * @implements 2649:098A:0034:A0DB
 * @implements 2649:09C1:001F:0160
 * @implements 2649:09E0:0028:6B45
 * @implements 2649:0A08:0051:ADCE
 * @implements 2649:0A31:0028:9DF1
 * @implements 2649:0A3D:001C:82C9
 * @implements 2649:0A59:0016:4D2B
 * @implements 2649:0A6F:0013:7CB5
 * @implements 2649:0A82:001F:BA4A
 * @implements 2649:0AA1:0013:7D89
 * @implements 2649:0AB4:001F:F2CE
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
	if (emu_get_memory16(emu_ss, emu_bp, -0x16) != 0x0) goto l__064C;
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x18), 0x1);
	if (emu_get_memory16(emu_ss, emu_bp, -0x18) == 0x1) goto l__064F;
l__064C:
	goto l__0AD6;
l__064F:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x1A), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp, -0x1A) != 0x0) goto l__0667;
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x1C), 0x1);
	if (emu_get_memory16(emu_ss, emu_bp, -0x1C) != 0x1) goto l__0667;
	emu_get_memory16(emu_ss, emu_bp, -0x36) = 0x0;
	emu_get_memory16(emu_ss, emu_bp, -0x38) = 0x1;
	goto l__067A;
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
l__067A:
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
	if (emu_ax > emu_get_memory16(emu_ss, emu_bp, -0xA)) goto l__06D4;
	if (emu_ax != emu_get_memory16(emu_ss, emu_bp, -0xA)) goto l__06B4;
	emu_cmpw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0xC));
	if (emu_dx > emu_get_memory16(emu_ss, emu_bp, -0xC)) goto l__06D4;
l__06B4:
	emu_get_memory16(emu_ss, emu_bp, -0x26) = 0x0;
	emu_get_memory16(emu_ss, emu_bp, -0x28) = 0x1;
	emu_get_memory16(emu_ss, emu_bp, -0xA) = 0x0;
	emu_get_memory16(emu_ss, emu_bp, -0xC) = 0x1;
	emu_get_memory16(emu_ss, emu_bp, -0xE) = 0x0;
	emu_get_memory16(emu_ss, emu_bp, -0x10) = 0x1;
	goto l__0740;
l__06D4:
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x30);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x06E4); f__2649_0EFC_003A_7D24();
l__06E4:
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
	if (emu_ax < emu_get_memory16(emu_ss, emu_bp, -0xE)) goto l__0736;
	if (emu_ax <= emu_get_memory16(emu_ss, emu_bp, -0xE)) {
		emu_cmpw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0x10));
		if (emu_dx <= emu_get_memory16(emu_ss, emu_bp, -0x10)) goto l__0736;
	}
l__0721:
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x50);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x0731); f__2649_0EFC_003A_7D24();
l__0731:
	emu_addw(&emu_sp, 0x8);
	goto l__0740;
l__0736:
	emu_get_memory16(emu_ss, emu_bp, -0xE) = 0x0;
	emu_get_memory16(emu_ss, emu_bp, -0x10) = 0x1;
l__0740:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x36), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp, -0x36) == 0x0) goto l__0749;
	goto l__085F;
l__0749:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x38), 0x1);
	if (emu_get_memory16(emu_ss, emu_bp, -0x38) == 0x1) goto l__0752;
	goto l__085F;
l__0752:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x26), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp, -0x26) == 0x0) goto l__075B;
	goto l__085F;
l__075B:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x28), 0x1);
	if (emu_get_memory16(emu_ss, emu_bp, -0x28) == 0x1) goto l__0764;
	goto l__085F;
l__0764:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0xC), 0x0);
	if (emu_get_memory16(emu_es, emu_bx, 0xC) != 0x0) goto l__079B;
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0xA), 0x1);
	if (emu_get_memory16(emu_es, emu_bx, 0xA) != 0x1) goto l__079B;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x6);
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x8);
	emu_get_memory16(emu_es, emu_bx, 0xC) = emu_ax;
	emu_get_memory16(emu_es, emu_bx, 0xA) = emu_dx;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x6);
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x8);
	emu_get_memory16(emu_ss, emu_bp, -0x12) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x14) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x16) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x18) = emu_dx;
	goto l__0849;
l__079B:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0xC);
	emu_dx = emu_get_memory16(emu_es, emu_bx, 0xA);
	emu_get_memory16(emu_ss, emu_bp, -0x16) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x18) = emu_dx;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x16));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x18));
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x30);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x07BC); f__2649_0EFC_003A_7D24();
l__07BC:
	emu_addw(&emu_sp, 0x8);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x22);
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x24);
	emu_get_memory16(emu_ss, emu_bp, -0x12) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x14) = emu_dx;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x6);
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x8);
	emu_get_memory16(emu_ss, emu_bp, -0x22) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x24) = emu_dx;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0xC);
	emu_dx = emu_get_memory16(emu_es, emu_bx, 0xA);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x26));
	if (emu_ax != emu_get_memory16(emu_ss, emu_bp, -0x26)) goto l__0804;
	emu_cmpw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0x28));
	if (emu_dx != emu_get_memory16(emu_ss, emu_bp, -0x28)) goto l__0804;
	emu_ax = 0x10;
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x30);
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x40);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x07FF); emu_cs = 0x01F7; emu_Tools_Memcopy();
l__07FF:
	emu_addw(&emu_sp, 0xA);
	goto l__082A;
l__0804:
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x16));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x18));
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x30);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x0814); f__2649_0EBE_003A_3C21();
l__0814:
	emu_addw(&emu_sp, 0x8);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x40);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x0827); f__2649_0EFC_003A_7D24();
l__0827:
	emu_addw(&emu_sp, 0x8);
l__082A:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x6);
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x8);
	emu_get_memory16(emu_ss, emu_bp, -0x36) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x38) = emu_dx;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x40);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x0846); f__2649_0EBE_003A_3C21();
l__0846:
	emu_addw(&emu_sp, 0x8);
l__0849:
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x20);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x0859); f__2649_0EBE_003A_3C21();
l__0859:
	emu_addw(&emu_sp, 0x8);
	goto l__0AD6;
l__085F:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x36), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp, -0x36) == 0x0) goto l__0868;
	goto l__098A;
l__0868:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x38), 0x1);
	if (emu_get_memory16(emu_ss, emu_bp, -0x38) == 0x1) goto l__0871;
	goto l__098A;
l__0871:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x2E);
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x30);
	emu_addw(&emu_dx, 0x10);
	emu_adcw(&emu_ax, 0x0);
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x20), emu_dx);
	emu_adcw(&emu_get_memory16(emu_ss, emu_bp, -0x1E), emu_ax);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x26);
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x28);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0xA));
	if (emu_ax != emu_get_memory16(emu_ss, emu_bp, -0xA)) goto l__08A7;
	emu_cmpw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0xC));
	if (emu_dx != emu_get_memory16(emu_ss, emu_bp, -0xC)) goto l__08A7;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x6);
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x8);
	emu_get_memory16(emu_ss, emu_bp, -0x12) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x14) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x16) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x18) = emu_dx;
	goto l__0923;
l__08A7:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x26);
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x28);
	emu_get_memory16(emu_ss, emu_bp, -0x16) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x18) = emu_dx;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x22);
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x24);
	emu_get_memory16(emu_ss, emu_bp, -0x12) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x14) = emu_dx;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x16));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x18));
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x30);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x08CF); f__2649_0EFC_003A_7D24();
l__08CF:
	emu_addw(&emu_sp, 0x8);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x6);
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x8);
	emu_get_memory16(emu_ss, emu_bp, -0x22) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x24) = emu_dx;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x16));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x18));
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x30);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x08EE); f__2649_0EBE_003A_3C21();
l__08EE:
	emu_addw(&emu_sp, 0x8);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x40);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x0901); f__2649_0EFC_003A_7D24();
l__0901:
	emu_addw(&emu_sp, 0x8);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x6);
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x8);
	emu_get_memory16(emu_ss, emu_bp, -0x36) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x38) = emu_dx;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x40);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x0920); f__2649_0EBE_003A_3C21();
l__0920:
	emu_addw(&emu_sp, 0x8);
l__0923:
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x20);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x0933); f__2649_0EBE_003A_3C21();
l__0933:
	emu_addw(&emu_sp, 0x8);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0xC);
	emu_dx = emu_get_memory16(emu_es, emu_bx, 0xA);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0xA));
	if (emu_ax == emu_get_memory16(emu_ss, emu_bp, -0xA)) {
		emu_cmpw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0xC));
		if (emu_dx == emu_get_memory16(emu_ss, emu_bp, -0xC)) {
			emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
			emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x6);
			emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x8);
			emu_get_memory16(emu_es, emu_bx, 0xC) = emu_ax;
			emu_get_memory16(emu_es, emu_bx, 0xA) = emu_dx;
		}
	}
l__095C:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0xE), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp, -0xE) == 0x0) {
		emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x10), 0x1);
		if (emu_get_memory16(emu_ss, emu_bp, -0x10) == 0x1) goto l__0987;
	}
l__0968:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x6);
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x8);
	emu_get_memory16(emu_ss, emu_bp, -0x4A) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x4C) = emu_dx;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x50);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x0984); f__2649_0EBE_003A_3C21();
l__0984:
	emu_addw(&emu_sp, 0x8);
l__0987:
	goto l__0AD6;
l__098A:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x26), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp, -0x26) != 0x0) goto l__09E0;
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x28), 0x1);
	if (emu_get_memory16(emu_ss, emu_bp, -0x28) != 0x1) goto l__09E0;
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp, -0xA) != 0x0) goto l__09A2;
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0xC), 0x1);
	if (emu_get_memory16(emu_ss, emu_bp, -0xC) == 0x1) goto l__09C1;
l__09A2:
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
l__09BE:
	emu_sp += 8;
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
l__09E0:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x1E);
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x20);
	emu_addw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0x30));
	emu_adcw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2E));
	emu_addw(&emu_dx, 0x20);
	emu_adcw(&emu_ax, 0x0);
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x40), emu_dx);
	emu_adcw(&emu_get_memory16(emu_ss, emu_bp, -0x3E), emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x1A));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x1C));
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x40);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x0A08); f__2649_0EBE_003A_3C21();
l__0A08:
	emu_addw(&emu_sp, 0x8);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0xC);
	emu_dx = emu_get_memory16(emu_es, emu_bx, 0xA);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0xA));
	if (emu_ax == emu_get_memory16(emu_ss, emu_bp, -0xA)) {
		emu_cmpw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0xC));
		if (emu_dx == emu_get_memory16(emu_ss, emu_bp, -0xC)) {
			emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
			emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x1A);
			emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x1C);
			emu_get_memory16(emu_es, emu_bx, 0xC) = emu_ax;
			emu_get_memory16(emu_es, emu_bx, 0xA) = emu_dx;
		}
	}
l__0A31:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0xE), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp, -0xE) == 0x0) {
		emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x10), 0x1);
		if (emu_get_memory16(emu_ss, emu_bp, -0x10) == 0x1) goto l__0A5C;
	}
l__0A3D:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x1A);
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x1C);
	emu_get_memory16(emu_ss, emu_bp, -0x4A) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x4C) = emu_dx;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x50);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x0A59); f__2649_0EBE_003A_3C21();
l__0A59:
	emu_addw(&emu_sp, 0x8);
l__0A5C:
	emu_ax = 0x10;
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x30);
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x20);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0A6F); emu_cs = 0x01F7; emu_Tools_Memcopy();
l__0A6F:
	emu_addw(&emu_sp, 0xA);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x40);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x0A82); f__2649_0EFC_003A_7D24();
l__0A82:
	emu_addw(&emu_sp, 0x8);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x16);
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x18);
	emu_get_memory16(emu_ss, emu_bp, -0x36) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x38) = emu_dx;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x40);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x0AA1); f__2649_0EBE_003A_3C21();
l__0AA1:
	emu_addw(&emu_sp, 0x8);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x16));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x18));
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x30);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x0AB4); f__2649_0EFC_003A_7D24();
l__0AB4:
	emu_addw(&emu_sp, 0x8);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x12);
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x14);
	emu_get_memory16(emu_ss, emu_bp, -0x22) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x24) = emu_dx;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x16));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x18));
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x30);
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
	if (emu_get_memory16(emu_ds, 0x00, 0x9A34) == 0x0) goto l__0AF9;
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x9A34));
	emu_push(emu_cs); emu_push(0x0AF8); emu_cs = 0x2BF2; f__2BF2_00B7_000E_61C1();
l__0AF8:
	emu_pop(&emu_cx);
l__0AF9:
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
 * Decompiled function f__2649_0B07_000E_F670()
 *
 * @name f__2649_0B07_000E_F670
 * @implements 2649:0B07:000E:F670 ()
 * @implements 2649:0B15:000F:AFC5
 * @implements 2649:0B24:0002:2597
 *
 * Called From: 2649:0D1A:002A:EE78
 * Called From: 2649:0E00:0017:DAFF
 */
void f__2649_0B07_000E_F670()
{
l__0B07:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x0B15); f__2649_0F72_001C_A19C();
l__0B15:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_dx = 0xE;
	emu_imuluw(&emu_ax, emu_dx);
	emu_bx = emu_ax;
	emu_ax = emu_get_memory16(emu_ds, emu_bx, 0x9A18);
	goto l__0B24;
l__0B24:
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
 * Called From: 2649:0B88:000A:AC92
 * Called From: 2649:0D29:000F:0618
 * Called From: 2649:0E0F:000F:82E3
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
 * Decompiled function f__2649_0B64_0011_32F8()
 *
 * @name f__2649_0B64_0011_32F8
 * @implements 2649:0B64:0011:32F8 ()
 * @implements 2649:0B75:000C:641E
 * @implements 2649:0B7F:0002:D4BA
 * @implements 2649:0B81:000A:AC92
 * @implements 2649:0B8B:0014:E95D
 * @implements 2649:0B9F:000B:C25D
 * @implements 2649:0BAA:0004:893F
 *
 * Called From: B483:00F8:0011:5422
 * Called From: B483:01C8:0011:7C21
 */
void f__2649_0B64_0011_32F8()
{
l__0B64:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x10);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x0B75); f__2649_0BAE_001D_25B1();
l__0B75:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax != 0) goto l__0B81;
	emu_xorw(&emu_dx, emu_dx);
	emu_xorw(&emu_ax, emu_ax);
l__0B7F:
	goto l__0BAA;
l__0B81:
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x0B8B); f__2649_0B26_0011_B1B8();
l__0B8B:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_subw(&emu_ax, 0x10);
	emu_sbbw(&emu_dx, 0x0);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x10);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x0B9F); f__2649_0EFC_003A_7D24();
l__0B9F:
	emu_addw(&emu_sp, 0x8);
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0xE);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x10);
	goto l__0B7F;
l__0BAA:
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
 * Called From: 1DD7:02C3:000D:614D
 * Called From: 1FB5:0C32:000B:94DE
 * Called From: 1FB5:0F28:0019:04E8
 * Called From: 23E1:01D9:000B:ACDF
 * Called From: 2649:05ED:0011:F459
 * Called From: 2649:0B72:0011:32F8
 * Called From: B483:00E7:0031:F9F6
 * Called From: B483:01B7:0037:9CAC
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

static void f__2649_0E96()
{
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_dx = emu_get_memory16(emu_ss, emu_bp,  0xC);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0xA);
	emu_cl = 0x4;
	emu_push(emu_cs); emu_push(0x0EA6); emu_cs = 0x01F7; emu_Tools_Shrd();
	emu_dx = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_addw(&emu_dx, emu_ax);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0xA);
	emu_andw(&emu_ax, 0xF);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_pop(&emu_dx);
	emu_addw(&emu_ax, emu_dx);
	emu_pop(&emu_dx);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__2649_0C09_0019_459F()
 *
 * @name f__2649_0C09_0019_459F
 * @implements 2649:0C09:0019:459F ()
 * @implements 2649:0CF3:002A:EE78
 * @implements 2649:0D1D:000F:0618
 * @implements 2649:0D2C:000E:A84B
 * @implements 2649:0D3A:0002:C03A
 * @implements 2649:0D3C:0004:893F
 *
 * Called From: 2B0E:005E:0005:C642
 */
void f__2649_0C09_0019_459F()
{
l__0C09:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x6);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x10);
	emu_dx = emu_get_memory16(emu_ss, emu_bp,  0xE);
	emu_andw(&emu_dx, 0x1);
	emu_andw(&emu_ax, 0x0);
	emu_orw(&emu_dx, emu_ax);
	if (emu_dx != 0) goto l__0C22;
	goto l__0CF3;
l__0C22:
	emu_subw(&emu_get_memory16(emu_ss, emu_bp,  0xE), 0x1);
	emu_sbbw(&emu_get_memory16(emu_ss, emu_bp,  0x10), 0x0);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_cs);
	emu_push(0x0C34); f__2649_0B26_0011_B1B8();
l__0C34:
	emu_sp += 4;
	emu_andw(&emu_ax, 0x1);
	emu_andw(&emu_dx, 0x0);
	emu_orw(&emu_dx, emu_ax);
	if (emu_dx == 0) goto l__0C8D;
	emu_xorw(&emu_ax, emu_ax);
	emu_dx = 0x2;
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x2);
	emu_push(emu_ax);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0xA);
	emu_decw(&emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x0C59); f__2649_0D40_0019_C58F();
l__0C59:
	emu_sp += 12;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x0);
	emu_get_memory8(emu_ss, emu_bp, -0x1) = emu_al;
	emu_ax = 0x0;
	emu_dx = 0x2;
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0xA);
	emu_decw(&emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x2);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x0C7D); f__2649_0C09_0019_459F();
l__0C7D:
	emu_sp += 12;
	emu_incw(&emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_addw(&emu_get_memory16(emu_ss, emu_bp,  0xA), 0x1);
	emu_adcw(&emu_get_memory16(emu_ss, emu_bp,  0xA), 0xA);
	goto l__0CF3;
l__0C8D:
	emu_ax = 0x0;
	emu_dx = 0x2;
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x2);
	emu_push(emu_ax);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0xC);
	emu_dx = emu_get_memory16(emu_ss, emu_bp,  0xA);
	emu_addw(&emu_dx, emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_adcw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x10));
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs);
	emu_push(0x0CAC); f__2649_0D40_0019_C58F();
l__0CAC:
	emu_sp += 12;
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x10));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x0CC0); f__2649_0E96();
l__0CC0:
	emu_sp += 8;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x0);
	emu_get_memory8(emu_ss, emu_bp, -0x2) = emu_al;
	emu_ax = 0x0;
	emu_dx = 0x2;
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0xC);
	emu_dx = emu_get_memory16(emu_ss, emu_bp,  0xA);
	emu_addw(&emu_dx, emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_adcw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x10));
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x2);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x0CF0); f__2649_0C09_0019_459F();
l__0CF0:
	emu_sp += 12;
l__0CF3:
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x10);
	emu_dx = emu_get_memory16(emu_ss, emu_bp,  0xE);
	emu_get_memory16(emu_ds, 0x00, 0x9A40) = emu_ax;
	emu_get_memory16(emu_ds, 0x00, 0x9A3E) = emu_dx;
	emu_get_memory16(emu_ds, 0x00, 0x9A42) = 0x0;
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_dx = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_get_memory16(emu_ds, 0x00, 0x9A46) = emu_ax;
	emu_get_memory16(emu_ds, 0x00, 0x9A44) = emu_dx;
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_cs);
	emu_push(0x0D1D); f__2649_0B07_000E_F670();
l__0D1D:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ds, 0x00, 0x9A48) = emu_ax;
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_cs);
	emu_push(0x0D2C); f__2649_0B26_0011_B1B8();
l__0D2C:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ds, 0x00, 0x9A4C) = emu_dx;
	emu_get_memory16(emu_ds, 0x00, 0x9A4A) = emu_ax;
	emu_push(emu_cs); emu_push(0x0D3A); emu_cs = 0x2BF2; f__2BF2_008E_0013_1D73();
l__0D3A:
	goto l__0D3C;
l__0D3C:
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__2649_0D40_0019_C58F()
 *
 * @name f__2649_0D40_0019_C58F
 * @implements 2649:0D40:0019:C58F ()
 * @implements 2649:0DEC:0017:DAFF
 * @implements 2649:0E03:000F:82E3
 * @implements 2649:0E12:0021:12DE
 * @implements 2649:0E33:0002:C03A
 * @implements 2649:0E35:0004:893F
 *
 * Called From: 2B0E:004A:0026:299A
 */
void f__2649_0D40_0019_C58F()
{
l__0D40:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x6);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x10);
	emu_dx = emu_get_memory16(emu_ss, emu_bp,  0xE);
	emu_andw(&emu_dx, 0x1);
	emu_andw(&emu_ax, 0x0);
	emu_orw(&emu_dx, emu_ax);
	if (emu_dx != 0) goto l__0D59;
	goto l__0DEC;
l__0D59:
	emu_subw(&emu_get_memory16(emu_ss, emu_bp,  0xE), 0x1);
	emu_sbbw(&emu_get_memory16(emu_ss, emu_bp,  0x10), 0x0);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x0D6B); f__2649_0B26_0011_B1B8();
l__0D6B:
	emu_sp += 4;
	emu_andw(&emu_ax, 0x1);
	emu_andw(&emu_dx, 0x0);
	emu_orw(&emu_ax, emu_dx);
	if (emu_ax == 0) goto l__0DA8;
	emu_ax = 0x0;
	emu_dx = 0x2;
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x2);
	emu_push(emu_ax);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_decw(&emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x0D8F); f__2649_0D40_0019_C58F();
l__0D8F:
	emu_sp += 12;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_al = emu_get_memory8(emu_ss, emu_bp, -0x1);
	emu_get_memory8(emu_es, emu_bx, 0x0) = emu_al;
	emu_incw(&emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_addw(&emu_get_memory16(emu_ss, emu_bp,  0x6), 0x1);
	emu_adcw(&emu_get_memory16(emu_ss, emu_bp,  0x8), 0x0);
	goto l__0DEC;
l__0DA8:
	emu_ax = 0x0;
	emu_dx = 0x2;
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x2);
	emu_push(emu_ax);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_dx = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_addw(&emu_dx, emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_adcw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x10));
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs);
	emu_push(0x0DC6); f__2649_0D40_0019_C58F();
l__0DC6:
	emu_sp += 12;
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x10));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_cs);
	emu_push(0x0DDA); f__2649_0E96();
l__0DDA:
	emu_sp += 8;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_al = emu_get_memory8(emu_ss, emu_bp, -0x2);
	emu_get_memory8(emu_es, emu_bx, 0x0) = emu_al;
l__0DEC:
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x10);
	emu_dx = emu_get_memory16(emu_ss, emu_bp,  0xE);
	emu_get_memory16(emu_ds, 0x00, 0x9A40) = emu_ax;
	emu_get_memory16(emu_ds, 0x00, 0x9A3E) = emu_dx;
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x0E03); f__2649_0B07_000E_F670();
l__0E03:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ds, 0x00, 0x9A42) = emu_ax;
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x0E12); f__2649_0B26_0011_B1B8();
l__0E12:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ds, 0x00, 0x9A46) = emu_dx;
	emu_get_memory16(emu_ds, 0x00, 0x9A44) = emu_ax;
	emu_get_memory16(emu_ds, 0x00, 0x9A48) = 0x0;
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0xC);
	emu_dx = emu_get_memory16(emu_ss, emu_bp,  0xA);
	emu_get_memory16(emu_ds, 0x00, 0x9A4C) = emu_ax;
	emu_get_memory16(emu_ds, 0x00, 0x9A4A) = emu_dx;
	emu_push(emu_cs); emu_push(0x0E33); emu_cs = 0x2BF2; f__2BF2_008E_0013_1D73();
l__0E33:
	goto l__0E35;
l__0E35:
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
 * Called From: 2649:05BA:001F:EDC4
 * Called From: 2649:0811:0010:E8E0
 * Called From: 2649:0843:001C:BA62
 * Called From: 2649:0843:001F:FF73
 * Called From: 2649:0856:0013:3CA0
 * Called From: 2649:08EB:001F:34E8
 * Called From: 2649:091D:001F:7ECA
 * Called From: 2649:0930:0013:BD1B
 * Called From: 2649:0981:001C:4566
 * Called From: 2649:0A05:0028:6B45
 * Called From: 2649:0A56:001C:82C9
 * Called From: 2649:0A9E:001F:BA4A
 * Called From: 2649:0AD0:0006:783B
 * Called From: 2649:0AD0:001F:F2CE
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
 * Called From: 2649:059B:004D:D9F1
 * Called From: 2649:059B:0010:EF5E
 * Called From: 2649:063A:0020:1112
 * Called From: 2649:0674:0010:AFFA
 * Called From: 2649:06E1:0010:EFBF
 * Called From: 2649:072E:004D:A8F4
 * Called From: 2649:072E:0010:A8DB
 * Called From: 2649:07B9:0021:9330
 * Called From: 2649:0824:0013:BC9E
 * Called From: 2649:08CC:0028:8D49
 * Called From: 2649:08FE:0013:3D15
 * Called From: 2649:0A7F:0013:7CB5
 * Called From: 2649:0AB1:0013:7D89
 * Called From: 2649:0B9C:0014:E95D
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
 * Called From: 2649:05D1:0017:42D3
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
 * Called From: 2649:0B12:000E:F670
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

/**
 * Decompiled function f__2649_106A_0018_BAE3()
 *
 * @name f__2649_106A_0018_BAE3
 * @implements 2649:106A:0018:BAE3 ()
 * @implements 2649:1082:001E:919C
 * @implements 2649:10A0:0017:D2D7
 * @implements 2649:10B7:000C:001A
 * @implements 2649:10C3:0006:8488
 * @implements 2649:10C9:0005:B085
 *
 * Called From: 2BF2:00AA:000E:FF03
 */
void f__2649_106A_0018_BAE3()
{
l__106A:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x4);
	emu_push(emu_si);
	emu_si = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_cmpw(&emu_si, 0x80);
	if ((int16)emu_si < (int16)0x80) goto l__1080;
	emu_cmpw(&emu_si, 0xA0);
	if (emu_si != 0xA0) goto l__1082;
l__1080:
	goto l__10CE;
l__1082:
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ds;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = 0x6E46;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_si);
	emu_push(emu_ds);
	emu_ax = 0x6E6E;
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x9939;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x10A0); emu_cs = 0x01F7; emu_String_sprintf();
l__10A0:
	emu_addw(&emu_sp, 0xE);
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x9939;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x10B7); emu_cs = 0x2B1E; f__2B1E_0189_001B_E6CF();
l__10B7:
	emu_addw(&emu_sp, 0xA);
	emu_ax = 0x3C;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x10C3); emu_cs = 0x24FD; f__24FD_000A_000B_2043();
l__10C3:
	emu_pop(&emu_cx);
	emu_push(emu_cs); emu_push(0x10C9); emu_cs = 0x29E8; emu_Input_History_Clear();
l__10C9:
	emu_push(emu_cs); emu_push(0x10CE); emu_cs = 0x29E8; f__29E8_07FA_0020_177A();
l__10CE:
	emu_pop(&emu_si);
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

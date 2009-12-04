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
	if (emu_ax != 0) { /* Unresolved jump */ emu_ip = 0x0029; emu_last_cs = 0x2649; emu_last_ip = 0x0021; emu_last_length = 0x000A; emu_last_crc = 0x4104; emu_call(); return; }
	emu_xorw(&emu_dx, emu_dx);
	emu_xorw(&emu_ax, emu_ax);
	goto l__0051;
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
	if (emu_ax != 0) { /* Unresolved jump */ emu_ip = 0x0079; emu_last_cs = 0x2649; emu_last_ip = 0x006A; emu_last_length = 0x001D; emu_last_crc = 0xFEB5; emu_call(); return; }
	emu_push(emu_cs);
	emu_push(0x0070); f__2649_0003_0014_67A9();
l__0070:
	emu_orw(&emu_ax, emu_dx);
	if (emu_ax != 0) { /* Unresolved jump */ emu_ip = 0x0079; emu_last_cs = 0x2649; emu_last_ip = 0x0072; emu_last_length = 0x0009; emu_last_crc = 0x4B54; emu_call(); return; }
	emu_xorw(&emu_ax, emu_ax);
	goto l__02B5;
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
 * @implements 2649:05DA:0005:8BCF
 *
 * Called From: 23E1:002F:001C:B654
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
				if (emu_get_memory16(emu_es, emu_bx, 0xC) != 0x0) { /* Unresolved jump */ emu_ip = 0x0382; emu_last_cs = 0x2649; emu_last_ip = 0x0372; emu_last_length = 0x004C; emu_last_crc = 0x0948; emu_call(); return; }
				emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0xA), 0x1);
				if (emu_get_memory16(emu_es, emu_bx, 0xA) != 0x1) { /* Unresolved jump */ emu_ip = 0x0382; emu_last_cs = 0x2649; emu_last_ip = 0x0379; emu_last_length = 0x004C; emu_last_crc = 0x0948; emu_call(); return; }
			}
		}
	}
l__037B:
	emu_xorw(&emu_dx, emu_dx);
	emu_xorw(&emu_ax, emu_ax);
	goto l__05DA;
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
	/* Unresolved jump */ emu_ip = 0x063D; emu_last_cs = 0x2649; emu_last_ip = 0x063D; emu_last_length = 0x0020; emu_last_crc = 0x1112; emu_call();
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
	if (emu_ax != 0) { /* Unresolved jump */ emu_ip = 0x0AE8; emu_last_cs = 0x2649; emu_last_ip = 0x0AE4; emu_last_length = 0x000E; emu_last_crc = 0xEEB3; emu_call(); return; }
	goto l__0B05;
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
 * @implements 2649:0BCB:0011:A36B
 * @implements 2649:0BDC:0024:C147
 * @implements 2649:0BFE:0002:A3BA
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
	if (emu_ax > emu_get_memory16(emu_ss, emu_bp, -0x2)) { /* Unresolved jump */ emu_ip = 0x0C00; emu_last_cs = 0x2649; emu_last_ip = 0x0BF5; emu_last_length = 0x0024; emu_last_crc = 0xC147; emu_call(); return; }
	if (emu_ax == emu_get_memory16(emu_ss, emu_bp, -0x2)) {
		emu_cmpw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0x4));
		if (emu_dx > emu_get_memory16(emu_ss, emu_bp, -0x4)) { /* Unresolved jump */ emu_ip = 0x0C00; emu_last_cs = 0x2649; emu_last_ip = 0x0BFC; emu_last_length = 0x0024; emu_last_crc = 0xC147; emu_call(); return; }
	}
l__0BFE:
	goto l__0BC7;
l__0C05:
	emu_sp = emu_bp;
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
 *
 * Called From: 2649:063A:0020:1112
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
	/* Unresolved jump */ emu_ip = 0x0F36; emu_last_cs = 0x2649; emu_last_ip = 0x0F36; emu_last_length = 0x003A; emu_last_crc = 0x7D24; emu_call();
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

/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__1423_0009_0025_FE5D()
 *
 * @name f__1423_0009_0025_FE5D
 * @implements 1423:0009:0025:FE5D ()
 * @implements 1423:0034:0003:9DB3
 * @implements 1423:0037:001F:CF6C
 * @implements 1423:0056:000B:8237
 * @implements 1423:0061:001A:9364
 * @implements 1423:007B:0005:9FAE
 * @implements 1423:0080:0025:A252
 * @implements 1423:00A5:000E:2A33
 * @implements 1423:00A8:000B:166D
 * @implements 1423:00B3:0048:A2B2
 * @implements 1423:00B5:0046:FB00
 * @implements 1423:00D4:0027:06F3
 * @implements 1423:00E3:0018:9B05
 * @implements 1423:00FB:0025:99AA
 * @implements 1423:00FE:0022:DCFE
 * @implements 1423:0120:001C:E795
 * @implements 1423:0122:001A:E4BD
 * @implements 1423:013C:0025:804F
 * @implements 1423:013F:0022:C51B
 * @implements 1423:0180:0005:C65F
 * @implements 1423:0185:0006:F7CE
 *
 * Called From: 1423:02D0:0004:038D
 */
void f__1423_0009_0025_FE5D()
{
l__0009:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x6);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_xorw(&emu_si, emu_si);
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x379E), 0x0);
	if (emu_get_memory16(emu_ds, 0x00, 0x379E) == 0x0) goto l__0037;
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x60AE;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x002E); emu_cs = 0x2B1E; f__2B1E_0189_001B_E6CF();
	/* Unresolved jump */ emu_ip = 0x002E; emu_last_cs = 0x1423; emu_last_ip = 0x002E; emu_last_length = 0x0025; emu_last_crc = 0xFE5D; emu_call();
l__0034:
	goto l__0185;
l__0037:
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x76B2);
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x76B0);
	emu_subw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x38AC));
	emu_sbbw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x38AE));
	emu_orw(&emu_ax, emu_ax);
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) goto l__0056;
	if ((emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x0052; emu_last_cs = 0x1423; emu_last_ip = 0x004A; emu_last_length = 0x001F; emu_last_crc = 0xCF6C; emu_call(); return; }
	emu_cmpw(&emu_dx, 0x1C20);
	if (emu_dx >= 0x1C20) goto l__0056;
	emu_xorw(&emu_ax, emu_ax);
	goto l__0034;
l__0056:
	emu_testw(&emu_get_memory16(emu_ds, 0x00, 0x8D01), 0x3);
	if ((emu_get_memory16(emu_ds, 0x00, 0x8D01) & 0x3) != 0) goto l__0061;
	goto l__00FE;
l__0061:
	emu_xorw(&emu_di, emu_di);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = 0x0;
	emu_ax = 0xFFFF;
	emu_push(emu_ax);
	emu_ax = 0xFFFF;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x007B); emu_cs = 0x1082; emu_Building_FindFirst();
	goto l__007B;
l__007B:
	emu_addw(&emu_sp, 0x8);
	goto l__00B5;
l__0080:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0xF);
	if (emu_get_memory8(emu_es, emu_bx, 0x2) != 0xF) {
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
		emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0x10);
		if (emu_get_memory8(emu_es, emu_bx, 0x2) != 0x10) {
			emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
			emu_al = emu_get_memory8(emu_es, emu_bx, 0x8);
			emu_ax = (int8)emu_al;
			emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x3A38));
			if (emu_ax != emu_get_memory16(emu_ds, 0x00, 0x3A38)) goto l__00A5;
			emu_incw(&emu_di);
		}
	}
	goto l__00A8;
l__00A5:
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x6));
	goto l__00A8;
l__00A8:
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x00B3); emu_cs = 0x1082; emu_Building_FindNext();
	goto l__00B3;
l__00B3:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	goto l__00B5;
l__00B5:
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_ax != 0) goto l__0080;
	emu_testw(&emu_get_memory16(emu_ds, 0x00, 0x8D01), 0x1);
	if ((emu_get_memory16(emu_ds, 0x00, 0x8D01) & 0x1) != 0) {
		emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x0);
		if (emu_get_memory16(emu_ss, emu_bp, -0x6) == 0x0) {
			emu_orw(&emu_si, 0x1);
		}
	}
	goto l__00D4;
l__00D4:
	emu_testw(&emu_get_memory16(emu_ds, 0x00, 0x8D01), 0x2);
	if ((emu_get_memory16(emu_ds, 0x00, 0x8D01) & 0x2) != 0) {
		emu_orw(&emu_di, emu_di);
		if (emu_di == 0) {
			emu_orw(&emu_si, 0x1);
		}
	}
	goto l__00E3;
l__00E3:
	emu_orw(&emu_si, emu_si);
	if (emu_si == 0) goto l__00FE;
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x60BA;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x00FB); emu_cs = 0x2B1E; f__2B1E_0189_001B_E6CF();
	goto l__00FB;
l__00FB:
	emu_addw(&emu_sp, 0xA);
	goto l__00FE;
l__00FE:
	emu_testw(&emu_get_memory16(emu_ds, 0x00, 0x8D01), 0x4);
	if ((emu_get_memory16(emu_ds, 0x00, 0x8D01) & 0x4) == 0) goto l__013F;
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x38B6), 0xFFFF);
	if (emu_get_memory16(emu_ds, 0x00, 0x38B6) == 0xFFFF) goto l__013F;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x3A3A));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x1C);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x38B6));
	if (emu_ax > emu_get_memory16(emu_ds, 0x00, 0x38B6)) goto l__0120;
	emu_ax = 0x1;
	goto l__0122;
l__0120:
	emu_xorw(&emu_ax, emu_ax);
	goto l__0122;
l__0122:
	emu_orw(&emu_si, emu_ax);
	emu_orw(&emu_si, emu_si);
	if (emu_si == 0) goto l__013F;
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x60C7;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x013C); emu_cs = 0x2B1E; f__2B1E_0189_001B_E6CF();
	goto l__013C;
l__013C:
	emu_addw(&emu_sp, 0xA);
	goto l__013F;
l__013F:
	emu_testw(&emu_get_memory16(emu_ds, 0x00, 0x8D01), 0x8);
	if ((emu_get_memory16(emu_ds, 0x00, 0x8D01) & 0x8) == 0) goto l__0180;
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x76B2);
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x76B0);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x38BA));
	if ((int16)emu_ax > (int16)emu_get_memory16(emu_ds, 0x00, 0x38BA)) { /* Unresolved jump */ emu_ip = 0x0161; emu_last_cs = 0x1423; emu_last_ip = 0x0152; emu_last_length = 0x0022; emu_last_crc = 0xC51B; emu_call(); return; }
	if ((int16)emu_ax < (int16)emu_get_memory16(emu_ds, 0x00, 0x38BA)) { /* Unresolved jump */ emu_ip = 0x015C; emu_last_cs = 0x1423; emu_last_ip = 0x0154; emu_last_length = 0x0022; emu_last_crc = 0xC51B; emu_call(); return; }
	emu_cmpw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x38B8));
	if (emu_dx >= emu_get_memory16(emu_ds, 0x00, 0x38B8)) { /* Unresolved jump */ emu_ip = 0x0161; emu_last_cs = 0x1423; emu_last_ip = 0x015A; emu_last_length = 0x0022; emu_last_crc = 0xC51B; emu_call(); return; }
	emu_ax = 0x1;
	/* Unresolved jump */ emu_ip = 0x0163; emu_last_cs = 0x1423; emu_last_ip = 0x015F; emu_last_length = 0x0022; emu_last_crc = 0xC51B; emu_call();
l__0180:
	emu_ax = emu_si;
	goto l__0034;
l__0185:
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
 * Decompiled function f__1423_018B_0015_2B74()
 *
 * @name f__1423_018B_0015_2B74
 * @implements 1423:018B:0015:2B74 ()
 * @implements 1423:019D:0003:DD1F
 * @implements 1423:01A0:000B:8236
 * @implements 1423:01AB:001A:9364
 * @implements 1423:01C5:0005:9AAE
 * @implements 1423:01CA:002F:9908
 * @implements 1423:01F9:000E:2A33
 * @implements 1423:01FC:000B:166D
 * @implements 1423:0207:0026:8267
 * @implements 1423:0209:0024:E4AE
 * @implements 1423:022D:0015:5623
 * @implements 1423:022F:0013:57B7
 * @implements 1423:0246:0002:C13A
 * @implements 1423:0248:0028:8EE4
 * @implements 1423:024A:0026:BC08
 * @implements 1423:0270:0026:4115
 * @implements 1423:0272:0024:8B15
 * @implements 1423:0274:0022:251D
 * @implements 1423:029A:0005:864B
 * @implements 1423:029F:0006:F7CE
 *
 * Called From: 1423:0321:0005:40D1
 */
void f__1423_018B_0015_2B74()
{
l__018B:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x6);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x379E), 0x0);
	if (emu_get_memory16(emu_ds, 0x00, 0x379E) == 0x0) goto l__01A0;
	emu_ax = 0x1;
	goto l__019D;
l__019D:
	goto l__029F;
l__01A0:
	emu_testw(&emu_get_memory16(emu_ds, 0x00, 0x8D03), 0x3);
	if ((emu_get_memory16(emu_ds, 0x00, 0x8D03) & 0x3) != 0) goto l__01AB;
	goto l__0248;
l__01AB:
	emu_xorw(&emu_di, emu_di);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = 0x0;
	emu_ax = 0xFFFF;
	emu_push(emu_ax);
	emu_ax = 0xFFFF;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x01C5); emu_cs = 0x1082; emu_Building_FindFirst();
	goto l__01C5;
l__01C5:
	emu_addw(&emu_sp, 0x8);
	goto l__0209;
l__01CA:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0xF);
	if (emu_get_memory8(emu_es, emu_bx, 0x2) != 0xF) {
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
		emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0x10);
		if (emu_get_memory8(emu_es, emu_bx, 0x2) != 0x10) {
			emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
			emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0xE);
			if (emu_get_memory8(emu_es, emu_bx, 0x2) != 0xE) {
				emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
				emu_al = emu_get_memory8(emu_es, emu_bx, 0x8);
				emu_ax = (int8)emu_al;
				emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x3A38));
				if (emu_ax != emu_get_memory16(emu_ds, 0x00, 0x3A38)) goto l__01F9;
				emu_incw(&emu_di);
			}
		}
	}
	goto l__01FC;
l__01F9:
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x6));
	goto l__01FC;
l__01FC:
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x0207); emu_cs = 0x1082; emu_Building_FindNext();
	goto l__0207;
l__0207:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	goto l__0209;
l__0209:
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_ax != 0) goto l__01CA;
	emu_si = 0x1;
	emu_testw(&emu_get_memory16(emu_ds, 0x00, 0x8D03), 0x1);
	if ((emu_get_memory16(emu_ds, 0x00, 0x8D03) & 0x1) == 0) { /* Unresolved jump */ emu_ip = 0x0231; emu_last_cs = 0x1423; emu_last_ip = 0x0220; emu_last_length = 0x0024; emu_last_crc = 0xE4AE; emu_call(); return; }
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp, -0x6) != 0x0) goto l__022D;
	emu_ax = 0x1;
	goto l__022F;
l__022D:
	emu_xorw(&emu_ax, emu_ax);
	goto l__022F;
l__022F:
	emu_andw(&emu_si, emu_ax);
	emu_testw(&emu_get_memory16(emu_ds, 0x00, 0x8D03), 0x2);
	if ((emu_get_memory16(emu_ds, 0x00, 0x8D03) & 0x2) == 0) goto l__0246;
	emu_orw(&emu_di, emu_di);
	if (emu_di == 0) { /* Unresolved jump */ emu_ip = 0x0242; emu_last_cs = 0x1423; emu_last_ip = 0x023B; emu_last_length = 0x0013; emu_last_crc = 0x57B7; emu_call(); return; }
	emu_ax = 0x1;
	/* Unresolved jump */ emu_ip = 0x0244; emu_last_cs = 0x1423; emu_last_ip = 0x0240; emu_last_length = 0x0013; emu_last_crc = 0x57B7; emu_call();
l__0246:
	goto l__024A;
l__0248:
	emu_xorw(&emu_si, emu_si);
	goto l__024A;
l__024A:
	emu_testw(&emu_get_memory16(emu_ds, 0x00, 0x8D03), 0x4);
	if ((emu_get_memory16(emu_ds, 0x00, 0x8D03) & 0x4) == 0) goto l__0274;
	emu_orw(&emu_si, emu_si);
	if (emu_si != 0) goto l__0274;
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x38B6), 0xFFFF);
	if (emu_get_memory16(emu_ds, 0x00, 0x38B6) == 0xFFFF) goto l__0274;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x3A3A));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x1C);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x38B6));
	if (emu_ax > emu_get_memory16(emu_ds, 0x00, 0x38B6)) goto l__0270;
	emu_ax = 0x1;
	goto l__0272;
l__0270:
	emu_xorw(&emu_ax, emu_ax);
	goto l__0272;
l__0272:
	emu_si = emu_ax;
	goto l__0274;
l__0274:
	emu_testw(&emu_get_memory16(emu_ds, 0x00, 0x8D03), 0x8);
	if ((emu_get_memory16(emu_ds, 0x00, 0x8D03) & 0x8) == 0) goto l__029A;
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x76B2);
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x76B0);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x38BA));
	if ((int16)emu_ax > (int16)emu_get_memory16(emu_ds, 0x00, 0x38BA)) { /* Unresolved jump */ emu_ip = 0x0296; emu_last_cs = 0x1423; emu_last_ip = 0x0287; emu_last_length = 0x0022; emu_last_crc = 0x251D; emu_call(); return; }
	if ((int16)emu_ax < (int16)emu_get_memory16(emu_ds, 0x00, 0x38BA)) { /* Unresolved jump */ emu_ip = 0x0291; emu_last_cs = 0x1423; emu_last_ip = 0x0289; emu_last_length = 0x0022; emu_last_crc = 0x251D; emu_call(); return; }
	emu_cmpw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x38B8));
	if (emu_dx >= emu_get_memory16(emu_ds, 0x00, 0x38B8)) { /* Unresolved jump */ emu_ip = 0x0296; emu_last_cs = 0x1423; emu_last_ip = 0x028F; emu_last_length = 0x0022; emu_last_crc = 0x251D; emu_call(); return; }
	emu_ax = 0x1;
	/* Unresolved jump */ emu_ip = 0x0298; emu_last_cs = 0x1423; emu_last_ip = 0x0294; emu_last_length = 0x0022; emu_last_crc = 0x251D; emu_call();
l__029A:
	emu_ax = emu_si;
	goto l__019D;
l__029F:
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
 * Decompiled function f__1423_02A5_002A_29F1()
 *
 * @name f__1423_02A5_002A_29F1
 * @implements 1423:02A5:002A:29F1 ()
 * @implements 1423:02C5:000A:113F
 * @implements 1423:02CF:0004:038D
 * @implements 1423:02D3:000E:17FE
 * @implements 1423:02E1:0008:FC73
 * @implements 1423:02E9:0021:6A50
 * @implements 1423:030A:000C:4B79
 * @implements 1423:0316:0009:0C45
 * @implements 1423:031F:0005:40D1
 * @implements 1423:0324:0007:EE13
 * @implements 1423:032B:0009:16AF
 * @implements 1423:0334:000E:1BB4
 * @implements 1423:0342:0008:250B
 * @implements 1423:034A:0008:54DF
 * @implements 1423:0352:0005:4EFC
 * @implements 1423:0357:0029:31D8
 * @implements 1423:0380:000F:DD38
 * @implements 1423:03BF:0005:6168
 * @implements 1423:03C4:0005:9EF9
 * @implements 1423:03C9:0005:816D
 * @implements 1423:03CE:0019:16A3
 * @implements 1423:03E7:0010:D5EE
 * @implements 1423:03F7:0016:5986
 * @implements 1423:040D:0026:1D48
 * @implements 1423:041E:0015:7EAD
 * @implements 1423:0433:0008:AC6D
 * @implements 1423:043B:0009:66BD
 * @implements 1423:0444:0008:C68B
 * @implements 1423:044D:0014:36BE
 * @implements 1423:0461:0005:9BAE
 * @implements 1423:0464:0002:DEBA
 * @implements 1423:0466:0009:17AF
 * @implements 1423:046F:000E:1AB4
 * @implements 1423:047D:0008:250B
 * @implements 1423:0485:0008:24DF
 * @implements 1423:048D:0005:4EFC
 * @implements 1423:0492:000C:9E61
 * @implements 1423:049E:0022:C10E
 * @implements 1423:04A3:001D:CDDA
 * @implements 1423:04C0:0008:2C75
 * @implements 1423:04C8:0026:FD9C
 * @implements 1423:04D4:001A:F01A
 * @implements 1423:04E9:0005:BBA6
 * @implements 1423:04EE:0004:893F
 *
 * Called From: 0642:03FD:0016:21F1
 */
void f__1423_02A5_002A_29F1()
{
l__02A5:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x2);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = 0x1;
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x60A4);
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x60A2);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x76B2));
	if ((int16)emu_ax < (int16)emu_get_memory16(emu_ds, 0x00, 0x76B2)) goto l__02CF;
	if (emu_ax == emu_get_memory16(emu_ds, 0x00, 0x76B2)) {
		emu_cmpw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x76B0));
		if (emu_dx < emu_get_memory16(emu_ds, 0x00, 0x76B0)) goto l__02CF;
	}
	goto l__02C5;
l__02C5:
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x379E), 0x0);
	if (emu_get_memory16(emu_ds, 0x00, 0x379E) != 0x0) goto l__02CF;
	goto l__04E9;
l__02CF:
	emu_push(emu_cs);
	emu_push(0x02D3); f__1423_0009_0025_FE5D();
	goto l__02D3;
l__02D3:
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax != 0) goto l__02E1;
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x379E), 0x0);
	if (emu_get_memory16(emu_ds, 0x00, 0x379E) != 0x0) goto l__02E1;
	goto l__04D4;
l__02E1:
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x02E9); emu_cs = 0x3483; ovl__3483(1);
	goto l__02E9;
l__02E9:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ds, 0x00, 0x3A34) = 0x0;
	emu_ax = 0x2DCE;
	emu_es = emu_ax;
	emu_push(emu_get_memory16(emu_es, 0x00, 0x442));
	emu_push(emu_get_memory16(emu_es, 0x00, 0x440));
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x030A); emu_cs = 0x2B4C; f__2B4C_0002_0029_64AF();
	goto l__030A;
l__030A:
	emu_addw(&emu_sp, 0x8);
	emu_ax = 0xFFFE;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0316); emu_cs = 0x3483; ovl__3483(2);
	goto l__0316;
l__0316:
	emu_pop(&emu_cx);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x031F); emu_cs = 0x34E9; ovl__34E9(2);
	goto l__031F;
l__031F:
	emu_pop(&emu_cx);
	emu_push(emu_cs);
	emu_push(0x0324); f__1423_018B_0015_2B74();
	goto l__0324;
l__0324:
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax != 0) goto l__032B;
	goto l__0466;
l__032B:
	emu_ax = 0x28;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0334); emu_cs = 0x3483; ovl__3483(2);
	goto l__0334;
l__0334:
	emu_pop(&emu_cx);
	emu_ax = 0xFFFF;
	emu_push(emu_ax);
	emu_ax = 0x52;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0342); emu_cs = 0x0FCB; f__0FCB_005F_001C_FDC4();
	goto l__0342;
l__0342:
	emu_pop(&emu_cx);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x034A); emu_cs = 0x10E4; f__10E4_0273_0029_DCE5();
	goto l__034A;
l__034A:
	emu_addw(&emu_sp, 0x6);
	emu_push(emu_cs); emu_push(0x0352); emu_cs = 0x3511; ovl__3511(5);
	goto l__0352;
l__0352:
	emu_push(emu_cs); emu_push(0x0357); emu_cs = 0x34B8; ovl__34B8(1);
	goto l__0357;
l__0357:
	emu_incw(&emu_get_memory16(emu_ds, 0x00, 0x38B2));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3A38));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x8CFF));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x8D41));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x8D3F));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x8D3D));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x8D3B));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x8D39));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x8D37));
	emu_push(emu_cs); emu_push(0x0380); emu_cs = 0x3518; ovl__3518(0);
	goto l__0380;
l__0380:
	emu_addw(&emu_sp, 0x10);
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x38B2), 0x9);
	if (emu_get_memory16(emu_ds, 0x00, 0x38B2) != 0x9) goto l__03BF;
	emu_push(emu_cs); emu_push(0x038F); emu_cs = 0x2B6C; f__2B6C_0137_0020_C73F();
	/* Unresolved jump */ emu_ip = 0x038F; emu_last_cs = 0x1423; emu_last_ip = 0x038F; emu_last_length = 0x000F; emu_last_crc = 0xDD38; emu_call();
l__03BF:
	emu_push(emu_cs); emu_push(0x03C4); emu_cs = 0x2B6C; f__2B6C_0137_0020_C73F();
	goto l__03C4;
l__03C4:
	emu_push(emu_cs); emu_push(0x03C9); emu_cs = 0x34AE; ovl__34AE(0);
	goto l__03C9;
l__03C9:
	emu_push(emu_cs); emu_push(0x03CE); emu_cs = 0x2B6C; f__2B6C_0169_001E_6939();
	goto l__03CE;
l__03CE:
	emu_xorw(&emu_ax, emu_ax);
	emu_dx = 0x300;
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C34));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C32));
	emu_push(emu_ds);
	emu_ax = 0x60DF;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x03E7); emu_cs = 0x253D; f__253D_0000_0013_38F4();
	goto l__03E7;
l__03E7:
	emu_addw(&emu_sp, 0xC);
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x38B2));
	emu_push(emu_cs); emu_push(0x03F7); emu_cs = 0x3503; ovl__3503(0);
	goto l__03F7;
l__03F7:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ds, 0x00, 0x38B0) = emu_ax;
	emu_ax = 0xF;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C38));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C36));
	emu_push(emu_cs); emu_push(0x040D); emu_cs = 0x259E; f__259E_0006_0016_858A();
	goto l__040D;
l__040D:
	emu_addw(&emu_sp, 0x6);
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x38B2), 0x1);
	if (emu_get_memory16(emu_ds, 0x00, 0x38B2) != 0x1) {
		emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x38B2), 0x7);
		if (emu_get_memory16(emu_ds, 0x00, 0x38B2) != 0x7) goto l__0464;
	}
	goto l__041E;
l__041E:
	emu_ax = 0x2DCE;
	emu_push(emu_ax);
	emu_ax = 0x440;
	emu_push(emu_ax);
	emu_ax = 0x7;
	emu_push(emu_ax);
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0433); emu_cs = 0x34B8; ovl__34B8(4);
	goto l__0433;
l__0433:
	emu_addw(&emu_sp, 0x8);
	emu_push(emu_cs); emu_push(0x043B); emu_cs = 0x34DA; ovl__34DA(5);
	goto l__043B;
l__043B:
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax != 0) goto l__044D;
	emu_push(emu_cs); emu_push(0x0444); emu_cs = 0x3500; ovl__3500(0);
	goto l__0444;
l__0444:
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x044C); emu_cs = 0x01F7; emu_Terminate_Normal();
	/* Unresolved jump */ emu_ip = 0x044C; emu_last_cs = 0x1423; emu_last_ip = 0x044C; emu_last_length = 0x0008; emu_last_crc = 0xC68B; emu_call();
l__044D:
	emu_ax = 0x2DCE;
	emu_push(emu_ax);
	emu_ax = 0x440;
	emu_push(emu_ax);
	emu_ax = 0x7;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0461); emu_cs = 0x34B8; ovl__34B8(4);
	goto l__0461;
l__0461:
	emu_addw(&emu_sp, 0x8);
	goto l__0464;
l__0464:
	goto l__04A3;
l__0466:
	emu_ax = 0x29;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x046F); emu_cs = 0x3483; ovl__3483(2);
	goto l__046F;
l__046F:
	emu_pop(&emu_cx);
	emu_ax = 0xFFFF;
	emu_push(emu_ax);
	emu_ax = 0x53;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x047D); emu_cs = 0x0FCB; f__0FCB_005F_001C_FDC4();
	goto l__047D;
l__047D:
	emu_pop(&emu_cx);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0485); emu_cs = 0x10E4; f__10E4_0273_0029_DCE5();
	goto l__0485;
l__0485:
	emu_addw(&emu_sp, 0x6);
	emu_push(emu_cs); emu_push(0x048D); emu_cs = 0x3511; ovl__3511(6);
	goto l__048D;
l__048D:
	emu_push(emu_cs); emu_push(0x0492); emu_cs = 0x34B8; ovl__34B8(1);
	goto l__0492;
l__0492:
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x38B2));
	emu_push(emu_cs); emu_push(0x049E); emu_cs = 0x3503; ovl__3503(0);
	goto l__049E;
l__049E:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ds, 0x00, 0x38B0) = emu_ax;
	goto l__04A3;
l__04A3:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x3A3A));
	emu_andw(&emu_get_memory16(emu_es, emu_bx, 0x4), 0xFFFB);
	emu_ax = 0x2DCE;
	emu_push(emu_ax);
	emu_ax = 0x440;
	emu_push(emu_ax);
	emu_ax = 0x7;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x04C0); emu_cs = 0x34B8; ovl__34B8(4);
	goto l__04C0;
l__04C0:
	emu_addw(&emu_sp, 0x8);
	emu_push(emu_cs); emu_push(0x04C8); emu_cs = 0x34B8; ovl__34B8(5);
	goto l__04C8;
l__04C8:
	emu_get_memory16(emu_ds, 0x00, 0x38BE) = 0x1;
	emu_get_memory16(emu_ds, 0x00, 0x379E) = 0x0;
	goto l__04D4;
l__04D4:
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x76B2);
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x76B0);
	emu_addw(&emu_dx, 0x12C);
	emu_adcw(&emu_ax, 0x0);
	emu_get_memory16(emu_ds, 0x00, 0x60A4) = emu_ax;
	emu_get_memory16(emu_ds, 0x00, 0x60A2) = emu_dx;
	goto l__04E9;
l__04E9:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x2);
	goto l__04EE;
l__04EE:
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__1423_08CD_0012_0004()
 *
 * @name f__1423_08CD_0012_0004
 * @implements 1423:08CD:0012:0004 ()
 * @implements 1423:08DF:0008:EB39
 * @implements 1423:08E7:004C:E110
 * @implements 1423:090D:0026:628E
 * @implements 1423:0933:002A:E8FA
 * @implements 1423:095D:001C:4305
 * @implements 1423:0979:0008:229F
 * @implements 1423:0981:000F:177E
 * @implements 1423:0990:0031:1AE7
 * @implements 1423:0997:002A:3456
 * @implements 1423:09C1:0008:22A9
 * @implements 1423:09C9:001C:D7D2
 * @implements 1423:09E5:0016:B67B
 * @implements 1423:09EF:000C:0A4C
 * @implements 1423:09FB:000A:00B4
 * @implements 1423:0A05:000F:1810
 * @implements 1423:0A14:0008:E2B5
 * @implements 1423:0A1C:0013:FF6C
 * @implements 1423:0A2F:002B:16F9
 * @implements 1423:0A5A:0015:B691
 * @implements 1423:0A6F:000F:5EC0
 * @implements 1423:0A7B:0003:DD18
 * @implements 1423:0A7E:000E:A895
 * @implements 1423:0A8C:0020:4946
 * @implements 1423:0AB0:001A:235A
 * @implements 1423:0ACA:002C:6E18
 * @implements 1423:0AF6:0009:AAB4
 * @implements 1423:0AFF:0014:A87B
 * @implements 1423:0B16:0006:3EF3
 * @implements 1423:0B1C:0003:C21A
 * @implements 1423:0B1F:0011:A442
 * @implements 1423:0B30:0019:3478
 * @implements 1423:0B31:0018:B454
 * @implements 1423:0B3B:000E:3343
 * @implements 1423:0B49:0029:9196
 * @implements 1423:0B61:0011:CB22
 * @implements 1423:0B72:001F:C162
 * @implements 1423:0B91:002C:DD32
 * @implements 1423:0B94:0029:549A
 * @implements 1423:0BB3:000A:6782
 * @implements 1423:0BBD:000F:EB03
 * @implements 1423:0BC7:0005:8BCF
 *
 * Called From: 1A34:2A33:0036:7718
 * Called From: B4B5:05CF:001F:CB42
 * Called From: B4CD:027A:000F:00DA
 * Called From: B4CD:027A:0030:FE42
 * Called From: B4CD:1310:0008:0671
 * Called From: B4CD:1479:0008:0671
 */
void f__1423_08CD_0012_0004()
{
l__08CD:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0xE);
	emu_push(emu_si);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_ax != 0) goto l__08DF;
	goto l__0BC7;
l__08DF:
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_cs); emu_push(0x08E7); emu_cs = 0x10BE; emu_House_Get_ByIndex();
	goto l__08E7;
l__08E7:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_ax;
	emu_ax = 0x1;
	emu_cl = emu_get_memory8(emu_ss, emu_bp,  0xA);
	emu_shlw(&emu_ax, emu_cl);
	emu_get_memory16(emu_ss, emu_bp, -0xA) = emu_ax;
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp,  0xA), 0x1);
	if (emu_get_memory16(emu_ss, emu_bp,  0xA) == 0x1) {
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
		emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0x19);
		if (emu_get_memory8(emu_es, emu_bx, 0x2) != 0x19) {
			emu_orw(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x8);
		}
	}
	goto l__090D;
l__090D:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x9);
	emu_ah = 0x0;
	emu_testw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0xA));
	if ((emu_ax & emu_get_memory16(emu_ss, emu_bp, -0xA)) == 0) goto l__0933;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0x4), 0x8);
	if ((emu_get_memory16(emu_es, emu_bx, 0x4) & 0x8) == 0) goto l__0933;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_ss, emu_bp, -0xA);
	emu_orb(&emu_get_memory8(emu_es, emu_bx, 0x9), emu_al);
	goto l__0BC7;
l__0933:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x2);
	emu_ax = (int8)emu_al;
	emu_dx = 0x5A;
	emu_imuluw(&emu_ax, emu_dx);
	emu_dx = 0x2D07;
	emu_bx = emu_ax;
	emu_es = emu_dx;
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0x36), 0x8000);
	if ((emu_get_memory16(emu_es, emu_bx, 0x36) & 0x8000) != 0) goto l__095D;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0x19);
	if (emu_get_memory8(emu_es, emu_bx, 0x2) == 0x19) goto l__095D;
	goto l__0BC7;
l__095D:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x9);
	emu_ah = 0x0;
	emu_testw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0xA));
	if ((emu_ax & emu_get_memory16(emu_ss, emu_bp, -0xA)) != 0) goto l__0997;
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x0979); emu_cs = 0x1A34; emu_Unit_GetHouseID();
	goto l__0979;
l__0979:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x0981); f__1423_0F34_0017_464D();
	goto l__0981;
l__0981:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax == 0) goto l__0990;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_incw(&emu_get_memory16(emu_es, emu_bx, 0xC));
	goto l__0997;
l__0990:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_incw(&emu_get_memory16(emu_es, emu_bx, 0xA));
	goto l__0997;
l__0997:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x2);
	emu_ax = (int8)emu_al;
	emu_dx = 0x5A;
	emu_imuluw(&emu_ax, emu_dx);
	emu_dx = 0x2D07;
	emu_bx = emu_ax;
	emu_es = emu_dx;
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x3C), 0x4);
	if (emu_get_memory16(emu_es, emu_bx, 0x3C) == 0x4) goto l__09EF;
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x09C1); emu_cs = 0x1A34; emu_Unit_GetHouseID();
	goto l__09C1;
l__09C1:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x09C9); f__1423_0F34_0017_464D();
	goto l__09C9;
l__09C9:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax != 0) goto l__09EF;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_orw(&emu_get_memory16(emu_es, emu_bx, 0x4), 0x8);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x8);
	emu_ax = (int8)emu_al;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x09E5); emu_cs = 0x10BE; emu_House_Get_ByIndex();
	goto l__09E5;
l__09E5:
	emu_pop(&emu_cx);
	emu_bx = emu_ax;
	emu_es = emu_dx;
	emu_orw(&emu_get_memory16(emu_es, emu_bx, 0x4), 0x8);
	goto l__09EF;
l__09EF:
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0xA);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x3A38));
	if (emu_ax == emu_get_memory16(emu_ds, 0x00, 0x3A38)) goto l__09FB;
	goto l__0B61;
l__09FB:
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x3A0E), 0x0);
	if (emu_get_memory16(emu_ds, 0x00, 0x3A0E) != 0x0) goto l__0A05;
	goto l__0B61;
l__0A05:
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3A38));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x0A14); emu_cs = 0x1A34; emu_Unit_GetHouseID();
	goto l__0A14;
l__0A14:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x0A1C); f__1423_0F34_0017_464D();
	goto l__0A1C;
l__0A1C:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax == 0) goto l__0A2F;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0x19);
	if (emu_get_memory8(emu_es, emu_bx, 0x2) == 0x19) goto l__0A2F;
	goto l__0B61;
l__0A2F:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0x19);
	if (emu_get_memory8(emu_es, emu_bx, 0x2) != 0x19) goto l__0A7E;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x3A3A));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x26), 0x0);
	if (emu_get_memory16(emu_es, emu_bx, 0x26) != 0x0) goto l__0A7B;
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x3E52), 0x0);
	if (emu_get_memory16(emu_ds, 0x00, 0x3E52) != 0x0) { /* Unresolved jump */ emu_ip = 0x0A51; emu_last_cs = 0x1423; emu_last_ip = 0x0A49; emu_last_length = 0x002B; emu_last_crc = 0x16F9; emu_call(); return; }
	emu_get_memory16(emu_ds, 0x00, 0x3E52) = 0x1;
	emu_ax = 0x25;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0A5A); emu_cs = 0x3483; ovl__3483(2);
	goto l__0A5A;
l__0A5A:
	emu_pop(&emu_cx);
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x37B6), 0x0);
	if (emu_get_memory16(emu_ds, 0x00, 0x37B6) != 0x0) { /* Unresolved jump */ emu_ip = 0x0A71; emu_last_cs = 0x1423; emu_last_ip = 0x0A60; emu_last_length = 0x0015; emu_last_crc = 0xB691; emu_call(); return; }
	emu_ax = 0x69;
	emu_push(emu_ax);
	emu_ax = 0x1C;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0A6F); emu_cs = 0x10E4; f__10E4_0117_0015_392D();
	goto l__0A6F;
l__0A6F:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x3A3A));
	emu_get_memory16(emu_es, emu_bx, 0x26) = 0x8;
	goto l__0A7B;
l__0A7B:
	goto l__0B61;
l__0A7E:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x3A3A));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x24), 0x0);
	if (emu_get_memory16(emu_es, emu_bx, 0x24) == 0x0) goto l__0A8C;
	goto l__0B3B;
l__0A8C:
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x3E52), 0x0);
	if (emu_get_memory16(emu_ds, 0x00, 0x3E52) != 0x0) { /* Unresolved jump */ emu_ip = 0x0A99; emu_last_cs = 0x1423; emu_last_ip = 0x0A91; emu_last_length = 0x0020; emu_last_crc = 0x4946; emu_call(); return; }
	emu_get_memory16(emu_ds, 0x00, 0x3E52) = 0x1;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0x6);
	if (emu_get_memory8(emu_es, emu_bx, 0x2) != 0x6) goto l__0AB0;
	emu_ax = 0xC;
	emu_push(emu_ax);
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x0AAC); emu_cs = 0x3483; emu_ip = 0x002A; emu_last_cs = 0x1423; emu_last_ip = 0x0AA7; emu_last_length = 0x0020; emu_last_crc = 0x4946; emu_call();
	/* Unresolved jump */ emu_ip = 0x0AAC; emu_last_cs = 0x1423; emu_last_ip = 0x0AAC; emu_last_length = 0x0020; emu_last_crc = 0x4946; emu_call();
l__0AB0:
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x38B0), 0x3);
	if (emu_get_memory16(emu_ds, 0x00, 0x38B0) >= 0x3) goto l__0B1F;
	emu_ax = 0x8;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3A38));
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x0ACA); emu_cs = 0x1082; emu_Building_FindFirst();
	goto l__0ACA;
l__0ACA:
	emu_addw(&emu_sp, 0x8);
	emu_get_memory16(emu_ss, emu_bp, -0xC) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0xE) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0xE);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0xC));
	if (emu_ax == 0) { /* Unresolved jump */ emu_ip = 0x0B13; emu_last_cs = 0x1423; emu_last_ip = 0x0AD9; emu_last_length = 0x002C; emu_last_crc = 0x6E18; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_push(emu_cs); emu_push(0x0AF6); emu_cs = 0x0F3F; f__0F3F_0125_000D_4868();
	goto l__0AF6;
l__0AF6:
	emu_addw(&emu_sp, 0x8);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0AFF); emu_cs = 0x34CD; ovl__34CD(19);
	goto l__0AFF;
l__0AFF:
	emu_pop(&emu_cx);
	emu_si = emu_ax;
	emu_incw(&emu_si);
	emu_andw(&emu_si, 0x7);
	emu_ax = emu_si;
	emu_shrw(&emu_ax, 0x1);
	emu_si = emu_ax;
	emu_ax = emu_si;
	emu_addw(&emu_ax, 0x2);
	goto l__0B16;
l__0B16:
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0B1C); emu_cs = 0x3483; ovl__3483(2);
	goto l__0B1C;
l__0B1C:
	emu_pop(&emu_cx);
	goto l__0B31;
l__0B1F:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x8);
	emu_ax = (int8)emu_al;
	emu_addw(&emu_ax, 0x6);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0B30); emu_cs = 0x3483; ovl__3483(2);
	goto l__0B30;
l__0B30:
	emu_pop(&emu_cx);
	goto l__0B31;
l__0B31:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x3A3A));
	emu_get_memory16(emu_es, emu_bx, 0x24) = 0x8;
	goto l__0B3B;
l__0B3B:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x6F);
	emu_ax = (int8)emu_al;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0B49); emu_cs = 0x104B; emu_AirUnit_Get_ByIndex();
	goto l__0B49;
l__0B49:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_ax != 0) {
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
		emu_get_memory16(emu_es, emu_bx, 0x32) = 0x1;
	}
	goto l__0B61;
l__0B61:
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x8);
	emu_ax = (int8)emu_al;
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x0B72); f__1423_0F34_0017_464D();
	goto l__0B72;
l__0B72:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax != 0) goto l__0B94;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x4F), 0x8);
	if (emu_get_memory8(emu_es, emu_bx, 0x4F) != 0x8) goto l__0B94;
	emu_ax = 0xB;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x0B91); emu_cs = 0x176C; f__176C_000E_000E_633D();
	goto l__0B91;
l__0B91:
	emu_addw(&emu_sp, 0x6);
	goto l__0B94;
l__0B94:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x8);
	emu_ax = (int8)emu_al;
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x3A38));
	if (emu_ax != emu_get_memory16(emu_ds, 0x00, 0x3A38)) {
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
		emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x8), 0x3);
		if (emu_get_memory8(emu_es, emu_bx, 0x8) != 0x3) goto l__0BBD;
		emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x3A38), 0x1);
		if (emu_get_memory16(emu_ds, 0x00, 0x3A38) != 0x1) goto l__0BBD;
	}
	goto l__0BB3;
l__0BB3:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_get_memory8(emu_es, emu_bx, 0x9) = 0xFF;
	goto l__0BC7;
l__0BBD:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_ss, emu_bp, -0xA);
	emu_orb(&emu_get_memory8(emu_es, emu_bx, 0x9), emu_al);
	goto l__0BC7;
l__0BC7:
	emu_pop(&emu_si);
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__1423_0BCC_0012_111A()
 *
 * @name f__1423_0BCC_0012_111A
 * @implements 1423:0BCC:0012:111A ()
 * @implements 1423:0BDE:000D:BD9D
 * @implements 1423:0BEB:000B:E66F
 * @implements 1423:0BF6:0002:F3BA
 * @implements 1423:0BF8:0029:9DEB
 * @implements 1423:0C21:0008:21B1
 * @implements 1423:0C29:000F:B7B6
 * @implements 1423:0C38:0027:642F
 * @implements 1423:0C3F:0020:A3B7
 * @implements 1423:0C54:000B:3601
 * @implements 1423:0C5F:0015:7C3E
 * @implements 1423:0C6F:0005:8BCF
 *
 * Called From: 176C:1349:0019:5069
 * Called From: 176C:1349:0011:9DAE
 * Called From: 176C:172E:0011:EC1A
 * Called From: 1A34:1150:0012:391F
 * Called From: 1A34:2B0E:0019:3A5B
 * Called From: B4CD:028B:000F:10BA
 */
void f__1423_0BCC_0012_111A()
{
l__0BCC:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x4);
	emu_push(emu_si);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_ax != 0) goto l__0BDE;
	goto l__0C6F;
l__0BDE:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x9), 0x0);
	if (emu_get_memory8(emu_es, emu_bx, 0x9) != 0x0) goto l__0BEB;
	goto l__0C6F;
l__0BEB:
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x0BF6); emu_cs = 0x10BE; emu_House_FindFirst();
	goto l__0BF6;
l__0BF6:
	goto l__0C5F;
l__0BF8:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x9);
	emu_ah = 0x0;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cl = emu_get_memory8(emu_es, emu_bx, 0x0);
	emu_dx = 0x1;
	emu_shlw(&emu_dx, emu_cl);
	emu_testw(&emu_ax, emu_dx);
	if ((emu_ax & emu_dx) == 0) goto l__0C54;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x0C21); emu_cs = 0x1A34; emu_Unit_GetHouseID();
	goto l__0C21;
l__0C21:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x0C29); f__1423_0F34_0017_464D();
	goto l__0C29;
l__0C29:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax != 0) goto l__0C38;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_decw(&emu_get_memory16(emu_es, emu_bx, 0xA));
	goto l__0C3F;
l__0C38:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_decw(&emu_get_memory16(emu_es, emu_bx, 0xC));
	goto l__0C3F;
l__0C3F:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_es);
	emu_lfp(&emu_es, &emu_si, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cl = emu_get_memory8(emu_es, emu_si, 0x0);
	emu_al = 0x1;
	emu_shlb(&emu_al, emu_cl);
	emu_notb(&emu_al, emu_al);
	emu_pop(&emu_es);
	emu_andb(&emu_get_memory8(emu_es, emu_bx, 0x9), emu_al);
	goto l__0C54;
l__0C54:
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x0C5F); emu_cs = 0x10BE; emu_House_FindNext();
	goto l__0C5F;
l__0C5F:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_ax != 0) goto l__0BF8;
	goto l__0C6F;
l__0C6F:
	emu_pop(&emu_si);
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__1423_0C74_0015_3419()
 *
 * @name f__1423_0C74_0015_3419
 * @implements 1423:0C74:0015:3419 ()
 * @implements 1423:0C89:000E:E431
 * @implements 1423:0C97:0012:C249
 * @implements 1423:0CA9:0029:7965
 * @implements 1423:0CD2:0032:9201
 * @implements 1423:0CE1:0023:6CB4
 * @implements 1423:0CF3:0011:24ED
 * @implements 1423:0D04:0026:095B
 * @implements 1423:0D2A:0014:010D
 * @implements 1423:0D3B:0003:1D00
 * @implements 1423:0D3E:000E:EFDC
 * @implements 1423:0D41:000B:D382
 * @implements 1423:0D4C:0007:EE65
 * @implements 1423:0D53:000D:D32C
 * @implements 1423:0D60:0013:2198
 * @implements 1423:0D73:000A:1B8E
 * @implements 1423:0D7D:0041:028B
 * @implements 1423:0DAD:0011:FC55
 * @implements 1423:0DB0:000E:4DA2
 * @implements 1423:0DB3:000B:71FC
 * @implements 1423:0DB9:0005:46EB
 * @implements 1423:0DBE:0005:8BCF
 *
 * Called From: 0972:0919:002F:F6E4
 */
void f__1423_0C74_0015_3419()
{
l__0C74:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0xC);
	emu_push(emu_si);
	emu_si = 0xFFFF;
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_ax != 0) goto l__0C89;
	goto l__0DB9;
l__0C89:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x8);
	emu_ax = (int8)emu_al;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0C97); emu_cs = 0x10BE; emu_House_Get_ByIndex();
	goto l__0C97;
l__0C97:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0xA) = emu_ax;
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x0CA9); emu_cs = 0x0C3A; f__0C3A_1B79_0021_8C40();
	goto l__0CA9;
l__0CA9:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0x5);
	if (emu_get_memory8(emu_es, emu_bx, 0x2) != 0x5) goto l__0CE1;
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x8);
	emu_ax = (int8)emu_al;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x0CD2); emu_cs = 0x0FE4; emu_Unit_FindFirst();
	goto l__0CD2;
l__0CD2:
	emu_addw(&emu_sp, 0x8);
	emu_orw(&emu_ax, emu_dx);
	if (emu_ax != 0) {
		emu_andw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0xFFFE);
		emu_andw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0xFFFF);
	}
	goto l__0CE1;
l__0CE1:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0x4);
	if (emu_get_memory8(emu_es, emu_bx, 0x2) == 0x4) {
		emu_andw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0xFFFF);
		emu_andw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0xFFFC);
	}
	goto l__0CF3;
l__0CF3:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0x8);
	if (emu_get_memory8(emu_es, emu_bx, 0x2) != 0x8) goto l__0D4C;
	emu_get_memory16(emu_ss, emu_bp, -0x6) = 0x0;
	goto l__0D41;
l__0D04:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x6);
	emu_cl = 0x2;
	emu_shlw(&emu_ax, emu_cl);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_addw(&emu_bx, emu_ax);
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x2E);
	emu_get_memory16(emu_ss, emu_bp, -0xC) = emu_ax;
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0xC), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp, -0xC) == 0x0) goto l__0D3E;
	emu_xorw(&emu_dx, emu_dx);
	emu_ax = 0x1;
	emu_cl = emu_get_memory8(emu_ss, emu_bp, -0xC);
	emu_push(emu_cs); emu_push(0x0D2A); emu_cs = 0x01F7; emu_Math_Shld();
	goto l__0D2A;
l__0D2A:
	emu_bx = emu_get_memory16(emu_ss, emu_bp, -0x2);
	emu_cx = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_andw(&emu_cx, emu_ax);
	emu_andw(&emu_bx, emu_dx);
	emu_orw(&emu_cx, emu_bx);
	if (emu_cx == 0) goto l__0D3E;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0xC);
	goto l__0D3B;
l__0D3B:
	goto l__0DBE;
l__0D3E:
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x6));
	goto l__0D41;
l__0D41:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x5);
	if ((int16)emu_get_memory16(emu_ss, emu_bp, -0x6) < (int16)0x5) goto l__0D04;
	emu_ax = 0xFFFF;
	goto l__0D3B;
l__0D4C:
	emu_get_memory16(emu_ss, emu_bp, -0x6) = 0x0;
	goto l__0DB3;
l__0D53:
	emu_xorw(&emu_dx, emu_dx);
	emu_ax = 0x1;
	emu_cl = emu_get_memory8(emu_ss, emu_bp, -0x6);
	emu_push(emu_cs); emu_push(0x0D60); emu_cs = 0x01F7; emu_Math_Shld();
	goto l__0D60;
l__0D60:
	emu_bx = emu_get_memory16(emu_ss, emu_bp, -0x2);
	emu_cx = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_andw(&emu_cx, emu_ax);
	emu_andw(&emu_bx, emu_dx);
	emu_orw(&emu_cx, emu_bx);
	if (emu_cx == 0) goto l__0DB0;
	emu_push(emu_cs); emu_push(0x0D73); emu_cs = 0x2BB4; f__2BB4_0004_0027_DC1D();
	goto l__0D73;
l__0D73:
	emu_testw(&emu_ax, 0x3);
	if ((emu_ax & 0x3) != 0) goto l__0D7D;
	emu_si = emu_get_memory16(emu_ss, emu_bp, -0x6);
	goto l__0DB9;
l__0D7D:
	emu_cmpw(&emu_si, 0xFFFF);
	if (emu_si != 0xFFFF) {
		emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x6);
		emu_dx = 0x5A;
		emu_imuluw(&emu_ax, emu_dx);
		emu_dx = 0x2D07;
		emu_bx = emu_ax;
		emu_es = emu_dx;
		emu_ax = emu_get_memory16(emu_es, emu_bx, 0x2D);
		emu_push(emu_ax);
		emu_ax = emu_si;
		emu_dx = 0x5A;
		emu_imuluw(&emu_ax, emu_dx);
		emu_dx = 0x2D07;
		emu_bx = emu_ax;
		emu_es = emu_dx;
		emu_pop(&emu_ax);
		emu_cmpw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x2D));
		if ((int16)emu_ax <= (int16)emu_get_memory16(emu_es, emu_bx, 0x2D)) goto l__0DB0;
	}
	goto l__0DAD;
l__0DAD:
	emu_si = emu_get_memory16(emu_ss, emu_bp, -0x6);
	goto l__0DB0;
l__0DB0:
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x6));
	goto l__0DB3;
l__0DB3:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x20);
	if ((int16)emu_get_memory16(emu_ss, emu_bp, -0x6) < (int16)0x20) goto l__0D53;
	goto l__0DB9;
l__0DB9:
	emu_ax = emu_si;
	goto l__0D3B;
l__0DBE:
	emu_pop(&emu_si);
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__1423_0DC3_0029_D1E2()
 *
 * @name f__1423_0DC3_0029_D1E2
 * @implements 1423:0DC3:0029:D1E2 ()
 * @implements 1423:0DEC:0005:962E
 * @implements 1423:0DF1:0024:7F0A
 * @implements 1423:0E15:001A:9A11
 * @implements 1423:0E17:0018:0C7D
 * @implements 1423:0E32:0008:EA34
 * @implements 1423:0E3A:0015:C6CF
 *
 * Called From: 0C3A:11CC:001D:6961
 * Called From: B511:032E:0017:D892
 */
void f__1423_0DC3_0029_D1E2()
{
l__0DC3:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x6);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_di = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x38BC);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_ax;
	emu_get_memory16(emu_ds, 0x00, 0x38BC) = 0x0;
	emu_xorw(&emu_si, emu_si);
	emu_ax = 0xFFFF;
	emu_push(emu_ax);
	emu_push(emu_di);
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x0DEC); emu_cs = 0x1082; emu_Building_FindFirst();
	goto l__0DEC;
l__0DEC:
	emu_addw(&emu_sp, 0x8);
	goto l__0E17;
l__0DF1:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x2);
	emu_ax = (int8)emu_al;
	emu_dx = 0x60;
	emu_imuluw(&emu_ax, emu_dx);
	emu_dx = 0x2C94;
	emu_bx = emu_ax;
	emu_es = emu_dx;
	emu_addw(&emu_si, emu_get_memory16(emu_es, emu_bx, 0x40));
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x0E15); emu_cs = 0x1082; emu_Building_FindNext();
	goto l__0E15;
l__0E15:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	goto l__0E17;
l__0E17:
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_ax != 0) goto l__0DF1;
	emu_cmpw(&emu_si, 0x7D00);
	if (emu_si >= 0x7D00) { /* Unresolved jump */ emu_ip = 0x0E2F; emu_last_cs = 0x1423; emu_last_ip = 0x0E29; emu_last_length = 0x0018; emu_last_crc = 0x0C7D; emu_call(); return; }
	emu_ax = emu_si;
	goto l__0E32;
l__0E32:
	emu_si = emu_ax;
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x0E3A); emu_cs = 0x10BE; emu_House_Get_ByIndex();
	goto l__0E3A;
l__0E3A:
	emu_pop(&emu_cx);
	emu_bx = emu_ax;
	emu_es = emu_dx;
	emu_get_memory16(emu_es, emu_bx, 0x14) = emu_si;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x6);
	emu_get_memory16(emu_ds, 0x00, 0x38BC) = emu_ax;
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
 * Decompiled function f__1423_0E4F_0010_843C()
 *
 * @name f__1423_0E4F_0010_843C
 * @implements 1423:0E4F:0010:843C ()
 * @implements 1423:0E5F:001D:3375
 * @implements 1423:0E79:0003:DD0C
 * @implements 1423:0E7C:0026:4424
 * @implements 1423:0EA2:000C:D503
 * @implements 1423:0EAC:0002:FDBA
 * @implements 1423:0EAE:000F:99F1
 * @implements 1423:0EBD:0005:A9AE
 * @implements 1423:0EC2:0049:D9AB
 * @implements 1423:0F0E:000B:799F
 * @implements 1423:0F19:0016:F220
 * @implements 1423:0F1B:0014:94E9
 * @implements 1423:0F29:0006:02B8
 * @implements 1423:0F2F:0005:8BCF
 *
 * Called From: 06F7:0362:000E:E9D8
 * Called From: 06F7:0362:0049:CA1D
 */
void f__1423_0E4F_0010_843C()
{
l__0E4F:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x8);
	emu_push(emu_si);
	emu_si = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x0E5F); emu_cs = 0x10BE; emu_House_Get_ByIndex();
	goto l__0E5F;
l__0E5F:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_cmpw(&emu_si, emu_get_memory16(emu_ds, 0x00, 0x3A38));
	if (emu_si == emu_get_memory16(emu_ds, 0x00, 0x3A38)) goto l__0E7C;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0x4), 0x4);
	if ((emu_get_memory16(emu_es, emu_bx, 0x4) & 0x4) == 0) goto l__0E7C;
	emu_xorw(&emu_ax, emu_ax);
	goto l__0E79;
l__0E79:
	goto l__0F2F;
l__0E7C:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_orw(&emu_get_memory16(emu_es, emu_bx, 0x4), 0x4);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0x4), 0x2);
	if ((emu_get_memory16(emu_es, emu_bx, 0x4) & 0x2) == 0) goto l__0EAE;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x28), 0x0);
	if (emu_get_memory16(emu_es, emu_bx, 0x28) != 0x0) goto l__0EAC;
	emu_ax = 0x30;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0EA2); emu_cs = 0x3483; ovl__3483(2);
	goto l__0EA2;
l__0EA2:
	emu_pop(&emu_cx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_get_memory16(emu_es, emu_bx, 0x28) = 0x8;
	goto l__0EAC;
l__0EAC:
	goto l__0F29;
l__0EAE:
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_si);
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x0EBD); emu_cs = 0x0FE4; emu_Unit_FindFirst();
	goto l__0EBD;
l__0EBD:
	emu_addw(&emu_sp, 0x8);
	goto l__0F1B;
l__0EC2:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x2);
	emu_ax = (int8)emu_al;
	emu_dx = 0x5A;
	emu_imuluw(&emu_ax, emu_dx);
	emu_dx = 0x2D07;
	emu_bx = emu_ax;
	emu_es = emu_dx;
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x56), 0xFFFF);
	if (emu_get_memory16(emu_es, emu_bx, 0x56) == 0xFFFF) goto l__0F0E;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x4F), 0x3);
	if (emu_get_memory8(emu_es, emu_bx, 0x4F) != 0x3) { /* Unresolved jump */ emu_ip = 0x0EF2; emu_last_cs = 0x1423; emu_last_ip = 0x0EE6; emu_last_length = 0x0049; emu_last_crc = 0xD9AB; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x4F), 0x8);
	if (emu_get_memory8(emu_es, emu_bx, 0x4F) == 0x8) { /* Unresolved jump */ emu_ip = 0x0EFC; emu_last_cs = 0x1423; emu_last_ip = 0x0EF0; emu_last_length = 0x0049; emu_last_crc = 0xD9AB; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x4F), 0x4);
	if (emu_get_memory8(emu_es, emu_bx, 0x4F) != 0x4) goto l__0F0E;
	emu_ax = 0xB;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs); emu_push(0x0F0B); emu_cs = 0x176C; f__176C_000E_000E_633D();
	/* Unresolved jump */ emu_ip = 0x0F0B; emu_last_cs = 0x1423; emu_last_ip = 0x0F0B; emu_last_length = 0x0049; emu_last_crc = 0xD9AB; emu_call();
l__0F0E:
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x0F19); emu_cs = 0x0FE4; emu_Unit_FindNext();
	goto l__0F19;
l__0F19:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	goto l__0F1B;
l__0F1B:
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x8);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x6));
	if (emu_ax != 0) goto l__0EC2;
	goto l__0F29;
l__0F29:
	emu_ax = 0x1;
	goto l__0E79;
l__0F2F:
	emu_pop(&emu_si);
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__1423_0F34_0017_464D()
 *
 * @name f__1423_0F34_0017_464D
 * @implements 1423:0F34:0017:464D ()
 * @implements 1423:0F47:0004:F0B9
 * @implements 1423:0F49:0002:D8BA
 * @implements 1423:0F4B:0006:69E5
 * @implements 1423:0F51:0016:7BD9
 * @implements 1423:0F5B:000C:3825
 * @implements 1423:0F65:0002:C83A
 * @implements 1423:0F67:0002:AF3A
 * @implements 1423:0F69:000E:CCF9
 * @implements 1423:0F75:0002:A83A
 * @implements 1423:0F77:0005:B37A
 * @implements 1423:0F7C:0002:2597
 *
 * Called From: 06F7:0134:0008:9688
 * Called From: 0972:0EEC:0008:9688
 * Called From: 0972:147E:001A:3E69
 * Called From: 0972:147E:0024:B930
 * Called From: 0C3A:12C1:0014:56D0
 * Called From: 0C3A:12C1:0017:53A0
 * Called From: 0C3A:223B:0008:9688
 * Called From: 0FE4:0079:005B:3AE9
 * Called From: 1423:097E:0008:229F
 * Called From: 1423:09C6:0008:22A9
 * Called From: 1423:0A19:0008:E2B5
 * Called From: 1423:0B6F:0011:CB22
 * Called From: 1423:0B6F:0029:9196
 * Called From: 1423:0C26:0008:21B1
 * Called From: 1A34:0EFA:0008:9688
 * Called From: 1A34:11E9:0008:9688
 * Called From: 1A34:1400:0008:9688
 * Called From: 1A34:2421:000A:D495
 * Called From: 1A34:2B64:0008:9688
 * Called From: 1A34:2D39:0011:DBC6
 * Called From: 1A34:3209:0008:9688
 * Called From: B4CD:02AD:0008:9688
 * Called From: B518:0FED:0008:9688
 */
void f__1423_0F34_0017_464D()
{
l__0F34:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_dx = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_bx = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_cmpw(&emu_dx, 0xFFFF);
	if (emu_dx != 0xFFFF) {
		emu_cmpw(&emu_bx, 0xFFFF);
		if (emu_bx != 0xFFFF) goto l__0F4B;
	}
	goto l__0F47;
l__0F47:
	emu_xorw(&emu_ax, emu_ax);
	goto l__0F49;
l__0F49:
	goto l__0F7C;
l__0F4B:
	emu_cmpw(&emu_dx, emu_bx);
	if (emu_dx != emu_bx) goto l__0F51;
	goto l__0F77;
l__0F51:
	emu_cmpw(&emu_dx, 0x3);
	if (emu_dx != 0x3) {
		emu_cmpw(&emu_bx, 0x3);
		if (emu_bx != 0x3) goto l__0F69;
	}
	goto l__0F5B;
l__0F5B:
	emu_cmpw(&emu_dx, 0x1);
	if (emu_dx != 0x1) {
		emu_cmpw(&emu_bx, 0x1);
		if (emu_bx != 0x1) goto l__0F67;
	}
	goto l__0F65;
l__0F65:
	goto l__0F77;
l__0F67:
	goto l__0F47;
l__0F69:
	emu_cmpw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x3A38));
	if (emu_dx != emu_get_memory16(emu_ds, 0x00, 0x3A38)) {
		emu_cmpw(&emu_bx, emu_get_memory16(emu_ds, 0x00, 0x3A38));
		if (emu_bx != emu_get_memory16(emu_ds, 0x00, 0x3A38)) goto l__0F77;
	}
	goto l__0F75;
l__0F75:
	goto l__0F47;
l__0F77:
	emu_ax = 0x1;
	goto l__0F49;
l__0F7C:
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

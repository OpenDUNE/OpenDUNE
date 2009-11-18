/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__1423_0009_0025_FE5D()
 *
 * @name f__1423_0009_0025_FE5D
 * @implements 1423:0009:0025:FE5D ()
 * @implements 1423:002E:0009:39EC
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
l__002E:
	emu_addw(&emu_sp, 0xA);
	emu_ax = 0x1;
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
	emu_push(emu_cs); emu_push(0x007B); emu_cs = 0x1082; emu_Structure_FindFirst();
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
l__00A8:
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x00B3); emu_cs = 0x1082; emu_Structure_FindNext();
l__00B3:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
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
l__00D4:
	emu_testw(&emu_get_memory16(emu_ds, 0x00, 0x8D01), 0x2);
	if ((emu_get_memory16(emu_ds, 0x00, 0x8D01) & 0x2) != 0) {
		emu_orw(&emu_di, emu_di);
		if (emu_di == 0) {
			emu_orw(&emu_si, 0x1);
		}
	}
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
l__00FB:
	emu_addw(&emu_sp, 0xA);
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
l__013C:
	emu_addw(&emu_sp, 0xA);
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
	emu_push(emu_cs); emu_push(0x01C5); emu_cs = 0x1082; emu_Structure_FindFirst();
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
l__01FC:
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x0207); emu_cs = 0x1082; emu_Structure_FindNext();
l__0207:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
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
l__0272:
	emu_si = emu_ax;
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
 * @implements 1423:038F:0011:194B
 * @implements 1423:03A0:000B:F574
 * @implements 1423:03AB:0006:BAF9
 * @implements 1423:03B1:0005:1E52
 * @implements 1423:03B6:0008:C68B
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
l__02C5:
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x379E), 0x0);
	if (emu_get_memory16(emu_ds, 0x00, 0x379E) != 0x0) goto l__02CF;
	goto l__04E9;
l__02CF:
	emu_push(emu_cs);
	emu_push(0x02D3); f__1423_0009_0025_FE5D();
l__02D3:
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax != 0) goto l__02E1;
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x379E), 0x0);
	if (emu_get_memory16(emu_ds, 0x00, 0x379E) != 0x0) goto l__02E1;
	goto l__04D4;
l__02E1:
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x02E9); emu_cs = 0x3483; overlay(0x3483, 0); f__B483_0283_0014_983A();
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
l__030A:
	emu_addw(&emu_sp, 0x8);
	emu_ax = 0xFFFE;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0316); emu_cs = 0x3483; overlay(0x3483, 0); f__B483_0363_0016_83DF();
l__0316:
	emu_pop(&emu_cx);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x031F); emu_cs = 0x34E9; overlay(0x34E9, 0); f__B4E9_0050_003F_292A();
l__031F:
	emu_pop(&emu_cx);
	emu_push(emu_cs);
	emu_push(0x0324); f__1423_018B_0015_2B74();
l__0324:
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax != 0) goto l__032B;
	goto l__0466;
l__032B:
	emu_ax = 0x28;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0334); emu_cs = 0x3483; overlay(0x3483, 0); f__B483_0363_0016_83DF();
l__0334:
	emu_pop(&emu_cx);
	emu_ax = 0xFFFF;
	emu_push(emu_ax);
	emu_ax = 0x52;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0342); emu_cs = 0x0FCB; emu_String_GetString();
l__0342:
	emu_pop(&emu_cx);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x034A); emu_cs = 0x10E4; f__10E4_0273_0029_DCE5();
l__034A:
	emu_addw(&emu_sp, 0x6);
	emu_push(emu_cs); emu_push(0x0352); emu_cs = 0x3511; overlay(0x3511, 0); f__B511_0C35_002A_C70F();
l__0352:
	emu_push(emu_cs); emu_push(0x0357); emu_cs = 0x34B8; overlay(0x34B8, 0); f__B4B8_0ECE_000B_BD2E();
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
	emu_push(emu_cs); emu_push(0x0380); emu_cs = 0x3518; overlay(0x3518, 0); f__B518_0000_0025_FC16();
l__0380:
	emu_addw(&emu_sp, 0x10);
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x38B2), 0x9);
	if (emu_get_memory16(emu_ds, 0x00, 0x38B2) != 0x9) goto l__03BF;
	emu_push(emu_cs); emu_push(0x038F); emu_cs = 0x2B6C; f__2B6C_0137_0020_C73F();
l__038F:
	emu_ax = 0xF;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C38));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C36));
	emu_push(emu_cs); emu_push(0x03A0); emu_cs = 0x259E; f__259E_0006_0016_858A();
l__03A0:
	emu_addw(&emu_sp, 0x6);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x03AB); emu_cs = 0x24DA; f__24DA_0004_000E_FD1B();
l__03AB:
	emu_pop(&emu_cx);
	emu_push(emu_cs); emu_push(0x03B1); emu_cs = 0x34AB; overlay(0x34AB, 0); f__B4AB_0000_000D_6028();
l__03B1:
	emu_push(emu_cs); emu_push(0x03B6); emu_cs = 0x3500; overlay(0x3500, 0); f__B500_0000_0008_FE1F();
l__03B6:
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x03BE); emu_cs = 0x01F7; emu_Terminate_Normal();
	/* Unresolved jump */ emu_ip = 0x03BE; emu_last_cs = 0x1423; emu_last_ip = 0x03BE; emu_last_length = 0x0008; emu_last_crc = 0xC68B; emu_call();
l__03BF:
	emu_push(emu_cs); emu_push(0x03C4); emu_cs = 0x2B6C; f__2B6C_0137_0020_C73F();
l__03C4:
	emu_push(emu_cs); emu_push(0x03C9); emu_cs = 0x34AE; overlay(0x34AE, 0); f__B4AE_0000_0008_049C();
l__03C9:
	emu_push(emu_cs); emu_push(0x03CE); emu_cs = 0x2B6C; f__2B6C_0169_001E_6939();
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
l__03E7:
	emu_addw(&emu_sp, 0xC);
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x38B2));
	emu_push(emu_cs); emu_push(0x03F7); emu_cs = 0x3503; overlay(0x3503, 0); f__B503_0000_0016_B170();
l__03F7:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ds, 0x00, 0x38B0) = emu_ax;
	emu_ax = 0xF;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C38));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C36));
	emu_push(emu_cs); emu_push(0x040D); emu_cs = 0x259E; f__259E_0006_0016_858A();
l__040D:
	emu_addw(&emu_sp, 0x6);
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x38B2), 0x1);
	if (emu_get_memory16(emu_ds, 0x00, 0x38B2) != 0x1) {
		emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x38B2), 0x7);
		if (emu_get_memory16(emu_ds, 0x00, 0x38B2) != 0x7) goto l__0464;
	}
l__041E:
	emu_ax = 0x2DCE;
	emu_push(emu_ax);
	emu_ax = 0x440;
	emu_push(emu_ax);
	emu_ax = 0x7;
	emu_push(emu_ax);
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0433); emu_cs = 0x34B8; overlay(0x34B8, 0); f__B4B8_0A1E_001A_E094();
l__0433:
	emu_addw(&emu_sp, 0x8);
	emu_push(emu_cs); emu_push(0x043B); emu_cs = 0x34DA; overlay(0x34DA, 0); emu_Security_Main();
l__043B:
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax != 0) goto l__044D;
	emu_push(emu_cs); emu_push(0x0444); emu_cs = 0x3500; overlay(0x3500, 0); f__B500_0000_0008_FE1F();
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
	emu_push(emu_cs); emu_push(0x0461); emu_cs = 0x34B8; overlay(0x34B8, 0); f__B4B8_0A1E_001A_E094();
l__0461:
	emu_addw(&emu_sp, 0x8);
l__0464:
	goto l__04A3;
l__0466:
	emu_ax = 0x29;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x046F); emu_cs = 0x3483; overlay(0x3483, 0); f__B483_0363_0016_83DF();
l__046F:
	emu_pop(&emu_cx);
	emu_ax = 0xFFFF;
	emu_push(emu_ax);
	emu_ax = 0x53;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x047D); emu_cs = 0x0FCB; emu_String_GetString();
l__047D:
	emu_pop(&emu_cx);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0485); emu_cs = 0x10E4; f__10E4_0273_0029_DCE5();
l__0485:
	emu_addw(&emu_sp, 0x6);
	emu_push(emu_cs); emu_push(0x048D); emu_cs = 0x3511; overlay(0x3511, 0); f__B511_0C64_002A_C757();
l__048D:
	emu_push(emu_cs); emu_push(0x0492); emu_cs = 0x34B8; overlay(0x34B8, 0); f__B4B8_0ECE_000B_BD2E();
l__0492:
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x38B2));
	emu_push(emu_cs); emu_push(0x049E); emu_cs = 0x3503; overlay(0x3503, 0); f__B503_0000_0016_B170();
l__049E:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ds, 0x00, 0x38B0) = emu_ax;
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
	emu_push(emu_cs); emu_push(0x04C0); emu_cs = 0x34B8; overlay(0x34B8, 0); f__B4B8_0A1E_001A_E094();
l__04C0:
	emu_addw(&emu_sp, 0x8);
	emu_push(emu_cs); emu_push(0x04C8); emu_cs = 0x34B8; overlay(0x34B8, 0); f__B4B8_0D23_0010_BA99();
l__04C8:
	emu_get_memory16(emu_ds, 0x00, 0x38BE) = 0x1;
	emu_get_memory16(emu_ds, 0x00, 0x379E) = 0x0;
l__04D4:
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x76B2);
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x76B0);
	emu_addw(&emu_dx, 0x12C);
	emu_adcw(&emu_ax, 0x0);
	emu_get_memory16(emu_ds, 0x00, 0x60A4) = emu_ax;
	emu_get_memory16(emu_ds, 0x00, 0x60A2) = emu_dx;
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
 * Decompiled function f__1423_04F2_0016_CD6B()
 *
 * @name f__1423_04F2_0016_CD6B
 * @implements 1423:04F2:0016:CD6B ()
 * @implements 1423:0508:0017:CA70
 * @implements 1423:051F:001B:186C
 * @implements 1423:0521:0019:486A
 * @implements 1423:0537:0003:5C01
 * @implements 1423:053A:0020:1D14
 * @implements 1423:055A:0008:1324
 * @implements 1423:0565:0009:367A
 * @implements 1423:056E:001F:CD97
 * @implements 1423:058D:0019:34F2
 * @implements 1423:05A6:002F:E2FE
 * @implements 1423:05D5:0004:4D04
 * @implements 1423:05D9:0013:3054
 * @implements 1423:05EC:0005:A62E
 * @implements 1423:05F1:0017:46DD
 * @implements 1423:0608:0016:978D
 * @implements 1423:061E:0008:2094
 * @implements 1423:0626:0004:4D86
 * @implements 1423:062A:000B:166D
 * @implements 1423:0635:001D:6990
 * @implements 1423:0637:001B:A402
 * @implements 1423:0660:0003:9DAF
 * @implements 1423:0663:000D:A15D
 * @implements 1423:0670:0008:A5E9
 * @implements 1423:0678:0009:367A
 * @implements 1423:0681:000F:CF0D
 * @implements 1423:0690:0008:CAD0
 * @implements 1423:0698:0015:64CE
 * @implements 1423:06AD:0013:1B25
 * @implements 1423:06C0:0024:0208
 * @implements 1423:06E4:0026:FA2A
 * @implements 1423:06E7:0023:9008
 * @implements 1423:06E8:0022:98E8
 * @implements 1423:070A:000E:39E4
 * @implements 1423:0718:0012:4D33
 * @implements 1423:072A:0007:4BF7
 * @implements 1423:0731:0019:E440
 * @implements 1423:074A:0018:A53B
 * @implements 1423:0762:000F:6861
 * @implements 1423:0771:001F:3B2B
 * @implements 1423:079C:0002:C1BA
 * @implements 1423:07A1:0017:3710
 * @implements 1423:07B8:0007:8306
 * @implements 1423:07B9:0006:83B4
 * @implements 1423:07BF:0006:F7CE
 *
 * Called From: 0972:01DE:0028:CB17
 * Called From: 0AEC:115C:000B:1C58
 */
void f__1423_04F2_0016_CD6B()
{
l__04F2:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0xE);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x8);
	emu_ax = (int8)emu_al;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0508); emu_cs = 0x10BE; emu_House_Get_ByIndex();
l__0508:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0x4), 0x2);
	if ((emu_get_memory16(emu_es, emu_bx, 0x4) & 0x2) == 0) goto l__051F;
	emu_ax = 0x1;
	goto l__0521;
l__051F:
	emu_xorw(&emu_ax, emu_ax);
l__0521:
	emu_get_memory16(emu_ss, emu_bp, -0xA) = emu_ax;
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp, -0xA) != 0x0) goto l__053A;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0x4), 0x1);
	if ((emu_get_memory16(emu_es, emu_bx, 0x4) & 0x1) != 0) goto l__053A;
	emu_xorw(&emu_ax, emu_ax);
l__0537:
	goto l__07BF;
l__053A:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x8);
	emu_ax = (int8)emu_al;
	emu_dx = 0x1E;
	emu_imuluw(&emu_ax, emu_dx);
	emu_bx = emu_ax;
	emu_ax = emu_get_memory16(emu_ds, emu_bx, 0x380A);
	emu_cmpw(&emu_ax, 0x1);
	if (emu_ax == 0x1) goto l__0565;
	emu_cmpw(&emu_ax, 0x2);
	if (emu_ax != 0x2) goto l__055A;
	goto l__0663;
l__055A:
	emu_cmpw(&emu_ax, 0x3);
	if (emu_ax != 0x3) { /* Unresolved jump */ emu_ip = 0x0562; emu_last_cs = 0x1423; emu_last_ip = 0x055D; emu_last_length = 0x0008; emu_last_crc = 0x1324; emu_call(); return; }
	goto l__070A;
l__0565:
	emu_incw(&emu_get_memory16(emu_ds, 0x00, 0x38BC));
	emu_push(emu_cs); emu_push(0x056E); emu_cs = 0x2BB4; f__2BB4_0004_0027_DC1D();
l__056E:
	emu_push(emu_ax);
	emu_ax = 0xFFFF;
	emu_dx = 0xFFFF;
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x8);
	emu_ax = (int8)emu_al;
	emu_push(emu_ax);
	emu_ax = 0x12;
	emu_push(emu_ax);
	emu_ax = 0xFFFF;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x058D); emu_cs = 0x1A34; emu_Unit_Create();
l__058D:
	emu_addw(&emu_sp, 0xC);
	emu_get_memory16(emu_ds, 0x00, 0x38FC) = emu_dx;
	emu_get_memory16(emu_ds, 0x00, 0x38FA) = emu_ax;
	emu_decw(&emu_get_memory16(emu_ds, 0x00, 0x38BC));
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x38FA);
	emu_orw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x38FC));
	if (emu_ax != 0) goto l__05A6;
	/* Unresolved jump */ emu_ip = 0x0535; emu_last_cs = 0x1423; emu_last_ip = 0x05A4; emu_last_length = 0x0019; emu_last_crc = 0x34F2; emu_call();
l__05A6:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x8);
	emu_ax = (int8)emu_al;
	emu_dx = 0x1E;
	emu_imuluw(&emu_ax, emu_dx);
	emu_bx = emu_ax;
	emu_ax = emu_get_memory16(emu_ds, emu_bx, 0x3804);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_get_memory16(emu_es, emu_bx, 0x50) = emu_ax;
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp, -0xA) == 0x0) goto l__05D9;
	emu_get_memory16(emu_ds, 0x00, 0x38FE) = 0x7;
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x05D5); emu_cs = 0x34E9; overlay(0x34E9, 0); f__B4E9_0050_003F_292A();
l__05D5:
	emu_pop(&emu_cx);
	goto l__0660;
l__05D9:
	emu_ax = 0xFFFF;
	emu_push(emu_ax);
	emu_ax = 0xFFFF;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x05EC); emu_cs = 0x1082; emu_Structure_FindFirst();
l__05EC:
	emu_addw(&emu_sp, 0x8);
	goto l__0637;
l__05F1:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x8);
	emu_ax = (int8)emu_al;
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x8);
	emu_ax = (int8)emu_al;
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x0608); f__1423_0F34_0017_464D();
l__0608:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax != 0) goto l__062A;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_push(emu_cs); emu_push(0x061E); emu_cs = 0x0F3F; emu_Tile_PackTile();
l__061E:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x0626); f__1423_07C5_0016_E9C2();
l__0626:
	emu_pop(&emu_cx);
	goto l__07B9;
l__062A:
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x0635); emu_cs = 0x1082; emu_Structure_FindNext();
l__0635:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
l__0637:
	emu_get_memory16(emu_ss, emu_bp, -0xC) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0xE) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0xE);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0xC));
	if (emu_ax != 0) goto l__05F1;
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x38FC));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x38FA));
	emu_push(emu_cs); emu_push(0x0652); emu_cs = 0x0FE4; emu_Unit_Free();
	/* Unresolved jump */ emu_ip = 0x0652; emu_last_cs = 0x1423; emu_last_ip = 0x0652; emu_last_length = 0x001B; emu_last_crc = 0xA402; emu_call();
l__0660:
	goto l__07A1;
l__0663:
	emu_ax = 0xFFFF;
	emu_push(emu_ax);
	emu_ax = 0x4;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0670); emu_cs = 0x34CD; overlay(0x34CD, 0); f__B4CD_1816_0033_B55B();
l__0670:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_si = emu_ax;
	emu_xorw(&emu_di, emu_di);
	goto l__06E8;
l__0678:
	emu_incw(&emu_get_memory16(emu_ds, 0x00, 0x38BC));
	emu_push(emu_cs); emu_push(0x0681); emu_cs = 0x2BB4; f__2BB4_0004_0027_DC1D();
l__0681:
	emu_push(emu_ax);
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_ax = 0x20;
	emu_push(emu_ax);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x0690); emu_cs = 0x0F3F; emu_Tile_Unpack();
l__0690:
	emu_pop(&emu_cx);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0698); emu_cs = 0x0F3F; f__0F3F_01A1_0018_9631();
l__0698:
	emu_addw(&emu_sp, 0x8);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_ax = 0x3;
	emu_push(emu_ax);
	emu_ax = 0x3;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x06AD); emu_cs = 0x2537; f__2537_000C_001C_86CB();
l__06AD:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_shlw(&emu_ax, 0x1);
	emu_bx = emu_ax;
	emu_push(emu_get_memory16(emu_ds, emu_bx, 0x60A6));
	emu_ax = 0xFFFF;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x06C0); emu_cs = 0x1A34; emu_Unit_Create();
l__06C0:
	emu_addw(&emu_sp, 0xC);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_decw(&emu_get_memory16(emu_ds, 0x00, 0x38BC));
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_ax == 0) goto l__06E7;
	emu_ax = 0xB;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x06E4); emu_cs = 0x176C; f__176C_000E_000E_633D();
l__06E4:
	emu_addw(&emu_sp, 0x6);
l__06E7:
	emu_incw(&emu_di);
l__06E8:
	emu_cmpw(&emu_di, 0x5);
	if ((int16)emu_di < (int16)0x5) goto l__0678;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x8);
	emu_ax = (int8)emu_al;
	emu_dx = 0x1E;
	emu_imuluw(&emu_ax, emu_dx);
	emu_bx = emu_ax;
	emu_ax = emu_get_memory16(emu_ds, emu_bx, 0x3804);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_get_memory16(emu_es, emu_bx, 0x50) = emu_ax;
	goto l__07A1;
l__070A:
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x0718); emu_cs = 0x0C3A; f__0C3A_247A_0015_EA04();
l__0718:
	emu_addw(&emu_sp, 0x6);
	emu_si = emu_ax;
	emu_orw(&emu_si, emu_si);
	if (emu_si == 0) { /* Unresolved jump */ emu_ip = 0x0790; emu_last_cs = 0x1423; emu_last_ip = 0x071F; emu_last_length = 0x0012; emu_last_crc = 0x4D33; emu_call(); return; }
	emu_incw(&emu_get_memory16(emu_ds, 0x00, 0x38BC));
	emu_push(emu_cs); emu_push(0x072A); emu_cs = 0x2BB4; f__2BB4_0004_0027_DC1D();
l__072A:
	emu_push(emu_ax);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x0731); emu_cs = 0x0F3F; emu_Tile_Unpack();
l__0731:
	emu_pop(&emu_cx);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x8);
	emu_ax = (int8)emu_al;
	emu_push(emu_ax);
	emu_ax = 0x6;
	emu_push(emu_ax);
	emu_ax = 0xFFFF;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x074A); emu_cs = 0x1A34; emu_Unit_Create();
l__074A:
	emu_addw(&emu_sp, 0xC);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_decw(&emu_get_memory16(emu_ds, 0x00, 0x38BC));
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_ax != 0) goto l__0762;
	/* Unresolved jump */ emu_ip = 0x0535; emu_last_cs = 0x1423; emu_last_ip = 0x075F; emu_last_length = 0x0018; emu_last_crc = 0xA53B; emu_call();
l__0762:
	emu_ax = 0x9;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x0771); emu_cs = 0x176C; f__176C_000E_000E_633D();
l__0771:
	emu_addw(&emu_sp, 0x6);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x8);
	emu_ax = (int8)emu_al;
	emu_dx = 0x1E;
	emu_imuluw(&emu_ax, emu_dx);
	emu_bx = emu_ax;
	emu_ax = emu_get_memory16(emu_ds, emu_bx, 0x3804);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_get_memory16(emu_es, emu_bx, 0x50) = emu_ax;
	goto l__079C;
l__079C:
	goto l__07A1;
l__07A1:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x8);
	emu_ax = (int8)emu_al;
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x3A38));
	if (emu_ax != emu_get_memory16(emu_ds, 0x00, 0x3A38)) goto l__07B9;
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x07B8); emu_cs = 0x10E4; f__10E4_0F1A_0088_7622();
l__07B8:
	emu_pop(&emu_cx);
l__07B9:
	emu_ax = 0x1;
	goto l__0537;
l__07BF:
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
 * Decompiled function f__1423_07C5_0016_E9C2()
 *
 * @name f__1423_07C5_0016_E9C2
 * @implements 1423:07C5:0016:E9C2 ()
 * @implements 1423:07DB:0006:4B57
 * @implements 1423:07E1:0019:7CE8
 * @implements 1423:07FA:0014:FCE3
 * @implements 1423:080E:0018:6AF2
 * @implements 1423:0826:0012:8E51
 * @implements 1423:0828:0010:2E5D
 * @implements 1423:0838:000B:F71A
 * @implements 1423:0843:000B:696A
 * @implements 1423:084E:002A:46B7
 * @implements 1423:0878:0012:A717
 * @implements 1423:088A:001B:E7BA
 * @implements 1423:08A5:0022:9024
 * @implements 1423:08A6:0021:D032
 * @implements 1423:08C7:0006:EFCE
 * @implements 1423:08C8:0005:8BCF
 *
 * Called From: 0AEC:037E:0014:9BC6
 * Called From: 1391:01DF:0008:8787
 * Called From: 1423:0623:0008:2094
 */
void f__1423_07C5_0016_E9C2()
{
l__07C5:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x6);
	emu_push(emu_si);
	emu_si = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x38FA);
	emu_orw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x38FC));
	if (emu_ax != 0) goto l__07DB;
	goto l__08C8;
l__07DB:
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x07E1); emu_cs = 0x0F3F; emu_Tile_Unpack();
l__07E1:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = 0xA0;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x07FA); emu_cs = 0x0F3F; f__0F3F_01A1_0018_9631();
l__07FA:
	emu_addw(&emu_sp, 0x8);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x080E); emu_cs = 0x0F3F; emu_Tile_PackTile();
l__080E:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_si = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x38FA));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x8);
	emu_ax = (int8)emu_al;
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x3A38));
	if (emu_ax != emu_get_memory16(emu_ds, 0x00, 0x3A38)) goto l__0826;
	emu_ax = 0x1;
	goto l__0828;
l__0826:
	emu_xorw(&emu_ax, emu_ax);
l__0828:
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_ax;
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x38FC));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x38FA));
	emu_push(emu_cs); emu_push(0x0838); emu_cs = 0x0FE4; emu_Unit_Free();
l__0838:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_ax = 0xFFFE;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0843); emu_cs = 0x3483; overlay(0x3483, 0); f__B483_0363_0016_83DF();
l__0843:
	emu_pop(&emu_cx);
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x084E); emu_cs = 0x167E; f__167E_00F3_001E_8CB3();
l__084E:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_ax);
	emu_ax = 0x1F4;
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x38FA));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x8);
	emu_ax = (int8)emu_al;
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x38FA));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x2);
	emu_ax = (int8)emu_al;
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x38FA));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x8);
	emu_ax = (int8)emu_al;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0878); emu_cs = 0x10BE; emu_House_Get_ByIndex();
l__0878:
	emu_pop(&emu_cx);
	emu_bx = emu_ax;
	emu_es = emu_dx;
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x20));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x1E));
	emu_push(emu_cs); emu_push(0x088A); emu_cs = 0x1A34; f__1A34_24FE_002F_672A();
l__088A:
	emu_addw(&emu_sp, 0xC);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x38FA));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x8);
	emu_ax = (int8)emu_al;
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x3A38));
	if (emu_ax == emu_get_memory16(emu_ds, 0x00, 0x3A38)) goto l__08A6;
	emu_ax = 0x27;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x08A5); emu_cs = 0x3483; overlay(0x3483, 0); f__B483_0363_0016_83DF();
l__08A5:
	emu_pop(&emu_cx);
l__08A6:
	emu_get_memory16(emu_ds, 0x00, 0x38FE) = 0x0;
	emu_get_memory16(emu_ds, 0x00, 0x38FC) = 0x0;
	emu_get_memory16(emu_ds, 0x00, 0x38FA) = 0x0;
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp, -0x6) == 0x0) goto l__08C8;
	emu_ax = 0x4;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x08C7); emu_cs = 0x34E9; overlay(0x34E9, 0); f__B4E9_0050_003F_292A();
l__08C7:
	emu_pop(&emu_cx);
l__08C8:
	emu_pop(&emu_si);
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
 * @implements 1423:0A51:0009:1BAF
 * @implements 1423:0A5A:0015:B691
 * @implements 1423:0A6F:000F:5EC0
 * @implements 1423:0A7B:0003:DD18
 * @implements 1423:0A7E:000E:A895
 * @implements 1423:0A8C:0020:4946
 * @implements 1423:0AAC:0004:CD05
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
l__0979:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x0981); f__1423_0F34_0017_464D();
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
l__09C1:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x09C9); f__1423_0F34_0017_464D();
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
l__09E5:
	emu_pop(&emu_cx);
	emu_bx = emu_ax;
	emu_es = emu_dx;
	emu_orw(&emu_get_memory16(emu_es, emu_bx, 0x4), 0x8);
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
l__0A14:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x0A1C); f__1423_0F34_0017_464D();
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
	if (emu_get_memory16(emu_ds, 0x00, 0x3E52) == 0x0) {
		emu_get_memory16(emu_ds, 0x00, 0x3E52) = 0x1;
	}
l__0A51:
	emu_ax = 0x25;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0A5A); emu_cs = 0x3483; overlay(0x3483, 0); f__B483_0363_0016_83DF();
l__0A5A:
	emu_pop(&emu_cx);
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x37B6), 0x0);
	if (emu_get_memory16(emu_ds, 0x00, 0x37B6) != 0x0) { /* Unresolved jump */ emu_ip = 0x0A71; emu_last_cs = 0x1423; emu_last_ip = 0x0A60; emu_last_length = 0x0015; emu_last_crc = 0xB691; emu_call(); return; }
	emu_ax = 0x69;
	emu_push(emu_ax);
	emu_ax = 0x1C;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0A6F); emu_cs = 0x10E4; f__10E4_0117_0015_392D();
l__0A6F:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x3A3A));
	emu_get_memory16(emu_es, emu_bx, 0x26) = 0x8;
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
	emu_push(emu_cs); emu_push(0x0AAC); emu_cs = 0x3483; overlay(0x3483, 0); f__B483_0363_0016_83DF();
l__0AAC:
	emu_pop(&emu_cx);
	goto l__0B31;
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
	emu_push(emu_cs); emu_push(0x0ACA); emu_cs = 0x1082; emu_Structure_FindFirst();
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
l__0AF6:
	emu_addw(&emu_sp, 0x8);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0AFF); emu_cs = 0x34CD; overlay(0x34CD, 0); f__B4CD_17DC_0019_CB46();
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
	emu_push(emu_cs); emu_push(0x0B1C); emu_cs = 0x3483; overlay(0x3483, 0); f__B483_0363_0016_83DF();
l__0B1C:
	emu_pop(&emu_cx);
	goto l__0B31;
l__0B1F:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x8);
	emu_ax = (int8)emu_al;
	emu_addw(&emu_ax, 0x6);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0B30); emu_cs = 0x3483; overlay(0x3483, 0); f__B483_0363_0016_83DF();
l__0B30:
	emu_pop(&emu_cx);
l__0B31:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x3A3A));
	emu_get_memory16(emu_es, emu_bx, 0x24) = 0x8;
l__0B3B:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x6F);
	emu_ax = (int8)emu_al;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0B49); emu_cs = 0x104B; emu_AirUnit_Get_ByIndex();
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
l__0B61:
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x8);
	emu_ax = (int8)emu_al;
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x0B72); f__1423_0F34_0017_464D();
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
l__0B91:
	emu_addw(&emu_sp, 0x6);
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
l__0BB3:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_get_memory8(emu_es, emu_bx, 0x9) = 0xFF;
	goto l__0BC7;
l__0BBD:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_ss, emu_bp, -0xA);
	emu_orb(&emu_get_memory8(emu_es, emu_bx, 0x9), emu_al);
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
l__0C21:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x0C29); f__1423_0F34_0017_464D();
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
l__0C54:
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x0C5F); emu_cs = 0x10BE; emu_House_FindNext();
l__0C5F:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_ax != 0) goto l__0BF8;
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
l__0C97:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0xA) = emu_ax;
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x0CA9); emu_cs = 0x0C3A; f__0C3A_1B79_0021_8C40();
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
l__0CD2:
	emu_addw(&emu_sp, 0x8);
	emu_orw(&emu_ax, emu_dx);
	if (emu_ax != 0) {
		emu_andw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0xFFFE);
		emu_andw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0xFFFF);
	}
l__0CE1:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0x4);
	if (emu_get_memory8(emu_es, emu_bx, 0x2) == 0x4) {
		emu_andw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0xFFFF);
		emu_andw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0xFFFC);
	}
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
	emu_push(emu_cs); emu_push(0x0D2A); emu_cs = 0x01F7; emu_Tools_Shld();
l__0D2A:
	emu_bx = emu_get_memory16(emu_ss, emu_bp, -0x2);
	emu_cx = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_andw(&emu_cx, emu_ax);
	emu_andw(&emu_bx, emu_dx);
	emu_orw(&emu_cx, emu_bx);
	if (emu_cx == 0) goto l__0D3E;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0xC);
l__0D3B:
	goto l__0DBE;
l__0D3E:
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x6));
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
	emu_push(emu_cs); emu_push(0x0D60); emu_cs = 0x01F7; emu_Tools_Shld();
l__0D60:
	emu_bx = emu_get_memory16(emu_ss, emu_bp, -0x2);
	emu_cx = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_andw(&emu_cx, emu_ax);
	emu_andw(&emu_bx, emu_dx);
	emu_orw(&emu_cx, emu_bx);
	if (emu_cx == 0) goto l__0DB0;
	emu_push(emu_cs); emu_push(0x0D73); emu_cs = 0x2BB4; f__2BB4_0004_0027_DC1D();
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
l__0DAD:
	emu_si = emu_get_memory16(emu_ss, emu_bp, -0x6);
l__0DB0:
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x6));
l__0DB3:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x20);
	if ((int16)emu_get_memory16(emu_ss, emu_bp, -0x6) < (int16)0x20) goto l__0D53;
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
	emu_push(emu_cs); emu_push(0x0DEC); emu_cs = 0x1082; emu_Structure_FindFirst();
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
	emu_push(emu_cs); emu_push(0x0E15); emu_cs = 0x1082; emu_Structure_FindNext();
l__0E15:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
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
	emu_push(emu_cs); emu_push(0x0EA2); emu_cs = 0x3483; overlay(0x3483, 0); f__B483_0363_0016_83DF();
l__0EA2:
	emu_pop(&emu_cx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_get_memory16(emu_es, emu_bx, 0x28) = 0x8;
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
l__0F19:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
l__0F1B:
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x8);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x6));
	if (emu_ax != 0) goto l__0EC2;
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
 * Called From: 1423:0605:0017:46DD
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
 * Called From: 1A34:32D5:0051:2FE9
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
l__0F47:
	emu_xorw(&emu_ax, emu_ax);
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
l__0F5B:
	emu_cmpw(&emu_dx, 0x1);
	if (emu_dx != 0x1) {
		emu_cmpw(&emu_bx, 0x1);
		if (emu_bx != 0x1) goto l__0F67;
	}
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

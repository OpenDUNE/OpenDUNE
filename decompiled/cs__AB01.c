/* $Id$ */

/** @file decompiled/cs__AB01.c Decompiled segment AB01. */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__AB01_0787_0028_C5A7()
 *
 * @name f__AB01_0787_0028_C5A7
 * @implements AB01:0787:0028:C5A7 ()
 * @implements AB01:079E:0011:DDDD
 * @implements AB01:07A3:000C:62A2
 * @implements AB01:07AA:0005:C48A
 *
 * Called From: AB01:0D8F:000A:3A40
 * Called From: AB01:207C:001D:88E8
 * Called From: AB01:20EA:0014:F67A
 */
void f__AB01_0787_0028_C5A7()
{
l__0787:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_ds);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_ax = 0x40;
	emu_ds = emu_ax;
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x63);
	emu_addb(&emu_dl, 0x6);
	emu_cx = emu_get_memory16(emu_ss, emu_bp,  0x6);
	if (emu_cx == 0) goto l__07AA;
l__079E:
	emu_inb(&emu_al, emu_dx);
	emu_testb(&emu_al, 0x8);
	if ((emu_al & 0x8) == 0) goto l__079E;
l__07A3:
	emu_inb(&emu_al, emu_dx);
	emu_testb(&emu_al, 0x8);
	if ((emu_al & 0x8) != 0) goto l__07A3;
	if (--emu_cx != 0) goto l__079E;
l__07AA:
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_pop(&emu_ds);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__AB01_15E1_0068_0B9B()
 *
 * @name f__AB01_15E1_0068_0B9B
 * @implements AB01:15E1:0068:0B9B ()
 * @implements AB01:15F9:0050:3CC3
 * @implements AB01:1616:0033:F430
 * @implements AB01:1649:001A:99A8
 * @implements AB01:1651:0012:241D
 * @implements AB01:1657:000C:1CBB
 *
 * Called From: AB01:16FF:000D:C42E
 * Called From: AB01:287C:000B:E6F7
 */
void f__AB01_15E1_0068_0B9B()
{
l__15E1:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x4);
	emu_push(emu_ds);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = 0x0;
	emu_cx = emu_get_memory16(emu_cs, 0x00, 0x1312);
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_cx;
	if (emu_cx == 0) { /* Unresolved jump */ emu_ip = 0x165C; emu_last_cs = 0xAB01; emu_last_ip = 0x15F7; emu_last_length = 0x0068; emu_last_crc = 0x0B9B; emu_call(); return; }
l__15F9:
	emu_di = emu_get_memory16(emu_ss, emu_bp, -0x2);
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x4);
	emu_cmpw(&emu_get_memory16(emu_cs, emu_di, 0x12F4), 0x0);
	if (emu_get_memory16(emu_cs, emu_di, 0x12F4) == 0x0) goto l__15F9;
	emu_lfp(&emu_ds, &emu_si, &emu_get_memory16(emu_cs, emu_di, 0x12F2));
	emu_cmpw(&emu_get_memory16(emu_ds, emu_si, 0x20), 0x0);
	if (emu_get_memory16(emu_ds, emu_si, 0x20) == 0x0) goto l__1657;
	emu_bx = 0x0;
l__1616:
	emu_al = emu_get_memory8(emu_ds, emu_bx + emu_si, 0x148);
	emu_cmpb(&emu_al, emu_get_memory8(emu_ss, emu_bp,  0x6));
	if (emu_al != emu_get_memory8(emu_ss, emu_bp,  0x6)) goto l__1651;
	emu_get_memory8(emu_ds, emu_bx + emu_si, 0x148) = 0xFF;
	emu_cl = emu_get_memory8(emu_ds, emu_bx + emu_si, 0x168);
	emu_di = emu_bx;
	emu_bl = emu_al;
	emu_bh = 0x0;
	emu_bl = emu_get_memory8(emu_ds, emu_bx + emu_si, 0x68);
	emu_decb(&emu_get_memory8(emu_cs, emu_bx, 0x13DE));
	emu_orb(&emu_bl, 0x80);
	emu_push(emu_ax);
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_get_memory16(emu_ss, emu_bp,  0x2) = 0x0;
	emu_pop(&emu_bp);
	emu_push(emu_cx);
	emu_push(emu_bx);
	emu_push(emu_cs);
	emu_push(0x1649); emu_MPU_Send();
l__1649:
	emu_addw(&emu_sp, 0x6);
	emu_decw(&emu_get_memory16(emu_ds, emu_si, 0x20));
	emu_bx = emu_di;
l__1651:
	emu_incw(&emu_bx);
	emu_cmpw(&emu_bx, 0x20);
	if (emu_bx < 0x20) goto l__1616;
l__1657:
	emu_decw(&emu_get_memory16(emu_ss, emu_bp, -0x4));
	if (emu_get_memory16(emu_ss, emu_bp, -0x4) != 0) goto l__15F9;
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_pop(&emu_ds);
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__AB01_16B7_0039_7EF1()
 *
 * @name f__AB01_16B7_0039_7EF1
 * @implements AB01:16B7:0039:7EF1 ()
 * @implements AB01:16C3:002D:E5B4
 * @implements AB01:16F5:000D:C42E
 * @implements AB01:1702:001A:15C8
 * @implements AB01:171C:003B:F13B
 * @implements AB01:1724:0033:8853
 * @implements AB01:1732:0025:6623
 * @implements AB01:175C:0009:93CA
 * @implements AB01:1765:0005:C48A
 *
 * Called From: AB01:1BAB:0006:BA32
 * Called From: AB01:243E:0009:3AE4
 */
void f__AB01_16B7_0039_7EF1()
{
l__16B7:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_ds);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_lfp(&emu_ds, &emu_si, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_di = 0x0;
l__16C3:
	emu_bx = emu_di;
	emu_al = emu_get_memory8(emu_ds, emu_bx + emu_si, 0xF8);
	emu_cmpb(&emu_al, 0x40);
	if ((int8)emu_al < (int8)0x40) goto l__16F5;
	emu_get_memory8(emu_cs, emu_bx, 0x135E) = 0x0;
	emu_orw(&emu_bx, 0xB0);
	emu_push(emu_ax);
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_get_memory16(emu_ss, emu_bp,  0x2) = 0x0;
	emu_pop(&emu_bp);
	emu_push(emu_ax);
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_get_memory16(emu_ss, emu_bp,  0x2) = 0x40;
	emu_pop(&emu_bp);
	emu_push(emu_bx);
	emu_push(emu_cs);
	emu_push(0x16F0); emu_MPU_Send();
	/* Unresolved jump */ emu_ip = 0x16F0; emu_last_cs = 0xAB01; emu_last_ip = 0x16F0; emu_last_length = 0x002D; emu_last_crc = 0xE5B4; emu_call();
l__16F5:
	emu_al = emu_get_memory8(emu_ds, emu_bx + emu_si, 0x118);
	emu_cmpb(&emu_al, 0x40);
	if ((int8)emu_al < (int8)0x40) goto l__1724;
	emu_push(emu_di);
	emu_push(emu_cs);
	emu_push(0x1702); f__AB01_15E1_0068_0B9B();
l__1702:
	emu_addw(&emu_sp, 0x2);
	emu_bx = emu_di;
	emu_bl = emu_get_memory8(emu_ds, emu_bx + emu_si, 0x68);
	emu_bh = 0x0;
	emu_incw(&emu_bx);
	emu_push(emu_bx);
	emu_push(emu_ax);
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_get_memory16(emu_ss, emu_bp,  0x2) = 0x0;
	emu_pop(&emu_bp);
	emu_push(emu_cs);
	emu_push(0x171C); f__AB01_289D_0017_6184();
l__171C:
	emu_addw(&emu_sp, 0x4);
	emu_bx = emu_di;
	emu_get_memory8(emu_ds, emu_bx + emu_si, 0x68) = emu_bl;
l__1724:
	emu_al = emu_get_memory8(emu_ds, emu_bx + emu_si, 0x128);
	emu_cmpb(&emu_al, 0x40);
	if ((int8)emu_al >= (int8)0x40) {
		emu_andb(&emu_get_memory8(emu_cs, emu_bx, 0x13EE), 0xBF);
	}
l__1732:
	emu_al = emu_get_memory8(emu_ds, emu_bx + emu_si, 0x138);
	emu_cmpb(&emu_al, 0x40);
	if ((int8)emu_al < (int8)0x40) goto l__175C;
	emu_orw(&emu_bx, 0xB0);
	emu_push(emu_ax);
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_get_memory16(emu_ss, emu_bp,  0x2) = 0x0;
	emu_pop(&emu_bp);
	emu_push(emu_ax);
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_get_memory16(emu_ss, emu_bp,  0x2) = 0x70;
	emu_pop(&emu_bp);
	emu_push(emu_bx);
	emu_push(emu_cs);
	emu_push(0x1757); emu_MPU_Send();
	/* Unresolved jump */ emu_ip = 0x1757; emu_last_cs = 0xAB01; emu_last_ip = 0x1757; emu_last_length = 0x0025; emu_last_crc = 0x6623; emu_call();
l__175C:
	emu_incw(&emu_di);
	emu_cmpw(&emu_di, 0x10);
	if (emu_di == 0x10) goto l__1765;
	goto l__16C3;
l__1765:
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_pop(&emu_ds);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__AB01_18AC_0082_307C()
 *
 * @name f__AB01_18AC_0082_307C
 * @implements AB01:18AC:0082:307C ()
 * @implements AB01:18D8:0056:2D2C
 * @implements AB01:18F3:003B:BCBD
 * @implements AB01:1919:0015:9F9D
 * @implements AB01:192E:000D:8B3D
 * @implements AB01:1931:000A:5F79
 * @implements AB01:193B:0025:E303
 * @implements AB01:1959:0007:5A3D
 * @implements AB01:1964:0002:F0BA
 * @implements AB01:1966:0003:DD00
 * @implements AB01:1969:0003:5D0F
 * @implements AB01:196C:0003:5D14
 * @implements AB01:19C7:0014:EAB7
 * @implements AB01:19DB:0011:D88E
 * @implements AB01:19EC:0008:90B2
 * @implements AB01:19F4:0014:2A78
 * @implements AB01:19FA:000E:C637
 * @implements AB01:1A08:0013:7B56
 * @implements AB01:1A1B:000E:4FD0
 * @implements AB01:1A29:000E:9CBA
 * @implements AB01:1A40:0015:ED40
 * @implements AB01:1A55:0013:7FB9
 * @implements AB01:1A60:0008:0AA8
 *
 * Called From: AB01:1EC2:0009:6A86
 */
void f__AB01_18AC_0082_307C()
{
l__18AC:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x2);
	emu_push(emu_ds);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_cld();
	emu_lfp(&emu_ds, &emu_si, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_bl = emu_get_memory8(emu_ss, emu_bp,  0xA);
	emu_bh = 0x0;
	emu_dl = emu_get_memory8(emu_ss, emu_bp,  0xE);
	emu_dh = 0x0;
	emu_al = emu_get_memory8(emu_ds, emu_bx + emu_si, 0xA8);
	emu_cmpb(&emu_al, 0xFF);
	if (emu_al != 0xFF) {
		emu_get_memory8(emu_ds, emu_bx + emu_si, 0xA8) = 0xFF;
		emu_bl = emu_al;
		emu_lfp(&emu_es, &emu_di, &emu_get_memory16(emu_ds, emu_si, 0x12));
		emu_dl = emu_get_memory8(emu_es, emu_bx + emu_di, 0x0);
	}
l__18D8:
	emu_bl = emu_get_memory8(emu_ss, emu_bp,  0xC);
	emu_bh = 0x0;
	emu_bl = emu_get_memory8(emu_cs, emu_bx, 0x11F2);
	emu_cmpb(&emu_bl, 0xFF);
	if (emu_bl != 0xFF) {
		emu_addb(&emu_bl, emu_get_memory8(emu_ss, emu_bp,  0xA));
		emu_get_memory8(emu_cs, emu_bx, 0x131E) = emu_dl;
		emu_get_memory8(emu_ds, emu_bx + emu_si, 0xB8) = emu_dl;
	}
l__18F3:
	emu_al = emu_get_memory8(emu_ss, emu_bp,  0xC);
	emu_bl = emu_get_memory8(emu_ss, emu_bp,  0xA);
	emu_cmpb(&emu_al, 0x7);
	if (emu_al == 0x7) goto l__193B;
	emu_cmpb(&emu_al, 0x76);
	if (emu_al == 0x76) { /* Unresolved jump */ emu_ip = 0x1960; emu_last_cs = 0xAB01; emu_last_ip = 0x18FF; emu_last_length = 0x003B; emu_last_crc = 0xBCBD; emu_call(); return; }
	emu_cmpb(&emu_al, 0x77);
	if (emu_al == 0x77) { /* Unresolved jump */ emu_ip = 0x1962; emu_last_cs = 0xAB01; emu_last_ip = 0x1903; emu_last_length = 0x003B; emu_last_crc = 0xBCBD; emu_call(); return; }
	emu_cmpb(&emu_al, 0x74);
	if (emu_al == 0x74) goto l__1964;
	emu_cmpb(&emu_al, 0x75);
	if (emu_al == 0x75) goto l__1966;
	emu_cmpb(&emu_al, 0x6F);
	if (emu_al == 0x6F) goto l__1969;
	emu_cmpb(&emu_al, 0x6E);
	if (emu_al == 0x6E) goto l__196C;
	emu_cmpb(&emu_al, 0x73);
	if (emu_al == 0x73) { /* Unresolved jump */ emu_ip = 0x196F; emu_last_cs = 0xAB01; emu_last_ip = 0x1917; emu_last_length = 0x003B; emu_last_crc = 0xBCBD; emu_call(); return; }
l__1919:
	emu_testb(&emu_get_memory8(emu_cs, emu_bx, 0x13EE), 0x80);
	if ((emu_get_memory8(emu_cs, emu_bx, 0x13EE) & 0x80) != 0) goto l__1931;
	emu_bl = emu_get_memory8(emu_ds, emu_bx + emu_si, 0x68);
	emu_orb(&emu_bl, 0xB0);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_bx);
	emu_push(emu_cs);
	emu_push(0x192E); emu_MPU_Send();
l__192E:
	emu_addw(&emu_sp, 0x6);
l__1931:
	emu_ax = 0x3;
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_pop(&emu_ds);
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
l__193B:
	emu_cx = emu_get_memory16(emu_ds, emu_si, 0x24);
	emu_cmpw(&emu_cx, 0x64);
	if (emu_cx == 0x64) goto l__1919;
	emu_ax = emu_dx;
	emu_mulw(&emu_ax, emu_cx);
	emu_cx = 0x64;
	emu_divw(&emu_ax, emu_cx);
	emu_dx = emu_ax;
	emu_ax = 0x7;
	emu_cmpw(&emu_dx, 0x7F);
	if (emu_dx >= 0x7F) {
		emu_dx = 0x7F;
	}
l__1959:
	emu_get_memory8(emu_cs, emu_bx, 0x131E) = emu_dl;
	goto l__1919;
l__1964:
	goto l__19C7;
l__1966:
	goto l__19EC;
l__1969:
	goto l__1A29;
l__196C:
	goto l__1A40;
l__19C7:
	emu_bx = 0x0;
	emu_cx = 0x4;
	emu_cmpw(&emu_get_memory16(emu_ds, emu_bx + emu_si, 0x60), 0xFFFF);
	if (emu_get_memory16(emu_ds, emu_bx + emu_si, 0x60) == 0xFFFF) goto l__19DB;
	emu_addw(&emu_bx, 0x2);
	if (--emu_cx != 0) { /* Unresolved jump */ emu_ip = 0x19CD; emu_last_cs = 0xAB01; emu_last_ip = 0x19D6; emu_last_length = 0x0014; emu_last_crc = 0xEAB7; emu_call(); }
	goto l__1931;
l__19DB:
	emu_get_memory16(emu_ds, emu_bx + emu_si, 0x60) = emu_dx;
	emu_shlw(&emu_bx, 0x1);
	emu_lfp(&emu_es, &emu_di, &emu_get_memory16(emu_ds, emu_si, 0xC));
	emu_get_memory16(emu_ds, emu_bx + emu_si, 0x50) = emu_di;
	emu_get_memory16(emu_ds, emu_bx + emu_si, 0x52) = emu_es;
	goto l__1931;
l__19EC:
	emu_cmpb(&emu_dl, 0x40);
	if ((int8)emu_dl >= (int8)0x40) goto l__19F4;
	goto l__1931;
l__19F4:
	emu_bx = 0x6;
	emu_cx = 0x4;
l__19FA:
	emu_cmpw(&emu_get_memory16(emu_ds, emu_bx + emu_si, 0x60), 0xFFFF);
	if (emu_get_memory16(emu_ds, emu_bx + emu_si, 0x60) != 0xFFFF) goto l__1A08;
	emu_subw(&emu_bx, 0x2);
	if (--emu_cx != 0) goto l__19FA;
	goto l__1931;
l__1A08:
	emu_cmpw(&emu_get_memory16(emu_ds, emu_bx + emu_si, 0x60), 0x0);
	if (emu_get_memory16(emu_ds, emu_bx + emu_si, 0x60) == 0x0) goto l__1A1B;
	emu_decw(&emu_get_memory16(emu_ds, emu_bx + emu_si, 0x60));
	if (emu_get_memory16(emu_ds, emu_bx + emu_si, 0x60) != 0) goto l__1A1B;
	emu_get_memory16(emu_ds, emu_bx + emu_si, 0x60) = 0xFFFF;
	goto l__1931;
l__1A1B:
	emu_shlw(&emu_bx, 0x1);
	emu_lfp(&emu_es, &emu_di, &emu_get_memory16(emu_ds, emu_bx + emu_si, 0x50));
	emu_get_memory16(emu_ds, emu_si, 0xC) = emu_di;
	emu_get_memory16(emu_ds, emu_si, 0xE) = emu_es;
	goto l__1931;
l__1A29:
	emu_orb(&emu_get_memory8(emu_cs, emu_bx, 0x13EE), 0x40);
	emu_cmpb(&emu_dl, 0x40);
	if ((int8)emu_dl < (int8)0x40) { /* Unresolved jump */ emu_ip = 0x1A37; emu_last_cs = 0xAB01; emu_last_ip = 0x1A32; emu_last_length = 0x000E; emu_last_crc = 0x9CBA; emu_call(); return; }
	goto l__1931;
l__1A40:
	emu_di = emu_bx;
	emu_cmpb(&emu_dl, 0x40);
	if ((int8)emu_dl < (int8)0x40) { /* Unresolved jump */ emu_ip = 0x1A68; emu_last_cs = 0xAB01; emu_last_ip = 0x1A45; emu_last_length = 0x0015; emu_last_crc = 0xED40; emu_call(); return; }
	emu_push(emu_ax);
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_get_memory16(emu_ss, emu_bp,  0x2) = 0x0;
	emu_pop(&emu_bp);
	emu_push(emu_cs);
	emu_push(0x1A55); f__AB01_281A_003D_9A17();
l__1A55:
	emu_addw(&emu_sp, 0x2);
	emu_decw(&emu_ax);
	emu_cmpw(&emu_ax, 0xFFFF);
	if (emu_ax == 0xFFFF) {
		emu_ax = emu_di;
	}
l__1A60:
	emu_bx = emu_di;
	emu_get_memory8(emu_ds, emu_bx + emu_si, 0x68) = emu_al;
	goto l__1931;
}

/**
 * Decompiled function f__AB01_1A90_002B_D292()
 *
 * @name f__AB01_1A90_002B_D292
 * @implements AB01:1A90:002B:D292 ()
 * @implements AB01:1ABB:0080:1D4F
 * @implements AB01:1ABE:007D:13F6
 * @implements AB01:1AC4:0077:7B2B
 * @implements AB01:1B3B:000D:FDDF
 * @implements AB01:1B3E:000A:299B
 *
 * Called From: AB01:1E93:004D:4A38
 */
void f__AB01_1A90_002B_D292()
{
l__1A90:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x6);
	emu_push(emu_ds);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_lfp(&emu_ds, &emu_si, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_lfp(&emu_es, &emu_di, &emu_get_memory16(emu_ds, emu_si, 0xC));
	emu_ax = emu_get_memory16(emu_es, emu_di, 0x0);
	emu_andb(&emu_al, 0xF);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ax;
	emu_al = emu_get_memory8(emu_es, emu_di, 0x2);
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_ax = emu_di;
	emu_addw(&emu_di, 0x3);
	emu_bx = 0x0;
	emu_dx = 0x0;
	goto l__1AC4;
l__1ABB:
	emu_cx = 0x7;
l__1ABE:
	emu_shlw(&emu_bx, 0x1);
	emu_rclw(&emu_dx, 0x1);
	if (--emu_cx != 0) goto l__1ABE;
l__1AC4:
	emu_cl = emu_get_memory8(emu_es, emu_di, 0x0);
	emu_incw(&emu_di);
	emu_ch = emu_cl;
	emu_andb(&emu_cl, 0x7F);
	emu_orb(&emu_bl, emu_cl);
	emu_orb(&emu_ch, emu_ch);
	if (emu_flags.sf) goto l__1ABB;
	emu_subw(&emu_di, emu_ax);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_di;
	emu_di = emu_get_memory16(emu_ss, emu_bp, -0x2);
	emu_andw(&emu_di, 0xF);
	emu_testb(&emu_get_memory8(emu_cs, emu_di, 0x13EE), 0x80);
	if ((emu_get_memory8(emu_cs, emu_di, 0x13EE) & 0x80) != 0) goto l__1B3E;
	emu_ax = emu_ds;
	emu_es = emu_ax;
	emu_movw(&emu_di, emu_si + 0x148);
	emu_cx = 0x20;
	emu_al = 0xFF;
	emu_repne_scasb();
	emu_ax = emu_di;
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x1B00; emu_last_cs = 0xAB01; emu_last_ip = 0x1AF7; emu_last_length = 0x0077; emu_last_crc = 0x7B2B; emu_call(); return; }
	emu_incw(&emu_get_memory16(emu_ds, emu_si, 0x20));
	emu_movw(&emu_ax, emu_si + 0x149);
	emu_subw(&emu_di, emu_ax);
	emu_ax = emu_bx;
	emu_bx = emu_di;
	emu_subw(&emu_ax, 0x1);
	emu_sbbw(&emu_dx, 0x0);
	emu_cx = emu_get_memory16(emu_ss, emu_bp, -0x2);
	emu_get_memory8(emu_ds, emu_bx + emu_si, 0x148) = emu_cl;
	emu_get_memory8(emu_ds, emu_bx + emu_si, 0x168) = emu_ch;
	emu_shlw(&emu_bx, 0x1);
	emu_get_memory16(emu_ds, emu_bx + emu_si, 0x188) = emu_ax;
	emu_get_memory16(emu_ds, emu_bx + emu_si, 0x1C8) = emu_dx;
	emu_bl = emu_cl;
	emu_bh = 0x0;
	emu_bl = emu_get_memory8(emu_ds, emu_bx + emu_si, 0x68);
	emu_incb(&emu_get_memory8(emu_cs, emu_bx, 0x13DE));
	emu_orb(&emu_bl, 0x90);
	emu_cl = emu_ch;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cx);
	emu_push(emu_bx);
	emu_push(emu_cs);
	emu_push(0x1B3B); emu_MPU_Send();
l__1B3B:
	emu_addw(&emu_sp, 0x6);
l__1B3E:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x6);
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_pop(&emu_ds);
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__AB01_1B48_0023_740C()
 *
 * @name f__AB01_1B48_0023_740C
 * @implements AB01:1B48:0023:740C ()
 * @implements AB01:1B74:002A:F753
 * @implements AB01:1B9E:000A:2D9B
 * @implements AB01:1BA8:0006:BA32
 * @implements AB01:1BAE:0021:22BB
 * @implements AB01:1BD4:0021:0996
 * @implements AB01:1BF5:0035:43FD
 * @implements AB01:1C2A:001F:6CAB
 * @implements AB01:1C3A:000F:7AF4
 *
 * Called From: AB01:1EB2:0006:3994
 */
void f__AB01_1B48_0023_740C()
{
l__1B48:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x4);
	emu_push(emu_ds);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_lfp(&emu_ds, &emu_si, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_lfp(&emu_es, &emu_di, &emu_get_memory16(emu_ds, emu_si, 0xC));
	emu_al = emu_get_memory8(emu_es, emu_di, 0x1);
	emu_get_memory8(emu_ss, emu_bp, -0x4) = emu_al;
	emu_bx = emu_di;
	emu_addw(&emu_di, 0x2);
	emu_ax = 0x0;
	emu_dx = 0x0;
	goto l__1B74;
l__1B74:
	emu_cl = emu_get_memory8(emu_es, emu_di, 0x0);
	emu_incw(&emu_di);
	emu_ch = emu_cl;
	emu_andb(&emu_cl, 0x7F);
	emu_orb(&emu_al, emu_cl);
	emu_orb(&emu_ch, emu_ch);
	if (emu_flags.sf) { /* Unresolved jump */ emu_ip = 0x1B6B; emu_last_cs = 0xAB01; emu_last_ip = 0x1B81; emu_last_length = 0x002A; emu_last_crc = 0xF753; emu_call(); return; }
	emu_cx = emu_di;
	emu_subw(&emu_cx, emu_bx);
	emu_addw(&emu_ax, emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ax;
	emu_al = emu_get_memory8(emu_ss, emu_bp, -0x4);
	emu_cmpb(&emu_al, 0x2F);
	if (emu_al == 0x2F) goto l__1BA8;
	emu_cmpb(&emu_al, 0x58);
	if (emu_al == 0x58) goto l__1BD4;
	emu_cmpb(&emu_al, 0x51);
	if (emu_al != 0x51) goto l__1B9E;
	goto l__1C2A;
l__1B9E:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x2);
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_pop(&emu_ds);
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
l__1BA8:
	emu_push(emu_ds);
	emu_push(emu_si);
	emu_push(emu_cs);
	emu_push(0x1BAE); f__AB01_16B7_0039_7EF1();
l__1BAE:
	emu_addw(&emu_sp, 0x4);
	emu_get_memory16(emu_ds, emu_si, 0x1A) = 0x2;
	emu_cmpw(&emu_get_memory16(emu_ds, emu_si, 0x1C), 0x0);
	if (emu_get_memory16(emu_ds, emu_si, 0x1C) == 0x0) goto l__1B9E;
	emu_push(emu_get_memory16(emu_cs, 0x00, 0x1314));
	emu_push(emu_ax);
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_get_memory16(emu_ss, emu_bp,  0x2) = 0x0;
	emu_pop(&emu_bp);
	emu_push(emu_cs);
	emu_push(0x1BCF); emu_MPU_ClearData();
	/* Unresolved jump */ emu_ip = 0x1BCF; emu_last_cs = 0xAB01; emu_last_ip = 0x1BCF; emu_last_length = 0x0021; emu_last_crc = 0x22BB; emu_call();
l__1BD4:
	emu_ch = 0x0;
	emu_cl = emu_get_memory8(emu_es, emu_di, 0x0);
	emu_get_memory16(emu_ds, emu_si, 0x42) = emu_cx;
	emu_cl = emu_get_memory8(emu_es, emu_di, 0x1);
	emu_subw(&emu_cx, 0x2);
	if (!emu_flags.cf) goto l__1BF5;
	emu_negw(&emu_cx, emu_cx);
	emu_ax = 0x8D5;
	emu_dx = 0x2;
	emu_shrw(&emu_dx, 0x1);
	emu_rcrw(&emu_ax, 0x1);
	if (--emu_cx != 0) { /* Unresolved jump */ emu_ip = 0x1BED; emu_last_cs = 0xAB01; emu_last_ip = 0x1BF1; emu_last_length = 0x0021; emu_last_crc = 0x0996; emu_call(); }
	/* Unresolved jump */ emu_ip = 0x1C0A; emu_last_cs = 0xAB01; emu_last_ip = 0x1BF3; emu_last_length = 0x0021; emu_last_crc = 0x0996; emu_call();
l__1BF5:
	emu_ax = 0x1;
	emu_shlw(&emu_ax, emu_cl);
	emu_cx = emu_ax;
	emu_ax = 0x0;
	emu_dx = 0x0;
	emu_addw(&emu_ax, 0x8D5);
	emu_adcw(&emu_dx, 0x2);
	if (--emu_cx != 0) { /* Unresolved jump */ emu_ip = 0x1C02; emu_last_cs = 0xAB01; emu_last_ip = 0x1C08; emu_last_length = 0x0035; emu_last_crc = 0x43FD; emu_call(); }
	emu_get_memory16(emu_ds, emu_si, 0x44) = emu_ax;
	emu_get_memory16(emu_ds, emu_si, 0x46) = emu_dx;
	emu_ax = 0x0;
	emu_dx = 0x0;
	emu_cx = 0x1;
	emu_addw(&emu_ax, emu_get_memory16(emu_ds, emu_si, 0x44));
	emu_adcw(&emu_dx, emu_get_memory16(emu_ds, emu_si, 0x46));
	if (--emu_cx != 0) { /* Unresolved jump */ emu_ip = 0x1C19; emu_last_cs = 0xAB01; emu_last_ip = 0x1C1F; emu_last_length = 0x0035; emu_last_crc = 0x43FD; emu_call(); }
	emu_get_memory16(emu_ds, emu_si, 0x48) = emu_ax;
	emu_get_memory16(emu_ds, emu_si, 0x4A) = emu_dx;
	goto l__1B9E;
l__1C2A:
	emu_dh = 0x0;
	emu_dl = emu_get_memory8(emu_es, emu_di, 0x0);
	emu_ah = emu_get_memory8(emu_es, emu_di, 0x1);
	emu_al = emu_get_memory8(emu_es, emu_di, 0x2);
	emu_cx = 0x4;
l__1C3A:
	emu_shlw(&emu_ax, 0x1);
	emu_rclw(&emu_dx, 0x1);
	if (--emu_cx != 0) goto l__1C3A;
	emu_get_memory16(emu_ds, emu_si, 0x4C) = emu_ax;
	emu_get_memory16(emu_ds, emu_si, 0x4E) = emu_dx;
	goto l__1B9E;
}

/**
 * Decompiled function f__AB01_281A_003D_9A17()
 *
 * @name f__AB01_281A_003D_9A17
 * @implements AB01:281A:003D:9A17 ()
 * @implements AB01:282D:002A:29E1
 * @implements AB01:2842:0015:FAC0
 * @implements AB01:2857:001D:BB40
 * @implements AB01:2874:000B:E6F7
 * @implements AB01:287F:0019:4F9F
 * @implements AB01:2898:0005:C48A
 *
 * Called From: AB01:1A52:0015:ED40
 */
void f__AB01_281A_003D_9A17()
{
l__281A:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_ds);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_pushf();
	emu_cli();
	emu_cx = 0xFFFF;
	emu_si = emu_cx;
	emu_ax = 0xC0;
	emu_di = 0xF;
l__282D:
	emu_testb(&emu_al, emu_get_memory8(emu_cs, emu_di, 0x13EE));
	if ((emu_al & emu_get_memory8(emu_cs, emu_di, 0x13EE)) == 0) {
		emu_cmpb(&emu_get_memory8(emu_cs, emu_di, 0x13DE), emu_cl);
		if (emu_get_memory8(emu_cs, emu_di, 0x13DE) < emu_cl) {
			emu_cl = emu_get_memory8(emu_cs, emu_di, 0x13DE);
			emu_si = emu_di;
		}
	}
l__2842:
	emu_decw(&emu_di);
	emu_cmpw(&emu_di, 0x0);
	if ((int16)emu_di >= (int16)0x0) goto l__282D;
	emu_cmpw(&emu_si, 0xFFFF);
	if (emu_si != 0xFFFF) goto l__2857;
	emu_cmpw(&emu_ax, 0x80);
	if (emu_ax == 0x80) { /* Unresolved jump */ emu_ip = 0x288E; emu_last_cs = 0xAB01; emu_last_ip = 0x2850; emu_last_length = 0x0015; emu_last_crc = 0xFAC0; emu_call(); return; }
	emu_ax = 0x80;
	/* Unresolved jump */ emu_ip = 0x282A; emu_last_cs = 0xAB01; emu_last_ip = 0x2855; emu_last_length = 0x0015; emu_last_crc = 0xFAC0; emu_call();
l__2857:
	emu_orw(&emu_si, 0xB0);
	emu_push(emu_ax);
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_get_memory16(emu_ss, emu_bp,  0x2) = 0x0;
	emu_pop(&emu_bp);
	emu_push(emu_ax);
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_get_memory16(emu_ss, emu_bp,  0x2) = 0x40;
	emu_pop(&emu_bp);
	emu_push(emu_si);
	emu_push(emu_cs);
	emu_push(0x2874); emu_MPU_Send();
l__2874:
	emu_addw(&emu_sp, 0x6);
	emu_andw(&emu_si, 0xF);
	emu_push(emu_si);
	emu_push(emu_cs);
	emu_push(0x287F); f__AB01_15E1_0068_0B9B();
l__287F:
	emu_addw(&emu_sp, 0x2);
	emu_get_memory8(emu_cs, emu_si, 0x13DE) = 0x0;
	emu_orb(&emu_get_memory8(emu_cs, emu_si, 0x13EE), 0x80);
	emu_ax = emu_si;
	emu_incw(&emu_ax);
	emu_orb(&emu_bh, 0x0);
	emu_push(emu_cs);
	emu_push(0x2898); f__AB01_2892_0001_6780();
l__2898:
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_pop(&emu_ds);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__AB01_2892_0001_6780()
 *
 * @name f__AB01_2892_0001_6780
 * @implements AB01:2892:0001:6780 ()
 *
 * Called From: AB01:2895:0019:4F9F
 */
void f__AB01_2892_0001_6780()
{
l__2892:

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	emu_popf();
	return;
}

/**
 * Decompiled function f__AB01_289D_0017_6184()
 *
 * @name f__AB01_289D_0017_6184
 * @implements AB01:289D:0017:6184 ()
 * @implements AB01:28B4:0029:4C06
 * @implements AB01:28DD:001C:D2B9
 * @implements AB01:28F9:0028:DB24
 * @implements AB01:2904:001D:8BC7
 * @implements AB01:2921:002D:ECDF
 * @implements AB01:2925:0029:2E5B
 * @implements AB01:294E:0024:5A85
 * @implements AB01:2951:0021:F20C
 * @implements AB01:2972:000A:191F
 * @implements AB01:2975:0007:3FBD
 * @implements AB01:297C:0005:C48A
 *
 * Called From: AB01:1719:001A:15C8
 */
void f__AB01_289D_0017_6184()
{
l__289D:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_ds);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_pushf();
	emu_cli();
	emu_si = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_decw(&emu_si);
	emu_testb(&emu_get_memory8(emu_cs, emu_si, 0x13EE), 0x80);
	if ((emu_get_memory8(emu_cs, emu_si, 0x13EE) & 0x80) != 0) goto l__28B4;
	goto l__2975;
l__28B4:
	emu_andb(&emu_get_memory8(emu_cs, emu_si, 0x13EE), 0x7F);
	emu_get_memory8(emu_cs, emu_si, 0x13DE) = 0x0;
	emu_orw(&emu_si, 0xB0);
	emu_push(emu_ax);
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_get_memory16(emu_ss, emu_bp,  0x2) = 0x0;
	emu_pop(&emu_bp);
	emu_push(emu_ax);
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_get_memory16(emu_ss, emu_bp,  0x2) = 0x40;
	emu_pop(&emu_bp);
	emu_push(emu_si);
	emu_push(emu_cs);
	emu_push(0x28DD); emu_MPU_Send();
l__28DD:
	emu_addw(&emu_sp, 0x6);
	emu_push(emu_ax);
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_get_memory16(emu_ss, emu_bp,  0x2) = 0x0;
	emu_pop(&emu_bp);
	emu_push(emu_ax);
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_get_memory16(emu_ss, emu_bp,  0x2) = 0x7B;
	emu_pop(&emu_bp);
	emu_push(emu_si);
	emu_push(emu_cs);
	emu_push(0x28F9); emu_MPU_Send();
l__28F9:
	emu_addw(&emu_sp, 0x6);
	emu_andw(&emu_si, 0xF);
	emu_bx = emu_si;
	emu_di = 0x0;
l__2904:
	emu_dl = emu_get_memory8(emu_cs, emu_bx, 0x131E);
	emu_cmpb(&emu_dl, 0xFF);
	if (emu_dl == 0xFF) goto l__2925;
	emu_push(emu_bx);
	emu_andb(&emu_bl, 0xF);
	emu_orb(&emu_bl, 0xB0);
	emu_al = emu_get_memory8(emu_cs, emu_di, 0x11D7);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_bx);
	emu_push(emu_cs);
	emu_push(0x2921); emu_MPU_Send();
l__2921:
	emu_addw(&emu_sp, 0x6);
	emu_pop(&emu_bx);
l__2925:
	emu_addw(&emu_bx, 0x10);
	emu_incw(&emu_di);
	emu_cmpw(&emu_di, 0x9);
	if (emu_di != 0x9) goto l__2904;
	emu_andw(&emu_si, 0xF);
	emu_al = emu_get_memory8(emu_cs, emu_si, 0x13AE);
	emu_cmpb(&emu_al, 0xFF);
	if (emu_al == 0xFF) goto l__2951;
	emu_orw(&emu_si, 0xC0);
	emu_push(emu_ax);
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_get_memory16(emu_ss, emu_bp,  0x2) = 0x0;
	emu_pop(&emu_bp);
	emu_push(emu_ax);
	emu_push(emu_si);
	emu_push(emu_cs);
	emu_push(0x294E); emu_MPU_Send();
l__294E:
	emu_addw(&emu_sp, 0x6);
l__2951:
	emu_andw(&emu_si, 0xF);
	emu_al = emu_get_memory8(emu_cs, emu_si, 0x13BE);
	emu_cmpb(&emu_al, 0xFF);
	if (emu_al == 0xFF) goto l__2975;
	emu_dl = emu_get_memory8(emu_cs, emu_si, 0x13CE);
	emu_cmpb(&emu_dl, 0xFF);
	if (emu_dl == 0xFF) goto l__2975;
	emu_orw(&emu_si, 0xE0);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_si);
	emu_push(emu_cs);
	emu_push(0x2972); emu_MPU_Send();
l__2972:
	emu_addw(&emu_sp, 0x6);
l__2975:
	emu_orb(&emu_bh, 0x0);
	emu_push(emu_cs);
	emu_push(0x297C); f__AB01_2976_0001_6780();
l__297C:
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_pop(&emu_ds);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__AB01_2976_0001_6780()
 *
 * @name f__AB01_2976_0001_6780
 * @implements AB01:2976:0001:6780 ()
 *
 * Called From: AB01:2979:0007:3FBD
 * Called From: AB01:2979:000A:191F
 */
void f__AB01_2976_0001_6780()
{
l__2976:

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	emu_popf();
	return;
}

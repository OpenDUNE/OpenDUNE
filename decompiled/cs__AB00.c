/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__AB00_0169_001D_2693()
 *
 * @name f__AB00_0169_001D_2693
 * @implements AB00:0169:001D:2693 ()
 * @implements AB00:0186:000C:4828
 *
 * Called From: AB00:0CAB:006F:09A2
 */
void f__AB00_0169_001D_2693()
{
l__0169:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_ds);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_cx = 0x200;
	emu_dx = emu_get_memory16(emu_cs, 0x00, 0xFE);
	emu_inb(&emu_al, emu_dx);
	emu_testb(&emu_al, 0x80);
	if ((emu_al & 0x80) == 0) goto l__0186;
	if (--emu_cx != 0) { /* Unresolved jump */ emu_ip = 0x0177; emu_last_cs = 0xAB00; emu_last_ip = 0x017C; emu_last_length = 0x001D; emu_last_crc = 0x2693; emu_call(); }
	emu_ax = 0x0;
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_pop(&emu_ds);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
l__0186:
	emu_al = emu_get_memory8(emu_ss, emu_bp,  0x6);
	emu_outb(emu_dx, emu_al);
	emu_ax = 0xFFFF;
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
 * Decompiled function f__AB00_0192_0019_263B()
 *
 * @name f__AB00_0192_0019_263B
 * @implements AB00:0192:0019:263B ()
 * @implements AB00:01AB:000C:E897
 *
 * Called From: AB00:0252:000D:8FCB
 */
void f__AB00_0192_0019_263B()
{
l__0192:
	emu_push(emu_ds);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_dx = emu_get_memory16(emu_cs, 0x00, 0x100);
	emu_cx = 0x200;
	emu_inb(&emu_al, emu_dx);
	emu_testb(&emu_al, 0x80);
	if ((emu_al & 0x80) != 0) goto l__01AB;
	if (--emu_cx != 0) { /* Unresolved jump */ emu_ip = 0x019D; emu_last_cs = 0xAB00; emu_last_ip = 0x01A2; emu_last_length = 0x0019; emu_last_crc = 0x263B; emu_call(); }
	emu_ax = 0xFFFF;
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_pop(&emu_ds);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
l__01AB:
	emu_dx = emu_get_memory16(emu_cs, 0x00, 0xFC);
	emu_inb(&emu_al, emu_dx);
	emu_ah = 0x0;
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_pop(&emu_ds);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__AB00_01B7_003B_56B4()
 *
 * @name f__AB00_01B7_003B_56B4
 * @implements AB00:01B7:003B:56B4 ()
 * @implements AB00:01C8:002A:54DE
 * @implements AB00:01DE:0014:5923
 *
 * Called From: AB00:03D2:002E:9463
 * Called From: AB00:03E0:000E:256B
 * Called From: AB00:0670:0011:6EA3
 * Called From: AB00:0683:0013:FC0C
 * Called From: AB00:0698:0015:89F7
 */
void f__AB00_01B7_003B_56B4()
{
l__01B7:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_ds);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_dx = emu_get_memory16(emu_cs, 0x00, 0xFE);
	emu_cx = 0x0;
	emu_si = 0x14;
l__01C8:
	emu_inb(&emu_al, emu_dx);
	emu_testb(&emu_al, 0x80);
	if (--emu_cx != 0 && !emu_flags.zf) goto l__01C8;
	emu_decw(&emu_si);
	if (emu_si != 0) goto l__01C8;
	emu_orw(&emu_cx, emu_si);
	if (emu_cx == 0) { /* Unresolved jump */ emu_ip = 0x01F2; emu_last_cs = 0xAB00; emu_last_ip = 0x01D2; emu_last_length = 0x002A; emu_last_crc = 0x54DE; emu_call(); return; }
	emu_al = emu_get_memory8(emu_ss, emu_bp,  0x6);
	emu_outb(emu_dx, emu_al);
	emu_cx = 0x0;
	emu_si = 0x14;
l__01DE:
	emu_inb(&emu_al, emu_dx);
	emu_testb(&emu_al, 0x80);
	if (--emu_cx != 0 && !emu_flags.zf) goto l__01DE;
	emu_decw(&emu_si);
	if (emu_si != 0) goto l__01DE;
	emu_orw(&emu_cx, emu_si);
	if (emu_cx == 0) { /* Unresolved jump */ emu_ip = 0x01F2; emu_last_cs = 0xAB00; emu_last_ip = 0x01E8; emu_last_length = 0x0014; emu_last_crc = 0x5923; emu_call(); return; }
	emu_ax = 0x1;
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
 * Decompiled function f__AB00_023A_001B_A31C()
 *
 * @name f__AB00_023A_001B_A31C
 * @implements AB00:023A:001B:A31C ()
 * @implements AB00:0248:000D:8FCB
 * @implements AB00:0255:000F:8760
 * @implements AB00:0260:0004:5E42
 *
 * Called From: AB00:0CC3:0007:9688
 */
void f__AB00_023A_001B_A31C()
{
l__023A:
	emu_push(emu_ds);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_dx = emu_get_memory16(emu_cs, 0x00, 0xFA);
	emu_al = 0x1;
	emu_outb(emu_dx, emu_al);
	emu_cx = 0x14;
l__0248:
	emu_inb(&emu_al, emu_dx);
	if (--emu_cx != 0) goto l__0248;
	emu_al = 0x0;
	emu_outb(emu_dx, emu_al);
	emu_si = 0x10;
	emu_push(emu_cs);
	emu_push(0x0255); f__AB00_0192_0019_263B();
l__0255:
	emu_cmpw(&emu_ax, 0xAA);
	if (emu_ax != 0xAA) {
		emu_decw(&emu_si);
		if (emu_si != 0) { /* Unresolved jump */ emu_ip = 0x0251; emu_last_cs = 0xAB00; emu_last_ip = 0x025B; emu_last_length = 0x000F; emu_last_crc = 0x8760; emu_call(); return; }
		emu_ax = 0x0;
	}
l__0260:
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_pop(&emu_ds);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__AB00_0264_0047_2B67()
 *
 * @name f__AB00_0264_0047_2B67
 * @implements AB00:0264:0047:2B67 ()
 *
 * Called From: AB00:06D9:003A:A0A5
 */
void f__AB00_0264_0047_2B67()
{
l__0264:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_ds);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0xC);
	emu_dx = 0x0;
	emu_shlw(&emu_ax, 0x1);
	emu_rclw(&emu_dx, 0x1);
	emu_shlw(&emu_ax, 0x1);
	emu_rclw(&emu_dx, 0x1);
	emu_shlw(&emu_ax, 0x1);
	emu_rclw(&emu_dx, 0x1);
	emu_shlw(&emu_ax, 0x1);
	emu_rclw(&emu_dx, 0x1);
	emu_addw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_adcw(&emu_dx, 0x0);
	emu_bx = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_cx = 0x0;
	emu_shlw(&emu_bx, 0x1);
	emu_rclw(&emu_cx, 0x1);
	emu_shlw(&emu_bx, 0x1);
	emu_rclw(&emu_cx, 0x1);
	emu_shlw(&emu_bx, 0x1);
	emu_rclw(&emu_cx, 0x1);
	emu_shlw(&emu_bx, 0x1);
	emu_rclw(&emu_cx, 0x1);
	emu_addw(&emu_bx, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_adcw(&emu_cx, 0x0);
	emu_subw(&emu_ax, emu_bx);
	emu_sbbw(&emu_dx, emu_cx);
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
 * Decompiled function f__AB00_03A7_002E_9463()
 *
 * @name f__AB00_03A7_002E_9463
 * @implements AB00:03A7:002E:9463 ()
 * @implements AB00:03D5:000E:256B
 * @implements AB00:03E3:000D:C5F9
 * @implements AB00:03F0:0007:F178
 *
 * Called From: AB00:0D0A:0040:6228
 */
void f__AB00_03A7_002E_9463()
{
l__03A7:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x2);
	emu_push(emu_ds);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_pushf();
	emu_cli();
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_ah = 0x0;
	emu_bx = 0x100;
	emu_subw(&emu_bx, emu_ax);
	emu_dx = 0xF;
	emu_ax = 0x4240;
	emu_divw(&emu_ax, emu_bx);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ax;
	emu_push(emu_ax);
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_get_memory16(emu_ss, emu_bp,  0x2) = 0x40;
	emu_pop(&emu_bp);
	emu_push(emu_cs);
	emu_push(0x03D5); f__AB00_01B7_003B_56B4();
l__03D5:
	emu_addw(&emu_sp, 0x2);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax == 0) { /* Unresolved jump */ emu_ip = 0x03E9; emu_last_cs = 0xAB00; emu_last_ip = 0x03DA; emu_last_length = 0x000E; emu_last_crc = 0x256B; emu_call(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x03E3); f__AB00_01B7_003B_56B4();
l__03E3:
	emu_addw(&emu_sp, 0x2);
	emu_ax = 0x1;
	emu_orb(&emu_bh, 0x0);
	emu_push(emu_cs);
	emu_push(0x03F0); f__AB00_03EA_0001_6780();
l__03F0:
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
 * Decompiled function f__AB00_03EA_0001_6780()
 *
 * @name f__AB00_03EA_0001_6780
 * @implements AB00:03EA:0001:6780 ()
 *
 * Called From: AB00:03ED:000D:C5F9
 */
void f__AB00_03EA_0001_6780()
{
l__03EA:

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	emu_popf();
	return;
}

/**
 * Decompiled function f__AB00_0402_006B_A66C()
 *
 * @name f__AB00_0402_006B_A66C
 * @implements AB00:0402:006B:A66C ()
 * @implements AB00:041F:004E:9304
 * @implements AB00:046D:0005:C48A
 *
 * Called From: AB00:0D16:000C:1AC4
 */
void f__AB00_0402_006B_A66C()
{
l__0402:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_ds);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_pushf();
	emu_cli();
	emu_cmpw(&emu_get_memory16(emu_cs, 0x00, 0x124), 0x0);
	if (emu_get_memory16(emu_cs, 0x00, 0x124) != 0x0) { /* Unresolved jump */ emu_ip = 0x0466; emu_last_cs = 0xAB00; emu_last_ip = 0x0410; emu_last_length = 0x006B; emu_last_crc = 0xA66C; emu_call(); return; }
	emu_bx = emu_get_memory16(emu_cs, 0x00, 0x102);
	emu_cmpw(&emu_bx, 0x8);
	if (emu_bx >= 0x8) {
		emu_addw(&emu_bx, 0x60);
	}
l__041F:
	emu_addw(&emu_bx, 0x8);
	emu_shlw(&emu_bx, 0x1);
	emu_shlw(&emu_bx, 0x1);
	emu_ax = 0x0;
	emu_ds = emu_ax;
	emu_lfp(&emu_es, &emu_di, &emu_get_memory16(emu_ds, emu_bx, 0x0));
	emu_get_memory16(emu_cs, 0x00, 0x110) = emu_es;
	emu_get_memory16(emu_cs, 0x00, 0x10E) = emu_di;
	emu_lfp(&emu_es, &emu_di, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_get_memory16(emu_ds, emu_bx, 0x0) = emu_di;
	emu_get_memory16(emu_ds, emu_bx, 0x2) = emu_es;
	emu_cx = emu_get_memory16(emu_cs, 0x00, 0x102);
	emu_bx = 0x1;
	emu_shlw(&emu_bx, emu_cl);
	emu_notw(&emu_bx, emu_bx);
	emu_inb(&emu_al, 0xA1);
	emu_get_memory8(emu_cs, 0x00, 0x159) = emu_al;
	emu_andb(&emu_al, emu_bh);
	emu_outb(0xA1, emu_al);
	emu_inb(&emu_al, 0x21);
	emu_get_memory8(emu_cs, 0x00, 0x158) = emu_al;
	emu_andb(&emu_al, emu_bl);
	emu_outb(0x21, emu_al);
	emu_get_memory16(emu_cs, 0x00, 0x124) = 0x1;
	emu_orb(&emu_bh, 0x0);
	emu_push(emu_cs);
	emu_push(0x046D); f__AB00_0467_0001_6780();
l__046D:
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
 * Decompiled function f__AB00_0467_0001_6780()
 *
 * @name f__AB00_0467_0001_6780
 * @implements AB00:0467:0001:6780 ()
 *
 * Called From: AB00:046A:004E:9304
 */
void f__AB00_0467_0001_6780()
{
l__0467:

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	emu_popf();
	return;
}

/**
 * Decompiled function f__AB00_0472_0062_026A()
 *
 * @name f__AB00_0472_0062_026A
 * @implements AB00:0472:0062:026A ()
 * @implements AB00:04AC:0028:0015
 * @implements AB00:04D4:0004:5E42
 *
 * Called From: AB00:0D6E:0015:A2A3
 */
void f__AB00_0472_0062_026A()
{
l__0472:
	emu_push(emu_ds);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_pushf();
	emu_cli();
	emu_cmpw(&emu_get_memory16(emu_cs, 0x00, 0x124), 0x1);
	if (emu_get_memory16(emu_cs, 0x00, 0x124) != 0x1) { /* Unresolved jump */ emu_ip = 0x04CD; emu_last_cs = 0xAB00; emu_last_ip = 0x047D; emu_last_length = 0x0062; emu_last_crc = 0x026A; emu_call(); return; }
	emu_cx = emu_get_memory16(emu_cs, 0x00, 0x102);
	emu_bx = 0x1;
	emu_shlw(&emu_bx, emu_cl);
	emu_inb(&emu_al, 0xA1);
	emu_orb(&emu_al, emu_bh);
	emu_andb(&emu_al, emu_get_memory8(emu_cs, 0x00, 0x159));
	emu_outb(0xA1, emu_al);
	emu_inb(&emu_al, 0x21);
	emu_orb(&emu_al, emu_bl);
	emu_andb(&emu_al, emu_get_memory8(emu_cs, 0x00, 0x158));
	emu_outb(0x21, emu_al);
	emu_bx = emu_get_memory16(emu_cs, 0x00, 0x102);
	emu_cmpw(&emu_bx, 0x8);
	if (emu_bx >= 0x8) {
		emu_addw(&emu_bx, 0x60);
	}
l__04AC:
	emu_addw(&emu_bx, 0x8);
	emu_shlw(&emu_bx, 0x1);
	emu_shlw(&emu_bx, 0x1);
	emu_ax = 0x0;
	emu_ds = emu_ax;
	emu_ax = emu_get_memory16(emu_cs, 0x00, 0x10E);
	emu_dx = emu_get_memory16(emu_cs, 0x00, 0x110);
	emu_get_memory16(emu_ds, emu_bx, 0x0) = emu_ax;
	emu_get_memory16(emu_ds, emu_bx, 0x2) = emu_dx;
	emu_get_memory16(emu_cs, 0x00, 0x124) = 0x0;
	emu_orb(&emu_bh, 0x0);
	emu_push(emu_cs);
	emu_push(0x04D4); f__AB00_04CE_0001_6780();
l__04D4:
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_pop(&emu_ds);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__AB00_04CE_0001_6780()
 *
 * @name f__AB00_04CE_0001_6780
 * @implements AB00:04CE:0001:6780 ()
 *
 * Called From: AB00:04D1:0028:0015
 */
void f__AB00_04CE_0001_6780()
{
l__04CE:

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	emu_popf();
	return;
}

/**
 * Decompiled function f__AB00_050B_005F_C2DC()
 *
 * @name f__AB00_050B_005F_C2DC
 * @implements AB00:050B:005F:C2DC ()
 * @implements AB00:056A:0005:C48A
 *
 * Called From: AB00:072A:0051:6DFE
 */
void f__AB00_050B_005F_C2DC()
{
l__050B:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_ds);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_pushf();
	emu_cli();
	emu_ax = emu_get_memory16(emu_cs, 0x00, 0x104);
	emu_orw(&emu_ax, 0x4);
	emu_outb(0xA, emu_al);
	emu_bx = emu_get_memory16(emu_cs, 0x00, 0x104);
	emu_dx = 0x80;
	emu_addb(&emu_dl, emu_get_memory8(emu_cs, emu_bx, 0xF2));
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_outb(emu_dx, emu_al);
	emu_al = 0x0;
	emu_outb(0xC, emu_al);
	emu_dx = emu_get_memory16(emu_cs, 0x00, 0x104);
	emu_shlw(&emu_dx, 0x1);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_outb(emu_dx, emu_al);
	emu_al = emu_ah;
	emu_outb(emu_dx, emu_al);
	emu_dx = emu_get_memory16(emu_cs, 0x00, 0x104);
	emu_shlw(&emu_dx, 0x1);
	emu_addw(&emu_dx, 0x1);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0xA);
	emu_outb(emu_dx, emu_al);
	emu_al = emu_ah;
	emu_outb(emu_dx, emu_al);
	emu_ax = 0x48;
	emu_orw(&emu_ax, emu_get_memory16(emu_cs, 0x00, 0x104));
	emu_outb(0xB, emu_al);
	emu_ax = emu_get_memory16(emu_cs, 0x00, 0x104);
	emu_orw(&emu_ax, 0x0);
	emu_outb(0xA, emu_al);
	emu_orb(&emu_bh, 0x0);
	emu_push(emu_cs);
	emu_push(0x056A); f__AB00_0564_0001_6780();
l__056A:
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
 * Decompiled function f__AB00_0564_0001_6780()
 *
 * @name f__AB00_0564_0001_6780
 * @implements AB00:0564:0001:6780 ()
 *
 * Called From: AB00:0567:005F:C2DC
 */
void f__AB00_0564_0001_6780()
{
l__0564:

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	emu_popf();
	return;
}

/**
 * Decompiled function f__AB00_0662_0011_6EA3()
 *
 * @name f__AB00_0662_0011_6EA3
 * @implements AB00:0662:0011:6EA3 ()
 * @implements AB00:0673:0013:FC0C
 * @implements AB00:0686:0015:89F7
 * @implements AB00:069B:0007:4F57
 *
 * Called From: AB00:0731:0007:13BE
 */
void f__AB00_0662_0011_6EA3()
{
l__0662:
	emu_push(emu_ds);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_bx = emu_get_memory16(emu_cs, 0x00, 0x112);
	emu_push(emu_get_memory16(emu_cs, emu_bx, 0xEA));
	emu_push(emu_cs);
	emu_push(0x0673); f__AB00_01B7_003B_56B4();
l__0673:
	emu_addw(&emu_sp, 0x2);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax == 0) { /* Unresolved jump */ emu_ip = 0x069E; emu_last_cs = 0xAB00; emu_last_ip = 0x0678; emu_last_length = 0x0013; emu_last_crc = 0xFC0C; emu_call(); return; }
	emu_ax = emu_get_memory16(emu_cs, 0x00, 0x122);
	emu_andw(&emu_ax, 0xFF);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x0686); f__AB00_01B7_003B_56B4();
l__0686:
	emu_addw(&emu_sp, 0x2);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax == 0) { /* Unresolved jump */ emu_ip = 0x069E; emu_last_cs = 0xAB00; emu_last_ip = 0x068B; emu_last_length = 0x0015; emu_last_crc = 0x89F7; emu_call(); return; }
	emu_ax = emu_get_memory16(emu_cs, 0x00, 0x122);
	emu_andw(&emu_ax, 0xFF00);
	emu_xchgb(&emu_ah, &emu_al);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x069B); f__AB00_01B7_003B_56B4();
l__069B:
	emu_addw(&emu_sp, 0x2);
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_pop(&emu_ds);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__AB00_06A2_003A_A0A5()
 *
 * @name f__AB00_06A2_003A_A0A5
 * @implements AB00:06A2:003A:A0A5 ()
 * @implements AB00:06DC:0051:6DFE
 * @implements AB00:072D:0007:13BE
 * @implements AB00:0734:00B7:3EC4
 *
 * Called From: AB00:080E:0026:ECEA
 */
void f__AB00_06A2_003A_A0A5()
{
l__06A2:
	emu_push(emu_ds);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_lfp(&emu_ds, &emu_si, &emu_get_memory16(emu_cs, 0x00, 0x11A));
	emu_push(emu_ax);
	emu_push(emu_bx);
	emu_ax = emu_ds;
	emu_bx = emu_si;
	emu_shrw(&emu_bx, 0x1);
	emu_shrw(&emu_bx, 0x1);
	emu_shrw(&emu_bx, 0x1);
	emu_shrw(&emu_bx, 0x1);
	emu_addw(&emu_ax, emu_bx);
	emu_ds = emu_ax;
	emu_andw(&emu_si, 0xF);
	emu_pop(&emu_bx);
	emu_pop(&emu_ax);
	emu_di = emu_ds;
	emu_andw(&emu_di, 0xF000);
	emu_addw(&emu_di, 0x1000);
	emu_push(emu_di);
	emu_push(emu_ax);
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_get_memory16(emu_ss, emu_bp,  0x2) = 0x0;
	emu_pop(&emu_bp);
	emu_push(emu_ds);
	emu_push(emu_si);
	emu_push(emu_cs);
	emu_push(0x06DC); f__AB00_0264_0047_2B67();
l__06DC:
	emu_addw(&emu_sp, 0x8);
	emu_subw(&emu_ax, 0x1);
	emu_sbbw(&emu_dx, 0x0);
	emu_get_memory16(emu_cs, 0x00, 0x122) = emu_ax;
	emu_ax = emu_get_memory16(emu_cs, 0x00, 0x11E);
	emu_dx = emu_get_memory16(emu_cs, 0x00, 0x120);
	emu_subw(&emu_ax, 0x1);
	emu_sbbw(&emu_dx, 0x0);
	emu_cmpw(&emu_dx, 0x0);
	if (emu_dx > 0x0) { /* Unresolved jump */ emu_ip = 0x0708; emu_last_cs = 0xAB00; emu_last_ip = 0x06FB; emu_last_length = 0x0051; emu_last_crc = 0x6DFE; emu_call(); return; }
	emu_cmpw(&emu_ax, emu_get_memory16(emu_cs, 0x00, 0x122));
	if (emu_ax > emu_get_memory16(emu_cs, 0x00, 0x122)) { /* Unresolved jump */ emu_ip = 0x0708; emu_last_cs = 0xAB00; emu_last_ip = 0x0702; emu_last_length = 0x0051; emu_last_crc = 0x6DFE; emu_call(); return; }
	emu_get_memory16(emu_cs, 0x00, 0x122) = emu_ax;
	emu_ax = emu_ds;
	emu_dx = 0x0;
	emu_shlw(&emu_ax, 0x1);
	emu_rclw(&emu_dx, 0x1);
	emu_shlw(&emu_ax, 0x1);
	emu_rclw(&emu_dx, 0x1);
	emu_shlw(&emu_ax, 0x1);
	emu_rclw(&emu_dx, 0x1);
	emu_shlw(&emu_ax, 0x1);
	emu_rclw(&emu_dx, 0x1);
	emu_addw(&emu_ax, emu_si);
	emu_adcw(&emu_dx, 0x0);
	emu_push(emu_get_memory16(emu_cs, 0x00, 0x122));
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x072D); f__AB00_050B_005F_C2DC();
l__072D:
	emu_addw(&emu_sp, 0x6);
	emu_push(emu_cs);
	emu_push(0x0734); f__AB00_0662_0011_6EA3();
l__0734:
	emu_lfp(&emu_ds, &emu_si, &emu_get_memory16(emu_cs, 0x00, 0x11A));
	emu_push(emu_bx);
	emu_push(emu_cx);
	emu_bx = emu_ds;
	emu_xorw(&emu_cx, emu_cx);
	emu_shlw(&emu_bx, 0x1);
	emu_rclw(&emu_cx, 0x1);
	emu_shlw(&emu_bx, 0x1);
	emu_rclw(&emu_cx, 0x1);
	emu_shlw(&emu_bx, 0x1);
	emu_rclw(&emu_cx, 0x1);
	emu_shlw(&emu_bx, 0x1);
	emu_rclw(&emu_cx, 0x1);
	emu_addw(&emu_bx, emu_si);
	emu_adcw(&emu_cx, 0x0);
	emu_addw(&emu_bx, emu_get_memory16(emu_cs, 0x00, 0x122));
	emu_adcw(&emu_cx, 0x0);
	emu_si = emu_bx;
	emu_andw(&emu_si, 0xF);
	emu_shrw(&emu_cx, 0x1);
	emu_rcrw(&emu_bx, 0x1);
	emu_shrw(&emu_cx, 0x1);
	emu_rcrw(&emu_bx, 0x1);
	emu_shrw(&emu_cx, 0x1);
	emu_rcrw(&emu_bx, 0x1);
	emu_shrw(&emu_cx, 0x1);
	emu_rcrw(&emu_bx, 0x1);
	emu_ds = emu_bx;
	emu_pop(&emu_cx);
	emu_pop(&emu_bx);
	emu_push(emu_bx);
	emu_push(emu_cx);
	emu_bx = emu_ds;
	emu_xorw(&emu_cx, emu_cx);
	emu_shlw(&emu_bx, 0x1);
	emu_rclw(&emu_cx, 0x1);
	emu_shlw(&emu_bx, 0x1);
	emu_rclw(&emu_cx, 0x1);
	emu_shlw(&emu_bx, 0x1);
	emu_rclw(&emu_cx, 0x1);
	emu_shlw(&emu_bx, 0x1);
	emu_rclw(&emu_cx, 0x1);
	emu_addw(&emu_bx, emu_si);
	emu_adcw(&emu_cx, 0x0);
	emu_addw(&emu_bx, 0x1);
	emu_adcw(&emu_cx, 0x0);
	emu_si = emu_bx;
	emu_andw(&emu_si, 0xF);
	emu_shrw(&emu_cx, 0x1);
	emu_rcrw(&emu_bx, 0x1);
	emu_shrw(&emu_cx, 0x1);
	emu_rcrw(&emu_bx, 0x1);
	emu_shrw(&emu_cx, 0x1);
	emu_rcrw(&emu_bx, 0x1);
	emu_shrw(&emu_cx, 0x1);
	emu_rcrw(&emu_bx, 0x1);
	emu_ds = emu_bx;
	emu_pop(&emu_cx);
	emu_pop(&emu_bx);
	emu_get_memory16(emu_cs, 0x00, 0x11A) = emu_si;
	emu_get_memory16(emu_cs, 0x00, 0x11C) = emu_ds;
	emu_ax = emu_get_memory16(emu_cs, 0x00, 0x11E);
	emu_dx = emu_get_memory16(emu_cs, 0x00, 0x120);
	emu_subw(&emu_ax, emu_get_memory16(emu_cs, 0x00, 0x122));
	emu_sbbw(&emu_dx, 0x0);
	emu_subw(&emu_ax, 0x1);
	emu_sbbw(&emu_dx, 0x0);
	emu_get_memory16(emu_cs, 0x00, 0x120) = emu_dx;
	emu_get_memory16(emu_cs, 0x00, 0x11E) = emu_ax;
	emu_cmpw(&emu_get_memory16(emu_cs, 0x00, 0x112), 0x4);
	if (emu_get_memory16(emu_cs, 0x00, 0x112) >= 0x4) { /* Unresolved jump */ emu_ip = 0x07E7; emu_last_cs = 0xAB00; emu_last_ip = 0x07DF; emu_last_length = 0x00B7; emu_last_crc = 0x3EC4; emu_call(); return; }
	emu_addw(&emu_get_memory16(emu_cs, 0x00, 0x112), 0x4);
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_pop(&emu_ds);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__AB00_07EB_0026_ECEA()
 *
 * @name f__AB00_07EB_0026_ECEA
 * @implements AB00:07EB:0026:ECEA ()
 * @implements AB00:0811:0005:C48A
 *
 * Called From: AB00:0D45:002F:CE47
 */
void f__AB00_07EB_0026_ECEA()
{
l__07EB:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_ds);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_lfp(&emu_ds, &emu_si, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0xA);
	emu_dx = emu_get_memory16(emu_ss, emu_bp,  0xC);
	emu_get_memory16(emu_cs, 0x00, 0x11A) = emu_si;
	emu_get_memory16(emu_cs, 0x00, 0x11C) = emu_ds;
	emu_get_memory16(emu_cs, 0x00, 0x11E) = emu_ax;
	emu_get_memory16(emu_cs, 0x00, 0x120) = emu_dx;
	emu_push(emu_cs);
	emu_push(0x0811); f__AB00_06A2_003A_A0A5();
l__0811:
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
 * Decompiled function f__AB00_0B4B_0028_C5A7()
 *
 * @name f__AB00_0B4B_0028_C5A7
 * @implements AB00:0B4B:0028:C5A7 ()
 * @implements AB00:0B62:0011:DDDD
 *
 * Called From: AB00:0CBC:0011:D789
 * Called From: AB00:0D59:0014:2475
 * Called From: AB00:0D59:000E:535D
 */
void f__AB00_0B4B_0028_C5A7()
{
l__0B4B:
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
	if (emu_cx == 0) { /* Unresolved jump */ emu_ip = 0x0B6E; emu_last_cs = 0xAB00; emu_last_ip = 0x0B60; emu_last_length = 0x0028; emu_last_crc = 0xC5A7; emu_call(); return; }
l__0B62:
	emu_inb(&emu_al, emu_dx);
	emu_testb(&emu_al, 0x8);
	if ((emu_al & 0x8) == 0) goto l__0B62;
	emu_inb(&emu_al, emu_dx);
	emu_testb(&emu_al, 0x8);
	if ((emu_al & 0x8) != 0) { /* Unresolved jump */ emu_ip = 0x0B67; emu_last_cs = 0xAB00; emu_last_ip = 0x0B6A; emu_last_length = 0x0011; emu_last_crc = 0xDDDD; emu_call(); return; }
	if (--emu_cx != 0) goto l__0B62;
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
 * Decompiled function f__AB00_0B73_0019_AD43()
 *
 * @name f__AB00_0B73_0019_AD43
 * @implements AB00:0B73:0019:AD43 ()
 * @implements AB00:0B8C:0005:C48A
 *
 * Called From: 2756:050D:0003:6FD4
 */
void f__AB00_0B73_0019_AD43()
{
l__0B73:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_ds);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_pushf();
	emu_cli();
	emu_dx = emu_cs;
	emu_get_memory16(emu_cs, 0x00, 0x7D) = emu_dx;
	emu_ax = 0x73;
	emu_orb(&emu_bh, 0x0);
	emu_push(emu_cs);
	emu_push(0x0B8C); f__AB00_0B86_0001_6780();
l__0B8C:
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
 * Decompiled function f__AB00_0B86_0001_6780()
 *
 * @name f__AB00_0B86_0001_6780
 * @implements AB00:0B86:0001:6780 ()
 *
 * Called From: AB00:0B89:0019:AD43
 */
void f__AB00_0B86_0001_6780()
{
l__0B86:

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	emu_popf();
	return;
}

/**
 * Decompiled function f__AB00_0C3F_006F_09A2()
 *
 * @name f__AB00_0C3F_006F_09A2
 * @implements AB00:0C3F:006F:09A2 ()
 * @implements AB00:0CAE:0011:D789
 * @implements AB00:0CBF:0007:9688
 * @implements AB00:0CC6:0007:6EB6
 * @implements AB00:0CCD:0040:6228
 * @implements AB00:0D0D:000C:1AC4
 * @implements AB00:0D19:002F:CE47
 * @implements AB00:0D48:0014:2475
 * @implements AB00:0D4E:000E:535D
 * @implements AB00:0D5C:0015:A2A3
 * @implements AB00:0D71:0007:3FBD
 * @implements AB00:0D78:0027:02B9
 * @implements AB00:0D9F:0005:C48A
 *
 * Called From: 2756:050D:0003:6FD4
 */
void f__AB00_0C3F_006F_09A2()
{
l__0C3F:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_ds);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_pushf();
	emu_cli();
	emu_push(emu_get_memory16(emu_cs, 0x00, 0xFA));
	emu_push(emu_get_memory16(emu_cs, 0x00, 0xFC));
	emu_push(emu_get_memory16(emu_cs, 0x00, 0xFE));
	emu_push(emu_get_memory16(emu_cs, 0x00, 0x100));
	emu_push(emu_get_memory16(emu_cs, 0x00, 0x102));
	emu_push(emu_get_memory16(emu_cs, 0x00, 0x104));
	emu_get_memory16(emu_cs, 0x00, 0x15C) = 0xFFFF;
	emu_get_memory16(emu_cs, 0x00, 0x124) = 0x0;
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_addw(&emu_ax, 0x6);
	emu_get_memory16(emu_cs, 0x00, 0xFA) = emu_ax;
	emu_addw(&emu_ax, 0x4);
	emu_get_memory16(emu_cs, 0x00, 0xFC) = emu_ax;
	emu_addw(&emu_ax, 0x2);
	emu_get_memory16(emu_cs, 0x00, 0xFE) = emu_ax;
	emu_addw(&emu_ax, 0x2);
	emu_get_memory16(emu_cs, 0x00, 0x100) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0xA);
	emu_get_memory16(emu_cs, 0x00, 0x102) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0xC);
	emu_get_memory16(emu_cs, 0x00, 0x104) = emu_ax;
	emu_push(emu_ax);
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_get_memory16(emu_ss, emu_bp,  0x2) = 0xD3;
	emu_pop(&emu_bp);
	emu_push(emu_cs);
	emu_push(0x0CAE); f__AB00_0169_001D_2693();
l__0CAE:
	emu_addw(&emu_sp, 0x2);
	emu_push(emu_ax);
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_get_memory16(emu_ss, emu_bp,  0x2) = 0x5;
	emu_pop(&emu_bp);
	emu_push(emu_cs);
	emu_push(0x0CBF); f__AB00_0B4B_0028_C5A7();
l__0CBF:
	emu_addw(&emu_sp, 0x2);
	emu_push(emu_cs);
	emu_push(0x0CC6); f__AB00_023A_001B_A31C();
l__0CC6:
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax != 0) goto l__0CCD;
	/* Unresolved jump */ emu_ip = 0x0D7A; emu_last_cs = 0xAB00; emu_last_ip = 0x0CCA; emu_last_length = 0x0007; emu_last_crc = 0x6EB6; emu_call();
l__0CCD:
	emu_pushf();
	emu_sti();
	emu_get_memory16(emu_cs, 0x00, 0x12C) = 0x0;
	emu_get_memory16(emu_cs, 0x00, 0x112) = 0x0;
	emu_get_memory16(emu_cs, 0x00, 0x118) = 0x0;
	emu_get_memory16(emu_cs, 0x00, 0x114) = 0x0;
	emu_get_memory16(emu_cs, 0x00, 0x162) = 0x0;
	emu_si = 0x1;
	emu_push(emu_ax);
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_get_memory16(emu_ss, emu_bp,  0x2) = 0x0;
	emu_pop(&emu_bp);
	emu_push(emu_ax);
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_get_memory16(emu_ss, emu_bp,  0x2) = 0xA6;
	emu_pop(&emu_bp);
	emu_push(emu_cs);
	emu_push(0x0D0D); f__AB00_03A7_002E_9463();
l__0D0D:
	emu_addw(&emu_sp, 0x4);
	emu_ax = 0x56F;
	emu_push(emu_cs);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x0D19); f__AB00_0402_006B_A66C();
l__0D19:
	emu_addw(&emu_sp, 0x4);
	emu_push(emu_ax);
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_get_memory16(emu_ss, emu_bp,  0x2) = 0x0;
	emu_pop(&emu_bp);
	emu_push(emu_ax);
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_get_memory16(emu_ss, emu_bp,  0x2) = 0x4;
	emu_pop(&emu_bp);
	emu_push(emu_ax);
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_get_memory16(emu_ss, emu_bp,  0x2) = 0x0;
	emu_pop(&emu_bp);
	emu_push(emu_ax);
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_get_memory16(emu_ss, emu_bp,  0x2) = 0x0;
	emu_pop(&emu_bp);
	emu_push(emu_cs);
	emu_push(0x0D48); f__AB00_07EB_0026_ECEA();
l__0D48:
	emu_addw(&emu_sp, 0x8);
	emu_di = 0x22;
l__0D4E:
	emu_push(emu_ax);
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_get_memory16(emu_ss, emu_bp,  0x2) = 0x1;
	emu_pop(&emu_bp);
	emu_push(emu_cs);
	emu_push(0x0D5C); f__AB00_0B4B_0028_C5A7();
l__0D5C:
	emu_addw(&emu_sp, 0x2);
	emu_cmpw(&emu_get_memory16(emu_cs, 0x00, 0x12C), 0x1);
	if (emu_get_memory16(emu_cs, 0x00, 0x12C) == 0x1) { /* Unresolved jump */ emu_ip = 0x0D6D; emu_last_cs = 0xAB00; emu_last_ip = 0x0D65; emu_last_length = 0x0015; emu_last_crc = 0xA2A3; emu_call(); return; }
	emu_decw(&emu_di);
	if (emu_di != 0) goto l__0D4E;
	emu_si = 0x0;
	emu_push(emu_cs);
	emu_push(0x0D71); f__AB00_0472_0062_026A();
l__0D71:
	emu_orb(&emu_bh, 0x0);
	emu_push(emu_cs);
	emu_push(0x0D78); f__AB00_0D72_0001_6780();
l__0D78:
	emu_ax = emu_si;
	emu_pop(&emu_get_memory16(emu_cs, 0x00, 0x104));
	emu_pop(&emu_get_memory16(emu_cs, 0x00, 0x102));
	emu_pop(&emu_get_memory16(emu_cs, 0x00, 0x100));
	emu_pop(&emu_get_memory16(emu_cs, 0x00, 0xFE));
	emu_pop(&emu_get_memory16(emu_cs, 0x00, 0xFC));
	emu_pop(&emu_get_memory16(emu_cs, 0x00, 0xFA));
	emu_orb(&emu_bh, 0x0);
	emu_push(emu_cs);
	emu_push(0x0D9F); f__AB00_0D99_0001_6780();
l__0D9F:
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
 * Decompiled function f__AB00_0D72_0001_6780()
 *
 * @name f__AB00_0D72_0001_6780
 * @implements AB00:0D72:0001:6780 ()
 *
 * Called From: AB00:0D75:0007:3FBD
 */
void f__AB00_0D72_0001_6780()
{
l__0D72:

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	emu_popf();
	return;
}

/**
 * Decompiled function f__AB00_0D99_0001_6780()
 *
 * @name f__AB00_0D99_0001_6780
 * @implements AB00:0D99:0001:6780 ()
 *
 * Called From: AB00:0D9C:0027:02B9
 */
void f__AB00_0D99_0001_6780()
{
l__0D99:

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	emu_popf();
	return;
}

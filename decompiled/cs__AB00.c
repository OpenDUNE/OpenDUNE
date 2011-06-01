/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function emu_DSP_Write()
 *
 * @name emu_DSP_Write
 * @implements AB00:0169:001D:2693 ()
 * @implements AB00:0186:000C:4828
 *
 * Called From: AB00:0CAB:006F:09A2
 */
void emu_DSP_Write()
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
 * Decompiled function emu_DSP_Read()
 *
 * @name emu_DSP_Read
 * @implements AB00:0192:0019:263B ()
 * @implements AB00:01AB:000C:E897
 *
 * Called From: AB00:0252:000D:8FCB
 */
void emu_DSP_Read()
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
 * Decompiled function emu_DSP_WriteAndWait()
 *
 * @name emu_DSP_WriteAndWait
 * @implements AB00:01B7:003B:56B4 ()
 * @implements AB00:01C8:002A:54DE
 * @implements AB00:01DE:0014:5923
 *
 * Called From: AB00:031B:0020:41D6
 * Called From: AB00:0342:0020:80E9
 * Called From: AB00:0375:0014:B343
 * Called From: AB00:03D2:002E:9463
 * Called From: AB00:03E0:000E:256B
 * Called From: AB00:0670:0011:6EA3
 * Called From: AB00:0683:0013:FC0C
 * Called From: AB00:0698:0015:89F7
 * Called From: AB00:0943:000E:D0F8
 * Called From: AB00:0954:0007:50C7
 * Called From: AB00:0965:0007:90C4
 */
void emu_DSP_WriteAndWait()
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
 * Decompiled function emu_DSP_Reset()
 *
 * @name emu_DSP_Reset
 * @implements AB00:023A:001B:A31C ()
 * @implements AB00:0248:000D:8FCB
 * @implements AB00:0255:000F:8760
 * @implements AB00:0260:0004:5E42
 *
 * Called From: AB00:0BBB:0004:861F
 * Called From: AB00:0CC3:0007:9688
 */
void emu_DSP_Reset()
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
	emu_push(0x0255); emu_DSP_Read();
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
 * Decompiled function f__AB00_02AB_000F_A43F()
 *
 * @name f__AB00_02AB_000F_A43F
 * @implements AB00:02AB:000F:A43F ()
 *
 * Called From: AB00:086F:0007:9A8B
 */
void f__AB00_02AB_000F_A43F()
{
l__02AB:
	emu_push(emu_ds);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_lfp(&emu_ds, &emu_si, &emu_get_memory16(emu_cs, 0x00, 0x10A));
	emu_lodsb(emu_ds);
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
 * Decompiled function f__AB00_02FE_0020_41D6()
 *
 * @name f__AB00_02FE_0020_41D6
 * @implements AB00:02FE:0020:41D6 ()
 * @implements AB00:031E:0007:4F57
 * @implements AB00:0321:0004:5E42
 *
 * Called From: AB00:03FB:0007:D805
 */
void f__AB00_02FE_0020_41D6()
{
l__02FE:
	emu_push(emu_ds);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_cmpw(&emu_get_memory16(emu_cs, 0x00, 0x15C), 0x1);
	if (emu_get_memory16(emu_cs, 0x00, 0x15C) == 0x1) goto l__0321;
	emu_get_memory16(emu_cs, 0x00, 0x15C) = 0x1;
	emu_push(emu_ax);
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_get_memory16(emu_ss, emu_bp,  0x2) = 0xD1;
	emu_pop(&emu_bp);
	emu_push(emu_cs);
	emu_push(0x031E); emu_DSP_WriteAndWait();
l__031E:
	emu_addw(&emu_sp, 0x2);
l__0321:
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_pop(&emu_ds);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__AB00_0325_0020_80E9()
 *
 * @name f__AB00_0325_0020_80E9
 * @implements AB00:0325:0020:80E9 ()
 * @implements AB00:0345:0007:4F57
 *
 * Called From: AB00:0BA2:0014:89BD
 */
void f__AB00_0325_0020_80E9()
{
l__0325:
	emu_push(emu_ds);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_cmpw(&emu_get_memory16(emu_cs, 0x00, 0x15C), 0x0);
	if (emu_get_memory16(emu_cs, 0x00, 0x15C) == 0x0) { /* Unresolved jump */ emu_ip = 0x0348; emu_last_cs = 0xAB00; emu_last_ip = 0x032E; emu_last_length = 0x0020; emu_last_crc = 0x80E9; emu_call(); return; }
	emu_get_memory16(emu_cs, 0x00, 0x15C) = 0x0;
	emu_push(emu_ax);
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_get_memory16(emu_ss, emu_bp,  0x2) = 0xD3;
	emu_pop(&emu_bp);
	emu_push(emu_cs);
	emu_push(0x0345); emu_DSP_WriteAndWait();
l__0345:
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
 * Decompiled function f__AB00_0364_0014_B343()
 *
 * @name f__AB00_0364_0014_B343
 * @implements AB00:0364:0014:B343 ()
 * @implements AB00:0378:001A:F88A
 * @implements AB00:0392:000C:4DDB
 * @implements AB00:039E:0004:FD34
 * @implements AB00:03A2:0005:C48A
 *
 * Called From: AB00:05B3:0019:1169
 * Called From: AB00:11BA:0005:4719
 */
void f__AB00_0364_0014_B343()
{
l__0364:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_ds);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_push(emu_ax);
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_get_memory16(emu_ss, emu_bp,  0x2) = 0xD0;
	emu_pop(&emu_bp);
	emu_push(emu_cs);
	emu_push(0x0378); emu_DSP_WriteAndWait();
l__0378:
	emu_addw(&emu_sp, 0x2);
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp,  0x6), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp,  0x6) == 0x0) goto l__03A2;
	emu_cmpw(&emu_get_memory16(emu_cs, 0x00, 0x124), 0x0);
	if (emu_get_memory16(emu_cs, 0x00, 0x124) != 0x0) goto l__03A2;
	emu_ax = 0x56F;
	emu_push(emu_cs);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x0392); emu_DSP_InstallInterrupt();
l__0392:
	emu_addw(&emu_sp, 0x4);
	emu_pushf();
	emu_sti();
	emu_orb(&emu_bh, 0x0);
	emu_push(emu_cs);
	emu_push(0x039E); f__AB00_0398_0001_6780();
l__039E:
	emu_push(emu_cs);
	emu_push(0x03A2); emu_DSP_UninstallInterrupt();
l__03A2:
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
 * Decompiled function f__AB00_0398_0001_6780()
 *
 * @name f__AB00_0398_0001_6780
 * @implements AB00:0398:0001:6780 ()
 *
 * Called From: AB00:039B:000C:4DDB
 */
void f__AB00_0398_0001_6780()
{
l__0398:

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	emu_popf();
	return;
}

/**
 * Decompiled function emu_DSP_SetTimeConst()
 *
 * @name emu_DSP_SetTimeConst
 * @implements AB00:03A7:002E:9463 ()
 * @implements AB00:03D5:000E:256B
 * @implements AB00:03E3:000D:C5F9
 * @implements AB00:03F0:0007:F178
 *
 * Called From: AB00:092B:0014:A4C0
 * Called From: AB00:0A41:0030:3F4D
 * Called From: AB00:0D0A:0040:6228
 */
void emu_DSP_SetTimeConst()
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
	emu_push(0x03D5); emu_DSP_WriteAndWait();
l__03D5:
	emu_addw(&emu_sp, 0x2);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax == 0) { /* Unresolved jump */ emu_ip = 0x03E9; emu_last_cs = 0xAB00; emu_last_ip = 0x03DA; emu_last_length = 0x000E; emu_last_crc = 0x256B; emu_call(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x03E3); emu_DSP_WriteAndWait();
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
 * Decompiled function f__AB00_03F7_0007_D805()
 *
 * @name f__AB00_03F7_0007_D805
 * @implements AB00:03F7:0007:D805 ()
 * @implements AB00:03FE:0004:5E42
 *
 * Called From: AB00:0C18:0013:3E08
 * Called From: AB00:0E34:001B:9801
 */
void f__AB00_03F7_0007_D805()
{
l__03F7:
	emu_push(emu_ds);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_push(emu_cs);
	emu_push(0x03FE); f__AB00_02FE_0020_41D6();
l__03FE:
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_pop(&emu_ds);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function emu_DSP_InstallInterrupt()
 *
 * @name emu_DSP_InstallInterrupt
 * @implements AB00:0402:006B:A66C ()
 * @implements AB00:041F:004E:9304
 * @implements AB00:046D:0005:C48A
 *
 * Called From: AB00:038F:001A:F88A
 * Called From: AB00:0917:0017:4784
 * Called From: AB00:0A51:0010:FF21
 * Called From: AB00:0D16:000C:1AC4
 */
void emu_DSP_InstallInterrupt()
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
 * Decompiled function emu_DSP_UninstallInterrupt()
 *
 * @name emu_DSP_UninstallInterrupt
 * @implements AB00:0472:0062:026A ()
 * @implements AB00:04AC:0028:0015
 * @implements AB00:04CD:0007:3FBD
 * @implements AB00:04D4:0004:5E42
 *
 * Called From: AB00:039F:0004:FD34
 * Called From: AB00:05CB:0004:8229
 * Called From: AB00:0D6E:0015:A2A3
 * Called From: AB00:0D6E:0004:C680
 * Called From: AB00:11B5:000B:B9EA
 * Called From: AB00:11B5:0029:4B06
 */
void emu_DSP_UninstallInterrupt()
{
l__0472:
	emu_push(emu_ds);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_pushf();
	emu_cli();
	emu_cmpw(&emu_get_memory16(emu_cs, 0x00, 0x124), 0x1);
	if (emu_get_memory16(emu_cs, 0x00, 0x124) != 0x1) goto l__04CD;
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
l__04CD:
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
 * Called From: AB00:04D1:0007:3FBD
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
 * Decompiled function f__AB00_04D8_002F_418B()
 *
 * @name f__AB00_04D8_002F_418B
 * @implements AB00:04D8:002F:418B ()
 * @implements AB00:0500:0007:3FBD
 * @implements AB00:0507:0004:5E42
 *
 * Called From: AB00:059A:000E:41A1
 */
void f__AB00_04D8_002F_418B()
{
l__04D8:
	emu_push(emu_ds);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_pushf();
	emu_cli();
	emu_cmpb(&emu_get_memory8(emu_cs, 0x00, 0x166), 0x0);
	emu_get_memory8(emu_cs, 0x00, 0x166) = 0x0;
	emu_ax = 0xFFFF;
	if (emu_flags.zf) {
		emu_dx = emu_get_memory16(emu_cs, 0x00, 0x104);
		emu_shlw(&emu_dx, 0x1);
		emu_addw(&emu_dx, 0x1);
		emu_inb(&emu_al, emu_dx);
		emu_bl = emu_al;
		emu_inb(&emu_al, emu_dx);
		emu_ah = emu_al;
		emu_al = emu_bl;
	}
l__0500:
	emu_orb(&emu_bh, 0x0);
	emu_push(emu_cs);
	emu_push(0x0507); f__AB00_0501_0001_6780();
l__0507:
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_pop(&emu_ds);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__AB00_0501_0001_6780()
 *
 * @name f__AB00_0501_0001_6780
 * @implements AB00:0501:0001:6780 ()
 *
 * Called From: AB00:0504:002F:418B
 * Called From: AB00:0504:0007:3FBD
 */
void f__AB00_0501_0001_6780()
{
l__0501:

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	emu_popf();
	return;
}

/**
 * Decompiled function emu_DSP_SetDMA()
 *
 * @name emu_DSP_SetDMA
 * @implements AB00:050B:005F:C2DC ()
 * @implements AB00:056A:0005:C48A
 *
 * Called From: AB00:072A:0051:6DFE
 */
void emu_DSP_SetDMA()
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
 * Decompiled function f__AB00_056F_0020_6328()
 *
 * @name f__AB00_056F_0020_6328
 * @implements AB00:056F:0020:6328 ()
 * @implements AB00:058A:0005:EBA4
 *
 * Called From: 0000:0000:0000:0000
 */
void f__AB00_056F_0020_6328()
{
l__056F:
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_dx = emu_get_memory16(emu_cs, 0x00, 0x100);
	emu_inb(&emu_al, emu_dx);
	emu_get_memory16(emu_cs, 0x00, 0x12C) = 0x1;
	emu_al = 0x20;
	emu_cmpw(&emu_get_memory16(emu_cs, 0x00, 0x102), 0x8);
	if (emu_get_memory16(emu_cs, 0x00, 0x102) >= 0x8) {
		emu_outb(0xA0, emu_al);
	}
l__058A:
	emu_outb(0x20, emu_al);
	emu_pop(&emu_ax);
	emu_pop(&emu_dx);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	emu_popf();
	return;
}

/**
 * Decompiled function f__AB00_058F_000E_41A1()
 *
 * @name f__AB00_058F_000E_41A1
 * @implements AB00:058F:000E:41A1 ()
 * @implements AB00:059D:0019:1169
 * @implements AB00:05B6:0012:4375
 * @implements AB00:05CA:0004:8229
 * @implements AB00:05CE:0004:FC11
 * @implements AB00:05D2:0004:BC25
 * @implements AB00:05D6:0018:FBC3
 * @implements AB00:05E2:000C:5437
 *
 * Called From: 0000:0000:0000:0000
 */
void f__AB00_058F_000E_41A1()
{
l__058F:
	emu_push(emu_ax);
	emu_push(emu_bx);
	emu_push(emu_cx);
	emu_push(emu_dx);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_push(emu_bp);
	emu_push(emu_ds);
	emu_push(emu_es);
	emu_cld();
	emu_push(emu_cs);
	emu_push(0x059D); f__AB00_04D8_002F_418B();
l__059D:
	emu_cmpw(&emu_ax, 0xFFFF);
	if (emu_ax != 0xFFFF) goto l__05D6;
	emu_dx = emu_get_memory16(emu_cs, 0x00, 0x100);
	emu_inb(&emu_al, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_get_memory16(emu_ss, emu_bp,  0x2) = 0x0;
	emu_pop(&emu_bp);
	emu_push(emu_cs);
	emu_push(0x05B6); f__AB00_0364_0014_B343();
l__05B6:
	emu_addw(&emu_sp, 0x2);
	emu_ax = emu_get_memory16(emu_cs, 0x00, 0x11E);
	emu_orw(&emu_ax, emu_get_memory16(emu_cs, 0x00, 0x120));
	if (emu_ax == 0) goto l__05CA;
	emu_push(emu_cs);
	emu_push(0x05C8); f__AB00_06A2_003A_A0A5();
	goto l__05D6;
l__05CA:
	emu_push(emu_cs);
	emu_push(0x05CE); emu_DSP_UninstallInterrupt();
l__05CE:
	emu_push(emu_cs);
	emu_push(0x05D2); f__AB00_0816_0055_489B();
l__05D2:
	emu_push(emu_cs);
	emu_push(0x05D6); f__AB00_086B_0007_9A8B();
l__05D6:
	emu_al = 0x20;
	emu_cmpw(&emu_get_memory16(emu_cs, 0x00, 0x102), 0x8);
	if (emu_get_memory16(emu_cs, 0x00, 0x102) >= 0x8) {
		emu_outb(0xA0, emu_al);
	}
l__05E2:
	emu_outb(0x20, emu_al);
	emu_pop(&emu_es);
	emu_pop(&emu_ds);
	emu_pop(&emu_bp);
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_pop(&emu_dx);
	emu_pop(&emu_cx);
	emu_pop(&emu_bx);
	emu_pop(&emu_ax);

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
	emu_push(0x0673); emu_DSP_WriteAndWait();
l__0673:
	emu_addw(&emu_sp, 0x2);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax == 0) { /* Unresolved jump */ emu_ip = 0x069E; emu_last_cs = 0xAB00; emu_last_ip = 0x0678; emu_last_length = 0x0013; emu_last_crc = 0xFC0C; emu_call(); return; }
	emu_ax = emu_get_memory16(emu_cs, 0x00, 0x122);
	emu_andw(&emu_ax, 0xFF);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x0686); emu_DSP_WriteAndWait();
l__0686:
	emu_addw(&emu_sp, 0x2);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax == 0) { /* Unresolved jump */ emu_ip = 0x069E; emu_last_cs = 0xAB00; emu_last_ip = 0x068B; emu_last_length = 0x0015; emu_last_crc = 0x89F7; emu_call(); return; }
	emu_ax = emu_get_memory16(emu_cs, 0x00, 0x122);
	emu_andw(&emu_ax, 0xFF00);
	emu_xchgb(&emu_ah, &emu_al);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x069B); emu_DSP_WriteAndWait();
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
 * Called From: AB00:05C5:0012:4375
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
	if (emu_dx > 0x0) goto l__0708;
	emu_cmpw(&emu_ax, emu_get_memory16(emu_cs, 0x00, 0x122));
	if (emu_ax > emu_get_memory16(emu_cs, 0x00, 0x122)) goto l__0708;
	emu_get_memory16(emu_cs, 0x00, 0x122) = emu_ax;
l__0708:
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
	emu_push(0x072D); emu_DSP_SetDMA();
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
	if (emu_get_memory16(emu_cs, 0x00, 0x112) >= 0x4) goto l__07E7;
	emu_addw(&emu_get_memory16(emu_cs, 0x00, 0x112), 0x4);
l__07E7:
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
 * Called From: AB00:0AA4:0053:37BB
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
 * Decompiled function f__AB00_0816_0055_489B()
 *
 * @name f__AB00_0816_0055_489B
 * @implements AB00:0816:0055:489B ()
 *
 * Called From: AB00:05CF:0004:FC11
 */
void f__AB00_0816_0055_489B()
{
l__0816:
	emu_push(emu_ds);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_lfp(&emu_ds, &emu_si, &emu_get_memory16(emu_cs, 0x00, 0x10A));
	emu_incw(&emu_si);
	emu_lodsw(emu_ds);
	emu_dl = emu_get_memory8(emu_ds, emu_si, 0x0);
	emu_dh = 0x0;
	emu_incw(&emu_si);
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
	emu_addw(&emu_bx, emu_ax);
	emu_adcw(&emu_cx, emu_dx);
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
	emu_get_memory16(emu_cs, 0x00, 0x10A) = emu_si;
	emu_get_memory16(emu_cs, 0x00, 0x10C) = emu_ds;
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_pop(&emu_ds);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__AB00_086B_0007_9A8B()
 *
 * @name f__AB00_086B_0007_9A8B
 * @implements AB00:086B:0007:9A8B ()
 * @implements AB00:0872:000D:E608
 * @implements AB00:087F:0008:53B7
 * @implements AB00:0887:001B:9436
 * @implements AB00:08A8:000A:94FD
 * @implements AB00:0903:0017:4784
 * @implements AB00:091A:0014:A4C0
 * @implements AB00:092E:000A:8AA3
 * @implements AB00:0938:000E:D0F8
 * @implements AB00:0946:000A:8CA9
 * @implements AB00:0950:0007:50C7
 * @implements AB00:0957:000A:4CAD
 * @implements AB00:0961:0007:90C4
 * @implements AB00:0968:000C:5B17
 * @implements AB00:09ED:0057:C27F
 * @implements AB00:0A14:0030:3F4D
 * @implements AB00:0A44:0010:FF21
 * @implements AB00:0A54:0053:37BB
 * @implements AB00:0AA7:0007:4F07
 * @implements AB00:0AAA:0004:5E42
 *
 * Called From: AB00:05D3:0004:BC25
 * Called From: AB00:1180:0021:7380
 */
void f__AB00_086B_0007_9A8B()
{
l__086B:
	emu_push(emu_ds);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_push(emu_cs);
	emu_push(0x0872); f__AB00_02AB_000F_A43F();
l__0872:
	emu_cmpw(&emu_ax, 0x0);
	if (emu_ax == 0x0) goto l__08A8;
	emu_cmpw(&emu_ax, 0x1);
	if (emu_ax != 0x1) goto l__087F;
	goto l__09ED;
l__087F:
	emu_cmpw(&emu_ax, 0x2);
	if (emu_ax != 0x2) goto l__0887;
	/* Unresolved jump */ emu_ip = 0x0974; emu_last_cs = 0xAB00; emu_last_ip = 0x0884; emu_last_length = 0x0008; emu_last_crc = 0x53B7; emu_call();
l__0887:
	emu_cmpw(&emu_ax, 0x3);
	if (emu_ax == 0x3) goto l__0903;
	emu_cmpw(&emu_ax, 0x4);
	if (emu_ax == 0x4) goto l__08A8;
	emu_cmpw(&emu_ax, 0x6);
	if (emu_ax == 0x6) { /* Unresolved jump */ emu_ip = 0x08B8; emu_last_cs = 0xAB00; emu_last_ip = 0x0894; emu_last_length = 0x001B; emu_last_crc = 0x9436; emu_call(); return; }
	emu_cmpw(&emu_ax, 0x7);
	if (emu_ax == 0x7) { /* Unresolved jump */ emu_ip = 0x08D9; emu_last_cs = 0xAB00; emu_last_ip = 0x0899; emu_last_length = 0x001B; emu_last_crc = 0x9436; emu_call(); return; }
	emu_cmpw(&emu_ax, 0x8);
	if (emu_ax == 0x8) { /* Unresolved jump */ emu_ip = 0x08A2; emu_last_cs = 0xAB00; emu_last_ip = 0x089E; emu_last_length = 0x001B; emu_last_crc = 0x9436; emu_call(); return; }
	/* Unresolved jump */ emu_ip = 0x08B2; emu_last_cs = 0xAB00; emu_last_ip = 0x08A0; emu_last_length = 0x001B; emu_last_crc = 0x9436; emu_call();
l__08A8:
	emu_get_memory16(emu_cs, 0x00, 0x14C) = 0x3;
	goto l__0AAA;
l__0903:
	emu_get_memory16(emu_cs, 0x00, 0x11E) = 0x0;
	emu_get_memory16(emu_cs, 0x00, 0x120) = 0x0;
	emu_ax = 0x58F;
	emu_push(emu_cs);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x091A); emu_DSP_InstallInterrupt();
l__091A:
	emu_addw(&emu_sp, 0x4);
	emu_lfp(&emu_ds, &emu_si, &emu_get_memory16(emu_cs, 0x00, 0x10A));
	emu_push(emu_get_memory16(emu_cs, 0x00, 0x114));
	emu_push(emu_get_memory16(emu_ds, emu_si, 0x6));
	emu_push(emu_cs);
	emu_push(0x092E); emu_DSP_SetTimeConst();
l__092E:
	emu_addw(&emu_sp, 0x4);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax != 0) goto l__0938;
	goto l__0AAA;
l__0938:
	emu_push(emu_ax);
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_get_memory16(emu_ss, emu_bp,  0x2) = 0x80;
	emu_pop(&emu_bp);
	emu_push(emu_cs);
	emu_push(0x0946); emu_DSP_WriteAndWait();
l__0946:
	emu_addw(&emu_sp, 0x2);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax != 0) goto l__0950;
	goto l__0AAA;
l__0950:
	emu_push(emu_get_memory16(emu_ds, emu_si, 0x4));
	emu_push(emu_cs);
	emu_push(0x0957); emu_DSP_WriteAndWait();
l__0957:
	emu_addw(&emu_sp, 0x2);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax != 0) goto l__0961;
	goto l__0AAA;
l__0961:
	emu_push(emu_get_memory16(emu_ds, emu_si, 0x5));
	emu_push(emu_cs);
	emu_push(0x0968); emu_DSP_WriteAndWait();
l__0968:
	emu_addw(&emu_sp, 0x2);
	emu_get_memory8(emu_cs, 0x00, 0x166) = 0x1;
	goto l__0AAA;
l__09ED:
	emu_lfp(&emu_ds, &emu_si, &emu_get_memory16(emu_cs, 0x00, 0x10A));
	emu_bl = emu_get_memory8(emu_ds, emu_si, 0x4);
	emu_al = emu_get_memory8(emu_ds, emu_si, 0x5);
	emu_bh = 0x0;
	emu_ah = 0x0;
	emu_cmpw(&emu_get_memory16(emu_cs, 0x00, 0x162), 0x0);
	if (emu_get_memory16(emu_cs, 0x00, 0x162) != 0x0) {
		emu_al = emu_get_memory8(emu_cs, 0x00, 0x165);
		emu_bl = emu_get_memory8(emu_cs, 0x00, 0x164);
		emu_get_memory16(emu_cs, 0x00, 0x162) = 0x0;
	}
l__0A14:
	emu_get_memory16(emu_cs, 0x00, 0x118) = emu_ax;
	emu_get_memory16(emu_cs, 0x00, 0x112) = emu_ax;
	emu_andw(&emu_get_memory16(emu_cs, 0x00, 0x112), 0x7F);
	emu_andw(&emu_ax, 0x80);
	emu_cx = 0x6;
	emu_shrw(&emu_ax, emu_cl);
	emu_andw(&emu_ax, 0x2);
	emu_get_memory16(emu_cs, 0x00, 0x114) = emu_ax;
	emu_get_memory16(emu_cs, 0x00, 0x116) = emu_bx;
	emu_push(emu_get_memory16(emu_cs, 0x00, 0x114));
	emu_push(emu_get_memory16(emu_cs, 0x00, 0x116));
	emu_push(emu_cs);
	emu_push(0x0A44); emu_DSP_SetTimeConst();
l__0A44:
	emu_addw(&emu_sp, 0x4);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax == 0) goto l__0AAA;
	emu_ax = 0x58F;
	emu_push(emu_cs);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x0A54); emu_DSP_InstallInterrupt();
l__0A54:
	emu_addw(&emu_sp, 0x4);
	emu_ax = emu_get_memory16(emu_ds, emu_si, 0x1);
	emu_dl = emu_get_memory8(emu_ds, emu_si, 0x3);
	emu_dh = 0x0;
	emu_subw(&emu_ax, 0x2);
	emu_sbbw(&emu_dx, 0x0);
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
	emu_addw(&emu_bx, 0x6);
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
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_push(emu_si);
	emu_push(emu_cs);
	emu_push(0x0AA7); f__AB00_07EB_0026_ECEA();
l__0AA7:
	emu_addw(&emu_sp, 0x8);
l__0AAA:
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_pop(&emu_ds);

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
 * @implements AB00:0B67:000C:62A2
 *
 * Called From: AB00:0BB0:000E:9248
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
l__0B67:
	emu_inb(&emu_al, emu_dx);
	emu_testb(&emu_al, 0x8);
	if ((emu_al & 0x8) != 0) goto l__0B67;
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
 * Decompiled function emu_DSP_GetInfo()
 *
 * @name emu_DSP_GetInfo
 * @implements AB00:0B73:0019:AD43 ()
 * @implements AB00:0B8C:0005:C48A
 *
 * Called From: 2756:050D:0003:6FD4
 */
void emu_DSP_GetInfo()
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
 * Decompiled function emu_DSP_Uninit()
 *
 * @name emu_DSP_Uninit
 * @implements AB00:0B91:0014:89BD ()
 * @implements AB00:0BA5:000E:9248
 * @implements AB00:0BB3:0007:AEA0
 * @implements AB00:0BBA:0004:861F
 * @implements AB00:0BBE:000E:E72F
 * @implements AB00:0BC5:0007:3FBD
 * @implements AB00:0BCC:0005:C48A
 *
 * Called From: 2756:050D:0003:6FD4
 */
void emu_DSP_Uninit()
{
l__0B91:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_ds);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_pushf();
	emu_cli();
	emu_cmpw(&emu_get_memory16(emu_cs, 0x00, 0x167), 0x0);
	if (emu_get_memory16(emu_cs, 0x00, 0x167) == 0x0) goto l__0BC5;
	emu_push(emu_cs);
	emu_push(0x0BA5); f__AB00_0325_0020_80E9();
l__0BA5:
	emu_push(emu_ax);
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_get_memory16(emu_ss, emu_bp,  0x2) = 0x5;
	emu_pop(&emu_bp);
	emu_push(emu_cs);
	emu_push(0x0BB3); f__AB00_0B4B_0028_C5A7();
l__0BB3:
	emu_addw(&emu_sp, 0x2);
	emu_push(emu_cs);
	emu_push(0x0BBA); emu_DSP_Stop();
l__0BBA:
	emu_push(emu_cs);
	emu_push(0x0BBE); emu_DSP_Reset();
l__0BBE:
	emu_get_memory16(emu_cs, 0x00, 0x167) = 0x0;
l__0BC5:
	emu_orb(&emu_bh, 0x0);
	emu_push(emu_cs);
	emu_push(0x0BCC); f__AB00_0BC6_0001_6780();
l__0BCC:
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
 * Decompiled function f__AB00_0BC6_0001_6780()
 *
 * @name f__AB00_0BC6_0001_6780
 * @implements AB00:0BC6:0001:6780 ()
 *
 * Called From: AB00:0BC9:000E:E72F
 * Called From: AB00:0BC9:0007:3FBD
 */
void f__AB00_0BC6_0001_6780()
{
l__0BC6:

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	emu_popf();
	return;
}

/**
 * Decompiled function emu_DSP_SetVolume()
 *
 * @name emu_DSP_SetVolume
 * @implements AB00:0C08:0013:3E08 ()
 * @implements AB00:0C1B:0007:3FBD
 * @implements AB00:0C22:0005:C48A
 *
 * Called From: 2756:050D:0003:6FD4
 */
void emu_DSP_SetVolume()
{
l__0C08:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_ds);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_pushf();
	emu_cli();
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_get_memory16(emu_cs, 0x00, 0x106) = emu_ax;
	emu_push(emu_cs);
	emu_push(0x0C1B); f__AB00_03F7_0007_D805();
l__0C1B:
	emu_orb(&emu_bh, 0x0);
	emu_push(emu_cs);
	emu_push(0x0C22); f__AB00_0C1C_0001_6780();
l__0C22:
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
 * Decompiled function f__AB00_0C1C_0001_6780()
 *
 * @name f__AB00_0C1C_0001_6780
 * @implements AB00:0C1C:0001:6780 ()
 *
 * Called From: AB00:0C1F:0007:3FBD
 */
void f__AB00_0C1C_0001_6780()
{
l__0C1C:

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	emu_popf();
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

/**
 * Decompiled function emu_DSP_Init()
 *
 * @name emu_DSP_Init
 * @implements AB00:0DA4:0078:0101 ()
 * @implements AB00:0E1C:001B:9801
 * @implements AB00:0E37:0034:388F
 * @implements AB00:0E64:0007:3FBD
 * @implements AB00:0E6B:0005:C48A
 *
 * Called From: 2756:050D:0003:6FD4
 */
void emu_DSP_Init()
{
l__0DA4:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_ds);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_pushf();
	emu_cli();
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
	emu_get_memory16(emu_cs, 0x00, 0x15C) = 0xFFFF;
	emu_get_memory16(emu_cs, 0x00, 0x124) = 0x0;
	emu_get_memory16(emu_cs, 0x00, 0x162) = 0x0;
	emu_get_memory8(emu_cs, 0x00, 0x166) = 0x0;
	emu_get_memory16(emu_cs, 0x00, 0x15E) = 0xFFFF;
	emu_get_memory16(emu_cs, 0x00, 0x160) = 0xFFFF;
	emu_ax = emu_get_memory16(emu_cs, 0x00, 0xE8);
	emu_get_memory16(emu_cs, 0x00, 0x108) = emu_ax;
	emu_ax = emu_get_memory16(emu_cs, 0x00, 0xE6);
	emu_get_memory16(emu_cs, 0x00, 0x106) = emu_ax;
	emu_push(emu_cs);
	emu_push(0x0E37); f__AB00_03F7_0007_D805();
l__0E37:
	emu_get_memory16(emu_cs, 0x00, 0x12A) = 0x0;
	emu_get_memory16(emu_cs, 0x00, 0x14C) = 0x0;
	emu_get_memory16(emu_cs, 0x00, 0x14A) = 0x1;
	emu_get_memory16(emu_cs, 0x00, 0x146) = 0x3;
	emu_get_memory16(emu_cs, 0x00, 0x148) = 0x3;
	emu_get_memory16(emu_cs, 0x00, 0x167) = 0x1;
	emu_ax = 0x1;
l__0E64:
	emu_orb(&emu_bh, 0x0);
	emu_push(emu_cs);
	emu_push(0x0E6B); f__AB00_0E65_0001_6780();
l__0E6B:
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
 * Decompiled function f__AB00_0E65_0001_6780()
 *
 * @name f__AB00_0E65_0001_6780
 * @implements AB00:0E65:0001:6780 ()
 *
 * Called From: AB00:0E68:0034:388F
 * Called From: AB00:0E68:0007:3FBD
 */
void f__AB00_0E65_0001_6780()
{
l__0E65:

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	emu_popf();
	return;
}

/**
 * Decompiled function emu_DSP_Play()
 *
 * @name emu_DSP_Play
 * @implements AB00:1068:0020:E6F1 ()
 * @implements AB00:1088:006D:FEDA
 * @implements AB00:110D:000E:872A
 * @implements AB00:111B:0007:F178
 *
 * Called From: 2756:050D:0003:6FD4
 */
void emu_DSP_Play()
{
l__1068:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x4);
	emu_push(emu_ds);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_pushf();
	emu_cli();
	emu_get_memory16(emu_cs, 0x00, 0x162) = 0x0;
	emu_push(emu_ax);
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_get_memory16(emu_ss, emu_bp,  0x2) = 0x0;
	emu_pop(&emu_bp);
	emu_push(emu_cs);
	emu_push(0x1088); emu_DSP_Stop();
l__1088:
	emu_addw(&emu_sp, 0x2);
	emu_get_memory16(emu_cs, 0x00, 0x14A) = 0x0;
	emu_lfp(&emu_es, &emu_di, &emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_di;
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_es;
	emu_get_memory16(emu_cs, 0x00, 0x14C) = 0x3;
	emu_lfp(&emu_ds, &emu_si, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_ax = emu_get_memory16(emu_ds, emu_si, 0x14);
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
	emu_addw(&emu_bx, emu_ax);
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
	emu_get_memory16(emu_cs, 0x00, 0x10A) = emu_si;
	emu_get_memory16(emu_cs, 0x00, 0x10C) = emu_ds;
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp,  0xC), 0xFFFF);
	if (emu_get_memory16(emu_ss, emu_bp,  0xC) == 0xFFFF) goto l__110D;
	emu_push(emu_cs);
	emu_push(0x10F5); f__AB00_02AB_000F_A43F();
	/* Unresolved jump */ emu_ip = 0x10F5; emu_last_cs = 0xAB00; emu_last_ip = 0x10F5; emu_last_length = 0x006D; emu_last_crc = 0xFEDA; emu_call();
l__110D:
	emu_get_memory16(emu_cs, 0x00, 0x14C) = 0x0;
	emu_orb(&emu_bh, 0x0);
	emu_push(emu_cs);
	emu_push(0x111B); f__AB00_1115_0001_6780();
l__111B:
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
 * Decompiled function f__AB00_1115_0001_6780()
 *
 * @name f__AB00_1115_0001_6780
 * @implements AB00:1115:0001:6780 ()
 *
 * Called From: AB00:1118:000E:872A
 */
void f__AB00_1115_0001_6780()
{
l__1115:

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	emu_popf();
	return;
}

/**
 * Decompiled function emu_DSP_Start()
 *
 * @name emu_DSP_Start
 * @implements AB00:1122:001C:9408 ()
 * @implements AB00:1162:0021:7380
 * @implements AB00:1183:0007:3FBD
 * @implements AB00:118A:0005:C48A
 *
 * Called From: 2756:050D:0003:6FD4
 */
void emu_DSP_Start()
{
l__1122:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_ds);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_pushf();
	emu_cli();
	emu_cmpw(&emu_get_memory16(emu_cs, 0x00, 0x14A), 0x0);
	if (emu_get_memory16(emu_cs, 0x00, 0x14A) == 0x0) goto l__1162;
	emu_cmpw(&emu_get_memory16(emu_cs, 0x00, 0x14C), 0x2);
	if (emu_get_memory16(emu_cs, 0x00, 0x14C) == 0x2) goto l__1183;
	emu_push(emu_cs);
	/* Unresolved call */ emu_push(0x113E); emu_ip = 0x0AAE; emu_last_cs = 0xAB00; emu_last_ip = 0x113B; emu_last_length = 0x001C; emu_last_crc = 0x9408; emu_call();
	/* Unresolved jump */ emu_ip = 0x113E; emu_last_cs = 0xAB00; emu_last_ip = 0x113E; emu_last_length = 0x001C; emu_last_crc = 0x9408; emu_call();
l__1162:
	emu_cmpw(&emu_get_memory16(emu_cs, 0x00, 0x14C), 0x0);
	if (emu_get_memory16(emu_cs, 0x00, 0x14C) == 0x0) {
		emu_get_memory16(emu_cs, 0x00, 0x15E) = 0xFFFF;
		emu_get_memory16(emu_cs, 0x00, 0x160) = 0xFFFF;
		emu_get_memory16(emu_cs, 0x00, 0x14C) = 0x2;
		emu_push(emu_cs);
		emu_push(0x1183); f__AB00_086B_0007_9A8B();
	}
l__1183:
	emu_orb(&emu_bh, 0x0);
	emu_push(emu_cs);
	emu_push(0x118A); f__AB00_1184_0001_6780();
l__118A:
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
 * Decompiled function f__AB00_1184_0001_6780()
 *
 * @name f__AB00_1184_0001_6780
 * @implements AB00:1184:0001:6780 ()
 *
 * Called From: AB00:1187:0007:3FBD
 */
void f__AB00_1184_0001_6780()
{
l__1184:

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	emu_popf();
	return;
}

/**
 * Decompiled function emu_DSP_Stop()
 *
 * @name emu_DSP_Stop
 * @implements AB00:118F:0029:4B06 ()
 * @implements AB00:11AD:000B:B9EA
 * @implements AB00:11B8:0005:4719
 * @implements AB00:11BD:0018:FC8D
 * @implements AB00:11D5:0005:C48A
 *
 * Called From: 2756:050D:0003:6FD4
 * Called From: AB00:0BB7:0007:AEA0
 * Called From: AB00:1085:0020:E6F1
 */
void emu_DSP_Stop()
{
l__118F:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_ds);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_pushf();
	emu_cli();
	emu_si = 0x1;
	emu_cmpw(&emu_get_memory16(emu_cs, 0x00, 0x14A), 0x0);
	if (emu_get_memory16(emu_cs, 0x00, 0x14A) == 0x0) {
		emu_cmpw(&emu_get_memory16(emu_cs, 0x00, 0x14C), 0x2);
		if (emu_get_memory16(emu_cs, 0x00, 0x14C) != 0x2) {
			emu_si = 0x0;
		}
	}
l__11AD:
	emu_get_memory16(emu_cs, 0x00, 0x14C) = 0x0;
	emu_push(emu_cs);
	emu_push(0x11B8); emu_DSP_UninstallInterrupt();
l__11B8:
	emu_push(emu_si);
	emu_push(emu_cs);
	emu_push(0x11BD); f__AB00_0364_0014_B343();
l__11BD:
	emu_addw(&emu_sp, 0x2);
	emu_get_memory16(emu_cs, 0x00, 0x146) = 0x3;
	emu_get_memory16(emu_cs, 0x00, 0x148) = 0x3;
	emu_orb(&emu_bh, 0x0);
	emu_push(emu_cs);
	emu_push(0x11D5); f__AB00_11CF_0001_6780();
l__11D5:
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
 * Decompiled function f__AB00_11CF_0001_6780()
 *
 * @name f__AB00_11CF_0001_6780
 * @implements AB00:11CF:0001:6780 ()
 *
 * Called From: AB00:11D2:0018:FC8D
 */
void f__AB00_11CF_0001_6780()
{
l__11CF:

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	emu_popf();
	return;
}

/**
 * Decompiled function emu_DSP_GetStatus()
 *
 * @name emu_DSP_GetStatus
 * @implements AB00:1235:0013:28BA ()
 * @implements AB00:1248:0005:C48A
 *
 * Called From: 2756:050D:0003:6FD4
 */
void emu_DSP_GetStatus()
{
l__1235:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_ds);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_pushf();
	emu_cli();
	emu_ax = emu_get_memory16(emu_cs, 0x00, 0x14C);
	emu_orb(&emu_bh, 0x0);
	emu_push(emu_cs);
	emu_push(0x1248); f__AB00_1242_0001_6780();
l__1248:
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
 * Decompiled function f__AB00_1242_0001_6780()
 *
 * @name f__AB00_1242_0001_6780
 * @implements AB00:1242:0001:6780 ()
 *
 * Called From: AB00:1245:0013:28BA
 */
void f__AB00_1242_0001_6780()
{
l__1242:

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	emu_popf();
	return;
}

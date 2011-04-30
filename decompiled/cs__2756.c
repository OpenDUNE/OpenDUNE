/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function emu_Interrupt_CustomTimer()
 *
 * @name emu_Interrupt_CustomTimer
 * @implements 2756:050F:000B:0871 ()
 * @implements 2756:051A:006F:3626
 * @implements 2756:0543:0046:62C4
 * @implements 2756:057D:000C:CFF4
 * @implements 2756:0589:0019:7966
 * @implements 2756:05A2:0040:EA7C
 *
 * Called From: 0000:0000:0000:0000
 */
void emu_Interrupt_CustomTimer()
{
l__050F:
	emu_cmpw(&emu_get_memory16(emu_cs, 0x00, 0x6), 0x0);
	if (emu_get_memory16(emu_cs, 0x00, 0x6) == 0x0) goto l__051A;
	/* Unresolved jump */ emu_ip = 0x05C9; emu_last_cs = 0x2756; emu_last_ip = 0x0517; emu_last_length = 0x000B; emu_last_crc = 0x0871; emu_call();
l__051A:
	emu_get_memory16(emu_cs, 0x00, 0x6) = 0x1;
	emu_cld();
	emu_push(emu_ax);
	emu_push(emu_bx);
	emu_push(emu_cx);
	emu_push(emu_dx);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_push(emu_bp);
	emu_push(emu_es);
	emu_push(emu_ds);
	emu_get_memory16(emu_cs, 0x00, 0x3B8) = emu_ss;
	emu_get_memory16(emu_cs, 0x00, 0x3BA) = emu_sp;
	emu_ax = emu_cs;
	emu_ss = emu_ax;
	emu_sp = 0x3B8;
	emu_get_memory16(emu_cs, 0x00, 0x120) = 0x0;
l__0543:
	emu_si = emu_get_memory16(emu_cs, 0x00, 0x120);
	emu_shlw(&emu_si, 0x1);
	emu_cmpw(&emu_get_memory16(emu_cs, emu_si, 0x6E), 0x2);
	if (emu_get_memory16(emu_cs, emu_si, 0x6E) != 0x2) goto l__05A2;
	emu_ds = emu_get_memory16(emu_cs, emu_si, 0x4C);
	emu_shlw(&emu_si, 0x1);
	emu_ax = emu_get_memory16(emu_cs, emu_si, 0x90);
	emu_dx = emu_get_memory16(emu_cs, emu_si, 0x92);
	emu_addw(&emu_ax, emu_get_memory16(emu_cs, 0x00, 0x118));
	emu_adcw(&emu_dx, emu_get_memory16(emu_cs, 0x00, 0x11A));
	emu_cmpw(&emu_dx, emu_get_memory16(emu_cs, emu_si, 0xD6));
	if (emu_dx >= emu_get_memory16(emu_cs, emu_si, 0xD6)) {
		if (emu_dx > emu_get_memory16(emu_cs, emu_si, 0xD6)) goto l__0589;
		emu_cmpw(&emu_ax, emu_get_memory16(emu_cs, emu_si, 0xD4));
		if (emu_ax >= emu_get_memory16(emu_cs, emu_si, 0xD4)) goto l__0589;
	}
l__057D:
	emu_get_memory16(emu_cs, emu_si, 0x90) = emu_ax;
	emu_get_memory16(emu_cs, emu_si, 0x92) = emu_dx;
	goto l__05A2;
l__0589:
	emu_subw(&emu_ax, emu_get_memory16(emu_cs, emu_si, 0xD4));
	emu_sbbw(&emu_dx, emu_get_memory16(emu_cs, emu_si, 0xD6));
	emu_get_memory16(emu_cs, emu_si, 0x90) = emu_ax;
	emu_get_memory16(emu_cs, emu_si, 0x92) = emu_dx;

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_cs, emu_si, 0x8);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_cs, emu_si, 0xA);
	emu_push(0x05A2);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x27560622: f__2756_0622_0006_823A(); break;
		case 0x2BD10006: f__2BD1_0006_004A_CD10(); break;
		case 0x44AF1CEE: emu_MPU_Interrupt(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x2756; emu_last_ip = 0x059D; emu_last_length = 0x0019; emu_last_crc = 0x7966;
			emu_call();
			return;
	}
l__05A2:
	emu_incw(&emu_get_memory16(emu_cs, 0x00, 0x120));
	emu_cmpw(&emu_get_memory16(emu_cs, 0x00, 0x120), 0x10);
	if (emu_get_memory16(emu_cs, 0x00, 0x120) <= 0x10) goto l__0543;
	emu_ss = emu_get_memory16(emu_cs, 0x00, 0x3B8);
	emu_sp = emu_get_memory16(emu_cs, 0x00, 0x3BA);
	emu_pop(&emu_ds);
	emu_pop(&emu_es);
	emu_pop(&emu_bp);
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_pop(&emu_dx);
	emu_pop(&emu_cx);
	emu_pop(&emu_bx);
	emu_pop(&emu_ax);
	emu_get_memory16(emu_cs, 0x00, 0x6) = 0x0;
	emu_push(emu_ax);
	emu_al = 0x20;
	emu_outb(0x20, emu_al);
	emu_pop(&emu_ax);
	emu_cmpw(&emu_get_memory16(emu_cs, 0x00, 0x1B4), 0x6554);
	if (emu_get_memory16(emu_cs, 0x00, 0x1B4) != 0x6554) { /* Unresolved jump */ emu_ip = 0x05E2; emu_last_cs = 0x2756; emu_last_ip = 0x05D6; emu_last_length = 0x0040; emu_last_crc = 0xEA7C; emu_call(); return; }
	emu_cmpw(&emu_get_memory16(emu_cs, 0x00, 0x1B6), 0x7473);
	if (emu_get_memory16(emu_cs, 0x00, 0x1B6) != 0x7473) { /* Unresolved jump */ emu_ip = 0x05E2; emu_last_cs = 0x2756; emu_last_ip = 0x05DF; emu_last_length = 0x0040; emu_last_crc = 0xEA7C; emu_call(); return; }

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	emu_popf();
	return;
}

/**
 * Decompiled function f__2756_0622_0006_823A()
 *
 * @name f__2756_0622_0006_823A
 * @implements 2756:0622:0006:823A ()
 * @implements 2756:0628:0001:6180
 *
 * Called From: 2756:059D:0019:7966
 */
void f__2756_0622_0006_823A()
{
l__0622:
	emu_pushf();

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_cs, 0x00, 0x11C);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_cs, 0x00, 0x11E);
	emu_push(0x0628);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x00700040: Interrupt_Timer(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x2756; emu_last_ip = 0x0623; emu_last_length = 0x0006; emu_last_crc = 0x823A;
			emu_call();
			return;
	}
l__0628:

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__2756_0677_002D_321F()
 *
 * @name f__2756_0677_002D_321F
 * @implements 2756:0677:002D:321F ()
 * @implements 2756:06A4:0005:5A7A
 *
 * Called From: 2756:085F:0006:0827
 */
void f__2756_0677_002D_321F()
{
l__0677:
	emu_push(emu_ds);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_push(emu_es);
	emu_pushf();
	emu_cli();
	emu_get_memory16(emu_cs, 0x00, 0x120) = 0xFFFF;
	emu_dx = emu_get_memory16(emu_cs, 0x00, 0x11C);
	emu_ds = emu_get_memory16(emu_cs, 0x00, 0x11E);
	emu_ax = 0x0;
	emu_es = emu_ax;
	emu_get_memory16(emu_es, 0x00, 0x20) = emu_dx;
	emu_get_memory16(emu_es, 0x00, 0x22) = emu_ds;
	emu_orb(&emu_bh, 0x0);
	emu_push(emu_cs);
	emu_push(0x06A4); f__2756_069E_0001_6780();
l__06A4:
	emu_pop(&emu_es);
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_pop(&emu_ds);

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__2756_069E_0001_6780()
 *
 * @name f__2756_069E_0001_6780
 * @implements 2756:069E:0001:6780 ()
 *
 * Called From: 2756:06A1:002D:321F
 */
void f__2756_069E_0001_6780()
{
l__069E:

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	emu_popf();
	return;
}

/**
 * Decompiled function f__2756_06A9_0015_B76D()
 *
 * @name f__2756_06A9_0015_B76D
 * @implements 2756:06A9:0015:B76D ()
 * @implements 2756:06BE:0006:E2B1
 * @implements 2756:06C4:0009:7FCE
 * @implements 2756:06CD:0005:C08A
 *
 * Called From: 2756:06F0:0004:E2A8
 * Called From: 2756:06F0:0021:3A37
 * Called From: 2756:0859:0035:3DAA
 */
void f__2756_06A9_0015_B76D()
{
l__06A9:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_ds);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_pushf();
	emu_cli();
	emu_al = 0x36;
	emu_outb(0x43, emu_al);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x4);
	emu_get_memory16(emu_cs, 0x00, 0x126) = emu_ax;
	goto l__06BE;
l__06BE:
	emu_outb(0x40, emu_al);
	emu_al = emu_ah;
	goto l__06C4;
l__06C4:
	emu_outb(0x40, emu_al);
	emu_orb(&emu_bh, 0x0);
	emu_push(emu_cs);
	emu_push(0x06CD); f__2756_06C7_0001_6780();
l__06CD:
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_pop(&emu_ds);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__2756_06C7_0001_6780()
 *
 * @name f__2756_06C7_0001_6780
 * @implements 2756:06C7:0001:6780 ()
 *
 * Called From: 2756:06CA:0009:7FCE
 */
void f__2756_06C7_0001_6780()
{
l__06C7:

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	emu_popf();
	return;
}

/**
 * Decompiled function f__2756_07DA_0048_9F5D()
 *
 * @name f__2756_07DA_0048_9F5D
 * @implements 2756:07DA:0048:9F5D ()
 * @implements 2756:0822:0005:5E7A
 *
 * Called From: 1DD7:039E:0008:D3BD
 */
void f__2756_07DA_0048_9F5D()
{
l__07DA:
	emu_push(emu_ds);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_push(emu_es);
	emu_pushf();
	emu_cli();
	emu_get_memory16(emu_cs, 0x00, 0x4) = 0x0;
	emu_get_memory16(emu_cs, 0x00, 0x6) = 0x0;
	emu_get_memory16(emu_cs, 0x00, 0x462) = 0x0;
	emu_cld();
	emu_ax = emu_cs;
	emu_es = emu_ax;
	emu_di = 0x128;
	emu_cx = 0x20;
	emu_ax = 0x0;
	emu_rep_stosw();
	emu_di = 0x168;
	emu_cx = 0x10;
	emu_ax = 0xFFFF;
	emu_rep_stosw();
	emu_di = 0x188;
	emu_cx = 0x10;
	emu_ax = 0x0;
	emu_rep_stosw();
	emu_orb(&emu_bh, 0x0);
	emu_push(emu_cs);
	emu_push(0x0822); f__2756_081C_0001_6780();
l__0822:
	emu_pop(&emu_es);
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_pop(&emu_ds);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__2756_081C_0001_6780()
 *
 * @name f__2756_081C_0001_6780
 * @implements 2756:081C:0001:6780 ()
 *
 * Called From: 2756:081F:0048:9F5D
 */
void f__2756_081C_0001_6780()
{
l__081C:

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	emu_popf();
	return;
}

/**
 * Decompiled function f__2756_0827_0035_3DAA()
 *
 * @name f__2756_0827_0035_3DAA
 * @implements 2756:0827:0035:3DAA ()
 * @implements 2756:085C:0006:0827
 * @implements 2756:0862:0007:3FBD
 * @implements 2756:0869:0005:C48A
 *
 * Called From: 1DD7:0404:000C:8340
 * Called From: 2756:0975:0029:7838
 */
void f__2756_0827_0035_3DAA()
{
l__0827:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_ds);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_pushf();
	emu_cli();
	emu_bx = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_cmpw(&emu_bx, 0xFFFF);
	if (emu_bx == 0xFFFF) goto l__0862;
	emu_shlw(&emu_bx, 0x1);
	emu_cmpw(&emu_get_memory16(emu_cs, emu_bx, 0x6E), 0x0);
	if (emu_get_memory16(emu_cs, emu_bx, 0x6E) == 0x0) goto l__0862;
	emu_get_memory16(emu_cs, emu_bx, 0x6E) = 0x0;
	emu_decw(&emu_get_memory16(emu_cs, 0x00, 0x4));
	if (emu_get_memory16(emu_cs, 0x00, 0x4) != 0) goto l__0862;
	emu_push(emu_ax);
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_get_memory16(emu_ss, emu_bp,  0x2) = 0x0;
	emu_pop(&emu_bp);
	emu_push(0x085C); f__2756_06A9_0015_B76D();
l__085C:
	emu_addw(&emu_sp, 0x2);
	emu_push(0x0862); f__2756_0677_002D_321F();
l__0862:
	emu_orb(&emu_bh, 0x0);
	emu_push(emu_cs);
	emu_push(0x0869); f__2756_0863_0001_6780();
l__0869:
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
 * Decompiled function f__2756_0863_0001_6780()
 *
 * @name f__2756_0863_0001_6780
 * @implements 2756:0863:0001:6780 ()
 *
 * Called From: 2756:0866:0007:3FBD
 */
void f__2756_0863_0001_6780()
{
l__0863:

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	emu_popf();
	return;
}

/**
 * Decompiled function f__2756_094F_0029_7838()
 *
 * @name f__2756_094F_0029_7838
 * @implements 2756:04F8:0009:907D ()
 * @implements 2756:094F:0029:7838
 * @implements 2756:0978:0009:07BA
 * @implements 2756:097B:0006:43FF
 * @implements 2756:0981:0001:6580
 *
 * Called From: 1DD7:170B:0011:F32E
 */
void f__2756_094F_0029_7838()
{
	goto l__094F;
	emu_movw(&emu_bx, emu_sp);
	emu_movw(&emu_bx, emu_get_memory16(emu_ss, emu_bx, 0x4));
	emu_calli(-0x45, 0x0501, 0x04FE);
l__094F:
	emu_bx = emu_sp;
	emu_bx = emu_get_memory16(emu_ss, emu_bx, 0x4);
	emu_cmpw(&emu_bx, 0x10);
	if (emu_bx >= 0x10) goto l__0981;
	emu_shlw(&emu_bx, 0x1);
	emu_dx = 0x0;
	emu_xchgw(&emu_get_memory16(emu_cs, emu_bx, 0x188), &emu_dx);
	emu_cmpw(&emu_dx, 0x0);
	if (emu_dx == 0x0) goto l__0981;
	emu_dx = emu_get_memory16(emu_cs, emu_bx, 0x168);
	emu_cmpw(&emu_dx, 0xFFFF);
	if (emu_dx == 0xFFFF) goto l__097B;
	emu_push(emu_dx);
	emu_push(emu_cs);
	emu_push(0x0978); f__2756_0827_0035_3DAA();
l__0978:
	emu_addw(&emu_sp, 0x2);
l__097B:
	emu_ax = 0x68;
	emu_Drivers_CallFunction(); return;
l__0981:

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__2756_0D12_0042_A9FA()
 *
 * @name f__2756_0D12_0042_A9FA
 * @implements 2756:0D12:0042:A9FA ()
 * @implements 2756:0D4D:0007:3FBD
 * @implements 2756:0D54:0005:C48A
 *
 * Called From: 1DD7:15D3:0012:C55E
 * Called From: 1DD7:1719:000E:F8EB
 */
void f__2756_0D12_0042_A9FA()
{
l__0D12:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_ds);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_pushf();
	emu_cli();
	emu_bx = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_cmpw(&emu_bx, 0x10);
	if (emu_bx < 0x10) {
		emu_shlw(&emu_bx, 0x1);
		emu_shlw(&emu_bx, 0x1);
		emu_get_memory16(emu_cs, emu_bx, 0x128) = 0x0;
		emu_get_memory16(emu_cs, emu_bx, 0x12A) = 0x0;
		emu_cmpw(&emu_get_memory16(emu_cs, 0x00, 0x462), 0x0);
		if (emu_get_memory16(emu_cs, 0x00, 0x462) != 0x0) {
			emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
			emu_cmpw(&emu_ax, emu_get_memory16(emu_cs, 0x00, 0x460));
			if (emu_ax == emu_get_memory16(emu_cs, 0x00, 0x460)) {
				emu_get_memory16(emu_cs, 0x00, 0x462) = 0x0;
			}
		}
	}
l__0D4D:
	emu_orb(&emu_bh, 0x0);
	emu_push(emu_cs);
	emu_push(0x0D54); f__2756_0D4E_0001_6780();
l__0D54:
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
 * Decompiled function f__2756_0D4E_0001_6780()
 *
 * @name f__2756_0D4E_0001_6780
 * @implements 2756:0D4E:0001:6780 ()
 *
 * Called From: 2756:0D51:0007:3FBD
 */
void f__2756_0D4E_0001_6780()
{
l__0D4E:

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	emu_popf();
	return;
}

/**
 * Decompiled function f__2756_0E36_0006_85ED()
 *
 * @name f__2756_0E36_0006_85ED
 * @implements 2756:04F8:0009:907D ()
 * @implements 2756:0E36:0006:85ED
 *
 * Called From: 1DD7:01F9:0013:9C3C
 */
void f__2756_0E36_0006_85ED()
{
	goto l__0E36;
	emu_movw(&emu_bx, emu_sp);
	emu_movw(&emu_bx, emu_get_memory16(emu_ss, emu_bx, 0x4));
	emu_calli(-0x45, 0x0501, 0x04FE);
l__0E36:
	emu_ax = 0x7C;
	emu_Drivers_CallFunction(); return;
}

/**
 * Decompiled function f__2756_0E72_0006_82BA()
 *
 * @name f__2756_0E72_0006_82BA
 * @implements 2756:04F8:0009:907D ()
 * @implements 2756:0E72:0006:82BA
 *
 * Called From: 1DD7:0532:002A:9046
 * Called From: 1DD7:0532:003C:DF0B
 * Called From: 1DD7:096F:0020:62CD
 * Called From: 1DD7:096F:0028:5495
 */
void f__2756_0E72_0006_82BA()
{
	goto l__0E72;
	emu_movw(&emu_bx, emu_sp);
	emu_movw(&emu_bx, emu_get_memory16(emu_ss, emu_bx, 0x4));
	emu_calli(-0x45, 0x0501, 0x04FE);
l__0E72:
	emu_ax = 0x97;
	emu_Drivers_CallFunction(); return;
}

/**
 * Decompiled function f__2756_0EA8_0006_0360()
 *
 * @name f__2756_0EA8_0006_0360
 * @implements 2756:04F8:0009:907D ()
 * @implements 2756:0EA8:0006:0360
 *
 * Called From: 1DD7:0577:001B:056D
 * Called From: 1DD7:0993:0011:8F49
 */
void f__2756_0EA8_0006_0360()
{
	goto l__0EA8;
	emu_movw(&emu_bx, emu_sp);
	emu_movw(&emu_bx, emu_get_memory16(emu_ss, emu_bx, 0x4));
	emu_calli(-0x45, 0x0501, 0x04FE);
l__0EA8:
	emu_ax = 0xAA;
	emu_Drivers_CallFunction(); return;
}

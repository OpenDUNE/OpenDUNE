/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function emu_EntryPoint()
 *
 * @name emu_EntryPoint
 * @implements 01F7:0000:000C:3D76 ()
 * @implements 01F7:000C:001C:7156
 * @implements 01F7:0028:0059:D698
 * @implements 01F7:0037:004A:166D
 * @implements 01F7:0075:000C:AAD4
 * @implements 01F7:007E:0003:5D9E
 * @implements 01F7:0081:0018:A1DB
 * @implements 01F7:0099:0044:8C82
 * @implements 01F7:00D5:0008:AD68
 * @implements 01F7:010C:0004:0D38
 * @implements 01F7:0110:0028:782B
 * @implements 01F7:0128:0010:F7CD
 *
 * Called From: 0000:0000:0000:0000
 */
void emu_EntryPoint()
{
l__0000:
	emu_dx = 0x353F;
	emu_get_memory16(emu_cs, 0x00, 0x291) = emu_dx;
	emu_ah = 0x30;
	emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = 0x0070; emu_push(0x000C); Interrupt_DOS();
l__000C:
	emu_bp = emu_get_memory16(emu_ds, 0x00, 0x2);
	emu_bx = emu_get_memory16(emu_ds, 0x00, 0x2C);
	emu_ds = emu_dx;
	emu_get_memory16(emu_ds, 0x00, 0x7D) = emu_ax;
	emu_get_memory16(emu_ds, 0x00, 0x7B) = emu_es;
	emu_get_memory16(emu_ds, 0x00, 0x77) = emu_bx;
	emu_get_memory16(emu_ds, 0x00, 0x91) = emu_bp;
	emu_push(0x0028); emu_Interrupt_Vector_Store();
l__0028:
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x77);
	emu_es = emu_ax;
	emu_xorw(&emu_ax, emu_ax);
	emu_bx = emu_ax;
	emu_di = emu_ax;
	emu_cx = 0x7FFF;
	emu_cld();
l__0037:
	emu_repne_scasb();
	if (emu_cx == 0) goto l__007E;
	emu_incw(&emu_bx);
	emu_cmpb(&emu_get_memory8(emu_es, emu_di, 0x0), emu_al);
	if (emu_get_memory8(emu_es, emu_di, 0x0) != emu_al) goto l__0037;
	emu_orb(&emu_ch, 0x80);
	emu_negw(&emu_cx, emu_cx);
	emu_get_memory16(emu_ds, 0x00, 0x75) = emu_cx;
	emu_cx = 0x2;
	emu_shlw(&emu_bx, emu_cl);
	emu_addw(&emu_bx, 0x10);
	emu_andw(&emu_bx, 0xFFF0);
	emu_get_memory16(emu_ds, 0x00, 0x79) = emu_bx;
	emu_dx = emu_ss;
	emu_subw(&emu_bp, emu_dx);
	emu_di = 0x353F;
	emu_es = emu_di;
	emu_di = emu_get_memory16(emu_es, 0x00, 0x7A68);
	emu_cmpw(&emu_di, 0x200);
	if (emu_di < 0x200) {
		emu_di = 0x200;
		emu_get_memory16(emu_es, 0x00, 0x7A68) = emu_di;
	}
l__0075:
	emu_cl = 0x4;
	emu_shrw(&emu_di, emu_cl);
	emu_incw(&emu_di);
	emu_cmpw(&emu_bp, emu_di);
	if (emu_bp >= emu_di) goto l__0081;
l__007E:
	emu_Error_Abnormal_Termination(); return;
l__0081:
	emu_bx = emu_di;
	emu_addw(&emu_bx, emu_dx);
	emu_get_memory16(emu_ds, 0x00, 0x89) = emu_bx;
	emu_get_memory16(emu_ds, 0x00, 0x8D) = emu_bx;
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x7B);
	emu_subw(&emu_bx, emu_ax);
	emu_es = emu_ax;
	emu_ah = 0x4A;
	emu_push(emu_di);
	emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = 0x0070; emu_push(0x0099); Interrupt_DOS();
l__0099:
	emu_pop(&emu_di);
	emu_shlw(&emu_di, emu_cl);
	emu_cli();
	emu_ss = emu_dx;
	emu_sp = emu_di;
	emu_sti();
	emu_ax = 0x353F;
	emu_es = emu_ax;
	emu_get_memory16(emu_es, 0x00, 0x7A68) = emu_di;
	emu_xorw(&emu_ax, emu_ax);
	emu_es = emu_get_memory16(emu_cs, 0x00, 0x291);
	emu_di = 0x7B8C;
	emu_cx = 0x9AEE;
	emu_subw(&emu_cx, emu_di);
	emu_cld();
	emu_rep_stosb();
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x795A), 0x14);
	if (emu_get_memory16(emu_ds, 0x00, 0x795A) <= 0x14) goto l__010C;
	emu_cmpb(&emu_get_memory8(emu_ds, 0x00, 0x7D), 0x3);
	if (emu_get_memory8(emu_ds, 0x00, 0x7D) < 0x3) goto l__010C;
	if (emu_get_memory8(emu_ds, 0x00, 0x7D) <= 0x3) {
		emu_cmpb(&emu_get_memory8(emu_ds, 0x00, 0x7E), 0x1E);
		if (emu_get_memory8(emu_ds, 0x00, 0x7E) < 0x1E) goto l__010C;
	}
l__00D5:
	emu_ax = 0x5801;
	emu_bx = 0x2;
	emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = 0x0070; emu_push(0x00DD); Interrupt_DOS();
	/* Unresolved jump */ emu_ip = 0x00DD; emu_last_cs = 0x01F7; emu_last_ip = 0x00DD; emu_last_length = 0x0008; emu_last_crc = 0xAD68; emu_call();
l__010C:
	emu_ah = 0x0;
	emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = 0x0070; emu_push(0x0110); Interrupt_Clock();
l__0110:
	emu_get_memory16(emu_ds, 0x00, 0x81) = emu_dx;
	emu_get_memory16(emu_ds, 0x00, 0x83) = emu_cx;
	emu_orb(&emu_al, emu_al);
	if (emu_al != 0) {
		emu_ax = 0x40;
		emu_es = emu_ax;
		emu_bx = 0x70;
		emu_get_memory8(emu_es, emu_bx, 0x0) = 0x1;
	}
l__0128:
	emu_xorw(&emu_bp, emu_bp);
	emu_es = emu_get_memory16(emu_cs, 0x00, 0x291);
	emu_si = 0x7B68;
	emu_di = 0x7B86;
	emu_push(0x0138); f__01F7_01ED_0024_A432();
	f__01F7_0138_0019_8DC5(); return;
}

/**
 * Decompiled function f__01F7_0138_0019_8DC5()
 *
 * @name f__01F7_0138_0019_8DC5
 * @implements 01F7:0138:0019:8DC5 ()
 * @implements 01F7:0151:0006:B889
 *
 * Called From: 01F7:0230:0001:6180
 */
void f__01F7_0138_0019_8DC5()
{
l__0138:
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x73));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x71));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6F));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6D));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6B));
	emu_push(emu_cs); emu_push(0x0151); emu_cs = 0x3480; overlay(0x3480, 0); f__B480_0000_0018_A09B();
l__0151:
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x0157); emu_Terminate_Normal();
	f__01F7_0157_0010_1227(); return;
}

/**
 * Decompiled function f__01F7_0157_0010_1227()
 *
 * @name f__01F7_0157_0010_1227
 * @implements 01F7:0157:0010:1227 ()
 * @implements 01F7:0167:0003:EE77
 *
 * Called From: 01F7:0346:000C:44E6
 */
void f__01F7_0157_0010_1227()
{
l__0157:
	emu_es = emu_get_memory16(emu_cs, 0x00, 0x291);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_si = 0x7B86;
	emu_di = 0x7B8C;
	emu_push(0x0167); f__01F7_0231_0021_40ED();
l__0167:
	emu_pop(&emu_di);
	emu_pop(&emu_si);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function emu_Empty3()
 *
 * @name emu_Empty3
 * @implements 01F7:016A:0001:6580 ()
 *
 * Called From: 01F7:0354:0005:4684
 */
void emu_Empty3()
{
l__016A:

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function emu_Exit()
 *
 * @name emu_Exit
 * @implements 01F7:016B:0009:694B ()
 *
 * Called From: 01F7:036E:0008:E8D2
 */
void emu_Exit()
{
l__016B:
	emu_bp = emu_sp;
	emu_ah = 0x4C;
	emu_al = emu_get_memory8(emu_ss, emu_bp,  0x4);
	emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = 0x0070; emu_push(0x0174); Interrupt_DOS();
	/* Unresolved jump */ emu_ip = 0x0174; emu_last_cs = 0x01F7; emu_last_ip = 0x0174; emu_last_length = 0x0009; emu_last_crc = 0x694B; emu_call();
}

/**
 * Decompiled function emu_Interrupt_Vector_Store()
 *
 * @name emu_Interrupt_Vector_Store
 * @implements 01F7:017D:0006:2BD3 ()
 * @implements 01F7:0183:000D:3CC0
 * @implements 01F7:0190:000D:ACB8
 * @implements 01F7:019D:000D:1CB7
 * @implements 01F7:01AA:0014:EA24
 * @implements 01F7:01BE:0002:A187
 *
 * Called From: 01F7:0025:001C:7156
 */
void emu_Interrupt_Vector_Store()
{
l__017D:
	emu_push(emu_ds);
	emu_ax = 0x3500;
	emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = 0x0070; emu_push(0x0183); Interrupt_DOS();
l__0183:
	emu_get_memory16(emu_ds, 0x00, 0x5B) = emu_bx;
	emu_get_memory16(emu_ds, 0x00, 0x5D) = emu_es;
	emu_ax = 0x3504;
	emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = 0x0070; emu_push(0x0190); Interrupt_DOS();
l__0190:
	emu_get_memory16(emu_ds, 0x00, 0x5F) = emu_bx;
	emu_get_memory16(emu_ds, 0x00, 0x61) = emu_es;
	emu_ax = 0x3505;
	emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = 0x0070; emu_push(0x019D); Interrupt_DOS();
l__019D:
	emu_get_memory16(emu_ds, 0x00, 0x63) = emu_bx;
	emu_get_memory16(emu_ds, 0x00, 0x65) = emu_es;
	emu_ax = 0x3506;
	emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = 0x0070; emu_push(0x01AA); Interrupt_DOS();
l__01AA:
	emu_get_memory16(emu_ds, 0x00, 0x67) = emu_bx;
	emu_get_memory16(emu_ds, 0x00, 0x69) = emu_es;
	emu_ax = 0x2500;
	emu_dx = emu_cs;
	emu_ds = emu_dx;
	emu_dx = 0x174;
	emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = 0x0070; emu_push(0x01BE); Interrupt_DOS();
l__01BE:
	emu_pop(&emu_ds);

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function emu_Interrupt_Vector_Restore()
 *
 * @name emu_Interrupt_Vector_Restore
 * @implements 01F7:01C0:000A:F393 ()
 * @implements 01F7:01CA:000B:5790
 * @implements 01F7:01D5:000B:9693
 * @implements 01F7:01E0:000B:D593
 * @implements 01F7:01EB:0002:A587
 *
 * Called From: 01F7:034F:0005:069B
 */
void emu_Interrupt_Vector_Restore()
{
l__01C0:
	emu_push(emu_ds);
	emu_ax = 0x2500;
	emu_lfp(&emu_ds, &emu_dx, &emu_get_memory16(emu_ds, 0x00, 0x5B));
	emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = 0x0070; emu_push(0x01CA); Interrupt_DOS();
l__01CA:
	emu_pop(&emu_ds);
	emu_push(emu_ds);
	emu_ax = 0x2504;
	emu_lfp(&emu_ds, &emu_dx, &emu_get_memory16(emu_ds, 0x00, 0x5F));
	emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = 0x0070; emu_push(0x01D5); Interrupt_DOS();
l__01D5:
	emu_pop(&emu_ds);
	emu_push(emu_ds);
	emu_ax = 0x2505;
	emu_lfp(&emu_ds, &emu_dx, &emu_get_memory16(emu_ds, 0x00, 0x63));
	emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = 0x0070; emu_push(0x01E0); Interrupt_DOS();
l__01E0:
	emu_pop(&emu_ds);
	emu_push(emu_ds);
	emu_ax = 0x2506;
	emu_lfp(&emu_ds, &emu_dx, &emu_get_memory16(emu_ds, 0x00, 0x67));
	emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = 0x0070; emu_push(0x01EB); Interrupt_DOS();
l__01EB:
	emu_pop(&emu_ds);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__01F7_01ED_0024_A432()
 *
 * @name f__01F7_01ED_0024_A432
 * @implements 01F7:01ED:0024:A432 ()
 * @implements 01F7:01F4:001D:3417
 * @implements 01F7:020C:0005:856E
 * @implements 01F7:0211:0015:AC4F
 * @implements 01F7:0226:0003:A2DA
 * @implements 01F7:0229:0004:BEF7
 * @implements 01F7:0230:0001:6180
 *
 * Called From: 01F7:0135:0010:F7CD
 * Called From: 01F7:0227:0003:A2DA
 * Called From: 01F7:022E:0003:9E5A
 */
void f__01F7_01ED_0024_A432()
{
l__01ED:
	emu_ax = 0x100;
	emu_dx = emu_di;
	emu_bx = emu_si;
l__01F4:
	emu_cmpw(&emu_bx, emu_di);
	if (emu_bx == emu_di) goto l__0211;
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x0), 0xFF);
	if (emu_get_memory8(emu_es, emu_bx, 0x0) != 0xFF) {
		emu_cl = emu_get_memory8(emu_es, emu_bx, 0x1);
		emu_xorb(&emu_ch, emu_ch);
		emu_cmpw(&emu_cx, emu_ax);
		if (emu_cx < emu_ax) {
			emu_ax = emu_cx;
			emu_dx = emu_bx;
		}
	}
l__020C:
	emu_addw(&emu_bx, 0x6);
	goto l__01F4;
l__0211:
	emu_cmpw(&emu_dx, emu_di);
	if (emu_dx == emu_di) goto l__0230;
	emu_bx = emu_dx;
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x0), 0x0);
	emu_get_memory8(emu_es, emu_bx, 0x0) = 0xFF;
	emu_push(emu_es);
	if (emu_flags.zf) { p__01F7_0229_0004_BEF7(); return; }

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_es, emu_bx, 0x2);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_es, emu_bx, 0x4);
	emu_push(0x0226);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x01F74027: f__01F7_4027_0011_8951(); break;
		case 0x217E0D2C: f__217E_0D2C_000B_83A7(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x01F7; emu_last_ip = 0x0222; emu_last_length = 0x0015; emu_last_crc = 0xAC4F;
			emu_call();
			return;
	}
l__0226:
	emu_pop(&emu_es);
	goto l__01ED;
	emu_calln(emu_get_memory16(emu_es, emu_bx, 0x2), 0x022D, 0x0229);
l__0230:

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__01F7_022D_0003_9E5A()
 *
 * @name f__01F7_022D_0003_9E5A
 * @implements 01F7:022D:0003:9E5A ()
 *
 * Called From: 01F7:21DA:0033:2CD8
 */
void f__01F7_022D_0003_9E5A()
{
l__022D:
	emu_pop(&emu_es);
	f__01F7_01ED_0024_A432(); return;
}

/**
 * Decompiled function f__01F7_0231_0021_40ED()
 *
 * @name f__01F7_0231_0021_40ED
 * @implements 01F7:0231:0021:40ED ()
 * @implements 01F7:0237:001B:5A54
 * @implements 01F7:024D:0005:866E
 * @implements 01F7:0252:0015:AC4F
 * @implements 01F7:0267:0003:A35A
 * @implements 01F7:026A:0004:BEF7
 * @implements 01F7:0271:0001:6180
 *
 * Called From: 01F7:0164:0010:1227
 * Called From: 01F7:0268:0003:A35A
 */
void f__01F7_0231_0021_40ED()
{
l__0231:
	emu_ah = 0x0;
	emu_dx = emu_di;
	emu_bx = emu_si;
l__0237:
	emu_cmpw(&emu_bx, emu_di);
	if (emu_bx == emu_di) goto l__0252;
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x0), 0xFF);
	if (emu_get_memory8(emu_es, emu_bx, 0x0) != 0xFF) {
		emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x1), emu_ah);
		if (emu_get_memory8(emu_es, emu_bx, 0x1) >= emu_ah) {
			emu_ah = emu_get_memory8(emu_es, emu_bx, 0x1);
			emu_dx = emu_bx;
		}
	}
l__024D:
	emu_addw(&emu_bx, 0x6);
	goto l__0237;
l__0252:
	emu_cmpw(&emu_dx, emu_di);
	if (emu_dx == emu_di) goto l__0271;
	emu_bx = emu_dx;
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x0), 0x0);
	emu_get_memory8(emu_es, emu_bx, 0x0) = 0xFF;
	emu_push(emu_es);
	if (emu_flags.zf) goto l__026A;

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_es, emu_bx, 0x2);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_es, emu_bx, 0x4);
	emu_push(0x0267);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x217E0198: f__217E_0198_0015_D478(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x01F7; emu_last_ip = 0x0263; emu_last_length = 0x0015; emu_last_crc = 0xAC4F;
			emu_call();
			return;
	}
l__0267:
	emu_pop(&emu_es);
	goto l__0231;
l__026A:

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_es, emu_bx, 0x2);
	emu_push(0x026E);
	switch (emu_ip) {
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x01F7; emu_last_ip = 0x026A; emu_last_length = 0x0004; emu_last_crc = 0xBEF7;
			emu_call();
			return;
	}
	/* Unresolved jump */ emu_ip = 0x026E; emu_last_cs = 0x01F7; emu_last_ip = 0x026E; emu_last_length = 0x0004; emu_last_crc = 0xBEF7; emu_call();
l__0271:

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function emu_Stderr_Write()
 *
 * @name emu_Stderr_Write
 * @implements 01F7:0272:0007:7402 ()
 * @implements 01F7:0279:0001:6180
 *
 * Called From: 01F7:0285:000E:2C9D
 */
void emu_Stderr_Write()
{
l__0272:
	emu_ah = 0x40;
	emu_bx = 0x2;
	emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = 0x0070; emu_push(0x0279); Interrupt_DOS();
l__0279:

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function emu_Error_Abnormal_Termination()
 *
 * @name emu_Error_Abnormal_Termination
 * @implements 01F7:027A:000E:2C9D ()
 * @implements 01F7:0288:0009:FAE0
 *
 * Called From: 01F7:15FE:0003:2B3E
 * Called From: 217E:0D82:0005:67AA
 */
void emu_Error_Abnormal_Termination()
{
l__027A:
	emu_cx = 0x1E;
	emu_dx = 0x3D;
	emu_ds = emu_get_memory16(emu_cs, 0x00, 0x291);
	emu_push(0x0288); emu_Stderr_Write();
l__0288:
	emu_ax = 0x3;
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x0291); emu_Terminate_Error();
	/* Unresolved jump */ emu_ip = 0x0291; emu_last_cs = 0x01F7; emu_last_ip = 0x0291; emu_last_length = 0x0009; emu_last_crc = 0xFAE0; emu_call();
}

/**
 * Decompiled function emu_Print_Error_Overlay()
 *
 * @name emu_Print_Error_Overlay
 * @implements 01F7:02AC:000F:B26A ()
 * @implements 01F7:02BB:000E:6145
 *
 * Called From: 217E:061F:0005:07A7
 */
void emu_Print_Error_Overlay()
{
l__02AC:
	emu_cx = 0x17;
	emu_dx = 0x295;
	emu_push(emu_cs);
	emu_pop(&emu_ds);
	emu_ah = 0x40;
	emu_bx = 0x2;
	emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = 0x0070; emu_push(0x02BB); Interrupt_DOS();
l__02BB:
	emu_ax = 0x4;
	emu_push(emu_ax);
	emu_ax = 0x353F;
	emu_ds = emu_ax;
	emu_push(emu_cs);
	emu_push(0x02C9); emu_Terminate_Error();
	emu_Empty5(); return;
}

/**
 * Decompiled function emu_Empty5()
 *
 * @name emu_Empty5
 * @implements 01F7:02C9:0001:6580 ()
 *
 * Called From: 217E:03D0:001A:D1EE
 * Called From: 217E:0551:0020:2849
 * Called From: 217E:0551:0017:FADA
 */
void emu_Empty5()
{
l__02C9:

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function emu_Drive_Get_Default()
 *
 * @name emu_Drive_Get_Default
 * @implements 01F7:02F7:0007:3850 ()
 * @implements 01F7:02FE:000B:E8C5
 *
 * Called From: 01F7:0435:0010:87B4
 */
void emu_Drive_Get_Default()
{
l__02F7:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_ah = 0x19;
	emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = 0x0070; emu_push(0x02FE); Interrupt_DOS();
l__02FE:
	emu_ah = 0x0;
	emu_incw(&emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_get_memory16(emu_es, emu_bx, 0x0) = emu_ax;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function emu_Drive_Set_Default()
 *
 * @name emu_Drive_Set_Default
 * @implements 01F7:0309:000C:E723 ()
 * @implements 01F7:0315:000A:7DF3
 *
 * Called From: 01F7:0454:0015:6A10
 */
void emu_Drive_Set_Default()
{
l__0309:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_dl = emu_get_memory8(emu_ss, emu_bp,  0x6);
	emu_decb(&emu_dl);
	emu_ah = 0xE;
	emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = 0x0070; emu_push(0x0315); Interrupt_DOS();
l__0315:
	emu_ah = 0x0;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_get_memory16(emu_es, emu_bx, 0x0) = emu_ax;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function emu_Empty4()
 *
 * @name emu_Empty4
 * @implements 01F7:031F:0001:6580 ()
 *
 * Called From: 01F7:0361:000E:F9F7
 * Called From: 01F7:0365:0004:487E
 */
void emu_Empty4()
{
l__031F:

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function emu_Terminate()
 *
 * @name emu_Terminate
 * @implements 01F7:0320:000D:74B7 ()
 * @implements 01F7:032D:0010:9CFF
 * @implements 01F7:033D:000C:44E6
 * @implements 01F7:0349:0004:4860
 * @implements 01F7:034D:0005:069B
 * @implements 01F7:0352:0005:4684
 * @implements 01F7:0357:000E:F9F7
 * @implements 01F7:0365:0004:487E
 * @implements 01F7:0369:0008:E8D2
 * @implements 01F7:0372:0005:4AB4
 *
 * Called From: 01F7:0381:000D:81BB
 * Called From: 01F7:0393:0010:FC59
 */
void emu_Terminate()
{
l__0320:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_si);
	emu_si = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_orw(&emu_si, emu_si);
	if (emu_si != 0) goto l__034D;
	goto l__033D;
l__032D:
	emu_decw(&emu_get_memory16(emu_ds, 0x00, 0x76BA));
	emu_bx = emu_get_memory16(emu_ds, 0x00, 0x76BA);
	emu_cl = 0x2;
	emu_shlw(&emu_bx, emu_cl);

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_ds, emu_bx, 0x9A4E);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_ds, emu_bx, 0x9A50);
	emu_push(0x033D);
	switch ((emu_cs << 16) + emu_ip) {
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x01F7; emu_last_ip = 0x0339; emu_last_length = 0x0010; emu_last_crc = 0x9CFF;
			emu_call();
			return;
	}
l__033D:
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x76BA), 0x0);
	if (emu_get_memory16(emu_ds, 0x00, 0x76BA) != 0x0) goto l__032D;
	emu_push(emu_cs);
	emu_push(0x0349); f__01F7_0157_0010_1227();
l__0349:

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_ds, 0x00, 0x77BE);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_ds, 0x00, 0x77C0);
	emu_push(0x034D);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x01F74484: f__01F7_4484_0014_5939(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x01F7; emu_last_ip = 0x0349; emu_last_length = 0x0004; emu_last_crc = 0x4860;
			emu_call();
			return;
	}
l__034D:
	emu_push(emu_cs);
	emu_push(0x0352); emu_Interrupt_Vector_Restore();
l__0352:
	emu_push(emu_cs);
	emu_push(0x0357); emu_Empty3();
l__0357:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp,  0x6), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp,  0x6) != 0x0) goto l__0372;
	emu_orw(&emu_si, emu_si);
	if (emu_si != 0) goto l__0369;

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_ds, 0x00, 0x77C2);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_ds, 0x00, 0x77C4);
	emu_push(0x0365);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x01F7031F: emu_Empty4(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x01F7; emu_last_ip = 0x0361; emu_last_length = 0x000E; emu_last_crc = 0xF9F7;
			emu_call();
			return;
	}
l__0365:

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_ds, 0x00, 0x77C6);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_ds, 0x00, 0x77C8);
	emu_push(0x0369);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x01F7031F: emu_Empty4(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x01F7; emu_last_ip = 0x0365; emu_last_length = 0x0004; emu_last_crc = 0x487E;
			emu_call();
			return;
	}
l__0369:
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x4));
	emu_push(emu_cs);
	emu_push(0x0371); emu_Exit();
	/* Unresolved jump */ emu_ip = 0x0371; emu_last_cs = 0x01F7; emu_last_ip = 0x0371; emu_last_length = 0x0008; emu_last_crc = 0xE8D2; emu_call();
l__0372:
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_sp += 6;
	return;
}

/**
 * Decompiled function emu_Terminate_Normal()
 *
 * @name emu_Terminate_Normal
 * @implements 01F7:0377:000D:81BB ()
 * @implements 01F7:0384:0002:2597
 *
 * Called From: 01F7:0154:0006:B889
 * Called From: 1423:03B9:0008:C68B
 * Called From: 1423:0447:0008:C68B
 * Called From: B480:002E:000A:50E7
 * Called From: B480:01E1:0009:F557
 * Called From: B495:1987:0008:C68B
 * Called From: B4B8:1D65:0008:C68B
 * Called From: B511:0084:0008:C68B
 * Called From: B511:0485:0008:C68B
 * Called From: B511:0702:0008:C68B
 * Called From: B53B:0317:0009:F157
 */
void emu_Terminate_Normal()
{
l__0377:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(0x0384); emu_Terminate();
l__0384:
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function emu_Terminate_Error()
 *
 * @name emu_Terminate_Error
 * @implements 01F7:0386:0010:FC59 ()
 *
 * Called From: 01F7:028E:0009:FAE0
 * Called From: 01F7:02C6:000E:6145
 */
void emu_Terminate_Error()
{
l__0386:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(0x0396); emu_Terminate();
	/* Unresolved jump */ emu_ip = 0x0396; emu_last_cs = 0x01F7; emu_last_ip = 0x0396; emu_last_length = 0x0010; emu_last_crc = 0xFC59; emu_call();
}

/**
 * Decompiled function emu_Tools_MulCSIP_csip()
 *
 * @name emu_Tools_MulCSIP_csip
 * @implements 01F7:03B2:0017:7CBE ()
 * @implements 01F7:03BB:000E:AF63
 * @implements 01F7:03C2:0007:1560
 *
 * Called From: 0972:0F6E:0036:4859
 * Called From: 10E4:0DE7:0039:BC66
 * Called From: 1587:015E:0010:4D09
 * Called From: 2537:0040:0011:C388
 * Called From: B491:0A65:0018:9AB5
 * Called From: B4F2:0F86:0023:8DB1
 * Called From: B4F2:11F5:0018:1D91
 * Called From: B4F2:1203:000E:5317
 * Called From: B520:08B6:0022:663C
 * Called From: B520:094C:0033:733E
 * Called From: B520:09E3:003E:D22C
 * Called From: B52A:00ED:0019:2572
 */
void emu_Tools_MulCSIP_csip()
{
l__03B2:
	emu_push(emu_si);
	emu_xchgw(&emu_ax, &emu_si);
	emu_xchgw(&emu_ax, &emu_dx);
	emu_testw(&emu_ax, emu_ax);
	if ((emu_ax & emu_ax) != 0) {
		emu_mulw(&emu_ax, emu_bx);
	}
l__03BB:
	if (emu_cx == 0) goto l__03C2;
	emu_xchgw(&emu_ax, &emu_cx);
	emu_mulw(&emu_ax, emu_si);
	emu_addw(&emu_ax, emu_cx);
l__03C2:
	emu_xchgw(&emu_ax, &emu_si);
	emu_mulw(&emu_ax, emu_bx);
	emu_addw(&emu_dx, emu_si);
	emu_pop(&emu_si);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function emu_Tools_MemcopyCX()
 *
 * @name emu_Tools_MemcopyCX
 * @implements 01F7:03C9:001C:11C7 ()
 *
 * Called From: 10E4:0F9D:0088:7622
 * Called From: B4B8:0A33:001A:E094
 * Called From: B4F2:0E2A:0019:86E9
 */
void emu_Tools_MemcopyCX()
{
l__03C9:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_si);
	emu_push(emu_di);
	emu_push(emu_ds);
	emu_lfp(&emu_ds, &emu_si, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_lfp(&emu_es, &emu_di, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_cld();
	emu_shrw(&emu_cx, 0x1);
	emu_rep_movsw(emu_ds);
	emu_adcw(&emu_cx, emu_cx);
	emu_rep_movsb(emu_ds);
	emu_pop(&emu_ds);
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	emu_sp += 8;
	return;
}

/**
 * Decompiled function emu_Drive_Get_Curdir()
 *
 * @name emu_Drive_Get_Curdir
 * @implements 01F7:03E5:000F:055B ()
 * @implements 01F7:03F4:0007:2226
 * @implements 01F7:03FB:0004:9C18
 * @implements 01F7:03FF:0003:2E57
 *
 * Called From: 01F7:2795:001A:E421
 */
void emu_Drive_Get_Curdir()
{
l__03E5:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_si);
	emu_push(emu_ds);
	emu_ah = 0x47;
	emu_dl = emu_get_memory8(emu_ss, emu_bp,  0x6);
	emu_lfp(&emu_ds, &emu_si, &emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = 0x0070; emu_push(0x03F4); Interrupt_DOS();
l__03F4:
	emu_pop(&emu_ds);
	if (emu_flags.cf) goto l__03FB;
	emu_xorw(&emu_ax, emu_ax);
	goto l__03FF;
l__03FB:
	emu_push(emu_ax);
	emu_push(0x03FF); f__01F7_0675_0020_D684();
l__03FF:
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function emu_Date_Get()
 *
 * @name emu_Date_Get
 * @implements 01F7:0402:0007:3E30 ()
 * @implements 01F7:0409:000C:8D5C
 *
 * Called From: 01F7:104C:0010:4132
 */
void emu_Date_Get()
{
l__0402:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_ah = 0x2A;
	emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = 0x0070; emu_push(0x0409); Interrupt_DOS();
l__0409:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_get_memory16(emu_es, emu_bx, 0x0) = emu_cx;
	emu_get_memory16(emu_es, emu_bx, 0x2) = emu_dx;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function emu_Time_Get()
 *
 * @name emu_Time_Get
 * @implements 01F7:0415:0007:3EF0 ()
 * @implements 01F7:041C:000C:8D5C
 *
 * Called From: 01F7:1058:000C:A782
 */
void emu_Time_Get()
{
l__0415:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_ah = 0x2C;
	emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = 0x0070; emu_push(0x041C); Interrupt_DOS();
l__041C:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_get_memory16(emu_es, emu_bx, 0x0) = emu_cx;
	emu_get_memory16(emu_es, emu_bx, 0x2) = emu_dx;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function emu_Drive_Get_Default_Wrapper()
 *
 * @name emu_Drive_Get_Default_Wrapper
 * @implements 01F7:0428:0010:87B4 ()
 * @implements 01F7:0438:000A:6E9C
 *
 * Called From: 01F7:277B:000F:E56B
 * Called From: 1DB6:0061:0011:84E2
 * Called From: 1FB5:000F:000F:62CC
 * Called From: 261F:0058:0005:44EF
 */
void emu_Drive_Get_Default_Wrapper()
{
l__0428:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x2);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x2);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x0438); emu_Drive_Get_Default();
l__0438:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x2);
	emu_decw(&emu_ax);
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function emu_Drive_Set_Default_Wrapper()
 *
 * @name emu_Drive_Set_Default_Wrapper
 * @implements 01F7:0442:0015:6A10 ()
 * @implements 01F7:0457:000A:B17A
 *
 * Called From: 1DB6:016F:0017:0927
 * Called From: 1FB5:0031:0012:C761
 * Called From: 1FB5:16C3:000E:80D8
 * Called From: 261F:0160:0008:F306
 */
void emu_Drive_Set_Default_Wrapper()
{
l__0442:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x2);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x2);
	emu_push(emu_ax);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_incw(&emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x0457); emu_Drive_Set_Default();
l__0457:
	emu_addw(&emu_sp, 0x6);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x2);
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function emu_Drive_Get_Free_Space()
 *
 * @name emu_Drive_Get_Free_Space
 * @implements 01F7:0494:000D:EF57 ()
 * @implements 01F7:04A1:001C:75A1
 *
 * Called From: B4F2:11DD:0013:5635
 */
void emu_Drive_Get_Free_Space()
{
l__0494:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x2);
	emu_ah = 0x36;
	emu_dl = emu_get_memory8(emu_ss, emu_bp,  0x6);
	emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = 0x0070; emu_push(0x04A1); Interrupt_DOS();
l__04A1:
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_bx;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_get_memory16(emu_es, emu_bx, 0x6) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x2);
	emu_get_memory16(emu_es, emu_bx, 0x0) = emu_ax;
	emu_get_memory16(emu_es, emu_bx, 0x2) = emu_dx;
	emu_get_memory16(emu_es, emu_bx, 0x4) = emu_cx;
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function emu_Interrupt_Vector_Get()
 *
 * @name emu_Interrupt_Vector_Get
 * @implements 01F7:04BD:000A:984A ()
 * @implements 01F7:04C7:0005:F947
 *
 * Called From: 1DB6:0016:000C:BA0F
 */
void emu_Interrupt_Vector_Get()
{
l__04BD:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_ah = 0x35;
	emu_al = emu_get_memory8(emu_ss, emu_bp,  0x6);
	emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = 0x0070; emu_push(0x04C7); Interrupt_DOS();
l__04C7:
	emu_xchgw(&emu_ax, &emu_bx);
	emu_dx = emu_es;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function emu_Interrupt_Vector_Set()
 *
 * @name emu_Interrupt_Vector_Set
 * @implements 01F7:04CC:000E:D711 ()
 * @implements 01F7:04DA:0003:2677
 *
 * Called From: 01F7:1F02:0027:0D8F
 * Called From: 1DB6:0037:0021:7587
 * Called From: B500:008E:0011:8B05
 */
void emu_Interrupt_Vector_Set()
{
l__04CC:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_ah = 0x25;
	emu_al = emu_get_memory8(emu_ss, emu_bp,  0x6);
	emu_push(emu_ds);
	emu_lfp(&emu_ds, &emu_dx, &emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = 0x0070; emu_push(0x04DA); Interrupt_DOS();
l__04DA:
	emu_pop(&emu_ds);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function emu_Tools_Divd_Wrapper()
 *
 * @name emu_Tools_Divd_Wrapper
 * @implements 01F7:04DD:0007:D823 ()
 *
 * Called From: 01F7:3201:0017:66AF
 * Called From: 01F7:3222:0021:9846
 */
void emu_Tools_Divd_Wrapper()
{
l__04DD:
	emu_pop(&emu_cx);
	emu_push(emu_cs);
	emu_push(emu_cx);
	emu_Tools_Divd(); return;
}

/**
 * Decompiled function emu_Tools_Divd()
 *
 * @name emu_Tools_Divd
 * @implements 01F7:04E0:0004:E219 ()
 * @implements 01F7:04FA:0084:C87E
 * @implements 01F7:0519:0065:1FE9
 * @implements 01F7:052D:0051:4101
 * @implements 01F7:053B:0043:C7D2
 * @implements 01F7:0545:0039:0103
 * @implements 01F7:0557:0027:8CB6
 * @implements 01F7:055C:0022:9834
 * @implements 01F7:056B:0013:BA82
 * @implements 01F7:0578:0006:B7B6
 * @implements 01F7:057E:000D:FA69
 * @implements 01F7:0587:0004:9CF9
 *
 * Called From: 10E4:0DEE:0007:8446
 * Called From: 15C2:04AD:003C:7D00
 * Called From: 15C2:069D:0027:82B4
 * Called From: 2537:0047:0007:8446
 * Called From: B495:17EB:002F:FBC1
 * Called From: B495:183B:002F:FBC1
 * Called From: B4C1:0093:0007:8446
 * Called From: B4C1:00BA:0007:8446
 * Called From: B4ED:04F8:0020:1485
 * Called From: B4ED:04F8:000E:C186
 * Called From: B4ED:04F8:000B:56E0
 * Called From: B4ED:0540:0018:173C
 * Called From: B50B:0553:0036:7E4C
 * Called From: B518:0020:0025:FC16
 */
void emu_Tools_Divd()
{
l__04E0:
	emu_xorw(&emu_cx, emu_cx);
	goto l__04FA;
l__04FA:
	emu_push(emu_bp);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_bp = emu_sp;
	emu_di = emu_cx;
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0xA);
	emu_dx = emu_get_memory16(emu_ss, emu_bp,  0xC);
	emu_bx = emu_get_memory16(emu_ss, emu_bp,  0xE);
	emu_cx = emu_get_memory16(emu_ss, emu_bp,  0x10);
	emu_orw(&emu_cx, emu_cx);
	if (emu_cx == 0) {
		emu_orw(&emu_dx, emu_dx);
		if (emu_dx == 0) goto l__057E;
		emu_orw(&emu_bx, emu_bx);
		if (emu_bx == 0) goto l__057E;
	}
l__0519:
	emu_testw(&emu_di, 0x1);
	if ((emu_di & 0x1) != 0) goto l__053B;
	emu_orw(&emu_dx, emu_dx);
	if (emu_flags.sf) {
		emu_negw(&emu_dx, emu_dx);
		emu_negw(&emu_ax, emu_ax);
		emu_sbbw(&emu_dx, 0x0);
		emu_orw(&emu_di, 0xC);
	}
l__052D:
	emu_orw(&emu_cx, emu_cx);
	if (emu_flags.sf) {
		emu_negw(&emu_cx, emu_cx);
		emu_negw(&emu_bx, emu_bx);
		emu_sbbw(&emu_cx, 0x0);
		emu_xorw(&emu_di, 0x4);
	}
l__053B:
	emu_bp = emu_cx;
	emu_cx = 0x20;
	emu_push(emu_di);
	emu_xorw(&emu_di, emu_di);
	emu_xorw(&emu_si, emu_si);
l__0545:
	emu_shlw(&emu_ax, 0x1);
	emu_rclw(&emu_dx, 0x1);
	emu_rclw(&emu_si, 0x1);
	emu_rclw(&emu_di, 0x1);
	emu_cmpw(&emu_di, emu_bp);
	if (emu_di < emu_bp) goto l__055C;
	if (emu_di <= emu_bp) {
		emu_cmpw(&emu_si, emu_bx);
		if (emu_si < emu_bx) goto l__055C;
	}
l__0557:
	emu_subw(&emu_si, emu_bx);
	emu_sbbw(&emu_di, emu_bp);
	emu_incw(&emu_ax);
l__055C:
	if (--emu_cx != 0) goto l__0545;
	emu_pop(&emu_bx);
	emu_testw(&emu_bx, 0x2);
	if ((emu_bx & 0x2) != 0) {
		emu_ax = emu_si;
		emu_dx = emu_di;
		emu_shrw(&emu_bx, 0x1);
	}
l__056B:
	emu_testw(&emu_bx, 0x4);
	if ((emu_bx & 0x4) != 0) {
		emu_negw(&emu_dx, emu_dx);
		emu_negw(&emu_ax, emu_ax);
		emu_sbbw(&emu_dx, 0x0);
	}
l__0578:
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	emu_sp += 8;
	return;
l__057E:
	emu_divw(&emu_ax, emu_bx);
	emu_testw(&emu_di, 0x2);
	if ((emu_di & 0x2) != 0) {
		emu_xchgw(&emu_ax, &emu_dx);
	}
l__0587:
	emu_xorw(&emu_dx, emu_dx);
	goto l__0578;
}

/**
 * Decompiled function emu_Tools_Divd2()
 *
 * @name emu_Tools_Divd2
 * @implements 01F7:04E7:0005:D2F2 ()
 * @implements 01F7:04FA:0084:C87E
 * @implements 01F7:0519:0065:1FE9
 * @implements 01F7:052D:0051:4101
 * @implements 01F7:053B:0043:C7D2
 * @implements 01F7:0545:0039:0103
 * @implements 01F7:0557:0027:8CB6
 * @implements 01F7:055C:0022:9834
 * @implements 01F7:056B:0013:BA82
 * @implements 01F7:0578:0006:B7B6
 * @implements 01F7:057E:000D:FA69
 * @implements 01F7:0587:0004:9CF9
 *
 * Called From: 1587:014E:000A:DCE4
 */
void emu_Tools_Divd2()
{
l__04E7:
	emu_cx = 0x1;
	goto l__04FA;
l__04FA:
	emu_push(emu_bp);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_bp = emu_sp;
	emu_di = emu_cx;
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0xA);
	emu_dx = emu_get_memory16(emu_ss, emu_bp,  0xC);
	emu_bx = emu_get_memory16(emu_ss, emu_bp,  0xE);
	emu_cx = emu_get_memory16(emu_ss, emu_bp,  0x10);
	emu_orw(&emu_cx, emu_cx);
	if (emu_cx == 0) {
		emu_orw(&emu_dx, emu_dx);
		if (emu_dx == 0) goto l__057E;
		emu_orw(&emu_bx, emu_bx);
		if (emu_bx == 0) goto l__057E;
	}
l__0519:
	emu_testw(&emu_di, 0x1);
	if ((emu_di & 0x1) != 0) goto l__053B;
	emu_orw(&emu_dx, emu_dx);
	if (emu_flags.sf) {
		emu_negw(&emu_dx, emu_dx);
		emu_negw(&emu_ax, emu_ax);
		emu_sbbw(&emu_dx, 0x0);
		emu_orw(&emu_di, 0xC);
	}
l__052D:
	emu_orw(&emu_cx, emu_cx);
	if (emu_flags.sf) {
		emu_negw(&emu_cx, emu_cx);
		emu_negw(&emu_bx, emu_bx);
		emu_sbbw(&emu_cx, 0x0);
		emu_xorw(&emu_di, 0x4);
	}
l__053B:
	emu_bp = emu_cx;
	emu_cx = 0x20;
	emu_push(emu_di);
	emu_xorw(&emu_di, emu_di);
	emu_xorw(&emu_si, emu_si);
l__0545:
	emu_shlw(&emu_ax, 0x1);
	emu_rclw(&emu_dx, 0x1);
	emu_rclw(&emu_si, 0x1);
	emu_rclw(&emu_di, 0x1);
	emu_cmpw(&emu_di, emu_bp);
	if (emu_di < emu_bp) goto l__055C;
	if (emu_di <= emu_bp) {
		emu_cmpw(&emu_si, emu_bx);
		if (emu_si < emu_bx) goto l__055C;
	}
l__0557:
	emu_subw(&emu_si, emu_bx);
	emu_sbbw(&emu_di, emu_bp);
	emu_incw(&emu_ax);
l__055C:
	if (--emu_cx != 0) goto l__0545;
	emu_pop(&emu_bx);
	emu_testw(&emu_bx, 0x2);
	if ((emu_bx & 0x2) != 0) {
		emu_ax = emu_si;
		emu_dx = emu_di;
		emu_shrw(&emu_bx, 0x1);
	}
l__056B:
	emu_testw(&emu_bx, 0x4);
	if ((emu_bx & 0x4) != 0) {
		emu_negw(&emu_dx, emu_dx);
		emu_negw(&emu_ax, emu_ax);
		emu_sbbw(&emu_dx, 0x0);
	}
l__0578:
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	emu_sp += 8;
	return;
l__057E:
	emu_divw(&emu_ax, emu_bx);
	emu_testw(&emu_di, 0x2);
	if ((emu_di & 0x2) != 0) {
		emu_xchgw(&emu_ax, &emu_dx);
	}
l__0587:
	emu_xorw(&emu_dx, emu_dx);
	goto l__0578;
}

/**
 * Decompiled function emu_Tools_Shld_Wrapper()
 *
 * @name emu_Tools_Shld_Wrapper
 * @implements 01F7:058B:0018:D9CF ()
 *
 * Called From: 01F7:1AF5:0010:0EEE
 */
void emu_Tools_Shld_Wrapper()
{
l__058B:
	emu_pop(&emu_bx);
	emu_push(emu_cs);
	emu_push(emu_bx);
	emu_Tools_Shld(); return;
}

/**
 * Decompiled function emu_Tools_AddCSIP_Wrapper()
 *
 * @name emu_Tools_AddCSIP_Wrapper
 * @implements 01F7:05ED:0013:E7F6 ()
 *
 * Called From: 01F7:1B26:0010:8C34
 */
void emu_Tools_AddCSIP_Wrapper()
{
l__05ED:
	emu_pop(&emu_es);
	emu_push(emu_cs);
	emu_push(emu_es);
	emu_Tools_AddCSIP(); return;
}

/**
 * Decompiled function emu_Tools_AddCSIP()
 *
 * @name emu_Tools_AddCSIP
 * @implements 01F7:05F0:0010:6415 ()
 * @implements 01F7:0600:001C:45D7
 * @implements 01F7:0608:0014:B939
 * @implements 01F7:062F:001E:7902
 * @implements 01F7:0637:0016:C68D
 *
 * Called From: 25C4:01CF:003F:BA75
 */
void emu_Tools_AddCSIP()
{
l__05F0:
	emu_orw(&emu_cx, emu_cx);
	if (!(emu_flags.sf != emu_flags.of)) goto l__0600;
	emu_notw(&emu_bx, emu_bx);
	emu_notw(&emu_cx, emu_cx);
	emu_addw(&emu_bx, 0x1);
	emu_adcw(&emu_cx, 0x0);
	goto l__062F;
l__0600:
	emu_addw(&emu_ax, emu_bx);
	if (emu_flags.cf) {
		emu_addw(&emu_dx, 0x1000);
	}
l__0608:
	emu_ch = emu_cl;
	emu_cl = 0x4;
	emu_shlb(&emu_ch, emu_cl);
	emu_addb(&emu_dh, emu_ch);
	emu_ch = emu_al;
	emu_shrw(&emu_ax, emu_cl);
	emu_addw(&emu_dx, emu_ax);
	emu_al = emu_ch;
	emu_andw(&emu_ax, 0xF);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
l__062F:
	emu_subw(&emu_ax, emu_bx);
	if (emu_flags.cf) {
		emu_subw(&emu_dx, 0x1000);
	}
l__0637:
	emu_bh = emu_cl;
	emu_cl = 0x4;
	emu_shlb(&emu_bh, emu_cl);
	emu_xorb(&emu_bl, emu_bl);
	emu_subw(&emu_dx, emu_bx);
	emu_ch = emu_al;
	emu_shrw(&emu_ax, emu_cl);
	emu_addw(&emu_dx, emu_ax);
	emu_al = emu_ch;
	emu_andw(&emu_ax, 0xF);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function emu_Tools_SubCSIP()
 *
 * @name emu_Tools_SubCSIP
 * @implements 01F7:064D:0028:3537 ()
 *
 * Called From: 01F7:1B92:0022:8ADB
 */
void emu_Tools_SubCSIP()
{
l__064D:
	emu_pop(&emu_es);
	emu_push(emu_cs);
	emu_push(emu_es);
	emu_push(emu_di);
	emu_di = emu_cx;
	emu_ch = emu_dh;
	emu_cl = 0x4;
	emu_shlw(&emu_dx, emu_cl);
	emu_shrb(&emu_ch, emu_cl);
	emu_addw(&emu_dx, emu_ax);
	emu_adcb(&emu_ch, 0x0);
	emu_ax = emu_di;
	emu_shlw(&emu_di, emu_cl);
	emu_shrb(&emu_ah, emu_cl);
	emu_addw(&emu_bx, emu_di);
	emu_adcb(&emu_ah, 0x0);
	emu_subw(&emu_dx, emu_bx);
	emu_sbbb(&emu_ch, emu_ah);
	emu_al = emu_ch;
	emu_ax = (int8)emu_al;
	emu_xchgw(&emu_ax, &emu_dx);
	emu_pop(&emu_di);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__01F7_0675_0020_D684()
 *
 * @name f__01F7_0675_0020_D684
 * @implements 01F7:0675:0020:D684 ()
 * @implements 01F7:0685:0010:F6A9
 * @implements 01F7:0688:000D:5817
 * @implements 01F7:0695:0019:5985
 * @implements 01F7:06A2:000C:D81E
 *
 * Called From: 01F7:03FC:0004:9C18
 * Called From: 01F7:0796:0004:6232
 * Called From: 01F7:0835:0004:220A
 * Called From: 01F7:0835:0003:220F
 * Called From: 01F7:2070:0033:F011
 * Called From: 01F7:2300:0004:EC99
 * Called From: 01F7:23DC:0013:6B52
 * Called From: 01F7:240D:0004:2C1C
 * Called From: 01F7:29ED:0004:3324
 * Called From: 01F7:2BBD:0004:3028
 * Called From: 01F7:3298:0018:6655
 * Called From: 01F7:447C:0004:FDB8
 */
void f__01F7_0675_0020_D684()
{
l__0675:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_si);
	emu_si = emu_get_memory16(emu_ss, emu_bp,  0x4);
	emu_orw(&emu_si, emu_si);
	if ((emu_flags.sf != emu_flags.of)) goto l__0695;
	emu_cmpw(&emu_si, 0x58);
	if ((int16)emu_si <= (int16)0x58) goto l__0688;
l__0685:
	emu_si = 0x57;
l__0688:
	emu_get_memory16(emu_ds, 0x00, 0x7988) = emu_si;
	emu_al = emu_get_memory8(emu_ds, emu_si, 0x798A);
	emu_ax = (int8)emu_al;
	emu_si = emu_ax;
	goto l__06A2;
l__0695:
	emu_negw(&emu_si, emu_si);
	emu_cmpw(&emu_si, 0x30);
	if ((int16)emu_si > (int16)0x30) goto l__0685;
	emu_get_memory16(emu_ds, 0x00, 0x7988) = 0xFFFF;
l__06A2:
	emu_get_memory16(emu_ds, 0x00, 0x7F) = emu_si;
	emu_ax = 0xFFFF;
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_sp += 2;
	return;
}

/**
 * Decompiled function emu_Device_Get_Info()
 *
 * @name emu_Device_Get_Info
 * @implements 01F7:06C0:000B:9E93 ()
 * @implements 01F7:06CB:0006:6CB5
 *
 * Called From: 01F7:0F8D:0042:0225
 * Called From: 01F7:0FC9:000D:08B8
 */
void emu_Device_Get_Info()
{
l__06C0:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_ax = 0x4400;
	emu_bx = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = 0x0070; emu_push(0x06CB); Interrupt_DOS();
l__06CB:
	emu_xchgw(&emu_ax, &emu_dx);
	emu_andw(&emu_ax, 0x80);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__01F7_06D1_004A_EF77()
 *
 * @name f__01F7_06D1_004A_EF77
 * @implements 01F7:06D1:004A:EF77 ()
 * @implements 01F7:0706:0015:2486
 * @implements 01F7:070B:0010:9311
 * @implements 01F7:071B:0020:A7B0
 * @implements 01F7:0723:0018:9E13
 * @implements 01F7:072F:000C:80AB
 * @implements 01F7:073B:0018:DB3E
 * @implements 01F7:073E:0015:C9B2
 * @implements 01F7:0741:0012:F12C
 *
 * Called From: 01F7:133F:0014:99C6
 * Called From: 01F7:133F:0010:2231
 */
void f__01F7_06D1_004A_EF77()
{
l__06D1:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x22);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_push(emu_es);
	emu_lfp(&emu_es, &emu_di, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_bx = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_cmpw(&emu_bx, 0x24);
	if (emu_bx > 0x24) goto l__0741;
	emu_cmpb(&emu_bl, 0x2);
	if (emu_bl < 0x2) goto l__0741;
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0xE);
	emu_cx = emu_get_memory16(emu_ss, emu_bp,  0x10);
	emu_orw(&emu_cx, emu_cx);
	if ((emu_flags.sf != emu_flags.of)) {
		emu_cmpb(&emu_get_memory8(emu_ss, emu_bp,  0x6), 0x0);
		if (emu_get_memory8(emu_ss, emu_bp,  0x6) != 0x0) {
			emu_get_memory8(emu_es, emu_di, 0x0) = 0x2D;
			emu_incw(&emu_di);
			emu_negw(&emu_cx, emu_cx);
			emu_negw(&emu_ax, emu_ax);
			emu_sbbw(&emu_cx, 0x0);
		}
	}
l__0706:
	emu_movw(&emu_si, emu_bp - 0x22);
	if (emu_cx == 0) goto l__071B;
l__070B:
	emu_xchgw(&emu_ax, &emu_cx);
	emu_subw(&emu_dx, emu_dx);
	emu_divw(&emu_ax, emu_bx);
	emu_xchgw(&emu_ax, &emu_cx);
	emu_divw(&emu_ax, emu_bx);
	emu_get_memory8(emu_ss, emu_si, 0x0) = emu_dl;
	emu_incw(&emu_si);
	if (emu_cx == 0) goto l__0723;
	goto l__070B;
l__071B:
	emu_subw(&emu_dx, emu_dx);
	emu_divw(&emu_ax, emu_bx);
	emu_get_memory8(emu_ss, emu_si, 0x0) = emu_dl;
	emu_incw(&emu_si);
l__0723:
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax != 0) goto l__071B;
	emu_movw(&emu_cx, emu_bp - 0x22);
	emu_negw(&emu_cx, emu_cx);
	emu_addw(&emu_cx, emu_si);
	emu_cld();
l__072F:
	emu_decw(&emu_si);
	emu_al = emu_get_memory8(emu_ss, emu_si, 0x0);
	emu_subb(&emu_al, 0xA);
	if (!emu_flags.cf) goto l__073B;
	emu_addb(&emu_al, 0x3A);
	goto l__073E;
l__073B:
	emu_addb(&emu_al, emu_get_memory8(emu_ss, emu_bp,  0x4));
l__073E:
	emu_stosb();
	if (--emu_cx != 0) goto l__072F;
l__0741:
	emu_al = 0x0;
	emu_stosb();
	emu_pop(&emu_es);
	emu_dx = emu_get_memory16(emu_ss, emu_bp,  0xC);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0xA);
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_sp += 14;
	return;
}

/**
 * Decompiled function emu_File_Seek()
 *
 * @name emu_File_Seek
 * @implements 01F7:0773:001E:D7DA ()
 * @implements 01F7:0791:0004:E2FD
 * @implements 01F7:0795:0004:6232
 * @implements 01F7:0799:0003:36B7
 * @implements 01F7:079A:0002:2597
 *
 * Called From: 1FB5:00A7:001B:4066
 */
void emu_File_Seek()
{
l__0773:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_bx = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_shlw(&emu_bx, 0x1);
	emu_andw(&emu_get_memory16(emu_ds, emu_bx, 0x795C), 0xFDFF);
	emu_ah = 0x42;
	emu_al = emu_get_memory8(emu_ss, emu_bp,  0xC);
	emu_bx = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_cx = emu_get_memory16(emu_ss, emu_bp,  0xA);
	emu_dx = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = 0x0070; emu_push(0x0791); Interrupt_DOS();
l__0791:
	if (emu_flags.cf) goto l__0795;
	goto l__079A;
l__0795:
	emu_push(emu_ax);
	emu_push(0x0799); f__01F7_0675_0020_D684();
l__0799:
	emu_cwd();
l__079A:
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function emu_Tools_MulCSIP_ip()
 *
 * @name emu_Tools_MulCSIP_ip
 * @implements 01F7:079C:0017:78BE ()
 * @implements 01F7:07A5:000E:AB63
 * @implements 01F7:07AC:0007:1160
 *
 * Called From: 01F7:07F3:0011:F68B
 * Called From: 01F7:3D34:0032:1561
 * Called From: 01F7:3D4D:0019:225A
 * Called From: 01F7:3DE0:000F:9FFD
 * Called From: 01F7:3DFB:001B:E08E
 */
void emu_Tools_MulCSIP_ip()
{
l__079C:
	emu_push(emu_si);
	emu_xchgw(&emu_ax, &emu_si);
	emu_xchgw(&emu_ax, &emu_dx);
	emu_testw(&emu_ax, emu_ax);
	if ((emu_ax & emu_ax) != 0) {
		emu_mulw(&emu_ax, emu_bx);
	}
l__07A5:
	if (emu_cx == 0) goto l__07AC;
	emu_xchgw(&emu_ax, &emu_cx);
	emu_mulw(&emu_ax, emu_si);
	emu_addw(&emu_ax, emu_cx);
l__07AC:
	emu_xchgw(&emu_ax, &emu_si);
	emu_mulw(&emu_ax, emu_bx);
	emu_addw(&emu_dx, emu_si);
	emu_pop(&emu_si);

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function emu_Tools_Cmpd()
 *
 * @name emu_Tools_Cmpd
 * @implements 01F7:07B3:0021:4ED6 ()
 * @implements 01F7:07D3:0001:6180
 *
 * Called From: 01F7:1ABA:0014:FC63
 * Called From: 01F7:1ACD:0013:C371
 * Called From: 01F7:1B37:0011:30D4
 * Called From: 01F7:1B4A:0013:4292
 * Called From: 01F7:2978:0015:53C0
 */
void emu_Tools_Cmpd()
{
l__07B3:
	emu_push(emu_cx);
	emu_ch = emu_al;
	emu_cl = 0x4;
	emu_shrw(&emu_ax, emu_cl);
	emu_addw(&emu_dx, emu_ax);
	emu_al = emu_ch;
	emu_ah = emu_bl;
	emu_shrw(&emu_bx, emu_cl);
	emu_pop(&emu_cx);
	emu_addw(&emu_cx, emu_bx);
	emu_bl = emu_ah;
	emu_andw(&emu_ax, 0xF);
	emu_andw(&emu_bx, 0xF);
	emu_cmpw(&emu_dx, emu_cx);
	if (emu_dx == emu_cx) {
		emu_cmpw(&emu_ax, emu_bx);
	}
l__07D3:

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function emu_Tools_Var79E4_Init()
 *
 * @name emu_Tools_Var79E4_Init
 * @implements 01F7:07D4:0011:370E ()
 *
 * Called From: 257A:008B:000B:C6B2
 * Called From: 257A:00F8:000F:F3DA
 * Called From: 25C4:03DB:0008:9D33
 * Called From: B495:180E:0023:3B9E
 * Called From: B495:185E:0023:3B9E
 */
void emu_Tools_Var79E4_Init()
{
l__07D4:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_get_memory16(emu_ds, 0x00, 0x79E6) = 0x0;
	emu_get_memory16(emu_ds, 0x00, 0x79E4) = emu_ax;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function emu_Tools_Var79E4_Update()
 *
 * @name emu_Tools_Var79E4_Update
 * @implements 01F7:07E5:0011:F68B ()
 * @implements 01F7:07F6:0015:EF96
 *
 * Called From: 2537:002F:000C:718A
 */
void emu_Tools_Var79E4_Update()
{
l__07E5:
	emu_cx = emu_get_memory16(emu_ds, 0x00, 0x79E6);
	emu_bx = emu_get_memory16(emu_ds, 0x00, 0x79E4);
	emu_dx = 0x15A;
	emu_ax = 0x4E35;
	emu_push(0x07F6); emu_Tools_MulCSIP_ip();
l__07F6:
	emu_addw(&emu_ax, 0x1);
	emu_adcw(&emu_dx, 0x0);
	emu_get_memory16(emu_ds, 0x00, 0x79E6) = emu_dx;
	emu_get_memory16(emu_ds, 0x00, 0x79E4) = emu_ax;
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x79E6);
	emu_cwd();
	emu_andw(&emu_ax, 0x7FFF);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function emu_File_Read()
 *
 * @name emu_File_Read
 * @implements 01F7:080B:0016:8E7B ()
 * @implements 01F7:0821:000E:581D
 * @implements 01F7:082F:0005:E285
 * @implements 01F7:0834:0004:220A
 * @implements 01F7:0835:0003:220F
 * @implements 01F7:0838:0002:2597
 *
 * Called From: 01F7:32C7:0011:1DCE
 */
void emu_File_Read()
{
l__080B:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_bx = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_shlw(&emu_bx, 0x1);
	emu_testw(&emu_get_memory16(emu_ds, emu_bx, 0x795C), 0x2);
	if ((emu_get_memory16(emu_ds, emu_bx, 0x795C) & 0x2) == 0) goto l__0821;
	emu_ax = 0x5;
	emu_push(emu_ax);
	goto l__0835;
l__0821:
	emu_push(emu_ds);
	emu_ah = 0x3F;
	emu_bx = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_cx = emu_get_memory16(emu_ss, emu_bp,  0xC);
	emu_lfp(&emu_ds, &emu_dx, &emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = 0x0070; emu_push(0x082F); Interrupt_DOS();
l__082F:
	emu_pop(&emu_ds);
	if (emu_flags.cf) goto l__0834;
	goto l__0838;
l__0834:
	emu_push(emu_ax);
l__0835:
	emu_push(0x0838); f__01F7_0675_0020_D684();
l__0838:
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__01F7_083A_0014_CDF5()
 *
 * @name f__01F7_083A_0014_CDF5
 * @implements 01F7:083A:0014:CDF5 ()
 * @implements 01F7:0869:0020:482B
 * @implements 01F7:086B:001E:B02C
 * @implements 01F7:086E:001B:02C3
 * @implements 01F7:0889:002A:3EEB
 * @implements 01F7:08CE:000E:CF0D
 * @implements 01F7:08E5:0003:DCBF
 * @implements 01F7:08E8:0025:73A9
 * @implements 01F7:090D:0007:EEBE
 * @implements 01F7:0965:0005:664A
 * @implements 01F7:0971:0030:D033
 * @implements 01F7:0980:0021:6AA6
 * @implements 01F7:09A1:0015:2118
 * @implements 01F7:09B6:000C:C129
 * @implements 01F7:09BF:0003:220A
 * @implements 01F7:0C67:0007:7330
 * @implements 01F7:0CFC:0006:F3CE
 *
 * Called From: 01F7:381E:001E:AAD4
 */
void f__01F7_083A_0014_CDF5()
{
l__083A:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x2A);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_get_memory16(emu_ss, emu_bp, -0x4) = 0x0;
	emu_get_memory16(emu_ss, emu_bp, -0x6) = 0x0;
	goto l__0869;
l__0869:
	emu_push(emu_es);
	emu_cld();
l__086B:
	emu_si = emu_get_memory16(emu_ss, emu_bp,  0xC);
l__086E:
	emu_es = emu_get_memory16(emu_ss, emu_bp,  0xE);
	emu_lodsb(emu_es);
	emu_orb(&emu_al, emu_al);
	if (emu_al == 0) goto l__08E5;
	emu_cmpb(&emu_al, 0x25);
	if (emu_al == 0x25) goto l__08E8;
	emu_ax = (int8)emu_al;
	emu_xchgw(&emu_ax, &emu_di);
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_ss, emu_bp,  0x4);
	emu_push(0x0889);
	switch (emu_ip) {
		case 0x37D0: f__01F7_37D0_0021_EE69(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x01F7; emu_last_ip = 0x0886; emu_last_length = 0x001B; emu_last_crc = 0x02C3;
			emu_call();
			return;
	}
l__0889:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_ax);
	if ((emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x08B9; emu_last_cs = 0x01F7; emu_last_ip = 0x088D; emu_last_length = 0x002A; emu_last_crc = 0x3EEB; emu_call(); return; }
	emu_ax = (int8)emu_al;
	emu_orw(&emu_di, emu_di);
	if (emu_flags.sf) goto l__08CE;
	emu_cmpb(&emu_get_memory8(emu_ds, emu_di, 0x79E8), 0x1);
	if (emu_get_memory8(emu_ds, emu_di, 0x79E8) != 0x1) goto l__08CE;
	emu_xchgw(&emu_ax, &emu_bx);
	emu_orb(&emu_bl, emu_bl);
	if (emu_flags.sf) { /* Unresolved jump */ emu_ip = 0x08BC; emu_last_cs = 0x01F7; emu_last_ip = 0x089E; emu_last_length = 0x002A; emu_last_crc = 0x3EEB; emu_call(); return; }
	emu_cmpb(&emu_get_memory8(emu_ds, emu_bx, 0x79E8), 0x1);
	if (emu_get_memory8(emu_ds, emu_bx, 0x79E8) != 0x1) { /* Unresolved jump */ emu_ip = 0x08BC; emu_last_cs = 0x01F7; emu_last_ip = 0x08A5; emu_last_length = 0x002A; emu_last_crc = 0x3EEB; emu_call(); return; }
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_ss, emu_bp,  0x4);
	emu_push(0x08B3);
	switch (emu_ip) {
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x01F7; emu_last_ip = 0x08B0; emu_last_length = 0x002A; emu_last_crc = 0x3EEB;
			emu_call();
			return;
	}
	/* Unresolved jump */ emu_ip = 0x08B3; emu_last_cs = 0x01F7; emu_last_ip = 0x08B3; emu_last_length = 0x002A; emu_last_crc = 0x3EEB; emu_call();
l__08CE:
	emu_cmpw(&emu_ax, emu_di);
	if (emu_ax == emu_di) goto l__086E;
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_ax);

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_push(0x08DC);
	switch (emu_ip) {
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x01F7; emu_last_ip = 0x08D9; emu_last_length = 0x000E; emu_last_crc = 0xCF0D;
			emu_call();
			return;
	}
	/* Unresolved jump */ emu_ip = 0x08DC; emu_last_cs = 0x01F7; emu_last_ip = 0x08DC; emu_last_length = 0x000E; emu_last_crc = 0xCF0D; emu_call();
l__08E5:
	goto l__0C67;
l__08E8:
	emu_get_memory16(emu_ss, emu_bp, -0xA) = 0xFFFF;
	emu_es = emu_get_memory16(emu_ss, emu_bp,  0xE);
	emu_get_memory8(emu_ss, emu_bp, -0x1) = 0x20;
	emu_lodsb(emu_es);
	emu_ax = (int8)emu_al;
	emu_get_memory16(emu_ss, emu_bp,  0xC) = emu_si;
	emu_xchgw(&emu_ax, &emu_di);
	emu_orw(&emu_di, emu_di);
	if ((emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x0918; emu_last_cs = 0x01F7; emu_last_ip = 0x08FD; emu_last_length = 0x0025; emu_last_crc = 0x73A9; emu_call(); return; }
	emu_bl = emu_get_memory8(emu_ds, emu_di, 0x79E8);
	emu_xorb(&emu_bh, emu_bh);
	emu_cmpw(&emu_bx, 0x15);
	if (emu_bx <= 0x15) goto l__090D;
	/* Unresolved jump */ emu_ip = 0x0C4F; emu_last_cs = 0x01F7; emu_last_ip = 0x090A; emu_last_length = 0x0025; emu_last_crc = 0x73A9; emu_call();
l__090D:
	emu_shlw(&emu_bx, 0x1);

	/* Jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_cs, emu_bx, 0xD02);
	switch (emu_ip) {
		case 0x0965: goto l__0965;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x01F7; emu_last_ip = 0x090F; emu_last_length = 0x0007; emu_last_crc = 0xEEBE;
			emu_call();
			return;
	}
l__0965:
	emu_si = 0xA;
	goto l__0971;
l__0971:
	emu_testw(&emu_di, 0x20);
	if ((emu_di & 0x20) == 0) {
		emu_cmpw(&emu_di, 0x58);
		if (emu_di != 0x58) {
			emu_orb(&emu_get_memory8(emu_ss, emu_bp, -0x1), 0x4);
		}
	}
l__0980:
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x8);
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x6);
	emu_push(emu_ax);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0xA);
	emu_andw(&emu_ax, 0x7FFF);
	emu_push(emu_ax);
	emu_push(emu_si);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x4));
	emu_push(0x09A1); f__01F7_0D59_0022_B62B();
l__09A1:
	emu_addw(&emu_sp, 0x14);
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x0);
	if ((int16)emu_get_memory16(emu_ss, emu_bp, -0x8) <= (int16)0x0) { /* Unresolved jump */ emu_ip = 0x09C2; emu_last_cs = 0x01F7; emu_last_ip = 0x09A8; emu_last_length = 0x0015; emu_last_crc = 0x2118; emu_call(); return; }
	emu_testb(&emu_get_memory8(emu_ss, emu_bp, -0x1), 0x1);
	if ((emu_get_memory8(emu_ss, emu_bp, -0x1) & 0x1) != 0) goto l__09BF;
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(0x09B6); f__01F7_084E_0011_B741();
l__09B6:
	emu_stosw();
	emu_testb(&emu_get_memory8(emu_ss, emu_bp, -0x1), 0x4);
	if ((emu_get_memory8(emu_ss, emu_bp, -0x1) & 0x4) != 0) {
		emu_xchgw(&emu_ax, &emu_dx);
		emu_stosw();
	}
l__09BF:
	goto l__086B;
l__0C67:
	emu_pop(&emu_es);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x4);
	goto l__0CFC;
l__0CFC:
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__01F7_084E_0011_B741()
 *
 * @name f__01F7_084E_0011_B741
 * @implements 01F7:084E:0011:B741 ()
 *
 * Called From: 01F7:09B3:0015:2118
 */
void f__01F7_084E_0011_B741()
{
l__084E:
	emu_lfp(&emu_es, &emu_di, &emu_get_memory16(emu_ss, emu_bp,  0x10));
	emu_testb(&emu_get_memory8(emu_ss, emu_bp, -0x1), 0x20);
	if ((emu_get_memory8(emu_ss, emu_bp, -0x1) & 0x20) == 0) { /* Unresolved jump */ emu_ip = 0x085F; emu_last_cs = 0x01F7; emu_last_ip = 0x0855; emu_last_length = 0x0011; emu_last_crc = 0xB741; emu_call(); return; }
	emu_lfp(&emu_es, &emu_di, &emu_get_memory16(emu_es, emu_di, 0x0));
	emu_addw(&emu_get_memory16(emu_ss, emu_bp,  0x10), 0x4);

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__01F7_0D2E_0015_C196()
 *
 * @name f__01F7_0D2E_0015_C196
 * @implements 01F7:0D2E:0015:C196 ()
 * @implements 01F7:0D43:0013:D2AA
 * @implements 01F7:0D4B:000B:5706
 * @implements 01F7:0D56:0003:2ADE
 * @implements 01F7:0D58:0001:6180
 *
 * Called From: 01F7:0E4B:0007:6B46
 * Called From: 01F7:0E75:0009:327F
 */
void f__01F7_0D2E_0015_C196()
{
l__0D2E:
	emu_push(emu_bx);
	emu_subb(&emu_bl, 0x30);
	if (emu_flags.cf) goto l__0D56;
	emu_cmpb(&emu_bl, 0x9);
	if (emu_bl <= 0x9) goto l__0D4B;
	emu_cmpb(&emu_bl, 0x2A);
	if (emu_bl > 0x2A) goto l__0D43;
	emu_subb(&emu_bl, 0x7);
	/* Unresolved jump */ emu_ip = 0x0D46; emu_last_cs = 0x01F7; emu_last_ip = 0x0D41; emu_last_length = 0x0015; emu_last_crc = 0xC196; emu_call();
l__0D43:
	emu_subb(&emu_bl, 0x27);
	emu_cmpb(&emu_bl, 0x9);
	if (emu_bl <= 0x9) goto l__0D56;
l__0D4B:
	emu_cmpb(&emu_bl, emu_cl);
	if (emu_bl >= emu_cl) goto l__0D56;
	emu_incw(&emu_sp);
	emu_incw(&emu_sp);
	emu_clc();
	emu_bh = 0x0;
	goto l__0D58;
l__0D56:
	emu_pop(&emu_bx);
	emu_stc();
l__0D58:

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__01F7_0D59_0022_B62B()
 *
 * @name f__01F7_0D59_0022_B62B
 * @implements 01F7:0D59:0022:B62B ()
 * @implements 01F7:0D6F:000C:E4D5
 * @implements 01F7:0D7B:0037:8260
 * @implements 01F7:0DB8:002D:E539
 * @implements 01F7:0E45:0002:CBBA
 * @implements 01F7:0E47:0007:6B46
 * @implements 01F7:0E4E:0006:1862
 * @implements 01F7:0E54:001B:D936
 * @implements 01F7:0E5E:0011:46E9
 * @implements 01F7:0E6F:0009:327F
 * @implements 01F7:0E78:0005:F885
 * @implements 01F7:0EAB:000A:70B4
 * @implements 01F7:0EB5:002A:954C
 * @implements 01F7:0ECB:0014:5ED0
 * @implements 01F7:0EF5:0006:F3CE
 *
 * Called From: 01F7:099E:0021:6AA6
 */
void f__01F7_0D59_0022_B62B()
{
l__0D59:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x6);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_get_memory8(emu_ss, emu_bp, -0x1) = 0x0;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = 0x0;
	emu_get_memory16(emu_ss, emu_bp, -0x6) = 0x1;
l__0D6F:
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_ss, emu_bp,  0x4);
	emu_push(0x0D7B);
	switch (emu_ip) {
		case 0x37D0: f__01F7_37D0_0021_EE69(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x01F7; emu_last_ip = 0x0D78; emu_last_length = 0x000C; emu_last_crc = 0xE4D5;
			emu_call();
			return;
	}
l__0D7B:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_ax);
	if ((emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x0DF2; emu_last_cs = 0x01F7; emu_last_ip = 0x0D7F; emu_last_length = 0x0037; emu_last_crc = 0x8260; emu_call(); return; }
	emu_ax = (int8)emu_al;
	emu_xchgw(&emu_ax, &emu_bx);
	emu_testb(&emu_bl, 0x80);
	if ((emu_bl & 0x80) != 0) { /* Unresolved jump */ emu_ip = 0x0D90; emu_last_cs = 0x01F7; emu_last_ip = 0x0D86; emu_last_length = 0x0037; emu_last_crc = 0x8260; emu_call(); return; }
	emu_di = 0x76BD;
	emu_testb(&emu_get_memory8(emu_ds, emu_bx + emu_di, 0x0), 0x1);
	if ((emu_get_memory8(emu_ds, emu_bx + emu_di, 0x0) & 0x1) != 0) goto l__0D6F;
	emu_xchgw(&emu_ax, &emu_bx);
	emu_decw(&emu_get_memory16(emu_ss, emu_bp,  0xE));
	if ((emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x0DF9; emu_last_cs = 0x01F7; emu_last_ip = 0x0D94; emu_last_length = 0x0037; emu_last_crc = 0x8260; emu_call(); return; }
	emu_cmpb(&emu_al, 0x2B);
	if (emu_al == 0x2B) { /* Unresolved jump */ emu_ip = 0x0DA1; emu_last_cs = 0x01F7; emu_last_ip = 0x0D98; emu_last_length = 0x0037; emu_last_crc = 0x8260; emu_call(); return; }
	emu_cmpb(&emu_al, 0x2D);
	if (emu_al != 0x2D) goto l__0DB8;
	emu_incb(&emu_get_memory8(emu_ss, emu_bp, -0x1));
	emu_decw(&emu_get_memory16(emu_ss, emu_bp,  0xE));
	if ((emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x0DF9; emu_last_cs = 0x01F7; emu_last_ip = 0x0DA4; emu_last_length = 0x0037; emu_last_crc = 0x8260; emu_call(); return; }
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_ss, emu_bp,  0x4);
	emu_push(0x0DB2);
	switch (emu_ip) {
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x01F7; emu_last_ip = 0x0DAF; emu_last_length = 0x0037; emu_last_crc = 0x8260;
			emu_call();
			return;
	}
	/* Unresolved jump */ emu_ip = 0x0DB2; emu_last_cs = 0x01F7; emu_last_ip = 0x0DB2; emu_last_length = 0x0037; emu_last_crc = 0x8260; emu_call();
l__0DB8:
	emu_subw(&emu_si, emu_si);
	emu_di = emu_si;
	emu_cx = emu_get_memory16(emu_ss, emu_bp,  0xC);
	if (emu_cx == 0) { /* Unresolved jump */ emu_ip = 0x0E17; emu_last_cs = 0x01F7; emu_last_ip = 0x0DBF; emu_last_length = 0x002D; emu_last_crc = 0xE539; emu_call(); return; }
	emu_cmpw(&emu_cx, 0x24);
	if (emu_cx > 0x24) { /* Unresolved jump */ emu_ip = 0x0DF9; emu_last_cs = 0x01F7; emu_last_ip = 0x0DC4; emu_last_length = 0x002D; emu_last_crc = 0xE539; emu_call(); return; }
	emu_cmpb(&emu_cl, 0x2);
	if (emu_cl < 0x2) { /* Unresolved jump */ emu_ip = 0x0DF9; emu_last_cs = 0x01F7; emu_last_ip = 0x0DC9; emu_last_length = 0x002D; emu_last_crc = 0xE539; emu_call(); return; }
	emu_cmpb(&emu_al, 0x30);
	if (emu_al != 0x30) goto l__0E47;
	emu_cmpb(&emu_cl, 0x10);
	if (emu_cl != 0x10) goto l__0E45;
	emu_decw(&emu_get_memory16(emu_ss, emu_bp,  0xE));
	if ((emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x0E14; emu_last_cs = 0x01F7; emu_last_ip = 0x0DD7; emu_last_length = 0x002D; emu_last_crc = 0xE539; emu_call(); return; }
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_ss, emu_bp,  0x4);
	emu_push(0x0DE5);
	switch (emu_ip) {
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x01F7; emu_last_ip = 0x0DE2; emu_last_length = 0x002D; emu_last_crc = 0xE539;
			emu_call();
			return;
	}
	/* Unresolved jump */ emu_ip = 0x0DE5; emu_last_cs = 0x01F7; emu_last_ip = 0x0DE5; emu_last_length = 0x002D; emu_last_crc = 0xE539; emu_call();
l__0E45:
	goto l__0E5E;
l__0E47:
	emu_cx = emu_get_memory16(emu_ss, emu_bp,  0xC);
	emu_xchgw(&emu_ax, &emu_bx);
	emu_push(0x0E4E); f__01F7_0D2E_0015_C196();
l__0E4E:
	emu_xchgw(&emu_ax, &emu_bx);
	if (emu_flags.cf) { /* Unresolved jump */ emu_ip = 0x0DF9; emu_last_cs = 0x01F7; emu_last_ip = 0x0E4F; emu_last_length = 0x0006; emu_last_crc = 0x1862; emu_call(); return; }
	emu_xchgw(&emu_ax, &emu_si);
	goto l__0E5E;
l__0E54:
	emu_xchgw(&emu_ax, &emu_si);
	emu_mulw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_addw(&emu_si, emu_ax);
	emu_adcw(&emu_di, emu_dx);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0E8E; emu_last_cs = 0x01F7; emu_last_ip = 0x0E5C; emu_last_length = 0x001B; emu_last_crc = 0xD936; emu_call(); return; }
l__0E5E:
	emu_decw(&emu_get_memory16(emu_ss, emu_bp,  0xE));
	if ((emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x0EBB; emu_last_cs = 0x01F7; emu_last_ip = 0x0E61; emu_last_length = 0x0011; emu_last_crc = 0x46E9; emu_call(); return; }
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_ss, emu_bp,  0x4);
	emu_push(0x0E6F);
	switch (emu_ip) {
		case 0x37D0: f__01F7_37D0_0021_EE69(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x01F7; emu_last_ip = 0x0E6C; emu_last_length = 0x0011; emu_last_crc = 0x46E9;
			emu_call();
			return;
	}
l__0E6F:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_cx = emu_get_memory16(emu_ss, emu_bp,  0xC);
	emu_xchgw(&emu_ax, &emu_bx);
	emu_push(0x0E78); f__01F7_0D2E_0015_C196();
l__0E78:
	emu_xchgw(&emu_ax, &emu_bx);
	if (!emu_flags.cf) goto l__0E54;
	goto l__0EAB;
l__0EAB:
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_ax);

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_push(0x0EB5);
	switch (emu_ip) {
		case 0x37F8: f__01F7_37F8_000B_8F48(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x01F7; emu_last_ip = 0x0EB2; emu_last_length = 0x000A; emu_last_crc = 0x70B4;
			emu_call();
			return;
	}
l__0EB5:
	emu_addw(&emu_sp, 0x6);
	emu_decw(&emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_dx = emu_di;
	emu_xchgw(&emu_ax, &emu_si);
	emu_cmpb(&emu_get_memory8(emu_ss, emu_bp, -0x1), 0x0);
	if (emu_get_memory8(emu_ss, emu_bp, -0x1) != 0x0) {
		emu_negw(&emu_dx, emu_dx);
		emu_negw(&emu_ax, emu_ax);
		emu_sbbw(&emu_dx, 0x0);
	}
l__0ECB:
	emu_lfp(&emu_es, &emu_di, &emu_get_memory16(emu_ss, emu_bp,  0x10));
	emu_bx = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_addw(&emu_get_memory16(emu_es, emu_di, 0x0), emu_bx);
	emu_lfp(&emu_es, &emu_di, &emu_get_memory16(emu_ss, emu_bp,  0x14));
	emu_bx = emu_get_memory16(emu_ss, emu_bp, -0x6);
	emu_get_memory16(emu_es, emu_di, 0x0) = emu_bx;
	goto l__0EF5;
l__0EF5:
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function emu_Tools_StoreSegments()
 *
 * @name emu_Tools_StoreSegments
 * @implements 01F7:0EFB:0020:CAA8 ()
 *
 * Called From: 01F7:1FBD:0010:CF18
 */
void emu_Tools_StoreSegments()
{
l__0EFB:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_si);
	emu_bx = emu_es;
	emu_lfp(&emu_es, &emu_si, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_get_memory16(emu_es, emu_si, 0x0) = emu_bx;
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x4);
	emu_get_memory16(emu_es, emu_si, 0x2) = emu_ax;
	emu_get_memory16(emu_es, emu_si, 0x4) = emu_ss;
	emu_get_memory16(emu_es, emu_si, 0x6) = emu_ds;
	emu_es = emu_bx;
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__01F7_0F45_004B_44A0()
 *
 * @name f__01F7_0F45_004B_44A0
 * @implements 01F7:0F45:004B:44A0 ()
 * @implements 01F7:0F4E:0042:0225
 * @implements 01F7:0F90:001C:DDFD
 * @implements 01F7:0F9B:0011:BEEC
 * @implements 01F7:0FAE:0011:18E7
 * @implements 01F7:0FBF:000D:08B8
 * @implements 01F7:0FCC:001C:6C98
 * @implements 01F7:0FD7:0011:0EE9
 * @implements 01F7:0FEA:0011:0CD6
 * @implements 01F7:0FFB:0004:490B
 *
 * Called From: 01F7:0229:0004:BEF7
 */
void f__01F7_0F45_004B_44A0()
{
l__0F45:
	emu_cx = 0x5;
	emu_cmpw(&emu_cx, emu_get_memory16(emu_ds, 0x00, 0x795A));
	if (emu_cx >= emu_get_memory16(emu_ds, 0x00, 0x795A)) { /* Unresolved jump */ emu_ip = 0x0F86; emu_last_cs = 0x01F7; emu_last_ip = 0x0F4C; emu_last_length = 0x004B; emu_last_crc = 0x44A0; emu_call(); return; }
l__0F4E:
	emu_bx = emu_cx;
	emu_shlw(&emu_bx, 0x1);
	emu_get_memory16(emu_ds, emu_bx, 0x795C) = 0x0;
	emu_ax = emu_cx;
	emu_dx = 0x14;
	emu_imuluw(&emu_ax, emu_dx);
	emu_bx = emu_ax;
	emu_get_memory8(emu_ds, emu_bx, 0x77CE) = 0xFF;
	emu_ax = emu_cx;
	emu_dx = 0x14;
	emu_imuluw(&emu_ax, emu_dx);
	emu_addw(&emu_ax, 0x77CA);
	emu_push(emu_ax);
	emu_ax = emu_cx;
	emu_dx = 0x14;
	emu_imuluw(&emu_ax, emu_dx);
	emu_bx = emu_ax;
	emu_pop(&emu_ax);
	emu_get_memory16(emu_ds, emu_bx, 0x77DC) = emu_ax;
	emu_incw(&emu_cx);
	emu_cmpw(&emu_cx, emu_get_memory16(emu_ds, 0x00, 0x795A));
	if (emu_cx < emu_get_memory16(emu_ds, 0x00, 0x795A)) goto l__0F4E;
	emu_al = emu_get_memory8(emu_ds, 0x00, 0x77CE);
	emu_ax = (int8)emu_al;
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x0F90); emu_Device_Get_Info();
l__0F90:
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax == 0) {
		emu_andw(&emu_get_memory16(emu_ds, 0x00, 0x77CC), 0xFDFF);
	}
l__0F9B:
	emu_ax = 0x200;
	emu_push(emu_ax);
	emu_testw(&emu_get_memory16(emu_ds, 0x00, 0x77CC), 0x200);
	if ((emu_get_memory16(emu_ds, 0x00, 0x77CC) & 0x200) == 0) { /* Unresolved jump */ emu_ip = 0x0FAC; emu_last_cs = 0x01F7; emu_last_ip = 0x0FA5; emu_last_length = 0x0011; emu_last_crc = 0xBEEC; emu_call(); return; }
	emu_ax = 0x1;
	goto l__0FAE;
l__0FAE:
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_ds);
	emu_ax = 0x77CA;
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x0FBF); f__01F7_3357_0028_B817();
l__0FBF:
	emu_addw(&emu_sp, 0xC);
	emu_al = emu_get_memory8(emu_ds, 0x00, 0x77E2);
	emu_ax = (int8)emu_al;
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x0FCC); emu_Device_Get_Info();
l__0FCC:
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax == 0) {
		emu_andw(&emu_get_memory16(emu_ds, 0x00, 0x77E0), 0xFDFF);
	}
l__0FD7:
	emu_ax = 0x200;
	emu_push(emu_ax);
	emu_testw(&emu_get_memory16(emu_ds, 0x00, 0x77E0), 0x200);
	if ((emu_get_memory16(emu_ds, 0x00, 0x77E0) & 0x200) == 0) { /* Unresolved jump */ emu_ip = 0x0FE8; emu_last_cs = 0x01F7; emu_last_ip = 0x0FE1; emu_last_length = 0x0011; emu_last_crc = 0x0EE9; emu_call(); return; }
	emu_ax = 0x2;
	goto l__0FEA;
l__0FEA:
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_ds);
	emu_ax = 0x77DE;
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x0FFB); f__01F7_3357_0028_B817();
l__0FFB:
	emu_addw(&emu_sp, 0xC);

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__01F7_103F_0010_4132()
 *
 * @name f__01F7_103F_0010_4132
 * @implements 01F7:103F:0010:4132 ()
 * @implements 01F7:104F:000C:A782
 * @implements 01F7:105B:0011:10F9
 * @implements 01F7:106C:002B:5C05
 * @implements 01F7:108D:000A:4363
 *
 * Called From: 25C4:03D3:000B:7CD0
 */
void f__01F7_103F_0010_4132()
{
l__103F:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0xC);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x4);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x104F); emu_Date_Get();
l__104F:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x8);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x105B); emu_Time_Get();
l__105B:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x8);
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x4);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x106C); f__01F7_3CF9_000C_1201();
l__106C:
	emu_addw(&emu_sp, 0x8);
	emu_get_memory16(emu_ss, emu_bp, -0xA) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0xC) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_ax != 0) {
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
		emu_ax = emu_get_memory16(emu_ss, emu_bp, -0xA);
		emu_dx = emu_get_memory16(emu_ss, emu_bp, -0xC);
		emu_get_memory16(emu_es, emu_bx, 0x2) = emu_ax;
		emu_get_memory16(emu_es, emu_bx, 0x0) = emu_dx;
	}
l__108D:
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0xA);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0xC);
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function emu_String_tolower()
 *
 * @name emu_String_tolower
 * @implements 01F7:1097:0010:64C2 ()
 * @implements 01F7:10A7:0016:FD08
 * @implements 01F7:10BD:0006:4B8E
 *
 * Called From: B536:01D6:000A:DD58
 */
void emu_String_tolower()
{
l__1097:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_dx = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_cmpw(&emu_dx, 0xFFFF);
	if (emu_dx != 0xFFFF) goto l__10A7;
	emu_ax = 0xFFFF;
	/* Unresolved jump */ emu_ip = 0x10C1; emu_last_cs = 0x01F7; emu_last_ip = 0x10A5; emu_last_length = 0x0010; emu_last_crc = 0x64C2; emu_call();
l__10A7:
	emu_al = emu_dl;
	emu_ah = 0x0;
	emu_bx = emu_ax;
	emu_testb(&emu_get_memory8(emu_ds, emu_bx, 0x76BD), 0x4);
	if ((emu_get_memory8(emu_ds, emu_bx, 0x76BD) & 0x4) == 0) goto l__10BD;
	emu_al = emu_dl;
	emu_ah = 0x0;
	emu_addw(&emu_ax, 0x20);
	/* Unresolved jump */ emu_ip = 0x10C1; emu_last_cs = 0x01F7; emu_last_ip = 0x10BB; emu_last_length = 0x0016; emu_last_crc = 0xFD08; emu_call();
l__10BD:
	emu_al = emu_dl;
	emu_ah = 0x0;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function emu_String_toupper()
 *
 * @name emu_String_toupper
 * @implements 01F7:10C3:0010:64C2 ()
 * @implements 01F7:10D3:0016:E224
 * @implements 01F7:10E9:0006:4B8E
 * @implements 01F7:10ED:0002:2597
 *
 * Called From: 01F7:28F0:000E:EFC0
 * Called From: 01F7:2900:0010:4F5D
 * Called From: B4DA:173A:002D:1CF6
 * Called From: B4E6:03C8:0019:E3C0
 * Called From: B4E6:03DD:0007:B6D2
 */
void emu_String_toupper()
{
l__10C3:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_dx = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_cmpw(&emu_dx, 0xFFFF);
	if (emu_dx != 0xFFFF) goto l__10D3;
	emu_ax = 0xFFFF;
	goto l__10ED;
l__10D3:
	emu_al = emu_dl;
	emu_ah = 0x0;
	emu_bx = emu_ax;
	emu_testb(&emu_get_memory8(emu_ds, emu_bx, 0x76BD), 0x8);
	if ((emu_get_memory8(emu_ds, emu_bx, 0x76BD) & 0x8) == 0) goto l__10E9;
	emu_al = emu_dl;
	emu_ah = 0x0;
	emu_addw(&emu_ax, 0xFFE0);
	goto l__10ED;
l__10E9:
	emu_al = emu_dl;
	emu_ah = 0x0;
l__10ED:
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function emu_File_Delete()
 *
 * @name emu_File_Delete
 * @implements 01F7:10EF:000B:AF8B ()
 * @implements 01F7:10FA:0007:2226
 * @implements 01F7:1105:0002:2597
 *
 * Called From: 1FB5:007A:0015:A08C
 */
void emu_File_Delete()
{
l__10EF:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_ds);
	emu_ah = 0x41;
	emu_lfp(&emu_ds, &emu_dx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = 0x0070; emu_push(0x10FA); Interrupt_DOS();
l__10FA:
	emu_pop(&emu_ds);
	if (emu_flags.cf) { /* Unresolved jump */ emu_ip = 0x1101; emu_last_cs = 0x01F7; emu_last_ip = 0x10FB; emu_last_length = 0x0007; emu_last_crc = 0x2226; emu_call(); return; }
	emu_xorw(&emu_ax, emu_ax);
	goto l__1105;
l__1105:
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function emu_String_Format()
 *
 * @name emu_String_Format
 * @implements 01F7:111F:001A:B513 ()
 * @implements 01F7:1183:0025:4423
 * @implements 01F7:118C:001C:D392
 * @implements 01F7:118F:0019:242D
 * @implements 01F7:1192:0016:5243
 * @implements 01F7:119C:000C:BDD2
 * @implements 01F7:11A8:0002:B43A
 * @implements 01F7:11AA:0003:5C99
 * @implements 01F7:11AD:0025:BB88
 * @implements 01F7:11D2:001C:2FBE
 * @implements 01F7:11D4:001A:ADCB
 * @implements 01F7:11EE:0007:E292
 * @implements 01F7:11F5:0003:9C81
 * @implements 01F7:1228:0004:C391
 * @implements 01F7:122C:0014:04C1
 * @implements 01F7:1240:0003:DCAE
 * @implements 01F7:1261:0003:E2BB
 * @implements 01F7:127E:0022:EBA7
 * @implements 01F7:12A0:001C:A3DF
 * @implements 01F7:12BC:0007:1C4F
 * @implements 01F7:12D3:0004:B471
 * @implements 01F7:12E1:0010:CD77
 * @implements 01F7:12F1:003D:88BC
 * @implements 01F7:1301:002D:1213
 * @implements 01F7:1312:001C:5AE8
 * @implements 01F7:132E:0014:99C6
 * @implements 01F7:1332:0010:2231
 * @implements 01F7:1342:000C:536B
 * @implements 01F7:134E:0003:DD1F
 * @implements 01F7:13A1:0020:0407
 * @implements 01F7:13C1:001D:838F
 * @implements 01F7:13DE:0015:702E
 * @implements 01F7:13F0:0003:E391
 * @implements 01F7:13F3:000B:9686
 * @implements 01F7:13FB:0003:DD01
 * @implements 01F7:13FE:0034:882D
 * @implements 01F7:1432:000B:FBFE
 * @implements 01F7:1442:0011:E292
 * @implements 01F7:1450:0003:E339
 * @implements 01F7:1453:0032:F0B1
 * @implements 01F7:145A:002B:67C1
 * @implements 01F7:1461:0024:6E38
 * @implements 01F7:1482:0003:632D
 * @implements 01F7:1485:0028:6B27
 * @implements 01F7:14AB:0002:CDBA
 * @implements 01F7:14C8:000C:A183
 * @implements 01F7:14D4:0005:2699
 * @implements 01F7:14D9:0011:9CE5
 * @implements 01F7:14DA:0010:B965
 * @implements 01F7:14DE:000C:BAA4
 * @implements 01F7:14EA:0006:7928
 * @implements 01F7:14F0:001F:69A1
 * @implements 01F7:1511:0009:310D
 * @implements 01F7:1515:0005:6688
 * @implements 01F7:151A:0016:A17E
 * @implements 01F7:151C:0014:2EB5
 * @implements 01F7:151E:0012:47FD
 * @implements 01F7:1522:000E:3CEF
 * @implements 01F7:1530:000D:4B6C
 * @implements 01F7:1532:000B:546B
 * @implements 01F7:1538:0005:2680
 * @implements 01F7:153D:0005:B42C
 * @implements 01F7:153F:0003:2333
 * @implements 01F7:1542:0018:AC5C
 * @implements 01F7:155A:0024:5D21
 * @implements 01F7:157B:0003:E323
 * @implements 01F7:157E:000E:A269
 * @implements 01F7:1589:0003:E0AE
 * @implements 01F7:158C:000F:E3A2
 * @implements 01F7:1592:0009:6CDC
 * @implements 01F7:159B:000C:40E8
 * @implements 01F7:15A7:000B:CD36
 * @implements 01F7:15AA:0008:BCD0
 *
 * Called From: 01F7:2BDA:0019:3608
 * Called From: 01F7:37AA:0020:0F64
 * Called From: 01F7:37CB:001F:03E8
 */
void emu_String_Format()
{
l__111F:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x96);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_get_memory16(emu_ss, emu_bp, -0x12) = 0x0;
	emu_get_memory16(emu_ss, emu_bp, -0x14) = 0x50;
	emu_get_memory16(emu_ss, emu_bp, -0x16) = 0x0;
	goto l__1183;
l__1183:
	emu_push(emu_es);
	emu_cld();
	emu_movw(&emu_di, emu_bp - 0x96);
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_di;
l__118C:
	emu_di = emu_get_memory16(emu_ss, emu_bp, -0x4);
l__118F:
	emu_lfp(&emu_es, &emu_si, &emu_get_memory16(emu_ss, emu_bp,  0x6));
l__1192:
	emu_lodsb(emu_es);
	emu_orb(&emu_al, emu_al);
	if (emu_al == 0) goto l__11AA;
	emu_cmpb(&emu_al, 0x25);
	if (emu_al == 0x25) goto l__11AD;
l__119C:
	emu_get_memory8(emu_ss, emu_di, 0x0) = emu_al;
	emu_incw(&emu_di);
	emu_decb(&emu_get_memory8(emu_ss, emu_bp, -0x14));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) goto l__1192;
	emu_push(0x11A8); emu_String_Format_Callback();
l__11A8:
	goto l__1192;
l__11AA:
	goto l__1592;
l__11AD:
	emu_get_memory16(emu_ss, emu_bp, -0x10) = emu_si;
	emu_lodsb(emu_es);
	emu_cmpb(&emu_al, 0x25);
	if (emu_al == 0x25) goto l__119C;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_di;
	emu_xorw(&emu_cx, emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0xE) = emu_cx;
	emu_get_memory16(emu_ss, emu_bp, -0x2) = 0x20;
	emu_get_memory8(emu_ss, emu_bp, -0xB) = emu_cl;
	emu_get_memory16(emu_ss, emu_bp, -0x8) = 0xFFFF;
	emu_get_memory16(emu_ss, emu_bp, -0xA) = 0xFFFF;
	goto l__11D4;
l__11D2:
	emu_lodsb(emu_es);
l__11D4:
	emu_xorb(&emu_ah, emu_ah);
	emu_dx = emu_ax;
	emu_bx = emu_ax;
	emu_subb(&emu_bl, 0x20);
	emu_cmpb(&emu_bl, 0x60);
	if (emu_bl >= 0x60) goto l__11F5;
	emu_bl = emu_get_memory8(emu_ds, emu_bx, 0x7A71);
	emu_cmpw(&emu_bx, 0x17);
	if (emu_bx <= 0x17) goto l__11EE;
	goto l__157E;
l__11EE:
	emu_shlw(&emu_bx, 0x1);

	/* Jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_cs, emu_bx, 0x15B2);
	switch (emu_ip) {
		case 0x122C: goto l__122C;
		case 0x127E: goto l__127E;
		case 0x12BC: goto l__12BC;
		case 0x12D3: goto l__12D3;
		case 0x12F1: goto l__12F1;
		case 0x13A1: goto l__13A1;
		case 0x13C1: goto l__13C1;
		case 0x13FE: goto l__13FE;
		case 0x1542: goto l__1542;
		case 0x157E: goto l__157E;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x01F7; emu_last_ip = 0x11F0; emu_last_length = 0x0007; emu_last_crc = 0xE292;
			emu_call();
			return;
	}
l__11F5:
	goto l__157E;
l__1228:
	emu_ch = 0x5;
	goto l__11D2;
l__122C:
	emu_cmpb(&emu_ch, 0x0);
	if (emu_ch > 0x0) goto l__127E;
	emu_testw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x2);
	if ((emu_get_memory16(emu_ss, emu_bp, -0x2) & 0x2) != 0) goto l__1261;
	emu_orw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x8);
	emu_ch = 0x1;
	goto l__11D2;
l__1240:
	goto l__157E;
l__1261:
	goto l__11D2;
l__127E:
	emu_xchgw(&emu_ax, &emu_dx);
	emu_subb(&emu_al, 0x30);
	emu_ax = (int8)emu_al;
	emu_cmpb(&emu_ch, 0x2);
	if (emu_ch > 0x2) goto l__12A0;
	emu_ch = 0x2;
	emu_xchgw(&emu_get_memory16(emu_ss, emu_bp, -0x8), &emu_ax);
	emu_orw(&emu_ax, emu_ax);
	if ((emu_flags.sf != emu_flags.of)) goto l__1261;
	emu_shlw(&emu_ax, 0x1);
	emu_dx = emu_ax;
	emu_shlw(&emu_ax, 0x1);
	emu_shlw(&emu_ax, 0x1);
	emu_addw(&emu_ax, emu_dx);
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax);
	goto l__11D2;
l__12A0:
	emu_cmpb(&emu_ch, 0x4);
	if (emu_ch != 0x4) goto l__1240;
	emu_xchgw(&emu_get_memory16(emu_ss, emu_bp, -0xA), &emu_ax);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax == 0) goto l__1261;
	emu_shlw(&emu_ax, 0x1);
	emu_dx = emu_ax;
	emu_shlw(&emu_ax, 0x1);
	emu_shlw(&emu_ax, 0x1);
	emu_addw(&emu_ax, emu_dx);
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_ax);
	goto l__11D2;
l__12BC:
	emu_orw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x10);
	goto l__1228;
l__12D3:
	emu_bh = 0xA;
	goto l__12E1;
l__12E1:
	emu_get_memory8(emu_ss, emu_bp, -0x5) = emu_dl;
	emu_xorw(&emu_dx, emu_dx);
	emu_get_memory8(emu_ss, emu_bp, -0x6) = emu_dl;
	emu_di = emu_get_memory16(emu_ss, emu_bp,  0x4);
	emu_ax = emu_get_memory16(emu_ss, emu_di, 0x0);
	goto l__1301;
l__12F1:
	emu_bh = 0xA;
	emu_get_memory8(emu_ss, emu_bp, -0x6) = 0x1;
	emu_get_memory8(emu_ss, emu_bp, -0x5) = emu_dl;
	emu_di = emu_get_memory16(emu_ss, emu_bp,  0x4);
	emu_ax = emu_get_memory16(emu_ss, emu_di, 0x0);
	emu_cwd();
l__1301:
	emu_incw(&emu_di);
	emu_incw(&emu_di);
	emu_get_memory16(emu_ss, emu_bp,  0x6) = emu_si;
	emu_testw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x10);
	if ((emu_get_memory16(emu_ss, emu_bp, -0x2) & 0x10) != 0) {
		emu_dx = emu_get_memory16(emu_ss, emu_di, 0x0);
		emu_incw(&emu_di);
		emu_incw(&emu_di);
	}
l__1312:
	emu_get_memory16(emu_ss, emu_bp,  0x4) = emu_di;
	emu_movw(&emu_di, emu_bp - 0x45);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax != 0) goto l__132E;
	emu_orw(&emu_dx, emu_dx);
	if (emu_dx != 0) goto l__132E;
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp, -0xA) != 0x0) goto l__1332;
	emu_get_memory8(emu_ss, emu_di, 0x0) = 0x0;
	emu_ax = emu_di;
	goto l__1342;
l__132E:
	emu_orw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x4);
l__1332:
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_push(emu_di);
	emu_al = emu_bh;
	emu_ax = (int8)emu_al;
	emu_push(emu_ax);
	emu_al = emu_get_memory8(emu_ss, emu_bp, -0x6);
	emu_push(emu_ax);
	emu_push(emu_bx);
	emu_push(0x1342); f__01F7_06D1_004A_EF77();
l__1342:
	emu_push(emu_ss);
	emu_pop(&emu_es);
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0xA);
	emu_orw(&emu_dx, emu_dx);
	if (!(emu_flags.sf != emu_flags.of)) goto l__134E;
	goto l__1442;
l__134E:
	goto l__1450;
l__13A1:
	emu_get_memory16(emu_ss, emu_bp,  0x6) = emu_si;
	emu_get_memory8(emu_ss, emu_bp, -0x5) = emu_dl;
	emu_di = emu_get_memory16(emu_ss, emu_bp,  0x4);
	emu_ax = emu_get_memory16(emu_ss, emu_di, 0x0);
	emu_addw(&emu_get_memory16(emu_ss, emu_bp,  0x4), 0x2);
	emu_push(emu_ss);
	emu_pop(&emu_es);
	emu_movw(&emu_di, emu_bp - 0x45);
	emu_xorb(&emu_ah, emu_ah);
	emu_get_memory16(emu_ss, emu_di, 0x0) = emu_ax;
	emu_cx = 0x1;
	goto l__1485;
l__13C1:
	emu_get_memory16(emu_ss, emu_bp,  0x6) = emu_si;
	emu_get_memory8(emu_ss, emu_bp, -0x5) = emu_dl;
	emu_di = emu_get_memory16(emu_ss, emu_bp,  0x4);
	emu_testw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x20);
	if ((emu_get_memory16(emu_ss, emu_bp, -0x2) & 0x20) != 0) goto l__13DE;
	emu_di = emu_get_memory16(emu_ss, emu_di, 0x0);
	emu_addw(&emu_get_memory16(emu_ss, emu_bp,  0x4), 0x2);
	emu_push(emu_ds);
	emu_pop(&emu_es);
	emu_orw(&emu_di, emu_di);
	/* Unresolved jump */ emu_ip = 0x13E9; emu_last_cs = 0x01F7; emu_last_ip = 0x13DC; emu_last_length = 0x001D; emu_last_crc = 0x838F; emu_call();
l__13DE:
	emu_lfp(&emu_es, &emu_di, &emu_get_memory16(emu_ss, emu_di, 0x0));
	emu_addw(&emu_get_memory16(emu_ss, emu_bp,  0x4), 0x4);
	emu_ax = emu_es;
	emu_orw(&emu_ax, emu_di);
	if (emu_ax == 0) {
		emu_push(emu_ds);
		emu_pop(&emu_es);
		emu_di = 0x7A6A;
	}
l__13F0:
	emu_push(0x13F3); f__01F7_1139_000D_AAB0();
l__13F3:
	emu_cmpw(&emu_cx, emu_get_memory16(emu_ss, emu_bp, -0xA));
	if (emu_cx > emu_get_memory16(emu_ss, emu_bp, -0xA)) {
		emu_cx = emu_get_memory16(emu_ss, emu_bp, -0xA);
	}
l__13FB:
	goto l__1485;
l__13FE:
	emu_get_memory16(emu_ss, emu_bp,  0x6) = emu_si;
	emu_get_memory8(emu_ss, emu_bp, -0x5) = emu_dl;
	emu_di = emu_get_memory16(emu_ss, emu_bp,  0x4);
	emu_cx = emu_get_memory16(emu_ss, emu_bp, -0xA);
	emu_orw(&emu_cx, emu_cx);
	if (!(emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x1411; emu_last_cs = 0x01F7; emu_last_ip = 0x140C; emu_last_length = 0x0034; emu_last_crc = 0x882D; emu_call(); return; }
	emu_cx = 0x6;
	emu_push(emu_ss);
	emu_push(emu_di);
	emu_push(emu_cx);
	emu_push(emu_ss);
	emu_movw(&emu_bx, emu_bp - 0x45);
	emu_push(emu_bx);
	emu_push(emu_dx);
	emu_ax = 0x1;
	emu_andw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_ax);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x2);
	emu_testw(&emu_ax, 0x100);
	if ((emu_ax & 0x100) == 0) goto l__1432;
	emu_ax = 0x8;
	emu_addw(&emu_get_memory16(emu_ss, emu_bp,  0x4), 0xA);
	/* Unresolved jump */ emu_ip = 0x1439; emu_last_cs = 0x01F7; emu_last_ip = 0x1430; emu_last_length = 0x0034; emu_last_crc = 0x882D; emu_call();
l__1432:
	emu_addw(&emu_get_memory16(emu_ss, emu_bp,  0x4), 0x8);
	emu_ax = 0x6;
	emu_push(emu_ax);
	emu_push(0x143D); f__01F7_20A3_0004_C957();
	/* Unresolved jump */ emu_ip = 0x143D; emu_last_cs = 0x01F7; emu_last_ip = 0x143D; emu_last_length = 0x000B; emu_last_crc = 0xFBFE; emu_call();
l__1442:
	emu_testw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x8);
	if ((emu_get_memory16(emu_ss, emu_bp, -0x2) & 0x8) == 0) goto l__1461;
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x8);
	emu_orw(&emu_dx, emu_dx);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) goto l__1461;
l__1450:
	emu_push(0x1453); f__01F7_1139_000D_AAB0();
l__1453:
	emu_cmpb(&emu_get_memory8(emu_es, emu_di, 0x0), 0x2D);
	if (emu_get_memory8(emu_es, emu_di, 0x0) == 0x2D) {
		emu_decw(&emu_cx);
	}
l__145A:
	emu_subw(&emu_dx, emu_cx);
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) {
		emu_get_memory16(emu_ss, emu_bp, -0xE) = emu_dx;
	}
l__1461:
	emu_cmpb(&emu_get_memory8(emu_es, emu_di, 0x0), 0x2D);
	if (emu_get_memory8(emu_es, emu_di, 0x0) == 0x2D) { /* Unresolved jump */ emu_ip = 0x1472; emu_last_cs = 0x01F7; emu_last_ip = 0x1465; emu_last_length = 0x0024; emu_last_crc = 0x6E38; emu_call(); return; }
	emu_al = emu_get_memory8(emu_ss, emu_bp, -0xB);
	emu_orb(&emu_al, emu_al);
	if (emu_al != 0) {
		emu_decw(&emu_di);
		emu_get_memory8(emu_es, emu_di, 0x0) = emu_al;
		emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0xE), 0x0);
		if ((int16)emu_get_memory16(emu_ss, emu_bp, -0xE) > (int16)0x0) {
			emu_cx = emu_get_memory16(emu_ss, emu_bp, -0xA);
			emu_orw(&emu_cx, emu_cx);
			if ((emu_flags.sf != emu_flags.of)) {
				emu_decw(&emu_get_memory16(emu_ss, emu_bp, -0xE));
			}
		}
	}
l__1482:
	emu_push(0x1485); f__01F7_1139_000D_AAB0();
l__1485:
	emu_si = emu_di;
	emu_di = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_bx = emu_get_memory16(emu_ss, emu_bp, -0x8);
	emu_ax = 0x5;
	emu_andw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_cmpw(&emu_ax, 0x5);
	if (emu_ax == 0x5) {
		emu_ah = emu_get_memory8(emu_ss, emu_bp, -0x5);
		emu_cmpb(&emu_ah, 0x6F);
		if (emu_ah != 0x6F) { /* Unresolved jump */ emu_ip = 0x14AD; emu_last_cs = 0x01F7; emu_last_ip = 0x149E; emu_last_length = 0x0028; emu_last_crc = 0x6B27; emu_call(); return; }
		emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0xE), 0x0);
		if ((int16)emu_get_memory16(emu_ss, emu_bp, -0xE) <= (int16)0x0) {
			emu_get_memory16(emu_ss, emu_bp, -0xE) = 0x1;
		}
	}
l__14AB:
	goto l__14C8;
l__14C8:
	emu_addw(&emu_cx, emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_testw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x2);
	if ((emu_get_memory16(emu_ss, emu_bp, -0x2) & 0x2) != 0) goto l__14DE;
	goto l__14DA;
l__14D4:
	emu_al = 0x20;
	emu_push(0x14D9); f__01F7_1146_0023_6860();
l__14D9:
	emu_decw(&emu_bx);
l__14DA:
	emu_cmpw(&emu_bx, emu_cx);
	if ((int16)emu_bx > (int16)emu_cx) goto l__14D4;
l__14DE:
	emu_testw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x40);
	if ((emu_get_memory16(emu_ss, emu_bp, -0x2) & 0x40) == 0) goto l__14F0;
	emu_al = 0x30;
	emu_push(0x14EA); f__01F7_1146_0023_6860();
l__14EA:
	emu_al = emu_get_memory8(emu_ss, emu_bp, -0x5);
	emu_push(0x14F0); f__01F7_1146_0023_6860();
l__14F0:
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0xE);
	emu_orw(&emu_dx, emu_dx);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) goto l__151E;
	emu_subw(&emu_cx, emu_dx);
	emu_subw(&emu_bx, emu_dx);
	emu_al = emu_get_memory8(emu_es, emu_si, 0x0);
	emu_cmpb(&emu_al, 0x2D);
	if (emu_al == 0x2D) { /* Unresolved jump */ emu_ip = 0x150A; emu_last_cs = 0x01F7; emu_last_ip = 0x1500; emu_last_length = 0x001F; emu_last_crc = 0x69A1; emu_call(); return; }
	emu_cmpb(&emu_al, 0x20);
	if (emu_al == 0x20) { /* Unresolved jump */ emu_ip = 0x150A; emu_last_cs = 0x01F7; emu_last_ip = 0x1504; emu_last_length = 0x001F; emu_last_crc = 0x69A1; emu_call(); return; }
	emu_cmpb(&emu_al, 0x2B);
	if (emu_al != 0x2B) goto l__1511;
	emu_lodsb(emu_es);
	emu_push(0x150F); f__01F7_1146_0023_6860();
	/* Unresolved jump */ emu_ip = 0x150F; emu_last_cs = 0x01F7; emu_last_ip = 0x150F; emu_last_length = 0x001F; emu_last_crc = 0x69A1; emu_call();
l__1511:
	emu_xchgw(&emu_dx, &emu_cx);
	if (emu_cx == 0) goto l__151C;
l__1515:
	emu_al = 0x30;
	emu_push(0x151A); f__01F7_1146_0023_6860();
l__151A:
	if (--emu_cx != 0) goto l__1515;
l__151C:
	emu_xchgw(&emu_dx, &emu_cx);
l__151E:
	if (emu_cx == 0) goto l__1532;
	emu_subw(&emu_bx, emu_cx);
l__1522:
	emu_lodsb(emu_es);
	emu_get_memory8(emu_ss, emu_di, 0x0) = emu_al;
	emu_incw(&emu_di);
	emu_decb(&emu_get_memory8(emu_ss, emu_bp, -0x14));
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) {
		emu_push(0x1530); emu_String_Format_Callback();
	}
l__1530:
	if (--emu_cx != 0) goto l__1522;
l__1532:
	emu_orw(&emu_bx, emu_bx);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) goto l__153F;
	emu_cx = emu_bx;
l__1538:
	emu_al = 0x20;
	emu_push(0x153D); f__01F7_1146_0023_6860();
l__153D:
	if (--emu_cx != 0) goto l__1538;
l__153F:
	goto l__118F;
l__1542:
	emu_get_memory16(emu_ss, emu_bp,  0x6) = emu_si;
	emu_di = emu_get_memory16(emu_ss, emu_bp,  0x4);
	emu_testw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x20);
	if ((emu_get_memory16(emu_ss, emu_bp, -0x2) & 0x20) != 0) goto l__155A;
	emu_di = emu_get_memory16(emu_ss, emu_di, 0x0);
	emu_addw(&emu_get_memory16(emu_ss, emu_bp,  0x4), 0x2);
	emu_push(emu_ds);
	emu_pop(&emu_es);
	/* Unresolved jump */ emu_ip = 0x1561; emu_last_cs = 0x01F7; emu_last_ip = 0x1558; emu_last_length = 0x0018; emu_last_crc = 0xAC5C; emu_call();
l__155A:
	emu_lfp(&emu_es, &emu_di, &emu_get_memory16(emu_ss, emu_di, 0x0));
	emu_addw(&emu_get_memory16(emu_ss, emu_bp,  0x4), 0x4);
	emu_ax = 0x50;
	emu_subb(&emu_al, emu_get_memory8(emu_ss, emu_bp, -0x14));
	emu_addw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_get_memory16(emu_es, emu_di, 0x0) = emu_ax;
	emu_testw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x10);
	if ((emu_get_memory16(emu_ss, emu_bp, -0x2) & 0x10) != 0) {
		emu_incw(&emu_di);
		emu_incw(&emu_di);
		emu_get_memory16(emu_es, emu_di, 0x0) = 0x0;
	}
l__157B:
	goto l__118C;
l__157E:
	emu_si = emu_get_memory16(emu_ss, emu_bp, -0x10);
	emu_es = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_di = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_al = 0x25;
l__1589:
	emu_push(0x158C); f__01F7_1146_0023_6860();
l__158C:
	emu_lodsb(emu_es);
	emu_orb(&emu_al, emu_al);
	if (emu_al != 0) goto l__1589;
l__1592:
	emu_cmpb(&emu_get_memory8(emu_ss, emu_bp, -0x14), 0x50);
	if ((int8)emu_get_memory8(emu_ss, emu_bp, -0x14) < (int8)0x50) {
		emu_push(0x159B); emu_String_Format_Callback();
	}
l__159B:
	emu_pop(&emu_es);
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x16), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp, -0x16) == 0x0) goto l__15A7;
	emu_ax = 0xFFFF;
	goto l__15AA;
l__15A7:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x12);
l__15AA:
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_sp += 12;
	return;
}

/**
 * Decompiled function f__01F7_1139_000D_AAB0()
 *
 * @name f__01F7_1139_000D_AAB0
 * @implements 01F7:1139:000D:AAB0 ()
 *
 * Called From: 01F7:13F0:0003:E391
 * Called From: 01F7:1450:0011:E292
 * Called From: 01F7:1450:0003:E339
 * Called From: 01F7:1482:0003:632D
 */
void f__01F7_1139_000D_AAB0()
{
l__1139:
	emu_push(emu_di);
	emu_cx = 0xFFFF;
	emu_xorb(&emu_al, emu_al);
	emu_repne_scasb();
	emu_notw(&emu_cx, emu_cx);
	emu_decw(&emu_cx);
	emu_pop(&emu_di);

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__01F7_1146_0023_6860()
 *
 * @name f__01F7_1146_0023_6860
 * @implements 01F7:1146:0023:6860 ()
 * @implements 01F7:1182:0001:6180
 *
 * Called From: 01F7:14D6:0005:2699
 * Called From: 01F7:14E7:0011:9CE5
 * Called From: 01F7:14ED:0006:7928
 * Called From: 01F7:1517:0009:310D
 * Called From: 01F7:1517:0005:6688
 * Called From: 01F7:153A:000D:4B6C
 * Called From: 01F7:153A:0005:2680
 * Called From: 01F7:1589:000E:A269
 * Called From: 01F7:1589:0003:E0AE
 */
void f__01F7_1146_0023_6860()
{
l__1146:
	emu_get_memory8(emu_ss, emu_di, 0x0) = emu_al;
	emu_incw(&emu_di);
	emu_decb(&emu_get_memory8(emu_ss, emu_bp, -0x14));
	if (emu_get_memory8(emu_ss, emu_bp, -0x14) != 0) goto l__1182;
	emu_String_Format_Callback(); return;
l__1182:

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function emu_String_Format_Callback()
 *
 * @name emu_String_Format_Callback
 * @implements 01F7:114F:001A:962D ()
 * @implements 01F7:1169:001A:40B5
 * @implements 01F7:1172:0011:8902
 * @implements 01F7:1182:0001:6180
 *
 * Called From: 01F7:11A5:0016:5243
 * Called From: 01F7:152D:000E:3CEF
 * Called From: 01F7:1598:0009:6CDC
 * Called From: 01F7:1598:000F:E3A2
 */
void emu_String_Format_Callback()
{
l__114F:
	emu_push(emu_bx);
	emu_push(emu_cx);
	emu_push(emu_dx);
	emu_push(emu_es);
	emu_movw(&emu_ax, emu_bp - 0x96);
	emu_subw(&emu_di, emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x96);
	emu_push(emu_ax);
	emu_push(emu_di);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_ss, emu_bp,  0xE);
	emu_push(0x1169);
	switch (emu_ip) {
		case 0x2DA4: emu_String_Format_Callback_2D4A(); break;
		case 0x374D: emu_String_Format_Callback_374D(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x01F7; emu_last_ip = 0x1166; emu_last_length = 0x001A; emu_last_crc = 0x962D;
			emu_call();
			return;
	}
l__1169:
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax == 0) {
		emu_get_memory16(emu_ss, emu_bp, -0x16) = 0x1;
	}
l__1172:
	emu_get_memory16(emu_ss, emu_bp, -0x14) = 0x50;
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x12), emu_di);
	emu_movw(&emu_di, emu_bp - 0x96);
	emu_pop(&emu_es);
	emu_pop(&emu_dx);
	emu_pop(&emu_cx);
	emu_pop(&emu_bx);
l__1182:

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__01F7_160D_001B_4171()
 *
 * @name f__01F7_160D_001B_4171
 * @implements 01F7:160D:001B:4171 ()
 * @implements 01F7:1628:0017:DA8D
 * @implements 01F7:163F:0007:9BD4
 * @implements 01F7:1660:000C:C6DC
 * @implements 01F7:1669:0003:5F0F
 * @implements 01F7:166C:0004:4909
 *
 * Called From: 01F7:1759:001B:9E34
 */
void f__01F7_160D_001B_4171()
{
l__160D:
	emu_cmpw(&emu_dx, emu_get_memory16(emu_cs, 0x00, 0x1601));
	if (emu_dx == emu_get_memory16(emu_cs, 0x00, 0x1601)) { /* Unresolved jump */ emu_ip = 0x164B; emu_last_cs = 0x01F7; emu_last_ip = 0x1612; emu_last_length = 0x001B; emu_last_crc = 0x4171; emu_call(); return; }
	emu_ds = emu_dx;
	emu_ds = emu_get_memory16(emu_ds, 0x00, 0x2);
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x2), 0x0);
	if (emu_get_memory16(emu_ds, 0x00, 0x2) == 0x0) goto l__1628;
	emu_get_memory16(emu_cs, 0x00, 0x1603) = emu_ds;
	goto l__1660;
l__1628:
	emu_ax = emu_ds;
	emu_cmpw(&emu_ax, emu_get_memory16(emu_cs, 0x00, 0x1601));
	if (emu_ax == emu_get_memory16(emu_cs, 0x00, 0x1601)) { /* Unresolved jump */ emu_ip = 0x1646; emu_last_cs = 0x01F7; emu_last_ip = 0x162F; emu_last_length = 0x0017; emu_last_crc = 0xDA8D; emu_call(); return; }
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x8);
	emu_get_memory16(emu_cs, 0x00, 0x1603) = emu_ax;
	emu_push(emu_ds);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(0x163F); f__01F7_16E1_0021_50D4();
l__163F:
	emu_ds = emu_get_memory16(emu_cs, 0x00, 0x1607);
	goto l__1669;
l__1660:
	emu_ds = emu_get_memory16(emu_cs, 0x00, 0x1607);
	emu_push(emu_dx);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
l__1669:
	emu_push(0x166C); f__01F7_1AA9_0014_FC63();
l__166C:
	emu_addw(&emu_sp, 0x4);

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__01F7_1670_003F_2D8D()
 *
 * @name f__01F7_1670_003F_2D8D
 * @implements 01F7:1670:003F:2D8D ()
 * @implements 01F7:16AF:0007:C584
 * @implements 01F7:16B6:0003:5D14
 * @implements 01F7:16B9:0012:7D5D
 * @implements 01F7:16CB:0037:9CE5
 *
 * Called From: 01F7:175E:0003:A283
 */
void f__01F7_1670_003F_2D8D()
{
l__1670:
	emu_ds = emu_dx;
	emu_push(emu_ds);
	emu_es = emu_get_memory16(emu_ds, 0x00, 0x2);
	emu_get_memory16(emu_ds, 0x00, 0x2) = 0x0;
	emu_get_memory16(emu_ds, 0x00, 0x8) = emu_es;
	emu_cmpw(&emu_dx, emu_get_memory16(emu_cs, 0x00, 0x1601));
	if (emu_dx == emu_get_memory16(emu_cs, 0x00, 0x1601)) goto l__16B6;
	emu_cmpw(&emu_get_memory16(emu_es, 0x00, 0x2), 0x0);
	if (emu_get_memory16(emu_es, 0x00, 0x2) != 0x0) goto l__16B6;
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x0);
	emu_pop(&emu_bx);
	emu_push(emu_es);
	emu_addw(&emu_get_memory16(emu_es, 0x00, 0x0), emu_ax);
	emu_cx = emu_es;
	emu_addw(&emu_dx, emu_ax);
	emu_es = emu_dx;
	emu_cmpw(&emu_get_memory16(emu_es, 0x00, 0x2), 0x0);
	if (emu_get_memory16(emu_es, 0x00, 0x2) != 0x0) goto l__16AF;
	emu_get_memory16(emu_es, 0x00, 0x8) = emu_cx;
	goto l__16B9;
l__16AF:
	emu_get_memory16(emu_es, 0x00, 0x2) = emu_cx;
	goto l__16B9;
l__16B6:
	emu_push(0x16B9); f__01F7_170A_0029_EF04();
l__16B9:
	emu_pop(&emu_es);
	emu_ax = emu_es;
	emu_addw(&emu_ax, emu_get_memory16(emu_es, 0x00, 0x0));
	emu_ds = emu_ax;
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x2), 0x0);
	if (emu_get_memory16(emu_ds, 0x00, 0x2) == 0x0) goto l__16CB;

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
l__16CB:
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x0);
	emu_addw(&emu_get_memory16(emu_es, 0x00, 0x0), emu_ax);
	emu_ax = emu_es;
	emu_bx = emu_ds;
	emu_addw(&emu_bx, emu_get_memory16(emu_ds, 0x00, 0x0));
	emu_es = emu_bx;
	emu_get_memory16(emu_es, 0x00, 0x2) = emu_ax;
	f__01F7_16E1_0021_50D4(); return;
}

/**
 * Decompiled function f__01F7_16E1_0021_50D4()
 *
 * @name f__01F7_16E1_0021_50D4
 * @implements 01F7:16E1:0021:50D4 ()
 * @implements 01F7:1702:0008:3627
 *
 * Called From: 01F7:163C:0017:DA8D
 * Called From: 01F7:18BB:0005:E1BF
 */
void f__01F7_16E1_0021_50D4()
{
l__16E1:
	emu_bx = emu_ds;
	emu_cmpw(&emu_bx, emu_get_memory16(emu_ds, 0x00, 0x6));
	if (emu_bx == emu_get_memory16(emu_ds, 0x00, 0x6)) goto l__1702;
	emu_es = emu_get_memory16(emu_ds, 0x00, 0x6);
	emu_ds = emu_get_memory16(emu_ds, 0x00, 0x4);
	emu_get_memory16(emu_ds, 0x00, 0x6) = emu_es;
	emu_get_memory16(emu_es, 0x00, 0x4) = emu_ds;
	emu_get_memory16(emu_cs, 0x00, 0x1605) = emu_ds;
	emu_ds = emu_bx;

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
l__1702:
	emu_get_memory16(emu_cs, 0x00, 0x1605) = 0x0;

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__01F7_170A_0029_EF04()
 *
 * @name f__01F7_170A_0029_EF04
 * @implements 01F7:170A:0029:EF04 ()
 * @implements 01F7:1733:000E:5FB3
 *
 * Called From: 01F7:16B6:0003:5D14
 */
void f__01F7_170A_0029_EF04()
{
l__170A:
	emu_ax = emu_get_memory16(emu_cs, 0x00, 0x1605);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax == 0) goto l__1733;
	emu_bx = emu_ss;
	emu_pushf();
	emu_cli();
	emu_ss = emu_ax;
	emu_es = emu_get_memory16(emu_ss, 0x00, 0x6);
	emu_get_memory16(emu_ss, 0x00, 0x6) = emu_ds;
	emu_get_memory16(emu_ds, 0x00, 0x4) = emu_ss;
	emu_ss = emu_bx;
	emu_popf();
	emu_get_memory16(emu_es, 0x00, 0x4) = emu_ds;
	emu_get_memory16(emu_ds, 0x00, 0x6) = emu_es;

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
l__1733:
	emu_get_memory16(emu_cs, 0x00, 0x1605) = emu_ds;
	emu_get_memory16(emu_ds, 0x00, 0x4) = emu_ds;
	emu_get_memory16(emu_ds, 0x00, 0x6) = emu_ds;

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__01F7_1741_001B_9E34()
 *
 * @name f__01F7_1741_001B_9E34
 * @implements 01F7:1741:001B:9E34 ()
 * @implements 01F7:175C:0002:C1BA
 * @implements 01F7:175E:0003:A283
 * @implements 01F7:1761:0009:4CC9
 *
 * Called From: 23E1:0223:0035:7AA8
 * Called From: 23E1:0247:0006:9688
 * Called From: 23E1:0247:0011:0456
 */
void f__01F7_1741_001B_9E34()
{
l__1741:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_si);
	emu_push(emu_di);
	emu_get_memory16(emu_cs, 0x00, 0x1607) = emu_ds;
	emu_dx = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_orw(&emu_dx, emu_dx);
	if (emu_dx == 0) goto l__1761;
	emu_cmpw(&emu_dx, emu_get_memory16(emu_cs, 0x00, 0x1603));
	if (emu_dx != emu_get_memory16(emu_cs, 0x00, 0x1603)) goto l__175E;
	emu_push(0x175C); f__01F7_160D_001B_4171();
l__175C:
	goto l__1761;
l__175E:
	emu_push(0x1761); f__01F7_1670_003F_2D8D();
l__1761:
	emu_ds = emu_get_memory16(emu_cs, 0x00, 0x1607);
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__01F7_176A_000D_8D0C()
 *
 * @name f__01F7_176A_000D_8D0C
 * @implements 01F7:176A:000D:8D0C ()
 * @implements 01F7:1777:0019:73FC
 * @implements 01F7:1793:0016:6ACD
 * @implements 01F7:17A9:0021:5DBA
 *
 * Called From: 01F7:18AA:0003:222F
 */
void f__01F7_176A_000D_8D0C()
{
l__176A:
	emu_push(emu_ax);
	emu_ds = emu_get_memory16(emu_cs, 0x00, 0x1607);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_ax);
	emu_push(0x1777); f__01F7_1AE8_0010_0EEE();
l__1777:
	emu_addw(&emu_sp, 0x4);
	emu_andw(&emu_ax, 0xF);
	if (emu_flags.zf) goto l__1793;
	emu_dx = 0x10;
	emu_subw(&emu_dx, emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_ds = emu_get_memory16(emu_cs, 0x00, 0x1607);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(0x1790); f__01F7_1AE8_0010_0EEE();
	/* Unresolved jump */ emu_ip = 0x1790; emu_last_cs = 0x01F7; emu_last_ip = 0x1790; emu_last_length = 0x0019; emu_last_crc = 0x73FC; emu_call();
l__1793:
	emu_pop(&emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_bx, emu_bx);
	emu_bl = emu_ah;
	emu_cl = 0x4;
	emu_shrw(&emu_bx, emu_cl);
	emu_shlw(&emu_ax, emu_cl);
	emu_ds = emu_get_memory16(emu_cs, 0x00, 0x1607);
	emu_push(emu_bx);
	emu_push(emu_ax);
	emu_push(0x17A9); f__01F7_1AE8_0010_0EEE();
l__17A9:
	emu_addw(&emu_sp, 0x4);
	emu_pop(&emu_bx);
	emu_cmpw(&emu_ax, 0xFFFF);
	if (emu_ax == 0xFFFF) { /* Unresolved jump */ emu_ip = 0x17CA; emu_last_cs = 0x01F7; emu_last_ip = 0x17B0; emu_last_length = 0x0021; emu_last_crc = 0x5DBA; emu_call(); return; }
	emu_get_memory16(emu_cs, 0x00, 0x1601) = emu_dx;
	emu_get_memory16(emu_cs, 0x00, 0x1603) = emu_dx;
	emu_ds = emu_dx;
	emu_get_memory16(emu_ds, 0x00, 0x0) = emu_bx;
	emu_get_memory16(emu_ds, 0x00, 0x2) = emu_dx;
	emu_ax = 0x4;

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__01F7_17CE_0015_8AC2()
 *
 * @name f__01F7_17CE_0015_8AC2
 * @implements 01F7:17CE:0015:8AC2 ()
 * @implements 01F7:17E3:0026:CC3B
 *
 * Called From: 01F7:18A5:0003:E289
 * Called From: 01F7:18A5:0053:AC2D
 * Called From: 01F7:18A5:0013:DC7A
 */
void f__01F7_17CE_0015_8AC2()
{
l__17CE:
	emu_push(emu_ax);
	emu_xorw(&emu_bx, emu_bx);
	emu_bl = emu_ah;
	emu_cl = 0x4;
	emu_shrw(&emu_bx, emu_cl);
	emu_shlw(&emu_ax, emu_cl);
	emu_ds = emu_get_memory16(emu_cs, 0x00, 0x1607);
	emu_push(emu_bx);
	emu_push(emu_ax);
	emu_push(0x17E3); f__01F7_1AE8_0010_0EEE();
l__17E3:
	emu_addw(&emu_sp, 0x4);
	emu_pop(&emu_bx);
	emu_cmpw(&emu_ax, 0xFFFF);
	if (emu_ax == 0xFFFF) { /* Unresolved jump */ emu_ip = 0x1824; emu_last_cs = 0x01F7; emu_last_ip = 0x17EA; emu_last_length = 0x0026; emu_last_crc = 0xCC3B; emu_call(); return; }
	emu_andw(&emu_ax, 0xF);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x1809; emu_last_cs = 0x01F7; emu_last_ip = 0x17EF; emu_last_length = 0x0026; emu_last_crc = 0xCC3B; emu_call(); return; }
	emu_cx = emu_get_memory16(emu_cs, 0x00, 0x1603);
	emu_get_memory16(emu_cs, 0x00, 0x1603) = emu_dx;
	emu_ds = emu_dx;
	emu_get_memory16(emu_ds, 0x00, 0x0) = emu_bx;
	emu_get_memory16(emu_ds, 0x00, 0x2) = emu_cx;
	emu_ax = 0x4;

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__01F7_1828_0023_D335()
 *
 * @name f__01F7_1828_0023_D335
 * @implements 01F7:1828:0023:D335 ()
 *
 * Called From: 01F7:18AF:0003:E29D
 */
void f__01F7_1828_0023_D335()
{
l__1828:
	emu_bx = emu_dx;
	emu_subw(&emu_get_memory16(emu_ds, 0x00, 0x0), emu_ax);
	emu_addw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x0));
	emu_ds = emu_dx;
	emu_get_memory16(emu_ds, 0x00, 0x0) = emu_ax;
	emu_get_memory16(emu_ds, 0x00, 0x2) = emu_bx;
	emu_bx = emu_dx;
	emu_addw(&emu_bx, emu_get_memory16(emu_ds, 0x00, 0x0));
	emu_ds = emu_bx;
	emu_get_memory16(emu_ds, 0x00, 0x2) = emu_dx;
	emu_ax = 0x4;

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__01F7_184B_000A_9146()
 *
 * @name f__01F7_184B_000A_9146
 * @implements 01F7:184B:000A:9146 ()
 * @implements 01F7:185E:004A:2060
 * @implements 01F7:1895:0013:DC7A
 * @implements 01F7:18A5:0003:E289
 * @implements 01F7:18A8:0002:CFBA
 * @implements 01F7:18AA:0003:222F
 * @implements 01F7:18AD:0002:CD3A
 * @implements 01F7:18AF:0003:E29D
 * @implements 01F7:18B2:0002:CABA
 * @implements 01F7:18B9:0005:E1BF
 * @implements 01F7:18BE:0014:4802
 * @implements 01F7:18C9:0009:4CC9
 *
 * Called From: 01F7:2209:0012:B06A
 * Called From: 01F7:3429:004A:D92C
 * Called From: 01F7:3429:004C:FCB7
 */
void f__01F7_184B_000A_9146()
{
l__184B:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_xorw(&emu_dx, emu_dx);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	goto l__185E;
l__185E:
	emu_cx = emu_ax;
	emu_orw(&emu_cx, emu_dx);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_get_memory16(emu_cs, 0x00, 0x1607) = emu_ds;
	if (emu_flags.zf) goto l__18C9;
	emu_addw(&emu_ax, 0x13);
	emu_adcw(&emu_dx, 0x0);
	if (emu_flags.cf) { /* Unresolved jump */ emu_ip = 0x18B4; emu_last_cs = 0x01F7; emu_last_ip = 0x1871; emu_last_length = 0x004A; emu_last_crc = 0x2060; emu_call(); return; }
	emu_testw(&emu_dx, 0xFFF0);
	if ((emu_dx & 0xFFF0) != 0) { /* Unresolved jump */ emu_ip = 0x18B4; emu_last_cs = 0x01F7; emu_last_ip = 0x1877; emu_last_length = 0x004A; emu_last_crc = 0x2060; emu_call(); return; }
	emu_cl = 0x4;
	emu_shrw(&emu_ax, emu_cl);
	emu_shlw(&emu_dx, emu_cl);
	emu_orb(&emu_ah, emu_dl);
	emu_dx = emu_get_memory16(emu_cs, 0x00, 0x1601);
	emu_orw(&emu_dx, emu_dx);
	if (emu_dx == 0) goto l__18AA;
	emu_dx = emu_get_memory16(emu_cs, 0x00, 0x1605);
	emu_orw(&emu_dx, emu_dx);
	if (emu_dx == 0) goto l__18A5;
	emu_bx = emu_dx;
l__1895:
	emu_ds = emu_dx;
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x0), emu_ax);
	if (emu_get_memory16(emu_ds, 0x00, 0x0) >= emu_ax) goto l__18B9;
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x6);
	emu_cmpw(&emu_dx, emu_bx);
	if (emu_dx != emu_bx) goto l__1895;
l__18A5:
	emu_push(0x18A8); f__01F7_17CE_0015_8AC2();
l__18A8:
	goto l__18C9;
l__18AA:
	emu_push(0x18AD); f__01F7_176A_000D_8D0C();
l__18AD:
	goto l__18C9;
l__18AF:
	emu_push(0x18B2); f__01F7_1828_0023_D335();
l__18B2:
	goto l__18C9;
l__18B9:
	if (!(emu_flags.cf || emu_flags.zf)) goto l__18AF;
	emu_push(0x18BE); f__01F7_16E1_0021_50D4();
l__18BE:
	emu_bx = emu_get_memory16(emu_ds, 0x00, 0x8);
	emu_get_memory16(emu_ds, 0x00, 0x2) = emu_bx;
	emu_ax = 0x4;
l__18C9:
	emu_ds = emu_get_memory16(emu_cs, 0x00, 0x1607);
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__01F7_1855_0053_AC2D()
 *
 * @name f__01F7_1855_0053_AC2D
 * @implements 01F7:1855:0053:AC2D ()
 * @implements 01F7:185E:004A:2060
 * @implements 01F7:1895:0013:DC7A
 * @implements 01F7:18A5:0003:E289
 * @implements 01F7:18A8:0002:CFBA
 * @implements 01F7:18AA:0003:222F
 * @implements 01F7:18AD:0002:CD3A
 * @implements 01F7:18AF:0003:E29D
 * @implements 01F7:18B2:0002:CABA
 * @implements 01F7:18B9:0005:E1BF
 * @implements 01F7:18BE:0014:4802
 * @implements 01F7:18C9:0009:4CC9
 *
 * Called From: 217E:0D5E:0010:E0EA
 * Called From: 23E1:006C:000B:8D1F
 */
void f__01F7_1855_0053_AC2D()
{
l__1855:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_dx = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
l__185E:
	emu_cx = emu_ax;
	emu_orw(&emu_cx, emu_dx);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_get_memory16(emu_cs, 0x00, 0x1607) = emu_ds;
	if (emu_flags.zf) goto l__18C9;
	emu_addw(&emu_ax, 0x13);
	emu_adcw(&emu_dx, 0x0);
	if (emu_flags.cf) { /* Unresolved jump */ emu_ip = 0x18B4; emu_last_cs = 0x01F7; emu_last_ip = 0x1871; emu_last_length = 0x004A; emu_last_crc = 0x2060; emu_call(); return; }
	emu_testw(&emu_dx, 0xFFF0);
	if ((emu_dx & 0xFFF0) != 0) { /* Unresolved jump */ emu_ip = 0x18B4; emu_last_cs = 0x01F7; emu_last_ip = 0x1877; emu_last_length = 0x004A; emu_last_crc = 0x2060; emu_call(); return; }
	emu_cl = 0x4;
	emu_shrw(&emu_ax, emu_cl);
	emu_shlw(&emu_dx, emu_cl);
	emu_orb(&emu_ah, emu_dl);
	emu_dx = emu_get_memory16(emu_cs, 0x00, 0x1601);
	emu_orw(&emu_dx, emu_dx);
	if (emu_dx == 0) goto l__18AA;
	emu_dx = emu_get_memory16(emu_cs, 0x00, 0x1605);
	emu_orw(&emu_dx, emu_dx);
	if (emu_dx == 0) goto l__18A5;
	emu_bx = emu_dx;
l__1895:
	emu_ds = emu_dx;
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x0), emu_ax);
	if (emu_get_memory16(emu_ds, 0x00, 0x0) >= emu_ax) goto l__18B9;
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x6);
	emu_cmpw(&emu_dx, emu_bx);
	if (emu_dx != emu_bx) goto l__1895;
l__18A5:
	emu_push(0x18A8); f__01F7_17CE_0015_8AC2();
l__18A8:
	goto l__18C9;
l__18AA:
	emu_push(0x18AD); f__01F7_176A_000D_8D0C();
l__18AD:
	goto l__18C9;
l__18AF:
	emu_push(0x18B2); f__01F7_1828_0023_D335();
l__18B2:
	goto l__18C9;
l__18B9:
	if (!(emu_flags.cf || emu_flags.zf)) goto l__18AF;
	emu_push(0x18BE); f__01F7_16E1_0021_50D4();
l__18BE:
	emu_bx = emu_get_memory16(emu_ds, 0x00, 0x8);
	emu_get_memory16(emu_ds, 0x00, 0x2) = emu_bx;
	emu_ax = 0x4;
l__18C9:
	emu_ds = emu_get_memory16(emu_cs, 0x00, 0x1607);
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__01F7_1A33_002B_B2CA()
 *
 * @name f__01F7_1A33_002B_B2CA
 * @implements 01F7:1A33:002B:B2CA ()
 * @implements 01F7:1A4C:0012:1FF4
 * @implements 01F7:1A5E:0022:58BB
 * @implements 01F7:1A76:000A:D91E
 * @implements 01F7:1A80:0014:CCE4
 * @implements 01F7:1AA4:0005:CAB4
 *
 * Called From: 01F7:1AD8:000B:C818
 * Called From: 01F7:1B62:0018:3D83
 */
void f__01F7_1A33_002B_B2CA()
{
l__1A33:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_si);
	emu_si = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_incw(&emu_si);
	emu_subw(&emu_si, emu_get_memory16(emu_ds, 0x00, 0x7B));
	emu_addw(&emu_si, 0x3F);
	emu_cl = 0x6;
	emu_shrw(&emu_si, emu_cl);
	emu_cmpw(&emu_si, emu_get_memory16(emu_ds, 0x00, 0x7B04));
	if (emu_si != emu_get_memory16(emu_ds, 0x00, 0x7B04)) goto l__1A5E;
l__1A4C:
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_dx = emu_get_memory16(emu_ss, emu_bp,  0x4);
	emu_get_memory16(emu_ds, 0x00, 0x8D) = emu_ax;
	emu_get_memory16(emu_ds, 0x00, 0x8B) = emu_dx;
	emu_ax = 0x1;
	goto l__1AA4;
l__1A5E:
	emu_cl = 0x6;
	emu_shlw(&emu_si, emu_cl);
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x91);
	emu_ax = emu_si;
	emu_addw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x7B));
	emu_cmpw(&emu_ax, emu_dx);
	if (emu_ax > emu_dx) {
		emu_si = emu_dx;
		emu_subw(&emu_si, emu_get_memory16(emu_ds, 0x00, 0x7B));
	}
l__1A76:
	emu_push(emu_si);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x7B));
	emu_push(emu_cs);
	emu_push(0x1A80); emu_Tools_Realloc();
l__1A80:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_dx = emu_ax;
	emu_cmpw(&emu_dx, 0xFFFF);
	if (emu_dx != 0xFFFF) { /* Unresolved jump */ emu_ip = 0x1A94; emu_last_cs = 0x01F7; emu_last_ip = 0x1A87; emu_last_length = 0x0014; emu_last_crc = 0xCCE4; emu_call(); return; }
	emu_ax = emu_si;
	emu_cl = 0x6;
	emu_shrw(&emu_ax, emu_cl);
	emu_get_memory16(emu_ds, 0x00, 0x7B04) = emu_ax;
	goto l__1A4C;
l__1AA4:
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_sp += 4;
	return;
}

/**
 * Decompiled function f__01F7_1AA9_0014_FC63()
 *
 * @name f__01F7_1AA9_0014_FC63
 * @implements 01F7:1AA9:0014:FC63 ()
 * @implements 01F7:1ABD:0013:C371
 * @implements 01F7:1AD0:000B:C818
 * @implements 01F7:1ADB:0009:7FFA
 * @implements 01F7:1AE4:0004:0994
 *
 * Called From: 01F7:1669:000C:C6DC
 * Called From: 01F7:1669:0003:5F0F
 */
void f__01F7_1AA9_0014_FC63()
{
l__1AA9:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_cx = emu_get_memory16(emu_ds, 0x00, 0x89);
	emu_bx = emu_get_memory16(emu_ds, 0x00, 0x87);
	emu_dx = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x4);
	emu_push(0x1ABD); emu_Tools_Cmpd();
l__1ABD:
	if (emu_flags.cf) { /* Unresolved jump */ emu_ip = 0x1ADF; emu_last_cs = 0x01F7; emu_last_ip = 0x1ABD; emu_last_length = 0x0013; emu_last_crc = 0xC371; emu_call(); return; }
	emu_cx = emu_get_memory16(emu_ds, 0x00, 0x91);
	emu_bx = emu_get_memory16(emu_ds, 0x00, 0x8F);
	emu_dx = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x4);
	emu_push(0x1AD0); emu_Tools_Cmpd();
l__1AD0:
	if (!(emu_flags.cf || emu_flags.zf)) { /* Unresolved jump */ emu_ip = 0x1ADF; emu_last_cs = 0x01F7; emu_last_ip = 0x1AD0; emu_last_length = 0x000B; emu_last_crc = 0xC818; emu_call(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x4));
	emu_push(0x1ADB); f__01F7_1A33_002B_B2CA();
l__1ADB:
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax != 0) goto l__1AE4;
	emu_ax = 0xFFFF;
	/* Unresolved jump */ emu_ip = 0x1AE6; emu_last_cs = 0x01F7; emu_last_ip = 0x1AE2; emu_last_length = 0x0009; emu_last_crc = 0x7FFA; emu_call();
l__1AE4:
	emu_xorw(&emu_ax, emu_ax);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__01F7_1AE8_0010_0EEE()
 *
 * @name f__01F7_1AE8_0010_0EEE
 * @implements 01F7:1AE8:0010:0EEE ()
 * @implements 01F7:1AF8:0021:2D85
 * @implements 01F7:1B19:0010:8C34
 * @implements 01F7:1B29:0011:30D4
 * @implements 01F7:1B3A:0013:4292
 * @implements 01F7:1B4D:0018:3D83
 * @implements 01F7:1B65:000E:4C7C
 *
 * Called From: 01F7:1774:000D:8D0C
 * Called From: 01F7:17A6:0016:6ACD
 * Called From: 01F7:17E0:0015:8AC2
 * Called From: 01F7:1BD6:0007:FC7B
 */
void f__01F7_1AE8_0010_0EEE()
{
l__1AE8:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x8);
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x8D);
	emu_xorw(&emu_dx, emu_dx);
	emu_cl = 0x4;
	emu_push(0x1AF8); emu_Tools_Shld_Wrapper();
l__1AF8:
	emu_addw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x8B));
	emu_adcw(&emu_dx, 0x0);
	emu_addw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x4));
	emu_adcw(&emu_dx, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpw(&emu_dx, 0xF);
	if ((int16)emu_dx < (int16)0xF) goto l__1B19;
	if ((int16)emu_dx > (int16)0xF) { /* Unresolved jump */ emu_ip = 0x1B11; emu_last_cs = 0x01F7; emu_last_ip = 0x1B0A; emu_last_length = 0x0021; emu_last_crc = 0x2D85; emu_call(); return; }
	emu_cmpw(&emu_ax, 0xFFFF);
	if (emu_ax <= 0xFFFF) goto l__1B19;
	emu_dx = 0xFFFF;
	emu_ax = 0xFFFF;
	/* Unresolved jump */ emu_ip = 0x1B6F; emu_last_cs = 0x01F7; emu_last_ip = 0x1B17; emu_last_length = 0x0021; emu_last_crc = 0x2D85; emu_call();
l__1B19:
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x8D);
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x8B);
	emu_cx = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_bx = emu_get_memory16(emu_ss, emu_bp,  0x4);
	emu_push(0x1B29); emu_Tools_AddCSIP_Wrapper();
l__1B29:
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_cx = emu_get_memory16(emu_ds, 0x00, 0x89);
	emu_bx = emu_get_memory16(emu_ds, 0x00, 0x87);
	emu_push(0x1B3A); emu_Tools_Cmpd();
l__1B3A:
	if (emu_flags.cf) { /* Unresolved jump */ emu_ip = 0x1B11; emu_last_cs = 0x01F7; emu_last_ip = 0x1B3A; emu_last_length = 0x0013; emu_last_crc = 0x4292; emu_call(); return; }
	emu_cx = emu_get_memory16(emu_ds, 0x00, 0x91);
	emu_bx = emu_get_memory16(emu_ds, 0x00, 0x8F);
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x2);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_push(0x1B4D); emu_Tools_Cmpd();
l__1B4D:
	if (!(emu_flags.cf || emu_flags.zf)) { /* Unresolved jump */ emu_ip = 0x1B11; emu_last_cs = 0x01F7; emu_last_ip = 0x1B4D; emu_last_length = 0x0018; emu_last_crc = 0x3D83; emu_call(); return; }
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x8D);
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x8B);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_dx;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(0x1B65); f__01F7_1A33_002B_B2CA();
l__1B65:
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax == 0) { /* Unresolved jump */ emu_ip = 0x1B11; emu_last_cs = 0x01F7; emu_last_ip = 0x1B67; emu_last_length = 0x000E; emu_last_crc = 0x4C7C; emu_call(); return; }
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x6);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x8);
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__01F7_1B73_0022_8ADB()
 *
 * @name f__01F7_1B73_0022_8ADB
 * @implements 01F7:1B73:0022:8ADB ()
 * @implements 01F7:1B95:002E:D9FA
 * @implements 01F7:1BA9:001A:B724
 *
 * Called From: 23E1:0367:0005:F70A
 * Called From: 23E1:0418:0005:F70A
 */
void f__01F7_1B73_0022_8ADB()
{
l__1B73:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x4);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = 0x0;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = 0x0;
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x91);
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x8F);
	emu_cx = emu_get_memory16(emu_ds, 0x00, 0x8D);
	emu_bx = emu_get_memory16(emu_ds, 0x00, 0x8B);
	emu_push(0x1B95); emu_Tools_SubCSIP();
l__1B95:
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp, -0x2) < 0x0) { /* Unresolved jump */ emu_ip = 0x1BB1; emu_last_cs = 0x01F7; emu_last_ip = 0x1B9F; emu_last_length = 0x002E; emu_last_crc = 0xD9FA; emu_call(); return; }
	if (emu_get_memory16(emu_ss, emu_bp, -0x2) <= 0x0) {
		emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x10);
		if (emu_get_memory16(emu_ss, emu_bp, -0x4) <= 0x10) { /* Unresolved jump */ emu_ip = 0x1BB1; emu_last_cs = 0x01F7; emu_last_ip = 0x1BA7; emu_last_length = 0x002E; emu_last_crc = 0xD9FA; emu_call(); return; }
	}
l__1BA9:
	emu_subw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x10);
	emu_sbbw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x0);
	emu_andw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0xFFF0);
	emu_andw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0xFFFF);
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x2);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__01F7_1BC3_000F_9450()
 *
 * @name f__01F7_1BC3_000F_9450
 * @implements 01F7:1BC3:000F:9450 ()
 * @implements 01F7:1BD2:0007:FC7B
 * @implements 01F7:1BD9:000A:4A06
 * @implements 01F7:1BE3:0012:5F20
 * @implements 01F7:1BF5:002F:3225
 * @implements 01F7:1C05:001F:2005
 * @implements 01F7:1C24:0033:C8B8
 * @implements 01F7:1C57:0011:EE81
 * @implements 01F7:1C5C:000C:9198
 * @implements 01F7:1C68:0040:3BF5
 * @implements 01F7:1C74:0034:7075
 * @implements 01F7:1CA8:0005:2C15
 * @implements 01F7:1CB2:000C:D81E
 * @implements 01F7:1CB9:0005:3E8A
 *
 * Called From: 23E1:033A:000B:CF65
 * Called From: 23E1:03E1:000B:CF65
 * Called From: B500:0069:0005:F701
 */
void f__01F7_1BC3_000F_9450()
{
l__1BC3:
	emu_push(emu_si);
	emu_push(emu_di);
	emu_push(emu_bp);
	emu_push(emu_ds);
	emu_ax = emu_get_memory16(emu_cs, 0x00, 0x1601);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax != 0) goto l__1BD2;
	/* Unresolved jump */ emu_ip = 0x1CAD; emu_last_cs = 0x01F7; emu_last_ip = 0x1BCF; emu_last_length = 0x000F; emu_last_crc = 0x9450; emu_call();
l__1BD2:
	emu_xorw(&emu_bx, emu_bx);
	emu_push(emu_bx);
	emu_push(emu_bx);
	emu_push(0x1BD9); f__01F7_1AE8_0010_0EEE();
l__1BD9:
	emu_addw(&emu_sp, 0x4);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax == 0) goto l__1BE3;
	goto l__1CA8;
l__1BE3:
	emu_bx = emu_get_memory16(emu_cs, 0x00, 0x1603);
	emu_ds = emu_bx;
	emu_addw(&emu_bx, emu_get_memory16(emu_ds, 0x00, 0x0));
	emu_cmpw(&emu_bx, emu_dx);
	if (emu_bx == emu_dx) goto l__1BF5;
	goto l__1CA8;
l__1BF5:
	emu_ax = emu_get_memory16(emu_cs, 0x00, 0x1601);
	emu_xorw(&emu_cx, emu_cx);
	emu_dx = emu_cx;
	emu_ds = emu_ax;
	emu_addw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x0));
	emu_es = emu_ax;
l__1C05:
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x2), 0x0);
	if (emu_get_memory16(emu_ds, 0x00, 0x2) != 0x0) goto l__1C24;
	emu_addw(&emu_cx, emu_get_memory16(emu_ds, 0x00, 0x0));
	emu_si = emu_ds;
	emu_cmpw(&emu_si, emu_get_memory16(emu_cs, 0x00, 0x1603));
	if (emu_si == emu_get_memory16(emu_cs, 0x00, 0x1603)) goto l__1C68;
	emu_cmpw(&emu_get_memory16(emu_es, 0x00, 0x2), 0x0);
	if (emu_get_memory16(emu_es, 0x00, 0x2) != 0x0) goto l__1C24;
	goto l__1CA8;
l__1C24:
	emu_si = emu_ds;
	emu_di = emu_es;
	emu_cmpw(&emu_si, emu_get_memory16(emu_cs, 0x00, 0x1603));
	if (emu_si == emu_get_memory16(emu_cs, 0x00, 0x1603)) goto l__1C68;
	emu_cmpw(&emu_si, emu_di);
	if (emu_si == emu_di) goto l__1CA8;
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x0), 0x0);
	if (emu_get_memory16(emu_ds, 0x00, 0x0) == 0x0) goto l__1CA8;
	emu_cmpw(&emu_di, emu_get_memory16(emu_cs, 0x00, 0x1601));
	if (emu_di <= emu_get_memory16(emu_cs, 0x00, 0x1601)) goto l__1CA8;
	emu_cmpw(&emu_di, emu_get_memory16(emu_cs, 0x00, 0x1603));
	if (emu_di > emu_get_memory16(emu_cs, 0x00, 0x1603)) goto l__1CA8;
	emu_cmpw(&emu_get_memory16(emu_es, 0x00, 0x2), 0x0);
	if (emu_get_memory16(emu_es, 0x00, 0x2) == 0x0) goto l__1C57;
	emu_cmpw(&emu_get_memory16(emu_es, 0x00, 0x2), emu_si);
	goto l__1C5C;
l__1C57:
	emu_cmpw(&emu_get_memory16(emu_es, 0x00, 0x8), emu_si);
l__1C5C:
	if (!emu_flags.zf) goto l__1CA8;
	emu_ds = emu_di;
	emu_addw(&emu_di, emu_get_memory16(emu_ds, 0x00, 0x0));
	emu_es = emu_di;
	goto l__1C05;
l__1C68:
	emu_ax = emu_get_memory16(emu_cs, 0x00, 0x1605);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax == 0) goto l__1CB2;
	emu_ds = emu_ax;
	emu_si = emu_ax;
l__1C74:
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x2), 0x0);
	if (emu_get_memory16(emu_ds, 0x00, 0x2) != 0x0) goto l__1CA8;
	emu_cmpw(&emu_si, emu_get_memory16(emu_cs, 0x00, 0x1601));
	if (emu_si < emu_get_memory16(emu_cs, 0x00, 0x1601)) goto l__1CA8;
	emu_cmpw(&emu_si, emu_get_memory16(emu_cs, 0x00, 0x1603));
	if (emu_si >= emu_get_memory16(emu_cs, 0x00, 0x1603)) goto l__1CA8;
	emu_addw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x0));
	emu_es = emu_get_memory16(emu_ds, 0x00, 0x6);
	emu_di = emu_es;
	emu_cmpw(&emu_di, emu_ax);
	if (emu_di == emu_ax) goto l__1CB2;
	emu_cmpw(&emu_si, emu_di);
	if (emu_si == emu_di) goto l__1CA8;
	emu_cmpw(&emu_get_memory16(emu_es, 0x00, 0x4), emu_si);
	if (emu_get_memory16(emu_es, 0x00, 0x4) != emu_si) goto l__1CA8;
	emu_si = emu_es;
	emu_ds = emu_si;
	goto l__1C74;
l__1CA8:
	emu_ax = 0xFFFF;
	goto l__1CB9;
l__1CB2:
	emu_cmpw(&emu_cx, emu_dx);
	if (emu_cx != emu_dx) goto l__1CA8;
	emu_ax = 0x2;
l__1CB9:
	emu_pop(&emu_ds);
	emu_pop(&emu_bp);
	emu_pop(&emu_di);
	emu_pop(&emu_si);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__01F7_1DE5_0036_9480()
 *
 * @name f__01F7_1DE5_0036_9480
 * @implements 01F7:1DE5:0036:9480 ()
 * @implements 01F7:1DFA:0021:B5CE
 * @implements 01F7:1E0E:000D:5F5C
 * @implements 01F7:1E1B:0034:E354
 * @implements 01F7:1E24:002B:E69F
 * @implements 01F7:1E4A:0005:E1FA
 * @implements 01F7:1E54:0008:66A0
 * @implements 01F7:1E57:0005:DEAA
 *
 * Called From: 23E1:03A7:000A:15E0
 * Called From: 23E1:044C:000A:15E0
 * Called From: 23E1:044C:0022:89AF
 */
void f__01F7_1DE5_0036_9480()
{
l__1DE5:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_si);
	emu_push(emu_di);
	emu_di = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_push(emu_ds);
	emu_bx = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_cmpw(&emu_di, 0xFFF0);
	if (emu_di >= 0xFFF0) {
		emu_incw(&emu_bx);
		emu_subw(&emu_di, 0x10);
	}
l__1DFA:
	emu_ds = emu_bx;
	emu_bx = emu_get_memory16(emu_ds, emu_di, 0x2);
	emu_orw(&emu_bx, emu_bx);
	if (emu_bx != 0) {
		emu_cmpw(&emu_bx, emu_get_memory16(emu_cs, 0x00, 0x1603));
		if (emu_bx == emu_get_memory16(emu_cs, 0x00, 0x1603)) goto l__1E54;
		emu_orw(&emu_bx, emu_bx);
		if (emu_bx != 0) goto l__1E1B;
	}
l__1E0E:
	emu_bx = emu_get_memory16(emu_cs, 0x00, 0x1601);
	emu_orw(&emu_bx, emu_bx);
	if (emu_bx == 0) { /* Unresolved jump */ emu_ip = 0x1E4F; emu_last_cs = 0x01F7; emu_last_ip = 0x1E15; emu_last_length = 0x000D; emu_last_crc = 0x5F5C; emu_call(); return; }
	emu_es = emu_bx;
	goto l__1E24;
l__1E1B:
	emu_es = emu_bx;
	emu_addw(&emu_bx, emu_get_memory16(emu_es, 0x00, 0x0));
	emu_es = emu_bx;
l__1E24:
	emu_get_memory16(emu_ds, emu_di, 0x2) = emu_es;
	emu_get_memory16(emu_ds, emu_di, 0x0) = 0x4;
	emu_ax = emu_get_memory16(emu_es, 0x00, 0x0);
	emu_bx = 0x10;
	emu_mulw(&emu_ax, emu_bx);
	emu_get_memory16(emu_ds, emu_di, 0x4) = emu_ax;
	emu_get_memory16(emu_ds, emu_di, 0x6) = emu_dx;
	emu_get_memory16(emu_ds, emu_di, 0x8) = 0x0;
	emu_cmpw(&emu_get_memory16(emu_es, 0x00, 0x2), 0x0);
	if (emu_get_memory16(emu_es, 0x00, 0x2) != 0x0) {
		emu_incw(&emu_get_memory16(emu_ds, emu_di, 0x8));
	}
l__1E4A:
	emu_ax = 0x2;
	goto l__1E57;
l__1E54:
	emu_ax = 0x5;
l__1E57:
	emu_pop(&emu_ds);
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__01F7_1E5C_000E_B47A()
 *
 * @name f__01F7_1E5C_000E_B47A
 * @implements 01F7:1E5C:000E:B47A ()
 * @implements 01F7:1E6A:0004:BEB2
 *
 * Called From: 2531:0024:0010:2000
 */
void f__01F7_1E5C_000E_B47A()
{
l__1E5C:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x1E6A); f__01F7_1EDE_0027_0D8F();
l__1E6A:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__01F7_1EDE_0027_0D8F()
 *
 * @name f__01F7_1EDE_0027_0D8F
 * @implements 01F7:1EDE:0027:0D8F ()
 * @implements 01F7:1F05:0005:6143
 *
 * Called From: 01F7:1E67:000E:B47A
 */
void f__01F7_1EDE_0027_0D8F()
{
l__1EDE:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_dx = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_get_memory16(emu_ds, 0x00, 0x9AD6) = emu_ax;
	emu_get_memory16(emu_ds, 0x00, 0x9AD4) = emu_dx;
	emu_get_memory16(emu_ds, 0x00, 0x9ACE) = 0x0;
	emu_ax = 0x1F7;
	emu_push(emu_ax);
	emu_ax = 0x1E8A;
	emu_push(emu_ax);
	emu_ax = 0x24;
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x1F05); emu_Interrupt_Vector_Set();
l__1F05:
	emu_addw(&emu_sp, 0x6);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__01F7_1FB0_0010_CF18()
 *
 * @name f__01F7_1FB0_0010_CF18
 * @implements 01F7:1FB0:0010:CF18 ()
 * @implements 01F7:1FC0:001A:86D3
 * @implements 01F7:1FDA:0007:984A
 *
 * Called From: 263B:001D:001C:9C72
 * Called From: 263B:0067:0024:9FBD
 * Called From: 263B:0067:0027:058F
 */
void f__01F7_1FB0_0010_CF18()
{
l__1FB0:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x8);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x8);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x1FC0); emu_Tools_StoreSegments();
l__1FC0:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x8);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x1FDA); f__01F7_1FE1_005F_A74A();
l__1FDA:
	emu_addw(&emu_sp, 0xE);
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__01F7_1FE1_005F_A74A()
 *
 * @name f__01F7_1FE1_005F_A74A
 * @implements 01F7:1FE1:005F:A74A ()
 * @implements 01F7:201F:0021:24DC
 *
 * Called From: 01F7:1FD7:001A:86D3
 */
void f__01F7_1FE1_005F_A74A()
{
l__1FE1:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0xE);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_push(emu_ds);
	emu_movw(&emu_cx, emu_bp - 0xE);
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_cx;
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ss;
	emu_get_memory8(emu_ss, emu_bp, -0xE) = 0x55;
	emu_get_memory8(emu_ss, emu_bp, -0xD) = 0xCD;
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_get_memory8(emu_ss, emu_bp, -0xC) = emu_al;
	emu_get_memory16(emu_ss, emu_bp, -0xB) = 0xCB5D;
	emu_cmpb(&emu_al, 0x25);
	if (emu_al >= 0x25) {
		emu_cmpb(&emu_al, 0x26);
		if (emu_al <= 0x26) {
			emu_get_memory8(emu_ss, emu_bp, -0xB) = 0x36;
			emu_get_memory16(emu_ss, emu_bp, -0xA) = 0x68F;
			emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_cx;
			emu_get_memory16(emu_ss, emu_bp, -0x6) = 0xCB5D;
		}
	}
	p__01F7_201F_0021_24DC(); return;
	emu_lfp(&emu_ds, &emu_si, &emu_get_memory16(emu_ss, emu_bp,  0x10));
	emu_push(emu_get_memory16(emu_ds, emu_si, 0x0));
	emu_push(emu_get_memory16(emu_ds, emu_si, 0x6));
	emu_lfp(&emu_ds, &emu_si, &emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, emu_si, 0x0));
	emu_movw(&emu_bx, emu_get_memory16(emu_ds, emu_si, 0x2));
	emu_movw(&emu_cx, emu_get_memory16(emu_ds, emu_si, 0x4));
	emu_movw(&emu_dx, emu_get_memory16(emu_ds, emu_si, 0x6));
	emu_movw(&emu_di, emu_get_memory16(emu_ds, emu_si, 0xA));
	emu_movw(&emu_si, emu_get_memory16(emu_ds, emu_si, 0x8));
	emu_pop(&emu_ds);
	emu_pop(&emu_es);
	emu_callf(emu_get_memory16(emu_ss, emu_bp, -0x2), emu_get_memory16(emu_ss, emu_bp, -0x4), 0x2040, 0x203D);
}

/**
 * Decompiled function f__01F7_2040_0033_F011()
 *
 * @name f__01F7_2040_0033_F011
 * @implements 01F7:2040:0033:F011 ()
 * @implements 01F7:2073:0007:F77E
 *
 */
void f__01F7_2040_0033_F011()
{
l__2040:
	emu_pushf();
	emu_pushf();
	emu_push(emu_si);
	emu_push(emu_ds);
	emu_push(emu_es);
	emu_lfp(&emu_ds, &emu_si, &emu_get_memory16(emu_ss, emu_bp,  0x10));
	emu_pop(&emu_get_memory16(emu_ds, emu_si, 0x0));
	emu_pop(&emu_get_memory16(emu_ds, emu_si, 0x6));
	emu_lfp(&emu_ds, &emu_si, &emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_pop(&emu_get_memory16(emu_ds, emu_si, 0x8));
	emu_pop(&emu_get_memory16(emu_ds, emu_si, 0xE));
	emu_pop(&emu_get_memory16(emu_ds, emu_si, 0xC));
	emu_andw(&emu_get_memory16(emu_ds, emu_si, 0xC), 0x1);
	emu_get_memory16(emu_ds, emu_si, 0xA) = emu_di;
	emu_get_memory16(emu_ds, emu_si, 0x6) = emu_dx;
	emu_get_memory16(emu_ds, emu_si, 0x4) = emu_cx;
	emu_get_memory16(emu_ds, emu_si, 0x2) = emu_bx;
	emu_get_memory16(emu_ds, emu_si, 0x0) = emu_ax;
	emu_pop(&emu_ds);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x2074; emu_last_cs = 0x01F7; emu_last_ip = 0x206C; emu_last_length = 0x0033; emu_last_crc = 0xF011; emu_call(); return; }
	emu_push(emu_ax);
	emu_push(emu_ax);
	emu_push(0x2073); f__01F7_0675_0020_D684();
l__2073:
	emu_pop(&emu_ax);
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
 * Decompiled function emu_File_IOCtrl()
 *
 * @name emu_File_IOCtrl
 * @implements 01F7:207A:0014:31F0 ()
 * @implements 01F7:208E:000D:E88D
 * @implements 01F7:209B:0002:C23A
 * @implements 01F7:20A1:0002:2597
 *
 * Called From: 01F7:2ADA:0012:A5D7
 * Called From: 01F7:2B02:0028:9E59
 */
void emu_File_IOCtrl()
{
l__207A:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_ds);
	emu_lfp(&emu_ds, &emu_dx, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_ah = 0x44;
	emu_al = emu_get_memory8(emu_ss, emu_bp,  0x8);
	emu_bx = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_cx = emu_get_memory16(emu_ss, emu_bp,  0xE);
	emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = 0x0070; emu_push(0x208E); Interrupt_DOS();
l__208E:
	emu_pop(&emu_ds);
	if (emu_flags.cf) { /* Unresolved jump */ emu_ip = 0x209D; emu_last_cs = 0x01F7; emu_last_ip = 0x208F; emu_last_length = 0x000D; emu_last_crc = 0xE88D; emu_call(); return; }
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp,  0x8), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp,  0x8) != 0x0) goto l__209B;
	emu_ax = emu_dx;
	goto l__20A1;
l__209B:
	goto l__20A1;
l__20A1:
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__01F7_20A3_0004_C957()
 *
 * @name f__01F7_20A3_0004_C957
 * @implements 01F7:15E2:0005:EB27 ()
 * @implements 01F7:15EA:000A:DA40
 * @implements 01F7:15F4:000A:C44C
 * @implements 01F7:15FE:0003:2B3E
 * @implements 01F7:20A3:0004:C957
 *
 * Called From: 01F7:143A:000B:FBFE
 */
void f__01F7_20A3_0004_C957()
{
	goto l__20A3;
l__15E2:
	emu_dx = 0x7AD2;
	goto l__15EA;
l__15EA:
	emu_cx = 0x5;
	emu_ah = 0x40;
	emu_bx = 0x2;
	emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = 0x0070; emu_push(0x15F4); Interrupt_DOS();
l__15F4:
	emu_cx = 0x27;
	emu_dx = 0x7ADC;
	emu_ah = 0x40;
	emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = 0x0070; emu_push(0x15FE); Interrupt_DOS();
l__15FE:
	emu_Error_Abnormal_Termination(); return;
l__20A3:

	/* Jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_ds, 0x00, 0x7B60);
	switch (emu_ip) {
		case 0x15E2: goto l__15E2;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x01F7; emu_last_ip = 0x20A3; emu_last_length = 0x0004; emu_last_crc = 0xC957;
			emu_call();
			return;
	}
}

/**
 * Decompiled function f__01F7_20B5_0076_64ED()
 *
 * @name f__01F7_20B5_0076_64ED
 * @implements 01F7:20B5:0076:64ED ()
 * @implements 01F7:2101:002A:0723
 * @implements 01F7:2128:0003:5D07
 * @implements 01F7:212B:000B:1E2A
 * @implements 01F7:2136:0012:62B8
 * @implements 01F7:2138:0010:D825
 * @implements 01F7:2144:0004:8839
 * @implements 01F7:2170:0005:2928
 * @implements 01F7:2175:0069:3297
 * @implements 01F7:2198:0046:47E9
 * @implements 01F7:21A3:003B:3DB6
 * @implements 01F7:21AB:0033:2CD8
 *
 * Called From: 01F7:0229:0004:BEF7
 */
void f__01F7_20B5_0076_64ED()
{
l__20B5:
	emu_pop(&emu_get_memory16(emu_ds, 0x00, 0x7B0C));
	emu_pop(&emu_get_memory16(emu_ds, 0x00, 0x7B0E));
	emu_pop(&emu_get_memory16(emu_ds, 0x00, 0x7B10));
	emu_get_memory16(emu_cs, 0x00, 0x20B3) = emu_ds;
	emu_get_memory16(emu_ds, 0x00, 0x7B12) = emu_si;
	emu_get_memory16(emu_ds, 0x00, 0x7B14) = emu_di;
	emu_cld();
	emu_es = emu_get_memory16(emu_ds, 0x00, 0x7B);
	emu_si = 0x80;
	emu_xorb(&emu_ah, emu_ah);
	emu_lodsb(emu_es);
	emu_incw(&emu_ax);
	emu_bp = emu_es;
	emu_xchgw(&emu_si, &emu_dx);
	emu_xchgw(&emu_ax, &emu_bx);
	emu_si = emu_get_memory16(emu_ds, 0x00, 0x75);
	emu_incw(&emu_si);
	emu_incw(&emu_si);
	emu_cx = 0x1;
	emu_cmpb(&emu_get_memory8(emu_ds, 0x00, 0x7D), 0x3);
	if (emu_get_memory8(emu_ds, 0x00, 0x7D) >= 0x3) {
		emu_es = emu_get_memory16(emu_ds, 0x00, 0x77);
		emu_di = emu_si;
		emu_cl = 0x7F;
		emu_xorb(&emu_al, emu_al);
		emu_repne_scasb();
		if (emu_cx == 0) goto l__2170;
		emu_xorb(&emu_cl, 0x7F);
	}
l__2101:
	emu_push(emu_ax);
	emu_ax = emu_cx;
	emu_addw(&emu_ax, emu_bx);
	emu_incw(&emu_ax);
	emu_andw(&emu_ax, 0xFFFE);
	emu_di = emu_sp;
	emu_subw(&emu_di, emu_ax);
	if (emu_flags.cf) goto l__2170;
	emu_sp = emu_di;
	emu_push(emu_es);
	emu_pop(&emu_ds);
	emu_push(emu_ss);
	emu_pop(&emu_es);
	emu_push(emu_cx);
	emu_decw(&emu_cx);
	emu_rep_movsb(emu_ds);
	emu_xorb(&emu_al, emu_al);
	emu_stosb();
	emu_ds = emu_bp;
	emu_xchgw(&emu_dx, &emu_si);
	emu_xchgw(&emu_cx, &emu_bx);
	emu_ax = emu_bx;
	emu_dx = emu_ax;
	emu_incw(&emu_bx);
l__2128:
	emu_push(0x212B); f__01F7_2148_0028_6CAC();
l__212B:
	if (!(emu_flags.cf || emu_flags.zf)) goto l__2138;
	if (emu_flags.cf) goto l__2175;
	emu_cmpb(&emu_al, 0xD);
	if (emu_al == 0xD) goto l__2144;
	emu_push(0x2136); f__01F7_2148_0028_6CAC();
l__2136:
	if (!(emu_flags.cf || emu_flags.zf)) { /* Unresolved jump */ emu_ip = 0x212D; emu_last_cs = 0x01F7; emu_last_ip = 0x2136; emu_last_length = 0x0012; emu_last_crc = 0x62B8; emu_call(); return; }
l__2138:
	emu_cmpb(&emu_al, 0x20);
	if (emu_al != 0x20) {
		emu_cmpb(&emu_al, 0xD);
		if (emu_al != 0xD) {
			emu_cmpb(&emu_al, 0x9);
			if (emu_al != 0x9) goto l__2128;
		}
	}
l__2144:
	emu_xorb(&emu_al, emu_al);
	goto l__2128;
l__2170:
	emu_Error_Abnormal_Termination(); return;
l__2175:
	emu_pop(&emu_cx);
	emu_addw(&emu_cx, emu_dx);
	emu_ds = emu_get_memory16(emu_cs, 0x00, 0x20B3);
	emu_get_memory16(emu_ds, 0x00, 0x7B06) = emu_bx;
	emu_incw(&emu_bx);
	emu_addw(&emu_bx, emu_bx);
	emu_addw(&emu_bx, emu_bx);
	emu_si = emu_sp;
	emu_bp = emu_sp;
	emu_subw(&emu_bp, emu_bx);
	if (emu_flags.cf) goto l__2170;
	emu_sp = emu_bp;
	emu_get_memory16(emu_ds, 0x00, 0x7B08) = emu_bp;
	emu_get_memory16(emu_ds, 0x00, 0x7B0A) = emu_ss;
l__2198:
	if (emu_cx == 0) goto l__21AB;
	emu_get_memory16(emu_ss, emu_bp,  0x0) = emu_si;
	emu_get_memory16(emu_ss, emu_bp,  0x2) = emu_ss;
	emu_addw(&emu_bp, 0x4);
l__21A3:
	emu_lodsb(emu_ss);
	emu_orb(&emu_al, emu_al);
	if (--emu_cx != 0 && !emu_flags.zf) goto l__21A3;
	if (emu_al == 0) goto l__2198;
l__21AB:
	emu_xorw(&emu_ax, emu_ax);
	emu_get_memory16(emu_ss, emu_bp,  0x0) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp,  0x2) = emu_ax;
	emu_ds = emu_get_memory16(emu_cs, 0x00, 0x20B3);
	emu_si = emu_get_memory16(emu_ds, 0x00, 0x7B12);
	emu_di = emu_get_memory16(emu_ds, 0x00, 0x7B14);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x7B10));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x7B0E));
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x7B06);
	emu_get_memory16(emu_ds, 0x00, 0x6B) = emu_ax;
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x7B0A);
	emu_get_memory16(emu_ds, 0x00, 0x6F) = emu_ax;
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x7B08);
	emu_get_memory16(emu_ds, 0x00, 0x6D) = emu_ax;

	/* Jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_ds, 0x00, 0x7B0C);
	switch (emu_ip) {
		case 0x022D: f__01F7_022D_0003_9E5A(); return;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x01F7; emu_last_ip = 0x21DA; emu_last_length = 0x0033; emu_last_crc = 0x2CD8;
			emu_call();
			return;
	}
}

/**
 * Decompiled function f__01F7_2148_0028_6CAC()
 *
 * @name f__01F7_2148_0028_6CAC
 * @implements 01F7:2148:0028:6CAC ()
 * @implements 01F7:2153:001D:602A
 * @implements 01F7:216D:0003:E0DD
 * @implements 01F7:216F:0001:6180
 *
 * Called From: 01F7:2128:0076:64ED
 * Called From: 01F7:2128:0003:5D07
 * Called From: 01F7:2128:002A:0723
 */
void f__01F7_2148_0028_6CAC()
{
l__2148:
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax != 0) {
		emu_incw(&emu_dx);
		emu_stosb();
		emu_orb(&emu_al, emu_al);
		if (emu_al == 0) {
			emu_incw(&emu_bx);
		}
	}
l__2153:
	emu_xchgb(&emu_al, &emu_ah);
	emu_xorb(&emu_al, emu_al);
	emu_stc();
	if (emu_cx == 0) goto l__216F;
	emu_lodsb(emu_ds);
	emu_decw(&emu_cx);
	emu_subb(&emu_al, 0x22);
	if (emu_flags.zf) goto l__216F;
	emu_addb(&emu_al, 0x22);
	emu_cmpb(&emu_al, 0x5C);
	if (emu_al == 0x5C) {
		emu_cmpb(&emu_get_memory8(emu_ds, emu_si, 0x0), 0x22);
		if (emu_get_memory8(emu_ds, emu_si, 0x0) == 0x22) {
			emu_lodsb(emu_ds);
			emu_decw(&emu_cx);
		}
	}
l__216D:
	emu_orw(&emu_si, emu_si);
l__216F:

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function emu_Tools_Realloc()
 *
 * @name emu_Tools_Realloc
 * @implements 01F7:21DE:000D:9231 ()
 * @implements 01F7:21EB:0007:3DF1
 * @implements 01F7:21F8:0002:2597
 *
 * Called From: 01F7:1A7D:000A:D91E
 */
void emu_Tools_Realloc()
{
l__21DE:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_ah = 0x4A;
	emu_bx = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_es = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = 0x0070; emu_push(0x21EB); Interrupt_DOS();
l__21EB:
	if (emu_flags.cf) { /* Unresolved jump */ emu_ip = 0x21F2; emu_last_cs = 0x01F7; emu_last_ip = 0x21EB; emu_last_length = 0x0007; emu_last_crc = 0x3DF1; emu_call(); return; }
	emu_ax = 0xFFFF;
	goto l__21F8;
l__21F8:
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__01F7_21FA_0012_B06A()
 *
 * @name f__01F7_21FA_0012_B06A
 * @implements 01F7:21FA:0012:B06A ()
 * @implements 01F7:220C:0017:0F59
 * @implements 01F7:2223:002F:EF0A
 * @implements 01F7:222E:0024:4959
 *
 * Called From: 01F7:0229:0004:BEF7
 */
void f__01F7_21FA_0012_B06A()
{
l__21FA:
	emu_push(emu_si);
	emu_push(emu_di);
	emu_es = emu_get_memory16(emu_ds, 0x00, 0x77);
	emu_xorw(&emu_di, emu_di);
	emu_push(emu_es);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x79));
	emu_push(emu_cs);
	emu_push(0x220C); f__01F7_184B_000A_9146();
l__220C:
	emu_pop(&emu_bx);
	emu_bx = emu_ax;
	emu_pop(&emu_es);
	emu_get_memory16(emu_ds, 0x00, 0x7B16) = emu_ax;
	emu_get_memory16(emu_ds, 0x00, 0x7B18) = emu_dx;
	emu_push(emu_ds);
	emu_ds = emu_dx;
	emu_orw(&emu_ax, emu_dx);
	if (emu_ax != 0) goto l__2223;
	emu_Error_Abnormal_Termination(); return;
l__2223:
	emu_xorw(&emu_ax, emu_ax);
	emu_cx = 0xFFFF;
	emu_cmpb(&emu_get_memory8(emu_es, emu_di, 0x0), 0x0);
	if (emu_get_memory8(emu_es, emu_di, 0x0) == 0x0) { /* Unresolved jump */ emu_ip = 0x223D; emu_last_cs = 0x01F7; emu_last_ip = 0x222C; emu_last_length = 0x002F; emu_last_crc = 0xEF0A; emu_call(); return; }
l__222E:
	emu_get_memory16(emu_ds, emu_bx, 0x0) = emu_di;
	emu_get_memory16(emu_ds, emu_bx, 0x2) = emu_es;
	emu_addw(&emu_bx, 0x4);
	emu_repne_scasb();
	emu_cmpb(&emu_get_memory8(emu_es, emu_di, 0x0), emu_al);
	if (emu_get_memory8(emu_es, emu_di, 0x0) != emu_al) goto l__222E;
	emu_get_memory16(emu_ds, emu_bx, 0x0) = emu_ax;
	emu_get_memory16(emu_ds, emu_bx, 0x2) = emu_ax;
	emu_pop(&emu_ds);
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x7B18);
	emu_get_memory16(emu_ds, 0x00, 0x73) = emu_ax;
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x7B16);
	emu_get_memory16(emu_ds, 0x00, 0x71) = emu_ax;

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function emu_String_ToInteger()
 *
 * @name emu_String_ToInteger
 * @implements 01F7:2252:0045:03CB ()
 * @implements 01F7:2268:002F:CA14
 * @implements 01F7:227F:0018:909F
 * @implements 01F7:2283:0014:C5BB
 * @implements 01F7:22B7:0010:6BC2
 * @implements 01F7:22C1:0006:AA6B
 *
 * Called From: B4B5:03FB:000F:A0F4
 * Called From: B4B5:04B7:000A:882F
 * Called From: B4B5:04FB:000A:882F
 * Called From: B4B5:0529:000A:882F
 * Called From: B4B5:06BD:000F:80F4
 * Called From: B4B5:0754:000F:A0F4
 * Called From: B4B5:07E8:000A:882F
 * Called From: B4B5:0807:000A:882F
 * Called From: B4B5:08F8:000F:40EC
 * Called From: B4B5:0926:0012:1539
 * Called From: B4B5:0982:000A:882F
 * Called From: B4B5:09AE:000A:882F
 * Called From: B4B5:0A9C:000B:0225
 * Called From: B4B5:0B40:000B:0225
 * Called From: B4B5:0BE3:000B:0225
 * Called From: B4B5:0CA8:000B:3223
 * Called From: B4B5:0DC2:000A:882F
 * Called From: B4B5:0F4C:000A:882F
 * Called From: B4B5:0F6B:000A:882F
 * Called From: B4B5:1037:000E:3FBC
 * Called From: B4FC:0048:000D:B649
 * Called From: B503:0C73:001E:FA7B
 * Called From: B503:0C73:000E:2E19
 * Called From: B503:0D4C:0017:BC75
 * Called From: B503:0D4C:000E:7F53
 */
void emu_String_ToInteger()
{
l__2252:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_si);
	emu_push(emu_di);
	emu_push(emu_es);
	emu_push(emu_bp);
	emu_lfp(&emu_es, &emu_si, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cld();
	emu_subw(&emu_ax, emu_ax);
	emu_cwd();
	emu_cx = 0xA;
	emu_bh = 0x0;
	emu_di = 0x76BD;
l__2268:
	emu_bl = emu_get_memory8(emu_es, emu_si, 0x0);
	emu_incw(&emu_si);
	emu_testb(&emu_get_memory8(emu_ds, emu_bx + emu_di, 0x0), 0x1);
	if ((emu_get_memory8(emu_ds, emu_bx + emu_di, 0x0) & 0x1) != 0) goto l__2268;
	emu_bp = 0x0;
	emu_cmpb(&emu_bl, 0x2B);
	if (emu_bl != 0x2B) {
		emu_cmpb(&emu_bl, 0x2D);
		if (emu_bl != 0x2D) goto l__2283;
		emu_incw(&emu_bp);
	}
l__227F:
	emu_bl = emu_get_memory8(emu_es, emu_si, 0x0);
	emu_incw(&emu_si);
l__2283:
	emu_cmpb(&emu_bl, 0x39);
	if (emu_bl > 0x39) goto l__22B7;
	emu_subb(&emu_bl, 0x30);
	if (emu_flags.cf) goto l__22B7;
	emu_mulw(&emu_ax, emu_cx);
	emu_addw(&emu_ax, emu_bx);
	emu_adcb(&emu_dl, emu_dh);
	if (emu_flags.zf) goto l__227F;
	/* Unresolved jump */ emu_ip = 0x22A9; emu_last_cs = 0x01F7; emu_last_ip = 0x2295; emu_last_length = 0x0014; emu_last_crc = 0xC5BB; emu_call();
l__22B7:
	emu_decw(&emu_bp);
	if (!(emu_flags.sf != emu_flags.of)) {
		emu_negw(&emu_dx, emu_dx);
		emu_negw(&emu_ax, emu_ax);
		emu_sbbw(&emu_dx, 0x0);
	}
l__22C1:
	emu_pop(&emu_bp);
	emu_pop(&emu_es);
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function emu_File_GSAttr()
 *
 * @name emu_File_GSAttr
 * @implements 01F7:22E8:0011:1764 ()
 * @implements 01F7:22F9:0006:9F8A
 * @implements 01F7:22FF:0004:EC99
 * @implements 01F7:2303:0002:2597
 *
 * Called From: 01F7:2A2D:000E:9A13
 */
void emu_File_GSAttr()
{
l__22E8:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_ds);
	emu_cx = emu_get_memory16(emu_ss, emu_bp,  0xC);
	emu_ah = 0x43;
	emu_al = emu_get_memory8(emu_ss, emu_bp,  0xA);
	emu_lfp(&emu_ds, &emu_dx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = 0x0070; emu_push(0x22F9); Interrupt_DOS();
l__22F9:
	emu_pop(&emu_ds);
	if (emu_flags.cf) goto l__22FF;
	emu_xchgw(&emu_ax, &emu_cx);
	goto l__2303;
l__22FF:
	emu_push(emu_ax);
	emu_push(0x2303); f__01F7_0675_0020_D684();
l__2303:
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function emu_File_Close_Wrapper()
 *
 * @name emu_File_Close_Wrapper
 * @implements 01F7:23CC:0013:6B52 ()
 * @implements 01F7:23DF:0002:C8BA
 * @implements 01F7:23E1:0010:A514
 * @implements 01F7:23F1:0003:2EB7
 * @implements 01F7:23F2:0002:2597
 *
 * Called From: 1DB6:00C0:000F:5886
 * Called From: 1FB5:0054:0012:2389
 * Called From: 24E6:00AD:000C:1590
 * Called From: 261F:019A:001A:54D2
 */
void emu_File_Close_Wrapper()
{
l__23CC:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_dx = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_cmpw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x795A));
	if (emu_dx < emu_get_memory16(emu_ds, 0x00, 0x795A)) goto l__23E1;
	emu_ax = 0x6;
	emu_push(emu_ax);
	emu_push(0x23DF); f__01F7_0675_0020_D684();
l__23DF:
	goto l__23F2;
l__23E1:
	emu_bx = emu_dx;
	emu_shlw(&emu_bx, 0x1);
	emu_get_memory16(emu_ds, emu_bx, 0x795C) = 0x0;
	emu_push(emu_dx);
	emu_push(emu_cs);
	emu_push(0x23F1); emu_File_Close();
l__23F1:
	emu_pop(&emu_cx);
l__23F2:
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function emu_File_Close()
 *
 * @name emu_File_Close
 * @implements 01F7:23F4:000A:3443 ()
 * @implements 01F7:23FE:000E:0B8C
 * @implements 01F7:240C:0004:2C1C
 * @implements 01F7:2410:0002:2597
 *
 * Called From: 01F7:23EE:0010:A514
 */
void emu_File_Close()
{
l__23F4:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_ah = 0x3E;
	emu_bx = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = 0x0070; emu_push(0x23FE); Interrupt_DOS();
l__23FE:
	if (emu_flags.cf) goto l__240C;
	emu_shlw(&emu_bx, 0x1);
	emu_get_memory16(emu_ds, emu_bx, 0x795C) = 0x0;
	emu_xorw(&emu_ax, emu_ax);
	goto l__2410;
l__240C:
	emu_push(emu_ax);
	emu_push(0x2410); f__01F7_0675_0020_D684();
l__2410:
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__01F7_2412_0011_FC80()
 *
 * @name f__01F7_2412_0011_FC80
 * @implements 01F7:2412:0011:FC80 ()
 * @implements 01F7:2426:0012:574D
 * @implements 01F7:2438:0023:497F
 * @implements 01F7:245B:0035:89F4
 * @implements 01F7:2461:002F:28DD
 * @implements 01F7:24DA:0005:2FC3
 *
 * Called From: 01F7:261E:0012:C6FD
 * Called From: 01F7:44A9:0014:E159
 */
void f__01F7_2412_0011_FC80()
{
l__2412:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_si);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_ax != 0) goto l__2426;
	emu_push(emu_cs);
	/* Unresolved call */ emu_push(0x2423); emu_ip = 0x2520; emu_last_cs = 0x01F7; emu_last_ip = 0x2420; emu_last_length = 0x0011; emu_last_crc = 0xFC80; emu_call();
	/* Unresolved jump */ emu_ip = 0x2423; emu_last_cs = 0x01F7; emu_last_ip = 0x2423; emu_last_length = 0x0011; emu_last_crc = 0xFC80; emu_call();
l__2426:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x12);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x6));
	if (emu_ax == emu_get_memory16(emu_ss, emu_bp,  0x6)) goto l__2438;
	emu_ax = 0xFFFF;
	/* Unresolved jump */ emu_ip = 0x24DC; emu_last_cs = 0x01F7; emu_last_ip = 0x2435; emu_last_length = 0x0012; emu_last_crc = 0x574D; emu_call();
l__2438:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x0), 0x0);
	if ((int16)emu_get_memory16(emu_es, emu_bx, 0x0) < (int16)0x0) { /* Unresolved jump */ emu_ip = 0x2492; emu_last_cs = 0x01F7; emu_last_ip = 0x243F; emu_last_length = 0x0023; emu_last_crc = 0x497F; emu_call(); return; }
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0x2), 0x8);
	if ((emu_get_memory16(emu_es, emu_bx, 0x2) & 0x8) != 0) goto l__2461;
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0xE);
	emu_dx = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_addw(&emu_dx, 0x5);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_ax == emu_get_memory16(emu_ss, emu_bp,  0x8)) goto l__245B;
	goto l__24DA;
l__245B:
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0xC), emu_dx);
	if (emu_get_memory16(emu_es, emu_bx, 0xC) != emu_dx) goto l__24DA;
l__2461:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_get_memory16(emu_es, emu_bx, 0x0) = 0x0;
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0xE);
	emu_dx = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_addw(&emu_dx, 0x5);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_ax == emu_get_memory16(emu_ss, emu_bp,  0x8)) {
		emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0xC), emu_dx);
		if (emu_get_memory16(emu_es, emu_bx, 0xC) == emu_dx) {
			emu_ax = emu_get_memory16(emu_es, emu_bx, 0xA);
			emu_dx = emu_get_memory16(emu_es, emu_bx, 0x8);
			emu_get_memory16(emu_es, emu_bx, 0xE) = emu_ax;
			emu_get_memory16(emu_es, emu_bx, 0xC) = emu_dx;
		}
	}
	goto l__24DA;
l__24DA:
	emu_xorw(&emu_ax, emu_ax);
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__01F7_2562_0026_6AD7()
 *
 * @name f__01F7_2562_0026_6AD7
 * @implements 01F7:2562:0026:6AD7 ()
 * @implements 01F7:2588:0005:6303
 *
 * Called From: 176C:7E79:0022:7E35
 * Called From: 176C:7EE0:0031:E88B
 */
void f__01F7_2562_0026_6AD7()
{
l__2562:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x18));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x16));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x14));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x12));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x10));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x2588); f__01F7_352D_0051_5751();
l__2588:
	emu_addw(&emu_sp, 0x14);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__01F7_260F_0012_C6FD()
 *
 * @name f__01F7_260F_0012_C6FD
 * @implements 01F7:260F:0012:C6FD ()
 * @implements 01F7:2621:000B:78B3
 * @implements 01F7:262C:0015:4E56
 * @implements 01F7:2648:0030:93BB
 * @implements 01F7:2678:0012:5757
 * @implements 01F7:268C:0003:2E57
 *
 * Called From: 01F7:33C2:001C:2400
 */
void f__01F7_260F_0012_C6FD()
{
l__260F:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_si);
	emu_si = emu_get_memory16(emu_ss, emu_bp,  0xE);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x2621); f__01F7_2412_0011_FC80();
l__2621:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax == 0) goto l__262C;
	emu_ax = 0xFFFF;
	goto l__268C;
l__262C:
	emu_cmpw(&emu_si, 0x1);
	if (emu_si != 0x1) goto l__2648;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x0), 0x0);
	if ((int16)emu_get_memory16(emu_es, emu_bx, 0x0) <= (int16)0x0) goto l__2648;
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_bx);
	/* Unresolved call */ emu_push(0x2641); emu_ip = 0x258D; emu_last_cs = 0x01F7; emu_last_ip = 0x263E; emu_last_length = 0x0015; emu_last_crc = 0x4E56; emu_call();
	/* Unresolved jump */ emu_ip = 0x2641; emu_last_cs = 0x01F7; emu_last_ip = 0x2641; emu_last_length = 0x0015; emu_last_crc = 0x4E56; emu_call();
l__2648:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_andw(&emu_get_memory16(emu_es, emu_bx, 0x2), 0xFE5F);
	emu_get_memory16(emu_es, emu_bx, 0x0) = 0x0;
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0xA);
	emu_dx = emu_get_memory16(emu_es, emu_bx, 0x8);
	emu_get_memory16(emu_es, emu_bx, 0xE) = emu_ax;
	emu_get_memory16(emu_es, emu_bx, 0xC) = emu_dx;
	emu_push(emu_si);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x4);
	emu_ax = (int8)emu_al;
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x2678); emu_File_Seek();
l__2678:
	emu_addw(&emu_sp, 0x8);
	emu_cmpw(&emu_dx, 0xFFFF);
	if (emu_dx != 0xFFFF) { /* Unresolved jump */ emu_ip = 0x268A; emu_last_cs = 0x01F7; emu_last_ip = 0x267E; emu_last_length = 0x0012; emu_last_crc = 0x5757; emu_call(); return; }
	emu_cmpw(&emu_ax, 0xFFFF);
	if (emu_ax != 0xFFFF) { /* Unresolved jump */ emu_ip = 0x268A; emu_last_cs = 0x01F7; emu_last_ip = 0x2683; emu_last_length = 0x0012; emu_last_crc = 0x5757; emu_call(); return; }
	emu_ax = 0xFFFF;
	goto l__268C;
l__268C:
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__01F7_276F_000F_E56B()
 *
 * @name f__01F7_276F_000F_E56B
 * @implements 01F7:276F:000F:E56B ()
 * @implements 01F7:277E:001A:E421
 * @implements 01F7:2798:000E:4377
 * @implements 01F7:27A6:000A:3382
 * @implements 01F7:27B0:000E:BC7F
 * @implements 01F7:27BE:000E:2F67
 * @implements 01F7:27DF:0010:D57C
 * @implements 01F7:27EF:000E:4F5C
 * @implements 01F7:27F8:0005:8BCF
 *
 * Called From: 1DB6:010B:0014:A7DD
 * Called From: 261F:00B1:000E:768E
 */
void f__01F7_276F_000F_E56B()
{
l__276F:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x44);
	emu_push(emu_si);
	emu_si = emu_get_memory16(emu_ss, emu_bp,  0xA);
	emu_push(emu_cs);
	emu_push(0x277E); emu_Drive_Get_Default_Wrapper();
l__277E:
	emu_addb(&emu_al, 0x41);
	emu_get_memory8(emu_ss, emu_bp, -0x44) = emu_al;
	emu_get_memory8(emu_ss, emu_bp, -0x43) = 0x3A;
	emu_get_memory8(emu_ss, emu_bp, -0x42) = 0x5C;
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x41);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x2798); emu_Drive_Get_Curdir();
l__2798:
	emu_addw(&emu_sp, 0x6);
	emu_cmpw(&emu_ax, 0xFFFF);
	if (emu_ax != 0xFFFF) goto l__27A6;
	emu_xorw(&emu_dx, emu_dx);
	emu_xorw(&emu_ax, emu_ax);
	goto l__27F8;
l__27A6:
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x44);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x27B0); emu_String_strlen();
l__27B0:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_cmpw(&emu_ax, emu_si);
	if (emu_ax < emu_si) goto l__27BE;
	emu_get_memory16(emu_ds, 0x00, 0x7F) = 0x22;
	/* Unresolved jump */ emu_ip = 0x27A0; emu_last_cs = 0x01F7; emu_last_ip = 0x27BC; emu_last_length = 0x000E; emu_last_crc = 0xBC7F; emu_call();
l__27BE:
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_ax != 0) goto l__27DF;
	emu_push(emu_si);
	emu_push(emu_cs);
	emu_push(0x27CC); f__01F7_184B_000A_9146();
	/* Unresolved jump */ emu_ip = 0x27CC; emu_last_cs = 0x01F7; emu_last_ip = 0x27CC; emu_last_length = 0x000E; emu_last_crc = 0x2F67; emu_call();
l__27DF:
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x44);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x27EF); emu_String_strcpy();
l__27EF:
	emu_addw(&emu_sp, 0x8);
	emu_dx = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
l__27F8:
	emu_pop(&emu_si);
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__01F7_27FD_0037_E2C0()
 *
 * @name f__01F7_27FD_0037_E2C0
 * @implements 01F7:27FD:0037:E2C0 ()
 * @implements 01F7:282E:0006:3B29
 * @implements 01F7:2834:0039:D5C0
 * @implements 01F7:283B:0032:FBDE
 * @implements 01F7:2867:0006:F7CE
 *
 * Called From: 01F7:4035:0011:8951
 */
void f__01F7_27FD_0037_E2C0()
{
l__27FD:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x4);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_lfp(&emu_es, &emu_di, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_ax = emu_es;
	emu_orw(&emu_ax, emu_di);
	if (emu_ax != 0) {
		emu_al = 0x0;
		emu_ah = emu_get_memory8(emu_es, emu_di, 0x0);
		emu_cx = 0xFFFF;
		emu_cld();
		emu_repne_scasb();
		emu_notw(&emu_cx, emu_cx);
		emu_decw(&emu_cx);
		if (emu_cx != 0) {
			emu_lfp(&emu_es, &emu_di, &emu_get_memory16(emu_ds, 0x00, 0x7B16));
			emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_es;
			emu_bx = emu_es;
			emu_orw(&emu_bx, emu_di);
			emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_di;
			if (!emu_flags.zf) goto l__283B;
		}
	}
l__282E:
	emu_xorw(&emu_dx, emu_dx);
	emu_xorw(&emu_ax, emu_ax);
	goto l__2867;
l__2834:
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x4);
	emu_lfp(&emu_es, &emu_di, &emu_get_memory16(emu_ss, emu_bp, -0x4));
l__283B:
	emu_lfp(&emu_es, &emu_di, &emu_get_memory16(emu_es, emu_di, 0x0));
	emu_bx = emu_es;
	emu_orw(&emu_bx, emu_di);
	if (emu_bx == 0) goto l__282E;
	emu_al = emu_get_memory8(emu_es, emu_di, 0x0);
	emu_orb(&emu_al, emu_al);
	if (emu_al == 0) goto l__282E;
	emu_cmpb(&emu_ah, emu_al);
	if (emu_ah != emu_al) goto l__2834;
	emu_bx = emu_cx;
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx + emu_di, 0x0), 0x3D);
	if (emu_get_memory8(emu_es, emu_bx + emu_di, 0x0) != 0x3D) goto l__2834;
	emu_push(emu_ds);
	emu_lfp(&emu_ds, &emu_si, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_rep_cmpsb(emu_ds);
	emu_pop(&emu_ds);
	emu_xchgw(&emu_bx, &emu_cx);
	if (emu_get_memory8(emu_es, emu_bx + emu_di, 0x0) != 0x3D) goto l__2834;
	emu_incw(&emu_di);
	emu_ax = emu_di;
	emu_dx = emu_es;
l__2867:
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
 * Decompiled function f__01F7_286D_0023_9A13()
 *
 * @name f__01F7_286D_0023_9A13
 * @implements 01F7:286D:0023:9A13 ()
 * @implements 01F7:2888:0008:580E
 *
 * Called From: 1A34:1E49:0014:E870
 * Called From: 1A34:1E49:0015:EAB8
 * Called From: B4E9:0204:002D:A3B3
 */
void f__01F7_286D_0023_9A13()
{
l__286D:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_di);
	emu_lfp(&emu_es, &emu_di, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cx = emu_get_memory16(emu_ss, emu_bp,  0xC);
	if (emu_cx == 0) { /* Unresolved jump */ emu_ip = 0x2881; emu_last_cs = 0x01F7; emu_last_ip = 0x2877; emu_last_length = 0x0023; emu_last_crc = 0x9A13; emu_call(); return; }
	emu_al = emu_get_memory8(emu_ss, emu_bp,  0xA);
	emu_cld();
	emu_repne_scasb();
	if (!emu_flags.zf) {
		emu_xorw(&emu_di, emu_di);
		emu_es = emu_di;
		emu_di = 0x1;
	}
l__2888:
	emu_decw(&emu_di);
	emu_ax = emu_di;
	emu_dx = emu_es;
	emu_pop(&emu_di);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function emu_Tools_Memcopy()
 *
 * @name emu_Tools_Memcopy
 * @implements 01F7:28B8:0024:83C9 ()
 * @implements 01F7:28D0:000C:A565
 *
 * Called From: 01F7:3767:001D:AA1B
 * Called From: 0642:05B2:0026:A299
 * Called From: 0642:05B2:0028:2879
 * Called From: 0642:05B2:002B:2BAE
 * Called From: 0642:077D:0014:FFCC
 * Called From: 0FE4:05E9:0034:78C1
 * Called From: 1082:038F:0047:CEC1
 * Called From: 1319:0244:0028:703F
 * Called From: 1319:0244:002F:6D53
 * Called From: 176C:2035:001C:7FD5
 * Called From: 176C:2035:001F:0FEC
 * Called From: 1DB6:0050:0019:FD4E
 * Called From: 259E:00DD:0015:D443
 * Called From: B491:075F:002E:BCA5
 * Called From: B4B5:0914:001C:78CD
 * Called From: B4B8:02F2:0015:4DA7
 * Called From: B4B8:05E8:0015:4DA7
 * Called From: B4B8:1707:0017:8515
 * Called From: B4C4:035B:0023:AC02
 * Called From: B4C4:0413:0024:34F7
 * Called From: B4C4:0498:0023:5C32
 * Called From: B4C4:0535:0023:3C12
 * Called From: B4C4:061A:002C:3269
 * Called From: B4ED:00A9:001C:7E78
 * Called From: B4ED:0104:002E:CBCB
 * Called From: B4ED:0134:0016:7423
 * Called From: B4ED:06D3:001C:7CF8
 * Called From: B4ED:0879:0013:0001
 * Called From: B4ED:08D2:002C:7E4B
 * Called From: B4ED:09FB:0013:0001
 * Called From: B4ED:0B0E:001A:F677
 * Called From: B4ED:0B0E:0038:50FD
 * Called From: B4ED:0BEA:001B:FFBA
 * Called From: B4FC:06AE:003A:FCA2
 * Called From: B4FC:06AE:003D:80DA
 * Called From: B4FC:073D:0022:AE11
 * Called From: B503:013E:001A:AA1B
 * Called From: B503:0169:002B:640D
 * Called From: B503:017F:0016:9A37
 * Called From: B503:053E:001A:2E3C
 * Called From: B503:119A:0015:612E
 * Called From: B503:13A0:0021:5375
 * Called From: B503:13A0:0027:FA79
 * Called From: B50B:034D:0014:33ED
 * Called From: B50B:03C8:0015:A7EC
 * Called From: B50B:044E:0014:3099
 * Called From: B50B:04CF:0014:31F1
 * Called From: B50B:062F:002C:0256
 * Called From: B518:053C:001A:A983
 * Called From: B518:06C8:0029:41CB
 * Called From: B518:07C6:0013:9031
 * Called From: B518:088E:001E:C536
 * Called From: B518:08B1:001A:542C
 * Called From: B518:08C7:0016:0385
 * Called From: B518:0A85:001D:CF58
 * Called From: B518:0E04:0036:0F81
 */
void emu_Tools_Memcopy()
{
l__28B8:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_si);
	emu_push(emu_di);
	emu_dx = emu_ds;
	emu_lfp(&emu_es, &emu_di, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_lfp(&emu_ds, &emu_si, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_cx = emu_get_memory16(emu_ss, emu_bp,  0xE);
	emu_shrw(&emu_cx, 0x1);
	emu_cld();
	emu_rep_movsw(emu_ds);
	if (emu_flags.cf) {
		emu_movsb(emu_ds);
	}
l__28D0:
	emu_ds = emu_dx;
	emu_dx = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function emu_String_strncasecmp()
 *
 * @name emu_String_strncasecmp
 * @implements 01F7:28DC:0009:EE56 ()
 * @implements 01F7:28E5:000E:EFC0
 * @implements 01F7:28F3:0010:4F5D
 * @implements 01F7:2903:000E:4424
 * @implements 01F7:2911:0012:E423
 * @implements 01F7:2917:000C:A803
 * @implements 01F7:2920:0003:2E57
 *
 * Called From: B4B5:06A4:0014:F457
 * Called From: B4FC:04AC:001B:F59D
 * Called From: B4FC:05D0:0027:BF9B
 */
void emu_String_strncasecmp()
{
l__28DC:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_si);
	emu_si = emu_get_memory16(emu_ss, emu_bp,  0xE);
	goto l__2917;
l__28E5:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x0);
	emu_ah = 0x0;
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x28F3); emu_String_toupper();
l__28F3:
	emu_pop(&emu_cx);
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x0);
	emu_ah = 0x0;
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x2903); emu_String_toupper();
l__2903:
	emu_pop(&emu_cx);
	emu_pop(&emu_dx);
	emu_subw(&emu_dx, emu_ax);
	emu_bx = emu_dx;
	emu_orw(&emu_bx, emu_bx);
	if (emu_bx == 0) goto l__2911;
	emu_ax = emu_bx;
	goto l__2920;
l__2911:
	emu_incw(&emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_incw(&emu_get_memory16(emu_ss, emu_bp,  0xA));
l__2917:
	emu_ax = emu_si;
	emu_decw(&emu_si);
	emu_orw(&emu_ax, emu_ax);
	if (!(emu_flags.cf || emu_flags.zf)) goto l__28E5;
	emu_xorw(&emu_ax, emu_ax);
l__2920:
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function emu_Tools_Memset_Internal()
 *
 * @name emu_Tools_Memset_Internal
 * @implements 01F7:2923:0024:671B ()
 * @implements 01F7:293D:000A:0416
 * @implements 01F7:2944:0003:2E77
 *
 * Called From: 01F7:2958:0014:02B8
 */
void emu_Tools_Memset_Internal()
{
l__2923:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_di);
	emu_lfp(&emu_es, &emu_di, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cx = emu_get_memory16(emu_ss, emu_bp,  0xA);
	emu_al = emu_get_memory8(emu_ss, emu_bp,  0xC);
	emu_ah = emu_al;
	emu_cld();
	emu_testw(&emu_di, 0x1);
	if ((emu_di & 0x1) != 0) {
		if (emu_cx == 0) goto l__2944;
		emu_stosb();
		emu_decw(&emu_cx);
	}
l__293D:
	emu_shrw(&emu_cx, 0x1);
	emu_rep_stosw();
	if (emu_flags.cf) {
		emu_stosb();
	}
l__2944:
	emu_pop(&emu_di);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function emu_Tools_Memset()
 *
 * @name emu_Tools_Memset
 * @implements 01F7:2947:0014:02B8 ()
 * @implements 01F7:295B:000B:BBB3
 *
 * Called From: 07D4:0367:001F:FF64
 * Called From: 07D4:037B:0014:D20F
 * Called From: 07D4:1275:001D:1903
 * Called From: 07D4:1275:0017:2F38
 * Called From: 07D4:1289:0014:F74B
 * Called From: 0C3A:15C1:0016:FB52
 * Called From: 0FE4:017C:001D:133A
 * Called From: 0FE4:017C:0026:ADF7
 * Called From: 0FE4:04E5:0019:1614
 * Called From: 104B:009A:001D:CF58
 * Called From: 104B:009A:0026:FD93
 * Called From: 104B:020F:001A:49E1
 * Called From: 1082:00D5:001D:48CA
 * Called From: 1082:00D5:0026:CE00
 * Called From: 1082:02C3:001A:47E1
 * Called From: 10BE:004D:001D:55B0
 * Called From: 10BE:004D:0026:4F78
 * Called From: 10BE:00FF:0064:DF2A
 * Called From: 10E4:1F8B:0011:E0DB
 * Called From: 23E1:0113:0012:D6D9
 * Called From: 23E1:014E:0026:6C1D
 * Called From: 23E1:014E:003B:3097
 * Called From: 24DA:0067:0012:E658
 * Called From: 24DA:00A2:0020:C39B
 * Called From: 24DA:00A2:003B:A407
 * Called From: 25C4:003B:0013:0723
 * Called From: 25C4:03AF:0018:6AD8
 * Called From: 2649:0012:0014:67A9
 * Called From: B491:0B78:0073:EF8A
 * Called From: B495:0DEC:0018:EC07
 * Called From: B495:15BF:0027:1B29
 * Called From: B495:17BC:0023:58BC
 * Called From: B495:180C:002B:0A6D
 * Called From: B4B5:0070:0014:7874
 * Called From: B4B5:009F:0014:EBAA
 * Called From: B4B8:02C5:0012:2C51
 * Called From: B4B8:11B3:0019:6C90
 * Called From: B4DA:00A5:0011:F941
 * Called From: B4DA:00A5:0014:D1CA
 * Called From: B4E0:0C02:0019:6AEE
 * Called From: B4ED:011E:001A:B36D
 * Called From: B4ED:0148:0014:E047
 * Called From: B4ED:0694:002B:A83F
 * Called From: B4ED:0B24:0011:B6CD
 * Called From: B503:0037:0013:4B76
 * Called From: B503:05D4:0029:2499
 * Called From: B511:0AD5:0016:9707
 * Called From: B511:0AEC:0017:3E92
 * Called From: B511:0B03:0017:AFF4
 * Called From: B511:0B17:0014:F77F
 * Called From: B511:0B2B:0014:F773
 * Called From: B511:0B3F:0014:F777
 * Called From: B511:0B53:0014:F74B
 * Called From: B511:0B67:0014:F74F
 * Called From: B511:0B84:001D:7B37
 * Called From: B511:0B98:0014:F14D
 * Called From: B511:0FD3:0028:02A0
 * Called From: B518:05B8:0018:9016
 * Called From: B518:0AB4:001C:D99B
 * Called From: B518:1148:0015:484E
 * Called From: B52A:025F:0020:17D8
 */
void emu_Tools_Memset()
{
l__2947:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_al = emu_get_memory8(emu_ss, emu_bp,  0xA);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x295B); emu_Tools_Memset_Internal();
l__295B:
	emu_addw(&emu_sp, 0x8);
	emu_dx = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__01F7_2966_0015_53C0()
 *
 * @name f__01F7_2966_0015_53C0
 * @implements 01F7:2966:0015:53C0 ()
 * @implements 01F7:297B:0008:5375
 * @implements 01F7:2983:0035:708C
 * @implements 01F7:2999:001F:CB6D
 * @implements 01F7:29A3:0015:1B46
 * @implements 01F7:29B2:0006:2EA9
 *
 * Called From: 01F7:29CB:0016:B3E0
 */
void f__01F7_2966_0015_53C0()
{
l__2966:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_si);
	emu_push(emu_di);
	emu_push(emu_ds);
	emu_cx = emu_get_memory16(emu_ss, emu_bp,  0xC);
	emu_bx = emu_get_memory16(emu_ss, emu_bp,  0xA);
	emu_dx = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_push(0x297B); emu_Tools_Cmpd();
l__297B:
	if (!emu_flags.cf) goto l__2983;
	emu_std();
	emu_ax = 0x1;
	/* Unresolved jump */ emu_ip = 0x2986; emu_last_cs = 0x01F7; emu_last_ip = 0x2981; emu_last_length = 0x0008; emu_last_crc = 0x5375; emu_call();
l__2983:
	emu_cld();
	emu_xorw(&emu_ax, emu_ax);
	emu_lfp(&emu_ds, &emu_si, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_lfp(&emu_es, &emu_di, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_cx = emu_get_memory16(emu_ss, emu_bp,  0xE);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax != 0) {
		emu_addw(&emu_si, emu_cx);
		emu_decw(&emu_si);
		emu_addw(&emu_di, emu_cx);
		emu_decw(&emu_di);
	}
l__2999:
	emu_testw(&emu_di, 0x1);
	if ((emu_di & 0x1) != 0) {
		if (emu_cx == 0) goto l__29B2;
		emu_movsb(emu_ds);
		emu_decw(&emu_cx);
	}
l__29A3:
	emu_subw(&emu_si, emu_ax);
	emu_subw(&emu_di, emu_ax);
	emu_shrw(&emu_cx, 0x1);
	emu_rep_movsw(emu_ds);
	if (emu_flags.cf) {
		emu_addw(&emu_si, emu_ax);
		emu_addw(&emu_di, emu_ax);
		emu_movsb(emu_ds);
	}
l__29B2:
	emu_cld();
	emu_pop(&emu_ds);
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__01F7_29B8_0016_B3E0()
 *
 * @name f__01F7_29B8_0016_B3E0
 * @implements 01F7:29B8:0016:B3E0 ()
 * @implements 01F7:29CE:000B:BBB2
 *
 * Called From: 176C:20FF:0025:8BA8
 */
void f__01F7_29B8_0016_B3E0()
{
l__29B8:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_cs);
	emu_push(0x29CE); f__01F7_2966_0015_53C0();
l__29CE:
	emu_addw(&emu_sp, 0xA);
	emu_dx = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function emu_File_Create()
 *
 * @name emu_File_Create
 * @implements 01F7:29D9:000E:7642 ()
 * @implements 01F7:29E7:0005:E285
 * @implements 01F7:29EC:0004:3324
 * @implements 01F7:29F0:0004:4844
 *
 * Called From: 01F7:2AB3:000C:86B9
 */
void emu_File_Create()
{
l__29D9:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_ds);
	emu_cx = emu_get_memory16(emu_ss, emu_bp,  0x4);
	emu_ah = 0x3C;
	emu_lfp(&emu_ds, &emu_dx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = 0x0070; emu_push(0x29E7); Interrupt_DOS();
l__29E7:
	emu_pop(&emu_ds);
	if (emu_flags.cf) goto l__29EC;
	goto l__29F0;
l__29EC:
	emu_push(emu_ax);
	emu_push(0x29F0); f__01F7_0675_0020_D684();
l__29F0:
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_sp += 6;
	return;
}

/**
 * Decompiled function emu_File_Truncate()
 *
 * @name emu_File_Truncate
 * @implements 01F7:29F4:000E:B8B9 ()
 * @implements 01F7:2A02:0004:4845
 *
 * Called From: 01F7:2B11:000A:FFBB
 */
void emu_File_Truncate()
{
l__29F4:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_bx = emu_get_memory16(emu_ss, emu_bp,  0x4);
	emu_subw(&emu_cx, emu_cx);
	emu_subw(&emu_dx, emu_dx);
	emu_ah = 0x40;
	emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = 0x0070; emu_push(0x2A02); Interrupt_DOS();
l__2A02:
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_sp += 2;
	return;
}

/**
 * Decompiled function emu_File_Open_Wrapper()
 *
 * @name emu_File_Open_Wrapper
 * @implements 01F7:2A06:002A:9A90 ()
 * @implements 01F7:2A22:000E:9A13
 * @implements 01F7:2A30:000F:AEDA
 * @implements 01F7:2A3F:0012:EC22
 * @implements 01F7:2A51:0014:6887
 * @implements 01F7:2A68:000A:043B
 * @implements 01F7:2A75:0005:BDB6
 * @implements 01F7:2A7A:000C:FDAC
 * @implements 01F7:2A86:0012:8105
 * @implements 01F7:2AAA:000C:86B9
 * @implements 01F7:2AB6:0009:06B4
 * @implements 01F7:2ABF:000C:66BD
 * @implements 01F7:2ACB:0012:A5D7
 * @implements 01F7:2ADD:0028:9E59
 * @implements 01F7:2B05:0005:802E
 * @implements 01F7:2B0A:000A:FFBB
 * @implements 01F7:2B14:0023:AF3A
 * @implements 01F7:2B3A:000F:F783
 * @implements 01F7:2B49:0016:ED65
 * @implements 01F7:2B4B:0014:2765
 * @implements 01F7:2B5F:0016:F477
 * @implements 01F7:2B62:0013:0475
 * @implements 01F7:2B6D:0008:7D40
 *
 * Called From: 1FB5:0137:001B:0DC1
 * Called From: 24E6:0083:001A:719E
 * Called From: 261F:0045:000E:672A
 * Called From: 261F:0125:0011:366E
 */
void emu_File_Open_Wrapper()
{
l__2A06:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x4);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_si = emu_get_memory16(emu_ss, emu_bp,  0xA);
	emu_di = emu_get_memory16(emu_ss, emu_bp,  0xC);
	emu_testw(&emu_si, 0xC000);
	if ((emu_si & 0xC000) == 0) {
		emu_ax = emu_get_memory16(emu_ds, 0x00, 0x7984);
		emu_andw(&emu_ax, 0xC000);
		emu_orw(&emu_si, emu_ax);
	}
l__2A22:
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x2A30); emu_File_GSAttr();
l__2A30:
	emu_addw(&emu_sp, 0x6);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ax;
	emu_testw(&emu_si, 0x100);
	if ((emu_si & 0x100) != 0) goto l__2A3F;
	goto l__2ABF;
l__2A3F:
	emu_andw(&emu_di, emu_get_memory16(emu_ds, 0x00, 0x7986));
	emu_ax = emu_di;
	emu_testw(&emu_ax, 0x180);
	if ((emu_ax & 0x180) == 0) {
		emu_ax = 0x1;
		emu_push(emu_ax);
		emu_push(0x2A51); f__01F7_0675_0020_D684();
	}
l__2A51:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0xFFFF);
	if (emu_get_memory16(emu_ss, emu_bp, -0x2) != 0xFFFF) goto l__2A7A;
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x7988), 0x2);
	if (emu_get_memory16(emu_ds, 0x00, 0x7988) == 0x2) goto l__2A68;
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x7988));
	emu_push(0x2A65); f__01F7_0675_0020_D684();
	/* Unresolved jump */ emu_ip = 0x2A65; emu_last_cs = 0x01F7; emu_last_ip = 0x2A65; emu_last_length = 0x0014; emu_last_crc = 0x6887; emu_call();
l__2A68:
	emu_testw(&emu_di, 0x80);
	if ((emu_di & 0x80) == 0) { /* Unresolved jump */ emu_ip = 0x2A72; emu_last_cs = 0x01F7; emu_last_ip = 0x2A6C; emu_last_length = 0x000A; emu_last_crc = 0x043B; emu_call(); return; }
	emu_xorw(&emu_ax, emu_ax);
	goto l__2A75;
l__2A75:
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ax;
	goto l__2A86;
l__2A7A:
	emu_testw(&emu_si, 0x400);
	if ((emu_si & 0x400) == 0) goto l__2ABF;
	emu_ax = 0x50;
	emu_push(emu_ax);
	/* Unresolved jump */ emu_ip = 0x2A62; emu_last_cs = 0x01F7; emu_last_ip = 0x2A84; emu_last_length = 0x000C; emu_last_crc = 0xFDAC; emu_call();
l__2A86:
	emu_testw(&emu_si, 0xF0);
	if ((emu_si & 0xF0) == 0) goto l__2AAA;
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(0x2A98); emu_File_Create();
	/* Unresolved jump */ emu_ip = 0x2A98; emu_last_cs = 0x01F7; emu_last_ip = 0x2A98; emu_last_length = 0x0012; emu_last_crc = 0x8105; emu_call();
l__2AAA:
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(0x2AB6); emu_File_Create();
l__2AB6:
	emu_di = emu_ax;
	emu_orw(&emu_ax, emu_ax);
	if (!(emu_flags.sf != emu_flags.of)) goto l__2B3A;
	goto l__2B6D;
l__2ABF:
	emu_push(emu_si);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x2ACB); emu_File_Open();
l__2ACB:
	emu_addw(&emu_sp, 0x6);
	emu_di = emu_ax;
	emu_orw(&emu_ax, emu_ax);
	if ((emu_flags.sf != emu_flags.of)) goto l__2B3A;
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_di);
	emu_push(emu_cs);
	emu_push(0x2ADD); emu_File_IOCtrl();
l__2ADD:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_testw(&emu_ax, 0x80);
	if ((emu_ax & 0x80) == 0) goto l__2B0A;
	emu_orw(&emu_si, 0x2000);
	emu_testw(&emu_si, 0x8000);
	if ((emu_si & 0x8000) == 0) goto l__2B14;
	emu_andw(&emu_ax, 0xFF);
	emu_orw(&emu_ax, 0x20);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_push(emu_di);
	emu_push(emu_cs);
	emu_push(0x2B05); emu_File_IOCtrl();
l__2B05:
	emu_addw(&emu_sp, 0x8);
	goto l__2B14;
l__2B0A:
	emu_testw(&emu_si, 0x200);
	if ((emu_si & 0x200) != 0) {
		emu_push(emu_di);
		emu_push(0x2B14); emu_File_Truncate();
	}
l__2B14:
	emu_testw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x1);
	if ((emu_get_memory16(emu_ss, emu_bp, -0x2) & 0x1) == 0) goto l__2B3A;
	emu_testw(&emu_si, 0x100);
	if ((emu_si & 0x100) == 0) goto l__2B3A;
	emu_testw(&emu_si, 0xF0);
	if ((emu_si & 0xF0) == 0) goto l__2B3A;
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x2B37); emu_File_GSAttr();
	/* Unresolved jump */ emu_ip = 0x2B37; emu_last_cs = 0x01F7; emu_last_ip = 0x2B37; emu_last_length = 0x0023; emu_last_crc = 0xAF3A; emu_call();
l__2B3A:
	emu_orw(&emu_di, emu_di);
	if ((emu_flags.sf != emu_flags.of)) goto l__2B6D;
	emu_testw(&emu_si, 0x300);
	if ((emu_si & 0x300) == 0) goto l__2B49;
	emu_ax = 0x1000;
	goto l__2B4B;
l__2B49:
	emu_xorw(&emu_ax, emu_ax);
l__2B4B:
	emu_dx = emu_si;
	emu_andw(&emu_dx, 0xF8FF);
	emu_orw(&emu_dx, emu_ax);
	emu_push(emu_dx);
	emu_testw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x1);
	if ((emu_get_memory16(emu_ss, emu_bp, -0x2) & 0x1) == 0) goto l__2B5F;
	emu_xorw(&emu_ax, emu_ax);
	goto l__2B62;
l__2B5F:
	emu_ax = 0x100;
l__2B62:
	emu_pop(&emu_dx);
	emu_orw(&emu_dx, emu_ax);
	emu_bx = emu_di;
	emu_shlw(&emu_bx, 0x1);
	emu_get_memory16(emu_ds, emu_bx, 0x795C) = emu_dx;
l__2B6D:
	emu_ax = emu_di;
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
 * Decompiled function emu_File_Open()
 *
 * @name emu_File_Open
 * @implements 01F7:2B75:002A:45D8 ()
 * @implements 01F7:2B90:000F:E475
 * @implements 01F7:2B9F:001D:8C05
 * @implements 01F7:2BBC:0004:3028
 * @implements 01F7:2BC0:0004:893F
 *
 * Called From: 01F7:2AC8:000C:66BD
 */
void emu_File_Open()
{
l__2B75:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x2);
	emu_al = 0x1;
	emu_cx = emu_get_memory16(emu_ss, emu_bp,  0xA);
	emu_testw(&emu_cx, 0x2);
	if ((emu_cx & 0x2) == 0) {
		emu_al = 0x2;
		emu_testw(&emu_cx, 0x4);
		if ((emu_cx & 0x4) == 0) {
			emu_al = 0x0;
		}
	}
l__2B90:
	emu_push(emu_ds);
	emu_lfp(&emu_ds, &emu_dx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cl = 0xF0;
	emu_andb(&emu_cl, emu_get_memory8(emu_ss, emu_bp,  0xA));
	emu_orb(&emu_al, emu_cl);
	emu_ah = 0x3D;
	emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = 0x0070; emu_push(0x2B9F); Interrupt_DOS();
l__2B9F:
	emu_pop(&emu_ds);
	if (emu_flags.cf) goto l__2BBC;
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0xA);
	emu_andw(&emu_ax, 0xB8FF);
	emu_orw(&emu_ax, 0x8000);
	emu_bx = emu_get_memory16(emu_ss, emu_bp, -0x2);
	emu_shlw(&emu_bx, 0x1);
	emu_get_memory16(emu_ds, emu_bx, 0x795C) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x2);
	goto l__2BC0;
l__2BBC:
	emu_push(emu_ax);
	emu_push(0x2BC0); f__01F7_0675_0020_D684();
l__2BC0:
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function emu_String_printf()
 *
 * @name emu_String_printf
 * @implements 01F7:2BC4:0019:3608 ()
 * @implements 01F7:2BDD:0002:2597
 *
 * Called From: B480:0024:0011:F5E0
 * Called From: B480:01D1:000A:47DE
 * Called From: B480:02E8:0008:98A4
 * Called From: B53B:0301:0019:AA57
 */
void emu_String_printf()
{
l__2BC4:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_ax = 0x2DA4;
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x77DE;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax, emu_bp + 0xA);
	emu_push(emu_ax);
	emu_push(0x2BDD); emu_String_Format();
l__2BDD:
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function emu_String_Format_Callback_2D4A()
 *
 * @name emu_String_Format_Callback_2D4A
 * @implements 01F7:2DA4:001B:CF3B ()
 * @implements 01F7:2DDC:0005:9C1B
 * @implements 01F7:2DEB:000E:A237
 * @implements 01F7:2F21:000C:FF5B
 * @implements 01F7:2F7D:0015:335E
 * @implements 01F7:2F92:000A:6547
 * @implements 01F7:2F9C:000B:4D3F
 * @implements 01F7:2F9F:0008:3CD1
 *
 * Called From: 01F7:1166:001A:962D
 */
void emu_String_Format_Callback_2D4A()
{
l__2DA4:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x2);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_di = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_di;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x4));
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0x2), 0x8);
	if ((emu_get_memory16(emu_es, emu_bx, 0x2) & 0x8) == 0) goto l__2DEB;
	/* Unresolved jump */ emu_ip = 0x2DE1; emu_last_cs = 0x01F7; emu_last_ip = 0x2DBD; emu_last_length = 0x001B; emu_last_crc = 0xCF3B; emu_call();
l__2DDC:
	emu_xorw(&emu_ax, emu_ax);
	goto l__2F9F;
l__2DEB:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x4));
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0x2), 0x40);
	if ((emu_get_memory16(emu_es, emu_bx, 0x2) & 0x40) != 0) { /* Unresolved jump */ emu_ip = 0x2DF9; emu_last_cs = 0x01F7; emu_last_ip = 0x2DF4; emu_last_length = 0x000E; emu_last_crc = 0xA237; emu_call(); return; }
	goto l__2F21;
l__2F21:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x4));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x6), 0x0);
	if (emu_get_memory16(emu_es, emu_bx, 0x6) == 0x0) goto l__2F7D;
	/* Unresolved jump */ emu_ip = 0x2F74; emu_last_cs = 0x01F7; emu_last_ip = 0x2F2B; emu_last_length = 0x000C; emu_last_crc = 0xFF5B; emu_call();
l__2F7D:
	emu_push(emu_di);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x4));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x4);
	emu_ax = (int8)emu_al;
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x2F92); emu_File_Write_Wrapper();
l__2F92:
	emu_addw(&emu_sp, 0x8);
	emu_cmpw(&emu_ax, emu_di);
	if (emu_ax == emu_di) goto l__2F9C;
	goto l__2DDC;
l__2F9C:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x2);
l__2F9F:
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_sp += 10;
	return;
}

/**
 * Decompiled function f__01F7_2FA7_002E_FEFD()
 *
 * @name f__01F7_2FA7_002E_FEFD
 * @implements 01F7:2FA7:002E:FEFD ()
 * @implements 01F7:2FC5:0010:C8D7
 *
 * Called From: 01F7:301F:0003:22A1
 * Called From: 01F7:301F:000F:DB31
 * Called From: 01F7:306F:0016:E1E7
 * Called From: 01F7:30BA:0003:E23A
 * Called From: 01F7:30BA:0016:AFD7
 * Called From: 01F7:315E:000F:9506
 * Called From: 01F7:31D1:000F:F78A
 */
void f__01F7_2FA7_002E_FEFD()
{
l__2FA7:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_si);
	emu_push(emu_di);
	emu_push(emu_ds);
	emu_cld();
	emu_cx = emu_get_memory16(emu_ds, 0x00, 0x9ADC);
	emu_lfp(&emu_es, &emu_di, &emu_get_memory16(emu_ss, emu_bp,  0x4));
	emu_lfp(&emu_ds, &emu_si, &emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_shrw(&emu_cx, 0x1);
	if (emu_flags.cf) {
		emu_al = emu_get_memory8(emu_es, emu_di, 0x0);
		emu_movsb(emu_ds);
		emu_get_memory8(emu_ds, emu_si, 0xFFFF) = emu_al;
		if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x2FCE; emu_last_cs = 0x01F7; emu_last_ip = 0x2FC3; emu_last_length = 0x002E; emu_last_crc = 0xFEFD; emu_call(); return; }
	}
l__2FC5:
	emu_ax = emu_get_memory16(emu_es, emu_di, 0x0);
	emu_movsw(emu_ds);
	emu_get_memory16(emu_ds, emu_si, 0xFFFE) = emu_ax;
	if (--emu_cx != 0) goto l__2FC5;
	emu_pop(&emu_ds);
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_sp += 8;
	return;
}

/**
 * Decompiled function f__01F7_2FD5_0018_0AEC()
 *
 * @name f__01F7_2FD5_0018_0AEC
 * @implements 01F7:2FD5:0018:0AEC ()
 * @implements 01F7:2FE0:000D:6F61
 * @implements 01F7:2FED:001C:E64C
 * @implements 01F7:3009:000A:077F
 * @implements 01F7:3013:000F:DB31
 * @implements 01F7:301F:0003:22A1
 * @implements 01F7:3022:0003:9C2B
 * @implements 01F7:3025:0037:57AE
 * @implements 01F7:305C:0016:E1E7
 * @implements 01F7:3072:0010:F2A4
 * @implements 01F7:3082:0015:D1FF
 * @implements 01F7:3097:0010:C0A3
 * @implements 01F7:30A7:0016:AFD7
 * @implements 01F7:30BA:0003:E23A
 * @implements 01F7:30BD:0014:8E6C
 * @implements 01F7:30D1:0018:E199
 * @implements 01F7:30E9:0013:EEEF
 * @implements 01F7:3102:001E:1187
 * @implements 01F7:3110:0010:F2A4
 * @implements 01F7:3120:0021:AA4B
 * @implements 01F7:3131:0010:C0A3
 * @implements 01F7:3141:0011:F54F
 * @implements 01F7:3152:000F:9506
 * @implements 01F7:3161:000F:E86F
 * @implements 01F7:3170:0020:F032
 * @implements 01F7:3178:0018:3FEB
 * @implements 01F7:3180:0010:F2A4
 * @implements 01F7:3190:0035:7DA9
 * @implements 01F7:31A7:001E:233E
 * @implements 01F7:31C5:000F:F78A
 * @implements 01F7:31D4:0030:7804
 * @implements 01F7:31DD:0027:28D1
 * @implements 01F7:31ED:0017:66AF
 * @implements 01F7:3204:0021:9846
 * @implements 01F7:3225:0010:C319
 * @implements 01F7:3235:0005:97DE
 * @implements 01F7:323A:000A:BD95
 * @implements 01F7:3244:000F:B3C1
 * @implements 01F7:3253:0008:3CD2
 *
 * Called From: 01F7:3232:0010:C319
 * Called From: 01F7:3241:000A:BD95
 * Called From: 01F7:327E:0026:C673
 */
void f__01F7_2FD5_0018_0AEC()
{
l__2FD5:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x14);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_si = emu_get_memory16(emu_ss, emu_bp,  0x4);
l__2FE0:
	emu_cmpw(&emu_si, 0x2);
	if (emu_si > 0x2) goto l__3025;
	emu_cmpw(&emu_si, 0x2);
	if (emu_si == 0x2) goto l__2FED;
	goto l__3253;
l__2FED:
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_dx = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_addw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x9ADC));
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_dx;
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_ds, 0x00, 0x9ADE);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_ds, 0x00, 0x9AE0);
	emu_push(0x3009);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x34950098: overlay(0x3495, 0); f__B495_1A14_0013_AE3F(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x01F7; emu_last_ip = 0x3005; emu_last_length = 0x001C; emu_last_crc = 0xE64C;
			emu_call();
			return;
	}
l__3009:
	emu_addw(&emu_sp, 0x8);
	emu_orw(&emu_ax, emu_ax);
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) goto l__3013;
	goto l__3253;
l__3013:
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
l__301F:
	emu_push(0x3022); f__01F7_2FA7_002E_FEFD();
l__3022:
	goto l__3253;
l__3025:
	emu_ax = emu_si;
	emu_decw(&emu_ax);
	emu_imuluw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x9ADC));
	emu_dx = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_bx = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_addw(&emu_bx, emu_ax);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_bx;
	emu_ax = emu_si;
	emu_shrw(&emu_ax, 0x1);
	emu_imuluw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x9ADC));
	emu_dx = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_bx = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_addw(&emu_bx, emu_ax);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_bx;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_dx);
	emu_push(emu_bx);

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_ds, 0x00, 0x9ADE);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_ds, 0x00, 0x9AE0);
	emu_push(0x305C);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x34950098: overlay(0x3495, 0); f__B495_1A14_0013_AE3F(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x01F7; emu_last_ip = 0x3058; emu_last_length = 0x0037; emu_last_crc = 0x57AE;
			emu_call();
			return;
	}
l__305C:
	emu_addw(&emu_sp, 0x8);
	emu_orw(&emu_ax, emu_ax);
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) {
		emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
		emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
		emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
		emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
		emu_push(0x3072); f__01F7_2FA7_002E_FEFD();
	}
l__3072:
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_ds, 0x00, 0x9ADE);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_ds, 0x00, 0x9AE0);
	emu_push(0x3082);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x34950098: overlay(0x3495, 0); f__B495_1A14_0013_AE3F(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x01F7; emu_last_ip = 0x307E; emu_last_length = 0x0010; emu_last_crc = 0xF2A4;
			emu_call();
			return;
	}
l__3082:
	emu_addw(&emu_sp, 0x8);
	emu_orw(&emu_ax, emu_ax);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) goto l__3097;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	goto l__30BA;
l__3097:
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_ds, 0x00, 0x9ADE);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_ds, 0x00, 0x9AE0);
	emu_push(0x30A7);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x34950098: overlay(0x3495, 0); f__B495_1A14_0013_AE3F(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x01F7; emu_last_ip = 0x30A3; emu_last_length = 0x0010; emu_last_crc = 0xC0A3;
			emu_call();
			return;
	}
l__30A7:
	emu_addw(&emu_sp, 0x8);
	emu_orw(&emu_ax, emu_ax);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) goto l__30BD;
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
l__30BA:
	emu_push(0x30BD); f__01F7_2FA7_002E_FEFD();
l__30BD:
	emu_cmpw(&emu_si, 0x3);
	if (emu_si != 0x3) goto l__30D1;
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	goto l__301F;
l__30D1:
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_dx = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_addw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x9ADC));
	emu_get_memory16(emu_ss, emu_bp, -0xA) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0xC) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_dx;
	goto l__3110;
l__30E9:
	emu_orw(&emu_di, emu_di);
	if (emu_di != 0) goto l__3102;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(0x30FC); f__01F7_2FA7_002E_FEFD();
	/* Unresolved jump */ emu_ip = 0x30FC; emu_last_cs = 0x01F7; emu_last_ip = 0x30FC; emu_last_length = 0x0013; emu_last_crc = 0xEEEF; emu_call();
l__3102:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x8));
	if (emu_ax >= emu_get_memory16(emu_ss, emu_bp, -0x8)) goto l__3180;
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x9ADC);
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax);
l__3110:
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_ds, 0x00, 0x9ADE);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_ds, 0x00, 0x9AE0);
	emu_push(0x3120);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x34950098: overlay(0x3495, 0); f__B495_1A14_0013_AE3F(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x01F7; emu_last_ip = 0x311C; emu_last_length = 0x0010; emu_last_crc = 0xF2A4;
			emu_call();
			return;
	}
l__3120:
	emu_addw(&emu_sp, 0x8);
	emu_di = emu_ax;
	emu_orw(&emu_ax, emu_ax);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) goto l__30E9;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x8));
	if (emu_ax >= emu_get_memory16(emu_ss, emu_bp, -0x8)) goto l__3178;
l__3131:
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_ds, 0x00, 0x9ADE);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_ds, 0x00, 0x9AE0);
	emu_push(0x3141);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x34950098: overlay(0x3495, 0); f__B495_1A14_0013_AE3F(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x01F7; emu_last_ip = 0x313D; emu_last_length = 0x0010; emu_last_crc = 0xC0A3;
			emu_call();
			return;
	}
l__3141:
	emu_addw(&emu_sp, 0x8);
	emu_di = emu_ax;
	emu_orw(&emu_ax, emu_ax);
	if (!(emu_flags.sf != emu_flags.of)) goto l__3152;
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x9ADC);
	emu_subw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax);
	goto l__3170;
l__3152:
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(0x3161); f__01F7_2FA7_002E_FEFD();
l__3161:
	emu_orw(&emu_di, emu_di);
	if (emu_di != 0) {
		emu_ax = emu_get_memory16(emu_ds, 0x00, 0x9ADC);
		emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax);
		emu_subw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax);
	}
	goto l__3178;
l__3170:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x8));
	if (emu_ax < emu_get_memory16(emu_ss, emu_bp, -0x8)) goto l__3131;
l__3178:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x8));
	if (emu_ax < emu_get_memory16(emu_ss, emu_bp, -0x8)) goto l__3110;
l__3180:
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_ds, 0x00, 0x9ADE);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_ds, 0x00, 0x9AE0);
	emu_push(0x3190);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x34950098: overlay(0x3495, 0); f__B495_1A14_0013_AE3F(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x01F7; emu_last_ip = 0x318C; emu_last_length = 0x0010; emu_last_crc = 0xF2A4;
			emu_call();
			return;
	}
l__3190:
	emu_addw(&emu_sp, 0x8);
	emu_orw(&emu_ax, emu_ax);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) {
		emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x2);
		emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x4);
		emu_addw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x9ADC));
		emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ax;
		emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_dx;
	}
l__31A7:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x2);
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_subw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x9ADC));
	emu_get_memory16(emu_ss, emu_bp, -0x12) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x14) = emu_dx;
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_dx = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_get_memory16(emu_ss, emu_bp, -0xE) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x10) = emu_dx;
	goto l__31DD;
l__31C5:
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_push(0x31D4); f__01F7_2FA7_002E_FEFD();
l__31D4:
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x9ADC);
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x10), emu_ax);
	emu_subw(&emu_get_memory16(emu_ss, emu_bp, -0x14), emu_ax);
l__31DD:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x10);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0xC));
	if (emu_ax < emu_get_memory16(emu_ss, emu_bp, -0xC)) {
		emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x14);
		emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0xC));
		if (emu_ax >= emu_get_memory16(emu_ss, emu_bp, -0xC)) goto l__31C5;
	}
l__31ED:
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x9ADC));
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_xorw(&emu_dx, emu_dx);
	emu_subw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_sbbw(&emu_dx, 0x0);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(0x3204); emu_Tools_Divd_Wrapper();
l__3204:
	emu_di = emu_ax;
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x9ADC));
	emu_ax = emu_si;
	emu_imuluw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x9ADC));
	emu_dx = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_addw(&emu_dx, emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_subw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_sbbw(&emu_ax, 0x0);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(0x3225); emu_Tools_Divd_Wrapper();
l__3225:
	emu_si = emu_ax;
	emu_cmpw(&emu_si, emu_di);
	if (emu_si >= emu_di) goto l__323A;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_ax);
	emu_push(0x3235); f__01F7_2FD5_0018_0AEC();
l__3235:
	emu_si = emu_di;
	goto l__2FE0;
l__323A:
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_di);
	emu_push(0x3244); f__01F7_2FD5_0018_0AEC();
l__3244:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x2);
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_get_memory16(emu_ss, emu_bp,  0x8) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp,  0x6) = emu_dx;
	goto l__2FE0;
l__3253:
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_sp += 6;
	return;
}

/**
 * Decompiled function f__01F7_325B_0026_C673()
 *
 * @name f__01F7_325B_0026_C673
 * @implements 01F7:325B:0026:C673 ()
 * @implements 01F7:3281:0002:2597
 *
 * Called From: B495:1952:001A:5737
 * Called From: B495:19A2:001A:5737
 */
void f__01F7_325B_0026_C673()
{
l__325B:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0xC);
	emu_get_memory16(emu_ds, 0x00, 0x9ADC) = emu_ax;
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax != 0) {
		emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x10);
		emu_dx = emu_get_memory16(emu_ss, emu_bp,  0xE);
		emu_get_memory16(emu_ds, 0x00, 0x9AE0) = emu_ax;
		emu_get_memory16(emu_ds, 0x00, 0x9ADE) = emu_dx;
		emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
		emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
		emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
		emu_push(0x3281); f__01F7_2FD5_0018_0AEC();
	}
l__3281:
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function emu_File_Read_Wrapper()
 *
 * @name emu_File_Read_Wrapper
 * @implements 01F7:3283:0018:6655 ()
 * @implements 01F7:329B:0003:1D0C
 * @implements 01F7:329E:001B:32A6
 * @implements 01F7:32B9:0011:1DCE
 * @implements 01F7:32CA:001E:C660
 * @implements 01F7:32E3:0005:88A6
 * @implements 01F7:32E8:001A:CB55
 * @implements 01F7:3321:0006:32A5
 * @implements 01F7:3327:0002:D13A
 * @implements 01F7:334B:0009:8DF5
 * @implements 01F7:334E:0006:F7CE
 * @implements 01F7:3354:0003:62AB
 *
 * Called From: 1FB5:00DB:001B:2EE4
 * Called From: 24E6:00A1:0010:7426
 */
void emu_File_Read_Wrapper()
{
	goto l__3354;
l__3283:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x4);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x795A));
	if (emu_ax < emu_get_memory16(emu_ds, 0x00, 0x795A)) goto l__329E;
	emu_ax = 0x6;
	emu_push(emu_ax);
	emu_push(0x329B); f__01F7_0675_0020_D684();
l__329B:
	goto l__334E;
l__329E:
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0xC);
	emu_incw(&emu_ax);
	emu_cmpw(&emu_ax, 0x2);
	if (emu_ax < 0x2) { /* Unresolved jump */ emu_ip = 0x32B4; emu_last_cs = 0x01F7; emu_last_ip = 0x32A5; emu_last_length = 0x001B; emu_last_crc = 0x32A6; emu_call(); return; }
	emu_bx = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_shlw(&emu_bx, 0x1);
	emu_testw(&emu_get_memory16(emu_ds, emu_bx, 0x795C), 0x200);
	if ((emu_get_memory16(emu_ds, emu_bx, 0x795C) & 0x200) == 0) goto l__32B9;
	emu_xorw(&emu_ax, emu_ax);
	goto l__334E;
l__32B9:
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x32CA); emu_File_Read();
l__32CA:
	emu_addw(&emu_sp, 0x8);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ax;
	emu_incw(&emu_ax);
	emu_cmpw(&emu_ax, 0x2);
	if (emu_ax >= 0x2) {
		emu_bx = emu_get_memory16(emu_ss, emu_bp,  0x6);
		emu_shlw(&emu_bx, 0x1);
		emu_testw(&emu_get_memory16(emu_ds, emu_bx, 0x795C), 0x4000);
		if ((emu_get_memory16(emu_ds, emu_bx, 0x795C) & 0x4000) != 0) goto l__32E8;
	}
l__32E3:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x2);
	goto l__334E;
l__32E8:
	emu_cx = emu_get_memory16(emu_ss, emu_bp, -0x2);
	emu_lfp(&emu_es, &emu_si, &emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_di = emu_si;
	emu_bx = emu_si;
	emu_cld();
	emu_lodsb(emu_es);
	emu_cmpb(&emu_al, 0x1A);
	if (emu_al == 0x1A) { /* Unresolved jump */ emu_ip = 0x3329; emu_last_cs = 0x01F7; emu_last_ip = 0x32F7; emu_last_length = 0x001A; emu_last_crc = 0xCB55; emu_call(); return; }
	emu_cmpb(&emu_al, 0xD);
	if (emu_al == 0xD) { /* Unresolved jump */ emu_ip = 0x3302; emu_last_cs = 0x01F7; emu_last_ip = 0x32FB; emu_last_length = 0x001A; emu_last_crc = 0xCB55; emu_call(); return; }
	emu_stosb();
	if (--emu_cx != 0) { /* Unresolved jump */ emu_ip = 0x32F3; emu_last_cs = 0x01F7; emu_last_ip = 0x32FE; emu_last_length = 0x001A; emu_last_crc = 0xCB55; emu_call(); }
	goto l__3321;
l__3321:
	emu_cmpw(&emu_di, emu_bx);
	if (emu_di != emu_bx) goto l__3327;
	goto l__32B9;
l__3327:
	goto l__334B;
l__334B:
	emu_subw(&emu_di, emu_bx);
	emu_xchgw(&emu_ax, &emu_di);
l__334E:
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
l__3354:
	goto l__3283;
}

/**
 * Decompiled function f__01F7_3357_0028_B817()
 *
 * @name f__01F7_3357_0028_B817
 * @implements 01F7:3357:0028:B817 ()
 * @implements 01F7:3379:0006:4AE9
 * @implements 01F7:337F:0016:7DA1
 * @implements 01F7:3395:0030:93A7
 * @implements 01F7:33A9:001C:2400
 * @implements 01F7:33C5:001B:54D0
 * @implements 01F7:33C8:0018:05C5
 * @implements 01F7:33E0:004C:FCB7
 * @implements 01F7:33E2:004A:D92C
 * @implements 01F7:342C:000E:7D70
 * @implements 01F7:343A:000A:D823
 * @implements 01F7:3447:002D:8DA6
 * @implements 01F7:346E:0006:1452
 * @implements 01F7:3470:0004:DE52
 *
 * Called From: 01F7:0FBC:0011:18E7
 * Called From: 01F7:0FF8:0011:0CD6
 */
void f__01F7_3357_0028_B817()
{
l__3357:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_si);
	emu_push(emu_di);
	emu_di = emu_get_memory16(emu_ss, emu_bp,  0xE);
	emu_si = emu_get_memory16(emu_ss, emu_bp,  0x10);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x12);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x6));
	if (emu_ax == emu_get_memory16(emu_ss, emu_bp,  0x6)) {
		emu_cmpw(&emu_di, 0x2);
		if ((int16)emu_di <= (int16)0x2) {
			emu_cmpw(&emu_si, 0x7FFF);
			if (emu_si <= 0x7FFF) goto l__337F;
		}
	}
l__3379:
	emu_ax = 0xFFFF;
	goto l__3470;
l__337F:
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x7B1E), 0x0);
	if (emu_get_memory16(emu_ds, 0x00, 0x7B1E) != 0x0) goto l__3395;
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp,  0x6), 0x77DE);
	if (emu_get_memory16(emu_ss, emu_bp,  0x6) != 0x77DE) goto l__3395;
	emu_get_memory16(emu_ds, 0x00, 0x7B1E) = 0x1;
	goto l__33A9;
l__3395:
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x7B1C), 0x0);
	if (emu_get_memory16(emu_ds, 0x00, 0x7B1C) == 0x0) {
		emu_cmpw(&emu_get_memory16(emu_ss, emu_bp,  0x6), 0x77CA);
		if (emu_get_memory16(emu_ss, emu_bp,  0x6) == 0x77CA) {
			emu_get_memory16(emu_ds, 0x00, 0x7B1C) = 0x1;
		}
	}
l__33A9:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x0), 0x0);
	if (emu_get_memory16(emu_es, emu_bx, 0x0) == 0x0) goto l__33C8;
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_bx);
	emu_push(emu_cs);
	emu_push(0x33C5); f__01F7_260F_0012_C6FD();
l__33C5:
	emu_addw(&emu_sp, 0xA);
l__33C8:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0x2), 0x4);
	if ((emu_get_memory16(emu_es, emu_bx, 0x2) & 0x4) == 0) goto l__33E2;
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x8));
	emu_push(emu_cs);
	emu_push(0x33E0); f__01F7_1741_001B_9E34();
l__33E0:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
l__33E2:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_andw(&emu_get_memory16(emu_es, emu_bx, 0x2), 0xFFF3);
	emu_get_memory16(emu_es, emu_bx, 0x6) = 0x0;
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_dx = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_addw(&emu_dx, 0x5);
	emu_get_memory16(emu_es, emu_bx, 0xA) = emu_ax;
	emu_get_memory16(emu_es, emu_bx, 0x8) = emu_dx;
	emu_get_memory16(emu_es, emu_bx, 0xE) = emu_ax;
	emu_get_memory16(emu_es, emu_bx, 0xC) = emu_dx;
	emu_cmpw(&emu_di, 0x2);
	if (emu_di == 0x2) goto l__346E;
	emu_orw(&emu_si, emu_si);
	if ((emu_flags.cf || emu_flags.zf)) goto l__346E;
	emu_get_memory16(emu_ds, 0x00, 0x77C0) = 0x1F7;
	emu_get_memory16(emu_ds, 0x00, 0x77BE) = 0x4484;
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0xA);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0xC));
	if (emu_ax != 0) goto l__3447;
	emu_push(emu_si);
	emu_push(emu_cs);
	emu_push(0x342C); f__01F7_184B_000A_9146();
l__342C:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp,  0xC) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp,  0xA) = emu_ax;
	emu_orw(&emu_ax, emu_dx);
	if (emu_ax != 0) goto l__343A;
	goto l__3379;
l__343A:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_get_memory16(emu_es, emu_bx, 0x2), 0x4);
	goto l__3447;
l__3447:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0xC);
	emu_dx = emu_get_memory16(emu_ss, emu_bp,  0xA);
	emu_get_memory16(emu_es, emu_bx, 0xE) = emu_ax;
	emu_get_memory16(emu_es, emu_bx, 0xC) = emu_dx;
	emu_get_memory16(emu_es, emu_bx, 0xA) = emu_ax;
	emu_get_memory16(emu_es, emu_bx, 0x8) = emu_dx;
	emu_get_memory16(emu_es, emu_bx, 0x6) = emu_si;
	emu_cmpw(&emu_di, 0x1);
	if (emu_di == 0x1) {
		emu_orw(&emu_get_memory16(emu_es, emu_bx, 0x2), 0x8);
	}
l__346E:
	emu_xorw(&emu_ax, emu_ax);
l__3470:
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__01F7_3474_001A_8B70()
 *
 * @name f__01F7_3474_001A_8B70
 * @implements 01F7:3474:001A:8B70 ()
 * @implements 01F7:348E:0018:9A8B
 * @implements 01F7:34A6:000E:9381
 * @implements 01F7:34C8:0005:4AB7
 *
 * Called From: 01F7:3698:0023:36BB
 */
void f__01F7_3474_001A_8B70()
{
l__3474:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_si);
	emu_si = emu_get_memory16(emu_ss, emu_bp,  0x4);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0xA);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0xC));
	if (emu_ax == 0) goto l__34C8;
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x348E); emu_String_strlen();
l__348E:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_cmpw(&emu_ax, emu_si);
	if (emu_ax < emu_si) { /* Unresolved jump */ emu_ip = 0x34B4; emu_last_cs = 0x01F7; emu_last_ip = 0x3492; emu_last_length = 0x0018; emu_last_crc = 0x9A8B; emu_call(); return; }
	emu_push(emu_si);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_cs);
	emu_push(0x34A6); emu_String_strncpy();
l__34A6:
	emu_addw(&emu_sp, 0xA);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_addw(&emu_bx, emu_si);
	emu_get_memory8(emu_es, emu_bx, 0x0) = 0x0;
	goto l__34C8;
l__34C8:
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_sp += 10;
	return;
}

/**
 * Decompiled function f__01F7_352D_0051_5751()
 *
 * @name f__01F7_352D_0051_5751
 * @implements 01F7:352D:0051:5751 ()
 * @implements 01F7:3546:0038:E941
 * @implements 01F7:3555:0029:5B91
 * @implements 01F7:3573:000B:7F1C
 * @implements 01F7:3581:0012:E7D2
 * @implements 01F7:3593:0028:B2AA
 * @implements 01F7:359F:001C:58DB
 * @implements 01F7:35BB:0031:72DB
 * @implements 01F7:35CA:0022:1AF1
 * @implements 01F7:35DD:000F:006F
 * @implements 01F7:35EC:0004:38FB
 * @implements 01F7:363F:0026:37C8
 * @implements 01F7:3671:0007:0901
 * @implements 01F7:3678:0023:36BB
 * @implements 01F7:369B:001C:26C1
 * @implements 01F7:36DB:0024:F4B7
 * @implements 01F7:36FF:0008:7D40
 *
 * Called From: 01F7:2585:0026:6AD7
 */
void f__01F7_352D_0051_5751()
{
l__352D:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x58);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_xorw(&emu_di, emu_di);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0xA);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0xC));
	if (emu_ax != 0) {
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0xA));
		emu_get_memory8(emu_es, emu_bx, 0x0) = 0x0;
	}
l__3546:
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0xE);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x10));
	if (emu_ax != 0) {
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0xE));
		emu_get_memory8(emu_es, emu_bx, 0x0) = 0x0;
	}
l__3555:
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x12);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x14));
	if (emu_ax == 0) { /* Unresolved jump */ emu_ip = 0x3564; emu_last_cs = 0x01F7; emu_last_ip = 0x355B; emu_last_length = 0x0029; emu_last_crc = 0x5B91; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x12));
	emu_get_memory8(emu_es, emu_bx, 0x0) = 0x0;
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x16);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x18));
	if (emu_ax != 0) {
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x16));
		emu_get_memory8(emu_es, emu_bx, 0x0) = 0x0;
	}
l__3573:
	emu_movw(&emu_ax, emu_bp - 0x58);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ss;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	goto l__3581;
l__3581:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x0), 0x20);
	if (emu_get_memory8(emu_es, emu_bx, 0x0) == 0x20) { /* Unresolved jump */ emu_ip = 0x357E; emu_last_cs = 0x01F7; emu_last_ip = 0x3588; emu_last_length = 0x0012; emu_last_crc = 0xE7D2; emu_call(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_bx);
	emu_push(emu_cs);
	emu_push(0x3593); emu_String_strlen();
l__3593:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_si = emu_ax;
	emu_cmpw(&emu_ax, 0x50);
	if ((int16)emu_ax > (int16)0x50) {
		emu_si = 0x50;
	}
l__359F:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_get_memory8(emu_es, emu_bx, 0x0) = 0x0;
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_si);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs);
	emu_push(0x35BB); emu_String_strncpy();
l__35BB:
	emu_addw(&emu_sp, 0xA);
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_si);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_get_memory8(emu_es, emu_bx, 0x0) = 0x0;
	emu_xorw(&emu_si, emu_si);
l__35CA:
	emu_decw(&emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x0);
	emu_ax = (int8)emu_al;
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_ax;
	emu_cx = 0x7;
	emu_bx = 0x3707;
l__35DD:
	emu_ax = emu_get_memory16(emu_cs, emu_bx, 0x0);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x6));
	if (emu_ax == emu_get_memory16(emu_ss, emu_bp, -0x6)) goto l__35EC;
	emu_addw(&emu_bx, 0x2);
	if (--emu_cx != 0) goto l__35DD;
	goto l__35CA;
l__35EC:

	/* Jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_cs, emu_bx, 0xE);
	switch (emu_ip) {
		case 0x363F: goto l__363F;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x01F7; emu_last_ip = 0x35EC; emu_last_length = 0x0004; emu_last_crc = 0x38FB;
			emu_call();
			return;
	}
l__363F:
	emu_orw(&emu_si, emu_si);
	if (emu_si == 0) goto l__3671;
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x0), 0x0);
	if (emu_get_memory8(emu_es, emu_bx, 0x0) == 0x0) { /* Unresolved jump */ emu_ip = 0x3652; emu_last_cs = 0x01F7; emu_last_ip = 0x364D; emu_last_length = 0x0026; emu_last_crc = 0x37C8; emu_call(); return; }
	emu_orw(&emu_di, 0x8);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x10));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_ax = 0x41;
	emu_push(emu_ax);
	emu_push(0x3665); f__01F7_3474_001A_8B70();
	/* Unresolved jump */ emu_ip = 0x3665; emu_last_cs = 0x01F7; emu_last_ip = 0x3665; emu_last_length = 0x0026; emu_last_crc = 0x37C8; emu_call();
l__3671:
	emu_orw(&emu_si, emu_si);
	if (emu_si == 0) goto l__3678;
	goto l__35CA;
l__3678:
	emu_incw(&emu_si);
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x0), 0x0);
	if (emu_get_memory8(emu_es, emu_bx, 0x0) == 0x0) { /* Unresolved jump */ emu_ip = 0x3688; emu_last_cs = 0x01F7; emu_last_ip = 0x3683; emu_last_length = 0x0023; emu_last_crc = 0x36BB; emu_call(); return; }
	emu_orw(&emu_di, 0x4);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x14));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x12));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_ax = 0x8;
	emu_push(emu_ax);
	emu_push(0x369B); f__01F7_3474_001A_8B70();
l__369B:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_get_memory8(emu_es, emu_bx, 0x0) = 0x0;
	emu_decw(&emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x0), 0x0);
	if (emu_get_memory8(emu_es, emu_bx, 0x0) == 0x0) goto l__36DB;
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x0), 0x3A);
	if (emu_get_memory8(emu_es, emu_bx, 0x0) == 0x3A) { /* Unresolved jump */ emu_ip = 0x36B7; emu_last_cs = 0x01F7; emu_last_ip = 0x36B2; emu_last_length = 0x001C; emu_last_crc = 0x26C1; emu_call(); return; }
	goto l__35CA;
l__36DB:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x0), 0x3A);
	if (emu_get_memory8(emu_es, emu_bx, 0x0) == 0x3A) {
		emu_cmpb(&emu_get_memory8(emu_ss, emu_bp, -0x57), 0x0);
		if (emu_get_memory8(emu_ss, emu_bp, -0x57) == 0x0) { /* Unresolved jump */ emu_ip = 0x36ED; emu_last_cs = 0x01F7; emu_last_ip = 0x36E8; emu_last_length = 0x0024; emu_last_crc = 0xF4B7; emu_call(); return; }
		emu_orw(&emu_di, 0x10);
		emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
		emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
		emu_push(emu_ss);
		emu_movw(&emu_ax, emu_bp - 0x57);
		emu_push(emu_ax);
		emu_ax = 0x2;
		emu_push(emu_ax);
		emu_push(0x36FF); f__01F7_3474_001A_8B70();
	}
l__36FF:
	emu_ax = emu_di;
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
 * Decompiled function emu_String_Format_Callback_374D()
 *
 * @name emu_String_Format_Callback_374D
 * @implements 01F7:374D:001D:AA1B ()
 * @implements 01F7:376A:0023:2BAF
 *
 * Called From: 01F7:1166:001A:962D
 * Called From: 01F7:1166:0023:6860
 */
void emu_String_Format_Callback_374D()
{
l__374D:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_si);
	emu_si = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_push(emu_si);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x4));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x2));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_push(emu_cs);
	emu_push(0x376A); emu_Tools_Memcopy();
l__376A:
	emu_addw(&emu_sp, 0xA);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x4));
	emu_addw(&emu_get_memory16(emu_es, emu_bx, 0x0), emu_si);
	emu_push(emu_bx);
	emu_push(emu_es);
	emu_es = emu_get_memory16(emu_es, emu_bx, 0x2);
	emu_ax = emu_es;
	emu_pop(&emu_es);
	emu_pop(&emu_bx);
	emu_bx = emu_get_memory16(emu_es, emu_bx, 0x0);
	emu_es = emu_ax;
	emu_get_memory8(emu_es, emu_bx, 0x0) = 0x0;
	emu_ax = emu_si;
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_sp += 10;
	return;
}

/**
 * Decompiled function emu_String_sprintf()
 *
 * @name emu_String_sprintf
 * @implements 01F7:378D:0020:0F64 ()
 * @implements 01F7:37AD:0002:2597
 *
 * Called From: 0972:0612:0012:6987
 * Called From: 0972:1783:002A:4005
 * Called From: 0AEC:06FD:000D:A042
 * Called From: 0C3A:1B2E:000D:A042
 * Called From: 0EDB:0097:0067:4027
 * Called From: 10E4:082D:001B:C66D
 * Called From: 10E4:0842:0015:9380
 * Called From: 176C:26AF:000D:A042
 * Called From: 1A34:2816:0012:6CE1
 * Called From: 1A34:285B:0018:A7FE
 * Called From: 1A34:285B:000F:3DA7
 * Called From: 1A34:2924:000C:6F7F
 * Called From: 25C4:030F:0019:1817
 * Called From: B480:039A:009A:0548
 * Called From: B491:0BAB:0010:CA55
 * Called From: B495:05E3:0030:96A7
 * Called From: B495:06CF:0015:B497
 * Called From: B495:1822:0014:F324
 * Called From: B495:1872:0014:F324
 * Called From: B4B5:0047:0038:72B6
 * Called From: B4B8:0A95:002B:8318
 * Called From: B4B8:22A8:0018:A862
 * Called From: B4DA:0027:002C:B3C2
 * Called From: B4E0:0465:0036:4669
 * Called From: B4E0:0771:004D:2BC6
 * Called From: B4ED:0345:001A:CFD9
 * Called From: B4ED:0345:003E:5B9C
 * Called From: B4F2:11C5:0016:244A
 * Called From: B4FC:0013:0018:E5DC
 * Called From: B4FC:0439:001D:503F
 * Called From: B503:05AB:0013:54BB
 * Called From: B503:05EF:0013:55F7
 * Called From: B503:096E:001E:C363
 * Called From: B503:0C2C:0019:4C6C
 * Called From: B503:0CC8:001A:FEEE
 * Called From: B503:0D70:0024:968B
 * Called From: B503:0E1D:0011:B034
 * Called From: B503:111D:0031:8BDC
 * Called From: B511:0D90:0022:9A3C
 * Called From: B511:0D90:0023:911C
 * Called From: B511:12E7:002A:D28B
 * Called From: B518:0CBC:000D:A042
 */
void emu_String_sprintf()
{
l__378D:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_get_memory8(emu_es, emu_bx, 0x0) = 0x0;
	emu_ax = 0x374D;
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp + 0x6);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movw(&emu_ax, emu_bp + 0xE);
	emu_push(emu_ax);
	emu_push(0x37AD); emu_String_Format();
l__37AD:
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function emu_String_sprintf_params()
 *
 * @name emu_String_sprintf_params
 * @implements 01F7:37AF:001F:03E8 ()
 * @implements 01F7:37CE:0002:2597
 *
 * Called From: 10E4:0297:0029:DCE5
 * Called From: 10E4:09D7:0031:5E8E
 * Called From: 10E4:2030:0027:C344
 * Called From: 10E4:2030:002F:F3AC
 */
void emu_String_sprintf_params()
{
l__37AF:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_get_memory8(emu_es, emu_bx, 0x0) = 0x0;
	emu_ax = 0x374D;
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp + 0x6);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_push(0x37CE); emu_String_Format();
l__37CE:
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__01F7_37D0_0021_EE69()
 *
 * @name f__01F7_37D0_0021_EE69
 * @implements 01F7:37D0:0021:EE69 ()
 * @implements 01F7:37F1:0007:26E0
 * @implements 01F7:37F5:0003:2A57
 *
 * Called From: 01F7:0886:001E:B02C
 * Called From: 01F7:0D78:0022:B62B
 * Called From: 01F7:0D78:000C:E4D5
 * Called From: 01F7:0E6C:0011:46E9
 * Called From: 01F7:0E6C:001B:D936
 */
void f__01F7_37D0_0021_EE69()
{
l__37D0:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_si);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x4));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x2);
	emu_si = emu_get_memory16(emu_es, emu_bx, 0x0);
	emu_incw(&emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_es = emu_ax;
	emu_dl = emu_get_memory8(emu_es, emu_si, 0x0);
	emu_al = emu_dl;
	emu_orb(&emu_al, emu_al);
	if (emu_al != 0) goto l__37F1;
	emu_ax = 0xFFFF;
	goto l__37F5;
l__37F1:
	emu_al = emu_dl;
	emu_ah = 0x0;
l__37F5:
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__01F7_37F8_000B_8F48()
 *
 * @name f__01F7_37F8_000B_8F48
 * @implements 01F7:37F8:000B:8F48 ()
 *
 * Called From: 01F7:0EB2:000A:70B4
 */
void f__01F7_37F8_000B_8F48()
{
l__37F8:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_decw(&emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__01F7_3803_001E_AAD4()
 *
 * @name f__01F7_3803_001E_AAD4
 * @implements 01F7:3803:001E:AAD4 ()
 * @implements 01F7:3821:0005:6383
 *
 * Called From: B4B8:156F:0026:6A7F
 * Called From: B4DA:1240:0018:9D99
 * Called From: B503:0655:0033:8391
 * Called From: B503:09B3:001C:7696
 * Called From: B503:0E62:001C:7696
 * Called From: B503:126C:0017:1F8F
 */
void f__01F7_3803_001E_AAD4()
{
l__3803:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp + 0xE);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp + 0x6);
	emu_push(emu_ax);
	emu_ax = 0x37F8;
	emu_push(emu_ax);
	emu_ax = 0x37D0;
	emu_push(emu_ax);
	emu_push(0x3821); f__01F7_083A_0014_CDF5();
l__3821:
	emu_addw(&emu_sp, 0x10);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function emu_String_strcat()
 *
 * @name emu_String_strcat
 * @implements 01F7:384A:003F:AE43 ()
 * @implements 01F7:387A:000F:165F
 * @implements 01F7:3881:0008:45B1
 *
 * Called From: 0642:0794:0017:3AC1
 * Called From: 0642:07AD:0019:BAF4
 * Called From: 176C:7E8B:0012:C53A
 * Called From: 176C:7EA2:0017:F7B8
 * Called From: 176C:7EF2:0012:B53A
 * Called From: 1A34:293A:000F:BC4B
 * Called From: 1DB6:0145:001B:2F76
 * Called From: 1DB6:0158:0010:743C
 * Called From: 1DB6:0158:0013:606D
 * Called From: 261F:0114:0012:C65C
 * Called From: B518:1313:0012:3A86
 * Called From: B518:133E:000D:D1AE
 * Called From: B518:1350:0012:4286
 * Called From: B518:138B:0020:B4DF
 * Called From: B518:139D:0012:4286
 * Called From: B518:13C1:000D:D1AE
 * Called From: B518:13C1:000A:1C86
 */
void emu_String_strcat()
{
l__384A:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_si);
	emu_push(emu_di);
	emu_cld();
	emu_push(emu_ds);
	emu_lfp(&emu_es, &emu_di, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_dx = emu_di;
	emu_xorb(&emu_al, emu_al);
	emu_cx = 0xFFFF;
	emu_repne_scasb();
	emu_push(emu_es);
	emu_movw(&emu_si, emu_di - 0x1);
	emu_lfp(&emu_es, &emu_di, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_cx = 0xFFFF;
	emu_repne_scasb();
	emu_notw(&emu_cx, emu_cx);
	emu_subw(&emu_di, emu_cx);
	emu_push(emu_es);
	emu_pop(&emu_ds);
	emu_pop(&emu_es);
	emu_xchgw(&emu_di, &emu_si);
	emu_testw(&emu_si, 0x1);
	if ((emu_si & 0x1) != 0) {
		emu_movsb(emu_ds);
		emu_decw(&emu_cx);
	}
l__387A:
	emu_shrw(&emu_cx, 0x1);
	emu_rep_movsw(emu_ds);
	if (emu_flags.cf) {
		emu_movsb(emu_ds);
	}
l__3881:
	emu_xchgw(&emu_ax, &emu_dx);
	emu_dx = emu_es;
	emu_pop(&emu_ds);
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function emu_String_strchr()
 *
 * @name emu_String_strchr
 * @implements 01F7:3889:0033:4660 ()
 * @implements 01F7:38A4:0018:3CB8
 * @implements 01F7:38B5:0007:2117
 * @implements 01F7:38BC:000A:3CBE
 * @implements 01F7:38BD:0009:2D3E
 * @implements 01F7:38C3:0003:2E57
 *
 * Called From: B4B8:0AA7:0012:3EFE
 * Called From: B4FC:047D:002B:AFC3
 * Called From: B4FC:047D:000F:D507
 * Called From: B4FC:04EF:0025:5BB1
 * Called From: B4FC:0529:0011:F59E
 * Called From: B4FC:058D:0017:0D26
 * Called From: B4FC:058D:0013:EDC2
 * Called From: B4FC:061D:001E:C800
 * Called From: B4FC:0635:0018:5684
 * Called From: B4FC:065B:0012:379C
 * Called From: B4FC:06FC:000F:D49F
 * Called From: B4FC:0777:0015:3D82
 * Called From: B518:0CD4:0018:CBCF
 */
void emu_String_strchr()
{
l__3889:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_si);
	emu_cld();
	emu_push(emu_ds);
	emu_lfp(&emu_ds, &emu_si, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_bl = emu_get_memory8(emu_ss, emu_bp,  0xA);
	emu_testw(&emu_si, 0x1);
	if ((emu_si & 0x1) != 0) {
		emu_lodsb(emu_ds);
		emu_cmpb(&emu_al, emu_bl);
		if (emu_al == emu_bl) goto l__38BC;
		emu_andb(&emu_al, emu_al);
		if (emu_flags.zf) goto l__38B5;
	}
l__38A4:
	emu_lodsw(emu_ds);
	emu_cmpb(&emu_al, emu_bl);
	if (emu_al == emu_bl) goto l__38BD;
	emu_andb(&emu_al, emu_al);
	if (!emu_flags.zf) {
		emu_cmpb(&emu_ah, emu_bl);
		if (emu_ah == emu_bl) goto l__38BC;
		emu_andb(&emu_ah, emu_ah);
		if (!emu_flags.zf) goto l__38A4;
	}
l__38B5:
	emu_pop(&emu_ds);
	emu_xorw(&emu_dx, emu_dx);
	emu_xorw(&emu_ax, emu_ax);
	goto l__38C3;
l__38BC:
	emu_incw(&emu_si);
l__38BD:
	emu_movw(&emu_ax, emu_si - 0x2);
	emu_dx = emu_ds;
	emu_pop(&emu_ds);
l__38C3:
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function emu_String_strcmp()
 *
 * @name emu_String_strcmp
 * @implements 01F7:38C6:0030:705A ()
 *
 * Called From: B4DA:1577:0012:9005
 */
void emu_String_strcmp()
{
l__38C6:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_si);
	emu_push(emu_di);
	emu_dx = emu_ds;
	emu_cld();
	emu_xorw(&emu_ax, emu_ax);
	emu_bx = emu_ax;
	emu_lfp(&emu_es, &emu_di, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_si = emu_di;
	emu_xorb(&emu_al, emu_al);
	emu_cx = 0xFFFF;
	emu_repne_scasb();
	emu_notw(&emu_cx, emu_cx);
	emu_di = emu_si;
	emu_lfp(&emu_ds, &emu_si, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_rep_cmpsb(emu_ds);
	emu_al = emu_get_memory8(emu_ds, emu_si, 0xFFFF);
	emu_bl = emu_get_memory8(emu_es, emu_di, 0xFFFF);
	emu_subw(&emu_ax, emu_bx);
	emu_ds = emu_dx;
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function emu_String_strcpy()
 *
 * @name emu_String_strcpy
 * @implements 01F7:38F6:0029:8B99 ()
 *
 * Called From: 01F7:27EC:0010:D57C
 * Called From: 01F7:40FD:0024:F92B
 * Called From: 01F7:4112:0015:9374
 * Called From: 10E4:0A75:001F:F767
 * Called From: 10E4:0BC3:000F:3D5D
 * Called From: 10E4:0BED:0012:B741
 * Called From: 10E4:0BED:0014:9F42
 * Called From: 10E4:0CAF:001F:FF74
 * Called From: 10E4:0CCD:001E:659A
 * Called From: 10E4:0CF6:0018:2FC8
 * Called From: 1DB6:011D:0012:EEC5
 * Called From: B4E0:0480:000E:69F3
 * Called From: B4F2:126F:0014:86F2
 * Called From: B518:0CF2:0013:A981
 * Called From: B518:1301:0010:0F35
 * Called From: B52A:02D5:0063:F767
 * Called From: B536:077E:0011:1D0E
 */
void emu_String_strcpy()
{
l__38F6:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_si);
	emu_push(emu_di);
	emu_cld();
	emu_lfp(&emu_es, &emu_di, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_si = emu_di;
	emu_xorb(&emu_al, emu_al);
	emu_cx = 0xFFFF;
	emu_repne_scasb();
	emu_notw(&emu_cx, emu_cx);
	emu_push(emu_ds);
	emu_ax = emu_es;
	emu_ds = emu_ax;
	emu_lfp(&emu_es, &emu_di, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_rep_movsb(emu_ds);
	emu_pop(&emu_ds);
	emu_dx = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function emu_String_strcasecmp()
 *
 * @name emu_String_strcasecmp
 * @implements 01F7:3964:0041:7552 ()
 * @implements 01F7:3979:002C:34A6
 * @implements 01F7:398E:0017:CC6E
 * @implements 01F7:3999:000C:B4D0
 * @implements 01F7:399D:0008:CA06
 *
 * Called From: 0642:0036:0015:FB5A
 * Called From: 0642:0093:0015:F8DA
 * Called From: 10E4:0A56:0015:56BE
 * Called From: 10E4:0C5E:000F:1C48
 * Called From: 10E4:0C77:000F:9C4E
 * Called From: 10E4:0C90:000F:1C4D
 * Called From: 1381:0033:0023:81F4
 * Called From: 1381:0078:001C:0B13
 * Called From: 1381:00B2:0019:21DF
 * Called From: 1381:00EC:0019:21EC
 * Called From: 176C:6E65:000B:EB5E
 * Called From: 1FB5:1B04:0011:AD2D
 * Called From: B4B8:15AC:0023:DD60
 * Called From: B530:002E:0023:BD3C
 * Called From: B533:002E:0023:A798
 */
void emu_String_strcasecmp()
{
l__3964:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_si);
	emu_push(emu_di);
	emu_dx = emu_ds;
	emu_cld();
	emu_lfp(&emu_ds, &emu_si, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_lfp(&emu_es, &emu_di, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_xorw(&emu_ax, emu_ax);
	emu_bx = emu_ax;
	emu_cx = 0x617A;
l__3979:
	emu_lodsb(emu_ds);
	emu_bl = emu_get_memory8(emu_es, emu_di, 0x0);
	emu_orb(&emu_al, emu_al);
	if (emu_al == 0) goto l__399D;
	emu_scasb();
	if (emu_flags.zf) goto l__3979;
	emu_cmpb(&emu_al, emu_ch);
	if (emu_al >= emu_ch) {
		emu_cmpb(&emu_al, emu_cl);
		if (emu_al <= emu_cl) {
			emu_subb(&emu_al, 0x20);
		}
	}
l__398E:
	emu_cmpb(&emu_bl, emu_ch);
	if (emu_bl >= emu_ch) {
		emu_cmpb(&emu_bl, emu_cl);
		if (emu_bl <= emu_cl) {
			emu_subb(&emu_bl, 0x20);
		}
	}
l__3999:
	emu_cmpb(&emu_al, emu_bl);
	if (emu_al == emu_bl) goto l__3979;
l__399D:
	emu_subw(&emu_ax, emu_bx);
	emu_ds = emu_dx;
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function emu_String_strlen()
 *
 * @name emu_String_strlen
 * @implements 01F7:39A5:001F:1A5D ()
 * @implements 01F7:39B7:000D:EFE3
 * @implements 01F7:39C1:0003:2E77
 *
 * Called From: 01F7:27AD:000A:3382
 * Called From: 01F7:348B:001A:8B70
 * Called From: 01F7:3590:0012:E7D2
 * Called From: 01F7:3A4F:0011:CC22
 * Called From: 0FCB:0133:000C:74DA
 * Called From: 1A34:2918:000D:2180
 * Called From: 1DB6:012A:000D:43EF
 * Called From: 2521:0045:0015:AA0F
 * Called From: 261F:00E4:000A:57AA
 * Called From: B491:0731:0017:E28B
 * Called From: B495:0627:0019:57AC
 * Called From: B495:06DC:000D:B8ED
 * Called From: B4B5:0292:000B:6FB9
 * Called From: B4B5:03A6:000B:6148
 * Called From: B4B5:03A6:0023:F5D3
 * Called From: B4B5:062D:000E:6326
 * Called From: B4B5:062D:000B:414C
 * Called From: B4B5:064A:000B:6148
 * Called From: B4B5:087A:0054:FF92
 * Called From: B4B5:087A:000B:414C
 * Called From: B4B5:0897:000B:6148
 * Called From: B4B5:0A35:000B:714A
 * Called From: B4B5:0A35:0087:69AC
 * Called From: B4B5:0C3E:000B:6148
 * Called From: B4B5:0C3E:001C:5A2C
 * Called From: B4B5:0E39:000B:414C
 * Called From: B4B5:0E39:003C:C4FF
 * Called From: B4B5:0E56:000B:6148
 * Called From: B4B5:0F90:000B:714A
 * Called From: B4B5:0F90:000E:53E0
 * Called From: B4B5:0FAD:000B:6148
 * Called From: B4B5:1052:000B:714A
 * Called From: B4B5:1052:001B:6488
 * Called From: B4B8:0B1D:0022:7AFB
 * Called From: B4B8:11DD:000E:4382
 * Called From: B4B8:161D:000B:714A
 * Called From: B4DA:0E12:0013:390A
 * Called From: B4DA:13AC:000D:BCD8
 * Called From: B4DA:161D:000D:BCD8
 * Called From: B4DA:1A56:0011:649B
 * Called From: B4FC:0452:000C:346F
 * Called From: B4FC:053F:000B:6148
 * Called From: B4FC:0576:0017:0883
 * Called From: B4FC:0762:000D:14AC
 * Called From: B4FC:0838:001E:E9EF
 * Called From: B511:08A1:000E:9B98
 * Called From: B518:0777:0017:5D3C
 * Called From: B536:078B:000D:EADB
 */
void emu_String_strlen()
{
l__39A5:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_di);
	emu_lfp(&emu_es, &emu_di, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_xorw(&emu_ax, emu_ax);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_ax == emu_get_memory16(emu_ss, emu_bp,  0x8)) {
		emu_cmpw(&emu_ax, emu_di);
		if (emu_ax == emu_di) goto l__39C1;
	}
l__39B7:
	emu_cld();
	emu_cx = 0xFFFF;
	emu_repne_scasb();
	emu_xchgw(&emu_ax, &emu_cx);
	emu_notw(&emu_ax, emu_ax);
	emu_decw(&emu_ax);
l__39C1:
	emu_pop(&emu_di);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function emu_String_strncpy()
 *
 * @name emu_String_strncpy
 * @implements 01F7:39C4:0031:EE87 ()
 *
 * Called From: 01F7:34A3:0018:9A8B
 * Called From: 01F7:35B8:001C:58DB
 * Called From: B4FC:03EF:002C:9251
 * Called From: B503:0C13:002A:B077
 * Called From: B503:0CFE:002E:9EAC
 */
void emu_String_strncpy()
{
l__39C4:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_si);
	emu_push(emu_di);
	emu_cld();
	emu_lfp(&emu_es, &emu_di, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_si = emu_di;
	emu_xorb(&emu_al, emu_al);
	emu_bx = emu_get_memory16(emu_ss, emu_bp,  0xE);
	emu_cx = emu_bx;
	emu_repne_scasb();
	emu_subw(&emu_bx, emu_cx);
	emu_push(emu_ds);
	emu_di = emu_es;
	emu_ds = emu_di;
	emu_lfp(&emu_es, &emu_di, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_xchgw(&emu_bx, &emu_cx);
	emu_rep_movsb(emu_ds);
	emu_cx = emu_bx;
	emu_rep_stosb();
	emu_pop(&emu_ds);
	emu_dx = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__01F7_39F5_0008_F939()
 *
 * @name f__01F7_39F5_0008_F939
 * @implements 01F7:39F5:0008:F939 ()
 * @implements 01F7:39FD:000E:8182
 * @implements 01F7:3A0B:0016:854A
 * @implements 01F7:3A21:0020:B782
 * @implements 01F7:3A24:001D:388D
 * @implements 01F7:3A30:0011:018B
 * @implements 01F7:3A3D:0004:893F
 *
 * Called From: B491:0283:0022:210C
 * Called From: B491:0283:001C:2A23
 */
void f__01F7_39F5_0008_F939()
{
l__39F5:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x4);
	goto l__3A30;
l__39FD:
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0xC);
	emu_dx = emu_get_memory16(emu_ss, emu_bp,  0xA);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_dx;
	goto l__3A24;
l__3A0B:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x0);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x0));
	if (emu_al != emu_get_memory8(emu_es, emu_bx, 0x0)) goto l__3A21;
	emu_dx = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	goto l__3A3D;
l__3A21:
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x4));
l__3A24:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x0), 0x0);
	if (emu_get_memory8(emu_es, emu_bx, 0x0) != 0x0) goto l__3A0B;
	emu_incw(&emu_get_memory16(emu_ss, emu_bp,  0x6));
l__3A30:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x0), 0x0);
	if (emu_get_memory8(emu_es, emu_bx, 0x0) != 0x0) goto l__39FD;
	emu_xorw(&emu_dx, emu_dx);
	emu_xorw(&emu_ax, emu_ax);
l__3A3D:
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__01F7_3A41_0011_CC22()
 *
 * @name f__01F7_3A41_0011_CC22
 * @implements 01F7:3A41:0011:CC22 ()
 * @implements 01F7:3A52:0015:6E70
 * @implements 01F7:3A67:0016:893D
 * @implements 01F7:3A7D:000D:8402
 * @implements 01F7:3A7E:000C:CC00
 *
 * Called From: 1FB5:1B43:0027:F474
 */
void f__01F7_3A41_0011_CC22()
{
l__3A41:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x4);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x3A52); emu_String_strlen();
l__3A52:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_incw(&emu_ax);
	emu_cx = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_dx = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_addw(&emu_dx, emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_dx;
	goto l__3A7E;
l__3A67:
	emu_decw(&emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x0);
	emu_cmpb(&emu_al, emu_get_memory8(emu_ss, emu_bp,  0xA));
	if (emu_al != emu_get_memory8(emu_ss, emu_bp,  0xA)) goto l__3A7D;
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x2);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x4);
	/* Unresolved jump */ emu_ip = 0x3A86; emu_last_cs = 0x01F7; emu_last_ip = 0x3A7B; emu_last_length = 0x0016; emu_last_crc = 0x893D; emu_call();
l__3A7D:
	emu_decw(&emu_cx);
l__3A7E:
	emu_orw(&emu_cx, emu_cx);
	if (emu_cx != 0) goto l__3A67;
	emu_xorw(&emu_dx, emu_dx);
	emu_xorw(&emu_ax, emu_ax);
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function emu_String_strstr()
 *
 * @name emu_String_strstr
 * @implements 01F7:3A8A:0018:E4EE ()
 * @implements 01F7:3AA2:003F:5E2F
 * @implements 01F7:3AC7:001A:452C
 * @implements 01F7:3AD8:0009:8564
 * @implements 01F7:3AE1:0017:4E03
 * @implements 01F7:3AEE:000A:AC55
 *
 * Called From: B4B5:0273:000E:B38A
 * Called From: B4B5:0D8A:000E:548A
 */
void emu_String_strstr()
{
l__3A8A:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_si);
	emu_push(emu_di);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x0);
	emu_ax = (int8)emu_al;
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax != 0) goto l__3AA2;
	emu_dx = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	/* Unresolved jump */ emu_ip = 0x3AF4; emu_last_cs = 0x01F7; emu_last_ip = 0x3AA0; emu_last_length = 0x0018; emu_last_crc = 0xE4EE; emu_call();
l__3AA2:
	emu_push(emu_ds);
	emu_cld();
	emu_lfp(&emu_es, &emu_di, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_es);
	emu_bx = emu_di;
	emu_xorw(&emu_ax, emu_ax);
	emu_cx = 0xFFFF;
	emu_repne_scasb();
	emu_notw(&emu_cx, emu_cx);
	emu_xchgw(&emu_dx, &emu_cx);
	emu_lfp(&emu_es, &emu_di, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_es);
	emu_bp = emu_di;
	emu_xorw(&emu_ax, emu_ax);
	emu_cx = 0xFFFF;
	emu_repne_scasb();
	emu_incw(&emu_cx);
	emu_notw(&emu_cx, emu_cx);
	emu_pop(&emu_ds);
	emu_pop(&emu_es);
l__3AC7:
	emu_si = emu_bp;
	emu_lodsb(emu_ds);
	emu_xchgw(&emu_bx, &emu_di);
	emu_xchgw(&emu_dx, &emu_cx);
	emu_repne_scasb();
	emu_bx = emu_di;
	if (emu_flags.zf) {
		emu_cmpw(&emu_cx, emu_dx);
		if (emu_cx >= emu_dx) goto l__3AE1;
	}
l__3AD8:
	emu_xorw(&emu_bx, emu_bx);
	emu_es = emu_bx;
	emu_bx = 0x1;
	goto l__3AEE;
l__3AE1:
	emu_xchgw(&emu_dx, &emu_cx);
	if (emu_cx == 0) goto l__3AEE;
	emu_ax = emu_cx;
	emu_decw(&emu_cx);
	emu_rep_cmpsb(emu_ds);
	emu_cx = emu_ax;
	if (!emu_flags.zf) goto l__3AC7;
l__3AEE:
	emu_pop(&emu_ds);
	emu_ax = emu_bx;
	emu_decw(&emu_ax);
	emu_dx = emu_es;
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__01F7_3AF8_001D_A439()
 *
 * @name f__01F7_3AF8_001D_A439
 * @implements 01F7:3AF8:001D:A439 ()
 * @implements 01F7:3B15:000E:8402
 * @implements 01F7:3B23:0042:18E1
 * @implements 01F7:3B35:0030:ADAF
 * @implements 01F7:3B3E:0027:AFA7
 * @implements 01F7:3B4B:001A:0078
 * @implements 01F7:3B55:0010:9E5D
 * @implements 01F7:3B65:000F:A092
 * @implements 01F7:3B74:000E:8302
 * @implements 01F7:3B82:0019:65CA
 * @implements 01F7:3B9B:0024:A95A
 * @implements 01F7:3B9E:0021:51AA
 * @implements 01F7:3BAB:0014:266B
 * @implements 01F7:3BB5:000A:4F03
 * @implements 01F7:3BBB:0004:893F
 *
 * Called From: B4B5:0439:0013:2B96
 * Called From: B4B5:045F:0010:8687
 * Called From: B4B5:04AD:0019:B499
 * Called From: B4B5:04F1:0019:97D1
 * Called From: B4B5:051F:001C:DBB3
 * Called From: B4B5:0542:0019:A2F9
 * Called From: B4B5:06FB:0013:2B96
 * Called From: B4B5:0719:0014:A580
 * Called From: B4B5:0792:0013:2B96
 * Called From: B4B5:07B0:0014:A580
 * Called From: B4B5:07DE:0010:8687
 * Called From: B4B5:07FD:0015:F37B
 * Called From: B4B5:0978:0013:2B96
 * Called From: B4B5:09A4:0022:7AC5
 * Called From: B4B5:0A7E:0013:2BE2
 * Called From: B4B5:0ADA:003E:17EA
 * Called From: B4B5:0B22:0013:2BE2
 * Called From: B4B5:0B7D:0010:86F3
 * Called From: B4B5:0B7D:002F:AC2C
 * Called From: B4B5:0BC5:0013:2BE2
 * Called From: B4B5:0C22:003F:FEF1
 * Called From: B4B5:0CE5:0013:2B96
 * Called From: B4B5:0D0B:0010:8687
 * Called From: B4B5:0D72:0023:4ECB
 * Called From: B4B5:0DB8:002E:8780
 * Called From: B4B5:0DE9:0027:5285
 * Called From: B4B5:0ED2:0013:2B96
 * Called From: B4B5:0EF8:0010:8687
 * Called From: B4B5:0F1D:001B:3B64
 * Called From: B4B5:0F42:001B:0EE0
 * Called From: B4B5:0F61:0015:FC7B
 */
void f__01F7_3AF8_001D_A439()
{
l__3AF8:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x8);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_ax != 0) {
		emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x8);
		emu_dx = emu_get_memory16(emu_ss, emu_bp,  0x6);
		emu_get_memory16(emu_ds, 0x00, 0x9AE4) = emu_ax;
		emu_get_memory16(emu_ds, 0x00, 0x9AE2) = emu_dx;
	}
	goto l__3B4B;
l__3B15:
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0xC);
	emu_dx = emu_get_memory16(emu_ss, emu_bp,  0xA);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_dx;
	goto l__3B35;
l__3B23:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x0);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x9AE2));
	emu_cmpb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x0));
	if (emu_al == emu_get_memory8(emu_es, emu_bx, 0x0)) goto l__3B3E;
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x4));
l__3B35:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x0), 0x0);
	if (emu_get_memory8(emu_es, emu_bx, 0x0) != 0x0) goto l__3B23;
l__3B3E:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x0), 0x0);
	if (emu_get_memory8(emu_es, emu_bx, 0x0) == 0x0) goto l__3B55;
	emu_incw(&emu_get_memory16(emu_ds, 0x00, 0x9AE2));
l__3B4B:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x9AE2));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x0), 0x0);
	if (emu_get_memory8(emu_es, emu_bx, 0x0) != 0x0) goto l__3B15;
l__3B55:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x9AE2));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x0), 0x0);
	if (emu_get_memory8(emu_es, emu_bx, 0x0) != 0x0) goto l__3B65;
	emu_xorw(&emu_dx, emu_dx);
	emu_xorw(&emu_ax, emu_ax);
	goto l__3BBB;
l__3B65:
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x9AE4);
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x9AE2);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_dx;
	goto l__3BAB;
l__3B74:
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0xC);
	emu_dx = emu_get_memory16(emu_ss, emu_bp,  0xA);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_dx;
	goto l__3B9E;
l__3B82:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x0);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x9AE2));
	emu_cmpb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x0));
	if (emu_al != emu_get_memory8(emu_es, emu_bx, 0x0)) goto l__3B9B;
	emu_get_memory8(emu_es, emu_bx, 0x0) = 0x0;
	emu_incw(&emu_get_memory16(emu_ds, 0x00, 0x9AE2));
	goto l__3BB5;
l__3B9B:
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x4));
l__3B9E:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x0), 0x0);
	if (emu_get_memory8(emu_es, emu_bx, 0x0) != 0x0) goto l__3B82;
	emu_incw(&emu_get_memory16(emu_ds, 0x00, 0x9AE2));
l__3BAB:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x9AE2));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x0), 0x0);
	if (emu_get_memory8(emu_es, emu_bx, 0x0) != 0x0) goto l__3B74;
l__3BB5:
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x6);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x8);
l__3BBB:
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function emu_String_strupr()
 *
 * @name emu_String_strupr
 * @implements 01F7:3CD5:000D:9D98 ()
 * @implements 01F7:3CE2:0017:5350
 * @implements 01F7:3CED:000C:E35E
 *
 * Called From: 1FB5:1B70:0017:C743
 * Called From: B4B5:0265:000E:4C74
 * Called From: B4B5:0D7C:000A:FBE7
 * Called From: B4FC:0446:000D:8516
 */
void emu_String_strupr()
{
l__3CD5:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_si);
	emu_cld();
	emu_push(emu_ds);
	emu_lfp(&emu_ds, &emu_si, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_dx = emu_si;
	goto l__3CED;
l__3CE2:
	emu_subb(&emu_al, 0x61);
	emu_cmpb(&emu_al, 0x19);
	if (emu_al <= 0x19) {
		emu_addb(&emu_al, 0x41);
		emu_get_memory8(emu_ds, emu_si, 0xFFFF) = emu_al;
	}
l__3CED:
	emu_lodsb(emu_ds);
	emu_andb(&emu_al, emu_al);
	if (!emu_flags.zf) goto l__3CE2;
	emu_xchgw(&emu_ax, &emu_dx);
	emu_dx = emu_ds;
	emu_pop(&emu_ds);
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__01F7_3CF9_000C_1201()
 *
 * @name f__01F7_3CF9_000C_1201
 * @implements 01F7:3CF9:000C:1201 ()
 * @implements 01F7:3D05:0032:1561
 * @implements 01F7:3D37:0019:225A
 * @implements 01F7:3D50:0024:0E49
 * @implements 01F7:3D65:000F:C671
 * @implements 01F7:3D7C:0053:E1F5
 * @implements 01F7:3D9A:0035:C4C8
 * @implements 01F7:3DCF:0014:372E
 * @implements 01F7:3DD4:000F:9FFD
 * @implements 01F7:3DE3:001B:E08E
 * @implements 01F7:3DFE:0025:0E25
 *
 * Called From: 01F7:1069:0011:10F9
 */
void f__01F7_3CF9_000C_1201()
{
l__3CF9:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x4);
	emu_push(emu_si);
	emu_push(emu_cs);
	emu_push(0x3D05); f__01F7_4027_0011_8951();
l__3D05:
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x7B50);
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x7B4E);
	emu_addw(&emu_dx, 0xA600);
	emu_adcw(&emu_ax, 0x12CE);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_dx;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_si = emu_get_memory16(emu_es, emu_bx, 0x0);
	emu_addw(&emu_si, 0xF844);
	emu_ax = emu_si;
	emu_cl = 0x2;
	emu_sarw(&emu_ax, emu_cl);
	emu_cwd();
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_dx = 0x786;
	emu_ax = 0x1F80;
	emu_pop(&emu_cx);
	emu_pop(&emu_bx);
	emu_push(0x3D37); emu_Tools_MulCSIP_ip();
l__3D37:
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax);
	emu_adcw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx);
	emu_ax = emu_si;
	emu_andw(&emu_ax, 0x3);
	emu_cwd();
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_dx = 0x1E1;
	emu_ax = 0x3380;
	emu_pop(&emu_cx);
	emu_pop(&emu_bx);
	emu_push(0x3D50); emu_Tools_MulCSIP_ip();
l__3D50:
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax);
	emu_adcw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx);
	emu_testw(&emu_si, 0x3);
	if ((emu_si & 0x3) != 0) {
		emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x5180);
		emu_adcw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x1);
	}
l__3D65:
	emu_xorw(&emu_cx, emu_cx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x3);
	emu_ax = (int8)emu_al;
	emu_decw(&emu_ax);
	emu_si = emu_ax;
	goto l__3D7C;
l__3D7C:
	emu_orw(&emu_si, emu_si);
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x3D74; emu_last_cs = 0x01F7; emu_last_ip = 0x3D7E; emu_last_length = 0x0053; emu_last_crc = 0xE1F5; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x2);
	emu_ax = (int8)emu_al;
	emu_decw(&emu_ax);
	emu_addw(&emu_cx, emu_ax);
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x3), 0x2);
	if ((int8)emu_get_memory8(emu_es, emu_bx, 0x3) > (int8)0x2) {
		emu_testw(&emu_get_memory16(emu_es, emu_bx, 0x0), 0x3);
		if ((emu_get_memory16(emu_es, emu_bx, 0x0) & 0x3) == 0) {
			emu_incw(&emu_cx);
		}
	}
l__3D9A:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x1);
	emu_ah = 0x0;
	emu_push(emu_ax);
	emu_ax = emu_cx;
	emu_dx = 0x18;
	emu_imuluw(&emu_ax, emu_dx);
	emu_pop(&emu_dx);
	emu_addw(&emu_ax, emu_dx);
	emu_si = emu_ax;
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x7B52), 0x0);
	if (emu_get_memory16(emu_ds, 0x00, 0x7B52) == 0x0) goto l__3DD4;
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x1);
	emu_ah = 0x0;
	emu_push(emu_ax);
	emu_push(emu_cx);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x0);
	emu_addw(&emu_ax, 0xF84E);
	emu_push(emu_ax);
	emu_push(0x3DCF); f__01F7_4215_0026_431F();
l__3DCF:
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax != 0) {
		emu_decw(&emu_si);
	}
l__3DD4:
	emu_ax = emu_si;
	emu_cwd();
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_xorw(&emu_dx, emu_dx);
	emu_ax = 0xE10;
	emu_pop(&emu_cx);
	emu_pop(&emu_bx);
	emu_push(0x3DE3); emu_Tools_MulCSIP_ip();
l__3DE3:
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax);
	emu_adcw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x0);
	emu_ah = 0x0;
	emu_cwd();
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_xorw(&emu_dx, emu_dx);
	emu_ax = 0x3C;
	emu_pop(&emu_cx);
	emu_pop(&emu_bx);
	emu_push(0x3DFE); emu_Tools_MulCSIP_ip();
l__3DFE:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_bl = emu_get_memory8(emu_es, emu_bx, 0x3);
	emu_bh = 0x0;
	emu_push(emu_ax);
	emu_ax = emu_bx;
	emu_push(emu_dx);
	emu_cwd();
	emu_pop(&emu_bx);
	emu_pop(&emu_cx);
	emu_addw(&emu_cx, emu_ax);
	emu_adcw(&emu_bx, emu_dx);
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_cx);
	emu_adcw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_bx);
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x2);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_pop(&emu_si);
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__01F7_4027_0011_8951()
 *
 * @name f__01F7_4027_0011_8951
 * @implements 01F7:4027:0011:8951 ()
 * @implements 01F7:4038:000F:86C4
 * @implements 01F7:40DC:0024:F92B
 * @implements 01F7:4100:0015:9374
 * @implements 01F7:4115:0006:D73F
 * @implements 01F7:4210:0005:8BCF
 *
 * Called From: 01F7:0222:0015:AC4F
 * Called From: 01F7:3D02:000C:1201
 */
void f__01F7_4027_0011_8951()
{
l__4027:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x4);
	emu_push(emu_si);
	emu_push(emu_ds);
	emu_ax = 0x7B54;
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x4038); f__01F7_27FD_0037_E2C0();
l__4038:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_orw(&emu_ax, emu_dx);
	if (emu_ax != 0) { /* Unresolved jump */ emu_ip = 0x4047; emu_last_cs = 0x01F7; emu_last_ip = 0x4042; emu_last_length = 0x000F; emu_last_crc = 0x86C4; emu_call(); return; }
	goto l__40DC;
l__40DC:
	emu_get_memory16(emu_ds, 0x00, 0x7B52) = 0x1;
	emu_get_memory16(emu_ds, 0x00, 0x7B50) = 0x0;
	emu_get_memory16(emu_ds, 0x00, 0x7B4E) = 0x4650;
	emu_push(emu_ds);
	emu_ax = 0x7B57;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x7B48));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x7B46));
	emu_push(emu_cs);
	emu_push(0x4100); emu_String_strcpy();
l__4100:
	emu_addw(&emu_sp, 0x8);
	emu_push(emu_ds);
	emu_ax = 0x7B5B;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x7B4C));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x7B4A));
	emu_push(emu_cs);
	emu_push(0x4115); emu_String_strcpy();
l__4115:
	emu_addw(&emu_sp, 0x8);
	goto l__4210;
l__4210:
	emu_pop(&emu_si);
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__01F7_4215_0026_431F()
 *
 * @name f__01F7_4215_0026_431F
 * @implements 01F7:4215:0026:431F ()
 * @implements 01F7:4234:0007:D805
 * @implements 01F7:423B:0010:8079
 * @implements 01F7:423E:000D:0C9E
 * @implements 01F7:426C:002A:8B7E
 * @implements 01F7:42ED:0007:CAD2
 *
 * Called From: 01F7:3DCC:0035:C4C8
 */
void f__01F7_4215_0026_431F()
{
l__4215:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_si);
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp,  0x6), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp,  0x6) != 0x0) { /* Unresolved jump */ emu_ip = 0x424B; emu_last_cs = 0x01F7; emu_last_ip = 0x421D; emu_last_length = 0x0026; emu_last_crc = 0x431F; emu_call(); return; }
	emu_si = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp,  0x8), 0x3B);
	if (emu_get_memory16(emu_ss, emu_bp,  0x8) >= 0x3B) {
		emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x4);
		emu_addw(&emu_ax, 0x46);
		emu_testw(&emu_ax, 0x3);
		if ((emu_ax & 0x3) == 0) {
			emu_decw(&emu_si);
		}
	}
l__4234:
	emu_get_memory16(emu_ss, emu_bp,  0x6) = 0x0;
	goto l__423E;
l__423B:
	emu_incw(&emu_get_memory16(emu_ss, emu_bp,  0x6));
l__423E:
	emu_bx = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_shlw(&emu_bx, 0x1);
	emu_cmpw(&emu_get_memory16(emu_ds, emu_bx, 0x7B2C), emu_si);
	if (emu_get_memory16(emu_ds, emu_bx, 0x7B2C) <= emu_si) goto l__423B;
	goto l__426C;
l__426C:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp,  0x6), 0x4);
	if (emu_get_memory16(emu_ss, emu_bp,  0x6) < 0x4) goto l__42ED;
	if (emu_get_memory16(emu_ss, emu_bp,  0x6) == 0x4) { /* Unresolved jump */ emu_ip = 0x427C; emu_last_cs = 0x01F7; emu_last_ip = 0x4272; emu_last_length = 0x002A; emu_last_crc = 0x8B7E; emu_call(); return; }
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp,  0x6), 0xA);
	if (emu_get_memory16(emu_ss, emu_bp,  0x6) > 0xA) goto l__42ED;
	if (emu_get_memory16(emu_ss, emu_bp,  0x6) != 0xA) { /* Unresolved jump */ emu_ip = 0x42E8; emu_last_cs = 0x01F7; emu_last_ip = 0x427A; emu_last_length = 0x002A; emu_last_crc = 0x8B7E; emu_call(); return; }
	emu_bx = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_shlw(&emu_bx, 0x1);
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp,  0x4), 0x10);
	if ((int16)emu_get_memory16(emu_ss, emu_bp,  0x4) <= (int16)0x10) { /* Unresolved jump */ emu_ip = 0x4296; emu_last_cs = 0x01F7; emu_last_ip = 0x4285; emu_last_length = 0x002A; emu_last_crc = 0x8B7E; emu_call(); return; }
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp,  0x6), 0x4);
	if (emu_get_memory16(emu_ss, emu_bp,  0x6) != 0x4) { /* Unresolved jump */ emu_ip = 0x4296; emu_last_cs = 0x01F7; emu_last_ip = 0x428B; emu_last_length = 0x002A; emu_last_crc = 0x8B7E; emu_call(); return; }
	emu_cx = emu_get_memory16(emu_ds, emu_bx, 0x7B2A);
	emu_addw(&emu_cx, 0x7);
	/* Unresolved jump */ emu_ip = 0x429A; emu_last_cs = 0x01F7; emu_last_ip = 0x4294; emu_last_length = 0x002A; emu_last_crc = 0x8B7E; emu_call();
l__42ED:
	emu_xorw(&emu_ax, emu_ax);
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_sp += 8;
	return;
}

/**
 * Decompiled function emu_File_Write_Wrapper()
 *
 * @name emu_File_Write_Wrapper
 * @implements 01F7:42F4:0019:54E2 ()
 * @implements 01F7:4310:000E:757D
 * @implements 01F7:431E:001C:8DD0
 * @implements 01F7:433D:001B:C045
 * @implements 01F7:4358:0006:D73A
 * @implements 01F7:435E:001E:CFA7
 * @implements 01F7:437C:005A:66C8
 * @implements 01F7:4399:003D:4254
 * @implements 01F7:43E4:0005:0295
 * @implements 01F7:43F1:0013:1813
 * @implements 01F7:43FB:0009:AEAB
 * @implements 01F7:4404:0021:4078
 * @implements 01F7:4425:0017:D0B7
 * @implements 01F7:443A:0002:C1BA
 * @implements 01F7:443C:0009:3193
 * @implements 01F7:443F:0006:F7CE
 *
 * Called From: 01F7:2F8F:0015:335E
 * Called From: 01F7:4481:0003:623C
 */
void emu_File_Write_Wrapper()
{
l__42F4:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x8E);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_di = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_cmpw(&emu_di, emu_get_memory16(emu_ds, 0x00, 0x795A));
	if (emu_di < emu_get_memory16(emu_ds, 0x00, 0x795A)) goto l__4310;
	emu_ax = 0x6;
	emu_push(emu_ax);
	emu_push(0x430D); f__01F7_0675_0020_D684();
	/* Unresolved jump */ emu_ip = 0x430D; emu_last_cs = 0x01F7; emu_last_ip = 0x430D; emu_last_length = 0x0019; emu_last_crc = 0x54E2; emu_call();
l__4310:
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0xC);
	emu_incw(&emu_ax);
	emu_cmpw(&emu_ax, 0x2);
	if (emu_ax >= 0x2) goto l__431E;
	emu_xorw(&emu_ax, emu_ax);
	goto l__443F;
l__431E:
	emu_bx = emu_di;
	emu_shlw(&emu_bx, 0x1);
	emu_testw(&emu_get_memory16(emu_ds, emu_bx, 0x795C), 0x800);
	if ((emu_get_memory16(emu_ds, emu_bx, 0x795C) & 0x800) == 0) goto l__433D;
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_di);
	emu_push(emu_cs);
	emu_push(0x433A); emu_File_Seek();
	/* Unresolved jump */ emu_ip = 0x433A; emu_last_cs = 0x01F7; emu_last_ip = 0x433A; emu_last_length = 0x001C; emu_last_crc = 0x8DD0; emu_call();
l__433D:
	emu_bx = emu_di;
	emu_shlw(&emu_bx, 0x1);
	emu_testw(&emu_get_memory16(emu_ds, emu_bx, 0x795C), 0x4000);
	if ((emu_get_memory16(emu_ds, emu_bx, 0x795C) & 0x4000) != 0) goto l__435E;
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_di);
	emu_push(emu_cs);
	emu_push(0x4358); emu_File_Write();
l__4358:
	emu_addw(&emu_sp, 0x8);
	goto l__443F;
l__435E:
	emu_bx = emu_di;
	emu_shlw(&emu_bx, 0x1);
	emu_andw(&emu_get_memory16(emu_ds, emu_bx, 0x795C), 0xFDFF);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0xA);
	emu_dx = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_get_memory16(emu_ss, emu_bp, -0xA) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0xC) = emu_dx;
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0xC);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_ax;
	goto l__43F1;
l__437C:
	emu_decw(&emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x0);
	emu_get_memory8(emu_ss, emu_bp, -0x7) = emu_al;
	emu_cmpb(&emu_al, 0xA);
	if (emu_al == 0xA) {
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
		emu_get_memory8(emu_es, emu_bx, 0x0) = 0xD;
		emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x4));
	}
l__4399:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_al = emu_get_memory8(emu_ss, emu_bp, -0x7);
	emu_get_memory8(emu_es, emu_bx, 0x0) = emu_al;
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax, emu_bp - 0x8E);
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_xorw(&emu_bx, emu_bx);
	emu_subw(&emu_dx, emu_ax);
	emu_sbbw(&emu_bx, 0x0);
	emu_orw(&emu_bx, emu_bx);
	if ((emu_flags.sf != emu_flags.of)) goto l__43FB;
	if (emu_bx != 0) { /* Unresolved jump */ emu_ip = 0x43BF; emu_last_cs = 0x01F7; emu_last_ip = 0x43B7; emu_last_length = 0x003D; emu_last_crc = 0x4254; emu_call(); return; }
	emu_cmpw(&emu_dx, 0x80);
	if (emu_dx < 0x80) goto l__43FB;
	emu_movw(&emu_ax, emu_bp - 0x8E);
	emu_si = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_xorw(&emu_dx, emu_dx);
	emu_subw(&emu_si, emu_ax);
	emu_sbbw(&emu_dx, 0x0);
	emu_push(emu_si);
	emu_push(emu_ss);
	emu_push(emu_ax);
	emu_push(emu_di);
	emu_push(emu_cs);
	emu_push(0x43D6); emu_File_Write();
	/* Unresolved jump */ emu_ip = 0x43D6; emu_last_cs = 0x01F7; emu_last_ip = 0x43D6; emu_last_length = 0x003D; emu_last_crc = 0x4254; emu_call();
l__43E4:
	emu_ax = 0xFFFF;
	goto l__443A;
l__43F1:
	emu_movw(&emu_ax, emu_bp - 0x8E);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ss;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
l__43FB:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp, -0x6) == 0x0) goto l__4404;
	goto l__437C;
l__4404:
	emu_movw(&emu_ax, emu_bp - 0x8E);
	emu_si = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_xorw(&emu_dx, emu_dx);
	emu_subw(&emu_si, emu_ax);
	emu_sbbw(&emu_dx, 0x0);
	emu_ax = emu_si;
	emu_orw(&emu_ax, emu_ax);
	if ((emu_flags.cf || emu_flags.zf)) goto l__443C;
	emu_push(emu_si);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x8E);
	emu_push(emu_ax);
	emu_push(emu_di);
	emu_push(emu_cs);
	emu_push(0x4425); emu_File_Write();
l__4425:
	emu_addw(&emu_sp, 0x8);
	emu_dx = emu_ax;
	emu_cmpw(&emu_ax, emu_si);
	if (emu_ax == emu_si) goto l__443C;
	emu_cmpw(&emu_dx, 0xFFFF);
	if (emu_dx == 0xFFFF) goto l__43E4;
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0xC);
	emu_addw(&emu_ax, emu_dx);
	emu_subw(&emu_ax, emu_si);
l__443A:
	goto l__443F;
l__443C:
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0xC);
l__443F:
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
 * Decompiled function emu_File_Write()
 *
 * @name emu_File_Write
 * @implements 01F7:4445:0016:943B ()
 * @implements 01F7:445B:000E:5FED
 * @implements 01F7:4469:0012:915E
 * @implements 01F7:447B:0004:FDB8
 * @implements 01F7:447F:0002:2597
 *
 * Called From: 01F7:4355:001B:C045
 * Called From: 01F7:4422:0021:4078
 */
void emu_File_Write()
{
l__4445:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_bx = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_shlw(&emu_bx, 0x1);
	emu_testw(&emu_get_memory16(emu_ds, emu_bx, 0x795C), 0x1);
	if ((emu_get_memory16(emu_ds, emu_bx, 0x795C) & 0x1) == 0) goto l__445B;
	emu_ax = 0x5;
	emu_push(emu_ax);
	/* Unresolved jump */ emu_ip = 0x447C; emu_last_cs = 0x01F7; emu_last_ip = 0x4459; emu_last_length = 0x0016; emu_last_crc = 0x943B; emu_call();
l__445B:
	emu_push(emu_ds);
	emu_ah = 0x40;
	emu_bx = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_cx = emu_get_memory16(emu_ss, emu_bp,  0xC);
	emu_lfp(&emu_ds, &emu_dx, &emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = 0x0070; emu_push(0x4469); Interrupt_DOS();
l__4469:
	emu_pop(&emu_ds);
	if (emu_flags.cf) goto l__447B;
	emu_push(emu_ax);
	emu_bx = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_shlw(&emu_bx, 0x1);
	emu_orw(&emu_get_memory16(emu_ds, emu_bx, 0x795C), 0x1000);
	emu_pop(&emu_ax);
	goto l__447F;
l__447B:
	emu_push(emu_ax);
	emu_push(0x447F); f__01F7_0675_0020_D684();
l__447F:
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__01F7_4481_0003_623C()
 *
 * @name f__01F7_4481_0003_623C
 * @implements 01F7:4481:0003:623C ()
 *
 * Called From: 1FB5:0109:001B:7009
 */
void f__01F7_4481_0003_623C()
{
l__4481:
	emu_File_Write_Wrapper(); return;
}

/**
 * Decompiled function f__01F7_4484_0014_5939()
 *
 * @name f__01F7_4484_0014_5939
 * @implements 01F7:4484:0014:5939 ()
 * @implements 01F7:4498:0014:E159
 * @implements 01F7:44AC:0010:5339
 * @implements 01F7:44B3:0009:7923
 *
 * Called From: 01F7:0349:0004:4860
 */
void f__01F7_4484_0014_5939()
{
l__4484:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x4);
	emu_push(emu_si);
	emu_si = 0x4;
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ds;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = 0x77CA;
	goto l__44B3;
l__4498:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0x2), 0x3);
	if ((emu_get_memory16(emu_es, emu_bx, 0x2) & 0x3) == 0) { /* Unresolved jump */ emu_ip = 0x44AE; emu_last_cs = 0x01F7; emu_last_ip = 0x44A1; emu_last_length = 0x0014; emu_last_crc = 0xE159; emu_call(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_bx);
	emu_push(emu_cs);
	emu_push(0x44AC); f__01F7_2412_0011_FC80();
l__44AC:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_decw(&emu_si);
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x14);
l__44B3:
	emu_orw(&emu_si, emu_si);
	if (emu_si != 0) goto l__4498;
	emu_pop(&emu_si);
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

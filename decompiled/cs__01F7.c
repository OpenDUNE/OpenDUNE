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
	emu_push(emu_cs); emu_push(0x0151); emu_cs = 0x3480; emu_Main();
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
		case 0x217E0D2C: emu_pop(&emu_ip); emu_pop(&emu_cs); break;
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
		case 0x217E0198: emu_pop(&emu_ip); emu_pop(&emu_cs); break;
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
 * Decompiled function emu_Tools_Shld_Wrapper()
 *
 * @name emu_Tools_Shld_Wrapper
 * @implements 01F7:058B:0018:D9CF ()
 * @implements 01F7:058E:0015:CED2
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
	emu_cmpb(&emu_cl, 0x10);
	emu_jmpnc( 0x10, 0x0593, 0x0591);
	emu_movw(&emu_bx, emu_ax);
	emu_shlw(&emu_ax, emu_cl);
	emu_shlw(&emu_dx, emu_cl);
	emu_negb(&emu_cl, emu_cl);
	emu_addb(&emu_cl, 0x10);
	emu_shrw(&emu_bx, emu_cl);
	emu_orw(&emu_dx, emu_bx);
	emu_retf(0x0, 0x05A2);
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
 * Decompiled function emu_File_LowLevel_Seek()
 *
 * @name emu_File_LowLevel_Seek
 * @implements 01F7:0773:001E:D7DA ()
 * @implements 01F7:0791:0004:E2FD
 * @implements 01F7:0795:0004:6232
 * @implements 01F7:0799:0003:36B7
 * @implements 01F7:079A:0002:2597
 *
 * Called From: 1FB5:00A7:001B:4066
 */
void emu_File_LowLevel_Seek()
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
 * Decompiled function emu_Interrupt_Video()
 *
 * @name emu_Interrupt_Video
 * @implements 01F7:1FB0:0010:CF18 ()
 * @implements 01F7:1FC0:001A:86D3
 * @implements 01F7:1FDA:0007:984A
 *
 * Called From: 263B:001D:001C:9C72
 * Called From: 263B:0067:0024:9FBD
 * Called From: 263B:0067:0027:058F
 */
void emu_Interrupt_Video()
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
	emu_push(0x1FDA); emu_Interrupt_Video_Internal();
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
 * Decompiled function emu_Interrupt_Video_Internal()
 *
 * @name emu_Interrupt_Video_Internal
 * @implements 01F7:1FE1:005F:A74A ()
 * @implements 01F7:201F:0021:24DC
 *
 * Called From: 01F7:1FD7:001A:86D3
 */
void emu_Interrupt_Video_Internal()
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
	emu_push(0x2678); emu_File_LowLevel_Seek();
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
 * Called From: 1DD7:14CA:000A:A995
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
 * Called From: 1DD7:113E:001A:20E2
 * Called From: 1DD7:1475:0024:E66C
 * Called From: 1DD7:1682:003A:A88D
 * Called From: 259E:00DD:0015:D443
 * Called From: 2649:07FA:0043:7D69
 * Called From: 2649:0A6A:0016:4D2B
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
 * Decompiled function emu_String_strcpy()
 *
 * @name emu_String_strcpy
 * @implements 01F7:38F6:0029:8B99 ()
 *
 * Called From: 01F7:27EC:0010:D57C
 * Called From: 01F7:34C2:0011:4D90
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
 * Called From: 1DD7:141C:0010:921D
 * Called From: 1DD7:148C:0017:46E4
 * Called From: 1DD7:1904:0015:4424
 * Called From: 1DD7:19BF:0024:F705
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

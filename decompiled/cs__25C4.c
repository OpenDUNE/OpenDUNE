/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__25C4_000E_0019_12FF()
 *
 * @name f__25C4_000E_0019_12FF
 * @implements 25C4:000E:0019:12FF ()
 * @implements 25C4:002D:0013:0723
 * @implements 25C4:0040:0005:872E
 * @implements 25C4:0049:000B:50EF
 * @implements 25C4:0054:0006:F43B
 * @implements 25C4:005A:0018:5796
 * @implements 25C4:0072:0010:002D
 * @implements 25C4:00B7:0005:B085
 * @implements 25C4:00BE:0003:DCAB
 * @implements 25C4:00C1:0009:905A
 * @implements 25C4:00CA:0010:5BCF
 * @implements 25C4:00DA:0041:885A
 * @implements 25C4:0136:003F:00BE
 * @implements 25C4:016D:0008:D3AD
 * @implements 25C4:0175:0012:C097
 * @implements 25C4:0187:000E:B643
 * @implements 25C4:0195:003F:BA75
 * @implements 25C4:01D4:0011:FE22
 * @implements 25C4:01E5:0012:6D17
 * @implements 25C4:01ED:000A:E29B
 * @implements 25C4:01F0:0007:C038
 * @implements 25C4:0252:000E:9CBF
 * @implements 25C4:0263:0008:C300
 * @implements 25C4:02B7:0005:827A
 * @implements 25C4:02BE:000F:595C
 * @implements 25C4:02CD:0013:8B6C
 * @implements 25C4:02E0:001B:40E8
 * @implements 25C4:02FB:0019:1817
 * @implements 25C4:0314:000D:DB43
 * @implements 25C4:0321:0005:B149
 * @implements 25C4:0326:000D:B94B
 * @implements 25C4:0333:0012:BF4D
 * @implements 25C4:0345:001B:B33C
 * @implements 25C4:039C:0018:6AD8
 * @implements 25C4:03B4:0010:908E
 * @implements 25C4:03C4:0004:5B1F
 * @implements 25C4:03C8:0005:065C
 * @implements 25C4:03CD:000B:7CD0
 * @implements 25C4:03D8:0008:9D33
 * @implements 25C4:03E0:0009:75D6
 * @implements 25C4:03E9:0007:03AB
 * @implements 25C4:03F0:0006:F7CE
 *
 * Called From: B480:029D:0018:576D
 */
void f__25C4_000E_0019_12FF()
{
l__000E:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0xC);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_di = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_bx = emu_di;
	emu_cmpw(&emu_bx, 0x5);
	if (emu_bx > 0x5) goto l__0049;
	emu_shlw(&emu_bx, 0x1);

	/* Jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_cs, emu_bx, 0x410);
	switch (emu_ip) {
		case 0x002D: goto l__002D;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x25C4; emu_last_ip = 0x0022; emu_last_length = 0x0019; emu_last_crc = 0x12FF;
			emu_call();
			return;
	}
l__002D:
	emu_ax = 0xFA00;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = 0xA000;
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x0040); emu_cs = 0x01F7; emu_Tools_Memset();
l__0040:
	emu_addw(&emu_sp, 0x8);
	goto l__0049;
l__0049:
	emu_cmpw(&emu_di, 0x8);
	if (emu_di == 0x8) goto l__00C1;
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x0054); emu_cs = 0x263B; f__263B_002F_0016_FDB0();
l__0054:
	emu_pop(&emu_cx);
	emu_push(emu_cs); emu_push(0x005A); emu_cs = 0x29A3; emu_Mouse_Init();
l__005A:
	emu_push(emu_ds);
	emu_ax = 0x6F22;
	emu_push(emu_ax);
	emu_bx = emu_di;
	emu_cl = 0x2;
	emu_shlw(&emu_bx, emu_cl);
	emu_push(emu_get_memory16(emu_ds, emu_bx, 0x6DB4));
	emu_push(emu_get_memory16(emu_ds, emu_bx, 0x6DB2));
	emu_push(emu_cs); emu_push(0x0072); emu_cs = 0x22A3; f__22A3_000D_0010_9291();
l__0072:
	emu_addw(&emu_sp, 0x8);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax != 0) goto l__00C1;
	emu_ax = 0x9;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0082); emu_cs = 0x263B; f__263B_002F_0016_FDB0();
	/* Unresolved jump */ emu_ip = 0x0082; emu_last_cs = 0x25C4; emu_last_ip = 0x0082; emu_last_length = 0x0010; emu_last_crc = 0x002D; emu_call();
l__00B7:
	emu_push(emu_cs); emu_push(0x00BC); emu_cs = 0x29E8; f__29E8_07FA_0020_177A();
	/* Unresolved jump */ emu_ip = 0x00BC; emu_last_cs = 0x25C4; emu_last_ip = 0x00BC; emu_last_length = 0x0005; emu_last_crc = 0xB085; emu_call();
l__00BE:
	goto l__03F0;
l__00C1:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp,  0xC), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp,  0xC) != 0x0) goto l__00CA;
	/* Unresolved jump */ emu_ip = 0x01F7; emu_last_cs = 0x25C4; emu_last_ip = 0x00C7; emu_last_length = 0x0009; emu_last_crc = 0x905A; emu_call();
l__00CA:
	emu_get_memory16(emu_ss, emu_bp, -0x2) = 0x0;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = 0x0;
	emu_si = 0x2;
	goto l__016D;
l__00DA:
	emu_bx = emu_si;
	emu_cl = 0x2;
	emu_shlw(&emu_bx, emu_cl);
	emu_ax = emu_get_memory16(emu_ds, emu_bx, 0x6CD9);
	emu_dx = emu_get_memory16(emu_ds, emu_bx, 0x6CD7);
	emu_get_memory16(emu_ss, emu_bp, -0xA) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0xC) = emu_dx;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0xA);
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0xC);
	emu_addw(&emu_dx, 0xF);
	emu_adcw(&emu_ax, 0x0);
	emu_andw(&emu_dx, 0xFFF0);
	emu_andw(&emu_ax, 0xFFFF);
	emu_get_memory16(emu_ss, emu_bp, -0xA) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0xC) = emu_dx;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0xA);
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0xC);
	emu_andw(&emu_dx, 0x0);
	emu_andw(&emu_ax, 0xFF00);
	emu_orw(&emu_dx, emu_ax);
	if (emu_dx == 0) goto l__0136;
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x011B); emu_cs = 0x3500; emu_ip = 0x0020; emu_last_cs = 0x25C4; emu_last_ip = 0x0116; emu_last_length = 0x0041; emu_last_crc = 0x885A; emu_call();
	/* Unresolved jump */ emu_ip = 0x011B; emu_last_cs = 0x25C4; emu_last_ip = 0x011B; emu_last_length = 0x0041; emu_last_crc = 0x885A; emu_call();
l__0136:
	emu_bx = emu_si;
	emu_cl = 0x2;
	emu_shlw(&emu_bx, emu_cl);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0xA);
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0xC);
	emu_get_memory16(emu_ds, emu_bx, 0x6CD9) = emu_ax;
	emu_get_memory16(emu_ds, emu_bx, 0x6CD7) = emu_dx;
	emu_bx = emu_si;
	emu_cl = 0x2;
	emu_shlw(&emu_bx, emu_cl);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0xA);
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0xC);
	emu_get_memory16(emu_ds, emu_bx, 0x6CD5) = emu_ax;
	emu_get_memory16(emu_ds, emu_bx, 0x6CD3) = emu_dx;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0xA);
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0xC);
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_dx);
	emu_adcw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax);
	emu_addw(&emu_si, 0x2);
l__016D:
	emu_cmpw(&emu_si, 0x10);
	if ((int16)emu_si >= (int16)0x10) goto l__0175;
	goto l__00DA;
l__0175:
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x98F1);
	emu_orw(&emu_ax, 0x30);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x0187); emu_cs = 0x23E1; f__23E1_0004_0014_2BC0();
l__0187:
	emu_addw(&emu_sp, 0x6);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_ax;
	emu_si = 0x2;
	goto l__01F0;
l__0195:
	emu_bx = emu_si;
	emu_cl = 0x2;
	emu_shlw(&emu_bx, emu_cl);
	emu_ax = emu_get_memory16(emu_ds, emu_bx, 0x6CD3);
	emu_orw(&emu_ax, emu_get_memory16(emu_ds, emu_bx, 0x6CD5));
	if (emu_ax == 0) goto l__01ED;
	emu_bx = emu_si;
	emu_shlw(&emu_bx, 0x1);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x6);
	emu_get_memory16(emu_ds, emu_bx, 0x6C95) = emu_ax;
	emu_bx = emu_si;
	emu_shlw(&emu_bx, 0x1);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x6);
	emu_get_memory16(emu_ds, emu_bx, 0x6C93) = emu_ax;
	emu_bx = emu_si;
	emu_cl = 0x2;
	emu_shlw(&emu_bx, emu_cl);
	emu_cx = emu_get_memory16(emu_ds, emu_bx, 0x6CD5);
	emu_bx = emu_get_memory16(emu_ds, emu_bx, 0x6CD3);
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x6);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x8);
	emu_push(emu_cs); emu_push(0x01D4); emu_cs = 0x01F7; emu_Tools_AddCSIP();
l__01D4:
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_ax;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs); emu_push(0x01E5); emu_cs = 0x2B0E; emu_Tools_GetSmallestIP();
l__01E5:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_ax;
l__01ED:
	emu_addw(&emu_si, 0x2);
l__01F0:
	emu_cmpw(&emu_si, 0x10);
	if ((int16)emu_si < (int16)0x10) goto l__0195;
	goto l__0252;
l__0252:
	emu_bx = emu_di;
	emu_cmpw(&emu_bx, 0x8);
	if (emu_bx > 0x8) goto l__02BE;
	emu_shlw(&emu_bx, 0x1);

	/* Jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_cs, emu_bx, 0x3FE);
	switch (emu_ip) {
		case 0x02B7: goto l__02B7;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x25C4; emu_last_ip = 0x025B; emu_last_length = 0x000E; emu_last_crc = 0x9CBF;
			emu_call();
			return;
	}
l__0263:
	emu_get_memory16(emu_ds, 0x00, 0x6C95) = emu_ax;
	emu_get_memory16(emu_ds, 0x00, 0x6C93) = emu_ax;
	goto l__02BE;
l__02B7:
	emu_ax = 0xA000;
	goto l__0263;
l__02BE:
	emu_cmpw(&emu_di, 0x8);
	if (emu_di == 0x8) { /* Unresolved jump */ emu_ip = 0x0335; emu_last_cs = 0x25C4; emu_last_ip = 0x02C1; emu_last_length = 0x000F; emu_last_crc = 0x595C; emu_call(); return; }
	emu_ax = 0x353F;
	emu_es = emu_ax;

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_es, 0x00, 0x6640);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_es, 0x00, 0x6642);
	emu_push(0x02CD);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A60796: f__22A6_0796_000B_9035(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x25C4; emu_last_ip = 0x02C8; emu_last_length = 0x000F; emu_last_crc = 0x595C;
			emu_call();
			return;
	}
l__02CD:
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0xA));
	if (emu_ax == 0) { /* Unresolved jump */ emu_ip = 0x0335; emu_last_cs = 0x25C4; emu_last_ip = 0x02D3; emu_last_length = 0x0013; emu_last_crc = 0x8B6C; emu_call(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_cs); emu_push(0x02E0); emu_cs = 0x256D; f__256D_0004_001C_9F23();
l__02E0:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ds, 0x00, 0x99F1) = emu_dx;
	emu_get_memory16(emu_ds, 0x00, 0x99EF) = emu_ax;
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x99EF);
	emu_orw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x99F1));
	if (emu_ax != 0) goto l__0326;
	emu_ax = 0x9;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x02FB); emu_cs = 0x263B; f__263B_002F_0016_FDB0();
l__02FB:
	emu_pop(&emu_cx);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x672C));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x672A));
	emu_push(emu_ds);
	emu_ax = 0x9939;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0314); emu_cs = 0x01F7; emu_String_sprintf();
l__0314:
	emu_addw(&emu_sp, 0xC);
	emu_push(emu_ds);
	emu_ax = 0x9939;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0321); emu_cs = 0x28E4; f__28E4_0002_0017_0B15();
l__0321:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	goto l__00B7;
l__0326:
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x99F1));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x99EF));
	emu_push(emu_cs); emu_push(0x0333); emu_cs = 0x2605; f__2605_000C_006D_F8B2();
l__0333:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_ax = 0x10;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_dx = 0x300;
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x0345); emu_cs = 0x23E1; f__23E1_0004_0014_2BC0();
l__0345:
	emu_addw(&emu_sp, 0x6);
	emu_get_memory16(emu_ds, 0x00, 0x998C) = emu_dx;
	emu_get_memory16(emu_ds, 0x00, 0x998A) = emu_ax;
	emu_bx = emu_di;
	emu_subw(&emu_bx, 0x2);
	emu_cmpw(&emu_bx, 0x3);
	if (emu_bx > 0x3) goto l__03C8;
	emu_shlw(&emu_bx, 0x1);

	/* Jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_cs, emu_bx, 0x3F6);
	switch (emu_ip) {
		case 0x039C: goto l__039C;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x25C4; emu_last_ip = 0x035B; emu_last_length = 0x001B; emu_last_crc = 0xB33C;
			emu_call();
			return;
	}
l__039C:
	emu_ax = 0x3;
	emu_push(emu_ax);
	emu_ax = 0x3F;
	emu_push(emu_ax);
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x998A);
	emu_addw(&emu_ax, 0x2D);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x998C));
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x03B4); emu_cs = 0x01F7; emu_Tools_Memset();
l__03B4:
	emu_addw(&emu_sp, 0x8);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x998C));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x998A));
	emu_push(emu_cs); emu_push(0x03C4); emu_cs = 0x259E; f__259E_0040_0015_5E4A();
l__03C4:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	goto l__03C8;
l__03C8:
	emu_push(emu_cs); emu_push(0x03CD); emu_cs = 0x2533; f__2533_000D_001C_74EC();
l__03CD:
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x03D8); emu_cs = 0x01F7; f__01F7_103F_0010_4132();
l__03D8:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x03E0); emu_cs = 0x01F7; emu_Tools_Var79E4_Init();
l__03E0:
	emu_pop(&emu_cx);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x03E9); emu_cs = 0x07AE; emu_Unknown_07AE_0000();
l__03E9:
	emu_pop(&emu_cx);
	emu_ax = 0x1;
	goto l__00BE;
l__03F0:
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

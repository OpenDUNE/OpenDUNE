/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__B480_0000_0018_A09B()
 *
 * @name f__B480_0000_0018_A09B
 * @implements B480:0000:0018:A09B ()
 * @implements B480:0018:0011:F5E0
 * @implements B480:0029:000A:50E7
 * @implements B480:0034:0025:74D3
 * @implements B480:004C:000D:DC51
 * @implements B480:0059:0021:7086
 * @implements B480:0064:0016:6150
 * @implements B480:007A:000C:5821
 * @implements B480:0086:0051:4C66
 * @implements B480:00E4:0030:016D
 * @implements B480:0114:000D:9EE4
 * @implements B480:011E:0003:DC07
 * @implements B480:0121:0002:D7BA
 * @implements B480:0152:0017:957F
 * @implements B480:0169:0018:55D8
 * @implements B480:018E:0002:C2BA
 * @implements B480:0195:0012:4C62
 * @implements B480:01A8:001C:9836
 * @implements B480:01C4:0008:E1D7
 * @implements B480:01E7:0016:CBA2
 * @implements B480:0204:0002:C03A
 * @implements B480:0206:0084:2794
 * @implements B480:0273:0017:043A
 * @implements B480:028A:0018:576D
 * @implements B480:02A2:0032:E148
 * @implements B480:02D4:0008:84DA
 * @implements B480:02DC:0009:3238
 * @implements B480:02E5:0008:98A4
 * @implements B480:02ED:0018:E196
 * @implements B480:0305:009A:0548
 * @implements B480:0322:007D:1B34
 * @implements B480:039F:0019:950E
 * @implements B480:03B8:0008:48AB
 * @implements B480:03C0:0006:F7CE
 *
 * Called From: 3480:0020:0005:0000
 */
void f__B480_0000_0018_A09B()
{
l__0000:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0xCC);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_push(emu_ds);
	emu_ax = 0x98E1;
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0xBC;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0018); emu_cs = 0x24E6; f__24E6_006E_001A_719E();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3480) { ovl__3480(0xFF); }
	goto l__0018;
l__0018:
	emu_addw(&emu_sp, 0x8);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax != 0) goto l__0034;
	emu_push(emu_ds);
	emu_ax = 0xC5;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0029); emu_cs = 0x01F7; f__01F7_2BC4_0019_3608();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3480) { ovl__3480(0xFF); }
	goto l__0029;
l__0029:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0033); emu_cs = 0x01F7; emu_Terminate_Normal();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3480) { ovl__3480(0xFF); }
	/* Unresolved jump */ emu_ip = 0x0033; emu_last_cs = 0xB480; emu_last_ip = 0x0033; emu_last_length = 0x000A; emu_last_crc = 0x50E7; emu_call();
l__0034:
	emu_xorw(&emu_si, emu_si);
	emu_cmpb(&emu_get_memory8(emu_ds, 0x00, 0x98E4), 0x0);
	if (emu_get_memory8(emu_ds, 0x00, 0x98E4) != 0x0) {
		emu_addw(&emu_si, 0x3E80);
		emu_cmpb(&emu_get_memory8(emu_ds, 0x00, 0x98E4), 0x4);
		if (emu_get_memory8(emu_ds, 0x00, 0x98E4) == 0x4) {
			emu_addw(&emu_si, 0x7D0);
		}
	}
	goto l__004C;
l__004C:
	emu_cmpb(&emu_get_memory8(emu_ds, 0x00, 0x98E2), 0x1);
	if (emu_get_memory8(emu_ds, 0x00, 0x98E2) != 0x1) goto l__0059;
	emu_addw(&emu_si, 0x59D8);
	goto l__0064;
l__0059:
	emu_cmpb(&emu_get_memory8(emu_ds, 0x00, 0x98E2), 0x0);
	if (emu_get_memory8(emu_ds, 0x00, 0x98E2) != 0x0) {
		emu_addw(&emu_si, 0x7530);
	}
	goto l__0064;
l__0064:
	emu_addw(&emu_si, 0x1770);
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x7B);
	emu_decw(&emu_ax);
	emu_es = emu_ax;
	emu_ax = emu_get_memory16(emu_es, 0x00, 0x3);
	emu_cwd();
	emu_cl = 0x4;
	emu_push(emu_cs); emu_push(0x007A); emu_cs = 0x01F7; f__01F7_058E_0015_CED2();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3480) { ovl__3480(0xFF); }
	goto l__007A;
l__007A:
	emu_get_memory16(emu_ds, 0x00, 0x9E) = emu_dx;
	emu_get_memory16(emu_ds, 0x00, 0x9C) = emu_ax;
	emu_push(emu_cs); emu_push(0x0086); emu_cs = 0x23E1; f__23E1_0334_000B_CF65();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3480) { ovl__3480(0xFF); }
	goto l__0086;
l__0086:
	emu_addw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x9C));
	emu_adcw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x9E));
	emu_get_memory16(emu_ds, 0x00, 0xA2) = emu_dx;
	emu_get_memory16(emu_ds, 0x00, 0xA0) = emu_ax;
	emu_ax = emu_si;
	emu_cwd();
	emu_addw(&emu_ax, 0x4530);
	emu_adcw(&emu_dx, 0x8);
	emu_bx = emu_get_memory16(emu_ds, 0x00, 0xA2);
	emu_cx = emu_get_memory16(emu_ds, 0x00, 0xA0);
	emu_subw(&emu_cx, emu_ax);
	emu_sbbw(&emu_bx, emu_dx);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_bx;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_cx;
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x0);
	if ((int16)emu_get_memory16(emu_ss, emu_bp, -0x2) > (int16)0x0) goto l__00E4;
	if ((int16)emu_get_memory16(emu_ss, emu_bp, -0x2) < (int16)0x0) { /* Unresolved jump */ emu_ip = 0x00BE; emu_last_cs = 0xB480; emu_last_ip = 0x00B6; emu_last_length = 0x0051; emu_last_crc = 0x4C66; emu_call(); return; }
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp, -0x4) >= 0x0) goto l__00E4;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x2);
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_negw(&emu_ax, emu_ax);
	emu_negw(&emu_dx, emu_dx);
	emu_sbbw(&emu_ax, 0x0);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_ds);
	emu_ax = 0x15D;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x00D7); emu_cs = 0x01F7; f__01F7_2BC4_0019_3608();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3480) { ovl__3480(0xFF); }
	/* Unresolved jump */ emu_ip = 0x00D7; emu_last_cs = 0xB480; emu_last_ip = 0x00D7; emu_last_length = 0x0051; emu_last_crc = 0x4C66; emu_call();
l__00E4:
	emu_cmpb(&emu_get_memory8(emu_ds, 0x00, 0x98E6), 0x0);
	if (emu_get_memory8(emu_ds, 0x00, 0x98E6) == 0x0) { /* Unresolved jump */ emu_ip = 0x0123; emu_last_cs = 0xB480; emu_last_ip = 0x00E9; emu_last_length = 0x0030; emu_last_crc = 0x016D; emu_call(); return; }
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_ax = 0xD;
	emu_dx = 0xE2B0;
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_ax = emu_si;
	emu_cwd();
	emu_addw(&emu_ax, 0x4530);
	emu_adcw(&emu_dx, 0x8);
	emu_subw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x9C));
	emu_sbbw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x9E));
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0xB2;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0114); emu_cs = 0x1DB6; f__1DB6_0004_000B_BFBA();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3480) { ovl__3480(0xFF); }
	goto l__0114;
l__0114:
	emu_addw(&emu_sp, 0xE);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax == 0) goto l__0121;
	emu_ax = 0x1;
	goto l__011E;
l__011E:
	goto l__03C0;
l__0121:
	goto l__0152;
l__0152:
	emu_cmpb(&emu_get_memory8(emu_ds, 0x00, 0x98E6), 0x0);
	if (emu_get_memory8(emu_ds, 0x00, 0x98E6) == 0x0) { /* Unresolved jump */ emu_ip = 0x0190; emu_last_cs = 0xB480; emu_last_ip = 0x0157; emu_last_length = 0x0017; emu_last_crc = 0x957F; emu_call(); return; }
	emu_ax = 0x40;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_dx = 0x1;
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x0169); emu_cs = 0x23E1; f__23E1_0004_0014_2BC0();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3480) { ovl__3480(0xFF); }
	goto l__0169;
l__0169:
	emu_addw(&emu_sp, 0x6);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_ax != 0) { /* Unresolved jump */ emu_ip = 0x0181; emu_last_cs = 0xB480; emu_last_ip = 0x0178; emu_last_length = 0x0018; emu_last_crc = 0x55D8; emu_call(); return; }
	emu_get_memory8(emu_ds, 0x00, 0x98E4) = 0x0;
	goto l__018E;
l__018E:
	goto l__0195;
l__0195:
	emu_al = emu_get_memory8(emu_ds, 0x00, 0x98E5);
	emu_ah = 0x0;
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax != 0) goto l__01A8;
	emu_ax = 0x3000;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x01A7); emu_cs = 0x29E8; emu_Input_Flags_SetBits();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3480) { ovl__3480(0xFF); }
	/* Unresolved jump */ emu_ip = 0x01A7; emu_last_cs = 0xB480; emu_last_ip = 0x01A7; emu_last_length = 0x0012; emu_last_crc = 0x4C62; emu_call();
l__01A8:
	emu_get_memory16(emu_ds, 0x00, 0x6C76) = 0x3;
	emu_al = emu_get_memory8(emu_ds, 0x00, 0x98E1);
	emu_ah = 0x0;
	emu_subw(&emu_ax, 0x7);
	emu_bx = emu_ax;
	emu_cmpw(&emu_bx, 0x5);
	if (emu_bx > 0x5) { /* Unresolved jump */ emu_ip = 0x01CC; emu_last_cs = 0xB480; emu_last_ip = 0x01BB; emu_last_length = 0x001C; emu_last_crc = 0x9836; emu_call(); return; }
	emu_shlw(&emu_bx, 0x1);

	/* Jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_cs, emu_bx, 0x3D0);
	switch (emu_ip) {
		case 0x01C4: goto l__01C4;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0xB480; emu_last_ip = 0x01BF; emu_last_length = 0x001C; emu_last_crc = 0x9836;
			emu_call();
			return;
	}
l__01C4:
	emu_get_memory16(emu_ds, 0x00, 0x6C76) = 0x3;
	goto l__01E7;
l__01E7:
	emu_al = emu_get_memory8(emu_ds, 0x00, 0x98E2);
	emu_ah = 0x0;
	emu_subw(&emu_ax, 0x8);
	emu_bx = emu_ax;
	emu_cmpw(&emu_bx, 0x4);
	if (emu_bx > 0x4) goto l__0204;
	emu_shlw(&emu_bx, 0x1);

	/* Jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_cs, emu_bx, 0x3C6);
	switch (emu_ip) {
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0xB480; emu_last_ip = 0x01F8; emu_last_length = 0x0016; emu_last_crc = 0xCBA2;
			emu_call();
			return;
	}
l__0204:
	goto l__0206;
l__0206:
	emu_xorw(&emu_ax, emu_ax);
	emu_dx = 0xFA00;
	emu_get_memory16(emu_ds, 0x00, 0x6CD9) = emu_ax;
	emu_get_memory16(emu_ds, 0x00, 0x6CD7) = emu_dx;
	emu_get_memory16(emu_ds, 0x00, 0x6CD5) = emu_ax;
	emu_get_memory16(emu_ds, 0x00, 0x6CD3) = emu_dx;
	emu_xorw(&emu_ax, emu_ax);
	emu_dx = 0xFBF4;
	emu_get_memory16(emu_ds, 0x00, 0x6CE1) = emu_ax;
	emu_get_memory16(emu_ds, 0x00, 0x6CDF) = emu_dx;
	emu_get_memory16(emu_ds, 0x00, 0x6CDD) = emu_ax;
	emu_get_memory16(emu_ds, 0x00, 0x6CDB) = emu_dx;
	emu_xorw(&emu_ax, emu_ax);
	emu_dx = 0xFA00;
	emu_get_memory16(emu_ds, 0x00, 0x6CE9) = emu_ax;
	emu_get_memory16(emu_ds, 0x00, 0x6CE7) = emu_dx;
	emu_get_memory16(emu_ds, 0x00, 0x6CE5) = emu_ax;
	emu_get_memory16(emu_ds, 0x00, 0x6CE3) = emu_dx;
	emu_xorw(&emu_ax, emu_ax);
	emu_dx = 0xFD0D;
	emu_get_memory16(emu_ds, 0x00, 0x6CF1) = emu_ax;
	emu_get_memory16(emu_ds, 0x00, 0x6CEF) = emu_dx;
	emu_get_memory16(emu_ds, 0x00, 0x6CED) = emu_ax;
	emu_get_memory16(emu_ds, 0x00, 0x6CEB) = emu_dx;
	emu_xorw(&emu_ax, emu_ax);
	emu_dx = 0xA044;
	emu_get_memory16(emu_ds, 0x00, 0x6CF9) = emu_ax;
	emu_get_memory16(emu_ds, 0x00, 0x6CF7) = emu_dx;
	emu_get_memory16(emu_ds, 0x00, 0x6CF5) = emu_ax;
	emu_get_memory16(emu_ds, 0x00, 0x6CF3) = emu_dx;
	emu_al = emu_get_memory8(emu_ds, 0x00, 0x98E6);
	emu_ah = 0x0;
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax == 0) {
		emu_get_memory8(emu_ds, 0x00, 0x98E4) = 0x0;
	}
	goto l__0273;
l__0273:
	emu_al = emu_get_memory8(emu_ds, 0x00, 0x98E4);
	emu_ah = 0x0;
	emu_push(emu_ax);
	emu_al = emu_get_memory8(emu_ds, 0x00, 0x98E2);
	emu_ah = 0x0;
	emu_push(emu_ax);
	emu_al = emu_get_memory8(emu_ds, 0x00, 0x98E3);
	emu_ah = 0x0;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x028A); emu_cs = 0x1DD7; f__1DD7_039B_0008_D3BD();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3480) { ovl__3480(0xFF); }
	goto l__028A;
l__028A:
	emu_addw(&emu_sp, 0x6);
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x96));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x94));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6C76));
	emu_push(emu_cs); emu_push(0x02A2); emu_cs = 0x25C4; f__25C4_000E_0019_12FF();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3480) { ovl__3480(0xFF); }
	goto l__02A2;
l__02A2:
	emu_addw(&emu_sp, 0x8);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax == 0) { /* Unresolved jump */ emu_ip = 0x02D7; emu_last_cs = 0xB480; emu_last_ip = 0x02A7; emu_last_length = 0x0032; emu_last_crc = 0xE148; emu_call(); return; }
	emu_get_memory16(emu_ds, 0x00, 0x6C82) = 0x353B;
	emu_get_memory16(emu_ds, 0x00, 0x6C80) = 0x20;
	emu_get_memory16(emu_ds, 0x00, 0x6C88) = 0x2528;
	emu_get_memory16(emu_ds, 0x00, 0x6C86) = 0x4;
	emu_get_memory8(emu_ds, 0x00, 0x7097) = 0x0;
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x02D4); emu_cs = 0x0642; emu_InGame_GameLoop();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3480) { ovl__3480(0xFF); }
	goto l__02D4;
l__02D4:
	emu_addw(&emu_sp, 0x6);
	emu_push(emu_cs); emu_push(0x02DC); emu_cs = 0x3500; ovl__3500(0);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3480) { ovl__3480(0xFF); }
	goto l__02DC;
l__02DC:
	emu_ax = 0x141;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x02E5); emu_cs = 0x0FCB; f__0FCB_005F_001C_FDC4();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3480) { ovl__3480(0xFF); }
	goto l__02E5;
l__02E5:
	emu_pop(&emu_cx);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x02ED); emu_cs = 0x01F7; f__01F7_2BC4_0019_3608();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3480) { ovl__3480(0xFF); }
	goto l__02ED;
l__02ED:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x379C), 0x0);
	if (emu_get_memory16(emu_ds, 0x00, 0x379C) != 0x0) { /* Unresolved jump */ emu_ip = 0x02F6; emu_last_cs = 0xB480; emu_last_ip = 0x02F4; emu_last_length = 0x0018; emu_last_crc = 0xE196; emu_call(); return; }
	emu_get_memory16(emu_ss, emu_bp, -0x2) = 0x0;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = 0x0;
	emu_di = 0x3;
	goto l__0322;
l__0305:
	emu_bx = emu_di;
	emu_cl = 0x2;
	emu_shlw(&emu_bx, emu_cl);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x2);
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_addw(&emu_dx, emu_get_memory16(emu_ds, emu_bx, 0x6CD3));
	emu_adcw(&emu_ax, emu_get_memory16(emu_ds, emu_bx, 0x6CD5));
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_dx;
	emu_addw(&emu_di, 0x2);
	goto l__0322;
l__0322:
	emu_cmpw(&emu_di, 0x9);
	if ((int16)emu_di <= (int16)0x9) goto l__0305;
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x9E);
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x9C);
	emu_addw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x66F4));
	emu_adcw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x66F6));
	emu_subw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0xA4));
	emu_sbbw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0xA6));
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x9E);
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x9C);
	emu_addw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x66F4));
	emu_adcw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x66F6));
	emu_subw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0xA4));
	emu_sbbw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0xA6));
	emu_bx = emu_get_memory16(emu_ds, 0x00, 0xA2);
	emu_cx = emu_get_memory16(emu_ds, 0x00, 0xA0);
	emu_subw(&emu_cx, emu_dx);
	emu_sbbw(&emu_bx, emu_ax);
	emu_push(emu_bx);
	emu_push(emu_cx);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x2);
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_addw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0xA4));
	emu_adcw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0xA6));
	emu_bx = emu_get_memory16(emu_ds, 0x00, 0x66F6);
	emu_cx = emu_get_memory16(emu_ds, 0x00, 0x66F4);
	emu_subw(&emu_cx, emu_dx);
	emu_sbbw(&emu_bx, emu_ax);
	emu_push(emu_bx);
	emu_push(emu_cx);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x9E));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x9C));
	emu_push(emu_ds);
	emu_ax = 0x19E;
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0xCC);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x039F); emu_cs = 0x01F7; f__01F7_378D_0020_0F64();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3480) { ovl__3480(0xFF); }
	goto l__039F;
l__039F:
	emu_addw(&emu_sp, 0x1C);
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_ax = 0x12;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0xCC);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x03B8); emu_cs = 0x2B1E; f__2B1E_0189_001B_E6CF();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3480) { ovl__3480(0xFF); }
	goto l__03B8;
l__03B8:
	emu_addw(&emu_sp, 0xA);
	emu_xorw(&emu_ax, emu_ax);
	goto l__011E;
l__03C0:
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

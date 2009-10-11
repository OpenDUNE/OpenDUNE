/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__1391_000A_0035_2CB6()
 *
 * @name f__1391_000A_0035_2CB6
 * @implements 1391:000A:0035:2CB6 ()
 * @implements 1391:003F:00C8:12AA
 * @implements 1391:0054:00B3:890D
 * @implements 1391:006E:0099:5702
 * @implements 1391:0083:0084:0CD3
 * @implements 1391:0098:006F:AC38
 * @implements 1391:00B2:0055:86F4
 * @implements 1391:00C7:0040:3A20
 * @implements 1391:00E1:0026:4CCC
 * @implements 1391:00F6:0011:EC7E
 * @implements 1391:0107:00C0:28C2
 * @implements 1391:011F:00A8:AA2F
 * @implements 1391:0134:0093:0398
 * @implements 1391:014D:007A:153C
 * @implements 1391:0162:0065:FF33
 * @implements 1391:017B:004C:FA99
 * @implements 1391:0190:0037:8316
 * @implements 1391:01AA:001D:4FD0
 * @implements 1391:01E5:0012:F977
 * @implements 1391:01F7:0031:36C0
 * @implements 1391:0228:0011:014A
 * @implements 1391:0230:0009:D032
 * @implements 1391:0239:0019:F809
 * @implements 1391:0252:0013:2798
 * @implements 1391:0265:0013:1F9F
 * @implements 1391:0278:0020:AEEA
 * @implements 1391:0298:0012:8793
 * @implements 1391:02AA:0025:2E69
 * @implements 1391:02CF:001A:9F54
 * @implements 1391:02E9:0009:1DF9
 * @implements 1391:02F2:0008:0AE5
 * @implements 1391:02FA:0018:A575
 * @implements 1391:0312:0027:6AEA
 * @implements 1391:0339:0008:A673
 * @implements 1391:0341:000E:E4D8
 * @implements 1391:034F:0047:9E8A
 * @implements 1391:0352:0044:8FBF
 * @implements 1391:03A5:0017:8023
 * @implements 1391:03D8:0040:703A
 * @implements 1391:045C:0009:52AE
 * @implements 1391:045D:0008:D28D
 * @implements 1391:0465:0031:20D9
 * @implements 1391:0494:0002:E3BA
 * @implements 1391:0496:0018:8B16
 * @implements 1391:04AE:0024:200D
 * @implements 1391:04B1:0021:2689
 * @implements 1391:04D2:0008:A466
 * @implements 1391:04DA:000D:FA8A
 * @implements 1391:04DD:000A:2ECE
 * @implements 1391:04E7:0003:9CB2
 * @implements 1391:04EA:0009:911F
 * @implements 1391:04F3:0018:C01F
 * @implements 1391:050B:001E:F492
 * @implements 1391:051F:000A:0BF8
 * @implements 1391:0529:002C:37BF
 * @implements 1391:052C:0029:B3B9
 * @implements 1391:0555:0013:CAB6
 * @implements 1391:0568:0008:A466
 * @implements 1391:0570:0021:4319
 * @implements 1391:0573:001E:0E5D
 * @implements 1391:0591:0008:A466
 * @implements 1391:0599:0015:7A08
 * @implements 1391:059C:0012:3EDC
 * @implements 1391:05AE:000F:810E
 * @implements 1391:05AF:000E:330E
 * @implements 1391:05BD:0009:5194
 * @implements 1391:076C:0009:D115
 * @implements 1391:0775:000C:2418
 * @implements 1391:0781:000D:5BF0
 * @implements 1391:078E:0058:0894
 * @implements 1391:07A2:0044:44DB
 * @implements 1391:07B5:0031:AC71
 * @implements 1391:07C8:001E:E4B4
 * @implements 1391:07F5:0023:F0F1
 * @implements 1391:0818:001C:4160
 * @implements 1391:0820:0014:2438
 * @implements 1391:082A:000A:FEA0
 * @implements 1391:0834:0015:9C95
 * @implements 1391:0849:0006:F7CE
 *
 * Called From: 0642:03CC:0005:ED74
 */
void f__1391_000A_0035_2CB6()
{
l__000A:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x20);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = 0x0;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = 0x0;
	emu_get_memory16(emu_ss, emu_bp, -0x6) = 0x0;
	emu_get_memory16(emu_ss, emu_bp, -0x8) = 0x0;
	emu_get_memory16(emu_ss, emu_bp, -0xA) = 0x0;
	emu_get_memory16(emu_ss, emu_bp, -0xC) = 0x0;
	emu_get_memory16(emu_ss, emu_bp, -0xE) = 0x0;
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x37A0), 0x0);
	if (emu_get_memory16(emu_ds, 0x00, 0x37A0) == 0x0) goto l__003F;
	goto l__0849;
l__003F:
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x6088);
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x6086);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x76B2));
	if ((int16)emu_ax > (int16)emu_get_memory16(emu_ds, 0x00, 0x76B2)) goto l__006E;
	if (emu_ax == emu_get_memory16(emu_ds, 0x00, 0x76B2)) {
		emu_cmpw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x76B0));
		if (emu_dx > emu_get_memory16(emu_ds, 0x00, 0x76B0)) goto l__006E;
	}
	goto l__0054;
l__0054:
	emu_get_memory16(emu_ss, emu_bp, -0x2) = 0x1;
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x76B2);
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x76B0);
	emu_addw(&emu_dx, 0x384);
	emu_adcw(&emu_ax, 0x0);
	emu_get_memory16(emu_ds, 0x00, 0x6088) = emu_ax;
	emu_get_memory16(emu_ds, 0x00, 0x6086) = emu_dx;
	goto l__006E;
l__006E:
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x38C2);
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x38C0);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x76B2));
	if ((int16)emu_ax > (int16)emu_get_memory16(emu_ds, 0x00, 0x76B2)) goto l__00B2;
	if (emu_ax == emu_get_memory16(emu_ds, 0x00, 0x76B2)) {
		emu_cmpw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x76B0));
		if (emu_dx > emu_get_memory16(emu_ds, 0x00, 0x76B0)) goto l__00B2;
	}
	goto l__0083;
l__0083:
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x608C);
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x608A);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x76B2));
	if ((int16)emu_ax > (int16)emu_get_memory16(emu_ds, 0x00, 0x76B2)) goto l__00B2;
	if ((int16)emu_ax >= (int16)emu_get_memory16(emu_ds, 0x00, 0x76B2)) {
		emu_cmpw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x76B0));
		if (emu_dx >= emu_get_memory16(emu_ds, 0x00, 0x76B0)) goto l__00B2;
	}
	goto l__0098;
l__0098:
	emu_get_memory16(emu_ss, emu_bp, -0x4) = 0x1;
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x76B2);
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x76B0);
	emu_addw(&emu_dx, 0x2A30);
	emu_adcw(&emu_ax, 0x0);
	emu_get_memory16(emu_ds, 0x00, 0x608C) = emu_ax;
	emu_get_memory16(emu_ds, 0x00, 0x608A) = emu_dx;
	goto l__00B2;
l__00B2:
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x6090);
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x608E);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x76B2));
	if ((int16)emu_ax > (int16)emu_get_memory16(emu_ds, 0x00, 0x76B2)) goto l__00E1;
	if (emu_ax == emu_get_memory16(emu_ds, 0x00, 0x76B2)) {
		emu_cmpw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x76B0));
		if (emu_dx > emu_get_memory16(emu_ds, 0x00, 0x76B0)) goto l__00E1;
	}
	goto l__00C7;
l__00C7:
	emu_get_memory16(emu_ss, emu_bp, -0x6) = 0x1;
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x76B2);
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x76B0);
	emu_addw(&emu_dx, 0xB4);
	emu_adcw(&emu_ax, 0x0);
	emu_get_memory16(emu_ds, 0x00, 0x6090) = emu_ax;
	emu_get_memory16(emu_ds, 0x00, 0x608E) = emu_dx;
	goto l__00E1;
l__00E1:
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x6094);
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x6092);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x76B2));
	if ((int16)emu_ax > (int16)emu_get_memory16(emu_ds, 0x00, 0x76B2)) goto l__011F;
	if (emu_ax == emu_get_memory16(emu_ds, 0x00, 0x76B2)) {
		emu_cmpw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x76B0));
		if (emu_dx > emu_get_memory16(emu_ds, 0x00, 0x76B0)) goto l__011F;
	}
	goto l__00F6;
l__00F6:
	emu_get_memory16(emu_ss, emu_bp, -0x8) = 0x1;
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x379C), 0x0);
	if (emu_get_memory16(emu_ds, 0x00, 0x379C) == 0x0) goto l__0107;
	emu_ax = 0x3C;
	/* Unresolved jump */ emu_ip = 0x010A; emu_last_cs = 0x1391; emu_last_ip = 0x0105; emu_last_length = 0x0011; emu_last_crc = 0xEC7E; emu_call();
l__0107:
	emu_ax = 0x258;
	emu_cwd();
	emu_bx = emu_get_memory16(emu_ds, 0x00, 0x76B2);
	emu_cx = emu_get_memory16(emu_ds, 0x00, 0x76B0);
	emu_addw(&emu_cx, emu_ax);
	emu_adcw(&emu_bx, emu_dx);
	emu_get_memory16(emu_ds, 0x00, 0x6094) = emu_bx;
	emu_get_memory16(emu_ds, 0x00, 0x6092) = emu_cx;
	goto l__011F;
l__011F:
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x6098);
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x6096);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x76B2));
	if ((int16)emu_ax > (int16)emu_get_memory16(emu_ds, 0x00, 0x76B2)) goto l__014D;
	if (emu_ax == emu_get_memory16(emu_ds, 0x00, 0x76B2)) {
		emu_cmpw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x76B0));
		if (emu_dx > emu_get_memory16(emu_ds, 0x00, 0x76B0)) goto l__014D;
	}
	goto l__0134;
l__0134:
	emu_get_memory16(emu_ss, emu_bp, -0xA) = 0x1;
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x76B2);
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x76B0);
	emu_addw(&emu_dx, 0x5);
	emu_adcw(&emu_ax, 0x0);
	emu_get_memory16(emu_ds, 0x00, 0x6098) = emu_ax;
	emu_get_memory16(emu_ds, 0x00, 0x6096) = emu_dx;
	goto l__014D;
l__014D:
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x609C);
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x609A);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x76B2));
	if ((int16)emu_ax > (int16)emu_get_memory16(emu_ds, 0x00, 0x76B2)) goto l__017B;
	if (emu_ax == emu_get_memory16(emu_ds, 0x00, 0x76B2)) {
		emu_cmpw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x76B0));
		if (emu_dx > emu_get_memory16(emu_ds, 0x00, 0x76B0)) goto l__017B;
	}
	goto l__0162;
l__0162:
	emu_get_memory16(emu_ss, emu_bp, -0xC) = 0x1;
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x76B2);
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x76B0);
	emu_addw(&emu_dx, 0x3C);
	emu_adcw(&emu_ax, 0x0);
	emu_get_memory16(emu_ds, 0x00, 0x609C) = emu_ax;
	emu_get_memory16(emu_ds, 0x00, 0x609A) = emu_dx;
	goto l__017B;
l__017B:
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x60A0);
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x609E);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x76B2));
	if ((int16)emu_ax > (int16)emu_get_memory16(emu_ds, 0x00, 0x76B2)) goto l__01AA;
	if (emu_ax == emu_get_memory16(emu_ds, 0x00, 0x76B2)) {
		emu_cmpw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x76B0));
		if (emu_dx > emu_get_memory16(emu_ds, 0x00, 0x76B0)) goto l__01AA;
	}
	goto l__0190;
l__0190:
	emu_get_memory16(emu_ss, emu_bp, -0xE) = 0x1;
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x76B2);
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x76B0);
	emu_addw(&emu_dx, 0x708);
	emu_adcw(&emu_ax, 0x0);
	emu_get_memory16(emu_ds, 0x00, 0x60A0) = emu_ax;
	emu_get_memory16(emu_ds, 0x00, 0x609E) = emu_dx;
	goto l__01AA;
l__01AA:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0xC), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp, -0xC) == 0x0) goto l__01E5;
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x38FE), 0x0);
	if (emu_get_memory16(emu_ds, 0x00, 0x38FE) == 0x0) goto l__01E5;
	emu_decw(&emu_get_memory16(emu_ds, 0x00, 0x38FE));
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x38FE);
	emu_addw(&emu_ax, 0x29);
	emu_push(emu_ax);
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x01C7); emu_cs = 0x3483; emu_ip = 0x002A; emu_last_cs = 0x1391; emu_last_ip = 0x01C2; emu_last_length = 0x001D; emu_last_crc = 0x4FD0; emu_call();
	/* Unresolved jump */ emu_ip = 0x01C7; emu_last_cs = 0x1391; emu_last_ip = 0x01C7; emu_last_length = 0x001D; emu_last_crc = 0x4FD0; emu_call();
l__01E5:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0xE), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp, -0xE) == 0x0) goto l__0230;
	emu_ax = 0x1A;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x01F7); emu_cs = 0x2537; f__2537_000C_001C_86CB();
	goto l__01F7;
l__01F7:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_si = emu_ax;
	emu_bx = emu_si;
	emu_shlw(&emu_bx, 0x1);
	emu_cmpw(&emu_get_memory16(emu_ds, emu_bx, 0x97E7), 0x0);
	if (emu_get_memory16(emu_ds, emu_bx, 0x97E7) != 0x0) {
		emu_bx = emu_si;
		emu_shlw(&emu_bx, 0x1);
		emu_cmpw(&emu_get_memory16(emu_ds, emu_bx, 0x97E7), 0xA);
		if ((int16)emu_get_memory16(emu_ds, emu_bx, 0x97E7) < (int16)0xA) {
			emu_bx = emu_si;
			emu_shlw(&emu_bx, 0x1);
			emu_cmpw(&emu_get_memory16(emu_ds, emu_bx, 0x97E7), 0xFFFF);
			if (emu_get_memory16(emu_ds, emu_bx, 0x97E7) != 0xFFFF) goto l__0228;
			emu_bx = emu_si;
			emu_shlw(&emu_bx, 0x1);
			emu_get_memory16(emu_ds, emu_bx, 0x97E7) = 0x1;
		}
	}
	goto l__0230;
l__0228:
	emu_bx = emu_si;
	emu_shlw(&emu_bx, 0x1);
	emu_incw(&emu_get_memory16(emu_ds, emu_bx, 0x97E7));
	goto l__0230;
l__0230:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp, -0x8) != 0x0) goto l__0239;
	goto l__0465;
l__0239:
	emu_get_memory16(emu_ss, emu_bp, -0x16) = 0x0;
	emu_get_memory16(emu_ss, emu_bp, -0x18) = 0x0;
	emu_get_memory16(emu_ss, emu_bp, -0x1A) = 0x0;
	emu_get_memory16(emu_ss, emu_bp, -0x1C) = 0x0;
	emu_xorw(&emu_di, emu_di);
	goto l__045D;
l__0252:
	emu_ax = emu_di;
	emu_dx = 0xA;
	emu_imuluw(&emu_ax, emu_dx);
	emu_bx = emu_ax;
	emu_cmpw(&emu_get_memory16(emu_ds, emu_bx, 0x8D43), 0xFFFF);
	if (emu_get_memory16(emu_ds, emu_bx, 0x8D43) != 0xFFFF) goto l__0265;
	goto l__045C;
l__0265:
	emu_ax = emu_di;
	emu_dx = 0xA;
	emu_imuluw(&emu_ax, emu_dx);
	emu_bx = emu_ax;
	emu_cmpw(&emu_get_memory16(emu_ds, emu_bx, 0x8D47), 0x0);
	if (emu_get_memory16(emu_ds, emu_bx, 0x8D47) != 0x0) goto l__0278;
	goto l__045C;
l__0278:
	emu_ax = emu_di;
	emu_dx = 0xA;
	emu_imuluw(&emu_ax, emu_dx);
	emu_bx = emu_ax;
	emu_decw(&emu_get_memory16(emu_ds, emu_bx, 0x8D47));
	emu_ax = emu_di;
	emu_dx = 0xA;
	emu_imuluw(&emu_ax, emu_dx);
	emu_bx = emu_ax;
	emu_cmpw(&emu_get_memory16(emu_ds, emu_bx, 0x8D47), 0x0);
	if (emu_get_memory16(emu_ds, emu_bx, 0x8D47) == 0x0) goto l__0298;
	goto l__045C;
l__0298:
	emu_ax = emu_di;
	emu_dx = 0xA;
	emu_imuluw(&emu_ax, emu_dx);
	emu_bx = emu_ax;
	emu_push(emu_get_memory16(emu_ds, emu_bx, 0x8D43));
	emu_push(emu_cs); emu_push(0x02AA); emu_cs = 0x0FE4; emu_Unit_Get_ByIndex();
	goto l__02AA;
l__02AA:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x1A) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x1C) = emu_ax;
	emu_ax = emu_di;
	emu_dx = 0xA;
	emu_imuluw(&emu_ax, emu_dx);
	emu_bx = emu_ax;
	emu_ax = emu_get_memory16(emu_ds, emu_bx, 0x8D45);
	emu_get_memory16(emu_ss, emu_bp, -0x1E) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x20) = 0x0;
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x1E), 0x4);
	if ((int16)emu_get_memory16(emu_ss, emu_bp, -0x1E) >= (int16)0x4) goto l__02CF;
	goto l__03A5;
l__02CF:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x18);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x16));
	if (emu_ax != 0) goto l__0352;
	emu_ax = 0x64;
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x1C));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x8);
	emu_ax = (int8)emu_al;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x02E9); emu_cs = 0x2BB4; f__2BB4_0004_0027_DC1D();
	goto l__02E9;
l__02E9:
	emu_andw(&emu_ax, 0x3);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x02F2); emu_cs = 0x34CD; ovl__34CD(24);
	goto l__02F2;
l__02F2:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x02FA); emu_cs = 0x0F3F; emu_Tile_Unpack();
	goto l__02FA;
l__02FA:
	emu_pop(&emu_cx);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x1C));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x8);
	emu_ax = (int8)emu_al;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = 0xFFFF;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0312); emu_cs = 0x1A34; emu_Unit_Create();
	goto l__0312;
l__0312:
	emu_addw(&emu_sp, 0xC);
	emu_get_memory16(emu_ss, emu_bp, -0x16) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x18) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x18));
	emu_orw(&emu_get_memory16(emu_es, emu_bx, 0x4), 0x200);
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x1C));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x8);
	emu_ax = (int8)emu_al;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x1E));
	emu_push(emu_cs); emu_push(0x0339); emu_cs = 0x34CD; ovl__34CD(24);
	goto l__0339;
l__0339:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0341); emu_cs = 0x167E; f__167E_00F3_001E_8CB3();
	goto l__0341;
l__0341:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x16));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x18));
	emu_push(emu_cs); emu_push(0x034F); emu_cs = 0x1A34; f__1A34_1B68_0019_AAA0();
	goto l__034F;
l__034F:
	emu_addw(&emu_sp, 0x6);
	goto l__0352;
l__0352:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x18);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x16));
	if (emu_ax == 0) { /* Unresolved jump */ emu_ip = 0x0396; emu_last_cs = 0x1391; emu_last_ip = 0x0358; emu_last_length = 0x0044; emu_last_crc = 0x8FBF; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x18));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x3);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x1C));
	emu_get_memory8(emu_es, emu_bx, 0x3) = emu_al;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x18));
	emu_push(emu_es);
	emu_lfp(&emu_es, &emu_si, &emu_get_memory16(emu_ss, emu_bp, -0x1C));
	emu_al = emu_get_memory8(emu_es, emu_si, 0x0);
	emu_pop(&emu_es);
	emu_get_memory8(emu_es, emu_bx, 0x3) = emu_al;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x18));
	emu_orw(&emu_get_memory16(emu_es, emu_bx, 0x4), 0x100);
	emu_ax = emu_di;
	emu_dx = 0xA;
	emu_imuluw(&emu_ax, emu_dx);
	emu_bx = emu_ax;
	emu_get_memory16(emu_ds, emu_bx, 0x8D43) = 0xFFFF;
	emu_get_memory16(emu_ss, emu_bp, -0x20) = 0x1;
	goto l__03A5;
l__03A5:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x1E), 0x4);
	if ((int16)emu_get_memory16(emu_ss, emu_bp, -0x1E) >= (int16)0x4) goto l__03D8;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x1C));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x8);
	emu_ax = (int8)emu_al;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x1E));
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x03BC); emu_cs = 0x34CD; emu_ip = 0x0098; emu_last_cs = 0x1391; emu_last_ip = 0x03B7; emu_last_length = 0x0017; emu_last_crc = 0x8023; emu_call();
	/* Unresolved jump */ emu_ip = 0x03BC; emu_last_cs = 0x1391; emu_last_ip = 0x03BC; emu_last_length = 0x0017; emu_last_crc = 0x8023; emu_call();
l__03D8:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x20), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp, -0x20) == 0x0) goto l__045C;
	emu_ax = emu_di;
	emu_dx = 0xA;
	emu_imuluw(&emu_ax, emu_dx);
	emu_bx = emu_ax;
	emu_cmpw(&emu_get_memory16(emu_ds, emu_bx, 0x8D4B), 0x0);
	if (emu_get_memory16(emu_ds, emu_bx, 0x8D4B) == 0x0) goto l__045C;
	emu_incw(&emu_get_memory16(emu_ds, 0x00, 0x38BC));
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = 0xFFFF;
	emu_dx = 0xFFFF;
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x1C));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x8);
	emu_ax = (int8)emu_al;
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x1C));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x2);
	emu_ax = (int8)emu_al;
	emu_push(emu_ax);
	emu_ax = 0xFFFF;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0418); emu_cs = 0x1A34; emu_Unit_Create();
	/* Unresolved jump */ emu_ip = 0x0418; emu_last_cs = 0x1391; emu_last_ip = 0x0418; emu_last_length = 0x0040; emu_last_crc = 0x703A; emu_call();
l__045C:
	emu_incw(&emu_di);
	goto l__045D;
l__045D:
	emu_cmpw(&emu_di, 0x10);
	if ((int16)emu_di >= (int16)0x10) goto l__0465;
	goto l__0252;
l__0465:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x394A));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x0);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x3A38));
	if (emu_ax == emu_get_memory16(emu_ds, 0x00, 0x3A38)) goto l__0496;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x394A));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x14);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x394A));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x12));
	if (emu_ax < emu_get_memory16(emu_es, emu_bx, 0x12)) {
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x394A));
		emu_ax = emu_get_memory16(emu_es, emu_bx, 0x14);
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x394A));
		emu_get_memory16(emu_es, emu_bx, 0x12) = emu_ax;
	}
	goto l__0494;
l__0494:
	goto l__04DD;
l__0496:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x394A));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x14);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x38B4));
	if (emu_ax <= emu_get_memory16(emu_ds, 0x00, 0x38B4)) goto l__04AE;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x394A));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x14);
	goto l__04B1;
l__04AE:
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x38B4);
	goto l__04B1;
l__04B1:
	emu_si = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x394A));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x12), emu_si);
	if (emu_get_memory16(emu_es, emu_bx, 0x12) <= emu_si) goto l__04DD;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x394A));
	emu_get_memory16(emu_es, emu_bx, 0x12) = emu_si;
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_ax = 0x91;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x04D2); emu_cs = 0x0FCB; f__0FCB_005F_001C_FDC4();
	goto l__04D2;
l__04D2:
	emu_pop(&emu_cx);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x04DA); emu_cs = 0x10E4; f__10E4_09AB_0031_5E8E();
	goto l__04DA;
l__04DA:
	emu_addw(&emu_sp, 0x6);
	goto l__04DD;
l__04DD:
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x14);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x04E7); emu_cs = 0x10BE; emu_House_FindFirst();
	goto l__04E7;
l__04E7:
	goto l__0834;
l__04EA:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp, -0x2) != 0x0) goto l__04F3;
	goto l__059C;
l__04F3:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x394A));
	emu_si = emu_get_memory16(emu_es, emu_bx, 0x14);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x394A));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x0);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x3A38));
	if (emu_ax == emu_get_memory16(emu_ds, 0x00, 0x3A38)) goto l__050B;
	goto l__059C;
l__050B:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x394A));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x14);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x38B4));
	if (emu_ax > emu_get_memory16(emu_ds, 0x00, 0x38B4)) {
		emu_get_memory16(emu_ds, 0x00, 0x38B4) = 0x0;
	}
	goto l__051F;
l__051F:
	emu_cmpw(&emu_si, emu_get_memory16(emu_ds, 0x00, 0x38B4));
	if (emu_si <= emu_get_memory16(emu_ds, 0x00, 0x38B4)) goto l__0529;
	emu_ax = emu_si;
	goto l__052C;
l__0529:
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x38B4);
	goto l__052C;
l__052C:
	emu_si = emu_ax;
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x38B4), 0x0);
	if (emu_get_memory16(emu_ds, 0x00, 0x38B4) != 0x0) goto l__0573;
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x38B2), 0x1);
	if ((int16)emu_get_memory16(emu_ds, 0x00, 0x38B2) <= (int16)0x1) goto l__0573;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x394A));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x12), 0x0);
	if (emu_get_memory16(emu_es, emu_bx, 0x12) == 0x0) goto l__0573;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x394A));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x12));
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x0555); emu_cs = 0x34C1; ovl__34C1(2);
	goto l__0555;
l__0555:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_cmpw(&emu_ax, 0xC8);
	if (emu_ax <= 0xC8) goto l__0573;
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = 0x142;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0568); emu_cs = 0x0FCB; f__0FCB_005F_001C_FDC4();
	goto l__0568;
l__0568:
	emu_pop(&emu_cx);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0570); emu_cs = 0x10E4; f__10E4_09AB_0031_5E8E();
	goto l__0570;
l__0570:
	emu_addw(&emu_sp, 0x6);
	goto l__0573;
l__0573:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x394A));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x12), 0x64);
	if (emu_get_memory16(emu_es, emu_bx, 0x12) >= 0x64) goto l__059C;
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x38B4), 0x0);
	if (emu_get_memory16(emu_ds, 0x00, 0x38B4) == 0x0) goto l__059C;
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = 0x14B;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0591); emu_cs = 0x0FCB; f__0FCB_005F_001C_FDC4();
	goto l__0591;
l__0591:
	emu_pop(&emu_cx);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0599); emu_cs = 0x10E4; f__10E4_09AB_0031_5E8E();
	goto l__0599;
l__0599:
	emu_addw(&emu_sp, 0x6);
	goto l__059C;
l__059C:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp, -0x2) == 0x0) goto l__05AF;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x394A));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_push(emu_cs); emu_push(0x05AE); emu_cs = 0x1A34; f__1A34_21E0_001A_547E();
	goto l__05AE;
l__05AE:
	emu_pop(&emu_cx);
	goto l__05AF;
l__05AF:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x394A));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x2C), 0xFFFF);
	if (emu_get_memory16(emu_es, emu_bx, 0x2C) != 0xFFFF) goto l__05BD;
	goto l__076C;
l__05BD:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp, -0x6) != 0x0) { /* Unresolved jump */ emu_ip = 0x05C6; emu_last_cs = 0x1391; emu_last_ip = 0x05C1; emu_last_length = 0x0009; emu_last_crc = 0x5194; emu_call(); return; }
	goto l__076C;
l__076C:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp, -0x2) != 0x0) goto l__0775;
	goto l__07F5;
l__0775:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x394A));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_push(emu_cs); emu_push(0x0781); emu_cs = 0x0C3A; f__0C3A_1F70_0010_8DB3();
	goto l__0781;
l__0781:
	emu_pop(&emu_cx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x394A));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_push(emu_cs); emu_push(0x078E); emu_cs = 0x0C3A; f__0C3A_20DB_0011_DA16();
	goto l__078E;
l__078E:
	emu_pop(&emu_cx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x394A));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x24), 0x0);
	if (emu_get_memory16(emu_es, emu_bx, 0x24) != 0x0) {
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x394A));
		emu_decw(&emu_get_memory16(emu_es, emu_bx, 0x24));
	}
	goto l__07A2;
l__07A2:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x394A));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x26), 0x0);
	if (emu_get_memory16(emu_es, emu_bx, 0x26) != 0x0) {
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x394A));
		emu_decw(&emu_get_memory16(emu_es, emu_bx, 0x26));
	}
	goto l__07B5;
l__07B5:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x394A));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x28), 0x0);
	if (emu_get_memory16(emu_es, emu_bx, 0x28) != 0x0) {
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x394A));
		emu_decw(&emu_get_memory16(emu_es, emu_bx, 0x28));
	}
	goto l__07C8;
l__07C8:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x394A));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x2), 0x0);
	if (emu_get_memory16(emu_es, emu_bx, 0x2) <= 0x0) goto l__07F5;
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = 0x10;
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x394A));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_push(emu_cs); emu_push(0x07E6); emu_cs = 0x1A34; f__1A34_232C_0011_B7DE();
	/* Unresolved jump */ emu_ip = 0x07E6; emu_last_cs = 0x1391; emu_last_ip = 0x07E6; emu_last_length = 0x001E; emu_last_crc = 0xE4B4; emu_call();
l__07F5:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp, -0x4) == 0x0) goto l__082A;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x394A));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x18);
	emu_cl = 0x5;
	emu_sarw(&emu_ax, emu_cl);
	emu_incw(&emu_ax);
	emu_dx = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x394A));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x12), emu_dx);
	if (emu_get_memory16(emu_es, emu_bx, 0x12) <= emu_dx) goto l__0818;
	emu_ax = emu_dx;
	goto l__0820;
l__0818:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x394A));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x12);
	goto l__0820;
l__0820:
	emu_dx = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x394A));
	emu_subw(&emu_get_memory16(emu_es, emu_bx, 0x12), emu_dx);
	goto l__082A;
l__082A:
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x14);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0834); emu_cs = 0x10BE; emu_House_FindNext();
	goto l__0834;
l__0834:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ds, 0x00, 0x394C) = emu_dx;
	emu_get_memory16(emu_ds, 0x00, 0x394A) = emu_ax;
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x394A);
	emu_orw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x394C));
	if (emu_ax == 0) goto l__0849;
	goto l__04EA;
l__0849:
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

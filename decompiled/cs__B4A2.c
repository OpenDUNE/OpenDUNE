/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__B4A2_0039_000B_EC51()
 *
 * @name f__B4A2_0039_000B_EC51
 * @implements B4A2:0039:000B:EC51 ()
 * @implements B4A2:0044:0009:3D8E
 * @implements B4A2:004D:000E:64BE
 * @implements B4A2:004F:000C:E695
 * @implements B4A2:005B:0005:84EE
 * @implements B4A2:0060:0003:2E57
 *
 * Called From: 34A2:002A:0005:0000
 */
void f__B4A2_0039_000B_EC51()
{
l__0039:
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_si);
	emu_xorw(&emu_si, emu_si);
	emu_push(emu_cs); emu_push(0x0044); emu_cs = 0x29E8; f__29E8_072F_000F_651A();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34A2) { ovl__34A2(0xFF); }
	goto l__0044;
l__0044:
	emu_orw(&emu_ax, emu_ax);
	if (emu_flags.zf) goto l__004F;
	emu_push(emu_cs); emu_push(0x004D); emu_cs = 0x29E8; f__29E8_0897_0016_2028();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34A2) { ovl__34A2(0xFF); }
	goto l__004D;
l__004D:
	emu_movw(&emu_si, emu_ax);
	goto l__004F;
l__004F:
	emu_push(emu_si);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x005B); f__B4A2_0063_001E_4495();
	goto l__005B;
l__005B:
	emu_addw(&emu_sp, 0x6);
	goto l__0060;
l__0060:
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B4A2_0063_001E_4495()
 *
 * @name f__B4A2_0063_001E_4495
 * @implements B4A2:0063:001E:4495 ()
 * @implements B4A2:007E:0003:9E04
 * @implements B4A2:0081:0034:D555
 * @implements B4A2:009A:001B:68B5
 * @implements B4A2:00B5:0014:CD20
 * @implements B4A2:00C0:0009:433C
 * @implements B4A2:00C9:0020:FF60
 * @implements B4A2:00D4:0015:96A8
 * @implements B4A2:00E9:000B:A0FA
 * @implements B4A2:00F4:0058:6D26
 * @implements B4A2:0106:0046:4BFB
 * @implements B4A2:010E:003E:36CC
 * @implements B4A2:014C:00A3:323E
 * @implements B4A2:0155:009A:E308
 * @implements B4A2:015E:0091:0167
 * @implements B4A2:0169:0086:5764
 * @implements B4A2:017B:0074:9303
 * @implements B4A2:01A3:004C:644F
 * @implements B4A2:01C6:0029:C114
 * @implements B4A2:01E7:0008:082E
 * @implements B4A2:01EF:000E:2C3C
 * @implements B4A2:01FD:00BF:524F
 * @implements B4A2:0240:007C:CD42
 * @implements B4A2:0278:0044:F834
 * @implements B4A2:02B8:0004:EE59
 * @implements B4A2:02BC:001E:443B
 * @implements B4A2:02BF:001B:4EC7
 * @implements B4A2:02DA:003B:41BE
 * @implements B4A2:0315:00AA:23C4
 * @implements B4A2:0340:007F:2746
 * @implements B4A2:035E:0061:CF47
 * @implements B4A2:036F:0050:9484
 * @implements B4A2:0396:0029:BE62
 * @implements B4A2:039F:0020:BF0F
 * @implements B4A2:03BD:0002:D3BA
 * @implements B4A2:03BF:001F:6D3A
 * @implements B4A2:03DE:001B:E04F
 * @implements B4A2:03E6:0013:5DAC
 * @implements B4A2:03F9:0022:65D7
 * @implements B4A2:041B:0007:B8D3
 * @implements B4A2:041D:0005:B8B6
 * @implements B4A2:0422:000C:23A1
 * @implements B4A2:0425:0009:D1BE
 * @implements B4A2:042E:0031:2D5E
 * @implements B4A2:0453:000C:9E28
 * @implements B4A2:045F:0012:4D72
 * @implements B4A2:0471:0048:E243
 * @implements B4A2:04AA:000F:6F6F
 * @implements B4A2:04B9:0004:3BFB
 * @implements B4A2:04BD:0045:0588
 * @implements B4A2:04F2:0010:E3E2
 * @implements B4A2:0502:005E:216A
 * @implements B4A2:051E:0042:182D
 * @implements B4A2:0529:0037:FA1E
 * @implements B4A2:0543:001D:7800
 * @implements B4A2:055E:0002:ED3A
 * @implements B4A2:0560:002D:0EE2
 * @implements B4A2:057B:0012:2566
 * @implements B4A2:058B:0002:D6BA
 * @implements B4A2:058D:002D:0862
 * @implements B4A2:05A8:0012:33E6
 * @implements B4A2:05BA:00B6:11C2
 * @implements B4A2:05EF:0081:DCA6
 * @implements B4A2:0614:005C:D203
 * @implements B4A2:061C:0054:23DD
 * @implements B4A2:0649:0027:26C2
 * @implements B4A2:0670:0040:740E
 * @implements B4A2:0672:003E:C657
 * @implements B4A2:0680:0030:38D3
 * @implements B4A2:06B0:0008:D0CF
 * @implements B4A2:06B8:000D:37FC
 * @implements B4A2:06C5:001E:934B
 * @implements B4A2:06E3:001B:B2D9
 * @implements B4A2:06F3:000B:49A2
 * @implements B4A2:06FE:0015:72AB
 * @implements B4A2:070D:0006:CF87
 * @implements B4A2:0713:0006:F7CE
 *
 * Called From: B4A2:0058:000C:E695
 * Called From: B4A2:0058:000E:64BE
 */
void f__B4A2_0063_001E_4495()
{
l__0063:
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subw(&emu_sp, 0x16);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x0);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (!emu_flags.zf) goto l__0081;
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_andw(&emu_ax, 0x7FFF);
	goto l__007E;
l__007E:
	goto l__0713;
l__0081:
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x1904));
	if (emu_flags.zf) {
		emu_cmpw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x1902));
		if (emu_flags.zf) {
			emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x6D75), 0x0);
			if (emu_flags.zf) goto l__010E;
		}
	}
	goto l__009A;
l__009A:
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x1900), 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x18FE), 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x7FC4), 0x0);
	emu_movw(&emu_ax, 0x41);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x00B5); emu_cs = 0x29E8; f__29E8_08B5_000A_FC14();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34A2) { ovl__34A2(0xFF); }
	goto l__00B5;
l__00B5:
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_ax);
	if (!emu_flags.zf) {
		emu_orw(&emu_get_memory16(emu_ds, 0x00, 0x7FC4), 0x200);
	}
	goto l__00C0;
l__00C0:
	emu_movw(&emu_ax, 0x42);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x00C9); emu_cs = 0x29E8; f__29E8_08B5_000A_FC14();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34A2) { ovl__34A2(0xFF); }
	goto l__00C9;
l__00C9:
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_ax);
	if (!emu_flags.zf) {
		emu_orw(&emu_get_memory16(emu_ds, 0x00, 0x7FC4), 0x2000);
	}
	goto l__00D4;
l__00D4:
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x1904), emu_ax);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x1902), emu_dx);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x6D75), 0x0);
	goto l__0106;
l__00E9:
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x00F4); f__B4A2_0729_0013_2494();
	goto l__00F4;
l__00F4:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x2));
	emu_movw(&emu_dx, emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0x8), emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0x6), emu_dx);
	goto l__0106;
l__0106:
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (!emu_flags.zf) goto l__00E9;
	goto l__010E;
l__010E:
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x7060));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x7062));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax);
	emu_xorw(&emu_si, emu_si);
	emu_movb(&emu_al, emu_get_memory8(emu_ds, 0x00, 0x7097));
	emu_movb(&emu_ah, 0x0);
	emu_orw(&emu_ax, emu_ax);
	if (!emu_flags.zf) goto l__01A3;
	emu_xorw(&emu_dx, emu_dx);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_andw(&emu_ax, 0xFF);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_ax);
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp,  0xA), 0x0);
	if (!(emu_flags.sf != emu_flags.of)) goto l__014C;
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0xC7);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0140; emu_last_cs = 0xB4A2; emu_last_ip = 0x013B; emu_last_length = 0x003E; emu_last_crc = 0x36CC; emu_call(); return; }
	emu_movw(&emu_dx, 0x1000);
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0xC6);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x014A; emu_last_cs = 0xB4A2; emu_last_ip = 0x0145; emu_last_length = 0x003E; emu_last_crc = 0x36CC; emu_call(); return; }
	emu_movw(&emu_dx, 0x100);
	goto l__015E;
l__014C:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x42);
	if (emu_flags.zf) {
		emu_movw(&emu_dx, 0x1000);
	}
	goto l__0155;
l__0155:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x41);
	if (emu_flags.zf) {
		emu_movw(&emu_dx, 0x100);
	}
	goto l__015E;
l__015E:
	emu_testw(&emu_get_memory16(emu_ss, emu_bp,  0xA), 0x800);
	if (!emu_flags.zf) {
		emu_movb(&emu_cl, 0x2);
		emu_shlw(&emu_dx, emu_cl);
	}
	goto l__0169;
l__0169:
	emu_orw(&emu_si, emu_dx);
	emu_orw(&emu_dx, emu_dx);
	if (!emu_flags.zf) {
		emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x7064));
		emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax);
		emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x7066));
		emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax);
	}
	goto l__017B;
l__017B:
	emu_movw(&emu_ax, emu_dx);
	emu_andw(&emu_ax, 0x4400);
	emu_sarw(&emu_ax, 0x1);
	emu_notw(&emu_ax, emu_ax);
	emu_andw(&emu_get_memory16(emu_ds, 0x00, 0x7FC4), emu_ax);
	emu_movw(&emu_ax, emu_dx);
	emu_andw(&emu_ax, 0x1100);
	emu_shlw(&emu_ax, 0x1);
	emu_orw(&emu_get_memory16(emu_ds, 0x00, 0x7FC4), emu_ax);
	emu_orw(&emu_si, emu_get_memory16(emu_ds, 0x00, 0x7FC4));
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x7FC4));
	emu_movb(&emu_cl, 0x2);
	emu_shlw(&emu_ax, emu_cl);
	emu_xorw(&emu_ax, 0x8800);
	emu_orw(&emu_si, emu_ax);
	goto l__01A3;
l__01A3:
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x1904));
	emu_movw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x1902));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0x8), emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0x6), emu_dx);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x18FE));
	emu_orw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x1900));
	if (!emu_flags.zf) {
		emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x1900));
		emu_movw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x18FE));
		emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0x8), emu_ax);
		emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0x6), emu_dx);
	}
	goto l__01C6;
l__01C6:
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x18FE));
	emu_orw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x1900));
	if (!emu_flags.zf) {
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x18FE));
		emu_testw(&emu_get_memory16(emu_es, emu_bx, 0xE), 0x8);
		if (!emu_flags.zf) {
			emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x1900), 0x0);
			emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x18FE), 0x0);
		}
	}
	goto l__01E7;
l__01E7:
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), 0x0);
	goto l__06F3;
l__01EF:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0xE), 0x8);
	if (emu_flags.zf) goto l__01FD;
	goto l__06E3;
l__01FD:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_andw(&emu_get_memory16(emu_es, emu_bx, 0x2E), 0xFFE7);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x2E));
	emu_andw(&emu_ax, 0x3);
	emu_movb(&emu_cl, 0x3);
	emu_shlw(&emu_ax, emu_cl);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_get_memory16(emu_es, emu_bx, 0x2E), emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x1E));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), emu_ax);
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x10), 0x0);
	if ((emu_flags.sf != emu_flags.of)) {
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
		emu_movw(&emu_bx, emu_get_memory16(emu_es, emu_bx, 0x1C));
		emu_movb(&emu_cl, 0x4);
		emu_shlw(&emu_bx, emu_cl);
		emu_movw(&emu_ax, emu_get_memory16(emu_ds, emu_bx, 0x4066));
		emu_movb(&emu_cl, 0x3);
		emu_shlw(&emu_ax, emu_cl);
		emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x10), emu_ax);
	}
	goto l__0240;
l__0240:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_bx, emu_get_memory16(emu_es, emu_bx, 0x1C));
	emu_movb(&emu_cl, 0x4);
	emu_shlw(&emu_bx, emu_cl);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, emu_bx, 0x4062));
	emu_movb(&emu_cl, 0x3);
	emu_shlw(&emu_ax, emu_cl);
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x10), emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x20));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x12), emu_ax);
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x12), 0x0);
	if ((emu_flags.sf != emu_flags.of)) {
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
		emu_movw(&emu_bx, emu_get_memory16(emu_es, emu_bx, 0x1C));
		emu_movb(&emu_cl, 0x4);
		emu_shlw(&emu_bx, emu_cl);
		emu_movw(&emu_ax, emu_get_memory16(emu_ds, emu_bx, 0x4068));
		emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x12), emu_ax);
	}
	goto l__0278;
l__0278:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_bx, emu_get_memory16(emu_es, emu_bx, 0x1C));
	emu_movb(&emu_cl, 0x4);
	emu_shlw(&emu_bx, emu_cl);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, emu_bx, 0x4064));
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x12), emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x10));
	if (!(emu_flags.sf != emu_flags.of)) {
		emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x6));
		emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x12));
		if (!(emu_flags.sf != emu_flags.of)) {
			emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
			emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x10));
			emu_addw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x22));
			emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x4));
			if (!(emu_flags.sf != emu_flags.of)) {
				emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
				emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x12));
				emu_addw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x24));
				emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x6));
				if (!(emu_flags.sf != emu_flags.of)) goto l__02BC;
			}
		}
	}
	goto l__02B8;
l__02B8:
	emu_xorw(&emu_di, emu_di);
	goto l__02BF;
l__02BC:
	emu_movw(&emu_di, 0x1);
	goto l__02BF;
l__02BF:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_andw(&emu_get_memory16(emu_es, emu_bx, 0x2E), 0xFF7F);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_andw(&emu_ax, 0x7F);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_ax);
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x0);
	if (!emu_flags.zf) goto l__02DA;
	goto l__035E;
l__02DA:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x6));
	emu_andw(&emu_ax, 0x7F);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0xA));
	if (!emu_flags.zf) goto l__0315;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0xE));
	emu_andw(&emu_ax, 0xF00);
	emu_movw(&emu_si, emu_ax);
	emu_movw(&emu_di, 0x1);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_get_memory16(emu_es, emu_bx, 0x2E), 0x80);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0xA), 0x0);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x1900), emu_ax);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x18FE), emu_dx);
	goto l__035E;
l__0315:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x8));
	emu_andw(&emu_ax, 0x7F);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0xA));
	if (!emu_flags.zf) goto l__035E;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0xE));
	emu_andw(&emu_ax, 0xF000);
	emu_movw(&emu_si, emu_ax);
	emu_orw(&emu_si, emu_si);
	if (emu_flags.zf) {
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
		emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0xE));
		emu_andw(&emu_ax, 0xF00);
		emu_movw(&emu_si, emu_ax);
	}
	goto l__0340;
l__0340:
	emu_movw(&emu_di, 0x1);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_get_memory16(emu_es, emu_bx, 0x2E), 0x80);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0xA), 0x0);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x1900), emu_ax);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x18FE), emu_dx);
	goto l__035E;
l__035E:
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x14), 0x0);
	emu_orw(&emu_di, emu_di);
	if (emu_flags.zf) {
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
		emu_andw(&emu_get_memory16(emu_es, emu_bx, 0x2E), 0xFFF9);
	}
	goto l__036F;
l__036F:
	emu_testw(&emu_si, 0x3300);
	if (emu_flags.zf) goto l__03BF;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0xE), 0x4);
	if (emu_flags.zf) goto l__03BF;
	emu_orw(&emu_di, emu_di);
	if (emu_flags.zf) goto l__03BF;
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x1900));
	if (emu_flags.zf) {
		emu_cmpw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x18FE));
		if (emu_flags.zf) goto l__039F;
	}
	goto l__0396;
l__0396:
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x18FE));
	emu_orw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x1900));
	if (!emu_flags.zf) goto l__03BF;
	goto l__039F;
l__039F:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_get_memory16(emu_es, emu_bx, 0x2E), 0x6);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x18FE));
	emu_orw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x1900));
	if (emu_flags.zf) {
		emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
		emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp,  0x6));
		emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x1900), emu_ax);
		emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x18FE), emu_dx);
	}
	goto l__03BD;
l__03BD:
	goto l__03E6;
l__03BF:
	emu_testw(&emu_si, 0x8800);
	if (emu_flags.zf) goto l__03DE;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0xE), 0x4);
	if (!emu_flags.zf) goto l__03DE;
	emu_orw(&emu_di, emu_di);
	if (emu_flags.zf) goto l__03DE;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_get_memory16(emu_es, emu_bx, 0x2E), 0x6);
	goto l__03E6;
l__03DE:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_andw(&emu_get_memory16(emu_es, emu_bx, 0x2E), 0xFFF9);
	goto l__03E6;
l__03E6:
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x16), 0x0);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x18FE));
	emu_orw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x1900));
	if (!emu_flags.zf) goto l__03F9;
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x16), emu_di);
	goto l__0425;
l__03F9:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x18FE));
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0xE), 0x40);
	if (emu_flags.zf) goto l__0422;
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x1900));
	emu_movw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x18FE));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (!emu_flags.zf) goto l__041B;
	emu_cmpw(&emu_dx, emu_get_memory16(emu_ss, emu_bp,  0x6));
	if (!emu_flags.zf) goto l__041B;
	emu_movw(&emu_ax, 0x1);
	goto l__041D;
l__041B:
	emu_xorw(&emu_ax, emu_ax);
	goto l__041D;
l__041D:
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x16), emu_ax);
	goto l__0425;
l__0422:
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x16), emu_di);
	goto l__0425;
l__0425:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x16), 0x0);
	if (!emu_flags.zf) goto l__042E;
	goto l__05BA;
l__042E:
	emu_testw(&emu_si, 0x1100);
	if (!emu_flags.zf) {
		emu_orw(&emu_di, emu_di);
		if (!emu_flags.zf) {
			emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x18FE));
			emu_orw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x1900));
			if (emu_flags.zf) {
				emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0xA), 0x0);
				emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
				emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp,  0x6));
				emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x1900), emu_ax);
				emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x18FE), emu_dx);
			}
		}
	}
	goto l__0453;
l__0453:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_testw(&emu_si, emu_get_memory16(emu_es, emu_bx, 0xE));
	if (!emu_flags.zf) goto l__045F;
	goto l__05BA;
l__045F:
	emu_orw(&emu_di, emu_di);
	if (!emu_flags.zf) goto l__0471;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0xE), 0x1);
	if (emu_flags.zf) goto l__0471;
	goto l__05BA;
l__0471:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax, emu_si);
	emu_andw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0xE));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_andw(&emu_ax, 0xF000);
	emu_movb(&emu_cl, 0x4);
	emu_shrw(&emu_ax, emu_cl);
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_andw(&emu_dx, 0xF00);
	emu_orw(&emu_dx, emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_dx);
	emu_movb(&emu_cl, 0x8);
	emu_shrw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_cl);
	emu_movw(&emu_bx, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_shlw(&emu_bx, 0x1);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, emu_bx, 0x1906));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), emu_ax);
	emu_movw(&emu_cx, 0x4);
	emu_movw(&emu_bx, 0x719);
	goto l__04AA;
l__04AA:
	emu_movw(&emu_ax, emu_get_memory16(emu_cs, emu_bx, 0x0));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0xE));
	if (emu_flags.zf) goto l__04B9;
	emu_addw(&emu_bx, 0x2);
	if (--emu_cx != 0) goto l__04AA;
	goto l__04BD;
l__04B9:

	/* Jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_cs, emu_bx, 0x8);
	switch (emu_ip) {
		case 0x04BD: goto l__04BD;
		case 0x0502: goto l__0502;
		case 0x0560: goto l__0560;
		case 0x058D: goto l__058D;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0xB4A2; emu_last_ip = 0x04B9; emu_last_length = 0x0004; emu_last_crc = 0x3BFB;
			emu_call();
			return;
	}
l__04BD:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_xorw(&emu_get_memory16(emu_es, emu_bx, 0x2E), 0x1);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x4));
	emu_orw(&emu_ax, 0x8000);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x14), 0x1);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0xE), 0x4);
	if (!emu_flags.zf) {
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
		emu_orw(&emu_get_memory16(emu_es, emu_bx, 0x2E), 0x4);
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
		emu_orw(&emu_get_memory16(emu_es, emu_bx, 0x2E), 0x2);
	}
	goto l__04F2;
l__04F2:
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x1900), emu_ax);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x18FE), emu_dx);
	goto l__05BA;
l__0502:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0xE), 0x1);
	if (!emu_flags.zf) {
		emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x1900));
		emu_movw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x18FE));
		emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
		if (emu_flags.zf) {
			emu_cmpw(&emu_dx, emu_get_memory16(emu_ss, emu_bp,  0x6));
			if (emu_flags.zf) goto l__0529;
		}
	}
	goto l__051E;
l__051E:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0xE), 0x1);
	if (!emu_flags.zf) goto l__0543;
	goto l__0529;
l__0529:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_xorw(&emu_get_memory16(emu_es, emu_bx, 0x2E), 0x1);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x4));
	emu_orw(&emu_ax, 0x8000);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x14), 0x1);
	goto l__0543;
l__0543:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0xE), 0x4);
	if (emu_flags.zf) {
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
		emu_andw(&emu_get_memory16(emu_es, emu_bx, 0x2E), 0xFFFB);
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
		emu_andw(&emu_get_memory16(emu_es, emu_bx, 0x2E), 0xFFFD);
	}
	goto l__055E;
l__055E:
	goto l__05BA;
l__0560:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0xE), 0x4);
	if (emu_flags.zf) {
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
		emu_orw(&emu_get_memory16(emu_es, emu_bx, 0x2E), 0x4);
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
		emu_orw(&emu_get_memory16(emu_es, emu_bx, 0x2E), 0x2);
	}
	goto l__057B;
l__057B:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0xE), 0x1);
	if (emu_flags.zf) {
		emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x14), 0x1);
	}
	goto l__058B;
l__058B:
	goto l__05BA;
l__058D:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0xE), 0x4);
	if (!emu_flags.zf) {
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
		emu_orw(&emu_get_memory16(emu_es, emu_bx, 0x2E), 0x4);
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
		emu_orw(&emu_get_memory16(emu_es, emu_bx, 0x2E), 0x2);
	}
	goto l__05A8;
l__05A8:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0xE), 0x1);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x05B8; emu_last_cs = 0xB4A2; emu_last_ip = 0x05B1; emu_last_length = 0x0012; emu_last_crc = 0x33E6; emu_call(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x14), 0x1);
	goto l__05BA;
l__05BA:
	emu_testw(&emu_si, 0x2200);
	if (!emu_flags.zf) {
		emu_orw(&emu_di, emu_di);
		if (!emu_flags.zf) {
			emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
			emu_orw(&emu_get_memory16(emu_es, emu_bx, 0x2E), 0x6);
			emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
			emu_testw(&emu_get_memory16(emu_es, emu_bx, 0xE), 0x4);
			if (emu_flags.zf) {
				emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
				emu_testw(&emu_get_memory16(emu_es, emu_bx, 0x2E), 0x1);
				if (emu_flags.zf) {
					emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x1);
					emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
					emu_orw(&emu_get_memory16(emu_es, emu_bx, 0x2E), 0x1);
				}
			}
		}
	}
	goto l__05EF;
l__05EF:
	emu_movw(&emu_ax, emu_si);
	emu_andw(&emu_ax, 0x8800);
	emu_cmpw(&emu_ax, 0x8800);
	if (!emu_flags.zf) goto l__061C;
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x1900), 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x18FE), 0x0);
	emu_orw(&emu_di, emu_di);
	if (!emu_flags.zf) {
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
		emu_testw(&emu_get_memory16(emu_es, emu_bx, 0xE), 0x4);
		if (emu_flags.zf) goto l__061C;
	}
	goto l__0614;
l__0614:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_andw(&emu_get_memory16(emu_es, emu_bx, 0x2E), 0xFFF9);
	goto l__061C;
l__061C:
	emu_orw(&emu_di, emu_di);
	if (emu_flags.zf) {
		emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
		emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp,  0x6));
		emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x1900));
		if (emu_flags.zf) {
			emu_cmpw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x18FE));
			if (emu_flags.zf) {
				emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
				emu_testw(&emu_get_memory16(emu_es, emu_bx, 0xE), 0x40);
				if (emu_flags.zf) {
					emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x1900), 0x0);
					emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x18FE), 0x0);
				}
			}
		}
	}
	goto l__0649;
l__0649:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x2E));
	emu_andw(&emu_ax, 0x18);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_dx, emu_get_memory16(emu_es, emu_bx, 0x2E));
	emu_andw(&emu_dx, 0x3);
	emu_movb(&emu_cl, 0x3);
	emu_shlw(&emu_dx, emu_cl);
	emu_cmpw(&emu_ax, emu_dx);
	if (emu_flags.zf) goto l__0672;
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x0670); f__B4A2_0729_0013_2494();
	goto l__0670;
l__0670:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	goto l__0672;
l__0672:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x0);
	if (!emu_flags.zf) {
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
		emu_andw(&emu_get_memory16(emu_es, emu_bx, 0x2E), 0xFFFE);
	}
	goto l__0680;
l__0680:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x14), 0x0);
	if (emu_flags.zf) goto l__06C5;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_andw(&emu_get_memory16(emu_es, emu_bx, 0x2E), 0xFF);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_get_memory16(emu_es, emu_bx, 0x2E), emu_si);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x30));
	emu_orw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x32));
	if (emu_flags.zf) goto l__06B8;
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_es, emu_bx, 0x30);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_es, emu_bx, 0x32);
	emu_push(0x06B0);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x0AEC0005: f__0AEC_0005_0010_9634(); break;
		case 0x0AEC004F: f__0AEC_004F_0024_1E6F(); break;
		case 0x0AEC0FD8: f__0AEC_0FD8_0017_6202(); break;
		case 0x0AEC1093: f__0AEC_1093_000F_2295(); break;
		case 0x0AEC1181: f__0AEC_1181_001C_DFE4(); break;
		case 0x0AEC11F6: f__0AEC_11F6_000F_2195(); break;
		case 0x1A341CB1: f__1A34_1CB1_003A_B457(); break;
		case 0x34950025: ovl__3495(1); break;
		case 0x3495002A: ovl__3495(2); break;
		case 0x3495002F: ovl__3495(3); break;
		case 0x34950034: ovl__3495(4); break;
		case 0x3495003E: ovl__3495(6); break;
		case 0x34E0002A: ovl__34E0(2); break;
		case 0x34E9002F: ovl__34E9(3); break;
		case 0x34F20025: ovl__34F2(1); break;
		case 0x35180034: ovl__3518(4); break;
		case 0x35180039: ovl__3518(5); break;
		case 0x3520003E: ovl__3520(6); break;
		case 0x35200043: ovl__3520(7); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0xB4A2; emu_last_ip = 0x06AC; emu_last_length = 0x0030; emu_last_crc = 0x38D3;
			emu_call();
			return;
	}
	goto l__06B0;
l__06B0:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_ax);
	if (emu_flags.zf) goto l__06B8;
	goto l__06FE;
l__06B8:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0xE), 0x20);
	if (emu_flags.zf) goto l__06C5;
	goto l__06FE;
l__06C5:
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x1900));
	emu_movw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x18FE));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (!emu_flags.zf) goto l__06E3;
	emu_cmpw(&emu_dx, emu_get_memory16(emu_ss, emu_bp,  0x6));
	if (!emu_flags.zf) goto l__06E3;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0xE), 0x40);
	if (emu_flags.zf) goto l__06E3;
	goto l__06FE;
l__06E3:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x2));
	emu_movw(&emu_dx, emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0x8), emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0x6), emu_dx);
	goto l__06F3;
l__06F3:
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_flags.zf) goto l__06FE;
	goto l__01EF;
l__06FE:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0xC), 0x0);
	if (emu_flags.zf) {
		emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0xA));
		emu_andw(&emu_ax, 0x7FFF);
		emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_ax);
	}
	goto l__070D;
l__070D:
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0xC));
	goto l__007E;
l__0713:
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B4A2_0729_0013_2494()
 *
 * @name f__B4A2_0729_0013_2494
 * @implements B4A2:0729:0013:2494 ()
 * @implements B4A2:073C:0025:DBA0
 * @implements B4A2:0764:0003:DC0D
 * @implements B4A2:0767:001B:DE60
 * @implements B4A2:0782:0037:9F6E
 * @implements B4A2:07B2:0007:8ADE
 * @implements B4A2:07B9:0032:A5F0
 * @implements B4A2:07EB:0032:9164
 * @implements B4A2:081D:008A:92B0
 * @implements B4A2:083D:006A:E650
 * @implements B4A2:087C:002B:DEE8
 * @implements B4A2:08A7:0007:6D37
 * @implements B4A2:08AE:0014:2AE3
 * @implements B4A2:08C2:0023:FD2E
 * @implements B4A2:08C5:0020:E97F
 * @implements B4A2:08E5:000F:BCB8
 * @implements B4A2:08F4:0003:DDA9
 * @implements B4A2:08F7:0014:2AE3
 * @implements B4A2:090B:0016:F3ED
 * @implements B4A2:090E:0013:79CF
 * @implements B4A2:0921:000F:ACB8
 * @implements B4A2:0930:0003:DD1A
 * @implements B4A2:0933:0011:88EC
 * @implements B4A2:0944:0005:CFD8
 * @implements B4A2:0A1C:0002:C03A
 * @implements B4A2:0A1E:0006:F7CE
 *
 * Called From: 34A2:0020:0005:0000
 * Called From: B4A2:00F1:000B:A0FA
 * Called From: B4A2:066D:0027:26C2
 * Called From: B4A2:066D:0054:23DD
 */
void f__B4A2_0729_0013_2494()
{
l__0729:
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subw(&emu_sp, 0x12);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (!emu_flags.zf) goto l__073C;
	goto l__0A1E;
l__073C:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0xE), 0x8);
	if (emu_flags.zf) goto l__0767;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0xE), 0x10);
	if (emu_flags.zf) goto l__0764;
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6D53));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x0761); emu_cs = 0x2427; emu_ip = 0x0004; emu_last_cs = 0xB4A2; emu_last_ip = 0x075C; emu_last_length = 0x0025; emu_last_crc = 0xDBA0; emu_call();
	/* Unresolved jump */ emu_ip = 0x0761; emu_last_cs = 0xB4A2; emu_last_ip = 0x0761; emu_last_length = 0x0025; emu_last_crc = 0xDBA0; emu_call();
l__0764:
	goto l__0A1E;
l__0767:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x2E));
	emu_andw(&emu_ax, 0x5);
	emu_cmpw(&emu_ax, 0x1);
	if (emu_flags.zf) goto l__07B9;
	emu_cmpw(&emu_ax, 0x4);
	if (emu_flags.zf) goto l__0782;
	emu_cmpw(&emu_ax, 0x5);
	if (emu_flags.zf) goto l__0782;
	goto l__07EB;
l__0782:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0xC));
	emu_movb(&emu_ah, 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x1A));
	emu_movw(&emu_dx, emu_get_memory16(emu_es, emu_bx, 0x18));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_dx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x2A));
	emu_movb(&emu_ah, 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x2B));
	goto l__07B2;
l__07B2:
	emu_movb(&emu_ah, 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x12), emu_ax);
	goto l__081D;
l__07B9:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0xB));
	emu_movb(&emu_ah, 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x16));
	emu_movw(&emu_dx, emu_get_memory16(emu_es, emu_bx, 0x14));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_dx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x28));
	emu_movb(&emu_ah, 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x29));
	goto l__07B2;
l__07EB:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0xA));
	emu_movb(&emu_ah, 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x12));
	emu_movw(&emu_dx, emu_get_memory16(emu_es, emu_bx, 0x10));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_dx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x26));
	emu_movb(&emu_ah, 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x27));
	goto l__07B2;
l__081D:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_si, emu_get_memory16(emu_es, emu_bx, 0x1E));
	emu_orw(&emu_si, emu_si);
	if ((emu_flags.sf != emu_flags.of)) {
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
		emu_movw(&emu_bx, emu_get_memory16(emu_es, emu_bx, 0x1C));
		emu_movb(&emu_cl, 0x4);
		emu_shlw(&emu_bx, emu_cl);
		emu_movw(&emu_ax, emu_get_memory16(emu_ds, emu_bx, 0x4066));
		emu_movb(&emu_cl, 0x3);
		emu_shlw(&emu_ax, emu_cl);
		emu_addw(&emu_si, emu_ax);
	}
	goto l__083D;
l__083D:
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_si);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_bx, emu_get_memory16(emu_es, emu_bx, 0x1C));
	emu_movb(&emu_cl, 0x4);
	emu_shlw(&emu_bx, emu_cl);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, emu_bx, 0x4062));
	emu_movb(&emu_cl, 0x3);
	emu_shlw(&emu_ax, emu_cl);
	emu_addw(&emu_si, emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax, emu_si);
	emu_addw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x22));
	emu_decw(&emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_di, emu_get_memory16(emu_es, emu_bx, 0x20));
	emu_orw(&emu_di, emu_di);
	if ((emu_flags.sf != emu_flags.of)) {
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
		emu_movw(&emu_bx, emu_get_memory16(emu_es, emu_bx, 0x1C));
		emu_movb(&emu_cl, 0x4);
		emu_shlw(&emu_bx, emu_cl);
		emu_addw(&emu_di, emu_get_memory16(emu_ds, emu_bx, 0x4068));
	}
	goto l__087C;
l__087C:
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_di);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_bx, emu_get_memory16(emu_es, emu_bx, 0x1C));
	emu_movb(&emu_cl, 0x4);
	emu_shlw(&emu_bx, emu_cl);
	emu_addw(&emu_di, emu_get_memory16(emu_ds, emu_bx, 0x4064));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax, emu_di);
	emu_addw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x24));
	emu_decw(&emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_ax);
	emu_movw(&emu_bx, emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_decw(&emu_bx);
	emu_cmpw(&emu_bx, 0x5);
	if ((emu_flags.cf || emu_flags.zf)) goto l__08A7;
	goto l__0A1C;
l__08A7:
	emu_shlw(&emu_bx, 0x1);

	/* Jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_cs, emu_bx, 0xA24);
	switch (emu_ip) {
		case 0x08AE: goto l__08AE;
		case 0x08F7: goto l__08F7;
		case 0x0933: goto l__0933;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0xB4A2; emu_last_ip = 0x08A9; emu_last_length = 0x0007; emu_last_crc = 0x6D37;
			emu_call();
			return;
	}
l__08AE:
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x6C91), 0x0);
	if (!emu_flags.zf) goto l__08C5;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_di);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x08C2); emu_cs = 0x2B6C; f__2B6C_0197_00CE_4D32();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34A2) { ovl__34A2(0xFF); }
	goto l__08C2;
l__08C2:
	emu_addw(&emu_sp, 0x8);
	goto l__08C5;
l__08C5:
	emu_movw(&emu_ax, 0x4000);
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x1C));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6C91));
	emu_push(emu_cs); emu_push(0x08E5); emu_cs = 0x2903; f__2903_0158_001A_2931();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34A2) { ovl__34A2(0xFF); }
	goto l__08E5;
l__08E5:
	emu_addw(&emu_sp, 0xE);
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x6C91), 0x0);
	if (emu_flags.zf) {
		emu_push(emu_cs); emu_push(0x08F4); emu_cs = 0x2B6C; f__2B6C_0292_0028_3AD7();
		/* Check if this overlay should be reloaded */
		if (emu_cs == 0x34A2) { ovl__34A2(0xFF); }
	}
	goto l__08F4;
l__08F4:
	goto l__0A1E;
l__08F7:
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x6C91), 0x0);
	if (!emu_flags.zf) goto l__090E;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_di);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x090B); emu_cs = 0x2B6C; f__2B6C_0197_00CE_4D32();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34A2) { ovl__34A2(0xFF); }
	goto l__090B;
l__090B:
	emu_addw(&emu_sp, 0x8);
	goto l__090E;
l__090E:
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_push(emu_di);
	emu_push(emu_si);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x0921); emu_cs = 0x2BC2; f__2BC2_000A_0044_2E0E();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34A2) { ovl__34A2(0xFF); }
	goto l__0921;
l__0921:
	emu_addw(&emu_sp, 0xC);
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x6C91), 0x0);
	if (emu_flags.zf) {
		emu_push(emu_cs); emu_push(0x0930); emu_cs = 0x2B6C; f__2B6C_0292_0028_3AD7();
		/* Check if this overlay should be reloaded */
		if (emu_cs == 0x34A2) { ovl__34A2(0xFF); }
	}
	goto l__0930;
l__0930:
	goto l__0A1E;
l__0933:
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0946; emu_last_cs = 0xB4A2; emu_last_ip = 0x0939; emu_last_length = 0x0011; emu_last_crc = 0x88EC; emu_call(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_ss, emu_bp, -0x2);
	emu_push(0x0944);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x0AEC0809: f__0AEC_0809_001D_BEB5(); break;
		case 0x0AEC0CA1: f__0AEC_0CA1_0013_A57D(); break;
		case 0x0AEC0E3E: f__0AEC_0E3E_0013_E57C(); break;
		case 0x34F20061: ovl__34F2(13); break;
		case 0x3520002A: ovl__3520(2); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0xB4A2; emu_last_ip = 0x0941; emu_last_length = 0x0011; emu_last_crc = 0x88EC;
			emu_call();
			return;
	}
	goto l__0944;
l__0944:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	goto l__0A1E;
l__0A1C:
	goto l__0A1E;
l__0A1E:
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__B4FC_0000_0018_E5DC()
 *
 * @name f__B4FC_0000_0018_E5DC
 * @implements B4FC:0000:0018:E5DC ()
 * @implements B4FC:0018:0028:4660
 * @implements B4FC:0040:000D:B649
 * @implements B4FC:004D:0004:5B1F
 * @implements B4FC:0051:0004:893F
 *
 * Called From: 34FC:0020:0005:0000
 */
void f__B4FC_0000_0018_E5DC()
{
l__0000:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x10);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_push(emu_ds);
	emu_ax = 0x2AD2;
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x10);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0018); emu_cs = 0x01F7; f__01F7_378D_0020_0F64();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34FC) { ovl__34FC(0xFF); }
	goto l__0018;
l__0018:
	emu_addw(&emu_sp, 0xA);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x12));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x10));
	emu_ax = 0xF;
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x10);
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x10);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x0040); f__B4FC_03C8_002C_9251();
	goto l__0040;
l__0040:
	emu_addw(&emu_sp, 0x16);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x10);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x004D); emu_cs = 0x01F7; f__01F7_2252_0045_03CB();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34FC) { ovl__34FC(0xFF); }
	goto l__004D;
l__004D:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	goto l__0051;
l__0051:
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B4FC_03C8_002C_9251()
 *
 * @name f__B4FC_03C8_002C_9251
 * @implements B4FC:03C8:002C:9251 ()
 * @implements B4FC:03F4:0020:5053
 * @implements B4FC:03F7:001D:D8F9
 * @implements B4FC:040D:0007:5563
 * @implements B4FC:0411:0003:1C92
 * @implements B4FC:0416:000B:F320
 * @implements B4FC:0421:001D:503F
 * @implements B4FC:043E:000D:8516
 * @implements B4FC:044B:000C:346F
 * @implements B4FC:0457:002B:AFC3
 * @implements B4FC:0473:000F:D507
 * @implements B4FC:0482:0014:3ECD
 * @implements B4FC:0496:001B:F59D
 * @implements B4FC:04B1:000A:85B3
 * @implements B4FC:04BB:000F:5F8E
 * @implements B4FC:04CA:0005:BE35
 * @implements B4FC:04CF:0025:5BB1
 * @implements B4FC:04D2:0022:23CD
 * @implements B4FC:04F4:0029:C1EA
 * @implements B4FC:04FD:0020:6A2B
 * @implements B4FC:051B:0002:DE3A
 * @implements B4FC:051D:0011:F59E
 * @implements B4FC:052E:000B:A5CA
 * @implements B4FC:0539:000B:6148
 * @implements B4FC:0544:0013:A3F2
 * @implements B4FC:0557:0002:923A
 * @implements B4FC:0559:000B:640D
 * @implements B4FC:0564:0017:0883
 * @implements B4FC:057B:0017:0D26
 * @implements B4FC:057F:0013:EDC2
 * @implements B4FC:0592:001C:63EB
 * @implements B4FC:05AB:0003:A237
 * @implements B4FC:05AE:0027:BF9B
 * @implements B4FC:05D5:000A:040B
 * @implements B4FC:05DF:000F:DE36
 * @implements B4FC:05EE:0016:4149
 * @implements B4FC:0604:001E:C800
 * @implements B4FC:0622:0018:5684
 * @implements B4FC:063A:0014:F183
 * @implements B4FC:064E:0012:379C
 * @implements B4FC:0660:000B:8CCA
 * @implements B4FC:066B:000B:C447
 * @implements B4FC:0676:003D:80DA
 * @implements B4FC:0679:003A:FCA2
 * @implements B4FC:06B3:0017:1FA4
 * @implements B4FC:06CA:0005:8F6C
 * @implements B4FC:06CF:0006:DC36
 * @implements B4FC:06D8:0017:351B
 * @implements B4FC:06EF:0003:1D0C
 * @implements B4FC:06F2:000F:D49F
 * @implements B4FC:0701:0014:5930
 * @implements B4FC:0715:000B:A4F2
 * @implements B4FC:0720:0022:AE11
 * @implements B4FC:0742:0018:65C2
 * @implements B4FC:075A:000D:14AC
 * @implements B4FC:0767:0015:3D82
 * @implements B4FC:077C:0013:3222
 * @implements B4FC:078F:0011:A4A2
 * @implements B4FC:07A0:0002:C9BA
 * @implements B4FC:07A2:0013:5B66
 * @implements B4FC:07B5:0016:75CA
 * @implements B4FC:07CD:0006:5D34
 * @implements B4FC:07D3:0009:9AB9
 * @implements B4FC:07DC:0006:F7CE
 *
 * Called From: 34FC:0025:0005:0000
 * Called From: B4FC:003D:0028:4660
 */
void f__B4FC_03C8_002C_9251()
{
l__03C8:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x46);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x12);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x14));
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0405; emu_last_cs = 0xB4FC; emu_last_ip = 0x03D6; emu_last_length = 0x002C; emu_last_crc = 0x9251; emu_call(); return; }
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0xE);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x10));
	if (emu_flags.zf) goto l__03F7;
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x16));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x10));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x14));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x12));
	emu_push(emu_cs); emu_push(0x03F4); emu_cs = 0x01F7; f__01F7_39C4_0031_EE87();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34FC) { ovl__34FC(0xFF); }
	goto l__03F4;
l__03F4:
	emu_addw(&emu_sp, 0xA);
	goto l__03F7;
l__03F7:
	emu_bx = emu_get_memory16(emu_ss, emu_bp,  0x16);
	emu_es = emu_get_memory16(emu_ss, emu_bp,  0x14);
	emu_addw(&emu_bx, emu_get_memory16(emu_ss, emu_bp,  0x12));
	emu_get_memory8(emu_es, emu_bx, 0xFFFF) = 0x0;
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x18);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x1A));
	if (!emu_flags.zf) goto l__0416;
	goto l__040D;
l__040D:
	emu_xorw(&emu_dx, emu_dx);
	emu_xorw(&emu_ax, emu_ax);
	goto l__0411;
l__0411:
	goto l__07DC;
l__0416:
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x1A));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x18));
	emu_push(emu_cs); emu_push(0x0421); emu_cs = 0x2B0E; emu_Tools_GetSmallestIP();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34FC) { ovl__34FC(0xFF); }
	goto l__0421;
l__0421:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp,  0x1A) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp,  0x18) = emu_ax;
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_ds);
	emu_ax = 0x2AEE;
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x46);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x043E); emu_cs = 0x01F7; f__01F7_378D_0020_0F64();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34FC) { ovl__34FC(0xFF); }
	goto l__043E;
l__043E:
	emu_addw(&emu_sp, 0xC);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x46);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x044B); emu_cs = 0x01F7; f__01F7_3CD5_000D_9D98();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34FC) { ovl__34FC(0xFF); }
	goto l__044B;
l__044B:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x46);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0457); emu_cs = 0x01F7; f__01F7_39A5_001F_1A5D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34FC) { ovl__34FC(0xFF); }
	goto l__0457;
l__0457:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_si = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x1A);
	emu_dx = emu_get_memory16(emu_ss, emu_bp,  0x18);
	emu_get_memory16(emu_ss, emu_bp, -0xA) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0xC) = emu_dx;
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x1A);
	emu_dx = emu_get_memory16(emu_ss, emu_bp,  0x18);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_dx;
	goto l__0473;
l__0473:
	emu_ax = 0x5B;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x0482); emu_cs = 0x01F7; f__01F7_3889_0033_4660();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34FC) { ovl__34FC(0xFF); }
	goto l__0482;
l__0482:
	emu_addw(&emu_sp, 0x6);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (!emu_flags.zf) goto l__0496;
	goto l__040D;
l__0496:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0xFFFF);
	emu_get_memory8(emu_ss, emu_bp, -0x11) = emu_al;
	emu_push(emu_si);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x46);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x04B1); emu_cs = 0x01F7; f__01F7_28DC_0009_EE56();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34FC) { ovl__34FC(0xFF); }
	goto l__04B1;
l__04B1:
	emu_addw(&emu_sp, 0xA);
	emu_orw(&emu_ax, emu_ax);
	if (emu_flags.zf) goto l__04BB;
	goto l__07CD;
l__04BB:
	emu_cmpb(&emu_get_memory8(emu_ss, emu_bp, -0x11), 0xA);
	if (emu_flags.zf) goto l__04CA;
	emu_cmpb(&emu_get_memory8(emu_ss, emu_bp, -0x11), 0xD);
	if (emu_flags.zf) goto l__04CA;
	goto l__07CD;
l__04CA:
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_si);
	goto l__04D2;
l__04CF:
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x4));
	goto l__04D2;
l__04D2:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x0);
	emu_ax = emu_al;
	emu_bx = emu_ax;
	emu_al = emu_get_memory8(emu_ds, emu_bx, 0x76BD);
	emu_ax = emu_al;
	emu_testw(&emu_ax, 0x1);
	if (!emu_flags.zf) goto l__04CF;
	emu_ax = 0x5B;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x04F4); emu_cs = 0x01F7; f__01F7_3889_0033_4660();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34FC) { ovl__34FC(0xFF); }
	goto l__04F4;
l__04F4:
	emu_addw(&emu_sp, 0x6);
	emu_get_memory16(emu_ss, emu_bp, -0xE) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x10) = emu_ax;
	goto l__04FD;
l__04FD:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x10);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0xE));
	if (emu_flags.zf) goto l__0539;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0xFFFF);
	emu_get_memory8(emu_ss, emu_bp, -0x11) = emu_al;
	emu_cmpb(&emu_get_memory8(emu_ss, emu_bp, -0x11), 0xA);
	if (!emu_flags.zf) {
		emu_cmpb(&emu_get_memory8(emu_ss, emu_bp, -0x11), 0xD);
		if (!emu_flags.zf) goto l__051D;
	}
	goto l__051B;
l__051B:
	goto l__0559;
l__051D:
	emu_ax = 0x5B;
	emu_push(emu_ax);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x10);
	emu_incw(&emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x052E); emu_cs = 0x01F7; f__01F7_3889_0033_4660();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34FC) { ovl__34FC(0xFF); }
	goto l__052E;
l__052E:
	emu_addw(&emu_sp, 0x6);
	emu_get_memory16(emu_ss, emu_bp, -0xE) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x10) = emu_ax;
	goto l__0557;
l__0539:
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x0544); emu_cs = 0x01F7; f__01F7_39A5_001F_1A5D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34FC) { ovl__34FC(0xFF); }
	goto l__0544;
l__0544:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x2);
	emu_bx = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_addw(&emu_bx, emu_ax);
	emu_decw(&emu_bx);
	emu_get_memory16(emu_ss, emu_bp, -0xE) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x10) = emu_bx;
	goto l__0559;
l__0557:
	goto l__04FD;
l__0559:
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0xA);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0xC));
	if (!emu_flags.zf) goto l__0564;
	goto l__06D8;
l__0564:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x2);
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_get_memory16(emu_ss, emu_bp, -0xA) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0xC) = emu_dx;
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_cs); emu_push(0x057B); emu_cs = 0x01F7; f__01F7_39A5_001F_1A5D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34FC) { ovl__34FC(0xFF); }
	goto l__057B;
l__057B:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_di = emu_ax;
	goto l__057F;
l__057F:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x0);
	emu_ax = emu_al;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x0592); emu_cs = 0x01F7; f__01F7_3889_0033_4660();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34FC) { ovl__34FC(0xFF); }
	goto l__0592;
l__0592:
	emu_addw(&emu_sp, 0x6);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (!emu_flags.zf) {
		emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x4);
		emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x10));
		if (emu_flags.cf) goto l__05AE;
	}
	goto l__05AB;
l__05AB:
	goto l__040D;
l__05AE:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0xFFFF);
	emu_get_memory8(emu_ss, emu_bp, -0x11) = emu_al;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_addw(&emu_bx, emu_di);
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x0);
	emu_get_memory8(emu_ss, emu_bp, -0x12) = emu_al;
	emu_push(emu_di);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x05D5); emu_cs = 0x01F7; f__01F7_28DC_0009_EE56();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34FC) { ovl__34FC(0xFF); }
	goto l__05D5;
l__05D5:
	emu_addw(&emu_sp, 0xA);
	emu_orw(&emu_ax, emu_ax);
	if (emu_flags.zf) goto l__05DF;
	goto l__06CF;
l__05DF:
	emu_cmpb(&emu_get_memory8(emu_ss, emu_bp, -0x11), 0xA);
	if (emu_flags.zf) goto l__05EE;
	emu_cmpb(&emu_get_memory8(emu_ss, emu_bp, -0x11), 0xD);
	if (emu_flags.zf) goto l__05EE;
	goto l__06CF;
l__05EE:
	emu_cmpb(&emu_get_memory8(emu_ss, emu_bp, -0x12), 0x3D);
	if (emu_flags.zf) goto l__0604;
	emu_al = emu_get_memory8(emu_ss, emu_bp, -0x12);
	emu_ax = emu_al;
	emu_bx = emu_ax;
	emu_testb(&emu_get_memory8(emu_ds, emu_bx, 0x76BD), 0x1);
	if (!emu_flags.zf) goto l__0604;
	goto l__06CF;
l__0604:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x2);
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_get_memory16(emu_ss, emu_bp, -0xA) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0xC) = emu_dx;
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_di);
	emu_ax = 0x3D;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x0622); emu_cs = 0x01F7; f__01F7_3889_0033_4660();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34FC) { ovl__34FC(0xFF); }
	goto l__0622;
l__0622:
	emu_addw(&emu_sp, 0x6);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_ax = 0xD;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x063A); emu_cs = 0x01F7; f__01F7_3889_0033_4660();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34FC) { ovl__34FC(0xFF); }
	goto l__063A;
l__063A:
	emu_addw(&emu_sp, 0x6);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x8);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x4));
	if (!emu_flags.cf) goto l__064E;
	goto l__07D3;
l__064E:
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_ax = 0xD;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x0660); emu_cs = 0x01F7; f__01F7_3889_0033_4660();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34FC) { ovl__34FC(0xFF); }
	goto l__0660;
l__0660:
	emu_addw(&emu_sp, 0x6);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_ax;
	goto l__0679;
l__066B:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x8));
	if (emu_flags.cf) goto l__0676;
	goto l__07D3;
l__0676:
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x4));
	goto l__0679;
l__0679:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x0);
	emu_ax = emu_al;
	emu_bx = emu_ax;
	emu_al = emu_get_memory8(emu_ds, emu_bx, 0x76BD);
	emu_ax = emu_al;
	emu_testw(&emu_ax, 0x1);
	if (!emu_flags.zf) goto l__066B;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x8);
	emu_xorw(&emu_dx, emu_dx);
	emu_subw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_sbbw(&emu_dx, 0x0);
	emu_si = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x12);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x14));
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x06CC; emu_last_cs = 0xB4FC; emu_last_ip = 0x069F; emu_last_length = 0x003A; emu_last_crc = 0xFCA2; emu_call(); return; }
	emu_push(emu_si);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x14));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x12));
	emu_push(emu_cs); emu_push(0x06B3); emu_cs = 0x01F7; emu_Tools_Memmove();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34FC) { ovl__34FC(0xFF); }
	goto l__06B3;
l__06B3:
	emu_addw(&emu_sp, 0xA);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x12));
	emu_addw(&emu_bx, emu_si);
	emu_get_memory8(emu_es, emu_bx, 0x0) = 0x0;
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x14));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x12));
	emu_push(emu_cs);
	emu_push(0x06CA); f__B4FC_07E2_0012_911F();
	goto l__06CA;
l__06CA:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	goto l__07D3;
l__06CF:
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x4));
	goto l__057F;
l__06D8:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x2);
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_get_memory16(emu_ss, emu_bp, -0xA) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0xC) = emu_dx;
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x12);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x14));
	if (!emu_flags.zf) goto l__06EF;
	/* Unresolved jump */ emu_ip = 0x07C9; emu_last_cs = 0xB4FC; emu_last_ip = 0x06EC; emu_last_length = 0x0017; emu_last_crc = 0x351B; emu_call();
l__06EF:
	goto l__07A2;
l__06F2:
	emu_ax = 0x3D;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x0701); emu_cs = 0x01F7; f__01F7_3889_0033_4660();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34FC) { ovl__34FC(0xFF); }
	goto l__0701;
l__0701:
	emu_addw(&emu_sp, 0x6);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x8);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x6));
	if (!emu_flags.zf) goto l__0715;
	goto l__07A0;
l__0715:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x8);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x10));
	if (emu_flags.cf) goto l__0720;
	goto l__07A0;
l__0720:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x8);
	emu_xorw(&emu_dx, emu_dx);
	emu_subw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_sbbw(&emu_dx, 0x0);
	emu_get_memory16(emu_ss, emu_bp, -0x14) = emu_ax;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x14));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x12));
	emu_push(emu_cs); emu_push(0x0742); emu_cs = 0x01F7; emu_Tools_Memmove();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34FC) { ovl__34FC(0xFF); }
	goto l__0742;
l__0742:
	emu_addw(&emu_sp, 0xA);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x12));
	emu_addw(&emu_bx, emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_get_memory8(emu_es, emu_bx, 0x0) = 0x0;
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x14));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x12));
	emu_push(emu_cs);
	emu_push(0x075A); f__B4FC_07E2_0012_911F();
	goto l__075A;
l__075A:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x14));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x12));
	emu_push(emu_cs); emu_push(0x0767); emu_cs = 0x01F7; f__01F7_39A5_001F_1A5D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34FC) { ovl__34FC(0xFF); }
	goto l__0767;
l__0767:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_incw(&emu_ax);
	emu_addw(&emu_get_memory16(emu_ss, emu_bp,  0x12), emu_ax);
	emu_ax = 0xD;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs); emu_push(0x077C); emu_cs = 0x01F7; f__01F7_3889_0033_4660();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34FC) { ovl__34FC(0xFF); }
	goto l__077C;
l__077C:
	emu_addw(&emu_sp, 0x6);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (!emu_flags.zf) goto l__078F;
	goto l__07B5;
l__078F:
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x0), 0xA);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x079E; emu_last_cs = 0xB4FC; emu_last_ip = 0x0799; emu_last_length = 0x0011; emu_last_crc = 0xA4A2; emu_call(); return; }
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x4));
	goto l__07A2;
l__07A0:
	goto l__07B5;
l__07A2:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_flags.zf) goto l__07B5;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x10));
	if (!emu_flags.cf) goto l__07B5;
	goto l__06F2;
l__07B5:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x12));
	emu_get_memory8(emu_es, emu_bx, 0x0) = 0x0;
	emu_incw(&emu_get_memory16(emu_ss, emu_bp,  0x12));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x12));
	emu_get_memory8(emu_es, emu_bx, 0x0) = 0x0;
	emu_incw(&emu_get_memory16(emu_ss, emu_bp,  0x12));
	goto l__07D3;
l__07CD:
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x4));
	goto l__0473;
l__07D3:
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0xA);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0xC);
	goto l__0411;
l__07DC:
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
 * Decompiled function f__B4FC_07E2_0012_911F()
 *
 * @name f__B4FC_07E2_0012_911F
 * @implements B4FC:07E2:0012:911F ()
 * @implements B4FC:07F4:000B:8B29
 * @implements B4FC:07FF:000A:9076
 * @implements B4FC:081F:001E:E9EF
 * @implements B4FC:083D:002C:DCED
 * @implements B4FC:0854:0015:0D64
 * @implements B4FC:0869:0017:621F
 * @implements B4FC:087B:0005:8BCF
 *
 * Called From: B4FC:06C7:0017:1FA4
 * Called From: B4FC:0757:0018:65C2
 */
void f__B4FC_07E2_0012_911F()
{
l__07E2:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x4);
	emu_push(emu_si);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (!emu_flags.zf) goto l__07F4;
	goto l__087B;
l__07F4:
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x07FF); emu_cs = 0x2B0E; emu_Tools_GetSmallestIP();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34FC) { ovl__34FC(0xFF); }
	goto l__07FF;
l__07FF:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp,  0x8) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp,  0x6) = emu_ax;
	goto l__081F;
l__081F:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x0);
	emu_ax = emu_al;
	emu_bx = emu_ax;
	emu_al = emu_get_memory8(emu_ds, emu_bx, 0x76BD);
	emu_ax = emu_al;
	emu_testw(&emu_ax, 0x1);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0809; emu_last_cs = 0xB4FC; emu_last_ip = 0x0830; emu_last_length = 0x001E; emu_last_crc = 0xE9EF; emu_call(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x083D); emu_cs = 0x01F7; f__01F7_39A5_001F_1A5D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34FC) { ovl__34FC(0xFF); }
	goto l__083D;
l__083D:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_si = emu_ax;
	emu_orw(&emu_si, emu_si);
	if (emu_flags.zf) goto l__087B;
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_dx = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_addw(&emu_dx, emu_si);
	emu_decw(&emu_dx);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_dx;
	goto l__0854;
l__0854:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x0);
	emu_ax = emu_al;
	emu_bx = emu_ax;
	emu_al = emu_get_memory8(emu_ds, emu_bx, 0x76BD);
	emu_ax = emu_al;
	emu_testw(&emu_ax, 0x1);
	if (!emu_flags.zf) goto l__0869;
	goto l__087B;
l__0869:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_get_memory8(emu_es, emu_bx, 0x0) = 0x0;
	emu_decw(&emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x6));
	if (!(emu_flags.cf || emu_flags.zf)) goto l__0854;
	goto l__087B;
l__087B:
	emu_pop(&emu_si);
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

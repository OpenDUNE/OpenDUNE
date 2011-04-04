/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__22A6_034F_000C_5E0A()
 *
 * @name f__22A6_034F_000C_5E0A
 * @implements 22A6:034F:000C:5E0A ()
 * @implements 22A6:0367:005C:C0E3
 * @implements 22A6:0391:0032:6301
 * @implements 22A6:03A1:0022:6269
 * @implements 22A6:03B1:0012:6784
 * @implements 22A6:03C1:0002:C1BA
 * @implements 22A6:03C3:0003:DD14
 * @implements 22A6:03C6:0099:38CA
 * @implements 22A6:03D2:008D:FACE
 * @implements 22A6:03DF:0080:AD0A
 * @implements 22A6:03EC:0073:9796
 * @implements 22A6:03F9:0066:AEA9
 * @implements 22A6:045F:0008:382D
 * @implements 22A6:0467:001B:C9E8
 * @implements 22A6:0475:000D:2DD3
 * @implements 22A6:0499:000C:DF43
 *
 * Called From: 0AEC:0C61:0032:F661
 * Called From: 0AEC:0E22:0032:F661
 * Called From: 0AEC:0FBC:0032:EA61
 * Called From: B495:0D24:002B:B990
 * Called From: B495:0F6B:0038:E4A8
 * Called From: B495:1179:0029:6D47
 * Called From: B495:11DA:0029:6D47
 * Called From: B495:1210:0029:6D53
 * Called From: B503:069C:0039:8E6A
 * Called From: B503:069C:002F:2818
 * Called From: B503:06CD:0031:36AF
 * Called From: B503:07D2:0037:C389
 * Called From: B503:0948:002D:DAC3
 * Called From: B503:0A1F:0025:C6F5
 * Called From: B503:0A4F:0028:7281
 * Called From: B503:0B33:000E:D91C
 * Called From: B503:0B33:000B:5BFC
 * Called From: B518:0438:0024:9C33
 * Called From: B518:04C7:0024:1C35
 * Called From: B518:0C53:002A:A18C
 * Called From: B518:0C87:0034:076C
 */
void f__22A6_034F_000C_5E0A()
{
l__034F:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x6);
	emu_get_memory8(emu_ss, emu_bp, -0x5) = 0x0;
	goto l__0367;
l__0367:
	emu_push(emu_ax);
	emu_push(emu_bx);
	emu_push(emu_cx);
	emu_push(emu_dx);
	emu_push(emu_di);
	emu_push(emu_ds);
	emu_push(emu_es);
	emu_push(emu_si);
	emu_cld();
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_bx = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_di = emu_get_memory16(emu_ss, emu_bp,  0xA);
	emu_si = emu_get_memory16(emu_ss, emu_bp,  0xC);
	emu_cx = emu_get_memory16(emu_ss, emu_bp,  0xE);
	emu_dx = emu_get_memory16(emu_ss, emu_bp,  0x10);
	emu_cmpw(&emu_ax, 0x140);
	if ((int16)emu_ax >= (int16)0x140) goto l__03C3;
	emu_orw(&emu_ax, emu_ax);
	if (emu_flags.sf) {
		emu_addw(&emu_di, emu_ax);
		emu_addw(&emu_cx, emu_ax);
		emu_xorw(&emu_ax, emu_ax);
	}
l__0391:
	emu_cmpw(&emu_bx, 0xC8);
	if ((int16)emu_bx >= (int16)0xC8) goto l__03C3;
	emu_orw(&emu_bx, emu_bx);
	if (emu_flags.sf) {
		emu_addw(&emu_si, emu_bx);
		emu_addw(&emu_dx, emu_bx);
		emu_xorw(&emu_bx, emu_bx);
	}
l__03A1:
	emu_cmpw(&emu_di, 0x140);
	if ((int16)emu_di >= (int16)0x140) goto l__03C3;
	emu_orw(&emu_di, emu_di);
	if (emu_flags.sf) {
		emu_addw(&emu_ax, emu_di);
		emu_addw(&emu_cx, emu_di);
		emu_xorw(&emu_di, emu_di);
	}
l__03B1:
	emu_cmpw(&emu_si, 0xC8);
	if ((int16)emu_si >= (int16)0xC8) goto l__03C3;
	emu_orw(&emu_si, emu_si);
	if (emu_flags.sf) {
		emu_addw(&emu_bx, emu_si);
		emu_addw(&emu_dx, emu_si);
		emu_xorw(&emu_si, emu_si);
	}
l__03C1:
	goto l__03C6;
l__03C3:
	goto l__0499;
l__03C6:
	emu_push(emu_bx);
	emu_bx = 0x140;
	emu_subw(&emu_bx, emu_ax);
	emu_subw(&emu_bx, emu_cx);
	if (emu_flags.sf) {
		emu_addw(&emu_cx, emu_bx);
	}
l__03D2:
	emu_pop(&emu_bx);
	emu_push(emu_ax);
	emu_ax = 0xC8;
	emu_subw(&emu_ax, emu_bx);
	emu_subw(&emu_ax, emu_dx);
	if (emu_flags.sf) {
		emu_addw(&emu_dx, emu_ax);
	}
l__03DF:
	emu_pop(&emu_ax);
	emu_push(emu_ax);
	emu_ax = 0x140;
	emu_subw(&emu_ax, emu_di);
	emu_subw(&emu_ax, emu_cx);
	if (emu_flags.sf) {
		emu_addw(&emu_cx, emu_ax);
	}
l__03EC:
	emu_pop(&emu_ax);
	emu_push(emu_ax);
	emu_ax = 0xC8;
	emu_subw(&emu_ax, emu_si);
	emu_subw(&emu_ax, emu_dx);
	if (emu_flags.sf) {
		emu_addw(&emu_dx, emu_ax);
	}
l__03F9:
	emu_pop(&emu_ax);
	emu_orw(&emu_ax, emu_ax);
	if (emu_flags.sf) goto l__03C3;
	emu_cmpw(&emu_ax, 0x140);
	if ((int16)emu_ax >= (int16)0x140) goto l__03C3;
	emu_orw(&emu_di, emu_di);
	if (emu_flags.sf) goto l__03C3;
	emu_cmpw(&emu_di, 0x140);
	if ((int16)emu_di >= (int16)0x140) goto l__03C3;
	emu_orw(&emu_bx, emu_bx);
	if (emu_flags.sf) goto l__03C3;
	emu_cmpw(&emu_bx, 0xC8);
	if ((int16)emu_bx >= (int16)0xC8) goto l__03C3;
	emu_orw(&emu_si, emu_si);
	if (emu_flags.sf) goto l__03C3;
	emu_cmpw(&emu_si, 0xC8);
	if ((int16)emu_si >= (int16)0xC8) goto l__03C3;
	emu_orw(&emu_cx, emu_cx);
	if (emu_flags.sf) goto l__03C3;
	emu_cmpw(&emu_cx, 0x140);
	if ((int16)emu_cx > (int16)0x140) goto l__03C3;
	emu_orw(&emu_dx, emu_dx);
	if (emu_flags.sf) goto l__03C3;
	emu_cmpw(&emu_dx, 0xC8);
	if ((int16)emu_dx > (int16)0xC8) goto l__03C3;
	emu_shlw(&emu_bx, 0x1);
	emu_bx = emu_get_memory16(emu_cs, emu_bx, 0x17D);
	emu_addw(&emu_ax, emu_bx);
	emu_bx = emu_si;
	emu_shlw(&emu_bx, 0x1);
	emu_bx = emu_get_memory16(emu_cs, emu_bx, 0x17D);
	emu_addw(&emu_bx, emu_di);
	emu_si = emu_ax;
	emu_di = emu_bx;
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_cx;
	emu_negw(&emu_cx, emu_cx);
	emu_addw(&emu_cx, 0x140);
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_cx;
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x12);
	emu_push(0x045F); f__22A6_0E22_0012_7FC4();
l__045F:
	emu_ds = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x14);
	emu_push(0x0467); f__22A6_0E22_0012_7FC4();
l__0467:
	emu_es = emu_ax;
	emu_bx = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x2);
	emu_cmpb(&emu_get_memory8(emu_ss, emu_bp, -0x5), 0x1);
	if (emu_get_memory8(emu_ss, emu_bp, -0x5) == 0x1) { /* Unresolved jump */ emu_ip = 0x0482; emu_last_cs = 0x22A6; emu_last_ip = 0x0473; emu_last_length = 0x001B; emu_last_crc = 0xC9E8; emu_call(); return; }
l__0475:
	emu_cx = emu_ax;
	emu_rep_movsb(emu_ds);
	emu_addw(&emu_di, emu_bx);
	emu_addw(&emu_si, emu_bx);
	emu_decw(&emu_dx);
	if (emu_dx != 0) goto l__0475;
	goto l__0499;
l__0499:
	emu_pop(&emu_si);
	emu_pop(&emu_es);
	emu_pop(&emu_ds);
	emu_pop(&emu_di);
	emu_pop(&emu_dx);
	emu_pop(&emu_cx);
	emu_pop(&emu_bx);
	emu_pop(&emu_ax);
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__22A6_04A5_000F_3B8F()
 *
 * @name f__22A6_04A5_000F_3B8F
 * @implements 22A6:04A5:000F:3B8F ()
 * @implements 22A6:04B4:0008:BD3B
 * @implements 22A6:04BC:0021:F55C
 * @implements 22A6:04D5:0008:9965
 *
 * Called From: B4DA:0063:001B:4375
 * Called From: B503:00EF:001B:7075
 * Called From: B503:02D1:001B:4375
 * Called From: B503:036F:001B:4375
 * Called From: B503:042B:001B:4375
 * Called From: B511:10E4:001B:4375
 */
void f__22A6_04A5_000F_3B8F()
{
l__04A5:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_ax);
	emu_push(emu_cx);
	emu_push(emu_ds);
	emu_push(emu_si);
	emu_push(emu_es);
	emu_push(emu_di);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_push(0x04B4); emu_Unknown_22A6_0E1A();
l__04B4:
	emu_cx = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_push(0x04BC); f__22A6_0E22_0012_7FC4();
l__04BC:
	emu_orw(&emu_cx, emu_cx);
	if (emu_cx != 0) {
		emu_orw(&emu_ax, emu_ax);
		if (emu_ax != 0) {
			emu_cmpw(&emu_cx, emu_ax);
			if (emu_cx != emu_ax) {
				emu_ds = emu_cx;
				emu_es = emu_ax;
				emu_xorw(&emu_si, emu_si);
				emu_xorw(&emu_di, emu_di);
				emu_cx = 0x7D00;
				emu_rep_movsw(emu_ds);
			}
		}
	}
l__04D5:
	emu_pop(&emu_di);
	emu_pop(&emu_es);
	emu_pop(&emu_si);
	emu_pop(&emu_ds);
	emu_pop(&emu_cx);
	emu_pop(&emu_ax);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function emu_GUI_CopyFromBuffer()
 *
 * @name emu_GUI_CopyFromBuffer
 * @implements 22A6:04F8:007A:6E25 ()
 * @implements 22A6:0517:005B:75B3
 * @implements 22A6:051F:0053:AB4B
 * @implements 22A6:052F:0043:EC1F
 * @implements 22A6:0538:003A:3C78
 * @implements 22A6:0546:002C:4F20
 * @implements 22A6:0555:001D:D834
 * @implements 22A6:0572:0024:48A3
 * @implements 22A6:0581:0015:1FDE
 *
 * Called From: 10E4:052E:002E:B2DF
 * Called From: 2B6C:004F:0045:C1FE
 * Called From: B4F2:0F59:001D:FF8F
 * Called From: B53B:0233:0029:5454
 */
void emu_GUI_CopyFromBuffer()
{
l__04F8:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x2);
	emu_push(emu_ax);
	emu_ax = 0x0;
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ax;
	emu_push(emu_bx);
	emu_push(emu_cx);
	emu_push(emu_dx);
	emu_push(emu_ds);
	emu_push(emu_es);
	emu_push(emu_di);
	emu_push(emu_si);
	emu_cld();
	emu_di = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_cmpw(&emu_di, 0x0);
	if ((int16)emu_di < (int16)0x0) {
		emu_xorw(&emu_di, emu_di);
	}
l__0517:
	emu_cmpw(&emu_di, 0x28);
	if ((int16)emu_di >= (int16)0x28) {
		emu_di = 0x27;
	}
l__051F:
	emu_shlw(&emu_di, 0x1);
	emu_shlw(&emu_di, 0x1);
	emu_shlw(&emu_di, 0x1);
	emu_dx = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_cmpw(&emu_dx, 0x0);
	if ((int16)emu_dx < (int16)0x0) {
		emu_xorw(&emu_dx, emu_dx);
	}
l__052F:
	emu_cmpw(&emu_dx, 0xC8);
	if ((int16)emu_dx >= (int16)0xC8) {
		emu_dx = 0xC7;
	}
l__0538:
	emu_bx = emu_get_memory16(emu_ss, emu_bp,  0xA);
	emu_cx = emu_get_memory16(emu_ss, emu_bp,  0xC);
	emu_cmpw(&emu_bx, 0x28);
	if (emu_bx > 0x28) {
		emu_bx = 0x28;
	}
l__0546:
	emu_orw(&emu_bx, emu_bx);
	if (emu_bx == 0) { /* Unresolved jump */ emu_ip = 0x058A; emu_last_cs = 0x22A6; emu_last_ip = 0x0548; emu_last_length = 0x002C; emu_last_crc = 0x4F20; emu_call(); return; }
	if (emu_flags.sf) { /* Unresolved jump */ emu_ip = 0x058A; emu_last_cs = 0x22A6; emu_last_ip = 0x054A; emu_last_length = 0x002C; emu_last_crc = 0x4F20; emu_call(); return; }
	emu_cmpw(&emu_cx, 0xC8);
	if (emu_cx > 0xC8) {
		emu_cx = 0xC8;
	}
l__0555:
	emu_orw(&emu_cx, emu_cx);
	if (emu_cx == 0) { /* Unresolved jump */ emu_ip = 0x058A; emu_last_cs = 0x22A6; emu_last_ip = 0x0557; emu_last_length = 0x001D; emu_last_crc = 0xD834; emu_call(); return; }
	emu_push(emu_bx);
	emu_bx = emu_dx;
	emu_shlw(&emu_bx, 0x1);
	emu_ax = emu_get_memory16(emu_cs, emu_bx, 0x17D);
	emu_addw(&emu_di, emu_ax);
	emu_pop(&emu_bx);
	emu_dx = emu_cx;
	emu_shlw(&emu_bx, 0x1);
	emu_shlw(&emu_bx, 0x1);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x2);
	emu_push(0x0572); f__22A6_0E22_0012_7FC4();
l__0572:
	emu_es = emu_ax;
	emu_si = emu_get_memory16(emu_ss, emu_bp,  0xE);
	emu_ds = emu_get_memory16(emu_ss, emu_bp,  0x10);
	emu_ax = 0xA0;
	emu_subw(&emu_ax, emu_bx);
	emu_shlw(&emu_ax, 0x1);
l__0581:
	emu_cx = emu_bx;
	emu_rep_movsw(emu_ds);
	emu_addw(&emu_di, emu_ax);
	emu_decw(&emu_dx);
	if (emu_dx != 0) goto l__0581;
	emu_pop(&emu_si);
	emu_pop(&emu_di);
	emu_pop(&emu_es);
	emu_pop(&emu_ds);
	emu_pop(&emu_dx);
	emu_pop(&emu_cx);
	emu_pop(&emu_bx);
	emu_pop(&emu_ax);
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__22A6_06D7_006B_B7D6()
 *
 * @name f__22A6_06D7_006B_B7D6
 * @implements 22A6:06D7:006B:B7D6 ()
 * @implements 22A6:06F3:004F:513B
 * @implements 22A6:0705:003D:8585
 * @implements 22A6:0721:0021:E89B
 * @implements 22A6:0735:000D:DD74
 * @implements 22A6:0742:0002:E43A
 * @implements 22A6:0744:0006:1005
 * @implements 22A6:074A:0008:FFB7
 * @implements 22A6:0752:0044:03B0
 * @implements 22A6:0776:0020:F9D2
 * @implements 22A6:0781:0015:3428
 * @implements 22A6:078C:000A:2DE6
 *
 * Called From: 24D0:0098:001E:EB4C
 */
void f__22A6_06D7_006B_B7D6()
{
l__06D7:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_ax);
	emu_push(emu_bx);
	emu_push(emu_cx);
	emu_push(emu_di);
	emu_push(emu_ds);
	emu_push(emu_dx);
	emu_push(emu_es);
	emu_push(emu_si);
	emu_cld();
	emu_cl = 0x3;
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_cmpw(&emu_ax, 0x28);
	if ((int16)emu_ax >= (int16)0x28) goto l__0742;
	emu_orw(&emu_ax, emu_ax);
	if (emu_flags.sf) {
		emu_xorw(&emu_ax, emu_ax);
	}
l__06F3:
	emu_shlw(&emu_ax, emu_cl);
	emu_si = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_cmpw(&emu_ax, 0xC8);
	if ((int16)emu_ax >= (int16)0xC8) goto l__0742;
	emu_orw(&emu_ax, emu_ax);
	if (emu_flags.sf) {
		emu_xorw(&emu_ax, emu_ax);
	}
l__0705:
	emu_bx = emu_ax;
	emu_shlw(&emu_bx, 0x1);
	emu_ax = emu_get_memory16(emu_cs, emu_bx, 0x17D);
	emu_addw(&emu_si, emu_ax);
	emu_bx = 0x140;
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0xA);
	emu_cmpw(&emu_ax, 0x28);
	if ((int16)emu_ax >= (int16)0x28) goto l__078C;
	emu_orw(&emu_ax, emu_ax);
	if (emu_flags.sf) {
		emu_xorw(&emu_ax, emu_ax);
	}
l__0721:
	emu_shlw(&emu_ax, emu_cl);
	emu_di = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0xC);
	emu_cx = emu_ax;
	emu_cmpw(&emu_ax, 0xC8);
	if ((int16)emu_ax >= (int16)0xC8) goto l__078C;
	emu_orw(&emu_ax, emu_ax);
	if (emu_flags.sf) {
		emu_xorw(&emu_ax, emu_ax);
	}
l__0735:
	emu_bx = emu_ax;
	emu_shlw(&emu_bx, 0x1);
	emu_ax = emu_get_memory16(emu_cs, emu_bx, 0x17D);
	emu_addw(&emu_di, emu_ax);
	goto l__0744;
l__0742:
	goto l__078C;
l__0744:
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x12);
	emu_push(0x074A); f__22A6_0E22_0012_7FC4();
l__074A:
	emu_ds = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x14);
	emu_push(0x0752); f__22A6_0E22_0012_7FC4();
l__0752:
	emu_es = emu_ax;
	emu_dx = emu_get_memory16(emu_ss, emu_bp,  0xE);
	emu_cmpw(&emu_dx, 0x28);
	if (emu_dx > 0x28) goto l__078C;
	emu_cmpw(&emu_dx, 0x1);
	if ((int16)emu_dx < (int16)0x1) goto l__078C;
	emu_shlw(&emu_dx, 0x1);
	emu_shlw(&emu_dx, 0x1);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x10);
	emu_addw(&emu_cx, emu_ax);
	emu_cmpw(&emu_cx, 0xC8);
	if (emu_cx > 0xC8) {
		emu_subw(&emu_cx, 0xC7);
		emu_subw(&emu_ax, emu_cx);
	}
l__0776:
	emu_orw(&emu_ax, emu_ax);
	if (emu_flags.sf) goto l__078C;
	emu_bx = 0xA0;
	emu_subw(&emu_bx, emu_dx);
	emu_shlw(&emu_bx, 0x1);
l__0781:
	emu_cx = emu_dx;
	emu_rep_movsw(emu_ds);
	emu_addw(&emu_si, emu_bx);
	emu_addw(&emu_di, emu_bx);
	emu_decw(&emu_ax);
	if (emu_ax != 0) goto l__0781;
l__078C:
	emu_pop(&emu_si);
	emu_pop(&emu_es);
	emu_pop(&emu_dx);
	emu_pop(&emu_ds);
	emu_pop(&emu_di);
	emu_pop(&emu_cx);
	emu_pop(&emu_bx);
	emu_pop(&emu_ax);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__22A6_0796_000B_9035()
 *
 * @name f__22A6_0796_000B_9035
 * @implements 22A6:0796:000B:9035 ()
 * @implements 22A6:07A1:0011:14AA
 *
 * Called From: 0642:0448:000B:7BE4
 * Called From: 24DA:001B:000E:D6F0
 * Called From: 25C4:02C8:000F:595C
 * Called From: B491:0A37:000A:5BEF
 * Called From: B4BE:00B5:000C:7E74
 * Called From: B4BE:0256:000D:8FAB
 * Called From: B4ED:0074:0079:AC5D
 */
void f__22A6_0796_000B_9035()
{
l__0796:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_ax);
	emu_push(emu_cx);
	emu_push(emu_di);
	emu_push(emu_es);
	emu_cld();
	emu_push(0x07A1); emu_GFX_GetScreenSegment();
l__07A1:
	emu_es = emu_ax;
	emu_xorw(&emu_di, emu_di);
	emu_cx = 0x7D00;
	emu_xorw(&emu_ax, emu_ax);
	emu_rep_stosw();
	emu_pop(&emu_es);
	emu_pop(&emu_di);
	emu_pop(&emu_cx);
	emu_pop(&emu_ax);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__22A6_0C69_008C_017F()
 *
 * @name f__22A6_0C69_008C_017F
 * @implements 22A6:0C69:008C:017F ()
 * @implements 22A6:0C85:0070:7672
 * @implements 22A6:0C98:005D:EC62
 * @implements 22A6:0CAA:004B:0D94
 * @implements 22A6:0CAF:0046:DC43
 * @implements 22A6:0CC8:002D:77C6
 * @implements 22A6:0CCD:0028:03E1
 * @implements 22A6:0CF5:0027:50AF
 *
 * Called From: B4A2:09C9:0028:6340
 */
void f__22A6_0C69_008C_017F()
{
l__0C69:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_ax);
	emu_push(emu_bx);
	emu_push(emu_cx);
	emu_push(emu_di);
	emu_push(emu_dx);
	emu_push(emu_es);
	emu_di = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_cmpw(&emu_di, 0x0);
	if ((int16)emu_di >= (int16)0x0) { /* Unresolved jump */ emu_ip = 0x0C7C; emu_last_cs = 0x22A6; emu_last_ip = 0x0C78; emu_last_length = 0x008C; emu_last_crc = 0x017F; emu_call(); return; }
	emu_xorw(&emu_di, emu_di);
	emu_cmpw(&emu_di, 0x140);
	if ((int16)emu_di >= (int16)0x140) {
		emu_di = 0x13F;
	}
l__0C85:
	emu_dx = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_cmpw(&emu_dx, 0x0);
	if ((int16)emu_dx >= (int16)0x0) { /* Unresolved jump */ emu_ip = 0x0C8F; emu_last_cs = 0x22A6; emu_last_ip = 0x0C8B; emu_last_length = 0x0070; emu_last_crc = 0x7672; emu_call(); return; }
	emu_xorw(&emu_dx, emu_dx);
	emu_cmpw(&emu_dx, 0xC8);
	if ((int16)emu_dx >= (int16)0xC8) {
		emu_dx = 0xC7;
	}
l__0C98:
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0xA);
	emu_cmpw(&emu_ax, 0x0);
	if ((int16)emu_ax >= (int16)0x0) { /* Unresolved jump */ emu_ip = 0x0CA2; emu_last_cs = 0x22A6; emu_last_ip = 0x0C9E; emu_last_length = 0x005D; emu_last_crc = 0xEC62; emu_call(); return; }
	emu_xorw(&emu_ax, emu_ax);
	emu_cmpw(&emu_ax, 0x140);
	if ((int16)emu_ax >= (int16)0x140) {
		emu_ax = 0x13F;
	}
l__0CAA:
	emu_cmpw(&emu_ax, emu_di);
	if ((int16)emu_ax < (int16)emu_di) {
		emu_xchgw(&emu_ax, &emu_di);
	}
l__0CAF:
	emu_subw(&emu_ax, emu_di);
	emu_incw(&emu_ax);
	emu_get_memory16(emu_cs, 0x00, 0x178) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0xC);
	emu_cmpw(&emu_ax, 0x0);
	if ((int16)emu_ax >= (int16)0x0) { /* Unresolved jump */ emu_ip = 0x0CC0; emu_last_cs = 0x22A6; emu_last_ip = 0x0CBC; emu_last_length = 0x0046; emu_last_crc = 0xDC43; emu_call(); return; }
	emu_xorw(&emu_ax, emu_ax);
	emu_cmpw(&emu_ax, 0xC8);
	if ((int16)emu_ax >= (int16)0xC8) {
		emu_ax = 0xC7;
	}
l__0CC8:
	emu_cmpw(&emu_ax, emu_dx);
	if ((int16)emu_ax < (int16)emu_dx) {
		emu_xchgw(&emu_ax, &emu_dx);
	}
l__0CCD:
	emu_subw(&emu_ax, emu_dx);
	emu_incw(&emu_ax);
	emu_get_memory16(emu_cs, 0x00, 0x17A) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0xE);
	emu_get_memory8(emu_cs, 0x00, 0x17C) = emu_al;
	emu_bx = emu_dx;
	emu_shlw(&emu_bx, 0x1);
	emu_ax = emu_get_memory16(emu_cs, emu_bx, 0x17D);
	emu_addw(&emu_di, emu_ax);
	emu_ax = 0x140;
	emu_subw(&emu_ax, emu_get_memory16(emu_cs, 0x00, 0x178));
	emu_get_memory16(emu_cs, 0x00, 0x70) = emu_ax;
	emu_push(0x0CF5); emu_GFX_GetScreenSegment();
l__0CF5:
	emu_es = emu_ax;
	emu_cx = emu_get_memory16(emu_cs, 0x00, 0x17A);
	emu_bl = emu_get_memory8(emu_cs, 0x00, 0x17C);
	emu_dx = emu_get_memory16(emu_cs, 0x00, 0x178);
	emu_xorb(&emu_get_memory8(emu_es, emu_di, 0x0), emu_bl);
	emu_incw(&emu_di);
	emu_decw(&emu_dx);
	if (emu_dx != 0) { /* Unresolved jump */ emu_ip = 0x0D06; emu_last_cs = 0x22A6; emu_last_ip = 0x0D0B; emu_last_length = 0x0027; emu_last_crc = 0x50AF; emu_call(); return; }
	emu_addw(&emu_di, emu_get_memory16(emu_cs, 0x00, 0x70));
	if (--emu_cx != 0) { /* Unresolved jump */ emu_ip = 0x0D01; emu_last_cs = 0x22A6; emu_last_ip = 0x0D12; emu_last_length = 0x0027; emu_last_crc = 0x50AF; emu_call(); }
	emu_pop(&emu_es);
	emu_pop(&emu_dx);
	emu_pop(&emu_di);
	emu_pop(&emu_cx);
	emu_pop(&emu_bx);
	emu_pop(&emu_ax);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function emu_GUI_DrawFilledRectangle()
 *
 * @name emu_GUI_DrawFilledRectangle
 * @implements 22A6:0D31:0015:A4C3 ()
 * @implements 22A6:0D46:008D:DF87
 * @implements 22A6:0D56:007D:10AC
 * @implements 22A6:0D65:006E:8E61
 * @implements 22A6:0D6F:0064:15F3
 * @implements 22A6:0D7F:0054:EBDC
 * @implements 22A6:0D96:003D:4452
 * @implements 22A6:0D9F:0034:5DA6
 * @implements 22A6:0DC1:0012:E762
 * @implements 22A6:0DCA:0009:E7C0
 *
 * Called From: 07AE:014A:004C:B43B
 * Called From: 07D4:053F:0089:9A1B
 * Called From: 07D4:053F:0067:E7F1
 * Called From: 07D4:053F:00CB:2318
 * Called From: 10E4:004B:0048:5BD4
 * Called From: 10E4:0AD6:0020:A11E
 * Called From: 10E4:0F0C:0049:0BFB
 * Called From: B495:053F:0022:E64B
 * Called From: B495:0BE6:0021:D845
 * Called From: B495:1566:0021:6CFA
 * Called From: B4B8:215E:0034:7DBA
 * Called From: B4ED:0916:0022:0A36
 * Called From: B4ED:0916:000E:CEAE
 * Called From: B4F2:145C:0020:1786
 * Called From: B4F2:145C:001D:9F24
 * Called From: B503:023D:001E:8296
 * Called From: B503:0F71:001D:21BD
 * Called From: B518:039F:001D:D1AB
 * Called From: B518:0480:001D:D1AB
 * Called From: B518:0BED:0021:7F09
 * Called From: B518:0C14:0027:2EE7
 * Called From: B518:0E87:002E:B3B3
 * Called From: B518:11F4:0022:125A
 * Called From: B520:07DF:0024:CA96
 * Called From: B520:07DF:0027:DBD3
 * Called From: B520:0821:002C:125A
 * Called From: B520:0821:0025:CD0C
 * Called From: B527:035A:0015:34F5
 * Called From: B536:00C5:0024:6B9F
 */
void emu_GUI_DrawFilledRectangle()
{
l__0D31:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_ax);
	emu_push(emu_bx);
	emu_push(emu_cx);
	emu_push(emu_di);
	emu_push(emu_dx);
	emu_push(emu_es);
	emu_push(emu_si);
	emu_cld();
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0xE);
	emu_get_memory8(emu_cs, 0x00, 0x30) = emu_al;
	emu_push(0x0D46); emu_GFX_GetScreenSegment();
l__0D46:
	emu_es = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_cmpw(&emu_ax, 0x140);
	if ((int16)emu_ax >= (int16)0x140) goto l__0DCA;
	emu_orw(&emu_ax, emu_ax);
	if (emu_flags.sf) {
		emu_xorw(&emu_ax, emu_ax);
	}
l__0D56:
	emu_bx = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_cmpw(&emu_bx, 0xC8);
	if ((int16)emu_bx >= (int16)0xC8) goto l__0DCA;
	emu_orw(&emu_bx, emu_bx);
	if (emu_flags.sf) {
		emu_xorw(&emu_bx, emu_bx);
	}
l__0D65:
	emu_cx = emu_get_memory16(emu_ss, emu_bp,  0xA);
	emu_cmpw(&emu_cx, 0x0);
	if ((int16)emu_cx < (int16)0x0) {
		emu_xorw(&emu_cx, emu_cx);
	}
l__0D6F:
	emu_cmpw(&emu_cx, 0x140);
	if ((int16)emu_cx >= (int16)0x140) goto l__0DCA;
	emu_dx = emu_get_memory16(emu_ss, emu_bp,  0xC);
	emu_cmpw(&emu_dx, 0x0);
	if ((int16)emu_dx < (int16)0x0) {
		emu_xorw(&emu_dx, emu_dx);
	}
l__0D7F:
	emu_cmpw(&emu_dx, 0xC8);
	if ((int16)emu_dx >= (int16)0xC8) goto l__0DCA;
	emu_cmpw(&emu_ax, emu_cx);
	if (emu_ax > emu_cx) goto l__0DCA;
	emu_cmpw(&emu_bx, emu_dx);
	if (emu_bx > emu_dx) goto l__0DCA;
	emu_cmpw(&emu_cx, 0x140);
	if ((int16)emu_cx >= (int16)0x140) {
		emu_cx = 0x13F;
	}
l__0D96:
	emu_cmpw(&emu_dx, 0xC8);
	if ((int16)emu_dx >= (int16)0xC8) {
		emu_dx = 0xC7;
	}
l__0D9F:
	emu_si = emu_ax;
	emu_di = emu_ax;
	emu_bp = emu_dx;
	emu_shlw(&emu_bx, 0x1);
	emu_ax = emu_get_memory16(emu_cs, emu_bx, 0x17D);
	emu_addw(&emu_di, emu_ax);
	emu_shrw(&emu_bx, 0x1);
	emu_subw(&emu_bp, emu_bx);
	emu_incw(&emu_bp);
	emu_incw(&emu_cx);
	emu_subw(&emu_cx, emu_si);
	emu_bx = 0x140;
	emu_subw(&emu_bx, emu_cx);
	emu_dx = emu_cx;
	emu_al = emu_get_memory8(emu_cs, 0x00, 0x30);
l__0DC1:
	emu_rep_stosb();
	emu_cx = emu_dx;
	emu_addw(&emu_di, emu_bx);
	emu_decw(&emu_bp);
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) goto l__0DC1;
l__0DCA:
	emu_pop(&emu_si);
	emu_pop(&emu_es);
	emu_pop(&emu_dx);
	emu_pop(&emu_di);
	emu_pop(&emu_cx);
	emu_pop(&emu_bx);
	emu_pop(&emu_ax);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__22A6_0E22_0012_7FC4()
 *
 * @name f__22A6_0E22_0012_7FC4
 * @implements 22A6:0E22:0012:7FC4 ()
 * @implements 22A6:0E25:000F:30CD
 *
 * Called From: 22A6:045C:0066:AEA9
 * Called From: 22A6:0464:0008:382D
 * Called From: 22A6:04B9:0008:BD3B
 * Called From: 22A6:056F:001D:D834
 * Called From: 22A6:056F:002C:4F20
 * Called From: 22A6:0747:0006:1005
 * Called From: 22A6:074F:0008:FFB7
 * Called From: 22A6:10B8:001D:52A1
 * Called From: 22A6:10B8:0026:C042
 */
void f__22A6_0E22_0012_7FC4()
{
l__0E22:
	emu_andw(&emu_ax, 0x1E);
l__0E25:
	emu_push(emu_ds);
	emu_push(emu_si);
	emu_shlw(&emu_ax, 0x1);
	emu_lfp(&emu_ds, &emu_si, &emu_get_memory16(emu_cs, 0x00, 0xB));
	emu_addw(&emu_si, emu_ax);
	emu_lodsw(emu_ds);
	emu_pop(&emu_si);
	emu_pop(&emu_ds);

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__22A6_0E34_002B_E39A()
 *
 * @name f__22A6_0E34_002B_E39A
 * @implements 22A6:0E34:002B:E39A ()
 * @implements 22A6:0E5F:0007:99C6
 * @implements 22A6:0E68:0005:DC06
 *
 * Called From: B488:017F:000F:B531
 * Called From: B495:1545:0012:B2A2
 * Called From: B503:0F54:0015:E236
 */
void f__22A6_0E34_002B_E39A()
{
l__0E34:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_bx);
	emu_push(emu_ds);
	emu_push(emu_si);
	emu_bx = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_orw(&emu_bx, emu_bx);
	if (emu_flags.sf) { /* Unresolved jump */ emu_ip = 0x0E66; emu_last_cs = 0x22A6; emu_last_ip = 0x0E3F; emu_last_length = 0x002B; emu_last_crc = 0xE39A; emu_call(); return; }
	emu_cmpw(&emu_bx, 0xC8);
	if ((int16)emu_bx >= (int16)0xC8) { /* Unresolved jump */ emu_ip = 0x0E66; emu_last_cs = 0x22A6; emu_last_ip = 0x0E45; emu_last_length = 0x002B; emu_last_crc = 0xE39A; emu_call(); return; }
	emu_shlw(&emu_bx, 0x1);
	emu_si = emu_get_memory16(emu_cs, emu_bx, 0x17D);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_orw(&emu_ax, emu_ax);
	if (emu_flags.sf) { /* Unresolved jump */ emu_ip = 0x0E66; emu_last_cs = 0x22A6; emu_last_ip = 0x0E53; emu_last_length = 0x002B; emu_last_crc = 0xE39A; emu_call(); return; }
	emu_cmpw(&emu_ax, 0x140);
	if ((int16)emu_ax >= (int16)0x140) { /* Unresolved jump */ emu_ip = 0x0E66; emu_last_cs = 0x22A6; emu_last_ip = 0x0E58; emu_last_length = 0x002B; emu_last_crc = 0xE39A; emu_call(); return; }
	emu_addw(&emu_si, emu_ax);
	emu_push(0x0E5F); emu_GFX_GetScreenSegment();
l__0E5F:
	emu_ds = emu_ax;
	emu_lodsb(emu_ds);
	emu_xorb(&emu_ah, emu_ah);
	goto l__0E68;
l__0E68:
	emu_pop(&emu_si);
	emu_pop(&emu_ds);
	emu_pop(&emu_bx);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__22A6_0FAE_0027_2378()
 *
 * @name f__22A6_0FAE_0027_2378
 * @implements 22A6:0FAE:0027:2378 ()
 *
 * Called From: 29A3:0171:0004:C0E6
 * Called From: 29A3:01B1:0004:C0E6
 * Called From: 2B4C:004A:0004:C0E6
 * Called From: 2B4C:01ED:0004:C0E6
 * Called From: 2B6C:015E:0004:C0E6
 * Called From: 2B6C:018E:0004:C0E6
 * Called From: 2B6C:026C:0004:C0E6
 * Called From: 2B6C:02C1:0004:C0E6
 * Called From: 2B99:0076:0004:C0E6
 */
void f__22A6_0FAE_0027_2378()
{
l__0FAE:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_ax);
	emu_ax = emu_get_memory16(emu_cs, 0x00, 0x26);
	emu_get_memory16(emu_cs, 0x00, 0x31) = emu_ax;
	emu_ax = emu_get_memory16(emu_cs, 0x00, 0x28);
	emu_get_memory16(emu_cs, 0x00, 0x33) = emu_ax;
	emu_ax = emu_get_memory16(emu_cs, 0x00, 0x2A);
	emu_get_memory16(emu_cs, 0x00, 0x35) = emu_ax;
	emu_ax = emu_get_memory16(emu_cs, 0x00, 0x2C);
	emu_get_memory16(emu_cs, 0x00, 0x37) = emu_ax;
	emu_pop(&emu_ax);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__22A6_0FD7_0043_ACF9()
 *
 * @name f__22A6_0FD7_0043_ACF9
 * @implements 22A6:0FD7:0043:ACF9 ()
 *
 * Called From: 29A3:0165:0017:5360
 * Called From: 29A3:0165:002A:CFEE
 * Called From: 29A3:0165:002D:9BAA
 * Called From: 29A3:01A5:000C:9EC2
 * Called From: 2B4C:003E:0017:D42A
 * Called From: 2B4C:01E1:0047:12C3
 * Called From: 2B6C:0153:0020:C73F
 * Called From: 2B6C:0183:001E:6939
 * Called From: 2B6C:0261:007B:97B2
 * Called From: 2B6C:0261:008B:F96D
 * Called From: 2B6C:0261:009B:5944
 * Called From: 2B6C:0261:00CE:4D32
 * Called From: 2B6C:0261:005A:3B17
 * Called From: 2B6C:0261:0033:EB45
 * Called From: 2B6C:0261:00AD:F519
 * Called From: 2B6C:02B6:0028:3AD7
 * Called From: 2B6C:02B6:0027:6AD7
 * Called From: 2B99:0065:000C:9EC2
 */
void f__22A6_0FD7_0043_ACF9()
{
l__0FD7:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_ax);
	emu_ax = emu_get_memory16(emu_cs, 0x00, 0x31);
	emu_get_memory16(emu_cs, 0x00, 0x26) = emu_ax;
	emu_get_memory16(emu_cs, 0x00, 0x31) = 0x0;
	emu_ax = emu_get_memory16(emu_cs, 0x00, 0x33);
	emu_get_memory16(emu_cs, 0x00, 0x28) = emu_ax;
	emu_get_memory16(emu_cs, 0x00, 0x33) = 0x28;
	emu_ax = emu_get_memory16(emu_cs, 0x00, 0x35);
	emu_get_memory16(emu_cs, 0x00, 0x2A) = emu_ax;
	emu_get_memory16(emu_cs, 0x00, 0x35) = 0x0;
	emu_ax = emu_get_memory16(emu_cs, 0x00, 0x37);
	emu_get_memory16(emu_cs, 0x00, 0x2C) = emu_ax;
	emu_get_memory16(emu_cs, 0x00, 0x37) = 0xC8;
	emu_pop(&emu_ax);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function emu_GUI_CopyToBuffer()
 *
 * @name emu_GUI_CopyToBuffer
 * @implements 22A6:101C:004B:D9F3 ()
 * @implements 22A6:103A:002D:1381
 * @implements 22A6:1042:0025:252F
 * @implements 22A6:1052:0015:64FB
 * @implements 22A6:105B:000C:90E2
 * @implements 22A6:1067:002E:63A9
 * @implements 22A6:106F:0026:D3B0
 * @implements 22A6:1080:0015:5471
 * @implements 22A6:108F:0006:A6A5
 * @implements 22A6:1095:0026:C042
 * @implements 22A6:109E:001D:52A1
 * @implements 22A6:10BB:0022:80E0
 * @implements 22A6:10C4:0019:6051
 *
 * Called From: 10E4:039B:002B:904E
 * Called From: 2B6C:0106:0025:3C9F
 * Called From: 2B6C:0106:002F:7133
 * Called From: 2B6C:0106:0045:838C
 * Called From: B4F2:0F15:001D:FFB4
 * Called From: B53B:0147:0028:D443
 */
void emu_GUI_CopyToBuffer()
{
l__101C:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x2);
	emu_ax = 0x0;
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ax;
	emu_push(emu_bx);
	emu_push(emu_cx);
	emu_push(emu_dx);
	emu_push(emu_di);
	emu_push(emu_si);
	emu_push(emu_ds);
	emu_push(emu_es);
	emu_cld();
	emu_si = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_cmpw(&emu_si, 0x0);
	if ((int16)emu_si < (int16)0x0) {
		emu_xorw(&emu_si, emu_si);
	}
l__103A:
	emu_cmpw(&emu_si, 0x28);
	if ((int16)emu_si >= (int16)0x28) {
		emu_si = 0x27;
	}
l__1042:
	emu_shlw(&emu_si, 0x1);
	emu_shlw(&emu_si, 0x1);
	emu_shlw(&emu_si, 0x1);
	emu_dx = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_cmpw(&emu_dx, 0x0);
	if ((int16)emu_dx < (int16)0x0) {
		emu_xorw(&emu_dx, emu_dx);
	}
l__1052:
	emu_cmpw(&emu_dx, 0xC8);
	if ((int16)emu_dx >= (int16)0xC8) {
		emu_dx = 0xC7;
	}
l__105B:
	emu_bx = emu_get_memory16(emu_ss, emu_bp,  0xA);
	emu_cmpw(&emu_bx, 0x0);
	if ((int16)emu_bx > (int16)0x0) goto l__1067;
	emu_xorw(&emu_ax, emu_ax);
	/* Unresolved jump */ emu_ip = 0x10D2; emu_last_cs = 0x22A6; emu_last_ip = 0x1065; emu_last_length = 0x000C; emu_last_crc = 0x90E2; emu_call();
l__1067:
	emu_cmpw(&emu_bx, 0x28);
	if ((int16)emu_bx > (int16)0x28) {
		emu_bx = 0x28;
	}
l__106F:
	emu_cx = emu_get_memory16(emu_ss, emu_bp,  0xC);
	emu_cmpw(&emu_cx, 0x0);
	if ((int16)emu_cx <= (int16)0x0) { /* Unresolved jump */ emu_ip = 0x1063; emu_last_cs = 0x22A6; emu_last_ip = 0x1075; emu_last_length = 0x0026; emu_last_crc = 0xD3B0; emu_call(); return; }
	emu_cmpw(&emu_cx, 0xC8);
	if ((int16)emu_cx > (int16)0xC8) {
		emu_cx = 0xC8;
	}
l__1080:
	emu_di = emu_get_memory16(emu_ss, emu_bp,  0xE);
	emu_push(emu_di);
	emu_es = emu_get_memory16(emu_ss, emu_bp,  0x10);
	emu_cmpw(&emu_bx, 0x28);
	if (emu_bx > 0x28) {
		emu_bx = 0x28;
	}
l__108F:
	emu_orw(&emu_bx, emu_bx);
	if (emu_bx != 0) goto l__1095;
	/* Unresolved jump */ emu_ip = 0x10CD; emu_last_cs = 0x22A6; emu_last_ip = 0x1093; emu_last_length = 0x0006; emu_last_crc = 0xA6A5; emu_call();
l__1095:
	emu_cmpw(&emu_cx, 0xC8);
	if (emu_cx > 0xC8) {
		emu_cx = 0xC8;
	}
l__109E:
	emu_orw(&emu_cx, emu_cx);
	if (emu_cx == 0) { /* Unresolved jump */ emu_ip = 0x1093; emu_last_cs = 0x22A6; emu_last_ip = 0x10A0; emu_last_length = 0x001D; emu_last_crc = 0x52A1; emu_call(); return; }
	emu_push(emu_bx);
	emu_bx = emu_dx;
	emu_shlw(&emu_bx, 0x1);
	emu_ax = emu_get_memory16(emu_cs, emu_bx, 0x17D);
	emu_addw(&emu_si, emu_ax);
	emu_pop(&emu_bx);
	emu_dx = emu_cx;
	emu_shlw(&emu_bx, 0x1);
	emu_shlw(&emu_bx, 0x1);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x2);
	emu_push(0x10BB); f__22A6_0E22_0012_7FC4();
l__10BB:
	emu_ds = emu_ax;
	emu_ax = 0xA0;
	emu_subw(&emu_ax, emu_bx);
	emu_shlw(&emu_ax, 0x1);
l__10C4:
	emu_cx = emu_bx;
	emu_rep_movsw(emu_ds);
	emu_addw(&emu_si, emu_ax);
	emu_decw(&emu_dx);
	if (emu_dx != 0) goto l__10C4;
	emu_ax = emu_di;
	emu_pop(&emu_di);
	emu_subw(&emu_ax, emu_di);
	emu_pop(&emu_es);
	emu_pop(&emu_ds);
	emu_pop(&emu_si);
	emu_pop(&emu_di);
	emu_pop(&emu_dx);
	emu_pop(&emu_cx);
	emu_pop(&emu_bx);
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__22A6_10DD_0023_B468()
 *
 * @name f__22A6_10DD_0023_B468
 * @implements 22A6:10DD:0023:B468 ()
 *
 * Called From: 07D4:0880:0044:AA4E
 * Called From: 07D4:08EF:0018:1A52
 * Called From: 07D4:08EF:001B:4B47
 */
void f__22A6_10DD_0023_B468()
{
l__10DD:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_ax);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_get_memory16(emu_cs, 0x00, 0x68) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_get_memory16(emu_cs, 0x00, 0x6A) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0xA);
	emu_get_memory16(emu_cs, 0x00, 0x6C) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0xC);
	emu_get_memory16(emu_cs, 0x00, 0x6E) = emu_ax;
	emu_pop(&emu_ax);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__22A6_1200_007B_0356()
 *
 * @name f__22A6_1200_007B_0356
 * @implements 22A6:1200:007B:0356 ()
 * @implements 22A6:1217:0064:103D
 * @implements 22A6:121C:005F:FFCA
 * @implements 22A6:1240:003B:7C56
 * @implements 22A6:1245:0036:A3B9
 * @implements 22A6:124A:0031:5864
 * @implements 22A6:124F:002C:E71B
 *
 * Called From: 06F7:0906:0013:E47B
 */
void f__22A6_1200_007B_0356()
{
l__1200:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_ax);
	emu_push(emu_cx);
	emu_push(emu_dx);
	emu_push(emu_es);
	emu_cx = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_ax = 0x40;
	emu_es = emu_ax;
	emu_dx = emu_get_memory16(emu_es, 0x00, 0x63);
	emu_addb(&emu_dl, 0x6);
l__1217:
	emu_inb(&emu_al, emu_dx);
	emu_testb(&emu_al, 0x8);
	if ((emu_al & 0x8) == 0) goto l__1217;
l__121C:
	emu_inb(&emu_al, emu_dx);
	emu_testb(&emu_al, 0x8);
	if ((emu_al & 0x8) != 0) goto l__121C;
	emu_cli();
	emu_subb(&emu_dl, 0x6);
	emu_ah = 0x1;
	emu_al = 0xC;
	emu_outb(emu_dx, emu_al);
	emu_xchgb(&emu_al, &emu_ah);
	emu_incw(&emu_dx);
	emu_outb(emu_dx, emu_al);
	emu_xchgb(&emu_al, &emu_ah);
	emu_decw(&emu_dx);
	emu_ah = 0x40;
	emu_incb(&emu_al);
	emu_outb(emu_dx, emu_al);
	emu_xchgb(&emu_al, &emu_ah);
	emu_incw(&emu_dx);
	emu_outb(emu_dx, emu_al);
	emu_xchgb(&emu_al, &emu_ah);
	emu_sti();
	emu_addb(&emu_dl, 0x5);
l__1240:
	emu_inb(&emu_al, emu_dx);
	emu_testb(&emu_al, 0x8);
	if ((emu_al & 0x8) == 0) goto l__1240;
l__1245:
	emu_inb(&emu_al, emu_dx);
	emu_testb(&emu_al, 0x8);
	if ((emu_al & 0x8) != 0) goto l__1245;
l__124A:
	emu_inb(&emu_al, emu_dx);
	emu_testb(&emu_al, 0x8);
	if ((emu_al & 0x8) == 0) goto l__124A;
l__124F:
	emu_inb(&emu_al, emu_dx);
	emu_testb(&emu_al, 0x8);
	if ((emu_al & 0x8) != 0) goto l__124F;
	emu_cli();
	emu_subb(&emu_dl, 0x6);
	emu_ah = 0x0;
	emu_al = 0xC;
	emu_outb(emu_dx, emu_al);
	emu_xchgb(&emu_al, &emu_ah);
	emu_incw(&emu_dx);
	emu_outb(emu_dx, emu_al);
	emu_xchgb(&emu_al, &emu_ah);
	emu_decw(&emu_dx);
	emu_ah = 0x0;
	emu_incb(&emu_al);
	emu_outb(emu_dx, emu_al);
	emu_xchgb(&emu_al, &emu_ah);
	emu_incw(&emu_dx);
	emu_outb(emu_dx, emu_al);
	emu_xchgb(&emu_al, &emu_ah);
	emu_sti();
	emu_addb(&emu_dl, 0x5);
	if (--emu_cx != 0) goto l__1217;
	emu_pop(&emu_es);
	emu_pop(&emu_dx);
	emu_pop(&emu_cx);
	emu_pop(&emu_ax);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__22A6_127B_0036_F8C9()
 *
 * @name f__22A6_127B_0036_F8C9
 * @implements 22A6:127B:0036:F8C9 ()
 * @implements 22A6:128B:0026:020B
 * @implements 22A6:1293:001E:64A3
 * @implements 22A6:129E:0013:9D91
 * @implements 22A6:12A7:000A:4906
 *
 * Called From: 10E4:0343:001C:5313
 * Called From: 2B4C:0064:001A:FD04
 * Called From: B53B:00F2:0051:C06D
 */
void f__22A6_127B_0036_F8C9()
{
l__127B:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_cx);
	emu_push(emu_dx);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_cmpw(&emu_ax, 0x1);
	if ((int16)emu_ax < (int16)0x1) {
		emu_ax = 0x1;
	}
l__128B:
	emu_cmpw(&emu_ax, 0x28);
	if ((int16)emu_ax > (int16)0x28) {
		emu_ax = 0x28;
	}
l__1293:
	emu_dx = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_cmpw(&emu_dx, 0x1);
	if ((int16)emu_dx < (int16)0x1) {
		emu_dx = 0x1;
	}
l__129E:
	emu_cmpw(&emu_dx, 0xC8);
	if ((int16)emu_dx > (int16)0xC8) {
		emu_dx = 0xC8;
	}
l__12A7:
	emu_mulw(&emu_ax, emu_dx);
	emu_cl = 0x3;
	emu_shlw(&emu_ax, emu_cl);
	emu_pop(&emu_dx);
	emu_pop(&emu_cx);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

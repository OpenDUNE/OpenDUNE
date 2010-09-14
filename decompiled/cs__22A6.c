/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__22A6_0004_0003_DA0F()
 *
 * @name f__22A6_0004_0003_DA0F
 * @implements 22A6:0004:0003:DA0F ()
 * @implements 22A6:0EC6:0014:F4ED
 *
 * Called From: 22A3:0018:0010:9291
 */
void f__22A6_0004_0003_DA0F()
{
l__0004:
	goto l__0EC6;
l__0EC6:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_cx);
	emu_bx = 0x13B4;
	emu_cl = 0x4;
	emu_shrw(&emu_bx, emu_cl);
	emu_incw(&emu_bx);
	emu_dx = emu_bx;
	emu_ax = 0xE6D;
	emu_pop(&emu_cx);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

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
	emu_push(0x04B4); f__22A6_0E1A_0008_F4AE();
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
 * Decompiled function f__22A6_0597_0019_A23D()
 *
 * @name f__22A6_0597_0019_A23D
 * @implements 22A6:0597:0019:A23D ()
 * @implements 22A6:05B0:00F6:50F0
 * @implements 22A6:05E6:00C0:1634
 * @implements 22A6:0645:0061:7A47
 * @implements 22A6:0688:001E:C7B7
 * @implements 22A6:0692:0014:FFAB
 * @implements 22A6:06A6:0018:AC86
 * @implements 22A6:06C9:000E:3E98
 *
 * Called From: B4B8:18C0:002C:7400
 * Called From: B4B8:18E5:0025:1863
 */
void f__22A6_0597_0019_A23D()
{
l__0597:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_bx);
	emu_push(emu_cx);
	emu_push(emu_es);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_push(emu_ds);
	emu_cld();
	emu_si = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_ds = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_ax = emu_ds;
	emu_orw(&emu_ax, emu_si);
	if (emu_ax != 0) goto l__05B0;
	goto l__06C9;
l__05B0:
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x10);
	emu_get_memory8(emu_cs, 0x00, 0x6BE) = emu_al;
	emu_push(emu_si);
	emu_bx = emu_get_memory16(emu_ss, emu_bp,  0xE);
	emu_get_memory8(emu_cs, 0x00, 0x6C5) = emu_bl;
	emu_addw(&emu_si, emu_bx);
	emu_addw(&emu_si, emu_bx);
	emu_addw(&emu_si, emu_bx);
	emu_lodsb(emu_ds);
	emu_get_memory8(emu_cs, 0x00, 0x6C2) = emu_al;
	emu_lodsb(emu_ds);
	emu_get_memory8(emu_cs, 0x00, 0x6C3) = emu_al;
	emu_lodsb(emu_ds);
	emu_get_memory8(emu_cs, 0x00, 0x6C4) = emu_al;
	emu_pop(&emu_si);
	emu_addw(&emu_si, 0x3);
	emu_push(emu_ds);
	emu_pop(&emu_es);
	emu_di = emu_si;
	emu_xorw(&emu_bx, emu_bx);
	emu_get_memory8(emu_cs, emu_bx, 0x12B3) = 0x0;
	emu_incw(&emu_bx);
l__05E6:
	emu_dl = emu_get_memory8(emu_cs, 0x00, 0x6BE);
	emu_shrb(&emu_dl, 0x1);
	emu_lodsb(emu_ds);
	emu_dh = emu_al;
	emu_subb(&emu_al, emu_get_memory8(emu_cs, 0x00, 0x6C2));
	emu_imulub(&emu_al, emu_dl);
	emu_shlw(&emu_ax, 0x1);
	emu_subb(&emu_dh, emu_ah);
	emu_get_memory8(emu_cs, 0x00, 0x6BF) = emu_dh;
	emu_lodsb(emu_ds);
	emu_dh = emu_al;
	emu_subb(&emu_al, emu_get_memory8(emu_cs, 0x00, 0x6C3));
	emu_imulub(&emu_al, emu_dl);
	emu_shlw(&emu_ax, 0x1);
	emu_subb(&emu_dh, emu_ah);
	emu_get_memory8(emu_cs, 0x00, 0x6C0) = emu_dh;
	emu_lodsb(emu_ds);
	emu_dh = emu_al;
	emu_subb(&emu_al, emu_get_memory8(emu_cs, 0x00, 0x6C4));
	emu_imulub(&emu_al, emu_dl);
	emu_shlw(&emu_ax, 0x1);
	emu_subb(&emu_dh, emu_ah);
	emu_get_memory8(emu_cs, 0x00, 0x6C1) = emu_dh;
	emu_di = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_es = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_addw(&emu_di, 0x3);
	emu_bh = emu_get_memory8(emu_cs, 0x00, 0x6C5);
	emu_get_memory8(emu_cs, 0x00, 0x6C6) = emu_bh;
	emu_get_memory16(emu_cs, 0x00, 0x6C7) = 0xFFFF;
	emu_cx = 0xFF;
	emu_xorb(&emu_bh, emu_bh);
l__0645:
	emu_incb(&emu_bh);
	emu_xorw(&emu_dx, emu_dx);
	emu_al = emu_get_memory8(emu_es, emu_di, 0x0);
	emu_incw(&emu_di);
	emu_subb(&emu_al, emu_get_memory8(emu_cs, 0x00, 0x6BF));
	emu_ah = emu_al;
	emu_imulub(&emu_al, emu_ah);
	emu_addw(&emu_dx, emu_ax);
	emu_al = emu_get_memory8(emu_es, emu_di, 0x0);
	emu_incw(&emu_di);
	emu_subb(&emu_al, emu_get_memory8(emu_cs, 0x00, 0x6C0));
	emu_ah = emu_al;
	emu_imulub(&emu_al, emu_ah);
	emu_addw(&emu_dx, emu_ax);
	emu_al = emu_get_memory8(emu_es, emu_di, 0x0);
	emu_incw(&emu_di);
	emu_subb(&emu_al, emu_get_memory8(emu_cs, 0x00, 0x6C1));
	emu_ah = emu_al;
	emu_imulub(&emu_al, emu_ah);
	emu_addw(&emu_dx, emu_ax);
	emu_cmpw(&emu_dx, emu_get_memory16(emu_cs, 0x00, 0x6C7));
	if (emu_dx > emu_get_memory16(emu_cs, 0x00, 0x6C7)) goto l__0692;
	emu_cmpb(&emu_bh, emu_get_memory8(emu_cs, 0x00, 0x6C5));
	if (emu_bh != emu_get_memory8(emu_cs, 0x00, 0x6C5)) {
		emu_cmpb(&emu_bl, emu_bh);
		if (emu_bl == emu_bh) goto l__0692;
	}
l__0688:
	emu_get_memory16(emu_cs, 0x00, 0x6C7) = emu_dx;
	emu_get_memory8(emu_cs, 0x00, 0x6C6) = emu_bh;
l__0692:
	if (--emu_cx != 0) goto l__0645;
	emu_al = emu_get_memory8(emu_cs, 0x00, 0x6C6);
	emu_xorb(&emu_bh, emu_bh);
	emu_get_memory8(emu_cs, emu_bx, 0x12B3) = emu_al;
	emu_incb(&emu_bl);
	if (emu_bl == 0) goto l__06A6;
	goto l__05E6;
l__06A6:
	emu_di = emu_get_memory16(emu_ss, emu_bp,  0xA);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0xC);
	emu_es = emu_ax;
	emu_orw(&emu_ax, emu_di);
	if (emu_ax != 0) {
		emu_push(emu_cs);
		emu_pop(&emu_ds);
		emu_si = 0x12B3;
		emu_cx = 0x80;
		emu_rep_movsw(emu_ds);
	}
	goto l__06C9;
l__06C9:
	emu_pop(&emu_ds);
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_pop(&emu_es);
	emu_pop(&emu_cx);
	emu_pop(&emu_bx);
	emu_ax = 0x12B3;
	emu_dx = 0x22A6;
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
	emu_push(0x07A1); f__22A6_0DF8_0022_5FD5();
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
 * Decompiled function emu_GUI_DrawChar()
 *
 * @name emu_GUI_DrawChar
 * @implements 22A6:07B3:0037:50B9 ()
 * @implements 22A6:07E7:0003:DDA3
 * @implements 22A6:07EA:007A:8632
 * @implements 22A6:0864:002C:B662
 * @implements 22A6:0890:0072:C008
 * @implements 22A6:0895:006D:F995
 * @implements 22A6:08A0:0062:CF5A
 * @implements 22A6:08A9:0059:C6C0
 * @implements 22A6:08AE:0054:B5FA
 * @implements 22A6:08BC:0046:7D0C
 * @implements 22A6:08CD:0035:356A
 * @implements 22A6:08D1:0031:D9C1
 * @implements 22A6:08E9:0019:D935
 * @implements 22A6:08EE:0014:AA0F
 * @implements 22A6:08F9:0009:C791
 *
 * Called From: 2BC2:00DA:0012:BF40
 * Called From: 2BC2:00DA:0043:F33C
 */
void emu_GUI_DrawChar()
{
l__07B3:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_bx);
	emu_push(emu_cx);
	emu_push(emu_di);
	emu_push(emu_ds);
	emu_push(emu_dx);
	emu_push(emu_es);
	emu_push(emu_si);
	emu_lfp(&emu_es, &emu_si, &emu_get_memory16(emu_cs, 0x00, 0x80));
	emu_ax = emu_es;
	emu_orw(&emu_ax, emu_si);
	if (emu_ax != 0) {
		emu_bl = emu_get_memory8(emu_ss, emu_bp,  0x6);
		emu_xorb(&emu_bh, emu_bh);
		emu_get_memory16(emu_cs, 0x00, 0x7C) = emu_bx;
		emu_shlw(&emu_bx, 0x1);
		emu_addw(&emu_bx, emu_get_memory16(emu_cs, 0x00, 0x74));
		emu_cx = emu_get_memory16(emu_es, emu_bx + emu_si, 0x0);
		if (emu_cx == 0) goto l__07E7;
		emu_dx = emu_get_memory16(emu_ss, emu_bp,  0x8);
		emu_cmpw(&emu_dx, 0x140);
		if (emu_dx < 0x140) goto l__07EA;
	}
l__07E7:
	goto l__08F9;
l__07EA:
	emu_bx = emu_get_memory16(emu_cs, 0x00, 0x7C);
	emu_addw(&emu_bx, emu_get_memory16(emu_cs, 0x00, 0x76));
	emu_xorb(&emu_ah, emu_ah);
	emu_al = emu_get_memory8(emu_es, emu_bx + emu_si, 0x0);
	emu_get_memory16(emu_cs, 0x00, 0x7E) = emu_ax;
	emu_addw(&emu_ax, emu_dx);
	emu_cmpw(&emu_ax, 0x140);
	if (emu_ax > 0x140) goto l__07E7;
	emu_di = emu_dx;
	emu_dx = emu_get_memory16(emu_ss, emu_bp,  0xA);
	emu_cmpw(&emu_dx, 0xC8);
	if (emu_dx >= 0xC8) goto l__07E7;
	emu_bx = emu_get_memory16(emu_cs, 0x00, 0x72);
	emu_xorb(&emu_ah, emu_ah);
	emu_al = emu_get_memory8(emu_es, emu_bx + emu_si, 0x4);
	emu_get_memory8(emu_cs, 0x00, 0x84) = emu_al;
	emu_addw(&emu_ax, emu_dx);
	emu_cmpw(&emu_ax, 0xC8);
	if (emu_ax > 0xC8) goto l__07E7;
	emu_bx = emu_get_memory16(emu_cs, 0x00, 0x7C);
	emu_shlw(&emu_bx, 0x1);
	emu_addw(&emu_bx, emu_get_memory16(emu_cs, 0x00, 0x7A));
	emu_ah = emu_get_memory8(emu_es, emu_bx + emu_si, 0x0);
	emu_get_memory8(emu_cs, 0x00, 0x85) = emu_ah;
	emu_al = emu_get_memory8(emu_es, emu_bx + emu_si, 0x1);
	emu_get_memory8(emu_cs, 0x00, 0x86) = emu_al;
	emu_addb(&emu_ah, emu_al);
	emu_subb(&emu_get_memory8(emu_cs, 0x00, 0x84), emu_ah);
	emu_addw(&emu_si, emu_cx);
	emu_bx = emu_dx;
	emu_shlw(&emu_bx, 0x1);
	emu_ax = emu_get_memory16(emu_cs, emu_bx, 0x17D);
	emu_addw(&emu_di, emu_ax);
	emu_ax = 0x140;
	emu_subw(&emu_ax, emu_get_memory16(emu_cs, 0x00, 0x7E));
	emu_get_memory16(emu_cs, 0x00, 0x70) = emu_ax;
	emu_push(0x0864); f__22A6_0DF8_0022_5FD5();
l__0864:
	emu_dx = emu_es;
	emu_es = emu_ax;
	emu_ds = emu_dx;
	emu_bx = 0x87;
	emu_xorb(&emu_ch, emu_ch);
	emu_cl = emu_get_memory8(emu_cs, 0x00, 0x85);
	emu_orw(&emu_cx, emu_cx);
	if (emu_cx != 0) {
		emu_al = 0x0;
		emu_al = emu_get_memory8(emu_cs, emu_bx + emu_al, 0x0);
		emu_orb(&emu_al, emu_al);
		if (emu_al != 0) goto l__0890;
		emu_bx = emu_cx;
		emu_shlw(&emu_bx, 0x1);
		emu_ax = emu_get_memory16(emu_cs, emu_bx, 0x17D);
		emu_addw(&emu_di, emu_ax);
		emu_bx = 0x87;
	}
	goto l__08A0;
l__0890:
	emu_dx = emu_get_memory16(emu_cs, 0x00, 0x7E);
l__0895:
	emu_stosb();
	emu_decw(&emu_dx);
	if (emu_dx != 0) goto l__0895;
	emu_addw(&emu_di, emu_get_memory16(emu_cs, 0x00, 0x70));
	if (--emu_cx != 0) goto l__0890;
l__08A0:
	emu_cl = emu_get_memory8(emu_cs, 0x00, 0x86);
	emu_orw(&emu_cx, emu_cx);
	if (emu_cx == 0) goto l__08F9;
l__08A9:
	emu_dx = emu_get_memory16(emu_cs, 0x00, 0x7E);
l__08AE:
	emu_lodsb(emu_ds);
	emu_ah = emu_al;
	emu_andb(&emu_al, 0xF);
	emu_al = emu_get_memory8(emu_cs, emu_bx + emu_al, 0x0);
	emu_orb(&emu_al, emu_al);
	if (emu_al != 0) {
		emu_get_memory8(emu_es, emu_di, 0x0) = emu_al;
	}
l__08BC:
	emu_incw(&emu_di);
	emu_decw(&emu_dx);
	if (emu_dx == 0) goto l__08D1;
	emu_al = emu_ah;
	emu_andb(&emu_al, 0xF0);
	emu_al = emu_get_memory8(emu_cs, emu_bx + emu_al, 0x0);
	emu_orb(&emu_al, emu_al);
	if (emu_al != 0) {
		emu_get_memory8(emu_es, emu_di, 0x0) = emu_al;
	}
l__08CD:
	emu_incw(&emu_di);
	emu_decw(&emu_dx);
	if (emu_dx != 0) goto l__08AE;
l__08D1:
	emu_addw(&emu_di, emu_get_memory16(emu_cs, 0x00, 0x70));
	if (--emu_cx != 0) goto l__08A9;
	emu_cl = emu_get_memory8(emu_cs, 0x00, 0x84);
	emu_orw(&emu_cx, emu_cx);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) goto l__08F9;
	emu_al = 0x0;
	emu_al = emu_get_memory8(emu_cs, emu_bx + emu_al, 0x0);
	emu_orb(&emu_al, emu_al);
	if (emu_al == 0) goto l__08F9;
l__08E9:
	emu_dx = emu_get_memory16(emu_cs, 0x00, 0x7E);
l__08EE:
	emu_stosb();
	emu_decw(&emu_dx);
	if (emu_dx != 0) goto l__08EE;
	emu_addw(&emu_di, emu_get_memory16(emu_cs, 0x00, 0x70));
	if (--emu_cx != 0) goto l__08E9;
l__08F9:
	emu_pop(&emu_si);
	emu_pop(&emu_es);
	emu_pop(&emu_dx);
	emu_pop(&emu_ds);
	emu_pop(&emu_di);
	emu_pop(&emu_cx);
	emu_pop(&emu_bx);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__22A6_0902_004B_01A8()
 *
 * @name f__22A6_0902_004B_01A8
 * @implements 22A6:0902:004B:01A8 ()
 *
 * Called From: 2605:0074:006D:F8B2
 */
void f__22A6_0902_004B_01A8()
{
l__0902:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_ax);
	emu_push(emu_es);
	emu_push(emu_si);
	emu_lfp(&emu_es, &emu_si, &emu_get_memory16(emu_cs, 0x00, 0x7));
	emu_lfp(&emu_es, &emu_si, &emu_get_memory16(emu_es, emu_si, 0x0));
	emu_ax = emu_es;
	emu_orw(&emu_ax, emu_si);
	if (emu_ax == 0) { /* Unresolved jump */ emu_ip = 0x0948; emu_last_cs = 0x22A6; emu_last_ip = 0x0914; emu_last_length = 0x004B; emu_last_crc = 0x01A8; emu_call(); return; }
	emu_get_memory16(emu_cs, 0x00, 0x82) = emu_es;
	emu_get_memory16(emu_cs, 0x00, 0x80) = emu_si;
	emu_ax = emu_get_memory16(emu_es, emu_si, 0x4);
	emu_get_memory16(emu_cs, 0x00, 0x72) = emu_ax;
	emu_ax = emu_get_memory16(emu_es, emu_si, 0x6);
	emu_get_memory16(emu_cs, 0x00, 0x74) = emu_ax;
	emu_ax = emu_get_memory16(emu_es, emu_si, 0x8);
	emu_get_memory16(emu_cs, 0x00, 0x76) = emu_ax;
	emu_ax = emu_get_memory16(emu_es, emu_si, 0xA);
	emu_get_memory16(emu_cs, 0x00, 0x78) = emu_ax;
	emu_ax = emu_get_memory16(emu_es, emu_si, 0xC);
	emu_get_memory16(emu_cs, 0x00, 0x7A) = emu_ax;
	emu_pop(&emu_si);
	emu_pop(&emu_es);
	emu_pop(&emu_ax);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function emu_GUI_DrawLine()
 *
 * @name emu_GUI_DrawLine
 * @implements 22A6:094D:000C:EC7D ()
 * @implements 22A6:0959:0014:82C1
 * @implements 22A6:096D:0008:E7EF
 *
 * Called From: 07D4:08BB:0027:372D
 * Called From: 07D4:08D4:0019:9BB9
 * Called From: 10E4:0072:0024:0714
 * Called From: 10E4:0072:0027:1641
 * Called From: 10E4:0099:0027:66BA
 * Called From: 10E4:00B6:001D:1DE6
 * Called From: 10E4:00D3:001D:C1D8
 * Called From: 10E4:195F:001E:2919
 * Called From: 10E4:195F:0020:D72B
 * Called From: 10E4:1A07:001E:2919
 * Called From: 10E4:1AEA:0022:B505
 * Called From: 251B:0019:001E:7202
 * Called From: 251B:0033:001A:4EC8
 * Called From: 251B:0049:0016:F082
 * Called From: 251B:0063:001A:83C7
 * Called From: B495:0591:001E:433D
 * Called From: B495:0699:001E:0C98
 * Called From: B495:0699:0021:51DC
 * Called From: B495:06BA:0021:58DD
 * Called From: B518:03F0:0026:F217
 * Called From: B518:0414:0024:F6ED
 */
void emu_GUI_DrawLine()
{
l__094D:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_ax);
	emu_push(emu_bx);
	emu_push(emu_cx);
	emu_push(emu_di);
	emu_push(emu_dx);
	emu_push(emu_es);
	emu_push(0x0959); f__22A6_0DF8_0022_5FD5();
l__0959:
	emu_es = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_bx = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_cx = emu_get_memory16(emu_ss, emu_bp,  0xA);
	emu_dx = emu_get_memory16(emu_ss, emu_bp,  0xC);
	emu_di = emu_get_memory16(emu_ss, emu_bp,  0xE);
	emu_push(0x096D); f__22A6_0975_004B_1096();
l__096D:
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
 * Decompiled function f__22A6_0975_004B_1096()
 *
 * @name f__22A6_0975_004B_1096
 * @implements 22A6:0975:004B:1096 ()
 * @implements 22A6:09BD:0003:5D2E
 * @implements 22A6:09C0:0008:4176
 * @implements 22A6:09C8:0011:C80B
 * @implements 22A6:09D9:000C:03FA
 * @implements 22A6:09E5:0002:AB3A
 * @implements 22A6:09E7:0003:9D0E
 * @implements 22A6:09EA:0003:1DBA
 * @implements 22A6:0AA4:0006:0B65
 * @implements 22A6:0AAA:0017:3FD0
 * @implements 22A6:0AB1:0010:33B1
 * @implements 22A6:0AC1:002C:86E3
 * @implements 22A6:0AC7:0026:4A03
 * @implements 22A6:0AD9:0014:A72E
 * @implements 22A6:0AED:0020:54A3
 * @implements 22A6:0AF9:0014:22B8
 * @implements 22A6:0B0D:0032:6BD9
 * @implements 22A6:0B12:002D:CB6F
 * @implements 22A6:0B2E:0011:81AA
 * @implements 22A6:0B36:0009:8FA3
 * @implements 22A6:0B3D:0002:CB3A
 * @implements 22A6:0B3F:0014:336A
 * @implements 22A6:0B48:000B:1D5C
 * @implements 22A6:0B55:000A:5176
 *
 * Called From: 22A6:096A:0014:82C1
 */
void f__22A6_0975_004B_1096()
{
l__0975:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_ax);
	emu_push(emu_bp);
	emu_push(emu_bx);
	emu_push(emu_cx);
	emu_push(emu_di);
	emu_push(emu_dx);
	emu_push(emu_es);
	emu_push(emu_si);
	emu_get_memory16(emu_cs, 0x00, 0xB53) = emu_di;
	emu_cmpw(&emu_ax, emu_get_memory16(emu_cs, 0x00, 0x68));
	if ((int16)emu_ax >= (int16)emu_get_memory16(emu_cs, 0x00, 0x68)) {
		emu_cmpw(&emu_ax, emu_get_memory16(emu_cs, 0x00, 0x6C));
		if ((int16)emu_ax <= (int16)emu_get_memory16(emu_cs, 0x00, 0x6C)) {
			emu_cmpw(&emu_bx, emu_get_memory16(emu_cs, 0x00, 0x6A));
			if ((int16)emu_bx >= (int16)emu_get_memory16(emu_cs, 0x00, 0x6A)) {
				emu_cmpw(&emu_bx, emu_get_memory16(emu_cs, 0x00, 0x6E));
				if ((int16)emu_bx <= (int16)emu_get_memory16(emu_cs, 0x00, 0x6E)) {
					emu_cmpw(&emu_cx, emu_get_memory16(emu_cs, 0x00, 0x68));
					if ((int16)emu_cx >= (int16)emu_get_memory16(emu_cs, 0x00, 0x68)) {
						emu_cmpw(&emu_cx, emu_get_memory16(emu_cs, 0x00, 0x6C));
						if ((int16)emu_cx <= (int16)emu_get_memory16(emu_cs, 0x00, 0x6C)) {
							emu_cmpw(&emu_dx, emu_get_memory16(emu_cs, 0x00, 0x6A));
							if ((int16)emu_dx >= (int16)emu_get_memory16(emu_cs, 0x00, 0x6A)) {
								emu_cmpw(&emu_dx, emu_get_memory16(emu_cs, 0x00, 0x6E));
								if ((int16)emu_dx <= (int16)emu_get_memory16(emu_cs, 0x00, 0x6E)) goto l__09E7;
							}
						}
					}
				}
			}
		}
	}
l__09BD:
	emu_push(0x09C0); f__22A6_0A79_002B_D1F0();
l__09C0:
	emu_xchgw(&emu_ax, &emu_cx);
	emu_xchgw(&emu_dx, &emu_bx);
	emu_di = emu_si;
	emu_push(0x09C8); f__22A6_0A79_002B_D1F0();
l__09C8:
	emu_bp = emu_di;
	emu_orw(&emu_bp, emu_si);
	if (emu_bp == 0) goto l__09E7;
	emu_testw(&emu_di, emu_si);
	if ((emu_di & emu_si) != 0) goto l__09EA;
	emu_shlw(&emu_si, 0x1);

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_cs, emu_si, 0x9ED);
	emu_push(0x09D9);
	switch (emu_ip) {
		case 0x0A0D: f__22A6_0A0D_0002_61BE(); break;
		case 0x0A0F: f__22A6_0A0F_0008_6943(); break;
		case 0x0A19: f__22A6_0A19_000E_92F3(); break;
		case 0x0A46: f__22A6_0A46_0008_6953(); break;
		case 0x0A50: f__22A6_0A50_000E_9CF3(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x22A6; emu_last_ip = 0x09D4; emu_last_length = 0x0011; emu_last_crc = 0xC80B;
			emu_call();
			return;
	}
l__09D9:
	if (emu_flags.cf) goto l__09BD;
	emu_xchgw(&emu_ax, &emu_cx);
	emu_xchgw(&emu_dx, &emu_bx);
	emu_shlw(&emu_di, 0x1);

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_cs, emu_di, 0x9ED);
	emu_push(0x09E5);
	switch (emu_ip) {
		case 0x0A0D: f__22A6_0A0D_0002_61BE(); break;
		case 0x0A0F: f__22A6_0A0F_0008_6943(); break;
		case 0x0A19: f__22A6_0A19_000E_92F3(); break;
		case 0x0A46: f__22A6_0A46_0008_6953(); break;
		case 0x0A50: f__22A6_0A50_000E_9CF3(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x22A6; emu_last_ip = 0x09E0; emu_last_length = 0x000C; emu_last_crc = 0x03FA;
			emu_call();
			return;
	}
l__09E5:
	goto l__09BD;
l__09E7:
	goto l__0AA4;
l__09EA:
	goto l__0B55;
l__0AA4:
	emu_subw(&emu_dx, emu_bx);
	if (!emu_flags.zf) goto l__0AAA;
	goto l__0B0D;
l__0AAA:
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) {
		emu_negw(&emu_dx, emu_dx);
		emu_xchgw(&emu_ax, &emu_cx);
		emu_subw(&emu_bx, emu_dx);
	}
l__0AB1:
	emu_shlw(&emu_bx, 0x1);
	emu_bx = emu_get_memory16(emu_cs, emu_bx, 0x17D);
	emu_si = 0x1;
	emu_subw(&emu_cx, emu_ax);
	if (!emu_flags.zf) goto l__0AC1;
	goto l__0B3F;
l__0AC1:
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) {
		emu_negw(&emu_cx, emu_cx);
		emu_negw(&emu_si, emu_si);
	}
l__0AC7:
	emu_cmpw(&emu_cx, emu_dx);
	if ((int16)emu_cx >= (int16)emu_dx) goto l__0AED;
	emu_xchgw(&emu_dx, &emu_cx);
	emu_di = emu_cx;
	emu_bp = emu_cx;
	emu_shrw(&emu_bp, 0x1);
	emu_addw(&emu_bx, emu_ax);
	emu_ax = emu_get_memory16(emu_cs, 0x00, 0xB53);
l__0AD9:
	emu_get_memory8(emu_es, emu_bx, 0x0) = emu_al;
	emu_decw(&emu_cx);
	if ((emu_flags.sf != emu_flags.of)) goto l__0B55;
	emu_addw(&emu_bx, 0x140);
	emu_subw(&emu_bp, emu_dx);
	if ((emu_flags.sf != emu_flags.of)) {
		emu_addw(&emu_bp, emu_di);
		emu_addw(&emu_bx, emu_si);
	}
	goto l__0AD9;
l__0AED:
	emu_di = emu_cx;
	emu_bp = emu_cx;
	emu_shrw(&emu_bp, 0x1);
	emu_addw(&emu_bx, emu_ax);
	emu_ax = emu_get_memory16(emu_cs, 0x00, 0xB53);
l__0AF9:
	emu_get_memory8(emu_es, emu_bx, 0x0) = emu_al;
	emu_decw(&emu_cx);
	if ((emu_flags.sf != emu_flags.of)) goto l__0B55;
	emu_addw(&emu_bx, emu_si);
	emu_subw(&emu_bp, emu_dx);
	if ((emu_flags.sf != emu_flags.of)) {
		emu_addw(&emu_bp, emu_di);
		emu_addw(&emu_bx, 0x140);
	}
	goto l__0AF9;
l__0B0D:
	emu_cmpw(&emu_ax, emu_cx);
	if ((int16)emu_ax >= (int16)emu_cx) {
		emu_xchgw(&emu_ax, &emu_cx);
	}
l__0B12:
	emu_subw(&emu_cx, emu_ax);
	emu_incw(&emu_cx);
	emu_shlw(&emu_bx, 0x1);
	emu_bx = emu_get_memory16(emu_cs, emu_bx, 0x17D);
	emu_addw(&emu_bx, emu_ax);
	emu_di = emu_bx;
	emu_ax = emu_get_memory16(emu_cs, 0x00, 0xB53);
	emu_ah = emu_al;
	emu_testw(&emu_di, 0x1);
	if ((emu_di & 0x1) != 0) {
		emu_stosb();
		emu_decw(&emu_cx);
	}
l__0B2E:
	emu_dx = emu_cx;
	emu_shrw(&emu_cx, 0x1);
	if (!emu_flags.zf) {
		emu_rep_stosw();
	}
l__0B36:
	emu_testw(&emu_dx, 0x1);
	if ((emu_dx & 0x1) != 0) {
		emu_stosb();
	}
l__0B3D:
	goto l__0B55;
l__0B3F:
	emu_cx = emu_dx;
	emu_incw(&emu_cx);
	emu_addw(&emu_bx, emu_ax);
	emu_ax = emu_get_memory16(emu_cs, 0x00, 0xB53);
l__0B48:
	emu_get_memory8(emu_es, emu_bx, 0x0) = emu_al;
	emu_addw(&emu_bx, 0x140);
	if (--emu_cx != 0) goto l__0B48;
	goto l__0B55;
l__0B55:
	emu_pop(&emu_si);
	emu_pop(&emu_es);
	emu_pop(&emu_dx);
	emu_pop(&emu_di);
	emu_pop(&emu_cx);
	emu_pop(&emu_bx);
	emu_pop(&emu_bp);
	emu_pop(&emu_ax);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__22A6_0A0D_0002_61BE()
 *
 * @name f__22A6_0A0D_0002_61BE
 * @implements 22A6:0A0D:0002:61BE ()
 *
 * Called From: 22A6:09D4:0011:C80B
 * Called From: 22A6:09E0:000C:03FA
 */
void f__22A6_0A0D_0002_61BE()
{
l__0A0D:
	emu_clc();

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__22A6_0A0F_0008_6943()
 *
 * @name f__22A6_0A0F_0008_6943
 * @implements 22A6:0A0F:0008:6943 ()
 * @implements 22A6:0A17:0002:21BE
 *
 * Called From: 22A6:09D4:0011:C80B
 * Called From: 22A6:09E0:000C:03FA
 */
void f__22A6_0A0F_0008_6943()
{
l__0A0F:
	emu_si = emu_get_memory16(emu_cs, 0x00, 0x6A);
	emu_push(0x0A17); f__22A6_0A2D_0019_EA06();
l__0A17:
	emu_stc();

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__22A6_0A19_000E_92F3()
 *
 * @name f__22A6_0A19_000E_92F3
 * @implements 22A6:0A19:000E:92F3 ()
 * @implements 22A6:0A27:0006:902A
 *
 * Called From: 22A6:09D4:0011:C80B
 * Called From: 22A6:09E0:000C:03FA
 */
void f__22A6_0A19_000E_92F3()
{
l__0A19:
	emu_si = emu_get_memory16(emu_cs, 0x00, 0x6E);
	emu_negw(&emu_si, emu_si);
	emu_negw(&emu_bx, emu_bx);
	emu_negw(&emu_dx, emu_dx);
	emu_push(0x0A27); f__22A6_0A2D_0019_EA06();
l__0A27:
	emu_negw(&emu_bx, emu_bx);
	emu_negw(&emu_dx, emu_dx);
	emu_stc();

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__22A6_0A2D_0019_EA06()
 *
 * @name f__22A6_0A2D_0019_EA06
 * @implements 22A6:0A2D:0019:EA06 ()
 *
 * Called From: 22A6:0A14:0008:6943
 * Called From: 22A6:0A24:000E:92F3
 */
void f__22A6_0A2D_0019_EA06()
{
l__0A2D:
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_bp = emu_dx;
	emu_subw(&emu_bp, emu_bx);
	emu_negw(&emu_ax, emu_ax);
	emu_addw(&emu_ax, emu_cx);
	emu_dx = emu_si;
	emu_subw(&emu_dx, emu_bx);
	emu_imuluw(&emu_ax, emu_dx);
	emu_idivw(&emu_ax, emu_bp);
	emu_pop(&emu_dx);
	emu_addw(&emu_ax, emu_dx);
	emu_pop(&emu_dx);
	emu_bx = emu_si;

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__22A6_0A46_0008_6953()
 *
 * @name f__22A6_0A46_0008_6953
 * @implements 22A6:0A46:0008:6953 ()
 * @implements 22A6:0A4E:0002:21BE
 *
 * Called From: 22A6:09D4:0011:C80B
 * Called From: 22A6:09E0:000C:03FA
 */
void f__22A6_0A46_0008_6953()
{
l__0A46:
	emu_si = emu_get_memory16(emu_cs, 0x00, 0x68);
	emu_push(0x0A4E); f__22A6_0A64_0015_2F31();
l__0A4E:
	emu_stc();

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__22A6_0A50_000E_9CF3()
 *
 * @name f__22A6_0A50_000E_9CF3
 * @implements 22A6:0A50:000E:9CF3 ()
 * @implements 22A6:0A5E:0006:9052
 *
 * Called From: 22A6:09D4:0011:C80B
 * Called From: 22A6:09E0:000C:03FA
 */
void f__22A6_0A50_000E_9CF3()
{
l__0A50:
	emu_si = emu_get_memory16(emu_cs, 0x00, 0x6C);
	emu_negw(&emu_ax, emu_ax);
	emu_negw(&emu_cx, emu_cx);
	emu_negw(&emu_si, emu_si);
	emu_push(0x0A5E); f__22A6_0A64_0015_2F31();
l__0A5E:
	emu_negw(&emu_ax, emu_ax);
	emu_negw(&emu_cx, emu_cx);
	emu_stc();

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__22A6_0A64_0015_2F31()
 *
 * @name f__22A6_0A64_0015_2F31
 * @implements 22A6:0A64:0015:2F31 ()
 *
 * Called From: 22A6:0A4B:0008:6953
 * Called From: 22A6:0A5B:000E:9CF3
 */
void f__22A6_0A64_0015_2F31()
{
l__0A64:
	emu_push(emu_dx);
	emu_bp = emu_cx;
	emu_subw(&emu_bp, emu_ax);
	emu_subw(&emu_dx, emu_bx);
	emu_negw(&emu_ax, emu_ax);
	emu_addw(&emu_ax, emu_si);
	emu_imuluw(&emu_ax, emu_dx);
	emu_idivw(&emu_ax, emu_bp);
	emu_addw(&emu_bx, emu_ax);
	emu_pop(&emu_dx);
	emu_ax = emu_si;

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__22A6_0A79_002B_D1F0()
 *
 * @name f__22A6_0A79_002B_D1F0
 * @implements 22A6:0A79:002B:D1F0 ()
 * @implements 22A6:0A85:001F:681A
 * @implements 22A6:0A8F:0015:D70B
 * @implements 22A6:0A99:000B:1295
 * @implements 22A6:0AA3:0001:6180
 *
 * Called From: 22A6:09BD:0003:5D2E
 * Called From: 22A6:09BD:004B:1096
 * Called From: 22A6:09C5:0008:4176
 */
void f__22A6_0A79_002B_D1F0()
{
l__0A79:
	emu_xorw(&emu_si, emu_si);
	emu_cmpw(&emu_bx, emu_get_memory16(emu_cs, 0x00, 0x6A));
	if ((int16)emu_bx < (int16)emu_get_memory16(emu_cs, 0x00, 0x6A)) {
		emu_orw(&emu_si, 0x1);
	}
l__0A85:
	emu_cmpw(&emu_bx, emu_get_memory16(emu_cs, 0x00, 0x6E));
	if ((int16)emu_bx > (int16)emu_get_memory16(emu_cs, 0x00, 0x6E)) {
		emu_orw(&emu_si, 0x2);
	}
l__0A8F:
	emu_cmpw(&emu_ax, emu_get_memory16(emu_cs, 0x00, 0x68));
	if ((int16)emu_ax < (int16)emu_get_memory16(emu_cs, 0x00, 0x68)) {
		emu_orw(&emu_si, 0x4);
	}
l__0A99:
	emu_cmpw(&emu_ax, emu_get_memory16(emu_cs, 0x00, 0x6C));
	if ((int16)emu_ax > (int16)emu_get_memory16(emu_cs, 0x00, 0x6C)) {
		emu_orw(&emu_si, 0x8);
	}
l__0AA3:

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__22A6_0B60_006A_2F61()
 *
 * @name f__22A6_0B60_006A_2F61
 * @implements 22A6:0B60:006A:2F61 ()
 * @implements 22A6:0BA1:0029:FCB0
 * @implements 22A6:0BAF:001B:63E6
 * @implements 22A6:0BCA:000C:D909
 * @implements 22A6:0BDC:0006:5333
 * @implements 22A6:0BE2:0002:FD3A
 * @implements 22A6:0BE4:0002:FC3A
 * @implements 22A6:0C5E:000A:2DE6
 *
 * Called From: 07D4:0575:0031:9C05
 * Called From: 07D4:059A:0025:B028
 * Called From: B4A2:0A06:0018:9C56
 */
void f__22A6_0B60_006A_2F61()
{
l__0B60:
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
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0xC);
	emu_andw(&emu_ax, 0xF);
	emu_shlw(&emu_ax, 0x1);
	emu_shlw(&emu_ax, 0x1);
	emu_shlw(&emu_ax, 0x1);
	emu_shlw(&emu_ax, 0x1);
	emu_get_memory8(emu_cs, 0x00, 0xC68) = emu_al;
	emu_lfp(&emu_ds, &emu_si, &emu_get_memory16(emu_cs, 0x00, 0x31F));
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_addw(&emu_si, emu_ax);
	emu_lodsb(emu_ds);
	emu_xorb(&emu_ah, emu_ah);
	emu_cx = 0x4;
	emu_shlw(&emu_ax, emu_cl);
	emu_lfp(&emu_ds, &emu_si, &emu_get_memory16(emu_cs, 0x00, 0x31B));
	emu_addw(&emu_si, emu_ax);
	emu_ax = emu_cs;
	emu_es = emu_ax;
	emu_di = 0x329;
	emu_cx = 0x10;
l__0BA1:
	emu_lodsb(emu_ds);
	emu_cmpb(&emu_al, 0x90);
	if ((int8)emu_al >= (int8)0x90) {
		emu_cmpb(&emu_al, 0xA0);
		if ((int8)emu_al <= (int8)0xA0) {
			emu_addb(&emu_al, emu_get_memory8(emu_cs, 0x00, 0xC68));
		}
	}
l__0BAF:
	emu_stosb();
	if (--emu_cx != 0) goto l__0BA1;
	emu_di = emu_get_memory16(emu_ss, emu_bp,  0xA);
	emu_shlw(&emu_di, 0x1);
	emu_di = emu_get_memory16(emu_cs, emu_di, 0x17D);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_shlw(&emu_ax, 0x1);
	emu_shlw(&emu_ax, 0x1);
	emu_shlw(&emu_ax, 0x1);
	emu_addw(&emu_di, emu_ax);
	emu_push(0x0BCA); f__22A6_0DF8_0022_5FD5();
l__0BCA:
	emu_es = emu_ax;
	emu_si = emu_get_memory16(emu_cs, 0x00, 0x33F);

	/* Jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_cs, emu_si, 0xBD6);
	switch (emu_ip) {
		case 0x0BDC: goto l__0BDC;
		case 0x0BE4: goto l__0BE4;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x22A6; emu_last_ip = 0x0BD1; emu_last_length = 0x000C; emu_last_crc = 0xD909;
			emu_call();
			return;
	}
l__0BDC:
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_push(0x0BE2); f__22A6_0BE6_0054_A98E();
l__0BE2:
	goto l__0C5E;
l__0BE4:
	goto l__0C5E;
l__0C5E:
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
 * Decompiled function f__22A6_0BE6_0054_A98E()
 *
 * @name f__22A6_0BE6_0054_A98E
 * @implements 22A6:0BE6:0054:A98E ()
 * @implements 22A6:0C11:0029:EC2F
 * @implements 22A6:0C14:0026:E7AD
 * @implements 22A6:0C3A:000A:CB24
 * @implements 22A6:0C44:000C:C238
 * @implements 22A6:0C50:000E:4E0C
 * @implements 22A6:0C56:0008:25F4
 *
 * Called From: 22A6:0BDF:0006:5333
 */
void f__22A6_0BE6_0054_A98E()
{
l__0BE6:
	emu_dx = emu_get_memory16(emu_cs, 0x00, 0x341);
	emu_mulw(&emu_ax, emu_dx);
	emu_si = emu_get_memory16(emu_cs, 0x00, 0x323);
	emu_addw(&emu_ax, emu_get_memory16(emu_cs, 0x00, 0x325));
	emu_ds = emu_ax;
	emu_dx = emu_get_memory16(emu_cs, 0x00, 0x33B);
	emu_dh = emu_dl;
	emu_cx = emu_get_memory16(emu_cs, 0x00, 0x33D);
	emu_ch = emu_cl;
	emu_bx = 0x329;
	emu_bp = emu_get_memory16(emu_cs, 0x00, 0x339);
	emu_cl = 0x4;
l__0C11:
	emu_push(emu_cx);
	emu_dl = emu_ch;
l__0C14:
	emu_xorb(&emu_ch, emu_ch);
	emu_lodsb(emu_ds);
	emu_ah = emu_al;
	emu_shrb(&emu_ah, emu_cl);
	emu_andb(&emu_al, 0xF);
	emu_al = emu_get_memory8(emu_cs, emu_bx + emu_al, 0x0);
	emu_addb(&emu_al, 0xFF);
	emu_rclb(&emu_ch, 0x1);
	emu_incb(&emu_al);
	emu_xchgb(&emu_al, &emu_ah);
	emu_al = emu_get_memory8(emu_cs, emu_bx + emu_al, 0x0);
	emu_subb(&emu_al, 0x1);
	emu_rclb(&emu_ch, 0x1);
	emu_incb(&emu_al);
	emu_shrb(&emu_ch, 0x1);
	if ((emu_flags.cf || emu_flags.zf)) goto l__0C3A;
	emu_stosw();
	emu_decb(&emu_dl);
	if (emu_dl != 0) goto l__0C14;
	goto l__0C56;
l__0C3A:
	if (emu_flags.cf) goto l__0C44;
	emu_stosb();
	emu_incw(&emu_di);
	emu_decb(&emu_dl);
	if (emu_dl != 0) goto l__0C14;
	goto l__0C56;
l__0C44:
	if (emu_flags.zf) goto l__0C50;
	emu_incw(&emu_di);
	emu_xchgb(&emu_al, &emu_ah);
	emu_stosb();
	emu_decb(&emu_dl);
	if (emu_dl != 0) goto l__0C14;
	goto l__0C56;
l__0C50:
	emu_incw(&emu_di);
	emu_incw(&emu_di);
	emu_decb(&emu_dl);
	if (emu_dl != 0) goto l__0C14;
l__0C56:
	emu_pop(&emu_cx);
	emu_addw(&emu_di, emu_bp);
	emu_decb(&emu_dh);
	if (emu_dh != 0) goto l__0C11;

	/* Return from this function */
	emu_pop(&emu_ip);
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
	emu_push(0x0CF5); f__22A6_0DF8_0022_5FD5();
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
	emu_push(0x0D46); f__22A6_0DF8_0022_5FD5();
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
 * Decompiled function f__22A6_0DF8_0022_5FD5()
 *
 * @name f__22A6_0DF8_0022_5FD5
 * @implements 22A6:0DF8:0022:5FD5 ()
 *
 * Called From: 22A6:079E:000B:9035
 * Called From: 22A6:0861:007A:8632
 * Called From: 22A6:0956:000C:EC7D
 * Called From: 22A6:0BC7:001B:63E6
 * Called From: 22A6:0BC7:0029:FCB0
 * Called From: 22A6:0CF2:0028:03E1
 * Called From: 22A6:0D43:0015:A4C3
 * Called From: 22A6:0E5C:002B:E39A
 * Called From: 22A6:0F9F:002C:45CC
 */
void f__22A6_0DF8_0022_5FD5()
{
l__0DF8:
	emu_push(emu_ds);
	emu_push(emu_si);
	emu_ds = emu_get_memory16(emu_cs, 0x00, 0x11);
	emu_si = emu_get_memory16(emu_cs, 0x00, 0xF);
	emu_lodsb(emu_ds);
	emu_andw(&emu_ax, 0x1E);
	emu_shlw(&emu_ax, 0x1);
	emu_ds = emu_get_memory16(emu_cs, 0x00, 0xD);
	emu_si = emu_get_memory16(emu_cs, 0x00, 0xB);
	emu_addw(&emu_si, emu_ax);
	emu_lodsw(emu_ds);
	emu_pop(&emu_si);
	emu_pop(&emu_ds);

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__22A6_0E1A_0008_F4AE()
 *
 * @name f__22A6_0E1A_0008_F4AE
 * @implements 22A6:0E1A:0008:F4AE ()
 * @implements 22A6:0E25:000F:30CD
 *
 * Called From: 22A6:04B1:000F:3B8F
 * Called From: 22A6:0EE2:000A:151A
 */
void f__22A6_0E1A_0008_F4AE()
{
l__0E1A:
	emu_andw(&emu_ax, 0x1E);
	emu_addw(&emu_ax, 0x1);
	goto l__0E25;
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
	emu_push(0x0E5F); f__22A6_0DF8_0022_5FD5();
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
 * Decompiled function f__22A6_0EDB_000A_151A()
 *
 * @name f__22A6_0EDB_000A_151A
 * @implements 22A6:0EDB:000A:151A ()
 * @implements 22A6:0EE5:0031:0519
 *
 * Called From: 1587:0353:0021:C368
 */
void f__22A6_0EDB_000A_151A()
{
l__0EDB:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_ax);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_push(0x0EE5); f__22A6_0E1A_0008_F4AE();
l__0EE5:
	emu_get_memory16(emu_cs, 0x00, 0x325) = emu_ax;
	emu_get_memory16(emu_cs, 0x00, 0x323) = 0x0;
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_get_memory16(emu_cs, 0x00, 0x31B) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0xA);
	emu_get_memory16(emu_cs, 0x00, 0x31D) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0xC);
	emu_get_memory16(emu_cs, 0x00, 0x31F) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0xE);
	emu_get_memory16(emu_cs, 0x00, 0x321) = emu_ax;
	emu_ax = 0xFFFF;
	emu_get_memory16(emu_cs, 0x00, 0x327) = emu_ax;
	emu_pop(&emu_ax);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__22A6_0F76_002C_45CC()
 *
 * @name f__22A6_0F76_002C_45CC
 * @implements 22A6:0F76:002C:45CC ()
 * @implements 22A6:0FA2:000C:C3E4
 * @implements 22A6:0FA8:0006:E2AB
 *
 * Called From: 07D4:18AB:001B:E447
 * Called From: 10E4:00EE:001B:A6F6
 * Called From: 10E4:0109:001B:D60B
 * Called From: B488:01B0:0011:94F5
 */
void f__22A6_0F76_002C_45CC()
{
l__0F76:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_ax);
	emu_push(emu_bx);
	emu_push(emu_es);
	emu_push(emu_di);
	emu_bx = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_orw(&emu_bx, emu_bx);
	if (emu_flags.sf) goto l__0FA8;
	emu_cmpw(&emu_bx, 0xC8);
	if ((int16)emu_bx >= (int16)0xC8) goto l__0FA8;
	emu_shlw(&emu_bx, 0x1);
	emu_di = emu_get_memory16(emu_cs, emu_bx, 0x17D);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_orw(&emu_ax, emu_ax);
	if (emu_flags.sf) goto l__0FA8;
	emu_cmpw(&emu_ax, 0x140);
	if ((int16)emu_ax >= (int16)0x140) goto l__0FA8;
	emu_addw(&emu_di, emu_ax);
	emu_push(0x0FA2); f__22A6_0DF8_0022_5FD5();
l__0FA2:
	emu_es = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0xA);
	emu_stosb();
l__0FA8:
	emu_pop(&emu_di);
	emu_pop(&emu_es);
	emu_pop(&emu_bx);
	emu_pop(&emu_ax);
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
 * Decompiled function f__22A6_1102_004C_B069()
 *
 * @name f__22A6_1102_004C_B069
 * @implements 22A6:1102:004C:B069 ()
 * @implements 22A6:113B:0013:B15D
 *
 * Called From: 259E:0036:001A:E253
 * Called From: 2BC2:007B:0024:8300
 * Called From: 2BC2:007B:0031:B02D
 */
void f__22A6_1102_004C_B069()
{
l__1102:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_ax);
	emu_push(emu_bx);
	emu_push(emu_cx);
	emu_push(emu_es);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_push(emu_ds);
	emu_cld();
	emu_si = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_ds = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_bx = emu_get_memory16(emu_ss, emu_bp,  0xA);
	emu_andw(&emu_bx, 0xF);
	emu_cx = emu_get_memory16(emu_ss, emu_bp,  0xC);
	emu_andw(&emu_cx, 0xF);
	emu_cmpw(&emu_cx, emu_bx);
	if ((int16)emu_cx < (int16)emu_bx) { /* Unresolved jump */ emu_ip = 0x1145; emu_last_cs = 0x22A6; emu_last_ip = 0x1121; emu_last_length = 0x004C; emu_last_crc = 0xB069; emu_call(); return; }
	emu_subw(&emu_cx, emu_bx);
	emu_incw(&emu_cx);
	emu_ax = emu_cs;
	emu_es = emu_ax;
	emu_di = 0x87;
	emu_addw(&emu_di, emu_bx);
	emu_shlw(&emu_bx, 0x1);
	emu_shlw(&emu_bx, 0x1);
	emu_shlw(&emu_bx, 0x1);
	emu_shlw(&emu_bx, 0x1);
	emu_addw(&emu_bx, 0x87);
l__113B:
	emu_lodsb(emu_ds);
	emu_stosb();
	emu_get_memory8(emu_es, emu_bx, 0x0) = emu_al;
	emu_addw(&emu_bx, 0x10);
	if (--emu_cx != 0) goto l__113B;
	emu_pop(&emu_ds);
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_pop(&emu_es);
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
 * Decompiled function f__22A6_1158_0069_1890()
 *
 * @name f__22A6_1158_0069_1890
 * @implements 22A6:1158:0069:1890 ()
 * @implements 22A6:11C1:003F:4994
 * @implements 22A6:11F2:000E:79F5
 *
 * Called From: 1587:0071:001D:BB2F
 */
void f__22A6_1158_0069_1890()
{
l__1158:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_ax);
	emu_push(emu_bx);
	emu_push(emu_cx);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0xA);
	emu_get_memory16(emu_cs, 0x00, 0x347) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0xC);
	emu_get_memory16(emu_cs, 0x00, 0x349) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_bx = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_cmpw(&emu_ax, emu_bx);
	if (emu_ax != emu_bx) goto l__11C1;
	emu_cmpw(&emu_ax, 0x3);
	if ((int16)emu_ax >= (int16)0x3) goto l__11C1;
	emu_get_memory16(emu_cs, 0x00, 0x34B) = 0x1;
	emu_get_memory16(emu_cs, 0x00, 0x34D) = 0x1;
	emu_cx = emu_ax;
	emu_andw(&emu_cx, 0x2);
	emu_get_memory16(emu_cs, 0x00, 0x33F) = emu_cx;
	emu_cx = emu_ax;
	emu_rcrw(&emu_cx, 0x1);
	emu_shlw(&emu_cx, 0x1);
	emu_rclw(&emu_cx, 0x1);
	emu_shlw(&emu_cx, 0x1);
	emu_get_memory16(emu_cs, 0x00, 0x341) = emu_cx;
	emu_cx = emu_ax;
	emu_shlw(&emu_cx, 0x1);
	emu_shlw(&emu_cx, 0x1);
	emu_get_memory16(emu_cs, 0x00, 0x33D) = emu_cx;
	emu_shlw(&emu_cx, 0x1);
	emu_get_memory16(emu_cs, 0x00, 0x33B) = emu_cx;
	emu_negw(&emu_cx, emu_cx);
	emu_addw(&emu_cx, 0x140);
	emu_get_memory16(emu_cs, 0x00, 0x339) = emu_cx;
	goto l__11F2;
l__11C1:
	emu_get_memory16(emu_cs, 0x00, 0x33F) = 0x4;
	emu_get_memory16(emu_cs, 0x00, 0x341) = 0x2;
	emu_get_memory16(emu_cs, 0x00, 0x33D) = 0x4;
	emu_get_memory16(emu_cs, 0x00, 0x33B) = 0x8;
	emu_get_memory16(emu_cs, 0x00, 0x339) = 0x138;
	emu_get_memory16(emu_cs, 0x00, 0x34B) = emu_ax;
	emu_get_memory16(emu_cs, 0x00, 0x34D) = emu_bx;
	emu_ax = 0x1;
	emu_bx = emu_ax;
l__11F2:
	emu_get_memory16(emu_cs, 0x00, 0x345) = emu_ax;
	emu_get_memory16(emu_cs, 0x00, 0x343) = emu_bx;
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

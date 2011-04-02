/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__B483_04CB_0015_EBB4()
 *
 * @name f__B483_04CB_0015_EBB4
 * @implements B483:04CB:0015:EBB4 ()
 * @implements B483:04E0:0005:FC31
 * @implements B483:04E5:002A:017F
 * @implements B483:04FF:0010:F7CB
 * @implements B483:050F:0004:3AFB
 * @implements B483:0513:002A:B6E7
 * @implements B483:0520:001D:06E8
 * @implements B483:052A:0013:6556
 * @implements B483:053D:0017:229B
 * @implements B483:0551:0003:9D0A
 * @implements B483:0554:0018:6809
 * @implements B483:056C:0016:DD45
 * @implements B483:0580:0002:FE3A
 * @implements B483:0582:0019:1A22
 * @implements B483:0599:0002:F1BA
 * @implements B483:059B:001D:06E8
 * @implements B483:05A5:0013:6556
 * @implements B483:05B8:0016:FB45
 * @implements B483:05CC:0002:D83A
 * @implements B483:05CE:0018:6C09
 * @implements B483:05E6:0016:E245
 * @implements B483:05FC:0002:C03A
 * @implements B483:05FE:000A:7F39
 * @implements B483:05FF:0009:6EB9
 * @implements B483:0608:0009:D48C
 * @implements B483:0611:000A:0138
 * @implements B483:061B:0005:7C05
 * @implements B483:0620:002A:4664
 * @implements B483:063A:0010:B769
 * @implements B483:064A:0004:3AFB
 * @implements B483:064E:002A:038C
 * @implements B483:0678:001F:A15F
 * @implements B483:067C:001B:D546
 * @implements B483:0697:0005:8F6E
 * @implements B483:06A1:000F:AB7C
 * @implements B483:06B0:000A:C6F5
 * @implements B483:06BA:0013:A3B8
 * @implements B483:06CA:0003:9DA6
 * @implements B483:06CD:002D:F0E8
 * @implements B483:06FA:0013:A308
 * @implements B483:070A:0003:9D16
 * @implements B483:070D:0003:DD15
 * @implements B483:0710:0024:6B66
 * @implements B483:0734:0021:C3B2
 * @implements B483:0737:001E:9FF4
 * @implements B483:0755:0005:806E
 * @implements B483:075F:0005:0C7F
 * @implements B483:0764:000A:C642
 * @implements B483:076E:0012:CFC6
 * @implements B483:077E:0002:F3BA
 * @implements B483:0780:001D:6D65
 * @implements B483:07AD:0002:DC3A
 * @implements B483:07AF:0026:1A33
 * @implements B483:07D5:0012:FC46
 * @implements B483:07E5:0002:C03A
 * @implements B483:07E7:000A:FF05
 * @implements B483:07E8:0009:EE85
 * @implements B483:07F1:000A:85B3
 * @implements B483:07F5:0006:F7CE
 *
 * Called From: 3483:0034:0005:0000
 */
void f__B483_04CB_0015_EBB4()
{
l__04CB:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x4);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_di = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x6D8F), 0x0);
	if (emu_get_memory16(emu_ds, 0x00, 0x6D8F) != 0x0) goto l__04E0;
	goto l__07F5;
l__04E0:
	emu_xorw(&emu_si, emu_si);
	goto l__05FF;
l__04E5:
	emu_ax = emu_si;
	emu_dx = 0x6;
	emu_imuluw(&emu_ax, emu_dx);
	emu_bx = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, emu_bx, 0xD5A));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x0);
	emu_ax = (int8)emu_al;
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ax;
	emu_cx = 0x5;
	emu_bx = 0x80F;
l__04FF:
	emu_ax = emu_get_memory16(emu_cs, emu_bx, 0x0);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_ax == emu_get_memory16(emu_ss, emu_bp, -0x2)) goto l__050F;
	emu_addw(&emu_bx, 0x2);
	if (--emu_cx != 0) goto l__04FF;
	goto l__05FC;
l__050F:

	/* Jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_cs, emu_bx, 0xA);
	switch (emu_ip) {
		case 0x0513: goto l__0513;
		case 0x0554: goto l__0554;
		case 0x0582: goto l__0582;
		case 0x059B: goto l__059B;
		case 0x05CE: goto l__05CE;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0xB483; emu_last_ip = 0x050F; emu_last_length = 0x0004; emu_last_crc = 0x3AFB;
			emu_call();
			return;
	}
l__0513:
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x37B6), 0x0);
	if (emu_get_memory16(emu_ds, 0x00, 0x37B6) == 0x0) {
		emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x1150), emu_di);
		if (emu_get_memory16(emu_ds, 0x00, 0x1150) != emu_di) goto l__052A;
	}
l__0520:
	emu_cmpw(&emu_di, 0xFFFF);
	if (emu_di != 0xFFFF) {
		emu_cmpw(&emu_di, 0xFFFE);
		if (emu_di != 0xFFFE) goto l__0551;
	}
l__052A:
	emu_bx = emu_si;
	emu_cl = 0x2;
	emu_shlw(&emu_bx, emu_cl);
	emu_push(emu_get_memory16(emu_ds, emu_bx, 0x3E56));
	emu_push(emu_get_memory16(emu_ds, emu_bx, 0x3E54));
	emu_push(emu_cs); emu_push(0x053D); emu_cs = 0x1DD7; emu_Tools_Free_IfNotNull();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3483) { overlay(0x3483, 1); }
l__053D:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_bx = emu_si;
	emu_cl = 0x2;
	emu_shlw(&emu_bx, emu_cl);
	emu_get_memory16(emu_ds, emu_bx, 0x3E56) = 0x0;
	emu_get_memory16(emu_ds, emu_bx, 0x3E54) = 0x0;
l__0551:
	goto l__05FE;
l__0554:
	emu_cmpw(&emu_di, 0xFFFF);
	if (emu_di == 0xFFFF) goto l__0580;
	emu_bx = emu_si;
	emu_cl = 0x2;
	emu_shlw(&emu_bx, emu_cl);
	emu_push(emu_get_memory16(emu_ds, emu_bx, 0x3E56));
	emu_push(emu_get_memory16(emu_ds, emu_bx, 0x3E54));
	emu_push(emu_cs); emu_push(0x056C); emu_cs = 0x1DD7; emu_Tools_Free_IfNotNull();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3483) { overlay(0x3483, 1); }
l__056C:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_bx = emu_si;
	emu_cl = 0x2;
	emu_shlw(&emu_bx, emu_cl);
	emu_get_memory16(emu_ds, emu_bx, 0x3E56) = 0x0;
	emu_get_memory16(emu_ds, emu_bx, 0x3E54) = 0x0;
l__0580:
	goto l__05FE;
l__0582:
	emu_cmpw(&emu_di, 0xFFFF);
	if (emu_di != 0xFFFF) {
		emu_bx = emu_si;
		emu_cl = 0x2;
		emu_shlw(&emu_bx, emu_cl);
		emu_get_memory16(emu_ds, emu_bx, 0x3E56) = 0x0;
		emu_get_memory16(emu_ds, emu_bx, 0x3E54) = 0x0;
	}
l__0599:
	goto l__05FE;
l__059B:
	emu_cmpw(&emu_di, 0xFFFF);
	if (emu_di != 0xFFFF) {
		emu_cmpw(&emu_di, 0xFFFE);
		if (emu_di != 0xFFFE) goto l__05CC;
	}
l__05A5:
	emu_bx = emu_si;
	emu_cl = 0x2;
	emu_shlw(&emu_bx, emu_cl);
	emu_push(emu_get_memory16(emu_ds, emu_bx, 0x3E56));
	emu_push(emu_get_memory16(emu_ds, emu_bx, 0x3E54));
	emu_push(emu_cs); emu_push(0x05B8); emu_cs = 0x1DD7; emu_Tools_Free_IfNotNull();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3483) { overlay(0x3483, 1); }
l__05B8:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_bx = emu_si;
	emu_cl = 0x2;
	emu_shlw(&emu_bx, emu_cl);
	emu_get_memory16(emu_ds, emu_bx, 0x3E56) = 0x0;
	emu_get_memory16(emu_ds, emu_bx, 0x3E54) = 0x0;
l__05CC:
	goto l__05FE;
l__05CE:
	emu_cmpw(&emu_di, 0xFFFE);
	if (emu_di == 0xFFFE) goto l__05FA;
	emu_bx = emu_si;
	emu_cl = 0x2;
	emu_shlw(&emu_bx, emu_cl);
	emu_push(emu_get_memory16(emu_ds, emu_bx, 0x3E56));
	emu_push(emu_get_memory16(emu_ds, emu_bx, 0x3E54));
	emu_push(emu_cs); emu_push(0x05E6); emu_cs = 0x1DD7; emu_Tools_Free_IfNotNull();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3483) { overlay(0x3483, 1); }
l__05E6:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_bx = emu_si;
	emu_cl = 0x2;
	emu_shlw(&emu_bx, emu_cl);
	emu_get_memory16(emu_ds, emu_bx, 0x3E56) = 0x0;
	emu_get_memory16(emu_ds, emu_bx, 0x3E54) = 0x0;
l__05FA:
	goto l__05FE;
l__05FC:
	goto l__05FE;
l__05FE:
	emu_incw(&emu_si);
l__05FF:
	emu_cmpw(&emu_si, 0x83);
	if ((int16)emu_si >= (int16)0x83) goto l__0608;
	goto l__04E5;
l__0608:
	emu_cmpw(&emu_di, emu_get_memory16(emu_ds, 0x00, 0x1150));
	if (emu_di != emu_get_memory16(emu_ds, 0x00, 0x1150)) goto l__0611;
	goto l__07F5;
l__0611:
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x6D8F), 0x0);
	if (emu_get_memory16(emu_ds, 0x00, 0x6D8F) != 0x0) goto l__061B;
	goto l__07F1;
l__061B:
	emu_xorw(&emu_si, emu_si);
	goto l__07E8;
l__0620:
	emu_ax = emu_si;
	emu_dx = 0x6;
	emu_imuluw(&emu_ax, emu_dx);
	emu_bx = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, emu_bx, 0xD5A));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x0);
	emu_ax = (int8)emu_al;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_cx = 0x5;
	emu_bx = 0x7FB;
l__063A:
	emu_ax = emu_get_memory16(emu_cs, emu_bx, 0x0);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x4));
	if (emu_ax == emu_get_memory16(emu_ss, emu_bp, -0x4)) goto l__064A;
	emu_addw(&emu_bx, 0x2);
	if (--emu_cx != 0) goto l__063A;
	goto l__07AF;
l__064A:

	/* Jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_cs, emu_bx, 0xA);
	switch (emu_ip) {
		case 0x064E: goto l__064E;
		case 0x06CD: goto l__06CD;
		case 0x070D: goto l__070D;
		case 0x0710: goto l__0710;
		case 0x0780: goto l__0780;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0xB483; emu_last_ip = 0x064A; emu_last_length = 0x0004; emu_last_crc = 0x3AFB;
			emu_call();
			return;
	}
l__064E:
	emu_bx = emu_si;
	emu_cl = 0x2;
	emu_shlw(&emu_bx, emu_cl);
	emu_ax = emu_get_memory16(emu_ds, emu_bx, 0x3E54);
	emu_orw(&emu_ax, emu_get_memory16(emu_ds, emu_bx, 0x3E56));
	if (emu_ax != 0) goto l__06CA;
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x1150), emu_di);
	if (emu_get_memory16(emu_ds, 0x00, 0x1150) == emu_di) goto l__06CA;
	emu_cmpw(&emu_di, 0xFFFF);
	if (emu_di == 0xFFFF) goto l__06CA;
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x37B6);
	emu_cmpw(&emu_ax, 0x1);
	if (emu_ax == 0x1) goto l__0678;
	emu_cmpw(&emu_ax, 0x2);
	if (emu_ax == 0x2) goto l__069C;
	goto l__06A1;
l__0678:
	emu_ax = 0x46;
l__067B:
	emu_push(emu_ax);
l__067C:
	emu_ax = emu_si;
	emu_dx = 0x6;
	emu_imuluw(&emu_ax, emu_dx);
	emu_bx = emu_ax;
	emu_push(emu_get_memory16(emu_ds, emu_bx, 0xD5C));
	emu_push(emu_get_memory16(emu_ds, emu_bx, 0xD5A));
	emu_push(emu_ds);
	emu_ax = 0x9939;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0697); emu_cs = 0x01F7; emu_String_sprintf();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3483) { overlay(0x3483, 1); }
l__0697:
	emu_addw(&emu_sp, 0xA);
	goto l__06B0;
l__069C:
	emu_ax = 0x47;
	goto l__067B;
l__06A1:
	emu_ax = emu_di;
	emu_dx = 0x1E;
	emu_imuluw(&emu_ax, emu_dx);
	emu_bx = emu_ax;
	emu_push(emu_get_memory16(emu_ds, emu_bx, 0x3808));
	goto l__067C;
l__06B0:
	emu_push(emu_ds);
	emu_ax = 0x9939;
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x06BA); emu_Unknown_B483_0823();
l__06BA:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_bx = emu_si;
	emu_cl = 0x2;
	emu_shlw(&emu_bx, emu_cl);
	emu_get_memory16(emu_ds, emu_bx, 0x3E56) = emu_dx;
	emu_get_memory16(emu_ds, emu_bx, 0x3E54) = emu_ax;
l__06CA:
	goto l__07E7;
l__06CD:
	emu_cmpw(&emu_di, 0xFFFF);
	if (emu_di != 0xFFFF) goto l__070A;
	emu_bx = emu_si;
	emu_cl = 0x2;
	emu_shlw(&emu_bx, emu_cl);
	emu_ax = emu_get_memory16(emu_ds, emu_bx, 0x3E54);
	emu_orw(&emu_ax, emu_get_memory16(emu_ds, emu_bx, 0x3E56));
	if (emu_ax != 0) goto l__070A;
	emu_ax = emu_si;
	emu_dx = 0x6;
	emu_imuluw(&emu_ax, emu_dx);
	emu_bx = emu_ax;
	emu_ax = emu_get_memory16(emu_ds, emu_bx, 0xD5A);
	emu_incw(&emu_ax);
	emu_push(emu_get_memory16(emu_ds, emu_bx, 0xD5C));
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x06FA); emu_Unknown_B483_0823();
l__06FA:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_bx = emu_si;
	emu_cl = 0x2;
	emu_shlw(&emu_bx, emu_cl);
	emu_get_memory16(emu_ds, emu_bx, 0x3E56) = emu_dx;
	emu_get_memory16(emu_ds, emu_bx, 0x3E54) = emu_ax;
l__070A:
	goto l__07E7;
l__070D:
	goto l__07E7;
l__0710:
	emu_cmpw(&emu_di, 0xFFFF);
	if (emu_di == 0xFFFF) goto l__077E;
	emu_bx = emu_si;
	emu_cl = 0x2;
	emu_shlw(&emu_bx, emu_cl);
	emu_ax = emu_get_memory16(emu_ds, emu_bx, 0x3E54);
	emu_orw(&emu_ax, emu_get_memory16(emu_ds, emu_bx, 0x3E56));
	if (emu_ax != 0) goto l__077E;
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x37B6);
	emu_cmpw(&emu_ax, 0x1);
	if (emu_ax == 0x1) goto l__0734;
	emu_cmpw(&emu_ax, 0x2);
	if (emu_ax == 0x2) goto l__075A;
	goto l__075F;
l__0734:
	emu_ax = 0x46;
l__0737:
	emu_push(emu_ax);
	emu_ax = emu_si;
	emu_dx = 0x6;
	emu_imuluw(&emu_ax, emu_dx);
	emu_bx = emu_ax;
	emu_ax = emu_get_memory16(emu_ds, emu_bx, 0xD5A);
	emu_incw(&emu_ax);
	emu_push(emu_get_memory16(emu_ds, emu_bx, 0xD5C));
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x9939;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0755); emu_cs = 0x01F7; emu_String_sprintf();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3483) { overlay(0x3483, 1); }
l__0755:
	emu_addw(&emu_sp, 0xA);
	goto l__0764;
l__075A:
	emu_ax = 0x47;
	goto l__0737;
l__075F:
	emu_ax = 0x5A;
	goto l__0737;
l__0764:
	emu_push(emu_ds);
	emu_ax = 0x9939;
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x076E); emu_Unknown_B483_0823();
l__076E:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_bx = emu_si;
	emu_cl = 0x2;
	emu_shlw(&emu_bx, emu_cl);
	emu_get_memory16(emu_ds, emu_bx, 0x3E56) = emu_dx;
	emu_get_memory16(emu_ds, emu_bx, 0x3E54) = emu_ax;
l__077E:
	goto l__07E7;
l__0780:
	emu_cmpw(&emu_di, 0xFFFE);
	if (emu_di != 0xFFFE) goto l__07AD;
	emu_ax = emu_si;
	emu_dx = 0x6;
	emu_imuluw(&emu_ax, emu_dx);
	emu_bx = emu_ax;
	emu_ax = emu_get_memory16(emu_ds, emu_bx, 0xD5A);
	emu_incw(&emu_ax);
	emu_push(emu_get_memory16(emu_ds, emu_bx, 0xD5C));
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x079D); emu_Unknown_B483_0823();
	emu_sp += 4;
	emu_bx = emu_si;
	emu_cl = 0x2;
	emu_shlw(&emu_bx, emu_cl);
	emu_get_memory16(emu_ds, emu_bx, 0x3E56) = emu_dx;
	emu_get_memory16(emu_ds, emu_bx, 0x3E54) = emu_ax;
l__07AD:
	goto l__07E7;
l__07AF:
	emu_bx = emu_si;
	emu_cl = 0x2;
	emu_shlw(&emu_bx, emu_cl);
	emu_ax = emu_get_memory16(emu_ds, emu_bx, 0x3E54);
	emu_orw(&emu_ax, emu_get_memory16(emu_ds, emu_bx, 0x3E56));
	if (emu_ax != 0) goto l__07E5;
	emu_ax = emu_si;
	emu_dx = 0x6;
	emu_imuluw(&emu_ax, emu_dx);
	emu_bx = emu_ax;
	emu_push(emu_get_memory16(emu_ds, emu_bx, 0xD5C));
	emu_push(emu_get_memory16(emu_ds, emu_bx, 0xD5A));
	emu_push(emu_cs);
	emu_push(0x07D5); emu_Unknown_B483_0823();
l__07D5:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_bx = emu_si;
	emu_cl = 0x2;
	emu_shlw(&emu_bx, emu_cl);
	emu_get_memory16(emu_ds, emu_bx, 0x3E56) = emu_dx;
	emu_get_memory16(emu_ds, emu_bx, 0x3E54) = emu_ax;
l__07E5:
	goto l__07E7;
l__07E7:
	emu_incw(&emu_si);
l__07E8:
	emu_cmpw(&emu_si, 0x83);
	if ((int16)emu_si >= (int16)0x83) goto l__07F1;
	goto l__0620;
l__07F1:
	emu_get_memory16(emu_ds, 0x00, 0x1150) = emu_di;
l__07F5:
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

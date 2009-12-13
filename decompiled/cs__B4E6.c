/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__B4E6_0000_001A_C6C7()
 *
 * @name f__B4E6_0000_001A_C6C7
 * @implements B4E6:0000:001A:C6C7 ()
 * @implements B4E6:0018:0002:EABA
 * @implements B4E6:001A:0007:CF45
 * @implements B4E6:0021:0010:9BFD
 * @implements B4E6:0031:0018:5CEE
 * @implements B4E6:0040:0009:66CE
 * @implements B4E6:0043:0006:A14D
 * @implements B4E6:0049:0013:7B0C
 * @implements B4E6:004C:0010:9BFD
 * @implements B4E6:005C:0013:9211
 * @implements B4E6:006F:0005:8BCF
 *
 * Called From: B4E6:014F:004A:C989
 * Called From: B4E6:0174:000C:F796
 * Called From: B4E6:03B1:000E:716E
 * Called From: B4E6:041D:0010:2276
 * Called From: B4E6:0468:0011:6F94
 * Called From: B4E6:04BF:0016:5921
 */
void f__B4E6_0000_001A_C6C7()
{
l__0000:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x2);
	emu_push(emu_si);
	emu_si = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp,  0xA), 0xFFFF);
	if (emu_get_memory16(emu_ss, emu_bp,  0xA) != 0xFFFF) goto l__001A;
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp,  0x8), 0xFFFF);
	if (emu_get_memory16(emu_ss, emu_bp,  0x8) != 0xFFFF) goto l__001A;
	emu_ax = emu_si;
l__0018:
	goto l__006F;
l__001A:
	emu_get_memory16(emu_ss, emu_bp, -0x2) = 0x0;
	goto l__0043;
l__0021:
	emu_cl = emu_get_memory8(emu_ss, emu_bp, -0x2);
	emu_addb(&emu_cl, emu_get_memory8(emu_ss, emu_bp,  0xC));
	emu_xorw(&emu_dx, emu_dx);
	emu_ax = 0x1;
	emu_push(emu_cs); emu_push(0x0031); emu_cs = 0x01F7; emu_Tools_Shld();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E6) { overlay(0x34E6, 1); }
l__0031:
	emu_bx = emu_get_memory16(emu_ss, emu_bp,  0xA);
	emu_cx = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_andw(&emu_cx, emu_ax);
	emu_andw(&emu_bx, emu_dx);
	emu_orw(&emu_cx, emu_bx);
	if (emu_cx != 0) {
		emu_decw(&emu_si);
	}
l__0040:
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x2));
l__0043:
	emu_orw(&emu_si, emu_si);
	if (emu_si != 0) goto l__0021;
	goto l__004C;
l__0049:
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x2));
l__004C:
	emu_cl = emu_get_memory8(emu_ss, emu_bp, -0x2);
	emu_addb(&emu_cl, emu_get_memory8(emu_ss, emu_bp,  0xC));
	emu_xorw(&emu_dx, emu_dx);
	emu_ax = 0x1;
	emu_push(emu_cs); emu_push(0x005C); emu_cs = 0x01F7; emu_Tools_Shld();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E6) { overlay(0x34E6, 1); }
l__005C:
	emu_bx = emu_get_memory16(emu_ss, emu_bp,  0xA);
	emu_cx = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_andw(&emu_cx, emu_ax);
	emu_andw(&emu_bx, emu_dx);
	emu_orw(&emu_cx, emu_bx);
	if (emu_cx == 0) goto l__0049;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x2);
	goto l__0018;
l__006F:
	emu_pop(&emu_si);
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B4E6_0074_000C_3554()
 *
 * @name f__B4E6_0074_000C_3554
 * @implements B4E6:0074:000C:3554 ()
 * @implements B4E6:0080:0005:6168
 * @implements B4E6:0085:0019:6335
 * @implements B4E6:009E:000C:3F1A
 * @implements B4E6:00AA:001A:756B
 * @implements B4E6:00C4:0008:3BE5
 * @implements B4E6:00CC:0009:B4B2
 * @implements B4E6:00D5:000B:64BF
 * @implements B4E6:00D7:0009:5534
 *
 * Called From: B4E6:04FB:0032:8EC7
 */
void f__B4E6_0074_000C_3554()
{
l__0074:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_si);
	emu_push(emu_di);
	emu_di = emu_get_memory16(emu_ss, emu_bp,  0xA);
	emu_xorw(&emu_si, emu_si);
	goto l__00D7;
l__0080:
	emu_push(emu_cs); emu_push(0x0085); emu_cs = 0x2B6C; f__2B6C_0137_0020_C73F();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E6) { overlay(0x34E6, 1); }
l__0085:
	emu_ax = 0x22;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x12));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x10));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_di);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x009E); emu_cs = 0x10E4; emu_GUI_DrawText_Wrapper();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E6) { overlay(0x34E6, 1); }
l__009E:
	emu_addw(&emu_sp, 0xE);
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x00AA); emu_cs = 0x24FD; f__24FD_000A_000B_2043();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E6) { overlay(0x34E6, 1); }
l__00AA:
	emu_pop(&emu_cx);
	emu_ax = 0x22;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x12));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_di);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x00C4); emu_cs = 0x10E4; emu_GUI_DrawText_Wrapper();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E6) { overlay(0x34E6, 1); }
l__00C4:
	emu_addw(&emu_sp, 0xE);
	emu_push(emu_cs); emu_push(0x00CC); emu_cs = 0x2B6C; f__2B6C_0169_001E_6939();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E6) { overlay(0x34E6, 1); }
l__00CC:
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x00D5); emu_cs = 0x24FD; f__24FD_000A_000B_2043();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E6) { overlay(0x34E6, 1); }
l__00D5:
	emu_pop(&emu_cx);
	emu_incw(&emu_si);
l__00D7:
	emu_cmpw(&emu_si, 0x3);
	if ((int16)emu_si < (int16)0x3) goto l__0080;
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B4E6_00E0_0022_452E()
 *
 * @name f__B4E6_00E0_0022_452E
 * @implements B4E6:00E0:0022:452E ()
 * @implements B4E6:0102:0004:E839
 * @implements B4E6:0104:0002:C03A
 * @implements B4E6:0106:0002:2597
 *
 * Called From: B4E6:0311:0074:F135
 * Called From: B4E6:0311:007A:6EC9
 * Called From: B4E6:0383:0018:2374
 */
void f__B4E6_00E0_0022_452E()
{
l__00E0:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_dx = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_bx = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_cmpw(&emu_dx, emu_get_memory16(emu_ss, emu_bp,  0xA));
	if ((int16)emu_dx < (int16)emu_get_memory16(emu_ss, emu_bp,  0xA)) goto l__0102;
	emu_cmpw(&emu_dx, emu_get_memory16(emu_ss, emu_bp,  0xE));
	if ((int16)emu_dx > (int16)emu_get_memory16(emu_ss, emu_bp,  0xE)) goto l__0102;
	emu_cmpw(&emu_bx, emu_get_memory16(emu_ss, emu_bp,  0xC));
	if ((int16)emu_bx < (int16)emu_get_memory16(emu_ss, emu_bp,  0xC)) goto l__0102;
	emu_cmpw(&emu_bx, emu_get_memory16(emu_ss, emu_bp,  0x10));
	if ((int16)emu_bx > (int16)emu_get_memory16(emu_ss, emu_bp,  0x10)) goto l__0102;
	emu_ax = 0x1;
	goto l__0104;
l__0102:
	emu_xorw(&emu_ax, emu_ax);
l__0104:
	goto l__0106;
l__0106:
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B4E6_0108_004A_C989()
 *
 * @name f__B4E6_0108_004A_C989
 * @implements B4E6:0108:004A:C989 ()
 * @implements B4E6:0152:0015:1CE9
 * @implements B4E6:0167:0004:D3F9
 * @implements B4E6:016B:000C:F796
 * @implements B4E6:0177:003F:3C4C
 * @implements B4E6:01B1:0005:A47A
 * @implements B4E6:01B6:002B:FAB3
 * @implements B4E6:01B9:0028:FBE4
 * @implements B4E6:01E1:0014:DF38
 * @implements B4E6:01E5:0010:54B3
 * @implements B4E6:01F5:0005:E089
 * @implements B4E6:01FA:0006:F7CE
 *
 * Called From: 34E6:0025:0005:0000
 */
void f__B4E6_0108_004A_C989()
{
l__0108:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x10);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_di = emu_get_memory16(emu_ss, emu_bp,  0x10);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_cl = 0x4;
	emu_shlw(&emu_ax, emu_cl);
	emu_addw(&emu_ax, 0x41B2);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ds;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x992B);
	emu_addw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x2));
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x992D);
	emu_addw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_cl = 0x3;
	emu_shlw(&emu_ax, emu_cl);
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_ax;
	emu_push(emu_di);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x8));
	emu_push(emu_cs);
	emu_push(0x0152); f__B4E6_0000_001A_C6C7();
l__0152:
	emu_addw(&emu_sp, 0x8);
	emu_get_memory16(emu_ss, emu_bp, -0xC) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x6);
	emu_get_memory16(emu_ss, emu_bp, -0xE) = emu_ax;
	emu_push(emu_cs); emu_push(0x0167); emu_cs = 0x2B6C; f__2B6C_0137_0020_C73F();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E6) { overlay(0x34E6, 1); }
l__0167:
	emu_xorw(&emu_si, emu_si);
	goto l__01E5;
l__016B:
	emu_push(emu_di);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_si);
	emu_push(emu_cs);
	emu_push(0x0177); f__B4E6_0000_001A_C6C7();
l__0177:
	emu_addw(&emu_sp, 0x8);
	emu_get_memory16(emu_ss, emu_bp, -0xA) = emu_ax;
	emu_al = emu_get_memory8(emu_ds, 0x00, 0x6C71);
	emu_ax = (int8)emu_al;
	emu_imuluw(&emu_ax, emu_si);
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x6);
	emu_addw(&emu_dx, emu_ax);
	emu_ax = emu_si;
	emu_push(emu_dx);
	emu_imuluw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x12));
	emu_pop(&emu_dx);
	emu_addw(&emu_dx, emu_ax);
	emu_get_memory16(emu_ss, emu_bp, -0x10) = emu_dx;
	emu_ax = 0x22;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0xA);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0xC));
	if (emu_ax != emu_get_memory16(emu_ss, emu_bp, -0xC)) goto l__01B6;
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x25E6), 0x0);
	if (emu_get_memory16(emu_ds, 0x00, 0x25E6) == 0x0) {
		emu_cmpb(&emu_get_memory8(emu_ds, 0x00, 0x7097), 0x0);
		if (emu_get_memory8(emu_ds, 0x00, 0x7097) == 0x0) goto l__01B6;
	}
l__01B1:
	emu_ax = 0x6;
	goto l__01B9;
l__01B6:
	emu_ax = 0x5;
l__01B9:
	emu_shlw(&emu_ax, 0x1);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_addw(&emu_bx, emu_ax);
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0xA);
	emu_cl = 0x2;
	emu_shlw(&emu_ax, emu_cl);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_addw(&emu_bx, emu_ax);
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x2));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_push(emu_cs); emu_push(0x01E1); emu_cs = 0x10E4; emu_GUI_DrawText_Wrapper();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E6) { overlay(0x34E6, 1); }
l__01E1:
	emu_addw(&emu_sp, 0xE);
	emu_incw(&emu_si);
l__01E5:
	emu_cmpw(&emu_si, emu_get_memory16(emu_ss, emu_bp, -0xE));
	if ((int16)emu_si < (int16)emu_get_memory16(emu_ss, emu_bp, -0xE)) goto l__016B;
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x12);
	emu_get_memory16(emu_ds, 0x00, 0x8052) = emu_ax;
	emu_push(emu_cs); emu_push(0x01F5); emu_cs = 0x2B6C; f__2B6C_0169_001E_6939();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E6) { overlay(0x34E6, 1); }
l__01F5:
	emu_push(emu_cs); emu_push(0x01FA); emu_cs = 0x29E8; emu_Input_History_Clear();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E6) { overlay(0x34E6, 1); }
l__01FA:
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
 * Decompiled function f__B4E6_0200_0091_FAEA()
 *
 * @name f__B4E6_0200_0091_FAEA
 * @implements B4E6:0200:0091:FAEA ()
 * @implements B4E6:0291:0009:0D8E
 * @implements B4E6:029A:007A:6EC9
 * @implements B4E6:02A0:0074:F135
 * @implements B4E6:0314:0035:7204
 * @implements B4E6:032E:001B:A3EF
 * @implements B4E6:033A:000F:4BEF
 * @implements B4E6:0349:0004:34FB
 * @implements B4E6:034D:000B:AD03
 * @implements B4E6:0355:0003:DD0A
 * @implements B4E6:0358:000B:4490
 * @implements B4E6:0360:0003:1D08
 * @implements B4E6:0363:0005:BC91
 * @implements B4E6:0368:0006:92B8
 * @implements B4E6:036E:0018:2374
 * @implements B4E6:0386:0015:B505
 * @implements B4E6:039B:0002:EF3A
 * @implements B4E6:039D:0005:8B75
 * @implements B4E6:03A2:0004:C9D9
 * @implements B4E6:03A6:000E:716E
 * @implements B4E6:03B4:0019:E3C0
 * @implements B4E6:03CD:000E:C8A0
 * @implements B4E6:03DB:0007:B6D2
 * @implements B4E6:03E2:000F:F6A3
 * @implements B4E6:03F1:0012:7C1A
 * @implements B4E6:03F2:0011:BC0B
 * @implements B4E6:03FB:0008:F6A8
 * @implements B4E6:0403:0008:D54F
 * @implements B4E6:040B:0005:6168
 * @implements B4E6:0410:0010:2276
 * @implements B4E6:0420:003A:EC1D
 * @implements B4E6:045A:0011:6F94
 * @implements B4E6:046B:0039:9AB5
 * @implements B4E6:04A4:0008:3BE5
 * @implements B4E6:04AC:0016:5921
 * @implements B4E6:04C2:000A:A8DF
 * @implements B4E6:04CC:0032:8EC7
 * @implements B4E6:04FE:0008:3BE5
 * @implements B4E6:0506:000F:1AAE
 * @implements B4E6:0509:000C:E950
 * @implements B4E6:0515:0006:F7CE
 *
 * Called From: 34E6:002A:0005:0000
 */
void f__B4E6_0200_0091_FAEA()
{
l__0200:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x26);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_cl = 0x4;
	emu_shlw(&emu_ax, emu_cl);
	emu_addw(&emu_ax, 0x41B2);
	emu_get_memory16(emu_ss, emu_bp, -0x22) = emu_ds;
	emu_get_memory16(emu_ss, emu_bp, -0x24) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x24));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x6);
	emu_decw(&emu_ax);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x24));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x8);
	emu_bx = emu_get_memory16(emu_ss, emu_bp, -0x2);
	emu_incw(&emu_bx);
	emu_cwd();
	emu_idivw(&emu_ax, emu_bx);
	emu_get_memory16(emu_ss, emu_bp, -0x20) = emu_dx;
	emu_ax = emu_dx;
	emu_si = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = 0xFFFF;
	emu_al = emu_get_memory8(emu_ds, 0x00, 0x6C71);
	emu_ax = (int8)emu_al;
	emu_addw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x8052));
	emu_get_memory16(emu_ss, emu_bp, -0x18) = emu_ax;
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x8052);
	emu_sarw(&emu_ax, 0x1);
	emu_get_memory16(emu_ss, emu_bp, -0x1A) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x24));
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x992B);
	emu_addw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x2));
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x24));
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x992D);
	emu_addw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_cl = 0x3;
	emu_shlw(&emu_ax, emu_cl);
	emu_get_memory16(emu_ss, emu_bp, -0xA) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x24));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0xA);
	emu_get_memory16(emu_ss, emu_bp, -0x1C) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x24));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0xC);
	emu_get_memory16(emu_ss, emu_bp, -0x1E) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x6) = 0x0;
	emu_get_memory16(emu_ds, 0x00, 0x8054) = 0x0;
	emu_push(emu_cs); emu_push(0x0291); emu_cs = 0x29E8; f__29E8_072F_000F_651A();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E6) { overlay(0x34E6, 1); }
l__0291:
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax == 0) goto l__02A0;
	emu_push(emu_cs); emu_push(0x029A); emu_cs = 0x29E8; f__29E8_0897_0016_2028();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E6) { overlay(0x34E6, 1); }
l__029A:
	emu_andw(&emu_ax, 0x8FF);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_ax;
l__02A0:
	emu_al = emu_get_memory8(emu_ds, 0x00, 0x6C70);
	emu_ax = (int8)emu_al;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x24));
	emu_imuluw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x992D);
	emu_cl = 0x3;
	emu_shlw(&emu_dx, emu_cl);
	emu_addw(&emu_dx, emu_ax);
	emu_get_memory16(emu_ss, emu_bp, -0xC) = emu_dx;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x24));
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x992B);
	emu_addw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x2));
	emu_subw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x1A));
	emu_get_memory16(emu_ss, emu_bp, -0x10) = emu_ax;
	emu_al = emu_get_memory8(emu_ds, 0x00, 0x6C70);
	emu_ax = (int8)emu_al;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x24));
	emu_imuluw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x4));
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0xC);
	emu_addw(&emu_dx, emu_ax);
	emu_decw(&emu_dx);
	emu_get_memory16(emu_ss, emu_bp, -0xE) = emu_dx;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x24));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x6);
	emu_imuluw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x18));
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x10);
	emu_addw(&emu_dx, emu_ax);
	emu_decw(&emu_dx);
	emu_get_memory16(emu_ss, emu_bp, -0x12) = emu_dx;
	emu_al = emu_get_memory8(emu_ds, 0x00, 0x7097);
	emu_ah = 0x0;
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax != 0) goto l__032E;
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x7062);
	emu_get_memory16(emu_ss, emu_bp, -0x14) = emu_ax;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x7060));
	emu_push(emu_cs);
	emu_push(0x0314); f__B4E6_00E0_0022_452E();
l__0314:
	emu_addw(&emu_sp, 0xC);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax != 0) {
		emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x25E6), 0x0);
		if (emu_get_memory16(emu_ds, 0x00, 0x25E6) != 0x0) {
			emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x14);
			emu_subw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x10));
			emu_cwd();
			emu_idivw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x18));
			emu_si = emu_ax;
		}
	}
l__032E:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x6);
	emu_get_memory16(emu_ss, emu_bp, -0x26) = emu_ax;
	emu_cx = 0xB;
	emu_bx = 0x51B;
l__033A:
	emu_ax = emu_get_memory16(emu_cs, emu_bx, 0x0);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x26));
	if (emu_ax == emu_get_memory16(emu_ss, emu_bp, -0x26)) goto l__0349;
	emu_addw(&emu_bx, 0x2);
	if (--emu_cx != 0) goto l__033A;
	goto l__03A2;
l__0349:

	/* Jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_cs, emu_bx, 0x16);
	switch (emu_ip) {
		case 0x034D: goto l__034D;
		case 0x0358: goto l__0358;
		case 0x0363: goto l__0363;
		case 0x0368: goto l__0368;
		case 0x036E: goto l__036E;
		case 0x039D: goto l__039D;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0xB4E6; emu_last_ip = 0x0349; emu_last_length = 0x0004; emu_last_crc = 0x34FB;
			emu_call();
			return;
	}
l__034D:
	emu_decw(&emu_si);
	emu_orw(&emu_si, emu_si);
	if ((emu_flags.sf != emu_flags.of)) {
		emu_si = emu_get_memory16(emu_ss, emu_bp, -0x2);
	}
l__0355:
	goto l__0403;
l__0358:
	emu_incw(&emu_si);
	emu_cmpw(&emu_si, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if ((int16)emu_si > (int16)emu_get_memory16(emu_ss, emu_bp, -0x2)) {
		emu_xorw(&emu_si, emu_si);
	}
l__0360:
	goto l__0403;
l__0363:
	emu_xorw(&emu_si, emu_si);
	goto l__0403;
l__0368:
	emu_si = emu_get_memory16(emu_ss, emu_bp, -0x2);
	goto l__0403;
l__036E:
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x7066));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x7064));
	emu_push(emu_cs);
	emu_push(0x0386); f__B4E6_00E0_0022_452E();
l__0386:
	emu_addw(&emu_sp, 0xC);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax == 0) goto l__039B;
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x7066);
	emu_subw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_cwd();
	emu_idivw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x18));
	emu_si = emu_ax;
	goto l__039D;
l__039B:
	goto l__03FB;
l__039D:
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_si;
	goto l__0403;
l__03A2:
	emu_xorw(&emu_di, emu_di);
	goto l__03F2;
l__03A6:
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x14));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x12));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x10));
	emu_push(emu_di);
	emu_push(emu_cs);
	emu_push(0x03B4); f__B4E6_0000_001A_C6C7();
l__03B4:
	emu_addw(&emu_sp, 0x8);
	emu_cl = 0x2;
	emu_shlw(&emu_ax, emu_cl);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_addw(&emu_bx, emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x0);
	emu_ax = (int8)emu_al;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x03CD); emu_cs = 0x01F7; emu_String_toupper();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E6) { overlay(0x34E6, 1); }
l__03CD:
	emu_pop(&emu_cx);
	emu_push(emu_ax);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x6);
	emu_andw(&emu_ax, 0xFF);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x03DB); emu_cs = 0x29E8; emu_Input_Keyboard_HandleKeys2();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E6) { overlay(0x34E6, 1); }
l__03DB:
	emu_pop(&emu_cx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x03E2); emu_cs = 0x01F7; emu_String_toupper();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E6) { overlay(0x34E6, 1); }
l__03E2:
	emu_pop(&emu_cx);
	emu_pop(&emu_dx);
	emu_cmpw(&emu_dx, emu_ax);
	if (emu_dx != emu_ax) goto l__03F1;
	emu_ax = emu_di;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_si = emu_ax;
	goto l__03FB;
l__03F1:
	emu_incw(&emu_di);
l__03F2:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x24));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x6), emu_di);
	if ((int16)emu_get_memory16(emu_es, emu_bx, 0x6) > (int16)emu_di) goto l__03A6;
l__03FB:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x6);
	emu_get_memory16(emu_ds, 0x00, 0x8054) = emu_ax;
	goto l__0403;
l__0403:
	emu_cmpw(&emu_si, emu_get_memory16(emu_ss, emu_bp, -0x20));
	if (emu_si != emu_get_memory16(emu_ss, emu_bp, -0x20)) goto l__040B;
	goto l__04AC;
l__040B:
	emu_push(emu_cs); emu_push(0x0410); emu_cs = 0x2B6C; f__2B6C_0137_0020_C73F();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E6) { overlay(0x34E6, 1); }
l__0410:
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x14));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x12));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x10));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x20));
	emu_push(emu_cs);
	emu_push(0x0420); f__B4E6_0000_001A_C6C7();
l__0420:
	emu_addw(&emu_sp, 0x8);
	emu_di = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x20);
	emu_imuluw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x18));
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x8);
	emu_addw(&emu_dx, emu_ax);
	emu_get_memory16(emu_ss, emu_bp, -0x16) = emu_dx;
	emu_ax = 0x22;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x1C));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x16));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_ax = emu_di;
	emu_cl = 0x2;
	emu_shlw(&emu_ax, emu_cl);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_addw(&emu_bx, emu_ax);
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x2));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_push(emu_cs); emu_push(0x045A); emu_cs = 0x10E4; emu_GUI_DrawText_Wrapper();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E6) { overlay(0x34E6, 1); }
l__045A:
	emu_addw(&emu_sp, 0xE);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x14));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x12));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x10));
	emu_push(emu_si);
	emu_push(emu_cs);
	emu_push(0x046B); f__B4E6_0000_001A_C6C7();
l__046B:
	emu_addw(&emu_sp, 0x8);
	emu_di = emu_ax;
	emu_ax = emu_si;
	emu_imuluw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x18));
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x8);
	emu_addw(&emu_dx, emu_ax);
	emu_get_memory16(emu_ss, emu_bp, -0x16) = emu_dx;
	emu_ax = 0x22;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x1E));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x16));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_ax = emu_di;
	emu_cl = 0x2;
	emu_shlw(&emu_ax, emu_cl);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_addw(&emu_bx, emu_ax);
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x2));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_push(emu_cs); emu_push(0x04A4); emu_cs = 0x10E4; emu_GUI_DrawText_Wrapper();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E6) { overlay(0x34E6, 1); }
l__04A4:
	emu_addw(&emu_sp, 0xE);
	emu_push(emu_cs); emu_push(0x04AC); emu_cs = 0x2B6C; f__2B6C_0169_001E_6939();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E6) { overlay(0x34E6, 1); }
l__04AC:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0xFFFF);
	if (emu_get_memory16(emu_ss, emu_bp, -0x4) == 0xFFFF) goto l__0509;
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x14));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x12));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x10));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs);
	emu_push(0x04C2); f__B4E6_0000_001A_C6C7();
l__04C2:
	emu_addw(&emu_sp, 0x8);
	emu_di = emu_ax;
	emu_push(emu_cs); emu_push(0x04CC); emu_cs = 0x2B6C; f__2B6C_0137_0020_C73F();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E6) { overlay(0x34E6, 1); }
l__04CC:
	emu_ax = emu_si;
	emu_imuluw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x18));
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x8);
	emu_addw(&emu_dx, emu_ax);
	emu_get_memory16(emu_ss, emu_bp, -0x16) = emu_dx;
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x1E));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x1C));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x16));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_ax = emu_di;
	emu_cl = 0x2;
	emu_shlw(&emu_ax, emu_cl);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_addw(&emu_bx, emu_ax);
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x2));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_push(emu_cs);
	emu_push(0x04FE); f__B4E6_0074_000C_3554();
l__04FE:
	emu_addw(&emu_sp, 0xE);
	emu_push(emu_cs); emu_push(0x0506); emu_cs = 0x2B6C; f__2B6C_0169_001E_6939();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E6) { overlay(0x34E6, 1); }
l__0506:
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_di;
l__0509:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x24));
	emu_get_memory16(emu_es, emu_bx, 0x8) = emu_si;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x4);
	goto l__0515;
l__0515:
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

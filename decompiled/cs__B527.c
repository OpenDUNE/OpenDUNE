/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function emu_GUI_EditBox()
 *
 * @name emu_GUI_EditBox
 * @implements B527:0000:0016:BBD9 ()
 * @implements B527:0016:000A:F6B9
 * @implements B527:0020:0009:E4DB
 * @implements B527:0029:000C:7CE1
 * @implements B527:0035:0016:DA67
 * @implements B527:004B:0023:4A7D
 * @implements B527:006E:000F:C442
 * @implements B527:007D:0029:E163
 * @implements B527:0081:0025:7FAE
 * @implements B527:00A1:0005:6168
 * @implements B527:00A6:000C:6949
 * @implements B527:00B2:001D:E367
 * @implements B527:00CF:0012:9D7B
 * @implements B527:00E1:0007:E5DE
 * @implements B527:00E8:0008:5A0B
 * @implements B527:00F0:000B:FF42
 * @implements B527:00FB:0011:1AD6
 * @implements B527:010C:000B:0481
 * @implements B527:0117:0014:47BE
 * @implements B527:012B:0017:408E
 * @implements B527:0142:001B:D66A
 * @implements B527:014E:000F:5E6F
 * @implements B527:015D:0004:3BFB
 * @implements B527:0161:0003:5DA7
 * @implements B527:0178:000D:2FF0
 * @implements B527:0185:0015:3ABA
 * @implements B527:019A:000E:57E9
 * @implements B527:01A8:0012:AA0D
 * @implements B527:01BA:000D:0CF1
 * @implements B527:01C4:0003:9D0E
 * @implements B527:01C7:0008:8702
 * @implements B527:01CF:0014:5990
 * @implements B527:01E3:0009:9151
 * @implements B527:01EC:0009:A94E
 * @implements B527:01F5:0009:A1E0
 * @implements B527:01FE:002A:3E48
 * @implements B527:0228:000E:8F05
 * @implements B527:0236:0023:ABEA
 * @implements B527:0259:0008:3BE5
 * @implements B527:0261:0012:440D
 * @implements B527:0273:000E:4982
 * @implements B527:027F:0002:C03A
 * @implements B527:0281:0009:2E30
 * @implements B527:028A:0009:E2B9
 * @implements B527:0293:000A:B6BD
 * @implements B527:029D:0009:18B8
 * @implements B527:02A6:0009:D1B5
 * @implements B527:02AF:0006:DE27
 * @implements B527:02B5:0006:F7CE
 *
 * Called From: 3527:0020:0005:0000
 */
void emu_GUI_EditBox()
{
l__0000:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x16);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_get_memory16(emu_ss, emu_bp, -0xE) = 0x0;
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0016); emu_cs = 0x29E8; emu_Input_Flags_SetBits();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3527) { overlay(0x3527, 1); }
l__0016:
	emu_pop(&emu_cx);
	emu_ax = 0x2000;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0020); emu_cs = 0x29E8; emu_Input_Flags_ClearBits();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3527) { overlay(0x3527, 1); }
l__0020:
	emu_pop(&emu_cx);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0029); emu_cs = 0x2598; f__2598_0000_0017_EB80();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3527) { overlay(0x3527, 1); }
l__0029:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x12) = emu_ax;
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_cs); emu_push(0x0035); emu_cs = 0x07AE; emu_Unknown_07AE_0000();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3527) { overlay(0x3527, 1); }
l__0035:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_ax;
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x992D);
	emu_cl = 0x3;
	emu_shlw(&emu_ax, emu_cl);
	emu_get_memory16(emu_ss, emu_bp, -0x14) = emu_ax;
	emu_al = 0x57;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x004B); emu_cs = 0x2521; f__2521_000F_0022_6D87();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3527) { overlay(0x3527, 1); }
l__004B:
	emu_pop(&emu_cx);
	emu_incw(&emu_ax);
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x992F);
	emu_cl = 0x3;
	emu_shlw(&emu_dx, emu_cl);
	emu_subw(&emu_dx, emu_ax);
	emu_get_memory16(emu_ss, emu_bp, -0xA) = emu_dx;
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_dx = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_dx;
	emu_xorw(&emu_ax, emu_ax);
	emu_si = emu_ax;
	emu_di = emu_ax;
	goto l__0081;
l__006E:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x0);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x007D); emu_cs = 0x2521; f__2521_000F_0022_6D87();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3527) { overlay(0x3527, 1); }
l__007D:
	emu_pop(&emu_cx);
	emu_addw(&emu_si, emu_ax);
	emu_incw(&emu_di);
l__0081:
	emu_cmpw(&emu_si, emu_get_memory16(emu_ss, emu_bp, -0xA));
	if ((int16)emu_si >= (int16)emu_get_memory16(emu_ss, emu_bp, -0xA)) { /* Unresolved jump */ emu_ip = 0x008F; emu_last_cs = 0xB527; emu_last_ip = 0x0084; emu_last_length = 0x0025; emu_last_crc = 0x7FAE; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x0), 0x0);
	if (emu_get_memory8(emu_es, emu_bx, 0x0) != 0x0) goto l__006E;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_get_memory8(emu_es, emu_bx, 0x0) = 0x0;
	emu_testw(&emu_get_memory16(emu_ss, emu_bp,  0x16), 0x1);
	if ((emu_get_memory16(emu_ss, emu_bp,  0x16) & 0x1) != 0) {
		emu_orw(&emu_get_memory16(emu_ss, emu_bp,  0x16), 0x4);
	}
l__00A1:
	emu_push(emu_cs); emu_push(0x00A6); emu_cs = 0x2B6C; f__2B6C_0137_0020_C73F();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3527) { overlay(0x3527, 1); }
l__00A6:
	emu_testw(&emu_get_memory16(emu_ss, emu_bp,  0x16), 0x4);
	if ((emu_get_memory16(emu_ss, emu_bp,  0x16) & 0x4) != 0) {
		emu_push(emu_cs); emu_push(0x00B2); emu_cs = 0x07AE; f__07AE_0103_004C_B43B();
		/* Check if this overlay should be reloaded */
		if (emu_cs == 0x3527) { overlay(0x3527, 1); }
	}
l__00B2:
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6D59));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6D5B));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x992B));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x00CF); emu_cs = 0x10E4; f__10E4_1EF1_0040_01F8();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3527) { overlay(0x3527, 1); }
l__00CF:
	emu_addw(&emu_sp, 0xE);
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x14);
	emu_addw(&emu_ax, emu_si);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x00E1); f__B527_02CB_005E_FFA4();
l__00E1:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_cs); emu_push(0x00E8); emu_cs = 0x2B6C; f__2B6C_0169_001E_6939();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3527) { overlay(0x3527, 1); }
l__00E8:
	emu_get_memory16(emu_ss, emu_bp, -0x10) = 0x0;
	goto l__0281;
l__00F0:
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x12);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x14));
	if (emu_ax == 0) goto l__010C;

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_ss, emu_bp,  0x12);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_ss, emu_bp,  0x14);
	emu_push(0x00FB);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x34DA003E: overlay(0x34DA, 0); f__B4DA_16CB_001D_31CC(); break;
		case 0x35180066: overlay(0x3518, 0); f__B518_14F2_003E_977C(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0xB527; emu_last_ip = 0x00F8; emu_last_length = 0x000B; emu_last_crc = 0xFF42;
			emu_call();
			return;
	}
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3527) { overlay(0x3527, 1); }
l__00FB:
	emu_get_memory16(emu_ss, emu_bp, -0xE) = emu_ax;
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0xE), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp, -0xE) == 0x0) goto l__010C;
	emu_get_memory16(emu_ss, emu_bp, -0x10) = 0x1;
	goto l__0281;
l__010C:
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x10));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_push(emu_cs); emu_push(0x0117); emu_cs = 0x34A2; overlay(0x34A2, 0); f__B4A2_0039_000B_EC51();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3527) { overlay(0x3527, 1); }
l__0117:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ax;
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x14);
	emu_addw(&emu_ax, emu_si);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x012B); f__B527_02CB_005E_FFA4();
l__012B:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_testw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x8000);
	if ((emu_get_memory16(emu_ss, emu_bp, -0x2) & 0x8000) == 0) goto l__0142;
	emu_get_memory16(emu_ss, emu_bp, -0x10) = 0x1;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x2);
	emu_get_memory16(emu_ss, emu_bp, -0xE) = emu_ax;
	goto l__0281;
l__0142:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x2);
	emu_get_memory16(emu_ss, emu_bp, -0x16) = emu_ax;
	emu_cx = 0x4;
	emu_bx = 0x2BB;
l__014E:
	emu_ax = emu_get_memory16(emu_cs, emu_bx, 0x0);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x16));
	if (emu_ax == emu_get_memory16(emu_ss, emu_bp, -0x16)) goto l__015D;
	emu_addw(&emu_bx, 0x2);
	if (--emu_cx != 0) goto l__014E;
	goto l__01C7;
l__015D:

	/* Jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_cs, emu_bx, 0x8);
	switch (emu_ip) {
		case 0x0161: goto l__0161;
		case 0x0178: goto l__0178;
		case 0x0185: goto l__0185;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0xB527; emu_last_ip = 0x015D; emu_last_length = 0x0004; emu_last_crc = 0x3BFB;
			emu_call();
			return;
	}
l__0161:
	goto l__0281;
l__0178:
	emu_get_memory16(emu_ss, emu_bp, -0x10) = 0x1;
	emu_get_memory16(emu_ss, emu_bp, -0xE) = 0x2B;
	goto l__0281;
l__0185:
	emu_orw(&emu_di, emu_di);
	if (emu_di == 0) goto l__01C4;
	emu_decw(&emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x14);
	emu_addw(&emu_ax, emu_si);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x019A); f__B527_02CB_005E_FFA4();
l__019A:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x0);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x01A8); emu_cs = 0x2521; f__2521_000F_0022_6D87();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3527) { overlay(0x3527, 1); }
l__01A8:
	emu_pop(&emu_cx);
	emu_subw(&emu_si, emu_ax);
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x14);
	emu_addw(&emu_ax, emu_si);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x01BA); f__B527_02CB_005E_FFA4();
l__01BA:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_get_memory8(emu_es, emu_bx, 0x0) = 0x0;
	emu_decw(&emu_di);
l__01C4:
	goto l__0281;
l__01C7:
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_cs); emu_push(0x01CF); emu_cs = 0x29E8; emu_Input_Keyboard_HandleKeys2();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3527) { overlay(0x3527, 1); }
l__01CF:
	emu_pop(&emu_cx);
	emu_andw(&emu_ax, 0xFF);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ax;
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x20);
	if (emu_get_memory16(emu_ss, emu_bp, -0x2) != 0x20) goto l__01E3;
	emu_orw(&emu_di, emu_di);
	if (emu_di != 0) goto l__01E3;
	goto l__027F;
l__01E3:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x20);
	if ((int16)emu_get_memory16(emu_ss, emu_bp, -0x2) >= (int16)0x20) goto l__01EC;
	goto l__027F;
l__01EC:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x7E);
	if ((int16)emu_get_memory16(emu_ss, emu_bp, -0x2) <= (int16)0x7E) goto l__01F5;
	goto l__027F;
l__01F5:
	emu_al = emu_get_memory8(emu_ss, emu_bp, -0x2);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x01FE); emu_cs = 0x2521; f__2521_000F_0022_6D87();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3527) { overlay(0x3527, 1); }
l__01FE:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0xC) = emu_ax;
	emu_ax = emu_si;
	emu_addw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0xA));
	if ((int16)emu_ax >= (int16)emu_get_memory16(emu_ss, emu_bp, -0xA)) goto l__027F;
	emu_cmpw(&emu_di, emu_get_memory16(emu_ss, emu_bp,  0xA));
	if ((int16)emu_di >= (int16)emu_get_memory16(emu_ss, emu_bp,  0xA)) goto l__027F;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_al = emu_get_memory8(emu_ss, emu_bp, -0x2);
	emu_get_memory8(emu_es, emu_bx, 0x0) = emu_al;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_get_memory8(emu_es, emu_bx, 0x1) = 0x0;
	emu_incw(&emu_di);
	emu_push(emu_cs); emu_push(0x0228); emu_cs = 0x2B6C; f__2B6C_0137_0020_C73F();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3527) { overlay(0x3527, 1); }
l__0228:
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x14);
	emu_addw(&emu_ax, emu_si);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x0236); f__B527_02CB_005E_FFA4();
l__0236:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_ax = 0x20;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6D59));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6D5B));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x992B));
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x14);
	emu_addw(&emu_ax, emu_si);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_cs); emu_push(0x0259); emu_cs = 0x10E4; f__10E4_1EF1_0040_01F8();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3527) { overlay(0x3527, 1); }
l__0259:
	emu_addw(&emu_sp, 0xE);
	emu_push(emu_cs); emu_push(0x0261); emu_cs = 0x2B6C; f__2B6C_0169_001E_6939();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3527) { overlay(0x3527, 1); }
l__0261:
	emu_addw(&emu_si, emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x14);
	emu_addw(&emu_ax, emu_si);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x0273); f__B527_02CB_005E_FFA4();
l__0273:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_get_memory8(emu_es, emu_bx, 0x0) = 0x0;
l__027F:
	goto l__0281;
l__0281:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x10), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp, -0x10) != 0x0) goto l__028A;
	goto l__00F0;
l__028A:
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0293); emu_cs = 0x29E8; emu_Input_Flags_ClearBits();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3527) { overlay(0x3527, 1); }
l__0293:
	emu_pop(&emu_cx);
	emu_ax = 0x2000;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x029D); emu_cs = 0x29E8; emu_Input_Flags_SetBits();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3527) { overlay(0x3527, 1); }
l__029D:
	emu_pop(&emu_cx);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs); emu_push(0x02A6); emu_cs = 0x07AE; emu_Unknown_07AE_0000();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3527) { overlay(0x3527, 1); }
l__02A6:
	emu_pop(&emu_cx);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_push(emu_cs); emu_push(0x02AF); emu_cs = 0x2598; f__2598_0000_0017_EB80();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3527) { overlay(0x3527, 1); }
l__02AF:
	emu_pop(&emu_cx);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0xE);
	goto l__02B5;
l__02B5:
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
 * Decompiled function f__B527_02CB_005E_FFA4()
 *
 * @name f__B527_02CB_005E_FFA4
 * @implements B527:02CB:005E:FFA4 ()
 * @implements B527:02EC:003D:CE40
 * @implements B527:0301:0028:A290
 * @implements B527:0324:0005:6168
 * @implements B527:0329:000C:BD5E
 * @implements B527:0335:0015:ADC3
 * @implements B527:0338:0012:356E
 * @implements B527:034A:0015:34F5
 * @implements B527:035F:0008:2BE5
 * @implements B527:0367:0004:DE52
 *
 * Called From: B527:00DE:0012:9D7B
 * Called From: B527:0128:0014:47BE
 * Called From: B527:0197:0015:3ABA
 * Called From: B527:01B7:0012:AA0D
 * Called From: B527:0233:000E:8F05
 * Called From: B527:0270:0012:440D
 */
void f__B527_02CB_005E_FFA4()
{
l__02CB:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_si);
	emu_push(emu_di);
	emu_si = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_di = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_orw(&emu_di, emu_di);
	if (emu_di == 0) {
		emu_get_memory16(emu_ds, 0x00, 0x2C60) = 0x0;
		emu_get_memory16(emu_ds, 0x00, 0x2C5E) = 0x0;
		emu_get_memory16(emu_ds, 0x00, 0x2C62) = 0x1;
	}
l__02EC:
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x2C60);
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x2C5E);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x76AE));
	if (emu_ax > emu_get_memory16(emu_ds, 0x00, 0x76AE)) goto l__0367;
	if (emu_ax == emu_get_memory16(emu_ds, 0x00, 0x76AE)) {
		emu_cmpw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x76AC));
		if (emu_dx > emu_get_memory16(emu_ds, 0x00, 0x76AC)) goto l__0367;
	}
l__0301:
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x2C62);
	emu_negw(&emu_ax, emu_ax);
	emu_sbbw(&emu_ax, emu_ax);
	emu_incw(&emu_ax);
	emu_get_memory16(emu_ds, 0x00, 0x2C62) = emu_ax;
	emu_orw(&emu_di, emu_di);
	if (emu_di != 0) {
		emu_ax = emu_get_memory16(emu_ds, 0x00, 0x76AE);
		emu_dx = emu_get_memory16(emu_ds, 0x00, 0x76AC);
		emu_addw(&emu_dx, 0x14);
		emu_adcw(&emu_ax, 0x0);
		emu_get_memory16(emu_ds, 0x00, 0x2C60) = emu_ax;
		emu_get_memory16(emu_ds, 0x00, 0x2C5E) = emu_dx;
	}
l__0324:
	emu_push(emu_cs); emu_push(0x0329); emu_cs = 0x2B6C; f__2B6C_0137_0020_C73F();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3527) { overlay(0x3527, 1); }
l__0329:
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x2C62), 0x0);
	if (emu_get_memory16(emu_ds, 0x00, 0x2C62) == 0x0) goto l__0335;
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x6D5B);
	goto l__0338;
l__0335:
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x6D59);
l__0338:
	emu_push(emu_ax);
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x992B);
	emu_addw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x9931));
	emu_decw(&emu_ax);
	emu_push(emu_ax);
	emu_al = 0x57;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x034A); emu_cs = 0x2521; f__2521_000F_0022_6D87();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3527) { overlay(0x3527, 1); }
l__034A:
	emu_pop(&emu_cx);
	emu_dx = emu_si;
	emu_addw(&emu_dx, emu_ax);
	emu_push(emu_dx);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x992B));
	emu_push(emu_si);
	emu_ax = 0x353F;
	emu_es = emu_ax;

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_es, 0x00, 0x6668);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_es, 0x00, 0x666A);
	emu_push(0x035F);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A60D31: f__22A6_0D31_0015_A4C3(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0xB527; emu_last_ip = 0x035A; emu_last_length = 0x0015; emu_last_crc = 0x34F5;
			emu_call();
			return;
	}
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3527) { overlay(0x3527, 1); }
l__035F:
	emu_addw(&emu_sp, 0xA);
	emu_push(emu_cs); emu_push(0x0367); emu_cs = 0x2B6C; f__2B6C_0169_001E_6939();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3527) { overlay(0x3527, 1); }
l__0367:
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__1A34_2AAA_000D_A3E6()
 *
 * @name f__1A34_2AAA_000D_A3E6
 * @implements 1A34:2AAA:000D:A3E6 ()
 * @implements 1A34:2AB7:0016:931E
 * @implements 1A34:2ACD:001F:0A02
 * @implements 1A34:2AEC:000E:C4E8
 * @implements 1A34:2AFA:0019:3A5B
 * @implements 1A34:2B13:0005:6143
 *
 * Called From: 176C:0EE0:000E:44F7
 * Called From: 1A34:2D1D:0018:E247
 */
void f__1A34_2AAA_000D_A3E6()
{
l__2AAA:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_ax != 0) goto l__2AB7;
	/* Unresolved jump */ emu_ip = 0x2B16; emu_last_cs = 0x1A34; emu_last_ip = 0x2AB5; emu_last_length = 0x000D; emu_last_crc = 0xA3E6; emu_call();
l__2AB7:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_get_memory16(emu_es, emu_bx, 0x4), 0x40);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x2ACD); emu_cs = 0x34CD; overlay(0x34CD, 0); f__B4CD_01BF_0016_E78F();
l__2ACD:
	emu_addw(&emu_sp, 0x6);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_andw(&emu_get_memory16(emu_es, emu_bx, 0x4), 0xFFBF);
	emu_push(emu_ds);
	emu_ax = 0x3902;
	emu_push(emu_ax);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_addw(&emu_ax, 0x12);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x2AEC); emu_cs = 0x15C2; emu_Script_Reset();
l__2AEC:
	emu_addw(&emu_sp, 0x8);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x2AFA); emu_Unit_UntargetMe();
l__2AFA:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_get_memory16(emu_es, emu_bx, 0x4), 0x4);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3A38));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x2B13); emu_cs = 0x1423; f__1423_0BCC_0012_111A();
l__2B13:
	emu_addw(&emu_sp, 0x6);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__1A34_2BB5_0025_30B8()
 *
 * @name f__1A34_2BB5_0025_30B8
 * @implements 1A34:2BB5:0025:30B8 ()
 * @implements 1A34:2BDA:0005:92AE
 * @implements 1A34:2BDF:0022:6DF3
 * @implements 1A34:2C01:000B:799F
 * @implements 1A34:2C0C:003A:3AF5
 * @implements 1A34:2C0E:0038:AC99
 * @implements 1A34:2C1C:002A:C573
 * @implements 1A34:2C46:003E:E039
 * @implements 1A34:2C64:0020:54FF
 * @implements 1A34:2C84:000B:89DA
 * @implements 1A34:2C87:0008:D8C9
 * @implements 1A34:2C8F:0006:F7CE
 *
 * Called From: 0972:0BBE:0015:DC2E
 * Called From: 176C:2509:000B:7D3A
 */
void f__1A34_2BB5_0025_30B8()
{
l__2BB5:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x8);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_si = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_di = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = 0x0;
	emu_get_memory16(emu_ss, emu_bp, -0x8) = 0x0;
	emu_push(emu_si);
	emu_push(emu_di);
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x2BDA); emu_cs = 0x0FE4; emu_Unit_FindFirst();
l__2BDA:
	emu_addw(&emu_sp, 0x8);
	goto l__2C0E;
l__2BDF:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x3), 0xFF);
	if (emu_get_memory8(emu_es, emu_bx, 0x3) != 0xFF) goto l__2C01;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x56), 0x0);
	if (emu_get_memory16(emu_es, emu_bx, 0x56) != 0x0) goto l__2C01;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x2);
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_dx;
	goto l__2C1C;
l__2C01:
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x2C0C); emu_cs = 0x0FE4; emu_Unit_FindNext();
l__2C0C:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
l__2C0E:
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_ax != 0) goto l__2BDF;
l__2C1C:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp,  0xC), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp,  0xC) == 0x0) goto l__2C64;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x8);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x6));
	if (emu_ax != 0) goto l__2C64;
	emu_orw(&emu_si, emu_si);
	if (emu_si != 0) goto l__2C64;
	emu_incw(&emu_get_memory16(emu_ds, 0x00, 0x38BC));
	emu_ax = 0x60;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_di);
	emu_push(emu_si);
	emu_ax = 0xFFFF;
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x2C46); emu_Unit_Create();
l__2C46:
	emu_addw(&emu_sp, 0xC);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_ax;
	emu_decw(&emu_get_memory16(emu_ds, 0x00, 0x38BC));
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x8);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x6));
	if (emu_ax != 0) {
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
		emu_orw(&emu_get_memory16(emu_es, emu_bx, 0x4), 0x200);
	}
l__2C64:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x8);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x6));
	if (emu_ax == 0) goto l__2C87;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0xA);
	emu_get_memory16(emu_es, emu_bx, 0x56) = emu_ax;
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs); emu_push(0x2C84); emu_cs = 0x0C10; f__0C10_00D2_000F_D61E();
l__2C84:
	emu_addw(&emu_sp, 0x6);
l__2C87:
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x6);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x8);
	goto l__2C8F;
l__2C8F:
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
 * Decompiled function f__1A34_2C95_001B_89A2()
 *
 * @name f__1A34_2C95_001B_89A2
 * @implements 1A34:2C95:001B:89A2 ()
 * @implements 1A34:2CB0:001C:F555
 * @implements 1A34:2CCC:0039:A882
 * @implements 1A34:2CCE:0037:71AE
 * @implements 1A34:2CFB:000A:A28D
 * @implements 1A34:2D05:0003:DDB6
 * @implements 1A34:2D08:0018:E247
 * @implements 1A34:2D20:000D:AA58
 * @implements 1A34:2D2D:0011:DBC6
 * @implements 1A34:2D3E:0009:B78D
 * @implements 1A34:2D47:0010:93D7
 * @implements 1A34:2D57:000F:5FC7
 * @implements 1A34:2D5A:000C:2FC2
 * @implements 1A34:2D66:0010:0111
 * @implements 1A34:2D76:0033:68C4
 * @implements 1A34:2DA9:0028:DC3E
 * @implements 1A34:2DD1:000D:5E93
 * @implements 1A34:2DDE:005A:6439
 * @implements 1A34:2DE1:0057:CA39
 * @implements 1A34:2E18:0020:ACCF
 * @implements 1A34:2E38:001D:0BE3
 * @implements 1A34:2E55:000E:BB32
 * @implements 1A34:2E63:0005:8F61
 * @implements 1A34:2E68:0019:2B5A
 * @implements 1A34:2E81:0015:C71B
 * @implements 1A34:2E96:000F:90E3
 * @implements 1A34:2EA5:0009:B45C
 * @implements 1A34:2EAE:001D:C6A0
 * @implements 1A34:2ECB:0011:6CE1
 * @implements 1A34:2EDC:0027:8321
 * @implements 1A34:2F03:001A:C46A
 * @implements 1A34:2F1D:0017:10C5
 * @implements 1A34:2F26:000E:591D
 * @implements 1A34:2F34:000C:0C19
 * @implements 1A34:2F40:0004:461F
 * @implements 1A34:2F44:0023:D47C
 * @implements 1A34:2F67:0014:59EA
 * @implements 1A34:2F69:0012:F102
 * @implements 1A34:2F7B:000E:2A03
 * @implements 1A34:2F7E:000B:0889
 * @implements 1A34:2F89:000D:542A
 * @implements 1A34:2F96:0008:AE7C
 * @implements 1A34:2F98:0006:F7CE
 *
 * Called From: 176C:0A0A:0008:45F1
 * Called From: 1A34:07DC:0036:8D87
 */
void f__1A34_2C95_001B_89A2()
{
l__2C95:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x8);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_ax == 0) { /* Unresolved jump */ emu_ip = 0x2CAD; emu_last_cs = 0x1A34; emu_last_ip = 0x2CA3; emu_last_length = 0x001B; emu_last_crc = 0x89A2; emu_call(); return; }
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0xA);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0xC));
	if (emu_ax != 0) goto l__2CB0;
	goto l__2F98;
l__2CB0:
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_dx = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x3A0C));
	if (emu_ax != emu_get_memory16(emu_ds, 0x00, 0x3A0C)) goto l__2CCE;
	emu_cmpw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x3A0A));
	if (emu_dx != emu_get_memory16(emu_ds, 0x00, 0x3A0A)) goto l__2CCE;
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs);
	emu_push(0x2CCC); emu_Unit_Select();
l__2CCC:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
l__2CCE:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x2);
	emu_ax = (int8)emu_al;
	emu_dx = 0x60;
	emu_imuluw(&emu_ax, emu_dx);
	emu_addw(&emu_ax, 0xA);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = 0x2C94;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0x4), 0x2);
	if ((emu_get_memory16(emu_es, emu_bx, 0x4) & 0x2) != 0) {
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0xA));
		emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0xE), 0x0);
		if (emu_get_memory16(emu_es, emu_bx, 0xE) != 0x0) goto l__2D08;
	}
l__2CFB:
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x2D05); emu_Unit_Unknown10EC();
l__2D05:
	goto l__2E63;
l__2D08:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x9);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orb(&emu_get_memory8(emu_es, emu_bx, 0x9), emu_al);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x2D20); f__1A34_2AAA_000D_A3E6();
l__2D20:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x2D2D); emu_Unit_GetHouseID();
l__2D2D:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x8);
	emu_ax = (int8)emu_al;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x2D3E); emu_cs = 0x1423; emu_House_AreAllied();
l__2D3E:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax != 0) goto l__2D47;
	goto l__2E38;
l__2D47:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0xC), 0x10);
	if ((emu_get_memory16(emu_es, emu_bx, 0xC) & 0x10) == 0) goto l__2D57;
	emu_ax = 0x2;
	goto l__2D5A;
l__2D57:
	emu_ax = 0x1;
l__2D5A:
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_cs); emu_push(0x2D66); emu_cs = 0x0C3A; emu_Structure_SetAnimation();
l__2D66:
	emu_addw(&emu_sp, 0x6);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0xD);
	if (emu_get_memory8(emu_es, emu_bx, 0x2) == 0xD) goto l__2D76;
	goto l__2E18;
l__2D76:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x2);
	emu_ax = (int8)emu_al;
	emu_dx = 0x5A;
	emu_imuluw(&emu_ax, emu_dx);
	emu_addw(&emu_ax, 0x0);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = 0x2D07;
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x10);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_subw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0xE));
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x10));
	emu_push(emu_cs); emu_push(0x2DA9); emu_cs = 0x34C1; overlay(0x34C1, 0); emu_Math_ValueToPercent();
l__2DA9:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_si = emu_ax;
	emu_push(emu_si);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x2);
	emu_ax = (int8)emu_al;
	emu_dx = 0x5A;
	emu_imuluw(&emu_ax, emu_dx);
	emu_dx = 0x2D07;
	emu_bx = emu_ax;
	emu_es = emu_dx;
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x18);
	emu_cl = 0x6;
	emu_shlw(&emu_ax, emu_cl);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x2DD1); emu_cs = 0x34C1; overlay(0x34C1, 0); emu_Math_PercentToValue();
l__2DD1:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_si = emu_ax;
	emu_cmpw(&emu_si, 0x1);
	if (emu_si <= 0x1) goto l__2DDE;
	emu_ax = emu_si;
	goto l__2DE1;
l__2DDE:
	emu_ax = 0x1;
l__2DE1:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_get_memory16(emu_es, emu_bx, 0x50) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x2);
	emu_ax = (int8)emu_al;
	emu_dx = 0x5A;
	emu_imuluw(&emu_ax, emu_dx);
	emu_dx = 0x2D07;
	emu_bx = emu_ax;
	emu_es = emu_dx;
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x10);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_get_memory16(emu_es, emu_bx, 0xE) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_andw(&emu_get_memory16(emu_es, emu_bx, 0x4), 0xFFF7);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_get_memory8(emu_es, emu_bx, 0x6D) = 0x0;
l__2E18:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x3);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_get_memory8(emu_es, emu_bx, 0x3) = emu_al;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_es);
	emu_lfp(&emu_es, &emu_si, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_si, 0x0);
	emu_pop(&emu_es);
	emu_get_memory8(emu_es, emu_bx, 0x3) = emu_al;
	goto l__2F98;
l__2E38:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0x6);
	if (emu_get_memory8(emu_es, emu_bx, 0x2) != 0x6) goto l__2E68;
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_ax = 0x1F4;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_cs); emu_push(0x2E55); emu_cs = 0x0C3A; f__0C3A_1216_0013_E56D();
l__2E55:
	emu_addw(&emu_sp, 0x8);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x2E63); emu_cs = 0x0FE4; emu_Unit_Free();
l__2E63:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	goto l__2F98;
l__2E68:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_es);
	emu_lfp(&emu_es, &emu_si, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_ax = emu_get_memory16(emu_es, emu_si, 0x10);
	emu_cl = 0x2;
	emu_sarw(&emu_ax, emu_cl);
	emu_pop(&emu_es);
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0xE), emu_ax);
	if ((int16)emu_get_memory16(emu_es, emu_bx, 0xE) < (int16)emu_ax) goto l__2E81;
	goto l__2F44;
l__2E81:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x8);
	emu_ax = (int8)emu_al;
	emu_si = emu_ax;
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x2E96); emu_Unit_GetHouseID();
l__2E96:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_get_memory8(emu_es, emu_bx, 0x8) = emu_al;
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x2EA5); emu_cs = 0x0C3A; emu_Structure_GetStructuresBuilt();
l__2EA5:
	emu_pop(&emu_cx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x2EAE); emu_cs = 0x10BE; emu_House_Get_ByIndex();
l__2EAE:
	emu_pop(&emu_cx);
	emu_bx = emu_ax;
	emu_es = emu_dx;
	emu_pop(&emu_ax);
	emu_get_memory16(emu_es, emu_bx, 0x10) = emu_ax;
	emu_pop(&emu_ax);
	emu_get_memory16(emu_es, emu_bx, 0xE) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x8);
	emu_ax = (int8)emu_al;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x2ECB); emu_cs = 0x0C3A; emu_Structure_GetStructuresBuilt();
l__2ECB:
	emu_pop(&emu_cx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x8);
	emu_ax = (int8)emu_al;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x2EDC); emu_cs = 0x10BE; emu_House_Get_ByIndex();
l__2EDC:
	emu_pop(&emu_cx);
	emu_bx = emu_ax;
	emu_es = emu_dx;
	emu_pop(&emu_ax);
	emu_get_memory16(emu_es, emu_bx, 0x10) = emu_ax;
	emu_pop(&emu_ax);
	emu_get_memory16(emu_es, emu_bx, 0xE) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x3), 0xFF);
	if (emu_get_memory8(emu_es, emu_bx, 0x3) == 0xFF) goto l__2F26;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x3);
	emu_ax = (int8)emu_al;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x2F03); emu_cs = 0x0FE4; emu_Unit_Get_ByIndex();
l__2F03:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x8);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x6));
	if (emu_ax == 0) goto l__2F26;
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x2F1D); emu_Unit_GetHouseID();
l__2F1D:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_get_memory8(emu_es, emu_bx, 0x8) = emu_al;
l__2F26:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x8);
	emu_ax = (int8)emu_al;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x2F34); emu_cs = 0x0C3A; emu_Structure_CalculatePowerAndCredit();
l__2F34:
	emu_pop(&emu_cx);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_cs); emu_push(0x2F40); emu_cs = 0x0C3A; emu_Structure_UpdateMap();
l__2F40:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	goto l__2F7E;
l__2F44:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0xE);
	emu_sarw(&emu_ax, 0x1);
	emu_di = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0xE);
	emu_shlw(&emu_ax, 0x1);
	emu_cmpw(&emu_ax, emu_di);
	if (emu_ax >= emu_di) goto l__2F67;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0xE);
	emu_shlw(&emu_ax, 0x1);
	goto l__2F69;
l__2F67:
	emu_ax = emu_di;
l__2F69:
	emu_di = emu_ax;
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_push(emu_di);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_cs); emu_push(0x2F7B); emu_cs = 0x0C3A; f__0C3A_1216_0013_E56D();
l__2F7B:
	emu_addw(&emu_sp, 0x8);
l__2F7E:
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_cs); emu_push(0x2F89); emu_cs = 0x0C10; f__0C10_0182_0012_B114();
l__2F89:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x2F96); emu_cs = 0x0FE4; emu_Unit_Free();
l__2F96:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
l__2F98:
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
 * Decompiled function f__1A34_3014_001B_858E()
 *
 * @name f__1A34_3014_001B_858E
 * @implements 1A34:3014:001B:858E ()
 * @implements 1A34:302A:0005:DC30
 * @implements 1A34:302C:0003:DDA4
 * @implements 1A34:302F:003F:CF75
 * @implements 1A34:306E:0014:5E5F
 * @implements 1A34:3082:0010:2E6C
 * @implements 1A34:3092:0028:4B4E
 * @implements 1A34:30BA:0024:9E02
 * @implements 1A34:30DE:000D:EC73
 * @implements 1A34:30ED:0002:E53A
 * @implements 1A34:30EF:0002:E73A
 * @implements 1A34:30F1:0011:EA5C
 * @implements 1A34:3102:001E:AED8
 * @implements 1A34:3120:000D:8B73
 * @implements 1A34:3127:0006:420D
 * @implements 1A34:312F:0010:5340
 * @implements 1A34:3139:0006:C211
 * @implements 1A34:313F:0003:621A
 * @implements 1A34:3142:0004:893F
 *
 * Called From: 1A34:1C4A:0018:2310
 * Called From: 1A34:3268:001F:93C6
 */
void f__1A34_3014_001B_858E()
{
l__3014:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0xC);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_ax != 0) {
		emu_ax = emu_get_memory16(emu_ss, emu_bp,  0xA);
		emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0xC));
		if (emu_ax != 0) goto l__302F;
	}
l__302A:
	emu_xorw(&emu_ax, emu_ax);
l__302C:
	goto l__3142;
l__302F:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x2);
	emu_ax = (int8)emu_al;
	emu_dx = 0x60;
	emu_imuluw(&emu_ax, emu_dx);
	emu_addw(&emu_ax, 0xA);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = 0x2C94;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x2);
	emu_ax = (int8)emu_al;
	emu_dx = 0x5A;
	emu_imuluw(&emu_ax, emu_dx);
	emu_addw(&emu_ax, 0x0);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = 0x2D07;
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_ax;
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_push(emu_cs); emu_push(0x306E); emu_cs = 0x167E; emu_Tools_Index_Encode();
l__306E:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0xA) = emu_ax;
	emu_ax = 0x3;
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_push(emu_cs); emu_push(0x3082); emu_cs = 0x167E; emu_Tools_Index_Encode();
l__3082:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0xC) = emu_ax;
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x3092); emu_Unit_GetHouseID();
l__3092:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_ax);
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x8);
	emu_ax = (int8)emu_al;
	emu_pop(&emu_dx);
	emu_cmpw(&emu_dx, emu_ax);
	if (emu_dx == emu_ax) goto l__30F1;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0x6);
	if (emu_get_memory8(emu_es, emu_bx, 0x2) != 0x6) goto l__30BA;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x56);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0xC));
	if (emu_ax != emu_get_memory16(emu_ss, emu_bp, -0xC)) goto l__30BA;
	goto l__3127;
l__30BA:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x3C), 0x0);
	if (emu_get_memory16(emu_es, emu_bx, 0x3C) != 0x0) goto l__30EF;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0xC), 0x80);
	if ((emu_get_memory16(emu_es, emu_bx, 0xC) & 0x80) == 0) goto l__30EF;
	emu_ax = 0x3;
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_push(emu_cs); emu_push(0x30DE); emu_cs = 0x167E; emu_Tools_Index_Encode();
l__30DE:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x56));
	if (emu_ax != emu_get_memory16(emu_es, emu_bx, 0x56)) goto l__30ED;
	goto l__3127;
l__30ED:
	goto l__3139;
l__30EF:
	goto l__313F;
l__30F1:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cl = emu_get_memory8(emu_es, emu_bx, 0x2);
	emu_xorw(&emu_dx, emu_dx);
	emu_ax = 0x1;
	emu_push(emu_cs); emu_push(0x3102); emu_cs = 0x01F7; emu_Tools_Shld();
l__3102:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cx = emu_get_memory16(emu_es, emu_bx, 0x34);
	emu_bx = emu_get_memory16(emu_es, emu_bx, 0x32);
	emu_andw(&emu_bx, emu_ax);
	emu_andw(&emu_cx, emu_dx);
	emu_orw(&emu_bx, emu_cx);
	if (emu_bx == 0) goto l__313F;
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_cs); emu_push(0x3120); emu_cs = 0x0C10; emu_Object_GetScriptVariable4();
l__3120:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0xA));
	if (emu_ax != emu_get_memory16(emu_ss, emu_bp, -0xA)) goto l__312F;
l__3127:
	emu_ax = 0x2;
	goto l__302C;
l__312F:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x3), 0xFF);
	if (emu_get_memory8(emu_es, emu_bx, 0x3) != 0xFF) goto l__313F;
l__3139:
	emu_ax = 0x1;
	goto l__302C;
l__313F:
	goto l__302A;
l__3142:
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__1A34_3146_0018_6887()
 *
 * @name f__1A34_3146_0018_6887
 * @implements 1A34:3146:0018:6887 ()
 * @implements 1A34:3159:0005:9C1F
 * @implements 1A34:315B:0003:9D8B
 * @implements 1A34:315E:001E:8618
 * @implements 1A34:317C:0012:0298
 * @implements 1A34:318E:0006:22E8
 * @implements 1A34:3194:0012:71A5
 * @implements 1A34:31A6:0013:CF39
 * @implements 1A34:31B9:000D:D98A
 * @implements 1A34:31C6:0019:2E66
 * @implements 1A34:31DF:000E:3622
 * @implements 1A34:31ED:000B:21FD
 * @implements 1A34:31F8:000E:95EC
 * @implements 1A34:3206:0008:9688
 * @implements 1A34:320E:0038:9680
 * @implements 1A34:3244:0002:DBBA
 * @implements 1A34:3246:0006:62E9
 * @implements 1A34:324C:001F:93C6
 * @implements 1A34:326B:0010:77A5
 * @implements 1A34:327D:0006:9214
 * @implements 1A34:3283:0006:12E4
 * @implements 1A34:3289:0051:2FE9
 * @implements 1A34:32DA:002A:8A6C
 * @implements 1A34:32E3:0021:3D72
 * @implements 1A34:3302:0002:C1BA
 * @implements 1A34:3304:0008:7C67
 * @implements 1A34:3307:0005:C667
 * @implements 1A34:330C:0006:F7CE
 *
 * Called From: 176C:1F38:001C:8C6C
 * Called From: 1A34:172C:0023:B77B
 */
void f__1A34_3146_0018_6887()
{
l__3146:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0xE);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_di = emu_get_memory16(emu_ss, emu_bp,  0xA);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_ax != 0) goto l__315E;
l__3159:
	emu_xorw(&emu_ax, emu_ax);
l__315B:
	goto l__330C;
l__315E:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x2);
	emu_ax = (int8)emu_al;
	emu_dx = 0x5A;
	emu_imuluw(&emu_ax, emu_dx);
	emu_addw(&emu_ax, 0x0);
	emu_get_memory16(emu_ss, emu_bp, -0xA) = 0x2D07;
	emu_get_memory16(emu_ss, emu_bp, -0xC) = emu_ax;
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x317C); emu_cs = 0x34CD; overlay(0x34CD, 0); emu_Map_IsValidPosition();
l__317C:
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax != 0) goto l__318E;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x3C), 0x4);
	if (emu_get_memory16(emu_es, emu_bx, 0x3C) == 0x4) goto l__318E;
	goto l__327D;
l__318E:
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x3194); emu_cs = 0x34CD; overlay(0x34CD, 0); emu_Unit_Get_ByPackedTile();
l__3194:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x8);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x6));
	if (emu_ax != 0) goto l__31A6;
	goto l__3246;
l__31A6:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x6);
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x8);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_ax != emu_get_memory16(emu_ss, emu_bp,  0x8)) goto l__31B9;
	emu_cmpw(&emu_dx, emu_get_memory16(emu_ss, emu_bp,  0x6));
	if (emu_dx != emu_get_memory16(emu_ss, emu_bp,  0x6)) goto l__31B9;
	goto l__3246;
l__31B9:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0x19);
	if (emu_get_memory8(emu_es, emu_bx, 0x2) != 0x19) goto l__31C6;
	goto l__3246;
l__31C6:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0x6);
	if (emu_get_memory8(emu_es, emu_bx, 0x2) != 0x6) goto l__31ED;
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_push(emu_cs); emu_push(0x31DF); emu_cs = 0x167E; emu_Tools_Index_Encode();
l__31DF:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x56));
	if (emu_ax != emu_get_memory16(emu_es, emu_bx, 0x56)) goto l__31ED;
	goto l__3159;
l__31ED:
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x31F8); emu_Unit_GetHouseID();
l__31F8:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs);
	emu_push(0x3206); emu_Unit_GetHouseID();
l__3206:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x320E); emu_cs = 0x1423; emu_House_AreAllied();
l__320E:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax == 0) {
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
		emu_al = emu_get_memory8(emu_es, emu_bx, 0x2);
		emu_ax = (int8)emu_al;
		emu_dx = 0x5A;
		emu_imuluw(&emu_ax, emu_dx);
		emu_dx = 0x2D07;
		emu_bx = emu_ax;
		emu_es = emu_dx;
		emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x3C), 0x0);
		if (emu_get_memory16(emu_es, emu_bx, 0x3C) == 0x0) {
			emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xC));
			emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x3C), 0x1);
			if (emu_get_memory16(emu_es, emu_bx, 0x3C) == 0x1) goto l__3246;
			emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xC));
			emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x3C), 0x2);
			if (emu_get_memory16(emu_es, emu_bx, 0x3C) == 0x2) goto l__3246;
		}
	}
l__3244:
	goto l__327D;
l__3246:
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x324C); emu_cs = 0x34CD; overlay(0x34CD, 0); emu_Structure_Get_ByPackedTile();
l__324C:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_ax == 0) goto l__3283;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x326B); f__1A34_3014_001B_858E();
l__326B:
	emu_addw(&emu_sp, 0x8);
	emu_si = emu_ax;
	emu_orw(&emu_si, emu_si);
	if (emu_si == 0) goto l__327D;
	emu_ax = emu_si;
	emu_negw(&emu_ax, emu_ax);
	goto l__315B;
l__327D:
	emu_ax = 0x100;
	goto l__315B;
l__3283:
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x3289); emu_cs = 0x34CD; overlay(0x34CD, 0); f__B4CD_0750_0027_7BA5();
l__3289:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0xE) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0xE);
	emu_dx = 0x1C;
	emu_imuluw(&emu_ax, emu_dx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_addw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x3C));
	emu_bx = emu_ax;
	emu_al = emu_get_memory8(emu_ds, emu_bx, 0x3A42);
	emu_ah = 0x0;
	emu_si = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0x6);
	if (emu_get_memory8(emu_es, emu_bx, 0x2) != 0x6) goto l__32E3;
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0xE), 0xB);
	if (emu_get_memory16(emu_ss, emu_bp, -0xE) != 0xB) goto l__32E3;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x8);
	emu_ax = (int8)emu_al;
	emu_push(emu_ax);
	emu_ax = emu_di;
	emu_cl = 0x2;
	emu_shlw(&emu_ax, emu_cl);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x39EA));
	emu_addw(&emu_bx, emu_ax);
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x2);
	emu_ah = 0x0;
	emu_andw(&emu_ax, 0x7);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x32DA); emu_cs = 0x1423; emu_House_AreAllied();
l__32DA:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax == 0) {
		emu_si = 0xFF;
	}
l__32E3:
	emu_orw(&emu_si, emu_si);
	if (emu_si == 0) goto l__3304;
	emu_xorw(&emu_si, 0xFF);
	emu_testw(&emu_get_memory16(emu_ss, emu_bp,  0xC), 0x1);
	if ((emu_get_memory16(emu_ss, emu_bp,  0xC) & 0x1) != 0) {
		emu_ax = emu_si;
		emu_cl = 0x2;
		emu_sarw(&emu_ax, emu_cl);
		emu_dx = emu_si;
		emu_cl = 0x3;
		emu_sarw(&emu_dx, emu_cl);
		emu_addw(&emu_ax, emu_dx);
		emu_subw(&emu_si, emu_ax);
	}
l__3302:
	goto l__3307;
l__3304:
	emu_si = 0x100;
l__3307:
	emu_ax = emu_si;
	goto l__315B;
l__330C:
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
 * Decompiled function emu_Structure_GetLinkedUnit()
 *
 * @name emu_Structure_GetLinkedUnit
 * @implements 1A34:3491:0032:AFF8 ()
 * @implements 1A34:34C3:0003:C81A
 * @implements 1A34:34C4:0002:C33A
 * @implements 1A34:34C6:0006:5EA9
 * @implements 1A34:34CC:0004:893F
 *
 * Called From: 0972:07B7:0011:81A2
 * Called From: 0972:07B7:000D:B89A
 * Called From: 0972:0B53:0012:0F5D
 * Called From: 0972:0C77:000D:A320
 * Called From: 0C10:0119:003D:FEA4
 * Called From: 0C10:028B:003C:67AC
 * Called From: 10E4:1823:000B:CD5F
 * Called From: 176C:2168:0011:BB28
 * Called From: 176C:27F5:000D:8210
 * Called From: 1A34:2211:0015:FCE4
 * Called From: 1A34:226B:000B:D285
 */
void emu_Structure_GetLinkedUnit()
{
l__3491:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x4);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_ax == 0) goto l__34C6;
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_dx = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_dx;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x3), 0xFF);
	if (emu_get_memory8(emu_es, emu_bx, 0x3) == 0xFF) goto l__34C6;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x3);
	emu_ax = (int8)emu_al;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x34C3); emu_cs = 0x0FE4; emu_Unit_Get_ByIndex();
l__34C3:
	emu_pop(&emu_cx);
l__34C4:
	goto l__34CC;
l__34C6:
	emu_xorw(&emu_dx, emu_dx);
	emu_xorw(&emu_ax, emu_ax);
	goto l__34C4;
l__34CC:
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__1A34_350F_0021_9B04()
 *
 * @name f__1A34_350F_0021_9B04
 * @implements 1A34:350F:0021:9B04 ()
 * @implements 1A34:352B:0005:9C8F
 * @implements 1A34:352D:0003:9D1B
 * @implements 1A34:3530:0011:412D
 * @implements 1A34:3541:0014:1936
 * @implements 1A34:3555:000B:BD8C
 * @implements 1A34:3560:001B:39A9
 * @implements 1A34:3571:000A:2159
 * @implements 1A34:357D:000B:BD96
 * @implements 1A34:3588:001F:BC73
 * @implements 1A34:35A7:0029:C135
 * @implements 1A34:35B0:0020:EEF4
 * @implements 1A34:35D0:0015:9E61
 * @implements 1A34:35E5:000A:236B
 * @implements 1A34:35EF:0002:803A
 * @implements 1A34:35F3:0002:C93A
 * @implements 1A34:35F5:000A:3979
 * @implements 1A34:35FF:0017:BAEA
 * @implements 1A34:3607:000F:A6D7
 * @implements 1A34:360E:0008:443E
 * @implements 1A34:3616:0005:7069
 * @implements 1A34:361B:0003:22A3
 * @implements 1A34:361E:0005:8BCF
 *
 * Called From: 16C5:0714:000C:2071
 * Called From: 16C5:0714:000E:20BB
 * Called From: 176C:0876:0023:E780
 */
void f__1A34_350F_0021_9B04()
{
l__350F:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x8);
	emu_push(emu_si);
	emu_si = emu_get_memory16(emu_ss, emu_bp,  0xA);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = 0x0;
	emu_get_memory16(emu_ss, emu_bp, -0x8) = 0x0;
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_ax != 0) goto l__3530;
l__352B:
	emu_xorw(&emu_ax, emu_ax);
l__352D:
	goto l__361E;
l__3530:
	emu_cmpw(&emu_si, 0x4);
	if (emu_si != 0x4) goto l__357D;
	emu_push(emu_si);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x3541); emu_cs = 0x0C3A; f__0C3A_22CD_0029_8F46();
l__3541:
	emu_addw(&emu_sp, 0x6);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x8);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x6));
	if (emu_ax == 0) goto l__3555;
	goto l__3607;
l__3555:
	emu_push(emu_si);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x3560); emu_Unit_FindBestTarget();
l__3560:
	emu_addw(&emu_sp, 0x6);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_ax == 0) { /* Unresolved jump */ emu_ip = 0x357B; emu_last_cs = 0x1A34; emu_last_ip = 0x356F; emu_last_length = 0x001B; emu_last_crc = 0x39A9; emu_call(); return; }
l__3571:
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	goto l__360E;
l__357D:
	emu_push(emu_si);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x3588); emu_Unit_FindBestTarget();
l__3588:
	emu_addw(&emu_sp, 0x6);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0x8);
	if (emu_get_memory8(emu_es, emu_bx, 0x2) == 0x8) goto l__35B0;
	emu_push(emu_si);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x35A7); emu_cs = 0x0C3A; f__0C3A_22CD_0029_8F46();
l__35A7:
	emu_addw(&emu_sp, 0x6);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_ax;
l__35B0:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_ax == 0) goto l__35F5;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x8);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x6));
	if (emu_ax == 0) goto l__35F5;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x35D0); emu_Unit_GetTargetPriority();
l__35D0:
	emu_addw(&emu_sp, 0x8);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x35E5); emu_cs = 0x0C3A; f__0C3A_2207_001D_EDF2();
l__35E5:
	emu_addw(&emu_sp, 0x8);
	emu_pop(&emu_dx);
	emu_cmpw(&emu_dx, emu_ax);
	if (emu_dx <= emu_ax) goto l__35F3;
	goto l__3571;
l__35EF:
	goto l__3571;
l__35F3:
	goto l__3607;
l__35F5:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_ax == 0) goto l__35FF;
	goto l__35EF;
l__35FF:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x8);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x6));
	if (emu_ax == 0) goto l__361B;
l__3607:
	emu_ax = 0x3;
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
l__360E:
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_push(emu_cs); emu_push(0x3616); emu_cs = 0x167E; emu_Tools_Index_Encode();
l__3616:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	goto l__352D;
l__361B:
	goto l__352B;
l__361E:
	emu_pop(&emu_si);
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__1A34_379B_0015_B07B()
 *
 * @name f__1A34_379B_0015_B07B
 * @implements 1A34:379B:0015:B07B ()
 * @implements 1A34:37B0:0026:D835
 * @implements 1A34:37D6:0036:C636
 * @implements 1A34:380C:000B:8A12
 * @implements 1A34:380D:000A:AA19
 * @implements 1A34:3817:0007:B349
 * @implements 1A34:3819:0005:D7FA
 * @implements 1A34:381C:0002:C23A
 * @implements 1A34:381E:0004:9539
 * @implements 1A34:3822:0002:2597
 *
 * Called From: 176C:171D:0023:1E72
 * Called From: 1A34:0C1A:000B:7668
 */
void f__1A34_379B_0015_B07B()
{
l__379B:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_ax == 0) goto l__381E;
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x37B0); emu_Unit_GetHouseID();
l__37B0:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x3A38));
	if (emu_ax != emu_get_memory16(emu_ds, 0x00, 0x3A38)) goto l__381E;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0x4), 0x2);
	if ((emu_get_memory16(emu_es, emu_bx, 0x4) & 0x2) == 0) goto l__381E;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_andw(&emu_get_memory16(emu_es, emu_bx, 0x4), 0xFFFD);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x37D6); emu_cs = 0x16BC; emu_Unit_RemoveFromTeam();
l__37D6:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_dx = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x3A0C));
	if (emu_ax != emu_get_memory16(emu_ds, 0x00, 0x3A0C)) goto l__3819;
	emu_cmpw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x3A0A));
	if (emu_dx != emu_get_memory16(emu_ds, 0x00, 0x3A0A)) goto l__3819;
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x3A0E), 0x1);
	if (emu_get_memory16(emu_ds, 0x00, 0x3A0E) != 0x1) goto l__380D;
	emu_get_memory16(emu_ds, 0x00, 0x38F4) = 0x0;
	emu_get_memory16(emu_ds, 0x00, 0x38F2) = 0x0;
	emu_get_memory16(emu_ds, 0x00, 0x38F6) = 0xFFFF;
	emu_ax = 0x4;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x380C); emu_cs = 0x34E9; overlay(0x34E9, 0); f__B4E9_0050_003F_292A();
l__380C:
	emu_pop(&emu_cx);
l__380D:
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs);
	emu_push(0x3817); emu_Unit_Select();
l__3817:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
l__3819:
	emu_ax = 0x1;
l__381C:
	goto l__3822;
l__381E:
	emu_xorw(&emu_ax, emu_ax);
	goto l__381C;
l__3822:
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

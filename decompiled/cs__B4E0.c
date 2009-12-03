/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__B4E0_0000_000F_14AD()
 *
 * @name f__B4E0_0000_000F_14AD
 * @implements B4E0:0000:000F:14AD ()
 * @implements B4E0:000F:000D:9EA7
 * @implements B4E0:001C:0006:8488
 * @implements B4E0:0022:000F:E922
 * @implements B4E0:0031:0016:8766
 * @implements B4E0:0047:0015:7283
 * @implements B4E0:005C:000F:E74D
 * @implements B4E0:006B:000B:6BAA
 * @implements B4E0:0076:0019:D6BB
 * @implements B4E0:008F:0005:6168
 * @implements B4E0:0094:0020:001D
 * @implements B4E0:00B4:0008:43E5
 * @implements B4E0:00BC:0009:B94B
 * @implements B4E0:00C5:000A:AD03
 * @implements B4E0:00CF:0009:E4DB
 * @implements B4E0:00D8:0006:5D9D
 * @implements B4E0:00DE:000D:1817
 * @implements B4E0:00EB:0007:AA57
 * @implements B4E0:00F2:000D:332A
 * @implements B4E0:00FF:000F:B046
 * @implements B4E0:010E:000F:307E
 * @implements B4E0:011D:0024:0DEA
 * @implements B4E0:0141:0009:91B5
 * @implements B4E0:014A:0003:CB1A
 * @implements B4E0:014D:0004:893F
 *
 * Called From: 34E0:0020:0005:0000
 */
void f__B4E0_0000_000F_14AD()
{
l__0000:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x2);
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x000F); emu_cs = 0x2598; f__2598_0000_0017_EB80();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { overlay(0x34E0, 1); }
l__000F:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ax;
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x001C); emu_cs = 0x29E8; emu_Input_Flags_SetBits();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { overlay(0x34E0, 1); }
l__001C:
	emu_pop(&emu_cx);
	emu_push(emu_cs); emu_push(0x0022); emu_cs = 0x29E8; emu_Input_History_Clear();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { overlay(0x34E0, 1); }
l__0022:
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3A38));
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x0031); emu_cs = 0x34DA; overlay(0x34DA, 0); f__B4DA_0000_002C_B3C2();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { overlay(0x34E0, 1); }
l__0031:
	emu_addw(&emu_sp, 0x6);
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_ax = 0x5;
	emu_push(emu_ax);
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp,  0x6), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp,  0x6) == 0x0) goto l__0047;
	emu_ax = 0x6;
	/* Unresolved jump */ emu_ip = 0x004A; emu_last_cs = 0xB4E0; emu_last_ip = 0x0045; emu_last_length = 0x0016; emu_last_crc = 0x8766; emu_call();
l__0047:
	emu_ax = 0x4;
	emu_push(emu_ax);
	emu_ax = 0xA8;
	emu_push(emu_ax);
	emu_ax = 0xC8;
	emu_push(emu_ax);
	emu_ax = 0xC1;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x005C); emu_cs = 0x0FCB; emu_String_GetString();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { overlay(0x34E0, 1); }
l__005C:
	emu_pop(&emu_cx);
	emu_bx = emu_ax;
	emu_es = emu_dx;
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x0);
	emu_ax = (int8)emu_al;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x006B); emu_cs = 0x29DA; f__29DA_00D0_0013_E21A();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { overlay(0x34E0, 1); }
l__006B:
	emu_pop(&emu_cx);
	emu_push(emu_ax);
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0076); emu_cs = 0x34B8; overlay(0x34B8, 0); f__B4B8_0ED9_001E_DC63();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { overlay(0x34E0, 1); }
l__0076:
	emu_addw(&emu_sp, 0xE);
	emu_get_memory16(emu_ds, 0x00, 0x8028) = emu_dx;
	emu_get_memory16(emu_ds, 0x00, 0x8026) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8026));
	emu_get_memory16(emu_es, emu_bx, 0x8) = 0x6E;
	emu_push(emu_cs);
	emu_push(0x008F); f__B4E0_0B86_001E_9967();
l__008F:
	emu_push(emu_cs); emu_push(0x0094); emu_cs = 0x2B6C; f__2B6C_0137_0020_C73F();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { overlay(0x34E0, 1); }
l__0094:
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_ax = 0xC8;
	emu_push(emu_ax);
	emu_ax = 0x28;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x00B4); emu_cs = 0x24D0; f__24D0_000D_0039_C17D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { overlay(0x34E0, 1); }
l__00B4:
	emu_addw(&emu_sp, 0x10);
	emu_push(emu_cs); emu_push(0x00BC); emu_cs = 0x2B6C; f__2B6C_0169_001E_6939();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { overlay(0x34E0, 1); }
l__00BC:
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x00C5); f__B4E0_041D_0017_C8A5();
l__00C5:
	emu_pop(&emu_cx);
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x00CF); f__B4E0_0847_0019_A380();
l__00CF:
	emu_pop(&emu_cx);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x00D8); emu_cs = 0x2598; f__2598_0000_0017_EB80();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { overlay(0x34E0, 1); }
l__00D8:
	emu_pop(&emu_cx);
	emu_push(emu_cs);
	emu_push(0x00DE); f__B4E0_0151_000D_E28D();
l__00DE:
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x8028));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x8026));
	emu_push(emu_cs); emu_push(0x00EB); emu_cs = 0x23E1; f__23E1_01C2_0011_24E8();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { overlay(0x34E0, 1); }
l__00EB:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_cs); emu_push(0x00F2); emu_cs = 0x34DA; overlay(0x34DA, 0); f__B4DA_02E0_0023_E297();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { overlay(0x34E0, 1); }
l__00F2:
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x8038));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x8036));
	emu_push(emu_cs); emu_push(0x00FF); emu_cs = 0x3520; overlay(0x3520, 0); f__B520_039B_001B_4BEB();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { overlay(0x34E0, 1); }
l__00FF:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x8034));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x8032));
	emu_push(emu_cs); emu_push(0x010E); emu_cs = 0x3520; overlay(0x3520, 0); f__B520_0223_000E_38A3();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { overlay(0x34E0, 1); }
l__010E:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x8030));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x802E));
	emu_push(emu_cs); emu_push(0x011D); emu_cs = 0x3520; overlay(0x3520, 0); f__B520_0223_000E_38A3();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { overlay(0x34E0, 1); }
l__011D:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_get_memory16(emu_ds, 0x00, 0x8030) = emu_ax;
	emu_get_memory16(emu_ds, 0x00, 0x802E) = emu_dx;
	emu_get_memory16(emu_ds, 0x00, 0x8034) = emu_ax;
	emu_get_memory16(emu_ds, 0x00, 0x8032) = emu_dx;
	emu_get_memory16(emu_ds, 0x00, 0x8038) = emu_ax;
	emu_get_memory16(emu_ds, 0x00, 0x8036) = emu_dx;
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0141); emu_cs = 0x29E8; emu_Input_Flags_ClearBits();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { overlay(0x34E0, 1); }
l__0141:
	emu_pop(&emu_cx);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_cs); emu_push(0x014A); emu_cs = 0x2598; f__2598_0000_0017_EB80();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { overlay(0x34E0, 1); }
l__014A:
	emu_pop(&emu_cx);
	goto l__014D;
l__014D:
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B4E0_0151_000D_E28D()
 *
 * @name f__B4E0_0151_000D_E28D
 * @implements B4E0:0151:000D:E28D ()
 * @implements B4E0:015E:0008:4C65
 * @implements B4E0:0166:000E:D2D5
 * @implements B4E0:0174:0015:151C
 * @implements B4E0:0180:0009:104E
 * @implements B4E0:0189:0023:C1DF
 * @implements B4E0:019C:0010:F7C9
 * @implements B4E0:01AC:0004:29FB
 * @implements B4E0:01B0:0003:1D18
 * @implements B4E0:0266:0009:DDFD
 * @implements B4E0:0291:0002:C03A
 * @implements B4E0:0293:000F:D3A0
 * @implements B4E0:0299:0009:2FEF
 * @implements B4E0:02A2:0006:F7CE
 *
 * Called From: B4E0:00DB:0006:5D9D
 */
void f__B4E0_0151_000D_E28D()
{
l__0151:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x2);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_xorw(&emu_si, emu_si);
	goto l__0299;
l__015E:
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0166); emu_cs = 0x34DA; overlay(0x34DA, 0); f__B4DA_0308_0018_F99F();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { overlay(0x34E0, 1); }
l__0166:
	emu_pop(&emu_cx);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x802C));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x802A));
	emu_push(emu_cs); emu_push(0x0174); emu_cs = 0x34A2; overlay(0x34A2, 0); f__B4A2_0039_000B_EC51();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { overlay(0x34E0, 1); }
l__0174:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_si = emu_ax;
	emu_testw(&emu_si, 0x800);
	if ((emu_si & 0x800) != 0) {
		emu_xorw(&emu_si, emu_si);
	}
l__0180:
	emu_cmpw(&emu_si, 0x8001);
	if (emu_si != 0x8001) goto l__0189;
	goto l__02A2;
l__0189:
	emu_andw(&emu_si, 0x80FF);
	emu_get_memory16(emu_ds, 0x00, 0x25CE) = 0x1;
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_si;
	emu_cx = 0x16;
	emu_bx = 0x2A8;
l__019C:
	emu_ax = emu_get_memory16(emu_cs, emu_bx, 0x0);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_ax == emu_get_memory16(emu_ss, emu_bp, -0x2)) goto l__01AC;
	emu_addw(&emu_bx, 0x2);
	if (--emu_cx != 0) goto l__019C;
	goto l__0291;
l__01AC:

	/* Jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_cs, emu_bx, 0x2C);
	switch (emu_ip) {
		case 0x01B0: goto l__01B0;
		case 0x0266: goto l__0266;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0xB4E0; emu_last_ip = 0x01AC; emu_last_length = 0x0004; emu_last_crc = 0x29FB;
			emu_call();
			return;
	}
l__01B0:
	goto l__0293;
l__0266:
	emu_cmpb(&emu_get_memory8(emu_ds, 0x00, 0x98E5), 0x1);
	if (emu_get_memory8(emu_ds, 0x00, 0x98E5) != 0x1) { /* Unresolved jump */ emu_ip = 0x026F; emu_last_cs = 0xB4E0; emu_last_ip = 0x026B; emu_last_length = 0x0009; emu_last_crc = 0xDDFD; emu_call(); return; }
	goto l__0293;
l__0291:
	goto l__0293;
l__0293:
	emu_get_memory16(emu_ds, 0x00, 0x25CE) = 0x0;
l__0299:
	emu_cmpw(&emu_si, 0x8001);
	if (emu_si == 0x8001) goto l__02A2;
	goto l__015E;
l__02A2:
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
 * Decompiled function f__B4E0_0300_001B_4F41()
 *
 * @name f__B4E0_0300_001B_4F41
 * @implements B4E0:0300:001B:4F41 ()
 * @implements B4E0:031B:000E:C2E3
 * @implements B4E0:0329:0017:3649
 * @implements B4E0:0340:0011:2470
 * @implements B4E0:0351:002F:ED25
 * @implements B4E0:0380:002E:C642
 * @implements B4E0:0382:002C:0F24
 * @implements B4E0:03AE:0011:F434
 * @implements B4E0:03B0:000F:D8ED
 * @implements B4E0:03BF:002A:1184
 * @implements B4E0:03D1:0018:0BD3
 * @implements B4E0:03E9:0008:E3A2
 * @implements B4E0:03F1:0009:FACE
 * @implements B4E0:03FA:000A:A623
 * @implements B4E0:0404:000A:A523
 * @implements B4E0:040E:0005:E871
 * @implements B4E0:0411:0002:C2BA
 * @implements B4E0:0413:0005:A97A
 * @implements B4E0:0418:0005:8BCF
 *
 * Called From: 34E0:002A:0005:0000
 */
void f__B4E0_0300_001B_4F41()
{
l__0300:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x4);
	emu_push(emu_si);
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x803C);
	emu_addw(&emu_ax, 0x3);
	emu_si = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x4), emu_si);
	if (emu_get_memory16(emu_es, emu_bx, 0x4) != emu_si) goto l__031B;
	goto l__03BF;
l__031B:
	emu_push(emu_si);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x802C));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x802A));
	emu_push(emu_cs); emu_push(0x0329); emu_cs = 0x348B; overlay(0x348B, 0); f__B48B_00F2_0005_601A();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { overlay(0x34E0, 1); }
l__0329:
	emu_addw(&emu_sp, 0x6);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x0340); emu_cs = 0x348B; overlay(0x348B, 0); f__B48B_0127_000E_E325();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { overlay(0x34E0, 1); }
l__0340:
	emu_addw(&emu_sp, 0x6);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x0351); emu_cs = 0x348B; overlay(0x348B, 0); f__B48B_0127_000E_E325();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { overlay(0x34E0, 1); }
l__0351:
	emu_addw(&emu_sp, 0x6);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x38), 0x31);
	if (emu_get_memory16(emu_es, emu_bx, 0x38) != 0x31) goto l__0382;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_al = 0xF;
	emu_get_memory8(emu_es, emu_bx, 0x2C) = emu_al;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_get_memory8(emu_es, emu_bx, 0x2A) = emu_al;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_get_memory8(emu_es, emu_bx, 0x26) = emu_al;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x0380); emu_cs = 0x34A2; overlay(0x34A2, 0); f__B4A2_0729_0013_2494();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { overlay(0x34E0, 1); }
l__0380:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
l__0382:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x38), 0x31);
	if (emu_get_memory16(emu_es, emu_bx, 0x38) != 0x31) goto l__03B0;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = 0x8;
	emu_get_memory8(emu_es, emu_bx, 0x2C) = emu_al;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_get_memory8(emu_es, emu_bx, 0x2A) = emu_al;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_get_memory8(emu_es, emu_bx, 0x26) = emu_al;
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x03AE); emu_cs = 0x34A2; overlay(0x34A2, 0); f__B4A2_0729_0013_2494();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { overlay(0x34E0, 1); }
l__03AE:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
l__03B0:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x4);
	emu_subw(&emu_ax, 0x3);
	emu_get_memory16(emu_ds, 0x00, 0x803C) = emu_ax;
	goto l__0413;
l__03BF:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0x2E), 0x1100);
	if ((emu_get_memory16(emu_es, emu_bx, 0x2E) & 0x1100) == 0) {
		emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x25CE), 0x0);
		if (emu_get_memory16(emu_ds, 0x00, 0x25CE) == 0x0) goto l__0413;
	}
l__03D1:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x38), 0x31);
	if (emu_get_memory16(emu_es, emu_bx, 0x38) != 0x31) goto l__0413;
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x03E9); emu_cs = 0x348B; overlay(0x348B, 0); f__B48B_0127_000E_E325();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { overlay(0x34E0, 1); }
l__03E9:
	emu_addw(&emu_sp, 0x6);
	emu_push(emu_cs);
	emu_push(0x03F1); f__B4E0_059B_001B_5C8D();
l__03F1:
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x03FA); f__B4E0_0847_0019_A380();
l__03FA:
	emu_pop(&emu_cx);
	emu_ax = 0x841;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0404); emu_cs = 0x29E8; emu_Input_HandleInput();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { overlay(0x34E0, 1); }
l__0404:
	emu_pop(&emu_cx);
	emu_ax = 0x842;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x040E); emu_cs = 0x29E8; emu_Input_HandleInput();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { overlay(0x34E0, 1); }
l__040E:
	emu_pop(&emu_cx);
	emu_xorw(&emu_ax, emu_ax);
l__0411:
	goto l__0418;
l__0413:
	emu_ax = 0x1;
	goto l__0411;
l__0418:
	emu_pop(&emu_si);
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B4E0_041D_0017_C8A5()
 *
 * @name f__B4E0_041D_0017_C8A5
 * @implements B4E0:041D:0017:C8A5 ()
 * @implements B4E0:0434:0036:4669
 * @implements B4E0:046A:000D:05BD
 * @implements B4E0:0477:000E:69F3
 * @implements B4E0:0485:000D:4C66
 * @implements B4E0:0488:000A:5823
 * @implements B4E0:0492:0022:B650
 * @implements B4E0:04B4:000F:0749
 * @implements B4E0:04C3:0020:26EC
 * @implements B4E0:04E3:002F:1851
 * @implements B4E0:0512:0016:1B8D
 * @implements B4E0:051C:000C:911E
 * @implements B4E0:0528:003C:6C9E
 * @implements B4E0:0542:0022:EF7C
 * @implements B4E0:0568:0010:4671
 * @implements B4E0:0578:000D:76A5
 * @implements B4E0:0585:0016:94CD
 * @implements B4E0:058F:000C:487E
 *
 * Called From: B4E0:00C2:0009:B94B
 * Called From: B4E0:082E:000A:A4FC
 */
void f__B4E0_041D_0017_C8A5()
{
l__041D:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0xE);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp,  0x6), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp,  0x6) == 0x0) goto l__0488;
	emu_ax = 0x3;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0434); emu_cs = 0x252E; f__252E_0001_0018_08B3();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { overlay(0x34E0, 1); }
l__0434:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ds, 0x00, 0x25D2) = emu_dx;
	emu_get_memory16(emu_ds, 0x00, 0x25D0) = emu_ax;
	emu_get_memory16(emu_ds, 0x00, 0x803E) = 0x0;
	emu_get_memory16(emu_ds, 0x00, 0x803C) = 0x0;
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x3A38);
	emu_dx = 0x1E;
	emu_imuluw(&emu_ax, emu_dx);
	emu_bx = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, emu_bx, 0x37F8));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x0);
	emu_ax = (int8)emu_al;
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x25D6;
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x8040;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x046A); emu_cs = 0x01F7; emu_String_sprintf();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { overlay(0x34E0, 1); }
l__046A:
	emu_addw(&emu_sp, 0xA);
	emu_push(emu_ds);
	emu_ax = 0x8040;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0477); emu_cs = 0x0642; emu_String_GenerateFilename();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { overlay(0x34E0, 1); }
l__0477:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x8040;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0485); emu_cs = 0x01F7; emu_String_strcpy();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { overlay(0x34E0, 1); }
l__0485:
	emu_addw(&emu_sp, 0x8);
l__0488:
	emu_push(emu_ds);
	emu_ax = 0x8040;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0492); emu_cs = 0x34B1; overlay(0x34B1, 0); f__B4B1_0000_0016_067A();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { overlay(0x34E0, 1); }
l__0492:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_di = emu_ax;
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6CE1));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6CDF));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x25D2));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x25D0));
	emu_ax = 0x454D;
	emu_dx = 0x414E;
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x04B4); emu_cs = 0x34B1; overlay(0x34B1, 0); f__B4B1_01CD_002A_CE8A();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { overlay(0x34E0, 1); }
l__04B4:
	emu_addw(&emu_sp, 0xE);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x04C3); emu_cs = 0x34B1; overlay(0x34B1, 0); f__B4B1_0082_0012_D287();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { overlay(0x34E0, 1); }
l__04C3:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = 0x0;
	emu_get_memory16(emu_ss, emu_bp, -0x8) = 0x0;
	emu_get_memory16(emu_ds, 0x00, 0x803A) = 0x0;
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x25D2);
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x25D0);
	emu_get_memory16(emu_ss, emu_bp, -0xA) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0xC) = emu_dx;
	goto l__0542;
l__04E3:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x0);
	emu_ah = 0x0;
	emu_get_memory16(emu_ss, emu_bp, -0xE) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0xE);
	emu_cwd();
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax);
	emu_adcw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_dx);
	emu_bx = emu_get_memory16(emu_ss, emu_bp, -0xE);
	emu_es = emu_get_memory16(emu_ss, emu_bp, -0xA);
	emu_addw(&emu_bx, emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0xFFFF);
	emu_ah = 0x0;
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x38B2);
	emu_incw(&emu_dx);
	emu_cmpw(&emu_ax, emu_dx);
	if ((int16)emu_ax <= (int16)emu_dx) goto l__0528;
	goto l__051C;
l__0512:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_get_memory8(emu_es, emu_bx, 0x0) = 0x0;
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0xC));
l__051C:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0xE);
	emu_decw(&emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax != 0) goto l__0512;
	goto l__0542;
l__0528:
	emu_bx = emu_get_memory16(emu_ss, emu_bp, -0xE);
	emu_es = emu_get_memory16(emu_ss, emu_bp, -0xA);
	emu_addw(&emu_bx, emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_al = emu_get_memory8(emu_ss, emu_bp, -0xE);
	emu_get_memory8(emu_es, emu_bx, 0xFFFF) = emu_al;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0xE);
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_ax);
	emu_incw(&emu_get_memory16(emu_ds, 0x00, 0x803A));
l__0542:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x6);
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x8);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if ((int16)emu_ax < (int16)emu_get_memory16(emu_ss, emu_bp, -0x2)) goto l__04E3;
	if (emu_ax != emu_get_memory16(emu_ss, emu_bp, -0x2)) { /* Unresolved jump */ emu_ip = 0x0554; emu_last_cs = 0xB4E0; emu_last_ip = 0x054D; emu_last_length = 0x0022; emu_last_crc = 0xEF7C; emu_call(); return; }
	emu_cmpw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0x4));
	if (emu_dx < emu_get_memory16(emu_ss, emu_bp, -0x4)) goto l__04E3;
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x25D2);
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x25D0);
	emu_get_memory16(emu_ds, 0x00, 0x804F) = emu_ax;
	emu_get_memory16(emu_ds, 0x00, 0x804D) = emu_dx;
	goto l__0568;
l__0568:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x804D));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x0);
	emu_ax = (int8)emu_al;
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax == 0) { /* Unresolved jump */ emu_ip = 0x0564; emu_last_cs = 0xB4E0; emu_last_ip = 0x0572; emu_last_length = 0x0010; emu_last_crc = 0x4671; emu_call(); return; }
	emu_xorw(&emu_si, emu_si);
	goto l__058F;
l__0578:
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x804F));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x804D));
	emu_push(emu_cs);
	emu_push(0x0585); f__B4E0_0B35_0010_5ED9();
l__0585:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ds, 0x00, 0x804F) = emu_dx;
	emu_get_memory16(emu_ds, 0x00, 0x804D) = emu_ax;
	emu_incw(&emu_si);
l__058F:
	emu_cmpw(&emu_si, emu_get_memory16(emu_ds, 0x00, 0x803E));
	if (emu_si < emu_get_memory16(emu_ds, 0x00, 0x803E)) goto l__0578;
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
 * Decompiled function f__B4E0_059B_001B_5C8D()
 *
 * @name f__B4E0_059B_001B_5C8D
 * @implements B4E0:059B:001B:5C8D ()
 * @implements B4E0:05B6:000B:511B
 * @implements B4E0:05C1:001E:A8B8
 * @implements B4E0:05C9:0016:55D4
 * @implements B4E0:05DF:0021:C9E6
 * @implements B4E0:05E1:001F:D0A6
 * @implements B4E0:0600:0012:17E4
 * @implements B4E0:0612:001E:F6FB
 * @implements B4E0:0630:0009:02A3
 * @implements B4E0:0639:000C:36ED
 * @implements B4E0:0645:0013:A738
 * @implements B4E0:0658:0024:52EC
 * @implements B4E0:067C:0015:539F
 * @implements B4E0:0691:0014:6B8A
 * @implements B4E0:06A5:0015:76F1
 * @implements B4E0:06BA:0014:7316
 * @implements B4E0:06CE:0014:F31D
 * @implements B4E0:06E2:0009:2601
 * @implements B4E0:06EB:0003:CA9A
 * @implements B4E0:06EE:0023:F430
 * @implements B4E0:06F1:0020:15C1
 * @implements B4E0:0703:000E:76D9
 * @implements B4E0:0713:0016:4D4D
 * @implements B4E0:0729:004D:2BC6
 * @implements B4E0:0776:0024:4F14
 * @implements B4E0:079A:0009:DAE3
 * @implements B4E0:07A3:0014:EB5E
 * @implements B4E0:07B7:0005:9E2E
 * @implements B4E0:07BC:000E:9359
 * @implements B4E0:07CA:004A:BB40
 * @implements B4E0:07CD:0047:7CA3
 * @implements B4E0:07F2:0022:B89A
 * @implements B4E0:0814:0013:6B81
 * @implements B4E0:0827:000A:A4FC
 * @implements B4E0:0831:0006:5C12
 * @implements B4E0:0837:0009:78DC
 * @implements B4E0:0840:0007:F77C
 *
 * Called From: B4E0:03EE:0008:E3A2
 */
void f__B4E0_059B_001B_5C8D()
{
l__059B:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x2C);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_di = emu_get_memory16(emu_ds, 0x00, 0x803C);
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x804F);
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x804D);
	emu_get_memory16(emu_ss, emu_bp, -0x14) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x16) = emu_dx;
	goto l__05C9;
l__05B6:
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x16));
	emu_push(emu_cs);
	emu_push(0x05C1); f__B4E0_0B35_0010_5ED9();
l__05C1:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x14) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x16) = emu_ax;
l__05C9:
	emu_ax = emu_di;
	emu_decw(&emu_di);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax != 0) goto l__05B6;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x16));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x5), 0x30);
	if (emu_get_memory8(emu_es, emu_bx, 0x5) != 0x30) goto l__05DF;
	emu_ax = 0x1;
	goto l__05E1;
l__05DF:
	emu_xorw(&emu_ax, emu_ax);
l__05E1:
	emu_get_memory16(emu_ss, emu_bp, -0x1C) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x14);
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x16);
	emu_incw(&emu_dx);
	emu_get_memory16(emu_ss, emu_bp, -0x1E) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x20) = emu_dx;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x20));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x2));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_push(emu_cs); emu_push(0x0600); emu_cs = 0x2BC0; emu_Tools_Swapd();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { overlay(0x34E0, 1); }
l__0600:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x18) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x1A) = emu_ax;
	emu_push(emu_ds);
	emu_ax = 0x8040;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0612); emu_cs = 0x34B1; overlay(0x34B1, 0); f__B4B1_0000_0016_067A();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { overlay(0x34E0, 1); }
l__0612:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_si = emu_ax;
	emu_xorw(&emu_ax, emu_ax);
	emu_dx = 0xC;
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x2C);
	emu_push(emu_ax);
	emu_ax = 0x4F46;
	emu_dx = 0x4E49;
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x0630); emu_cs = 0x34B1; overlay(0x34B1, 0); f__B4B1_01CD_002A_CE8A();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { overlay(0x34E0, 1); }
l__0630:
	emu_addw(&emu_sp, 0xE);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x0639); emu_cs = 0x34B1; overlay(0x34B1, 0); f__B4B1_0082_0012_D287();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { overlay(0x34E0, 1); }
l__0639:
	emu_pop(&emu_cx);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x26));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x28));
	emu_push(emu_cs); emu_push(0x0645); emu_cs = 0x2BC0; emu_Tools_Swapd();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { overlay(0x34E0, 1); }
l__0645:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x26) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x28) = emu_ax;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x22));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x24));
	emu_push(emu_cs); emu_push(0x0658); emu_cs = 0x2BC0; emu_Tools_Swapd();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { overlay(0x34E0, 1); }
l__0658:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x22) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x24) = emu_ax;
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x38DC);
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x38DA);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0xE) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x10) = emu_dx;
	emu_ax = 0x3;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x067C); emu_cs = 0x252E; f__252E_0001_0018_08B3();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { overlay(0x34E0, 1); }
l__067C:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0xA) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0xC) = emu_ax;
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x8040;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0691); emu_cs = 0x1FB5; f__1FB5_01FA_0010_F89C();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { overlay(0x34E0, 1); }
l__0691:
	emu_addw(&emu_sp, 0x6);
	emu_si = emu_ax;
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x18));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x1A));
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x06A5); emu_cs = 0x1FB5; f__1FB5_1207_001B_2A6C();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { overlay(0x34E0, 1); }
l__06A5:
	emu_addw(&emu_sp, 0x8);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x22));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x24));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x06BA); emu_cs = 0x1FB5; f__1FB5_0AEC_001B_A5E4();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { overlay(0x34E0, 1); }
l__06BA:
	emu_addw(&emu_sp, 0xA);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_cs); emu_push(0x06CE); emu_cs = 0x2502; f__2502_00FA_0009_9EB2();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { overlay(0x34E0, 1); }
l__06CE:
	emu_addw(&emu_sp, 0x8);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x06E2); emu_cs = 0x2502; f__2502_0008_0015_FFBD();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { overlay(0x34E0, 1); }
l__06E2:
	emu_addw(&emu_sp, 0x8);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x06EB); emu_cs = 0x1FB5; f__1FB5_09C7_0018_922D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { overlay(0x34E0, 1); }
l__06EB:
	emu_pop(&emu_cx);
	goto l__06F1;
l__06EE:
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x4));
l__06F1:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x0), 0x2A);
	if (emu_get_memory8(emu_es, emu_bx, 0x0) != 0x2A) {
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
		emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x0), 0x3F);
		if (emu_get_memory8(emu_es, emu_bx, 0x0) != 0x3F) goto l__06EE;
	}
l__0703:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x0), 0x2A);
	if (emu_get_memory8(emu_es, emu_bx, 0x0) != 0x2A) { /* Unresolved jump */ emu_ip = 0x0711; emu_last_cs = 0xB4E0; emu_last_ip = 0x070A; emu_last_length = 0x000E; emu_last_crc = 0x76D9; emu_call(); return; }
	emu_ax = 0x1;
	goto l__0713;
l__0713:
	emu_get_memory16(emu_ss, emu_bp, -0x12) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_get_memory8(emu_es, emu_bx, 0x0) = 0x0;
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x1C), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp, -0x1C) != 0x0) goto l__0729;
	goto l__07BC;
l__0729:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x0);
	emu_ax = (int8)emu_al;
	emu_addw(&emu_ax, 0xFFD0);
	emu_di = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0xE) = emu_ds;
	emu_get_memory16(emu_ss, emu_bp, -0x10) = 0x8D0D;
	emu_get_memory16(emu_ss, emu_bp, -0x2) = 0x0;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = 0x0;
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x38DC);
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x38DA);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_dx;
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x3A38);
	emu_dx = 0x1E;
	emu_imuluw(&emu_ax, emu_dx);
	emu_bx = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, emu_bx, 0x37F8));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x0);
	emu_ax = (int8)emu_al;
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x25DF;
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x9939;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0776); emu_cs = 0x01F7; emu_String_sprintf();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { overlay(0x34E0, 1); }
l__0776:
	emu_addw(&emu_sp, 0xA);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x38DE));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x38B2);
	emu_cl = 0x2;
	emu_shlw(&emu_ax, emu_cl);
	emu_addw(&emu_ax, 0x4);
	emu_addw(&emu_ax, emu_di);
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x9939;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x079A); emu_cs = 0x0642; emu_String_GenerateFilename();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { overlay(0x34E0, 1); }
l__079A:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x07A3); emu_cs = 0x0FCB; f__0FCB_0088_0016_2DD9();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { overlay(0x34E0, 1); }
l__07A3:
	emu_addw(&emu_sp, 0xC);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs); emu_push(0x07B7); emu_cs = 0x2502; f__2502_0008_0015_FFBD();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { overlay(0x34E0, 1); }
l__07B7:
	emu_addw(&emu_sp, 0x8);
	goto l__07F2;
l__07BC:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x2);
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_dx;
	goto l__07CD;
l__07CA:
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x8));
l__07CD:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x0), 0x0);
	if (emu_get_memory8(emu_es, emu_bx, 0x0) == 0x0) { /* Unresolved jump */ emu_ip = 0x07DF; emu_last_cs = 0xB4E0; emu_last_ip = 0x07D4; emu_last_length = 0x0047; emu_last_crc = 0x7CA3; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x0), 0xC);
	if (emu_get_memory8(emu_es, emu_bx, 0x0) != 0xC) goto l__07CA;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x0), 0x0);
	if (emu_get_memory8(emu_es, emu_bx, 0x0) != 0x0) {
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
		emu_get_memory8(emu_es, emu_bx, 0x0) = 0x0;
		emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x8));
	}
l__07F2:
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x8028));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x8026));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_push(emu_cs); emu_push(0x0814); emu_cs = 0x34DA; overlay(0x34DA, 0); f__B4DA_0AB8_002A_AAB2();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { overlay(0x34E0, 1); }
l__0814:
	emu_addw(&emu_sp, 0x12);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x8028));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x8026));
	emu_push(emu_cs); emu_push(0x0827); emu_cs = 0x348B; overlay(0x348B, 0); f__B48B_0127_000E_E325();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { overlay(0x34E0, 1); }
l__0827:
	emu_addw(&emu_sp, 0x6);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x0831); f__B4E0_041D_0017_C8A5();
l__0831:
	emu_pop(&emu_cx);
	emu_push(emu_cs);
	emu_push(0x0837); f__B4E0_0B86_001E_9967();
l__0837:
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x0840); f__B4E0_0847_0019_A380();
l__0840:
	emu_pop(&emu_cx);
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
 * Decompiled function f__B4E0_0847_0019_A380()
 *
 * @name f__B4E0_0847_0019_A380
 * @implements B4E0:0847:0019:A380 ()
 * @implements B4E0:0860:000F:95BC
 * @implements B4E0:086F:000D:B232
 * @implements B4E0:087C:000A:3AF9
 * @implements B4E0:0886:0027:44E5
 * @implements B4E0:08AD:0008:0683
 * @implements B4E0:08B5:001E:B55D
 * @implements B4E0:08D3:0014:3673
 * @implements B4E0:08E7:001B:AEC2
 * @implements B4E0:0902:005F:B97B
 * @implements B4E0:0961:001F:94F8
 * @implements B4E0:0980:0025:643A
 * @implements B4E0:0985:0020:9A33
 * @implements B4E0:0997:000E:6934
 * @implements B4E0:09A5:000E:4E9F
 * @implements B4E0:09B3:001D:8E21
 * @implements B4E0:09D0:0011:A6F0
 * @implements B4E0:09D9:0008:BFCC
 * @implements B4E0:09E1:001D:AE52
 * @implements B4E0:09FE:000A:A85B
 * @implements B4E0:0A08:0014:3661
 * @implements B4E0:0A1C:000A:F8FD
 * @implements B4E0:0A26:0013:D5DC
 * @implements B4E0:0A39:000A:F8FD
 * @implements B4E0:0A43:0007:05DB
 * @implements B4E0:0A4A:0024:F6D9
 * @implements B4E0:0A6E:0008:43E5
 * @implements B4E0:0A76:0008:3199
 * @implements B4E0:0A7E:0003:CB1A
 * @implements B4E0:0A81:0005:8BCF
 *
 * Called From: B4E0:00CC:000A:AD03
 * Called From: B4E0:03F7:0009:FACE
 * Called From: B4E0:083D:0009:78DC
 * Called From: B4E0:0AA5:0008:1842
 */
void f__B4E0_0847_0019_A380()
{
l__0847:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0xA);
	emu_push(emu_si);
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp,  0x6), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp,  0x6) != 0x0) goto l__0860;
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x803E);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x25D4));
	if (emu_ax != emu_get_memory16(emu_ds, 0x00, 0x25D4)) goto l__0860;
	goto l__0A81;
l__0860:
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x803E);
	emu_get_memory16(emu_ds, 0x00, 0x25D4) = emu_ax;
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x086F); emu_cs = 0x2598; f__2598_0000_0017_EB80();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { overlay(0x34E0, 1); }
l__086F:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0xA) = emu_ax;
	emu_ax = 0x8;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x087C); emu_cs = 0x07AE; f__07AE_00E4_000D_9955();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { overlay(0x34E0, 1); }
l__087C:
	emu_pop(&emu_cx);
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0886); emu_cs = 0x34DA; overlay(0x34DA, 0); f__B4DA_0A8E_0025_4AC8();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { overlay(0x34E0, 1); }
l__0886:
	emu_pop(&emu_cx);
	emu_ax = 0x12;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = 0xC;
	emu_push(emu_ax);
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x992B);
	emu_addw(&emu_ax, 0x2);
	emu_push(emu_ax);
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x992D);
	emu_cl = 0x3;
	emu_shlw(&emu_ax, emu_cl);
	emu_addw(&emu_ax, 0x10);
	emu_push(emu_ax);
	emu_ax = 0x30;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x08AD); emu_cs = 0x0FCB; emu_String_GetString();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { overlay(0x34E0, 1); }
l__08AD:
	emu_pop(&emu_cx);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x08B5); emu_cs = 0x10E4; f__10E4_1EF1_0040_01F8();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { overlay(0x34E0, 1); }
l__08B5:
	emu_addw(&emu_sp, 0xE);
	emu_ax = 0x11;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x08D3); emu_cs = 0x10E4; f__10E4_1EF1_0040_01F8();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { overlay(0x34E0, 1); }
l__08D3:
	emu_addw(&emu_sp, 0xE);
	emu_ax = 0x3;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x802C));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x802A));
	emu_push(emu_cs); emu_push(0x08E7); emu_cs = 0x348B; overlay(0x348B, 0); f__B48B_00F2_0005_601A();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { overlay(0x34E0, 1); }
l__08E7:
	emu_addw(&emu_sp, 0x6);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x804F);
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x804D);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_dx;
	emu_xorw(&emu_si, emu_si);
	goto l__09D9;
l__0902:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x6);
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x8);
	emu_addw(&emu_dx, 0x7);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_get_memory16(emu_es, emu_bx, 0x1A) = emu_ax;
	emu_get_memory16(emu_es, emu_bx, 0x18) = emu_dx;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_get_memory16(emu_es, emu_bx, 0x16) = emu_ax;
	emu_get_memory16(emu_es, emu_bx, 0x14) = emu_dx;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_get_memory16(emu_es, emu_bx, 0x12) = emu_ax;
	emu_get_memory16(emu_es, emu_bx, 0x10) = emu_dx;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x6), 0x30);
	if (emu_get_memory8(emu_es, emu_bx, 0x6) != 0x30) goto l__0961;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_get_memory16(emu_es, emu_bx, 0x1E) = 0x10;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_al = 0xB;
	emu_get_memory8(emu_es, emu_bx, 0x28) = emu_al;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_get_memory8(emu_es, emu_bx, 0x2A) = emu_al;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_get_memory8(emu_es, emu_bx, 0x26) = emu_al;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_get_memory16(emu_es, emu_bx, 0x38) = 0x30;
	goto l__0997;
l__0961:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_get_memory16(emu_es, emu_bx, 0x1E) = 0x18;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_get_memory16(emu_es, emu_bx, 0x38) = 0x31;
	emu_cmpw(&emu_si, emu_get_memory16(emu_ds, 0x00, 0x803C));
	if (emu_si != emu_get_memory16(emu_ds, 0x00, 0x803C)) goto l__0980;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_al = 0x8;
	goto l__0985;
l__0980:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_al = 0xF;
l__0985:
	emu_get_memory8(emu_es, emu_bx, 0x28) = emu_al;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_get_memory8(emu_es, emu_bx, 0x2A) = emu_al;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_get_memory8(emu_es, emu_bx, 0x26) = emu_al;
l__0997:
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x09A5); emu_cs = 0x348B; overlay(0x348B, 0); f__B48B_0127_000E_E325();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { overlay(0x34E0, 1); }
l__09A5:
	emu_addw(&emu_sp, 0x6);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x09B3); emu_cs = 0x34A2; overlay(0x34A2, 0); f__B4A2_0729_0013_2494();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { overlay(0x34E0, 1); }
l__09B3:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x2);
	emu_dx = emu_get_memory16(emu_es, emu_bx, 0x0);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_dx;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs);
	emu_push(0x09D0); f__B4E0_0B35_0010_5ED9();
l__09D0:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_ax;
	emu_incw(&emu_si);
l__09D9:
	emu_cmpw(&emu_si, 0xB);
	if (emu_si >= 0xB) goto l__09E1;
	goto l__0902;
l__09E1:
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x803E));
	emu_ax = 0xB;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x803A));
	emu_ax = 0xF;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x802C));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x802A));
	emu_push(emu_cs); emu_push(0x09FE); emu_cs = 0x348B; overlay(0x348B, 0); f__B48B_00F2_0005_601A();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { overlay(0x34E0, 1); }
l__09FE:
	emu_addw(&emu_sp, 0x6);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0A08); emu_cs = 0x3520; overlay(0x3520, 0); f__B520_0000_0019_6B99();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { overlay(0x34E0, 1); }
l__0A08:
	emu_addw(&emu_sp, 0xA);
	emu_ax = 0x10;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x802C));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x802A));
	emu_push(emu_cs); emu_push(0x0A1C); emu_cs = 0x348B; overlay(0x348B, 0); f__B48B_00F2_0005_601A();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { overlay(0x34E0, 1); }
l__0A1C:
	emu_addw(&emu_sp, 0x6);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0A26); emu_cs = 0x34A2; overlay(0x34A2, 0); f__B4A2_0729_0013_2494();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { overlay(0x34E0, 1); }
l__0A26:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_ax = 0x11;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x802C));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x802A));
	emu_push(emu_cs); emu_push(0x0A39); emu_cs = 0x348B; overlay(0x348B, 0); f__B48B_00F2_0005_601A();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { overlay(0x34E0, 1); }
l__0A39:
	emu_addw(&emu_sp, 0x6);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0A43); emu_cs = 0x34A2; overlay(0x34A2, 0); f__B4A2_0729_0013_2494();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { overlay(0x34E0, 1); }
l__0A43:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_cs); emu_push(0x0A4A); emu_cs = 0x2B6C; f__2B6C_0137_0020_C73F();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { overlay(0x34E0, 1); }
l__0A4A:
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x9931));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x992F));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x992B));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x992D));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x992B));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x992D));
	emu_push(emu_cs); emu_push(0x0A6E); emu_cs = 0x24D0; f__24D0_000D_0039_C17D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { overlay(0x34E0, 1); }
l__0A6E:
	emu_addw(&emu_sp, 0x10);
	emu_push(emu_cs); emu_push(0x0A76); emu_cs = 0x2B6C; f__2B6C_0169_001E_6939();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { overlay(0x34E0, 1); }
l__0A76:
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_cs); emu_push(0x0A7E); emu_cs = 0x2598; f__2598_0000_0017_EB80();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { overlay(0x34E0, 1); }
l__0A7E:
	emu_pop(&emu_cx);
	goto l__0A81;
l__0A81:
	emu_pop(&emu_si);
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B4E0_0A86_000E_D3BB()
 *
 * @name f__B4E0_0A86_000E_D3BB
 * @implements B4E0:0A86:000E:D3BB ()
 * @implements B4E0:0A94:000C:E9DA
 * @implements B4E0:0AA0:0008:1842
 * @implements B4E0:0AA8:0003:CB1A
 * @implements B4E0:0AAB:0002:2597
 *
 * Called From: 34E0:003E:0005:0000
 */
void f__B4E0_0A86_000E_D3BB()
{
l__0A86:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x0A94); emu_cs = 0x3520; overlay(0x3520, 0); f__B520_00E3_0028_2188();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { overlay(0x34E0, 1); }
l__0A94:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_subw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x803E));
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x0AA0); f__B4E0_0AAD_002E_796D();
l__0AA0:
	emu_pop(&emu_cx);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x0AA8); f__B4E0_0847_0019_A380();
l__0AA8:
	emu_pop(&emu_cx);
	goto l__0AAB;
l__0AAB:
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B4E0_0AAD_002E_796D()
 *
 * @name f__B4E0_0AAD_002E_796D
 * @implements B4E0:0AAD:002E:796D ()
 * @implements B4E0:0AD5:0006:3E89
 * @implements B4E0:0ADB:000D:341A
 * @implements B4E0:0AE8:0012:379A
 * @implements B4E0:0AF1:0009:FC84
 * @implements B4E0:0AFA:001B:02D4
 * @implements B4E0:0B0F:0006:9E89
 * @implements B4E0:0B15:000D:B407
 * @implements B4E0:0B22:0013:FE22
 * @implements B4E0:0B2B:000A:7147
 * @implements B4E0:0B32:0003:2E57
 *
 * Called From: B4E0:0A9D:000C:E9DA
 */
void f__B4E0_0AAD_002E_796D()
{
l__0AAD:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_si);
	emu_si = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_orw(&emu_si, emu_si);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) goto l__0AFA;
	emu_ax = emu_si;
	emu_addw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x803E));
	emu_addw(&emu_ax, 0xB);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x803A));
	if (emu_ax > emu_get_memory16(emu_ds, 0x00, 0x803A)) {
		emu_ax = emu_get_memory16(emu_ds, 0x00, 0x803E);
		emu_addw(&emu_ax, 0xB);
		emu_dx = emu_get_memory16(emu_ds, 0x00, 0x803A);
		emu_subw(&emu_dx, emu_ax);
		emu_si = emu_dx;
	}
l__0AD5:
	emu_addw(&emu_get_memory16(emu_ds, 0x00, 0x803E), emu_si);
	goto l__0AF1;
l__0ADB:
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x804F));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x804D));
	emu_push(emu_cs);
	emu_push(0x0AE8); f__B4E0_0B35_0010_5ED9();
l__0AE8:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ds, 0x00, 0x804F) = emu_dx;
	emu_get_memory16(emu_ds, 0x00, 0x804D) = emu_ax;
l__0AF1:
	emu_ax = emu_si;
	emu_decw(&emu_si);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax != 0) goto l__0ADB;
	goto l__0B32;
l__0AFA:
	emu_orw(&emu_si, emu_si);
	if (!(emu_flags.sf != emu_flags.of)) goto l__0B32;
	emu_ax = emu_si;
	emu_negw(&emu_ax, emu_ax);
	emu_si = emu_ax;
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x803E);
	emu_subw(&emu_ax, emu_si);
	if ((emu_flags.sf != emu_flags.of)) {
		emu_si = emu_get_memory16(emu_ds, 0x00, 0x803E);
	}
l__0B0F:
	emu_subw(&emu_get_memory16(emu_ds, 0x00, 0x803E), emu_si);
	goto l__0B2B;
l__0B15:
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x804F));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x804D));
	emu_push(emu_cs);
	emu_push(0x0B22); f__B4E0_0B5D_0005_6F1A();
l__0B22:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ds, 0x00, 0x804F) = emu_dx;
	emu_get_memory16(emu_ds, 0x00, 0x804D) = emu_ax;
l__0B2B:
	emu_ax = emu_si;
	emu_decw(&emu_si);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax != 0) goto l__0B15;
l__0B32:
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B4E0_0B35_0010_5ED9()
 *
 * @name f__B4E0_0B35_0010_5ED9
 * @implements B4E0:0B35:0010:5ED9 ()
 * @implements B4E0:0B45:0016:C340
 * @implements B4E0:0B48:0013:5D73
 * @implements B4E0:0B5B:0002:2597
 *
 * Called From: B4E0:0582:000D:76A5
 * Called From: B4E0:05BE:000B:511B
 * Called From: B4E0:09CD:001D:8E21
 * Called From: B4E0:0AE5:000D:341A
 */
void f__B4E0_0B35_0010_5ED9()
{
l__0B35:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x0);
	emu_ah = 0x0;
	emu_addw(&emu_get_memory16(emu_ss, emu_bp,  0x6), emu_ax);
	goto l__0B48;
l__0B45:
	emu_incw(&emu_get_memory16(emu_ss, emu_bp,  0x6));
l__0B48:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x0);
	emu_ax = (int8)emu_al;
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax == 0) goto l__0B45;
	emu_dx = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	goto l__0B5B;
l__0B5B:
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B4E0_0B5D_0005_6F1A()
 *
 * @name f__B4E0_0B5D_0005_6F1A
 * @implements B4E0:0B5D:0005:6F1A ()
 * @implements B4E0:0B62:0022:6717
 * @implements B4E0:0B84:0002:2597
 *
 * Called From: B4E0:0B1F:000D:B407
 */
void f__B4E0_0B5D_0005_6F1A()
{
l__0B5D:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	goto l__0B62;
l__0B62:
	emu_decw(&emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x0);
	emu_ax = (int8)emu_al;
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax == 0) goto l__0B62;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x0);
	emu_ax = (int8)emu_al;
	emu_decw(&emu_ax);
	emu_dx = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_push(emu_ax);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_pop(&emu_bx);
	emu_subw(&emu_ax, emu_bx);
	goto l__0B84;
l__0B84:
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B4E0_0B86_001E_9967()
 *
 * @name f__B4E0_0B86_001E_9967
 * @implements B4E0:0B86:001E:9967 ()
 * @implements B4E0:0BA4:0018:ACD7
 * @implements B4E0:0BA6:0016:F565
 * @implements B4E0:0BBC:0018:2E0F
 * @implements B4E0:0BBE:0016:77BD
 * @implements B4E0:0BD4:001A:EE8D
 * @implements B4E0:0BD6:0018:78E1
 * @implements B4E0:0BEE:0019:6AEE
 * @implements B4E0:0C07:0008:1E0D
 * @implements B4E0:0C0F:00AA:9694
 * @implements B4E0:0CB9:000C:6F96
 * @implements B4E0:0CC5:001D:1F21
 * @implements B4E0:0CD2:0010:BA35
 * @implements B4E0:0CDA:0008:A7CF
 * @implements B4E0:0CE2:0011:DAA4
 * @implements B4E0:0CF3:000D:B16D
 * @implements B4E0:0D00:002B:CAB1
 * @implements B4E0:0D2B:001F:A27B
 * @implements B4E0:0D4A:0027:BAC7
 * @implements B4E0:0D71:0037:B415
 * @implements B4E0:0DA8:003E:B602
 * @implements B4E0:0DE6:0022:7628
 * @implements B4E0:0E08:0037:DDD6
 * @implements B4E0:0E3F:003E:B69E
 * @implements B4E0:0E7D:001F:4543
 * @implements B4E0:0E9C:0017:668C
 * @implements B4E0:0EB3:0004:5B1F
 * @implements B4E0:0EB7:0006:F7CE
 *
 * Called From: B4E0:008C:0019:D6BB
 * Called From: B4E0:0834:0006:5C12
 */
void f__B4E0_0B86_001E_9967()
{
l__0B86:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x8);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x8036);
	emu_orw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x8038));
	if (emu_ax == 0) goto l__0BA6;
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x8038));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x8036));
	emu_push(emu_cs); emu_push(0x0BA4); emu_cs = 0x3520; overlay(0x3520, 0); f__B520_039B_001B_4BEB();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { overlay(0x34E0, 1); }
l__0BA4:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
l__0BA6:
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x8032);
	emu_orw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x8034));
	if (emu_ax == 0) goto l__0BBE;
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x8034));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x8032));
	emu_push(emu_cs); emu_push(0x0BBC); emu_cs = 0x3520; overlay(0x3520, 0); f__B520_0223_000E_38A3();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { overlay(0x34E0, 1); }
l__0BBC:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
l__0BBE:
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x802E);
	emu_orw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x8030));
	if (emu_ax == 0) goto l__0BD6;
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x8030));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x802E));
	emu_push(emu_cs); emu_push(0x0BD4); emu_cs = 0x3520; overlay(0x3520, 0); f__B520_0223_000E_38A3();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { overlay(0x34E0, 1); }
l__0BD4:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
l__0BD6:
	emu_get_memory16(emu_ds, 0x00, 0x802C) = 0x0;
	emu_get_memory16(emu_ds, 0x00, 0x802A) = 0x0;
	emu_di = 0x8;
	emu_ax = 0x5;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0BEE); emu_cs = 0x252E; f__252E_0001_0018_08B3();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { overlay(0x34E0, 1); }
l__0BEE:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_ax = 0x30C;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x0C07); emu_cs = 0x01F7; emu_Tools_Memset();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { overlay(0x34E0, 1); }
l__0C07:
	emu_addw(&emu_sp, 0x8);
	emu_xorw(&emu_si, emu_si);
	goto l__0CDA;
l__0C0F:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_ax = emu_si;
	emu_addw(&emu_ax, 0x2);
	emu_get_memory16(emu_es, emu_bx, 0x4) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_get_memory16(emu_es, emu_bx, 0xE) = 0x1900;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_get_memory16(emu_es, emu_bx, 0x32) = 0x34E0;
	emu_get_memory16(emu_es, emu_bx, 0x30) = 0x2A;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_ax = emu_ds;
	emu_dx = 0x25DE;
	emu_get_memory16(emu_es, emu_bx, 0x1A) = emu_ax;
	emu_get_memory16(emu_es, emu_bx, 0x18) = emu_dx;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_get_memory16(emu_es, emu_bx, 0x16) = emu_ax;
	emu_get_memory16(emu_es, emu_bx, 0x14) = emu_dx;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_get_memory16(emu_es, emu_bx, 0x12) = emu_ax;
	emu_get_memory16(emu_es, emu_bx, 0x10) = emu_dx;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_get_memory8(emu_es, emu_bx, 0xA) = 0x2;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_get_memory8(emu_es, emu_bx, 0xD) = 0x1;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_get_memory16(emu_es, emu_bx, 0x2E) = 0x0;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_get_memory16(emu_es, emu_bx, 0x1E) = 0x18;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_get_memory16(emu_es, emu_bx, 0x20) = emu_di;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_get_memory16(emu_es, emu_bx, 0x22) = 0x88;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_get_memory16(emu_es, emu_bx, 0x24) = 0x8;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_get_memory16(emu_es, emu_bx, 0x1C) = 0x8;
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x802A);
	emu_orw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x802C));
	if (emu_ax == 0) goto l__0CC5;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x802C));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x802A));
	emu_push(emu_cs); emu_push(0x0CB9); emu_cs = 0x348B; overlay(0x348B, 0); f__B48B_0000_001E_7E97();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { overlay(0x34E0, 1); }
l__0CB9:
	emu_addw(&emu_sp, 0x8);
	emu_get_memory16(emu_ds, 0x00, 0x802C) = emu_dx;
	emu_get_memory16(emu_ds, 0x00, 0x802A) = emu_ax;
	goto l__0CD2;
l__0CC5:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x2);
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_get_memory16(emu_ds, 0x00, 0x802C) = emu_ax;
	emu_get_memory16(emu_ds, 0x00, 0x802A) = emu_dx;
l__0CD2:
	emu_addw(&emu_di, 0x8);
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x3C);
	emu_incw(&emu_si);
l__0CDA:
	emu_cmpw(&emu_si, 0xD);
	if (emu_si >= 0xD) goto l__0CE2;
	goto l__0C0F;
l__0CE2:
	emu_subw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x3C);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x802C));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x802A));
	emu_push(emu_cs); emu_push(0x0CF3); emu_cs = 0x348B; overlay(0x348B, 0); f__B48B_0088_0029_3A68();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { overlay(0x34E0, 1); }
l__0CF3:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x0D00); emu_cs = 0x348B; overlay(0x348B, 0); f__B48B_0088_0029_3A68();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { overlay(0x34E0, 1); }
l__0D00:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x3C);
	emu_ax = 0x34E0;
	emu_push(emu_ax);
	emu_ax = 0x3E;
	emu_push(emu_ax);
	emu_ax = 0x48;
	emu_push(emu_ax);
	emu_ax = 0x8;
	emu_push(emu_ax);
	emu_ax = 0x18;
	emu_push(emu_ax);
	emu_ax = 0xA8;
	emu_push(emu_ax);
	emu_ax = 0x8;
	emu_push(emu_ax);
	emu_ax = 0xF;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0D2B); emu_cs = 0x3520; overlay(0x3520, 0); f__B520_0235_0016_54C9();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { overlay(0x34E0, 1); }
l__0D2B:
	emu_addw(&emu_sp, 0x10);
	emu_get_memory16(emu_ds, 0x00, 0x8038) = emu_dx;
	emu_get_memory16(emu_ds, 0x00, 0x8036) = emu_ax;
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x8038));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x8036));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x802C));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x802A));
	emu_push(emu_cs); emu_push(0x0D4A); emu_cs = 0x348B; overlay(0x348B, 0); f__B48B_0000_001E_7E97();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { overlay(0x34E0, 1); }
l__0D4A:
	emu_addw(&emu_sp, 0x8);
	emu_get_memory16(emu_ds, 0x00, 0x802C) = emu_dx;
	emu_get_memory16(emu_ds, 0x00, 0x802A) = emu_ax;
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x3C);
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x3C);
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_ax = 0xF;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x802C));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x802A));
	emu_push(emu_cs); emu_push(0x0D71); emu_cs = 0x348B; overlay(0x348B, 0); f__B48B_00F2_0005_601A();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { overlay(0x34E0, 1); }
l__0D71:
	emu_addw(&emu_sp, 0x6);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_ax = 0x2DCE;
	emu_es = emu_ax;
	emu_push(emu_get_memory16(emu_es, 0x00, 0x476));
	emu_push(emu_get_memory16(emu_es, 0x00, 0x474));
	emu_ax = 0x2DCE;
	emu_es = emu_ax;
	emu_push(emu_get_memory16(emu_es, 0x00, 0x472));
	emu_push(emu_get_memory16(emu_es, 0x00, 0x470));
	emu_ax = 0x60;
	emu_push(emu_ax);
	emu_ax = 0xA8;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = 0x10;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0DA8); emu_cs = 0x3520; overlay(0x3520, 0); f__B520_0114_0016_52C9();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { overlay(0x34E0, 1); }
l__0DA8:
	emu_addw(&emu_sp, 0x16);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_ax;
	emu_get_memory16(emu_ds, 0x00, 0x8034) = emu_dx;
	emu_get_memory16(emu_ds, 0x00, 0x8032) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_get_memory16(emu_es, emu_bx, 0x6) = 0x0;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_get_memory16(emu_es, emu_bx, 0x8) = 0x0;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_get_memory16(emu_es, emu_bx, 0x1C) = 0x8;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x802C));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x802A));
	emu_push(emu_cs); emu_push(0x0DE6); emu_cs = 0x348B; overlay(0x348B, 0); f__B48B_0000_001E_7E97();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { overlay(0x34E0, 1); }
l__0DE6:
	emu_addw(&emu_sp, 0x8);
	emu_get_memory16(emu_ds, 0x00, 0x802C) = emu_dx;
	emu_get_memory16(emu_ds, 0x00, 0x802A) = emu_ax;
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x3C);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = 0xF;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x802C));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x802A));
	emu_push(emu_cs); emu_push(0x0E08); emu_cs = 0x348B; overlay(0x348B, 0); f__B48B_00F2_0005_601A();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { overlay(0x34E0, 1); }
l__0E08:
	emu_addw(&emu_sp, 0x6);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_ax = 0x2DCE;
	emu_es = emu_ax;
	emu_push(emu_get_memory16(emu_es, 0x00, 0x46E));
	emu_push(emu_get_memory16(emu_es, 0x00, 0x46C));
	emu_ax = 0x2DCE;
	emu_es = emu_ax;
	emu_push(emu_get_memory16(emu_es, 0x00, 0x46A));
	emu_push(emu_get_memory16(emu_es, 0x00, 0x468));
	emu_ax = 0x10;
	emu_push(emu_ax);
	emu_ax = 0xA8;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = 0x11;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0E3F); emu_cs = 0x3520; overlay(0x3520, 0); f__B520_0114_0016_52C9();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { overlay(0x34E0, 1); }
l__0E3F:
	emu_addw(&emu_sp, 0x16);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_ax;
	emu_get_memory16(emu_ds, 0x00, 0x8030) = emu_dx;
	emu_get_memory16(emu_ds, 0x00, 0x802E) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_get_memory16(emu_es, emu_bx, 0x6) = 0x0;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_get_memory16(emu_es, emu_bx, 0x8) = 0x0;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_get_memory16(emu_es, emu_bx, 0x1C) = 0x8;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x802C));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x802A));
	emu_push(emu_cs); emu_push(0x0E7D); emu_cs = 0x348B; overlay(0x348B, 0); f__B48B_0000_001E_7E97();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { overlay(0x34E0, 1); }
l__0E7D:
	emu_addw(&emu_sp, 0x8);
	emu_get_memory16(emu_ds, 0x00, 0x802C) = emu_dx;
	emu_get_memory16(emu_ds, 0x00, 0x802A) = emu_ax;
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x8028));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x8026));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x802C));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x802A));
	emu_push(emu_cs); emu_push(0x0E9C); emu_cs = 0x348B; overlay(0x348B, 0); f__B48B_0000_001E_7E97();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { overlay(0x34E0, 1); }
l__0E9C:
	emu_addw(&emu_sp, 0x8);
	emu_get_memory16(emu_ds, 0x00, 0x802C) = emu_dx;
	emu_get_memory16(emu_ds, 0x00, 0x802A) = emu_ax;
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x8028));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x8026));
	emu_push(emu_cs); emu_push(0x0EB3); emu_cs = 0x34A2; overlay(0x34A2, 0); f__B4A2_0729_0013_2494();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { overlay(0x34E0, 1); }
l__0EB3:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	goto l__0EB7;
l__0EB7:
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__B4C4_0000_001C_B22A()
 *
 * @name f__B4C4_0000_001C_B22A
 * @implements B4C4:0000:001C:B22A ()
 * @implements B4C4:001C:0012:447E
 * @implements B4C4:002E:0015:F951
 * @implements B4C4:0043:0018:F945
 * @implements B4C4:005B:0018:4786
 * @implements B4C4:0073:0016:F76A
 * @implements B4C4:0089:0016:0ECE
 * @implements B4C4:009F:0015:9BF5
 * @implements B4C4:00B4:0015:57F3
 * @implements B4C4:00C9:0010:FF92
 * @implements B4C4:00D9:0017:4092
 * @implements B4C4:00E1:000F:66C0
 * @implements B4C4:00F0:0010:FF92
 * @implements B4C4:0108:000F:26DA
 * @implements B4C4:0117:0015:D8C6
 * @implements B4C4:012C:0019:1978
 * @implements B4C4:0145:0015:386F
 * @implements B4C4:015A:0015:3AD7
 * @implements B4C4:016F:0019:DB7A
 * @implements B4C4:0188:0019:D97C
 * @implements B4C4:01A1:0026:C56B
 * @implements B4C4:01C7:001E:4F52
 * @implements B4C4:01E5:0012:876C
 * @implements B4C4:01F7:0015:9F43
 * @implements B4C4:020C:0010:FF92
 * @implements B4C4:0224:000F:2551
 * @implements B4C4:0233:000B:9D3D
 * @implements B4C4:023E:000D:44AD
 * @implements B4C4:024B:0007:B149
 * @implements B4C4:0252:0003:2E57
 *
 * Called From: 34C4:0020:0005:0000
 */
void f__B4C4_0000_001C_B22A()
{
l__0000:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_si);
	emu_ax = 0xE6;
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x8CFD;
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp + 0xA);
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp + 0x6);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x001C); f__B4C4_05F3_002C_3269();
l__001C:
	emu_addw(&emu_sp, 0xE);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp + 0xA);
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp + 0x6);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x002E); f__B4C4_054C_0031_FE26();
l__002E:
	emu_addw(&emu_sp, 0x8);
	emu_get_memory16(emu_ds, 0x00, 0x38B4) = emu_ax;
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp + 0xA);
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp + 0x6);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x0043); f__B4C4_054C_0031_FE26();
l__0043:
	emu_addw(&emu_sp, 0x8);
	emu_get_memory16(emu_ds, 0x00, 0x39FC) = emu_ax;
	emu_get_memory16(emu_ds, 0x00, 0x39FE) = emu_ax;
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp + 0xA);
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp + 0x6);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x005B); f__B4C4_054C_0031_FE26();
l__005B:
	emu_addw(&emu_sp, 0x8);
	emu_get_memory16(emu_ds, 0x00, 0x3A00) = emu_ax;
	emu_get_memory16(emu_ds, 0x00, 0x3A02) = emu_ax;
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp + 0xA);
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp + 0x6);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x0073); f__B4C4_05C0_002F_C3F6();
l__0073:
	emu_addw(&emu_sp, 0x8);
	emu_ax = (int8)emu_al;
	emu_get_memory16(emu_ds, 0x00, 0x3A10) = emu_ax;
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp + 0xA);
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp + 0x6);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x0089); f__B4C4_05C0_002F_C3F6();
l__0089:
	emu_addw(&emu_sp, 0x8);
	emu_ax = (int8)emu_al;
	emu_get_memory16(emu_ds, 0x00, 0x38E2) = emu_ax;
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp + 0xA);
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp + 0x6);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x009F); f__B4C4_054C_0031_FE26();
l__009F:
	emu_addw(&emu_sp, 0x8);
	emu_get_memory16(emu_ds, 0x00, 0x38F0) = emu_ax;
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp + 0xA);
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp + 0x6);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x00B4); f__B4C4_054C_0031_FE26();
l__00B4:
	emu_addw(&emu_sp, 0x8);
	emu_get_memory16(emu_ds, 0x00, 0x38E8) = emu_ax;
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp + 0xA);
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp + 0x6);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x00C9); f__B4C4_054C_0031_FE26();
l__00C9:
	emu_addw(&emu_sp, 0x8);
	emu_si = emu_ax;
	emu_cmpw(&emu_si, 0xFFFF);
	if (emu_si == 0xFFFF) goto l__00E1;
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x00D9); emu_cs = 0x0FE4; emu_Unit_Get_ByIndex();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34C4) { overlay(0x34C4, 1); }
l__00D9:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ds, 0x00, 0x3A0C) = emu_dx;
	emu_get_memory16(emu_ds, 0x00, 0x3A0A) = emu_ax;
l__00E1:
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp + 0xA);
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp + 0x6);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x00F0); f__B4C4_054C_0031_FE26();
l__00F0:
	emu_addw(&emu_sp, 0x8);
	emu_si = emu_ax;
	emu_cmpw(&emu_si, 0xFFFF);
	if (emu_si == 0xFFFF) goto l__0108;
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x0100); emu_cs = 0x0FE4; emu_Unit_Get_ByIndex();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34C4) { overlay(0x34C4, 1); }
	/* Unresolved jump */ emu_ip = 0x0100; emu_last_cs = 0xB4C4; emu_last_ip = 0x0100; emu_last_length = 0x0010; emu_last_crc = 0xFF92; emu_call();
l__0108:
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp + 0xA);
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp + 0x6);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x0117); f__B4C4_054C_0031_FE26();
l__0117:
	emu_addw(&emu_sp, 0x8);
	emu_get_memory16(emu_ds, 0x00, 0x38F6) = emu_ax;
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp + 0xA);
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp + 0x6);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x012C); f__B4C4_0581_003B_B6D9();
l__012C:
	emu_addw(&emu_sp, 0x8);
	emu_get_memory16(emu_ds, 0x00, 0x2AF6) = emu_dx;
	emu_get_memory16(emu_ds, 0x00, 0x2AF4) = emu_ax;
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp + 0xA);
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp + 0x6);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x0145); f__B4C4_054C_0031_FE26();
l__0145:
	emu_addw(&emu_sp, 0x8);
	emu_get_memory16(emu_ds, 0x00, 0x38B0) = emu_ax;
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp + 0xA);
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp + 0x6);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x015A); f__B4C4_054C_0031_FE26();
l__015A:
	emu_addw(&emu_sp, 0x8);
	emu_get_memory16(emu_ds, 0x00, 0x38B2) = emu_ax;
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp + 0xA);
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp + 0x6);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x016F); f__B4C4_0581_003B_B6D9();
l__016F:
	emu_addw(&emu_sp, 0x8);
	emu_get_memory16(emu_ds, 0x00, 0x37F2) = emu_dx;
	emu_get_memory16(emu_ds, 0x00, 0x37F0) = emu_ax;
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp + 0xA);
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp + 0x6);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x0188); f__B4C4_0581_003B_B6D9();
l__0188:
	emu_addw(&emu_sp, 0x8);
	emu_get_memory16(emu_ds, 0x00, 0x37F6) = emu_dx;
	emu_get_memory16(emu_ds, 0x00, 0x37F4) = emu_ax;
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp + 0xA);
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp + 0x6);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x01A1); f__B4C4_0581_003B_B6D9();
l__01A1:
	emu_addw(&emu_sp, 0x8);
	emu_bx = emu_get_memory16(emu_ds, 0x00, 0x76B2);
	emu_cx = emu_get_memory16(emu_ds, 0x00, 0x76B0);
	emu_subw(&emu_cx, emu_ax);
	emu_sbbw(&emu_bx, emu_dx);
	emu_get_memory16(emu_ds, 0x00, 0x38AE) = emu_bx;
	emu_get_memory16(emu_ds, 0x00, 0x38AC) = emu_cx;
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp + 0xA);
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp + 0x6);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x01C7); f__B4C4_054C_0031_FE26();
l__01C7:
	emu_addw(&emu_sp, 0x8);
	emu_get_memory16(emu_ds, 0x00, 0x38B4) = emu_ax;
	emu_ax = 0x36;
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x97E7;
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp + 0xA);
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp + 0x6);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x01E5); f__B4C4_05F3_002C_3269();
l__01E5:
	emu_addw(&emu_sp, 0xE);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp + 0xA);
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp + 0x6);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x01F7); f__B4C4_054C_0031_FE26();
l__01F7:
	emu_addw(&emu_sp, 0x8);
	emu_get_memory16(emu_ds, 0x00, 0x38FE) = emu_ax;
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp + 0xA);
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp + 0x6);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x020C); f__B4C4_054C_0031_FE26();
l__020C:
	emu_addw(&emu_sp, 0x8);
	emu_si = emu_ax;
	emu_cmpw(&emu_si, 0xFFFF);
	if (emu_si == 0xFFFF) goto l__0224;
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x021C); emu_cs = 0x0FE4; emu_Unit_Get_ByIndex();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34C4) { overlay(0x34C4, 1); }
	/* Unresolved jump */ emu_ip = 0x021C; emu_last_cs = 0xB4C4; emu_last_ip = 0x021C; emu_last_length = 0x0010; emu_last_crc = 0xFF92; emu_call();
l__0224:
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp + 0xA);
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp + 0x6);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x0233); f__B4C4_054C_0031_FE26();
l__0233:
	emu_addw(&emu_sp, 0x8);
	emu_get_memory16(emu_ds, 0x00, 0x38EA) = emu_ax;
	emu_push(emu_cs); emu_push(0x023E); emu_cs = 0x34B8; overlay(0x34B8, 0); f__B4B8_0D23_0010_BA99();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34C4) { overlay(0x34C4, 1); }
l__023E:
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x8D07));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x8D05));
	emu_push(emu_cs); emu_push(0x024B); emu_cs = 0x34B8; overlay(0x34B8, 0); f__B4B8_0000_001F_3BC3();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34C4) { overlay(0x34C4, 1); }
l__024B:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_ax = 0x1;
	goto l__0252;
l__0252:
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B4C4_0255_0009_A812()
 *
 * @name f__B4C4_0255_0009_A812
 * @implements B4C4:0255:0009:A812 ()
 * @implements B4C4:025E:0037:F654
 * @implements B4C4:028D:0008:A023
 * @implements B4C4:0295:000F:65FD
 * @implements B4C4:02A4:002D:BE65
 * @implements B4C4:02D1:0040:53A1
 * @implements B4C4:0307:000A:24EC
 *
 * Called From: 34C4:0025:0005:0000
 */
void f__B4C4_0255_0009_A812()
{
l__0255:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_si);
	emu_push(emu_di);
	emu_xorw(&emu_di, emu_di);
	goto l__028D;
l__025E:
	emu_ax = emu_di;
	emu_cl = 0x2;
	emu_shlw(&emu_ax, emu_cl);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x39EA));
	emu_addw(&emu_bx, emu_ax);
	emu_andb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0xF7);
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x39F2);
	emu_andw(&emu_ax, 0x7F);
	emu_dx = emu_di;
	emu_cl = 0x2;
	emu_shlw(&emu_dx, emu_cl);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x39EA));
	emu_addw(&emu_bx, emu_dx);
	emu_andb(&emu_get_memory8(emu_es, emu_bx, 0x1), 0x1);
	emu_shlb(&emu_al, 0x1);
	emu_orb(&emu_get_memory8(emu_es, emu_bx, 0x1), emu_al);
	emu_incw(&emu_di);
l__028D:
	emu_cmpw(&emu_di, 0x1000);
	if ((int16)emu_di < (int16)0x1000) goto l__025E;
	goto l__0307;
l__0295:
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp + 0xA);
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp + 0x6);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x02A4); f__B4C4_054C_0031_FE26();
l__02A4:
	emu_addw(&emu_sp, 0x8);
	emu_di = emu_ax;
	emu_andw(&emu_di, 0x1FFF);
	emu_ax = 0x4;
	emu_push(emu_ax);
	emu_ax = emu_di;
	emu_cl = 0x2;
	emu_shlw(&emu_ax, emu_cl);
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x39EA);
	emu_addw(&emu_dx, emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x39EC));
	emu_push(emu_dx);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp + 0xA);
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp + 0x6);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x02D1); f__B4C4_05F3_002C_3269();
l__02D1:
	emu_addw(&emu_sp, 0xE);
	emu_bx = emu_di;
	emu_shlw(&emu_bx, 0x1);
	emu_ax = 0x2E9C;
	emu_dx = emu_di;
	emu_cl = 0x2;
	emu_shlw(&emu_dx, emu_cl);
	emu_lfp(&emu_es, &emu_si, &emu_get_memory16(emu_ds, 0x00, 0x39EA));
	emu_addw(&emu_si, emu_dx);
	emu_dx = emu_get_memory16(emu_es, emu_si, 0x0);
	emu_andw(&emu_dx, 0x1FF);
	emu_es = emu_ax;
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x323F), emu_dx);
	if (emu_get_memory16(emu_es, emu_bx, 0x323F) != emu_dx) {
		emu_bx = emu_di;
		emu_shlw(&emu_bx, 0x1);
		emu_ax = 0x2E9C;
		emu_es = emu_ax;
		emu_orw(&emu_get_memory16(emu_es, emu_bx, 0x323F), 0x8000);
	}
l__0307:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp,  0xA), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp,  0xA) != 0x0) goto l__0295;
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B4C4_0311_0009_BC94()
 *
 * @name f__B4C4_0311_0009_BC94
 * @implements B4C4:0311:0009:BC94 ()
 * @implements B4C4:031A:0018:3303
 * @implements B4C4:0332:000B:CA0C
 * @implements B4C4:033D:0023:AC02
 * @implements B4C4:0360:0046:F14D
 * @implements B4C4:039D:0009:AF48
 * @implements B4C4:03A6:0004:893F
 *
 * Called From: 34C4:002A:0005:0000
 */
void f__B4C4_0311_0009_BC94()
{
l__0311:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x46);
	goto l__039D;
l__031A:
	emu_ax = 0x42;
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x46);
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp + 0xA);
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp + 0x6);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x0332); f__B4C4_05F3_002C_3269();
l__0332:
	emu_addw(&emu_sp, 0xE);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x46));
	emu_push(emu_cs); emu_push(0x033D); emu_cs = 0x10BE; emu_House_Allocate();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34C4) { overlay(0x34C4, 1); }
l__033D:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_ax == 0) goto l__039D;
	emu_ax = 0x42;
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x46);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x0360); emu_cs = 0x01F7; emu_Tools_Memcopy();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34C4) { overlay(0x34C4, 1); }
l__0360:
	emu_addw(&emu_sp, 0xA);
	emu_testw(&emu_get_memory16(emu_ss, emu_bp, -0x42), 0x2);
	if ((emu_get_memory16(emu_ss, emu_bp, -0x42) & 0x2) != 0) {
		emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x46);
		emu_get_memory16(emu_ds, 0x00, 0x3A38) = emu_ax;
		emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x2);
		emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x4);
		emu_get_memory16(emu_ds, 0x00, 0x3A3C) = emu_ax;
		emu_get_memory16(emu_ds, 0x00, 0x3A3A) = emu_dx;
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x3A3A));
		emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x2C), 0xFFFF);
		if (emu_get_memory16(emu_es, emu_bx, 0x2C) != 0xFFFF) {
			emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x3A3A));
			emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x2A), 0x1);
			if ((int16)emu_get_memory16(emu_es, emu_bx, 0x2A) < (int16)0x1) {
				emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x3A3A));
				emu_get_memory16(emu_es, emu_bx, 0x2A) = 0x1;
			}
		}
	}
l__039D:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp,  0xA), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp,  0xA) == 0x0) goto l__03A6;
	goto l__031A;
l__03A6:
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B4C4_03AA_0009_B4A2()
 *
 * @name f__B4C4_03AA_0009_B4A2
 * @implements B4C4:03AA:0009:B4A2 ()
 * @implements B4C4:03B3:0019:DA34
 * @implements B4C4:03CC:0012:B51A
 * @implements B4C4:03DE:0016:704F
 * @implements B4C4:03F4:0024:34F7
 * @implements B4C4:0418:0020:60C2
 * @implements B4C4:042D:000B:AC3C
 * @implements B4C4:0438:0004:893F
 *
 * Called From: 34C4:002F:0005:0000
 */
void f__B4C4_03AA_0009_B4A2()
{
l__03AA:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x84);
	goto l__042D;
l__03B3:
	emu_ax = 0x80;
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x84);
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp + 0xA);
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp + 0x6);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x03CC); f__B4C4_05F3_002C_3269();
l__03CC:
	emu_addw(&emu_sp, 0xE);
	emu_push(emu_ds);
	emu_ax = 0x3902;
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x72);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x03DE); f__B4C4_0633_0041_F5FE();
l__03DE:
	emu_addw(&emu_sp, 0x8);
	emu_get_memory16(emu_ss, emu_bp, -0x74) = 0x0;
	emu_get_memory16(emu_ss, emu_bp, -0x14) = 0x0;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x84));
	emu_push(emu_cs); emu_push(0x03F4); emu_cs = 0x0FE4; emu_Unit_Get_ByIndex();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34C4) { overlay(0x34C4, 1); }
l__03F4:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_ax == 0) goto l__042D;
	emu_ax = 0x80;
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x84);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x0418); emu_cs = 0x01F7; emu_Tools_Memcopy();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34C4) { overlay(0x34C4, 1); }
l__0418:
	emu_addw(&emu_sp, 0xA);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cl = emu_get_memory8(emu_es, emu_bx, 0x8);
	emu_al = 0x1;
	emu_shlb(&emu_al, emu_cl);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_orb(&emu_get_memory8(emu_es, emu_bx, 0x9), emu_al);
l__042D:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp,  0xA), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp,  0xA) != 0x0) goto l__03B3;
	emu_push(emu_cs); emu_push(0x0438); emu_cs = 0x0FE4; emu_Unit_Recount();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34C4) { overlay(0x34C4, 1); }
l__0438:
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B4C4_043C_0009_1C95()
 *
 * @name f__B4C4_043C_0009_1C95
 * @implements B4C4:043C:0009:1C95 ()
 * @implements B4C4:0445:0018:FDA2
 * @implements B4C4:045D:0012:24CE
 * @implements B4C4:046F:000B:A260
 * @implements B4C4:047A:0023:5C32
 * @implements B4C4:049D:0018:10C7
 * @implements B4C4:04B5:000A:817C
 * @implements B4C4:04BF:0012:DB19
 * @implements B4C4:04C1:0010:DB35
 * @implements B4C4:04C8:0009:AF48
 * @implements B4C4:04D1:0005:7CF0
 * @implements B4C4:04D6:0004:893F
 *
 * Called From: 34C4:0034:0005:0000
 */
void f__B4C4_043C_0009_1C95()
{
l__043C:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x5C);
	goto l__04C8;
l__0445:
	emu_ax = 0x58;
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x5C);
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp + 0xA);
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp + 0x6);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x045D); f__B4C4_05F3_002C_3269();
l__045D:
	emu_addw(&emu_sp, 0xE);
	emu_push(emu_ds);
	emu_ax = 0x3918;
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x4A);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x046F); f__B4C4_0633_0041_F5FE();
l__046F:
	emu_addw(&emu_sp, 0x8);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x5C));
	emu_push(emu_cs); emu_push(0x047A); emu_cs = 0x1082; emu_Structure_Get_ByIndex();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34C4) { overlay(0x34C4, 1); }
l__047A:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_ax == 0) goto l__04C8;
	emu_ax = 0x58;
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x5C);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x049D); emu_cs = 0x01F7; emu_Tools_Memcopy();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34C4) { overlay(0x34C4, 1); }
l__049D:
	emu_addw(&emu_sp, 0xA);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x4F), 0x0);
	if (emu_get_memory8(emu_es, emu_bx, 0x4F) != 0x0) goto l__04C8;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x04B5); emu_cs = 0x0C3A; emu_Structure_IsUpgradable();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34C4) { overlay(0x34C4, 1); }
l__04B5:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax == 0) goto l__04BF;
	emu_al = 0x64;
	goto l__04C1;
l__04BF:
	emu_al = 0x0;
l__04C1:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_get_memory8(emu_es, emu_bx, 0x4F) = emu_al;
l__04C8:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp,  0xA), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp,  0xA) == 0x0) goto l__04D1;
	goto l__0445;
l__04D1:
	emu_push(emu_cs); emu_push(0x04D6); emu_cs = 0x1082; emu_Structure_Recount();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34C4) { overlay(0x34C4, 1); }
l__04D6:
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B4C4_04DA_0008_C6B9()
 *
 * @name f__B4C4_04DA_0008_C6B9
 * @implements B4C4:04DA:0008:C6B9 ()
 * @implements B4C4:04E2:0018:3B2F
 * @implements B4C4:04FA:0012:5417
 * @implements B4C4:050C:000B:825D
 * @implements B4C4:0517:0023:3C12
 * @implements B4C4:053A:000E:8D15
 * @implements B4C4:053D:000B:AFBF
 * @implements B4C4:0548:0004:893F
 *
 * Called From: 34C4:0039:0005:0000
 */
void f__B4C4_04DA_0008_C6B9()
{
l__04DA:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x58);
	goto l__053D;
l__04E2:
	emu_ax = 0x53;
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x58);
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp + 0xA);
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp + 0x6);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x04FA); f__B4C4_05F3_002C_3269();
l__04FA:
	emu_addw(&emu_sp, 0xE);
	emu_push(emu_ds);
	emu_ax = 0x392E;
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x3A);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x050C); f__B4C4_0633_0041_F5FE();
l__050C:
	emu_addw(&emu_sp, 0x8);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x58));
	emu_push(emu_cs); emu_push(0x0517); emu_cs = 0x104B; emu_Team_Get_ByIndex();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34C4) { overlay(0x34C4, 1); }
l__0517:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_ax == 0) goto l__053D;
	emu_ax = 0x53;
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x58);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x053A); emu_cs = 0x01F7; emu_Tools_Memcopy();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34C4) { overlay(0x34C4, 1); }
l__053A:
	emu_addw(&emu_sp, 0xA);
l__053D:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp,  0xA), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp,  0xA) != 0x0) goto l__04E2;
	emu_push(emu_cs); emu_push(0x0548); emu_cs = 0x104B; emu_Team_Recount();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34C4) { overlay(0x34C4, 1); }
l__0548:
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B4C4_054C_0031_FE26()
 *
 * @name f__B4C4_054C_0031_FE26
 * @implements B4C4:054C:0031:FE26 ()
 * @implements B4C4:057D:0004:893F
 *
 * Called From: B4C4:002B:0012:447E
 * Called From: B4C4:0040:0015:F951
 * Called From: B4C4:0058:0018:F945
 * Called From: B4C4:009C:0016:0ECE
 * Called From: B4C4:00B1:0015:9BF5
 * Called From: B4C4:00C6:0015:57F3
 * Called From: B4C4:00ED:000F:66C0
 * Called From: B4C4:00ED:0017:4092
 * Called From: B4C4:0114:000F:26DA
 * Called From: B4C4:0142:0019:1978
 * Called From: B4C4:0157:0015:386F
 * Called From: B4C4:01C4:0026:C56B
 * Called From: B4C4:01F4:0012:876C
 * Called From: B4C4:0209:0015:9F43
 * Called From: B4C4:0230:000F:2551
 * Called From: B4C4:02A1:000F:65FD
 */
void f__B4C4_054C_0031_FE26()
{
l__054C:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x6);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_dx = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_dx;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x0);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_addw(&emu_get_memory16(emu_es, emu_bx, 0x0), 0x2);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_subw(&emu_get_memory16(emu_es, emu_bx, 0x0), 0x2);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x2);
	goto l__057D;
l__057D:
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B4C4_0581_003B_B6D9()
 *
 * @name f__B4C4_0581_003B_B6D9
 * @implements B4C4:0581:003B:B6D9 ()
 * @implements B4C4:05BC:0004:893F
 *
 * Called From: B4C4:0129:0015:D8C6
 * Called From: B4C4:016C:0015:3AD7
 * Called From: B4C4:0185:0019:DB7A
 * Called From: B4C4:019E:0019:D97C
 */
void f__B4C4_0581_003B_B6D9()
{
l__0581:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x8);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_dx = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_dx;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x2);
	emu_dx = emu_get_memory16(emu_es, emu_bx, 0x0);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_dx;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_addw(&emu_get_memory16(emu_es, emu_bx, 0x0), 0x4);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_subw(&emu_get_memory16(emu_es, emu_bx, 0x0), 0x4);
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x2);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x4);
	goto l__05BC;
l__05BC:
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B4C4_05C0_002F_C3F6()
 *
 * @name f__B4C4_05C0_002F_C3F6
 * @implements B4C4:05C0:002F:C3F6 ()
 * @implements B4C4:05EF:0004:893F
 *
 * Called From: B4C4:0070:0018:4786
 * Called From: B4C4:0086:0016:F76A
 */
void f__B4C4_05C0_002F_C3F6()
{
l__05C0:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x6);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_dx = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_dx;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x0);
	emu_get_memory8(emu_ss, emu_bp, -0x1) = emu_al;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_incw(&emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_decw(&emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_al = emu_get_memory8(emu_ss, emu_bp, -0x1);
	goto l__05EF;
l__05EF:
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B4C4_05F3_002C_3269()
 *
 * @name f__B4C4_05F3_002C_3269
 * @implements B4C4:05F3:002C:3269 ()
 * @implements B4C4:061F:0014:DF3D
 *
 * Called From: B4C4:0019:001C:B22A
 * Called From: B4C4:01E2:001E:4F52
 * Called From: B4C4:02CE:002D:BE65
 * Called From: B4C4:032F:0018:3303
 * Called From: B4C4:03C9:0019:DA34
 * Called From: B4C4:045A:0018:FDA2
 * Called From: B4C4:04F7:0018:3B2F
 */
void f__B4C4_05F3_002C_3269()
{
l__05F3:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x4);
	emu_push(emu_si);
	emu_si = emu_get_memory16(emu_ss, emu_bp,  0x12);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_dx = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_dx;
	emu_push(emu_si);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x2));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x10));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_push(emu_cs); emu_push(0x061F); emu_cs = 0x01F7; emu_Tools_Memcopy();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34C4) { overlay(0x34C4, 1); }
l__061F:
	emu_addw(&emu_sp, 0xA);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_addw(&emu_get_memory16(emu_es, emu_bx, 0x0), emu_si);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_subw(&emu_get_memory16(emu_es, emu_bx, 0x0), emu_si);
	emu_pop(&emu_si);
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B4C4_0633_0041_F5FE()
 *
 * @name f__B4C4_0633_0041_F5FE
 * @implements B4C4:0633:0041:F5FE ()
 * @implements B4C4:0672:0002:2597
 *
 * Called From: B4C4:03DB:0012:B51A
 * Called From: B4C4:046C:0012:24CE
 * Called From: B4C4:0509:0012:5417
 */
void f__B4C4_0633_0041_F5FE()
{
l__0633:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0xC);
	emu_dx = emu_get_memory16(emu_ss, emu_bp,  0xA);
	emu_get_memory16(emu_es, emu_bx, 0x6) = emu_ax;
	emu_get_memory16(emu_es, emu_bx, 0x4) = emu_dx;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x0);
	emu_orw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x2));
	if (emu_ax != 0) {
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0xA));
		emu_ax = emu_get_memory16(emu_es, emu_bx, 0x6);
		emu_dx = emu_get_memory16(emu_es, emu_bx, 0x4);
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
		emu_bx = emu_get_memory16(emu_es, emu_bx, 0x0);
		emu_shlw(&emu_bx, 0x1);
		emu_addw(&emu_dx, emu_bx);
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
		emu_get_memory16(emu_es, emu_bx, 0x2) = emu_ax;
		emu_get_memory16(emu_es, emu_bx, 0x0) = emu_dx;
	}
l__0672:
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function emu_Config_Read()
 *
 * @name emu_Config_Read
 * @implements 24E6:006E:001A:719E ()
 * @implements 24E6:0088:000E:273C
 * @implements 24E6:0092:0004:F239
 * @implements 24E6:0094:0002:DA3A
 * @implements 24E6:0096:0010:7426
 * @implements 24E6:00A6:000C:1590
 * @implements 24E6:00B2:0009:107E
 * @implements 24E6:00BB:000B:D3E0
 * @implements 24E6:00C6:0004:3E1F
 * @implements 24E6:00CA:0005:8BCF
 *
 * Called From: B480:0013:0018:A09B
 */
void emu_Config_Read()
{
l__006E:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x2);
	emu_push(emu_si);
	emu_ax = 0x100;
	emu_push(emu_ax);
	emu_ax = 0x8001;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x0088); emu_cs = 0x01F7; emu_File_Open_Wrapper();
l__0088:
	emu_addw(&emu_sp, 0x8);
	emu_si = emu_ax;
	emu_cmpw(&emu_si, 0xFFFF);
	if (emu_si != 0xFFFF) goto l__0096;
l__0092:
	emu_xorw(&emu_ax, emu_ax);
l__0094:
	goto l__00CA;
l__0096:
	emu_ax = 0xA;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x00A6); emu_cs = 0x01F7; emu_File_Read_Wrapper();
l__00A6:
	emu_addw(&emu_sp, 0x8);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ax;
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x00B2); emu_cs = 0x01F7; emu_File_Close_Wrapper();
l__00B2:
	emu_pop(&emu_cx);
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0xA);
	if (emu_get_memory16(emu_ss, emu_bp, -0x2) == 0xA) goto l__00BB;
	goto l__0092;
l__00BB:
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_cs);
	emu_push(0x00C6); emu_Config_Decode();
l__00C6:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	goto l__0094;
l__00CA:
	emu_pop(&emu_si);
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function emu_Config_Decode()
 *
 * @name emu_Config_Decode
 * @implements 24E6:011A:001A:2E2C ()
 * @implements 24E6:0134:003C:41F0
 * @implements 24E6:014D:0023:9862
 * @implements 24E6:016E:0002:C33A
 * @implements 24E6:0172:0004:9439
 * @implements 24E6:0176:0004:893F
 *
 * Called From: 24E6:00C3:000B:D3E0
 */
void emu_Config_Decode()
{
l__011A:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x6);
	emu_get_memory8(emu_ss, emu_bp, -0x5) = 0x0;
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_dx = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_dx;
	emu_cl = 0x8;
	goto l__014D;
l__0134:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_xorb(&emu_get_memory8(emu_es, emu_bx, 0x0), 0xA5);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_subb(&emu_get_memory8(emu_es, emu_bx, 0x0), emu_cl);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x0);
	emu_addb(&emu_get_memory8(emu_ss, emu_bp, -0x5), emu_al);
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x4));
l__014D:
	emu_al = emu_cl;
	emu_decb(&emu_cl);
	emu_orb(&emu_al, emu_al);
	if (emu_al != 0) goto l__0134;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x9);
	emu_ah = 0x0;
	emu_dl = emu_get_memory8(emu_ss, emu_bp, -0x5);
	emu_dh = 0x0;
	emu_xorw(&emu_dx, 0xA5);
	emu_cmpw(&emu_ax, emu_dx);
	if (emu_ax != emu_dx) goto l__0172;
	emu_ax = 0x1;
l__016E:
	goto l__0176;
l__0172:
	emu_xorw(&emu_ax, emu_ax);
	goto l__016E;
l__0176:
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

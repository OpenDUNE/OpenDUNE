/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__1DD7_0B53_0025_36F7()
 *
 * @name f__1DD7_0B53_0025_36F7
 * @implements 1DD7:0B53:0025:36F7 ()
 * @implements 1DD7:0B78:0005:8BAE
 * @implements 1DD7:0B7B:0002:CEBA
 * @implements 1DD7:0B7D:0019:AE96
 * @implements 1DD7:0B96:0006:2081
 * @implements 1DD7:0B9A:0002:2597
 *
 * Called From: B491:0A2D:0008:6188
 * Called From: B4AB:005B:0005:FB00
 * Called From: B4AE:0125:0005:FB00
 * Called From: B4B8:1C5C:0005:FB00
 * Called From: B4BE:0069:0005:FB00
 * Called From: B4F2:0241:000C:7BCE
 * Called From: B503:0500:0005:FB00
 * Called From: B511:0E23:000C:15CC
 * Called From: B511:1436:0019:858B
 * Called From: B518:054D:0006:9F01
 */
void f__1DD7_0B53_0025_36F7()
{
l__0B53:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x6344), 0xFFFF);
	if (emu_get_memory16(emu_ds, 0x00, 0x6344) == 0xFFFF) goto l__0B7D;
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x636C), 0xFFFF);
	if (emu_get_memory16(emu_ds, 0x00, 0x636C) == 0xFFFF) goto l__0B7B;
	emu_ax = 0x7D0;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x636C));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6344));
	emu_push(emu_cs); emu_push(0x0B78); emu_cs = 0x2756; f__2756_0ECC_0006_03A3();
l__0B78:
	emu_addw(&emu_sp, 0x8);
l__0B7B:
	goto l__0B9A;
l__0B7D:
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x6352);
	emu_orw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x6354));
	if (emu_ax == 0) goto l__0B9A;
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x6344;
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x0B96); f__1DD7_1C3C_0020_9C6E();
l__0B96:
	emu_addw(&emu_sp, 0x8);
l__0B9A:
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__1DD7_0D77_0027_BE74()
 *
 * @name f__1DD7_0D77_0027_BE74
 * @implements 1DD7:0D77:0027:BE74 ()
 * @implements 1DD7:0D9E:0016:BD8A
 * @implements 1DD7:0DAF:0005:1C3E
 * @implements 1DD7:0DB4:0010:45B7
 * @implements 1DD7:0DC4:0014:83D2
 * @implements 1DD7:0EDC:0006:F7CE
 *
 * Called From: 1DD7:1BA0:0010:3828
 */
void f__1DD7_0D77_0027_BE74()
{
l__0D77:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x14);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_get_memory16(emu_ss, emu_bp, -0x8) = 0x0;
	emu_get_memory16(emu_ss, emu_bp, -0xA) = 0x0;
	emu_di = 0x1;
	emu_movw(&emu_ax, emu_bp - 0x14);
	emu_push(emu_ss);
	emu_push(emu_ax);
	emu_ax = 0x63A4;
	emu_push(emu_ds);
	emu_push(emu_ax);
	emu_cx = 0x6;
	emu_push(emu_cs); emu_push(0x0D9E); emu_cs = 0x01F7; emu_Tools_MemcopyCX();
l__0D9E:
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_ax != 0) {
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0xA));
		emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x0), 0xFFFF);
		if (emu_get_memory16(emu_es, emu_bx, 0x0) != 0xFFFF) goto l__0DB4;
	}
l__0DAF:
	emu_xorw(&emu_ax, emu_ax);
	goto l__0EDC;
l__0DB4:
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x0DC4); emu_Drivers_GenerateFilename2();
l__0DC4:
	emu_addw(&emu_sp, 0x8);
	emu_get_memory16(emu_ss, emu_bp, -0xC) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0xE) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0xE);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0xC));
	if (emu_ax != 0) { /* Unresolved jump */ emu_ip = 0x0DD8; emu_last_cs = 0x1DD7; emu_last_ip = 0x0DD4; emu_last_length = 0x0014; emu_last_crc = 0x83D2; emu_call(); return; }
	goto l__0DAF;
l__0EDC:
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
 * Decompiled function f__1DD7_1BB4_002A_17AC()
 *
 * @name f__1DD7_1BB4_002A_17AC
 * @implements 1DD7:1BB4:002A:17AC ()
 * @implements 1DD7:1BDE:0012:F50C
 * @implements 1DD7:1BF0:0012:EA0C
 * @implements 1DD7:1BF2:0010:869A
 * @implements 1DD7:1C02:003A:4038
 *
 * Called From: 1DD7:063D:0009:C117
 * Called From: 1DD7:0786:0009:010C
 * Called From: 1DD7:1980:000A:5658
 */
void f__1DD7_1BB4_002A_17AC()
{
l__1BB4:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x16);
	emu_orw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x18));
	if (emu_ax == 0) goto l__1BF2;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x22), 0x0);
	if (emu_get_memory16(emu_es, emu_bx, 0x22) == 0x0) goto l__1BF2;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x18));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x16));
	emu_push(emu_cs); emu_push(0x1BDE); emu_cs = 0x23E1; emu_Tools_Free();
l__1BDE:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x20));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x1E));
	emu_push(emu_cs); emu_push(0x1BF0); emu_cs = 0x23E1; emu_Tools_Free();
l__1BF0:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
l__1BF2:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x1C));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x1A));
	emu_push(emu_cs); emu_push(0x1C02); emu_cs = 0x23E1; emu_Tools_Free();
l__1C02:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_get_memory16(emu_es, emu_bx, 0x22) = 0x0;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_get_memory16(emu_es, emu_bx, 0x1C) = 0x0;
	emu_get_memory16(emu_es, emu_bx, 0x1A) = 0x0;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_get_memory16(emu_es, emu_bx, 0x18) = 0x0;
	emu_get_memory16(emu_es, emu_bx, 0x16) = 0x0;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_get_memory16(emu_es, emu_bx, 0x20) = 0x0;
	emu_get_memory16(emu_es, emu_bx, 0x1E) = 0x0;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__1DD7_1C3C_0020_9C6E()
 *
 * @name f__1DD7_1C3C_0020_9C6E
 * @implements 1DD7:1C3C:0020:9C6E ()
 * @implements 1DD7:1C5C:000B:2475
 * @implements 1DD7:1C67:0010:A46A
 * @implements 1DD7:1C77:001A:7283
 * @implements 1DD7:1C91:0019:3AC5
 * @implements 1DD7:1CAA:000A:440C
 * @implements 1DD7:1CB4:000E:F129
 * @implements 1DD7:1CB9:0009:2391
 * @implements 1DD7:1CC2:0022:F69B
 * @implements 1DD7:1CFB:000D:FF6E
 * @implements 1DD7:1D08:0011:8751
 * @implements 1DD7:1D1A:0008:DA6A
 * @implements 1DD7:1D85:000A:136B
 * @implements 1DD7:1D8F:000F:46C5
 * @implements 1DD7:1D9E:0003:EB1A
 * @implements 1DD7:1D9F:0002:E03A
 * @implements 1DD7:1DE1:0004:893F
 *
 * Called From: 1DD7:05C5:000B:351D
 * Called From: 1DD7:0A71:000F:3112
 * Called From: 1DD7:0AC7:0018:0CC6
 * Called From: 1DD7:0B93:0019:AE96
 */
void f__1DD7_1C3C_0020_9C6E()
{
l__1C3C:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x8);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x10);
	emu_dx = emu_get_memory16(emu_es, emu_bx, 0xE);
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_dx;
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp,  0xA), 0xFFFF);
	if (emu_get_memory16(emu_ss, emu_bp,  0xA) != 0xFFFF) goto l__1C5C;
	goto l__1DE1;
l__1C5C:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x6);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x4));
	if (emu_ax != 0) goto l__1C67;
	goto l__1DE1;
l__1C67:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x16);
	emu_orw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x18));
	if (emu_ax != 0) goto l__1C77;
	goto l__1DE1;
l__1C77:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_es, emu_bx, 0x1E));
	emu_addw(&emu_bx, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x0);
	emu_ax = (int8)emu_al;
	emu_get_memory16(emu_ss, emu_bp,  0xA) = emu_ax;
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp,  0xA), 0xFFFF);
	if (emu_get_memory16(emu_ss, emu_bp,  0xA) != 0xFFFF) goto l__1C91;
	goto l__1DE1;
l__1C91:
	emu_ax = 0x4;
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x6616;
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x4));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x2));
	emu_push(emu_cs); emu_push(0x1CAA); emu_cs = 0x01F7; f__01F7_2890_0028_F33A();
l__1CAA:
	emu_addw(&emu_sp, 0xA);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax == 0) goto l__1CB4;
	/* Unresolved jump */ emu_ip = 0x1DA1; emu_last_cs = 0x1DD7; emu_last_ip = 0x1CB1; emu_last_length = 0x000A; emu_last_crc = 0x440C; emu_call();
l__1CB4:
	emu_andw(&emu_get_memory16(emu_ss, emu_bp,  0xA), 0xFF);
l__1CB9:
	emu_xorw(&emu_ax, emu_ax);
	emu_bx = 0x10;
	emu_pushf();

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_ss, emu_bp, -0x6);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_push(0x1CC2);
	switch ((emu_cs << 16) + emu_ip) {
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x1DD7; emu_last_ip = 0x1CBF; emu_last_length = 0x0009; emu_last_crc = 0x2391;
			emu_call();
			return;
	}
l__1CC2:
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_ax;
	emu_testw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x8);
	if ((emu_get_memory16(emu_ss, emu_bp, -0x8) & 0x8) != 0) goto l__1CB9;
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x6516), 0xFFFF);
	if (emu_get_memory16(emu_ds, 0x00, 0x6516) == 0xFFFF) goto l__1CFB;
	emu_cx = emu_get_memory16(emu_ds, 0x00, 0x9868);
	emu_dx = 0x1;
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x6516);
	emu_bx = 0xA;
	emu_pushf();

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_ss, emu_bp, -0x6);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_push(0x1CE4);
	switch ((emu_cs << 16) + emu_ip) {
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x1DD7; emu_last_ip = 0x1CE1; emu_last_length = 0x0022; emu_last_crc = 0xF69B;
			emu_call();
			return;
	}
	/* Unresolved jump */ emu_ip = 0x1CE4; emu_last_cs = 0x1DD7; emu_last_ip = 0x1CE4; emu_last_length = 0x0022; emu_last_crc = 0xF69B; emu_call();
l__1CFB:
	emu_dx = 0x0;
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0xA);
	emu_bx = 0x9;
	emu_pushf();

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_ss, emu_bp, -0x6);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_push(0x1D08);
	switch ((emu_cs << 16) + emu_ip) {
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x1DD7; emu_last_ip = 0x1D05; emu_last_length = 0x000D; emu_last_crc = 0xFF6E;
			emu_call();
			return;
	}
l__1D08:
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ax;
	emu_get_memory16(emu_ds, 0x00, 0x6516) = 0xFFFF;
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp,  0xC), 0xFFFF);
	if (emu_get_memory16(emu_ss, emu_bp,  0xC) != 0xFFFF) goto l__1D1A;
	goto l__1D85;
l__1D1A:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x9);
	if (emu_get_memory16(emu_ss, emu_bp, -0x2) != 0x9) { /* Unresolved jump */ emu_ip = 0x1D23; emu_last_cs = 0x1DD7; emu_last_ip = 0x1D1E; emu_last_length = 0x0008; emu_last_crc = 0xDA6A; emu_call(); return; }
	goto l__1D85;
l__1D85:
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0xA);
	emu_bx = 0x6;
	emu_pushf();

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_ss, emu_bp, -0x6);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_push(0x1D8F);
	switch ((emu_cs << 16) + emu_ip) {
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x1DD7; emu_last_ip = 0x1D8C; emu_last_length = 0x000A; emu_last_crc = 0x136B;
			emu_call();
			return;
	}
l__1D8F:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp,  0xA), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp,  0xA) != 0x0) goto l__1D9F;
	emu_ax = 0x5;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1D9E); emu_cs = 0x24FD; f__24FD_000A_000B_2043();
l__1D9E:
	emu_pop(&emu_cx);
l__1D9F:
	goto l__1DE1;
l__1DE1:
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__B4B1_0000_0016_067A()
 *
 * @name f__B4B1_0000_0016_067A
 * @implements B4B1:0000:0016:067A ()
 * @implements B4B1:0016:000B:B9A3
 * @implements B4B1:0021:0010:8479
 * @implements B4B1:0031:0017:5F5A
 * @implements B4B1:0048:0022:DD12
 * @implements B4B1:006A:0005:802E
 * @implements B4B1:0079:0004:68F2
 * @implements B4B1:007D:0005:8BCF
 *
 * Called From: 34B1:0020:0005:0000
 */
void f__B4B1_0000_0016_067A()
{
l__0000:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x4);
	emu_push(emu_si);
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x0016); emu_cs = 0x1FB5; f__1FB5_01FA_0010_F89C();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B1) { overlay(0x34B1, 1); }
l__0016:
	emu_addw(&emu_sp, 0x6);
	emu_si = emu_ax;
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x0021); emu_cs = 0x1FB5; f__1FB5_09C7_0018_922D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B1) { overlay(0x34B1, 1); }
l__0021:
	emu_pop(&emu_cx);
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x0031); emu_cs = 0x1FB5; f__1FB5_01FA_0010_F89C();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B1) { overlay(0x34B1, 1); }
l__0031:
	emu_addw(&emu_sp, 0x6);
	emu_si = emu_ax;
	emu_xorw(&emu_ax, emu_ax);
	emu_dx = 0x4;
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x4);
	emu_push(emu_ax);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x0048); emu_cs = 0x1FB5; f__1FB5_0AEC_001B_A5E4();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B1) { overlay(0x34B1, 1); }
l__0048:
	emu_addw(&emu_sp, 0xA);
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x4D52);
	if (emu_get_memory16(emu_ss, emu_bp, -0x2) != 0x4D52) { /* Unresolved jump */ emu_ip = 0x006F; emu_last_cs = 0xB4B1; emu_last_ip = 0x0050; emu_last_length = 0x0022; emu_last_crc = 0xDD12; emu_call(); return; }
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x4F46);
	if (emu_get_memory16(emu_ss, emu_bp, -0x4) != 0x4F46) { /* Unresolved jump */ emu_ip = 0x006F; emu_last_cs = 0xB4B1; emu_last_ip = 0x0057; emu_last_length = 0x0022; emu_last_crc = 0xDD12; emu_call(); return; }
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_dx = 0x4;
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x006A); emu_cs = 0x1FB5; f__1FB5_1207_001B_2A6C();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B1) { overlay(0x34B1, 1); }
l__006A:
	emu_addw(&emu_sp, 0x8);
	goto l__0079;
l__0079:
	emu_ax = emu_si;
	goto l__007D;
l__007D:
	emu_pop(&emu_si);
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B4B1_0082_0012_D287()
 *
 * @name f__B4B1_0082_0012_D287
 * @implements B4B1:0082:0012:D287 ()
 * @implements B4B1:0094:0004:BE52
 *
 * Called From: 34B1:0034:0005:0000
 */
void f__B4B1_0082_0012_D287()
{
l__0082:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_si);
	emu_si = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_cmpw(&emu_si, 0xFFFF);
	if (emu_si == 0xFFFF) { /* Unresolved jump */ emu_ip = 0x0095; emu_last_cs = 0xB4B1; emu_last_ip = 0x008C; emu_last_length = 0x0012; emu_last_crc = 0xD287; emu_call(); return; }
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x0094); emu_cs = 0x1FB5; f__1FB5_09C7_0018_922D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B1) { overlay(0x34B1, 1); }
l__0094:
	emu_pop(&emu_cx);
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B4B1_0098_002A_CE8A()
 *
 * @name f__B4B1_0098_002A_CE8A
 * @implements B4B1:0098:002A:CE8A ()
 * @implements B4B1:00B0:0012:E067
 * @implements B4B1:00C2:0017:764B
 * @implements B4B1:00D9:001A:7444
 * @implements B4B1:00F3:0017:365F
 * @implements B4B1:010A:0012:E467
 * @implements B4B1:011C:0017:F652
 * @implements B4B1:0133:000B:B36D
 * @implements B4B1:013E:002A:F6C5
 * @implements B4B1:0168:000B:A35D
 * @implements B4B1:0171:0002:EABA
 * @implements B4B1:0175:0016:189C
 * @implements B4B1:018B:0009:FBD7
 * @implements B4B1:0194:0028:14CC
 * @implements B4B1:01BC:0006:6839
 * @implements B4B1:01BF:0003:E21B
 * @implements B4B1:01C2:0006:7629
 * @implements B4B1:01C8:0005:8BCF
 *
 * Called From: 34B1:002F:0005:0000
 */
void f__B4B1_0098_002A_CE8A()
{
l__0098:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0xA);
	emu_push(emu_si);
	emu_si = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = 0x0;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = 0x0;
	emu_get_memory8(emu_ss, emu_bp, -0x9) = 0x1;
l__00B0:
	emu_xorw(&emu_ax, emu_ax);
	emu_dx = 0x4;
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x4);
	emu_push(emu_ax);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x00C2); emu_cs = 0x1FB5; f__1FB5_0AEC_001B_A5E4();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B1) { overlay(0x34B1, 1); }
l__00C2:
	emu_addw(&emu_sp, 0xA);
	emu_orw(&emu_dx, emu_dx);
	if (emu_dx != 0) { /* Unresolved jump */ emu_ip = 0x00CE; emu_last_cs = 0xB4B1; emu_last_ip = 0x00C7; emu_last_length = 0x0017; emu_last_crc = 0x764B; emu_call(); return; }
	emu_cmpw(&emu_ax, 0x4);
	if (emu_ax == 0x4) goto l__00D9;
	emu_al = emu_get_memory8(emu_ss, emu_bp, -0x9);
	emu_ax = (int8)emu_al;
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax != 0) goto l__00D9;
	goto l__01C2;
l__00D9:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_ax != 0) goto l__010A;
	emu_xorw(&emu_ax, emu_ax);
	emu_dx = 0x4;
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x4);
	emu_push(emu_ax);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x00F3); emu_cs = 0x1FB5; f__1FB5_0AEC_001B_A5E4();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B1) { overlay(0x34B1, 1); }
l__00F3:
	emu_addw(&emu_sp, 0xA);
	emu_orw(&emu_dx, emu_dx);
	if (emu_dx != 0) { /* Unresolved jump */ emu_ip = 0x00FF; emu_last_cs = 0xB4B1; emu_last_ip = 0x00F8; emu_last_length = 0x0017; emu_last_crc = 0x365F; emu_call(); return; }
	emu_cmpw(&emu_ax, 0x4);
	if (emu_ax == 0x4) goto l__010A;
	emu_al = emu_get_memory8(emu_ss, emu_bp, -0x9);
	emu_ax = (int8)emu_al;
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax != 0) goto l__010A;
	goto l__01C2;
l__010A:
	emu_xorw(&emu_ax, emu_ax);
	emu_dx = 0x4;
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x8);
	emu_push(emu_ax);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x011C); emu_cs = 0x1FB5; f__1FB5_0AEC_001B_A5E4();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B1) { overlay(0x34B1, 1); }
l__011C:
	emu_addw(&emu_sp, 0xA);
	emu_orw(&emu_dx, emu_dx);
	if (emu_dx != 0) { /* Unresolved jump */ emu_ip = 0x0128; emu_last_cs = 0xB4B1; emu_last_ip = 0x0121; emu_last_length = 0x0017; emu_last_crc = 0xF652; emu_call(); return; }
	emu_cmpw(&emu_ax, 0x4);
	if (emu_ax == 0x4) goto l__0133;
	emu_al = emu_get_memory8(emu_ss, emu_bp, -0x9);
	emu_ax = (int8)emu_al;
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax != 0) goto l__0133;
	goto l__01C2;
l__0133:
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs); emu_push(0x013E); emu_cs = 0x2BC0; emu_Tools_Swapd();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B1) { overlay(0x34B1, 1); }
l__013E:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0xA);
	emu_dx = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_ax != emu_get_memory16(emu_ss, emu_bp, -0x2)) goto l__0175;
	emu_cmpw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0x4));
	if (emu_dx != emu_get_memory16(emu_ss, emu_bp, -0x4)) goto l__0175;
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_ax = 0xFFFF;
	emu_dx = 0xFFF8;
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x0168); emu_cs = 0x1FB5; f__1FB5_1207_001B_2A6C();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B1) { overlay(0x34B1, 1); }
l__0168:
	emu_addw(&emu_sp, 0x8);
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x6);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x8);
l__0171:
	goto l__01C8;
l__0175:
	emu_cmpb(&emu_get_memory8(emu_ss, emu_bp, -0x9), 0x0);
	if (emu_get_memory8(emu_ss, emu_bp, -0x9) == 0x0) goto l__0194;
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_dx = 0xC;
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x018B); emu_cs = 0x1FB5; f__1FB5_1207_001B_2A6C();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B1) { overlay(0x34B1, 1); }
l__018B:
	emu_addw(&emu_sp, 0x8);
	emu_get_memory8(emu_ss, emu_bp, -0x9) = 0x0;
	goto l__01BF;
l__0194:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x6);
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x8);
	emu_addw(&emu_dx, 0x1);
	emu_adcw(&emu_ax, 0x0);
	emu_andw(&emu_dx, 0xFFFE);
	emu_andw(&emu_ax, 0xFFFF);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_dx;
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x01BC); emu_cs = 0x1FB5; f__1FB5_1207_001B_2A6C();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B1) { overlay(0x34B1, 1); }
l__01BC:
	emu_addw(&emu_sp, 0x8);
l__01BF:
	goto l__00B0;
l__01C2:
	emu_xorw(&emu_dx, emu_dx);
	emu_xorw(&emu_ax, emu_ax);
	goto l__0171;
l__01C8:
	emu_pop(&emu_si);
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B4B1_01CD_002A_CE8A()
 *
 * @name f__B4B1_01CD_002A_CE8A
 * @implements B4B1:01CD:002A:CE8A ()
 * @implements B4B1:01E5:0012:E067
 * @implements B4B1:01F7:0017:B6E7
 * @implements B4B1:020E:001A:7444
 * @implements B4B1:0228:0017:76FB
 * @implements B4B1:023F:0012:E467
 * @implements B4B1:0251:0017:36F1
 * @implements B4B1:0268:000B:B36D
 * @implements B4B1:0273:0016:E2C8
 * @implements B4B1:0289:0008:650D
 * @implements B4B1:0291:001A:2962
 * @implements B4B1:02AB:001E:075C
 * @implements B4B1:02C9:0045:223B
 * @implements B4B1:030E:000B:1E5E
 * @implements B4B1:0311:0008:4F4A
 * @implements B4B1:0317:0002:EABA
 * @implements B4B1:031B:0016:189C
 * @implements B4B1:0331:0009:FBD7
 * @implements B4B1:033A:0028:14CC
 * @implements B4B1:0362:0006:A81D
 * @implements B4B1:0365:0003:223F
 * @implements B4B1:0368:0006:7629
 * @implements B4B1:036E:0005:8BCF
 *
 * Called From: 34B1:0025:0005:0000
 */
void f__B4B1_01CD_002A_CE8A()
{
l__01CD:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0xA);
	emu_push(emu_si);
	emu_si = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = 0x0;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = 0x0;
	emu_get_memory8(emu_ss, emu_bp, -0x9) = 0x1;
l__01E5:
	emu_xorw(&emu_ax, emu_ax);
	emu_dx = 0x4;
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x4);
	emu_push(emu_ax);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x01F7); emu_cs = 0x1FB5; f__1FB5_0AEC_001B_A5E4();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B1) { overlay(0x34B1, 1); }
l__01F7:
	emu_addw(&emu_sp, 0xA);
	emu_orw(&emu_dx, emu_dx);
	if (emu_dx != 0) { /* Unresolved jump */ emu_ip = 0x0203; emu_last_cs = 0xB4B1; emu_last_ip = 0x01FC; emu_last_length = 0x0017; emu_last_crc = 0xB6E7; emu_call(); return; }
	emu_cmpw(&emu_ax, 0x4);
	if (emu_ax == 0x4) goto l__020E;
	emu_al = emu_get_memory8(emu_ss, emu_bp, -0x9);
	emu_ax = (int8)emu_al;
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax != 0) goto l__020E;
	goto l__0368;
l__020E:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_ax != 0) goto l__023F;
	emu_xorw(&emu_ax, emu_ax);
	emu_dx = 0x4;
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x4);
	emu_push(emu_ax);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x0228); emu_cs = 0x1FB5; f__1FB5_0AEC_001B_A5E4();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B1) { overlay(0x34B1, 1); }
l__0228:
	emu_addw(&emu_sp, 0xA);
	emu_orw(&emu_dx, emu_dx);
	if (emu_dx != 0) { /* Unresolved jump */ emu_ip = 0x0234; emu_last_cs = 0xB4B1; emu_last_ip = 0x022D; emu_last_length = 0x0017; emu_last_crc = 0x76FB; emu_call(); return; }
	emu_cmpw(&emu_ax, 0x4);
	if (emu_ax == 0x4) goto l__023F;
	emu_al = emu_get_memory8(emu_ss, emu_bp, -0x9);
	emu_ax = (int8)emu_al;
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax != 0) goto l__023F;
	goto l__0368;
l__023F:
	emu_xorw(&emu_ax, emu_ax);
	emu_dx = 0x4;
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x8);
	emu_push(emu_ax);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x0251); emu_cs = 0x1FB5; f__1FB5_0AEC_001B_A5E4();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B1) { overlay(0x34B1, 1); }
l__0251:
	emu_addw(&emu_sp, 0xA);
	emu_orw(&emu_dx, emu_dx);
	if (emu_dx != 0) { /* Unresolved jump */ emu_ip = 0x025D; emu_last_cs = 0xB4B1; emu_last_ip = 0x0256; emu_last_length = 0x0017; emu_last_crc = 0x36F1; emu_call(); return; }
	emu_cmpw(&emu_ax, 0x4);
	if (emu_ax == 0x4) goto l__0268;
	emu_al = emu_get_memory8(emu_ss, emu_bp, -0x9);
	emu_ax = (int8)emu_al;
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax != 0) goto l__0268;
	goto l__0368;
l__0268:
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs); emu_push(0x0273); emu_cs = 0x2BC0; emu_Tools_Swapd();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B1) { overlay(0x34B1, 1); }
l__0273:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0xA);
	emu_dx = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_ax == emu_get_memory16(emu_ss, emu_bp, -0x2)) goto l__0289;
	goto l__031B;
l__0289:
	emu_cmpw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0x4));
	if (emu_dx == emu_get_memory16(emu_ss, emu_bp, -0x4)) goto l__0291;
	goto l__031B;
l__0291:
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x12);
	emu_dx = emu_get_memory16(emu_ss, emu_bp,  0x10);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x6));
	if (emu_ax > emu_get_memory16(emu_ss, emu_bp, -0x6)) goto l__02AB;
	if (emu_ax < emu_get_memory16(emu_ss, emu_bp, -0x6)) { /* Unresolved jump */ emu_ip = 0x02A3; emu_last_cs = 0xB4B1; emu_last_ip = 0x029C; emu_last_length = 0x001A; emu_last_crc = 0x2962; emu_call(); return; }
	emu_cmpw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0x8));
	if (emu_dx >= emu_get_memory16(emu_ss, emu_bp, -0x8)) goto l__02AB;
	emu_dx = emu_get_memory16(emu_ss, emu_bp,  0x12);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x10);
	/* Unresolved jump */ emu_ip = 0x02B1; emu_last_cs = 0xB4B1; emu_last_ip = 0x02A9; emu_last_length = 0x001A; emu_last_crc = 0x2962; emu_call();
l__02AB:
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x6);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x8);
	emu_get_memory16(emu_ss, emu_bp,  0x12) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp,  0x10) = emu_ax;
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x12));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x10));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x02C9); emu_cs = 0x1FB5; f__1FB5_0AEC_001B_A5E4();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B1) { overlay(0x34B1, 1); }
l__02C9:
	emu_addw(&emu_sp, 0xA);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x6);
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x8);
	emu_addw(&emu_dx, 0x1);
	emu_adcw(&emu_ax, 0x0);
	emu_andw(&emu_dx, 0xFFFE);
	emu_andw(&emu_ax, 0xFFFF);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_dx;
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x12);
	emu_dx = emu_get_memory16(emu_ss, emu_bp,  0x10);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x6));
	if (emu_ax > emu_get_memory16(emu_ss, emu_bp, -0x6)) goto l__0311;
	if (emu_ax < emu_get_memory16(emu_ss, emu_bp, -0x6)) { /* Unresolved jump */ emu_ip = 0x02F6; emu_last_cs = 0xB4B1; emu_last_ip = 0x02EF; emu_last_length = 0x0045; emu_last_crc = 0x223B; emu_call(); return; }
	emu_cmpw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0x8));
	if (emu_dx >= emu_get_memory16(emu_ss, emu_bp, -0x8)) goto l__0311;
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x6);
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x8);
	emu_subw(&emu_dx, emu_get_memory16(emu_ss, emu_bp,  0x10));
	emu_sbbw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x12));
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x030E); emu_cs = 0x1FB5; f__1FB5_1207_001B_2A6C();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B1) { overlay(0x34B1, 1); }
l__030E:
	emu_addw(&emu_sp, 0x8);
l__0311:
	emu_dx = emu_get_memory16(emu_ss, emu_bp,  0x12);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x10);
l__0317:
	goto l__036E;
l__031B:
	emu_cmpb(&emu_get_memory8(emu_ss, emu_bp, -0x9), 0x0);
	if (emu_get_memory8(emu_ss, emu_bp, -0x9) == 0x0) goto l__033A;
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_dx = 0xC;
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x0331); emu_cs = 0x1FB5; f__1FB5_1207_001B_2A6C();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B1) { overlay(0x34B1, 1); }
l__0331:
	emu_addw(&emu_sp, 0x8);
	emu_get_memory8(emu_ss, emu_bp, -0x9) = 0x0;
	goto l__0365;
l__033A:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x6);
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x8);
	emu_addw(&emu_dx, 0x1);
	emu_adcw(&emu_ax, 0x0);
	emu_andw(&emu_dx, 0xFFFE);
	emu_andw(&emu_ax, 0xFFFF);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_dx;
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x0362); emu_cs = 0x1FB5; f__1FB5_1207_001B_2A6C();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B1) { overlay(0x34B1, 1); }
l__0362:
	emu_addw(&emu_sp, 0x8);
l__0365:
	goto l__01E5;
l__0368:
	emu_xorw(&emu_dx, emu_dx);
	emu_xorw(&emu_ax, emu_ax);
	goto l__0317;
l__036E:
	emu_pop(&emu_si);
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B4B1_0373_001A_90A2()
 *
 * @name f__B4B1_0373_001A_90A2
 * @implements B4B1:0373:001A:90A2 ()
 * @implements B4B1:038D:0026:282D
 * @implements B4B1:03B3:0013:A9F2
 * @implements B4B1:03C6:001B:A317
 * @implements B4B1:03E1:0015:290C
 * @implements B4B1:03F6:0013:A9F2
 * @implements B4B1:0409:001F:F908
 * @implements B4B1:0428:0012:20E5
 * @implements B4B1:042B:000F:82CF
 * @implements B4B1:043A:001C:226F
 * @implements B4B1:0456:001A:55EF
 * @implements B4B1:0470:0013:70AD
 * @implements B4B1:0483:001D:92B3
 * @implements B4B1:04A0:001A:55EF
 * @implements B4B1:04BA:0013:AFF2
 * @implements B4B1:04CD:0009:B39F
 * @implements B4B1:04D0:0006:F7CE
 *
 * Called From: 34B1:002A:0005:0000
 */
void f__B4B1_0373_001A_90A2()
{
l__0373:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0xE);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_si = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_get_memory8(emu_ss, emu_bp, -0xD) = 0x0;
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x10);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x12));
	if (emu_ax != 0) goto l__038D;
	goto l__04D0;
l__038D:
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0xA);
	emu_dx = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_get_memory16(emu_ss, emu_bp, -0xA) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0xC) = emu_dx;
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x10);
	emu_andw(&emu_ax, 0x1);
	emu_di = emu_ax;
	emu_xorw(&emu_ax, emu_ax);
	emu_dx = 0x4;
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0xC);
	emu_push(emu_ax);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x03B3); emu_cs = 0x1FB5; f__1FB5_0E9C_001B_37D1();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B1) { overlay(0x34B1, 1); }
l__03B3:
	emu_addw(&emu_sp, 0xA);
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x03C6); emu_cs = 0x1FB5; f__1FB5_1207_001B_2A6C();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B1) { overlay(0x34B1, 1); }
l__03C6:
	emu_addw(&emu_sp, 0x8);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_ax;
	emu_xorw(&emu_ax, emu_ax);
	emu_dx = 0x4;
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0xC);
	emu_push(emu_ax);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x03E1); emu_cs = 0x1FB5; f__1FB5_0E9C_001B_37D1();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B1) { overlay(0x34B1, 1); }
l__03E1:
	emu_addw(&emu_sp, 0xA);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x12));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x10));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x03F6); emu_cs = 0x1FB5; f__1FB5_0E9C_001B_37D1();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B1) { overlay(0x34B1, 1); }
l__03F6:
	emu_addw(&emu_sp, 0xA);
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x0409); emu_cs = 0x1FB5; f__1FB5_1207_001B_2A6C();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B1) { overlay(0x34B1, 1); }
l__0409:
	emu_addw(&emu_sp, 0x8);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_orw(&emu_di, emu_di);
	if (emu_di == 0) goto l__042B;
	emu_xorw(&emu_ax, emu_ax);
	emu_dx = 0x1;
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0xD);
	emu_push(emu_ax);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x0428); emu_cs = 0x1FB5; f__1FB5_0E9C_001B_37D1();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B1) { overlay(0x34B1, 1); }
l__0428:
	emu_addw(&emu_sp, 0xA);
l__042B:
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x043A); emu_cs = 0x1FB5; f__1FB5_1207_001B_2A6C();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B1) { overlay(0x34B1, 1); }
l__043A:
	emu_addw(&emu_sp, 0x8);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x2);
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_subw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_sbbw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_addw(&emu_dx, 0xFFFC);
	emu_adcw(&emu_ax, 0xFFFF);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x0456); emu_cs = 0x2BC0; emu_Tools_Swapd();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B1) { overlay(0x34B1, 1); }
l__0456:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0xA) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0xC) = emu_ax;
	emu_xorw(&emu_ax, emu_ax);
	emu_dx = 0x4;
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0xC);
	emu_push(emu_ax);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x0470); emu_cs = 0x1FB5; f__1FB5_0E9C_001B_37D1();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B1) { overlay(0x34B1, 1); }
l__0470:
	emu_addw(&emu_sp, 0xA);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_dx = 0x4;
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x0483); emu_cs = 0x1FB5; f__1FB5_1207_001B_2A6C();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B1) { overlay(0x34B1, 1); }
l__0483:
	emu_addw(&emu_sp, 0x8);
	emu_ax = emu_di;
	emu_cwd();
	emu_bx = emu_get_memory16(emu_ss, emu_bp, -0x2);
	emu_cx = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_addw(&emu_cx, emu_ax);
	emu_adcw(&emu_bx, emu_dx);
	emu_addw(&emu_cx, 0xFFF8);
	emu_adcw(&emu_bx, 0xFFFF);
	emu_push(emu_bx);
	emu_push(emu_cx);
	emu_push(emu_cs); emu_push(0x04A0); emu_cs = 0x2BC0; emu_Tools_Swapd();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B1) { overlay(0x34B1, 1); }
l__04A0:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0xA) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0xC) = emu_ax;
	emu_xorw(&emu_ax, emu_ax);
	emu_dx = 0x4;
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0xC);
	emu_push(emu_ax);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x04BA); emu_cs = 0x1FB5; f__1FB5_0E9C_001B_37D1();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B1) { overlay(0x34B1, 1); }
l__04BA:
	emu_addw(&emu_sp, 0xA);
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x04CD); emu_cs = 0x1FB5; f__1FB5_1207_001B_2A6C();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B1) { overlay(0x34B1, 1); }
l__04CD:
	emu_addw(&emu_sp, 0x8);
l__04D0:
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

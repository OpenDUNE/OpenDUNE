/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__22A6_0004_0003_DA0F()
 *
 * @name f__22A6_0004_0003_DA0F
 * @implements 22A6:0004:0003:DA0F ()
 *
 * Called From: 22A3:0018:0010:9291
 */
void f__22A6_0004_0003_DA0F()
{
	f__22A6_0EC6_0014_F4ED(); return;
}

/**
 * Decompiled function f__22A6_034F_000C_5E0A()
 *
 * @name f__22A6_034F_000C_5E0A
 * @implements 22A6:034F:000C:5E0A ()
 *
 * Called From: 0AEC:0C61:0032:F661
 * Called From: 0AEC:0E22:0032:F661
 * Called From: 0AEC:0FBC:0032:EA61
 * Called From: B495:0D24:002B:B990
 * Called From: B495:0F6B:0038:E4A8
 * Called From: B495:11DA:0029:6D47
 * Called From: B495:1210:0029:6D53
 * Called From: B503:069C:0039:8E6A
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
 */
void f__22A6_034F_000C_5E0A()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x6);
	emu_movb(&emu_get_memory8(emu_ss, emu_bp, -0x5), 0x0);
	f__22A6_0367_005C_C0E3(); return;
}

/**
 * Decompiled function f__22A6_0367_005C_C0E3()
 *
 * @name f__22A6_0367_005C_C0E3
 * @implements 22A6:0367:005C:C0E3 ()
 *
 * Called From: 22A6:0359:000C:5E0A
 */
void f__22A6_0367_005C_C0E3()
{
	emu_push(emu_ax.x);
	emu_push(emu_bx.x);
	emu_push(emu_cx.x);
	emu_push(emu_dx.x);
	emu_push(emu_di);
	emu_push(emu_ds);
	emu_push(emu_es);
	emu_push(emu_si);
	emu_cld();
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_di, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_movw(&emu_cx.x, emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0x10));
	emu_cmpw(&emu_ax.x, 0x140);
	if (!(emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x03C3; emu_last_cs = 0x22A6; emu_last_ip = 0x0385; emu_last_length = 0x005C; emu_last_crc = 0xC0E3; emu_call(); return; }
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.sf) { f__22A6_0391_0032_6301(); return; }
	emu_addw(&emu_di, emu_ax.x);
	emu_addw(&emu_cx.x, emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_cmpw(&emu_bx.x, 0xC8);
	if (!(emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x03C3; emu_last_cs = 0x22A6; emu_last_ip = 0x0395; emu_last_length = 0x005C; emu_last_crc = 0xC0E3; emu_call(); return; }
	emu_orw(&emu_bx.x, emu_bx.x);
	if (!emu_flags.sf) { /* Unresolved jump */ emu_ip = 0x03A1; emu_last_cs = 0x22A6; emu_last_ip = 0x0399; emu_last_length = 0x005C; emu_last_crc = 0xC0E3; emu_call(); return; }
	emu_addw(&emu_si, emu_bx.x);
	emu_addw(&emu_dx.x, emu_bx.x);
	emu_xorw(&emu_bx.x, emu_bx.x);
	emu_cmpw(&emu_di, 0x140);
	if (!(emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x03C3; emu_last_cs = 0x22A6; emu_last_ip = 0x03A5; emu_last_length = 0x005C; emu_last_crc = 0xC0E3; emu_call(); return; }
	emu_orw(&emu_di, emu_di);
	if (!emu_flags.sf) { /* Unresolved jump */ emu_ip = 0x03B1; emu_last_cs = 0x22A6; emu_last_ip = 0x03A9; emu_last_length = 0x005C; emu_last_crc = 0xC0E3; emu_call(); return; }
	emu_addw(&emu_ax.x, emu_di);
	emu_addw(&emu_cx.x, emu_di);
	emu_xorw(&emu_di, emu_di);
	emu_cmpw(&emu_si, 0xC8);
	if (!(emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x03C3; emu_last_cs = 0x22A6; emu_last_ip = 0x03B5; emu_last_length = 0x005C; emu_last_crc = 0xC0E3; emu_call(); return; }
	emu_orw(&emu_si, emu_si);
	if (!emu_flags.sf) { /* Unresolved jump */ emu_ip = 0x03C1; emu_last_cs = 0x22A6; emu_last_ip = 0x03B9; emu_last_length = 0x005C; emu_last_crc = 0xC0E3; emu_call(); return; }
	emu_addw(&emu_bx.x, emu_si);
	emu_addw(&emu_dx.x, emu_si);
	emu_xorw(&emu_si, emu_si);
	/* Unresolved jump */ emu_ip = 0x03C6; emu_last_cs = 0x22A6; emu_last_ip = 0x03C1; emu_last_length = 0x005C; emu_last_crc = 0xC0E3; emu_call();
}

/**
 * Decompiled function f__22A6_0391_0032_6301()
 *
 * @name f__22A6_0391_0032_6301
 * @implements 22A6:0391:0032:6301 ()
 *
 * Called From: 22A6:0389:005C:C0E3
 */
void f__22A6_0391_0032_6301()
{
	emu_cmpw(&emu_bx.x, 0xC8);
	if (!(emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x03C3; emu_last_cs = 0x22A6; emu_last_ip = 0x0395; emu_last_length = 0x0032; emu_last_crc = 0x6301; emu_call(); return; }
	emu_orw(&emu_bx.x, emu_bx.x);
	if (!emu_flags.sf) { f__22A6_03A1_0022_6269(); return; }
	emu_addw(&emu_si, emu_bx.x);
	emu_addw(&emu_dx.x, emu_bx.x);
	emu_xorw(&emu_bx.x, emu_bx.x);
	emu_cmpw(&emu_di, 0x140);
	if (!(emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x03C3; emu_last_cs = 0x22A6; emu_last_ip = 0x03A5; emu_last_length = 0x0032; emu_last_crc = 0x6301; emu_call(); return; }
	emu_orw(&emu_di, emu_di);
	if (!emu_flags.sf) { /* Unresolved jump */ emu_ip = 0x03B1; emu_last_cs = 0x22A6; emu_last_ip = 0x03A9; emu_last_length = 0x0032; emu_last_crc = 0x6301; emu_call(); return; }
	emu_addw(&emu_ax.x, emu_di);
	emu_addw(&emu_cx.x, emu_di);
	emu_xorw(&emu_di, emu_di);
	emu_cmpw(&emu_si, 0xC8);
	if (!(emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x03C3; emu_last_cs = 0x22A6; emu_last_ip = 0x03B5; emu_last_length = 0x0032; emu_last_crc = 0x6301; emu_call(); return; }
	emu_orw(&emu_si, emu_si);
	if (!emu_flags.sf) { /* Unresolved jump */ emu_ip = 0x03C1; emu_last_cs = 0x22A6; emu_last_ip = 0x03B9; emu_last_length = 0x0032; emu_last_crc = 0x6301; emu_call(); return; }
	emu_addw(&emu_bx.x, emu_si);
	emu_addw(&emu_dx.x, emu_si);
	emu_xorw(&emu_si, emu_si);
	/* Unresolved jump */ emu_ip = 0x03C6; emu_last_cs = 0x22A6; emu_last_ip = 0x03C1; emu_last_length = 0x0032; emu_last_crc = 0x6301; emu_call();
}

/**
 * Decompiled function f__22A6_03A1_0022_6269()
 *
 * @name f__22A6_03A1_0022_6269
 * @implements 22A6:03A1:0022:6269 ()
 *
 * Called From: 22A6:0399:0032:6301
 */
void f__22A6_03A1_0022_6269()
{
	emu_cmpw(&emu_di, 0x140);
	if (!(emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x03C3; emu_last_cs = 0x22A6; emu_last_ip = 0x03A5; emu_last_length = 0x0022; emu_last_crc = 0x6269; emu_call(); return; }
	emu_orw(&emu_di, emu_di);
	if (!emu_flags.sf) { f__22A6_03B1_0012_6784(); return; }
	emu_addw(&emu_ax.x, emu_di);
	emu_addw(&emu_cx.x, emu_di);
	emu_xorw(&emu_di, emu_di);
	emu_cmpw(&emu_si, 0xC8);
	if (!(emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x03C3; emu_last_cs = 0x22A6; emu_last_ip = 0x03B5; emu_last_length = 0x0022; emu_last_crc = 0x6269; emu_call(); return; }
	emu_orw(&emu_si, emu_si);
	if (!emu_flags.sf) { /* Unresolved jump */ emu_ip = 0x03C1; emu_last_cs = 0x22A6; emu_last_ip = 0x03B9; emu_last_length = 0x0022; emu_last_crc = 0x6269; emu_call(); return; }
	emu_addw(&emu_bx.x, emu_si);
	emu_addw(&emu_dx.x, emu_si);
	emu_xorw(&emu_si, emu_si);
	/* Unresolved jump */ emu_ip = 0x03C6; emu_last_cs = 0x22A6; emu_last_ip = 0x03C1; emu_last_length = 0x0022; emu_last_crc = 0x6269; emu_call();
}

/**
 * Decompiled function f__22A6_03B1_0012_6784()
 *
 * @name f__22A6_03B1_0012_6784
 * @implements 22A6:03B1:0012:6784 ()
 *
 * Called From: 22A6:03A9:0022:6269
 */
void f__22A6_03B1_0012_6784()
{
	emu_cmpw(&emu_si, 0xC8);
	if (!(emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x03C3; emu_last_cs = 0x22A6; emu_last_ip = 0x03B5; emu_last_length = 0x0012; emu_last_crc = 0x6784; emu_call(); return; }
	emu_orw(&emu_si, emu_si);
	if (!emu_flags.sf) { f__22A6_03C1_0002_C1BA(); return; }
	emu_addw(&emu_bx.x, emu_si);
	emu_addw(&emu_dx.x, emu_si);
	emu_xorw(&emu_si, emu_si);
	/* Unresolved jump */ emu_ip = 0x03C6; emu_last_cs = 0x22A6; emu_last_ip = 0x03C1; emu_last_length = 0x0012; emu_last_crc = 0x6784; emu_call();
}

/**
 * Decompiled function f__22A6_03C1_0002_C1BA()
 *
 * @name f__22A6_03C1_0002_C1BA
 * @implements 22A6:03C1:0002:C1BA ()
 *
 * Called From: 22A6:03B9:0012:6784
 */
void f__22A6_03C1_0002_C1BA()
{
	f__22A6_03C6_0099_38CA(); return;
}

/**
 * Decompiled function f__22A6_03C6_0099_38CA()
 *
 * @name f__22A6_03C6_0099_38CA
 * @implements 22A6:03C6:0099:38CA ()
 *
 * Called From: 22A6:03C1:0002:C1BA
 */
void f__22A6_03C6_0099_38CA()
{
	emu_push(emu_bx.x);
	emu_movw(&emu_bx.x, 0x140);
	emu_subw(&emu_bx.x, emu_ax.x);
	emu_subw(&emu_bx.x, emu_cx.x);
	if (!emu_flags.sf) { f__22A6_03D2_008D_FACE(); return; }
	emu_addw(&emu_cx.x, emu_bx.x);
	emu_pop(&emu_bx.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0xC8);
	emu_subw(&emu_ax.x, emu_bx.x);
	emu_subw(&emu_ax.x, emu_dx.x);
	if (!emu_flags.sf) { f__22A6_03DF_0080_AD0A(); return; }
	emu_addw(&emu_dx.x, emu_ax.x);
	emu_pop(&emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x140);
	emu_subw(&emu_ax.x, emu_di);
	emu_subw(&emu_ax.x, emu_cx.x);
	if (!emu_flags.sf) { /* Unresolved jump */ emu_ip = 0x03EC; emu_last_cs = 0x22A6; emu_last_ip = 0x03E8; emu_last_length = 0x0099; emu_last_crc = 0x38CA; emu_call(); return; }
	emu_addw(&emu_cx.x, emu_ax.x);
	emu_pop(&emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0xC8);
	emu_subw(&emu_ax.x, emu_si);
	emu_subw(&emu_ax.x, emu_dx.x);
	if (!emu_flags.sf) { /* Unresolved jump */ emu_ip = 0x03F9; emu_last_cs = 0x22A6; emu_last_ip = 0x03F5; emu_last_length = 0x0099; emu_last_crc = 0x38CA; emu_call(); return; }
	emu_addw(&emu_dx.x, emu_ax.x);
	emu_pop(&emu_ax.x);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (emu_flags.sf) { /* Unresolved jump */ emu_ip = 0x03C3; emu_last_cs = 0x22A6; emu_last_ip = 0x03FC; emu_last_length = 0x0099; emu_last_crc = 0x38CA; emu_call(); return; }
	emu_cmpw(&emu_ax.x, 0x140);
	if (!(emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x03C3; emu_last_cs = 0x22A6; emu_last_ip = 0x0401; emu_last_length = 0x0099; emu_last_crc = 0x38CA; emu_call(); return; }
	emu_orw(&emu_di, emu_di);
	if (emu_flags.sf) { /* Unresolved jump */ emu_ip = 0x03C3; emu_last_cs = 0x22A6; emu_last_ip = 0x0405; emu_last_length = 0x0099; emu_last_crc = 0x38CA; emu_call(); return; }
	emu_cmpw(&emu_di, 0x140);
	if (!(emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x03C3; emu_last_cs = 0x22A6; emu_last_ip = 0x040B; emu_last_length = 0x0099; emu_last_crc = 0x38CA; emu_call(); return; }
	emu_orw(&emu_bx.x, emu_bx.x);
	if (emu_flags.sf) { /* Unresolved jump */ emu_ip = 0x03C3; emu_last_cs = 0x22A6; emu_last_ip = 0x040F; emu_last_length = 0x0099; emu_last_crc = 0x38CA; emu_call(); return; }
	emu_cmpw(&emu_bx.x, 0xC8);
	if (!(emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x03C3; emu_last_cs = 0x22A6; emu_last_ip = 0x0415; emu_last_length = 0x0099; emu_last_crc = 0x38CA; emu_call(); return; }
	emu_orw(&emu_si, emu_si);
	if (emu_flags.sf) { /* Unresolved jump */ emu_ip = 0x03C3; emu_last_cs = 0x22A6; emu_last_ip = 0x0419; emu_last_length = 0x0099; emu_last_crc = 0x38CA; emu_call(); return; }
	emu_cmpw(&emu_si, 0xC8);
	if (!(emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x03C3; emu_last_cs = 0x22A6; emu_last_ip = 0x041F; emu_last_length = 0x0099; emu_last_crc = 0x38CA; emu_call(); return; }
	emu_orw(&emu_cx.x, emu_cx.x);
	if (emu_flags.sf) { /* Unresolved jump */ emu_ip = 0x03C3; emu_last_cs = 0x22A6; emu_last_ip = 0x0423; emu_last_length = 0x0099; emu_last_crc = 0x38CA; emu_call(); return; }
	emu_cmpw(&emu_cx.x, 0x140);
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x03C3; emu_last_cs = 0x22A6; emu_last_ip = 0x0429; emu_last_length = 0x0099; emu_last_crc = 0x38CA; emu_call(); return; }
	emu_orw(&emu_dx.x, emu_dx.x);
	if (emu_flags.sf) { /* Unresolved jump */ emu_ip = 0x03C3; emu_last_cs = 0x22A6; emu_last_ip = 0x042D; emu_last_length = 0x0099; emu_last_crc = 0x38CA; emu_call(); return; }
	emu_cmpw(&emu_dx.x, 0xC8);
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x03C3; emu_last_cs = 0x22A6; emu_last_ip = 0x0433; emu_last_length = 0x0099; emu_last_crc = 0x38CA; emu_call(); return; }
	emu_shlw(&emu_bx.x, 0x1);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_cs, emu_bx.x,  0x17D));
	emu_addw(&emu_ax.x, emu_bx.x);
	emu_movw(&emu_bx.x, emu_si);
	emu_shlw(&emu_bx.x, 0x1);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_cs, emu_bx.x,  0x17D));
	emu_addw(&emu_bx.x, emu_di);
	emu_movw(&emu_si, emu_ax.x);
	emu_movw(&emu_di, emu_bx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_cx.x);
	emu_negw(&emu_cx.x, emu_cx.x);
	emu_addw(&emu_cx.x, 0x140);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_cx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x12));
	/* Unresolved call */ emu_push(0x045F); emu_ip = 0x0E22; emu_last_cs = 0x22A6; emu_last_ip = 0x045C; emu_last_length = 0x0099; emu_last_crc = 0x38CA; emu_call();
	f__22A6_045F_0008_382D();
}

/**
 * Decompiled function f__22A6_03D2_008D_FACE()
 *
 * @name f__22A6_03D2_008D_FACE
 * @implements 22A6:03D2:008D:FACE ()
 *
 * Called From: 22A6:03CE:0099:38CA
 */
void f__22A6_03D2_008D_FACE()
{
	emu_pop(&emu_bx.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0xC8);
	emu_subw(&emu_ax.x, emu_bx.x);
	emu_subw(&emu_ax.x, emu_dx.x);
	if (!emu_flags.sf) { f__22A6_03DF_0080_AD0A(); return; }
	emu_addw(&emu_dx.x, emu_ax.x);
	emu_pop(&emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x140);
	emu_subw(&emu_ax.x, emu_di);
	emu_subw(&emu_ax.x, emu_cx.x);
	if (!emu_flags.sf) { /* Unresolved jump */ emu_ip = 0x03EC; emu_last_cs = 0x22A6; emu_last_ip = 0x03E8; emu_last_length = 0x008D; emu_last_crc = 0xFACE; emu_call(); return; }
	emu_addw(&emu_cx.x, emu_ax.x);
	emu_pop(&emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0xC8);
	emu_subw(&emu_ax.x, emu_si);
	emu_subw(&emu_ax.x, emu_dx.x);
	if (!emu_flags.sf) { /* Unresolved jump */ emu_ip = 0x03F9; emu_last_cs = 0x22A6; emu_last_ip = 0x03F5; emu_last_length = 0x008D; emu_last_crc = 0xFACE; emu_call(); return; }
	emu_addw(&emu_dx.x, emu_ax.x);
	emu_pop(&emu_ax.x);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (emu_flags.sf) { /* Unresolved jump */ emu_ip = 0x03C3; emu_last_cs = 0x22A6; emu_last_ip = 0x03FC; emu_last_length = 0x008D; emu_last_crc = 0xFACE; emu_call(); return; }
	emu_cmpw(&emu_ax.x, 0x140);
	if (!(emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x03C3; emu_last_cs = 0x22A6; emu_last_ip = 0x0401; emu_last_length = 0x008D; emu_last_crc = 0xFACE; emu_call(); return; }
	emu_orw(&emu_di, emu_di);
	if (emu_flags.sf) { /* Unresolved jump */ emu_ip = 0x03C3; emu_last_cs = 0x22A6; emu_last_ip = 0x0405; emu_last_length = 0x008D; emu_last_crc = 0xFACE; emu_call(); return; }
	emu_cmpw(&emu_di, 0x140);
	if (!(emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x03C3; emu_last_cs = 0x22A6; emu_last_ip = 0x040B; emu_last_length = 0x008D; emu_last_crc = 0xFACE; emu_call(); return; }
	emu_orw(&emu_bx.x, emu_bx.x);
	if (emu_flags.sf) { /* Unresolved jump */ emu_ip = 0x03C3; emu_last_cs = 0x22A6; emu_last_ip = 0x040F; emu_last_length = 0x008D; emu_last_crc = 0xFACE; emu_call(); return; }
	emu_cmpw(&emu_bx.x, 0xC8);
	if (!(emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x03C3; emu_last_cs = 0x22A6; emu_last_ip = 0x0415; emu_last_length = 0x008D; emu_last_crc = 0xFACE; emu_call(); return; }
	emu_orw(&emu_si, emu_si);
	if (emu_flags.sf) { /* Unresolved jump */ emu_ip = 0x03C3; emu_last_cs = 0x22A6; emu_last_ip = 0x0419; emu_last_length = 0x008D; emu_last_crc = 0xFACE; emu_call(); return; }
	emu_cmpw(&emu_si, 0xC8);
	if (!(emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x03C3; emu_last_cs = 0x22A6; emu_last_ip = 0x041F; emu_last_length = 0x008D; emu_last_crc = 0xFACE; emu_call(); return; }
	emu_orw(&emu_cx.x, emu_cx.x);
	if (emu_flags.sf) { /* Unresolved jump */ emu_ip = 0x03C3; emu_last_cs = 0x22A6; emu_last_ip = 0x0423; emu_last_length = 0x008D; emu_last_crc = 0xFACE; emu_call(); return; }
	emu_cmpw(&emu_cx.x, 0x140);
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x03C3; emu_last_cs = 0x22A6; emu_last_ip = 0x0429; emu_last_length = 0x008D; emu_last_crc = 0xFACE; emu_call(); return; }
	emu_orw(&emu_dx.x, emu_dx.x);
	if (emu_flags.sf) { /* Unresolved jump */ emu_ip = 0x03C3; emu_last_cs = 0x22A6; emu_last_ip = 0x042D; emu_last_length = 0x008D; emu_last_crc = 0xFACE; emu_call(); return; }
	emu_cmpw(&emu_dx.x, 0xC8);
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x03C3; emu_last_cs = 0x22A6; emu_last_ip = 0x0433; emu_last_length = 0x008D; emu_last_crc = 0xFACE; emu_call(); return; }
	emu_shlw(&emu_bx.x, 0x1);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_cs, emu_bx.x,  0x17D));
	emu_addw(&emu_ax.x, emu_bx.x);
	emu_movw(&emu_bx.x, emu_si);
	emu_shlw(&emu_bx.x, 0x1);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_cs, emu_bx.x,  0x17D));
	emu_addw(&emu_bx.x, emu_di);
	emu_movw(&emu_si, emu_ax.x);
	emu_movw(&emu_di, emu_bx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_cx.x);
	emu_negw(&emu_cx.x, emu_cx.x);
	emu_addw(&emu_cx.x, 0x140);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_cx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x12));
	/* Unresolved call */ emu_push(0x045F); emu_ip = 0x0E22; emu_last_cs = 0x22A6; emu_last_ip = 0x045C; emu_last_length = 0x008D; emu_last_crc = 0xFACE; emu_call();
	f__22A6_045F_0008_382D();
}

/**
 * Decompiled function f__22A6_03DF_0080_AD0A()
 *
 * @name f__22A6_03DF_0080_AD0A
 * @implements 22A6:03DF:0080:AD0A ()
 *
 * Called From: 22A6:03DB:008D:FACE
 * Called From: 22A6:03DB:0099:38CA
 */
void f__22A6_03DF_0080_AD0A()
{
	emu_pop(&emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x140);
	emu_subw(&emu_ax.x, emu_di);
	emu_subw(&emu_ax.x, emu_cx.x);
	if (!emu_flags.sf) { f__22A6_03EC_0073_9796(); return; }
	emu_addw(&emu_cx.x, emu_ax.x);
	emu_pop(&emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0xC8);
	emu_subw(&emu_ax.x, emu_si);
	emu_subw(&emu_ax.x, emu_dx.x);
	if (!emu_flags.sf) { /* Unresolved jump */ emu_ip = 0x03F9; emu_last_cs = 0x22A6; emu_last_ip = 0x03F5; emu_last_length = 0x0080; emu_last_crc = 0xAD0A; emu_call(); return; }
	emu_addw(&emu_dx.x, emu_ax.x);
	emu_pop(&emu_ax.x);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (emu_flags.sf) { /* Unresolved jump */ emu_ip = 0x03C3; emu_last_cs = 0x22A6; emu_last_ip = 0x03FC; emu_last_length = 0x0080; emu_last_crc = 0xAD0A; emu_call(); return; }
	emu_cmpw(&emu_ax.x, 0x140);
	if (!(emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x03C3; emu_last_cs = 0x22A6; emu_last_ip = 0x0401; emu_last_length = 0x0080; emu_last_crc = 0xAD0A; emu_call(); return; }
	emu_orw(&emu_di, emu_di);
	if (emu_flags.sf) { /* Unresolved jump */ emu_ip = 0x03C3; emu_last_cs = 0x22A6; emu_last_ip = 0x0405; emu_last_length = 0x0080; emu_last_crc = 0xAD0A; emu_call(); return; }
	emu_cmpw(&emu_di, 0x140);
	if (!(emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x03C3; emu_last_cs = 0x22A6; emu_last_ip = 0x040B; emu_last_length = 0x0080; emu_last_crc = 0xAD0A; emu_call(); return; }
	emu_orw(&emu_bx.x, emu_bx.x);
	if (emu_flags.sf) { /* Unresolved jump */ emu_ip = 0x03C3; emu_last_cs = 0x22A6; emu_last_ip = 0x040F; emu_last_length = 0x0080; emu_last_crc = 0xAD0A; emu_call(); return; }
	emu_cmpw(&emu_bx.x, 0xC8);
	if (!(emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x03C3; emu_last_cs = 0x22A6; emu_last_ip = 0x0415; emu_last_length = 0x0080; emu_last_crc = 0xAD0A; emu_call(); return; }
	emu_orw(&emu_si, emu_si);
	if (emu_flags.sf) { /* Unresolved jump */ emu_ip = 0x03C3; emu_last_cs = 0x22A6; emu_last_ip = 0x0419; emu_last_length = 0x0080; emu_last_crc = 0xAD0A; emu_call(); return; }
	emu_cmpw(&emu_si, 0xC8);
	if (!(emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x03C3; emu_last_cs = 0x22A6; emu_last_ip = 0x041F; emu_last_length = 0x0080; emu_last_crc = 0xAD0A; emu_call(); return; }
	emu_orw(&emu_cx.x, emu_cx.x);
	if (emu_flags.sf) { /* Unresolved jump */ emu_ip = 0x03C3; emu_last_cs = 0x22A6; emu_last_ip = 0x0423; emu_last_length = 0x0080; emu_last_crc = 0xAD0A; emu_call(); return; }
	emu_cmpw(&emu_cx.x, 0x140);
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x03C3; emu_last_cs = 0x22A6; emu_last_ip = 0x0429; emu_last_length = 0x0080; emu_last_crc = 0xAD0A; emu_call(); return; }
	emu_orw(&emu_dx.x, emu_dx.x);
	if (emu_flags.sf) { /* Unresolved jump */ emu_ip = 0x03C3; emu_last_cs = 0x22A6; emu_last_ip = 0x042D; emu_last_length = 0x0080; emu_last_crc = 0xAD0A; emu_call(); return; }
	emu_cmpw(&emu_dx.x, 0xC8);
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x03C3; emu_last_cs = 0x22A6; emu_last_ip = 0x0433; emu_last_length = 0x0080; emu_last_crc = 0xAD0A; emu_call(); return; }
	emu_shlw(&emu_bx.x, 0x1);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_cs, emu_bx.x,  0x17D));
	emu_addw(&emu_ax.x, emu_bx.x);
	emu_movw(&emu_bx.x, emu_si);
	emu_shlw(&emu_bx.x, 0x1);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_cs, emu_bx.x,  0x17D));
	emu_addw(&emu_bx.x, emu_di);
	emu_movw(&emu_si, emu_ax.x);
	emu_movw(&emu_di, emu_bx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_cx.x);
	emu_negw(&emu_cx.x, emu_cx.x);
	emu_addw(&emu_cx.x, 0x140);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_cx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x12));
	/* Unresolved call */ emu_push(0x045F); emu_ip = 0x0E22; emu_last_cs = 0x22A6; emu_last_ip = 0x045C; emu_last_length = 0x0080; emu_last_crc = 0xAD0A; emu_call();
	f__22A6_045F_0008_382D();
}

/**
 * Decompiled function f__22A6_03EC_0073_9796()
 *
 * @name f__22A6_03EC_0073_9796
 * @implements 22A6:03EC:0073:9796 ()
 *
 * Called From: 22A6:03E8:0080:AD0A
 */
void f__22A6_03EC_0073_9796()
{
	emu_pop(&emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0xC8);
	emu_subw(&emu_ax.x, emu_si);
	emu_subw(&emu_ax.x, emu_dx.x);
	if (!emu_flags.sf) { f__22A6_03F9_0066_AEA9(); return; }
	emu_addw(&emu_dx.x, emu_ax.x);
	emu_pop(&emu_ax.x);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (emu_flags.sf) { /* Unresolved jump */ emu_ip = 0x03C3; emu_last_cs = 0x22A6; emu_last_ip = 0x03FC; emu_last_length = 0x0073; emu_last_crc = 0x9796; emu_call(); return; }
	emu_cmpw(&emu_ax.x, 0x140);
	if (!(emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x03C3; emu_last_cs = 0x22A6; emu_last_ip = 0x0401; emu_last_length = 0x0073; emu_last_crc = 0x9796; emu_call(); return; }
	emu_orw(&emu_di, emu_di);
	if (emu_flags.sf) { /* Unresolved jump */ emu_ip = 0x03C3; emu_last_cs = 0x22A6; emu_last_ip = 0x0405; emu_last_length = 0x0073; emu_last_crc = 0x9796; emu_call(); return; }
	emu_cmpw(&emu_di, 0x140);
	if (!(emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x03C3; emu_last_cs = 0x22A6; emu_last_ip = 0x040B; emu_last_length = 0x0073; emu_last_crc = 0x9796; emu_call(); return; }
	emu_orw(&emu_bx.x, emu_bx.x);
	if (emu_flags.sf) { /* Unresolved jump */ emu_ip = 0x03C3; emu_last_cs = 0x22A6; emu_last_ip = 0x040F; emu_last_length = 0x0073; emu_last_crc = 0x9796; emu_call(); return; }
	emu_cmpw(&emu_bx.x, 0xC8);
	if (!(emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x03C3; emu_last_cs = 0x22A6; emu_last_ip = 0x0415; emu_last_length = 0x0073; emu_last_crc = 0x9796; emu_call(); return; }
	emu_orw(&emu_si, emu_si);
	if (emu_flags.sf) { /* Unresolved jump */ emu_ip = 0x03C3; emu_last_cs = 0x22A6; emu_last_ip = 0x0419; emu_last_length = 0x0073; emu_last_crc = 0x9796; emu_call(); return; }
	emu_cmpw(&emu_si, 0xC8);
	if (!(emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x03C3; emu_last_cs = 0x22A6; emu_last_ip = 0x041F; emu_last_length = 0x0073; emu_last_crc = 0x9796; emu_call(); return; }
	emu_orw(&emu_cx.x, emu_cx.x);
	if (emu_flags.sf) { /* Unresolved jump */ emu_ip = 0x03C3; emu_last_cs = 0x22A6; emu_last_ip = 0x0423; emu_last_length = 0x0073; emu_last_crc = 0x9796; emu_call(); return; }
	emu_cmpw(&emu_cx.x, 0x140);
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x03C3; emu_last_cs = 0x22A6; emu_last_ip = 0x0429; emu_last_length = 0x0073; emu_last_crc = 0x9796; emu_call(); return; }
	emu_orw(&emu_dx.x, emu_dx.x);
	if (emu_flags.sf) { /* Unresolved jump */ emu_ip = 0x03C3; emu_last_cs = 0x22A6; emu_last_ip = 0x042D; emu_last_length = 0x0073; emu_last_crc = 0x9796; emu_call(); return; }
	emu_cmpw(&emu_dx.x, 0xC8);
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x03C3; emu_last_cs = 0x22A6; emu_last_ip = 0x0433; emu_last_length = 0x0073; emu_last_crc = 0x9796; emu_call(); return; }
	emu_shlw(&emu_bx.x, 0x1);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_cs, emu_bx.x,  0x17D));
	emu_addw(&emu_ax.x, emu_bx.x);
	emu_movw(&emu_bx.x, emu_si);
	emu_shlw(&emu_bx.x, 0x1);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_cs, emu_bx.x,  0x17D));
	emu_addw(&emu_bx.x, emu_di);
	emu_movw(&emu_si, emu_ax.x);
	emu_movw(&emu_di, emu_bx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_cx.x);
	emu_negw(&emu_cx.x, emu_cx.x);
	emu_addw(&emu_cx.x, 0x140);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_cx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x12));
	/* Unresolved call */ emu_push(0x045F); emu_ip = 0x0E22; emu_last_cs = 0x22A6; emu_last_ip = 0x045C; emu_last_length = 0x0073; emu_last_crc = 0x9796; emu_call();
	f__22A6_045F_0008_382D();
}

/**
 * Decompiled function f__22A6_03F9_0066_AEA9()
 *
 * @name f__22A6_03F9_0066_AEA9
 * @implements 22A6:03F9:0066:AEA9 ()
 *
 * Called From: 22A6:03F5:0073:9796
 */
void f__22A6_03F9_0066_AEA9()
{
	emu_pop(&emu_ax.x);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (emu_flags.sf) { /* Unresolved jump */ emu_ip = 0x03C3; emu_last_cs = 0x22A6; emu_last_ip = 0x03FC; emu_last_length = 0x0066; emu_last_crc = 0xAEA9; emu_call(); return; }
	emu_cmpw(&emu_ax.x, 0x140);
	if (!(emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x03C3; emu_last_cs = 0x22A6; emu_last_ip = 0x0401; emu_last_length = 0x0066; emu_last_crc = 0xAEA9; emu_call(); return; }
	emu_orw(&emu_di, emu_di);
	if (emu_flags.sf) { /* Unresolved jump */ emu_ip = 0x03C3; emu_last_cs = 0x22A6; emu_last_ip = 0x0405; emu_last_length = 0x0066; emu_last_crc = 0xAEA9; emu_call(); return; }
	emu_cmpw(&emu_di, 0x140);
	if (!(emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x03C3; emu_last_cs = 0x22A6; emu_last_ip = 0x040B; emu_last_length = 0x0066; emu_last_crc = 0xAEA9; emu_call(); return; }
	emu_orw(&emu_bx.x, emu_bx.x);
	if (emu_flags.sf) { /* Unresolved jump */ emu_ip = 0x03C3; emu_last_cs = 0x22A6; emu_last_ip = 0x040F; emu_last_length = 0x0066; emu_last_crc = 0xAEA9; emu_call(); return; }
	emu_cmpw(&emu_bx.x, 0xC8);
	if (!(emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x03C3; emu_last_cs = 0x22A6; emu_last_ip = 0x0415; emu_last_length = 0x0066; emu_last_crc = 0xAEA9; emu_call(); return; }
	emu_orw(&emu_si, emu_si);
	if (emu_flags.sf) { /* Unresolved jump */ emu_ip = 0x03C3; emu_last_cs = 0x22A6; emu_last_ip = 0x0419; emu_last_length = 0x0066; emu_last_crc = 0xAEA9; emu_call(); return; }
	emu_cmpw(&emu_si, 0xC8);
	if (!(emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x03C3; emu_last_cs = 0x22A6; emu_last_ip = 0x041F; emu_last_length = 0x0066; emu_last_crc = 0xAEA9; emu_call(); return; }
	emu_orw(&emu_cx.x, emu_cx.x);
	if (emu_flags.sf) { /* Unresolved jump */ emu_ip = 0x03C3; emu_last_cs = 0x22A6; emu_last_ip = 0x0423; emu_last_length = 0x0066; emu_last_crc = 0xAEA9; emu_call(); return; }
	emu_cmpw(&emu_cx.x, 0x140);
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x03C3; emu_last_cs = 0x22A6; emu_last_ip = 0x0429; emu_last_length = 0x0066; emu_last_crc = 0xAEA9; emu_call(); return; }
	emu_orw(&emu_dx.x, emu_dx.x);
	if (emu_flags.sf) { /* Unresolved jump */ emu_ip = 0x03C3; emu_last_cs = 0x22A6; emu_last_ip = 0x042D; emu_last_length = 0x0066; emu_last_crc = 0xAEA9; emu_call(); return; }
	emu_cmpw(&emu_dx.x, 0xC8);
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x03C3; emu_last_cs = 0x22A6; emu_last_ip = 0x0433; emu_last_length = 0x0066; emu_last_crc = 0xAEA9; emu_call(); return; }
	emu_shlw(&emu_bx.x, 0x1);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_cs, emu_bx.x,  0x17D));
	emu_addw(&emu_ax.x, emu_bx.x);
	emu_movw(&emu_bx.x, emu_si);
	emu_shlw(&emu_bx.x, 0x1);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_cs, emu_bx.x,  0x17D));
	emu_addw(&emu_bx.x, emu_di);
	emu_movw(&emu_si, emu_ax.x);
	emu_movw(&emu_di, emu_bx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_cx.x);
	emu_negw(&emu_cx.x, emu_cx.x);
	emu_addw(&emu_cx.x, 0x140);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_cx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x12));
	emu_push(0x045F); f__22A6_0E22_0012_7FC4();
	f__22A6_045F_0008_382D();
}

/**
 * Decompiled function f__22A6_045F_0008_382D()
 *
 * @name f__22A6_045F_0008_382D
 * @implements 22A6:045F:0008:382D ()
 *
 * Called From: 22A6:045F:0066:AEA9
 */
void f__22A6_045F_0008_382D()
{
	emu_movw(&emu_ds, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x14));
	emu_push(0x0467); f__22A6_0E22_0012_7FC4();
	f__22A6_0467_001B_C9E8();
}

/**
 * Decompiled function f__22A6_0467_001B_C9E8()
 *
 * @name f__22A6_0467_001B_C9E8
 * @implements 22A6:0467:001B:C9E8 ()
 *
 * Called From: 22A6:0467:0008:382D
 */
void f__22A6_0467_001B_C9E8()
{
	emu_movw(&emu_es, emu_ax.x);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_cmpb(&emu_get_memory8(emu_ss, emu_bp, -0x5), 0x1);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0482; emu_last_cs = 0x22A6; emu_last_ip = 0x0473; emu_last_length = 0x001B; emu_last_crc = 0xC9E8; emu_call(); return; }
	emu_movw(&emu_cx.x, emu_ax.x);
	emu_rep_movsb(emu_ds);
	emu_addw(&emu_di, emu_bx.x);
	emu_addw(&emu_si, emu_bx.x);
	emu_decw(&emu_dx.x);
	if (!emu_flags.zf) { f__22A6_0475_000D_2DD3(); return; }
	f__22A6_0499_000C_DF43(); return;
}

/**
 * Decompiled function f__22A6_0475_000D_2DD3()
 *
 * @name f__22A6_0475_000D_2DD3
 * @implements 22A6:0475:000D:2DD3 ()
 *
 * Called From: 22A6:047E:001B:C9E8
 * Called From: 22A6:047E:000D:2DD3
 */
void f__22A6_0475_000D_2DD3()
{
	emu_movw(&emu_cx.x, emu_ax.x);
	emu_rep_movsb(emu_ds);
	emu_addw(&emu_di, emu_bx.x);
	emu_addw(&emu_si, emu_bx.x);
	emu_decw(&emu_dx.x);
	if (!emu_flags.zf) { f__22A6_0475_000D_2DD3(); return; }
	f__22A6_0499_000C_DF43(); return;
}

/**
 * Decompiled function f__22A6_0499_000C_DF43()
 *
 * @name f__22A6_0499_000C_DF43
 * @implements 22A6:0499:000C:DF43 ()
 *
 * Called From: 22A6:0480:000D:2DD3
 * Called From: 22A6:0480:001B:C9E8
 */
void f__22A6_0499_000C_DF43()
{
	emu_pop(&emu_si);
	emu_pop(&emu_es);
	emu_pop(&emu_ds);
	emu_pop(&emu_di);
	emu_pop(&emu_dx.x);
	emu_pop(&emu_cx.x);
	emu_pop(&emu_bx.x);
	emu_pop(&emu_ax.x);
	emu_movw(&emu_sp, emu_bp);
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
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_ax.x);
	emu_push(emu_cx.x);
	emu_push(emu_ds);
	emu_push(emu_si);
	emu_push(emu_es);
	emu_push(emu_di);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(0x04B4); f__22A6_0E1A_0008_F4AE();
	f__22A6_04B4_0008_BD3B();
}

/**
 * Decompiled function f__22A6_04B4_0008_BD3B()
 *
 * @name f__22A6_04B4_0008_BD3B
 * @implements 22A6:04B4:0008:BD3B ()
 *
 * Called From: 22A6:04B4:000F:3B8F
 */
void f__22A6_04B4_0008_BD3B()
{
	emu_movw(&emu_cx.x, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(0x04BC); f__22A6_0E22_0012_7FC4();
	f__22A6_04BC_0021_F55C();
}

/**
 * Decompiled function f__22A6_04BC_0021_F55C()
 *
 * @name f__22A6_04BC_0021_F55C
 * @implements 22A6:04BC:0021:F55C ()
 *
 * Called From: 22A6:04BC:0008:BD3B
 */
void f__22A6_04BC_0021_F55C()
{
	emu_orw(&emu_cx.x, emu_cx.x);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x04D5; emu_last_cs = 0x22A6; emu_last_ip = 0x04BE; emu_last_length = 0x0021; emu_last_crc = 0xF55C; emu_call(); return; }
	emu_orw(&emu_ax.x, emu_ax.x);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x04D5; emu_last_cs = 0x22A6; emu_last_ip = 0x04C2; emu_last_length = 0x0021; emu_last_crc = 0xF55C; emu_call(); return; }
	emu_cmpw(&emu_cx.x, emu_ax.x);
	if (emu_flags.zf) { f__22A6_04D5_0008_9965(); return; }
	emu_movw(&emu_ds, emu_cx.x);
	emu_movw(&emu_es, emu_ax.x);
	emu_xorw(&emu_si, emu_si);
	emu_xorw(&emu_di, emu_di);
	emu_movw(&emu_cx.x, 0x7D00);
	emu_rep_movsw(emu_ds);
	emu_pop(&emu_di);
	emu_pop(&emu_es);
	emu_pop(&emu_si);
	emu_pop(&emu_ds);
	emu_pop(&emu_cx.x);
	emu_pop(&emu_ax.x);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__22A6_04D5_0008_9965()
 *
 * @name f__22A6_04D5_0008_9965
 * @implements 22A6:04D5:0008:9965 ()
 *
 * Called From: 22A6:04C6:0021:F55C
 */
void f__22A6_04D5_0008_9965()
{
	emu_pop(&emu_di);
	emu_pop(&emu_es);
	emu_pop(&emu_si);
	emu_pop(&emu_ds);
	emu_pop(&emu_cx.x);
	emu_pop(&emu_ax.x);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__22A6_04F8_007A_6E25()
 *
 * @name f__22A6_04F8_007A_6E25
 * @implements 22A6:04F8:007A:6E25 ()
 *
 * Called From: 10E4:052E:002E:B2DF
 * Called From: 2B6C:004F:0045:C1FE
 * Called From: B4F2:0F59:001D:FF8F
 */
void f__22A6_04F8_007A_6E25()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x2);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_push(emu_bx.x);
	emu_push(emu_cx.x);
	emu_push(emu_dx.x);
	emu_push(emu_ds);
	emu_push(emu_es);
	emu_push(emu_di);
	emu_push(emu_si);
	emu_cld();
	emu_movw(&emu_di, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpws(&emu_di, 0x0);
	if (!(emu_flags.sf != emu_flags.of)) { f__22A6_0517_005B_75B3(); return; }
	emu_xorw(&emu_di, emu_di);
	emu_cmpws(&emu_di, 0x28);
	if ((emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x051F; emu_last_cs = 0x22A6; emu_last_ip = 0x051A; emu_last_length = 0x007A; emu_last_crc = 0x6E25; emu_call(); return; }
	emu_movw(&emu_di, 0x27);
	emu_shlw(&emu_di, 0x1);
	emu_shlw(&emu_di, 0x1);
	emu_shlw(&emu_di, 0x1);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_cmpws(&emu_dx.x, 0x0);
	if (!(emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x052F; emu_last_cs = 0x22A6; emu_last_ip = 0x052B; emu_last_length = 0x007A; emu_last_crc = 0x6E25; emu_call(); return; }
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_cmpw(&emu_dx.x, 0xC8);
	if ((emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x0538; emu_last_cs = 0x22A6; emu_last_ip = 0x0533; emu_last_length = 0x007A; emu_last_crc = 0x6E25; emu_call(); return; }
	emu_movw(&emu_dx.x, 0xC7);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movw(&emu_cx.x, emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_cmpws(&emu_bx.x, 0x28);
	if ((emu_flags.cf || emu_flags.zf)) { /* Unresolved jump */ emu_ip = 0x0546; emu_last_cs = 0x22A6; emu_last_ip = 0x0541; emu_last_length = 0x007A; emu_last_crc = 0x6E25; emu_call(); return; }
	emu_movw(&emu_bx.x, 0x28);
	emu_orw(&emu_bx.x, emu_bx.x);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x058A; emu_last_cs = 0x22A6; emu_last_ip = 0x0548; emu_last_length = 0x007A; emu_last_crc = 0x6E25; emu_call(); return; }
	if (emu_flags.sf) { /* Unresolved jump */ emu_ip = 0x058A; emu_last_cs = 0x22A6; emu_last_ip = 0x054A; emu_last_length = 0x007A; emu_last_crc = 0x6E25; emu_call(); return; }
	emu_cmpw(&emu_cx.x, 0xC8);
	if ((emu_flags.cf || emu_flags.zf)) { /* Unresolved jump */ emu_ip = 0x0555; emu_last_cs = 0x22A6; emu_last_ip = 0x0550; emu_last_length = 0x007A; emu_last_crc = 0x6E25; emu_call(); return; }
	emu_movw(&emu_cx.x, 0xC8);
	emu_orw(&emu_cx.x, emu_cx.x);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x058A; emu_last_cs = 0x22A6; emu_last_ip = 0x0557; emu_last_length = 0x007A; emu_last_crc = 0x6E25; emu_call(); return; }
	emu_push(emu_bx.x);
	emu_movw(&emu_bx.x, emu_dx.x);
	emu_shlw(&emu_bx.x, 0x1);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_cs, emu_bx.x,  0x17D));
	emu_addw(&emu_di, emu_ax.x);
	emu_pop(&emu_bx.x);
	emu_movw(&emu_dx.x, emu_cx.x);
	emu_shlw(&emu_bx.x, 0x1);
	emu_shlw(&emu_bx.x, 0x1);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	/* Unresolved call */ emu_push(0x0572); emu_ip = 0x0E22; emu_last_cs = 0x22A6; emu_last_ip = 0x056F; emu_last_length = 0x007A; emu_last_crc = 0x6E25; emu_call();
	f__22A6_0572_0024_48A3();
}

/**
 * Decompiled function f__22A6_0517_005B_75B3()
 *
 * @name f__22A6_0517_005B_75B3
 * @implements 22A6:0517:005B:75B3 ()
 *
 * Called From: 22A6:0513:007A:6E25
 */
void f__22A6_0517_005B_75B3()
{
	emu_cmpws(&emu_di, 0x28);
	if ((emu_flags.sf != emu_flags.of)) { f__22A6_051F_0053_AB4B(); return; }
	emu_movw(&emu_di, 0x27);
	emu_shlw(&emu_di, 0x1);
	emu_shlw(&emu_di, 0x1);
	emu_shlw(&emu_di, 0x1);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_cmpws(&emu_dx.x, 0x0);
	if (!(emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x052F; emu_last_cs = 0x22A6; emu_last_ip = 0x052B; emu_last_length = 0x005B; emu_last_crc = 0x75B3; emu_call(); return; }
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_cmpw(&emu_dx.x, 0xC8);
	if ((emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x0538; emu_last_cs = 0x22A6; emu_last_ip = 0x0533; emu_last_length = 0x005B; emu_last_crc = 0x75B3; emu_call(); return; }
	emu_movw(&emu_dx.x, 0xC7);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movw(&emu_cx.x, emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_cmpws(&emu_bx.x, 0x28);
	if ((emu_flags.cf || emu_flags.zf)) { /* Unresolved jump */ emu_ip = 0x0546; emu_last_cs = 0x22A6; emu_last_ip = 0x0541; emu_last_length = 0x005B; emu_last_crc = 0x75B3; emu_call(); return; }
	emu_movw(&emu_bx.x, 0x28);
	emu_orw(&emu_bx.x, emu_bx.x);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x058A; emu_last_cs = 0x22A6; emu_last_ip = 0x0548; emu_last_length = 0x005B; emu_last_crc = 0x75B3; emu_call(); return; }
	if (emu_flags.sf) { /* Unresolved jump */ emu_ip = 0x058A; emu_last_cs = 0x22A6; emu_last_ip = 0x054A; emu_last_length = 0x005B; emu_last_crc = 0x75B3; emu_call(); return; }
	emu_cmpw(&emu_cx.x, 0xC8);
	if ((emu_flags.cf || emu_flags.zf)) { /* Unresolved jump */ emu_ip = 0x0555; emu_last_cs = 0x22A6; emu_last_ip = 0x0550; emu_last_length = 0x005B; emu_last_crc = 0x75B3; emu_call(); return; }
	emu_movw(&emu_cx.x, 0xC8);
	emu_orw(&emu_cx.x, emu_cx.x);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x058A; emu_last_cs = 0x22A6; emu_last_ip = 0x0557; emu_last_length = 0x005B; emu_last_crc = 0x75B3; emu_call(); return; }
	emu_push(emu_bx.x);
	emu_movw(&emu_bx.x, emu_dx.x);
	emu_shlw(&emu_bx.x, 0x1);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_cs, emu_bx.x,  0x17D));
	emu_addw(&emu_di, emu_ax.x);
	emu_pop(&emu_bx.x);
	emu_movw(&emu_dx.x, emu_cx.x);
	emu_shlw(&emu_bx.x, 0x1);
	emu_shlw(&emu_bx.x, 0x1);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	/* Unresolved call */ emu_push(0x0572); emu_ip = 0x0E22; emu_last_cs = 0x22A6; emu_last_ip = 0x056F; emu_last_length = 0x005B; emu_last_crc = 0x75B3; emu_call();
	f__22A6_0572_0024_48A3();
}

/**
 * Decompiled function f__22A6_051F_0053_AB4B()
 *
 * @name f__22A6_051F_0053_AB4B
 * @implements 22A6:051F:0053:AB4B ()
 *
 * Called From: 22A6:051A:005B:75B3
 */
void f__22A6_051F_0053_AB4B()
{
	emu_shlw(&emu_di, 0x1);
	emu_shlw(&emu_di, 0x1);
	emu_shlw(&emu_di, 0x1);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_cmpws(&emu_dx.x, 0x0);
	if (!(emu_flags.sf != emu_flags.of)) { f__22A6_052F_0043_EC1F(); return; }
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_cmpw(&emu_dx.x, 0xC8);
	if ((emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x0538; emu_last_cs = 0x22A6; emu_last_ip = 0x0533; emu_last_length = 0x0053; emu_last_crc = 0xAB4B; emu_call(); return; }
	emu_movw(&emu_dx.x, 0xC7);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movw(&emu_cx.x, emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_cmpws(&emu_bx.x, 0x28);
	if ((emu_flags.cf || emu_flags.zf)) { /* Unresolved jump */ emu_ip = 0x0546; emu_last_cs = 0x22A6; emu_last_ip = 0x0541; emu_last_length = 0x0053; emu_last_crc = 0xAB4B; emu_call(); return; }
	emu_movw(&emu_bx.x, 0x28);
	emu_orw(&emu_bx.x, emu_bx.x);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x058A; emu_last_cs = 0x22A6; emu_last_ip = 0x0548; emu_last_length = 0x0053; emu_last_crc = 0xAB4B; emu_call(); return; }
	if (emu_flags.sf) { /* Unresolved jump */ emu_ip = 0x058A; emu_last_cs = 0x22A6; emu_last_ip = 0x054A; emu_last_length = 0x0053; emu_last_crc = 0xAB4B; emu_call(); return; }
	emu_cmpw(&emu_cx.x, 0xC8);
	if ((emu_flags.cf || emu_flags.zf)) { /* Unresolved jump */ emu_ip = 0x0555; emu_last_cs = 0x22A6; emu_last_ip = 0x0550; emu_last_length = 0x0053; emu_last_crc = 0xAB4B; emu_call(); return; }
	emu_movw(&emu_cx.x, 0xC8);
	emu_orw(&emu_cx.x, emu_cx.x);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x058A; emu_last_cs = 0x22A6; emu_last_ip = 0x0557; emu_last_length = 0x0053; emu_last_crc = 0xAB4B; emu_call(); return; }
	emu_push(emu_bx.x);
	emu_movw(&emu_bx.x, emu_dx.x);
	emu_shlw(&emu_bx.x, 0x1);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_cs, emu_bx.x,  0x17D));
	emu_addw(&emu_di, emu_ax.x);
	emu_pop(&emu_bx.x);
	emu_movw(&emu_dx.x, emu_cx.x);
	emu_shlw(&emu_bx.x, 0x1);
	emu_shlw(&emu_bx.x, 0x1);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	/* Unresolved call */ emu_push(0x0572); emu_ip = 0x0E22; emu_last_cs = 0x22A6; emu_last_ip = 0x056F; emu_last_length = 0x0053; emu_last_crc = 0xAB4B; emu_call();
	f__22A6_0572_0024_48A3();
}

/**
 * Decompiled function f__22A6_052F_0043_EC1F()
 *
 * @name f__22A6_052F_0043_EC1F
 * @implements 22A6:052F:0043:EC1F ()
 *
 * Called From: 22A6:052B:0053:AB4B
 */
void f__22A6_052F_0043_EC1F()
{
	emu_cmpw(&emu_dx.x, 0xC8);
	if ((emu_flags.sf != emu_flags.of)) { f__22A6_0538_003A_3C78(); return; }
	emu_movw(&emu_dx.x, 0xC7);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movw(&emu_cx.x, emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_cmpws(&emu_bx.x, 0x28);
	if ((emu_flags.cf || emu_flags.zf)) { /* Unresolved jump */ emu_ip = 0x0546; emu_last_cs = 0x22A6; emu_last_ip = 0x0541; emu_last_length = 0x0043; emu_last_crc = 0xEC1F; emu_call(); return; }
	emu_movw(&emu_bx.x, 0x28);
	emu_orw(&emu_bx.x, emu_bx.x);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x058A; emu_last_cs = 0x22A6; emu_last_ip = 0x0548; emu_last_length = 0x0043; emu_last_crc = 0xEC1F; emu_call(); return; }
	if (emu_flags.sf) { /* Unresolved jump */ emu_ip = 0x058A; emu_last_cs = 0x22A6; emu_last_ip = 0x054A; emu_last_length = 0x0043; emu_last_crc = 0xEC1F; emu_call(); return; }
	emu_cmpw(&emu_cx.x, 0xC8);
	if ((emu_flags.cf || emu_flags.zf)) { /* Unresolved jump */ emu_ip = 0x0555; emu_last_cs = 0x22A6; emu_last_ip = 0x0550; emu_last_length = 0x0043; emu_last_crc = 0xEC1F; emu_call(); return; }
	emu_movw(&emu_cx.x, 0xC8);
	emu_orw(&emu_cx.x, emu_cx.x);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x058A; emu_last_cs = 0x22A6; emu_last_ip = 0x0557; emu_last_length = 0x0043; emu_last_crc = 0xEC1F; emu_call(); return; }
	emu_push(emu_bx.x);
	emu_movw(&emu_bx.x, emu_dx.x);
	emu_shlw(&emu_bx.x, 0x1);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_cs, emu_bx.x,  0x17D));
	emu_addw(&emu_di, emu_ax.x);
	emu_pop(&emu_bx.x);
	emu_movw(&emu_dx.x, emu_cx.x);
	emu_shlw(&emu_bx.x, 0x1);
	emu_shlw(&emu_bx.x, 0x1);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	/* Unresolved call */ emu_push(0x0572); emu_ip = 0x0E22; emu_last_cs = 0x22A6; emu_last_ip = 0x056F; emu_last_length = 0x0043; emu_last_crc = 0xEC1F; emu_call();
	f__22A6_0572_0024_48A3();
}

/**
 * Decompiled function f__22A6_0538_003A_3C78()
 *
 * @name f__22A6_0538_003A_3C78
 * @implements 22A6:0538:003A:3C78 ()
 *
 * Called From: 22A6:0533:0043:EC1F
 */
void f__22A6_0538_003A_3C78()
{
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movw(&emu_cx.x, emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_cmpws(&emu_bx.x, 0x28);
	if ((emu_flags.cf || emu_flags.zf)) { f__22A6_0546_002C_4F20(); return; }
	emu_movw(&emu_bx.x, 0x28);
	emu_orw(&emu_bx.x, emu_bx.x);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x058A; emu_last_cs = 0x22A6; emu_last_ip = 0x0548; emu_last_length = 0x003A; emu_last_crc = 0x3C78; emu_call(); return; }
	if (emu_flags.sf) { /* Unresolved jump */ emu_ip = 0x058A; emu_last_cs = 0x22A6; emu_last_ip = 0x054A; emu_last_length = 0x003A; emu_last_crc = 0x3C78; emu_call(); return; }
	emu_cmpw(&emu_cx.x, 0xC8);
	if ((emu_flags.cf || emu_flags.zf)) { /* Unresolved jump */ emu_ip = 0x0555; emu_last_cs = 0x22A6; emu_last_ip = 0x0550; emu_last_length = 0x003A; emu_last_crc = 0x3C78; emu_call(); return; }
	emu_movw(&emu_cx.x, 0xC8);
	emu_orw(&emu_cx.x, emu_cx.x);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x058A; emu_last_cs = 0x22A6; emu_last_ip = 0x0557; emu_last_length = 0x003A; emu_last_crc = 0x3C78; emu_call(); return; }
	emu_push(emu_bx.x);
	emu_movw(&emu_bx.x, emu_dx.x);
	emu_shlw(&emu_bx.x, 0x1);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_cs, emu_bx.x,  0x17D));
	emu_addw(&emu_di, emu_ax.x);
	emu_pop(&emu_bx.x);
	emu_movw(&emu_dx.x, emu_cx.x);
	emu_shlw(&emu_bx.x, 0x1);
	emu_shlw(&emu_bx.x, 0x1);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	/* Unresolved call */ emu_push(0x0572); emu_ip = 0x0E22; emu_last_cs = 0x22A6; emu_last_ip = 0x056F; emu_last_length = 0x003A; emu_last_crc = 0x3C78; emu_call();
	f__22A6_0572_0024_48A3();
}

/**
 * Decompiled function f__22A6_0546_002C_4F20()
 *
 * @name f__22A6_0546_002C_4F20
 * @implements 22A6:0546:002C:4F20 ()
 *
 * Called From: 22A6:0541:003A:3C78
 */
void f__22A6_0546_002C_4F20()
{
	emu_orw(&emu_bx.x, emu_bx.x);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x058A; emu_last_cs = 0x22A6; emu_last_ip = 0x0548; emu_last_length = 0x002C; emu_last_crc = 0x4F20; emu_call(); return; }
	if (emu_flags.sf) { /* Unresolved jump */ emu_ip = 0x058A; emu_last_cs = 0x22A6; emu_last_ip = 0x054A; emu_last_length = 0x002C; emu_last_crc = 0x4F20; emu_call(); return; }
	emu_cmpw(&emu_cx.x, 0xC8);
	if ((emu_flags.cf || emu_flags.zf)) { f__22A6_0555_001D_D834(); return; }
	emu_movw(&emu_cx.x, 0xC8);
	emu_orw(&emu_cx.x, emu_cx.x);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x058A; emu_last_cs = 0x22A6; emu_last_ip = 0x0557; emu_last_length = 0x002C; emu_last_crc = 0x4F20; emu_call(); return; }
	emu_push(emu_bx.x);
	emu_movw(&emu_bx.x, emu_dx.x);
	emu_shlw(&emu_bx.x, 0x1);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_cs, emu_bx.x,  0x17D));
	emu_addw(&emu_di, emu_ax.x);
	emu_pop(&emu_bx.x);
	emu_movw(&emu_dx.x, emu_cx.x);
	emu_shlw(&emu_bx.x, 0x1);
	emu_shlw(&emu_bx.x, 0x1);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	/* Unresolved call */ emu_push(0x0572); emu_ip = 0x0E22; emu_last_cs = 0x22A6; emu_last_ip = 0x056F; emu_last_length = 0x002C; emu_last_crc = 0x4F20; emu_call();
	f__22A6_0572_0024_48A3();
}

/**
 * Decompiled function f__22A6_0555_001D_D834()
 *
 * @name f__22A6_0555_001D_D834
 * @implements 22A6:0555:001D:D834 ()
 *
 * Called From: 22A6:0550:002C:4F20
 */
void f__22A6_0555_001D_D834()
{
	emu_orw(&emu_cx.x, emu_cx.x);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x058A; emu_last_cs = 0x22A6; emu_last_ip = 0x0557; emu_last_length = 0x001D; emu_last_crc = 0xD834; emu_call(); return; }
	emu_push(emu_bx.x);
	emu_movw(&emu_bx.x, emu_dx.x);
	emu_shlw(&emu_bx.x, 0x1);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_cs, emu_bx.x,  0x17D));
	emu_addw(&emu_di, emu_ax.x);
	emu_pop(&emu_bx.x);
	emu_movw(&emu_dx.x, emu_cx.x);
	emu_shlw(&emu_bx.x, 0x1);
	emu_shlw(&emu_bx.x, 0x1);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(0x0572); f__22A6_0E22_0012_7FC4();
	f__22A6_0572_0024_48A3();
}

/**
 * Decompiled function f__22A6_0572_0024_48A3()
 *
 * @name f__22A6_0572_0024_48A3
 * @implements 22A6:0572:0024:48A3 ()
 *
 * Called From: 22A6:0572:001D:D834
 */
void f__22A6_0572_0024_48A3()
{
	emu_movw(&emu_es, emu_ax.x);
	emu_movw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_movw(&emu_ds, emu_get_memory16(emu_ss, emu_bp,  0x10));
	emu_movw(&emu_ax.x, 0xA0);
	emu_subw(&emu_ax.x, emu_bx.x);
	emu_shlw(&emu_ax.x, 0x1);
	emu_movw(&emu_cx.x, emu_bx.x);
	emu_rep_movsw(emu_ds);
	emu_addw(&emu_di, emu_ax.x);
	emu_decw(&emu_dx.x);
	if (!emu_flags.zf) { f__22A6_0581_0015_1FDE(); return; }
	emu_pop(&emu_si);
	emu_pop(&emu_di);
	emu_pop(&emu_es);
	emu_pop(&emu_ds);
	emu_pop(&emu_dx.x);
	emu_pop(&emu_cx.x);
	emu_pop(&emu_bx.x);
	emu_pop(&emu_ax.x);
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__22A6_0581_0015_1FDE()
 *
 * @name f__22A6_0581_0015_1FDE
 * @implements 22A6:0581:0015:1FDE ()
 *
 * Called From: 22A6:0588:0024:48A3
 * Called From: 22A6:0588:0015:1FDE
 */
void f__22A6_0581_0015_1FDE()
{
	emu_movw(&emu_cx.x, emu_bx.x);
	emu_rep_movsw(emu_ds);
	emu_addw(&emu_di, emu_ax.x);
	emu_decw(&emu_dx.x);
	if (!emu_flags.zf) { f__22A6_0581_0015_1FDE(); return; }
	emu_pop(&emu_si);
	emu_pop(&emu_di);
	emu_pop(&emu_es);
	emu_pop(&emu_ds);
	emu_pop(&emu_dx.x);
	emu_pop(&emu_cx.x);
	emu_pop(&emu_bx.x);
	emu_pop(&emu_ax.x);
	emu_movw(&emu_sp, emu_bp);
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
 *
 * Called From: B4B8:18C0:002C:7400
 * Called From: B4B8:18E5:0025:1863
 */
void f__22A6_0597_0019_A23D()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_bx.x);
	emu_push(emu_cx.x);
	emu_push(emu_es);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_push(emu_ds);
	emu_cld();
	emu_movw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ds, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_ax.x, emu_ds);
	emu_orw(&emu_ax.x, emu_si);
	if (!emu_flags.zf) { f__22A6_05B0_00F6_50F0(); return; }
	/* Unresolved jump */ emu_ip = 0x06C9; emu_last_cs = 0x22A6; emu_last_ip = 0x05AD; emu_last_length = 0x0019; emu_last_crc = 0xA23D; emu_call();
}

/**
 * Decompiled function f__22A6_05B0_00F6_50F0()
 *
 * @name f__22A6_05B0_00F6_50F0
 * @implements 22A6:05B0:00F6:50F0 ()
 *
 * Called From: 22A6:05AB:0019:A23D
 */
void f__22A6_05B0_00F6_50F0()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x10));
	emu_movb(&emu_get_memory8(emu_cs, 0x00,  0x6BE), emu_ax.l);
	emu_push(emu_si);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_movb(&emu_get_memory8(emu_cs, 0x00,  0x6C5), emu_bx.l);
	emu_addw(&emu_si, emu_bx.x);
	emu_addw(&emu_si, emu_bx.x);
	emu_addw(&emu_si, emu_bx.x);
	emu_lodsb(emu_ds);
	emu_movb(&emu_get_memory8(emu_cs, 0x00,  0x6C2), emu_ax.l);
	emu_lodsb(emu_ds);
	emu_movb(&emu_get_memory8(emu_cs, 0x00,  0x6C3), emu_ax.l);
	emu_lodsb(emu_ds);
	emu_movb(&emu_get_memory8(emu_cs, 0x00,  0x6C4), emu_ax.l);
	emu_pop(&emu_si);
	emu_addws(&emu_si, 0x3);
	emu_push(emu_ds);
	emu_pop(&emu_es);
	emu_movw(&emu_di, emu_si);
	emu_xorw(&emu_bx.x, emu_bx.x);
	emu_movb(&emu_get_memory8(emu_cs, emu_bx.x,  0x12B3), 0x0);
	emu_incw(&emu_bx.x);
	emu_movb(&emu_dx.l, emu_get_memory8(emu_cs, 0x00,  0x6BE));
	emu_shrb(&emu_dx.l, 0x1);
	emu_lodsb(emu_ds);
	emu_movb(&emu_dx.h, emu_ax.l);
	emu_subb(&emu_ax.l, emu_get_memory8(emu_cs, 0x00,  0x6C2));
	emu_imulub(&emu_ax.l, emu_dx.l);
	emu_shlw(&emu_ax.x, 0x1);
	emu_subb(&emu_dx.h, emu_ax.h);
	emu_movb(&emu_get_memory8(emu_cs, 0x00,  0x6BF), emu_dx.h);
	emu_lodsb(emu_ds);
	emu_movb(&emu_dx.h, emu_ax.l);
	emu_subb(&emu_ax.l, emu_get_memory8(emu_cs, 0x00,  0x6C3));
	emu_imulub(&emu_ax.l, emu_dx.l);
	emu_shlw(&emu_ax.x, 0x1);
	emu_subb(&emu_dx.h, emu_ax.h);
	emu_movb(&emu_get_memory8(emu_cs, 0x00,  0x6C0), emu_dx.h);
	emu_lodsb(emu_ds);
	emu_movb(&emu_dx.h, emu_ax.l);
	emu_subb(&emu_ax.l, emu_get_memory8(emu_cs, 0x00,  0x6C4));
	emu_imulub(&emu_ax.l, emu_dx.l);
	emu_shlw(&emu_ax.x, 0x1);
	emu_subb(&emu_dx.h, emu_ax.h);
	emu_movb(&emu_get_memory8(emu_cs, 0x00,  0x6C1), emu_dx.h);
	emu_movw(&emu_di, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_es, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_addws(&emu_di, 0x3);
	emu_movb(&emu_bx.h, emu_get_memory8(emu_cs, 0x00,  0x6C5));
	emu_movb(&emu_get_memory8(emu_cs, 0x00,  0x6C6), emu_bx.h);
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x6C7), 0xFFFF);
	emu_movw(&emu_cx.x, 0xFF);
	emu_xorb(&emu_bx.h, emu_bx.h);
	emu_incb(&emu_bx.h);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_di,  0x0));
	emu_incw(&emu_di);
	emu_subb(&emu_ax.l, emu_get_memory8(emu_cs, 0x00,  0x6BF));
	emu_movb(&emu_ax.h, emu_ax.l);
	emu_imulub(&emu_ax.l, emu_ax.h);
	emu_addw(&emu_dx.x, emu_ax.x);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_di,  0x0));
	emu_incw(&emu_di);
	emu_subb(&emu_ax.l, emu_get_memory8(emu_cs, 0x00,  0x6C0));
	emu_movb(&emu_ax.h, emu_ax.l);
	emu_imulub(&emu_ax.l, emu_ax.h);
	emu_addw(&emu_dx.x, emu_ax.x);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_di,  0x0));
	emu_incw(&emu_di);
	emu_subb(&emu_ax.l, emu_get_memory8(emu_cs, 0x00,  0x6C1));
	emu_movb(&emu_ax.h, emu_ax.l);
	emu_imulub(&emu_ax.l, emu_ax.h);
	emu_addw(&emu_dx.x, emu_ax.x);
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_cs, 0x00,  0x6C7));
	if (!(emu_flags.cf || emu_flags.zf)) { /* Unresolved jump */ emu_ip = 0x0692; emu_last_cs = 0x22A6; emu_last_ip = 0x067B; emu_last_length = 0x00F6; emu_last_crc = 0x50F0; emu_call(); return; }
	emu_cmpb(&emu_bx.h, emu_get_memory8(emu_cs, 0x00,  0x6C5));
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0688; emu_last_cs = 0x22A6; emu_last_ip = 0x0682; emu_last_length = 0x00F6; emu_last_crc = 0x50F0; emu_call(); return; }
	emu_cmpb(&emu_bx.l, emu_bx.h);
	if (emu_flags.zf) { f__22A6_0692_0014_FFAB(); return; }
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x6C7), emu_dx.x);
	emu_movb(&emu_get_memory8(emu_cs, 0x00,  0x6C6), emu_bx.h);
	if (--emu_cx.x != 0) { /* Unresolved jump */ emu_ip = 0x0645; emu_last_cs = 0x22A6; emu_last_ip = 0x0692; emu_last_length = 0x00F6; emu_last_crc = 0x50F0; emu_call(); }
	emu_movb(&emu_ax.l, emu_get_memory8(emu_cs, 0x00,  0x6C6));
	emu_xorb(&emu_bx.h, emu_bx.h);
	emu_movb(&emu_get_memory8(emu_cs, emu_bx.x,  0x12B3), emu_ax.l);
	emu_incb(&emu_bx.l);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x06A6; emu_last_cs = 0x22A6; emu_last_ip = 0x06A1; emu_last_length = 0x00F6; emu_last_crc = 0x50F0; emu_call(); return; }
	/* Unresolved jump */ emu_ip = 0x05E6; emu_last_cs = 0x22A6; emu_last_ip = 0x06A3; emu_last_length = 0x00F6; emu_last_crc = 0x50F0; emu_call();
}

/**
 * Decompiled function f__22A6_05E6_00C0_1634()
 *
 * @name f__22A6_05E6_00C0_1634
 * @implements 22A6:05E6:00C0:1634 ()
 *
 * Called From: 22A6:06A3:0014:FFAB
 * Called From: 22A6:06A3:0061:7A47
 */
void f__22A6_05E6_00C0_1634()
{
	emu_movb(&emu_dx.l, emu_get_memory8(emu_cs, 0x00,  0x6BE));
	emu_shrb(&emu_dx.l, 0x1);
	emu_lodsb(emu_ds);
	emu_movb(&emu_dx.h, emu_ax.l);
	emu_subb(&emu_ax.l, emu_get_memory8(emu_cs, 0x00,  0x6C2));
	emu_imulub(&emu_ax.l, emu_dx.l);
	emu_shlw(&emu_ax.x, 0x1);
	emu_subb(&emu_dx.h, emu_ax.h);
	emu_movb(&emu_get_memory8(emu_cs, 0x00,  0x6BF), emu_dx.h);
	emu_lodsb(emu_ds);
	emu_movb(&emu_dx.h, emu_ax.l);
	emu_subb(&emu_ax.l, emu_get_memory8(emu_cs, 0x00,  0x6C3));
	emu_imulub(&emu_ax.l, emu_dx.l);
	emu_shlw(&emu_ax.x, 0x1);
	emu_subb(&emu_dx.h, emu_ax.h);
	emu_movb(&emu_get_memory8(emu_cs, 0x00,  0x6C0), emu_dx.h);
	emu_lodsb(emu_ds);
	emu_movb(&emu_dx.h, emu_ax.l);
	emu_subb(&emu_ax.l, emu_get_memory8(emu_cs, 0x00,  0x6C4));
	emu_imulub(&emu_ax.l, emu_dx.l);
	emu_shlw(&emu_ax.x, 0x1);
	emu_subb(&emu_dx.h, emu_ax.h);
	emu_movb(&emu_get_memory8(emu_cs, 0x00,  0x6C1), emu_dx.h);
	emu_movw(&emu_di, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_es, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_addws(&emu_di, 0x3);
	emu_movb(&emu_bx.h, emu_get_memory8(emu_cs, 0x00,  0x6C5));
	emu_movb(&emu_get_memory8(emu_cs, 0x00,  0x6C6), emu_bx.h);
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x6C7), 0xFFFF);
	emu_movw(&emu_cx.x, 0xFF);
	emu_xorb(&emu_bx.h, emu_bx.h);
	emu_incb(&emu_bx.h);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_di,  0x0));
	emu_incw(&emu_di);
	emu_subb(&emu_ax.l, emu_get_memory8(emu_cs, 0x00,  0x6BF));
	emu_movb(&emu_ax.h, emu_ax.l);
	emu_imulub(&emu_ax.l, emu_ax.h);
	emu_addw(&emu_dx.x, emu_ax.x);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_di,  0x0));
	emu_incw(&emu_di);
	emu_subb(&emu_ax.l, emu_get_memory8(emu_cs, 0x00,  0x6C0));
	emu_movb(&emu_ax.h, emu_ax.l);
	emu_imulub(&emu_ax.l, emu_ax.h);
	emu_addw(&emu_dx.x, emu_ax.x);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_di,  0x0));
	emu_incw(&emu_di);
	emu_subb(&emu_ax.l, emu_get_memory8(emu_cs, 0x00,  0x6C1));
	emu_movb(&emu_ax.h, emu_ax.l);
	emu_imulub(&emu_ax.l, emu_ax.h);
	emu_addw(&emu_dx.x, emu_ax.x);
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_cs, 0x00,  0x6C7));
	if (!(emu_flags.cf || emu_flags.zf)) { /* Unresolved jump */ emu_ip = 0x0692; emu_last_cs = 0x22A6; emu_last_ip = 0x067B; emu_last_length = 0x00C0; emu_last_crc = 0x1634; emu_call(); return; }
	emu_cmpb(&emu_bx.h, emu_get_memory8(emu_cs, 0x00,  0x6C5));
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0688; emu_last_cs = 0x22A6; emu_last_ip = 0x0682; emu_last_length = 0x00C0; emu_last_crc = 0x1634; emu_call(); return; }
	emu_cmpb(&emu_bx.l, emu_bx.h);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0692; emu_last_cs = 0x22A6; emu_last_ip = 0x0686; emu_last_length = 0x00C0; emu_last_crc = 0x1634; emu_call(); return; }
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x6C7), emu_dx.x);
	emu_movb(&emu_get_memory8(emu_cs, 0x00,  0x6C6), emu_bx.h);
	if (--emu_cx.x != 0) { f__22A6_0645_0061_7A47(); return; }
	emu_movb(&emu_ax.l, emu_get_memory8(emu_cs, 0x00,  0x6C6));
	emu_xorb(&emu_bx.h, emu_bx.h);
	emu_movb(&emu_get_memory8(emu_cs, emu_bx.x,  0x12B3), emu_ax.l);
	emu_incb(&emu_bx.l);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x06A6; emu_last_cs = 0x22A6; emu_last_ip = 0x06A1; emu_last_length = 0x00C0; emu_last_crc = 0x1634; emu_call(); return; }
	/* Unresolved jump */ emu_ip = 0x05E6; emu_last_cs = 0x22A6; emu_last_ip = 0x06A3; emu_last_length = 0x00C0; emu_last_crc = 0x1634; emu_call();
}

/**
 * Decompiled function f__22A6_0645_0061_7A47()
 *
 * @name f__22A6_0645_0061_7A47
 * @implements 22A6:0645:0061:7A47 ()
 *
 * Called From: 22A6:0692:0014:FFAB
 * Called From: 22A6:0692:0061:7A47
 * Called From: 22A6:0692:00C0:1634
 * Called From: 22A6:0692:001E:C7B7
 */
void f__22A6_0645_0061_7A47()
{
	emu_incb(&emu_bx.h);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_di,  0x0));
	emu_incw(&emu_di);
	emu_subb(&emu_ax.l, emu_get_memory8(emu_cs, 0x00,  0x6BF));
	emu_movb(&emu_ax.h, emu_ax.l);
	emu_imulub(&emu_ax.l, emu_ax.h);
	emu_addw(&emu_dx.x, emu_ax.x);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_di,  0x0));
	emu_incw(&emu_di);
	emu_subb(&emu_ax.l, emu_get_memory8(emu_cs, 0x00,  0x6C0));
	emu_movb(&emu_ax.h, emu_ax.l);
	emu_imulub(&emu_ax.l, emu_ax.h);
	emu_addw(&emu_dx.x, emu_ax.x);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_di,  0x0));
	emu_incw(&emu_di);
	emu_subb(&emu_ax.l, emu_get_memory8(emu_cs, 0x00,  0x6C1));
	emu_movb(&emu_ax.h, emu_ax.l);
	emu_imulub(&emu_ax.l, emu_ax.h);
	emu_addw(&emu_dx.x, emu_ax.x);
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_cs, 0x00,  0x6C7));
	if (!(emu_flags.cf || emu_flags.zf)) { f__22A6_0692_0014_FFAB(); return; }
	emu_cmpb(&emu_bx.h, emu_get_memory8(emu_cs, 0x00,  0x6C5));
	if (emu_flags.zf) { f__22A6_0688_001E_C7B7(); return; }
	emu_cmpb(&emu_bx.l, emu_bx.h);
	if (emu_flags.zf) { f__22A6_0692_0014_FFAB(); return; }
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x6C7), emu_dx.x);
	emu_movb(&emu_get_memory8(emu_cs, 0x00,  0x6C6), emu_bx.h);
	if (--emu_cx.x != 0) { f__22A6_0645_0061_7A47(); return; }
	emu_movb(&emu_ax.l, emu_get_memory8(emu_cs, 0x00,  0x6C6));
	emu_xorb(&emu_bx.h, emu_bx.h);
	emu_movb(&emu_get_memory8(emu_cs, emu_bx.x,  0x12B3), emu_ax.l);
	emu_incb(&emu_bx.l);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x06A6; emu_last_cs = 0x22A6; emu_last_ip = 0x06A1; emu_last_length = 0x0061; emu_last_crc = 0x7A47; emu_call(); return; }
	f__22A6_05E6_00C0_1634(); return;
}

/**
 * Decompiled function f__22A6_0688_001E_C7B7()
 *
 * @name f__22A6_0688_001E_C7B7
 * @implements 22A6:0688:001E:C7B7 ()
 *
 * Called From: 22A6:0682:0061:7A47
 */
void f__22A6_0688_001E_C7B7()
{
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x6C7), emu_dx.x);
	emu_movb(&emu_get_memory8(emu_cs, 0x00,  0x6C6), emu_bx.h);
	if (--emu_cx.x != 0) { f__22A6_0645_0061_7A47(); return; }
	emu_movb(&emu_ax.l, emu_get_memory8(emu_cs, 0x00,  0x6C6));
	emu_xorb(&emu_bx.h, emu_bx.h);
	emu_movb(&emu_get_memory8(emu_cs, emu_bx.x,  0x12B3), emu_ax.l);
	emu_incb(&emu_bx.l);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x06A6; emu_last_cs = 0x22A6; emu_last_ip = 0x06A1; emu_last_length = 0x001E; emu_last_crc = 0xC7B7; emu_call(); return; }
	/* Unresolved jump */ emu_ip = 0x05E6; emu_last_cs = 0x22A6; emu_last_ip = 0x06A3; emu_last_length = 0x001E; emu_last_crc = 0xC7B7; emu_call();
}

/**
 * Decompiled function f__22A6_0692_0014_FFAB()
 *
 * @name f__22A6_0692_0014_FFAB
 * @implements 22A6:0692:0014:FFAB ()
 *
 * Called From: 22A6:067B:0061:7A47
 * Called From: 22A6:0686:00F6:50F0
 * Called From: 22A6:0686:0061:7A47
 */
void f__22A6_0692_0014_FFAB()
{
	if (--emu_cx.x != 0) { f__22A6_0645_0061_7A47(); return; }
	emu_movb(&emu_ax.l, emu_get_memory8(emu_cs, 0x00,  0x6C6));
	emu_xorb(&emu_bx.h, emu_bx.h);
	emu_movb(&emu_get_memory8(emu_cs, emu_bx.x,  0x12B3), emu_ax.l);
	emu_incb(&emu_bx.l);
	if (emu_flags.zf) { f__22A6_06A6_0018_AC86(); return; }
	f__22A6_05E6_00C0_1634(); return;
}

/**
 * Decompiled function f__22A6_06A6_0018_AC86()
 *
 * @name f__22A6_06A6_0018_AC86
 * @implements 22A6:06A6:0018:AC86 ()
 *
 * Called From: 22A6:06A1:0014:FFAB
 */
void f__22A6_06A6_0018_AC86()
{
	emu_movw(&emu_di, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_movw(&emu_es, emu_ax.x);
	emu_orw(&emu_ax.x, emu_di);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x06C9; emu_last_cs = 0x22A6; emu_last_ip = 0x06B0; emu_last_length = 0x0018; emu_last_crc = 0xAC86; emu_call(); return; }
	emu_push(emu_cs);
	emu_pop(&emu_ds);
	emu_movw(&emu_si, 0x12B3);
	emu_movw(&emu_cx.x, 0x80);
	emu_rep_movsw(emu_ds);
	f__22A6_06C9_000E_3E98(); return;
}

/**
 * Decompiled function f__22A6_06C9_000E_3E98()
 *
 * @name f__22A6_06C9_000E_3E98
 * @implements 22A6:06C9:000E:3E98 ()
 *
 * Called From: 22A6:06BC:0018:AC86
 */
void f__22A6_06C9_000E_3E98()
{
	emu_pop(&emu_ds);
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_pop(&emu_es);
	emu_pop(&emu_cx.x);
	emu_pop(&emu_bx.x);
	emu_movw(&emu_ax.x, 0x12B3);
	emu_movw(&emu_dx.x, 0x22A6);
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
 *
 * Called From: 24D0:0098:001E:EB4C
 */
void f__22A6_06D7_006B_B7D6()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_ax.x);
	emu_push(emu_bx.x);
	emu_push(emu_cx.x);
	emu_push(emu_di);
	emu_push(emu_ds);
	emu_push(emu_dx.x);
	emu_push(emu_es);
	emu_push(emu_si);
	emu_cld();
	emu_movb(&emu_cx.l, 0x3);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpw(&emu_ax.x, 0x28);
	if (!(emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x0742; emu_last_cs = 0x22A6; emu_last_ip = 0x06EB; emu_last_length = 0x006B; emu_last_crc = 0xB7D6; emu_call(); return; }
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.sf) { f__22A6_06F3_004F_513B(); return; }
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_movw(&emu_si, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_cmpw(&emu_ax.x, 0xC8);
	if (!(emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x0742; emu_last_cs = 0x22A6; emu_last_ip = 0x06FD; emu_last_length = 0x006B; emu_last_crc = 0xB7D6; emu_call(); return; }
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.sf) { /* Unresolved jump */ emu_ip = 0x0705; emu_last_cs = 0x22A6; emu_last_ip = 0x0701; emu_last_length = 0x006B; emu_last_crc = 0xB7D6; emu_call(); return; }
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_shlw(&emu_bx.x, 0x1);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_cs, emu_bx.x,  0x17D));
	emu_addw(&emu_si, emu_ax.x);
	emu_movw(&emu_bx.x, 0x140);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_cmpw(&emu_ax.x, 0x28);
	if (!(emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x078C; emu_last_cs = 0x22A6; emu_last_ip = 0x0719; emu_last_length = 0x006B; emu_last_crc = 0xB7D6; emu_call(); return; }
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.sf) { /* Unresolved jump */ emu_ip = 0x0721; emu_last_cs = 0x22A6; emu_last_ip = 0x071D; emu_last_length = 0x006B; emu_last_crc = 0xB7D6; emu_call(); return; }
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_movw(&emu_di, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_movw(&emu_cx.x, emu_ax.x);
	emu_cmpw(&emu_ax.x, 0xC8);
	if (!(emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x078C; emu_last_cs = 0x22A6; emu_last_ip = 0x072D; emu_last_length = 0x006B; emu_last_crc = 0xB7D6; emu_call(); return; }
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.sf) { /* Unresolved jump */ emu_ip = 0x0735; emu_last_cs = 0x22A6; emu_last_ip = 0x0731; emu_last_length = 0x006B; emu_last_crc = 0xB7D6; emu_call(); return; }
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_shlw(&emu_bx.x, 0x1);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_cs, emu_bx.x,  0x17D));
	emu_addw(&emu_di, emu_ax.x);
	/* Unresolved jump */ emu_ip = 0x0744; emu_last_cs = 0x22A6; emu_last_ip = 0x0740; emu_last_length = 0x006B; emu_last_crc = 0xB7D6; emu_call();
}

/**
 * Decompiled function f__22A6_06F3_004F_513B()
 *
 * @name f__22A6_06F3_004F_513B
 * @implements 22A6:06F3:004F:513B ()
 *
 * Called From: 22A6:06EF:006B:B7D6
 */
void f__22A6_06F3_004F_513B()
{
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_movw(&emu_si, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_cmpw(&emu_ax.x, 0xC8);
	if (!(emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x0742; emu_last_cs = 0x22A6; emu_last_ip = 0x06FD; emu_last_length = 0x004F; emu_last_crc = 0x513B; emu_call(); return; }
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.sf) { f__22A6_0705_003D_8585(); return; }
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_shlw(&emu_bx.x, 0x1);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_cs, emu_bx.x,  0x17D));
	emu_addw(&emu_si, emu_ax.x);
	emu_movw(&emu_bx.x, 0x140);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_cmpw(&emu_ax.x, 0x28);
	if (!(emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x078C; emu_last_cs = 0x22A6; emu_last_ip = 0x0719; emu_last_length = 0x004F; emu_last_crc = 0x513B; emu_call(); return; }
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.sf) { /* Unresolved jump */ emu_ip = 0x0721; emu_last_cs = 0x22A6; emu_last_ip = 0x071D; emu_last_length = 0x004F; emu_last_crc = 0x513B; emu_call(); return; }
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_movw(&emu_di, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_movw(&emu_cx.x, emu_ax.x);
	emu_cmpw(&emu_ax.x, 0xC8);
	if (!(emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x078C; emu_last_cs = 0x22A6; emu_last_ip = 0x072D; emu_last_length = 0x004F; emu_last_crc = 0x513B; emu_call(); return; }
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.sf) { /* Unresolved jump */ emu_ip = 0x0735; emu_last_cs = 0x22A6; emu_last_ip = 0x0731; emu_last_length = 0x004F; emu_last_crc = 0x513B; emu_call(); return; }
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_shlw(&emu_bx.x, 0x1);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_cs, emu_bx.x,  0x17D));
	emu_addw(&emu_di, emu_ax.x);
	/* Unresolved jump */ emu_ip = 0x0744; emu_last_cs = 0x22A6; emu_last_ip = 0x0740; emu_last_length = 0x004F; emu_last_crc = 0x513B; emu_call();
}

/**
 * Decompiled function f__22A6_0705_003D_8585()
 *
 * @name f__22A6_0705_003D_8585
 * @implements 22A6:0705:003D:8585 ()
 *
 * Called From: 22A6:0701:004F:513B
 */
void f__22A6_0705_003D_8585()
{
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_shlw(&emu_bx.x, 0x1);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_cs, emu_bx.x,  0x17D));
	emu_addw(&emu_si, emu_ax.x);
	emu_movw(&emu_bx.x, 0x140);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_cmpw(&emu_ax.x, 0x28);
	if (!(emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x078C; emu_last_cs = 0x22A6; emu_last_ip = 0x0719; emu_last_length = 0x003D; emu_last_crc = 0x8585; emu_call(); return; }
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.sf) { f__22A6_0721_0021_E89B(); return; }
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_movw(&emu_di, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_movw(&emu_cx.x, emu_ax.x);
	emu_cmpw(&emu_ax.x, 0xC8);
	if (!(emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x078C; emu_last_cs = 0x22A6; emu_last_ip = 0x072D; emu_last_length = 0x003D; emu_last_crc = 0x8585; emu_call(); return; }
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.sf) { /* Unresolved jump */ emu_ip = 0x0735; emu_last_cs = 0x22A6; emu_last_ip = 0x0731; emu_last_length = 0x003D; emu_last_crc = 0x8585; emu_call(); return; }
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_shlw(&emu_bx.x, 0x1);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_cs, emu_bx.x,  0x17D));
	emu_addw(&emu_di, emu_ax.x);
	/* Unresolved jump */ emu_ip = 0x0744; emu_last_cs = 0x22A6; emu_last_ip = 0x0740; emu_last_length = 0x003D; emu_last_crc = 0x8585; emu_call();
}

/**
 * Decompiled function f__22A6_0721_0021_E89B()
 *
 * @name f__22A6_0721_0021_E89B
 * @implements 22A6:0721:0021:E89B ()
 *
 * Called From: 22A6:071D:003D:8585
 */
void f__22A6_0721_0021_E89B()
{
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_movw(&emu_di, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_movw(&emu_cx.x, emu_ax.x);
	emu_cmpw(&emu_ax.x, 0xC8);
	if (!(emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x078C; emu_last_cs = 0x22A6; emu_last_ip = 0x072D; emu_last_length = 0x0021; emu_last_crc = 0xE89B; emu_call(); return; }
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.sf) { f__22A6_0735_000D_DD74(); return; }
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_shlw(&emu_bx.x, 0x1);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_cs, emu_bx.x,  0x17D));
	emu_addw(&emu_di, emu_ax.x);
	/* Unresolved jump */ emu_ip = 0x0744; emu_last_cs = 0x22A6; emu_last_ip = 0x0740; emu_last_length = 0x0021; emu_last_crc = 0xE89B; emu_call();
}

/**
 * Decompiled function f__22A6_0735_000D_DD74()
 *
 * @name f__22A6_0735_000D_DD74
 * @implements 22A6:0735:000D:DD74 ()
 *
 * Called From: 22A6:0731:0021:E89B
 */
void f__22A6_0735_000D_DD74()
{
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_shlw(&emu_bx.x, 0x1);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_cs, emu_bx.x,  0x17D));
	emu_addw(&emu_di, emu_ax.x);
	f__22A6_0744_0006_1005(); return;
}

/**
 * Decompiled function f__22A6_0744_0006_1005()
 *
 * @name f__22A6_0744_0006_1005
 * @implements 22A6:0744:0006:1005 ()
 *
 * Called From: 22A6:0740:000D:DD74
 */
void f__22A6_0744_0006_1005()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x12));
	emu_push(0x074A); f__22A6_0E22_0012_7FC4();
	f__22A6_074A_0008_FFB7();
}

/**
 * Decompiled function f__22A6_074A_0008_FFB7()
 *
 * @name f__22A6_074A_0008_FFB7
 * @implements 22A6:074A:0008:FFB7 ()
 *
 * Called From: 22A6:074A:0006:1005
 */
void f__22A6_074A_0008_FFB7()
{
	emu_movw(&emu_ds, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x14));
	emu_push(0x0752); f__22A6_0E22_0012_7FC4();
	f__22A6_0752_0044_03B0();
}

/**
 * Decompiled function f__22A6_0752_0044_03B0()
 *
 * @name f__22A6_0752_0044_03B0
 * @implements 22A6:0752:0044:03B0 ()
 *
 * Called From: 22A6:0752:0008:FFB7
 */
void f__22A6_0752_0044_03B0()
{
	emu_movw(&emu_es, emu_ax.x);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_cmpws(&emu_dx.x, 0x28);
	if (!(emu_flags.cf || emu_flags.zf)) { f__22A6_078C_000A_2DE6(); return; }
	emu_cmpws(&emu_dx.x, 0x1);
	if ((emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x078C; emu_last_cs = 0x22A6; emu_last_ip = 0x075F; emu_last_length = 0x0044; emu_last_crc = 0x03B0; emu_call(); return; }
	emu_shlw(&emu_dx.x, 0x1);
	emu_shlw(&emu_dx.x, 0x1);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x10));
	emu_addw(&emu_cx.x, emu_ax.x);
	emu_cmpw(&emu_cx.x, 0xC8);
	if ((emu_flags.cf || emu_flags.zf)) { f__22A6_0776_0020_F9D2(); return; }
	emu_subw(&emu_cx.x, 0xC7);
	emu_subw(&emu_ax.x, emu_cx.x);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (emu_flags.sf) { /* Unresolved jump */ emu_ip = 0x078C; emu_last_cs = 0x22A6; emu_last_ip = 0x0778; emu_last_length = 0x0044; emu_last_crc = 0x03B0; emu_call(); return; }
	emu_movw(&emu_bx.x, 0xA0);
	emu_subw(&emu_bx.x, emu_dx.x);
	emu_shlw(&emu_bx.x, 0x1);
	emu_movw(&emu_cx.x, emu_dx.x);
	emu_rep_movsw(emu_ds);
	emu_addw(&emu_si, emu_bx.x);
	emu_addw(&emu_di, emu_bx.x);
	emu_decw(&emu_ax.x);
	if (!emu_flags.zf) { f__22A6_0781_0015_3428(); return; }
	emu_pop(&emu_si);
	emu_pop(&emu_es);
	emu_pop(&emu_dx.x);
	emu_pop(&emu_ds);
	emu_pop(&emu_di);
	emu_pop(&emu_cx.x);
	emu_pop(&emu_bx.x);
	emu_pop(&emu_ax.x);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__22A6_0776_0020_F9D2()
 *
 * @name f__22A6_0776_0020_F9D2
 * @implements 22A6:0776:0020:F9D2 ()
 *
 * Called From: 22A6:076E:0044:03B0
 */
void f__22A6_0776_0020_F9D2()
{
	emu_orw(&emu_ax.x, emu_ax.x);
	if (emu_flags.sf) { /* Unresolved jump */ emu_ip = 0x078C; emu_last_cs = 0x22A6; emu_last_ip = 0x0778; emu_last_length = 0x0020; emu_last_crc = 0xF9D2; emu_call(); return; }
	emu_movw(&emu_bx.x, 0xA0);
	emu_subw(&emu_bx.x, emu_dx.x);
	emu_shlw(&emu_bx.x, 0x1);
	emu_movw(&emu_cx.x, emu_dx.x);
	emu_rep_movsw(emu_ds);
	emu_addw(&emu_si, emu_bx.x);
	emu_addw(&emu_di, emu_bx.x);
	emu_decw(&emu_ax.x);
	if (!emu_flags.zf) { f__22A6_0781_0015_3428(); return; }
	emu_pop(&emu_si);
	emu_pop(&emu_es);
	emu_pop(&emu_dx.x);
	emu_pop(&emu_ds);
	emu_pop(&emu_di);
	emu_pop(&emu_cx.x);
	emu_pop(&emu_bx.x);
	emu_pop(&emu_ax.x);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__22A6_0781_0015_3428()
 *
 * @name f__22A6_0781_0015_3428
 * @implements 22A6:0781:0015:3428 ()
 *
 * Called From: 22A6:078A:0020:F9D2
 * Called From: 22A6:078A:0015:3428
 * Called From: 22A6:078A:0044:03B0
 */
void f__22A6_0781_0015_3428()
{
	emu_movw(&emu_cx.x, emu_dx.x);
	emu_rep_movsw(emu_ds);
	emu_addw(&emu_si, emu_bx.x);
	emu_addw(&emu_di, emu_bx.x);
	emu_decw(&emu_ax.x);
	if (!emu_flags.zf) { f__22A6_0781_0015_3428(); return; }
	emu_pop(&emu_si);
	emu_pop(&emu_es);
	emu_pop(&emu_dx.x);
	emu_pop(&emu_ds);
	emu_pop(&emu_di);
	emu_pop(&emu_cx.x);
	emu_pop(&emu_bx.x);
	emu_pop(&emu_ax.x);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__22A6_078C_000A_2DE6()
 *
 * @name f__22A6_078C_000A_2DE6
 * @implements 22A6:078C:000A:2DE6 ()
 *
 * Called From: 22A6:075A:0044:03B0
 */
void f__22A6_078C_000A_2DE6()
{
	emu_pop(&emu_si);
	emu_pop(&emu_es);
	emu_pop(&emu_dx.x);
	emu_pop(&emu_ds);
	emu_pop(&emu_di);
	emu_pop(&emu_cx.x);
	emu_pop(&emu_bx.x);
	emu_pop(&emu_ax.x);
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
 *
 * Called From: 0642:0448:000B:7BE4
 * Called From: 24DA:001B:000E:D6F0
 * Called From: 25C4:02C8:000F:595C
 * Called From: B4BE:00B5:000C:7E74
 * Called From: B4BE:0256:000D:8FAB
 * Called From: B4ED:0074:0079:AC5D
 */
void f__22A6_0796_000B_9035()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_ax.x);
	emu_push(emu_cx.x);
	emu_push(emu_di);
	emu_push(emu_es);
	emu_cld();
	emu_push(0x07A1); f__22A6_0DF8_0022_5FD5();
	f__22A6_07A1_0011_14AA();
}

/**
 * Decompiled function f__22A6_07A1_0011_14AA()
 *
 * @name f__22A6_07A1_0011_14AA
 * @implements 22A6:07A1:0011:14AA ()
 *
 * Called From: 22A6:07A1:000B:9035
 */
void f__22A6_07A1_0011_14AA()
{
	emu_movw(&emu_es, emu_ax.x);
	emu_xorw(&emu_di, emu_di);
	emu_movw(&emu_cx.x, 0x7D00);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_rep_stosw();
	emu_pop(&emu_es);
	emu_pop(&emu_di);
	emu_pop(&emu_cx.x);
	emu_pop(&emu_ax.x);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__22A6_07B3_0037_50B9()
 *
 * @name f__22A6_07B3_0037_50B9
 * @implements 22A6:07B3:0037:50B9 ()
 *
 * Called From: 2BC2:00DA:0012:BF40
 */
void f__22A6_07B3_0037_50B9()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_bx.x);
	emu_push(emu_cx.x);
	emu_push(emu_di);
	emu_push(emu_ds);
	emu_push(emu_dx.x);
	emu_push(emu_es);
	emu_push(emu_si);
	emu_lfp(&emu_es, &emu_si, &emu_get_memory16(emu_cs, 0x00,  0x80));
	emu_movw(&emu_ax.x, emu_es);
	emu_orw(&emu_ax.x, emu_si);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x07E7; emu_last_cs = 0x22A6; emu_last_ip = 0x07C6; emu_last_length = 0x0037; emu_last_crc = 0x50B9; emu_call(); return; }
	emu_movb(&emu_bx.l, emu_get_memory8(emu_ss, emu_bp,  0x6));
	emu_xorb(&emu_bx.h, emu_bx.h);
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x7C), emu_bx.x);
	emu_shlw(&emu_bx.x, 0x1);
	emu_addw(&emu_bx.x, emu_get_memory16(emu_cs, 0x00,  0x74));
	emu_movw(&emu_cx.x, emu_get_memory16(emu_es, emu_bx.x + emu_si,  0x0));
	if (emu_cx.x == 0) { /* Unresolved jump */ emu_ip = 0x07E7; emu_last_cs = 0x22A6; emu_last_ip = 0x07DC; emu_last_length = 0x0037; emu_last_crc = 0x50B9; emu_call(); return; }
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_cmpw(&emu_dx.x, 0x140);
	if (emu_flags.cf) { f__22A6_07EA_007A_8632(); return; }
	f__22A6_08F9_0009_C791(); return;
}

/**
 * Decompiled function f__22A6_07EA_007A_8632()
 *
 * @name f__22A6_07EA_007A_8632
 * @implements 22A6:07EA:007A:8632 ()
 *
 * Called From: 22A6:07E5:0037:50B9
 */
void f__22A6_07EA_007A_8632()
{
	emu_movw(&emu_bx.x, emu_get_memory16(emu_cs, 0x00,  0x7C));
	emu_addw(&emu_bx.x, emu_get_memory16(emu_cs, 0x00,  0x76));
	emu_xorb(&emu_ax.h, emu_ax.h);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x + emu_si,  0x0));
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x7E), emu_ax.x);
	emu_addw(&emu_ax.x, emu_dx.x);
	emu_cmpw(&emu_ax.x, 0x140);
	if (!(emu_flags.cf || emu_flags.zf)) { /* Unresolved jump */ emu_ip = 0x07E7; emu_last_cs = 0x22A6; emu_last_ip = 0x0802; emu_last_length = 0x007A; emu_last_crc = 0x8632; emu_call(); return; }
	emu_movw(&emu_di, emu_dx.x);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_cmpw(&emu_dx.x, 0xC8);
	if (!emu_flags.cf) { /* Unresolved jump */ emu_ip = 0x07E7; emu_last_cs = 0x22A6; emu_last_ip = 0x080D; emu_last_length = 0x007A; emu_last_crc = 0x8632; emu_call(); return; }
	emu_movw(&emu_bx.x, emu_get_memory16(emu_cs, 0x00,  0x72));
	emu_xorb(&emu_ax.h, emu_ax.h);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x + emu_si,  0x4));
	emu_movb(&emu_get_memory8(emu_cs, 0x00,  0x84), emu_ax.l);
	emu_addw(&emu_ax.x, emu_dx.x);
	emu_cmpw(&emu_ax.x, 0xC8);
	if (!(emu_flags.cf || emu_flags.zf)) { /* Unresolved jump */ emu_ip = 0x07E7; emu_last_cs = 0x22A6; emu_last_ip = 0x0823; emu_last_length = 0x007A; emu_last_crc = 0x8632; emu_call(); return; }
	emu_movw(&emu_bx.x, emu_get_memory16(emu_cs, 0x00,  0x7C));
	emu_shlw(&emu_bx.x, 0x1);
	emu_addw(&emu_bx.x, emu_get_memory16(emu_cs, 0x00,  0x7A));
	emu_movb(&emu_ax.h, emu_get_memory8(emu_es, emu_bx.x + emu_si,  0x0));
	emu_movb(&emu_get_memory8(emu_cs, 0x00,  0x85), emu_ax.h);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x + emu_si,  0x1));
	emu_movb(&emu_get_memory8(emu_cs, 0x00,  0x86), emu_ax.l);
	emu_addb(&emu_ax.h, emu_ax.l);
	emu_subb(&emu_get_memory8(emu_cs, 0x00,  0x84), emu_ax.h);
	emu_addw(&emu_si, emu_cx.x);
	emu_movw(&emu_bx.x, emu_dx.x);
	emu_shlw(&emu_bx.x, 0x1);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_cs, emu_bx.x,  0x17D));
	emu_addw(&emu_di, emu_ax.x);
	emu_movw(&emu_ax.x, 0x140);
	emu_subw(&emu_ax.x, emu_get_memory16(emu_cs, 0x00,  0x7E));
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x70), emu_ax.x);
	emu_push(0x0864); f__22A6_0DF8_0022_5FD5();
	f__22A6_0864_002C_B662();
}

/**
 * Decompiled function f__22A6_0864_002C_B662()
 *
 * @name f__22A6_0864_002C_B662
 * @implements 22A6:0864:002C:B662 ()
 *
 * Called From: 22A6:0864:007A:8632
 */
void f__22A6_0864_002C_B662()
{
	emu_movw(&emu_dx.x, emu_es);
	emu_movw(&emu_es, emu_ax.x);
	emu_movw(&emu_ds, emu_dx.x);
	emu_movw(&emu_bx.x, 0x87);
	emu_xorb(&emu_cx.h, emu_cx.h);
	emu_movb(&emu_cx.l, emu_get_memory8(emu_cs, 0x00,  0x85));
	emu_orw(&emu_cx.x, emu_cx.x);
	if (emu_flags.zf) { f__22A6_08A0_0062_CF5A(); return; }
	emu_movb(&emu_ax.l, 0x0);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_cs, emu_bx.x + emu_ax.l,  0x0));
	emu_orb(&emu_ax.l, emu_ax.l);
	if (!emu_flags.zf) { f__22A6_0890_0072_C008(); return; }
	emu_movw(&emu_bx.x, emu_cx.x);
	emu_shlw(&emu_bx.x, 0x1);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_cs, emu_bx.x,  0x17D));
	emu_addw(&emu_di, emu_ax.x);
	emu_movw(&emu_bx.x, 0x87);
	f__22A6_08A0_0062_CF5A(); return;
}

/**
 * Decompiled function f__22A6_0890_0072_C008()
 *
 * @name f__22A6_0890_0072_C008
 * @implements 22A6:0890:0072:C008 ()
 *
 * Called From: 22A6:087E:002C:B662
 * Called From: 22A6:089E:006D:F995
 */
void f__22A6_0890_0072_C008()
{
	emu_movw(&emu_dx.x, emu_get_memory16(emu_cs, 0x00,  0x7E));
	emu_stosb();
	emu_decw(&emu_dx.x);
	if (!emu_flags.zf) { f__22A6_0895_006D_F995(); return; }
	emu_addw(&emu_di, emu_get_memory16(emu_cs, 0x00,  0x70));
	if (--emu_cx.x != 0) { /* Unresolved jump */ emu_ip = 0x0890; emu_last_cs = 0x22A6; emu_last_ip = 0x089E; emu_last_length = 0x0072; emu_last_crc = 0xC008; emu_call(); }
	emu_movb(&emu_cx.l, emu_get_memory8(emu_cs, 0x00,  0x86));
	emu_orw(&emu_cx.x, emu_cx.x);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x08F9; emu_last_cs = 0x22A6; emu_last_ip = 0x08A7; emu_last_length = 0x0072; emu_last_crc = 0xC008; emu_call(); return; }
	emu_movw(&emu_dx.x, emu_get_memory16(emu_cs, 0x00,  0x7E));
	emu_lodsb(emu_ds);
	emu_movb(&emu_ax.h, emu_ax.l);
	emu_andb(&emu_ax.l, 0xF);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_cs, emu_bx.x + emu_ax.l,  0x0));
	emu_orb(&emu_ax.l, emu_ax.l);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x08BC; emu_last_cs = 0x22A6; emu_last_ip = 0x08B7; emu_last_length = 0x0072; emu_last_crc = 0xC008; emu_call(); return; }
	emu_movb(&emu_get_memory8(emu_es, emu_di,  0x0), emu_ax.l);
	emu_incw(&emu_di);
	emu_decw(&emu_dx.x);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x08D1; emu_last_cs = 0x22A6; emu_last_ip = 0x08BE; emu_last_length = 0x0072; emu_last_crc = 0xC008; emu_call(); return; }
	emu_movb(&emu_ax.l, emu_ax.h);
	emu_andb(&emu_ax.l, 0xF0);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_cs, emu_bx.x + emu_ax.l,  0x0));
	emu_orb(&emu_ax.l, emu_ax.l);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x08CD; emu_last_cs = 0x22A6; emu_last_ip = 0x08C8; emu_last_length = 0x0072; emu_last_crc = 0xC008; emu_call(); return; }
	emu_movb(&emu_get_memory8(emu_es, emu_di,  0x0), emu_ax.l);
	emu_incw(&emu_di);
	emu_decw(&emu_dx.x);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x08AE; emu_last_cs = 0x22A6; emu_last_ip = 0x08CF; emu_last_length = 0x0072; emu_last_crc = 0xC008; emu_call(); return; }
	emu_addw(&emu_di, emu_get_memory16(emu_cs, 0x00,  0x70));
	if (--emu_cx.x != 0) { /* Unresolved jump */ emu_ip = 0x08A9; emu_last_cs = 0x22A6; emu_last_ip = 0x08D6; emu_last_length = 0x0072; emu_last_crc = 0xC008; emu_call(); }
	emu_movb(&emu_cx.l, emu_get_memory8(emu_cs, 0x00,  0x84));
	emu_orw(&emu_cx.x, emu_cx.x);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x08F9; emu_last_cs = 0x22A6; emu_last_ip = 0x08DF; emu_last_length = 0x0072; emu_last_crc = 0xC008; emu_call(); return; }
	emu_movb(&emu_ax.l, 0x0);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_cs, emu_bx.x + emu_ax.l,  0x0));
	emu_orb(&emu_ax.l, emu_ax.l);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x08F9; emu_last_cs = 0x22A6; emu_last_ip = 0x08E7; emu_last_length = 0x0072; emu_last_crc = 0xC008; emu_call(); return; }
	emu_movw(&emu_dx.x, emu_get_memory16(emu_cs, 0x00,  0x7E));
	emu_stosb();
	emu_decw(&emu_dx.x);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x08EE; emu_last_cs = 0x22A6; emu_last_ip = 0x08F0; emu_last_length = 0x0072; emu_last_crc = 0xC008; emu_call(); return; }
	emu_addw(&emu_di, emu_get_memory16(emu_cs, 0x00,  0x70));
	if (--emu_cx.x != 0) { /* Unresolved jump */ emu_ip = 0x08E9; emu_last_cs = 0x22A6; emu_last_ip = 0x08F7; emu_last_length = 0x0072; emu_last_crc = 0xC008; emu_call(); }
	emu_pop(&emu_si);
	emu_pop(&emu_es);
	emu_pop(&emu_dx.x);
	emu_pop(&emu_ds);
	emu_pop(&emu_di);
	emu_pop(&emu_cx.x);
	emu_pop(&emu_bx.x);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__22A6_0895_006D_F995()
 *
 * @name f__22A6_0895_006D_F995
 * @implements 22A6:0895:006D:F995 ()
 *
 * Called From: 22A6:0897:0072:C008
 * Called From: 22A6:0897:006D:F995
 */
void f__22A6_0895_006D_F995()
{
	emu_stosb();
	emu_decw(&emu_dx.x);
	if (!emu_flags.zf) { f__22A6_0895_006D_F995(); return; }
	emu_addw(&emu_di, emu_get_memory16(emu_cs, 0x00,  0x70));
	if (--emu_cx.x != 0) { f__22A6_0890_0072_C008(); return; }
	emu_movb(&emu_cx.l, emu_get_memory8(emu_cs, 0x00,  0x86));
	emu_orw(&emu_cx.x, emu_cx.x);
	if (emu_flags.zf) { f__22A6_08F9_0009_C791(); return; }
	emu_movw(&emu_dx.x, emu_get_memory16(emu_cs, 0x00,  0x7E));
	emu_lodsb(emu_ds);
	emu_movb(&emu_ax.h, emu_ax.l);
	emu_andb(&emu_ax.l, 0xF);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_cs, emu_bx.x + emu_ax.l,  0x0));
	emu_orb(&emu_ax.l, emu_ax.l);
	if (emu_flags.zf) { f__22A6_08BC_0046_7D0C(); return; }
	emu_movb(&emu_get_memory8(emu_es, emu_di,  0x0), emu_ax.l);
	emu_incw(&emu_di);
	emu_decw(&emu_dx.x);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x08D1; emu_last_cs = 0x22A6; emu_last_ip = 0x08BE; emu_last_length = 0x006D; emu_last_crc = 0xF995; emu_call(); return; }
	emu_movb(&emu_ax.l, emu_ax.h);
	emu_andb(&emu_ax.l, 0xF0);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_cs, emu_bx.x + emu_ax.l,  0x0));
	emu_orb(&emu_ax.l, emu_ax.l);
	if (emu_flags.zf) { f__22A6_08CD_0035_356A(); return; }
	emu_movb(&emu_get_memory8(emu_es, emu_di,  0x0), emu_ax.l);
	emu_incw(&emu_di);
	emu_decw(&emu_dx.x);
	if (!emu_flags.zf) { f__22A6_08AE_0054_B5FA(); return; }
	emu_addw(&emu_di, emu_get_memory16(emu_cs, 0x00,  0x70));
	if (--emu_cx.x != 0) { /* Unresolved jump */ emu_ip = 0x08A9; emu_last_cs = 0x22A6; emu_last_ip = 0x08D6; emu_last_length = 0x006D; emu_last_crc = 0xF995; emu_call(); }
	emu_movb(&emu_cx.l, emu_get_memory8(emu_cs, 0x00,  0x84));
	emu_orw(&emu_cx.x, emu_cx.x);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x08F9; emu_last_cs = 0x22A6; emu_last_ip = 0x08DF; emu_last_length = 0x006D; emu_last_crc = 0xF995; emu_call(); return; }
	emu_movb(&emu_ax.l, 0x0);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_cs, emu_bx.x + emu_ax.l,  0x0));
	emu_orb(&emu_ax.l, emu_ax.l);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x08F9; emu_last_cs = 0x22A6; emu_last_ip = 0x08E7; emu_last_length = 0x006D; emu_last_crc = 0xF995; emu_call(); return; }
	emu_movw(&emu_dx.x, emu_get_memory16(emu_cs, 0x00,  0x7E));
	emu_stosb();
	emu_decw(&emu_dx.x);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x08EE; emu_last_cs = 0x22A6; emu_last_ip = 0x08F0; emu_last_length = 0x006D; emu_last_crc = 0xF995; emu_call(); return; }
	emu_addw(&emu_di, emu_get_memory16(emu_cs, 0x00,  0x70));
	if (--emu_cx.x != 0) { /* Unresolved jump */ emu_ip = 0x08E9; emu_last_cs = 0x22A6; emu_last_ip = 0x08F7; emu_last_length = 0x006D; emu_last_crc = 0xF995; emu_call(); }
	emu_pop(&emu_si);
	emu_pop(&emu_es);
	emu_pop(&emu_dx.x);
	emu_pop(&emu_ds);
	emu_pop(&emu_di);
	emu_pop(&emu_cx.x);
	emu_pop(&emu_bx.x);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__22A6_08A0_0062_CF5A()
 *
 * @name f__22A6_08A0_0062_CF5A
 * @implements 22A6:08A0:0062:CF5A ()
 *
 * Called From: 22A6:0876:002C:B662
 * Called From: 22A6:088E:002C:B662
 */
void f__22A6_08A0_0062_CF5A()
{
	emu_movb(&emu_cx.l, emu_get_memory8(emu_cs, 0x00,  0x86));
	emu_orw(&emu_cx.x, emu_cx.x);
	if (emu_flags.zf) { f__22A6_08F9_0009_C791(); return; }
	emu_movw(&emu_dx.x, emu_get_memory16(emu_cs, 0x00,  0x7E));
	emu_lodsb(emu_ds);
	emu_movb(&emu_ax.h, emu_ax.l);
	emu_andb(&emu_ax.l, 0xF);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_cs, emu_bx.x + emu_ax.l,  0x0));
	emu_orb(&emu_ax.l, emu_ax.l);
	if (emu_flags.zf) { f__22A6_08BC_0046_7D0C(); return; }
	emu_movb(&emu_get_memory8(emu_es, emu_di,  0x0), emu_ax.l);
	emu_incw(&emu_di);
	emu_decw(&emu_dx.x);
	if (emu_flags.zf) { f__22A6_08D1_0031_D9C1(); return; }
	emu_movb(&emu_ax.l, emu_ax.h);
	emu_andb(&emu_ax.l, 0xF0);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_cs, emu_bx.x + emu_ax.l,  0x0));
	emu_orb(&emu_ax.l, emu_ax.l);
	if (emu_flags.zf) { f__22A6_08CD_0035_356A(); return; }
	emu_movb(&emu_get_memory8(emu_es, emu_di,  0x0), emu_ax.l);
	emu_incw(&emu_di);
	emu_decw(&emu_dx.x);
	if (!emu_flags.zf) { f__22A6_08AE_0054_B5FA(); return; }
	emu_addw(&emu_di, emu_get_memory16(emu_cs, 0x00,  0x70));
	if (--emu_cx.x != 0) { /* Unresolved jump */ emu_ip = 0x08A9; emu_last_cs = 0x22A6; emu_last_ip = 0x08D6; emu_last_length = 0x0062; emu_last_crc = 0xCF5A; emu_call(); }
	emu_movb(&emu_cx.l, emu_get_memory8(emu_cs, 0x00,  0x84));
	emu_orw(&emu_cx.x, emu_cx.x);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x08F9; emu_last_cs = 0x22A6; emu_last_ip = 0x08DF; emu_last_length = 0x0062; emu_last_crc = 0xCF5A; emu_call(); return; }
	emu_movb(&emu_ax.l, 0x0);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_cs, emu_bx.x + emu_ax.l,  0x0));
	emu_orb(&emu_ax.l, emu_ax.l);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x08F9; emu_last_cs = 0x22A6; emu_last_ip = 0x08E7; emu_last_length = 0x0062; emu_last_crc = 0xCF5A; emu_call(); return; }
	emu_movw(&emu_dx.x, emu_get_memory16(emu_cs, 0x00,  0x7E));
	emu_stosb();
	emu_decw(&emu_dx.x);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x08EE; emu_last_cs = 0x22A6; emu_last_ip = 0x08F0; emu_last_length = 0x0062; emu_last_crc = 0xCF5A; emu_call(); return; }
	emu_addw(&emu_di, emu_get_memory16(emu_cs, 0x00,  0x70));
	if (--emu_cx.x != 0) { /* Unresolved jump */ emu_ip = 0x08E9; emu_last_cs = 0x22A6; emu_last_ip = 0x08F7; emu_last_length = 0x0062; emu_last_crc = 0xCF5A; emu_call(); }
	emu_pop(&emu_si);
	emu_pop(&emu_es);
	emu_pop(&emu_dx.x);
	emu_pop(&emu_ds);
	emu_pop(&emu_di);
	emu_pop(&emu_cx.x);
	emu_pop(&emu_bx.x);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__22A6_08A9_0059_C6C0()
 *
 * @name f__22A6_08A9_0059_C6C0
 * @implements 22A6:08A9:0059:C6C0 ()
 *
 * Called From: 22A6:08D6:0035:356A
 * Called From: 22A6:08D6:0031:D9C1
 * Called From: 22A6:08D6:0054:B5FA
 * Called From: 22A6:08D6:0046:7D0C
 */
void f__22A6_08A9_0059_C6C0()
{
	emu_movw(&emu_dx.x, emu_get_memory16(emu_cs, 0x00,  0x7E));
	emu_lodsb(emu_ds);
	emu_movb(&emu_ax.h, emu_ax.l);
	emu_andb(&emu_ax.l, 0xF);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_cs, emu_bx.x + emu_ax.l,  0x0));
	emu_orb(&emu_ax.l, emu_ax.l);
	if (emu_flags.zf) { f__22A6_08BC_0046_7D0C(); return; }
	emu_movb(&emu_get_memory8(emu_es, emu_di,  0x0), emu_ax.l);
	emu_incw(&emu_di);
	emu_decw(&emu_dx.x);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x08D1; emu_last_cs = 0x22A6; emu_last_ip = 0x08BE; emu_last_length = 0x0059; emu_last_crc = 0xC6C0; emu_call(); return; }
	emu_movb(&emu_ax.l, emu_ax.h);
	emu_andb(&emu_ax.l, 0xF0);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_cs, emu_bx.x + emu_ax.l,  0x0));
	emu_orb(&emu_ax.l, emu_ax.l);
	if (emu_flags.zf) { f__22A6_08CD_0035_356A(); return; }
	emu_movb(&emu_get_memory8(emu_es, emu_di,  0x0), emu_ax.l);
	emu_incw(&emu_di);
	emu_decw(&emu_dx.x);
	if (!emu_flags.zf) { f__22A6_08AE_0054_B5FA(); return; }
	emu_addw(&emu_di, emu_get_memory16(emu_cs, 0x00,  0x70));
	if (--emu_cx.x != 0) { /* Unresolved jump */ emu_ip = 0x08A9; emu_last_cs = 0x22A6; emu_last_ip = 0x08D6; emu_last_length = 0x0059; emu_last_crc = 0xC6C0; emu_call(); }
	emu_movb(&emu_cx.l, emu_get_memory8(emu_cs, 0x00,  0x84));
	emu_orw(&emu_cx.x, emu_cx.x);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x08F9; emu_last_cs = 0x22A6; emu_last_ip = 0x08DF; emu_last_length = 0x0059; emu_last_crc = 0xC6C0; emu_call(); return; }
	emu_movb(&emu_ax.l, 0x0);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_cs, emu_bx.x + emu_ax.l,  0x0));
	emu_orb(&emu_ax.l, emu_ax.l);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x08F9; emu_last_cs = 0x22A6; emu_last_ip = 0x08E7; emu_last_length = 0x0059; emu_last_crc = 0xC6C0; emu_call(); return; }
	emu_movw(&emu_dx.x, emu_get_memory16(emu_cs, 0x00,  0x7E));
	emu_stosb();
	emu_decw(&emu_dx.x);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x08EE; emu_last_cs = 0x22A6; emu_last_ip = 0x08F0; emu_last_length = 0x0059; emu_last_crc = 0xC6C0; emu_call(); return; }
	emu_addw(&emu_di, emu_get_memory16(emu_cs, 0x00,  0x70));
	if (--emu_cx.x != 0) { /* Unresolved jump */ emu_ip = 0x08E9; emu_last_cs = 0x22A6; emu_last_ip = 0x08F7; emu_last_length = 0x0059; emu_last_crc = 0xC6C0; emu_call(); }
	emu_pop(&emu_si);
	emu_pop(&emu_es);
	emu_pop(&emu_dx.x);
	emu_pop(&emu_ds);
	emu_pop(&emu_di);
	emu_pop(&emu_cx.x);
	emu_pop(&emu_bx.x);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__22A6_08AE_0054_B5FA()
 *
 * @name f__22A6_08AE_0054_B5FA
 * @implements 22A6:08AE:0054:B5FA ()
 *
 * Called From: 22A6:08CF:0062:CF5A
 * Called From: 22A6:08CF:0054:B5FA
 * Called From: 22A6:08CF:0046:7D0C
 * Called From: 22A6:08CF:0035:356A
 * Called From: 22A6:08CF:0059:C6C0
 * Called From: 22A6:08CF:006D:F995
 */
void f__22A6_08AE_0054_B5FA()
{
	emu_lodsb(emu_ds);
	emu_movb(&emu_ax.h, emu_ax.l);
	emu_andb(&emu_ax.l, 0xF);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_cs, emu_bx.x + emu_ax.l,  0x0));
	emu_orb(&emu_ax.l, emu_ax.l);
	if (emu_flags.zf) { f__22A6_08BC_0046_7D0C(); return; }
	emu_movb(&emu_get_memory8(emu_es, emu_di,  0x0), emu_ax.l);
	emu_incw(&emu_di);
	emu_decw(&emu_dx.x);
	if (emu_flags.zf) { f__22A6_08D1_0031_D9C1(); return; }
	emu_movb(&emu_ax.l, emu_ax.h);
	emu_andb(&emu_ax.l, 0xF0);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_cs, emu_bx.x + emu_ax.l,  0x0));
	emu_orb(&emu_ax.l, emu_ax.l);
	if (emu_flags.zf) { f__22A6_08CD_0035_356A(); return; }
	emu_movb(&emu_get_memory8(emu_es, emu_di,  0x0), emu_ax.l);
	emu_incw(&emu_di);
	emu_decw(&emu_dx.x);
	if (!emu_flags.zf) { f__22A6_08AE_0054_B5FA(); return; }
	emu_addw(&emu_di, emu_get_memory16(emu_cs, 0x00,  0x70));
	if (--emu_cx.x != 0) { f__22A6_08A9_0059_C6C0(); return; }
	emu_movb(&emu_cx.l, emu_get_memory8(emu_cs, 0x00,  0x84));
	emu_orw(&emu_cx.x, emu_cx.x);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x08F9; emu_last_cs = 0x22A6; emu_last_ip = 0x08DF; emu_last_length = 0x0054; emu_last_crc = 0xB5FA; emu_call(); return; }
	emu_movb(&emu_ax.l, 0x0);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_cs, emu_bx.x + emu_ax.l,  0x0));
	emu_orb(&emu_ax.l, emu_ax.l);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x08F9; emu_last_cs = 0x22A6; emu_last_ip = 0x08E7; emu_last_length = 0x0054; emu_last_crc = 0xB5FA; emu_call(); return; }
	emu_movw(&emu_dx.x, emu_get_memory16(emu_cs, 0x00,  0x7E));
	emu_stosb();
	emu_decw(&emu_dx.x);
	if (!emu_flags.zf) { f__22A6_08EE_0014_AA0F(); return; }
	emu_addw(&emu_di, emu_get_memory16(emu_cs, 0x00,  0x70));
	if (--emu_cx.x != 0) { /* Unresolved jump */ emu_ip = 0x08E9; emu_last_cs = 0x22A6; emu_last_ip = 0x08F7; emu_last_length = 0x0054; emu_last_crc = 0xB5FA; emu_call(); }
	emu_pop(&emu_si);
	emu_pop(&emu_es);
	emu_pop(&emu_dx.x);
	emu_pop(&emu_ds);
	emu_pop(&emu_di);
	emu_pop(&emu_cx.x);
	emu_pop(&emu_bx.x);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__22A6_08BC_0046_7D0C()
 *
 * @name f__22A6_08BC_0046_7D0C
 * @implements 22A6:08BC:0046:7D0C ()
 *
 * Called From: 22A6:08B7:0054:B5FA
 * Called From: 22A6:08B7:0059:C6C0
 * Called From: 22A6:08B7:0062:CF5A
 * Called From: 22A6:08B7:006D:F995
 */
void f__22A6_08BC_0046_7D0C()
{
	emu_incw(&emu_di);
	emu_decw(&emu_dx.x);
	if (emu_flags.zf) { f__22A6_08D1_0031_D9C1(); return; }
	emu_movb(&emu_ax.l, emu_ax.h);
	emu_andb(&emu_ax.l, 0xF0);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_cs, emu_bx.x + emu_ax.l,  0x0));
	emu_orb(&emu_ax.l, emu_ax.l);
	if (emu_flags.zf) { f__22A6_08CD_0035_356A(); return; }
	emu_movb(&emu_get_memory8(emu_es, emu_di,  0x0), emu_ax.l);
	emu_incw(&emu_di);
	emu_decw(&emu_dx.x);
	if (!emu_flags.zf) { f__22A6_08AE_0054_B5FA(); return; }
	emu_addw(&emu_di, emu_get_memory16(emu_cs, 0x00,  0x70));
	if (--emu_cx.x != 0) { f__22A6_08A9_0059_C6C0(); return; }
	emu_movb(&emu_cx.l, emu_get_memory8(emu_cs, 0x00,  0x84));
	emu_orw(&emu_cx.x, emu_cx.x);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x08F9; emu_last_cs = 0x22A6; emu_last_ip = 0x08DF; emu_last_length = 0x0046; emu_last_crc = 0x7D0C; emu_call(); return; }
	emu_movb(&emu_ax.l, 0x0);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_cs, emu_bx.x + emu_ax.l,  0x0));
	emu_orb(&emu_ax.l, emu_ax.l);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x08F9; emu_last_cs = 0x22A6; emu_last_ip = 0x08E7; emu_last_length = 0x0046; emu_last_crc = 0x7D0C; emu_call(); return; }
	emu_movw(&emu_dx.x, emu_get_memory16(emu_cs, 0x00,  0x7E));
	emu_stosb();
	emu_decw(&emu_dx.x);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x08EE; emu_last_cs = 0x22A6; emu_last_ip = 0x08F0; emu_last_length = 0x0046; emu_last_crc = 0x7D0C; emu_call(); return; }
	emu_addw(&emu_di, emu_get_memory16(emu_cs, 0x00,  0x70));
	if (--emu_cx.x != 0) { /* Unresolved jump */ emu_ip = 0x08E9; emu_last_cs = 0x22A6; emu_last_ip = 0x08F7; emu_last_length = 0x0046; emu_last_crc = 0x7D0C; emu_call(); }
	emu_pop(&emu_si);
	emu_pop(&emu_es);
	emu_pop(&emu_dx.x);
	emu_pop(&emu_ds);
	emu_pop(&emu_di);
	emu_pop(&emu_cx.x);
	emu_pop(&emu_bx.x);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__22A6_08CD_0035_356A()
 *
 * @name f__22A6_08CD_0035_356A
 * @implements 22A6:08CD:0035:356A ()
 *
 * Called From: 22A6:08C8:0046:7D0C
 * Called From: 22A6:08C8:0054:B5FA
 * Called From: 22A6:08C8:0059:C6C0
 * Called From: 22A6:08C8:0062:CF5A
 * Called From: 22A6:08C8:006D:F995
 */
void f__22A6_08CD_0035_356A()
{
	emu_incw(&emu_di);
	emu_decw(&emu_dx.x);
	if (!emu_flags.zf) { f__22A6_08AE_0054_B5FA(); return; }
	emu_addw(&emu_di, emu_get_memory16(emu_cs, 0x00,  0x70));
	if (--emu_cx.x != 0) { f__22A6_08A9_0059_C6C0(); return; }
	emu_movb(&emu_cx.l, emu_get_memory8(emu_cs, 0x00,  0x84));
	emu_orw(&emu_cx.x, emu_cx.x);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__22A6_08F9_0009_C791(); return; }
	emu_movb(&emu_ax.l, 0x0);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_cs, emu_bx.x + emu_ax.l,  0x0));
	emu_orb(&emu_ax.l, emu_ax.l);
	if (emu_flags.zf) { f__22A6_08F9_0009_C791(); return; }
	emu_movw(&emu_dx.x, emu_get_memory16(emu_cs, 0x00,  0x7E));
	emu_stosb();
	emu_decw(&emu_dx.x);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x08EE; emu_last_cs = 0x22A6; emu_last_ip = 0x08F0; emu_last_length = 0x0035; emu_last_crc = 0x356A; emu_call(); return; }
	emu_addw(&emu_di, emu_get_memory16(emu_cs, 0x00,  0x70));
	if (--emu_cx.x != 0) { /* Unresolved jump */ emu_ip = 0x08E9; emu_last_cs = 0x22A6; emu_last_ip = 0x08F7; emu_last_length = 0x0035; emu_last_crc = 0x356A; emu_call(); }
	emu_pop(&emu_si);
	emu_pop(&emu_es);
	emu_pop(&emu_dx.x);
	emu_pop(&emu_ds);
	emu_pop(&emu_di);
	emu_pop(&emu_cx.x);
	emu_pop(&emu_bx.x);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__22A6_08D1_0031_D9C1()
 *
 * @name f__22A6_08D1_0031_D9C1
 * @implements 22A6:08D1:0031:D9C1 ()
 *
 * Called From: 22A6:08BE:0046:7D0C
 * Called From: 22A6:08BE:0054:B5FA
 * Called From: 22A6:08BE:0062:CF5A
 */
void f__22A6_08D1_0031_D9C1()
{
	emu_addw(&emu_di, emu_get_memory16(emu_cs, 0x00,  0x70));
	if (--emu_cx.x != 0) { f__22A6_08A9_0059_C6C0(); return; }
	emu_movb(&emu_cx.l, emu_get_memory8(emu_cs, 0x00,  0x84));
	emu_orw(&emu_cx.x, emu_cx.x);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__22A6_08F9_0009_C791(); return; }
	emu_movb(&emu_ax.l, 0x0);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_cs, emu_bx.x + emu_ax.l,  0x0));
	emu_orb(&emu_ax.l, emu_ax.l);
	if (emu_flags.zf) { f__22A6_08F9_0009_C791(); return; }
	emu_movw(&emu_dx.x, emu_get_memory16(emu_cs, 0x00,  0x7E));
	emu_stosb();
	emu_decw(&emu_dx.x);
	if (!emu_flags.zf) { f__22A6_08EE_0014_AA0F(); return; }
	emu_addw(&emu_di, emu_get_memory16(emu_cs, 0x00,  0x70));
	if (--emu_cx.x != 0) { /* Unresolved jump */ emu_ip = 0x08E9; emu_last_cs = 0x22A6; emu_last_ip = 0x08F7; emu_last_length = 0x0031; emu_last_crc = 0xD9C1; emu_call(); }
	emu_pop(&emu_si);
	emu_pop(&emu_es);
	emu_pop(&emu_dx.x);
	emu_pop(&emu_ds);
	emu_pop(&emu_di);
	emu_pop(&emu_cx.x);
	emu_pop(&emu_bx.x);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__22A6_08E9_0019_D935()
 *
 * @name f__22A6_08E9_0019_D935
 * @implements 22A6:08E9:0019:D935 ()
 *
 * Called From: 22A6:08F7:0014:AA0F
 */
void f__22A6_08E9_0019_D935()
{
	emu_movw(&emu_dx.x, emu_get_memory16(emu_cs, 0x00,  0x7E));
	emu_stosb();
	emu_decw(&emu_dx.x);
	if (!emu_flags.zf) { f__22A6_08EE_0014_AA0F(); return; }
	emu_addw(&emu_di, emu_get_memory16(emu_cs, 0x00,  0x70));
	if (--emu_cx.x != 0) { /* Unresolved jump */ emu_ip = 0x08E9; emu_last_cs = 0x22A6; emu_last_ip = 0x08F7; emu_last_length = 0x0019; emu_last_crc = 0xD935; emu_call(); }
	emu_pop(&emu_si);
	emu_pop(&emu_es);
	emu_pop(&emu_dx.x);
	emu_pop(&emu_ds);
	emu_pop(&emu_di);
	emu_pop(&emu_cx.x);
	emu_pop(&emu_bx.x);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__22A6_08EE_0014_AA0F()
 *
 * @name f__22A6_08EE_0014_AA0F
 * @implements 22A6:08EE:0014:AA0F ()
 *
 * Called From: 22A6:08F0:0031:D9C1
 * Called From: 22A6:08F0:0014:AA0F
 * Called From: 22A6:08F0:0019:D935
 * Called From: 22A6:08F0:0054:B5FA
 */
void f__22A6_08EE_0014_AA0F()
{
	emu_stosb();
	emu_decw(&emu_dx.x);
	if (!emu_flags.zf) { f__22A6_08EE_0014_AA0F(); return; }
	emu_addw(&emu_di, emu_get_memory16(emu_cs, 0x00,  0x70));
	if (--emu_cx.x != 0) { f__22A6_08E9_0019_D935(); return; }
	emu_pop(&emu_si);
	emu_pop(&emu_es);
	emu_pop(&emu_dx.x);
	emu_pop(&emu_ds);
	emu_pop(&emu_di);
	emu_pop(&emu_cx.x);
	emu_pop(&emu_bx.x);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__22A6_08F9_0009_C791()
 *
 * @name f__22A6_08F9_0009_C791
 * @implements 22A6:08F9:0009:C791 ()
 *
 * Called From: 22A6:07E7:0037:50B9
 * Called From: 22A6:08A7:0062:CF5A
 * Called From: 22A6:08A7:006D:F995
 * Called From: 22A6:08DF:0035:356A
 * Called From: 22A6:08DF:0031:D9C1
 * Called From: 22A6:08E7:0035:356A
 * Called From: 22A6:08E7:0031:D9C1
 */
void f__22A6_08F9_0009_C791()
{
	emu_pop(&emu_si);
	emu_pop(&emu_es);
	emu_pop(&emu_dx.x);
	emu_pop(&emu_ds);
	emu_pop(&emu_di);
	emu_pop(&emu_cx.x);
	emu_pop(&emu_bx.x);
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
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_ax.x);
	emu_push(emu_es);
	emu_push(emu_si);
	emu_lfp(&emu_es, &emu_si, &emu_get_memory16(emu_cs, 0x00,  0x7));
	emu_lfp(&emu_es, &emu_si, &emu_get_memory16(emu_es, emu_si,  0x0));
	emu_movw(&emu_ax.x, emu_es);
	emu_orw(&emu_ax.x, emu_si);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0948; emu_last_cs = 0x22A6; emu_last_ip = 0x0914; emu_last_length = 0x004B; emu_last_crc = 0x01A8; emu_call(); return; }
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x82), emu_es);
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x80), emu_si);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_si,  0x4));
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x72), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_si,  0x6));
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x74), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_si,  0x8));
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x76), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_si,  0xA));
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x78), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_si,  0xC));
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x7A), emu_ax.x);
	emu_pop(&emu_si);
	emu_pop(&emu_es);
	emu_pop(&emu_ax.x);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__22A6_094D_000C_EC7D()
 *
 * @name f__22A6_094D_000C_EC7D
 * @implements 22A6:094D:000C:EC7D ()
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
 * Called From: 10E4:1AEA:0022:B505
 * Called From: 251B:0019:001E:7202
 * Called From: 251B:0033:001A:4EC8
 * Called From: 251B:0049:0016:F082
 * Called From: 251B:0063:001A:83C7
 * Called From: B518:03F0:0026:F217
 * Called From: B518:0414:0024:F6ED
 */
void f__22A6_094D_000C_EC7D()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_ax.x);
	emu_push(emu_bx.x);
	emu_push(emu_cx.x);
	emu_push(emu_di);
	emu_push(emu_dx.x);
	emu_push(emu_es);
	emu_push(0x0959); f__22A6_0DF8_0022_5FD5();
	f__22A6_0959_0014_82C1();
}

/**
 * Decompiled function f__22A6_0959_0014_82C1()
 *
 * @name f__22A6_0959_0014_82C1
 * @implements 22A6:0959:0014:82C1 ()
 *
 * Called From: 22A6:0959:000C:EC7D
 */
void f__22A6_0959_0014_82C1()
{
	emu_movw(&emu_es, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_cx.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_movw(&emu_di, emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_push(0x096D); f__22A6_0975_004B_1096();
	f__22A6_096D_0008_E7EF();
}

/**
 * Decompiled function f__22A6_096D_0008_E7EF()
 *
 * @name f__22A6_096D_0008_E7EF
 * @implements 22A6:096D:0008:E7EF ()
 *
 * Called From: 22A6:096D:0014:82C1
 */
void f__22A6_096D_0008_E7EF()
{
	emu_pop(&emu_es);
	emu_pop(&emu_dx.x);
	emu_pop(&emu_di);
	emu_pop(&emu_cx.x);
	emu_pop(&emu_bx.x);
	emu_pop(&emu_ax.x);
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
 *
 * Called From: 22A6:096A:0014:82C1
 */
void f__22A6_0975_004B_1096()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_ax.x);
	emu_push(emu_bp);
	emu_push(emu_bx.x);
	emu_push(emu_cx.x);
	emu_push(emu_di);
	emu_push(emu_dx.x);
	emu_push(emu_es);
	emu_push(emu_si);
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0xB53), emu_di);
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_cs, 0x00,  0x68));
	if ((emu_flags.sf != emu_flags.of)) { f__22A6_09BD_0003_5D2E(); return; }
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_cs, 0x00,  0x6C));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__22A6_09BD_0003_5D2E(); return; }
	emu_cmpw(&emu_bx.x, emu_get_memory16(emu_cs, 0x00,  0x6A));
	if ((emu_flags.sf != emu_flags.of)) { f__22A6_09BD_0003_5D2E(); return; }
	emu_cmpw(&emu_bx.x, emu_get_memory16(emu_cs, 0x00,  0x6E));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__22A6_09BD_0003_5D2E(); return; }
	emu_cmpw(&emu_cx.x, emu_get_memory16(emu_cs, 0x00,  0x68));
	if ((emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x09BD; emu_last_cs = 0x22A6; emu_last_ip = 0x09A6; emu_last_length = 0x004B; emu_last_crc = 0x1096; emu_call(); return; }
	emu_cmpw(&emu_cx.x, emu_get_memory16(emu_cs, 0x00,  0x6C));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__22A6_09BD_0003_5D2E(); return; }
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_cs, 0x00,  0x6A));
	if ((emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x09BD; emu_last_cs = 0x22A6; emu_last_ip = 0x09B4; emu_last_length = 0x004B; emu_last_crc = 0x1096; emu_call(); return; }
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_cs, 0x00,  0x6E));
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__22A6_09E7_0003_9D0E(); return; }
	emu_push(0x09C0); f__22A6_0A79_002B_D1F0();
	f__22A6_09C0_0008_4176();
}

/**
 * Decompiled function f__22A6_09BD_0003_5D2E()
 *
 * @name f__22A6_09BD_0003_5D2E
 * @implements 22A6:09BD:0003:5D2E ()
 *
 * Called From: 22A6:098A:004B:1096
 * Called From: 22A6:0991:004B:1096
 * Called From: 22A6:0998:004B:1096
 * Called From: 22A6:099F:004B:1096
 * Called From: 22A6:09AD:004B:1096
 * Called From: 22A6:09D9:000C:03FA
 * Called From: 22A6:09E5:0002:AB3A
 */
void f__22A6_09BD_0003_5D2E()
{
	emu_push(0x09C0); f__22A6_0A79_002B_D1F0();
	f__22A6_09C0_0008_4176();
}

/**
 * Decompiled function f__22A6_09C0_0008_4176()
 *
 * @name f__22A6_09C0_0008_4176
 * @implements 22A6:09C0:0008:4176 ()
 *
 * Called From: 22A6:09C0:0003:5D2E
 * Called From: 22A6:09C0:004B:1096
 */
void f__22A6_09C0_0008_4176()
{
	emu_xchgw(&emu_ax.x, &emu_cx.x);
	emu_xchgw(&emu_dx.x, &emu_bx.x);
	emu_movw(&emu_di, emu_si);
	emu_push(0x09C8); f__22A6_0A79_002B_D1F0();
	f__22A6_09C8_0011_C80B();
}

/**
 * Decompiled function f__22A6_09C8_0011_C80B()
 *
 * @name f__22A6_09C8_0011_C80B
 * @implements 22A6:09C8:0011:C80B ()
 *
 * Called From: 22A6:09C8:0008:4176
 */
void f__22A6_09C8_0011_C80B()
{
	emu_movw(&emu_bp, emu_di);
	emu_orw(&emu_bp, emu_si);
	if (emu_flags.zf) { f__22A6_09E7_0003_9D0E(); return; }
	emu_testw(&emu_di, emu_si);
	if (!emu_flags.zf) { f__22A6_09EA_0003_1DBA(); return; }
	emu_shlw(&emu_si, 0x1);

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_cs, emu_si,  0x9ED);
	emu_push(0x09D9);
	switch (emu_ip) {
		case 0x0A0D: f__22A6_0A0D_0002_61BE(); break;
		case 0x0A19: f__22A6_0A19_000E_92F3(); break;
		case 0x0A50: f__22A6_0A50_000E_9CF3(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x22A6; emu_last_ip = 0x09D4; emu_last_length = 0x0011; emu_last_crc = 0xC80B;
			emu_call();
			return;
	}
	f__22A6_09D9_000C_03FA();
}

/**
 * Decompiled function f__22A6_09D9_000C_03FA()
 *
 * @name f__22A6_09D9_000C_03FA
 * @implements 22A6:09D9:000C:03FA ()
 *
 * Called From: 22A6:09D9:0011:C80B
 */
void f__22A6_09D9_000C_03FA()
{
	if (emu_flags.cf) { f__22A6_09BD_0003_5D2E(); return; }
	emu_xchgw(&emu_ax.x, &emu_cx.x);
	emu_xchgw(&emu_dx.x, &emu_bx.x);
	emu_shlw(&emu_di, 0x1);

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_cs, emu_di,  0x9ED);
	emu_push(0x09E5);
	switch (emu_ip) {
		case 0x0A0F: f__22A6_0A0F_0008_6943(); break;
		case 0x0A46: f__22A6_0A46_0008_6953(); break;
		case 0x0A50: f__22A6_0A50_000E_9CF3(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x22A6; emu_last_ip = 0x09E0; emu_last_length = 0x000C; emu_last_crc = 0x03FA;
			emu_call();
			return;
	}
	f__22A6_09E5_0002_AB3A();
}

/**
 * Decompiled function f__22A6_09E5_0002_AB3A()
 *
 * @name f__22A6_09E5_0002_AB3A
 * @implements 22A6:09E5:0002:AB3A ()
 *
 * Called From: 22A6:09E5:000C:03FA
 */
void f__22A6_09E5_0002_AB3A()
{
	f__22A6_09BD_0003_5D2E(); return;
}

/**
 * Decompiled function f__22A6_09E7_0003_9D0E()
 *
 * @name f__22A6_09E7_0003_9D0E
 * @implements 22A6:09E7:0003:9D0E ()
 *
 * Called From: 22A6:09BB:004B:1096
 * Called From: 22A6:09CC:0011:C80B
 */
void f__22A6_09E7_0003_9D0E()
{
	f__22A6_0AA4_0006_0B65(); return;
}

/**
 * Decompiled function f__22A6_09EA_0003_1DBA()
 *
 * @name f__22A6_09EA_0003_1DBA
 * @implements 22A6:09EA:0003:1DBA ()
 *
 * Called From: 22A6:09D0:0011:C80B
 */
void f__22A6_09EA_0003_1DBA()
{
	f__22A6_0B55_000A_5176(); return;
}

/**
 * Decompiled function f__22A6_0A0D_0002_61BE()
 *
 * @name f__22A6_0A0D_0002_61BE
 * @implements 22A6:0A0D:0002:61BE ()
 *
 * Called From: 22A6:09D4:0011:C80B
 */
void f__22A6_0A0D_0002_61BE()
{
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
 *
 * Called From: 22A6:09E0:000C:03FA
 */
void f__22A6_0A0F_0008_6943()
{
	emu_movw(&emu_si, emu_get_memory16(emu_cs, 0x00,  0x6A));
	emu_push(0x0A17); f__22A6_0A2D_0019_EA06();
	f__22A6_0A17_0002_21BE();
}

/**
 * Decompiled function f__22A6_0A17_0002_21BE()
 *
 * @name f__22A6_0A17_0002_21BE
 * @implements 22A6:0A17:0002:21BE ()
 *
 * Called From: 22A6:0A17:0008:6943
 */
void f__22A6_0A17_0002_21BE()
{
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
 *
 * Called From: 22A6:09D4:0011:C80B
 */
void f__22A6_0A19_000E_92F3()
{
	emu_movw(&emu_si, emu_get_memory16(emu_cs, 0x00,  0x6E));
	emu_negw(&emu_si, emu_si);
	emu_negw(&emu_bx.x, emu_bx.x);
	emu_negw(&emu_dx.x, emu_dx.x);
	emu_push(0x0A27); f__22A6_0A2D_0019_EA06();
	f__22A6_0A27_0006_902A();
}

/**
 * Decompiled function f__22A6_0A27_0006_902A()
 *
 * @name f__22A6_0A27_0006_902A
 * @implements 22A6:0A27:0006:902A ()
 *
 * Called From: 22A6:0A27:000E:92F3
 */
void f__22A6_0A27_0006_902A()
{
	emu_negw(&emu_bx.x, emu_bx.x);
	emu_negw(&emu_dx.x, emu_dx.x);
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
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_bp, emu_dx.x);
	emu_subw(&emu_bp, emu_bx.x);
	emu_negw(&emu_ax.x, emu_ax.x);
	emu_addw(&emu_ax.x, emu_cx.x);
	emu_movw(&emu_dx.x, emu_si);
	emu_subw(&emu_dx.x, emu_bx.x);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_idivw(&emu_ax.x, emu_bp);
	emu_pop(&emu_dx.x);
	emu_addw(&emu_ax.x, emu_dx.x);
	emu_pop(&emu_dx.x);
	emu_movw(&emu_bx.x, emu_si);

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__22A6_0A46_0008_6953()
 *
 * @name f__22A6_0A46_0008_6953
 * @implements 22A6:0A46:0008:6953 ()
 *
 * Called From: 22A6:09E0:000C:03FA
 */
void f__22A6_0A46_0008_6953()
{
	emu_movw(&emu_si, emu_get_memory16(emu_cs, 0x00,  0x68));
	emu_push(0x0A4E); f__22A6_0A64_0015_2F31();
	f__22A6_0A4E_0002_21BE();
}

/**
 * Decompiled function f__22A6_0A4E_0002_21BE()
 *
 * @name f__22A6_0A4E_0002_21BE
 * @implements 22A6:0A4E:0002:21BE ()
 *
 * Called From: 22A6:0A4E:0008:6953
 */
void f__22A6_0A4E_0002_21BE()
{
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
 *
 * Called From: 22A6:09D4:0011:C80B
 * Called From: 22A6:09E0:000C:03FA
 */
void f__22A6_0A50_000E_9CF3()
{
	emu_movw(&emu_si, emu_get_memory16(emu_cs, 0x00,  0x6C));
	emu_negw(&emu_ax.x, emu_ax.x);
	emu_negw(&emu_cx.x, emu_cx.x);
	emu_negw(&emu_si, emu_si);
	emu_push(0x0A5E); f__22A6_0A64_0015_2F31();
	f__22A6_0A5E_0006_9052();
}

/**
 * Decompiled function f__22A6_0A5E_0006_9052()
 *
 * @name f__22A6_0A5E_0006_9052
 * @implements 22A6:0A5E:0006:9052 ()
 *
 * Called From: 22A6:0A5E:000E:9CF3
 */
void f__22A6_0A5E_0006_9052()
{
	emu_negw(&emu_ax.x, emu_ax.x);
	emu_negw(&emu_cx.x, emu_cx.x);
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
	emu_push(emu_dx.x);
	emu_movw(&emu_bp, emu_cx.x);
	emu_subw(&emu_bp, emu_ax.x);
	emu_subw(&emu_dx.x, emu_bx.x);
	emu_negw(&emu_ax.x, emu_ax.x);
	emu_addw(&emu_ax.x, emu_si);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_idivw(&emu_ax.x, emu_bp);
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_pop(&emu_dx.x);
	emu_movw(&emu_ax.x, emu_si);

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__22A6_0A79_002B_D1F0()
 *
 * @name f__22A6_0A79_002B_D1F0
 * @implements 22A6:0A79:002B:D1F0 ()
 *
 * Called From: 22A6:09BD:0003:5D2E
 * Called From: 22A6:09BD:004B:1096
 * Called From: 22A6:09C5:0008:4176
 */
void f__22A6_0A79_002B_D1F0()
{
	emu_xorw(&emu_si, emu_si);
	emu_cmpw(&emu_bx.x, emu_get_memory16(emu_cs, 0x00,  0x6A));
	if (!(emu_flags.sf != emu_flags.of)) { f__22A6_0A85_001F_681A(); return; }
	emu_orws(&emu_si, 0x1);
	emu_cmpw(&emu_bx.x, emu_get_memory16(emu_cs, 0x00,  0x6E));
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__22A6_0A8F_0015_D70B(); return; }
	emu_orws(&emu_si, 0x2);
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_cs, 0x00,  0x68));
	if (!(emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x0A99; emu_last_cs = 0x22A6; emu_last_ip = 0x0A94; emu_last_length = 0x002B; emu_last_crc = 0xD1F0; emu_call(); return; }
	emu_orws(&emu_si, 0x4);
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_cs, 0x00,  0x6C));
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x0AA3; emu_last_cs = 0x22A6; emu_last_ip = 0x0A9E; emu_last_length = 0x002B; emu_last_crc = 0xD1F0; emu_call(); return; }
	emu_orws(&emu_si, 0x8);

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__22A6_0A85_001F_681A()
 *
 * @name f__22A6_0A85_001F_681A
 * @implements 22A6:0A85:001F:681A ()
 *
 * Called From: 22A6:0A80:002B:D1F0
 */
void f__22A6_0A85_001F_681A()
{
	emu_cmpw(&emu_bx.x, emu_get_memory16(emu_cs, 0x00,  0x6E));
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__22A6_0A8F_0015_D70B(); return; }
	emu_orws(&emu_si, 0x2);
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_cs, 0x00,  0x68));
	if (!(emu_flags.sf != emu_flags.of)) { f__22A6_0A99_000B_1295(); return; }
	emu_orws(&emu_si, 0x4);
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_cs, 0x00,  0x6C));
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__22A6_0AA3_0001_6180(); return; }
	emu_orws(&emu_si, 0x8);

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__22A6_0A8F_0015_D70B()
 *
 * @name f__22A6_0A8F_0015_D70B
 * @implements 22A6:0A8F:0015:D70B ()
 *
 * Called From: 22A6:0A8A:001F:681A
 * Called From: 22A6:0A8A:002B:D1F0
 */
void f__22A6_0A8F_0015_D70B()
{
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_cs, 0x00,  0x68));
	if (!(emu_flags.sf != emu_flags.of)) { f__22A6_0A99_000B_1295(); return; }
	emu_orws(&emu_si, 0x4);
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_cs, 0x00,  0x6C));
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__22A6_0AA3_0001_6180(); return; }
	emu_orws(&emu_si, 0x8);

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__22A6_0A99_000B_1295()
 *
 * @name f__22A6_0A99_000B_1295
 * @implements 22A6:0A99:000B:1295 ()
 *
 * Called From: 22A6:0A94:0015:D70B
 * Called From: 22A6:0A94:001F:681A
 */
void f__22A6_0A99_000B_1295()
{
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_cs, 0x00,  0x6C));
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__22A6_0AA3_0001_6180(); return; }
	emu_orws(&emu_si, 0x8);

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__22A6_0AA3_0001_6180()
 *
 * @name f__22A6_0AA3_0001_6180
 * @implements 22A6:0AA3:0001:6180 ()
 *
 * Called From: 22A6:0A9E:0015:D70B
 * Called From: 22A6:0A9E:000B:1295
 * Called From: 22A6:0A9E:001F:681A
 */
void f__22A6_0AA3_0001_6180()
{

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__22A6_0AA4_0006_0B65()
 *
 * @name f__22A6_0AA4_0006_0B65
 * @implements 22A6:0AA4:0006:0B65 ()
 *
 * Called From: 22A6:09E7:0003:9D0E
 */
void f__22A6_0AA4_0006_0B65()
{
	emu_subw(&emu_dx.x, emu_bx.x);
	if (!emu_flags.zf) { f__22A6_0AAA_0017_3FD0(); return; }
	f__22A6_0B0D_0032_6BD9(); return;
}

/**
 * Decompiled function f__22A6_0AAA_0017_3FD0()
 *
 * @name f__22A6_0AAA_0017_3FD0
 * @implements 22A6:0AAA:0017:3FD0 ()
 *
 * Called From: 22A6:0AA6:0006:0B65
 */
void f__22A6_0AAA_0017_3FD0()
{
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__22A6_0AB1_0010_33B1(); return; }
	emu_negw(&emu_dx.x, emu_dx.x);
	emu_xchgw(&emu_ax.x, &emu_cx.x);
	emu_subw(&emu_bx.x, emu_dx.x);
	emu_shlw(&emu_bx.x, 0x1);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_cs, emu_bx.x,  0x17D));
	emu_movw(&emu_si, 0x1);
	emu_subw(&emu_cx.x, emu_ax.x);
	if (!emu_flags.zf) { f__22A6_0AC1_002C_86E3(); return; }
	f__22A6_0B3F_0014_336A(); return;
}

/**
 * Decompiled function f__22A6_0AB1_0010_33B1()
 *
 * @name f__22A6_0AB1_0010_33B1
 * @implements 22A6:0AB1:0010:33B1 ()
 *
 * Called From: 22A6:0AAA:0017:3FD0
 */
void f__22A6_0AB1_0010_33B1()
{
	emu_shlw(&emu_bx.x, 0x1);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_cs, emu_bx.x,  0x17D));
	emu_movw(&emu_si, 0x1);
	emu_subw(&emu_cx.x, emu_ax.x);
	if (!emu_flags.zf) { f__22A6_0AC1_002C_86E3(); return; }
	f__22A6_0B3F_0014_336A(); return;
}

/**
 * Decompiled function f__22A6_0AC1_002C_86E3()
 *
 * @name f__22A6_0AC1_002C_86E3
 * @implements 22A6:0AC1:002C:86E3 ()
 *
 * Called From: 22A6:0ABD:0010:33B1
 * Called From: 22A6:0ABD:0017:3FD0
 */
void f__22A6_0AC1_002C_86E3()
{
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__22A6_0AC7_0026_4A03(); return; }
	emu_negw(&emu_cx.x, emu_cx.x);
	emu_negw(&emu_si, emu_si);
	emu_cmpw(&emu_cx.x, emu_dx.x);
	if (!(emu_flags.sf != emu_flags.of)) { f__22A6_0AED_0020_54A3(); return; }
	emu_xchgw(&emu_dx.x, &emu_cx.x);
	emu_movw(&emu_di, emu_cx.x);
	emu_movw(&emu_bp, emu_cx.x);
	emu_shrw(&emu_bp, 0x1);
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_cs, 0x00,  0xB53));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), emu_ax.l);
	emu_decw(&emu_cx.x);
	if ((emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x0B55; emu_last_cs = 0x22A6; emu_last_ip = 0x0ADD; emu_last_length = 0x002C; emu_last_crc = 0x86E3; emu_call(); return; }
	emu_addw(&emu_bx.x, 0x140);
	emu_subw(&emu_bp, emu_dx.x);
	if (!(emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x0AD9; emu_last_cs = 0x22A6; emu_last_ip = 0x0AE5; emu_last_length = 0x002C; emu_last_crc = 0x86E3; emu_call(); return; }
	emu_addw(&emu_bp, emu_di);
	emu_addw(&emu_bx.x, emu_si);
	/* Unresolved jump */ emu_ip = 0x0AD9; emu_last_cs = 0x22A6; emu_last_ip = 0x0AEB; emu_last_length = 0x002C; emu_last_crc = 0x86E3; emu_call();
}

/**
 * Decompiled function f__22A6_0AC7_0026_4A03()
 *
 * @name f__22A6_0AC7_0026_4A03
 * @implements 22A6:0AC7:0026:4A03 ()
 *
 * Called From: 22A6:0AC1:002C:86E3
 */
void f__22A6_0AC7_0026_4A03()
{
	emu_cmpw(&emu_cx.x, emu_dx.x);
	if (!(emu_flags.sf != emu_flags.of)) { f__22A6_0AED_0020_54A3(); return; }
	emu_xchgw(&emu_dx.x, &emu_cx.x);
	emu_movw(&emu_di, emu_cx.x);
	emu_movw(&emu_bp, emu_cx.x);
	emu_shrw(&emu_bp, 0x1);
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_cs, 0x00,  0xB53));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), emu_ax.l);
	emu_decw(&emu_cx.x);
	if ((emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x0B55; emu_last_cs = 0x22A6; emu_last_ip = 0x0ADD; emu_last_length = 0x0026; emu_last_crc = 0x4A03; emu_call(); return; }
	emu_addw(&emu_bx.x, 0x140);
	emu_subw(&emu_bp, emu_dx.x);
	if (!(emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x0AD9; emu_last_cs = 0x22A6; emu_last_ip = 0x0AE5; emu_last_length = 0x0026; emu_last_crc = 0x4A03; emu_call(); return; }
	emu_addw(&emu_bp, emu_di);
	emu_addw(&emu_bx.x, emu_si);
	/* Unresolved jump */ emu_ip = 0x0AD9; emu_last_cs = 0x22A6; emu_last_ip = 0x0AEB; emu_last_length = 0x0026; emu_last_crc = 0x4A03; emu_call();
}

/**
 * Decompiled function f__22A6_0AED_0020_54A3()
 *
 * @name f__22A6_0AED_0020_54A3
 * @implements 22A6:0AED:0020:54A3 ()
 *
 * Called From: 22A6:0AC9:0026:4A03
 * Called From: 22A6:0AC9:002C:86E3
 */
void f__22A6_0AED_0020_54A3()
{
	emu_movw(&emu_di, emu_cx.x);
	emu_movw(&emu_bp, emu_cx.x);
	emu_shrw(&emu_bp, 0x1);
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_cs, 0x00,  0xB53));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), emu_ax.l);
	emu_decw(&emu_cx.x);
	if ((emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x0B55; emu_last_cs = 0x22A6; emu_last_ip = 0x0AFD; emu_last_length = 0x0020; emu_last_crc = 0x54A3; emu_call(); return; }
	emu_addw(&emu_bx.x, emu_si);
	emu_subw(&emu_bp, emu_dx.x);
	if (!(emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x0AF9; emu_last_cs = 0x22A6; emu_last_ip = 0x0B03; emu_last_length = 0x0020; emu_last_crc = 0x54A3; emu_call(); return; }
	emu_addw(&emu_bp, emu_di);
	emu_addw(&emu_bx.x, 0x140);
	f__22A6_0AF9_0014_22B8(); return;
}

/**
 * Decompiled function f__22A6_0AF9_0014_22B8()
 *
 * @name f__22A6_0AF9_0014_22B8
 * @implements 22A6:0AF9:0014:22B8 ()
 *
 * Called From: 22A6:0B03:0014:22B8
 * Called From: 22A6:0B0B:0020:54A3
 * Called From: 22A6:0B0B:0014:22B8
 */
void f__22A6_0AF9_0014_22B8()
{
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), emu_ax.l);
	emu_decw(&emu_cx.x);
	if ((emu_flags.sf != emu_flags.of)) { f__22A6_0B55_000A_5176(); return; }
	emu_addw(&emu_bx.x, emu_si);
	emu_subw(&emu_bp, emu_dx.x);
	if (!(emu_flags.sf != emu_flags.of)) { f__22A6_0AF9_0014_22B8(); return; }
	emu_addw(&emu_bp, emu_di);
	emu_addw(&emu_bx.x, 0x140);
	f__22A6_0AF9_0014_22B8(); return;
}

/**
 * Decompiled function f__22A6_0B0D_0032_6BD9()
 *
 * @name f__22A6_0B0D_0032_6BD9
 * @implements 22A6:0B0D:0032:6BD9 ()
 *
 * Called From: 22A6:0AA8:0006:0B65
 */
void f__22A6_0B0D_0032_6BD9()
{
	emu_cmpw(&emu_ax.x, emu_cx.x);
	if ((emu_flags.sf != emu_flags.of)) { f__22A6_0B12_002D_CB6F(); return; }
	emu_xchgw(&emu_ax.x, &emu_cx.x);
	emu_subw(&emu_cx.x, emu_ax.x);
	emu_incw(&emu_cx.x);
	emu_shlw(&emu_bx.x, 0x1);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_cs, emu_bx.x,  0x17D));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_di, emu_bx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_cs, 0x00,  0xB53));
	emu_movb(&emu_ax.h, emu_ax.l);
	emu_testw(&emu_di, 0x1);
	if (emu_flags.zf) { f__22A6_0B2E_0011_81AA(); return; }
	emu_stosb();
	emu_decw(&emu_cx.x);
	emu_movw(&emu_dx.x, emu_cx.x);
	emu_shrw(&emu_cx.x, 0x1);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0B36; emu_last_cs = 0x22A6; emu_last_ip = 0x0B32; emu_last_length = 0x0032; emu_last_crc = 0x6BD9; emu_call(); return; }
	emu_rep_stosw();
	emu_testw(&emu_dx.x, 0x1);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0B3D; emu_last_cs = 0x22A6; emu_last_ip = 0x0B3A; emu_last_length = 0x0032; emu_last_crc = 0x6BD9; emu_call(); return; }
	emu_stosb();
	f__22A6_0B55_000A_5176(); return;
}

/**
 * Decompiled function f__22A6_0B12_002D_CB6F()
 *
 * @name f__22A6_0B12_002D_CB6F
 * @implements 22A6:0B12:002D:CB6F ()
 *
 * Called From: 22A6:0B0F:0032:6BD9
 */
void f__22A6_0B12_002D_CB6F()
{
	emu_subw(&emu_cx.x, emu_ax.x);
	emu_incw(&emu_cx.x);
	emu_shlw(&emu_bx.x, 0x1);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_cs, emu_bx.x,  0x17D));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_di, emu_bx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_cs, 0x00,  0xB53));
	emu_movb(&emu_ax.h, emu_ax.l);
	emu_testw(&emu_di, 0x1);
	if (emu_flags.zf) { f__22A6_0B2E_0011_81AA(); return; }
	emu_stosb();
	emu_decw(&emu_cx.x);
	emu_movw(&emu_dx.x, emu_cx.x);
	emu_shrw(&emu_cx.x, 0x1);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0B36; emu_last_cs = 0x22A6; emu_last_ip = 0x0B32; emu_last_length = 0x002D; emu_last_crc = 0xCB6F; emu_call(); return; }
	emu_rep_stosw();
	emu_testw(&emu_dx.x, 0x1);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0B3D; emu_last_cs = 0x22A6; emu_last_ip = 0x0B3A; emu_last_length = 0x002D; emu_last_crc = 0xCB6F; emu_call(); return; }
	emu_stosb();
	f__22A6_0B55_000A_5176(); return;
}

/**
 * Decompiled function f__22A6_0B2E_0011_81AA()
 *
 * @name f__22A6_0B2E_0011_81AA
 * @implements 22A6:0B2E:0011:81AA ()
 *
 * Called From: 22A6:0B2A:002D:CB6F
 * Called From: 22A6:0B2A:0032:6BD9
 */
void f__22A6_0B2E_0011_81AA()
{
	emu_movw(&emu_dx.x, emu_cx.x);
	emu_shrw(&emu_cx.x, 0x1);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0B36; emu_last_cs = 0x22A6; emu_last_ip = 0x0B32; emu_last_length = 0x0011; emu_last_crc = 0x81AA; emu_call(); return; }
	emu_rep_stosw();
	emu_testw(&emu_dx.x, 0x1);
	if (emu_flags.zf) { f__22A6_0B3D_0002_CB3A(); return; }
	emu_stosb();
	/* Unresolved jump */ emu_ip = 0x0B55; emu_last_cs = 0x22A6; emu_last_ip = 0x0B3D; emu_last_length = 0x0011; emu_last_crc = 0x81AA; emu_call();
}

/**
 * Decompiled function f__22A6_0B3D_0002_CB3A()
 *
 * @name f__22A6_0B3D_0002_CB3A
 * @implements 22A6:0B3D:0002:CB3A ()
 *
 * Called From: 22A6:0B3A:0011:81AA
 */
void f__22A6_0B3D_0002_CB3A()
{
	f__22A6_0B55_000A_5176(); return;
}

/**
 * Decompiled function f__22A6_0B3F_0014_336A()
 *
 * @name f__22A6_0B3F_0014_336A
 * @implements 22A6:0B3F:0014:336A ()
 *
 * Called From: 22A6:0ABF:0010:33B1
 * Called From: 22A6:0ABF:0017:3FD0
 */
void f__22A6_0B3F_0014_336A()
{
	emu_movw(&emu_cx.x, emu_dx.x);
	emu_incw(&emu_cx.x);
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_cs, 0x00,  0xB53));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), emu_ax.l);
	emu_addw(&emu_bx.x, 0x140);
	if (--emu_cx.x != 0) { f__22A6_0B48_000B_1D5C(); return; }
	/* Unresolved jump */ emu_ip = 0x0B55; emu_last_cs = 0x22A6; emu_last_ip = 0x0B51; emu_last_length = 0x0014; emu_last_crc = 0x336A; emu_call();
}

/**
 * Decompiled function f__22A6_0B48_000B_1D5C()
 *
 * @name f__22A6_0B48_000B_1D5C
 * @implements 22A6:0B48:000B:1D5C ()
 *
 * Called From: 22A6:0B4F:0014:336A
 * Called From: 22A6:0B4F:000B:1D5C
 */
void f__22A6_0B48_000B_1D5C()
{
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), emu_ax.l);
	emu_addw(&emu_bx.x, 0x140);
	if (--emu_cx.x != 0) { f__22A6_0B48_000B_1D5C(); return; }
	f__22A6_0B55_000A_5176(); return;
}

/**
 * Decompiled function f__22A6_0B55_000A_5176()
 *
 * @name f__22A6_0B55_000A_5176
 * @implements 22A6:0B55:000A:5176 ()
 *
 * Called From: 22A6:09EA:0003:1DBA
 * Called From: 22A6:0AFD:0014:22B8
 * Called From: 22A6:0B3D:0002:CB3A
 * Called From: 22A6:0B3D:002D:CB6F
 * Called From: 22A6:0B3D:0032:6BD9
 * Called From: 22A6:0B51:000B:1D5C
 */
void f__22A6_0B55_000A_5176()
{
	emu_pop(&emu_si);
	emu_pop(&emu_es);
	emu_pop(&emu_dx.x);
	emu_pop(&emu_di);
	emu_pop(&emu_cx.x);
	emu_pop(&emu_bx.x);
	emu_pop(&emu_bp);
	emu_pop(&emu_ax.x);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__22A6_0B60_006A_2F61()
 *
 * @name f__22A6_0B60_006A_2F61
 * @implements 22A6:0B60:006A:2F61 ()
 *
 * Called From: 07D4:0575:0031:9C05
 * Called From: 07D4:059A:0025:B028
 */
void f__22A6_0B60_006A_2F61()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_ax.x);
	emu_push(emu_bx.x);
	emu_push(emu_cx.x);
	emu_push(emu_di);
	emu_push(emu_ds);
	emu_push(emu_dx.x);
	emu_push(emu_es);
	emu_push(emu_si);
	emu_cld();
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_andw(&emu_ax.x, 0xF);
	emu_shlw(&emu_ax.x, 0x1);
	emu_shlw(&emu_ax.x, 0x1);
	emu_shlw(&emu_ax.x, 0x1);
	emu_shlw(&emu_ax.x, 0x1);
	emu_movb(&emu_get_memory8(emu_cs, 0x00,  0xC68), emu_ax.l);
	emu_lfp(&emu_ds, &emu_si, &emu_get_memory16(emu_cs, 0x00,  0x31F));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_addw(&emu_si, emu_ax.x);
	emu_lodsb(emu_ds);
	emu_xorb(&emu_ax.h, emu_ax.h);
	emu_movw(&emu_cx.x, 0x4);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_lfp(&emu_ds, &emu_si, &emu_get_memory16(emu_cs, 0x00,  0x31B));
	emu_addw(&emu_si, emu_ax.x);
	emu_movw(&emu_ax.x, emu_cs);
	emu_movw(&emu_es, emu_ax.x);
	emu_movw(&emu_di, 0x329);
	emu_movw(&emu_cx.x, 0x10);
	emu_lodsb(emu_ds);
	emu_cmpb(&emu_ax.l, 0x90);
	if ((emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x0BAF; emu_last_cs = 0x22A6; emu_last_ip = 0x0BA4; emu_last_length = 0x006A; emu_last_crc = 0x2F61; emu_call(); return; }
	emu_cmpb(&emu_ax.l, 0xA0);
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__22A6_0BAF_001B_63E6(); return; }
	emu_addb(&emu_ax.l, emu_get_memory8(emu_cs, 0x00,  0xC68));
	emu_stosb();
	if (--emu_cx.x != 0) { /* Unresolved jump */ emu_ip = 0x0BA1; emu_last_cs = 0x22A6; emu_last_ip = 0x0BB0; emu_last_length = 0x006A; emu_last_crc = 0x2F61; emu_call(); }
	emu_movw(&emu_di, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_shlw(&emu_di, 0x1);
	emu_movw(&emu_di, emu_get_memory16(emu_cs, emu_di,  0x17D));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_shlw(&emu_ax.x, 0x1);
	emu_shlw(&emu_ax.x, 0x1);
	emu_shlw(&emu_ax.x, 0x1);
	emu_addw(&emu_di, emu_ax.x);
	/* Unresolved call */ emu_push(0x0BCA); emu_ip = 0x0DF8; emu_last_cs = 0x22A6; emu_last_ip = 0x0BC7; emu_last_length = 0x006A; emu_last_crc = 0x2F61; emu_call();
	f__22A6_0BCA_000C_D909();
}

/**
 * Decompiled function f__22A6_0BA1_0029_FCB0()
 *
 * @name f__22A6_0BA1_0029_FCB0
 * @implements 22A6:0BA1:0029:FCB0 ()
 *
 * Called From: 22A6:0BB0:001B:63E6
 * Called From: 22A6:0BB0:0029:FCB0
 */
void f__22A6_0BA1_0029_FCB0()
{
	emu_lodsb(emu_ds);
	emu_cmpb(&emu_ax.l, 0x90);
	if ((emu_flags.sf != emu_flags.of)) { f__22A6_0BAF_001B_63E6(); return; }
	emu_cmpb(&emu_ax.l, 0xA0);
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__22A6_0BAF_001B_63E6(); return; }
	emu_addb(&emu_ax.l, emu_get_memory8(emu_cs, 0x00,  0xC68));
	emu_stosb();
	if (--emu_cx.x != 0) { f__22A6_0BA1_0029_FCB0(); return; }
	emu_movw(&emu_di, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_shlw(&emu_di, 0x1);
	emu_movw(&emu_di, emu_get_memory16(emu_cs, emu_di,  0x17D));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_shlw(&emu_ax.x, 0x1);
	emu_shlw(&emu_ax.x, 0x1);
	emu_shlw(&emu_ax.x, 0x1);
	emu_addw(&emu_di, emu_ax.x);
	emu_push(0x0BCA); f__22A6_0DF8_0022_5FD5();
	f__22A6_0BCA_000C_D909();
}

/**
 * Decompiled function f__22A6_0BAF_001B_63E6()
 *
 * @name f__22A6_0BAF_001B_63E6
 * @implements 22A6:0BAF:001B:63E6 ()
 *
 * Called From: 22A6:0BA4:0029:FCB0
 * Called From: 22A6:0BA8:006A:2F61
 * Called From: 22A6:0BA8:0029:FCB0
 */
void f__22A6_0BAF_001B_63E6()
{
	emu_stosb();
	if (--emu_cx.x != 0) { f__22A6_0BA1_0029_FCB0(); return; }
	emu_movw(&emu_di, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_shlw(&emu_di, 0x1);
	emu_movw(&emu_di, emu_get_memory16(emu_cs, emu_di,  0x17D));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_shlw(&emu_ax.x, 0x1);
	emu_shlw(&emu_ax.x, 0x1);
	emu_shlw(&emu_ax.x, 0x1);
	emu_addw(&emu_di, emu_ax.x);
	emu_push(0x0BCA); f__22A6_0DF8_0022_5FD5();
	f__22A6_0BCA_000C_D909();
}

/**
 * Decompiled function f__22A6_0BCA_000C_D909()
 *
 * @name f__22A6_0BCA_000C_D909
 * @implements 22A6:0BCA:000C:D909 ()
 *
 * Called From: 22A6:0BCA:001B:63E6
 * Called From: 22A6:0BCA:0029:FCB0
 */
void f__22A6_0BCA_000C_D909()
{
	emu_movw(&emu_es, emu_ax.x);
	emu_movw(&emu_si, emu_get_memory16(emu_cs, 0x00,  0x33F));

	/* Jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_cs, emu_si,  0xBD6);
	switch (emu_ip) {
		case 0x0BDC: f__22A6_0BDC_0006_5333(); return;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x22A6; emu_last_ip = 0x0BD1; emu_last_length = 0x000C; emu_last_crc = 0xD909;
			emu_call();
			return;
	}
}

/**
 * Decompiled function f__22A6_0BDC_0006_5333()
 *
 * @name f__22A6_0BDC_0006_5333
 * @implements 22A6:0BDC:0006:5333 ()
 *
 * Called From: 22A6:0BD1:000C:D909
 */
void f__22A6_0BDC_0006_5333()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(0x0BE2); f__22A6_0BE6_0054_A98E();
	f__22A6_0BE2_0002_FD3A();
}

/**
 * Decompiled function f__22A6_0BE2_0002_FD3A()
 *
 * @name f__22A6_0BE2_0002_FD3A
 * @implements 22A6:0BE2:0002:FD3A ()
 *
 * Called From: 22A6:0BE2:0006:5333
 */
void f__22A6_0BE2_0002_FD3A()
{
	f__22A6_0C5E_000A_2DE6(); return;
}

/**
 * Decompiled function f__22A6_0BE6_0054_A98E()
 *
 * @name f__22A6_0BE6_0054_A98E
 * @implements 22A6:0BE6:0054:A98E ()
 *
 * Called From: 22A6:0BDF:0006:5333
 */
void f__22A6_0BE6_0054_A98E()
{
	emu_movw(&emu_dx.x, emu_get_memory16(emu_cs, 0x00,  0x341));
	emu_mulw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_si, emu_get_memory16(emu_cs, 0x00,  0x323));
	emu_addw(&emu_ax.x, emu_get_memory16(emu_cs, 0x00,  0x325));
	emu_movw(&emu_ds, emu_ax.x);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_cs, 0x00,  0x33B));
	emu_movb(&emu_dx.h, emu_dx.l);
	emu_movw(&emu_cx.x, emu_get_memory16(emu_cs, 0x00,  0x33D));
	emu_movb(&emu_cx.h, emu_cx.l);
	emu_movw(&emu_bx.x, 0x329);
	emu_movw(&emu_bp, emu_get_memory16(emu_cs, 0x00,  0x339));
	emu_movb(&emu_cx.l, 0x4);
	emu_push(emu_cx.x);
	emu_movb(&emu_dx.l, emu_cx.h);
	emu_xorb(&emu_cx.h, emu_cx.h);
	emu_lodsb(emu_ds);
	emu_movb(&emu_ax.h, emu_ax.l);
	emu_shrb(&emu_ax.h, emu_cx.l);
	emu_andb(&emu_ax.l, 0xF);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_cs, emu_bx.x + emu_ax.l,  0x0));
	emu_addb(&emu_ax.l, 0xFF);
	emu_rclb(&emu_cx.h, 0x1);
	emu_incb(&emu_ax.l);
	emu_xchgb(&emu_ax.l, &emu_ax.h);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_cs, emu_bx.x + emu_ax.l,  0x0));
	emu_subb(&emu_ax.l, 0x1);
	emu_rclb(&emu_cx.h, 0x1);
	emu_incb(&emu_ax.l);
	emu_shrb(&emu_cx.h, 0x1);
	if ((emu_flags.cf || emu_flags.zf)) { f__22A6_0C3A_000A_CB24(); return; }
	emu_stosw();
	emu_decb(&emu_dx.l);
	if (!emu_flags.zf) { f__22A6_0C14_0026_E7AD(); return; }
	/* Unresolved jump */ emu_ip = 0x0C56; emu_last_cs = 0x22A6; emu_last_ip = 0x0C38; emu_last_length = 0x0054; emu_last_crc = 0xA98E; emu_call();
}

/**
 * Decompiled function f__22A6_0C11_0029_EC2F()
 *
 * @name f__22A6_0C11_0029_EC2F
 * @implements 22A6:0C11:0029:EC2F ()
 *
 * Called From: 22A6:0C5B:0008:25F4
 * Called From: 22A6:0C5B:000E:4E0C
 */
void f__22A6_0C11_0029_EC2F()
{
	emu_push(emu_cx.x);
	emu_movb(&emu_dx.l, emu_cx.h);
	emu_xorb(&emu_cx.h, emu_cx.h);
	emu_lodsb(emu_ds);
	emu_movb(&emu_ax.h, emu_ax.l);
	emu_shrb(&emu_ax.h, emu_cx.l);
	emu_andb(&emu_ax.l, 0xF);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_cs, emu_bx.x + emu_ax.l,  0x0));
	emu_addb(&emu_ax.l, 0xFF);
	emu_rclb(&emu_cx.h, 0x1);
	emu_incb(&emu_ax.l);
	emu_xchgb(&emu_ax.l, &emu_ax.h);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_cs, emu_bx.x + emu_ax.l,  0x0));
	emu_subb(&emu_ax.l, 0x1);
	emu_rclb(&emu_cx.h, 0x1);
	emu_incb(&emu_ax.l);
	emu_shrb(&emu_cx.h, 0x1);
	if ((emu_flags.cf || emu_flags.zf)) { f__22A6_0C3A_000A_CB24(); return; }
	emu_stosw();
	emu_decb(&emu_dx.l);
	if (!emu_flags.zf) { f__22A6_0C14_0026_E7AD(); return; }
	f__22A6_0C56_0008_25F4(); return;
}

/**
 * Decompiled function f__22A6_0C14_0026_E7AD()
 *
 * @name f__22A6_0C14_0026_E7AD
 * @implements 22A6:0C14:0026:E7AD ()
 *
 * Called From: 22A6:0C36:0054:A98E
 * Called From: 22A6:0C36:0026:E7AD
 * Called From: 22A6:0C36:0029:EC2F
 * Called From: 22A6:0C40:000A:CB24
 * Called From: 22A6:0C4C:000C:C238
 * Called From: 22A6:0C54:000E:4E0C
 */
void f__22A6_0C14_0026_E7AD()
{
	emu_xorb(&emu_cx.h, emu_cx.h);
	emu_lodsb(emu_ds);
	emu_movb(&emu_ax.h, emu_ax.l);
	emu_shrb(&emu_ax.h, emu_cx.l);
	emu_andb(&emu_ax.l, 0xF);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_cs, emu_bx.x + emu_ax.l,  0x0));
	emu_addb(&emu_ax.l, 0xFF);
	emu_rclb(&emu_cx.h, 0x1);
	emu_incb(&emu_ax.l);
	emu_xchgb(&emu_ax.l, &emu_ax.h);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_cs, emu_bx.x + emu_ax.l,  0x0));
	emu_subb(&emu_ax.l, 0x1);
	emu_rclb(&emu_cx.h, 0x1);
	emu_incb(&emu_ax.l);
	emu_shrb(&emu_cx.h, 0x1);
	if ((emu_flags.cf || emu_flags.zf)) { f__22A6_0C3A_000A_CB24(); return; }
	emu_stosw();
	emu_decb(&emu_dx.l);
	if (!emu_flags.zf) { f__22A6_0C14_0026_E7AD(); return; }
	f__22A6_0C56_0008_25F4(); return;
}

/**
 * Decompiled function f__22A6_0C3A_000A_CB24()
 *
 * @name f__22A6_0C3A_000A_CB24
 * @implements 22A6:0C3A:000A:CB24 ()
 *
 * Called From: 22A6:0C31:0026:E7AD
 * Called From: 22A6:0C31:0029:EC2F
 * Called From: 22A6:0C31:0054:A98E
 */
void f__22A6_0C3A_000A_CB24()
{
	if (emu_flags.cf) { f__22A6_0C44_000C_C238(); return; }
	emu_stosb();
	emu_incw(&emu_di);
	emu_decb(&emu_dx.l);
	if (!emu_flags.zf) { f__22A6_0C14_0026_E7AD(); return; }
	f__22A6_0C56_0008_25F4(); return;
}

/**
 * Decompiled function f__22A6_0C44_000C_C238()
 *
 * @name f__22A6_0C44_000C_C238
 * @implements 22A6:0C44:000C:C238 ()
 *
 * Called From: 22A6:0C3A:000A:CB24
 */
void f__22A6_0C44_000C_C238()
{
	if (emu_flags.zf) { f__22A6_0C50_000E_4E0C(); return; }
	emu_incw(&emu_di);
	emu_xchgb(&emu_ax.l, &emu_ax.h);
	emu_stosb();
	emu_decb(&emu_dx.l);
	if (!emu_flags.zf) { f__22A6_0C14_0026_E7AD(); return; }
	f__22A6_0C56_0008_25F4(); return;
}

/**
 * Decompiled function f__22A6_0C50_000E_4E0C()
 *
 * @name f__22A6_0C50_000E_4E0C
 * @implements 22A6:0C50:000E:4E0C ()
 *
 * Called From: 22A6:0C44:000C:C238
 */
void f__22A6_0C50_000E_4E0C()
{
	emu_incw(&emu_di);
	emu_incw(&emu_di);
	emu_decb(&emu_dx.l);
	if (!emu_flags.zf) { f__22A6_0C14_0026_E7AD(); return; }
	emu_pop(&emu_cx.x);
	emu_addw(&emu_di, emu_bp);
	emu_decb(&emu_dx.h);
	if (!emu_flags.zf) { f__22A6_0C11_0029_EC2F(); return; }

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__22A6_0C56_0008_25F4()
 *
 * @name f__22A6_0C56_0008_25F4
 * @implements 22A6:0C56:0008:25F4 ()
 *
 * Called From: 22A6:0C38:0026:E7AD
 * Called From: 22A6:0C38:0029:EC2F
 * Called From: 22A6:0C42:000A:CB24
 * Called From: 22A6:0C4E:000C:C238
 */
void f__22A6_0C56_0008_25F4()
{
	emu_pop(&emu_cx.x);
	emu_addw(&emu_di, emu_bp);
	emu_decb(&emu_dx.h);
	if (!emu_flags.zf) { f__22A6_0C11_0029_EC2F(); return; }

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__22A6_0C5E_000A_2DE6()
 *
 * @name f__22A6_0C5E_000A_2DE6
 * @implements 22A6:0C5E:000A:2DE6 ()
 *
 * Called From: 22A6:0BE2:0002:FD3A
 */
void f__22A6_0C5E_000A_2DE6()
{
	emu_pop(&emu_si);
	emu_pop(&emu_es);
	emu_pop(&emu_dx.x);
	emu_pop(&emu_ds);
	emu_pop(&emu_di);
	emu_pop(&emu_cx.x);
	emu_pop(&emu_bx.x);
	emu_pop(&emu_ax.x);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__22A6_0D31_0015_A4C3()
 *
 * @name f__22A6_0D31_0015_A4C3
 * @implements 22A6:0D31:0015:A4C3 ()
 *
 * Called From: 07AE:014A:004C:B43B
 * Called From: 07D4:053F:0089:9A1B
 * Called From: 07D4:053F:0067:E7F1
 * Called From: 10E4:004B:0048:5BD4
 * Called From: 10E4:0AD6:0020:A11E
 * Called From: 10E4:0F0C:0049:0BFB
 * Called From: B495:0BE6:0021:D845
 * Called From: B495:1566:0021:6CFA
 * Called From: B4B8:215E:0034:7DBA
 * Called From: B4ED:0916:0022:0A36
 * Called From: B4ED:0916:000E:CEAE
 * Called From: B4F2:145C:0020:1786
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
 */
void f__22A6_0D31_0015_A4C3()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_ax.x);
	emu_push(emu_bx.x);
	emu_push(emu_cx.x);
	emu_push(emu_di);
	emu_push(emu_dx.x);
	emu_push(emu_es);
	emu_push(emu_si);
	emu_cld();
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_movb(&emu_get_memory8(emu_cs, 0x00,  0x30), emu_ax.l);
	emu_push(0x0D46); f__22A6_0DF8_0022_5FD5();
	f__22A6_0D46_008D_DF87();
}

/**
 * Decompiled function f__22A6_0D46_008D_DF87()
 *
 * @name f__22A6_0D46_008D_DF87
 * @implements 22A6:0D46:008D:DF87 ()
 *
 * Called From: 22A6:0D46:0015:A4C3
 */
void f__22A6_0D46_008D_DF87()
{
	emu_movw(&emu_es, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpw(&emu_ax.x, 0x140);
	if (!(emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x0DCA; emu_last_cs = 0x22A6; emu_last_ip = 0x0D4E; emu_last_length = 0x008D; emu_last_crc = 0xDF87; emu_call(); return; }
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.sf) { f__22A6_0D56_007D_10AC(); return; }
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_cmpw(&emu_bx.x, 0xC8);
	if (!(emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x0DCA; emu_last_cs = 0x22A6; emu_last_ip = 0x0D5D; emu_last_length = 0x008D; emu_last_crc = 0xDF87; emu_call(); return; }
	emu_orw(&emu_bx.x, emu_bx.x);
	if (!emu_flags.sf) { /* Unresolved jump */ emu_ip = 0x0D65; emu_last_cs = 0x22A6; emu_last_ip = 0x0D61; emu_last_length = 0x008D; emu_last_crc = 0xDF87; emu_call(); return; }
	emu_xorw(&emu_bx.x, emu_bx.x);
	emu_movw(&emu_cx.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_cmpws(&emu_cx.x, 0x0);
	if (!(emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x0D6F; emu_last_cs = 0x22A6; emu_last_ip = 0x0D6B; emu_last_length = 0x008D; emu_last_crc = 0xDF87; emu_call(); return; }
	emu_xorw(&emu_cx.x, emu_cx.x);
	emu_cmpw(&emu_cx.x, 0x140);
	if (!(emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x0DCA; emu_last_cs = 0x22A6; emu_last_ip = 0x0D73; emu_last_length = 0x008D; emu_last_crc = 0xDF87; emu_call(); return; }
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_cmpws(&emu_dx.x, 0x0);
	if (!(emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x0D7F; emu_last_cs = 0x22A6; emu_last_ip = 0x0D7B; emu_last_length = 0x008D; emu_last_crc = 0xDF87; emu_call(); return; }
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_cmpw(&emu_dx.x, 0xC8);
	if (!(emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x0DCA; emu_last_cs = 0x22A6; emu_last_ip = 0x0D83; emu_last_length = 0x008D; emu_last_crc = 0xDF87; emu_call(); return; }
	emu_cmpw(&emu_ax.x, emu_cx.x);
	if (!(emu_flags.cf || emu_flags.zf)) { /* Unresolved jump */ emu_ip = 0x0DCA; emu_last_cs = 0x22A6; emu_last_ip = 0x0D87; emu_last_length = 0x008D; emu_last_crc = 0xDF87; emu_call(); return; }
	emu_cmpw(&emu_bx.x, emu_dx.x);
	if (!(emu_flags.cf || emu_flags.zf)) { /* Unresolved jump */ emu_ip = 0x0DCA; emu_last_cs = 0x22A6; emu_last_ip = 0x0D8B; emu_last_length = 0x008D; emu_last_crc = 0xDF87; emu_call(); return; }
	emu_cmpw(&emu_cx.x, 0x140);
	if ((emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x0D96; emu_last_cs = 0x22A6; emu_last_ip = 0x0D91; emu_last_length = 0x008D; emu_last_crc = 0xDF87; emu_call(); return; }
	emu_movw(&emu_cx.x, 0x13F);
	emu_cmpw(&emu_dx.x, 0xC8);
	if ((emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x0D9F; emu_last_cs = 0x22A6; emu_last_ip = 0x0D9A; emu_last_length = 0x008D; emu_last_crc = 0xDF87; emu_call(); return; }
	emu_movw(&emu_dx.x, 0xC7);
	emu_movw(&emu_si, emu_ax.x);
	emu_movw(&emu_di, emu_ax.x);
	emu_movw(&emu_bp, emu_dx.x);
	emu_shlw(&emu_bx.x, 0x1);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_cs, emu_bx.x,  0x17D));
	emu_addw(&emu_di, emu_ax.x);
	emu_shrw(&emu_bx.x, 0x1);
	emu_subw(&emu_bp, emu_bx.x);
	emu_incw(&emu_bp);
	emu_incw(&emu_cx.x);
	emu_subw(&emu_cx.x, emu_si);
	emu_movw(&emu_bx.x, 0x140);
	emu_subw(&emu_bx.x, emu_cx.x);
	emu_movw(&emu_dx.x, emu_cx.x);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_cs, 0x00,  0x30));
	emu_rep_stosb();
	emu_movw(&emu_cx.x, emu_dx.x);
	emu_addw(&emu_di, emu_bx.x);
	emu_decw(&emu_bp);
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x0DC1; emu_last_cs = 0x22A6; emu_last_ip = 0x0DC8; emu_last_length = 0x008D; emu_last_crc = 0xDF87; emu_call(); return; }
	emu_pop(&emu_si);
	emu_pop(&emu_es);
	emu_pop(&emu_dx.x);
	emu_pop(&emu_di);
	emu_pop(&emu_cx.x);
	emu_pop(&emu_bx.x);
	emu_pop(&emu_ax.x);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__22A6_0D56_007D_10AC()
 *
 * @name f__22A6_0D56_007D_10AC
 * @implements 22A6:0D56:007D:10AC ()
 *
 * Called From: 22A6:0D52:008D:DF87
 */
void f__22A6_0D56_007D_10AC()
{
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_cmpw(&emu_bx.x, 0xC8);
	if (!(emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x0DCA; emu_last_cs = 0x22A6; emu_last_ip = 0x0D5D; emu_last_length = 0x007D; emu_last_crc = 0x10AC; emu_call(); return; }
	emu_orw(&emu_bx.x, emu_bx.x);
	if (!emu_flags.sf) { f__22A6_0D65_006E_8E61(); return; }
	emu_xorw(&emu_bx.x, emu_bx.x);
	emu_movw(&emu_cx.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_cmpws(&emu_cx.x, 0x0);
	if (!(emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x0D6F; emu_last_cs = 0x22A6; emu_last_ip = 0x0D6B; emu_last_length = 0x007D; emu_last_crc = 0x10AC; emu_call(); return; }
	emu_xorw(&emu_cx.x, emu_cx.x);
	emu_cmpw(&emu_cx.x, 0x140);
	if (!(emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x0DCA; emu_last_cs = 0x22A6; emu_last_ip = 0x0D73; emu_last_length = 0x007D; emu_last_crc = 0x10AC; emu_call(); return; }
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_cmpws(&emu_dx.x, 0x0);
	if (!(emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x0D7F; emu_last_cs = 0x22A6; emu_last_ip = 0x0D7B; emu_last_length = 0x007D; emu_last_crc = 0x10AC; emu_call(); return; }
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_cmpw(&emu_dx.x, 0xC8);
	if (!(emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x0DCA; emu_last_cs = 0x22A6; emu_last_ip = 0x0D83; emu_last_length = 0x007D; emu_last_crc = 0x10AC; emu_call(); return; }
	emu_cmpw(&emu_ax.x, emu_cx.x);
	if (!(emu_flags.cf || emu_flags.zf)) { /* Unresolved jump */ emu_ip = 0x0DCA; emu_last_cs = 0x22A6; emu_last_ip = 0x0D87; emu_last_length = 0x007D; emu_last_crc = 0x10AC; emu_call(); return; }
	emu_cmpw(&emu_bx.x, emu_dx.x);
	if (!(emu_flags.cf || emu_flags.zf)) { /* Unresolved jump */ emu_ip = 0x0DCA; emu_last_cs = 0x22A6; emu_last_ip = 0x0D8B; emu_last_length = 0x007D; emu_last_crc = 0x10AC; emu_call(); return; }
	emu_cmpw(&emu_cx.x, 0x140);
	if ((emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x0D96; emu_last_cs = 0x22A6; emu_last_ip = 0x0D91; emu_last_length = 0x007D; emu_last_crc = 0x10AC; emu_call(); return; }
	emu_movw(&emu_cx.x, 0x13F);
	emu_cmpw(&emu_dx.x, 0xC8);
	if ((emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x0D9F; emu_last_cs = 0x22A6; emu_last_ip = 0x0D9A; emu_last_length = 0x007D; emu_last_crc = 0x10AC; emu_call(); return; }
	emu_movw(&emu_dx.x, 0xC7);
	emu_movw(&emu_si, emu_ax.x);
	emu_movw(&emu_di, emu_ax.x);
	emu_movw(&emu_bp, emu_dx.x);
	emu_shlw(&emu_bx.x, 0x1);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_cs, emu_bx.x,  0x17D));
	emu_addw(&emu_di, emu_ax.x);
	emu_shrw(&emu_bx.x, 0x1);
	emu_subw(&emu_bp, emu_bx.x);
	emu_incw(&emu_bp);
	emu_incw(&emu_cx.x);
	emu_subw(&emu_cx.x, emu_si);
	emu_movw(&emu_bx.x, 0x140);
	emu_subw(&emu_bx.x, emu_cx.x);
	emu_movw(&emu_dx.x, emu_cx.x);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_cs, 0x00,  0x30));
	emu_rep_stosb();
	emu_movw(&emu_cx.x, emu_dx.x);
	emu_addw(&emu_di, emu_bx.x);
	emu_decw(&emu_bp);
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x0DC1; emu_last_cs = 0x22A6; emu_last_ip = 0x0DC8; emu_last_length = 0x007D; emu_last_crc = 0x10AC; emu_call(); return; }
	emu_pop(&emu_si);
	emu_pop(&emu_es);
	emu_pop(&emu_dx.x);
	emu_pop(&emu_di);
	emu_pop(&emu_cx.x);
	emu_pop(&emu_bx.x);
	emu_pop(&emu_ax.x);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__22A6_0D65_006E_8E61()
 *
 * @name f__22A6_0D65_006E_8E61
 * @implements 22A6:0D65:006E:8E61 ()
 *
 * Called From: 22A6:0D61:007D:10AC
 */
void f__22A6_0D65_006E_8E61()
{
	emu_movw(&emu_cx.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_cmpws(&emu_cx.x, 0x0);
	if (!(emu_flags.sf != emu_flags.of)) { f__22A6_0D6F_0064_15F3(); return; }
	emu_xorw(&emu_cx.x, emu_cx.x);
	emu_cmpw(&emu_cx.x, 0x140);
	if (!(emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x0DCA; emu_last_cs = 0x22A6; emu_last_ip = 0x0D73; emu_last_length = 0x006E; emu_last_crc = 0x8E61; emu_call(); return; }
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_cmpws(&emu_dx.x, 0x0);
	if (!(emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x0D7F; emu_last_cs = 0x22A6; emu_last_ip = 0x0D7B; emu_last_length = 0x006E; emu_last_crc = 0x8E61; emu_call(); return; }
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_cmpw(&emu_dx.x, 0xC8);
	if (!(emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x0DCA; emu_last_cs = 0x22A6; emu_last_ip = 0x0D83; emu_last_length = 0x006E; emu_last_crc = 0x8E61; emu_call(); return; }
	emu_cmpw(&emu_ax.x, emu_cx.x);
	if (!(emu_flags.cf || emu_flags.zf)) { /* Unresolved jump */ emu_ip = 0x0DCA; emu_last_cs = 0x22A6; emu_last_ip = 0x0D87; emu_last_length = 0x006E; emu_last_crc = 0x8E61; emu_call(); return; }
	emu_cmpw(&emu_bx.x, emu_dx.x);
	if (!(emu_flags.cf || emu_flags.zf)) { /* Unresolved jump */ emu_ip = 0x0DCA; emu_last_cs = 0x22A6; emu_last_ip = 0x0D8B; emu_last_length = 0x006E; emu_last_crc = 0x8E61; emu_call(); return; }
	emu_cmpw(&emu_cx.x, 0x140);
	if ((emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x0D96; emu_last_cs = 0x22A6; emu_last_ip = 0x0D91; emu_last_length = 0x006E; emu_last_crc = 0x8E61; emu_call(); return; }
	emu_movw(&emu_cx.x, 0x13F);
	emu_cmpw(&emu_dx.x, 0xC8);
	if ((emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x0D9F; emu_last_cs = 0x22A6; emu_last_ip = 0x0D9A; emu_last_length = 0x006E; emu_last_crc = 0x8E61; emu_call(); return; }
	emu_movw(&emu_dx.x, 0xC7);
	emu_movw(&emu_si, emu_ax.x);
	emu_movw(&emu_di, emu_ax.x);
	emu_movw(&emu_bp, emu_dx.x);
	emu_shlw(&emu_bx.x, 0x1);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_cs, emu_bx.x,  0x17D));
	emu_addw(&emu_di, emu_ax.x);
	emu_shrw(&emu_bx.x, 0x1);
	emu_subw(&emu_bp, emu_bx.x);
	emu_incw(&emu_bp);
	emu_incw(&emu_cx.x);
	emu_subw(&emu_cx.x, emu_si);
	emu_movw(&emu_bx.x, 0x140);
	emu_subw(&emu_bx.x, emu_cx.x);
	emu_movw(&emu_dx.x, emu_cx.x);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_cs, 0x00,  0x30));
	emu_rep_stosb();
	emu_movw(&emu_cx.x, emu_dx.x);
	emu_addw(&emu_di, emu_bx.x);
	emu_decw(&emu_bp);
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x0DC1; emu_last_cs = 0x22A6; emu_last_ip = 0x0DC8; emu_last_length = 0x006E; emu_last_crc = 0x8E61; emu_call(); return; }
	emu_pop(&emu_si);
	emu_pop(&emu_es);
	emu_pop(&emu_dx.x);
	emu_pop(&emu_di);
	emu_pop(&emu_cx.x);
	emu_pop(&emu_bx.x);
	emu_pop(&emu_ax.x);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__22A6_0D6F_0064_15F3()
 *
 * @name f__22A6_0D6F_0064_15F3
 * @implements 22A6:0D6F:0064:15F3 ()
 *
 * Called From: 22A6:0D6B:006E:8E61
 */
void f__22A6_0D6F_0064_15F3()
{
	emu_cmpw(&emu_cx.x, 0x140);
	if (!(emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x0DCA; emu_last_cs = 0x22A6; emu_last_ip = 0x0D73; emu_last_length = 0x0064; emu_last_crc = 0x15F3; emu_call(); return; }
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_cmpws(&emu_dx.x, 0x0);
	if (!(emu_flags.sf != emu_flags.of)) { f__22A6_0D7F_0054_EBDC(); return; }
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_cmpw(&emu_dx.x, 0xC8);
	if (!(emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x0DCA; emu_last_cs = 0x22A6; emu_last_ip = 0x0D83; emu_last_length = 0x0064; emu_last_crc = 0x15F3; emu_call(); return; }
	emu_cmpw(&emu_ax.x, emu_cx.x);
	if (!(emu_flags.cf || emu_flags.zf)) { /* Unresolved jump */ emu_ip = 0x0DCA; emu_last_cs = 0x22A6; emu_last_ip = 0x0D87; emu_last_length = 0x0064; emu_last_crc = 0x15F3; emu_call(); return; }
	emu_cmpw(&emu_bx.x, emu_dx.x);
	if (!(emu_flags.cf || emu_flags.zf)) { /* Unresolved jump */ emu_ip = 0x0DCA; emu_last_cs = 0x22A6; emu_last_ip = 0x0D8B; emu_last_length = 0x0064; emu_last_crc = 0x15F3; emu_call(); return; }
	emu_cmpw(&emu_cx.x, 0x140);
	if ((emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x0D96; emu_last_cs = 0x22A6; emu_last_ip = 0x0D91; emu_last_length = 0x0064; emu_last_crc = 0x15F3; emu_call(); return; }
	emu_movw(&emu_cx.x, 0x13F);
	emu_cmpw(&emu_dx.x, 0xC8);
	if ((emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x0D9F; emu_last_cs = 0x22A6; emu_last_ip = 0x0D9A; emu_last_length = 0x0064; emu_last_crc = 0x15F3; emu_call(); return; }
	emu_movw(&emu_dx.x, 0xC7);
	emu_movw(&emu_si, emu_ax.x);
	emu_movw(&emu_di, emu_ax.x);
	emu_movw(&emu_bp, emu_dx.x);
	emu_shlw(&emu_bx.x, 0x1);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_cs, emu_bx.x,  0x17D));
	emu_addw(&emu_di, emu_ax.x);
	emu_shrw(&emu_bx.x, 0x1);
	emu_subw(&emu_bp, emu_bx.x);
	emu_incw(&emu_bp);
	emu_incw(&emu_cx.x);
	emu_subw(&emu_cx.x, emu_si);
	emu_movw(&emu_bx.x, 0x140);
	emu_subw(&emu_bx.x, emu_cx.x);
	emu_movw(&emu_dx.x, emu_cx.x);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_cs, 0x00,  0x30));
	emu_rep_stosb();
	emu_movw(&emu_cx.x, emu_dx.x);
	emu_addw(&emu_di, emu_bx.x);
	emu_decw(&emu_bp);
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x0DC1; emu_last_cs = 0x22A6; emu_last_ip = 0x0DC8; emu_last_length = 0x0064; emu_last_crc = 0x15F3; emu_call(); return; }
	emu_pop(&emu_si);
	emu_pop(&emu_es);
	emu_pop(&emu_dx.x);
	emu_pop(&emu_di);
	emu_pop(&emu_cx.x);
	emu_pop(&emu_bx.x);
	emu_pop(&emu_ax.x);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__22A6_0D7F_0054_EBDC()
 *
 * @name f__22A6_0D7F_0054_EBDC
 * @implements 22A6:0D7F:0054:EBDC ()
 *
 * Called From: 22A6:0D7B:0064:15F3
 */
void f__22A6_0D7F_0054_EBDC()
{
	emu_cmpw(&emu_dx.x, 0xC8);
	if (!(emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x0DCA; emu_last_cs = 0x22A6; emu_last_ip = 0x0D83; emu_last_length = 0x0054; emu_last_crc = 0xEBDC; emu_call(); return; }
	emu_cmpw(&emu_ax.x, emu_cx.x);
	if (!(emu_flags.cf || emu_flags.zf)) { /* Unresolved jump */ emu_ip = 0x0DCA; emu_last_cs = 0x22A6; emu_last_ip = 0x0D87; emu_last_length = 0x0054; emu_last_crc = 0xEBDC; emu_call(); return; }
	emu_cmpw(&emu_bx.x, emu_dx.x);
	if (!(emu_flags.cf || emu_flags.zf)) { /* Unresolved jump */ emu_ip = 0x0DCA; emu_last_cs = 0x22A6; emu_last_ip = 0x0D8B; emu_last_length = 0x0054; emu_last_crc = 0xEBDC; emu_call(); return; }
	emu_cmpw(&emu_cx.x, 0x140);
	if ((emu_flags.sf != emu_flags.of)) { f__22A6_0D96_003D_4452(); return; }
	emu_movw(&emu_cx.x, 0x13F);
	emu_cmpw(&emu_dx.x, 0xC8);
	if ((emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x0D9F; emu_last_cs = 0x22A6; emu_last_ip = 0x0D9A; emu_last_length = 0x0054; emu_last_crc = 0xEBDC; emu_call(); return; }
	emu_movw(&emu_dx.x, 0xC7);
	emu_movw(&emu_si, emu_ax.x);
	emu_movw(&emu_di, emu_ax.x);
	emu_movw(&emu_bp, emu_dx.x);
	emu_shlw(&emu_bx.x, 0x1);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_cs, emu_bx.x,  0x17D));
	emu_addw(&emu_di, emu_ax.x);
	emu_shrw(&emu_bx.x, 0x1);
	emu_subw(&emu_bp, emu_bx.x);
	emu_incw(&emu_bp);
	emu_incw(&emu_cx.x);
	emu_subw(&emu_cx.x, emu_si);
	emu_movw(&emu_bx.x, 0x140);
	emu_subw(&emu_bx.x, emu_cx.x);
	emu_movw(&emu_dx.x, emu_cx.x);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_cs, 0x00,  0x30));
	emu_rep_stosb();
	emu_movw(&emu_cx.x, emu_dx.x);
	emu_addw(&emu_di, emu_bx.x);
	emu_decw(&emu_bp);
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x0DC1; emu_last_cs = 0x22A6; emu_last_ip = 0x0DC8; emu_last_length = 0x0054; emu_last_crc = 0xEBDC; emu_call(); return; }
	emu_pop(&emu_si);
	emu_pop(&emu_es);
	emu_pop(&emu_dx.x);
	emu_pop(&emu_di);
	emu_pop(&emu_cx.x);
	emu_pop(&emu_bx.x);
	emu_pop(&emu_ax.x);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__22A6_0D96_003D_4452()
 *
 * @name f__22A6_0D96_003D_4452
 * @implements 22A6:0D96:003D:4452 ()
 *
 * Called From: 22A6:0D91:0054:EBDC
 */
void f__22A6_0D96_003D_4452()
{
	emu_cmpw(&emu_dx.x, 0xC8);
	if ((emu_flags.sf != emu_flags.of)) { f__22A6_0D9F_0034_5DA6(); return; }
	emu_movw(&emu_dx.x, 0xC7);
	emu_movw(&emu_si, emu_ax.x);
	emu_movw(&emu_di, emu_ax.x);
	emu_movw(&emu_bp, emu_dx.x);
	emu_shlw(&emu_bx.x, 0x1);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_cs, emu_bx.x,  0x17D));
	emu_addw(&emu_di, emu_ax.x);
	emu_shrw(&emu_bx.x, 0x1);
	emu_subw(&emu_bp, emu_bx.x);
	emu_incw(&emu_bp);
	emu_incw(&emu_cx.x);
	emu_subw(&emu_cx.x, emu_si);
	emu_movw(&emu_bx.x, 0x140);
	emu_subw(&emu_bx.x, emu_cx.x);
	emu_movw(&emu_dx.x, emu_cx.x);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_cs, 0x00,  0x30));
	emu_rep_stosb();
	emu_movw(&emu_cx.x, emu_dx.x);
	emu_addw(&emu_di, emu_bx.x);
	emu_decw(&emu_bp);
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x0DC1; emu_last_cs = 0x22A6; emu_last_ip = 0x0DC8; emu_last_length = 0x003D; emu_last_crc = 0x4452; emu_call(); return; }
	emu_pop(&emu_si);
	emu_pop(&emu_es);
	emu_pop(&emu_dx.x);
	emu_pop(&emu_di);
	emu_pop(&emu_cx.x);
	emu_pop(&emu_bx.x);
	emu_pop(&emu_ax.x);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__22A6_0D9F_0034_5DA6()
 *
 * @name f__22A6_0D9F_0034_5DA6
 * @implements 22A6:0D9F:0034:5DA6 ()
 *
 * Called From: 22A6:0D9A:003D:4452
 */
void f__22A6_0D9F_0034_5DA6()
{
	emu_movw(&emu_si, emu_ax.x);
	emu_movw(&emu_di, emu_ax.x);
	emu_movw(&emu_bp, emu_dx.x);
	emu_shlw(&emu_bx.x, 0x1);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_cs, emu_bx.x,  0x17D));
	emu_addw(&emu_di, emu_ax.x);
	emu_shrw(&emu_bx.x, 0x1);
	emu_subw(&emu_bp, emu_bx.x);
	emu_incw(&emu_bp);
	emu_incw(&emu_cx.x);
	emu_subw(&emu_cx.x, emu_si);
	emu_movw(&emu_bx.x, 0x140);
	emu_subw(&emu_bx.x, emu_cx.x);
	emu_movw(&emu_dx.x, emu_cx.x);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_cs, 0x00,  0x30));
	emu_rep_stosb();
	emu_movw(&emu_cx.x, emu_dx.x);
	emu_addw(&emu_di, emu_bx.x);
	emu_decw(&emu_bp);
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__22A6_0DC1_0012_E762(); return; }
	emu_pop(&emu_si);
	emu_pop(&emu_es);
	emu_pop(&emu_dx.x);
	emu_pop(&emu_di);
	emu_pop(&emu_cx.x);
	emu_pop(&emu_bx.x);
	emu_pop(&emu_ax.x);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__22A6_0DC1_0012_E762()
 *
 * @name f__22A6_0DC1_0012_E762
 * @implements 22A6:0DC1:0012:E762 ()
 *
 * Called From: 22A6:0DC8:0034:5DA6
 * Called From: 22A6:0DC8:0012:E762
 */
void f__22A6_0DC1_0012_E762()
{
	emu_rep_stosb();
	emu_movw(&emu_cx.x, emu_dx.x);
	emu_addw(&emu_di, emu_bx.x);
	emu_decw(&emu_bp);
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__22A6_0DC1_0012_E762(); return; }
	emu_pop(&emu_si);
	emu_pop(&emu_es);
	emu_pop(&emu_dx.x);
	emu_pop(&emu_di);
	emu_pop(&emu_cx.x);
	emu_pop(&emu_bx.x);
	emu_pop(&emu_ax.x);
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
 * Called From: 22A6:0D43:0015:A4C3
 * Called From: 22A6:0E5C:002B:E39A
 * Called From: 22A6:0F9F:002C:45CC
 */
void f__22A6_0DF8_0022_5FD5()
{
	emu_push(emu_ds);
	emu_push(emu_si);
	emu_movw(&emu_ds, emu_get_memory16(emu_cs, 0x00,  0x11));
	emu_movw(&emu_si, emu_get_memory16(emu_cs, 0x00,  0xF));
	emu_lodsb(emu_ds);
	emu_andw(&emu_ax.x, 0x1E);
	emu_shlw(&emu_ax.x, 0x1);
	emu_movw(&emu_ds, emu_get_memory16(emu_cs, 0x00,  0xD));
	emu_movw(&emu_si, emu_get_memory16(emu_cs, 0x00,  0xB));
	emu_addw(&emu_si, emu_ax.x);
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
 *
 * Called From: 22A6:04B1:000F:3B8F
 * Called From: 22A6:0EE2:000A:151A
 */
void f__22A6_0E1A_0008_F4AE()
{
	emu_andw(&emu_ax.x, 0x1E);
	emu_addw(&emu_ax.x, 0x1);
	f__22A6_0E25_000F_30CD(); return;
}

/**
 * Decompiled function f__22A6_0E22_0012_7FC4()
 *
 * @name f__22A6_0E22_0012_7FC4
 * @implements 22A6:0E22:0012:7FC4 ()
 *
 * Called From: 22A6:045C:0066:AEA9
 * Called From: 22A6:0464:0008:382D
 * Called From: 22A6:04B9:0008:BD3B
 * Called From: 22A6:056F:001D:D834
 * Called From: 22A6:0747:0006:1005
 * Called From: 22A6:074F:0008:FFB7
 * Called From: 22A6:10B8:001D:52A1
 */
void f__22A6_0E22_0012_7FC4()
{
	emu_andw(&emu_ax.x, 0x1E);
	emu_push(emu_ds);
	emu_push(emu_si);
	emu_shlw(&emu_ax.x, 0x1);
	emu_lfp(&emu_ds, &emu_si, &emu_get_memory16(emu_cs, 0x00,  0xB));
	emu_addw(&emu_si, emu_ax.x);
	emu_lodsw(emu_ds);
	emu_pop(&emu_si);
	emu_pop(&emu_ds);

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__22A6_0E25_000F_30CD()
 *
 * @name f__22A6_0E25_000F_30CD
 * @implements 22A6:0E25:000F:30CD ()
 *
 * Called From: 22A6:0E20:0008:F4AE
 */
void f__22A6_0E25_000F_30CD()
{
	emu_push(emu_ds);
	emu_push(emu_si);
	emu_shlw(&emu_ax.x, 0x1);
	emu_lfp(&emu_ds, &emu_si, &emu_get_memory16(emu_cs, 0x00,  0xB));
	emu_addw(&emu_si, emu_ax.x);
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
 *
 * Called From: B488:017F:000F:B531
 * Called From: B495:1545:0012:B2A2
 * Called From: B503:0F54:0015:E236
 */
void f__22A6_0E34_002B_E39A()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_bx.x);
	emu_push(emu_ds);
	emu_push(emu_si);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_orw(&emu_bx.x, emu_bx.x);
	if (emu_flags.sf) { /* Unresolved jump */ emu_ip = 0x0E66; emu_last_cs = 0x22A6; emu_last_ip = 0x0E3F; emu_last_length = 0x002B; emu_last_crc = 0xE39A; emu_call(); return; }
	emu_cmpw(&emu_bx.x, 0xC8);
	if (!(emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x0E66; emu_last_cs = 0x22A6; emu_last_ip = 0x0E45; emu_last_length = 0x002B; emu_last_crc = 0xE39A; emu_call(); return; }
	emu_shlw(&emu_bx.x, 0x1);
	emu_movw(&emu_si, emu_get_memory16(emu_cs, emu_bx.x,  0x17D));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax.x, emu_ax.x);
	if (emu_flags.sf) { /* Unresolved jump */ emu_ip = 0x0E66; emu_last_cs = 0x22A6; emu_last_ip = 0x0E53; emu_last_length = 0x002B; emu_last_crc = 0xE39A; emu_call(); return; }
	emu_cmpw(&emu_ax.x, 0x140);
	if (!(emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x0E66; emu_last_cs = 0x22A6; emu_last_ip = 0x0E58; emu_last_length = 0x002B; emu_last_crc = 0xE39A; emu_call(); return; }
	emu_addw(&emu_si, emu_ax.x);
	emu_push(0x0E5F); f__22A6_0DF8_0022_5FD5();
	f__22A6_0E5F_0007_99C6();
}

/**
 * Decompiled function f__22A6_0E5F_0007_99C6()
 *
 * @name f__22A6_0E5F_0007_99C6
 * @implements 22A6:0E5F:0007:99C6 ()
 *
 * Called From: 22A6:0E5F:002B:E39A
 */
void f__22A6_0E5F_0007_99C6()
{
	emu_movw(&emu_ds, emu_ax.x);
	emu_lodsb(emu_ds);
	emu_xorb(&emu_ax.h, emu_ax.h);
	f__22A6_0E68_0005_DC06(); return;
}

/**
 * Decompiled function f__22A6_0E68_0005_DC06()
 *
 * @name f__22A6_0E68_0005_DC06
 * @implements 22A6:0E68:0005:DC06 ()
 *
 * Called From: 22A6:0E64:0007:99C6
 */
void f__22A6_0E68_0005_DC06()
{
	emu_pop(&emu_si);
	emu_pop(&emu_ds);
	emu_pop(&emu_bx.x);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__22A6_0EC6_0014_F4ED()
 *
 * @name f__22A6_0EC6_0014_F4ED
 * @implements 22A6:0EC6:0014:F4ED ()
 *
 * Called From: 22A6:0004:0003:DA0F
 */
void f__22A6_0EC6_0014_F4ED()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_cx.x);
	emu_movw(&emu_bx.x, 0x13B4);
	emu_movb(&emu_cx.l, 0x4);
	emu_shrw(&emu_bx.x, emu_cx.l);
	emu_incw(&emu_bx.x);
	emu_movw(&emu_dx.x, emu_bx.x);
	emu_movw(&emu_ax.x, 0xE6D);
	emu_pop(&emu_cx.x);
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
 *
 * Called From: 1587:0353:0021:C368
 */
void f__22A6_0EDB_000A_151A()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(0x0EE5); f__22A6_0E1A_0008_F4AE();
	f__22A6_0EE5_0031_0519();
}

/**
 * Decompiled function f__22A6_0EE5_0031_0519()
 *
 * @name f__22A6_0EE5_0031_0519
 * @implements 22A6:0EE5:0031:0519 ()
 *
 * Called From: 22A6:0EE5:000A:151A
 */
void f__22A6_0EE5_0031_0519()
{
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x325), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x323), 0x0);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x31B), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x31D), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x31F), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x321), emu_ax.x);
	emu_movw(&emu_ax.x, 0xFFFF);
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x327), emu_ax.x);
	emu_pop(&emu_ax.x);
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
 *
 * Called From: 10E4:00EE:001B:A6F6
 * Called From: 10E4:0109:001B:D60B
 * Called From: B488:01B0:0011:94F5
 */
void f__22A6_0F76_002C_45CC()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_ax.x);
	emu_push(emu_bx.x);
	emu_push(emu_es);
	emu_push(emu_di);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_orw(&emu_bx.x, emu_bx.x);
	if (emu_flags.sf) { /* Unresolved jump */ emu_ip = 0x0FA8; emu_last_cs = 0x22A6; emu_last_ip = 0x0F82; emu_last_length = 0x002C; emu_last_crc = 0x45CC; emu_call(); return; }
	emu_cmpw(&emu_bx.x, 0xC8);
	if (!(emu_flags.sf != emu_flags.of)) { f__22A6_0FA8_0006_E2AB(); return; }
	emu_shlw(&emu_bx.x, 0x1);
	emu_movw(&emu_di, emu_get_memory16(emu_cs, emu_bx.x,  0x17D));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax.x, emu_ax.x);
	if (emu_flags.sf) { /* Unresolved jump */ emu_ip = 0x0FA8; emu_last_cs = 0x22A6; emu_last_ip = 0x0F96; emu_last_length = 0x002C; emu_last_crc = 0x45CC; emu_call(); return; }
	emu_cmpw(&emu_ax.x, 0x140);
	if (!(emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x0FA8; emu_last_cs = 0x22A6; emu_last_ip = 0x0F9B; emu_last_length = 0x002C; emu_last_crc = 0x45CC; emu_call(); return; }
	emu_addw(&emu_di, emu_ax.x);
	emu_push(0x0FA2); f__22A6_0DF8_0022_5FD5();
	f__22A6_0FA2_000C_C3E4();
}

/**
 * Decompiled function f__22A6_0FA2_000C_C3E4()
 *
 * @name f__22A6_0FA2_000C_C3E4
 * @implements 22A6:0FA2:000C:C3E4 ()
 *
 * Called From: 22A6:0FA2:002C:45CC
 */
void f__22A6_0FA2_000C_C3E4()
{
	emu_movw(&emu_es, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_stosb();
	emu_pop(&emu_di);
	emu_pop(&emu_es);
	emu_pop(&emu_bx.x);
	emu_pop(&emu_ax.x);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__22A6_0FA8_0006_E2AB()
 *
 * @name f__22A6_0FA8_0006_E2AB
 * @implements 22A6:0FA8:0006:E2AB ()
 *
 * Called From: 22A6:0F88:002C:45CC
 */
void f__22A6_0FA8_0006_E2AB()
{
	emu_pop(&emu_di);
	emu_pop(&emu_es);
	emu_pop(&emu_bx.x);
	emu_pop(&emu_ax.x);
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
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_cs, 0x00,  0x26));
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x31), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_cs, 0x00,  0x28));
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x33), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_cs, 0x00,  0x2A));
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x35), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_cs, 0x00,  0x2C));
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x37), emu_ax.x);
	emu_pop(&emu_ax.x);
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
 * Called From: 29A3:01A5:000C:9EC2
 * Called From: 2B4C:003E:0017:D42A
 * Called From: 2B4C:01E1:0047:12C3
 * Called From: 2B6C:0153:0020:C73F
 * Called From: 2B6C:0183:001E:6939
 * Called From: 2B6C:0261:007B:97B2
 * Called From: 2B6C:0261:008B:F96D
 * Called From: 2B6C:0261:009B:5944
 * Called From: 2B6C:0261:00CE:4D32
 * Called From: 2B6C:02B6:0028:3AD7
 * Called From: 2B99:0065:000C:9EC2
 */
void f__22A6_0FD7_0043_ACF9()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_cs, 0x00,  0x31));
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x26), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x31), 0x0);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_cs, 0x00,  0x33));
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x28), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x33), 0x28);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_cs, 0x00,  0x35));
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x2A), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x35), 0x0);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_cs, 0x00,  0x37));
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x2C), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x37), 0xC8);
	emu_pop(&emu_ax.x);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__22A6_101C_004B_D9F3()
 *
 * @name f__22A6_101C_004B_D9F3
 * @implements 22A6:101C:004B:D9F3 ()
 *
 * Called From: 10E4:039B:002B:904E
 * Called From: 2B6C:0106:0025:3C9F
 * Called From: 2B6C:0106:002F:7133
 * Called From: 2B6C:0106:0045:838C
 * Called From: B4F2:0F15:001D:FFB4
 * Called From: B53B:0147:0028:D443
 */
void f__22A6_101C_004B_D9F3()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x2);
	emu_movw(&emu_ax.x, 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_push(emu_bx.x);
	emu_push(emu_cx.x);
	emu_push(emu_dx.x);
	emu_push(emu_di);
	emu_push(emu_si);
	emu_push(emu_ds);
	emu_push(emu_es);
	emu_cld();
	emu_movw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpws(&emu_si, 0x0);
	if (!(emu_flags.sf != emu_flags.of)) { f__22A6_103A_002D_1381(); return; }
	emu_xorw(&emu_si, emu_si);
	emu_cmpws(&emu_si, 0x28);
	if ((emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x1042; emu_last_cs = 0x22A6; emu_last_ip = 0x103D; emu_last_length = 0x004B; emu_last_crc = 0xD9F3; emu_call(); return; }
	emu_movw(&emu_si, 0x27);
	emu_shlw(&emu_si, 0x1);
	emu_shlw(&emu_si, 0x1);
	emu_shlw(&emu_si, 0x1);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_cmpws(&emu_dx.x, 0x0);
	if (!(emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x1052; emu_last_cs = 0x22A6; emu_last_ip = 0x104E; emu_last_length = 0x004B; emu_last_crc = 0xD9F3; emu_call(); return; }
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_cmpw(&emu_dx.x, 0xC8);
	if ((emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x105B; emu_last_cs = 0x22A6; emu_last_ip = 0x1056; emu_last_length = 0x004B; emu_last_crc = 0xD9F3; emu_call(); return; }
	emu_movw(&emu_dx.x, 0xC7);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_cmpws(&emu_bx.x, 0x0);
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x1067; emu_last_cs = 0x22A6; emu_last_ip = 0x1061; emu_last_length = 0x004B; emu_last_crc = 0xD9F3; emu_call(); return; }
	emu_xorw(&emu_ax.x, emu_ax.x);
	/* Unresolved jump */ emu_ip = 0x10D2; emu_last_cs = 0x22A6; emu_last_ip = 0x1065; emu_last_length = 0x004B; emu_last_crc = 0xD9F3; emu_call();
}

/**
 * Decompiled function f__22A6_103A_002D_1381()
 *
 * @name f__22A6_103A_002D_1381
 * @implements 22A6:103A:002D:1381 ()
 *
 * Called From: 22A6:1036:004B:D9F3
 */
void f__22A6_103A_002D_1381()
{
	emu_cmpws(&emu_si, 0x28);
	if ((emu_flags.sf != emu_flags.of)) { f__22A6_1042_0025_252F(); return; }
	emu_movw(&emu_si, 0x27);
	emu_shlw(&emu_si, 0x1);
	emu_shlw(&emu_si, 0x1);
	emu_shlw(&emu_si, 0x1);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_cmpws(&emu_dx.x, 0x0);
	if (!(emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x1052; emu_last_cs = 0x22A6; emu_last_ip = 0x104E; emu_last_length = 0x002D; emu_last_crc = 0x1381; emu_call(); return; }
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_cmpw(&emu_dx.x, 0xC8);
	if ((emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x105B; emu_last_cs = 0x22A6; emu_last_ip = 0x1056; emu_last_length = 0x002D; emu_last_crc = 0x1381; emu_call(); return; }
	emu_movw(&emu_dx.x, 0xC7);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_cmpws(&emu_bx.x, 0x0);
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x1067; emu_last_cs = 0x22A6; emu_last_ip = 0x1061; emu_last_length = 0x002D; emu_last_crc = 0x1381; emu_call(); return; }
	emu_xorw(&emu_ax.x, emu_ax.x);
	/* Unresolved jump */ emu_ip = 0x10D2; emu_last_cs = 0x22A6; emu_last_ip = 0x1065; emu_last_length = 0x002D; emu_last_crc = 0x1381; emu_call();
}

/**
 * Decompiled function f__22A6_1042_0025_252F()
 *
 * @name f__22A6_1042_0025_252F
 * @implements 22A6:1042:0025:252F ()
 *
 * Called From: 22A6:103D:002D:1381
 */
void f__22A6_1042_0025_252F()
{
	emu_shlw(&emu_si, 0x1);
	emu_shlw(&emu_si, 0x1);
	emu_shlw(&emu_si, 0x1);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_cmpws(&emu_dx.x, 0x0);
	if (!(emu_flags.sf != emu_flags.of)) { f__22A6_1052_0015_64FB(); return; }
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_cmpw(&emu_dx.x, 0xC8);
	if ((emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x105B; emu_last_cs = 0x22A6; emu_last_ip = 0x1056; emu_last_length = 0x0025; emu_last_crc = 0x252F; emu_call(); return; }
	emu_movw(&emu_dx.x, 0xC7);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_cmpws(&emu_bx.x, 0x0);
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x1067; emu_last_cs = 0x22A6; emu_last_ip = 0x1061; emu_last_length = 0x0025; emu_last_crc = 0x252F; emu_call(); return; }
	emu_xorw(&emu_ax.x, emu_ax.x);
	/* Unresolved jump */ emu_ip = 0x10D2; emu_last_cs = 0x22A6; emu_last_ip = 0x1065; emu_last_length = 0x0025; emu_last_crc = 0x252F; emu_call();
}

/**
 * Decompiled function f__22A6_1052_0015_64FB()
 *
 * @name f__22A6_1052_0015_64FB
 * @implements 22A6:1052:0015:64FB ()
 *
 * Called From: 22A6:104E:0025:252F
 */
void f__22A6_1052_0015_64FB()
{
	emu_cmpw(&emu_dx.x, 0xC8);
	if ((emu_flags.sf != emu_flags.of)) { f__22A6_105B_000C_90E2(); return; }
	emu_movw(&emu_dx.x, 0xC7);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_cmpws(&emu_bx.x, 0x0);
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x1067; emu_last_cs = 0x22A6; emu_last_ip = 0x1061; emu_last_length = 0x0015; emu_last_crc = 0x64FB; emu_call(); return; }
	emu_xorw(&emu_ax.x, emu_ax.x);
	/* Unresolved jump */ emu_ip = 0x10D2; emu_last_cs = 0x22A6; emu_last_ip = 0x1065; emu_last_length = 0x0015; emu_last_crc = 0x64FB; emu_call();
}

/**
 * Decompiled function f__22A6_105B_000C_90E2()
 *
 * @name f__22A6_105B_000C_90E2
 * @implements 22A6:105B:000C:90E2 ()
 *
 * Called From: 22A6:1056:0015:64FB
 */
void f__22A6_105B_000C_90E2()
{
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_cmpws(&emu_bx.x, 0x0);
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__22A6_1067_002E_63A9(); return; }
	emu_xorw(&emu_ax.x, emu_ax.x);
	/* Unresolved jump */ emu_ip = 0x10D2; emu_last_cs = 0x22A6; emu_last_ip = 0x1065; emu_last_length = 0x000C; emu_last_crc = 0x90E2; emu_call();
}

/**
 * Decompiled function f__22A6_1067_002E_63A9()
 *
 * @name f__22A6_1067_002E_63A9
 * @implements 22A6:1067:002E:63A9 ()
 *
 * Called From: 22A6:1061:000C:90E2
 */
void f__22A6_1067_002E_63A9()
{
	emu_cmpws(&emu_bx.x, 0x28);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__22A6_106F_0026_D3B0(); return; }
	emu_movw(&emu_bx.x, 0x28);
	emu_movw(&emu_cx.x, emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_cmpws(&emu_cx.x, 0x0);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x1063; emu_last_cs = 0x22A6; emu_last_ip = 0x1075; emu_last_length = 0x002E; emu_last_crc = 0x63A9; emu_call(); return; }
	emu_cmpw(&emu_cx.x, 0xC8);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x1080; emu_last_cs = 0x22A6; emu_last_ip = 0x107B; emu_last_length = 0x002E; emu_last_crc = 0x63A9; emu_call(); return; }
	emu_movw(&emu_cx.x, 0xC8);
	emu_movw(&emu_di, emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_push(emu_di);
	emu_movw(&emu_es, emu_get_memory16(emu_ss, emu_bp,  0x10));
	emu_cmpws(&emu_bx.x, 0x28);
	if ((emu_flags.cf || emu_flags.zf)) { /* Unresolved jump */ emu_ip = 0x108F; emu_last_cs = 0x22A6; emu_last_ip = 0x108A; emu_last_length = 0x002E; emu_last_crc = 0x63A9; emu_call(); return; }
	emu_movw(&emu_bx.x, 0x28);
	emu_orw(&emu_bx.x, emu_bx.x);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x1095; emu_last_cs = 0x22A6; emu_last_ip = 0x1091; emu_last_length = 0x002E; emu_last_crc = 0x63A9; emu_call(); return; }
	/* Unresolved jump */ emu_ip = 0x10CD; emu_last_cs = 0x22A6; emu_last_ip = 0x1093; emu_last_length = 0x002E; emu_last_crc = 0x63A9; emu_call();
}

/**
 * Decompiled function f__22A6_106F_0026_D3B0()
 *
 * @name f__22A6_106F_0026_D3B0
 * @implements 22A6:106F:0026:D3B0 ()
 *
 * Called From: 22A6:106A:002E:63A9
 */
void f__22A6_106F_0026_D3B0()
{
	emu_movw(&emu_cx.x, emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_cmpws(&emu_cx.x, 0x0);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x1063; emu_last_cs = 0x22A6; emu_last_ip = 0x1075; emu_last_length = 0x0026; emu_last_crc = 0xD3B0; emu_call(); return; }
	emu_cmpw(&emu_cx.x, 0xC8);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__22A6_1080_0015_5471(); return; }
	emu_movw(&emu_cx.x, 0xC8);
	emu_movw(&emu_di, emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_push(emu_di);
	emu_movw(&emu_es, emu_get_memory16(emu_ss, emu_bp,  0x10));
	emu_cmpws(&emu_bx.x, 0x28);
	if ((emu_flags.cf || emu_flags.zf)) { /* Unresolved jump */ emu_ip = 0x108F; emu_last_cs = 0x22A6; emu_last_ip = 0x108A; emu_last_length = 0x0026; emu_last_crc = 0xD3B0; emu_call(); return; }
	emu_movw(&emu_bx.x, 0x28);
	emu_orw(&emu_bx.x, emu_bx.x);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x1095; emu_last_cs = 0x22A6; emu_last_ip = 0x1091; emu_last_length = 0x0026; emu_last_crc = 0xD3B0; emu_call(); return; }
	/* Unresolved jump */ emu_ip = 0x10CD; emu_last_cs = 0x22A6; emu_last_ip = 0x1093; emu_last_length = 0x0026; emu_last_crc = 0xD3B0; emu_call();
}

/**
 * Decompiled function f__22A6_1080_0015_5471()
 *
 * @name f__22A6_1080_0015_5471
 * @implements 22A6:1080:0015:5471 ()
 *
 * Called From: 22A6:107B:0026:D3B0
 */
void f__22A6_1080_0015_5471()
{
	emu_movw(&emu_di, emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_push(emu_di);
	emu_movw(&emu_es, emu_get_memory16(emu_ss, emu_bp,  0x10));
	emu_cmpws(&emu_bx.x, 0x28);
	if ((emu_flags.cf || emu_flags.zf)) { f__22A6_108F_0006_A6A5(); return; }
	emu_movw(&emu_bx.x, 0x28);
	emu_orw(&emu_bx.x, emu_bx.x);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x1095; emu_last_cs = 0x22A6; emu_last_ip = 0x1091; emu_last_length = 0x0015; emu_last_crc = 0x5471; emu_call(); return; }
	/* Unresolved jump */ emu_ip = 0x10CD; emu_last_cs = 0x22A6; emu_last_ip = 0x1093; emu_last_length = 0x0015; emu_last_crc = 0x5471; emu_call();
}

/**
 * Decompiled function f__22A6_108F_0006_A6A5()
 *
 * @name f__22A6_108F_0006_A6A5
 * @implements 22A6:108F:0006:A6A5 ()
 *
 * Called From: 22A6:108A:0015:5471
 */
void f__22A6_108F_0006_A6A5()
{
	emu_orw(&emu_bx.x, emu_bx.x);
	if (!emu_flags.zf) { f__22A6_1095_0026_C042(); return; }
	/* Unresolved jump */ emu_ip = 0x10CD; emu_last_cs = 0x22A6; emu_last_ip = 0x1093; emu_last_length = 0x0006; emu_last_crc = 0xA6A5; emu_call();
}

/**
 * Decompiled function f__22A6_1095_0026_C042()
 *
 * @name f__22A6_1095_0026_C042
 * @implements 22A6:1095:0026:C042 ()
 *
 * Called From: 22A6:1091:0006:A6A5
 */
void f__22A6_1095_0026_C042()
{
	emu_cmpw(&emu_cx.x, 0xC8);
	if ((emu_flags.cf || emu_flags.zf)) { f__22A6_109E_001D_52A1(); return; }
	emu_movw(&emu_cx.x, 0xC8);
	emu_orw(&emu_cx.x, emu_cx.x);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x1093; emu_last_cs = 0x22A6; emu_last_ip = 0x10A0; emu_last_length = 0x0026; emu_last_crc = 0xC042; emu_call(); return; }
	emu_push(emu_bx.x);
	emu_movw(&emu_bx.x, emu_dx.x);
	emu_shlw(&emu_bx.x, 0x1);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_cs, emu_bx.x,  0x17D));
	emu_addw(&emu_si, emu_ax.x);
	emu_pop(&emu_bx.x);
	emu_movw(&emu_dx.x, emu_cx.x);
	emu_shlw(&emu_bx.x, 0x1);
	emu_shlw(&emu_bx.x, 0x1);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	/* Unresolved call */ emu_push(0x10BB); emu_ip = 0x0E22; emu_last_cs = 0x22A6; emu_last_ip = 0x10B8; emu_last_length = 0x0026; emu_last_crc = 0xC042; emu_call();
	f__22A6_10BB_0022_80E0();
}

/**
 * Decompiled function f__22A6_109E_001D_52A1()
 *
 * @name f__22A6_109E_001D_52A1
 * @implements 22A6:109E:001D:52A1 ()
 *
 * Called From: 22A6:1099:0026:C042
 */
void f__22A6_109E_001D_52A1()
{
	emu_orw(&emu_cx.x, emu_cx.x);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x1093; emu_last_cs = 0x22A6; emu_last_ip = 0x10A0; emu_last_length = 0x001D; emu_last_crc = 0x52A1; emu_call(); return; }
	emu_push(emu_bx.x);
	emu_movw(&emu_bx.x, emu_dx.x);
	emu_shlw(&emu_bx.x, 0x1);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_cs, emu_bx.x,  0x17D));
	emu_addw(&emu_si, emu_ax.x);
	emu_pop(&emu_bx.x);
	emu_movw(&emu_dx.x, emu_cx.x);
	emu_shlw(&emu_bx.x, 0x1);
	emu_shlw(&emu_bx.x, 0x1);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(0x10BB); f__22A6_0E22_0012_7FC4();
	f__22A6_10BB_0022_80E0();
}

/**
 * Decompiled function f__22A6_10BB_0022_80E0()
 *
 * @name f__22A6_10BB_0022_80E0
 * @implements 22A6:10BB:0022:80E0 ()
 *
 * Called From: 22A6:10BB:001D:52A1
 */
void f__22A6_10BB_0022_80E0()
{
	emu_movw(&emu_ds, emu_ax.x);
	emu_movw(&emu_ax.x, 0xA0);
	emu_subw(&emu_ax.x, emu_bx.x);
	emu_shlw(&emu_ax.x, 0x1);
	emu_movw(&emu_cx.x, emu_bx.x);
	emu_rep_movsw(emu_ds);
	emu_addw(&emu_si, emu_ax.x);
	emu_decw(&emu_dx.x);
	if (!emu_flags.zf) { f__22A6_10C4_0019_6051(); return; }
	emu_movw(&emu_ax.x, emu_di);
	emu_pop(&emu_di);
	emu_subw(&emu_ax.x, emu_di);
	emu_pop(&emu_es);
	emu_pop(&emu_ds);
	emu_pop(&emu_si);
	emu_pop(&emu_di);
	emu_pop(&emu_dx.x);
	emu_pop(&emu_cx.x);
	emu_pop(&emu_bx.x);
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__22A6_10C4_0019_6051()
 *
 * @name f__22A6_10C4_0019_6051
 * @implements 22A6:10C4:0019:6051 ()
 *
 * Called From: 22A6:10CB:0022:80E0
 * Called From: 22A6:10CB:0019:6051
 */
void f__22A6_10C4_0019_6051()
{
	emu_movw(&emu_cx.x, emu_bx.x);
	emu_rep_movsw(emu_ds);
	emu_addw(&emu_si, emu_ax.x);
	emu_decw(&emu_dx.x);
	if (!emu_flags.zf) { f__22A6_10C4_0019_6051(); return; }
	emu_movw(&emu_ax.x, emu_di);
	emu_pop(&emu_di);
	emu_subw(&emu_ax.x, emu_di);
	emu_pop(&emu_es);
	emu_pop(&emu_ds);
	emu_pop(&emu_si);
	emu_pop(&emu_di);
	emu_pop(&emu_dx.x);
	emu_pop(&emu_cx.x);
	emu_pop(&emu_bx.x);
	emu_movw(&emu_sp, emu_bp);
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
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x68), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x6A), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x6C), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x6E), emu_ax.x);
	emu_pop(&emu_ax.x);
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
 *
 * Called From: 259E:0036:001A:E253
 * Called From: 2BC2:007B:0024:8300
 */
void f__22A6_1102_004C_B069()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_ax.x);
	emu_push(emu_bx.x);
	emu_push(emu_cx.x);
	emu_push(emu_es);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_push(emu_ds);
	emu_cld();
	emu_movw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ds, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_andws(&emu_bx.x, 0xF);
	emu_movw(&emu_cx.x, emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_andws(&emu_cx.x, 0xF);
	emu_cmpw(&emu_cx.x, emu_bx.x);
	if ((emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x1145; emu_last_cs = 0x22A6; emu_last_ip = 0x1121; emu_last_length = 0x004C; emu_last_crc = 0xB069; emu_call(); return; }
	emu_subw(&emu_cx.x, emu_bx.x);
	emu_incw(&emu_cx.x);
	emu_movw(&emu_ax.x, emu_cs);
	emu_movw(&emu_es, emu_ax.x);
	emu_movw(&emu_di, 0x87);
	emu_addw(&emu_di, emu_bx.x);
	emu_shlw(&emu_bx.x, 0x1);
	emu_shlw(&emu_bx.x, 0x1);
	emu_shlw(&emu_bx.x, 0x1);
	emu_shlw(&emu_bx.x, 0x1);
	emu_addw(&emu_bx.x, 0x87);
	emu_lodsb(emu_ds);
	emu_stosb();
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), emu_ax.l);
	emu_addws(&emu_bx.x, 0x10);
	if (--emu_cx.x != 0) { f__22A6_113B_0013_B15D(); return; }
	emu_pop(&emu_ds);
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_pop(&emu_es);
	emu_pop(&emu_cx.x);
	emu_pop(&emu_bx.x);
	emu_pop(&emu_ax.x);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__22A6_113B_0013_B15D()
 *
 * @name f__22A6_113B_0013_B15D
 * @implements 22A6:113B:0013:B15D ()
 *
 * Called From: 22A6:1143:004C:B069
 * Called From: 22A6:1143:0013:B15D
 */
void f__22A6_113B_0013_B15D()
{
	emu_lodsb(emu_ds);
	emu_stosb();
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), emu_ax.l);
	emu_addws(&emu_bx.x, 0x10);
	if (--emu_cx.x != 0) { f__22A6_113B_0013_B15D(); return; }
	emu_pop(&emu_ds);
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_pop(&emu_es);
	emu_pop(&emu_cx.x);
	emu_pop(&emu_bx.x);
	emu_pop(&emu_ax.x);
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
 *
 * Called From: 1587:0071:001D:BB2F
 */
void f__22A6_1158_0069_1890()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_ax.x);
	emu_push(emu_bx.x);
	emu_push(emu_cx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x347), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x349), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_cmpw(&emu_ax.x, emu_bx.x);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x11C1; emu_last_cs = 0x22A6; emu_last_ip = 0x1174; emu_last_length = 0x0069; emu_last_crc = 0x1890; emu_call(); return; }
	emu_cmpw(&emu_ax.x, 0x3);
	if (!(emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x11C1; emu_last_cs = 0x22A6; emu_last_ip = 0x1179; emu_last_length = 0x0069; emu_last_crc = 0x1890; emu_call(); return; }
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x34B), 0x1);
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x34D), 0x1);
	emu_movw(&emu_cx.x, emu_ax.x);
	emu_andws(&emu_cx.x, 0x2);
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x33F), emu_cx.x);
	emu_movw(&emu_cx.x, emu_ax.x);
	emu_rcrw(&emu_cx.x, 0x1);
	emu_shlw(&emu_cx.x, 0x1);
	emu_rclw(&emu_cx.x, 0x1);
	emu_shlw(&emu_cx.x, 0x1);
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x341), emu_cx.x);
	emu_movw(&emu_cx.x, emu_ax.x);
	emu_shlw(&emu_cx.x, 0x1);
	emu_shlw(&emu_cx.x, 0x1);
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x33D), emu_cx.x);
	emu_shlw(&emu_cx.x, 0x1);
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x33B), emu_cx.x);
	emu_negw(&emu_cx.x, emu_cx.x);
	emu_addw(&emu_cx.x, 0x140);
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x339), emu_cx.x);
	f__22A6_11F2_000E_79F5(); return;
}

/**
 * Decompiled function f__22A6_11F2_000E_79F5()
 *
 * @name f__22A6_11F2_000E_79F5
 * @implements 22A6:11F2:000E:79F5 ()
 *
 * Called From: 22A6:11BF:0069:1890
 */
void f__22A6_11F2_000E_79F5()
{
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x345), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x343), emu_bx.x);
	emu_pop(&emu_cx.x);
	emu_pop(&emu_bx.x);
	emu_pop(&emu_ax.x);
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
 *
 * Called From: 06F7:0906:0013:E47B
 */
void f__22A6_1200_007B_0356()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_ax.x);
	emu_push(emu_cx.x);
	emu_push(emu_dx.x);
	emu_push(emu_es);
	emu_movw(&emu_cx.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, 0x40);
	emu_movw(&emu_es, emu_ax.x);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_es, 0x00,  0x63));
	emu_addb(&emu_dx.l, 0x6);
	emu_inb(&emu_ax.l, emu_dx.x);
	emu_testb(&emu_ax.l, 0x8);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x1217; emu_last_cs = 0x22A6; emu_last_ip = 0x121A; emu_last_length = 0x007B; emu_last_crc = 0x0356; emu_call(); return; }
	emu_inb(&emu_ax.l, emu_dx.x);
	emu_testb(&emu_ax.l, 0x8);
	if (!emu_flags.zf) { f__22A6_121C_005F_FFCA(); return; }
	emu_cli();
	emu_subb(&emu_dx.l, 0x6);
	emu_movb(&emu_ax.h, 0x1);
	emu_movb(&emu_ax.l, 0xC);
	emu_outb(emu_dx.x, emu_ax.l);
	emu_xchgb(&emu_ax.l, &emu_ax.h);
	emu_incw(&emu_dx.x);
	emu_outb(emu_dx.x, emu_ax.l);
	emu_xchgb(&emu_ax.l, &emu_ax.h);
	emu_decw(&emu_dx.x);
	emu_movb(&emu_ax.h, 0x40);
	emu_incb(&emu_ax.l);
	emu_outb(emu_dx.x, emu_ax.l);
	emu_xchgb(&emu_ax.l, &emu_ax.h);
	emu_incw(&emu_dx.x);
	emu_outb(emu_dx.x, emu_ax.l);
	emu_xchgb(&emu_ax.l, &emu_ax.h);
	emu_sti();
	emu_addb(&emu_dx.l, 0x5);
	emu_inb(&emu_ax.l, emu_dx.x);
	emu_testb(&emu_ax.l, 0x8);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x1240; emu_last_cs = 0x22A6; emu_last_ip = 0x1243; emu_last_length = 0x007B; emu_last_crc = 0x0356; emu_call(); return; }
	emu_inb(&emu_ax.l, emu_dx.x);
	emu_testb(&emu_ax.l, 0x8);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x1245; emu_last_cs = 0x22A6; emu_last_ip = 0x1248; emu_last_length = 0x007B; emu_last_crc = 0x0356; emu_call(); return; }
	emu_inb(&emu_ax.l, emu_dx.x);
	emu_testb(&emu_ax.l, 0x8);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x124A; emu_last_cs = 0x22A6; emu_last_ip = 0x124D; emu_last_length = 0x007B; emu_last_crc = 0x0356; emu_call(); return; }
	emu_inb(&emu_ax.l, emu_dx.x);
	emu_testb(&emu_ax.l, 0x8);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x124F; emu_last_cs = 0x22A6; emu_last_ip = 0x1252; emu_last_length = 0x007B; emu_last_crc = 0x0356; emu_call(); return; }
	emu_cli();
	emu_subb(&emu_dx.l, 0x6);
	emu_movb(&emu_ax.h, 0x0);
	emu_movb(&emu_ax.l, 0xC);
	emu_outb(emu_dx.x, emu_ax.l);
	emu_xchgb(&emu_ax.l, &emu_ax.h);
	emu_incw(&emu_dx.x);
	emu_outb(emu_dx.x, emu_ax.l);
	emu_xchgb(&emu_ax.l, &emu_ax.h);
	emu_decw(&emu_dx.x);
	emu_movb(&emu_ax.h, 0x0);
	emu_incb(&emu_ax.l);
	emu_outb(emu_dx.x, emu_ax.l);
	emu_xchgb(&emu_ax.l, &emu_ax.h);
	emu_incw(&emu_dx.x);
	emu_outb(emu_dx.x, emu_ax.l);
	emu_xchgb(&emu_ax.l, &emu_ax.h);
	emu_sti();
	emu_addb(&emu_dx.l, 0x5);
	if (--emu_cx.x != 0) { /* Unresolved jump */ emu_ip = 0x1217; emu_last_cs = 0x22A6; emu_last_ip = 0x1273; emu_last_length = 0x007B; emu_last_crc = 0x0356; emu_call(); }
	emu_pop(&emu_es);
	emu_pop(&emu_dx.x);
	emu_pop(&emu_cx.x);
	emu_pop(&emu_ax.x);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__22A6_121C_005F_FFCA()
 *
 * @name f__22A6_121C_005F_FFCA
 * @implements 22A6:121C:005F:FFCA ()
 *
 * Called From: 22A6:121F:007B:0356
 * Called From: 22A6:121F:005F:FFCA
 */
void f__22A6_121C_005F_FFCA()
{
	emu_inb(&emu_ax.l, emu_dx.x);
	emu_testb(&emu_ax.l, 0x8);
	if (!emu_flags.zf) { f__22A6_121C_005F_FFCA(); return; }
	emu_cli();
	emu_subb(&emu_dx.l, 0x6);
	emu_movb(&emu_ax.h, 0x1);
	emu_movb(&emu_ax.l, 0xC);
	emu_outb(emu_dx.x, emu_ax.l);
	emu_xchgb(&emu_ax.l, &emu_ax.h);
	emu_incw(&emu_dx.x);
	emu_outb(emu_dx.x, emu_ax.l);
	emu_xchgb(&emu_ax.l, &emu_ax.h);
	emu_decw(&emu_dx.x);
	emu_movb(&emu_ax.h, 0x40);
	emu_incb(&emu_ax.l);
	emu_outb(emu_dx.x, emu_ax.l);
	emu_xchgb(&emu_ax.l, &emu_ax.h);
	emu_incw(&emu_dx.x);
	emu_outb(emu_dx.x, emu_ax.l);
	emu_xchgb(&emu_ax.l, &emu_ax.h);
	emu_sti();
	emu_addb(&emu_dx.l, 0x5);
	emu_inb(&emu_ax.l, emu_dx.x);
	emu_testb(&emu_ax.l, 0x8);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x1240; emu_last_cs = 0x22A6; emu_last_ip = 0x1243; emu_last_length = 0x005F; emu_last_crc = 0xFFCA; emu_call(); return; }
	emu_inb(&emu_ax.l, emu_dx.x);
	emu_testb(&emu_ax.l, 0x8);
	if (!emu_flags.zf) { f__22A6_1245_0036_A3B9(); return; }
	emu_inb(&emu_ax.l, emu_dx.x);
	emu_testb(&emu_ax.l, 0x8);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x124A; emu_last_cs = 0x22A6; emu_last_ip = 0x124D; emu_last_length = 0x005F; emu_last_crc = 0xFFCA; emu_call(); return; }
	emu_inb(&emu_ax.l, emu_dx.x);
	emu_testb(&emu_ax.l, 0x8);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x124F; emu_last_cs = 0x22A6; emu_last_ip = 0x1252; emu_last_length = 0x005F; emu_last_crc = 0xFFCA; emu_call(); return; }
	emu_cli();
	emu_subb(&emu_dx.l, 0x6);
	emu_movb(&emu_ax.h, 0x0);
	emu_movb(&emu_ax.l, 0xC);
	emu_outb(emu_dx.x, emu_ax.l);
	emu_xchgb(&emu_ax.l, &emu_ax.h);
	emu_incw(&emu_dx.x);
	emu_outb(emu_dx.x, emu_ax.l);
	emu_xchgb(&emu_ax.l, &emu_ax.h);
	emu_decw(&emu_dx.x);
	emu_movb(&emu_ax.h, 0x0);
	emu_incb(&emu_ax.l);
	emu_outb(emu_dx.x, emu_ax.l);
	emu_xchgb(&emu_ax.l, &emu_ax.h);
	emu_incw(&emu_dx.x);
	emu_outb(emu_dx.x, emu_ax.l);
	emu_xchgb(&emu_ax.l, &emu_ax.h);
	emu_sti();
	emu_addb(&emu_dx.l, 0x5);
	if (--emu_cx.x != 0) { /* Unresolved jump */ emu_ip = 0x1217; emu_last_cs = 0x22A6; emu_last_ip = 0x1273; emu_last_length = 0x005F; emu_last_crc = 0xFFCA; emu_call(); }
	emu_pop(&emu_es);
	emu_pop(&emu_dx.x);
	emu_pop(&emu_cx.x);
	emu_pop(&emu_ax.x);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__22A6_1245_0036_A3B9()
 *
 * @name f__22A6_1245_0036_A3B9
 * @implements 22A6:1245:0036:A3B9 ()
 *
 * Called From: 22A6:1248:005F:FFCA
 * Called From: 22A6:1248:0036:A3B9
 */
void f__22A6_1245_0036_A3B9()
{
	emu_inb(&emu_ax.l, emu_dx.x);
	emu_testb(&emu_ax.l, 0x8);
	if (!emu_flags.zf) { f__22A6_1245_0036_A3B9(); return; }
	emu_inb(&emu_ax.l, emu_dx.x);
	emu_testb(&emu_ax.l, 0x8);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x124A; emu_last_cs = 0x22A6; emu_last_ip = 0x124D; emu_last_length = 0x0036; emu_last_crc = 0xA3B9; emu_call(); return; }
	emu_inb(&emu_ax.l, emu_dx.x);
	emu_testb(&emu_ax.l, 0x8);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x124F; emu_last_cs = 0x22A6; emu_last_ip = 0x1252; emu_last_length = 0x0036; emu_last_crc = 0xA3B9; emu_call(); return; }
	emu_cli();
	emu_subb(&emu_dx.l, 0x6);
	emu_movb(&emu_ax.h, 0x0);
	emu_movb(&emu_ax.l, 0xC);
	emu_outb(emu_dx.x, emu_ax.l);
	emu_xchgb(&emu_ax.l, &emu_ax.h);
	emu_incw(&emu_dx.x);
	emu_outb(emu_dx.x, emu_ax.l);
	emu_xchgb(&emu_ax.l, &emu_ax.h);
	emu_decw(&emu_dx.x);
	emu_movb(&emu_ax.h, 0x0);
	emu_incb(&emu_ax.l);
	emu_outb(emu_dx.x, emu_ax.l);
	emu_xchgb(&emu_ax.l, &emu_ax.h);
	emu_incw(&emu_dx.x);
	emu_outb(emu_dx.x, emu_ax.l);
	emu_xchgb(&emu_ax.l, &emu_ax.h);
	emu_sti();
	emu_addb(&emu_dx.l, 0x5);
	if (--emu_cx.x != 0) { /* Unresolved jump */ emu_ip = 0x1217; emu_last_cs = 0x22A6; emu_last_ip = 0x1273; emu_last_length = 0x0036; emu_last_crc = 0xA3B9; emu_call(); }
	emu_pop(&emu_es);
	emu_pop(&emu_dx.x);
	emu_pop(&emu_cx.x);
	emu_pop(&emu_ax.x);
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
 *
 * Called From: 10E4:0343:001C:5313
 * Called From: 2B4C:0064:001A:FD04
 * Called From: B53B:00F2:0051:C06D
 */
void f__22A6_127B_0036_F8C9()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_cx.x);
	emu_push(emu_dx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpw(&emu_ax.x, 0x1);
	if (!(emu_flags.sf != emu_flags.of)) { f__22A6_128B_0026_020B(); return; }
	emu_movw(&emu_ax.x, 0x1);
	emu_cmpw(&emu_ax.x, 0x28);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x1293; emu_last_cs = 0x22A6; emu_last_ip = 0x128E; emu_last_length = 0x0036; emu_last_crc = 0xF8C9; emu_call(); return; }
	emu_movw(&emu_ax.x, 0x28);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_cmpws(&emu_dx.x, 0x1);
	if (!(emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x129E; emu_last_cs = 0x22A6; emu_last_ip = 0x1299; emu_last_length = 0x0036; emu_last_crc = 0xF8C9; emu_call(); return; }
	emu_movw(&emu_dx.x, 0x1);
	emu_cmpw(&emu_dx.x, 0xC8);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x12A7; emu_last_cs = 0x22A6; emu_last_ip = 0x12A2; emu_last_length = 0x0036; emu_last_crc = 0xF8C9; emu_call(); return; }
	emu_movw(&emu_dx.x, 0xC8);
	emu_mulw(&emu_ax.x, emu_dx.x);
	emu_movb(&emu_cx.l, 0x3);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_pop(&emu_dx.x);
	emu_pop(&emu_cx.x);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__22A6_128B_0026_020B()
 *
 * @name f__22A6_128B_0026_020B
 * @implements 22A6:128B:0026:020B ()
 *
 * Called From: 22A6:1286:0036:F8C9
 */
void f__22A6_128B_0026_020B()
{
	emu_cmpw(&emu_ax.x, 0x28);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__22A6_1293_001E_64A3(); return; }
	emu_movw(&emu_ax.x, 0x28);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_cmpws(&emu_dx.x, 0x1);
	if (!(emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x129E; emu_last_cs = 0x22A6; emu_last_ip = 0x1299; emu_last_length = 0x0026; emu_last_crc = 0x020B; emu_call(); return; }
	emu_movw(&emu_dx.x, 0x1);
	emu_cmpw(&emu_dx.x, 0xC8);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x12A7; emu_last_cs = 0x22A6; emu_last_ip = 0x12A2; emu_last_length = 0x0026; emu_last_crc = 0x020B; emu_call(); return; }
	emu_movw(&emu_dx.x, 0xC8);
	emu_mulw(&emu_ax.x, emu_dx.x);
	emu_movb(&emu_cx.l, 0x3);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_pop(&emu_dx.x);
	emu_pop(&emu_cx.x);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__22A6_1293_001E_64A3()
 *
 * @name f__22A6_1293_001E_64A3
 * @implements 22A6:1293:001E:64A3 ()
 *
 * Called From: 22A6:128E:0026:020B
 */
void f__22A6_1293_001E_64A3()
{
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_cmpws(&emu_dx.x, 0x1);
	if (!(emu_flags.sf != emu_flags.of)) { f__22A6_129E_0013_9D91(); return; }
	emu_movw(&emu_dx.x, 0x1);
	emu_cmpw(&emu_dx.x, 0xC8);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x12A7; emu_last_cs = 0x22A6; emu_last_ip = 0x12A2; emu_last_length = 0x001E; emu_last_crc = 0x64A3; emu_call(); return; }
	emu_movw(&emu_dx.x, 0xC8);
	emu_mulw(&emu_ax.x, emu_dx.x);
	emu_movb(&emu_cx.l, 0x3);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_pop(&emu_dx.x);
	emu_pop(&emu_cx.x);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__22A6_129E_0013_9D91()
 *
 * @name f__22A6_129E_0013_9D91
 * @implements 22A6:129E:0013:9D91 ()
 *
 * Called From: 22A6:1299:001E:64A3
 */
void f__22A6_129E_0013_9D91()
{
	emu_cmpw(&emu_dx.x, 0xC8);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__22A6_12A7_000A_4906(); return; }
	emu_movw(&emu_dx.x, 0xC8);
	emu_mulw(&emu_ax.x, emu_dx.x);
	emu_movb(&emu_cx.l, 0x3);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_pop(&emu_dx.x);
	emu_pop(&emu_cx.x);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__22A6_12A7_000A_4906()
 *
 * @name f__22A6_12A7_000A_4906
 * @implements 22A6:12A7:000A:4906 ()
 *
 * Called From: 22A6:12A2:0013:9D91
 */
void f__22A6_12A7_000A_4906()
{
	emu_mulw(&emu_ax.x, emu_dx.x);
	emu_movb(&emu_cx.l, 0x3);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_pop(&emu_dx.x);
	emu_pop(&emu_cx.x);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

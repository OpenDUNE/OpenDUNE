/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__25C4_000E_0019_12FF()
 *
 * @name f__25C4_000E_0019_12FF
 * @implements 25C4:000E:0019:12FF ()
 *
 * Called From: B480:029D:0018:576D
 */
void f__25C4_000E_0019_12FF()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0xC);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_di, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_bx.x, emu_di);
	emu_cmpws(&emu_bx.x, 0x5);
	if (!(emu_flags.cf || emu_flags.zf)) { /* Unresolved jump */ emu_ip = 0x0049; emu_last_cs = 0x25C4; emu_last_ip = 0x001E; emu_last_length = 0x0019; emu_last_crc = 0x12FF; emu_call(); return; }
	emu_shlw(&emu_bx.x, 0x1);

	/* Jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_cs, emu_bx.x,  0x410);
	switch (emu_ip) {
		case 0x002D: f__25C4_002D_0013_0723(); return;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x25C4; emu_last_ip = 0x0022; emu_last_length = 0x0019; emu_last_crc = 0x12FF;
			emu_call();
			return;
	}
}

/**
 * Decompiled function f__25C4_002D_0013_0723()
 *
 * @name f__25C4_002D_0013_0723
 * @implements 25C4:002D:0013:0723 ()
 *
 * Called From: 25C4:0022:0019:12FF
 */
void f__25C4_002D_0013_0723()
{
	emu_movw(&emu_ax.x, 0xFA00);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0xA000);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_cs); emu_push(0x0040); emu_cs = 0x01F7; f__01F7_2947_0014_02B8();
	f__25C4_0040_0005_872E();
}

/**
 * Decompiled function f__25C4_0040_0005_872E()
 *
 * @name f__25C4_0040_0005_872E
 * @implements 25C4:0040:0005:872E ()
 *
 * Called From: 25C4:0040:0013:0723
 */
void f__25C4_0040_0005_872E()
{
	emu_addws(&emu_sp, 0x8);
	f__25C4_0049_000B_50EF(); return;
}

/**
 * Decompiled function f__25C4_0049_000B_50EF()
 *
 * @name f__25C4_0049_000B_50EF
 * @implements 25C4:0049:000B:50EF ()
 *
 * Called From: 25C4:0043:0005:872E
 */
void f__25C4_0049_000B_50EF()
{
	emu_cmpws(&emu_di, 0x8);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x00C1; emu_last_cs = 0x25C4; emu_last_ip = 0x004C; emu_last_length = 0x000B; emu_last_crc = 0x50EF; emu_call(); return; }
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x0054); emu_cs = 0x263B; f__263B_002F_0016_FDB0();
	f__25C4_0054_0006_F43B();
}

/**
 * Decompiled function f__25C4_0054_0006_F43B()
 *
 * @name f__25C4_0054_0006_F43B
 * @implements 25C4:0054:0006:F43B ()
 *
 * Called From: 25C4:0054:000B:50EF
 */
void f__25C4_0054_0006_F43B()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_cs); emu_push(0x005A); emu_cs = 0x29A3; f__29A3_0224_0009_AA5D();
	f__25C4_005A_0018_5796();
}

/**
 * Decompiled function f__25C4_005A_0018_5796()
 *
 * @name f__25C4_005A_0018_5796
 * @implements 25C4:005A:0018:5796 ()
 *
 * Called From: 25C4:005A:0006:F43B
 */
void f__25C4_005A_0018_5796()
{
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x6F22);
	emu_push(emu_ax.x);
	emu_movw(&emu_bx.x, emu_di);
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_push(emu_get_memory16(emu_ds, emu_bx.x,  0x6DB4));
	emu_push(emu_get_memory16(emu_ds, emu_bx.x,  0x6DB2));
	emu_push(emu_cs); emu_push(0x0072); emu_cs = 0x22A3; f__22A3_000D_0010_9291();
	f__25C4_0072_0010_002D();
}

/**
 * Decompiled function f__25C4_0072_0010_002D()
 *
 * @name f__25C4_0072_0010_002D
 * @implements 25C4:0072:0010:002D ()
 *
 * Called From: 25C4:0072:0018:5796
 */
void f__25C4_0072_0010_002D()
{
	emu_addws(&emu_sp, 0x8);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.zf) { f__25C4_00C1_0009_905A(); return; }
	emu_movw(&emu_ax.x, 0x9);
	emu_push(emu_ax.x);
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x0082); emu_cs = 0x263B; emu_ip = 0x002F; emu_last_cs = 0x25C4; emu_last_ip = 0x007D; emu_last_length = 0x0010; emu_last_crc = 0x002D; emu_call();
	/* Unresolved jump */ emu_ip = 0x0082; emu_last_cs = 0x25C4; emu_last_ip = 0x0082; emu_last_length = 0x0010; emu_last_crc = 0x002D; emu_call();
}

/**
 * Decompiled function f__25C4_00BE_0003_DCAB()
 *
 * @name f__25C4_00BE_0003_DCAB
 * @implements 25C4:00BE:0003:DCAB ()
 *
 * Called From: 25C4:03ED:0007:03AB
 */
void f__25C4_00BE_0003_DCAB()
{
	f__25C4_03F0_0006_F7CE(); return;
}

/**
 * Decompiled function f__25C4_00C1_0009_905A()
 *
 * @name f__25C4_00C1_0009_905A
 * @implements 25C4:00C1:0009:905A ()
 *
 * Called From: 25C4:0077:0010:002D
 */
void f__25C4_00C1_0009_905A()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0xC), 0x0);
	if (!emu_flags.zf) { f__25C4_00CA_0010_5BCF(); return; }
	/* Unresolved jump */ emu_ip = 0x01F7; emu_last_cs = 0x25C4; emu_last_ip = 0x00C7; emu_last_length = 0x0009; emu_last_crc = 0x905A; emu_call();
}

/**
 * Decompiled function f__25C4_00CA_0010_5BCF()
 *
 * @name f__25C4_00CA_0010_5BCF
 * @implements 25C4:00CA:0010:5BCF ()
 *
 * Called From: 25C4:00C5:0009:905A
 */
void f__25C4_00CA_0010_5BCF()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x0);
	emu_movw(&emu_si, 0x2);
	f__25C4_016D_0008_D3AD(); return;
}

/**
 * Decompiled function f__25C4_00DA_0041_885A()
 *
 * @name f__25C4_00DA_0041_885A
 * @implements 25C4:00DA:0041:885A ()
 *
 * Called From: 25C4:0172:0008:D3AD
 * Called From: 25C4:0172:003F:00BE
 */
void f__25C4_00DA_0041_885A()
{
	emu_movw(&emu_bx.x, emu_si);
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, emu_bx.x,  0x6CD9));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, emu_bx.x,  0x6CD7));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_dx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_addws(&emu_dx.x, 0xF);
	emu_adcw(&emu_ax.x, 0x0);
	emu_andws(&emu_dx.x, 0xF0);
	emu_andw(&emu_ax.x, 0xFFFF);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_dx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_andws(&emu_dx.x, 0x0);
	emu_andw(&emu_ax.x, 0xFF00);
	emu_orw(&emu_dx.x, emu_ax.x);
	if (emu_flags.zf) { f__25C4_0136_003F_00BE(); return; }
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x011B); emu_cs = 0x3500; emu_ip = 0x0020; emu_last_cs = 0x25C4; emu_last_ip = 0x0116; emu_last_length = 0x0041; emu_last_crc = 0x885A; emu_call();
	/* Unresolved jump */ emu_ip = 0x011B; emu_last_cs = 0x25C4; emu_last_ip = 0x011B; emu_last_length = 0x0041; emu_last_crc = 0x885A; emu_call();
}

/**
 * Decompiled function f__25C4_0136_003F_00BE()
 *
 * @name f__25C4_0136_003F_00BE
 * @implements 25C4:0136:003F:00BE ()
 *
 * Called From: 25C4:0114:0041:885A
 */
void f__25C4_0136_003F_00BE()
{
	emu_movw(&emu_bx.x, emu_si);
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_movw(&emu_get_memory16(emu_ds, emu_bx.x,  0x6CD9), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, emu_bx.x,  0x6CD7), emu_dx.x);
	emu_movw(&emu_bx.x, emu_si);
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_movw(&emu_get_memory16(emu_ds, emu_bx.x,  0x6CD5), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, emu_bx.x,  0x6CD3), emu_dx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_dx.x);
	emu_adcw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_addws(&emu_si, 0x2);
	emu_cmpws(&emu_si, 0x10);
	if (!(emu_flags.sf != emu_flags.of)) { f__25C4_0175_0012_C097(); return; }
	f__25C4_00DA_0041_885A(); return;
}

/**
 * Decompiled function f__25C4_016D_0008_D3AD()
 *
 * @name f__25C4_016D_0008_D3AD
 * @implements 25C4:016D:0008:D3AD ()
 *
 * Called From: 25C4:00D7:0010:5BCF
 */
void f__25C4_016D_0008_D3AD()
{
	emu_cmpws(&emu_si, 0x10);
	if (!(emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x0175; emu_last_cs = 0x25C4; emu_last_ip = 0x0170; emu_last_length = 0x0008; emu_last_crc = 0xD3AD; emu_call(); return; }
	f__25C4_00DA_0041_885A(); return;
}

/**
 * Decompiled function f__25C4_0175_0012_C097()
 *
 * @name f__25C4_0175_0012_C097
 * @implements 25C4:0175:0012:C097 ()
 *
 * Called From: 25C4:0170:003F:00BE
 */
void f__25C4_0175_0012_C097()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00, -0x670F));
	emu_orw(&emu_ax.x, 0x30);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x0187); emu_cs = 0x23E1; f__23E1_0004_0014_2BC0();
	f__25C4_0187_000E_B643();
}

/**
 * Decompiled function f__25C4_0187_000E_B643()
 *
 * @name f__25C4_0187_000E_B643
 * @implements 25C4:0187:000E:B643 ()
 *
 * Called From: 25C4:0187:0012:C097
 */
void f__25C4_0187_000E_B643()
{
	emu_addws(&emu_sp, 0x6);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax.x);
	emu_movw(&emu_si, 0x2);
	f__25C4_01F0_0007_C038(); return;
}

/**
 * Decompiled function f__25C4_0195_003F_BA75()
 *
 * @name f__25C4_0195_003F_BA75
 * @implements 25C4:0195:003F:BA75 ()
 *
 * Called From: 25C4:01F3:0007:C038
 * Called From: 25C4:01F3:0012:6D17
 * Called From: 25C4:01F3:000A:E29B
 */
void f__25C4_0195_003F_BA75()
{
	emu_movw(&emu_bx.x, emu_si);
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, emu_bx.x,  0x6CD3));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ds, emu_bx.x,  0x6CD5));
	if (emu_flags.zf) { f__25C4_01ED_000A_E29B(); return; }
	emu_movw(&emu_bx.x, emu_si);
	emu_shlw(&emu_bx.x, 0x1);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movw(&emu_get_memory16(emu_ds, emu_bx.x,  0x6C95), emu_ax.x);
	emu_movw(&emu_bx.x, emu_si);
	emu_shlw(&emu_bx.x, 0x1);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movw(&emu_get_memory16(emu_ds, emu_bx.x,  0x6C93), emu_ax.x);
	emu_movw(&emu_bx.x, emu_si);
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_cx.x, emu_get_memory16(emu_ds, emu_bx.x,  0x6CD5));
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ds, emu_bx.x,  0x6CD3));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs); emu_push(0x01D4); emu_cs = 0x01F7; f__01F7_05F0_0010_6415();
	f__25C4_01D4_0011_FE22();
}

/**
 * Decompiled function f__25C4_01D4_0011_FE22()
 *
 * @name f__25C4_01D4_0011_FE22
 * @implements 25C4:01D4:0011:FE22 ()
 *
 * Called From: 25C4:01D4:003F:BA75
 */
void f__25C4_01D4_0011_FE22()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs); emu_push(0x01E5); emu_cs = 0x2B0E; f__2B0E_00D0_0022_EC76();
	f__25C4_01E5_0012_6D17();
}

/**
 * Decompiled function f__25C4_01E5_0012_6D17()
 *
 * @name f__25C4_01E5_0012_6D17
 * @implements 25C4:01E5:0012:6D17 ()
 *
 * Called From: 25C4:01E5:0011:FE22
 */
void f__25C4_01E5_0012_6D17()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax.x);
	emu_addws(&emu_si, 0x2);
	emu_cmpws(&emu_si, 0x10);
	if ((emu_flags.sf != emu_flags.of)) { f__25C4_0195_003F_BA75(); return; }
	/* Unresolved jump */ emu_ip = 0x0252; emu_last_cs = 0x25C4; emu_last_ip = 0x01F5; emu_last_length = 0x0012; emu_last_crc = 0x6D17; emu_call();
}

/**
 * Decompiled function f__25C4_01ED_000A_E29B()
 *
 * @name f__25C4_01ED_000A_E29B
 * @implements 25C4:01ED:000A:E29B ()
 *
 * Called From: 25C4:01A3:003F:BA75
 */
void f__25C4_01ED_000A_E29B()
{
	emu_addws(&emu_si, 0x2);
	emu_cmpws(&emu_si, 0x10);
	if ((emu_flags.sf != emu_flags.of)) { f__25C4_0195_003F_BA75(); return; }
	f__25C4_0252_000E_9CBF(); return;
}

/**
 * Decompiled function f__25C4_01F0_0007_C038()
 *
 * @name f__25C4_01F0_0007_C038
 * @implements 25C4:01F0:0007:C038 ()
 *
 * Called From: 25C4:0193:000E:B643
 */
void f__25C4_01F0_0007_C038()
{
	emu_cmpws(&emu_si, 0x10);
	if ((emu_flags.sf != emu_flags.of)) { f__25C4_0195_003F_BA75(); return; }
	/* Unresolved jump */ emu_ip = 0x0252; emu_last_cs = 0x25C4; emu_last_ip = 0x01F5; emu_last_length = 0x0007; emu_last_crc = 0xC038; emu_call();
}

/**
 * Decompiled function f__25C4_0252_000E_9CBF()
 *
 * @name f__25C4_0252_000E_9CBF
 * @implements 25C4:0252:000E:9CBF ()
 *
 * Called From: 25C4:01F5:000A:E29B
 */
void f__25C4_0252_000E_9CBF()
{
	emu_movw(&emu_bx.x, emu_di);
	emu_cmpws(&emu_bx.x, 0x8);
	if (!(emu_flags.cf || emu_flags.zf)) { /* Unresolved jump */ emu_ip = 0x02BE; emu_last_cs = 0x25C4; emu_last_ip = 0x0257; emu_last_length = 0x000E; emu_last_crc = 0x9CBF; emu_call(); return; }
	emu_shlw(&emu_bx.x, 0x1);

	/* Jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_cs, emu_bx.x,  0x3FE);
	switch (emu_ip) {
		case 0x02B7: f__25C4_02B7_0005_827A(); return;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x25C4; emu_last_ip = 0x025B; emu_last_length = 0x000E; emu_last_crc = 0x9CBF;
			emu_call();
			return;
	}
}

/**
 * Decompiled function f__25C4_0263_0008_C300()
 *
 * @name f__25C4_0263_0008_C300
 * @implements 25C4:0263:0008:C300 ()
 *
 * Called From: 25C4:02BA:0005:827A
 */
void f__25C4_0263_0008_C300()
{
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x6C95), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x6C93), emu_ax.x);
	f__25C4_02BE_000F_595C(); return;
}

/**
 * Decompiled function f__25C4_02B7_0005_827A()
 *
 * @name f__25C4_02B7_0005_827A
 * @implements 25C4:02B7:0005:827A ()
 *
 * Called From: 25C4:025B:000E:9CBF
 */
void f__25C4_02B7_0005_827A()
{
	emu_movw(&emu_ax.x, 0xA000);
	f__25C4_0263_0008_C300(); return;
}

/**
 * Decompiled function f__25C4_02BE_000F_595C()
 *
 * @name f__25C4_02BE_000F_595C
 * @implements 25C4:02BE:000F:595C ()
 *
 * Called From: 25C4:0269:0008:C300
 */
void f__25C4_02BE_000F_595C()
{
	emu_cmpws(&emu_di, 0x8);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0335; emu_last_cs = 0x25C4; emu_last_ip = 0x02C1; emu_last_length = 0x000F; emu_last_crc = 0x595C; emu_call(); return; }
	emu_movw(&emu_ax.x, 0x353F);
	emu_movw(&emu_es, emu_ax.x);

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_es, 0x00,  0x6640);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_es, 0x00,  0x6642);
	emu_push(0x02CD);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A60796: f__22A6_0796_000B_9035(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x25C4; emu_last_ip = 0x02C8; emu_last_length = 0x000F; emu_last_crc = 0x595C;
			emu_call();
			return;
	}
	f__25C4_02CD_0013_8B6C();
}

/**
 * Decompiled function f__25C4_02CD_0013_8B6C()
 *
 * @name f__25C4_02CD_0013_8B6C
 * @implements 25C4:02CD:0013:8B6C ()
 *
 * Called From: 25C4:02CD:000F:595C
 */
void f__25C4_02CD_0013_8B6C()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0335; emu_last_cs = 0x25C4; emu_last_ip = 0x02D3; emu_last_length = 0x0013; emu_last_crc = 0x8B6C; emu_call(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_cs); emu_push(0x02E0); emu_cs = 0x256D; f__256D_0004_001C_9F23();
	f__25C4_02E0_001B_40E8();
}

/**
 * Decompiled function f__25C4_02E0_001B_40E8()
 *
 * @name f__25C4_02E0_001B_40E8
 * @implements 25C4:02E0:001B:40E8 ()
 *
 * Called From: 25C4:02E0:0013:8B6C
 */
void f__25C4_02E0_001B_40E8()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x660F), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x6611), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00, -0x6611));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00, -0x660F));
	if (!emu_flags.zf) { f__25C4_0326_000D_B94B(); return; }
	emu_movw(&emu_ax.x, 0x9);
	emu_push(emu_ax.x);
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x02FB); emu_cs = 0x263B; emu_ip = 0x002F; emu_last_cs = 0x25C4; emu_last_ip = 0x02F6; emu_last_length = 0x001B; emu_last_crc = 0x40E8; emu_call();
	/* Unresolved jump */ emu_ip = 0x02FB; emu_last_cs = 0x25C4; emu_last_ip = 0x02FB; emu_last_length = 0x001B; emu_last_crc = 0x40E8; emu_call();
}

/**
 * Decompiled function f__25C4_0326_000D_B94B()
 *
 * @name f__25C4_0326_000D_B94B
 * @implements 25C4:0326:000D:B94B ()
 *
 * Called From: 25C4:02F0:001B:40E8
 */
void f__25C4_0326_000D_B94B()
{
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x660F));
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x6611));
	emu_push(emu_cs); emu_push(0x0333); emu_cs = 0x2605; f__2605_000C_006D_F8B2();
	f__25C4_0333_0012_BF4D();
}

/**
 * Decompiled function f__25C4_0333_0012_BF4D()
 *
 * @name f__25C4_0333_0012_BF4D
 * @implements 25C4:0333:0012:BF4D ()
 *
 * Called From: 25C4:0333:000D:B94B
 */
void f__25C4_0333_0012_BF4D()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_ax.x, 0x10);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_movw(&emu_dx.x, 0x300);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_cs); emu_push(0x0345); emu_cs = 0x23E1; f__23E1_0004_0014_2BC0();
	f__25C4_0345_001B_B33C();
}

/**
 * Decompiled function f__25C4_0345_001B_B33C()
 *
 * @name f__25C4_0345_001B_B33C
 * @implements 25C4:0345:001B:B33C ()
 *
 * Called From: 25C4:0345:0012:BF4D
 */
void f__25C4_0345_001B_B33C()
{
	emu_addws(&emu_sp, 0x6);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x6674), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x6676), emu_ax.x);
	emu_movw(&emu_bx.x, emu_di);
	emu_subws(&emu_bx.x, 0x2);
	emu_cmpws(&emu_bx.x, 0x3);
	if (!(emu_flags.cf || emu_flags.zf)) { /* Unresolved jump */ emu_ip = 0x03C8; emu_last_cs = 0x25C4; emu_last_ip = 0x0357; emu_last_length = 0x001B; emu_last_crc = 0xB33C; emu_call(); return; }
	emu_shlw(&emu_bx.x, 0x1);

	/* Jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_cs, emu_bx.x,  0x3F6);
	switch (emu_ip) {
		case 0x039C: f__25C4_039C_0018_6AD8(); return;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x25C4; emu_last_ip = 0x035B; emu_last_length = 0x001B; emu_last_crc = 0xB33C;
			emu_call();
			return;
	}
}

/**
 * Decompiled function f__25C4_039C_0018_6AD8()
 *
 * @name f__25C4_039C_0018_6AD8
 * @implements 25C4:039C:0018:6AD8 ()
 *
 * Called From: 25C4:035B:001B:B33C
 */
void f__25C4_039C_0018_6AD8()
{
	emu_movw(&emu_ax.x, 0x3);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x3F);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00, -0x6676));
	emu_addw(&emu_ax.x, 0x2D);
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x6674));
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x03B4); emu_cs = 0x01F7; f__01F7_2947_0014_02B8();
	f__25C4_03B4_0010_908E();
}

/**
 * Decompiled function f__25C4_03B4_0010_908E()
 *
 * @name f__25C4_03B4_0010_908E
 * @implements 25C4:03B4:0010:908E ()
 *
 * Called From: 25C4:03B4:0018:6AD8
 */
void f__25C4_03B4_0010_908E()
{
	emu_addws(&emu_sp, 0x8);
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x6674));
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x6676));
	emu_push(emu_cs); emu_push(0x03C4); emu_cs = 0x259E; f__259E_0040_0015_5E4A();
	f__25C4_03C4_0004_5B1F();
}

/**
 * Decompiled function f__25C4_03C4_0004_5B1F()
 *
 * @name f__25C4_03C4_0004_5B1F
 * @implements 25C4:03C4:0004:5B1F ()
 *
 * Called From: 25C4:03C4:0010:908E
 */
void f__25C4_03C4_0004_5B1F()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	f__25C4_03C8_0005_065C(); return;
}

/**
 * Decompiled function f__25C4_03C8_0005_065C()
 *
 * @name f__25C4_03C8_0005_065C
 * @implements 25C4:03C8:0005:065C ()
 *
 * Called From: 25C4:03C6:0004:5B1F
 */
void f__25C4_03C8_0005_065C()
{
	emu_push(emu_cs); emu_push(0x03CD); emu_cs = 0x2533; f__2533_000D_001C_74EC();
	f__25C4_03CD_000B_7CD0();
}

/**
 * Decompiled function f__25C4_03CD_000B_7CD0()
 *
 * @name f__25C4_03CD_000B_7CD0
 * @implements 25C4:03CD:000B:7CD0 ()
 *
 * Called From: 25C4:03CD:0005:065C
 */
void f__25C4_03CD_000B_7CD0()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_cs); emu_push(0x03D8); emu_cs = 0x01F7; f__01F7_103F_0010_4132();
	f__25C4_03D8_0008_9D33();
}

/**
 * Decompiled function f__25C4_03D8_0008_9D33()
 *
 * @name f__25C4_03D8_0008_9D33
 * @implements 25C4:03D8:0008:9D33 ()
 *
 * Called From: 25C4:03D8:000B:7CD0
 */
void f__25C4_03D8_0008_9D33()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x03E0); emu_cs = 0x01F7; f__01F7_07D4_0011_370E();
	f__25C4_03E0_0009_75D6();
}

/**
 * Decompiled function f__25C4_03E0_0009_75D6()
 *
 * @name f__25C4_03E0_0009_75D6
 * @implements 25C4:03E0:0009:75D6 ()
 *
 * Called From: 25C4:03E0:0008:9D33
 */
void f__25C4_03E0_0009_75D6()
{
	emu_pop(&emu_cx.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x03E9); emu_cs = 0x07AE; f__07AE_0000_00DF_A32C();
	f__25C4_03E9_0007_03AB();
}

/**
 * Decompiled function f__25C4_03E9_0007_03AB()
 *
 * @name f__25C4_03E9_0007_03AB
 * @implements 25C4:03E9:0007:03AB ()
 *
 * Called From: 25C4:03E9:0009:75D6
 */
void f__25C4_03E9_0007_03AB()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_ax.x, 0x1);
	f__25C4_00BE_0003_DCAB(); return;
}

/**
 * Decompiled function f__25C4_03F0_0006_F7CE()
 *
 * @name f__25C4_03F0_0006_F7CE
 * @implements 25C4:03F0:0006:F7CE ()
 *
 * Called From: 25C4:00BE:0003:DCAB
 */
void f__25C4_03F0_0006_F7CE()
{
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

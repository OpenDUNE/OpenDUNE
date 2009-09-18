/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__07C9_000F_0050_9278()
 *
 * @name f__07C9_000F_0050_9278
 * @implements 07C9:000F:0050:9278 ()
 *
 * Called From: 0972:0053:0019:8B3A
 * Called From: 0972:0053:0051:7645
 * Called From: 0972:00A0:0035:11A8
 * Called From: 0972:00A0:0020:DE51
 * Called From: 176C:018A:0014:5245
 * Called From: 176C:018A:0029:F66B
 * Called From: 176C:018A:0055:6C8A
 * Called From: 176C:018A:0040:7270
 * Called From: 176C:1034:001F:713B
 * Called From: 176C:1250:0016:35F1
 * Called From: 176C:1250:0019:CAAD
 * Called From: 176C:1890:0020:D3D2
 * Called From: 176C:18CD:003D:E794
 * Called From: 1A34:20E6:0019:5DD9
 * Called From: 1A34:2176:0029:FB3F
 */
void f__07C9_000F_0050_9278()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x2);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_cx.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x3900), 0x2);
	if (emu_flags.zf) { f__07C9_009C_0004_6872(); return; }
	emu_movw(&emu_ax.x, emu_dx.x);
	emu_shlw(&emu_ax.x, 0x1);
	emu_cmpw(&emu_ax.x, emu_si);
	if (!(emu_flags.sf != emu_flags.of)) { f__07C9_0035_002A_BC44(); return; }
	emu_movw(&emu_ax.x, emu_dx.x);
	emu_shlw(&emu_ax.x, 0x1);
	emu_movw(&emu_si, emu_ax.x);
	emu_movw(&emu_ax.x, emu_dx.x);
	emu_sarw(&emu_ax.x, 0x1);
	emu_cmpw(&emu_ax.x, emu_cx.x);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__07C9_0043_001C_5702(); return; }
	emu_movw(&emu_ax.x, emu_dx.x);
	emu_sarw(&emu_ax.x, 0x1);
	emu_movw(&emu_cx.x, emu_ax.x);
	emu_movw(&emu_ax.x, emu_dx.x);
	emu_subw(&emu_ax.x, emu_cx.x);
	emu_sarw(&emu_ax.x, 0x1);
	emu_movw(&emu_di, emu_ax.x);
	emu_movw(&emu_ax.x, emu_si);
	emu_subw(&emu_ax.x, emu_dx.x);
	emu_sarw(&emu_ax.x, 0x1);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0xC), 0x0);
	if (emu_flags.zf) { f__07C9_005F_0015_22E3(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3900));
	f__07C9_0066_000E_D629(); return;
}

/**
 * Decompiled function f__07C9_0035_002A_BC44()
 *
 * @name f__07C9_0035_002A_BC44
 * @implements 07C9:0035:002A:BC44 ()
 *
 * Called From: 07C9:002D:0050:9278
 */
void f__07C9_0035_002A_BC44()
{
	emu_movw(&emu_ax.x, emu_dx.x);
	emu_sarw(&emu_ax.x, 0x1);
	emu_cmpw(&emu_ax.x, emu_cx.x);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__07C9_0043_001C_5702(); return; }
	emu_movw(&emu_ax.x, emu_dx.x);
	emu_sarw(&emu_ax.x, 0x1);
	emu_movw(&emu_cx.x, emu_ax.x);
	emu_movw(&emu_ax.x, emu_dx.x);
	emu_subw(&emu_ax.x, emu_cx.x);
	emu_sarw(&emu_ax.x, 0x1);
	emu_movw(&emu_di, emu_ax.x);
	emu_movw(&emu_ax.x, emu_si);
	emu_subw(&emu_ax.x, emu_dx.x);
	emu_sarw(&emu_ax.x, 0x1);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0xC), 0x0);
	if (emu_flags.zf) { f__07C9_005F_0015_22E3(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3900));
	f__07C9_0066_000E_D629(); return;
}

/**
 * Decompiled function f__07C9_0043_001C_5702()
 *
 * @name f__07C9_0043_001C_5702
 * @implements 07C9:0043:001C:5702 ()
 *
 * Called From: 07C9:003B:002A:BC44
 * Called From: 07C9:003B:0050:9278
 */
void f__07C9_0043_001C_5702()
{
	emu_movw(&emu_ax.x, emu_dx.x);
	emu_subw(&emu_ax.x, emu_cx.x);
	emu_sarw(&emu_ax.x, 0x1);
	emu_movw(&emu_di, emu_ax.x);
	emu_movw(&emu_ax.x, emu_si);
	emu_subw(&emu_ax.x, emu_dx.x);
	emu_sarw(&emu_ax.x, 0x1);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0xC), 0x0);
	if (emu_flags.zf) { f__07C9_005F_0015_22E3(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3900));
	f__07C9_0066_000E_D629(); return;
}

/**
 * Decompiled function f__07C9_005F_0015_22E3()
 *
 * @name f__07C9_005F_0015_22E3
 * @implements 07C9:005F:0015:22E3 ()
 *
 * Called From: 07C9:0058:001C:5702
 * Called From: 07C9:0058:0050:9278
 * Called From: 07C9:0058:002A:BC44
 */
void f__07C9_005F_0015_22E3()
{
	emu_movw(&emu_ax.x, 0x4);
	emu_subw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3900));
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_cmpws(&emu_bx.x, 0x4);
	if (!(emu_flags.cf || emu_flags.zf)) { /* Unresolved jump */ emu_ip = 0x0082; emu_last_cs = 0x07C9; emu_last_ip = 0x006B; emu_last_length = 0x0015; emu_last_crc = 0x22E3; emu_call(); return; }
	emu_shlw(&emu_bx.x, 0x1);

	/* Jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_cs, emu_bx.x,  0xA6);
	switch (emu_ip) {
		case 0x0074: f__07C9_0074_0006_C560(); return;
		case 0x0076: f__07C9_0076_0004_6FD8(); return;
		case 0x007A: f__07C9_007A_0008_4548(); return;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x07C9; emu_last_ip = 0x006F; emu_last_length = 0x0015; emu_last_crc = 0x22E3;
			emu_call();
			return;
	}
}

/**
 * Decompiled function f__07C9_0066_000E_D629()
 *
 * @name f__07C9_0066_000E_D629
 * @implements 07C9:0066:000E:D629 ()
 *
 * Called From: 07C9:005D:0050:9278
 * Called From: 07C9:005D:002A:BC44
 * Called From: 07C9:005D:001C:5702
 */
void f__07C9_0066_000E_D629()
{
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_cmpws(&emu_bx.x, 0x4);
	if (!(emu_flags.cf || emu_flags.zf)) { /* Unresolved jump */ emu_ip = 0x0082; emu_last_cs = 0x07C9; emu_last_ip = 0x006B; emu_last_length = 0x000E; emu_last_crc = 0xD629; emu_call(); return; }
	emu_shlw(&emu_bx.x, 0x1);

	/* Jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_cs, emu_bx.x,  0xA6);
	switch (emu_ip) {
		case 0x0074: f__07C9_0074_0006_C560(); return;
		case 0x007A: f__07C9_007A_0008_4548(); return;
		case 0x007D: f__07C9_007D_0005_BEE7(); return;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x07C9; emu_last_ip = 0x006F; emu_last_length = 0x000E; emu_last_crc = 0xD629;
			emu_call();
			return;
	}
}

/**
 * Decompiled function f__07C9_0074_0006_C560()
 *
 * @name f__07C9_0074_0006_C560
 * @implements 07C9:0074:0006:C560 ()
 *
 * Called From: 07C9:006F:000E:D629
 * Called From: 07C9:006F:0015:22E3
 */
void f__07C9_0074_0006_C560()
{
	emu_subw(&emu_dx.x, emu_di);
	emu_subw(&emu_dx.x, emu_di);
	f__07C9_0084_0008_A7FF(); return;
}

/**
 * Decompiled function f__07C9_0076_0004_6FD8()
 *
 * @name f__07C9_0076_0004_6FD8
 * @implements 07C9:0076:0004:6FD8 ()
 *
 * Called From: 07C9:006F:0015:22E3
 */
void f__07C9_0076_0004_6FD8()
{
	emu_subw(&emu_dx.x, emu_di);
	f__07C9_0084_0008_A7FF(); return;
}

/**
 * Decompiled function f__07C9_007A_0008_4548()
 *
 * @name f__07C9_007A_0008_4548
 * @implements 07C9:007A:0008:4548 ()
 *
 * Called From: 07C9:006F:0015:22E3
 * Called From: 07C9:006F:000E:D629
 */
void f__07C9_007A_0008_4548()
{
	emu_addw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_addw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	f__07C9_0084_0008_A7FF(); return;
}

/**
 * Decompiled function f__07C9_007D_0005_BEE7()
 *
 * @name f__07C9_007D_0005_BEE7
 * @implements 07C9:007D:0005:BEE7 ()
 *
 * Called From: 07C9:006F:000E:D629
 */
void f__07C9_007D_0005_BEE7()
{
	emu_addw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	f__07C9_0084_0008_A7FF(); return;
}

/**
 * Decompiled function f__07C9_0084_0008_A7FF()
 *
 * @name f__07C9_0084_0008_A7FF
 * @implements 07C9:0084:0008:A7FF ()
 *
 * Called From: 07C9:0078:0006:C560
 * Called From: 07C9:0078:0004:6FD8
 * Called From: 07C9:0080:0008:4548
 * Called From: 07C9:0080:0005:BEE7
 */
void f__07C9_0084_0008_A7FF()
{
	emu_cmpw(&emu_dx.x, emu_si);
	if (!(emu_flags.sf != emu_flags.of)) { f__07C9_008C_000C_41F1(); return; }
	emu_movw(&emu_ax.x, emu_dx.x);
	f__07C9_008E_000A_8959(); return;
}

/**
 * Decompiled function f__07C9_008C_000C_41F1()
 *
 * @name f__07C9_008C_000C_41F1
 * @implements 07C9:008C:000C:41F1 ()
 *
 * Called From: 07C9:0086:0008:A7FF
 */
void f__07C9_008C_000C_41F1()
{
	emu_movw(&emu_ax.x, emu_si);
	emu_movw(&emu_dx.x, emu_ax.x);
	emu_cmpw(&emu_dx.x, emu_cx.x);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x0098; emu_last_cs = 0x07C9; emu_last_ip = 0x0092; emu_last_length = 0x000C; emu_last_crc = 0x41F1; emu_call(); return; }
	emu_movw(&emu_ax.x, emu_dx.x);
	f__07C9_009A_0006_42F0(); return;
}

/**
 * Decompiled function f__07C9_008E_000A_8959()
 *
 * @name f__07C9_008E_000A_8959
 * @implements 07C9:008E:000A:8959 ()
 *
 * Called From: 07C9:008A:0008:A7FF
 */
void f__07C9_008E_000A_8959()
{
	emu_movw(&emu_dx.x, emu_ax.x);
	emu_cmpw(&emu_dx.x, emu_cx.x);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__07C9_0098_0008_C872(); return; }
	emu_movw(&emu_ax.x, emu_dx.x);
	f__07C9_009A_0006_42F0(); return;
}

/**
 * Decompiled function f__07C9_0098_0008_C872()
 *
 * @name f__07C9_0098_0008_C872
 * @implements 07C9:0098:0008:C872 ()
 *
 * Called From: 07C9:0092:000A:8959
 */
void f__07C9_0098_0008_C872()
{
	emu_movw(&emu_ax.x, emu_cx.x);
	emu_movw(&emu_dx.x, emu_ax.x);
	emu_movw(&emu_ax.x, emu_dx.x);
	f__07C9_00A0_0006_F7CE(); return;
}

/**
 * Decompiled function f__07C9_009A_0006_42F0()
 *
 * @name f__07C9_009A_0006_42F0
 * @implements 07C9:009A:0006:42F0 ()
 *
 * Called From: 07C9:0096:000C:41F1
 * Called From: 07C9:0096:000A:8959
 */
void f__07C9_009A_0006_42F0()
{
	emu_movw(&emu_dx.x, emu_ax.x);
	emu_movw(&emu_ax.x, emu_dx.x);
	f__07C9_00A0_0006_F7CE(); return;
}

/**
 * Decompiled function f__07C9_009C_0004_6872()
 *
 * @name f__07C9_009C_0004_6872
 * @implements 07C9:009C:0004:6872 ()
 *
 * Called From: 07C9:0025:0050:9278
 */
void f__07C9_009C_0004_6872()
{
	emu_movw(&emu_ax.x, emu_dx.x);
	f__07C9_00A0_0006_F7CE(); return;
}

/**
 * Decompiled function f__07C9_00A0_0006_F7CE()
 *
 * @name f__07C9_00A0_0006_F7CE
 * @implements 07C9:00A0:0006:F7CE ()
 *
 * Called From: 07C9:009E:0004:6872
 * Called From: 07C9:009E:0006:42F0
 * Called From: 07C9:009E:0008:C872
 */
void f__07C9_00A0_0006_F7CE()
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

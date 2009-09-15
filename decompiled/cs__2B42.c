/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__2B42_0000_0022_87EE()
 *
 * @name f__2B42_0000_0022_87EE
 * @implements 2B42:0000:0022:87EE ()
 *
 * Called From: B503:0082:0018:C16B
 * Called From: B503:051C:0014:8E56
 */
void f__2B42_0000_0022_87EE()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_ax.x);
	emu_push(emu_cx.x);
	emu_push(emu_dx.x);
	emu_movw(&emu_cx.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_cmpw(&emu_cx.x, emu_dx.x);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__2B42_0012_0010_0985(); return; }
	emu_xchgw(&emu_dx.x, &emu_cx.x);
	emu_cmpws(&emu_cx.x, 0x0);
	if ((emu_flags.sf != emu_flags.of)) { emu_ip = 0x0022; emu_last_cs = 0x2B42; emu_last_ip = 0x0015; emu_last_length = 0x0022; emu_last_crc = 0x87EE; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_cx.x, 0x13F);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { emu_ip = 0x0025; emu_last_cs = 0x2B42; emu_last_ip = 0x001B; emu_last_length = 0x0022; emu_last_crc = 0x87EE; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_cx.x, 0x13F);
	emu_ip = 0x0025; emu_last_cs = 0x2B42; emu_last_ip = 0x0020; emu_last_length = 0x0022; emu_last_crc = 0x87EE; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__2B42_0012_0010_0985()
 *
 * @name f__2B42_0012_0010_0985
 * @implements 2B42:0012:0010:0985 ()
 *
 * Called From: 2B42:000E:0022:87EE
 */
void f__2B42_0012_0010_0985()
{
	emu_cmpws(&emu_cx.x, 0x0);
	if ((emu_flags.sf != emu_flags.of)) { emu_ip = 0x0022; emu_last_cs = 0x2B42; emu_last_ip = 0x0015; emu_last_length = 0x0010; emu_last_crc = 0x0985; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_cx.x, 0x13F);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__2B42_0025_0014_8C54(); return; }
	emu_movw(&emu_cx.x, 0x13F);
	emu_ip = 0x0025; emu_last_cs = 0x2B42; emu_last_ip = 0x0020; emu_last_length = 0x0010; emu_last_crc = 0x0985; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__2B42_0025_0014_8C54()
 *
 * @name f__2B42_0025_0014_8C54
 * @implements 2B42:0025:0014:8C54 ()
 *
 * Called From: 2B42:001B:0010:0985
 */
void f__2B42_0025_0014_8C54()
{
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x706C), emu_cx.x);
	emu_cmpws(&emu_dx.x, 0x0);
	if ((emu_flags.sf != emu_flags.of)) { emu_ip = 0x0039; emu_last_cs = 0x2B42; emu_last_ip = 0x002C; emu_last_length = 0x0014; emu_last_crc = 0x8C54; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_dx.x, 0x13F);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__2B42_003C_001B_481C(); return; }
	emu_movw(&emu_dx.x, 0x13F);
	emu_ip = 0x003C; emu_last_cs = 0x2B42; emu_last_ip = 0x0037; emu_last_length = 0x0014; emu_last_crc = 0x8C54; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__2B42_003C_001B_481C()
 *
 * @name f__2B42_003C_001B_481C
 * @implements 2B42:003C:001B:481C ()
 *
 * Called From: 2B42:0032:0014:8C54
 */
void f__2B42_003C_001B_481C()
{
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x706E), emu_dx.x);
	emu_cmpb(&emu_get_memory8(emu_ds, 0x00,  0x7096), 0x0);
	if (emu_flags.zf) { emu_ip = 0x0057; emu_last_cs = 0x2B42; emu_last_ip = 0x0045; emu_last_length = 0x001B; emu_last_crc = 0x481C; emu_call(); return; } // Jump does not resolve
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x7068), 0x1);
	if (!emu_flags.zf) { emu_ip = 0x0052; emu_last_cs = 0x2B42; emu_last_ip = 0x004C; emu_last_length = 0x001B; emu_last_crc = 0x481C; emu_call(); return; } // Jump does not resolve
	emu_shlw(&emu_cx.x, 0x1);
	emu_shlw(&emu_dx.x, 0x1);
	emu_movw(&emu_ax.x, 0x7);
	emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = 0x0070; emu_push(0x0057); f__0070_0198_0005_1C66();
	f__2B42_0057_001C_42FF();
}

/**
 * Decompiled function f__2B42_0057_001C_42FF()
 *
 * @name f__2B42_0057_001C_42FF
 * @implements 2B42:0057:001C:42FF ()
 *
 * Called From: 2B42:0057:001B:481C
 */
void f__2B42_0057_001C_42FF()
{
	emu_movw(&emu_cx.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_cmpw(&emu_cx.x, emu_dx.x);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__2B42_0063_0010_F70C(); return; }
	emu_xchgw(&emu_dx.x, &emu_cx.x);
	emu_cmpws(&emu_cx.x, 0x0);
	if ((emu_flags.sf != emu_flags.of)) { emu_ip = 0x0073; emu_last_cs = 0x2B42; emu_last_ip = 0x0066; emu_last_length = 0x001C; emu_last_crc = 0x42FF; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_cx.x, 0xC7);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { emu_ip = 0x0076; emu_last_cs = 0x2B42; emu_last_ip = 0x006C; emu_last_length = 0x001C; emu_last_crc = 0x42FF; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_cx.x, 0xC7);
	emu_ip = 0x0076; emu_last_cs = 0x2B42; emu_last_ip = 0x0071; emu_last_length = 0x001C; emu_last_crc = 0x42FF; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__2B42_0063_0010_F70C()
 *
 * @name f__2B42_0063_0010_F70C
 * @implements 2B42:0063:0010:F70C ()
 *
 * Called From: 2B42:005F:001C:42FF
 */
void f__2B42_0063_0010_F70C()
{
	emu_cmpws(&emu_cx.x, 0x0);
	if ((emu_flags.sf != emu_flags.of)) { emu_ip = 0x0073; emu_last_cs = 0x2B42; emu_last_ip = 0x0066; emu_last_length = 0x0010; emu_last_crc = 0xF70C; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_cx.x, 0xC7);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__2B42_0076_0014_72AD(); return; }
	emu_movw(&emu_cx.x, 0xC7);
	emu_ip = 0x0076; emu_last_cs = 0x2B42; emu_last_ip = 0x0071; emu_last_length = 0x0010; emu_last_crc = 0xF70C; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__2B42_0076_0014_72AD()
 *
 * @name f__2B42_0076_0014_72AD
 * @implements 2B42:0076:0014:72AD ()
 *
 * Called From: 2B42:006C:0010:F70C
 */
void f__2B42_0076_0014_72AD()
{
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x7070), emu_cx.x);
	emu_cmpws(&emu_dx.x, 0x0);
	if ((emu_flags.sf != emu_flags.of)) { emu_ip = 0x008A; emu_last_cs = 0x2B42; emu_last_ip = 0x007D; emu_last_length = 0x0014; emu_last_crc = 0x72AD; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_dx.x, 0xC7);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__2B42_008D_0010_E709(); return; }
	emu_movw(&emu_dx.x, 0xC7);
	emu_ip = 0x008D; emu_last_cs = 0x2B42; emu_last_ip = 0x0088; emu_last_length = 0x0014; emu_last_crc = 0x72AD; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__2B42_008D_0010_E709()
 *
 * @name f__2B42_008D_0010_E709
 * @implements 2B42:008D:0010:E709 ()
 *
 * Called From: 2B42:0083:0014:72AD
 */
void f__2B42_008D_0010_E709()
{
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x7072), emu_dx.x);
	emu_cmpb(&emu_get_memory8(emu_ds, 0x00,  0x7096), 0x0);
	if (emu_flags.zf) { emu_ip = 0x009D; emu_last_cs = 0x2B42; emu_last_ip = 0x0096; emu_last_length = 0x0010; emu_last_crc = 0xE709; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, 0x8);
	emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = 0x0070; emu_push(0x009D); f__0070_0198_0005_1C66();
	f__2B42_009D_0005_0CF2();
}

/**
 * Decompiled function f__2B42_009D_0005_0CF2()
 *
 * @name f__2B42_009D_0005_0CF2
 * @implements 2B42:009D:0005:0CF2 ()
 *
 * Called From: 2B42:009D:0010:E709
 */
void f__2B42_009D_0005_0CF2()
{
	emu_pop(&emu_dx.x);
	emu_pop(&emu_cx.x);
	emu_pop(&emu_ax.x);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

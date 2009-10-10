/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__2B42_0000_0022_1DB2()
 *
 * @name f__2B42_0000_0022_1DB2
 * @implements 2B42:0000:0022:1DB2 ()
 *
 * Called From: B503:0082:0018:3CBB
 * Called From: B503:051C:0014:8976
 */
void f__2B42_0000_0022_1DB2()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_ax);
	emu_push(emu_cx);
	emu_push(emu_dx);
	emu_movw(&emu_cx, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_cmpw(&emu_cx, emu_dx);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__2B42_0012_0010_99D3(); return; }
	emu_xchgw(&emu_dx, &emu_cx);
	f__2B42_0012_0010_99D3(); return;
}

/**
 * Decompiled function f__2B42_0012_0010_99D3()
 *
 * @name f__2B42_0012_0010_99D3
 * @implements 2B42:0012:0010:99D3 ()
 *
 * Called From: 2B42:000E:0022:1DB2
 */
void f__2B42_0012_0010_99D3()
{
	emu_cmpw(&emu_cx, 0x0);
	if ((emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x0022; emu_last_cs = 0x2B42; emu_last_ip = 0x0015; emu_last_length = 0x0010; emu_last_crc = 0x99D3; emu_call(); return; }
	emu_cmpw(&emu_cx, 0x13F);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__2B42_0025_0014_36D8(); return; }
	emu_movw(&emu_cx, 0x13F);
	/* Unresolved jump */ emu_ip = 0x0025; emu_last_cs = 0x2B42; emu_last_ip = 0x0020; emu_last_length = 0x0010; emu_last_crc = 0x99D3; emu_call();
}

/**
 * Decompiled function f__2B42_0025_0014_36D8()
 *
 * @name f__2B42_0025_0014_36D8
 * @implements 2B42:0025:0014:36D8 ()
 *
 * Called From: 2B42:001B:0010:99D3
 */
void f__2B42_0025_0014_36D8()
{
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x706C), emu_cx);
	emu_cmpw(&emu_dx, 0x0);
	if ((emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x0039; emu_last_cs = 0x2B42; emu_last_ip = 0x002C; emu_last_length = 0x0014; emu_last_crc = 0x36D8; emu_call(); return; }
	emu_cmpw(&emu_dx, 0x13F);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__2B42_003C_001B_3888(); return; }
	emu_movw(&emu_dx, 0x13F);
	/* Unresolved jump */ emu_ip = 0x003C; emu_last_cs = 0x2B42; emu_last_ip = 0x0037; emu_last_length = 0x0014; emu_last_crc = 0x36D8; emu_call();
}

/**
 * Decompiled function f__2B42_003C_001B_3888()
 *
 * @name f__2B42_003C_001B_3888
 * @implements 2B42:003C:001B:3888 ()
 *
 * Called From: 2B42:0032:0014:36D8
 */
void f__2B42_003C_001B_3888()
{
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x706E), emu_dx);
	emu_cmpb(&emu_get_memory8(emu_ds, 0x00, 0x7096), 0x0);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0057; emu_last_cs = 0x2B42; emu_last_ip = 0x0045; emu_last_length = 0x001B; emu_last_crc = 0x3888; emu_call(); return; }
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x7068), 0x1);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0052; emu_last_cs = 0x2B42; emu_last_ip = 0x004C; emu_last_length = 0x001B; emu_last_crc = 0x3888; emu_call(); return; }
	emu_shlw(&emu_cx, 0x1);
	emu_shlw(&emu_dx, 0x1);
	emu_movw(&emu_ax, 0x7);
	emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = 0x0070; emu_push(0x0057); Interrupt_Mouse();
	f__2B42_0057_001C_AB52();
}

/**
 * Decompiled function f__2B42_0057_001C_AB52()
 *
 * @name f__2B42_0057_001C_AB52
 * @implements 2B42:0057:001C:AB52 ()
 *
 */
void f__2B42_0057_001C_AB52()
{
	emu_movw(&emu_cx, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_cmpw(&emu_cx, emu_dx);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__2B42_0063_0010_1880(); return; }
	emu_xchgw(&emu_dx, &emu_cx);
	f__2B42_0063_0010_1880(); return;
}

/**
 * Decompiled function f__2B42_0063_0010_1880()
 *
 * @name f__2B42_0063_0010_1880
 * @implements 2B42:0063:0010:1880 ()
 *
 * Called From: 2B42:005F:001C:AB52
 */
void f__2B42_0063_0010_1880()
{
	emu_cmpw(&emu_cx, 0x0);
	if ((emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x0073; emu_last_cs = 0x2B42; emu_last_ip = 0x0066; emu_last_length = 0x0010; emu_last_crc = 0x1880; emu_call(); return; }
	emu_cmpw(&emu_cx, 0xC7);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__2B42_0076_0014_B78C(); return; }
	emu_movw(&emu_cx, 0xC7);
	/* Unresolved jump */ emu_ip = 0x0076; emu_last_cs = 0x2B42; emu_last_ip = 0x0071; emu_last_length = 0x0010; emu_last_crc = 0x1880; emu_call();
}

/**
 * Decompiled function f__2B42_0076_0014_B78C()
 *
 * @name f__2B42_0076_0014_B78C
 * @implements 2B42:0076:0014:B78C ()
 *
 * Called From: 2B42:006C:0010:1880
 */
void f__2B42_0076_0014_B78C()
{
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x7070), emu_cx);
	emu_cmpw(&emu_dx, 0x0);
	if ((emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x008A; emu_last_cs = 0x2B42; emu_last_ip = 0x007D; emu_last_length = 0x0014; emu_last_crc = 0xB78C; emu_call(); return; }
	emu_cmpw(&emu_dx, 0xC7);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__2B42_008D_0010_8866(); return; }
	emu_movw(&emu_dx, 0xC7);
	/* Unresolved jump */ emu_ip = 0x008D; emu_last_cs = 0x2B42; emu_last_ip = 0x0088; emu_last_length = 0x0014; emu_last_crc = 0xB78C; emu_call();
}

/**
 * Decompiled function f__2B42_008D_0010_8866()
 *
 * @name f__2B42_008D_0010_8866
 * @implements 2B42:008D:0010:8866 ()
 *
 * Called From: 2B42:0083:0014:B78C
 */
void f__2B42_008D_0010_8866()
{
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x7072), emu_dx);
	emu_cmpb(&emu_get_memory8(emu_ds, 0x00, 0x7096), 0x0);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x009D; emu_last_cs = 0x2B42; emu_last_ip = 0x0096; emu_last_length = 0x0010; emu_last_crc = 0x8866; emu_call(); return; }
	emu_movw(&emu_ax, 0x8);
	emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = 0x0070; emu_push(0x009D); Interrupt_Mouse();
	f__2B42_009D_0005_BC42();
}

/**
 * Decompiled function f__2B42_009D_0005_BC42()
 *
 * @name f__2B42_009D_0005_BC42
 * @implements 2B42:009D:0005:BC42 ()
 *
 */
void f__2B42_009D_0005_BC42()
{
	emu_pop(&emu_dx);
	emu_pop(&emu_cx);
	emu_pop(&emu_ax);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

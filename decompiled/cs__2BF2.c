/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__2BF2_0000_0007_42B5()
 *
 * @name f__2BF2_0000_0007_42B5
 * @implements 2BF2:0000:0007:42B5 ()
 * @implements 2BF2:0007:0009:F6E6
 * @implements 2BF2:0010:0006:3068
 * @implements 2BF2:0016:000E:1B5D
 * @implements 2BF2:001A:000A:58BD
 *
 * Called From: 2649:001A:0008:33E4
 */
void f__2BF2_0000_0007_42B5()
{
l__0000:
	emu_push(emu_bx);
	emu_push(emu_es);
	emu_ax = 0x4300;
	emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = 0x0070; emu_push(0x0007); Interrupt_DOS_Multiplex();
l__0007:
	emu_cmpb(&emu_al, 0x80);
	if (emu_al != 0x80) goto l__0016;
	emu_ax = 0x4310;
	emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = 0x0070; emu_push(0x0010); Interrupt_DOS_Multiplex();
l__0010:
	emu_ax = emu_bx;
	emu_dx = emu_es;
	goto l__001A;
l__0016:
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
l__001A:
	emu_get_memory16(emu_ds, 0x00, 0x6E3E) = emu_ax;
	emu_get_memory16(emu_ds, 0x00, 0x6E40) = emu_dx;
	emu_pop(&emu_es);
	emu_pop(&emu_bx);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__2BF2_0040_000E_71D1()
 *
 * @name f__2BF2_0040_000E_71D1
 * @implements 2BF2:0040:000E:71D1 ()
 * @implements 2BF2:004E:000D:FF7F
 * @implements 2BF2:005E:000C:195B
 * @implements 2BF2:0066:0004:8EF2
 *
 * Called From: 2649:002C:0008:E3E9
 */
void f__2BF2_0040_000E_71D1()
{
l__0040:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_bx);
	emu_push(emu_dx);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_ah = 0x8;

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_ds, 0x00, 0x6E3E);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_ds, 0x00, 0x6E40);
	emu_push(0x004E);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x007007D0: f__0070_07D0_0002_C33A(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x2BF2; emu_last_ip = 0x004A; emu_last_length = 0x000E; emu_last_crc = 0x71D1;
			emu_call();
			return;
	}
l__004E:
	emu_cmpw(&emu_ax, 0x0);
	if (emu_ax != 0x0) goto l__005E;
	emu_xorb(&emu_bh, emu_bh);
	emu_push(emu_bx);
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x005B); emu_cs = 0x2649; emu_ip = 0x106A; emu_last_cs = 0x2BF2; emu_last_ip = 0x0056; emu_last_length = 0x000D; emu_last_crc = 0xFF7F; emu_call();
	/* Unresolved jump */ emu_ip = 0x005B; emu_last_cs = 0x2BF2; emu_last_ip = 0x005B; emu_last_length = 0x000D; emu_last_crc = 0xFF7F; emu_call();
l__005E:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp,  0x6), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp,  0x6) != 0x0) {
		emu_ax = emu_dx;
	}
l__0066:
	emu_pop(&emu_dx);
	emu_pop(&emu_bx);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__2BF2_006A_000E_61D9()
 *
 * @name f__2BF2_006A_000E_61D9
 * @implements 2BF2:006A:000E:61D9 ()
 * @implements 2BF2:0078:000F:EA76
 * @implements 2BF2:008A:0004:8EF2
 *
 * Called From: 2649:014F:000E:B2AC
 */
void f__2BF2_006A_000E_61D9()
{
l__006A:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_bx);
	emu_push(emu_dx);
	emu_dx = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_ah = 0x9;

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_ds, 0x00, 0x6E3E);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_ds, 0x00, 0x6E40);
	emu_push(0x0078);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x007007D0: f__0070_07D0_0002_C33A(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x2BF2; emu_last_ip = 0x0074; emu_last_length = 0x000E; emu_last_crc = 0x61D9;
			emu_call();
			return;
	}
l__0078:
	emu_ax = emu_dx;
	emu_cmpw(&emu_ax, 0x0);
	if (emu_ax != 0x0) goto l__008A;
	emu_xorb(&emu_bh, emu_bh);
	emu_push(emu_bx);
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x0087); emu_cs = 0x2649; emu_ip = 0x106A; emu_last_cs = 0x2BF2; emu_last_ip = 0x0082; emu_last_length = 0x000F; emu_last_crc = 0xEA76; emu_call();
	/* Unresolved jump */ emu_ip = 0x0087; emu_last_cs = 0x2BF2; emu_last_ip = 0x0087; emu_last_length = 0x000F; emu_last_crc = 0xEA76; emu_call();
l__008A:
	emu_pop(&emu_dx);
	emu_pop(&emu_bx);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__2BF2_008E_0013_1D73()
 *
 * @name f__2BF2_008E_0013_1D73
 * @implements 2BF2:008E:0013:1D73 ()
 * @implements 2BF2:00A1:000E:FF03
 * @implements 2BF2:00B2:0005:5C27
 *
 * Called From: 2649:0EF3:003A:3C21
 * Called From: 2649:0F31:003A:7D24
 */
void f__2BF2_008E_0013_1D73()
{
l__008E:
	emu_push(emu_bx);
	emu_push(emu_dx);
	emu_push(emu_ds);
	emu_push(emu_si);
	emu_push(emu_ds);
	emu_ax = 0x353F;
	emu_ds = emu_ax;
	emu_si = 0x9A3E;
	emu_ah = 0xB;

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_ds, 0x00, 0x6E3E);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_ds, 0x00, 0x6E40);
	emu_push(0x00A1);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x007007D0: f__0070_07D0_0002_C33A(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x2BF2; emu_last_ip = 0x009D; emu_last_length = 0x0013; emu_last_crc = 0x1D73;
			emu_call();
			return;
	}
l__00A1:
	emu_pop(&emu_ds);
	emu_cmpw(&emu_ax, 0x0);
	if (emu_ax != 0x0) goto l__00B2;
	emu_xorb(&emu_bh, emu_bh);
	emu_push(emu_bx);
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x00AF); emu_cs = 0x2649; emu_ip = 0x106A; emu_last_cs = 0x2BF2; emu_last_ip = 0x00AA; emu_last_length = 0x000E; emu_last_crc = 0xFF03; emu_call();
	/* Unresolved jump */ emu_ip = 0x00AF; emu_last_cs = 0x2BF2; emu_last_ip = 0x00AF; emu_last_length = 0x000E; emu_last_crc = 0xFF03; emu_call();
l__00B2:
	emu_pop(&emu_si);
	emu_pop(&emu_ds);
	emu_pop(&emu_dx);
	emu_pop(&emu_bx);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__2BF2_00B7_000E_61C1()
 *
 * @name f__2BF2_00B7_000E_61C1
 * @implements 2BF2:00B7:000E:61C1 ()
 * @implements 2BF2:00C5:000D:FF7F
 * @implements 2BF2:00D5:0004:8EF2
 *
 * Called From: 2649:0AF3:0010:11AB
 */
void f__2BF2_00B7_000E_61C1()
{
l__00B7:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_bx);
	emu_push(emu_dx);
	emu_dx = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_ah = 0xA;

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_ds, 0x00, 0x6E3E);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_ds, 0x00, 0x6E40);
	emu_push(0x00C5);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x007007D0: f__0070_07D0_0002_C33A(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x2BF2; emu_last_ip = 0x00C1; emu_last_length = 0x000E; emu_last_crc = 0x61C1;
			emu_call();
			return;
	}
l__00C5:
	emu_cmpw(&emu_ax, 0x0);
	if (emu_ax != 0x0) goto l__00D5;
	emu_xorb(&emu_bh, emu_bh);
	emu_push(emu_bx);
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x00D2); emu_cs = 0x2649; emu_ip = 0x106A; emu_last_cs = 0x2BF2; emu_last_ip = 0x00CD; emu_last_length = 0x000D; emu_last_crc = 0xFF7F; emu_call();
	/* Unresolved jump */ emu_ip = 0x00D2; emu_last_cs = 0x2BF2; emu_last_ip = 0x00D2; emu_last_length = 0x000D; emu_last_crc = 0xFF7F; emu_call();
l__00D5:
	emu_pop(&emu_dx);
	emu_pop(&emu_bx);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

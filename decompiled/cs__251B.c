/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__251B_0000_001E_7202()
 *
 * @name f__251B_0000_001E_7202
 * @implements 251B:0000:001E:7202 ()
 *
 * Called From: 07D4:0894:0014:5D4C
 * Called From: 0AEC:08AB:0044:7B19
 * Called From: 0AEC:08AB:0042:531A
 * Called From: 0AEC:0D7A:0044:7B19
 * Called From: 0AEC:0D7A:0042:531A
 * Called From: 0AEC:0ED5:0044:7D3B
 * Called From: 0AEC:0ED5:0042:5538
 * Called From: 0F78:0125:0044:7B39
 * Called From: B495:0E49:001B:3AB1
 * Called From: B495:0E64:001B:5840
 * Called From: B53B:0164:0015:EEC6
 */
void f__251B_0000_001E_7202()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_di, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_push(emu_di);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_di);
	emu_push(emu_si);
	emu_movw(&emu_ax, 0x353F);
	emu_movw(&emu_es, emu_ax);

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_es, 0x00, 0x6654);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_es, 0x00, 0x6656);
	emu_push(0x001E);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A6094D: f__22A6_094D_000C_EC7D(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x251B; emu_last_ip = 0x0019; emu_last_length = 0x001E; emu_last_crc = 0x7202;
			emu_call();
			return;
	}
	f__251B_001E_001A_4EC8();
}

/**
 * Decompiled function f__251B_001E_001A_4EC8()
 *
 * @name f__251B_001E_001A_4EC8
 * @implements 251B:001E:001A:4EC8 ()
 *
 * Called From: 251B:001E:001E:7202
 */
void f__251B_001E_001A_4EC8()
{
	emu_addw(&emu_sp, 0xA);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_si);
	emu_movw(&emu_ax, 0x353F);
	emu_movw(&emu_es, emu_ax);

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_es, 0x00, 0x6654);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_es, 0x00, 0x6656);
	emu_push(0x0038);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A6094D: f__22A6_094D_000C_EC7D(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x251B; emu_last_ip = 0x0033; emu_last_length = 0x001A; emu_last_crc = 0x4EC8;
			emu_call();
			return;
	}
	f__251B_0038_0016_F082();
}

/**
 * Decompiled function f__251B_0038_0016_F082()
 *
 * @name f__251B_0038_0016_F082
 * @implements 251B:0038:0016:F082 ()
 *
 * Called From: 251B:0038:001A:4EC8
 */
void f__251B_0038_0016_F082()
{
	emu_addw(&emu_sp, 0xA);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_si);
	emu_push(emu_di);
	emu_push(emu_si);
	emu_movw(&emu_ax, 0x353F);
	emu_movw(&emu_es, emu_ax);

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_es, 0x00, 0x6654);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_es, 0x00, 0x6656);
	emu_push(0x004E);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A6094D: f__22A6_094D_000C_EC7D(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x251B; emu_last_ip = 0x0049; emu_last_length = 0x0016; emu_last_crc = 0xF082;
			emu_call();
			return;
	}
	f__251B_004E_001A_83C7();
}

/**
 * Decompiled function f__251B_004E_001A_83C7()
 *
 * @name f__251B_004E_001A_83C7
 * @implements 251B:004E:001A:83C7 ()
 *
 * Called From: 251B:004E:0016:F082
 */
void f__251B_004E_001A_83C7()
{
	emu_addw(&emu_sp, 0xA);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_di);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movw(&emu_ax, 0x353F);
	emu_movw(&emu_es, emu_ax);

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_es, 0x00, 0x6654);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_es, 0x00, 0x6656);
	emu_push(0x0068);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A6094D: f__22A6_094D_000C_EC7D(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x251B; emu_last_ip = 0x0063; emu_last_length = 0x001A; emu_last_crc = 0x83C7;
			emu_call();
			return;
	}
	f__251B_0068_0007_CF07();
}

/**
 * Decompiled function f__251B_0068_0007_CF07()
 *
 * @name f__251B_0068_0007_CF07
 * @implements 251B:0068:0007:CF07 ()
 *
 * Called From: 251B:0068:001A:83C7
 */
void f__251B_0068_0007_CF07()
{
	emu_addw(&emu_sp, 0xA);
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

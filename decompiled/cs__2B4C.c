/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__2B4C_0002_0029_9CF8()
 *
 * @name f__2B4C_0002_0029_9CF8
 * @implements 2B4C:0002:0029:9CF8 ()
 *
 * Called From: 0AEC:00E3:0048:F42C
 * Called From: 0AEC:1077:003B:02FE
 * Called From: 1423:0305:0021:40A7
 * Called From: B4B8:1A20:0023:470D
 * Called From: B4E9:02F9:0025:5E2B
 * Called From: B4E9:0363:0023:4149
 * Called From: B4F2:00C5:002E:5854
 * Called From: B4F2:0367:0027:2D5A
 */
void f__2B4C_0002_0029_9CF8()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0xA);
	emu_push(emu_bx.x);
	emu_push(emu_cx.x);
	emu_push(emu_ds);
	emu_push(emu_si);
	emu_push(emu_es);
	emu_push(emu_di);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0xC), 0x0);
	if (emu_flags.zf) { emu_ip = 0x001B; emu_last_cs = 0x2B4C; emu_last_ip = 0x0012; emu_last_length = 0x0029; emu_last_crc = 0x9CF8; emu_call(); return; } // Jump does not resolve
	emu_cmpb(&emu_get_memory8(emu_ds, 0x00,  0x7097), 0x0);
	if (emu_flags.zf) { f__2B4C_002B_0017_F193(); return; }
	emu_lfp(&emu_es, &emu_ax.x, &emu_get_memory16(emu_ds, 0x00,  0x708E));
	emu_movw(&emu_dx.x, emu_es);
	emu_pop(&emu_di);
	emu_pop(&emu_es);
	emu_pop(&emu_si);
	emu_pop(&emu_ds);
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
 * Decompiled function f__2B4C_002B_0017_F193()
 *
 * @name f__2B4C_002B_0017_F193
 * @implements 2B4C:002B:0017:F193 ()
 *
 * Called From: 2B4C:0019:0029:9CF8
 */
void f__2B4C_002B_0017_F193()
{
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x705E), 0x0);
	if (!emu_flags.zf) { emu_ip = 0x002B; emu_last_cs = 0x2B4C; emu_last_ip = 0x0030; emu_last_length = 0x0017; emu_last_crc = 0xF193; emu_call(); return; } // Jump does not resolve
	emu_incw(&emu_get_memory16(emu_ds, 0x00,  0x705E));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x7094));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x7092));

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_ds, 0x00,  0x66B4);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_ds, 0x00,  0x66B6);
	emu_push(0x0042);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A60FD7: f__22A6_0FD7_0043_03A9(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x2B4C; emu_last_ip = 0x003E; emu_last_length = 0x0017; emu_last_crc = 0xF193;
			emu_call();
			return;
	}
	f__2B4C_0042_0008_F246();
}

/**
 * Decompiled function f__2B4C_0042_0008_F246()
 *
 * @name f__2B4C_0042_0008_F246
 * @implements 2B4C:0042:0008:F246 ()
 *
 * Called From: 2B4C:0042:0017:F193
 */
void f__2B4C_0042_0008_F246()
{
	emu_addws(&emu_sp, 0x4);
	emu_push(emu_cs); emu_push(0x004A); emu_cs = 0x2B6C; f__2B6C_000E_0045_8F26();
	f__2B4C_004A_0004_0D5C();
}

/**
 * Decompiled function f__2B4C_004A_0004_0D5C()
 *
 * @name f__2B4C_004A_0004_0D5C
 * @implements 2B4C:004A:0004:0D5C ()
 *
 * Called From: 2B4C:004A:0008:F246
 */
void f__2B4C_004A_0004_0D5C()
{

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_ds, 0x00,  0x66A4);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_ds, 0x00,  0x66A6);
	emu_push(0x004E);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A60FAE: f__22A6_0FAE_0027_9A7A(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x2B4C; emu_last_ip = 0x004A; emu_last_length = 0x0004; emu_last_crc = 0x0D5C;
			emu_call();
			return;
	}
	f__2B4C_004E_001A_AED0();
}

/**
 * Decompiled function f__2B4C_004E_001A_AED0()
 *
 * @name f__2B4C_004E_001A_AED0
 * @implements 2B4C:004E:001A:AED0 ()
 *
 * Called From: 2B4C:004E:0004:0D5C
 */
void f__2B4C_004E_001A_AED0()
{
	emu_lfp(&emu_es, &emu_si, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_xorb(&emu_ax.h, emu_ax.h);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_si,  0x5));
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_si,  0x3));
	emu_movb(&emu_cx.l, 0x3);
	emu_shrw(&emu_ax.x, emu_cx.l);
	emu_addw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_ds, 0x00,  0x66E4);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_ds, 0x00,  0x66E6);
	emu_push(0x0068);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A6127B: f__22A6_127B_0036_5409(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x2B4C; emu_last_ip = 0x0064; emu_last_length = 0x001A; emu_last_crc = 0xAED0;
			emu_call();
			return;
	}
	f__2B4C_0068_0020_C91D();
}

/**
 * Decompiled function f__2B4C_0068_0020_C91D()
 *
 * @name f__2B4C_0068_0020_C91D
 * @implements 2B4C:0068:0020:C91D ()
 *
 * Called From: 2B4C:0068:001A:AED0
 */
void f__2B4C_0068_0020_C91D()
{
	emu_addws(&emu_sp, 0x4);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00,  0x705A), emu_bx.x);
	if (!(emu_flags.sf != emu_flags.of)) { f__2B4C_00D5_002F_94A0(); return; }
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x708C), 0x0);
	if (emu_flags.zf) { f__2B4C_009E_0006_071A(); return; }
	emu_push(emu_bx.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x708C));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x708A));
	emu_push(emu_cs); emu_push(0x0088); emu_cs = 0x23E1; emu_ip = 0x024A; emu_last_cs = 0x2B4C; emu_last_ip = 0x0083; emu_last_length = 0x0020; emu_last_crc = 0xC91D; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__2B4C_009E_0006_071A()
 *
 * @name f__2B4C_009E_0006_071A
 * @implements 2B4C:009E:0006:071A ()
 *
 * Called From: 2B4C:0078:0020:C91D
 */
void f__2B4C_009E_0006_071A()
{
	emu_push(emu_bx.x);
	emu_push(emu_cs); emu_push(0x00A4); emu_cs = 0x23E1; f__23E1_0334_000B_B6F7();
	f__2B4C_00A4_000C_6878();
}

/**
 * Decompiled function f__2B4C_00A4_000C_6878()
 *
 * @name f__2B4C_00A4_000C_6878
 * @implements 2B4C:00A4:000C:6878 ()
 *
 * Called From: 2B4C:00A4:0006:071A
 */
void f__2B4C_00A4_000C_6878()
{
	emu_pop(&emu_bx.x);
	emu_orw(&emu_dx.x, emu_dx.x);
	if (!emu_flags.zf) { f__2B4C_00B0_000E_0A00(); return; }
	emu_cmpw(&emu_ax.x, emu_bx.x);
	if (!emu_flags.cf) { emu_ip = 0x00B0; emu_last_cs = 0x2B4C; emu_last_ip = 0x00AB; emu_last_length = 0x000C; emu_last_crc = 0x6878; emu_call(); return; } // Jump does not resolve
	emu_ip = 0x01F9; emu_last_cs = 0x2B4C; emu_last_ip = 0x00AD; emu_last_length = 0x000C; emu_last_crc = 0x6878; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__2B4C_00B0_000E_0A00()
 *
 * @name f__2B4C_00B0_000E_0A00
 * @implements 2B4C:00B0:000E:0A00 ()
 *
 * Called From: 2B4C:00A7:000C:6878
 */
void f__2B4C_00B0_000E_0A00()
{
	emu_push(emu_bx.x);
	emu_movw(&emu_ax.x, 0x0);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_bx.x);
	emu_push(emu_cs); emu_push(0x00BE); emu_cs = 0x23E1; f__23E1_0004_0014_DD3C();
	f__2B4C_00BE_000C_4968();
}

/**
 * Decompiled function f__2B4C_00BE_000C_4968()
 *
 * @name f__2B4C_00BE_000C_4968
 * @implements 2B4C:00BE:000C:4968 ()
 *
 * Called From: 2B4C:00BE:000E:0A00
 */
void f__2B4C_00BE_000C_4968()
{
	emu_addws(&emu_sp, 0x6);
	emu_pop(&emu_bx.x);
	emu_cmpws(&emu_dx.x, 0x0);
	if (!emu_flags.zf) { f__2B4C_00CA_003A_2FD7(); return; }
	emu_ip = 0x01F9; emu_last_cs = 0x2B4C; emu_last_ip = 0x00C7; emu_last_length = 0x000C; emu_last_crc = 0x4968; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__2B4C_00CA_003A_2FD7()
 *
 * @name f__2B4C_00CA_003A_2FD7
 * @implements 2B4C:00CA:003A:2FD7 ()
 *
 * Called From: 2B4C:00C5:000C:4968
 */
void f__2B4C_00CA_003A_2FD7()
{
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x708A), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x708C), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x705A), emu_bx.x);
	emu_lfp(&emu_es, &emu_si, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movw(&emu_bx.x, emu_get_memory16(emu_es, emu_si,  0x8));
	emu_addws(&emu_bx.x, 0xA);
	emu_testw(&emu_get_memory16(emu_es, emu_si,  0x0), 0x1);
	if (emu_flags.zf) { f__2B4C_00E9_001B_C701(); return; }
	emu_addws(&emu_bx.x, 0x10);
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00,  0x705C), emu_bx.x);
	if (!(emu_flags.sf != emu_flags.of)) { emu_ip = 0x0151; emu_last_cs = 0x2B4C; emu_last_ip = 0x00ED; emu_last_length = 0x003A; emu_last_crc = 0x2FD7; emu_call(); return; } // Jump does not resolve
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x7090), 0x0);
	if (emu_flags.zf) { emu_ip = 0x011A; emu_last_cs = 0x2B4C; emu_last_ip = 0x00F4; emu_last_length = 0x003A; emu_last_crc = 0x2FD7; emu_call(); return; } // Jump does not resolve
	emu_push(emu_bx.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x7090));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x708E));
	emu_push(emu_cs); emu_push(0x0104); emu_cs = 0x23E1; emu_ip = 0x02C6; emu_last_cs = 0x2B4C; emu_last_ip = 0x00FF; emu_last_length = 0x003A; emu_last_crc = 0x2FD7; emu_call(); // Jump does not resolve
	f__2B4C_0104_001C_51C2();
}

/**
 * Decompiled function f__2B4C_00D5_002F_94A0()
 *
 * @name f__2B4C_00D5_002F_94A0
 * @implements 2B4C:00D5:002F:94A0 ()
 *
 * Called From: 2B4C:0071:0020:C91D
 */
void f__2B4C_00D5_002F_94A0()
{
	emu_lfp(&emu_es, &emu_si, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movw(&emu_bx.x, emu_get_memory16(emu_es, emu_si,  0x8));
	emu_addws(&emu_bx.x, 0xA);
	emu_testw(&emu_get_memory16(emu_es, emu_si,  0x0), 0x1);
	if (emu_flags.zf) { f__2B4C_00E9_001B_C701(); return; }
	emu_addws(&emu_bx.x, 0x10);
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00,  0x705C), emu_bx.x);
	if (!(emu_flags.sf != emu_flags.of)) { emu_ip = 0x0151; emu_last_cs = 0x2B4C; emu_last_ip = 0x00ED; emu_last_length = 0x002F; emu_last_crc = 0x94A0; emu_call(); return; } // Jump does not resolve
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x7090), 0x0);
	if (emu_flags.zf) { emu_ip = 0x011A; emu_last_cs = 0x2B4C; emu_last_ip = 0x00F4; emu_last_length = 0x002F; emu_last_crc = 0x94A0; emu_call(); return; } // Jump does not resolve
	emu_push(emu_bx.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x7090));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x708E));
	emu_push(emu_cs); emu_push(0x0104); emu_cs = 0x23E1; emu_ip = 0x02C6; emu_last_cs = 0x2B4C; emu_last_ip = 0x00FF; emu_last_length = 0x002F; emu_last_crc = 0x94A0; emu_call(); // Jump does not resolve
	f__2B4C_0104_001C_51C2();
}

/**
 * Decompiled function f__2B4C_00E9_001B_C701()
 *
 * @name f__2B4C_00E9_001B_C701
 * @implements 2B4C:00E9:001B:C701 ()
 *
 * Called From: 2B4C:00E4:002F:94A0
 * Called From: 2B4C:00E4:003A:2FD7
 */
void f__2B4C_00E9_001B_C701()
{
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00,  0x705C), emu_bx.x);
	if (!(emu_flags.sf != emu_flags.of)) { f__2B4C_0151_0018_8EFB(); return; }
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x7090), 0x0);
	if (emu_flags.zf) { f__2B4C_011A_0006_071A(); return; }
	emu_push(emu_bx.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x7090));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x708E));
	emu_push(emu_cs); emu_push(0x0104); emu_cs = 0x23E1; f__23E1_01C2_0011_4E4B();
	f__2B4C_0104_001C_51C2();
}

/**
 * Decompiled function f__2B4C_0104_001C_51C2()
 *
 * @name f__2B4C_0104_001C_51C2
 * @implements 2B4C:0104:001C:51C2 ()
 *
 * Called From: 2B4C:0104:001B:C701
 */
void f__2B4C_0104_001C_51C2()
{
	emu_addws(&emu_sp, 0x4);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x7090), 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x708E), 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x705C), 0x0);
	emu_pop(&emu_bx.x);
	emu_push(emu_bx.x);
	emu_push(emu_cs); emu_push(0x0120); emu_cs = 0x23E1; f__23E1_0334_000B_B6F7();
	f__2B4C_0120_000C_6A6A();
}

/**
 * Decompiled function f__2B4C_011A_0006_071A()
 *
 * @name f__2B4C_011A_0006_071A
 * @implements 2B4C:011A:0006:071A ()
 *
 * Called From: 2B4C:00F4:001B:C701
 */
void f__2B4C_011A_0006_071A()
{
	emu_push(emu_bx.x);
	emu_push(emu_cs); emu_push(0x0120); emu_cs = 0x23E1; f__23E1_0334_000B_B6F7();
	f__2B4C_0120_000C_6A6A();
}

/**
 * Decompiled function f__2B4C_0120_000C_6A6A()
 *
 * @name f__2B4C_0120_000C_6A6A
 * @implements 2B4C:0120:000C:6A6A ()
 *
 * Called From: 2B4C:0120:0006:071A
 * Called From: 2B4C:0120:001C:51C2
 */
void f__2B4C_0120_000C_6A6A()
{
	emu_pop(&emu_bx.x);
	emu_orw(&emu_dx.x, emu_dx.x);
	if (!emu_flags.zf) { f__2B4C_012C_000E_0A00(); return; }
	emu_cmpw(&emu_ax.x, emu_bx.x);
	if (!emu_flags.cf) { emu_ip = 0x012C; emu_last_cs = 0x2B4C; emu_last_ip = 0x0127; emu_last_length = 0x000C; emu_last_crc = 0x6A6A; emu_call(); return; } // Jump does not resolve
	emu_ip = 0x01F9; emu_last_cs = 0x2B4C; emu_last_ip = 0x0129; emu_last_length = 0x000C; emu_last_crc = 0x6A6A; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__2B4C_012C_000E_0A00()
 *
 * @name f__2B4C_012C_000E_0A00
 * @implements 2B4C:012C:000E:0A00 ()
 *
 * Called From: 2B4C:0123:000C:6A6A
 */
void f__2B4C_012C_000E_0A00()
{
	emu_push(emu_bx.x);
	emu_movw(&emu_ax.x, 0x0);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_bx.x);
	emu_push(emu_cs); emu_push(0x013A); emu_cs = 0x23E1; f__23E1_0004_0014_DD3C();
	f__2B4C_013A_000C_4B1A();
}

/**
 * Decompiled function f__2B4C_013A_000C_4B1A()
 *
 * @name f__2B4C_013A_000C_4B1A
 * @implements 2B4C:013A:000C:4B1A ()
 *
 * Called From: 2B4C:013A:000E:0A00
 */
void f__2B4C_013A_000C_4B1A()
{
	emu_addws(&emu_sp, 0x6);
	emu_pop(&emu_bx.x);
	emu_cmpws(&emu_dx.x, 0x0);
	if (!emu_flags.zf) { f__2B4C_0146_0023_7BCE(); return; }
	emu_ip = 0x01F9; emu_last_cs = 0x2B4C; emu_last_ip = 0x0143; emu_last_length = 0x000C; emu_last_crc = 0x4B1A; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__2B4C_0146_0023_7BCE()
 *
 * @name f__2B4C_0146_0023_7BCE
 * @implements 2B4C:0146:0023:7BCE ()
 *
 * Called From: 2B4C:0141:000C:4B1A
 */
void f__2B4C_0146_0023_7BCE()
{
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x7090), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x708E), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x705C), emu_bx.x);
	emu_lfp(&emu_es, &emu_di, &emu_get_memory16(emu_ds, 0x00,  0x708E));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ds);
	emu_lfp(&emu_ds, &emu_si, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, emu_si,  0x0));
	emu_testw(&emu_ax.x, 0x2);
	if (emu_flags.zf) { f__2B4C_0169_0035_C7DD(); return; }
	emu_movw(&emu_cx.x, emu_get_memory16(emu_ds, emu_si,  0x6));
	emu_rep_movsb(emu_ds);
	emu_ip = 0x01AC; emu_last_cs = 0x2B4C; emu_last_ip = 0x0167; emu_last_length = 0x0023; emu_last_crc = 0x7BCE; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__2B4C_0151_0018_8EFB()
 *
 * @name f__2B4C_0151_0018_8EFB
 * @implements 2B4C:0151:0018:8EFB ()
 *
 * Called From: 2B4C:00ED:001B:C701
 */
void f__2B4C_0151_0018_8EFB()
{
	emu_lfp(&emu_es, &emu_di, &emu_get_memory16(emu_ds, 0x00,  0x708E));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ds);
	emu_lfp(&emu_ds, &emu_si, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, emu_si,  0x0));
	emu_testw(&emu_ax.x, 0x2);
	if (emu_flags.zf) { f__2B4C_0169_0035_C7DD(); return; }
	emu_movw(&emu_cx.x, emu_get_memory16(emu_ds, emu_si,  0x6));
	emu_rep_movsb(emu_ds);
	emu_ip = 0x01AC; emu_last_cs = 0x2B4C; emu_last_ip = 0x0167; emu_last_length = 0x0018; emu_last_crc = 0x8EFB; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__2B4C_0169_0035_C7DD()
 *
 * @name f__2B4C_0169_0035_C7DD
 * @implements 2B4C:0169:0035:C7DD ()
 *
 * Called From: 2B4C:0160:0018:8EFB
 * Called From: 2B4C:0160:0023:7BCE
 */
void f__2B4C_0169_0035_C7DD()
{
	emu_lodsw(emu_ds);
	emu_orw(&emu_ax.x, 0x2);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_ax.x);
	emu_stosw();
	emu_movw(&emu_cx.x, 0x3);
	emu_rep_movsw(emu_ds);
	emu_lodsw(emu_ds);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax.x);
	emu_stosw();
	emu_testw(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x1);
	if (emu_flags.zf) { f__2B4C_0187_0017_5C07(); return; }
	emu_movw(&emu_cx.x, 0x8);
	emu_rep_movsw(emu_ds);
	emu_movw(&emu_bx.x, emu_ds);
	emu_movw(&emu_ds, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_es);
	emu_push(emu_di);
	emu_lfp(&emu_es, &emu_di, &emu_get_memory16(emu_ds, 0x00,  0x6F18));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_es);
	emu_push(emu_di);
	emu_push(emu_bx.x);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x019E); emu_cs = 0x2BD6; emu_ip = 0x019E; emu_last_cs = 0x2B4C; emu_last_ip = 0x0199; emu_last_length = 0x0035; emu_last_crc = 0xC7DD; emu_call(); // Jump does not resolve
	f__2B4C_019E_0047_98DA();
}

/**
 * Decompiled function f__2B4C_0187_0017_5C07()
 *
 * @name f__2B4C_0187_0017_5C07
 * @implements 2B4C:0187:0017:5C07 ()
 *
 * Called From: 2B4C:0180:0035:C7DD
 */
void f__2B4C_0187_0017_5C07()
{
	emu_movw(&emu_bx.x, emu_ds);
	emu_movw(&emu_ds, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_es);
	emu_push(emu_di);
	emu_lfp(&emu_es, &emu_di, &emu_get_memory16(emu_ds, 0x00,  0x6F18));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_es);
	emu_push(emu_di);
	emu_push(emu_bx.x);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x019E); emu_cs = 0x2BD6; f__2BD6_0000_0015_D6DC();
	f__2B4C_019E_0047_98DA();
}

/**
 * Decompiled function f__2B4C_019E_0047_98DA()
 *
 * @name f__2B4C_019E_0047_98DA
 * @implements 2B4C:019E:0047:98DA ()
 *
 * Called From: 2B4C:019E:0017:5C07
 */
void f__2B4C_019E_0047_98DA()
{
	emu_addws(&emu_sp, 0xA);
	emu_lfp(&emu_ds, &emu_si, &emu_get_memory16(emu_ds, 0x00,  0x6F18));
	emu_pop(&emu_di);
	emu_pop(&emu_es);
	emu_movw(&emu_cx.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_rep_movsb(emu_ds);
	emu_movw(&emu_ds, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x7078), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x707A), emu_ax.x);
	emu_lfp(&emu_es, &emu_di, &emu_get_memory16(emu_ds, 0x00,  0x708E));
	emu_xorb(&emu_bx.h, emu_bx.h);
	emu_movb(&emu_bx.l, emu_get_memory8(emu_es, emu_di,  0x5));
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x7074), emu_bx.x);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_es, emu_di,  0x3));
	emu_movw(&emu_cx.x, 0x3);
	emu_shrw(&emu_bx.x, emu_cx.l);
	emu_addws(&emu_bx.x, 0x2);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x7076), emu_bx.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x7094));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x7092));

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_ds, 0x00,  0x66B4);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_ds, 0x00,  0x66B6);
	emu_push(0x01E5);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A60FD7: f__22A6_0FD7_0043_03A9(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x2B4C; emu_last_ip = 0x01E1; emu_last_length = 0x0047; emu_last_crc = 0x98DA;
			emu_call();
			return;
	}
	f__2B4C_01E5_0008_F446();
}

/**
 * Decompiled function f__2B4C_01E5_0008_F446()
 *
 * @name f__2B4C_01E5_0008_F446
 * @implements 2B4C:01E5:0008:F446 ()
 *
 * Called From: 2B4C:01E5:0047:98DA
 */
void f__2B4C_01E5_0008_F446()
{
	emu_addws(&emu_sp, 0x4);
	emu_push(emu_cs); emu_push(0x01ED); emu_cs = 0x2B6C; f__2B6C_006E_002E_CEAB();
	f__2B4C_01ED_0004_0D5C();
}

/**
 * Decompiled function f__2B4C_01ED_0004_0D5C()
 *
 * @name f__2B4C_01ED_0004_0D5C
 * @implements 2B4C:01ED:0004:0D5C ()
 *
 * Called From: 2B4C:01ED:0008:F446
 */
void f__2B4C_01ED_0004_0D5C()
{

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_ds, 0x00,  0x66A4);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_ds, 0x00,  0x66A6);
	emu_push(0x01F1);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A60FAE: f__22A6_0FAE_0027_9A7A(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x2B4C; emu_last_ip = 0x01ED; emu_last_length = 0x0004; emu_last_crc = 0x0D5C;
			emu_call();
			return;
	}
	f__2B4C_01F1_0008_E7F0();
}

/**
 * Decompiled function f__2B4C_01F1_0008_E7F0()
 *
 * @name f__2B4C_01F1_0008_E7F0
 * @implements 2B4C:01F1:0008:E7F0 ()
 *
 * Called From: 2B4C:01F1:0004:0D5C
 */
void f__2B4C_01F1_0008_E7F0()
{
	emu_lfp(&emu_es, &emu_ax.x, &emu_get_memory16(emu_ds, 0x00,  0x708E));
	emu_movw(&emu_dx.x, emu_es);
	f__2B4C_01FF_000E_51E3(); return;
}

/**
 * Decompiled function f__2B4C_01FF_000E_51E3()
 *
 * @name f__2B4C_01FF_000E_51E3
 * @implements 2B4C:01FF:000E:51E3 ()
 *
 * Called From: 2B4C:01F7:0008:E7F0
 */
void f__2B4C_01FF_000E_51E3()
{
	emu_decw(&emu_get_memory16(emu_ds, 0x00,  0x705E));
	emu_pop(&emu_di);
	emu_pop(&emu_es);
	emu_pop(&emu_si);
	emu_pop(&emu_ds);
	emu_pop(&emu_cx.x);
	emu_pop(&emu_bx.x);
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

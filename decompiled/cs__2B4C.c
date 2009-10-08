/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__2B4C_0002_0029_64AF()
 *
 * @name f__2B4C_0002_0029_64AF
 * @implements 2B4C:0002:0029:64AF ()
 *
 * Called From: 0AEC:00E3:0048:33A5
 * Called From: 0AEC:1077:003B:40DA
 * Called From: 1423:0305:0021:6A50
 * Called From: B4B8:1A20:0023:5281
 * Called From: B4E9:02F9:0025:A3BA
 * Called From: B4E9:0363:0023:FA52
 * Called From: B4F2:00C5:002E:D76F
 * Called From: B4F2:0367:0027:E6B6
 */
void f__2B4C_0002_0029_64AF()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subw(&emu_sp, 0xA);
	emu_push(emu_bx);
	emu_push(emu_cx);
	emu_push(emu_ds);
	emu_push(emu_si);
	emu_push(emu_es);
	emu_push(emu_di);
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp,  0xC), 0x0);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x001B; emu_last_cs = 0x2B4C; emu_last_ip = 0x0012; emu_last_length = 0x0029; emu_last_crc = 0x64AF; emu_call(); return; }
	emu_cmpb(&emu_get_memory8(emu_ds, 0x00, 0x7097), 0x0);
	if (emu_flags.zf) { f__2B4C_002B_0017_D42A(); return; }
	emu_lfp(&emu_es, &emu_ax, &emu_get_memory16(emu_ds, 0x00, 0x708E));
	emu_movw(&emu_dx, emu_es);
	emu_pop(&emu_di);
	emu_pop(&emu_es);
	emu_pop(&emu_si);
	emu_pop(&emu_ds);
	emu_pop(&emu_cx);
	emu_pop(&emu_bx);
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__2B4C_002B_0017_D42A()
 *
 * @name f__2B4C_002B_0017_D42A
 * @implements 2B4C:002B:0017:D42A ()
 *
 * Called From: 2B4C:0019:0029:64AF
 */
void f__2B4C_002B_0017_D42A()
{
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x705E), 0x0);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x002B; emu_last_cs = 0x2B4C; emu_last_ip = 0x0030; emu_last_length = 0x0017; emu_last_crc = 0xD42A; emu_call(); return; }
	emu_incw(&emu_get_memory16(emu_ds, 0x00, 0x705E));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x7094));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x7092));

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_ds, 0x00, 0x66B4);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_ds, 0x00, 0x66B6);
	emu_push(0x0042);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A60FD7: f__22A6_0FD7_0043_ACF9(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x2B4C; emu_last_ip = 0x003E; emu_last_length = 0x0017; emu_last_crc = 0xD42A;
			emu_call();
			return;
	}
	f__2B4C_0042_0008_63C3();
}

/**
 * Decompiled function f__2B4C_0042_0008_63C3()
 *
 * @name f__2B4C_0042_0008_63C3
 * @implements 2B4C:0042:0008:63C3 ()
 *
 * Called From: 2B4C:0042:0017:D42A
 */
void f__2B4C_0042_0008_63C3()
{
	emu_addw(&emu_sp, 0x4);
	emu_push(emu_cs); emu_push(0x004A); emu_cs = 0x2B6C; f__2B6C_000E_0045_C1FE();
	f__2B4C_004A_0004_C0E6();
}

/**
 * Decompiled function f__2B4C_004A_0004_C0E6()
 *
 * @name f__2B4C_004A_0004_C0E6
 * @implements 2B4C:004A:0004:C0E6 ()
 *
 * Called From: 2B4C:004A:0008:63C3
 */
void f__2B4C_004A_0004_C0E6()
{

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_ds, 0x00, 0x66A4);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_ds, 0x00, 0x66A6);
	emu_push(0x004E);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A60FAE: f__22A6_0FAE_0027_2378(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x2B4C; emu_last_ip = 0x004A; emu_last_length = 0x0004; emu_last_crc = 0xC0E6;
			emu_call();
			return;
	}
	f__2B4C_004E_001A_FD04();
}

/**
 * Decompiled function f__2B4C_004E_001A_FD04()
 *
 * @name f__2B4C_004E_001A_FD04
 * @implements 2B4C:004E:001A:FD04 ()
 *
 * Called From: 2B4C:004E:0004:C0E6
 */
void f__2B4C_004E_001A_FD04()
{
	emu_lfp(&emu_es, &emu_si, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_xorb(&emu_ah, emu_ah);
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_si, 0x5));
	emu_push(emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_si, 0x3));
	emu_movb(&emu_cl, 0x3);
	emu_shrw(&emu_ax, emu_cl);
	emu_addw(&emu_ax, 0x2);
	emu_push(emu_ax);

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_ds, 0x00, 0x66E4);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_ds, 0x00, 0x66E6);
	emu_push(0x0068);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A6127B: f__22A6_127B_0036_F8C9(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x2B4C; emu_last_ip = 0x0064; emu_last_length = 0x001A; emu_last_crc = 0xFD04;
			emu_call();
			return;
	}
	f__2B4C_0068_0020_DBA0();
}

/**
 * Decompiled function f__2B4C_0068_0020_DBA0()
 *
 * @name f__2B4C_0068_0020_DBA0
 * @implements 2B4C:0068:0020:DBA0 ()
 *
 * Called From: 2B4C:0068:001A:FD04
 */
void f__2B4C_0068_0020_DBA0()
{
	emu_addw(&emu_sp, 0x4);
	emu_movw(&emu_bx, emu_ax);
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x705A), emu_bx);
	if (!(emu_flags.sf != emu_flags.of)) { f__2B4C_00D5_002F_AFD5(); return; }
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x708C), 0x0);
	if (emu_flags.zf) { f__2B4C_009E_0006_590A(); return; }
	emu_push(emu_bx);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x708C));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x708A));
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x0088); emu_cs = 0x23E1; emu_ip = 0x01C2; emu_last_cs = 0x2B4C; emu_last_ip = 0x0083; emu_last_length = 0x0020; emu_last_crc = 0xDBA0; emu_call();
	/* Unresolved jump */ emu_ip = 0x0088; emu_last_cs = 0x2B4C; emu_last_ip = 0x0088; emu_last_length = 0x0020; emu_last_crc = 0xDBA0; emu_call();
}

/**
 * Decompiled function f__2B4C_009E_0006_590A()
 *
 * @name f__2B4C_009E_0006_590A
 * @implements 2B4C:009E:0006:590A ()
 *
 * Called From: 2B4C:0078:0020:DBA0
 */
void f__2B4C_009E_0006_590A()
{
	emu_push(emu_bx);
	emu_push(emu_cs); emu_push(0x00A4); emu_cs = 0x23E1; f__23E1_0334_000B_CF65();
	f__2B4C_00A4_000C_B454();
}

/**
 * Decompiled function f__2B4C_00A4_000C_B454()
 *
 * @name f__2B4C_00A4_000C_B454
 * @implements 2B4C:00A4:000C:B454 ()
 *
 * Called From: 2B4C:00A4:0006:590A
 */
void f__2B4C_00A4_000C_B454()
{
	emu_pop(&emu_bx);
	emu_orw(&emu_dx, emu_dx);
	if (!emu_flags.zf) { f__2B4C_00B0_000E_CC99(); return; }
	emu_cmpw(&emu_ax, emu_bx);
	if (!emu_flags.cf) { /* Unresolved jump */ emu_ip = 0x00B0; emu_last_cs = 0x2B4C; emu_last_ip = 0x00AB; emu_last_length = 0x000C; emu_last_crc = 0xB454; emu_call(); return; }
	/* Unresolved jump */ emu_ip = 0x01F9; emu_last_cs = 0x2B4C; emu_last_ip = 0x00AD; emu_last_length = 0x000C; emu_last_crc = 0xB454; emu_call();
}

/**
 * Decompiled function f__2B4C_00B0_000E_CC99()
 *
 * @name f__2B4C_00B0_000E_CC99
 * @implements 2B4C:00B0:000E:CC99 ()
 *
 * Called From: 2B4C:00A7:000C:B454
 */
void f__2B4C_00B0_000E_CC99()
{
	emu_push(emu_bx);
	emu_movw(&emu_ax, 0x0);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_bx);
	emu_push(emu_cs); emu_push(0x00BE); emu_cs = 0x23E1; f__23E1_0004_0014_2BC0();
	f__2B4C_00BE_000C_6572();
}

/**
 * Decompiled function f__2B4C_00BE_000C_6572()
 *
 * @name f__2B4C_00BE_000C_6572
 * @implements 2B4C:00BE:000C:6572 ()
 *
 * Called From: 2B4C:00BE:000E:CC99
 */
void f__2B4C_00BE_000C_6572()
{
	emu_addw(&emu_sp, 0x6);
	emu_pop(&emu_bx);
	emu_cmpw(&emu_dx, 0x0);
	if (!emu_flags.zf) { f__2B4C_00CA_003A_1672(); return; }
	/* Unresolved jump */ emu_ip = 0x01F9; emu_last_cs = 0x2B4C; emu_last_ip = 0x00C7; emu_last_length = 0x000C; emu_last_crc = 0x6572; emu_call();
}

/**
 * Decompiled function f__2B4C_00CA_003A_1672()
 *
 * @name f__2B4C_00CA_003A_1672
 * @implements 2B4C:00CA:003A:1672 ()
 *
 * Called From: 2B4C:00C5:000C:6572
 */
void f__2B4C_00CA_003A_1672()
{
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x708A), emu_ax);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x708C), emu_dx);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x705A), emu_bx);
	emu_lfp(&emu_es, &emu_si, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movw(&emu_bx, emu_get_memory16(emu_es, emu_si, 0x8));
	emu_addw(&emu_bx, 0xA);
	emu_testw(&emu_get_memory16(emu_es, emu_si, 0x0), 0x1);
	if (emu_flags.zf) { f__2B4C_00E9_001B_853E(); return; }
	emu_addw(&emu_bx, 0x10);
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x705C), emu_bx);
	if (!(emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x0151; emu_last_cs = 0x2B4C; emu_last_ip = 0x00ED; emu_last_length = 0x003A; emu_last_crc = 0x1672; emu_call(); return; }
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x7090), 0x0);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x011A; emu_last_cs = 0x2B4C; emu_last_ip = 0x00F4; emu_last_length = 0x003A; emu_last_crc = 0x1672; emu_call(); return; }
	emu_push(emu_bx);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x7090));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x708E));
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x0104); emu_cs = 0x23E1; emu_ip = 0x01C2; emu_last_cs = 0x2B4C; emu_last_ip = 0x00FF; emu_last_length = 0x003A; emu_last_crc = 0x1672; emu_call();
	f__2B4C_0104_001C_EC2A();
}

/**
 * Decompiled function f__2B4C_00D5_002F_AFD5()
 *
 * @name f__2B4C_00D5_002F_AFD5
 * @implements 2B4C:00D5:002F:AFD5 ()
 *
 * Called From: 2B4C:0071:0020:DBA0
 */
void f__2B4C_00D5_002F_AFD5()
{
	emu_lfp(&emu_es, &emu_si, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movw(&emu_bx, emu_get_memory16(emu_es, emu_si, 0x8));
	emu_addw(&emu_bx, 0xA);
	emu_testw(&emu_get_memory16(emu_es, emu_si, 0x0), 0x1);
	if (emu_flags.zf) { f__2B4C_00E9_001B_853E(); return; }
	emu_addw(&emu_bx, 0x10);
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x705C), emu_bx);
	if (!(emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x0151; emu_last_cs = 0x2B4C; emu_last_ip = 0x00ED; emu_last_length = 0x002F; emu_last_crc = 0xAFD5; emu_call(); return; }
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x7090), 0x0);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x011A; emu_last_cs = 0x2B4C; emu_last_ip = 0x00F4; emu_last_length = 0x002F; emu_last_crc = 0xAFD5; emu_call(); return; }
	emu_push(emu_bx);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x7090));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x708E));
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x0104); emu_cs = 0x23E1; emu_ip = 0x01C2; emu_last_cs = 0x2B4C; emu_last_ip = 0x00FF; emu_last_length = 0x002F; emu_last_crc = 0xAFD5; emu_call();
	f__2B4C_0104_001C_EC2A();
}

/**
 * Decompiled function f__2B4C_00E9_001B_853E()
 *
 * @name f__2B4C_00E9_001B_853E
 * @implements 2B4C:00E9:001B:853E ()
 *
 * Called From: 2B4C:00E4:003A:1672
 * Called From: 2B4C:00E4:002F:AFD5
 */
void f__2B4C_00E9_001B_853E()
{
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x705C), emu_bx);
	if (!(emu_flags.sf != emu_flags.of)) { f__2B4C_0151_0018_D96A(); return; }
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x7090), 0x0);
	if (emu_flags.zf) { f__2B4C_011A_0006_590A(); return; }
	emu_push(emu_bx);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x7090));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x708E));
	emu_push(emu_cs); emu_push(0x0104); emu_cs = 0x23E1; f__23E1_01C2_0011_24E8();
	f__2B4C_0104_001C_EC2A();
}

/**
 * Decompiled function f__2B4C_0104_001C_EC2A()
 *
 * @name f__2B4C_0104_001C_EC2A
 * @implements 2B4C:0104:001C:EC2A ()
 *
 * Called From: 2B4C:0104:001B:853E
 */
void f__2B4C_0104_001C_EC2A()
{
	emu_addw(&emu_sp, 0x4);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x7090), 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x708E), 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x705C), 0x0);
	emu_pop(&emu_bx);
	emu_push(emu_bx);
	emu_push(emu_cs); emu_push(0x0120); emu_cs = 0x23E1; f__23E1_0334_000B_CF65();
	f__2B4C_0120_000C_B4F5();
}

/**
 * Decompiled function f__2B4C_011A_0006_590A()
 *
 * @name f__2B4C_011A_0006_590A
 * @implements 2B4C:011A:0006:590A ()
 *
 * Called From: 2B4C:00F4:001B:853E
 */
void f__2B4C_011A_0006_590A()
{
	emu_push(emu_bx);
	emu_push(emu_cs); emu_push(0x0120); emu_cs = 0x23E1; f__23E1_0334_000B_CF65();
	f__2B4C_0120_000C_B4F5();
}

/**
 * Decompiled function f__2B4C_0120_000C_B4F5()
 *
 * @name f__2B4C_0120_000C_B4F5
 * @implements 2B4C:0120:000C:B4F5 ()
 *
 * Called From: 2B4C:0120:0006:590A
 * Called From: 2B4C:0120:001C:EC2A
 */
void f__2B4C_0120_000C_B4F5()
{
	emu_pop(&emu_bx);
	emu_orw(&emu_dx, emu_dx);
	if (!emu_flags.zf) { f__2B4C_012C_000E_CC99(); return; }
	emu_cmpw(&emu_ax, emu_bx);
	if (!emu_flags.cf) { /* Unresolved jump */ emu_ip = 0x012C; emu_last_cs = 0x2B4C; emu_last_ip = 0x0127; emu_last_length = 0x000C; emu_last_crc = 0xB4F5; emu_call(); return; }
	/* Unresolved jump */ emu_ip = 0x01F9; emu_last_cs = 0x2B4C; emu_last_ip = 0x0129; emu_last_length = 0x000C; emu_last_crc = 0xB4F5; emu_call();
}

/**
 * Decompiled function f__2B4C_012C_000E_CC99()
 *
 * @name f__2B4C_012C_000E_CC99
 * @implements 2B4C:012C:000E:CC99 ()
 *
 * Called From: 2B4C:0123:000C:B4F5
 */
void f__2B4C_012C_000E_CC99()
{
	emu_push(emu_bx);
	emu_movw(&emu_ax, 0x0);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_bx);
	emu_push(emu_cs); emu_push(0x013A); emu_cs = 0x23E1; f__23E1_0004_0014_2BC0();
	f__2B4C_013A_000C_65D5();
}

/**
 * Decompiled function f__2B4C_013A_000C_65D5()
 *
 * @name f__2B4C_013A_000C_65D5
 * @implements 2B4C:013A:000C:65D5 ()
 *
 * Called From: 2B4C:013A:000E:CC99
 */
void f__2B4C_013A_000C_65D5()
{
	emu_addw(&emu_sp, 0x6);
	emu_pop(&emu_bx);
	emu_cmpw(&emu_dx, 0x0);
	if (!emu_flags.zf) { f__2B4C_0146_0023_1BAE(); return; }
	/* Unresolved jump */ emu_ip = 0x01F9; emu_last_cs = 0x2B4C; emu_last_ip = 0x0143; emu_last_length = 0x000C; emu_last_crc = 0x65D5; emu_call();
}

/**
 * Decompiled function f__2B4C_0146_0023_1BAE()
 *
 * @name f__2B4C_0146_0023_1BAE
 * @implements 2B4C:0146:0023:1BAE ()
 *
 * Called From: 2B4C:0141:000C:65D5
 */
void f__2B4C_0146_0023_1BAE()
{
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x7090), emu_dx);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x708E), emu_ax);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x705C), emu_bx);
	emu_lfp(&emu_es, &emu_di, &emu_get_memory16(emu_ds, 0x00, 0x708E));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ds);
	emu_lfp(&emu_ds, &emu_si, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, emu_si, 0x0));
	emu_testw(&emu_ax, 0x2);
	if (emu_flags.zf) { f__2B4C_0169_0035_BC12(); return; }
	emu_movw(&emu_cx, emu_get_memory16(emu_ds, emu_si, 0x6));
	emu_rep_movsb(emu_ds);
	/* Unresolved jump */ emu_ip = 0x01AC; emu_last_cs = 0x2B4C; emu_last_ip = 0x0167; emu_last_length = 0x0023; emu_last_crc = 0x1BAE; emu_call();
}

/**
 * Decompiled function f__2B4C_0151_0018_D96A()
 *
 * @name f__2B4C_0151_0018_D96A
 * @implements 2B4C:0151:0018:D96A ()
 *
 * Called From: 2B4C:00ED:001B:853E
 */
void f__2B4C_0151_0018_D96A()
{
	emu_lfp(&emu_es, &emu_di, &emu_get_memory16(emu_ds, 0x00, 0x708E));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ds);
	emu_lfp(&emu_ds, &emu_si, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, emu_si, 0x0));
	emu_testw(&emu_ax, 0x2);
	if (emu_flags.zf) { f__2B4C_0169_0035_BC12(); return; }
	emu_movw(&emu_cx, emu_get_memory16(emu_ds, emu_si, 0x6));
	emu_rep_movsb(emu_ds);
	/* Unresolved jump */ emu_ip = 0x01AC; emu_last_cs = 0x2B4C; emu_last_ip = 0x0167; emu_last_length = 0x0018; emu_last_crc = 0xD96A; emu_call();
}

/**
 * Decompiled function f__2B4C_0169_0035_BC12()
 *
 * @name f__2B4C_0169_0035_BC12
 * @implements 2B4C:0169:0035:BC12 ()
 *
 * Called From: 2B4C:0160:0023:1BAE
 * Called From: 2B4C:0160:0018:D96A
 */
void f__2B4C_0169_0035_BC12()
{
	emu_lodsw(emu_ds);
	emu_orw(&emu_ax, 0x2);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_ax);
	emu_stosw();
	emu_movw(&emu_cx, 0x3);
	emu_rep_movsw(emu_ds);
	emu_lodsw(emu_ds);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax);
	emu_stosw();
	emu_testw(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x1);
	if (emu_flags.zf) { f__2B4C_0187_0017_56F7(); return; }
	emu_movw(&emu_cx, 0x8);
	emu_rep_movsw(emu_ds);
	emu_movw(&emu_bx, emu_ds);
	emu_movw(&emu_ds, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_es);
	emu_push(emu_di);
	emu_lfp(&emu_es, &emu_di, &emu_get_memory16(emu_ds, 0x00, 0x6F18));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_es);
	emu_push(emu_di);
	emu_push(emu_bx);
	emu_push(emu_si);
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x019E); emu_cs = 0x2BD6; emu_ip = 0x0000; emu_last_cs = 0x2B4C; emu_last_ip = 0x0199; emu_last_length = 0x0035; emu_last_crc = 0xBC12; emu_call();
	f__2B4C_019E_0047_12C3();
}

/**
 * Decompiled function f__2B4C_0187_0017_56F7()
 *
 * @name f__2B4C_0187_0017_56F7
 * @implements 2B4C:0187:0017:56F7 ()
 *
 * Called From: 2B4C:0180:0035:BC12
 */
void f__2B4C_0187_0017_56F7()
{
	emu_movw(&emu_bx, emu_ds);
	emu_movw(&emu_ds, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_es);
	emu_push(emu_di);
	emu_lfp(&emu_es, &emu_di, &emu_get_memory16(emu_ds, 0x00, 0x6F18));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_es);
	emu_push(emu_di);
	emu_push(emu_bx);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x019E); emu_cs = 0x2BD6; f__2BD6_0000_0015_24A9();
	f__2B4C_019E_0047_12C3();
}

/**
 * Decompiled function f__2B4C_019E_0047_12C3()
 *
 * @name f__2B4C_019E_0047_12C3
 * @implements 2B4C:019E:0047:12C3 ()
 *
 * Called From: 2B4C:019E:0017:56F7
 */
void f__2B4C_019E_0047_12C3()
{
	emu_addw(&emu_sp, 0xA);
	emu_lfp(&emu_ds, &emu_si, &emu_get_memory16(emu_ds, 0x00, 0x6F18));
	emu_pop(&emu_di);
	emu_pop(&emu_es);
	emu_movw(&emu_cx, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_rep_movsb(emu_ds);
	emu_movw(&emu_ds, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x7078), emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x707A), emu_ax);
	emu_lfp(&emu_es, &emu_di, &emu_get_memory16(emu_ds, 0x00, 0x708E));
	emu_xorb(&emu_bh, emu_bh);
	emu_movb(&emu_bl, emu_get_memory8(emu_es, emu_di, 0x5));
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x7074), emu_bx);
	emu_movw(&emu_bx, emu_get_memory16(emu_es, emu_di, 0x3));
	emu_movw(&emu_cx, 0x3);
	emu_shrw(&emu_bx, emu_cl);
	emu_addw(&emu_bx, 0x2);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x7076), emu_bx);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x7094));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x7092));

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_ds, 0x00, 0x66B4);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_ds, 0x00, 0x66B6);
	emu_push(0x01E5);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A60FD7: f__22A6_0FD7_0043_ACF9(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x2B4C; emu_last_ip = 0x01E1; emu_last_length = 0x0047; emu_last_crc = 0x12C3;
			emu_call();
			return;
	}
	f__2B4C_01E5_0008_63C5();
}

/**
 * Decompiled function f__2B4C_01E5_0008_63C5()
 *
 * @name f__2B4C_01E5_0008_63C5
 * @implements 2B4C:01E5:0008:63C5 ()
 *
 * Called From: 2B4C:01E5:0047:12C3
 */
void f__2B4C_01E5_0008_63C5()
{
	emu_addw(&emu_sp, 0x4);
	emu_push(emu_cs); emu_push(0x01ED); emu_cs = 0x2B6C; f__2B6C_006E_002E_4FBC();
	f__2B4C_01ED_0004_C0E6();
}

/**
 * Decompiled function f__2B4C_01ED_0004_C0E6()
 *
 * @name f__2B4C_01ED_0004_C0E6
 * @implements 2B4C:01ED:0004:C0E6 ()
 *
 * Called From: 2B4C:01ED:0008:63C5
 */
void f__2B4C_01ED_0004_C0E6()
{

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_ds, 0x00, 0x66A4);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_ds, 0x00, 0x66A6);
	emu_push(0x01F1);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A60FAE: f__22A6_0FAE_0027_2378(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x2B4C; emu_last_ip = 0x01ED; emu_last_length = 0x0004; emu_last_crc = 0xC0E6;
			emu_call();
			return;
	}
	f__2B4C_01F1_0008_E4FC();
}

/**
 * Decompiled function f__2B4C_01F1_0008_E4FC()
 *
 * @name f__2B4C_01F1_0008_E4FC
 * @implements 2B4C:01F1:0008:E4FC ()
 *
 * Called From: 2B4C:01F1:0004:C0E6
 */
void f__2B4C_01F1_0008_E4FC()
{
	emu_lfp(&emu_es, &emu_ax, &emu_get_memory16(emu_ds, 0x00, 0x708E));
	emu_movw(&emu_dx, emu_es);
	f__2B4C_01FF_000E_5009(); return;
}

/**
 * Decompiled function f__2B4C_01FF_000E_5009()
 *
 * @name f__2B4C_01FF_000E_5009
 * @implements 2B4C:01FF:000E:5009 ()
 *
 * Called From: 2B4C:01F7:0008:E4FC
 */
void f__2B4C_01FF_000E_5009()
{
	emu_decw(&emu_get_memory16(emu_ds, 0x00, 0x705E));
	emu_pop(&emu_di);
	emu_pop(&emu_es);
	emu_pop(&emu_si);
	emu_pop(&emu_ds);
	emu_pop(&emu_cx);
	emu_pop(&emu_bx);
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

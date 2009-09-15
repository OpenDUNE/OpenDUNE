/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__2B0E_0006_0049_1E3C()
 *
 * @name f__2B0E_0006_0049_1E3C
 * @implements 2B0E:0006:0049:1E3C ()
 *
 * Called From: 0C3A:178D:0019:AA3E
 * Called From: 0FCB:016A:0037:EE08
 * Called From: 253D:01F1:002B:AA96
 * Called From: 253D:02A6:0039:BDE1
 * Called From: B483:04AE:0017:873D
 * Called From: B495:001D:0022:74CE
 * Called From: B495:00D8:001C:4BB1
 * Called From: B4B8:1831:001F:C7ED
 * Called From: B4B8:1CA3:001F:C7ED
 * Called From: B4F2:00E6:0019:82DA
 * Called From: B4F2:0DFD:001F:0789
 * Called From: B4F2:0E46:001C:A1FA
 * Called From: B4F2:0EB7:0038:A2DE
 * Called From: B518:1110:001C:160C
 * Called From: B518:1133:0023:0240
 * Called From: B52A:0981:0020:0678
 */
void f__2B0E_0006_0049_1E3C()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_ax.x);
	emu_push(emu_bx.x);
	emu_push(emu_cx.x);
	emu_push(emu_dx.x);
	emu_push(emu_ds);
	emu_push(emu_si);
	emu_push(emu_es);
	emu_push(emu_di);
	emu_xorw(&emu_cx.x, emu_cx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_cmpw(&emu_ax.x, 0xF000);
	if (emu_flags.cf) { f__2B0E_001E_0031_80A6(); return; }
	emu_orws(&emu_cx.x, 0x1);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_cmpw(&emu_ax.x, 0xF000);
	if (emu_flags.cf) { emu_ip = 0x0029; emu_last_cs = 0x2B0E; emu_last_ip = 0x0024; emu_last_length = 0x0049; emu_last_crc = 0x1E3C; emu_call(); return; } // Jump does not resolve
	emu_orws(&emu_cx.x, 0x2);
	emu_cmpws(&emu_cx.x, 0x0);
	if (emu_flags.zf) { emu_ip = 0x0068; emu_last_cs = 0x2B0E; emu_last_ip = 0x002C; emu_last_length = 0x0049; emu_last_crc = 0x1E3C; emu_call(); return; } // Jump does not resolve
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x10));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpws(&emu_cx.x, 0x1);
	if (!emu_flags.zf) { emu_ip = 0x005E; emu_last_cs = 0x2B0E; emu_last_ip = 0x0043; emu_last_length = 0x0049; emu_last_crc = 0x1E3C; emu_call(); return; } // Jump does not resolve
	emu_cmpws(&emu_cx.x, 0x3);
	if (emu_flags.zf) { emu_ip = 0x0054; emu_last_cs = 0x2B0E; emu_last_ip = 0x0048; emu_last_length = 0x0049; emu_last_crc = 0x1E3C; emu_call(); return; } // Jump does not resolve
	emu_push(emu_cs); emu_push(0x004F); emu_cs = 0x2649; emu_ip = 0x0D8F; emu_last_cs = 0x2B0E; emu_last_ip = 0x004A; emu_last_length = 0x0049; emu_last_crc = 0x1E3C; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__2B0E_001E_0031_80A6()
 *
 * @name f__2B0E_001E_0031_80A6
 * @implements 2B0E:001E:0031:80A6 ()
 *
 * Called From: 2B0E:0019:0049:1E3C
 */
void f__2B0E_001E_0031_80A6()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_cmpw(&emu_ax.x, 0xF000);
	if (emu_flags.cf) { f__2B0E_0029_0026_93F2(); return; }
	emu_orws(&emu_cx.x, 0x2);
	emu_cmpws(&emu_cx.x, 0x0);
	if (emu_flags.zf) { emu_ip = 0x0068; emu_last_cs = 0x2B0E; emu_last_ip = 0x002C; emu_last_length = 0x0031; emu_last_crc = 0x80A6; emu_call(); return; } // Jump does not resolve
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x10));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpws(&emu_cx.x, 0x1);
	if (!emu_flags.zf) { emu_ip = 0x005E; emu_last_cs = 0x2B0E; emu_last_ip = 0x0043; emu_last_length = 0x0031; emu_last_crc = 0x80A6; emu_call(); return; } // Jump does not resolve
	emu_cmpws(&emu_cx.x, 0x3);
	if (emu_flags.zf) { emu_ip = 0x0054; emu_last_cs = 0x2B0E; emu_last_ip = 0x0048; emu_last_length = 0x0031; emu_last_crc = 0x80A6; emu_call(); return; } // Jump does not resolve
	emu_push(emu_cs); emu_push(0x004F); emu_cs = 0x2649; emu_ip = 0x0D8F; emu_last_cs = 0x2B0E; emu_last_ip = 0x004A; emu_last_length = 0x0031; emu_last_crc = 0x80A6; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__2B0E_0029_0026_93F2()
 *
 * @name f__2B0E_0029_0026_93F2
 * @implements 2B0E:0029:0026:93F2 ()
 *
 * Called From: 2B0E:0024:0031:80A6
 */
void f__2B0E_0029_0026_93F2()
{
	emu_cmpws(&emu_cx.x, 0x0);
	if (emu_flags.zf) { f__2B0E_0068_0068_33F7(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x10));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpws(&emu_cx.x, 0x1);
	if (!emu_flags.zf) { emu_ip = 0x005E; emu_last_cs = 0x2B0E; emu_last_ip = 0x0043; emu_last_length = 0x0026; emu_last_crc = 0x93F2; emu_call(); return; } // Jump does not resolve
	emu_cmpws(&emu_cx.x, 0x3);
	if (emu_flags.zf) { emu_ip = 0x0054; emu_last_cs = 0x2B0E; emu_last_ip = 0x0048; emu_last_length = 0x0026; emu_last_crc = 0x93F2; emu_call(); return; } // Jump does not resolve
	emu_push(emu_cs); emu_push(0x004F); emu_cs = 0x2649; emu_ip = 0x0D8F; emu_last_cs = 0x2B0E; emu_last_ip = 0x004A; emu_last_length = 0x0026; emu_last_crc = 0x93F2; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__2B0E_0068_0068_33F7()
 *
 * @name f__2B0E_0068_0068_33F7
 * @implements 2B0E:0068:0068:33F7 ()
 *
 * Called From: 2B0E:002C:0026:93F2
 */
void f__2B0E_0068_0068_33F7()
{
	emu_cld();
	emu_movb(&emu_cx.l, 0x4);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_si, emu_ax.x);
	emu_shrw(&emu_ax.x, emu_cx.l);
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_ds, emu_ax.x);
	emu_andws(&emu_si, 0xF);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movw(&emu_di, emu_ax.x);
	emu_shrw(&emu_ax.x, emu_cx.l);
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_movw(&emu_es, emu_ax.x);
	emu_andws(&emu_di, 0xF);
	emu_movw(&emu_cx.x, emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp,  0x10));
	emu_shlw(&emu_cx.x, 0x1);
	emu_rclw(&emu_bx.x, 0x1);
	emu_shrw(&emu_cx.x, 0x1);
	emu_shrw(&emu_cx.x, 0x1);
	emu_rep_movsw(emu_ds);
	emu_adcws(&emu_cx.x, 0x0);
	emu_rep_movsb(emu_ds);
	emu_orw(&emu_bx.x, emu_bx.x);
	if (emu_flags.zf) { f__2B0E_00C6_000A_39B3(); return; }
	emu_movb(&emu_cx.l, 0x4);
	emu_movw(&emu_dx.x, emu_si);
	emu_shrw(&emu_dx.x, emu_cx.l);
	emu_movw(&emu_ax.x, emu_ds);
	emu_addw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_ds, emu_ax.x);
	emu_andws(&emu_si, 0xF);
	emu_movw(&emu_dx.x, emu_di);
	emu_shrw(&emu_dx.x, emu_cx.l);
	emu_movw(&emu_ax.x, emu_es);
	emu_addw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_es, emu_ax.x);
	emu_andws(&emu_di, 0xF);
	emu_movw(&emu_cx.x, 0x4000);
	emu_rep_movsw(emu_ds);
	emu_decw(&emu_bx.x);
	if (!emu_flags.zf) { emu_ip = 0x00A2; emu_last_cs = 0x2B0E; emu_last_ip = 0x00C4; emu_last_length = 0x0068; emu_last_crc = 0x33F7; emu_call(); return; } // Jump does not resolve
	emu_pop(&emu_di);
	emu_pop(&emu_es);
	emu_pop(&emu_si);
	emu_pop(&emu_ds);
	emu_pop(&emu_dx.x);
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
 * Decompiled function f__2B0E_00C6_000A_39B3()
 *
 * @name f__2B0E_00C6_000A_39B3
 * @implements 2B0E:00C6:000A:39B3 ()
 *
 * Called From: 2B0E:00A0:0068:33F7
 */
void f__2B0E_00C6_000A_39B3()
{
	emu_pop(&emu_di);
	emu_pop(&emu_es);
	emu_pop(&emu_si);
	emu_pop(&emu_ds);
	emu_pop(&emu_dx.x);
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
 * Decompiled function f__2B0E_00D0_0022_D0C8()
 *
 * @name f__2B0E_00D0_0022_D0C8
 * @implements 2B0E:00D0:0022:D0C8 ()
 *
 * Called From: 0FE4:0156:001C:6582
 * Called From: 104B:0074:001C:6A82
 * Called From: 1082:00AF:001C:6F82
 * Called From: 10BE:0027:0020:8CB4
 * Called From: 1587:00FD:0032:465B
 * Called From: 1587:01FA:0022:8761
 * Called From: 1587:0277:004E:56EF
 * Called From: 1FB5:0C16:000B:EC28
 * Called From: 1FB5:0DE8:001D:3FD6
 * Called From: 1FB5:11DC:001D:3F66
 * Called From: 23E1:00B1:000B:3929
 * Called From: 253D:01C6:003E:BCDC
 * Called From: 253D:01C6:0041:BD1A
 * Called From: 25C4:01E0:0011:3135
 * Called From: 2903:00BD:0016:3BF4
 * Called From: 2AE1:009A:0009:F6AE
 * Called From: 2AE1:00A8:000E:F6D0
 * Called From: B4B8:0E53:009B:53DA
 * Called From: B4B8:1A71:001E:30C8
 * Called From: B4B8:1A96:0025:8323
 * Called From: B4B8:1AB9:0010:6B5B
 * Called From: B4B8:1ADC:0010:6B5B
 * Called From: B4B8:1AFF:0010:6B5B
 * Called From: B4B8:1B26:0014:2C46
 * Called From: B4B8:1B4B:0025:DCD9
 * Called From: B4FC:041C:000B:C828
 * Called From: B4FC:07FA:000B:EBA8
 * Called From: B503:107E:0017:B665
 * Called From: B503:10B5:0018:6FA5
 * Called From: B503:10EC:0018:6FA5
 * Called From: B503:1148:0018:6FA5
 * Called From: B52A:050B:0014:378F
 */
void f__2B0E_00D0_0022_D0C8()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_cmpw(&emu_dx.x, 0xF000);
	if (!emu_flags.cf) { emu_ip = 0x00EE; emu_last_cs = 0x2B0E; emu_last_ip = 0x00DD; emu_last_length = 0x0022; emu_last_crc = 0xD0C8; emu_call(); return; } // Jump does not resolve
	emu_push(emu_ax.x);
	emu_shrw(&emu_ax.x, 0x1);
	emu_shrw(&emu_ax.x, 0x1);
	emu_shrw(&emu_ax.x, 0x1);
	emu_shrw(&emu_ax.x, 0x1);
	emu_addw(&emu_dx.x, emu_ax.x);
	emu_pop(&emu_ax.x);
	emu_andw(&emu_ax.x, 0xF);
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__2B0E_00F2_0016_467E()
 *
 * @name f__2B0E_00F2_0016_467E
 * @implements 2B0E:00F2:0016:467E ()
 *
 * Called From: 2BD6:0010:0015:D6DC
 * Called From: 2BD6:001F:000F:0B6E
 */
void f__2B0E_00F2_0016_467E()
{
	emu_cmpw(&emu_dx.x, 0xF000);
	if (!emu_flags.cf) { emu_ip = 0x0107; emu_last_cs = 0x2B0E; emu_last_ip = 0x00F6; emu_last_length = 0x0016; emu_last_crc = 0x467E; emu_call(); return; } // Jump does not resolve
	emu_push(emu_ax.x);
	emu_shrw(&emu_ax.x, 0x1);
	emu_shrw(&emu_ax.x, 0x1);
	emu_shrw(&emu_ax.x, 0x1);
	emu_shrw(&emu_ax.x, 0x1);
	emu_addw(&emu_dx.x, emu_ax.x);
	emu_pop(&emu_ax.x);
	emu_andw(&emu_ax.x, 0xF);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

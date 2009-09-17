/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__29A3_0224_0009_AA5D()
 *
 * @name f__29A3_0224_0009_AA5D
 * @implements 29A3:0224:0009:AA5D ()
 *
 * Called From: 25C4:0055:0006:F43B
 */
void f__29A3_0224_0009_AA5D()
{
	emu_push(emu_bx.x);
	emu_push(emu_cx.x);
	emu_push(emu_dx.x);
	emu_push(emu_es);
	emu_movw(&emu_ax.x, 0x3533);
	emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = 0x0070; emu_push(0x022D); f__0070_0108_0005_E45B();
	f__29A3_022D_003C_7E93();
}

/**
 * Decompiled function f__29A3_022D_003C_7E93()
 *
 * @name f__29A3_022D_003C_7E93
 * @implements 29A3:022D:003C:7E93 ()
 *
 * Called From: 29A3:022D:0009:AA5D
 */
void f__29A3_022D_003C_7E93()
{
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x7060), 0xA0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x7062), 0x64);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x706A), 0x1);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x7080), 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x706E), 0x13F);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x7072), 0xC7);
	emu_movw(&emu_ax.x, emu_es);
	emu_orw(&emu_ax.x, emu_bx.x);
	if (emu_flags.zf) { emu_ip = 0x025F; emu_last_cs = 0x29A3; emu_last_ip = 0x0255; emu_last_length = 0x003C; emu_last_crc = 0x7E93; emu_call(); return; } // Jump does not resolve
	emu_movb(&emu_bx.l, emu_get_memory8(emu_es, emu_bx.x,  0x0));
	emu_cmpb(&emu_bx.l, 0xCF);
	if (!emu_flags.zf) { f__29A3_0269_0005_5C73(); return; }
	emu_movw(&emu_ax.x, 0x0);
	emu_movb(&emu_get_memory8(emu_ds, 0x00,  0x7096), 0x0);
	emu_ip = 0x02B8; emu_last_cs = 0x29A3; emu_last_ip = 0x0267; emu_last_length = 0x003C; emu_last_crc = 0x7E93; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__29A3_0269_0005_5C73()
 *
 * @name f__29A3_0269_0005_5C73
 * @implements 29A3:0269:0005:5C73 ()
 *
 * Called From: 29A3:025D:003C:7E93
 */
void f__29A3_0269_0005_5C73()
{
	emu_movw(&emu_ax.x, 0x0);
	emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = 0x0070; emu_push(0x026E); f__0070_0198_0005_E61B();
	f__29A3_026E_0010_A6DC();
}

/**
 * Decompiled function f__29A3_026E_0010_A6DC()
 *
 * @name f__29A3_026E_0010_A6DC
 * @implements 29A3:026E:0010:A6DC ()
 *
 * Called From: 29A3:026E:0005:5C73
 */
void f__29A3_026E_0010_A6DC()
{
	emu_cmpw(&emu_ax.x, 0xFFFF);
	if (!emu_flags.zf) { emu_ip = 0x025F; emu_last_cs = 0x29A3; emu_last_ip = 0x0271; emu_last_length = 0x0010; emu_last_crc = 0xA6DC; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x7068), 0x0);
	emu_movw(&emu_ax.x, 0x3);
	emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = 0x0070; emu_push(0x027E); f__0070_0198_0005_E61B();
	f__29A3_027E_002A_70B8();
}

/**
 * Decompiled function f__29A3_027E_002A_70B8()
 *
 * @name f__29A3_027E_002A_70B8
 * @implements 29A3:027E:002A:70B8 ()
 *
 * Called From: 29A3:027E:0010:A6DC
 */
void f__29A3_027E_002A_70B8()
{
	emu_cmpw(&emu_cx.x, 0xA0);
	if (emu_flags.zf) { emu_ip = 0x028A; emu_last_cs = 0x29A3; emu_last_ip = 0x0282; emu_last_length = 0x002A; emu_last_crc = 0x70B8; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x7068), 0x1);
	emu_movw(&emu_cx.x, 0xA0);
	emu_movw(&emu_dx.x, 0x64);
	emu_movb(&emu_get_memory8(emu_ds, 0x00,  0x7096), 0x1);
	emu_movb(&emu_get_memory8(emu_ds, 0x00,  0x7097), 0x1);
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x7068), 0x1);
	if (!emu_flags.zf) { emu_ip = 0x02A3; emu_last_cs = 0x29A3; emu_last_ip = 0x029F; emu_last_length = 0x002A; emu_last_crc = 0x70B8; emu_call(); return; } // Jump does not resolve
	emu_shlw(&emu_cx.x, 0x1);
	emu_movw(&emu_ax.x, 0x4);
	emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = 0x0070; emu_push(0x02A8); f__0070_0198_0005_E61B();
	f__29A3_02A8_000D_6EF0();
}

/**
 * Decompiled function f__29A3_02A8_000D_6EF0()
 *
 * @name f__29A3_02A8_000D_6EF0
 * @implements 29A3:02A8:000D:6EF0 ()
 *
 * Called From: 29A3:02A8:002A:70B8
 */
void f__29A3_02A8_000D_6EF0()
{
	emu_movw(&emu_ax.x, 0xC);
	emu_movw(&emu_cx.x, 0x1F);
	emu_push(emu_cs);
	emu_pop(&emu_es);
	emu_movw(&emu_dx.x, 0x54);
	emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = 0x0070; emu_push(0x02B5); f__0070_0198_0005_E61B();
	f__29A3_02B5_0008_B689();
}

/**
 * Decompiled function f__29A3_02B5_0008_B689()
 *
 * @name f__29A3_02B5_0008_B689
 * @implements 29A3:02B5:0008:B689 ()
 *
 * Called From: 29A3:02B5:000D:6EF0
 */
void f__29A3_02B5_0008_B689()
{
	emu_movw(&emu_ax.x, 0x1);
	emu_pop(&emu_es);
	emu_pop(&emu_dx.x);
	emu_pop(&emu_cx.x);
	emu_pop(&emu_bx.x);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__29A3_02BD_0018_A1B5()
 *
 * @name f__29A3_02BD_0018_A1B5
 * @implements 29A3:02BD:0018:A1B5 ()
 *
 * Called From: B500:000F:000C:F964
 */
void f__29A3_02BD_0018_A1B5()
{
	emu_push(emu_ax.x);
	emu_push(emu_cx.x);
	emu_push(emu_dx.x);
	emu_push(emu_es);
	emu_cmpb(&emu_get_memory8(emu_ds, 0x00,  0x7096), 0x0);
	if (emu_flags.zf) { emu_ip = 0x02D5; emu_last_cs = 0x29A3; emu_last_ip = 0x02C6; emu_last_length = 0x0018; emu_last_crc = 0xA1B5; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, 0xC);
	emu_movw(&emu_cx.x, 0x0);
	emu_push(emu_cs);
	emu_pop(&emu_es);
	emu_movw(&emu_dx.x, 0x54);
	emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = 0x0070; emu_push(0x02D5); f__0070_0198_0005_E61B();
	f__29A3_02D5_0005_CE8B();
}

/**
 * Decompiled function f__29A3_02D5_0005_CE8B()
 *
 * @name f__29A3_02D5_0005_CE8B
 * @implements 29A3:02D5:0005:CE8B ()
 *
 * Called From: 29A3:02D5:0018:A1B5
 */
void f__29A3_02D5_0005_CE8B()
{
	emu_pop(&emu_es);
	emu_pop(&emu_dx.x);
	emu_pop(&emu_cx.x);
	emu_pop(&emu_ax.x);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__29A3_02DA_003B_81C9()
 *
 * @name f__29A3_02DA_003B_81C9
 * @implements 29A3:02DA:003B:81C9 ()
 *
 * Called From: B4DA:05D7:001D:D9A0
 * Called From: B4DA:05D7:0022:75AA
 * Called From: B4DA:06F6:001D:CAEC
 * Called From: B4DA:06F6:0022:66D2
 * Called From: B4DA:075C:0029:DB1C
 * Called From: B4DA:0787:0021:7FD6
 * Called From: B4DA:07B9:0026:9772
 * Called From: B4DA:07EB:0026:D694
 */
void f__29A3_02DA_003B_81C9()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_bx.x);
	emu_push(emu_cx.x);
	emu_push(emu_dx.x);
	emu_push(emu_di);
	emu_push(emu_si);
	emu_movw(&emu_cx.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_di, emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x705E), 0x0);
	if (!emu_flags.zf) { f__29A3_02EE_0027_7721(); return; }
	emu_incw(&emu_get_memory16(emu_ds, 0x00,  0x705E));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x7060));
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00,  0x7062));
	emu_cmpw(&emu_ax.x, emu_cx.x);
	if ((emu_flags.sf != emu_flags.of)) { f__29A3_0315_000E_51CF(); return; }
	emu_cmpw(&emu_ax.x, emu_si);
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__29A3_0315_000E_51CF(); return; }
	emu_cmpw(&emu_bx.x, emu_dx.x);
	if ((emu_flags.sf != emu_flags.of)) { f__29A3_0315_000E_51CF(); return; }
	emu_cmpw(&emu_bx.x, emu_di);
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__29A3_0315_000E_51CF(); return; }
	emu_movw(&emu_ax.x, 0x1);
	f__29A3_0318_000B_532F(); return;
}

/**
 * Decompiled function f__29A3_02EE_0027_7721()
 *
 * @name f__29A3_02EE_0027_7721
 * @implements 29A3:02EE:0027:7721 ()
 *
 * Called From: 29A3:02F3:003B:81C9
 */
void f__29A3_02EE_0027_7721()
{
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x705E), 0x0);
	if (!emu_flags.zf) { emu_ip = 0x02EE; emu_last_cs = 0x29A3; emu_last_ip = 0x02F3; emu_last_length = 0x0027; emu_last_crc = 0x7721; emu_call(); return; } // Jump does not resolve
	emu_incw(&emu_get_memory16(emu_ds, 0x00,  0x705E));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x7060));
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00,  0x7062));
	emu_cmpw(&emu_ax.x, emu_cx.x);
	if ((emu_flags.sf != emu_flags.of)) { f__29A3_0315_000E_51CF(); return; }
	emu_cmpw(&emu_ax.x, emu_si);
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__29A3_0315_000E_51CF(); return; }
	emu_cmpw(&emu_bx.x, emu_dx.x);
	if ((emu_flags.sf != emu_flags.of)) { emu_ip = 0x0315; emu_last_cs = 0x29A3; emu_last_ip = 0x030A; emu_last_length = 0x0027; emu_last_crc = 0x7721; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_bx.x, emu_di);
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { emu_ip = 0x0315; emu_last_cs = 0x29A3; emu_last_ip = 0x030E; emu_last_length = 0x0027; emu_last_crc = 0x7721; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, 0x1);
	emu_ip = 0x0318; emu_last_cs = 0x29A3; emu_last_ip = 0x0313; emu_last_length = 0x0027; emu_last_crc = 0x7721; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__29A3_0315_000E_51CF()
 *
 * @name f__29A3_0315_000E_51CF
 * @implements 29A3:0315:000E:51CF ()
 *
 * Called From: 29A3:0302:003B:81C9
 * Called From: 29A3:0302:0027:7721
 * Called From: 29A3:0306:003B:81C9
 * Called From: 29A3:0306:0027:7721
 * Called From: 29A3:030A:003B:81C9
 * Called From: 29A3:030E:003B:81C9
 */
void f__29A3_0315_000E_51CF()
{
	emu_movw(&emu_ax.x, 0x0);
	emu_decw(&emu_get_memory16(emu_ds, 0x00,  0x705E));
	emu_pop(&emu_si);
	emu_pop(&emu_di);
	emu_pop(&emu_dx.x);
	emu_pop(&emu_cx.x);
	emu_pop(&emu_bx.x);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__29A3_0318_000B_532F()
 *
 * @name f__29A3_0318_000B_532F
 * @implements 29A3:0318:000B:532F ()
 *
 * Called From: 29A3:0313:003B:81C9
 */
void f__29A3_0318_000B_532F()
{
	emu_decw(&emu_get_memory16(emu_ds, 0x00,  0x705E));
	emu_pop(&emu_si);
	emu_pop(&emu_di);
	emu_pop(&emu_dx.x);
	emu_pop(&emu_cx.x);
	emu_pop(&emu_bx.x);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

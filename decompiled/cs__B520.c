/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__B520_0000_0019_4B8A()
 *
 * @name f__B520_0000_0019_4B8A
 * @implements B520:0000:0019:4B8A ()
 *
 * Called From: 3520:004D:0005:1F3E
 */
void f__B520_0000_0019_4B8A()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x6);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movw(&emu_di, emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x0019); f__B520_00E3_0028_9365();
	f__B520_0019_0010_8D31();
}

/**
 * Decompiled function f__B520_0019_0010_8D31()
 *
 * @name f__B520_0019_0010_8D31
 * @implements B520:0019:0010:8D31 ()
 *
 * Called From: B520:0019:0019:4B8A
 */
void f__B520_0019_0010_8D31()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (!emu_flags.zf) { f__B520_0029_0032_4E28(); return; }
	emu_ip = 0x00D8; emu_last_cs = 0xB520; emu_last_ip = 0x0026; emu_last_length = 0x0010; emu_last_crc = 0x8D31; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B520_0029_0032_4E28()
 *
 * @name f__B520_0029_0032_4E28
 * @implements B520:0029:0032:4E28 ()
 *
 * Called From: B520:0024:0010:8D31
 */
void f__B520_0029_0032_4E28()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x36));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_es, emu_bx.x,  0x34));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_dx.x);
	emu_orw(&emu_si, emu_si);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { emu_ip = 0x0045; emu_last_cs = 0xB520; emu_last_ip = 0x003C; emu_last_length = 0x0032; emu_last_crc = 0x4E28; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x8), emu_si);
	emu_orw(&emu_di, emu_di);
	if ((emu_flags.sf != emu_flags.of)) { emu_ip = 0x0066; emu_last_cs = 0xB520; emu_last_ip = 0x0047; emu_last_length = 0x0032; emu_last_crc = 0x4E28; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx.x,  0x8), emu_di);
	if (!(emu_flags.sf != emu_flags.of)) { f__B520_005B_002A_5EA4(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x8));
	emu_ip = 0x005D; emu_last_cs = 0xB520; emu_last_ip = 0x0059; emu_last_length = 0x0032; emu_last_crc = 0x4E28; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B520_005B_002A_5EA4()
 *
 * @name f__B520_005B_002A_5EA4
 * @implements B520:005B:002A:5EA4 ()
 *
 * Called From: B520:0050:0032:4E28
 */
void f__B520_005B_002A_5EA4()
{
	emu_movw(&emu_ax.x, emu_di);
	emu_movw(&emu_di, emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0xA), emu_di);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0xE), 0x0);
	if ((emu_flags.sf != emu_flags.of)) { emu_ip = 0x0095; emu_last_cs = 0xB520; emu_last_ip = 0x006A; emu_last_length = 0x002A; emu_last_crc = 0x5EA4; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x8));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_subw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0xA));
	emu_movw(&emu_si, emu_ax.x);
	emu_cmpw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0xE));
	if (!(emu_flags.sf != emu_flags.of)) { f__B520_0085_001B_B877(); return; }
	emu_movw(&emu_ax.x, emu_si);
	emu_ip = 0x0088; emu_last_cs = 0xB520; emu_last_ip = 0x0083; emu_last_length = 0x002A; emu_last_crc = 0x5EA4; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B520_0085_001B_B877()
 *
 * @name f__B520_0085_001B_B877
 * @implements B520:0085:001B:B877 ()
 *
 * Called From: B520:007F:002A:5EA4
 */
void f__B520_0085_001B_B877()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0xE), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0xC), emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_cs);
	emu_push(0x00A0); f__B520_085F_003A_292A();
	f__B520_00A0_000D_843D();
}

/**
 * Decompiled function f__B520_00A0_000D_843D()
 *
 * @name f__B520_00A0_000D_843D
 * @implements B520:00A0:000D:843D ()
 *
 * Called From: B520:00A0:001B:B877
 */
void f__B520_00A0_000D_843D()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_cs);
	emu_push(0x00AD); f__B520_096E_003C_2BCD();
	f__B520_00AD_000D_5382();
}

/**
 * Decompiled function f__B520_00AD_000D_5382()
 *
 * @name f__B520_00AD_000D_5382
 * @implements B520:00AD:000D:5382 ()
 *
 * Called From: B520:00AD:000D:843D
 */
void f__B520_00AD_000D_5382()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x00BA); f__B520_06A2_0013_5CED();
	f__B520_00BA_001C_4FA0();
}

/**
 * Decompiled function f__B520_00BA_001C_4FA0()
 *
 * @name f__B520_00BA_001C_4FA0
 * @implements B520:00BA:001C:4FA0 ()
 *
 * Called From: B520:00BA:000D:5382
 */
void f__B520_00BA_001C_4FA0()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x12));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x14));
	if (emu_flags.zf) { emu_ip = 0x00D8; emu_last_cs = 0xB520; emu_last_ip = 0x00C7; emu_last_length = 0x001C; emu_last_crc = 0x4FA0; emu_call(); return; } // Jump does not resolve
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x6));

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_es, emu_bx.x,  0x12);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_es, emu_bx.x,  0x14);
	emu_push(0x00D6);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x34E0003E: ovl__34E0(6); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0xB520; emu_last_ip = 0x00D2; emu_last_length = 0x001C; emu_last_crc = 0x4FA0;
			emu_call();
			return;
	}
	f__B520_00D6_0007_2B9C();
}

/**
 * Decompiled function f__B520_00D6_0007_2B9C()
 *
 * @name f__B520_00D6_0007_2B9C
 * @implements B520:00D6:0007:2B9C ()
 *
 * Called From: B520:00D6:001C:4FA0
 */
void f__B520_00D6_0007_2B9C()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	f__B520_00DD_0006_137A(); return;
}

/**
 * Decompiled function f__B520_00DD_0006_137A()
 *
 * @name f__B520_00DD_0006_137A
 * @implements B520:00DD:0006:137A ()
 *
 * Called From: B520:00DB:0007:2B9C
 */
void f__B520_00DD_0006_137A()
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

/**
 * Decompiled function f__B520_00E3_0028_9365()
 *
 * @name f__B520_00E3_0028_9365
 * @implements B520:00E3:0028:9365 ()
 *
 * Called From: 3520:0048:0005:110E
 * Called From: B520:0016:0019:4B8A
 */
void f__B520_00E3_0028_9365()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x4);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_flags.zf) { emu_ip = 0x010B; emu_last_cs = 0xB520; emu_last_ip = 0x00EF; emu_last_length = 0x0028; emu_last_crc = 0x9365; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x36));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_es, emu_bx.x,  0x34));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_dx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0xC));
	f__B520_0110_0004_0F7A(); return;
}

/**
 * Decompiled function f__B520_0110_0004_0F7A()
 *
 * @name f__B520_0110_0004_0F7A
 * @implements B520:0110:0004:0F7A ()
 *
 * Called From: B520:0109:0028:9365
 */
void f__B520_0110_0004_0F7A()
{
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B520_0114_0016_81BF()
 *
 * @name f__B520_0114_0016_81BF
 * @implements B520:0114:0016:81BF ()
 *
 * Called From: 3520:0020:0005:1E76
 */
void f__B520_0114_0016_81BF()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x4);
	emu_movw(&emu_ax.x, 0x10);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_movw(&emu_dx.x, 0x3C);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_cs); emu_push(0x012A); emu_cs = 0x23E1; f__23E1_0004_0014_DD3C();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3520) { ovl__3520(0xFF); }
	f__B520_012A_0054_3AD8();
}

/**
 * Decompiled function f__B520_012A_0054_3AD8()
 *
 * @name f__B520_012A_0054_3AD8
 * @implements B520:012A:0054:3AD8 ()
 *
 * Called From: B520:012A:0016:81BF
 */
void f__B520_012A_0054_3AD8()
{
	emu_addws(&emu_sp, 0x6);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x1C), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x1E), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x20), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0xA), 0x1);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0xC), 0x1);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0xB), 0x1);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x10));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_push(emu_cs); emu_push(0x017E); emu_cs = 0x260F; f__260F_003A_0014_CDCF();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3520) { ovl__3520(0xFF); }
	f__B520_017E_0018_010D();
}

/**
 * Decompiled function f__B520_017E_0018_010D()
 *
 * @name f__B520_017E_0018_010D
 * @implements B520:017E:0018:010D ()
 *
 * Called From: B520:017E:0054:3AD8
 */
void f__B520_017E_0018_010D()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movb(&emu_cx.l, 0x3);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x22), emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x10));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_push(emu_cs); emu_push(0x0196); emu_cs = 0x260F; f__260F_0054_0016_11EB();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3520) { ovl__3520(0xFF); }
	f__B520_0196_005C_95A2();
}

/**
 * Decompiled function f__B520_0196_005C_95A2()
 *
 * @name f__B520_0196_005C_95A2
 * @implements B520:0196:005C:95A2 ()
 *
 * Called From: B520:0196:0018:010D
 */
void f__B520_0196_005C_95A2()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x24), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0xE), 0x11C5);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x10));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x12), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x10), emu_dx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x10));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x16), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x14), emu_dx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x14));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0x12));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x1A), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x18), emu_dx.x);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0x1A), 0x0);
	if (emu_flags.zf) { f__B520_01F2_002D_EBE0(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x32), 0x3520);
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x30), 0x3E);
	f__B520_0201_001E_2846(); return;
}

/**
 * Decompiled function f__B520_01F2_002D_EBE0()
 *
 * @name f__B520_01F2_002D_EBE0
 * @implements B520:01F2:002D:EBE0 ()
 *
 * Called From: B520:01DF:005C:95A2
 */
void f__B520_01F2_002D_EBE0()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x32), 0x3520);
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x30), 0x39);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x16));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x36));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_es, emu_bx.x,  0x34));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x36), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x34), emu_dx.x);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	f__B520_021F_0004_0F7A(); return;
}

/**
 * Decompiled function f__B520_0201_001E_2846()
 *
 * @name f__B520_0201_001E_2846
 * @implements B520:0201:001E:2846 ()
 *
 * Called From: B520:01F0:005C:95A2
 */
void f__B520_0201_001E_2846()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x16));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x36));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_es, emu_bx.x,  0x34));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x36), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x34), emu_dx.x);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	f__B520_021F_0004_0F7A(); return;
}

/**
 * Decompiled function f__B520_021F_0004_0F7A()
 *
 * @name f__B520_021F_0004_0F7A
 * @implements B520:021F:0004:0F7A ()
 *
 * Called From: B520:021D:001E:2846
 * Called From: B520:021D:002D:EBE0
 */
void f__B520_021F_0004_0F7A()
{
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B520_0223_000E_0926()
 *
 * @name f__B520_0223_000E_0926
 * @implements B520:0223:000E:0926 ()
 *
 * Called From: 3520:002F:0005:1D1E
 */
void f__B520_0223_000E_0926()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x0231); emu_cs = 0x23E1; f__23E1_01C2_0011_4E4B();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3520) { ovl__3520(0xFF); }
	f__B520_0231_0004_07BA();
}

/**
 * Decompiled function f__B520_0231_0004_07BA()
 *
 * @name f__B520_0231_0004_07BA
 * @implements B520:0231:0004:07BA ()
 *
 * Called From: B520:0231:000E:0926
 */
void f__B520_0231_0004_07BA()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B520_0235_0016_81A7()
 *
 * @name f__B520_0235_0016_81A7
 * @implements B520:0235:0016:81A7 ()
 *
 * Called From: 3520:0025:0005:1C7E
 */
void f__B520_0235_0016_81A7()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x8);
	emu_movw(&emu_ax.x, 0x10);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_movw(&emu_dx.x, 0x3C);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_cs); emu_push(0x024B); emu_cs = 0x23E1; f__23E1_0004_0014_DD3C();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3520) { ovl__3520(0xFF); }
	f__B520_024B_00C4_0003();
}

/**
 * Decompiled function f__B520_024B_00C4_0003()
 *
 * @name f__B520_024B_00C4_0003
 * @implements B520:024B:00C4:0003 ()
 *
 * Called From: B520:024B:0016:81A7
 */
void f__B520_024B_00C4_0003()
{
	emu_addws(&emu_sp, 0x6);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x1C), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x1E), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x20), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x22), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x10));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x24), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x28), 0xA);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x29), 0xC);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x26), 0xF);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x27), 0xC);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0xE), 0x740);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x2E), 0x20);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0xA), 0x4);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0xB), 0x4);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x12), 0x3520);
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x10), 0x2A);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x16), 0x3520);
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x14), 0x2A);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x32), 0x3520);
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x30), 0x43);
	emu_movw(&emu_ax.x, 0x10);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_movw(&emu_dx.x, 0x16);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_cs); emu_push(0x030F); emu_cs = 0x23E1; f__23E1_0004_0014_DD3C();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3520) { ovl__3520(0xFF); }
	f__B520_030F_0071_8781();
}

/**
 * Decompiled function f__B520_030F_0071_8781()
 *
 * @name f__B520_030F_0071_8781
 * @implements B520:030F:0071:8781 ()
 *
 * Called From: B520:030F:00C4:0003
 */
void f__B520_030F_0071_8781()
{
	emu_addws(&emu_sp, 0x6);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x36), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x34), emu_dx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x2), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x0), emu_dx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x8), 0x1);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0xA), 0x1);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0xC), 0x0);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0xE), 0x0);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0xF), 0x0);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x14));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0x12));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x14), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x12), emu_dx.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs);
	emu_push(0x0380); f__B520_085F_003A_292A();
	f__B520_0380_000D_8827();
}

/**
 * Decompiled function f__B520_0380_000D_8827()
 *
 * @name f__B520_0380_000D_8827
 * @implements B520:0380:000D:8827 ()
 *
 * Called From: B520:0380:0071:8781
 */
void f__B520_0380_000D_8827()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs);
	emu_push(0x038D); f__B520_096E_003C_2BCD();
	f__B520_038D_000A_58CD();
}

/**
 * Decompiled function f__B520_038D_000A_58CD()
 *
 * @name f__B520_038D_000A_58CD
 * @implements B520:038D:000A:58CD ()
 *
 * Called From: B520:038D:000D:8827
 */
void f__B520_038D_000A_58CD()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	f__B520_0397_0004_0F7A(); return;
}

/**
 * Decompiled function f__B520_0397_0004_0F7A()
 *
 * @name f__B520_0397_0004_0F7A
 * @implements B520:0397:0004:0F7A ()
 *
 * Called From: B520:0395:000A:58CD
 */
void f__B520_0397_0004_0F7A()
{
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B520_039B_001B_B8E7()
 *
 * @name f__B520_039B_001B_B8E7
 * @implements B520:039B:001B:B8E7 ()
 *
 * Called From: 3520:0034:0005:1696
 */
void f__B520_039B_001B_B8E7()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_flags.zf) { emu_ip = 0x03C5; emu_last_cs = 0xB520; emu_last_ip = 0x03A4; emu_last_length = 0x001B; emu_last_crc = 0xB8E7; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x36));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x34));
	emu_push(emu_cs); emu_push(0x03B6); emu_cs = 0x23E1; f__23E1_01C2_0011_4E4B();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3520) { ovl__3520(0xFF); }
	f__B520_03B6_000D_5922();
}

/**
 * Decompiled function f__B520_03B6_000D_5922()
 *
 * @name f__B520_03B6_000D_5922
 * @implements B520:03B6:000D:5922 ()
 *
 * Called From: B520:03B6:001B:B8E7
 */
void f__B520_03B6_000D_5922()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x03C3); emu_cs = 0x23E1; f__23E1_01C2_0011_4E4B();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3520) { ovl__3520(0xFF); }
	f__B520_03C3_0004_07BA();
}

/**
 * Decompiled function f__B520_03C3_0004_07BA()
 *
 * @name f__B520_03C3_0004_07BA
 * @implements B520:03C3:0004:07BA ()
 *
 * Called From: B520:03C3:000D:5922
 */
void f__B520_03C3_0004_07BA()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B520_06A2_0013_5CED()
 *
 * @name f__B520_06A2_0013_5CED
 * @implements B520:06A2:0013:5CED ()
 *
 * Called From: 3520:002A:0005:152E
 * Called From: B520:00B7:000D:5382
 */
void f__B520_06A2_0013_5CED()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x12);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (!emu_flags.zf) { f__B520_06B5_000E_C39A(); return; }
	emu_ip = 0x0859; emu_last_cs = 0xB520; emu_last_ip = 0x06B2; emu_last_length = 0x0013; emu_last_crc = 0x5CED; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B520_06B5_000E_C39A()
 *
 * @name f__B520_06B5_000E_C39A
 * @implements B520:06B5:000E:C39A ()
 *
 * Called From: B520:06B0:0013:5CED
 */
void f__B520_06B5_000E_C39A()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0xE), 0x8);
	if (emu_flags.zf) { f__B520_06C3_00B7_FDD0(); return; }
	emu_ip = 0x0859; emu_last_cs = 0xB520; emu_last_ip = 0x06C0; emu_last_length = 0x000E; emu_last_crc = 0xC39A; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B520_06C3_00B7_FDD0()
 *
 * @name f__B520_06C3_00B7_FDD0
 * @implements B520:06C3:00B7:FDD0 ()
 *
 * Called From: B520:06BE:000E:C39A
 */
void f__B520_06C3_00B7_FDD0()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x1C));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x36));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_es, emu_bx.x,  0x34));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x12), emu_dx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x22));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x24));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax.x);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movb(&emu_cx.l, 0x4);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, emu_bx.x,  0x4062));
	emu_movb(&emu_cx.l, 0x3);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_movw(&emu_si, emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x1E), 0x0);
	if (!(emu_flags.sf != emu_flags.of)) { f__B520_071E_005C_FD20(); return; }
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movb(&emu_cx.l, 0x4);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, emu_bx.x,  0x4066));
	emu_movb(&emu_cx.l, 0x3);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_addw(&emu_si, emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_addw(&emu_si, emu_get_memory16(emu_es, emu_bx.x,  0x1E));
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movb(&emu_cx.l, 0x4);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_di, emu_get_memory16(emu_ds, emu_bx.x,  0x4064));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x20), 0x0);
	if (!(emu_flags.sf != emu_flags.of)) { emu_ip = 0x0745; emu_last_cs = 0xB520; emu_last_ip = 0x0738; emu_last_length = 0x00B7; emu_last_crc = 0xFDD0; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movb(&emu_cx.l, 0x4);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_addw(&emu_di, emu_get_memory16(emu_ds, emu_bx.x,  0x4068));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_addw(&emu_di, emu_get_memory16(emu_es, emu_bx.x,  0x20));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { emu_ip = 0x077A; emu_last_cs = 0xB520; emu_last_ip = 0x0752; emu_last_length = 0x00B7; emu_last_crc = 0xFDD0; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x6));
	emu_incw(&emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x1);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_addw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x4));
	emu_decw(&emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_addw(&emu_ax.x, 0xFFFE);
	emu_ip = 0x079E; emu_last_cs = 0xB520; emu_last_ip = 0x0778; emu_last_length = 0x00B7; emu_last_crc = 0xFDD0; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B520_071E_005C_FD20()
 *
 * @name f__B520_071E_005C_FD20
 * @implements B520:071E:005C:FD20 ()
 *
 * Called From: B520:070B:00B7:FDD0
 */
void f__B520_071E_005C_FD20()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_addw(&emu_si, emu_get_memory16(emu_es, emu_bx.x,  0x1E));
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movb(&emu_cx.l, 0x4);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_di, emu_get_memory16(emu_ds, emu_bx.x,  0x4064));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x20), 0x0);
	if (!(emu_flags.sf != emu_flags.of)) { f__B520_0745_0035_2B48(); return; }
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movb(&emu_cx.l, 0x4);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_addw(&emu_di, emu_get_memory16(emu_ds, emu_bx.x,  0x4068));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_addw(&emu_di, emu_get_memory16(emu_es, emu_bx.x,  0x20));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { emu_ip = 0x077A; emu_last_cs = 0xB520; emu_last_ip = 0x0752; emu_last_length = 0x005C; emu_last_crc = 0xFD20; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x6));
	emu_incw(&emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x1);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_addw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x4));
	emu_decw(&emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_addw(&emu_ax.x, 0xFFFE);
	emu_ip = 0x079E; emu_last_cs = 0xB520; emu_last_ip = 0x0778; emu_last_length = 0x005C; emu_last_crc = 0xFD20; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B520_0745_0035_2B48()
 *
 * @name f__B520_0745_0035_2B48
 * @implements B520:0745:0035:2B48 ()
 *
 * Called From: B520:0738:005C:FD20
 */
void f__B520_0745_0035_2B48()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_addw(&emu_di, emu_get_memory16(emu_es, emu_bx.x,  0x20));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__B520_077A_0043_B0AF(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x6));
	emu_incw(&emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x1);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_addw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x4));
	emu_decw(&emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_addw(&emu_ax.x, 0xFFFE);
	emu_ip = 0x079E; emu_last_cs = 0xB520; emu_last_ip = 0x0778; emu_last_length = 0x0035; emu_last_crc = 0x2B48; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B520_077A_0043_B0AF()
 *
 * @name f__B520_077A_0043_B0AF
 * @implements B520:077A:0043:B0AF ()
 *
 * Called From: B520:0752:0035:2B48
 */
void f__B520_077A_0043_B0AF()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x1);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x6));
	emu_incw(&emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_addw(&emu_ax.x, 0xFFFE);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_addw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x4));
	emu_decw(&emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x6C91), 0x0);
	if (!emu_flags.zf) { f__B520_07C0_0024_EF1C(); return; }
	emu_movw(&emu_ax.x, emu_di);
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_decw(&emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_si);
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_decw(&emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_di);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x07BD); emu_cs = 0x2B6C; f__2B6C_0197_00CE_7027();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3520) { ovl__3520(0xFF); }
	f__B520_07BD_0027_9E9C();
}

/**
 * Decompiled function f__B520_07BD_0027_9E9C()
 *
 * @name f__B520_07BD_0027_9E9C
 * @implements B520:07BD:0027:9E9C ()
 *
 * Called From: B520:07BD:0043:B0AF
 */
void f__B520_07BD_0027_9E9C()
{
	emu_addws(&emu_sp, 0x8);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x27));
	emu_movb(&emu_ax.h, 0x0);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_di);
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_decw(&emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_si);
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_decw(&emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_di);
	emu_push(emu_si);
	emu_movw(&emu_ax.x, 0x353F);
	emu_movw(&emu_es, emu_ax.x);

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_es, 0x00,  0x6668);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_es, 0x00,  0x666A);
	emu_push(0x07E4);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A60D31: f__22A6_0D31_0015_D6F0(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0xB520; emu_last_ip = 0x07DF; emu_last_length = 0x0027; emu_last_crc = 0x9E9C;
			emu_call();
			return;
	}
	f__B520_07E4_0016_714C();
}

/**
 * Decompiled function f__B520_07C0_0024_EF1C()
 *
 * @name f__B520_07C0_0024_EF1C
 * @implements B520:07C0:0024:EF1C ()
 *
 * Called From: B520:07A6:0043:B0AF
 */
void f__B520_07C0_0024_EF1C()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x27));
	emu_movb(&emu_ax.h, 0x0);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_di);
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_decw(&emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_si);
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_decw(&emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_di);
	emu_push(emu_si);
	emu_movw(&emu_ax.x, 0x353F);
	emu_movw(&emu_es, emu_ax.x);

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_es, 0x00,  0x6668);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_es, 0x00,  0x666A);
	emu_push(0x07E4);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A60D31: f__22A6_0D31_0015_D6F0(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0xB520; emu_last_ip = 0x07DF; emu_last_length = 0x0024; emu_last_crc = 0xEF1C;
			emu_call();
			return;
	}
	f__B520_07E4_0016_714C();
}

/**
 * Decompiled function f__B520_07E4_0016_714C()
 *
 * @name f__B520_07E4_0016_714C
 * @implements B520:07E4:0016:714C ()
 *
 * Called From: B520:07E4:0024:EF1C
 * Called From: B520:07E4:0027:9E9C
 */
void f__B520_07E4_0016_714C()
{
	emu_addws(&emu_sp, 0xA);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0xE), 0x0);
	if (emu_flags.zf) { f__B520_07FA_002C_E2AF(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x28));
	emu_ip = 0x0801; emu_last_cs = 0xB520; emu_last_ip = 0x07F8; emu_last_length = 0x0016; emu_last_crc = 0x714C; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B520_07FA_002C_E2AF()
 *
 * @name f__B520_07FA_002C_E2AF
 * @implements B520:07FA:002C:E2AF ()
 *
 * Called From: B520:07EF:0016:714C
 */
void f__B520_07FA_002C_E2AF()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x26));
	emu_movb(&emu_ax.h, 0x0);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_di);
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_si);
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_di);
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_si);
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x353F);
	emu_movw(&emu_es, emu_ax.x);

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_es, 0x00,  0x6668);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_es, 0x00,  0x666A);
	emu_push(0x0826);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A60D31: f__22A6_0D31_0015_D6F0(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0xB520; emu_last_ip = 0x0821; emu_last_length = 0x002C; emu_last_crc = 0xE2AF;
			emu_call();
			return;
	}
	f__B520_0826_000F_BC2C();
}

/**
 * Decompiled function f__B520_0826_000F_BC2C()
 *
 * @name f__B520_0826_000F_BC2C
 * @implements B520:0826:000F:BC2C ()
 *
 * Called From: B520:0826:002C:E2AF
 */
void f__B520_0826_000F_BC2C()
{
	emu_addws(&emu_sp, 0xA);
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x6C91), 0x0);
	if (!emu_flags.zf) { f__B520_0835_001A_0127(); return; }
	emu_push(emu_cs); emu_push(0x0835); emu_cs = 0x2B6C; f__2B6C_0292_0028_CAA5();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3520) { ovl__3520(0xFF); }
	f__B520_0835_001A_0127();
}

/**
 * Decompiled function f__B520_0835_001A_0127()
 *
 * @name f__B520_0835_001A_0127
 * @implements B520:0835:001A:0127 ()
 *
 * Called From: B520:082E:000F:BC2C
 * Called From: B520:0835:000F:BC2C
 */
void f__B520_0835_001A_0127()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x12));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x14));
	if (emu_flags.zf) { emu_ip = 0x0851; emu_last_cs = 0xB520; emu_last_ip = 0x0840; emu_last_length = 0x001A; emu_last_crc = 0x0127; emu_call(); return; } // Jump does not resolve
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x12));

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_es, emu_bx.x,  0x12);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_es, emu_bx.x,  0x14);
	emu_push(0x084F);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x34E0003E: ovl__34E0(6); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0xB520; emu_last_ip = 0x084B; emu_last_length = 0x001A; emu_last_crc = 0x0127;
			emu_call();
			return;
	}
	f__B520_084F_0010_1A39();
}

/**
 * Decompiled function f__B520_084F_0010_1A39()
 *
 * @name f__B520_084F_0010_1A39
 * @implements B520:084F:0010:1A39 ()
 *
 * Called From: B520:084F:001A:0127
 */
void f__B520_084F_0010_1A39()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0xF), 0x0);
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B520_085F_003A_292A()
 *
 * @name f__B520_085F_003A_292A
 * @implements B520:085F:003A:292A ()
 *
 * Called From: B520:009D:001B:B877
 * Called From: B520:037D:0071:8781
 */
void f__B520_085F_003A_292A()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x6);
	emu_push(emu_si);
	emu_xorw(&emu_si, emu_si);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x2));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_dx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	if (emu_flags.zf) { emu_ip = 0x08DD; emu_last_cs = 0xB520; emu_last_ip = 0x087E; emu_last_length = 0x003A; emu_last_crc = 0x292A; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x22));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x24));
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__B520_0899_0022_E0B0(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x22));
	emu_ip = 0x08A0; emu_last_cs = 0xB520; emu_last_ip = 0x0897; emu_last_length = 0x003A; emu_last_crc = 0x292A; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B520_0899_0022_E0B0()
 *
 * @name f__B520_0899_0022_E0B0
 * @implements B520:0899:0022:E0B0 ()
 *
 * Called From: B520:088E:003A:292A
 */
void f__B520_0899_0022_E0B0()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x24));
	emu_addw(&emu_ax.x, 0xFFFE);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0xA));
	emu_cwd();
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_dx.x);
	emu_cwd();
	emu_pop(&emu_cx.x);
	emu_pop(&emu_bx.x);
	emu_push(emu_cs); emu_push(0x08BB); emu_cs = 0x01F7; f__01F7_03B2_0017_6839();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3520) { ovl__3520(0xFF); }
	f__B520_08BB_0026_DECE();
}

/**
 * Decompiled function f__B520_08BB_0026_DECE()
 *
 * @name f__B520_08BB_0026_DECE
 * @implements B520:08BB:0026:DECE ()
 *
 * Called From: B520:08BB:0022:E0B0
 */
void f__B520_08BB_0026_DECE()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cwd();
	emu_idivw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x8));
	emu_movw(&emu_si, emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), emu_si);
	if (emu_flags.zf) { emu_ip = 0x08DD; emu_last_cs = 0xB520; emu_last_ip = 0x08CC; emu_last_length = 0x0026; emu_last_crc = 0xDECE; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), emu_si);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0xF), 0x1);
	emu_movw(&emu_ax.x, emu_si);
	f__B520_08E1_0005_04BA(); return;
}

/**
 * Decompiled function f__B520_08E1_0005_04BA()
 *
 * @name f__B520_08E1_0005_04BA
 * @implements B520:08E1:0005:04BA ()
 *
 * Called From: B520:08DF:0026:DECE
 */
void f__B520_08E1_0005_04BA()
{
	emu_pop(&emu_si);
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B520_096E_003C_2BCD()
 *
 * @name f__B520_096E_003C_2BCD
 * @implements B520:096E:003C:2BCD ()
 *
 * Called From: B520:00AA:000D:843D
 * Called From: B520:038A:000D:8827
 */
void f__B520_096E_003C_2BCD()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x6);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_si, 0xFFFF);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x2));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_dx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	if (emu_flags.zf) { emu_ip = 0x0A0A; emu_last_cs = 0xB520; emu_last_ip = 0x098F; emu_last_length = 0x003C; emu_last_crc = 0x2BCD; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x22));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x24));
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__B520_09AA_003E_E79B(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x22));
	emu_ip = 0x09B1; emu_last_cs = 0xB520; emu_last_ip = 0x09A8; emu_last_length = 0x003C; emu_last_crc = 0x2BCD; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B520_09AA_003E_E79B()
 *
 * @name f__B520_09AA_003E_E79B
 * @implements B520:09AA:003E:E79B ()
 *
 * Called From: B520:099F:003C:2BCD
 */
void f__B520_09AA_003E_E79B()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x24));
	emu_addw(&emu_ax.x, 0xFFFE);
	emu_movw(&emu_di, emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_subw(&emu_di, emu_get_memory16(emu_es, emu_bx.x,  0x4));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x8));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_subw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0xA));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x0);
	if (emu_flags.zf) { f__B520_09F0_001E_6105(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0xC));
	emu_cwd();
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_di);
	emu_push(emu_dx.x);
	emu_cwd();
	emu_pop(&emu_cx.x);
	emu_pop(&emu_bx.x);
	emu_push(emu_cs); emu_push(0x09E8); emu_cs = 0x01F7; f__01F7_03B2_0017_6839();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3520) { ovl__3520(0xFF); }
	f__B520_09E8_0008_EE58();
}

/**
 * Decompiled function f__B520_09E8_0008_EE58()
 *
 * @name f__B520_09E8_0008_EE58
 * @implements B520:09E8:0008:EE58 ()
 *
 * Called From: B520:09E8:003E:E79B
 */
void f__B520_09E8_0008_EE58()
{
	emu_cwd();
	emu_idivw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_si, emu_ax.x);
	f__B520_09F2_001C_6117(); return;
}

/**
 * Decompiled function f__B520_09F0_001E_6105()
 *
 * @name f__B520_09F0_001E_6105
 * @implements B520:09F0:001E:6105 ()
 *
 * Called From: B520:09D2:003E:E79B
 */
void f__B520_09F0_001E_6105()
{
	emu_xorw(&emu_si, emu_si);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx.x,  0x6), emu_si);
	if (emu_flags.zf) { f__B520_0A0A_0004_0D2C(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x6), emu_si);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0xF), 0x1);
	emu_movw(&emu_ax.x, emu_si);
	emu_ip = 0x0A0E; emu_last_cs = 0xB520; emu_last_ip = 0x0A0C; emu_last_length = 0x001E; emu_last_crc = 0x6105; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B520_09F2_001C_6117()
 *
 * @name f__B520_09F2_001C_6117
 * @implements B520:09F2:001C:6117 ()
 *
 * Called From: B520:09EE:0008:EE58
 */
void f__B520_09F2_001C_6117()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx.x,  0x6), emu_si);
	if (emu_flags.zf) { f__B520_0A0A_0004_0D2C(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x6), emu_si);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0xF), 0x1);
	emu_movw(&emu_ax.x, emu_si);
	emu_ip = 0x0A0E; emu_last_cs = 0xB520; emu_last_ip = 0x0A0C; emu_last_length = 0x001C; emu_last_crc = 0x6117; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B520_0A0A_0004_0D2C()
 *
 * @name f__B520_0A0A_0004_0D2C
 * @implements B520:0A0A:0004:0D2C ()
 *
 * Called From: B520:09F9:001E:6105
 * Called From: B520:09F9:001C:6117
 */
void f__B520_0A0A_0004_0D2C()
{
	emu_movw(&emu_ax.x, emu_si);
	f__B520_0A0E_0006_137A(); return;
}

/**
 * Decompiled function f__B520_0A0E_0006_137A()
 *
 * @name f__B520_0A0E_0006_137A
 * @implements B520:0A0E:0006:137A ()
 *
 * Called From: B520:0A0C:0004:0D2C
 */
void f__B520_0A0E_0006_137A()
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

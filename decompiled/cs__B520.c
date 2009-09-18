/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__B520_0000_0019_6B99()
 *
 * @name f__B520_0000_0019_6B99
 * @implements B520:0000:0019:6B99 ()
 *
 * Called From: 3520:004D:0005:0000
 */
void f__B520_0000_0019_6B99()
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
	emu_push(0x0019); f__B520_00E3_0028_2188();
	f__B520_0019_0010_3B22();
}

/**
 * Decompiled function f__B520_0019_0010_3B22()
 *
 * @name f__B520_0019_0010_3B22
 * @implements B520:0019:0010:3B22 ()
 *
 * Called From: B520:0019:0019:6B99
 */
void f__B520_0019_0010_3B22()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (!emu_flags.zf) { f__B520_0029_0032_C898(); return; }
	/* Unresolved jump */ emu_ip = 0x00D8; emu_last_cs = 0xB520; emu_last_ip = 0x0026; emu_last_length = 0x0010; emu_last_crc = 0x3B22; emu_call();
}

/**
 * Decompiled function f__B520_0029_0032_C898()
 *
 * @name f__B520_0029_0032_C898
 * @implements B520:0029:0032:C898 ()
 *
 * Called From: B520:0024:0010:3B22
 */
void f__B520_0029_0032_C898()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x36));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_es, emu_bx.x,  0x34));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_dx.x);
	emu_orw(&emu_si, emu_si);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x0045; emu_last_cs = 0xB520; emu_last_ip = 0x003C; emu_last_length = 0x0032; emu_last_crc = 0xC898; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x8), emu_si);
	emu_orw(&emu_di, emu_di);
	if ((emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x0066; emu_last_cs = 0xB520; emu_last_ip = 0x0047; emu_last_length = 0x0032; emu_last_crc = 0xC898; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx.x,  0x8), emu_di);
	if (!(emu_flags.sf != emu_flags.of)) { f__B520_005B_002A_C23D(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x8));
	/* Unresolved jump */ emu_ip = 0x005D; emu_last_cs = 0xB520; emu_last_ip = 0x0059; emu_last_length = 0x0032; emu_last_crc = 0xC898; emu_call();
}

/**
 * Decompiled function f__B520_005B_002A_C23D()
 *
 * @name f__B520_005B_002A_C23D
 * @implements B520:005B:002A:C23D ()
 *
 * Called From: B520:0050:0032:C898
 */
void f__B520_005B_002A_C23D()
{
	emu_movw(&emu_ax.x, emu_di);
	emu_movw(&emu_di, emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0xA), emu_di);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0xE), 0x0);
	if ((emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x0095; emu_last_cs = 0xB520; emu_last_ip = 0x006A; emu_last_length = 0x002A; emu_last_crc = 0xC23D; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x8));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_subw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0xA));
	emu_movw(&emu_si, emu_ax.x);
	emu_cmpw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0xE));
	if (!(emu_flags.sf != emu_flags.of)) { f__B520_0085_001B_7C94(); return; }
	emu_movw(&emu_ax.x, emu_si);
	/* Unresolved jump */ emu_ip = 0x0088; emu_last_cs = 0xB520; emu_last_ip = 0x0083; emu_last_length = 0x002A; emu_last_crc = 0xC23D; emu_call();
}

/**
 * Decompiled function f__B520_0085_001B_7C94()
 *
 * @name f__B520_0085_001B_7C94
 * @implements B520:0085:001B:7C94 ()
 *
 * Called From: B520:007F:002A:C23D
 */
void f__B520_0085_001B_7C94()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0xE), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0xC), emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_cs);
	emu_push(0x00A0); f__B520_085F_003A_87ED();
	f__B520_00A0_000D_9A2C();
}

/**
 * Decompiled function f__B520_00A0_000D_9A2C()
 *
 * @name f__B520_00A0_000D_9A2C
 * @implements B520:00A0:000D:9A2C ()
 *
 * Called From: B520:00A0:001B:7C94
 */
void f__B520_00A0_000D_9A2C()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_cs);
	emu_push(0x00AD); f__B520_096E_003C_F7E4();
	f__B520_00AD_000D_2CDF();
}

/**
 * Decompiled function f__B520_00AD_000D_2CDF()
 *
 * @name f__B520_00AD_000D_2CDF
 * @implements B520:00AD:000D:2CDF ()
 *
 * Called From: B520:00AD:000D:9A2C
 */
void f__B520_00AD_000D_2CDF()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x00BA); f__B520_06A2_0013_A505();
	f__B520_00BA_001C_E198();
}

/**
 * Decompiled function f__B520_00BA_001C_E198()
 *
 * @name f__B520_00BA_001C_E198
 * @implements B520:00BA:001C:E198 ()
 *
 * Called From: B520:00BA:000D:2CDF
 */
void f__B520_00BA_001C_E198()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x12));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x14));
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x00D8; emu_last_cs = 0xB520; emu_last_ip = 0x00C7; emu_last_length = 0x001C; emu_last_crc = 0xE198; emu_call(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x6));

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_es, emu_bx.x,  0x12);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_es, emu_bx.x,  0x14);
	emu_push(0x00D6);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x34E0003E: ovl__34E0(6); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0xB520; emu_last_ip = 0x00D2; emu_last_length = 0x001C; emu_last_crc = 0xE198;
			emu_call();
			return;
	}
	f__B520_00D6_0007_DF15();
}

/**
 * Decompiled function f__B520_00D6_0007_DF15()
 *
 * @name f__B520_00D6_0007_DF15
 * @implements B520:00D6:0007:DF15 ()
 *
 * Called From: B520:00D6:001C:E198
 */
void f__B520_00D6_0007_DF15()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	f__B520_00DD_0006_F7CE(); return;
}

/**
 * Decompiled function f__B520_00DD_0006_F7CE()
 *
 * @name f__B520_00DD_0006_F7CE
 * @implements B520:00DD:0006:F7CE ()
 *
 * Called From: B520:00DB:0007:DF15
 */
void f__B520_00DD_0006_F7CE()
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
 * Decompiled function f__B520_00E3_0028_2188()
 *
 * @name f__B520_00E3_0028_2188
 * @implements B520:00E3:0028:2188 ()
 *
 * Called From: 3520:0048:0005:0000
 * Called From: B520:0016:0019:6B99
 */
void f__B520_00E3_0028_2188()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x4);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x010B; emu_last_cs = 0xB520; emu_last_ip = 0x00EF; emu_last_length = 0x0028; emu_last_crc = 0x2188; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x36));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_es, emu_bx.x,  0x34));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_dx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0xC));
	f__B520_0110_0004_893F(); return;
}

/**
 * Decompiled function f__B520_0110_0004_893F()
 *
 * @name f__B520_0110_0004_893F
 * @implements B520:0110:0004:893F ()
 *
 * Called From: B520:0109:0028:2188
 */
void f__B520_0110_0004_893F()
{
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B520_0114_0016_52C9()
 *
 * @name f__B520_0114_0016_52C9
 * @implements B520:0114:0016:52C9 ()
 *
 * Called From: 3520:0020:0005:0000
 */
void f__B520_0114_0016_52C9()
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
	emu_push(emu_cs); emu_push(0x012A); emu_cs = 0x23E1; f__23E1_0004_0014_2BC0();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3520) { ovl__3520(0xFF); }
	f__B520_012A_0054_E901();
}

/**
 * Decompiled function f__B520_012A_0054_E901()
 *
 * @name f__B520_012A_0054_E901
 * @implements B520:012A:0054:E901 ()
 *
 * Called From: B520:012A:0016:52C9
 */
void f__B520_012A_0054_E901()
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
	emu_push(emu_cs); emu_push(0x017E); emu_cs = 0x260F; f__260F_003A_0014_CA10();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3520) { ovl__3520(0xFF); }
	f__B520_017E_0018_47C3();
}

/**
 * Decompiled function f__B520_017E_0018_47C3()
 *
 * @name f__B520_017E_0018_47C3
 * @implements B520:017E:0018:47C3 ()
 *
 * Called From: B520:017E:0054:E901
 */
void f__B520_017E_0018_47C3()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movb(&emu_cx.l, 0x3);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x22), emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x10));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_push(emu_cs); emu_push(0x0196); emu_cs = 0x260F; f__260F_0054_0016_0011();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3520) { ovl__3520(0xFF); }
	f__B520_0196_005C_17B9();
}

/**
 * Decompiled function f__B520_0196_005C_17B9()
 *
 * @name f__B520_0196_005C_17B9
 * @implements B520:0196:005C:17B9 ()
 *
 * Called From: B520:0196:0018:47C3
 */
void f__B520_0196_005C_17B9()
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
	if (emu_flags.zf) { f__B520_01F2_002D_3833(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x32), 0x3520);
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x30), 0x3E);
	f__B520_0201_001E_722F(); return;
}

/**
 * Decompiled function f__B520_01F2_002D_3833()
 *
 * @name f__B520_01F2_002D_3833
 * @implements B520:01F2:002D:3833 ()
 *
 * Called From: B520:01DF:005C:17B9
 */
void f__B520_01F2_002D_3833()
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
	f__B520_021F_0004_893F(); return;
}

/**
 * Decompiled function f__B520_0201_001E_722F()
 *
 * @name f__B520_0201_001E_722F
 * @implements B520:0201:001E:722F ()
 *
 * Called From: B520:01F0:005C:17B9
 */
void f__B520_0201_001E_722F()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x16));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x36));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_es, emu_bx.x,  0x34));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x36), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x34), emu_dx.x);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	f__B520_021F_0004_893F(); return;
}

/**
 * Decompiled function f__B520_021F_0004_893F()
 *
 * @name f__B520_021F_0004_893F
 * @implements B520:021F:0004:893F ()
 *
 * Called From: B520:021D:001E:722F
 * Called From: B520:021D:002D:3833
 */
void f__B520_021F_0004_893F()
{
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B520_0223_000E_38A3()
 *
 * @name f__B520_0223_000E_38A3
 * @implements B520:0223:000E:38A3 ()
 *
 * Called From: 3520:002F:0005:0000
 */
void f__B520_0223_000E_38A3()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x0231); emu_cs = 0x23E1; f__23E1_01C2_0011_24E8();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3520) { ovl__3520(0xFF); }
	f__B520_0231_0004_BEB2();
}

/**
 * Decompiled function f__B520_0231_0004_BEB2()
 *
 * @name f__B520_0231_0004_BEB2
 * @implements B520:0231:0004:BEB2 ()
 *
 * Called From: B520:0231:000E:38A3
 */
void f__B520_0231_0004_BEB2()
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
 * Decompiled function f__B520_0235_0016_54C9()
 *
 * @name f__B520_0235_0016_54C9
 * @implements B520:0235:0016:54C9 ()
 *
 * Called From: 3520:0025:0005:0000
 */
void f__B520_0235_0016_54C9()
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
	emu_push(emu_cs); emu_push(0x024B); emu_cs = 0x23E1; f__23E1_0004_0014_2BC0();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3520) { ovl__3520(0xFF); }
	f__B520_024B_00C4_DD47();
}

/**
 * Decompiled function f__B520_024B_00C4_DD47()
 *
 * @name f__B520_024B_00C4_DD47
 * @implements B520:024B:00C4:DD47 ()
 *
 * Called From: B520:024B:0016:54C9
 */
void f__B520_024B_00C4_DD47()
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
	emu_push(emu_cs); emu_push(0x030F); emu_cs = 0x23E1; f__23E1_0004_0014_2BC0();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3520) { ovl__3520(0xFF); }
	f__B520_030F_0071_C198();
}

/**
 * Decompiled function f__B520_030F_0071_C198()
 *
 * @name f__B520_030F_0071_C198
 * @implements B520:030F:0071:C198 ()
 *
 * Called From: B520:030F:00C4:DD47
 */
void f__B520_030F_0071_C198()
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
	emu_push(0x0380); f__B520_085F_003A_87ED();
	f__B520_0380_000D_94A7();
}

/**
 * Decompiled function f__B520_0380_000D_94A7()
 *
 * @name f__B520_0380_000D_94A7
 * @implements B520:0380:000D:94A7 ()
 *
 * Called From: B520:0380:0071:C198
 */
void f__B520_0380_000D_94A7()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs);
	emu_push(0x038D); f__B520_096E_003C_F7E4();
	f__B520_038D_000A_5E25();
}

/**
 * Decompiled function f__B520_038D_000A_5E25()
 *
 * @name f__B520_038D_000A_5E25
 * @implements B520:038D:000A:5E25 ()
 *
 * Called From: B520:038D:000D:94A7
 */
void f__B520_038D_000A_5E25()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	f__B520_0397_0004_893F(); return;
}

/**
 * Decompiled function f__B520_0397_0004_893F()
 *
 * @name f__B520_0397_0004_893F
 * @implements B520:0397:0004:893F ()
 *
 * Called From: B520:0395:000A:5E25
 */
void f__B520_0397_0004_893F()
{
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B520_039B_001B_4BEB()
 *
 * @name f__B520_039B_001B_4BEB
 * @implements B520:039B:001B:4BEB ()
 *
 * Called From: 3520:0034:0005:0000
 */
void f__B520_039B_001B_4BEB()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x03C5; emu_last_cs = 0xB520; emu_last_ip = 0x03A4; emu_last_length = 0x001B; emu_last_crc = 0x4BEB; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x36));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x34));
	emu_push(emu_cs); emu_push(0x03B6); emu_cs = 0x23E1; f__23E1_01C2_0011_24E8();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3520) { ovl__3520(0xFF); }
	f__B520_03B6_000D_A2A1();
}

/**
 * Decompiled function f__B520_03B6_000D_A2A1()
 *
 * @name f__B520_03B6_000D_A2A1
 * @implements B520:03B6:000D:A2A1 ()
 *
 * Called From: B520:03B6:001B:4BEB
 */
void f__B520_03B6_000D_A2A1()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x03C3); emu_cs = 0x23E1; f__23E1_01C2_0011_24E8();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3520) { ovl__3520(0xFF); }
	f__B520_03C3_0004_BEB2();
}

/**
 * Decompiled function f__B520_03C3_0004_BEB2()
 *
 * @name f__B520_03C3_0004_BEB2
 * @implements B520:03C3:0004:BEB2 ()
 *
 * Called From: B520:03C3:000D:A2A1
 */
void f__B520_03C3_0004_BEB2()
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
 * Decompiled function f__B520_03E7_0017_BA36()
 *
 * @name f__B520_03E7_0017_BA36
 * @implements B520:03E7:0017:BA36 ()
 *
 * Called From: 3520:003E:0005:0000
 */
void f__B520_03E7_0017_BA36()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x36));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x34));
	emu_push(emu_cs);
	emu_push(0x03FE); f__B520_062C_0030_162A();
	f__B520_03FE_0007_F90C();
}

/**
 * Decompiled function f__B520_03FE_0007_F90C()
 *
 * @name f__B520_03FE_0007_F90C
 * @implements B520:03FE:0007:F90C ()
 *
 * Called From: B520:03FE:0017:BA36
 */
void f__B520_03FE_0007_F90C()
{
	emu_addws(&emu_sp, 0x6);
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__B520_0405_0002_2597(); return;
}

/**
 * Decompiled function f__B520_0405_0002_2597()
 *
 * @name f__B520_0405_0002_2597
 * @implements B520:0405:0002:2597 ()
 *
 * Called From: B520:0403:0007:F90C
 */
void f__B520_0405_0002_2597()
{
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B520_0407_00A9_43A1()
 *
 * @name f__B520_0407_00A9_43A1
 * @implements B520:0407:00A9:43A1 ()
 *
 * Called From: 3520:0043:0005:0000
 */
void f__B520_0407_00A9_43A1()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x14);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x36));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_es, emu_bx.x,  0x34));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), emu_dx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x1C));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movb(&emu_cx.l, 0x4);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, emu_bx.x,  0x4062));
	emu_movb(&emu_cx.l, 0x3);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x1E), 0x0);
	if (!(emu_flags.sf != emu_flags.of)) { f__B520_0458_0058_9CCF(); return; }
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movb(&emu_cx.l, 0x4);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, emu_bx.x,  0x4066));
	emu_movb(&emu_cx.l, 0x3);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x1E));
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movb(&emu_cx.l, 0x4);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, emu_bx.x,  0x4064));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x20), 0x0);
	if (!(emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x0488; emu_last_cs = 0xB520; emu_last_ip = 0x0478; emu_last_length = 0x00A9; emu_last_crc = 0x43A1; emu_call(); return; }
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movb(&emu_cx.l, 0x4);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, emu_bx.x,  0x4068));
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x20));
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0x2E), 0x4400);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x04B2; emu_last_cs = 0xB520; emu_last_ip = 0x049B; emu_last_length = 0x00A9; emu_last_crc = 0x43A1; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0xE), 0x0);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	/* Unresolved call */ emu_push(0x04B0); emu_ip = 0x06A2; emu_last_cs = 0xB520; emu_last_ip = 0x04AD; emu_last_length = 0x00A9; emu_last_crc = 0x43A1; emu_call();
	f__B520_04B0_0010_386E();
}

/**
 * Decompiled function f__B520_0458_0058_9CCF()
 *
 * @name f__B520_0458_0058_9CCF
 * @implements B520:0458:0058:9CCF ()
 *
 * Called From: B520:0444:00A9:43A1
 */
void f__B520_0458_0058_9CCF()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x1E));
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movb(&emu_cx.l, 0x4);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, emu_bx.x,  0x4064));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x20), 0x0);
	if (!(emu_flags.sf != emu_flags.of)) { f__B520_0488_0028_0D79(); return; }
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movb(&emu_cx.l, 0x4);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, emu_bx.x,  0x4068));
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x20));
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0x2E), 0x4400);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x04B2; emu_last_cs = 0xB520; emu_last_ip = 0x049B; emu_last_length = 0x0058; emu_last_crc = 0x9CCF; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0xE), 0x0);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	/* Unresolved call */ emu_push(0x04B0); emu_ip = 0x06A2; emu_last_cs = 0xB520; emu_last_ip = 0x04AD; emu_last_length = 0x0058; emu_last_crc = 0x9CCF; emu_call();
	f__B520_04B0_0010_386E();
}

/**
 * Decompiled function f__B520_0488_0028_0D79()
 *
 * @name f__B520_0488_0028_0D79
 * @implements B520:0488:0028:0D79 ()
 *
 * Called From: B520:0478:0058:9CCF
 */
void f__B520_0488_0028_0D79()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x20));
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0x2E), 0x4400);
	if (emu_flags.zf) { f__B520_04B2_000E_8A37(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0xE), 0x0);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x04B0); f__B520_06A2_0013_A505();
	f__B520_04B0_0010_386E();
}

/**
 * Decompiled function f__B520_04B0_0010_386E()
 *
 * @name f__B520_04B0_0010_386E
 * @implements B520:04B0:0010:386E ()
 *
 * Called From: B520:04B0:0028:0D79
 */
void f__B520_04B0_0010_386E()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0x2E), 0x1100);
	if (!emu_flags.zf) { f__B520_04C0_0026_7395(); return; }
	f__B520_0569_000E_C637(); return;
}

/**
 * Decompiled function f__B520_04B2_000E_8A37()
 *
 * @name f__B520_04B2_000E_8A37
 * @implements B520:04B2:000E:8A37 ()
 *
 * Called From: B520:049B:0028:0D79
 */
void f__B520_04B2_000E_8A37()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0x2E), 0x1100);
	if (!emu_flags.zf) { f__B520_04C0_0026_7395(); return; }
	f__B520_0569_000E_C637(); return;
}

/**
 * Decompiled function f__B520_04C0_0026_7395()
 *
 * @name f__B520_04C0_0026_7395
 * @implements B520:04C0:0026:7395 ()
 *
 * Called From: B520:04BB:000E:8A37
 * Called From: B520:04BB:0010:386E
 */
void f__B520_04C0_0026_7395()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0xE), 0x0);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x22));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x24));
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__B520_04E6_0060_0E44(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x7060));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	/* Unresolved jump */ emu_ip = 0x04F2; emu_last_cs = 0xB520; emu_last_ip = 0x04E4; emu_last_length = 0x0026; emu_last_crc = 0x7395; emu_call();
}

/**
 * Decompiled function f__B520_04E6_0060_0E44()
 *
 * @name f__B520_04E6_0060_0E44
 * @implements B520:04E6:0060:0E44 ()
 *
 * Called From: B520:04D6:0026:7395
 */
void f__B520_04E6_0060_0E44()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x7062));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_addw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x6));
	emu_incw(&emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x12), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_addw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x4));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x14), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x14));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__B520_052C_001A_447C(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x12));
	if ((emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x052C; emu_last_cs = 0xB520; emu_last_ip = 0x0515; emu_last_length = 0x0060; emu_last_crc = 0x0E44; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0xE), 0x1);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_subw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x10), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x14));
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__B520_0549_001D_80A9(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_push(emu_cs);
	/* Unresolved call */ emu_push(0x0546); emu_ip = 0x062C; emu_last_cs = 0xB520; emu_last_ip = 0x0543; emu_last_length = 0x0060; emu_last_crc = 0x0E44; emu_call();
	f__B520_0546_0020_0833();
}

/**
 * Decompiled function f__B520_052C_001A_447C()
 *
 * @name f__B520_052C_001A_447C
 * @implements B520:052C:001A:447C ()
 *
 * Called From: B520:050D:0060:0E44
 */
void f__B520_052C_001A_447C()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x14));
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x0549; emu_last_cs = 0xB520; emu_last_ip = 0x0532; emu_last_length = 0x001A; emu_last_crc = 0x447C; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_push(emu_cs);
	emu_push(0x0546); f__B520_062C_0030_162A();
	f__B520_0546_0020_0833();
}

/**
 * Decompiled function f__B520_0546_0020_0833()
 *
 * @name f__B520_0546_0020_0833
 * @implements B520:0546:0020:0833 ()
 *
 * Called From: B520:0546:001A:447C
 */
void f__B520_0546_0020_0833()
{
	emu_addws(&emu_sp, 0x6);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x12));
	if (!(emu_flags.sf != emu_flags.of)) { f__B520_0569_000E_C637(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0xA));
	emu_negw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_push(emu_cs);
	/* Unresolved call */ emu_push(0x0566); emu_ip = 0x062C; emu_last_cs = 0xB520; emu_last_ip = 0x0563; emu_last_length = 0x0020; emu_last_crc = 0x0833; emu_call();
	/* Unresolved jump */ emu_ip = 0x0566; emu_last_cs = 0xB520; emu_last_ip = 0x0566; emu_last_length = 0x0020; emu_last_crc = 0x0833; emu_call();
}

/**
 * Decompiled function f__B520_0549_001D_80A9()
 *
 * @name f__B520_0549_001D_80A9
 * @implements B520:0549:001D:80A9 ()
 *
 * Called From: B520:0532:0060:0E44
 */
void f__B520_0549_001D_80A9()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x12));
	if (!(emu_flags.sf != emu_flags.of)) { f__B520_0569_000E_C637(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0xA));
	emu_negw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_push(emu_cs);
	/* Unresolved call */ emu_push(0x0566); emu_ip = 0x062C; emu_last_cs = 0xB520; emu_last_ip = 0x0563; emu_last_length = 0x001D; emu_last_crc = 0x80A9; emu_call();
	/* Unresolved jump */ emu_ip = 0x0566; emu_last_cs = 0xB520; emu_last_ip = 0x0566; emu_last_length = 0x001D; emu_last_crc = 0x80A9; emu_call();
}

/**
 * Decompiled function f__B520_0569_000E_C637()
 *
 * @name f__B520_0569_000E_C637
 * @implements B520:0569:000E:C637 ()
 *
 * Called From: B520:04BD:000E:8A37
 * Called From: B520:04BD:0010:386E
 * Called From: B520:054F:001D:80A9
 * Called From: B520:054F:0020:0833
 */
void f__B520_0569_000E_C637()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0x2E), 0x2200);
	if (!emu_flags.zf) { f__B520_0577_000D_BD8B(); return; }
	f__B520_0622_0004_E839(); return;
}

/**
 * Decompiled function f__B520_0577_000D_BD8B()
 *
 * @name f__B520_0577_000D_BD8B
 * @implements B520:0577:000D:BD8B ()
 *
 * Called From: B520:0572:000E:C637
 */
void f__B520_0577_000D_BD8B()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0xE), 0x0);
	if (!emu_flags.zf) { f__B520_0584_0030_27B8(); return; }
	f__B520_0622_0004_E839(); return;
}

/**
 * Decompiled function f__B520_0584_0030_27B8()
 *
 * @name f__B520_0584_0030_27B8
 * @implements B520:0584:0030:27B8 ()
 *
 * Called From: B520:057F:000D:BD8B
 */
void f__B520_0584_0030_27B8()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x22));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x24));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xA));
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__B520_05B4_0028_F7FC(); return; }
	emu_movw(&emu_si, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x10));
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_incw(&emu_ax.x);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x7060));
	/* Unresolved jump */ emu_ip = 0x05C6; emu_last_cs = 0xB520; emu_last_ip = 0x05B2; emu_last_length = 0x0030; emu_last_crc = 0x27B8; emu_call();
}

/**
 * Decompiled function f__B520_05B4_0028_F7FC()
 *
 * @name f__B520_05B4_0028_F7FC
 * @implements B520:05B4:0028:F7FC ()
 *
 * Called From: B520:059E:0030:27B8
 */
void f__B520_05B4_0028_F7FC()
{
	emu_movw(&emu_si, emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x10));
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_incw(&emu_ax.x);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x7062));
	emu_subw(&emu_dx.x, emu_ax.x);
	emu_movw(&emu_di, emu_dx.x);
	emu_subws(&emu_si, 0x2);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_subw(&emu_si, emu_get_memory16(emu_es, emu_bx.x,  0x4));
	emu_orw(&emu_di, emu_di);
	if (!(emu_flags.sf != emu_flags.of)) { f__B520_05DC_0029_352D(); return; }
	emu_xorw(&emu_di, emu_di);
	f__B520_05E2_0023_A79B(); return;
}

/**
 * Decompiled function f__B520_05DC_0029_352D()
 *
 * @name f__B520_05DC_0029_352D
 * @implements B520:05DC:0029:352D ()
 *
 * Called From: B520:05D6:0028:F7FC
 */
void f__B520_05DC_0029_352D()
{
	emu_cmpw(&emu_di, emu_si);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__B520_05E2_0023_A79B(); return; }
	emu_movw(&emu_di, emu_si);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx.x,  0x6), emu_di);
	if (emu_flags.zf) { f__B520_05FA_000B_72B2(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x6), emu_di);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0xF), 0x1);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_push(emu_cs);
	emu_push(0x0605); f__B520_08E6_0038_85A4();
	f__B520_0605_001B_5AA5();
}

/**
 * Decompiled function f__B520_05E2_0023_A79B()
 *
 * @name f__B520_05E2_0023_A79B
 * @implements B520:05E2:0023:A79B ()
 *
 * Called From: B520:05DA:0028:F7FC
 * Called From: B520:05DE:0029:352D
 */
void f__B520_05E2_0023_A79B()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx.x,  0x6), emu_di);
	if (emu_flags.zf) { f__B520_05FA_000B_72B2(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x6), emu_di);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0xF), 0x1);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_push(emu_cs);
	emu_push(0x0605); f__B520_08E6_0038_85A4();
	f__B520_0605_001B_5AA5();
}

/**
 * Decompiled function f__B520_05FA_000B_72B2()
 *
 * @name f__B520_05FA_000B_72B2
 * @implements B520:05FA:000B:72B2 ()
 *
 * Called From: B520:05E9:0023:A79B
 * Called From: B520:05E9:0029:352D
 */
void f__B520_05FA_000B_72B2()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_push(emu_cs);
	emu_push(0x0605); f__B520_08E6_0038_85A4();
	f__B520_0605_001B_5AA5();
}

/**
 * Decompiled function f__B520_0605_001B_5AA5()
 *
 * @name f__B520_0605_001B_5AA5
 * @implements B520:0605:001B:5AA5 ()
 *
 * Called From: B520:0605:000B:72B2
 * Called From: B520:0605:0023:A79B
 * Called From: B520:0605:0029:352D
 */
void f__B520_0605_001B_5AA5()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0xF), 0x0);
	if (emu_flags.zf) { f__B520_0622_0004_E839(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x2));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_push(emu_cs);
	emu_push(0x0620); f__B520_06A2_0013_A505();
	f__B520_0620_0006_8EF0();
}

/**
 * Decompiled function f__B520_0620_0006_8EF0()
 *
 * @name f__B520_0620_0006_8EF0
 * @implements B520:0620:0006:8EF0 ()
 *
 * Called From: B520:0620:001B:5AA5
 */
void f__B520_0620_0006_8EF0()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__B520_0626_0006_F7CE(); return;
}

/**
 * Decompiled function f__B520_0622_0004_E839()
 *
 * @name f__B520_0622_0004_E839
 * @implements B520:0622:0004:E839 ()
 *
 * Called From: B520:0574:000E:C637
 * Called From: B520:0581:000D:BD8B
 * Called From: B520:060F:001B:5AA5
 */
void f__B520_0622_0004_E839()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__B520_0626_0006_F7CE(); return;
}

/**
 * Decompiled function f__B520_0626_0006_F7CE()
 *
 * @name f__B520_0626_0006_F7CE
 * @implements B520:0626:0006:F7CE ()
 *
 * Called From: B520:0624:0004:E839
 * Called From: B520:0624:0006:8EF0
 */
void f__B520_0626_0006_F7CE()
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
 * Decompiled function f__B520_062C_0030_162A()
 *
 * @name f__B520_062C_0030_162A
 * @implements B520:062C:0030:162A ()
 *
 * Called From: B520:03FB:0017:BA36
 * Called From: B520:0543:001A:447C
 */
void f__B520_062C_0030_162A()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_si);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_addw(&emu_get_memory16(emu_es, emu_bx.x,  0xC), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x8));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_subw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0xA));
	emu_movw(&emu_si, emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx.x,  0xC), emu_si);
	if (!(emu_flags.sf != emu_flags.of)) { f__B520_065C_001C_557A(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0xC));
	f__B520_065E_001A_9DD2(); return;
}

/**
 * Decompiled function f__B520_065C_001C_557A()
 *
 * @name f__B520_065C_001C_557A
 * @implements B520:065C:001C:557A ()
 *
 * Called From: B520:0651:0030:162A
 */
void f__B520_065C_001C_557A()
{
	emu_movw(&emu_ax.x, emu_si);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0xC), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0xC), 0x0);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x0678; emu_last_cs = 0xB520; emu_last_ip = 0x066D; emu_last_length = 0x001C; emu_last_crc = 0x557A; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0xC));
	f__B520_067A_0012_3B1E(); return;
}

/**
 * Decompiled function f__B520_065E_001A_9DD2()
 *
 * @name f__B520_065E_001A_9DD2
 * @implements B520:065E:001A:9DD2 ()
 *
 * Called From: B520:065A:0030:162A
 */
void f__B520_065E_001A_9DD2()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0xC), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0xC), 0x0);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x0678; emu_last_cs = 0xB520; emu_last_ip = 0x066D; emu_last_length = 0x001A; emu_last_crc = 0x9DD2; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0xC));
	f__B520_067A_0012_3B1E(); return;
}

/**
 * Decompiled function f__B520_067A_0012_3B1E()
 *
 * @name f__B520_067A_0012_3B1E
 * @implements B520:067A:0012:3B1E ()
 *
 * Called From: B520:0676:001A:9DD2
 * Called From: B520:0676:001C:557A
 */
void f__B520_067A_0012_3B1E()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0xC), emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x068C); f__B520_096E_003C_F7E4();
	f__B520_068C_0011_2861();
}

/**
 * Decompiled function f__B520_068C_0011_2861()
 *
 * @name f__B520_068C_0011_2861
 * @implements B520:068C:0011:2861 ()
 *
 * Called From: B520:068C:0012:3B1E
 */
void f__B520_068C_0011_2861()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x2));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_push(emu_cs);
	emu_push(0x069D); f__B520_06A2_0013_A505();
	f__B520_069D_0005_BC9A();
}

/**
 * Decompiled function f__B520_069D_0005_BC9A()
 *
 * @name f__B520_069D_0005_BC9A
 * @implements B520:069D:0005:BC9A ()
 *
 * Called From: B520:069D:0011:2861
 */
void f__B520_069D_0005_BC9A()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B520_06A2_0013_A505()
 *
 * @name f__B520_06A2_0013_A505
 * @implements B520:06A2:0013:A505 ()
 *
 * Called From: 3520:002A:0005:0000
 * Called From: B520:00B7:000D:2CDF
 * Called From: B520:04AD:0028:0D79
 * Called From: B520:061D:001B:5AA5
 * Called From: B520:069A:0011:2861
 */
void f__B520_06A2_0013_A505()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x12);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (!emu_flags.zf) { f__B520_06B5_000E_2EA0(); return; }
	/* Unresolved jump */ emu_ip = 0x0859; emu_last_cs = 0xB520; emu_last_ip = 0x06B2; emu_last_length = 0x0013; emu_last_crc = 0xA505; emu_call();
}

/**
 * Decompiled function f__B520_06B5_000E_2EA0()
 *
 * @name f__B520_06B5_000E_2EA0
 * @implements B520:06B5:000E:2EA0 ()
 *
 * Called From: B520:06B0:0013:A505
 */
void f__B520_06B5_000E_2EA0()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0xE), 0x8);
	if (emu_flags.zf) { f__B520_06C3_00B7_930A(); return; }
	/* Unresolved jump */ emu_ip = 0x0859; emu_last_cs = 0xB520; emu_last_ip = 0x06C0; emu_last_length = 0x000E; emu_last_crc = 0x2EA0; emu_call();
}

/**
 * Decompiled function f__B520_06C3_00B7_930A()
 *
 * @name f__B520_06C3_00B7_930A
 * @implements B520:06C3:00B7:930A ()
 *
 * Called From: B520:06BE:000E:2EA0
 */
void f__B520_06C3_00B7_930A()
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
	if (!(emu_flags.sf != emu_flags.of)) { f__B520_071E_005C_1634(); return; }
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
	if (!(emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x0745; emu_last_cs = 0xB520; emu_last_ip = 0x0738; emu_last_length = 0x00B7; emu_last_crc = 0x930A; emu_call(); return; }
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movb(&emu_cx.l, 0x4);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_addw(&emu_di, emu_get_memory16(emu_ds, emu_bx.x,  0x4068));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_addw(&emu_di, emu_get_memory16(emu_es, emu_bx.x,  0x20));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x077A; emu_last_cs = 0xB520; emu_last_ip = 0x0752; emu_last_length = 0x00B7; emu_last_crc = 0x930A; emu_call(); return; }
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
	/* Unresolved jump */ emu_ip = 0x079E; emu_last_cs = 0xB520; emu_last_ip = 0x0778; emu_last_length = 0x00B7; emu_last_crc = 0x930A; emu_call();
}

/**
 * Decompiled function f__B520_071E_005C_1634()
 *
 * @name f__B520_071E_005C_1634
 * @implements B520:071E:005C:1634 ()
 *
 * Called From: B520:070B:00B7:930A
 */
void f__B520_071E_005C_1634()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_addw(&emu_si, emu_get_memory16(emu_es, emu_bx.x,  0x1E));
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movb(&emu_cx.l, 0x4);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_di, emu_get_memory16(emu_ds, emu_bx.x,  0x4064));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x20), 0x0);
	if (!(emu_flags.sf != emu_flags.of)) { f__B520_0745_0035_0E38(); return; }
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movb(&emu_cx.l, 0x4);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_addw(&emu_di, emu_get_memory16(emu_ds, emu_bx.x,  0x4068));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_addw(&emu_di, emu_get_memory16(emu_es, emu_bx.x,  0x20));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x077A; emu_last_cs = 0xB520; emu_last_ip = 0x0752; emu_last_length = 0x005C; emu_last_crc = 0x1634; emu_call(); return; }
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
	/* Unresolved jump */ emu_ip = 0x079E; emu_last_cs = 0xB520; emu_last_ip = 0x0778; emu_last_length = 0x005C; emu_last_crc = 0x1634; emu_call();
}

/**
 * Decompiled function f__B520_0745_0035_0E38()
 *
 * @name f__B520_0745_0035_0E38
 * @implements B520:0745:0035:0E38 ()
 *
 * Called From: B520:0738:005C:1634
 */
void f__B520_0745_0035_0E38()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_addw(&emu_di, emu_get_memory16(emu_es, emu_bx.x,  0x20));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__B520_077A_0043_063B(); return; }
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
	/* Unresolved jump */ emu_ip = 0x079E; emu_last_cs = 0xB520; emu_last_ip = 0x0778; emu_last_length = 0x0035; emu_last_crc = 0x0E38; emu_call();
}

/**
 * Decompiled function f__B520_077A_0043_063B()
 *
 * @name f__B520_077A_0043_063B
 * @implements B520:077A:0043:063B ()
 *
 * Called From: B520:0752:0035:0E38
 */
void f__B520_077A_0043_063B()
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
	if (!emu_flags.zf) { f__B520_07C0_0024_CA96(); return; }
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
	emu_push(emu_cs); emu_push(0x07BD); emu_cs = 0x2B6C; f__2B6C_0197_00CE_4D32();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3520) { ovl__3520(0xFF); }
	f__B520_07BD_0027_DBD3();
}

/**
 * Decompiled function f__B520_07BD_0027_DBD3()
 *
 * @name f__B520_07BD_0027_DBD3
 * @implements B520:07BD:0027:DBD3 ()
 *
 * Called From: B520:07BD:0043:063B
 */
void f__B520_07BD_0027_DBD3()
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

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_es, 0x00,  0x6668);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_es, 0x00,  0x666A);
	emu_push(0x07E4);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A60D31: f__22A6_0D31_0015_A4C3(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0xB520; emu_last_ip = 0x07DF; emu_last_length = 0x0027; emu_last_crc = 0xDBD3;
			emu_call();
			return;
	}
	f__B520_07E4_0016_C2A0();
}

/**
 * Decompiled function f__B520_07C0_0024_CA96()
 *
 * @name f__B520_07C0_0024_CA96
 * @implements B520:07C0:0024:CA96 ()
 *
 * Called From: B520:07A6:0043:063B
 */
void f__B520_07C0_0024_CA96()
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

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_es, 0x00,  0x6668);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_es, 0x00,  0x666A);
	emu_push(0x07E4);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A60D31: f__22A6_0D31_0015_A4C3(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0xB520; emu_last_ip = 0x07DF; emu_last_length = 0x0024; emu_last_crc = 0xCA96;
			emu_call();
			return;
	}
	f__B520_07E4_0016_C2A0();
}

/**
 * Decompiled function f__B520_07E4_0016_C2A0()
 *
 * @name f__B520_07E4_0016_C2A0
 * @implements B520:07E4:0016:C2A0 ()
 *
 * Called From: B520:07E4:0024:CA96
 * Called From: B520:07E4:0027:DBD3
 */
void f__B520_07E4_0016_C2A0()
{
	emu_addws(&emu_sp, 0xA);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0xE), 0x0);
	if (emu_flags.zf) { f__B520_07FA_002C_125A(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x28));
	f__B520_0801_0025_CD0C(); return;
}

/**
 * Decompiled function f__B520_07FA_002C_125A()
 *
 * @name f__B520_07FA_002C_125A
 * @implements B520:07FA:002C:125A ()
 *
 * Called From: B520:07EF:0016:C2A0
 */
void f__B520_07FA_002C_125A()
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

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_es, 0x00,  0x6668);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_es, 0x00,  0x666A);
	emu_push(0x0826);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A60D31: f__22A6_0D31_0015_A4C3(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0xB520; emu_last_ip = 0x0821; emu_last_length = 0x002C; emu_last_crc = 0x125A;
			emu_call();
			return;
	}
	f__B520_0826_000F_9CB8();
}

/**
 * Decompiled function f__B520_0801_0025_CD0C()
 *
 * @name f__B520_0801_0025_CD0C
 * @implements B520:0801:0025:CD0C ()
 *
 * Called From: B520:07F8:0016:C2A0
 */
void f__B520_0801_0025_CD0C()
{
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

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_es, 0x00,  0x6668);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_es, 0x00,  0x666A);
	emu_push(0x0826);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A60D31: f__22A6_0D31_0015_A4C3(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0xB520; emu_last_ip = 0x0821; emu_last_length = 0x0025; emu_last_crc = 0xCD0C;
			emu_call();
			return;
	}
	f__B520_0826_000F_9CB8();
}

/**
 * Decompiled function f__B520_0826_000F_9CB8()
 *
 * @name f__B520_0826_000F_9CB8
 * @implements B520:0826:000F:9CB8 ()
 *
 * Called From: B520:0826:002C:125A
 * Called From: B520:0826:0025:CD0C
 */
void f__B520_0826_000F_9CB8()
{
	emu_addws(&emu_sp, 0xA);
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x6C91), 0x0);
	if (!emu_flags.zf) { f__B520_0835_001A_D0A3(); return; }
	emu_push(emu_cs); emu_push(0x0835); emu_cs = 0x2B6C; f__2B6C_0292_0028_3AD7();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3520) { ovl__3520(0xFF); }
	f__B520_0835_001A_D0A3();
}

/**
 * Decompiled function f__B520_0835_001A_D0A3()
 *
 * @name f__B520_0835_001A_D0A3
 * @implements B520:0835:001A:D0A3 ()
 *
 * Called From: B520:082E:000F:9CB8
 * Called From: B520:0835:000F:9CB8
 */
void f__B520_0835_001A_D0A3()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x12));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x14));
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0851; emu_last_cs = 0xB520; emu_last_ip = 0x0840; emu_last_length = 0x001A; emu_last_crc = 0xD0A3; emu_call(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x12));

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_es, emu_bx.x,  0x12);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_es, emu_bx.x,  0x14);
	emu_push(0x084F);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x34E0003E: ovl__34E0(6); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0xB520; emu_last_ip = 0x084B; emu_last_length = 0x001A; emu_last_crc = 0xD0A3;
			emu_call();
			return;
	}
	f__B520_084F_0010_C6C2();
}

/**
 * Decompiled function f__B520_084F_0010_C6C2()
 *
 * @name f__B520_084F_0010_C6C2
 * @implements B520:084F:0010:C6C2 ()
 *
 * Called From: B520:084F:001A:D0A3
 */
void f__B520_084F_0010_C6C2()
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
 * Decompiled function f__B520_085F_003A_87ED()
 *
 * @name f__B520_085F_003A_87ED
 * @implements B520:085F:003A:87ED ()
 *
 * Called From: B520:009D:001B:7C94
 * Called From: B520:037D:0071:C198
 */
void f__B520_085F_003A_87ED()
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
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x08DD; emu_last_cs = 0xB520; emu_last_ip = 0x087E; emu_last_length = 0x003A; emu_last_crc = 0x87ED; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x22));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x24));
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__B520_0899_0022_663C(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x22));
	/* Unresolved jump */ emu_ip = 0x08A0; emu_last_cs = 0xB520; emu_last_ip = 0x0897; emu_last_length = 0x003A; emu_last_crc = 0x87ED; emu_call();
}

/**
 * Decompiled function f__B520_0899_0022_663C()
 *
 * @name f__B520_0899_0022_663C
 * @implements B520:0899:0022:663C ()
 *
 * Called From: B520:088E:003A:87ED
 */
void f__B520_0899_0022_663C()
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
	emu_push(emu_cs); emu_push(0x08BB); emu_cs = 0x01F7; f__01F7_03B2_0017_7CBE();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3520) { ovl__3520(0xFF); }
	f__B520_08BB_0026_E858();
}

/**
 * Decompiled function f__B520_08BB_0026_E858()
 *
 * @name f__B520_08BB_0026_E858
 * @implements B520:08BB:0026:E858 ()
 *
 * Called From: B520:08BB:0022:663C
 */
void f__B520_08BB_0026_E858()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cwd();
	emu_idivw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x8));
	emu_movw(&emu_si, emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), emu_si);
	if (emu_flags.zf) { f__B520_08DD_0004_68F2(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), emu_si);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0xF), 0x1);
	emu_movw(&emu_ax.x, emu_si);
	f__B520_08E1_0005_8BCF(); return;
}

/**
 * Decompiled function f__B520_08DD_0004_68F2()
 *
 * @name f__B520_08DD_0004_68F2
 * @implements B520:08DD:0004:68F2 ()
 *
 * Called From: B520:08CC:0026:E858
 */
void f__B520_08DD_0004_68F2()
{
	emu_movw(&emu_ax.x, emu_si);
	f__B520_08E1_0005_8BCF(); return;
}

/**
 * Decompiled function f__B520_08E1_0005_8BCF()
 *
 * @name f__B520_08E1_0005_8BCF
 * @implements B520:08E1:0005:8BCF ()
 *
 * Called From: B520:08DF:0026:E858
 * Called From: B520:08DF:0004:68F2
 */
void f__B520_08E1_0005_8BCF()
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
 * Decompiled function f__B520_08E6_0038_85A4()
 *
 * @name f__B520_08E6_0038_85A4
 * @implements B520:08E6:0038:85A4 ()
 *
 * Called From: B520:0602:000B:72B2
 * Called From: B520:0602:0023:A79B
 * Called From: B520:0602:0029:352D
 */
void f__B520_08E6_0038_85A4()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x4);
	emu_push(emu_si);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x2));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_dx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0964; emu_last_cs = 0xB520; emu_last_ip = 0x0903; emu_last_length = 0x0038; emu_last_crc = 0x85A4; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x22));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x24));
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__B520_091E_0033_733E(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x22));
	/* Unresolved jump */ emu_ip = 0x0925; emu_last_cs = 0xB520; emu_last_ip = 0x091C; emu_last_length = 0x0038; emu_last_crc = 0x85A4; emu_call();
}

/**
 * Decompiled function f__B520_091E_0033_733E()
 *
 * @name f__B520_091E_0033_733E
 * @implements B520:091E:0033:733E ()
 *
 * Called From: B520:0913:0038:85A4
 */
void f__B520_091E_0033_733E()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x24));
	emu_addw(&emu_ax.x, 0xFFFE);
	emu_movw(&emu_si, emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_subw(&emu_si, emu_get_memory16(emu_es, emu_bx.x,  0x4));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x6));
	emu_cwd();
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x8));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_subw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0xA));
	emu_push(emu_dx.x);
	emu_cwd();
	emu_pop(&emu_cx.x);
	emu_pop(&emu_bx.x);
	emu_push(emu_cs); emu_push(0x0951); emu_cs = 0x01F7; f__01F7_03B2_0017_7CBE();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3520) { ovl__3520(0xFF); }
	f__B520_0951_0013_BA50();
}

/**
 * Decompiled function f__B520_0951_0013_BA50()
 *
 * @name f__B520_0951_0013_BA50
 * @implements B520:0951:0013:BA50 ()
 *
 * Called From: B520:0951:0033:733E
 */
void f__B520_0951_0013_BA50()
{
	emu_cwd();
	emu_idivw(&emu_ax.x, emu_si);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0xC), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0xC));
	f__B520_0969_0005_8BCF(); return;
}

/**
 * Decompiled function f__B520_0969_0005_8BCF()
 *
 * @name f__B520_0969_0005_8BCF
 * @implements B520:0969:0005:8BCF ()
 *
 * Called From: B520:0962:0013:BA50
 */
void f__B520_0969_0005_8BCF()
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
 * Decompiled function f__B520_096E_003C_F7E4()
 *
 * @name f__B520_096E_003C_F7E4
 * @implements B520:096E:003C:F7E4 ()
 *
 * Called From: B520:00AA:000D:9A2C
 * Called From: B520:038A:000D:94A7
 * Called From: B520:0689:0012:3B1E
 */
void f__B520_096E_003C_F7E4()
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
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0A0A; emu_last_cs = 0xB520; emu_last_ip = 0x098F; emu_last_length = 0x003C; emu_last_crc = 0xF7E4; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x22));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x24));
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__B520_09AA_003E_D22C(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x22));
	/* Unresolved jump */ emu_ip = 0x09B1; emu_last_cs = 0xB520; emu_last_ip = 0x09A8; emu_last_length = 0x003C; emu_last_crc = 0xF7E4; emu_call();
}

/**
 * Decompiled function f__B520_09AA_003E_D22C()
 *
 * @name f__B520_09AA_003E_D22C
 * @implements B520:09AA:003E:D22C ()
 *
 * Called From: B520:099F:003C:F7E4
 */
void f__B520_09AA_003E_D22C()
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
	if (emu_flags.zf) { f__B520_09F0_001E_489D(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0xC));
	emu_cwd();
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_di);
	emu_push(emu_dx.x);
	emu_cwd();
	emu_pop(&emu_cx.x);
	emu_pop(&emu_bx.x);
	emu_push(emu_cs); emu_push(0x09E8); emu_cs = 0x01F7; f__01F7_03B2_0017_7CBE();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3520) { ovl__3520(0xFF); }
	f__B520_09E8_0008_082D();
}

/**
 * Decompiled function f__B520_09E8_0008_082D()
 *
 * @name f__B520_09E8_0008_082D
 * @implements B520:09E8:0008:082D ()
 *
 * Called From: B520:09E8:003E:D22C
 */
void f__B520_09E8_0008_082D()
{
	emu_cwd();
	emu_idivw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_si, emu_ax.x);
	f__B520_09F2_001C_F856(); return;
}

/**
 * Decompiled function f__B520_09F0_001E_489D()
 *
 * @name f__B520_09F0_001E_489D
 * @implements B520:09F0:001E:489D ()
 *
 * Called From: B520:09D2:003E:D22C
 */
void f__B520_09F0_001E_489D()
{
	emu_xorw(&emu_si, emu_si);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx.x,  0x6), emu_si);
	if (emu_flags.zf) { f__B520_0A0A_0004_68F2(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x6), emu_si);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0xF), 0x1);
	emu_movw(&emu_ax.x, emu_si);
	/* Unresolved jump */ emu_ip = 0x0A0E; emu_last_cs = 0xB520; emu_last_ip = 0x0A0C; emu_last_length = 0x001E; emu_last_crc = 0x489D; emu_call();
}

/**
 * Decompiled function f__B520_09F2_001C_F856()
 *
 * @name f__B520_09F2_001C_F856
 * @implements B520:09F2:001C:F856 ()
 *
 * Called From: B520:09EE:0008:082D
 */
void f__B520_09F2_001C_F856()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx.x,  0x6), emu_si);
	if (emu_flags.zf) { f__B520_0A0A_0004_68F2(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x6), emu_si);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0xF), 0x1);
	emu_movw(&emu_ax.x, emu_si);
	f__B520_0A0E_0006_F7CE(); return;
}

/**
 * Decompiled function f__B520_0A0A_0004_68F2()
 *
 * @name f__B520_0A0A_0004_68F2
 * @implements B520:0A0A:0004:68F2 ()
 *
 * Called From: B520:09F9:001E:489D
 * Called From: B520:09F9:001C:F856
 */
void f__B520_0A0A_0004_68F2()
{
	emu_movw(&emu_ax.x, emu_si);
	f__B520_0A0E_0006_F7CE(); return;
}

/**
 * Decompiled function f__B520_0A0E_0006_F7CE()
 *
 * @name f__B520_0A0E_0006_F7CE
 * @implements B520:0A0E:0006:F7CE ()
 *
 * Called From: B520:0A0C:0004:68F2
 * Called From: B520:0A0C:001C:F856
 */
void f__B520_0A0E_0006_F7CE()
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

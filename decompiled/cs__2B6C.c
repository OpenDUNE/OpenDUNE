/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__2B6C_000E_0045_8F26()
 *
 * @name f__2B6C_000E_0045_8F26
 * @implements 2B6C:000E:0045:8F26 ()
 *
 * Called From: 29A3:016C:0008:F246
 * Called From: 2B4C:0045:0008:F246
 * Called From: 2B6C:015B:0007:749C
 * Called From: 2B6C:0269:0007:74D2
 * Called From: 2B99:006C:0008:F246
 */
void f__2B6C_000E_0045_8F26()
{
	emu_push(emu_ax.x);
	emu_push(emu_bx.x);
	emu_push(emu_cx.x);
	emu_push(emu_dx.x);
	emu_push(emu_es);
	emu_push(emu_di);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x353F);
	emu_movw(&emu_ds, emu_ax.x);
	emu_cmpb(&emu_get_memory8(emu_ds, 0x00,  0x7097), 0x0);
	if (!emu_flags.zf) { emu_ip = 0x0066; emu_last_cs = 0x2B6C; emu_last_ip = 0x001F; emu_last_length = 0x0045; emu_last_crc = 0x8F26; emu_call(); return; } // Jump does not resolve
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x706A), 0x0);
	if (!emu_flags.zf) { f__2B6C_005C_0012_EFFF(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x709A));
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00,  0x709C));
	emu_movw(&emu_cx.x, emu_get_memory16(emu_ds, 0x00,  0x709E));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x70A0));
	emu_cmpws(&emu_cx.x, 0x0);
	if (emu_flags.zf) { emu_ip = 0x005C; emu_last_cs = 0x2B6C; emu_last_ip = 0x003A; emu_last_length = 0x0045; emu_last_crc = 0x8F26; emu_call(); return; } // Jump does not resolve
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x708C), 0x0);
	if (emu_flags.zf) { emu_ip = 0x0056; emu_last_cs = 0x2B6C; emu_last_ip = 0x0041; emu_last_length = 0x0045; emu_last_crc = 0x8F26; emu_call(); return; } // Jump does not resolve
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x708C));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x708A));
	emu_push(emu_dx.x);
	emu_push(emu_cx.x);
	emu_push(emu_bx.x);
	emu_push(emu_ax.x);

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_ds, 0x00,  0x662C);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_ds, 0x00,  0x662E);
	emu_push(0x0053);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A604F8: f__22A6_04F8_007A_D667(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x2B6C; emu_last_ip = 0x004F; emu_last_length = 0x0045; emu_last_crc = 0x8F26;
			emu_call();
			return;
	}
	f__2B6C_0053_001B_1278();
}

/**
 * Decompiled function f__2B6C_0053_001B_1278()
 *
 * @name f__2B6C_0053_001B_1278
 * @implements 2B6C:0053:001B:1278 ()
 *
 * Called From: 2B6C:0053:0045:8F26
 */
void f__2B6C_0053_001B_1278()
{
	emu_addws(&emu_sp, 0xC);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x709E), 0x0);
	emu_addws(&emu_get_memory16(emu_ds, 0x00,  0x706A), 0x1);
	emu_adcws(&emu_get_memory16(emu_ds, 0x00,  0x706A), 0x0);
	emu_pop(&emu_ds);
	emu_pop(&emu_di);
	emu_pop(&emu_es);
	emu_pop(&emu_dx.x);
	emu_pop(&emu_cx.x);
	emu_pop(&emu_bx.x);
	emu_pop(&emu_ax.x);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__2B6C_005C_0012_EFFF()
 *
 * @name f__2B6C_005C_0012_EFFF
 * @implements 2B6C:005C:0012:EFFF ()
 *
 * Called From: 2B6C:0026:0045:8F26
 */
void f__2B6C_005C_0012_EFFF()
{
	emu_addws(&emu_get_memory16(emu_ds, 0x00,  0x706A), 0x1);
	emu_adcws(&emu_get_memory16(emu_ds, 0x00,  0x706A), 0x0);
	emu_pop(&emu_ds);
	emu_pop(&emu_di);
	emu_pop(&emu_es);
	emu_pop(&emu_dx.x);
	emu_pop(&emu_cx.x);
	emu_pop(&emu_bx.x);
	emu_pop(&emu_ax.x);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__2B6C_006E_002E_CEAB()
 *
 * @name f__2B6C_006E_002E_CEAB
 * @implements 2B6C:006E:002E:CEAB ()
 *
 * Called From: 29A3:01AC:0008:F446
 * Called From: 2B4C:01E8:0008:F446
 * Called From: 2B6C:018B:0007:75DC
 * Called From: 2B6C:02BE:0007:74EE
 * Called From: 2B99:0071:0005:1446
 */
void f__2B6C_006E_002E_CEAB()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x4);
	emu_push(emu_ax.x);
	emu_push(emu_bx.x);
	emu_push(emu_cx.x);
	emu_push(emu_dx.x);
	emu_push(emu_es);
	emu_push(emu_di);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x353F);
	emu_movw(&emu_ds, emu_ax.x);
	emu_cmpb(&emu_get_memory8(emu_ds, 0x00,  0x7097), 0x0);
	if (!emu_flags.zf) { emu_ip = 0x0099; emu_last_cs = 0x2B6C; emu_last_ip = 0x0085; emu_last_length = 0x002E; emu_last_crc = 0xCEAB; emu_call(); return; } // Jump does not resolve
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x706A), 0x0);
	if (emu_flags.zf) { f__2B6C_0099_0003_0508(); return; }
	emu_decw(&emu_get_memory16(emu_ds, 0x00,  0x706A));
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x706A), 0x0);
	if (emu_flags.zf) { f__2B6C_009C_006E_061E(); return; }
	f__2B6C_012C_000B_EE3B(); return;
}

/**
 * Decompiled function f__2B6C_0099_0003_0508()
 *
 * @name f__2B6C_0099_0003_0508
 * @implements 2B6C:0099:0003:0508 ()
 *
 * Called From: 2B6C:008C:002E:CEAB
 */
void f__2B6C_0099_0003_0508()
{
	f__2B6C_012C_000B_EE3B(); return;
}

/**
 * Decompiled function f__2B6C_009C_006E_061E()
 *
 * @name f__2B6C_009C_006E_061E
 * @implements 2B6C:009C:006E:061E ()
 *
 * Called From: 2B6C:0097:002E:CEAB
 */
void f__2B6C_009C_006E_061E()
{
	emu_movw(&emu_cx.x, emu_get_memory16(emu_ds, 0x00,  0x7076));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x7074));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x7060));
	emu_subw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x7078));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	if (!emu_flags.sf) { f__2B6C_00B3_0057_20F4(); return; }
	emu_movw(&emu_ax.x, 0x0);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00,  0x7062));
	emu_subw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00,  0x707A));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_bx.x);
	if (!emu_flags.sf) { f__2B6C_00C5_0045_415A(); return; }
	emu_addw(&emu_dx.x, emu_bx.x);
	emu_movw(&emu_bx.x, 0x0);
	emu_shrw(&emu_ax.x, 0x1);
	emu_shrw(&emu_ax.x, 0x1);
	emu_shrw(&emu_ax.x, 0x1);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x709A), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x709C), emu_bx.x);
	emu_addw(&emu_ax.x, emu_cx.x);
	emu_subw(&emu_ax.x, 0x28);
	if (emu_flags.sf) { emu_ip = 0x00DB; emu_last_cs = 0x2B6C; emu_last_ip = 0x00D7; emu_last_length = 0x006E; emu_last_crc = 0x061E; emu_call(); return; } // Jump does not resolve
	emu_subw(&emu_cx.x, emu_ax.x);
	emu_addw(&emu_bx.x, emu_dx.x);
	emu_subw(&emu_bx.x, 0xC8);
	if (emu_flags.sf) { emu_ip = 0x00E5; emu_last_cs = 0x2B6C; emu_last_ip = 0x00E1; emu_last_length = 0x006E; emu_last_crc = 0x061E; emu_call(); return; } // Jump does not resolve
	emu_subw(&emu_dx.x, emu_bx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x709E), emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x70A0), emu_dx.x);
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x708C), 0x0);
	if (emu_flags.zf) { emu_ip = 0x010D; emu_last_cs = 0x2B6C; emu_last_ip = 0x00F2; emu_last_length = 0x006E; emu_last_crc = 0x061E; emu_call(); return; } // Jump does not resolve
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x708C));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x708A));
	emu_push(emu_dx.x);
	emu_push(emu_cx.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x709C));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x709A));

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_ds, 0x00,  0x66C0);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_ds, 0x00,  0x66C2);
	emu_push(0x010A);
	switch ((emu_cs << 16) + emu_ip) {
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x2B6C; emu_last_ip = 0x0106; emu_last_length = 0x006E; emu_last_crc = 0x061E;
			emu_call();
			return;
	}
	f__2B6C_010A_001F_4150();
}

/**
 * Decompiled function f__2B6C_00B3_0057_20F4()
 *
 * @name f__2B6C_00B3_0057_20F4
 * @implements 2B6C:00B3:0057:20F4 ()
 *
 * Called From: 2B6C:00AE:006E:061E
 */
void f__2B6C_00B3_0057_20F4()
{
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00,  0x7062));
	emu_subw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00,  0x707A));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_bx.x);
	if (!emu_flags.sf) { f__2B6C_00C5_0045_415A(); return; }
	emu_addw(&emu_dx.x, emu_bx.x);
	emu_movw(&emu_bx.x, 0x0);
	emu_shrw(&emu_ax.x, 0x1);
	emu_shrw(&emu_ax.x, 0x1);
	emu_shrw(&emu_ax.x, 0x1);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x709A), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x709C), emu_bx.x);
	emu_addw(&emu_ax.x, emu_cx.x);
	emu_subw(&emu_ax.x, 0x28);
	if (emu_flags.sf) { emu_ip = 0x00DB; emu_last_cs = 0x2B6C; emu_last_ip = 0x00D7; emu_last_length = 0x0057; emu_last_crc = 0x20F4; emu_call(); return; } // Jump does not resolve
	emu_subw(&emu_cx.x, emu_ax.x);
	emu_addw(&emu_bx.x, emu_dx.x);
	emu_subw(&emu_bx.x, 0xC8);
	if (emu_flags.sf) { emu_ip = 0x00E5; emu_last_cs = 0x2B6C; emu_last_ip = 0x00E1; emu_last_length = 0x0057; emu_last_crc = 0x20F4; emu_call(); return; } // Jump does not resolve
	emu_subw(&emu_dx.x, emu_bx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x709E), emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x70A0), emu_dx.x);
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x708C), 0x0);
	if (emu_flags.zf) { emu_ip = 0x010D; emu_last_cs = 0x2B6C; emu_last_ip = 0x00F2; emu_last_length = 0x0057; emu_last_crc = 0x20F4; emu_call(); return; } // Jump does not resolve
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x708C));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x708A));
	emu_push(emu_dx.x);
	emu_push(emu_cx.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x709C));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x709A));

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_ds, 0x00,  0x66C0);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_ds, 0x00,  0x66C2);
	emu_push(0x010A);
	switch ((emu_cs << 16) + emu_ip) {
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x2B6C; emu_last_ip = 0x0106; emu_last_length = 0x0057; emu_last_crc = 0x20F4;
			emu_call();
			return;
	}
	f__2B6C_010A_001F_4150();
}

/**
 * Decompiled function f__2B6C_00C5_0045_415A()
 *
 * @name f__2B6C_00C5_0045_415A
 * @implements 2B6C:00C5:0045:415A ()
 *
 * Called From: 2B6C:00BE:0057:20F4
 * Called From: 2B6C:00BE:006E:061E
 */
void f__2B6C_00C5_0045_415A()
{
	emu_shrw(&emu_ax.x, 0x1);
	emu_shrw(&emu_ax.x, 0x1);
	emu_shrw(&emu_ax.x, 0x1);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x709A), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x709C), emu_bx.x);
	emu_addw(&emu_ax.x, emu_cx.x);
	emu_subw(&emu_ax.x, 0x28);
	if (emu_flags.sf) { f__2B6C_00DB_002F_CF7D(); return; }
	emu_subw(&emu_cx.x, emu_ax.x);
	emu_addw(&emu_bx.x, emu_dx.x);
	emu_subw(&emu_bx.x, 0xC8);
	if (emu_flags.sf) { f__2B6C_00E5_0025_CC12(); return; }
	emu_subw(&emu_dx.x, emu_bx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x709E), emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x70A0), emu_dx.x);
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x708C), 0x0);
	if (emu_flags.zf) { emu_ip = 0x010D; emu_last_cs = 0x2B6C; emu_last_ip = 0x00F2; emu_last_length = 0x0045; emu_last_crc = 0x415A; emu_call(); return; } // Jump does not resolve
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x708C));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x708A));
	emu_push(emu_dx.x);
	emu_push(emu_cx.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x709C));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x709A));

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_ds, 0x00,  0x66C0);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_ds, 0x00,  0x66C2);
	emu_push(0x010A);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A6101C: f__22A6_101C_004B_C8B8(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x2B6C; emu_last_ip = 0x0106; emu_last_length = 0x0045; emu_last_crc = 0x415A;
			emu_call();
			return;
	}
	f__2B6C_010A_001F_4150();
}

/**
 * Decompiled function f__2B6C_00DB_002F_CF7D()
 *
 * @name f__2B6C_00DB_002F_CF7D
 * @implements 2B6C:00DB:002F:CF7D ()
 *
 * Called From: 2B6C:00D7:0045:415A
 */
void f__2B6C_00DB_002F_CF7D()
{
	emu_addw(&emu_bx.x, emu_dx.x);
	emu_subw(&emu_bx.x, 0xC8);
	if (emu_flags.sf) { f__2B6C_00E5_0025_CC12(); return; }
	emu_subw(&emu_dx.x, emu_bx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x709E), emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x70A0), emu_dx.x);
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x708C), 0x0);
	if (emu_flags.zf) { emu_ip = 0x010D; emu_last_cs = 0x2B6C; emu_last_ip = 0x00F2; emu_last_length = 0x002F; emu_last_crc = 0xCF7D; emu_call(); return; } // Jump does not resolve
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x708C));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x708A));
	emu_push(emu_dx.x);
	emu_push(emu_cx.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x709C));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x709A));

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_ds, 0x00,  0x66C0);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_ds, 0x00,  0x66C2);
	emu_push(0x010A);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A6101C: f__22A6_101C_004B_C8B8(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x2B6C; emu_last_ip = 0x0106; emu_last_length = 0x002F; emu_last_crc = 0xCF7D;
			emu_call();
			return;
	}
	f__2B6C_010A_001F_4150();
}

/**
 * Decompiled function f__2B6C_00E5_0025_CC12()
 *
 * @name f__2B6C_00E5_0025_CC12
 * @implements 2B6C:00E5:0025:CC12 ()
 *
 * Called From: 2B6C:00E1:002F:CF7D
 * Called From: 2B6C:00E1:0045:415A
 */
void f__2B6C_00E5_0025_CC12()
{
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x709E), emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x70A0), emu_dx.x);
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x708C), 0x0);
	if (emu_flags.zf) { emu_ip = 0x010D; emu_last_cs = 0x2B6C; emu_last_ip = 0x00F2; emu_last_length = 0x0025; emu_last_crc = 0xCC12; emu_call(); return; } // Jump does not resolve
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x708C));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x708A));
	emu_push(emu_dx.x);
	emu_push(emu_cx.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x709C));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x709A));

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_ds, 0x00,  0x66C0);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_ds, 0x00,  0x66C2);
	emu_push(0x010A);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A6101C: f__22A6_101C_004B_C8B8(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x2B6C; emu_last_ip = 0x0106; emu_last_length = 0x0025; emu_last_crc = 0xCC12;
			emu_call();
			return;
	}
	f__2B6C_010A_001F_4150();
}

/**
 * Decompiled function f__2B6C_010A_001F_4150()
 *
 * @name f__2B6C_010A_001F_4150
 * @implements 2B6C:010A:001F:4150 ()
 *
 * Called From: 2B6C:010A:0025:CC12
 * Called From: 2B6C:010A:002F:CF7D
 * Called From: 2B6C:010A:0045:415A
 */
void f__2B6C_010A_001F_4150()
{
	emu_addws(&emu_sp, 0xC);
	emu_movw(&emu_ax.x, 0x0);
	emu_push(emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x7090));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x708E));
	emu_movw(&emu_ax.x, 0x0);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0129); emu_cs = 0x2903; f__2903_0158_001A_A9AA();
	f__2B6C_0129_000E_4E03();
}

/**
 * Decompiled function f__2B6C_0129_000E_4E03()
 *
 * @name f__2B6C_0129_000E_4E03
 * @implements 2B6C:0129:000E:4E03 ()
 *
 * Called From: 2B6C:0129:001F:4150
 */
void f__2B6C_0129_000E_4E03()
{
	emu_addws(&emu_sp, 0xE);
	emu_pop(&emu_ds);
	emu_pop(&emu_di);
	emu_pop(&emu_es);
	emu_pop(&emu_dx.x);
	emu_pop(&emu_cx.x);
	emu_pop(&emu_bx.x);
	emu_pop(&emu_ax.x);
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__2B6C_012C_000B_EE3B()
 *
 * @name f__2B6C_012C_000B_EE3B
 * @implements 2B6C:012C:000B:EE3B ()
 *
 * Called From: 2B6C:0099:0003:0508
 * Called From: 2B6C:0099:002E:CEAB
 */
void f__2B6C_012C_000B_EE3B()
{
	emu_pop(&emu_ds);
	emu_pop(&emu_di);
	emu_pop(&emu_es);
	emu_pop(&emu_dx.x);
	emu_pop(&emu_cx.x);
	emu_pop(&emu_bx.x);
	emu_pop(&emu_ax.x);
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__2B6C_0137_0020_17E5()
 *
 * @name f__2B6C_0137_0020_17E5
 * @implements 2B6C:0137:0020:17E5 ()
 *
 * Called From: 0F78:0170:003E:9180
 * Called From: 10E4:029F:0008:F3DE
 * Called From: 10E4:04BA:0006:079E
 * Called From: 10E4:2215:0006:079E
 * Called From: 1423:03BF:0005:11DE
 * Called From: B495:0B6C:0005:11DE
 * Called From: B495:0CF9:0005:11DE
 * Called From: B495:0E2E:002A:09DC
 * Called From: B495:0F33:0008:3A5E
 * Called From: B495:0F80:000B:BADF
 * Called From: B495:11A9:0008:BEDE
 * Called From: B495:150B:0007:2B1E
 * Called From: B4B8:1C57:000F:B1A5
 * Called From: B4B8:1FA1:0008:F35E
 * Called From: B4B8:212A:0005:11DE
 * Called From: B4B8:21D9:0008:A05E
 * Called From: B4B8:2251:0007:2B1E
 * Called From: B4DA:1195:0008:F15E
 * Called From: B4DA:13DA:0006:079E
 * Called From: B4DA:141C:0006:079E
 * Called From: B4DA:14E0:0005:11DE
 * Called From: B4DA:1863:0008:3A5E
 * Called From: B4E0:008F:0005:11DE
 * Called From: B4E0:0A45:0007:2B1E
 * Called From: B4E6:0080:0005:11DE
 * Called From: B4E6:0162:0015:B10F
 * Called From: B4E6:040B:0005:11DE
 * Called From: B4E6:04C7:000A:E65D
 * Called From: B4F2:0D06:0005:11DE
 * Called From: B4F2:0EEF:0006:079E
 * Called From: B4F2:0F33:0006:079E
 * Called From: B503:0245:0008:F25E
 * Called From: B503:0558:0008:F15E
 * Called From: B503:0797:001E:A35D
 * Called From: B503:091B:0016:472C
 * Called From: B503:09FA:0012:DA8D
 * Called From: B503:0B03:0005:11DE
 * Called From: B511:0EF3:0006:079E
 * Called From: B511:10EC:0008:F2DE
 * Called From: B511:117C:000A:085D
 * Called From: B511:1393:0008:F35E
 * Called From: B518:0056:0008:815E
 * Called From: B518:0563:0010:266B
 * Called From: B518:148F:000B:D39B
 * Called From: B527:00A1:0005:11DE
 * Called From: B527:0223:002A:89CC
 * Called From: B527:0324:0005:11DE
 * Called From: B527:0324:0028:279D
 * Called From: B527:0324:003D:49AE
 * Called From: B53B:0066:000F:2EC4
 */
void f__2B6C_0137_0020_17E5()
{
	emu_push(emu_es);
	emu_push(emu_di);
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x705E), 0x0);
	if (!emu_flags.zf) { emu_ip = 0x0139; emu_last_cs = 0x2B6C; emu_last_ip = 0x013E; emu_last_length = 0x0020; emu_last_crc = 0x17E5; emu_call(); return; } // Jump does not resolve
	emu_incw(&emu_get_memory16(emu_ds, 0x00,  0x705E));
	emu_cmpb(&emu_get_memory8(emu_ds, 0x00,  0x7097), 0x0);
	if (!emu_flags.zf) { emu_ip = 0x0162; emu_last_cs = 0x2B6C; emu_last_ip = 0x0149; emu_last_length = 0x0020; emu_last_crc = 0x17E5; emu_call(); return; } // Jump does not resolve
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x7094));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x7092));

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_ds, 0x00,  0x66B4);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_ds, 0x00,  0x66B6);
	emu_push(0x0157);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A60FD7: f__22A6_0FD7_0043_03A9(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x2B6C; emu_last_ip = 0x0153; emu_last_length = 0x0020; emu_last_crc = 0x17E5;
			emu_call();
			return;
	}
	f__2B6C_0157_0007_749C();
}

/**
 * Decompiled function f__2B6C_0157_0007_749C()
 *
 * @name f__2B6C_0157_0007_749C
 * @implements 2B6C:0157:0007:749C ()
 *
 * Called From: 2B6C:0157:0020:17E5
 */
void f__2B6C_0157_0007_749C()
{
	emu_addws(&emu_sp, 0x4);
	emu_push(emu_cs);
	emu_push(0x015E); f__2B6C_000E_0045_8F26();
	f__2B6C_015E_0004_0D5C();
}

/**
 * Decompiled function f__2B6C_015E_0004_0D5C()
 *
 * @name f__2B6C_015E_0004_0D5C
 * @implements 2B6C:015E:0004:0D5C ()
 *
 * Called From: 2B6C:015E:0007:749C
 */
void f__2B6C_015E_0004_0D5C()
{

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_ds, 0x00,  0x66A4);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_ds, 0x00,  0x66A6);
	emu_push(0x0162);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A60FAE: f__22A6_0FAE_0027_9A7A(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x2B6C; emu_last_ip = 0x015E; emu_last_length = 0x0004; emu_last_crc = 0x0D5C;
			emu_call();
			return;
	}
	f__2B6C_0162_0007_73B2();
}

/**
 * Decompiled function f__2B6C_0162_0007_73B2()
 *
 * @name f__2B6C_0162_0007_73B2
 * @implements 2B6C:0162:0007:73B2 ()
 *
 * Called From: 2B6C:0162:0004:0D5C
 */
void f__2B6C_0162_0007_73B2()
{
	emu_decw(&emu_get_memory16(emu_ds, 0x00,  0x705E));
	emu_pop(&emu_di);
	emu_pop(&emu_es);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__2B6C_0169_001E_97C8()
 *
 * @name f__2B6C_0169_001E_97C8
 * @implements 2B6C:0169:001E:97C8 ()
 *
 * Called From: 0642:010E:0006:027E
 * Called From: 0F78:019C:0008:F13E
 * Called From: 10E4:0470:0007:2EFE
 * Called From: 10E4:056F:0006:027E
 * Called From: 10E4:226B:0008:F4BE
 * Called From: 1423:03C9:0005:143E
 * Called From: B495:0B98:0008:F13E
 * Called From: B495:0D2C:0008:F13E
 * Called From: B495:0E6C:0008:F7BE
 * Called From: B495:0F73:0008:F13E
 * Called From: B495:0FAC:0008:F13E
 * Called From: B495:121E:000E:9F86
 * Called From: B495:1533:0008:F13E
 * Called From: B4B8:1B72:0027:E5D1
 * Called From: B4B8:1D35:000F:B445
 * Called From: B4B8:206E:0008:F6BE
 * Called From: B4B8:21C6:000C:83B7
 * Called From: B4B8:21F5:0006:027E
 * Called From: B4DA:11BD:0008:F13E
 * Called From: B4DA:140E:0008:F13E
 * Called From: B4DA:1488:0008:F63E
 * Called From: B4DA:1514:0008:F13E
 * Called From: B4DA:188C:0008:F13E
 * Called From: B4E0:00B7:0008:F13E
 * Called From: B4E0:0A71:0008:F13E
 * Called From: B4E6:00C7:0008:F6BE
 * Called From: B4E6:01F0:0014:C4A4
 * Called From: B4E6:04A7:0008:F6BE
 * Called From: B4E6:0501:0008:F6BE
 * Called From: B4F2:0D3E:0008:F13E
 * Called From: B4F2:0F1D:0008:F63E
 * Called From: B4F2:0F61:0008:F63E
 * Called From: B503:04CE:0006:027E
 * Called From: B503:0566:0006:027E
 * Called From: B503:07E8:0016:37DA
 * Called From: B503:0950:0008:F13E
 * Called From: B503:0A27:0008:F13E
 * Called From: B503:0B3B:0008:F13E
 * Called From: B511:0F1B:0008:F13E
 * Called From: B511:1128:0008:F4BE
 * Called From: B511:133E:0009:33BE
 * Called From: B511:13F4:0007:2EFE
 * Called From: B511:14D8:0005:143E
 * Called From: B518:0502:0005:143E
 * Called From: B518:0823:0005:143E
 * Called From: B518:0823:0006:027E
 * Called From: B518:14BB:0008:F13E
 * Called From: B527:00E3:0007:2EFE
 * Called From: B527:025C:0008:F6BE
 * Called From: B527:0362:0008:F7BE
 * Called From: B53B:0279:0013:234B
 */
void f__2B6C_0169_001E_97C8()
{
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x705E), 0x0);
	if (!emu_flags.zf) { emu_ip = 0x0169; emu_last_cs = 0x2B6C; emu_last_ip = 0x016E; emu_last_length = 0x001E; emu_last_crc = 0x97C8; emu_call(); return; } // Jump does not resolve
	emu_incw(&emu_get_memory16(emu_ds, 0x00,  0x705E));
	emu_cmpb(&emu_get_memory8(emu_ds, 0x00,  0x7097), 0x0);
	if (!emu_flags.zf) { emu_ip = 0x0192; emu_last_cs = 0x2B6C; emu_last_ip = 0x0179; emu_last_length = 0x001E; emu_last_crc = 0x97C8; emu_call(); return; } // Jump does not resolve
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x7094));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x7092));

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_ds, 0x00,  0x66B4);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_ds, 0x00,  0x66B6);
	emu_push(0x0187);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A60FD7: f__22A6_0FD7_0043_03A9(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x2B6C; emu_last_ip = 0x0183; emu_last_length = 0x001E; emu_last_crc = 0x97C8;
			emu_call();
			return;
	}
	f__2B6C_0187_0007_75DC();
}

/**
 * Decompiled function f__2B6C_0187_0007_75DC()
 *
 * @name f__2B6C_0187_0007_75DC
 * @implements 2B6C:0187:0007:75DC ()
 *
 * Called From: 2B6C:0187:001E:97C8
 */
void f__2B6C_0187_0007_75DC()
{
	emu_addws(&emu_sp, 0x4);
	emu_push(emu_cs);
	emu_push(0x018E); f__2B6C_006E_002E_CEAB();
	f__2B6C_018E_0004_0D5C();
}

/**
 * Decompiled function f__2B6C_018E_0004_0D5C()
 *
 * @name f__2B6C_018E_0004_0D5C
 * @implements 2B6C:018E:0004:0D5C ()
 *
 * Called From: 2B6C:018E:0007:75DC
 */
void f__2B6C_018E_0004_0D5C()
{

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_ds, 0x00,  0x66A4);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_ds, 0x00,  0x66A6);
	emu_push(0x0192);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A60FAE: f__22A6_0FAE_0027_9A7A(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x2B6C; emu_last_ip = 0x018E; emu_last_length = 0x0004; emu_last_crc = 0x0D5C;
			emu_call();
			return;
	}
	f__2B6C_0192_0005_1DA6();
}

/**
 * Decompiled function f__2B6C_0192_0005_1DA6()
 *
 * @name f__2B6C_0192_0005_1DA6
 * @implements 2B6C:0192:0005:1DA6 ()
 *
 * Called From: 2B6C:0192:0004:0D5C
 */
void f__2B6C_0192_0005_1DA6()
{
	emu_decw(&emu_get_memory16(emu_ds, 0x00,  0x705E));

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__2B6C_0197_00CE_7027()
 *
 * @name f__2B6C_0197_00CE_7027
 * @implements 2B6C:0197:00CE:7027 ()
 *
 * Called From: 0AEC:0C2F:0021:C309
 * Called From: 0AEC:0C2F:0029:95F9
 * Called From: 0AEC:0DF0:0024:CD29
 * Called From: 0AEC:0F8A:0029:96F8
 * Called From: 10E4:05F1:0023:4D06
 * Called From: 2642:005B:005E:D1F0
 * Called From: 2C17:0036:002F:E104
 * Called From: B488:0022:0027:30C7
 * Called From: B4A2:08BD:0014:66A0
 * Called From: B4A2:0906:0014:66A0
 * Called From: B4DA:03C9:0017:B485
 * Called From: B4DA:0521:0017:A481
 * Called From: B4DA:068D:0017:A481
 * Called From: B4DA:0A4C:0017:948D
 * Called From: B4DA:0CF5:0013:41A5
 * Called From: B4DA:0D67:0013:41A5
 * Called From: B4DA:0D67:0023:338D
 * Called From: B4DA:0E6D:0014:4435
 * Called From: B4DA:178D:0017:4845
 * Called From: B4DA:1823:0016:7905
 * Called From: B4F2:10B6:001C:AF51
 * Called From: B520:07B8:0043:B0AF
 */
void f__2B6C_0197_00CE_7027()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_ax.x);
	emu_push(emu_bx.x);
	emu_push(emu_cx.x);
	emu_push(emu_dx.x);
	emu_push(emu_es);
	emu_push(emu_di);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x7076));
	emu_decw(&emu_ax.x);
	emu_shlw(&emu_ax.x, 0x1);
	emu_shlw(&emu_ax.x, 0x1);
	emu_shlw(&emu_ax.x, 0x1);
	emu_subw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x7078));
	emu_negw(&emu_ax.x, emu_ax.x);
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	if (!emu_flags.sf) { f__2B6C_01B8_00AD_82E3(); return; }
	emu_movw(&emu_ax.x, 0x0);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00,  0x7074));
	emu_subw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00,  0x707A));
	emu_negw(&emu_bx.x, emu_bx.x);
	emu_addw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (!emu_flags.sf) { f__2B6C_01CA_009B_5987(); return; }
	emu_movw(&emu_bx.x, 0x0);
	emu_movw(&emu_cx.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_addw(&emu_cx.x, emu_get_memory16(emu_ds, 0x00,  0x7078));
	emu_cmpw(&emu_cx.x, 0x13F);
	if (emu_flags.cf) { f__2B6C_01DA_008B_06FE(); return; }
	emu_movw(&emu_cx.x, 0x13F);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_addw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x707A));
	emu_cmpw(&emu_dx.x, 0xC7);
	if (emu_flags.cf) { f__2B6C_01EA_007B_EAE2(); return; }
	emu_movw(&emu_dx.x, 0xC7);
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x705E), 0x0);
	if (!emu_flags.zf) { emu_ip = 0x01EA; emu_last_cs = 0x2B6C; emu_last_ip = 0x01EF; emu_last_length = 0x00CE; emu_last_crc = 0x7027; emu_call(); return; } // Jump does not resolve
	emu_incw(&emu_get_memory16(emu_ds, 0x00,  0x705E));
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x7080), 0x0);
	if (!emu_flags.zf) { emu_ip = 0x020B; emu_last_cs = 0x2B6C; emu_last_ip = 0x01FA; emu_last_length = 0x00CE; emu_last_crc = 0x7027; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x7082), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x7084), emu_bx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x7086), emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x7088), emu_dx.x);
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x7082));
	if (emu_flags.cf) { emu_ip = 0x0214; emu_last_cs = 0x2B6C; emu_last_ip = 0x020F; emu_last_length = 0x00CE; emu_last_crc = 0x7027; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x7082), emu_ax.x);
	emu_cmpw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00,  0x7084));
	if (emu_flags.cf) { emu_ip = 0x021E; emu_last_cs = 0x2B6C; emu_last_ip = 0x0218; emu_last_length = 0x00CE; emu_last_crc = 0x7027; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x7084), emu_bx.x);
	emu_cmpw(&emu_cx.x, emu_get_memory16(emu_ds, 0x00,  0x7086));
	if (!(emu_flags.cf || emu_flags.zf)) { emu_ip = 0x0228; emu_last_cs = 0x2B6C; emu_last_ip = 0x0222; emu_last_length = 0x00CE; emu_last_crc = 0x7027; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x7086), emu_cx.x);
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x7088));
	if (!(emu_flags.cf || emu_flags.zf)) { emu_ip = 0x0232; emu_last_cs = 0x2B6C; emu_last_ip = 0x022C; emu_last_length = 0x00CE; emu_last_crc = 0x7027; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x7088), emu_dx.x);
	emu_testw(&emu_get_memory16(emu_ds, 0x00,  0x7080), 0x4000);
	if (!emu_flags.zf) { emu_ip = 0x0276; emu_last_cs = 0x2B6C; emu_last_ip = 0x0238; emu_last_length = 0x00CE; emu_last_crc = 0x7027; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x7060));
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00,  0x7062));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x7082));
	if (emu_flags.cf) { emu_ip = 0x0276; emu_last_cs = 0x2B6C; emu_last_ip = 0x0245; emu_last_length = 0x00CE; emu_last_crc = 0x7027; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x7086));
	if (!(emu_flags.cf || emu_flags.zf)) { emu_ip = 0x0276; emu_last_cs = 0x2B6C; emu_last_ip = 0x024B; emu_last_length = 0x00CE; emu_last_crc = 0x7027; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00,  0x7084));
	if (emu_flags.cf) { emu_ip = 0x0276; emu_last_cs = 0x2B6C; emu_last_ip = 0x0251; emu_last_length = 0x00CE; emu_last_crc = 0x7027; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00,  0x7088));
	if (!(emu_flags.cf || emu_flags.zf)) { emu_ip = 0x0276; emu_last_cs = 0x2B6C; emu_last_ip = 0x0257; emu_last_length = 0x00CE; emu_last_crc = 0x7027; emu_call(); return; } // Jump does not resolve
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x7094));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x7092));

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_ds, 0x00,  0x66B4);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_ds, 0x00,  0x66B6);
	emu_push(0x0265);
	switch ((emu_cs << 16) + emu_ip) {
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x2B6C; emu_last_ip = 0x0261; emu_last_length = 0x00CE; emu_last_crc = 0x7027;
			emu_call();
			return;
	}
	f__2B6C_0265_0007_74D2();
}

/**
 * Decompiled function f__2B6C_01B8_00AD_82E3()
 *
 * @name f__2B6C_01B8_00AD_82E3
 * @implements 2B6C:01B8:00AD:82E3 ()
 *
 * Called From: 2B6C:01B3:00CE:7027
 */
void f__2B6C_01B8_00AD_82E3()
{
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00,  0x7074));
	emu_subw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00,  0x707A));
	emu_negw(&emu_bx.x, emu_bx.x);
	emu_addw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (!emu_flags.sf) { f__2B6C_01CA_009B_5987(); return; }
	emu_movw(&emu_bx.x, 0x0);
	emu_movw(&emu_cx.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_addw(&emu_cx.x, emu_get_memory16(emu_ds, 0x00,  0x7078));
	emu_cmpw(&emu_cx.x, 0x13F);
	if (emu_flags.cf) { f__2B6C_01DA_008B_06FE(); return; }
	emu_movw(&emu_cx.x, 0x13F);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_addw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x707A));
	emu_cmpw(&emu_dx.x, 0xC7);
	if (emu_flags.cf) { f__2B6C_01EA_007B_EAE2(); return; }
	emu_movw(&emu_dx.x, 0xC7);
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x705E), 0x0);
	if (!emu_flags.zf) { emu_ip = 0x01EA; emu_last_cs = 0x2B6C; emu_last_ip = 0x01EF; emu_last_length = 0x00AD; emu_last_crc = 0x82E3; emu_call(); return; } // Jump does not resolve
	emu_incw(&emu_get_memory16(emu_ds, 0x00,  0x705E));
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x7080), 0x0);
	if (!emu_flags.zf) { emu_ip = 0x020B; emu_last_cs = 0x2B6C; emu_last_ip = 0x01FA; emu_last_length = 0x00AD; emu_last_crc = 0x82E3; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x7082), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x7084), emu_bx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x7086), emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x7088), emu_dx.x);
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x7082));
	if (emu_flags.cf) { emu_ip = 0x0214; emu_last_cs = 0x2B6C; emu_last_ip = 0x020F; emu_last_length = 0x00AD; emu_last_crc = 0x82E3; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x7082), emu_ax.x);
	emu_cmpw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00,  0x7084));
	if (emu_flags.cf) { emu_ip = 0x021E; emu_last_cs = 0x2B6C; emu_last_ip = 0x0218; emu_last_length = 0x00AD; emu_last_crc = 0x82E3; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x7084), emu_bx.x);
	emu_cmpw(&emu_cx.x, emu_get_memory16(emu_ds, 0x00,  0x7086));
	if (!(emu_flags.cf || emu_flags.zf)) { emu_ip = 0x0228; emu_last_cs = 0x2B6C; emu_last_ip = 0x0222; emu_last_length = 0x00AD; emu_last_crc = 0x82E3; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x7086), emu_cx.x);
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x7088));
	if (!(emu_flags.cf || emu_flags.zf)) { emu_ip = 0x0232; emu_last_cs = 0x2B6C; emu_last_ip = 0x022C; emu_last_length = 0x00AD; emu_last_crc = 0x82E3; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x7088), emu_dx.x);
	emu_testw(&emu_get_memory16(emu_ds, 0x00,  0x7080), 0x4000);
	if (!emu_flags.zf) { emu_ip = 0x0276; emu_last_cs = 0x2B6C; emu_last_ip = 0x0238; emu_last_length = 0x00AD; emu_last_crc = 0x82E3; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x7060));
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00,  0x7062));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x7082));
	if (emu_flags.cf) { emu_ip = 0x0276; emu_last_cs = 0x2B6C; emu_last_ip = 0x0245; emu_last_length = 0x00AD; emu_last_crc = 0x82E3; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x7086));
	if (!(emu_flags.cf || emu_flags.zf)) { emu_ip = 0x0276; emu_last_cs = 0x2B6C; emu_last_ip = 0x024B; emu_last_length = 0x00AD; emu_last_crc = 0x82E3; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00,  0x7084));
	if (emu_flags.cf) { emu_ip = 0x0276; emu_last_cs = 0x2B6C; emu_last_ip = 0x0251; emu_last_length = 0x00AD; emu_last_crc = 0x82E3; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00,  0x7088));
	if (!(emu_flags.cf || emu_flags.zf)) { emu_ip = 0x0276; emu_last_cs = 0x2B6C; emu_last_ip = 0x0257; emu_last_length = 0x00AD; emu_last_crc = 0x82E3; emu_call(); return; } // Jump does not resolve
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x7094));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x7092));

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_ds, 0x00,  0x66B4);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_ds, 0x00,  0x66B6);
	emu_push(0x0265);
	switch ((emu_cs << 16) + emu_ip) {
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x2B6C; emu_last_ip = 0x0261; emu_last_length = 0x00AD; emu_last_crc = 0x82E3;
			emu_call();
			return;
	}
	f__2B6C_0265_0007_74D2();
}

/**
 * Decompiled function f__2B6C_01CA_009B_5987()
 *
 * @name f__2B6C_01CA_009B_5987
 * @implements 2B6C:01CA:009B:5987 ()
 *
 * Called From: 2B6C:01C5:00AD:82E3
 * Called From: 2B6C:01C5:00CE:7027
 */
void f__2B6C_01CA_009B_5987()
{
	emu_movw(&emu_cx.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_addw(&emu_cx.x, emu_get_memory16(emu_ds, 0x00,  0x7078));
	emu_cmpw(&emu_cx.x, 0x13F);
	if (emu_flags.cf) { f__2B6C_01DA_008B_06FE(); return; }
	emu_movw(&emu_cx.x, 0x13F);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_addw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x707A));
	emu_cmpw(&emu_dx.x, 0xC7);
	if (emu_flags.cf) { f__2B6C_01EA_007B_EAE2(); return; }
	emu_movw(&emu_dx.x, 0xC7);
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x705E), 0x0);
	if (!emu_flags.zf) { emu_ip = 0x01EA; emu_last_cs = 0x2B6C; emu_last_ip = 0x01EF; emu_last_length = 0x009B; emu_last_crc = 0x5987; emu_call(); return; } // Jump does not resolve
	emu_incw(&emu_get_memory16(emu_ds, 0x00,  0x705E));
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x7080), 0x0);
	if (!emu_flags.zf) { f__2B6C_020B_005A_0A83(); return; }
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x7082), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x7084), emu_bx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x7086), emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x7088), emu_dx.x);
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x7082));
	if (emu_flags.cf) { emu_ip = 0x0214; emu_last_cs = 0x2B6C; emu_last_ip = 0x020F; emu_last_length = 0x009B; emu_last_crc = 0x5987; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x7082), emu_ax.x);
	emu_cmpw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00,  0x7084));
	if (emu_flags.cf) { emu_ip = 0x021E; emu_last_cs = 0x2B6C; emu_last_ip = 0x0218; emu_last_length = 0x009B; emu_last_crc = 0x5987; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x7084), emu_bx.x);
	emu_cmpw(&emu_cx.x, emu_get_memory16(emu_ds, 0x00,  0x7086));
	if (!(emu_flags.cf || emu_flags.zf)) { emu_ip = 0x0228; emu_last_cs = 0x2B6C; emu_last_ip = 0x0222; emu_last_length = 0x009B; emu_last_crc = 0x5987; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x7086), emu_cx.x);
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x7088));
	if (!(emu_flags.cf || emu_flags.zf)) { emu_ip = 0x0232; emu_last_cs = 0x2B6C; emu_last_ip = 0x022C; emu_last_length = 0x009B; emu_last_crc = 0x5987; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x7088), emu_dx.x);
	emu_testw(&emu_get_memory16(emu_ds, 0x00,  0x7080), 0x4000);
	if (!emu_flags.zf) { emu_ip = 0x0276; emu_last_cs = 0x2B6C; emu_last_ip = 0x0238; emu_last_length = 0x009B; emu_last_crc = 0x5987; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x7060));
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00,  0x7062));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x7082));
	if (emu_flags.cf) { f__2B6C_0276_001C_B4B8(); return; }
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x7086));
	if (!(emu_flags.cf || emu_flags.zf)) { emu_ip = 0x0276; emu_last_cs = 0x2B6C; emu_last_ip = 0x024B; emu_last_length = 0x009B; emu_last_crc = 0x5987; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00,  0x7084));
	if (emu_flags.cf) { f__2B6C_0276_001C_B4B8(); return; }
	emu_cmpw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00,  0x7088));
	if (!(emu_flags.cf || emu_flags.zf)) { emu_ip = 0x0276; emu_last_cs = 0x2B6C; emu_last_ip = 0x0257; emu_last_length = 0x009B; emu_last_crc = 0x5987; emu_call(); return; } // Jump does not resolve
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x7094));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x7092));

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_ds, 0x00,  0x66B4);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_ds, 0x00,  0x66B6);
	emu_push(0x0265);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A60FD7: f__22A6_0FD7_0043_03A9(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x2B6C; emu_last_ip = 0x0261; emu_last_length = 0x009B; emu_last_crc = 0x5987;
			emu_call();
			return;
	}
	f__2B6C_0265_0007_74D2();
}

/**
 * Decompiled function f__2B6C_01DA_008B_06FE()
 *
 * @name f__2B6C_01DA_008B_06FE
 * @implements 2B6C:01DA:008B:06FE ()
 *
 * Called From: 2B6C:01D5:009B:5987
 * Called From: 2B6C:01D5:00AD:82E3
 * Called From: 2B6C:01D5:00CE:7027
 */
void f__2B6C_01DA_008B_06FE()
{
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_addw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x707A));
	emu_cmpw(&emu_dx.x, 0xC7);
	if (emu_flags.cf) { f__2B6C_01EA_007B_EAE2(); return; }
	emu_movw(&emu_dx.x, 0xC7);
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x705E), 0x0);
	if (!emu_flags.zf) { emu_ip = 0x01EA; emu_last_cs = 0x2B6C; emu_last_ip = 0x01EF; emu_last_length = 0x008B; emu_last_crc = 0x06FE; emu_call(); return; } // Jump does not resolve
	emu_incw(&emu_get_memory16(emu_ds, 0x00,  0x705E));
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x7080), 0x0);
	if (!emu_flags.zf) { f__2B6C_020B_005A_0A83(); return; }
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x7082), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x7084), emu_bx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x7086), emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x7088), emu_dx.x);
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x7082));
	if (emu_flags.cf) { emu_ip = 0x0214; emu_last_cs = 0x2B6C; emu_last_ip = 0x020F; emu_last_length = 0x008B; emu_last_crc = 0x06FE; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x7082), emu_ax.x);
	emu_cmpw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00,  0x7084));
	if (emu_flags.cf) { emu_ip = 0x021E; emu_last_cs = 0x2B6C; emu_last_ip = 0x0218; emu_last_length = 0x008B; emu_last_crc = 0x06FE; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x7084), emu_bx.x);
	emu_cmpw(&emu_cx.x, emu_get_memory16(emu_ds, 0x00,  0x7086));
	if (!(emu_flags.cf || emu_flags.zf)) { emu_ip = 0x0228; emu_last_cs = 0x2B6C; emu_last_ip = 0x0222; emu_last_length = 0x008B; emu_last_crc = 0x06FE; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x7086), emu_cx.x);
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x7088));
	if (!(emu_flags.cf || emu_flags.zf)) { emu_ip = 0x0232; emu_last_cs = 0x2B6C; emu_last_ip = 0x022C; emu_last_length = 0x008B; emu_last_crc = 0x06FE; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x7088), emu_dx.x);
	emu_testw(&emu_get_memory16(emu_ds, 0x00,  0x7080), 0x4000);
	if (!emu_flags.zf) { emu_ip = 0x0276; emu_last_cs = 0x2B6C; emu_last_ip = 0x0238; emu_last_length = 0x008B; emu_last_crc = 0x06FE; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x7060));
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00,  0x7062));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x7082));
	if (emu_flags.cf) { f__2B6C_0276_001C_B4B8(); return; }
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x7086));
	if (!(emu_flags.cf || emu_flags.zf)) { f__2B6C_0276_001C_B4B8(); return; }
	emu_cmpw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00,  0x7084));
	if (emu_flags.cf) { f__2B6C_0276_001C_B4B8(); return; }
	emu_cmpw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00,  0x7088));
	if (!(emu_flags.cf || emu_flags.zf)) { emu_ip = 0x0276; emu_last_cs = 0x2B6C; emu_last_ip = 0x0257; emu_last_length = 0x008B; emu_last_crc = 0x06FE; emu_call(); return; } // Jump does not resolve
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x7094));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x7092));

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_ds, 0x00,  0x66B4);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_ds, 0x00,  0x66B6);
	emu_push(0x0265);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A60FD7: f__22A6_0FD7_0043_03A9(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x2B6C; emu_last_ip = 0x0261; emu_last_length = 0x008B; emu_last_crc = 0x06FE;
			emu_call();
			return;
	}
	f__2B6C_0265_0007_74D2();
}

/**
 * Decompiled function f__2B6C_01EA_007B_EAE2()
 *
 * @name f__2B6C_01EA_007B_EAE2
 * @implements 2B6C:01EA:007B:EAE2 ()
 *
 * Called From: 2B6C:01E5:008B:06FE
 * Called From: 2B6C:01E5:009B:5987
 * Called From: 2B6C:01E5:00AD:82E3
 * Called From: 2B6C:01E5:00CE:7027
 */
void f__2B6C_01EA_007B_EAE2()
{
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x705E), 0x0);
	if (!emu_flags.zf) { emu_ip = 0x01EA; emu_last_cs = 0x2B6C; emu_last_ip = 0x01EF; emu_last_length = 0x007B; emu_last_crc = 0xEAE2; emu_call(); return; } // Jump does not resolve
	emu_incw(&emu_get_memory16(emu_ds, 0x00,  0x705E));
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x7080), 0x0);
	if (!emu_flags.zf) { emu_ip = 0x020B; emu_last_cs = 0x2B6C; emu_last_ip = 0x01FA; emu_last_length = 0x007B; emu_last_crc = 0xEAE2; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x7082), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x7084), emu_bx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x7086), emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x7088), emu_dx.x);
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x7082));
	if (emu_flags.cf) { emu_ip = 0x0214; emu_last_cs = 0x2B6C; emu_last_ip = 0x020F; emu_last_length = 0x007B; emu_last_crc = 0xEAE2; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x7082), emu_ax.x);
	emu_cmpw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00,  0x7084));
	if (emu_flags.cf) { emu_ip = 0x021E; emu_last_cs = 0x2B6C; emu_last_ip = 0x0218; emu_last_length = 0x007B; emu_last_crc = 0xEAE2; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x7084), emu_bx.x);
	emu_cmpw(&emu_cx.x, emu_get_memory16(emu_ds, 0x00,  0x7086));
	if (!(emu_flags.cf || emu_flags.zf)) { emu_ip = 0x0228; emu_last_cs = 0x2B6C; emu_last_ip = 0x0222; emu_last_length = 0x007B; emu_last_crc = 0xEAE2; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x7086), emu_cx.x);
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x7088));
	if (!(emu_flags.cf || emu_flags.zf)) { emu_ip = 0x0232; emu_last_cs = 0x2B6C; emu_last_ip = 0x022C; emu_last_length = 0x007B; emu_last_crc = 0xEAE2; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x7088), emu_dx.x);
	emu_testw(&emu_get_memory16(emu_ds, 0x00,  0x7080), 0x4000);
	if (!emu_flags.zf) { emu_ip = 0x0276; emu_last_cs = 0x2B6C; emu_last_ip = 0x0238; emu_last_length = 0x007B; emu_last_crc = 0xEAE2; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x7060));
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00,  0x7062));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x7082));
	if (emu_flags.cf) { f__2B6C_0276_001C_B4B8(); return; }
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x7086));
	if (!(emu_flags.cf || emu_flags.zf)) { f__2B6C_0276_001C_B4B8(); return; }
	emu_cmpw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00,  0x7084));
	if (emu_flags.cf) { f__2B6C_0276_001C_B4B8(); return; }
	emu_cmpw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00,  0x7088));
	if (!(emu_flags.cf || emu_flags.zf)) { f__2B6C_0276_001C_B4B8(); return; }
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x7094));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x7092));

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_ds, 0x00,  0x66B4);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_ds, 0x00,  0x66B6);
	emu_push(0x0265);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A60FD7: f__22A6_0FD7_0043_03A9(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x2B6C; emu_last_ip = 0x0261; emu_last_length = 0x007B; emu_last_crc = 0xEAE2;
			emu_call();
			return;
	}
	f__2B6C_0265_0007_74D2();
}

/**
 * Decompiled function f__2B6C_020B_005A_0A83()
 *
 * @name f__2B6C_020B_005A_0A83
 * @implements 2B6C:020B:005A:0A83 ()
 *
 * Called From: 2B6C:01FA:008B:06FE
 * Called From: 2B6C:01FA:009B:5987
 */
void f__2B6C_020B_005A_0A83()
{
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x7082));
	if (emu_flags.cf) { f__2B6C_0214_0051_4383(); return; }
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x7082), emu_ax.x);
	emu_cmpw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00,  0x7084));
	if (emu_flags.cf) { emu_ip = 0x021E; emu_last_cs = 0x2B6C; emu_last_ip = 0x0218; emu_last_length = 0x005A; emu_last_crc = 0x0A83; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x7084), emu_bx.x);
	emu_cmpw(&emu_cx.x, emu_get_memory16(emu_ds, 0x00,  0x7086));
	if (!(emu_flags.cf || emu_flags.zf)) { f__2B6C_0228_003D_0095(); return; }
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x7086), emu_cx.x);
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x7088));
	if (!(emu_flags.cf || emu_flags.zf)) { emu_ip = 0x0232; emu_last_cs = 0x2B6C; emu_last_ip = 0x022C; emu_last_length = 0x005A; emu_last_crc = 0x0A83; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x7088), emu_dx.x);
	emu_testw(&emu_get_memory16(emu_ds, 0x00,  0x7080), 0x4000);
	if (!emu_flags.zf) { f__2B6C_0276_001C_B4B8(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x7060));
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00,  0x7062));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x7082));
	if (emu_flags.cf) { emu_ip = 0x0276; emu_last_cs = 0x2B6C; emu_last_ip = 0x0245; emu_last_length = 0x005A; emu_last_crc = 0x0A83; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x7086));
	if (!(emu_flags.cf || emu_flags.zf)) { f__2B6C_0276_001C_B4B8(); return; }
	emu_cmpw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00,  0x7084));
	if (emu_flags.cf) { emu_ip = 0x0276; emu_last_cs = 0x2B6C; emu_last_ip = 0x0251; emu_last_length = 0x005A; emu_last_crc = 0x0A83; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00,  0x7088));
	if (!(emu_flags.cf || emu_flags.zf)) { emu_ip = 0x0276; emu_last_cs = 0x2B6C; emu_last_ip = 0x0257; emu_last_length = 0x005A; emu_last_crc = 0x0A83; emu_call(); return; } // Jump does not resolve
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x7094));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x7092));

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_ds, 0x00,  0x66B4);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_ds, 0x00,  0x66B6);
	emu_push(0x0265);
	switch ((emu_cs << 16) + emu_ip) {
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x2B6C; emu_last_ip = 0x0261; emu_last_length = 0x005A; emu_last_crc = 0x0A83;
			emu_call();
			return;
	}
	f__2B6C_0265_0007_74D2();
}

/**
 * Decompiled function f__2B6C_0214_0051_4383()
 *
 * @name f__2B6C_0214_0051_4383
 * @implements 2B6C:0214:0051:4383 ()
 *
 * Called From: 2B6C:020F:005A:0A83
 */
void f__2B6C_0214_0051_4383()
{
	emu_cmpw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00,  0x7084));
	if (emu_flags.cf) { f__2B6C_021E_0047_0BBE(); return; }
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x7084), emu_bx.x);
	emu_cmpw(&emu_cx.x, emu_get_memory16(emu_ds, 0x00,  0x7086));
	if (!(emu_flags.cf || emu_flags.zf)) { emu_ip = 0x0228; emu_last_cs = 0x2B6C; emu_last_ip = 0x0222; emu_last_length = 0x0051; emu_last_crc = 0x4383; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x7086), emu_cx.x);
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x7088));
	if (!(emu_flags.cf || emu_flags.zf)) { emu_ip = 0x0232; emu_last_cs = 0x2B6C; emu_last_ip = 0x022C; emu_last_length = 0x0051; emu_last_crc = 0x4383; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x7088), emu_dx.x);
	emu_testw(&emu_get_memory16(emu_ds, 0x00,  0x7080), 0x4000);
	if (!emu_flags.zf) { emu_ip = 0x0276; emu_last_cs = 0x2B6C; emu_last_ip = 0x0238; emu_last_length = 0x0051; emu_last_crc = 0x4383; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x7060));
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00,  0x7062));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x7082));
	if (emu_flags.cf) { emu_ip = 0x0276; emu_last_cs = 0x2B6C; emu_last_ip = 0x0245; emu_last_length = 0x0051; emu_last_crc = 0x4383; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x7086));
	if (!(emu_flags.cf || emu_flags.zf)) { emu_ip = 0x0276; emu_last_cs = 0x2B6C; emu_last_ip = 0x024B; emu_last_length = 0x0051; emu_last_crc = 0x4383; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00,  0x7084));
	if (emu_flags.cf) { emu_ip = 0x0276; emu_last_cs = 0x2B6C; emu_last_ip = 0x0251; emu_last_length = 0x0051; emu_last_crc = 0x4383; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00,  0x7088));
	if (!(emu_flags.cf || emu_flags.zf)) { emu_ip = 0x0276; emu_last_cs = 0x2B6C; emu_last_ip = 0x0257; emu_last_length = 0x0051; emu_last_crc = 0x4383; emu_call(); return; } // Jump does not resolve
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x7094));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x7092));

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_ds, 0x00,  0x66B4);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_ds, 0x00,  0x66B6);
	emu_push(0x0265);
	switch ((emu_cs << 16) + emu_ip) {
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x2B6C; emu_last_ip = 0x0261; emu_last_length = 0x0051; emu_last_crc = 0x4383;
			emu_call();
			return;
	}
	f__2B6C_0265_0007_74D2();
}

/**
 * Decompiled function f__2B6C_021E_0047_0BBE()
 *
 * @name f__2B6C_021E_0047_0BBE
 * @implements 2B6C:021E:0047:0BBE ()
 *
 * Called From: 2B6C:0218:0051:4383
 */
void f__2B6C_021E_0047_0BBE()
{
	emu_cmpw(&emu_cx.x, emu_get_memory16(emu_ds, 0x00,  0x7086));
	if (!(emu_flags.cf || emu_flags.zf)) { emu_ip = 0x0228; emu_last_cs = 0x2B6C; emu_last_ip = 0x0222; emu_last_length = 0x0047; emu_last_crc = 0x0BBE; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x7086), emu_cx.x);
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x7088));
	if (!(emu_flags.cf || emu_flags.zf)) { emu_ip = 0x0232; emu_last_cs = 0x2B6C; emu_last_ip = 0x022C; emu_last_length = 0x0047; emu_last_crc = 0x0BBE; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x7088), emu_dx.x);
	emu_testw(&emu_get_memory16(emu_ds, 0x00,  0x7080), 0x4000);
	if (!emu_flags.zf) { f__2B6C_0276_001C_B4B8(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x7060));
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00,  0x7062));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x7082));
	if (emu_flags.cf) { emu_ip = 0x0276; emu_last_cs = 0x2B6C; emu_last_ip = 0x0245; emu_last_length = 0x0047; emu_last_crc = 0x0BBE; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x7086));
	if (!(emu_flags.cf || emu_flags.zf)) { f__2B6C_0276_001C_B4B8(); return; }
	emu_cmpw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00,  0x7084));
	if (emu_flags.cf) { emu_ip = 0x0276; emu_last_cs = 0x2B6C; emu_last_ip = 0x0251; emu_last_length = 0x0047; emu_last_crc = 0x0BBE; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00,  0x7088));
	if (!(emu_flags.cf || emu_flags.zf)) { emu_ip = 0x0276; emu_last_cs = 0x2B6C; emu_last_ip = 0x0257; emu_last_length = 0x0047; emu_last_crc = 0x0BBE; emu_call(); return; } // Jump does not resolve
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x7094));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x7092));

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_ds, 0x00,  0x66B4);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_ds, 0x00,  0x66B6);
	emu_push(0x0265);
	switch ((emu_cs << 16) + emu_ip) {
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x2B6C; emu_last_ip = 0x0261; emu_last_length = 0x0047; emu_last_crc = 0x0BBE;
			emu_call();
			return;
	}
	f__2B6C_0265_0007_74D2();
}

/**
 * Decompiled function f__2B6C_0228_003D_0095()
 *
 * @name f__2B6C_0228_003D_0095
 * @implements 2B6C:0228:003D:0095 ()
 *
 * Called From: 2B6C:0222:005A:0A83
 */
void f__2B6C_0228_003D_0095()
{
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x7088));
	if (!(emu_flags.cf || emu_flags.zf)) { emu_ip = 0x0232; emu_last_cs = 0x2B6C; emu_last_ip = 0x022C; emu_last_length = 0x003D; emu_last_crc = 0x0095; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x7088), emu_dx.x);
	emu_testw(&emu_get_memory16(emu_ds, 0x00,  0x7080), 0x4000);
	if (!emu_flags.zf) { f__2B6C_0276_001C_B4B8(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x7060));
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00,  0x7062));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x7082));
	if (emu_flags.cf) { emu_ip = 0x0276; emu_last_cs = 0x2B6C; emu_last_ip = 0x0245; emu_last_length = 0x003D; emu_last_crc = 0x0095; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x7086));
	if (!(emu_flags.cf || emu_flags.zf)) { f__2B6C_0276_001C_B4B8(); return; }
	emu_cmpw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00,  0x7084));
	if (emu_flags.cf) { emu_ip = 0x0276; emu_last_cs = 0x2B6C; emu_last_ip = 0x0251; emu_last_length = 0x003D; emu_last_crc = 0x0095; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00,  0x7088));
	if (!(emu_flags.cf || emu_flags.zf)) { emu_ip = 0x0276; emu_last_cs = 0x2B6C; emu_last_ip = 0x0257; emu_last_length = 0x003D; emu_last_crc = 0x0095; emu_call(); return; } // Jump does not resolve
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x7094));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x7092));

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_ds, 0x00,  0x66B4);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_ds, 0x00,  0x66B6);
	emu_push(0x0265);
	switch ((emu_cs << 16) + emu_ip) {
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x2B6C; emu_last_ip = 0x0261; emu_last_length = 0x003D; emu_last_crc = 0x0095;
			emu_call();
			return;
	}
	f__2B6C_0265_0007_74D2();
}

/**
 * Decompiled function f__2B6C_0265_0007_74D2()
 *
 * @name f__2B6C_0265_0007_74D2
 * @implements 2B6C:0265:0007:74D2 ()
 *
 * Called From: 2B6C:0265:007B:EAE2
 * Called From: 2B6C:0265:008B:06FE
 * Called From: 2B6C:0265:009B:5987
 */
void f__2B6C_0265_0007_74D2()
{
	emu_addws(&emu_sp, 0x4);
	emu_push(emu_cs);
	emu_push(0x026C); f__2B6C_000E_0045_8F26();
	f__2B6C_026C_0004_0D5C();
}

/**
 * Decompiled function f__2B6C_026C_0004_0D5C()
 *
 * @name f__2B6C_026C_0004_0D5C
 * @implements 2B6C:026C:0004:0D5C ()
 *
 * Called From: 2B6C:026C:0007:74D2
 */
void f__2B6C_026C_0004_0D5C()
{

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_ds, 0x00,  0x66A4);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_ds, 0x00,  0x66A6);
	emu_push(0x0270);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A60FAE: f__22A6_0FAE_0027_9A7A(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x2B6C; emu_last_ip = 0x026C; emu_last_length = 0x0004; emu_last_crc = 0x0D5C;
			emu_call();
			return;
	}
	f__2B6C_0270_0022_B610();
}

/**
 * Decompiled function f__2B6C_0270_0022_B610()
 *
 * @name f__2B6C_0270_0022_B610
 * @implements 2B6C:0270:0022:B610 ()
 *
 * Called From: 2B6C:0270:0004:0D5C
 */
void f__2B6C_0270_0022_B610()
{
	emu_orw(&emu_get_memory16(emu_ds, 0x00,  0x7080), 0x4000);
	emu_orw(&emu_get_memory16(emu_ds, 0x00,  0x7080), 0x8000);
	emu_addb(&emu_get_memory8(emu_ds, 0x00,  0x7080), 0x1);
	emu_adcb(&emu_get_memory8(emu_ds, 0x00,  0x7080), 0x0);
	emu_decw(&emu_get_memory16(emu_ds, 0x00,  0x705E));
	emu_pop(&emu_di);
	emu_pop(&emu_es);
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
 * Decompiled function f__2B6C_0276_001C_B4B8()
 *
 * @name f__2B6C_0276_001C_B4B8
 * @implements 2B6C:0276:001C:B4B8 ()
 *
 * Called From: 2B6C:0238:003D:0095
 * Called From: 2B6C:0238:0047:0BBE
 * Called From: 2B6C:0238:005A:0A83
 * Called From: 2B6C:0245:007B:EAE2
 * Called From: 2B6C:0245:008B:06FE
 * Called From: 2B6C:0245:009B:5987
 * Called From: 2B6C:024B:003D:0095
 * Called From: 2B6C:024B:0047:0BBE
 * Called From: 2B6C:024B:005A:0A83
 * Called From: 2B6C:024B:007B:EAE2
 * Called From: 2B6C:024B:008B:06FE
 * Called From: 2B6C:0251:007B:EAE2
 * Called From: 2B6C:0251:008B:06FE
 * Called From: 2B6C:0251:009B:5987
 * Called From: 2B6C:0257:007B:EAE2
 */
void f__2B6C_0276_001C_B4B8()
{
	emu_orw(&emu_get_memory16(emu_ds, 0x00,  0x7080), 0x8000);
	emu_addb(&emu_get_memory8(emu_ds, 0x00,  0x7080), 0x1);
	emu_adcb(&emu_get_memory8(emu_ds, 0x00,  0x7080), 0x0);
	emu_decw(&emu_get_memory16(emu_ds, 0x00,  0x705E));
	emu_pop(&emu_di);
	emu_pop(&emu_es);
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
 * Decompiled function f__2B6C_0292_0028_CAA5()
 *
 * @name f__2B6C_0292_0028_CAA5
 * @implements 2B6C:0292:0028:CAA5 ()
 *
 * Called From: 0AEC:0C69:0008:FE96
 * Called From: 0AEC:0E2A:0008:FE96
 * Called From: 0AEC:0FC4:0008:FE96
 * Called From: 10E4:066A:000F:7C2C
 * Called From: 2642:006C:0008:3016
 * Called From: 2C17:01B8:001F:26E3
 * Called From: B488:01FD:000B:E053
 * Called From: B4A2:08EF:000F:3C2C
 * Called From: B4A2:092B:000F:7C2C
 * Called From: B4DA:03F4:0008:F916
 * Called From: B4DA:054C:0008:F916
 * Called From: B4DA:06B8:0008:F916
 * Called From: B4DA:0A77:0008:F916
 * Called From: B4DA:0D21:0008:FE96
 * Called From: B4DA:0D93:0008:FE96
 * Called From: B4DA:0E98:0008:FE96
 * Called From: B4DA:17B8:0008:FE96
 * Called From: B4DA:184E:0008:FE96
 * Called From: B4F2:10E8:0008:FE96
 * Called From: B520:0830:000F:BC2C
 */
void f__2B6C_0292_0028_CAA5()
{
	emu_push(emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x705E), 0x0);
	if (!emu_flags.zf) { emu_ip = 0x0293; emu_last_cs = 0x2B6C; emu_last_ip = 0x0298; emu_last_length = 0x0028; emu_last_crc = 0xCAA5; emu_call(); return; } // Jump does not resolve
	emu_incw(&emu_get_memory16(emu_ds, 0x00,  0x705E));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x7080));
	emu_cmpb(&emu_ax.l, 0x0);
	if (emu_flags.zf) { f__2B6C_02C8_0009_C697(); return; }
	emu_decb(&emu_ax.l);
	if (!emu_flags.zf) { f__2B6C_02C8_0009_C697(); return; }
	emu_testw(&emu_ax.x, 0x4000);
	if (emu_flags.zf) { f__2B6C_02C5_000C_469C(); return; }
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x7094));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x7092));

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_ds, 0x00,  0x66B4);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_ds, 0x00,  0x66B6);
	emu_push(0x02BA);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A60FD7: f__22A6_0FD7_0043_03A9(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x2B6C; emu_last_ip = 0x02B6; emu_last_length = 0x0028; emu_last_crc = 0xCAA5;
			emu_call();
			return;
	}
	f__2B6C_02BA_0007_74EE();
}

/**
 * Decompiled function f__2B6C_02BA_0007_74EE()
 *
 * @name f__2B6C_02BA_0007_74EE
 * @implements 2B6C:02BA:0007:74EE ()
 *
 * Called From: 2B6C:02BA:0028:CAA5
 */
void f__2B6C_02BA_0007_74EE()
{
	emu_addws(&emu_sp, 0x4);
	emu_push(emu_cs);
	emu_push(0x02C1); f__2B6C_006E_002E_CEAB();
	f__2B6C_02C1_0004_0D5C();
}

/**
 * Decompiled function f__2B6C_02C1_0004_0D5C()
 *
 * @name f__2B6C_02C1_0004_0D5C
 * @implements 2B6C:02C1:0004:0D5C ()
 *
 * Called From: 2B6C:02C1:0007:74EE
 */
void f__2B6C_02C1_0004_0D5C()
{

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_ds, 0x00,  0x66A4);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_ds, 0x00,  0x66A6);
	emu_push(0x02C5);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A60FAE: f__22A6_0FAE_0027_9A7A(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x2B6C; emu_last_ip = 0x02C1; emu_last_length = 0x0004; emu_last_crc = 0x0D5C;
			emu_call();
			return;
	}
	f__2B6C_02C5_000C_469C();
}

/**
 * Decompiled function f__2B6C_02C5_000C_469C()
 *
 * @name f__2B6C_02C5_000C_469C
 * @implements 2B6C:02C5:000C:469C ()
 *
 * Called From: 2B6C:02AC:0028:CAA5
 * Called From: 2B6C:02C5:0004:0D5C
 */
void f__2B6C_02C5_000C_469C()
{
	emu_movw(&emu_ax.x, 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x7080), emu_ax.x);
	emu_decw(&emu_get_memory16(emu_ds, 0x00,  0x705E));
	emu_pop(&emu_ax.x);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__2B6C_02C8_0009_C697()
 *
 * @name f__2B6C_02C8_0009_C697
 * @implements 2B6C:02C8:0009:C697 ()
 *
 * Called From: 2B6C:02A3:0028:CAA5
 * Called From: 2B6C:02A7:0028:CAA5
 */
void f__2B6C_02C8_0009_C697()
{
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x7080), emu_ax.x);
	emu_decw(&emu_get_memory16(emu_ds, 0x00,  0x705E));
	emu_pop(&emu_ax.x);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

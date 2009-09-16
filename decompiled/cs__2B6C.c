/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__2B6C_000E_0045_C1FE()
 *
 * @name f__2B6C_000E_0045_C1FE
 * @implements 2B6C:000E:0045:C1FE ()
 *
 * Called From: 29A3:016C:0008:63C3
 * Called From: 2B4C:0045:0008:63C3
 * Called From: 2B6C:015B:0007:9309
 * Called From: 2B6C:0269:0007:128D
 * Called From: 2B99:006C:0008:63C3
 */
void f__2B6C_000E_0045_C1FE()
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
	if (!emu_flags.zf) { emu_ip = 0x0066; emu_last_cs = 0x2B6C; emu_last_ip = 0x001F; emu_last_length = 0x0045; emu_last_crc = 0xC1FE; emu_call(); return; } // Jump does not resolve
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x706A), 0x0);
	if (!emu_flags.zf) { f__2B6C_005C_0012_99BA(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x709A));
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00,  0x709C));
	emu_movw(&emu_cx.x, emu_get_memory16(emu_ds, 0x00,  0x709E));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x70A0));
	emu_cmpws(&emu_cx.x, 0x0);
	if (emu_flags.zf) { emu_ip = 0x005C; emu_last_cs = 0x2B6C; emu_last_ip = 0x003A; emu_last_length = 0x0045; emu_last_crc = 0xC1FE; emu_call(); return; } // Jump does not resolve
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x708C), 0x0);
	if (emu_flags.zf) { emu_ip = 0x0056; emu_last_cs = 0x2B6C; emu_last_ip = 0x0041; emu_last_length = 0x0045; emu_last_crc = 0xC1FE; emu_call(); return; } // Jump does not resolve
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
		case 0x22A604F8: f__22A6_04F8_007A_6E25(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x2B6C; emu_last_ip = 0x004F; emu_last_length = 0x0045; emu_last_crc = 0xC1FE;
			emu_call();
			return;
	}
	f__2B6C_0053_001B_7422();
}

/**
 * Decompiled function f__2B6C_0053_001B_7422()
 *
 * @name f__2B6C_0053_001B_7422
 * @implements 2B6C:0053:001B:7422 ()
 *
 * Called From: 2B6C:0053:0045:C1FE
 */
void f__2B6C_0053_001B_7422()
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
 * Decompiled function f__2B6C_005C_0012_99BA()
 *
 * @name f__2B6C_005C_0012_99BA
 * @implements 2B6C:005C:0012:99BA ()
 *
 * Called From: 2B6C:0026:0045:C1FE
 */
void f__2B6C_005C_0012_99BA()
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
 * Decompiled function f__2B6C_006E_002E_4FBC()
 *
 * @name f__2B6C_006E_002E_4FBC
 * @implements 2B6C:006E:002E:4FBC ()
 *
 * Called From: 29A3:01AC:0008:63C5
 * Called From: 2B4C:01E8:0008:63C5
 * Called From: 2B6C:018B:0007:931D
 * Called From: 2B6C:02BE:0007:D28E
 * Called From: 2B99:0071:0005:F14D
 */
void f__2B6C_006E_002E_4FBC()
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
	if (!emu_flags.zf) { emu_ip = 0x0099; emu_last_cs = 0x2B6C; emu_last_ip = 0x0085; emu_last_length = 0x002E; emu_last_crc = 0x4FBC; emu_call(); return; } // Jump does not resolve
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x706A), 0x0);
	if (emu_flags.zf) { f__2B6C_0099_0003_1D04(); return; }
	emu_decw(&emu_get_memory16(emu_ds, 0x00,  0x706A));
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x706A), 0x0);
	if (emu_flags.zf) { f__2B6C_009C_006E_992E(); return; }
	f__2B6C_012C_000B_CA8C(); return;
}

/**
 * Decompiled function f__2B6C_0099_0003_1D04()
 *
 * @name f__2B6C_0099_0003_1D04
 * @implements 2B6C:0099:0003:1D04 ()
 *
 * Called From: 2B6C:008C:002E:4FBC
 */
void f__2B6C_0099_0003_1D04()
{
	f__2B6C_012C_000B_CA8C(); return;
}

/**
 * Decompiled function f__2B6C_009C_006E_992E()
 *
 * @name f__2B6C_009C_006E_992E
 * @implements 2B6C:009C:006E:992E ()
 *
 * Called From: 2B6C:0097:002E:4FBC
 */
void f__2B6C_009C_006E_992E()
{
	emu_movw(&emu_cx.x, emu_get_memory16(emu_ds, 0x00,  0x7076));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x7074));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x7060));
	emu_subw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x7078));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	if (!emu_flags.sf) { f__2B6C_00B3_0057_2EDD(); return; }
	emu_movw(&emu_ax.x, 0x0);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00,  0x7062));
	emu_subw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00,  0x707A));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_bx.x);
	if (!emu_flags.sf) { f__2B6C_00C5_0045_838C(); return; }
	emu_addw(&emu_dx.x, emu_bx.x);
	emu_movw(&emu_bx.x, 0x0);
	emu_shrw(&emu_ax.x, 0x1);
	emu_shrw(&emu_ax.x, 0x1);
	emu_shrw(&emu_ax.x, 0x1);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x709A), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x709C), emu_bx.x);
	emu_addw(&emu_ax.x, emu_cx.x);
	emu_subw(&emu_ax.x, 0x28);
	if (emu_flags.sf) { emu_ip = 0x00DB; emu_last_cs = 0x2B6C; emu_last_ip = 0x00D7; emu_last_length = 0x006E; emu_last_crc = 0x992E; emu_call(); return; } // Jump does not resolve
	emu_subw(&emu_cx.x, emu_ax.x);
	emu_addw(&emu_bx.x, emu_dx.x);
	emu_subw(&emu_bx.x, 0xC8);
	if (emu_flags.sf) { emu_ip = 0x00E5; emu_last_cs = 0x2B6C; emu_last_ip = 0x00E1; emu_last_length = 0x006E; emu_last_crc = 0x992E; emu_call(); return; } // Jump does not resolve
	emu_subw(&emu_dx.x, emu_bx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x709E), emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x70A0), emu_dx.x);
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x708C), 0x0);
	if (emu_flags.zf) { emu_ip = 0x010D; emu_last_cs = 0x2B6C; emu_last_ip = 0x00F2; emu_last_length = 0x006E; emu_last_crc = 0x992E; emu_call(); return; } // Jump does not resolve
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
			emu_last_cs = 0x2B6C; emu_last_ip = 0x0106; emu_last_length = 0x006E; emu_last_crc = 0x992E;
			emu_call();
			return;
	}
	f__2B6C_010A_001F_F77F();
}

/**
 * Decompiled function f__2B6C_00B3_0057_2EDD()
 *
 * @name f__2B6C_00B3_0057_2EDD
 * @implements 2B6C:00B3:0057:2EDD ()
 *
 * Called From: 2B6C:00AE:006E:992E
 */
void f__2B6C_00B3_0057_2EDD()
{
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00,  0x7062));
	emu_subw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00,  0x707A));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_bx.x);
	if (!emu_flags.sf) { f__2B6C_00C5_0045_838C(); return; }
	emu_addw(&emu_dx.x, emu_bx.x);
	emu_movw(&emu_bx.x, 0x0);
	emu_shrw(&emu_ax.x, 0x1);
	emu_shrw(&emu_ax.x, 0x1);
	emu_shrw(&emu_ax.x, 0x1);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x709A), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x709C), emu_bx.x);
	emu_addw(&emu_ax.x, emu_cx.x);
	emu_subw(&emu_ax.x, 0x28);
	if (emu_flags.sf) { emu_ip = 0x00DB; emu_last_cs = 0x2B6C; emu_last_ip = 0x00D7; emu_last_length = 0x0057; emu_last_crc = 0x2EDD; emu_call(); return; } // Jump does not resolve
	emu_subw(&emu_cx.x, emu_ax.x);
	emu_addw(&emu_bx.x, emu_dx.x);
	emu_subw(&emu_bx.x, 0xC8);
	if (emu_flags.sf) { emu_ip = 0x00E5; emu_last_cs = 0x2B6C; emu_last_ip = 0x00E1; emu_last_length = 0x0057; emu_last_crc = 0x2EDD; emu_call(); return; } // Jump does not resolve
	emu_subw(&emu_dx.x, emu_bx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x709E), emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x70A0), emu_dx.x);
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x708C), 0x0);
	if (emu_flags.zf) { emu_ip = 0x010D; emu_last_cs = 0x2B6C; emu_last_ip = 0x00F2; emu_last_length = 0x0057; emu_last_crc = 0x2EDD; emu_call(); return; } // Jump does not resolve
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
			emu_last_cs = 0x2B6C; emu_last_ip = 0x0106; emu_last_length = 0x0057; emu_last_crc = 0x2EDD;
			emu_call();
			return;
	}
	f__2B6C_010A_001F_F77F();
}

/**
 * Decompiled function f__2B6C_00C5_0045_838C()
 *
 * @name f__2B6C_00C5_0045_838C
 * @implements 2B6C:00C5:0045:838C ()
 *
 * Called From: 2B6C:00BE:0057:2EDD
 * Called From: 2B6C:00BE:006E:992E
 */
void f__2B6C_00C5_0045_838C()
{
	emu_shrw(&emu_ax.x, 0x1);
	emu_shrw(&emu_ax.x, 0x1);
	emu_shrw(&emu_ax.x, 0x1);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x709A), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x709C), emu_bx.x);
	emu_addw(&emu_ax.x, emu_cx.x);
	emu_subw(&emu_ax.x, 0x28);
	if (emu_flags.sf) { f__2B6C_00DB_002F_7133(); return; }
	emu_subw(&emu_cx.x, emu_ax.x);
	emu_addw(&emu_bx.x, emu_dx.x);
	emu_subw(&emu_bx.x, 0xC8);
	if (emu_flags.sf) { f__2B6C_00E5_0025_3C9F(); return; }
	emu_subw(&emu_dx.x, emu_bx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x709E), emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x70A0), emu_dx.x);
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x708C), 0x0);
	if (emu_flags.zf) { emu_ip = 0x010D; emu_last_cs = 0x2B6C; emu_last_ip = 0x00F2; emu_last_length = 0x0045; emu_last_crc = 0x838C; emu_call(); return; } // Jump does not resolve
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
		case 0x22A6101C: f__22A6_101C_004B_D9F3(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x2B6C; emu_last_ip = 0x0106; emu_last_length = 0x0045; emu_last_crc = 0x838C;
			emu_call();
			return;
	}
	f__2B6C_010A_001F_F77F();
}

/**
 * Decompiled function f__2B6C_00DB_002F_7133()
 *
 * @name f__2B6C_00DB_002F_7133
 * @implements 2B6C:00DB:002F:7133 ()
 *
 * Called From: 2B6C:00D7:0045:838C
 */
void f__2B6C_00DB_002F_7133()
{
	emu_addw(&emu_bx.x, emu_dx.x);
	emu_subw(&emu_bx.x, 0xC8);
	if (emu_flags.sf) { f__2B6C_00E5_0025_3C9F(); return; }
	emu_subw(&emu_dx.x, emu_bx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x709E), emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x70A0), emu_dx.x);
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x708C), 0x0);
	if (emu_flags.zf) { emu_ip = 0x010D; emu_last_cs = 0x2B6C; emu_last_ip = 0x00F2; emu_last_length = 0x002F; emu_last_crc = 0x7133; emu_call(); return; } // Jump does not resolve
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
		case 0x22A6101C: f__22A6_101C_004B_D9F3(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x2B6C; emu_last_ip = 0x0106; emu_last_length = 0x002F; emu_last_crc = 0x7133;
			emu_call();
			return;
	}
	f__2B6C_010A_001F_F77F();
}

/**
 * Decompiled function f__2B6C_00E5_0025_3C9F()
 *
 * @name f__2B6C_00E5_0025_3C9F
 * @implements 2B6C:00E5:0025:3C9F ()
 *
 * Called From: 2B6C:00E1:002F:7133
 * Called From: 2B6C:00E1:0045:838C
 */
void f__2B6C_00E5_0025_3C9F()
{
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x709E), emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x70A0), emu_dx.x);
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x708C), 0x0);
	if (emu_flags.zf) { emu_ip = 0x010D; emu_last_cs = 0x2B6C; emu_last_ip = 0x00F2; emu_last_length = 0x0025; emu_last_crc = 0x3C9F; emu_call(); return; } // Jump does not resolve
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
		case 0x22A6101C: f__22A6_101C_004B_D9F3(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x2B6C; emu_last_ip = 0x0106; emu_last_length = 0x0025; emu_last_crc = 0x3C9F;
			emu_call();
			return;
	}
	f__2B6C_010A_001F_F77F();
}

/**
 * Decompiled function f__2B6C_010A_001F_F77F()
 *
 * @name f__2B6C_010A_001F_F77F
 * @implements 2B6C:010A:001F:F77F ()
 *
 * Called From: 2B6C:010A:0025:3C9F
 * Called From: 2B6C:010A:002F:7133
 * Called From: 2B6C:010A:0045:838C
 */
void f__2B6C_010A_001F_F77F()
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
	emu_push(emu_cs); emu_push(0x0129); emu_cs = 0x2903; f__2903_0158_001A_2931();
	f__2B6C_0129_000E_E866();
}

/**
 * Decompiled function f__2B6C_0129_000E_E866()
 *
 * @name f__2B6C_0129_000E_E866
 * @implements 2B6C:0129:000E:E866 ()
 *
 * Called From: 2B6C:0129:001F:F77F
 */
void f__2B6C_0129_000E_E866()
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
 * Decompiled function f__2B6C_012C_000B_CA8C()
 *
 * @name f__2B6C_012C_000B_CA8C
 * @implements 2B6C:012C:000B:CA8C ()
 *
 * Called From: 2B6C:0099:002E:4FBC
 * Called From: 2B6C:0099:0003:1D04
 */
void f__2B6C_012C_000B_CA8C()
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
 * Decompiled function f__2B6C_0137_0020_C73F()
 *
 * @name f__2B6C_0137_0020_C73F
 * @implements 2B6C:0137:0020:C73F ()
 *
 * Called From: 0642:014A:0008:2A18
 * Called From: 0642:040F:0005:6168
 * Called From: 0642:042B:0005:6168
 * Called From: 0F78:0170:003E:BA89
 * Called From: 10E4:029F:0008:D3E0
 * Called From: 10E4:04BA:0006:0569
 * Called From: 10E4:2215:0006:0569
 * Called From: 1423:03BF:0005:6168
 * Called From: B495:0B6C:0005:6168
 * Called From: B495:0CF9:0005:6168
 * Called From: B495:0E2E:002A:0E56
 * Called From: B495:0F33:0008:857D
 * Called From: B495:0F80:000B:410C
 * Called From: B495:11A9:0008:DE28
 * Called From: B495:150B:0007:05DB
 * Called From: B4B8:1C57:000F:E943
 * Called From: B4B8:1D6E:0005:6168
 * Called From: B4B8:1FA1:0008:DBE0
 * Called From: B4B8:212A:0005:6168
 * Called From: B4B8:21D9:0008:2A18
 * Called From: B4B8:2251:0007:05DB
 * Called From: B4DA:1195:0008:FBE0
 * Called From: B4DA:13DA:0006:0569
 * Called From: B4DA:141C:0006:0569
 * Called From: B4DA:14E0:0005:6168
 * Called From: B4DA:1863:0008:857D
 * Called From: B4E0:008F:0005:6168
 * Called From: B4E0:0A45:0007:05DB
 * Called From: B4E6:0080:0005:6168
 * Called From: B4E6:0162:0015:1CE9
 * Called From: B4E6:040B:0005:6168
 * Called From: B4E6:04C7:000A:A8DF
 * Called From: B4F2:071D:0006:0569
 * Called From: B4F2:0D06:0005:6168
 * Called From: B4F2:0EEF:0006:0569
 * Called From: B4F2:0F33:0006:0569
 * Called From: B503:0245:0008:CBE0
 * Called From: B503:0558:0008:FBE0
 * Called From: B503:0797:001E:9D55
 * Called From: B503:091B:0016:7A72
 * Called From: B503:09FA:0012:7B6D
 * Called From: B503:0B03:0005:6168
 * Called From: B511:0EF3:0006:0569
 * Called From: B511:10EC:0008:C3E0
 * Called From: B511:117C:000A:673D
 * Called From: B511:1393:0008:DBE0
 * Called From: B518:0056:0008:40E7
 * Called From: B518:0563:0010:240A
 * Called From: B518:148F:000B:DA15
 * Called From: B527:00A1:0005:6168
 * Called From: B527:00A1:0025:7FAE
 * Called From: B527:00A1:0029:E163
 * Called From: B527:0223:002A:3E48
 * Called From: B527:0324:0005:6168
 * Called From: B527:0324:0028:A290
 * Called From: B527:0324:003D:CE40
 */
void f__2B6C_0137_0020_C73F()
{
	emu_push(emu_es);
	emu_push(emu_di);
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x705E), 0x0);
	if (!emu_flags.zf) { emu_ip = 0x0139; emu_last_cs = 0x2B6C; emu_last_ip = 0x013E; emu_last_length = 0x0020; emu_last_crc = 0xC73F; emu_call(); return; } // Jump does not resolve
	emu_incw(&emu_get_memory16(emu_ds, 0x00,  0x705E));
	emu_cmpb(&emu_get_memory8(emu_ds, 0x00,  0x7097), 0x0);
	if (!emu_flags.zf) { emu_ip = 0x0162; emu_last_cs = 0x2B6C; emu_last_ip = 0x0149; emu_last_length = 0x0020; emu_last_crc = 0xC73F; emu_call(); return; } // Jump does not resolve
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x7094));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x7092));

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_ds, 0x00,  0x66B4);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_ds, 0x00,  0x66B6);
	emu_push(0x0157);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A60FD7: f__22A6_0FD7_0043_ACF9(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x2B6C; emu_last_ip = 0x0153; emu_last_length = 0x0020; emu_last_crc = 0xC73F;
			emu_call();
			return;
	}
	f__2B6C_0157_0007_9309();
}

/**
 * Decompiled function f__2B6C_0157_0007_9309()
 *
 * @name f__2B6C_0157_0007_9309
 * @implements 2B6C:0157:0007:9309 ()
 *
 * Called From: 2B6C:0157:0020:C73F
 */
void f__2B6C_0157_0007_9309()
{
	emu_addws(&emu_sp, 0x4);
	emu_push(emu_cs);
	emu_push(0x015E); f__2B6C_000E_0045_C1FE();
	f__2B6C_015E_0004_C0E6();
}

/**
 * Decompiled function f__2B6C_015E_0004_C0E6()
 *
 * @name f__2B6C_015E_0004_C0E6
 * @implements 2B6C:015E:0004:C0E6 ()
 *
 * Called From: 2B6C:015E:0007:9309
 */
void f__2B6C_015E_0004_C0E6()
{

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_ds, 0x00,  0x66A4);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_ds, 0x00,  0x66A6);
	emu_push(0x0162);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A60FAE: f__22A6_0FAE_0027_2378(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x2B6C; emu_last_ip = 0x015E; emu_last_length = 0x0004; emu_last_crc = 0xC0E6;
			emu_call();
			return;
	}
	f__2B6C_0162_0007_9568();
}

/**
 * Decompiled function f__2B6C_0162_0007_9568()
 *
 * @name f__2B6C_0162_0007_9568
 * @implements 2B6C:0162:0007:9568 ()
 *
 * Called From: 2B6C:0162:0004:C0E6
 */
void f__2B6C_0162_0007_9568()
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
 * Decompiled function f__2B6C_0169_001E_6939()
 *
 * @name f__2B6C_0169_001E_6939
 * @implements 2B6C:0169:001E:6939 ()
 *
 * Called From: 0642:010E:0006:E56C
 * Called From: 0642:0172:0006:E56C
 * Called From: 0F78:019C:0008:43E5
 * Called From: 10E4:0470:0007:E5DE
 * Called From: 10E4:056F:0006:E56C
 * Called From: 10E4:226B:0008:1BE5
 * Called From: 1423:03C9:0005:816D
 * Called From: B495:0B98:0008:43E5
 * Called From: B495:0D2C:0008:43E5
 * Called From: B495:0E6C:0008:2BE5
 * Called From: B495:0F73:0008:43E5
 * Called From: B495:0FAC:0008:43E5
 * Called From: B495:121E:000E:7C2B
 * Called From: B495:1533:0008:43E5
 * Called From: B4B8:1B72:0027:A86C
 * Called From: B4B8:1D35:000F:0946
 * Called From: B4B8:1D90:0006:E56C
 * Called From: B4B8:206E:0008:3BE5
 * Called From: B4B8:21C6:000C:D8AD
 * Called From: B4B8:21F5:0006:E56C
 * Called From: B4DA:11BD:0008:43E5
 * Called From: B4DA:140E:0008:43E5
 * Called From: B4DA:1488:0008:33E5
 * Called From: B4DA:1514:0008:43E5
 * Called From: B4DA:188C:0008:43E5
 * Called From: B4E0:00B7:0008:43E5
 * Called From: B4E0:0A71:0008:43E5
 * Called From: B4E6:00C7:0008:3BE5
 * Called From: B4E6:01F0:0014:DF38
 * Called From: B4E6:04A7:0008:3BE5
 * Called From: B4E6:0501:0008:3BE5
 * Called From: B4F2:0751:0008:33E5
 * Called From: B4F2:0D3E:0008:43E5
 * Called From: B4F2:0F1D:0008:33E5
 * Called From: B4F2:0F61:0008:33E5
 * Called From: B503:04CE:0006:E56C
 * Called From: B503:0566:0006:E56C
 * Called From: B503:07E8:0016:22B8
 * Called From: B503:0950:0008:43E5
 * Called From: B503:0A27:0008:43E5
 * Called From: B503:0B3B:0008:43E5
 * Called From: B511:0F1B:0008:43E5
 * Called From: B511:1128:0008:1BE5
 * Called From: B511:133E:0009:70CE
 * Called From: B511:13F4:0007:E5DE
 * Called From: B511:14D8:0005:816D
 * Called From: B518:0502:0005:816D
 * Called From: B518:0823:0006:E56C
 * Called From: B518:0823:0005:816D
 * Called From: B518:14BB:0008:43E5
 * Called From: B527:00E3:0007:E5DE
 * Called From: B527:025C:0008:3BE5
 * Called From: B527:0362:0008:2BE5
 */
void f__2B6C_0169_001E_6939()
{
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x705E), 0x0);
	if (!emu_flags.zf) { emu_ip = 0x0169; emu_last_cs = 0x2B6C; emu_last_ip = 0x016E; emu_last_length = 0x001E; emu_last_crc = 0x6939; emu_call(); return; } // Jump does not resolve
	emu_incw(&emu_get_memory16(emu_ds, 0x00,  0x705E));
	emu_cmpb(&emu_get_memory8(emu_ds, 0x00,  0x7097), 0x0);
	if (!emu_flags.zf) { emu_ip = 0x0192; emu_last_cs = 0x2B6C; emu_last_ip = 0x0179; emu_last_length = 0x001E; emu_last_crc = 0x6939; emu_call(); return; } // Jump does not resolve
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x7094));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x7092));

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_ds, 0x00,  0x66B4);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_ds, 0x00,  0x66B6);
	emu_push(0x0187);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A60FD7: f__22A6_0FD7_0043_ACF9(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x2B6C; emu_last_ip = 0x0183; emu_last_length = 0x001E; emu_last_crc = 0x6939;
			emu_call();
			return;
	}
	f__2B6C_0187_0007_931D();
}

/**
 * Decompiled function f__2B6C_0187_0007_931D()
 *
 * @name f__2B6C_0187_0007_931D
 * @implements 2B6C:0187:0007:931D ()
 *
 * Called From: 2B6C:0187:001E:6939
 */
void f__2B6C_0187_0007_931D()
{
	emu_addws(&emu_sp, 0x4);
	emu_push(emu_cs);
	emu_push(0x018E); f__2B6C_006E_002E_4FBC();
	f__2B6C_018E_0004_C0E6();
}

/**
 * Decompiled function f__2B6C_018E_0004_C0E6()
 *
 * @name f__2B6C_018E_0004_C0E6
 * @implements 2B6C:018E:0004:C0E6 ()
 *
 * Called From: 2B6C:018E:0007:931D
 */
void f__2B6C_018E_0004_C0E6()
{

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_ds, 0x00,  0x66A4);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_ds, 0x00,  0x66A6);
	emu_push(0x0192);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A60FAE: f__22A6_0FAE_0027_2378(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x2B6C; emu_last_ip = 0x018E; emu_last_length = 0x0004; emu_last_crc = 0xC0E6;
			emu_call();
			return;
	}
	f__2B6C_0192_0005_89A4();
}

/**
 * Decompiled function f__2B6C_0192_0005_89A4()
 *
 * @name f__2B6C_0192_0005_89A4
 * @implements 2B6C:0192:0005:89A4 ()
 *
 * Called From: 2B6C:0192:0004:C0E6
 */
void f__2B6C_0192_0005_89A4()
{
	emu_decw(&emu_get_memory16(emu_ds, 0x00,  0x705E));

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__2B6C_0197_00CE_4D32()
 *
 * @name f__2B6C_0197_00CE_4D32
 * @implements 2B6C:0197:00CE:4D32 ()
 *
 * Called From: 0AEC:0C2F:0021:651E
 * Called From: 0AEC:0C2F:0029:2057
 * Called From: 0AEC:0DF0:0024:4D95
 * Called From: 0AEC:0F8A:0029:2C59
 * Called From: 10E4:05F1:0023:BAD6
 * Called From: 2642:005B:005E:87F6
 * Called From: 2C17:0036:002F:3016
 * Called From: B488:0022:0027:45A9
 * Called From: B4A2:08BD:0014:2AE3
 * Called From: B4A2:0906:0014:2AE3
 * Called From: B4DA:03C9:0017:0D1E
 * Called From: B4DA:0521:0017:0C1A
 * Called From: B4DA:068D:0017:0C1A
 * Called From: B4DA:0A4C:0017:0F16
 * Called From: B4DA:0CF5:0013:2896
 * Called From: B4DA:0D67:0013:2896
 * Called From: B4DA:0D67:0019:74BF
 * Called From: B4DA:0D67:0023:9996
 * Called From: B4DA:0D67:0046:ED1B
 * Called From: B4DA:0E6D:0014:B893
 * Called From: B4DA:178D:0017:EE19
 * Called From: B4DA:1823:0016:C2B4
 * Called From: B4F2:10B6:001C:4E38
 * Called From: B4F2:143C:0060:F8EA
 * Called From: B520:07B8:0043:063B
 */
void f__2B6C_0197_00CE_4D32()
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
	if (!emu_flags.sf) { f__2B6C_01B8_00AD_F519(); return; }
	emu_movw(&emu_ax.x, 0x0);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00,  0x7074));
	emu_subw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00,  0x707A));
	emu_negw(&emu_bx.x, emu_bx.x);
	emu_addw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (!emu_flags.sf) { f__2B6C_01CA_009B_5944(); return; }
	emu_movw(&emu_bx.x, 0x0);
	emu_movw(&emu_cx.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_addw(&emu_cx.x, emu_get_memory16(emu_ds, 0x00,  0x7078));
	emu_cmpw(&emu_cx.x, 0x13F);
	if (emu_flags.cf) { f__2B6C_01DA_008B_F96D(); return; }
	emu_movw(&emu_cx.x, 0x13F);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_addw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x707A));
	emu_cmpw(&emu_dx.x, 0xC7);
	if (emu_flags.cf) { f__2B6C_01EA_007B_97B2(); return; }
	emu_movw(&emu_dx.x, 0xC7);
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x705E), 0x0);
	if (!emu_flags.zf) { emu_ip = 0x01EA; emu_last_cs = 0x2B6C; emu_last_ip = 0x01EF; emu_last_length = 0x00CE; emu_last_crc = 0x4D32; emu_call(); return; } // Jump does not resolve
	emu_incw(&emu_get_memory16(emu_ds, 0x00,  0x705E));
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x7080), 0x0);
	if (!emu_flags.zf) { emu_ip = 0x020B; emu_last_cs = 0x2B6C; emu_last_ip = 0x01FA; emu_last_length = 0x00CE; emu_last_crc = 0x4D32; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x7082), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x7084), emu_bx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x7086), emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x7088), emu_dx.x);
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x7082));
	if (emu_flags.cf) { emu_ip = 0x0214; emu_last_cs = 0x2B6C; emu_last_ip = 0x020F; emu_last_length = 0x00CE; emu_last_crc = 0x4D32; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x7082), emu_ax.x);
	emu_cmpw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00,  0x7084));
	if (emu_flags.cf) { emu_ip = 0x021E; emu_last_cs = 0x2B6C; emu_last_ip = 0x0218; emu_last_length = 0x00CE; emu_last_crc = 0x4D32; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x7084), emu_bx.x);
	emu_cmpw(&emu_cx.x, emu_get_memory16(emu_ds, 0x00,  0x7086));
	if (!(emu_flags.cf || emu_flags.zf)) { emu_ip = 0x0228; emu_last_cs = 0x2B6C; emu_last_ip = 0x0222; emu_last_length = 0x00CE; emu_last_crc = 0x4D32; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x7086), emu_cx.x);
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x7088));
	if (!(emu_flags.cf || emu_flags.zf)) { emu_ip = 0x0232; emu_last_cs = 0x2B6C; emu_last_ip = 0x022C; emu_last_length = 0x00CE; emu_last_crc = 0x4D32; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x7088), emu_dx.x);
	emu_testw(&emu_get_memory16(emu_ds, 0x00,  0x7080), 0x4000);
	if (!emu_flags.zf) { emu_ip = 0x0276; emu_last_cs = 0x2B6C; emu_last_ip = 0x0238; emu_last_length = 0x00CE; emu_last_crc = 0x4D32; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x7060));
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00,  0x7062));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x7082));
	if (emu_flags.cf) { emu_ip = 0x0276; emu_last_cs = 0x2B6C; emu_last_ip = 0x0245; emu_last_length = 0x00CE; emu_last_crc = 0x4D32; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x7086));
	if (!(emu_flags.cf || emu_flags.zf)) { emu_ip = 0x0276; emu_last_cs = 0x2B6C; emu_last_ip = 0x024B; emu_last_length = 0x00CE; emu_last_crc = 0x4D32; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00,  0x7084));
	if (emu_flags.cf) { emu_ip = 0x0276; emu_last_cs = 0x2B6C; emu_last_ip = 0x0251; emu_last_length = 0x00CE; emu_last_crc = 0x4D32; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00,  0x7088));
	if (!(emu_flags.cf || emu_flags.zf)) { emu_ip = 0x0276; emu_last_cs = 0x2B6C; emu_last_ip = 0x0257; emu_last_length = 0x00CE; emu_last_crc = 0x4D32; emu_call(); return; } // Jump does not resolve
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x7094));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x7092));

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_ds, 0x00,  0x66B4);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_ds, 0x00,  0x66B6);
	emu_push(0x0265);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A60FD7: f__22A6_0FD7_0043_ACF9(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x2B6C; emu_last_ip = 0x0261; emu_last_length = 0x00CE; emu_last_crc = 0x4D32;
			emu_call();
			return;
	}
	f__2B6C_0265_0007_128D();
}

/**
 * Decompiled function f__2B6C_01B8_00AD_F519()
 *
 * @name f__2B6C_01B8_00AD_F519
 * @implements 2B6C:01B8:00AD:F519 ()
 *
 * Called From: 2B6C:01B3:00CE:4D32
 */
void f__2B6C_01B8_00AD_F519()
{
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00,  0x7074));
	emu_subw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00,  0x707A));
	emu_negw(&emu_bx.x, emu_bx.x);
	emu_addw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (!emu_flags.sf) { f__2B6C_01CA_009B_5944(); return; }
	emu_movw(&emu_bx.x, 0x0);
	emu_movw(&emu_cx.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_addw(&emu_cx.x, emu_get_memory16(emu_ds, 0x00,  0x7078));
	emu_cmpw(&emu_cx.x, 0x13F);
	if (emu_flags.cf) { f__2B6C_01DA_008B_F96D(); return; }
	emu_movw(&emu_cx.x, 0x13F);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_addw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x707A));
	emu_cmpw(&emu_dx.x, 0xC7);
	if (emu_flags.cf) { f__2B6C_01EA_007B_97B2(); return; }
	emu_movw(&emu_dx.x, 0xC7);
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x705E), 0x0);
	if (!emu_flags.zf) { emu_ip = 0x01EA; emu_last_cs = 0x2B6C; emu_last_ip = 0x01EF; emu_last_length = 0x00AD; emu_last_crc = 0xF519; emu_call(); return; } // Jump does not resolve
	emu_incw(&emu_get_memory16(emu_ds, 0x00,  0x705E));
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x7080), 0x0);
	if (!emu_flags.zf) { emu_ip = 0x020B; emu_last_cs = 0x2B6C; emu_last_ip = 0x01FA; emu_last_length = 0x00AD; emu_last_crc = 0xF519; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x7082), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x7084), emu_bx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x7086), emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x7088), emu_dx.x);
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x7082));
	if (emu_flags.cf) { emu_ip = 0x0214; emu_last_cs = 0x2B6C; emu_last_ip = 0x020F; emu_last_length = 0x00AD; emu_last_crc = 0xF519; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x7082), emu_ax.x);
	emu_cmpw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00,  0x7084));
	if (emu_flags.cf) { emu_ip = 0x021E; emu_last_cs = 0x2B6C; emu_last_ip = 0x0218; emu_last_length = 0x00AD; emu_last_crc = 0xF519; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x7084), emu_bx.x);
	emu_cmpw(&emu_cx.x, emu_get_memory16(emu_ds, 0x00,  0x7086));
	if (!(emu_flags.cf || emu_flags.zf)) { emu_ip = 0x0228; emu_last_cs = 0x2B6C; emu_last_ip = 0x0222; emu_last_length = 0x00AD; emu_last_crc = 0xF519; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x7086), emu_cx.x);
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x7088));
	if (!(emu_flags.cf || emu_flags.zf)) { emu_ip = 0x0232; emu_last_cs = 0x2B6C; emu_last_ip = 0x022C; emu_last_length = 0x00AD; emu_last_crc = 0xF519; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x7088), emu_dx.x);
	emu_testw(&emu_get_memory16(emu_ds, 0x00,  0x7080), 0x4000);
	if (!emu_flags.zf) { emu_ip = 0x0276; emu_last_cs = 0x2B6C; emu_last_ip = 0x0238; emu_last_length = 0x00AD; emu_last_crc = 0xF519; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x7060));
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00,  0x7062));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x7082));
	if (emu_flags.cf) { emu_ip = 0x0276; emu_last_cs = 0x2B6C; emu_last_ip = 0x0245; emu_last_length = 0x00AD; emu_last_crc = 0xF519; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x7086));
	if (!(emu_flags.cf || emu_flags.zf)) { emu_ip = 0x0276; emu_last_cs = 0x2B6C; emu_last_ip = 0x024B; emu_last_length = 0x00AD; emu_last_crc = 0xF519; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00,  0x7084));
	if (emu_flags.cf) { emu_ip = 0x0276; emu_last_cs = 0x2B6C; emu_last_ip = 0x0251; emu_last_length = 0x00AD; emu_last_crc = 0xF519; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00,  0x7088));
	if (!(emu_flags.cf || emu_flags.zf)) { emu_ip = 0x0276; emu_last_cs = 0x2B6C; emu_last_ip = 0x0257; emu_last_length = 0x00AD; emu_last_crc = 0xF519; emu_call(); return; } // Jump does not resolve
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
			emu_last_cs = 0x2B6C; emu_last_ip = 0x0261; emu_last_length = 0x00AD; emu_last_crc = 0xF519;
			emu_call();
			return;
	}
	f__2B6C_0265_0007_128D();
}

/**
 * Decompiled function f__2B6C_01CA_009B_5944()
 *
 * @name f__2B6C_01CA_009B_5944
 * @implements 2B6C:01CA:009B:5944 ()
 *
 * Called From: 2B6C:01C5:00CE:4D32
 * Called From: 2B6C:01C5:00AD:F519
 */
void f__2B6C_01CA_009B_5944()
{
	emu_movw(&emu_cx.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_addw(&emu_cx.x, emu_get_memory16(emu_ds, 0x00,  0x7078));
	emu_cmpw(&emu_cx.x, 0x13F);
	if (emu_flags.cf) { f__2B6C_01DA_008B_F96D(); return; }
	emu_movw(&emu_cx.x, 0x13F);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_addw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x707A));
	emu_cmpw(&emu_dx.x, 0xC7);
	if (emu_flags.cf) { f__2B6C_01EA_007B_97B2(); return; }
	emu_movw(&emu_dx.x, 0xC7);
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x705E), 0x0);
	if (!emu_flags.zf) { emu_ip = 0x01EA; emu_last_cs = 0x2B6C; emu_last_ip = 0x01EF; emu_last_length = 0x009B; emu_last_crc = 0x5944; emu_call(); return; } // Jump does not resolve
	emu_incw(&emu_get_memory16(emu_ds, 0x00,  0x705E));
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x7080), 0x0);
	if (!emu_flags.zf) { f__2B6C_020B_005A_3B17(); return; }
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x7082), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x7084), emu_bx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x7086), emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x7088), emu_dx.x);
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x7082));
	if (emu_flags.cf) { emu_ip = 0x0214; emu_last_cs = 0x2B6C; emu_last_ip = 0x020F; emu_last_length = 0x009B; emu_last_crc = 0x5944; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x7082), emu_ax.x);
	emu_cmpw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00,  0x7084));
	if (emu_flags.cf) { emu_ip = 0x021E; emu_last_cs = 0x2B6C; emu_last_ip = 0x0218; emu_last_length = 0x009B; emu_last_crc = 0x5944; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x7084), emu_bx.x);
	emu_cmpw(&emu_cx.x, emu_get_memory16(emu_ds, 0x00,  0x7086));
	if (!(emu_flags.cf || emu_flags.zf)) { emu_ip = 0x0228; emu_last_cs = 0x2B6C; emu_last_ip = 0x0222; emu_last_length = 0x009B; emu_last_crc = 0x5944; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x7086), emu_cx.x);
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x7088));
	if (!(emu_flags.cf || emu_flags.zf)) { emu_ip = 0x0232; emu_last_cs = 0x2B6C; emu_last_ip = 0x022C; emu_last_length = 0x009B; emu_last_crc = 0x5944; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x7088), emu_dx.x);
	emu_testw(&emu_get_memory16(emu_ds, 0x00,  0x7080), 0x4000);
	if (!emu_flags.zf) { emu_ip = 0x0276; emu_last_cs = 0x2B6C; emu_last_ip = 0x0238; emu_last_length = 0x009B; emu_last_crc = 0x5944; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x7060));
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00,  0x7062));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x7082));
	if (emu_flags.cf) { f__2B6C_0276_001C_95D8(); return; }
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x7086));
	if (!(emu_flags.cf || emu_flags.zf)) { emu_ip = 0x0276; emu_last_cs = 0x2B6C; emu_last_ip = 0x024B; emu_last_length = 0x009B; emu_last_crc = 0x5944; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00,  0x7084));
	if (emu_flags.cf) { f__2B6C_0276_001C_95D8(); return; }
	emu_cmpw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00,  0x7088));
	if (!(emu_flags.cf || emu_flags.zf)) { emu_ip = 0x0276; emu_last_cs = 0x2B6C; emu_last_ip = 0x0257; emu_last_length = 0x009B; emu_last_crc = 0x5944; emu_call(); return; } // Jump does not resolve
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x7094));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x7092));

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_ds, 0x00,  0x66B4);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_ds, 0x00,  0x66B6);
	emu_push(0x0265);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A60FD7: f__22A6_0FD7_0043_ACF9(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x2B6C; emu_last_ip = 0x0261; emu_last_length = 0x009B; emu_last_crc = 0x5944;
			emu_call();
			return;
	}
	f__2B6C_0265_0007_128D();
}

/**
 * Decompiled function f__2B6C_01DA_008B_F96D()
 *
 * @name f__2B6C_01DA_008B_F96D
 * @implements 2B6C:01DA:008B:F96D ()
 *
 * Called From: 2B6C:01D5:009B:5944
 * Called From: 2B6C:01D5:00CE:4D32
 * Called From: 2B6C:01D5:00AD:F519
 */
void f__2B6C_01DA_008B_F96D()
{
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_addw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x707A));
	emu_cmpw(&emu_dx.x, 0xC7);
	if (emu_flags.cf) { f__2B6C_01EA_007B_97B2(); return; }
	emu_movw(&emu_dx.x, 0xC7);
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x705E), 0x0);
	if (!emu_flags.zf) { emu_ip = 0x01EA; emu_last_cs = 0x2B6C; emu_last_ip = 0x01EF; emu_last_length = 0x008B; emu_last_crc = 0xF96D; emu_call(); return; } // Jump does not resolve
	emu_incw(&emu_get_memory16(emu_ds, 0x00,  0x705E));
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x7080), 0x0);
	if (!emu_flags.zf) { f__2B6C_020B_005A_3B17(); return; }
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x7082), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x7084), emu_bx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x7086), emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x7088), emu_dx.x);
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x7082));
	if (emu_flags.cf) { emu_ip = 0x0214; emu_last_cs = 0x2B6C; emu_last_ip = 0x020F; emu_last_length = 0x008B; emu_last_crc = 0xF96D; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x7082), emu_ax.x);
	emu_cmpw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00,  0x7084));
	if (emu_flags.cf) { emu_ip = 0x021E; emu_last_cs = 0x2B6C; emu_last_ip = 0x0218; emu_last_length = 0x008B; emu_last_crc = 0xF96D; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x7084), emu_bx.x);
	emu_cmpw(&emu_cx.x, emu_get_memory16(emu_ds, 0x00,  0x7086));
	if (!(emu_flags.cf || emu_flags.zf)) { emu_ip = 0x0228; emu_last_cs = 0x2B6C; emu_last_ip = 0x0222; emu_last_length = 0x008B; emu_last_crc = 0xF96D; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x7086), emu_cx.x);
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x7088));
	if (!(emu_flags.cf || emu_flags.zf)) { emu_ip = 0x0232; emu_last_cs = 0x2B6C; emu_last_ip = 0x022C; emu_last_length = 0x008B; emu_last_crc = 0xF96D; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x7088), emu_dx.x);
	emu_testw(&emu_get_memory16(emu_ds, 0x00,  0x7080), 0x4000);
	if (!emu_flags.zf) { emu_ip = 0x0276; emu_last_cs = 0x2B6C; emu_last_ip = 0x0238; emu_last_length = 0x008B; emu_last_crc = 0xF96D; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x7060));
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00,  0x7062));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x7082));
	if (emu_flags.cf) { f__2B6C_0276_001C_95D8(); return; }
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x7086));
	if (!(emu_flags.cf || emu_flags.zf)) { f__2B6C_0276_001C_95D8(); return; }
	emu_cmpw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00,  0x7084));
	if (emu_flags.cf) { f__2B6C_0276_001C_95D8(); return; }
	emu_cmpw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00,  0x7088));
	if (!(emu_flags.cf || emu_flags.zf)) { emu_ip = 0x0276; emu_last_cs = 0x2B6C; emu_last_ip = 0x0257; emu_last_length = 0x008B; emu_last_crc = 0xF96D; emu_call(); return; } // Jump does not resolve
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x7094));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x7092));

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_ds, 0x00,  0x66B4);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_ds, 0x00,  0x66B6);
	emu_push(0x0265);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A60FD7: f__22A6_0FD7_0043_ACF9(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x2B6C; emu_last_ip = 0x0261; emu_last_length = 0x008B; emu_last_crc = 0xF96D;
			emu_call();
			return;
	}
	f__2B6C_0265_0007_128D();
}

/**
 * Decompiled function f__2B6C_01EA_007B_97B2()
 *
 * @name f__2B6C_01EA_007B_97B2
 * @implements 2B6C:01EA:007B:97B2 ()
 *
 * Called From: 2B6C:01E5:008B:F96D
 * Called From: 2B6C:01E5:00CE:4D32
 * Called From: 2B6C:01E5:009B:5944
 * Called From: 2B6C:01E5:00AD:F519
 */
void f__2B6C_01EA_007B_97B2()
{
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x705E), 0x0);
	if (!emu_flags.zf) { emu_ip = 0x01EA; emu_last_cs = 0x2B6C; emu_last_ip = 0x01EF; emu_last_length = 0x007B; emu_last_crc = 0x97B2; emu_call(); return; } // Jump does not resolve
	emu_incw(&emu_get_memory16(emu_ds, 0x00,  0x705E));
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x7080), 0x0);
	if (!emu_flags.zf) { emu_ip = 0x020B; emu_last_cs = 0x2B6C; emu_last_ip = 0x01FA; emu_last_length = 0x007B; emu_last_crc = 0x97B2; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x7082), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x7084), emu_bx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x7086), emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x7088), emu_dx.x);
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x7082));
	if (emu_flags.cf) { emu_ip = 0x0214; emu_last_cs = 0x2B6C; emu_last_ip = 0x020F; emu_last_length = 0x007B; emu_last_crc = 0x97B2; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x7082), emu_ax.x);
	emu_cmpw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00,  0x7084));
	if (emu_flags.cf) { emu_ip = 0x021E; emu_last_cs = 0x2B6C; emu_last_ip = 0x0218; emu_last_length = 0x007B; emu_last_crc = 0x97B2; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x7084), emu_bx.x);
	emu_cmpw(&emu_cx.x, emu_get_memory16(emu_ds, 0x00,  0x7086));
	if (!(emu_flags.cf || emu_flags.zf)) { emu_ip = 0x0228; emu_last_cs = 0x2B6C; emu_last_ip = 0x0222; emu_last_length = 0x007B; emu_last_crc = 0x97B2; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x7086), emu_cx.x);
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x7088));
	if (!(emu_flags.cf || emu_flags.zf)) { emu_ip = 0x0232; emu_last_cs = 0x2B6C; emu_last_ip = 0x022C; emu_last_length = 0x007B; emu_last_crc = 0x97B2; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x7088), emu_dx.x);
	emu_testw(&emu_get_memory16(emu_ds, 0x00,  0x7080), 0x4000);
	if (!emu_flags.zf) { emu_ip = 0x0276; emu_last_cs = 0x2B6C; emu_last_ip = 0x0238; emu_last_length = 0x007B; emu_last_crc = 0x97B2; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x7060));
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00,  0x7062));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x7082));
	if (emu_flags.cf) { f__2B6C_0276_001C_95D8(); return; }
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x7086));
	if (!(emu_flags.cf || emu_flags.zf)) { f__2B6C_0276_001C_95D8(); return; }
	emu_cmpw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00,  0x7084));
	if (emu_flags.cf) { f__2B6C_0276_001C_95D8(); return; }
	emu_cmpw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00,  0x7088));
	if (!(emu_flags.cf || emu_flags.zf)) { f__2B6C_0276_001C_95D8(); return; }
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x7094));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x7092));

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_ds, 0x00,  0x66B4);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_ds, 0x00,  0x66B6);
	emu_push(0x0265);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A60FD7: f__22A6_0FD7_0043_ACF9(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x2B6C; emu_last_ip = 0x0261; emu_last_length = 0x007B; emu_last_crc = 0x97B2;
			emu_call();
			return;
	}
	f__2B6C_0265_0007_128D();
}

/**
 * Decompiled function f__2B6C_020B_005A_3B17()
 *
 * @name f__2B6C_020B_005A_3B17
 * @implements 2B6C:020B:005A:3B17 ()
 *
 * Called From: 2B6C:01FA:008B:F96D
 * Called From: 2B6C:01FA:009B:5944
 */
void f__2B6C_020B_005A_3B17()
{
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x7082));
	if (emu_flags.cf) { f__2B6C_0214_0051_5F7B(); return; }
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x7082), emu_ax.x);
	emu_cmpw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00,  0x7084));
	if (emu_flags.cf) { emu_ip = 0x021E; emu_last_cs = 0x2B6C; emu_last_ip = 0x0218; emu_last_length = 0x005A; emu_last_crc = 0x3B17; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x7084), emu_bx.x);
	emu_cmpw(&emu_cx.x, emu_get_memory16(emu_ds, 0x00,  0x7086));
	if (!(emu_flags.cf || emu_flags.zf)) { f__2B6C_0228_003D_F75B(); return; }
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x7086), emu_cx.x);
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x7088));
	if (!(emu_flags.cf || emu_flags.zf)) { emu_ip = 0x0232; emu_last_cs = 0x2B6C; emu_last_ip = 0x022C; emu_last_length = 0x005A; emu_last_crc = 0x3B17; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x7088), emu_dx.x);
	emu_testw(&emu_get_memory16(emu_ds, 0x00,  0x7080), 0x4000);
	if (!emu_flags.zf) { f__2B6C_0276_001C_95D8(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x7060));
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00,  0x7062));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x7082));
	if (emu_flags.cf) { emu_ip = 0x0276; emu_last_cs = 0x2B6C; emu_last_ip = 0x0245; emu_last_length = 0x005A; emu_last_crc = 0x3B17; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x7086));
	if (!(emu_flags.cf || emu_flags.zf)) { f__2B6C_0276_001C_95D8(); return; }
	emu_cmpw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00,  0x7084));
	if (emu_flags.cf) { emu_ip = 0x0276; emu_last_cs = 0x2B6C; emu_last_ip = 0x0251; emu_last_length = 0x005A; emu_last_crc = 0x3B17; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00,  0x7088));
	if (!(emu_flags.cf || emu_flags.zf)) { emu_ip = 0x0276; emu_last_cs = 0x2B6C; emu_last_ip = 0x0257; emu_last_length = 0x005A; emu_last_crc = 0x3B17; emu_call(); return; } // Jump does not resolve
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
			emu_last_cs = 0x2B6C; emu_last_ip = 0x0261; emu_last_length = 0x005A; emu_last_crc = 0x3B17;
			emu_call();
			return;
	}
	f__2B6C_0265_0007_128D();
}

/**
 * Decompiled function f__2B6C_0214_0051_5F7B()
 *
 * @name f__2B6C_0214_0051_5F7B
 * @implements 2B6C:0214:0051:5F7B ()
 *
 * Called From: 2B6C:020F:005A:3B17
 */
void f__2B6C_0214_0051_5F7B()
{
	emu_cmpw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00,  0x7084));
	if (emu_flags.cf) { f__2B6C_021E_0047_8CB4(); return; }
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x7084), emu_bx.x);
	emu_cmpw(&emu_cx.x, emu_get_memory16(emu_ds, 0x00,  0x7086));
	if (!(emu_flags.cf || emu_flags.zf)) { emu_ip = 0x0228; emu_last_cs = 0x2B6C; emu_last_ip = 0x0222; emu_last_length = 0x0051; emu_last_crc = 0x5F7B; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x7086), emu_cx.x);
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x7088));
	if (!(emu_flags.cf || emu_flags.zf)) { emu_ip = 0x0232; emu_last_cs = 0x2B6C; emu_last_ip = 0x022C; emu_last_length = 0x0051; emu_last_crc = 0x5F7B; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x7088), emu_dx.x);
	emu_testw(&emu_get_memory16(emu_ds, 0x00,  0x7080), 0x4000);
	if (!emu_flags.zf) { emu_ip = 0x0276; emu_last_cs = 0x2B6C; emu_last_ip = 0x0238; emu_last_length = 0x0051; emu_last_crc = 0x5F7B; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x7060));
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00,  0x7062));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x7082));
	if (emu_flags.cf) { emu_ip = 0x0276; emu_last_cs = 0x2B6C; emu_last_ip = 0x0245; emu_last_length = 0x0051; emu_last_crc = 0x5F7B; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x7086));
	if (!(emu_flags.cf || emu_flags.zf)) { emu_ip = 0x0276; emu_last_cs = 0x2B6C; emu_last_ip = 0x024B; emu_last_length = 0x0051; emu_last_crc = 0x5F7B; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00,  0x7084));
	if (emu_flags.cf) { emu_ip = 0x0276; emu_last_cs = 0x2B6C; emu_last_ip = 0x0251; emu_last_length = 0x0051; emu_last_crc = 0x5F7B; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00,  0x7088));
	if (!(emu_flags.cf || emu_flags.zf)) { emu_ip = 0x0276; emu_last_cs = 0x2B6C; emu_last_ip = 0x0257; emu_last_length = 0x0051; emu_last_crc = 0x5F7B; emu_call(); return; } // Jump does not resolve
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
			emu_last_cs = 0x2B6C; emu_last_ip = 0x0261; emu_last_length = 0x0051; emu_last_crc = 0x5F7B;
			emu_call();
			return;
	}
	f__2B6C_0265_0007_128D();
}

/**
 * Decompiled function f__2B6C_021E_0047_8CB4()
 *
 * @name f__2B6C_021E_0047_8CB4
 * @implements 2B6C:021E:0047:8CB4 ()
 *
 * Called From: 2B6C:0218:0051:5F7B
 */
void f__2B6C_021E_0047_8CB4()
{
	emu_cmpw(&emu_cx.x, emu_get_memory16(emu_ds, 0x00,  0x7086));
	if (!(emu_flags.cf || emu_flags.zf)) { emu_ip = 0x0228; emu_last_cs = 0x2B6C; emu_last_ip = 0x0222; emu_last_length = 0x0047; emu_last_crc = 0x8CB4; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x7086), emu_cx.x);
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x7088));
	if (!(emu_flags.cf || emu_flags.zf)) { emu_ip = 0x0232; emu_last_cs = 0x2B6C; emu_last_ip = 0x022C; emu_last_length = 0x0047; emu_last_crc = 0x8CB4; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x7088), emu_dx.x);
	emu_testw(&emu_get_memory16(emu_ds, 0x00,  0x7080), 0x4000);
	if (!emu_flags.zf) { f__2B6C_0276_001C_95D8(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x7060));
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00,  0x7062));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x7082));
	if (emu_flags.cf) { emu_ip = 0x0276; emu_last_cs = 0x2B6C; emu_last_ip = 0x0245; emu_last_length = 0x0047; emu_last_crc = 0x8CB4; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x7086));
	if (!(emu_flags.cf || emu_flags.zf)) { f__2B6C_0276_001C_95D8(); return; }
	emu_cmpw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00,  0x7084));
	if (emu_flags.cf) { emu_ip = 0x0276; emu_last_cs = 0x2B6C; emu_last_ip = 0x0251; emu_last_length = 0x0047; emu_last_crc = 0x8CB4; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00,  0x7088));
	if (!(emu_flags.cf || emu_flags.zf)) { emu_ip = 0x0276; emu_last_cs = 0x2B6C; emu_last_ip = 0x0257; emu_last_length = 0x0047; emu_last_crc = 0x8CB4; emu_call(); return; } // Jump does not resolve
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
			emu_last_cs = 0x2B6C; emu_last_ip = 0x0261; emu_last_length = 0x0047; emu_last_crc = 0x8CB4;
			emu_call();
			return;
	}
	f__2B6C_0265_0007_128D();
}

/**
 * Decompiled function f__2B6C_0228_003D_F75B()
 *
 * @name f__2B6C_0228_003D_F75B
 * @implements 2B6C:0228:003D:F75B ()
 *
 * Called From: 2B6C:0222:005A:3B17
 */
void f__2B6C_0228_003D_F75B()
{
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x7088));
	if (!(emu_flags.cf || emu_flags.zf)) { emu_ip = 0x0232; emu_last_cs = 0x2B6C; emu_last_ip = 0x022C; emu_last_length = 0x003D; emu_last_crc = 0xF75B; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x7088), emu_dx.x);
	emu_testw(&emu_get_memory16(emu_ds, 0x00,  0x7080), 0x4000);
	if (!emu_flags.zf) { f__2B6C_0276_001C_95D8(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x7060));
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00,  0x7062));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x7082));
	if (emu_flags.cf) { emu_ip = 0x0276; emu_last_cs = 0x2B6C; emu_last_ip = 0x0245; emu_last_length = 0x003D; emu_last_crc = 0xF75B; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x7086));
	if (!(emu_flags.cf || emu_flags.zf)) { f__2B6C_0276_001C_95D8(); return; }
	emu_cmpw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00,  0x7084));
	if (emu_flags.cf) { emu_ip = 0x0276; emu_last_cs = 0x2B6C; emu_last_ip = 0x0251; emu_last_length = 0x003D; emu_last_crc = 0xF75B; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00,  0x7088));
	if (!(emu_flags.cf || emu_flags.zf)) { emu_ip = 0x0276; emu_last_cs = 0x2B6C; emu_last_ip = 0x0257; emu_last_length = 0x003D; emu_last_crc = 0xF75B; emu_call(); return; } // Jump does not resolve
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
			emu_last_cs = 0x2B6C; emu_last_ip = 0x0261; emu_last_length = 0x003D; emu_last_crc = 0xF75B;
			emu_call();
			return;
	}
	f__2B6C_0265_0007_128D();
}

/**
 * Decompiled function f__2B6C_0265_0007_128D()
 *
 * @name f__2B6C_0265_0007_128D
 * @implements 2B6C:0265:0007:128D ()
 *
 * Called From: 2B6C:0265:007B:97B2
 * Called From: 2B6C:0265:008B:F96D
 * Called From: 2B6C:0265:009B:5944
 * Called From: 2B6C:0265:00CE:4D32
 */
void f__2B6C_0265_0007_128D()
{
	emu_addws(&emu_sp, 0x4);
	emu_push(emu_cs);
	emu_push(0x026C); f__2B6C_000E_0045_C1FE();
	f__2B6C_026C_0004_C0E6();
}

/**
 * Decompiled function f__2B6C_026C_0004_C0E6()
 *
 * @name f__2B6C_026C_0004_C0E6
 * @implements 2B6C:026C:0004:C0E6 ()
 *
 * Called From: 2B6C:026C:0007:128D
 */
void f__2B6C_026C_0004_C0E6()
{

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_ds, 0x00,  0x66A4);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_ds, 0x00,  0x66A6);
	emu_push(0x0270);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A60FAE: f__22A6_0FAE_0027_2378(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x2B6C; emu_last_ip = 0x026C; emu_last_length = 0x0004; emu_last_crc = 0xC0E6;
			emu_call();
			return;
	}
	f__2B6C_0270_0022_327A();
}

/**
 * Decompiled function f__2B6C_0270_0022_327A()
 *
 * @name f__2B6C_0270_0022_327A
 * @implements 2B6C:0270:0022:327A ()
 *
 * Called From: 2B6C:0270:0004:C0E6
 */
void f__2B6C_0270_0022_327A()
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
 * Decompiled function f__2B6C_0276_001C_95D8()
 *
 * @name f__2B6C_0276_001C_95D8
 * @implements 2B6C:0276:001C:95D8 ()
 *
 * Called From: 2B6C:0238:003D:F75B
 * Called From: 2B6C:0238:005A:3B17
 * Called From: 2B6C:0238:0047:8CB4
 * Called From: 2B6C:0245:007B:97B2
 * Called From: 2B6C:0245:009B:5944
 * Called From: 2B6C:0245:008B:F96D
 * Called From: 2B6C:024B:007B:97B2
 * Called From: 2B6C:024B:008B:F96D
 * Called From: 2B6C:024B:003D:F75B
 * Called From: 2B6C:024B:0047:8CB4
 * Called From: 2B6C:024B:005A:3B17
 * Called From: 2B6C:0251:007B:97B2
 * Called From: 2B6C:0251:009B:5944
 * Called From: 2B6C:0251:008B:F96D
 * Called From: 2B6C:0257:007B:97B2
 */
void f__2B6C_0276_001C_95D8()
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
 * Decompiled function f__2B6C_0292_0028_3AD7()
 *
 * @name f__2B6C_0292_0028_3AD7
 * @implements 2B6C:0292:0028:3AD7 ()
 *
 * Called From: 0AEC:0C69:0008:F38A
 * Called From: 0AEC:0E2A:0008:F38A
 * Called From: 0AEC:0FC4:0008:F38A
 * Called From: 10E4:066A:000F:ACB8
 * Called From: 2642:006C:0008:D517
 * Called From: 2C17:01B8:001F:31F4
 * Called From: B488:01FD:000B:5A70
 * Called From: B4A2:08EF:000F:BCB8
 * Called From: B4A2:092B:000F:ACB8
 * Called From: B4DA:03F4:0008:8B8A
 * Called From: B4DA:054C:0008:8B8A
 * Called From: B4DA:06B8:0008:8B8A
 * Called From: B4DA:0A77:0008:8B8A
 * Called From: B4DA:0D21:0008:F38A
 * Called From: B4DA:0D93:0008:F38A
 * Called From: B4DA:0E98:0008:F38A
 * Called From: B4DA:17B8:0008:F38A
 * Called From: B4DA:184E:0008:F38A
 * Called From: B4F2:10E8:0008:F38A
 * Called From: B4F2:146B:000F:9CB8
 * Called From: B520:0830:000F:9CB8
 */
void f__2B6C_0292_0028_3AD7()
{
	emu_push(emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x705E), 0x0);
	if (!emu_flags.zf) { emu_ip = 0x0293; emu_last_cs = 0x2B6C; emu_last_ip = 0x0298; emu_last_length = 0x0028; emu_last_crc = 0x3AD7; emu_call(); return; } // Jump does not resolve
	emu_incw(&emu_get_memory16(emu_ds, 0x00,  0x705E));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x7080));
	emu_cmpb(&emu_ax.l, 0x0);
	if (emu_flags.zf) { f__2B6C_02C8_0009_7751(); return; }
	emu_decb(&emu_ax.l);
	if (!emu_flags.zf) { f__2B6C_02C8_0009_7751(); return; }
	emu_testw(&emu_ax.x, 0x4000);
	if (emu_flags.zf) { f__2B6C_02C5_000C_7CD1(); return; }
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x7094));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x7092));

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_ds, 0x00,  0x66B4);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_ds, 0x00,  0x66B6);
	emu_push(0x02BA);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A60FD7: f__22A6_0FD7_0043_ACF9(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x2B6C; emu_last_ip = 0x02B6; emu_last_length = 0x0028; emu_last_crc = 0x3AD7;
			emu_call();
			return;
	}
	f__2B6C_02BA_0007_D28E();
}

/**
 * Decompiled function f__2B6C_02BA_0007_D28E()
 *
 * @name f__2B6C_02BA_0007_D28E
 * @implements 2B6C:02BA:0007:D28E ()
 *
 * Called From: 2B6C:02BA:0028:3AD7
 */
void f__2B6C_02BA_0007_D28E()
{
	emu_addws(&emu_sp, 0x4);
	emu_push(emu_cs);
	emu_push(0x02C1); f__2B6C_006E_002E_4FBC();
	f__2B6C_02C1_0004_C0E6();
}

/**
 * Decompiled function f__2B6C_02C1_0004_C0E6()
 *
 * @name f__2B6C_02C1_0004_C0E6
 * @implements 2B6C:02C1:0004:C0E6 ()
 *
 * Called From: 2B6C:02C1:0007:D28E
 */
void f__2B6C_02C1_0004_C0E6()
{

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_ds, 0x00,  0x66A4);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_ds, 0x00,  0x66A6);
	emu_push(0x02C5);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A60FAE: f__22A6_0FAE_0027_2378(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x2B6C; emu_last_ip = 0x02C1; emu_last_length = 0x0004; emu_last_crc = 0xC0E6;
			emu_call();
			return;
	}
	f__2B6C_02C5_000C_7CD1();
}

/**
 * Decompiled function f__2B6C_02C5_000C_7CD1()
 *
 * @name f__2B6C_02C5_000C_7CD1
 * @implements 2B6C:02C5:000C:7CD1 ()
 *
 * Called From: 2B6C:02AC:0028:3AD7
 * Called From: 2B6C:02C5:0004:C0E6
 */
void f__2B6C_02C5_000C_7CD1()
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
 * Decompiled function f__2B6C_02C8_0009_7751()
 *
 * @name f__2B6C_02C8_0009_7751
 * @implements 2B6C:02C8:0009:7751 ()
 *
 * Called From: 2B6C:02A3:0028:3AD7
 * Called From: 2B6C:02A7:0028:3AD7
 */
void f__2B6C_02C8_0009_7751()
{
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x7080), emu_ax.x);
	emu_decw(&emu_get_memory16(emu_ds, 0x00,  0x705E));
	emu_pop(&emu_ax.x);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

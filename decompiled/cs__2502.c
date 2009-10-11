/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__2502_0008_0015_FFBD()
 *
 * @name f__2502_0008_0015_FFBD
 * @implements 2502:0008:0015:FFBD ()
 * @implements 2502:001D:0016:2C58
 * @implements 2502:0033:0024:59EB
 * @implements 2502:0045:0012:9F29
 *
 * Called From: B4DA:1168:0014:EB5F
 * Called From: B4DA:1228:0014:EB5F
 * Called From: B4DA:12C3:0014:EB5F
 * Called From: B4DA:1391:0014:EB5F
 * Called From: B4DA:1557:0014:EB5F
 * Called From: B4DA:15BB:0014:EB5F
 * Called From: B4DA:15FD:0014:EB5F
 * Called From: B4E0:06DD:0014:F31D
 * Called From: B4E0:07B2:0014:EB5E
 * Called From: B511:0DCD:0018:314D
 * Called From: B511:1324:0018:314D
 */
void f__2502_0008_0015_FFBD()
{
l__0008:
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0055; emu_last_cs = 0x2502; emu_last_ip = 0x0011; emu_last_length = 0x0015; emu_last_crc = 0xFFBD; emu_call(); return; }
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0xC));
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0055; emu_last_cs = 0x2502; emu_last_ip = 0x0019; emu_last_length = 0x0015; emu_last_crc = 0xFFBD; emu_call(); return; }
	goto l__0045;
l__001D:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x0), 0x1B);
	if (!emu_flags.zf) goto l__0033;
	emu_incw(&emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x0));
	emu_addb(&emu_al, 0x7F);
	/* Unresolved jump */ emu_ip = 0x0039; emu_last_cs = 0x2502; emu_last_ip = 0x0031; emu_last_length = 0x0016; emu_last_crc = 0x2C58; emu_call();
l__0033:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x0));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movb(&emu_get_memory8(emu_es, emu_bx, 0x0), emu_al);
	emu_incw(&emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_incw(&emu_get_memory16(emu_ss, emu_bp,  0xA));
	goto l__0045;
l__0045:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x0), 0x0);
	if (!emu_flags.zf) goto l__001D;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movb(&emu_get_memory8(emu_es, emu_bx, 0x0), 0x0);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__2502_00FA_0009_9EB2()
 *
 * @name f__2502_00FA_0009_9EB2
 * @implements 2502:00FA:0009:9EB2 ()
 * @implements 2502:0103:005E:BCB7
 * @implements 2502:0139:0028:1593
 * @implements 2502:0143:001E:15C2
 * @implements 2502:0161:0004:DE52
 *
 * Called From: 0FCB:017E:0014:2C10
 * Called From: B4DA:1154:000A:5058
 * Called From: B4DA:1214:000A:5058
 * Called From: B4DA:12AF:000A:5058
 * Called From: B4DA:137D:000A:5058
 * Called From: B4DA:1543:000A:5058
 * Called From: B4DA:15A7:000A:5058
 * Called From: B4DA:15E9:000A:5058
 * Called From: B4E0:06C9:0014:7316
 */
void f__2502_00FA_0009_9EB2()
{
l__00FA:
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_xorw(&emu_si, emu_si);
	goto l__0143;
l__0103:
	emu_testw(&emu_dx, 0x80);
	if (!emu_flags.zf) {
		emu_andw(&emu_dx, 0x7F);
		emu_movw(&emu_ax, emu_dx);
		emu_andw(&emu_ax, 0x78);
		emu_movb(&emu_cl, 0x3);
		emu_sarw(&emu_ax, emu_cl);
		emu_movw(&emu_di, emu_ax);
		emu_movb(&emu_al, emu_get_memory8(emu_ds, emu_di, 0x6E88));
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0xA));
		emu_movb(&emu_get_memory8(emu_es, emu_bx, 0x0), emu_al);
		emu_incw(&emu_get_memory16(emu_ss, emu_bp,  0xA));
		emu_incw(&emu_si);
		emu_movw(&emu_bx, emu_di);
		emu_movb(&emu_cl, 0x3);
		emu_shlw(&emu_bx, emu_cl);
		emu_movw(&emu_ax, emu_dx);
		emu_andw(&emu_ax, 0x7);
		emu_addw(&emu_bx, emu_ax);
		emu_movb(&emu_al, emu_get_memory8(emu_ds, emu_bx, 0x6E98));
		emu_movws(&emu_ax, emu_al);
		emu_movw(&emu_dx, emu_ax);
	}
	goto l__0139;
l__0139:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movb(&emu_get_memory8(emu_es, emu_bx, 0x0), emu_dl);
	emu_incw(&emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_incw(&emu_si);
	goto l__0143;
l__0143:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x0));
	emu_movws(&emu_ax, emu_al);
	emu_movw(&emu_dx, emu_ax);
	emu_incw(&emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_dx, emu_dx);
	if (!emu_flags.zf) goto l__0103;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movb(&emu_get_memory8(emu_es, emu_bx, 0x0), 0x0);
	emu_incw(&emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movw(&emu_ax, emu_si);
	goto l__0161;
l__0161:
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__2502_0165_0027_41E7()
 *
 * @name f__2502_0165_0027_41E7
 * @implements 2502:0165:0027:41E7 ()
 * @implements 2502:018C:0004:893F
 *
 * Called From: 0FCB:0076:001C:FDC4
 * Called From: 10E4:019A:0043:1BB4
 * Called From: B4DA:114A:0020:AE23
 * Called From: B4DA:120A:0019:9D97
 * Called From: B4DA:12A5:0018:5919
 * Called From: B4DA:1373:0014:149F
 * Called From: B4DA:1539:001B:C82E
 * Called From: B4DA:159D:0026:46F6
 * Called From: B4DA:15DF:001F:F7C7
 */
void f__2502_0165_0027_41E7()
{
l__0165:
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subw(&emu_sp, 0x4);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_dx);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_shlw(&emu_ax, 0x1);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_addw(&emu_bx, emu_ax);
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_addw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x0));
	goto l__018C;
l__018C:
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__261F_0008_0033_66ED()
 *
 * @name f__261F_0008_0033_66ED
 * @implements 261F:0008:0033:66ED ()
 *
 * Called From: 3480:0000:0002:0000
 * Called From: 3483:0025:0002:0000
 * Called From: 3483:002A:0002:0000
 * Called From: 3483:002F:0002:0000
 * Called From: 3483:0034:0002:0000
 * Called From: 3488:0020:0002:0000
 * Called From: 348B:0000:0002:0000
 * Called From: 348B:0020:0002:0000
 * Called From: 348B:002F:0002:0000
 * Called From: 348B:0034:0002:0000
 * Called From: 348B:0039:0002:0000
 * Called From: 348B:003E:0002:0000
 * Called From: 348B:0043:0002:0000
 * Called From: 3495:0000:0002:0000
 * Called From: 3495:0020:0002:0000
 * Called From: 34A2:0020:0002:0000
 * Called From: 34A2:002A:0002:0000
 * Called From: 34AE:0020:0002:0000
 * Called From: 34B1:0020:0002:0000
 * Called From: 34B1:0025:0002:0000
 * Called From: 34B1:002A:0002:0000
 * Called From: 34B5:0000:0002:0000
 * Called From: 34B5:0020:0002:0000
 * Called From: 34B8:0000:0002:0000
 * Called From: 34B8:0020:0002:0000
 * Called From: 34B8:0025:0002:0000
 * Called From: 34B8:002A:0002:0000
 * Called From: 34B8:002F:0002:0000
 * Called From: 34B8:0034:0002:0000
 * Called From: 34B8:0039:0002:0000
 * Called From: 34BE:0000:0002:0000
 * Called From: 34BE:0020:0002:0000
 * Called From: 34C1:0020:0002:0000
 * Called From: 34C1:0025:0002:0000
 * Called From: 34C1:002A:0002:0000
 * Called From: 34C4:0020:0002:0000
 * Called From: 34CA:0020:0002:0000
 * Called From: 34CD:0057:0002:0000
 * Called From: 34CD:0061:0002:0000
 * Called From: 34CD:008E:0002:0000
 * Called From: 34CD:00A2:0002:0000
 * Called From: 34CD:00B1:0002:0000
 * Called From: 34CD:00B6:0002:0000
 * Called From: 34CD:00C0:0002:0000
 * Called From: 34DA:0000:0002:0000
 * Called From: 34DA:0020:0002:0000
 * Called From: 34DA:0025:0002:0000
 * Called From: 34DA:002A:0002:0000
 * Called From: 34DA:002F:0002:0000
 * Called From: 34DA:0034:0002:0000
 * Called From: 34DA:0039:0002:0000
 * Called From: 34E0:0000:0002:0000
 * Called From: 34E0:0020:0002:0000
 * Called From: 34E6:0025:0002:0000
 * Called From: 34E9:0000:0002:0000
 * Called From: 34E9:0020:0002:0000
 * Called From: 34E9:0025:0002:0000
 * Called From: 34E9:002A:0002:0000
 * Called From: 34E9:002F:0002:0000
 * Called From: 34ED:0020:0002:0000
 * Called From: 34F2:0000:0002:0000
 * Called From: 34F2:0020:0002:0000
 * Called From: 34F2:0025:0002:0000
 * Called From: 34F2:002A:0002:0000
 * Called From: 34F2:002F:0002:0000
 * Called From: 34FC:0020:0002:0000
 * Called From: 34FC:0025:0002:0000
 * Called From: 3500:0020:0002:0000
 * Called From: 3503:0000:0002:0000
 * Called From: 3503:0020:0002:0000
 * Called From: 350B:0020:0002:0000
 * Called From: 3511:0000:0002:0000
 * Called From: 3511:0020:0002:0000
 * Called From: 3511:002A:0002:0000
 * Called From: 3511:0034:0002:0000
 * Called From: 3511:0039:0002:0000
 * Called From: 3511:003E:0002:0000
 * Called From: 3511:0043:0002:0000
 * Called From: 3518:0000:0002:0000
 * Called From: 3518:0020:0002:0000
 * Called From: 3518:0025:0002:0000
 * Called From: 3518:0066:0002:0000
 * Called From: 3520:0025:0002:0000
 * Called From: 3520:0034:0002:0000
 * Called From: 3520:004D:0002:0000
 * Called From: 3527:0020:0002:0000
 * Called From: 352A:0020:0002:0000
 * Called From: 352A:002A:0002:0000
 * Called From: 3530:0020:0002:0000
 * Called From: 3533:0020:0002:0000
 * Called From: 3536:002F:0002:0000
 */
void f__261F_0008_0033_66ED()
{
	emu_push(emu_ax.x);
	emu_push(emu_bx.x);
	emu_push(emu_cx.x);
	emu_push(emu_dx.x);
	emu_push(emu_es);
	emu_push(emu_ds);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_push(emu_bp);
	emu_movw(&emu_bp, 0x353F);
	emu_movw(&emu_ds, emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x6);
	emu_incb(&emu_get_memory8(emu_ds, 0x00, -0x6794));
	emu_movw(&emu_ax.x, 0x33F4);
	emu_movw(&emu_es, emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_es, 0x00,  0x128), 0xFF);
	if (emu_flags.zf) { f__261F_003C_000E_672A(); return; }
	emu_movw(&emu_ax.x, 0x33F4);
	emu_movw(&emu_es, emu_ax.x);
	emu_push(emu_get_memory16(emu_es, 0x00,  0x128));
	emu_push(emu_cs); emu_push(0x003B); emu_cs = 0x01F7; emu_ip = 0x23CC; emu_last_cs = 0x261F; emu_last_ip = 0x0036; emu_last_length = 0x0033; emu_last_crc = 0x66ED; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__261F_003C_000E_672A()
 *
 * @name f__261F_003C_000E_672A
 * @implements 261F:003C:000E:672A ()
 *
 * Called From: 261F:002A:0033:66ED
 */
void f__261F_003C_000E_672A()
{
	emu_movw(&emu_ax.x, 0x8001);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x9882);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x004A); emu_cs = 0x01F7; f__01F7_2A06_002A_9A90();
	f__261F_004A_000E_FD7C();
}

/**
 * Decompiled function f__261F_004A_000E_FD7C()
 *
 * @name f__261F_004A_000E_FD7C
 * @implements 261F:004A:000E:FD7C ()
 *
 * Called From: 261F:004A:000E:672A
 */
void f__261F_004A_000E_FD7C()
{
	emu_addws(&emu_sp, 0x6);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_cmpw(&emu_ax.x, 0xFFFF);
	if (emu_flags.zf) { emu_ip = 0x0058; emu_last_cs = 0x261F; emu_last_ip = 0x0053; emu_last_length = 0x000E; emu_last_crc = 0xFD7C; emu_call(); return; } // Jump does not resolve
	f__261F_0168_001D_22F4(); return;
}

/**
 * Decompiled function f__261F_0168_001D_22F4()
 *
 * @name f__261F_0168_001D_22F4
 * @implements 261F:0168:001D:22F4 ()
 *
 * Called From: 261F:0055:000E:FD7C
 */
void f__261F_0168_001D_22F4()
{
	emu_movw(&emu_ax.x, 0x33F4);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_es, emu_ax.x);
	emu_movw(&emu_get_memory16(emu_es, 0x00,  0x128), emu_dx.x);
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_pop(&emu_ds);
	emu_pop(&emu_es);
	emu_pop(&emu_dx.x);
	emu_pop(&emu_cx.x);
	emu_pop(&emu_bx.x);
	emu_pop(&emu_ax.x);
	emu_push(emu_bp);

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_ds, 0x00, -0x67BA);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_ds, 0x00, -0x67B8);
	emu_push(0x0185);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x217E04F9: f__217E_04F9_000E_346A(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x261F; emu_last_ip = 0x0181; emu_last_length = 0x001D; emu_last_crc = 0x22F4;
			emu_call();
			return;
	}
	f__261F_0185_001A_54D2();
}

/**
 * Decompiled function f__261F_0185_001A_54D2()
 *
 * @name f__261F_0185_001A_54D2
 * @implements 261F:0185:001A:54D2 ()
 *
 * Called From: 261F:0185:001D:22F4
 */
void f__261F_0185_001A_54D2()
{
	emu_pop(&emu_bp);
	emu_push(emu_ax.x);
	emu_push(emu_bx.x);
	emu_push(emu_cx.x);
	emu_push(emu_dx.x);
	emu_push(emu_es);
	emu_push(emu_ds);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_push(emu_bp);
	emu_sti();
	emu_movw(&emu_ax.x, 0x33F4);
	emu_movw(&emu_es, emu_ax.x);
	emu_push(emu_get_memory16(emu_es, 0x00,  0x128));
	emu_push(emu_cs); emu_push(0x019F); emu_cs = 0x01F7; f__01F7_23CC_0013_6B52();
	f__261F_019F_001B_EDBF();
}

/**
 * Decompiled function f__261F_019F_001B_EDBF()
 *
 * @name f__261F_019F_001B_EDBF
 * @implements 261F:019F:001B:EDBF ()
 *
 * Called From: 261F:019F:001A:54D2
 */
void f__261F_019F_001B_EDBF()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_ax.x, 0x33F4);
	emu_movw(&emu_es, emu_ax.x);
	emu_movw(&emu_get_memory16(emu_es, 0x00,  0x128), 0xFFFF);
	emu_decb(&emu_get_memory8(emu_ds, 0x00, -0x6794));
	emu_pop(&emu_bp);
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_pop(&emu_ds);
	emu_pop(&emu_es);
	emu_pop(&emu_dx.x);
	emu_pop(&emu_cx.x);
	emu_pop(&emu_bx.x);
	emu_pop(&emu_ax.x);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	emu_popf();
	return;
}

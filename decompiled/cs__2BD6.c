/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__2BD6_0000_0015_24A9()
 *
 * @name f__2BD6_0000_0015_24A9
 * @implements 2BD6:0000:0015:24A9 ()
 * @implements 2BD6:0015:000F:1301
 * @implements 2BD6:0024:005A:C833
 * @implements 2BD6:003E:0040:FC4A
 * @implements 2BD6:0071:000D:9AAA
 * @implements 2BD6:007E:001F:4BDA
 * @implements 2BD6:0097:0006:F251
 * @implements 2BD6:009D:0009:689C
 * @implements 2BD6:00A6:0023:D870
 * @implements 2BD6:00C4:0005:852F
 * @implements 2BD6:00C9:0024:BC39
 * @implements 2BD6:00D0:001D:37CB
 * @implements 2BD6:00E8:0005:6526
 * @implements 2BD6:00ED:0009:C791
 *
 * Called From: 253D:02E0:0026:AF12
 * Called From: 2903:033C:0046:75BF
 * Called From: 2903:033C:001C:850F
 * Called From: 2903:033C:0026:C426
 * Called From: 2903:033C:0054:FC7A
 * Called From: 2B4C:0199:0017:56F7
 * Called From: B52A:0458:0019:419F
 * Called From: B52A:0A71:001D:12BE
 * Called From: B52A:0A71:001E:13DA
 */
void f__2BD6_0000_0015_24A9()
{
l__0000:
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_bx);
	emu_push(emu_cx);
	emu_push(emu_di);
	emu_push(emu_ds);
	emu_push(emu_dx);
	emu_push(emu_es);
	emu_push(emu_si);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_cs); emu_push(0x0015); emu_cs = 0x2B0E; f__2B0E_00F2_0016_F9EC();
	goto l__0015;
l__0015:
	emu_movw(&emu_si, emu_ax);
	emu_movw(&emu_ds, emu_dx);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_cs); emu_push(0x0024); emu_cs = 0x2B0E; f__2B0E_00F2_0016_F9EC();
	goto l__0024;
l__0024:
	emu_movw(&emu_di, emu_ax);
	emu_movw(&emu_es, emu_dx);
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_movw(&emu_get_memory16(emu_cs, 0x00, 0xF6), emu_di);
	emu_addw(&emu_dx, emu_di);
	emu_movw(&emu_get_memory16(emu_cs, 0x00, 0xFA), emu_dx);
	emu_cld();
	emu_movw(&emu_bx, emu_si);
	emu_movw(&emu_dx, emu_ds);
	emu_movw(&emu_bp, emu_es);
	goto l__003E;
l__003E:
	emu_movw(&emu_ax, emu_get_memory16(emu_cs, 0x00, 0xFA));
	emu_subw(&emu_ax, emu_di);
	if (emu_flags.zf) goto l__009D;
	emu_movw(&emu_get_memory16(emu_cs, 0x00, 0xF8), emu_ax);
	emu_movw(&emu_si, emu_bx);
	emu_movw(&emu_ds, emu_dx);
	emu_lodsb(emu_ds);
	emu_orb(&emu_al, emu_al);
	if (emu_flags.sf) goto l__007E;
	emu_movb(&emu_ah, emu_al);
	emu_andb(&emu_ah, 0xF);
	emu_movb(&emu_ch, emu_al);
	emu_movb(&emu_cl, 0x4);
	emu_shrb(&emu_ch, emu_cl);
	emu_movb(&emu_cl, emu_ch);
	emu_xorb(&emu_ch, emu_ch);
	emu_addw(&emu_cx, 0x3);
	emu_cmpw(&emu_cx, emu_get_memory16(emu_cs, 0x00, 0xF8));
	if (!(emu_flags.cf || emu_flags.zf)) {
		emu_movw(&emu_cx, emu_get_memory16(emu_cs, 0x00, 0xF8));
	}
	goto l__0071;
l__0071:
	emu_lodsb(emu_ds);
	emu_movw(&emu_bx, emu_si);
	emu_movw(&emu_si, emu_di);
	emu_subw(&emu_si, emu_ax);
	emu_movw(&emu_ds, emu_bp);
	emu_rep_movsb(emu_ds);
	goto l__003E;
l__007E:
	emu_testb(&emu_al, 0x40);
	if (!emu_flags.zf) goto l__00A6;
	emu_cmpb(&emu_al, 0x80);
	if (emu_flags.zf) goto l__009D;
	emu_movb(&emu_cl, emu_al);
	emu_andw(&emu_cx, 0x3F);
	emu_cmpw(&emu_cx, emu_get_memory16(emu_cs, 0x00, 0xF8));
	if (!(emu_flags.cf || emu_flags.zf)) {
		emu_movw(&emu_cx, emu_get_memory16(emu_cs, 0x00, 0xF8));
	}
	goto l__0097;
l__0097:
	emu_rep_movsb(emu_ds);
	emu_movw(&emu_bx, emu_si);
	goto l__003E;
l__009D:
	emu_movw(&emu_ax, emu_di);
	emu_subw(&emu_ax, emu_get_memory16(emu_cs, 0x00, 0xF6));
	goto l__00ED;
l__00A6:
	emu_movb(&emu_cl, emu_al);
	emu_andw(&emu_cx, 0x3F);
	emu_addw(&emu_cx, 0x3);
	emu_cmpb(&emu_al, 0xFE);
	if (!emu_flags.zf) goto l__00C9;
	emu_lodsw(emu_ds);
	emu_movw(&emu_cx, emu_ax);
	emu_lodsb(emu_ds);
	emu_movw(&emu_bx, emu_si);
	emu_cmpw(&emu_cx, emu_get_memory16(emu_cs, 0x00, 0xF8));
	if (!(emu_flags.cf || emu_flags.zf)) {
		emu_movw(&emu_cx, emu_get_memory16(emu_cs, 0x00, 0xF8));
	}
	goto l__00C4;
l__00C4:
	emu_rep_stosb();
	goto l__003E;
l__00C9:
	emu_cmpb(&emu_al, 0xFF);
	if (emu_flags.zf) {
		emu_lodsw(emu_ds);
		emu_movw(&emu_cx, emu_ax);
	}
	goto l__00D0;
l__00D0:
	emu_lodsw(emu_ds);
	emu_movw(&emu_bx, emu_si);
	emu_addw(&emu_ax, emu_get_memory16(emu_cs, 0x00, 0xF6));
	emu_movw(&emu_si, emu_ax);
	emu_movw(&emu_ds, emu_bp);
	emu_cmpw(&emu_cx, emu_get_memory16(emu_cs, 0x00, 0xF8));
	if (!(emu_flags.cf || emu_flags.zf)) {
		emu_movw(&emu_cx, emu_get_memory16(emu_cs, 0x00, 0xF8));
	}
	goto l__00E8;
l__00E8:
	emu_rep_movsb(emu_ds);
	goto l__003E;
l__00ED:
	emu_pop(&emu_si);
	emu_pop(&emu_es);
	emu_pop(&emu_dx);
	emu_pop(&emu_ds);
	emu_pop(&emu_di);
	emu_pop(&emu_cx);
	emu_pop(&emu_bx);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

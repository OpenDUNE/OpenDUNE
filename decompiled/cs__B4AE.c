/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__B4AE_0000_0008_049C()
 *
 * @name f__B4AE_0000_0008_049C
 * @implements B4AE:0000:0008:049C ()
 * @implements B4AE:0008:0010:F2A7
 * @implements B4AE:0018:0013:32DB
 * @implements B4AE:002B:001D:6FA8
 * @implements B4AE:0042:0006:B9AB
 * @implements B4AE:0048:0005:9F6E
 * @implements B4AE:004D:0019:DEF2
 * @implements B4AE:0066:0019:C51E
 * @implements B4AE:007F:0002:F5BA
 * @implements B4AE:00EA:0002:C13A
 * @implements B4AE:00EC:0002:C03A
 * @implements B4AE:00EE:0002:2597
 *
 * Called From: 34AE:0020:0005:0000
 */
void f__B4AE_0000_0008_049C()
{
l__0000:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_cs); emu_push(0x0008); emu_cs = 0x29E8; emu_Input_History_Clear();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34AE) { ovl__34AE(0xFF); }
	goto l__0008;
l__0008:
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x38B2);
	emu_cmpw(&emu_ax, 0x4);
	if (emu_flags.zf) goto l__0018;
	emu_cmpw(&emu_ax, 0x8);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0081; emu_last_cs = 0xB4AE; emu_last_ip = 0x0013; emu_last_length = 0x0010; emu_last_crc = 0xF2A7; emu_call(); return; }
	goto l__00EA;
l__0018:
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x3A38);
	emu_orw(&emu_ax, emu_ax);
	if (emu_flags.zf) goto l__0066;
	emu_cmpw(&emu_ax, 0x1);
	if (emu_flags.zf) goto l__002B;
	emu_cmpw(&emu_ax, 0x2);
	if (emu_flags.zf) goto l__004D;
	goto l__007F;
l__002B:
	emu_ax = 0x22;
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x1C8B;
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x1C88;
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x1C42;
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x1C1A;
	goto l__0042;
l__0042:
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x0048); f__B4AE_00F0_0024_E400();
	goto l__0048;
l__0048:
	emu_addw(&emu_sp, 0x12);
	goto l__007F;
l__004D:
	emu_ax = 0x22;
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x1D5F;
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x1D5C;
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x1D16;
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x1CEE;
	goto l__0042;
l__0066:
	emu_ax = 0x22;
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x1E33;
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x1E30;
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x1DEA;
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x1DC2;
	goto l__0042;
l__007F:
	goto l__00EC;
l__00EA:
	goto l__00EE;
l__00EC:
	goto l__00EE;
l__00EE:
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B4AE_00F0_0024_E400()
 *
 * @name f__B4AE_00F0_0024_E400
 * @implements B4AE:00F0:0024:E400 ()
 * @implements B4AE:0114:000B:7807
 * @implements B4AE:011F:0006:9AE8
 * @implements B4AE:0125:0005:FB00
 * @implements B4AE:012A:0005:0EE9
 * @implements B4AE:012F:0002:2597
 *
 * Called From: B4AE:0045:001D:6FA8
 * Called From: B4AE:0045:0006:B9AB
 */
void f__B4AE_00F0_0024_E400()
{
l__00F0:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x14));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x12));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x10));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_ax = 0xFFFF;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x0114); emu_cs = 0x34ED; ovl__34ED(0);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34AE) { ovl__34AE(0xFF); }
	goto l__0114;
l__0114:
	emu_addw(&emu_sp, 0x12);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x16));
	emu_push(emu_cs); emu_push(0x011F); emu_cs = 0x3483; ovl__3483(1);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34AE) { ovl__34AE(0xFF); }
	goto l__011F;
l__011F:
	emu_pop(&emu_cx);
	emu_push(emu_cs); emu_push(0x0125); emu_cs = 0x34ED; ovl__34ED(2);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34AE) { ovl__34AE(0xFF); }
	goto l__0125;
l__0125:
	emu_push(emu_cs); emu_push(0x012A); emu_cs = 0x1DD7; f__1DD7_0B53_0025_36F7();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34AE) { ovl__34AE(0xFF); }
	goto l__012A;
l__012A:
	emu_push(emu_cs); emu_push(0x012F); emu_cs = 0x34ED; ovl__34ED(1);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34AE) { ovl__34AE(0xFF); }
	goto l__012F;
l__012F:
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

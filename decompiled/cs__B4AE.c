/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__B4AE_0000_0008_049C()
 *
 * @name f__B4AE_0000_0008_049C
 * @implements B4AE:0000:0008:049C ()
 *
 * Called From: 34AE:0020:0005:0000
 */
void f__B4AE_0000_0008_049C()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_cs); emu_push(0x0008); emu_cs = 0x29E8; emu_Input_History_Clear();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34AE) { ovl__34AE(0xFF); }
	f__B4AE_0008_0010_F2A7();
}

/**
 * Decompiled function f__B4AE_0008_0010_F2A7()
 *
 * @name f__B4AE_0008_0010_F2A7
 * @implements B4AE:0008:0010:F2A7 ()
 *
 * Called From: B4AE:0008:0008:049C
 */
void f__B4AE_0008_0010_F2A7()
{
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x38B2));
	emu_cmpw(&emu_ax, 0x4);
	if (emu_flags.zf) { f__B4AE_0018_0013_32DB(); return; }
	emu_cmpw(&emu_ax, 0x8);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0081; emu_last_cs = 0xB4AE; emu_last_ip = 0x0013; emu_last_length = 0x0010; emu_last_crc = 0xF2A7; emu_call(); return; }
	f__B4AE_00EA_0002_C13A(); return;
}

/**
 * Decompiled function f__B4AE_0018_0013_32DB()
 *
 * @name f__B4AE_0018_0013_32DB
 * @implements B4AE:0018:0013:32DB ()
 *
 * Called From: B4AE:000E:0010:F2A7
 */
void f__B4AE_0018_0013_32DB()
{
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x3A38));
	emu_orw(&emu_ax, emu_ax);
	if (emu_flags.zf) { f__B4AE_0066_0019_C51E(); return; }
	emu_cmpw(&emu_ax, 0x1);
	if (emu_flags.zf) { f__B4AE_002B_001D_6FA8(); return; }
	emu_cmpw(&emu_ax, 0x2);
	if (emu_flags.zf) { f__B4AE_004D_0019_DEF2(); return; }
	/* Unresolved jump */ emu_ip = 0x007F; emu_last_cs = 0xB4AE; emu_last_ip = 0x0029; emu_last_length = 0x0013; emu_last_crc = 0x32DB; emu_call();
}

/**
 * Decompiled function f__B4AE_002B_001D_6FA8()
 *
 * @name f__B4AE_002B_001D_6FA8
 * @implements B4AE:002B:001D:6FA8 ()
 *
 * Called From: B4AE:0022:0013:32DB
 */
void f__B4AE_002B_001D_6FA8()
{
	emu_movw(&emu_ax, 0x22);
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_movw(&emu_ax, 0x1C8B);
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_movw(&emu_ax, 0x1C88);
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_movw(&emu_ax, 0x1C42);
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_movw(&emu_ax, 0x1C1A);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x0048); f__B4AE_00F0_0024_E400();
	f__B4AE_0048_0005_9F6E();
}

/**
 * Decompiled function f__B4AE_0042_0006_B9AB()
 *
 * @name f__B4AE_0042_0006_B9AB
 * @implements B4AE:0042:0006:B9AB ()
 *
 * Called From: B4AE:0064:0019:DEF2
 * Called From: B4AE:007D:0019:C51E
 */
void f__B4AE_0042_0006_B9AB()
{
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x0048); f__B4AE_00F0_0024_E400();
	f__B4AE_0048_0005_9F6E();
}

/**
 * Decompiled function f__B4AE_0048_0005_9F6E()
 *
 * @name f__B4AE_0048_0005_9F6E
 * @implements B4AE:0048:0005:9F6E ()
 *
 * Called From: B4AE:0048:001D:6FA8
 * Called From: B4AE:0048:0006:B9AB
 */
void f__B4AE_0048_0005_9F6E()
{
	emu_addw(&emu_sp, 0x12);
	f__B4AE_007F_0002_F5BA(); return;
}

/**
 * Decompiled function f__B4AE_004D_0019_DEF2()
 *
 * @name f__B4AE_004D_0019_DEF2
 * @implements B4AE:004D:0019:DEF2 ()
 *
 * Called From: B4AE:0027:0013:32DB
 */
void f__B4AE_004D_0019_DEF2()
{
	emu_movw(&emu_ax, 0x22);
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_movw(&emu_ax, 0x1D5F);
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_movw(&emu_ax, 0x1D5C);
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_movw(&emu_ax, 0x1D16);
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_movw(&emu_ax, 0x1CEE);
	f__B4AE_0042_0006_B9AB(); return;
}

/**
 * Decompiled function f__B4AE_0066_0019_C51E()
 *
 * @name f__B4AE_0066_0019_C51E
 * @implements B4AE:0066:0019:C51E ()
 *
 * Called From: B4AE:001D:0013:32DB
 */
void f__B4AE_0066_0019_C51E()
{
	emu_movw(&emu_ax, 0x22);
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_movw(&emu_ax, 0x1E33);
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_movw(&emu_ax, 0x1E30);
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_movw(&emu_ax, 0x1DEA);
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_movw(&emu_ax, 0x1DC2);
	f__B4AE_0042_0006_B9AB(); return;
}

/**
 * Decompiled function f__B4AE_007F_0002_F5BA()
 *
 * @name f__B4AE_007F_0002_F5BA
 * @implements B4AE:007F:0002:F5BA ()
 *
 * Called From: B4AE:004B:0005:9F6E
 */
void f__B4AE_007F_0002_F5BA()
{
	f__B4AE_00EC_0002_C03A(); return;
}

/**
 * Decompiled function f__B4AE_00EA_0002_C13A()
 *
 * @name f__B4AE_00EA_0002_C13A
 * @implements B4AE:00EA:0002:C13A ()
 *
 * Called From: B4AE:0015:0010:F2A7
 */
void f__B4AE_00EA_0002_C13A()
{
	f__B4AE_00EE_0002_2597(); return;
}

/**
 * Decompiled function f__B4AE_00EC_0002_C03A()
 *
 * @name f__B4AE_00EC_0002_C03A
 * @implements B4AE:00EC:0002:C03A ()
 *
 * Called From: B4AE:007F:0002:F5BA
 */
void f__B4AE_00EC_0002_C03A()
{
	f__B4AE_00EE_0002_2597(); return;
}

/**
 * Decompiled function f__B4AE_00EE_0002_2597()
 *
 * @name f__B4AE_00EE_0002_2597
 * @implements B4AE:00EE:0002:2597 ()
 *
 * Called From: B4AE:00EA:0002:C13A
 * Called From: B4AE:00EC:0002:C03A
 */
void f__B4AE_00EE_0002_2597()
{
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
 *
 * Called From: B4AE:0045:001D:6FA8
 * Called From: B4AE:0045:0006:B9AB
 */
void f__B4AE_00F0_0024_E400()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x14));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x12));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x10));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_movw(&emu_ax, 0xFFFF);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x0114); emu_cs = 0x34ED; ovl__34ED(0);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34AE) { ovl__34AE(0xFF); }
	f__B4AE_0114_000B_7807();
}

/**
 * Decompiled function f__B4AE_0114_000B_7807()
 *
 * @name f__B4AE_0114_000B_7807
 * @implements B4AE:0114:000B:7807 ()
 *
 * Called From: B4AE:0114:0024:E400
 */
void f__B4AE_0114_000B_7807()
{
	emu_addw(&emu_sp, 0x12);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x16));
	emu_push(emu_cs); emu_push(0x011F); emu_cs = 0x3483; ovl__3483(1);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34AE) { ovl__34AE(0xFF); }
	f__B4AE_011F_0006_9AE8();
}

/**
 * Decompiled function f__B4AE_011F_0006_9AE8()
 *
 * @name f__B4AE_011F_0006_9AE8
 * @implements B4AE:011F:0006:9AE8 ()
 *
 * Called From: 261F:01B9:001B:EDBF
 */
void f__B4AE_011F_0006_9AE8()
{
	emu_pop(&emu_cx);
	emu_push(emu_cs); emu_push(0x0125); emu_cs = 0x34ED; ovl__34ED(2);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34AE) { ovl__34AE(0xFF); }
	f__B4AE_0125_0005_FB00();
}

/**
 * Decompiled function f__B4AE_0125_0005_FB00()
 *
 * @name f__B4AE_0125_0005_FB00
 * @implements B4AE:0125:0005:FB00 ()
 *
 * Called From: B4AE:0125:0006:9AE8
 */
void f__B4AE_0125_0005_FB00()
{
	emu_push(emu_cs); emu_push(0x012A); emu_cs = 0x1DD7; f__1DD7_0B53_0025_36F7();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34AE) { ovl__34AE(0xFF); }
	f__B4AE_012A_0005_0EE9();
}

/**
 * Decompiled function f__B4AE_012A_0005_0EE9()
 *
 * @name f__B4AE_012A_0005_0EE9
 * @implements B4AE:012A:0005:0EE9 ()
 *
 * Called From: B4AE:012A:0005:FB00
 */
void f__B4AE_012A_0005_0EE9()
{
	emu_push(emu_cs); emu_push(0x012F); emu_cs = 0x34ED; ovl__34ED(1);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34AE) { ovl__34AE(0xFF); }
	f__B4AE_012F_0002_2597();
}

/**
 * Decompiled function f__B4AE_012F_0002_2597()
 *
 * @name f__B4AE_012F_0002_2597
 * @implements B4AE:012F:0002:2597 ()
 *
 * Called From: B4AE:012F:0005:0EE9
 */
void f__B4AE_012F_0002_2597()
{
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

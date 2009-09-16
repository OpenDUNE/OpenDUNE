/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__1DD7_000E_001C_1082()
 *
 * @name f__1DD7_000E_001C_1082
 * @implements 1DD7:000E:001C:1082 ()
 *
 * Called From: B4F2:003A:000A:CE86
 */
void f__1DD7_000E_001C_1082()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x6);
	emu_push(emu_si);
	emu_movw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x700A));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x700A), emu_si);
	emu_orw(&emu_si, emu_si);
	if (!emu_flags.zf) { f__1DD7_002B_002E_F1D8(); return; }
	emu_push(emu_cs);
	emu_push(0x002A); emu_ip = 0x09DA; emu_last_cs = 0x1DD7; emu_last_ip = 0x0027; emu_last_length = 0x001C; emu_last_crc = 0x1082; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__1DD7_002B_002E_F1D8()
 *
 * @name f__1DD7_002B_002E_F1D8
 * @implements 1DD7:002B:002E:F1D8 ()
 *
 * Called From: 1DD7:0024:001C:1082
 */
void f__1DD7_002B_002E_F1D8()
{
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x6302), 0xFF);
	if (!emu_flags.zf) { emu_ip = 0x0065; emu_last_cs = 0x1DD7; emu_last_ip = 0x0030; emu_last_length = 0x002E; emu_last_crc = 0xF1D8; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x6310));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x6312));
	if (emu_flags.zf) { f__1DD7_0065_0005_115C(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x6312));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x6310));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_dx.x);
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x700A), 0x0);
	if (!emu_flags.zf) { emu_ip = 0x005B; emu_last_cs = 0x1DD7; emu_last_ip = 0x004D; emu_last_length = 0x002E; emu_last_crc = 0xF1D8; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, 0x1);
	emu_movw(&emu_bx.x, 0x10);
	emu_pushf();

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_ss, emu_bp, -0x6);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_push(0x0059);
	switch ((emu_cs << 16) + emu_ip) {
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x1DD7; emu_last_ip = 0x0056; emu_last_length = 0x002E; emu_last_crc = 0xF1D8;
			emu_call();
			return;
	}
	emu_unknown_call();
}

/**
 * Decompiled function f__1DD7_0065_0005_115C()
 *
 * @name f__1DD7_0065_0005_115C
 * @implements 1DD7:0065:0005:115C ()
 *
 * Called From: 1DD7:0039:002E:F1D8
 */
void f__1DD7_0065_0005_115C()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	f__1DD7_006A_0005_04BA(); return;
}

/**
 * Decompiled function f__1DD7_006A_0005_04BA()
 *
 * @name f__1DD7_006A_0005_04BA
 * @implements 1DD7:006A:0005:04BA ()
 *
 * Called From: 1DD7:0068:0005:115C
 */
void f__1DD7_006A_0005_04BA()
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
 * Decompiled function f__1DD7_006F_001C_0982()
 *
 * @name f__1DD7_006F_001C_0982
 * @implements 1DD7:006F:001C:0982 ()
 *
 * Called From: B4F2:0030:000C:8F99
 */
void f__1DD7_006F_001C_0982()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x6);
	emu_push(emu_si);
	emu_movw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x700A));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x700C), emu_si);
	emu_orw(&emu_si, emu_si);
	if (!emu_flags.zf) { f__1DD7_008C_002E_C24F(); return; }
	emu_push(emu_cs);
	emu_push(0x008B); emu_ip = 0x0A7B; emu_last_cs = 0x1DD7; emu_last_ip = 0x0088; emu_last_length = 0x001C; emu_last_crc = 0x0982; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__1DD7_008C_002E_C24F()
 *
 * @name f__1DD7_008C_002E_C24F
 * @implements 1DD7:008C:002E:C24F ()
 *
 * Called From: 1DD7:0085:001C:0982
 */
void f__1DD7_008C_002E_C24F()
{
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x6344), 0xFF);
	if (!emu_flags.zf) { emu_ip = 0x00C6; emu_last_cs = 0x1DD7; emu_last_ip = 0x0091; emu_last_length = 0x002E; emu_last_crc = 0xC24F; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x6352));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x6354));
	if (emu_flags.zf) { f__1DD7_00C6_0005_115C(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x6354));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x6352));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_dx.x);
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x700C), 0x0);
	if (!emu_flags.zf) { emu_ip = 0x00BC; emu_last_cs = 0x1DD7; emu_last_ip = 0x00AE; emu_last_length = 0x002E; emu_last_crc = 0xC24F; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, 0x2);
	emu_movw(&emu_bx.x, 0x10);
	emu_pushf();

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_ss, emu_bp, -0x6);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_push(0x00BA);
	switch ((emu_cs << 16) + emu_ip) {
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x1DD7; emu_last_ip = 0x00B7; emu_last_length = 0x002E; emu_last_crc = 0xC24F;
			emu_call();
			return;
	}
	emu_unknown_call();
}

/**
 * Decompiled function f__1DD7_00C6_0005_115C()
 *
 * @name f__1DD7_00C6_0005_115C
 * @implements 1DD7:00C6:0005:115C ()
 *
 * Called From: 1DD7:009A:002E:C24F
 */
void f__1DD7_00C6_0005_115C()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	f__1DD7_00CB_0005_04BA(); return;
}

/**
 * Decompiled function f__1DD7_00CB_0005_04BA()
 *
 * @name f__1DD7_00CB_0005_04BA
 * @implements 1DD7:00CB:0005:04BA ()
 *
 * Called From: 1DD7:00C9:0005:115C
 */
void f__1DD7_00CB_0005_04BA()
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
 * Decompiled function f__1DD7_01AB_0007_1284()
 *
 * @name f__1DD7_01AB_0007_1284
 * @implements 1DD7:01AB:0007:1284 ()
 *
 * Called From: B483:038D:0015:550E
 */
void f__1DD7_01AB_0007_1284()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_cs);
	emu_push(0x01B2); f__1DD7_01EB_0013_AA5A();
	f__1DD7_01B2_000E_14ED();
}

/**
 * Decompiled function f__1DD7_01B2_000E_14ED()
 *
 * @name f__1DD7_01B2_000E_14ED
 * @implements 1DD7:01B2:000E:14ED ()
 *
 * Called From: 1DD7:01B2:0007:1284
 */
void f__1DD7_01B2_000E_14ED()
{
	emu_orw(&emu_ax.x, emu_ax.x);
	if (emu_flags.zf) { f__1DD7_01C1_0014_AE13(); return; }
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6374));
	emu_push(emu_cs); emu_push(0x01C0); emu_cs = 0x2756; emu_ip = 0x1002; emu_last_cs = 0x1DD7; emu_last_ip = 0x01BB; emu_last_length = 0x000E; emu_last_crc = 0x14ED; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__1DD7_01C1_0014_AE13()
 *
 * @name f__1DD7_01C1_0014_AE13
 * @implements 1DD7:01C1:0014:AE13 ()
 *
 * Called From: 1DD7:01B5:000E:14ED
 */
void f__1DD7_01C1_0014_AE13()
{
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x6396), 0x0);
	if (emu_flags.zf) { f__1DD7_01DD_000E_3238(); return; }
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x638C));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x638A));
	emu_push(emu_cs); emu_push(0x01D5); emu_cs = 0x23E1; emu_ip = 0x0397; emu_last_cs = 0x1DD7; emu_last_ip = 0x01D0; emu_last_length = 0x0014; emu_last_crc = 0xAE13; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__1DD7_01DD_000E_3238()
 *
 * @name f__1DD7_01DD_000E_3238
 * @implements 1DD7:01DD:000E:3238 ()
 *
 * Called From: 1DD7:01C6:0014:AE13
 */
void f__1DD7_01DD_000E_3238()
{
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x638C), 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x638A), 0x0);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__1DD7_01EB_0013_AA5A()
 *
 * @name f__1DD7_01EB_0013_AA5A
 * @implements 1DD7:01EB:0013:AA5A ()
 *
 * Called From: 0642:0240:0005:1E9E
 * Called From: 1DD7:01AF:0007:1284
 * Called From: B483:047E:0005:1E9E
 * Called From: B4F2:0272:0005:1E9E
 * Called From: B511:1497:0005:1E9E
 */
void f__1DD7_01EB_0013_AA5A()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x6374), 0xFF);
	if (emu_flags.zf) { f__1DD7_020D_0004_0768(); return; }
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6374));
	emu_push(emu_cs); emu_push(0x01FE); emu_cs = 0x2756; f__2756_0E36_0006_25D4();
	f__1DD7_01FE_000B_177A();
}

/**
 * Decompiled function f__1DD7_01FE_000B_177A()
 *
 * @name f__1DD7_01FE_000B_177A
 * @implements 1DD7:01FE:000B:177A ()
 *
 * Called From: 1DD7:01FE:0013:AA5A
 */
void f__1DD7_01FE_000B_177A()
{
	emu_pop(&emu_cx.x);
	emu_cmpw(&emu_ax.x, 0x2);
	if (!emu_flags.zf) { f__1DD7_0209_0004_0694(); return; }
	emu_movw(&emu_ax.x, 0x1);
	emu_ip = 0x020B; emu_last_cs = 0x1DD7; emu_last_ip = 0x0207; emu_last_length = 0x000B; emu_last_crc = 0x177A; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__1DD7_0209_0004_0694()
 *
 * @name f__1DD7_0209_0004_0694
 * @implements 1DD7:0209:0004:0694 ()
 *
 * Called From: 1DD7:0202:000B:177A
 */
void f__1DD7_0209_0004_0694()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__1DD7_0211_0002_00E2(); return;
}

/**
 * Decompiled function f__1DD7_020B_0002_03A4()
 *
 * @name f__1DD7_020B_0002_03A4
 * @implements 1DD7:020B:0002:03A4 ()
 *
 * Called From: 1DD7:020F:0004:0768
 */
void f__1DD7_020B_0002_03A4()
{
	f__1DD7_0211_0002_00E2(); return;
}

/**
 * Decompiled function f__1DD7_020D_0004_0768()
 *
 * @name f__1DD7_020D_0004_0768
 * @implements 1DD7:020D:0004:0768 ()
 *
 * Called From: 1DD7:01F3:0013:AA5A
 */
void f__1DD7_020D_0004_0768()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__1DD7_020B_0002_03A4(); return;
}

/**
 * Decompiled function f__1DD7_0211_0002_00E2()
 *
 * @name f__1DD7_0211_0002_00E2
 * @implements 1DD7:0211:0002:00E2 ()
 *
 * Called From: 1DD7:020B:0002:03A4
 * Called From: 1DD7:020B:0004:0694
 */
void f__1DD7_0211_0002_00E2()
{
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__1DD7_022D_0015_1B0E()
 *
 * @name f__1DD7_022D_0015_1B0E
 * @implements 1DD7:022D:0015:1B0E ()
 *
 * Called From: B483:02DA:000B:0264
 * Called From: B4E9:037B:000C:9261
 * Called From: B4F2:00FA:0014:0DB4
 * Called From: B511:0D65:000C:9261
 * Called From: B511:0FE1:000E:C25C
 */
void f__1DD7_022D_0015_1B0E()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_movw(&emu_ax.x, 0xFF);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0xFF);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x0242); f__1DD7_0248_0014_9863();
	f__1DD7_0242_0006_3882();
}

/**
 * Decompiled function f__1DD7_0242_0006_3882()
 *
 * @name f__1DD7_0242_0006_3882
 * @implements 1DD7:0242:0006:3882 ()
 *
 * Called From: 1DD7:0242:0015:1B0E
 */
void f__1DD7_0242_0006_3882()
{
	emu_addws(&emu_sp, 0x8);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__1DD7_0248_0014_9863()
 *
 * @name f__1DD7_0248_0014_9863
 * @implements 1DD7:0248:0014:9863 ()
 *
 * Called From: 1DD7:023F:0015:1B0E
 */
void f__1DD7_0248_0014_9863()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x4);
	emu_push(emu_si);
	emu_movw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x700A), 0x0);
	if (!emu_flags.zf) { f__1DD7_025C_000A_0358(); return; }
	emu_ip = 0x0396; emu_last_cs = 0x1DD7; emu_last_ip = 0x0259; emu_last_length = 0x0014; emu_last_crc = 0x9863; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__1DD7_025C_000A_0358()
 *
 * @name f__1DD7_025C_000A_0358
 * @implements 1DD7:025C:000A:0358 ()
 *
 * Called From: 1DD7:0257:0014:9863
 */
void f__1DD7_025C_000A_0358()
{
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x6374), 0xFF);
	if (!emu_flags.zf) { emu_ip = 0x0266; emu_last_cs = 0x1DD7; emu_last_ip = 0x0261; emu_last_length = 0x000A; emu_last_crc = 0x0358; emu_call(); return; } // Jump does not resolve
	f__1DD7_0396_0005_04BA(); return;
}

/**
 * Decompiled function f__1DD7_0396_0005_04BA()
 *
 * @name f__1DD7_0396_0005_04BA
 * @implements 1DD7:0396:0005:04BA ()
 *
 * Called From: 1DD7:0263:000A:0358
 */
void f__1DD7_0396_0005_04BA()
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
 * Decompiled function f__1DD7_039B_0008_344E()
 *
 * @name f__1DD7_039B_0008_344E
 * @implements 1DD7:039B:0008:344E ()
 *
 * Called From: 3FF1:0285:0017:744F
 * Called From: B480:0285:0017:744F
 */
void f__1DD7_039B_0008_344E()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_cs); emu_push(0x03A3); emu_cs = 0x2756; f__2756_07DA_0048_EB73();
	f__1DD7_03A3_000D_700D();
}

/**
 * Decompiled function f__1DD7_03A3_000D_700D()
 *
 * @name f__1DD7_03A3_000D_700D
 * @implements 1DD7:03A3:000D:700D ()
 *
 * Called From: 1DD7:03A3:0008:344E
 */
void f__1DD7_03A3_000D_700D()
{
	emu_movw(&emu_ax.x, 0x2BD1);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x6);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x03B0); emu_cs = 0x2756; f__2756_0A81_0022_8379();
	f__1DD7_03B0_0015_4558();
}

/**
 * Decompiled function f__1DD7_03B0_0015_4558()
 *
 * @name f__1DD7_03B0_0015_4558
 * @implements 1DD7:03B0:0015:4558 ()
 *
 * Called From: 1DD7:03B0:000D:700D
 */
void f__1DD7_03B0_0015_4558()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x639C), emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_movw(&emu_dx.x, 0x3C);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x639C));
	emu_push(emu_cs); emu_push(0x03C5); emu_cs = 0x2756; f__2756_0B8F_0025_4377();
	f__1DD7_03C5_000C_8159();
}

/**
 * Decompiled function f__1DD7_03C5_000C_8159()
 *
 * @name f__1DD7_03C5_000C_8159
 * @implements 1DD7:03C5:000C:8159 ()
 *
 * Called From: 1DD7:03C5:0015:4558
 */
void f__1DD7_03C5_000C_8159()
{
	emu_addws(&emu_sp, 0x6);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x639C));
	emu_push(emu_cs); emu_push(0x03D1); emu_cs = 0x2756; f__2756_0A59_0023_EC9F();
	f__1DD7_03D1_0008_3C1E();
}

/**
 * Decompiled function f__1DD7_03D1_0008_3C1E()
 *
 * @name f__1DD7_03D1_0008_3C1E
 * @implements 1DD7:03D1:0008:3C1E ()
 *
 * Called From: 1DD7:03D1:000C:8159
 */
void f__1DD7_03D1_0008_3C1E()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_cs);
	emu_push(0x03D9); f__1DD7_0F43_004A_B846();
	f__1DD7_03D9_000C_55E0();
}

/**
 * Decompiled function f__1DD7_03D9_000C_55E0()
 *
 * @name f__1DD7_03D9_000C_55E0
 * @implements 1DD7:03D9:000C:55E0 ()
 *
 * Called From: 1DD7:03D9:0008:3C1E
 */
void f__1DD7_03D9_000C_55E0()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x6D8D), emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x03E5); f__1DD7_10C9_004D_B414();
	f__1DD7_03E5_000C_5838();
}

/**
 * Decompiled function f__1DD7_03E5_000C_5838()
 *
 * @name f__1DD7_03E5_000C_5838
 * @implements 1DD7:03E5:000C:5838 ()
 *
 * Called From: 1DD7:03E5:000C:55E0
 */
void f__1DD7_03E5_000C_5838()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x6D8B), emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_cs);
	emu_push(0x03F1); f__1DD7_0EE2_003D_7015();
	f__1DD7_03F1_000A_197E();
}

/**
 * Decompiled function f__1DD7_03F1_000A_197E()
 *
 * @name f__1DD7_03F1_000A_197E
 * @implements 1DD7:03F1:000A:197E ()
 *
 * Called From: 1DD7:03F1:000C:5838
 */
void f__1DD7_03F1_000A_197E()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x6D8F), emu_ax.x);
	emu_movw(&emu_ax.x, 0x1);
	f__1DD7_03FB_0002_00E2(); return;
}

/**
 * Decompiled function f__1DD7_03FB_0002_00E2()
 *
 * @name f__1DD7_03FB_0002_00E2
 * @implements 1DD7:03FB:0002:00E2 ()
 *
 * Called From: 1DD7:03F9:000A:197E
 */
void f__1DD7_03FB_0002_00E2()
{
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__1DD7_03FD_000C_36A5()
 *
 * @name f__1DD7_03FD_000C_36A5
 * @implements 1DD7:03FD:000C:36A5 ()
 *
 * Called From: B500:0003:0008:346E
 */
void f__1DD7_03FD_000C_36A5()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x639C));
	emu_push(emu_cs); emu_push(0x0409); emu_cs = 0x2756; f__2756_0827_0035_BC60();
	f__1DD7_0409_000B_5279();
}

/**
 * Decompiled function f__1DD7_0409_000B_5279()
 *
 * @name f__1DD7_0409_000B_5279
 * @implements 1DD7:0409:000B:5279 ()
 *
 * Called From: 1DD7:0409:000C:36A5
 */
void f__1DD7_0409_000B_5279()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x639C), 0xFFFF);
	emu_push(emu_cs);
	emu_push(0x0414); f__1DD7_102C_001E_0F2D();
	f__1DD7_0414_0005_1686();
}

/**
 * Decompiled function f__1DD7_0414_0005_1686()
 *
 * @name f__1DD7_0414_0005_1686
 * @implements 1DD7:0414:0005:1686 ()
 *
 * Called From: 1DD7:0414:000B:5279
 */
void f__1DD7_0414_0005_1686()
{
	emu_push(emu_cs);
	emu_push(0x0419); f__1DD7_11E8_000E_27BA();
	f__1DD7_0419_0005_15E6();
}

/**
 * Decompiled function f__1DD7_0419_0005_15E6()
 *
 * @name f__1DD7_0419_0005_15E6
 * @implements 1DD7:0419:0005:15E6 ()
 *
 * Called From: 1DD7:0419:0005:1686
 */
void f__1DD7_0419_0005_15E6()
{
	emu_push(emu_cs);
	emu_push(0x041E); f__1DD7_0F32_000C_120C();
	f__1DD7_041E_0003_0462();
}

/**
 * Decompiled function f__1DD7_041E_0003_0462()
 *
 * @name f__1DD7_041E_0003_0462
 * @implements 1DD7:041E:0003:0462 ()
 *
 * Called From: 1DD7:041E:0005:15E6
 */
void f__1DD7_041E_0003_0462()
{
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__1DD7_0477_000E_E978()
 *
 * @name f__1DD7_0477_000E_E978
 * @implements 1DD7:0477:000E:E978 ()
 *
 * Called From: 0AEC:0466:0010:AFC6
 * Called From: 10E4:0773:0009:4677
 * Called From: 10E4:0773:0006:0376
 * Called From: B483:03E7:0012:2ABF
 * Called From: B4E9:03D1:000A:1676
 * Called From: B518:0444:000C:1779
 * Called From: B518:04D3:000C:0579
 */
void f__1DD7_0477_000E_E978()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_movw(&emu_ax.x, 0xFF);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x0485); f__1DD7_048A_0017_00D5();
	f__1DD7_0485_0005_15BA();
}

/**
 * Decompiled function f__1DD7_0485_0005_15BA()
 *
 * @name f__1DD7_0485_0005_15BA
 * @implements 1DD7:0485:0005:15BA ()
 *
 * Called From: 1DD7:0485:000E:E978
 */
void f__1DD7_0485_0005_15BA()
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
 * Decompiled function f__1DD7_048A_0017_00D5()
 *
 * @name f__1DD7_048A_0017_00D5
 * @implements 1DD7:048A:0017:00D5 ()
 *
 * Called From: 1DD7:0482:000E:E978
 * Called From: B483:0149:0007:2666
 */
void f__1DD7_048A_0017_00D5()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_di, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_orw(&emu_si, emu_si);
	if ((emu_flags.sf != emu_flags.of)) { f__1DD7_049E_0003_07E6(); return; }
	emu_cmpws(&emu_si, 0x78);
	if ((emu_flags.sf != emu_flags.of)) { f__1DD7_04A1_000F_70C3(); return; }
	emu_ip = 0x05CC; emu_last_cs = 0x1DD7; emu_last_ip = 0x049E; emu_last_length = 0x0017; emu_last_crc = 0x00D5; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__1DD7_049E_0003_07E6()
 *
 * @name f__1DD7_049E_0003_07E6
 * @implements 1DD7:049E:0003:07E6 ()
 *
 * Called From: 1DD7:0497:0017:00D5
 */
void f__1DD7_049E_0003_07E6()
{
	f__1DD7_05CC_0004_07E2(); return;
}

/**
 * Decompiled function f__1DD7_04A1_000F_70C3()
 *
 * @name f__1DD7_04A1_000F_70C3
 * @implements 1DD7:04A1:000F:70C3 ()
 *
 * Called From: 1DD7:049C:0017:00D5
 */
void f__1DD7_04A1_000F_70C3()
{
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x700A), 0x0);
	if (!emu_flags.zf) { f__1DD7_04B0_000A_7594(); return; }
	emu_cmpws(&emu_si, 0x1);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { emu_ip = 0x04B0; emu_last_cs = 0x1DD7; emu_last_ip = 0x04AB; emu_last_length = 0x000F; emu_last_crc = 0x70C3; emu_call(); return; } // Jump does not resolve
	emu_ip = 0x05CC; emu_last_cs = 0x1DD7; emu_last_ip = 0x04AD; emu_last_length = 0x000F; emu_last_crc = 0x70C3; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__1DD7_04B0_000A_7594()
 *
 * @name f__1DD7_04B0_000A_7594
 * @implements 1DD7:04B0:000A:7594 ()
 *
 * Called From: 1DD7:04A6:000F:70C3
 */
void f__1DD7_04B0_000A_7594()
{
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x6302), 0xFF);
	if (!emu_flags.zf) { emu_ip = 0x04BA; emu_last_cs = 0x1DD7; emu_last_ip = 0x04B5; emu_last_length = 0x000A; emu_last_crc = 0x7594; emu_call(); return; } // Jump does not resolve
	f__1DD7_05BD_000B_719F(); return;
}

/**
 * Decompiled function f__1DD7_05BD_000B_719F()
 *
 * @name f__1DD7_05BD_000B_719F
 * @implements 1DD7:05BD:000B:719F ()
 *
 * Called From: 1DD7:04B7:000A:7594
 */
void f__1DD7_05BD_000B_719F()
{
	emu_push(emu_di);
	emu_push(emu_si);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x6302);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x05C8); f__1DD7_1C3C_0020_F0E6();
	f__1DD7_05C8_0008_E662();
}

/**
 * Decompiled function f__1DD7_05C8_0008_E662()
 *
 * @name f__1DD7_05C8_0008_E662
 * @implements 1DD7:05C8:0008:E662 ()
 *
 * Called From: 1DD7:05C8:000B:719F
 */
void f__1DD7_05C8_0008_E662()
{
	emu_addws(&emu_sp, 0x8);
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__1DD7_05CC_0004_07E2()
 *
 * @name f__1DD7_05CC_0004_07E2
 * @implements 1DD7:05CC:0004:07E2 ()
 *
 * Called From: 1DD7:049E:0003:07E6
 */
void f__1DD7_05CC_0004_07E2()
{
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__1DD7_05D0_0014_1313()
 *
 * @name f__1DD7_05D0_0014_1313
 * @implements 1DD7:05D0:0014:1313 ()
 *
 * Called From: B483:030D:001A:8403
 * Called From: B483:0345:001C:23AF
 */
void f__1DD7_05D0_0014_1313()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x10);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x0);
	emu_push(emu_cs);
	emu_push(0x05E4); f__1DD7_09DA_000F_4978();
	f__1DD7_05E4_0014_5999();
}

/**
 * Decompiled function f__1DD7_05E4_0014_5999()
 *
 * @name f__1DD7_05E4_0014_5999
 * @implements 1DD7:05E4:0014:5999 ()
 *
 * Called From: 1DD7:05E4:0014:1313
 */
void f__1DD7_05E4_0014_5999()
{
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x6302), 0xFF);
	if (!emu_flags.zf) { emu_ip = 0x05F8; emu_last_cs = 0x1DD7; emu_last_ip = 0x05EA; emu_last_length = 0x0014; emu_last_crc = 0x5999; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x6310));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x6312));
	if (!emu_flags.zf) { emu_ip = 0x05F8; emu_last_cs = 0x1DD7; emu_last_ip = 0x05F3; emu_last_length = 0x0014; emu_last_crc = 0x5999; emu_call(); return; } // Jump does not resolve
	f__1DD7_0713_0002_0226(); return;
}

/**
 * Decompiled function f__1DD7_06DA_0008_8F8A()
 *
 * @name f__1DD7_06DA_0008_8F8A
 * @implements 1DD7:06DA:0008:8F8A ()
 *
 * Called From: 1DD7:0713:0002:0226
 */
void f__1DD7_06DA_0008_8F8A()
{
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	f__1DD7_0715_0004_0F7A(); return;
}

/**
 * Decompiled function f__1DD7_0713_0002_0226()
 *
 * @name f__1DD7_0713_0002_0226
 * @implements 1DD7:0713:0002:0226 ()
 *
 * Called From: 1DD7:05F5:0014:5999
 */
void f__1DD7_0713_0002_0226()
{
	f__1DD7_06DA_0008_8F8A(); return;
}

/**
 * Decompiled function f__1DD7_0715_0004_0F7A()
 *
 * @name f__1DD7_0715_0004_0F7A
 * @implements 1DD7:0715:0004:0F7A ()
 *
 * Called From: 1DD7:06E0:0008:8F8A
 */
void f__1DD7_0715_0004_0F7A()
{
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__1DD7_0719_0014_11F3()
 *
 * @name f__1DD7_0719_0014_11F3
 * @implements 1DD7:0719:0014:11F3 ()
 *
 * Called From: B483:02F3:0019:EB80
 * Called From: B483:0329:001C:2F2F
 */
void f__1DD7_0719_0014_11F3()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x10);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x0);
	emu_push(emu_cs);
	emu_push(0x072D); f__1DD7_0A7B_001E_024D();
	f__1DD7_072D_0014_6B77();
}

/**
 * Decompiled function f__1DD7_072D_0014_6B77()
 *
 * @name f__1DD7_072D_0014_6B77
 * @implements 1DD7:072D:0014:6B77 ()
 *
 * Called From: 1DD7:072D:0014:11F3
 */
void f__1DD7_072D_0014_6B77()
{
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x6344), 0xFF);
	if (!emu_flags.zf) { emu_ip = 0x0741; emu_last_cs = 0x1DD7; emu_last_ip = 0x0733; emu_last_length = 0x0014; emu_last_crc = 0x6B77; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x6352));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x6354));
	if (!emu_flags.zf) { emu_ip = 0x0741; emu_last_cs = 0x1DD7; emu_last_ip = 0x073C; emu_last_length = 0x0014; emu_last_crc = 0x6B77; emu_call(); return; } // Jump does not resolve
	f__1DD7_0884_0002_0296(); return;
}

/**
 * Decompiled function f__1DD7_0823_0008_8F5A()
 *
 * @name f__1DD7_0823_0008_8F5A
 * @implements 1DD7:0823:0008:8F5A ()
 *
 * Called From: 1DD7:0884:0002:0296
 */
void f__1DD7_0823_0008_8F5A()
{
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	f__1DD7_0886_0004_0F7A(); return;
}

/**
 * Decompiled function f__1DD7_0884_0002_0296()
 *
 * @name f__1DD7_0884_0002_0296
 * @implements 1DD7:0884:0002:0296 ()
 *
 * Called From: 1DD7:073E:0014:6B77
 */
void f__1DD7_0884_0002_0296()
{
	f__1DD7_0823_0008_8F5A(); return;
}

/**
 * Decompiled function f__1DD7_0886_0004_0F7A()
 *
 * @name f__1DD7_0886_0004_0F7A
 * @implements 1DD7:0886:0004:0F7A ()
 *
 * Called From: 1DD7:0829:0008:8F5A
 */
void f__1DD7_0886_0004_0F7A()
{
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__1DD7_088A_0026_2FF6()
 *
 * @name f__1DD7_088A_0026_2FF6
 * @implements 1DD7:088A:0026:2FF6 ()
 *
 * Called From: B4BE:0215:0005:18C6
 */
void f__1DD7_088A_0026_2FF6()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x6);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x0);
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x6344), 0xFF);
	if (emu_flags.zf) { f__1DD7_08C2_0020_7C8C(); return; }
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x636C), 0xFF);
	if (emu_flags.zf) { emu_ip = 0x08C0; emu_last_cs = 0x1DD7; emu_last_ip = 0x08A1; emu_last_length = 0x0026; emu_last_crc = 0x2FF6; emu_call(); return; } // Jump does not resolve
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x636C));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6344));
	emu_push(emu_cs); emu_push(0x08B0); emu_cs = 0x2756; emu_ip = 0x176A; emu_last_cs = 0x1DD7; emu_last_ip = 0x08AB; emu_last_length = 0x0026; emu_last_crc = 0x2FF6; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__1DD7_08BE_0002_03F8()
 *
 * @name f__1DD7_08BE_0002_03F8
 * @implements 1DD7:08BE:0002:03F8 ()
 *
 * Called From: 1DD7:08E8:0005:10F4
 */
void f__1DD7_08BE_0002_03F8()
{
	f__1DD7_08EA_0004_0F7A(); return;
}

/**
 * Decompiled function f__1DD7_08C2_0020_7C8C()
 *
 * @name f__1DD7_08C2_0020_7C8C
 * @implements 1DD7:08C2:0020:7C8C ()
 *
 * Called From: 1DD7:089A:0026:2FF6
 */
void f__1DD7_08C2_0020_7C8C()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x6352));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x6354));
	if (emu_flags.zf) { f__1DD7_08E5_0005_10F4(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x6354));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x6352));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_dx.x);
	emu_movw(&emu_ax.x, 0x0);
	emu_movw(&emu_bx.x, 0x7);
	emu_pushf();

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_ss, emu_bp, -0x6);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_push(0x08E2);
	switch ((emu_cs << 16) + emu_ip) {
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x1DD7; emu_last_ip = 0x08DF; emu_last_length = 0x0020; emu_last_crc = 0x7C8C;
			emu_call();
			return;
	}
	emu_unknown_call();
}

/**
 * Decompiled function f__1DD7_08E5_0005_10F4()
 *
 * @name f__1DD7_08E5_0005_10F4
 * @implements 1DD7:08E5:0005:10F4 ()
 *
 * Called From: 1DD7:08C9:0020:7C8C
 */
void f__1DD7_08E5_0005_10F4()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	f__1DD7_08BE_0002_03F8(); return;
}

/**
 * Decompiled function f__1DD7_08EA_0004_0F7A()
 *
 * @name f__1DD7_08EA_0004_0F7A
 * @implements 1DD7:08EA:0004:0F7A ()
 *
 * Called From: 1DD7:08BE:0002:03F8
 */
void f__1DD7_08EA_0004_0F7A()
{
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__1DD7_08EE_000E_E978()
 *
 * @name f__1DD7_08EE_000E_E978
 * @implements 1DD7:08EE:000E:E978 ()
 *
 * Called From: B483:035A:0012:1089
 * Called From: B483:035A:0015:0CC9
 */
void f__1DD7_08EE_000E_E978()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_movw(&emu_ax.x, 0xFF);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x08FC); f__1DD7_0901_001E_C68C();
	f__1DD7_08FC_0005_15BA();
}

/**
 * Decompiled function f__1DD7_08FC_0005_15BA()
 *
 * @name f__1DD7_08FC_0005_15BA
 * @implements 1DD7:08FC:0005:15BA ()
 *
 * Called From: 1DD7:08FC:000E:E978
 */
void f__1DD7_08FC_0005_15BA()
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
 * Decompiled function f__1DD7_0901_001E_C68C()
 *
 * @name f__1DD7_0901_001E_C68C
 * @implements 1DD7:0901:001E:C68C ()
 *
 * Called From: 1DD7:08F9:000E:E978
 */
void f__1DD7_0901_001E_C68C()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_di, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_orw(&emu_si, emu_si);
	if ((emu_flags.sf != emu_flags.of)) { emu_ip = 0x091C; emu_last_cs = 0x1DD7; emu_last_ip = 0x090E; emu_last_length = 0x001E; emu_last_crc = 0xC68C; emu_call(); return; } // Jump does not resolve
	emu_cmpws(&emu_si, 0x78);
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { emu_ip = 0x091C; emu_last_cs = 0x1DD7; emu_last_ip = 0x0913; emu_last_length = 0x001E; emu_last_crc = 0xC68C; emu_call(); return; } // Jump does not resolve
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x700C), 0x0);
	if (!emu_flags.zf) { f__1DD7_091F_000A_31CE(); return; }
	emu_ip = 0x09D6; emu_last_cs = 0x1DD7; emu_last_ip = 0x091C; emu_last_length = 0x001E; emu_last_crc = 0xC68C; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__1DD7_091F_000A_31CE()
 *
 * @name f__1DD7_091F_000A_31CE
 * @implements 1DD7:091F:000A:31CE ()
 *
 * Called From: 1DD7:091A:001E:C68C
 */
void f__1DD7_091F_000A_31CE()
{
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x6344), 0xFF);
	if (!emu_flags.zf) { emu_ip = 0x0929; emu_last_cs = 0x1DD7; emu_last_ip = 0x0924; emu_last_length = 0x000A; emu_last_crc = 0x31CE; emu_call(); return; } // Jump does not resolve
	f__1DD7_09BE_0014_EBCF(); return;
}

/**
 * Decompiled function f__1DD7_09BE_0014_EBCF()
 *
 * @name f__1DD7_09BE_0014_EBCF
 * @implements 1DD7:09BE:0014:EBCF ()
 *
 * Called From: 1DD7:0926:000A:31CE
 */
void f__1DD7_09BE_0014_EBCF()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x6352));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x6354));
	if (emu_flags.zf) { f__1DD7_09D6_0004_07E2(); return; }
	emu_push(emu_di);
	emu_push(emu_si);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x6344);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x09D2); emu_ip = 0x1C3C; emu_last_cs = 0x1DD7; emu_last_ip = 0x09CF; emu_last_length = 0x0014; emu_last_crc = 0xEBCF; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__1DD7_09D6_0004_07E2()
 *
 * @name f__1DD7_09D6_0004_07E2
 * @implements 1DD7:09D6:0004:07E2 ()
 *
 * Called From: 1DD7:09C5:0014:EBCF
 */
void f__1DD7_09D6_0004_07E2()
{
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__1DD7_09DA_000F_4978()
 *
 * @name f__1DD7_09DA_000F_4978
 * @implements 1DD7:09DA:000F:4978 ()
 *
 * Called From: 1DD7:05E1:0014:1313
 */
void f__1DD7_09DA_000F_4978()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_si);
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x6302), 0xFF);
	if (emu_flags.zf) { f__1DD7_0A40_001D_15E9(); return; }
	emu_xorw(&emu_si, emu_si);
	emu_ip = 0x0A39; emu_last_cs = 0x1DD7; emu_last_ip = 0x09E7; emu_last_length = 0x000F; emu_last_crc = 0x4978; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__1DD7_0A40_001D_15E9()
 *
 * @name f__1DD7_0A40_001D_15E9
 * @implements 1DD7:0A40:001D:15E9 ()
 *
 * Called From: 1DD7:09E3:000F:4978
 */
void f__1DD7_0A40_001D_15E9()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x6310));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x6312));
	if (emu_flags.zf) { f__1DD7_0A78_0003_0212(); return; }
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x6372), 0xFF);
	if (emu_flags.zf) { emu_ip = 0x0A65; emu_last_cs = 0x1DD7; emu_last_ip = 0x0A4E; emu_last_length = 0x001D; emu_last_crc = 0x15E9; emu_call(); return; } // Jump does not resolve
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6372));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6344));
	emu_push(emu_cs); emu_push(0x0A5D); emu_cs = 0x2756; emu_ip = 0x1983; emu_last_cs = 0x1DD7; emu_last_ip = 0x0A58; emu_last_length = 0x001D; emu_last_crc = 0x15E9; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__1DD7_0A78_0003_0212()
 *
 * @name f__1DD7_0A78_0003_0212
 * @implements 1DD7:0A78:0003:0212 ()
 *
 * Called From: 1DD7:0A47:001D:15E9
 */
void f__1DD7_0A78_0003_0212()
{
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__1DD7_0A7B_001E_024D()
 *
 * @name f__1DD7_0A7B_001E_024D
 * @implements 1DD7:0A7B:001E:024D ()
 *
 * Called From: 1DD7:072A:0014:11F3
 * Called From: B483:02CF:001D:8D5E
 */
void f__1DD7_0A7B_001E_024D()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x6344), 0xFF);
	if (emu_flags.zf) { f__1DD7_0AB2_0018_D0BA(); return; }
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x636C), 0xFF);
	if (emu_flags.zf) { emu_ip = 0x0AB0; emu_last_cs = 0x1DD7; emu_last_ip = 0x0A8A; emu_last_length = 0x001E; emu_last_crc = 0x024D; emu_call(); return; } // Jump does not resolve
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x636C));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6344));
	emu_push(emu_cs); emu_push(0x0A99); emu_cs = 0x2756; emu_ip = 0x1947; emu_last_cs = 0x1DD7; emu_last_ip = 0x0A94; emu_last_length = 0x001E; emu_last_crc = 0x024D; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__1DD7_0AB2_0018_D0BA()
 *
 * @name f__1DD7_0AB2_0018_D0BA
 * @implements 1DD7:0AB2:0018:D0BA ()
 *
 * Called From: 1DD7:0A83:001E:024D
 */
void f__1DD7_0AB2_0018_D0BA()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x6352));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x6354));
	if (emu_flags.zf) { f__1DD7_0ACE_0002_00E2(); return; }
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x6344);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x0ACA); emu_ip = 0x1C3C; emu_last_cs = 0x1DD7; emu_last_ip = 0x0AC7; emu_last_length = 0x0018; emu_last_crc = 0xD0BA; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__1DD7_0ACE_0002_00E2()
 *
 * @name f__1DD7_0ACE_0002_00E2
 * @implements 1DD7:0ACE:0002:00E2 ()
 *
 * Called From: 1DD7:0AB9:0018:D0BA
 */
void f__1DD7_0ACE_0002_00E2()
{
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__1DD7_0B53_0025_71E0()
 *
 * @name f__1DD7_0B53_0025_71E0
 * @implements 1DD7:0B53:0025:71E0 ()
 *
 * Called From: B4B8:1C5C:0005:154E
 * Called From: B4BE:0069:0005:154E
 * Called From: B4F2:0241:000C:1C48
 * Called From: B503:0500:0005:154E
 * Called From: B511:0E23:000C:790A
 * Called From: B511:1436:0019:35CB
 * Called From: B518:054D:0006:030E
 */
void f__1DD7_0B53_0025_71E0()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x6344), 0xFF);
	if (emu_flags.zf) { f__1DD7_0B7D_0019_C5A8(); return; }
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x636C), 0xFF);
	if (emu_flags.zf) { emu_ip = 0x0B7B; emu_last_cs = 0x1DD7; emu_last_ip = 0x0B62; emu_last_length = 0x0025; emu_last_crc = 0x71E0; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, 0x7D0);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x636C));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6344));
	emu_push(emu_cs); emu_push(0x0B78); emu_cs = 0x2756; emu_ip = 0x1A44; emu_last_cs = 0x1DD7; emu_last_ip = 0x0B73; emu_last_length = 0x0025; emu_last_crc = 0x71E0; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__1DD7_0B7D_0019_C5A8()
 *
 * @name f__1DD7_0B7D_0019_C5A8
 * @implements 1DD7:0B7D:0019:C5A8 ()
 *
 * Called From: 1DD7:0B5B:0025:71E0
 */
void f__1DD7_0B7D_0019_C5A8()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x6352));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x6354));
	if (emu_flags.zf) { f__1DD7_0B9A_0002_00E2(); return; }
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x6344);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x0B96); emu_ip = 0x1C3C; emu_last_cs = 0x1DD7; emu_last_ip = 0x0B93; emu_last_length = 0x0019; emu_last_crc = 0xC5A8; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__1DD7_0B9A_0002_00E2()
 *
 * @name f__1DD7_0B9A_0002_00E2
 * @implements 1DD7:0B9A:0002:00E2 ()
 *
 * Called From: 1DD7:0B84:0019:C5A8
 */
void f__1DD7_0B9A_0002_00E2()
{
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__1DD7_0EE2_003D_7015()
 *
 * @name f__1DD7_0EE2_003D_7015
 * @implements 1DD7:0EE2:003D:7015 ()
 *
 * Called From: 1DD7:03EE:000C:5838
 */
void f__1DD7_0EE2_003D_7015()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x4);
	emu_push(emu_si);
	emu_movw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_bx.x, emu_si);
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, emu_bx.x,  0x63AC));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, emu_bx.x,  0x63AA));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_dx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_flags.zf) { f__1DD7_0F29_0004_0D2C(); return; }
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x656E);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x6374);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs);
	emu_push(0x0F1F); emu_ip = 0x12CE; emu_last_cs = 0x1DD7; emu_last_ip = 0x0F1C; emu_last_length = 0x003D; emu_last_crc = 0x7015; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__1DD7_0F29_0004_0D2C()
 *
 * @name f__1DD7_0F29_0004_0D2C
 * @implements 1DD7:0F29:0004:0D2C ()
 *
 * Called From: 1DD7:0F06:003D:7015
 */
void f__1DD7_0F29_0004_0D2C()
{
	emu_movw(&emu_ax.x, emu_si);
	f__1DD7_0F2D_0005_04BA(); return;
}

/**
 * Decompiled function f__1DD7_0F2D_0005_04BA()
 *
 * @name f__1DD7_0F2D_0005_04BA
 * @implements 1DD7:0F2D:0005:04BA ()
 *
 * Called From: 1DD7:0F2B:0004:0D2C
 */
void f__1DD7_0F2D_0005_04BA()
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
 * Decompiled function f__1DD7_0F32_000C_120C()
 *
 * @name f__1DD7_0F32_000C_120C
 * @implements 1DD7:0F32:000C:120C ()
 *
 * Called From: 1DD7:041B:0005:15E6
 */
void f__1DD7_0F32_000C_120C()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x6374);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x0F3E); f__1DD7_1696_0011_6CF3();
	f__1DD7_0F3E_0005_15BA();
}

/**
 * Decompiled function f__1DD7_0F3E_0005_15BA()
 *
 * @name f__1DD7_0F3E_0005_15BA
 * @implements 1DD7:0F3E:0005:15BA ()
 *
 * Called From: 1DD7:0F3E:000C:120C
 */
void f__1DD7_0F3E_0005_15BA()
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
 * Decompiled function f__1DD7_0F43_004A_B846()
 *
 * @name f__1DD7_0F43_004A_B846
 * @implements 1DD7:0F43:004A:B846 ()
 *
 * Called From: 1DD7:03D6:0008:3C1E
 */
void f__1DD7_0F43_004A_B846()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x8);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_si);
	emu_movw(&emu_dx.x, 0xC);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, emu_bx.x,  0x63D0));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax.x);
	emu_movw(&emu_ax.x, emu_si);
	emu_movw(&emu_dx.x, 0xC);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_di, emu_get_memory16(emu_ds, emu_bx.x,  0x63CE));
	emu_movw(&emu_ax.x, emu_si);
	emu_movw(&emu_dx.x, 0xC);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, emu_bx.x,  0x63C8));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, emu_bx.x,  0x63C6));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_dx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (!emu_flags.zf) { emu_ip = 0x0F8D; emu_last_cs = 0x1DD7; emu_last_ip = 0x0F88; emu_last_length = 0x004A; emu_last_crc = 0xB846; emu_call(); return; } // Jump does not resolve
	f__1DD7_1024_0002_0224(); return;
}

/**
 * Decompiled function f__1DD7_0FEA_0004_0D5C()
 *
 * @name f__1DD7_0FEA_0004_0D5C
 * @implements 1DD7:0FEA:0004:0D5C ()
 *
 * Called From: 1DD7:1024:0002:0224
 */
void f__1DD7_0FEA_0004_0D5C()
{
	emu_movw(&emu_ax.x, emu_si);
	f__1DD7_1026_0006_137A(); return;
}

/**
 * Decompiled function f__1DD7_1024_0002_0224()
 *
 * @name f__1DD7_1024_0002_0224
 * @implements 1DD7:1024:0002:0224 ()
 *
 * Called From: 1DD7:0F8A:004A:B846
 */
void f__1DD7_1024_0002_0224()
{
	f__1DD7_0FEA_0004_0D5C(); return;
}

/**
 * Decompiled function f__1DD7_1026_0006_137A()
 *
 * @name f__1DD7_1026_0006_137A
 * @implements 1DD7:1026:0006:137A ()
 *
 * Called From: 1DD7:0FEC:0004:0D5C
 */
void f__1DD7_1026_0006_137A()
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
 * Decompiled function f__1DD7_102C_001E_0F2D()
 *
 * @name f__1DD7_102C_001E_0F2D
 * @implements 1DD7:102C:001E:0F2D ()
 *
 * Called From: 1DD7:0411:000B:5279
 */
void f__1DD7_102C_001E_0F2D()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x6344), 0xFF);
	if (emu_flags.zf) { f__1DD7_107C_003F_42BD(); return; }
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x636C), 0xFF);
	if (emu_flags.zf) { emu_ip = 0x1061; emu_last_cs = 0x1DD7; emu_last_ip = 0x103B; emu_last_length = 0x001E; emu_last_crc = 0x0F2D; emu_call(); return; } // Jump does not resolve
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x636C));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6344));
	emu_push(emu_cs); emu_push(0x104A); emu_cs = 0x2756; emu_ip = 0x1EF8; emu_last_cs = 0x1DD7; emu_last_ip = 0x1045; emu_last_length = 0x001E; emu_last_crc = 0x0F2D; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__1DD7_107C_003F_42BD()
 *
 * @name f__1DD7_107C_003F_42BD
 * @implements 1DD7:107C:003F:42BD ()
 *
 * Called From: 1DD7:1034:001E:0F2D
 */
void f__1DD7_107C_003F_42BD()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x6354));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x6352));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x6312));
	if (!emu_flags.zf) { emu_ip = 0x10BB; emu_last_cs = 0x1DD7; emu_last_ip = 0x1087; emu_last_length = 0x003F; emu_last_crc = 0x42BD; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x6310));
	if (!emu_flags.zf) { emu_ip = 0x10BB; emu_last_cs = 0x1DD7; emu_last_ip = 0x108D; emu_last_length = 0x003F; emu_last_crc = 0x42BD; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x6354), 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x6352), 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x6358), 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x6356), 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x6348), 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x6346), 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x6368), 0xFFFF);
	f__1DD7_10C7_0002_00E2(); return;
}

/**
 * Decompiled function f__1DD7_10C7_0002_00E2()
 *
 * @name f__1DD7_10C7_0002_00E2
 * @implements 1DD7:10C7:0002:00E2 ()
 *
 * Called From: 1DD7:10B9:003F:42BD
 */
void f__1DD7_10C7_0002_00E2()
{
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__1DD7_10C9_004D_B414()
 *
 * @name f__1DD7_10C9_004D_B414
 * @implements 1DD7:10C9:004D:B414 ()
 *
 * Called From: 1DD7:03E2:000C:55E0
 */
void f__1DD7_10C9_004D_B414()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0xA);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_si);
	emu_movw(&emu_dx.x, 0xC);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, emu_bx.x,  0x6478));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_ax.x);
	emu_movw(&emu_ax.x, emu_si);
	emu_movw(&emu_dx.x, 0xC);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, emu_bx.x,  0x6476));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax.x);
	emu_movw(&emu_ax.x, emu_si);
	emu_movw(&emu_dx.x, 0xC);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, emu_bx.x,  0x6470));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, emu_bx.x,  0x646E));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_dx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (!emu_flags.zf) { emu_ip = 0x1116; emu_last_cs = 0x1DD7; emu_last_ip = 0x1111; emu_last_length = 0x004D; emu_last_crc = 0xB414; emu_call(); return; } // Jump does not resolve
	f__1DD7_11E0_0002_028A(); return;
}

/**
 * Decompiled function f__1DD7_1175_0004_0DFE()
 *
 * @name f__1DD7_1175_0004_0DFE
 * @implements 1DD7:1175:0004:0DFE ()
 *
 * Called From: 1DD7:11E0:0002:028A
 */
void f__1DD7_1175_0004_0DFE()
{
	emu_movw(&emu_ax.x, emu_si);
	f__1DD7_11E2_0006_137A(); return;
}

/**
 * Decompiled function f__1DD7_11E0_0002_028A()
 *
 * @name f__1DD7_11E0_0002_028A
 * @implements 1DD7:11E0:0002:028A ()
 *
 * Called From: 1DD7:1113:004D:B414
 */
void f__1DD7_11E0_0002_028A()
{
	f__1DD7_1175_0004_0DFE(); return;
}

/**
 * Decompiled function f__1DD7_11E2_0006_137A()
 *
 * @name f__1DD7_11E2_0006_137A
 * @implements 1DD7:11E2:0006:137A ()
 *
 * Called From: 1DD7:1177:0004:0DFE
 */
void f__1DD7_11E2_0006_137A()
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
 * Decompiled function f__1DD7_11E8_000E_27BA()
 *
 * @name f__1DD7_11E8_000E_27BA
 * @implements 1DD7:11E8:000E:27BA ()
 *
 * Called From: 1DD7:0416:0005:1686
 */
void f__1DD7_11E8_000E_27BA()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_si);
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x6302), 0xFF);
	if (!emu_flags.zf) { emu_ip = 0x11F6; emu_last_cs = 0x1DD7; emu_last_ip = 0x11F1; emu_last_length = 0x000E; emu_last_crc = 0x27BA; emu_call(); return; } // Jump does not resolve
	f__1DD7_1280_003F_AE33(); return;
}

/**
 * Decompiled function f__1DD7_1280_003F_AE33()
 *
 * @name f__1DD7_1280_003F_AE33
 * @implements 1DD7:1280:003F:AE33 ()
 *
 * Called From: 1DD7:11F3:000E:27BA
 */
void f__1DD7_1280_003F_AE33()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x6354));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x6352));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x6312));
	if (!emu_flags.zf) { emu_ip = 0x12BF; emu_last_cs = 0x1DD7; emu_last_ip = 0x128B; emu_last_length = 0x003F; emu_last_crc = 0xAE33; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x6310));
	if (!emu_flags.zf) { emu_ip = 0x12BF; emu_last_cs = 0x1DD7; emu_last_ip = 0x1291; emu_last_length = 0x003F; emu_last_crc = 0xAE33; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x6312), 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x6310), 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x6316), 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x6314), 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x6306), 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x6304), 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x6326), 0xFFFF);
	f__1DD7_12CB_0003_0212(); return;
}

/**
 * Decompiled function f__1DD7_12CB_0003_0212()
 *
 * @name f__1DD7_12CB_0003_0212
 * @implements 1DD7:12CB:0003:0212 ()
 *
 * Called From: 1DD7:12BD:003F:AE33
 */
void f__1DD7_12CB_0003_0212()
{
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__1DD7_1696_0011_6CF3()
 *
 * @name f__1DD7_1696_0011_6CF3
 * @implements 1DD7:1696:0011:6CF3 ()
 *
 * Called From: 1DD7:0F3B:000C:120C
 */
void f__1DD7_1696_0011_6CF3()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x4);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (!emu_flags.zf) { f__1DD7_16A7_0016_E630(); return; }
	emu_ip = 0x1778; emu_last_cs = 0x1DD7; emu_last_ip = 0x16A4; emu_last_length = 0x0011; emu_last_crc = 0x6CF3; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__1DD7_16A7_0016_E630()
 *
 * @name f__1DD7_16A7_0016_E630
 * @implements 1DD7:16A7:0016:E630 ()
 *
 * Called From: 1DD7:16A2:0011:6CF3
 */
void f__1DD7_16A7_0016_E630()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x24), 0xFF);
	if (emu_flags.zf) { f__1DD7_16D4_0029_FAEB(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x24));
	emu_push(emu_cs); emu_push(0x16BD); emu_cs = 0x2756; emu_ip = 0x2206; emu_last_cs = 0x1DD7; emu_last_ip = 0x16B8; emu_last_length = 0x0016; emu_last_crc = 0xE630; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__1DD7_16D4_0029_FAEB()
 *
 * @name f__1DD7_16D4_0029_FAEB
 * @implements 1DD7:16D4:0029:FAEB ()
 *
 * Called From: 1DD7:16AF:0016:E630
 */
void f__1DD7_16D4_0029_FAEB()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x0), 0xFF);
	if (!emu_flags.zf) { emu_ip = 0x16FF; emu_last_cs = 0x1DD7; emu_last_ip = 0x16DB; emu_last_length = 0x0029; emu_last_crc = 0xFAEB; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x10));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_es, emu_bx.x,  0xE));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_dx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_flags.zf) { f__1DD7_16FD_0002_03FC(); return; }
	emu_movw(&emu_bx.x, 0x3);
	emu_pushf();

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_ss, emu_bp, -0x2);
	emu_push(0x16FD);
	switch ((emu_cs << 16) + emu_ip) {
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x1DD7; emu_last_ip = 0x16FA; emu_last_length = 0x0029; emu_last_crc = 0xFAEB;
			emu_call();
			return;
	}
	f__1DD7_16FD_0002_03FC();
}

/**
 * Decompiled function f__1DD7_16FD_0002_03FC()
 *
 * @name f__1DD7_16FD_0002_03FC
 * @implements 1DD7:16FD:0002:03FC ()
 *
 * Called From: 1DD7:16F4:0029:FAEB
 */
void f__1DD7_16FD_0002_03FC()
{
	f__1DD7_1727_0010_DF48(); return;
}

/**
 * Decompiled function f__1DD7_1727_0010_DF48()
 *
 * @name f__1DD7_1727_0010_DF48
 * @implements 1DD7:1727:0010:DF48 ()
 *
 * Called From: 1DD7:16FD:0002:03FC
 */
void f__1DD7_1727_0010_DF48()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x10));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xE));
	emu_push(emu_cs); emu_push(0x1737); emu_cs = 0x23E1; f__23E1_01C2_0011_4E4B();
	f__1DD7_1737_0012_C99E();
}

/**
 * Decompiled function f__1DD7_1737_0012_C99E()
 *
 * @name f__1DD7_1737_0012_C99E
 * @implements 1DD7:1737:0012:C99E ()
 *
 * Called From: 1DD7:1737:0010:DF48
 */
void f__1DD7_1737_0012_C99E()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x14));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x12));
	emu_push(emu_cs); emu_push(0x1749); emu_cs = 0x23E1; f__23E1_01C2_0011_4E4B();
	f__1DD7_1749_0033_F496();
}

/**
 * Decompiled function f__1DD7_1749_0033_F496()
 *
 * @name f__1DD7_1749_0033_F496
 * @implements 1DD7:1749:0033:F496 ()
 *
 * Called From: 1DD7:1749:0012:C99E
 */
void f__1DD7_1749_0033_F496()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x14), 0x0);
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x12), 0x0);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x10), 0x0);
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0xE), 0x0);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), 0x0);
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x2), 0x0);
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__1DD7_1C3C_0020_F0E6()
 *
 * @name f__1DD7_1C3C_0020_F0E6
 * @implements 1DD7:1C3C:0020:F0E6 ()
 *
 * Called From: 1DD7:05C5:000B:719F
 */
void f__1DD7_1C3C_0020_F0E6()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x8);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x10));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_es, emu_bx.x,  0xE));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_dx.x);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0xA), 0xFF);
	if (!emu_flags.zf) { f__1DD7_1C5C_000B_AB36(); return; }
	emu_ip = 0x1DE1; emu_last_cs = 0x1DD7; emu_last_ip = 0x1C59; emu_last_length = 0x0020; emu_last_crc = 0xF0E6; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__1DD7_1C5C_000B_AB36()
 *
 * @name f__1DD7_1C5C_000B_AB36
 * @implements 1DD7:1C5C:000B:AB36 ()
 *
 * Called From: 1DD7:1C57:0020:F0E6
 */
void f__1DD7_1C5C_000B_AB36()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	if (!emu_flags.zf) { emu_ip = 0x1C67; emu_last_cs = 0x1DD7; emu_last_ip = 0x1C62; emu_last_length = 0x000B; emu_last_crc = 0xAB36; emu_call(); return; } // Jump does not resolve
	f__1DD7_1DE1_0004_0F7A(); return;
}

/**
 * Decompiled function f__1DD7_1DE1_0004_0F7A()
 *
 * @name f__1DD7_1DE1_0004_0F7A
 * @implements 1DD7:1DE1:0004:0F7A ()
 *
 * Called From: 1DD7:1C64:000B:AB36
 */
void f__1DD7_1DE1_0004_0F7A()
{
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

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
 * Called From: 3483:0020:0002:0000
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
 * Called From: 34AE:0000:0002:0000
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
 * Called From: 34CD:0000:0002:0000
 * Called From: 34CD:0057:0002:0000
 * Called From: 34CD:005C:0002:0000
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
 * Called From: 3536:0039:0002:0000
 * Called From: 353B:0020:0002:0000
 * Called From: 353B:002F:0002:0000
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
	emu_incb(&emu_get_memory8(emu_ds, 0x00,  0x986C));
	emu_movw(&emu_ax.x, 0x33F4);
	emu_movw(&emu_es, emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_es, 0x00,  0x128), 0xFF);
	if (emu_flags.zf) { f__261F_003C_000E_672A(); return; }
	emu_movw(&emu_ax.x, 0x33F4);
	emu_movw(&emu_es, emu_ax.x);
	emu_push(emu_get_memory16(emu_es, 0x00,  0x128));
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x003B); emu_cs = 0x01F7; emu_ip = 0x23CC; emu_last_cs = 0x261F; emu_last_ip = 0x0036; emu_last_length = 0x0033; emu_last_crc = 0x66ED; emu_call();
	/* Unresolved jump */ emu_ip = 0x003B; emu_last_cs = 0x261F; emu_last_ip = 0x003B; emu_last_length = 0x0033; emu_last_crc = 0x66ED; emu_call();
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
	if (emu_flags.zf) { f__261F_0058_0005_44EF(); return; }
	f__261F_0168_001D_22F4(); return;
}

/**
 * Decompiled function f__261F_0058_0005_44EF()
 *
 * @name f__261F_0058_0005_44EF
 * @implements 261F:0058:0005:44EF ()
 *
 * Called From: 261F:0053:000E:FD7C
 */
void f__261F_0058_0005_44EF()
{
	emu_push(emu_cs); emu_push(0x005D); emu_cs = 0x01F7; f__01F7_0428_0010_87B4();
	f__261F_005D_0005_B7B6();
}

/**
 * Decompiled function f__261F_005D_0005_B7B6()
 *
 * @name f__261F_005D_0005_B7B6
 * @implements 261F:005D:0005:B7B6 ()
 *
 * Called From: 261F:005D:0005:44EF
 */
void f__261F_005D_0005_B7B6()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax.x);
	f__261F_007B_000D_15ED(); return;
}

/**
 * Decompiled function f__261F_0062_0010_F80A()
 *
 * @name f__261F_0062_0010_F80A
 * @implements 261F:0062:0010:F80A ()
 *
 * Called From: 261F:0091:0016:3265
 */
void f__261F_0062_0010_F80A()
{
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x9A));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x98));
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_ds, 0x00,  0x6C80);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_ds, 0x00,  0x6C82);
	emu_push(0x0072);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x353B0020: ovl__353B(0); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x261F; emu_last_ip = 0x006E; emu_last_length = 0x0010; emu_last_crc = 0xF80A;
			emu_call();
			return;
	}
	/* Unresolved jump */ emu_ip = 0x0072; emu_last_cs = 0x261F; emu_last_ip = 0x0072; emu_last_length = 0x0010; emu_last_crc = 0xF80A; emu_call();
}

/**
 * Decompiled function f__261F_007B_000D_15ED()
 *
 * @name f__261F_007B_000D_15ED
 * @implements 261F:007B:000D:15ED ()
 *
 * Called From: 261F:0060:0005:B7B6
 */
void f__261F_007B_000D_15ED()
{
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x9A));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x98));
	emu_push(emu_cs); emu_push(0x0088); emu_cs = 0x1FB5; f__1FB5_15B5_0015_6A00();
	f__261F_0088_0016_3265();
}

/**
 * Decompiled function f__261F_0088_0016_3265()
 *
 * @name f__261F_0088_0016_3265
 * @implements 261F:0088:0016:3265 ()
 *
 * Called From: 261F:0088:000D:15ED
 */
void f__261F_0088_0016_3265()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x0);
	if (emu_flags.zf) { f__261F_0062_0010_F80A(); return; }
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x0);
	if (!emu_flags.zf) { f__261F_00A8_000E_768E(); return; }
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x009E); emu_cs = 0x3500; emu_ip = 0x0020; emu_last_cs = 0x261F; emu_last_ip = 0x0099; emu_last_length = 0x0016; emu_last_crc = 0x3265; emu_call();
	/* Unresolved jump */ emu_ip = 0x009E; emu_last_cs = 0x261F; emu_last_ip = 0x009E; emu_last_length = 0x0016; emu_last_crc = 0x3265; emu_call();
}

/**
 * Decompiled function f__261F_00A8_000E_768E()
 *
 * @name f__261F_00A8_000E_768E
 * @implements 261F:00A8:000E:768E ()
 *
 * Called From: 261F:0097:0016:3265
 */
void f__261F_00A8_000E_768E()
{
	emu_movw(&emu_ax.x, 0x50);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x9882);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x00B6); emu_cs = 0x01F7; f__01F7_276F_000F_E56B();
	f__261F_00B6_0017_107E();
}

/**
 * Decompiled function f__261F_00B6_0017_107E()
 *
 * @name f__261F_00B6_0017_107E
 * @implements 261F:00B6:0017:107E ()
 *
 * Called From: 261F:00B6:000E:768E
 */
void f__261F_00B6_0017_107E()
{
	emu_addws(&emu_sp, 0x6);
	emu_orw(&emu_ax.x, emu_dx.x);
	if (!emu_flags.zf) { f__261F_00DF_000A_57AA(); return; }
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x9A));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x98));
	emu_movw(&emu_ax.x, 0xC);
	emu_push(emu_ax.x);

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_ds, 0x00,  0x6C80);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_ds, 0x00,  0x6C82);
	emu_push(0x00CD);
	switch ((emu_cs << 16) + emu_ip) {
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x261F; emu_last_ip = 0x00C9; emu_last_length = 0x0017; emu_last_crc = 0x107E;
			emu_call();
			return;
	}
	/* Unresolved jump */ emu_ip = 0x00CD; emu_last_cs = 0x261F; emu_last_ip = 0x00CD; emu_last_length = 0x0017; emu_last_crc = 0x107E; emu_call();
}

/**
 * Decompiled function f__261F_00DF_000A_57AA()
 *
 * @name f__261F_00DF_000A_57AA
 * @implements 261F:00DF:000A:57AA ()
 *
 * Called From: 261F:00BB:0017:107E
 */
void f__261F_00DF_000A_57AA()
{
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x9882);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x00E9); emu_cs = 0x01F7; f__01F7_39A5_001F_1A5D();
	f__261F_00E9_001B_0FA7();
}

/**
 * Decompiled function f__261F_00E9_001B_0FA7()
 *
 * @name f__261F_00E9_001B_0FA7
 * @implements 261F:00E9:001B:0FA7 ()
 *
 * Called From: 261F:00E9:000A:57AA
 */
void f__261F_00E9_001B_0FA7()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_decw(&emu_ax.x);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_cmpb(&emu_get_memory8(emu_ds, emu_bx.x,  0x9882), 0x5C);
	if (emu_flags.zf) { f__261F_0107_0012_C65C(); return; }
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x6E24);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x9882);
	emu_push(emu_ax.x);
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x0104); emu_cs = 0x01F7; emu_ip = 0x384A; emu_last_cs = 0x261F; emu_last_ip = 0x00FF; emu_last_length = 0x001B; emu_last_crc = 0x0FA7; emu_call();
	/* Unresolved jump */ emu_ip = 0x0104; emu_last_cs = 0x261F; emu_last_ip = 0x0104; emu_last_length = 0x001B; emu_last_crc = 0x0FA7; emu_call();
}

/**
 * Decompiled function f__261F_0107_0012_C65C()
 *
 * @name f__261F_0107_0012_C65C
 * @implements 261F:0107:0012:C65C ()
 *
 * Called From: 261F:00F3:001B:0FA7
 */
void f__261F_0107_0012_C65C()
{
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x9A));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x98));
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x9882);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0119); emu_cs = 0x01F7; f__01F7_384A_003F_AE43();
	f__261F_0119_0011_366E();
}

/**
 * Decompiled function f__261F_0119_0011_366E()
 *
 * @name f__261F_0119_0011_366E
 * @implements 261F:0119:0011:366E ()
 *
 * Called From: 261F:0119:0012:C65C
 */
void f__261F_0119_0011_366E()
{
	emu_addws(&emu_sp, 0x8);
	emu_movw(&emu_ax.x, 0x8001);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x9882);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x012A); emu_cs = 0x01F7; f__01F7_2A06_002A_9A90();
	f__261F_012A_0021_FC59();
}

/**
 * Decompiled function f__261F_012A_0021_FC59()
 *
 * @name f__261F_012A_0021_FC59
 * @implements 261F:012A:0021:FC59 ()
 *
 * Called From: 261F:012A:0011:366E
 */
void f__261F_012A_0021_FC59()
{
	emu_addws(&emu_sp, 0x6);
	emu_movw(&emu_dx.x, 0x33F4);
	emu_movw(&emu_es, emu_dx.x);
	emu_movw(&emu_get_memory16(emu_es, 0x00,  0x128), emu_ax.x);
	emu_cmpw(&emu_ax.x, 0xFFFF);
	if (!emu_flags.zf) { f__261F_015D_0008_F306(); return; }
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x9A));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x98));
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_ds, 0x00,  0x6C80);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_ds, 0x00,  0x6C82);
	emu_push(0x014B);
	switch ((emu_cs << 16) + emu_ip) {
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x261F; emu_last_ip = 0x0147; emu_last_length = 0x0021; emu_last_crc = 0xFC59;
			emu_call();
			return;
	}
	/* Unresolved jump */ emu_ip = 0x014B; emu_last_cs = 0x261F; emu_last_ip = 0x014B; emu_last_length = 0x0021; emu_last_crc = 0xFC59; emu_call();
}

/**
 * Decompiled function f__261F_015D_0008_F306()
 *
 * @name f__261F_015D_0008_F306
 * @implements 261F:015D:0008:F306 ()
 *
 * Called From: 261F:0139:0021:FC59
 */
void f__261F_015D_0008_F306()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_cs); emu_push(0x0165); emu_cs = 0x01F7; f__01F7_0442_0015_6A10();
	f__261F_0165_0003_CD9A();
}

/**
 * Decompiled function f__261F_0165_0003_CD9A()
 *
 * @name f__261F_0165_0003_CD9A
 * @implements 261F:0165:0003:CD9A ()
 *
 * Called From: 261F:0165:0008:F306
 */
void f__261F_0165_0003_CD9A()
{
	emu_pop(&emu_cx.x);
	f__261F_0175_0010_C131(); return;
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

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_ds, 0x00,  0x9846);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_ds, 0x00,  0x9848);
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
 * Decompiled function f__261F_0175_0010_C131()
 *
 * @name f__261F_0175_0010_C131
 * @implements 261F:0175:0010:C131 ()
 *
 * Called From: 261F:0166:0003:CD9A
 */
void f__261F_0175_0010_C131()
{
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

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_ds, 0x00,  0x9846);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_ds, 0x00,  0x9848);
	emu_push(0x0185);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x217E04F9: f__217E_04F9_000E_346A(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x261F; emu_last_ip = 0x0181; emu_last_length = 0x0010; emu_last_crc = 0xC131;
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
 * Called From: 261F:0185:0010:C131
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
	emu_decb(&emu_get_memory8(emu_ds, 0x00,  0x986C));
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

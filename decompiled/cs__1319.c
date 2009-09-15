/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__1319_0008_0010_6CD3()
 *
 * @name f__1319_0008_0010_6CD3
 * @implements 1319:0008:0010:6CD3 ()
 *
 * Called From: 1319:02F9:000E:6084
 * Called From: 1319:02F9:0008:2CAA
 * Called From: 1319:030D:0014:4602
 * Called From: 1319:0326:000F:31DC
 * Called From: 1319:03CB:0011:D2F9
 * Called From: 1319:04F6:000D:AFED
 * Called From: 1319:04F6:0010:2F55
 * Called From: 1319:0551:0011:2C0C
 * Called From: 1319:05A2:0019:1A88
 */
void f__1319_0008_0010_6CD3()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_addw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_andws(&emu_dx.x, 0x7);
	emu_movw(&emu_ax.x, emu_dx.x);
	f__1319_0018_0002_00E2(); return;
}

/**
 * Decompiled function f__1319_0018_0002_00E2()
 *
 * @name f__1319_0018_0002_00E2
 * @implements 1319:0018:0002:00E2 ()
 *
 * Called From: 1319:0016:0010:6CD3
 */
void f__1319_0018_0002_00E2()
{
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__1319_001A_0011_CD6E()
 *
 * @name f__1319_001A_0011_CD6E
 * @implements 1319:001A:0011:CD6E ()
 *
 * Called From: 1319:00A8:0017:46E0
 * Called From: 1319:00FE:0011:72D9
 * Called From: 1319:01B3:0011:732F
 * Called From: 1319:0317:000A:FDDB
 * Called From: 1319:0335:000F:E67B
 * Called From: 1319:0350:000A:96C7
 * Called From: 1319:051D:0010:DE4A
 * Called From: 1319:051D:0014:D636
 * Called From: 1319:05AA:0008:6CA0
 * Called From: 1319:05C5:000D:5EC7
 * Called From: 1319:062A:0016:4AF8
 */
void f__1319_001A_0011_CD6E()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_shlw(&emu_bx.x, 0x1);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ds, emu_bx.x,  0x3782));
	f__1319_002B_0002_00E2(); return;
}

/**
 * Decompiled function f__1319_002B_0002_00E2()
 *
 * @name f__1319_002B_0002_00E2
 * @implements 1319:002B:0002:00E2 ()
 *
 * Called From: 1319:0029:0011:CD6E
 */
void f__1319_002B_0002_00E2()
{
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__1319_002D_0023_D2A2()
 *
 * @name f__1319_002D_0023_D2A2
 * @implements 1319:002D:0023:D2A2 ()
 *
 * Called From: 176C:1FFA:001E:E8BF
 */
void f__1319_002D_0023_D2A2()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subw(&emu_sp, 0xF2);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_di, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xC));
	if (emu_flags.zf) { emu_ip = 0x0049; emu_last_cs = 0x1319; emu_last_ip = 0x003F; emu_last_length = 0x0023; emu_last_crc = 0xD2A2; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x10));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x12));
	if (!emu_flags.zf) { f__1319_0050_0033_FD8A(); return; }
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_ip = 0x02A6; emu_last_cs = 0x1319; emu_last_ip = 0x004D; emu_last_length = 0x0023; emu_last_crc = 0xD2A2; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__1319_004D_0003_0614()
 *
 * @name f__1319_004D_0003_0614
 * @implements 1319:004D:0003:0614 ()
 *
 * Called From: 1319:02A3:000B:C459
 */
void f__1319_004D_0003_0614()
{
	f__1319_02A6_0006_137A(); return;
}

/**
 * Decompiled function f__1319_0050_0033_FD8A()
 *
 * @name f__1319_0050_0033_FD8A
 * @implements 1319:0050:0033:FD8A ()
 *
 * Called From: 1319:0047:0023:D2A2
 */
void f__1319_0050_0033_FD8A()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x7422), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x7420), 0x0);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x741A), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x741C), emu_dx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x741C));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0xFF);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x741E), 0x0);
	emu_decw(&emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	f__1319_0265_000B_84EF(); return;
}

/**
 * Decompiled function f__1319_0083_0008_33CE()
 *
 * @name f__1319_0083_0008_33CE
 * @implements 1319:0083:0008:33CE ()
 *
 * Called From: 1319:026D:000B:84EF
 * Called From: 1319:026D:0012:6461
 * Called From: 1319:026D:0019:C3E0
 */
void f__1319_0083_0008_33CE()
{
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_di);
	if (!emu_flags.zf) { f__1319_008B_0009_40AA(); return; }
	f__1319_0270_002B_D21B(); return;
}

/**
 * Decompiled function f__1319_008B_0009_40AA()
 *
 * @name f__1319_008B_0009_40AA
 * @implements 1319:008B:0009:40AA ()
 *
 * Called From: 1319:0086:0008:33CE
 */
void f__1319_008B_0009_40AA()
{
	emu_push(emu_di);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_cs); emu_push(0x0094); emu_cs = 0x0F3F; f__0F3F_0168_0010_0597();
	f__1319_0094_0017_46E0();
}

/**
 * Decompiled function f__1319_0094_0017_46E0()
 *
 * @name f__1319_0094_0017_46E0
 * @implements 1319:0094:0017:46E0 ()
 *
 * Called From: 1319:0094:0009:40AA
 */
void f__1319_0094_0017_46E0()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movb(&emu_cx.l, 0x5);
	emu_sarw(&emu_ax.x, emu_cx.l);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_andws(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x7);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_cs);
	emu_push(0x00AB); f__1319_001A_0011_CD6E();
	f__1319_00AB_000B_3442();
}

/**
 * Decompiled function f__1319_00AB_000B_3442()
 *
 * @name f__1319_00AB_000B_3442
 * @implements 1319:00AB:000B:3442 ()
 *
 * Called From: 1319:00AB:0017:46E0
 */
void f__1319_00AB_000B_3442()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_si, emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_si);

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_ss, emu_bp,  0x10);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_ss, emu_bp,  0x12);
	emu_push(0x00B6);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x176C1F21: f__176C_1F21_001C_87DC(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x1319; emu_last_ip = 0x00B3; emu_last_length = 0x000B; emu_last_crc = 0x3442;
			emu_call();
			return;
	}
	f__1319_00B6_0025_8865();
}

/**
 * Decompiled function f__1319_00B6_0025_8865()
 *
 * @name f__1319_00B6_0025_8865
 * @implements 1319:00B6:0025:8865 ()
 *
 * Called From: 1319:00B6:000B:3442
 */
void f__1319_00B6_0025_8865()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x14));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__1319_00DB_0007_2BA2(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x741C));
	emu_addw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00, -0x741E));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), emu_ax.l);
	emu_incw(&emu_get_memory16(emu_ds, 0x00, -0x741E));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	f__1319_025E_0012_6461(); return;
}

/**
 * Decompiled function f__1319_00DB_0007_2BA2()
 *
 * @name f__1319_00DB_0007_2BA2
 * @implements 1319:00DB:0007:2BA2 ()
 *
 * Called From: 1319:00C1:0025:8865
 */
void f__1319_00DB_0007_2BA2()
{
	emu_cmpw(&emu_si, emu_di);
	if (!emu_flags.zf) { f__1319_00E2_0007_2B86(); return; }
	f__1319_0270_002B_D21B(); return;
}

/**
 * Decompiled function f__1319_00E2_0007_2B86()
 *
 * @name f__1319_00E2_0007_2B86
 * @implements 1319:00E2:0007:2B86 ()
 *
 * Called From: 1319:00DD:0007:2BA2
 * Called From: 1319:0111:003C:A0A7
 * Called From: 1319:01C8:000A:CEDB
 */
void f__1319_00E2_0007_2B86()
{
	emu_cmpw(&emu_si, emu_di);
	if (!emu_flags.zf) { f__1319_00E9_0007_2B2A(); return; }
	f__1319_0270_002B_D21B(); return;
}

/**
 * Decompiled function f__1319_00E9_0007_2B2A()
 *
 * @name f__1319_00E9_0007_2B2A
 * @implements 1319:00E9:0007:2B2A ()
 *
 * Called From: 1319:00E4:0007:2B86
 */
void f__1319_00E9_0007_2B2A()
{
	emu_push(emu_di);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x00F0); emu_cs = 0x0F3F; f__0F3F_0168_0010_0597();
	f__1319_00F0_0011_72D9();
}

/**
 * Decompiled function f__1319_00F0_0011_72D9()
 *
 * @name f__1319_00F0_0011_72D9
 * @implements 1319:00F0:0011:72D9 ()
 *
 * Called From: 1319:00F0:0007:2B2A
 */
void f__1319_00F0_0011_72D9()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movb(&emu_cx.l, 0x5);
	emu_sarw(&emu_ax.x, emu_cx.l);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_si);
	emu_push(emu_cs);
	emu_push(0x0101); f__1319_001A_0011_CD6E();
	f__1319_0101_000B_3482();
}

/**
 * Decompiled function f__1319_0101_000B_3482()
 *
 * @name f__1319_0101_000B_3482
 * @implements 1319:0101:000B:3482 ()
 *
 * Called From: 1319:0101:0011:72D9
 */
void f__1319_0101_000B_3482()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_si, emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_si);

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_ss, emu_bp,  0x10);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_ss, emu_bp,  0x12);
	emu_push(0x010C);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x176C1F21: f__176C_1F21_001C_87DC(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x1319; emu_last_ip = 0x0109; emu_last_length = 0x000B; emu_last_crc = 0x3482;
			emu_call();
			return;
	}
	f__1319_010C_003C_A0A7();
}

/**
 * Decompiled function f__1319_010C_003C_A0A7()
 *
 * @name f__1319_010C_003C_A0A7
 * @implements 1319:010C:003C:A0A7 ()
 *
 * Called From: 1319:010C:000B:3482
 */
void f__1319_010C_003C_A0A7()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x14));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__1319_00E2_0007_2B86(); return; }
	emu_movw(&emu_ax.x, emu_bp - 0x8C);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), emu_ss);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x12), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x16), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x14), 0x0);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x18), emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x14));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x12));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x10));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax.x, 0xFFFF);
	emu_push(emu_ax.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0x18);
	emu_push(emu_ax.x);
	emu_push(emu_si);
	emu_push(emu_cs);
	emu_push(0x0148); f__1319_02AC_0020_2041();
	f__1319_0148_003B_BF4B();
}

/**
 * Decompiled function f__1319_0148_003B_BF4B()
 *
 * @name f__1319_0148_003B_BF4B
 * @implements 1319:0148:003B:BF4B ()
 *
 * Called From: 1319:0148:003C:A0A7
 */
void f__1319_0148_003B_BF4B()
{
	emu_addws(&emu_sp, 0x10);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_ax.x);
	emu_movw(&emu_ax.x, emu_bp - 0xF2);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x1A), emu_ss);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x1C), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x20), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x1E), 0x0);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x22), emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x14));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x12));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x10));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0x22);
	emu_push(emu_ax.x);
	emu_push(emu_si);
	emu_push(emu_cs);
	emu_push(0x0183); f__1319_02AC_0020_2041();
	f__1319_0183_0014_32CB();
}

/**
 * Decompiled function f__1319_0183_0014_32CB()
 *
 * @name f__1319_0183_0014_32CB
 * @implements 1319:0183:0014:32CB ()
 *
 * Called From: 1319:0183:003B:BF4B
 */
void f__1319_0183_0014_32CB()
{
	emu_addws(&emu_sp, 0x10);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x0);
	if (!emu_flags.zf) { f__1319_0195_0002_03C4(); return; }
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0xC), 0x0);
	if (emu_flags.zf) { f__1319_0197_0007_2AD0(); return; }
	emu_ip = 0x01CB; emu_last_cs = 0x1319; emu_last_ip = 0x0195; emu_last_length = 0x0014; emu_last_crc = 0x32CB; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__1319_0195_0002_03C4()
 *
 * @name f__1319_0195_0002_03C4
 * @implements 1319:0195:0002:03C4 ()
 *
 * Called From: 1319:018D:0014:32CB
 */
void f__1319_0195_0002_03C4()
{
	f__1319_01CB_002B_646A(); return;
}

/**
 * Decompiled function f__1319_0197_0007_2AD0()
 *
 * @name f__1319_0197_0007_2AD0
 * @implements 1319:0197:0007:2AD0 ()
 *
 * Called From: 1319:0193:0014:32CB
 * Called From: 1319:01C6:000A:CEDB
 */
void f__1319_0197_0007_2AD0()
{
	emu_cmpw(&emu_si, emu_di);
	if (!emu_flags.zf) { f__1319_019E_0007_2B2A(); return; }
	f__1319_0270_002B_D21B(); return;
}

/**
 * Decompiled function f__1319_019E_0007_2B2A()
 *
 * @name f__1319_019E_0007_2B2A
 * @implements 1319:019E:0007:2B2A ()
 *
 * Called From: 1319:0199:0007:2AD0
 */
void f__1319_019E_0007_2B2A()
{
	emu_push(emu_di);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x01A5); emu_cs = 0x0F3F; f__0F3F_0168_0010_0597();
	f__1319_01A5_0011_732F();
}

/**
 * Decompiled function f__1319_01A5_0011_732F()
 *
 * @name f__1319_01A5_0011_732F
 * @implements 1319:01A5:0011:732F ()
 *
 * Called From: 1319:01A5:0007:2B2A
 */
void f__1319_01A5_0011_732F()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movb(&emu_cx.l, 0x5);
	emu_sarw(&emu_ax.x, emu_cx.l);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_si);
	emu_push(emu_cs);
	emu_push(0x01B6); f__1319_001A_0011_CD6E();
	f__1319_01B6_000B_3482();
}

/**
 * Decompiled function f__1319_01B6_000B_3482()
 *
 * @name f__1319_01B6_000B_3482
 * @implements 1319:01B6:000B:3482 ()
 *
 * Called From: 1319:01B6:0011:732F
 */
void f__1319_01B6_000B_3482()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_si, emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_si);

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_ss, emu_bp,  0x10);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_ss, emu_bp,  0x12);
	emu_push(0x01C1);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x176C1F21: f__176C_1F21_001C_87DC(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x1319; emu_last_ip = 0x01BE; emu_last_length = 0x000B; emu_last_crc = 0x3482;
			emu_call();
			return;
	}
	f__1319_01C1_000A_CEDB();
}

/**
 * Decompiled function f__1319_01C1_000A_CEDB()
 *
 * @name f__1319_01C1_000A_CEDB
 * @implements 1319:01C1:000A:CEDB ()
 *
 * Called From: 1319:01C1:000B:3482
 */
void f__1319_01C1_000A_CEDB()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x14));
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__1319_0197_0007_2AD0(); return; }
	f__1319_00E2_0007_2B86(); return;
}

/**
 * Decompiled function f__1319_01CB_002B_646A()
 *
 * @name f__1319_01CB_002B_646A
 * @implements 1319:01CB:002B:646A ()
 *
 * Called From: 1319:0195:0002:03C4
 */
void f__1319_01CB_002B_646A()
{
	emu_movw(&emu_ax.x, emu_bp - 0x18);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x24), emu_ss);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x26), emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0xC), 0x0);
	if (emu_flags.zf) { emu_ip = 0x01FF; emu_last_cs = 0x1319; emu_last_ip = 0x01D8; emu_last_length = 0x002B; emu_last_crc = 0x646A; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_bp - 0x22);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x24), emu_ss);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x26), emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x0);
	if (emu_flags.zf) { emu_ip = 0x01FF; emu_last_cs = 0x1319; emu_last_ip = 0x01E7; emu_last_length = 0x002B; emu_last_crc = 0x646A; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x16));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x20));
	if (!(emu_flags.sf != emu_flags.of)) { f__1319_01F6_0024_7B14(); return; }
	emu_movw(&emu_ax.x, emu_bp - 0x18);
	f__1319_01F9_0021_728C(); return;
}

/**
 * Decompiled function f__1319_01F6_0024_7B14()
 *
 * @name f__1319_01F6_0024_7B14
 * @implements 1319:01F6:0024:7B14 ()
 *
 * Called From: 1319:01EF:002B:646A
 */
void f__1319_01F6_0024_7B14()
{
	emu_movw(&emu_ax.x, emu_bp - 0x22);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x24), emu_ss);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x26), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x26));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x4));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_subw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00, -0x741E));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xE));
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { emu_ip = 0x021A; emu_last_cs = 0x1319; emu_last_ip = 0x0213; emu_last_length = 0x0024; emu_last_crc = 0x7B14; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xE));
	f__1319_0221_0028_5812(); return;
}

/**
 * Decompiled function f__1319_01F9_0021_728C()
 *
 * @name f__1319_01F9_0021_728C
 * @implements 1319:01F9:0021:728C ()
 *
 * Called From: 1319:01F4:002B:646A
 */
void f__1319_01F9_0021_728C()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x24), emu_ss);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x26), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x26));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x4));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_subw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00, -0x741E));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xE));
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { emu_ip = 0x021A; emu_last_cs = 0x1319; emu_last_ip = 0x0213; emu_last_length = 0x0021; emu_last_crc = 0x728C; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xE));
	f__1319_0221_0028_5812(); return;
}

/**
 * Decompiled function f__1319_0221_0028_5812()
 *
 * @name f__1319_0221_0028_5812
 * @implements 1319:0221:0028:5812 ()
 *
 * Called From: 1319:0218:0024:7B14
 * Called From: 1319:0218:0021:728C
 */
void f__1319_0221_0028_5812()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0xE), 0x0);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { emu_ip = 0x0255; emu_last_cs = 0x1319; emu_last_ip = 0x0228; emu_last_length = 0x0028; emu_last_crc = 0x5812; emu_call(); return; } // Jump does not resolve
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x26));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x8));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00, -0x741C));
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00, -0x741E));
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x741A));
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0249); emu_cs = 0x01F7; f__01F7_28B8_0024_D407();
	f__1319_0249_000C_185F();
}

/**
 * Decompiled function f__1319_0249_000C_185F()
 *
 * @name f__1319_0249_000C_185F
 * @implements 1319:0249:000C:185F ()
 *
 * Called From: 1319:0249:0028:5812
 */
void f__1319_0249_000C_185F()
{
	emu_addws(&emu_sp, 0xA);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_addw(&emu_get_memory16(emu_ds, 0x00, -0x741E), emu_ax.x);
	f__1319_0257_0019_C3E0(); return;
}

/**
 * Decompiled function f__1319_0257_0019_C3E0()
 *
 * @name f__1319_0257_0019_C3E0
 * @implements 1319:0257:0019:C3E0 ()
 *
 * Called From: 1319:0253:000C:185F
 */
void f__1319_0257_0019_C3E0()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x26));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x2));
	emu_addw(&emu_get_memory16(emu_ds, 0x00, -0x7420), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_si);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00, -0x741E));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xE));
	if (!(emu_flags.sf != emu_flags.of)) { emu_ip = 0x0270; emu_last_cs = 0x1319; emu_last_ip = 0x026B; emu_last_length = 0x0019; emu_last_crc = 0xC3E0; emu_call(); return; } // Jump does not resolve
	f__1319_0083_0008_33CE(); return;
}

/**
 * Decompiled function f__1319_025E_0012_6461()
 *
 * @name f__1319_025E_0012_6461
 * @implements 1319:025E:0012:6461 ()
 *
 * Called From: 1319:00D8:0025:8865
 */
void f__1319_025E_0012_6461()
{
	emu_addw(&emu_get_memory16(emu_ds, 0x00, -0x7420), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_si);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00, -0x741E));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xE));
	if (!(emu_flags.sf != emu_flags.of)) { emu_ip = 0x0270; emu_last_cs = 0x1319; emu_last_ip = 0x026B; emu_last_length = 0x0012; emu_last_crc = 0x6461; emu_call(); return; } // Jump does not resolve
	f__1319_0083_0008_33CE(); return;
}

/**
 * Decompiled function f__1319_0265_000B_84EF()
 *
 * @name f__1319_0265_000B_84EF
 * @implements 1319:0265:000B:84EF ()
 *
 * Called From: 1319:0080:0033:FD8A
 */
void f__1319_0265_000B_84EF()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00, -0x741E));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xE));
	if (!(emu_flags.sf != emu_flags.of)) { emu_ip = 0x0270; emu_last_cs = 0x1319; emu_last_ip = 0x026B; emu_last_length = 0x000B; emu_last_crc = 0x84EF; emu_call(); return; } // Jump does not resolve
	f__1319_0083_0008_33CE(); return;
}

/**
 * Decompiled function f__1319_0270_002B_D21B()
 *
 * @name f__1319_0270_002B_D21B
 * @implements 1319:0270:002B:D21B ()
 *
 * Called From: 1319:0088:0008:33CE
 * Called From: 1319:00DF:0007:2BA2
 * Called From: 1319:00E6:0007:2B86
 * Called From: 1319:019B:0007:2AD0
 */
void f__1319_0270_002B_D21B()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00, -0x741E));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xE));
	if (!(emu_flags.sf != emu_flags.of)) { emu_ip = 0x0288; emu_last_cs = 0x1319; emu_last_ip = 0x0276; emu_last_length = 0x002B; emu_last_crc = 0xD21B; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x741C));
	emu_addw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00, -0x741E));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0xFF);
	emu_incw(&emu_get_memory16(emu_ds, 0x00, -0x741E));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x14));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x12));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x10));
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x8BDE);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x029B); f__1319_03E8_0029_DB20();
	f__1319_029B_000B_C459();
}

/**
 * Decompiled function f__1319_029B_000B_C459()
 *
 * @name f__1319_029B_000B_C459
 * @implements 1319:029B:000B:C459 ()
 *
 * Called From: 1319:029B:002B:D21B
 */
void f__1319_029B_000B_C459()
{
	emu_addws(&emu_sp, 0xA);
	emu_movw(&emu_dx.x, emu_ds);
	emu_movw(&emu_ax.x, 0x8BDE);
	f__1319_004D_0003_0614(); return;
}

/**
 * Decompiled function f__1319_02A6_0006_137A()
 *
 * @name f__1319_02A6_0006_137A
 * @implements 1319:02A6:0006:137A ()
 *
 * Called From: 1319:004D:0003:0614
 */
void f__1319_02A6_0006_137A()
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
 * Decompiled function f__1319_02AC_0020_2041()
 *
 * @name f__1319_02AC_0020_2041
 * @implements 1319:02AC:0020:2041 ()
 *
 * Called From: 1319:0145:003C:A0A7
 * Called From: 1319:0180:003B:BF4B
 */
void f__1319_02AC_0020_2041()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0xA);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_di, emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	if (emu_flags.zf) { emu_ip = 0x02C7; emu_last_cs = 0x1319; emu_last_ip = 0x02BD; emu_last_length = 0x0020; emu_last_crc = 0x2041; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x10));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x12));
	if (!emu_flags.zf) { f__1319_02CC_0022_A1DE(); return; }
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_ip = 0x03E2; emu_last_cs = 0x1319; emu_last_ip = 0x02C9; emu_last_length = 0x0020; emu_last_crc = 0x2041; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__1319_02C7_0005_0D72()
 *
 * @name f__1319_02C7_0005_0D72
 * @implements 1319:02C7:0005:0D72 ()
 *
 * Called From: 1319:0346:000B:AE5A
 */
void f__1319_02C7_0005_0D72()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__1319_03E2_0006_137A(); return;
}

/**
 * Decompiled function f__1319_02C9_0003_0712()
 *
 * @name f__1319_02C9_0003_0712
 * @implements 1319:02C9:0003:0712 ()
 *
 * Called From: 1319:03AF:0010:A335
 */
void f__1319_02C9_0003_0712()
{
	f__1319_03E2_0006_137A(); return;
}

/**
 * Decompiled function f__1319_02CC_0022_A1DE()
 *
 * @name f__1319_02CC_0022_A1DE
 * @implements 1319:02CC:0022:A1DE ()
 *
 * Called From: 1319:02C5:0020:2041
 */
void f__1319_02CC_0022_A1DE()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x8));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_es, emu_bx.x,  0x6));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x0);
	f__1319_03D6_0009_131B(); return;
}

/**
 * Decompiled function f__1319_02EE_000E_6084()
 *
 * @name f__1319_02EE_000E_6084
 * @implements 1319:02EE:000E:6084 ()
 *
 * Called From: 1319:03DC:0009:131B
 * Called From: 1319:03DC:0011:03AC
 */
void f__1319_02EE_000E_6084()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_push(emu_di);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_cs);
	emu_push(0x02FC); f__1319_0008_0010_6CD3();
	f__1319_02FC_0014_4602();
}

/**
 * Decompiled function f__1319_02F4_0008_2CAA()
 *
 * @name f__1319_02F4_0008_2CAA
 * @implements 1319:02F4:0008:2CAA ()
 *
 * Called From: 1319:0367:0002:02BA
 */
void f__1319_02F4_0008_2CAA()
{
	emu_push(emu_di);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_cs);
	emu_push(0x02FC); f__1319_0008_0010_6CD3();
	f__1319_02FC_0014_4602();
}

/**
 * Decompiled function f__1319_02FC_0014_4602()
 *
 * @name f__1319_02FC_0014_4602
 * @implements 1319:02FC:0014:4602 ()
 *
 * Called From: 1319:02FC:000E:6084
 * Called From: 1319:02FC:0008:2CAA
 */
void f__1319_02FC_0014_4602()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_testw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x1);
	if (emu_flags.zf) { f__1319_033E_000B_AE5A(); return; }
	emu_push(emu_di);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_cs);
	emu_push(0x0310); f__1319_0008_0010_6CD3();
	f__1319_0310_000A_FDDB();
}

/**
 * Decompiled function f__1319_0310_000A_FDDB()
 *
 * @name f__1319_0310_000A_FDDB
 * @implements 1319:0310:000A:FDDB ()
 *
 * Called From: 1319:0310:0014:4602
 */
void f__1319_0310_000A_FDDB()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs);
	emu_push(0x031A); f__1319_001A_0011_CD6E();
	f__1319_031A_000F_31DC();
}

/**
 * Decompiled function f__1319_031A_000F_31DC()
 *
 * @name f__1319_031A_000F_31DC
 * @implements 1319:031A:000F:31DC ()
 *
 * Called From: 1319:031A:000A:FDDB
 */
void f__1319_031A_000F_31DC()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	if (!emu_flags.zf) { f__1319_033E_000B_AE5A(); return; }
	emu_push(emu_di);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_cs);
	emu_push(0x0329); f__1319_0008_0010_6CD3();
	f__1319_0329_000F_E67B();
}

/**
 * Decompiled function f__1319_0329_000F_E67B()
 *
 * @name f__1319_0329_000F_E67B
 * @implements 1319:0329:000F:E67B ()
 *
 * Called From: 1319:0329:000F:31DC
 */
void f__1319_0329_000F_E67B()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs);
	emu_push(0x0338); f__1319_001A_0011_CD6E();
	f__1319_0338_0006_11AA();
}

/**
 * Decompiled function f__1319_0338_0006_11AA()
 *
 * @name f__1319_0338_0006_11AA
 * @implements 1319:0338:0006:11AA ()
 *
 * Called From: 1319:0338:000F:E67B
 */
void f__1319_0338_0006_11AA()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_si, emu_ax.x);
	f__1319_0369_0039_62AC(); return;
}

/**
 * Decompiled function f__1319_033E_000B_AE5A()
 *
 * @name f__1319_033E_000B_AE5A
 * @implements 1319:033E:000B:AE5A ()
 *
 * Called From: 1319:0306:0014:4602
 * Called From: 1319:031F:000F:31DC
 */
void f__1319_033E_000B_AE5A()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xE));
	if (!emu_flags.zf) { f__1319_0349_000A_96C7(); return; }
	f__1319_02C7_0005_0D72(); return;
}

/**
 * Decompiled function f__1319_0349_000A_96C7()
 *
 * @name f__1319_0349_000A_96C7
 * @implements 1319:0349:000A:96C7 ()
 *
 * Called From: 1319:0344:000B:AE5A
 */
void f__1319_0349_000A_96C7()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs);
	emu_push(0x0353); f__1319_001A_0011_CD6E();
	f__1319_0353_000B_3402();
}

/**
 * Decompiled function f__1319_0353_000B_3402()
 *
 * @name f__1319_0353_000B_3402
 * @implements 1319:0353:000B:3402 ()
 *
 * Called From: 1319:0353:000A:96C7
 */
void f__1319_0353_000B_3402()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_si, emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_si);

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_ss, emu_bp,  0x10);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_ss, emu_bp,  0x12);
	emu_push(0x035E);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x176C1F21: f__176C_1F21_001C_87DC(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x1319; emu_last_ip = 0x035B; emu_last_length = 0x000B; emu_last_crc = 0x3402;
			emu_call();
			return;
	}
	f__1319_035E_0009_E1C8();
}

/**
 * Decompiled function f__1319_035E_0009_E1C8()
 *
 * @name f__1319_035E_0009_E1C8
 * @implements 1319:035E:0009:E1C8 ()
 *
 * Called From: 1319:035E:000B:3402
 */
void f__1319_035E_0009_E1C8()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x14));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__1319_0367_0002_02BA(); return; }
	f__1319_0369_0039_62AC(); return;
}

/**
 * Decompiled function f__1319_0367_0002_02BA()
 *
 * @name f__1319_0367_0002_02BA
 * @implements 1319:0367:0002:02BA ()
 *
 * Called From: 1319:0363:0009:E1C8
 */
void f__1319_0367_0002_02BA()
{
	f__1319_02F4_0008_2CAA(); return;
}

/**
 * Decompiled function f__1319_0369_0039_62AC()
 *
 * @name f__1319_0369_0039_62AC
 * @implements 1319:0369:0039:62AC ()
 *
 * Called From: 1319:033C:0006:11AA
 * Called From: 1319:0365:0009:E1C8
 */
void f__1319_0369_0039_62AC()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ss, emu_bp, -0x2));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), emu_ax.l);
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_cmpw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0x6));
	if (!emu_flags.zf) { f__1319_03B2_000B_7749(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0xFF);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x14));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x12));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x10));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_cs);
	emu_push(0x03A2); f__1319_03E8_0029_DB20();
	f__1319_03A2_0010_A335();
}

/**
 * Decompiled function f__1319_03A2_0010_A335()
 *
 * @name f__1319_03A2_0010_A335
 * @implements 1319:03A2:0010:A335 ()
 *
 * Called From: 1319:03A2:0039:62AC
 */
void f__1319_03A2_0010_A335()
{
	emu_addws(&emu_sp, 0xA);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_decw(&emu_get_memory16(emu_es, emu_bx.x,  0x4));
	emu_movw(&emu_ax.x, 0x1);
	f__1319_02C9_0003_0712(); return;
}

/**
 * Decompiled function f__1319_03B2_000B_7749()
 *
 * @name f__1319_03B2_000B_7749
 * @implements 1319:03B2:000B:7749 ()
 *
 * Called From: 1319:037B:0039:62AC
 */
void f__1319_03B2_000B_7749()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx.x,  0x0), emu_si);
	if (!emu_flags.zf) { f__1319_03BD_0011_D2F9(); return; }
	emu_ip = 0x02C7; emu_last_cs = 0x1319; emu_last_ip = 0x03BA; emu_last_length = 0x000B; emu_last_crc = 0x7749; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__1319_03BD_0011_D2F9()
 *
 * @name f__1319_03BD_0011_D2F9
 * @implements 1319:03BD:0011:D2F9 ()
 *
 * Called From: 1319:03B8:000B:7749
 */
void f__1319_03BD_0011_D2F9()
{
	emu_movw(&emu_ax.x, emu_di);
	emu_negw(&emu_ax.x, emu_ax.x);
	emu_movw(&emu_dx.x, 0x3);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_cs);
	emu_push(0x03CE); f__1319_0008_0010_6CD3();
	f__1319_03CE_0011_03AC();
}

/**
 * Decompiled function f__1319_03CE_0011_03AC()
 *
 * @name f__1319_03CE_0011_03AC
 * @implements 1319:03CE:0011:03AC ()
 *
 * Called From: 1319:03CE:0011:D2F9
 */
void f__1319_03CE_0011_03AC()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0xE), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_si);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x64);
	if (!(emu_flags.sf != emu_flags.of)) { emu_ip = 0x03DF; emu_last_cs = 0x1319; emu_last_ip = 0x03DA; emu_last_length = 0x0011; emu_last_crc = 0x03AC; emu_call(); return; } // Jump does not resolve
	f__1319_02EE_000E_6084(); return;
}

/**
 * Decompiled function f__1319_03D6_0009_131B()
 *
 * @name f__1319_03D6_0009_131B
 * @implements 1319:03D6:0009:131B ()
 *
 * Called From: 1319:02EB:0022:A1DE
 */
void f__1319_03D6_0009_131B()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x64);
	if (!(emu_flags.sf != emu_flags.of)) { emu_ip = 0x03DF; emu_last_cs = 0x1319; emu_last_ip = 0x03DA; emu_last_length = 0x0009; emu_last_crc = 0x131B; emu_call(); return; } // Jump does not resolve
	f__1319_02EE_000E_6084(); return;
}

/**
 * Decompiled function f__1319_03E2_0006_137A()
 *
 * @name f__1319_03E2_0006_137A
 * @implements 1319:03E2:0006:137A ()
 *
 * Called From: 1319:02C9:0005:0D72
 * Called From: 1319:02C9:0003:0712
 */
void f__1319_03E2_0006_137A()
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
 * Decompiled function f__1319_03E8_0029_DB20()
 *
 * @name f__1319_03E8_0029_DB20
 * @implements 1319:03E8:0029:DB20 ()
 *
 * Called From: 1319:0298:002B:D21B
 * Called From: 1319:039F:0039:62AC
 */
void f__1319_03E8_0029_DB20()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0xC);
	emu_push(emu_si);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_flags.zf) { emu_ip = 0x040C; emu_last_cs = 0x1319; emu_last_ip = 0x03F5; emu_last_length = 0x0029; emu_last_crc = 0xDB20; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x6));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x8));
	if (emu_flags.zf) { emu_ip = 0x040C; emu_last_cs = 0x1319; emu_last_ip = 0x0402; emu_last_length = 0x0029; emu_last_crc = 0xDB20; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xC));
	if (!emu_flags.zf) { f__1319_0411_0029_396A(); return; }
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_ip = 0x0680; emu_last_cs = 0x1319; emu_last_ip = 0x040E; emu_last_length = 0x0029; emu_last_crc = 0xDB20; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__1319_040E_0003_06F0()
 *
 * @name f__1319_040E_0003_06F0
 * @implements 1319:040E:0003:06F0 ()
 *
 * Called From: 1319:067D:0021:BE78
 * Called From: 1319:067D:0043:441E
 */
void f__1319_040E_0003_06F0()
{
	f__1319_0680_0005_04BA(); return;
}

/**
 * Decompiled function f__1319_0411_0029_396A()
 *
 * @name f__1319_0411_0029_396A
 * @implements 1319:0411:0029:396A ()
 *
 * Called From: 1319:040A:0029:DB20
 */
void f__1319_0411_0029_396A()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_lfp(&emu_es, &emu_ax.x, &emu_get_memory16(emu_es, emu_bx.x,  0x6));
	emu_push(emu_es);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_addw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x4));
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_pop(&emu_es);
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0xFF);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_si, emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x4), 0x1);
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__1319_043A_0015_BFCA(); return; }
	f__1319_05DB_003C_B122(); return;
}

/**
 * Decompiled function f__1319_043A_0015_BFCA()
 *
 * @name f__1319_043A_0015_BFCA
 * @implements 1319:043A:0015:BFCA ()
 *
 * Called From: 1319:0435:0029:396A
 */
void f__1319_043A_0015_BFCA()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x8));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_es, emu_bx.x,  0x6));
	emu_incw(&emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_dx.x);
	f__1319_05CF_000C_B599(); return;
}

/**
 * Decompiled function f__1319_044F_000F_B1C8()
 *
 * @name f__1319_044F_000F_B1C8
 * @implements 1319:044F:000F:B1C8 ()
 *
 * Called From: 1319:05D8:000C:B599
 * Called From: 1319:05D8:0013:B7A2
 */
void f__1319_044F_000F_B1C8()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_decw(&emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_dx.x);
	f__1319_0461_002A_6E64(); return;
}

/**
 * Decompiled function f__1319_045E_002D_8E78()
 *
 * @name f__1319_045E_002D_8E78
 * @implements 1319:045E:002D:8E78 ()
 *
 * Called From: 1319:047D:002A:6E64
 */
void f__1319_045E_002D_8E78()
{
	emu_decw(&emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0xFE);
	if (!emu_flags.zf) { f__1319_047F_000C_A4D3(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x8));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_es, emu_bx.x,  0x6));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (!emu_flags.zf) { emu_ip = 0x045E; emu_last_cs = 0x1319; emu_last_ip = 0x0478; emu_last_length = 0x002D; emu_last_crc = 0x8E78; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	if (!emu_flags.zf) { emu_ip = 0x045E; emu_last_cs = 0x1319; emu_last_ip = 0x047D; emu_last_length = 0x002D; emu_last_crc = 0x8E78; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0xFE);
	if (!emu_flags.zf) { emu_ip = 0x048B; emu_last_cs = 0x1319; emu_last_ip = 0x0486; emu_last_length = 0x002D; emu_last_crc = 0x8E78; emu_call(); return; } // Jump does not resolve
	emu_ip = 0x05CC; emu_last_cs = 0x1319; emu_last_ip = 0x0488; emu_last_length = 0x002D; emu_last_crc = 0x8E78; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__1319_0461_002A_6E64()
 *
 * @name f__1319_0461_002A_6E64
 * @implements 1319:0461:002A:6E64 ()
 *
 * Called From: 1319:045C:000F:B1C8
 */
void f__1319_0461_002A_6E64()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0xFE);
	if (!emu_flags.zf) { f__1319_047F_000C_A4D3(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x8));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_es, emu_bx.x,  0x6));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (!emu_flags.zf) { emu_ip = 0x045E; emu_last_cs = 0x1319; emu_last_ip = 0x0478; emu_last_length = 0x002A; emu_last_crc = 0x6E64; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	if (!emu_flags.zf) { f__1319_045E_002D_8E78(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0xFE);
	if (!emu_flags.zf) { emu_ip = 0x048B; emu_last_cs = 0x1319; emu_last_ip = 0x0486; emu_last_length = 0x002A; emu_last_crc = 0x6E64; emu_call(); return; } // Jump does not resolve
	emu_ip = 0x05CC; emu_last_cs = 0x1319; emu_last_ip = 0x0488; emu_last_length = 0x002A; emu_last_crc = 0x6E64; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__1319_047F_000C_A4D3()
 *
 * @name f__1319_047F_000C_A4D3
 * @implements 1319:047F:000C:A4D3 ()
 *
 * Called From: 1319:0468:002A:6E64
 * Called From: 1319:0468:002D:8E78
 */
void f__1319_047F_000C_A4D3()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0xFE);
	if (!emu_flags.zf) { f__1319_048B_0041_22B8(); return; }
	emu_ip = 0x05CC; emu_last_cs = 0x1319; emu_last_ip = 0x0488; emu_last_length = 0x000C; emu_last_crc = 0xA4D3; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__1319_048B_0041_22B8()
 *
 * @name f__1319_048B_0041_22B8
 * @implements 1319:048B:0041:22B8 ()
 *
 * Called From: 1319:0486:000C:A4D3
 */
void f__1319_048B_0041_22B8()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x0));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_subb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x0));
	emu_movb(&emu_get_memory8(emu_ss, emu_bp, -0x9), emu_ax.l);
	emu_cmpb(&emu_get_memory8(emu_ss, emu_bp, -0x9), 0x0);
	if (!(emu_flags.sf != emu_flags.of)) { f__1319_04A8_0024_5668(); return; }
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ss, emu_bp, -0x9));
	emu_addb(&emu_ax.l, 0x8);
	emu_movb(&emu_get_memory8(emu_ss, emu_bp, -0x9), emu_ax.l);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ss, emu_bp, -0x9));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ds, emu_bx.x,  0x3792));
	emu_movb(&emu_get_memory8(emu_ss, emu_bp, -0x9), emu_ax.l);
	emu_cmpb(&emu_get_memory8(emu_ss, emu_bp, -0x9), 0x3);
	if (!emu_flags.zf) { f__1319_04CC_0009_0FC1(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0xFE);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0xFE);
	emu_ip = 0x05CC; emu_last_cs = 0x1319; emu_last_ip = 0x04C9; emu_last_length = 0x0041; emu_last_crc = 0x22B8; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__1319_04A8_0024_5668()
 *
 * @name f__1319_04A8_0024_5668
 * @implements 1319:04A8:0024:5668 ()
 *
 * Called From: 1319:049E:0041:22B8
 */
void f__1319_04A8_0024_5668()
{
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ss, emu_bp, -0x9));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ds, emu_bx.x,  0x3792));
	emu_movb(&emu_get_memory8(emu_ss, emu_bp, -0x9), emu_ax.l);
	emu_cmpb(&emu_get_memory8(emu_ss, emu_bp, -0x9), 0x3);
	if (!emu_flags.zf) { f__1319_04CC_0009_0FC1(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0xFE);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0xFE);
	emu_ip = 0x05CC; emu_last_cs = 0x1319; emu_last_ip = 0x04C9; emu_last_length = 0x0024; emu_last_crc = 0x5668; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__1319_04CC_0009_0FC1()
 *
 * @name f__1319_04CC_0009_0FC1
 * @implements 1319:04CC:0009:0FC1 ()
 *
 * Called From: 1319:04B9:0024:5668
 * Called From: 1319:04B9:0041:22B8
 */
void f__1319_04CC_0009_0FC1()
{
	emu_cmpb(&emu_get_memory8(emu_ss, emu_bp, -0x9), 0x0);
	if (!emu_flags.zf) { f__1319_04D5_0014_2897(); return; }
	f__1319_05BB_000D_5EC7(); return;
}

/**
 * Decompiled function f__1319_04D5_0014_2897()
 *
 * @name f__1319_04D5_0014_2897
 * @implements 1319:04D5:0014:2897 ()
 *
 * Called From: 1319:04D0:0009:0FC1
 */
void f__1319_04D5_0014_2897()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_testb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0x1);
	if (emu_flags.zf) { f__1319_0543_0011_2C0C(); return; }
	emu_cmpb(&emu_get_memory8(emu_ss, emu_bp, -0x9), 0x0);
	if (!(emu_flags.sf != emu_flags.of)) { f__1319_04E9_0010_2F55(); return; }
	emu_movw(&emu_ax.x, 0xFFFF);
	f__1319_04EC_000D_AFED(); return;
}

/**
 * Decompiled function f__1319_04E9_0010_2F55()
 *
 * @name f__1319_04E9_0010_2F55
 * @implements 1319:04E9:0010:2F55 ()
 *
 * Called From: 1319:04E2:0014:2897
 */
void f__1319_04E9_0010_2F55()
{
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x0));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x04F9); f__1319_0008_0010_6CD3();
	f__1319_04F9_0013_DB77();
}

/**
 * Decompiled function f__1319_04EC_000D_AFED()
 *
 * @name f__1319_04EC_000D_AFED
 * @implements 1319:04EC:000D:AFED ()
 *
 * Called From: 1319:04E7:0014:2897
 */
void f__1319_04EC_000D_AFED()
{
	emu_push(emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x0));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x04F9); f__1319_0008_0010_6CD3();
	f__1319_04F9_0013_DB77();
}

/**
 * Decompiled function f__1319_04F9_0013_DB77()
 *
 * @name f__1319_04F9_0013_DB77
 * @implements 1319:04F9:0013:DB77 ()
 *
 * Called From: 1319:04F9:000D:AFED
 * Called From: 1319:04F9:0010:2F55
 */
void f__1319_04F9_0013_DB77()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_ax.x);
	emu_cmpb(&emu_get_memory8(emu_ss, emu_bp, -0x9), 0x0);
	if (!(emu_flags.sf != emu_flags.of)) { f__1319_050C_0014_D636(); return; }
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ss, emu_bp, -0x9));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_negw(&emu_ax.x, emu_ax.x);
	f__1319_0510_0010_DE4A(); return;
}

/**
 * Decompiled function f__1319_050C_0014_D636()
 *
 * @name f__1319_050C_0014_D636
 * @implements 1319:050C:0014:D636 ()
 *
 * Called From: 1319:0502:0013:DB77
 */
void f__1319_050C_0014_D636()
{
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ss, emu_bp, -0x9));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_cmpw(&emu_ax.x, 0x1);
	if (!emu_flags.zf) { emu_ip = 0x0541; emu_last_cs = 0x1319; emu_last_ip = 0x0513; emu_last_length = 0x0014; emu_last_crc = 0xD636; emu_call(); return; } // Jump does not resolve
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_si);
	emu_push(emu_cs);
	emu_push(0x0520); f__1319_001A_0011_CD6E();
	f__1319_0520_0006_1EF4();
}

/**
 * Decompiled function f__1319_0510_0010_DE4A()
 *
 * @name f__1319_0510_0010_DE4A
 * @implements 1319:0510:0010:DE4A ()
 *
 * Called From: 1319:050A:0013:DB77
 */
void f__1319_0510_0010_DE4A()
{
	emu_cmpw(&emu_ax.x, 0x1);
	if (!emu_flags.zf) { emu_ip = 0x0541; emu_last_cs = 0x1319; emu_last_ip = 0x0513; emu_last_length = 0x0010; emu_last_crc = 0xDE4A; emu_call(); return; } // Jump does not resolve
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_si);
	emu_push(emu_cs);
	emu_push(0x0520); f__1319_001A_0011_CD6E();
	f__1319_0520_0006_1EF4();
}

/**
 * Decompiled function f__1319_0520_0006_1EF4()
 *
 * @name f__1319_0520_0006_1EF4
 * @implements 1319:0520:0006:1EF4 ()
 *
 * Called From: 1319:0520:0010:DE4A
 * Called From: 1319:0520:0014:D636
 */
void f__1319_0520_0006_1EF4()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_push(emu_ax.x);

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_ss, emu_bp,  0xA);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_ss, emu_bp,  0xC);
	emu_push(0x0526);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x176C1F21: f__176C_1F21_001C_87DC(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x1319; emu_last_ip = 0x0523; emu_last_length = 0x0006; emu_last_crc = 0x1EF4;
			emu_call();
			return;
	}
	f__1319_0526_001B_41C5();
}

/**
 * Decompiled function f__1319_0526_001B_41C5()
 *
 * @name f__1319_0526_001B_41C5
 * @implements 1319:0526:001B:41C5 ()
 *
 * Called From: 1319:0526:0006:1EF4
 */
void f__1319_0526_001B_41C5()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xE));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__1319_053F_0002_0358(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ss, emu_bp, -0xC));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), emu_ax.l);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ss, emu_bp, -0xC));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), emu_ax.l);
	f__1319_05BB_000D_5EC7(); return;
}

/**
 * Decompiled function f__1319_053F_0002_0358()
 *
 * @name f__1319_053F_0002_0358
 * @implements 1319:053F:0002:0358 ()
 *
 * Called From: 1319:052B:001B:41C5
 */
void f__1319_053F_0002_0358()
{
	f__1319_05BB_000D_5EC7(); return;
}

/**
 * Decompiled function f__1319_0543_0011_2C0C()
 *
 * @name f__1319_0543_0011_2C0C
 * @implements 1319:0543:0011:2C0C ()
 *
 * Called From: 1319:04DC:0014:2897
 */
void f__1319_0543_0011_2C0C()
{
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ss, emu_bp, -0x9));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_push(emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x0));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x0554); f__1319_0008_0010_6CD3();
	f__1319_0554_0017_AA53();
}

/**
 * Decompiled function f__1319_0554_0017_AA53()
 *
 * @name f__1319_0554_0017_AA53
 * @implements 1319:0554:0017:AA53 ()
 *
 * Called From: 1319:0554:0011:2C0C
 */
void f__1319_0554_0017_AA53()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ss, emu_bp, -0xC));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), emu_ax.l);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0xFE);
	f__1319_056E_0037_E3DE(); return;
}

/**
 * Decompiled function f__1319_056B_003A_7FDD()
 *
 * @name f__1319_056B_003A_7FDD
 * @implements 1319:056B:003A:7FDD ()
 *
 * Called From: 1319:058A:0037:E3DE
 */
void f__1319_056B_003A_7FDD()
{
	emu_decw(&emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0xFE);
	if (!emu_flags.zf) { f__1319_058C_0019_1A88(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x8));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_es, emu_bx.x,  0x6));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (!emu_flags.zf) { emu_ip = 0x056B; emu_last_cs = 0x1319; emu_last_ip = 0x0585; emu_last_length = 0x003A; emu_last_crc = 0x7FDD; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	if (!emu_flags.zf) { emu_ip = 0x056B; emu_last_cs = 0x1319; emu_last_ip = 0x058A; emu_last_length = 0x003A; emu_last_crc = 0x7FDD; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0xFE);
	if (emu_flags.zf) { emu_ip = 0x05B3; emu_last_cs = 0x1319; emu_last_ip = 0x0593; emu_last_length = 0x003A; emu_last_crc = 0x7FDD; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, 0x4);
	emu_push(emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x0));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x05A5); emu_ip = 0x0008; emu_last_cs = 0x1319; emu_last_ip = 0x05A2; emu_last_length = 0x003A; emu_last_crc = 0x7FDD; emu_call(); // Jump does not resolve
	f__1319_05A5_0008_6CA0();
}

/**
 * Decompiled function f__1319_056E_0037_E3DE()
 *
 * @name f__1319_056E_0037_E3DE
 * @implements 1319:056E:0037:E3DE ()
 *
 * Called From: 1319:0569:0017:AA53
 */
void f__1319_056E_0037_E3DE()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0xFE);
	if (!emu_flags.zf) { emu_ip = 0x058C; emu_last_cs = 0x1319; emu_last_ip = 0x0575; emu_last_length = 0x0037; emu_last_crc = 0xE3DE; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x8));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_es, emu_bx.x,  0x6));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (!emu_flags.zf) { emu_ip = 0x056B; emu_last_cs = 0x1319; emu_last_ip = 0x0585; emu_last_length = 0x0037; emu_last_crc = 0xE3DE; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	if (!emu_flags.zf) { f__1319_056B_003A_7FDD(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0xFE);
	if (emu_flags.zf) { emu_ip = 0x05B3; emu_last_cs = 0x1319; emu_last_ip = 0x0593; emu_last_length = 0x0037; emu_last_crc = 0xE3DE; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, 0x4);
	emu_push(emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x0));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x05A5); emu_ip = 0x0008; emu_last_cs = 0x1319; emu_last_ip = 0x05A2; emu_last_length = 0x0037; emu_last_crc = 0xE3DE; emu_call(); // Jump does not resolve
	f__1319_05A5_0008_6CA0();
}

/**
 * Decompiled function f__1319_058C_0019_1A88()
 *
 * @name f__1319_058C_0019_1A88
 * @implements 1319:058C:0019:1A88 ()
 *
 * Called From: 1319:0575:003A:7FDD
 */
void f__1319_058C_0019_1A88()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0xFE);
	if (emu_flags.zf) { emu_ip = 0x05B3; emu_last_cs = 0x1319; emu_last_ip = 0x0593; emu_last_length = 0x0019; emu_last_crc = 0x1A88; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, 0x4);
	emu_push(emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x0));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x05A5); f__1319_0008_0010_6CD3();
	f__1319_05A5_0008_6CA0();
}

/**
 * Decompiled function f__1319_05A5_0008_6CA0()
 *
 * @name f__1319_05A5_0008_6CA0
 * @implements 1319:05A5:0008:6CA0 ()
 *
 * Called From: 1319:05A5:0019:1A88
 */
void f__1319_05A5_0008_6CA0()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_push(emu_ax.x);
	emu_push(emu_si);
	emu_push(emu_cs);
	emu_push(0x05AD); f__1319_001A_0011_CD6E();
	f__1319_05AD_0006_11F0();
}

/**
 * Decompiled function f__1319_05AD_0006_11F0()
 *
 * @name f__1319_05AD_0006_11F0
 * @implements 1319:05AD:0006:11F0 ()
 *
 * Called From: 1319:05AD:0008:6CA0
 */
void f__1319_05AD_0006_11F0()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_si, emu_ax.x);
	f__1319_05B9_0002_0384(); return;
}

/**
 * Decompiled function f__1319_05B9_0002_0384()
 *
 * @name f__1319_05B9_0002_0384
 * @implements 1319:05B9:0002:0384 ()
 *
 * Called From: 1319:05B1:0006:11F0
 */
void f__1319_05B9_0002_0384()
{
	f__1319_05CF_000C_B599(); return;
}

/**
 * Decompiled function f__1319_05BB_000D_5EC7()
 *
 * @name f__1319_05BB_000D_5EC7
 * @implements 1319:05BB:000D:5EC7 ()
 *
 * Called From: 1319:04D2:0009:0FC1
 * Called From: 1319:053F:0002:0358
 * Called From: 1319:053F:001B:41C5
 */
void f__1319_05BB_000D_5EC7()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x0));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_push(emu_ax.x);
	emu_push(emu_si);
	emu_push(emu_cs);
	emu_push(0x05C8); f__1319_001A_0011_CD6E();
	f__1319_05C8_0013_B7A2();
}

/**
 * Decompiled function f__1319_05C8_0013_B7A2()
 *
 * @name f__1319_05C8_0013_B7A2
 * @implements 1319:05C8:0013:B7A2 ()
 *
 * Called From: 1319:05C8:000D:5EC7
 */
void f__1319_05C8_0013_B7A2()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_si, emu_ax.x);
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0xFF);
	if (emu_flags.zf) { f__1319_05DB_003C_B122(); return; }
	f__1319_044F_000F_B1C8(); return;
}

/**
 * Decompiled function f__1319_05CF_000C_B599()
 *
 * @name f__1319_05CF_000C_B599
 * @implements 1319:05CF:000C:B599 ()
 *
 * Called From: 1319:044C:0015:BFCA
 * Called From: 1319:05B9:0002:0384
 */
void f__1319_05CF_000C_B599()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0xFF);
	if (emu_flags.zf) { f__1319_05DB_003C_B122(); return; }
	f__1319_044F_000F_B1C8(); return;
}

/**
 * Decompiled function f__1319_05DB_003C_B122()
 *
 * @name f__1319_05DB_003C_B122
 * @implements 1319:05DB:003C:B122 ()
 *
 * Called From: 1319:0437:0029:396A
 * Called From: 1319:05D6:0013:B7A2
 * Called From: 1319:05D6:000C:B599
 */
void f__1319_05DB_003C_B122()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x8));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_es, emu_bx.x,  0x6));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_dx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x8));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_es, emu_bx.x,  0x6));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_dx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_si, emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x2), 0x0);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), 0x0);
	f__1319_065F_0021_BE78(); return;
}

/**
 * Decompiled function f__1319_0617_0016_4AF8()
 *
 * @name f__1319_0617_0016_4AF8
 * @implements 1319:0617:0016:4AF8 ()
 *
 * Called From: 1319:0666:0021:BE78
 * Called From: 1319:0666:0043:441E
 * Called From: 1319:0666:0024:B058
 */
void f__1319_0617_0016_4AF8()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0xFE);
	if (emu_flags.zf) { f__1319_065C_0024_B058(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x0));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_push(emu_ax.x);
	emu_push(emu_si);
	emu_push(emu_cs);
	emu_push(0x062D); f__1319_001A_0011_CD6E();
	f__1319_062D_0010_FA30();
}

/**
 * Decompiled function f__1319_062D_0010_FA30()
 *
 * @name f__1319_062D_0010_FA30
 * @implements 1319:062D:0010:FA30 ()
 *
 * Called From: 1319:062D:0016:4AF8
 */
void f__1319_062D_0010_FA30()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_si, emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x0));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_push(emu_ax.x);
	emu_push(emu_si);

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_ss, emu_bp,  0xA);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_ss, emu_bp,  0xC);
	emu_push(0x063D);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x176C1F21: f__176C_1F21_001C_87DC(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x1319; emu_last_ip = 0x063A; emu_last_length = 0x0010; emu_last_crc = 0xFA30;
			emu_call();
			return;
	}
	f__1319_063D_0043_441E();
}

/**
 * Decompiled function f__1319_063D_0043_441E()
 *
 * @name f__1319_063D_0043_441E
 * @implements 1319:063D:0043:441E ()
 *
 * Called From: 1319:063D:0010:FA30
 */
void f__1319_063D_0043_441E()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_addw(&emu_get_memory16(emu_es, emu_bx.x,  0x2), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_incw(&emu_get_memory16(emu_es, emu_bx.x,  0x4));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x0));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), emu_ax.l);
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0xFF);
	if (!emu_flags.zf) { f__1319_0617_0016_4AF8(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_incw(&emu_get_memory16(emu_es, emu_bx.x,  0x4));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0xFF);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x4));
	f__1319_040E_0003_06F0(); return;
}

/**
 * Decompiled function f__1319_065C_0024_B058()
 *
 * @name f__1319_065C_0024_B058
 * @implements 1319:065C:0024:B058 ()
 *
 * Called From: 1319:061E:0016:4AF8
 */
void f__1319_065C_0024_B058()
{
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0xFF);
	if (!emu_flags.zf) { f__1319_0617_0016_4AF8(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_incw(&emu_get_memory16(emu_es, emu_bx.x,  0x4));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0xFF);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x4));
	emu_ip = 0x040E; emu_last_cs = 0x1319; emu_last_ip = 0x067D; emu_last_length = 0x0024; emu_last_crc = 0xB058; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__1319_065F_0021_BE78()
 *
 * @name f__1319_065F_0021_BE78
 * @implements 1319:065F:0021:BE78 ()
 *
 * Called From: 1319:0615:003C:B122
 */
void f__1319_065F_0021_BE78()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0xFF);
	if (!emu_flags.zf) { f__1319_0617_0016_4AF8(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_incw(&emu_get_memory16(emu_es, emu_bx.x,  0x4));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0xFF);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x4));
	f__1319_040E_0003_06F0(); return;
}

/**
 * Decompiled function f__1319_0680_0005_04BA()
 *
 * @name f__1319_0680_0005_04BA
 * @implements 1319:0680:0005:04BA ()
 *
 * Called From: 1319:040E:0003:06F0
 */
void f__1319_0680_0005_04BA()
{
	emu_pop(&emu_si);
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

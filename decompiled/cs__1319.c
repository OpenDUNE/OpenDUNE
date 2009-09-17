/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__1319_0008_0010_6124()
 *
 * @name f__1319_0008_0010_6124
 * @implements 1319:0008:0010:6124 ()
 *
 * Called From: 1319:02F9:000E:09AC
 * Called From: 1319:02F9:0008:0A8C
 * Called From: 1319:030D:0014:F0DD
 * Called From: 1319:0326:000F:F873
 * Called From: 1319:03CB:0011:C8A7
 * Called From: 1319:04F6:000D:DB55
 * Called From: 1319:04F6:0010:D9ED
 * Called From: 1319:0551:0011:B2DC
 * Called From: 1319:05A2:0019:F032
 */
void f__1319_0008_0010_6124()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_addw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_andws(&emu_dx.x, 0x7);
	emu_movw(&emu_ax.x, emu_dx.x);
	f__1319_0018_0002_2597(); return;
}

/**
 * Decompiled function f__1319_0018_0002_2597()
 *
 * @name f__1319_0018_0002_2597
 * @implements 1319:0018:0002:2597 ()
 *
 * Called From: 1319:0016:0010:6124
 */
void f__1319_0018_0002_2597()
{
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__1319_001A_0011_30DD()
 *
 * @name f__1319_001A_0011_30DD
 * @implements 1319:001A:0011:30DD ()
 *
 * Called From: 1319:00A8:0017:1502
 * Called From: 1319:00FE:0011:3F7F
 * Called From: 1319:01B3:0011:7FE0
 * Called From: 1319:0317:000A:9BF3
 * Called From: 1319:0335:000F:23C3
 * Called From: 1319:0350:000A:5CD5
 * Called From: 1319:051D:0010:787A
 * Called From: 1319:051D:0014:5C8F
 * Called From: 1319:05AA:0008:DB18
 * Called From: 1319:05C5:000D:E8A9
 * Called From: 1319:062A:0016:C894
 */
void f__1319_001A_0011_30DD()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_shlw(&emu_bx.x, 0x1);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ds, emu_bx.x,  0x3782));
	f__1319_002B_0002_2597(); return;
}

/**
 * Decompiled function f__1319_002B_0002_2597()
 *
 * @name f__1319_002B_0002_2597
 * @implements 1319:002B:0002:2597 ()
 *
 * Called From: 1319:0029:0011:30DD
 */
void f__1319_002B_0002_2597()
{
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__1319_002D_0023_320C()
 *
 * @name f__1319_002D_0023_320C
 * @implements 1319:002D:0023:320C ()
 *
 * Called From: 176C:1FFA:001E:A340
 */
void f__1319_002D_0023_320C()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subw(&emu_sp, 0xF2);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_di, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xC));
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0049; emu_last_cs = 0x1319; emu_last_ip = 0x003F; emu_last_length = 0x0023; emu_last_crc = 0x320C; emu_call(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x10));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x12));
	if (!emu_flags.zf) { f__1319_0050_0033_2F64(); return; }
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	/* Unresolved jump */ emu_ip = 0x02A6; emu_last_cs = 0x1319; emu_last_ip = 0x004D; emu_last_length = 0x0023; emu_last_crc = 0x320C; emu_call();
}

/**
 * Decompiled function f__1319_004D_0003_9C35()
 *
 * @name f__1319_004D_0003_9C35
 * @implements 1319:004D:0003:9C35 ()
 *
 * Called From: 1319:02A3:000B:29D2
 */
void f__1319_004D_0003_9C35()
{
	f__1319_02A6_0006_F7CE(); return;
}

/**
 * Decompiled function f__1319_0050_0033_2F64()
 *
 * @name f__1319_0050_0033_2F64
 * @implements 1319:0050:0033:2F64 ()
 *
 * Called From: 1319:0047:0023:320C
 */
void f__1319_0050_0033_2F64()
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
	f__1319_0265_000B_0A91(); return;
}

/**
 * Decompiled function f__1319_0083_0008_AFCE()
 *
 * @name f__1319_0083_0008_AFCE
 * @implements 1319:0083:0008:AFCE ()
 *
 * Called From: 1319:026D:000B:0A91
 * Called From: 1319:026D:0012:E2B7
 * Called From: 1319:026D:0019:517D
 */
void f__1319_0083_0008_AFCE()
{
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_di);
	if (!emu_flags.zf) { f__1319_008B_0009_C4BD(); return; }
	f__1319_0270_002B_EBE1(); return;
}

/**
 * Decompiled function f__1319_008B_0009_C4BD()
 *
 * @name f__1319_008B_0009_C4BD
 * @implements 1319:008B:0009:C4BD ()
 *
 * Called From: 1319:0086:0008:AFCE
 */
void f__1319_008B_0009_C4BD()
{
	emu_push(emu_di);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_cs); emu_push(0x0094); emu_cs = 0x0F3F; f__0F3F_0168_0010_C9EF();
	f__1319_0094_0017_1502();
}

/**
 * Decompiled function f__1319_0094_0017_1502()
 *
 * @name f__1319_0094_0017_1502
 * @implements 1319:0094:0017:1502 ()
 *
 * Called From: 1319:0094:0009:C4BD
 */
void f__1319_0094_0017_1502()
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
	emu_push(0x00AB); f__1319_001A_0011_30DD();
	f__1319_00AB_000B_6FE3();
}

/**
 * Decompiled function f__1319_00AB_000B_6FE3()
 *
 * @name f__1319_00AB_000B_6FE3
 * @implements 1319:00AB:000B:6FE3 ()
 *
 * Called From: 1319:00AB:0017:1502
 */
void f__1319_00AB_000B_6FE3()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_si, emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_si);

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_ss, emu_bp,  0x10);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_ss, emu_bp,  0x12);
	emu_push(0x00B6);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x176C1F21: f__176C_1F21_001C_8C6C(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x1319; emu_last_ip = 0x00B3; emu_last_length = 0x000B; emu_last_crc = 0x6FE3;
			emu_call();
			return;
	}
	f__1319_00B6_0025_EDB4();
}

/**
 * Decompiled function f__1319_00B6_0025_EDB4()
 *
 * @name f__1319_00B6_0025_EDB4
 * @implements 1319:00B6:0025:EDB4 ()
 *
 * Called From: 1319:00B6:000B:6FE3
 */
void f__1319_00B6_0025_EDB4()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x14));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__1319_00DB_0007_725E(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x741C));
	emu_addw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00, -0x741E));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), emu_ax.l);
	emu_incw(&emu_get_memory16(emu_ds, 0x00, -0x741E));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	f__1319_025E_0012_E2B7(); return;
}

/**
 * Decompiled function f__1319_00DB_0007_725E()
 *
 * @name f__1319_00DB_0007_725E
 * @implements 1319:00DB:0007:725E ()
 *
 * Called From: 1319:00C1:0025:EDB4
 */
void f__1319_00DB_0007_725E()
{
	emu_cmpw(&emu_si, emu_di);
	if (!emu_flags.zf) { f__1319_00E2_0007_325C(); return; }
	f__1319_0270_002B_EBE1(); return;
}

/**
 * Decompiled function f__1319_00E2_0007_325C()
 *
 * @name f__1319_00E2_0007_325C
 * @implements 1319:00E2:0007:325C ()
 *
 * Called From: 1319:00DD:0007:725E
 * Called From: 1319:0111:003C:691C
 * Called From: 1319:01C8:000A:ACB9
 */
void f__1319_00E2_0007_325C()
{
	emu_cmpw(&emu_si, emu_di);
	if (!emu_flags.zf) { f__1319_00E9_0007_1BD6(); return; }
	f__1319_0270_002B_EBE1(); return;
}

/**
 * Decompiled function f__1319_00E9_0007_1BD6()
 *
 * @name f__1319_00E9_0007_1BD6
 * @implements 1319:00E9:0007:1BD6 ()
 *
 * Called From: 1319:00E4:0007:325C
 */
void f__1319_00E9_0007_1BD6()
{
	emu_push(emu_di);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x00F0); emu_cs = 0x0F3F; f__0F3F_0168_0010_C9EF();
	f__1319_00F0_0011_3F7F();
}

/**
 * Decompiled function f__1319_00F0_0011_3F7F()
 *
 * @name f__1319_00F0_0011_3F7F
 * @implements 1319:00F0:0011:3F7F ()
 *
 * Called From: 1319:00F0:0007:1BD6
 */
void f__1319_00F0_0011_3F7F()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movb(&emu_cx.l, 0x5);
	emu_sarw(&emu_ax.x, emu_cx.l);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_si);
	emu_push(emu_cs);
	emu_push(0x0101); f__1319_001A_0011_30DD();
	f__1319_0101_000B_6FD3();
}

/**
 * Decompiled function f__1319_0101_000B_6FD3()
 *
 * @name f__1319_0101_000B_6FD3
 * @implements 1319:0101:000B:6FD3 ()
 *
 * Called From: 1319:0101:0011:3F7F
 */
void f__1319_0101_000B_6FD3()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_si, emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_si);

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_ss, emu_bp,  0x10);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_ss, emu_bp,  0x12);
	emu_push(0x010C);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x176C1F21: f__176C_1F21_001C_8C6C(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x1319; emu_last_ip = 0x0109; emu_last_length = 0x000B; emu_last_crc = 0x6FD3;
			emu_call();
			return;
	}
	f__1319_010C_003C_691C();
}

/**
 * Decompiled function f__1319_010C_003C_691C()
 *
 * @name f__1319_010C_003C_691C
 * @implements 1319:010C:003C:691C ()
 *
 * Called From: 1319:010C:000B:6FD3
 */
void f__1319_010C_003C_691C()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x14));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__1319_00E2_0007_325C(); return; }
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
	emu_push(0x0148); f__1319_02AC_0020_C75C();
	f__1319_0148_003B_2767();
}

/**
 * Decompiled function f__1319_0148_003B_2767()
 *
 * @name f__1319_0148_003B_2767
 * @implements 1319:0148:003B:2767 ()
 *
 * Called From: 1319:0148:003C:691C
 */
void f__1319_0148_003B_2767()
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
	emu_push(0x0183); f__1319_02AC_0020_C75C();
	f__1319_0183_0014_ADE5();
}

/**
 * Decompiled function f__1319_0183_0014_ADE5()
 *
 * @name f__1319_0183_0014_ADE5
 * @implements 1319:0183:0014:ADE5 ()
 *
 * Called From: 1319:0183:003B:2767
 */
void f__1319_0183_0014_ADE5()
{
	emu_addws(&emu_sp, 0x10);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x0);
	if (!emu_flags.zf) { f__1319_0195_0002_DA3A(); return; }
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0xC), 0x0);
	if (emu_flags.zf) { f__1319_0197_0007_72C9(); return; }
	/* Unresolved jump */ emu_ip = 0x01CB; emu_last_cs = 0x1319; emu_last_ip = 0x0195; emu_last_length = 0x0014; emu_last_crc = 0xADE5; emu_call();
}

/**
 * Decompiled function f__1319_0195_0002_DA3A()
 *
 * @name f__1319_0195_0002_DA3A
 * @implements 1319:0195:0002:DA3A ()
 *
 * Called From: 1319:018D:0014:ADE5
 */
void f__1319_0195_0002_DA3A()
{
	f__1319_01CB_002B_974B(); return;
}

/**
 * Decompiled function f__1319_0197_0007_72C9()
 *
 * @name f__1319_0197_0007_72C9
 * @implements 1319:0197:0007:72C9 ()
 *
 * Called From: 1319:0193:0014:ADE5
 * Called From: 1319:01C6:000A:ACB9
 */
void f__1319_0197_0007_72C9()
{
	emu_cmpw(&emu_si, emu_di);
	if (!emu_flags.zf) { f__1319_019E_0007_1BD6(); return; }
	f__1319_0270_002B_EBE1(); return;
}

/**
 * Decompiled function f__1319_019E_0007_1BD6()
 *
 * @name f__1319_019E_0007_1BD6
 * @implements 1319:019E:0007:1BD6 ()
 *
 * Called From: 1319:0199:0007:72C9
 */
void f__1319_019E_0007_1BD6()
{
	emu_push(emu_di);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x01A5); emu_cs = 0x0F3F; f__0F3F_0168_0010_C9EF();
	f__1319_01A5_0011_7FE0();
}

/**
 * Decompiled function f__1319_01A5_0011_7FE0()
 *
 * @name f__1319_01A5_0011_7FE0
 * @implements 1319:01A5:0011:7FE0 ()
 *
 * Called From: 1319:01A5:0007:1BD6
 */
void f__1319_01A5_0011_7FE0()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movb(&emu_cx.l, 0x5);
	emu_sarw(&emu_ax.x, emu_cx.l);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_si);
	emu_push(emu_cs);
	emu_push(0x01B6); f__1319_001A_0011_30DD();
	f__1319_01B6_000B_6FD3();
}

/**
 * Decompiled function f__1319_01B6_000B_6FD3()
 *
 * @name f__1319_01B6_000B_6FD3
 * @implements 1319:01B6:000B:6FD3 ()
 *
 * Called From: 1319:01B6:0011:7FE0
 */
void f__1319_01B6_000B_6FD3()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_si, emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_si);

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_ss, emu_bp,  0x10);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_ss, emu_bp,  0x12);
	emu_push(0x01C1);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x176C1F21: f__176C_1F21_001C_8C6C(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x1319; emu_last_ip = 0x01BE; emu_last_length = 0x000B; emu_last_crc = 0x6FD3;
			emu_call();
			return;
	}
	f__1319_01C1_000A_ACB9();
}

/**
 * Decompiled function f__1319_01C1_000A_ACB9()
 *
 * @name f__1319_01C1_000A_ACB9
 * @implements 1319:01C1:000A:ACB9 ()
 *
 * Called From: 1319:01C1:000B:6FD3
 */
void f__1319_01C1_000A_ACB9()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x14));
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__1319_0197_0007_72C9(); return; }
	f__1319_00E2_0007_325C(); return;
}

/**
 * Decompiled function f__1319_01CB_002B_974B()
 *
 * @name f__1319_01CB_002B_974B
 * @implements 1319:01CB:002B:974B ()
 *
 * Called From: 1319:0195:0002:DA3A
 */
void f__1319_01CB_002B_974B()
{
	emu_movw(&emu_ax.x, emu_bp - 0x18);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x24), emu_ss);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x26), emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0xC), 0x0);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x01FF; emu_last_cs = 0x1319; emu_last_ip = 0x01D8; emu_last_length = 0x002B; emu_last_crc = 0x974B; emu_call(); return; }
	emu_movw(&emu_ax.x, emu_bp - 0x22);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x24), emu_ss);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x26), emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x0);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x01FF; emu_last_cs = 0x1319; emu_last_ip = 0x01E7; emu_last_length = 0x002B; emu_last_crc = 0x974B; emu_call(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x16));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x20));
	if (!(emu_flags.sf != emu_flags.of)) { f__1319_01F6_0024_7BFA(); return; }
	emu_movw(&emu_ax.x, emu_bp - 0x18);
	f__1319_01F9_0021_2305(); return;
}

/**
 * Decompiled function f__1319_01F6_0024_7BFA()
 *
 * @name f__1319_01F6_0024_7BFA
 * @implements 1319:01F6:0024:7BFA ()
 *
 * Called From: 1319:01EF:002B:974B
 */
void f__1319_01F6_0024_7BFA()
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
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x021A; emu_last_cs = 0x1319; emu_last_ip = 0x0213; emu_last_length = 0x0024; emu_last_crc = 0x7BFA; emu_call(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xE));
	f__1319_0221_0028_703F(); return;
}

/**
 * Decompiled function f__1319_01F9_0021_2305()
 *
 * @name f__1319_01F9_0021_2305
 * @implements 1319:01F9:0021:2305 ()
 *
 * Called From: 1319:01F4:002B:974B
 */
void f__1319_01F9_0021_2305()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x24), emu_ss);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x26), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x26));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x4));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_subw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00, -0x741E));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xE));
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x021A; emu_last_cs = 0x1319; emu_last_ip = 0x0213; emu_last_length = 0x0021; emu_last_crc = 0x2305; emu_call(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xE));
	f__1319_0221_0028_703F(); return;
}

/**
 * Decompiled function f__1319_0221_0028_703F()
 *
 * @name f__1319_0221_0028_703F
 * @implements 1319:0221:0028:703F ()
 *
 * Called From: 1319:0218:0021:2305
 * Called From: 1319:0218:0024:7BFA
 */
void f__1319_0221_0028_703F()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0xE), 0x0);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x0255; emu_last_cs = 0x1319; emu_last_ip = 0x0228; emu_last_length = 0x0028; emu_last_crc = 0x703F; emu_call(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x26));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x8));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00, -0x741C));
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00, -0x741E));
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x741A));
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0249); emu_cs = 0x01F7; f__01F7_28B8_0024_83C9();
	f__1319_0249_000C_B96D();
}

/**
 * Decompiled function f__1319_0249_000C_B96D()
 *
 * @name f__1319_0249_000C_B96D
 * @implements 1319:0249:000C:B96D ()
 *
 * Called From: 1319:0249:0028:703F
 */
void f__1319_0249_000C_B96D()
{
	emu_addws(&emu_sp, 0xA);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_addw(&emu_get_memory16(emu_ds, 0x00, -0x741E), emu_ax.x);
	f__1319_0257_0019_517D(); return;
}

/**
 * Decompiled function f__1319_0257_0019_517D()
 *
 * @name f__1319_0257_0019_517D
 * @implements 1319:0257:0019:517D ()
 *
 * Called From: 1319:0253:000C:B96D
 */
void f__1319_0257_0019_517D()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x26));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x2));
	emu_addw(&emu_get_memory16(emu_ds, 0x00, -0x7420), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_si);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00, -0x741E));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xE));
	if (!(emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x0270; emu_last_cs = 0x1319; emu_last_ip = 0x026B; emu_last_length = 0x0019; emu_last_crc = 0x517D; emu_call(); return; }
	f__1319_0083_0008_AFCE(); return;
}

/**
 * Decompiled function f__1319_025E_0012_E2B7()
 *
 * @name f__1319_025E_0012_E2B7
 * @implements 1319:025E:0012:E2B7 ()
 *
 * Called From: 1319:00D8:0025:EDB4
 */
void f__1319_025E_0012_E2B7()
{
	emu_addw(&emu_get_memory16(emu_ds, 0x00, -0x7420), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_si);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00, -0x741E));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xE));
	if (!(emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x0270; emu_last_cs = 0x1319; emu_last_ip = 0x026B; emu_last_length = 0x0012; emu_last_crc = 0xE2B7; emu_call(); return; }
	f__1319_0083_0008_AFCE(); return;
}

/**
 * Decompiled function f__1319_0265_000B_0A91()
 *
 * @name f__1319_0265_000B_0A91
 * @implements 1319:0265:000B:0A91 ()
 *
 * Called From: 1319:0080:0033:2F64
 */
void f__1319_0265_000B_0A91()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00, -0x741E));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xE));
	if (!(emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x0270; emu_last_cs = 0x1319; emu_last_ip = 0x026B; emu_last_length = 0x000B; emu_last_crc = 0x0A91; emu_call(); return; }
	f__1319_0083_0008_AFCE(); return;
}

/**
 * Decompiled function f__1319_0270_002B_EBE1()
 *
 * @name f__1319_0270_002B_EBE1
 * @implements 1319:0270:002B:EBE1 ()
 *
 * Called From: 1319:0088:0008:AFCE
 * Called From: 1319:00DF:0007:725E
 * Called From: 1319:00E6:0007:325C
 * Called From: 1319:019B:0007:72C9
 */
void f__1319_0270_002B_EBE1()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00, -0x741E));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xE));
	if (!(emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x0288; emu_last_cs = 0x1319; emu_last_ip = 0x0276; emu_last_length = 0x002B; emu_last_crc = 0xEBE1; emu_call(); return; }
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
	emu_push(0x029B); f__1319_03E8_0029_75DE();
	f__1319_029B_000B_29D2();
}

/**
 * Decompiled function f__1319_029B_000B_29D2()
 *
 * @name f__1319_029B_000B_29D2
 * @implements 1319:029B:000B:29D2 ()
 *
 * Called From: 1319:029B:002B:EBE1
 */
void f__1319_029B_000B_29D2()
{
	emu_addws(&emu_sp, 0xA);
	emu_movw(&emu_dx.x, emu_ds);
	emu_movw(&emu_ax.x, 0x8BDE);
	f__1319_004D_0003_9C35(); return;
}

/**
 * Decompiled function f__1319_02A6_0006_F7CE()
 *
 * @name f__1319_02A6_0006_F7CE
 * @implements 1319:02A6:0006:F7CE ()
 *
 * Called From: 1319:004D:0003:9C35
 */
void f__1319_02A6_0006_F7CE()
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
 * Decompiled function f__1319_02AC_0020_C75C()
 *
 * @name f__1319_02AC_0020_C75C
 * @implements 1319:02AC:0020:C75C ()
 *
 * Called From: 1319:0145:003C:691C
 * Called From: 1319:0180:003B:2767
 */
void f__1319_02AC_0020_C75C()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0xA);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_di, emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x02C7; emu_last_cs = 0x1319; emu_last_ip = 0x02BD; emu_last_length = 0x0020; emu_last_crc = 0xC75C; emu_call(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x10));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x12));
	if (!emu_flags.zf) { f__1319_02CC_0022_DE83(); return; }
	emu_xorw(&emu_ax.x, emu_ax.x);
	/* Unresolved jump */ emu_ip = 0x03E2; emu_last_cs = 0x1319; emu_last_ip = 0x02C9; emu_last_length = 0x0020; emu_last_crc = 0xC75C; emu_call();
}

/**
 * Decompiled function f__1319_02C7_0005_9C31()
 *
 * @name f__1319_02C7_0005_9C31
 * @implements 1319:02C7:0005:9C31 ()
 *
 * Called From: 1319:0346:000B:A375
 */
void f__1319_02C7_0005_9C31()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__1319_03E2_0006_F7CE(); return;
}

/**
 * Decompiled function f__1319_02C9_0003_9DA5()
 *
 * @name f__1319_02C9_0003_9DA5
 * @implements 1319:02C9:0003:9DA5 ()
 *
 * Called From: 1319:03AF:0010:2915
 */
void f__1319_02C9_0003_9DA5()
{
	f__1319_03E2_0006_F7CE(); return;
}

/**
 * Decompiled function f__1319_02CC_0022_DE83()
 *
 * @name f__1319_02CC_0022_DE83
 * @implements 1319:02CC:0022:DE83 ()
 *
 * Called From: 1319:02C5:0020:C75C
 */
void f__1319_02CC_0022_DE83()
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
	f__1319_03D6_0009_FEE7(); return;
}

/**
 * Decompiled function f__1319_02EE_000E_09AC()
 *
 * @name f__1319_02EE_000E_09AC
 * @implements 1319:02EE:000E:09AC ()
 *
 * Called From: 1319:03DC:0009:FEE7
 * Called From: 1319:03DC:0011:46B9
 */
void f__1319_02EE_000E_09AC()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_push(emu_di);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_cs);
	emu_push(0x02FC); f__1319_0008_0010_6124();
	f__1319_02FC_0014_F0DD();
}

/**
 * Decompiled function f__1319_02F4_0008_0A8C()
 *
 * @name f__1319_02F4_0008_0A8C
 * @implements 1319:02F4:0008:0A8C ()
 *
 * Called From: 1319:0367:0002:85BA
 */
void f__1319_02F4_0008_0A8C()
{
	emu_push(emu_di);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_cs);
	emu_push(0x02FC); f__1319_0008_0010_6124();
	f__1319_02FC_0014_F0DD();
}

/**
 * Decompiled function f__1319_02FC_0014_F0DD()
 *
 * @name f__1319_02FC_0014_F0DD
 * @implements 1319:02FC:0014:F0DD ()
 *
 * Called From: 1319:02FC:000E:09AC
 * Called From: 1319:02FC:0008:0A8C
 */
void f__1319_02FC_0014_F0DD()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_testw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x1);
	if (emu_flags.zf) { f__1319_033E_000B_A375(); return; }
	emu_push(emu_di);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_cs);
	emu_push(0x0310); f__1319_0008_0010_6124();
	f__1319_0310_000A_9BF3();
}

/**
 * Decompiled function f__1319_0310_000A_9BF3()
 *
 * @name f__1319_0310_000A_9BF3
 * @implements 1319:0310:000A:9BF3 ()
 *
 * Called From: 1319:0310:0014:F0DD
 */
void f__1319_0310_000A_9BF3()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs);
	emu_push(0x031A); f__1319_001A_0011_30DD();
	f__1319_031A_000F_F873();
}

/**
 * Decompiled function f__1319_031A_000F_F873()
 *
 * @name f__1319_031A_000F_F873
 * @implements 1319:031A:000F:F873 ()
 *
 * Called From: 1319:031A:000A:9BF3
 */
void f__1319_031A_000F_F873()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	if (!emu_flags.zf) { f__1319_033E_000B_A375(); return; }
	emu_push(emu_di);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_cs);
	emu_push(0x0329); f__1319_0008_0010_6124();
	f__1319_0329_000F_23C3();
}

/**
 * Decompiled function f__1319_0329_000F_23C3()
 *
 * @name f__1319_0329_000F_23C3
 * @implements 1319:0329:000F:23C3 ()
 *
 * Called From: 1319:0329:000F:F873
 */
void f__1319_0329_000F_23C3()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs);
	emu_push(0x0338); f__1319_001A_0011_30DD();
	f__1319_0338_0006_1D7B();
}

/**
 * Decompiled function f__1319_0338_0006_1D7B()
 *
 * @name f__1319_0338_0006_1D7B
 * @implements 1319:0338:0006:1D7B ()
 *
 * Called From: 1319:0338:000F:23C3
 */
void f__1319_0338_0006_1D7B()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_si, emu_ax.x);
	f__1319_0369_0039_ECFF(); return;
}

/**
 * Decompiled function f__1319_033E_000B_A375()
 *
 * @name f__1319_033E_000B_A375
 * @implements 1319:033E:000B:A375 ()
 *
 * Called From: 1319:0306:0014:F0DD
 * Called From: 1319:031F:000F:F873
 */
void f__1319_033E_000B_A375()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xE));
	if (!emu_flags.zf) { f__1319_0349_000A_5CD5(); return; }
	f__1319_02C7_0005_9C31(); return;
}

/**
 * Decompiled function f__1319_0349_000A_5CD5()
 *
 * @name f__1319_0349_000A_5CD5
 * @implements 1319:0349:000A:5CD5 ()
 *
 * Called From: 1319:0344:000B:A375
 */
void f__1319_0349_000A_5CD5()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs);
	emu_push(0x0353); f__1319_001A_0011_30DD();
	f__1319_0353_000B_6FF3();
}

/**
 * Decompiled function f__1319_0353_000B_6FF3()
 *
 * @name f__1319_0353_000B_6FF3
 * @implements 1319:0353:000B:6FF3 ()
 *
 * Called From: 1319:0353:000A:5CD5
 */
void f__1319_0353_000B_6FF3()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_si, emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_si);

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_ss, emu_bp,  0x10);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_ss, emu_bp,  0x12);
	emu_push(0x035E);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x176C1F21: f__176C_1F21_001C_8C6C(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x1319; emu_last_ip = 0x035B; emu_last_length = 0x000B; emu_last_crc = 0x6FF3;
			emu_call();
			return;
	}
	f__1319_035E_0009_F086();
}

/**
 * Decompiled function f__1319_035E_0009_F086()
 *
 * @name f__1319_035E_0009_F086
 * @implements 1319:035E:0009:F086 ()
 *
 * Called From: 1319:035E:000B:6FF3
 */
void f__1319_035E_0009_F086()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x14));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__1319_0367_0002_85BA(); return; }
	f__1319_0369_0039_ECFF(); return;
}

/**
 * Decompiled function f__1319_0367_0002_85BA()
 *
 * @name f__1319_0367_0002_85BA
 * @implements 1319:0367:0002:85BA ()
 *
 * Called From: 1319:0363:0009:F086
 */
void f__1319_0367_0002_85BA()
{
	f__1319_02F4_0008_0A8C(); return;
}

/**
 * Decompiled function f__1319_0369_0039_ECFF()
 *
 * @name f__1319_0369_0039_ECFF
 * @implements 1319:0369:0039:ECFF ()
 *
 * Called From: 1319:033C:0006:1D7B
 * Called From: 1319:0365:0009:F086
 */
void f__1319_0369_0039_ECFF()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ss, emu_bp, -0x2));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), emu_ax.l);
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_cmpw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0x6));
	if (!emu_flags.zf) { f__1319_03B2_000B_BCE4(); return; }
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
	emu_push(0x03A2); f__1319_03E8_0029_75DE();
	f__1319_03A2_0010_2915();
}

/**
 * Decompiled function f__1319_03A2_0010_2915()
 *
 * @name f__1319_03A2_0010_2915
 * @implements 1319:03A2:0010:2915 ()
 *
 * Called From: 1319:03A2:0039:ECFF
 */
void f__1319_03A2_0010_2915()
{
	emu_addws(&emu_sp, 0xA);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_decw(&emu_get_memory16(emu_es, emu_bx.x,  0x4));
	emu_movw(&emu_ax.x, 0x1);
	f__1319_02C9_0003_9DA5(); return;
}

/**
 * Decompiled function f__1319_03B2_000B_BCE4()
 *
 * @name f__1319_03B2_000B_BCE4
 * @implements 1319:03B2:000B:BCE4 ()
 *
 * Called From: 1319:037B:0039:ECFF
 */
void f__1319_03B2_000B_BCE4()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx.x,  0x0), emu_si);
	if (!emu_flags.zf) { f__1319_03BD_0011_C8A7(); return; }
	/* Unresolved jump */ emu_ip = 0x02C7; emu_last_cs = 0x1319; emu_last_ip = 0x03BA; emu_last_length = 0x000B; emu_last_crc = 0xBCE4; emu_call();
}

/**
 * Decompiled function f__1319_03BD_0011_C8A7()
 *
 * @name f__1319_03BD_0011_C8A7
 * @implements 1319:03BD:0011:C8A7 ()
 *
 * Called From: 1319:03B8:000B:BCE4
 */
void f__1319_03BD_0011_C8A7()
{
	emu_movw(&emu_ax.x, emu_di);
	emu_negw(&emu_ax.x, emu_ax.x);
	emu_movw(&emu_dx.x, 0x3);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_cs);
	emu_push(0x03CE); f__1319_0008_0010_6124();
	f__1319_03CE_0011_46B9();
}

/**
 * Decompiled function f__1319_03CE_0011_46B9()
 *
 * @name f__1319_03CE_0011_46B9
 * @implements 1319:03CE:0011:46B9 ()
 *
 * Called From: 1319:03CE:0011:C8A7
 */
void f__1319_03CE_0011_46B9()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0xE), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_si);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x64);
	if (!(emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x03DF; emu_last_cs = 0x1319; emu_last_ip = 0x03DA; emu_last_length = 0x0011; emu_last_crc = 0x46B9; emu_call(); return; }
	f__1319_02EE_000E_09AC(); return;
}

/**
 * Decompiled function f__1319_03D6_0009_FEE7()
 *
 * @name f__1319_03D6_0009_FEE7
 * @implements 1319:03D6:0009:FEE7 ()
 *
 * Called From: 1319:02EB:0022:DE83
 */
void f__1319_03D6_0009_FEE7()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x64);
	if (!(emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x03DF; emu_last_cs = 0x1319; emu_last_ip = 0x03DA; emu_last_length = 0x0009; emu_last_crc = 0xFEE7; emu_call(); return; }
	f__1319_02EE_000E_09AC(); return;
}

/**
 * Decompiled function f__1319_03E2_0006_F7CE()
 *
 * @name f__1319_03E2_0006_F7CE
 * @implements 1319:03E2:0006:F7CE ()
 *
 * Called From: 1319:02C9:0005:9C31
 * Called From: 1319:02C9:0003:9DA5
 */
void f__1319_03E2_0006_F7CE()
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
 * Decompiled function f__1319_03E8_0029_75DE()
 *
 * @name f__1319_03E8_0029_75DE
 * @implements 1319:03E8:0029:75DE ()
 *
 * Called From: 1319:0298:002B:EBE1
 * Called From: 1319:039F:0039:ECFF
 */
void f__1319_03E8_0029_75DE()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0xC);
	emu_push(emu_si);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x040C; emu_last_cs = 0x1319; emu_last_ip = 0x03F5; emu_last_length = 0x0029; emu_last_crc = 0x75DE; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x6));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x8));
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x040C; emu_last_cs = 0x1319; emu_last_ip = 0x0402; emu_last_length = 0x0029; emu_last_crc = 0x75DE; emu_call(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xC));
	if (!emu_flags.zf) { f__1319_0411_0029_FBDA(); return; }
	emu_xorw(&emu_ax.x, emu_ax.x);
	/* Unresolved jump */ emu_ip = 0x0680; emu_last_cs = 0x1319; emu_last_ip = 0x040E; emu_last_length = 0x0029; emu_last_crc = 0x75DE; emu_call();
}

/**
 * Decompiled function f__1319_040E_0003_DC3B()
 *
 * @name f__1319_040E_0003_DC3B
 * @implements 1319:040E:0003:DC3B ()
 *
 * Called From: 1319:067D:0021:392D
 * Called From: 1319:067D:0043:648A
 * Called From: 1319:067D:0024:C1DC
 */
void f__1319_040E_0003_DC3B()
{
	f__1319_0680_0005_8BCF(); return;
}

/**
 * Decompiled function f__1319_0411_0029_FBDA()
 *
 * @name f__1319_0411_0029_FBDA
 * @implements 1319:0411:0029:FBDA ()
 *
 * Called From: 1319:040A:0029:75DE
 */
void f__1319_0411_0029_FBDA()
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
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__1319_043A_0015_C2CA(); return; }
	f__1319_05DB_003C_80DA(); return;
}

/**
 * Decompiled function f__1319_043A_0015_C2CA()
 *
 * @name f__1319_043A_0015_C2CA
 * @implements 1319:043A:0015:C2CA ()
 *
 * Called From: 1319:0435:0029:FBDA
 */
void f__1319_043A_0015_C2CA()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x8));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_es, emu_bx.x,  0x6));
	emu_incw(&emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_dx.x);
	f__1319_05CF_000C_DFB8(); return;
}

/**
 * Decompiled function f__1319_044F_000F_FA79()
 *
 * @name f__1319_044F_000F_FA79
 * @implements 1319:044F:000F:FA79 ()
 *
 * Called From: 1319:05D8:000C:DFB8
 * Called From: 1319:05D8:0013:EEE0
 */
void f__1319_044F_000F_FA79()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_decw(&emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_dx.x);
	f__1319_0461_002A_77D7(); return;
}

/**
 * Decompiled function f__1319_045E_002D_0B2F()
 *
 * @name f__1319_045E_002D_0B2F
 * @implements 1319:045E:002D:0B2F ()
 *
 * Called From: 1319:047D:002A:77D7
 */
void f__1319_045E_002D_0B2F()
{
	emu_decw(&emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0xFE);
	if (!emu_flags.zf) { f__1319_047F_000C_E53D(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x8));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_es, emu_bx.x,  0x6));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x045E; emu_last_cs = 0x1319; emu_last_ip = 0x0478; emu_last_length = 0x002D; emu_last_crc = 0x0B2F; emu_call(); return; }
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x045E; emu_last_cs = 0x1319; emu_last_ip = 0x047D; emu_last_length = 0x002D; emu_last_crc = 0x0B2F; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0xFE);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x048B; emu_last_cs = 0x1319; emu_last_ip = 0x0486; emu_last_length = 0x002D; emu_last_crc = 0x0B2F; emu_call(); return; }
	/* Unresolved jump */ emu_ip = 0x05CC; emu_last_cs = 0x1319; emu_last_ip = 0x0488; emu_last_length = 0x002D; emu_last_crc = 0x0B2F; emu_call();
}

/**
 * Decompiled function f__1319_0461_002A_77D7()
 *
 * @name f__1319_0461_002A_77D7
 * @implements 1319:0461:002A:77D7 ()
 *
 * Called From: 1319:045C:000F:FA79
 */
void f__1319_0461_002A_77D7()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0xFE);
	if (!emu_flags.zf) { f__1319_047F_000C_E53D(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x8));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_es, emu_bx.x,  0x6));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x045E; emu_last_cs = 0x1319; emu_last_ip = 0x0478; emu_last_length = 0x002A; emu_last_crc = 0x77D7; emu_call(); return; }
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	if (!emu_flags.zf) { f__1319_045E_002D_0B2F(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0xFE);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x048B; emu_last_cs = 0x1319; emu_last_ip = 0x0486; emu_last_length = 0x002A; emu_last_crc = 0x77D7; emu_call(); return; }
	/* Unresolved jump */ emu_ip = 0x05CC; emu_last_cs = 0x1319; emu_last_ip = 0x0488; emu_last_length = 0x002A; emu_last_crc = 0x77D7; emu_call();
}

/**
 * Decompiled function f__1319_047F_000C_E53D()
 *
 * @name f__1319_047F_000C_E53D
 * @implements 1319:047F:000C:E53D ()
 *
 * Called From: 1319:0468:002A:77D7
 * Called From: 1319:0468:002D:0B2F
 */
void f__1319_047F_000C_E53D()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0xFE);
	if (!emu_flags.zf) { f__1319_048B_0041_DC57(); return; }
	/* Unresolved jump */ emu_ip = 0x05CC; emu_last_cs = 0x1319; emu_last_ip = 0x0488; emu_last_length = 0x000C; emu_last_crc = 0xE53D; emu_call();
}

/**
 * Decompiled function f__1319_048B_0041_DC57()
 *
 * @name f__1319_048B_0041_DC57
 * @implements 1319:048B:0041:DC57 ()
 *
 * Called From: 1319:0486:000C:E53D
 */
void f__1319_048B_0041_DC57()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x0));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_subb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x0));
	emu_movb(&emu_get_memory8(emu_ss, emu_bp, -0x9), emu_ax.l);
	emu_cmpb(&emu_get_memory8(emu_ss, emu_bp, -0x9), 0x0);
	if (!(emu_flags.sf != emu_flags.of)) { f__1319_04A8_0024_5412(); return; }
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ss, emu_bp, -0x9));
	emu_addb(&emu_ax.l, 0x8);
	emu_movb(&emu_get_memory8(emu_ss, emu_bp, -0x9), emu_ax.l);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ss, emu_bp, -0x9));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ds, emu_bx.x,  0x3792));
	emu_movb(&emu_get_memory8(emu_ss, emu_bp, -0x9), emu_ax.l);
	emu_cmpb(&emu_get_memory8(emu_ss, emu_bp, -0x9), 0x3);
	if (!emu_flags.zf) { f__1319_04CC_0009_D11F(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0xFE);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0xFE);
	f__1319_05CC_000F_E0A6(); return;
}

/**
 * Decompiled function f__1319_04A8_0024_5412()
 *
 * @name f__1319_04A8_0024_5412
 * @implements 1319:04A8:0024:5412 ()
 *
 * Called From: 1319:049E:0041:DC57
 */
void f__1319_04A8_0024_5412()
{
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ss, emu_bp, -0x9));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ds, emu_bx.x,  0x3792));
	emu_movb(&emu_get_memory8(emu_ss, emu_bp, -0x9), emu_ax.l);
	emu_cmpb(&emu_get_memory8(emu_ss, emu_bp, -0x9), 0x3);
	if (!emu_flags.zf) { f__1319_04CC_0009_D11F(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0xFE);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0xFE);
	/* Unresolved jump */ emu_ip = 0x05CC; emu_last_cs = 0x1319; emu_last_ip = 0x04C9; emu_last_length = 0x0024; emu_last_crc = 0x5412; emu_call();
}

/**
 * Decompiled function f__1319_04CC_0009_D11F()
 *
 * @name f__1319_04CC_0009_D11F
 * @implements 1319:04CC:0009:D11F ()
 *
 * Called From: 1319:04B9:0024:5412
 * Called From: 1319:04B9:0041:DC57
 */
void f__1319_04CC_0009_D11F()
{
	emu_cmpb(&emu_get_memory8(emu_ss, emu_bp, -0x9), 0x0);
	if (!emu_flags.zf) { f__1319_04D5_0014_50D6(); return; }
	f__1319_05BB_000D_E8A9(); return;
}

/**
 * Decompiled function f__1319_04D5_0014_50D6()
 *
 * @name f__1319_04D5_0014_50D6
 * @implements 1319:04D5:0014:50D6 ()
 *
 * Called From: 1319:04D0:0009:D11F
 */
void f__1319_04D5_0014_50D6()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_testb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0x1);
	if (emu_flags.zf) { f__1319_0543_0011_B2DC(); return; }
	emu_cmpb(&emu_get_memory8(emu_ss, emu_bp, -0x9), 0x0);
	if (!(emu_flags.sf != emu_flags.of)) { f__1319_04E9_0010_D9ED(); return; }
	emu_movw(&emu_ax.x, 0xFFFF);
	f__1319_04EC_000D_DB55(); return;
}

/**
 * Decompiled function f__1319_04E9_0010_D9ED()
 *
 * @name f__1319_04E9_0010_D9ED
 * @implements 1319:04E9:0010:D9ED ()
 *
 * Called From: 1319:04E2:0014:50D6
 */
void f__1319_04E9_0010_D9ED()
{
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x0));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x04F9); f__1319_0008_0010_6124();
	f__1319_04F9_0013_FEBC();
}

/**
 * Decompiled function f__1319_04EC_000D_DB55()
 *
 * @name f__1319_04EC_000D_DB55
 * @implements 1319:04EC:000D:DB55 ()
 *
 * Called From: 1319:04E7:0014:50D6
 */
void f__1319_04EC_000D_DB55()
{
	emu_push(emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x0));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x04F9); f__1319_0008_0010_6124();
	f__1319_04F9_0013_FEBC();
}

/**
 * Decompiled function f__1319_04F9_0013_FEBC()
 *
 * @name f__1319_04F9_0013_FEBC
 * @implements 1319:04F9:0013:FEBC ()
 *
 * Called From: 1319:04F9:000D:DB55
 * Called From: 1319:04F9:0010:D9ED
 */
void f__1319_04F9_0013_FEBC()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_ax.x);
	emu_cmpb(&emu_get_memory8(emu_ss, emu_bp, -0x9), 0x0);
	if (!(emu_flags.sf != emu_flags.of)) { f__1319_050C_0014_5C8F(); return; }
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ss, emu_bp, -0x9));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_negw(&emu_ax.x, emu_ax.x);
	f__1319_0510_0010_787A(); return;
}

/**
 * Decompiled function f__1319_050C_0014_5C8F()
 *
 * @name f__1319_050C_0014_5C8F
 * @implements 1319:050C:0014:5C8F ()
 *
 * Called From: 1319:0502:0013:FEBC
 */
void f__1319_050C_0014_5C8F()
{
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ss, emu_bp, -0x9));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_cmpw(&emu_ax.x, 0x1);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0541; emu_last_cs = 0x1319; emu_last_ip = 0x0513; emu_last_length = 0x0014; emu_last_crc = 0x5C8F; emu_call(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_si);
	emu_push(emu_cs);
	emu_push(0x0520); f__1319_001A_0011_30DD();
	f__1319_0520_0006_FC3B();
}

/**
 * Decompiled function f__1319_0510_0010_787A()
 *
 * @name f__1319_0510_0010_787A
 * @implements 1319:0510:0010:787A ()
 *
 * Called From: 1319:050A:0013:FEBC
 */
void f__1319_0510_0010_787A()
{
	emu_cmpw(&emu_ax.x, 0x1);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0541; emu_last_cs = 0x1319; emu_last_ip = 0x0513; emu_last_length = 0x0010; emu_last_crc = 0x787A; emu_call(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_si);
	emu_push(emu_cs);
	emu_push(0x0520); f__1319_001A_0011_30DD();
	f__1319_0520_0006_FC3B();
}

/**
 * Decompiled function f__1319_0520_0006_FC3B()
 *
 * @name f__1319_0520_0006_FC3B
 * @implements 1319:0520:0006:FC3B ()
 *
 * Called From: 1319:0520:0010:787A
 * Called From: 1319:0520:0014:5C8F
 */
void f__1319_0520_0006_FC3B()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_push(emu_ax.x);

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_ss, emu_bp,  0xA);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_ss, emu_bp,  0xC);
	emu_push(0x0526);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x176C1F21: f__176C_1F21_001C_8C6C(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x1319; emu_last_ip = 0x0523; emu_last_length = 0x0006; emu_last_crc = 0xFC3B;
			emu_call();
			return;
	}
	f__1319_0526_001B_1B09();
}

/**
 * Decompiled function f__1319_0526_001B_1B09()
 *
 * @name f__1319_0526_001B_1B09
 * @implements 1319:0526:001B:1B09 ()
 *
 * Called From: 1319:0526:0006:FC3B
 */
void f__1319_0526_001B_1B09()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xE));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__1319_053F_0002_FD3A(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ss, emu_bp, -0xC));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), emu_ax.l);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ss, emu_bp, -0xC));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), emu_ax.l);
	/* Unresolved jump */ emu_ip = 0x05BB; emu_last_cs = 0x1319; emu_last_ip = 0x053F; emu_last_length = 0x001B; emu_last_crc = 0x1B09; emu_call();
}

/**
 * Decompiled function f__1319_053F_0002_FD3A()
 *
 * @name f__1319_053F_0002_FD3A
 * @implements 1319:053F:0002:FD3A ()
 *
 * Called From: 1319:052B:001B:1B09
 */
void f__1319_053F_0002_FD3A()
{
	f__1319_05BB_000D_E8A9(); return;
}

/**
 * Decompiled function f__1319_0543_0011_B2DC()
 *
 * @name f__1319_0543_0011_B2DC
 * @implements 1319:0543:0011:B2DC ()
 *
 * Called From: 1319:04DC:0014:50D6
 */
void f__1319_0543_0011_B2DC()
{
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ss, emu_bp, -0x9));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_push(emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x0));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x0554); f__1319_0008_0010_6124();
	f__1319_0554_0017_E8C9();
}

/**
 * Decompiled function f__1319_0554_0017_E8C9()
 *
 * @name f__1319_0554_0017_E8C9
 * @implements 1319:0554:0017:E8C9 ()
 *
 * Called From: 1319:0554:0011:B2DC
 */
void f__1319_0554_0017_E8C9()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ss, emu_bp, -0xC));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), emu_ax.l);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0xFE);
	f__1319_056E_0037_A4A5(); return;
}

/**
 * Decompiled function f__1319_056B_003A_6742()
 *
 * @name f__1319_056B_003A_6742
 * @implements 1319:056B:003A:6742 ()
 *
 * Called From: 1319:058A:0037:A4A5
 */
void f__1319_056B_003A_6742()
{
	emu_decw(&emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0xFE);
	if (!emu_flags.zf) { f__1319_058C_0019_F032(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x8));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_es, emu_bx.x,  0x6));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x056B; emu_last_cs = 0x1319; emu_last_ip = 0x0585; emu_last_length = 0x003A; emu_last_crc = 0x6742; emu_call(); return; }
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x056B; emu_last_cs = 0x1319; emu_last_ip = 0x058A; emu_last_length = 0x003A; emu_last_crc = 0x6742; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0xFE);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x05B3; emu_last_cs = 0x1319; emu_last_ip = 0x0593; emu_last_length = 0x003A; emu_last_crc = 0x6742; emu_call(); return; }
	emu_movw(&emu_ax.x, 0x4);
	emu_push(emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x0));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	/* Unresolved call */ emu_push(0x05A5); emu_ip = 0x0008; emu_last_cs = 0x1319; emu_last_ip = 0x05A2; emu_last_length = 0x003A; emu_last_crc = 0x6742; emu_call();
	f__1319_05A5_0008_DB18();
}

/**
 * Decompiled function f__1319_056E_0037_A4A5()
 *
 * @name f__1319_056E_0037_A4A5
 * @implements 1319:056E:0037:A4A5 ()
 *
 * Called From: 1319:0569:0017:E8C9
 */
void f__1319_056E_0037_A4A5()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0xFE);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x058C; emu_last_cs = 0x1319; emu_last_ip = 0x0575; emu_last_length = 0x0037; emu_last_crc = 0xA4A5; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x8));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_es, emu_bx.x,  0x6));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x056B; emu_last_cs = 0x1319; emu_last_ip = 0x0585; emu_last_length = 0x0037; emu_last_crc = 0xA4A5; emu_call(); return; }
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	if (!emu_flags.zf) { f__1319_056B_003A_6742(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0xFE);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x05B3; emu_last_cs = 0x1319; emu_last_ip = 0x0593; emu_last_length = 0x0037; emu_last_crc = 0xA4A5; emu_call(); return; }
	emu_movw(&emu_ax.x, 0x4);
	emu_push(emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x0));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	/* Unresolved call */ emu_push(0x05A5); emu_ip = 0x0008; emu_last_cs = 0x1319; emu_last_ip = 0x05A2; emu_last_length = 0x0037; emu_last_crc = 0xA4A5; emu_call();
	f__1319_05A5_0008_DB18();
}

/**
 * Decompiled function f__1319_058C_0019_F032()
 *
 * @name f__1319_058C_0019_F032
 * @implements 1319:058C:0019:F032 ()
 *
 * Called From: 1319:0575:003A:6742
 */
void f__1319_058C_0019_F032()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0xFE);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x05B3; emu_last_cs = 0x1319; emu_last_ip = 0x0593; emu_last_length = 0x0019; emu_last_crc = 0xF032; emu_call(); return; }
	emu_movw(&emu_ax.x, 0x4);
	emu_push(emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x0));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x05A5); f__1319_0008_0010_6124();
	f__1319_05A5_0008_DB18();
}

/**
 * Decompiled function f__1319_05A5_0008_DB18()
 *
 * @name f__1319_05A5_0008_DB18
 * @implements 1319:05A5:0008:DB18 ()
 *
 * Called From: 1319:05A5:0019:F032
 */
void f__1319_05A5_0008_DB18()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_push(emu_ax.x);
	emu_push(emu_si);
	emu_push(emu_cs);
	emu_push(0x05AD); f__1319_001A_0011_30DD();
	f__1319_05AD_0006_0BFB();
}

/**
 * Decompiled function f__1319_05AD_0006_0BFB()
 *
 * @name f__1319_05AD_0006_0BFB
 * @implements 1319:05AD:0006:0BFB ()
 *
 * Called From: 1319:05AD:0008:DB18
 */
void f__1319_05AD_0006_0BFB()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_si, emu_ax.x);
	f__1319_05B9_0002_CA3A(); return;
}

/**
 * Decompiled function f__1319_05B9_0002_CA3A()
 *
 * @name f__1319_05B9_0002_CA3A
 * @implements 1319:05B9:0002:CA3A ()
 *
 * Called From: 1319:05B1:0006:0BFB
 */
void f__1319_05B9_0002_CA3A()
{
	f__1319_05CF_000C_DFB8(); return;
}

/**
 * Decompiled function f__1319_05BB_000D_E8A9()
 *
 * @name f__1319_05BB_000D_E8A9
 * @implements 1319:05BB:000D:E8A9 ()
 *
 * Called From: 1319:04D2:0009:D11F
 * Called From: 1319:053F:0002:FD3A
 */
void f__1319_05BB_000D_E8A9()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x0));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_push(emu_ax.x);
	emu_push(emu_si);
	emu_push(emu_cs);
	emu_push(0x05C8); f__1319_001A_0011_30DD();
	f__1319_05C8_0013_EEE0();
}

/**
 * Decompiled function f__1319_05C8_0013_EEE0()
 *
 * @name f__1319_05C8_0013_EEE0
 * @implements 1319:05C8:0013:EEE0 ()
 *
 * Called From: 1319:05C8:000D:E8A9
 */
void f__1319_05C8_0013_EEE0()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_si, emu_ax.x);
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0xFF);
	if (emu_flags.zf) { f__1319_05DB_003C_80DA(); return; }
	f__1319_044F_000F_FA79(); return;
}

/**
 * Decompiled function f__1319_05CC_000F_E0A6()
 *
 * @name f__1319_05CC_000F_E0A6
 * @implements 1319:05CC:000F:E0A6 ()
 *
 * Called From: 1319:04C9:0041:DC57
 */
void f__1319_05CC_000F_E0A6()
{
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0xFF);
	if (emu_flags.zf) { f__1319_05DB_003C_80DA(); return; }
	/* Unresolved jump */ emu_ip = 0x044F; emu_last_cs = 0x1319; emu_last_ip = 0x05D8; emu_last_length = 0x000F; emu_last_crc = 0xE0A6; emu_call();
}

/**
 * Decompiled function f__1319_05CF_000C_DFB8()
 *
 * @name f__1319_05CF_000C_DFB8
 * @implements 1319:05CF:000C:DFB8 ()
 *
 * Called From: 1319:044C:0015:C2CA
 * Called From: 1319:05B9:0002:CA3A
 */
void f__1319_05CF_000C_DFB8()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0xFF);
	if (emu_flags.zf) { f__1319_05DB_003C_80DA(); return; }
	f__1319_044F_000F_FA79(); return;
}

/**
 * Decompiled function f__1319_05DB_003C_80DA()
 *
 * @name f__1319_05DB_003C_80DA
 * @implements 1319:05DB:003C:80DA ()
 *
 * Called From: 1319:0437:0029:FBDA
 * Called From: 1319:05D6:0013:EEE0
 * Called From: 1319:05D6:000C:DFB8
 * Called From: 1319:05D6:000F:E0A6
 */
void f__1319_05DB_003C_80DA()
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
	f__1319_065F_0021_392D(); return;
}

/**
 * Decompiled function f__1319_0617_0016_C894()
 *
 * @name f__1319_0617_0016_C894
 * @implements 1319:0617:0016:C894 ()
 *
 * Called From: 1319:0666:0021:392D
 * Called From: 1319:0666:0043:648A
 * Called From: 1319:0666:0024:C1DC
 */
void f__1319_0617_0016_C894()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0xFE);
	if (emu_flags.zf) { f__1319_065C_0024_C1DC(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x0));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_push(emu_ax.x);
	emu_push(emu_si);
	emu_push(emu_cs);
	emu_push(0x062D); f__1319_001A_0011_30DD();
	f__1319_062D_0010_D054();
}

/**
 * Decompiled function f__1319_062D_0010_D054()
 *
 * @name f__1319_062D_0010_D054
 * @implements 1319:062D:0010:D054 ()
 *
 * Called From: 1319:062D:0016:C894
 */
void f__1319_062D_0010_D054()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_si, emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x0));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_push(emu_ax.x);
	emu_push(emu_si);

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_ss, emu_bp,  0xA);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_ss, emu_bp,  0xC);
	emu_push(0x063D);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x176C1F21: f__176C_1F21_001C_8C6C(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x1319; emu_last_ip = 0x063A; emu_last_length = 0x0010; emu_last_crc = 0xD054;
			emu_call();
			return;
	}
	f__1319_063D_0043_648A();
}

/**
 * Decompiled function f__1319_063D_0043_648A()
 *
 * @name f__1319_063D_0043_648A
 * @implements 1319:063D:0043:648A ()
 *
 * Called From: 1319:063D:0010:D054
 */
void f__1319_063D_0043_648A()
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
	if (!emu_flags.zf) { f__1319_0617_0016_C894(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_incw(&emu_get_memory16(emu_es, emu_bx.x,  0x4));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0xFF);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x4));
	f__1319_040E_0003_DC3B(); return;
}

/**
 * Decompiled function f__1319_065C_0024_C1DC()
 *
 * @name f__1319_065C_0024_C1DC
 * @implements 1319:065C:0024:C1DC ()
 *
 * Called From: 1319:061E:0016:C894
 */
void f__1319_065C_0024_C1DC()
{
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0xFF);
	if (!emu_flags.zf) { f__1319_0617_0016_C894(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_incw(&emu_get_memory16(emu_es, emu_bx.x,  0x4));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0xFF);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x4));
	f__1319_040E_0003_DC3B(); return;
}

/**
 * Decompiled function f__1319_065F_0021_392D()
 *
 * @name f__1319_065F_0021_392D
 * @implements 1319:065F:0021:392D ()
 *
 * Called From: 1319:0615:003C:80DA
 */
void f__1319_065F_0021_392D()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0xFF);
	if (!emu_flags.zf) { f__1319_0617_0016_C894(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_incw(&emu_get_memory16(emu_es, emu_bx.x,  0x4));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0xFF);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x4));
	f__1319_040E_0003_DC3B(); return;
}

/**
 * Decompiled function f__1319_0680_0005_8BCF()
 *
 * @name f__1319_0680_0005_8BCF
 * @implements 1319:0680:0005:8BCF ()
 *
 * Called From: 1319:040E:0003:DC3B
 */
void f__1319_0680_0005_8BCF()
{
	emu_pop(&emu_si);
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

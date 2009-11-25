/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__1319_0008_0010_6124()
 *
 * @name f__1319_0008_0010_6124
 * @implements 1319:0008:0010:6124 ()
 * @implements 1319:0018:0002:2597
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
l__0008:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_dx = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_addw(&emu_dx, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_andw(&emu_dx, 0x7);
	emu_ax = emu_dx;
	goto l__0018;
l__0018:
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
 * @implements 1319:002B:0002:2597
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
l__001A:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_bx = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_shlw(&emu_bx, 0x1);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_addw(&emu_ax, emu_get_memory16(emu_ds, emu_bx, 0x3782));
	goto l__002B;
l__002B:
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
 * @implements 1319:004D:0003:9C35
 * @implements 1319:0050:0033:2F64
 * @implements 1319:0083:0008:AFCE
 * @implements 1319:008B:0009:C4BD
 * @implements 1319:0094:0017:1502
 * @implements 1319:00AB:000B:6FE3
 * @implements 1319:00B6:0025:EDB4
 * @implements 1319:00DB:0007:725E
 * @implements 1319:00E2:0007:325C
 * @implements 1319:00E9:0007:1BD6
 * @implements 1319:00F0:0011:3F7F
 * @implements 1319:0101:000B:6FD3
 * @implements 1319:010C:003C:691C
 * @implements 1319:0148:003B:2767
 * @implements 1319:0183:0014:ADE5
 * @implements 1319:0195:0002:DA3A
 * @implements 1319:0197:0007:72C9
 * @implements 1319:019E:0007:1BD6
 * @implements 1319:01A5:0011:7FE0
 * @implements 1319:01B6:000B:6FD3
 * @implements 1319:01C1:000A:ACB9
 * @implements 1319:01CB:002B:974B
 * @implements 1319:01F6:0024:7BFA
 * @implements 1319:01F9:0021:2305
 * @implements 1319:01FF:001B:E2D4
 * @implements 1319:021A:002F:6D53
 * @implements 1319:0221:0028:703F
 * @implements 1319:0249:000C:B96D
 * @implements 1319:0257:0019:517D
 * @implements 1319:025E:0012:E2B7
 * @implements 1319:0265:000B:0A91
 * @implements 1319:0270:002B:EBE1
 * @implements 1319:0288:0013:A7F7
 * @implements 1319:029B:000B:29D2
 * @implements 1319:02A6:0006:F7CE
 *
 * Called From: 176C:1FFA:001E:A340
 */
void f__1319_002D_0023_320C()
{
l__002D:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0xF2);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_di = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0xA);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0xC));
	if (emu_ax == 0) { /* Unresolved jump */ emu_ip = 0x0049; emu_last_cs = 0x1319; emu_last_ip = 0x003F; emu_last_length = 0x0023; emu_last_crc = 0x320C; emu_call(); return; }
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x10);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x12));
	if (emu_ax != 0) goto l__0050;
	emu_xorw(&emu_dx, emu_dx);
	emu_xorw(&emu_ax, emu_ax);
l__004D:
	goto l__02A6;
l__0050:
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_get_memory16(emu_ds, 0x00, 0x8BDE) = emu_ax;
	emu_get_memory16(emu_ds, 0x00, 0x8BE0) = 0x0;
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0xC);
	emu_dx = emu_get_memory16(emu_ss, emu_bp,  0xA);
	emu_get_memory16(emu_ds, 0x00, 0x8BE6) = emu_ax;
	emu_get_memory16(emu_ds, 0x00, 0x8BE4) = emu_dx;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8BE4));
	emu_get_memory8(emu_es, emu_bx, 0x0) = 0xFF;
	emu_get_memory16(emu_ds, 0x00, 0x8BE2) = 0x0;
	emu_decw(&emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ax;
	goto l__0265;
l__0083:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_di);
	if (emu_get_memory16(emu_ss, emu_bp, -0x2) != emu_di) goto l__008B;
	goto l__0270;
l__008B:
	emu_push(emu_di);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_cs); emu_push(0x0094); emu_cs = 0x0F3F; f__0F3F_0168_0010_C9EF();
l__0094:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_cl = 0x5;
	emu_sarw(&emu_ax, emu_cl);
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_andw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x7);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_cs);
	emu_push(0x00AB); f__1319_001A_0011_30DD();
l__00AB:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_si = emu_ax;
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
l__00B6:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x8);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x14));
	if ((int16)emu_ax > (int16)emu_get_memory16(emu_ss, emu_bp,  0x14)) goto l__00DB;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8BE4));
	emu_addw(&emu_bx, emu_get_memory16(emu_ds, 0x00, 0x8BE2));
	emu_al = emu_get_memory8(emu_ss, emu_bp, -0x4);
	emu_get_memory8(emu_es, emu_bx, 0x0) = emu_al;
	emu_incw(&emu_get_memory16(emu_ds, 0x00, 0x8BE2));
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x8);
	goto l__025E;
l__00DB:
	emu_cmpw(&emu_si, emu_di);
	if (emu_si != emu_di) goto l__00E2;
	goto l__0270;
l__00E2:
	emu_cmpw(&emu_si, emu_di);
	if (emu_si != emu_di) goto l__00E9;
	goto l__0270;
l__00E9:
	emu_push(emu_di);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x00F0); emu_cs = 0x0F3F; f__0F3F_0168_0010_C9EF();
l__00F0:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_cl = 0x5;
	emu_sarw(&emu_ax, emu_cl);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_ax;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_si);
	emu_push(emu_cs);
	emu_push(0x0101); f__1319_001A_0011_30DD();
l__0101:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_si = emu_ax;
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
l__010C:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x14));
	if ((int16)emu_ax > (int16)emu_get_memory16(emu_ss, emu_bp,  0x14)) goto l__00E2;
	emu_movw(&emu_ax, emu_bp - 0x8C);
	emu_get_memory16(emu_ss, emu_bp, -0x10) = emu_ss;
	emu_get_memory16(emu_ss, emu_bp, -0x12) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x16) = 0x0;
	emu_get_memory16(emu_ss, emu_bp, -0x14) = 0x0;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x2);
	emu_get_memory16(emu_ss, emu_bp, -0x18) = emu_ax;
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x14));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x12));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x10));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_ax = 0xFFFF;
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x18);
	emu_push(emu_ax);
	emu_push(emu_si);
	emu_push(emu_cs);
	emu_push(0x0148); f__1319_02AC_0020_C75C();
l__0148:
	emu_addw(&emu_sp, 0x10);
	emu_get_memory16(emu_ss, emu_bp, -0xA) = emu_ax;
	emu_movw(&emu_ax, emu_bp - 0xF2);
	emu_get_memory16(emu_ss, emu_bp, -0x1A) = emu_ss;
	emu_get_memory16(emu_ss, emu_bp, -0x1C) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x20) = 0x0;
	emu_get_memory16(emu_ss, emu_bp, -0x1E) = 0x0;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x2);
	emu_get_memory16(emu_ss, emu_bp, -0x22) = emu_ax;
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x14));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x12));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x10));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x22);
	emu_push(emu_ax);
	emu_push(emu_si);
	emu_push(emu_cs);
	emu_push(0x0183); f__1319_02AC_0020_C75C();
l__0183:
	emu_addw(&emu_sp, 0x10);
	emu_get_memory16(emu_ss, emu_bp, -0xC) = emu_ax;
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp, -0xA) == 0x0) {
		emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0xC), 0x0);
		if (emu_get_memory16(emu_ss, emu_bp, -0xC) == 0x0) goto l__0197;
	}
l__0195:
	goto l__01CB;
l__0197:
	emu_cmpw(&emu_si, emu_di);
	if (emu_si != emu_di) goto l__019E;
	goto l__0270;
l__019E:
	emu_push(emu_di);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x01A5); emu_cs = 0x0F3F; f__0F3F_0168_0010_C9EF();
l__01A5:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_cl = 0x5;
	emu_sarw(&emu_ax, emu_cl);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_ax;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_si);
	emu_push(emu_cs);
	emu_push(0x01B6); f__1319_001A_0011_30DD();
l__01B6:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_si = emu_ax;
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
l__01C1:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x14));
	if ((int16)emu_ax <= (int16)emu_get_memory16(emu_ss, emu_bp,  0x14)) goto l__0197;
	goto l__00E2;
l__01CB:
	emu_movw(&emu_ax, emu_bp - 0x18);
	emu_get_memory16(emu_ss, emu_bp, -0x24) = emu_ss;
	emu_get_memory16(emu_ss, emu_bp, -0x26) = emu_ax;
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0xC), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp, -0xC) == 0x0) goto l__01FF;
	emu_movw(&emu_ax, emu_bp - 0x22);
	emu_get_memory16(emu_ss, emu_bp, -0x24) = emu_ss;
	emu_get_memory16(emu_ss, emu_bp, -0x26) = emu_ax;
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp, -0xA) == 0x0) goto l__01FF;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x16);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x20));
	if ((int16)emu_ax >= (int16)emu_get_memory16(emu_ss, emu_bp, -0x20)) goto l__01F6;
	emu_movw(&emu_ax, emu_bp - 0x18);
	goto l__01F9;
l__01F6:
	emu_movw(&emu_ax, emu_bp - 0x22);
l__01F9:
	emu_get_memory16(emu_ss, emu_bp, -0x24) = emu_ss;
	emu_get_memory16(emu_ss, emu_bp, -0x26) = emu_ax;
l__01FF:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x26));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x4);
	emu_get_memory16(emu_ss, emu_bp, -0xE) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0xE);
	emu_subw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x8BE2));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0xE));
	if ((int16)emu_ax <= (int16)emu_get_memory16(emu_ss, emu_bp, -0xE)) goto l__021A;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0xE);
	goto l__0221;
l__021A:
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0xE);
	emu_subw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x8BE2));
l__0221:
	emu_get_memory16(emu_ss, emu_bp, -0xE) = emu_ax;
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0xE), 0x0);
	if ((int16)emu_get_memory16(emu_ss, emu_bp, -0xE) <= (int16)0x0) { /* Unresolved jump */ emu_ip = 0x0255; emu_last_cs = 0x1319; emu_last_ip = 0x0228; emu_last_length = 0x0028; emu_last_crc = 0x703F; emu_call(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x26));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x8));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x6));
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x8BE4);
	emu_addw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x8BE2));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x8BE6));
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0249); emu_cs = 0x01F7; emu_Tools_Memcopy();
l__0249:
	emu_addw(&emu_sp, 0xA);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0xE);
	emu_addw(&emu_get_memory16(emu_ds, 0x00, 0x8BE2), emu_ax);
	goto l__0257;
l__0257:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x26));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x2);
l__025E:
	emu_addw(&emu_get_memory16(emu_ds, 0x00, 0x8BE0), emu_ax);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_si;
l__0265:
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x8BE2);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0xE));
	if ((int16)emu_ax >= (int16)emu_get_memory16(emu_ss, emu_bp,  0xE)) goto l__0270;
	goto l__0083;
l__0270:
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x8BE2);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0xE));
	if ((int16)emu_ax < (int16)emu_get_memory16(emu_ss, emu_bp,  0xE)) {
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8BE4));
		emu_addw(&emu_bx, emu_get_memory16(emu_ds, 0x00, 0x8BE2));
		emu_get_memory8(emu_es, emu_bx, 0x0) = 0xFF;
		emu_incw(&emu_get_memory16(emu_ds, 0x00, 0x8BE2));
	}
l__0288:
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x14));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x12));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x10));
	emu_push(emu_ds);
	emu_ax = 0x8BDE;
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x029B); f__1319_03E8_0029_75DE();
l__029B:
	emu_addw(&emu_sp, 0xA);
	emu_dx = emu_ds;
	emu_ax = 0x8BDE;
	goto l__004D;
l__02A6:
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_sp = emu_bp;
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
 * @implements 1319:02C7:0005:9C31
 * @implements 1319:02C9:0003:9DA5
 * @implements 1319:02CC:0022:DE83
 * @implements 1319:02EE:000E:09AC
 * @implements 1319:02F4:0008:0A8C
 * @implements 1319:02FC:0014:F0DD
 * @implements 1319:0310:000A:9BF3
 * @implements 1319:031A:000F:F873
 * @implements 1319:0329:000F:23C3
 * @implements 1319:0338:0006:1D7B
 * @implements 1319:033E:000B:A375
 * @implements 1319:0349:000A:5CD5
 * @implements 1319:0353:000B:6FF3
 * @implements 1319:035E:0009:F086
 * @implements 1319:0367:0002:85BA
 * @implements 1319:0369:0039:ECFF
 * @implements 1319:03A2:0010:2915
 * @implements 1319:03B2:000B:BCE4
 * @implements 1319:03BD:0011:C8A7
 * @implements 1319:03CE:0011:46B9
 * @implements 1319:03D6:0009:FEE7
 * @implements 1319:03DF:0003:2219
 * @implements 1319:03E2:0006:F7CE
 *
 * Called From: 1319:0145:003C:691C
 * Called From: 1319:0180:003B:2767
 */
void f__1319_02AC_0020_C75C()
{
l__02AC:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0xA);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_di = emu_get_memory16(emu_ss, emu_bp,  0xC);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0xA));
	if (emu_ax != 0) {
		emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x10);
		emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x12));
		if (emu_ax != 0) goto l__02CC;
	}
l__02C7:
	emu_xorw(&emu_ax, emu_ax);
l__02C9:
	goto l__03E2;
l__02CC:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x0);
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x8);
	emu_dx = emu_get_memory16(emu_es, emu_bx, 0x6);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0xA) = 0x0;
	goto l__03D6;
l__02EE:
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0xE);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ax;
l__02F4:
	emu_push(emu_di);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_cs);
	emu_push(0x02FC); f__1319_0008_0010_6124();
l__02FC:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ax;
	emu_testw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x1);
	if ((emu_get_memory16(emu_ss, emu_bp, -0x2) & 0x1) == 0) goto l__033E;
	emu_push(emu_di);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_cs);
	emu_push(0x0310); f__1319_0008_0010_6124();
l__0310:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs);
	emu_push(0x031A); f__1319_001A_0011_30DD();
l__031A:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x6));
	if (emu_ax != emu_get_memory16(emu_ss, emu_bp,  0x6)) goto l__033E;
	emu_push(emu_di);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_cs);
	emu_push(0x0329); f__1319_0008_0010_6124();
l__0329:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ax;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs);
	emu_push(0x0338); f__1319_001A_0011_30DD();
l__0338:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_si = emu_ax;
	goto l__0369;
l__033E:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x2);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0xE));
	if (emu_ax != emu_get_memory16(emu_ss, emu_bp,  0xE)) goto l__0349;
	goto l__02C7;
l__0349:
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs);
	emu_push(0x0353); f__1319_001A_0011_30DD();
l__0353:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_si = emu_ax;
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
l__035E:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x14));
	if ((int16)emu_ax > (int16)emu_get_memory16(emu_ss, emu_bp,  0x14)) goto l__0367;
	goto l__0369;
l__0367:
	goto l__02F4;
l__0369:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_al = emu_get_memory8(emu_ss, emu_bp, -0x2);
	emu_get_memory8(emu_es, emu_bx, 0x0) = emu_al;
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_cmpw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0x6));
	if (emu_si != emu_get_memory16(emu_ss, emu_bp,  0x6)) goto l__03B2;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_get_memory8(emu_es, emu_bx, 0x0) = 0xFF;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0xA);
	emu_get_memory16(emu_es, emu_bx, 0x4) = emu_ax;
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x14));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x12));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x10));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_cs);
	emu_push(0x03A2); f__1319_03E8_0029_75DE();
l__03A2:
	emu_addw(&emu_sp, 0xA);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_decw(&emu_get_memory16(emu_es, emu_bx, 0x4));
	emu_ax = 0x1;
	goto l__02C9;
l__03B2:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x0), emu_si);
	if (emu_get_memory16(emu_es, emu_bx, 0x0) != emu_si) goto l__03BD;
	goto l__02C7;
l__03BD:
	emu_ax = emu_di;
	emu_negw(&emu_ax, emu_ax);
	emu_dx = 0x3;
	emu_imuluw(&emu_ax, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_cs);
	emu_push(0x03CE); f__1319_0008_0010_6124();
l__03CE:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp,  0xE) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_si;
l__03D6:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x64);
	if ((int16)emu_get_memory16(emu_ss, emu_bp, -0xA) >= (int16)0x64) goto l__03DF;
	goto l__02EE;
l__03DF:
	goto l__02C7;
l__03E2:
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_sp = emu_bp;
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
 * @implements 1319:040E:0003:DC3B
 * @implements 1319:0411:0029:FBDA
 * @implements 1319:043A:0015:C2CA
 * @implements 1319:044F:000F:FA79
 * @implements 1319:045E:002D:0B2F
 * @implements 1319:0461:002A:77D7
 * @implements 1319:047F:000C:E53D
 * @implements 1319:048B:0041:DC57
 * @implements 1319:04A8:0024:5412
 * @implements 1319:04CC:0009:D11F
 * @implements 1319:04D5:0014:50D6
 * @implements 1319:04E9:0010:D9ED
 * @implements 1319:04EC:000D:DB55
 * @implements 1319:04F9:0013:FEBC
 * @implements 1319:050C:0014:5C8F
 * @implements 1319:0510:0010:787A
 * @implements 1319:0520:0006:FC3B
 * @implements 1319:0526:001B:1B09
 * @implements 1319:053F:0002:FD3A
 * @implements 1319:0541:0002:CB3A
 * @implements 1319:0543:0011:B2DC
 * @implements 1319:0554:0017:E8C9
 * @implements 1319:0559:0012:F6B6
 * @implements 1319:056B:003A:6742
 * @implements 1319:056E:0037:A4A5
 * @implements 1319:058C:0019:F032
 * @implements 1319:05A5:0008:DB18
 * @implements 1319:05AD:0006:0BFB
 * @implements 1319:05B3:0008:A15E
 * @implements 1319:05B9:0002:CA3A
 * @implements 1319:05BB:000D:E8A9
 * @implements 1319:05C8:0013:EEE0
 * @implements 1319:05CC:000F:E0A6
 * @implements 1319:05CF:000C:DFB8
 * @implements 1319:05DB:003C:80DA
 * @implements 1319:0617:0016:C894
 * @implements 1319:062D:0010:D054
 * @implements 1319:063D:0043:648A
 * @implements 1319:065C:0024:C1DC
 * @implements 1319:065F:0021:392D
 * @implements 1319:0680:0005:8BCF
 *
 * Called From: 1319:0298:002B:EBE1
 * Called From: 1319:0298:0013:A7F7
 * Called From: 1319:039F:0039:ECFF
 */
void f__1319_03E8_0029_75DE()
{
l__03E8:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0xC);
	emu_push(emu_si);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_ax == 0) { /* Unresolved jump */ emu_ip = 0x040C; emu_last_cs = 0x1319; emu_last_ip = 0x03F5; emu_last_length = 0x0029; emu_last_crc = 0x75DE; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x6);
	emu_orw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x8));
	if (emu_ax == 0) { /* Unresolved jump */ emu_ip = 0x040C; emu_last_cs = 0x1319; emu_last_ip = 0x0402; emu_last_length = 0x0029; emu_last_crc = 0x75DE; emu_call(); return; }
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0xA);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0xC));
	if (emu_ax != 0) goto l__0411;
	emu_xorw(&emu_ax, emu_ax);
l__040E:
	goto l__0680;
l__0411:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_lfp(&emu_es, &emu_ax, &emu_get_memory16(emu_es, emu_bx, 0x6));
	emu_push(emu_es);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_addw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x4));
	emu_bx = emu_ax;
	emu_pop(&emu_es);
	emu_get_memory8(emu_es, emu_bx, 0x0) = 0xFF;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_si = emu_get_memory16(emu_es, emu_bx, 0x0);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x4), 0x1);
	if ((int16)emu_get_memory16(emu_es, emu_bx, 0x4) > (int16)0x1) goto l__043A;
	goto l__05DB;
l__043A:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x8);
	emu_dx = emu_get_memory16(emu_es, emu_bx, 0x6);
	emu_incw(&emu_dx);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_dx;
	goto l__05CF;
l__044F:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x6);
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x8);
	emu_decw(&emu_dx);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_dx;
	goto l__0461;
l__045E:
	emu_decw(&emu_get_memory16(emu_ss, emu_bp, -0x4));
l__0461:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x0), 0xFE);
	if (emu_get_memory8(emu_es, emu_bx, 0x0) == 0xFE) {
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
		emu_ax = emu_get_memory16(emu_es, emu_bx, 0x8);
		emu_dx = emu_get_memory16(emu_es, emu_bx, 0x6);
		emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
		if (emu_ax != emu_get_memory16(emu_ss, emu_bp, -0x2)) goto l__045E;
		emu_cmpw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0x4));
		if (emu_dx != emu_get_memory16(emu_ss, emu_bp, -0x4)) goto l__045E;
	}
l__047F:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x0), 0xFE);
	if (emu_get_memory8(emu_es, emu_bx, 0x0) != 0xFE) goto l__048B;
	goto l__05CC;
l__048B:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x0);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_subb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x0));
	emu_get_memory8(emu_ss, emu_bp, -0x9) = emu_al;
	emu_cmpb(&emu_get_memory8(emu_ss, emu_bp, -0x9), 0x0);
	if ((int8)emu_get_memory8(emu_ss, emu_bp, -0x9) < (int8)0x0) {
		emu_al = emu_get_memory8(emu_ss, emu_bp, -0x9);
		emu_addb(&emu_al, 0x8);
		emu_get_memory8(emu_ss, emu_bp, -0x9) = emu_al;
	}
l__04A8:
	emu_al = emu_get_memory8(emu_ss, emu_bp, -0x9);
	emu_ax = (int8)emu_al;
	emu_bx = emu_ax;
	emu_al = emu_get_memory8(emu_ds, emu_bx, 0x3792);
	emu_get_memory8(emu_ss, emu_bp, -0x9) = emu_al;
	emu_cmpb(&emu_get_memory8(emu_ss, emu_bp, -0x9), 0x3);
	if (emu_get_memory8(emu_ss, emu_bp, -0x9) != 0x3) goto l__04CC;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_get_memory8(emu_es, emu_bx, 0x0) = 0xFE;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_get_memory8(emu_es, emu_bx, 0x0) = 0xFE;
	goto l__05CC;
l__04CC:
	emu_cmpb(&emu_get_memory8(emu_ss, emu_bp, -0x9), 0x0);
	if (emu_get_memory8(emu_ss, emu_bp, -0x9) != 0x0) goto l__04D5;
	goto l__05BB;
l__04D5:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_testb(&emu_get_memory8(emu_es, emu_bx, 0x0), 0x1);
	if ((emu_get_memory8(emu_es, emu_bx, 0x0) & 0x1) == 0) goto l__0543;
	emu_cmpb(&emu_get_memory8(emu_ss, emu_bp, -0x9), 0x0);
	if ((int8)emu_get_memory8(emu_ss, emu_bp, -0x9) >= (int8)0x0) goto l__04E9;
	emu_ax = 0xFFFF;
	goto l__04EC;
l__04E9:
	emu_ax = 0x1;
l__04EC:
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x0);
	emu_ax = (int8)emu_al;
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x04F9); f__1319_0008_0010_6124();
l__04F9:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0xC) = emu_ax;
	emu_cmpb(&emu_get_memory8(emu_ss, emu_bp, -0x9), 0x0);
	if ((int8)emu_get_memory8(emu_ss, emu_bp, -0x9) >= (int8)0x0) goto l__050C;
	emu_al = emu_get_memory8(emu_ss, emu_bp, -0x9);
	emu_ax = (int8)emu_al;
	emu_negw(&emu_ax, emu_ax);
	goto l__0510;
l__050C:
	emu_al = emu_get_memory8(emu_ss, emu_bp, -0x9);
	emu_ax = (int8)emu_al;
l__0510:
	emu_cmpw(&emu_ax, 0x1);
	if (emu_ax != 0x1) goto l__0541;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_si);
	emu_push(emu_cs);
	emu_push(0x0520); f__1319_001A_0011_30DD();
l__0520:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_ax);

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
l__0526:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0xE));
	if ((int16)emu_ax <= (int16)emu_get_memory16(emu_ss, emu_bp,  0xE)) {
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
		emu_al = emu_get_memory8(emu_ss, emu_bp, -0xC);
		emu_get_memory8(emu_es, emu_bx, 0x0) = emu_al;
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
		emu_al = emu_get_memory8(emu_ss, emu_bp, -0xC);
		emu_get_memory8(emu_es, emu_bx, 0x0) = emu_al;
	}
l__053F:
	goto l__05BB;
l__0541:
	goto l__0559;
l__0543:
	emu_al = emu_get_memory8(emu_ss, emu_bp, -0x9);
	emu_ax = (int8)emu_al;
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x0);
	emu_ax = (int8)emu_al;
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x0554); f__1319_0008_0010_6124();
l__0554:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0xC) = emu_ax;
l__0559:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_al = emu_get_memory8(emu_ss, emu_bp, -0xC);
	emu_get_memory8(emu_es, emu_bx, 0x0) = emu_al;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_get_memory8(emu_es, emu_bx, 0x0) = 0xFE;
	goto l__056E;
l__056B:
	emu_decw(&emu_get_memory16(emu_ss, emu_bp, -0x4));
l__056E:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x0), 0xFE);
	if (emu_get_memory8(emu_es, emu_bx, 0x0) == 0xFE) {
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
		emu_ax = emu_get_memory16(emu_es, emu_bx, 0x8);
		emu_dx = emu_get_memory16(emu_es, emu_bx, 0x6);
		emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
		if (emu_ax != emu_get_memory16(emu_ss, emu_bp, -0x2)) goto l__056B;
		emu_cmpw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0x4));
		if (emu_dx != emu_get_memory16(emu_ss, emu_bp, -0x4)) goto l__056B;
	}
l__058C:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x0), 0xFE);
	if (emu_get_memory8(emu_es, emu_bx, 0x0) == 0xFE) goto l__05B3;
	emu_ax = 0x4;
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x0);
	emu_ax = (int8)emu_al;
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x05A5); f__1319_0008_0010_6124();
l__05A5:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_ax);
	emu_push(emu_si);
	emu_push(emu_cs);
	emu_push(0x05AD); f__1319_001A_0011_30DD();
l__05AD:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_si = emu_ax;
	goto l__05B9;
l__05B3:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_si = emu_get_memory16(emu_es, emu_bx, 0x0);
l__05B9:
	goto l__05CF;
l__05BB:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x0);
	emu_ax = (int8)emu_al;
	emu_push(emu_ax);
	emu_push(emu_si);
	emu_push(emu_cs);
	emu_push(0x05C8); f__1319_001A_0011_30DD();
l__05C8:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_si = emu_ax;
l__05CC:
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x8));
l__05CF:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x0), 0xFF);
	if (emu_get_memory8(emu_es, emu_bx, 0x0) == 0xFF) goto l__05DB;
	goto l__044F;
l__05DB:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x8);
	emu_dx = emu_get_memory16(emu_es, emu_bx, 0x6);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_dx;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x8);
	emu_dx = emu_get_memory16(emu_es, emu_bx, 0x6);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_dx;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_si = emu_get_memory16(emu_es, emu_bx, 0x0);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_get_memory16(emu_es, emu_bx, 0x2) = 0x0;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_get_memory16(emu_es, emu_bx, 0x4) = 0x0;
	goto l__065F;
l__0617:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x0), 0xFE);
	if (emu_get_memory8(emu_es, emu_bx, 0x0) == 0xFE) goto l__065C;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x0);
	emu_ax = (int8)emu_al;
	emu_push(emu_ax);
	emu_push(emu_si);
	emu_push(emu_cs);
	emu_push(0x062D); f__1319_001A_0011_30DD();
l__062D:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_si = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x0);
	emu_ax = (int8)emu_al;
	emu_push(emu_ax);
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
l__063D:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_addw(&emu_get_memory16(emu_es, emu_bx, 0x2), emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_incw(&emu_get_memory16(emu_es, emu_bx, 0x4));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x0);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_get_memory8(emu_es, emu_bx, 0x0) = emu_al;
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x4));
l__065C:
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x8));
l__065F:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x0), 0xFF);
	if (emu_get_memory8(emu_es, emu_bx, 0x0) != 0xFF) goto l__0617;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_incw(&emu_get_memory16(emu_es, emu_bx, 0x4));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_get_memory8(emu_es, emu_bx, 0x0) = 0xFF;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x4);
	goto l__040E;
l__0680:
	emu_pop(&emu_si);
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

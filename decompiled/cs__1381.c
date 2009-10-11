/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__1381_0005_0010_8273()
 *
 * @name f__1381_0005_0010_8273
 * @implements 1381:0005:0010:8273 ()
 * @implements 1381:0015:0023:81F4
 * @implements 1381:0038:000B:E2C7
 * @implements 1381:0043:000B:8DD9
 * @implements 1381:0044:000A:4DD1
 * @implements 1381:004E:0003:2E57
 *
 * Called From: B4B5:054C:000A:7577
 */
void f__1381_0005_0010_8273()
{
l__0005:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_si);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_ax == 0) { /* Unresolved jump */ emu_ip = 0x0049; emu_last_cs = 0x1381; emu_last_ip = 0x000F; emu_last_length = 0x0010; emu_last_crc = 0x8273; emu_call(); return; }
	emu_xorw(&emu_si, emu_si);
	goto l__0044;
l__0015:
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_ax = emu_si;
	emu_dx = 0xC;
	emu_imuluw(&emu_ax, emu_dx);
	emu_dx = 0x2E8A;
	emu_bx = emu_ax;
	emu_es = emu_dx;
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x72));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x70));
	emu_push(emu_cs); emu_push(0x0038); emu_cs = 0x01F7; f__01F7_3964_0041_7552();
	goto l__0038;
l__0038:
	emu_addw(&emu_sp, 0x8);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax != 0) goto l__0043;
	emu_ax = emu_si;
	goto l__004E;
l__0043:
	emu_incw(&emu_si);
	goto l__0044;
l__0044:
	emu_cmpw(&emu_si, 0xE);
	if ((int16)emu_si < (int16)0xE) goto l__0015;
	emu_ax = 0xFFFF;
	/* Unresolved jump */ emu_ip = 0x0041; emu_last_cs = 0x1381; emu_last_ip = 0x004C; emu_last_length = 0x000A; emu_last_crc = 0x4DD1; emu_call();
l__004E:
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__1381_0051_0010_81BB()
 *
 * @name f__1381_0051_0010_81BB
 * @implements 1381:0051:0010:81BB ()
 * @implements 1381:0061:001C:0B13
 * @implements 1381:007D:000B:E2C7
 * @implements 1381:0086:0002:C5BA
 * @implements 1381:0088:000B:F9D9
 * @implements 1381:0089:000A:39D1
 * @implements 1381:008E:0005:5395
 * @implements 1381:0093:0003:2E57
 *
 * Called From: B4B5:0443:000A:3572
 * Called From: B4B5:0705:000A:3572
 * Called From: B4B5:079C:000A:3572
 * Called From: B4B5:0CEF:000A:3572
 * Called From: B4B5:0EDC:000A:3572
 */
void f__1381_0051_0010_81BB()
{
l__0051:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_si);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_ax == 0) goto l__008E;
	emu_xorw(&emu_si, emu_si);
	goto l__0089;
l__0061:
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_ax = emu_si;
	emu_dx = 0x1E;
	emu_imuluw(&emu_ax, emu_dx);
	emu_bx = emu_ax;
	emu_push(emu_get_memory16(emu_ds, emu_bx, 0x37FA));
	emu_push(emu_get_memory16(emu_ds, emu_bx, 0x37F8));
	emu_push(emu_cs); emu_push(0x007D); emu_cs = 0x01F7; f__01F7_3964_0041_7552();
	goto l__007D;
l__007D:
	emu_addw(&emu_sp, 0x8);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax != 0) goto l__0088;
	emu_ax = emu_si;
	goto l__0086;
l__0086:
	goto l__0093;
l__0088:
	emu_incw(&emu_si);
	goto l__0089;
l__0089:
	emu_cmpw(&emu_si, 0x6);
	if ((int16)emu_si < (int16)0x6) goto l__0061;
	goto l__008E;
l__008E:
	emu_ax = 0xFFFF;
	goto l__0086;
l__0093:
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__1381_0096_0008_1ADC()
 *
 * @name f__1381_0096_0008_1ADC
 * @implements 1381:0096:0008:1ADC ()
 * @implements 1381:009E:0019:21DF
 * @implements 1381:00B7:000B:E2C7
 * @implements 1381:00C0:0002:C5BA
 * @implements 1381:00C2:000B:EDD9
 * @implements 1381:00C3:000A:2DD1
 * @implements 1381:00CD:0003:2E57
 *
 * Called From: B4B5:0F27:000A:457E
 */
void f__1381_0096_0008_1ADC()
{
l__0096:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_si);
	emu_xorw(&emu_si, emu_si);
	goto l__00C3;
l__009E:
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_bx = emu_si;
	emu_cl = 0x2;
	emu_shlw(&emu_bx, emu_cl);
	emu_push(emu_get_memory16(emu_ds, emu_bx, 0x3BE4));
	emu_push(emu_get_memory16(emu_ds, emu_bx, 0x3BE2));
	emu_push(emu_cs); emu_push(0x00B7); emu_cs = 0x01F7; f__01F7_3964_0041_7552();
	goto l__00B7;
l__00B7:
	emu_addw(&emu_sp, 0x8);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax != 0) goto l__00C2;
	emu_ax = emu_si;
	goto l__00C0;
l__00C0:
	goto l__00CD;
l__00C2:
	emu_incw(&emu_si);
	goto l__00C3;
l__00C3:
	emu_cmpw(&emu_si, 0x6);
	if ((int16)emu_si < (int16)0x6) goto l__009E;
	emu_ax = 0xFFFF;
	goto l__00C0;
l__00CD:
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__1381_00D0_0008_1ADC()
 *
 * @name f__1381_00D0_0008_1ADC
 * @implements 1381:00D0:0008:1ADC ()
 * @implements 1381:00D8:0019:21EC
 * @implements 1381:00F1:000B:E2C7
 * @implements 1381:00FC:000B:EED9
 * @implements 1381:00FD:000A:2ED1
 * @implements 1381:0107:0003:2E57
 *
 * Called From: B4B5:0F02:000A:257A
 */
void f__1381_00D0_0008_1ADC()
{
l__00D0:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_si);
	emu_xorw(&emu_si, emu_si);
	goto l__00FD;
l__00D8:
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_bx = emu_si;
	emu_cl = 0x2;
	emu_shlw(&emu_bx, emu_cl);
	emu_push(emu_get_memory16(emu_ds, emu_bx, 0x3BFC));
	emu_push(emu_get_memory16(emu_ds, emu_bx, 0x3BFA));
	emu_push(emu_cs); emu_push(0x00F1); emu_cs = 0x01F7; f__01F7_3964_0041_7552();
	goto l__00F1;
l__00F1:
	emu_addw(&emu_sp, 0x8);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax != 0) goto l__00FC;
	emu_ax = emu_si;
	goto l__0107;
l__00FC:
	emu_incw(&emu_si);
	goto l__00FD;
l__00FD:
	emu_cmpw(&emu_si, 0x5);
	if ((int16)emu_si < (int16)0x5) goto l__00D8;
	emu_ax = 0xFFFF;
	/* Unresolved jump */ emu_ip = 0x00FA; emu_last_cs = 0x1381; emu_last_ip = 0x0105; emu_last_length = 0x000A; emu_last_crc = 0x2ED1; emu_call();
l__0107:
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

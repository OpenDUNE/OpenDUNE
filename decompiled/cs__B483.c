/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__B483_0000_0019_F96A()
 *
 * @name f__B483_0000_0019_F96A
 * @implements B483:0000:0019:F96A ()
 * @implements B483:0016:0003:DDAD
 * @implements B483:0019:001A:284C
 * @implements B483:0033:0008:DA8A
 * @implements B483:003B:000D:4A11
 * @implements B483:0048:000F:8290
 * @implements B483:004B:000C:F391
 * @implements B483:0057:000E:35F7
 * @implements B483:0065:001D:84B8
 * @implements B483:006D:0015:6285
 * @implements B483:0147:0007:3640
 * @implements B483:014E:0008:AE7C
 * @implements B483:0150:0006:F7CE
 *
 * Called From: 3483:0020:0005:0000
 */
void f__B483_0000_0019_F96A()
{
l__0000:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0xA);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_di = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_orw(&emu_di, emu_di);
	if (!(emu_flags.sf != emu_flags.of)) {
		emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x700A), 0x0);
		if (emu_get_memory16(emu_ds, 0x00, 0x700A) != 0x0) goto l__0019;
	}
l__0016:
	goto l__0150;
l__0019:
	emu_si = 0xFF;
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0xA));
	if (emu_ax == 0) goto l__006D;
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x39FC));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_cs); emu_push(0x0033); emu_cs = 0x0F3F; emu_Tile_PackTile();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3483) { overlay(0x3483, 1); }
l__0033:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x003B); emu_cs = 0x0F3F; emu_Tile_GetDistancePacked();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3483) { overlay(0x3483, 1); }
l__003B:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_si = emu_ax;
	emu_cmpw(&emu_si, 0x40);
	if (emu_si >= 0x40) goto l__0048;
	emu_ax = emu_si;
	goto l__004B;
l__0048:
	emu_ax = 0x40;
l__004B:
	emu_si = emu_ax;
	emu_push(emu_si);
	emu_ax = 0x50;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0057); emu_cs = 0x34C1; overlay(0x34C1, 0); emu_Math_ValueToPercent();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3483) { overlay(0x3483, 1); }
l__0057:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_si = emu_ax;
	emu_push(emu_si);
	emu_ax = 0xFF;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0065); emu_cs = 0x34C1; overlay(0x34C1, 0); emu_Math_PercentToValue();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3483) { overlay(0x3483, 1); }
l__0065:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_si = emu_ax;
	emu_xorw(&emu_si, 0xFF);
l__006D:
	emu_bx = emu_di;
	emu_shlw(&emu_bx, 0x1);
	emu_ax = emu_get_memory16(emu_ds, emu_bx, 0x222);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ax;
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x6D8F), 0x0);
	if (emu_get_memory16(emu_ds, 0x00, 0x6D8F) != 0x0) { /* Unresolved jump */ emu_ip = 0x0082; emu_last_cs = 0xB483; emu_last_ip = 0x007D; emu_last_length = 0x0015; emu_last_crc = 0x6285; emu_call(); return; }
	goto l__0147;
l__0147:
	emu_push(emu_si);
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x014E); emu_cs = 0x1DD7; f__1DD7_048A_0017_3EEB();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3483) { overlay(0x3483, 1); }
l__014E:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
l__0150:
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
 * Decompiled function f__B483_0156_0019_AEFE()
 *
 * @name f__B483_0156_0019_AEFE
 * @implements B483:0156:0019:AEFE ()
 * @implements B483:016C:0003:DDA3
 * @implements B483:016F:0016:9FE7
 * @implements B483:0185:0037:9CAC
 * @implements B483:0211:003E:5CE7
 * @implements B483:027E:0005:8BCF
 *
 * Called From: 3483:0039:0005:0000
 * Called From: B483:0499:0019:7945
 */
void f__B483_0156_0019_AEFE()
{
l__0156:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x8);
	emu_push(emu_si);
	emu_si = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_cmpw(&emu_si, 0xFFFF);
	if (emu_si != 0xFFFF) {
		emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x700A), 0x0);
		if (emu_get_memory16(emu_ds, 0x00, 0x700A) != 0x0) goto l__016F;
	}
l__016C:
	goto l__027E;
l__016F:
	emu_ax = emu_si;
	emu_dx = 0x6;
	emu_imuluw(&emu_ax, emu_dx);
	emu_bx = emu_ax;
	emu_ax = emu_get_memory16(emu_ds, emu_bx, 0xD5E);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x4060));
	if ((int16)emu_ax >= (int16)emu_get_memory16(emu_ds, 0x00, 0x4060)) goto l__0185;
	goto l__027E;
l__0185:
	emu_ax = emu_si;
	emu_dx = 0x6;
	emu_imuluw(&emu_ax, emu_dx);
	emu_bx = emu_ax;
	emu_ax = emu_get_memory16(emu_ds, emu_bx, 0xD5E);
	emu_get_memory16(emu_ds, 0x00, 0x4060) = emu_ax;
	emu_bx = emu_si;
	emu_cl = 0x2;
	emu_shlw(&emu_bx, emu_cl);
	emu_ax = emu_get_memory16(emu_ds, emu_bx, 0x3E56);
	emu_dx = emu_get_memory16(emu_ds, emu_bx, 0x3E54);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_dx;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_ax == 0) goto l__0211;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x01BC); emu_cs = 0x2649; f__2649_0BAE_001D_25B1();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3483) { overlay(0x3483, 1); }
	/* Unresolved jump */ emu_ip = 0x01BC; emu_last_cs = 0xB483; emu_last_ip = 0x01BC; emu_last_length = 0x0037; emu_last_crc = 0x9CAC; emu_call();
l__0211:
	emu_ax = emu_si;
	emu_dx = 0x6;
	emu_imuluw(&emu_ax, emu_dx);
	emu_bx = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, emu_bx, 0xD5A));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x0), 0x3F);
	if (emu_get_memory8(emu_es, emu_bx, 0x0) != 0x3F) goto l__027E;
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x3A38);
	emu_dx = 0x1E;
	emu_imuluw(&emu_ax, emu_dx);
	emu_bx = emu_ax;
	emu_push(emu_get_memory16(emu_ds, emu_bx, 0x3808));
	emu_ax = emu_si;
	emu_dx = 0x6;
	emu_imuluw(&emu_ax, emu_dx);
	emu_bx = emu_ax;
	emu_ax = emu_get_memory16(emu_ds, emu_bx, 0xD5A);
	emu_incw(&emu_ax);
	emu_push(emu_get_memory16(emu_ds, emu_bx, 0xD5C));
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x9939;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x024F); emu_cs = 0x01F7; emu_String_sprintf();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3483) { overlay(0x3483, 1); }
	/* Unresolved jump */ emu_ip = 0x024F; emu_last_cs = 0xB483; emu_last_ip = 0x024F; emu_last_length = 0x003E; emu_last_crc = 0x5CE7; emu_call();
l__027E:
	emu_pop(&emu_si);
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B483_0283_0014_983A()
 *
 * @name f__B483_0283_0014_983A
 * @implements B483:0283:0014:983A ()
 * @implements B483:0294:0003:5D12
 * @implements B483:0297:0020:5211
 * @implements B483:02B7:001D:5E6C
 * @implements B483:02D4:000B:5099
 * @implements B483:02DF:0019:9BD8
 * @implements B483:02F8:001A:FE1A
 * @implements B483:0312:001C:FF11
 * @implements B483:032E:001C:6F5D
 * @implements B483:034A:0015:564E
 * @implements B483:034D:0012:13DA
 * @implements B483:035F:0004:BE52
 * @implements B483:0360:0003:2E57
 *
 * Called From: 3483:0025:0005:0000
 */
void f__B483_0283_0014_983A()
{
l__0283:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_si);
	emu_si = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_cmpw(&emu_si, 0xFFFF);
	if (emu_si != 0xFFFF) {
		emu_cmpw(&emu_si, 0x26);
		if ((int16)emu_si < (int16)0x26) goto l__0297;
	}
l__0294:
	goto l__0360;
l__0297:
	emu_ax = emu_si;
	emu_dx = 0x6;
	emu_imuluw(&emu_ax, emu_dx);
	emu_bx = emu_ax;
	emu_ax = emu_get_memory16(emu_ds, emu_bx, 0x106E);
	emu_dx = emu_get_memory16(emu_ds, emu_bx, 0x106C);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x3E50));
	if (emu_ax != emu_get_memory16(emu_ds, 0x00, 0x3E50)) goto l__02B7;
	emu_cmpw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x3E4E));
	if (emu_dx != emu_get_memory16(emu_ds, 0x00, 0x3E4E)) goto l__02B7;
	goto l__034D;
l__02B7:
	emu_ax = emu_si;
	emu_dx = 0x6;
	emu_imuluw(&emu_ax, emu_dx);
	emu_bx = emu_ax;
	emu_ax = emu_get_memory16(emu_ds, emu_bx, 0x106E);
	emu_dx = emu_get_memory16(emu_ds, emu_bx, 0x106C);
	emu_get_memory16(emu_ds, 0x00, 0x3E50) = emu_ax;
	emu_get_memory16(emu_ds, 0x00, 0x3E4E) = emu_dx;
	emu_push(emu_cs); emu_push(0x02D4); emu_cs = 0x1DD7; f__1DD7_0A7B_001E_4A5A();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3483) { overlay(0x3483, 1); }
l__02D4:
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x02DF); emu_cs = 0x1DD7; f__1DD7_022D_0015_1956();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3483) { overlay(0x3483, 1); }
l__02DF:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x02F8); emu_cs = 0x1DD7; f__1DD7_0719_0014_A78C();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3483) { overlay(0x3483, 1); }
l__02F8:
	emu_addw(&emu_sp, 0xC);
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x0312); emu_cs = 0x1DD7; f__1DD7_05D0_0014_A7A2();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3483) { overlay(0x3483, 1); }
l__0312:
	emu_addw(&emu_sp, 0xC);
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3E50));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3E4E));
	emu_push(emu_cs); emu_push(0x032E); emu_cs = 0x1DD7; f__1DD7_0719_0014_A78C();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3483) { overlay(0x3483, 1); }
l__032E:
	emu_addw(&emu_sp, 0xC);
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3E50));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3E4E));
	emu_push(emu_cs); emu_push(0x034A); emu_cs = 0x1DD7; f__1DD7_05D0_0014_A7A2();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3483) { overlay(0x3483, 1); }
l__034A:
	emu_addw(&emu_sp, 0xC);
l__034D:
	emu_ax = emu_si;
	emu_dx = 0x6;
	emu_imuluw(&emu_ax, emu_dx);
	emu_bx = emu_ax;
	emu_push(emu_get_memory16(emu_ds, emu_bx, 0x1070));
	emu_push(emu_cs); emu_push(0x035F); emu_cs = 0x1DD7; f__1DD7_08EE_000E_5C89();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3483) { overlay(0x3483, 1); }
l__035F:
	emu_pop(&emu_cx);
l__0360:
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B483_0363_0016_83DF()
 *
 * @name f__B483_0363_0016_83DF
 * @implements B483:0363:0016:83DF ()
 * @implements B483:0379:0004:EB79
 * @implements B483:037D:0015:C5B6
 * @implements B483:0388:000A:9F0B
 * @implements B483:0392:0029:BAA5
 * @implements B483:03B2:0009:DBAE
 * @implements B483:03BB:0003:9D0B
 * @implements B483:03BE:002E:22D4
 * @implements B483:03DA:0012:DE0F
 * @implements B483:03EC:0013:5CAE
 * @implements B483:03FF:001E:7533
 * @implements B483:0415:0008:880C
 * @implements B483:046A:0002:C03A
 * @implements B483:046C:0004:DE52
 *
 * Called From: 3483:002A:0005:0000
 */
void f__B483_0363_0016_83DF()
{
l__0363:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_si);
	emu_push(emu_di);
	emu_di = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_ax = emu_di;
	emu_cmpw(&emu_ax, 0xFFFE);
	if (emu_ax == 0xFFFE) goto l__0379;
	emu_cmpw(&emu_ax, 0xFFFF);
	if (emu_ax == 0xFFFF) goto l__03BB;
	goto l__03BE;
l__0379:
	emu_xorw(&emu_si, emu_si);
	goto l__0388;
l__037D:
	emu_bx = emu_si;
	emu_shlw(&emu_bx, 0x1);
	emu_get_memory16(emu_ds, emu_bx, 0x218) = 0xFFFF;
	emu_incw(&emu_si);
l__0388:
	emu_cmpw(&emu_si, 0x5);
	if ((int16)emu_si < (int16)0x5) goto l__037D;
	emu_push(emu_cs); emu_push(0x0392); emu_cs = 0x1DD7; f__1DD7_01AB_0007_96C6();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3483) { overlay(0x3483, 1); }
l__0392:
	emu_get_memory16(emu_ds, 0x00, 0x37BE) = 0x0;
	emu_get_memory16(emu_ds, 0x00, 0x37BC) = 0x0;
	emu_testw(&emu_get_memory16(emu_ds, 0x00, 0x37BA), 0x1);
	if ((emu_get_memory16(emu_ds, 0x00, 0x37BA) & 0x1) != 0) {
		emu_get_memory16(emu_ds, 0x00, 0x3A12) = 0x1;
		emu_get_memory16(emu_ds, 0x00, 0x37BA) = 0x0;
	}
l__03B2:
	emu_get_memory16(emu_ds, 0x00, 0x4060) = 0x0;
	goto l__046C;
l__03BB:
	goto l__046C;
l__03BE:
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x6D8F), 0x0);
	if (emu_get_memory16(emu_ds, 0x00, 0x6D8F) != 0x0) {
		emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x700A), 0x0);
		if (emu_get_memory16(emu_ds, 0x00, 0x700A) != 0x0) {
			emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x3A0E), 0x7);
			if (emu_get_memory16(emu_ds, 0x00, 0x3A0E) != 0x7) { /* Unresolved jump */ emu_ip = 0x041D; emu_last_cs = 0xB483; emu_last_ip = 0x03D1; emu_last_length = 0x002E; emu_last_crc = 0x22D4; emu_call(); return; }
			emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x6D8F), 0x4);
			if (emu_get_memory16(emu_ds, 0x00, 0x6D8F) != 0x4) { /* Unresolved jump */ emu_ip = 0x041D; emu_last_cs = 0xB483; emu_last_ip = 0x03D8; emu_last_length = 0x002E; emu_last_crc = 0x22D4; emu_call(); return; }
		}
	}
l__03DA:
	emu_ax = emu_di;
	emu_dx = 0xE;
	emu_imuluw(&emu_ax, emu_dx);
	emu_bx = emu_ax;
	emu_push(emu_get_memory16(emu_ds, emu_bx, 0x31E));
	emu_push(emu_cs); emu_push(0x03EC); emu_cs = 0x1DD7; f__1DD7_0477_000E_5C89();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3483) { overlay(0x3483, 1); }
l__03EC:
	emu_pop(&emu_cx);
	emu_ax = emu_di;
	emu_dx = 0xE;
	emu_imuluw(&emu_ax, emu_dx);
	emu_bx = emu_ax;
	emu_push(emu_get_memory16(emu_ds, emu_bx, 0x31C));
	emu_push(emu_cs); emu_push(0x03FF); emu_cs = 0x0FCB; emu_String_Get_ByIndex();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3483) { overlay(0x3483, 1); }
l__03FF:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ds, 0x00, 0x37BE) = emu_dx;
	emu_get_memory16(emu_ds, 0x00, 0x37BC) = emu_ax;
	emu_testw(&emu_get_memory16(emu_ds, 0x00, 0x37BA), 0x1);
	if ((emu_get_memory16(emu_ds, 0x00, 0x37BA) & 0x1) != 0) {
		emu_get_memory16(emu_ds, 0x00, 0x3A12) = 0x1;
	}
l__0415:
	emu_get_memory16(emu_ds, 0x00, 0x37BA) = 0x4;
	goto l__046A;
l__046A:
	goto l__046C;
l__046C:
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B483_0470_000E_519D()
 *
 * @name f__B483_0470_000E_519D
 * @implements B483:0470:000E:519D ()
 * @implements B483:047A:0004:CDB9
 * @implements B483:047C:0002:E5BA
 * @implements B483:047E:0005:7A4B
 * @implements B483:0483:0019:7945
 * @implements B483:049C:0017:11AB
 * @implements B483:04B3:000B:3ADF
 * @implements B483:04C0:0002:9C3A
 * @implements B483:04C4:0005:8C7A
 * @implements B483:04C9:0002:2597
 *
 * Called From: 3483:002F:0005:0000
 */
void f__B483_0470_000E_519D()
{
l__0470:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x700A), 0x0);
	if (emu_get_memory16(emu_ds, 0x00, 0x700A) != 0x0) goto l__047E;
l__047A:
	emu_xorw(&emu_ax, emu_ax);
l__047C:
	goto l__04C9;
l__047E:
	emu_push(emu_cs); emu_push(0x0483); emu_cs = 0x1DD7; f__1DD7_01EB_0013_9C3C();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3483) { overlay(0x3483, 1); }
l__0483:
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax != 0) goto l__04C4;
	emu_get_memory16(emu_ds, 0x00, 0x4060) = 0x0;
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x218), 0xFFFF);
	if (emu_get_memory16(emu_ds, 0x00, 0x218) == 0xFFFF) goto l__04C0;
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x218));
	emu_push(emu_cs);
	emu_push(0x049C); f__B483_0156_0019_AEFE();
l__049C:
	emu_pop(&emu_cx);
	emu_xorw(&emu_ax, emu_ax);
	emu_dx = 0x8;
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_ds);
	emu_ax = 0x218;
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x21A;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x04B3); emu_cs = 0x2B0E; f__2B0E_0006_0049_87B1();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3483) { overlay(0x3483, 1); }
l__04B3:
	emu_addw(&emu_sp, 0xC);
	emu_get_memory16(emu_ds, 0x00, 0x220) = 0xFFFF;
	goto l__04C4;
l__04C0:
	goto l__047A;
l__04C4:
	emu_ax = 0x1;
	goto l__047C;
l__04C9:
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B483_04CB_0015_EBB4()
 *
 * @name f__B483_04CB_0015_EBB4
 * @implements B483:04CB:0015:EBB4 ()
 * @implements B483:04E0:0005:FC31
 * @implements B483:04E5:002A:017F
 * @implements B483:04FF:0010:F7CB
 * @implements B483:050F:0004:3AFB
 * @implements B483:0513:002A:B6E7
 * @implements B483:052A:0013:6556
 * @implements B483:053D:0017:229B
 * @implements B483:0551:0003:9D0A
 * @implements B483:0554:0018:6809
 * @implements B483:056C:0016:DD45
 * @implements B483:0580:0002:FE3A
 * @implements B483:0582:0019:1A22
 * @implements B483:0599:0002:F1BA
 * @implements B483:059B:001D:06E8
 * @implements B483:05A5:0013:6556
 * @implements B483:05B8:0016:FB45
 * @implements B483:05CC:0002:D83A
 * @implements B483:05CE:0018:6C09
 * @implements B483:05E6:0016:E245
 * @implements B483:05FC:0002:C03A
 * @implements B483:05FE:000A:7F39
 * @implements B483:05FF:0009:6EB9
 * @implements B483:0608:0009:D48C
 * @implements B483:0611:000A:0138
 * @implements B483:061B:0005:7C05
 * @implements B483:0620:002A:4664
 * @implements B483:063A:0010:B769
 * @implements B483:064A:0004:3AFB
 * @implements B483:064E:002A:038C
 * @implements B483:067C:001B:D546
 * @implements B483:0697:0005:8F6E
 * @implements B483:06A1:000F:AB7C
 * @implements B483:06B0:000A:C6F5
 * @implements B483:06BA:0013:A3B8
 * @implements B483:06CA:0003:9DA6
 * @implements B483:06CD:002D:F0E8
 * @implements B483:06FA:0013:A308
 * @implements B483:070A:0003:9D16
 * @implements B483:070D:0003:DD15
 * @implements B483:0710:0024:6B66
 * @implements B483:0737:001E:9FF4
 * @implements B483:0755:0005:806E
 * @implements B483:075F:0005:0C7F
 * @implements B483:0764:000A:C642
 * @implements B483:076E:0012:CFC6
 * @implements B483:077E:0002:F3BA
 * @implements B483:0780:001D:6D65
 * @implements B483:07AD:0002:DC3A
 * @implements B483:07AF:0026:1A33
 * @implements B483:07D5:0012:FC46
 * @implements B483:07E7:000A:FF05
 * @implements B483:07E8:0009:EE85
 * @implements B483:07F1:000A:85B3
 * @implements B483:07F5:0006:F7CE
 *
 * Called From: 3483:0034:0005:0000
 */
void f__B483_04CB_0015_EBB4()
{
l__04CB:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x4);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_di = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x6D8F), 0x0);
	if (emu_get_memory16(emu_ds, 0x00, 0x6D8F) != 0x0) goto l__04E0;
	goto l__07F5;
l__04E0:
	emu_xorw(&emu_si, emu_si);
	goto l__05FF;
l__04E5:
	emu_ax = emu_si;
	emu_dx = 0x6;
	emu_imuluw(&emu_ax, emu_dx);
	emu_bx = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, emu_bx, 0xD5A));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x0);
	emu_ax = (int8)emu_al;
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ax;
	emu_cx = 0x5;
	emu_bx = 0x80F;
l__04FF:
	emu_ax = emu_get_memory16(emu_cs, emu_bx, 0x0);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_ax == emu_get_memory16(emu_ss, emu_bp, -0x2)) goto l__050F;
	emu_addw(&emu_bx, 0x2);
	if (--emu_cx != 0) goto l__04FF;
	goto l__05FC;
l__050F:

	/* Jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_cs, emu_bx, 0xA);
	switch (emu_ip) {
		case 0x0513: goto l__0513;
		case 0x0554: goto l__0554;
		case 0x0582: goto l__0582;
		case 0x059B: goto l__059B;
		case 0x05CE: goto l__05CE;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0xB483; emu_last_ip = 0x050F; emu_last_length = 0x0004; emu_last_crc = 0x3AFB;
			emu_call();
			return;
	}
l__0513:
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x37B6), 0x0);
	if (emu_get_memory16(emu_ds, 0x00, 0x37B6) != 0x0) { /* Unresolved jump */ emu_ip = 0x0520; emu_last_cs = 0xB483; emu_last_ip = 0x0518; emu_last_length = 0x002A; emu_last_crc = 0xB6E7; emu_call(); return; }
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x1150), emu_di);
	if (emu_get_memory16(emu_ds, 0x00, 0x1150) == emu_di) {
		emu_cmpw(&emu_di, 0xFFFF);
		if (emu_di != 0xFFFF) {
			emu_cmpw(&emu_di, 0xFFFE);
			if (emu_di != 0xFFFE) goto l__0551;
		}
	}
l__052A:
	emu_bx = emu_si;
	emu_cl = 0x2;
	emu_shlw(&emu_bx, emu_cl);
	emu_push(emu_get_memory16(emu_ds, emu_bx, 0x3E56));
	emu_push(emu_get_memory16(emu_ds, emu_bx, 0x3E54));
	emu_push(emu_cs); emu_push(0x053D); emu_cs = 0x1DD7; f__1DD7_0213_0016_41ED();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3483) { overlay(0x3483, 1); }
l__053D:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_bx = emu_si;
	emu_cl = 0x2;
	emu_shlw(&emu_bx, emu_cl);
	emu_get_memory16(emu_ds, emu_bx, 0x3E56) = 0x0;
	emu_get_memory16(emu_ds, emu_bx, 0x3E54) = 0x0;
l__0551:
	goto l__05FE;
l__0554:
	emu_cmpw(&emu_di, 0xFFFF);
	if (emu_di == 0xFFFF) goto l__0580;
	emu_bx = emu_si;
	emu_cl = 0x2;
	emu_shlw(&emu_bx, emu_cl);
	emu_push(emu_get_memory16(emu_ds, emu_bx, 0x3E56));
	emu_push(emu_get_memory16(emu_ds, emu_bx, 0x3E54));
	emu_push(emu_cs); emu_push(0x056C); emu_cs = 0x1DD7; f__1DD7_0213_0016_41ED();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3483) { overlay(0x3483, 1); }
l__056C:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_bx = emu_si;
	emu_cl = 0x2;
	emu_shlw(&emu_bx, emu_cl);
	emu_get_memory16(emu_ds, emu_bx, 0x3E56) = 0x0;
	emu_get_memory16(emu_ds, emu_bx, 0x3E54) = 0x0;
l__0580:
	goto l__05FE;
l__0582:
	emu_cmpw(&emu_di, 0xFFFF);
	if (emu_di != 0xFFFF) {
		emu_bx = emu_si;
		emu_cl = 0x2;
		emu_shlw(&emu_bx, emu_cl);
		emu_get_memory16(emu_ds, emu_bx, 0x3E56) = 0x0;
		emu_get_memory16(emu_ds, emu_bx, 0x3E54) = 0x0;
	}
l__0599:
	goto l__05FE;
l__059B:
	emu_cmpw(&emu_di, 0xFFFF);
	if (emu_di != 0xFFFF) {
		emu_cmpw(&emu_di, 0xFFFE);
		if (emu_di != 0xFFFE) goto l__05CC;
	}
l__05A5:
	emu_bx = emu_si;
	emu_cl = 0x2;
	emu_shlw(&emu_bx, emu_cl);
	emu_push(emu_get_memory16(emu_ds, emu_bx, 0x3E56));
	emu_push(emu_get_memory16(emu_ds, emu_bx, 0x3E54));
	emu_push(emu_cs); emu_push(0x05B8); emu_cs = 0x1DD7; f__1DD7_0213_0016_41ED();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3483) { overlay(0x3483, 1); }
l__05B8:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_bx = emu_si;
	emu_cl = 0x2;
	emu_shlw(&emu_bx, emu_cl);
	emu_get_memory16(emu_ds, emu_bx, 0x3E56) = 0x0;
	emu_get_memory16(emu_ds, emu_bx, 0x3E54) = 0x0;
l__05CC:
	goto l__05FE;
l__05CE:
	emu_cmpw(&emu_di, 0xFFFE);
	if (emu_di == 0xFFFE) { /* Unresolved jump */ emu_ip = 0x05FA; emu_last_cs = 0xB483; emu_last_ip = 0x05D1; emu_last_length = 0x0018; emu_last_crc = 0x6C09; emu_call(); return; }
	emu_bx = emu_si;
	emu_cl = 0x2;
	emu_shlw(&emu_bx, emu_cl);
	emu_push(emu_get_memory16(emu_ds, emu_bx, 0x3E56));
	emu_push(emu_get_memory16(emu_ds, emu_bx, 0x3E54));
	emu_push(emu_cs); emu_push(0x05E6); emu_cs = 0x1DD7; f__1DD7_0213_0016_41ED();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3483) { overlay(0x3483, 1); }
l__05E6:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_bx = emu_si;
	emu_cl = 0x2;
	emu_shlw(&emu_bx, emu_cl);
	emu_get_memory16(emu_ds, emu_bx, 0x3E56) = 0x0;
	emu_get_memory16(emu_ds, emu_bx, 0x3E54) = 0x0;
	goto l__05FE;
l__05FC:
	goto l__05FE;
l__05FE:
	emu_incw(&emu_si);
l__05FF:
	emu_cmpw(&emu_si, 0x83);
	if ((int16)emu_si >= (int16)0x83) goto l__0608;
	goto l__04E5;
l__0608:
	emu_cmpw(&emu_di, emu_get_memory16(emu_ds, 0x00, 0x1150));
	if (emu_di != emu_get_memory16(emu_ds, 0x00, 0x1150)) goto l__0611;
	goto l__07F5;
l__0611:
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x6D8F), 0x0);
	if (emu_get_memory16(emu_ds, 0x00, 0x6D8F) != 0x0) goto l__061B;
	goto l__07F1;
l__061B:
	emu_xorw(&emu_si, emu_si);
	goto l__07E8;
l__0620:
	emu_ax = emu_si;
	emu_dx = 0x6;
	emu_imuluw(&emu_ax, emu_dx);
	emu_bx = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, emu_bx, 0xD5A));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x0);
	emu_ax = (int8)emu_al;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_cx = 0x5;
	emu_bx = 0x7FB;
l__063A:
	emu_ax = emu_get_memory16(emu_cs, emu_bx, 0x0);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x4));
	if (emu_ax == emu_get_memory16(emu_ss, emu_bp, -0x4)) goto l__064A;
	emu_addw(&emu_bx, 0x2);
	if (--emu_cx != 0) goto l__063A;
	goto l__07AF;
l__064A:

	/* Jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_cs, emu_bx, 0xA);
	switch (emu_ip) {
		case 0x064E: goto l__064E;
		case 0x06CD: goto l__06CD;
		case 0x070D: goto l__070D;
		case 0x0710: goto l__0710;
		case 0x0780: goto l__0780;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0xB483; emu_last_ip = 0x064A; emu_last_length = 0x0004; emu_last_crc = 0x3AFB;
			emu_call();
			return;
	}
l__064E:
	emu_bx = emu_si;
	emu_cl = 0x2;
	emu_shlw(&emu_bx, emu_cl);
	emu_ax = emu_get_memory16(emu_ds, emu_bx, 0x3E54);
	emu_orw(&emu_ax, emu_get_memory16(emu_ds, emu_bx, 0x3E56));
	if (emu_ax != 0) goto l__06CA;
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x1150), emu_di);
	if (emu_get_memory16(emu_ds, 0x00, 0x1150) == emu_di) goto l__06CA;
	emu_cmpw(&emu_di, 0xFFFF);
	if (emu_di == 0xFFFF) goto l__06CA;
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x37B6);
	emu_cmpw(&emu_ax, 0x1);
	if (emu_ax == 0x1) { /* Unresolved jump */ emu_ip = 0x0678; emu_last_cs = 0xB483; emu_last_ip = 0x066F; emu_last_length = 0x002A; emu_last_crc = 0x038C; emu_call(); return; }
	emu_cmpw(&emu_ax, 0x2);
	if (emu_ax == 0x2) { /* Unresolved jump */ emu_ip = 0x069C; emu_last_cs = 0xB483; emu_last_ip = 0x0674; emu_last_length = 0x002A; emu_last_crc = 0x038C; emu_call(); return; }
	goto l__06A1;
l__067C:
	emu_ax = emu_si;
	emu_dx = 0x6;
	emu_imuluw(&emu_ax, emu_dx);
	emu_bx = emu_ax;
	emu_push(emu_get_memory16(emu_ds, emu_bx, 0xD5C));
	emu_push(emu_get_memory16(emu_ds, emu_bx, 0xD5A));
	emu_push(emu_ds);
	emu_ax = 0x9939;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0697); emu_cs = 0x01F7; emu_String_sprintf();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3483) { overlay(0x3483, 1); }
l__0697:
	emu_addw(&emu_sp, 0xA);
	goto l__06B0;
l__06A1:
	emu_ax = emu_di;
	emu_dx = 0x1E;
	emu_imuluw(&emu_ax, emu_dx);
	emu_bx = emu_ax;
	emu_push(emu_get_memory16(emu_ds, emu_bx, 0x3808));
	goto l__067C;
l__06B0:
	emu_push(emu_ds);
	emu_ax = 0x9939;
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x06BA); f__B483_0823_0016_323D();
l__06BA:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_bx = emu_si;
	emu_cl = 0x2;
	emu_shlw(&emu_bx, emu_cl);
	emu_get_memory16(emu_ds, emu_bx, 0x3E56) = emu_dx;
	emu_get_memory16(emu_ds, emu_bx, 0x3E54) = emu_ax;
l__06CA:
	goto l__07E7;
l__06CD:
	emu_cmpw(&emu_di, 0xFFFF);
	if (emu_di != 0xFFFF) goto l__070A;
	emu_bx = emu_si;
	emu_cl = 0x2;
	emu_shlw(&emu_bx, emu_cl);
	emu_ax = emu_get_memory16(emu_ds, emu_bx, 0x3E54);
	emu_orw(&emu_ax, emu_get_memory16(emu_ds, emu_bx, 0x3E56));
	if (emu_ax != 0) goto l__070A;
	emu_ax = emu_si;
	emu_dx = 0x6;
	emu_imuluw(&emu_ax, emu_dx);
	emu_bx = emu_ax;
	emu_ax = emu_get_memory16(emu_ds, emu_bx, 0xD5A);
	emu_incw(&emu_ax);
	emu_push(emu_get_memory16(emu_ds, emu_bx, 0xD5C));
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x06FA); f__B483_0823_0016_323D();
l__06FA:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_bx = emu_si;
	emu_cl = 0x2;
	emu_shlw(&emu_bx, emu_cl);
	emu_get_memory16(emu_ds, emu_bx, 0x3E56) = emu_dx;
	emu_get_memory16(emu_ds, emu_bx, 0x3E54) = emu_ax;
l__070A:
	goto l__07E7;
l__070D:
	goto l__07E7;
l__0710:
	emu_cmpw(&emu_di, 0xFFFF);
	if (emu_di == 0xFFFF) goto l__077E;
	emu_bx = emu_si;
	emu_cl = 0x2;
	emu_shlw(&emu_bx, emu_cl);
	emu_ax = emu_get_memory16(emu_ds, emu_bx, 0x3E54);
	emu_orw(&emu_ax, emu_get_memory16(emu_ds, emu_bx, 0x3E56));
	if (emu_ax != 0) goto l__077E;
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x37B6);
	emu_cmpw(&emu_ax, 0x1);
	if (emu_ax == 0x1) { /* Unresolved jump */ emu_ip = 0x0734; emu_last_cs = 0xB483; emu_last_ip = 0x072B; emu_last_length = 0x0024; emu_last_crc = 0x6B66; emu_call(); return; }
	emu_cmpw(&emu_ax, 0x2);
	if (emu_ax == 0x2) { /* Unresolved jump */ emu_ip = 0x075A; emu_last_cs = 0xB483; emu_last_ip = 0x0730; emu_last_length = 0x0024; emu_last_crc = 0x6B66; emu_call(); return; }
	goto l__075F;
l__0737:
	emu_push(emu_ax);
	emu_ax = emu_si;
	emu_dx = 0x6;
	emu_imuluw(&emu_ax, emu_dx);
	emu_bx = emu_ax;
	emu_ax = emu_get_memory16(emu_ds, emu_bx, 0xD5A);
	emu_incw(&emu_ax);
	emu_push(emu_get_memory16(emu_ds, emu_bx, 0xD5C));
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x9939;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0755); emu_cs = 0x01F7; emu_String_sprintf();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3483) { overlay(0x3483, 1); }
l__0755:
	emu_addw(&emu_sp, 0xA);
	goto l__0764;
l__075F:
	emu_ax = 0x5A;
	goto l__0737;
l__0764:
	emu_push(emu_ds);
	emu_ax = 0x9939;
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x076E); f__B483_0823_0016_323D();
l__076E:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_bx = emu_si;
	emu_cl = 0x2;
	emu_shlw(&emu_bx, emu_cl);
	emu_get_memory16(emu_ds, emu_bx, 0x3E56) = emu_dx;
	emu_get_memory16(emu_ds, emu_bx, 0x3E54) = emu_ax;
l__077E:
	goto l__07E7;
l__0780:
	emu_cmpw(&emu_di, 0xFFFE);
	if (emu_di != 0xFFFE) goto l__07AD;
	emu_ax = emu_si;
	emu_dx = 0x6;
	emu_imuluw(&emu_ax, emu_dx);
	emu_bx = emu_ax;
	emu_ax = emu_get_memory16(emu_ds, emu_bx, 0xD5A);
	emu_incw(&emu_ax);
	emu_push(emu_get_memory16(emu_ds, emu_bx, 0xD5C));
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x079D); f__B483_0823_0016_323D();
	/* Unresolved jump */ emu_ip = 0x079D; emu_last_cs = 0xB483; emu_last_ip = 0x079D; emu_last_length = 0x001D; emu_last_crc = 0x6D65; emu_call();
l__07AD:
	goto l__07E7;
l__07AF:
	emu_bx = emu_si;
	emu_cl = 0x2;
	emu_shlw(&emu_bx, emu_cl);
	emu_ax = emu_get_memory16(emu_ds, emu_bx, 0x3E54);
	emu_orw(&emu_ax, emu_get_memory16(emu_ds, emu_bx, 0x3E56));
	if (emu_ax != 0) { /* Unresolved jump */ emu_ip = 0x07E5; emu_last_cs = 0xB483; emu_last_ip = 0x07BD; emu_last_length = 0x0026; emu_last_crc = 0x1A33; emu_call(); return; }
	emu_ax = emu_si;
	emu_dx = 0x6;
	emu_imuluw(&emu_ax, emu_dx);
	emu_bx = emu_ax;
	emu_push(emu_get_memory16(emu_ds, emu_bx, 0xD5C));
	emu_push(emu_get_memory16(emu_ds, emu_bx, 0xD5A));
	emu_push(emu_cs);
	emu_push(0x07D5); f__B483_0823_0016_323D();
l__07D5:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_bx = emu_si;
	emu_cl = 0x2;
	emu_shlw(&emu_bx, emu_cl);
	emu_get_memory16(emu_ds, emu_bx, 0x3E56) = emu_dx;
	emu_get_memory16(emu_ds, emu_bx, 0x3E54) = emu_ax;
	goto l__07E7;
l__07E7:
	emu_incw(&emu_si);
l__07E8:
	emu_cmpw(&emu_si, 0x83);
	if ((int16)emu_si >= (int16)0x83) goto l__07F1;
	goto l__0620;
l__07F1:
	emu_get_memory16(emu_ds, 0x00, 0x1150) = emu_di;
l__07F5:
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
 * Decompiled function f__B483_0823_0016_323D()
 *
 * @name f__B483_0823_0016_323D
 * @implements B483:0823:0016:323D ()
 * @implements B483:0832:0007:D4FC
 * @implements B483:0836:0003:9D0D
 * @implements B483:0839:000B:03A1
 * @implements B483:0844:0008:90CF
 * @implements B483:084C:000F:8420
 * @implements B483:085B:000B:9A42
 * @implements B483:0866:000D:9AF4
 * @implements B483:0873:0034:D238
 * @implements B483:08A7:0012:314A
 * @implements B483:08B9:002A:FBE9
 * @implements B483:08E6:0009:DB3D
 * @implements B483:08EF:0005:8BCF
 *
 * Called From: B483:06B7:000A:C6F5
 * Called From: B483:06F7:002D:F0E8
 * Called From: B483:076B:000A:C642
 * Called From: B483:07D2:0026:1A33
 */
void f__B483_0823_0016_323D()
{
l__0823:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x8);
	emu_push(emu_si);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_ax != 0) goto l__0839;
l__0832:
	emu_xorw(&emu_dx, emu_dx);
	emu_xorw(&emu_ax, emu_ax);
l__0836:
	goto l__08EF;
l__0839:
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x0844); emu_cs = 0x1FB5; f__1FB5_15B5_0015_6A00();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3483) { overlay(0x3483, 1); }
l__0844:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax != 0) goto l__084C;
	goto l__0832;
l__084C:
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x085B); emu_cs = 0x1FB5; f__1FB5_01FA_0010_F89C();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3483) { overlay(0x3483, 1); }
l__085B:
	emu_addw(&emu_sp, 0x6);
	emu_si = emu_ax;
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x0866); emu_cs = 0x1FB5; f__1FB5_16D5_006A_679B();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3483) { overlay(0x3483, 1); }
l__0866:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x0873); emu_cs = 0x1FB5; f__1FB5_09C7_0018_922D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3483) { overlay(0x3483, 1); }
l__0873:
	emu_pop(&emu_cx);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x2);
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_addw(&emu_dx, 0x1);
	emu_adcw(&emu_ax, 0x0);
	emu_andw(&emu_dx, 0xFFFE);
	emu_andw(&emu_ax, 0xFFFF);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_dx;
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x38E0));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x38DE));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x38DC));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x38DA));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x08A7); emu_cs = 0x1DD7; f__1DD7_010B_000E_A324();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3483) { overlay(0x3483, 1); }
l__08A7:
	emu_addw(&emu_sp, 0xC);
	emu_ax = 0x40;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x08B9); emu_cs = 0x23E1; f__23E1_0004_0014_2BC0();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3483) { overlay(0x3483, 1); }
l__08B9:
	emu_addw(&emu_sp, 0x6);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x8);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x6));
	if (emu_ax == 0) goto l__08E6;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x38DC));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x38DA));
	emu_push(emu_cs); emu_push(0x08E3); emu_cs = 0x2B0E; f__2B0E_0006_0049_87B1();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3483) { overlay(0x3483, 1); }
	/* Unresolved jump */ emu_ip = 0x08E3; emu_last_cs = 0xB483; emu_last_ip = 0x08E3; emu_last_length = 0x002A; emu_last_crc = 0xFBE9; emu_call();
l__08E6:
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x6);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x8);
	goto l__0836;
l__08EF:
	emu_pop(&emu_si);
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

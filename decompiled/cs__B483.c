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
	emu_push(emu_cs); emu_push(0x03FF); emu_cs = 0x0FCB; emu_String_GetString();
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
	if (emu_get_memory16(emu_ds, 0x00, 0x6D8F) != 0x0) { /* Unresolved jump */ emu_ip = 0x04E0; emu_last_cs = 0xB483; emu_last_ip = 0x04DB; emu_last_length = 0x0015; emu_last_crc = 0xEBB4; emu_call(); return; }
	goto l__07F5;
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

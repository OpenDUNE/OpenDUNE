/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__217E_0015_0019_BAFF()
 *
 * @name f__217E_0015_0019_BAFF
 * @implements 217E:0015:0019:BAFF ()
 * @implements 217E:002E:0003:5DA5
 * @implements 217E:0031:0017:9F5E
 * @implements 217E:0048:0005:CE36
 * @implements 217E:004D:0008:B9C4
 * @implements 217E:005F:000C:BA4D
 * @implements 217E:006B:0015:650F
 * @implements 217E:0080:0024:0F55
 * @implements 217E:00A4:0006:793B
 * @implements 217E:00AA:0019:5FA2
 * @implements 217E:00C3:000F:B4E8
 * @implements 217E:00D2:001E:E7B0
 * @implements 217E:00F0:000B:991E
 * @implements 217E:00FB:0014:F700
 * @implements 217E:010F:0014:C0BC
 * @implements 217E:0123:000B:85DC
 * @implements 217E:012E:000B:D306
 * @implements 217E:013A:000B:6C7A
 * @implements 217E:013C:0009:3C7C
 *
 * Called From: 217E:0D77:0017:4EFA
 */
void f__217E_0015_0019_BAFF()
{
l__0015:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x14);
	emu_push(emu_ds);
	emu_ds = emu_get_memory16(emu_cs, 0x00, 0xA);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_cld();
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x110), 0x0);
	if (emu_get_memory16(emu_ds, 0x00, 0x110) != 0x0) goto l__002E;
	goto l__013A;
l__002E:
	emu_push(0x0031); f__217E_01C6_0004_16B8();
l__0031:
	if (!emu_flags.cf) goto l__005F;
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_ax != 0) { /* Unresolved jump */ emu_ip = 0x0045; emu_last_cs = 0x217E; emu_last_ip = 0x0039; emu_last_length = 0x0017; emu_last_crc = 0x9F5E; emu_call(); return; }
	emu_get_memory16(emu_ss, emu_bp,  0x6) = 0x710;
	emu_get_memory16(emu_ss, emu_bp,  0x8) = 0x340E;
	emu_push(0x0048); f__217E_01BA_000A_D507();
l__0048:
	if (!emu_flags.cf) goto l__005F;
	emu_push(0x004D); f__217E_020B_0026_BE77();
l__004D:
	if (!emu_flags.cf) goto l__005F;
	emu_ax = 0xFFFE;
	goto l__013C;
l__005F:
	emu_bx = emu_ax;
	emu_get_memory16(emu_ds, 0x00, 0x128) = emu_bx;
	emu_cx = 0x14;
	emu_push(0x006B); f__217E_0290_000A_9FBE();
l__006B:
	emu_cx = 0xFFFD;
	if (emu_flags.cf) { /* Unresolved jump */ emu_ip = 0x0055; emu_last_cs = 0x217E; emu_last_ip = 0x006E; emu_last_length = 0x0015; emu_last_crc = 0x650F; emu_call(); return; }
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x14), 0x5A4D);
	if (emu_get_memory16(emu_ss, emu_bp, -0x14) == 0x5A4D) goto l__0080;
	emu_cx = 0xFFFC;
	/* Unresolved jump */ emu_ip = 0x0055; emu_last_cs = 0x217E; emu_last_ip = 0x007E; emu_last_length = 0x0015; emu_last_crc = 0x650F; emu_call();
l__0080:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x10);
	emu_cx = emu_get_memory16(emu_ss, emu_bp, -0x12);
	if (emu_cx == 0) { /* Unresolved jump */ emu_ip = 0x0089; emu_last_cs = 0x217E; emu_last_ip = 0x0086; emu_last_length = 0x0024; emu_last_crc = 0x0F55; emu_call(); return; }
	emu_decw(&emu_ax);
	emu_dx = 0x200;
	emu_mulw(&emu_ax, emu_dx);
	emu_addw(&emu_ax, emu_cx);
	emu_addw(&emu_ax, 0xF);
	emu_adcw(&emu_dx, 0x0);
	emu_andw(&emu_ax, 0xFFF0);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_cx = emu_dx;
	emu_dx = emu_ax;
	emu_ax = 0x4200;
	emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = 0x0070; emu_push(0x00A4); Interrupt_DOS();
l__00A4:
	emu_cx = 0x10;
	emu_push(0x00AA); f__217E_0290_000A_9FBE();
l__00AA:
	emu_pop(&emu_ax);
	emu_pop(&emu_dx);
	emu_cx = 0xFFFD;
	if (emu_flags.cf) { /* Unresolved jump */ emu_ip = 0x0055; emu_last_cs = 0x217E; emu_last_ip = 0x00AF; emu_last_length = 0x0019; emu_last_crc = 0x5FA2; emu_call(); return; }
	emu_addw(&emu_ax, 0x10);
	emu_adcw(&emu_dx, 0x0);
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x14), 0x4246);
	emu_cx = 0xFFFC;
	if (emu_flags.zf) goto l__00C3;
	/* Unresolved jump */ emu_ip = 0x0055; emu_last_cs = 0x217E; emu_last_ip = 0x00C1; emu_last_length = 0x0019; emu_last_crc = 0x5FA2; emu_call();
l__00C3:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x12), 0x564F);
	if (emu_get_memory16(emu_ss, emu_bp, -0x12) == 0x564F) goto l__00D2;
	emu_addw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_adcw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0xE));
	/* Unresolved jump */ emu_ip = 0x0099; emu_last_cs = 0x217E; emu_last_ip = 0x00D0; emu_last_length = 0x000F; emu_last_crc = 0xB4E8; emu_call();
l__00D2:
	emu_get_memory16(emu_ds, 0x00, 0x114) = emu_ax;
	emu_get_memory16(emu_ds, 0x00, 0x116) = emu_dx;
	emu_es = emu_get_memory16(emu_cs, 0x00, 0xC);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x10);
	emu_get_memory16(emu_es, 0x00, 0x661E) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0xE);
	emu_get_memory16(emu_es, 0x00, 0x6620) = emu_ax;
	emu_ah = 0x3E;
	emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = 0x0070; emu_push(0x00F0); Interrupt_DOS();
l__00F0:
	emu_get_memory16(emu_ds, 0x00, 0x128) = 0x0;
	emu_push(emu_cs);
	emu_push(0x00FB); f__217E_0145_0010_73C0();
l__00FB:
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0xC);
	emu_incw(&emu_ax);
	emu_get_memory16(emu_ds, 0x00, 0x124) = emu_ax;
	emu_get_memory16(emu_ds, 0x00, 0x120) = emu_ax;
	emu_bx = emu_get_memory16(emu_ss, emu_bp,  0xA);
	emu_get_memory16(emu_ds, 0x00, 0x126) = emu_bx;
	emu_push(0x010F); f__217E_02A0_002C_0B5F();
l__010F:
	emu_bx = emu_get_memory16(emu_ds, 0x00, 0x126);
	emu_subw(&emu_bx, emu_get_memory16(emu_ds, 0x00, 0x124));
	emu_cmpw(&emu_bx, emu_get_memory16(emu_ds, 0x00, 0x11A));
	if (emu_bx >= emu_get_memory16(emu_ds, 0x00, 0x11A)) goto l__0123;
	emu_cx = 0xFFFB;
	/* Unresolved jump */ emu_ip = 0x0055; emu_last_cs = 0x217E; emu_last_ip = 0x0120; emu_last_length = 0x0014; emu_last_crc = 0xC0BC; emu_call();
l__0123:
	emu_shrw(&emu_bx, 0x1);
	emu_shrw(&emu_bx, 0x1);
	emu_get_memory16(emu_ds, 0x00, 0x118) = emu_bx;
	emu_push(0x012E); f__217E_0320_0049_4A24();
l__012E:
	if (!emu_flags.cf) goto l__013A;
	emu_bx = emu_get_memory16(emu_ds, 0x00, 0x128);
	emu_cx = 0xFFFF;
	goto l__013C;
l__013A:
	emu_xorw(&emu_ax, emu_ax);
l__013C:
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_pop(&emu_ds);
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	emu_sp += 8;
	return;
}

/**
 * Decompiled function f__217E_0145_0010_73C0()
 *
 * @name f__217E_0145_0010_73C0
 * @implements 217E:0145:0010:73C0 ()
 * @implements 217E:0155:0012:A3CC
 * @implements 217E:0167:0018:F243
 * @implements 217E:017F:0008:A03E
 * @implements 217E:0187:000B:650C
 * @implements 217E:0192:0006:BB35
 * @implements 217E:0195:0003:2677
 *
 * Called From: 217E:00F8:000B:991E
 * Called From: 217E:01AA:0015:D478
 */
void f__217E_0145_0010_73C0()
{
l__0145:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_ds);
	emu_ds = emu_get_memory16(emu_cs, 0x00, 0xA);
	emu_al = emu_get_memory8(emu_ds, 0x00, 0x111);
	emu_ah = 0x35;
	emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = 0x0070; emu_push(0x0155); Interrupt_DOS();
l__0155:
	emu_push(emu_es);
	emu_push(emu_bx);
	emu_push(emu_ds);
	emu_al = emu_get_memory8(emu_ds, 0x00, 0x111);
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x2);
	emu_ds = emu_get_memory16(emu_ds, 0x00, 0x4);
	emu_ah = 0x25;
	emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = 0x0070; emu_push(0x0167); Interrupt_DOS();
l__0167:
	emu_pop(&emu_ds);
	emu_pop(&emu_get_memory16(emu_ds, 0x00, 0x2));
	emu_pop(&emu_get_memory16(emu_ds, 0x00, 0x4));
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x128), 0x0);
	if (emu_get_memory16(emu_ds, 0x00, 0x128) == 0x0) goto l__0187;
	emu_bx = emu_get_memory16(emu_ds, 0x00, 0x128);
	emu_ah = 0x3E;
	emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = 0x0070; emu_push(0x017F); Interrupt_DOS();
l__017F:
	emu_get_memory16(emu_ds, 0x00, 0x128) = 0x0;
	goto l__0195;
l__0187:
	emu_movw(&emu_dx, 0x00 + 0x8C);
	emu_ah = 0x3D;
	emu_al = emu_get_memory8(emu_ds, 0x00, 0x6);
	emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = 0x0070; emu_push(0x0192); Interrupt_DOS();
l__0192:
	emu_get_memory16(emu_ds, 0x00, 0x128) = emu_ax;
l__0195:
	emu_pop(&emu_ds);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__217E_0198_0015_D478()
 *
 * @name f__217E_0198_0015_D478
 * @implements 217E:0198:0015:D478 ()
 * @implements 217E:01AD:0005:F29E
 * @implements 217E:01B2:0005:729F
 * @implements 217E:01B7:0003:2677
 *
 * Called From: 01F7:0263:0015:AC4F
 */
void f__217E_0198_0015_D478()
{
l__0198:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_ds);
	emu_ds = emu_get_memory16(emu_cs, 0x00, 0xA);
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x128), 0x0);
	if (emu_get_memory16(emu_ds, 0x00, 0x128) != 0x0) {
		emu_push(emu_cs);
		emu_push(0x01AD); f__217E_0145_0010_73C0();
	}
l__01AD:
	emu_push(emu_cs);

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_ds, 0x00, 0x84);
	emu_push(0x01B2);
	switch (emu_ip) {
		case 0x125C: f__217E_125C_0001_6580(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x217E; emu_last_ip = 0x01AE; emu_last_length = 0x0005; emu_last_crc = 0xF29E;
			emu_call();
			return;
	}
l__01B2:
	emu_push(emu_cs);

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_ds, 0x00, 0x82);
	emu_push(0x01B7);
	switch (emu_ip) {
		case 0x125C: f__217E_125C_0001_6580(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x217E; emu_last_ip = 0x01B3; emu_last_length = 0x0005; emu_last_crc = 0x729F;
			emu_call();
			return;
	}
l__01B7:
	emu_pop(&emu_ds);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__217E_01BA_000A_D507()
 *
 * @name f__217E_01BA_000A_D507
 * @implements 217E:01BA:000A:D507 ()
 * @implements 217E:01C4:0002:A187
 *
 * Called From: 217E:0045:0017:9F5E
 */
void f__217E_01BA_000A_D507()
{
l__01BA:
	emu_push(emu_ds);
	emu_movw(&emu_di, 0x00 + 0x8C);
	emu_push(emu_ds);
	emu_pop(&emu_es);
	emu_push(0x01C4); f__217E_0268_0027_C749();
l__01C4:
	emu_pop(&emu_ds);

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__217E_01C6_0004_16B8()
 *
 * @name f__217E_01C6_0004_16B8
 * @implements 217E:01C6:0004:16B8 ()
 * @implements 217E:01CA:003A:4E2F
 * @implements 217E:01E0:0024:5FAA
 * @implements 217E:01F6:000E:B2D2
 * @implements 217E:0204:0005:6940
 * @implements 217E:0209:0002:A187
 *
 * Called From: 217E:002E:0003:5DA5
 */
void f__217E_01C6_0004_16B8()
{
l__01C6:
	emu_ah = 0x30;
	emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = 0x0070; emu_push(0x01CA); Interrupt_DOS();
l__01CA:
	emu_cmpb(&emu_al, 0x3);
	if (emu_al < 0x3) { /* Unresolved jump */ emu_ip = 0x020A; emu_last_cs = 0x217E; emu_last_ip = 0x01CC; emu_last_length = 0x003A; emu_last_crc = 0x4E2F; emu_call(); return; }
	emu_get_memory8(emu_ds, 0x00, 0x6) = 0x20;
	emu_push(emu_ds);
	emu_ax = 0x353F;
	emu_ds = emu_ax;
	emu_ds = emu_get_memory16(emu_ds, 0x00, 0x77);
	emu_xorw(&emu_si, emu_si);
	emu_cld();
l__01E0:
	emu_lodsb(emu_ds);
	emu_orb(&emu_al, emu_al);
	if (emu_al != 0) goto l__01E0;
	emu_lodsb(emu_ds);
	emu_orb(&emu_al, emu_al);
	if (emu_al != 0) goto l__01E0;
	emu_lodsw(emu_ds);
	emu_movw(&emu_di, 0x00 + 0x8C);
	emu_ax = 0x33F4;
	emu_es = emu_ax;
	emu_bx = emu_di;
l__01F6:
	emu_lodsb(emu_ds);
	emu_stosb();
	emu_orb(&emu_al, emu_al);
	if (emu_al == 0) goto l__0204;
	emu_cmpb(&emu_al, 0x5C);
	if (emu_al == 0x5C) {
		emu_bx = emu_di;
	}
	goto l__01F6;
l__0204:
	emu_di = emu_bx;
	emu_push(0x0209); f__217E_0268_0027_C749();
l__0209:
	emu_pop(&emu_ds);

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__217E_020B_0026_BE77()
 *
 * @name f__217E_020B_0026_BE77
 * @implements 217E:020B:0026:BE77 ()
 * @implements 217E:022E:0003:225E
 * @implements 217E:0231:001E:BC98
 * @implements 217E:0241:000E:7C76
 * @implements 217E:024F:0013:687A
 * @implements 217E:025D:0005:FDF4
 * @implements 217E:0262:0006:E019
 *
 * Called From: 217E:004A:0005:CE36
 */
void f__217E_020B_0026_BE77()
{
l__020B:
	emu_push(emu_ds);
	emu_ax = 0x353F;
	emu_ds = emu_ax;
	emu_ds = emu_get_memory16(emu_ds, 0x00, 0x77);
	emu_xorw(&emu_si, emu_si);
	emu_di = 0xE;
	emu_push(emu_cs);
	emu_pop(&emu_es);
	emu_cx = 0x5;
	emu_cld();
	emu_rep_cmpsb(emu_ds);
	if (emu_flags.zf) goto l__0231;
	emu_decw(&emu_si);
	emu_lodsb(emu_ds);
	emu_orb(&emu_al, emu_al);
	if (emu_al != 0) { /* Unresolved jump */ emu_ip = 0x0225; emu_last_cs = 0x217E; emu_last_ip = 0x0228; emu_last_length = 0x0026; emu_last_crc = 0xBE77; emu_call(); return; }
	emu_cmpb(&emu_al, emu_get_memory8(emu_ds, emu_si, 0x0));
	if (emu_al != emu_get_memory8(emu_ds, emu_si, 0x0)) { /* Unresolved jump */ emu_ip = 0x0217; emu_last_cs = 0x217E; emu_last_ip = 0x022C; emu_last_length = 0x0026; emu_last_crc = 0xBE77; emu_call(); return; }
l__022E:
	emu_pop(&emu_ds);
	emu_stc();

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
l__0231:
	emu_cmpb(&emu_get_memory8(emu_ds, emu_si, 0x0), 0x0);
	if (emu_get_memory8(emu_ds, emu_si, 0x0) == 0x0) goto l__022E;
	emu_movw(&emu_di, 0x00 + 0x8C);
	emu_ax = 0x33F4;
	emu_es = emu_ax;
	emu_xorb(&emu_al, emu_al);
l__0241:
	emu_ah = emu_al;
	emu_lodsb(emu_ds);
	emu_orb(&emu_al, emu_al);
	if (emu_al == 0) goto l__024F;
	emu_cmpb(&emu_al, 0x3B);
	if (emu_al == 0x3B) { /* Unresolved jump */ emu_ip = 0x0250; emu_last_cs = 0x217E; emu_last_ip = 0x024A; emu_last_length = 0x000E; emu_last_crc = 0x7C76; emu_call(); return; }
	emu_stosb();
	goto l__0241;
l__024F:
	emu_decw(&emu_si);
	emu_cmpb(&emu_ah, 0x3A);
	if (emu_ah != 0x3A) {
		emu_cmpb(&emu_ah, 0x5C);
		if (emu_ah != 0x5C) {
			emu_al = 0x5C;
			emu_stosb();
		}
	}
l__025D:
	emu_push(emu_ds);
	emu_push(emu_si);
	emu_push(0x0262); f__217E_0268_0027_C749();
l__0262:
	emu_pop(&emu_si);
	emu_pop(&emu_ds);
	if (emu_flags.cf) goto l__0231;
	emu_pop(&emu_ds);

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__217E_0268_0027_C749()
 *
 * @name f__217E_0268_0027_C749
 * @implements 217E:0268:0027:C749 ()
 * @implements 217E:0274:001B:1868
 * @implements 217E:027F:0010:B17F
 * @implements 217E:028F:0001:6180
 *
 * Called From: 217E:01C1:000A:D507
 * Called From: 217E:0206:0005:6940
 * Called From: 217E:025F:0005:FDF4
 */
void f__217E_0268_0027_C749()
{
l__0268:
	emu_lfp(&emu_ds, &emu_si, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_ax = emu_ds;
	emu_orw(&emu_ax, emu_si);
	if (emu_ax == 0) goto l__027F;
	emu_cx = 0xC;
l__0274:
	emu_lodsb(emu_ds);
	emu_stosb();
	emu_orb(&emu_al, emu_al);
	if (emu_al != 0) {
		if (--emu_cx != 0) goto l__0274;
		emu_subb(&emu_al, emu_al);
		emu_stosb();
	}
l__027F:
	emu_movw(&emu_dx, 0x00 + 0x8C);
	emu_ax = 0x33F4;
	emu_ds = emu_ax;
	emu_ah = 0x3D;
	emu_al = emu_get_memory8(emu_ds, 0x00, 0x6);
	emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = 0x0070; emu_push(0x028F); Interrupt_DOS();
l__028F:

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__217E_0290_000A_9FBE()
 *
 * @name f__217E_0290_000A_9FBE
 * @implements 217E:0290:000A:9FBE ()
 * @implements 217E:029A:0006:7940
 *
 * Called From: 217E:0068:000C:BA4D
 * Called From: 217E:00A7:0006:793B
 */
void f__217E_0290_000A_9FBE()
{
l__0290:
	emu_push(emu_ds);
	emu_movw(&emu_dx, emu_bp - 0x14);
	emu_push(emu_ss);
	emu_pop(&emu_ds);
	emu_ah = 0x3F;
	emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = 0x0070; emu_push(0x029A); Interrupt_DOS();
l__029A:
	emu_pop(&emu_ds);
	if (emu_flags.cf) { /* Unresolved jump */ emu_ip = 0x029F; emu_last_cs = 0x217E; emu_last_ip = 0x029B; emu_last_length = 0x0006; emu_last_crc = 0x7940; emu_call(); return; }
	emu_cmpw(&emu_ax, emu_cx);

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__217E_02A0_002C_0B5F()
 *
 * @name f__217E_02A0_002C_0B5F
 * @implements 217E:02A0:002C:0B5F ()
 * @implements 217E:02BD:000F:D617
 * @implements 217E:02CA:0002:DFBA
 * @implements 217E:02CD:001B:C258
 * @implements 217E:02E9:001C:2B54
 * @implements 217E:0305:0011:7C21
 * @implements 217E:030B:000B:B2D7
 * @implements 217E:0316:000A:40AF
 *
 * Called From: 217E:010C:0014:F700
 * Called From: 217E:0D34:000B:83A7
 */
void f__217E_02A0_002C_0B5F()
{
l__02A0:
	emu_ax = 0x353F;
	emu_es = emu_ax;
	emu_ax = emu_get_memory16(emu_es, 0x00, 0x7B);
	emu_addw(&emu_ax, 0x10);
	emu_get_memory16(emu_cs, 0x00, 0x13) = emu_ax;
	emu_ax = 0x3405;
	emu_es = emu_ax;
	emu_xorw(&emu_bx, emu_bx);
	emu_xorw(&emu_di, emu_di);
	emu_movw(&emu_si, 0x00 + 0x1A0);
l__02BD:
	emu_testw(&emu_get_memory16(emu_ds, emu_si, 0x4), 0x2);
	if ((emu_get_memory16(emu_ds, emu_si, 0x4) & 0x2) != 0) {
		emu_cmpw(&emu_get_memory16(emu_ds, emu_si, 0x2), 0x0);
		if (emu_get_memory16(emu_ds, emu_si, 0x2) != 0x0) goto l__02CD;
	}
l__02CA:
	goto l__030B;
l__02CD:
	emu_ax = emu_get_memory16(emu_ds, emu_si, 0x0);
	emu_push(emu_es);
	emu_get_memory16(emu_es, 0x00, 0x12) = emu_ax;
	emu_es = emu_ax;
	emu_cmpb(&emu_get_memory8(emu_es, 0x00, 0x1A), 0xFF);
	if (emu_get_memory8(emu_es, 0x00, 0x1A) != 0xFF) goto l__02E9;
	emu_pop(&emu_es);
	emu_get_memory16(emu_es, 0x00, 0x12) = 0x0;
	goto l__030B;
l__02E9:
	emu_pop(&emu_ax);
	emu_get_memory16(emu_es, 0x00, 0x18) = 0x4CB;
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x114);
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x116);
	emu_addw(&emu_get_memory16(emu_es, 0x00, 0x4), emu_ax);
	emu_adcw(&emu_get_memory16(emu_es, 0x00, 0x6), emu_dx);
	emu_push(0x0305); emu_Overlay_GetTotalSize();
l__0305:
	emu_cmpw(&emu_bx, emu_dx);
	if (emu_bx < emu_dx) {
		emu_xchgw(&emu_dx, &emu_bx);
	}
l__030B:
	emu_addw(&emu_si, 0x8);
	emu_cmpw(&emu_si, 0x8B0);
	if (emu_si >= 0x8B0) goto l__0316;
	goto l__02BD;
l__0316:
	emu_xorw(&emu_ax, emu_ax);
	emu_addw(&emu_bx, 0x2);
	emu_get_memory16(emu_ds, 0x00, 0x11A) = emu_bx;

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__217E_0320_0049_4A24()
 *
 * @name f__217E_0320_0049_4A24
 * @implements 217E:0320:0049:4A24 ()
 * @implements 217E:0333:0036:7CC2
 * @implements 217E:0369:0016:B542
 * @implements 217E:0380:001D:F290
 * @implements 217E:039D:0012:6D95
 * @implements 217E:03A3:000C:652C
 * @implements 217E:03AF:000B:434C
 * @implements 217E:03BA:001A:D1EE
 * @implements 217E:03D4:000C:E9D5
 *
 * Called From: 217E:012B:000B:85DC
 */
void f__217E_0320_0049_4A24()
{
l__0320:
	emu_cx = emu_get_memory16(emu_ds, 0x00, 0x122);
	emu_get_memory16(emu_ds, 0x00, 0x12C) = emu_cx;
	emu_bx = emu_cx;
	emu_si = emu_get_memory16(emu_ds, 0x00, 0x124);
	emu_di = emu_get_memory16(emu_ds, 0x00, 0x126);
	emu_push(emu_ds);
l__0333:
	emu_ds = emu_cx;
	emu_cx = emu_get_memory16(emu_ds, 0x00, 0x12);
	if (emu_cx == 0) goto l__0369;
	emu_es = emu_cx;
	emu_ax = emu_get_memory16(emu_es, 0x00, 0x4);
	emu_dx = emu_get_memory16(emu_es, 0x00, 0x6);
	emu_subw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x4));
	emu_sbbw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x6));
	emu_cx = 0x10;
	emu_divw(&emu_ax, emu_cx);
	emu_addw(&emu_ax, emu_si);
	emu_cmpw(&emu_ax, emu_di);
	if (emu_ax > emu_di) goto l__0369;
	emu_get_memory16(emu_ds, 0x00, 0x10) = emu_si;
	emu_si = emu_ax;
	emu_cx = emu_es;
	emu_get_memory16(emu_ds, 0x00, 0x1C) = emu_cx;
	emu_bx = emu_ds;
	goto l__0333;
l__0369:
	emu_ds = emu_bx;
	emu_get_memory16(emu_ds, 0x00, 0x1C) = 0x0;
	emu_pop(&emu_ds);
	emu_get_memory16(emu_ds, 0x00, 0x120) = emu_si;
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x124);
	emu_subw(&emu_si, emu_ax);
	if (!emu_flags.zf) goto l__0380;
	/* Unresolved jump */ emu_ip = 0x03DE; emu_last_cs = 0x217E; emu_last_ip = 0x037D; emu_last_length = 0x0016; emu_last_crc = 0xB542; emu_call();
l__0380:
	emu_cl = 0x4;
	emu_rolw(&emu_si, emu_cl);
	emu_di = emu_si;
	emu_andw(&emu_di, 0xF);
	emu_andw(&emu_si, 0xFFF0);
	emu_es = emu_get_memory16(emu_ds, 0x00, 0x12C);
	emu_dx = emu_get_memory16(emu_es, 0x00, 0x4);
	emu_cx = emu_get_memory16(emu_es, 0x00, 0x6);
	emu_push(0x039D); f__217E_03ED_000A_D326();
l__039D:
	if (emu_flags.cf) { /* Unresolved jump */ emu_ip = 0x03DF; emu_last_cs = 0x217E; emu_last_ip = 0x039D; emu_last_length = 0x0012; emu_last_crc = 0x6D95; emu_call(); return; }
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x12C);
	emu_push(emu_ds);
l__03A3:
	emu_es = emu_ax;
	emu_cx = emu_get_memory16(emu_es, 0x00, 0xA);
	if (emu_cx == 0) goto l__03AF;
	emu_push(0x03AF); f__217E_0426_003F_15C8();
l__03AF:
	emu_cmpw(&emu_get_memory16(emu_es, 0x00, 0xC), 0x0);
	if (emu_get_memory16(emu_es, 0x00, 0xC) != 0x0) {
		emu_push(0x03BA); emu_Overlay_ReplaceWithJump();
	}
l__03BA:
	emu_ax = emu_get_memory16(emu_es, 0x00, 0x10);
	emu_decw(&emu_ax);
	emu_ds = emu_ax;
	emu_get_memory16(emu_ds, 0x00, 0xE) = emu_es;
	emu_push(emu_es);
	emu_ax = 0xFFFF;
	emu_bx = emu_ax;
	emu_ds = emu_get_memory16(emu_cs, 0x00, 0xA);

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_ds, 0x00, 0x86);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_ds, 0x00, 0x88);
	emu_push(0x03D4);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x01F702C9: emu_Empty5(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x217E; emu_last_ip = 0x03D0; emu_last_length = 0x001A; emu_last_crc = 0xD1EE;
			emu_call();
			return;
	}
l__03D4:
	emu_pop(&emu_es);
	emu_ax = emu_get_memory16(emu_es, 0x00, 0x1C);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax != 0) goto l__03A3;
	emu_pop(&emu_ds);
	emu_clc();

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__217E_03ED_000A_D326()
 *
 * @name f__217E_03ED_000A_D326
 * @implements 217E:03ED:000A:D326 ()
 * @implements 217E:03F7:0006:5843
 * @implements 217E:03FD:0016:DD85
 * @implements 217E:0404:000F:237C
 * @implements 217E:040D:0006:DDC8
 * @implements 217E:0413:0013:7DEB
 * @implements 217E:0424:0002:A187
 *
 * Called From: 217E:039A:001D:F290
 * Called From: 217E:04E8:0020:3089
 */
void f__217E_03ED_000A_D326()
{
l__03ED:
	emu_push(emu_ax);
	emu_bx = emu_get_memory16(emu_ds, 0x00, 0x128);
	emu_ax = 0x4200;
	emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = 0x0070; emu_push(0x03F7); Interrupt_DOS();
l__03F7:
	emu_pop(&emu_ax);
	emu_push(emu_ds);
	emu_ds = emu_ax;
	goto l__0404;
l__03FD:
	emu_ax = emu_ds;
	emu_addw(&emu_ax, 0xFFF);
	emu_ds = emu_ax;
l__0404:
	emu_cx = 0xFFF0;
	emu_orw(&emu_di, emu_di);
	if (emu_di == 0) {
		emu_cx = emu_si;
	}
l__040D:
	emu_xorw(&emu_dx, emu_dx);
	emu_ah = 0x3F;
	emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = 0x0070; emu_push(0x0413); Interrupt_DOS();
l__0413:
	if (!emu_flags.cf) {
		emu_cmpw(&emu_ax, emu_cx);
		if (emu_ax >= emu_cx) {
			emu_subw(&emu_si, emu_ax);
			emu_sbbw(&emu_di, 0x0);
			emu_ax = emu_si;
			emu_orw(&emu_ax, emu_di);
			if (emu_ax != 0) goto l__03FD;
		}
	}
l__0424:
	emu_pop(&emu_ds);

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__217E_0426_003F_15C8()
 *
 * @name f__217E_0426_003F_15C8
 * @implements 217E:0426:003F:15C8 ()
 * @implements 217E:0447:001E:BA4B
 * @implements 217E:0465:0006:2A7A
 *
 * Called From: 217E:03AC:0012:6D95
 * Called From: 217E:03AC:000C:652C
 * Called From: 217E:04F4:000C:7563
 */
void f__217E_0426_003F_15C8()
{
l__0426:
	emu_push(emu_ds);
	emu_push(emu_es);
	emu_ax = emu_get_memory16(emu_es, 0x00, 0x8);
	emu_si = emu_ax;
	emu_andw(&emu_si, 0xF);
	emu_shrw(&emu_ax, 0x1);
	emu_shrw(&emu_ax, 0x1);
	emu_shrw(&emu_ax, 0x1);
	emu_shrw(&emu_ax, 0x1);
	emu_dx = emu_get_memory16(emu_es, 0x00, 0x10);
	emu_addw(&emu_ax, emu_dx);
	emu_ds = emu_ax;
	emu_es = emu_dx;
	emu_shrw(&emu_cx, 0x1);
	emu_cld();
l__0447:
	emu_lodsw(emu_ds);
	emu_bx = emu_ax;
	emu_di = emu_get_memory16(emu_es, emu_bx, 0x0);
	emu_push(emu_ds);
	emu_ax = 0x340E;
	emu_ds = emu_ax;
	emu_ax = emu_di;
	emu_andw(&emu_di, 0xFFF8);
	emu_dx = emu_get_memory16(emu_ds, emu_di, 0x0);
	emu_get_memory16(emu_es, emu_bx, 0x0) = emu_dx;
	emu_testw(&emu_ax, 0x1);
	if ((emu_ax & 0x1) != 0) {
		emu_push(0x0465); f__217E_046B_0058_3F3A();
	}
l__0465:
	emu_pop(&emu_ds);
	if (--emu_cx != 0) goto l__0447;
	emu_pop(&emu_es);
	emu_pop(&emu_ds);

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__217E_046B_0058_3F3A()
 *
 * @name f__217E_046B_0058_3F3A
 * @implements 217E:046B:0058:3F3A ()
 * @implements 217E:04C7:0002:2196
 *
 * Called From: 217E:0462:001E:BA4B
 */
void f__217E_046B_0058_3F3A()
{
l__046B:
	emu_push(emu_cx);
	emu_ds = emu_dx;
	emu_ah = emu_get_memory8(emu_es, emu_bx, 0xFFFF);
	emu_al = emu_ah;
	emu_andw(&emu_ax, 0xF807);
	emu_cmpb(&emu_ah, 0xB8);
	if (emu_ah != 0xB8) goto l__04C7;
	emu_cx = emu_ax;
	emu_ah = emu_get_memory8(emu_es, emu_bx, 0x2);
	emu_al = emu_ah;
	emu_andw(&emu_ax, 0xF807);
	emu_cmpb(&emu_ah, 0x50);
	if (emu_ah != 0x50) goto l__04C7;
	emu_cmpb(&emu_al, emu_cl);
	if (emu_al != emu_cl) goto l__04C7;
	emu_dx = emu_ax;
	emu_ah = emu_get_memory8(emu_es, emu_bx, 0x3);
	emu_al = emu_ah;
	emu_andw(&emu_ax, 0xF807);
	emu_cmpw(&emu_cx, emu_ax);
	if (emu_cx != emu_ax) goto l__04C7;
	emu_ah = emu_get_memory8(emu_es, emu_bx, 0x6);
	emu_al = emu_ah;
	emu_andw(&emu_ax, 0xF807);
	emu_cmpw(&emu_ax, emu_dx);
	if (emu_ax != emu_dx) goto l__04C7;
	emu_di = 0x20;
	emu_cx = emu_get_memory16(emu_ds, 0x00, 0xC);
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x4);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, emu_di, 0x2));
	if (emu_ax == emu_get_memory16(emu_ds, emu_di, 0x2)) { /* Unresolved jump */ emu_ip = 0x04C3; emu_last_cs = 0x217E; emu_last_ip = 0x04BA; emu_last_length = 0x0058; emu_last_crc = 0x3F3A; emu_call(); return; }
	emu_addw(&emu_di, 0x5);
	if (--emu_cx != 0) { /* Unresolved jump */ emu_ip = 0x04B7; emu_last_cs = 0x217E; emu_last_ip = 0x04BF; emu_last_length = 0x0058; emu_last_crc = 0x3F3A; emu_call(); }
	/* Unresolved jump */ emu_ip = 0x04C9; emu_last_cs = 0x217E; emu_last_ip = 0x04C1; emu_last_length = 0x0058; emu_last_crc = 0x3F3A; emu_call();
l__04C7:
	emu_pop(&emu_cx);

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__217E_04CB_0020_3089()
 *
 * @name f__217E_04CB_0020_3089
 * @implements 217E:04CB:0020:3089 ()
 * @implements 217E:04EB:000C:7563
 * @implements 217E:04F7:0002:61BE
 * @implements 217E:04F8:0001:6180
 *
 * Called From: 217E:05D6:000E:EA7B
 */
void f__217E_04CB_0020_3089()
{
l__04CB:
	emu_si = emu_get_memory16(emu_es, 0x00, 0x8);
	emu_xorw(&emu_di, emu_di);
	emu_addw(&emu_si, emu_get_memory16(emu_es, 0x00, 0xA));
	emu_adcw(&emu_di, 0x0);
	emu_dx = emu_get_memory16(emu_es, 0x00, 0x4);
	emu_cx = emu_get_memory16(emu_es, 0x00, 0x6);
	emu_ax = emu_get_memory16(emu_es, 0x00, 0x10);
	emu_push(0x04EB); f__217E_03ED_000A_D326();
l__04EB:
	if (emu_flags.cf) goto l__04F8;
	emu_cx = emu_get_memory16(emu_es, 0x00, 0xA);
	if (emu_cx == 0) goto l__04F7;
	emu_push(0x04F7); f__217E_0426_003F_15C8();
l__04F7:
	emu_clc();
l__04F8:

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function emu_Overlay_Load()
 *
 * @name emu_Overlay_Load
 * @implements 217E:04F9:000E:346A ()
 * @implements 217E:0507:001D:CFD2
 * @implements 217E:0524:0002:CC3A
 * @implements 217E:0526:000F:0135
 * @implements 217E:0535:0020:2849
 * @implements 217E:053E:0017:FADA
 * @implements 217E:0555:000A:2A28
 *
 * Called From: 261F:0181:001D:22F4
 * Called From: 261F:0181:0010:C131
 * Called From: 3480:0000:0002:0000
 * Called From: 3480:0020:0020:0000
 */
void emu_Overlay_Load()
{
l__04F9:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_addw(&emu_bp, 0x6);
	if (!emu_flags.zf) goto l__0507;
	emu_cs = 0x01F7; emu_Print_Error_Overlay(); return;
l__0507:
	emu_push(emu_ax);
	emu_push(emu_bx);
	emu_push(emu_cx);
	emu_push(emu_dx);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_push(emu_ds);
	emu_push(emu_es);
	emu_ax = 0x33F4;
	emu_ds = emu_ax;
	emu_sti();
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x2));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_subw(&emu_get_memory16(emu_ss, emu_bp,  0x2), 0x2);
	if (!emu_flags.zf) goto l__0526;
	emu_push(0x0524); emu_Overlay_Load2();
l__0524:
	goto l__053E;
l__0526:
	emu_addw(&emu_bp, 0x6);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x0);
	emu_xchgw(&emu_get_memory16(emu_ss, emu_bp, -0x6), &emu_ax);
	emu_get_memory16(emu_ss, emu_bp,  0x0) = emu_ax;
	emu_push(0x0535); emu_Overlay_Load2();
l__0535:
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x0);
	emu_xchgw(&emu_get_memory16(emu_ss, emu_bp, -0x6), &emu_ax);
	emu_get_memory16(emu_ss, emu_bp,  0x0) = emu_ax;
l__053E:
	emu_pop(&emu_bx);
	emu_al = emu_get_memory8(emu_es, 0x00, 0x1A);
	emu_andb(&emu_al, 0x8);
	emu_andb(&emu_get_memory8(emu_es, 0x00, 0x1A), 0xF7);
	emu_ax = (int8)emu_al;
	emu_ds = emu_get_memory16(emu_cs, 0x00, 0xA);

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_ds, 0x00, 0x86);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_ds, 0x00, 0x88);
	emu_push(0x0555);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x01F702C9: emu_Empty5(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x217E; emu_last_ip = 0x0551; emu_last_length = 0x0017; emu_last_crc = 0xFADA;
			emu_call();
			return;
	}
l__0555:
	emu_pop(&emu_es);
	emu_pop(&emu_ds);
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_pop(&emu_dx);
	emu_pop(&emu_cx);
	emu_pop(&emu_bx);
	emu_pop(&emu_ax);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function emu_Overlay_LocateMemory()
 *
 * @name emu_Overlay_LocateMemory
 * @implements 217E:055F:0008:D2BC ()
 * @implements 217E:0567:0002:D73A
 * @implements 217E:0569:0007:6790
 * @implements 217E:0570:0016:AF8C
 * @implements 217E:0586:0003:5C07
 * @implements 217E:0589:0002:C5BA
 * @implements 217E:058B:0008:82B1
 * @implements 217E:0593:0003:1DA9
 * @implements 217E:0596:0004:BDB9
 * @implements 217E:0597:0003:1DBC
 * @implements 217E:059A:000F:AF3B
 *
 * Called From: 217E:05CA:0009:8AAB
 */
void emu_Overlay_LocateMemory()
{
l__055F:
	emu_push(emu_es);
	emu_incw(&emu_get_memory16(emu_ds, 0x00, 0x12A));
	emu_push(0x0567); emu_Overlay_GetTotalSize();
l__0567:
	goto l__0597;
l__0569:
	emu_popf();
	emu_push(emu_dx);
	if (emu_flags.cf) {
		emu_push(0x0570); f__217E_063C_002A_EC58();
	}
l__0570:
	emu_es = emu_get_memory16(emu_ds, 0x00, 0x12C);
	emu_ax = emu_get_memory16(emu_es, 0x00, 0x1C);
	emu_get_memory16(emu_ds, 0x00, 0x12C) = emu_ax;
	emu_cmpb(&emu_get_memory8(emu_es, 0x00, 0x1B), 0x0);
	if (emu_get_memory8(emu_es, 0x00, 0x1B) != 0x0) goto l__058B;
	emu_push(0x0586); f__217E_0624_0003_DD23();
l__0586:
	emu_push(0x0589); emu_Overlay_GetCodeSize();
l__0589:
	goto l__0596;
l__058B:
	emu_decb(&emu_get_memory8(emu_es, 0x00, 0x1B));
	emu_push(0x0593); f__217E_06E9_0041_701D();
l__0593:
	emu_push(0x0596); emu_Overlay_AddToLinkedList();
l__0596:
	emu_pop(&emu_dx);
l__0597:
	emu_push(0x059A); f__217E_078A_001C_ADD5();
l__059A:
	emu_pushf();
	emu_cmpw(&emu_dx, emu_ax);
	if (emu_dx > emu_ax) goto l__0569;
	emu_popf();
	emu_pop(&emu_es);
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x120);
	emu_get_memory16(emu_es, 0x00, 0x10) = emu_ax;

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function emu_Overlay_Load2()
 *
 * @name emu_Overlay_Load2
 * @implements 217E:05A9:001A:42B9 ()
 * @implements 217E:05C4:0009:8AAB
 * @implements 217E:05CD:000E:EA7B
 * @implements 217E:05DB:0005:BE02
 * @implements 217E:05E0:0003:1D25
 * @implements 217E:05E3:000F:0FFD
 * @implements 217E:05F2:001F:BC5D
 * @implements 217E:05F6:001B:C055
 * @implements 217E:0611:0003:9D28
 * @implements 217E:0614:0003:DDA3
 * @implements 217E:0617:0006:E0A3
 * @implements 217E:061D:0002:A181
 * @implements 217E:061F:0005:07A7
 *
 * Called From: 217E:0521:001D:CFD2
 * Called From: 217E:0532:000F:0135
 */
void emu_Overlay_Load2()
{
l__05A9:
	emu_incw(&emu_get_memory16(emu_ds, 0x00, 0x11C));
	emu_cmpw(&emu_get_memory16(emu_es, 0x00, 0x10), 0x0);
	if (emu_get_memory16(emu_es, 0x00, 0x10) == 0x0) goto l__05C4;
	emu_get_memory8(emu_es, 0x00, 0x1B) = 0x1;
	emu_orb(&emu_get_memory8(emu_es, 0x00, 0x1A), 0x4);
	goto l__05E0;
l__05C4:
	emu_orb(&emu_get_memory8(emu_es, 0x00, 0x1A), 0x8);
	emu_push(0x05CD); emu_Overlay_LocateMemory();
l__05CD:
	emu_push(emu_ds);
	emu_decw(&emu_ax);
	emu_ds = emu_ax;
	emu_get_memory16(emu_ds, 0x00, 0xE) = emu_es;
	emu_pop(&emu_ds);

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_es, 0x00, 0x18);
	emu_push(0x05DB);
	switch (emu_ip) {
		case 0x04CB: f__217E_04CB_0020_3089(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x217E; emu_last_ip = 0x05D6; emu_last_length = 0x000E; emu_last_crc = 0xEA7B;
			emu_call();
			return;
	}
l__05DB:
	if (emu_flags.cf) goto l__061F;
	emu_push(0x05E0); emu_Overlay_AddToLinkedList();
l__05E0:
	emu_push(0x05E3); emu_Overlay_Activate();
l__05E3:
	emu_al = emu_get_memory8(emu_es, 0x00, 0x1A);
	emu_andb(&emu_al, 0x3);
	emu_addb(&emu_get_memory8(emu_es, 0x00, 0x1B), emu_al);
	emu_push(emu_es);
	emu_push(0x05F2); f__217E_078A_001C_ADD5();
l__05F2:
	emu_es = emu_get_memory16(emu_ds, 0x00, 0x12C);
l__05F6:
	emu_cx = emu_get_memory16(emu_es, 0x00, 0x1C);
	if (emu_cx == 0) goto l__061D;
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x118));
	if (emu_ax >= emu_get_memory16(emu_ds, 0x00, 0x118)) goto l__061D;
	emu_push(emu_cx);
	emu_push(emu_ax);
	emu_cmpb(&emu_get_memory8(emu_es, 0x00, 0x1B), 0x0);
	if (emu_get_memory8(emu_es, 0x00, 0x1B) == 0x0) goto l__0611;
	emu_xorw(&emu_ax, emu_ax);
	goto l__0617;
l__0611:
	emu_push(0x0614); f__217E_06B6_0014_B057();
l__0614:
	emu_push(0x0617); emu_Overlay_GetCodeSize();
l__0617:
	emu_pop(&emu_cx);
	emu_pop(&emu_es);
	emu_addw(&emu_ax, emu_cx);
	goto l__05F6;
l__061D:
	emu_pop(&emu_es);

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
l__061F:
	emu_cs = 0x01F7; emu_Print_Error_Overlay(); return;
}

/**
 * Decompiled function f__217E_0624_0003_DD23()
 *
 * @name f__217E_0624_0003_DD23
 * @implements 217E:0624:0003:DD23 ()
 * @implements 217E:0627:000D:13D0
 * @implements 217E:0634:0008:5E8E
 *
 * Called From: 217E:0583:0016:AF8C
 */
void f__217E_0624_0003_DD23()
{
l__0624:
	emu_push(0x0627); f__217E_06B6_0014_B057();
l__0627:
	emu_cmpw(&emu_get_memory16(emu_es, 0x00, 0x18), 0x4CB);
	if (emu_get_memory16(emu_es, 0x00, 0x18) == 0x4CB) {

		/* Call based on memory/register values */
		emu_ip = emu_get_memory16(emu_ds, 0x00, 0x80);
		emu_push(0x0634);
		switch (emu_ip) {
			case 0x125B: f__217E_125B_0001_6180(); break;
			default:
				/* In case we don't know the call point yet, call the dynamic call */
				emu_last_cs = 0x217E; emu_last_ip = 0x0630; emu_last_length = 0x000D; emu_last_crc = 0x13D0;
				emu_call();
				return;
		}
	}
l__0634:
	emu_get_memory16(emu_es, 0x00, 0x10) = 0x0;

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__217E_063C_002A_EC58()
 *
 * @name f__217E_063C_002A_EC58
 * @implements 217E:063C:002A:EC58 ()
 * @implements 217E:0641:0025:E16B
 * @implements 217E:0656:0010:3DB0
 * @implements 217E:0666:0007:144D
 * @implements 217E:066D:000A:74F1
 *
 * Called From: 217E:056D:0007:6790
 */
void f__217E_063C_002A_EC58()
{
l__063C:
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x12C);
	emu_xorw(&emu_cx, emu_cx);
l__0641:
	emu_incw(&emu_cx);
	emu_push(emu_ax);
	emu_es = emu_ax;
	emu_ax = emu_get_memory16(emu_es, 0x00, 0x1C);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax != 0) goto l__0641;
	emu_get_memory16(emu_ds, 0x00, 0x12C) = emu_ax;
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x126);
	emu_get_memory16(emu_ds, 0x00, 0x120) = emu_ax;
l__0656:
	emu_pop(&emu_es);
	emu_push(emu_cx);
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x12C);
	emu_get_memory16(emu_es, 0x00, 0x1C) = emu_ax;
	emu_get_memory16(emu_ds, 0x00, 0x12C) = emu_es;
	emu_push(0x0666); emu_Overlay_GetCodeSize();
l__0666:
	emu_subw(&emu_get_memory16(emu_ds, 0x00, 0x120), emu_ax);
	emu_push(0x066D); f__217E_06E9_0041_701D();
l__066D:
	emu_pop(&emu_cx);
	if (--emu_cx != 0) goto l__0656;
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x124);
	emu_get_memory16(emu_ds, 0x00, 0x120) = emu_ax;

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function emu_Overlay_Activate()
 *
 * @name emu_Overlay_Activate
 * @implements 217E:0677:0009:9C4F ()
 * @implements 217E:0680:0018:29F1
 *
 * Called From: 217E:05E0:0003:1D25
 */
void emu_Overlay_Activate()
{
l__0677:
	emu_cmpw(&emu_get_memory16(emu_es, 0x00, 0xC), 0x0);
	if (emu_get_memory16(emu_es, 0x00, 0xC) != 0x0) goto l__0680;

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
l__0680:
	emu_cmpb(&emu_get_memory8(emu_es, 0x00, 0x20), 0xEA);
	if (emu_get_memory8(emu_es, 0x00, 0x20) == 0xEA) { /* Unresolved jump */ emu_ip = 0x06B5; emu_last_cs = 0x217E; emu_last_ip = 0x0686; emu_last_length = 0x0018; emu_last_crc = 0x29F1; emu_call(); return; }
	emu_cx = emu_get_memory16(emu_es, 0x00, 0x2);
	if (emu_cx == 0) { emu_Overlay_ReplaceWithJump(); return; }
	emu_ax = emu_get_memory16(emu_es, 0x00, 0x10);
	emu_dx = emu_es;
	emu_push(0x0698); emu_Overlay_ReplaceReturnCSIP();
	emu_Overlay_ReplaceWithJump(); return;
}

/**
 * Decompiled function emu_Overlay_ReplaceWithJump()
 *
 * @name emu_Overlay_ReplaceWithJump
 * @implements 217E:0698:001E:EA6B ()
 * @implements 217E:06A6:0010:8211
 *
 * Called From: 217E:03B7:000B:434C
 * Called From: 217E:068D:0018:29F1
 */
void emu_Overlay_ReplaceWithJump()
{
l__0698:
	emu_bx = emu_get_memory16(emu_es, 0x00, 0x10);
	emu_cx = emu_get_memory16(emu_es, 0x00, 0xC);
	emu_di = 0x20;
	emu_cld();
l__06A6:
	emu_dx = emu_get_memory16(emu_es, emu_di, 0x2);
	emu_al = 0xEA;
	emu_stosb();
	emu_ax = emu_dx;
	emu_stosw();
	emu_ax = emu_bx;
	emu_stosw();
	if (--emu_cx != 0) goto l__06A6;

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__217E_06B6_0014_B057()
 *
 * @name f__217E_06B6_0014_B057
 * @implements 217E:06B6:0014:B057 ()
 * @implements 217E:06CA:001F:56B3
 * @implements 217E:06D8:0011:EAAF
 * @implements 217E:06E8:0001:6180
 *
 * Called From: 217E:0611:0003:9D28
 * Called From: 217E:0624:0003:DD23
 */
void f__217E_06B6_0014_B057()
{
l__06B6:
	emu_cmpb(&emu_get_memory8(emu_es, 0x00, 0x20), 0xCD);
	if (emu_get_memory8(emu_es, 0x00, 0x20) == 0xCD) goto l__06E8;
	emu_ax = emu_es;
	emu_dx = emu_get_memory16(emu_es, 0x00, 0x10);
	emu_xorw(&emu_cx, emu_cx);
	emu_push(0x06CA); emu_Overlay_ReplaceReturnCSIP();
l__06CA:
	emu_get_memory16(emu_es, 0x00, 0x2) = emu_cx;
	emu_cx = emu_get_memory16(emu_es, 0x00, 0xC);
	emu_di = 0x20;
	emu_cld();
l__06D8:
	emu_dx = emu_get_memory16(emu_es, emu_di, 0x1);
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x110);
	emu_stosw();
	emu_ax = emu_dx;
	emu_stosw();
	emu_xorb(&emu_al, emu_al);
	emu_stosb();
	if (--emu_cx != 0) goto l__06D8;
l__06E8:

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__217E_06E9_0041_701D()
 *
 * @name f__217E_06E9_0041_701D
 * @implements 217E:06E9:0041:701D ()
 * @implements 217E:070A:0020:8DAA
 * @implements 217E:072A:0010:A45A
 * @implements 217E:0733:0007:C692
 * @implements 217E:0739:0001:6180
 *
 * Called From: 217E:0590:0008:82B1
 * Called From: 217E:066A:0007:144D
 */
void f__217E_06E9_0041_701D()
{
l__06E9:
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x120);
	emu_dx = emu_get_memory16(emu_es, 0x00, 0x10);
	emu_get_memory16(emu_es, 0x00, 0x10) = emu_ax;
	emu_cx = emu_get_memory16(emu_es, 0x00, 0x8);
	emu_incw(&emu_cx);
	emu_shrw(&emu_cx, 0x1);
	emu_xorw(&emu_si, emu_si);
	emu_cld();
	emu_cmpw(&emu_ax, emu_dx);
	if (emu_ax >= emu_dx) {
		emu_si = emu_cx;
		emu_decw(&emu_si);
		emu_shlw(&emu_si, 0x1);
		emu_std();
	}
l__070A:
	emu_di = emu_si;
	emu_push(emu_ds);
	emu_push(emu_es);
	emu_ds = emu_dx;
	emu_es = emu_ax;
	emu_rep_movsw(emu_ds);
	emu_cld();
	emu_decw(&emu_ax);
	emu_ds = emu_ax;
	emu_pop(&emu_es);
	emu_get_memory16(emu_ds, 0x00, 0xE) = emu_es;
	emu_incw(&emu_ax);
	emu_pop(&emu_ds);
	emu_cmpb(&emu_get_memory8(emu_es, 0x00, 0x20), 0xCD);
	if (emu_get_memory8(emu_es, 0x00, 0x20) == 0xCD) goto l__0739;
	emu_push(0x072A); emu_Overlay_ReplaceReturnCS();
l__072A:
	emu_cx = emu_get_memory16(emu_es, 0x00, 0xC);
	emu_di = 0x23;
	emu_cld();
l__0733:
	emu_stosw();
	emu_addw(&emu_di, 0x3);
	if (--emu_cx != 0) goto l__0733;
l__0739:

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function emu_Overlay_AddToLinkedList()
 *
 * @name emu_Overlay_AddToLinkedList
 * @implements 217E:073A:0003:5D1A ()
 * @implements 217E:073D:001B:E516
 * @implements 217E:0745:0013:6593
 *
 * Called From: 217E:0593:0003:1DA9
 * Called From: 217E:05DD:0005:BE02
 */
void emu_Overlay_AddToLinkedList()
{
l__073A:
	emu_push(0x073D); emu_Overlay_GetCodeSize();
l__073D:
	emu_addw(&emu_get_memory16(emu_ds, 0x00, 0x120), emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x3405;
l__0745:
	emu_ds = emu_ax;
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x1C);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax != 0) goto l__0745;
	emu_get_memory16(emu_ds, 0x00, 0x1C) = emu_es;
	emu_get_memory16(emu_es, 0x00, 0x1C) = emu_ax;
	emu_pop(&emu_ds);

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function emu_Overlay_ReplaceReturnCSIP()
 *
 * @name emu_Overlay_ReplaceReturnCSIP
 * @implements 217E:0758:0003:5D02 ()
 * @implements 217E:075B:0009:D235
 * @implements 217E:0763:0001:6180
 *
 * Called From: 217E:0695:0018:29F1
 * Called From: 217E:06C7:0014:B057
 */
void emu_Overlay_ReplaceReturnCSIP()
{
l__0758:
	emu_push(0x075B); emu_Overlay_ReplaceReturnCS();
l__075B:
	emu_orw(&emu_bx, emu_bx);
	if (emu_bx != 0) {
		emu_xchgw(&emu_get_memory16(emu_ss, emu_bx, 0x2), &emu_cx);
	}
l__0763:

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function emu_Overlay_ReplaceReturnCS()
 *
 * @name emu_Overlay_ReplaceReturnCS
 * @implements 217E:0764:0006:1247 ()
 * @implements 217E:076A:001D:1254
 * @implements 217E:076E:0019:CE13
 * @implements 217E:0787:0003:2A36
 *
 * Called From: 217E:0727:0041:701D
 * Called From: 217E:0727:0020:8DAA
 * Called From: 217E:0758:0003:5D02
 */
void emu_Overlay_ReplaceReturnCS()
{
l__0764:
	emu_xorw(&emu_bx, emu_bx);
	emu_push(emu_cx);
	emu_push(emu_bp);
	goto l__076E;
l__076A:
	emu_shlw(&emu_cx, 0x1);
	emu_bp = emu_cx;
l__076E:
	emu_cx = emu_get_memory16(emu_ss, emu_bp,  0x0);
	emu_shrw(&emu_cx, 0x1);
	if (emu_flags.zf) goto l__0787;
	if (!emu_flags.cf) {
		emu_cmpw(&emu_dx, emu_get_memory16(emu_ss, emu_bp,  0x4));
		if (emu_dx == emu_get_memory16(emu_ss, emu_bp,  0x4)) {
			emu_get_memory16(emu_ss, emu_bp,  0x4) = emu_ax;
			emu_orw(&emu_bx, emu_bx);
			if (emu_bx == 0) {
				emu_bx = emu_bp;
			}
		}
	}
	goto l__076A;
l__0787:
	emu_pop(&emu_bp);
	emu_pop(&emu_cx);

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__217E_078A_001C_ADD5()
 *
 * @name f__217E_078A_001C_ADD5
 * @implements 217E:078A:001C:ADD5 ()
 * @implements 217E:07A5:0001:6180
 *
 * Called From: 217E:0597:0003:1DBC
 * Called From: 217E:0597:0004:BDB9
 * Called From: 217E:05EF:000F:0FFD
 */
void f__217E_078A_001C_ADD5()
{
l__078A:
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x12C);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax == 0) { /* Unresolved jump */ emu_ip = 0x079D; emu_last_cs = 0x217E; emu_last_ip = 0x078F; emu_last_length = 0x001C; emu_last_crc = 0xADD5; emu_call(); return; }
	emu_es = emu_ax;
	emu_ax = emu_get_memory16(emu_es, 0x00, 0x10);
	emu_subw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x120));
	if (emu_flags.cf) {
		emu_ax = emu_get_memory16(emu_ds, 0x00, 0x126);
		emu_subw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x120));
		emu_stc();
	}
l__07A5:

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function emu_Overlay_GetCodeSize()
 *
 * @name emu_Overlay_GetCodeSize
 * @implements 217E:07A6:000C:1B04 ()
 *
 * Called From: 217E:0586:0003:5C07
 * Called From: 217E:0614:0003:DDA3
 * Called From: 217E:0663:0025:E16B
 * Called From: 217E:0663:0010:3DB0
 * Called From: 217E:073A:0003:5D1A
 */
void emu_Overlay_GetCodeSize()
{
l__07A6:
	emu_ax = emu_get_memory16(emu_es, 0x00, 0x8);
	emu_addw(&emu_ax, 0x11);
	emu_cl = 0x4;
	emu_shrw(&emu_ax, emu_cl);

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function emu_Overlay_GetTotalSize()
 *
 * @name emu_Overlay_GetTotalSize
 * @implements 217E:07B2:0018:C2D5 ()
 *
 * Called From: 217E:0302:001C:2B54
 * Called From: 217E:0564:0008:D2BC
 */
void emu_Overlay_GetTotalSize()
{
l__07B2:
	emu_cl = 0x4;
	emu_ax = emu_get_memory16(emu_es, 0x00, 0x8);
	emu_addw(&emu_ax, 0x11);
	emu_shrw(&emu_ax, emu_cl);
	emu_dx = emu_get_memory16(emu_es, 0x00, 0xA);
	emu_addw(&emu_dx, 0xF);
	emu_shrw(&emu_dx, emu_cl);
	emu_addw(&emu_dx, emu_ax);

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__217E_08F0_0016_CE0F()
 *
 * @name f__217E_08F0_0016_CE0F
 * @implements 217E:08F0:0016:CE0F ()
 * @implements 217E:0900:0006:CAE4
 * @implements 217E:0906:0017:402E
 * @implements 217E:091D:0005:7B9B
 * @implements 217E:0922:0049:697A
 * @implements 217E:09CD:0003:2677
 *
 * Called From: 1DB6:00D5:0015:4555
 */
void f__217E_08F0_0016_CE0F()
{
l__08F0:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_ds);
	emu_ds = emu_get_memory16(emu_cs, 0x00, 0xA);
	emu_testb(&emu_get_memory8(emu_ds, 0x00, 0x10), 0x1);
	if ((emu_get_memory8(emu_ds, 0x00, 0x10) & 0x1) == 0) goto l__0906;
l__0900:
	emu_ax = 0xFFFF;
	goto l__09CD;
l__0906:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp,  0x6), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp,  0x6) == 0x0) goto l__091D;
	emu_cx = emu_get_memory16(emu_ss, emu_bp,  0xA);
	if (emu_cx == 0) goto l__0900;
	emu_cmpw(&emu_cx, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_cx <= emu_get_memory16(emu_ss, emu_bp,  0x8)) goto l__0900;
	emu_orb(&emu_get_memory8(emu_ds, 0x00, 0x38), 0x1);
	/* Unresolved jump */ emu_ip = 0x093A; emu_last_cs = 0x217E; emu_last_ip = 0x091B; emu_last_length = 0x0017; emu_last_crc = 0x402E; emu_call();
l__091D:
	emu_push(emu_cs);
	emu_push(0x0922); f__217E_0D90_001F_C453();
l__0922:
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax != 0) {
		emu_bx = emu_get_memory16(emu_ss, emu_bp,  0x8);
		emu_cmpw(&emu_bx, emu_ax);
		if (emu_bx < emu_ax) {
			emu_subw(&emu_ax, emu_bx);
			emu_cx = emu_get_memory16(emu_ss, emu_bp,  0xA);
			if (emu_cx == 0) { /* Unresolved jump */ emu_ip = 0x0938; emu_last_cs = 0x217E; emu_last_ip = 0x0932; emu_last_length = 0x0049; emu_last_crc = 0x697A; emu_call(); return; }
			emu_cmpw(&emu_cx, emu_ax);
			if (emu_cx < emu_ax) { /* Unresolved jump */ emu_ip = 0x093A; emu_last_cs = 0x217E; emu_last_ip = 0x0936; emu_last_length = 0x0049; emu_last_crc = 0x697A; emu_call(); return; }
			emu_cx = emu_ax;
			emu_es = emu_get_memory16(emu_cs, 0x00, 0xC);
			emu_bx = 0x4000;
			emu_ax = emu_get_memory16(emu_es, 0x00, 0x661E);
			emu_dx = emu_get_memory16(emu_es, 0x00, 0x6620);
			emu_addw(&emu_ax, 0x3FFF);
			emu_adcw(&emu_dx, 0x0);
			emu_divw(&emu_ax, emu_bx);
			emu_cmpw(&emu_cx, emu_ax);
			if (emu_cx <= emu_ax) { /* Unresolved jump */ emu_ip = 0x0959; emu_last_cs = 0x217E; emu_last_ip = 0x0955; emu_last_length = 0x0049; emu_last_crc = 0x697A; emu_call(); return; }
			emu_cx = emu_ax;
			emu_cmpw(&emu_cx, 0x4);
			if (emu_cx >= 0x4) { /* Unresolved jump */ emu_ip = 0x096B; emu_last_cs = 0x217E; emu_last_ip = 0x095C; emu_last_length = 0x0049; emu_last_crc = 0x697A; emu_call(); return; }
			emu_ax = 0x400;
			emu_mulw(&emu_ax, emu_cx);
			emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x11A));
			if (emu_ax >= emu_get_memory16(emu_ds, 0x00, 0x11A)) { /* Unresolved jump */ emu_ip = 0x096B; emu_last_cs = 0x217E; emu_last_ip = 0x0967; emu_last_length = 0x0049; emu_last_crc = 0x697A; emu_call(); return; }
		}
	}
	goto l__0900;
l__09CD:
	emu_pop(&emu_ds);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__217E_0ABA_001A_9AA0()
 *
 * @name f__217E_0ABA_001A_9AA0
 * @implements 217E:0ABA:001A:9AA0 ()
 * @implements 217E:0AD4:0009:FFA2
 * @implements 217E:0ADD:000A:FD41
 * @implements 217E:0BCD:0007:F178
 *
 * Called From: 1DB6:00E9:0014:2E19
 */
void f__217E_0ABA_001A_9AA0()
{
l__0ABA:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x2);
	emu_push(emu_ds);
	emu_ds = emu_get_memory16(emu_cs, 0x00, 0xA);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_testb(&emu_get_memory8(emu_ds, 0x00, 0x10), 0x2);
	if ((emu_get_memory8(emu_ds, 0x00, 0x10) & 0x2) == 0) goto l__0AD4;
	emu_xorw(&emu_ax, emu_ax);
	goto l__0BCD;
l__0AD4:
	emu_get_memory8(emu_ss, emu_bp, -0x2) = 0x0;
	emu_push(emu_cs);
	emu_push(0x0ADD); f__217E_0ED2_001F_0CC9();
l__0ADD:
	emu_orw(&emu_ax, emu_dx);
	if (emu_ax != 0) { /* Unresolved jump */ emu_ip = 0x0AE7; emu_last_cs = 0x217E; emu_last_ip = 0x0ADF; emu_last_length = 0x000A; emu_last_crc = 0xFD41; emu_call(); return; }
	emu_ax = 0xFFFF;
	goto l__0BCD;
l__0BCD:
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_pop(&emu_ds);
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__217E_0D2C_000B_83A7()
 *
 * @name f__217E_0D2C_000B_83A7
 * @implements 217E:0D2C:000B:83A7 ()
 * @implements 217E:0D37:001C:2DB2
 * @implements 217E:0D53:0010:E0EA
 * @implements 217E:0D63:0017:4EFA
 * @implements 217E:0D7A:0008:80E3
 * @implements 217E:0D82:0005:67AA
 *
 * Called From: 01F7:0222:0015:AC4F
 */
void f__217E_0D2C_000B_83A7()
{
l__0D2C:
	emu_push(emu_ds);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_ax = 0x33F4;
	emu_ds = emu_ax;
	emu_push(0x0D37); f__217E_02A0_002C_0B5F();
l__0D37:
	emu_bx = emu_get_memory16(emu_ds, 0x00, 0x11A);
	emu_ax = 0x353F;
	emu_ds = emu_ax;
	emu_ax = 0x353F;
	emu_es = emu_ax;
	emu_cmpw(&emu_bx, emu_get_memory16(emu_es, 0x00, 0x6622));
	if (emu_bx >= emu_get_memory16(emu_es, 0x00, 0x6622)) goto l__0D53;
	emu_bx = emu_get_memory16(emu_es, 0x00, 0x6622);
	/* Unresolved jump */ emu_ip = 0x0D55; emu_last_cs = 0x217E; emu_last_ip = 0x0D51; emu_last_length = 0x001C; emu_last_crc = 0x2DB2; emu_call();
l__0D53:
	emu_shlw(&emu_bx, 0x1);
	emu_incw(&emu_bx);
	emu_push(emu_bx);
	emu_ax = 0x10;
	emu_mulw(&emu_ax, emu_bx);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0D63); emu_cs = 0x01F7; f__01F7_1855_0053_AC2D();
l__0D63:
	emu_pop(&emu_bx);
	emu_pop(&emu_bx);
	emu_pop(&emu_bx);
	emu_cx = emu_ax;
	emu_orw(&emu_cx, emu_dx);
	if (emu_cx == 0) goto l__0D82;
	emu_incw(&emu_dx);
	emu_addw(&emu_bx, emu_dx);
	emu_push(emu_dx);
	emu_push(emu_bx);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x0D7A); f__217E_0015_0019_BAFF();
l__0D7A:
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax != 0) goto l__0D82;
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_pop(&emu_ds);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
l__0D82:
	emu_cs = 0x01F7; emu_Error_Abnormal_Termination(); return;
}

/**
 * Decompiled function f__217E_0D90_001F_C453()
 *
 * @name f__217E_0D90_001F_C453
 * @implements 217E:0D90:001F:C453 ()
 * @implements 217E:0DB6:000B:9E51
 * @implements 217E:0DC1:000A:8A92
 * @implements 217E:0DE8:0002:E53A
 * @implements 217E:0E34:000E:33D2
 *
 * Called From: 217E:091F:0005:7B9B
 */
void f__217E_0D90_001F_C453()
{
l__0D90:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x102);
	emu_push(emu_ds);
	emu_ds = emu_get_memory16(emu_cs, 0x00, 0xA);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_testb(&emu_get_memory8(emu_ds, 0x00, 0x38), 0x1);
	if ((emu_get_memory8(emu_ds, 0x00, 0x38) & 0x1) == 0) goto l__0DB6;
	emu_testb(&emu_get_memory8(emu_ds, 0x00, 0x38), 0x2);
	if ((emu_get_memory8(emu_ds, 0x00, 0x38) & 0x2) != 0) { /* Unresolved jump */ emu_ip = 0x0DB0; emu_last_cs = 0x217E; emu_last_ip = 0x0DAB; emu_last_length = 0x001F; emu_last_crc = 0xC453; emu_call(); return; }
	/* Unresolved jump */ emu_ip = 0x0E1E; emu_last_cs = 0x217E; emu_last_ip = 0x0DAD; emu_last_length = 0x001F; emu_last_crc = 0xC453; emu_call();
l__0DB6:
	emu_push(emu_ds);
	emu_push(emu_cs);
	emu_pop(&emu_ds);
	emu_dx = 0xD87;
	emu_ax = 0x3D00;
	emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = 0x0070; emu_push(0x0DC1); Interrupt_DOS();
l__0DC1:
	emu_pop(&emu_ds);
	emu_bx = emu_ax;
	if (emu_flags.cf) goto l__0DE8;
	emu_ax = 0x4400;
	/* Unresolved jump */ emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = emu_get_memory16(0, 0, 0x21 * 4 + 2); emu_push(0x0DCB); emu_ip = emu_get_memory16(0, 0, 0x21 * 4 + 0); emu_last_cs = 0x217E; emu_last_ip = 0x0DC9; emu_last_length = 0x000A; emu_last_crc = 0x8A92; emu_call();
	/* Unresolved jump */ emu_ip = 0x0DCB; emu_last_cs = 0x217E; emu_last_ip = 0x0DCB; emu_last_length = 0x000A; emu_last_crc = 0x8A92; emu_call();
l__0DE8:
	goto l__0E34;
l__0E34:
	emu_xorw(&emu_ax, emu_ax);
	emu_get_memory8(emu_ds, 0x00, 0x38) = 0x0;
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_pop(&emu_ds);
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__217E_0ED2_001F_0CC9()
 *
 * @name f__217E_0ED2_001F_0CC9
 * @implements 217E:0ED2:001F:0CC9 ()
 * @implements 217E:0EF1:0027:166D
 * @implements 217E:0F18:0007:465E
 * @implements 217E:0F1F:0023:307C
 * @implements 217E:0F3F:0003:DD3F
 * @implements 217E:0F42:0005:5A13
 * @implements 217E:0F47:0009:0AE5
 * @implements 217E:0FC1:0004:1BB8
 * @implements 217E:0FC5:0007:2EB6
 * @implements 217E:1078:000A:64D8
 *
 * Called From: 217E:0ADA:0009:FFA2
 */
void f__217E_0ED2_001F_0CC9()
{
l__0ED2:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x22);
	emu_push(emu_ds);
	emu_ds = emu_get_memory16(emu_cs, 0x00, 0xA);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_testb(&emu_get_memory8(emu_ds, 0x00, 0x42), 0x1);
	if ((emu_get_memory8(emu_ds, 0x00, 0x42) & 0x1) == 0) goto l__0EF1;
	emu_testb(&emu_get_memory8(emu_ds, 0x00, 0x42), 0x2);
	if ((emu_get_memory8(emu_ds, 0x00, 0x42) & 0x2) == 0) { /* Unresolved jump */ emu_ip = 0x0EF6; emu_last_cs = 0x217E; emu_last_ip = 0x0EEC; emu_last_length = 0x001F; emu_last_crc = 0x0CC9; emu_call(); return; }
	/* Unresolved jump */ emu_ip = 0x1067; emu_last_cs = 0x217E; emu_last_ip = 0x0EEE; emu_last_length = 0x001F; emu_last_crc = 0x0CC9; emu_call();
l__0EF1:
	emu_get_memory8(emu_ds, 0x00, 0x42) = 0x1;
	emu_get_memory16(emu_ds, 0x00, 0x3A) = 0x0;
	emu_get_memory16(emu_ds, 0x00, 0x3C) = 0x10;
	emu_get_memory16(emu_ds, 0x00, 0x3E) = 0x0;
	emu_get_memory16(emu_ds, 0x00, 0x40) = 0x10;
	emu_push(emu_sp);
	emu_pop(&emu_ax);
	emu_cmpw(&emu_ax, emu_sp);
	if (emu_ax != emu_sp) { /* Unresolved jump */ emu_ip = 0x0F1C; emu_last_cs = 0x217E; emu_last_ip = 0x0F12; emu_last_length = 0x0027; emu_last_crc = 0x166D; emu_call(); return; }
	emu_ah = 0x30;
	emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = 0x0070; emu_push(0x0F18); Interrupt_DOS();
l__0F18:
	emu_cmpb(&emu_al, 0xA);
	if (emu_al < 0xA) goto l__0F1F;
	goto l__1078;
l__0F1F:
	emu_xchgb(&emu_ah, &emu_al);
	emu_get_memory16(emu_ss, emu_bp, -0x22) = emu_ax;
	emu_ax = 0xF000;
	emu_es = emu_ax;
	emu_al = emu_get_memory8(emu_es, 0x00, 0xFFFE);
	emu_cmpb(&emu_al, 0xFC);
	if (emu_al > 0xFC) { /* Unresolved jump */ emu_ip = 0x0F1C; emu_last_cs = 0x217E; emu_last_ip = 0x0F2F; emu_last_length = 0x0023; emu_last_crc = 0x307C; emu_call(); return; }
	emu_cmpb(&emu_al, 0xFB);
	if (emu_al == 0xFB) { /* Unresolved jump */ emu_ip = 0x0F1C; emu_last_cs = 0x217E; emu_last_ip = 0x0F33; emu_last_length = 0x0023; emu_last_crc = 0x307C; emu_call(); return; }
	emu_cmpb(&emu_al, 0xF9);
	if (emu_al == 0xF9) { /* Unresolved jump */ emu_ip = 0x0F1C; emu_last_cs = 0x217E; emu_last_ip = 0x0F37; emu_last_length = 0x0023; emu_last_crc = 0x307C; emu_call(); return; }
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x22), 0x31);
	if (emu_get_memory16(emu_ss, emu_bp, -0x22) >= 0x31) goto l__0F42;
l__0F3F:
	goto l__0FC1;
l__0F42:
	emu_ax = 0x4300;
	emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = 0x0070; emu_push(0x0F47); Interrupt_DOS_Multiplex();
l__0F47:
	emu_cmpb(&emu_al, 0x80);
	if (emu_al != 0x80) goto l__0F3F;
	emu_ax = 0x4310;
	/* Unresolved jump */ emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = emu_get_memory16(0, 0, 0x2F * 4 + 2); emu_push(0x0F50); emu_ip = emu_get_memory16(0, 0, 0x2F * 4 + 0); emu_last_cs = 0x217E; emu_last_ip = 0x0F4E; emu_last_length = 0x0009; emu_last_crc = 0x0AE5; emu_call();
	/* Unresolved jump */ emu_ip = 0x0F50; emu_last_cs = 0x217E; emu_last_ip = 0x0F50; emu_last_length = 0x0009; emu_last_crc = 0x0AE5; emu_call();
l__0FC1:
	emu_ah = 0x88;
	emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = 0x0070; emu_push(0x0FC5); Interrupt_System();
l__0FC5:
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax != 0) { /* Unresolved jump */ emu_ip = 0x0FCC; emu_last_cs = 0x217E; emu_last_ip = 0x0FC7; emu_last_length = 0x0007; emu_last_crc = 0x2EB6; emu_call(); return; }
	goto l__1078;
l__1078:
	emu_xorw(&emu_ax, emu_ax);
	emu_cwd();
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_pop(&emu_ds);
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__217E_125B_0001_6180()
 *
 * @name f__217E_125B_0001_6180
 * @implements 217E:125B:0001:6180 ()
 *
 * Called From: 217E:0630:000D:13D0
 */
void f__217E_125B_0001_6180()
{
l__125B:

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__217E_125C_0001_6580()
 *
 * @name f__217E_125C_0001_6580
 * @implements 217E:125C:0001:6580 ()
 *
 * Called From: 217E:01AE:0005:F29E
 * Called From: 217E:01B3:0005:729F
 */
void f__217E_125C_0001_6580()
{
l__125C:

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

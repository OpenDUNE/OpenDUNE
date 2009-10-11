/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__B52A_0000_0019_1617()
 *
 * @name f__B52A_0000_0019_1617
 * @implements B52A:0000:0019:1617 ()
 * @implements B52A:0019:0017:365A
 * @implements B52A:0030:0030:5D25
 * @implements B52A:007B:0015:C75F
 * @implements B52A:0090:002B:8277
 * @implements B52A:00BB:001E:9A65
 * @implements B52A:00C3:0016:1D8A
 * @implements B52A:00D9:0019:2572
 * @implements B52A:00F2:0008:D619
 * @implements B52A:00FA:0060:192B
 * @implements B52A:0104:0056:67EF
 * @implements B52A:0141:0019:667E
 * @implements B52A:0157:0003:9CA5
 * @implements B52A:015A:000B:64B1
 * @implements B52A:0209:0021:B33E
 * @implements B52A:022A:001A:9C3E
 * @implements B52A:0244:0020:17D8
 * @implements B52A:0264:0076:9A5D
 * @implements B52A:0267:0073:107F
 * @implements B52A:0277:0063:F767
 * @implements B52A:02DA:0012:2608
 * @implements B52A:02EC:0020:8B0D
 * @implements B52A:030C:000A:607E
 * @implements B52A:0316:0015:BAC6
 * @implements B52A:032B:001E:1AA7
 * @implements B52A:0349:001A:C5D4
 * @implements B52A:0363:0017:D157
 * @implements B52A:037A:0026:FDF7
 * @implements B52A:03A0:001C:0968
 * @implements B52A:03BC:000C:FBEB
 * @implements B52A:03C8:0005:31AE
 * @implements B52A:03CB:0002:D0BA
 * @implements B52A:03CD:0012:3633
 * @implements B52A:03DF:000C:FA6B
 * @implements B52A:03EB:001C:7230
 * @implements B52A:03EE:0019:B319
 * @implements B52A:0407:001F:C579
 * @implements B52A:0426:0015:1289
 * @implements B52A:043B:0009:2205
 * @implements B52A:0444:0019:419F
 * @implements B52A:045D:0013:8EF4
 * @implements B52A:0470:0006:F7CE
 *
 * Called From: 352A:0020:0005:0000
 */
void f__B52A_0000_0019_1617()
{
l__0000:
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subw(&emu_sp, 0x44);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_xorw(&emu_si, emu_si);
	emu_movw(&emu_ax, 0x1);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x0019); emu_cs = 0x1FB5; f__1FB5_01FA_0010_F89C();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x352A) { ovl__352A(0xFF); }
	goto l__0019;
l__0019:
	emu_addw(&emu_sp, 0x6);
	emu_movw(&emu_di, emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_movw(&emu_dx, 0x12);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x44);
	emu_push(emu_ax);
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x0030); emu_cs = 0x1FB5; f__1FB5_0AEC_001B_A5E4();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x352A) { ovl__352A(0xFF); }
	goto l__0030;
l__0030:
	emu_addw(&emu_sp, 0xA);
	emu_testw(&emu_get_memory16(emu_ss, emu_bp, -0x3C), 0x1);
	if (emu_flags.zf) goto l__007B;
	emu_orw(&emu_si, 0x100);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x300);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x14));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x16));
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0079; emu_last_cs = 0xB52A; emu_last_ip = 0x0049; emu_last_length = 0x0030; emu_last_crc = 0x5D25; emu_call(); return; }
	emu_movw(&emu_ax, 0x1);
	emu_push(emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x44));
	emu_movb(&emu_cl, 0x2);
	emu_shlw(&emu_ax, emu_cl);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x0060); emu_cs = 0x1FB5; f__1FB5_1207_001B_2A6C();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x352A) { ovl__352A(0xFF); }
	/* Unresolved jump */ emu_ip = 0x0060; emu_last_cs = 0xB52A; emu_last_ip = 0x005B; emu_last_length = 0x0030; emu_last_crc = 0x5D25; emu_call();
l__007B:
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x0);
	emu_movw(&emu_ax, 0x2);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x0090); emu_cs = 0x1FB5; f__1FB5_1207_001B_2A6C();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x352A) { ovl__352A(0xFF); }
	goto l__0090;
l__0090:
	emu_addw(&emu_sp, 0x8);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), emu_dx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x12), emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x3A));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x38));
	if (emu_flags.zf) goto l__00BB;
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x34));
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0x36));
	emu_subw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0x3A));
	emu_sbbw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x38));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x30), emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x32), emu_dx);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x32));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax);
	goto l__00C3;
l__00BB:
	emu_orw(&emu_si, 0x40);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x0);
	goto l__00C3;
l__00C3:
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_addw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_addw(&emu_ax, 0xA);
	emu_subw(&emu_get_memory16(emu_ss, emu_bp, -0x12), emu_ax);
	emu_sbbw(&emu_get_memory16(emu_ss, emu_bp, -0x10), 0x0);
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x00D9); emu_cs = 0x1FB5; f__1FB5_09C7_0018_922D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x352A) { ovl__352A(0xFF); }
	goto l__00D9;
l__00D9:
	emu_pop(&emu_cx);
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp,  0x12), 0x0);
	if (emu_flags.zf) goto l__00FA;
	emu_orw(&emu_si, 0x10);
	emu_movw(&emu_bx, emu_get_memory16(emu_ss, emu_bp, -0x42));
	emu_xorw(&emu_cx, emu_cx);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x40));
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_cs); emu_push(0x00F2); emu_cs = 0x01F7; f__01F7_03B2_0017_7CBE();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x352A) { ovl__352A(0xFF); }
	goto l__00F2;
l__00F2:
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_dx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_ax);
	goto l__0104;
l__00FA:
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x0);
	goto l__0104;
l__0104:
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x3E));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_addw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_adcw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x18), emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x1A), emu_dx);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x18));
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0x1A));
	emu_addw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_adcw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x14), emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x16), emu_dx);
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp,  0x10), 0x0);
	if ((emu_flags.sf != emu_flags.of)) goto l__015A;
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) {
		emu_cmpw(&emu_get_memory16(emu_ss, emu_bp,  0xE), 0x1);
		if ((emu_flags.cf || emu_flags.zf)) goto l__015A;
	}
	goto l__0141;
l__0141:
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x10));
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x18));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) goto l__015A;
	if ((emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x0153; emu_last_cs = 0xB52A; emu_last_ip = 0x014C; emu_last_length = 0x0019; emu_last_crc = 0x667E; emu_call(); return; }
	emu_cmpw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0x1A));
	if (!emu_flags.cf) goto l__015A;
	emu_xorw(&emu_dx, emu_dx);
	emu_xorw(&emu_ax, emu_ax);
	goto l__0157;
l__0157:
	goto l__0470;
l__015A:
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0xC));
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0165; emu_last_cs = 0xB52A; emu_last_ip = 0x0160; emu_last_length = 0x000B; emu_last_crc = 0x64B1; emu_call(); return; }
	goto l__0209;
l__0209:
	emu_orw(&emu_si, 0x1);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x1C), emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x1E), emu_dx);
	emu_xorw(&emu_ax, emu_ax);
	emu_movw(&emu_dx, 0x21);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x1C));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x1E));
	emu_push(emu_cs);
	emu_push(0x022A); f__B52A_07A5_0010_C5C7();
	goto l__022A;
l__022A:
	emu_addw(&emu_sp, 0x8);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x20), emu_dx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x22), emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x20));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x22));
	emu_push(emu_cs);
	emu_push(0x0244); f__B52A_07A5_0010_C5C7();
	goto l__0244;
l__0244:
	emu_addw(&emu_sp, 0x8);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x24), emu_dx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x26), emu_ax);
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp,  0x12), 0x0);
	if (emu_flags.zf) goto l__0267;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x20));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x22));
	emu_push(emu_cs); emu_push(0x0264); emu_cs = 0x01F7; emu_Tools_Memset();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x352A) { ovl__352A(0xFF); }
	goto l__0264;
l__0264:
	emu_addw(&emu_sp, 0x8);
	goto l__0267;
l__0267:
	emu_testw(&emu_get_memory16(emu_ss, emu_bp, -0x44), 0x8000);
	if (!emu_flags.zf) {
		emu_orw(&emu_si, 0x80);
		emu_andw(&emu_get_memory16(emu_ss, emu_bp, -0x44), 0x7FFF);
	}
	goto l__0277;
l__0277:
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x1C));
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0x1E));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2C), emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2E), emu_dx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x2E));
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x44));
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0x2), emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x2E));
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0x0), emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x2E));
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x42));
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0x4), emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x2E));
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x40));
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0x6), emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x2E));
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x24));
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0x26));
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0xC), emu_ax);
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0xA), emu_dx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x2E));
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_subw(&emu_ax, 0x21);
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0x8), emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2E));
	emu_addw(&emu_ax, 0x12);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2C));
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x02DA); emu_cs = 0x01F7; f__01F7_38F6_0029_8B99();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x352A) { ovl__352A(0xFF); }
	goto l__02DA;
l__02DA:
	emu_addw(&emu_sp, 0x8);
	emu_movw(&emu_ax, 0x1);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x02EC); emu_cs = 0x1FB5; f__1FB5_01FA_0010_F89C();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x352A) { ovl__352A(0xFF); }
	goto l__02EC;
l__02EC:
	emu_addw(&emu_sp, 0x6);
	emu_movw(&emu_di, emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x44));
	emu_addw(&emu_ax, 0x2);
	emu_movb(&emu_cl, 0x2);
	emu_shlw(&emu_ax, emu_cl);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x10));
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x14));
	if (!(emu_flags.sf != emu_flags.of)) goto l__030C;
	goto l__03CD;
l__030C:
	if (!emu_flags.zf) goto l__0316;
	emu_cmpw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0x16));
	if (!emu_flags.cf) goto l__0316;
	goto l__03CD;
l__0316:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x2E));
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x24));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x26));
	emu_push(emu_cs);
	emu_push(0x032B); f__B52A_07A5_0010_C5C7();
	goto l__032B;
l__032B:
	emu_addw(&emu_sp, 0x8);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x2E));
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0x10), emu_dx);
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0xE), emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_movw(&emu_dx, 0xA);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x0349); emu_cs = 0x1FB5; f__1FB5_1207_001B_2A6C();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x352A) { ovl__352A(0xFF); }
	goto l__0349;
l__0349:
	emu_addw(&emu_sp, 0x8);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x2E));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x10));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xE));
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x0363); emu_cs = 0x1FB5; f__1FB5_0AEC_001B_A5E4();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x352A) { ovl__352A(0xFF); }
	goto l__0363;
l__0363:
	emu_addw(&emu_sp, 0xA);
	emu_movw(&emu_ax, 0x1);
	emu_push(emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_addw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x037A); emu_cs = 0x1FB5; f__1FB5_1207_001B_2A6C();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x352A) { ovl__352A(0xFF); }
	goto l__037A;
l__037A:
	emu_addw(&emu_sp, 0x8);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_subw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_sbbw(&emu_ax, 0x0);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x2E));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0xE));
	emu_addw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x10));
	emu_push(emu_ax);
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x03A0); emu_cs = 0x1FB5; f__1FB5_0AEC_001B_A5E4();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x352A) { ovl__352A(0xFF); }
	goto l__03A0;
l__03A0:
	emu_addw(&emu_sp, 0xA);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x2E));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x2));
	emu_incw(&emu_ax);
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x2E));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x10));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xE));
	emu_push(emu_cs);
	emu_push(0x03BC); f__B52A_07CD_003B_4734();
	goto l__03BC;
l__03BC:
	emu_addw(&emu_sp, 0x6);
	emu_orw(&emu_ax, emu_dx);
	if (emu_flags.zf) goto l__03C8;
	emu_orw(&emu_si, 0x8);
	goto l__03CB;
l__03C8:
	emu_orw(&emu_si, 0x28);
	goto l__03CB;
l__03CB:
	goto l__03EE;
l__03CD:
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x2E));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x2));
	emu_incw(&emu_ax);
	emu_push(emu_ax);
	emu_push(emu_di);
	emu_push(emu_cs);
	emu_push(0x03DF); f__B52A_0850_0021_2409();
	goto l__03DF;
l__03DF:
	emu_addw(&emu_sp, 0x6);
	emu_orw(&emu_ax, emu_dx);
	if (emu_flags.zf) goto l__03EB;
	emu_orw(&emu_si, 0x4);
	goto l__03EE;
l__03EB:
	emu_orw(&emu_si, 0x24);
	goto l__03EE;
l__03EE:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x2E));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x8));
	emu_subw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x24));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x26));
	emu_push(emu_cs);
	emu_push(0x0407); f__B52A_07A5_0010_C5C7();
	goto l__0407;
l__0407:
	emu_addw(&emu_sp, 0x8);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x28), emu_dx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2A), emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_addw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_addw(&emu_ax, 0xA);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x0426); emu_cs = 0x1FB5; f__1FB5_1207_001B_2A6C();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x352A) { ovl__352A(0xFF); }
	goto l__0426;
l__0426:
	emu_addw(&emu_sp, 0x8);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x28));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2A));
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x043B); emu_cs = 0x1FB5; f__1FB5_0AEC_001B_A5E4();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x352A) { ovl__352A(0xFF); }
	goto l__043B;
l__043B:
	emu_addw(&emu_sp, 0xA);
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x0444); emu_cs = 0x1FB5; f__1FB5_09C7_0018_922D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x352A) { ovl__352A(0xFF); }
	goto l__0444;
l__0444:
	emu_pop(&emu_cx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x2E));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x24));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x26));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x28));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2A));
	emu_push(emu_cs); emu_push(0x045D); emu_cs = 0x2BD6; f__2BD6_0000_0015_24A9();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x352A) { ovl__352A(0xFF); }
	goto l__045D;
l__045D:
	emu_addw(&emu_sp, 0xA);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x2E));
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0x1F), emu_si);
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0xA));
	goto l__0157;
l__0470:
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
 * Decompiled function f__B52A_0476_0030_9D41()
 *
 * @name f__B52A_0476_0030_9D41
 * @implements B52A:0476:0030:9D41 ()
 * @implements B52A:04A6:0006:EFF6
 * @implements B52A:04A8:0004:893F
 *
 * Called From: 352A:0025:0005:0000
 */
void f__B52A_0476_0030_9D41()
{
l__0476:
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subw(&emu_sp, 0x4);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_dx);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_flags.zf) goto l__04A8;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0x1F), 0x2);
	if (emu_flags.zf) goto l__04A8;
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x04A6); emu_cs = 0x23E1; f__23E1_01C2_0011_24E8();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x352A) { ovl__352A(0xFF); }
	goto l__04A6;
l__04A6:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	goto l__04A8;
l__04A8:
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B52A_04AC_0033_548A()
 *
 * @name f__B52A_04AC_0033_548A
 * @implements B52A:04AC:0033:548A ()
 * @implements B52A:04DA:0005:5DB0
 * @implements B52A:04DC:0003:5C24
 * @implements B52A:04DF:001D:40AA
 * @implements B52A:04FC:0014:B383
 * @implements B52A:0510:000F:79FB
 * @implements B52A:051F:0008:99B6
 * @implements B52A:0527:0057:BCE0
 * @implements B52A:0541:003D:54CB
 * @implements B52A:057E:0005:892E
 * @implements B52A:0583:0016:5135
 * @implements B52A:0599:001F:0178
 * @implements B52A:059C:001C:4469
 * @implements B52A:05A4:0014:703F
 * @implements B52A:05B8:0034:A879
 * @implements B52A:05BC:0030:A33B
 * @implements B52A:05EC:0008:C579
 * @implements B52A:05F2:0002:D43A
 * @implements B52A:05F4:0035:B5E7
 * @implements B52A:0611:0018:A9B0
 * @implements B52A:061C:000D:23E0
 * @implements B52A:0629:0015:6520
 * @implements B52A:063E:0017:01C2
 * @implements B52A:0648:000D:7130
 * @implements B52A:064B:000A:CD49
 * @implements B52A:0655:0007:CF25
 * @implements B52A:065C:0019:DA1D
 * @implements B52A:0663:0012:DBED
 * @implements B52A:0675:006C:C807
 * @implements B52A:067E:0063:6B7E
 * @implements B52A:0686:005B:E187
 * @implements B52A:06E1:000F:F5B1
 * @implements B52A:06EA:0006:8391
 * @implements B52A:06F0:0006:F7CE
 *
 * Called From: 352A:002A:0005:0000
 */
void f__B52A_04AC_0033_548A()
{
l__04AC:
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subw(&emu_sp, 0x1A);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_di, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_dx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x2));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (!emu_flags.zf) {
		emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_di);
		if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) goto l__04DF;
	}
	goto l__04DA;
l__04DA:
	emu_xorw(&emu_ax, emu_ax);
	goto l__04DC;
l__04DC:
	goto l__06F0;
l__04DF:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0x1F), 0x10);
	if (emu_flags.zf) goto l__051F;
	emu_xorw(&emu_ax, emu_ax);
	emu_movw(&emu_dx, 0x21);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs);
	emu_push(0x04FC); f__B52A_07A5_0010_C5C7();
	goto l__04FC;
l__04FC:
	emu_addw(&emu_sp, 0x8);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x14), emu_dx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x16), emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x16));
	emu_push(emu_cs); emu_push(0x0510); emu_cs = 0x2B0E; emu_Tools_GetSmallestIP();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x352A) { ovl__352A(0xFF); }
	goto l__0510;
l__0510:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x14), emu_dx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x16), emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x1A), 0x0);
	goto l__0541;
l__051F:
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x10));
	emu_push(emu_cs); emu_push(0x0527); emu_cs = 0x252E; f__252E_001B_0018_EA2C();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x352A) { ovl__352A(0xFF); }
	goto l__0527;
l__0527:
	emu_pop(&emu_cx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x14), emu_dx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x16), emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_movw(&emu_dx, 0x140);
	emu_imuluw(&emu_ax, emu_dx);
	emu_addw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x16), emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x1A), 0x1);
	goto l__0541;
l__0541:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x6));
	if (!emu_flags.zf) goto l__05A4;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0x1F), 0x40);
	if (!emu_flags.zf) goto l__059C;
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x1A), 0x0);
	if (emu_flags.zf) goto l__0583;
	emu_movw(&emu_ax, 0x1);
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x4));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x16));
	emu_push(emu_cs); emu_push(0x057E); emu_cs = 0x2AE1; f__2AE1_029F_0014_50E5();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x352A) { ovl__352A(0xFF); }
	goto l__057E;
l__057E:
	emu_addw(&emu_sp, 0xC);
	goto l__059C;
l__0583:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x16));
	emu_push(emu_cs); emu_push(0x0599); emu_cs = 0x2AE1; f__2AE1_00B7_0014_51EF();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x352A) { ovl__352A(0xFF); }
	goto l__0599;
l__0599:
	emu_addw(&emu_sp, 0x8);
	goto l__059C;
l__059C:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0x0), 0x0);
	goto l__05A4;
l__05A4:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_si, emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_movw(&emu_ax, emu_si);
	emu_subw(&emu_ax, emu_di);
	if (!(emu_flags.sf != emu_flags.of)) goto l__05B8;
	emu_movw(&emu_ax, emu_si);
	emu_subw(&emu_ax, emu_di);
	emu_negw(&emu_ax, emu_ax);
	goto l__05BC;
l__05B8:
	emu_movw(&emu_ax, emu_si);
	emu_subw(&emu_ax, emu_di);
	goto l__05BC;
l__05BC:
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x1);
	emu_cmpw(&emu_di, emu_si);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) goto l__05F4;
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_subw(&emu_ax, emu_di);
	emu_addw(&emu_ax, emu_si);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x8));
	if (!(emu_flags.sf != emu_flags.of)) goto l__05EC;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0x1F), 0x20);
	if (!emu_flags.zf) goto l__05EC;
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0xFFFF);
	goto l__05F2;
l__05EC:
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_ax);
	goto l__05F2;
l__05F2:
	goto l__061C;
l__05F4:
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_subw(&emu_ax, emu_si);
	emu_addw(&emu_ax, emu_di);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x8));
	if ((emu_flags.sf != emu_flags.of)) {
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
		emu_testw(&emu_get_memory16(emu_es, emu_bx, 0x1F), 0x20);
		if (emu_flags.zf) goto l__061C;
	}
	goto l__0611;
l__0611:
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0xFFFF);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_ax);
	goto l__061C;
l__061C:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x0);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) goto l__0655;
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), 0x0);
	goto l__064B;
l__0629:
	emu_addw(&emu_si, emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x16));
	emu_push(emu_si);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs);
	emu_push(0x063E); f__B52A_08B3_001B_1BB9();
	goto l__063E;
l__063E:
	emu_addw(&emu_sp, 0xA);
	emu_cmpw(&emu_si, emu_get_memory16(emu_ss, emu_bp, -0x6));
	if (emu_flags.zf) {
		emu_xorw(&emu_si, emu_si);
	}
	goto l__0648;
l__0648:
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0xE));
	goto l__064B;
l__064B:
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0xC));
	if ((emu_flags.sf != emu_flags.of)) goto l__0629;
	goto l__0686;
l__0655:
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), 0x0);
	goto l__067E;
l__065C:
	emu_orw(&emu_si, emu_si);
	if (emu_flags.zf) {
		emu_movw(&emu_si, emu_get_memory16(emu_ss, emu_bp, -0x6));
	}
	goto l__0663;
l__0663:
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x16));
	emu_push(emu_si);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs);
	emu_push(0x0675); f__B52A_08B3_001B_1BB9();
	goto l__0675;
l__0675:
	emu_addw(&emu_sp, 0xA);
	emu_addw(&emu_si, emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0xE));
	goto l__067E;
l__067E:
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0xC));
	if ((emu_flags.sf != emu_flags.of)) goto l__065C;
	goto l__0686;
l__0686:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0x0), emu_di);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0x1F), 0x10);
	if (emu_flags.zf) goto l__06EA;
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x6C91));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x18), emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x10));
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x6C91), emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x12));
	emu_andw(&emu_ax, 0xFF00);
	emu_movb(&emu_cl, 0xE);
	emu_shrw(&emu_ax, emu_cl);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x12));
	emu_andw(&emu_ax, 0xFF);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x12), emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x16));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x6));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x4));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_cs); emu_push(0x06E1); emu_cs = 0x28E6; f__28E6_000A_0040_D751();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x352A) { ovl__352A(0xFF); }
	goto l__06E1;
l__06E1:
	emu_addw(&emu_sp, 0x12);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x18));
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x6C91), emu_ax);
	goto l__06EA;
l__06EA:
	emu_movw(&emu_ax, 0x1);
	goto l__04DC;
l__06F0:
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
 * Decompiled function f__B52A_06F6_0012_197D()
 *
 * @name f__B52A_06F6_0012_197D
 * @implements B52A:06F6:0012:197D ()
 * @implements B52A:0706:0002:CABA
 * @implements B52A:0708:0015:9DC0
 * @implements B52A:071D:0004:893F
 *
 * Called From: 352A:002F:0005:0000
 */
void f__B52A_06F6_0012_197D()
{
l__06F6:
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subw(&emu_sp, 0x4);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (!emu_flags.zf) goto l__0708;
	emu_xorw(&emu_ax, emu_ax);
	goto l__0706;
l__0706:
	goto l__071D;
l__0708:
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_dx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x2));
	goto l__0706;
l__071D:
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B52A_07A5_0010_C5C7()
 *
 * @name f__B52A_07A5_0010_C5C7
 * @implements B52A:07A5:0010:C5C7 ()
 * @implements B52A:07B5:0016:9698
 * @implements B52A:07CB:0002:2597
 *
 * Called From: B52A:0227:0021:B33E
 * Called From: B52A:0241:001A:9C3E
 * Called From: B52A:0328:0015:BAC6
 * Called From: B52A:0404:0019:B319
 * Called From: B52A:0404:001C:7230
 * Called From: B52A:04F9:001D:40AA
 * Called From: B52A:093F:0024:D733
 * Called From: B52A:0963:0024:0372
 * Called From: B52A:0A25:001E:0DD3
 */
void f__B52A_07A5_0010_C5C7()
{
l__07A5:
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movb(&emu_cl, 0x4);
	emu_push(emu_cs); emu_push(0x07B5); emu_cs = 0x01F7; f__01F7_05AF_0015_0AD5();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x352A) { ovl__352A(0xFF); }
	goto l__07B5;
l__07B5:
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_addw(&emu_dx, emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_andw(&emu_ax, 0xF);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_pop(&emu_dx);
	emu_addw(&emu_ax, emu_dx);
	emu_pop(&emu_dx);
	goto l__07CB;
l__07CB:
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B52A_07CD_003B_4734()
 *
 * @name f__B52A_07CD_003B_4734
 * @implements B52A:07CD:003B:4734 ()
 * @implements B52A:0808:003C:4B43
 * @implements B52A:0812:0032:A6D4
 * @implements B52A:0842:0002:C43A
 * @implements B52A:0846:0006:59A9
 * @implements B52A:084C:0004:893F
 *
 * Called From: B52A:03B9:001C:0968
 * Called From: B52A:08FF:0010:FF24
 * Called From: B52A:091B:001C:965B
 */
void f__B52A_07CD_003B_4734()
{
l__07CD:
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subw(&emu_sp, 0x8);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_dx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_orw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x2));
	if (emu_flags.zf) goto l__0808;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x6));
	emu_movw(&emu_dx, emu_get_memory16(emu_es, emu_bx, 0x4));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_subw(&emu_dx, emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_sbbw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x2));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_dx);
	goto l__0812;
l__0808:
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x0);
	goto l__0812;
l__0812:
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movb(&emu_cl, 0x2);
	emu_shlw(&emu_ax, emu_cl);
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_orw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x2));
	if (emu_flags.zf) goto l__0846;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_dx, emu_get_memory16(emu_es, emu_bx, 0x2));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_movw(&emu_bx, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_cx, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_addw(&emu_cx, 0xA);
	emu_adcw(&emu_bx, 0x0);
	emu_subw(&emu_ax, emu_cx);
	emu_sbbw(&emu_dx, emu_bx);
	goto l__0842;
l__0842:
	goto l__084C;
l__0846:
	emu_xorw(&emu_dx, emu_dx);
	emu_xorw(&emu_ax, emu_ax);
	goto l__0842;
l__084C:
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B52A_0850_0021_2409()
 *
 * @name f__B52A_0850_0021_2409
 * @implements B52A:0850:0021:2409 ()
 * @implements B52A:0871:0015:A573
 * @implements B52A:0886:0028:75E4
 * @implements B52A:089C:0012:135B
 * @implements B52A:08AE:0005:8BCF
 *
 * Called From: B52A:03DC:0012:3633
 * Called From: B52A:09B8:000E:157C
 * Called From: B52A:09CD:0015:3932
 */
void f__B52A_0850_0021_2409()
{
l__0850:
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subw(&emu_sp, 0x4);
	emu_push(emu_si);
	emu_movw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movb(&emu_cl, 0x2);
	emu_shlw(&emu_ax, emu_cl);
	emu_addw(&emu_ax, 0xA);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x0871); emu_cs = 0x1FB5; f__1FB5_1207_001B_2A6C();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x352A) { ovl__352A(0xFF); }
	goto l__0871;
l__0871:
	emu_addw(&emu_sp, 0x8);
	emu_xorw(&emu_ax, emu_ax);
	emu_movw(&emu_dx, 0x4);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x4);
	emu_push(emu_ax);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x0886); emu_cs = 0x1FB5; f__1FB5_0AEC_001B_A5E4();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x352A) { ovl__352A(0xFF); }
	goto l__0886;
l__0886:
	emu_addw(&emu_sp, 0xA);
	emu_orw(&emu_dx, emu_dx);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0892; emu_last_cs = 0xB52A; emu_last_ip = 0x088B; emu_last_length = 0x0028; emu_last_crc = 0x75E4; emu_call(); return; }
	emu_cmpw(&emu_ax, 0x4);
	if (!emu_flags.zf) {
		emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x0);
		emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x0);
	}
	goto l__089C;
l__089C:
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_cwd();
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax);
	emu_adcw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx);
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x4));
	goto l__08AE;
l__08AE:
	emu_pop(&emu_si);
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B52A_08B3_001B_1BB9()
 *
 * @name f__B52A_08B3_001B_1BB9
 * @implements B52A:08B3:001B:1BB9 ()
 * @implements B52A:08CE:0024:6954
 * @implements B52A:08D0:0022:4157
 * @implements B52A:08F2:0010:FF24
 * @implements B52A:0902:001C:965B
 * @implements B52A:091E:0024:D733
 * @implements B52A:0942:0024:0372
 * @implements B52A:0966:0020:CBC2
 * @implements B52A:0986:0006:9731
 * @implements B52A:098C:000E:7F3A
 * @implements B52A:099A:0013:6D27
 * @implements B52A:09AD:000E:157C
 * @implements B52A:09BB:0015:3932
 * @implements B52A:09D0:0025:5ED1
 * @implements B52A:09F8:0003:5D13
 * @implements B52A:09FB:000F:8063
 * @implements B52A:0A0A:001E:0DD3
 * @implements B52A:0A28:001B:0B21
 * @implements B52A:0A43:000F:FF8B
 * @implements B52A:0A52:0006:6250
 * @implements B52A:0A58:001E:13DA
 * @implements B52A:0A59:001D:12BE
 * @implements B52A:0A76:0024:8346
 * @implements B52A:0A9A:0005:94AE
 * @implements B52A:0A9F:0020:7369
 * @implements B52A:0ABF:0009:C6FF
 * @implements B52A:0AC2:0006:82A6
 * @implements B52A:0AC8:0006:F7CE
 *
 * Called From: B52A:063B:0015:6520
 * Called From: B52A:0672:0012:DBED
 * Called From: B52A:0672:0019:DA1D
 */
void f__B52A_08B3_001B_1BB9()
{
l__08B3:
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subw(&emu_sp, 0x12);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_di, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0x1F), 0x100);
	if (emu_flags.zf) goto l__08CE;
	emu_movw(&emu_ax, 0x300);
	goto l__08D0;
l__08CE:
	emu_xorw(&emu_ax, emu_ax);
	goto l__08D0;
l__08D0:
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_movw(&emu_dx, emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_dx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0x1F), 0x8);
	if (!emu_flags.zf) goto l__08F2;
	goto l__098C;
l__08F2:
	emu_push(emu_di);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x10));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xE));
	emu_push(emu_cs);
	emu_push(0x0902); f__B52A_07CD_003B_4734();
	goto l__0902;
l__0902:
	emu_addw(&emu_sp, 0x6);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), emu_dx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x12), emu_ax);
	emu_movw(&emu_ax, emu_di);
	emu_incw(&emu_ax);
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x10));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xE));
	emu_push(emu_cs);
	emu_push(0x091E); f__B52A_07CD_003B_4734();
	goto l__091E;
l__091E:
	emu_addw(&emu_sp, 0x6);
	emu_subw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_sbbw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_dx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x10));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xE));
	emu_push(emu_cs);
	emu_push(0x0942); f__B52A_07A5_0010_C5C7();
	goto l__0942;
l__0942:
	emu_addw(&emu_sp, 0x8);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x8));
	emu_xorw(&emu_dx, emu_dx);
	emu_subw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_sbbw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs);
	emu_push(0x0966); f__B52A_07A5_0010_C5C7();
	goto l__0966;
l__0966:
	emu_addw(&emu_sp, 0x8);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_dx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x0986); emu_cs = 0x2B0E; f__2B0E_0006_0049_87B1();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x352A) { ovl__352A(0xFF); }
	goto l__0986;
l__0986:
	emu_addw(&emu_sp, 0xC);
	goto l__0A59;
l__098C:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0x1F), 0x4);
	if (!emu_flags.zf) goto l__099A;
	goto l__0A59;
l__099A:
	emu_movw(&emu_ax, 0x1);
	emu_push(emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_addw(&emu_ax, 0x12);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x09AD); emu_cs = 0x1FB5; f__1FB5_01FA_0010_F89C();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x352A) { ovl__352A(0xFF); }
	goto l__09AD;
l__09AD:
	emu_addw(&emu_sp, 0x6);
	emu_movw(&emu_si, emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_di);
	emu_push(emu_si);
	emu_push(emu_cs);
	emu_push(0x09BB); f__B52A_0850_0021_2409();
	goto l__09BB;
l__09BB:
	emu_addw(&emu_sp, 0x6);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), emu_dx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x12), emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_movw(&emu_ax, emu_di);
	emu_incw(&emu_ax);
	emu_push(emu_ax);
	emu_push(emu_si);
	emu_push(emu_cs);
	emu_push(0x09D0); f__B52A_0850_0021_2409();
	goto l__09D0;
l__09D0:
	emu_addw(&emu_sp, 0x6);
	emu_subw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_sbbw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_dx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x10));
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x09EF; emu_last_cs = 0xB52A; emu_last_ip = 0x09E5; emu_last_length = 0x0025; emu_last_crc = 0x5ED1; emu_call(); return; }
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0xC));
	if (!emu_flags.zf) goto l__09FB;
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x09F5); emu_cs = 0x1FB5; f__1FB5_09C7_0018_922D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x352A) { ovl__352A(0xFF); }
	/* Unresolved jump */ emu_ip = 0x09F5; emu_last_cs = 0xB52A; emu_last_ip = 0x09F0; emu_last_length = 0x0025; emu_last_crc = 0x5ED1; emu_call();
l__09F8:
	goto l__0AC8;
l__09FB:
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x0A0A); emu_cs = 0x1FB5; f__1FB5_1207_001B_2A6C();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x352A) { ovl__352A(0xFF); }
	goto l__0A0A;
l__0A0A:
	emu_addw(&emu_sp, 0x8);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x8));
	emu_xorw(&emu_dx, emu_dx);
	emu_subw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_sbbw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs);
	emu_push(0x0A28); f__B52A_07A5_0010_C5C7();
	goto l__0A28;
l__0A28:
	emu_addw(&emu_sp, 0x8);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_dx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x0A43); emu_cs = 0x1FB5; f__1FB5_0AEC_001B_A5E4();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x352A) { ovl__352A(0xFF); }
	goto l__0A43;
l__0A43:
	emu_addw(&emu_sp, 0xA);
	emu_cmpw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0xC));
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0A50; emu_last_cs = 0xB52A; emu_last_ip = 0x0A49; emu_last_length = 0x000F; emu_last_crc = 0xFF8B; emu_call(); return; }
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0xE));
	if (emu_flags.zf) goto l__0A52;
	/* Unresolved jump */ emu_ip = 0x09EF; emu_last_cs = 0xB52A; emu_last_ip = 0x0A50; emu_last_length = 0x000F; emu_last_crc = 0xFF8B; emu_call();
l__0A52:
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x0A58); emu_cs = 0x1FB5; f__1FB5_09C7_0018_922D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x352A) { ovl__352A(0xFF); }
	goto l__0A58;
l__0A58:
	emu_pop(&emu_cx);
	goto l__0A59;
l__0A59:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x8));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs); emu_push(0x0A76); emu_cs = 0x2BD6; f__2BD6_0000_0015_24A9();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x352A) { ovl__352A(0xFF); }
	goto l__0A76;
l__0A76:
	emu_addw(&emu_sp, 0xA);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0x1F), 0x10);
	if (emu_flags.zf) goto l__0A9F;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_cs); emu_push(0x0A9A); emu_cs = 0x2AE1; f__2AE1_00B7_0014_51EF();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x352A) { ovl__352A(0xFF); }
	goto l__0A9A;
l__0A9A:
	emu_addw(&emu_sp, 0x8);
	goto l__0AC2;
l__0A9F:
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x4));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_cs); emu_push(0x0ABF); emu_cs = 0x2AE1; f__2AE1_029F_0014_50E5();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x352A) { ovl__352A(0xFF); }
	goto l__0ABF;
l__0ABF:
	emu_addw(&emu_sp, 0xC);
	goto l__0AC2;
l__0AC2:
	emu_movw(&emu_ax, 0x1);
	goto l__09F8;
l__0AC8:
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

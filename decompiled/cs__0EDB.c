/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__0EDB_00B7_003B_92E3()
 *
 * @name f__0EDB_00B7_003B_92E3
 * @implements 0EDB:00B7:003B:92E3 ()
 * @implements 0EDB:00F2:0004:893F
 *
 * Called From: 15C2:0932:003A:D1E0
 */
void f__0EDB_00B7_003B_92E3()
{
l__00B7:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x4);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0xB);
	emu_ax = emu_al;
	emu_shlw(&emu_ax, 0x1);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_addw(&emu_bx, emu_ax);
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x16);
	emu_bx = 0x5;
	emu_cwd();
	emu_idivw(&emu_ax, emu_bx);
	emu_cx = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_dx = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_dx;
	emu_subw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x2);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_get_memory16(emu_es, emu_bx, 0x0) = emu_cx;
	emu_ax = emu_cx;
	goto l__00F2;
l__00F2:
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__0EDB_00F6_000C_3B74()
 *
 * @name f__0EDB_00F6_000C_3B74
 * @implements 0EDB:00F6:000C:3B74 ()
 * @implements 0EDB:0102:0019:65F3
 * @implements 0EDB:011B:0025:98EB
 * @implements 0EDB:0140:0005:8BCF
 *
 * Called From: 15C2:0932:003A:D1E0
 */
void f__0EDB_00F6_000C_3B74()
{
l__00F6:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x4);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x0102); emu_cs = 0x2BB4; f__2BB4_0004_0027_DC1D();
	goto l__0102;
l__0102:
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0xB);
	emu_ax = emu_al;
	emu_shlw(&emu_ax, 0x1);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_addw(&emu_bx, emu_ax);
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x16));
	emu_push(emu_cs); emu_push(0x011B); emu_cs = 0x34C1; ovl__34C1(0);
	goto l__011B;
l__011B:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_bx = 0x5;
	emu_xorw(&emu_dx, emu_dx);
	emu_divw(&emu_ax, emu_bx);
	emu_si = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_dx = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_dx;
	emu_subw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x2);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_get_memory16(emu_es, emu_bx, 0x0) = emu_si;
	emu_ax = emu_si;
	goto l__0140;
l__0140:
	emu_pop(&emu_si);
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__0EDB_0145_002F_C125()
 *
 * @name f__0EDB_0145_002F_C125
 * @implements 0EDB:0145:002F:C125 ()
 * @implements 0EDB:0174:0004:5B1F
 * @implements 0EDB:0178:0002:2597
 *
 * Called From: 15C2:0932:003A:D1E0
 */
void f__0EDB_0145_002F_C125()
{
l__0145:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0xB);
	emu_ax = emu_al;
	emu_incw(&emu_ax);
	emu_shlw(&emu_ax, 0x1);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_addw(&emu_bx, emu_ax);
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x16));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0xB);
	emu_ax = emu_al;
	emu_shlw(&emu_ax, 0x1);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_addw(&emu_bx, emu_ax);
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x16));
	emu_push(emu_cs); emu_push(0x0174); emu_cs = 0x2537; f__2537_000C_001C_86CB();
	goto l__0174;
l__0174:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	goto l__0178;
l__0178:
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__0EDB_01F7_0020_4DC9()
 *
 * @name f__0EDB_01F7_0020_4DC9
 * @implements 0EDB:01F7:0020:4DC9 ()
 * @implements 0EDB:0217:000B:3104
 * @implements 0EDB:0222:0014:ECFD
 * @implements 0EDB:0236:000B:99BD
 * @implements 0EDB:023F:0002:C2BA
 * @implements 0EDB:0241:0005:5695
 * @implements 0EDB:0246:0005:8BCF
 *
 * Called From: 15C2:0932:003A:D1E0
 */
void f__0EDB_01F7_0020_4DC9()
{
l__01F7:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x2);
	emu_push(emu_si);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0xB);
	emu_ax = emu_al;
	emu_shlw(&emu_ax, 0x1);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_addw(&emu_bx, emu_ax);
	emu_si = emu_get_memory16(emu_es, emu_bx, 0x16);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x0217); emu_cs = 0x167E; f__167E_0005_0013_AF0C();
	goto l__0217;
l__0217:
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_ax);
	if (emu_flags.zf) goto l__0241;
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x0222); emu_cs = 0x167E; f__167E_01BB_0010_85F6();
	goto l__0222;
l__0222:
	emu_pop(&emu_cx);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x394E));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_push(emu_cs); emu_push(0x0236); emu_cs = 0x0F3F; f__0F3F_00B4_002A_89B2();
	goto l__0236;
l__0236:
	emu_addw(&emu_sp, 0x8);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x2);
	goto l__023F;
l__023F:
	goto l__0246;
l__0241:
	emu_ax = 0xFFFF;
	goto l__023F;
l__0246:
	emu_pop(&emu_si);
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__0EDB_024B_001D_2E46()
 *
 * @name f__0EDB_024B_001D_2E46
 * @implements 0EDB:024B:001D:2E46 ()
 * @implements 0EDB:0268:0013:346E
 * @implements 0EDB:027B:0005:866E
 * @implements 0EDB:027E:0002:C2BA
 * @implements 0EDB:0280:0005:5695
 * @implements 0EDB:0285:0003:2E57
 *
 * Called From: 15C2:0932:003A:D1E0
 */
void f__0EDB_024B_001D_2E46()
{
l__024B:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_si);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0xB);
	emu_ax = emu_al;
	emu_shlw(&emu_ax, 0x1);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_addw(&emu_bx, emu_ax);
	emu_si = emu_get_memory16(emu_es, emu_bx, 0x16);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x0268); emu_cs = 0x167E; f__167E_0005_0013_AF0C();
	goto l__0268;
l__0268:
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_ax);
	if (emu_flags.zf) goto l__0280;
	emu_push(emu_si);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3950));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x394E));
	emu_push(emu_cs); emu_push(0x027B); emu_cs = 0x167E; f__167E_0319_0010_B56F();
	goto l__027B;
l__027B:
	emu_addw(&emu_sp, 0x6);
	goto l__027E;
l__027E:
	goto l__0285;
l__0280:
	emu_ax = 0xFFFF;
	goto l__027E;
l__0285:
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__0EDB_0288_0020_3D83()
 *
 * @name f__0EDB_0288_0020_3D83
 * @implements 0EDB:0288:0020:3D83 ()
 * @implements 0EDB:02A8:001E:E8BB
 * @implements 0EDB:02CF:0002:CA3A
 * @implements 0EDB:02D1:0006:5783
 * @implements 0EDB:02D7:000A:9455
 * @implements 0EDB:02E1:0004:9D39
 * @implements 0EDB:02E3:0002:B53A
 * @implements 0EDB:02E5:0005:8BCF
 *
 * Called From: 15C2:0932:003A:D1E0
 */
void f__0EDB_0288_0020_3D83()
{
l__0288:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x4);
	emu_push(emu_si);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0xB);
	emu_ax = emu_al;
	emu_shlw(&emu_ax, 0x1);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_addw(&emu_bx, emu_ax);
	emu_si = emu_get_memory16(emu_es, emu_bx, 0x16);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x02A8); emu_cs = 0x167E; f__167E_02AE_000C_CC85();
	goto l__02A8;
l__02A8:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_flags.zf) goto l__02D1;
	emu_ax = 0x3;
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_push(emu_cs); emu_push(0x02C6); emu_cs = 0x167E; f__167E_00F3_001E_8CB3();
	/* Unresolved jump */ emu_ip = 0x02C6; emu_last_cs = 0x0EDB; emu_last_ip = 0x02C6; emu_last_length = 0x001E; emu_last_crc = 0xE8BB; emu_call();
l__02CF:
	goto l__02E5;
l__02D1:
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x02D7); emu_cs = 0x167E; f__167E_02D8_000C_4C9F();
	goto l__02D7;
l__02D7:
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_dx);
	if (!emu_flags.zf) goto l__02E1;
	emu_ax = 0x1;
	goto l__02E3;
l__02E1:
	emu_xorw(&emu_ax, emu_ax);
	goto l__02E3;
l__02E3:
	goto l__02CF;
l__02E5:
	emu_pop(&emu_si);
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__0EDB_02EA_001E_F83C()
 *
 * @name f__0EDB_02EA_001E_F83C
 * @implements 0EDB:02EA:001E:F83C ()
 * @implements 0EDB:0308:001A:CA96
 * @implements 0EDB:0320:0002:C2BA
 * @implements 0EDB:0322:0005:B972
 * @implements 0EDB:0327:0004:893F
 *
 * Called From: 15C2:0932:003A:D1E0
 */
void f__0EDB_02EA_001E_F83C()
{
l__02EA:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x4);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0xB);
	emu_ax = emu_al;
	emu_shlw(&emu_ax, 0x1);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_addw(&emu_bx, emu_ax);
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x16));
	emu_push(emu_cs); emu_push(0x0308); emu_cs = 0x167E; f__167E_0284_000C_4C88();
	goto l__0308;
l__0308:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_flags.zf) goto l__0322;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x64);
	emu_ah = 0x0;
	goto l__0320;
l__0320:
	goto l__0327;
l__0322:
	emu_ax = 0x80;
	goto l__0320;
l__0327:
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__0EDB_032B_0031_E91B()
 *
 * @name f__0EDB_032B_0031_E91B
 * @implements 0EDB:032B:0031:E91B ()
 * @implements 0EDB:035C:0005:822E
 * @implements 0EDB:0361:000C:7DFF
 * @implements 0EDB:036D:0014:8875
 * @implements 0EDB:036F:0012:1350
 * @implements 0EDB:0381:0005:8BCF
 *
 * Called From: 15C2:0932:003A:D1E0
 */
void f__0EDB_032B_0031_E91B()
{
l__032B:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x4);
	emu_push(emu_si);
	emu_xorw(&emu_si, emu_si);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0xB);
	emu_ax = emu_al;
	emu_shlw(&emu_ax, 0x1);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_addw(&emu_bx, emu_ax);
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x16));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x394E));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x8);
	emu_ax = emu_al;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x035C); emu_cs = 0x0FE4; emu_Unit_FindFirst();
	goto l__035C;
l__035C:
	emu_addw(&emu_sp, 0x8);
	goto l__036F;
l__0361:
	emu_incw(&emu_si);
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x036D); emu_cs = 0x0FE4; emu_Unit_FindNext();
	goto l__036D;
l__036D:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	goto l__036F;
l__036F:
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (!emu_flags.zf) goto l__0361;
	emu_ax = emu_si;
	goto l__0381;
l__0381:
	emu_pop(&emu_si);
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__0EDB_03B9_001D_2E46()
 *
 * @name f__0EDB_03B9_001D_2E46
 * @implements 0EDB:03B9:001D:2E46 ()
 * @implements 0EDB:03D6:000B:017F
 * @implements 0EDB:03E1:0003:C99A
 * @implements 0EDB:03E2:0002:C2BA
 * @implements 0EDB:03E4:0005:5695
 * @implements 0EDB:03E9:0003:2E57
 *
 * Called From: 15C2:0932:003A:D1E0
 */
void f__0EDB_03B9_001D_2E46()
{
l__03B9:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_si);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0xB);
	emu_ax = emu_al;
	emu_shlw(&emu_ax, 0x1);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_addw(&emu_bx, emu_ax);
	emu_si = emu_get_memory16(emu_es, emu_bx, 0x16);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x03D6); emu_cs = 0x167E; f__167E_0005_0013_AF0C();
	goto l__03D6;
l__03D6:
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_ax);
	if (emu_flags.zf) goto l__03E4;
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x03E1); emu_cs = 0x167E; f__167E_0088_001A_60ED();
	goto l__03E1;
l__03E1:
	emu_pop(&emu_cx);
	goto l__03E2;
l__03E2:
	goto l__03E9;
l__03E4:
	emu_ax = 0xFFFF;
	goto l__03E2;
l__03E9:
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__0EDB_03EC_0020_629E()
 *
 * @name f__0EDB_03EC_0020_629E
 * @implements 0EDB:03EC:0020:629E ()
 * @implements 0EDB:040C:0011:5969
 * @implements 0EDB:041B:0002:C2BA
 * @implements 0EDB:041D:0005:5695
 * @implements 0EDB:0422:0004:893F
 *
 * Called From: 15C2:0932:003A:D1E0
 */
void f__0EDB_03EC_0020_629E()
{
l__03EC:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x4);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x394E));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x3), 0xFF);
	if (emu_flags.zf) goto l__041D;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x394E));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x3);
	emu_ax = emu_al;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x040C); emu_cs = 0x0FE4; emu_Unit_Get_ByIndex();
	goto l__040C;
l__040C:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x2);
	emu_ax = emu_al;
	goto l__041B;
l__041B:
	goto l__0422;
l__041D:
	emu_ax = 0xFFFF;
	goto l__041B;
l__0422:
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__0EDB_0426_0027_711D()
 *
 * @name f__0EDB_0426_0027_711D
 * @implements 0EDB:0426:0027:711D ()
 * @implements 0EDB:044D:0007:F90C
 * @implements 0EDB:0454:0002:2597
 *
 * Called From: 15C2:0932:003A:D1E0
 */
void f__0EDB_0426_0027_711D()
{
l__0426:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x394E));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0xB);
	emu_ax = emu_al;
	emu_shlw(&emu_ax, 0x1);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_addw(&emu_bx, emu_ax);
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x16));
	emu_push(emu_cs); emu_push(0x044D); emu_cs = 0x3483; ovl__3483(0);
	goto l__044D;
l__044D:
	emu_addw(&emu_sp, 0x6);
	emu_xorw(&emu_ax, emu_ax);
	goto l__0454;
l__0454:
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__0EDB_0456_0032_B7E5()
 *
 * @name f__0EDB_0456_0032_B7E5
 * @implements 0EDB:0456:0032:B7E5 ()
 * @implements 0EDB:0488:0008:375A
 * @implements 0EDB:0490:0013:CDD0
 * @implements 0EDB:04A3:0004:591F
 * @implements 0EDB:04A5:0002:C23A
 * @implements 0EDB:04A7:0004:9539
 * @implements 0EDB:04AB:0003:2E57
 *
 * Called From: 15C2:0932:003A:D1E0
 */
void f__0EDB_0456_0032_B7E5()
{
l__0456:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_si);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x394E));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x8);
	emu_ax = emu_al;
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0xB);
	emu_ax = emu_al;
	emu_shlw(&emu_ax, 0x1);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_addw(&emu_bx, emu_ax);
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x16));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x394E));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_push(emu_cs); emu_push(0x0488); emu_cs = 0x0F3F; f__0F3F_0086_0017_EA43();
	goto l__0488;
l__0488:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0490); emu_cs = 0x34CD; ovl__34CD(27);
	goto l__0490;
l__0490:
	emu_addw(&emu_sp, 0x6);
	emu_si = emu_ax;
	emu_orw(&emu_si, emu_si);
	if (emu_flags.zf) goto l__04A7;
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x04A3); emu_cs = 0x167E; f__167E_00F3_001E_8CB3();
	goto l__04A3;
l__04A3:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	goto l__04A5;
l__04A5:
	goto l__04AB;
l__04A7:
	emu_xorw(&emu_ax, emu_ax);
	goto l__04A5;
l__04AB:
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__0EDB_04AE_0024_408E()
 *
 * @name f__0EDB_04AE_0024_408E
 * @implements 0EDB:04AE:0024:408E ()
 * @implements 0EDB:04D2:0029:06BF
 * @implements 0EDB:04FB:0009:722F
 * @implements 0EDB:0502:0002:C23A
 * @implements 0EDB:0504:0004:9539
 * @implements 0EDB:0508:0004:893F
 *
 * Called From: 15C2:0932:003A:D1E0
 */
void f__0EDB_04AE_0024_408E()
{
l__04AE:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x6);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0xB);
	emu_ax = emu_al;
	emu_shlw(&emu_ax, 0x1);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_addw(&emu_bx, emu_ax);
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x16);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_ax;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_cs); emu_push(0x04D2); emu_cs = 0x167E; f__167E_02D8_000C_4C9F();
	goto l__04D2;
l__04D2:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_flags.zf) goto l__0504;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x4);
	emu_andw(&emu_ax, 0x5);
	emu_cmpw(&emu_ax, 0x1);
	if (!emu_flags.zf) goto l__0504;
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x04FB); f__0EDB_050C_001D_2E46();
	goto l__04FB;
l__04FB:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_negw(&emu_ax, emu_ax);
	emu_sbbw(&emu_ax, emu_ax);
	emu_incw(&emu_ax);
	goto l__0502;
l__0502:
	goto l__0508;
l__0504:
	emu_xorw(&emu_ax, emu_ax);
	goto l__0502;
l__0508:
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__0EDB_050C_001D_2E46()
 *
 * @name f__0EDB_050C_001D_2E46
 * @implements 0EDB:050C:001D:2E46 ()
 * @implements 0EDB:0529:000B:01D3
 * @implements 0EDB:0534:000D:20EF
 * @implements 0EDB:0541:0006:9786
 * @implements 0EDB:0547:0008:26BA
 * @implements 0EDB:054F:0016:49F0
 * @implements 0EDB:0565:0004:FC39
 * @implements 0EDB:0567:0002:D43A
 * @implements 0EDB:0569:0006:3784
 * @implements 0EDB:056F:0018:C65D
 * @implements 0EDB:0587:0004:8639
 * @implements 0EDB:0589:0002:AE3A
 * @implements 0EDB:058B:0002:C03A
 * @implements 0EDB:058D:0004:8339
 * @implements 0EDB:0591:0003:2E57
 *
 * Called From: 0EDB:04F8:0029:06BF
 * Called From: 15C2:0932:003A:D1E0
 */
void f__0EDB_050C_001D_2E46()
{
l__050C:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_si);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0xB);
	emu_ax = emu_al;
	emu_shlw(&emu_ax, 0x1);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_addw(&emu_bx, emu_ax);
	emu_si = emu_get_memory16(emu_es, emu_bx, 0x16);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x0529); emu_cs = 0x167E; f__167E_0005_0013_AF0C();
	goto l__0529;
l__0529:
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_ax);
	if (emu_flags.zf) goto l__058D;
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x0534); emu_cs = 0x167E; f__167E_0088_001A_60ED();
	goto l__0534;
l__0534:
	emu_pop(&emu_cx);
	emu_cmpw(&emu_ax, 0x2);
	if (emu_flags.zf) goto l__0541;
	emu_cmpw(&emu_ax, 0x3);
	if (emu_flags.zf) goto l__0569;
	goto l__058B;
l__0541:
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x0547); emu_cs = 0x167E; f__167E_0284_000C_4C88();
	goto l__0547;
l__0547:
	emu_pop(&emu_cx);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x054F); emu_cs = 0x1A34; emu_Unit_GetHouseID();
	goto l__054F;
l__054F:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x394E));
	emu_push(emu_ax);
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x8);
	emu_ax = emu_al;
	emu_pop(&emu_dx);
	emu_cmpw(&emu_dx, emu_ax);
	if (emu_flags.zf) goto l__0565;
	emu_ax = 0x1;
	goto l__0567;
l__0565:
	emu_xorw(&emu_ax, emu_ax);
	goto l__0567;
l__0567:
	goto l__0591;
l__0569:
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x056F); emu_cs = 0x167E; f__167E_02AE_000C_CC85();
	goto l__056F;
l__056F:
	emu_pop(&emu_cx);
	emu_bx = emu_ax;
	emu_es = emu_dx;
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x8);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x394E));
	emu_cmpb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x8));
	if (emu_flags.zf) goto l__0587;
	emu_ax = 0x1;
	goto l__0589;
l__0587:
	emu_xorw(&emu_ax, emu_ax);
	goto l__0589;
l__0589:
	goto l__0567;
l__058B:
	goto l__058D;
l__058D:
	emu_xorw(&emu_ax, emu_ax);
	goto l__0567;
l__0591:
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

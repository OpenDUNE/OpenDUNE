/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__AB00_0443_0017_B488()
 *
 * @name f__AB00_0443_0017_B488
 * @implements AB00:0443:0017:B488 ()
 *
 * Called From: AB00:0479:0022:EC86
 * Called From: AB00:2017:0023:0EE1
 */
void f__AB00_0443_0017_B488()
{
l__0443:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_ds);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_get_memory16(emu_cs, 0x00, 0x43F) = emu_ax;
	emu_incw(&emu_ax);
	emu_get_memory16(emu_cs, 0x00, 0x441) = emu_ax;
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_pop(&emu_ds);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__AB00_045A_0022_EC86()
 *
 * @name f__AB00_045A_0022_EC86
 * @implements AB00:045A:0022:EC86 ()
 * @implements AB00:047C:0007:6C67
 * @implements AB00:0483:0011:6258
 * @implements AB00:0494:0005:C48A
 *
 * Called From: 2756:050D:0003:6FD4
 */
void f__AB00_045A_0022_EC86()
{
l__045A:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_ds);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_pushf();
	emu_cli();
	emu_push(emu_get_memory16(emu_cs, 0x00, 0x43F));
	emu_push(emu_get_memory16(emu_cs, 0x00, 0x441));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_cs);
	emu_push(0x047C); f__AB00_0443_0017_B488();
l__047C:
	emu_addw(&emu_sp, 0x8);
	emu_push(emu_cs);
	emu_push(0x0483); emu_MPU_Reset();
l__0483:
	emu_pop(&emu_get_memory16(emu_cs, 0x00, 0x441));
	emu_pop(&emu_get_memory16(emu_cs, 0x00, 0x43F));
	emu_orb(&emu_bh, 0x0);
	emu_push(emu_cs);
	emu_push(0x0494); f__AB00_048E_0001_6780();
l__0494:
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_pop(&emu_ds);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__AB00_048E_0001_6780()
 *
 * @name f__AB00_048E_0001_6780
 * @implements AB00:048E:0001:6780 ()
 *
 * Called From: AB00:0491:0011:6258
 */
void f__AB00_048E_0001_6780()
{
l__048E:

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	emu_popf();
	return;
}

/**
 * Decompiled function f__AB00_0564_0050_E6D5()
 *
 * @name f__AB00_0564_0050_E6D5
 * @implements AB00:0564:0050:E6D5 ()
 * @implements AB00:05B4:004E:B27D
 * @implements AB00:0602:000A:0F1F
 * @implements AB00:060C:0004:5E42
 *
 * Called From: AB00:2026:0004:4F8E
 * Called From: AB00:215E:0004:4F00
 */
void f__AB00_0564_0050_E6D5()
{
l__0564:
	emu_push(emu_ds);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_pushf();
	emu_cli();
	emu_push(emu_ax);
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_get_memory16(emu_ss, emu_bp,  0x2) = 0xC;
	emu_pop(&emu_bp);
	emu_push(emu_ax);
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_get_memory16(emu_ss, emu_bp,  0x2) = 0x1;
	emu_pop(&emu_bp);
	emu_push(emu_cs);
	emu_push(emu_ax);
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_get_memory16(emu_ss, emu_bp,  0x2) = 0x12B;
	emu_pop(&emu_bp);
	emu_push(emu_ax);
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_get_memory16(emu_ss, emu_bp,  0x2) = 0x0;
	emu_pop(&emu_bp);
	emu_push(emu_ax);
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_get_memory16(emu_ss, emu_bp,  0x2) = 0x0;
	emu_pop(&emu_bp);
	emu_push(emu_ax);
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_get_memory16(emu_ss, emu_bp,  0x2) = 0x7F;
	emu_pop(&emu_bp);
	emu_push(emu_ax);
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_get_memory16(emu_ss, emu_bp,  0x2) = 0x0;
	emu_pop(&emu_bp);
	emu_push(emu_cs);
	emu_push(0x05B4); f__AB00_0CB4_0016_9B28();
l__05B4:
	emu_addw(&emu_sp, 0x10);
	emu_push(emu_ax);
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_get_memory16(emu_ss, emu_bp,  0x2) = 0x4;
	emu_pop(&emu_bp);
	emu_push(emu_ax);
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_get_memory16(emu_ss, emu_bp,  0x2) = 0x9;
	emu_pop(&emu_bp);
	emu_push(emu_cs);
	emu_push(emu_ax);
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_get_memory16(emu_ss, emu_bp,  0x2) = 0x12B;
	emu_pop(&emu_bp);
	emu_push(emu_ax);
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_get_memory16(emu_ss, emu_bp,  0x2) = 0xD;
	emu_pop(&emu_bp);
	emu_push(emu_ax);
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_get_memory16(emu_ss, emu_bp,  0x2) = 0x0;
	emu_pop(&emu_bp);
	emu_push(emu_ax);
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_get_memory16(emu_ss, emu_bp,  0x2) = 0x10;
	emu_pop(&emu_bp);
	emu_push(emu_ax);
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_get_memory16(emu_ss, emu_bp,  0x2) = 0x0;
	emu_pop(&emu_bp);
	emu_push(emu_cs);
	emu_push(0x0602); f__AB00_0CB4_0016_9B28();
l__0602:
	emu_addw(&emu_sp, 0x10);
	emu_orb(&emu_bh, 0x0);
	emu_push(emu_cs);
	emu_push(0x060C); f__AB00_0606_0001_6780();
l__060C:
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_pop(&emu_ds);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__AB00_0606_0001_6780()
 *
 * @name f__AB00_0606_0001_6780
 * @implements AB00:0606:0001:6780 ()
 *
 * Called From: AB00:0609:000A:0F1F
 */
void f__AB00_0606_0001_6780()
{
l__0606:

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	emu_popf();
	return;
}

/**
 * Decompiled function f__AB00_0610_0050_6DE0()
 *
 * @name f__AB00_0610_0050_6DE0
 * @implements AB00:0610:0050:6DE0 ()
 * @implements AB00:0660:004E:B6B0
 * @implements AB00:06AE:0061:DF3A
 * @implements AB00:06B4:005B:BC92
 * @implements AB00:06D1:003E:339E
 * @implements AB00:06E0:002F:DD04
 * @implements AB00:06FB:0014:EC1D
 * @implements AB00:070F:0004:5E42
 *
 * Called From: AB00:202A:0004:4FB8
 */
void f__AB00_0610_0050_6DE0()
{
l__0610:
	emu_push(emu_ds);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_pushf();
	emu_cli();
	emu_push(emu_ax);
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_get_memory16(emu_ss, emu_bp,  0x2) = 0x4;
	emu_pop(&emu_bp);
	emu_push(emu_ax);
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_get_memory16(emu_ss, emu_bp,  0x2) = 0x9;
	emu_pop(&emu_bp);
	emu_push(emu_cs);
	emu_push(emu_ax);
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_get_memory16(emu_ss, emu_bp,  0x2) = 0x134;
	emu_pop(&emu_bp);
	emu_push(emu_ax);
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_get_memory16(emu_ss, emu_bp,  0x2) = 0x4;
	emu_pop(&emu_bp);
	emu_push(emu_ax);
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_get_memory16(emu_ss, emu_bp,  0x2) = 0x0;
	emu_pop(&emu_bp);
	emu_push(emu_ax);
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_get_memory16(emu_ss, emu_bp,  0x2) = 0x10;
	emu_pop(&emu_bp);
	emu_push(emu_ax);
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_get_memory16(emu_ss, emu_bp,  0x2) = 0x0;
	emu_pop(&emu_bp);
	emu_push(emu_cs);
	emu_push(0x0660); f__AB00_0CB4_0016_9B28();
l__0660:
	emu_addw(&emu_sp, 0x10);
	emu_push(emu_ax);
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_get_memory16(emu_ss, emu_bp,  0x2) = 0x4;
	emu_pop(&emu_bp);
	emu_push(emu_ax);
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_get_memory16(emu_ss, emu_bp,  0x2) = 0x3;
	emu_pop(&emu_bp);
	emu_push(emu_cs);
	emu_push(emu_ax);
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_get_memory16(emu_ss, emu_bp,  0x2) = 0x128;
	emu_pop(&emu_bp);
	emu_push(emu_ax);
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_get_memory16(emu_ss, emu_bp,  0x2) = 0x1;
	emu_pop(&emu_bp);
	emu_push(emu_ax);
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_get_memory16(emu_ss, emu_bp,  0x2) = 0x0;
	emu_pop(&emu_bp);
	emu_push(emu_ax);
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_get_memory16(emu_ss, emu_bp,  0x2) = 0x10;
	emu_pop(&emu_bp);
	emu_push(emu_ax);
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_get_memory16(emu_ss, emu_bp,  0x2) = 0x0;
	emu_pop(&emu_bp);
	emu_push(emu_cs);
	emu_push(0x06AE); f__AB00_0CB4_0016_9B28();
l__06AE:
	emu_addw(&emu_sp, 0x10);
	emu_bx = 0x0;
l__06B4:
	emu_get_memory8(emu_cs, emu_bx, 0x248) = 0x0;
	emu_incw(&emu_bx);
	emu_cmpw(&emu_bx, 0x3);
	if (emu_bx != 0x3) goto l__06B4;
	emu_get_memory16(emu_cs, 0x00, 0x24B) = 0x0;
	emu_get_memory16(emu_cs, 0x00, 0x24D) = 0x0;
	emu_di = 0x0;
l__06D1:
	emu_get_memory8(emu_cs, emu_di, 0x3CF) = 0x0;
	emu_incw(&emu_di);
	emu_cmpw(&emu_di, 0x40);
	if (emu_di != 0x40) goto l__06D1;
	emu_di = 0x0;
l__06E0:
	emu_get_memory8(emu_cs, emu_di, 0x40F) = 0xFF;
	emu_get_memory8(emu_cs, emu_di, 0x42F) = 0xFF;
	emu_get_memory8(emu_cs, emu_di, 0x41F) = 0x0;
	emu_incw(&emu_di);
	emu_cmpw(&emu_di, 0x10);
	if (emu_di != 0x10) goto l__06E0;
	emu_di = 0x0;
l__06FB:
	emu_get_memory8(emu_cs, emu_di, 0x13D) = 0x0;
	emu_incw(&emu_di);
	emu_cmpw(&emu_di, 0x80);
	if (emu_di != 0x80) goto l__06FB;
	emu_orb(&emu_bh, 0x0);
	emu_push(emu_cs);
	emu_push(0x070F); f__AB00_0709_0001_6780();
l__070F:
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_pop(&emu_ds);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__AB00_0709_0001_6780()
 *
 * @name f__AB00_0709_0001_6780
 * @implements AB00:0709:0001:6780 ()
 *
 * Called From: AB00:070C:0014:EC1D
 */
void f__AB00_0709_0001_6780()
{
l__0709:

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	emu_popf();
	return;
}

/**
 * Decompiled function f__AB00_074E_001C_6D6A()
 *
 * @name f__AB00_074E_001C_6D6A
 * @implements AB00:074E:001C:6D6A ()
 * @implements AB00:076D:000F:8CB6
 * @implements AB00:0775:0007:71A7
 * @implements AB00:077C:000B:015C
 *
 * Called From: AB00:1C93:0022:FCF9
 */
void f__AB00_074E_001C_6D6A()
{
l__074E:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_ds);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_cld();
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp,  0xA), 0xF0);
	if (emu_get_memory16(emu_ss, emu_bp,  0xA) != 0xF0) goto l__076D;
	emu_push(emu_ax);
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_get_memory16(emu_ss, emu_bp,  0x2) = 0xF0;
	emu_pop(&emu_bp);
	emu_push(emu_cs);
	emu_push(0x076A); emu_MPU_WriteData();
	/* Unresolved jump */ emu_ip = 0x076A; emu_last_cs = 0xAB00; emu_last_ip = 0x076A; emu_last_length = 0x001C; emu_last_crc = 0x6D6A; emu_call();
l__076D:
	emu_lfp(&emu_ds, &emu_si, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cx = emu_get_memory16(emu_ss, emu_bp,  0xC);
	if (emu_cx == 0) { /* Unresolved jump */ emu_ip = 0x0782; emu_last_cs = 0xAB00; emu_last_ip = 0x0773; emu_last_length = 0x000F; emu_last_crc = 0x8CB6; emu_call(); return; }
l__0775:
	emu_push(emu_cx);
	emu_lodsb(emu_ds);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x077C); emu_MPU_WriteData();
l__077C:
	emu_addw(&emu_sp, 0x2);
	emu_pop(&emu_cx);
	if (--emu_cx != 0) goto l__0775;
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_pop(&emu_ds);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__AB00_0787_0028_C5A7()
 *
 * @name f__AB00_0787_0028_C5A7
 * @implements AB00:0787:0028:C5A7 ()
 * @implements AB00:079E:0011:DDDD
 *
 * Called From: AB00:0D8F:000A:3A40
 * Called From: AB00:207C:001D:88E8
 * Called From: AB00:20EA:0014:F67A
 */
void f__AB00_0787_0028_C5A7()
{
l__0787:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_ds);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_ax = 0x40;
	emu_ds = emu_ax;
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x63);
	emu_addb(&emu_dl, 0x6);
	emu_cx = emu_get_memory16(emu_ss, emu_bp,  0x6);
	if (emu_cx == 0) { /* Unresolved jump */ emu_ip = 0x07AA; emu_last_cs = 0xAB00; emu_last_ip = 0x079C; emu_last_length = 0x0028; emu_last_crc = 0xC5A7; emu_call(); return; }
l__079E:
	emu_inb(&emu_al, emu_dx);
	emu_testb(&emu_al, 0x8);
	if ((emu_al & 0x8) == 0) goto l__079E;
	emu_inb(&emu_al, emu_dx);
	emu_testb(&emu_al, 0x8);
	if ((emu_al & 0x8) != 0) { /* Unresolved jump */ emu_ip = 0x07A3; emu_last_cs = 0xAB00; emu_last_ip = 0x07A6; emu_last_length = 0x0011; emu_last_crc = 0xDDDD; emu_call(); return; }
	if (--emu_cx != 0) goto l__079E;
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_pop(&emu_ds);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__AB00_08CE_005F_AC14()
 *
 * @name f__AB00_08CE_005F_AC14
 * @implements AB00:08CE:005F:AC14 ()
 * @implements AB00:0925:0008:11DF
 * @implements AB00:092D:0008:08A1
 * @implements AB00:0935:001A:3495
 * @implements AB00:094F:000A:D3DA
 * @implements AB00:0952:0007:F178
 * @implements AB00:0959:0002:D7BA
 * @implements AB00:095B:001C:492D
 * @implements AB00:097B:0005:7EA1
 * @implements AB00:0980:000A:7BEE
 * @implements AB00:098A:000D:9FD3
 * @implements AB00:0997:000D:3681
 * @implements AB00:09A4:0008:D848
 * @implements AB00:09AC:0008:14F4
 * @implements AB00:09B4:0008:50F0
 * @implements AB00:09BC:000D:8E3B
 * @implements AB00:09C9:000D:0135
 * @implements AB00:09D6:0008:F3FC
 * @implements AB00:09DE:0003:22BC
 * @implements AB00:0A07:000B:48CE
 * @implements AB00:0B09:001D:370B
 * @implements AB00:0BEE:0008:715D
 *
 * Called From: AB00:1646:0050:3CC3
 * Called From: AB00:1646:0033:F430
 * Called From: AB00:169F:003F:9AA6
 * Called From: AB00:169F:0032:5EED
 * Called From: AB00:1899:0027:2D9C
 * Called From: AB00:192B:0015:9F9D
 * Called From: AB00:192B:003B:BCBD
 * Called From: AB00:1B38:0077:7B2B
 * Called From: AB00:1B38:007D:13F6
 * Called From: AB00:1E0D:0043:6FBB
 * Called From: AB00:1E0D:0052:EEB8
 * Called From: AB00:1E0D:0049:436D
 * Called From: AB00:1EFE:001D:CD49
 * Called From: AB00:1EFE:0012:65A2
 * Called From: AB00:205F:0031:AB65
 * Called From: AB00:205F:002B:FE99
 * Called From: AB00:205F:002E:F465
 * Called From: AB00:20AC:0030:6D95
 * Called From: AB00:20AC:002A:1D0A
 * Called From: AB00:20D3:0027:E2B2
 * Called From: AB00:2871:001D:BB40
 * Called From: AB00:28DA:0029:4C06
 * Called From: AB00:28F6:001C:D2B9
 * Called From: AB00:291E:0028:DB24
 * Called From: AB00:291E:001D:8BC7
 * Called From: AB00:294B:0029:2E5B
 * Called From: AB00:296F:0024:5A85
 */
void f__AB00_08CE_005F_AC14()
{
l__08CE:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x2);
	emu_push(emu_ds);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_si = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_andw(&emu_si, 0xFF);
	emu_di = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_ax = emu_di;
	emu_andw(&emu_di, 0xF);
	emu_andw(&emu_ax, 0xF0);
	emu_cmpw(&emu_ax, 0xB0);
	if (emu_ax == 0xB0) goto l__0959;
	emu_cmpw(&emu_ax, 0xC0);
	if (emu_ax == 0xC0) goto l__095B;
	emu_cmpw(&emu_ax, 0x90);
	if (emu_ax == 0x90) {
		emu_addw(&emu_get_memory16(emu_cs, 0x00, 0x24B), 0x1);
		emu_adcw(&emu_get_memory16(emu_cs, 0x00, 0x24D), 0x0);
		emu_bh = 0x0;
		emu_bl = emu_get_memory8(emu_cs, emu_di, 0x40F);
		emu_cmpb(&emu_bl, 0xFF);
		if (emu_bl != 0xFF) {
			emu_shlw(&emu_bx, 0x1);
			emu_ax = emu_get_memory16(emu_cs, 0x00, 0x24B);
			emu_dx = emu_get_memory16(emu_cs, 0x00, 0x24D);
			emu_get_memory16(emu_cs, emu_bx, 0x24F) = emu_ax;
			emu_get_memory16(emu_cs, emu_bx, 0x2CF) = emu_dx;
		}
	}
l__0925:
	emu_di = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_push(emu_di);
	emu_push(emu_cs);
	emu_push(0x092D); emu_MPU_WriteData();
l__092D:
	emu_addw(&emu_sp, 0x2);
	emu_push(emu_si);
	emu_push(emu_cs);
	emu_push(0x0935); emu_MPU_WriteData();
l__0935:
	emu_addw(&emu_sp, 0x2);
	emu_andw(&emu_di, 0xF0);
	emu_cmpw(&emu_di, 0xC0);
	if (emu_di == 0xC0) goto l__0952;
	emu_cmpw(&emu_di, 0xD0);
	if (emu_di == 0xD0) goto l__0952;
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_cs);
	emu_push(0x094F); emu_MPU_WriteData();
l__094F:
	emu_addw(&emu_sp, 0x2);
l__0952:
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_pop(&emu_ds);
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
l__0959:
	goto l__098A;
l__095B:
	emu_ax = emu_si;
	emu_get_memory8(emu_cs, emu_di, 0x42F) = emu_al;
	emu_ah = emu_get_memory8(emu_cs, emu_di, 0x41F);
	emu_cmpb(&emu_ah, emu_get_memory8(emu_cs, emu_si, 0x13D));
	if (emu_ah == emu_get_memory8(emu_cs, emu_si, 0x13D)) goto l__097B;
	emu_push(emu_ax);
	emu_al = emu_ah;
	emu_push(emu_ax);
	emu_push(emu_si);
	emu_push(emu_cs);
	/* Unresolved call */ emu_push(0x0977); emu_ip = 0x0C38; emu_last_cs = 0xAB00; emu_last_ip = 0x0974; emu_last_length = 0x001C; emu_last_crc = 0x492D; emu_call();
	/* Unresolved jump */ emu_ip = 0x0977; emu_last_cs = 0xAB00; emu_last_ip = 0x0977; emu_last_length = 0x001C; emu_last_crc = 0x492D; emu_call();
l__097B:
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x0980); f__AB00_0C06_0032_85C4();
l__0980:
	emu_addw(&emu_sp, 0x2);
	emu_get_memory8(emu_cs, emu_di, 0x40F) = emu_al;
	goto l__0925;
l__098A:
	emu_cmpw(&emu_si, 0x20);
	if (emu_si < 0x20) goto l__0925;
	emu_cmpw(&emu_si, 0x2E);
	if (emu_si > 0x2E) goto l__0997;
	goto l__0B09;
l__0997:
	emu_cmpw(&emu_si, 0x3B);
	if (emu_si == 0x3B) { /* Unresolved jump */ emu_ip = 0x0A12; emu_last_cs = 0xAB00; emu_last_ip = 0x099A; emu_last_length = 0x000D; emu_last_crc = 0x3681; emu_call(); return; }
	emu_cmpw(&emu_si, 0x3C);
	if (emu_si != 0x3C) goto l__09A4;
	/* Unresolved jump */ emu_ip = 0x0A58; emu_last_cs = 0xAB00; emu_last_ip = 0x09A1; emu_last_length = 0x000D; emu_last_crc = 0x3681; emu_call();
l__09A4:
	emu_cmpw(&emu_si, 0x3D);
	if (emu_si != 0x3D) goto l__09AC;
	/* Unresolved jump */ emu_ip = 0x0A9E; emu_last_cs = 0xAB00; emu_last_ip = 0x09A9; emu_last_length = 0x0008; emu_last_crc = 0xD848; emu_call();
l__09AC:
	emu_cmpw(&emu_si, 0x3E);
	if (emu_si != 0x3E) goto l__09B4;
	/* Unresolved jump */ emu_ip = 0x0AB5; emu_last_cs = 0xAB00; emu_last_ip = 0x09B1; emu_last_length = 0x0008; emu_last_crc = 0x14F4; emu_call();
l__09B4:
	emu_cmpw(&emu_si, 0x3F);
	if (emu_si != 0x3F) goto l__09BC;
	/* Unresolved jump */ emu_ip = 0x0ACC; emu_last_cs = 0xAB00; emu_last_ip = 0x09B9; emu_last_length = 0x0008; emu_last_crc = 0x50F0; emu_call();
l__09BC:
	emu_cmpw(&emu_si, 0x72);
	if (emu_si == 0x72) goto l__0A07;
	emu_cmpw(&emu_si, 0x3A);
	if (emu_si != 0x3A) goto l__09C9;
	/* Unresolved jump */ emu_ip = 0x0AE3; emu_last_cs = 0xAB00; emu_last_ip = 0x09C6; emu_last_length = 0x000D; emu_last_crc = 0x8E3B; emu_call();
l__09C9:
	emu_cmpw(&emu_si, 0x71);
	if (emu_si == 0x71) { /* Unresolved jump */ emu_ip = 0x09E1; emu_last_cs = 0xAB00; emu_last_ip = 0x09CC; emu_last_length = 0x000D; emu_last_crc = 0x0135; emu_call(); return; }
	emu_cmpw(&emu_si, 0x6E);
	if (emu_si >= 0x6E) goto l__09D6;
	goto l__0925;
l__09D6:
	emu_cmpw(&emu_si, 0x78);
	if (emu_si <= 0x78) goto l__09DE;
	goto l__0925;
l__09DE:
	goto l__0952;
l__0A07:
	emu_al = emu_get_memory8(emu_ss, emu_bp,  0xA);
	emu_get_memory8(emu_cs, emu_di, 0x41F) = emu_al;
	goto l__0952;
l__0B09:
	emu_subw(&emu_si, 0x20);
	emu_ax = emu_si;
	emu_cx = 0x5;
	emu_dx = 0x0;
	emu_divw(&emu_ax, emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_dx;
	emu_bx = emu_ax;
	emu_al = emu_get_memory8(emu_ss, emu_bp,  0xA);
	emu_cmpw(&emu_dx, 0x0);
	if (emu_dx != 0x0) { /* Unresolved jump */ emu_ip = 0x0B26; emu_last_cs = 0xAB00; emu_last_ip = 0x0B21; emu_last_length = 0x001D; emu_last_crc = 0x370B; emu_call(); return; }
	goto l__0BEE;
l__0BEE:
	emu_get_memory8(emu_cs, emu_bx, 0x23F) = emu_al;
	goto l__0952;
}

/**
 * Decompiled function f__AB00_0C06_0032_85C4()
 *
 * @name f__AB00_0C06_0032_85C4
 * @implements AB00:0C06:0032:85C4 ()
 * @implements AB00:0C12:0026:C84E
 * @implements AB00:0C28:0010:0FE1
 *
 * Called From: AB00:097D:0005:7EA1
 */
void f__AB00_0C06_0032_85C4()
{
l__0C06:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_ds);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_si = 0x0;
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
l__0C12:
	emu_testb(&emu_get_memory8(emu_cs, emu_si, 0x3CF), 0x80);
	if ((emu_get_memory8(emu_cs, emu_si, 0x3CF) & 0x80) != 0) {
		emu_cmpb(&emu_get_memory8(emu_cs, emu_si, 0x34F), emu_ah);
		if (emu_get_memory8(emu_cs, emu_si, 0x34F) == emu_ah) {
			emu_cmpb(&emu_get_memory8(emu_cs, emu_si, 0x38F), emu_al);
			if (emu_get_memory8(emu_cs, emu_si, 0x38F) == emu_al) { /* Unresolved jump */ emu_ip = 0x0C31; emu_last_cs = 0xAB00; emu_last_ip = 0x0C26; emu_last_length = 0x0026; emu_last_crc = 0xC84E; emu_call(); return; }
		}
	}
l__0C28:
	emu_incw(&emu_si);
	emu_cmpw(&emu_si, 0x40);
	if (emu_si < 0x40) goto l__0C12;
	emu_si = 0xFFFF;
	emu_ax = emu_si;
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_pop(&emu_ds);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__AB00_0C96_0019_A7D9()
 *
 * @name f__AB00_0C96_0019_A7D9
 * @implements AB00:0C96:0019:A7D9 ()
 * @implements AB00:0CAF:0005:C48A
 *
 * Called From: 2756:050D:0003:6FD4
 */
void f__AB00_0C96_0019_A7D9()
{
l__0C96:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_ds);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_pushf();
	emu_cli();
	emu_dx = emu_cs;
	emu_get_memory16(emu_cs, 0x00, 0xD1) = emu_dx;
	emu_ax = 0xC7;
	emu_orb(&emu_bh, 0x0);
	emu_push(emu_cs);
	emu_push(0x0CAF); f__AB00_0CA9_0001_6780();
l__0CAF:
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_pop(&emu_ds);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__AB00_0CA9_0001_6780()
 *
 * @name f__AB00_0CA9_0001_6780
 * @implements AB00:0CA9:0001:6780 ()
 *
 * Called From: AB00:0CAC:0019:A7D9
 */
void f__AB00_0CA9_0001_6780()
{
l__0CA9:

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	emu_popf();
	return;
}

/**
 * Decompiled function f__AB00_0CB4_0016_9B28()
 *
 * @name f__AB00_0CB4_0016_9B28
 * @implements AB00:0CB4:0016:9B28 ()
 * @implements AB00:0CCA:0011:538D
 * @implements AB00:0CDB:0011:932B
 * @implements AB00:0CEC:0011:D32B
 * @implements AB00:0CFD:0011:1326
 * @implements AB00:0D0E:000A:3DBD
 * @implements AB00:0D18:000A:BD90
 * @implements AB00:0D22:000A:3DA6
 * @implements AB00:0D2C:0033:315C
 * @implements AB00:0D4A:0015:3DD1
 * @implements AB00:0D5F:0005:F76E
 * @implements AB00:0D64:0013:4E5F
 * @implements AB00:0D77:0011:92CA
 * @implements AB00:0D88:000A:3A40
 * @implements AB00:0D92:000A:1D1F
 * @implements AB00:0D9C:0005:C48A
 *
 * Called From: AB00:05B1:0050:E6D5
 * Called From: AB00:05FF:004E:B27D
 * Called From: AB00:065D:0050:6DE0
 * Called From: AB00:06AB:004E:B6B0
 */
void f__AB00_0CB4_0016_9B28()
{
l__0CB4:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_ds);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_pushf();
	emu_cli();
	emu_push(emu_ax);
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_get_memory16(emu_ss, emu_bp,  0x2) = 0xF0;
	emu_pop(&emu_bp);
	emu_push(emu_cs);
	emu_push(0x0CCA); emu_MPU_WriteData();
l__0CCA:
	emu_addw(&emu_sp, 0x2);
	emu_push(emu_ax);
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_get_memory16(emu_ss, emu_bp,  0x2) = 0x41;
	emu_pop(&emu_bp);
	emu_push(emu_cs);
	emu_push(0x0CDB); emu_MPU_WriteData();
l__0CDB:
	emu_addw(&emu_sp, 0x2);
	emu_push(emu_ax);
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_get_memory16(emu_ss, emu_bp,  0x2) = 0x10;
	emu_pop(&emu_bp);
	emu_push(emu_cs);
	emu_push(0x0CEC); emu_MPU_WriteData();
l__0CEC:
	emu_addw(&emu_sp, 0x2);
	emu_push(emu_ax);
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_get_memory16(emu_ss, emu_bp,  0x2) = 0x16;
	emu_pop(&emu_bp);
	emu_push(emu_cs);
	emu_push(0x0CFD); emu_MPU_WriteData();
l__0CFD:
	emu_addw(&emu_sp, 0x2);
	emu_push(emu_ax);
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_get_memory16(emu_ss, emu_bp,  0x2) = 0x12;
	emu_pop(&emu_bp);
	emu_push(emu_cs);
	emu_push(0x0D0E); emu_MPU_WriteData();
l__0D0E:
	emu_addw(&emu_sp, 0x2);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_cs);
	emu_push(0x0D18); emu_MPU_WriteData();
l__0D18:
	emu_addw(&emu_sp, 0x2);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_cs);
	emu_push(0x0D22); emu_MPU_WriteData();
l__0D22:
	emu_addw(&emu_sp, 0x2);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_cs);
	emu_push(0x0D2C); emu_MPU_WriteData();
l__0D2C:
	emu_addw(&emu_sp, 0x2);
	emu_al = emu_get_memory8(emu_ss, emu_bp,  0x8);
	emu_ah = 0x0;
	emu_addb(&emu_al, emu_get_memory8(emu_ss, emu_bp,  0xA));
	emu_adcb(&emu_ah, 0x0);
	emu_addb(&emu_al, emu_get_memory8(emu_ss, emu_bp,  0xC));
	emu_adcb(&emu_ah, 0x0);
	emu_get_memory16(emu_cs, 0x00, 0x1BD) = emu_ax;
	emu_lfp(&emu_es, &emu_di, &emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_si = emu_get_memory16(emu_ss, emu_bp,  0x12);
l__0D4A:
	emu_orw(&emu_si, emu_si);
	if (emu_si == 0) goto l__0D64;
	emu_decw(&emu_si);
	emu_xorb(&emu_ah, emu_ah);
	emu_al = emu_get_memory8(emu_es, emu_di, 0x0);
	emu_incw(&emu_di);
	emu_addw(&emu_get_memory16(emu_cs, 0x00, 0x1BD), emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x0D5F); emu_MPU_WriteData();
l__0D5F:
	emu_addw(&emu_sp, 0x2);
	goto l__0D4A;
l__0D64:
	emu_ax = emu_get_memory16(emu_cs, 0x00, 0x1BD);
	emu_andw(&emu_ax, 0x7F);
	emu_subb(&emu_al, 0x80);
	emu_negb(&emu_al, emu_al);
	emu_andw(&emu_ax, 0x7F);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x0D77); emu_MPU_WriteData();
l__0D77:
	emu_addw(&emu_sp, 0x2);
	emu_push(emu_ax);
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_get_memory16(emu_ss, emu_bp,  0x2) = 0xF7;
	emu_pop(&emu_bp);
	emu_push(emu_cs);
	emu_push(0x0D88); emu_MPU_WriteData();
l__0D88:
	emu_addw(&emu_sp, 0x2);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x14));
	emu_push(emu_cs);
	emu_push(0x0D92); f__AB00_0787_0028_C5A7();
l__0D92:
	emu_addw(&emu_sp, 0x2);
	emu_orb(&emu_bh, 0x0);
	emu_push(emu_cs);
	emu_push(0x0D9C); f__AB00_0D96_0001_6780();
l__0D9C:
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_pop(&emu_ds);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__AB00_0D96_0001_6780()
 *
 * @name f__AB00_0D96_0001_6780
 * @implements AB00:0D96:0001:6780 ()
 *
 * Called From: AB00:0D99:000A:1D1F
 */
void f__AB00_0D96_0001_6780()
{
l__0D96:

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	emu_popf();
	return;
}

/**
 * Decompiled function f__AB00_0DA1_0077_69FE()
 *
 * @name f__AB00_0DA1_0077_69FE
 * @implements AB00:0DA1:0077:69FE ()
 * @implements AB00:0E1B:0007:3FBD
 * @implements AB00:0E22:0005:C48A
 *
 * Called From: AB00:2172:0014:8AD4
 */
void f__AB00_0DA1_0077_69FE()
{
l__0DA1:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_ds);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_pushf();
	emu_cli();
	emu_cld();
	emu_lfp(&emu_ds, &emu_si, &emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_ax = emu_ds;
	emu_cmpw(&emu_ax, 0x0);
	if (emu_ax == 0x0) goto l__0E1B;
	emu_push(emu_cs);
	emu_pop(&emu_es);
	emu_di = 0x1BF;
	emu_cx = emu_get_memory16(emu_cs, 0x00, 0xDD);
	emu_al = 0x20;
	emu_rep_stosb();
	emu_di = 0x1BF;
	emu_cx = emu_get_memory16(emu_cs, 0x00, 0xDD);
	emu_lodsb(emu_ds);
	emu_cmpb(&emu_al, 0x0);
	if (emu_al == 0x0) { /* Unresolved jump */ emu_ip = 0x0DD2; emu_last_cs = 0xAB00; emu_last_ip = 0x0DCD; emu_last_length = 0x0077; emu_last_crc = 0x69FE; emu_call(); return; }
	emu_stosb();
	if (--emu_cx != 0) { /* Unresolved jump */ emu_ip = 0x0DCA; emu_last_cs = 0xAB00; emu_last_ip = 0x0DD0; emu_last_length = 0x0077; emu_last_crc = 0x69FE; emu_call(); }
	emu_push(emu_ax);
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_get_memory16(emu_ss, emu_bp,  0x2) = 0x4;
	emu_pop(&emu_bp);
	emu_push(emu_get_memory16(emu_cs, 0x00, 0xDD));
	emu_push(emu_cs);
	emu_push(emu_ax);
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_get_memory16(emu_ss, emu_bp,  0x2) = 0x1BF;
	emu_pop(&emu_bp);
	emu_push(emu_ax);
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_get_memory16(emu_ss, emu_bp,  0x2) = 0x0;
	emu_pop(&emu_bp);
	emu_push(emu_ax);
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_get_memory16(emu_ss, emu_bp,  0x2) = 0x0;
	emu_pop(&emu_bp);
	emu_push(emu_ax);
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_get_memory16(emu_ss, emu_bp,  0x2) = 0x20;
	emu_pop(&emu_bp);
	emu_push(emu_ax);
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_get_memory16(emu_ss, emu_bp,  0x2) = 0x0;
	emu_pop(&emu_bp);
	emu_push(emu_cs);
	emu_push(0x0E18); f__AB00_0CB4_0016_9B28();
	/* Unresolved jump */ emu_ip = 0x0E18; emu_last_cs = 0xAB00; emu_last_ip = 0x0E18; emu_last_length = 0x0077; emu_last_crc = 0x69FE; emu_call();
l__0E1B:
	emu_orb(&emu_bh, 0x0);
	emu_push(emu_cs);
	emu_push(0x0E22); f__AB00_0E1C_0001_6780();
l__0E22:
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_pop(&emu_ds);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__AB00_0E1C_0001_6780()
 *
 * @name f__AB00_0E1C_0001_6780
 * @implements AB00:0E1C:0001:6780 ()
 *
 * Called From: AB00:0E1F:0007:3FBD
 */
void f__AB00_0E1C_0001_6780()
{
l__0E1C:

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	emu_popf();
	return;
}

/**
 * Decompiled function f__AB00_0F02_0012_D841()
 *
 * @name f__AB00_0F02_0012_D841
 * @implements AB00:0F02:0012:D841 ()
 * @implements AB00:0F14:0005:C48A
 *
 * Called From: 2756:050D:0003:6FD4
 */
void f__AB00_0F02_0012_D841()
{
l__0F02:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_ds);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_pushf();
	emu_cli();
	emu_ax = 0x0;
	emu_orb(&emu_bh, 0x0);
	emu_push(emu_cs);
	emu_push(0x0F14); f__AB00_0F0E_0001_6780();
l__0F14:
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_pop(&emu_ds);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__AB00_0F0E_0001_6780()
 *
 * @name f__AB00_0F0E_0001_6780
 * @implements AB00:0F0E:0001:6780 ()
 *
 * Called From: AB00:0F11:0012:D841
 */
void f__AB00_0F0E_0001_6780()
{
l__0F0E:

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	emu_popf();
	return;
}

/**
 * Decompiled function f__AB00_0F24_0044_3584()
 *
 * @name f__AB00_0F24_0044_3584
 * @implements AB00:0F24:0044:3584 ()
 * @implements AB00:0F53:0015:CA73
 * @implements AB00:0F70:0005:8C45
 * @implements AB00:0F79:000A:6EC2
 * @implements AB00:0F83:0005:C48A
 *
 * Called From: 2756:050D:0003:6FD4
 */
void f__AB00_0F24_0044_3584()
{
l__0F24:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_ds);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_pushf();
	emu_cli();
	emu_si = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_cmpw(&emu_si, 0xFFFF);
	if (emu_si == 0xFFFF) goto l__0F79;
	emu_lfp(&emu_ds, &emu_si, &emu_get_memory16(emu_cs, emu_si, 0x12F2));
	emu_cmpw(&emu_get_memory16(emu_ds, emu_si, 0x2), 0x0);
	if (emu_get_memory16(emu_ds, emu_si, 0x2) == 0x0) goto l__0F79;
	emu_lfp(&emu_ds, &emu_si, &emu_get_memory16(emu_ds, emu_si, 0x0));
	emu_cmpw(&emu_get_memory16(emu_ds, emu_si, 0x0), 0x4954);
	if (emu_get_memory16(emu_ds, emu_si, 0x0) != 0x4954) goto l__0F79;
	emu_cmpw(&emu_get_memory16(emu_ds, emu_si, 0x2), 0x424D);
	if (emu_get_memory16(emu_ds, emu_si, 0x2) != 0x424D) goto l__0F79;
	emu_addw(&emu_si, 0x8);
	emu_di = emu_get_memory16(emu_ds, emu_si, 0x0);
l__0F53:
	emu_addw(&emu_si, 0x2);
	emu_ax = emu_get_memory16(emu_ds, emu_si, 0x0);
	emu_cmpb(&emu_ah, 0x0);
	if (emu_ah == 0x0) goto l__0F70;
	emu_cmpb(&emu_ah, 0x7F);
	if (emu_ah == 0x7F) goto l__0F70;
	emu_push(emu_get_memory16(emu_ds, emu_si, 0x0));
	emu_push(emu_cs);
	emu_push(0x0F68); f__AB00_0C06_0032_85C4();
	/* Unresolved jump */ emu_ip = 0x0F68; emu_last_cs = 0xAB00; emu_last_ip = 0x0F68; emu_last_length = 0x0015; emu_last_crc = 0xCA73; emu_call();
l__0F70:
	emu_decw(&emu_di);
	if (emu_di != 0) goto l__0F53;
	goto l__0F79;
l__0F79:
	emu_ax = 0xFFFF;
	emu_orb(&emu_bh, 0x0);
	emu_push(emu_cs);
	emu_push(0x0F83); f__AB00_0F7D_0001_6780();
l__0F83:
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_pop(&emu_ds);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__AB00_0F7D_0001_6780()
 *
 * @name f__AB00_0F7D_0001_6780
 * @implements AB00:0F7D:0001:6780 ()
 *
 * Called From: AB00:0F80:000A:6EC2
 */
void f__AB00_0F7D_0001_6780()
{
l__0F7D:

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	emu_popf();
	return;
}

/**
 * Decompiled function f__AB00_1400_0026_1BEB()
 *
 * @name f__AB00_1400_0026_1BEB
 * @implements AB00:1400:0026:1BEB ()
 * @implements AB00:1410:0016:CE6E
 * @implements AB00:141D:0009:6E70
 * @implements AB00:1426:000A:7860
 * @implements AB00:1430:0058:5E5C
 * @implements AB00:143E:004A:D152
 * @implements AB00:1488:002A:FF16
 * @implements AB00:14B2:0063:4D0B
 * @implements AB00:14B5:0060:DB5A
 * @implements AB00:14C3:0052:D6D5
 * @implements AB00:1515:0008:D118
 * @implements AB00:151D:000D:1FFD
 * @implements AB00:1523:0007:F178
 *
 * Called From: AB00:2221:0010:A9E4
 */
void f__AB00_1400_0026_1BEB()
{
l__1400:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x4);
	emu_push(emu_ds);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_cx = emu_get_memory16(emu_ss, emu_bp,  0xA);
	emu_incw(&emu_cx);
	emu_lfp(&emu_ds, &emu_si, &emu_get_memory16(emu_ss, emu_bp,  0x6));
l__1410:
	emu_cmpw(&emu_get_memory16(emu_ds, emu_si, 0x0), 0x4143);
	if (emu_get_memory16(emu_ds, emu_si, 0x0) == 0x4143) {
		emu_cmpw(&emu_get_memory16(emu_ds, emu_si, 0x2), 0x2054);
		if (emu_get_memory16(emu_ds, emu_si, 0x2) == 0x2054) goto l__1430;
	}
l__141D:
	emu_cmpw(&emu_get_memory16(emu_ds, emu_si, 0x0), 0x4F46);
	if (emu_get_memory16(emu_ds, emu_si, 0x0) == 0x4F46) goto l__1426;
	goto l__151D;
l__1426:
	emu_cmpw(&emu_get_memory16(emu_ds, emu_si, 0x2), 0x4D52);
	if (emu_get_memory16(emu_ds, emu_si, 0x2) == 0x4D52) goto l__1430;
	goto l__151D;
l__1430:
	emu_cmpw(&emu_get_memory16(emu_ds, emu_si, 0x8), 0x4D58);
	if (emu_get_memory16(emu_ds, emu_si, 0x8) == 0x4D58) {
		emu_cmpw(&emu_get_memory16(emu_ds, emu_si, 0xA), 0x4449);
		if (emu_get_memory16(emu_ds, emu_si, 0xA) == 0x4449) goto l__1488;
	}
l__143E:
	emu_dx = emu_get_memory16(emu_ds, emu_si, 0x4);
	emu_ax = emu_get_memory16(emu_ds, emu_si, 0x6);
	emu_xchgb(&emu_ah, &emu_al);
	emu_xchgb(&emu_dh, &emu_dl);
	emu_addw(&emu_ax, 0x8);
	emu_adcw(&emu_dx, 0x0);
	emu_push(emu_bx);
	emu_push(emu_cx);
	emu_bx = emu_ds;
	emu_xorw(&emu_cx, emu_cx);
	emu_shlw(&emu_bx, 0x1);
	emu_rclw(&emu_cx, 0x1);
	emu_shlw(&emu_bx, 0x1);
	emu_rclw(&emu_cx, 0x1);
	emu_shlw(&emu_bx, 0x1);
	emu_rclw(&emu_cx, 0x1);
	emu_shlw(&emu_bx, 0x1);
	emu_rclw(&emu_cx, 0x1);
	emu_addw(&emu_bx, emu_si);
	emu_adcw(&emu_cx, 0x0);
	emu_addw(&emu_bx, emu_ax);
	emu_adcw(&emu_cx, emu_dx);
	emu_si = emu_bx;
	emu_andw(&emu_si, 0xF);
	emu_shrw(&emu_cx, 0x1);
	emu_rcrw(&emu_bx, 0x1);
	emu_shrw(&emu_cx, 0x1);
	emu_rcrw(&emu_bx, 0x1);
	emu_shrw(&emu_cx, 0x1);
	emu_rcrw(&emu_bx, 0x1);
	emu_shrw(&emu_cx, 0x1);
	emu_rcrw(&emu_bx, 0x1);
	emu_ds = emu_bx;
	emu_pop(&emu_cx);
	emu_pop(&emu_bx);
	goto l__1410;
l__1488:
	emu_dx = emu_get_memory16(emu_ds, emu_si, 0x4);
	emu_ax = emu_get_memory16(emu_ds, emu_si, 0x6);
	emu_xchgb(&emu_ah, &emu_al);
	emu_xchgb(&emu_dh, &emu_dl);
	emu_subw(&emu_ax, 0x5);
	emu_sbbw(&emu_dx, 0x0);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_dx;
	emu_cmpw(&emu_get_memory16(emu_ds, emu_si, 0x0), 0x4F46);
	if (emu_get_memory16(emu_ds, emu_si, 0x0) != 0x4F46) goto l__14B2;
	emu_cmpw(&emu_get_memory16(emu_ds, emu_si, 0x2), 0x4D52);
	if (emu_get_memory16(emu_ds, emu_si, 0x2) != 0x4D52) goto l__14B2;
	emu_cmpw(&emu_cx, 0x1);
	if (emu_cx == 0x1) { /* Unresolved jump */ emu_ip = 0x1517; emu_last_cs = 0xAB00; emu_last_ip = 0x14AE; emu_last_length = 0x002A; emu_last_crc = 0xFF16; emu_call(); return; }
	goto l__151D;
l__14B2:
	emu_addw(&emu_si, 0xC);
l__14B5:
	emu_cmpw(&emu_get_memory16(emu_ds, emu_si, 0x8), 0x4D58);
	if (emu_get_memory16(emu_ds, emu_si, 0x8) == 0x4D58) {
		emu_cmpw(&emu_get_memory16(emu_ds, emu_si, 0xA), 0x4449);
		if (emu_get_memory16(emu_ds, emu_si, 0xA) == 0x4449) goto l__1515;
	}
l__14C3:
	emu_dx = emu_get_memory16(emu_ds, emu_si, 0x4);
	emu_ax = emu_get_memory16(emu_ds, emu_si, 0x6);
	emu_xchgb(&emu_ah, &emu_al);
	emu_xchgb(&emu_dh, &emu_dl);
	emu_addw(&emu_ax, 0x8);
	emu_adcw(&emu_dx, 0x0);
	emu_subw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax);
	emu_sbbw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_dx);
	if ((emu_flags.sf != emu_flags.of)) goto l__151D;
	emu_push(emu_bx);
	emu_push(emu_cx);
	emu_bx = emu_ds;
	emu_xorw(&emu_cx, emu_cx);
	emu_shlw(&emu_bx, 0x1);
	emu_rclw(&emu_cx, 0x1);
	emu_shlw(&emu_bx, 0x1);
	emu_rclw(&emu_cx, 0x1);
	emu_shlw(&emu_bx, 0x1);
	emu_rclw(&emu_cx, 0x1);
	emu_shlw(&emu_bx, 0x1);
	emu_rclw(&emu_cx, 0x1);
	emu_addw(&emu_bx, emu_si);
	emu_adcw(&emu_cx, 0x0);
	emu_addw(&emu_bx, emu_ax);
	emu_adcw(&emu_cx, emu_dx);
	emu_si = emu_bx;
	emu_andw(&emu_si, 0xF);
	emu_shrw(&emu_cx, 0x1);
	emu_rcrw(&emu_bx, 0x1);
	emu_shrw(&emu_cx, 0x1);
	emu_rcrw(&emu_bx, 0x1);
	emu_shrw(&emu_cx, 0x1);
	emu_rcrw(&emu_bx, 0x1);
	emu_shrw(&emu_cx, 0x1);
	emu_rcrw(&emu_bx, 0x1);
	emu_ds = emu_bx;
	emu_pop(&emu_cx);
	emu_pop(&emu_bx);
	goto l__14B5;
l__1515:
	if (--emu_cx != 0) goto l__14C3;
	emu_ax = emu_si;
	emu_dx = emu_ds;
	goto l__1523;
l__151D:
	emu_ax = 0x0;
	emu_dx = 0x0;
l__1523:
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
 * Decompiled function f__AB00_152A_00B7_1482()
 *
 * @name f__AB00_152A_00B7_1482
 * @implements AB00:152A:00B7:1482 ()
 * @implements AB00:153E:00A3:5356
 * @implements AB00:154B:0096:6DB3
 * @implements AB00:1567:007A:D51B
 * @implements AB00:1572:006F:A229
 *
 * Called From: AB00:231A:0030:66CE
 * Called From: AB00:23AD:0007:DC21
 */
void f__AB00_152A_00B7_1482()
{
l__152A:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_ds);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_si = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_lfp(&emu_ds, &emu_si, &emu_get_memory16(emu_cs, emu_si, 0x12F2));
	emu_cx = 0x4;
	emu_bx = 0x0;
l__153E:
	emu_get_memory16(emu_ds, emu_bx + emu_si, 0x60) = 0xFFFF;
	emu_addw(&emu_bx, 0x2);
	if (--emu_cx != 0) goto l__153E;
	emu_bx = 0xF;
l__154B:
	emu_get_memory8(emu_ds, emu_bx + emu_si, 0x68) = emu_bl;
	emu_get_memory8(emu_ds, emu_bx + emu_si, 0x78) = 0xFF;
	emu_get_memory8(emu_ds, emu_bx + emu_si, 0x88) = 0xFF;
	emu_get_memory8(emu_ds, emu_bx + emu_si, 0x98) = 0xFF;
	emu_get_memory8(emu_ds, emu_bx + emu_si, 0xA8) = 0xFF;
	emu_decw(&emu_bx);
	if (!(emu_flags.sf != emu_flags.of)) goto l__154B;
	emu_bx = 0x8F;
l__1567:
	emu_get_memory8(emu_ds, emu_bx + emu_si, 0xB8) = 0xFF;
	emu_decw(&emu_bx);
	if (!(emu_flags.sf != emu_flags.of)) goto l__1567;
	emu_bx = 0x1F;
l__1572:
	emu_get_memory8(emu_ds, emu_bx + emu_si, 0x148) = 0xFF;
	emu_decw(&emu_bx);
	if (!(emu_flags.sf != emu_flags.of)) goto l__1572;
	emu_get_memory16(emu_ds, emu_si, 0x10) = 0xFFFF;
	emu_get_memory16(emu_ds, emu_si, 0x1E) = 0x0;
	emu_get_memory16(emu_ds, emu_si, 0x20) = 0x0;
	emu_get_memory16(emu_ds, emu_si, 0x24) = 0x5A;
	emu_get_memory16(emu_ds, emu_si, 0x26) = 0x5A;
	emu_get_memory16(emu_ds, emu_si, 0x32) = 0x64;
	emu_get_memory16(emu_ds, emu_si, 0x34) = 0x64;
	emu_get_memory16(emu_ds, emu_si, 0x30) = 0x0;
	emu_get_memory16(emu_ds, emu_si, 0x3E) = 0x0;
	emu_get_memory16(emu_ds, emu_si, 0x40) = 0x0;
	emu_ax = 0x0;
	emu_dx = 0x0;
	emu_cx = 0x1;
	emu_addw(&emu_ax, 0x8D5);
	emu_adcw(&emu_dx, 0x2);
	if (--emu_cx != 0) { /* Unresolved jump */ emu_ip = 0x15B5; emu_last_cs = 0xAB00; emu_last_ip = 0x15BB; emu_last_length = 0x006F; emu_last_crc = 0xA229; emu_call(); }
	emu_get_memory16(emu_ds, emu_si, 0x48) = emu_ax;
	emu_get_memory16(emu_ds, emu_si, 0x4A) = emu_dx;
	emu_get_memory16(emu_ds, emu_si, 0x42) = 0x4;
	emu_get_memory16(emu_ds, emu_si, 0x44) = 0x8D5;
	emu_get_memory16(emu_ds, emu_si, 0x46) = 0x2;
	emu_get_memory16(emu_ds, emu_si, 0x4C) = 0x1200;
	emu_get_memory16(emu_ds, emu_si, 0x4E) = 0x7A;
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_pop(&emu_ds);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__AB00_15E1_0068_0B9B()
 *
 * @name f__AB00_15E1_0068_0B9B
 * @implements AB00:15E1:0068:0B9B ()
 * @implements AB00:15F9:0050:3CC3
 * @implements AB00:1616:0033:F430
 * @implements AB00:1649:001A:99A8
 * @implements AB00:1651:0012:241D
 * @implements AB00:1657:000C:1CBB
 *
 * Called From: AB00:16FF:000D:C42E
 * Called From: AB00:287C:000B:E6F7
 */
void f__AB00_15E1_0068_0B9B()
{
l__15E1:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x4);
	emu_push(emu_ds);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = 0x0;
	emu_cx = emu_get_memory16(emu_cs, 0x00, 0x1312);
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_cx;
	if (emu_cx == 0) { /* Unresolved jump */ emu_ip = 0x165C; emu_last_cs = 0xAB00; emu_last_ip = 0x15F7; emu_last_length = 0x0068; emu_last_crc = 0x0B9B; emu_call(); return; }
l__15F9:
	emu_di = emu_get_memory16(emu_ss, emu_bp, -0x2);
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x4);
	emu_cmpw(&emu_get_memory16(emu_cs, emu_di, 0x12F4), 0x0);
	if (emu_get_memory16(emu_cs, emu_di, 0x12F4) == 0x0) goto l__15F9;
	emu_lfp(&emu_ds, &emu_si, &emu_get_memory16(emu_cs, emu_di, 0x12F2));
	emu_cmpw(&emu_get_memory16(emu_ds, emu_si, 0x20), 0x0);
	if (emu_get_memory16(emu_ds, emu_si, 0x20) == 0x0) goto l__1657;
	emu_bx = 0x0;
l__1616:
	emu_al = emu_get_memory8(emu_ds, emu_bx + emu_si, 0x148);
	emu_cmpb(&emu_al, emu_get_memory8(emu_ss, emu_bp,  0x6));
	if (emu_al != emu_get_memory8(emu_ss, emu_bp,  0x6)) goto l__1651;
	emu_get_memory8(emu_ds, emu_bx + emu_si, 0x148) = 0xFF;
	emu_cl = emu_get_memory8(emu_ds, emu_bx + emu_si, 0x168);
	emu_di = emu_bx;
	emu_bl = emu_al;
	emu_bh = 0x0;
	emu_bl = emu_get_memory8(emu_ds, emu_bx + emu_si, 0x68);
	emu_decb(&emu_get_memory8(emu_cs, emu_bx, 0x13DE));
	emu_orb(&emu_bl, 0x80);
	emu_push(emu_ax);
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_get_memory16(emu_ss, emu_bp,  0x2) = 0x0;
	emu_pop(&emu_bp);
	emu_push(emu_cx);
	emu_push(emu_bx);
	emu_push(emu_cs);
	emu_push(0x1649); f__AB00_08CE_005F_AC14();
l__1649:
	emu_addw(&emu_sp, 0x6);
	emu_decw(&emu_get_memory16(emu_ds, emu_si, 0x20));
	emu_bx = emu_di;
l__1651:
	emu_incw(&emu_bx);
	emu_cmpw(&emu_bx, 0x20);
	if (emu_bx < 0x20) goto l__1616;
l__1657:
	emu_decw(&emu_get_memory16(emu_ss, emu_bp, -0x4));
	if (emu_get_memory16(emu_ss, emu_bp, -0x4) != 0) goto l__15F9;
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
 * Decompiled function f__AB00_1663_003F_9AA6()
 *
 * @name f__AB00_1663_003F_9AA6
 * @implements AB00:1663:003F:9AA6 ()
 * @implements AB00:1670:0032:5EED
 * @implements AB00:16A2:0015:5C89
 * @implements AB00:16A7:0010:B7FF
 *
 * Called From: AB00:2435:0029:C429
 */
void f__AB00_1663_003F_9AA6()
{
l__1663:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_ds);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_cld();
	emu_lfp(&emu_ds, &emu_si, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_bx = 0x0;
l__1670:
	emu_al = emu_get_memory8(emu_ds, emu_bx + emu_si, 0x148);
	emu_cmpb(&emu_al, 0xFF);
	if (emu_al == 0xFF) goto l__16A7;
	emu_get_memory8(emu_ds, emu_bx + emu_si, 0x148) = 0xFF;
	emu_cl = emu_get_memory8(emu_ds, emu_bx + emu_si, 0x168);
	emu_di = emu_bx;
	emu_bl = emu_al;
	emu_bh = 0x0;
	emu_bl = emu_get_memory8(emu_ds, emu_bx + emu_si, 0x68);
	emu_decb(&emu_get_memory8(emu_cs, emu_bx, 0x13DE));
	emu_orb(&emu_bl, 0x80);
	emu_push(emu_ax);
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_get_memory16(emu_ss, emu_bp,  0x2) = 0x0;
	emu_pop(&emu_bp);
	emu_push(emu_cx);
	emu_push(emu_bx);
	emu_push(emu_cs);
	emu_push(0x16A2); f__AB00_08CE_005F_AC14();
l__16A2:
	emu_addw(&emu_sp, 0x6);
	emu_bx = emu_di;
l__16A7:
	emu_incw(&emu_bx);
	emu_cmpw(&emu_bx, 0x20);
	if (emu_bx < 0x20) goto l__1670;
	emu_get_memory16(emu_ds, emu_si, 0x20) = 0x0;
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_pop(&emu_ds);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__AB00_16B7_0039_7EF1()
 *
 * @name f__AB00_16B7_0039_7EF1
 * @implements AB00:16B7:0039:7EF1 ()
 * @implements AB00:16C3:002D:E5B4
 * @implements AB00:16F5:000D:C42E
 * @implements AB00:1702:001A:15C8
 * @implements AB00:171C:003B:F13B
 * @implements AB00:1724:0033:8853
 * @implements AB00:1732:0025:6623
 * @implements AB00:175C:0009:93CA
 * @implements AB00:1765:0005:C48A
 *
 * Called From: AB00:1BAB:0006:BA32
 * Called From: AB00:243E:0009:3AE4
 */
void f__AB00_16B7_0039_7EF1()
{
l__16B7:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_ds);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_lfp(&emu_ds, &emu_si, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_di = 0x0;
l__16C3:
	emu_bx = emu_di;
	emu_al = emu_get_memory8(emu_ds, emu_bx + emu_si, 0xF8);
	emu_cmpb(&emu_al, 0x40);
	if ((int8)emu_al < (int8)0x40) goto l__16F5;
	emu_get_memory8(emu_cs, emu_bx, 0x135E) = 0x0;
	emu_orw(&emu_bx, 0xB0);
	emu_push(emu_ax);
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_get_memory16(emu_ss, emu_bp,  0x2) = 0x0;
	emu_pop(&emu_bp);
	emu_push(emu_ax);
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_get_memory16(emu_ss, emu_bp,  0x2) = 0x40;
	emu_pop(&emu_bp);
	emu_push(emu_bx);
	emu_push(emu_cs);
	emu_push(0x16F0); f__AB00_08CE_005F_AC14();
	/* Unresolved jump */ emu_ip = 0x16F0; emu_last_cs = 0xAB00; emu_last_ip = 0x16F0; emu_last_length = 0x002D; emu_last_crc = 0xE5B4; emu_call();
l__16F5:
	emu_al = emu_get_memory8(emu_ds, emu_bx + emu_si, 0x118);
	emu_cmpb(&emu_al, 0x40);
	if ((int8)emu_al < (int8)0x40) goto l__1724;
	emu_push(emu_di);
	emu_push(emu_cs);
	emu_push(0x1702); f__AB00_15E1_0068_0B9B();
l__1702:
	emu_addw(&emu_sp, 0x2);
	emu_bx = emu_di;
	emu_bl = emu_get_memory8(emu_ds, emu_bx + emu_si, 0x68);
	emu_bh = 0x0;
	emu_incw(&emu_bx);
	emu_push(emu_bx);
	emu_push(emu_ax);
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_get_memory16(emu_ss, emu_bp,  0x2) = 0x0;
	emu_pop(&emu_bp);
	emu_push(emu_cs);
	emu_push(0x171C); f__AB00_289D_0017_6184();
l__171C:
	emu_addw(&emu_sp, 0x4);
	emu_bx = emu_di;
	emu_get_memory8(emu_ds, emu_bx + emu_si, 0x68) = emu_bl;
l__1724:
	emu_al = emu_get_memory8(emu_ds, emu_bx + emu_si, 0x128);
	emu_cmpb(&emu_al, 0x40);
	if ((int8)emu_al >= (int8)0x40) {
		emu_andb(&emu_get_memory8(emu_cs, emu_bx, 0x13EE), 0xBF);
	}
l__1732:
	emu_al = emu_get_memory8(emu_ds, emu_bx + emu_si, 0x138);
	emu_cmpb(&emu_al, 0x40);
	if ((int8)emu_al < (int8)0x40) goto l__175C;
	emu_orw(&emu_bx, 0xB0);
	emu_push(emu_ax);
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_get_memory16(emu_ss, emu_bp,  0x2) = 0x0;
	emu_pop(&emu_bp);
	emu_push(emu_ax);
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_get_memory16(emu_ss, emu_bp,  0x2) = 0x70;
	emu_pop(&emu_bp);
	emu_push(emu_bx);
	emu_push(emu_cs);
	emu_push(0x1757); f__AB00_08CE_005F_AC14();
	/* Unresolved jump */ emu_ip = 0x1757; emu_last_cs = 0xAB00; emu_last_ip = 0x1757; emu_last_length = 0x0025; emu_last_crc = 0x6623; emu_call();
l__175C:
	emu_incw(&emu_di);
	emu_cmpw(&emu_di, 0x10);
	if (emu_di == 0x10) goto l__1765;
	goto l__16C3;
l__1765:
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_pop(&emu_ds);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__AB00_184D_004F_7B67()
 *
 * @name f__AB00_184D_004F_7B67
 * @implements AB00:184D:004F:7B67 ()
 * @implements AB00:1859:0043:7D0A
 * @implements AB00:1875:0027:2D9C
 * @implements AB00:189C:0010:01B9
 * @implements AB00:18A1:000B:DCD7
 *
 * Called From: AB00:1F9F:0009:FF96
 * Called From: AB00:1F9F:000B:AF47
 * Called From: AB00:2756:0009:3B81
 */
void f__AB00_184D_004F_7B67()
{
l__184D:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_ds);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_lfp(&emu_ds, &emu_si, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_bx = 0x0;
l__1859:
	emu_al = emu_get_memory8(emu_ds, emu_bx + emu_si, 0xB8);
	emu_cmpb(&emu_al, 0xFF);
	if (emu_al == 0xFF) goto l__18A1;
	emu_ah = 0x0;
	emu_cx = emu_get_memory16(emu_ds, emu_si, 0x24);
	emu_mulw(&emu_ax, emu_cx);
	emu_cx = 0x64;
	emu_divw(&emu_ax, emu_cx);
	emu_cmpw(&emu_ax, 0x7F);
	if (emu_ax >= 0x7F) {
		emu_ax = 0x7F;
	}
l__1875:
	emu_di = emu_bx;
	emu_get_memory8(emu_cs, emu_bx, 0x131E) = emu_al;
	emu_testb(&emu_get_memory8(emu_cs, emu_bx, 0x13EE), 0x80);
	if ((emu_get_memory8(emu_cs, emu_bx, 0x13EE) & 0x80) != 0) goto l__18A1;
	emu_di = emu_bx;
	emu_bl = emu_get_memory8(emu_ds, emu_bx + emu_si, 0x68);
	emu_orb(&emu_bl, 0xB0);
	emu_push(emu_ax);
	emu_push(emu_ax);
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_get_memory16(emu_ss, emu_bp,  0x2) = 0x7;
	emu_pop(&emu_bp);
	emu_push(emu_bx);
	emu_push(emu_cs);
	emu_push(0x189C); f__AB00_08CE_005F_AC14();
l__189C:
	emu_addw(&emu_sp, 0x6);
	emu_bx = emu_di;
l__18A1:
	emu_incw(&emu_bx);
	emu_cmpw(&emu_bx, 0x10);
	if (emu_bx != 0x10) goto l__1859;
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_pop(&emu_ds);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__AB00_18AC_0082_307C()
 *
 * @name f__AB00_18AC_0082_307C
 * @implements AB00:18AC:0082:307C ()
 * @implements AB00:18D8:0056:2D2C
 * @implements AB00:18F3:003B:BCBD
 * @implements AB00:1919:0015:9F9D
 * @implements AB00:192E:000D:8B3D
 * @implements AB00:1931:000A:5F79
 * @implements AB00:193B:0025:E303
 * @implements AB00:1959:0007:5A3D
 * @implements AB00:1964:0002:F0BA
 * @implements AB00:1966:0003:DD00
 * @implements AB00:1969:0003:5D0F
 * @implements AB00:196C:0003:5D14
 * @implements AB00:19C7:0014:EAB7
 * @implements AB00:19DB:0011:D88E
 * @implements AB00:19EC:0008:90B2
 * @implements AB00:19F4:0014:2A78
 * @implements AB00:19FA:000E:C637
 * @implements AB00:1A08:0013:7B56
 * @implements AB00:1A1B:000E:4FD0
 * @implements AB00:1A29:000E:9CBA
 * @implements AB00:1A40:0015:ED40
 * @implements AB00:1A55:0013:7FB9
 * @implements AB00:1A60:0008:0AA8
 *
 * Called From: AB00:1EC2:0009:6A86
 */
void f__AB00_18AC_0082_307C()
{
l__18AC:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x2);
	emu_push(emu_ds);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_cld();
	emu_lfp(&emu_ds, &emu_si, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_bl = emu_get_memory8(emu_ss, emu_bp,  0xA);
	emu_bh = 0x0;
	emu_dl = emu_get_memory8(emu_ss, emu_bp,  0xE);
	emu_dh = 0x0;
	emu_al = emu_get_memory8(emu_ds, emu_bx + emu_si, 0xA8);
	emu_cmpb(&emu_al, 0xFF);
	if (emu_al != 0xFF) {
		emu_get_memory8(emu_ds, emu_bx + emu_si, 0xA8) = 0xFF;
		emu_bl = emu_al;
		emu_lfp(&emu_es, &emu_di, &emu_get_memory16(emu_ds, emu_si, 0x12));
		emu_dl = emu_get_memory8(emu_es, emu_bx + emu_di, 0x0);
	}
l__18D8:
	emu_bl = emu_get_memory8(emu_ss, emu_bp,  0xC);
	emu_bh = 0x0;
	emu_bl = emu_get_memory8(emu_cs, emu_bx, 0x11F2);
	emu_cmpb(&emu_bl, 0xFF);
	if (emu_bl != 0xFF) {
		emu_addb(&emu_bl, emu_get_memory8(emu_ss, emu_bp,  0xA));
		emu_get_memory8(emu_cs, emu_bx, 0x131E) = emu_dl;
		emu_get_memory8(emu_ds, emu_bx + emu_si, 0xB8) = emu_dl;
	}
l__18F3:
	emu_al = emu_get_memory8(emu_ss, emu_bp,  0xC);
	emu_bl = emu_get_memory8(emu_ss, emu_bp,  0xA);
	emu_cmpb(&emu_al, 0x7);
	if (emu_al == 0x7) goto l__193B;
	emu_cmpb(&emu_al, 0x76);
	if (emu_al == 0x76) { /* Unresolved jump */ emu_ip = 0x1960; emu_last_cs = 0xAB00; emu_last_ip = 0x18FF; emu_last_length = 0x003B; emu_last_crc = 0xBCBD; emu_call(); return; }
	emu_cmpb(&emu_al, 0x77);
	if (emu_al == 0x77) { /* Unresolved jump */ emu_ip = 0x1962; emu_last_cs = 0xAB00; emu_last_ip = 0x1903; emu_last_length = 0x003B; emu_last_crc = 0xBCBD; emu_call(); return; }
	emu_cmpb(&emu_al, 0x74);
	if (emu_al == 0x74) goto l__1964;
	emu_cmpb(&emu_al, 0x75);
	if (emu_al == 0x75) goto l__1966;
	emu_cmpb(&emu_al, 0x6F);
	if (emu_al == 0x6F) goto l__1969;
	emu_cmpb(&emu_al, 0x6E);
	if (emu_al == 0x6E) goto l__196C;
	emu_cmpb(&emu_al, 0x73);
	if (emu_al == 0x73) { /* Unresolved jump */ emu_ip = 0x196F; emu_last_cs = 0xAB00; emu_last_ip = 0x1917; emu_last_length = 0x003B; emu_last_crc = 0xBCBD; emu_call(); return; }
l__1919:
	emu_testb(&emu_get_memory8(emu_cs, emu_bx, 0x13EE), 0x80);
	if ((emu_get_memory8(emu_cs, emu_bx, 0x13EE) & 0x80) != 0) goto l__1931;
	emu_bl = emu_get_memory8(emu_ds, emu_bx + emu_si, 0x68);
	emu_orb(&emu_bl, 0xB0);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_bx);
	emu_push(emu_cs);
	emu_push(0x192E); f__AB00_08CE_005F_AC14();
l__192E:
	emu_addw(&emu_sp, 0x6);
l__1931:
	emu_ax = 0x3;
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_pop(&emu_ds);
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
l__193B:
	emu_cx = emu_get_memory16(emu_ds, emu_si, 0x24);
	emu_cmpw(&emu_cx, 0x64);
	if (emu_cx == 0x64) goto l__1919;
	emu_ax = emu_dx;
	emu_mulw(&emu_ax, emu_cx);
	emu_cx = 0x64;
	emu_divw(&emu_ax, emu_cx);
	emu_dx = emu_ax;
	emu_ax = 0x7;
	emu_cmpw(&emu_dx, 0x7F);
	if (emu_dx >= 0x7F) {
		emu_dx = 0x7F;
	}
l__1959:
	emu_get_memory8(emu_cs, emu_bx, 0x131E) = emu_dl;
	goto l__1919;
l__1964:
	goto l__19C7;
l__1966:
	goto l__19EC;
l__1969:
	goto l__1A29;
l__196C:
	goto l__1A40;
l__19C7:
	emu_bx = 0x0;
	emu_cx = 0x4;
	emu_cmpw(&emu_get_memory16(emu_ds, emu_bx + emu_si, 0x60), 0xFFFF);
	if (emu_get_memory16(emu_ds, emu_bx + emu_si, 0x60) == 0xFFFF) goto l__19DB;
	emu_addw(&emu_bx, 0x2);
	if (--emu_cx != 0) { /* Unresolved jump */ emu_ip = 0x19CD; emu_last_cs = 0xAB00; emu_last_ip = 0x19D6; emu_last_length = 0x0014; emu_last_crc = 0xEAB7; emu_call(); }
	goto l__1931;
l__19DB:
	emu_get_memory16(emu_ds, emu_bx + emu_si, 0x60) = emu_dx;
	emu_shlw(&emu_bx, 0x1);
	emu_lfp(&emu_es, &emu_di, &emu_get_memory16(emu_ds, emu_si, 0xC));
	emu_get_memory16(emu_ds, emu_bx + emu_si, 0x50) = emu_di;
	emu_get_memory16(emu_ds, emu_bx + emu_si, 0x52) = emu_es;
	goto l__1931;
l__19EC:
	emu_cmpb(&emu_dl, 0x40);
	if ((int8)emu_dl >= (int8)0x40) goto l__19F4;
	goto l__1931;
l__19F4:
	emu_bx = 0x6;
	emu_cx = 0x4;
l__19FA:
	emu_cmpw(&emu_get_memory16(emu_ds, emu_bx + emu_si, 0x60), 0xFFFF);
	if (emu_get_memory16(emu_ds, emu_bx + emu_si, 0x60) != 0xFFFF) goto l__1A08;
	emu_subw(&emu_bx, 0x2);
	if (--emu_cx != 0) goto l__19FA;
	goto l__1931;
l__1A08:
	emu_cmpw(&emu_get_memory16(emu_ds, emu_bx + emu_si, 0x60), 0x0);
	if (emu_get_memory16(emu_ds, emu_bx + emu_si, 0x60) == 0x0) goto l__1A1B;
	emu_decw(&emu_get_memory16(emu_ds, emu_bx + emu_si, 0x60));
	if (emu_get_memory16(emu_ds, emu_bx + emu_si, 0x60) != 0) goto l__1A1B;
	emu_get_memory16(emu_ds, emu_bx + emu_si, 0x60) = 0xFFFF;
	goto l__1931;
l__1A1B:
	emu_shlw(&emu_bx, 0x1);
	emu_lfp(&emu_es, &emu_di, &emu_get_memory16(emu_ds, emu_bx + emu_si, 0x50));
	emu_get_memory16(emu_ds, emu_si, 0xC) = emu_di;
	emu_get_memory16(emu_ds, emu_si, 0xE) = emu_es;
	goto l__1931;
l__1A29:
	emu_orb(&emu_get_memory8(emu_cs, emu_bx, 0x13EE), 0x40);
	emu_cmpb(&emu_dl, 0x40);
	if ((int8)emu_dl < (int8)0x40) { /* Unresolved jump */ emu_ip = 0x1A37; emu_last_cs = 0xAB00; emu_last_ip = 0x1A32; emu_last_length = 0x000E; emu_last_crc = 0x9CBA; emu_call(); return; }
	goto l__1931;
l__1A40:
	emu_di = emu_bx;
	emu_cmpb(&emu_dl, 0x40);
	if ((int8)emu_dl < (int8)0x40) { /* Unresolved jump */ emu_ip = 0x1A68; emu_last_cs = 0xAB00; emu_last_ip = 0x1A45; emu_last_length = 0x0015; emu_last_crc = 0xED40; emu_call(); return; }
	emu_push(emu_ax);
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_get_memory16(emu_ss, emu_bp,  0x2) = 0x0;
	emu_pop(&emu_bp);
	emu_push(emu_cs);
	emu_push(0x1A55); f__AB00_281A_003D_9A17();
l__1A55:
	emu_addw(&emu_sp, 0x2);
	emu_decw(&emu_ax);
	emu_cmpw(&emu_ax, 0xFFFF);
	if (emu_ax == 0xFFFF) {
		emu_ax = emu_di;
	}
l__1A60:
	emu_bx = emu_di;
	emu_get_memory8(emu_ds, emu_bx + emu_si, 0x68) = emu_al;
	goto l__1931;
}

/**
 * Decompiled function f__AB00_1A90_002B_D292()
 *
 * @name f__AB00_1A90_002B_D292
 * @implements AB00:1A90:002B:D292 ()
 * @implements AB00:1ABB:0080:1D4F
 * @implements AB00:1ABE:007D:13F6
 * @implements AB00:1AC4:0077:7B2B
 * @implements AB00:1B3B:000D:FDDF
 * @implements AB00:1B3E:000A:299B
 *
 * Called From: AB00:1E93:004D:4A38
 */
void f__AB00_1A90_002B_D292()
{
l__1A90:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x6);
	emu_push(emu_ds);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_lfp(&emu_ds, &emu_si, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_lfp(&emu_es, &emu_di, &emu_get_memory16(emu_ds, emu_si, 0xC));
	emu_ax = emu_get_memory16(emu_es, emu_di, 0x0);
	emu_andb(&emu_al, 0xF);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ax;
	emu_al = emu_get_memory8(emu_es, emu_di, 0x2);
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_ax = emu_di;
	emu_addw(&emu_di, 0x3);
	emu_bx = 0x0;
	emu_dx = 0x0;
	goto l__1AC4;
l__1ABB:
	emu_cx = 0x7;
l__1ABE:
	emu_shlw(&emu_bx, 0x1);
	emu_rclw(&emu_dx, 0x1);
	if (--emu_cx != 0) goto l__1ABE;
l__1AC4:
	emu_cl = emu_get_memory8(emu_es, emu_di, 0x0);
	emu_incw(&emu_di);
	emu_ch = emu_cl;
	emu_andb(&emu_cl, 0x7F);
	emu_orb(&emu_bl, emu_cl);
	emu_orb(&emu_ch, emu_ch);
	if (emu_flags.sf) goto l__1ABB;
	emu_subw(&emu_di, emu_ax);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_di;
	emu_di = emu_get_memory16(emu_ss, emu_bp, -0x2);
	emu_andw(&emu_di, 0xF);
	emu_testb(&emu_get_memory8(emu_cs, emu_di, 0x13EE), 0x80);
	if ((emu_get_memory8(emu_cs, emu_di, 0x13EE) & 0x80) != 0) goto l__1B3E;
	emu_ax = emu_ds;
	emu_es = emu_ax;
	emu_movw(&emu_di, emu_si + 0x148);
	emu_cx = 0x20;
	emu_al = 0xFF;
	emu_repne_scasb();
	emu_ax = emu_di;
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x1B00; emu_last_cs = 0xAB00; emu_last_ip = 0x1AF7; emu_last_length = 0x0077; emu_last_crc = 0x7B2B; emu_call(); return; }
	emu_incw(&emu_get_memory16(emu_ds, emu_si, 0x20));
	emu_movw(&emu_ax, emu_si + 0x149);
	emu_subw(&emu_di, emu_ax);
	emu_ax = emu_bx;
	emu_bx = emu_di;
	emu_subw(&emu_ax, 0x1);
	emu_sbbw(&emu_dx, 0x0);
	emu_cx = emu_get_memory16(emu_ss, emu_bp, -0x2);
	emu_get_memory8(emu_ds, emu_bx + emu_si, 0x148) = emu_cl;
	emu_get_memory8(emu_ds, emu_bx + emu_si, 0x168) = emu_ch;
	emu_shlw(&emu_bx, 0x1);
	emu_get_memory16(emu_ds, emu_bx + emu_si, 0x188) = emu_ax;
	emu_get_memory16(emu_ds, emu_bx + emu_si, 0x1C8) = emu_dx;
	emu_bl = emu_cl;
	emu_bh = 0x0;
	emu_bl = emu_get_memory8(emu_ds, emu_bx + emu_si, 0x68);
	emu_incb(&emu_get_memory8(emu_cs, emu_bx, 0x13DE));
	emu_orb(&emu_bl, 0x90);
	emu_cl = emu_ch;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cx);
	emu_push(emu_bx);
	emu_push(emu_cs);
	emu_push(0x1B3B); f__AB00_08CE_005F_AC14();
l__1B3B:
	emu_addw(&emu_sp, 0x6);
l__1B3E:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x6);
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
 * Decompiled function f__AB00_1B48_0023_740C()
 *
 * @name f__AB00_1B48_0023_740C
 * @implements AB00:1B48:0023:740C ()
 * @implements AB00:1B74:002A:F753
 * @implements AB00:1B9E:000A:2D9B
 * @implements AB00:1BA8:0006:BA32
 * @implements AB00:1BAE:0021:22BB
 * @implements AB00:1BD4:0021:0996
 * @implements AB00:1BF5:0035:43FD
 * @implements AB00:1C2A:001F:6CAB
 * @implements AB00:1C3A:000F:7AF4
 *
 * Called From: AB00:1EB2:0006:3994
 */
void f__AB00_1B48_0023_740C()
{
l__1B48:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x4);
	emu_push(emu_ds);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_lfp(&emu_ds, &emu_si, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_lfp(&emu_es, &emu_di, &emu_get_memory16(emu_ds, emu_si, 0xC));
	emu_al = emu_get_memory8(emu_es, emu_di, 0x1);
	emu_get_memory8(emu_ss, emu_bp, -0x4) = emu_al;
	emu_bx = emu_di;
	emu_addw(&emu_di, 0x2);
	emu_ax = 0x0;
	emu_dx = 0x0;
	goto l__1B74;
l__1B74:
	emu_cl = emu_get_memory8(emu_es, emu_di, 0x0);
	emu_incw(&emu_di);
	emu_ch = emu_cl;
	emu_andb(&emu_cl, 0x7F);
	emu_orb(&emu_al, emu_cl);
	emu_orb(&emu_ch, emu_ch);
	if (emu_flags.sf) { /* Unresolved jump */ emu_ip = 0x1B6B; emu_last_cs = 0xAB00; emu_last_ip = 0x1B81; emu_last_length = 0x002A; emu_last_crc = 0xF753; emu_call(); return; }
	emu_cx = emu_di;
	emu_subw(&emu_cx, emu_bx);
	emu_addw(&emu_ax, emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ax;
	emu_al = emu_get_memory8(emu_ss, emu_bp, -0x4);
	emu_cmpb(&emu_al, 0x2F);
	if (emu_al == 0x2F) goto l__1BA8;
	emu_cmpb(&emu_al, 0x58);
	if (emu_al == 0x58) goto l__1BD4;
	emu_cmpb(&emu_al, 0x51);
	if (emu_al != 0x51) goto l__1B9E;
	goto l__1C2A;
l__1B9E:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x2);
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_pop(&emu_ds);
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
l__1BA8:
	emu_push(emu_ds);
	emu_push(emu_si);
	emu_push(emu_cs);
	emu_push(0x1BAE); f__AB00_16B7_0039_7EF1();
l__1BAE:
	emu_addw(&emu_sp, 0x4);
	emu_get_memory16(emu_ds, emu_si, 0x1A) = 0x2;
	emu_cmpw(&emu_get_memory16(emu_ds, emu_si, 0x1C), 0x0);
	if (emu_get_memory16(emu_ds, emu_si, 0x1C) == 0x0) goto l__1B9E;
	emu_push(emu_get_memory16(emu_cs, 0x00, 0x1314));
	emu_push(emu_ax);
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_get_memory16(emu_ss, emu_bp,  0x2) = 0x0;
	emu_pop(&emu_bp);
	emu_push(emu_cs);
	emu_push(0x1BCF); f__AB00_2336_002C_4FDC();
	/* Unresolved jump */ emu_ip = 0x1BCF; emu_last_cs = 0xAB00; emu_last_ip = 0x1BCF; emu_last_length = 0x0021; emu_last_crc = 0x22BB; emu_call();
l__1BD4:
	emu_ch = 0x0;
	emu_cl = emu_get_memory8(emu_es, emu_di, 0x0);
	emu_get_memory16(emu_ds, emu_si, 0x42) = emu_cx;
	emu_cl = emu_get_memory8(emu_es, emu_di, 0x1);
	emu_subw(&emu_cx, 0x2);
	if (!emu_flags.cf) goto l__1BF5;
	emu_negw(&emu_cx, emu_cx);
	emu_ax = 0x8D5;
	emu_dx = 0x2;
	emu_shrw(&emu_dx, 0x1);
	emu_rcrw(&emu_ax, 0x1);
	if (--emu_cx != 0) { /* Unresolved jump */ emu_ip = 0x1BED; emu_last_cs = 0xAB00; emu_last_ip = 0x1BF1; emu_last_length = 0x0021; emu_last_crc = 0x0996; emu_call(); }
	/* Unresolved jump */ emu_ip = 0x1C0A; emu_last_cs = 0xAB00; emu_last_ip = 0x1BF3; emu_last_length = 0x0021; emu_last_crc = 0x0996; emu_call();
l__1BF5:
	emu_ax = 0x1;
	emu_shlw(&emu_ax, emu_cl);
	emu_cx = emu_ax;
	emu_ax = 0x0;
	emu_dx = 0x0;
	emu_addw(&emu_ax, 0x8D5);
	emu_adcw(&emu_dx, 0x2);
	if (--emu_cx != 0) { /* Unresolved jump */ emu_ip = 0x1C02; emu_last_cs = 0xAB00; emu_last_ip = 0x1C08; emu_last_length = 0x0035; emu_last_crc = 0x43FD; emu_call(); }
	emu_get_memory16(emu_ds, emu_si, 0x44) = emu_ax;
	emu_get_memory16(emu_ds, emu_si, 0x46) = emu_dx;
	emu_ax = 0x0;
	emu_dx = 0x0;
	emu_cx = 0x1;
	emu_addw(&emu_ax, emu_get_memory16(emu_ds, emu_si, 0x44));
	emu_adcw(&emu_dx, emu_get_memory16(emu_ds, emu_si, 0x46));
	if (--emu_cx != 0) { /* Unresolved jump */ emu_ip = 0x1C19; emu_last_cs = 0xAB00; emu_last_ip = 0x1C1F; emu_last_length = 0x0035; emu_last_crc = 0x43FD; emu_call(); }
	emu_get_memory16(emu_ds, emu_si, 0x48) = emu_ax;
	emu_get_memory16(emu_ds, emu_si, 0x4A) = emu_dx;
	goto l__1B9E;
l__1C2A:
	emu_dh = 0x0;
	emu_dl = emu_get_memory8(emu_es, emu_di, 0x0);
	emu_ah = emu_get_memory8(emu_es, emu_di, 0x1);
	emu_al = emu_get_memory8(emu_es, emu_di, 0x2);
	emu_cx = 0x4;
l__1C3A:
	emu_shlw(&emu_ax, 0x1);
	emu_rclw(&emu_dx, 0x1);
	if (--emu_cx != 0) goto l__1C3A;
	emu_get_memory16(emu_ds, emu_si, 0x4C) = emu_ax;
	emu_get_memory16(emu_ds, emu_si, 0x4E) = emu_dx;
	goto l__1B9E;
}

/**
 * Decompiled function f__AB00_1C49_0022_C4C7()
 *
 * @name f__AB00_1C49_0022_C4C7
 * @implements AB00:1C49:0022:C4C7 ()
 * @implements AB00:1C74:0022:FCF9
 * @implements AB00:1C96:000D:39DE
 *
 * Called From: AB00:1EA5:000B:73D5
 */
void f__AB00_1C49_0022_C4C7()
{
l__1C49:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x4);
	emu_push(emu_ds);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_lfp(&emu_ds, &emu_si, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_lfp(&emu_es, &emu_di, &emu_get_memory16(emu_ds, emu_si, 0xC));
	emu_al = emu_get_memory8(emu_es, emu_di, 0x0);
	emu_ah = 0x0;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_bx = emu_di;
	emu_incw(&emu_di);
	emu_ax = 0x0;
	emu_dx = 0x0;
	goto l__1C74;
l__1C74:
	emu_cl = emu_get_memory8(emu_es, emu_di, 0x0);
	emu_incw(&emu_di);
	emu_ch = emu_cl;
	emu_andb(&emu_cl, 0x7F);
	emu_orb(&emu_al, emu_cl);
	emu_orb(&emu_ch, emu_ch);
	if (emu_flags.sf) { /* Unresolved jump */ emu_ip = 0x1C6B; emu_last_cs = 0xAB00; emu_last_ip = 0x1C81; emu_last_length = 0x0022; emu_last_crc = 0xFCF9; emu_call(); return; }
	emu_cx = emu_di;
	emu_subw(&emu_cx, emu_bx);
	emu_addw(&emu_cx, emu_ax);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_cx;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_es);
	emu_push(emu_di);
	emu_push(emu_cs);
	emu_push(0x1C96); f__AB00_074E_001C_6D6A();
l__1C96:
	emu_addw(&emu_sp, 0x8);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x2);
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
 * Decompiled function f__AB00_1CA3_0042_C43A()
 *
 * @name f__AB00_1CA3_0042_C43A
 * @implements AB00:1CA3:0042:C43A ()
 * @implements AB00:1CE5:0009:FF94
 *
 * Called From: AB00:272F:0047:41F4
 */
void f__AB00_1CA3_0042_C43A()
{
l__1CA3:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_ds);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_dx = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_bx = emu_get_memory16(emu_ss, emu_bp,  0xA);
	emu_cx = emu_get_memory16(emu_ss, emu_bp,  0xC);
	emu_orw(&emu_cx, emu_cx);
	if (emu_cx != 0) { /* Unresolved jump */ emu_ip = 0x1CC1; emu_last_cs = 0xAB00; emu_last_ip = 0x1CB7; emu_last_length = 0x0042; emu_last_crc = 0xC43A; emu_call(); return; }
	emu_orw(&emu_dx, emu_dx);
	if (emu_dx == 0) goto l__1CE5;
	emu_orw(&emu_bx, emu_bx);
	if (emu_bx == 0) goto l__1CE5;
	emu_bp = emu_cx;
	emu_cx = 0x20;
	emu_xorw(&emu_di, emu_di);
	emu_xorw(&emu_si, emu_si);
	emu_shlw(&emu_ax, 0x1);
	emu_rclw(&emu_dx, 0x1);
	emu_rclw(&emu_si, 0x1);
	emu_rclw(&emu_di, 0x1);
	emu_cmpw(&emu_di, emu_bp);
	if (emu_di < emu_bp) { /* Unresolved jump */ emu_ip = 0x1CE1; emu_last_cs = 0xAB00; emu_last_ip = 0x1CD4; emu_last_length = 0x0042; emu_last_crc = 0xC43A; emu_call(); return; }
	if (emu_di > emu_bp) { /* Unresolved jump */ emu_ip = 0x1CDC; emu_last_cs = 0xAB00; emu_last_ip = 0x1CD6; emu_last_length = 0x0042; emu_last_crc = 0xC43A; emu_call(); return; }
	emu_cmpw(&emu_si, emu_bx);
	if (emu_si < emu_bx) { /* Unresolved jump */ emu_ip = 0x1CE1; emu_last_cs = 0xAB00; emu_last_ip = 0x1CDA; emu_last_length = 0x0042; emu_last_crc = 0xC43A; emu_call(); return; }
	emu_subw(&emu_si, emu_bx);
	emu_sbbw(&emu_di, emu_bp);
	emu_incw(&emu_ax);
	if (--emu_cx != 0) { /* Unresolved jump */ emu_ip = 0x1CCA; emu_last_cs = 0xAB00; emu_last_ip = 0x1CE1; emu_last_length = 0x0042; emu_last_crc = 0xC43A; emu_call(); }
	/* Unresolved jump */ emu_ip = 0x1CE9; emu_last_cs = 0xAB00; emu_last_ip = 0x1CE3; emu_last_length = 0x0042; emu_last_crc = 0xC43A; emu_call();
l__1CE5:
	emu_divw(&emu_ax, emu_bx);
	emu_xorw(&emu_dx, emu_dx);
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_pop(&emu_ds);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__AB00_1CEE_0015_5BCF()
 *
 * @name f__AB00_1CEE_0015_5BCF
 * @implements AB00:1CEE:0015:5BCF ()
 * @implements AB00:1D03:001B:DA10
 * @implements AB00:1D1E:0097:EEDC
 * @implements AB00:1D34:0081:3E00
 * @implements AB00:1D60:0055:C957
 * @implements AB00:1D7B:003A:842E
 * @implements AB00:1D87:002E:ECFA
 * @implements AB00:1D8C:0029:452B
 * @implements AB00:1D94:0021:39BD
 * @implements AB00:1D9C:0019:9D99
 * @implements AB00:1DA4:0011:D913
 * @implements AB00:1DA9:000C:030C
 * @implements AB00:1DAE:0007:F178
 * @implements AB00:1DB5:0003:DDB6
 * @implements AB00:1DB8:0003:9D87
 * @implements AB00:1DBB:0003:DD02
 * @implements AB00:1DBE:0052:EEB8
 * @implements AB00:1DC7:0049:436D
 * @implements AB00:1DCD:0043:6FBB
 * @implements AB00:1E10:0010:24D9
 * @implements AB00:1E20:000A:087B
 * @implements AB00:1E2A:001F:7BEA
 * @implements AB00:1E49:004D:4A38
 * @implements AB00:1E52:0044:8601
 * @implements AB00:1E96:0007:4D97
 * @implements AB00:1E9D:000B:73D5
 * @implements AB00:1EA8:0007:5497
 * @implements AB00:1EAF:0006:3994
 * @implements AB00:1EB5:0007:5A17
 * @implements AB00:1EBC:0009:6A86
 * @implements AB00:1EC5:0008:44CA
 * @implements AB00:1ECD:0017:14AA
 * @implements AB00:1EE4:001D:CD49
 * @implements AB00:1EEF:0012:65A2
 * @implements AB00:1F01:000F:5F7D
 * @implements AB00:1F04:000C:6A6C
 * @implements AB00:1F10:0003:2204
 * @implements AB00:1F13:0026:8EFF
 * @implements AB00:1F23:0016:6BBF
 * @implements AB00:1F39:0012:A442
 * @implements AB00:1F4B:000E:5AB4
 * @implements AB00:1F51:0008:2E97
 * @implements AB00:1F53:0006:A411
 * @implements AB00:1F56:0003:A230
 * @implements AB00:1F59:0026:3A7F
 * @implements AB00:1F69:0016:DCED
 * @implements AB00:1F7F:0012:7B88
 * @implements AB00:1F91:0011:2B29
 * @implements AB00:1F97:000B:AF47
 * @implements AB00:1F99:0009:FF96
 * @implements AB00:1FA2:0006:29BD
 * @implements AB00:1FA5:0003:639F
 *
 * Called From: 2756:059D:0019:7966
 */
void f__AB00_1CEE_0015_5BCF()
{
l__1CEE:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x2);
	emu_push(emu_ds);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_cld();
	emu_cmpw(&emu_get_memory16(emu_cs, 0x00, 0x1316), 0x0);
	if (emu_get_memory16(emu_cs, 0x00, 0x1316) == 0x0) goto l__1D1E;
	goto l__1DAE;
l__1D03:
	emu_subw(&emu_ax, emu_get_memory16(emu_ds, emu_si, 0x4C));
	emu_sbbw(&emu_dx, emu_get_memory16(emu_ds, emu_si, 0x4E));
	emu_incw(&emu_get_memory16(emu_ds, emu_si, 0x3E));
	emu_cx = emu_get_memory16(emu_ds, emu_si, 0x3E);
	emu_cmpw(&emu_cx, emu_get_memory16(emu_ds, emu_si, 0x42));
	if (emu_cx >= emu_get_memory16(emu_ds, emu_si, 0x42)) {
		emu_get_memory16(emu_ds, emu_si, 0x3E) = 0x0;
		emu_incw(&emu_get_memory16(emu_ds, emu_si, 0x40));
	}
	goto l__1D7B;
l__1D1E:
	emu_incw(&emu_get_memory16(emu_cs, 0x00, 0x1316));
	emu_get_memory16(emu_cs, 0x00, 0x1314) = 0xFFFC;
	emu_cx = emu_get_memory16(emu_cs, 0x00, 0x1312);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_cx;
	if (emu_cx == 0) goto l__1DA9;
l__1D34:
	emu_addw(&emu_get_memory16(emu_cs, 0x00, 0x1314), 0x4);
	emu_di = emu_get_memory16(emu_cs, 0x00, 0x1314);
	emu_cmpw(&emu_get_memory16(emu_cs, emu_di, 0x12F4), 0x0);
	if (emu_get_memory16(emu_cs, emu_di, 0x12F4) == 0x0) goto l__1D34;
	emu_lfp(&emu_ds, &emu_si, &emu_get_memory16(emu_cs, emu_di, 0x12F2));
	emu_cmpw(&emu_get_memory16(emu_ds, emu_si, 0x1A), 0x1);
	if (emu_get_memory16(emu_ds, emu_si, 0x1A) != 0x1) goto l__1DA4;
	emu_ax = emu_get_memory16(emu_ds, emu_si, 0x30);
	emu_addw(&emu_ax, emu_get_memory16(emu_ds, emu_si, 0x32));
	emu_get_memory16(emu_ds, emu_si, 0x30) = emu_ax;
	emu_subw(&emu_ax, 0x64);
	if ((emu_flags.sf != emu_flags.of)) goto l__1D94;
l__1D60:
	emu_get_memory16(emu_ds, emu_si, 0x30) = emu_ax;
	emu_ax = emu_get_memory16(emu_ds, emu_si, 0x48);
	emu_dx = emu_get_memory16(emu_ds, emu_si, 0x4A);
	emu_addw(&emu_ax, emu_get_memory16(emu_ds, emu_si, 0x44));
	emu_adcw(&emu_dx, emu_get_memory16(emu_ds, emu_si, 0x46));
	emu_cmpw(&emu_dx, emu_get_memory16(emu_ds, emu_si, 0x4E));
	if ((int16)emu_dx > (int16)emu_get_memory16(emu_ds, emu_si, 0x4E)) goto l__1D03;
	if ((int16)emu_dx >= (int16)emu_get_memory16(emu_ds, emu_si, 0x4E)) {
		emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, emu_si, 0x4C));
		if ((int16)emu_ax >= (int16)emu_get_memory16(emu_ds, emu_si, 0x4C)) goto l__1D03;
	}
l__1D7B:
	emu_get_memory16(emu_ds, emu_si, 0x48) = emu_ax;
	emu_get_memory16(emu_ds, emu_si, 0x4A) = emu_dx;
	emu_cmpw(&emu_get_memory16(emu_ds, emu_si, 0x20), 0x0);
	if (emu_get_memory16(emu_ds, emu_si, 0x20) != 0x0) goto l__1DBE;
l__1D87:
	emu_decw(&emu_get_memory16(emu_ds, emu_si, 0x1E));
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) goto l__1DBB;
l__1D8C:
	emu_ax = emu_get_memory16(emu_ds, emu_si, 0x30);
	emu_subw(&emu_ax, 0x64);
	if (!(emu_flags.sf != emu_flags.of)) goto l__1D60;
l__1D94:
	emu_ax = emu_get_memory16(emu_ds, emu_si, 0x32);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, emu_si, 0x34));
	if (emu_ax != emu_get_memory16(emu_ds, emu_si, 0x34)) goto l__1DB5;
l__1D9C:
	emu_ax = emu_get_memory16(emu_ds, emu_si, 0x24);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, emu_si, 0x26));
	if (emu_ax != emu_get_memory16(emu_ds, emu_si, 0x26)) goto l__1DB8;
l__1DA4:
	emu_decw(&emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_get_memory16(emu_ss, emu_bp, -0x2) != 0) goto l__1D34;
l__1DA9:
	emu_decw(&emu_get_memory16(emu_cs, 0x00, 0x1316));
l__1DAE:
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_pop(&emu_ds);
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
l__1DB5:
	goto l__1F13;
l__1DB8:
	goto l__1F59;
l__1DBB:
	goto l__1E49;
l__1DBE:
	emu_movw(&emu_di, emu_si + 0x148);
	emu_dx = emu_di;
	emu_cx = 0x20;
l__1DC7:
	emu_ax = emu_ds;
	emu_es = emu_ax;
	emu_al = 0xFF;
l__1DCD:
	emu_rep_scasb();
	if (emu_flags.zf) goto l__1D87;
	emu_bx = emu_di;
	emu_subw(&emu_bx, emu_dx);
	emu_decw(&emu_bx);
	emu_shlw(&emu_bx, 0x1);
	emu_subw(&emu_get_memory16(emu_ds, emu_bx + emu_si, 0x188), 0x1);
	emu_sbbw(&emu_get_memory16(emu_ds, emu_bx + emu_si, 0x1C8), 0x0);
	if (!(emu_flags.sf != emu_flags.of)) goto l__1DCD;
	emu_push(emu_cx);
	emu_shrw(&emu_bx, 0x1);
	emu_al = 0xFF;
	emu_xchgb(&emu_get_memory8(emu_ds, emu_bx + emu_si, 0x148), &emu_al);
	emu_cl = emu_get_memory8(emu_ds, emu_bx + emu_si, 0x168);
	emu_bl = emu_al;
	emu_bh = 0x0;
	emu_bl = emu_get_memory8(emu_ds, emu_bx + emu_si, 0x68);
	emu_decb(&emu_get_memory8(emu_cs, emu_bx, 0x13DE));
	emu_orb(&emu_bl, 0x80);
	emu_push(emu_ax);
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_get_memory16(emu_ss, emu_bp,  0x2) = 0x0;
	emu_pop(&emu_bp);
	emu_push(emu_cx);
	emu_push(emu_bx);
	emu_push(emu_cs);
	emu_push(0x1E10); f__AB00_08CE_005F_AC14();
l__1E10:
	emu_addw(&emu_sp, 0x6);
	emu_pop(&emu_cx);
	emu_movw(&emu_dx, emu_si + 0x148);
	emu_decw(&emu_get_memory16(emu_ds, emu_si, 0x20));
	if (emu_get_memory16(emu_ds, emu_si, 0x20) != 0) goto l__1DC7;
	goto l__1D87;
l__1E20:
	emu_addw(&emu_get_memory16(emu_ds, emu_si, 0xC), 0x1);
	emu_get_memory16(emu_ds, emu_si, 0x1E) = emu_ax;
	goto l__1D8C;
l__1E2A:
	emu_push(emu_ax);
	emu_push(emu_bx);
	emu_ax = emu_es;
	emu_bx = emu_di;
	emu_shrw(&emu_bx, 0x1);
	emu_shrw(&emu_bx, 0x1);
	emu_shrw(&emu_bx, 0x1);
	emu_shrw(&emu_bx, 0x1);
	emu_addw(&emu_ax, emu_bx);
	emu_es = emu_ax;
	emu_andw(&emu_di, 0xF);
	emu_pop(&emu_bx);
	emu_pop(&emu_ax);
	emu_get_memory16(emu_ds, emu_si, 0xE) = emu_es;
	emu_get_memory16(emu_ds, emu_si, 0xC) = emu_di;
	goto l__1E52;
l__1E49:
	emu_lfp(&emu_es, &emu_di, &emu_get_memory16(emu_ds, emu_si, 0xC));
	emu_cmpw(&emu_di, 0x8000);
	if (emu_di >= 0x8000) goto l__1E2A;
l__1E52:
	emu_al = emu_get_memory8(emu_es, emu_di, 0x0);
	emu_ah = 0x0;
	emu_cmpw(&emu_ax, 0x80);
	if (emu_ax < 0x80) goto l__1E20;
	emu_bx = emu_ax;
	emu_andw(&emu_ax, 0xF0);
	emu_andw(&emu_bx, 0xF);
	emu_cl = emu_get_memory8(emu_es, emu_di, 0x1);
	emu_dl = emu_get_memory8(emu_es, emu_di, 0x2);
	emu_cmpw(&emu_ax, 0xF0);
	if (emu_ax >= 0xF0) goto l__1E9D;
	emu_cmpw(&emu_ax, 0xE0);
	if (emu_ax >= 0xE0) goto l__1ECD;
	emu_di = 0x2;
	emu_cmpw(&emu_ax, 0xD0);
	if (emu_ax >= 0xD0) goto l__1EEF;
	emu_cmpw(&emu_ax, 0xC0);
	if (emu_ax >= 0xC0) goto l__1EE4;
	emu_cmpw(&emu_ax, 0xB0);
	if (emu_ax >= 0xB0) goto l__1EBC;
	emu_di = 0x3;
	emu_cmpw(&emu_ax, 0xA0);
	if (emu_ax >= 0xA0) goto l__1EEF;
	emu_push(emu_ds);
	emu_push(emu_si);
	emu_push(emu_cs);
	emu_push(0x1E96); f__AB00_1A90_002B_D292();
l__1E96:
	emu_addw(&emu_sp, 0x4);
	emu_di = emu_ax;
	goto l__1F04;
l__1E9D:
	emu_cmpb(&emu_bl, 0xF);
	if (emu_bl == 0xF) goto l__1EAF;
	emu_push(emu_ds);
	emu_push(emu_si);
	emu_push(emu_cs);
	emu_push(0x1EA8); f__AB00_1C49_0022_C4C7();
l__1EA8:
	emu_addw(&emu_sp, 0x4);
	emu_di = emu_ax;
	goto l__1F04;
l__1EAF:
	emu_push(emu_ds);
	emu_push(emu_si);
	emu_push(emu_cs);
	emu_push(0x1EB5); f__AB00_1B48_0023_740C();
l__1EB5:
	emu_addw(&emu_sp, 0x4);
	emu_di = emu_ax;
	goto l__1F04;
l__1EBC:
	emu_push(emu_dx);
	emu_push(emu_cx);
	emu_push(emu_bx);
	emu_push(emu_ds);
	emu_push(emu_si);
	emu_push(emu_cs);
	emu_push(0x1EC5); f__AB00_18AC_0082_307C();
l__1EC5:
	emu_addw(&emu_sp, 0xA);
	emu_di = 0x3;
	goto l__1F04;
l__1ECD:
	emu_get_memory8(emu_ds, emu_bx + emu_si, 0x88) = emu_cl;
	emu_get_memory8(emu_ds, emu_bx + emu_si, 0x98) = emu_dl;
	emu_get_memory8(emu_cs, emu_bx, 0x13BE) = emu_cl;
	emu_get_memory8(emu_cs, emu_bx, 0x13CE) = emu_dl;
	emu_di = 0x3;
	goto l__1EEF;
l__1EE4:
	emu_get_memory8(emu_ds, emu_bx + emu_si, 0x78) = emu_cl;
	emu_get_memory8(emu_cs, emu_bx, 0x13AE) = emu_cl;
	emu_di = 0x2;
l__1EEF:
	emu_testb(&emu_get_memory8(emu_cs, emu_bx, 0x13EE), 0x80);
	if ((emu_get_memory8(emu_cs, emu_bx, 0x13EE) & 0x80) != 0) goto l__1F04;
	emu_orb(&emu_al, emu_get_memory8(emu_ds, emu_bx + emu_si, 0x68));
	emu_push(emu_dx);
	emu_push(emu_cx);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x1F01); f__AB00_08CE_005F_AC14();
l__1F01:
	emu_addw(&emu_sp, 0x6);
l__1F04:
	emu_addw(&emu_get_memory16(emu_ds, emu_si, 0xC), emu_di);
	emu_cmpw(&emu_get_memory16(emu_ds, emu_si, 0x1A), 0x1);
	if (emu_get_memory16(emu_ds, emu_si, 0x1A) != 0x1) goto l__1F10;
	goto l__1E49;
l__1F10:
	goto l__1DA4;
l__1F13:
	emu_pushf();
	emu_ax = emu_get_memory16(emu_ds, emu_si, 0x36);
	emu_dx = emu_get_memory16(emu_ds, emu_si, 0x38);
	emu_addw(&emu_ax, 0x53);
	emu_adcw(&emu_dx, 0x0);
	emu_cx = 0xFFFF;
l__1F23:
	emu_incw(&emu_cx);
	emu_get_memory16(emu_ds, emu_si, 0x36) = emu_ax;
	emu_get_memory16(emu_ds, emu_si, 0x38) = emu_dx;
	emu_subw(&emu_ax, emu_get_memory16(emu_ds, emu_si, 0x3A));
	emu_sbbw(&emu_dx, emu_get_memory16(emu_ds, emu_si, 0x3C));
	if (!(emu_flags.sf != emu_flags.of)) goto l__1F23;
	emu_orb(&emu_bh, 0x0);
	emu_push(emu_cs);
	emu_push(0x1F39); f__AB00_1F33_0001_6780();
l__1F39:
	if (emu_cx == 0) goto l__1F56;
	emu_bx = emu_get_memory16(emu_ds, emu_si, 0x34);
	emu_ax = emu_get_memory16(emu_ds, emu_si, 0x32);
	if ((emu_flags.sf != emu_flags.of)) goto l__1F4B;
	emu_subw(&emu_ax, emu_cx);
	emu_cmpw(&emu_ax, emu_bx);
	if ((int16)emu_ax >= (int16)emu_bx) goto l__1F53;
	goto l__1F51;
l__1F4B:
	emu_addw(&emu_ax, emu_cx);
	emu_cmpw(&emu_ax, emu_bx);
	if ((int16)emu_ax <= (int16)emu_bx) goto l__1F53;
l__1F51:
	emu_ax = emu_bx;
l__1F53:
	emu_get_memory16(emu_ds, emu_si, 0x32) = emu_ax;
l__1F56:
	goto l__1D9C;
l__1F59:
	emu_pushf();
	emu_ax = emu_get_memory16(emu_ds, emu_si, 0x28);
	emu_dx = emu_get_memory16(emu_ds, emu_si, 0x2A);
	emu_addw(&emu_ax, 0x53);
	emu_adcw(&emu_dx, 0x0);
	emu_cx = 0xFFFF;
l__1F69:
	emu_incw(&emu_cx);
	emu_get_memory16(emu_ds, emu_si, 0x28) = emu_ax;
	emu_get_memory16(emu_ds, emu_si, 0x2A) = emu_dx;
	emu_subw(&emu_ax, emu_get_memory16(emu_ds, emu_si, 0x2C));
	emu_sbbw(&emu_dx, emu_get_memory16(emu_ds, emu_si, 0x2E));
	if (!(emu_flags.sf != emu_flags.of)) goto l__1F69;
	emu_orb(&emu_bh, 0x0);
	emu_push(emu_cs);
	emu_push(0x1F7F); f__AB00_1F79_0001_6780();
l__1F7F:
	if (emu_cx == 0) goto l__1FA5;
	emu_bx = emu_get_memory16(emu_ds, emu_si, 0x26);
	emu_ax = emu_get_memory16(emu_ds, emu_si, 0x24);
	if ((emu_flags.sf != emu_flags.of)) goto l__1F91;
	emu_subw(&emu_ax, emu_cx);
	emu_cmpw(&emu_ax, emu_bx);
	if ((int16)emu_ax >= (int16)emu_bx) goto l__1F99;
	goto l__1F97;
l__1F91:
	emu_addw(&emu_ax, emu_cx);
	emu_cmpw(&emu_ax, emu_bx);
	if ((int16)emu_ax <= (int16)emu_bx) goto l__1F99;
l__1F97:
	emu_ax = emu_bx;
l__1F99:
	emu_get_memory16(emu_ds, emu_si, 0x24) = emu_ax;
	emu_push(emu_ds);
	emu_push(emu_si);
	emu_push(emu_cs);
	emu_push(0x1FA2); f__AB00_184D_004F_7B67();
l__1FA2:
	emu_addw(&emu_sp, 0x4);
l__1FA5:
	goto l__1DA4;
}

/**
 * Decompiled function f__AB00_1F33_0001_6780()
 *
 * @name f__AB00_1F33_0001_6780
 * @implements AB00:1F33:0001:6780 ()
 *
 * Called From: AB00:1F36:0016:6BBF
 */
void f__AB00_1F33_0001_6780()
{
l__1F33:

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	emu_popf();
	return;
}

/**
 * Decompiled function f__AB00_1F79_0001_6780()
 *
 * @name f__AB00_1F79_0001_6780
 * @implements AB00:1F79:0001:6780 ()
 *
 * Called From: AB00:1F7C:0026:3A7F
 * Called From: AB00:1F7C:0016:DCED
 */
void f__AB00_1F79_0001_6780()
{
l__1F79:

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	emu_popf();
	return;
}

/**
 * Decompiled function f__AB00_1FA8_0072_8B95()
 *
 * @name f__AB00_1FA8_0072_8B95
 * @implements AB00:1FA8:0072:8B95 ()
 * @implements AB00:1FF7:0023:0EE1
 * @implements AB00:201A:0007:9E7E
 * @implements AB00:2021:0004:0F87
 * @implements AB00:2025:0004:4F8E
 * @implements AB00:2029:0004:4FB8
 * @implements AB00:202D:0004:BDA7
 * @implements AB00:2031:0031:AB65
 * @implements AB00:2034:002E:F465
 * @implements AB00:2037:002B:FE99
 * @implements AB00:2062:001D:88E8
 * @implements AB00:207F:0030:6D95
 * @implements AB00:2085:002A:1D0A
 * @implements AB00:20AF:0027:E2B2
 * @implements AB00:20D6:0017:E74F
 * @implements AB00:20D9:0014:F67A
 * @implements AB00:20ED:0011:06F8
 * @implements AB00:20FE:0005:C48A
 *
 * Called From: 2756:050D:0003:6FD4
 */
void f__AB00_1FA8_0072_8B95()
{
l__1FA8:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_ds);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_pushf();
	emu_cli();
	emu_cld();
	emu_get_memory16(emu_cs, 0x00, 0x1316) = 0x0;
	emu_get_memory16(emu_cs, 0x00, 0x1312) = 0x0;
	emu_push(emu_cs);
	emu_pop(&emu_es);
	emu_ax = 0xFFFF;
	emu_di = 0x131E;
	emu_cx = 0x60;
	emu_rep_stosw();
	emu_di = 0x11F2;
	emu_cx = 0x80;
	emu_rep_stosw();
	emu_ax = 0x0;
	emu_di = 0x12F2;
	emu_cx = 0x10;
	emu_rep_stosw();
	emu_di = 0x13EE;
	emu_cx = 0x8;
	emu_rep_stosw();
	emu_di = 0x13DE;
	emu_cx = 0x8;
	emu_rep_stosw();
	emu_si = 0x0;
	emu_ax = 0x0;
	emu_bh = 0x0;
l__1FF7:
	emu_bl = emu_get_memory8(emu_cs, emu_si, 0x11D7);
	emu_get_memory8(emu_cs, emu_bx, 0x11F2) = emu_al;
	emu_addw(&emu_ax, 0x10);
	emu_incw(&emu_si);
	emu_cmpw(&emu_si, 0x9);
	if (emu_si != 0x9) goto l__1FF7;
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_cs);
	emu_push(0x201A); f__AB00_0443_0017_B488();
l__201A:
	emu_addw(&emu_sp, 0x8);
	emu_push(emu_cs);
	emu_push(0x2021); emu_MPU_Reset();
l__2021:
	emu_push(emu_cs);
	emu_push(0x2025); emu_MPU_UART();
l__2025:
	emu_push(emu_cs);
	emu_push(0x2029); f__AB00_0564_0050_E6D5();
l__2029:
	emu_push(emu_cs);
	emu_push(0x202D); f__AB00_0610_0050_6DE0();
l__202D:
	emu_push(emu_cs);
	emu_push(0x2031); f__AB00_21CE_001D_E2A5();
l__2031:
	emu_si = 0x0;
l__2034:
	emu_di = 0x1;
l__2037:
	emu_ax = emu_di;
	emu_orw(&emu_ax, 0xB0);
	emu_bl = emu_get_memory8(emu_cs, emu_si, 0x11D7);
	emu_bh = 0x0;
	emu_cl = emu_get_memory8(emu_cs, emu_si, 0x11E0);
	emu_cmpb(&emu_cl, 0xFF);
	if (emu_cl == 0xFF) { /* Unresolved jump */ emu_ip = 0x206B; emu_last_cs = 0xAB00; emu_last_ip = 0x204B; emu_last_length = 0x002B; emu_last_crc = 0xFE99; emu_call(); return; }
	emu_dx = emu_bx;
	emu_bl = emu_get_memory8(emu_cs, emu_bx, 0x11F2);
	emu_addw(&emu_bx, emu_di);
	emu_get_memory8(emu_cs, emu_bx, 0x131E) = emu_cl;
	emu_push(emu_cx);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x2062); f__AB00_08CE_005F_AC14();
l__2062:
	emu_addw(&emu_sp, 0x6);
	emu_incw(&emu_di);
	emu_cmpw(&emu_di, 0x9);
	if (emu_di <= 0x9) goto l__2037;
	emu_incw(&emu_si);
	emu_cmpw(&emu_si, 0x8);
	if (emu_si <= 0x8) goto l__2034;
	emu_push(emu_ax);
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_get_memory16(emu_ss, emu_bp,  0x2) = 0xA;
	emu_pop(&emu_bp);
	emu_push(emu_cs);
	emu_push(0x207F); f__AB00_0787_0028_C5A7();
l__207F:
	emu_addw(&emu_sp, 0x2);
	emu_di = 0x1;
l__2085:
	emu_get_memory8(emu_cs, emu_di, 0x13BE) = 0x0;
	emu_get_memory8(emu_cs, emu_di, 0x13CE) = 0x40;
	emu_ax = emu_di;
	emu_orw(&emu_ax, 0xE0);
	emu_push(emu_ax);
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_get_memory16(emu_ss, emu_bp,  0x2) = 0x40;
	emu_pop(&emu_bp);
	emu_push(emu_ax);
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_get_memory16(emu_ss, emu_bp,  0x2) = 0x0;
	emu_pop(&emu_bp);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x20AF); f__AB00_08CE_005F_AC14();
l__20AF:
	emu_addw(&emu_sp, 0x6);
	emu_bl = emu_get_memory8(emu_cs, emu_di, 0x11E8);
	emu_cmpb(&emu_bl, 0xFF);
	if (emu_bl == 0xFF) goto l__20D9;
	emu_get_memory8(emu_cs, emu_di, 0x13AE) = emu_bl;
	emu_ax = emu_di;
	emu_orw(&emu_ax, 0xC0);
	emu_push(emu_ax);
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_get_memory16(emu_ss, emu_bp,  0x2) = 0x0;
	emu_pop(&emu_bp);
	emu_push(emu_bx);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x20D6); f__AB00_08CE_005F_AC14();
l__20D6:
	emu_addw(&emu_sp, 0x6);
l__20D9:
	emu_incw(&emu_di);
	emu_cmpw(&emu_di, 0x9);
	if (emu_di <= 0x9) goto l__2085;
	emu_push(emu_ax);
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_get_memory16(emu_ss, emu_bp,  0x2) = 0xA;
	emu_pop(&emu_bp);
	emu_push(emu_cs);
	emu_push(0x20ED); f__AB00_0787_0028_C5A7();
l__20ED:
	emu_addw(&emu_sp, 0x2);
	emu_get_memory16(emu_cs, 0x00, 0x13FE) = 0x1;
	emu_orb(&emu_bh, 0x0);
	emu_push(emu_cs);
	emu_push(0x20FE); f__AB00_20F8_0001_6780();
l__20FE:
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_pop(&emu_ds);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__AB00_20F8_0001_6780()
 *
 * @name f__AB00_20F8_0001_6780
 * @implements AB00:20F8:0001:6780 ()
 *
 * Called From: AB00:20FB:0011:06F8
 */
void f__AB00_20F8_0001_6780()
{
l__20F8:

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	emu_popf();
	return;
}

/**
 * Decompiled function f__AB00_2103_0040_93D2()
 *
 * @name f__AB00_2103_0040_93D2
 * @implements AB00:2103:0040:93D2 ()
 * @implements AB00:215D:0004:4F00
 * @implements AB00:2161:0014:8AD4
 * @implements AB00:2175:0007:DD91
 * @implements AB00:217C:000E:C3BC
 * @implements AB00:218A:0007:F178
 *
 * Called From: 2756:050D:0003:6FD4
 */
void f__AB00_2103_0040_93D2()
{
l__2103:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x4);
	emu_push(emu_ds);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_pushf();
	emu_cli();
	emu_cmpw(&emu_get_memory16(emu_cs, 0x00, 0x13FE), 0x0);
	if (emu_get_memory16(emu_cs, 0x00, 0x13FE) == 0x0) { /* Unresolved jump */ emu_ip = 0x2183; emu_last_cs = 0xAB00; emu_last_ip = 0x2114; emu_last_length = 0x0040; emu_last_crc = 0x93D2; emu_call(); return; }
	emu_get_memory16(emu_ss, emu_bp, -0x2) = 0x0;
	emu_cx = emu_get_memory16(emu_cs, 0x00, 0x1312);
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_cx;
	if (emu_cx == 0) goto l__215D;
	emu_di = emu_get_memory16(emu_ss, emu_bp, -0x2);
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x4);
	emu_cmpw(&emu_get_memory16(emu_cs, emu_di, 0x12F4), 0x0);
	if (emu_get_memory16(emu_cs, emu_di, 0x12F4) == 0x0) { /* Unresolved jump */ emu_ip = 0x2125; emu_last_cs = 0xAB00; emu_last_ip = 0x2132; emu_last_length = 0x0040; emu_last_crc = 0x93D2; emu_call(); return; }
	emu_push(emu_di);
	emu_push(emu_ax);
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_get_memory16(emu_ss, emu_bp,  0x2) = 0x0;
	emu_pop(&emu_bp);
	emu_push(emu_cs);
	emu_push(0x2143); f__AB00_240F_0029_C429();
	/* Unresolved jump */ emu_ip = 0x2143; emu_last_cs = 0xAB00; emu_last_ip = 0x2143; emu_last_length = 0x0040; emu_last_crc = 0x93D2; emu_call();
l__215D:
	emu_push(emu_cs);
	emu_push(0x2161); f__AB00_0564_0050_E6D5();
l__2161:
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_ax);
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_get_memory16(emu_ss, emu_bp,  0x2) = 0x0;
	emu_pop(&emu_bp);
	emu_push(emu_cs);
	emu_push(0x2175); f__AB00_0DA1_0077_69FE();
l__2175:
	emu_addw(&emu_sp, 0x6);
	emu_push(emu_cs);
	emu_push(0x217C); emu_MPU_Reset();
l__217C:
	emu_get_memory16(emu_cs, 0x00, 0x13FE) = 0x0;
	emu_orb(&emu_bh, 0x0);
	emu_push(emu_cs);
	emu_push(0x218A); f__AB00_2184_0001_6780();
l__218A:
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
 * Decompiled function f__AB00_2184_0001_6780()
 *
 * @name f__AB00_2184_0001_6780
 * @implements AB00:2184:0001:6780 ()
 *
 * Called From: AB00:2187:000E:C3BC
 */
void f__AB00_2184_0001_6780()
{
l__2184:

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	emu_popf();
	return;
}

/**
 * Decompiled function f__AB00_2191_0012_DA45()
 *
 * @name f__AB00_2191_0012_DA45
 * @implements AB00:2191:0012:DA45 ()
 * @implements AB00:21A3:0005:C48A
 *
 * Called From: 2756:050D:0003:6FD4
 */
void f__AB00_2191_0012_DA45()
{
l__2191:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_ds);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_pushf();
	emu_cli();
	emu_ax = 0x208;
	emu_orb(&emu_bh, 0x0);
	emu_push(emu_cs);
	emu_push(0x21A3); f__AB00_219D_0001_6780();
l__21A3:
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_pop(&emu_ds);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__AB00_219D_0001_6780()
 *
 * @name f__AB00_219D_0001_6780
 * @implements AB00:219D:0001:6780 ()
 *
 * Called From: AB00:21A0:0012:DA45
 */
void f__AB00_219D_0001_6780()
{
l__219D:

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	emu_popf();
	return;
}

/**
 * Decompiled function f__AB00_21CE_001D_E2A5()
 *
 * @name f__AB00_21CE_001D_E2A5
 * @implements AB00:21CE:001D:E2A5 ()
 * @implements AB00:21EB:0005:C48A
 *
 * Called From: AB00:202E:0004:BDA7
 */
void f__AB00_21CE_001D_E2A5()
{
l__21CE:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_ds);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_pushf();
	emu_cli();
	emu_get_memory16(emu_cs, 0x00, 0x131A) = 0x0;
	emu_get_memory16(emu_cs, 0x00, 0x131C) = 0x0;
	emu_orb(&emu_bh, 0x0);
	emu_push(emu_cs);
	emu_push(0x21EB); f__AB00_21E5_0001_6780();
l__21EB:
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_pop(&emu_ds);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__AB00_21E5_0001_6780()
 *
 * @name f__AB00_21E5_0001_6780
 * @implements AB00:21E5:0001:6780 ()
 *
 * Called From: AB00:21E8:001D:E2A5
 */
void f__AB00_21E5_0001_6780()
{
l__21E5:

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	emu_popf();
	return;
}

/**
 * Decompiled function f__AB00_21F0_0024_C4F7()
 *
 * @name f__AB00_21F0_0024_C4F7
 * @implements AB00:21F0:0024:C4F7 ()
 * @implements AB00:2201:0013:A743
 * @implements AB00:2214:0010:A9E4
 * @implements AB00:2224:000B:7D52
 * @implements AB00:222F:0092:5A57
 * @implements AB00:2259:0068:3C9D
 * @implements AB00:22C1:0017:F3A6
 * @implements AB00:22D8:000A:7D56
 * @implements AB00:22E2:000B:63FC
 * @implements AB00:22ED:0030:66CE
 * @implements AB00:231D:0008:30AE
 * @implements AB00:2325:000A:6EC2
 * @implements AB00:2328:0007:3FBD
 * @implements AB00:232F:0007:F178
 *
 * Called From: 2756:050D:0003:6FD4
 */
void f__AB00_21F0_0024_C4F7()
{
l__21F0:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x6);
	emu_push(emu_ds);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_pushf();
	emu_cli();
	emu_bx = 0x0;
	emu_cx = 0x8;
l__2201:
	emu_cmpw(&emu_get_memory16(emu_cs, emu_bx, 0x12F4), 0x0);
	if (emu_get_memory16(emu_cs, emu_bx, 0x12F4) == 0x0) goto l__2214;
	emu_addw(&emu_bx, 0x4);
	if (--emu_cx != 0) goto l__2201;
	emu_ax = 0xFFFF;
	goto l__2328;
l__2214:
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_bx;
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_cs);
	emu_push(0x2224); f__AB00_1400_0026_1BEB();
l__2224:
	emu_addw(&emu_sp, 0x6);
	emu_cmpw(&emu_dx, 0x0);
	if (emu_dx != 0x0) goto l__222F;
	goto l__2325;
l__222F:
	emu_es = emu_dx;
	emu_di = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = 0xC;
	emu_get_memory16(emu_ss, emu_bp, -0x6) = 0x0;
	emu_lfp(&emu_ds, &emu_si, &emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_get_memory16(emu_cs, emu_bx, 0x12F2) = emu_si;
	emu_get_memory16(emu_cs, emu_bx, 0x12F4) = emu_ds;
	emu_get_memory16(emu_ds, emu_si, 0x2) = 0x0;
	emu_get_memory16(emu_ds, emu_si, 0x6) = 0x0;
	emu_get_memory16(emu_ds, emu_si, 0xA) = 0x0;
l__2259:
	emu_push(emu_bx);
	emu_push(emu_cx);
	emu_bx = emu_es;
	emu_xorw(&emu_cx, emu_cx);
	emu_shlw(&emu_bx, 0x1);
	emu_rclw(&emu_cx, 0x1);
	emu_shlw(&emu_bx, 0x1);
	emu_rclw(&emu_cx, 0x1);
	emu_shlw(&emu_bx, 0x1);
	emu_rclw(&emu_cx, 0x1);
	emu_shlw(&emu_bx, 0x1);
	emu_rclw(&emu_cx, 0x1);
	emu_addw(&emu_bx, emu_di);
	emu_adcw(&emu_cx, 0x0);
	emu_addw(&emu_bx, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_adcw(&emu_cx, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_di = emu_bx;
	emu_andw(&emu_di, 0xF);
	emu_shrw(&emu_cx, 0x1);
	emu_rcrw(&emu_bx, 0x1);
	emu_shrw(&emu_cx, 0x1);
	emu_rcrw(&emu_bx, 0x1);
	emu_shrw(&emu_cx, 0x1);
	emu_rcrw(&emu_bx, 0x1);
	emu_shrw(&emu_cx, 0x1);
	emu_rcrw(&emu_bx, 0x1);
	emu_es = emu_bx;
	emu_pop(&emu_cx);
	emu_pop(&emu_bx);
	emu_ax = emu_get_memory16(emu_es, emu_di, 0x6);
	emu_dx = emu_get_memory16(emu_es, emu_di, 0x4);
	emu_xchgb(&emu_ah, &emu_al);
	emu_xchgb(&emu_dh, &emu_dl);
	emu_addw(&emu_ax, 0x8);
	emu_adcw(&emu_dx, 0x0);
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_dx;
	emu_cmpw(&emu_get_memory16(emu_es, emu_di, 0x0), 0x4954);
	if (emu_get_memory16(emu_es, emu_di, 0x0) != 0x4954) goto l__22C1;
	emu_cmpw(&emu_get_memory16(emu_es, emu_di, 0x2), 0x424D);
	if (emu_get_memory16(emu_es, emu_di, 0x2) != 0x424D) goto l__22C1;
	emu_get_memory16(emu_ds, emu_si, 0x0) = emu_di;
	emu_get_memory16(emu_ds, emu_si, 0x2) = emu_es;
	goto l__2259;
l__22C1:
	emu_cmpw(&emu_get_memory16(emu_es, emu_di, 0x0), 0x4252);
	if (emu_get_memory16(emu_es, emu_di, 0x0) != 0x4252) goto l__22D8;
	emu_cmpw(&emu_get_memory16(emu_es, emu_di, 0x2), 0x4E52);
	if (emu_get_memory16(emu_es, emu_di, 0x2) != 0x4E52) goto l__22D8;
	emu_get_memory16(emu_ds, emu_si, 0x4) = emu_di;
	emu_get_memory16(emu_ds, emu_si, 0x6) = emu_es;
	goto l__2259;
l__22D8:
	emu_cmpw(&emu_get_memory16(emu_es, emu_di, 0x0), 0x5645);
	if (emu_get_memory16(emu_es, emu_di, 0x0) == 0x5645) goto l__22E2;
	goto l__2259;
l__22E2:
	emu_cmpw(&emu_get_memory16(emu_es, emu_di, 0x2), 0x544E);
	if (emu_get_memory16(emu_es, emu_di, 0x2) == 0x544E) goto l__22ED;
	goto l__2259;
l__22ED:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x2);
	emu_get_memory16(emu_ds, emu_si, 0x16) = emu_ax;
	emu_get_memory16(emu_ds, emu_si, 0x8) = emu_di;
	emu_get_memory16(emu_ds, emu_si, 0xA) = emu_es;
	emu_lfp(&emu_es, &emu_di, &emu_get_memory16(emu_ss, emu_bp,  0x12));
	emu_get_memory16(emu_ds, emu_si, 0x12) = emu_di;
	emu_get_memory16(emu_ds, emu_si, 0x14) = emu_es;
	emu_get_memory16(emu_ds, emu_si, 0x1C) = 0x0;
	emu_get_memory16(emu_ds, emu_si, 0x18) = 0x0;
	emu_get_memory16(emu_ds, emu_si, 0x1A) = 0x0;
	emu_incw(&emu_get_memory16(emu_cs, 0x00, 0x1312));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_cs);
	emu_push(0x231D); f__AB00_152A_00B7_1482();
l__231D:
	emu_addw(&emu_sp, 0x2);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x2);
	goto l__2328;
l__2325:
	emu_ax = 0xFFFF;
l__2328:
	emu_orb(&emu_bh, 0x0);
	emu_push(emu_cs);
	emu_push(0x232F); f__AB00_2329_0001_6780();
l__232F:
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
 * Decompiled function f__AB00_2329_0001_6780()
 *
 * @name f__AB00_2329_0001_6780
 * @implements AB00:2329:0001:6780 ()
 *
 * Called From: AB00:232C:000A:6EC2
 * Called From: AB00:232C:0007:3FBD
 */
void f__AB00_2329_0001_6780()
{
l__2329:

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	emu_popf();
	return;
}

/**
 * Decompiled function f__AB00_2336_002C_4FDC()
 *
 * @name f__AB00_2336_002C_4FDC
 * @implements AB00:2336:002C:4FDC ()
 * @implements AB00:2362:0013:6ECE
 * @implements AB00:2375:0005:C48A
 *
 * Called From: 2756:050D:0003:6FD4
 */
void f__AB00_2336_002C_4FDC()
{
l__2336:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_ds);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_pushf();
	emu_cli();
	emu_si = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_cmpw(&emu_si, 0xFFFF);
	if (emu_si == 0xFFFF) { /* Unresolved jump */ emu_ip = 0x236E; emu_last_cs = 0xAB00; emu_last_ip = 0x2344; emu_last_length = 0x002C; emu_last_crc = 0x4FDC; emu_call(); return; }
	emu_cmpw(&emu_get_memory16(emu_cs, emu_si, 0x12F4), 0x0);
	if (emu_get_memory16(emu_cs, emu_si, 0x12F4) == 0x0) { /* Unresolved jump */ emu_ip = 0x236E; emu_last_cs = 0xAB00; emu_last_ip = 0x234C; emu_last_length = 0x002C; emu_last_crc = 0x4FDC; emu_call(); return; }
	emu_lfp(&emu_es, &emu_di, &emu_get_memory16(emu_cs, emu_si, 0x12F2));
	emu_cmpw(&emu_get_memory16(emu_es, emu_di, 0x1A), 0x1);
	if (emu_get_memory16(emu_es, emu_di, 0x1A) != 0x1) goto l__2362;
	emu_get_memory16(emu_es, emu_di, 0x1C) = 0x1;
	/* Unresolved jump */ emu_ip = 0x236E; emu_last_cs = 0xAB00; emu_last_ip = 0x2360; emu_last_length = 0x002C; emu_last_crc = 0x4FDC; emu_call();
l__2362:
	emu_get_memory16(emu_cs, emu_si, 0x12F4) = 0x0;
	emu_decw(&emu_get_memory16(emu_cs, 0x00, 0x1312));
	emu_orb(&emu_bh, 0x0);
	emu_push(emu_cs);
	emu_push(0x2375); f__AB00_236F_0001_6780();
l__2375:
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_pop(&emu_ds);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__AB00_236F_0001_6780()
 *
 * @name f__AB00_236F_0001_6780
 * @implements AB00:236F:0001:6780 ()
 *
 * Called From: AB00:2372:0013:6ECE
 */
void f__AB00_236F_0001_6780()
{
l__236F:

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	emu_popf();
	return;
}

/**
 * Decompiled function f__AB00_237A_002C_07AF()
 *
 * @name f__AB00_237A_002C_07AF
 * @implements AB00:237A:002C:07AF ()
 * @implements AB00:23A9:0007:DC21
 * @implements AB00:23B0:005A:6447
 * @implements AB00:2403:0007:3FBD
 * @implements AB00:240A:0005:C48A
 *
 * Called From: 2756:050D:0003:6FD4
 */
void f__AB00_237A_002C_07AF()
{
l__237A:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_ds);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_pushf();
	emu_cli();
	emu_si = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_cmpw(&emu_si, 0xFFFF);
	if (emu_si == 0xFFFF) goto l__2403;
	emu_lfp(&emu_ds, &emu_si, &emu_get_memory16(emu_cs, emu_si, 0x12F2));
	emu_cmpw(&emu_get_memory16(emu_ds, emu_si, 0x1A), 0x1);
	if (emu_get_memory16(emu_ds, emu_si, 0x1A) != 0x1) goto l__23A9;
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_ax);
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_get_memory16(emu_ss, emu_bp,  0x2) = 0x0;
	emu_pop(&emu_bp);
	emu_push(emu_cs);
	emu_push(0x23A6); f__AB00_240F_0029_C429();
	/* Unresolved jump */ emu_ip = 0x23A6; emu_last_cs = 0xAB00; emu_last_ip = 0x23A6; emu_last_length = 0x002C; emu_last_crc = 0x07AF; emu_call();
l__23A9:
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_cs);
	emu_push(0x23B0); f__AB00_152A_00B7_1482();
l__23B0:
	emu_addw(&emu_sp, 0x2);
	emu_ax = emu_get_memory16(emu_ds, emu_si, 0x8);
	emu_dx = emu_get_memory16(emu_ds, emu_si, 0xA);
	emu_push(emu_bx);
	emu_push(emu_cx);
	emu_bx = emu_dx;
	emu_xorw(&emu_cx, emu_cx);
	emu_shlw(&emu_bx, 0x1);
	emu_rclw(&emu_cx, 0x1);
	emu_shlw(&emu_bx, 0x1);
	emu_rclw(&emu_cx, 0x1);
	emu_shlw(&emu_bx, 0x1);
	emu_rclw(&emu_cx, 0x1);
	emu_shlw(&emu_bx, 0x1);
	emu_rclw(&emu_cx, 0x1);
	emu_addw(&emu_bx, emu_ax);
	emu_adcw(&emu_cx, 0x0);
	emu_addw(&emu_bx, 0x8);
	emu_adcw(&emu_cx, 0x0);
	emu_ax = emu_bx;
	emu_andw(&emu_ax, 0xF);
	emu_shrw(&emu_cx, 0x1);
	emu_rcrw(&emu_bx, 0x1);
	emu_shrw(&emu_cx, 0x1);
	emu_rcrw(&emu_bx, 0x1);
	emu_shrw(&emu_cx, 0x1);
	emu_rcrw(&emu_bx, 0x1);
	emu_shrw(&emu_cx, 0x1);
	emu_rcrw(&emu_bx, 0x1);
	emu_dx = emu_bx;
	emu_pop(&emu_cx);
	emu_pop(&emu_bx);
	emu_get_memory16(emu_ds, emu_si, 0xC) = emu_ax;
	emu_get_memory16(emu_ds, emu_si, 0xE) = emu_dx;
	emu_get_memory16(emu_ds, emu_si, 0x1A) = 0x1;
	emu_get_memory16(emu_ds, emu_si, 0x18) = 0x1;
l__2403:
	emu_orb(&emu_bh, 0x0);
	emu_push(emu_cs);
	emu_push(0x240A); f__AB00_2404_0001_6780();
l__240A:
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_pop(&emu_ds);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__AB00_2404_0001_6780()
 *
 * @name f__AB00_2404_0001_6780
 * @implements AB00:2404:0001:6780 ()
 *
 * Called From: AB00:2407:0007:3FBD
 * Called From: AB00:2407:005A:6447
 */
void f__AB00_2404_0001_6780()
{
l__2404:

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	emu_popf();
	return;
}

/**
 * Decompiled function f__AB00_240F_0029_C429()
 *
 * @name f__AB00_240F_0029_C429
 * @implements AB00:240F:0029:C429 ()
 * @implements AB00:2438:0009:3AE4
 * @implements AB00:2441:000F:9054
 * @implements AB00:2449:0007:3FBD
 * @implements AB00:2450:0005:C48A
 *
 * Called From: 2756:050D:0003:6FD4
 */
void f__AB00_240F_0029_C429()
{
l__240F:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_ds);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_pushf();
	emu_cli();
	emu_si = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_cmpw(&emu_si, 0xFFFF);
	if (emu_si == 0xFFFF) goto l__2449;
	emu_cmpw(&emu_get_memory16(emu_cs, emu_si, 0x12F4), 0x0);
	if (emu_get_memory16(emu_cs, emu_si, 0x12F4) == 0x0) goto l__2449;
	emu_lfp(&emu_ds, &emu_si, &emu_get_memory16(emu_cs, emu_si, 0x12F2));
	emu_cmpw(&emu_get_memory16(emu_ds, emu_si, 0x1A), 0x1);
	if (emu_get_memory16(emu_ds, emu_si, 0x1A) != 0x1) goto l__2449;
	emu_push(emu_ds);
	emu_push(emu_si);
	emu_push(emu_cs);
	emu_push(0x2438); f__AB00_1663_003F_9AA6();
l__2438:
	emu_addw(&emu_sp, 0x4);
	emu_push(emu_ds);
	emu_push(emu_si);
	emu_push(emu_cs);
	emu_push(0x2441); f__AB00_16B7_0039_7EF1();
l__2441:
	emu_addw(&emu_sp, 0x4);
	emu_get_memory16(emu_ds, emu_si, 0x1A) = 0x0;
l__2449:
	emu_orb(&emu_bh, 0x0);
	emu_push(emu_cs);
	emu_push(0x2450); f__AB00_244A_0001_6780();
l__2450:
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_pop(&emu_ds);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__AB00_244A_0001_6780()
 *
 * @name f__AB00_244A_0001_6780
 * @implements AB00:244A:0001:6780 ()
 *
 * Called From: AB00:244D:0007:3FBD
 * Called From: AB00:244D:000F:9054
 */
void f__AB00_244A_0001_6780()
{
l__244A:

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	emu_popf();
	return;
}

/**
 * Decompiled function f__AB00_2498_0021_920B()
 *
 * @name f__AB00_2498_0021_920B
 * @implements AB00:2498:0021:920B ()
 * @implements AB00:24B9:0005:C48A
 *
 * Called From: 2756:050D:0003:6FD4
 */
void f__AB00_2498_0021_920B()
{
l__2498:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_ds);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_pushf();
	emu_cli();
	emu_si = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_ax = 0xFFFF;
	emu_cmpw(&emu_si, emu_ax);
	if (emu_si == emu_ax) { /* Unresolved jump */ emu_ip = 0x24B2; emu_last_cs = 0xAB00; emu_last_ip = 0x24A8; emu_last_length = 0x0021; emu_last_crc = 0x920B; emu_call(); return; }
	emu_lfp(&emu_ds, &emu_si, &emu_get_memory16(emu_cs, emu_si, 0x12F2));
	emu_ax = emu_get_memory16(emu_ds, emu_si, 0x1A);
	emu_orb(&emu_bh, 0x0);
	emu_push(emu_cs);
	emu_push(0x24B9); f__AB00_24B3_0001_6780();
l__24B9:
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_pop(&emu_ds);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__AB00_24B3_0001_6780()
 *
 * @name f__AB00_24B3_0001_6780
 * @implements AB00:24B3:0001:6780 ()
 *
 * Called From: AB00:24B6:0021:920B
 */
void f__AB00_24B3_0001_6780()
{
l__24B3:

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	emu_popf();
	return;
}

/**
 * Decompiled function f__AB00_26EB_0047_41F4()
 *
 * @name f__AB00_26EB_0047_41F4
 * @implements AB00:26EB:0047:41F4 ()
 * @implements AB00:2732:001E:6677
 * @implements AB00:273E:0012:51C3
 * @implements AB00:2750:0009:3B81
 * @implements AB00:2759:000A:1B1F
 * @implements AB00:275C:0007:3FBD
 * @implements AB00:2763:0005:C48A
 *
 * Called From: 2756:050D:0003:6FD4
 */
void f__AB00_26EB_0047_41F4()
{
l__26EB:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_ds);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_pushf();
	emu_cli();
	emu_si = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_cmpw(&emu_si, 0xFFFF);
	if (emu_si == 0xFFFF) goto l__275C;
	emu_lfp(&emu_ds, &emu_si, &emu_get_memory16(emu_cs, emu_si, 0x12F2));
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0xA);
	emu_get_memory16(emu_ds, emu_si, 0x26) = emu_ax;
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp,  0xC), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp,  0xC) == 0x0) goto l__2750;
	emu_ax = emu_get_memory16(emu_ds, emu_si, 0x26);
	emu_subw(&emu_ax, emu_get_memory16(emu_ds, emu_si, 0x24));
	if (emu_flags.zf) goto l__275C;
	emu_cwd();
	emu_xorw(&emu_ax, emu_dx);
	emu_subw(&emu_ax, emu_dx);
	emu_cx = emu_ax;
	emu_ax = 0xA;
	emu_mulw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_ax);
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_get_memory16(emu_ss, emu_bp,  0x2) = 0x0;
	emu_pop(&emu_bp);
	emu_push(emu_cx);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x2732); f__AB00_1CA3_0042_C43A();
l__2732:
	emu_addw(&emu_sp, 0x8);
	emu_bx = emu_ax;
	emu_orw(&emu_bx, emu_dx);
	if (emu_bx == 0) {
		emu_ax = 0x1;
	}
l__273E:
	emu_get_memory16(emu_ds, emu_si, 0x2C) = emu_ax;
	emu_get_memory16(emu_ds, emu_si, 0x2E) = emu_dx;
	emu_get_memory16(emu_ds, emu_si, 0x28) = 0x0;
	emu_get_memory16(emu_ds, emu_si, 0x2A) = 0x0;
	goto l__275C;
l__2750:
	emu_get_memory16(emu_ds, emu_si, 0x24) = emu_ax;
	emu_push(emu_ds);
	emu_push(emu_si);
	emu_push(emu_cs);
	emu_push(0x2759); f__AB00_184D_004F_7B67();
l__2759:
	emu_addw(&emu_sp, 0x4);
l__275C:
	emu_orb(&emu_bh, 0x0);
	emu_push(emu_cs);
	emu_push(0x2763); f__AB00_275D_0001_6780();
l__2763:
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_pop(&emu_ds);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__AB00_275D_0001_6780()
 *
 * @name f__AB00_275D_0001_6780
 * @implements AB00:275D:0001:6780 ()
 *
 * Called From: AB00:2760:0007:3FBD
 * Called From: AB00:2760:000A:1B1F
 */
void f__AB00_275D_0001_6780()
{
l__275D:

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	emu_popf();
	return;
}

/**
 * Decompiled function f__AB00_281A_003D_9A17()
 *
 * @name f__AB00_281A_003D_9A17
 * @implements AB00:281A:003D:9A17 ()
 * @implements AB00:282D:002A:29E1
 * @implements AB00:2842:0015:FAC0
 * @implements AB00:2857:001D:BB40
 * @implements AB00:2874:000B:E6F7
 * @implements AB00:287F:0019:4F9F
 * @implements AB00:2898:0005:C48A
 *
 * Called From: AB00:1A52:0015:ED40
 */
void f__AB00_281A_003D_9A17()
{
l__281A:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_ds);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_pushf();
	emu_cli();
	emu_cx = 0xFFFF;
	emu_si = emu_cx;
	emu_ax = 0xC0;
	emu_di = 0xF;
l__282D:
	emu_testb(&emu_al, emu_get_memory8(emu_cs, emu_di, 0x13EE));
	if ((emu_al & emu_get_memory8(emu_cs, emu_di, 0x13EE)) == 0) {
		emu_cmpb(&emu_get_memory8(emu_cs, emu_di, 0x13DE), emu_cl);
		if (emu_get_memory8(emu_cs, emu_di, 0x13DE) < emu_cl) {
			emu_cl = emu_get_memory8(emu_cs, emu_di, 0x13DE);
			emu_si = emu_di;
		}
	}
l__2842:
	emu_decw(&emu_di);
	emu_cmpw(&emu_di, 0x0);
	if ((int16)emu_di >= (int16)0x0) goto l__282D;
	emu_cmpw(&emu_si, 0xFFFF);
	if (emu_si != 0xFFFF) goto l__2857;
	emu_cmpw(&emu_ax, 0x80);
	if (emu_ax == 0x80) { /* Unresolved jump */ emu_ip = 0x288E; emu_last_cs = 0xAB00; emu_last_ip = 0x2850; emu_last_length = 0x0015; emu_last_crc = 0xFAC0; emu_call(); return; }
	emu_ax = 0x80;
	/* Unresolved jump */ emu_ip = 0x282A; emu_last_cs = 0xAB00; emu_last_ip = 0x2855; emu_last_length = 0x0015; emu_last_crc = 0xFAC0; emu_call();
l__2857:
	emu_orw(&emu_si, 0xB0);
	emu_push(emu_ax);
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_get_memory16(emu_ss, emu_bp,  0x2) = 0x0;
	emu_pop(&emu_bp);
	emu_push(emu_ax);
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_get_memory16(emu_ss, emu_bp,  0x2) = 0x40;
	emu_pop(&emu_bp);
	emu_push(emu_si);
	emu_push(emu_cs);
	emu_push(0x2874); f__AB00_08CE_005F_AC14();
l__2874:
	emu_addw(&emu_sp, 0x6);
	emu_andw(&emu_si, 0xF);
	emu_push(emu_si);
	emu_push(emu_cs);
	emu_push(0x287F); f__AB00_15E1_0068_0B9B();
l__287F:
	emu_addw(&emu_sp, 0x2);
	emu_get_memory8(emu_cs, emu_si, 0x13DE) = 0x0;
	emu_orb(&emu_get_memory8(emu_cs, emu_si, 0x13EE), 0x80);
	emu_ax = emu_si;
	emu_incw(&emu_ax);
	emu_orb(&emu_bh, 0x0);
	emu_push(emu_cs);
	emu_push(0x2898); f__AB00_2892_0001_6780();
l__2898:
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_pop(&emu_ds);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__AB00_2892_0001_6780()
 *
 * @name f__AB00_2892_0001_6780
 * @implements AB00:2892:0001:6780 ()
 *
 * Called From: AB00:2895:0019:4F9F
 */
void f__AB00_2892_0001_6780()
{
l__2892:

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	emu_popf();
	return;
}

/**
 * Decompiled function f__AB00_289D_0017_6184()
 *
 * @name f__AB00_289D_0017_6184
 * @implements AB00:289D:0017:6184 ()
 * @implements AB00:28B4:0029:4C06
 * @implements AB00:28DD:001C:D2B9
 * @implements AB00:28F9:0028:DB24
 * @implements AB00:2904:001D:8BC7
 * @implements AB00:2921:002D:ECDF
 * @implements AB00:2925:0029:2E5B
 * @implements AB00:294E:0024:5A85
 * @implements AB00:2951:0021:F20C
 * @implements AB00:2972:000A:191F
 * @implements AB00:2975:0007:3FBD
 * @implements AB00:297C:0005:C48A
 *
 * Called From: AB00:1719:001A:15C8
 */
void f__AB00_289D_0017_6184()
{
l__289D:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_ds);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_pushf();
	emu_cli();
	emu_si = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_decw(&emu_si);
	emu_testb(&emu_get_memory8(emu_cs, emu_si, 0x13EE), 0x80);
	if ((emu_get_memory8(emu_cs, emu_si, 0x13EE) & 0x80) != 0) goto l__28B4;
	goto l__2975;
l__28B4:
	emu_andb(&emu_get_memory8(emu_cs, emu_si, 0x13EE), 0x7F);
	emu_get_memory8(emu_cs, emu_si, 0x13DE) = 0x0;
	emu_orw(&emu_si, 0xB0);
	emu_push(emu_ax);
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_get_memory16(emu_ss, emu_bp,  0x2) = 0x0;
	emu_pop(&emu_bp);
	emu_push(emu_ax);
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_get_memory16(emu_ss, emu_bp,  0x2) = 0x40;
	emu_pop(&emu_bp);
	emu_push(emu_si);
	emu_push(emu_cs);
	emu_push(0x28DD); f__AB00_08CE_005F_AC14();
l__28DD:
	emu_addw(&emu_sp, 0x6);
	emu_push(emu_ax);
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_get_memory16(emu_ss, emu_bp,  0x2) = 0x0;
	emu_pop(&emu_bp);
	emu_push(emu_ax);
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_get_memory16(emu_ss, emu_bp,  0x2) = 0x7B;
	emu_pop(&emu_bp);
	emu_push(emu_si);
	emu_push(emu_cs);
	emu_push(0x28F9); f__AB00_08CE_005F_AC14();
l__28F9:
	emu_addw(&emu_sp, 0x6);
	emu_andw(&emu_si, 0xF);
	emu_bx = emu_si;
	emu_di = 0x0;
l__2904:
	emu_dl = emu_get_memory8(emu_cs, emu_bx, 0x131E);
	emu_cmpb(&emu_dl, 0xFF);
	if (emu_dl == 0xFF) goto l__2925;
	emu_push(emu_bx);
	emu_andb(&emu_bl, 0xF);
	emu_orb(&emu_bl, 0xB0);
	emu_al = emu_get_memory8(emu_cs, emu_di, 0x11D7);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_bx);
	emu_push(emu_cs);
	emu_push(0x2921); f__AB00_08CE_005F_AC14();
l__2921:
	emu_addw(&emu_sp, 0x6);
	emu_pop(&emu_bx);
l__2925:
	emu_addw(&emu_bx, 0x10);
	emu_incw(&emu_di);
	emu_cmpw(&emu_di, 0x9);
	if (emu_di != 0x9) goto l__2904;
	emu_andw(&emu_si, 0xF);
	emu_al = emu_get_memory8(emu_cs, emu_si, 0x13AE);
	emu_cmpb(&emu_al, 0xFF);
	if (emu_al == 0xFF) goto l__2951;
	emu_orw(&emu_si, 0xC0);
	emu_push(emu_ax);
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_get_memory16(emu_ss, emu_bp,  0x2) = 0x0;
	emu_pop(&emu_bp);
	emu_push(emu_ax);
	emu_push(emu_si);
	emu_push(emu_cs);
	emu_push(0x294E); f__AB00_08CE_005F_AC14();
l__294E:
	emu_addw(&emu_sp, 0x6);
l__2951:
	emu_andw(&emu_si, 0xF);
	emu_al = emu_get_memory8(emu_cs, emu_si, 0x13BE);
	emu_cmpb(&emu_al, 0xFF);
	if (emu_al == 0xFF) goto l__2975;
	emu_dl = emu_get_memory8(emu_cs, emu_si, 0x13CE);
	emu_cmpb(&emu_dl, 0xFF);
	if (emu_dl == 0xFF) goto l__2975;
	emu_orw(&emu_si, 0xE0);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_si);
	emu_push(emu_cs);
	emu_push(0x2972); f__AB00_08CE_005F_AC14();
l__2972:
	emu_addw(&emu_sp, 0x6);
l__2975:
	emu_orb(&emu_bh, 0x0);
	emu_push(emu_cs);
	emu_push(0x297C); f__AB00_2976_0001_6780();
l__297C:
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_pop(&emu_ds);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__AB00_2976_0001_6780()
 *
 * @name f__AB00_2976_0001_6780
 * @implements AB00:2976:0001:6780 ()
 *
 * Called From: AB00:2979:0007:3FBD
 * Called From: AB00:2979:000A:191F
 */
void f__AB00_2976_0001_6780()
{
l__2976:

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	emu_popf();
	return;
}

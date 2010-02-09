/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__257A_000D_001A_3B75()
 *
 * @name f__257A_000D_001A_3B75
 * @implements 257A:000D:001A:3B75 ()
 * @implements 257A:005A:000F:3F8D
 * @implements 257A:0069:000F:0422
 * @implements 257A:0078:000D:1790
 * @implements 257A:0085:000B:C6B2
 * @implements 257A:0090:001C:84BD
 * @implements 257A:00AC:000E:7879
 * @implements 257A:00BA:0010:93CF
 * @implements 257A:00CA:000A:CA33
 * @implements 257A:00D4:0004:8D1B
 * @implements 257A:00D8:0016:5546
 * @implements 257A:00EE:000F:F3DA
 * @implements 257A:00FD:0028:837C
 * @implements 257A:0125:0018:B140
 * @implements 257A:013D:000A:8C16
 * @implements 257A:0147:0008:D39B
 * @implements 257A:014F:002A:0675
 * @implements 257A:015D:001C:6ACC
 * @implements 257A:0179:0018:B180
 * @implements 257A:0191:0022:84A4
 * @implements 257A:01B3:0005:816D
 * @implements 257A:01B8:0008:6BB6
 * @implements 257A:01C6:0002:C33A
 * @implements 257A:01CE:0002:C03A
 * @implements 257A:01D0:0010:5104
 *
 * Called From: B4B8:21AE:0015:8E2E
 */
void f__257A_000D_001A_3B75()
{
l__000D:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x2);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax == 0) { /* Unresolved jump */ emu_ip = 0x002A; emu_last_cs = 0x257A; emu_last_ip = 0x0018; emu_last_length = 0x001A; emu_last_crc = 0x3B75; emu_call(); return; }
	emu_cmpw(&emu_ax, 0x1);
	if (emu_ax == 0x1) goto l__005A;
	emu_cmpw(&emu_ax, 0x2);
	if (emu_ax != 0x2) { /* Unresolved jump */ emu_ip = 0x0027; emu_last_cs = 0x257A; emu_last_ip = 0x0022; emu_last_length = 0x001A; emu_last_crc = 0x3B75; emu_call(); return; }
	goto l__00D8;
l__005A:
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x7011), 0xFFFF);
	if (emu_get_memory16(emu_ds, 0x00, 0x7011) != 0xFFFF) { /* Unresolved jump */ emu_ip = 0x00D5; emu_last_cs = 0x257A; emu_last_ip = 0x005F; emu_last_length = 0x000F; emu_last_crc = 0x3F8D; emu_call(); return; }
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0069); emu_cs = 0x1FB5; emu_File_Obsolete2();
l__0069:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ax;
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_cs); emu_push(0x0078); emu_cs = 0x1FB5; emu_File_Delete();
l__0078:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_cs); emu_push(0x0085); emu_cs = 0x1FB5; emu_File_Create();
l__0085:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_ax = 0x1234;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0090); emu_cs = 0x01F7; emu_Tools_Var79E4_Init();
l__0090:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ds, 0x00, 0x76A4) = 0x1234;
	emu_get_memory16(emu_ds, 0x00, 0x76A2) = 0x4321;
	emu_ax = 0x3;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_cs); emu_push(0x00AC); emu_cs = 0x1FB5; emu_File_Open();
l__00AC:
	emu_addw(&emu_sp, 0x6);
	emu_get_memory16(emu_ds, 0x00, 0x7011) = emu_ax;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_cs); emu_push(0x00BA); emu_cs = 0x1FB5; emu_File_Obsolete2();
l__00BA:
	emu_pop(&emu_cx);
	emu_al = emu_get_memory8(emu_ss, emu_bp,  0x6);
	emu_get_memory8(emu_ds, 0x00, 0x7010) = emu_al;
	emu_ax = 0x800;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x00CA); emu_cs = 0x29E8; emu_Input_Flags_SetBits();
l__00CA:
	emu_pop(&emu_cx);
	emu_ax = 0x2D;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x00D4); emu_cs = 0x29E8; emu_Input_HandleInput();
l__00D4:
	emu_pop(&emu_cx);
	goto l__01D0;
l__00D8:
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x7011), 0xFFFF);
	if (emu_get_memory16(emu_ds, 0x00, 0x7011) != 0xFFFF) { /* Unresolved jump */ emu_ip = 0x010A; emu_last_cs = 0x257A; emu_last_ip = 0x00DD; emu_last_length = 0x0016; emu_last_crc = 0x5546; emu_call(); return; }
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_cs); emu_push(0x00EE); emu_cs = 0x1FB5; emu_File_Open();
l__00EE:
	emu_addw(&emu_sp, 0x6);
	emu_get_memory16(emu_ds, 0x00, 0x7011) = emu_ax;
	emu_ax = 0x1234;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x00FD); emu_cs = 0x01F7; emu_Tools_Var79E4_Init();
l__00FD:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ds, 0x00, 0x76A4) = 0x1234;
	emu_get_memory16(emu_ds, 0x00, 0x76A2) = 0x4321;
	emu_get_memory16(emu_ds, 0x00, 0x701B) = 0x1;
	emu_xorw(&emu_ax, emu_ax);
	emu_dx = 0x2;
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_ds);
	emu_ax = 0x7013;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x7011));
	emu_push(emu_cs); emu_push(0x0125); emu_cs = 0x1FB5; emu_File_Read();
l__0125:
	emu_addw(&emu_sp, 0xA);
	emu_xorw(&emu_ax, emu_ax);
	emu_dx = 0x2;
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_ds);
	emu_ax = 0x7015;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x7011));
	emu_push(emu_cs); emu_push(0x013D); emu_cs = 0x1FB5; emu_File_Read();
l__013D:
	emu_addw(&emu_sp, 0xA);
	emu_orw(&emu_dx, emu_dx);
	if (emu_dx == 0) goto l__0147;
	goto l__01CE;
l__0147:
	emu_cmpw(&emu_ax, 0x2);
	if (emu_ax == 0x2) goto l__014F;
	goto l__01CE;
l__014F:
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x7013), 0x41);
	if ((int16)emu_get_memory16(emu_ds, 0x00, 0x7013) >= (int16)0x41) {
		emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x7013), 0x44);
		if ((int16)emu_get_memory16(emu_ds, 0x00, 0x7013) <= (int16)0x44) { /* Unresolved jump */ emu_ip = 0x0164; emu_last_cs = 0x257A; emu_last_ip = 0x015B; emu_last_length = 0x002A; emu_last_crc = 0x0675; emu_call(); return; }
	}
l__015D:
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x7013), 0x2D);
	if (emu_get_memory16(emu_ds, 0x00, 0x7013) != 0x2D) { /* Unresolved jump */ emu_ip = 0x01C8; emu_last_cs = 0x257A; emu_last_ip = 0x0162; emu_last_length = 0x001C; emu_last_crc = 0x6ACC; emu_call(); return; }
	emu_xorw(&emu_ax, emu_ax);
	emu_dx = 0x2;
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_ds);
	emu_ax = 0x7017;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x7011));
	emu_push(emu_cs); emu_push(0x0179); emu_cs = 0x1FB5; emu_File_Read();
l__0179:
	emu_addw(&emu_sp, 0xA);
	emu_xorw(&emu_ax, emu_ax);
	emu_dx = 0x2;
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_ds);
	emu_ax = 0x7019;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x7011));
	emu_push(emu_cs); emu_push(0x0191); emu_cs = 0x1FB5; emu_File_Read();
l__0191:
	emu_addw(&emu_sp, 0xA);
	emu_orw(&emu_dx, emu_dx);
	if (emu_dx != 0) { /* Unresolved jump */ emu_ip = 0x01C0; emu_last_cs = 0x257A; emu_last_ip = 0x0196; emu_last_length = 0x0022; emu_last_crc = 0x84A4; emu_call(); return; }
	emu_cmpw(&emu_ax, 0x2);
	if (emu_ax != 0x2) { /* Unresolved jump */ emu_ip = 0x01C0; emu_last_cs = 0x257A; emu_last_ip = 0x019B; emu_last_length = 0x0022; emu_last_crc = 0x84A4; emu_call(); return; }
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x7017);
	emu_get_memory16(emu_ds, 0x00, 0x7060) = emu_ax;
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x7019);
	emu_get_memory16(emu_ds, 0x00, 0x7062) = emu_ax;
	emu_get_memory8(emu_ds, 0x00, 0x7099) = 0x0;
	emu_push(emu_cs); emu_push(0x01B3); emu_cs = 0x2B6C; f__2B6C_0137_0020_C73F();
l__01B3:
	emu_push(emu_cs); emu_push(0x01B8); emu_cs = 0x2B6C; f__2B6C_0169_001E_6939();
l__01B8:
	emu_get_memory16(emu_ds, 0x00, 0x701B) = 0x0;
	goto l__01C6;
l__01C6:
	goto l__01CE;
l__01CE:
	goto l__01D0;
l__01D0:
	emu_get_memory16(emu_ds, 0x00, 0x76A6) = 0x0;
	emu_al = emu_get_memory8(emu_ss, emu_bp,  0x6);
	emu_get_memory8(emu_ds, 0x00, 0x7010) = emu_al;
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

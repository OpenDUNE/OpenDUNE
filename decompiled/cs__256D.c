/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function emu_Font_LoadFile()
 *
 * @name emu_Font_LoadFile
 * @implements 256D:0004:001C:9F23 ()
 * @implements 256D:0020:0009:37AE
 * @implements 256D:0029:000F:8420
 * @implements 256D:0038:0017:575A
 * @implements 256D:004F:0012:D293
 * @implements 256D:005B:0006:1929
 * @implements 256D:005F:0002:FBBA
 * @implements 256D:0061:000F:2FE8
 * @implements 256D:0070:002C:8C80
 * @implements 256D:009C:0009:2605
 * @implements 256D:00A5:0003:CA1A
 * @implements 256D:00AA:0026:B985
 * @implements 256D:00C6:000A:236E
 * @implements 256D:00D0:0008:8309
 * @implements 256D:00D8:0005:8BCF
 *
 * Called From: 25C4:02DB:0013:8B6C
 * Called From: B4B8:1989:000A:8AD2
 * Called From: B4B8:1989:0006:564A
 * Called From: B4ED:00B6:000D:F799
 */
void emu_Font_LoadFile()
{
l__0004:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x8);
	emu_push(emu_si);
	emu_get_memory16(emu_ss, emu_bp, -0x4) = 0x0;
	emu_get_memory16(emu_ss, emu_bp, -0x6) = 0x0;
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x0020); emu_cs = 0x1FB5; emu_File_Exists();
l__0020:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax != 0) goto l__0029;
	/* Unresolved jump */ emu_ip = 0x00A8; emu_last_cs = 0x256D; emu_last_ip = 0x0026; emu_last_length = 0x0009; emu_last_crc = 0x37AE; emu_call();
l__0029:
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x0038); emu_cs = 0x1FB5; emu_File_Open();
l__0038:
	emu_addw(&emu_sp, 0x6);
	emu_si = emu_ax;
	emu_xorw(&emu_ax, emu_ax);
	emu_dx = 0x2;
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x8);
	emu_push(emu_ax);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x004F); emu_cs = 0x1FB5; emu_File_Read();
l__004F:
	emu_addw(&emu_sp, 0xA);
	emu_orw(&emu_dx, emu_dx);
	if (emu_dx == 0) {
		emu_cmpw(&emu_ax, 0x2);
		if (emu_ax == 0x2) goto l__0061;
	}
l__005B:
	emu_xorw(&emu_dx, emu_dx);
	emu_xorw(&emu_ax, emu_ax);
l__005F:
	goto l__00D8;
l__0061:
	emu_ax = 0x10;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs); emu_push(0x0070); emu_cs = 0x23E1; f__23E1_0004_0014_2BC0();
l__0070:
	emu_addw(&emu_sp, 0x6);
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x8);
	emu_get_memory16(emu_es, emu_bx, 0x0) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x8);
	emu_subw(&emu_ax, 0x2);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x6);
	emu_addw(&emu_ax, 0x2);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_ax);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x009C); emu_cs = 0x1FB5; emu_File_Read();
l__009C:
	emu_addw(&emu_sp, 0xA);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x00A5); emu_cs = 0x1FB5; emu_File_Close();
l__00A5:
	emu_pop(&emu_cx);
	goto l__00AA;
l__00AA:
	emu_get_memory8(emu_ss, emu_bp, -0x1) = 0x0;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0x0);
	if (emu_get_memory8(emu_es, emu_bx, 0x2) == 0x0) {
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x6));
		emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x3), 0x5);
		if (emu_get_memory8(emu_es, emu_bx, 0x3) == 0x5) {
			emu_get_memory8(emu_ss, emu_bp, -0x1) = 0x1;
		}
	}
l__00C6:
	emu_al = emu_get_memory8(emu_ss, emu_bp, -0x1);
	emu_ax = (int8)emu_al;
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax != 0) goto l__00D0;
	goto l__005B;
l__00D0:
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x6);
	goto l__005F;
l__00D8:
	emu_pop(&emu_si);
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

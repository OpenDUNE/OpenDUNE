/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__1DB6_0004_000B_BFBA()
 *
 * @name f__1DB6_0004_000B_BFBA
 * @implements 1DB6:0004:000B:BFBA ()
 * @implements 1DB6:000F:000C:BA0F
 * @implements 1DB6:001B:0021:7587
 * @implements 1DB6:003C:0019:FD4E
 * @implements 1DB6:0055:0011:84E2
 * @implements 1DB6:0066:0008:B7D2
 * @implements 1DB6:006E:0005:90EF
 * @implements 1DB6:0073:000B:7417
 * @implements 1DB6:007E:001A:B99F
 * @implements 1DB6:00B1:0003:1DA4
 * @implements 1DB6:00B6:000F:5886
 * @implements 1DB6:00C5:0015:4555
 * @implements 1DB6:00DA:0014:2E19
 * @implements 1DB6:00EE:000E:212B
 * @implements 1DB6:00FC:0014:A7DD
 * @implements 1DB6:0110:0012:EEC5
 * @implements 1DB6:0122:000D:43EF
 * @implements 1DB6:012F:001B:2F76
 * @implements 1DB6:014D:0010:743C
 * @implements 1DB6:015D:0017:0927
 * @implements 1DB6:0174:0003:CE9A
 * @implements 1DB6:0182:0005:150B
 * @implements 1DB6:0187:0017:B903
 * @implements 1DB6:019E:000B:5DBC
 * @implements 1DB6:01A9:0007:65FE
 * @implements 1DB6:01B0:0005:1164
 * @implements 1DB6:01B5:0005:7870
 * @implements 1DB6:01BA:000A:E0C8
 * @implements 1DB6:01C4:0004:893F
 *
 * Called From: B480:010F:0030:016D
 */
void f__1DB6_0004_000B_BFBA()
{
l__0004:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x2);
	emu_push(emu_cs); emu_push(0x000F); emu_cs = 0x263B; f__263B_0006_001C_9C72();
	goto l__000F;
l__000F:
	emu_get_memory16(emu_ds, 0x00, 0x6E26) = emu_ax;
	emu_ax = 0x3F;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x001B); emu_cs = 0x01F7; emu_Interrupt_Vector_Get();
	goto l__001B;
l__001B:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ds, 0x00, 0x9848) = emu_dx;
	emu_get_memory16(emu_ds, 0x00, 0x9846) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_ax == 0) { /* Unresolved jump */ emu_ip = 0x0061; emu_last_cs = 0x1DB6; emu_last_ip = 0x0029; emu_last_length = 0x0021; emu_last_crc = 0x7587; emu_call(); return; }
	emu_ax = 0x261F;
	emu_push(emu_ax);
	emu_ax = 0x8;
	emu_push(emu_ax);
	emu_ax = 0x3F;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x003C); emu_cs = 0x01F7; emu_Interrupt_Vector_Set();
	goto l__003C;
l__003C:
	emu_addw(&emu_sp, 0x6);
	emu_ax = 0x9;
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x62F7;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x9848));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x9846));
	emu_push(emu_cs); emu_push(0x0055); emu_cs = 0x01F7; emu_Tools_Memmove();
	goto l__0055;
l__0055:
	emu_addw(&emu_sp, 0xA);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x9846));
	emu_get_memory8(emu_es, emu_bx, 0x65) = 0xCB;
	emu_push(emu_cs); emu_push(0x0066); emu_cs = 0x01F7; f__01F7_0428_0010_87B4();
	goto l__0066;
l__0066:
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ax;
	emu_push(emu_cs); emu_push(0x006E); emu_cs = 0x2531; f__2531_0019_0010_2000();
	goto l__006E;
l__006E:
	emu_push(emu_cs); emu_push(0x0073); emu_cs = 0x28FD; f__28FD_000C_0007_5DA9();
	goto l__0073;
l__0073:
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_ax != 0) goto l__007E;
	goto l__0182;
l__007E:
	emu_ax = 0x33F4;
	emu_es = emu_ax;
	emu_cmpw(&emu_get_memory16(emu_es, 0x00, 0x128), 0x0);
	if (emu_get_memory16(emu_es, 0x00, 0x128) != 0x0) goto l__00B6;
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6784));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6782));
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x0098); emu_cs = 0x28E4; emu_ip = 0x0002; emu_last_cs = 0x1DB6; emu_last_ip = 0x0093; emu_last_length = 0x001A; emu_last_crc = 0xB99F; emu_call();
	/* Unresolved jump */ emu_ip = 0x0098; emu_last_cs = 0x1DB6; emu_last_ip = 0x0098; emu_last_length = 0x001A; emu_last_crc = 0xB99F; emu_call();
l__00B1:
	goto l__01C4;
l__00B6:
	emu_ax = 0x33F4;
	emu_es = emu_ax;
	emu_push(emu_get_memory16(emu_es, 0x00, 0x128));
	emu_push(emu_cs); emu_push(0x00C5); emu_cs = 0x01F7; f__01F7_23CC_0013_6B52();
	goto l__00C5;
l__00C5:
	emu_pop(&emu_cx);
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp,  0x12), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp,  0x12) == 0x0) { /* Unresolved jump */ emu_ip = 0x00F1; emu_last_cs = 0x1DB6; emu_last_ip = 0x00CA; emu_last_length = 0x0015; emu_last_crc = 0x4555; emu_call(); return; }
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x00DA); emu_cs = 0x217E; f__217E_08F0_0016_CE0F();
	goto l__00DA;
l__00DA:
	emu_addw(&emu_sp, 0x6);
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x00EE); emu_cs = 0x217E; f__217E_0ABA_001A_9AA0();
	goto l__00EE;
l__00EE:
	emu_addw(&emu_sp, 0x8);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x00FC); emu_cs = 0x1FB5; f__1FB5_15B5_0015_6A00();
	goto l__00FC;
l__00FC:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax == 0) { /* Unresolved jump */ emu_ip = 0x0177; emu_last_cs = 0x1DB6; emu_last_ip = 0x0100; emu_last_length = 0x0014; emu_last_crc = 0xA7DD; emu_call(); return; }
	emu_ax = 0x50;
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x9882;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0110); emu_cs = 0x01F7; f__01F7_276F_000F_E56B();
	goto l__0110;
l__0110:
	emu_addw(&emu_sp, 0x6);
	emu_push(emu_ds);
	emu_ax = 0x9882;
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x998E;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0122); emu_cs = 0x01F7; f__01F7_38F6_0029_8B99();
	goto l__0122;
l__0122:
	emu_addw(&emu_sp, 0x8);
	emu_push(emu_ds);
	emu_ax = 0x9882;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x012F); emu_cs = 0x01F7; f__01F7_39A5_001F_1A5D();
	goto l__012F;
l__012F:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_decw(&emu_ax);
	emu_bx = emu_ax;
	emu_cmpb(&emu_get_memory8(emu_ds, emu_bx, 0x9882), 0x5C);
	if (emu_get_memory8(emu_ds, emu_bx, 0x9882) == 0x5C) goto l__014D;
	emu_push(emu_ds);
	emu_ax = 0x6300;
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x9882;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x014A); emu_cs = 0x01F7; f__01F7_384A_003F_AE43();
	/* Unresolved jump */ emu_ip = 0x014A; emu_last_cs = 0x1DB6; emu_last_ip = 0x014A; emu_last_length = 0x001B; emu_last_crc = 0x2F76; emu_call();
l__014D:
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_ds);
	emu_ax = 0x9882;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x015D); emu_cs = 0x01F7; f__01F7_384A_003F_AE43();
	goto l__015D;
l__015D:
	emu_addw(&emu_sp, 0x8);
	emu_ax = 0x33F4;
	emu_es = emu_ax;
	emu_get_memory16(emu_es, 0x00, 0x128) = 0xFFFF;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_cs); emu_push(0x0174); emu_cs = 0x01F7; f__01F7_0442_0015_6A10();
	goto l__0174;
l__0174:
	emu_pop(&emu_cx);
	goto l__0182;
l__0182:
	emu_push(emu_cs); emu_push(0x0187); emu_cs = 0x23E1; f__23E1_0334_000B_CF65();
	goto l__0187;
l__0187:
	emu_cmpw(&emu_dx, emu_get_memory16(emu_ss, emu_bp,  0xC));
	if ((int16)emu_dx > (int16)emu_get_memory16(emu_ss, emu_bp,  0xC)) goto l__019E;
	if ((int16)emu_dx < (int16)emu_get_memory16(emu_ss, emu_bp,  0xC)) { /* Unresolved jump */ emu_ip = 0x0193; emu_last_cs = 0x1DB6; emu_last_ip = 0x018C; emu_last_length = 0x0017; emu_last_crc = 0xB903; emu_call(); return; }
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0xA));
	if (emu_ax >= emu_get_memory16(emu_ss, emu_bp,  0xA)) goto l__019E;
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x678C));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x678A));
	/* Unresolved jump */ emu_ip = 0x0093; emu_last_cs = 0x1DB6; emu_last_ip = 0x019B; emu_last_length = 0x0017; emu_last_crc = 0xB903; emu_call();
l__019E:
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x10));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_push(emu_cs); emu_push(0x01A9); emu_cs = 0x2649; f__2649_0053_001D_FEB5();
	goto l__01A9;
l__01A9:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_cs); emu_push(0x01B0); emu_cs = 0x29E8; f__29E8_0971_0071_E515();
	goto l__01B0;
l__01B0:
	emu_push(emu_cs); emu_push(0x01B5); emu_cs = 0x2BD1; emu_Empty1();
	goto l__01B5;
l__01B5:
	emu_push(emu_cs); emu_push(0x01BA); emu_cs = 0x1FB5; f__1FB5_18D3_000E_76AC();
	goto l__01BA;
l__01BA:
	emu_get_memory8(emu_ds, 0x00, 0x62F6) = 0x1;
	emu_xorw(&emu_ax, emu_ax);
	goto l__00B1;
l__01C4:
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

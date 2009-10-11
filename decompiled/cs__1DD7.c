/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__1DD7_000E_001C_4593()
 *
 * @name f__1DD7_000E_001C_4593
 * @implements 1DD7:000E:001C:4593 ()
 * @implements 1DD7:002A:002F:A13F
 * @implements 1DD7:002B:002E:813E
 * @implements 1DD7:0065:0005:BBA6
 * @implements 1DD7:006A:0005:8BCF
 *
 * Called From: B4F2:003A:000A:8FD3
 * Called From: B4F2:0439:000C:103B
 * Called From: B4F2:0439:0009:9993
 */
void f__1DD7_000E_001C_4593()
{
l__000E:
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subw(&emu_sp, 0x6);
	emu_push(emu_si);
	emu_movw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x700A));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x700A), emu_si);
	emu_orw(&emu_si, emu_si);
	if (!emu_flags.zf) goto l__002B;
	emu_push(emu_cs);
	emu_push(0x002A); f__1DD7_09DA_000F_D404();
	goto l__002A;
l__002A:
	goto l__002B;
l__002B:
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x6302), 0xFFFF);
	if (!emu_flags.zf) goto l__0065;
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x6310));
	emu_orw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x6312));
	if (emu_flags.zf) goto l__0065;
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x6312));
	emu_movw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x6310));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_dx);
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x700A), 0x0);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x005B; emu_last_cs = 0x1DD7; emu_last_ip = 0x004D; emu_last_length = 0x002E; emu_last_crc = 0x813E; emu_call(); return; }
	emu_movw(&emu_ax, 0x1);
	emu_movw(&emu_bx, 0x10);
	emu_pushf();

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_ss, emu_bp, -0x6);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_push(0x0059);
	switch ((emu_cs << 16) + emu_ip) {
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x1DD7; emu_last_ip = 0x0056; emu_last_length = 0x002E; emu_last_crc = 0x813E;
			emu_call();
			return;
	}
	/* Unresolved jump */ emu_ip = 0x0059; emu_last_cs = 0x1DD7; emu_last_ip = 0x0056; emu_last_length = 0x002E; emu_last_crc = 0x813E; emu_call();
l__0065:
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	goto l__006A;
l__006A:
	emu_pop(&emu_si);
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__1DD7_006F_001C_4403()
 *
 * @name f__1DD7_006F_001C_4403
 * @implements 1DD7:006F:001C:4403 ()
 * @implements 1DD7:008B:002F:916D
 * @implements 1DD7:008C:002E:B16C
 * @implements 1DD7:00C6:0005:BBA6
 * @implements 1DD7:00CB:0005:8BCF
 *
 * Called From: B4F2:0030:000C:02B1
 * Called From: B4F2:0410:000F:AF85
 * Called From: B4F2:0410:0009:8999
 */
void f__1DD7_006F_001C_4403()
{
l__006F:
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subw(&emu_sp, 0x6);
	emu_push(emu_si);
	emu_movw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x700A));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x700C), emu_si);
	emu_orw(&emu_si, emu_si);
	if (!emu_flags.zf) goto l__008C;
	emu_push(emu_cs);
	emu_push(0x008B); f__1DD7_0A7B_001E_4A5A();
	goto l__008B;
l__008B:
	goto l__008C;
l__008C:
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x6344), 0xFFFF);
	if (!emu_flags.zf) goto l__00C6;
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x6352));
	emu_orw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x6354));
	if (emu_flags.zf) goto l__00C6;
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x6354));
	emu_movw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x6352));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_dx);
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x700C), 0x0);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x00BC; emu_last_cs = 0x1DD7; emu_last_ip = 0x00AE; emu_last_length = 0x002E; emu_last_crc = 0xB16C; emu_call(); return; }
	emu_movw(&emu_ax, 0x2);
	emu_movw(&emu_bx, 0x10);
	emu_pushf();

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_ss, emu_bp, -0x6);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_push(0x00BA);
	switch ((emu_cs << 16) + emu_ip) {
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x1DD7; emu_last_ip = 0x00B7; emu_last_length = 0x002E; emu_last_crc = 0xB16C;
			emu_call();
			return;
	}
	/* Unresolved jump */ emu_ip = 0x00BA; emu_last_cs = 0x1DD7; emu_last_ip = 0x00B7; emu_last_length = 0x002E; emu_last_crc = 0xB16C; emu_call();
l__00C6:
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	goto l__00CB;
l__00CB:
	emu_pop(&emu_si);
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__1DD7_01AB_0007_96C6()
 *
 * @name f__1DD7_01AB_0007_96C6
 * @implements 1DD7:01AB:0007:96C6 ()
 * @implements 1DD7:01B2:000E:58D9
 * @implements 1DD7:01C1:0014:43A1
 * @implements 1DD7:01DD:000E:9251
 *
 * Called From: B483:038D:0015:C5B6
 */
void f__1DD7_01AB_0007_96C6()
{
l__01AB:
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_cs);
	emu_push(0x01B2); f__1DD7_01EB_0013_9C3C();
	goto l__01B2;
l__01B2:
	emu_orw(&emu_ax, emu_ax);
	if (emu_flags.zf) goto l__01C1;
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6374));
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x01C0); emu_cs = 0x2756; emu_ip = 0x0E42; emu_last_cs = 0x1DD7; emu_last_ip = 0x01BB; emu_last_length = 0x000E; emu_last_crc = 0x58D9; emu_call();
	/* Unresolved jump */ emu_ip = 0x01C0; emu_last_cs = 0x1DD7; emu_last_ip = 0x01BB; emu_last_length = 0x000E; emu_last_crc = 0x58D9; emu_call();
l__01C1:
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x6396), 0x0);
	if (emu_flags.zf) goto l__01DD;
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x638C));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x638A));
	emu_push(emu_cs); emu_push(0x01D5); emu_cs = 0x23E1; f__23E1_01C2_0011_24E8();
	/* Unresolved jump */ emu_ip = 0x01D5; emu_last_cs = 0x1DD7; emu_last_ip = 0x01D0; emu_last_length = 0x0014; emu_last_crc = 0x43A1; emu_call();
l__01DD:
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x638C), 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x638A), 0x0);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__1DD7_01EB_0013_9C3C()
 *
 * @name f__1DD7_01EB_0013_9C3C
 * @implements 1DD7:01EB:0013:9C3C ()
 * @implements 1DD7:01FE:000B:EF5A
 * @implements 1DD7:0209:0004:EA39
 * @implements 1DD7:020B:0002:C23A
 * @implements 1DD7:020D:0004:9539
 * @implements 1DD7:0211:0002:2597
 *
 * Called From: 0642:0240:0005:7A4B
 * Called From: 1DD7:01AF:0007:96C6
 * Called From: B483:047E:0005:7A4B
 * Called From: B4CD:0E4D:0005:7A4B
 * Called From: B4F2:0272:0005:7A4B
 * Called From: B511:1497:0005:7A4B
 */
void f__1DD7_01EB_0013_9C3C()
{
l__01EB:
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x6374), 0xFFFF);
	if (emu_flags.zf) goto l__020D;
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6374));
	emu_push(emu_cs); emu_push(0x01FE); emu_cs = 0x2756; f__2756_0E36_0006_85ED();
	goto l__01FE;
l__01FE:
	emu_pop(&emu_cx);
	emu_cmpw(&emu_ax, 0x2);
	if (!emu_flags.zf) goto l__0209;
	emu_movw(&emu_ax, 0x1);
	goto l__020B;
l__0209:
	emu_xorw(&emu_ax, emu_ax);
	goto l__020B;
l__020B:
	goto l__0211;
l__020D:
	emu_xorw(&emu_ax, emu_ax);
	goto l__020B;
l__0211:
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__1DD7_022D_0015_1956()
 *
 * @name f__1DD7_022D_0015_1956
 * @implements 1DD7:022D:0015:1956 ()
 * @implements 1DD7:0242:0006:2081
 *
 * Called From: B483:02DA:000B:5099
 * Called From: B4E9:037B:000C:5509
 * Called From: B4F2:00FA:0014:7995
 * Called From: B511:0D65:000C:5509
 * Called From: B511:0FE1:000E:7213
 */
void f__1DD7_022D_0015_1956()
{
l__022D:
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_movw(&emu_ax, 0xFF);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0xFF);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x0242); f__1DD7_0248_0014_9236();
	goto l__0242;
l__0242:
	emu_addw(&emu_sp, 0x8);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__1DD7_0248_0014_9236()
 *
 * @name f__1DD7_0248_0014_9236
 * @implements 1DD7:0248:0014:9236 ()
 * @implements 1DD7:025C:000A:861E
 * @implements 1DD7:0396:0005:8BCF
 *
 * Called From: 1DD7:023F:0015:1956
 */
void f__1DD7_0248_0014_9236()
{
l__0248:
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subw(&emu_sp, 0x4);
	emu_push(emu_si);
	emu_movw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x700A), 0x0);
	if (!emu_flags.zf) goto l__025C;
	goto l__0396;
l__025C:
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x6374), 0xFFFF);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0266; emu_last_cs = 0x1DD7; emu_last_ip = 0x0261; emu_last_length = 0x000A; emu_last_crc = 0x861E; emu_call(); return; }
	goto l__0396;
l__0396:
	emu_pop(&emu_si);
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__1DD7_039B_0008_D3BD()
 *
 * @name f__1DD7_039B_0008_D3BD
 * @implements 1DD7:039B:0008:D3BD ()
 * @implements 1DD7:03A3:000D:7940
 * @implements 1DD7:03B0:0015:9C30
 * @implements 1DD7:03C5:000C:B4EE
 * @implements 1DD7:03D1:0008:F825
 * @implements 1DD7:03D9:000C:CE7B
 * @implements 1DD7:03E5:000C:8D1D
 * @implements 1DD7:03F1:000A:67C9
 * @implements 1DD7:03FB:0002:2597
 *
 * Called From: B480:0285:0017:043A
 */
void f__1DD7_039B_0008_D3BD()
{
l__039B:
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_cs); emu_push(0x03A3); emu_cs = 0x2756; f__2756_07DA_0048_9F5D();
	goto l__03A3;
l__03A3:
	emu_movw(&emu_ax, 0x2BD1);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x6);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x03B0); emu_cs = 0x2756; f__2756_0A81_0022_9F5C();
	goto l__03B0;
l__03B0:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x639C), emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_movw(&emu_dx, 0x3C);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x639C));
	emu_push(emu_cs); emu_push(0x03C5); emu_cs = 0x2756; f__2756_0B8F_0025_D5D8();
	goto l__03C5;
l__03C5:
	emu_addw(&emu_sp, 0x6);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x639C));
	emu_push(emu_cs); emu_push(0x03D1); emu_cs = 0x2756; f__2756_0A59_0023_D969();
	goto l__03D1;
l__03D1:
	emu_pop(&emu_cx);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_cs);
	emu_push(0x03D9); f__1DD7_0F43_004A_CF07();
	goto l__03D9;
l__03D9:
	emu_pop(&emu_cx);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x6D8D), emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x03E5); f__1DD7_10C9_004D_AF4E();
	goto l__03E5;
l__03E5:
	emu_pop(&emu_cx);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x6D8B), emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_cs);
	emu_push(0x03F1); f__1DD7_0EE2_003D_B019();
	goto l__03F1;
l__03F1:
	emu_pop(&emu_cx);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x6D8F), emu_ax);
	emu_movw(&emu_ax, 0x1);
	goto l__03FB;
l__03FB:
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__1DD7_03FD_000C_8340()
 *
 * @name f__1DD7_03FD_000C_8340
 * @implements 1DD7:03FD:000C:8340 ()
 * @implements 1DD7:0409:000B:8DF3
 * @implements 1DD7:0414:0005:3F33
 * @implements 1DD7:0419:0005:FC05
 * @implements 1DD7:041E:0003:3797
 *
 * Called From: B500:0003:0008:FE1F
 */
void f__1DD7_03FD_000C_8340()
{
l__03FD:
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x639C));
	emu_push(emu_cs); emu_push(0x0409); emu_cs = 0x2756; f__2756_0827_0035_3DAA();
	goto l__0409;
l__0409:
	emu_pop(&emu_cx);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x639C), 0xFFFF);
	emu_push(emu_cs);
	emu_push(0x0414); f__1DD7_102C_001E_4902();
	goto l__0414;
l__0414:
	emu_push(emu_cs);
	emu_push(0x0419); f__1DD7_11E8_000E_E72A();
	goto l__0419;
l__0419:
	emu_push(emu_cs);
	emu_push(0x041E); f__1DD7_0F32_000C_96B1();
	goto l__041E;
l__041E:
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__1DD7_0477_000E_5C89()
 *
 * @name f__1DD7_0477_000E_5C89
 * @implements 1DD7:0477:000E:5C89 ()
 * @implements 1DD7:0485:0005:BA32
 *
 * Called From: 0AEC:0466:0010:6B0D
 * Called From: 10E4:0773:0009:CFBF
 * Called From: 10E4:0773:0006:FAE3
 * Called From: B483:03E7:0012:DE0F
 * Called From: B4E9:03D1:000A:EDFF
 * Called From: B518:0444:000C:4297
 * Called From: B518:04D3:000C:5097
 */
void f__1DD7_0477_000E_5C89()
{
l__0477:
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_movw(&emu_ax, 0xFF);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x0485); f__1DD7_048A_0017_3EEB();
	goto l__0485;
l__0485:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__1DD7_048A_0017_3EEB()
 *
 * @name f__1DD7_048A_0017_3EEB
 * @implements 1DD7:048A:0017:3EEB ()
 * @implements 1DD7:049E:0003:DDAA
 * @implements 1DD7:04A1:000F:E416
 * @implements 1DD7:04B0:000A:3012
 * @implements 1DD7:05BD:000B:351D
 * @implements 1DD7:05C8:0008:5F17
 * @implements 1DD7:05CC:0004:DE52
 *
 * Called From: 1DD7:0482:000E:5C89
 * Called From: B483:0149:0007:3640
 */
void f__1DD7_048A_0017_3EEB()
{
l__048A:
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_di, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_orw(&emu_si, emu_si);
	if (!(emu_flags.sf != emu_flags.of)) {
		emu_cmpw(&emu_si, 0x78);
		if ((emu_flags.sf != emu_flags.of)) goto l__04A1;
	}
	goto l__049E;
l__049E:
	goto l__05CC;
l__04A1:
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x700A), 0x0);
	if (!emu_flags.zf) goto l__04B0;
	emu_cmpw(&emu_si, 0x1);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) goto l__04B0;
	goto l__05CC;
l__04B0:
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x6302), 0xFFFF);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x04BA; emu_last_cs = 0x1DD7; emu_last_ip = 0x04B5; emu_last_length = 0x000A; emu_last_crc = 0x3012; emu_call(); return; }
	goto l__05BD;
l__05BD:
	emu_push(emu_di);
	emu_push(emu_si);
	emu_push(emu_ds);
	emu_movw(&emu_ax, 0x6302);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x05C8); f__1DD7_1C3C_0020_9C6E();
	goto l__05C8;
l__05C8:
	emu_addw(&emu_sp, 0x8);
	goto l__05CC;
l__05CC:
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__1DD7_05D0_0014_A7A2()
 *
 * @name f__1DD7_05D0_0014_A7A2
 * @implements 1DD7:05D0:0014:A7A2 ()
 * @implements 1DD7:05E4:0014:F82C
 * @implements 1DD7:06DA:0008:C149
 * @implements 1DD7:0713:0002:A2BA
 * @implements 1DD7:0715:0004:893F
 *
 * Called From: B483:030D:001A:FE1A
 * Called From: B483:0345:001C:6F5D
 */
void f__1DD7_05D0_0014_A7A2()
{
l__05D0:
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subw(&emu_sp, 0x10);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x0);
	emu_push(emu_cs);
	emu_push(0x05E4); f__1DD7_09DA_000F_D404();
	goto l__05E4;
l__05E4:
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x6302), 0xFFFF);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x05F8; emu_last_cs = 0x1DD7; emu_last_ip = 0x05EA; emu_last_length = 0x0014; emu_last_crc = 0xF82C; emu_call(); return; }
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x6310));
	emu_orw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x6312));
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x05F8; emu_last_cs = 0x1DD7; emu_last_ip = 0x05F3; emu_last_length = 0x0014; emu_last_crc = 0xF82C; emu_call(); return; }
	goto l__0713;
l__06DA:
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x8));
	goto l__0715;
l__0713:
	goto l__06DA;
l__0715:
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__1DD7_0719_0014_A78C()
 *
 * @name f__1DD7_0719_0014_A78C
 * @implements 1DD7:0719:0014:A78C ()
 * @implements 1DD7:072D:0014:9BBE
 * @implements 1DD7:0823:0008:F549
 * @implements 1DD7:0884:0002:8EBA
 * @implements 1DD7:0886:0004:893F
 *
 * Called From: B483:02F3:0019:9BD8
 * Called From: B483:0329:001C:FF11
 */
void f__1DD7_0719_0014_A78C()
{
l__0719:
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subw(&emu_sp, 0x10);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x0);
	emu_push(emu_cs);
	emu_push(0x072D); f__1DD7_0A7B_001E_4A5A();
	goto l__072D;
l__072D:
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x6344), 0xFFFF);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0741; emu_last_cs = 0x1DD7; emu_last_ip = 0x0733; emu_last_length = 0x0014; emu_last_crc = 0x9BBE; emu_call(); return; }
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x6352));
	emu_orw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x6354));
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0741; emu_last_cs = 0x1DD7; emu_last_ip = 0x073C; emu_last_length = 0x0014; emu_last_crc = 0x9BBE; emu_call(); return; }
	goto l__0884;
l__0823:
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x8));
	goto l__0886;
l__0884:
	goto l__0823;
l__0886:
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__1DD7_088A_0026_5144()
 *
 * @name f__1DD7_088A_0026_5144
 * @implements 1DD7:088A:0026:5144 ()
 * @implements 1DD7:08BE:0002:D53A
 * @implements 1DD7:08C2:0020:BD30
 * @implements 1DD7:08E5:0005:D1A6
 * @implements 1DD7:08EA:0004:893F
 *
 * Called From: 0642:02D0:0027:9BAA
 * Called From: B4BE:0215:0005:6B6D
 */
void f__1DD7_088A_0026_5144()
{
l__088A:
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subw(&emu_sp, 0x6);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x0);
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x6344), 0xFFFF);
	if (emu_flags.zf) goto l__08C2;
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x636C), 0xFFFF);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x08C0; emu_last_cs = 0x1DD7; emu_last_ip = 0x08A1; emu_last_length = 0x0026; emu_last_crc = 0x5144; emu_call(); return; }
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x636C));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6344));
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x08B0); emu_cs = 0x2756; emu_ip = 0x0EBA; emu_last_cs = 0x1DD7; emu_last_ip = 0x08AB; emu_last_length = 0x0026; emu_last_crc = 0x5144; emu_call();
	/* Unresolved jump */ emu_ip = 0x08B0; emu_last_cs = 0x1DD7; emu_last_ip = 0x08AB; emu_last_length = 0x0026; emu_last_crc = 0x5144; emu_call();
l__08BE:
	goto l__08EA;
l__08C2:
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x6352));
	emu_orw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x6354));
	if (emu_flags.zf) goto l__08E5;
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x6354));
	emu_movw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x6352));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_dx);
	emu_movw(&emu_ax, 0x0);
	emu_movw(&emu_bx, 0x7);
	emu_pushf();

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_ss, emu_bp, -0x6);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_push(0x08E2);
	switch ((emu_cs << 16) + emu_ip) {
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x1DD7; emu_last_ip = 0x08DF; emu_last_length = 0x0020; emu_last_crc = 0xBD30;
			emu_call();
			return;
	}
	/* Unresolved jump */ emu_ip = 0x08E2; emu_last_cs = 0x1DD7; emu_last_ip = 0x08DF; emu_last_length = 0x0020; emu_last_crc = 0xBD30; emu_call();
l__08E5:
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	goto l__08BE;
l__08EA:
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__1DD7_08EE_000E_5C89()
 *
 * @name f__1DD7_08EE_000E_5C89
 * @implements 1DD7:08EE:000E:5C89 ()
 * @implements 1DD7:08FC:0005:BA32
 *
 * Called From: B483:035A:0012:13DA
 * Called From: B483:035A:0015:564E
 */
void f__1DD7_08EE_000E_5C89()
{
l__08EE:
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_movw(&emu_ax, 0xFF);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x08FC); f__1DD7_0901_001E_8420();
	goto l__08FC;
l__08FC:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__1DD7_0901_001E_8420()
 *
 * @name f__1DD7_0901_001E_8420
 * @implements 1DD7:0901:001E:8420 ()
 * @implements 1DD7:091C:0003:DD0D
 * @implements 1DD7:091F:000A:F6B7
 * @implements 1DD7:09BE:0014:613D
 * @implements 1DD7:09D6:0004:DE52
 *
 * Called From: 1DD7:08F9:000E:5C89
 */
void f__1DD7_0901_001E_8420()
{
l__0901:
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_di, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_orw(&emu_si, emu_si);
	if (!(emu_flags.sf != emu_flags.of)) {
		emu_cmpw(&emu_si, 0x78);
		if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) {
			emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x700C), 0x0);
			if (!emu_flags.zf) goto l__091F;
		}
	}
	goto l__091C;
l__091C:
	goto l__09D6;
l__091F:
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x6344), 0xFFFF);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0929; emu_last_cs = 0x1DD7; emu_last_ip = 0x0924; emu_last_length = 0x000A; emu_last_crc = 0xF6B7; emu_call(); return; }
	goto l__09BE;
l__09BE:
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x6352));
	emu_orw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x6354));
	if (emu_flags.zf) goto l__09D6;
	emu_push(emu_di);
	emu_push(emu_si);
	emu_push(emu_ds);
	emu_movw(&emu_ax, 0x6344);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x09D2); f__1DD7_1C3C_0020_9C6E();
	/* Unresolved jump */ emu_ip = 0x09D2; emu_last_cs = 0x1DD7; emu_last_ip = 0x09CF; emu_last_length = 0x0014; emu_last_crc = 0x613D; emu_call();
l__09D6:
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__1DD7_09DA_000F_D404()
 *
 * @name f__1DD7_09DA_000F_D404
 * @implements 1DD7:09DA:000F:D404 ()
 * @implements 1DD7:0A40:001D:A972
 * @implements 1DD7:0A78:0003:2E57
 *
 * Called From: 1DD7:0027:001C:4593
 * Called From: 1DD7:05E1:0014:A7A2
 */
void f__1DD7_09DA_000F_D404()
{
l__09DA:
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_si);
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x6302), 0xFFFF);
	if (emu_flags.zf) goto l__0A40;
	emu_xorw(&emu_si, emu_si);
	/* Unresolved jump */ emu_ip = 0x0A39; emu_last_cs = 0x1DD7; emu_last_ip = 0x09E7; emu_last_length = 0x000F; emu_last_crc = 0xD404; emu_call();
l__0A40:
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x6310));
	emu_orw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x6312));
	if (emu_flags.zf) goto l__0A78;
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x6372), 0xFFFF);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0A65; emu_last_cs = 0x1DD7; emu_last_ip = 0x0A4E; emu_last_length = 0x001D; emu_last_crc = 0xA972; emu_call(); return; }
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6372));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6344));
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x0A5D); emu_cs = 0x2756; emu_ip = 0x0F26; emu_last_cs = 0x1DD7; emu_last_ip = 0x0A58; emu_last_length = 0x001D; emu_last_crc = 0xA972; emu_call();
	/* Unresolved jump */ emu_ip = 0x0A5D; emu_last_cs = 0x1DD7; emu_last_ip = 0x0A58; emu_last_length = 0x001D; emu_last_crc = 0xA972; emu_call();
l__0A78:
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__1DD7_0A7B_001E_4A5A()
 *
 * @name f__1DD7_0A7B_001E_4A5A
 * @implements 1DD7:0A7B:001E:4A5A ()
 * @implements 1DD7:0AB2:0018:0CC6
 * @implements 1DD7:0ACE:0002:2597
 *
 * Called From: 1DD7:0088:001C:4403
 * Called From: 1DD7:072A:0014:A78C
 * Called From: B483:02CF:001D:5E6C
 * Called From: B4F2:0401:0011:E3EC
 */
void f__1DD7_0A7B_001E_4A5A()
{
l__0A7B:
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x6344), 0xFFFF);
	if (emu_flags.zf) goto l__0AB2;
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x636C), 0xFFFF);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0AB0; emu_last_cs = 0x1DD7; emu_last_ip = 0x0A8A; emu_last_length = 0x001E; emu_last_crc = 0x4A5A; emu_call(); return; }
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x636C));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6344));
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x0A99); emu_cs = 0x2756; emu_ip = 0x0EAE; emu_last_cs = 0x1DD7; emu_last_ip = 0x0A94; emu_last_length = 0x001E; emu_last_crc = 0x4A5A; emu_call();
	/* Unresolved jump */ emu_ip = 0x0A99; emu_last_cs = 0x1DD7; emu_last_ip = 0x0A94; emu_last_length = 0x001E; emu_last_crc = 0x4A5A; emu_call();
l__0AB2:
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x6352));
	emu_orw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x6354));
	if (emu_flags.zf) goto l__0ACE;
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_movw(&emu_ax, 0x6344);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x0ACA); f__1DD7_1C3C_0020_9C6E();
	/* Unresolved jump */ emu_ip = 0x0ACA; emu_last_cs = 0x1DD7; emu_last_ip = 0x0AC7; emu_last_length = 0x0018; emu_last_crc = 0x0CC6; emu_call();
l__0ACE:
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__1DD7_0B53_0025_36F7()
 *
 * @name f__1DD7_0B53_0025_36F7
 * @implements 1DD7:0B53:0025:36F7 ()
 * @implements 1DD7:0B7D:0019:AE96
 * @implements 1DD7:0B9A:0002:2597
 *
 * Called From: B4AE:0125:0005:FB00
 * Called From: B4B8:1C5C:0005:FB00
 * Called From: B4BE:0069:0005:FB00
 * Called From: B4F2:0241:000C:7BCE
 * Called From: B503:0500:0005:FB00
 * Called From: B511:0E23:000C:15CC
 * Called From: B511:1436:0019:858B
 * Called From: B518:054D:0006:9F01
 */
void f__1DD7_0B53_0025_36F7()
{
l__0B53:
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x6344), 0xFFFF);
	if (emu_flags.zf) goto l__0B7D;
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x636C), 0xFFFF);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0B7B; emu_last_cs = 0x1DD7; emu_last_ip = 0x0B62; emu_last_length = 0x0025; emu_last_crc = 0x36F7; emu_call(); return; }
	emu_movw(&emu_ax, 0x7D0);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x636C));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6344));
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x0B78); emu_cs = 0x2756; emu_ip = 0x0ECC; emu_last_cs = 0x1DD7; emu_last_ip = 0x0B73; emu_last_length = 0x0025; emu_last_crc = 0x36F7; emu_call();
	/* Unresolved jump */ emu_ip = 0x0B78; emu_last_cs = 0x1DD7; emu_last_ip = 0x0B73; emu_last_length = 0x0025; emu_last_crc = 0x36F7; emu_call();
l__0B7D:
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x6352));
	emu_orw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x6354));
	if (emu_flags.zf) goto l__0B9A;
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x1);
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_movw(&emu_ax, 0x6344);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x0B96); f__1DD7_1C3C_0020_9C6E();
	/* Unresolved jump */ emu_ip = 0x0B96; emu_last_cs = 0x1DD7; emu_last_ip = 0x0B93; emu_last_length = 0x0019; emu_last_crc = 0xAE96; emu_call();
l__0B9A:
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__1DD7_0EE2_003D_B019()
 *
 * @name f__1DD7_0EE2_003D_B019
 * @implements 1DD7:0EE2:003D:B019 ()
 * @implements 1DD7:0F29:0004:68F2
 * @implements 1DD7:0F2D:0005:8BCF
 *
 * Called From: 1DD7:03EE:000C:8D1D
 */
void f__1DD7_0EE2_003D_B019()
{
l__0EE2:
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subw(&emu_sp, 0x4);
	emu_push(emu_si);
	emu_movw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_bx, emu_si);
	emu_movb(&emu_cl, 0x2);
	emu_shlw(&emu_bx, emu_cl);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, emu_bx, 0x63AC));
	emu_movw(&emu_dx, emu_get_memory16(emu_ds, emu_bx, 0x63AA));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_dx);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_flags.zf) goto l__0F29;
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_movw(&emu_ax, 0x656E);
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_movw(&emu_ax, 0x6374);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs);
	/* Unresolved call */ emu_push(0x0F1F); emu_ip = 0x12CE; emu_last_cs = 0x1DD7; emu_last_ip = 0x0F1C; emu_last_length = 0x003D; emu_last_crc = 0xB019; emu_call();
	/* Unresolved jump */ emu_ip = 0x0F1F; emu_last_cs = 0x1DD7; emu_last_ip = 0x0F1C; emu_last_length = 0x003D; emu_last_crc = 0xB019; emu_call();
l__0F29:
	emu_movw(&emu_ax, emu_si);
	goto l__0F2D;
l__0F2D:
	emu_pop(&emu_si);
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__1DD7_0F32_000C_96B1()
 *
 * @name f__1DD7_0F32_000C_96B1
 * @implements 1DD7:0F32:000C:96B1 ()
 * @implements 1DD7:0F3E:0005:BA32
 *
 * Called From: 1DD7:041B:0005:FC05
 */
void f__1DD7_0F32_000C_96B1()
{
l__0F32:
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_ds);
	emu_movw(&emu_ax, 0x6374);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x0F3E); f__1DD7_1696_0011_A4E3();
	goto l__0F3E;
l__0F3E:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__1DD7_0F43_004A_CF07()
 *
 * @name f__1DD7_0F43_004A_CF07
 * @implements 1DD7:0F43:004A:CF07 ()
 * @implements 1DD7:0FEA:0004:74F2
 * @implements 1DD7:1024:0002:A23A
 * @implements 1DD7:1026:0006:F7CE
 *
 * Called From: 1DD7:03D6:0008:F825
 */
void f__1DD7_0F43_004A_CF07()
{
l__0F43:
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subw(&emu_sp, 0x8);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax, emu_si);
	emu_movw(&emu_dx, 0xC);
	emu_imuluw(&emu_ax, emu_dx);
	emu_movw(&emu_bx, emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, emu_bx, 0x63D0));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax);
	emu_movw(&emu_ax, emu_si);
	emu_movw(&emu_dx, 0xC);
	emu_imuluw(&emu_ax, emu_dx);
	emu_movw(&emu_bx, emu_ax);
	emu_movw(&emu_di, emu_get_memory16(emu_ds, emu_bx, 0x63CE));
	emu_movw(&emu_ax, emu_si);
	emu_movw(&emu_dx, 0xC);
	emu_imuluw(&emu_ax, emu_dx);
	emu_movw(&emu_bx, emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, emu_bx, 0x63C8));
	emu_movw(&emu_dx, emu_get_memory16(emu_ds, emu_bx, 0x63C6));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_dx);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0F8D; emu_last_cs = 0x1DD7; emu_last_ip = 0x0F88; emu_last_length = 0x004A; emu_last_crc = 0xCF07; emu_call(); return; }
	goto l__1024;
l__0FEA:
	emu_movw(&emu_ax, emu_si);
	goto l__1026;
l__1024:
	goto l__0FEA;
l__1026:
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
 * Decompiled function f__1DD7_102C_001E_4902()
 *
 * @name f__1DD7_102C_001E_4902
 * @implements 1DD7:102C:001E:4902 ()
 * @implements 1DD7:107C:003F:0D91
 * @implements 1DD7:10C7:0002:2597
 *
 * Called From: 1DD7:0411:000B:8DF3
 */
void f__1DD7_102C_001E_4902()
{
l__102C:
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x6344), 0xFFFF);
	if (emu_flags.zf) goto l__107C;
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x636C), 0xFFFF);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x1061; emu_last_cs = 0x1DD7; emu_last_ip = 0x103B; emu_last_length = 0x001E; emu_last_crc = 0x4902; emu_call(); return; }
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x636C));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6344));
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x104A); emu_cs = 0x2756; emu_ip = 0x0EAE; emu_last_cs = 0x1DD7; emu_last_ip = 0x1045; emu_last_length = 0x001E; emu_last_crc = 0x4902; emu_call();
	/* Unresolved jump */ emu_ip = 0x104A; emu_last_cs = 0x1DD7; emu_last_ip = 0x1045; emu_last_length = 0x001E; emu_last_crc = 0x4902; emu_call();
l__107C:
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x6354));
	emu_movw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x6352));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x6312));
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x10BB; emu_last_cs = 0x1DD7; emu_last_ip = 0x1087; emu_last_length = 0x003F; emu_last_crc = 0x0D91; emu_call(); return; }
	emu_cmpw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x6310));
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x10BB; emu_last_cs = 0x1DD7; emu_last_ip = 0x108D; emu_last_length = 0x003F; emu_last_crc = 0x0D91; emu_call(); return; }
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x6354), 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x6352), 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x6358), 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x6356), 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x6348), 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x6346), 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x6368), 0xFFFF);
	goto l__10C7;
l__10C7:
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__1DD7_10C9_004D_AF4E()
 *
 * @name f__1DD7_10C9_004D_AF4E
 * @implements 1DD7:10C9:004D:AF4E ()
 * @implements 1DD7:1175:0004:5C72
 * @implements 1DD7:11E0:0002:89BA
 * @implements 1DD7:11E2:0006:F7CE
 *
 * Called From: 1DD7:03E2:000C:CE7B
 */
void f__1DD7_10C9_004D_AF4E()
{
l__10C9:
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subw(&emu_sp, 0xA);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax, emu_si);
	emu_movw(&emu_dx, 0xC);
	emu_imuluw(&emu_ax, emu_dx);
	emu_movw(&emu_bx, emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, emu_bx, 0x6478));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_ax);
	emu_movw(&emu_ax, emu_si);
	emu_movw(&emu_dx, 0xC);
	emu_imuluw(&emu_ax, emu_dx);
	emu_movw(&emu_bx, emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, emu_bx, 0x6476));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax);
	emu_movw(&emu_ax, emu_si);
	emu_movw(&emu_dx, 0xC);
	emu_imuluw(&emu_ax, emu_dx);
	emu_movw(&emu_bx, emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, emu_bx, 0x6470));
	emu_movw(&emu_dx, emu_get_memory16(emu_ds, emu_bx, 0x646E));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_dx);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x1116; emu_last_cs = 0x1DD7; emu_last_ip = 0x1111; emu_last_length = 0x004D; emu_last_crc = 0xAF4E; emu_call(); return; }
	goto l__11E0;
l__1175:
	emu_movw(&emu_ax, emu_si);
	goto l__11E2;
l__11E0:
	goto l__1175;
l__11E2:
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
 * Decompiled function f__1DD7_11E8_000E_E72A()
 *
 * @name f__1DD7_11E8_000E_E72A
 * @implements 1DD7:11E8:000E:E72A ()
 * @implements 1DD7:1280:003F:C31F
 * @implements 1DD7:12CB:0003:2E57
 *
 * Called From: 1DD7:0416:0005:3F33
 */
void f__1DD7_11E8_000E_E72A()
{
l__11E8:
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_si);
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x6302), 0xFFFF);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x11F6; emu_last_cs = 0x1DD7; emu_last_ip = 0x11F1; emu_last_length = 0x000E; emu_last_crc = 0xE72A; emu_call(); return; }
	goto l__1280;
l__1280:
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x6354));
	emu_movw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x6352));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x6312));
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x12BF; emu_last_cs = 0x1DD7; emu_last_ip = 0x128B; emu_last_length = 0x003F; emu_last_crc = 0xC31F; emu_call(); return; }
	emu_cmpw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x6310));
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x12BF; emu_last_cs = 0x1DD7; emu_last_ip = 0x1291; emu_last_length = 0x003F; emu_last_crc = 0xC31F; emu_call(); return; }
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x6312), 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x6310), 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x6316), 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x6314), 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x6306), 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x6304), 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x6326), 0xFFFF);
	goto l__12CB;
l__12CB:
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__1DD7_1696_0011_A4E3()
 *
 * @name f__1DD7_1696_0011_A4E3
 * @implements 1DD7:1696:0011:A4E3 ()
 * @implements 1DD7:16A7:0016:CA70
 * @implements 1DD7:16D4:0029:9C96
 * @implements 1DD7:16FD:0002:D43A
 * @implements 1DD7:1727:0010:D59A
 * @implements 1DD7:1737:0012:C80C
 * @implements 1DD7:1749:0033:775B
 *
 * Called From: 1DD7:0F3B:000C:96B1
 */
void f__1DD7_1696_0011_A4E3()
{
l__1696:
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subw(&emu_sp, 0x4);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (!emu_flags.zf) goto l__16A7;
	/* Unresolved jump */ emu_ip = 0x1778; emu_last_cs = 0x1DD7; emu_last_ip = 0x16A4; emu_last_length = 0x0011; emu_last_crc = 0xA4E3; emu_call();
l__16A7:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x24), 0xFFFF);
	if (emu_flags.zf) goto l__16D4;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x24));
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x16BD); emu_cs = 0x2756; emu_ip = 0x0B49; emu_last_cs = 0x1DD7; emu_last_ip = 0x16B8; emu_last_length = 0x0016; emu_last_crc = 0xCA70; emu_call();
	/* Unresolved jump */ emu_ip = 0x16BD; emu_last_cs = 0x1DD7; emu_last_ip = 0x16B8; emu_last_length = 0x0016; emu_last_crc = 0xCA70; emu_call();
l__16D4:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x0), 0xFFFF);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x16FF; emu_last_cs = 0x1DD7; emu_last_ip = 0x16DB; emu_last_length = 0x0029; emu_last_crc = 0x9C96; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x10));
	emu_movw(&emu_dx, emu_get_memory16(emu_es, emu_bx, 0xE));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_dx);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (!emu_flags.zf) {
		emu_movw(&emu_bx, 0x3);
		emu_pushf();

		/* Call based on memory/register values */
		emu_ip = emu_get_memory16(emu_ss, emu_bp, -0x4);
		emu_push(emu_cs);
		emu_cs = emu_get_memory16(emu_ss, emu_bp, -0x2);
		emu_push(0x16FD);
		switch ((emu_cs << 16) + emu_ip) {
			default:
				/* In case we don't know the call point yet, call the dynamic call */
				emu_last_cs = 0x1DD7; emu_last_ip = 0x16FA; emu_last_length = 0x0029; emu_last_crc = 0x9C96;
				emu_call();
				return;
		}
	}
	goto l__16FD;
l__16FD:
	goto l__1727;
l__1727:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x10));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xE));
	emu_push(emu_cs); emu_push(0x1737); emu_cs = 0x23E1; f__23E1_01C2_0011_24E8();
	goto l__1737;
l__1737:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x14));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x12));
	emu_push(emu_cs); emu_push(0x1749); emu_cs = 0x23E1; f__23E1_01C2_0011_24E8();
	goto l__1749;
l__1749:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0x14), 0x0);
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0x12), 0x0);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0x10), 0x0);
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0xE), 0x0);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0x4), 0x0);
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0x2), 0x0);
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__1DD7_1C3C_0020_9C6E()
 *
 * @name f__1DD7_1C3C_0020_9C6E
 * @implements 1DD7:1C3C:0020:9C6E ()
 * @implements 1DD7:1C5C:000B:2475
 * @implements 1DD7:1DE1:0004:893F
 *
 * Called From: 1DD7:05C5:000B:351D
 */
void f__1DD7_1C3C_0020_9C6E()
{
l__1C3C:
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subw(&emu_sp, 0x8);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x10));
	emu_movw(&emu_dx, emu_get_memory16(emu_es, emu_bx, 0xE));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_dx);
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp,  0xA), 0xFFFF);
	if (!emu_flags.zf) goto l__1C5C;
	goto l__1DE1;
l__1C5C:
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x4));
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x1C67; emu_last_cs = 0x1DD7; emu_last_ip = 0x1C62; emu_last_length = 0x000B; emu_last_crc = 0x2475; emu_call(); return; }
	goto l__1DE1;
l__1DE1:
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

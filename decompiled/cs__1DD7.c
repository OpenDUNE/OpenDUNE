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
 * @implements 1DD7:0059:0002:C53A
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
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x6);
	emu_push(emu_si);
	emu_si = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x700A);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ax;
	emu_get_memory16(emu_ds, 0x00, 0x700A) = emu_si;
	emu_orw(&emu_si, emu_si);
	if (emu_si != 0) goto l__002B;
	emu_push(emu_cs);
	emu_push(0x002A); f__1DD7_09DA_000F_D404();
l__002A:
l__002B:
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x6302), 0xFFFF);
	if (emu_get_memory16(emu_ds, 0x00, 0x6302) != 0xFFFF) goto l__0065;
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x6310);
	emu_orw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x6312));
	if (emu_ax == 0) goto l__0065;
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x6312);
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x6310);
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_dx;
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x700A), 0x0);
	if (emu_get_memory16(emu_ds, 0x00, 0x700A) != 0x0) { /* Unresolved jump */ emu_ip = 0x005B; emu_last_cs = 0x1DD7; emu_last_ip = 0x004D; emu_last_length = 0x002E; emu_last_crc = 0x813E; emu_call(); return; }
	emu_ax = 0x1;
	emu_bx = 0x10;
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
l__0059:
	goto l__0065;
l__0065:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x2);
	goto l__006A;
l__006A:
	emu_pop(&emu_si);
	emu_sp = emu_bp;
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
 * @implements 1DD7:00BA:0002:C53A
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
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x6);
	emu_push(emu_si);
	emu_si = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x700A);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ax;
	emu_get_memory16(emu_ds, 0x00, 0x700C) = emu_si;
	emu_orw(&emu_si, emu_si);
	if (emu_si != 0) goto l__008C;
	emu_push(emu_cs);
	emu_push(0x008B); f__1DD7_0A7B_001E_4A5A();
l__008B:
l__008C:
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x6344), 0xFFFF);
	if (emu_get_memory16(emu_ds, 0x00, 0x6344) != 0xFFFF) goto l__00C6;
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x6352);
	emu_orw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x6354));
	if (emu_ax == 0) goto l__00C6;
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x6354);
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x6352);
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_dx;
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x700C), 0x0);
	if (emu_get_memory16(emu_ds, 0x00, 0x700C) != 0x0) { /* Unresolved jump */ emu_ip = 0x00BC; emu_last_cs = 0x1DD7; emu_last_ip = 0x00AE; emu_last_length = 0x002E; emu_last_crc = 0xB16C; emu_call(); return; }
	emu_ax = 0x2;
	emu_bx = 0x10;
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
l__00BA:
	goto l__00C6;
l__00C6:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x2);
	goto l__00CB;
l__00CB:
	emu_pop(&emu_si);
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__1DD7_010B_000E_A324()
 *
 * @name f__1DD7_010B_000E_A324
 * @implements 1DD7:010B:000E:A324 ()
 * @implements 1DD7:0119:000A:86B2
 * @implements 1DD7:019F:0002:C43A
 * @implements 1DD7:01A3:0006:59A9
 * @implements 1DD7:01A9:0002:2597
 *
 * Called From: B483:08A2:0034:D238
 */
void f__1DD7_010B_000E_A324()
{
l__010B:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_ax != 0) goto l__0119;
	goto l__01A3;
l__0119:
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x6374), 0xFFFF);
	if (emu_get_memory16(emu_ds, 0x00, 0x6374) != 0xFFFF) { /* Unresolved jump */ emu_ip = 0x0123; emu_last_cs = 0x1DD7; emu_last_ip = 0x011E; emu_last_length = 0x000A; emu_last_crc = 0x86B2; emu_call(); return; }
	goto l__01A3;
l__019F:
	goto l__01A9;
l__01A3:
	emu_xorw(&emu_dx, emu_dx);
	emu_xorw(&emu_ax, emu_ax);
	goto l__019F;
l__01A9:
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
	emu_bp = emu_sp;
	emu_push(emu_cs);
	emu_push(0x01B2); f__1DD7_01EB_0013_9C3C();
l__01B2:
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax == 0) goto l__01C1;
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6374));
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x01C0); emu_cs = 0x2756; emu_ip = 0x0E42; emu_last_cs = 0x1DD7; emu_last_ip = 0x01BB; emu_last_length = 0x000E; emu_last_crc = 0x58D9; emu_call();
	/* Unresolved jump */ emu_ip = 0x01C0; emu_last_cs = 0x1DD7; emu_last_ip = 0x01C0; emu_last_length = 0x000E; emu_last_crc = 0x58D9; emu_call();
l__01C1:
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x6396), 0x0);
	if (emu_get_memory16(emu_ds, 0x00, 0x6396) == 0x0) goto l__01DD;
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x638C));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x638A));
	emu_push(emu_cs); emu_push(0x01D5); emu_cs = 0x23E1; f__23E1_01C2_0011_24E8();
	/* Unresolved jump */ emu_ip = 0x01D5; emu_last_cs = 0x1DD7; emu_last_ip = 0x01D5; emu_last_length = 0x0014; emu_last_crc = 0x43A1; emu_call();
l__01DD:
	emu_get_memory16(emu_ds, 0x00, 0x638C) = 0x0;
	emu_get_memory16(emu_ds, 0x00, 0x638A) = 0x0;
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
	emu_bp = emu_sp;
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x6374), 0xFFFF);
	if (emu_get_memory16(emu_ds, 0x00, 0x6374) == 0xFFFF) goto l__020D;
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6374));
	emu_push(emu_cs); emu_push(0x01FE); emu_cs = 0x2756; f__2756_0E36_0006_85ED();
l__01FE:
	emu_pop(&emu_cx);
	emu_cmpw(&emu_ax, 0x2);
	if (emu_ax != 0x2) goto l__0209;
	emu_ax = 0x1;
	goto l__020B;
l__0209:
	emu_xorw(&emu_ax, emu_ax);
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
 * Decompiled function f__1DD7_0213_0016_41ED()
 *
 * @name f__1DD7_0213_0016_41ED
 * @implements 1DD7:0213:0016:41ED ()
 * @implements 1DD7:022B:0002:2597
 *
 * Called From: B483:0538:0013:6556
 * Called From: B483:0567:0018:6809
 * Called From: B483:05B3:0013:6556
 * Called From: B483:05E1:0018:6C09
 */
void f__1DD7_0213_0016_41ED()
{
l__0213:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_ax == 0) goto l__022B;
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x0229); emu_cs = 0x23E1; f__23E1_01C2_0011_24E8();
	/* Unresolved jump */ emu_ip = 0x0229; emu_last_cs = 0x1DD7; emu_last_ip = 0x0229; emu_last_length = 0x0016; emu_last_crc = 0x41ED; emu_call();
l__022B:
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
	emu_bp = emu_sp;
	emu_ax = 0xFF;
	emu_push(emu_ax);
	emu_ax = 0xFF;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x0242); f__1DD7_0248_0014_9236();
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
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x4);
	emu_push(emu_si);
	emu_si = emu_get_memory16(emu_ss, emu_bp,  0xA);
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x700A), 0x0);
	if (emu_get_memory16(emu_ds, 0x00, 0x700A) != 0x0) goto l__025C;
	goto l__0396;
l__025C:
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x6374), 0xFFFF);
	if (emu_get_memory16(emu_ds, 0x00, 0x6374) != 0xFFFF) { /* Unresolved jump */ emu_ip = 0x0266; emu_last_cs = 0x1DD7; emu_last_ip = 0x0261; emu_last_length = 0x000A; emu_last_crc = 0x861E; emu_call(); return; }
	goto l__0396;
l__0396:
	emu_pop(&emu_si);
	emu_sp = emu_bp;
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
 * Called From: B480:0285:0084:2794
 */
void f__1DD7_039B_0008_D3BD()
{
l__039B:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_cs); emu_push(0x03A3); emu_cs = 0x2756; f__2756_07DA_0048_9F5D();
l__03A3:
	emu_ax = 0x2BD1;
	emu_push(emu_ax);
	emu_ax = 0x6;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x03B0); emu_cs = 0x2756; f__2756_0A81_0022_9F5C();
l__03B0:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ds, 0x00, 0x639C) = emu_ax;
	emu_xorw(&emu_ax, emu_ax);
	emu_dx = 0x3C;
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x639C));
	emu_push(emu_cs); emu_push(0x03C5); emu_cs = 0x2756; f__2756_0B8F_0025_D5D8();
l__03C5:
	emu_addw(&emu_sp, 0x6);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x639C));
	emu_push(emu_cs); emu_push(0x03D1); emu_cs = 0x2756; f__2756_0A59_0023_D969();
l__03D1:
	emu_pop(&emu_cx);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_cs);
	emu_push(0x03D9); f__1DD7_0F43_004A_CF07();
l__03D9:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ds, 0x00, 0x6D8D) = emu_ax;
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x03E5); f__1DD7_10C9_004D_AF4E();
l__03E5:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ds, 0x00, 0x6D8B) = emu_ax;
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_cs);
	emu_push(0x03F1); f__1DD7_0EE2_003D_B019();
l__03F1:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ds, 0x00, 0x6D8F) = emu_ax;
	emu_ax = 0x1;
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
	emu_bp = emu_sp;
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x639C));
	emu_push(emu_cs); emu_push(0x0409); emu_cs = 0x2756; f__2756_0827_0035_3DAA();
l__0409:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ds, 0x00, 0x639C) = 0xFFFF;
	emu_push(emu_cs);
	emu_push(0x0414); f__1DD7_102C_001E_4902();
l__0414:
	emu_push(emu_cs);
	emu_push(0x0419); f__1DD7_11E8_000E_E72A();
l__0419:
	emu_push(emu_cs);
	emu_push(0x041E); f__1DD7_0F32_000C_96B1();
l__041E:
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__1DD7_0421_000E_5431()
 *
 * @name f__1DD7_0421_000E_5431
 * @implements 1DD7:0421:000E:5431 ()
 * @implements 1DD7:042F:000C:6D9E
 * @implements 1DD7:0439:0002:DD3A
 * @implements 1DD7:043B:0010:24EA
 * @implements 1DD7:044B:0012:AB15
 * @implements 1DD7:0461:000F:99A1
 * @implements 1DD7:0470:0005:E6EE
 * @implements 1DD7:0475:0002:2597
 *
 * Called From: 1DD7:133A:000A:6B0D
 */
void f__1DD7_0421_000E_5431()
{
l__0421:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x042F); emu_cs = 0x1FB5; f__1FB5_15B5_0015_6A00();
l__042F:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax != 0) goto l__043B;
	emu_xorw(&emu_dx, emu_dx);
	emu_xorw(&emu_ax, emu_ax);
l__0439:
	goto l__0475;
l__043B:
	emu_push(emu_ds);
	emu_ax = 0x6529;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x044B); emu_cs = 0x01F7; emu_String_strstr();
l__044B:
	emu_addw(&emu_sp, 0x8);
	emu_orw(&emu_ax, emu_dx);
	if (emu_ax == 0) goto l__0461;
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x045D); emu_cs = 0x2431; emu_ip = 0x03DF; emu_last_cs = 0x1DD7; emu_last_ip = 0x0458; emu_last_length = 0x0012; emu_last_crc = 0xAB15; emu_call();
	/* Unresolved jump */ emu_ip = 0x045D; emu_last_cs = 0x1DD7; emu_last_ip = 0x045D; emu_last_length = 0x0012; emu_last_crc = 0xAB15; emu_call();
l__0461:
	emu_ax = 0x20;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x0470); emu_cs = 0x253D; f__253D_008A_0016_007A();
l__0470:
	emu_addw(&emu_sp, 0x6);
	goto l__0439;
l__0475:
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
	emu_bp = emu_sp;
	emu_ax = 0xFF;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x0485); f__1DD7_048A_0017_3EEB();
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
	emu_bp = emu_sp;
	emu_push(emu_si);
	emu_push(emu_di);
	emu_si = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_di = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_orw(&emu_si, emu_si);
	if (!(emu_flags.sf != emu_flags.of)) {
		emu_cmpw(&emu_si, 0x78);
		if ((int16)emu_si < (int16)0x78) goto l__04A1;
	}
l__049E:
	goto l__05CC;
l__04A1:
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x700A), 0x0);
	if (emu_get_memory16(emu_ds, 0x00, 0x700A) != 0x0) goto l__04B0;
	emu_cmpw(&emu_si, 0x1);
	if ((int16)emu_si <= (int16)0x1) goto l__04B0;
	goto l__05CC;
l__04B0:
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x6302), 0xFFFF);
	if (emu_get_memory16(emu_ds, 0x00, 0x6302) != 0xFFFF) { /* Unresolved jump */ emu_ip = 0x04BA; emu_last_cs = 0x1DD7; emu_last_ip = 0x04B5; emu_last_length = 0x000A; emu_last_crc = 0x3012; emu_call(); return; }
	goto l__05BD;
l__05BD:
	emu_push(emu_di);
	emu_push(emu_si);
	emu_push(emu_ds);
	emu_ax = 0x6302;
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x05C8); f__1DD7_1C3C_0020_9C6E();
l__05C8:
	emu_addw(&emu_sp, 0x8);
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
 * @implements 1DD7:05F8:003F:B855
 * @implements 1DD7:0637:0009:C117
 * @implements 1DD7:0640:000F:DFD4
 * @implements 1DD7:0643:000C:36B3
 * @implements 1DD7:064F:0017:E91D
 * @implements 1DD7:0666:000B:EB5E
 * @implements 1DD7:0671:0009:DA0C
 * @implements 1DD7:067B:005F:3AAB
 * @implements 1DD7:06DA:0008:C149
 * @implements 1DD7:06E2:001B:55CF
 * @implements 1DD7:06FD:0018:534D
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
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x10);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = 0x0;
	emu_get_memory16(emu_ss, emu_bp, -0x8) = 0x0;
	emu_push(emu_cs);
	emu_push(0x05E4); f__1DD7_09DA_000F_D404();
l__05E4:
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x6302), 0xFFFF);
	if (emu_get_memory16(emu_ds, 0x00, 0x6302) != 0xFFFF) goto l__05F8;
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x6310);
	emu_orw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x6312));
	if (emu_ax != 0) goto l__05F8;
	goto l__0713;
l__05F8:
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x631A);
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x6318);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x635C));
	if (emu_ax != emu_get_memory16(emu_ds, 0x00, 0x635C)) goto l__0637;
	emu_cmpw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x635A));
	if (emu_dx != emu_get_memory16(emu_ds, 0x00, 0x635A)) goto l__0637;
	emu_get_memory16(emu_ds, 0x00, 0x631A) = 0x0;
	emu_get_memory16(emu_ds, 0x00, 0x6318) = 0x0;
	emu_get_memory16(emu_ds, 0x00, 0x6322) = 0x0;
	emu_get_memory16(emu_ds, 0x00, 0x6320) = 0x0;
	emu_get_memory16(emu_ds, 0x00, 0x631E) = 0x0;
	emu_get_memory16(emu_ds, 0x00, 0x631C) = 0x0;
	emu_get_memory16(emu_ds, 0x00, 0x6324) = 0x0;
	goto l__0643;
l__0637:
	emu_push(emu_ds);
	emu_ax = 0x6302;
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x0640); f__1DD7_1BB4_002A_17AC();
l__0640:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
l__0643:
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x635E);
	emu_orw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x6360));
	if (emu_ax != 0) goto l__064F;
	goto l__06E2;
l__064F:
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6360));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x635E));
	emu_push(emu_ds);
	emu_ax = 0x6302;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x0666); f__1DD7_177C_0030_42B8();
l__0666:
	emu_addw(&emu_sp, 0x8);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0671); emu_cs = 0x01F7; emu_String_strcasecmp();
l__0671:
	emu_addw(&emu_sp, 0x8);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax == 0) goto l__067B;
	goto l__06E2;
l__067B:
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x635C);
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x635A);
	emu_get_memory16(emu_ds, 0x00, 0x631A) = emu_ax;
	emu_get_memory16(emu_ds, 0x00, 0x6318) = emu_dx;
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x6364);
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x6362);
	emu_get_memory16(emu_ds, 0x00, 0x6322) = emu_ax;
	emu_get_memory16(emu_ds, 0x00, 0x6320) = emu_dx;
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x6360);
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x635E);
	emu_get_memory16(emu_ds, 0x00, 0x631E) = emu_ax;
	emu_get_memory16(emu_ds, 0x00, 0x631C) = emu_dx;
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x6366);
	emu_get_memory16(emu_ds, 0x00, 0x6324) = emu_ax;
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x6302), 0xFFFF);
	if (emu_get_memory16(emu_ds, 0x00, 0x6302) == 0xFFFF) {
		emu_ax = emu_get_memory16(emu_ds, 0x00, 0x6312);
		emu_dx = emu_get_memory16(emu_ds, 0x00, 0x6310);
		emu_get_memory16(emu_ss, emu_bp, -0xA) = emu_ax;
		emu_get_memory16(emu_ss, emu_bp, -0xC) = emu_dx;
		emu_ax = emu_get_memory16(emu_ds, 0x00, 0x631A);
		emu_dx = emu_get_memory16(emu_ds, 0x00, 0x6318);
		emu_get_memory16(emu_ss, emu_bp, -0xE) = emu_ax;
		emu_get_memory16(emu_ss, emu_bp, -0x10) = emu_dx;
		emu_push(emu_es);
		emu_lfp(&emu_es, &emu_ax, &emu_get_memory16(emu_ss, emu_bp, -0x10));
		emu_dx = emu_es;
		emu_pop(&emu_es);
		emu_bx = 0x4;
		emu_pushf();

		/* Call based on memory/register values */
		emu_ip = emu_get_memory16(emu_ss, emu_bp, -0xC);
		emu_push(emu_cs);
		emu_cs = emu_get_memory16(emu_ss, emu_bp, -0xA);
		emu_push(0x06DA);
		switch ((emu_cs << 16) + emu_ip) {
			default:
				/* In case we don't know the call point yet, call the dynamic call */
				emu_last_cs = 0x1DD7; emu_last_ip = 0x06D7; emu_last_length = 0x005F; emu_last_crc = 0x3AAB;
				emu_call();
				return;
		}
	}
l__06DA:
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x6);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x8);
	goto l__0715;
l__06E2:
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x10));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_ds);
	emu_ax = 0x6302;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x06FD); f__1DD7_1940_0021_1C0F();
l__06FD:
	emu_addw(&emu_sp, 0x10);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x2);
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_dx);
	emu_adcw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax);
l__0713:
	goto l__06DA;
l__0715:
	emu_sp = emu_bp;
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
 * @implements 1DD7:0741:003F:4F2C
 * @implements 1DD7:078C:000C:7647
 * @implements 1DD7:0798:0017:34D9
 * @implements 1DD7:07AF:000B:EB5E
 * @implements 1DD7:07BA:0009:DA0C
 * @implements 1DD7:0823:0008:F549
 * @implements 1DD7:082B:001B:24E3
 * @implements 1DD7:0846:0040:E579
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
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x10);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = 0x0;
	emu_get_memory16(emu_ss, emu_bp, -0x8) = 0x0;
	emu_push(emu_cs);
	emu_push(0x072D); f__1DD7_0A7B_001E_4A5A();
l__072D:
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x6344), 0xFFFF);
	if (emu_get_memory16(emu_ds, 0x00, 0x6344) != 0xFFFF) goto l__0741;
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x6352);
	emu_orw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x6354));
	if (emu_ax != 0) goto l__0741;
	goto l__0884;
l__0741:
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x635C);
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x635A);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x631A));
	if (emu_ax != emu_get_memory16(emu_ds, 0x00, 0x631A)) { /* Unresolved jump */ emu_ip = 0x0780; emu_last_cs = 0x1DD7; emu_last_ip = 0x074C; emu_last_length = 0x003F; emu_last_crc = 0x4F2C; emu_call(); return; }
	emu_cmpw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x6318));
	if (emu_dx != emu_get_memory16(emu_ds, 0x00, 0x6318)) { /* Unresolved jump */ emu_ip = 0x0780; emu_last_cs = 0x1DD7; emu_last_ip = 0x0752; emu_last_length = 0x003F; emu_last_crc = 0x4F2C; emu_call(); return; }
	emu_get_memory16(emu_ds, 0x00, 0x635C) = 0x0;
	emu_get_memory16(emu_ds, 0x00, 0x635A) = 0x0;
	emu_get_memory16(emu_ds, 0x00, 0x6364) = 0x0;
	emu_get_memory16(emu_ds, 0x00, 0x6362) = 0x0;
	emu_get_memory16(emu_ds, 0x00, 0x6360) = 0x0;
	emu_get_memory16(emu_ds, 0x00, 0x635E) = 0x0;
	emu_get_memory16(emu_ds, 0x00, 0x6366) = 0x0;
	goto l__078C;
l__078C:
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x631C);
	emu_orw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x631E));
	if (emu_ax != 0) goto l__0798;
	goto l__082B;
l__0798:
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x631E));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x631C));
	emu_push(emu_ds);
	emu_ax = 0x6344;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x07AF); f__1DD7_177C_0030_42B8();
l__07AF:
	emu_addw(&emu_sp, 0x8);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x07BA); emu_cs = 0x01F7; emu_String_strcasecmp();
l__07BA:
	emu_addw(&emu_sp, 0x8);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax == 0) { /* Unresolved jump */ emu_ip = 0x07C4; emu_last_cs = 0x1DD7; emu_last_ip = 0x07BF; emu_last_length = 0x0009; emu_last_crc = 0xDA0C; emu_call(); return; }
	goto l__082B;
l__0823:
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x6);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x8);
	goto l__0886;
l__082B:
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x10));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_ds);
	emu_ax = 0x6344;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x0846); f__1DD7_1940_0021_1C0F();
l__0846:
	emu_addw(&emu_sp, 0x10);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x2);
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_dx);
	emu_adcw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0xA);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0xC));
	if (emu_ax != 0) {
		emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x4);
		emu_cwd();
		emu_bx = emu_get_memory16(emu_ss, emu_bp,  0xC);
		emu_cx = emu_get_memory16(emu_ss, emu_bp,  0xA);
		emu_addw(&emu_cx, emu_ax);
		emu_adcw(&emu_bx, emu_dx);
		emu_get_memory16(emu_ss, emu_bp,  0xC) = emu_bx;
		emu_get_memory16(emu_ss, emu_bp,  0xA) = emu_cx;
		emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x2);
		emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x4);
		emu_subw(&emu_get_memory16(emu_ss, emu_bp,  0xE), emu_dx);
		emu_sbbw(&emu_get_memory16(emu_ss, emu_bp,  0x10), emu_ax);
	}
l__0884:
	goto l__0823;
l__0886:
	emu_sp = emu_bp;
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
 * Called From: 0642:02D0:0005:6B6D
 * Called From: B4BE:0215:0005:6B6D
 */
void f__1DD7_088A_0026_5144()
{
l__088A:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x6);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = 0x0;
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x6344), 0xFFFF);
	if (emu_get_memory16(emu_ds, 0x00, 0x6344) == 0xFFFF) goto l__08C2;
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x636C), 0xFFFF);
	if (emu_get_memory16(emu_ds, 0x00, 0x636C) == 0xFFFF) { /* Unresolved jump */ emu_ip = 0x08C0; emu_last_cs = 0x1DD7; emu_last_ip = 0x08A1; emu_last_length = 0x0026; emu_last_crc = 0x5144; emu_call(); return; }
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x636C));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6344));
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x08B0); emu_cs = 0x2756; emu_ip = 0x0EBA; emu_last_cs = 0x1DD7; emu_last_ip = 0x08AB; emu_last_length = 0x0026; emu_last_crc = 0x5144; emu_call();
	/* Unresolved jump */ emu_ip = 0x08B0; emu_last_cs = 0x1DD7; emu_last_ip = 0x08B0; emu_last_length = 0x0026; emu_last_crc = 0x5144; emu_call();
l__08BE:
	goto l__08EA;
l__08C2:
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x6352);
	emu_orw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x6354));
	if (emu_ax == 0) goto l__08E5;
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x6354);
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x6352);
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_dx;
	emu_ax = 0x0;
	emu_bx = 0x7;
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
	/* Unresolved jump */ emu_ip = 0x08E2; emu_last_cs = 0x1DD7; emu_last_ip = 0x08E2; emu_last_length = 0x0020; emu_last_crc = 0xBD30; emu_call();
l__08E5:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x2);
	goto l__08BE;
l__08EA:
	emu_sp = emu_bp;
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
	emu_bp = emu_sp;
	emu_ax = 0xFF;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x08FC); f__1DD7_0901_001E_8420();
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
	emu_bp = emu_sp;
	emu_push(emu_si);
	emu_push(emu_di);
	emu_si = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_di = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_orw(&emu_si, emu_si);
	if (!(emu_flags.sf != emu_flags.of)) {
		emu_cmpw(&emu_si, 0x78);
		if ((int16)emu_si <= (int16)0x78) {
			emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x700C), 0x0);
			if (emu_get_memory16(emu_ds, 0x00, 0x700C) != 0x0) goto l__091F;
		}
	}
l__091C:
	goto l__09D6;
l__091F:
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x6344), 0xFFFF);
	if (emu_get_memory16(emu_ds, 0x00, 0x6344) != 0xFFFF) { /* Unresolved jump */ emu_ip = 0x0929; emu_last_cs = 0x1DD7; emu_last_ip = 0x0924; emu_last_length = 0x000A; emu_last_crc = 0xF6B7; emu_call(); return; }
	goto l__09BE;
l__09BE:
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x6352);
	emu_orw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x6354));
	if (emu_ax == 0) goto l__09D6;
	emu_push(emu_di);
	emu_push(emu_si);
	emu_push(emu_ds);
	emu_ax = 0x6344;
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x09D2); f__1DD7_1C3C_0020_9C6E();
	/* Unresolved jump */ emu_ip = 0x09D2; emu_last_cs = 0x1DD7; emu_last_ip = 0x09D2; emu_last_length = 0x0014; emu_last_crc = 0x613D; emu_call();
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
 * @implements 1DD7:09E9:0026:5877
 * @implements 1DD7:0A38:0008:B678
 * @implements 1DD7:0A39:0007:F078
 * @implements 1DD7:0A40:001D:A972
 * @implements 1DD7:0A65:000F:3112
 * @implements 1DD7:0A74:0007:A555
 * @implements 1DD7:0A78:0003:2E57
 *
 * Called From: 1DD7:0027:001C:4593
 * Called From: 1DD7:05E1:0014:A7A2
 */
void f__1DD7_09DA_000F_D404()
{
l__09DA:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_si);
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x6302), 0xFFFF);
	if (emu_get_memory16(emu_ds, 0x00, 0x6302) == 0xFFFF) goto l__0A40;
	emu_xorw(&emu_si, emu_si);
	goto l__0A39;
l__09E9:
	emu_ax = emu_si;
	emu_dx = 0x6;
	emu_imuluw(&emu_ax, emu_dx);
	emu_bx = emu_ax;
	emu_cmpw(&emu_get_memory16(emu_ds, emu_bx, 0x632C), 0xFFFF);
	if (emu_get_memory16(emu_ds, emu_bx, 0x632C) == 0xFFFF) goto l__0A38;
	emu_ax = emu_si;
	emu_dx = 0x6;
	emu_imuluw(&emu_ax, emu_dx);
	emu_bx = emu_ax;
	emu_push(emu_get_memory16(emu_ds, emu_bx, 0x632C));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6302));
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x0A0F); emu_cs = 0x2756; emu_ip = 0x0EAE; emu_last_cs = 0x1DD7; emu_last_ip = 0x0A0A; emu_last_length = 0x0026; emu_last_crc = 0x5877; emu_call();
	/* Unresolved jump */ emu_ip = 0x0A0F; emu_last_cs = 0x1DD7; emu_last_ip = 0x0A0F; emu_last_length = 0x0026; emu_last_crc = 0x5877; emu_call();
l__0A38:
	emu_incw(&emu_si);
l__0A39:
	emu_cmpw(&emu_si, 0x4);
	if ((int16)emu_si < (int16)0x4) goto l__09E9;
	goto l__0A78;
l__0A40:
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x6310);
	emu_orw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x6312));
	if (emu_ax == 0) goto l__0A78;
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x6372), 0xFFFF);
	if (emu_get_memory16(emu_ds, 0x00, 0x6372) == 0xFFFF) goto l__0A65;
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6372));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6344));
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x0A5D); emu_cs = 0x2756; emu_ip = 0x0F26; emu_last_cs = 0x1DD7; emu_last_ip = 0x0A58; emu_last_length = 0x001D; emu_last_crc = 0xA972; emu_call();
	/* Unresolved jump */ emu_ip = 0x0A5D; emu_last_cs = 0x1DD7; emu_last_ip = 0x0A5D; emu_last_length = 0x001D; emu_last_crc = 0xA972; emu_call();
l__0A65:
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x6302;
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x0A74); f__1DD7_1C3C_0020_9C6E();
l__0A74:
	emu_addw(&emu_sp, 0x8);
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
 * @implements 1DD7:0AB0:0002:CE3A
 * @implements 1DD7:0AB2:0018:0CC6
 * @implements 1DD7:0ACA:0006:2081
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
	emu_bp = emu_sp;
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x6344), 0xFFFF);
	if (emu_get_memory16(emu_ds, 0x00, 0x6344) == 0xFFFF) goto l__0AB2;
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x636C), 0xFFFF);
	if (emu_get_memory16(emu_ds, 0x00, 0x636C) == 0xFFFF) goto l__0AB0;
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x636C));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6344));
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x0A99); emu_cs = 0x2756; emu_ip = 0x0EAE; emu_last_cs = 0x1DD7; emu_last_ip = 0x0A94; emu_last_length = 0x001E; emu_last_crc = 0x4A5A; emu_call();
	/* Unresolved jump */ emu_ip = 0x0A99; emu_last_cs = 0x1DD7; emu_last_ip = 0x0A99; emu_last_length = 0x001E; emu_last_crc = 0x4A5A; emu_call();
l__0AB0:
	goto l__0ACE;
l__0AB2:
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x6352);
	emu_orw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x6354));
	if (emu_ax == 0) goto l__0ACE;
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x6344;
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x0ACA); f__1DD7_1C3C_0020_9C6E();
l__0ACA:
	emu_addw(&emu_sp, 0x8);
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
 * @implements 1DD7:0B7B:0002:CEBA
 * @implements 1DD7:0B7D:0019:AE96
 * @implements 1DD7:0B96:0006:2081
 * @implements 1DD7:0B9A:0002:2597
 *
 * Called From: B491:0A2D:0008:6188
 * Called From: B4AB:005B:0005:FB00
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
	emu_bp = emu_sp;
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x6344), 0xFFFF);
	if (emu_get_memory16(emu_ds, 0x00, 0x6344) == 0xFFFF) goto l__0B7D;
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x636C), 0xFFFF);
	if (emu_get_memory16(emu_ds, 0x00, 0x636C) == 0xFFFF) goto l__0B7B;
	emu_ax = 0x7D0;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x636C));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6344));
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x0B78); emu_cs = 0x2756; emu_ip = 0x0ECC; emu_last_cs = 0x1DD7; emu_last_ip = 0x0B73; emu_last_length = 0x0025; emu_last_crc = 0x36F7; emu_call();
	/* Unresolved jump */ emu_ip = 0x0B78; emu_last_cs = 0x1DD7; emu_last_ip = 0x0B78; emu_last_length = 0x0025; emu_last_crc = 0x36F7; emu_call();
l__0B7B:
	goto l__0B9A;
l__0B7D:
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x6352);
	emu_orw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x6354));
	if (emu_ax == 0) goto l__0B9A;
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x6344;
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x0B96); f__1DD7_1C3C_0020_9C6E();
l__0B96:
	emu_addw(&emu_sp, 0x8);
l__0B9A:
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__1DD7_0D77_0027_BE74()
 *
 * @name f__1DD7_0D77_0027_BE74
 * @implements 1DD7:0D77:0027:BE74 ()
 * @implements 1DD7:0D9E:0016:BD8A
 * @implements 1DD7:0DAF:0005:1C3E
 * @implements 1DD7:0DB4:0010:45B7
 * @implements 1DD7:0DC4:0014:83D2
 * @implements 1DD7:0EDC:0006:F7CE
 *
 * Called From: 1DD7:1BA0:0010:3828
 */
void f__1DD7_0D77_0027_BE74()
{
l__0D77:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x14);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_get_memory16(emu_ss, emu_bp, -0x8) = 0x0;
	emu_get_memory16(emu_ss, emu_bp, -0xA) = 0x0;
	emu_di = 0x1;
	emu_movw(&emu_ax, emu_bp - 0x14);
	emu_push(emu_ss);
	emu_push(emu_ax);
	emu_ax = 0x63A4;
	emu_push(emu_ds);
	emu_push(emu_ax);
	emu_cx = 0x6;
	emu_push(emu_cs); emu_push(0x0D9E); emu_cs = 0x01F7; emu_Tools_MemcopyCX();
l__0D9E:
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_ax != 0) {
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0xA));
		emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x0), 0xFFFF);
		if (emu_get_memory16(emu_es, emu_bx, 0x0) != 0xFFFF) goto l__0DB4;
	}
l__0DAF:
	emu_xorw(&emu_ax, emu_ax);
	goto l__0EDC;
l__0DB4:
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x0DC4); f__1DD7_186C_0030_42BF();
l__0DC4:
	emu_addw(&emu_sp, 0x8);
	emu_get_memory16(emu_ss, emu_bp, -0xC) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0xE) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0xE);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0xC));
	if (emu_ax != 0) { /* Unresolved jump */ emu_ip = 0x0DD8; emu_last_cs = 0x1DD7; emu_last_ip = 0x0DD4; emu_last_length = 0x0014; emu_last_crc = 0x83D2; emu_call(); return; }
	goto l__0DAF;
l__0EDC:
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
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x4);
	emu_push(emu_si);
	emu_si = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_bx = emu_si;
	emu_cl = 0x2;
	emu_shlw(&emu_bx, emu_cl);
	emu_ax = emu_get_memory16(emu_ds, emu_bx, 0x63AC);
	emu_dx = emu_get_memory16(emu_ds, emu_bx, 0x63AA);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_dx;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_ax == 0) goto l__0F29;
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x656E;
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x6374;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs);
	emu_push(0x0F1F); f__1DD7_12CE_0018_7A26();
	/* Unresolved jump */ emu_ip = 0x0F1F; emu_last_cs = 0x1DD7; emu_last_ip = 0x0F1F; emu_last_length = 0x003D; emu_last_crc = 0xB019; emu_call();
l__0F29:
	emu_ax = emu_si;
	goto l__0F2D;
l__0F2D:
	emu_pop(&emu_si);
	emu_sp = emu_bp;
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
	emu_bp = emu_sp;
	emu_push(emu_ds);
	emu_ax = 0x6374;
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x0F3E); f__1DD7_1696_0011_A4E3();
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
 * @implements 1DD7:0F8D:0013:3523
 * @implements 1DD7:0FA0:001A:56E0
 * @implements 1DD7:0FBF:0021:6D0A
 * @implements 1DD7:0FE0:000E:1EEB
 * @implements 1DD7:0FEA:0004:74F2
 * @implements 1DD7:0FEE:0013:A9D5
 * @implements 1DD7:1001:0013:A09B
 * @implements 1DD7:1014:0012:F429
 * @implements 1DD7:1024:0002:A23A
 * @implements 1DD7:1026:0006:F7CE
 *
 * Called From: 1DD7:03D6:0008:F825
 */
void f__1DD7_0F43_004A_CF07()
{
l__0F43:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x8);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_si = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_ax = emu_si;
	emu_dx = 0xC;
	emu_imuluw(&emu_ax, emu_dx);
	emu_bx = emu_ax;
	emu_ax = emu_get_memory16(emu_ds, emu_bx, 0x63D0);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_ax;
	emu_ax = emu_si;
	emu_dx = 0xC;
	emu_imuluw(&emu_ax, emu_dx);
	emu_bx = emu_ax;
	emu_di = emu_get_memory16(emu_ds, emu_bx, 0x63CE);
	emu_ax = emu_si;
	emu_dx = 0xC;
	emu_imuluw(&emu_ax, emu_dx);
	emu_bx = emu_ax;
	emu_ax = emu_get_memory16(emu_ds, emu_bx, 0x63C8);
	emu_dx = emu_get_memory16(emu_ds, emu_bx, 0x63C6);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_dx;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_ax != 0) goto l__0F8D;
	goto l__1024;
l__0F8D:
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6306));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6304));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x0FA0); emu_cs = 0x01F7; emu_String_strcasecmp();
l__0FA0:
	emu_addw(&emu_sp, 0x8);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax != 0) goto l__0FBF;
	emu_ax = 0x26;
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x6302;
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x6344;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0FBA); emu_cs = 0x01F7; emu_Tools_Memcopy();
	/* Unresolved jump */ emu_ip = 0x0FBA; emu_last_cs = 0x1DD7; emu_last_ip = 0x0FBA; emu_last_length = 0x001A; emu_last_crc = 0x56E0; emu_call();
l__0FBF:
	emu_push(emu_di);
	emu_ax = emu_si;
	emu_dx = 0xC;
	emu_imuluw(&emu_ax, emu_dx);
	emu_bx = emu_ax;
	emu_push(emu_get_memory16(emu_ds, emu_bx, 0x63CC));
	emu_push(emu_get_memory16(emu_ds, emu_bx, 0x63CA));
	emu_push(emu_ds);
	emu_ax = 0x6344;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs);
	emu_push(0x0FE0); f__1DD7_12CE_0018_7A26();
l__0FE0:
	emu_addw(&emu_sp, 0xE);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax != 0) goto l__0FEE;
	emu_xorw(&emu_si, emu_si);
l__0FEA:
	emu_ax = emu_si;
	goto l__1026;
l__0FEE:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x6);
	emu_get_memory16(emu_ds, 0x00, 0x636A) = emu_ax;
	emu_orw(&emu_di, emu_di);
	if (emu_di != 0) goto l__1024;
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6344));
	emu_push(emu_cs); emu_push(0x1001); emu_cs = 0x2756; f__2756_0E6C_0006_02B3();
l__1001:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_ax;
	emu_ax = 0x10;
	emu_push(emu_ax);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x8);
	emu_cwd();
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1014); emu_cs = 0x23E1; f__23E1_0004_0014_2BC0();
l__1014:
	emu_addw(&emu_sp, 0x6);
	emu_get_memory16(emu_ds, 0x00, 0x6370) = emu_dx;
	emu_get_memory16(emu_ds, 0x00, 0x636E) = emu_ax;
	emu_get_memory16(emu_ds, 0x00, 0x636C) = 0xFFFF;
l__1024:
	goto l__0FEA;
l__1026:
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
 * Decompiled function f__1DD7_102C_001E_4902()
 *
 * @name f__1DD7_102C_001E_4902
 * @implements 1DD7:102C:001E:4902 ()
 * @implements 1DD7:1061:000D:AC4F
 * @implements 1DD7:106E:004D:E943
 * @implements 1DD7:107C:003F:0D91
 * @implements 1DD7:10C7:0002:2597
 *
 * Called From: 1DD7:0411:000B:8DF3
 */
void f__1DD7_102C_001E_4902()
{
l__102C:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x6344), 0xFFFF);
	if (emu_get_memory16(emu_ds, 0x00, 0x6344) == 0xFFFF) goto l__107C;
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x636C), 0xFFFF);
	if (emu_get_memory16(emu_ds, 0x00, 0x636C) == 0xFFFF) goto l__1061;
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x636C));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6344));
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x104A); emu_cs = 0x2756; emu_ip = 0x0EAE; emu_last_cs = 0x1DD7; emu_last_ip = 0x1045; emu_last_length = 0x001E; emu_last_crc = 0x4902; emu_call();
	/* Unresolved jump */ emu_ip = 0x104A; emu_last_cs = 0x1DD7; emu_last_ip = 0x104A; emu_last_length = 0x001E; emu_last_crc = 0x4902; emu_call();
l__1061:
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6370));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x636E));
	emu_push(emu_cs); emu_push(0x106E); emu_cs = 0x23E1; f__23E1_01C2_0011_24E8();
l__106E:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ds, 0x00, 0x6370) = 0x0;
	emu_get_memory16(emu_ds, 0x00, 0x636E) = 0x0;
l__107C:
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x6354);
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x6352);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x6312));
	if (emu_ax != emu_get_memory16(emu_ds, 0x00, 0x6312)) { /* Unresolved jump */ emu_ip = 0x10BB; emu_last_cs = 0x1DD7; emu_last_ip = 0x1087; emu_last_length = 0x003F; emu_last_crc = 0x0D91; emu_call(); return; }
	emu_cmpw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x6310));
	if (emu_dx != emu_get_memory16(emu_ds, 0x00, 0x6310)) { /* Unresolved jump */ emu_ip = 0x10BB; emu_last_cs = 0x1DD7; emu_last_ip = 0x108D; emu_last_length = 0x003F; emu_last_crc = 0x0D91; emu_call(); return; }
	emu_get_memory16(emu_ds, 0x00, 0x6354) = 0x0;
	emu_get_memory16(emu_ds, 0x00, 0x6352) = 0x0;
	emu_get_memory16(emu_ds, 0x00, 0x6358) = 0x0;
	emu_get_memory16(emu_ds, 0x00, 0x6356) = 0x0;
	emu_get_memory16(emu_ds, 0x00, 0x6348) = 0x0;
	emu_get_memory16(emu_ds, 0x00, 0x6346) = 0x0;
	emu_get_memory16(emu_ds, 0x00, 0x6368) = 0xFFFF;
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
 * @implements 1DD7:1116:0013:0221
 * @implements 1DD7:1129:001A:20E2
 * @implements 1DD7:1143:0005:9DEE
 * @implements 1DD7:1175:0004:5C72
 * @implements 1DD7:1179:000F:0E49
 * @implements 1DD7:1188:0008:B38A
 * @implements 1DD7:1190:000F:C861
 * @implements 1DD7:119F:0035:8699
 * @implements 1DD7:11C7:000D:24B8
 * @implements 1DD7:11D4:000E:1DC2
 * @implements 1DD7:11E0:0002:89BA
 * @implements 1DD7:11E2:0006:F7CE
 *
 * Called From: 1DD7:03E2:000C:CE7B
 */
void f__1DD7_10C9_004D_AF4E()
{
l__10C9:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0xA);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_si = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_ax = emu_si;
	emu_dx = 0xC;
	emu_imuluw(&emu_ax, emu_dx);
	emu_bx = emu_ax;
	emu_ax = emu_get_memory16(emu_ds, emu_bx, 0x6478);
	emu_get_memory16(emu_ss, emu_bp, -0xA) = emu_ax;
	emu_ax = emu_si;
	emu_dx = 0xC;
	emu_imuluw(&emu_ax, emu_dx);
	emu_bx = emu_ax;
	emu_ax = emu_get_memory16(emu_ds, emu_bx, 0x6476);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_ax;
	emu_ax = emu_si;
	emu_dx = 0xC;
	emu_imuluw(&emu_ax, emu_dx);
	emu_bx = emu_ax;
	emu_ax = emu_get_memory16(emu_ds, emu_bx, 0x6470);
	emu_dx = emu_get_memory16(emu_ds, emu_bx, 0x646E);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_dx;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_ax != 0) goto l__1116;
	goto l__11E0;
l__1116:
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6348));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6346));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x1129); emu_cs = 0x01F7; emu_String_strcasecmp();
l__1129:
	emu_addw(&emu_sp, 0x8);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax != 0) { /* Unresolved jump */ emu_ip = 0x1148; emu_last_cs = 0x1DD7; emu_last_ip = 0x112E; emu_last_length = 0x001A; emu_last_crc = 0x20E2; emu_call(); return; }
	emu_ax = 0x26;
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x6344;
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x6302;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1143); emu_cs = 0x01F7; emu_Tools_Memcopy();
l__1143:
	emu_addw(&emu_sp, 0xA);
	goto l__1179;
l__1175:
	emu_ax = emu_si;
	goto l__11E2;
l__1179:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp, -0x6) != 0x0) goto l__11D4;
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6302));
	emu_push(emu_cs); emu_push(0x1188); emu_cs = 0x2756; f__2756_0E6C_0006_02B3();
l__1188:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_ax;
	emu_xorw(&emu_di, emu_di);
	goto l__11C7;
l__1190:
	emu_ax = 0x10;
	emu_push(emu_ax);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x8);
	emu_cwd();
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x119F); emu_cs = 0x23E1; f__23E1_0004_0014_2BC0();
l__119F:
	emu_addw(&emu_sp, 0x6);
	emu_push(emu_ax);
	emu_ax = emu_di;
	emu_bx = 0x6;
	emu_push(emu_dx);
	emu_imuluw(&emu_ax, emu_bx);
	emu_bx = emu_ax;
	emu_pop(&emu_ax);
	emu_get_memory16(emu_ds, emu_bx, 0x6330) = emu_ax;
	emu_pop(&emu_ax);
	emu_get_memory16(emu_ds, emu_bx, 0x632E) = emu_ax;
	emu_ax = emu_di;
	emu_dx = 0x6;
	emu_imuluw(&emu_ax, emu_dx);
	emu_bx = emu_ax;
	emu_get_memory16(emu_ds, emu_bx, 0x632C) = 0xFFFF;
	emu_incw(&emu_di);
l__11C7:
	emu_cmpw(&emu_di, 0x4);
	if ((int16)emu_di < (int16)0x4) goto l__1190;
	emu_get_memory16(emu_ds, 0x00, 0x632A) = 0x0;
	goto l__11D4;
l__11D4:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp, -0xA) != 0x0) {
		emu_get_memory16(emu_ds, 0x00, 0x6328) = 0x1;
	}
l__11E0:
	goto l__1175;
l__11E2:
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
 * Decompiled function f__1DD7_11E8_000E_E72A()
 *
 * @name f__1DD7_11E8_000E_E72A
 * @implements 1DD7:11E8:000E:E72A ()
 * @implements 1DD7:11F6:0004:D1F9
 * @implements 1DD7:11FB:0026:5877
 * @implements 1DD7:124A:0016:C125
 * @implements 1DD7:1260:0020:0930
 * @implements 1DD7:1278:0008:03AA
 * @implements 1DD7:1280:003F:C31F
 * @implements 1DD7:12BF:0009:4A39
 * @implements 1DD7:12C8:0006:FC98
 * @implements 1DD7:12CB:0003:2E57
 *
 * Called From: 1DD7:0416:0005:3F33
 */
void f__1DD7_11E8_000E_E72A()
{
l__11E8:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_si);
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x6302), 0xFFFF);
	if (emu_get_memory16(emu_ds, 0x00, 0x6302) != 0xFFFF) goto l__11F6;
	goto l__1280;
l__11F6:
	emu_xorw(&emu_si, emu_si);
	goto l__1278;
l__11FB:
	emu_ax = emu_si;
	emu_dx = 0x6;
	emu_imuluw(&emu_ax, emu_dx);
	emu_bx = emu_ax;
	emu_cmpw(&emu_get_memory16(emu_ds, emu_bx, 0x632C), 0xFFFF);
	if (emu_get_memory16(emu_ds, emu_bx, 0x632C) == 0xFFFF) goto l__124A;
	emu_ax = emu_si;
	emu_dx = 0x6;
	emu_imuluw(&emu_ax, emu_dx);
	emu_bx = emu_ax;
	emu_push(emu_get_memory16(emu_ds, emu_bx, 0x632C));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6302));
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x1221); emu_cs = 0x2756; emu_ip = 0x0EAE; emu_last_cs = 0x1DD7; emu_last_ip = 0x121C; emu_last_length = 0x0026; emu_last_crc = 0x5877; emu_call();
	/* Unresolved jump */ emu_ip = 0x1221; emu_last_cs = 0x1DD7; emu_last_ip = 0x1221; emu_last_length = 0x0026; emu_last_crc = 0x5877; emu_call();
l__124A:
	emu_ax = emu_si;
	emu_dx = 0x6;
	emu_imuluw(&emu_ax, emu_dx);
	emu_bx = emu_ax;
	emu_push(emu_get_memory16(emu_ds, emu_bx, 0x6330));
	emu_push(emu_get_memory16(emu_ds, emu_bx, 0x632E));
	emu_push(emu_cs); emu_push(0x1260); emu_cs = 0x23E1; f__23E1_01C2_0011_24E8();
l__1260:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_ax = emu_si;
	emu_dx = 0x6;
	emu_imuluw(&emu_ax, emu_dx);
	emu_bx = emu_ax;
	emu_get_memory16(emu_ds, emu_bx, 0x6330) = 0x0;
	emu_get_memory16(emu_ds, emu_bx, 0x632E) = 0x0;
	emu_incw(&emu_si);
l__1278:
	emu_cmpw(&emu_si, 0x4);
	if ((int16)emu_si >= (int16)0x4) goto l__1280;
	goto l__11FB;
l__1280:
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x6354);
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x6352);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x6312));
	if (emu_ax != emu_get_memory16(emu_ds, 0x00, 0x6312)) goto l__12BF;
	emu_cmpw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x6310));
	if (emu_dx != emu_get_memory16(emu_ds, 0x00, 0x6310)) goto l__12BF;
	emu_get_memory16(emu_ds, 0x00, 0x6312) = 0x0;
	emu_get_memory16(emu_ds, 0x00, 0x6310) = 0x0;
	emu_get_memory16(emu_ds, 0x00, 0x6316) = 0x0;
	emu_get_memory16(emu_ds, 0x00, 0x6314) = 0x0;
	emu_get_memory16(emu_ds, 0x00, 0x6306) = 0x0;
	emu_get_memory16(emu_ds, 0x00, 0x6304) = 0x0;
	emu_get_memory16(emu_ds, 0x00, 0x6326) = 0xFFFF;
	goto l__12CB;
l__12BF:
	emu_push(emu_ds);
	emu_ax = 0x6302;
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x12C8); f__1DD7_1696_0011_A4E3();
l__12C8:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
l__12CB:
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__1DD7_12CE_0018_7A26()
 *
 * @name f__1DD7_12CE_0018_7A26
 * @implements 1DD7:12CE:0018:7A26 ()
 * @implements 1DD7:12E3:0003:9C8A
 * @implements 1DD7:12E6:000B:03A1
 * @implements 1DD7:12F1:0008:97CF
 * @implements 1DD7:12F9:0023:08B4
 * @implements 1DD7:1333:000A:6B0D
 * @implements 1DD7:133D:0022:E40A
 * @implements 1DD7:135F:0007:B6AD
 * @implements 1DD7:1366:0007:2888
 * @implements 1DD7:136D:000E:B970
 * @implements 1DD7:137B:0014:469E
 * @implements 1DD7:138F:0023:1D4C
 * @implements 1DD7:13C6:000A:FFB0
 * @implements 1DD7:13D0:0011:3116
 * @implements 1DD7:13E1:000F:9227
 * @implements 1DD7:13F0:0012:8AFE
 * @implements 1DD7:1402:000C:A61A
 * @implements 1DD7:1411:0010:921D
 * @implements 1DD7:1421:0006:160B
 * @implements 1DD7:1427:0010:2628
 * @implements 1DD7:1437:0014:E282
 * @implements 1DD7:144B:000B:4AA6
 * @implements 1DD7:1456:0024:E66C
 * @implements 1DD7:147A:0017:46E4
 * @implements 1DD7:1491:0013:D0C9
 * @implements 1DD7:14A4:0017:7098
 * @implements 1DD7:14BB:000A:8601
 * @implements 1DD7:159F:0027:AFB5
 * @implements 1DD7:15C6:0012:C55E
 * @implements 1DD7:15DC:0027:CFB5
 * @implements 1DD7:1603:000E:384B
 * @implements 1DD7:1611:0014:9695
 * @implements 1DD7:164D:003A:A88D
 * @implements 1DD7:1687:0009:076B
 * @implements 1DD7:1690:0006:F7CE
 *
 * Called From: 1DD7:0FDD:0021:6D0A
 */
void f__1DD7_12CE_0018_7A26()
{
l__12CE:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x10);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_si = emu_get_memory16(emu_ss, emu_bp,  0x12);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_ax != 0) goto l__12E6;
	emu_xorw(&emu_ax, emu_ax);
l__12E3:
	goto l__1690;
l__12E6:
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x12F1); emu_cs = 0x1FB5; f__1FB5_15B5_0015_6A00();
l__12F1:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax != 0) goto l__12F9;
	/* Unresolved jump */ emu_ip = 0x12E1; emu_last_cs = 0x1DD7; emu_last_ip = 0x12F7; emu_last_length = 0x0008; emu_last_crc = 0x97CF; emu_call();
l__12F9:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0xE);
	emu_orw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x10));
	if (emu_ax == 0) goto l__1333;
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x4));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x2));
	emu_push(emu_cs); emu_push(0x131C); emu_cs = 0x01F7; emu_String_strcasecmp();
	/* Unresolved jump */ emu_ip = 0x131C; emu_last_cs = 0x1DD7; emu_last_ip = 0x131C; emu_last_length = 0x0023; emu_last_crc = 0x08B4; emu_call();
l__1333:
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x133D); f__1DD7_0421_000E_5431();
l__133D:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_get_memory16(emu_es, emu_bx, 0x10) = emu_dx;
	emu_get_memory16(emu_es, emu_bx, 0xE) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0xE);
	emu_orw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x10));
	if (emu_ax != 0) goto l__135F;
	/* Unresolved jump */ emu_ip = 0x12E1; emu_last_cs = 0x1DD7; emu_last_ip = 0x135D; emu_last_length = 0x0022; emu_last_crc = 0xE40A; emu_call();
l__135F:
	emu_orw(&emu_si, emu_si);
	if (emu_si != 0) goto l__1366;
	goto l__1427;
l__1366:
	emu_bx = 0x2;
	emu_pushf();

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_ss, emu_bp, -0x2);
	emu_push(0x136D);
	switch ((emu_cs << 16) + emu_ip) {
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x1DD7; emu_last_ip = 0x136A; emu_last_length = 0x0007; emu_last_crc = 0x2888;
			emu_call();
			return;
	}
l__136D:
	emu_orw(&emu_si, emu_si);
	if ((emu_flags.sf != emu_flags.of)) {
		emu_ax = 0x4;
		emu_bx = 0x10;
		emu_pushf();

		/* Call based on memory/register values */
		emu_ip = emu_get_memory16(emu_ss, emu_bp, -0x4);
		emu_push(emu_cs);
		emu_cs = emu_get_memory16(emu_ss, emu_bp, -0x2);
		emu_push(0x137B);
		switch ((emu_cs << 16) + emu_ip) {
			default:
				/* In case we don't know the call point yet, call the dynamic call */
				emu_last_cs = 0x1DD7; emu_last_ip = 0x1378; emu_last_length = 0x000E; emu_last_crc = 0xB970;
				emu_call();
				return;
		}
	}
l__137B:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0xE);
	emu_addw(&emu_ax, 0x3);
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x10));
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x138F); emu_cs = 0x2756; f__2756_0A81_0022_9F5C();
l__138F:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_get_memory16(emu_es, emu_bx, 0x24) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x24), 0xFFFF);
	if (emu_get_memory16(emu_es, emu_bx, 0x24) != 0xFFFF) goto l__13C6;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x10));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xE));
	emu_push(emu_cs); emu_push(0x13B2); emu_cs = 0x23E1; f__23E1_01C2_0011_24E8();
	/* Unresolved jump */ emu_ip = 0x13B2; emu_last_cs = 0x1DD7; emu_last_ip = 0x13B2; emu_last_length = 0x0023; emu_last_crc = 0x1D4C; emu_call();
l__13C6:
	emu_orw(&emu_si, emu_si);
	if (!(emu_flags.sf != emu_flags.of)) goto l__13D0;
	emu_ax = emu_si;
	emu_negw(&emu_ax, emu_ax);
	/* Unresolved jump */ emu_ip = 0x13D2; emu_last_cs = 0x1DD7; emu_last_ip = 0x13CE; emu_last_length = 0x000A; emu_last_crc = 0xFFB0; emu_call();
l__13D0:
	emu_ax = emu_si;
	emu_cwd();
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x24));
	emu_push(emu_cs); emu_push(0x13E1); emu_cs = 0x2756; f__2756_0B8F_0025_D5D8();
l__13E1:
	emu_addw(&emu_sp, 0x6);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x24));
	emu_push(emu_cs); emu_push(0x13F0); emu_cs = 0x2756; f__2756_0A59_0023_D969();
l__13F0:
	emu_pop(&emu_cx);
	emu_push(emu_ds);
	emu_push(emu_ds);
	emu_ax = 0x6572;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x1402); emu_cs = 0x01F7; emu_String_strcasecmp();
l__1402:
	emu_addw(&emu_sp, 0x8);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax != 0) { /* Unresolved jump */ emu_ip = 0x140E; emu_last_cs = 0x1DD7; emu_last_ip = 0x1407; emu_last_length = 0x000C; emu_last_crc = 0xA61A; emu_call(); return; }
	emu_ax = 0x657B;
	goto l__1411;
l__1411:
	emu_push(emu_ax);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0xA);
	emu_addw(&emu_ax, 0x6);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1421); emu_cs = 0x01F7; emu_String_strcpy();
l__1421:
	emu_addw(&emu_sp, 0x8);
	goto l__164D;
l__1427:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x10));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xE));
	emu_push(emu_cs); emu_push(0x1437); emu_cs = 0x2756; f__2756_0C31_0037_2A81();
l__1437:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_get_memory16(emu_es, emu_bx, 0x0) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x0), 0xFFFF);
	if (emu_get_memory16(emu_es, emu_bx, 0x0) != 0xFFFF) goto l__144B;
	/* Unresolved jump */ emu_ip = 0x13A2; emu_last_cs = 0x1DD7; emu_last_ip = 0x1448; emu_last_length = 0x0014; emu_last_crc = 0xE282; emu_call();
l__144B:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_push(emu_cs); emu_push(0x1456); emu_cs = 0x2756; f__2756_0C0B_0021_873C();
l__1456:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_ax;
	emu_ax = 0x4;
	emu_push(emu_ax);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x8);
	emu_addw(&emu_ax, 0x4);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_ax);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0xA);
	emu_addw(&emu_ax, 0xA);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x147A); emu_cs = 0x01F7; emu_Tools_Memcopy();
l__147A:
	emu_addw(&emu_sp, 0xA);
	emu_push(emu_ds);
	emu_ax = 0x65B4;
	emu_push(emu_ax);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0xA);
	emu_addw(&emu_ax, 0x6);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1491); emu_cs = 0x01F7; emu_String_strcpy();
l__1491:
	emu_addw(&emu_sp, 0x8);
	emu_push(emu_ds);
	emu_ax = 0x652E;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x14A4); emu_cs = 0x01F7; emu_String_strcasecmp();
l__14A4:
	emu_addw(&emu_sp, 0x8);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax == 0) { /* Unresolved jump */ emu_ip = 0x14C5; emu_last_cs = 0x1DD7; emu_last_ip = 0x14A9; emu_last_length = 0x0017; emu_last_crc = 0x7098; emu_call(); return; }
	emu_push(emu_ds);
	emu_ax = 0x6538;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x14BB); emu_cs = 0x01F7; emu_String_strcasecmp();
l__14BB:
	emu_addw(&emu_sp, 0x8);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax == 0) { /* Unresolved jump */ emu_ip = 0x14C5; emu_last_cs = 0x1DD7; emu_last_ip = 0x14C0; emu_last_length = 0x000A; emu_last_crc = 0x8601; emu_call(); return; }
	goto l__159F;
l__159F:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x12));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x10));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xE));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_push(emu_cs); emu_push(0x15C6); emu_cs = 0x2756; f__2756_0D59_0006_C5AC();
l__15C6:
	emu_addw(&emu_sp, 0xA);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax != 0) goto l__15DC;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_push(emu_cs); emu_push(0x15D8); emu_cs = 0x2756; f__2756_0D12_0042_A9FA();
	/* Unresolved jump */ emu_ip = 0x15D8; emu_last_cs = 0x1DD7; emu_last_ip = 0x15D8; emu_last_length = 0x0012; emu_last_crc = 0xC55E; emu_call();
l__15DC:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x12));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x10));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xE));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_push(emu_cs); emu_push(0x1603); emu_cs = 0x2756; f__2756_0D5F_0012_AE08();
l__1603:
	emu_addw(&emu_sp, 0xA);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_push(emu_cs); emu_push(0x1611); emu_cs = 0x2756; f__2756_0E7E_0006_82F7();
l__1611:
	emu_pop(&emu_cx);
	emu_di = emu_ax;
	emu_orw(&emu_di, emu_di);
	if (emu_di == 0) goto l__164D;
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = emu_di;
	emu_cwd();
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1625); emu_cs = 0x23E1; f__23E1_0004_0014_2BC0();
	/* Unresolved jump */ emu_ip = 0x1625; emu_last_cs = 0x1DD7; emu_last_ip = 0x1625; emu_last_length = 0x0014; emu_last_crc = 0x9695; emu_call();
l__164D:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_dx = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_get_memory16(emu_es, emu_bx, 0x4) = emu_ax;
	emu_get_memory16(emu_es, emu_bx, 0x2) = emu_dx;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_get_memory8(emu_es, emu_bx, 0x6) = 0x0;
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0xE);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x10));
	if (emu_ax == 0) { /* Unresolved jump */ emu_ip = 0x168A; emu_last_cs = 0x1DD7; emu_last_ip = 0x166C; emu_last_length = 0x003A; emu_last_crc = 0xA88D; emu_call(); return; }
	emu_ax = 0x4;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x10));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0xA);
	emu_addw(&emu_ax, 0x6);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1687); emu_cs = 0x01F7; emu_Tools_Memcopy();
l__1687:
	emu_addw(&emu_sp, 0xA);
	emu_ax = 0x1;
	goto l__12E3;
l__1690:
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
 * Decompiled function f__1DD7_1696_0011_A4E3()
 *
 * @name f__1DD7_1696_0011_A4E3
 * @implements 1DD7:1696:0011:A4E3 ()
 * @implements 1DD7:16A7:0016:CA70
 * @implements 1DD7:16D4:0029:9C96
 * @implements 1DD7:16FD:0002:D43A
 * @implements 1DD7:16FF:0011:F32E
 * @implements 1DD7:1710:000E:F8EB
 * @implements 1DD7:171E:0019:4769
 * @implements 1DD7:1727:0010:D59A
 * @implements 1DD7:1737:0012:C80C
 * @implements 1DD7:1749:0033:775B
 *
 * Called From: 1DD7:0F3B:000C:96B1
 * Called From: 1DD7:12C5:0009:4A39
 */
void f__1DD7_1696_0011_A4E3()
{
l__1696:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x4);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_ax != 0) goto l__16A7;
	/* Unresolved jump */ emu_ip = 0x1778; emu_last_cs = 0x1DD7; emu_last_ip = 0x16A4; emu_last_length = 0x0011; emu_last_crc = 0xA4E3; emu_call();
l__16A7:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x24), 0xFFFF);
	if (emu_get_memory16(emu_es, emu_bx, 0x24) == 0xFFFF) goto l__16D4;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x24));
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x16BD); emu_cs = 0x2756; emu_ip = 0x0B49; emu_last_cs = 0x1DD7; emu_last_ip = 0x16B8; emu_last_length = 0x0016; emu_last_crc = 0xCA70; emu_call();
	/* Unresolved jump */ emu_ip = 0x16BD; emu_last_cs = 0x1DD7; emu_last_ip = 0x16BD; emu_last_length = 0x0016; emu_last_crc = 0xCA70; emu_call();
l__16D4:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x0), 0xFFFF);
	if (emu_get_memory16(emu_es, emu_bx, 0x0) != 0xFFFF) goto l__16FF;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x10);
	emu_dx = emu_get_memory16(emu_es, emu_bx, 0xE);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_dx;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_ax != 0) {
		emu_bx = 0x3;
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
l__16FD:
	goto l__1727;
l__16FF:
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_push(emu_cs); emu_push(0x1710); emu_cs = 0x2756; f__2756_094F_0029_7838();
l__1710:
	emu_addw(&emu_sp, 0x6);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_push(emu_cs); emu_push(0x171E); emu_cs = 0x2756; f__2756_0D12_0042_A9FA();
l__171E:
	emu_pop(&emu_cx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_get_memory16(emu_es, emu_bx, 0x0) = 0xFFFF;
l__1727:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x10));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xE));
	emu_push(emu_cs); emu_push(0x1737); emu_cs = 0x23E1; f__23E1_01C2_0011_24E8();
l__1737:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x14));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x12));
	emu_push(emu_cs); emu_push(0x1749); emu_cs = 0x23E1; f__23E1_01C2_0011_24E8();
l__1749:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_get_memory16(emu_es, emu_bx, 0x14) = 0x0;
	emu_get_memory16(emu_es, emu_bx, 0x12) = 0x0;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_get_memory16(emu_es, emu_bx, 0x10) = 0x0;
	emu_get_memory16(emu_es, emu_bx, 0xE) = 0x0;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_get_memory16(emu_es, emu_bx, 0x4) = 0x0;
	emu_get_memory16(emu_es, emu_bx, 0x2) = 0x0;
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__1DD7_177C_0030_42B8()
 *
 * @name f__1DD7_177C_0030_42B8
 * @implements 1DD7:177C:0030:42B8 ()
 * @implements 1DD7:17A5:0007:D4FE
 * @implements 1DD7:17A9:0003:9D0F
 * @implements 1DD7:17AC:0022:7E35
 * @implements 1DD7:17CE:0012:C53A
 * @implements 1DD7:17E0:0017:F7B8
 * @implements 1DD7:17F7:000D:017E
 * @implements 1DD7:1804:0031:E88B
 * @implements 1DD7:1862:0008:4D40
 * @implements 1DD7:186A:0002:2597
 *
 * Called From: 1DD7:0663:0017:E91D
 * Called From: 1DD7:07AC:0017:34D9
 * Called From: 1DD7:195E:0021:1C0F
 */
void f__1DD7_177C_0030_42B8()
{
l__177C:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_ax != 0) {
		emu_ax = emu_get_memory16(emu_ss, emu_bp,  0xA);
		emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0xC));
		if (emu_ax != 0) {
			emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0xA));
			emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x0), 0xFFFF);
			if (emu_get_memory16(emu_es, emu_bx, 0x0) != 0xFFFF) goto l__17AC;
			emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0xA));
			emu_ax = emu_get_memory16(emu_es, emu_bx, 0xE);
			emu_orw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x10));
			if (emu_ax != 0) goto l__17AC;
		}
	}
l__17A5:
	emu_xorw(&emu_dx, emu_dx);
	emu_xorw(&emu_ax, emu_ax);
l__17A9:
	goto l__186A;
l__17AC:
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_ds);
	emu_ax = 0x984A;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x17CE); emu_cs = 0x01F7; f__01F7_2562_0026_6AD7();
l__17CE:
	emu_addw(&emu_sp, 0x14);
	emu_push(emu_ds);
	emu_ax = 0x6606;
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x984A;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x17E0); emu_cs = 0x01F7; emu_String_strcat();
l__17E0:
	emu_addw(&emu_sp, 0x8);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0xA);
	emu_addw(&emu_ax, 0x6);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x984A;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x17F7); emu_cs = 0x01F7; emu_String_strcat();
l__17F7:
	emu_addw(&emu_sp, 0x8);
	emu_push(emu_ds);
	emu_ax = 0x984A;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1804); emu_cs = 0x1FB5; f__1FB5_15B5_0015_6A00();
l__1804:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax != 0) goto l__1862;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x0), 0xFFFF);
	if (emu_get_memory16(emu_es, emu_bx, 0x0) == 0xFFFF) { /* Unresolved jump */ emu_ip = 0x185F; emu_last_cs = 0x1DD7; emu_last_ip = 0x1811; emu_last_length = 0x0031; emu_last_crc = 0xE88B; emu_call(); return; }
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_ds);
	emu_ax = 0x984A;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x1835); emu_cs = 0x01F7; f__01F7_2562_0026_6AD7();
	/* Unresolved jump */ emu_ip = 0x1835; emu_last_cs = 0x1DD7; emu_last_ip = 0x1835; emu_last_length = 0x0031; emu_last_crc = 0xE88B; emu_call();
l__1862:
	emu_dx = emu_ds;
	emu_ax = 0x984A;
	goto l__17A9;
l__186A:
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__1DD7_186C_0030_42BF()
 *
 * @name f__1DD7_186C_0030_42BF
 * @implements 1DD7:186C:0030:42BF ()
 * @implements 1DD7:1895:0007:D4F9
 * @implements 1DD7:189C:0022:7AB5
 * @implements 1DD7:18BE:0012:D73A
 * @implements 1DD7:18D0:0017:E5B4
 * @implements 1DD7:18E7:000D:137E
 * @implements 1DD7:18F4:0015:4424
 * @implements 1DD7:1909:0017:E5B4
 * @implements 1DD7:1920:000D:137E
 * @implements 1DD7:192D:0009:4826
 * @implements 1DD7:193E:0002:2597
 *
 * Called From: 1DD7:0DC1:0010:45B7
 */
void f__1DD7_186C_0030_42BF()
{
l__186C:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_ax != 0) {
		emu_ax = emu_get_memory16(emu_ss, emu_bp,  0xA);
		emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0xC));
		if (emu_ax != 0) {
			emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0xA));
			emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x0), 0xFFFF);
			if (emu_get_memory16(emu_es, emu_bx, 0x0) != 0xFFFF) goto l__189C;
			emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0xA));
			emu_ax = emu_get_memory16(emu_es, emu_bx, 0xE);
			emu_orw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x10));
			if (emu_ax != 0) goto l__189C;
		}
	}
l__1895:
	emu_xorw(&emu_dx, emu_dx);
	emu_xorw(&emu_ax, emu_ax);
	goto l__193E;
l__189C:
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_ds);
	emu_ax = 0x9858;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x18BE); emu_cs = 0x01F7; f__01F7_2562_0026_6AD7();
l__18BE:
	emu_addw(&emu_sp, 0x14);
	emu_push(emu_ds);
	emu_ax = 0x6606;
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x9858;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x18D0); emu_cs = 0x01F7; emu_String_strcat();
l__18D0:
	emu_addw(&emu_sp, 0x8);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0xA);
	emu_addw(&emu_ax, 0xA);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x9858;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x18E7); emu_cs = 0x01F7; emu_String_strcat();
l__18E7:
	emu_addw(&emu_sp, 0x8);
	emu_push(emu_ds);
	emu_ax = 0x9858;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x18F4); emu_cs = 0x1FB5; f__1FB5_15B5_0015_6A00();
l__18F4:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax != 0) { /* Unresolved jump */ emu_ip = 0x1936; emu_last_cs = 0x1DD7; emu_last_ip = 0x18F8; emu_last_length = 0x0015; emu_last_crc = 0x4424; emu_call(); return; }
	emu_push(emu_ds);
	emu_ax = 0x660D;
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x9858;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1909); emu_cs = 0x01F7; emu_String_strcpy();
l__1909:
	emu_addw(&emu_sp, 0x8);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0xA);
	emu_addw(&emu_ax, 0xA);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x9858;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1920); emu_cs = 0x01F7; emu_String_strcat();
l__1920:
	emu_addw(&emu_sp, 0x8);
	emu_push(emu_ds);
	emu_ax = 0x9858;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x192D); emu_cs = 0x1FB5; f__1FB5_15B5_0015_6A00();
l__192D:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax != 0) { /* Unresolved jump */ emu_ip = 0x1936; emu_last_cs = 0x1DD7; emu_last_ip = 0x1931; emu_last_length = 0x0009; emu_last_crc = 0x4826; emu_call(); return; }
	goto l__1895;
l__193E:
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__1DD7_1940_0021_1C0F()
 *
 * @name f__1DD7_1940_0021_1C0F
 * @implements 1DD7:1940:0021:1C0F ()
 * @implements 1DD7:1961:0018:A313
 * @implements 1DD7:1976:0003:9C2D
 * @implements 1DD7:1979:000A:5658
 * @implements 1DD7:1983:0011:BEDF
 * @implements 1DD7:1994:000C:324F
 * @implements 1DD7:19A0:0024:F705
 * @implements 1DD7:19C4:0012:EE74
 * @implements 1DD7:19D6:000B:9A42
 * @implements 1DD7:19E1:0027:EEAB
 * @implements 1DD7:1A2F:0005:150B
 * @implements 1DD7:1A34:0018:6C8D
 * @implements 1DD7:1A4C:000B:F4BE
 * @implements 1DD7:1A58:002D:1A8B
 * @implements 1DD7:1A85:000F:955F
 * @implements 1DD7:1A94:003F:252C
 * @implements 1DD7:1AD3:0032:A2ED
 * @implements 1DD7:1AD6:002F:00C7
 * @implements 1DD7:1B05:000F:92E6
 * @implements 1DD7:1B14:003A:F793
 * @implements 1DD7:1B4E:0009:2605
 * @implements 1DD7:1B57:003A:432B
 * @implements 1DD7:1B91:0002:C9BA
 * @implements 1DD7:1B93:0010:3828
 * @implements 1DD7:1BA3:000C:5035
 * @implements 1DD7:1BA6:0009:DA1D
 * @implements 1DD7:1BAF:0005:8BCF
 *
 * Called From: 1DD7:06FA:001B:55CF
 * Called From: 1DD7:0843:001B:24E3
 */
void f__1DD7_1940_0021_1C0F()
{
l__1940:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x14);
	emu_push(emu_si);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = 0x0;
	emu_get_memory16(emu_ss, emu_bp, -0x8) = 0x0;
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x1961); f__1DD7_177C_0030_42B8();
l__1961:
	emu_addw(&emu_sp, 0x8);
	emu_get_memory16(emu_ss, emu_bp, -0xA) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0xC) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0xC);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0xA));
	if (emu_ax != 0) goto l__1979;
	emu_xorw(&emu_dx, emu_dx);
	emu_xorw(&emu_ax, emu_ax);
l__1976:
	goto l__1BAF;
l__1979:
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_cs);
	emu_push(0x1983); f__1DD7_1BB4_002A_17AC();
l__1983:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_cs); emu_push(0x1994); emu_cs = 0x01F7; emu_String_strlen();
l__1994:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_incw(&emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x19A0); emu_cs = 0x23E1; f__23E1_0004_0014_2BC0();
l__19A0:
	emu_addw(&emu_sp, 0x6);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_get_memory16(emu_es, emu_bx, 0x1C) = emu_dx;
	emu_get_memory16(emu_es, emu_bx, 0x1A) = emu_ax;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x1C));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x1A));
	emu_push(emu_cs); emu_push(0x19C4); emu_cs = 0x01F7; emu_String_strcpy();
l__19C4:
	emu_addw(&emu_sp, 0x8);
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_cs); emu_push(0x19D6); emu_cs = 0x1FB5; f__1FB5_01FA_0010_F89C();
l__19D6:
	emu_addw(&emu_sp, 0x6);
	emu_si = emu_ax;
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x19E1); emu_cs = 0x1FB5; f__1FB5_16D5_006A_679B();
l__19E1:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0xE);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x10));
	if (emu_ax == 0) goto l__1A2F;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x2);
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x14));
	if ((int16)emu_ax < (int16)emu_get_memory16(emu_ss, emu_bp,  0x14)) { /* Unresolved jump */ emu_ip = 0x1A2D; emu_last_cs = 0x1DD7; emu_last_ip = 0x19F9; emu_last_length = 0x0027; emu_last_crc = 0xEEAB; emu_call(); return; }
	if ((int16)emu_ax > (int16)emu_get_memory16(emu_ss, emu_bp,  0x14)) { /* Unresolved jump */ emu_ip = 0x1A02; emu_last_cs = 0x1DD7; emu_last_ip = 0x19FB; emu_last_length = 0x0027; emu_last_crc = 0xEEAB; emu_call(); return; }
	emu_cmpw(&emu_dx, emu_get_memory16(emu_ss, emu_bp,  0x12));
	if (emu_dx <= emu_get_memory16(emu_ss, emu_bp,  0x12)) { /* Unresolved jump */ emu_ip = 0x1A2D; emu_last_cs = 0x1DD7; emu_last_ip = 0x1A00; emu_last_length = 0x0027; emu_last_crc = 0xEEAB; emu_call(); return; }
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x1A08); emu_cs = 0x1FB5; f__1FB5_09C7_0018_922D();
	/* Unresolved jump */ emu_ip = 0x1A08; emu_last_cs = 0x1DD7; emu_last_ip = 0x1A08; emu_last_length = 0x0027; emu_last_crc = 0xEEAB; emu_call();
l__1A2F:
	emu_push(emu_cs); emu_push(0x1A34); emu_cs = 0x23E1; f__23E1_0334_000B_CF65();
l__1A34:
	emu_bx = emu_get_memory16(emu_ss, emu_bp, -0x2);
	emu_cx = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_addw(&emu_cx, 0x10);
	emu_adcw(&emu_bx, 0x0);
	emu_cmpw(&emu_dx, emu_bx);
	if ((int16)emu_dx > (int16)emu_bx) goto l__1A4C;
	if ((int16)emu_dx < (int16)emu_bx) { /* Unresolved jump */ emu_ip = 0x1A4A; emu_last_cs = 0x1DD7; emu_last_ip = 0x1A44; emu_last_length = 0x0018; emu_last_crc = 0x6C8D; emu_call(); return; }
	emu_cmpw(&emu_ax, emu_cx);
	if (emu_ax >= emu_cx) goto l__1A4C;
	/* Unresolved jump */ emu_ip = 0x1A02; emu_last_cs = 0x1DD7; emu_last_ip = 0x1A4A; emu_last_length = 0x0018; emu_last_crc = 0x6C8D; emu_call();
l__1A4C:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x0), 0xFFFF);
	if (emu_get_memory16(emu_es, emu_bx, 0x0) == 0xFFFF) goto l__1A58;
	goto l__1AD6;
l__1A58:
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0xE);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x10));
	if (emu_ax == 0) goto l__1A85;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x10);
	emu_dx = emu_get_memory16(emu_ss, emu_bp,  0xE);
	emu_get_memory16(emu_es, emu_bx, 0x20) = emu_ax;
	emu_get_memory16(emu_es, emu_bx, 0x1E) = emu_dx;
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x10);
	emu_dx = emu_get_memory16(emu_ss, emu_bp,  0xE);
	emu_addw(&emu_dx, 0x78);
	emu_adcw(&emu_ax, 0x0);
	emu_get_memory16(emu_ss, emu_bp,  0x10) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp,  0xE) = emu_dx;
	/* Unresolved jump */ emu_ip = 0x1AAB; emu_last_cs = 0x1DD7; emu_last_ip = 0x1A83; emu_last_length = 0x002D; emu_last_crc = 0x1A8B; emu_call();
l__1A85:
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_dx = 0x78;
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x1A94); emu_cs = 0x23E1; f__23E1_0004_0014_2BC0();
l__1A94:
	emu_addw(&emu_sp, 0x6);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_get_memory16(emu_es, emu_bx, 0x20) = emu_dx;
	emu_get_memory16(emu_es, emu_bx, 0x1E) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_get_memory16(emu_es, emu_bx, 0x22) = 0x1;
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x78);
	emu_adcw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x0);
	emu_subw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x78);
	emu_sbbw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x0);
	emu_xorw(&emu_ax, emu_ax);
	emu_dx = 0x78;
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x20));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x1E));
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x1AD3); emu_cs = 0x1FB5; f__1FB5_0AEC_001B_A5E4();
l__1AD3:
	emu_addw(&emu_sp, 0xA);
l__1AD6:
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0xE);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x10));
	if (emu_ax == 0) goto l__1B05;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x10);
	emu_dx = emu_get_memory16(emu_ss, emu_bp,  0xE);
	emu_get_memory16(emu_es, emu_bx, 0x18) = emu_ax;
	emu_get_memory16(emu_es, emu_bx, 0x16) = emu_dx;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_cwd();
	emu_bx = emu_get_memory16(emu_ss, emu_bp,  0x10);
	emu_cx = emu_get_memory16(emu_ss, emu_bp,  0xE);
	emu_addw(&emu_cx, emu_ax);
	emu_adcw(&emu_bx, emu_dx);
	emu_get_memory16(emu_ss, emu_bp,  0x10) = emu_bx;
	emu_get_memory16(emu_ss, emu_bp,  0xE) = emu_cx;
	/* Unresolved jump */ emu_ip = 0x1B2B; emu_last_cs = 0x1DD7; emu_last_ip = 0x1B03; emu_last_length = 0x002F; emu_last_crc = 0x00C7; emu_call();
l__1B05:
	emu_ax = 0x20;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x1B14); emu_cs = 0x23E1; f__23E1_0004_0014_2BC0();
l__1B14:
	emu_addw(&emu_sp, 0x6);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_get_memory16(emu_es, emu_bx, 0x18) = emu_dx;
	emu_get_memory16(emu_es, emu_bx, 0x16) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_get_memory16(emu_es, emu_bx, 0x22) = 0x1;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x2);
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_dx);
	emu_adcw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x18));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x16));
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x1B4E); emu_cs = 0x1FB5; f__1FB5_0AEC_001B_A5E4();
l__1B4E:
	emu_addw(&emu_sp, 0xA);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x1B57); emu_cs = 0x1FB5; f__1FB5_09C7_0018_922D();
l__1B57:
	emu_pop(&emu_cx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x0), 0xFFFF);
	if (emu_get_memory16(emu_es, emu_bx, 0x0) != 0xFFFF) goto l__1B93;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x10);
	emu_dx = emu_get_memory16(emu_es, emu_bx, 0xE);
	emu_get_memory16(emu_ss, emu_bp, -0xE) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x10) = emu_dx;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x18);
	emu_dx = emu_get_memory16(emu_es, emu_bx, 0x16);
	emu_get_memory16(emu_ss, emu_bp, -0x12) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x14) = emu_dx;
	emu_push(emu_es);
	emu_lfp(&emu_es, &emu_ax, &emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_dx = emu_es;
	emu_pop(&emu_es);
	emu_bx = 0x4;
	emu_pushf();

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_ss, emu_bp, -0x10);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_ss, emu_bp, -0xE);
	emu_push(0x1B91);
	switch ((emu_cs << 16) + emu_ip) {
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x1DD7; emu_last_ip = 0x1B8E; emu_last_length = 0x003A; emu_last_crc = 0x432B;
			emu_call();
			return;
	}
l__1B91:
	goto l__1BA6;
l__1B93:
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x1BA3); f__1DD7_0D77_0027_BE74();
l__1BA3:
	emu_addw(&emu_sp, 0x8);
l__1BA6:
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x6);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x8);
	goto l__1976;
l__1BAF:
	emu_pop(&emu_si);
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__1DD7_1BB4_002A_17AC()
 *
 * @name f__1DD7_1BB4_002A_17AC
 * @implements 1DD7:1BB4:002A:17AC ()
 * @implements 1DD7:1BDE:0012:F50C
 * @implements 1DD7:1BF0:0012:EA0C
 * @implements 1DD7:1BF2:0010:869A
 * @implements 1DD7:1C02:003A:4038
 *
 * Called From: 1DD7:063D:0009:C117
 * Called From: 1DD7:1980:000A:5658
 */
void f__1DD7_1BB4_002A_17AC()
{
l__1BB4:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x16);
	emu_orw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x18));
	if (emu_ax == 0) goto l__1BF2;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x22), 0x0);
	if (emu_get_memory16(emu_es, emu_bx, 0x22) == 0x0) goto l__1BF2;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x18));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x16));
	emu_push(emu_cs); emu_push(0x1BDE); emu_cs = 0x23E1; f__23E1_01C2_0011_24E8();
l__1BDE:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x20));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x1E));
	emu_push(emu_cs); emu_push(0x1BF0); emu_cs = 0x23E1; f__23E1_01C2_0011_24E8();
l__1BF0:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
l__1BF2:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x1C));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x1A));
	emu_push(emu_cs); emu_push(0x1C02); emu_cs = 0x23E1; f__23E1_01C2_0011_24E8();
l__1C02:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_get_memory16(emu_es, emu_bx, 0x22) = 0x0;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_get_memory16(emu_es, emu_bx, 0x1C) = 0x0;
	emu_get_memory16(emu_es, emu_bx, 0x1A) = 0x0;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_get_memory16(emu_es, emu_bx, 0x18) = 0x0;
	emu_get_memory16(emu_es, emu_bx, 0x16) = 0x0;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_get_memory16(emu_es, emu_bx, 0x20) = 0x0;
	emu_get_memory16(emu_es, emu_bx, 0x1E) = 0x0;
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
 * @implements 1DD7:1C67:0010:A46A
 * @implements 1DD7:1C77:001A:7283
 * @implements 1DD7:1C91:0019:3AC5
 * @implements 1DD7:1CAA:000A:440C
 * @implements 1DD7:1CB4:000E:F129
 * @implements 1DD7:1CB9:0009:2391
 * @implements 1DD7:1CC2:0022:F69B
 * @implements 1DD7:1CFB:000D:FF6E
 * @implements 1DD7:1D08:0011:8751
 * @implements 1DD7:1D1A:0008:DA6A
 * @implements 1DD7:1D85:000A:136B
 * @implements 1DD7:1D8F:000F:46C5
 * @implements 1DD7:1D9E:0003:EB1A
 * @implements 1DD7:1D9F:0002:E03A
 * @implements 1DD7:1DE1:0004:893F
 *
 * Called From: 1DD7:05C5:000B:351D
 * Called From: 1DD7:0A71:000F:3112
 * Called From: 1DD7:0AC7:0018:0CC6
 * Called From: 1DD7:0B93:0019:AE96
 */
void f__1DD7_1C3C_0020_9C6E()
{
l__1C3C:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x8);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x10);
	emu_dx = emu_get_memory16(emu_es, emu_bx, 0xE);
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_dx;
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp,  0xA), 0xFFFF);
	if (emu_get_memory16(emu_ss, emu_bp,  0xA) != 0xFFFF) goto l__1C5C;
	goto l__1DE1;
l__1C5C:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x6);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x4));
	if (emu_ax != 0) goto l__1C67;
	goto l__1DE1;
l__1C67:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x16);
	emu_orw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x18));
	if (emu_ax != 0) goto l__1C77;
	goto l__1DE1;
l__1C77:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_es, emu_bx, 0x1E));
	emu_addw(&emu_bx, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x0);
	emu_ax = (int8)emu_al;
	emu_get_memory16(emu_ss, emu_bp,  0xA) = emu_ax;
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp,  0xA), 0xFFFF);
	if (emu_get_memory16(emu_ss, emu_bp,  0xA) != 0xFFFF) goto l__1C91;
	goto l__1DE1;
l__1C91:
	emu_ax = 0x4;
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x6616;
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x4));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x2));
	emu_push(emu_cs); emu_push(0x1CAA); emu_cs = 0x01F7; f__01F7_2890_0028_F33A();
l__1CAA:
	emu_addw(&emu_sp, 0xA);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax == 0) goto l__1CB4;
	/* Unresolved jump */ emu_ip = 0x1DA1; emu_last_cs = 0x1DD7; emu_last_ip = 0x1CB1; emu_last_length = 0x000A; emu_last_crc = 0x440C; emu_call();
l__1CB4:
	emu_andw(&emu_get_memory16(emu_ss, emu_bp,  0xA), 0xFF);
l__1CB9:
	emu_xorw(&emu_ax, emu_ax);
	emu_bx = 0x10;
	emu_pushf();

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_ss, emu_bp, -0x6);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_push(0x1CC2);
	switch ((emu_cs << 16) + emu_ip) {
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x1DD7; emu_last_ip = 0x1CBF; emu_last_length = 0x0009; emu_last_crc = 0x2391;
			emu_call();
			return;
	}
l__1CC2:
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_ax;
	emu_testw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x8);
	if ((emu_get_memory16(emu_ss, emu_bp, -0x8) & 0x8) != 0) goto l__1CB9;
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x6516), 0xFFFF);
	if (emu_get_memory16(emu_ds, 0x00, 0x6516) == 0xFFFF) goto l__1CFB;
	emu_cx = emu_get_memory16(emu_ds, 0x00, 0x9868);
	emu_dx = 0x1;
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x6516);
	emu_bx = 0xA;
	emu_pushf();

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_ss, emu_bp, -0x6);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_push(0x1CE4);
	switch ((emu_cs << 16) + emu_ip) {
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x1DD7; emu_last_ip = 0x1CE1; emu_last_length = 0x0022; emu_last_crc = 0xF69B;
			emu_call();
			return;
	}
	/* Unresolved jump */ emu_ip = 0x1CE4; emu_last_cs = 0x1DD7; emu_last_ip = 0x1CE4; emu_last_length = 0x0022; emu_last_crc = 0xF69B; emu_call();
l__1CFB:
	emu_dx = 0x0;
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0xA);
	emu_bx = 0x9;
	emu_pushf();

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_ss, emu_bp, -0x6);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_push(0x1D08);
	switch ((emu_cs << 16) + emu_ip) {
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x1DD7; emu_last_ip = 0x1D05; emu_last_length = 0x000D; emu_last_crc = 0xFF6E;
			emu_call();
			return;
	}
l__1D08:
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ax;
	emu_get_memory16(emu_ds, 0x00, 0x6516) = 0xFFFF;
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp,  0xC), 0xFFFF);
	if (emu_get_memory16(emu_ss, emu_bp,  0xC) != 0xFFFF) goto l__1D1A;
	goto l__1D85;
l__1D1A:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x9);
	if (emu_get_memory16(emu_ss, emu_bp, -0x2) != 0x9) { /* Unresolved jump */ emu_ip = 0x1D23; emu_last_cs = 0x1DD7; emu_last_ip = 0x1D1E; emu_last_length = 0x0008; emu_last_crc = 0xDA6A; emu_call(); return; }
	goto l__1D85;
l__1D85:
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0xA);
	emu_bx = 0x6;
	emu_pushf();

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_ss, emu_bp, -0x6);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_push(0x1D8F);
	switch ((emu_cs << 16) + emu_ip) {
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x1DD7; emu_last_ip = 0x1D8C; emu_last_length = 0x000A; emu_last_crc = 0x136B;
			emu_call();
			return;
	}
l__1D8F:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp,  0xA), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp,  0xA) != 0x0) goto l__1D9F;
	emu_ax = 0x5;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1D9E); emu_cs = 0x24FD; f__24FD_000A_000B_2043();
l__1D9E:
	emu_pop(&emu_cx);
l__1D9F:
	goto l__1DE1;
l__1DE1:
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

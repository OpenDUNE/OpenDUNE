/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__1FB5_0005_000F_62CC()
 *
 * @name f__1FB5_0005_000F_62CC
 * @implements 1FB5:0005:000F:62CC ()
 * @implements 1FB5:0014:000C:221B
 * @implements 1FB5:0020:0004:893F
 *
 * Called From: 1FB5:15F3:0005:4ACB
 */
void f__1FB5_0005_000F_62CC()
{
l__0005:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x2);
	emu_incb(&emu_get_memory8(emu_ds, 0x00, 0x986C));
	emu_push(emu_cs); emu_push(0x0014); emu_cs = 0x01F7; f__01F7_0428_0010_87B4();
	goto l__0014;
l__0014:
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ax;
	emu_decb(&emu_get_memory8(emu_ds, 0x00, 0x986C));
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x2);
	goto l__0020;
l__0020:
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__1FB5_0047_0012_2389()
 *
 * @name f__1FB5_0047_0012_2389
 * @implements 1FB5:0047:0012:2389 ()
 * @implements 1FB5:0059:000D:EA19
 * @implements 1FB5:0066:0004:893F
 *
 * Called From: 1FB5:026F:000F:7FED
 * Called From: 1FB5:0A80:0014:AF1C
 * Called From: 1FB5:15EE:000F:2C44
 */
void f__1FB5_0047_0012_2389()
{
l__0047:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x2);
	emu_incb(&emu_get_memory8(emu_ds, 0x00, 0x986C));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x0059); emu_cs = 0x01F7; emu_File_Close_Wrapper();
	goto l__0059;
l__0059:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ax;
	emu_decb(&emu_get_memory8(emu_ds, 0x00, 0x986C));
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x2);
	goto l__0066;
l__0066:
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__1FB5_006A_0015_A08C()
 *
 * @name f__1FB5_006A_0015_A08C
 * @implements 1FB5:006A:0015:A08C ()
 * @implements 1FB5:007F:000E:EB7D
 * @implements 1FB5:008D:0004:893F
 *
 * Called From: 1FB5:1883:000A:608D
 */
void f__1FB5_006A_0015_A08C()
{
l__006A:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x2);
	emu_incb(&emu_get_memory8(emu_ds, 0x00, 0x986C));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x007F); emu_cs = 0x01F7; emu_File_Delete();
	goto l__007F;
l__007F:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ax;
	emu_decb(&emu_get_memory8(emu_ds, 0x00, 0x986C));
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x2);
	goto l__008D;
l__008D:
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__1FB5_0091_001B_4066()
 *
 * @name f__1FB5_0091_001B_4066
 * @implements 1FB5:0091:001B:4066 ()
 * @implements 1FB5:00AC:0015:C132
 * @implements 1FB5:00C1:0004:893F
 *
 * Called From: 1FB5:07D2:0055:2064
 * Called From: 1FB5:0802:0030:FC0F
 * Called From: 1FB5:13BA:0031:4F89
 * Called From: 1FB5:14B4:0054:A029
 * Called From: 1FB5:14B4:0073:F80A
 * Called From: 1FB5:1503:0010:F2FF
 */
void f__1FB5_0091_001B_4066()
{
l__0091:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x4);
	emu_incb(&emu_get_memory8(emu_ds, 0x00, 0x986C));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x00AC); emu_cs = 0x01F7; emu_File_Seek();
	goto l__00AC;
l__00AC:
	emu_addw(&emu_sp, 0x8);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_decb(&emu_get_memory8(emu_ds, 0x00, 0x986C));
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x2);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x4);
	goto l__00C1;
l__00C1:
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__1FB5_00C5_001B_2EE4()
 *
 * @name f__1FB5_00C5_001B_2EE4
 * @implements 1FB5:00C5:001B:2EE4 ()
 * @implements 1FB5:00E0:000F:670A
 * @implements 1FB5:00EF:0004:893F
 *
 * Called From: 1FB5:0D7E:000E:D343
 * Called From: 1FB5:0D7E:0011:7543
 */
void f__1FB5_00C5_001B_2EE4()
{
l__00C5:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x2);
	emu_incb(&emu_get_memory8(emu_ds, 0x00, 0x986C));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x00E0); emu_cs = 0x01F7; emu_File_Read_Wrapper();
	goto l__00E0;
l__00E0:
	emu_addw(&emu_sp, 0x8);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ax;
	emu_decb(&emu_get_memory8(emu_ds, 0x00, 0x986C));
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x2);
	goto l__00EF;
l__00EF:
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__1FB5_00F3_001B_7009()
 *
 * @name f__1FB5_00F3_001B_7009
 * @implements 1FB5:00F3:001B:7009 ()
 * @implements 1FB5:010E:000F:670A
 * @implements 1FB5:011D:0004:893F
 *
 * Called From: 1FB5:10F5:000E:1D6C
 */
void f__1FB5_00F3_001B_7009()
{
l__00F3:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x2);
	emu_incb(&emu_get_memory8(emu_ds, 0x00, 0x986C));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x010E); emu_cs = 0x01F7; f__01F7_4481_0003_623C();
	goto l__010E;
l__010E:
	emu_addw(&emu_sp, 0x8);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ax;
	emu_decb(&emu_get_memory8(emu_ds, 0x00, 0x986C));
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x2);
	goto l__011D;
l__011D:
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__1FB5_0121_001B_0DC1()
 *
 * @name f__1FB5_0121_001B_0DC1
 * @implements 1FB5:0121:001B:0DC1 ()
 * @implements 1FB5:013C:000F:670A
 * @implements 1FB5:014B:0004:893F
 *
 * Called From: 1FB5:0260:001C:AD69
 * Called From: 1FB5:0753:000E:D1BE
 * Called From: 1FB5:0753:0011:8F3E
 * Called From: 1FB5:15DF:0018:805C
 */
void f__1FB5_0121_001B_0DC1()
{
l__0121:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x2);
	emu_incb(&emu_get_memory8(emu_ds, 0x00, 0x986C));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x013C); emu_cs = 0x01F7; emu_File_Open_Wrapper();
	goto l__013C;
l__013C:
	emu_addw(&emu_sp, 0x8);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ax;
	emu_decb(&emu_get_memory8(emu_ds, 0x00, 0x986C));
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x2);
	goto l__014B;
l__014B:
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__1FB5_01FA_0010_F89C()
 *
 * @name f__1FB5_01FA_0010_F89C
 * @implements 1FB5:01FA:0010:F89C ()
 * @implements 1FB5:020A:0015:DDD3
 * @implements 1FB5:0220:0019:5AD0
 * @implements 1FB5:0225:0014:D290
 * @implements 1FB5:023C:000B:2FEB
 * @implements 1FB5:0247:001C:AD69
 * @implements 1FB5:0263:000F:7FED
 * @implements 1FB5:0272:000F:429B
 * @implements 1FB5:0278:0009:EC05
 * @implements 1FB5:0281:001A:1FE7
 * @implements 1FB5:029B:0009:D002
 * @implements 1FB5:02A4:000A:9857
 * @implements 1FB5:02AE:0032:3133
 * @implements 1FB5:02E0:0030:827F
 * @implements 1FB5:0310:0008:ADC6
 * @implements 1FB5:0318:001C:C5E1
 * @implements 1FB5:031D:0017:3519
 * @implements 1FB5:0334:001E:6179
 * @implements 1FB5:0352:000E:50DC
 * @implements 1FB5:0360:001A:1657
 * @implements 1FB5:037A:002A:8900
 * @implements 1FB5:03A4:00ED:27BE
 * @implements 1FB5:0489:0008:F9F9
 * @implements 1FB5:048F:0002:C03A
 * @implements 1FB5:0491:0012:DCC6
 * @implements 1FB5:04A3:000E:1157
 * @implements 1FB5:04B1:000C:AC45
 * @implements 1FB5:04BD:00AD:8BDB
 * @implements 1FB5:051A:0050:77B6
 * @implements 1FB5:056A:0006:9510
 * @implements 1FB5:0570:0019:510D
 * @implements 1FB5:0589:0007:CF55
 * @implements 1FB5:0597:0007:E435
 * @implements 1FB5:05B2:000A:194C
 * @implements 1FB5:05BC:0009:ED1E
 * @implements 1FB5:0648:0009:AD12
 * @implements 1FB5:0651:001E:836D
 * @implements 1FB5:0703:0012:6404
 * @implements 1FB5:0715:0010:AC67
 * @implements 1FB5:0722:0003:1C07
 * @implements 1FB5:0725:0002:C6BA
 * @implements 1FB5:0727:000B:24D7
 * @implements 1FB5:0732:0013:08A5
 * @implements 1FB5:0734:0011:4393
 * @implements 1FB5:0745:0011:8F3E
 * @implements 1FB5:0748:000E:D1BE
 * @implements 1FB5:0756:000E:E1DE
 * @implements 1FB5:0766:000F:C3D1
 * @implements 1FB5:0780:0055:2064
 * @implements 1FB5:07BE:0017:9084
 * @implements 1FB5:07D5:0030:FC0F
 * @implements 1FB5:0805:009D:F52C
 * @implements 1FB5:0808:009A:E169
 * @implements 1FB5:08A2:0022:420C
 * @implements 1FB5:08BB:0009:2D03
 * @implements 1FB5:08C4:001A:86E4
 * @implements 1FB5:09B8:0009:3949
 * @implements 1FB5:09C1:0006:F7CE
 *
 * Called From: 0FCB:00C6:001B:5ECC
 * Called From: 1FB5:02DD:0032:3133
 * Called From: 253D:000E:0013:38F4
 * Called From: 253D:009B:0016:007A
 * Called From: 253D:011B:0016:F834
 * Called From: 256D:0033:000F:8420
 * Called From: B495:1A36:0012:DF2C
 * Called From: B4B1:0011:0016:067A
 * Called From: B4B1:002C:0010:8479
 * Called From: B4B8:1CBB:0018:7248
 * Called From: B4CA:0221:0017:A939
 * Called From: B4E0:068C:0015:539F
 * Called From: B4F2:005E:0012:A048
 * Called From: B503:11CF:0016:067A
 * Called From: B511:080A:000F:842C
 * Called From: B518:05D6:0010:4D64
 * Called From: B518:07F6:0010:4D64
 * Called From: B52A:0014:0019:1617
 * Called From: B52A:02E7:0012:2608
 * Called From: B52A:09A8:0013:6D27
 */
void f__1FB5_01FA_0010_F89C()
{
l__01FA:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x1E);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_incb(&emu_get_memory8(emu_ds, 0x00, 0x986C));
	emu_xorw(&emu_di, emu_di);
	goto l__0220;
l__020A:
	emu_bx = emu_di;
	emu_cl = 0x4;
	emu_shlw(&emu_bx, emu_cl);
	emu_ax = 0x33E0;
	emu_es = emu_ax;
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x0), 0x0);
	if (emu_get_memory16(emu_es, emu_bx, 0x0) == 0x0) { /* Unresolved jump */ emu_ip = 0x021F; emu_last_cs = 0x1FB5; emu_last_ip = 0x021B; emu_last_length = 0x0015; emu_last_crc = 0xDDD3; emu_call(); return; }
	goto l__0225;
l__0220:
	emu_cmpw(&emu_di, 0x14);
	if ((int16)emu_di < (int16)0x14) goto l__020A;
	goto l__0225;
l__0225:
	emu_cmpw(&emu_di, 0x14);
	if (emu_di != 0x14) goto l__023C;
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_ax = 0x3;
	emu_push(emu_ax);
	emu_push(emu_cs);
	/* Unresolved call */ emu_push(0x0239); emu_ip = 0x1B8D; emu_last_cs = 0x1FB5; emu_last_ip = 0x0236; emu_last_length = 0x0014; emu_last_crc = 0xD290; emu_call();
	/* Unresolved jump */ emu_ip = 0x0239; emu_last_cs = 0x1FB5; emu_last_ip = 0x0239; emu_last_length = 0x0014; emu_last_crc = 0xD290; emu_call();
l__023C:
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x0247); f__1FB5_1ABA_0031_8318();
	goto l__0247;
l__0247:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x8) = 0x0;
	emu_ax = 0x100;
	emu_push(emu_ax);
	emu_ax = 0x8001;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x0263); f__1FB5_0121_001B_0DC1();
	goto l__0263;
l__0263:
	emu_addw(&emu_sp, 0x8);
	emu_si = emu_ax;
	emu_cmpw(&emu_si, 0xFFFF);
	if (emu_si == 0xFFFF) goto l__0278;
	emu_push(emu_si);
	emu_push(emu_cs);
	emu_push(0x0272); f__1FB5_0047_0012_2389();
	goto l__0272;
l__0272:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x8) = 0x1;
	goto l__0278;
l__0278:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0xFFFF);
	if (emu_get_memory16(emu_ss, emu_bp, -0x6) != 0xFFFF) goto l__0281;
	goto l__0570;
l__0281:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x6);
	emu_dx = 0x13;
	emu_imuluw(&emu_ax, emu_dx);
	emu_dx = 0x2E9C;
	emu_bx = emu_ax;
	emu_es = emu_dx;
	emu_testb(&emu_get_memory8(emu_es, emu_bx, 0x12), 0x10);
	if ((emu_get_memory8(emu_es, emu_bx, 0x12) & 0x10) != 0) goto l__029B;
	goto l__0570;
l__029B:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp, -0x8) == 0x0) goto l__02A4;
	goto l__0570;
l__02A4:
	emu_testw(&emu_get_memory16(emu_ss, emu_bp,  0xA), 0x2);
	if ((emu_get_memory16(emu_ss, emu_bp,  0xA) & 0x2) == 0) goto l__02AE;
	goto l__0570;
l__02AE:
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x6);
	emu_dx = 0x13;
	emu_imuluw(&emu_ax, emu_dx);
	emu_dx = 0x2E9C;
	emu_bx = emu_ax;
	emu_es = emu_dx;
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x10);
	emu_ax = (int8)emu_al;
	emu_dx = 0x13;
	emu_imuluw(&emu_ax, emu_dx);
	emu_dx = 0x2E9C;
	emu_bx = emu_ax;
	emu_es = emu_dx;
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x2));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_push(emu_cs);
	emu_push(0x02E0); f__1FB5_01FA_0010_F89C();
	goto l__02E0;
l__02E0:
	emu_addw(&emu_sp, 0x6);
	emu_di = emu_ax;
	emu_bx = emu_di;
	emu_cl = 0x4;
	emu_shlw(&emu_bx, emu_cl);
	emu_ax = 0x33E0;
	emu_es = emu_ax;
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x8);
	emu_dx = 0x13;
	emu_imuluw(&emu_ax, emu_dx);
	emu_dx = 0x2E9C;
	emu_bx = emu_ax;
	emu_es = emu_dx;
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x12);
	emu_ah = 0x0;
	emu_testw(&emu_ax, 0x1);
	if ((emu_ax & 0x1) == 0) goto l__0310;
	goto l__051A;
l__0310:
	emu_get_memory16(emu_ss, emu_bp, -0x10) = 0xFFFF;
	goto l__0491;
l__0318:
	emu_get_memory16(emu_ss, emu_bp, -0xE) = 0x0;
	goto l__031D;
l__031D:
	emu_xorw(&emu_ax, emu_ax);
	emu_dx = 0x1;
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x1E);
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0xE);
	emu_addw(&emu_dx, emu_ax);
	emu_push(emu_dx);
	emu_push(emu_di);
	emu_push(emu_cs);
	emu_push(0x0334); f__1FB5_0AEC_001B_A5E4();
	goto l__0334;
l__0334:
	emu_addw(&emu_sp, 0xA);
	emu_bx = emu_get_memory16(emu_ss, emu_bp, -0xE);
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_movw(&emu_ax, emu_bp - 0x1E);
	emu_addw(&emu_bx, emu_ax);
	emu_cmpb(&emu_get_memory8(emu_ss, emu_bx, 0x0), 0x0);
	if (emu_get_memory8(emu_ss, emu_bx, 0x0) != 0x0) goto l__031D;
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x1E);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x0352); f__1FB5_1ABA_0031_8318();
	goto l__0352;
l__0352:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0xE) = emu_ax;
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0xE), 0xFFFF);
	if (emu_get_memory16(emu_ss, emu_bp, -0xE) != 0xFFFF) goto l__0360;
	goto l__0491;
l__0360:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0xE);
	emu_dx = 0x13;
	emu_imuluw(&emu_ax, emu_dx);
	emu_dx = 0x2E9C;
	emu_bx = emu_ax;
	emu_es = emu_dx;
	emu_testb(&emu_get_memory8(emu_es, emu_bx, 0x12), 0x10);
	if ((emu_get_memory8(emu_es, emu_bx, 0x12) & 0x10) != 0) goto l__037A;
	goto l__048F;
l__037A:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0xE);
	emu_dx = 0x13;
	emu_imuluw(&emu_ax, emu_dx);
	emu_dx = 0x2E9C;
	emu_bx = emu_ax;
	emu_es = emu_dx;
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x10);
	emu_ax = (int8)emu_al;
	emu_bx = emu_di;
	emu_cl = 0x4;
	emu_shlw(&emu_bx, emu_cl);
	emu_dx = 0x33E0;
	emu_es = emu_dx;
	emu_cmpw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x8));
	if (emu_ax == emu_get_memory16(emu_es, emu_bx, 0x8)) goto l__03A4;
	goto l__048F;
l__03A4:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x6);
	emu_dx = 0x13;
	emu_imuluw(&emu_ax, emu_dx);
	emu_dx = 0x2E9C;
	emu_bx = emu_ax;
	emu_es = emu_dx;
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x10);
	emu_ax = (int8)emu_al;
	emu_dx = 0x13;
	emu_imuluw(&emu_ax, emu_dx);
	emu_dx = 0x2E9C;
	emu_bx = emu_ax;
	emu_es = emu_dx;
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0xA);
	emu_dx = emu_get_memory16(emu_es, emu_bx, 0x8);
	emu_push(emu_ax);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0xE);
	emu_bx = 0x13;
	emu_push(emu_dx);
	emu_imuluw(&emu_ax, emu_bx);
	emu_dx = 0x2E9C;
	emu_bx = emu_ax;
	emu_es = emu_dx;
	emu_pop(&emu_ax);
	emu_pop(&emu_dx);
	emu_get_memory16(emu_es, emu_bx, 0xA) = emu_dx;
	emu_get_memory16(emu_es, emu_bx, 0x8) = emu_ax;
	emu_bx = emu_di;
	emu_cl = 0x4;
	emu_shlw(&emu_bx, emu_cl);
	emu_ax = 0x33E0;
	emu_es = emu_ax;
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x8);
	emu_dx = 0x13;
	emu_imuluw(&emu_ax, emu_dx);
	emu_dx = 0x2E9C;
	emu_bx = emu_get_memory16(emu_ss, emu_bp, -0xA);
	emu_cx = emu_get_memory16(emu_ss, emu_bp, -0xC);
	emu_si = emu_ax;
	emu_es = emu_dx;
	emu_addw(&emu_cx, emu_get_memory16(emu_es, emu_si, 0xC));
	emu_adcw(&emu_bx, emu_get_memory16(emu_es, emu_si, 0xE));
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0xE);
	emu_dx = 0x13;
	emu_imuluw(&emu_ax, emu_dx);
	emu_dx = 0x2E9C;
	emu_es = emu_dx;
	emu_xchgw(&emu_ax, &emu_bx);
	emu_get_memory16(emu_es, emu_bx, 0xE) = emu_ax;
	emu_get_memory16(emu_es, emu_bx, 0xC) = emu_cx;
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x10), 0xFFFF);
	if (emu_get_memory16(emu_ss, emu_bp, -0x10) != 0xFFFF) {
		emu_ax = emu_get_memory16(emu_ss, emu_bp, -0xE);
		emu_dx = 0x13;
		emu_imuluw(&emu_ax, emu_dx);
		emu_dx = 0x2E9C;
		emu_bx = emu_ax;
		emu_es = emu_dx;
		emu_ax = emu_get_memory16(emu_es, emu_bx, 0xE);
		emu_dx = emu_get_memory16(emu_es, emu_bx, 0xC);
		emu_push(emu_ax);
		emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x10);
		emu_bx = 0x13;
		emu_push(emu_dx);
		emu_imuluw(&emu_ax, emu_bx);
		emu_dx = 0x2E9C;
		emu_bx = emu_ax;
		emu_es = emu_dx;
		emu_pop(&emu_ax);
		emu_subw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0xC));
		emu_pop(&emu_dx);
		emu_sbbw(&emu_dx, emu_get_memory16(emu_es, emu_bx, 0xE));
		emu_push(emu_ax);
		emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x10);
		emu_bx = 0x13;
		emu_push(emu_dx);
		emu_imuluw(&emu_ax, emu_bx);
		emu_dx = 0x2E9C;
		emu_bx = emu_ax;
		emu_es = emu_dx;
		emu_pop(&emu_ax);
		emu_get_memory16(emu_es, emu_bx, 0x6) = emu_ax;
		emu_pop(&emu_ax);
		emu_get_memory16(emu_es, emu_bx, 0x4) = emu_ax;
	}
	goto l__0489;
l__0489:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0xE);
	emu_get_memory16(emu_ss, emu_bp, -0x10) = emu_ax;
	goto l__048F;
l__048F:
	goto l__0491;
l__0491:
	emu_xorw(&emu_ax, emu_ax);
	emu_dx = 0x4;
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0xC);
	emu_push(emu_ax);
	emu_push(emu_di);
	emu_push(emu_cs);
	emu_push(0x04A3); f__1FB5_0AEC_001B_A5E4();
	goto l__04A3;
l__04A3:
	emu_addw(&emu_sp, 0xA);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0xC);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0xA));
	if (emu_ax == 0) goto l__04B1;
	goto l__0318;
l__04B1:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x10), 0xFFFF);
	if (emu_get_memory16(emu_ss, emu_bp, -0x10) == 0xFFFF) { /* Unresolved jump */ emu_ip = 0x04F8; emu_last_cs = 0x1FB5; emu_last_ip = 0x04B5; emu_last_length = 0x000C; emu_last_crc = 0xAC45; emu_call(); return; }
	emu_push(emu_di);
	emu_push(emu_cs);
	emu_push(0x04BD); f__1FB5_16D5_006A_679B();
	goto l__04BD;
l__04BD:
	emu_pop(&emu_cx);
	emu_push(emu_ax);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x10);
	emu_bx = 0x13;
	emu_push(emu_dx);
	emu_imuluw(&emu_ax, emu_bx);
	emu_dx = 0x2E9C;
	emu_bx = emu_ax;
	emu_es = emu_dx;
	emu_pop(&emu_ax);
	emu_pop(&emu_dx);
	emu_subw(&emu_dx, emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_sbbw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0xE));
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x10);
	emu_dx = 0x13;
	emu_imuluw(&emu_ax, emu_dx);
	emu_dx = 0x2E9C;
	emu_bx = emu_ax;
	emu_es = emu_dx;
	emu_pop(&emu_ax);
	emu_get_memory16(emu_es, emu_bx, 0x6) = emu_ax;
	emu_pop(&emu_ax);
	emu_get_memory16(emu_es, emu_bx, 0x4) = emu_ax;
	emu_bx = emu_di;
	emu_cl = 0x4;
	emu_shlw(&emu_bx, emu_cl);
	emu_ax = 0x33E0;
	emu_es = emu_ax;
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x8);
	emu_dx = 0x13;
	emu_imuluw(&emu_ax, emu_dx);
	emu_dx = 0x2E9C;
	emu_bx = emu_ax;
	emu_es = emu_dx;
	emu_orb(&emu_get_memory8(emu_es, emu_bx, 0x12), 0x1);
	goto l__051A;
l__051A:
	emu_bx = emu_di;
	emu_cl = 0x4;
	emu_shlw(&emu_bx, emu_cl);
	emu_ax = 0x33E0;
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x6);
	emu_es = emu_ax;
	emu_get_memory16(emu_es, emu_bx, 0x8) = emu_dx;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x6);
	emu_dx = 0x13;
	emu_imuluw(&emu_ax, emu_dx);
	emu_dx = 0x2E9C;
	emu_bx = emu_ax;
	emu_es = emu_dx;
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x2);
	emu_dx = emu_get_memory16(emu_es, emu_bx, 0x0);
	emu_bx = emu_di;
	emu_cl = 0x4;
	emu_shlw(&emu_bx, emu_cl);
	emu_cx = 0x33E0;
	emu_es = emu_cx;
	emu_get_memory16(emu_es, emu_bx, 0xE) = emu_ax;
	emu_get_memory16(emu_es, emu_bx, 0xC) = emu_dx;
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_di);
	emu_push(emu_cs);
	emu_push(0x056A); f__1FB5_1207_001B_2A6C();
	goto l__056A;
l__056A:
	emu_addw(&emu_sp, 0x8);
	goto l__09B8;
l__0570:
	emu_get_memory16(emu_ss, emu_bp, -0x4) = 0x8001;
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0xA);
	emu_cmpw(&emu_ax, 0x1);
	if (emu_ax == 0x1) goto l__0589;
	emu_cmpw(&emu_ax, 0x2);
	if (emu_ax == 0x2) goto l__0597;
	emu_cmpw(&emu_ax, 0x3);
	if (emu_ax == 0x3) { /* Unresolved jump */ emu_ip = 0x0590; emu_last_cs = 0x1FB5; emu_last_ip = 0x0585; emu_last_length = 0x0019; emu_last_crc = 0x510D; emu_call(); return; }
	/* Unresolved jump */ emu_ip = 0x059E; emu_last_cs = 0x1FB5; emu_last_ip = 0x0587; emu_last_length = 0x0019; emu_last_crc = 0x510D; emu_call();
l__0589:
	emu_get_memory16(emu_ss, emu_bp, -0x4) = 0x8001;
	goto l__05B2;
l__0597:
	emu_get_memory16(emu_ss, emu_bp, -0x4) = 0x8302;
	goto l__05B2;
l__05B2:
	emu_testw(&emu_get_memory16(emu_ss, emu_bp,  0xA), 0x2);
	if ((emu_get_memory16(emu_ss, emu_bp,  0xA) & 0x2) != 0) goto l__05BC;
	goto l__0648;
l__05BC:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0xFFFF);
	if (emu_get_memory16(emu_ss, emu_bp, -0x6) != 0xFFFF) { /* Unresolved jump */ emu_ip = 0x05C5; emu_last_cs = 0x1FB5; emu_last_ip = 0x05C0; emu_last_length = 0x0009; emu_last_crc = 0xED1E; emu_call(); return; }
	goto l__0648;
l__0648:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0xFFFF);
	if (emu_get_memory16(emu_ss, emu_bp, -0x6) != 0xFFFF) goto l__0651;
	goto l__0703;
l__0651:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x6);
	emu_dx = 0x13;
	emu_imuluw(&emu_ax, emu_dx);
	emu_dx = 0x2E9C;
	emu_bx = emu_ax;
	emu_es = emu_dx;
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x8);
	emu_orw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0xA));
	if (emu_ax != 0) { /* Unresolved jump */ emu_ip = 0x066F; emu_last_cs = 0x1FB5; emu_last_ip = 0x066A; emu_last_length = 0x001E; emu_last_crc = 0x836D; emu_call(); return; }
	goto l__0703;
l__0703:
	emu_testw(&emu_get_memory16(emu_ss, emu_bp,  0xA), 0x1);
	if ((emu_get_memory16(emu_ss, emu_bp,  0xA) & 0x1) == 0) goto l__0727;
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x0715); f__1FB5_1574_000F_E31E();
	goto l__0715;
l__0715:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax != 0) goto l__0725;
	emu_decb(&emu_get_memory8(emu_ds, 0x00, 0x986C));
	emu_ax = 0xFFFF;
	goto l__0722;
l__0722:
	goto l__09C1;
l__0725:
	goto l__0734;
l__0727:
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x0732); f__1FB5_15B5_0015_6A00();
	goto l__0732;
l__0732:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	goto l__0734;
l__0734:
	emu_get_memory16(emu_ss, emu_bp, -0x2) = 0xFFFF;
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x8001);
	if (emu_get_memory16(emu_ss, emu_bp, -0x4) != 0x8001) goto l__0745;
	emu_ax = 0x100;
	goto l__0748;
l__0745:
	emu_ax = 0x180;
	goto l__0748;
l__0748:
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x0756); f__1FB5_0121_001B_0DC1();
	goto l__0756;
l__0756:
	emu_addw(&emu_sp, 0x8);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ax;
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0xFFFF);
	if (emu_get_memory16(emu_ss, emu_bp, -0x2) == 0xFFFF) goto l__0766;
	goto l__0780;
l__0766:
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x0775); f__1FB5_1B21_0027_F474();
	/* Unresolved jump */ emu_ip = 0x0775; emu_last_cs = 0x1FB5; emu_last_ip = 0x0775; emu_last_length = 0x000F; emu_last_crc = 0xC3D1; emu_call();
l__0780:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp, -0x8) != 0x0) {
		emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0xFFFF);
		if (emu_get_memory16(emu_ss, emu_bp, -0x6) != 0xFFFF) {
			emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x6);
			emu_dx = 0x13;
			emu_imuluw(&emu_ax, emu_dx);
			emu_dx = 0x2E9C;
			emu_bx = emu_ax;
			emu_es = emu_dx;
			emu_andb(&emu_get_memory8(emu_es, emu_bx, 0x12), 0xEF);
			emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x6);
			emu_dx = 0x13;
			emu_imuluw(&emu_ax, emu_dx);
			emu_dx = 0x2E9C;
			emu_bx = emu_ax;
			emu_es = emu_dx;
			emu_get_memory16(emu_es, emu_bx, 0x6) = 0x0;
			emu_get_memory16(emu_es, emu_bx, 0x4) = 0x0;
		}
	}
	goto l__07BE;
l__07BE:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0xFFFF);
	if (emu_get_memory16(emu_ss, emu_bp, -0x6) == 0xFFFF) goto l__0808;
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_cs);
	emu_push(0x07D5); f__1FB5_0091_001B_4066();
	goto l__07D5;
l__07D5:
	emu_addw(&emu_sp, 0x8);
	emu_push(emu_ax);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x6);
	emu_bx = 0x13;
	emu_push(emu_dx);
	emu_imuluw(&emu_ax, emu_bx);
	emu_dx = 0x2E9C;
	emu_bx = emu_ax;
	emu_es = emu_dx;
	emu_pop(&emu_ax);
	emu_get_memory16(emu_es, emu_bx, 0x6) = emu_ax;
	emu_pop(&emu_ax);
	emu_get_memory16(emu_es, emu_bx, 0x4) = emu_ax;
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_cs);
	emu_push(0x0805); f__1FB5_0091_001B_4066();
	goto l__0805;
l__0805:
	emu_addw(&emu_sp, 0x8);
	goto l__0808;
l__0808:
	emu_bx = emu_di;
	emu_cl = 0x4;
	emu_shlw(&emu_bx, emu_cl);
	emu_ax = 0x33E0;
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x6);
	emu_es = emu_ax;
	emu_get_memory16(emu_es, emu_bx, 0x8) = emu_dx;
	emu_bx = emu_di;
	emu_cl = 0x4;
	emu_shlw(&emu_bx, emu_cl);
	emu_ax = 0x33E0;
	emu_es = emu_ax;
	emu_get_memory16(emu_es, emu_bx, 0x6) = 0x0;
	emu_get_memory16(emu_es, emu_bx, 0x4) = 0x0;
	emu_bx = emu_di;
	emu_cl = 0x4;
	emu_shlw(&emu_bx, emu_cl);
	emu_ax = 0x33E0;
	emu_es = emu_ax;
	emu_get_memory16(emu_es, emu_bx, 0x0) = 0x0;
	emu_bx = emu_di;
	emu_cl = 0x4;
	emu_shlw(&emu_bx, emu_cl);
	emu_ax = 0x33E0;
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x2);
	emu_es = emu_ax;
	emu_get_memory16(emu_es, emu_bx, 0x2) = emu_dx;
	emu_bx = emu_di;
	emu_cl = 0x4;
	emu_shlw(&emu_bx, emu_cl);
	emu_ax = 0x33E0;
	emu_dx = emu_get_memory16(emu_ss, emu_bp,  0xA);
	emu_es = emu_ax;
	emu_get_memory16(emu_es, emu_bx, 0xA) = emu_dx;
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0xFFFF);
	if (emu_get_memory16(emu_ss, emu_bp, -0x6) == 0xFFFF) goto l__08A2;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x6);
	emu_dx = 0x13;
	emu_imuluw(&emu_ax, emu_dx);
	emu_dx = 0x2E9C;
	emu_bx = emu_ax;
	emu_es = emu_dx;
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x2);
	emu_dx = emu_get_memory16(emu_es, emu_bx, 0x0);
	emu_bx = emu_di;
	emu_cl = 0x4;
	emu_shlw(&emu_bx, emu_cl);
	emu_cx = 0x33E0;
	emu_es = emu_cx;
	emu_get_memory16(emu_es, emu_bx, 0xE) = emu_ax;
	emu_get_memory16(emu_es, emu_bx, 0xC) = emu_dx;
	goto l__08BB;
l__08A2:
	emu_bx = emu_di;
	emu_cl = 0x4;
	emu_shlw(&emu_bx, emu_cl);
	emu_ax = 0x33E0;
	emu_es = emu_ax;
	emu_get_memory16(emu_es, emu_bx, 0xE) = 0x0;
	emu_get_memory16(emu_es, emu_bx, 0xC) = 0x0;
	goto l__08BB;
l__08BB:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0xFFFF);
	if (emu_get_memory16(emu_ss, emu_bp, -0x6) != 0xFFFF) goto l__08C4;
	goto l__09B8;
l__08C4:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x6);
	emu_dx = 0x13;
	emu_imuluw(&emu_ax, emu_dx);
	emu_dx = 0x2E9C;
	emu_bx = emu_ax;
	emu_es = emu_dx;
	emu_testb(&emu_get_memory8(emu_es, emu_bx, 0x12), 0x6);
	if ((emu_get_memory8(emu_es, emu_bx, 0x12) & 0x6) != 0) { /* Unresolved jump */ emu_ip = 0x08DE; emu_last_cs = 0x1FB5; emu_last_ip = 0x08D9; emu_last_length = 0x001A; emu_last_crc = 0x86E4; emu_call(); return; }
	goto l__09B8;
l__09B8:
	emu_decb(&emu_get_memory8(emu_ds, 0x00, 0x986C));
	emu_ax = emu_di;
	goto l__0722;
l__09C1:
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
 * Decompiled function f__1FB5_09C7_0018_922D()
 *
 * @name f__1FB5_09C7_0018_922D
 * @implements 1FB5:09C7:0018:922D ()
 * @implements 1FB5:09DF:000A:4613
 * @implements 1FB5:09E9:0066:0F4A
 * @implements 1FB5:0A6F:0014:AF1C
 * @implements 1FB5:0A83:001B:80A7
 *
 * Called From: 0FCB:0127:0009:2605
 * Called From: 253D:0034:000F:3D83
 * Called From: 253D:00E7:0009:2605
 * Called From: 253D:0213:0009:2605
 * Called From: 256D:00A0:0009:2605
 * Called From: B495:1A59:0009:2605
 * Called From: B4B1:001C:000B:B9A3
 * Called From: B4B1:008F:0012:D287
 * Called From: B4B8:1CC9:000E:6633
 * Called From: B4CA:0251:000B:6CAB
 * Called From: B4E0:06E6:0009:2601
 * Called From: B4F2:007E:0009:2605
 * Called From: B503:121A:0009:2605
 * Called From: B511:0A7F:0009:260D
 * Called From: B518:05FD:000F:00FF
 * Called From: B518:081D:000F:00FF
 * Called From: B52A:00D4:0016:1D8A
 * Called From: B52A:00D4:001E:9A65
 * Called From: B52A:043F:0009:2205
 * Called From: B52A:0A53:0006:6250
 */
void f__1FB5_09C7_0018_922D()
{
l__09C7:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_si);
	emu_push(emu_di);
	emu_di = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_ax = 0x4;
	emu_push(emu_ax);
	emu_push(emu_di);
	emu_push(emu_cs);
	emu_push(0x09DF); f__1FB5_1A6C_0020_9634();
	goto l__09DF;
l__09DF:
	emu_addw(&emu_sp, 0x8);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax != 0) goto l__09E9;
	/* Unresolved jump */ emu_ip = 0x0A9A; emu_last_cs = 0x1FB5; emu_last_ip = 0x09E6; emu_last_length = 0x000A; emu_last_crc = 0x4613; emu_call();
l__09E9:
	emu_incb(&emu_get_memory8(emu_ds, 0x00, 0x986C));
	emu_bx = emu_di;
	emu_cl = 0x4;
	emu_shlw(&emu_bx, emu_cl);
	emu_ax = 0x33E0;
	emu_es = emu_ax;
	emu_si = emu_get_memory16(emu_es, emu_bx, 0x8);
	emu_cmpw(&emu_si, 0xFFFF);
	if (emu_si == 0xFFFF) goto l__0A6F;
	emu_ax = emu_si;
	emu_dx = 0x13;
	emu_imuluw(&emu_ax, emu_dx);
	emu_dx = 0x2E9C;
	emu_bx = emu_ax;
	emu_es = emu_dx;
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x8);
	emu_orw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0xA));
	if (emu_ax == 0) goto l__0A6F;
	emu_ax = emu_si;
	emu_dx = 0x13;
	emu_imuluw(&emu_ax, emu_dx);
	emu_dx = 0x2E9C;
	emu_bx = emu_ax;
	emu_es = emu_dx;
	emu_testb(&emu_get_memory8(emu_es, emu_bx, 0x12), 0x8);
	if ((emu_get_memory8(emu_es, emu_bx, 0x12) & 0x8) == 0) { /* Unresolved jump */ emu_ip = 0x0A6D; emu_last_cs = 0x1FB5; emu_last_ip = 0x0A30; emu_last_length = 0x0066; emu_last_crc = 0x0F4A; emu_call(); return; }
	emu_ax = emu_si;
	emu_dx = 0x13;
	emu_imuluw(&emu_ax, emu_dx);
	emu_dx = 0x2E9C;
	emu_bx = emu_ax;
	emu_es = emu_dx;
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x8));
	emu_push(emu_cs); emu_push(0x0A4F); emu_cs = 0x23E1; f__23E1_01C2_0011_24E8();
	/* Unresolved jump */ emu_ip = 0x0A4F; emu_last_cs = 0x1FB5; emu_last_ip = 0x0A4F; emu_last_length = 0x0066; emu_last_crc = 0x0F4A; emu_call();
l__0A6F:
	emu_bx = emu_di;
	emu_cl = 0x4;
	emu_shlw(&emu_bx, emu_cl);
	emu_ax = 0x33E0;
	emu_es = emu_ax;
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x2));
	emu_push(emu_cs);
	emu_push(0x0A83); f__1FB5_0047_0012_2389();
	goto l__0A83;
l__0A83:
	emu_pop(&emu_cx);
	emu_bx = emu_di;
	emu_cl = 0x4;
	emu_shlw(&emu_bx, emu_cl);
	emu_ax = 0x33E0;
	emu_es = emu_ax;
	emu_get_memory16(emu_es, emu_bx, 0x0) = 0x1;
	emu_decb(&emu_get_memory8(emu_ds, 0x00, 0x986C));
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__1FB5_0AEC_001B_A5E4()
 *
 * @name f__1FB5_0AEC_001B_A5E4
 * @implements 1FB5:0AEC:001B:A5E4 ()
 * @implements 1FB5:0B07:000E:E0C0
 * @implements 1FB5:0B12:0003:5C80
 * @implements 1FB5:0B15:0050:1E07
 * @implements 1FB5:0B65:0008:D056
 * @implements 1FB5:0B6D:0082:2E61
 * @implements 1FB5:0BC0:002F:CFD3
 * @implements 1FB5:0BEF:0021:3C8C
 * @implements 1FB5:0BF5:001B:57B4
 * @implements 1FB5:0BFB:0015:DBAE
 * @implements 1FB5:0C10:000B:B328
 * @implements 1FB5:0C1B:0011:B498
 * @implements 1FB5:0C2C:000B:94DE
 * @implements 1FB5:0C37:0009:B737
 * @implements 1FB5:0D59:0003:5D06
 * @implements 1FB5:0D5C:0014:9CEB
 * @implements 1FB5:0D70:0011:7543
 * @implements 1FB5:0D73:000E:D343
 * @implements 1FB5:0D81:004F:1ABD
 * @implements 1FB5:0DD0:001D:00AD
 * @implements 1FB5:0DED:0013:3A4A
 * @implements 1FB5:0DF5:000B:130C
 * @implements 1FB5:0E00:0003:9D01
 * @implements 1FB5:0E03:005C:A9D7
 * @implements 1FB5:0E5F:0037:6A0A
 * @implements 1FB5:0E89:000D:AC5D
 * @implements 1FB5:0E96:0006:F7CE
 *
 * Called From: 0FCB:00F2:0015:AB73
 * Called From: 0FCB:011E:0014:0A45
 * Called From: 1FB5:0331:001C:C5E1
 * Called From: 1FB5:0331:0017:3519
 * Called From: 1FB5:04A0:0012:DCC6
 * Called From: 253D:0025:0017:236C
 * Called From: 253D:00DE:0023:4714
 * Called From: 253D:0132:0017:515A
 * Called From: 253D:0148:0016:B57F
 * Called From: 253D:0172:002A:786F
 * Called From: 253D:020A:0019:DC1B
 * Called From: 256D:004A:0017:575A
 * Called From: 256D:0097:002C:8C80
 * Called From: B495:1A50:001A:4B96
 * Called From: B4B1:0043:0017:5F5A
 * Called From: B4B1:00BD:002A:CE8A
 * Called From: B4B1:00BD:0012:E067
 * Called From: B4B1:00EE:001A:7444
 * Called From: B4B1:0117:0012:E467
 * Called From: B4B1:01F2:002A:CE8A
 * Called From: B4B1:01F2:0012:E067
 * Called From: B4B1:0223:001A:7444
 * Called From: B4B1:024C:0012:E467
 * Called From: B4B1:02C4:001E:075C
 * Called From: B4CA:0246:0014:C0C9
 * Called From: B4E0:06B5:0015:76F1
 * Called From: B503:1211:0015:49AC
 * Called From: B52A:002B:0017:365A
 * Called From: B52A:035E:001A:C5D4
 * Called From: B52A:039B:0026:FDF7
 * Called From: B52A:0436:0015:1289
 * Called From: B52A:0881:0015:A573
 * Called From: B52A:0A3E:001B:0B21
 */
void f__1FB5_0AEC_001B_A5E4()
{
l__0AEC:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x16);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_si = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_ax = 0x5;
	emu_push(emu_ax);
	emu_push(emu_si);
	emu_push(emu_cs);
	emu_push(0x0B07); f__1FB5_1A6C_0020_9634();
	goto l__0B07;
l__0B07:
	emu_addw(&emu_sp, 0x8);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax != 0) goto l__0B15;
	emu_xorw(&emu_dx, emu_dx);
	emu_xorw(&emu_ax, emu_ax);
	goto l__0B12;
l__0B12:
	goto l__0E96;
l__0B15:
	emu_incb(&emu_get_memory8(emu_ds, 0x00, 0x986C));
	emu_bx = emu_si;
	emu_cl = 0x4;
	emu_shlw(&emu_bx, emu_cl);
	emu_ax = 0x33E0;
	emu_es = emu_ax;
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x2);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ax;
	emu_bx = emu_si;
	emu_cl = 0x4;
	emu_shlw(&emu_bx, emu_cl);
	emu_ax = 0x33E0;
	emu_es = emu_ax;
	emu_di = emu_get_memory16(emu_es, emu_bx, 0x8);
	emu_ax = emu_di;
	emu_dx = 0x13;
	emu_imuluw(&emu_ax, emu_dx);
	emu_dx = 0x2E9C;
	emu_bx = emu_ax;
	emu_es = emu_dx;
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x6);
	emu_dx = emu_get_memory16(emu_es, emu_bx, 0x4);
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_dx;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x6);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x4));
	if (emu_ax != 0) goto l__0B65;
	goto l__0BFB;
l__0B65:
	emu_cmpw(&emu_di, 0xFFFF);
	if (emu_di != 0xFFFF) goto l__0B6D;
	goto l__0BFB;
l__0B6D:
	emu_ax = emu_di;
	emu_dx = 0x13;
	emu_imuluw(&emu_ax, emu_dx);
	emu_dx = 0x2E9C;
	emu_bx = emu_ax;
	emu_es = emu_dx;
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x4);
	emu_orw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x6));
	if (emu_ax == 0) goto l__0BFB;
	emu_ax = emu_di;
	emu_dx = 0x13;
	emu_imuluw(&emu_ax, emu_dx);
	emu_dx = 0x2E9C;
	emu_bx = emu_ax;
	emu_es = emu_dx;
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x6);
	emu_dx = emu_get_memory16(emu_es, emu_bx, 0x4);
	emu_bx = emu_si;
	emu_cl = 0x4;
	emu_shlw(&emu_bx, emu_cl);
	emu_cx = 0x33E0;
	emu_es = emu_cx;
	emu_subw(&emu_dx, emu_get_memory16(emu_es, emu_bx, 0x4));
	emu_sbbw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x6));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0xE));
	if (emu_ax > emu_get_memory16(emu_ss, emu_bp,  0xE)) goto l__0BEF;
	if (emu_ax >= emu_get_memory16(emu_ss, emu_bp,  0xE)) {
		emu_cmpw(&emu_dx, emu_get_memory16(emu_ss, emu_bp,  0xC));
		if (emu_dx >= emu_get_memory16(emu_ss, emu_bp,  0xC)) goto l__0BEF;
	}
	goto l__0BC0;
l__0BC0:
	emu_ax = emu_di;
	emu_dx = 0x13;
	emu_imuluw(&emu_ax, emu_dx);
	emu_dx = 0x2E9C;
	emu_bx = emu_ax;
	emu_es = emu_dx;
	emu_dx = emu_get_memory16(emu_es, emu_bx, 0x6);
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x4);
	emu_bx = emu_si;
	emu_cl = 0x4;
	emu_shlw(&emu_bx, emu_cl);
	emu_cx = 0x33E0;
	emu_es = emu_cx;
	emu_subw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x4));
	emu_sbbw(&emu_dx, emu_get_memory16(emu_es, emu_bx, 0x6));
	goto l__0BF5;
l__0BEF:
	emu_dx = emu_get_memory16(emu_ss, emu_bp,  0xE);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0xC);
	goto l__0BF5;
l__0BF5:
	emu_get_memory16(emu_ss, emu_bp,  0xE) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp,  0xC) = emu_ax;
	goto l__0BFB;
l__0BFB:
	emu_get_memory16(emu_ss, emu_bp, -0x8) = 0x0;
	emu_get_memory16(emu_ss, emu_bp, -0xA) = 0x0;
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0xC);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0xE));
	if (emu_ax != 0) goto l__0C10;
	goto l__0E89;
l__0C10:
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_cs); emu_push(0x0C1B); emu_cs = 0x2B0E; emu_Tools_GetSmallestIP();
	goto l__0C1B;
l__0C1B:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp,  0xA) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp,  0x8) = emu_ax;
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp, -0x2) != 0x0) goto l__0C2C;
	goto l__0E03;
l__0C2C:
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_cs); emu_push(0x0C37); emu_cs = 0x2649; f__2649_0BAE_001D_25B1();
	goto l__0C37;
l__0C37:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax != 0) { /* Unresolved jump */ emu_ip = 0x0C40; emu_last_cs = 0x1FB5; emu_last_ip = 0x0C3B; emu_last_length = 0x0009; emu_last_crc = 0xB737; emu_call(); return; }
	goto l__0D59;
l__0D59:
	goto l__0DF5;
l__0D5C:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp,  0xE), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp,  0xE) > 0x0) goto l__0D70;
	if (emu_get_memory16(emu_ss, emu_bp,  0xE) < 0x0) { /* Unresolved jump */ emu_ip = 0x0D6B; emu_last_cs = 0x1FB5; emu_last_ip = 0x0D62; emu_last_length = 0x0014; emu_last_crc = 0x9CEB; emu_call(); return; }
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp,  0xC), 0x7D00);
	if (emu_get_memory16(emu_ss, emu_bp,  0xC) >= 0x7D00) goto l__0D70;
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0xC);
	goto l__0D73;
l__0D70:
	emu_ax = 0x7D00;
	goto l__0D73;
l__0D73:
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_cs);
	emu_push(0x0D81); f__1FB5_00C5_001B_2EE4();
	goto l__0D81;
l__0D81:
	emu_addw(&emu_sp, 0x8);
	emu_get_memory16(emu_ss, emu_bp, -0xC) = 0x0;
	emu_get_memory16(emu_ss, emu_bp, -0xE) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0xC);
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0xE);
	emu_subw(&emu_get_memory16(emu_ss, emu_bp,  0xC), emu_dx);
	emu_sbbw(&emu_get_memory16(emu_ss, emu_bp,  0xE), emu_ax);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0xC);
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0xE);
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_dx);
	emu_adcw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax);
	emu_bx = emu_si;
	emu_cl = 0x4;
	emu_shlw(&emu_bx, emu_cl);
	emu_ax = 0x33E0;
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0xC);
	emu_cx = emu_get_memory16(emu_ss, emu_bp, -0xE);
	emu_es = emu_ax;
	emu_addw(&emu_get_memory16(emu_es, emu_bx, 0x4), emu_cx);
	emu_adcw(&emu_get_memory16(emu_es, emu_bx, 0x6), emu_dx);
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0xC), 0x0);
	if ((int16)emu_get_memory16(emu_ss, emu_bp, -0xC) > (int16)0x0) goto l__0DD0;
	if ((int16)emu_get_memory16(emu_ss, emu_bp, -0xC) < (int16)0x0) { /* Unresolved jump */ emu_ip = 0x0DCE; emu_last_cs = 0x1FB5; emu_last_ip = 0x0DC5; emu_last_length = 0x004F; emu_last_crc = 0x1ABD; emu_call(); return; }
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0xE), 0x7D00);
	if (emu_get_memory16(emu_ss, emu_bp, -0xE) >= 0x7D00) goto l__0DD0;
	goto l__0E00;
l__0DD0:
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0xA);
	emu_dx = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_addw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_adcw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_get_memory16(emu_ss, emu_bp,  0xA) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp,  0x8) = emu_dx;
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_cs); emu_push(0x0DED); emu_cs = 0x2B0E; emu_Tools_GetSmallestIP();
	goto l__0DED;
l__0DED:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp,  0xA) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp,  0x8) = emu_ax;
	goto l__0DF5;
l__0DF5:
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0xC);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0xE));
	if (emu_ax == 0) goto l__0E00;
	goto l__0D5C;
l__0E00:
	goto l__0E89;
l__0E03:
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_ax = emu_di;
	emu_dx = 0x13;
	emu_imuluw(&emu_ax, emu_dx);
	emu_dx = 0x2E9C;
	emu_bx = emu_ax;
	emu_es = emu_dx;
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0xA);
	emu_dx = emu_get_memory16(emu_es, emu_bx, 0x8);
	emu_push(emu_ax);
	emu_ax = emu_di;
	emu_bx = 0x13;
	emu_push(emu_dx);
	emu_imuluw(&emu_ax, emu_bx);
	emu_dx = 0x2E9C;
	emu_bx = emu_ax;
	emu_es = emu_dx;
	emu_pop(&emu_ax);
	emu_addw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_pop(&emu_dx);
	emu_adcw(&emu_dx, emu_get_memory16(emu_es, emu_bx, 0xE));
	emu_bx = emu_si;
	emu_cl = 0x4;
	emu_shlw(&emu_bx, emu_cl);
	emu_cx = 0x33E0;
	emu_es = emu_cx;
	emu_addw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x4));
	emu_adcw(&emu_dx, emu_get_memory16(emu_es, emu_bx, 0x6));
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0E5F); emu_cs = 0x2B0E; f__2B0E_0006_0049_87B1();
	goto l__0E5F;
l__0E5F:
	emu_addw(&emu_sp, 0xC);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0xE);
	emu_dx = emu_get_memory16(emu_ss, emu_bp,  0xC);
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0xA) = emu_dx;
	emu_bx = emu_si;
	emu_cl = 0x4;
	emu_shlw(&emu_bx, emu_cl);
	emu_ax = 0x33E0;
	emu_dx = emu_get_memory16(emu_ss, emu_bp,  0xE);
	emu_cx = emu_get_memory16(emu_ss, emu_bp,  0xC);
	emu_es = emu_ax;
	emu_addw(&emu_get_memory16(emu_es, emu_bx, 0x4), emu_cx);
	emu_adcw(&emu_get_memory16(emu_es, emu_bx, 0x6), emu_dx);
	goto l__0E89;
l__0E89:
	emu_decb(&emu_get_memory8(emu_ds, 0x00, 0x986C));
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x8);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0xA);
	goto l__0B12;
l__0E96:
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
 * Decompiled function f__1FB5_0E9C_001B_37D1()
 *
 * @name f__1FB5_0E9C_001B_37D1
 * @implements 1FB5:0E9C:001B:37D1 ()
 * @implements 1FB5:0EB7:000E:A0EF
 * @implements 1FB5:0EC2:0003:1CAF
 * @implements 1FB5:0EC5:004A:EB70
 * @implements 1FB5:0F14:0019:04E8
 * @implements 1FB5:0F2D:0009:7717
 * @implements 1FB5:10D0:0003:9DA5
 * @implements 1FB5:10D3:0014:9CDB
 * @implements 1FB5:10EA:000E:1D6C
 * @implements 1FB5:10F8:0049:98F1
 * @implements 1FB5:1141:0052:A97B
 * @implements 1FB5:11C4:001D:008E
 * @implements 1FB5:11E1:0013:FAEA
 * @implements 1FB5:11E9:000B:D3AC
 * @implements 1FB5:11F4:000D:2C7A
 * @implements 1FB5:1201:0006:F7CE
 *
 * Called From: B4B1:03AE:0026:282D
 * Called From: B4B1:03DC:001B:A317
 * Called From: B4B1:03F1:0015:290C
 * Called From: B4B1:0423:001F:F908
 * Called From: B4B1:046B:001A:55EF
 * Called From: B4B1:04B5:001A:55EF
 * Called From: B4F2:0075:0017:F3DE
 * Called From: B511:082B:0021:E6D5
 * Called From: B511:084A:001F:5866
 * Called From: B511:0869:001F:AE21
 * Called From: B511:0893:001C:2075
 * Called From: B511:08D6:001A:7CEF
 * Called From: B511:08EB:0015:0963
 * Called From: B511:091A:002F:3CDB
 * Called From: B518:05EE:0018:058D
 * Called From: B518:080E:0018:058D
 */
void f__1FB5_0E9C_001B_37D1()
{
l__0E9C:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x12);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_si = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_ax = 0x6;
	emu_push(emu_ax);
	emu_push(emu_si);
	emu_push(emu_cs);
	emu_push(0x0EB7); f__1FB5_1A6C_0020_9634();
	goto l__0EB7;
l__0EB7:
	emu_addw(&emu_sp, 0x8);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax != 0) goto l__0EC5;
	emu_xorw(&emu_dx, emu_dx);
	emu_xorw(&emu_ax, emu_ax);
	goto l__0EC2;
l__0EC2:
	goto l__1201;
l__0EC5:
	emu_bx = emu_si;
	emu_cl = 0x4;
	emu_shlw(&emu_bx, emu_cl);
	emu_ax = 0x33E0;
	emu_es = emu_ax;
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x2);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ax;
	emu_bx = emu_si;
	emu_cl = 0x4;
	emu_shlw(&emu_bx, emu_cl);
	emu_ax = 0x33E0;
	emu_es = emu_ax;
	emu_di = emu_get_memory16(emu_es, emu_bx, 0x8);
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp, -0x2) != 0x0) goto l__0F14;
	emu_ax = emu_di;
	emu_dx = 0x13;
	emu_imuluw(&emu_ax, emu_dx);
	emu_dx = 0x2E9C;
	emu_bx = emu_ax;
	emu_es = emu_dx;
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x2));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_ax = 0x9;
	emu_push(emu_ax);
	emu_push(emu_cs);
	/* Unresolved call */ emu_push(0x0F0F); emu_ip = 0x1B8D; emu_last_cs = 0x1FB5; emu_last_ip = 0x0F0C; emu_last_length = 0x004A; emu_last_crc = 0xEB70; emu_call();
	/* Unresolved jump */ emu_ip = 0x0F0F; emu_last_cs = 0x1FB5; emu_last_ip = 0x0F0F; emu_last_length = 0x004A; emu_last_crc = 0xEB70; emu_call();
l__0F14:
	emu_incb(&emu_get_memory8(emu_ds, 0x00, 0x986C));
	emu_get_memory16(emu_ss, emu_bp, -0x4) = 0x0;
	emu_get_memory16(emu_ss, emu_bp, -0x6) = 0x0;
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_cs); emu_push(0x0F2D); emu_cs = 0x2649; f__2649_0BAE_001D_25B1();
	goto l__0F2D;
l__0F2D:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax != 0) { /* Unresolved jump */ emu_ip = 0x0F36; emu_last_cs = 0x1FB5; emu_last_ip = 0x0F31; emu_last_length = 0x0009; emu_last_crc = 0x7717; emu_call(); return; }
	goto l__10D0;
l__10D0:
	goto l__11E9;
l__10D3:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp,  0xE), 0x0);
	if ((int16)emu_get_memory16(emu_ss, emu_bp,  0xE) > (int16)0x0) { /* Unresolved jump */ emu_ip = 0x10E7; emu_last_cs = 0x1FB5; emu_last_ip = 0x10D7; emu_last_length = 0x0014; emu_last_crc = 0x9CDB; emu_call(); return; }
	if ((int16)emu_get_memory16(emu_ss, emu_bp,  0xE) < (int16)0x0) { /* Unresolved jump */ emu_ip = 0x10E2; emu_last_cs = 0x1FB5; emu_last_ip = 0x10D9; emu_last_length = 0x0014; emu_last_crc = 0x9CDB; emu_call(); return; }
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp,  0xC), 0x7D00);
	if (emu_get_memory16(emu_ss, emu_bp,  0xC) >= 0x7D00) { /* Unresolved jump */ emu_ip = 0x10E7; emu_last_cs = 0x1FB5; emu_last_ip = 0x10E0; emu_last_length = 0x0014; emu_last_crc = 0x9CDB; emu_call(); return; }
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0xC);
	goto l__10EA;
l__10EA:
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_cs);
	emu_push(0x10F8); f__1FB5_00F3_001B_7009();
	goto l__10F8;
l__10F8:
	emu_addw(&emu_sp, 0x8);
	emu_get_memory16(emu_ss, emu_bp, -0x8) = 0x0;
	emu_get_memory16(emu_ss, emu_bp, -0xA) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x8);
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0xA);
	emu_subw(&emu_get_memory16(emu_ss, emu_bp,  0xC), emu_dx);
	emu_sbbw(&emu_get_memory16(emu_ss, emu_bp,  0xE), emu_ax);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x8);
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0xA);
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_dx);
	emu_adcw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax);
	emu_bx = emu_si;
	emu_cl = 0x4;
	emu_shlw(&emu_bx, emu_cl);
	emu_ax = 0x33E0;
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x8);
	emu_cx = emu_get_memory16(emu_ss, emu_bp, -0xA);
	emu_es = emu_ax;
	emu_addw(&emu_get_memory16(emu_es, emu_bx, 0x4), emu_cx);
	emu_adcw(&emu_get_memory16(emu_es, emu_bx, 0x6), emu_dx);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0xA);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x8));
	if (emu_ax != 0) goto l__1141;
	goto l__11F4;
l__1141:
	emu_cmpw(&emu_di, 0xFFFF);
	if (emu_di == 0xFFFF) goto l__11C4;
	emu_ax = emu_di;
	emu_dx = 0x13;
	emu_imuluw(&emu_ax, emu_dx);
	emu_dx = 0x2E9C;
	emu_bx = emu_ax;
	emu_es = emu_dx;
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x6);
	emu_dx = emu_get_memory16(emu_es, emu_bx, 0x4);
	emu_bx = emu_si;
	emu_cl = 0x4;
	emu_shlw(&emu_bx, emu_cl);
	emu_cx = 0x33E0;
	emu_es = emu_cx;
	emu_cmpw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x6));
	if (emu_ax < emu_get_memory16(emu_es, emu_bx, 0x6)) { /* Unresolved jump */ emu_ip = 0x1193; emu_last_cs = 0x1FB5; emu_last_ip = 0x116E; emu_last_length = 0x0052; emu_last_crc = 0xA97B; emu_call(); return; }
	if (emu_ax > emu_get_memory16(emu_es, emu_bx, 0x6)) { /* Unresolved jump */ emu_ip = 0x1179; emu_last_cs = 0x1FB5; emu_last_ip = 0x1170; emu_last_length = 0x0052; emu_last_crc = 0xA97B; emu_call(); return; }
	emu_cmpw(&emu_dx, emu_get_memory16(emu_es, emu_bx, 0x4));
	if (emu_dx <= emu_get_memory16(emu_es, emu_bx, 0x4)) { /* Unresolved jump */ emu_ip = 0x1193; emu_last_cs = 0x1FB5; emu_last_ip = 0x1177; emu_last_length = 0x0052; emu_last_crc = 0xA97B; emu_call(); return; }
	emu_ax = emu_di;
	emu_dx = 0x13;
	emu_imuluw(&emu_ax, emu_dx);
	emu_dx = 0x2E9C;
	emu_bx = emu_ax;
	emu_es = emu_dx;
	emu_dx = emu_get_memory16(emu_es, emu_bx, 0x6);
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x4);
	/* Unresolved jump */ emu_ip = 0x11A8; emu_last_cs = 0x1FB5; emu_last_ip = 0x1191; emu_last_length = 0x0052; emu_last_crc = 0xA97B; emu_call();
l__11C4:
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0xA);
	emu_dx = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_addw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_adcw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_get_memory16(emu_ss, emu_bp,  0xA) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp,  0x8) = emu_dx;
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_cs); emu_push(0x11E1); emu_cs = 0x2B0E; emu_Tools_GetSmallestIP();
	goto l__11E1;
l__11E1:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp,  0xA) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp,  0x8) = emu_ax;
	goto l__11E9;
l__11E9:
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0xC);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0xE));
	if (emu_ax == 0) goto l__11F4;
	goto l__10D3;
l__11F4:
	emu_decb(&emu_get_memory8(emu_ds, 0x00, 0x986C));
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x6);
	goto l__0EC2;
l__1201:
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
 * Decompiled function f__1FB5_1207_001B_2A6C()
 *
 * @name f__1FB5_1207_001B_2A6C
 * @implements 1FB5:1207:001B:2A6C ()
 * @implements 1FB5:1222:000E:20EF
 * @implements 1FB5:122D:0003:9CAF
 * @implements 1FB5:1230:0033:9F26
 * @implements 1FB5:1369:0009:2D93
 * @implements 1FB5:1372:001A:D848
 * @implements 1FB5:138C:0031:4F89
 * @implements 1FB5:13BD:002B:8E17
 * @implements 1FB5:13E8:0009:9858
 * @implements 1FB5:13F1:0016:4053
 * @implements 1FB5:1407:003D:48A4
 * @implements 1FB5:143C:0008:094A
 * @implements 1FB5:1444:0073:F80A
 * @implements 1FB5:1463:0054:A029
 * @implements 1FB5:14B7:003F:AD3D
 * @implements 1FB5:14F6:0010:F2FF
 * @implements 1FB5:1506:0068:A561
 * @implements 1FB5:1552:001C:9858
 * @implements 1FB5:156E:0006:F7CE
 *
 * Called From: 0FCB:00DD:0017:6A41
 * Called From: 0FCB:010A:0018:1322
 * Called From: 1FB5:0567:00AD:8BDB
 * Called From: 1FB5:0567:0050:77B6
 * Called From: 253D:0185:000E:37D8
 * Called From: B4B1:0065:0022:DD12
 * Called From: B4B1:0163:002A:F6C5
 * Called From: B4B1:0186:0016:189C
 * Called From: B4B1:01B7:0028:14CC
 * Called From: B4B1:0309:0045:223B
 * Called From: B4B1:032C:0016:189C
 * Called From: B4B1:035D:0028:14CC
 * Called From: B4B1:03C1:0013:A9F2
 * Called From: B4B1:0404:0013:A9F2
 * Called From: B4B1:0435:000F:82CF
 * Called From: B4B1:0435:0012:20E5
 * Called From: B4B1:047E:0013:70AD
 * Called From: B4B1:04C8:0013:AFF2
 * Called From: B4E0:06A0:0014:6B8A
 * Called From: B503:11E4:0015:4655
 * Called From: B503:11FC:0018:61C0
 * Called From: B52A:008B:0015:C75F
 * Called From: B52A:0344:001E:1AA7
 * Called From: B52A:0375:0017:D157
 * Called From: B52A:0421:001F:C579
 * Called From: B52A:086C:0021:2409
 * Called From: B52A:0A05:000F:8063
 */
void f__1FB5_1207_001B_2A6C()
{
l__1207:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x4);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_di = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_ax = 0x7;
	emu_push(emu_ax);
	emu_push(emu_di);
	emu_push(emu_cs);
	emu_push(0x1222); f__1FB5_1A6C_0020_9634();
	goto l__1222;
l__1222:
	emu_addw(&emu_sp, 0x8);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax != 0) goto l__1230;
	emu_xorw(&emu_dx, emu_dx);
	emu_xorw(&emu_ax, emu_ax);
	goto l__122D;
l__122D:
	goto l__156E;
l__1230:
	emu_incb(&emu_get_memory8(emu_ds, 0x00, 0x986C));
	emu_bx = emu_di;
	emu_cl = 0x4;
	emu_shlw(&emu_bx, emu_cl);
	emu_ax = 0x33E0;
	emu_es = emu_ax;
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x8);
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_bx = emu_di;
	emu_cl = 0x4;
	emu_shlw(&emu_bx, emu_cl);
	emu_ax = 0x33E0;
	emu_es = emu_ax;
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x2);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ax;
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp, -0x2) == 0x0) { /* Unresolved jump */ emu_ip = 0x1263; emu_last_cs = 0x1FB5; emu_last_ip = 0x125E; emu_last_length = 0x0033; emu_last_crc = 0x9F26; emu_call(); return; }
	goto l__1369;
l__1369:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0xFFFF);
	if (emu_get_memory16(emu_ss, emu_bp, -0x4) != 0xFFFF) goto l__1372;
	goto l__14F6;
l__1372:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_dx = 0x13;
	emu_imuluw(&emu_ax, emu_dx);
	emu_dx = 0x2E9C;
	emu_bx = emu_ax;
	emu_es = emu_dx;
	emu_testb(&emu_get_memory8(emu_es, emu_bx, 0x12), 0x10);
	if ((emu_get_memory8(emu_es, emu_bx, 0x12) & 0x10) != 0) goto l__138C;
	goto l__14F6;
l__138C:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp,  0xC), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp,  0xC) != 0x0) goto l__13E8;
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_dx = 0x13;
	emu_imuluw(&emu_ax, emu_dx);
	emu_dx = 0x2E9C;
	emu_bx = emu_get_memory16(emu_ss, emu_bp,  0xA);
	emu_cx = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_si = emu_ax;
	emu_es = emu_dx;
	emu_addw(&emu_cx, emu_get_memory16(emu_es, emu_si, 0xC));
	emu_adcw(&emu_bx, emu_get_memory16(emu_es, emu_si, 0xE));
	emu_push(emu_bx);
	emu_push(emu_cx);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_cs);
	emu_push(0x13BD); f__1FB5_0091_001B_4066();
	goto l__13BD;
l__13BD:
	emu_addw(&emu_sp, 0x8);
	emu_bx = emu_di;
	emu_cl = 0x4;
	emu_shlw(&emu_bx, emu_cl);
	emu_ax = 0x33E0;
	emu_dx = emu_get_memory16(emu_ss, emu_bp,  0xA);
	emu_cx = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_es = emu_ax;
	emu_get_memory16(emu_es, emu_bx, 0x6) = emu_dx;
	emu_get_memory16(emu_es, emu_bx, 0x4) = emu_cx;
	emu_decb(&emu_get_memory8(emu_ds, 0x00, 0x986C));
	emu_dx = emu_get_memory16(emu_ss, emu_bp,  0xA);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x8);
	goto l__122D;
l__13E8:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp,  0xC), 0x2);
	if (emu_get_memory16(emu_ss, emu_bp,  0xC) == 0x2) goto l__13F1;
	goto l__14F6;
l__13F1:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp,  0xA), 0x0);
	if ((int16)emu_get_memory16(emu_ss, emu_bp,  0xA) < (int16)0x0) goto l__1407;
	if ((int16)emu_get_memory16(emu_ss, emu_bp,  0xA) > (int16)0x0) { /* Unresolved jump */ emu_ip = 0x13FF; emu_last_cs = 0x1FB5; emu_last_ip = 0x13F7; emu_last_length = 0x0016; emu_last_crc = 0x4053; emu_call(); return; }
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp,  0x8), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp,  0x8) <= 0x0) goto l__1407;
	emu_dx = emu_get_memory16(emu_ss, emu_bp,  0xA);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x8);
	/* Unresolved jump */ emu_ip = 0x140B; emu_last_cs = 0x1FB5; emu_last_ip = 0x1405; emu_last_length = 0x0016; emu_last_crc = 0x4053; emu_call();
l__1407:
	emu_xorw(&emu_dx, emu_dx);
	emu_xorw(&emu_ax, emu_ax);
	emu_get_memory16(emu_ss, emu_bp,  0xA) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp,  0x8) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_dx = 0x13;
	emu_imuluw(&emu_ax, emu_dx);
	emu_dx = 0x2E9C;
	emu_bx = emu_ax;
	emu_es = emu_dx;
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x6);
	emu_dx = emu_get_memory16(emu_es, emu_bx, 0x4);
	emu_addw(&emu_dx, 0xFFFF);
	emu_adcw(&emu_ax, 0xFFFF);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0xA));
	if ((int16)emu_ax < (int16)emu_get_memory16(emu_ss, emu_bp,  0xA)) goto l__1444;
	if ((int16)emu_ax <= (int16)emu_get_memory16(emu_ss, emu_bp,  0xA)) {
		emu_cmpw(&emu_dx, emu_get_memory16(emu_ss, emu_bp,  0x8));
		if (emu_dx <= emu_get_memory16(emu_ss, emu_bp,  0x8)) goto l__1444;
	}
	goto l__143C;
l__143C:
	emu_dx = emu_get_memory16(emu_ss, emu_bp,  0xA);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x8);
	goto l__1463;
l__1444:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_dx = 0x13;
	emu_imuluw(&emu_ax, emu_dx);
	emu_dx = 0x2E9C;
	emu_bx = emu_ax;
	emu_es = emu_dx;
	emu_dx = emu_get_memory16(emu_es, emu_bx, 0x6);
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x4);
	emu_addw(&emu_ax, 0xFFFF);
	emu_adcw(&emu_dx, 0xFFFF);
	goto l__1463;
l__1463:
	emu_get_memory16(emu_ss, emu_bp,  0xA) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp,  0x8) = emu_ax;
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_dx = 0x13;
	emu_imuluw(&emu_ax, emu_dx);
	emu_dx = 0x2E9C;
	emu_bx = emu_ax;
	emu_es = emu_dx;
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0xE);
	emu_dx = emu_get_memory16(emu_es, emu_bx, 0xC);
	emu_push(emu_ax);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_bx = 0x13;
	emu_push(emu_dx);
	emu_imuluw(&emu_ax, emu_bx);
	emu_dx = 0x2E9C;
	emu_bx = emu_ax;
	emu_es = emu_dx;
	emu_pop(&emu_ax);
	emu_addw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x4));
	emu_pop(&emu_dx);
	emu_adcw(&emu_dx, emu_get_memory16(emu_es, emu_bx, 0x6));
	emu_addw(&emu_ax, 0xFFFF);
	emu_adcw(&emu_dx, 0xFFFF);
	emu_subw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_sbbw(&emu_dx, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_cs);
	emu_push(0x14B7); f__1FB5_0091_001B_4066();
	goto l__14B7;
l__14B7:
	emu_addw(&emu_sp, 0x8);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_dx = 0x13;
	emu_imuluw(&emu_ax, emu_dx);
	emu_dx = 0x2E9C;
	emu_bx = emu_ax;
	emu_es = emu_dx;
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x6);
	emu_dx = emu_get_memory16(emu_es, emu_bx, 0x4);
	emu_addw(&emu_dx, 0xFFFF);
	emu_adcw(&emu_ax, 0xFFFF);
	emu_subw(&emu_dx, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_sbbw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_bx = emu_di;
	emu_cl = 0x4;
	emu_shlw(&emu_bx, emu_cl);
	emu_cx = 0x33E0;
	emu_es = emu_cx;
	emu_get_memory16(emu_es, emu_bx, 0x6) = emu_ax;
	emu_get_memory16(emu_es, emu_bx, 0x4) = emu_dx;
	goto l__1552;
l__14F6:
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_cs);
	emu_push(0x1506); f__1FB5_0091_001B_4066();
	goto l__1506;
l__1506:
	emu_addw(&emu_sp, 0x8);
	emu_bx = emu_di;
	emu_cl = 0x4;
	emu_shlw(&emu_bx, emu_cl);
	emu_cx = 0x33E0;
	emu_es = emu_cx;
	emu_get_memory16(emu_es, emu_bx, 0x6) = emu_dx;
	emu_get_memory16(emu_es, emu_bx, 0x4) = emu_ax;
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0xFFFF);
	if (emu_get_memory16(emu_ss, emu_bp, -0x4) != 0xFFFF) {
		emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x4);
		emu_dx = 0x13;
		emu_imuluw(&emu_ax, emu_dx);
		emu_dx = 0x2E9C;
		emu_bx = emu_ax;
		emu_es = emu_dx;
		emu_ax = emu_get_memory16(emu_es, emu_bx, 0xE);
		emu_dx = emu_get_memory16(emu_es, emu_bx, 0xC);
		emu_bx = emu_di;
		emu_cl = 0x4;
		emu_shlw(&emu_bx, emu_cl);
		emu_cx = 0x33E0;
		emu_es = emu_cx;
		emu_subw(&emu_get_memory16(emu_es, emu_bx, 0x4), emu_dx);
		emu_sbbw(&emu_get_memory16(emu_es, emu_bx, 0x6), emu_ax);
	}
	goto l__1552;
l__1552:
	emu_decb(&emu_get_memory8(emu_ds, 0x00, 0x986C));
	emu_bx = emu_di;
	emu_cl = 0x4;
	emu_shlw(&emu_bx, emu_cl);
	emu_ax = 0x33E0;
	emu_es = emu_ax;
	emu_dx = emu_get_memory16(emu_es, emu_bx, 0x6);
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x4);
	goto l__122D;
l__156E:
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
 * Decompiled function f__1FB5_1574_000F_E31E()
 *
 * @name f__1FB5_1574_000F_E31E
 * @implements 1FB5:1574:000F:E31E ()
 * @implements 1FB5:1581:0002:D83A
 * @implements 1FB5:1583:0002:CC3A
 * @implements 1FB5:1585:000F:88D9
 * @implements 1FB5:159D:000B:A3F4
 * @implements 1FB5:15A8:000B:985F
 * @implements 1FB5:15B3:0002:2597
 *
 * Called From: 1FB5:0712:0012:6404
 */
void f__1FB5_1574_000F_E31E()
{
l__1574:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_ax != 0) goto l__1583;
	emu_xorw(&emu_ax, emu_ax);
	goto l__1581;
l__1581:
	goto l__15B3;
l__1583:
	goto l__159D;
l__1585:
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x1594); f__1FB5_1B21_0027_F474();
	/* Unresolved jump */ emu_ip = 0x1594; emu_last_cs = 0x1FB5; emu_last_ip = 0x1594; emu_last_length = 0x000F; emu_last_crc = 0x88D9; emu_call();
l__159D:
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x15A8); f__1FB5_15B5_0015_6A00();
	goto l__15A8;
l__15A8:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax == 0) goto l__1585;
	emu_ax = 0x1;
	goto l__1581;
l__15B3:
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__1FB5_15B5_0015_6A00()
 *
 * @name f__1FB5_15B5_0015_6A00
 * @implements 1FB5:15B5:0015:6A00 ()
 * @implements 1FB5:15C5:0005:5C35
 * @implements 1FB5:15C7:0003:5DA1
 * @implements 1FB5:15CA:0018:805C
 * @implements 1FB5:15E2:000F:2C44
 * @implements 1FB5:15F1:0005:4ACB
 * @implements 1FB5:15F6:0003:AF3A
 * @implements 1FB5:15F9:000B:61DA
 * @implements 1FB5:1604:0058:3B72
 * @implements 1FB5:165C:0005:7074
 * @implements 1FB5:1661:000B:8E2C
 * @implements 1FB5:16CF:0006:F7CE
 *
 * Called From: 15C2:0112:0022:2546
 * Called From: 15C2:0112:0024:0D45
 * Called From: 176C:7EAF:000D:017E
 * Called From: 176C:7EFF:000D:017E
 * Called From: 1DB6:00F7:000E:212B
 * Called From: 1FB5:072F:000B:24D7
 * Called From: 1FB5:15A5:000B:A3F4
 * Called From: 1FB5:1659:0058:3B72
 * Called From: 256D:001B:001C:9F23
 * Called From: 261F:0083:000D:15ED
 * Called From: B4B5:0054:000D:0FE8
 * Called From: B4B8:1188:000B:03A1
 * Called From: B4B8:1B8B:000F:A141
 * Called From: B4B8:1B9A:000F:DC51
 * Called From: B4B8:1BD2:0018:10AD
 * Called From: B4B8:1E14:000C:86D4
 * Called From: B4F2:0008:000D:C9F0
 * Called From: B4F2:11A0:000D:4FB1
 * Called From: B4F2:12A0:000D:4FB1
 * Called From: B511:0472:000F:1E3D
 * Called From: B518:0572:000F:25FE
 * Called From: B518:05A0:0011:90D1
 * Called From: B518:0AC1:000D:0B16
 */
void f__1FB5_15B5_0015_6A00()
{
l__15B5:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x4);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_ax != 0) goto l__15CA;
	goto l__15C5;
l__15C5:
	emu_xorw(&emu_ax, emu_ax);
	goto l__15C7;
l__15C7:
	goto l__16CF;
l__15CA:
	emu_get_memory16(emu_ds, 0x00, 0x986A) = 0xFFFF;
	emu_ax = 0x100;
	emu_push(emu_ax);
	emu_ax = 0x8001;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x15E2); f__1FB5_0121_001B_0DC1();
	goto l__15E2;
l__15E2:
	emu_addw(&emu_sp, 0x8);
	emu_di = emu_ax;
	emu_cmpw(&emu_di, 0xFFFF);
	if (emu_di == 0xFFFF) goto l__15F9;
	emu_push(emu_di);
	emu_push(emu_cs);
	emu_push(0x15F1); f__1FB5_0047_0012_2389();
	goto l__15F1;
l__15F1:
	emu_pop(&emu_cx);
	emu_push(emu_cs);
	emu_push(0x15F6); f__1FB5_0005_000F_62CC();
	goto l__15F6;
l__15F6:
	emu_incw(&emu_ax);
	goto l__15C7;
l__15F9:
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x1604); f__1FB5_1ABA_0031_8318();
	goto l__1604;
l__1604:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_si = emu_ax;
	emu_cmpw(&emu_si, 0xFFFF);
	if (emu_si == 0xFFFF) goto l__1661;
	emu_ax = emu_si;
	emu_dx = 0x13;
	emu_imuluw(&emu_ax, emu_dx);
	emu_dx = 0x2E9C;
	emu_bx = emu_ax;
	emu_es = emu_dx;
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x10);
	emu_ax = (int8)emu_al;
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ax;
	emu_cmpw(&emu_si, 0xFFFF);
	if (emu_si == 0xFFFF) goto l__1661;
	emu_ax = emu_si;
	emu_dx = 0x13;
	emu_imuluw(&emu_ax, emu_dx);
	emu_dx = 0x2E9C;
	emu_bx = emu_ax;
	emu_es = emu_dx;
	emu_testb(&emu_get_memory8(emu_es, emu_bx, 0x12), 0x10);
	if ((emu_get_memory8(emu_es, emu_bx, 0x12) & 0x10) == 0) goto l__1661;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x2);
	emu_dx = 0x13;
	emu_imuluw(&emu_ax, emu_dx);
	emu_dx = 0x2E9C;
	emu_bx = emu_ax;
	emu_es = emu_dx;
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x2));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_push(emu_cs);
	emu_push(0x165C); f__1FB5_15B5_0015_6A00();
	goto l__165C;
l__165C:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	goto l__15C7;
l__1661:
	emu_al = emu_get_memory8(emu_ds, 0x00, 0x661C);
	emu_ax = (int8)emu_al;
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax != 0) { /* Unresolved jump */ emu_ip = 0x166C; emu_last_cs = 0x1FB5; emu_last_ip = 0x1667; emu_last_length = 0x000B; emu_last_crc = 0x8E2C; emu_call(); return; }
	goto l__15C5;
l__16CF:
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
 * Decompiled function f__1FB5_16D5_006A_679B()
 *
 * @name f__1FB5_16D5_006A_679B
 * @implements 1FB5:16D5:006A:679B ()
 * @implements 1FB5:1757:0003:2E57
 *
 * Called From: 1FB5:04BA:000C:AC45
 * Called From: 253D:00A6:000B:9A42
 */
void f__1FB5_16D5_006A_679B()
{
l__16D5:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_si);
	emu_si = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_bx = emu_si;
	emu_cl = 0x4;
	emu_shlw(&emu_bx, emu_cl);
	emu_ax = 0x33E0;
	emu_es = emu_ax;
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x8), 0xFFFF);
	if (emu_get_memory16(emu_es, emu_bx, 0x8) == 0xFFFF) { /* Unresolved jump */ emu_ip = 0x173F; emu_last_cs = 0x1FB5; emu_last_ip = 0x16ED; emu_last_length = 0x006A; emu_last_crc = 0x679B; emu_call(); return; }
	emu_bx = emu_si;
	emu_cl = 0x4;
	emu_shlw(&emu_bx, emu_cl);
	emu_ax = 0x33E0;
	emu_es = emu_ax;
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x8);
	emu_dx = 0x13;
	emu_imuluw(&emu_ax, emu_dx);
	emu_dx = 0x2E9C;
	emu_bx = emu_ax;
	emu_es = emu_dx;
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x4);
	emu_orw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x6));
	if (emu_ax == 0) { /* Unresolved jump */ emu_ip = 0x173F; emu_last_cs = 0x1FB5; emu_last_ip = 0x1715; emu_last_length = 0x006A; emu_last_crc = 0x679B; emu_call(); return; }
	emu_bx = emu_si;
	emu_cl = 0x4;
	emu_shlw(&emu_bx, emu_cl);
	emu_ax = 0x33E0;
	emu_es = emu_ax;
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x8);
	emu_dx = 0x13;
	emu_imuluw(&emu_ax, emu_dx);
	emu_dx = 0x2E9C;
	emu_bx = emu_ax;
	emu_es = emu_dx;
	emu_dx = emu_get_memory16(emu_es, emu_bx, 0x6);
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x4);
	goto l__1757;
l__1757:
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__1FB5_175A_000F_6F28()
 *
 * @name f__1FB5_175A_000F_6F28
 * @implements 1FB5:175A:000F:6F28 ()
 * @implements 1FB5:1769:004D:7A7B
 * @implements 1FB5:17B8:0002:CD3A
 * @implements 1FB5:17BA:0016:42A5
 * @implements 1FB5:17D0:0004:1AF2
 * @implements 1FB5:17D4:0003:2E57
 *
 * Called From: B53B:017B:000C:CE7E
 */
void f__1FB5_175A_000F_6F28()
{
l__175A:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_si);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x1769); f__1FB5_1ABA_0031_8318();
	goto l__1769;
l__1769:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_si = emu_ax;
	emu_cmpw(&emu_si, 0xFFFF);
	if (emu_si == 0xFFFF) goto l__17D0;
	emu_ax = emu_si;
	emu_dx = 0x13;
	emu_imuluw(&emu_ax, emu_dx);
	emu_dx = 0x2E9C;
	emu_bx = emu_ax;
	emu_es = emu_dx;
	emu_testb(&emu_get_memory8(emu_es, emu_bx, 0x12), 0x10);
	if ((emu_get_memory8(emu_es, emu_bx, 0x12) & 0x10) == 0) goto l__17BA;
	emu_ax = emu_si;
	emu_dx = 0x13;
	emu_imuluw(&emu_ax, emu_dx);
	emu_dx = 0x2E9C;
	emu_bx = emu_ax;
	emu_es = emu_dx;
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x10);
	emu_ax = (int8)emu_al;
	emu_dx = 0x13;
	emu_imuluw(&emu_ax, emu_dx);
	emu_dx = 0x2E9C;
	emu_bx = emu_ax;
	emu_es = emu_dx;
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x2));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_push(emu_cs);
	emu_push(0x17B6); f__1FB5_175A_000F_6F28();
	/* Unresolved jump */ emu_ip = 0x17B6; emu_last_cs = 0x1FB5; emu_last_ip = 0x17B6; emu_last_length = 0x004D; emu_last_crc = 0x7A7B; emu_call();
l__17B8:
	goto l__17D4;
l__17BA:
	emu_ax = emu_si;
	emu_dx = 0x13;
	emu_imuluw(&emu_ax, emu_dx);
	emu_dx = 0x2E9C;
	emu_bx = emu_ax;
	emu_es = emu_dx;
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x10);
	emu_ax = (int8)emu_al;
	goto l__17B8;
l__17D0:
	emu_ax = emu_si;
	goto l__17B8;
l__17D4:
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__1FB5_17D7_0018_F3C7()
 *
 * @name f__1FB5_17D7_0018_F3C7
 * @implements 1FB5:17D7:0018:F3C7 ()
 * @implements 1FB5:17EF:0004:893F
 *
 * Called From: B4B8:16F0:0022:3C6A
 */
void f__1FB5_17D7_0018_F3C7()
{
l__17D7:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x2);
	emu_al = emu_get_memory8(emu_ds, 0x00, 0x661C);
	emu_ax = (int8)emu_al;
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ax;
	emu_al = emu_get_memory8(emu_ss, emu_bp,  0x6);
	emu_get_memory8(emu_ds, 0x00, 0x661C) = emu_al;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x2);
	goto l__17EF;
l__17EF:
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__1FB5_17FE_0011_2DA9()
 *
 * @name f__1FB5_17FE_0011_2DA9
 * @implements 1FB5:17FE:0011:2DA9 ()
 * @implements 1FB5:180C:0003:5D02
 * @implements 1FB5:180F:000F:774A
 * @implements 1FB5:181E:0040:701B
 * @implements 1FB5:187C:000A:608D
 * @implements 1FB5:1886:0012:EC57
 * @implements 1FB5:1898:0003:2E57
 *
 * Called From: B518:0AD1:0010:9A25
 */
void f__1FB5_17FE_0011_2DA9()
{
l__17FE:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_si);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_ax != 0) goto l__180F;
	emu_xorw(&emu_ax, emu_ax);
	goto l__180C;
l__180C:
	goto l__1898;
l__180F:
	emu_incb(&emu_get_memory8(emu_ds, 0x00, 0x986C));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x181E); f__1FB5_1ABA_0031_8318();
	goto l__181E;
l__181E:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_si = emu_ax;
	emu_cmpw(&emu_si, 0xFFFF);
	if (emu_si == 0xFFFF) goto l__187C;
	emu_ax = emu_si;
	emu_dx = 0x13;
	emu_imuluw(&emu_ax, emu_dx);
	emu_dx = 0x2E9C;
	emu_bx = emu_ax;
	emu_es = emu_dx;
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x8);
	emu_orw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0xA));
	if (emu_ax == 0) goto l__187C;
	emu_ax = emu_si;
	emu_dx = 0x13;
	emu_imuluw(&emu_ax, emu_dx);
	emu_dx = 0x2E9C;
	emu_bx = emu_ax;
	emu_es = emu_dx;
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x8));
	emu_push(emu_cs); emu_push(0x185E); emu_cs = 0x23E1; f__23E1_01C2_0011_24E8();
	/* Unresolved jump */ emu_ip = 0x185E; emu_last_cs = 0x1FB5; emu_last_ip = 0x185E; emu_last_length = 0x0040; emu_last_crc = 0x701B; emu_call();
l__187C:
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x1886); f__1FB5_006A_0015_A08C();
	goto l__1886;
l__1886:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_negw(&emu_ax, emu_ax);
	emu_sbbw(&emu_ax, emu_ax);
	emu_incw(&emu_ax);
	emu_si = emu_ax;
	emu_decb(&emu_get_memory8(emu_ds, 0x00, 0x986C));
	emu_ax = emu_si;
	goto l__180C;
l__1898:
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__1FB5_18D3_000E_76AC()
 *
 * @name f__1FB5_18D3_000E_76AC
 * @implements 1FB5:18D3:000E:76AC ()
 * @implements 1FB5:18E1:0022:A85B
 * @implements 1FB5:18F4:000F:8BA9
 * @implements 1FB5:1903:000D:31E1
 * @implements 1FB5:1910:0013:8016
 * @implements 1FB5:198F:001F:F4B2
 * @implements 1FB5:1993:001B:129C
 * @implements 1FB5:19AE:0006:F7CE
 *
 * Called From: 1DB6:01B5:0005:7870
 */
void f__1FB5_18D3_000E_76AC()
{
l__18D3:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x6);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_xorw(&emu_di, emu_di);
	emu_xorw(&emu_si, emu_si);
	goto l__18F4;
l__18E1:
	emu_bx = emu_si;
	emu_cl = 0x4;
	emu_shlw(&emu_bx, emu_cl);
	emu_ax = 0x33E0;
	emu_es = emu_ax;
	emu_get_memory16(emu_es, emu_bx, 0x0) = 0x1;
	emu_incw(&emu_si);
	goto l__18F4;
l__18F4:
	emu_cmpw(&emu_si, 0x14);
	if ((int16)emu_si < (int16)0x14) goto l__18E1;
	emu_cmpb(&emu_get_memory8(emu_ds, 0x00, 0x98E6), 0x0);
	if (emu_get_memory8(emu_ds, 0x00, 0x98E6) != 0x0) goto l__1903;
	goto l__19AE;
l__1903:
	emu_get_memory16(emu_ss, emu_bp, -0x2) = 0x2E9C;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = 0x0;
	goto l__1993;
l__1910:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_testb(&emu_get_memory8(emu_es, emu_bx, 0x12), 0x2);
	if ((emu_get_memory8(emu_es, emu_bx, 0x12) & 0x2) == 0) goto l__198F;
	emu_ax = 0x1;
	emu_push(emu_ax);
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x1923); emu_cs = 0x2649; emu_ip = 0x02B9; emu_last_cs = 0x1FB5; emu_last_ip = 0x191E; emu_last_length = 0x0013; emu_last_crc = 0x8016; emu_call();
	/* Unresolved jump */ emu_ip = 0x1923; emu_last_cs = 0x1FB5; emu_last_ip = 0x1923; emu_last_length = 0x0013; emu_last_crc = 0x8016; emu_call();
l__198F:
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x13);
	goto l__1993;
l__1993:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x0);
	emu_orw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x2));
	if (emu_ax == 0) goto l__19AE;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x0), 0x0);
	if (emu_get_memory8(emu_es, emu_bx, 0x0) == 0x0) goto l__19AE;
	goto l__1910;
l__19AE:
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
 * Decompiled function f__1FB5_1A67_0005_8AB7()
 *
 * @name f__1FB5_1A67_0005_8AB7
 * @implements 1FB5:1A67:0005:8AB7 ()
 *
 * Called From: B500:0033:000C:D965
 */
void f__1FB5_1A67_0005_8AB7()
{
l__1A67:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__1FB5_1A6C_0020_9634()
 *
 * @name f__1FB5_1A6C_0020_9634
 * @implements 1FB5:1A6C:0020:9634 ()
 * @implements 1FB5:1A8F:001F:8D60
 * @implements 1FB5:1AB1:0005:D5FA
 * @implements 1FB5:1AB6:0004:DE52
 *
 * Called From: 1FB5:09DC:0018:922D
 * Called From: 1FB5:0B04:001B:A5E4
 * Called From: 1FB5:0EB4:001B:37D1
 * Called From: 1FB5:121F:001B:2A6C
 */
void f__1FB5_1A6C_0020_9634()
{
l__1A6C:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_si);
	emu_push(emu_di);
	emu_si = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_di = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_orw(&emu_si, emu_si);
	if ((emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x1A80; emu_last_cs = 0x1FB5; emu_last_ip = 0x1A79; emu_last_length = 0x0020; emu_last_crc = 0x9634; emu_call(); return; }
	emu_cmpw(&emu_si, 0x14);
	if ((int16)emu_si < (int16)0x14) goto l__1A8F;
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_di);
	emu_push(emu_cs);
	/* Unresolved call */ emu_push(0x1A8C); emu_ip = 0x1B8D; emu_last_cs = 0x1FB5; emu_last_ip = 0x1A89; emu_last_length = 0x0020; emu_last_crc = 0x9634; emu_call();
	/* Unresolved jump */ emu_ip = 0x1A8C; emu_last_cs = 0x1FB5; emu_last_ip = 0x1A8C; emu_last_length = 0x0020; emu_last_crc = 0x9634; emu_call();
l__1A8F:
	emu_bx = emu_si;
	emu_cl = 0x4;
	emu_shlw(&emu_bx, emu_cl);
	emu_ax = 0x33E0;
	emu_es = emu_ax;
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x0), 0x0);
	if (emu_get_memory16(emu_es, emu_bx, 0x0) == 0x0) goto l__1AB1;
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_di);
	emu_push(emu_cs);
	/* Unresolved call */ emu_push(0x1AAE); emu_ip = 0x1B8D; emu_last_cs = 0x1FB5; emu_last_ip = 0x1AAB; emu_last_length = 0x001F; emu_last_crc = 0x8D60; emu_call();
	/* Unresolved jump */ emu_ip = 0x1AAE; emu_last_cs = 0x1FB5; emu_last_ip = 0x1AAE; emu_last_length = 0x001F; emu_last_crc = 0x8D60; emu_call();
l__1AB1:
	emu_ax = 0x1;
	goto l__1AB6;
l__1AB6:
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__1FB5_1ABA_0031_8318()
 *
 * @name f__1FB5_1ABA_0031_8318
 * @implements 1FB5:1ABA:0031:8318 ()
 * @implements 1FB5:1AC3:0028:DFE8
 * @implements 1FB5:1AEB:000D:1FF1
 * @implements 1FB5:1AF8:0011:AD2D
 * @implements 1FB5:1B09:000B:E347
 * @implements 1FB5:1B12:0002:C43A
 * @implements 1FB5:1B14:0003:9EFA
 * @implements 1FB5:1B17:0005:5115
 * @implements 1FB5:1B1C:0005:8BCF
 *
 * Called From: 1FB5:0244:000B:2FEB
 * Called From: 1FB5:034F:001E:6179
 * Called From: 1FB5:1601:000B:61DA
 * Called From: 1FB5:1766:000F:6F28
 * Called From: 1FB5:181B:000F:774A
 */
void f__1FB5_1ABA_0031_8318()
{
l__1ABA:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x4);
	emu_push(emu_si);
	emu_xorw(&emu_si, emu_si);
	goto l__1AC3;
l__1AC3:
	emu_ax = emu_si;
	emu_dx = 0x13;
	emu_imuluw(&emu_ax, emu_dx);
	emu_dx = 0x2E9C;
	emu_bx = emu_ax;
	emu_es = emu_dx;
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x2);
	emu_dx = emu_get_memory16(emu_es, emu_bx, 0x0);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_dx;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_ax != 0) goto l__1AEB;
	goto l__1B17;
l__1AEB:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x0);
	emu_ax = (int8)emu_al;
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax != 0) goto l__1AF8;
	goto l__1B17;
l__1AF8:
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x1B09); emu_cs = 0x01F7; f__01F7_3964_0041_7552();
	goto l__1B09;
l__1B09:
	emu_addw(&emu_sp, 0x8);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax != 0) goto l__1B14;
	emu_ax = emu_si;
	goto l__1B12;
l__1B12:
	goto l__1B1C;
l__1B14:
	emu_incw(&emu_si);
	goto l__1AC3;
l__1B17:
	emu_ax = 0xFFFF;
	goto l__1B12;
l__1B1C:
	emu_pop(&emu_si);
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__1FB5_1B21_0027_F474()
 *
 * @name f__1FB5_1B21_0027_F474
 * @implements 1FB5:1B21:0027:F474 ()
 * @implements 1FB5:1B48:0016:8158
 * @implements 1FB5:1B5E:0017:C743
 * @implements 1FB5:1B75:000F:53C7
 *
 * Called From: 1FB5:0772:000F:C3D1
 * Called From: 1FB5:1591:000F:88D9
 */
void f__1FB5_1B21_0027_F474()
{
l__1B21:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x4);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = 0x0;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = 0x0;
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0xA));
	if (emu_ax == 0) { /* Unresolved jump */ emu_ip = 0x1B6A; emu_last_cs = 0x1FB5; emu_last_ip = 0x1B37; emu_last_length = 0x0027; emu_last_crc = 0xF474; emu_call(); return; }
	emu_ax = 0x5C;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_cs); emu_push(0x1B48); emu_cs = 0x01F7; f__01F7_3A41_0011_CC22();
	goto l__1B48;
l__1B48:
	emu_addw(&emu_sp, 0x6);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_ax == 0) goto l__1B5E;
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x4));
	/* Unresolved jump */ emu_ip = 0x1B6A; emu_last_cs = 0x1FB5; emu_last_ip = 0x1B5C; emu_last_length = 0x0016; emu_last_crc = 0x8158; emu_call();
l__1B5E:
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0xA);
	emu_dx = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_dx;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x1B75); emu_cs = 0x01F7; f__01F7_3CD5_000D_9D98();
	goto l__1B75;
l__1B75:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_ds, 0x00, 0x6C80);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_ds, 0x00, 0x6C82);
	emu_push(0x1B84);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x353B0020: overlay(0x353B, 0); f__B53B_0289_001F_95C1(); break;
		case 0x353B002F: overlay(0x353B, 0); f__B53B_02ED_0019_AA57(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x1FB5; emu_last_ip = 0x1B80; emu_last_length = 0x000F; emu_last_crc = 0x53C7;
			emu_call();
			return;
	}
	/* Unresolved jump */ emu_ip = 0x1B84; emu_last_cs = 0x1FB5; emu_last_ip = 0x1B84; emu_last_length = 0x000F; emu_last_crc = 0x53C7; emu_call();
}

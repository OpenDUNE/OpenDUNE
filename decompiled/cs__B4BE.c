/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function emu_Gameloop_Intro()
 *
 * @name emu_Gameloop_Intro
 * @implements B4BE:0000:000C:E7F4 ()
 * @implements B4BE:000C:000B:DEF2
 * @implements B4BE:0017:0007:DD28
 * @implements B4BE:001E:0005:20AE
 * @implements B4BE:0023:0014:092E
 * @implements B4BE:002E:0009:D5AF
 * @implements B4BE:0037:002A:2066
 * @implements B4BE:0061:0008:3461
 * @implements B4BE:0069:0005:FB00
 * @implements B4BE:006E:0005:0EE9
 * @implements B4BE:0073:0008:8C69
 * @implements B4BE:007B:000C:5C4C
 * @implements B4BE:0087:0004:BEB2
 *
 * Called From: 34BE:0020:0005:0000
 */
void emu_Gameloop_Intro()
{
l__0000:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_ax = 0x7;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x000C); emu_cs = 0x34E9; overlay(0x34E9, 0); f__B4E9_0050_003F_292A();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34BE) { overlay(0x34BE, 1); }
l__000C:
	emu_pop(&emu_cx);
	emu_push(emu_ds);
	emu_ax = 0x23AA;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0017); emu_cs = 0x0FCB; emu_String_Load();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34BE) { overlay(0x34BE, 1); }
l__0017:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_cs);
	emu_push(0x001E); f__B4BE_008B_0012_DDEE();
l__001E:
	emu_push(emu_cs); emu_push(0x0023); emu_cs = 0x29E8; emu_Input_Keyboard_NextKey();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34BE) { overlay(0x34BE, 1); }
l__0023:
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax != 0) {
		emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x37B4), 0x0);
		if (emu_get_memory16(emu_ds, 0x00, 0x37B4) != 0x0) goto l__0073;
	}
l__002E:
	emu_ax = 0x1B;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0037); emu_cs = 0x3483; overlay(0x3483, 0); emu_Sound_Play();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34BE) { overlay(0x34BE, 1); }
l__0037:
	emu_pop(&emu_cx);
	emu_ax = 0x2C6B;
	emu_push(emu_ax);
	emu_ax = 0x0;
	emu_push(emu_ax);
	emu_ax = 0x2C5B;
	emu_push(emu_ax);
	emu_ax = 0x0;
	emu_push(emu_ax);
	emu_ax = 0x4A;
	emu_push(emu_ax);
	emu_ax = 0x2C4D;
	emu_push(emu_ax);
	emu_ax = 0x0;
	emu_push(emu_ax);
	emu_ax = 0x2C41;
	emu_push(emu_ax);
	emu_ax = 0x0;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0061); emu_cs = 0x34ED; overlay(0x34ED, 0); f__B4ED_0000_0079_AC5D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34BE) { overlay(0x34BE, 1); }
l__0061:
	emu_addw(&emu_sp, 0x12);
	emu_push(emu_cs); emu_push(0x0069); emu_cs = 0x34ED; overlay(0x34ED, 0); f__B4ED_0200_000F_1FF4();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34BE) { overlay(0x34BE, 1); }
l__0069:
	emu_push(emu_cs); emu_push(0x006E); emu_cs = 0x1DD7; f__1DD7_0B53_0025_36F7();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34BE) { overlay(0x34BE, 1); }
l__006E:
	emu_push(emu_cs); emu_push(0x0073); emu_cs = 0x34ED; overlay(0x34ED, 0); f__B4ED_0184_0010_CD7E();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34BE) { overlay(0x34BE, 1); }
l__0073:
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x007B); emu_cs = 0x34E9; overlay(0x34E9, 0); f__B4E9_0050_003F_292A();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34BE) { overlay(0x34BE, 1); }
l__007B:
	emu_pop(&emu_cx);
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x0087); emu_cs = 0x0FCB; emu_String_Load();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34BE) { overlay(0x34BE, 1); }
l__0087:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B4BE_008B_0012_DDEE()
 *
 * @name f__B4BE_008B_0012_DDEE
 * @implements B4BE:008B:0012:DDEE ()
 * @implements B4BE:009D:0011:87E1
 * @implements B4BE:00AE:000C:7E74
 * @implements B4BE:00BA:0019:9808
 * @implements B4BE:00D3:002F:D024
 * @implements B4BE:0102:000D:A9EB
 * @implements B4BE:010F:0025:9E19
 * @implements B4BE:0134:0014:8DDF
 * @implements B4BE:0148:000C:6307
 * @implements B4BE:0154:000F:0A50
 * @implements B4BE:0163:0015:B45C
 * @implements B4BE:0178:002F:3512
 * @implements B4BE:018C:001B:452C
 * @implements B4BE:01A7:0012:0029
 * @implements B4BE:01B9:000E:CC0C
 * @implements B4BE:01C7:0014:8411
 * @implements B4BE:01D2:0009:2050
 * @implements B4BE:01DB:0003:C71A
 * @implements B4BE:01DC:0002:CC3A
 * @implements B4BE:01DE:0005:20AE
 * @implements B4BE:01E3:0011:AAD1
 * @implements B4BE:01EE:0006:A58F
 * @implements B4BE:01F6:001A:F454
 * @implements B4BE:0210:0005:84EE
 * @implements B4BE:0215:0005:6B6D
 * @implements B4BE:021A:0006:AEDD
 * @implements B4BE:0234:001A:F45B
 * @implements B4BE:024E:000D:8FAB
 * @implements B4BE:025B:001E:AB48
 * @implements B4BE:0279:0009:0769
 * @implements B4BE:0282:0023:174C
 * @implements B4BE:02A5:0014:0DFA
 * @implements B4BE:02B9:0011:AB31
 * @implements B4BE:02CA:0005:20AE
 * @implements B4BE:02CF:000E:62DE
 * @implements B4BE:02DF:001A:B479
 * @implements B4BE:02F9:000B:F574
 * @implements B4BE:0304:001F:D48D
 * @implements B4BE:0323:0023:174C
 * @implements B4BE:0346:0014:0DFA
 * @implements B4BE:035A:0011:2B39
 * @implements B4BE:036B:0005:20AE
 * @implements B4BE:0370:000E:2246
 * @implements B4BE:0380:001A:B479
 * @implements B4BE:0389:0011:195A
 * @implements B4BE:039A:000B:F574
 * @implements B4BE:03A5:0009:81B5
 * @implements B4BE:03AE:0003:CB1A
 * @implements B4BE:03B1:0006:F7CE
 *
 * Called From: B4BE:001B:0007:DD28
 */
void f__B4BE_008B_0012_DDEE()
{
l__008B:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0xA);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_xorw(&emu_si, emu_si);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x009D); emu_cs = 0x2598; f__2598_0000_0017_EB80();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34BE) { overlay(0x34BE, 1); }
l__009D:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_ax;
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C38));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C36));
	emu_push(emu_cs); emu_push(0x00AE); emu_cs = 0x259E; f__259E_0040_0015_5E4A();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34BE) { overlay(0x34BE, 1); }
l__00AE:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_ax = 0x353F;
	emu_es = emu_ax;

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_es, 0x00, 0x6640);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_es, 0x00, 0x6642);
	emu_push(0x00BA);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A60796: f__22A6_0796_000B_9035(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0xB4BE; emu_last_ip = 0x00B5; emu_last_length = 0x000C; emu_last_crc = 0x7E74;
			emu_call();
			return;
	}
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34BE) { overlay(0x34BE, 1); }
l__00BA:
	emu_xorw(&emu_ax, emu_ax);
	emu_dx = 0x300;
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x998C));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x998A));
	emu_push(emu_ds);
	emu_ax = 0x23B0;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x00D3); emu_cs = 0x253D; emu_File_ReadBlockFile();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34BE) { overlay(0x34BE, 1); }
l__00D3:
	emu_addw(&emu_sp, 0xC);
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x6CE1);
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x6CDF);
	emu_addw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x6CE7));
	emu_adcw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x6CE9));
	emu_addw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x6CEF));
	emu_adcw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x6CF1));
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_ax = 0x3;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0102); emu_cs = 0x252E; emu_Memory_GetBlock1();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34BE) { overlay(0x34BE, 1); }
l__0102:
	emu_pop(&emu_cx);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x23BD;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x010F); emu_cs = 0x352A; overlay(0x352A, 0); emu_WSA_LoadFile();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34BE) { overlay(0x34BE, 1); }
l__010F:
	emu_addw(&emu_sp, 0x12);
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0xA) = emu_ax;
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_di = emu_ax;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_cs); emu_push(0x0134); emu_cs = 0x352A; overlay(0x352A, 0); emu_WSA_DisplayFrame();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34BE) { overlay(0x34BE, 1); }
l__0134:
	emu_addw(&emu_sp, 0xE);
	emu_ax = 0x3C;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x998C));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x998A));
	emu_push(emu_cs); emu_push(0x0148); emu_cs = 0x259E; f__259E_0006_0016_858A();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34BE) { overlay(0x34BE, 1); }
l__0148:
	emu_addw(&emu_sp, 0x6);
	emu_ax = 0x24;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0154); emu_cs = 0x3483; overlay(0x3483, 0); emu_Sound_Play();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34BE) { overlay(0x34BE, 1); }
l__0154:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ds, 0x00, 0x76B6) = 0x0;
	emu_get_memory16(emu_ds, 0x00, 0x76B4) = 0x168;
	goto l__018C;
l__0163:
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x76AE);
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x76AC);
	emu_addw(&emu_dx, 0x6);
	emu_adcw(&emu_ax, 0x0);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_dx;
	goto l__0178;
l__0178:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x2);
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x76AE));
	if ((int16)emu_ax > (int16)emu_get_memory16(emu_ds, 0x00, 0x76AE)) goto l__0178;
	if (emu_ax == emu_get_memory16(emu_ds, 0x00, 0x76AE)) {
		emu_cmpw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x76AC));
		if (emu_dx > emu_get_memory16(emu_ds, 0x00, 0x76AC)) goto l__0178;
	}
l__018C:
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = emu_di;
	emu_incw(&emu_di);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_cs); emu_push(0x01A7); emu_cs = 0x352A; overlay(0x352A, 0); emu_WSA_DisplayFrame();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34BE) { overlay(0x34BE, 1); }
l__01A7:
	emu_addw(&emu_sp, 0xE);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax != 0) goto l__0163;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_cs); emu_push(0x01B9); emu_cs = 0x352A; overlay(0x352A, 0); emu_WSA_Unload();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34BE) { overlay(0x34BE, 1); }
l__01B9:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x37B4), 0x0);
	if (emu_get_memory16(emu_ds, 0x00, 0x37B4) == 0x0) goto l__01D2;
	emu_push(emu_cs); emu_push(0x01C7); emu_cs = 0x29E8; emu_Input_Keyboard_NextKey();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34BE) { overlay(0x34BE, 1); }
l__01C7:
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax != 0) goto l__01DC;
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x37B4), 0x0);
	if (emu_get_memory16(emu_ds, 0x00, 0x37B4) == 0x0) goto l__01DC;
l__01D2:
	emu_ax = 0xFFFF;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x01DB); emu_cs = 0x3483; overlay(0x3483, 0); f__B483_04CB_0015_EBB4();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34BE) { overlay(0x34BE, 1); }
l__01DB:
	emu_pop(&emu_cx);
l__01DC:
	goto l__01F6;
l__01DE:
	emu_push(emu_cs); emu_push(0x01E3); emu_cs = 0x29E8; emu_Input_Keyboard_NextKey();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34BE) { overlay(0x34BE, 1); }
l__01E3:
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax == 0) goto l__01F6;
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x37B4), 0x0);
	if (emu_get_memory16(emu_ds, 0x00, 0x37B4) == 0x0) goto l__01F6;
l__01EE:
	emu_si = 0x1;
	goto l__0389;
l__01F6:
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x76B4);
	emu_orw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x76B6));
	if (emu_ax != 0) goto l__01DE;
	emu_ax = 0x3C;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C38));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C36));
	emu_push(emu_cs); emu_push(0x0210); emu_cs = 0x259E; f__259E_0006_0016_858A();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34BE) { overlay(0x34BE, 1); }
l__0210:
	emu_addw(&emu_sp, 0x6);
	goto l__0215;
l__0215:
	emu_push(emu_cs); emu_push(0x021A); emu_cs = 0x1DD7; emu_Driver_Music_IsPlaying();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34BE) { overlay(0x34BE, 1); }
l__021A:
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax != 0) goto l__0215;
	goto l__0234;
l__0234:
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x76B4);
	emu_orw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x76B6));
	if (emu_ax != 0) { /* Unresolved jump */ emu_ip = 0x0220; emu_last_cs = 0xB4BE; emu_last_ip = 0x023B; emu_last_length = 0x001A; emu_last_crc = 0xF45B; emu_call(); return; }
	emu_ax = 0x3C;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C38));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C36));
	emu_push(emu_cs); emu_push(0x024E); emu_cs = 0x259E; f__259E_0006_0016_858A();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34BE) { overlay(0x34BE, 1); }
l__024E:
	emu_addw(&emu_sp, 0x6);
	emu_ax = 0x353F;
	emu_es = emu_ax;

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_es, 0x00, 0x6640);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_es, 0x00, 0x6642);
	emu_push(0x025B);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A60796: f__22A6_0796_000B_9035(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0xB4BE; emu_last_ip = 0x0256; emu_last_length = 0x000D; emu_last_crc = 0x8FAB;
			emu_call();
			return;
	}
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34BE) { overlay(0x34BE, 1); }
l__025B:
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6CDB));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x998C));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x998A));
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x23CA;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0279); emu_cs = 0x0642; emu_String_GenerateFilename();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34BE) { overlay(0x34BE, 1); }
l__0279:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0282); emu_cs = 0x34CA; overlay(0x34CA, 0); emu_File_ReadChunkOrLengthFile();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34BE) { overlay(0x34BE, 1); }
l__0282:
	emu_addw(&emu_sp, 0xE);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_ax = 0xC8;
	emu_push(emu_ax);
	emu_ax = 0x28;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x02A5); emu_cs = 0x24D0; f__24D0_000D_0039_C17D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34BE) { overlay(0x34BE, 1); }
l__02A5:
	emu_addw(&emu_sp, 0x10);
	emu_ax = 0x1E;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x998C));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x998A));
	emu_push(emu_cs); emu_push(0x02B9); emu_cs = 0x259E; f__259E_0006_0016_858A();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34BE) { overlay(0x34BE, 1); }
l__02B9:
	emu_addw(&emu_sp, 0x6);
	emu_get_memory16(emu_ds, 0x00, 0x76B6) = 0x0;
	emu_get_memory16(emu_ds, 0x00, 0x76B4) = 0x3C;
	goto l__02DF;
l__02CA:
	emu_push(emu_cs); emu_push(0x02CF); emu_cs = 0x29E8; emu_Input_Keyboard_NextKey();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34BE) { overlay(0x34BE, 1); }
l__02CF:
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax == 0) goto l__02DF;
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x37B4), 0x0);
	if (emu_get_memory16(emu_ds, 0x00, 0x37B4) == 0x0) goto l__02DF;
	goto l__01EE;
l__02DF:
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x76B4);
	emu_orw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x76B6));
	if (emu_ax != 0) goto l__02CA;
	emu_ax = 0x1E;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C38));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C36));
	emu_push(emu_cs); emu_push(0x02F9); emu_cs = 0x259E; f__259E_0006_0016_858A();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34BE) { overlay(0x34BE, 1); }
l__02F9:
	emu_addw(&emu_sp, 0x6);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0304); emu_cs = 0x24DA; f__24DA_0004_000E_FD1B();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34BE) { overlay(0x34BE, 1); }
l__0304:
	emu_pop(&emu_cx);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6CDB));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x998C));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x998A));
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x23CE;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0323); emu_cs = 0x34CA; overlay(0x34CA, 0); emu_File_ReadChunkOrLengthFile();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34BE) { overlay(0x34BE, 1); }
l__0323:
	emu_addw(&emu_sp, 0xE);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_ax = 0xC8;
	emu_push(emu_ax);
	emu_ax = 0x28;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0346); emu_cs = 0x24D0; f__24D0_000D_0039_C17D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34BE) { overlay(0x34BE, 1); }
l__0346:
	emu_addw(&emu_sp, 0x10);
	emu_ax = 0x1E;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x998C));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x998A));
	emu_push(emu_cs); emu_push(0x035A); emu_cs = 0x259E; f__259E_0006_0016_858A();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34BE) { overlay(0x34BE, 1); }
l__035A:
	emu_addw(&emu_sp, 0x6);
	emu_get_memory16(emu_ds, 0x00, 0x76B6) = 0x0;
	emu_get_memory16(emu_ds, 0x00, 0x76B4) = 0xB4;
	goto l__0380;
l__036B:
	emu_push(emu_cs); emu_push(0x0370); emu_cs = 0x29E8; emu_Input_Keyboard_NextKey();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34BE) { overlay(0x34BE, 1); }
l__0370:
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax == 0) goto l__0380;
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x37B4), 0x0);
	if (emu_get_memory16(emu_ds, 0x00, 0x37B4) == 0x0) goto l__0380;
	goto l__01EE;
l__0380:
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x76B4);
	emu_orw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x76B6));
	if (emu_ax != 0) goto l__036B;
l__0389:
	emu_ax = 0x1E;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C38));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C36));
	emu_push(emu_cs); emu_push(0x039A); emu_cs = 0x259E; f__259E_0006_0016_858A();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34BE) { overlay(0x34BE, 1); }
l__039A:
	emu_addw(&emu_sp, 0x6);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x03A5); emu_cs = 0x24DA; f__24DA_0004_000E_FD1B();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34BE) { overlay(0x34BE, 1); }
l__03A5:
	emu_pop(&emu_cx);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_cs); emu_push(0x03AE); emu_cs = 0x2598; f__2598_0000_0017_EB80();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34BE) { overlay(0x34BE, 1); }
l__03AE:
	emu_pop(&emu_cx);
	goto l__03B1;
l__03B1:
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function emu_GUI_ShowMap()
 *
 * @name emu_GUI_ShowMap
 * @implements B503:0000:0016:B170 ()
 * @implements B503:0013:0003:9FBA
 * @implements B503:0016:0009:BCB2
 * @implements B503:001F:000A:C5EF
 * @implements B503:0029:0013:4B76
 * @implements B503:003C:0011:AE34
 * @implements B503:004D:000F:57EB
 * @implements B503:0050:000C:A435
 * @implements B503:005C:0013:BF46
 * @implements B503:006F:0018:3CBB
 * @implements B503:0087:0010:58CB
 * @implements B503:0097:0020:07EE
 * @implements B503:00B7:0022:934B
 * @implements B503:00D9:001B:7075
 * @implements B503:00F4:001D:A0E4
 * @implements B503:0111:0009:26E5
 * @implements B503:0113:0007:59FC
 * @implements B503:011A:0005:AFC0
 * @implements B503:011F:000A:F1B4
 * @implements B503:0129:001A:AA1B
 * @implements B503:0143:002B:640D
 * @implements B503:016E:0016:9A37
 * @implements B503:0184:0023:CE81
 * @implements B503:01A7:0024:5AA3
 * @implements B503:01CB:0012:E385
 * @implements B503:01DD:0024:B03C
 * @implements B503:01F7:000A:93B9
 * @implements B503:0201:0005:892E
 * @implements B503:0206:001C:AF98
 * @implements B503:0222:0002:C03A
 * @implements B503:0224:001E:8296
 * @implements B503:0242:0008:CBE0
 * @implements B503:024A:0020:007D
 * @implements B503:026A:0014:B1CE
 * @implements B503:027E:0008:7A01
 * @implements B503:0286:000F:B642
 * @implements B503:0295:0008:E8E9
 * @implements B503:029D:001E:8AB7
 * @implements B503:02BB:001B:4375
 * @implements B503:02D6:000C:E210
 * @implements B503:02E2:0008:662D
 * @implements B503:02EA:0024:D285
 * @implements B503:030E:0008:2201
 * @implements B503:0316:0011:E66D
 * @implements B503:0327:0002:C03A
 * @implements B503:0329:000E:A771
 * @implements B503:0337:0022:C1C0
 * @implements B503:033B:001E:BDB7
 * @implements B503:0359:001B:4375
 * @implements B503:0374:000C:E510
 * @implements B503:0380:0008:E584
 * @implements B503:0388:000A:1561
 * @implements B503:0392:0008:3318
 * @implements B503:039A:0020:8E44
 * @implements B503:039D:001D:8CFC
 * @implements B503:03BA:0011:8DB1
 * @implements B503:03CB:000E:28E9
 * @implements B503:03D9:000D:81B6
 * @implements B503:03DD:0009:6E38
 * @implements B503:03E6:0008:65A2
 * @implements B503:03EE:0004:599F
 * @implements B503:03F2:0005:7F8C
 * @implements B503:03F7:001E:A1B7
 * @implements B503:0415:001B:4375
 * @implements B503:0430:000C:DE03
 * @implements B503:043C:0009:B5CB
 * @implements B503:0445:0006:5A1C
 * @implements B503:044B:0028:9194
 * @implements B503:0473:0002:D13A
 * @implements B503:0475:0022:49A0
 * @implements B503:0497:0023:DE89
 * @implements B503:04BA:0013:3B9E
 * @implements B503:04CD:0006:E56C
 * @implements B503:04CE:0005:816D
 * @implements B503:04D3:0012:2CFC
 * @implements B503:04E5:0008:2522
 * @implements B503:04ED:0008:B817
 * @implements B503:04F5:0006:DD37
 * @implements B503:0500:0005:FB00
 * @implements B503:0505:0008:3199
 * @implements B503:050D:0014:8976
 * @implements B503:0521:0008:4201
 * @implements B503:0529:001A:2E3C
 * @implements B503:0543:0012:7598
 * @implements B503:0555:0008:FBE0
 * @implements B503:055D:0008:A467
 * @implements B503:0565:0006:E56C
 * @implements B503:056B:000D:A409
 * @implements B503:0578:0008:378B
 * @implements B503:0580:0006:F7CE
 *
 * Called From: 3503:0020:0005:0000
 */
void emu_GUI_ShowMap()
{
l__0000:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x316);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_si = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_orw(&emu_si, emu_si);
	if (emu_si != 0) goto l__0016;
	emu_ax = 0x1;
l__0013:
	goto l__0580;
l__0016:
	emu_ax = 0xA;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x001F); emu_cs = 0x24FD; f__24FD_000A_000B_2043();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { overlay(0x3503, 1); }
l__001F:
	emu_pop(&emu_cx);
	emu_ax = 0x1D;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0029); emu_cs = 0x3483; overlay(0x3483, 0); emu_Music_Play();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { overlay(0x3503, 1); }
l__0029:
	emu_pop(&emu_cx);
	emu_ax = 0x300;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x30A);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x003C); emu_cs = 0x01F7; emu_Tools_Memset();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { overlay(0x3503, 1); }
l__003C:
	emu_addw(&emu_sp, 0x8);
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp,  0x8), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp,  0x8) == 0x0) goto l__004D;
	emu_ax = emu_si;
	emu_decw(&emu_ax);
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	goto l__0050;
l__004D:
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_si;
l__0050:
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_si;
	emu_ax = 0x4;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x005C); emu_cs = 0x2598; f__2598_0000_0017_EB80();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { overlay(0x3503, 1); }
l__005C:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0xA) = emu_ax;
	emu_ax = 0xF;
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x30A);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x006F); emu_cs = 0x259E; f__259E_0006_0016_858A();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { overlay(0x3503, 1); }
l__006F:
	emu_addw(&emu_sp, 0x6);
	emu_ax = 0x8F;
	emu_push(emu_ax);
	emu_ax = 0x137;
	emu_push(emu_ax);
	emu_ax = 0x18;
	emu_push(emu_ax);
	emu_ax = 0x8;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0087); emu_cs = 0x2B42; emu_Mouse_SetRegion();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { overlay(0x3503, 1); }
l__0087:
	emu_addw(&emu_sp, 0x8);
	emu_ax = 0x54;
	emu_push(emu_ax);
	emu_ax = 0xA0;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0097); emu_cs = 0x2B99; f__2B99_007B_0019_5737();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { overlay(0x3503, 1); }
l__0097:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x998C));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x998A));
	emu_ax = 0x5;
	emu_push(emu_ax);
	emu_ax = 0x5;
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x2B12;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x00B7); emu_cs = 0x34CA; overlay(0x34CA, 0); emu_Sprites_LoadImage();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { overlay(0x3503, 1); }
l__00B7:
	emu_addw(&emu_sp, 0xE);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C44));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C42));
	emu_ax = 0x5;
	emu_push(emu_ax);
	emu_ax = 0xC8;
	emu_push(emu_ax);
	emu_ax = 0x140;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x00D9); emu_cs = 0x2BB6; f__2BB6_004F_0014_AB2C();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { overlay(0x3503, 1); }
l__00D9:
	emu_addw(&emu_sp, 0xE);
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_ax = 0x4;
	emu_push(emu_ax);
	emu_ax = 0x5;
	emu_push(emu_ax);
	emu_ax = 0x353F;
	emu_es = emu_ax;

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_es, 0x00, 0x6630);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_es, 0x00, 0x6632);
	emu_push(0x00F4);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A604A5: f__22A6_04A5_000F_3B8F(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0xB503; emu_last_ip = 0x00EF; emu_last_length = 0x001B; emu_last_crc = 0x7075;
			emu_call();
			return;
	}
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { overlay(0x3503, 1); }
l__00F4:
	emu_addw(&emu_sp, 0x8);
	emu_xorw(&emu_ax, emu_ax);
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_ax;
	emu_di = emu_ax;
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x3A38);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax == 0) goto l__0111;
	emu_cmpw(&emu_ax, 0x1);
	if (emu_ax != 0x1) {
		emu_cmpw(&emu_ax, 0x2);
		if (emu_ax == 0x2) goto l__011F;
	}
	goto l__011A;
l__0111:
	emu_xorw(&emu_di, emu_di);
l__0113:
	emu_get_memory16(emu_ss, emu_bp, -0x8) = 0x98;
	goto l__0129;
l__011A:
	emu_di = 0x21;
	goto l__0113;
l__011F:
	emu_di = 0x1;
	emu_get_memory16(emu_ss, emu_bp, -0x8) = 0x18;
	goto l__0129;
l__0129:
	emu_ax = 0xC;
	emu_push(emu_ax);
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x3C32);
	emu_addw(&emu_ax, 0x2F1);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C34));
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x316);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0143); emu_cs = 0x01F7; emu_Tools_Memcopy();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { overlay(0x3503, 1); }
l__0143:
	emu_addw(&emu_sp, 0xA);
	emu_ax = 0xC;
	emu_push(emu_ax);
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x3A38);
	emu_cl = 0x4;
	emu_shlw(&emu_ax, emu_cl);
	emu_addw(&emu_ax, 0x90);
	emu_dx = 0x3;
	emu_imuluw(&emu_ax, emu_dx);
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x3C32);
	emu_addw(&emu_dx, emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C34));
	emu_push(emu_dx);
	emu_push(emu_ds);
	emu_ax = 0x81BA;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x016E); emu_cs = 0x01F7; emu_Tools_Memcopy();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { overlay(0x3503, 1); }
l__016E:
	emu_addw(&emu_sp, 0xA);
	emu_ax = 0xC;
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x81BA;
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x81C6;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0184); emu_cs = 0x01F7; emu_Tools_Memcopy();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { overlay(0x3503, 1); }
l__0184:
	emu_addw(&emu_sp, 0xA);
	emu_ax = 0x4;
	emu_push(emu_ax);
	emu_ax = 0x4;
	emu_push(emu_ax);
	emu_ax = 0x28;
	emu_push(emu_ax);
	emu_ax = 0x7;
	emu_push(emu_ax);
	emu_ax = 0x98;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x01A7); emu_cs = 0x24D0; f__24D0_000D_0039_C17D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { overlay(0x3503, 1); }
l__01A7:
	emu_addw(&emu_sp, 0x10);
	emu_ax = 0x4;
	emu_push(emu_ax);
	emu_ax = 0x4;
	emu_push(emu_ax);
	emu_ax = 0x28;
	emu_push(emu_ax);
	emu_ax = 0x7;
	emu_push(emu_ax);
	emu_ax = 0x98;
	emu_push(emu_ax);
	emu_ax = 0x21;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x01CB); emu_cs = 0x24D0; f__24D0_000D_0039_C17D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { overlay(0x3503, 1); }
l__01CB:
	emu_addw(&emu_sp, 0x10);
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x37B6);
	emu_cmpw(&emu_ax, 0x1);
	if (emu_ax == 0x1) goto l__0206;
	emu_cmpw(&emu_ax, 0x2);
	if (emu_ax == 0x2) goto l__01DD;
	goto l__0222;
l__01DD:
	emu_ax = 0x4;
	emu_push(emu_ax);
	emu_ax = 0x4;
	emu_push(emu_ax);
	emu_ax = 0x18;
	emu_push(emu_ax);
	emu_ax = 0x26;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_ax = 0x78;
l__01F7:
	emu_push(emu_ax);
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0201); emu_cs = 0x24D0; f__24D0_000D_0039_C17D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { overlay(0x3503, 1); }
l__0201:
	emu_addw(&emu_sp, 0x10);
	goto l__0224;
l__0206:
	emu_ax = 0x4;
	emu_push(emu_ax);
	emu_ax = 0x4;
	emu_push(emu_ax);
	emu_ax = 0x18;
	emu_push(emu_ax);
	emu_ax = 0x26;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_ax = 0x60;
	goto l__01F7;
l__0222:
	goto l__0224;
l__0224:
	emu_ax = 0xC;
	emu_push(emu_ax);
	emu_ax = 0x8F;
	emu_push(emu_ax);
	emu_ax = 0x137;
	emu_push(emu_ax);
	emu_ax = 0x18;
	emu_push(emu_ax);
	emu_ax = 0x8;
	emu_push(emu_ax);
	emu_ax = 0x353F;
	emu_es = emu_ax;

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_es, 0x00, 0x6668);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_es, 0x00, 0x666A);
	emu_push(0x0242);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A60D31: emu_GUI_DrawFilledRectangle(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0xB503; emu_last_ip = 0x023D; emu_last_length = 0x001E; emu_last_crc = 0x8296;
			emu_call();
			return;
	}
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { overlay(0x3503, 1); }
l__0242:
	emu_addw(&emu_sp, 0xA);
	emu_push(emu_cs); emu_push(0x024A); emu_cs = 0x2B6C; f__2B6C_0137_0020_C73F();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { overlay(0x3503, 1); }
l__024A:
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = 0x4;
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
	emu_push(emu_cs); emu_push(0x026A); emu_cs = 0x24D0; f__24D0_000D_0039_C17D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { overlay(0x3503, 1); }
l__026A:
	emu_addw(&emu_sp, 0x10);
	emu_ax = 0xF;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C34));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C32));
	emu_push(emu_cs); emu_push(0x027E); emu_cs = 0x259E; f__259E_0006_0016_858A();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { overlay(0x3503, 1); }
l__027E:
	emu_addw(&emu_sp, 0x6);
	emu_push(emu_cs); emu_push(0x0286); emu_cs = 0x29E8; emu_Input_History_Clear();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { overlay(0x3503, 1); }
l__0286:
	emu_get_memory16(emu_ds, 0x00, 0x81B4) = 0x0;
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp,  0x8), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp,  0x8) != 0x0) goto l__0295;
	goto l__03F2;
l__0295:
	emu_cmpw(&emu_si, 0x1);
	if (emu_si == 0x1) goto l__029D;
	goto l__03F2;
l__029D:
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x998C));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x998A));
	emu_ax = 0x3;
	emu_push(emu_ax);
	emu_ax = 0x3;
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x2B1E;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x02BB); emu_cs = 0x34CA; overlay(0x34CA, 0); emu_Sprites_LoadImage();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { overlay(0x3503, 1); }
l__02BB:
	emu_addw(&emu_sp, 0xE);
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_ax = 0x3;
	emu_push(emu_ax);
	emu_ax = 0x353F;
	emu_es = emu_ax;

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_es, 0x00, 0x6630);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_es, 0x00, 0x6632);
	emu_push(0x02D6);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A604A5: f__22A6_04A5_000F_3B8F(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0xB503; emu_last_ip = 0x02D1; emu_last_length = 0x001B; emu_last_crc = 0x4375;
			emu_call();
			return;
	}
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { overlay(0x3503, 1); }
l__02D6:
	emu_addw(&emu_sp, 0x8);
	emu_ax = 0x11B;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x02E2); emu_cs = 0x0FCB; emu_String_Get_ByIndex();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { overlay(0x3503, 1); }
l__02E2:
	emu_pop(&emu_cx);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x02EA); f__B503_0F0C_0010_028B();
l__02EA:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_ax = 0x78;
	emu_push(emu_ax);
	emu_ax = 0x130;
	emu_push(emu_ax);
	emu_ax = 0x18;
	emu_push(emu_ax);
	emu_ax = 0x8;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x030E); emu_cs = 0x3488; overlay(0x3488, 0); f__B488_0000_0027_45A9();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { overlay(0x3503, 1); }
l__030E:
	emu_addw(&emu_sp, 0x10);
	emu_push(emu_cs); emu_push(0x0316); emu_cs = 0x29E8; emu_Input_History_Clear();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { overlay(0x3503, 1); }
l__0316:
	emu_get_memory16(emu_ds, 0x00, 0x76B6) = 0x0;
	emu_get_memory16(emu_ds, 0x00, 0x76B4) = 0x78;
	emu_push(emu_cs);
	emu_push(0x0327); emu_CPS_LoadRegionClick();
l__0327:
	goto l__0329;
l__0329:
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x76B4);
	emu_orw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x76B6));
	if (emu_ax == 0) goto l__033B;
	emu_push(emu_cs);
	emu_push(0x0337); f__B503_13C2_0008_C4BB();
l__0337:
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax == 0) goto l__0329;
l__033B:
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x998C));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x998A));
	emu_ax = 0x3;
	emu_push(emu_ax);
	emu_ax = 0x3;
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x2B29;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0359); emu_cs = 0x34CA; overlay(0x34CA, 0); emu_Sprites_LoadImage();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { overlay(0x3503, 1); }
l__0359:
	emu_addw(&emu_sp, 0xE);
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_ax = 0x3;
	emu_push(emu_ax);
	emu_ax = 0x353F;
	emu_es = emu_ax;

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_es, 0x00, 0x6630);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_es, 0x00, 0x6632);
	emu_push(0x0374);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A604A5: f__22A6_04A5_000F_3B8F(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0xB503; emu_last_ip = 0x036F; emu_last_length = 0x001B; emu_last_crc = 0x4375;
			emu_call();
			return;
	}
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { overlay(0x3503, 1); }
l__0374:
	emu_addw(&emu_sp, 0x8);
	emu_ax = 0x11C;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0380); emu_cs = 0x0FCB; emu_String_Get_ByIndex();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { overlay(0x3503, 1); }
l__0380:
	emu_pop(&emu_cx);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x0388); f__B503_0F0C_0010_028B();
l__0388:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x0392); f__B503_13C2_0008_C4BB();
l__0392:
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax == 0) goto l__039A;
	emu_xorw(&emu_ax, emu_ax);
	goto l__039D;
l__039A:
	emu_ax = 0x1;
l__039D:
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_ax = 0x78;
	emu_push(emu_ax);
	emu_ax = 0x130;
	emu_push(emu_ax);
	emu_ax = 0x18;
	emu_push(emu_ax);
	emu_ax = 0x8;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x03BA); emu_cs = 0x3488; overlay(0x3488, 0); f__B488_0000_0027_45A9();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { overlay(0x3503, 1); }
l__03BA:
	emu_addw(&emu_sp, 0x10);
	emu_get_memory16(emu_ds, 0x00, 0x76B6) = 0x0;
	emu_get_memory16(emu_ds, 0x00, 0x76B4) = 0x3C;
	goto l__03CB;
l__03CB:
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x76B4);
	emu_orw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x76B6));
	if (emu_ax == 0) goto l__03DD;
	emu_push(emu_cs);
	emu_push(0x03D9); f__B503_13C2_0008_C4BB();
l__03D9:
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax == 0) goto l__03CB;
l__03DD:
	emu_ax = 0x11D;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x03E6); emu_cs = 0x0FCB; emu_String_Get_ByIndex();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { overlay(0x3503, 1); }
l__03E6:
	emu_pop(&emu_cx);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x03EE); f__B503_0F0C_0010_028B();
l__03EE:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	goto l__03F7;
l__03F2:
	emu_push(emu_cs);
	emu_push(0x03F7); emu_CPS_LoadRegionClick();
l__03F7:
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x998C));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x998A));
	emu_ax = 0x3;
	emu_push(emu_ax);
	emu_ax = 0x3;
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x2B35;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0415); emu_cs = 0x34CA; overlay(0x34CA, 0); emu_Sprites_LoadImage();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { overlay(0x3503, 1); }
l__0415:
	emu_addw(&emu_sp, 0xE);
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_ax = 0x3;
	emu_push(emu_ax);
	emu_ax = 0x353F;
	emu_es = emu_ax;

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_es, 0x00, 0x6630);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_es, 0x00, 0x6632);
	emu_push(0x0430);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A604A5: f__22A6_04A5_000F_3B8F(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0xB503; emu_last_ip = 0x042B; emu_last_length = 0x001B; emu_last_crc = 0x4375;
			emu_call();
			return;
	}
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { overlay(0x3503, 1); }
l__0430:
	emu_addw(&emu_sp, 0x8);
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x043C); emu_cs = 0x2598; f__2598_0000_0017_EB80();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { overlay(0x3503, 1); }
l__043C:
	emu_pop(&emu_cx);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs);
	emu_push(0x0445); f__B503_0B68_000D_957E();
l__0445:
	emu_pop(&emu_cx);
	emu_push(emu_cs);
	emu_push(0x044B); f__B503_13C2_0008_C4BB();
l__044B:
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax == 0) goto l__0475;
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_ax = 0x78;
	emu_push(emu_ax);
	emu_ax = 0x26;
	emu_push(emu_ax);
	emu_ax = 0x18;
	emu_push(emu_ax);
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_ax = 0x18;
	emu_push(emu_ax);
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0473); emu_cs = 0x24D0; f__24D0_000D_0039_C17D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { overlay(0x3503, 1); }
l__0473:
	goto l__0497;
l__0475:
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_ax = 0x78;
	emu_push(emu_ax);
	emu_ax = 0x130;
	emu_push(emu_ax);
	emu_ax = 0x18;
	emu_push(emu_ax);
	emu_ax = 0x8;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0497); emu_cs = 0x3488; overlay(0x3488, 0); f__B488_0000_0027_45A9();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { overlay(0x3503, 1); }
l__0497:
	emu_addw(&emu_sp, 0x10);
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
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
	emu_push(emu_cs); emu_push(0x04BA); emu_cs = 0x24D0; f__24D0_000D_0039_C17D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { overlay(0x3503, 1); }
l__04BA:
	emu_addw(&emu_sp, 0x10);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x6);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x4));
	if (emu_ax == emu_get_memory16(emu_ss, emu_bp, -0x4)) goto l__04CE;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_cs);
	emu_push(0x04CD); f__B503_0CB3_001A_FEEE();
l__04CD:
	emu_pop(&emu_cx);
l__04CE:
	emu_push(emu_cs); emu_push(0x04D3); emu_cs = 0x2B6C; f__2B6C_0169_001E_6939();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { overlay(0x3503, 1); }
l__04D3:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x81D2));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x0), emu_si);
	if ((int16)emu_get_memory16(emu_es, emu_bx, 0x0) < (int16)emu_si) { /* Unresolved jump */ emu_ip = 0x04FB; emu_last_cs = 0xB503; emu_last_ip = 0x04DA; emu_last_length = 0x0012; emu_last_crc = 0x2CFC; emu_call(); return; }
	emu_ax = 0x11E;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x04E5); emu_cs = 0x0FCB; emu_String_Get_ByIndex();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { overlay(0x3503, 1); }
l__04E5:
	emu_pop(&emu_cx);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x04ED); f__B503_0F0C_0010_028B();
l__04ED:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_si);
	emu_push(emu_cs);
	emu_push(0x04F5); f__B503_0586_0017_050A();
l__04F5:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ax;
	goto l__0500;
l__0500:
	emu_push(emu_cs); emu_push(0x0505); emu_cs = 0x1DD7; f__1DD7_0B53_0025_36F7();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { overlay(0x3503, 1); }
l__0505:
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_cs); emu_push(0x050D); emu_cs = 0x2598; f__2598_0000_0017_EB80();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { overlay(0x3503, 1); }
l__050D:
	emu_pop(&emu_cx);
	emu_ax = 0xC7;
	emu_push(emu_ax);
	emu_ax = 0x13F;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0521); emu_cs = 0x2B42; emu_Mouse_SetRegion();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { overlay(0x3503, 1); }
l__0521:
	emu_addw(&emu_sp, 0x8);
	emu_push(emu_cs); emu_push(0x0529); emu_cs = 0x29E8; emu_Input_History_Clear();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { overlay(0x3503, 1); }
l__0529:
	emu_ax = 0xC;
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x316);
	emu_push(emu_ax);
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x3C32);
	emu_addw(&emu_ax, 0x2F1);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C34));
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0543); emu_cs = 0x01F7; emu_Tools_Memcopy();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { overlay(0x3503, 1); }
l__0543:
	emu_addw(&emu_sp, 0xA);
	emu_ax = 0xF;
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x30A);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0555); emu_cs = 0x259E; f__259E_0006_0016_858A();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { overlay(0x3503, 1); }
l__0555:
	emu_addw(&emu_sp, 0x6);
	emu_push(emu_cs); emu_push(0x055D); emu_cs = 0x2B6C; f__2B6C_0137_0020_C73F();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { overlay(0x3503, 1); }
l__055D:
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0565); emu_cs = 0x24DA; f__24DA_0004_000E_FD1B();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { overlay(0x3503, 1); }
l__0565:
	emu_pop(&emu_cx);
	emu_push(emu_cs); emu_push(0x056B); emu_cs = 0x2B6C; f__2B6C_0169_001E_6939();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { overlay(0x3503, 1); }
l__056B:
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C34));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C32));
	emu_push(emu_cs); emu_push(0x0578); emu_cs = 0x259E; f__259E_0040_0015_5E4A();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { overlay(0x3503, 1); }
l__0578:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x2);
	goto l__0013;
l__0580:
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
 * Decompiled function f__B503_0586_0017_050A()
 *
 * @name f__B503_0586_0017_050A
 * @implements B503:0586:0017:050A ()
 * @implements B503:059D:0013:54BB
 * @implements B503:05B0:0029:2499
 * @implements B503:05D9:0008:DEB0
 * @implements B503:05E1:0013:55F7
 * @implements B503:05F4:0029:3F74
 * @implements B503:061D:000A:9000
 * @implements B503:0627:0033:8391
 * @implements B503:065A:000E:3033
 * @implements B503:0668:0039:8E6A
 * @implements B503:0672:002F:2818
 * @implements B503:06A1:0031:36AF
 * @implements B503:06D2:0031:E97D
 * @implements B503:0703:000E:6448
 * @implements B503:0711:0014:9629
 * @implements B503:071D:0008:831B
 * @implements B503:0725:0017:C95A
 * @implements B503:073C:000E:15CD
 * @implements B503:074A:000E:A0A0
 * @implements B503:0751:0007:DB7A
 * @implements B503:0758:000E:F83E
 * @implements B503:0766:000B:D03B
 * @implements B503:0771:002B:3E63
 * @implements B503:077E:001E:9D55
 * @implements B503:0783:0019:B1FA
 * @implements B503:0788:0014:B0EA
 * @implements B503:079C:0004:CF79
 * @implements B503:07A0:0037:C389
 * @implements B503:07D7:0016:22B8
 * @implements B503:07DA:0013:289B
 * @implements B503:07E3:000A:916C
 * @implements B503:07ED:0005:E089
 * @implements B503:07F2:0009:067A
 * @implements B503:07FB:0005:39A2
 * @implements B503:0800:0014:B640
 * @implements B503:0814:0005:7C0A
 * @implements B503:0819:0012:A163
 * @implements B503:082B:001A:ED51
 * @implements B503:0830:0015:27A3
 * @implements B503:0835:0010:3623
 * @implements B503:0845:000C:45BE
 * @implements B503:0851:000E:13B7
 * @implements B503:085F:0026:6D71
 * @implements B503:087A:000B:19C5
 * @implements B503:0881:0004:68D2
 * @implements B503:0885:0006:F7CE
 *
 * Called From: B503:04F2:0008:B817
 */
void f__B503_0586_0017_050A()
{
l__0586:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0xC4);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_get_memory16(emu_ss, emu_bp, -0x14) = 0x0;
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3A38));
	emu_push(emu_cs); emu_push(0x059D); emu_cs = 0x34B8; overlay(0x34B8, 0); f__B4B8_110D_000D_FD5C();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { overlay(0x3503, 1); }
l__059D:
	emu_pop(&emu_cx);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_ds);
	emu_ax = 0x2B41;
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x24);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x05B0); emu_cs = 0x01F7; emu_String_sprintf();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { overlay(0x3503, 1); }
l__05B0:
	emu_addw(&emu_sp, 0xA);
	emu_movw(&emu_ax, emu_bp - 0xC4);
	emu_get_memory16(emu_ss, emu_bp, -0xC) = emu_ss;
	emu_get_memory16(emu_ss, emu_bp, -0xE) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = 0x0;
	emu_get_memory16(emu_ss, emu_bp, -0x12) = 0x1;
	emu_ax = 0xA0;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0xC4);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x05D9); emu_cs = 0x01F7; emu_Tools_Memset();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { overlay(0x3503, 1); }
l__05D9:
	emu_addw(&emu_sp, 0x8);
	emu_xorw(&emu_si, emu_si);
	goto l__071D;
l__05E1:
	emu_ax = emu_si;
	emu_incw(&emu_ax);
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x2B49;
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0xA);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x05F4); emu_cs = 0x01F7; emu_String_sprintf();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { overlay(0x3503, 1); }
l__05F4:
	emu_addw(&emu_sp, 0xA);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x81DC));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x81DA));
	emu_ax = 0x50;
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x9939;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0xA);
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x24);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x061D); emu_cs = 0x34FC; overlay(0x34FC, 0); emu_Ini_GetString();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { overlay(0x3503, 1); }
l__061D:
	emu_addw(&emu_sp, 0x16);
	emu_orw(&emu_ax, emu_dx);
	if (emu_ax != 0) goto l__0627;
	goto l__0725;
l__0627:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0xE);
	emu_addw(&emu_ax, 0x6);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_ax);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0xE);
	emu_addw(&emu_ax, 0x4);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_ax);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0xE);
	emu_addw(&emu_ax, 0x2);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_push(emu_ds);
	emu_ax = 0x2B4F;
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x9939;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x065A); emu_cs = 0x01F7; emu_String_sscanf();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { overlay(0x3503, 1); }
l__065A:
	emu_addw(&emu_sp, 0x18);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_push(emu_cs);
	emu_push(0x0668); f__B503_1302_0013_473F();
l__0668:
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax == 0) {
		emu_get_memory16(emu_ss, emu_bp, -0x12) = 0x0;
	}
l__0672:
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_ax = 0x10;
	emu_push(emu_ax);
	emu_ax = 0x10;
	emu_push(emu_ax);
	emu_ax = 0x98;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x6));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x4));
	emu_ax = 0x353F;
	emu_es = emu_ax;

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_es, 0x00, 0x6624);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_es, 0x00, 0x6626);
	emu_push(0x06A1);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A6034F: f__22A6_034F_000C_5E0A(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0xB503; emu_last_ip = 0x069C; emu_last_length = 0x002F; emu_last_crc = 0x2818;
			emu_call();
			return;
	}
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { overlay(0x3503, 1); }
l__06A1:
	emu_addw(&emu_sp, 0x10);
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_ax = 0x10;
	emu_push(emu_ax);
	emu_ax = 0x10;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x6));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x4));
	emu_ax = 0x353F;
	emu_es = emu_ax;

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_es, 0x00, 0x6624);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_es, 0x00, 0x6626);
	emu_push(0x06D2);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A6034F: f__22A6_034F_000C_5E0A(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0xB503; emu_last_ip = 0x06CD; emu_last_length = 0x0031; emu_last_crc = 0x36AF;
			emu_call();
			return;
	}
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { overlay(0x3503, 1); }
l__06D2:
	emu_addw(&emu_sp, 0x10);
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C44));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C42));
	emu_ax = 0x100;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = 0x98;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x2));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x81E0));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x81DE));
	emu_push(emu_cs); emu_push(0x0703); emu_cs = 0x2903; emu_Sprites_GetCSIP();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { overlay(0x3503, 1); }
l__0703:
	emu_addw(&emu_sp, 0x6);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0711); emu_cs = 0x2903; emu_GUI_DrawSprite();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { overlay(0x3503, 1); }
l__0711:
	emu_addw(&emu_sp, 0x14);
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0xE), 0x8);
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x10);
	emu_incw(&emu_si);
l__071D:
	emu_cmpw(&emu_si, 0x14);
	if ((int16)emu_si >= (int16)0x14) goto l__0725;
	goto l__05E1;
l__0725:
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_si;
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x12), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp, -0x12) == 0x0) goto l__0758;
	emu_movw(&emu_ax, emu_bp - 0xC4);
	emu_get_memory16(emu_ss, emu_bp, -0xC) = emu_ss;
	emu_get_memory16(emu_ss, emu_bp, -0xE) = emu_ax;
	emu_xorw(&emu_si, emu_si);
	goto l__0751;
l__073C:
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_push(emu_cs);
	emu_push(0x074A); f__B503_12AC_0013_473F();
l__074A:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0xE), 0x8);
	emu_incw(&emu_si);
l__0751:
	emu_cmpw(&emu_si, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if ((int16)emu_si < (int16)emu_get_memory16(emu_ss, emu_bp, -0x2)) goto l__073C;
	goto l__0788;
l__0758:
	emu_movw(&emu_ax, emu_bp - 0xC4);
	emu_get_memory16(emu_ss, emu_bp, -0xC) = emu_ss;
	emu_get_memory16(emu_ss, emu_bp, -0xE) = emu_ax;
	emu_xorw(&emu_si, emu_si);
	goto l__0783;
l__0766:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_push(emu_cs);
	emu_push(0x0771); f__B503_1302_0013_473F();
l__0771:
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax != 0) {
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xE));
		emu_get_memory16(emu_es, emu_bx, 0x0) = 0x0;
	}
l__077E:
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0xE), 0x8);
	emu_incw(&emu_si);
l__0783:
	emu_cmpw(&emu_si, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if ((int16)emu_si < (int16)emu_get_memory16(emu_ss, emu_bp, -0x2)) goto l__0766;
l__0788:
	emu_movw(&emu_ax, emu_bp - 0xC4);
	emu_get_memory16(emu_ss, emu_bp, -0xC) = emu_ss;
	emu_get_memory16(emu_ss, emu_bp, -0xE) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = 0x0;
	emu_push(emu_cs); emu_push(0x079C); emu_cs = 0x2B6C; f__2B6C_0137_0020_C73F();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { overlay(0x3503, 1); }
l__079C:
	emu_xorw(&emu_si, emu_si);
	goto l__07E3;
l__07A0:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x0), 0x0);
	if (emu_get_memory16(emu_es, emu_bx, 0x0) == 0x0) goto l__07DA;
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_ax = 0x10;
	emu_push(emu_ax);
	emu_ax = 0x10;
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x6));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x4));
	emu_ax = 0x98;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_ax = 0x353F;
	emu_es = emu_ax;

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_es, 0x00, 0x6624);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_es, 0x00, 0x6626);
	emu_push(0x07D7);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A6034F: f__22A6_034F_000C_5E0A(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0xB503; emu_last_ip = 0x07D2; emu_last_length = 0x0037; emu_last_crc = 0xC389;
			emu_call();
			return;
	}
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { overlay(0x3503, 1); }
l__07D7:
	emu_addw(&emu_sp, 0x10);
l__07DA:
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x10);
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0xE), 0x8);
	emu_incw(&emu_si);
l__07E3:
	emu_cmpw(&emu_si, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if ((int16)emu_si < (int16)emu_get_memory16(emu_ss, emu_bp, -0x2)) goto l__07A0;
	emu_push(emu_cs); emu_push(0x07ED); emu_cs = 0x2B6C; f__2B6C_0169_001E_6939();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { overlay(0x3503, 1); }
l__07ED:
	emu_push(emu_cs); emu_push(0x07F2); emu_cs = 0x29E8; emu_Input_History_Clear();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { overlay(0x3503, 1); }
l__07F2:
	emu_xorw(&emu_ax, emu_ax);
	emu_di = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x10) = emu_ax;
	goto l__0835;
l__07FB:
	emu_push(emu_cs);
	emu_push(0x0800); f__B503_088B_000B_B072();
l__0800:
	emu_di = emu_ax;
	emu_orw(&emu_di, emu_di);
	if (emu_di == 0) goto l__0835;
	emu_movw(&emu_ax, emu_bp - 0xC4);
	emu_get_memory16(emu_ss, emu_bp, -0xC) = emu_ss;
	emu_get_memory16(emu_ss, emu_bp, -0xE) = emu_ax;
	emu_xorw(&emu_si, emu_si);
	goto l__0830;
l__0814:
	emu_push(emu_cs);
	emu_push(0x0819); f__B503_1343_003B_6432();
l__0819:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x0), emu_di);
	if (emu_get_memory16(emu_es, emu_bx, 0x0) != emu_di) goto l__082B;
	emu_get_memory16(emu_ss, emu_bp, -0x10) = 0x1;
	emu_get_memory16(emu_ss, emu_bp, -0x14) = emu_si;
	goto l__0835;
l__082B:
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0xE), 0x8);
	emu_incw(&emu_si);
l__0830:
	emu_cmpw(&emu_si, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if ((int16)emu_si < (int16)emu_get_memory16(emu_ss, emu_bp, -0x2)) goto l__0814;
l__0835:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x10), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp, -0x10) == 0x0) goto l__07FB;
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_push(emu_di);
	emu_push(emu_cs);
	emu_push(0x0845); f__B503_12AC_0013_473F();
l__0845:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_ds);
	emu_ax = 0x2B1D;
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x0851); f__B503_0F0C_0010_028B();
l__0851:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0xC4);
	emu_push(emu_ax);
	emu_push(emu_di);
	emu_push(emu_cs);
	emu_push(0x085F); f__B503_08DB_0014_ECA4();
l__085F:
	emu_addw(&emu_sp, 0x6);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_decw(&emu_ax);
	emu_dx = 0x3;
	emu_imuluw(&emu_ax, emu_dx);
	emu_addw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_addw(&emu_ax, 0x2);
	emu_di = emu_ax;
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp,  0x6), 0x7);
	if ((int16)emu_get_memory16(emu_ss, emu_bp,  0x6) > (int16)0x7) {
		emu_decw(&emu_di);
	}
l__087A:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp,  0x6), 0x8);
	if ((int16)emu_get_memory16(emu_ss, emu_bp,  0x6) > (int16)0x8) {
		emu_decw(&emu_di);
	}
l__0881:
	emu_ax = emu_di;
	goto l__0885;
l__0885:
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
 * Decompiled function f__B503_088B_000B_B072()
 *
 * @name f__B503_088B_000B_B072
 * @implements B503:088B:000B:B072 ()
 * @implements B503:0896:0005:20AE
 * @implements B503:089B:0008:2C18
 * @implements B503:089F:0004:F2B9
 * @implements B503:08A1:0002:DABA
 * @implements B503:08A3:0005:B085
 * @implements B503:08A8:0010:6CEF
 * @implements B503:08B8:0020:4B31
 * @implements B503:08D8:0003:2E57
 *
 * Called From: B503:07FD:0005:39A2
 */
void f__B503_088B_000B_B072()
{
l__088B:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_si);
	emu_xorw(&emu_si, emu_si);
	emu_push(emu_cs);
	emu_push(0x0896); f__B503_1343_003B_6432();
l__0896:
	emu_push(emu_cs); emu_push(0x089B); emu_cs = 0x29E8; emu_Input_Keyboard_NextKey();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { overlay(0x3503, 1); }
l__089B:
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax != 0) goto l__08A3;
l__089F:
	emu_xorw(&emu_ax, emu_ax);
l__08A1:
	goto l__08D8;
l__08A3:
	emu_push(emu_cs); emu_push(0x08A8); emu_cs = 0x29E8; f__29E8_07FA_0020_177A();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { overlay(0x3503, 1); }
l__08A8:
	emu_si = emu_ax;
	emu_cmpw(&emu_si, 0xC6);
	if (emu_si == 0xC6) goto l__08B8;
	emu_cmpw(&emu_si, 0xC7);
	if (emu_si == 0xC7) goto l__08B8;
	goto l__089F;
l__08B8:
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x7066);
	emu_addw(&emu_ax, 0xFFE8);
	emu_dx = 0x130;
	emu_imuluw(&emu_ax, emu_dx);
	emu_bx = emu_get_memory16(emu_ds, 0x00, 0x7064);
	emu_addw(&emu_bx, emu_ax);
	emu_es = emu_get_memory16(emu_ds, 0x00, 0x81D8);
	emu_addw(&emu_bx, emu_get_memory16(emu_ds, 0x00, 0x81D6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0xFFF8);
	emu_ax = (int8)emu_al;
	goto l__08A1;
l__08D8:
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B503_08DB_0014_ECA4()
 *
 * @name f__B503_08DB_0014_ECA4
 * @implements B503:08DB:0014:ECA4 ()
 * @implements B503:08EF:0016:7F7D
 * @implements B503:0905:0005:BC8E
 * @implements B503:090A:0016:7A72
 * @implements B503:0920:002D:DAC3
 * @implements B503:094D:0008:43E5
 * @implements B503:0955:001E:C363
 * @implements B503:095E:0015:2B3D
 * @implements B503:0973:0029:A120
 * @implements B503:099C:001C:7696
 * @implements B503:09B8:0011:F8CD
 * @implements B503:09C9:0014:80A1
 * @implements B503:09DD:0010:DAC0
 * @implements B503:09ED:0012:7B6D
 * @implements B503:09FF:0025:C6F5
 * @implements B503:0A24:0008:43E5
 * @implements B503:0A2C:0028:7281
 * @implements B503:0A54:002D:25DF
 * @implements B503:0A81:0013:847E
 * @implements B503:0A94:0005:7DAA
 * @implements B503:0A99:004B:3A88
 * @implements B503:0AE4:000E:6448
 * @implements B503:0AF2:0011:0D32
 * @implements B503:0AF5:000E:6476
 * @implements B503:0AFA:0009:4939
 * @implements B503:0B03:0005:6168
 * @implements B503:0B08:0022:7823
 * @implements B503:0B2A:000E:D91C
 * @implements B503:0B2D:000B:5BFC
 * @implements B503:0B38:0008:43E5
 * @implements B503:0B40:000E:6E77
 * @implements B503:0B4E:0005:FA3C
 * @implements B503:0B53:0015:24DA
 * @implements B503:0B5D:000B:D51E
 *
 * Called From: B503:085C:000E:13B7
 */
void f__B503_08DB_0014_ECA4()
{
l__08DB:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x16);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_di = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3A38));
	emu_push(emu_cs); emu_push(0x08EF); emu_cs = 0x34B8; overlay(0x34B8, 0); f__B4B8_110D_000D_FD5C();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { overlay(0x3503, 1); }
l__08EF:
	emu_pop(&emu_cx);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0xA);
	emu_dx = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_get_memory16(emu_ss, emu_bp, -0x12) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x14) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x16) = 0x0;
	emu_xorw(&emu_si, emu_si);
	goto l__095E;
l__0905:
	emu_push(emu_cs);
	emu_push(0x090A); f__B503_1343_003B_6432();
l__090A:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x0), 0x0);
	if (emu_get_memory16(emu_es, emu_bx, 0x0) == 0x0) goto l__0955;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x0), emu_di);
	if (emu_get_memory16(emu_es, emu_bx, 0x0) == emu_di) goto l__0955;
	emu_push(emu_cs); emu_push(0x0920); emu_cs = 0x2B6C; f__2B6C_0137_0020_C73F();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { overlay(0x3503, 1); }
l__0920:
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_ax = 0x10;
	emu_push(emu_ax);
	emu_ax = 0x10;
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x6));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x4));
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x16));
	emu_ax = 0x353F;
	emu_es = emu_ax;

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_es, 0x00, 0x6624);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_es, 0x00, 0x6626);
	emu_push(0x094D);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A6034F: f__22A6_034F_000C_5E0A(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0xB503; emu_last_ip = 0x0948; emu_last_length = 0x002D; emu_last_crc = 0xDAC3;
			emu_call();
			return;
	}
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { overlay(0x3503, 1); }
l__094D:
	emu_addw(&emu_sp, 0x10);
	emu_push(emu_cs); emu_push(0x0955); emu_cs = 0x2B6C; f__2B6C_0169_001E_6939();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { overlay(0x3503, 1); }
l__0955:
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x16), 0x10);
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x14), 0x8);
	emu_incw(&emu_si);
l__095E:
	emu_cmpw(&emu_si, 0x14);
	if ((int16)emu_si < (int16)0x14) goto l__0905;
	emu_push(emu_di);
	emu_push(emu_ds);
	emu_ax = 0x2B46;
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x4);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0973); emu_cs = 0x01F7; emu_String_sprintf();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { overlay(0x3503, 1); }
l__0973:
	emu_addw(&emu_sp, 0xA);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x81DC));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x81DA));
	emu_ax = 0x50;
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x9939;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x4);
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x2B5B;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x099C); emu_cs = 0x34FC; overlay(0x34FC, 0); emu_Ini_GetString();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { overlay(0x3503, 1); }
l__099C:
	emu_addw(&emu_sp, 0x16);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x8);
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x6);
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x2B55;
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x9939;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x09B8); emu_cs = 0x01F7; emu_String_sscanf();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { overlay(0x3503, 1); }
l__09B8:
	emu_addw(&emu_sp, 0x10);
	emu_push(emu_di);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x81E4));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x81E2));
	emu_push(emu_cs); emu_push(0x09C9); emu_cs = 0x2903; emu_Sprites_GetCSIP();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { overlay(0x3503, 1); }
l__09C9:
	emu_addw(&emu_sp, 0x6);
	emu_get_memory16(emu_ss, emu_bp, -0xE) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x10) = emu_ax;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_push(emu_cs); emu_push(0x09DD); emu_cs = 0x260F; emu_Sprite_GetWidth();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { overlay(0x3503, 1); }
l__09DD:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0xA) = emu_ax;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_push(emu_cs); emu_push(0x09ED); emu_cs = 0x260F; emu_Sprite_GetHeight();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { overlay(0x3503, 1); }
l__09ED:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0xC) = emu_ax;
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x8);
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x18);
	emu_push(emu_cs); emu_push(0x09FF); emu_cs = 0x2B6C; f__2B6C_0137_0020_C73F();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { overlay(0x3503, 1); }
l__09FF:
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_ax = 0x10;
	emu_push(emu_ax);
	emu_ax = 0x10;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_ax = 0x353F;
	emu_es = emu_ax;

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_es, 0x00, 0x6624);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_es, 0x00, 0x6626);
	emu_push(0x0A24);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A6034F: f__22A6_034F_000C_5E0A(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0xB503; emu_last_ip = 0x0A1F; emu_last_length = 0x0025; emu_last_crc = 0xC6F5;
			emu_call();
			return;
	}
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { overlay(0x3503, 1); }
l__0A24:
	emu_addw(&emu_sp, 0x10);
	emu_push(emu_cs); emu_push(0x0A2C); emu_cs = 0x2B6C; f__2B6C_0169_001E_6939();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { overlay(0x3503, 1); }
l__0A2C:
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_ax = 0x10;
	emu_push(emu_ax);
	emu_ax = 0xB0;
	emu_push(emu_ax);
	emu_ax = 0x10;
	emu_push(emu_ax);
	emu_ax = 0x10;
	emu_push(emu_ax);
	emu_ax = 0x353F;
	emu_es = emu_ax;

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_es, 0x00, 0x6624);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_es, 0x00, 0x6626);
	emu_push(0x0A54);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A6034F: f__22A6_034F_000C_5E0A(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0xB503; emu_last_ip = 0x0A4F; emu_last_length = 0x0028; emu_last_crc = 0x7281;
			emu_call();
			return;
	}
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { overlay(0x3503, 1); }
l__0A54:
	emu_addw(&emu_sp, 0x10);
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C44));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C42));
	emu_ax = 0x100;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = 0x10;
	emu_push(emu_ax);
	emu_ax = 0x10;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0A81); emu_cs = 0x2903; emu_GUI_DrawSprite();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { overlay(0x3503, 1); }
l__0A81:
	emu_addw(&emu_sp, 0x14);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0xA);
	emu_dx = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_get_memory16(emu_ss, emu_bp, -0x12) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x14) = emu_dx;
	emu_xorw(&emu_si, emu_si);
	goto l__0AFA;
l__0A94:
	emu_push(emu_cs);
	emu_push(0x0A99); f__B503_1343_003B_6432();
l__0A99:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x0), emu_di);
	if (emu_get_memory16(emu_es, emu_bx, 0x0) != emu_di) goto l__0AF5;
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C44));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C42));
	emu_ax = 0x100;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x6);
	emu_addw(&emu_ax, 0x10);
	emu_subw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x4);
	emu_addw(&emu_ax, 0x10);
	emu_subw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x2));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x81E0));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x81DE));
	emu_push(emu_cs); emu_push(0x0AE4); emu_cs = 0x2903; emu_Sprites_GetCSIP();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { overlay(0x3503, 1); }
l__0AE4:
	emu_addw(&emu_sp, 0x6);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0AF2); emu_cs = 0x2903; emu_GUI_DrawSprite();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { overlay(0x3503, 1); }
l__0AF2:
	emu_addw(&emu_sp, 0x14);
l__0AF5:
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x14), 0x8);
	emu_incw(&emu_si);
l__0AFA:
	emu_cmpw(&emu_si, 0x14);
	if ((int16)emu_si < (int16)0x14) goto l__0A94;
	emu_xorw(&emu_si, emu_si);
	goto l__0B5D;
l__0B03:
	emu_push(emu_cs); emu_push(0x0B08); emu_cs = 0x2B6C; f__2B6C_0137_0020_C73F();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { overlay(0x3503, 1); }
l__0B08:
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_ax = 0x10;
	emu_push(emu_ax);
	emu_testw(&emu_si, 0x1);
	if ((emu_si & 0x1) == 0) goto l__0B2A;
	emu_ax = 0xB0;
	goto l__0B2D;
l__0B2A:
	emu_ax = 0x10;
l__0B2D:
	emu_push(emu_ax);
	emu_ax = 0x353F;
	emu_es = emu_ax;

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_es, 0x00, 0x6624);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_es, 0x00, 0x6626);
	emu_push(0x0B38);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A6034F: f__22A6_034F_000C_5E0A(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0xB503; emu_last_ip = 0x0B33; emu_last_length = 0x000B; emu_last_crc = 0x5BFC;
			emu_call();
			return;
	}
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { overlay(0x3503, 1); }
l__0B38:
	emu_addw(&emu_sp, 0x10);
	emu_push(emu_cs); emu_push(0x0B40); emu_cs = 0x2B6C; f__2B6C_0169_001E_6939();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { overlay(0x3503, 1); }
l__0B40:
	emu_get_memory16(emu_ds, 0x00, 0x76B6) = 0x0;
	emu_get_memory16(emu_ds, 0x00, 0x76B4) = 0x14;
	goto l__0B53;
l__0B4E:
	emu_push(emu_cs);
	emu_push(0x0B53); f__B503_1343_003B_6432();
l__0B53:
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x76B4);
	emu_orw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x76B6));
	if (emu_ax != 0) goto l__0B4E;
	emu_incw(&emu_si);
l__0B5D:
	emu_cmpw(&emu_si, 0x4);
	if ((int16)emu_si < (int16)0x4) goto l__0B03;
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
 * Decompiled function f__B503_0B68_000D_957E()
 *
 * @name f__B503_0B68_000D_957E
 * @implements B503:0B68:000D:957E ()
 * @implements B503:0B75:0009:8B36
 * @implements B503:0B7E:000C:88DF
 * @implements B503:0B8A:000C:8BD0
 * @implements B503:0B96:000C:8DD5
 * @implements B503:0BA2:001D:2AE3
 * @implements B503:0BA5:001A:2779
 * @implements B503:0BBF:0018:8CAA
 * @implements B503:0BD7:0017:FDD1
 * @implements B503:0BDA:0014:ECE4
 * @implements B503:0BDF:000F:D554
 *
 * Called From: B503:0442:0009:B5CB
 */
void f__B503_0B68_000D_957E()
{
l__0B68:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x4);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_si = 0x1;
	goto l__0BA5;
l__0B75:
	emu_push(emu_si);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x0B7E); f__B503_0BEE_002A_B077();
l__0B7E:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_si);
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x0B8A); f__B503_0BEE_002A_B077();
l__0B8A:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_si);
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x0B96); f__B503_0BEE_002A_B077();
l__0B96:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_si);
	emu_ax = 0x4;
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x0BA2); f__B503_0BEE_002A_B077();
l__0BA2:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_incw(&emu_si);
l__0BA5:
	emu_cmpw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0x6));
	if ((int16)emu_si <= (int16)emu_get_memory16(emu_ss, emu_bp,  0x6)) goto l__0B75;
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x81D4);
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x81D2);
	emu_addw(&emu_dx, 0x2);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_dx;
	emu_di = 0x1;
	goto l__0BDF;
l__0BBF:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x0), 0xFFFF);
	if (emu_get_memory16(emu_es, emu_bx, 0x0) == 0xFFFF) goto l__0BDA;
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_di);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_push(emu_cs);
	emu_push(0x0BD7); f__B503_0DFF_0012_112D();
l__0BD7:
	emu_addw(&emu_sp, 0x6);
l__0BDA:
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x2);
	emu_incw(&emu_di);
l__0BDF:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x81D2));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x0), emu_di);
	if ((int16)emu_get_memory16(emu_es, emu_bx, 0x0) >= (int16)emu_di) goto l__0BBF;
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
 * Decompiled function f__B503_0BEE_002A_B077()
 *
 * @name f__B503_0BEE_002A_B077
 * @implements B503:0BEE:002A:B077 ()
 * @implements B503:0C18:0019:4C6C
 * @implements B503:0C31:0029:A705
 * @implements B503:0C5A:001E:FA7B
 * @implements B503:0C6A:000E:2E19
 * @implements B503:0C78:0017:B83B
 * @implements B503:0C8D:0002:C1BA
 * @implements B503:0C8F:0024:12AC
 * @implements B503:0C92:0021:EA5C
 * @implements B503:0CA4:000F:E66C
 * @implements B503:0CAD:0006:F7CE
 *
 * Called From: B503:0B7B:0009:8B36
 * Called From: B503:0B87:000C:88DF
 * Called From: B503:0B93:000C:8BD0
 * Called From: B503:0B9F:000C:8DD5
 */
void f__B503_0BEE_002A_B077()
{
l__0BEE:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x6C);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_si = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_ax = 0x3;
	emu_push(emu_ax);
	emu_ax = emu_si;
	emu_dx = 0x1E;
	emu_imuluw(&emu_ax, emu_dx);
	emu_bx = emu_ax;
	emu_push(emu_get_memory16(emu_ds, emu_bx, 0x37FA));
	emu_push(emu_get_memory16(emu_ds, emu_bx, 0x37F8));
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x8);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0C18); emu_cs = 0x01F7; emu_String_strncpy();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { overlay(0x3503, 1); }
l__0C18:
	emu_addw(&emu_sp, 0xA);
	emu_get_memory8(emu_ss, emu_bp, -0x5) = 0x0;
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_ds);
	emu_ax = 0x2B41;
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x9939;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0C31); emu_cs = 0x01F7; emu_String_sprintf();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { overlay(0x3503, 1); }
l__0C31:
	emu_addw(&emu_sp, 0xA);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x81DC));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x81DA));
	emu_ax = 0x63;
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x6C);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x8);
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x9939;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0C5A); emu_cs = 0x34FC; overlay(0x34FC, 0); emu_Ini_GetString();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { overlay(0x3503, 1); }
l__0C5A:
	emu_addw(&emu_sp, 0x16);
	emu_orw(&emu_ax, emu_dx);
	if (emu_ax == 0) goto l__0CAD;
	emu_movw(&emu_ax, emu_bp - 0x6D);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ss;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
l__0C6A:
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x0C78); emu_cs = 0x01F7; emu_String_ToInteger();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { overlay(0x3503, 1); }
l__0C78:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_di = emu_ax;
	emu_orw(&emu_di, emu_di);
	if (emu_di != 0) {
		emu_ax = emu_di;
		emu_shlw(&emu_ax, 0x1);
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x81D2));
		emu_addw(&emu_bx, emu_ax);
		emu_get_memory16(emu_es, emu_bx, 0x0) = emu_si;
	}
l__0C8D:
	goto l__0C92;
l__0C8F:
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x4));
l__0C92:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x0), 0x0);
	if (emu_get_memory8(emu_es, emu_bx, 0x0) != 0x0) {
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
		emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x0), 0x2C);
		if (emu_get_memory8(emu_es, emu_bx, 0x0) != 0x2C) goto l__0C8F;
	}
l__0CA4:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x0), 0x2C);
	if (emu_get_memory8(emu_es, emu_bx, 0x0) == 0x2C) goto l__0C6A;
l__0CAD:
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
 * Decompiled function f__B503_0CB3_001A_FEEE()
 *
 * @name f__B503_0CB3_001A_FEEE
 * @implements B503:0CB3:001A:FEEE ()
 * @implements B503:0CCD:0008:D6BB
 * @implements B503:0CD5:002E:9EAC
 * @implements B503:0D03:002D:828A
 * @implements B503:0D30:000A:9015
 * @implements B503:0D3A:0017:BC75
 * @implements B503:0D43:000E:7F53
 * @implements B503:0D51:0024:968B
 * @implements B503:0D75:0029:3F1C
 * @implements B503:0D9E:0011:3CD7
 * @implements B503:0DAF:000F:3925
 * @implements B503:0DB1:000D:8A41
 * @implements B503:0DBE:0005:856E
 * @implements B503:0DC1:0002:C1BA
 * @implements B503:0DC3:0021:7B5F
 * @implements B503:0DC6:001E:D498
 * @implements B503:0DD8:000C:5739
 * @implements B503:0DE4:0009:CB2D
 * @implements B503:0DE5:0008:CB0E
 * @implements B503:0DED:000A:E38E
 * @implements B503:0DF7:0008:AE7C
 *
 * Called From: B503:04CA:0013:3B9E
 */
void f__B503_0CB3_001A_FEEE()
{
l__0CB3:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x7E);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_ds);
	emu_ax = 0x2B41;
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x14);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0CCD); emu_cs = 0x01F7; emu_String_sprintf();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { overlay(0x3503, 1); }
l__0CCD:
	emu_addw(&emu_sp, 0xA);
	emu_xorw(&emu_si, emu_si);
	goto l__0DE5;
l__0CD5:
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x3A38);
	emu_addw(&emu_ax, emu_si);
	emu_bx = 0x6;
	emu_cwd();
	emu_idivw(&emu_ax, emu_bx);
	emu_get_memory16(emu_ss, emu_bp, -0x1A) = emu_dx;
	emu_ax = 0x3;
	emu_push(emu_ax);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x1A);
	emu_dx = 0x1E;
	emu_imuluw(&emu_ax, emu_dx);
	emu_bx = emu_ax;
	emu_push(emu_get_memory16(emu_ds, emu_bx, 0x37FA));
	emu_push(emu_get_memory16(emu_ds, emu_bx, 0x37F8));
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0xA);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0D03); emu_cs = 0x01F7; emu_String_strncpy();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { overlay(0x3503, 1); }
l__0D03:
	emu_addw(&emu_sp, 0xA);
	emu_get_memory8(emu_ss, emu_bp, -0x7) = 0x0;
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x81DC));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x81DA));
	emu_ax = 0x63;
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x7E);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0xA);
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x14);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0D30); emu_cs = 0x34FC; overlay(0x34FC, 0); emu_Ini_GetString();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { overlay(0x3503, 1); }
l__0D30:
	emu_addw(&emu_sp, 0x16);
	emu_orw(&emu_ax, emu_dx);
	if (emu_ax != 0) goto l__0D3A;
	goto l__0DE4;
l__0D3A:
	emu_movw(&emu_ax, emu_bp - 0x7F);
	emu_get_memory16(emu_ss, emu_bp, -0x16) = emu_ss;
	emu_get_memory16(emu_ss, emu_bp, -0x18) = emu_ax;
l__0D43:
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x18));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x16));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x18));
	emu_push(emu_cs); emu_push(0x0D51); emu_cs = 0x01F7; emu_String_ToInteger();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { overlay(0x3503, 1); }
l__0D51:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_di = emu_ax;
	emu_orw(&emu_di, emu_di);
	if (emu_di == 0) goto l__0DC1;
	emu_push(emu_di);
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x37B6);
	emu_cl = 0x2;
	emu_shlw(&emu_ax, emu_cl);
	emu_addw(&emu_ax, 0x2AF8);
	emu_push(emu_ds);
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x2B62;
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0xA);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0D75); emu_cs = 0x01F7; emu_String_sprintf();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { overlay(0x3503, 1); }
l__0D75:
	emu_addw(&emu_sp, 0xE);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x81DC));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x81DA));
	emu_ax = 0x50;
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x9939;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0xA);
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x14);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0D9E); emu_cs = 0x34FC; overlay(0x34FC, 0); emu_Ini_GetString();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { overlay(0x3503, 1); }
l__0D9E:
	emu_addw(&emu_sp, 0x16);
	emu_orw(&emu_ax, emu_dx);
	if (emu_ax == 0) goto l__0DB1;
	emu_push(emu_ds);
	emu_ax = 0x9939;
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x0DAF); f__B503_0F0C_0010_028B();
l__0DAF:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
l__0DB1:
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_push(emu_di);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x1A));
	emu_push(emu_cs);
	emu_push(0x0DBE); f__B503_0DFF_0012_112D();
l__0DBE:
	emu_addw(&emu_sp, 0x6);
l__0DC1:
	goto l__0DC6;
l__0DC3:
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x18));
l__0DC6:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x18));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x0), 0x0);
	if (emu_get_memory8(emu_es, emu_bx, 0x0) != 0x0) {
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x18));
		emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x0), 0x2C);
		if (emu_get_memory8(emu_es, emu_bx, 0x0) != 0x2C) goto l__0DC3;
	}
l__0DD8:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x18));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x0), 0x2C);
	if (emu_get_memory8(emu_es, emu_bx, 0x0) != 0x2C) goto l__0DE4;
	goto l__0D43;
l__0DE4:
	emu_incw(&emu_si);
l__0DE5:
	emu_cmpw(&emu_si, 0x6);
	if ((int16)emu_si >= (int16)0x6) goto l__0DED;
	goto l__0CD5;
l__0DED:
	emu_push(emu_ds);
	emu_ax = 0x2B1D;
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x0DF7); f__B503_0F0C_0010_028B();
l__0DF7:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
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
 * Decompiled function f__B503_0DFF_0012_112D()
 *
 * @name f__B503_0DFF_0012_112D
 * @implements B503:0DFF:0012:112D ()
 * @implements B503:0E11:0011:B034
 * @implements B503:0E22:0029:A120
 * @implements B503:0E4B:001C:7696
 * @implements B503:0E67:0011:F8C9
 * @implements B503:0E78:0039:5737
 * @implements B503:0EB1:0011:8F4C
 * @implements B503:0EC2:0008:3318
 * @implements B503:0ECA:0016:7A82
 * @implements B503:0ECD:0013:9A88
 * @implements B503:0EE0:000E:69BD
 * @implements B503:0EEE:0016:1B71
 * @implements B503:0F04:0008:4947
 * @implements B503:0F07:0005:8BCF
 *
 * Called From: B503:0BD4:0018:8CAA
 * Called From: B503:0DBB:000F:3925
 * Called From: B503:0DBB:000D:8A41
 */
void f__B503_0DFF_0012_112D()
{
l__0DFF:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0xC);
	emu_push(emu_si);
	emu_si = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x0E11); emu_cs = 0x34B8; overlay(0x34B8, 0); f__B4B8_110D_000D_FD5C();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { overlay(0x3503, 1); }
l__0E11:
	emu_pop(&emu_cx);
	emu_push(emu_si);
	emu_push(emu_ds);
	emu_ax = 0x2B46;
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x4);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0E22); emu_cs = 0x01F7; emu_String_sprintf();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { overlay(0x3503, 1); }
l__0E22:
	emu_addw(&emu_sp, 0xA);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x81DC));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x81DA));
	emu_ax = 0x50;
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x9939;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x4);
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x2B5B;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0E4B); emu_cs = 0x34FC; overlay(0x34FC, 0); emu_Ini_GetString();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { overlay(0x3503, 1); }
l__0E4B:
	emu_addw(&emu_sp, 0x16);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x8);
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x6);
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x2B55;
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x9939;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0E67); emu_cs = 0x01F7; emu_String_sscanf();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { overlay(0x3503, 1); }
l__0E67:
	emu_addw(&emu_sp, 0x10);
	emu_push(emu_si);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x81E4));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x81E2));
	emu_push(emu_cs); emu_push(0x0E78); emu_cs = 0x2903; emu_Sprites_GetCSIP();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { overlay(0x3503, 1); }
l__0E78:
	emu_addw(&emu_sp, 0x6);
	emu_get_memory16(emu_ss, emu_bp, -0xA) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0xC) = emu_ax;
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C44));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C42));
	emu_ax = 0x100;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x8);
	emu_addw(&emu_ax, 0x18);
	emu_push(emu_ax);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x6);
	emu_addw(&emu_ax, 0x8);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_ax = 0x3;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0EB1); emu_cs = 0x2903; emu_GUI_DrawSprite();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { overlay(0x3503, 1); }
l__0EB1:
	emu_addw(&emu_sp, 0x14);
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp,  0xA), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp,  0xA) == 0x0) goto l__0F07;
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x0EC2); f__B503_13C2_0008_C4BB();
l__0EC2:
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax == 0) goto l__0ECA;
	emu_xorw(&emu_ax, emu_ax);
	goto l__0ECD;
l__0ECA:
	emu_ax = 0x1;
l__0ECD:
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_cs); emu_push(0x0EE0); emu_cs = 0x260F; emu_Sprite_GetHeight();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { overlay(0x3503, 1); }
l__0EE0:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_cs); emu_push(0x0EEE); emu_cs = 0x260F; emu_Sprite_GetWidth();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { overlay(0x3503, 1); }
l__0EEE:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_ax);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x8);
	emu_addw(&emu_ax, 0x18);
	emu_push(emu_ax);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x6);
	emu_addw(&emu_ax, 0x8);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0F04); emu_cs = 0x3488; overlay(0x3488, 0); f__B488_0000_0027_45A9();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { overlay(0x3503, 1); }
l__0F04:
	emu_addw(&emu_sp, 0x10);
l__0F07:
	emu_pop(&emu_si);
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B503_0F0C_0010_028B()
 *
 * @name f__B503_0F0C_0010_028B
 * @implements B503:0F0C:0010:028B ()
 * @implements B503:0F1C:0028:4A19
 * @implements B503:0F44:0015:E236
 * @implements B503:0F59:001D:21BD
 * @implements B503:0F76:0021:0C50
 * @implements B503:0F97:0005:85EE
 * @implements B503:0F9C:0020:EDC6
 * @implements B503:0FB7:0005:7741
 * @implements B503:0FBC:0021:44B2
 * @implements B503:0FDD:0011:7DB2
 * @implements B503:0FEE:000E:EEE2
 * @implements B503:0FFC:0027:CFE0
 * @implements B503:1000:0023:2C5B
 * @implements B503:1001:0022:259B
 * @implements B503:1023:0006:EFCE
 *
 * Called From: B503:02E7:0008:662D
 * Called From: B503:0385:0008:E584
 * Called From: B503:03EB:0008:65A2
 * Called From: B503:04EA:0008:2522
 * Called From: B503:084E:000C:45BE
 * Called From: B503:0DAC:0011:3CD7
 * Called From: B503:0DF4:000A:E38E
 */
void f__B503_0F0C_0010_028B()
{
l__0F0C:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x2);
	emu_push(emu_si);
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0F1C); emu_cs = 0x2598; f__2598_0000_0017_EB80();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { overlay(0x3503, 1); }
l__0F1C:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ax;
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = 0xE;
	emu_push(emu_ax);
	emu_ax = 0x18;
	emu_push(emu_ax);
	emu_ax = 0xBA;
	emu_push(emu_ax);
	emu_ax = 0x8;
	emu_push(emu_ax);
	emu_ax = 0xA5;
	emu_push(emu_ax);
	emu_ax = 0x8;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0F44); emu_cs = 0x24D0; f__24D0_000D_0039_C17D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { overlay(0x3503, 1); }
l__0F44:
	emu_addw(&emu_sp, 0x10);
	emu_ax = 0xBA;
	emu_push(emu_ax);
	emu_ax = 0x40;
	emu_push(emu_ax);
	emu_ax = 0x353F;
	emu_es = emu_ax;

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_es, 0x00, 0x666C);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_es, 0x00, 0x666E);
	emu_push(0x0F59);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A60E34: f__22A6_0E34_002B_E39A(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0xB503; emu_last_ip = 0x0F54; emu_last_length = 0x0015; emu_last_crc = 0xE236;
			emu_call();
			return;
	}
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { overlay(0x3503, 1); }
l__0F59:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_ax);
	emu_ax = 0xB9;
	emu_push(emu_ax);
	emu_ax = 0xFF;
	emu_push(emu_ax);
	emu_ax = 0xAC;
	emu_push(emu_ax);
	emu_ax = 0x40;
	emu_push(emu_ax);
	emu_ax = 0x353F;
	emu_es = emu_ax;

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_es, 0x00, 0x6668);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_es, 0x00, 0x666A);
	emu_push(0x0F76);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A60D31: emu_GUI_DrawFilledRectangle(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0xB503; emu_last_ip = 0x0F71; emu_last_length = 0x001D; emu_last_crc = 0x21BD;
			emu_call();
			return;
	}
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { overlay(0x3503, 1); }
l__0F76:
	emu_addw(&emu_sp, 0xA);
	emu_ax = 0x12;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = 0xC;
	emu_push(emu_ax);
	emu_ax = 0xAF;
	emu_push(emu_ax);
	emu_ax = 0x40;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x0F97); emu_cs = 0x10E4; emu_GUI_DrawText_Wrapper();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { overlay(0x3503, 1); }
l__0F97:
	emu_addw(&emu_sp, 0xE);
	goto l__0F9C;
l__0F9C:
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x76AE);
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x76AC);
	emu_addw(&emu_dx, 0x5A);
	emu_adcw(&emu_ax, 0x0);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x2B0E));
	if (emu_ax < emu_get_memory16(emu_ds, 0x00, 0x2B0E)) goto l__0F9C;
	if (emu_ax == emu_get_memory16(emu_ds, 0x00, 0x2B0E)) {
		emu_cmpw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x2B0C));
		if (emu_dx < emu_get_memory16(emu_ds, 0x00, 0x2B0C)) goto l__0F9C;
	}
l__0FB7:
	emu_si = 0xB9;
	goto l__1001;
l__0FBC:
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_ax = 0xE;
	emu_push(emu_ax);
	emu_ax = 0x18;
	emu_push(emu_ax);
	emu_ax = 0xA5;
	emu_push(emu_ax);
	emu_ax = 0x8;
	emu_push(emu_ax);
	emu_push(emu_si);
	emu_ax = 0x8;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0FDD); emu_cs = 0x24D0; f__24D0_000D_0039_C17D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { overlay(0x3503, 1); }
l__0FDD:
	emu_addw(&emu_sp, 0x10);
	emu_get_memory16(emu_ds, 0x00, 0x76B6) = 0x0;
	emu_get_memory16(emu_ds, 0x00, 0x76B4) = 0x3;
	goto l__0FEE;
l__0FEE:
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x76B4);
	emu_orw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x76B6));
	if (emu_ax == 0) goto l__1000;
	emu_push(emu_cs);
	emu_push(0x0FFC); f__B503_13C2_0008_C4BB();
l__0FFC:
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax == 0) goto l__0FEE;
l__1000:
	emu_decw(&emu_si);
l__1001:
	emu_cmpw(&emu_si, 0xAC);
	if ((int16)emu_si > (int16)0xAC) goto l__0FBC;
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x76AE);
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x76AC);
	emu_addw(&emu_dx, 0x5A);
	emu_adcw(&emu_ax, 0x0);
	emu_get_memory16(emu_ds, 0x00, 0x2B0E) = emu_ax;
	emu_get_memory16(emu_ds, 0x00, 0x2B0C) = emu_dx;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_cs); emu_push(0x1023); emu_cs = 0x2598; f__2598_0000_0017_EB80();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { overlay(0x3503, 1); }
l__1023:
	emu_pop(&emu_cx);
	emu_pop(&emu_si);
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function emu_CPS_LoadRegionClick()
 *
 * @name emu_CPS_LoadRegionClick
 * @implements B503:1029:000F:8100 ()
 * @implements B503:1038:0026:D203
 * @implements B503:105E:000E:E9C5
 * @implements B503:106C:0017:539E
 * @implements B503:1083:001F:216D
 * @implements B503:10A2:0018:95A5
 * @implements B503:10BA:001F:94FC
 * @implements B503:10D9:0018:95A5
 * @implements B503:10F1:0031:8BDC
 * @implements B503:1122:0013:4363
 * @implements B503:1135:0018:95A5
 * @implements B503:114D:0014:2120
 * @implements B503:1161:000E:6657
 *
 * Called From: B503:0324:0011:E66D
 * Called From: B503:03F4:0005:7F8C
 */
void emu_CPS_LoadRegionClick()
{
l__1029:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x8);
	emu_ax = 0x5;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1038); emu_cs = 0x252E; emu_Memory_GetBlock1();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { overlay(0x3503, 1); }
l__1038:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_get_memory16(emu_ds, 0x00, 0x81D8) = emu_dx;
	emu_get_memory16(emu_ds, 0x00, 0x81D6) = emu_ax;
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_ax = 0x5;
	emu_push(emu_ax);
	emu_ax = 0x5;
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x2B6A;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x105E); emu_cs = 0x253D; emu_Sprites_LoadCPSFile();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { overlay(0x3503, 1); }
l__105E:
	emu_addw(&emu_sp, 0xC);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs);
	emu_push(0x106C); f__B503_116F_001B_4CA0();
l__106C:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_addw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1083); emu_cs = 0x2B0E; emu_Tools_GetSmallestIP();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { overlay(0x3503, 1); }
l__1083:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_get_memory16(emu_ds, 0x00, 0x81E4) = emu_dx;
	emu_get_memory16(emu_ds, 0x00, 0x81E2) = emu_ax;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_ds);
	emu_ax = 0x2B75;
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x10A2); f__B503_11BE_0016_067A();
l__10A2:
	emu_addw(&emu_sp, 0x8);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_addw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x10BA); emu_cs = 0x2B0E; emu_Tools_GetSmallestIP();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { overlay(0x3503, 1); }
l__10BA:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_get_memory16(emu_ds, 0x00, 0x81E0) = emu_dx;
	emu_get_memory16(emu_ds, 0x00, 0x81DE) = emu_ax;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_ds);
	emu_ax = 0x2B80;
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x10D9); f__B503_11BE_0016_067A();
l__10D9:
	emu_addw(&emu_sp, 0x8);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_addw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x10F1); emu_cs = 0x2B0E; emu_Tools_GetSmallestIP();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { overlay(0x3503, 1); }
l__10F1:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_get_memory16(emu_ds, 0x00, 0x81DC) = emu_dx;
	emu_get_memory16(emu_ds, 0x00, 0x81DA) = emu_ax;
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x3A38);
	emu_dx = 0x1E;
	emu_imuluw(&emu_ax, emu_dx);
	emu_bx = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, emu_bx, 0x37F8));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x0);
	emu_ax = (int8)emu_al;
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x2B8B;
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x9939;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1122); emu_cs = 0x01F7; emu_String_sprintf();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { overlay(0x3503, 1); }
l__1122:
	emu_addw(&emu_sp, 0xA);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_ds);
	emu_ax = 0x9939;
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x1135); f__B503_11BE_0016_067A();
l__1135:
	emu_addw(&emu_sp, 0x8);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_addw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x114D); emu_cs = 0x2B0E; emu_Tools_GetSmallestIP();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { overlay(0x3503, 1); }
l__114D:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_get_memory16(emu_ds, 0x00, 0x81D4) = emu_dx;
	emu_get_memory16(emu_ds, 0x00, 0x81D2) = emu_ax;
	emu_push(emu_cs);
	emu_push(0x1161); f__B503_122D_002D_E562();
l__1161:
	emu_shlw(&emu_ax, 0x1);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = 0x0;
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_ax;
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B503_116F_001B_4CA0()
 *
 * @name f__B503_116F_001B_4CA0
 * @implements B503:116F:001B:4CA0 ()
 * @implements B503:118A:0015:612E
 * @implements B503:119F:001A:722E
 * @implements B503:11AD:000C:9246
 * @implements B503:11B9:0005:8BCF
 *
 * Called From: B503:1069:000E:E9C5
 */
void f__B503_116F_001B_4CA0()
{
l__116F:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x4);
	emu_push(emu_si);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_dx = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_addw(&emu_dx, 0x1E08);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_dx;
	emu_xorw(&emu_si, emu_si);
	goto l__11AD;
l__118A:
	emu_ax = 0x130;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x119F); emu_cs = 0x01F7; emu_Tools_Memcopy();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { overlay(0x3503, 1); }
l__119F:
	emu_addw(&emu_sp, 0xA);
	emu_addw(&emu_get_memory16(emu_ss, emu_bp,  0x6), 0x130);
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x140);
	emu_incw(&emu_si);
l__11AD:
	emu_cmpw(&emu_si, 0x78);
	if ((int16)emu_si < (int16)0x78) goto l__118A;
	emu_xorw(&emu_dx, emu_dx);
	emu_ax = 0x8E80;
	goto l__11B9;
l__11B9:
	emu_pop(&emu_si);
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B503_11BE_0016_067A()
 *
 * @name f__B503_11BE_0016_067A
 * @implements B503:11BE:0016:067A ()
 * @implements B503:11D4:0015:4655
 * @implements B503:11E9:0018:61C0
 * @implements B503:1201:0015:49AC
 * @implements B503:1216:0009:2605
 * @implements B503:121F:0009:4865
 * @implements B503:1228:0005:8BCF
 *
 * Called From: B503:109F:001F:216D
 * Called From: B503:10D6:001F:94FC
 * Called From: B503:1132:0013:4363
 */
void f__B503_11BE_0016_067A()
{
l__11BE:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x4);
	emu_push(emu_si);
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x11D4); emu_cs = 0x1FB5; emu_File_Open();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { overlay(0x3503, 1); }
l__11D4:
	emu_addw(&emu_sp, 0x6);
	emu_si = emu_ax;
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x11E9); emu_cs = 0x1FB5; emu_File_Seek();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { overlay(0x3503, 1); }
l__11E9:
	emu_addw(&emu_sp, 0x8);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x1201); emu_cs = 0x1FB5; emu_File_Seek();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { overlay(0x3503, 1); }
l__1201:
	emu_addw(&emu_sp, 0x8);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x1216); emu_cs = 0x1FB5; emu_File_Read();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { overlay(0x3503, 1); }
l__1216:
	emu_addw(&emu_sp, 0xA);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x121F); emu_cs = 0x1FB5; emu_File_Close();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { overlay(0x3503, 1); }
l__121F:
	emu_pop(&emu_cx);
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x2);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x4);
	goto l__1228;
l__1228:
	emu_pop(&emu_si);
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B503_122D_002D_E562()
 *
 * @name f__B503_122D_002D_E562
 * @implements B503:122D:002D:E562 ()
 * @implements B503:125A:0017:1F8F
 * @implements B503:1271:001E:2E6F
 * @implements B503:128F:0018:4412
 * @implements B503:129C:000B:0623
 * @implements B503:12A7:0005:8BCF
 *
 * Called From: B503:115E:0014:2120
 */
void f__B503_122D_002D_E562()
{
l__122D:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x6);
	emu_push(emu_si);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x81DC));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x81DA));
	emu_ax = 0x50;
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x9939;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_ds);
	emu_ax = 0x2B9D;
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x2B98;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x125A); emu_cs = 0x34FC; overlay(0x34FC, 0); emu_Ini_GetString();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { overlay(0x3503, 1); }
l__125A:
	emu_addw(&emu_sp, 0x16);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x2);
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x2B46;
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x9939;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1271); emu_cs = 0x01F7; emu_String_sscanf();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { overlay(0x3503, 1); }
l__1271:
	emu_addw(&emu_sp, 0xC);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x81D2));
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x2);
	emu_get_memory16(emu_es, emu_bx, 0x0) = emu_ax;
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x81D4);
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x81D2);
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_dx;
	emu_xorw(&emu_si, emu_si);
	goto l__129C;
l__128F:
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x2);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_get_memory16(emu_es, emu_bx, 0x0) = 0xFFFF;
	emu_incw(&emu_si);
l__129C:
	emu_cmpw(&emu_si, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if ((int16)emu_si < (int16)emu_get_memory16(emu_ss, emu_bp, -0x2)) goto l__128F;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x2);
	emu_incw(&emu_ax);
	goto l__12A7;
l__12A7:
	emu_pop(&emu_si);
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B503_12AC_0013_473F()
 *
 * @name f__B503_12AC_0013_473F
 * @implements B503:12AC:0013:473F ()
 * @implements B503:12BF:001B:3D87
 * @implements B503:12DA:0028:A1F7
 * @implements B503:12F7:000B:8CC1
 *
 * Called From: B503:0747:000E:15CD
 * Called From: B503:0842:0010:3623
 */
void f__B503_12AC_0013_473F()
{
l__12AC:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x4);
	emu_xorw(&emu_dx, emu_dx);
	emu_ax = 0x1;
	emu_cl = emu_get_memory8(emu_ss, emu_bp,  0x6);
	emu_push(emu_cs); emu_push(0x12BF); emu_cs = 0x01F7; emu_Tools_Shld();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { overlay(0x3503, 1); }
l__12BF:
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp,  0x8), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp,  0x8) == 0x0) goto l__12DA;
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x2AF6);
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x2AF4);
	emu_orw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	goto l__12F7;
l__12DA:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x2);
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_notw(&emu_dx, emu_dx);
	emu_notw(&emu_ax, emu_ax);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_dx;
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x2AF6);
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x2AF4);
	emu_andw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_andw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
l__12F7:
	emu_get_memory16(emu_ds, 0x00, 0x2AF6) = emu_ax;
	emu_get_memory16(emu_ds, 0x00, 0x2AF4) = emu_dx;
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B503_1302_0013_473F()
 *
 * @name f__B503_1302_0013_473F
 * @implements B503:1302:0013:473F ()
 * @implements B503:1315:0026:0E6A
 * @implements B503:133B:0004:E839
 * @implements B503:133D:0002:C03A
 * @implements B503:133F:0004:893F
 *
 * Called From: B503:0665:000E:3033
 * Called From: B503:076E:000B:D03B
 */
void f__B503_1302_0013_473F()
{
l__1302:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x4);
	emu_xorw(&emu_dx, emu_dx);
	emu_ax = 0x1;
	emu_cl = emu_get_memory8(emu_ss, emu_bp,  0x6);
	emu_push(emu_cs); emu_push(0x1315); emu_cs = 0x01F7; emu_Tools_Shld();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { overlay(0x3503, 1); }
l__1315:
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x2AF6);
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x2AF4);
	emu_andw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_andw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_dx;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_ax == 0) goto l__133B;
	emu_ax = 0x1;
	goto l__133D;
l__133B:
	emu_xorw(&emu_ax, emu_ax);
l__133D:
	goto l__133F;
l__133F:
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B503_1343_003B_6432()
 *
 * @name f__B503_1343_003B_6432
 * @implements B503:1343:003B:6432 ()
 * @implements B503:135B:0023:539C
 * @implements B503:137E:0027:FA79
 * @implements B503:1384:0021:5375
 * @implements B503:13A5:0018:11EB
 * @implements B503:13BD:0005:6083
 * @implements B503:13C0:0002:2597
 *
 * Called From: B503:0816:0005:7C0A
 * Called From: B503:0893:000B:B072
 * Called From: B503:0907:0005:BC8E
 * Called From: B503:0A96:0005:7DAA
 * Called From: B503:0B50:0005:FA3C
 */
void f__B503_1343_003B_6432()
{
l__1343:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x81B8);
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x81B6);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x76AE));
	if ((int16)emu_ax > (int16)emu_get_memory16(emu_ds, 0x00, 0x76AE)) goto l__13C0;
	if ((int16)emu_ax >= (int16)emu_get_memory16(emu_ds, 0x00, 0x76AE)) {
		emu_cmpw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x76AC));
		if (emu_dx >= emu_get_memory16(emu_ds, 0x00, 0x76AC)) goto l__13C0;
	}
l__135B:
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x76AE);
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x76AC);
	emu_addw(&emu_dx, 0x7);
	emu_adcw(&emu_ax, 0x0);
	emu_get_memory16(emu_ds, 0x00, 0x81B8) = emu_ax;
	emu_get_memory16(emu_ds, 0x00, 0x81B6) = emu_dx;
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x2B10);
	emu_incw(&emu_ax);
	emu_cmpw(&emu_ax, 0x4);
	if ((int16)emu_ax >= (int16)0x4) goto l__137E;
	emu_incw(&emu_get_memory16(emu_ds, 0x00, 0x2B10));
	goto l__1384;
l__137E:
	emu_get_memory16(emu_ds, 0x00, 0x2B10) = 0x0;
l__1384:
	emu_ax = 0xC;
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x2B10);
	emu_dx = 0x3;
	emu_imuluw(&emu_ax, emu_dx);
	emu_addw(&emu_ax, 0x81BA);
	emu_push(emu_ax);
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x3C32);
	emu_addw(&emu_ax, 0x2F1);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C34));
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x13A5); emu_cs = 0x01F7; emu_Tools_Memcopy();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { overlay(0x3503, 1); }
l__13A5:
	emu_addw(&emu_sp, 0xA);
	emu_ax = 0xFE;
	emu_push(emu_ax);
	emu_ax = 0xFB;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C34));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C32));
	emu_push(emu_cs); emu_push(0x13BD); emu_cs = 0x2BA5; f__2BA5_0006_009C_A3D1();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { overlay(0x3503, 1); }
l__13BD:
	emu_addw(&emu_sp, 0x8);
l__13C0:
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B503_13C2_0008_C4BB()
 *
 * @name f__B503_13C2_0008_C4BB
 * @implements B503:13C2:0008:C4BB ()
 * @implements B503:13CA:0009:9868
 * @implements B503:13D3:0015:3017
 * @implements B503:13E8:0005:9519
 * @implements B503:13ED:0002:2597
 *
 * Called From: B503:0334:000E:A771
 * Called From: B503:038F:000A:1561
 * Called From: B503:03D6:000E:28E9
 * Called From: B503:0448:0006:5A1C
 * Called From: B503:0EBF:0011:8F4C
 * Called From: B503:0FF9:000E:EEE2
 */
void f__B503_13C2_0008_C4BB()
{
l__13C2:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_cs); emu_push(0x13CA); emu_cs = 0x29E8; emu_Input_Keyboard_NextKey();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { overlay(0x3503, 1); }
l__13CA:
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax == 0) goto l__13E8;
	emu_push(emu_cs); emu_push(0x13D3); emu_cs = 0x29E8; f__29E8_07FA_0020_177A();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { overlay(0x3503, 1); }
l__13D3:
	emu_cmpw(&emu_ax, 0x1B);
	if (emu_ax == 0x1B) {
		emu_ax = emu_get_memory16(emu_ds, 0x00, 0x81B4);
		emu_negw(&emu_ax, emu_ax);
		emu_sbbw(&emu_ax, emu_ax);
		emu_incw(&emu_ax);
		emu_get_memory16(emu_ds, 0x00, 0x81B4) = emu_ax;
		emu_push(emu_cs); emu_push(0x13E8); emu_cs = 0x29E8; emu_Input_History_Clear();
		/* Check if this overlay should be reloaded */
		if (emu_cs == 0x3503) { overlay(0x3503, 1); }
	}
l__13E8:
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x81B4);
	goto l__13ED;
l__13ED:
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

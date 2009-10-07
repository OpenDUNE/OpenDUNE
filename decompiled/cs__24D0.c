/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__24D0_000D_0039_C17D()
 *
 * @name f__24D0_000D_0039_C17D
 * @implements 24D0:000D:0039:C17D ()
 *
 * Called From: 07D4:016A:0006:86E5
 * Called From: 07D4:016A:0008:B465
 * Called From: 07D4:135C:002A:03E1
 * Called From: 07D4:135C:0028:958D
 * Called From: 07D4:153F:0028:94C8
 * Called From: 07D4:153F:001E:A3D1
 * Called From: 07D4:1612:0025:4D45
 * Called From: 0F78:0194:0024:4F8D
 * Called From: 10E4:0986:0028:2D48
 * Called From: 10E4:0B78:0029:58EB
 * Called From: 10E4:1B69:0025:F554
 * Called From: 10E4:2235:0020:001D
 * Called From: 2C17:0199:0037:421C
 * Called From: 2C17:0199:005E:FAF1
 * Called From: B495:0B90:0024:BED1
 * Called From: B495:0FA4:0024:33C2
 * Called From: B495:106F:0025:696E
 * Called From: B495:1134:0024:2AF0
 * Called From: B495:131D:004C:6411
 * Called From: B495:1340:0023:03CB
 * Called From: B495:152B:0020:001D
 * Called From: B4B8:1FCA:0021:2C9D
 * Called From: B4BE:02A0:0023:174C
 * Called From: B4BE:0341:0023:174C
 * Called From: B4DA:0D19:0024:359C
 * Called From: B4DA:0D8B:0024:8C51
 * Called From: B4DA:0DC7:0022:BFB5
 * Called From: B4DA:0E90:0023:F42C
 * Called From: B4DA:0FF2:0025:F417
 * Called From: B4DA:105E:0025:F417
 * Called From: B4DA:11B5:0020:001D
 * Called From: B4DA:1357:0025:F417
 * Called From: B4DA:1406:002C:2B53
 * Called From: B4DA:150C:002C:97CE
 * Called From: B4DA:17B0:0023:3E89
 * Called From: B4DA:17DA:0022:549D
 * Called From: B4DA:1846:0023:F42C
 * Called From: B4DA:1884:0021:A4DB
 * Called From: B4E0:00AF:0020:001D
 * Called From: B4E0:0A69:0024:F6D9
 * Called From: B4F2:0D36:0025:F411
 * Called From: B4F2:10E0:002A:1D60
 * Called From: B503:01A2:0023:CE81
 * Called From: B503:01C6:0024:5AA3
 * Called From: B503:0265:0020:007D
 * Called From: B503:04B5:0023:DE89
 * Called From: B503:0F3F:0028:4A19
 * Called From: B503:0FD8:0021:44B2
 * Called From: B511:0F13:0020:001D
 * Called From: B511:110C:0020:001D
 * Called From: B511:13B3:0020:F01E
 * Called From: B511:13DF:002C:FE1E
 * Called From: B518:01D5:0021:2C9D
 * Called From: B518:0693:0026:840E
 * Called From: B518:0B96:0032:05DD
 * Called From: B518:0B96:0021:F9AC
 * Called From: B518:0BCC:0022:6D86
 * Called From: B518:0BCC:0025:1972
 * Called From: B518:14B3:0024:CF61
 */
void f__24D0_000D_0039_C17D()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_di, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0xE), 0x28);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__24D0_0023_0023_6DA5(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0xE), 0x28);
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp,  0x10), 0xC8);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__24D0_002F_0017_14B6(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0x10), 0xC8);
	emu_orw(&emu_si, emu_si);
	if (!(emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x003A; emu_last_cs = 0x24D0; emu_last_ip = 0x0031; emu_last_length = 0x0039; emu_last_crc = 0xC17D; emu_call(); return; }
	emu_subw(&emu_di, emu_si);
	emu_addw(&emu_get_memory16(emu_ss, emu_bp,  0xE), emu_si);
	emu_xorw(&emu_si, emu_si);
	emu_cmpws(&emu_si, 0x28);
	if (!(emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x0044; emu_last_cs = 0x24D0; emu_last_ip = 0x003D; emu_last_length = 0x0039; emu_last_crc = 0xC17D; emu_call(); return; }
	emu_cmpws(&emu_di, 0x28);
	if ((emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x0046; emu_last_cs = 0x24D0; emu_last_ip = 0x0042; emu_last_length = 0x0039; emu_last_crc = 0xC17D; emu_call(); return; }
	/* Unresolved jump */ emu_ip = 0x00A0; emu_last_cs = 0x24D0; emu_last_ip = 0x0044; emu_last_length = 0x0039; emu_last_crc = 0xC17D; emu_call();
}

/**
 * Decompiled function f__24D0_0023_0023_6DA5()
 *
 * @name f__24D0_0023_0023_6DA5
 * @implements 24D0:0023:0023:6DA5 ()
 *
 * Called From: 24D0:001C:0039:C17D
 */
void f__24D0_0023_0023_6DA5()
{
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp,  0x10), 0xC8);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__24D0_002F_0017_14B6(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0x10), 0xC8);
	emu_orw(&emu_si, emu_si);
	if (!(emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x003A; emu_last_cs = 0x24D0; emu_last_ip = 0x0031; emu_last_length = 0x0023; emu_last_crc = 0x6DA5; emu_call(); return; }
	emu_subw(&emu_di, emu_si);
	emu_addw(&emu_get_memory16(emu_ss, emu_bp,  0xE), emu_si);
	emu_xorw(&emu_si, emu_si);
	emu_cmpws(&emu_si, 0x28);
	if (!(emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x0044; emu_last_cs = 0x24D0; emu_last_ip = 0x003D; emu_last_length = 0x0023; emu_last_crc = 0x6DA5; emu_call(); return; }
	emu_cmpws(&emu_di, 0x28);
	if ((emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x0046; emu_last_cs = 0x24D0; emu_last_ip = 0x0042; emu_last_length = 0x0023; emu_last_crc = 0x6DA5; emu_call(); return; }
	/* Unresolved jump */ emu_ip = 0x00A0; emu_last_cs = 0x24D0; emu_last_ip = 0x0044; emu_last_length = 0x0023; emu_last_crc = 0x6DA5; emu_call();
}

/**
 * Decompiled function f__24D0_002F_0017_14B6()
 *
 * @name f__24D0_002F_0017_14B6
 * @implements 24D0:002F:0017:14B6 ()
 *
 * Called From: 24D0:0028:0023:6DA5
 * Called From: 24D0:0028:0039:C17D
 */
void f__24D0_002F_0017_14B6()
{
	emu_orw(&emu_si, emu_si);
	if (!(emu_flags.sf != emu_flags.of)) { f__24D0_003A_000C_9629(); return; }
	emu_subw(&emu_di, emu_si);
	emu_addw(&emu_get_memory16(emu_ss, emu_bp,  0xE), emu_si);
	emu_xorw(&emu_si, emu_si);
	emu_cmpws(&emu_si, 0x28);
	if (!(emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x0044; emu_last_cs = 0x24D0; emu_last_ip = 0x003D; emu_last_length = 0x0017; emu_last_crc = 0x14B6; emu_call(); return; }
	emu_cmpws(&emu_di, 0x28);
	if ((emu_flags.sf != emu_flags.of)) { f__24D0_0046_0057_54FF(); return; }
	/* Unresolved jump */ emu_ip = 0x00A0; emu_last_cs = 0x24D0; emu_last_ip = 0x0044; emu_last_length = 0x0017; emu_last_crc = 0x14B6; emu_call();
}

/**
 * Decompiled function f__24D0_003A_000C_9629()
 *
 * @name f__24D0_003A_000C_9629
 * @implements 24D0:003A:000C:9629 ()
 *
 * Called From: 24D0:0031:0017:14B6
 */
void f__24D0_003A_000C_9629()
{
	emu_cmpws(&emu_si, 0x28);
	if (!(emu_flags.sf != emu_flags.of)) { f__24D0_0044_0002_ED3A(); return; }
	emu_cmpws(&emu_di, 0x28);
	if ((emu_flags.sf != emu_flags.of)) { f__24D0_0046_0057_54FF(); return; }
	f__24D0_00A0_0004_DE52(); return;
}

/**
 * Decompiled function f__24D0_0044_0002_ED3A()
 *
 * @name f__24D0_0044_0002_ED3A
 * @implements 24D0:0044:0002:ED3A ()
 *
 * Called From: 24D0:003D:000C:9629
 */
void f__24D0_0044_0002_ED3A()
{
	f__24D0_00A0_0004_DE52(); return;
}

/**
 * Decompiled function f__24D0_0046_0057_54FF()
 *
 * @name f__24D0_0046_0057_54FF
 * @implements 24D0:0046:0057:54FF ()
 *
 * Called From: 24D0:0042:000C:9629
 * Called From: 24D0:0042:0017:14B6
 */
void f__24D0_0046_0057_54FF()
{
	emu_orw(&emu_di, emu_di);
	if (!(emu_flags.sf != emu_flags.of)) { f__24D0_0051_004C_FA6A(); return; }
	emu_subw(&emu_si, emu_di);
	emu_addw(&emu_get_memory16(emu_ss, emu_bp,  0xE), emu_di);
	emu_xorw(&emu_di, emu_di);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0x8), 0x0);
	if (!(emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x0068; emu_last_cs = 0x24D0; emu_last_ip = 0x0055; emu_last_length = 0x0057; emu_last_crc = 0x54FF; emu_call(); return; }
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_subw(&emu_get_memory16(emu_ss, emu_bp,  0xC), emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_addw(&emu_get_memory16(emu_ss, emu_bp,  0x10), emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0x8), 0x0);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0xC), 0x0);
	if (!(emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x007F; emu_last_cs = 0x24D0; emu_last_ip = 0x006C; emu_last_length = 0x0057; emu_last_crc = 0x54FF; emu_call(); return; }
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_subw(&emu_get_memory16(emu_ss, emu_bp,  0x8), emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_addw(&emu_get_memory16(emu_ss, emu_bp,  0x10), emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0xC), 0x0);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x14));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x12));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x10));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_di);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_si);
	emu_movw(&emu_ax, 0x353F);
	emu_movw(&emu_es, emu_ax);

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_es, 0x00,  0x663C);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_es, 0x00,  0x663E);
	emu_push(0x009D);
	switch ((emu_cs << 16) + emu_ip) {
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x24D0; emu_last_ip = 0x0098; emu_last_length = 0x0057; emu_last_crc = 0x54FF;
			emu_call();
			return;
	}
	f__24D0_009D_0007_CFD7();
}

/**
 * Decompiled function f__24D0_0051_004C_FA6A()
 *
 * @name f__24D0_0051_004C_FA6A
 * @implements 24D0:0051:004C:FA6A ()
 *
 * Called From: 24D0:0048:0057:54FF
 */
void f__24D0_0051_004C_FA6A()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0x8), 0x0);
	if (!(emu_flags.sf != emu_flags.of)) { f__24D0_0068_0035_D95E(); return; }
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_subw(&emu_get_memory16(emu_ss, emu_bp,  0xC), emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_addw(&emu_get_memory16(emu_ss, emu_bp,  0x10), emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0x8), 0x0);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0xC), 0x0);
	if (!(emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x007F; emu_last_cs = 0x24D0; emu_last_ip = 0x006C; emu_last_length = 0x004C; emu_last_crc = 0xFA6A; emu_call(); return; }
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_subw(&emu_get_memory16(emu_ss, emu_bp,  0x8), emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_addw(&emu_get_memory16(emu_ss, emu_bp,  0x10), emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0xC), 0x0);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x14));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x12));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x10));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_di);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_si);
	emu_movw(&emu_ax, 0x353F);
	emu_movw(&emu_es, emu_ax);

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_es, 0x00,  0x663C);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_es, 0x00,  0x663E);
	emu_push(0x009D);
	switch ((emu_cs << 16) + emu_ip) {
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x24D0; emu_last_ip = 0x0098; emu_last_length = 0x004C; emu_last_crc = 0xFA6A;
			emu_call();
			return;
	}
	f__24D0_009D_0007_CFD7();
}

/**
 * Decompiled function f__24D0_0068_0035_D95E()
 *
 * @name f__24D0_0068_0035_D95E
 * @implements 24D0:0068:0035:D95E ()
 *
 * Called From: 24D0:0055:004C:FA6A
 */
void f__24D0_0068_0035_D95E()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0xC), 0x0);
	if (!(emu_flags.sf != emu_flags.of)) { f__24D0_007F_001E_EB4C(); return; }
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_subw(&emu_get_memory16(emu_ss, emu_bp,  0x8), emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_addw(&emu_get_memory16(emu_ss, emu_bp,  0x10), emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0xC), 0x0);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x14));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x12));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x10));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_di);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_si);
	emu_movw(&emu_ax, 0x353F);
	emu_movw(&emu_es, emu_ax);

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_es, 0x00,  0x663C);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_es, 0x00,  0x663E);
	emu_push(0x009D);
	switch ((emu_cs << 16) + emu_ip) {
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x24D0; emu_last_ip = 0x0098; emu_last_length = 0x0035; emu_last_crc = 0xD95E;
			emu_call();
			return;
	}
	f__24D0_009D_0007_CFD7();
}

/**
 * Decompiled function f__24D0_007F_001E_EB4C()
 *
 * @name f__24D0_007F_001E_EB4C
 * @implements 24D0:007F:001E:EB4C ()
 *
 * Called From: 24D0:006C:0035:D95E
 */
void f__24D0_007F_001E_EB4C()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x14));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x12));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x10));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_di);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_si);
	emu_movw(&emu_ax, 0x353F);
	emu_movw(&emu_es, emu_ax);

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_es, 0x00,  0x663C);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_es, 0x00,  0x663E);
	emu_push(0x009D);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A606D7: f__22A6_06D7_006B_B7D6(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x24D0; emu_last_ip = 0x0098; emu_last_length = 0x001E; emu_last_crc = 0xEB4C;
			emu_call();
			return;
	}
	f__24D0_009D_0007_CFD7();
}

/**
 * Decompiled function f__24D0_009D_0007_CFD7()
 *
 * @name f__24D0_009D_0007_CFD7
 * @implements 24D0:009D:0007:CFD7 ()
 *
 * Called From: 24D0:009D:001E:EB4C
 */
void f__24D0_009D_0007_CFD7()
{
	emu_addws(&emu_sp, 0x10);
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__24D0_00A0_0004_DE52()
 *
 * @name f__24D0_00A0_0004_DE52
 * @implements 24D0:00A0:0004:DE52 ()
 *
 * Called From: 24D0:0044:000C:9629
 * Called From: 24D0:0044:0002:ED3A
 */
void f__24D0_00A0_0004_DE52()
{
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

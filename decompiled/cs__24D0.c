/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__24D0_000D_0039_9224()
 *
 * @name f__24D0_000D_0039_9224
 * @implements 24D0:000D:0039:9224 ()
 *
 * Called From: 07D4:016A:0006:0498
 * Called From: 07D4:016A:0008:5798
 * Called From: 07D4:135C:0028:495B
 * Called From: 07D4:135C:002A:9F5A
 * Called From: 07D4:153F:001E:0E68
 * Called From: 07D4:153F:0028:0696
 * Called From: 0F78:0194:0024:A206
 * Called From: 10E4:0986:0028:8436
 * Called From: 10E4:0B78:0029:23E7
 * Called From: 10E4:1B69:0025:9117
 * Called From: 10E4:2235:0020:7795
 * Called From: 2C17:0199:0037:1B29
 * Called From: 2C17:0199:005E:6C5E
 * Called From: B495:0B90:0024:0D76
 * Called From: B495:0FA4:0024:834B
 * Called From: B495:106F:0025:9C31
 * Called From: B495:1134:0024:58C3
 * Called From: B495:131D:004C:B262
 * Called From: B495:1340:0023:AD6A
 * Called From: B495:152B:0020:7795
 * Called From: B4B8:1FCA:0021:7727
 * Called From: B4BE:02A0:0023:7081
 * Called From: B4BE:0341:0023:7081
 * Called From: B4DA:0D19:0024:F2D9
 * Called From: B4DA:0D8B:0024:49B9
 * Called From: B4DA:0DC7:0022:45C7
 * Called From: B4DA:0E90:0023:F08D
 * Called From: B4DA:0FF2:0025:11EC
 * Called From: B4DA:105E:0025:11EC
 * Called From: B4DA:11B5:0020:7795
 * Called From: B4DA:1357:0025:11EC
 * Called From: B4DA:1406:002C:158C
 * Called From: B4DA:150C:002C:A792
 * Called From: B4DA:17B0:0023:8068
 * Called From: B4DA:17DA:0022:1F6D
 * Called From: B4DA:1846:0023:F08D
 * Called From: B4DA:1884:0021:4789
 * Called From: B4E0:00AF:0020:7795
 * Called From: B4E0:0A69:0024:1ACA
 * Called From: B4F2:0D36:0025:11EA
 * Called From: B4F2:10E0:002A:B2DE
 * Called From: B503:01A2:0023:2B1C
 * Called From: B503:01C6:0024:F5A6
 * Called From: B503:0265:0020:1795
 * Called From: B503:04B5:0023:605B
 * Called From: B503:0F3F:0028:B4A9
 * Called From: B503:0FD8:0021:9C17
 * Called From: B511:0F13:0020:7795
 * Called From: B511:110C:0020:7795
 * Called From: B511:13B3:0020:A4B5
 * Called From: B511:13DF:002C:720E
 * Called From: B518:01D5:0021:7727
 * Called From: B518:0693:0026:4B19
 * Called From: B518:0B96:0021:177E
 * Called From: B518:0B96:0032:7BF3
 * Called From: B518:0BCC:0022:2929
 * Called From: B518:0BCC:0025:3501
 * Called From: B518:14B3:0024:60A8
 */
void f__24D0_000D_0039_9224()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_di, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0xE), 0x28);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__24D0_0023_0023_609E(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0xE), 0x28);
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp,  0x10), 0xC8);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { emu_ip = 0x002F; emu_last_cs = 0x24D0; emu_last_ip = 0x0028; emu_last_length = 0x0039; emu_last_crc = 0x9224; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0x10), 0xC8);
	emu_orw(&emu_si, emu_si);
	if (!(emu_flags.sf != emu_flags.of)) { emu_ip = 0x003A; emu_last_cs = 0x24D0; emu_last_ip = 0x0031; emu_last_length = 0x0039; emu_last_crc = 0x9224; emu_call(); return; } // Jump does not resolve
	emu_subw(&emu_di, emu_si);
	emu_addw(&emu_get_memory16(emu_ss, emu_bp,  0xE), emu_si);
	emu_xorw(&emu_si, emu_si);
	emu_cmpws(&emu_si, 0x28);
	if (!(emu_flags.sf != emu_flags.of)) { emu_ip = 0x0044; emu_last_cs = 0x24D0; emu_last_ip = 0x003D; emu_last_length = 0x0039; emu_last_crc = 0x9224; emu_call(); return; } // Jump does not resolve
	emu_cmpws(&emu_di, 0x28);
	if ((emu_flags.sf != emu_flags.of)) { emu_ip = 0x0046; emu_last_cs = 0x24D0; emu_last_ip = 0x0042; emu_last_length = 0x0039; emu_last_crc = 0x9224; emu_call(); return; } // Jump does not resolve
	emu_ip = 0x00A0; emu_last_cs = 0x24D0; emu_last_ip = 0x0044; emu_last_length = 0x0039; emu_last_crc = 0x9224; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__24D0_0023_0023_609E()
 *
 * @name f__24D0_0023_0023_609E
 * @implements 24D0:0023:0023:609E ()
 *
 * Called From: 24D0:001C:0039:9224
 */
void f__24D0_0023_0023_609E()
{
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp,  0x10), 0xC8);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__24D0_002F_0017_D596(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0x10), 0xC8);
	emu_orw(&emu_si, emu_si);
	if (!(emu_flags.sf != emu_flags.of)) { emu_ip = 0x003A; emu_last_cs = 0x24D0; emu_last_ip = 0x0031; emu_last_length = 0x0023; emu_last_crc = 0x609E; emu_call(); return; } // Jump does not resolve
	emu_subw(&emu_di, emu_si);
	emu_addw(&emu_get_memory16(emu_ss, emu_bp,  0xE), emu_si);
	emu_xorw(&emu_si, emu_si);
	emu_cmpws(&emu_si, 0x28);
	if (!(emu_flags.sf != emu_flags.of)) { emu_ip = 0x0044; emu_last_cs = 0x24D0; emu_last_ip = 0x003D; emu_last_length = 0x0023; emu_last_crc = 0x609E; emu_call(); return; } // Jump does not resolve
	emu_cmpws(&emu_di, 0x28);
	if ((emu_flags.sf != emu_flags.of)) { emu_ip = 0x0046; emu_last_cs = 0x24D0; emu_last_ip = 0x0042; emu_last_length = 0x0023; emu_last_crc = 0x609E; emu_call(); return; } // Jump does not resolve
	emu_ip = 0x00A0; emu_last_cs = 0x24D0; emu_last_ip = 0x0044; emu_last_length = 0x0023; emu_last_crc = 0x609E; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__24D0_002F_0017_D596()
 *
 * @name f__24D0_002F_0017_D596
 * @implements 24D0:002F:0017:D596 ()
 *
 * Called From: 24D0:0028:0023:609E
 */
void f__24D0_002F_0017_D596()
{
	emu_orw(&emu_si, emu_si);
	if (!(emu_flags.sf != emu_flags.of)) { f__24D0_003A_000C_E087(); return; }
	emu_subw(&emu_di, emu_si);
	emu_addw(&emu_get_memory16(emu_ss, emu_bp,  0xE), emu_si);
	emu_xorw(&emu_si, emu_si);
	emu_cmpws(&emu_si, 0x28);
	if (!(emu_flags.sf != emu_flags.of)) { emu_ip = 0x0044; emu_last_cs = 0x24D0; emu_last_ip = 0x003D; emu_last_length = 0x0017; emu_last_crc = 0xD596; emu_call(); return; } // Jump does not resolve
	emu_cmpws(&emu_di, 0x28);
	if ((emu_flags.sf != emu_flags.of)) { f__24D0_0046_0057_4749(); return; }
	emu_ip = 0x00A0; emu_last_cs = 0x24D0; emu_last_ip = 0x0044; emu_last_length = 0x0017; emu_last_crc = 0xD596; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__24D0_003A_000C_E087()
 *
 * @name f__24D0_003A_000C_E087
 * @implements 24D0:003A:000C:E087 ()
 *
 * Called From: 24D0:0031:0017:D596
 */
void f__24D0_003A_000C_E087()
{
	emu_cmpws(&emu_si, 0x28);
	if (!(emu_flags.sf != emu_flags.of)) { emu_ip = 0x0044; emu_last_cs = 0x24D0; emu_last_ip = 0x003D; emu_last_length = 0x000C; emu_last_crc = 0xE087; emu_call(); return; } // Jump does not resolve
	emu_cmpws(&emu_di, 0x28);
	if ((emu_flags.sf != emu_flags.of)) { f__24D0_0046_0057_4749(); return; }
	emu_ip = 0x00A0; emu_last_cs = 0x24D0; emu_last_ip = 0x0044; emu_last_length = 0x000C; emu_last_crc = 0xE087; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__24D0_0046_0057_4749()
 *
 * @name f__24D0_0046_0057_4749
 * @implements 24D0:0046:0057:4749 ()
 *
 * Called From: 24D0:0042:000C:E087
 * Called From: 24D0:0042:0017:D596
 */
void f__24D0_0046_0057_4749()
{
	emu_orw(&emu_di, emu_di);
	if (!(emu_flags.sf != emu_flags.of)) { f__24D0_0051_004C_5035(); return; }
	emu_subw(&emu_si, emu_di);
	emu_addw(&emu_get_memory16(emu_ss, emu_bp,  0xE), emu_di);
	emu_xorw(&emu_di, emu_di);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0x8), 0x0);
	if (!(emu_flags.sf != emu_flags.of)) { emu_ip = 0x0068; emu_last_cs = 0x24D0; emu_last_ip = 0x0055; emu_last_length = 0x0057; emu_last_crc = 0x4749; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_subw(&emu_get_memory16(emu_ss, emu_bp,  0xC), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_addw(&emu_get_memory16(emu_ss, emu_bp,  0x10), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0x8), 0x0);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0xC), 0x0);
	if (!(emu_flags.sf != emu_flags.of)) { emu_ip = 0x007F; emu_last_cs = 0x24D0; emu_last_ip = 0x006C; emu_last_length = 0x0057; emu_last_crc = 0x4749; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_subw(&emu_get_memory16(emu_ss, emu_bp,  0x8), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_addw(&emu_get_memory16(emu_ss, emu_bp,  0x10), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0xC), 0x0);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x14));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x12));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x10));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_di);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_si);
	emu_movw(&emu_ax.x, 0x353F);
	emu_movw(&emu_es, emu_ax.x);

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_es, 0x00,  0x663C);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_es, 0x00,  0x663E);
	emu_push(0x009D);
	switch ((emu_cs << 16) + emu_ip) {
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x24D0; emu_last_ip = 0x0098; emu_last_length = 0x0057; emu_last_crc = 0x4749;
			emu_call();
			return;
	}
	f__24D0_009D_0007_7562();
}

/**
 * Decompiled function f__24D0_0051_004C_5035()
 *
 * @name f__24D0_0051_004C_5035
 * @implements 24D0:0051:004C:5035 ()
 *
 * Called From: 24D0:0048:0057:4749
 */
void f__24D0_0051_004C_5035()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0x8), 0x0);
	if (!(emu_flags.sf != emu_flags.of)) { f__24D0_0068_0035_B7DB(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_subw(&emu_get_memory16(emu_ss, emu_bp,  0xC), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_addw(&emu_get_memory16(emu_ss, emu_bp,  0x10), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0x8), 0x0);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0xC), 0x0);
	if (!(emu_flags.sf != emu_flags.of)) { emu_ip = 0x007F; emu_last_cs = 0x24D0; emu_last_ip = 0x006C; emu_last_length = 0x004C; emu_last_crc = 0x5035; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_subw(&emu_get_memory16(emu_ss, emu_bp,  0x8), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_addw(&emu_get_memory16(emu_ss, emu_bp,  0x10), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0xC), 0x0);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x14));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x12));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x10));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_di);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_si);
	emu_movw(&emu_ax.x, 0x353F);
	emu_movw(&emu_es, emu_ax.x);

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_es, 0x00,  0x663C);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_es, 0x00,  0x663E);
	emu_push(0x009D);
	switch ((emu_cs << 16) + emu_ip) {
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x24D0; emu_last_ip = 0x0098; emu_last_length = 0x004C; emu_last_crc = 0x5035;
			emu_call();
			return;
	}
	f__24D0_009D_0007_7562();
}

/**
 * Decompiled function f__24D0_0068_0035_B7DB()
 *
 * @name f__24D0_0068_0035_B7DB
 * @implements 24D0:0068:0035:B7DB ()
 *
 * Called From: 24D0:0055:004C:5035
 */
void f__24D0_0068_0035_B7DB()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0xC), 0x0);
	if (!(emu_flags.sf != emu_flags.of)) { f__24D0_007F_001E_F83C(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_subw(&emu_get_memory16(emu_ss, emu_bp,  0x8), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_addw(&emu_get_memory16(emu_ss, emu_bp,  0x10), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0xC), 0x0);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x14));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x12));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x10));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_di);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_si);
	emu_movw(&emu_ax.x, 0x353F);
	emu_movw(&emu_es, emu_ax.x);

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_es, 0x00,  0x663C);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_es, 0x00,  0x663E);
	emu_push(0x009D);
	switch ((emu_cs << 16) + emu_ip) {
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x24D0; emu_last_ip = 0x0098; emu_last_length = 0x0035; emu_last_crc = 0xB7DB;
			emu_call();
			return;
	}
	f__24D0_009D_0007_7562();
}

/**
 * Decompiled function f__24D0_007F_001E_F83C()
 *
 * @name f__24D0_007F_001E_F83C
 * @implements 24D0:007F:001E:F83C ()
 *
 * Called From: 24D0:006C:0035:B7DB
 */
void f__24D0_007F_001E_F83C()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x14));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x12));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x10));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_di);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_si);
	emu_movw(&emu_ax.x, 0x353F);
	emu_movw(&emu_es, emu_ax.x);

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_es, 0x00,  0x663C);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_es, 0x00,  0x663E);
	emu_push(0x009D);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A606D7: f__22A6_06D7_006B_47D9(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x24D0; emu_last_ip = 0x0098; emu_last_length = 0x001E; emu_last_crc = 0xF83C;
			emu_call();
			return;
	}
	f__24D0_009D_0007_7562();
}

/**
 * Decompiled function f__24D0_009D_0007_7562()
 *
 * @name f__24D0_009D_0007_7562
 * @implements 24D0:009D:0007:7562 ()
 *
 * Called From: 24D0:009D:001E:F83C
 */
void f__24D0_009D_0007_7562()
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

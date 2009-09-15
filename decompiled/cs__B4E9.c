/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__B4E9_0000_0013_38BA()
 *
 * @name f__B4E9_0000_0013_38BA
 * @implements B4E9:0000:0013:38BA ()
 *
 * Called From: 34E9:0020:0005:1C72
 * Called From: 34E9:0020:0005:1D20
 * Called From: 34E9:0020:0005:1D26
 * Called From: 34E9:0020:0005:1DB8
 * Called From: 34E9:0020:0005:1E8A
 * Called From: 34E9:0020:0005:1F26
 * Called From: 34E9:0020:0005:1F94
 * Called From: 34E9:0020:0005:1DC6
 * Called From: 34E9:0020:0005:1CE8
 * Called From: 34E9:0020:0005:1C04
 * Called From: 34E9:0020:0005:1C5A
 * Called From: 34E9:0020:0005:1E0E
 * Called From: B4E9:00BA:000B:A2D6
 * Called From: B4E9:026A:0008:CC76
 * Called From: B4E9:02D4:0008:CE9E
 * Called From: B4E9:02D4:0009:7C9E
 * Called From: B4E9:03B7:000A:A8C3
 * Called From: B4E9:03C9:0009:0608
 */
void f__B4E9_0000_0013_38BA()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_si);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0x6), 0x0);
	if (emu_flags.zf) { f__B4E9_0015_0009_769D(); return; }
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0013); emu_cs = 0x2618; f__2618_0008_001B_46CD();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E9) { ovl__34E9(0xFF); }
	f__B4E9_0013_0002_03BE();
}

/**
 * Decompiled function f__B4E9_0013_0002_03BE()
 *
 * @name f__B4E9_0013_0002_03BE
 * @implements B4E9:0013:0002:03BE ()
 *
 * Called From: B4E9:0013:0013:38BA
 */
void f__B4E9_0013_0002_03BE()
{
	f__B4E9_001E_0007_1D6C(); return;
}

/**
 * Decompiled function f__B4E9_0015_0009_769D()
 *
 * @name f__B4E9_0015_0009_769D
 * @implements B4E9:0015:0009:769D ()
 *
 * Called From: B4E9:0008:0013:38BA
 */
void f__B4E9_0015_0009_769D()
{
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x001E); emu_cs = 0x2618; f__2618_003F_001B_46CD();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E9) { ovl__34E9(0xFF); }
	f__B4E9_001E_0007_1D6C();
}

/**
 * Decompiled function f__B4E9_001E_0007_1D6C()
 *
 * @name f__B4E9_001E_0007_1D6C
 * @implements B4E9:001E:0007:1D6C ()
 *
 * Called From: B4E9:0013:0002:03BE
 * Called From: B4E9:001E:0009:769D
 */
void f__B4E9_001E_0007_1D6C()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_si, emu_ax.x);
	emu_movw(&emu_ax.x, emu_si);
	f__B4E9_0025_0003_0212(); return;
}

/**
 * Decompiled function f__B4E9_0025_0003_0212()
 *
 * @name f__B4E9_0025_0003_0212
 * @implements B4E9:0025:0003:0212 ()
 *
 * Called From: B4E9:0023:0007:1D6C
 */
void f__B4E9_0025_0003_0212()
{
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B4E9_0028_0013_3BBA()
 *
 * @name f__B4E9_0028_0013_3BBA
 * @implements B4E9:0028:0013:3BBA ()
 *
 * Called From: 34E9:0025:0005:1F38
 */
void f__B4E9_0028_0013_3BBA()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_si);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0x6), 0x0);
	if (emu_flags.zf) { emu_ip = 0x003D; emu_last_cs = 0xB4E9; emu_last_ip = 0x0030; emu_last_length = 0x0013; emu_last_crc = 0x3BBA; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x003B); emu_cs = 0x2618; f__2618_0008_001B_46CD();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E9) { ovl__34E9(0xFF); }
	f__B4E9_003B_0002_03BE();
}

/**
 * Decompiled function f__B4E9_003B_0002_03BE()
 *
 * @name f__B4E9_003B_0002_03BE
 * @implements B4E9:003B:0002:03BE ()
 *
 * Called From: B4E9:003B:0013:3BBA
 */
void f__B4E9_003B_0002_03BE()
{
	f__B4E9_0046_0007_1D6C(); return;
}

/**
 * Decompiled function f__B4E9_0046_0007_1D6C()
 *
 * @name f__B4E9_0046_0007_1D6C
 * @implements B4E9:0046:0007:1D6C ()
 *
 * Called From: B4E9:003B:0002:03BE
 */
void f__B4E9_0046_0007_1D6C()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_si, emu_ax.x);
	emu_movw(&emu_ax.x, emu_si);
	f__B4E9_004D_0003_0212(); return;
}

/**
 * Decompiled function f__B4E9_004D_0003_0212()
 *
 * @name f__B4E9_004D_0003_0212
 * @implements B4E9:004D:0003:0212 ()
 *
 * Called From: B4E9:004B:0007:1D6C
 */
void f__B4E9_004D_0003_0212()
{
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B4E9_0050_003F_389B()
 *
 * @name f__B4E9_0050_003F_389B
 * @implements B4E9:0050:003F:389B ()
 *
 * Called From: 34E9:002A:0005:1804
 * Called From: 34E9:002A:0005:1816
 * Called From: 34E9:002A:0005:1820
 * Called From: 34E9:002A:0005:1836
 * Called From: 34E9:002A:0005:1872
 * Called From: 34E9:002A:0005:1882
 * Called From: 34E9:002A:0005:18AC
 * Called From: 34E9:002A:0005:18AE
 * Called From: 34E9:002A:0005:18B8
 * Called From: 34E9:002A:0005:18FE
 * Called From: 34E9:002A:0005:1932
 * Called From: 34E9:002A:0005:193E
 * Called From: 34E9:002A:0005:196A
 * Called From: 34E9:002A:0005:1982
 * Called From: 34E9:002A:0005:19A6
 * Called From: 34E9:002A:0005:19AC
 * Called From: 34E9:002A:0005:19E8
 * Called From: 34E9:002A:0005:19FA
 * Called From: 34E9:002A:0005:1A02
 * Called From: 34E9:002A:0005:1A1C
 * Called From: 34E9:002A:0005:1A26
 * Called From: 34E9:002A:0005:1A32
 * Called From: 34E9:002A:0005:1A3E
 * Called From: 34E9:002A:0005:1A6C
 * Called From: 34E9:002A:0005:1A6E
 * Called From: 34E9:002A:0005:1AAA
 * Called From: 34E9:002A:0005:1ABE
 * Called From: 34E9:002A:0005:1AEA
 * Called From: 34E9:002A:0005:1B12
 * Called From: 34E9:002A:0005:1B8C
 * Called From: 34E9:002A:0005:1B92
 * Called From: 34E9:002A:0005:1BBA
 * Called From: 34E9:002A:0005:1BBE
 * Called From: 34E9:002A:0005:1BFA
 * Called From: 34E9:002A:0005:1AC4
 * Called From: 34E9:002A:0005:1ADC
 * Called From: 34E9:002A:0005:1826
 * Called From: 34E9:002A:0005:1A94
 * Called From: 34E9:002A:0005:1B3A
 */
void f__B4E9_0050_003F_389B()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0xA);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpws(&emu_si, 0x3);
	if (!emu_flags.zf) { f__B4E9_006C_0023_F3BE(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3A0A));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3A0C));
	if (!emu_flags.zf) { f__B4E9_006C_0023_F3BE(); return; }
	emu_movw(&emu_si, 0x4);
	emu_cmpws(&emu_si, 0x4);
	if (!emu_flags.zf) { emu_ip = 0x0086; emu_last_cs = 0xB4E9; emu_last_ip = 0x006F; emu_last_length = 0x003F; emu_last_crc = 0x389B; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3A0A));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3A0C));
	if (emu_flags.zf) { emu_ip = 0x0086; emu_last_cs = 0xB4E9; emu_last_ip = 0x0078; emu_last_length = 0x003F; emu_last_crc = 0x389B; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x3A0C), 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x3A0A), 0x0);
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x008F); emu_cs = 0x2598; emu_ip = 0x008F; emu_last_cs = 0xB4E9; emu_last_ip = 0x008A; emu_last_length = 0x003F; emu_last_crc = 0x389B; emu_call(); // Jump does not resolve
	f__B4E9_008F_0023_1B7D();
}

/**
 * Decompiled function f__B4E9_006C_0023_F3BE()
 *
 * @name f__B4E9_006C_0023_F3BE
 * @implements B4E9:006C:0023:F3BE ()
 *
 * Called From: B4E9:005E:003F:389B
 * Called From: B4E9:0067:003F:389B
 */
void f__B4E9_006C_0023_F3BE()
{
	emu_cmpws(&emu_si, 0x4);
	if (!emu_flags.zf) { f__B4E9_0086_0009_776B(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3A0A));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3A0C));
	if (emu_flags.zf) { f__B4E9_0086_0009_776B(); return; }
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x3A0C), 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x3A0A), 0x0);
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x008F); emu_cs = 0x2598; emu_ip = 0x008F; emu_last_cs = 0xB4E9; emu_last_ip = 0x008A; emu_last_length = 0x0023; emu_last_crc = 0xF3BE; emu_call(); // Jump does not resolve
	f__B4E9_008F_0023_1B7D();
}

/**
 * Decompiled function f__B4E9_0086_0009_776B()
 *
 * @name f__B4E9_0086_0009_776B
 * @implements B4E9:0086:0009:776B ()
 *
 * Called From: B4E9:006F:0023:F3BE
 * Called From: B4E9:0078:0023:F3BE
 */
void f__B4E9_0086_0009_776B()
{
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x008F); emu_cs = 0x2598; f__2598_0000_0017_D681();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E9) { ovl__34E9(0xFF); }
	f__B4E9_008F_0023_1B7D();
}

/**
 * Decompiled function f__B4E9_008F_0023_1B7D()
 *
 * @name f__B4E9_008F_0023_1B7D
 * @implements B4E9:008F:0023:1B7D ()
 *
 * Called From: B4E9:008F:0009:776B
 */
void f__B4E9_008F_0023_1B7D()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00,  0x3A0E), emu_si);
	if (!emu_flags.zf) { f__B4E9_00B2_000B_A2D6(); return; }
	emu_movw(&emu_ax.x, emu_si);
	emu_movw(&emu_dx.x, 0xC);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_dx.x, 0x2E8A);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_es, emu_dx.x);
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x18), 0x0);
	if (!emu_flags.zf) { emu_ip = 0x00B2; emu_last_cs = 0xB4E9; emu_last_ip = 0x00AD; emu_last_length = 0x0023; emu_last_crc = 0x1B7D; emu_call(); return; } // Jump does not resolve
	f__B4E9_031E_0008_EAEA(); return;
}

/**
 * Decompiled function f__B4E9_00B2_000B_A2D6()
 *
 * @name f__B4E9_00B2_000B_A2D6
 * @implements B4E9:00B2:000B:A2D6 ()
 *
 * Called From: B4E9:0097:0023:1B7D
 */
void f__B4E9_00B2_000B_A2D6()
{
	emu_movw(&emu_di, emu_get_memory16(emu_ds, 0x00,  0x3A0E));
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x00BD); f__B4E9_0000_0013_38BA();
	f__B4E9_00BD_001D_DA19();
}

/**
 * Decompiled function f__B4E9_00BD_001D_DA19()
 *
 * @name f__B4E9_00BD_001D_DA19
 * @implements B4E9:00BD:001D:DA19 ()
 *
 * Called From: B4E9:00BD:000B:A2D6
 */
void f__B4E9_00BD_001D_DA19()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x3A0E), emu_si);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x3A10), emu_si);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x37B8), 0x1);
	emu_movw(&emu_bx.x, emu_di);
	emu_cmpws(&emu_bx.x, 0x4);
	if (!(emu_flags.cf || emu_flags.zf)) { f__B4E9_0133_0002_03AC(); return; }
	emu_shlw(&emu_bx.x, 0x1);

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_cs, emu_bx.x,  0x33B);
	switch (emu_ip) {
		case 0x00DA: f__B4E9_00DA_0009_A1FF(); return;
		case 0x00E4: f__B4E9_00E4_0015_332B(); return;
		case 0x00FE: f__B4E9_00FE_0024_D12A(); return;
		case 0x0133: f__B4E9_0133_0002_03AC(); return;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0xB4E9; emu_last_ip = 0x00D5; emu_last_length = 0x001D; emu_last_crc = 0xDA19;
			emu_call();
			return;
	}
}

/**
 * Decompiled function f__B4E9_00DA_0009_A1FF()
 *
 * @name f__B4E9_00DA_0009_A1FF
 * @implements B4E9:00DA:0009:A1FF ()
 *
 * Called From: B4E9:00D5:001D:DA19
 */
void f__B4E9_00DA_0009_A1FF()
{
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x38F0));
	emu_push(emu_cs); emu_push(0x00E3); emu_cs = 0x0F78; f__0F78_02D5_0014_D8D1();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E9) { ovl__34E9(0xFF); }
	f__B4E9_00E3_0016_256B();
}

/**
 * Decompiled function f__B4E9_00E3_0016_256B()
 *
 * @name f__B4E9_00E3_0016_256B
 * @implements B4E9:00E3:0016:256B ()
 *
 * Called From: B4E9:00E3:0009:A1FF
 */
void f__B4E9_00E3_0016_256B()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x3A36), 0x0);
	emu_movw(&emu_ax.x, 0xFFFF);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_cs); emu_push(0x00F9); emu_cs = 0x10E4; f__10E4_09AB_0031_9946();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E9) { ovl__34E9(0xFF); }
	f__B4E9_00F9_0005_1FD2();
}

/**
 * Decompiled function f__B4E9_00E4_0015_332B()
 *
 * @name f__B4E9_00E4_0015_332B
 * @implements B4E9:00E4:0015:332B ()
 *
 * Called From: B4E9:00D5:001D:DA19
 */
void f__B4E9_00E4_0015_332B()
{
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x3A36), 0x0);
	emu_movw(&emu_ax.x, 0xFFFF);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_cs); emu_push(0x00F9); emu_cs = 0x10E4; f__10E4_09AB_0031_9946();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E9) { ovl__34E9(0xFF); }
	f__B4E9_00F9_0005_1FD2();
}

/**
 * Decompiled function f__B4E9_00F9_0005_1FD2()
 *
 * @name f__B4E9_00F9_0005_1FD2
 * @implements B4E9:00F9:0005:1FD2 ()
 *
 * Called From: B4E9:00F9:0015:332B
 * Called From: B4E9:00F9:0016:256B
 */
void f__B4E9_00F9_0005_1FD2()
{
	emu_addws(&emu_sp, 0x6);
	f__B4E9_0135_0040_E86F(); return;
}

/**
 * Decompiled function f__B4E9_00FE_0024_D12A()
 *
 * @name f__B4E9_00FE_0024_D12A
 * @implements B4E9:00FE:0024:D12A ()
 *
 * Called From: B4E9:00D5:001D:DA19
 */
void f__B4E9_00FE_0024_D12A()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3A0A));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3A0C));
	if (emu_flags.zf) { f__B4E9_0131_0002_03A8(); return; }
	emu_cmpws(&emu_si, 0x3);
	if (emu_flags.zf) { emu_ip = 0x0131; emu_last_cs = 0xB4E9; emu_last_ip = 0x010A; emu_last_length = 0x0024; emu_last_crc = 0xD12A; emu_call(); return; } // Jump does not resolve
	emu_cmpws(&emu_si, 0x1);
	if (emu_flags.zf) { f__B4E9_0131_0002_03A8(); return; }
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3A0C));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3A0A));
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0122); emu_cs = 0x34CD; ovl__34CD(22);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E9) { ovl__34E9(0xFF); }
	f__B4E9_0122_0011_D399();
}

/**
 * Decompiled function f__B4E9_0122_0011_D399()
 *
 * @name f__B4E9_0122_0011_D399
 * @implements B4E9:0122:0011:D399 ()
 *
 * Called From: B4E9:0122:0024:D12A
 */
void f__B4E9_0122_0011_D399()
{
	emu_addws(&emu_sp, 0x6);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x3A0C), 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x3A0A), 0x0);
	f__B4E9_0135_0040_E86F(); return;
}

/**
 * Decompiled function f__B4E9_0131_0002_03A8()
 *
 * @name f__B4E9_0131_0002_03A8
 * @implements B4E9:0131:0002:03A8 ()
 *
 * Called From: B4E9:0105:0024:D12A
 * Called From: B4E9:010F:0024:D12A
 */
void f__B4E9_0131_0002_03A8()
{
	f__B4E9_0135_0040_E86F(); return;
}

/**
 * Decompiled function f__B4E9_0133_0002_03AC()
 *
 * @name f__B4E9_0133_0002_03AC
 * @implements B4E9:0133:0002:03AC ()
 *
 * Called From: B4E9:00D1:001D:DA19
 * Called From: B4E9:00D5:001D:DA19
 */
void f__B4E9_0133_0002_03AC()
{
	f__B4E9_0135_0040_E86F(); return;
}

/**
 * Decompiled function f__B4E9_0135_0040_E86F()
 *
 * @name f__B4E9_0135_0040_E86F
 * @implements B4E9:0135:0040:E86F ()
 *
 * Called From: B4E9:00FC:0005:1FD2
 * Called From: B4E9:0131:0002:03A8
 * Called From: B4E9:0131:0011:D399
 * Called From: B4E9:0133:0002:03AC
 */
void f__B4E9_0135_0040_E86F()
{
	emu_movw(&emu_ax.x, emu_di);
	emu_movw(&emu_dx.x, 0xC);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_dx.x, 0x2E8A);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_es, emu_dx.x);
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x12), 0x0);
	if (emu_flags.zf) { f__B4E9_0176_0018_3939(); return; }
	emu_movw(&emu_ax.x, emu_si);
	emu_movw(&emu_dx.x, 0xC);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_dx.x, 0x2E8A);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_es, emu_dx.x);
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x14), 0x0);
	if (emu_flags.zf) { f__B4E9_0176_0018_3939(); return; }
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x3A12), 0x1);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x3A14), 0x1);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0175); emu_cs = 0x10E4; f__10E4_2099_0012_A974();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E9) { ovl__34E9(0xFF); }
	f__B4E9_0175_0019_8B39();
}

/**
 * Decompiled function f__B4E9_0175_0019_8B39()
 *
 * @name f__B4E9_0175_0019_8B39
 * @implements B4E9:0175:0019:8B39 ()
 *
 * Called From: 261F:01B9:001B:DA28
 * Called From: B4E9:0175:0040:E86F
 */
void f__B4E9_0175_0019_8B39()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_ax.x, emu_si);
	emu_movw(&emu_dx.x, 0xC);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_dx.x, 0x2E8A);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_es, emu_dx.x);
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x16));
	emu_push(emu_cs); emu_push(0x018E); emu_cs = 0x07AE; f__07AE_0000_00DF_386F();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E9) { ovl__34E9(0xFF); }
	f__B4E9_018E_0017_170C();
}

/**
 * Decompiled function f__B4E9_0176_0018_3939()
 *
 * @name f__B4E9_0176_0018_3939
 * @implements B4E9:0176:0018:3939 ()
 *
 * Called From: B4E9:0149:0040:E86F
 * Called From: B4E9:015F:0040:E86F
 */
void f__B4E9_0176_0018_3939()
{
	emu_movw(&emu_ax.x, emu_si);
	emu_movw(&emu_dx.x, 0xC);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_dx.x, 0x2E8A);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_es, emu_dx.x);
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x16));
	emu_push(emu_cs); emu_push(0x018E); emu_cs = 0x07AE; f__07AE_0000_00DF_386F();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E9) { ovl__34E9(0xFF); }
	f__B4E9_018E_0017_170C();
}

/**
 * Decompiled function f__B4E9_018E_0017_170C()
 *
 * @name f__B4E9_018E_0017_170C
 * @implements B4E9:018E:0017:170C ()
 *
 * Called From: B4E9:018E:0018:3939
 * Called From: B4E9:018E:0019:8B39
 */
void f__B4E9_018E_0017_170C()
{
	emu_pop(&emu_cx.x);
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x6D5D), 0x0);
	if (emu_flags.zf) { f__B4E9_01A8_0007_3354(); return; }
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6D5D));
	emu_push(emu_cs); emu_push(0x01A5); emu_cs = 0x10E4; emu_ip = 0x0724; emu_last_cs = 0xB4E9; emu_last_ip = 0x01A0; emu_last_length = 0x0017; emu_last_crc = 0x170C; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__B4E9_01A8_0007_3354()
 *
 * @name f__B4E9_01A8_0007_3354
 * @implements B4E9:01A8:0007:3354 ()
 *
 * Called From: B4E9:0194:0017:170C
 */
void f__B4E9_01A8_0007_3354()
{
	emu_orw(&emu_si, emu_si);
	if (!emu_flags.zf) { f__B4E9_01AF_002D_E2A4(); return; }
	f__B4E9_0252_000C_F8C8(); return;
}

/**
 * Decompiled function f__B4E9_01AF_002D_E2A4()
 *
 * @name f__B4E9_01AF_002D_E2A4
 * @implements B4E9:01AF:002D:E2A4 ()
 *
 * Called From: B4E9:01AA:0007:3354
 */
void f__B4E9_01AF_002D_E2A4()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3C28));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x3C26));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_dx.x);
	emu_movw(&emu_ax.x, emu_si);
	emu_movw(&emu_dx.x, 0xC);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_dx.x, 0x2E8A);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_es, emu_dx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x10));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_es, emu_bx.x,  0xE));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_dx.x);
	f__B4E9_0235_0015_A3B9(); return;
}

/**
 * Decompiled function f__B4E9_01DC_002D_BB29()
 *
 * @name f__B4E9_01DC_002D_BB29
 * @implements B4E9:01DC:002D:BB29 ()
 *
 * Called From: B4E9:023B:0015:A3B9
 * Called From: B4E9:023B:0027:269C
 */
void f__B4E9_01DC_002D_BB29()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_andws(&emu_get_memory16(emu_es, emu_bx.x,  0x2E), 0xFE);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_orws(&emu_get_memory16(emu_es, emu_bx.x,  0xE), 0x8);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x0));
	emu_movb(&emu_ax.h, 0x0);
	emu_push(emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x4));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_incw(&emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0209); emu_cs = 0x01F7; f__01F7_286D_0023_087E();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E9) { ovl__34E9(0xFF); }
	f__B4E9_0209_001A_70F8();
}

/**
 * Decompiled function f__B4E9_0209_001A_70F8()
 *
 * @name f__B4E9_0209_001A_70F8
 * @implements B4E9:0209:001A:70F8 ()
 *
 * Called From: B4E9:0209:002D:BB29
 */
void f__B4E9_0209_001A_70F8()
{
	emu_addws(&emu_sp, 0x8);
	emu_orw(&emu_ax.x, emu_dx.x);
	if (emu_flags.zf) { f__B4E9_0218_000B_3127(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_andws(&emu_get_memory16(emu_es, emu_bx.x,  0xE), 0xF7);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_cs); emu_push(0x0223); emu_cs = 0x34A2; ovl__34A2(0);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E9) { ovl__34E9(0xFF); }
	f__B4E9_0223_0027_269C();
}

/**
 * Decompiled function f__B4E9_0218_000B_3127()
 *
 * @name f__B4E9_0218_000B_3127
 * @implements B4E9:0218:000B:3127 ()
 *
 * Called From: B4E9:020E:001A:70F8
 */
void f__B4E9_0218_000B_3127()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_cs); emu_push(0x0223); emu_cs = 0x34A2; ovl__34A2(0);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E9) { ovl__34E9(0xFF); }
	f__B4E9_0223_0027_269C();
}

/**
 * Decompiled function f__B4E9_0223_0027_269C()
 *
 * @name f__B4E9_0223_0027_269C
 * @implements B4E9:0223:0027:269C ()
 *
 * Called From: 261F:01B9:001B:DA28
 * Called From: B4E9:0223:000B:3127
 * Called From: B4E9:0223:001A:70F8
 */
void f__B4E9_0223_0027_269C()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x2));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_dx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	if (!emu_flags.zf) { f__B4E9_01DC_002D_BB29(); return; }
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3C28));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3C26));
	emu_push(emu_cs); emu_push(0x024A); emu_cs = 0x348B; ovl__348B(7);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E9) { ovl__34E9(0xFF); }
	f__B4E9_024A_0014_BC58();
}

/**
 * Decompiled function f__B4E9_0235_0015_A3B9()
 *
 * @name f__B4E9_0235_0015_A3B9
 * @implements B4E9:0235:0015:A3B9 ()
 *
 * Called From: B4E9:01DA:002D:E2A4
 */
void f__B4E9_0235_0015_A3B9()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	if (!emu_flags.zf) { f__B4E9_01DC_002D_BB29(); return; }
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3C28));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3C26));
	emu_push(emu_cs); emu_push(0x024A); emu_cs = 0x348B; emu_ip = 0x028D; emu_last_cs = 0xB4E9; emu_last_ip = 0x0245; emu_last_length = 0x0015; emu_last_crc = 0xA3B9; emu_call(); // Jump does not resolve
	f__B4E9_024A_0014_BC58();
}

/**
 * Decompiled function f__B4E9_024A_0014_BC58()
 *
 * @name f__B4E9_024A_0014_BC58
 * @implements B4E9:024A:0014:BC58 ()
 *
 * Called From: 261F:01B9:001B:DA28
 * Called From: B4E9:024A:0027:269C
 */
void f__B4E9_024A_0014_BC58()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x38C4), 0x1);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00,  0x3A0E));
	emu_cmpws(&emu_bx.x, 0x4);
	if ((emu_flags.cf || emu_flags.zf)) { f__B4E9_025E_0007_5F8A(); return; }
	f__B4E9_031C_0002_03AC(); return;
}

/**
 * Decompiled function f__B4E9_0252_000C_F8C8()
 *
 * @name f__B4E9_0252_000C_F8C8
 * @implements B4E9:0252:000C:F8C8 ()
 *
 * Called From: B4E9:01AC:0007:3354
 */
void f__B4E9_0252_000C_F8C8()
{
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00,  0x3A0E));
	emu_cmpws(&emu_bx.x, 0x4);
	if ((emu_flags.cf || emu_flags.zf)) { f__B4E9_025E_0007_5F8A(); return; }
	emu_ip = 0x031C; emu_last_cs = 0xB4E9; emu_last_ip = 0x025B; emu_last_length = 0x000C; emu_last_crc = 0xF8C8; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B4E9_025E_0007_5F8A()
 *
 * @name f__B4E9_025E_0007_5F8A
 * @implements B4E9:025E:0007:5F8A ()
 *
 * Called From: B4E9:0259:000C:F8C8
 * Called From: B4E9:0259:0014:BC58
 */
void f__B4E9_025E_0007_5F8A()
{
	emu_shlw(&emu_bx.x, 0x1);

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_cs, emu_bx.x,  0x331);
	switch (emu_ip) {
		case 0x0265: f__B4E9_0265_0008_CC76(); return;
		case 0x027B: f__B4E9_027B_000F_6473(); return;
		case 0x0293: f__B4E9_0293_000B_07DE(); return;
		case 0x02C5: f__B4E9_02C5_0009_7429(); return;
		case 0x02D9: f__B4E9_02D9_0025_5E2B(); return;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0xB4E9; emu_last_ip = 0x0260; emu_last_length = 0x0007; emu_last_crc = 0x5F8A;
			emu_call();
			return;
	}
}

/**
 * Decompiled function f__B4E9_0265_0008_CC76()
 *
 * @name f__B4E9_0265_0008_CC76
 * @implements B4E9:0265:0008:CC76 ()
 *
 * Called From: B4E9:0260:0007:5F8A
 */
void f__B4E9_0265_0008_CC76()
{
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x37AA));
	emu_push(emu_cs);
	emu_push(0x026D); f__B4E9_0000_0013_38BA();
	f__B4E9_026D_000A_1028();
}

/**
 * Decompiled function f__B4E9_026D_000A_1028()
 *
 * @name f__B4E9_026D_000A_1028
 * @implements B4E9:026D:000A:1028 ()
 *
 * Called From: B4E9:026D:0008:CC76
 */
void f__B4E9_026D_000A_1028()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0277); emu_cs = 0x10E4; f__10E4_0F1A_0088_3BE7();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E9) { ovl__34E9(0xFF); }
	f__B4E9_0277_0004_0054();
}

/**
 * Decompiled function f__B4E9_0277_0004_0054()
 *
 * @name f__B4E9_0277_0004_0054
 * @implements B4E9:0277:0004:0054 ()
 *
 * Called From: B4E9:0277:000A:1028
 * Called From: B4E9:02D7:0002:0290
 * Called From: B4E9:0319:0003:07DA
 */
void f__B4E9_0277_0004_0054()
{
	emu_pop(&emu_cx.x);
	f__B4E9_031E_0008_EAEA(); return;
}

/**
 * Decompiled function f__B4E9_027B_000F_6473()
 *
 * @name f__B4E9_027B_000F_6473
 * @implements B4E9:027B:000F:6473 ()
 *
 * Called From: B4E9:0260:0007:5F8A
 */
void f__B4E9_027B_000F_6473()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3A02));
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x38F0), emu_ax.x);
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x028A); emu_cs = 0x10E4; f__10E4_0F1A_0088_3BE7();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E9) { ovl__34E9(0xFF); }
	f__B4E9_028A_0009_7F44();
}

/**
 * Decompiled function f__B4E9_028A_0009_7F44()
 *
 * @name f__B4E9_028A_0009_7F44
 * @implements B4E9:028A:0009:7F44 ()
 *
 * Called From: B4E9:028A:000F:6473
 */
void f__B4E9_028A_0009_7F44()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x3A36), 0x5);
	f__B4E9_02CF_0008_CE9E(); return;
}

/**
 * Decompiled function f__B4E9_0293_000B_07DE()
 *
 * @name f__B4E9_0293_000B_07DE
 * @implements B4E9:0293:000B:07DE ()
 *
 * Called From: B4E9:0260:0007:5F8A
 */
void f__B4E9_0293_000B_07DE()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_cs); emu_push(0x029E); emu_cs = 0x1A34; f__1A34_0F48_0018_F029();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E9) { ovl__34E9(0xFF); }
	f__B4E9_029E_000B_D82A();
}

/**
 * Decompiled function f__B4E9_029E_000B_D82A()
 *
 * @name f__B4E9_029E_000B_D82A
 * @implements B4E9:029E:000B:D82A ()
 *
 * Called From: B4E9:029E:000B:07DE
 */
void f__B4E9_029E_000B_D82A()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x02A9); emu_cs = 0x10E4; f__10E4_0F1A_0088_3BE7();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E9) { ovl__34E9(0xFF); }
	f__B4E9_02A9_001A_26AE();
}

/**
 * Decompiled function f__B4E9_02A9_001A_26AE()
 *
 * @name f__B4E9_02A9_001A_26AE
 * @implements B4E9:02A9:001A:26AE ()
 *
 * Called From: B4E9:02A9:000B:D82A
 */
void f__B4E9_02A9_001A_26AE()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x38E2));
	emu_movw(&emu_dx.x, 0x60);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_dx.x, 0x2C94);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_es, emu_dx.x);
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x44));
	emu_push(emu_cs); emu_push(0x02C3); emu_cs = 0x0F78; f__0F78_0285_001C_B090();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E9) { ovl__34E9(0xFF); }
	f__B4E9_02C3_0002_03BE();
}

/**
 * Decompiled function f__B4E9_02C3_0002_03BE()
 *
 * @name f__B4E9_02C3_0002_03BE
 * @implements B4E9:02C3:0002:03BE ()
 *
 * Called From: B4E9:02C3:001A:26AE
 */
void f__B4E9_02C3_0002_03BE()
{
	f__B4E9_02CE_0009_7C9E(); return;
}

/**
 * Decompiled function f__B4E9_02C5_0009_7429()
 *
 * @name f__B4E9_02C5_0009_7429
 * @implements B4E9:02C5:0009:7429 ()
 *
 * Called From: B4E9:0260:0007:5F8A
 */
void f__B4E9_02C5_0009_7429()
{
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x02CE); emu_cs = 0x10E4; f__10E4_0F1A_0088_3BE7();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E9) { ovl__34E9(0xFF); }
	f__B4E9_02CE_0009_7C9E();
}

/**
 * Decompiled function f__B4E9_02CE_0009_7C9E()
 *
 * @name f__B4E9_02CE_0009_7C9E
 * @implements B4E9:02CE:0009:7C9E ()
 *
 * Called From: B4E9:02C3:0002:03BE
 * Called From: B4E9:02CE:0009:7429
 */
void f__B4E9_02CE_0009_7C9E()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x37AA));
	emu_push(emu_cs);
	emu_push(0x02D7); f__B4E9_0000_0013_38BA();
	f__B4E9_02D7_0002_0290();
}

/**
 * Decompiled function f__B4E9_02CF_0008_CE9E()
 *
 * @name f__B4E9_02CF_0008_CE9E
 * @implements B4E9:02CF:0008:CE9E ()
 *
 * Called From: B4E9:0291:0009:7F44
 */
void f__B4E9_02CF_0008_CE9E()
{
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x37AA));
	emu_push(emu_cs);
	emu_push(0x02D7); f__B4E9_0000_0013_38BA();
	f__B4E9_02D7_0002_0290();
}

/**
 * Decompiled function f__B4E9_02D7_0002_0290()
 *
 * @name f__B4E9_02D7_0002_0290
 * @implements B4E9:02D7:0002:0290 ()
 *
 * Called From: B4E9:02D7:0009:7C9E
 * Called From: B4E9:02D7:0008:CE9E
 */
void f__B4E9_02D7_0002_0290()
{
	f__B4E9_0277_0004_0054(); return;
}

/**
 * Decompiled function f__B4E9_02D9_0025_5E2B()
 *
 * @name f__B4E9_02D9_0025_5E2B
 * @implements B4E9:02D9:0025:5E2B ()
 *
 * Called From: B4E9:0260:0007:5F8A
 */
void f__B4E9_02D9_0025_5E2B()
{
	emu_cmpws(&emu_di, 0x7);
	if (emu_flags.zf) { f__B4E9_0301_0018_3939(); return; }
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x3A34), 0x0);
	emu_movw(&emu_ax.x, 0x2DCE);
	emu_movw(&emu_es, emu_ax.x);
	emu_push(emu_get_memory16(emu_es, 0x00,  0x442));
	emu_push(emu_get_memory16(emu_es, 0x00,  0x440));
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x02FE); emu_cs = 0x2B4C; f__2B4C_0002_0029_9CF8();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E9) { ovl__34E9(0xFF); }
	f__B4E9_02FE_001B_213E();
}

/**
 * Decompiled function f__B4E9_02FE_001B_213E()
 *
 * @name f__B4E9_02FE_001B_213E
 * @implements B4E9:02FE:001B:213E ()
 *
 * Called From: B4E9:02FE:0025:5E2B
 */
void f__B4E9_02FE_001B_213E()
{
	emu_addws(&emu_sp, 0x8);
	emu_movw(&emu_ax.x, emu_si);
	emu_movw(&emu_dx.x, 0xC);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_dx.x, 0x2E8A);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_es, emu_dx.x);
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x16));
	emu_push(emu_cs); emu_push(0x0319); emu_cs = 0x07AE; f__07AE_0000_00DF_386F();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E9) { ovl__34E9(0xFF); }
	f__B4E9_0319_0003_07DA();
}

/**
 * Decompiled function f__B4E9_0301_0018_3939()
 *
 * @name f__B4E9_0301_0018_3939
 * @implements B4E9:0301:0018:3939 ()
 *
 * Called From: B4E9:02DC:0025:5E2B
 */
void f__B4E9_0301_0018_3939()
{
	emu_movw(&emu_ax.x, emu_si);
	emu_movw(&emu_dx.x, 0xC);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_dx.x, 0x2E8A);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_es, emu_dx.x);
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x16));
	emu_push(emu_cs); emu_push(0x0319); emu_cs = 0x07AE; f__07AE_0000_00DF_386F();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E9) { ovl__34E9(0xFF); }
	f__B4E9_0319_0003_07DA();
}

/**
 * Decompiled function f__B4E9_0319_0003_07DA()
 *
 * @name f__B4E9_0319_0003_07DA
 * @implements B4E9:0319:0003:07DA ()
 *
 * Called From: B4E9:0319:0018:3939
 * Called From: B4E9:0319:001B:213E
 */
void f__B4E9_0319_0003_07DA()
{
	f__B4E9_0277_0004_0054(); return;
}

/**
 * Decompiled function f__B4E9_031C_0002_03AC()
 *
 * @name f__B4E9_031C_0002_03AC
 * @implements B4E9:031C:0002:03AC ()
 *
 * Called From: B4E9:025B:0014:BC58
 */
void f__B4E9_031C_0002_03AC()
{
	f__B4E9_031E_0008_EAEA(); return;
}

/**
 * Decompiled function f__B4E9_031E_0008_EAEA()
 *
 * @name f__B4E9_031E_0008_EAEA
 * @implements B4E9:031E:0008:EAEA ()
 *
 * Called From: B4E9:00AF:0023:1B7D
 * Called From: B4E9:0278:0004:0054
 * Called From: B4E9:031C:0002:03AC
 */
void f__B4E9_031E_0008_EAEA()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_cs); emu_push(0x0326); emu_cs = 0x2598; f__2598_0000_0017_D681();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E9) { ovl__34E9(0xFF); }
	f__B4E9_0326_0005_0DBC();
}

/**
 * Decompiled function f__B4E9_0326_0005_0DBC()
 *
 * @name f__B4E9_0326_0005_0DBC
 * @implements B4E9:0326:0005:0DBC ()
 *
 * Called From: B4E9:0326:0008:EAEA
 */
void f__B4E9_0326_0005_0DBC()
{
	emu_pop(&emu_cx.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__B4E9_032B_0006_137A(); return;
}

/**
 * Decompiled function f__B4E9_032B_0006_137A()
 *
 * @name f__B4E9_032B_0006_137A
 * @implements B4E9:032B:0006:137A ()
 *
 * Called From: B4E9:0329:0005:0DBC
 */
void f__B4E9_032B_0006_137A()
{
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
 * Decompiled function f__B4E9_0345_0023_4149()
 *
 * @name f__B4E9_0345_0023_4149
 * @implements B4E9:0345:0023:4149 ()
 *
 * Called From: 34E9:002F:0005:197E
 * Called From: 34E9:002F:0005:1B94
 * Called From: 34E9:002F:0005:1AF6
 */
void f__B4E9_0345_0023_4149()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x3A34), 0x0);
	emu_movw(&emu_ax.x, 0x2DCE);
	emu_movw(&emu_es, emu_ax.x);
	emu_push(emu_get_memory16(emu_es, 0x00,  0x442));
	emu_push(emu_get_memory16(emu_es, 0x00,  0x440));
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0368); emu_cs = 0x2B4C; f__2B4C_0002_0029_9CF8();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E9) { ovl__34E9(0xFF); }
	f__B4E9_0368_000C_C60B();
}

/**
 * Decompiled function f__B4E9_0368_000C_C60B()
 *
 * @name f__B4E9_0368_000C_C60B
 * @implements B4E9:0368:000C:C60B ()
 *
 * Called From: B4E9:0368:0023:4149
 */
void f__B4E9_0368_000C_C60B()
{
	emu_addws(&emu_sp, 0x8);
	emu_movw(&emu_ax.x, 0xFFFE);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0374); emu_cs = 0x3483; ovl__3483(2);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E9) { ovl__34E9(0xFF); }
	f__B4E9_0374_000C_9261();
}

/**
 * Decompiled function f__B4E9_0374_000C_9261()
 *
 * @name f__B4E9_0374_000C_9261
 * @implements B4E9:0374:000C:9261 ()
 *
 * Called From: B4E9:0374:000C:C60B
 */
void f__B4E9_0374_000C_9261()
{
	emu_pop(&emu_cx.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_cs); emu_push(0x0380); emu_cs = 0x1DD7; f__1DD7_022D_0015_1B0E();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E9) { ovl__34E9(0xFF); }
	f__B4E9_0380_0015_2FFB();
}

/**
 * Decompiled function f__B4E9_0380_0015_2FFB()
 *
 * @name f__B4E9_0380_0015_2FFB
 * @implements B4E9:0380:0015:2FFB ()
 *
 * Called From: B4E9:0380:000C:9261
 */
void f__B4E9_0380_0015_2FFB()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3A38));
	emu_movw(&emu_dx.x, 0x1E);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, emu_bx.x,  0x3810));
	emu_push(emu_cs); emu_push(0x0395); emu_cs = 0x3483; ovl__3483(1);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E9) { ovl__34E9(0xFF); }
	f__B4E9_0395_0006_05D8();
}

/**
 * Decompiled function f__B4E9_0395_0006_05D8()
 *
 * @name f__B4E9_0395_0006_05D8
 * @implements B4E9:0395:0006:05D8 ()
 *
 * Called From: B4E9:0395:0015:2FFB
 */
void f__B4E9_0395_0006_05D8()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_cs); emu_push(0x039B); emu_cs = 0x34B8; ovl__34B8(1);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E9) { ovl__34E9(0xFF); }
	f__B4E9_039B_0015_5D71();
}

/**
 * Decompiled function f__B4E9_039B_0015_5D71()
 *
 * @name f__B4E9_039B_0015_5D71
 * @implements B4E9:039B:0015:5D71 ()
 *
 * Called From: 261F:01B9:001B:DA28
 * Called From: B4E9:039B:0006:05D8
 */
void f__B4E9_039B_0015_5D71()
{
	emu_movw(&emu_ax.x, 0x2DCE);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x440);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x7);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x03B0); emu_cs = 0x34B8; ovl__34B8(4);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E9) { ovl__34E9(0xFF); }
	f__B4E9_03B0_000A_A8C3();
}

/**
 * Decompiled function f__B4E9_03B0_000A_A8C3()
 *
 * @name f__B4E9_03B0_000A_A8C3
 * @implements B4E9:03B0:000A:A8C3 ()
 *
 * Called From: B4E9:03B0:0015:5D71
 */
void f__B4E9_03B0_000A_A8C3()
{
	emu_addws(&emu_sp, 0x8);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x03BA); f__B4E9_0000_0013_38BA();
	f__B4E9_03BA_0009_E7A8();
}

/**
 * Decompiled function f__B4E9_03BA_0009_E7A8()
 *
 * @name f__B4E9_03BA_0009_E7A8
 * @implements B4E9:03BA:0009:E7A8 ()
 *
 * Called From: B4E9:03BA:000A:A8C3
 */
void f__B4E9_03BA_0009_E7A8()
{
	emu_pop(&emu_cx.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x03C3); emu_cs = 0x34E0; ovl__34E0(0);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E9) { ovl__34E9(0xFF); }
	f__B4E9_03C3_0009_0608();
}

/**
 * Decompiled function f__B4E9_03C3_0009_0608()
 *
 * @name f__B4E9_03C3_0009_0608
 * @implements B4E9:03C3:0009:0608 ()
 *
 * Called From: 261F:01B9:001B:DA28
 */
void f__B4E9_03C3_0009_0608()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x03CC); f__B4E9_0000_0013_38BA();
	f__B4E9_03CC_000A_1676();
}

/**
 * Decompiled function f__B4E9_03CC_000A_1676()
 *
 * @name f__B4E9_03CC_000A_1676
 * @implements B4E9:03CC:000A:1676 ()
 *
 * Called From: B4E9:03CC:0009:0608
 */
void f__B4E9_03CC_000A_1676()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x03D6); emu_cs = 0x1DD7; f__1DD7_0477_000E_E978();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E9) { ovl__34E9(0xFF); }
	f__B4E9_03D6_0015_4BD4();
}

/**
 * Decompiled function f__B4E9_03D6_0015_4BD4()
 *
 * @name f__B4E9_03D6_0015_4BD4
 * @implements B4E9:03D6:0015:4BD4 ()
 *
 * Called From: B4E9:03D6:000A:1676
 */
void f__B4E9_03D6_0015_4BD4()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_ax.x, 0x2DCE);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x440);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x7);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x03EB); emu_cs = 0x34B8; ovl__34B8(4);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E9) { ovl__34E9(0xFF); }
	f__B4E9_03EB_0008_F158();
}

/**
 * Decompiled function f__B4E9_03EB_0008_F158()
 *
 * @name f__B4E9_03EB_0008_F158
 * @implements B4E9:03EB:0008:F158 ()
 *
 * Called From: 261F:01B9:001B:DA28
 * Called From: B4E9:03EB:0015:4BD4
 */
void f__B4E9_03EB_0008_F158()
{
	emu_addws(&emu_sp, 0x8);
	emu_push(emu_cs); emu_push(0x03F3); emu_cs = 0x34B8; ovl__34B8(5);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E9) { ovl__34E9(0xFF); }
	f__B4E9_03F3_000E_DB5C();
}

/**
 * Decompiled function f__B4E9_03F3_000E_DB5C()
 *
 * @name f__B4E9_03F3_000E_DB5C
 * @implements B4E9:03F3:000E:DB5C ()
 *
 * Called From: B4E9:03F3:0008:F158
 */
void f__B4E9_03F3_000E_DB5C()
{
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x38C4), 0x1);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0401); emu_cs = 0x10E4; f__10E4_2099_0012_A974();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E9) { ovl__34E9(0xFF); }
	f__B4E9_0401_000D_7C16();
}

/**
 * Decompiled function f__B4E9_0401_000D_7C16()
 *
 * @name f__B4E9_0401_000D_7C16
 * @implements B4E9:0401:000D:7C16 ()
 *
 * Called From: 261F:01B9:001B:DA28
 */
void f__B4E9_0401_000D_7C16()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_ax.x, 0x5);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x040E); emu_cs = 0x2537; f__2537_000C_001C_1A9E();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E9) { ovl__34E9(0xFF); }
	f__B4E9_040E_000B_A977();
}

/**
 * Decompiled function f__B4E9_040E_000B_A977()
 *
 * @name f__B4E9_040E_000B_A977
 * @implements B4E9:040E:000B:A977 ()
 *
 * Called From: B4E9:040E:000D:7C16
 */
void f__B4E9_040E_000B_A977()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_addw(&emu_ax.x, 0x8);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0419); emu_cs = 0x3483; ovl__3483(1);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E9) { ovl__34E9(0xFF); }
	f__B4E9_0419_0006_02FC();
}

/**
 * Decompiled function f__B4E9_0419_0006_02FC()
 *
 * @name f__B4E9_0419_0006_02FC
 * @implements B4E9:0419:0006:02FC ()
 *
 * Called From: B4E9:0419:000B:A977
 */
void f__B4E9_0419_0006_02FC()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_ax.x, 0x1);
	f__B4E9_041F_0002_00E2(); return;
}

/**
 * Decompiled function f__B4E9_041F_0002_00E2()
 *
 * @name f__B4E9_041F_0002_00E2
 * @implements B4E9:041F:0002:00E2 ()
 *
 * Called From: B4E9:041D:0006:02FC
 */
void f__B4E9_041F_0002_00E2()
{
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__1381_0005_0010_9159()
 *
 * @name f__1381_0005_0010_9159
 * @implements 1381:0005:0010:9159 ()
 *
 * Called From: B4B5:054C:000A:A031
 */
void f__1381_0005_0010_9159()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_si);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_flags.zf) { emu_ip = 0x0049; emu_last_cs = 0x1381; emu_last_ip = 0x000F; emu_last_length = 0x0010; emu_last_crc = 0x9159; emu_call(); return; } // Jump does not resolve
	emu_xorw(&emu_si, emu_si);
	f__1381_0044_000A_EE41(); return;
}

/**
 * Decompiled function f__1381_0015_0023_2101()
 *
 * @name f__1381_0015_0023_2101
 * @implements 1381:0015:0023:2101 ()
 *
 * Called From: 1381:0047:000A:EE41
 * Called From: 1381:0047:000B:DE43
 */
void f__1381_0015_0023_2101()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_si);
	emu_movw(&emu_dx.x, 0xC);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_dx.x, 0x2E8A);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_es, emu_dx.x);
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x72));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x70));
	emu_push(emu_cs); emu_push(0x0038); emu_cs = 0x01F7; f__01F7_3964_0041_A550();
	f__1381_0038_000B_63FD();
}

/**
 * Decompiled function f__1381_0038_000B_63FD()
 *
 * @name f__1381_0038_000B_63FD
 * @implements 1381:0038:000B:63FD ()
 *
 * Called From: 1381:0038:0023:2101
 */
void f__1381_0038_000B_63FD()
{
	emu_addws(&emu_sp, 0x8);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.zf) { f__1381_0043_000B_DE43(); return; }
	emu_movw(&emu_ax.x, emu_si);
	f__1381_004E_0003_0212(); return;
}

/**
 * Decompiled function f__1381_0043_000B_DE43()
 *
 * @name f__1381_0043_000B_DE43
 * @implements 1381:0043:000B:DE43 ()
 *
 * Called From: 1381:003D:000B:63FD
 */
void f__1381_0043_000B_DE43()
{
	emu_incw(&emu_si);
	emu_cmpws(&emu_si, 0xE);
	if ((emu_flags.sf != emu_flags.of)) { f__1381_0015_0023_2101(); return; }
	emu_movw(&emu_ax.x, 0xFFFF);
	emu_ip = 0x0041; emu_last_cs = 0x1381; emu_last_ip = 0x004C; emu_last_length = 0x000B; emu_last_crc = 0xDE43; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__1381_0044_000A_EE41()
 *
 * @name f__1381_0044_000A_EE41
 * @implements 1381:0044:000A:EE41 ()
 *
 * Called From: 1381:0013:0010:9159
 */
void f__1381_0044_000A_EE41()
{
	emu_cmpws(&emu_si, 0xE);
	if ((emu_flags.sf != emu_flags.of)) { f__1381_0015_0023_2101(); return; }
	emu_movw(&emu_ax.x, 0xFFFF);
	emu_ip = 0x0041; emu_last_cs = 0x1381; emu_last_ip = 0x004C; emu_last_length = 0x000A; emu_last_crc = 0xEE41; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__1381_004E_0003_0212()
 *
 * @name f__1381_004E_0003_0212
 * @implements 1381:004E:0003:0212 ()
 *
 * Called From: 1381:0041:000B:63FD
 */
void f__1381_004E_0003_0212()
{
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__1381_0051_0010_9077()
 *
 * @name f__1381_0051_0010_9077
 * @implements 1381:0051:0010:9077 ()
 *
 * Called From: B4B5:0443:000A:A571
 * Called From: B4B5:079C:000A:A571
 * Called From: B4B5:0CEF:000A:A571
 * Called From: B4B5:0EDC:000A:A571
 */
void f__1381_0051_0010_9077()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_si);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_flags.zf) { f__1381_008E_0005_1D42(); return; }
	emu_xorw(&emu_si, emu_si);
	f__1381_0089_000A_E181(); return;
}

/**
 * Decompiled function f__1381_0061_001C_E8EE()
 *
 * @name f__1381_0061_001C_E8EE
 * @implements 1381:0061:001C:E8EE ()
 *
 * Called From: 1381:008C:000A:E181
 * Called From: 1381:008C:000B:D183
 */
void f__1381_0061_001C_E8EE()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_si);
	emu_movw(&emu_dx.x, 0x1E);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, emu_bx.x,  0x37FA));
	emu_push(emu_get_memory16(emu_ds, emu_bx.x,  0x37F8));
	emu_push(emu_cs); emu_push(0x007D); emu_cs = 0x01F7; f__01F7_3964_0041_A550();
	f__1381_007D_000B_63FD();
}

/**
 * Decompiled function f__1381_007D_000B_63FD()
 *
 * @name f__1381_007D_000B_63FD
 * @implements 1381:007D:000B:63FD ()
 *
 * Called From: 1381:007D:001C:E8EE
 */
void f__1381_007D_000B_63FD()
{
	emu_addws(&emu_sp, 0x8);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.zf) { f__1381_0088_000B_D183(); return; }
	emu_movw(&emu_ax.x, emu_si);
	f__1381_0093_0003_0212(); return;
}

/**
 * Decompiled function f__1381_0086_0002_03BA()
 *
 * @name f__1381_0086_0002_03BA
 * @implements 1381:0086:0002:03BA ()
 *
 * Called From: 1381:0091:0005:1D42
 */
void f__1381_0086_0002_03BA()
{
	f__1381_0093_0003_0212(); return;
}

/**
 * Decompiled function f__1381_0088_000B_D183()
 *
 * @name f__1381_0088_000B_D183
 * @implements 1381:0088:000B:D183 ()
 *
 * Called From: 1381:0082:000B:63FD
 */
void f__1381_0088_000B_D183()
{
	emu_incw(&emu_si);
	emu_cmpws(&emu_si, 0x6);
	if ((emu_flags.sf != emu_flags.of)) { f__1381_0061_001C_E8EE(); return; }
	emu_movw(&emu_ax.x, 0xFFFF);
	emu_ip = 0x0086; emu_last_cs = 0x1381; emu_last_ip = 0x0091; emu_last_length = 0x000B; emu_last_crc = 0xD183; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__1381_0089_000A_E181()
 *
 * @name f__1381_0089_000A_E181
 * @implements 1381:0089:000A:E181 ()
 *
 * Called From: 1381:005F:0010:9077
 */
void f__1381_0089_000A_E181()
{
	emu_cmpws(&emu_si, 0x6);
	if ((emu_flags.sf != emu_flags.of)) { f__1381_0061_001C_E8EE(); return; }
	emu_movw(&emu_ax.x, 0xFFFF);
	emu_ip = 0x0086; emu_last_cs = 0x1381; emu_last_ip = 0x0091; emu_last_length = 0x000A; emu_last_crc = 0xE181; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__1381_008E_0005_1D42()
 *
 * @name f__1381_008E_0005_1D42
 * @implements 1381:008E:0005:1D42 ()
 *
 * Called From: 1381:005B:0010:9077
 */
void f__1381_008E_0005_1D42()
{
	emu_movw(&emu_ax.x, 0xFFFF);
	f__1381_0086_0002_03BA(); return;
}

/**
 * Decompiled function f__1381_0093_0003_0212()
 *
 * @name f__1381_0093_0003_0212
 * @implements 1381:0093:0003:0212 ()
 *
 * Called From: 1381:0086:000B:63FD
 * Called From: 1381:0086:0002:03BA
 */
void f__1381_0093_0003_0212()
{
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

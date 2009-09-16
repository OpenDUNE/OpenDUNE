/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__0070_0040_0005_1DBE()
 *
 * @name f__0070_0040_0005_1DBE
 * @implements 0070:0040:0005:1DBE ()
 *
 * Called From: 0000:0000:0000:0000
 * Called From: 2756:0623:0006:2DB2
 */
void f__0070_0040_0005_1DBE()
{
	emu_syscall(0x8);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	emu_popf();
	return;
}

/**
 * Decompiled function f__0070_0048_0005_1DB6()
 *
 * @name f__0070_0048_0005_1DB6
 * @implements 0070:0048:0005:1DB6 ()
 *
 * Called From: 29E8:0F49:0012:729D
 */
void f__0070_0048_0005_1DB6()
{
	emu_syscall(0x9);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	emu_popf();
	return;
}

/**
 * Decompiled function f__0070_0080_0005_1D7E()
 *
 * @name f__0070_0080_0005_1D7E
 * @implements 0070:0080:0005:1D7E ()
 *
 * Called From: 3EEE:0E83:0003:01BC
 * Called From: 3EEE:0E87:0003:01BC
 * Called From: 3EEE:0EB7:0003:01BC
 * Called From: 3EEE:0EBB:0003:01BC
 * Called From: 3EEE:0EC3:0003:01BC
 * Called From: B4B8:1850:0011:B0C7
 */
void f__0070_0080_0005_1D7E()
{
	emu_syscall(0x10);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	emu_popf();
	return;
}

/**
 * Decompiled function f__0070_00A8_0005_1D56()
 *
 * @name f__0070_00A8_0005_1D56
 * @implements 0070:00A8:0005:1D56 ()
 *
 * Called From: 217E:0FC3:0004:0C1E
 */
void f__0070_00A8_0005_1D56()
{
	emu_syscall(0x15);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	emu_popf();
	return;
}

/**
 * Decompiled function f__0070_00D0_0005_1D2E()
 *
 * @name f__0070_00D0_0005_1D2E
 * @implements 0070:00D0:0005:1D2E ()
 *
 * Called From: 01F7:010E:0004:0840
 */
void f__0070_00D0_0005_1D2E()
{
	emu_syscall(0x1A);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	emu_popf();
	return;
}

/**
 * Decompiled function f__0070_00E0_0005_1D1E()
 *
 * @name f__0070_00E0_0005_1D1E
 * @implements 0070:00E0:0005:1D1E ()
 *
 * Called From: 0000:0000:0000:0000
 */
void f__0070_00E0_0005_1D1E()
{
	emu_syscall(0x1C);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	emu_popf();
	return;
}

/**
 * Decompiled function f__0070_0108_0005_1CF6()
 *
 * @name f__0070_0108_0005_1CF6
 * @implements 0070:0108:0005:1CF6 ()
 *
 * Called From: 01F7:000A:000C:7FBC
 * Called From: 01F7:0097:0018:9706
 * Called From: 01F7:0172:0009:A577
 * Called From: 01F7:0181:0006:125E
 * Called From: 01F7:018E:000D:3D0D
 * Called From: 01F7:019B:000D:031D
 * Called From: 01F7:01A8:000D:E12C
 * Called From: 01F7:01BC:0014:ED9D
 * Called From: 01F7:01C8:000A:2FC7
 * Called From: 01F7:01D3:000B:D387
 * Called From: 01F7:01DE:000B:D147
 * Called From: 01F7:01E9:000B:D207
 * Called From: 01F7:02FC:0007:1D3E
 * Called From: 01F7:0313:000C:D785
 * Called From: 01F7:03F2:000F:B264
 * Called From: 01F7:0407:0007:1CA6
 * Called From: 01F7:041A:0007:1C96
 * Called From: 01F7:049F:000D:E6E0
 * Called From: 01F7:04C5:000A:EF26
 * Called From: 01F7:04D8:000E:9C78
 * Called From: 01F7:06C9:000B:E2C7
 * Called From: 01F7:078F:001E:492D
 * Called From: 01F7:082D:000E:6DE1
 * Called From: 01F7:208C:0014:A979
 * Called From: 01F7:21E9:000D:84E1
 * Called From: 01F7:22F7:0011:8341
 * Called From: 01F7:23FC:000A:EC46
 * Called From: 01F7:2A00:000E:9D39
 * Called From: 01F7:2B9D:000F:B44C
 * Called From: 01F7:2B9D:002A:42F7
 * Called From: 01F7:4467:000E:9DE6
 * Called From: 217E:00A2:0024:F8B6
 * Called From: 217E:00EE:001E:E542
 * Called From: 217E:0153:0010:E1D0
 * Called From: 217E:0165:0012:E1E2
 * Called From: 217E:017D:0018:3A84
 * Called From: 217E:0190:000B:6A53
 * Called From: 217E:01C8:0004:09B6
 * Called From: 217E:028D:0010:6AFE
 * Called From: 217E:0298:000A:4DAF
 * Called From: 217E:03F5:000A:4A26
 * Called From: 217E:0411:000F:0B37
 * Called From: 217E:0DBF:000B:195E
 * Called From: 217E:0F16:0027:572C
 * Called From: 28FD:0011:0007:3E7E
 * Called From: 28FD:001A:0009:55C7
 * Called From: 28FD:0029:000F:8F35
 * Called From: 29A3:022B:0009:C96E
 * Called From: 29E8:09E0:0005:154E
 * Called From: 29E8:09F6:0016:404E
 * Called From: 29E8:09FB:0005:17EE
 * Called From: 29E8:0A11:0016:5D4F
 * Called From: 29E8:0F85:000D:CDE0
 * Called From: 29E8:0F8F:000A:1D4F
 */
void f__0070_0108_0005_1CF6()
{
	emu_syscall(0x21);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	emu_popf();
	return;
}

/**
 * Decompiled function f__0070_0178_0005_1C86()
 *
 * @name f__0070_0178_0005_1C86
 * @implements 0070:0178:0005:1C86 ()
 *
 * Called From: 217E:0F45:0005:1672
 * Called From: 2BF2:0005:0007:3E72
 */
void f__0070_0178_0005_1C86()
{
	emu_syscall(0x2F);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	emu_popf();
	return;
}

/**
 * Decompiled function f__0070_0198_0005_1C66()
 *
 * @name f__0070_0198_0005_1C66
 * @implements 0070:0198:0005:1C66 ()
 *
 * Called From: 29A3:026C:0005:1452
 * Called From: 29A3:027C:0010:B419
 * Called From: 29A3:02A6:002A:87EA
 * Called From: 29A3:02B3:000D:0D87
 * Called From: 29A3:02D3:0018:1436
 * Called From: 2B42:0055:001B:481C
 * Called From: 2B42:009B:0010:E709
 * Called From: 2B99:0049:0019:9712
 */
void f__0070_0198_0005_1C66()
{
	emu_syscall(0x33);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	emu_popf();
	return;
}

#include <stdio.h>
#include "types.h"
#include "libemu.h"

int main(int argc, char **argv)
{
	extern void f__01F7_0000_000C_7FBC();
	emu_hard_link(0x01F7, 0x0000, &f__01F7_0000_000C_7FBC);
	extern void f__0070_00E0_0005_1D1E();
	emu_hard_link(0x0070, 0x00E0, &f__0070_00E0_0005_1D1E);
	extern void f__0070_0040_0005_1DBE();
	emu_hard_link(0x0070, 0x0040, &f__0070_0040_0005_1DBE);
	extern void f__29E8_0D47_0096_DF8B();
	emu_hard_link(0x29E8, 0x0D47, &f__29E8_0D47_0096_DF8B);
	extern void f__2756_050F_000B_0D47();
	emu_hard_link(0x2756, 0x050F, &f__2756_050F_000B_0D47);
	extern void f__29A3_0054_005C_845B();
	emu_hard_link(0x29A3, 0x0054, &f__29A3_0054_005C_845B);

	emu_init(argc, argv);
	emu_overlay = 1;
	emu_hard_jump(emu_cs, emu_ip);
	while (1) emu_hard_jump_recursive(emu_deep);

	return 1;
}

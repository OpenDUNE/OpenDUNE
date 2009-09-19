#include <stdio.h>
#include "types.h"
#include "libemu.h"

extern void f__29E8_0D47_0096_3777();
extern void f__0070_00E0_0005_E3FB();
extern void f__0070_0040_0005_E17B();
extern void f__01F7_0000_000C_3D76();
extern void f__2756_050F_000B_0871();
extern void Mouse_EventHandler();

int main(int argc, char **argv)
{
	emu_hard_link(0x29E8, 0x0D47, &f__29E8_0D47_0096_3777);
	emu_hard_link(0x0070, 0x00E0, &f__0070_00E0_0005_E3FB);
	emu_hard_link(0x0070, 0x0040, &f__0070_0040_0005_E17B);
	emu_hard_link(0x01F7, 0x0000, &f__01F7_0000_000C_3D76);
	emu_hard_link(0x2756, 0x050F, &f__2756_050F_000B_0871);
	emu_hard_link(0x29A3, 0x0054, &Mouse_EventHandler);

	emu_init(argc, argv);
	emu_overlay = 1;

	/* Initialize all subsystems */
	system_Init_Input();

	emu_hard_jump(emu_cs, emu_ip);
	while (1) emu_hard_jump_recursive(emu_deep);

	return 1;
}

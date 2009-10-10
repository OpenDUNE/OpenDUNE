#include <stdio.h>
#include "types.h"
#include "libemu.h"

extern void f__29E8_0D47_0096_3777();
extern void Interrupt_User_Clock();
extern void Interrupt_Timer();
extern void f__01F7_0000_000C_3D76();
extern void f__2756_050F_000B_0871();
extern void emu_Input_Mouse_EventHandler();

extern void System_Init_Input();
extern void System_Init_Global();
extern void System_Init_Building();
extern void System_Init_Unit();

int main(int argc, char **argv)
{
	emu_hard_link(0x29E8, 0x0D47, &f__29E8_0D47_0096_3777);
	emu_hard_link(0x0070, 0x00E0, &Interrupt_User_Clock);
	emu_hard_link(0x0070, 0x0040, &Interrupt_Timer);
	emu_hard_link(0x01F7, 0x0000, &f__01F7_0000_000C_3D76);
	emu_hard_link(0x2756, 0x050F, &f__2756_050F_000B_0871);
	emu_hard_link(0x29A3, 0x0054, &emu_Input_Mouse_EventHandler);

	emu_init(argc, argv);
	emu_overlay = 1;

	System_Init_Input();
	System_Init_Global();
	System_Init_Building();
	System_Init_Unit();

	emu_hard_jump(emu_cs, emu_ip);
	while (1) emu_hard_jump_recursive(emu_deep);

	return 1;
}

/** @file include/libemu_bios.h Emulated BIOS functions. */

extern void emu_inb(uint8 *dest, uint16 port);
extern void emu_inw(uint16 *dest, uint16 port);
extern void emu_insb();
extern void emu_insw();
extern void emu_outb(uint16 port, uint8 value);
extern void emu_outw(uint16 port, uint16 value);
extern void emu_outsb();
extern void emu_outsw();
extern void emu_syscall(uint8 value);
extern void emu_halt();

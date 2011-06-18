/** @file include/libemu_register.h Emulated flags register routines. */

extern void emu_flags_pf (uint16 value);
extern void emu_flags_zf (uint16 value);
extern void emu_flags_sfb(uint8  value);
extern void emu_flags_sfw(uint16 value);
extern void emu_clc();
extern void emu_stc();
extern void emu_cld();
extern void emu_std();
extern void emu_cli();
extern void emu_sti();
extern void emu_cmc();
extern void emu_salc();
extern void emu_push(uint16 v1);
extern void emu_pop(uint16 *v1);
extern void emu_pushf();
extern void emu_popf();
extern void emu_pusha();
extern void emu_popa();
extern void emu_lahf();
extern void emu_sahf();
extern void emu_arplw(uint16 *dst, uint16 src);

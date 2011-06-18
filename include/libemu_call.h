/** @file include/libemu_call.h Emulated call and jump functions. */

#define emu_call() emu_call2(__FILE__, __LINE__)
extern void emu_call2(char *filename, int lineno);
extern void emu_unknown_call();
extern void emu_calli(                    int16 add_ip, uint16 ret_ip, uint32 from_ip);
extern void emu_calln(                   uint16 new_ip, uint16 ret_ip, uint32 from_ip);
extern void emu_callf(    uint16 new_cs, uint16 new_ip, uint16 ret_ip, uint32 from_ip);
extern void emu_int(                   uint8 interrupt, uint16 ret_ip, uint32 from_ip);
extern void emu_hard_jump_recursive(uint16 deep);
extern void emu_hard_jump(uint16 new_cs, uint16 new_ip);
extern void emu_hard_call(uint16 new_cs, uint16 new_ip);
extern void emu_hard_int(uint8 interrupt);
extern void emu_jmpi(                     int16 add_ip, uint16 ret_ip, uint32 from_ip);
extern void emu_jmpn(                    uint16 new_ip, uint16 ret_ip, uint32 from_ip);
extern void emu_jmpf     (uint16 new_cs, uint16 new_ip, uint16 ret_ip, uint32 from_ip);
extern void emu_ret(  uint8 stack_clean,                               uint32 from_ip);
extern void emu_retf( uint8 stack_clean,                               uint32 from_ip);
extern void emu_reti(                                                  uint32 from_ip);
extern void emu_hard_link(uint16 cs, uint16 ip, void (*proc)());

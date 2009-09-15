
extern void emu_xchgb(uint8 *val1, uint8 *val2);
extern void emu_xchgw(uint16 *val1, uint16 *val2);
extern void emu_lfp(uint16 *seg, uint16 *reg, uint16 *data);
extern void emu_movb(uint8 *dest, uint8 src);
extern void emu_movw(uint16 *dest, uint16 src);
extern void emu_movws(uint16 *dest, int8 src);
extern void emu_movsb(uint16 seg);
extern void emu_movsw(uint16 seg);
extern void emu_lodsb(uint16 seg);
extern void emu_lodsw(uint16 seg);
extern void emu_stosb();
extern void emu_stosw();
extern void emu_cmpsb(uint16 seg);
extern void emu_cmpsw(uint16 seg);
extern void emu_scasb();
extern void emu_scasw();
extern void emu_cwd();

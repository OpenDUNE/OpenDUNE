#ifndef LIBEMU_H
#define LIBEMU_H

/** @file include/libemu.h Emulated memory. */

extern uint8 emu_memory[];

/* A single register */
typedef union emu_reg_t {
	struct { uint8 l; uint8 h; } s;
	uint16 x;
} emu_reg_t;

/* The flags */
typedef union emu_flags_t {
	struct {
		uint32 cf:1;
		uint32 res1:1;
		uint32 pf:1;
		uint32 res2:1;
		uint32 af:1;
		uint32 res3:1;
		uint32 zf:1;
		uint32 sf:1;
		uint32 tp:1;
		uint32 inf:1;
		uint32 df:1;
		uint32 of:1;
		uint32 iopl:2;
		uint32 nt:1;
		uint32 res4:1;
		uint32 unused:16;
	} s;
	uint32 all;
} emu_flags_t;

/* Our registers */
extern uint16 emu_cs, emu_ip;
extern uint16 emu_ss, emu_sp;
extern uint16 emu_si, emu_di;
extern uint16 emu_ds, emu_es;
extern uint16 emu_bp;
extern emu_reg_t emu_ax_i, emu_bx_i, emu_cx_i, emu_dx_i;
extern emu_flags_t emu_flags_i;

/* Allow easy access to the unions */
#define emu_al emu_ax_i.s.l
#define emu_ah emu_ax_i.s.h
#define emu_ax emu_ax_i.x
#define emu_bl emu_bx_i.s.l
#define emu_bh emu_bx_i.s.h
#define emu_bx emu_bx_i.x
#define emu_cl emu_cx_i.s.l
#define emu_ch emu_cx_i.s.h
#define emu_cx emu_cx_i.x
#define emu_dl emu_dx_i.s.l
#define emu_dh emu_dx_i.s.h
#define emu_dx emu_dx_i.x
#define emu_flags emu_flags_i.s
#define emu_flags_all emu_flags_i.all

extern uint8 emu_debug_int;
extern uint32 emu_deep;
extern uint8 emu_overlay;
extern uint16 emu_last_ip;
extern uint16 emu_last_cs;
extern uint16 emu_last_length;
extern uint16 emu_last_crc;

extern void emu_data_monitor(uint16 s, uint16 o, uint16 d, int l);
extern void emu_make_crash_dump();

#ifdef TYPES_H
#define emu_get_csip32(s, o, d) (*((csip32 *)(emu_memory + ((s) << 4) + (((o) + (d)) & 0xFFFF))))
#define emu_get_tile32(s, o, d) (*((tile32 *)(emu_memory + ((s) << 4) + (((o) + (d)) & 0xFFFF))))
#endif /* TYPES_H */

#if 1
#define emu_get_memory8(s, o, d)  (*((uint8  *)(emu_memory + ((s) << 4) + (((o) + (d)) & 0xFFFF))))
#define emu_get_memory16(s, o, d) (*((uint16 *)(emu_memory + ((s) << 4) + (((o) + (d)) & 0xFFFF))))
#define emu_get_memory32(s, o, d) (*((uint32 *)(emu_memory + ((s) << 4) + (((o) + (d)) & 0xFFFF))))
#else
__attribute__((used)) static uint8  *emu_get_memory8r (uint16 s, uint16 o, uint16 d) { emu_data_monitor(s, o, d, 1); return (uint8  *)(emu_memory + (s << 4) + ((o + d) & 0xFFFF)); }
__attribute__((used)) static uint16 *emu_get_memory16r(uint16 s, uint16 o, uint16 d) { emu_data_monitor(s, o, d, 2); return (uint16 *)(emu_memory + (s << 4) + ((o + d) & 0xFFFF)); }
__attribute__((used)) static uint32 *emu_get_memory32r(uint16 s, uint16 o, uint16 d) { emu_data_monitor(s, o, d, 4); return (uint32 *)(emu_memory + (s << 4) + ((o + d) & 0xFFFF)); }

#define emu_get_memory8(s, o, d)  (*(emu_get_memory8r (s, o, d)))
#define emu_get_memory16(s, o, d) (*(emu_get_memory16r(s, o, d)))
#define emu_get_memory32(s, o, d) (*(emu_get_memory32r(s, o, d)))
#endif

extern void emu_init(int argc, char **argv);
#include "libemu_bios.h"
#include "libemu_call.h"
#include "libemu_math.h"
#include "libemu_mov.h"
#include "libemu_register.h"

/* All possible jumps we know and have */
#define emu_jmpic(add_ip, ret_ip, from_ip) { emu_jmpi(add_ip, ret_ip, from_ip); return; }
#define emu_jmpo   if ( emu_flags.of)                                 emu_jmpic
#define emu_jmpno  if (!emu_flags.of)                                 emu_jmpic
#define emu_jmpc   if ( emu_flags.cf)                                 emu_jmpic
#define emu_jmpnc  if (!emu_flags.cf)                                 emu_jmpic
#define emu_jmpz   if ( emu_flags.zf)                                 emu_jmpic
#define emu_jmpnz  if (!emu_flags.zf)                                 emu_jmpic
#define emu_jmpbe  if ( emu_flags.cf ||  emu_flags.zf)                emu_jmpic
#define emu_jmpnbe if (!emu_flags.cf && !emu_flags.zf)                emu_jmpic
#define emu_jmps   if ( emu_flags.sf)                                 emu_jmpic
#define emu_jmpns  if (!emu_flags.sf)                                 emu_jmpic
#define emu_jmpp   if ( emu_flags.pf)                                 emu_jmpic
#define emu_jmpnp  if (!emu_flags.pf)                                 emu_jmpic
#define emu_jmpl   if ( emu_flags.sf != emu_flags.of)                 emu_jmpic
#define emu_jmpnl  if ( emu_flags.sf == emu_flags.of)                 emu_jmpic
#define emu_jmple  if ( emu_flags.zf || emu_flags.sf != emu_flags.of) emu_jmpic
#define emu_jmpnle if (!emu_flags.zf && emu_flags.sf == emu_flags.of) emu_jmpic
#define emu_jmpcx  if (emu_cx == 0)                                   emu_jmpic

/* All possible loops we know and have */
#define emu_loop   if (--emu_cx != 0)                                 emu_jmpic
#define emu_loopz  if (--emu_cx != 0 &&  emu_flags.zf)                emu_jmpic
#define emu_loopnz if (--emu_cx != 0 && !emu_flags.zf)                emu_jmpic

/* All possible repeats we know and have */
#define emu_rep_movsb(seg)   while (emu_cx != 0) { emu_movsb(seg); emu_cx--; }
#define emu_repne_movsb(seg) while (emu_cx != 0) { emu_movsb(seg); emu_cx--; }
#define emu_rep_movsw(seg)   while (emu_cx != 0) { emu_movsw(seg); emu_cx--; }
#define emu_repne_movsw(seg) while (emu_cx != 0) { emu_movsw(seg); emu_cx--; }
#define emu_rep_lodsb(seg)   while (emu_cx != 0) { emu_lodsb(seg); emu_cx--; }
#define emu_repne_lodsb(seg) while (emu_cx != 0) { emu_lodsb(seg); emu_cx--; }
#define emu_rep_lodsw(seg)   while (emu_cx != 0) { emu_lodsw(seg); emu_cx--; }
#define emu_repne_lodsw(seg) while (emu_cx != 0) { emu_lodsw(seg); emu_cx--; }
#define emu_rep_stosb()      while (emu_cx != 0) { emu_stosb();    emu_cx--; }
#define emu_repne_stosb()    while (emu_cx != 0) { emu_stosb();    emu_cx--; }
#define emu_rep_stosw()      while (emu_cx != 0) { emu_stosw();    emu_cx--; }
#define emu_repne_stosw()    while (emu_cx != 0) { emu_stosw();    emu_cx--; }

#define emu_rep_insb()       while (emu_cx != 0) { emu_insb();     emu_cx--; }
#define emu_repne_insb()     while (emu_cx != 0) { emu_insb();     emu_cx--; }
#define emu_rep_insw()       while (emu_cx != 0) { emu_insw();     emu_cx--; }
#define emu_repne_insw()     while (emu_cx != 0) { emu_insw();     emu_cx--; }
#define emu_rep_outsb()      while (emu_cx != 0) { emu_outsb();    emu_cx--; }
#define emu_repne_outsb()    while (emu_cx != 0) { emu_outsb();    emu_cx--; }
#define emu_rep_outsw()      while (emu_cx != 0) { emu_outsw();    emu_cx--; }
#define emu_repne_outsw()    while (emu_cx != 0) { emu_outsw();    emu_cx--; }

#define emu_rep_cmpsb(seg)   while (emu_cx != 0) { emu_cmpsb(seg); emu_cx--; if (!emu_flags.zf) break; }
#define emu_repne_cmpsb(seg) while (emu_cx != 0) { emu_cmpsb(seg); emu_cx--; if ( emu_flags.zf) break; }
#define emu_rep_cmpsw(seg)   while (emu_cx != 0) { emu_cmpsw(seg); emu_cx--; if (!emu_flags.zf) break; }
#define emu_repne_cmpsw(seg) while (emu_cx != 0) { emu_cmpsw(seg); emu_cx--; if ( emu_flags.zf) break; }
#define emu_rep_scasb()      while (emu_cx != 0) { emu_scasb();    emu_cx--; if (!emu_flags.zf) break; }
#define emu_repne_scasb()    while (emu_cx != 0) { emu_scasb();    emu_cx--; if ( emu_flags.zf) break; }
#define emu_rep_scasw()      while (emu_cx != 0) { emu_scasw();    emu_cx--; if (!emu_flags.zf) break; }
#define emu_repne_scasw()    while (emu_cx != 0) { emu_scasw();    emu_cx--; if ( emu_flags.zf) break; }

#endif /* LIBEMU_H */

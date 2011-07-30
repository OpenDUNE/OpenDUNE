/* $Id$ */

/** @file src/interrupt.h Interrupt definitions. */

#ifndef INTERRUPT_H
#define INTERRUPT_H

extern void Interrupt_Timer();
extern void Interrupt_System();
extern void Interrupt_Clock();
extern void Interrupt_User_Clock();
extern void Interrupt_DOS();
extern void Interrupt_DOS_Multiplex();
extern void Handler_XMS();

#endif /* INTERRUPT_H */

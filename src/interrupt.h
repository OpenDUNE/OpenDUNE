/* $Id$ */

#ifndef INTERRUPT_H
#define INTERRUPT_H

extern void Interrupt_Timer();
extern void Interrupt_Keyboard();
extern void Interrupt_Video();
extern void Interrupt_System();
extern void Interrupt_Clock();
extern void Interrupt_User_Clock();
extern void Interrupt_DOS();
extern void Interrupt_DOS_Multiplex();
extern void Interrupt_Mouse();

#endif /* INTERRUPT_H */

/** @file src/lock.h Platform dependant locking.
 */

#ifndef LOCK_H
#define LOCK_H

void Lock_Init();

void Lock_Input();
void Unlock_Input();

void Lock_Mouse();
void Unlock_Mouse();
int Lock_IsMouseLocked();


#endif /* LOCK_H */

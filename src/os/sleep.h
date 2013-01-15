/* $Id$ */

/** @file src/os/sleep.h OS-independent inclusion of the delay routine. */

#ifndef OS_SLEEP_H
#define OS_SLEEP_H

#include <unistd.h>
#include "../timer.h"

#define msleep(x) usleep(x * 1000)
#define sleepIdle() Timer_ProcessEvents()

#endif /* OS_SLEEP_H */

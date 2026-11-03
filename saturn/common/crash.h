/** @file saturn/common/crash.h Report SH-2 exceptions on the console. */

#ifndef SATURN_CRASH_H
#define SATURN_CRASH_H

#include <stdint.h>

extern void Crash_Install(void);

extern void Crash_Report(uint32_t vector, uint32_t pc, uint32_t sr, uint32_t sp);

#endif /*!< SATURN_CRASH_H */

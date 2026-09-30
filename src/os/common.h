/** @file src/os/common.h Compiler-independent common statements. */

#ifndef OS_COMMON_H
#define OS_COMMON_H

/**
 * Compute length of an array.
 * @param address of the array.
 * @return Number of elements of the array.
 */
#define lengthof(array) (sizeof(array) / sizeof((array)[0]))

/**
 * Keep the compiler from moving memory accesses across this point, for data
 * shared with an interrupt handler.
 */
#if defined(__GNUC__)
#define COMPILER_BARRIER() __asm__ __volatile__("" ::: "memory")
#else
#define COMPILER_BARRIER()
#endif

#endif /* OS_COMMON_H */

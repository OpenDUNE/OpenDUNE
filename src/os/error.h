/** @file src/os/error.h Platform dependant error messages. */

#ifndef OS_ERROR_H
#define OS_ERROR_H

extern void Error(const char *format, ...);
extern void Warning(const char *format, ...);

#endif /* OS_ERROR_H */

/* $Id$ */

#ifndef OS_SLEEP_H
#define OS_SLEEP_H

#if defined(_WIN32)
	#include <windows.h>
	#define sleep Sleep
#else
	#include <unistd.h>
#endif /* _WIN32 */

#endif /* OS_SLEEP_H */

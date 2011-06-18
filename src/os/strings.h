/* $Id$ */

/** @file src/os/strings.h OS-independent inclusion of string routines. */

#ifndef OS_STRINGS_H
#define OS_STRINGS_H

/*
 * This header should define the following functions:
 *
 * strcasecmp     - strcmp, but case insensitive
 * strncasecmp    - strncmp, but case insensitive
 * snprintf
 *
 */

#if defined(_MSC_VER)
	#include <string.h>
	#define strcasecmp _stricmp
	#define strncasecmp _strnicmp
	#define snprintf _snprintf
#elif !defined(DECOMPILED_INCLUDE) || !defined(__TINYC__)
	#include <strings.h>
	#if defined(__MINGW32__) && defined(__STRICT_ANSI__)
		int __cdecl __MINGW_NOTHROW strcasecmp (const char *, const char *);
		int __cdecl __MINGW_NOTHROW strncasecmp (const char *, const char *, size_t);
	#endif /* __MINGW32__ && __STRICT_ANSI__ */
	#if !defined(__MINGW32__) && defined(__GNUC__) && !defined(snprintf)
		/* snprintf is in fact C99, but we like to use it over sprintf for the obvious reasons */
		#if !defined(__APPLE__)
			extern int snprintf (char *__restrict __s, size_t __maxlen, __const char *__restrict __format, ...) __THROW __attribute__ ((__format__ (__printf__, 3, 4)));
		#else /* __APPLE__ */
			extern int snprintf(char * __restrict, size_t, const char * __restrict, ...) __DARWIN_LDBL_COMPAT(snprintf);
		#endif /* __APPLE__ */
	#endif /* __GCC__ */
#endif /* _MSC_VER && (!DECOMPILED_INCLUDE || !__TINYC__) */

#endif /* OS_STRINGS_H */

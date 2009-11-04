#ifndef OS_STRINGS_H
#define OS_STRINGS_H

/*
 * This header should define the following functions:
 *
 * strcasecmp     - strcmp, but case insensitive
 * strncasecmp    - strncmp, but case insensitive
 *
 */

#if defined(_MSC_VER)
	#include <string.h>
	#define strcasecmp _stricmp
	#define strncasecmp _strnicmp
#else /* _MSC_VER */
	#if defined(__MINGW32__) && defined(__STRICT_ANSI__)
		int __cdecl __MINGW_NOTHROW strcasecmp (const char *, const char *);
		int __cdecl __MINGW_NOTHROW strncasecmp (const char *, const char *, size_t);
	#else /* __MINGW32__ && __STRICT_ANSI__ */
		#include <strings.h>
	#endif /* __MINGW32__ && __STRICT_ANSI__ */
#endif /* _MSC_VER */

#endif /* OS_STRINGS_H */

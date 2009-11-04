#ifndef OS_STRINGS_H
#define OS_STRINGS_H

/*
 * This header should define the following functions:
 *
 * strcasecmp     - strcmp, but case insensitive
 * strncasecmp    - strncmp, but case insensitive
 *
 */

#include <strings.h>

#if defined(MSVC)
	#define stricmp strcasecmp
#endif /* MSVC */

#endif /* OS_STRINGS_H */

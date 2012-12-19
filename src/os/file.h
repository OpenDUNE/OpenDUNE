/** @file src/os/file.h OS-independent inclusion of file routines. */

#ifndef OS_FILE_H
#define OS_FILE_H

#if defined(_MSC_VER)
	#include <io.h>
	#define unlink _unlink
#else /* _MSC_VER */
	#include <unistd.h>
#endif /* _MSC_VER */

#endif /* OS_FILE_H */

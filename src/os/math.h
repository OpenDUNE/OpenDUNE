/* $Id$ */

#ifndef OS_MATH_H
#define OS_MATH_H

#ifndef max
	#define max(a, b) ((a) > (b) ? (a) : (b))
#endif /* max */

#ifndef min
	#define min(a, b) ((a) < (b) ? (a) : (b))
#endif /* min */

#ifndef clamp
	#define clamp(a, b, c) (min(max(a, b), c))
#endif /* clamp */

#endif /* OS_MATH_H */

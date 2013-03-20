#ifndef TYPES_H
#define TYPES_H

/** @file include/types.h Basic definitions and data types. */

#if defined(__TINYC__)
	/* Some includes set __attribute__ to nothing, making it fail */
	#undef __attribute__
#endif /* __TINYC__ */

#define MSVC_PACKED_BEGIN
#define MSVC_PACKED_END
#define GCC_PACKED
#define GCC_UNUSED
#define PACK

#define BIT_S8  int8
#define BIT_S16 int16
#define BIT_S32 int32
#define BIT_U8  uint8
#define BIT_U16 uint16
#define BIT_U32 uint32

#define VARIABLE_NOT_USED(variable) (void)variable;

#if defined(__GNUC__)
	#undef GCC_PACKED
	#define GCC_PACKED __attribute__((packed))
	#undef GCC_UNUSED
	#define GCC_UNUSED __attribute__((unused))

	#undef BIT_S8
	#undef BIT_S16
	#undef BIT_S32
	#undef BIT_U8
	#undef BIT_U16
	#undef BIT_U32

	#define BIT_S8  int32
	#define BIT_S16 int32
	#define BIT_S32 int32
	#define BIT_U8  uint32
	#define BIT_U16 uint32
	#define BIT_U32 uint32
#elif defined(_MSC_VER)
	#undef MSVC_PACKED_BEGIN
	#undef MSVC_PACKED_END
	#define MSVC_PACKED_BEGIN __pragma(pack(push, 1))
	#define MSVC_PACKED_END __pragma(pack(pop))
	#pragma warning(disable:4102) /* unreferenced label */
	#pragma warning(disable:4996) /* deprecated functions */
#elif defined(__TINYC__)
	/* For Tiny C Compiler to pack the content of a struct, it needs the
	 *  __attribute__((packed)) attribute on every member in the struct.
	 * For that reason we define PACK here, which has to be added before
	 *  every member in a struct you want to pack. This solves the
	 *  problem without making things very ugly (it still is not pretty,
	 *  but at least not very ugly). */
	#undef PACK
	#define PACK __attribute__((packed))
#endif /* __GNUC__ / _MSC_VER / __TINYC__ */

/* Compile time assertions. Prefer c++0x static_assert() */
#if defined(__STDCXX_VERSION__) || defined(__GXX_EXPERIMENTAL_CXX0X__) || defined(__GXX_EXPERIMENTAL_CPP0X__) || defined(static_assert)
	/* __STDCXX_VERSION__ is c++0x feature macro, __GXX_EXPERIMENTAL_CXX0X__ is used by gcc, __GXX_EXPERIMENTAL_CPP0X__ by icc */
	#define assert_compile(expr) static_assert(expr, #expr )
#elif defined(__OS2__) || (defined(__GNUC__) && __GNUC__ == 3 && __GNUC_MINOR__ < 4)
	/* Disabled for OS/2 or GCC < 3.4 */
	#define assert_compile(expr)
#else
	/* GCC warns about redundant redeclartion; to avoid it, we add __LINE__ to
	 *  the variable name. This of course doesn't avoid most warnings, but
	 *  should at least avoid most.
	 * We need a second indirection to resolve __LINE__ correctly. */
	#define __assert_compile(expr, line) extern const int __ct_assert_##line##__[1 - 2 * !(expr)] GCC_UNUSED
	#define _assert_compile(expr, line) __assert_compile(expr, line)
	#define assert_compile(expr) _assert_compile(expr, __LINE__)
#endif

typedef unsigned char  uint8;
typedef   signed char   int8;
typedef unsigned short uint16;
typedef   signed short  int16;
typedef unsigned int   uint32;
typedef   signed int    int32;
assert_compile(sizeof(uint8 ) == 1);
assert_compile(sizeof( int8 ) == 1);
assert_compile(sizeof(uint16) == 2);
assert_compile(sizeof( int16) == 2);
assert_compile(sizeof(uint32) == 4);
assert_compile(sizeof( int32) == 4);

/**
 * bits 0 to 7 are the offset in the tile.
 * bits 8 to 13 are the position on the map.
 * bits 14 and 15 are never used (or should never be used).
 */
typedef struct tile32 {
	uint16 x;
	uint16 y;
} tile32;

typedef unsigned char bool;
#define false 0
#define true 1

#endif /* TYPES_H */

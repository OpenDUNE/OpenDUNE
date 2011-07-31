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
	#define assert_compile(expr) extern const int __ct_assert__[1 - 2 * !(expr)] GCC_UNUSED
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

typedef union csip32 {
	struct {
		uint16 ip;
		uint16 cs;
	} s;
	uint32 csip;
} csip32;
assert_compile(sizeof(csip32) == 4);

/**
 * ox is the offset in the tile.
 * px is the position on the map.
 * ux is never used (or should never be used).
 * x is all the above.
 */
typedef union tile32 {
	struct {
		uint32 x:16;
		uint32 y:16;
	} s;
	struct {
		uint32 ox:8; uint32 px:6; uint32 ux:2;
		uint32 oy:8; uint32 py:6; uint32 uy:2;
	} d;
	uint32 tile;
} tile32;
assert_compile(sizeof(tile32) == 4);

typedef unsigned char bool;
#define false 0
#define true 1

#endif /* TYPES_H */

#!/bin/bash
# Build the sh-elf (SH-2, big-endian) cross toolchain used by the Saturn port.
#
# Same stages as SSSDK/Saturn-SDK-GCC-SH2 (binutils, bootstrap GCC, newlib,
# final GCC), but with current releases that build with a modern host
# compiler, C (and C++ without its library, for the AdLib driver), and
# binutils built with all object formats so objcopy can convert Sega's
# Hitachi SH COFF libraries to ELF.
#
# Usage: saturn/toolchain/build-toolchain.sh
#   PREFIX  install directory   (default: saturn/toolchain/install)
#   WORKDIR download/build area (default: saturn/toolchain/work)
#   NCPU    parallel jobs       (default: nproc)

set -e

BINUTILS_VER=2.45
GCC_VER=14.3.0
NEWLIB_VER=4.5.0.20241231
TARGET=sh-elf

HERE=$(cd "$(dirname "$0")" && pwd)
PREFIX=${PREFIX:-$HERE/install}
WORKDIR=${WORKDIR:-$HERE/work}
NCPU=${NCPU:-$(nproc)}

# makeinfo is not needed; don't let a missing one break the build (the
# Makefiles only take it from the command line, see the make calls).
export MAKEINFO=true
export PATH="$PREFIX/bin:$PATH"

mkdir -p "$WORKDIR/download" "$WORKDIR/src" "$WORKDIR/build" "$PREFIX"

fetch() {
	local url=$1 file
	file="$WORKDIR/download/$(basename "$url")"
	if [ ! -f "$file" ]; then
		curl -fL -o "$file.part" "$url"
		mv "$file.part" "$file"
	fi
	tar -C "$WORKDIR/src" -xf "$file" --skip-old-files
}

# Host compiler flags. Recent host GCCs default to C++20, which GCC 14's
# sources don't compile under (char8_t in libcody). GCC 14 is written in
# C++11, and libcody's configure rejects anything but exactly C++11.
export CFLAGS="-O2"
export CXXFLAGS="-O2 -std=gnu++11"

# Run one build stage in a fresh build directory, unless it already
# completed on a previous run (marker file).
stage() {
	local name=$1
	shift
	if [ -f "$WORKDIR/build/$name.done" ]; then
		echo "==> $name: already built"
		return
	fi
	echo "==> $name"
	rm -rf "$WORKDIR/build/$name"
	mkdir -p "$WORKDIR/build/$name"
	(cd "$WORKDIR/build/$name"; "$@")
	touch "$WORKDIR/build/$name.done"
}

build_binutils() {
	"$WORKDIR/src/binutils-$BINUTILS_VER/configure" --target=$TARGET --prefix="$PREFIX" \
		--enable-targets=all --disable-nls --disable-werror --disable-gdb --disable-gprofng
	make -j"$NCPU" MAKEINFO=true
	make install MAKEINFO=true
}

build_gcc_bootstrap() {
	"$WORKDIR/src/gcc-$GCC_VER/configure" --target=$TARGET --prefix="$PREFIX" \
		--with-cpu=m2 --enable-languages=c --without-headers --with-newlib \
		--disable-multilib --disable-shared --disable-threads --disable-nls \
		--disable-libssp --disable-libgomp --disable-libquadmath
	make -j"$NCPU" MAKEINFO=true all-gcc all-target-libgcc
	make install-gcc install-target-libgcc MAKEINFO=true
}

build_newlib() {
	"$WORKDIR/src/newlib-$NEWLIB_VER/configure" --target=$TARGET --prefix="$PREFIX" \
		--disable-multilib --enable-newlib-nano-malloc --enable-target-optspace \
		--disable-newlib-supplied-syscalls --disable-nls
	make -j"$NCPU" MAKEINFO=true
	make install MAKEINFO=true
}

build_gcc_final() {
	"$WORKDIR/src/gcc-$GCC_VER/configure" --target=$TARGET --prefix="$PREFIX" \
		--with-cpu=m2 --enable-languages=c,c++ --disable-libstdcxx --with-newlib --enable-lto \
		--disable-multilib --disable-shared --disable-threads --disable-nls \
		--disable-libssp --disable-libgomp --disable-libquadmath
	make -j"$NCPU" MAKEINFO=true
	make install MAKEINFO=true
}

echo "==> Fetching sources"
fetch https://ftp.gnu.org/gnu/binutils/binutils-$BINUTILS_VER.tar.xz
fetch https://ftp.gnu.org/gnu/gcc/gcc-$GCC_VER/gcc-$GCC_VER.tar.xz
fetch https://sourceware.org/pub/newlib/newlib-$NEWLIB_VER.tar.gz
if [ ! -d "$WORKDIR/src/gcc-$GCC_VER/gmp" ]; then
	(cd "$WORKDIR/src/gcc-$GCC_VER" && ./contrib/download_prerequisites)
fi

stage binutils build_binutils
stage gcc-bootstrap build_gcc_bootstrap
stage newlib build_newlib
stage gcc-final build_gcc_final

echo "==> Done: $PREFIX/bin/$TARGET-gcc"
"$PREFIX/bin/$TARGET-gcc" --version | head -1

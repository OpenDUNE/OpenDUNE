#!/usr/bin/env python3
"""Correct Hitachi SH COFF objects converted to ELF by objcopy.

COFF places each object's .data and .bss after its .text, and the converted
R_SH_DIR32 relocations against those sections keep that address in the word
they patch (with it as a negative addend, which the linker doesn't use): the
linked code then reaches that many bytes past its own variables. With .data
and .bss moved to address 0 (objcopy --change-section-vma), this makes each
such word the offset into its section, with no addend.

Usage: fixcoff.py [-n] OBJECT...   (-n: only report what would change)
"""

import struct
import sys

SHT_RELA = 4
R_SH_DIR32 = 1


def fix(path, dry_run):
    data = bytearray(open(path, 'rb').read())
    if data[:4] != b'\x7fELF' or data[4] != 1 or data[5] != 2:
        sys.exit('%s: not a 32-bit big-endian ELF file' % path)

    shoff, = struct.unpack_from('>I', data, 0x20)
    shentsize, shnum, shstrndx = struct.unpack_from('>HHH', data, 0x2E)
    sections = [struct.unpack_from('>IIIIIIIIII', data, shoff + i * shentsize) for i in range(shnum)]
    names = sections[shstrndx][4]

    def name(index):
        start = names + sections[index][0]
        return bytes(data[start:data.index(b'\0', start)]).decode()

    changed = 0
    for index, (_, kind, _, _, offset, size, link, info, _, entsize) in enumerate(sections):
        if kind != SHT_RELA:
            continue
        target = sections[info]
        symtab = sections[link]
        for r in range(size // entsize):
            at = offset + r * entsize
            r_offset, r_info, r_addend = struct.unpack_from('>IIi', data, at)
            if r_info & 0xFF != R_SH_DIR32 or r_addend >= 0:
                continue
            sym = symtab[4] + (r_info >> 8) * symtab[9]
            _, st_value, _, _, _, st_shndx = struct.unpack_from('>IIIBBH', data, sym)
            # the section's own symbol (NOTYPE after objcopy): its start
            if st_shndx >= shnum or st_value != 0 or name(st_shndx) not in ('.data', '.bss'):
                continue
            word_at = target[4] + r_offset
            word, = struct.unpack_from('>I', data, word_at)
            if dry_run:
                print('%s: %s+%#x -> %s %#x - %#x' % (path, name(info), r_offset, name(st_shndx), word, -r_addend))
            struct.pack_into('>I', data, word_at, (word + r_addend) & 0xFFFFFFFF)
            struct.pack_into('>IIi', data, at, r_offset, r_info, 0)
            changed += 1

    if changed and not dry_run:
        open(path, 'wb').write(data)


def main():
    args = sys.argv[1:]
    dry_run = bool(args) and args[0] == '-n'
    if dry_run:
        args = args[1:]
    for path in args:
        fix(path, dry_run)


if __name__ == '__main__':
    main()

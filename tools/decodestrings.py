#!/usr/bin/env python
# vim: tabstop=4 shiftwidth=4 softtabstop=4 noexpandtab
# python 3
#
# DUNE .ENG/.FRE/.GER
# MESSAGE
# INTRO
# TEXTH
# TEXTA
# TEXTO

import sys
from struct import *

def uncompress(s):
	out = b''
	escaped = False
	for c in s:
		if c >= 128:
			c = c - 128
			first = b" etainosrlhcdupm"[c >> 3]
			second = b"tasio wb rnsdalmh ieorasnrtlc synstcloer dtgesionr ufmsw tep.icae oiadur laeiyodeia otruetoakhlr eiu,.oansrctlaileoiratpeaoip bm"[c]
			out += bytes([first, second])
		elif c == 27:
			escaped = True
		else:
			out += bytes([c + 127 if escaped else c])
			escaped = False
	return out

def decodestrings(filename, compressed):
	with open(filename, 'rb') as file:
		data = file.read()
		(first,) = unpack_from('<H', data)
		print(filename, len(data), "bytes", first // 2, "strings")
		i = 0
		while i < first:
			(offset,) = unpack_from('<H', data, i)
			end = data.find(b'\x00', offset)
			if compressed:
				s = uncompress(data[offset:end])
			else:
				s = data[offset:end]
			print("%03d 0x%04x %3d" % (i // 2, offset, end - offset), s.decode('cp437').replace("\r", "\\r"))
			i = i + 2

if len(sys.argv) <= 1:
	print("Usage : %s [--compressed] file.ENG" % sys.argv[0])
else:
	compressed = False
	args = sys.argv[1:]
	if args[0] == "-c" or args[0] == "--compressed":
		compressed = True
		args = args[1:]
	for filename in args:
		decodestrings(filename, compressed)

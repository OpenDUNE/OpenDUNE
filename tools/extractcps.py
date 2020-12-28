#!/usr/bin/env python
# vim: tabstop=4 shiftwidth=4 softtabstop=4 noexpandtab
# python 2
# TODO: convert to python 3
#
# read CPS files

from struct import *
import sys
from westwood_codecs import *
from save_pictures import *

palette = None

def load_palette(filename):
	global palette
	with open(filename, 'rb') as pal_file:
		data = pal_file.read()
		if len(data) == 64:
			# Amiga palette
			palette = ''
			for i in range(0, 64, 2):
				(rgb12,) = unpack_from('>H', data, i)
				palette += chr((rgb12 >> 8) * 0x11)
				palette += chr(((rgb12 >> 4) & 0x0f) * 0x11)
				palette += chr((rgb12 & 0x0f) * 0x11)
		else:
			# PC palette
			palette = ''.join(map(lambda c: chr((ord(c) << 2) + (ord(c) >> 6)), list(data)))

def extract_cps(filename):
	global palette
	with open(filename, 'rb') as cps_file:
		cps = cps_file.read()
		(packed_size, encoding, decoded_size, offset) = unpack_from('<HHLH', cps)
		print filename, packed_size, encoding, decoded_size, offset
		# offset = 768 : IBM PC palette
		# offset = 64 : Amiga Palette
		if offset == 64:
			pal = ''
			for i in range(0, 64, 2):
				(rgb12,) = unpack_from('>H', cps, 10+i)
				pal += chr((rgb12 >> 8) * 0x11)
				pal += chr(((rgb12 >> 4) & 0x0f) * 0x11)
				pal += chr((rgb12 & 0x0f) * 0x11)
		elif offset > 0:
			pal = ''.join(map(lambda c: chr((ord(c) << 2) + (ord(c) >> 6)), list(cps[10:10+offset])))
		else:
			pal = palette
		if encoding == 0:
			pixels = cps[10+offset:2+packed_size]
		elif encoding == 4:	# format80
			pixels = decode_format80(cps[10+offset:2+packed_size])
		else:
			print 'Unknown encoding' 
			return
		if len(pixels) == 9120:
			# 9120 = 152 * 60
			save_pbm(filename + '.pbm', 152, 60, pixels, pal)
		elif len(pixels) < 64000:
			save_ilbm(filename + '.lbm', 320, 200, pixels, pal)
		else:
			save_pbm(filename + '.pbm', 320, 200, pixels, pal)

if len(sys.argv) <= 1:
	print "usage : %s [-p palette.PAL] file.CPS" % sys.argv[0]
else:
	args = sys.argv[1:]
	if args[0] == '-p':
		load_palette(args[1])
		args = args[2:]
	for filename in args:
		extract_cps(filename)

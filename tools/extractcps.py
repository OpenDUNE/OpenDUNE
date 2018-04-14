#!/usr/bin/env python
# vim: tabstop=4 shiftwidth=4 softtabstop=4 noexpandtab
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
		palette = ''.join(map(lambda c: chr((ord(c) << 2) + (ord(c) >> 6)), list(pal_file.read())))

def extract_cps(filename):
	global palette
	with open(filename, 'rb') as cps_file:
		cps = cps_file.read()
		(packed_size, encoding, decoded_size, offset) = unpack_from('<HHLH', cps)
		print filename, packed_size, encoding, decoded_size, offset
		if offset > 0:
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

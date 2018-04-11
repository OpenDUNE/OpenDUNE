#!/usr/bin/env python
# vim: tabstop=4 shiftwidth=4 softtabstop=4 noexpandtab
#
# read WSA (WestWood Studios Animations) files

from struct import *
import sys
from westwood_codecs import *
from save_pictures import *

palette = None

def load_palette(filename):
	global palette
	with open(filename, 'rb') as pal_file:
		palette = ''.join(map(lambda c: chr((ord(c) << 2) + (ord(c) >> 6)), list(pal_file.read())))

def xor_strings(s1, s2):
	dest = ''
	for i in range(min(len(s1),len(s2))):
		dest += chr(ord(s1[i]) ^ ord(s2[i]))
	return dest

def extract_wsa(filename):
	with open(filename, 'rb') as wsa_file:
		wsa = wsa_file.read()
		(frames, width, height, req_buffer_size, has_palette) = unpack_from('<HHHHH', wsa)
		print '%s length %d (0x%06X)' % (filename, len(wsa), len(wsa))
		print '  %2d frames %3dx%3d req_buffer_size=%5d has_palette=%d' % (frames, width, height, req_buffer_size, has_palette)
		offset = 10
		offsets = []
		for i in range(frames+2):
			(offset_frame,) = unpack_from('<L', wsa, offset)
			offsets += [offset_frame]
			offset += 4
		print ' ', ':'.join(map(lambda i : '%06X' % i, offsets))
		datablocks = [ decode_format80(wsa[offsets[i]:offsets[i+1]]) if offsets[i] != 0 else '' for i in range(frames+1) ]
		print ' ', map(lambda e : len(e), datablocks)
		pictures = map(decode_format40, datablocks)
		print ' ', map(lambda e : len(e), pictures)
		pixels = chr(0) * (width * height)
		for i in range(len(pictures)):
			pbm_filename = '%s_%02d.pbm' % (filename, i)
			if len(pictures[i]) > 0:
				pixels = xor_strings(pixels, pictures[i])
				save_pbm(pbm_filename, width, height, pixels, palette)

if len(sys.argv) <= 1:
	print "usage : %s [-p palette.PAL] file.WSA" % sys.argv[0]
else:
	args = sys.argv[1:]
	if args[0] == '-p':
		load_palette(args[1])
		args = args[2:]
	for filename in args:
		extract_wsa(filename)

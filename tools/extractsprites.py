#!/usr/bin/env python
# vim: tabstop=4 shiftwidth=4 softtabstop=4 noexpandtab
#
# extract sprites from SHP files (Westwood studios games)

from struct import *
import sys
from westwood_codecs import *
from save_pictures import *

palette = None

split_string = lambda s, n: [s[i*n:i*n+n] for i, j in enumerate(s[::n])]

def load_palette(filename):
	global palette
	with open(filename, 'rb') as pal_file:
		palette = ''.join(map(lambda c: chr((ord(c) << 2) + (ord(c) >> 6)), list(pal_file.read())))

def decode_sprite_data(data, palette):
	# RLE 00 nn = nn transparent pixels (00)
	dest = ''
	i = 0
	while i < len(data):
		if ord(data[i]) == 0:
			dest += data[i] * ord(data[i+1])
			i += 2
		else:
			dest += data[i] if palette is None else palette[ord(data[i])]
			i += 1
	return dest
	
def decode_sprite(data):
	palette = None
	(flags, height, width, height2, datalen, decodedlen) = unpack_from('<HBHBHH', data)
	print '0x%04x %02dx%02d %02d %d %d' % (flags, width, height, height2, datalen, decodedlen)
	offset = 10
	if (flags & 0x1) != 0:	# local 16 color palette
		palette = data[offset:offset+16]
		offset += 16
	if (flags & 0x2) == 0:
		sprite_data = decode_format80(data[offset:])
	else:
		sprite_data = data[offset:]
	pixels = decode_sprite_data(sprite_data, palette)
	print 'decodedlen =', len(sprite_data), 'pixels =', len(pixels)
	for line in map(lambda s : s.encode('hex'), split_string(pixels, width)):
		print line
	return (width, height, pixels)

def extract_shp(filename):
	print "Extracting sprites from", filename, ':'
	with open(filename, 'rb') as shp_file:
		shp = shp_file.read()
		(count,) = unpack_from('<H', shp, 0)
		print ' ', len(shp), 'bytes, ', count, "icons :"
		offsets = []
		for i in range(count+1):
			(offset,) = unpack_from('<L', shp, 2 + i*4)
			offsets.append(offset+2)
		if offsets[0] != 6 + count * 4 or offsets[count] != len(shp):
			#print 'error', offsets
			offsets = []	# another format (2 bytes per offset)
			for i in range(count+1):
				(offset,) = unpack_from('<H', shp, 2 + i*2)
				offsets.append(offset)
		for i in range(count):
			#print '   ', i, offsets[i]
			save_pbm(*("%s_%03d.pbm" % (filename, i),) + decode_sprite(shp[offsets[i]:offsets[i+1]]) + (palette,))

if len(sys.argv) <= 1:
	print "usage : %s [-p palette.PAL] file.shp" % sys.argv[0]
else:
	args = sys.argv[1:]
	if args[0] == '-p':
		load_palette(args[1])
		args = args[2:]
	for filename in args:
		extract_shp(filename)

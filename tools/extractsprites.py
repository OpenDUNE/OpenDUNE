#!/usr/bin/env python
# vim: tabstop=4 shiftwidth=4 softtabstop=4 noexpandtab
#
# Format to extract sprites from SHP 

from struct import *
import sys

palette = None

split_string = lambda s, n: [s[i*n:i*n+n] for i, j in enumerate(s[::n])]

def load_palette(filename):
	global palette
	with open(filename, 'rb') as pal_file:
		palette = ''.join(map(lambda c: chr((ord(c) << 2) + (ord(c) >> 6)), list(pal_file.read())))

def save_pbm(filename, width, height, pixels):
	if (width & 1) != 0:
		pixels = ''.join([line + chr(0) for line in split_string(pixels, width)])
	with open(filename, 'wb') as pbm_file:
		bmhd_chunk = 'BMHD' + pack('>LHHHHBBBBHBBHH', 20, width, height, 0, 0, 8, 2, 0, 0, 0, 10, 10, width, height);
		cmap_chunk = '' if not palette else 'CMAP' + pack('>L', len(palette)) + palette
		body_chunk = 'BODY' + pack('>L', len(pixels)) + pixels

		size = 4 + len(body_chunk) + len(bmhd_chunk) + len(cmap_chunk)
		form = 'FORM' + pack('>L', size) + 'PBM ' + bmhd_chunk + cmap_chunk + body_chunk
		pbm_file.write(form)
		print filename, "written"

def decode_format80(data):
	dest = ''
	i = 0
	while i < len(data) and ord(data[i]) != 0x80:
		cmd = ord(data[i])
		i += 1
		if cmd == 254:	# 1111 1110 SS SS : long set
			size = ord(data[i]) + (ord(data[i+1]) << 8)
			#print cmd, 'long set', size, data[i+2].encode('hex')
			dest += (data[i+2] * size)
			i += 3
		elif cmd == 255:	# 1111 1111 SS SS OO OO : long absolute move
			size = ord(data[i]) + (ord(data[i+1]) << 8)
			offset = ord(data[i+2]) + (ord(data[i+3]) << 8)
			#print cmd, 'long absolute move', offset, size
			while size > 0:
				dest += dest[offset]
				offset += 1
				size -= 1
			i += 4
		elif (cmd & 128) == 0:	# 0sss oooo OO : short relative move
			size = (cmd >> 4) + 3
			offset = ((cmd & 15) << 8) + ord(data[i])
			i += 1
			#print cmd, 'short relative move', offset, size
			while size > 0:
				dest += dest[-offset]
				size -= 1
		elif (cmd & 64) != 0:	# 11ss ssss OO OO : short absolute move
			size = (cmd & 63) + 3
			offset = ord(data[i]) + (ord(data[i+1]) << 8)
			#print cmd, 'short absolute move', offset, size
			while size > 0:
				dest += dest[offset]
				offset += 1
				size -= 1
			i += 2
		else:	# 10ss ssss : short copy
			size = cmd & 63
			#print cmd, 'short copy', size
			dest += data[i:i+size]
			i += size
	return dest

def decode_sprite_data(data):
	# RLE 00 nn = nn transparent pixels (00)
	dest = ''
	i = 0
	while i < len(data):
		if ord(data[i]) == 0:
			dest += data[i] * ord(data[i+1])
			i += 2
		else:
			dest += data[i]
			i += 1
	return dest
	
def decode_sprite(data):
	(flags, height, width, height2, datalen, decodedlen) = unpack_from('<HBHBHH', data)
	print '0x%04x %02dx%02d %02d %d %d' % (flags, width, height, height2, datalen, decodedlen)
	offset = 10
	if (flags & 0x1) != 0:	# house colors
		offset += 16
	if (flags & 0x2) == 0:
		sprite_data = decode_format80(data[offset:])
	else:
		sprite_data = data[offset:]
	pixels = decode_sprite_data(sprite_data)
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
			save_pbm(*("%s_%03d.pbm" % (filename, i),) + decode_sprite(shp[offsets[i]:offsets[i+1]]))

if len(sys.argv) <= 1:
	print "usage : %s [-p palette.PAL] file.shp" % sys.argv[0]
else:
	args = sys.argv[1:]
	if args[0] == '-p':
		load_palette(args[1])
		args = args[2:]
	for filename in args:
		extract_shp(filename)

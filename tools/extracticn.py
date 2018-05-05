#!/usr/bin/env python
# vim: tabstop=4 shiftwidth=4 softtabstop=4 noexpandtab
#
# read ICON.ICN file (IFF)

from struct import *
import sys
from westwood_codecs import *
from save_pictures import *

def load_palette(filename):
	with open(filename, 'rb') as pal_file:
		return ''.join(map(lambda c: chr((ord(c) << 2) + (ord(c) >> 6)), list(pal_file.read())))

def load_icon_map(filename):
	with open(filename, 'rb') as map_file:
		s = map_file.read()
		return [unpack_from('<H', s, i)[0] for i in range(0, len(s), 2)]

def parse_iff(data):
	form = data[0:4]
	if form != 'FORM':
		return None
	(form_len,) = unpack_from('>L', data, 4)
	if ((form_len + 9)&~1) != ((len(data) + 1)&~1):
		print "FORM len mismatch", form_len + 8, len(data)
	iff_type = data[8:12]
	print iff_type, form_len
	offset = 12
	iff_data = {}
	while offset <= len(data)-8:
		chunk = data[offset:offset+4]
		(chunk_size,) = unpack_from('>L', data, offset + 4)
		print '%06X %s %6d' % (offset, chunk, chunk_size)
		offset += 8
		iff_data[chunk] = data[offset:offset+chunk_size]
		offset += (chunk_size + 1) & ~1
	return (iff_type, iff_data)

def decode_sset(data):
	(encoding,size,offset) = unpack_from('<HLH', data)
	offset += 8
	if encoding == 0:
		return data[offset:offset+size]
	elif encoding == 4:	# format80
		return decode_format80(data[offset:])

def decode_tile(data, pal, width, height):
	rows = []
	for y in range(height):
		row = ''
		for x in range(width/2):
			v = ord(data[y*(width/2)+x])
			left = pal[v >> 4]
			right = pal[v & 0x0f]
			row += left
			row += right
		#print row.encode('hex')
		rows.append(row)
	return rows

def save_tileset(filename, tiles, width, height, palette, tileset_width = 320):
	count = len(tiles)
	tileset_height = height * ((count + (tileset_width / width) - 1) / (tileset_width / width))
	#print tileset_width, tileset_height
	step = tileset_width / width
	pixels = ''
	for i in range(0, count, step):
		chunk = reduce(lambda a, b: map(lambda x, y: x+y, a, b), tiles[i:i+step])
		chunk = map(lambda s: s if len(s) >= tileset_width else s + (chr(0)*(tileset_width-len(s))), chunk)
		pixels += ''.join(chunk)
	save_pbm(filename, tileset_width, tileset_height, pixels, palette)

def extract_icn(filename, palette = None, icon_map = None):
	with open(filename, 'rb') as icn_file:
		icn = icn_file.read()
		(icn_type, icn_data) = parse_iff(icn)
		width = ord(icn_data['SINF'][0]) * 8
		height = ord(icn_data['SINF'][1]) * 8
		tile_bytes = width * height / 2
		pixel_data = decode_sset(icn_data['SSET'])
		count = len(pixel_data) / tile_bytes
		print '%d tiles of %dx%d pixels, %d bytes' % (count, width, height, tile_bytes)
		if len(icn_data['RTBL']) != count:
			print 'RTBL size mismatch :', count, len(icn_data['RTBL'])
		else:
			tiles = []
			for i in range(count):
				pal_index = ord(icn_data['RTBL'][i])
				pal = icn_data['RPAL'][pal_index*16:(pal_index+1)*16]
				tile = decode_tile(pixel_data[tile_bytes*i:tile_bytes*(i+1)], pal, width, height)
				istransparent = False
				for line in tile:
					for j in range(len(line)):
						if ord(line[j]) == 0:
							istransparent = True
							break
				if istransparent:
					print 'Tile %3d (palette %2d) is transparent %02x' % (i, pal_index, ord(pal[0]))
				tiles.append(tile)
			save_tileset(filename + '.pbm', tiles, width, height, palette)
			if icon_map is not None:
				count = icon_map[0]
				for i in range(count):
					if icon_map[i+1] == 0:
						icons = icon_map[icon_map[i]:]
					else:
						icons = icon_map[icon_map[i]:icon_map[i+1]]
					#print i, icon_map[i], len(icons), icons
					if len(icons) > 60 and i != 20:
						tileset_width = 10 * width
					elif (len(icons) % 3) == 0 and i != 12 and i != 26:
						tileset_width = 3 * width
					elif (len(icons) % 2) == 0:
						tileset_width = 2 * width
					elif len(icons) < 4:
						tileset_width = width * len(icons)
					else:
						tileset_width = 4 * width
					save_tileset("%s_%02d.pbm" % (filename, i), [tiles[j] for j in icons], width, height, palette, tileset_width)
			palette_usage = ['0'] * 256
			for c in icn_data['RPAL']:
				palette_usage[ord(c)] = '1'
			#print ''.join(palette_usage)

if len(sys.argv) <= 1:
	print "usage : %s [-p palette.PAL] [-m icon.MAP] file.ICN" % sys.argv[0]
else:
	palette = None
	icon_map = None
	args = sys.argv[1:]
	while len(args) > 2 and args[0][0] == '-':
		if args[0] == '-p':
			palette = load_palette(args[1])
			args = args[2:]
		elif args[0] == '-m':
			icon_map = load_icon_map(args[1])
			args = args[2:]
	for filename in args:
		extract_icn(filename, palette, icon_map)

#!/usr/bin/env python
# vim: tabstop=4 shiftwidth=4 softtabstop=4 noexpandtab
#
# read FNT font files from Dune II

from struct import *
import sys
from save_pictures import *

def extract_fnt(filename):
	with open(filename, 'rb') as fnt_file:
		fnt = fnt_file.read()
		(size, sig, params, offsets, width_list, char_data, line_list) = unpack_from('<HHHHHHH', fnt)
		print filename, size, sig, params, offsets, width_list, char_data, line_list
		(p1, p2, p3, max_index, height, max_width) = unpack_from('<BBBBBB', fnt, params)
		#print fnt[params:offsets].encode('hex')
		print ' ', p1, p2, p3, max_index, height, max_width
		lines = [''] * height
		for i in range(max_index + 1):
			width = ord(fnt[width_list+i])
			(unused_lines, used_lines) = unpack_from('<BB', fnt, line_list + i * 2)
			(offset,) = unpack_from('<H', fnt, offsets + i * 2)
			#print i, width, unused_lines, used_lines, offset
			for y in range(height):
				if y < unused_lines or y >= unused_lines + used_lines:
					line = chr(0) * width
				else:
					line = ''
					for x in range(width):
						data = ord(fnt[offset])
						if (x & 1) != 0:
							data = data >> 4
						else:
							data = data & 0x0f
						line += chr(data)
						if (x & 1) != 0 or x == width - 1:
							offset += 1
				lines[y] += line
		save_pbm(filename + '.pbm', len(lines[0]), height, ''.join(lines), None)

if len(sys.argv) <= 1:
	print "usage : %s file.FNT" % sys.argv[0]
else:
	args = sys.argv[1:]
	for filename in args:
		extract_fnt(filename)

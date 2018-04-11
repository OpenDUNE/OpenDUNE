#!/usr/bin/env python
# vim: tabstop=4 shiftwidth=4 softtabstop=4 noexpandtab
#

from struct import pack

def save_pbm(filename, width, height, pixels, palette):
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

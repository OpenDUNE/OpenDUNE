#!/usr/bin/env python
# vim: tabstop=4 shiftwidth=4 softtabstop=4 noexpandtab
#

from struct import pack

def split_string(s, n):
	return [s[i*n:i*n+n] for i, j in enumerate(s[::n])]

def save_pbm(filename, width, height, pixels, palette):
	save_iff(filename, width, height, pixels, palette, 'PBM ', 8)

def save_ilbm(filename, width, height, pixels, palette):
	bpp = 8 * len(pixels) / (width * height)
	save_iff(filename, width, height, pixels, palette, 'ILBM', bpp)

def save_iff(filename, width, height, pixels, palette, fmt, bpp):
	if (width & 1) != 0:
		pixels = ''.join([line + chr(0) for line in split_string(pixels, width)])
	with open(filename, 'wb') as pbm_file:
		# width, height, x, y, bitplanes, mask, compression, pad, transp_col, ratio_x, ratio_y, screen width, screen height
		bmhd_chunk = 'BMHD' + pack('>LHHHHBBBBHBBHH', 20, width, height, 0, 0, bpp, 2, 0, 0, 0, 10, 10, width, height);
		cmap_chunk = '' if not palette else 'CMAP' + pack('>L', len(palette)) + palette
		body_chunk = 'BODY' + pack('>L', len(pixels)) + pixels

		size = 4 + len(body_chunk) + len(bmhd_chunk) + len(cmap_chunk)
		form = 'FORM' + pack('>L', size) + fmt + bmhd_chunk + cmap_chunk + body_chunk
		pbm_file.write(form)
		print filename, "written", bpp, "bpp"

def save_flc(filename, width, height, frames, palette):
	with open(filename, 'wb') as flc_file:
		frame_delay = 100	# ms per frame
		# 1st frame
		flc_frames = []
		if palette is None:
			palette_sub_chunk = None
		else:
			# sub_chunk_size, sub_chunk_type
			# packet_count, skip, count (count = 0 for 256)
			palette_sub_chunk = pack('<LHHBB', len(palette) + 6 + 2 + 2, 0x04, 1, 0, (len(palette) / 3) & 0xff)
			palette_sub_chunk += palette
		# Full frame RLE : 0x0f
		encoded_frame = ''
		for y in range(height):
			packets = []
			x = 1
			count = 1
			repeat = True
			#print frames[0][y*width:(y+1)*width].encode('hex')
			while x < width:
				#print x, y, repeat
				if repeat:
					if frames[0][y*width+(x-1)] == frames[0][y*width+x] and count < 127:
						count += 1
					elif count > 2:
						packets.append(chr(count)+frames[0][y*width+(x-1)])
						count = 1
					else:
						repeat = False
						count += 1
				else:
					if frames[0][y*width+(x-2)] == frames[0][y*width+(x-1)] == frames[0][y*width+x]:
						packets.append(pack('<b', 2-count)+frames[0][y*width+x-count:y*width+x-2])
						repeat = True
						count = 3
					elif count >= 128:	# To be checked
						packets.append(pack('<b', 1-count)+frames[0][y*width+x-count:y*width+x-1])
						count = 2
					else:
						count += 1
				x += 1
			if count > 0:
				if repeat:
					packets.append(chr(count)+frames[0][y*width+(x-1)])
				else:
					packets.append(pack('<b', -count)+frames[0][y*width+x-count:y*width+x])
			#print count, map(lambda s : s.encode('hex'), packets)
			encoded_frame += pack('<B', len(packets)) + ''.join(packets)
		full_frame_rle_sub_chunk = pack('<LH', len(encoded_frame) + 6, 0x0f) + encoded_frame
		if palette_sub_chunk is None:
			first_frame = pack('<LHHHHHH', len(full_frame_rle_sub_chunk) + 16, 0xf1fa, 1, 0, 0, 0, 0)
		else:
			first_frame = pack('<LHHHHHH', len(full_frame_rle_sub_chunk) + len(palette_sub_chunk) + 16, 0xf1fa, 2, 0, 0, 0, 0)
			first_frame += palette_sub_chunk
		first_frame += full_frame_rle_sub_chunk
		flc_frames = [first_frame]
		for frame in range(1, len(frames)):
			encoded_frame = ''
			equals_lines = 0
			line_count = 0
			for y in range(height):
				current_line = frames[frame][y*width:(y+1)*width]
				previous_line = frames[frame-1][y*width:(y+1)*width]
				if current_line == previous_line:
					equals_lines += 1
				else:
					if (equals_lines > 0):
						encoded_frame += pack('<h', -equals_lines)
						equals_lines = 0
					packets = []
					# no compression test:
					#if width > 254:
					#	packets.append(pack('<Bb', 0, 127) + frames[frame][y*width:y*width+254])
					#	packets.append(pack('<Bb', 0, (width/2)-127) + frames[frame][y*width+254:(y+1)*width])
					#else:
					#	packets.append(pack('<Bb', 0, (width/2)) + frames[frame][y*width:(y+1)*width])
					x = 0
					while x < width:
						skip = 0
						count = 0
						while x < width and skip < 254 and current_line[x:x+2] == previous_line[x:x+2]:
							x += 2
							skip += 2
						rle = True
						while x < width and count < 127 and current_line[x:x+2] != previous_line[x:x+2]:
							if rle and count > 0 and current_line[x:x+2] != current_line[x-2:x]:
								rle = False
							x += 2
							count += 1
						if rle and count > 1:
							packets.append(pack('<Bb', skip, -count) + current_line[x-2:x])
						else:
							packets.append(pack('<Bb', skip, count) + current_line[x-count*2:x])
					encoded_frame += pack('<H', len(packets)) + ''.join(packets)
					line_count += 1
			# frame with 1 sub chunk of type 7 (DELTA_FLC)
			flc_frames.append(pack('<LHHHHHHLHH', len(encoded_frame) + 24, 0xf1fa, 1, 0, 0, 0, 0, len(encoded_frame) + 8, 0x07, line_count) + encoded_frame)
		flc_data = ''.join(flc_frames)
		# 0xAF12 is signature for FLC files
		flc_header = pack('<LHHHHHHL', len(flc_data) + 128, 0xAF12, len(flc_frames), width, height, 8, 0, frame_delay)
		flc_header += chr(0) * (128 - len(flc_header))
		flc_file.write(flc_header)
		flc_file.write(flc_data)
		print filename, "written"

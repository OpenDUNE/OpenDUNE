#!/usr/bin/env python
# vim: tabstop=4 shiftwidth=4 softtabstop=4 noexpandtab

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

def decode_format40(data):
	dest = ''
	i = 0
	while i < len(data):
		cmd = ord(data[i])
		i += 1
		if cmd == 0:
			# RLE
			dest += (data[i+1] * ord(data[i]))
			i += 2
		elif (cmd & 0x80) == 0:
			# copy
			dest += data[i:i+cmd]
			i += cmd
		elif cmd == 0x80:
			# 16 bit command
			cmd = ord(data[i]) + (ord(data[i+1]) << 8)
			i += 2
			if cmd == 0:
				# end
				break
			elif (cmd & 0x8000) == 0:
				# skip
				dest += (chr(0) * cmd)
			elif (cmd & 0x4000) == 0:
				count = cmd & 0x3fff
				dest += data[i:i+count]
				i += count
			else:
				count = cmd & 0x3fff
				dest += (data[i] * count)
				i += 1
		else:
			# skip
			dest += (chr(0) * (cmd & 0x7f))
	return dest


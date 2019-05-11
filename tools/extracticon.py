#!/usr/bin/env python
# vim: tabstop=4 shiftwidth=4 softtabstop=4 expandtab
#
# Extract ICONs from MZ/NE MS Windows executable file
#

from struct import *
import sys

if len(sys.argv) > 1:
    filename = sys.argv[1]
else:
    filename = '../bin/data/DUNE2.ICO'

print 'reading %s' % (filename)
with open(filename, 'rb') as content_file:
    content = content_file.read()

icon_header = {}
icon_data = {}

# RT_GROUP_ICON = 14 = 0x0e
# RT_ICON = 3
if content[0:2] == 'MZ':
    newoffset, = unpack_from('<H', content, 0x3C)
    if content[newoffset:newoffset+2] == 'NE':
        resoffset, = unpack_from('<H', content, newoffset+0x24)
        ressegcount, = unpack_from('<H', content, newoffset+0x34)
        #print resoffset, ressegcount
        rscAlignShift, = unpack_from('<H', content, newoffset+resoffset)
        offset = newoffset+resoffset+2
        while True:
            rtTypeID, rtResourceCount, rtReserved = unpack_from('<HHI', content, offset)
            if rtTypeID == 0:
                break
            offset = offset + 8
            print 'resource type 0x%04x count %d :' % (rtTypeID, rtResourceCount)
            for j in range(0, rtResourceCount):
                rnOffset, rnLength, rnFlags, rnID, rnHandle, rnUsage = unpack_from('<HHHHHH', content, offset)
                offset = offset + 12
                realoffset = rnOffset << rscAlignShift
                reallen = rnLength << rscAlignShift
                print '  offset=0x%06x (0x%04x) len=%d (0x%04x) flags=%04x ID=%04x' % (realoffset, rnOffset, reallen, rnLength, rnFlags, rnID)
                if rtTypeID == 0x800e:
                    icon_header[rnID] = content[realoffset:realoffset+18] + '\x16\x00\x00\x00'
                elif rtTypeID == 0x8003:
                    icon_data[rnID] = content[realoffset:realoffset+reallen]

for icon_id in icon_header.keys():
    filename = '%04x.ICO' % icon_id
    with open(filename, 'wb') as icon_file:
        icon_file.write(icon_header[icon_id])
        icon_file.write(icon_data[icon_id])
        print '%s written' % filename


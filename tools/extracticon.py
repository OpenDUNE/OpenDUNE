#!/usr/bin/env python
# vim: tabstop=4 shiftwidth=4 softtabstop=4 expandtab
#
# Extract ICONs from MZ/NE and MZ/PE MS Windows executable files
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

def decode_rsrc_dir(virtual_address, rsrc, offset=0, level=0, rtype=0, rsid=0):
    pad = "  " * level
    characteristic, ts, version_major, version_minor, name_entries, id_entries = unpack_from('<IIHHHH', rsrc, offset)
    offset = offset + 16
    print '%sversion %d.%d entries : %d, %d' % (pad, version_major, version_minor, name_entries, id_entries)
    for i in range(0, name_entries):
        name_offset, data_offset = unpack_from('<II', rsrc, offset)
        offset = offset + 8
        print '%sname 0x%06x data 0x%06x' % (pad, name_offset, data_offset)
    for i in range(0, id_entries):
        _id, data_offset = unpack_from('<II', rsrc, offset)
        # level = 0  _id : type 3 = icon, 14 = group icon
        # level = 1  _id : ressource id
        # level = 2  _id : language
        if level == 0:
            rtype = _id
        elif level == 1:
            rsid = _id
        offset = offset + 8
        print '%sid 0x%08x data 0x%06x' % (pad, _id, data_offset)
        if data_offset & 0x80000000:
            decode_rsrc_dir(virtual_address, rsrc, data_offset & 0x7ffffff, level + 1, rtype, rsid)
        else:
            data, size, codepage = unpack_from('<III', rsrc, data_offset)
            realoffset = data - virtual_address
            print '%sdata 0x%06x size %d bytes codepage %d' % (pad, realoffset, size, codepage)
            # there is 1 header for all the icons...
            if rtype == 3:      # Icon
                icon_data[rsid] = rsrc[realoffset:realoffset+size]
            elif rtype == 14:   # Icon group
                filename = '%04x.ICO' % rsid
                with open(filename, 'wb') as icon_file:
                    icon_file.write(rsrc[realoffset:realoffset+6])
                    Res, Type, Count = unpack_from('<HHH', rsrc, realoffset)
                    print pad, Res, Type, Count
                    Offset = 6 + 16 * Count
                    for j in range(0, Count):
                        Width, Height, Ncolor, Res, Planes, Bpp, ByteCount, icon_id = unpack_from('<BBBBHHIH', rsrc, realoffset+6+j*14)
                        print '%s#%02d %03dx%03d %dcols %dx%dbpp %d bytes at 0x%06x %d' % (pad, j, Width, Height, Ncolor, Planes, Bpp, ByteCount, Offset, icon_id)
                        icon_file.write(rsrc[realoffset+6+j*14:realoffset+6+j*14+12])
                        icon_file.write(pack('<I', Offset))
                        Offset = Offset + len(icon_data[icon_id])
                    for j in range(0, Count):
                        Width, Height, Ncolor, Res, Planes, Bpp, ByteCount, icon_id = unpack_from('<BBBBHHIH', rsrc, realoffset+6+j*14)
                        icon_file.write(icon_data[icon_id])
                    print '%s%s written' % (pad, filename)

icon_header = {}
icon_header_data = {}
icon_data = {}

# RT_GROUP_ICON = 14 = 0x0e
# RT_ICON = 3
if content[0:2] == 'MZ':
    newoffset, = unpack_from('<H', content, 0x3C)
    if content[newoffset:newoffset+2] == 'PE':
        sections_count, = unpack_from('<H', content, newoffset+6)
        size_of_optheader, = unpack_from('<H', content, newoffset+20)
        offset = newoffset+24+size_of_optheader
        for j in range(0, sections_count):
            section_name = content[offset:offset+8].strip("\0")
            virtual_size, virtual_offset, section_size, section_offset = unpack_from('<IIII', content, offset + 8)
            offset = offset + 40
            print 'section %s : 0x%06x %d bytes (virtual 0x%06x %d bytes)' % (section_name, section_offset, section_size, virtual_offset, virtual_size)
            if section_name == '.rsrc':
                decode_rsrc_dir(virtual_offset, content[section_offset:section_offset+section_size])
    elif content[newoffset:newoffset+2] == 'NE':
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
                print '  offset=0x%06x (0x%04x) len=%d (0x%04x) flags=%04x ID=%04x Handle=%04x Usage=%04x' % (realoffset, rnOffset, reallen, rnLength, rnFlags, rnID, rnHandle, rnUsage)
                if rtTypeID == 0x800e:
                    Res, Type, Count = unpack_from('<HHH', content, realoffset)
                    print "  ", Res, Type, Count
                    Offset = 6 + 16 * Count
                    header = content[realoffset:realoffset+6]
                    data_ids = {}
                    for i in range(0, Count):
                        Width, Height, Ncolor, Res, Planes, Bpp, ByteCount, icon_id = unpack_from('<BBBBHHIH', content, realoffset+6+i*14)
                        print '  #%02d %03dx%03d %dcols %dx%dbpp %d bytes at 0x%06x %d' % (i, Width, Height, Ncolor, Planes, Bpp, ByteCount, Offset, icon_id)
                        header = header + content[realoffset+6+i*14:realoffset+6+i*14+12] + pack('<I', Offset)
                        Offset = Offset + ByteCount
                        data_ids[i] = icon_id
                    icon_header[rnID] = header
                    icon_header_data[rnID] = data_ids
                elif rtTypeID == 0x8003:
                    icon_data[rnID & 0x7fff] = content[realoffset:realoffset+reallen]

for icon_id in icon_header.keys():
    filename = '%04x.ICO' % icon_id
    with open(filename, 'wb') as icon_file:
        icon_file.write(icon_header[icon_id])
        for data_id in icon_header_data[icon_id].keys():
            icon_file.write(icon_data[icon_header_data[icon_id][data_id]])
        print '%s written' % filename


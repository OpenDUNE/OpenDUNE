#!/bin/bash
# Build a Saturn disc image (ISO + CUE) from IP.BIN and a directory tree.
#
# Usage: mkdisc.sh <ip.bin> <disc root dir> <output base name>
#
# IP.BIN goes into the ISO system area (sectors 0-15). The BIOS then loads
# the first file of the root directory as the 1st read file, so the program
# must sort first (0.BIN).

set -e

if [ $# -ne 3 ]; then
	echo "usage: $0 <ip.bin> <disc root dir> <output base name>" >&2
	exit 1
fi

IP=$1
ROOT=$2
OUT=$3

xorriso -as mkisofs -quiet \
	-sysid "SEGA SEGASATURN" -volid OPENDUNE -volset OPENDUNE \
	-publisher "OPENDUNE" -preparer "OPENDUNE" -appid "OPENDUNE" \
	-iso-level 1 -input-charset iso8859-1 \
	-G "$IP" -o "$OUT.iso" "$ROOT"

cat > "$OUT.cue" <<EOF
FILE "$(basename "$OUT").iso" BINARY
  TRACK 01 MODE1/2048
    INDEX 01 00:00:00
EOF

echo "$OUT.iso / $OUT.cue"

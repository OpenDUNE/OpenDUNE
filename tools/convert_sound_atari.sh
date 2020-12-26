#!/bin/sh
# (c) 2020 Thomas Bernard
# script to convert original .VOC files to Atari Optimized
# .AU files. (Mono, signed 8bits PCM)

if [ ! -d "$1" ] ; then
  echo "Usage: $0 directory"
  exit 1
fi

# sample rates available on Atari STE :
#  6258Hz
# 12517Hz
# 25033Hz
# 50066Hz
rate=12517
for voc in $(find "$1" -name \*\.VOC) ; do
  dir=$(dirname $voc)
  au="$(basename $voc .VOC).AU"
  out="${dir}/${au}"
  echo "$voc => $out"
  #ffmpeg -v 0 -i '%s' -ar 50066 -f au -c pcm_s8 -
  ffmpeg -i "$voc" -ar $rate -f au -c pcm_s8 $out
done

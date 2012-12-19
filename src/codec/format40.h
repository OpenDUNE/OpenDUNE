/** @file src/codec/format40.h Function signature for decoder of 'format40' files. */

#ifndef CODEC_FORMAT40_H
#define CODEC_FORMAT40_H

extern void Format40_Decode(uint8 *dst, uint8 *src);
extern void Format40_Decode_XorToScreen(uint8 *dst, uint8 *src, uint16 width);
extern void Format40_Decode_ToScreen(uint8 *dst, uint8 *src, uint16 width);

#endif /* CODEC_FORMAT40_H */

/** @file src/video/video.h Definitions of a video driver. */

#ifndef VIDEO_VIDEO_H
#define VIDEO_VIDEO_H

extern bool Video_Init(void);
extern void Video_Uninit(void);
extern void Video_Tick(void);
extern void Video_SetPalette(void *palette, int from, int length);
extern void Video_Mouse_SetPosition(uint16 x, uint16 y);
extern void Video_Mouse_SetRegion(uint16 minX, uint16 maxX, uint16 minY, uint16 maxY);

#endif /* VIDEO_VIDEO_H */

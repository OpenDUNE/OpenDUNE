/** @file src/video/video.h Definitions of a video driver. */

#ifndef VIDEO_VIDEO_H
#define VIDEO_VIDEO_H

#if defined(SATURN)
/* Hardware rendering stages: 0 keeps the software path for that stage so it
 * can be compared with the hardware picture; 1 draws it with the VDPs. */
#define SATURN_HW_MAP     1 /*!< the map on VDP2 cell planes */
#define SATURN_HW_SPRITES 1 /*!< units and effects on VDP1 */
#endif

typedef enum VideoScaleFilter {
	FILTER_NEAREST_NEIGHBOR = 0,	/**<! Default */
	FILTER_SCALE2X,					/**<! see http://scale2x.sourceforge.net/ */
	FILTER_HQX						/**<! see https://code.google.com/p/hqx/ */
} VideoScaleFilter;

extern bool Video_Init(int screen_magnification, VideoScaleFilter filter);
extern void Video_Uninit(void);
extern void Video_Tick(void);
extern void Video_SetPalette(void *palette, int from, int length);
extern void Video_Mouse_SetPosition(uint16 x, uint16 y);
extern void Video_Mouse_SetRegion(uint16 minX, uint16 maxX, uint16 minY, uint16 maxY);
extern void Video_SetOffset(uint16 offset);
extern void * Video_GetFrameBuffer(uint16 size);

#if defined(SATURN)
extern void Video_MapShow(bool show);
extern void Video_MapLoadTiles(int tileCount);
extern void Video_MapSetTile(uint16 packed);
extern void Video_MapRedrawAll(void);
extern void Video_MapScroll(int viewportX, int viewportY);
extern bool Video_MapSprite(const uint8 *sprite, const uint8 *data, int16 width, int16 height,
                            int16 x, int16 y, const uint8 *palette, const uint8 *remap,
                            int remapCount, uint16 flags);
extern void Video_MapSpritesBegin(void);
extern void Video_MapFlush(void);
extern void Video_MapSpritesReset(void);
#endif

#endif /* VIDEO_VIDEO_H */

/** @file src/video/video_fps.h display FPS in top right of the screen */

#ifndef VIDEO_VIDEO_FPS_H
#define VIDEO_VIDEO_FPS_H

typedef void (*Video_ShowFPS_Proc)(uint8 *screen, uint16 x, uint8 digit);
void Video_ShowFPS_2(uint8 *screen, int bytes_per_row, Video_ShowFPS_Proc drawchar);
#define Video_ShowFPS(screen) Video_ShowFPS_2(screen, 320, NULL)

#endif /* VIDEO_VIDEO_FPS_H */

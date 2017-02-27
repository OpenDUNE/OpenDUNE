#include "types.h"
#include "../timer.h"

#include "video_fps.h"

void Video_ShowFPS(uint8 *screen)
{
	uint32 timeStamp;
	static uint32 s_previousTimeStamps[16] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
	static uint8 s_previousTimeStampsIndex = 0;

	timeStamp = Timer_GetTime();
	if(s_previousTimeStamps[s_previousTimeStampsIndex] > 0
			&& timeStamp != s_previousTimeStamps[s_previousTimeStampsIndex]) {
		int x, i;
		/* calculate average frames per 1000sec on the 16 last time measures */
		uint32 kfps = 16000000 / (timeStamp - s_previousTimeStamps[s_previousTimeStampsIndex]);
		for(x = 320 - 4; kfps > 0; kfps /= 10, x -= 4) {
			/* draw the digits */
			static const uint8 fontdigits[10] = {0167,044,0135,0155,056,0153,0173,045,0177,0157};
			static const uint8 fonttestsegments[15] = {03,01,05, 02,0,04, 032,010,054, 020,0,040, 0120,0100,0140};
			uint8 segments = fontdigits[kfps % 10];
			int offset = 0;
			for(i=0; i<15; i++) {
				screen[x+offset] = (segments & fonttestsegments[i]) ? 15 : 0;
				offset++;
				if((i % 3) == 2) {
					screen[x+offset] = 0;
					offset += 317;
				}
			}
		}
		for (i=0; i<5; i++) screen[x+2+i*320] = 0;
	}
	s_previousTimeStamps[s_previousTimeStampsIndex] = timeStamp;
	s_previousTimeStampsIndex = (s_previousTimeStampsIndex + 1) & 0x0f;
}

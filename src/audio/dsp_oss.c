/** @file src/audio/dsp_oss.c OSS (Open Sound System) implementation of the DSP. */
/* OSS is deprecated under linux, but still used in *BSD world */

#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <errno.h>
#include <sys/ioctl.h>
#include <sys/soundcard.h>
#include "types.h"
#include "../timer.h"
#include "../os/error.h"
#include "../os/endian.h"

#include "dsp.h"

#define AUDIO_DEVICE "/dev/dsp"

static void oss_tick(void);

static int s_oss_fd = -1;

static const uint8 * s_data_to_play = NULL;
static size_t s_bytes_to_play = 0;

void DSP_Stop(void)
{
	if(s_oss_fd >= 0) {
		close(s_oss_fd);
		s_oss_fd = -1;
	}
}

void DSP_Uninit(void)
{
	DSP_Stop();
	Timer_Remove(oss_tick);
}

bool DSP_Init(void)
{
	s_oss_fd = open(AUDIO_DEVICE, O_WRONLY);
	if(s_oss_fd < 0) {
		Error("DSP_Init() OSS : open(%s) : %s\n", AUDIO_DEVICE, strerror(errno));
		return false;
	}
#ifdef SNDCTL_SYSINFO
	{
		struct oss_sysinfo info;
		if(ioctl(s_oss_fd, SNDCTL_SYSINFO, &info) < 0) {
			Warning("ioctl(SNDCTL_SYSINFO) Failed : %s\n", strerror(errno));
		} else {
			Debug("DSP_Init() : %s version %s %d dsp devices\n",
			      info.product, info.version, info.numaudios);
		}
	}
#endif
	close(s_oss_fd);
	s_oss_fd = -1;
	Timer_Add(oss_tick, 1000000 / 10, true);
	return true;
}

void DSP_Play(const uint8 *data)
{
	int i;
	uint32 len;
	int freq;
	ssize_t n;

	DSP_Stop();

	data += READ_LE_UINT16(data + 20);	/* skip Create Voice File header */

	/* first byte is Block Type :
	 * 0x00: Terminator
	 * 0x01: Sound data
	 * 0x02: Sound data continuation
	 * 0x03: Silence
	 * 0x04: Marker
	 * 0x05: Text
	 * 0x06: Repeat start
	 * 0x07: Repeat end
	 * 0x08: Extra info
	 * 0x09: Sound data (New format) */
	if (*data != 1) return;

	/* next 3 bytes are block size (not including the 1 block type and size 4 bytes) */
	len = (READ_LE_UINT32(data) >> 8) - 2;
	data += 4;
	/* byte  0    frequency divisor
	 * byte  1    codec id : 0 is "8bits unsigned PCM"
	 * bytes 2..n audio data */

	freq = 1000000 / (256 - data[0]);
	if (data[1] != 0) Warning("Unsupported VOC codec 0x%02x\n", (int)data[1]);

	s_oss_fd = open(AUDIO_DEVICE, O_WRONLY);
	if(s_oss_fd < 0) {
		Error("open(%s) : %s\n", AUDIO_DEVICE, strerror(errno));
		return;
	}
	i = AFMT_U8;	/* Unsigned 8bit samples */
	if(ioctl(s_oss_fd, SNDCTL_DSP_SETFMT, &i) < 0) {
		Error("Failed to set unsigned 8bit format\n");
	}
	i = 0;	/* MONO */
	if(ioctl(s_oss_fd, SNDCTL_DSP_STEREO, &i) < 0) {
		Error("Failed to set mono\n");
	}
	/*Debug("Setting sample rate = %d\n", freq);*/
	if(ioctl(s_oss_fd, SNDCTL_DSP_SPEED, &freq) < 0) {
		Error("Failed to set sample rate\n");
	}
	/*Debug("Real sample rate = %d\n", freq);*/

	n = write(s_oss_fd, data + 2, len);
#ifdef _DEBUG
	if((int)n != (int)len) {
		Debug("write(%d) returned %d\n", (int)len, (int)n);
	}
#endif
	if(n < 0) {
		if(errno == EWOULDBLOCK || errno == EAGAIN || errno == EINTR) {
			s_data_to_play = data + 2;
			s_bytes_to_play = len;
		} else {
			Error("DSP_Play() write() : %s\n", strerror(errno));
		}
	} else if((int)n < (int)len) {
		s_data_to_play = data + 2 + n;
		s_bytes_to_play = len - n;
	}
}

#define DELAY_THRESHOLD (16)

uint8 DSP_GetStatus(void)
{
	int delay;
	if(s_oss_fd < 0) return 0;
	if(s_bytes_to_play > 0) return 2;
	if(ioctl(s_oss_fd, SNDCTL_DSP_GETODELAY, &delay) < 0) {
		Warning("ioctl SNDCTL_DSP_GETODELAY : %s\n", strerror(errno));
		return 0;
	}
	if(delay < DELAY_THRESHOLD) return 0;
	/*Debug("DSP_GetStatus() : delay=%d\n", delay);*/
	return 2;	/* playing */
}

static void oss_tick(void)
{
	ssize_t n;
	if(s_oss_fd >= 0 && s_bytes_to_play > 0) {
		n = write(s_oss_fd, s_data_to_play, s_bytes_to_play);
#ifdef _DEBUG
		if((int)n != (int)s_bytes_to_play) {
			Debug("  write(%d) returned %d\n", (int)s_bytes_to_play, (int)n);
		}
#endif
		if(n < 0) {
			Error("oss_tick() write() : %s\n", strerror(errno));
		} else {
			s_data_to_play += n;
			s_bytes_to_play -= n;
		}
	}
}

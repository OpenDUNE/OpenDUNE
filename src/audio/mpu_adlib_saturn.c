/** @file src/audio/mpu_adlib_saturn.c Sega Saturn music: the AdLib driver in place of the MPU.
 *
 * Implements the MPU_* interface of mt32mpu.h with Westwood's AdLib driver
 * (adl_driver.cpp) playing the game's .ADL files, the DOS AdLib/Sound Blaster
 * music, on the SCSP (saturn/common/opl_scsp.c). Music and sound effects are
 * tracks of the same file, as on DOS; the driver's own priorities decide
 * between sound effects. Music plays on channels 0-5, effects on 6-8.
 *
 * The driver and the software envelopes run from the SCSP's timer interrupt
 * (every millisecond), so the music keeps its tempo while the game is busy,
 * loading from the disc for example. The MPU_* functions mask interrupts
 * while they touch the driver. */

#include <string.h>

#include "types.h"
#include "driver.h"
#include "mt32mpu.h"
#include "adl_driver.h"
#include "../file.h"

#include "bios.h"
#include "opl_scsp.h"
#include "saturn_timer.h"
#include "scsp.h"

enum {
	HANDLES = 8,
	TICK_US = 1000000 / 72, /*!< the driver runs 72 times a second */
	MUSIC_FIRST = 0,
	MUSIC_LAST = 5
};

typedef struct Handle {
	bool used;
	const uint8 *file;
	uint16 track;
	bool music;
} Handle;

static Handle s_handles[HANDLES];
static const uint8 *s_loaded = NULL; /*!< the file the driver plays from */
static uint16 s_musicHandle = 0xFFFF;
static uint64_t s_nextTick = 0;

/* music fade: attenuation (TL units) now, target, and the step per tick */
static int32 s_fadeAtt = 0, s_fadeTarget = 0, s_fadeStep = 0;

static void MPU_Tick(void);

/**
 * The size of the music or sound file loaded at file, from its name.
 *
 * @param file The file in memory.
 * @return Its size, or 0.
 */
static uint32 MPU_FileSize(const uint8 *file)
{
	const Driver *drivers[2];
	uint32 size;
	int i;

	drivers[0] = g_driverMusic;
	drivers[1] = g_driverSound;
	for (i = 0; i < 2; i++) {
		if (drivers[i]->content == file && File_Exists_GetSize(drivers[i]->filename, &size)) return size;
	}
	return 0;
}

/**
 * Set up the AdLib driver on the SCSP and start its timer.
 *
 * @return False if there is no sound RAM for the waveforms.
 */
bool MPU_Init(void)
{
	Scsp_Init();
	if (!OplScsp_Init()) return false;
	ADL_Init(OplScsp_Write);
	memset(s_handles, 0, sizeof(s_handles));
	s_nextTick = SaturnTimer_Us();
	Scsp_TimerStart(MPU_Tick);
	return true;
}

/**
 * Stop the music and sound effects.
 */
void MPU_Uninit(void)
{
	uint32_t sr = Cpu_DisableInterrupts();
	ADL_Load(NULL, 0);
	s_loaded = NULL;
	OplScsp_Reset();
	Cpu_RestoreInterrupts(sr);
}

/**
 * The size of the MSData buffers the engine gives MPU_SetData(), not used here.
 *
 * @return A small size.
 */
uint16 MPU_GetDataSize(void)
{
	/* the MSData buffers are not used */
	return 4;
}

/**
 * Make a handle for a track (music or sound effect) of a file.
 *
 * @param file The .ADL file.
 * @param index The track.
 * @param msdata The MSData buffer (the music's tells music from sound effects).
 * @return The handle, or 0xFFFF.
 */
uint16 MPU_SetData(uint8 *file, uint16 index, void *msdata)
{
	uint16 i;
	VARIABLE_NOT_USED(msdata);

	if (file == NULL) return 0xFFFF;
	for (i = 0; i < HANDLES; i++) {
		if (s_handles[i].used) continue;
		s_handles[i].used = true;
		s_handles[i].file = file;
		s_handles[i].track = index;
		s_handles[i].music = (msdata == g_bufferMusic->buffer);
		return i;
	}
	return 0xFFFF;
}

/**
 * Forget a handle; the file is let go when no handle uses it.
 *
 * @param index The handle.
 */
void MPU_ClearData(uint16 index)
{
	uint16 i;

	if (index >= HANDLES) return;
	s_handles[index].used = false;
	if (index == s_musicHandle) s_musicHandle = 0xFFFF;

	/* the engine frees a file once all its handles are cleared */
	for (i = 0; i < HANDLES; i++) {
		if (s_handles[i].used && s_handles[i].file == s_loaded) return;
	}
	{
		uint32_t sr = Cpu_DisableInterrupts();
		ADL_Load(NULL, 0);
		s_loaded = NULL;
		Cpu_RestoreInterrupts(sr);
	}
}

/**
 * Start a handle's track.
 *
 * @param index The handle.
 */
void MPU_Play(uint16 index)
{
	Handle *h;
	uint32_t size, sr;

	if (index >= HANDLES || !s_handles[index].used) return;
	h = &s_handles[index];
	size = (h->file != s_loaded) ? MPU_FileSize(h->file) : 0;

	sr = Cpu_DisableInterrupts();
	if (h->file != s_loaded) {
		if (!ADL_Load(h->file, size)) {
			s_loaded = NULL;
			Cpu_RestoreInterrupts(sr);
			return;
		}
		s_loaded = h->file;
	}
	if (h->music) {
		s_musicHandle = index;
		s_fadeAtt = s_fadeTarget = s_fadeStep = 0;
		OplScsp_SetAttenuation(MUSIC_FIRST, MUSIC_LAST, 0);
	}
	ADL_Play(h->track, 0xFF);
	Cpu_RestoreInterrupts(sr);
}

/**
 * Stop a handle's track, if it is the music (sound effects end by themselves).
 *
 * @param index The handle.
 */
void MPU_Stop(uint16 index)
{
	/* sound effects end by themselves, or give way by priority */
	if (index >= HANDLES || !s_handles[index].used || !s_handles[index].music) return;
	if (s_loaded != NULL) {
		uint32_t sr = Cpu_DisableInterrupts();
		ADL_StopMusic();
		Cpu_RestoreInterrupts(sr);
	}
}

/**
 * Whether a handle's track (the music) is playing.
 *
 * @param index The handle.
 * @return 1 if it is, else 0.
 */
uint16 MPU_IsPlaying(uint16 index)
{
	int channel;
	uint16 playing = 0;
	uint32_t sr;

	if (index >= HANDLES || !s_handles[index].used) return 0;
	if (!s_handles[index].music) return 0;
	sr = Cpu_DisableInterrupts();
	for (channel = MUSIC_FIRST; channel <= MUSIC_LAST; channel++) {
		if (ADL_IsChannelPlaying(channel)) playing = 1;
	}
	if (ADL_IsChannelPlaying(9)) playing = 1;
	Cpu_RestoreInterrupts(sr);
	return playing;
}

/**
 * Fade the music out (volume 0) or set it back.
 *
 * @param index The handle.
 * @param volume The volume, 0 to fade out.
 * @param time Over how many milliseconds.
 */
void MPU_SetVolume(uint16 index, uint16 volume, uint16 time)
{
	int32 target, ticks;
	uint32_t sr;

	/* only the music volume is used: the fade out (volume 0 over time ms);
	 * sound effects keep the volume the driver gives them */
	if (index >= HANDLES || !s_handles[index].used || !s_handles[index].music) return;

	target = (volume == 0) ? 255 : 0;
	ticks = (int32)time * 72 / 1000;
	sr = Cpu_DisableInterrupts();
	s_fadeTarget = target << 8;
	if (ticks <= 0) {
		s_fadeAtt = s_fadeTarget;
		s_fadeStep = 0;
		OplScsp_SetAttenuation(MUSIC_FIRST, MUSIC_LAST, (uint8)target);
	} else {
		s_fadeStep = (s_fadeTarget - s_fadeAtt) / ticks;
	}
	Cpu_RestoreInterrupts(sr);
}

/**
 * Every millisecond, from the SCSP timer interrupt.
 */
static void MPU_Tick(void)
{
	uint64_t now = SaturnTimer_Us();
	int ticks = 0;

	/* evenly spaced driver ticks */
	while (now >= s_nextTick) {
		if (++ticks > 4) {
			s_nextTick = now + TICK_US;
			break;
		}
		s_nextTick += TICK_US;
		ADL_Callback();
		OplScsp_Flush();

		if (s_fadeStep != 0) {
			s_fadeAtt += s_fadeStep;
			if ((s_fadeStep > 0 && s_fadeAtt >= s_fadeTarget) || (s_fadeStep < 0 && s_fadeAtt <= s_fadeTarget)) {
				s_fadeAtt = s_fadeTarget;
				s_fadeStep = 0;
			}
			OplScsp_SetAttenuation(MUSIC_FIRST, MUSIC_LAST, (uint8)(s_fadeAtt >> 8));
		}
	}
	OplScsp_Update();
}

/**
 * The engine's music tick: nothing to do, the SCSP's timer interrupt runs
 * MPU_Tick().
 */
void MPU_Interrupt(void)
{
	/* the SCSP timer interrupt runs MPU_Tick() */
}

/**
 * No thread on the Saturn: the SCSP's timer interrupt drives the music.
 *
 * @param usec Not used.
 */
void MPU_StartThread(uint32 usec)
{
	VARIABLE_NOT_USED(usec);
}

/**
 * No thread on the Saturn.
 */
void MPU_StopThread(void)
{
}

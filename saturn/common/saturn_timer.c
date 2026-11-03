/** @file saturn/common/saturn_timer.c Frame counter driven by the VBlank-in interrupt. */

#include <stddef.h>
#include "bios.h"
#include "saturn_hw.h"
#include "saturn_timer.h"

/* SH-2 free-running timer (SH7604 Hardware Manual, section 11) */
#define FRT_FRCH    REG8(0xFFFFFE12UL)
#define FRT_FRCL    REG8(0xFFFFFE13UL)
#define FRT_TCR     REG8(0xFFFFFE16UL)

static volatile uint32_t s_frames;
static volatile uint16_t s_frameStart; /*!< free-running timer at the last VBlank */
static uint32_t s_frameRate = 60;
static void (*volatile s_vblankHook)(void);
static volatile int s_waiting;  /*!< the main loop is parked in SaturnTimer_WaitFrame() */

static uint16_t SaturnTimer_FrtRead(void);

/* The VBlank-in handler, entered through SaturnTimer_VBlankInEntry (irq_entry.S). */
void SaturnTimer_VBlankIn(void);
extern void SaturnTimer_VBlankInEntry(void);

/**
 * The VBlank-in interrupt: count the frame and run the hook. Entered through
 * SaturnTimer_VBlankInEntry (irq_entry.S).
 */
void SaturnTimer_VBlankIn(void)
{
	s_frameStart = SaturnTimer_FrtRead();
	s_frames++;
	if (s_vblankHook != NULL) s_vblankHook();
}

/**
 * Also run hook in every VBlank-in interrupt (NULL to stop). Keep it short.
 *
 * @param hook The function, or NULL.
 */
void SaturnTimer_SetVBlankHook(void (*hook)(void))
{
	s_vblankHook = hook;
}

/**
 * Start counting frames (registers the VBlank-in handler with the BIOS).
 */
void SaturnTimer_Init(void)
{
	s_frameRate = (VDP2_TVSTAT & VDP2_TVSTAT_PAL) ? 50 : 60;
	s_frames = 0;

	/* free-running timer counts at the system clock / 8 (about 3.5 MHz) */
	FRT_TCR = 0x00;

	BIOS_SETUINT(SCU_VECTOR_VBLANK_IN, SaturnTimer_VBlankInEntry);
	BIOS_CHGSCUIM(~SCU_MASK_VBLANK_IN, 0);
	Cpu_EnableInterrupts();
}

/**
 * Read the SH-2's free-running timer.
 *
 * @return Its count.
 */
static uint16_t SaturnTimer_FrtRead(void)
{
	/* Reading the high byte latches the low one in a register shared by
	 * everyone: an interrupt reading the counter in between would leave
	 * its own low byte there. */
	uint32_t sr = Cpu_DisableInterrupts();
	uint8_t high = FRT_FRCH;
	uint8_t low = FRT_FRCL;
	Cpu_RestoreInterrupts(sr);
	return (uint16_t)((high << 8) | low);
}

/**
 * Busy-wait at least us microseconds, timed by the SH-2 free-running timer.
 *
 * @param us The time to wait.
 */
void SaturnTimer_DelayUs(uint32_t us)
{
	/* the 16-bit counter wraps after about 18 ms: wait in pieces */
	while (us > 10000) {
		SaturnTimer_DelayUs(10000);
		us -= 10000;
	}
	{
		/* 26.8 MHz / 8 (NTSC 320 dots; PAL is close): about 3.36 counts
		 * per us, rounded up so the wait is never shorter */
		uint32_t counts = us * 7 / 2 + 1;
		uint16_t start = SaturnTimer_FrtRead();
		while ((uint16_t)(SaturnTimer_FrtRead() - start) < counts) {}
	}
}

/**
 * Microseconds since SaturnTimer_Init(): the frame count plus the time
 * since the last VBlank, from the free-running timer.
 *
 * @return The microseconds; they never go back.
 */
uint64_t SaturnTimer_Us(void)
{
	static volatile uint64_t last = 0;
	uint32_t frames, since, frameUs = 1000000 / s_frameRate;
	uint16_t start;
	uint64_t now;
	uint32_t sr;

	/* read the frame count and its start time consistently */
	do {
		frames = s_frames;
		start = s_frameStart;
		since = (uint16_t)(SaturnTimer_FrtRead() - start);
	} while (frames != s_frames);

	/* about 3.5 counts per us, as in SaturnTimer_DelayUs() */
	since = since * 2 / 7;
	if (since > frameUs) since = frameUs;
	now = (uint64_t)frames * frameUs + since;

	/* never go back, whoever asks (the estimate within a frame is rough) */
	sr = Cpu_DisableInterrupts();
	if (now < last) now = last;
	last = now;
	Cpu_RestoreInterrupts(sr);
	return now;
}

/**
 * Wait for the next VBlank-in interrupt to have run. While the display is
 * off no interrupt may come, so give up after far longer than a frame.
 */
void SaturnTimer_WaitFrame(void)
{
	uint32_t frame = s_frames;
	uint32_t polls;

	s_waiting = 1;
	for (polls = 0; polls < 2000000UL && s_frames == frame; polls++) {}
	s_waiting = 0;
}

/**
 * Whether the main loop is parked in SaturnTimer_WaitFrame(): asked by the
 * VBlank hook, which may then read what the loop draws without catching it
 * half done.
 *
 * @return True if it is.
 */
int SaturnTimer_MainWaiting(void)
{
	return s_waiting;
}

/**
 * Microseconds since the last VBlank-in interrupt, from the free-running
 * timer: how much of the vertical blank the hook has used.
 *
 * @return The microseconds.
 */
uint32_t SaturnTimer_SinceFrameUs(void)
{
	return (uint32_t)(uint16_t)(SaturnTimer_FrtRead() - s_frameStart) * 2 / 7;
}

/**
 * Frames since SaturnTimer_Init().
 *
 * @return The frames.
 */
uint32_t SaturnTimer_Frames(void)
{
	return s_frames;
}

/**
 * Milliseconds since SaturnTimer_Init(), with frame (16-20 ms) resolution.
 *
 * @return The milliseconds.
 */
uint32_t SaturnTimer_Ms(void)
{
	/* 64-bit so the product doesn't wrap after 20 hours */
	return (uint32_t)((uint64_t)s_frames * 1000 / s_frameRate);
}

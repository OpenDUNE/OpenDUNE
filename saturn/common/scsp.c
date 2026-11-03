/** @file saturn/common/scsp.c Sound through the SCSP, driven from the SH-2.
 *
 * Register layout from the SCSP User's Manual (Figure 4.2, Table 4.4). */

#include <stddef.h>
#include "bios.h"
#include "saturn_hw.h"
#include "saturn_timer.h"
#include "scsp.h"
#include "smpc.h"

#define SCSP_RAM        ((volatile uint16_t *)0x25A00000UL)
#define SCSP_SLOT(n, r) REG16(0x25B00000UL + (n) * 0x20 + (r))
/* MSLC (write) and the monitored slot's state (read) */
#define SCSP_MONITOR    REG16(0x25B00408UL)
#define SCSP_COMMON     REG16(0x25B00400UL)
#define SCSP_TIMER_A    REG16(0x25B00418UL)                 /*!< TACTL (10-8), TIMA (7-0) */
#define SCSP_MCIEB      REG16(0x25B0042AUL)                 /*!< main CPU interrupt enable */
#define SCSP_MCIPD      REG16(0x25B0042CUL)                 /*!< main CPU interrupt pending */
#define SCSP_MCIRE      REG16(0x25B0042EUL)                 /*!< main CPU interrupt reset */
#define SCSP_DSP_MPRO   ((volatile uint16_t *)0x25B00800UL) /*!< DSP program, 4 words a step */

enum {
	SMPC_CMD_SNDOFF = 0x07,
	INT_TIMER_A = 1 << 6,    /*!< SCSP interrupt bit (MAME's SCSP has the same) */
	SCU_VECTOR_SOUND = 0x46, /*!< SCU interrupt from the SCSP */
	SCU_MASK_SOUND = 1 << 6,
	/* timer A counts at 44.1 kHz and interrupts at 0xFF: 44 counts = 1 ms */
	TIMER_A_VALUE = (0 << 8) | (255 - 44),
	SLOT_COUNT = 32,
	DSP_STEPS = 128,
	BLOCK_MAX = 128,
	OUTPUT_RATE = 44100
};

/* slot register bits */
#define KEY_ON_EXECUTE  (1 << 12)
#define KEY_ON          (1 << 11)
#define PCM_8BIT        (1 << 4)
#define EG_STATE        (3 << 5)                            /*!< SGC, in the monitor */
#define EG_RELEASE      (3 << 5)

/* Sound RAM blocks, in address order, covering all of it. */
typedef struct Block {
	int32_t offset;
	uint32_t size;
	int used;
} Block;

static Block s_blocks[BLOCK_MAX];
static int s_blockCount;
static int s_initialised;

/**
 * Stop the sound CPU, clear the slots and set the master volume. Only the
 * first call does anything.
 */
void Scsp_Init(void)
{
	int slot, i;

	if (s_initialised) return;
	s_initialised = 1;

	Smpc_Command(SMPC_CMD_SNDOFF);

	/* 4 Mbit of sound memory, 16-bit DAC, full master volume */
	SCSP_COMMON = (1 << 9) | 0xF;

	for (slot = 0; slot < SLOT_COUNT; slot++) {
		int reg;
		for (reg = 0; reg < 0x18; reg += 2) SCSP_SLOT(slot, reg) = 0;
	}
	SCSP_SLOT(0, 0x00) = KEY_ON_EXECUTE;

	/* The BIOS's sound driver leaves its DSP program running, and the DSP
	 * writes its ring buffer into sound RAM, over voices; clear the program
	 * (the steps' MWT bits) so it writes nothing. */
	for (i = 0; i < DSP_STEPS * 4; i++) SCSP_DSP_MPRO[i] = 0;

	/* CD audio (EXTS0/1, set through slots 16/17): full level, left/right */
	SCSP_SLOT(16, 0x16) = (7 << 5) | 0x1F;
	SCSP_SLOT(17, 0x16) = (7 << 5) | 0x0F;

	s_blocks[0].offset = 0;
	s_blocks[0].size = SCSP_RAM_SIZE;
	s_blocks[0].used = 0;
	s_blockCount = 1;
}

/**
 * Sound RAM allocation. Returns an offset into sound RAM, or -1.
 *
 * @param size The bytes wanted.
 * @return The offset, or -1 if there is no room.
 */
int32_t Scsp_Alloc(uint32_t size)
{
	int i;

	/* keep blocks on 16-bit boundaries */
	size = (size + 1) & ~1u;
	for (i = 0; i < s_blockCount; i++) {
		Block *b = &s_blocks[i];
		if (b->used || b->size < size) continue;

		if (b->size > size && s_blockCount < BLOCK_MAX) {
			int j;
			for (j = s_blockCount; j > i + 1; j--) s_blocks[j] = s_blocks[j - 1];
			s_blockCount++;
			s_blocks[i + 1].offset = b->offset + (int32_t)size;
			s_blocks[i + 1].size = b->size - size;
			s_blocks[i + 1].used = 0;
			b->size = size;
		}
		b->used = 1;
		return b->offset;
	}
	return -1;
}

/**
 * Give back sound RAM from Scsp_Alloc().
 *
 * @param offset The offset it returned.
 */
void Scsp_Free(int32_t offset)
{
	int i;

	for (i = 0; i < s_blockCount; i++) {
		if (s_blocks[i].offset == offset && s_blocks[i].used) break;
	}
	if (i == s_blockCount) return;
	s_blocks[i].used = 0;

	/* merge with free neighbours */
	if (i + 1 < s_blockCount && !s_blocks[i + 1].used) {
		int j;
		s_blocks[i].size += s_blocks[i + 1].size;
		for (j = i + 1; j < s_blockCount - 1; j++) s_blocks[j] = s_blocks[j + 1];
		s_blockCount--;
	}
	if (i > 0 && !s_blocks[i - 1].used) {
		int j;
		s_blocks[i - 1].size += s_blocks[i].size;
		for (j = i; j < s_blockCount - 1; j++) s_blocks[j] = s_blocks[j + 1];
		s_blockCount--;
	}
}

/**
 * The largest size Scsp_Alloc() can give now.
 *
 * @return The size in bytes.
 */
uint32_t Scsp_LargestFree(void)
{
	uint32_t largest = 0;
	int i;
	for (i = 0; i < s_blockCount; i++) {
		if (!s_blocks[i].used && s_blocks[i].size > largest) largest = s_blocks[i].size;
	}
	return largest;
}

/**
 * Copy unsigned 8-bit PCM to sound RAM as signed 8-bit PCM.
 *
 * @param offset Where in sound RAM.
 * @param pcm The samples.
 * @param length How many.
 */
void Scsp_UploadU8(int32_t offset, const uint8_t *pcm, uint32_t length)
{
	volatile uint16_t *dst = SCSP_RAM + offset / 2;
	uint32_t i;

	/* signed = unsigned ^ 0x80; two samples per 16-bit write, first one high */
	for (i = 0; i + 1 < length; i += 2) {
		*dst++ = (uint16_t)(((pcm[i] ^ 0x80) << 8) | (pcm[i + 1] ^ 0x80));
	}
	if (i < length) *dst = (uint16_t)((pcm[i] ^ 0x80) << 8);
}

/**
 * Copy signed 16-bit PCM (count samples) to sound RAM.
 *
 * @param offset Where in sound RAM.
 * @param pcm The samples.
 * @param count How many.
 */
void Scsp_UploadS16(int32_t offset, const int16_t *pcm, uint32_t count)
{
	volatile uint16_t *dst = SCSP_RAM + offset / 2;
	uint32_t i;
	for (i = 0; i < count; i++) dst[i] = (uint16_t)pcm[i];
}

/**
 * Raw slot register access for drivers that set up slots themselves
 * (opl_scsp.c); reg is the byte offset 0x00-0x16 within the slot.
 *
 * @param slot The slot (0 to 31).
 * @param reg The register.
 * @param value The value.
 */
void Scsp_SlotWrite(int slot, int reg, uint16_t value)
{
	SCSP_SLOT(slot, reg) = value;
}

/**
 * Read a slot register (see Scsp_SlotWrite()).
 *
 * @param slot The slot (0 to 31).
 * @param reg The register.
 * @return Its value.
 */
uint16_t Scsp_SlotRead(int slot, int reg)
{
	return SCSP_SLOT(slot, reg);
}

/**
 * A slot's envelope level now, through the monitor register (MSLC): 0 at
 * full volume to 31 silent, in steps of 3 dB.
 *
 * @param slot The slot.
 * @return The level.
 */
int Scsp_EnvelopeLevel(int slot)
{
	SCSP_MONITOR = (uint16_t)(slot << 11);
	return SCSP_MONITOR & 0x1F;
}

/**
 * KEY_ON (on = 1) or KEY_OFF a slot, keeping its other settings.
 *
 * @param slot The slot.
 * @param on 1 to key on, 0 to key off.
 */
void Scsp_Key(int slot, int on)
{
	uint16_t value = SCSP_SLOT(slot, 0x00) & ~(KEY_ON | KEY_ON_EXECUTE);
	if (on) value |= KEY_ON;
	SCSP_SLOT(slot, 0x00) = value;
	SCSP_SLOT(slot, 0x00) = value | KEY_ON_EXECUTE;
}

/**
 * Start a note on a slot, after letting the SCSP see the slot keyed off.
 *
 * @param slot The slot.
 * @param note The note.
 */
void Scsp_NoteOn(int slot, const ScspNote *note)
{
	uint32_t sr;
	int wait;

	/* a slot still sounding (a one-shot looping round its silent tail) is
	 * only restarted if the SCSP has seen the key off first: it looks at
	 * the keys once a sample (22.7 us), but an emulator may run it behind
	 * the CPU, so wait for the monitor to show the release (with the timer
	 * handler, which moves the monitor too, kept out) */
	sr = Cpu_DisableInterrupts();
	Scsp_NoteOff(slot);
	SCSP_MONITOR = (uint16_t)(slot << 11);
	for (wait = 0; wait < 40 && (SCSP_MONITOR & EG_STATE) != EG_RELEASE; wait++) {
		SaturnTimer_DelayUs(5);
	}
	Cpu_RestoreInterrupts(sr);

	SCSP_SLOT(slot, 0x00) = (note->pcm16 ? 0 : PCM_8BIT) | ((note->loop ? 1 : 0) << 5) | ((note->offset >> 16) & 0xF);
	SCSP_SLOT(slot, 0x02) = (uint16_t)note->offset;
	SCSP_SLOT(slot, 0x04) = note->loopStart;
	SCSP_SLOT(slot, 0x06) = note->end;
	SCSP_SLOT(slot, 0x08) = (uint16_t)((note->decay2 << 11) | (note->decay1 << 6) | note->attack);
	/* KRS off */
	SCSP_SLOT(slot, 0x0A) = (uint16_t)((0xF << 10) | (note->decayLevel << 5) | note->release);
	SCSP_SLOT(slot, 0x0C) = note->level;
	SCSP_SLOT(slot, 0x0E) = 0;
	SCSP_SLOT(slot, 0x10) = note->pitch;
	SCSP_SLOT(slot, 0x12) = 0;
	SCSP_SLOT(slot, 0x14) = 0;
	/* direct out, full level */
	SCSP_SLOT(slot, 0x16) = (uint16_t)(0xE000 | ((note->pan & 0x1F) << 8));

	SCSP_SLOT(slot, 0x00) |= KEY_ON;
	SCSP_SLOT(slot, 0x00) |= KEY_ON_EXECUTE;
}

/**
 * Key a slot off (its release follows).
 *
 * @param slot The slot.
 */
void Scsp_NoteOff(int slot)
{
	SCSP_SLOT(slot, 0x00) = (SCSP_SLOT(slot, 0x00) & ~(KEY_ON | KEY_ON_EXECUTE)) | KEY_ON_EXECUTE;
}

/**
 * Write SCSP_TAIL samples of 8-bit silence at offset.
 *
 * @param offset Where in sound RAM.
 */
void Scsp_UploadTail(int32_t offset)
{
	volatile uint16_t *dst = SCSP_RAM + offset / 2;
	int i;
	for (i = 0; i < SCSP_TAIL / 2; i++) dst[i] = 0;
}

/**
 * Play samples (signed 8-bit, at offset in sound RAM, at most 65535 -
 * SCSP_TAIL of them, followed by Scsp_UploadTail()) once on slot, at rate
 * Hz; volume 0..255. The slot then loops over the silent tail instead of
 * stopping: a stopped slot still keyed on would start again at the next
 * KEY_ON_EXECUTE of any slot.
 *
 * @param slot The slot.
 * @param offset Where the samples are.
 * @param samples How many.
 * @param rate The sample rate.
 * @param volume The volume.
 */
void Scsp_Play(int slot, int32_t offset, uint32_t samples, uint32_t rate, uint8_t volume)
{
	/* pitch: rate / 44100 = 2^OCT * (1 + FNS / 1024) */
	uint32_t f = (rate << 10) / OUTPUT_RATE;
	int octave = 0;
	ScspNote note;

	if (samples == 0 || f == 0) return;
	if (samples > 0xFFFF - SCSP_TAIL) samples = 0xFFFF - SCSP_TAIL;
	while (f < 1024) { f <<= 1; octave--; }
	while (f >= 2048) { f >>= 1; octave++; }

	/* once through the samples, then round the silent tail */
	note.offset = offset;
	note.loopStart = (uint16_t)samples;
	note.end = (uint16_t)(samples + SCSP_TAIL - 1);
	note.loop = 1;
	note.attack = 31;
	note.decay1 = 0;
	note.decayLevel = 0;
	note.decay2 = 0;
	note.release = 31;
	note.level = (uint8_t)((255 - volume) >> 1);
	note.pitch = Scsp_Pitch(octave, (uint16_t)(f - 1024));
	note.pan = 0;
	note.pcm16 = 0;
	Scsp_NoteOn(slot, &note);
}

/**
 * Stop what a slot plays.
 *
 * @param slot The slot.
 */
void Scsp_Stop(int slot)
{
	Scsp_NoteOff(slot);
}

static void (*s_timerHandler)(void);

/* The timer A handler, entered through Scsp_TimerEntry (irq_entry.S). */
void Scsp_TimerInterrupt(void);
extern void Scsp_TimerEntry(void);

/**
 * The SCSP's timer A interrupt: restart the timer and call the handler. Entered
 * through Scsp_TimerEntry (irq_entry.S).
 */
void Scsp_TimerInterrupt(void)
{
	if (!(SCSP_MCIPD & INT_TIMER_A)) return;
	SCSP_MCIRE = INT_TIMER_A;
	/* count the next millisecond */
	SCSP_TIMER_A = TIMER_A_VALUE;
	if (s_timerHandler != NULL) s_timerHandler();
}

/**
 * Call handler about every millisecond from timer A's interrupt.
 *
 * @param handler The function to call.
 */
void Scsp_TimerStart(void (*handler)(void))
{
	s_timerHandler = handler;
	SCSP_MCIRE = 0x7FF;
	SCSP_TIMER_A = TIMER_A_VALUE;
	SCSP_MCIEB = INT_TIMER_A;
	BIOS_SETUINT(SCU_VECTOR_SOUND, Scsp_TimerEntry);
	BIOS_CHGSCUIM(~SCU_MASK_SOUND, 0);
}

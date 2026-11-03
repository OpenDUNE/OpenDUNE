/** @file saturn/common/opl_scsp.c An AdLib (OPL2) played by the SCSP.
 *
 * Each of the 9 OPL channels gets two SCSP slots, modulator and carrier,
 * playing one of the four OPL waveforms from a 1024-sample 16-bit table
 * holding 4 periods of 256 samples: the SCSP's modulation goes up to
 * +-1024 samples, which is then the OPL's +-8 pi, the depth of a full-level
 * modulator, and the wave mask (MSK) keeps the modulated reads in the table
 * (without it they run on into the next table, a distortion on the loudest
 * notes):
 *   frequency   fnum * 49716 / 2^(20 - block) * multiple, as OCT/FNS
 *               (with MSK);
 *               channels sounding above 15 kHz drop by octaves to 10 kHz or
 *               below, 9 dB quieter (at the OPL's 49.7 kHz the credits'
 *               20 kHz tone is barely heard, its audible sidebands 9 dB down;
 *               at the SCSP's 44.1 kHz its FM would fold back into piercing
 *               tones)
 *   FM          carrier modulated by the modulator's output, MDL 0xA
 *               (+-8 pi, like the OPL's full-level modulator); additive
 *               channels instead send both slots to the output
 *   feedback    the modulator modulates itself by its last two outputs,
 *               summed as on the OPL, MDL = feedback + 2 (the OPL's depth:
 *               feedback 7 is +-4 pi; feedback 1 and 2 fall below the
 *               SCSP's smallest depth, MDL 5, and go without)
 *   envelope    operators with a fast attack use the SCSP's envelope:
 *               OPL rates 0-15 -> SCSP attack 2 * rate + 1, decay and
 *               release 2 * rate + 2.25 (YM3812 datasheet times matched to
 *               SCSP times measured with saturn/tests/eg.c; adjustable with
 *               OplScsp_Tune()), key scale rate applied here, sustain
 *               level -> DL, non-sustaining operators keep decaying (D2R).
 *               The SCSP restarts every attack from a low level, the OPL
 *               from the current one, which matters for slow attacks: those
 *               operators get the OPL envelope computed here instead
 *               (OplScsp_Update(), per millisecond), driving TL, with the
 *               slot kept keyed on through the release
 *   key off/on  key offs wait for the end of the driver tick, so a key off
 *               and on in one tick restarts a hardware envelope cleanly
 *   level       total level and key scale level -> TL
 *   AM / VIB    the slot's LFO (triangle), at the OPL's rates and depths
 * Register values from the SCSP User's Manual; the OPL side follows the
 * YM3812 behaviour as modelled by Nuked OPL3. Tuned by ear against the
 * reference renders of saturn/tools/adl_render.c. */

#include <stdbool.h>
#include <stddef.h>
#include "opl_scsp.h"
#include "saturn_timer.h"
#include "scsp.h"

enum {
	CHANNELS = 9,
	FIRST_SLOT = 1, /*!< slot 0 plays speech */
	WAVE_SAMPLES = 1024,
	WAVE_PERIOD = 256,  /*!< samples of one period: 4 in the table */
	MIX_LEVEL = 5,      /*!< DISDL of sounding operators: -12 dB */
	X_MAX = 632739,     /*!< 15 kHz in OplScsp_Frequency() units */
	X_SHIFTED = 421826, /*!< 10 kHz: where tones above X_MAX drop to */
	SHIFTED_ATT = 24,   /*!< and how much quieter they get: 9 dB in TL units */
	PITCH_MSK = 0x8000  /*!< in OCT/FNS: wrap reads round the table (its size, LEA, a power of 2) */
};

/* operator register offset of each channel's modulator; carrier is +3 */
static const uint8_t s_opOffset[CHANNELS] = { 0, 1, 2, 8, 9, 10, 16, 17, 18 };

/* frequency multiple, in halves */
static const uint8_t s_multiple2[16] = { 1, 2, 4, 6, 8, 10, 12, 14, 16, 18, 20, 20, 24, 24, 30, 30 };

/* key scale level base by fnum >> 6 (as in Nuked OPL3) */
static const uint8_t s_kslRom[16] = { 0, 32, 40, 45, 48, 51, 53, 55, 56, 58, 59, 60, 61, 62, 63, 64 };
static const uint8_t s_kslShift[4] = { 8, 1, 2, 0 };

enum {
	SOFT_ATTACK_MAX = 10, /*!< OPL attack rates up to this use a software envelope */
	ATT_MAX = 511 << 16   /*!< silent, in OPL envelope units (0.1875 dB), 16.16 */
};

typedef enum { ENV_OFF, ENV_ATTACK, ENV_DECAY, ENV_SUSTAIN, ENV_DECAY2, ENV_RELEASE } EnvPhase;

/* An operator; its envelope fields are used when it is computed here (soft). */
typedef struct Operator {
	uint8_t soft;        /*!< this note's envelope is computed here */
	uint8_t slotOn;      /*!< the SCSP slot is keyed on */
	uint8_t phase;       /*!< EnvPhase */
	uint8_t sustainHold; /*!< OPL EG type: hold at the sustain level */
	uint8_t level;       /*!< TL from total level and key scale level */
	uint8_t written;     /*!< TL last written */
	int32_t att;         /*!< attenuation, 0 .. ATT_MAX */
	int32_t sustain;     /*!< attenuation at the sustain level */
	int32_t attackK;     /*!< fraction of att removed per ms, 16.16 */
	int32_t decayStep;   /*!< att added per ms in decay */
	int32_t releaseStep; /*!< att added per ms in release */
} Operator;

static uint8_t s_regs[256];
static int32_t s_wave[4] = { -1, -1, -1, -1 }; /*!< sound RAM offsets of the waveforms */
static uint8_t s_keyOn[CHANNELS];              /*!< key on, as the driver last wrote it */
static uint8_t s_pendingOff[CHANNELS];         /*!< keyed off this tick, not yet carried out */
static Operator s_ops[CHANNELS][2];
static uint64_t s_envTime;             /*!< us of the last software envelope step */
static uint8_t s_channelAtt[CHANNELS]; /*!< extra attenuation (TL units), for fades */
static int s_attackOffset = 1;         /*!< SCSP attack = OPL effective rate / 2 + this */
static int s_decayQuarters = 9;        /*!< SCSP decay = OPL effective rate / 2 + this / 4 */

static int OplScsp_Slot(int channel, int op) { return FIRST_SLOT + channel * 2 + op; }
static uint8_t OplScsp_Reg(int base, int channel, int op) { return s_regs[base + s_opOffset[channel] + op * 3]; }

/**
 * The four OPL2 waveforms, 1025 samples each (the last repeats the first,
 * for the loop). The sine comes from the recurrence
 * s[n+1] = 2 cos(w) s[n] - s[n-1], in 16.16 fixed point.
 *
 * @return 0 if there is no sound RAM for them.
 */
static int OplScsp_BuildWaves(void)
{
	static int16_t wave[WAVE_SAMPLES + 1];
	static int32_t quarter[WAVE_SAMPLES / 4 + 1];
	/* sin(2 pi / 1024) * 32767, 16.16 */
	int32_t prev = 0, cur = 13176310;
	int n, w;

	quarter[0] = 0;
	for (n = 1; n <= WAVE_SAMPLES / 4; n++) {
		/* 2 cos(w), Q30 */
		int32_t next = (int32_t)(((int64_t)2147443222 * cur) >> 30) - prev;
		quarter[n] = (cur + 0x8000) >> 16;
		prev = cur;
		cur = next;
	}
	quarter[WAVE_SAMPLES / 4] = 32767;

	for (w = 0; w < 4; w++) {
		int32_t offset = Scsp_Alloc(sizeof(wave));
		if (offset < 0) return 0;
		for (n = 0; n < WAVE_SAMPLES; n++) {
			/* the position in its period, at the quarter table's resolution */
			int p = (n % WAVE_PERIOD) * (WAVE_SAMPLES / WAVE_PERIOD);
			int q = p % (WAVE_SAMPLES / 2);
			int32_t sine = (q <= WAVE_SAMPLES / 4) ? quarter[q] : quarter[WAVE_SAMPLES / 2 - q];
			bool secondHalf = p >= WAVE_SAMPLES / 2;
			int32_t value;
			switch (w) {
				default:
				/* sine */
				case 0: value = secondHalf ? -sine : sine; break;
				/* half sine */
				case 1: value = secondHalf ? 0 : sine; break;
				/* absolute sine */
				case 2: value = sine; break;
				/* quarter sine */
				case 3: value = (q < WAVE_SAMPLES / 4) ? sine : 0; break;
			}
			wave[n] = (int16_t)value;
		}
		wave[WAVE_SAMPLES] = wave[0];
		Scsp_UploadS16(offset, wave, WAVE_SAMPLES + 1);
		s_wave[w] = offset;
	}
	return 1;
}

/**
 * An operator's frequency in OPL units: hz = x * 49716 / 2^21.
 *
 * @param channel The channel.
 * @param op The operator (0 modulator, 1 carrier).
 * @return The frequency.
 */
static uint32_t OplScsp_Frequency(int channel, int op)
{
	uint8_t bx = s_regs[0xB0 + channel];
	uint32_t fnum = ((uint32_t)(bx & 3) << 8) | s_regs[0xA0 + channel];
	return (fnum * s_multiple2[OplScsp_Reg(0x20, channel, op) & 0xF]) << ((bx >> 2) & 7);
}

/**
 * The highest tone a channel sounds, in OplScsp_Frequency() units.
 *
 * @param channel The channel.
 * @return The frequency.
 */
static uint32_t OplScsp_ChannelTop(int channel)
{
	uint32_t top = OplScsp_Frequency(channel, 1);
	if ((s_regs[0xC0 + channel] & 1) && OplScsp_Frequency(channel, 0) > top) top = OplScsp_Frequency(channel, 0);
	return top;
}

/**
 * OCT/FNS for an operator: a 256-sample period at the operator frequency.
 * A channel whose sounding tone is above 15 kHz (the credits counting down
 * is at 20 kHz, which aliases on the SCSP) drops by octaves to 10 kHz or
 * below, both operators alike to keep the timbre.
 *
 * @param channel The channel.
 * @param op The operator.
 * @return The OCT/FNS value, with MSK.
 */
static uint16_t OplScsp_Pitch(int channel, int op)
{
	uint32_t x = OplScsp_Frequency(channel, op);
	uint32_t top = OplScsp_ChannelTop(channel);
	uint64_t ratio;
	int octave = 0;

	if (top > X_MAX) {
		while (top > X_SHIFTED) { top >>= 1; x >>= 1; }
	}

	/* rate / 44100 in 16.16: x * 49716 * 256 / 2^20 / 44100 / 2 = x * 9.01877 */
	ratio = ((uint64_t)x * 2364218) >> 18;
	if (ratio == 0) return PITCH_MSK | Scsp_Pitch(-8, 0);
	while (ratio >= (2u << 16)) { ratio >>= 1; octave++; }
	while (ratio < (1u << 16)) { ratio <<= 1; octave--; }
	if (octave > 7) return PITCH_MSK | Scsp_Pitch(7, 1023);
	if (octave < -8) return PITCH_MSK | Scsp_Pitch(-8, 0);
	return PITCH_MSK | Scsp_Pitch(octave, (uint16_t)((ratio - 65536) >> 6));
}

/**
 * SCSP rate for an OPL rate (0-15) with the channel's key scale offset:
 * with the OPL's effective rate e = 4 * rate + offset, attack
 * e / 2 + s_attackOffset, decay and release e / 2 + s_decayQuarters / 4
 * (times halve every 4 e on the OPL, every 2 rates on the SCSP).
 *
 * @param rate The OPL rate.
 * @param rateOffset The key scale offset.
 * @param attack 1 for the attack, 0 for a decay or the release.
 * @return The SCSP rate (0 to 31).
 */
static uint16_t OplScsp_Rate(uint8_t rate, int rateOffset, int attack)
{
	int effective;
	if (rate == 0) return 0;
	/* 4..63, as in the OPL */
	effective = rate * 4 + rateOffset;
	if (effective >= 60) return 31;
	effective = attack ? effective / 2 + s_attackOffset : (2 * effective + s_decayQuarters) / 4;
	if (effective < 1) effective = 1;
	return (uint16_t)(effective > 31 ? 31 : effective);
}

/**
 * Time in us of a full OPL attack (from silence) or decay (to silence) at
 * effective rate e (4..63): 2826.24 ms or 39280.64 ms at e = 4, halving
 * every 4 (YM3812 datasheet).
 *
 * @param effective The effective rate.
 * @param attack 1 for the attack, 0 for a decay.
 * @return The time.
 */
static uint32_t OplScsp_TimeUs(int effective, int attack)
{
	/* 2^(n/4), 16.16 */
	static const uint32_t fraction[4] = { 65536, 77936, 92682, 110218 };
	int x = (effective > 63 ? 63 : effective) - 4;
	uint64_t divisor = (uint64_t)fraction[x % 4] << (x / 4);
	return (uint32_t)(((attack ? 2826240ULL : 39280640ULL) << 16) / divisor);
}

/**
 * Step per ms of a linear OPL decay (to silence) at OPL rate r.
 *
 * @param rate The OPL rate.
 * @param rateOffset The key scale offset.
 * @return The step, in 16.16 envelope units.
 */
static int32_t OplScsp_DecayStep(int rate, int rateOffset)
{
	if (rate == 0) return 0;
	return (int32_t)(((uint64_t)ATT_MAX * 1000) / OplScsp_TimeUs(rate * 4 + rateOffset, 0));
}

/**
 * The OPL envelope rates of an operator, for its software envelope.
 *
 * @param channel The channel.
 * @param op The operator.
 * @param rateOffset The key scale offset.
 */
static void OplScsp_EnvelopeRates(int channel, int op, int rateOffset)
{
	Operator *o = &s_ops[channel][op];
	uint8_t r60 = OplScsp_Reg(0x60, channel, op);
	uint8_t r80 = OplScsp_Reg(0x80, channel, op);
	int attack = r60 >> 4, sustainLevel = r80 >> 4;

	o->attackK = 0;
	if (attack != 0) {
		int e = attack * 4 + rateOffset;
		/* the attenuation falls exponentially: ln(511) = 6.24 time constants */
		uint32_t tau = (e >= 60) ? 0 : OplScsp_TimeUs(e, 1) / 624 * 100;
		o->attackK = (tau <= 1000) ? 65536 : (int32_t)(65536ULL * 1000 / tau);
	}
	o->decayStep = OplScsp_DecayStep(r60 & 0xF, rateOffset);
	o->releaseStep = OplScsp_DecayStep(r80 & 0xF, rateOffset);
	/* 3 dB = 16 units */
	o->sustain = ((sustainLevel == 15) ? 31 : sustainLevel) * (16 << 16);
	if (o->sustain > ATT_MAX) o->sustain = ATT_MAX;
	o->sustainHold = (OplScsp_Reg(0x20, channel, op) & 0x20) != 0;
}

/**
 * The TL of an operator with a software envelope: its level plus the envelope.
 *
 * @param o The operator.
 * @return The TL (0 to 255).
 */
static uint8_t OplScsp_TotalLevel(const Operator *o)
{
	/* 0.1875 dB units -> 0.375 dB */
	uint32_t tl = o->level + (uint32_t)(o->att >> 17);
	return (uint8_t)(tl > 255 ? 255 : tl);
}

/**
 * Only a sounding operator's level is heard; a modulator's sets the timbre.
 *
 * @param channel The channel.
 * @param op The operator.
 * @return 1 if it is heard.
 */
static int OplScsp_Sounding(int channel, int op)
{
	return op == 1 || (s_regs[0xC0 + channel] & 1);
}

/**
 * Write an operator's SCSP slot from the OPL registers: wave, pitch, levels,
 * envelope, modulation and LFO.
 *
 * @param channel The channel.
 * @param op The operator.
 */
static void OplScsp_Setup(int channel, int op)
{
	int slot = OplScsp_Slot(channel, op);
	uint8_t r20 = OplScsp_Reg(0x20, channel, op);
	uint8_t r40 = OplScsp_Reg(0x40, channel, op);
	uint8_t r60 = OplScsp_Reg(0x60, channel, op);
	uint8_t r80 = OplScsp_Reg(0x80, channel, op);
	uint8_t c0 = s_regs[0xC0 + channel];
	uint8_t bx = s_regs[0xB0 + channel];
	uint32_t fnum = ((uint32_t)(bx & 3) << 8) | s_regs[0xA0 + channel];
	int block = (bx >> 2) & 7;
	int sounding = OplScsp_Sounding(channel, op);
	int additive = c0 & 1;
	int wave = (s_regs[0x01] & 0x20) ? (OplScsp_Reg(0xE0, channel, op) & 3) : 0;
	int32_t start = s_wave[wave];
	int keyScale = block * 2 + ((s_regs[0x08] & 0x40) ? (fnum >> 8) & 1 : (fnum >> 9) & 1);
	int rateOffset = (r20 & 0x10) ? keyScale : keyScale >> 2;
	int ksl = (s_kslRom[fnum >> 6] << 2) - ((8 - block) << 5);
	Operator *o = &s_ops[channel][op];
	uint32_t level;
	uint16_t sustain, lfo = 0, modulation = 0, eg1, eg2;

	/* level: total level in 0.75 dB, key scale level in 0.1875 dB, and a
	 * fade on sounding operators */
	if (ksl < 0) ksl = 0;
	level = (r40 & 0x3F) * 2 + ((uint32_t)ksl >> s_kslShift[r40 >> 6]) / 2;
	if (OplScsp_Sounding(channel, op)) level += s_channelAtt[channel] + (OplScsp_ChannelTop(channel) > X_MAX ? SHIFTED_ATT : 0);
	if (level > 255) level = 255;

	/* sustaining operators hold at the sustain level, others keep decaying */
	sustain = (r20 & 0x20) ? 0 : OplScsp_Rate(r80 & 0xF, rateOffset, 0);

	if (r20 & 0xC0) {
		/* LFO: vibrato 6.15 Hz at 7 or 13.5 cents, tremolo 3.9 Hz at 0.8 or 3 dB */
		int deep = s_regs[0xBD];
		lfo = (uint16_t)(((r20 & 0x40) ? 0x14 : 0x12) << 10);
		if (r20 & 0x40) lfo |= (2 << 8) | (((deep & 0x40) ? 2 : 1) << 5);
		if (r20 & 0x80) lfo |= (2 << 3) | ((deep & 0x80) ? 4 : 2);
	}

	if (op == 0 && (c0 & 0x0E)) {
		/* feedback: the modulator's own last two outputs, summed, as the
		 * OPL does. In the SCSP's stack of the last 64 slot outputs, offset
		 * 0 is this slot two samples ago and 32 one sample ago; the older
		 * alone makes strong feedback chaotic: noise instead of a tone. */
		modulation = (uint16_t)(((((c0 >> 1) & 7) + 2) << 12) | 32);
	} else if (op == 1 && !additive) {
		/* the modulator's output moves the carrier's phase */
		uint16_t source = (uint16_t)((OplScsp_Slot(channel, 0) - slot) & 0x3F);
		modulation = (uint16_t)((0xA << 12) | (source << 6) | source);
	}

	o->level = (uint8_t)level;
	if (o->soft) {
		/* the SCSP holds full level; the envelope comes through TL */
		OplScsp_EnvelopeRates(channel, op, rateOffset);
		o->written = OplScsp_TotalLevel(o);
		eg1 = 31;
		eg2 = (uint16_t)((0xF << 10) | 31);
		level = o->written;
	} else {
		eg1 = (uint16_t)((sustain << 11) | (OplScsp_Rate(r60 & 0xF, rateOffset, 0) << 6) | OplScsp_Rate(r60 >> 4, rateOffset, 1));
		eg2 = (uint16_t)((0xF << 10) | (((r80 >> 4) == 15 ? 31 : (r80 >> 4)) << 5) | OplScsp_Rate(r80 & 0xF, rateOffset, 0));
	}

	Scsp_SlotWrite(slot, 0x00, (uint16_t)((Scsp_SlotRead(slot, 0x00) & (1 << 11)) | (1 << 5) | ((start >> 16) & 0xF)));
	Scsp_SlotWrite(slot, 0x02, (uint16_t)start);
	Scsp_SlotWrite(slot, 0x04, 0);
	Scsp_SlotWrite(slot, 0x06, WAVE_SAMPLES);
	Scsp_SlotWrite(slot, 0x08, eg1);
	Scsp_SlotWrite(slot, 0x0A, eg2);
	Scsp_SlotWrite(slot, 0x0C, (uint16_t)level);
	Scsp_SlotWrite(slot, 0x0E, modulation);
	Scsp_SlotWrite(slot, 0x10, OplScsp_Pitch(channel, op));
	Scsp_SlotWrite(slot, 0x12, lfo);
	Scsp_SlotWrite(slot, 0x14, 0);
	Scsp_SlotWrite(slot, 0x16, (uint16_t)(sounding ? (MIX_LEVEL << 13) : 0));
}

/**
 * Start an operator's note, with the SCSP's envelope or a software one.
 *
 * @param channel The channel.
 * @param op The operator.
 */
static void OplScsp_KeyOn(int channel, int op)
{
	Operator *o = &s_ops[channel][op];
	int slot = OplScsp_Slot(channel, op);
	int slow = (OplScsp_Reg(0x60, channel, op) >> 4) <= SOFT_ATTACK_MAX;

	if (slow) {
		/* attack from the current level, as the OPL does; the slot stays
		 * keyed on if it still is, so the SCSP doesn't restart its envelope */
		if (!o->slotOn) o->att = ATT_MAX;
		if (!o->soft && o->slotOn) {
			/* but if the SCSP's own envelope plays the note (after its
			 * attack), it has decayed: with this note's rates of 0 it would
			 * stay there, and the note that much quieter. Take its level
			 * (3 dB steps, 16 envelope units each) and restart it at full. */
			o->att = Scsp_EnvelopeLevel(slot) * (16 << 16);
			if (o->att > ATT_MAX) o->att = ATT_MAX;
			Scsp_Key(slot, 0);
			o->slotOn = 0;
			SaturnTimer_DelayUs(30);
		}
		o->soft = 1;
		o->phase = ENV_ATTACK;
		OplScsp_Setup(channel, op);
		if (!o->slotOn) Scsp_Key(slot, 1);
	} else {
		o->soft = 0;
		OplScsp_Setup(channel, op);
		if (o->slotOn) {
			/* restart: leave the SCSP at least one sample (22.7 us) to see
			 * the key off */
			Scsp_Key(slot, 0);
			SaturnTimer_DelayUs(30);
		}
		Scsp_Key(slot, 1);
	}
	o->slotOn = 1;
}

/**
 * Release an operator's note.
 *
 * @param channel The channel.
 * @param op The operator.
 */
static void OplScsp_KeyOff(int channel, int op)
{
	Operator *o = &s_ops[channel][op];
	if (o->soft) {
		/* OplScsp_Update() keys off when silent */
		o->phase = ENV_RELEASE;
	} else {
		Scsp_Key(OplScsp_Slot(channel, op), 0);
		o->slotOn = 0;
	}
}

/**
 * Start a channel's note on both its operators.
 *
 * @param channel The channel.
 */
static void OplScsp_ChannelKeyOn(int channel)
{
	s_pendingOff[channel] = 0;
	OplScsp_KeyOn(channel, 0);
	OplScsp_KeyOn(channel, 1);
}

/**
 * End of a driver tick: carry out its key offs (see opl_scsp.c).
 */
void OplScsp_Flush(void)
{
	int channel;
	for (channel = 0; channel < CHANNELS; channel++) {
		if (!s_pendingOff[channel]) continue;
		s_pendingOff[channel] = 0;
		OplScsp_KeyOff(channel, 0);
		OplScsp_KeyOff(channel, 1);
	}
}

/**
 * One millisecond of an OPL envelope.
 *
 * @param o The operator.
 */
static void OplScsp_EnvelopeStep(Operator *o)
{
	switch (o->phase) {
		case ENV_ATTACK:
			o->att -= (int32_t)(((int64_t)o->att * o->attackK) >> 16);
			if (o->att < (1 << 16)) {
				o->att = 0;
				o->phase = ENV_DECAY;
			}
			break;
		case ENV_DECAY:
			o->att += o->decayStep;
			if (o->att >= o->sustain) {
				o->att = o->sustain;
				o->phase = o->sustainHold ? ENV_SUSTAIN : ENV_DECAY2;
			}
			break;
		case ENV_DECAY2:
		case ENV_RELEASE:
			o->att += o->releaseStep;
			if (o->att >= ATT_MAX) {
				o->att = ATT_MAX;
				if (o->phase == ENV_RELEASE) o->phase = ENV_OFF;
			}
			break;
		default:
			break;
	}
}

/**
 * Run the software envelopes (slow attacks); call as often as possible,
 * at least every few milliseconds.
 */
void OplScsp_Update(void)
{
	uint64_t now = SaturnTimer_Us();
	uint32_t steps = (uint32_t)((now - s_envTime) / 1000);
	int channel, op;

	if (steps == 0) return;
	s_envTime += (uint64_t)steps * 1000;
	/* after a long pause, don't spin */
	if (steps > 200) steps = 200;

	for (channel = 0; channel < CHANNELS; channel++) {
		for (op = 0; op < 2; op++) {
			Operator *o = &s_ops[channel][op];
			uint32_t i;
			uint8_t tl;

			if (!o->soft || !o->slotOn) continue;
			for (i = 0; i < steps && o->phase != ENV_OFF; i++) OplScsp_EnvelopeStep(o);

			if (o->phase == ENV_OFF) {
				Scsp_Key(OplScsp_Slot(channel, op), 0);
				o->slotOn = 0;
				continue;
			}
			tl = OplScsp_TotalLevel(o);
			if (tl != o->written) {
				o->written = tl;
				Scsp_SlotWrite(OplScsp_Slot(channel, op), 0x0C, tl);
			}
		}
	}
}

/**
 * Extra attenuation (0.375 dB units, 255: silent) for channels first..last,
 * for volume and fades.
 *
 * @param first The first channel.
 * @param last The last channel.
 * @param attenuation The attenuation.
 */
void OplScsp_SetAttenuation(int first, int last, uint8_t attenuation)
{
	int channel;
	for (channel = first; channel <= last && channel < CHANNELS; channel++) {
		if (s_channelAtt[channel] == attenuation) continue;
		s_channelAtt[channel] = attenuation;
		if (s_ops[channel][1].slotOn) OplScsp_Setup(channel, 1);
		if (s_ops[channel][0].slotOn && OplScsp_Sounding(channel, 0)) OplScsp_Setup(channel, 0);
	}
}

/**
 * Envelope mapping for tuning by ear: SCSP attack rate = OPL effective
 * rate / 2 + attackOffset (default 1), decay/release = OPL effective
 * rate / 2 + decayQuarters / 4 (default 9).
 *
 * @param attackOffset Added to the attack rate.
 * @param decayQuarters Added to the decay rates, in quarters.
 */
void OplScsp_Tune(int attackOffset, int decayQuarters)
{
	s_attackOffset = attackOffset;
	s_decayQuarters = decayQuarters;
}

/**
 * Silence all OPL voices.
 */
void OplScsp_Reset(void)
{
	int channel, op;
	for (channel = 0; channel < CHANNELS; channel++) {
		for (op = 0; op < 2; op++) {
			Scsp_Key(OplScsp_Slot(channel, op), 0);
			s_ops[channel][op].slotOn = 0;
			s_ops[channel][op].soft = 0;
			s_ops[channel][op].phase = ENV_OFF;
		}
		s_keyOn[channel] = 0;
		s_pendingOff[channel] = 0;
	}
	s_envTime = SaturnTimer_Us();
}

/**
 * Set up the waveforms and slots; needs Scsp_Init() and SaturnTimer_Init().
 *
 * @return 0 if there is no sound RAM for the waveforms.
 */
int OplScsp_Init(void)
{
	if (s_wave[0] < 0 && !OplScsp_BuildWaves()) return 0;
	OplScsp_Reset();
	return 1;
}

/**
 * One OPL2 register write.
 *
 * @param reg The register.
 * @param val The value.
 */
void OplScsp_Write(uint8_t reg, uint8_t val)
{
	int channel;

	s_regs[reg] = val;

	if (reg >= 0x20 && reg < 0xA0) {
		/* operator registers: find the channel and operator */
		int offset = reg & 0x1F;
		int op, i;
		for (i = 0; i < CHANNELS; i++) {
			for (op = 0; op < 2; op++) {
				if (s_opOffset[i] + op * 3 == offset) {
					if (s_keyOn[i]) OplScsp_Setup(i, op);
					return;
				}
			}
		}
		return;
	}
	if (reg >= 0xE0 && reg <= 0xF5) {
		/* waveform: used from the next note on */
		return;
	}
	if (reg >= 0xA0 && reg <= 0xA8) {
		channel = reg - 0xA0;
		if (s_keyOn[channel]) {
			Scsp_SlotWrite(OplScsp_Slot(channel, 0), 0x10, OplScsp_Pitch(channel, 0));
			Scsp_SlotWrite(OplScsp_Slot(channel, 1), 0x10, OplScsp_Pitch(channel, 1));
		}
		return;
	}
	if (reg >= 0xB0 && reg <= 0xB8) {
		int on = (val >> 5) & 1;
		channel = reg - 0xB0;
		if (on != s_keyOn[channel]) {
			s_keyOn[channel] = (uint8_t)on;
			if (on) {
				OplScsp_ChannelKeyOn(channel);
			} else {
				s_pendingOff[channel] = 1;
			}
		} else if (on) {
			Scsp_SlotWrite(OplScsp_Slot(channel, 0), 0x10, OplScsp_Pitch(channel, 0));
			Scsp_SlotWrite(OplScsp_Slot(channel, 1), 0x10, OplScsp_Pitch(channel, 1));
		}
		return;
	}
	if (reg >= 0xC0 && reg <= 0xC8) {
		channel = reg - 0xC0;
		if (s_keyOn[channel]) {
			OplScsp_Setup(channel, 0);
			OplScsp_Setup(channel, 1);
		}
		return;
	}
}

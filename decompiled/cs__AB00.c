/* $Id$ */

/** @file decompiled/cs__AB00.c Decompiled segment AB00. */

#include <SDL.h>
#include "types.h"
#include "libemu.h"
#include "decompiled.h"

static uint8 *s_buffer;
static int s_bufferLen;

/**
 * Decompiled function f__AB00_02AB_000F_A43F()
 *
 * @name f__AB00_02AB_000F_A43F
 * @implements AB00:02AB:000F:A43F ()
 *
 * Called From: AB00:086F:0007:9A8B
 */
void f__AB00_02AB_000F_A43F()
{
l__02AB:
	emu_push(emu_ds);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_lfp(&emu_ds, &emu_si, &emu_get_memory16(emu_cs, 0x00, 0x10A));
	emu_lodsb(emu_ds);
	emu_ah = 0x0;
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_pop(&emu_ds);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

void DSP_Callback(void *userdata, Uint8 *stream, int len)
{
	VARIABLE_NOT_USED(userdata);

	if (s_bufferLen == 0) return;

	if (len <= s_bufferLen) {
		if (s_buffer == NULL) {
			memset(stream, 0, len);
		} else {
			memcpy(stream, s_buffer, len);
		}
		s_bufferLen -= len;
		s_buffer += len;
	} else {
		if (s_buffer == NULL) {
			memset(stream, 0, s_bufferLen);
		} else {
			memcpy(stream, s_buffer, s_bufferLen);
		}
		s_bufferLen = 0;
	}
}

/**
 * Decompiled function emu_DSP_SetTimeConst()
 *
 * @name emu_DSP_SetTimeConst
 * @implements AB00:03A7:002E:9463 ()
 * @implements AB00:03D5:000E:256B
 * @implements AB00:03E3:000D:C5F9
 * @implements AB00:03F0:0007:F178
 *
 * Called From: AB00:092B:0014:A4C0
 * Called From: AB00:0A41:0030:3F4D
 * Called From: AB00:0D0A:0040:6228
 */
void DSP_SetTimeConst(uint16 tc)
{
	extern void pcm_sdl_callback(void *userdata, Uint8 *stream, int len);
	static int old_freq = 0;
	SDL_AudioSpec spec;

	spec.freq = 1000000 / (256 - tc);
	spec.format = AUDIO_U8;
	spec.channels = 1;
	spec.samples = 512;
	spec.callback = DSP_Callback;

	if (old_freq != spec.freq) {
		SDL_CloseAudio();
		old_freq = spec.freq;
		SDL_OpenAudio(&spec, &spec);
	}
}

/**
 * Decompiled function f__AB00_086B_0007_9A8B()
 *
 * @name f__AB00_086B_0007_9A8B
 * @implements AB00:086B:0007:9A8B ()
 * @implements AB00:0872:000D:E608
 * @implements AB00:087F:0008:53B7
 * @implements AB00:0887:001B:9436
 * @implements AB00:08A8:000A:94FD
 * @implements AB00:0903:0017:4784
 * @implements AB00:091A:0014:A4C0
 * @implements AB00:092E:000A:8AA3
 * @implements AB00:0938:000E:D0F8
 * @implements AB00:0946:000A:8CA9
 * @implements AB00:0950:0007:50C7
 * @implements AB00:0957:000A:4CAD
 * @implements AB00:0961:0007:90C4
 * @implements AB00:0968:000C:5B17
 * @implements AB00:09ED:0057:C27F
 * @implements AB00:0A14:0030:3F4D
 * @implements AB00:0A44:0010:FF21
 * @implements AB00:0A54:0053:37BB
 * @implements AB00:0AA7:0007:4F07
 * @implements AB00:0AAA:0004:5E42
 *
 * Called From: AB00:05D3:0004:BC25
 * Called From: AB00:1180:0021:7380
 */
void f__AB00_086B_0007_9A8B()
{
l__086B:
	emu_push(emu_ds);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_push(emu_cs);
	emu_push(0x0872); f__AB00_02AB_000F_A43F();
l__0872:
	emu_cmpw(&emu_ax, 0x0);
	if (emu_ax == 0x0) goto l__08A8;
	emu_cmpw(&emu_ax, 0x1);
	if (emu_ax != 0x1) goto l__087F;
	goto l__09ED;
l__087F:
	emu_cmpw(&emu_ax, 0x2);
	if (emu_ax != 0x2) goto l__0887;
	/* Unresolved jump */ emu_ip = 0x0974; emu_last_cs = 0xAB00; emu_last_ip = 0x0884; emu_last_length = 0x0008; emu_last_crc = 0x53B7; emu_call();
l__0887:
	emu_cmpw(&emu_ax, 0x3);
	if (emu_ax == 0x3) goto l__0903;
	emu_cmpw(&emu_ax, 0x4);
	if (emu_ax == 0x4) goto l__08A8;
	emu_cmpw(&emu_ax, 0x6);
	if (emu_ax == 0x6) { /* Unresolved jump */ emu_ip = 0x08B8; emu_last_cs = 0xAB00; emu_last_ip = 0x0894; emu_last_length = 0x001B; emu_last_crc = 0x9436; emu_call(); return; }
	emu_cmpw(&emu_ax, 0x7);
	if (emu_ax == 0x7) { /* Unresolved jump */ emu_ip = 0x08D9; emu_last_cs = 0xAB00; emu_last_ip = 0x0899; emu_last_length = 0x001B; emu_last_crc = 0x9436; emu_call(); return; }
	emu_cmpw(&emu_ax, 0x8);
	if (emu_ax == 0x8) { /* Unresolved jump */ emu_ip = 0x08A2; emu_last_cs = 0xAB00; emu_last_ip = 0x089E; emu_last_length = 0x001B; emu_last_crc = 0x9436; emu_call(); return; }
	/* Unresolved jump */ emu_ip = 0x08B2; emu_last_cs = 0xAB00; emu_last_ip = 0x08A0; emu_last_length = 0x001B; emu_last_crc = 0x9436; emu_call();
l__08A8:
	goto l__0AAA;
l__0903:
	emu_get_memory16(emu_cs, 0x00, 0x11E) = 0x0;
	emu_get_memory16(emu_cs, 0x00, 0x120) = 0x0;

	emu_lfp(&emu_ds, &emu_si, &emu_get_memory16(emu_cs, 0x00, 0x10A));

	DSP_SetTimeConst(emu_get_memory16(emu_ds, emu_si, 0x6));
	s_bufferLen = emu_get_memory8(emu_ds, emu_si, 0x4) | (emu_get_memory8(emu_ds, emu_si, 0x5) << 8);
	s_buffer = NULL;
	SDL_PauseAudio(0);

	emu_get_memory8(emu_cs, 0x00, 0x166) = 0x1;
	goto l__0AAA;
l__09ED:
	emu_lfp(&emu_ds, &emu_si, &emu_get_memory16(emu_cs, 0x00, 0x10A));
	emu_bl = emu_get_memory8(emu_ds, emu_si, 0x4);
	emu_al = emu_get_memory8(emu_ds, emu_si, 0x5);
	emu_bh = 0x0;
	emu_ah = 0x0;
	emu_cmpw(&emu_get_memory16(emu_cs, 0x00, 0x162), 0x0);
	if (emu_get_memory16(emu_cs, 0x00, 0x162) != 0x0) {
		emu_al = emu_get_memory8(emu_cs, 0x00, 0x165);
		emu_bl = emu_get_memory8(emu_cs, 0x00, 0x164);
		emu_get_memory16(emu_cs, 0x00, 0x162) = 0x0;
	}
l__0A14:
	emu_get_memory16(emu_cs, 0x00, 0x118) = emu_ax;
	emu_get_memory16(emu_cs, 0x00, 0x112) = emu_ax;
	emu_andw(&emu_get_memory16(emu_cs, 0x00, 0x112), 0x7F);
	emu_andw(&emu_ax, 0x80);
	emu_cx = 0x6;
	emu_shrw(&emu_ax, emu_cl);
	emu_andw(&emu_ax, 0x2);
	emu_get_memory16(emu_cs, 0x00, 0x114) = emu_ax;
	emu_get_memory16(emu_cs, 0x00, 0x116) = emu_bx;

	DSP_SetTimeConst(emu_get_memory16(emu_cs, 0x00, 0x116));

	emu_ax = emu_get_memory16(emu_ds, emu_si, 0x1);
	emu_dl = emu_get_memory8(emu_ds, emu_si, 0x3);
	emu_dh = 0x0;
	emu_subw(&emu_ax, 0x2);
	emu_sbbw(&emu_dx, 0x0);
	emu_push(emu_bx);
	emu_push(emu_cx);
	emu_bx = emu_ds;
	emu_xorw(&emu_cx, emu_cx);
	emu_shlw(&emu_bx, 0x1);
	emu_rclw(&emu_cx, 0x1);
	emu_shlw(&emu_bx, 0x1);
	emu_rclw(&emu_cx, 0x1);
	emu_shlw(&emu_bx, 0x1);
	emu_rclw(&emu_cx, 0x1);
	emu_shlw(&emu_bx, 0x1);
	emu_rclw(&emu_cx, 0x1);
	emu_addw(&emu_bx, emu_si);
	emu_adcw(&emu_cx, 0x0);
	emu_addw(&emu_bx, 0x6);
	emu_adcw(&emu_cx, 0x0);
	emu_si = emu_bx;
	emu_andw(&emu_si, 0xF);
	emu_shrw(&emu_cx, 0x1);
	emu_rcrw(&emu_bx, 0x1);
	emu_shrw(&emu_cx, 0x1);
	emu_rcrw(&emu_bx, 0x1);
	emu_shrw(&emu_cx, 0x1);
	emu_rcrw(&emu_bx, 0x1);
	emu_shrw(&emu_cx, 0x1);
	emu_rcrw(&emu_bx, 0x1);
	emu_ds = emu_bx;
	emu_pop(&emu_cx);
	emu_pop(&emu_bx);

	SDL_LockAudio();
	s_buffer = &emu_get_memory8(emu_ds, emu_si, 0x0);
	s_bufferLen = emu_dx << 16 | emu_ax;
	SDL_UnlockAudio();
	SDL_PauseAudio(0);

l__0AAA:
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_pop(&emu_ds);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function emu_DSP_GetInfo()
 *
 * @name emu_DSP_GetInfo
 * @implements AB00:0B73:0019:AD43 ()
 * @implements AB00:0B8C:0005:C48A
 *
 * Called From: 2756:050D:0003:6FD4
 */
void emu_DSP_GetInfo()
{
l__0B73:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_ds);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_pushf();
	emu_cli();
	emu_dx = emu_cs;
	emu_get_memory16(emu_cs, 0x00, 0x7D) = emu_dx;
	emu_ax = 0x73;
	emu_popf();
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_pop(&emu_ds);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function emu_DSP_Uninit()
 *
 * @name emu_DSP_Uninit
 * @implements AB00:0B91:0014:89BD ()
 * @implements AB00:0BA5:000E:9248
 * @implements AB00:0BB3:0007:AEA0
 * @implements AB00:0BBA:0004:861F
 * @implements AB00:0BBE:000E:E72F
 * @implements AB00:0BC5:0007:3FBD
 * @implements AB00:0BCC:0005:C48A
 *
 * Called From: 2756:050D:0003:6FD4
 */
void emu_DSP_Uninit()
{
l__0B91:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_ds);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_pushf();
	emu_cli();
	emu_cmpw(&emu_get_memory16(emu_cs, 0x00, 0x167), 0x0);
	if (emu_get_memory16(emu_cs, 0x00, 0x167) == 0x0) goto l__0BC5;

	SDL_CloseAudio();

	emu_push(emu_cs);
	emu_push(0x0BBA); emu_DSP_Stop();
l__0BBA:
l__0BBE:
	emu_get_memory16(emu_cs, 0x00, 0x167) = 0x0;
l__0BC5:
	emu_popf();
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_pop(&emu_ds);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function emu_DSP_SetVolume()
 *
 * @name emu_DSP_SetVolume
 * @implements AB00:0C08:0013:3E08 ()
 * @implements AB00:0C1B:0007:3FBD
 * @implements AB00:0C22:0005:C48A
 *
 * Called From: 2756:050D:0003:6FD4
 */
void emu_DSP_SetVolume()
{
l__0C08:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_ds);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_pushf();
	emu_cli();
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_get_memory16(emu_cs, 0x00, 0x106) = emu_ax;
	emu_popf();
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_pop(&emu_ds);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function emu_DSP_Init()
 *
 * @name emu_DSP_Init
 * @implements AB00:0DA4:0078:0101 ()
 * @implements AB00:0E1C:001B:9801
 * @implements AB00:0E37:0034:388F
 * @implements AB00:0E64:0007:3FBD
 * @implements AB00:0E6B:0005:C48A
 *
 * Called From: 2756:050D:0003:6FD4
 */
void emu_DSP_Init()
{
	SDL_InitSubSystem(SDL_INIT_AUDIO);

	s_bufferLen = 0;
	s_buffer = NULL;

l__0DA4:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_ds);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_pushf();
	emu_cli();
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_addw(&emu_ax, 0x6);
	emu_get_memory16(emu_cs, 0x00, 0xFA) = emu_ax;
	emu_addw(&emu_ax, 0x4);
	emu_get_memory16(emu_cs, 0x00, 0xFC) = emu_ax;
	emu_addw(&emu_ax, 0x2);
	emu_get_memory16(emu_cs, 0x00, 0xFE) = emu_ax;
	emu_addw(&emu_ax, 0x2);
	emu_get_memory16(emu_cs, 0x00, 0x100) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0xA);
	emu_get_memory16(emu_cs, 0x00, 0x102) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0xC);
	emu_get_memory16(emu_cs, 0x00, 0x104) = emu_ax;
	emu_get_memory16(emu_cs, 0x00, 0x162) = 0x0;
	emu_get_memory8(emu_cs, 0x00, 0x166) = 0x0;
	emu_get_memory16(emu_cs, 0x00, 0x15E) = 0xFFFF;
	emu_get_memory16(emu_cs, 0x00, 0x160) = 0xFFFF;
	emu_ax = emu_get_memory16(emu_cs, 0x00, 0xE8);
	emu_get_memory16(emu_cs, 0x00, 0x108) = emu_ax;
	emu_ax = emu_get_memory16(emu_cs, 0x00, 0xE6);
	emu_get_memory16(emu_cs, 0x00, 0x106) = emu_ax;
	emu_get_memory16(emu_cs, 0x00, 0x12A) = 0x0;
	emu_get_memory16(emu_cs, 0x00, 0x14A) = 0x1;
	emu_get_memory16(emu_cs, 0x00, 0x146) = 0x3;
	emu_get_memory16(emu_cs, 0x00, 0x148) = 0x3;
	emu_get_memory16(emu_cs, 0x00, 0x167) = 0x1;
	emu_ax = 0x1;
l__0E64:
	emu_popf();
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_pop(&emu_ds);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function emu_DSP_Play()
 *
 * @name emu_DSP_Play
 * @implements AB00:1068:0020:E6F1 ()
 * @implements AB00:1088:006D:FEDA
 * @implements AB00:110D:000E:872A
 * @implements AB00:111B:0007:F178
 *
 * Called From: 2756:050D:0003:6FD4
 */
void emu_DSP_Play()
{
l__1068:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x4);
	emu_push(emu_ds);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_pushf();
	emu_cli();
	emu_get_memory16(emu_cs, 0x00, 0x162) = 0x0;
	emu_push(emu_ax);
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_get_memory16(emu_ss, emu_bp,  0x2) = 0x0;
	emu_pop(&emu_bp);
	emu_push(emu_cs);
	emu_push(0x1088); emu_DSP_Stop();
l__1088:
	emu_addw(&emu_sp, 0x2);
	emu_get_memory16(emu_cs, 0x00, 0x14A) = 0x0;
	emu_lfp(&emu_es, &emu_di, &emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_di;
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_es;
	SDL_LockAudio();
	s_bufferLen = 0;
	SDL_UnlockAudio();
	emu_lfp(&emu_ds, &emu_si, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_ax = emu_get_memory16(emu_ds, emu_si, 0x14);
	emu_push(emu_bx);
	emu_push(emu_cx);
	emu_bx = emu_ds;
	emu_xorw(&emu_cx, emu_cx);
	emu_shlw(&emu_bx, 0x1);
	emu_rclw(&emu_cx, 0x1);
	emu_shlw(&emu_bx, 0x1);
	emu_rclw(&emu_cx, 0x1);
	emu_shlw(&emu_bx, 0x1);
	emu_rclw(&emu_cx, 0x1);
	emu_shlw(&emu_bx, 0x1);
	emu_rclw(&emu_cx, 0x1);
	emu_addw(&emu_bx, emu_si);
	emu_adcw(&emu_cx, 0x0);
	emu_addw(&emu_bx, emu_ax);
	emu_adcw(&emu_cx, 0x0);
	emu_si = emu_bx;
	emu_andw(&emu_si, 0xF);
	emu_shrw(&emu_cx, 0x1);
	emu_rcrw(&emu_bx, 0x1);
	emu_shrw(&emu_cx, 0x1);
	emu_rcrw(&emu_bx, 0x1);
	emu_shrw(&emu_cx, 0x1);
	emu_rcrw(&emu_bx, 0x1);
	emu_shrw(&emu_cx, 0x1);
	emu_rcrw(&emu_bx, 0x1);
	emu_ds = emu_bx;
	emu_pop(&emu_cx);
	emu_pop(&emu_bx);
	emu_get_memory16(emu_cs, 0x00, 0x10A) = emu_si;
	emu_get_memory16(emu_cs, 0x00, 0x10C) = emu_ds;
l__110D:
	SDL_LockAudio();
	s_bufferLen = 0;
	SDL_UnlockAudio();

	emu_popf();
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_pop(&emu_ds);
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function emu_DSP_Start()
 *
 * @name emu_DSP_Start
 * @implements AB00:1122:001C:9408 ()
 * @implements AB00:1162:0021:7380
 * @implements AB00:1183:0007:3FBD
 * @implements AB00:118A:0005:C48A
 *
 * Called From: 2756:050D:0003:6FD4
 */
void emu_DSP_Start()
{
l__1122:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_ds);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_pushf();
	emu_cli();
	emu_cmpw(&emu_get_memory16(emu_cs, 0x00, 0x14A), 0x0);
	if (emu_get_memory16(emu_cs, 0x00, 0x14A) == 0x0) goto l__1162;
	if (s_bufferLen != 0) goto l__1183;
	emu_push(emu_cs);
	/* Unresolved call */ emu_push(0x113E); emu_ip = 0x0AAE; emu_last_cs = 0xAB00; emu_last_ip = 0x113B; emu_last_length = 0x001C; emu_last_crc = 0x9408; emu_call();
	/* Unresolved jump */ emu_ip = 0x113E; emu_last_cs = 0xAB00; emu_last_ip = 0x113E; emu_last_length = 0x001C; emu_last_crc = 0x9408; emu_call();
l__1162:

	SDL_LockAudio();
	if (s_bufferLen == 0) {
		emu_get_memory16(emu_cs, 0x00, 0x15E) = 0xFFFF;
		emu_get_memory16(emu_cs, 0x00, 0x160) = 0xFFFF;
		emu_push(emu_cs); emu_push(0x1183); f__AB00_086B_0007_9A8B();
	}
	SDL_UnlockAudio();
l__1183:
	emu_popf();
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_pop(&emu_ds);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function emu_DSP_Stop()
 *
 * @name emu_DSP_Stop
 * @implements AB00:118F:0029:4B06 ()
 * @implements AB00:11AD:000B:B9EA
 * @implements AB00:11B8:0005:4719
 * @implements AB00:11BD:0018:FC8D
 * @implements AB00:11D5:0005:C48A
 *
 * Called From: 2756:050D:0003:6FD4
 * Called From: AB00:0BB7:0007:AEA0
 * Called From: AB00:1085:0020:E6F1
 */
void emu_DSP_Stop()
{
l__118F:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_ds);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_pushf();
	emu_cli();

	SDL_LockAudio();
	s_bufferLen = 0;
	s_buffer = NULL;
	SDL_UnlockAudio();
	SDL_PauseAudio(1);

	emu_get_memory16(emu_cs, 0x00, 0x146) = 0x3;
	emu_get_memory16(emu_cs, 0x00, 0x148) = 0x3;
	emu_popf();
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_pop(&emu_ds);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

uint8 DSP_GetStatus()
{
	uint8 ret = 0;

	SDL_LockAudio();
	if (s_bufferLen != 0) ret = 2;
	SDL_UnlockAudio();

	return ret;
}

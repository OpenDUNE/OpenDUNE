/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__2756_04BC_002C_889B()
 *
 * @name f__2756_04BC_002C_889B
 * @implements 2756:04BC:002C:889B ()
 *
 * Called From: 2756:04FE:0009:FC33
 */
void f__2756_04BC_002C_889B()
{
	emu_push(emu_es);
	emu_cmpws(&emu_bx.x, 0x10);
	if (!emu_flags.cf) { f__2756_04E8_0008_AEDA(); return; }
	emu_shlw(&emu_bx.x, 0x1);
	emu_shlw(&emu_bx.x, 0x1);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_cs, emu_bx.x,  0x128));
	emu_movw(&emu_cx.x, emu_es);
	emu_orw(&emu_cx.x, emu_bx.x);
	if (emu_flags.zf) { emu_ip = 0x04E8; emu_last_cs = 0x2756; emu_last_ip = 0x04CF; emu_last_length = 0x002C; emu_last_crc = 0x889B; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_cx.x, emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_cmpw(&emu_cx.x, emu_ax.x);
	if (emu_flags.zf) { emu_ip = 0x04F0; emu_last_cs = 0x2756; emu_last_ip = 0x04D6; emu_last_length = 0x002C; emu_last_crc = 0x889B; emu_call(); return; } // Jump does not resolve
	emu_addws(&emu_bx.x, 0x4);
	emu_cmpws(&emu_cx.x, 0xFF);
	if (!emu_flags.zf) { emu_ip = 0x04D1; emu_last_cs = 0x2756; emu_last_ip = 0x04DE; emu_last_length = 0x002C; emu_last_crc = 0x889B; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, 0x0);
	emu_movw(&emu_dx.x, 0x0);
	emu_pop(&emu_es);

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__2756_04E8_0008_AEDA()
 *
 * @name f__2756_04E8_0008_AEDA
 * @implements 2756:04E8:0008:AEDA ()
 *
 * Called From: 2756:04C0:002C:889B
 */
void f__2756_04E8_0008_AEDA()
{
	emu_movw(&emu_ax.x, 0x0);
	emu_movw(&emu_dx.x, 0x0);
	emu_pop(&emu_es);

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__2756_04F8_0009_FC33()
 *
 * @name f__2756_04F8_0009_FC33
 * @implements 2756:04F8:0009:FC33 ()
 *
 * Called From: 2756:0E39:0006:25D4
 */
void f__2756_04F8_0009_FC33()
{
	emu_movw(&emu_bx.x, emu_sp);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bx.x,  0x4));
	emu_push(0x0501); f__2756_04BC_002C_889B();
	f__2756_0501_000D_8CF0();
}

/**
 * Decompiled function f__2756_0501_000D_8CF0()
 *
 * @name f__2756_0501_000D_8CF0
 * @implements 2756:0501:000D:8CF0 ()
 *
 * Called From: 2756:0501:0009:FC33
 */
void f__2756_0501_000D_8CF0()
{
	emu_cmpw(&emu_ax.x, 0x0);
	if (!emu_flags.zf) { emu_ip = 0x050B; emu_last_cs = 0x2756; emu_last_ip = 0x0504; emu_last_length = 0x000D; emu_last_crc = 0x8CF0; emu_call(); return; } // Jump does not resolve
	emu_cmpws(&emu_dx.x, 0x0);
	if (emu_flags.zf) { f__2756_050E_0001_0196(); return; }
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__2756_050E_0001_0196()
 *
 * @name f__2756_050E_0001_0196
 * @implements 2756:050E:0001:0196 ()
 *
 * Called From: 2756:0509:000D:8CF0
 */
void f__2756_050E_0001_0196()
{

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__2756_050F_000B_0D47()
 *
 * @name f__2756_050F_000B_0D47
 * @implements 2756:050F:000B:0D47 ()
 *
 * Called From: 0000:0000:0000:0000
 */
void f__2756_050F_000B_0D47()
{
	emu_cmpws(&emu_get_memory16(emu_cs, 0x00,  0x6), 0x0);
	if (emu_flags.zf) { f__2756_051A_006F_C1E2(); return; }
	emu_ip = 0x05C9; emu_last_cs = 0x2756; emu_last_ip = 0x0517; emu_last_length = 0x000B; emu_last_crc = 0x0D47; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__2756_051A_006F_C1E2()
 *
 * @name f__2756_051A_006F_C1E2
 * @implements 2756:051A:006F:C1E2 ()
 *
 * Called From: 2756:0515:000B:0D47
 */
void f__2756_051A_006F_C1E2()
{
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x6), 0x1);
	emu_cld();
	emu_push(emu_ax.x);
	emu_push(emu_bx.x);
	emu_push(emu_cx.x);
	emu_push(emu_dx.x);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_push(emu_bp);
	emu_push(emu_es);
	emu_push(emu_ds);
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x3B8), emu_ss);
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x3BA), emu_sp);
	emu_movw(&emu_ax.x, emu_cs);
	emu_movw(&emu_ss, emu_ax.x);
	emu_movw(&emu_sp, 0x3B8);
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x120), 0x0);
	emu_movw(&emu_si, emu_get_memory16(emu_cs, 0x00,  0x120));
	emu_shlw(&emu_si, 0x1);
	emu_cmpws(&emu_get_memory16(emu_cs, emu_si,  0x6E), 0x2);
	if (!emu_flags.zf) { emu_ip = 0x05A2; emu_last_cs = 0x2756; emu_last_ip = 0x0550; emu_last_length = 0x006F; emu_last_crc = 0xC1E2; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ds, emu_get_memory16(emu_cs, emu_si,  0x4C));
	emu_shlw(&emu_si, 0x1);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_cs, emu_si,  0x90));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_cs, emu_si,  0x92));
	emu_addw(&emu_ax.x, emu_get_memory16(emu_cs, 0x00,  0x118));
	emu_adcw(&emu_dx.x, emu_get_memory16(emu_cs, 0x00,  0x11A));
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_cs, emu_si,  0xD6));
	if (emu_flags.cf) { emu_ip = 0x057D; emu_last_cs = 0x2756; emu_last_ip = 0x0572; emu_last_length = 0x006F; emu_last_crc = 0xC1E2; emu_call(); return; } // Jump does not resolve
	if (!(emu_flags.cf || emu_flags.zf)) { emu_ip = 0x0589; emu_last_cs = 0x2756; emu_last_ip = 0x0574; emu_last_length = 0x006F; emu_last_crc = 0xC1E2; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_cs, emu_si,  0xD4));
	if (!emu_flags.cf) { f__2756_0589_0019_B819(); return; }
	emu_movw(&emu_get_memory16(emu_cs, emu_si,  0x90), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_cs, emu_si,  0x92), emu_dx.x);
	emu_ip = 0x05A2; emu_last_cs = 0x2756; emu_last_ip = 0x0587; emu_last_length = 0x006F; emu_last_crc = 0xC1E2; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__2756_0543_0046_E244()
 *
 * @name f__2756_0543_0046_E244
 * @implements 2756:0543:0046:E244 ()
 *
 * Called From: 2756:05AD:0040:EE1E
 */
void f__2756_0543_0046_E244()
{
	emu_movw(&emu_si, emu_get_memory16(emu_cs, 0x00,  0x120));
	emu_shlw(&emu_si, 0x1);
	emu_cmpws(&emu_get_memory16(emu_cs, emu_si,  0x6E), 0x2);
	if (!emu_flags.zf) { f__2756_05A2_0040_EE1E(); return; }
	emu_movw(&emu_ds, emu_get_memory16(emu_cs, emu_si,  0x4C));
	emu_shlw(&emu_si, 0x1);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_cs, emu_si,  0x90));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_cs, emu_si,  0x92));
	emu_addw(&emu_ax.x, emu_get_memory16(emu_cs, 0x00,  0x118));
	emu_adcw(&emu_dx.x, emu_get_memory16(emu_cs, 0x00,  0x11A));
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_cs, emu_si,  0xD6));
	if (emu_flags.cf) { emu_ip = 0x057D; emu_last_cs = 0x2756; emu_last_ip = 0x0572; emu_last_length = 0x0046; emu_last_crc = 0xE244; emu_call(); return; } // Jump does not resolve
	if (!(emu_flags.cf || emu_flags.zf)) { f__2756_0589_0019_B819(); return; }
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_cs, emu_si,  0xD4));
	if (!emu_flags.cf) { f__2756_0589_0019_B819(); return; }
	emu_movw(&emu_get_memory16(emu_cs, emu_si,  0x90), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_cs, emu_si,  0x92), emu_dx.x);
	f__2756_05A2_0040_EE1E(); return;
}

/**
 * Decompiled function f__2756_0589_0019_B819()
 *
 * @name f__2756_0589_0019_B819
 * @implements 2756:0589:0019:B819 ()
 *
 * Called From: 2756:0574:0046:E244
 * Called From: 2756:057B:0046:E244
 * Called From: 2756:057B:006F:C1E2
 */
void f__2756_0589_0019_B819()
{
	emu_subw(&emu_ax.x, emu_get_memory16(emu_cs, emu_si,  0xD4));
	emu_sbbw(&emu_dx.x, emu_get_memory16(emu_cs, emu_si,  0xD6));
	emu_movw(&emu_get_memory16(emu_cs, emu_si,  0x90), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_cs, emu_si,  0x92), emu_dx.x);

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_cs, emu_si,  0x8);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_cs, emu_si,  0xA);
	emu_push(0x05A2);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x27560622: f__2756_0622_0006_2DB2(); break;
		case 0x2BD10006: f__2BD1_0006_004A_5176(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x2756; emu_last_ip = 0x059D; emu_last_length = 0x0019; emu_last_crc = 0xB819;
			emu_call();
			return;
	}
	f__2756_05A2_0040_EE1E();
}

/**
 * Decompiled function f__2756_05A2_0040_EE1E()
 *
 * @name f__2756_05A2_0040_EE1E
 * @implements 2756:05A2:0040:EE1E ()
 *
 * Called From: 2756:0550:0046:E244
 * Called From: 2756:0587:0046:E244
 * Called From: 2756:05A2:0019:B819
 */
void f__2756_05A2_0040_EE1E()
{
	emu_incw(&emu_get_memory16(emu_cs, 0x00,  0x120));
	emu_cmpws(&emu_get_memory16(emu_cs, 0x00,  0x120), 0x10);
	if ((emu_flags.cf || emu_flags.zf)) { f__2756_0543_0046_E244(); return; }
	emu_movw(&emu_ss, emu_get_memory16(emu_cs, 0x00,  0x3B8));
	emu_movw(&emu_sp, emu_get_memory16(emu_cs, 0x00,  0x3BA));
	emu_pop(&emu_ds);
	emu_pop(&emu_es);
	emu_pop(&emu_bp);
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_pop(&emu_dx.x);
	emu_pop(&emu_cx.x);
	emu_pop(&emu_bx.x);
	emu_pop(&emu_ax.x);
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x6), 0x0);
	emu_push(emu_ax.x);
	emu_movb(&emu_ax.l, 0x20);
	emu_outb(0x20, emu_ax.l);
	emu_pop(&emu_ax.x);
	emu_cmpw(&emu_get_memory16(emu_cs, 0x00,  0x1B4), 0x6554);
	if (!emu_flags.zf) { emu_ip = 0x05E2; emu_last_cs = 0x2756; emu_last_ip = 0x05D6; emu_last_length = 0x0040; emu_last_crc = 0xEE1E; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_get_memory16(emu_cs, 0x00,  0x1B6), 0x7473);
	if (!emu_flags.zf) { emu_ip = 0x05E2; emu_last_cs = 0x2756; emu_last_ip = 0x05DF; emu_last_length = 0x0040; emu_last_crc = 0xEE1E; emu_call(); return; } // Jump does not resolve

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	emu_popf();
	return;
}

/**
 * Decompiled function f__2756_05E6_0038_747E()
 *
 * @name f__2756_05E6_0038_747E
 * @implements 2756:05E6:0038:747E ()
 *
 * Called From: 2756:0AD0:0030:8DFD
 */
void f__2756_05E6_0038_747E()
{
	emu_push(emu_ds);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_pushf();
	emu_cli();
	emu_cld();
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x118), 0xFFFF);
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x11A), 0xFFFF);
	emu_push(emu_cs);
	emu_pop(&emu_es);
	emu_movw(&emu_di, 0x6E);
	emu_movw(&emu_cx.x, 0x11);
	emu_movw(&emu_ax.x, 0x0);
	emu_rep_stosw();
	emu_movw(&emu_di, 0x90);
	emu_movw(&emu_cx.x, 0x22);
	emu_rep_stosw();
	emu_movw(&emu_di, 0xD4);
	emu_movw(&emu_cx.x, 0x22);
	emu_rep_stosw();
	emu_orb(&emu_bx.h, 0x0);
	emu_push(emu_cs);
	emu_push(0x061E); f__2756_0618_0001_019E();
	f__2756_061E_0004_06FA();
}

/**
 * Decompiled function f__2756_0618_0001_019E()
 *
 * @name f__2756_0618_0001_019E
 * @implements 2756:0618:0001:019E ()
 *
 * Called From: 2756:061B:0038:747E
 */
void f__2756_0618_0001_019E()
{

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	emu_popf();
	return;
}

/**
 * Decompiled function f__2756_061E_0004_06FA()
 *
 * @name f__2756_061E_0004_06FA
 * @implements 2756:061E:0004:06FA ()
 *
 * Called From: 2756:061E:0038:747E
 */
void f__2756_061E_0004_06FA()
{
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_pop(&emu_ds);

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__2756_0622_0006_2DB2()
 *
 * @name f__2756_0622_0006_2DB2
 * @implements 2756:0622:0006:2DB2 ()
 *
 * Called From: 2756:059D:0019:B819
 */
void f__2756_0622_0006_2DB2()
{
	emu_pushf();

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_cs, 0x00,  0x11C);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_cs, 0x00,  0x11E);
	emu_push(0x0628);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x00700040: f__0070_0040_0005_1DBE(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x2756; emu_last_ip = 0x0623; emu_last_length = 0x0006; emu_last_crc = 0x2DB2;
			emu_call();
			return;
	}
	f__2756_0628_0001_0186();
}

/**
 * Decompiled function f__2756_0628_0001_0186()
 *
 * @name f__2756_0628_0001_0186
 * @implements 2756:0628:0001:0186 ()
 *
 * Called From: 2756:0628:0006:2DB2
 */
void f__2756_0628_0001_0186()
{

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__2756_0629_0049_299E()
 *
 * @name f__2756_0629_0049_299E
 * @implements 2756:0629:0049:299E ()
 *
 * Called From: 2756:0ADA:000A:70A7
 */
void f__2756_0629_0049_299E()
{
	emu_push(emu_ds);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_push(emu_es);
	emu_pushf();
	emu_cli();
	emu_movw(&emu_ax.x, 0x0);
	emu_movw(&emu_es, emu_ax.x);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_es, 0x00,  0x20));
	emu_movw(&emu_es, emu_get_memory16(emu_es, 0x00,  0x22));
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x11C), emu_bx.x);
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x11E), emu_es);
	emu_movw(&emu_bx.x, 0x622);
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x48), emu_bx.x);
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x4A), emu_cs);
	emu_movw(&emu_ax.x, emu_cs);
	emu_movw(&emu_ds, emu_ax.x);
	emu_movw(&emu_dx.x, 0x50F);
	emu_movw(&emu_ax.x, 0x0);
	emu_movw(&emu_es, emu_ax.x);
	emu_movw(&emu_get_memory16(emu_es, 0x00,  0x20), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_es, 0x00,  0x22), emu_ds);
	emu_orb(&emu_bx.h, 0x0);
	emu_push(emu_cs);
	emu_push(0x0672); f__2756_066C_0001_019E();
	f__2756_0672_0005_061A();
}

/**
 * Decompiled function f__2756_066C_0001_019E()
 *
 * @name f__2756_066C_0001_019E
 * @implements 2756:066C:0001:019E ()
 *
 * Called From: 2756:066F:0049:299E
 */
void f__2756_066C_0001_019E()
{

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	emu_popf();
	return;
}

/**
 * Decompiled function f__2756_0672_0005_061A()
 *
 * @name f__2756_0672_0005_061A
 * @implements 2756:0672:0005:061A ()
 *
 * Called From: 2756:0672:0049:299E
 */
void f__2756_0672_0005_061A()
{
	emu_pop(&emu_es);
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_pop(&emu_ds);

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__2756_0677_002D_7D27()
 *
 * @name f__2756_0677_002D_7D27
 * @implements 2756:0677:002D:7D27 ()
 *
 * Called From: 2756:085F:0006:3E88
 */
void f__2756_0677_002D_7D27()
{
	emu_push(emu_ds);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_push(emu_es);
	emu_pushf();
	emu_cli();
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x120), 0xFFFF);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_cs, 0x00,  0x11C));
	emu_movw(&emu_ds, emu_get_memory16(emu_cs, 0x00,  0x11E));
	emu_movw(&emu_ax.x, 0x0);
	emu_movw(&emu_es, emu_ax.x);
	emu_movw(&emu_get_memory16(emu_es, 0x00,  0x20), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_es, 0x00,  0x22), emu_ds);
	emu_orb(&emu_bx.h, 0x0);
	emu_push(emu_cs);
	emu_push(0x06A4); f__2756_069E_0001_019E();
	f__2756_06A4_0005_061A();
}

/**
 * Decompiled function f__2756_069E_0001_019E()
 *
 * @name f__2756_069E_0001_019E
 * @implements 2756:069E:0001:019E ()
 *
 * Called From: 2756:06A1:002D:7D27
 */
void f__2756_069E_0001_019E()
{

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	emu_popf();
	return;
}

/**
 * Decompiled function f__2756_06A4_0005_061A()
 *
 * @name f__2756_06A4_0005_061A
 * @implements 2756:06A4:0005:061A ()
 *
 * Called From: 2756:06A4:002D:7D27
 */
void f__2756_06A4_0005_061A()
{
	emu_pop(&emu_es);
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_pop(&emu_ds);

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__2756_06A9_0015_95B5()
 *
 * @name f__2756_06A9_0015_95B5
 * @implements 2756:06A9:0015:95B5 ()
 *
 * Called From: 2756:06F0:0004:0166
 * Called From: 2756:06F0:0021:721C
 * Called From: 2756:0859:0035:BC60
 */
void f__2756_06A9_0015_95B5()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_ds);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_pushf();
	emu_cli();
	emu_movb(&emu_ax.l, 0x36);
	emu_outb(0x43, emu_ax.l);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x4));
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x126), emu_ax.x);
	f__2756_06BE_0006_3CAC(); return;
}

/**
 * Decompiled function f__2756_06BE_0006_3CAC()
 *
 * @name f__2756_06BE_0006_3CAC
 * @implements 2756:06BE:0006:3CAC ()
 *
 * Called From: 2756:06BC:0015:95B5
 */
void f__2756_06BE_0006_3CAC()
{
	emu_outb(0x40, emu_ax.l);
	emu_movb(&emu_ax.l, emu_ax.h);
	f__2756_06C4_0009_FA77(); return;
}

/**
 * Decompiled function f__2756_06C4_0009_FA77()
 *
 * @name f__2756_06C4_0009_FA77
 * @implements 2756:06C4:0009:FA77 ()
 *
 * Called From: 2756:06C2:0006:3CAC
 */
void f__2756_06C4_0009_FA77()
{
	emu_outb(0x40, emu_ax.l);
	emu_orb(&emu_bx.h, 0x0);
	emu_push(emu_cs);
	emu_push(0x06CD); f__2756_06C7_0001_019E();
	f__2756_06CD_0005_0E0A();
}

/**
 * Decompiled function f__2756_06C7_0001_019E()
 *
 * @name f__2756_06C7_0001_019E
 * @implements 2756:06C7:0001:019E ()
 *
 * Called From: 2756:06CA:0009:FA77
 */
void f__2756_06C7_0001_019E()
{

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	emu_popf();
	return;
}

/**
 * Decompiled function f__2756_06CD_0005_0E0A()
 *
 * @name f__2756_06CD_0005_0E0A
 * @implements 2756:06CD:0005:0E0A ()
 *
 * Called From: 2756:06CD:0009:FA77
 */
void f__2756_06CD_0005_0E0A()
{
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_pop(&emu_ds);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__2756_06D2_0021_721C()
 *
 * @name f__2756_06D2_0021_721C
 * @implements 2756:06D2:0021:721C ()
 *
 * Called From: 2756:07BC:0014:AB9C
 */
void f__2756_06D2_0021_721C()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_ds);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_ax.x, 0x0);
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp,  0x4), 0xD68D);
	if (!emu_flags.cf) { f__2756_06EF_0004_0166(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x4));
	emu_movw(&emu_bx.x, 0x20BC);
	emu_movw(&emu_cx.x, 0x2710);
	emu_mulw(&emu_ax.x, emu_cx.x);
	emu_divw(&emu_ax.x, emu_bx.x);
	emu_push(emu_ax.x);
	emu_push(0x06F3); f__2756_06A9_0015_95B5();
	f__2756_06F3_0008_EF8A();
}

/**
 * Decompiled function f__2756_06EF_0004_0166()
 *
 * @name f__2756_06EF_0004_0166
 * @implements 2756:06EF:0004:0166 ()
 *
 * Called From: 2756:06E0:0021:721C
 */
void f__2756_06EF_0004_0166()
{
	emu_push(emu_ax.x);
	emu_push(0x06F3); f__2756_06A9_0015_95B5();
	f__2756_06F3_0008_EF8A();
}

/**
 * Decompiled function f__2756_06F3_0008_EF8A()
 *
 * @name f__2756_06F3_0008_EF8A
 * @implements 2756:06F3:0008:EF8A ()
 *
 * Called From: 2756:06F3:0004:0166
 * Called From: 2756:06F3:0021:721C
 */
void f__2756_06F3_0008_EF8A()
{
	emu_addws(&emu_sp, 0x2);
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_pop(&emu_ds);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__2756_06FB_0042_3C9C()
 *
 * @name f__2756_06FB_0042_3C9C
 * @implements 2756:06FB:0042:3C9C ()
 *
 * Called From: 2756:0BB1:0025:4377
 */
void f__2756_06FB_0042_3C9C()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_ds);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x4));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_cx.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_orw(&emu_cx.x, emu_cx.x);
	if (!emu_flags.zf) { emu_ip = 0x0719; emu_last_cs = 0x2756; emu_last_ip = 0x070F; emu_last_length = 0x0042; emu_last_crc = 0x3C9C; emu_call(); return; } // Jump does not resolve
	emu_orw(&emu_dx.x, emu_dx.x);
	if (emu_flags.zf) { emu_ip = 0x073D; emu_last_cs = 0x2756; emu_last_ip = 0x0713; emu_last_length = 0x0042; emu_last_crc = 0x3C9C; emu_call(); return; } // Jump does not resolve
	emu_orw(&emu_bx.x, emu_bx.x);
	if (emu_flags.zf) { emu_ip = 0x073D; emu_last_cs = 0x2756; emu_last_ip = 0x0717; emu_last_length = 0x0042; emu_last_crc = 0x3C9C; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_bp, emu_cx.x);
	emu_movw(&emu_cx.x, 0x20);
	emu_xorw(&emu_di, emu_di);
	emu_xorw(&emu_si, emu_si);
	emu_shlw(&emu_ax.x, 0x1);
	emu_rclw(&emu_dx.x, 0x1);
	emu_rclw(&emu_si, 0x1);
	emu_rclw(&emu_di, 0x1);
	emu_cmpw(&emu_di, emu_bp);
	if (emu_flags.cf) { emu_ip = 0x0739; emu_last_cs = 0x2756; emu_last_ip = 0x072C; emu_last_length = 0x0042; emu_last_crc = 0x3C9C; emu_call(); return; } // Jump does not resolve
	if (!(emu_flags.cf || emu_flags.zf)) { emu_ip = 0x0734; emu_last_cs = 0x2756; emu_last_ip = 0x072E; emu_last_length = 0x0042; emu_last_crc = 0x3C9C; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_si, emu_bx.x);
	if (emu_flags.cf) { f__2756_0739_0004_0ABC(); return; }
	emu_subw(&emu_si, emu_bx.x);
	emu_sbbw(&emu_di, emu_bp);
	emu_incw(&emu_ax.x);
	if (--emu_cx.x != 0) { emu_ip = 0x0722; emu_last_cs = 0x2756; emu_last_ip = 0x0739; emu_last_length = 0x0042; emu_last_crc = 0x3C9C; emu_call(); } // Jump does not resolve
	emu_ip = 0x0741; emu_last_cs = 0x2756; emu_last_ip = 0x073B; emu_last_length = 0x0042; emu_last_crc = 0x3C9C; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__2756_0722_001B_F1DA()
 *
 * @name f__2756_0722_001B_F1DA
 * @implements 2756:0722:001B:F1DA ()
 *
 * Called From: 2756:0739:0004:0ABC
 * Called From: 2756:0739:001B:F1DA
 */
void f__2756_0722_001B_F1DA()
{
	emu_shlw(&emu_ax.x, 0x1);
	emu_rclw(&emu_dx.x, 0x1);
	emu_rclw(&emu_si, 0x1);
	emu_rclw(&emu_di, 0x1);
	emu_cmpw(&emu_di, emu_bp);
	if (emu_flags.cf) { emu_ip = 0x0739; emu_last_cs = 0x2756; emu_last_ip = 0x072C; emu_last_length = 0x001B; emu_last_crc = 0xF1DA; emu_call(); return; } // Jump does not resolve
	if (!(emu_flags.cf || emu_flags.zf)) { emu_ip = 0x0734; emu_last_cs = 0x2756; emu_last_ip = 0x072E; emu_last_length = 0x001B; emu_last_crc = 0xF1DA; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_si, emu_bx.x);
	if (emu_flags.cf) { f__2756_0739_0004_0ABC(); return; }
	emu_subw(&emu_si, emu_bx.x);
	emu_sbbw(&emu_di, emu_bp);
	emu_incw(&emu_ax.x);
	if (--emu_cx.x != 0) { f__2756_0722_001B_F1DA(); return; }
	emu_ip = 0x0741; emu_last_cs = 0x2756; emu_last_ip = 0x073B; emu_last_length = 0x001B; emu_last_crc = 0xF1DA; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__2756_0739_0004_0ABC()
 *
 * @name f__2756_0739_0004_0ABC
 * @implements 2756:0739:0004:0ABC ()
 *
 * Called From: 2756:0732:001B:F1DA
 * Called From: 2756:0732:0042:3C9C
 */
void f__2756_0739_0004_0ABC()
{
	if (--emu_cx.x != 0) { f__2756_0722_001B_F1DA(); return; }
	f__2756_0741_0005_0E0A(); return;
}

/**
 * Decompiled function f__2756_0741_0005_0E0A()
 *
 * @name f__2756_0741_0005_0E0A
 * @implements 2756:0741:0005:0E0A ()
 *
 * Called From: 2756:073B:0004:0ABC
 */
void f__2756_0741_0005_0E0A()
{
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_pop(&emu_ds);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__2756_0746_0079_674F()
 *
 * @name f__2756_0746_0079_674F
 * @implements 2756:0746:0079:674F ()
 *
 * Called From: 2756:0A3F:003D:529E
 */
void f__2756_0746_0079_674F()
{
	emu_push(emu_ds);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_pushf();
	emu_cli();
	emu_cld();
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x122), 0xFFFF);
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x124), 0xFFFF);
	emu_movw(&emu_si, 0x0);
	emu_movw(&emu_bx.x, emu_si);
	emu_shlw(&emu_bx.x, 0x1);
	emu_cmpws(&emu_get_memory16(emu_cs, emu_bx.x,  0x6E), 0x0);
	if (emu_flags.zf) { f__2756_078E_0031_5C6A(); return; }
	emu_shlw(&emu_bx.x, 0x1);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_cs, emu_bx.x,  0xD4));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_cs, emu_bx.x,  0xD6));
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_cs, 0x00,  0x124));
	if (emu_flags.cf) { f__2756_0785_003A_9A0F(); return; }
	if (!(emu_flags.cf || emu_flags.zf)) { emu_ip = 0x078E; emu_last_cs = 0x2756; emu_last_ip = 0x077C; emu_last_length = 0x0079; emu_last_crc = 0x674F; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_cs, 0x00,  0x122));
	if (!emu_flags.cf) { emu_ip = 0x078E; emu_last_cs = 0x2756; emu_last_ip = 0x0783; emu_last_length = 0x0079; emu_last_crc = 0x674F; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x122), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x124), emu_dx.x);
	emu_incw(&emu_si);
	emu_cmpws(&emu_si, 0x10);
	if ((emu_flags.cf || emu_flags.zf)) { emu_ip = 0x075D; emu_last_cs = 0x2756; emu_last_ip = 0x0792; emu_last_length = 0x0079; emu_last_crc = 0x674F; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_get_memory16(emu_cs, 0x00,  0x122));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_cs, 0x00,  0x124));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_cs, 0x00,  0x118));
	if (!emu_flags.zf) { emu_ip = 0x07AB; emu_last_cs = 0x2756; emu_last_ip = 0x07A2; emu_last_length = 0x0079; emu_last_crc = 0x674F; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_cs, 0x00,  0x11A));
	if (emu_flags.zf) { emu_ip = 0x07CF; emu_last_cs = 0x2756; emu_last_ip = 0x07A9; emu_last_length = 0x0079; emu_last_crc = 0x674F; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x120), 0xFFFF);
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x118), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x11A), emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(0x07BF); emu_ip = 0x06D2; emu_last_cs = 0x2756; emu_last_ip = 0x07BC; emu_last_length = 0x0079; emu_last_crc = 0x674F; emu_call(); // Jump does not resolve
	f__2756_07BF_0017_C8EC();
}

/**
 * Decompiled function f__2756_075D_0062_6DA9()
 *
 * @name f__2756_075D_0062_6DA9
 * @implements 2756:075D:0062:6DA9 ()
 *
 * Called From: 2756:0792:0031:5C6A
 * Called From: 2756:0792:003A:9A0F
 */
void f__2756_075D_0062_6DA9()
{
	emu_movw(&emu_bx.x, emu_si);
	emu_shlw(&emu_bx.x, 0x1);
	emu_cmpws(&emu_get_memory16(emu_cs, emu_bx.x,  0x6E), 0x0);
	if (emu_flags.zf) { f__2756_078E_0031_5C6A(); return; }
	emu_shlw(&emu_bx.x, 0x1);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_cs, emu_bx.x,  0xD4));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_cs, emu_bx.x,  0xD6));
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_cs, 0x00,  0x124));
	if (emu_flags.cf) { f__2756_0785_003A_9A0F(); return; }
	if (!(emu_flags.cf || emu_flags.zf)) { emu_ip = 0x078E; emu_last_cs = 0x2756; emu_last_ip = 0x077C; emu_last_length = 0x0062; emu_last_crc = 0x6DA9; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_cs, 0x00,  0x122));
	if (!emu_flags.cf) { f__2756_078E_0031_5C6A(); return; }
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x122), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x124), emu_dx.x);
	emu_incw(&emu_si);
	emu_cmpws(&emu_si, 0x10);
	if ((emu_flags.cf || emu_flags.zf)) { emu_ip = 0x075D; emu_last_cs = 0x2756; emu_last_ip = 0x0792; emu_last_length = 0x0062; emu_last_crc = 0x6DA9; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_get_memory16(emu_cs, 0x00,  0x122));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_cs, 0x00,  0x124));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_cs, 0x00,  0x118));
	if (!emu_flags.zf) { emu_ip = 0x07AB; emu_last_cs = 0x2756; emu_last_ip = 0x07A2; emu_last_length = 0x0062; emu_last_crc = 0x6DA9; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_cs, 0x00,  0x11A));
	if (emu_flags.zf) { emu_ip = 0x07CF; emu_last_cs = 0x2756; emu_last_ip = 0x07A9; emu_last_length = 0x0062; emu_last_crc = 0x6DA9; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x120), 0xFFFF);
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x118), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x11A), emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(0x07BF); emu_ip = 0x06D2; emu_last_cs = 0x2756; emu_last_ip = 0x07BC; emu_last_length = 0x0062; emu_last_crc = 0x6DA9; emu_call(); // Jump does not resolve
	f__2756_07BF_0017_C8EC();
}

/**
 * Decompiled function f__2756_0785_003A_9A0F()
 *
 * @name f__2756_0785_003A_9A0F
 * @implements 2756:0785:003A:9A0F ()
 *
 * Called From: 2756:077A:0062:6DA9
 * Called From: 2756:077A:0079:674F
 */
void f__2756_0785_003A_9A0F()
{
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x122), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x124), emu_dx.x);
	emu_incw(&emu_si);
	emu_cmpws(&emu_si, 0x10);
	if ((emu_flags.cf || emu_flags.zf)) { f__2756_075D_0062_6DA9(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_cs, 0x00,  0x122));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_cs, 0x00,  0x124));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_cs, 0x00,  0x118));
	if (!emu_flags.zf) { f__2756_07AB_0014_AB9C(); return; }
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_cs, 0x00,  0x11A));
	if (emu_flags.zf) { emu_ip = 0x07CF; emu_last_cs = 0x2756; emu_last_ip = 0x07A9; emu_last_length = 0x003A; emu_last_crc = 0x9A0F; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x120), 0xFFFF);
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x118), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x11A), emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(0x07BF); emu_ip = 0x06D2; emu_last_cs = 0x2756; emu_last_ip = 0x07BC; emu_last_length = 0x003A; emu_last_crc = 0x9A0F; emu_call(); // Jump does not resolve
	f__2756_07BF_0017_C8EC();
}

/**
 * Decompiled function f__2756_078E_0031_5C6A()
 *
 * @name f__2756_078E_0031_5C6A
 * @implements 2756:078E:0031:5C6A ()
 *
 * Called From: 2756:0767:0062:6DA9
 * Called From: 2756:0767:0079:674F
 * Called From: 2756:0783:0062:6DA9
 */
void f__2756_078E_0031_5C6A()
{
	emu_incw(&emu_si);
	emu_cmpws(&emu_si, 0x10);
	if ((emu_flags.cf || emu_flags.zf)) { f__2756_075D_0062_6DA9(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_cs, 0x00,  0x122));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_cs, 0x00,  0x124));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_cs, 0x00,  0x118));
	if (!emu_flags.zf) { f__2756_07AB_0014_AB9C(); return; }
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_cs, 0x00,  0x11A));
	if (emu_flags.zf) { emu_ip = 0x07CF; emu_last_cs = 0x2756; emu_last_ip = 0x07A9; emu_last_length = 0x0031; emu_last_crc = 0x5C6A; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x120), 0xFFFF);
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x118), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x11A), emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(0x07BF); emu_ip = 0x06D2; emu_last_cs = 0x2756; emu_last_ip = 0x07BC; emu_last_length = 0x0031; emu_last_crc = 0x5C6A; emu_call(); // Jump does not resolve
	f__2756_07BF_0017_C8EC();
}

/**
 * Decompiled function f__2756_07AB_0014_AB9C()
 *
 * @name f__2756_07AB_0014_AB9C
 * @implements 2756:07AB:0014:AB9C ()
 *
 * Called From: 2756:07A2:0031:5C6A
 * Called From: 2756:07A2:003A:9A0F
 */
void f__2756_07AB_0014_AB9C()
{
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x120), 0xFFFF);
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x118), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x11A), emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(0x07BF); f__2756_06D2_0021_721C();
	f__2756_07BF_0017_C8EC();
}

/**
 * Decompiled function f__2756_07BF_0017_C8EC()
 *
 * @name f__2756_07BF_0017_C8EC
 * @implements 2756:07BF:0017:C8EC ()
 *
 * Called From: 2756:07BF:0014:AB9C
 */
void f__2756_07BF_0017_C8EC()
{
	emu_addws(&emu_sp, 0x2);
	emu_push(emu_cs);
	emu_pop(&emu_es);
	emu_movw(&emu_di, 0x90);
	emu_movw(&emu_cx.x, 0x22);
	emu_movw(&emu_ax.x, 0x0);
	emu_rep_stosw();
	emu_orb(&emu_bx.h, 0x0);
	emu_push(emu_cs);
	emu_push(0x07D6); f__2756_07D0_0001_019E();
	f__2756_07D6_0004_06FA();
}

/**
 * Decompiled function f__2756_07D0_0001_019E()
 *
 * @name f__2756_07D0_0001_019E
 * @implements 2756:07D0:0001:019E ()
 *
 * Called From: 2756:07D3:0017:C8EC
 */
void f__2756_07D0_0001_019E()
{

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	emu_popf();
	return;
}

/**
 * Decompiled function f__2756_07D6_0004_06FA()
 *
 * @name f__2756_07D6_0004_06FA
 * @implements 2756:07D6:0004:06FA ()
 *
 * Called From: 2756:07D6:0017:C8EC
 */
void f__2756_07D6_0004_06FA()
{
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_pop(&emu_ds);

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__2756_07DA_0048_EB73()
 *
 * @name f__2756_07DA_0048_EB73
 * @implements 2756:07DA:0048:EB73 ()
 *
 * Called From: 1DD7:039E:0008:344E
 */
void f__2756_07DA_0048_EB73()
{
	emu_push(emu_ds);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_push(emu_es);
	emu_pushf();
	emu_cli();
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x4), 0x0);
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x6), 0x0);
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x462), 0x0);
	emu_cld();
	emu_movw(&emu_ax.x, emu_cs);
	emu_movw(&emu_es, emu_ax.x);
	emu_movw(&emu_di, 0x128);
	emu_movw(&emu_cx.x, 0x20);
	emu_movw(&emu_ax.x, 0x0);
	emu_rep_stosw();
	emu_movw(&emu_di, 0x168);
	emu_movw(&emu_cx.x, 0x10);
	emu_movw(&emu_ax.x, 0xFFFF);
	emu_rep_stosw();
	emu_movw(&emu_di, 0x188);
	emu_movw(&emu_cx.x, 0x10);
	emu_movw(&emu_ax.x, 0x0);
	emu_rep_stosw();
	emu_orb(&emu_bx.h, 0x0);
	emu_push(emu_cs);
	emu_push(0x0822); f__2756_081C_0001_019E();
	f__2756_0822_0005_060A();
}

/**
 * Decompiled function f__2756_081C_0001_019E()
 *
 * @name f__2756_081C_0001_019E
 * @implements 2756:081C:0001:019E ()
 *
 * Called From: 2756:081F:0048:EB73
 */
void f__2756_081C_0001_019E()
{

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	emu_popf();
	return;
}

/**
 * Decompiled function f__2756_0822_0005_060A()
 *
 * @name f__2756_0822_0005_060A
 * @implements 2756:0822:0005:060A ()
 *
 * Called From: 2756:0822:0048:EB73
 */
void f__2756_0822_0005_060A()
{
	emu_pop(&emu_es);
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_pop(&emu_ds);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__2756_0827_0035_BC60()
 *
 * @name f__2756_0827_0035_BC60
 * @implements 2756:0827:0035:BC60 ()
 *
 * Called From: 1DD7:0404:000C:36A5
 */
void f__2756_0827_0035_BC60()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_ds);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_pushf();
	emu_cli();
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpws(&emu_bx.x, 0xFF);
	if (emu_flags.zf) { emu_ip = 0x0862; emu_last_cs = 0x2756; emu_last_ip = 0x0835; emu_last_length = 0x0035; emu_last_crc = 0xBC60; emu_call(); return; } // Jump does not resolve
	emu_shlw(&emu_bx.x, 0x1);
	emu_cmpws(&emu_get_memory16(emu_cs, emu_bx.x,  0x6E), 0x0);
	if (emu_flags.zf) { emu_ip = 0x0862; emu_last_cs = 0x2756; emu_last_ip = 0x083F; emu_last_length = 0x0035; emu_last_crc = 0xBC60; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_get_memory16(emu_cs, emu_bx.x,  0x6E), 0x0);
	emu_decw(&emu_get_memory16(emu_cs, 0x00,  0x4));
	if (!emu_flags.zf) { emu_ip = 0x0862; emu_last_cs = 0x2756; emu_last_ip = 0x084D; emu_last_length = 0x0035; emu_last_crc = 0xBC60; emu_call(); return; } // Jump does not resolve
	emu_push(emu_ax.x);
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0x2), 0x0);
	emu_pop(&emu_bp);
	emu_push(0x085C); f__2756_06A9_0015_95B5();
	f__2756_085C_0006_3E88();
}

/**
 * Decompiled function f__2756_085C_0006_3E88()
 *
 * @name f__2756_085C_0006_3E88
 * @implements 2756:085C:0006:3E88 ()
 *
 * Called From: 2756:085C:0035:BC60
 */
void f__2756_085C_0006_3E88()
{
	emu_addws(&emu_sp, 0x2);
	emu_push(0x0862); f__2756_0677_002D_7D27();
	f__2756_0862_0007_7676();
}

/**
 * Decompiled function f__2756_0862_0007_7676()
 *
 * @name f__2756_0862_0007_7676
 * @implements 2756:0862:0007:7676 ()
 *
 * Called From: 2756:0862:0006:3E88
 */
void f__2756_0862_0007_7676()
{
	emu_orb(&emu_bx.h, 0x0);
	emu_push(emu_cs);
	emu_push(0x0869); f__2756_0863_0001_019E();
	f__2756_0869_0005_0E1A();
}

/**
 * Decompiled function f__2756_0863_0001_019E()
 *
 * @name f__2756_0863_0001_019E
 * @implements 2756:0863:0001:019E ()
 *
 * Called From: 2756:0866:0007:7676
 */
void f__2756_0863_0001_019E()
{

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	emu_popf();
	return;
}

/**
 * Decompiled function f__2756_0869_0005_0E1A()
 *
 * @name f__2756_0869_0005_0E1A
 * @implements 2756:0869:0005:0E1A ()
 *
 * Called From: 2756:0869:0007:7676
 */
void f__2756_0869_0005_0E1A()
{
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
 * Decompiled function f__2756_0A05_003D_529E()
 *
 * @name f__2756_0A05_003D_529E
 * @implements 2756:0A05:003D:529E ()
 *
 * Called From: 2756:0AFC:0022:B6B0
 * Called From: 2756:0BBD:000C:A186
 */
void f__2756_0A05_003D_529E()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_ds);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_pushf();
	emu_cli();
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_shlw(&emu_bx.x, 0x1);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_cs, emu_bx.x,  0x6E));
	emu_push(emu_ax.x);
	emu_movw(&emu_get_memory16(emu_cs, emu_bx.x,  0x6E), 0x1);
	emu_shlw(&emu_bx.x, 0x1);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movw(&emu_get_memory16(emu_cs, emu_bx.x,  0xD4), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_cs, emu_bx.x,  0xD6), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_cs, emu_bx.x,  0x90), 0x0);
	emu_movw(&emu_get_memory16(emu_cs, emu_bx.x,  0x92), 0x0);
	emu_push(0x0A42); f__2756_0746_0079_674F();
	f__2756_0A42_0012_3E71();
}

/**
 * Decompiled function f__2756_0A42_0012_3E71()
 *
 * @name f__2756_0A42_0012_3E71
 * @implements 2756:0A42:0012:3E71 ()
 *
 * Called From: 2756:0A42:003D:529E
 */
void f__2756_0A42_0012_3E71()
{
	emu_pop(&emu_ax.x);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_shlw(&emu_bx.x, 0x1);
	emu_movw(&emu_get_memory16(emu_cs, emu_bx.x,  0x6E), emu_ax.x);
	emu_orb(&emu_bx.h, 0x0);
	emu_push(emu_cs);
	emu_push(0x0A54); f__2756_0A4E_0001_019E();
	f__2756_0A54_0005_0E1A();
}

/**
 * Decompiled function f__2756_0A4E_0001_019E()
 *
 * @name f__2756_0A4E_0001_019E
 * @implements 2756:0A4E:0001:019E ()
 *
 * Called From: 2756:0A51:0012:3E71
 */
void f__2756_0A4E_0001_019E()
{

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	emu_popf();
	return;
}

/**
 * Decompiled function f__2756_0A54_0005_0E1A()
 *
 * @name f__2756_0A54_0005_0E1A
 * @implements 2756:0A54:0005:0E1A ()
 *
 * Called From: 2756:0A54:0012:3E71
 */
void f__2756_0A54_0005_0E1A()
{
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
 * Decompiled function f__2756_0A59_0023_EC9F()
 *
 * @name f__2756_0A59_0023_EC9F
 * @implements 2756:0A59:0023:EC9F ()
 *
 * Called From: 1DD7:03CC:000C:8159
 * Called From: 2756:0B0D:0011:E709
 */
void f__2756_0A59_0023_EC9F()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_ds);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_pushf();
	emu_cli();
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_shlw(&emu_bx.x, 0x1);
	emu_cmpws(&emu_get_memory16(emu_cs, emu_bx.x,  0x6E), 0x1);
	if (!emu_flags.zf) { emu_ip = 0x0A75; emu_last_cs = 0x2756; emu_last_ip = 0x0A6C; emu_last_length = 0x0023; emu_last_crc = 0xEC9F; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_get_memory16(emu_cs, emu_bx.x,  0x6E), 0x2);
	emu_orb(&emu_bx.h, 0x0);
	emu_push(emu_cs);
	emu_push(0x0A7C); f__2756_0A76_0001_019E();
	f__2756_0A7C_0005_0E1A();
}

/**
 * Decompiled function f__2756_0A76_0001_019E()
 *
 * @name f__2756_0A76_0001_019E
 * @implements 2756:0A76:0001:019E ()
 *
 * Called From: 2756:0A79:0023:EC9F
 */
void f__2756_0A76_0001_019E()
{

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	emu_popf();
	return;
}

/**
 * Decompiled function f__2756_0A7C_0005_0E1A()
 *
 * @name f__2756_0A7C_0005_0E1A
 * @implements 2756:0A7C:0005:0E1A ()
 *
 * Called From: 2756:0A7C:0023:EC9F
 */
void f__2756_0A7C_0005_0E1A()
{
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
 * Decompiled function f__2756_0A81_0022_8379()
 *
 * @name f__2756_0A81_0022_8379
 * @implements 2756:0A81:0022:8379 ()
 *
 * Called From: 1DD7:03AB:000D:700D
 */
void f__2756_0A81_0022_8379()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_ds);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_pushf();
	emu_cli();
	emu_movw(&emu_cx.x, emu_ds);
	emu_movw(&emu_bx.x, 0x0);
	emu_cmpws(&emu_get_memory16(emu_cs, emu_bx.x,  0x6E), 0x0);
	if (emu_flags.zf) { f__2756_0AA3_0030_8DFD(); return; }
	emu_addws(&emu_bx.x, 0x2);
	emu_cmpws(&emu_bx.x, 0x20);
	if (emu_flags.cf) { emu_ip = 0x0A8E; emu_last_cs = 0x2756; emu_last_ip = 0x0A9C; emu_last_length = 0x0022; emu_last_crc = 0x8379; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, 0xFFFF);
	emu_ip = 0x0B1F; emu_last_cs = 0x2756; emu_last_ip = 0x0AA1; emu_last_length = 0x0022; emu_last_crc = 0x8379; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__2756_0AA3_0030_8DFD()
 *
 * @name f__2756_0AA3_0030_8DFD
 * @implements 2756:0AA3:0030:8DFD ()
 *
 * Called From: 2756:0A94:0022:8379
 */
void f__2756_0AA3_0030_8DFD()
{
	emu_movw(&emu_ax.x, emu_bx.x);
	emu_shrw(&emu_ax.x, 0x1);
	emu_movw(&emu_get_memory16(emu_cs, emu_bx.x,  0x6E), 0x1);
	emu_movw(&emu_get_memory16(emu_cs, emu_bx.x,  0x4C), emu_cx.x);
	emu_shlw(&emu_bx.x, 0x1);
	emu_lfp(&emu_ds, &emu_si, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_cs, emu_bx.x,  0x8), emu_si);
	emu_movw(&emu_get_memory16(emu_cs, emu_bx.x,  0xA), emu_ds);
	emu_incw(&emu_get_memory16(emu_cs, 0x00,  0x4));
	emu_cmpws(&emu_get_memory16(emu_cs, 0x00,  0x4), 0x1);
	if (!emu_flags.zf) { emu_ip = 0x0B1F; emu_last_cs = 0x2756; emu_last_ip = 0x0ACD; emu_last_length = 0x0030; emu_last_crc = 0x8DFD; emu_call(); return; } // Jump does not resolve
	emu_push(emu_ax.x);
	emu_push(0x0AD3); f__2756_05E6_0038_747E();
	f__2756_0AD3_000A_70A7();
}

/**
 * Decompiled function f__2756_0AD3_000A_70A7()
 *
 * @name f__2756_0AD3_000A_70A7
 * @implements 2756:0AD3:000A:70A7 ()
 *
 * Called From: 2756:0AD3:0030:8DFD
 */
void f__2756_0AD3_000A_70A7()
{
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x8E), 0x1);
	emu_push(0x0ADD); f__2756_0629_0049_299E();
	f__2756_0ADD_0022_B6B0();
}

/**
 * Decompiled function f__2756_0ADD_0022_B6B0()
 *
 * @name f__2756_0ADD_0022_B6B0
 * @implements 2756:0ADD:0022:B6B0 ()
 *
 * Called From: 2756:0ADD:000A:70A7
 */
void f__2756_0ADD_0022_B6B0()
{
	emu_push(emu_ax.x);
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0x2), 0x0);
	emu_pop(&emu_bp);
	emu_push(emu_ax.x);
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0x2), 0xD68D);
	emu_pop(&emu_bp);
	emu_push(emu_ax.x);
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0x2), 0x10);
	emu_pop(&emu_bp);
	emu_push(emu_cs);
	emu_push(0x0AFF); f__2756_0A05_003D_529E();
	f__2756_0AFF_0011_E709();
}

/**
 * Decompiled function f__2756_0AFF_0011_E709()
 *
 * @name f__2756_0AFF_0011_E709
 * @implements 2756:0AFF:0011:E709 ()
 *
 * Called From: 2756:0AFF:0022:B6B0
 */
void f__2756_0AFF_0011_E709()
{
	emu_addws(&emu_sp, 0x6);
	emu_push(emu_ax.x);
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0x2), 0x10);
	emu_pop(&emu_bp);
	emu_push(emu_cs);
	emu_push(0x0B10); f__2756_0A59_0023_EC9F();
	f__2756_0B10_0016_ADF2();
}

/**
 * Decompiled function f__2756_0B10_0016_ADF2()
 *
 * @name f__2756_0B10_0016_ADF2
 * @implements 2756:0B10:0016:ADF2 ()
 *
 * Called From: 2756:0B10:0011:E709
 */
void f__2756_0B10_0016_ADF2()
{
	emu_addws(&emu_sp, 0x2);
	emu_pop(&emu_ax.x);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_shlw(&emu_bx.x, 0x1);
	emu_movw(&emu_get_memory16(emu_cs, emu_bx.x,  0x6E), 0x1);
	emu_orb(&emu_bx.h, 0x0);
	emu_push(emu_cs);
	emu_push(0x0B26); f__2756_0B20_0001_019E();
	f__2756_0B26_0005_0E1A();
}

/**
 * Decompiled function f__2756_0B20_0001_019E()
 *
 * @name f__2756_0B20_0001_019E
 * @implements 2756:0B20:0001:019E ()
 *
 * Called From: 2756:0B23:0016:ADF2
 */
void f__2756_0B20_0001_019E()
{

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	emu_popf();
	return;
}

/**
 * Decompiled function f__2756_0B26_0005_0E1A()
 *
 * @name f__2756_0B26_0005_0E1A
 * @implements 2756:0B26:0005:0E1A ()
 *
 * Called From: 2756:0B26:0016:ADF2
 */
void f__2756_0B26_0005_0E1A()
{
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
 * Decompiled function f__2756_0B8F_0025_4377()
 *
 * @name f__2756_0B8F_0025_4377
 * @implements 2756:0B8F:0025:4377 ()
 *
 * Called From: 1DD7:03C0:0015:4558
 */
void f__2756_0B8F_0025_4377()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_ds);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_pushf();
	emu_cli();
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_ax.x);
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0x2), 0xF);
	emu_pop(&emu_bp);
	emu_push(emu_ax.x);
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0x2), 0x4240);
	emu_pop(&emu_bp);
	emu_push(0x0BB4); f__2756_06FB_0042_3C9C();
	f__2756_0BB4_000C_A186();
}

/**
 * Decompiled function f__2756_0BB4_000C_A186()
 *
 * @name f__2756_0BB4_000C_A186
 * @implements 2756:0BB4:000C:A186 ()
 *
 * Called From: 2756:0BB4:0025:4377
 */
void f__2756_0BB4_000C_A186()
{
	emu_addws(&emu_sp, 0x8);
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x0BC0); f__2756_0A05_003D_529E();
	f__2756_0BC0_000A_F475();
}

/**
 * Decompiled function f__2756_0BC0_000A_F475()
 *
 * @name f__2756_0BC0_000A_F475
 * @implements 2756:0BC0:000A:F475 ()
 *
 * Called From: 2756:0BC0:000C:A186
 */
void f__2756_0BC0_000A_F475()
{
	emu_addws(&emu_sp, 0x6);
	emu_orb(&emu_bx.h, 0x0);
	emu_push(emu_cs);
	emu_push(0x0BCA); f__2756_0BC4_0001_019E();
	f__2756_0BCA_0005_0E1A();
}

/**
 * Decompiled function f__2756_0BC4_0001_019E()
 *
 * @name f__2756_0BC4_0001_019E
 * @implements 2756:0BC4:0001:019E ()
 *
 * Called From: 2756:0BC7:000A:F475
 */
void f__2756_0BC4_0001_019E()
{

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	emu_popf();
	return;
}

/**
 * Decompiled function f__2756_0BCA_0005_0E1A()
 *
 * @name f__2756_0BCA_0005_0E1A
 * @implements 2756:0BCA:0005:0E1A ()
 *
 * Called From: 2756:0BCA:000A:F475
 */
void f__2756_0BCA_0005_0E1A()
{
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
 * Decompiled function f__2756_0E36_0006_25D4()
 *
 * @name f__2756_0E36_0006_25D4
 * @implements 2756:0E36:0006:25D4 ()
 *
 * Called From: 1DD7:01F9:0013:AA5A
 */
void f__2756_0E36_0006_25D4()
{
	emu_movw(&emu_ax.x, 0x7C);
	f__2756_04F8_0009_FC33(); return;
}

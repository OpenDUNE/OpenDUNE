/** @file saturn/common/saturn_hw.h Sega Saturn hardware registers used by the port. */

#ifndef SATURN_HW_H
#define SATURN_HW_H

#include <stdint.h>

#define REG8(a)  (*(volatile uint8_t  *)(a))
#define REG16(a) (*(volatile uint16_t *)(a))
#define REG32(a) (*(volatile uint32_t *)(a))

/* VDP2 (VDP2 User's Manual, register map: 0x25F80000 + offset) */
#define VDP2_VRAM       0x25E00000UL
#define VDP2_CRAM       0x25F00000UL
#define VDP2_REG(off)   REG16(0x25F80000UL + (off))

#define VDP2_TVMD       VDP2_REG(0x000)
#define VDP2_TVSTAT     VDP2_REG(0x004)
#define VDP2_RAMCTL     VDP2_REG(0x00E)
#define VDP2_CYCA0L     VDP2_REG(0x010)
#define VDP2_CYCA0U     VDP2_REG(0x012)
#define VDP2_CYCA1L     VDP2_REG(0x014)
#define VDP2_CYCA1U     VDP2_REG(0x016)
#define VDP2_CYCB0L     VDP2_REG(0x018)
#define VDP2_CYCB0U     VDP2_REG(0x01A)
#define VDP2_CYCB1L     VDP2_REG(0x01C)
#define VDP2_CYCB1U     VDP2_REG(0x01E)
#define VDP2_BGON       VDP2_REG(0x020)
#define VDP2_CHCTLA     VDP2_REG(0x028)
#define VDP2_BMPNA      VDP2_REG(0x02C)
#define VDP2_MPOFN      VDP2_REG(0x03C)
#define VDP2_SCXIN0     VDP2_REG(0x070)
#define VDP2_SCXDN0     VDP2_REG(0x072)
#define VDP2_SCYIN0     VDP2_REG(0x074)
#define VDP2_SCYDN0     VDP2_REG(0x076)
#define VDP2_ZMXIN0     VDP2_REG(0x078)
#define VDP2_ZMXDN0     VDP2_REG(0x07A)
#define VDP2_ZMYIN0     VDP2_REG(0x07C)
#define VDP2_ZMYDN0     VDP2_REG(0x07E)
#define VDP2_SCXIN1     VDP2_REG(0x080)
#define VDP2_SCXDN1     VDP2_REG(0x082)
#define VDP2_SCYIN1     VDP2_REG(0x084)
#define VDP2_SCYDN1     VDP2_REG(0x086)
#define VDP2_ZMXIN1     VDP2_REG(0x088)
#define VDP2_ZMXDN1     VDP2_REG(0x08A)
#define VDP2_ZMYIN1     VDP2_REG(0x08C)
#define VDP2_ZMYDN1     VDP2_REG(0x08E)
#define VDP2_BKTAU      VDP2_REG(0x0AC)
#define VDP2_BKTAL      VDP2_REG(0x0AE)
#define VDP2_CRAOFA     VDP2_REG(0x0E4)
#define VDP2_SPCTL      VDP2_REG(0x0E0)
#define VDP2_PRISA      VDP2_REG(0x0F0)
#define VDP2_PRISB      VDP2_REG(0x0F2)
#define VDP2_PRISC      VDP2_REG(0x0F4)
#define VDP2_PRISD      VDP2_REG(0x0F6)
#define VDP2_PRINA      VDP2_REG(0x0F8)

#define VDP2_TVSTAT_VBLANK  0x0008
#define VDP2_TVSTAT_PAL     0x0001

/* Colour RAM mode 0: 1024 entries, 0BBBBBGGGGGRRRRR */
#define RGB555(r, g, b) ((uint16_t)((((b) & 0x1F) << 10) | (((g) & 0x1F) << 5) | ((r) & 0x1F)))

/* SMPC (SMPC User's Manual: byte registers on odd addresses) */
#define SMPC_IREG(n)    REG8(0x20100001UL + 2 * (n))
#define SMPC_COMREG     REG8(0x2010001FUL)
#define SMPC_OREG(n)    REG8(0x20100021UL + 2 * (n))
#define SMPC_SR         REG8(0x20100061UL)
#define SMPC_SF         REG8(0x20100063UL)

#define SMPC_CMD_SSHOFF     0x03 /*!< slave SH-2 off */
#define SMPC_CMD_INTBACK    0x10
#define SMPC_CMD_RESENAB    0x19 /*!< reset button on */
#define SMPC_CMD_RESDISA    0x1A /*!< reset button off */
#define SMPC_SR_PDE         0x20 /*!< peripheral data remaining */

/* Saturn standard pad, SMPC Table 3.10 (bits are active low in hardware;
 * the values below are after inversion, 1 = pressed). */
#define PAD_RIGHT   0x8000
#define PAD_LEFT    0x4000
#define PAD_DOWN    0x2000
#define PAD_UP      0x1000
#define PAD_START   0x0800
#define PAD_A       0x0400
#define PAD_C       0x0200
#define PAD_B       0x0100
#define PAD_R       0x0080
#define PAD_X       0x0040
#define PAD_Y       0x0020
#define PAD_Z       0x0010
#define PAD_L       0x0008

#endif /*!< SATURN_HW_H */

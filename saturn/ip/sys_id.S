/* saturn/ip/sys_id.S - System ID, the first 256 bytes of IP.BIN.
 *
 * Layout from SBL6 SEGASMP/SYS/SYS_ID.SRC. The IP size field (0xE0) is
 * filled in by ip.ld. */

	.section .sysid, "a"

	.ascii	"SEGA SEGASATURN "	/* 00: hardware identifier (fixed) */
	.ascii	"SEGA TP OPENDUNE"	/* 10: maker ID */
	.ascii	"T-DUNE2   "		/* 20: product number (10) */
	.ascii	"V0.001"		/* 2A: version (6) */
	.ascii	"20260930"		/* 30: release date YYYYMMDD */
	.ascii	"CD-1/1  "		/* 38: device information */
	.ascii	"JTUE      "		/* 40: compatible areas (10) */
	.ascii	"      "		/* 4A: spaces (6) */
	.ascii	"JAMK            "	/* 50: peripherals: pad, analog, mouse, keyboard */
	.ascii	"OPENDUNE        "	/* 60: title (112) */
	.ascii	"                "
	.ascii	"                "
	.ascii	"                "
	.ascii	"                "
	.ascii	"                "
	.ascii	"                "
	.long	0, 0, 0, 0		/* D0: reserved */
	.long	__ip_size		/* E0: IP size */
	.long	0			/* E4: reserved */
	.long	0			/* E8: master stack (0 = default) */
	.long	0			/* EC: slave stack (0 = default) */
	.long	0x06004000		/* F0: 1st read address */
	.long	0			/* F4: 1st read size (ignored for CD) */
	.long	0, 0			/* F8: reserved */

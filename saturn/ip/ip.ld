/* saturn/ip/ip.ld - IP.BIN layout (SBL6 SEGASMP/SYS/SMPSYS.CFG order).
 *
 * The BIOS loads IP.BIN at 0x06002000. Order is mandatory:
 *   System ID (0x100), security code (sys_sec, 0xD00), area codes
 *   (sys_are?, 0x20 each), sys_init (0x80), application initial program.
 * The Sega objects are COFF and are converted to ELF by the Makefile. */

OUTPUT_FORMAT("elf32-sh")
OUTPUT_ARCH(sh)
ENTRY(__ip_start)

SECTIONS
{
	.ip 0x06002000 : {
		__ip_start = .;
		KEEP(*sys_id.o(.sysid))
		KEEP(*sys_sec.o(.text))
		KEEP(*sys_arej.o(.text))
		KEEP(*sys_aret.o(.text))
		KEEP(*sys_areu.o(.text))
		KEEP(*sys_aree.o(.text))
		KEEP(*sys_init.o(.text))
		KEEP(*app_init.o(.app_init))
		/* IP size must be 0x1000..0x8000 */
		. = MAX(ALIGN(4), __ip_start + 0x1000);
		__ip_end = .;
	}

	__ip_size = __ip_end - __ip_start;

	/DISCARD/ : { *(*) }
}

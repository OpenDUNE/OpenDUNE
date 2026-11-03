/* saturn/common/saturn.ld - layout of the 1st read file in high work RAM.
 *
 * 0x06000000-0x06003FFF  BIOS work area + IP.BIN (loaded at 0x06002000)
 * 0x06004000-...         this program (.text, .rodata, .data, .bss), then heap
 * ...-0x06100000         master SH-2 stack, growing down */

OUTPUT_FORMAT("elf32-sh")
OUTPUT_ARCH(sh)
ENTRY(start)

MEMORY
{
	hwram (rwx) : ORIGIN = 0x06004000, LENGTH = 0x000FC000
}

SECTIONS
{
	.text : {
		KEEP(*(.text.start))
		*(.text .text.*)
	} > hwram

	.rodata : ALIGN(4) {
		*(.rodata .rodata.*)
	} > hwram

	.data : ALIGN(4) {
		*(.data .data.*)
		*(.sdata .sdata.*)
	} > hwram

	/* C++ static constructors, run by saturn_start() */
	.init_array : ALIGN(4) {
		__init_array_start = .;
		KEEP(*(SORT(.init_array.*)))
		KEEP(*(.init_array .ctors))
		__init_array_end = .;
	} > hwram

	.bss (NOLOAD) : ALIGN(4) {
		__bss_start = .;
		*(.bss .bss.*)
		*(.sbss .sbss.*)
		*(COMMON)
		. = ALIGN(4);
		__bss_end = .;
	} > hwram

	__heap_start = ALIGN(16);
	__stack_top = 0x06100000;

	/DISCARD/ : { *(.comment) *(.note.*) }
}


OUTPUT_FORMAT("elf32-littlearm", "elf32-bigarm", "elf32-littlearm")
OUTPUT_ARCH(arm)
ENTRY(_Reset)
SECTIONS
{
	. = 0x00100000;

	. = ALIGN(4);
	.text :
	{
		__text_start = .;  	
		bootloader.o (.text*)
		*(.text*)
	}

	. = ALIGN(4);
	.data :
	{ 
		*(.data) 
	}

	. = ALIGN(4);
	.rel.dyn :
	{
		*(.__rel_dyn_start)
		*(.rel*)
		*(.rel.*)
		*(.__rel_dyn_end)
	}

	__code_end = .;

	. = ALIGN(4);	
	.bss :
	{ 
		*(.__bss_start)
		*(.bss COMMON) 
		*(.__bss_end)
	}
	__end__ = .;
}

ENTRY(multiboot_entry)
OUTPUT_FORMAT(elf64-x86-64)

SECTIONS {
    . = 1M;

    .rodata : ALIGN(4K)
    {
        *(.multiboot)
        *(.rodata)
    }

    .text : ALIGN(4K)
    {
        *(.text)
    }
    
    .data : ALIGN(4K)
    {
        *(.data)
    }

    .bss : ALIGN(4K)
    {
        *(.bss)
    }

    /DISCARD/ :
    {
        *(.comment)
        *(.eh_frame)
        *(.note.gnu.build-id)
    }
}
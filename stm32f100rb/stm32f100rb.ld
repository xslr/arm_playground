MEMORY
{
        rom (rx) :  ORIGIN = 0x00000000, LENGTH = 128K
        ram (rwx) : ORIGIN = 0x20000000, LENGTH = 8K
}

ENTRY(reset_init)

SECTIONS
{
        . = 0x0;

        .text :
        {
                *(.vectors)
                . = ALIGN(4);
                *(.text.*)
                *(.text)
                *(.rodata)
        } > rom

        . = 0x20000000;
        .data :
        {
                *(.data)
        } > ram AT > rom

        .bss :
        {
                *(.bss)
        } > ram AT > rom

}

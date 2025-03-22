ENTRY(reset_handler)

/* Put stack right at the end of RAM. */
_estack = ORIGIN(RAM) + LENGTH(RAM);

MEMORY
{
    FLASH(rx):ORIGIN =0x08000000,LENGTH =128K
    RAM(rwx):ORIGIN =0x20000000,LENGTH =32K
}

SECTIONS
{

    .isr_vector :
    {
        . = ALIGN(4);
        KEEP(*(.isr_vector))
        . = ALIGN(4);
    }> FLASH

    .text :
    {
        . = ALIGN(4);
        *(.text)
        *(.text.*)
        *(.init)
        *(.fini)
        . = ALIGN(4);
        _etext = .;
    }> FLASH

    .text :
    {
        . = ALIGN(4);
        *(.rodata)
        *(.rodata.*)
        . = ALIGN(4);
        _etext = .;
    }> FLASH

    _la_data = LOADADDR(.data);

    .data :
    {
        _sdata = .;
        *(.data)
        *(.data.*)
        . = ALIGN(4);
        _edata = .;
    }> RAM AT> FLASH

    .bss :
    {
        _sbss = .;
        __bss_start__ = _sbss;
        *(.bss)
        *(.bss.*)
        *(COMMON)
        . = ALIGN(4);
        _ebss = .;
        __bss_end__ = _ebss;
        . = ALIGN(4);
        end = .;
        __end__ = .;
    }> RAM

}
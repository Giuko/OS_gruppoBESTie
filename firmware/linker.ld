ENTRY(_start)

/* SECTIONS directive defines the memory regions of the program */
SECTIONS
{
    /* text section (code)*/
    .text : { *(.text*) } 		
    /* data section, initialized variables */
    .data : { *(.data) }
    /* bss section, uninitialized variables */
    .bss : { *(.bss*) }
    /* stack section */
    /* The stack is placed at the end of the RAM */
    stack_top = 0x204BFFFF;
}


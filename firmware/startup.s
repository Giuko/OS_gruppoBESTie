.word __StackTop     // Address of the stack_top
.word Reset_Handler        // Address of the _start function

// The thumb_func is used to make sure the function is in thumb mode,
// which is required for the Cortex-M0+.
.thumb_func 

.global Reset_Handler

Reset_Handler:
    mov r0, #0x5
    BL main
    B .


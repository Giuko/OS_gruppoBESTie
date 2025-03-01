.word stack_top     // Address of the stack_top
.word _start        // Address of the _start function

// The thumb_func is used to make sure the function is in thumb mode,
// which is required for the Cortex-M0+.
.thumb_func 

.global _start

_start:
    mov r0, #0x5
    BL main
    B .


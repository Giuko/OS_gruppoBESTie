#include "uart.h"
int main(void) {
    int i = 0;
    UART_init();
    UART_printf("Hello World\n");
    return 0;
}



#include "uart.h"
#include "adc.h"
#include <stdio.h>
#include <stdint.h>


int main(void) {
    char message[32];
    
    
    UART_init();
    ADC_init();
    for(int i=0; i<5; i++){
        sprintf(message, "prova %d\n", ADC_read());
        UART_printf(message);
    }
    UART_printf("Hello World\n");
    return 0;
}



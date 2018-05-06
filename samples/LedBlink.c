/*
 * Led Blink example on PIC16F84A.
 *
 */
#include <xc.h>
#include <pic16f84a.h>

#define _XTAL_FREQ 1000000 // 1Mhz

void main() {
    
    TRISB = 0x00;

    while(1) {
        PORTB = 0x01;
        __delay_ms(250);
        PORTB = 0x00;
        __delay_ms(250);
    }

    
}
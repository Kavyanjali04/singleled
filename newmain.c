

#include <xc.h>
#define _XTAL_FREQ 20000000//20Hz
int main(){
    TRISB = 0;
    PORTB = 0x00;
    while(1){
        PORTB = 0x01;
        __delay_ms(1000);
        PORTB = 0x02;
        __delay_ms(1000);
        PORTB = 0x04;
        __delay_ms(1000);
    }
    return 0;
}


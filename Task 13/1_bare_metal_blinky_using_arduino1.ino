#define F_CPU 16000000UL  
#include <avr/io.h>       
#include <util/delay.h>   
int main(void)
{
    // Set pin 7 (PD7) as an output
    DDRD |= (1 << PD7);
    while (1)
    {
        PORTD |= (1 << PD7);
        _delay_ms(1000);
        PORTD &= ~(1 << PD7);
        _delay_ms(1000);
    }
    return 0;
}

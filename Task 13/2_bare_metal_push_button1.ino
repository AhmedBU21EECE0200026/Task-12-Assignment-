#define F_CPU 16000000UL  
#include <avr/io.h>       
#include <util/delay.h>   
const uint8_t buttonPin = PD2;     
const uint8_t ledPin = PB5;       
uint8_t buttonState = 0;
void setup() {
    DDRD &= ~(1 << buttonPin); 
    PORTD |= (1 << buttonPin); 
    DDRB |= (1 << ledPin); 
}
int main(void) {
    setup();
    while (1) {
        buttonState = PIND & (1 << buttonPin); 
        if (buttonState) {
            PORTB |= (1 << ledPin);
        } else {
            PORTB &= ~(1 << ledPin);
        }
        _delay_ms(10); 
    }
    return 0;
}

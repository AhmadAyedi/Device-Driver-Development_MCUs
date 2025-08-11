#define F_CPU 16000000UL
#include <util/delay.h>  // Optional: for delay_ms if you want to use it


void setup() {
  // put your setup code here, to run once:
      DDRB |= (1 << 5); // set pin 13 as output


}

void loop() {
  // put your main code here, to run repeatedly:
    PORTB |= (1 << 5);  // turn LED on
    _delay_ms(500);
    PORTB &= ~(1 << 5); // turn LED off
    _delay_ms(1000);
}

// src/main.c

#define DDRB (*(volatile unsigned char *)0x24)
#define PORTB (*(volatile unsigned char *)0x25)

void delay(volatile unsigned long count)
{
  while (count--)
  {
    __asm__ __volatile__("nop");
  }
}

int main(void)
{
  DDRB |= (1 << 5); // Set PB5 (pin 13) as output

  while (1)
  {
    PORTB |= (1 << 5);  // LED ON
    delay(100000);      // crude delay, adjust if needed
    PORTB &= ~(1 << 5); // LED OFF
    delay(100000);
  }

  return 0;
}

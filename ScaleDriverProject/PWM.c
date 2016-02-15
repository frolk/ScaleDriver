#include <avr/io.h>
#include "BLdefComd.h"

void PWM_Init()
{
	DDRD = (1 << PORTD6); // set up pin portd6 like output
					
}


void PWM_PinValue()
{
	OCR0A = PWMvalue;
	PWMvalue = 0;
}

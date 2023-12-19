/*
 * main.c
 *
 * Created: 12/10/2023 5:02:55 PM
 *  Author: Vinic
 */ 

#define F_CPU 16000000

#include <xc.h>
#include <avr/io.h>
#include <util/delay.h>

#define led (1 << 5)

int main(void) {
	
	DDRB |= led;
	
    while(1) {
		PORTB ^= led;
		_delay_ms(500);
    }
}

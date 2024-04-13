
#ifndef REGISTER_H
#define REGISTER_H

#define Input 0 
#define  Output 1
#define Low 0
#define High 1
// Definitions for Port A
#define DDRA   (*((volatile unsigned char*)0x3A))
#define PINA   (*((volatile unsigned char*)0x39))
#define PORTA  (*((volatile unsigned char*)0x3B))

// Definitions for Port B
#define DDRB   (*((volatile unsigned char*)0x37))
#define PINB   (*((volatile unsigned char*)0x36))
#define PORTB  (*((volatile unsigned char*)0x38))

// Definitions for Port C
#define DDRC   (*((volatile unsigned char*)0x34))
#define PINC   (*((volatile unsigned char*)0x33))
#define PORTC  (*((volatile unsigned char*)0x35))

// Definitions for Port D
#define DDRD   (*((volatile unsigned char*)0x31))
#define PIND   (*((volatile unsigned char*)0x30))
#define PORTD  (*((volatile unsigned char*)0x32))

// Definitions for Port C
#define DDRC   (*((volatile unsigned char*)0x34))
#define PINC   (*((volatile unsigned char*)0x33))
#define PORTC  (*((volatile unsigned char*)0x35))

// Definitions for Port D
#define DDRD   (*((volatile unsigned char*)0x31))
#define PIND   (*((volatile unsigned char*)0x30))
#define PORTD  (*((volatile unsigned char*)0x32))
/*Pins*/
#define Pin0 0
#define Pin1 1
#define Pin2 2
#define Pin3 3
#define Pin4 4
#define Pin5 5
#define Pin6 6
#define Pin7 7
/*Groups*/
#define GroupA  1
#define GroupB  2
#define GroupC  3
#define GroupD  4

#endif /* REGISTER_H_ */
/*
 * PWM.c
 *
 * Created: 6/24/2023 3:15:35 PM
 * Author : Kirollos Gerges
 */ 
// PWM function that declare about Pulse width modulation from 0 to 255 and direction of motor 
void PWM(unsigned int i,unsigned char c)
{
	OCR0=i;   // OCRO register for PWM
	PORTC=c;   //For direction
}
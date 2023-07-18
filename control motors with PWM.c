/*
 * control motor with PWM.c
 *
 * Created: 6/24/2023 3:15:35 PM
 * Author : Kirollos Gerges
 */ 

#define F_CPU 16000000UL    //oscillator of MCU
#define sw_CW (PINB&(1<<0))  //declaration about input to move in clock wise direction of motor.
#define sw_CCW (PINB&(1<<1))  //declaration about input to move in Anti clock wise direction of motor.
#define sw_stop (PINB&(1<<2))   //declaration about input to stop motor
#include "prototypes.h"  // calling prototypes
u8 i=0;  // deceleration and initialization value with 0

int PROCESS(void)
{
	INPUT_MODULE(DDRB,1);  //PB1 input pin for  direction control 1
	INPUT_MODULE(DDRB,2);  //PB2 input pin for  direction control 2
	INPUT_MODULE(DDRB,3);  //PB3 Enable of PWM
	//DDRC=0xFF;  //Define as PORT C as an output port
	//i=0;   //Duty cycle determination
	//OCR0=i;    //for  duty cycle
	//TCCR0=0x61;   // phase correct PWM
	/*  Super loop to execute infinitely */
	while (1)
	{
		if(sw_CW == 0)            // In condition the clockwise button is pressed
		{
			PWM(128,0x01);  // 50% of duty cycle will be activate in Clock wise direction PWM(128/255=50%,"0000 0001")
		}
		
		else if (sw_CCW == 0 )     // In condition the Anti clockwise button is pressed
		{
			PWM(128,0x02);      // 50% of duty cycle will be activate in Anti Clock wise direction PWM(128/255=50%,"0000 0010")
		}
		
		else if(sw_stop == 0 )       // In condition the stop button is pressed
		{
			PWM(0,0x00);    // 0% of duty cycle will be activate in stop condition PWM(0/255=0%,"0000 0000")
		}

		
	}
}


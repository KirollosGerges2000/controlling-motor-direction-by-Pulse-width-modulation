/*
 * interrupts.c
 *
 * Created: 6/24/2023 3:15:35 PM
 * Author : Kirollos Gerges
 */ 
void interrupts (void)
{
	/*DDRB|=(1<<2);  
	//DDRD&=~(1<<2);
	//PORTD |=(1<<2);
	//GICR=(1<<INT0);  // Enable external INT 0 
	//MCUCR=0x02;  //Make interrupt0 negative edge triggered 
	//sei();   //Enable global interrupts */
}

/*ISR(INT0_vect)
{
i=i+10;	
}*/




/*int main(void)
{
while(1)	
{
	Timer0_PWM_Init(255);
	_delay_ms(3000);
	Timer0_PWM_Init(128);
	_delay_ms(3000);
	Timer0_PWM_Init(64);
	_delay_ms(3000);
	Timer0_PWM_Init(20);
	_delay_ms(3000);
}

	
}

void  Timer0_PWM_Init(unsigned int value)
{
	TCCR0=0x6A;   // fast PWM TCCR0=0x6A
DDRC=DDRC|(1<<0);  //Define as PORT C as an output port
	OCR0=value;
}*/
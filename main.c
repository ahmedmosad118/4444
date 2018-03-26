
#include <avr/io.h>
#include <avr/delay.h>
#include "Datatype.h"
#include "DIO_int.h"
#include "Bit_modification.h"

void main(void){
    DIO_vSerPinDirection(DIO_PORTA , DIO_PIN0 , DIO_OUTPUT);
    DIO_vSerPinDirection(DIO_PORTB , DIO_PIN1 , DIO_INPUT);
    DIO_vEnsblePullUpResistor(DIO_PORTB , DIO_PIN1 );



	while(1){

	    if(DIO_vGetPinValue( DIO_PORTB , DIO_PIN1)  == 0){
	    	DIO_vSetPinValue(DIO_PORTA , DIO_PIN0 , DIO_HIGH);
	      }
	    else if(DIO_vGetPinValue( DIO_PORTB , DIO_PIN1)  == 1){
	    	DIO_vSetPinValue(DIO_PORTA , DIO_PIN0 , DIO_LOW);
	      }
	}

}



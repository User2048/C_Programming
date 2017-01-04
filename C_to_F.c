/////////////////////////////////////////////////////////////
//
//	C_to_F
//
//	Converts an entered temperature in Centigrade into Farenheit
//
//	27th Jan 2016
//
/////////////////////////////////////////////////////////////

#include <stdio.h>

#define FREEZING_POINT 32.0f
#define SCALE_FACTOR (5.0f / 9.0f)

int main ( void )
{
	float cent = 0;
	float farn = 0;

	printf ( "Please enter a temperature in Centigrade\n");
	scanf ( "%f", &cent );
	
	farn = (cent / SCALE_FACTOR) + FREEZING_POINT;
	
	printf ( "The Farenheit equivalent of %.1f = %.1f Centigrade\n", cent, farn);
	
	return (0);
}
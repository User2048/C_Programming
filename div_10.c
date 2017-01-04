////////////////////////////////////////////////////////////////////////////////////////////
//
// div_10.c
//
// program from 'C Programming' book
//
////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

void main ()
{
	int i = 9384;
	
	do
	{
		printf( "%d ", i);
		i /= 10;
	} while ( i > 0 );
	
	printf ("\n");
	
	float j = 9384;
	
	do
	{
		printf( "%.45f\n ", j);
		j /= 10.0f;         // using .0f after the constant made no difference to the output
	} while ( j > 0 );
}
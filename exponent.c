///////////////////////////////////////////////////////////////
//
//   exponent.c
//
//   program to explore raising to powers in C
//
//   22 Feb 2016
//
///////////////////////////////////////////////////////////////

#include <stdio.h>
#include <math.h>

int main ( void )
{
	int i = 3;

	printf ( "%d raised to the power %d = %.3f using recursive multiplication \n", i, 3, (float) ( i * i * i ) );
    printf ( "%d raised to the power %d = %.3f using pow() \n", i, 3, pow ( i, 3 ));
}
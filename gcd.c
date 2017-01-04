///////////////////////////////////////////////////////////////////////
//
//   gcd.c
//
//   program to calculate the greatest common divisor of 2 numbers
//
//   AFN 14/06/2016
//
///////////////////////////////////////////////////////////////////////

#include <stdio.h>

int main()
{
	int m = 0, n = 0, swap = 1;

	for (;;)
	{
		swap = 1;
		printf ("\n\nplease enter two integers " );
		scanf ("%d%d", &m, &n );
		
		if ( m == 0  || n == 0 )
			return (1);

		if ( n > m )
		{
			swap = n;
			n = m;
			m = swap;
		}
		
			// at this point m >= n
			
		while ( swap != 0 )
		{
			swap = m % n ;
			m = n;
			n = swap;
		}
		
		printf ( "\nThe Greatest Common Divisor is: %d", m );
	}
}
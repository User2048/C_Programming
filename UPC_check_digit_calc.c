/////////////////////////////////////////////////////////////////
//
//   UPC_check_digit_calc.c
//
//   Program to caculate the check digit for a US product code
//
//   7th Feb 2016
//
/////////////////////////////////////////////////////////////////

#include <stdio.h>

int main (void)
{
	int a;
	int b1, b2, b3, b4, b5;
	int c1, c2, c3, c4, c5;
	int temp1, temp2;
	int check_val;
	
	printf ("Please enter the first digit: ");
	scanf ( "%d", &a);
	
	printf ( "and the second group of five digits: " );
	scanf ( "%1d%1d%1d%1d%1d", &b1, &b2, &b3, &b4, &b5 );
	
	printf ( " and finally the third group of five digits: " );
	scanf ( "%1d%1d%1d%1d%1d", &c1, &c2, &c3, &c4, &c5 );
	
	printf ( " \n\nYou entered %d, %d, %d ", a, (b1 * 10000) + (b2 * 1000) + (b3 * 100) + (b4 * 10) + b5, (c1 * 10000) + (c2 * 1000) + (c3 * 100) + (c4 * 10) + c5 );
	
	temp1 = a + b2 + b4 + c1 + c3 + c5;
	temp2 = b1 + b3 + b5 + c2 + c4;
	
	check_val = 9 - (((( temp1 * 3 ) + temp2 ) - 1 ) % 10 );
	
	printf ( "\n\nCheck value = %d", check_val );
	
	
	return (0);
}
///////////////////////////////////////////////////////////////////
//
//   digit_swap.c
//
//   program to reverse the digits of a 2 digit number.
//
//   29 Feb 2016
//
///////////////////////////////////////////////////////////////////

#include <stdio.h>

int main ()
{
   int num = 0;
   
   printf ( "Please input a 2 digit number " );
   scanf ( "%d", &num );
   
   printf ( "reversed this becomes %d%d \n", num % 10, (num - ( num % 10 )) /10 );
   
   return ( 0 );
   
}
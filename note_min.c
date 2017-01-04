////////////////////////////////////////////////////////////
//
//   note_min
//
//   caluclates the smallest number of notes used to pay
//   a £ amount
//
//   28 Jan 2016
//
////////////////////////////////////////////////////////////

#include <stdio.h>

int main ( void )
{
   int total_amount = 0;

   printf ( "Please enter an amount in whole £s " );
   scanf ( "%d", &total_amount );
   
   printf ( "\nUse the following notes to pay a total of £%d\n", total_amount );
   
   printf ( "\n £20 notes: %d", total_amount / 20 );
   total_amount = total_amount % 20;
   
   printf ( "\n £10 notes: %d", total_amount / 10 );
   total_amount = total_amount % 10 ;
   
   printf ( "\n £5 notes: %d", total_amount / 5 );
   total_amount = total_amount % 5 ;
   
   printf ( "\n £1 coins: %d", total_amount );

   return (0);
	  
}
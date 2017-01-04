///////////////////////////////////////////////////////////
//
//   select.c
//
//   test mule for selection statements starting with 'if'
//   and 'bool' types
//
//   13/03/16
//
///////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdbool.h>

int main ()
{
   bool test = false;
   const char* result[2];
   
   result[0] = "false";
   result[1] = "true";
   
   printf ("Enter a number ");
   
   scanf ("%d", &test);
   
   printf ("\n Your number was logically %d", test);
   printf ("\n or more accurately %s", test ? result[1] : result[0] );
   
   return(true);

}
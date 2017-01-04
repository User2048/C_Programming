///////////////////////////////////////////////////////////////
//
//   sphere_vol
//
//   Program to calculate the volume of a sphere from its radius
//
//   28 Jan 2016
//
///////////////////////////////////////////////////////////////

#include <stdio.h>

#define PI 3.142f

int main (void)
{
   float radius = 0;

   printf ( "Please enter the radius of a sphere:" );
   scanf ( "%f", &radius );
   
   printf ( "\nThe volume of a sphere radius %.3f is %.3f ", radius, ( 4.0f / 3.0f ) * PI * radius * radius * radius );
   
   return (0);

}
/////////////////////////////////////////////////////////
//
//   dim_weight.c
//
//   program to calcualte the dimensional weight of a
//   package from input valuse
//
//   26 Jan 2016
//
/////////////////////////////////////////////////////////

#include <stdio.h>

int main (void)
{
	float width = 0, height = 0, depth = 0;
	
	printf ("Please enter the dimensions of your package 'w x h x d'\n");
	printf (" width:");
	scanf ("%f", &width);
	printf (" height:");
	scanf ("%f", &height);
	printf(" depth:");
	scanf ("%f%", &depth);
	
	printf ("\nThe volume of your package = %.2f", width * height * depth);
	
	return(0);
}
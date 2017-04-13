// Use of putchar instead of printf

#include <string.h>
#include <stdio.h>

void main ()
{
int i;
char message[] = "printed with putchar! \n";

for (i=0; i<sizeof(message); i++)
{
   putchar( *(message + i) );
}

}

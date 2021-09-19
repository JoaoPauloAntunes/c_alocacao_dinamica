// ex_ponteiro.c

#include <stdlib.h>
#include <stdio.h>


int main (void) {
   int i; 
   int *p;

   i = 1234; 
   p = &i;

   printf ("*p = %d\n", *p);
   printf (" p = %ld\n", (long int) p);
   printf (" p = %p\n", (void *) p);
   printf ("&p = %p\n", (void *) &p);

   return EXIT_SUCCESS;
}
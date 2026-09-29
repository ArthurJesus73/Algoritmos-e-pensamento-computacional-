#include <stdio.h>

int main()
{
   int salarios [4];
   int i;
   
   for (i = 0; i <4; i++) {
   printf ("Digite os salarios: ");
   scanf ("%d", &salarios[i]);
   }
   
   for (int contador = 0; contador <4; contador++) {
       printf ("Salarios: %d\n", salarios[contador]);
   }
   
    return 0;
}

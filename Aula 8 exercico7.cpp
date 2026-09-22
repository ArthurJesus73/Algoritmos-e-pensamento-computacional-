#include <stdio.h>

int main()
{
	int contador = 0;
	int negativos = 0;
	int numero;

	while (contador <10 ) {
		printf ("Escolha os numeros: ");
		scanf ("%d", &numero);
		
		contador ++;
		 if (numero <0){
        negativos ++;
    }
	}
	 printf ("Numeros Negativos: %d\n", negativos);
   
	return 0;
}
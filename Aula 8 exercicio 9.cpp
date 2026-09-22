#include <stdio.h>

int main()
{
	int numero = 0;
	int soma = 0;

	while (1) {
		printf ("Escolha os numeros: ");
		scanf ("%d", &numero);
		if (numero == 0) {
		    break;
		}
		
		soma = numero + soma;
	}
	
	printf ("A soma dos numeros e: %d\n", soma);






	return 0;
}
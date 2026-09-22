#include <stdio.h>

int main()
{
	int contador = 0;
	int numero;
	int soma = 0;

	while (contador <10 ) {
		printf ("Escolha os numeros: ");
		scanf ("%d", &numero);
		
		contador ++;
		
		soma = numero + soma;
	}
	
	printf ("A soma dos numeros e: %d\n", soma);






	return 0;
}

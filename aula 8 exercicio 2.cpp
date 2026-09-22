#include <stdio.h>

int main () {
	int contador = 1;
	
	while (contador <=49 ) {
		contador++;		
		if (contador %2 == 0) {
		printf ("numero par %d\n", contador);

	} else {
		printf ("Numero: %d\n", contador);
	}
	
	}
	
	
	return 0;
}

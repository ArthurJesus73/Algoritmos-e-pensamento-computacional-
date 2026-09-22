#include <stdio.h>

int main() {
    
    int numero;
    int i;
    
    printf ("Escolha o numero: ");
	scanf ("%d", &numero);

    for ( i = 1; i <= numero; i++){
        int resultado = numero + i;
        printf ("%d + %d = %d\n",numero, i, resultado);
    }

    return 0;
}


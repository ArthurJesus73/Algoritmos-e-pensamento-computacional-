#include <stdio.h>
#include <math.h>

int main() {
	
	float nota1;
	float nota2;
	float nota3;
	float media;
	
	printf("Digite a nota 1: ");
	scanf(" %f", &nota1);
	
	printf("Digite a nota 2: ");
	scanf(" %f", &nota2);
	
	printf("Digite a nota 3: ");
	scanf(" %f", &nota3);
	
	media= (nota1 * 1.0f + nota2 * 2.0f + nota3 * 4.0f) / ( 1 + 2 + 4);
	
	printf("A media ponderada e: %.2f \n", media);
	
	return 0;
	
	
}



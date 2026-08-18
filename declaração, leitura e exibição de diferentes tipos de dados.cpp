#include <stdio.h>

int main() {
	int idade;
	float altura;
	char inicial;
	
	printf("Digite a inicial do seu nome: ");
	scanf(" %c", &inicial);
	
	printf("Digite a sua idade: ");
	scanf("%d", &idade);
	
	printf("Digite a sua altura (ex: 1.75): ");
	scanf("%f", &altura);
	
	printf("\n--- Dados Registrados ---\n");
	printf("Inicial: %c\n", inicial);
	printf("Idade: %d anos\n", idade);
	printf("Altura: %.2f metros\n", altura);
	
	return 0;
}

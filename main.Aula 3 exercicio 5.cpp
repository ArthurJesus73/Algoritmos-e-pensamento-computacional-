#include <stdio.h>
#include <math.h>

int main() {
	
	float peso;
	float altura;
	float imc;
	
	printf("Digite o seu peso: ");
	scanf(" %f", &peso);
	
	printf("Digite a sua altura: ");
	scanf(" %f", &altura);
	
	imc=peso / pow(altura,2);
	
	printf("O indice de massa corporal e: %.2f \n", imc);
	
	return 0;

	
}



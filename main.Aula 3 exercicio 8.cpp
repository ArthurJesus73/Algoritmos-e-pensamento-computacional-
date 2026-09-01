#include <stdio.h>
#include <math.h>

int main() {
	
	float x1;
	float x2;
	float y1;
	float y2;
	float valor;
	
	printf("Digite a cordenada x do ponto 1: ");
	scanf(" %f", &x1);
	
	printf("Digite a cordenada y do ponto 1: ");
	scanf(" %f", &y1);
	
	printf("Digite a cordenada x do ponto 2: ");
	scanf(" %f", &x2);
	
	printf("Digite a cordenada y do ponto 2: ");
	scanf(" %f", &y2);
	
	valor= sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
	
	printf("A distancia entre os pontos e: %.2f \n", valor);
	
	return 0;
	
	
}



#include <stdio.h>
#include <math.h>

int main() {
	
	float nota1;
	float nota2;
	float nota3;
	float nota4;
	float media;
	float mediatotal;
	
	printf("Digite a primeira nota: ");
	scanf(" %f", &nota1);
	
	printf("Digite a segunda nota: ");
	scanf(" %f", &nota2);
	
	printf("Digite a terceira: ");
	scanf(" %f", &nota3);
	
	printf("Digite a quarta nota: ");
	scanf(" %f", &nota4);
	
	media= nota1 + nota2 + nota3 + nota4;
	mediatotal= media / 4;
	
	printf("A media aritimetica e: %.2f \n", mediatotal);
	
	return 0;
	
	
}



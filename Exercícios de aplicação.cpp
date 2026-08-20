#include <iostream>

int main(){
	float perimetro;
	float comprimento;
	float largura;
	float area;
	
	printf("digite o comprimento: ");
	scanf(" %f" , &comprimento);
	
	printf("digite a largura: ");
	scanf(" %f" , &largura);
	
	perimetro=(comprimento+largura)*2;
	area=comprimento*largura;
	
	printf("o perimetro do jardim é %.2f\n" , perimetro);
	printf("a area do jardim é %.2f\n" , area);
	
	return 0;
}

#include <stdio.h>
#include <math.h>

int main() {
	
	float largura;
	float comprimento;
	float valorcaixa;
	float areatotal;
	float custocompra;
	int qtdcaixa;
	
	printf("Qual a largura da area: ");
	scanf(" %f", &largura);
	
	printf("Qual o comprimento: ");
	scanf(" %f", &comprimento);
	
	printf("Qual o valor da caixa: ");
	scanf(" %f", &valorcaixa);
	
	areatotal = largura * comprimento;
	qtdcaixa = areatotal / 2.5;
	custocompra = valorcaixa * qtdcaixa;
	
	printf("area total a ser revestida e: %.2f \n", areatotal);
	printf("quantidade de caixas necessarias: %d \n", qtdcaixa);
	printf("Custo toal da compra: %.2f \n", custocompra);
	
	return 0;
	
	
}



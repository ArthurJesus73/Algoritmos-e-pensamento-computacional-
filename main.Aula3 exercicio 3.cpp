#include <stdio.h>

int main(){
	
	int a;
	int b;
	int totaladc;
	int totalsub;
	int totalmult;
	
	printf("Digite o primeiro numero: ");
	scanf (" %d", &a);
	
	printf("Digite o segundo numero: ");
	scanf(" %d", &b);
	
	totaladc=a+b;
	totalsub=a-b;
	totalmult=a*b;
	
	printf("Total adicao: %d \n", totaladc);
	printf("Total subtracao: %d \n", totalsub);
	printf("Total multiplicacao: %d \n", totalmult);
	
	return 0;
	
	
}

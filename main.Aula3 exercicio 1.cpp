#include <stdio.h>

int main(){
	
	int manha;
	int tarde;
	int total;
	
	printf("produtos recebidos de manha: ");
	scanf(" %d", &manha);
	
	printf("Produtos de tarde: ");
	scanf(" %d", &tarde);
	
	total=manha+tarde;
	
	printf("o total  de produtos recebidos e: %i \n ", total);
	
	return 0;

}

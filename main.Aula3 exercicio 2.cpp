#include <stdio.h>

int main(){
	
	int horas;
	int minutos;
	int tempo;
	
	printf("Horas passadas: ");
	scanf(" %d", &horas);
	
	printf("Minutos passados: ");
	scanf(" %d", &minutos);
	
	tempo=(horas * 60 ) + minutos;
	
	printf ("Se passaram: %d minutos do dia todo \n", tempo);
	
	return 0;

}

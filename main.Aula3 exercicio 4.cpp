#include <stdio.h>

int main(){
	
int potencia;
int horas;
float consumo;

printf("Digite a potencia do equipamento: ");
scanf(" %d", &potencia);

printf("Digite as horas por dia: ");
scanf(" %d", &horas);

consumo= (potencia*horas*30)/1000.0;

printf("O consumo mensal e: %2f \n", consumo);

return 0;

}

#include <stdio.h>

int main(void)
{
    char combustivel;
    float alcool;
    float diesel;
    float gasolina;
    float valortotal;
    
    printf ("Escolha o combustivel, preços: \n alcool: 1,7997 \n diesel: 0,9798 \n gasolina: 2,1009 \n");
    scanf ("%c", &combustivel);
    
    switch (combustivel)
    {
    case 'A' : 
    printf ("alcool, quantos litros? ");
    scanf ("%f", &alcool);
    
    valortotal = alcool * 1.7997;
    
    break;
    
    case 'D' : 
    printf ("diesel, quantos litros? ");
    scanf ("%f", &diesel);
    
    valortotal = diesel * 0.9798;
    
    break;
    
    case 'G' : 
    printf ("gasolina, quantos litros? ");
    scanf ("%f", &gasolina);
    
    valortotal = gasolina * 2.1009;
    break;

    default : printf ("Escolha uma das opções \n");
    }
    
    printf ("O valor a se pagar é: %.2f \n", valortotal);
    
    return 0;
}

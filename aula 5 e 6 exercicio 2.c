#include <stdio.h>

int main(void)
{
    int codMoeda;
    float valorMoeda;
    
    printf ("Escolha a moeda: ");
    scanf ("%d", &codMoeda);
    
    switch (codMoeda)
    {
        
        case 1 : printf ("Libra esterlina, valor: 6,93");
        break;
        
        case 2 : printf ("Franco suiço, valor: 6,31");
        break;
        
        case 3 : printf ("Dolar americano, valor: 5,13");
        break;
        
        case 4 : printf ("Marco alemão, valor: 0.33");
        break;
        
        case 5 : printf ("Real, valor: 1");
        break;
        default: printf ("Não é uma opção");
        
    }

    return 0;
}
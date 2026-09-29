#include <stdio.h>

int main()
{
    int salarios [6];
    float media;
    int soma = 0;
    float maior = 0;
    float menor = 0;
    
    for (int i =0; i <6; i++) {
        printf ("Digite os salarios: ");
        scanf ("%d", &salarios[i]);
        soma += salarios[i];
    }
    
    media = soma / 6;
    printf ("Media salarial: %.2f\n", media);
    
    
    
    for (int i = 0; i <6; i++) {
        if (salarios[i] > maior ) {
            maior = salarios[i];
            
        }
    }
    
    printf ("Maior salario: %.2f\n", maior);
    
    return 0;
}

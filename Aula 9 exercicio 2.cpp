#include <stdio.h>

int main()
{
    int valores [8];
    float media;
    int soma = 0;
    int contador = 0;
    
    for (int i = 0; i < 8; i++) {
        printf ("Digite os valores: ");
        
        scanf ("%d", &valores[i]);
        
        soma += valores[i];
        
    }
    
    for (int i = 0; i <8; i++) {
        
        if (valores[i] > 7)
        contador ++;
        
    }
    
    printf ("Numeros acima: %d\n", contador);
    
    media = soma / 8;
    
    printf ("Media: %.2f\n", media);
    
    
    
    return 0;
}

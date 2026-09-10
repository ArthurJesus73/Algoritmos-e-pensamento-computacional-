#include <stdio.h>

int main(void)
{

	int opcao;
	float altura;
	float peso1;
	float peso2;

    printf ("Você é homem ou mulher, digite 1 para homem ou 2 para mulher: ");
    scanf  ("%d", &opcao);
    
    
    switch (opcao)
    {
        
        case 1 : printf ("Digite a altura: ");
        scanf ("%f", &altura);
        
        peso1 = (72.7 * altura) - 58;
        
        printf("Seu peso ideal é: %.2f \n", peso1);
        break;
        
        case 2 : printf ("Digite sua altura: ");
        scanf ("%f", &altura);
        
        peso2 = (62.1 * altura) - 47.7;
        
        printf("Seu peso ideal é: %.2f \n", peso2);
        break;
        
    }
    
    

	return 0;
}
#include <stdio.h>

int main()
{
    int matriz[3][4];
    int somaProduto;
    int somaGeral = 0;

    
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            printf("Produto %d - Dia %d: ", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);
        }
    }

    
    for (int i = 0; i < 3; i++) {

        somaProduto = 0;

        for (int j = 0; j < 4; j++) {
            somaProduto = somaProduto + matriz[i][j];
        }

        printf("Total vendido do produto %d: %d\n", i + 1, somaProduto);

        somaGeral = somaGeral + somaProduto;
    }

    
    printf("Total geral de itens vendidos: %d\n", somaGeral);

    return 0;
}

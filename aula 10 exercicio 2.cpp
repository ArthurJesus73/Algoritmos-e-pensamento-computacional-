
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float valores[7];
    char *dias[] = {
        "Domingo",
        "Segunda-feira",
        "Terca-feira",
        "Quarta-feira",
        "Quinta-feira",
        "Sexta-feira",
        "Sabado"
    };

    int i;
    char repetir;
    FILE *arquivo;

    do {
        for (i = 0; i < 7; i++) {
            printf("Digite o consumo de %s: ", dias[i]);

            if (scanf("%f", &valores[i]) != 1) {
                printf("Erro ao ler o consumo!\n");
                return 1;
            }
        }

        arquivo = fopen("consumo.txt", "a");

        if (arquivo == NULL) {
            printf("Erro ao abrir o arquivo!\n");
            return 1;
        }

        fprintf(arquivo, "\n--- Consumo semanal ---\n");

        for (i = 0; i < 7; i++) {
            fprintf(arquivo, "%s: %.2f\n",
                    dias[i], valores[i]);
        }

        fclose(arquivo);

        printf("\nConsumo gravado com sucesso!\n");
        printf("Deseja registrar outra semana? (s/n): ");
        scanf(" %c", &repetir);

    } while (repetir == 's' || repetir == 'S');

    return 0;
}


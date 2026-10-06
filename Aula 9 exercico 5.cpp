#include <stdio.h>

int main()
{
    float matriz[3][4];
    float somaNotas;
    float media;
    float maiormedia;
    int melhoraluno;

    
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            printf("Nota %d - aluno %d: ", j + 1, i + 1);
            scanf("%f", &matriz[i][j]);
        }
    }

    
    for (int i = 0; i < 3; i++) {

        somaNotas = 0;

        for (int j = 0; j < 4; j++) {
            somaNotas = somaNotas + matriz[i][j];
        }

        media = somaNotas / 4;

        printf("Media do estudante %d: %.2f\n", i + 1, media);

        
        if (i == 0 || media > maiormedia) {
            maiormedia = media;
            melhoraluno = i + 1;
        }
    }

    printf("\nMelhor aluno: %d\n", melhoraluno);
    printf("Melhor media: %.2f\n", maiormedia);

    return 0;
}

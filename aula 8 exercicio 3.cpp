#include <stdio.h>

int main() {

    int contagem = 10;

    do {
        contagem--;

        if (contagem == 0) {
            printf("Fim da contagem\n");
        } else {
            printf("Contagem %d\n", contagem);
        }

    } while (contagem > 0);

    return 0;
}


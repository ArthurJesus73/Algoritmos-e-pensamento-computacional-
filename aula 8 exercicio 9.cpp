#include <stdio.h>

int main() {
    int numero = 1;
    
    while (numero <=100){
        
        if (numero % 3 ==0 ) {
            printf ("Multiplo de 3: %d\n", numero);
        }
        numero ++;
        }
    

    return 0;
}
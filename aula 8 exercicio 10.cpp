#include <stdio.h>

int main(){
    
   int numero;
   int contador = 0;
   int numeroImpar = 0;
   
   printf ("Digite o numero: ");
   scanf("%d", &numero);
   
   while (contador < numero ){
        
        if (numeroImpar % 2 !=0) {
        printf ("Impar %d\n", numeroImpar);
        contador++;
   }
        numeroImpar++;
   }
   
    return 0;
}
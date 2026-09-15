#include <stdio.h>

int main(void)
{
    
    int idade;
    
    printf ("Informe a idade: ");
    scanf ("%d", &idade);
    
    if (idade >= 5 && idade <= 7) {
        printf ("Catetogria Pré-mirim");
    }
    
    else if (idade >= 8 && idade <= 10) {
        printf ("Categoria Mirim");
    }
    
    else if (idade >= 11 && idade <= 13) {
        printf ("Categoria Infantil");
    }
    
    else if (idade >= 14 && idade <= 17) {
        printf ("Categoria Infanto-juvenil");
    }
    
    else if (idade >= 18 && idade <= 20) {
        printf ("Categoria Juvenil");
    }
    
    else if (idade >= 20) {
        printf ("Categoria Adulto");
    }
    
    return 0;
}

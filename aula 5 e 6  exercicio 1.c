
#include <stdio.h>

int main(void)
{
    int lanche;
    int bebida;
    int sobremesa;
    
    
    printf("Escolha o lanche: ");
    scanf("%d", &lanche);
    
    switch (lanche)
{
    case 1 : printf ("O lanche e um hamburger");
    break;
    
    case 2 : printf ("O lanche e um chesseburger");
    break;
    
    case 3 : printf ("O lanche e um cachorro quante");
    break;
    
    case 4 : printf ("O lanche e um sanduiche");
    break;
    default: printf ("Nao e um lanche");
}    
    printf ("\nEscolha a bebida: ");
    scanf("%d", &bebida);
    
    switch (bebida)
{
    case 1 : printf ("A bebida e refrigerante");
    break;
    
    case 2 : printf ("A bebide e um suco de laranja");
    break;
    default: printf ("Nao e uma bebida");
}
    printf ("\nEscolha a sobremesa: ");
    scanf  ("%d", &sobremesa);
    
    switch (sobremesa)
{
    case 1 : printf ("A sobremesa e milk shake");
    break;
    
    case 2 : printf ("A sobremesa sundae");
    break;
    
    case 3 : printf ("A sobremesa e casquinha");
    break;
    default: printf ("Nao e uma sobremesa");
}
    
    
    return 0;
}

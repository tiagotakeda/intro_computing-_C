#include <stdio.h>

/* Sabe-se que um número da forma n3 é igual a soma de n ímpares consecutivos.

Exemplo: 13= 1, 23= 3+5, 33= 7+9+11,  43= 13+15+17+19,...
Dado m, determine os ímpares consecutivos cuja soma é igual a n3 para n assumindo valores de 1 a m. */

int main()
{
    int n, m, impar, cont;

    printf("\n\tDeterminacao da soma de n consecutivos impares iguais a n^3.\n\n");

    printf("Entre com m: ");
    scanf("%d", &m);

    printf("\n");
    for(n = impar = 1; n <= m; n++, impar += 2 * n){
        printf("%d*%d*%d = %d", n, n, n, impar);
        for(cont = 1; cont < n; cont++){
            printf("+%d", impar + (2*cont));
        }
        printf("\n");
    }

    return 0;
}

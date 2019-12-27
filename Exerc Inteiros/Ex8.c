#include <stdio.h>

/* Dado um inteiro nao-negativo n, determinar n! */

int main()
{
    int n, n0, pot;

    printf("Entre com n: ");
    scanf("%d", &n);

    n0 = n;

    pot = 1;
    while(n > 0){
        pot = pot * n;
        n--;
    }

    printf("\n%d! = %d\n\n", n0, pot);

    return 0;
}

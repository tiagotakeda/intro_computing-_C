#include <stdio.h>

/* Dados um inteiro x e um inteiro nao-negativo n, cqlcular x^n */

int main()
{
    int x, n, i, pot;

    printf("Digite x: \n");
    scanf("%d", &x);

    printf("Digite n: \n");
    scanf("%d", &n);

    pot = 1;
    for(i = 0; i < n; i++){
        pot = pot * x;
    }
    printf("%d^%d = %d", x, n, pot);

    return 0;
}

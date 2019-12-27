#include <stdio.h>

/*  Dado um número natural na base binária, transformá-lo para a base decimal.

Exemplo:
Dado 10010 a saída será 18, pois 1. 2^4 + 0. 2^3 + 0. 2^2 + 1. 2^1 + 0. 2^0 = 18. */

int main()
{
    int n, base, soma;

    printf("\n\tTransformacao numerica da base binaria para decimal\n\n");
    printf("Entre com n na base binaria: ");
    scanf("%d", &n);

    printf("\n\n%d na base decimal = ", n);

    base = 1;
    soma = 0;

    while(n > 0){
        if((n % 10) == 1){
            soma += (n % 10) * base;
        }

        base *= 2;
        n /= 10;
    }

    printf("%d", soma);
    printf("\n");

    return 0;
}

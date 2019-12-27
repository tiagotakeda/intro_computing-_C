#include <stdio.h>

/* Dizemos que um inteiro positivo n é perfeito se for igual à soma de seus divisores positivos diferentes de n.

Exemplo: 6 é perfeito, pois 1+2+3 = 6.
       Dado um inteiro positivo n, verificar se n é perfeito. */

int main()
{
    int soma, n, div;

    printf("\n\tCalculadora de numeros perfeitos.\n\n");
    printf("Entre com n: ");
    scanf("%d", &n);

    soma = 0;
    for(div = 1; div < n; div++){
        if((n % div) == 0){
            soma += div;
        }
    }

    if(soma == n){
        printf("\n\n%d e' um numero perfeito.\n\n", n);
    }else{
        printf("\n\n%d nao e' um numero perfeito.\n\n", n);
    }

    return 0;
}

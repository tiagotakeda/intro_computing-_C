#include <stdio.h>

/* Dados n e n seq��ncias de n�meros inteiros n�o-nulos, cada qual seguida por um 0, calcular a soma dos n�meros pares de cada seq��ncia. */

int main()
{
    int n, seq, res, soma, i;

    printf("\n\tSoma de numeros pares em n sequencias.\n\n");
    printf("Entre com numero de sequencias: ");
    scanf("%d", &n);
    printf("\n");

    soma = 0;
    for(i = 1; i <= n; i++){
        printf("Entre com a sequencia %d: ", i);
        scanf("%d", &seq);

        while(seq > 0){
            res = seq % 10;
            if((res % 2) == 0){
                soma += res;
            }
            seq /= 10;
        }
        printf("\n");
    }

    printf("\n\nA soma de numeros pares das %d sequencias = %d\n\n", n, soma);

    return 0;
}

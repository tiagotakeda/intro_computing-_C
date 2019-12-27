#include <stdio.h>

/* 1. Dados n>0 n´umeros inteiros positivos, calcular a soma dos que s˜ao primos.
(a) Sua soluc¸˜ao deve conter uma repetic¸˜ao com contador para ler n n´umeros pelo teclado.
(b) Para cada n´umero lido, seu programa deve testar se ele ´e primo (usando uma outra repetic¸˜ao com
indicador de passagem). Em caso afirmativo, acumular em uma soma. */

int main()
{
    int n, q, soma, div, cont;

    printf("\n\tCalculo da soma dos numeros primos ate n.\n\n");
    printf("Entre com a quantidade de numeros: ");
    scanf("%d", &q);

    printf("\nEntre com os %d numeros: \n", q);
    soma = 0;

    do{
        cont = 0;
        printf("\n");
        scanf("%d", &n);
        for(div = 1; div <= n; div++){
            if((n % div) == 0){
                cont++;
            }
        }
        if(cont <= 2){
            soma += n;
        }
        q--;
    }while(q > 0);

    printf("\n\nA soma de numeros primos = %d\n\n", soma);

    return 0;
}

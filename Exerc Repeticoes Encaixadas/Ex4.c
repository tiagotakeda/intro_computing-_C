#include <stdio.h>

/* Dados n números inteiros positivos, calcular a soma dos que são primos. */

int main()
{
    int n, x, primo, soma, cont;

    printf("\n\tCalculo da soma dos primos ate n.\n\n");

    printf("Entre com n: ");
    scanf("%d", &n);

    soma = 0;
    for(x = 1; x <= n; x++){
        for(primo = 1, cont = 0; primo <= x; primo++){
            if((x % primo) == 0){
                cont++;
            }
        }
        if(cont <= 2){
            soma += x;
        }
    }

    printf("\n\nA soma dos primos ate %d = %d", n, soma);

    return 0;
}

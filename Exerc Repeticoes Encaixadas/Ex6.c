#include <stdio.h>

/* Dado um número inteiro positivo, determine a sua decomposição em fatores primos calculando também a multiplicidade de cada fator. */

int main()
{
    int n, resto, primo, num, cont, mult;

    printf("\nDecomposicao de um numero e determinacao das multiplicidades de cada fator\n\n");

    printf("Entre com n (maior que 0): ");
    scanf("%d", &n);

    printf("\nDecomposicao de %d em fatores primos: \n\n", n);

    for(num = 2; num <= n; num++){
        for(cont = 0, primo = 1; primo <= num; primo++){
            if((num % primo) == 0){
                cont++;
            }
        }
        if(cont <= 2){
            resto = n / num;
            if((n % num) == 0){
            mult = 1;
            while((resto % num) == 0){
                mult++;
                resto /= num;
            }
            printf("\tfator %d multiplicidade %d\n", num, mult);
            }
        }
    }
    return 0;
}

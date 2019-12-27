#include <stdio.h>
#define TRUE 1
#define FALSE 0

/* Dado um número natural na base decimal, transformá-lo para a base binária.

Exemplo: Dado 18 a saída deverá ser 10010. */

int main()
{
    int n, soma, cont, base, resto, num;

    printf("\n\tTransformacao numerica da base decimal para binaria\n\n");
    printf("Entre com n: ");
    scanf("%d", &n);

    printf("\n\n%d na base binaria = ", n);

    resto = FALSE;
    soma = 0;
    base = 1;
    for(cont = 1; n > base; cont *= 10){
        base *= 2;
    }
    if(n == base){
        resto = FALSE;
        soma += cont;
    }else{
        soma += cont/10;
        resto = TRUE;
        num = base - n;
        while(resto){
            base = 1;
            for(cont = 1; num > base; cont *= 10){
                base *= 2;
            }
            if(num == base){
                resto = FALSE;
                soma += cont;
            }else{
                resto = TRUE;
                num = base - num;
            }
        }
    }

    printf("%d", soma);
    printf("\n");

    return 0;
}

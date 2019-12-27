#include <stdio.h>
#define TRUE 1
#define FALSE 0

/* Dada uma sequencia de numeros inteiros nao-nulos, seguida por 0, imprimir seus quadrados. */

int main()
{
    int n, q, alg;

    alg = FALSE;

    while(!alg){
        printf("Digite n: \n");
        scanf("%d", &n);
        alg = TRUE;
        if(n==0){
            printf("%d^2 = %d", n, n);
            return 0;
        }else{
            q = n*n;
            printf("%d^2 = %d\n", n, q);
            alg = FALSE;
        }
    }
    return 0;
}

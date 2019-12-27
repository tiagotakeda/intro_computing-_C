#include <stdio.h>
#define TRUE 1
#define FALSE 0

/* Dado um inteiro nao-negativo n, verificar se n e' triangular. */

int main()
{
    int n, i;

    printf("Entre com n: ");
    scanf("%d", &n);

    for(i = 1; i*(i + 1)*(i + 2) < n; i++);

    if(i*(i + 1)*(i + 2) == n){
        printf("\n\n%d e' triangular.\n\n", n);
    }else{
        printf("\n\n%d nao 'e triangular.\n\n", n);
    }

    return 0;
}

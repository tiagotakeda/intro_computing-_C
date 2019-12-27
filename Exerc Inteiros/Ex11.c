#include <stdio.h>
#define TRUE 1
#define FALSE 0

/* Dado um inteiro positivo n, verificar se n e' primo */

int main()
{
    int n, i, primo, cont;

    printf("Entre com n: ");
    scanf("%d", &n);

    cont = 0;
    primo = FALSE;
    for(i = 1; i <= n; i++){
        if(n%i == 0){
            cont++;
        }
    }
    if(cont == 2){
        primo = TRUE;
    }
    if(primo){
        printf("\n\n%d e' um numero primo.\n\n", n);
    }else{
        printf("\n\n%d nao e' um numero primo.\n\n", n);
    }

    return 0;
}

#include <stdio.h>
#define TRUE 1
#define FALSE 0

/* Dizemos que um número natural n é palíndromo (3) se
    o 1º algarismo de n é igual ao seu último algarismo,
    o 2º algarismo de n é igual ao penúltimo algarismo,
    e assim sucessivamente.

Exemplos:
567765 e 32423 são palíndromos.
567675 não é palíndromo.
Dado um número natural   n > 10 , verificar se n é palíndrome. */

int main()
{
    int n, inver, pal, nn;

    printf("\n\tVerificacao de numeros palindromos.\n\n");
    printf("Entre com n: ");
    scanf("%d", &n);

    nn = n;
    inver = 0;
    printf("\n\n");

    while(nn > 0){
        inver += nn % 10;
        inver *= 10;
        nn /= 10;
    }

    inver /= 10;
    if(inver == n){
        pal = TRUE;
    }
    else{
        pal = FALSE;
    }

    if(pal){
        printf("\n\n%d e' palindromo.\n\n", n);

        return 0;
    }
    else{
        printf("\n\n%d nao e' palindromo.\n\n", n);

        return 0;
    }
}

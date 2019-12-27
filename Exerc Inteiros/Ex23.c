#include <stdio.h>
#define TRUE 1
#define FALSE 0

/* Dizemos que um n�mero natural n � pal�ndromo (3) se
    o 1� algarismo de n � igual ao seu �ltimo algarismo,
    o 2� algarismo de n � igual ao pen�ltimo algarismo,
    e assim sucessivamente.

Exemplos:
567765 e 32423 s�o pal�ndromos.
567675 n�o � pal�ndromo.
Dado um n�mero natural   n > 10 , verificar se n � pal�ndrome. */

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

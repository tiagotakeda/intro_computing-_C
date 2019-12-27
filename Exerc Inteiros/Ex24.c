#include <stdio.h>
#define TRUE 1
#define FALSE 0

/* São dados dois números inteiros positivos p e q, sendo que o número de dígitos de p é menor ou igual ao número de dígitos de q. Verificar se p é um subnúmero de q.

Exemplos:
p = 23, q = 57238, p é subnúmero de q.
p = 23, q = 258347, p não é subnúmero de q. */

int main()
{
    int p, pp, q, i, sub, res;

    printf("\n\tVerificacao de subnumeros p e uma sequencia numerica q.\n\n");
    printf("Entre com um numero q: ");
    scanf("%d", &q);
    printf("\nEntre com um subnumero p: ");
    scanf("%d", &p);

    sub = FALSE;
    pp = p;

    for(i = 10; pp > 0; i *= 10){
        pp /= 10;
    }
    i /= 10;

    while(q > 0){
        res = q % i;
        if(p == res){
            sub = TRUE;
        }

        q /= 10;
    }

    if(sub){
        printf("\n\np e' subnumero de q.\n\n");

        return 0;
    }
    else{
        printf("\n\np nao e' subnumero de q.\n\n");

        return 0;
    }
}

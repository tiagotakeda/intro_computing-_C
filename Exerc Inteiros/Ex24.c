#include <stdio.h>
#define TRUE 1
#define FALSE 0

/* S�o dados dois n�meros inteiros positivos p e q, sendo que o n�mero de d�gitos de p � menor ou igual ao n�mero de d�gitos de q. Verificar se p � um subn�mero de q.

Exemplos:
p = 23, q = 57238, p � subn�mero de q.
p = 23, q = 258347, p n�o � subn�mero de q. */

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

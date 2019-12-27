#include <stdio.h>

/* (POLI 87) Dados n e uma seqüência de n números inteiros, determinar quantos segmentos de números iguais consecutivos compõem essa seqüência.

Exemplo: A seguinte seqüência é formada por 5 segmentos de números iguais:   5,  2,  2,  3,  4,  4,  4,  4,  1,  1 */

int main()
{
    int seq, cont, seqq, i;

    printf("\n\tDeterminacao da quantidade de numeros iguais em uma sequencia.\n\n");

    printf("Entre com a sequencia de numeros: ");
    scanf("%d", &seq);

    cont = 0;
    seqq = seq;
    for(i = 0; i < 10; i++){
        while(seq > 0){
            if((seq % 10) == i){
                cont++;
            }
            seq /= 10;
        }
        seq = seqq;
    }

    printf("\nA sequencia %d possui %d seguimentos de numeros iguais.\n\n", seqq, cont);

    return 0;
}

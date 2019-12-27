#include <stdio.h>

/* (POLI 87) Dados n e uma seq��ncia de n n�meros inteiros, determinar quantos segmentos de n�meros iguais consecutivos comp�em essa seq��ncia.

Exemplo: A seguinte seq��ncia � formada por 5 segmentos de n�meros iguais:   5,  2,  2,  3,  4,  4,  4,  4,  1,  1 */

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

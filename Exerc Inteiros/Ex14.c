#include <stdio.h>

/* Um matemático italiano da idade média conseguiu modelar o ritmo de crescimento da população de coelhos (1) através de uma seqüência de números naturais que passou a
ser conhecida como seqüência de Fibonacci (2). O n-ésimo número da seqüência de Fibonacci Fn é dado pela seguinte fórmula de recorrência:

F(1) = 1; F(2) = 1; F(3) = 2; F(i) = F(i - 1) + F(i - 2).

          Faça um programa que, dado n, calcula Fn. */

int main()
{
    int n, f1, f2, f3, i;

    printf("\n\tSequencia de Fibonacci.\n\nEntre com um numero n para saber qual seu valor na posicao n.\n\n");
    printf("Entre com n: ");

    scanf("%d", &n);

    printf("\nA sequencia na posicao %d = ", n);

    f3 = 0;
    f1 = f2 = 1;
    for(i = 1; i < n; i++){
        f3 = f1 + f2;
        f1 = f2;
        f2 = f3;
    }

    printf("%d", f1);

    printf("\n");

    return 0;
}

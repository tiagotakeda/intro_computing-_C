#include <stdio.h>

/* Um matem�tico italiano da idade m�dia conseguiu modelar o ritmo de crescimento da popula��o de coelhos (1) atrav�s de uma seq��ncia de n�meros naturais que passou a
ser conhecida como seq��ncia de Fibonacci (2). O n-�simo n�mero da seq��ncia de Fibonacci Fn � dado pela seguinte f�rmula de recorr�ncia:

F(1) = 1; F(2) = 1; F(3) = 2; F(i) = F(i - 1) + F(i - 2).

          Fa�a um programa que, dado n, calcula Fn. */

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

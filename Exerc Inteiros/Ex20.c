#include <stdio.h>
#include <math.h>

/* (FIS 88) Qualquer n�mero natural de quatro algarismos pode ser dividido em duas dezenas formadas pelos seus dois primeiros e dois �ltimos d�gitos.

Exemplos:
1297: 12 e 97.
5314: 53 e 14.
       Escreva um programa que imprime todos os milhares (4 algarismos) cuja raiz quadrada seja a soma das dezenas formadas pela divis�o acima.
Exemplo: raiz de 9801 = 99 = 98 + 01.
Portanto 9801 � um dos n�meros a ser impresso. */

int main()
{
    int n, dez1, dez2;

    printf("\n\tNumeros cujas raizes quadradas sao a soma de suas dezenas formadas pela separacao de seus algarismos.\n\n");
    printf("Os numeros sao: \n\n");

    for(n = 1000; n <= 9999; n++){
        dez1 = n / 100;
        dez2 = n % 100;

        if(sqrt(n) == dez1 + dez2){
            printf("%d\n", n);
        }
    }

    return 0;
}

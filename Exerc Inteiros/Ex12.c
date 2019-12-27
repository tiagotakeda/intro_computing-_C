#include <stdio.h>
#define TRUE 1
#define FALSE 0

/* Dados dois numeros inteiros positivos, determinar o maximo divisor comum entre eles usando o algoritmo de Euclides. */

int main()
{
    int a, b, resto, quoci, mdc, result;

    printf("\n\tCalculo do m.d.c entre dois numeros.\n");
    printf("\nEntre com os dois numeros: ");
    scanf("%d%d", &a, &b);

    printf("\n\nO m.d.c. entre %d e %d = ", a, b);

    mdc = FALSE;
    result = 0;

    if(a > b){
        resto = a % b;

        while(resto > 0){
            quoci = resto;
            a = b;

            if((a % quoci) == 0){
                result = resto;
            }

            resto = a % quoci;
        }

        if(resto == 0){
            mdc = TRUE;
        }
    }else{
        resto = b % a;

        while(resto > 0){
            quoci = resto;
            b = a;

            if((b % quoci) == 0){
                result = resto;
            }

            resto = b % quoci;
        }

        if(resto == 0){
            mdc = TRUE;
        }
    }

    if(mdc){
        printf("%d.", result);
    }

    printf("\n");

    return 0;
}

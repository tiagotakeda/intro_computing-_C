#include <stdio.h>

/* Dados um inteiro positivo n e uma seqüência de n inteiros positivos, determinar o máximo divisor comum a todos eles. */

int main()
{
    int n, x, y, resto, mdc, i;

    printf("\n\tCalculo do m.d.c. entre n numeros.\n\n");
    printf("Entre com n: ");
    scanf("%d", &n);

    printf("\n");

    printf("\nEntre com x1: ");
    scanf("%d", &x);

    resto = mdc = 1;
    for(i = 2; n > 1; i++, n--){
        printf("\nEntre com x%d: ", i);
        scanf("%d", &y);

        if(x > y){
            resto = x % y;
            while(resto > 0){
                x = y;
                y = resto;
                resto = x % y;
            }
            mdc = y;
        }
        else{
            resto = y % x;
            while(resto > 0){
                y = x;
                x = resto;
                resto = y % x;
            }
            mdc = x;
        }
    }

    printf("\n\nO m.d.c. = %d", mdc);

    return 0;
}

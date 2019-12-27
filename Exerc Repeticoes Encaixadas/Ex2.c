#include <stdio.h>
#define TRUE 1
#define FALSE 0

/* Dado um número inteiro positivo n, determinar todos os inteiros entre 1 e n que são comprimento da hipotenusa de um triângulo retângulo com catetos inteiros. */

int main()
{
    int n, hip, a, b, c;

    printf("\n\tDeterminacao de hipotenusas de trianulos retangulos com lados inteiros de 1 ate n.\n\n");
    printf("Entre com n: ");
    scanf("%d", &n);

    printf("\n");
    for(hip = 1; hip <= n; hip++){
        c = FALSE;
        for(a = 1; a < hip && !c; a++){
            b = a;
            while(a*a + b*b < hip*hip){
                b++;
            }
            if(a*a + b*b == hip*hip){
                printf("hipotenusa = %d, catetos %d e %d\n", hip, a, b);
                c = TRUE;
            }
        }
    }

    printf("\n");


    return 0;
}

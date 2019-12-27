#include <stdio.h>

/* Dado um numero inteiro positivo n, imprimir os n primeiros naturais impares */

int main()
{
    int n, impar;

    printf("Digite n: ");
    scanf("%d", &n);

    if(n==0){
        printf("O numero digitado foi 0\n\n");

        return 0;
    }
    impar = 1;
    printf("\n\nOs %d numeros impares sao: ", n);
    while(n > 1){
        n -= 1;
        printf("%d, ", impar);

        impar += 2;
    }
    if(n == 1){
        printf("%d.\n\n", impar);
    }
    return 0;
}

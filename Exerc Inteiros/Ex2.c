#include <stdio.h>

/* Dado um numero inteiro positivo, calcular a soma dos n primeiros numeros inteiros positivos */

int main()
{
    int n, nantes, soma;

    printf("Digite n: ");
    scanf("%d", &n);

    nantes = n;
    soma = 0;
    while(n > 0){
        soma += n%10;
        n /= 10;
    }
    printf("\nA soma dos digitos de %d = %d\n\n", nantes , soma);
    return 0;
}

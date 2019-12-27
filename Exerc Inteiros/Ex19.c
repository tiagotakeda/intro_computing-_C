#include <stdio.h>

/* Dados três números, imprimi-los em ordem crescente. */

int main()
{
    int a, b, c;

    printf("\n\tOrdem crescente entre 3 numeros\n\n");

    printf("Entre com o numero a: ");
    scanf("%d", &a);
    printf("\nEntre com o numero b: ");
    scanf("%d", &b);
    printf("\nEntre com o numero c: ");
    scanf("%d", &c);

    printf("\nOs numeros em ordem crescente = ");

    if(a <= b && b <= c){
        printf("%d %d %d\n", a, b, c);

    }else if(c <= b && b <= a){
        printf("%d %d %d", c, b, a);

    }else if(b <= a && a <= c){
        printf("%d %d %d", b, a, c);

    }else if(b <= a && a <= c){
        printf("%d %d %d", b, c, a);

    }else if(a <= b && c <= b){
        printf("%d %d %d", a, c, b);

    }else if(c <= a && a <= b){
        printf("%d %d %d", c, a, b);
    }

    return 0;
}

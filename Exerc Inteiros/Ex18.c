#include <stdio.h>

/* Dados três números naturais, verificar se eles formam os lados de um triângulo retângulo. */

int main()
{
    int a, b, c ;

    printf("\n\tDetrminacao de triangulos retangulos com numeros naturais\n\n");

    printf("Entre com o lado a: ");
    scanf("%d", &a);
    printf("\nEntre com o lado b: ");
    scanf("%d", &b);
    printf("\nEntre com o lado c: ");
    scanf("%d", &c);

    if(a*a == b*b + c*c || b*b == a*a + c*c || c*c == a*a + b*b){
        printf("\n%d, %d e %d formam um triangulo retangulo.\n", a, b, c);
    }else{
        printf("\n%d, %d e %d nao formam um triangulo retangulo.\n", a, b, c);
    }

    return 0;
}

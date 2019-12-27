#include <stdio.h>
#define TRUE 1
#define FALSE 0

 /* Dados n e dois numeros inteiros positivos i e j diferentes de 0, imprimir em ordem crescente on n primeiros naturais que sao multiplos de i ou
    de j e ou de ambos. */

int main()
{
    int n, i, j, cont, nat;

    printf("\n\tCalculo do m.m.c. entre dois numeros\n\n");
    printf("\n Entre com a quantidade de multiplos que deseja visualizar: ");
    scanf("%d", &n);

    printf("\n\nEntre com os dois multiplos: \n\n");
    scanf("%d%d", &i, &j);

    printf("Os %d multiplos de %d e %d = ", n, i, j);

    nat = 0;
    cont = 0;
    while(cont < n){
        if((nat%i) == 0 || (nat%j) == 0){
            printf(" %d ", nat);
            nat++;
        }else{
            nat++;
        }
        cont++;
    }

    return 0;
}

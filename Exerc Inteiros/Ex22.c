#include <stdio.h>
#define TRUE 1
#define FALSE 0

/* (POLI 89) Dados n e uma sequencia de n numeros inteiros, determinar o comprimento de um segmento crescente de comprimento maximo.

Exemplos:
Na sequencia   5,  10,  3,  2,  4,  7,  9,  8,  5   o comprimento do segmento crescente maximo é 4.
Na sequencia   10,  8,  7,  5,  2   o comprimento de um segmento crescente máximo é 1. */

int main()
{
    int n, ant, post, cont, i, tam;

    printf("\n\tComprimento de um segmento maximo crescente.\n\n");
    printf("Entre com a quantidade de numeros da sequencia: ");
    scanf("%d", &n);

    cont = tam = 1;
    printf("\n\n");
    for(i = 1; i <= n; i++){

        if(i == 1){
            printf("Entre com n%d: ", i);
            scanf("%d", &ant);
        }
        else{
            printf("Entre com n%d: ", i);
            scanf("%d", &post);

            if(post > ant){
                cont++;
                ant = post;
            }
            else{
                if(tam > cont){
                    cont = 1;
                }
                else{
                    tam = cont;
                    cont = 1;
                }
            }
        }
    }
    printf("\nA comprimento de um segmento crescente maximo = %d\n", tam);

    return 0;
}

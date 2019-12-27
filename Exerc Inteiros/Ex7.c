#include <stdio.h>

 /* Dados n e uma sequencia de n numeros inteiros, determinar a soma dos numeros pares. */

 int main()
 {
     int n, seq, soma, i, x;

     printf("Entre com a quantidade de numeros da sequencia: ");
     scanf("%d", &n);

     printf("Entre com a sequencia: ");
     scanf("%d", &seq);

     soma = 0;
     for(i = 0; i < n; i++){
        x = seq % 10;

        if((x % 2) == 0){
            soma += x;
        }

        seq /= 10;
     }
     printf("A soma de numeros pares da sequencia = %d", soma);

     return 0;
 }

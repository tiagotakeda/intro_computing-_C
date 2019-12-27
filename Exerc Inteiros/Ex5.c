#include <stdio.h>

/* Uma loja de discos anota diariamente durante o mes de marco a quantidade de discos vendidos.
    Determinar em que dia desse mes ocorreu a maior venda e qual foi a quantidade de discoa vendidos nesse dia. */

int main()
{
    int hoje, ontem, i, maiorvenda, dia;

    ontem = 0;
    maiorvenda = 0;
    for(i = 1; i <= 7; i++){
        printf("Entre com o numero de discos vendidos no dia %d\n", i);
        scanf("%d", &hoje);

        if(hoje > ontem){
            maiorvenda = hoje;
            dia = i;
        }else{
            ontem = hoje;
        }
    }

    if(maiorvenda == 1){
        printf("A maior venda de discos ocorreu no dia %d, e foi vendido %d disco\n\n", dia, maiorvenda);
    }else{
        printf("A maior venda de discos ocorreu no dia %d, e foram vendidos %d discos\n\n", dia, maiorvenda);
    }
    return 0;
}

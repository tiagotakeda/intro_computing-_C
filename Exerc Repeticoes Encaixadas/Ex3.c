#include <stdio.h>

/* Dados dois naturais m e n determinar, entre todos os pares de números naturais (x,y) tais que x < m e y < n, um par para o qual o valor da expressão xy - x2 + y seja máximo e calcular também esse máximo. */

int main()
{
    int m, n, x, y, max, x_max, y_max, valor;

    printf("\nDeterminarcao de valor maximo para xy - x^2 + y com x <= m e y <= n\nentre dois naturais m e n.\n\n");
    printf("Entre com m: ");
    scanf("%d", &m);
    printf("\n\nEntre com n: ");
    scanf("%d", &n);

    max = x_max = y_max = 0;

    for(x = 0; x <= m; x++){
        for(y = x; y <= n; y++){
            valor = x*y - x*x + y;
            if(valor > max){
                max = valor;
                x_max = x;
                y_max = y;
            }
        }
    }

    printf("\n\nO valor maximo = %d com o par (%d, %d)\n\n", max, x_max, y_max);

    return 0;
}

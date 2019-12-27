#include <stdio.h>
#define EPS 0.01

/* Dado n, imprimir a raiz quadrada de n sem usar <math.h> */

double modulo(double a)
{
    double mod;

    if(a >= 0){
       mod = a;
    }
    else{
        mod = -a;
    }

    return mod;
}
int main()
{
    int n;
    double r0, r1, raiz;

    printf("\n\tCalculo da raiz quadrada de um numero n\n\n");
    printf("Entre com n: ");
    scanf("%d", &n);

    if(n == 0){
        printf("\n\nA raiz quadrada de %d = 0\n", n);

        return 0;
    }

    n = 1.0 * n;
    r0 = n;
    r1 = (r0 + (n / r0)) / 2;


    if(modulo (r0 - r1) < EPS){
        raiz = r1;

        printf("\n\nA raiz quadrada de %d = %g\n", n, raiz);

        return 0;
    }
    else{
        while(modulo (r0 - r1) >= EPS){
            r0 = r1;
            r1 = (r0 + (n / r0))/2;
        }

        raiz = r1;

        printf("\n\nA raiz quadrada de %d = %g\n", n, raiz);

        return 0;
    }
}

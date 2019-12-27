/***************************************************************/
/**                                                           **/
/**   Tiago De Almeida Takeda          Número USP 10792132    **/
/**   Exercício-Programa 02                                   **/
/**   Professor: Alair Do Lago                                **/
/**   Turma: 03                                               **/
/**                                                           **/
/***************************************************************/

#include <stdio.h>
#define TRUE 1
#define FALSE 0
#define EPS 0.00000001


int chao(int derrotas, int N);
double RaizCubica(x);
double NovaCaixa(double caixa);
double semente(int inteiro);


int main(){
    double teto;

    int carta, maximo, estourou, derrotas, N;

    printf("\n      'Seven n Half'\n\n");

    for(teto = 0.5; teto <= 7.5; teto += 0.5){
        for(N = 0; N < 10000; N++){
            carta = chao(caixa*10 + 1);

            caracteres = chao(100*(derrotas/N) + 0.5);
        }
        printf("%d  %d  ");

        caracteres = chao(derrotas, N);

        for(i = 0; i < caracteres; i++){
            printf("*");
        }
    }
}

int chao(int x){
    int inteiro;

    for(inteiro = 0; x >= 1.0; inteiro++){
        x -= 1.0;
    }

    return inteiro;
}

double RaizCubica(x){
    int i;
    float x0, x1;

    if(x == 0){
        return x;
    }
    else{

        /* sequencia para pegar o inteiro mais proximo de x */
        for(i = 0; i*i*i < x; i++);

        x0 = 1.0*i;
        x1 = (2.0*x0 + (1.0*x / (x0*x0)))/3.0;

        while((x1 - x0) >= EPS){
            x0 = x1;
            x1 = (2*x0 + (x / x0*x0))/3;
        }
    }

    return x1;
}

double NovaCaixa(double caixa){
    double rifa;

    rifa = 9821.0 * RaizCubica(caixa) + 0.211327;
    caixa = rifa - chao(rifa);
}

double semente(double caixa){
    int inteiro, i;
    double x;

    printf("Entre com um numero inteiro: ");
    scanf("%d", &inteiro);

    x = 1.0*inteiro;

    for(i = 0; inteiro > 0; i++){
        inteiro /= 10;
    }

    while(i > 0){
        x /= 10;
        i--;
    }

    return caixa;
}

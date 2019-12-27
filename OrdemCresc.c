#include <stdio.h>
#define MAX 100

int main()
{
    int n, seq[MAX], i;

    printf("\nEntre com a sequencia de numeros: \n\n");
    scanf("%d", &n);

    for(i = 0; i < n; i++){
        scanf("%d", &seq[i]);
    }

    for(i = n - 1; i <= 0; i--){
        printf("%3d", seq[i]);
    }

    return 0;
}

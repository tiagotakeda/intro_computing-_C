#include <stdio.h>

/* Dados o numero n de alunos de uma turma de Introducao aos Automatos da Pilha (MAC 414) e suas notas da primeira prova,
    determinar a maior e a menor notas obtidas por essa turma (Nota maxima = 100 e nota minima = 0). */

int main()
{
    int nalunos, nmaior, nmenor, nota, i;

    printf("\nDigite o numero de alunos: ");
    scanf("%d", &nalunos);

    nmenor = 100;
    nmaior = 0;
    for(i = 1; i <= nalunos; i++){
        printf("\n\nNota do aluno %d: ", i);
        scanf("%d", &nota);

        if(nota > nmaior){
            nmaior = nota;
        }
        if(nota < nmenor){
            nmenor = nota;
        }

    }

    printf("\nNota maxima = %d", nmaior);
    printf("\nNota minima = %d", nmenor);

    return 0;
}

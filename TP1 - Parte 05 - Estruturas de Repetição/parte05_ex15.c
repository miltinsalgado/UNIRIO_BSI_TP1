/*
    5.15) Leia notas de alunos at� que o usu�rio digite -1. Ao
    final imprima a m�dia da turma. Nota < 0 ou > 10 deve ser ignorada.
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    printf("EXERC�CIO 5.15\n");

    int cont = 0;
    float nota = 0, soma = 0, media = 0;

    while (nota != 1)
    {
        printf("\nDigite uma nota de um aluno (de 0 at� 10) ou -1 para terminar a execu��o: ");
        scanf("%f", &nota);

        if (nota == -1)
            break;
        
        else if (nota < 0 || nota > 10)
            continue;

        cont++;
        soma += nota;
    }

    media = soma / cont;

    printf("\nM�dia de notas da turma: %.2f", media);

    printf("\n\n");
}
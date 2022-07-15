/*
    Lista 03 - Exerc�cio 32
    Uma escola tem 5 turmas e cada turma tem n alunos.  
    Fa�a um programa que leia as notas dos alunos de uma turma 
    e imprima a m�dia da turma e o total de alunos da turma com nota superior ou igual a 7,0. 
    Ao final, imprima a m�dia geral da escola. Notas inv�lidas n�o devem ser consideradas. 
*/

#include <stdio.h>
#include <locale.h>

int main ()
{
    setlocale(LC_ALL, "");
    printf("LISTA 03 - EXERC�CIO 32\n");

    int alunos = 0, total_alunos_escola = 0, alunos_nota_7_ou_mais = 0;
    float nota = 0, soma_notas_alunos_turma = 0, soma_notas_alunos_escola = 0, media_notas_alunos_turma = 0, media_notas_alunos_escola = 0;

    for (int turma = 1; turma <= 5; turma++)
    {
        printf("\nTurma %d", turma);
        printf("\n");

        printf("\nDigite a quantidade de alunos da turma %d: ", turma);
        scanf("%d", &alunos);

        if (alunos < 0)
            alunos = 0;
        
        total_alunos_escola += alunos;

        soma_notas_alunos_turma = 0;
        alunos_nota_7_ou_mais = 0;

        for (int aluno = 1; aluno <= alunos; aluno++)
        {
            printf("\nDigite a nota do aluno %d: ", aluno);
            scanf("%f", &nota);

            if (nota > 10)
                nota = 10;
            
            else if (nota < 0)
                nota = 0;

            if (nota >= 7)
                alunos_nota_7_ou_mais++;

            soma_notas_alunos_turma += nota;
        }
        
        if (alunos == 0)
            media_notas_alunos_turma = 0;
        
        else
            media_notas_alunos_turma = soma_notas_alunos_turma / alunos;
        
        soma_notas_alunos_escola += soma_notas_alunos_turma;

        printf("\nM�dia da turma %d: %.2f", turma, media_notas_alunos_turma);
        printf("\nTotal de alunos da turma %d com nota superior ou igual a 7,0: %d", turma, alunos_nota_7_ou_mais);
        printf("\n");
    }

    if (total_alunos_escola == 0)
        media_notas_alunos_escola = 0;

    else
        media_notas_alunos_escola = soma_notas_alunos_escola / total_alunos_escola;

    printf("\nM�dia geral da escola: %.2f", media_notas_alunos_escola);

    printf("\n\n");
}
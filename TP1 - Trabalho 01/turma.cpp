/*
    Trabalho 01 - Questão 03 - Programa: turma.cpp (3,0 pontos)
    Um  professor  ministra  aulas  de  Programação  para  duas  turmas  (turma  A  e  turma  B).    
    Por um  erro  no  sistema  acadêmico,  alguns  alunos  que  se  inscreveram  na  turma  A,  
    também  foram  inscritos  na  turma  B.
    
    O  professor  precisa  de  um  programa  em  C  que  leia  as  matrículas de todos os alunos da turma A, 
    depois leia  as matrículas  de todos os alunos da  turma B e, ao final, imprima: 
    • As matrículas dos alunos que estão inscritos na turma A e na turma B. 
    • As matrículas dos alunos que estão inscritos somente na turma A. 
    • As matrículas dos alunos que estão inscritos somente na turma B. 
    
    Restrições: 
    a) Matrícula é um número inteiro positivo de 6 dígitos (zeros à esquerda não contam). 
    Se a matrícula  digitada  for  inválida  o  programa  deve  emitir  uma  mensagem  de  erro  e solicitá-la novamente. 
    b) A turma A tem n alunos, onde n > 0. 
    c) A turma B tem k alunos, onde k > 0. 
    d) n pode ser igual ou diferente de k. 
    e) Todo o código deverá estar implementado na função main. 
    f) Não são permitidas variáveis globais.
*/

#include <stdio.h>
#include <locale.h>

int main ()
{
    setlocale(LC_ALL, "");
    printf("TRABALHO 01 - QUESTÃO 03\n");

    int n = 0, k = 0;

    do
    {
        printf("\nDigite a quantidade de alunos inscritos na turma A: ");
        scanf("%d", &n);

        if (n < 1)
            printf("\nA quantidade de alunos inscritos na turma A deve ser maior do que 0! Por favor, digite novamente");
        
    } while (n < 1);

    do
    {
        printf("\nDigite a quantidade de alunos inscritos na turma B: ");
        scanf("%d", &k);

        if (k < 1)
            printf("\nA quantidade de alunos inscritos na turma B deve ser maior do que 0! Por favor, digite novamente");
        
    } while (k < 1);

    int matriculas_A[n], matriculas_B[k];
    int matricula = 0;

    printf("\nDigite as matrículas dos alunos inscritos na turma A: ");
    printf("\n");

    bool matricula_repetida = false;

    for (int i = 0; i < n; i++)
    {
        do
        {
            printf("Matrícula do aluno %d: ", i + 1);
            scanf("%d", &matricula);
            matricula_repetida = false;

            for (int k = i; k >= 0; k--)
            {
                if (matriculas_A[k] == matricula)
                    matricula_repetida  = true;
            }

            if (matricula < 100000 || matricula > 999999)
                printf("\nA matrícula é um número inteiro positivo de 6 dígitos (zeros à esquerda não contam). Por favor, digite novamente\n");

            if (matricula_repetida)
                printf("\nMatrícula de número %d já está inserida na turma A. Por favor, digite novamente\n", matricula);

        } while (matricula < 100000 || matricula > 999999 || matricula_repetida);

        matriculas_A[i] = matricula;
    }

    printf("\nDigite as matrículas dos alunos inscritos na turma B: ");
    printf("\n");

    for (int j = 0; j < k; j++)
    {
        do
        {
            printf("Matrícula do aluno %d: ", j + 1);
            scanf("%d", &matricula);
            matricula_repetida = false;

            for (int l = j; l >= 0; l--)
            {
                if (matriculas_B[l] == matricula)
                    matricula_repetida  = true;
            }

            if (matricula <= 100000 || matricula >= 999999)
                printf("\nA matrícula é um número inteiro positivo de 6 dígitos (zeros à esquerda não contam). Por favor, digite novamente\n");

            if (matricula_repetida)
                printf("\nMatrícula de número %d já está inserida na turma B. Por favor, digite novamente\n", matricula);

        } while (matricula <= 100000 || matricula >= 999999 || matricula_repetida);
        
        matriculas_B[j] = matricula;
    }

    printf("\n");
    printf("\nMatrículas dos alunos que estão inscritos na turma A e na turma B:");

    bool vazio = true;
    bool achou = false;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < k; j++)
        {
            if (matriculas_A[i] == matriculas_B[j])
            {
                vazio = false;
                printf("\n%d", matriculas_A[i]);
            }
        }
    }

    if (vazio)
        printf("\nNão há lunos inscritos na turma A e na turma B");
        
    vazio = true;
    achou = false;

    printf("\n");
    printf("\nMatrículas dos alunos que estão inscritos somente na turma A:");

    for (int i = 0; i < n; i++)
    {
        achou = false;
        for (int j = 0; j < k; j++)
            if (matriculas_A[i] == matriculas_B[j])
                achou = true;

        if (!achou)
        {
            vazio = false;
            printf("\n%d", matriculas_A[i]);
        }
    }

    if (vazio)
        printf("\nNão há alunos inscritos somente na turma A");
    
    vazio = true;
    achou = false;

    printf("\n");
    printf("\nMatrículas dos alunos que estão inscritos somente na turma B:");

    for (int j = 0; j < k; j++)
    {
        achou = false;
        for (int i = 0; i < n; i++)
            if (matriculas_B[j] == matriculas_A[i])
                achou = true;

        if (!achou)
        {
            vazio = false;
            printf("\n%d", matriculas_B[j]);
        }
    }

    if (vazio)
        printf("\nNão há alunos inscritos somente na turma B");

    printf("\n\n");
}
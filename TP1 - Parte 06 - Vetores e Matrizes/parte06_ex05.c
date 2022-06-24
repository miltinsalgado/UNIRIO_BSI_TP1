/*
    Parte 06 - Exerc�cio 05
    Leia um n�mero n e crie um vetor notas de tamanho n.
    Em seguida, leia as notas de n alunos. 
    Por fim, imprima a m�dia da turma e os alunos que tiraram acima da m�dia.
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    printf("PARTE 06 - EXERC�CIO 05\n");

    int n = 0;

    printf("\nDigite a quantidade de alunos: ");
    scanf("%d", &n);

    float notas[n];

    printf("\nDigite as notas dos alunos nas posi��es correspondentes:");
    printf("\n");

    for (int i = 0; i < n; i++)
    {
        printf("Nota do aluno %d: ", i + 1);
        scanf("%f", &notas[i]);
    }

    float soma = 0, media = 0;

    for (int j = 0; j < n; j++)
        soma += notas[j];

    media = soma / n;

    printf("\nM�dia da turma: %.2f", media);
    printf("\n\nAlunos que tiraram nota acima da m�dia:");

    for (int k = 0; k < n; k++)
        if (notas[k] > media)
            printf("\nAluno %d", k + 1);

    printf("\n\n");
}
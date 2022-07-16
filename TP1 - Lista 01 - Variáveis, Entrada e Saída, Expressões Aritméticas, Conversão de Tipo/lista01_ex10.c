/*
    Lista 01 - Exercício 10
    eia 3 notas de um aluno e seus respectivos pesos. Depois, calcule e imprima a média ponderada do aluno.
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    printf("LISTA 01 - EXERCÍCIO 10\n");

    float nota1 = 0, nota2 = 0, nota3 = 0;
    int peso1 = 0, peso2 = 0, peso3 = 0;

    printf("\nDigite a primeira nota do aluno: ");
    scanf("%f", &nota1);

    printf("\nDigite o peso da primeira nota do aluno: ");
    scanf("%d", &peso1);

    printf("\nDigite a segunda nota do aluno: ");
    scanf("%f", &nota2);

    printf("\nDigite o peso da segunda nota do aluno: ");
    scanf("%d", &peso2);

    printf("\nDigite a terceira nota do aluno: ");
    scanf("%f", &nota3);

    printf("\nDigite o peso da terceira nota do aluno: ");
    scanf("%d", &peso3);

    float media_ponderada = (nota1 * peso1 + nota2 * peso2 + nota3 * peso3) / (peso1 + peso2 + peso3);

    printf("\nMédia ponderada do aluno: %.2f", media_ponderada);

    printf("\n\n");
}
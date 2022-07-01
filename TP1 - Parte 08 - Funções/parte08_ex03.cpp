/*
    Parte 08 - Exercício 03
    Leia um valor n e, em seguida, leia duas notas para n alunos. 
    A partir dessas duas notas, calcule e imprima a média aritmética do aluno. 
    A leitura das notas, cálculo e impressão da média deve ser implementada em uma função.
*/

#include <stdio.h>
#include <locale.h>

void calcula_media()
{
    float notas[2], soma = 0, media = 0;

    printf("\n");
    for (int i = 0; i < 2; i++)
    {
        printf("Digite a %dª nota: ", i + 1);
        scanf("%f", & notas[i]);
        soma += notas[i];
    }

    media = soma / 2;
    printf("Média das notas: %.2f", media);
    printf("\n");
}

int main()
{
    setlocale(LC_ALL, "");
    printf("PARTE 08 - EXERCÍCIO 03\n");

    int n = 0;

    printf("\nDigite a quantidade de alunos: ");
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++)
    {
        printf("\nDigite as notas do %d° aluno: ", i + 1);
        calcula_media();
    }
    
    printf("\n\n");
}
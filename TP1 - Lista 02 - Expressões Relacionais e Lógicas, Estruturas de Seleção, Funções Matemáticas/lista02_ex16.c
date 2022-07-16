/*
    Lista 02 - Exercício 16
    Leia a nota de um aluno e transforme-a em um conceito. 
    As notas 10,0 a 9,0 receberão conceito A, as notas de 8,9 a 7,0 receberão conceito B, 
    as notas de 6,9 a 5,0 receberão conceito C e abaixo de 5,0 conceito D. 
    Caso a nota seja inválida, imprima "Inválida". 
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    printf("LISTA 02 - EXERCÍCIO 16\n");

    float nota = 0;

    printf("\nDigite a nota do aluno: ");
    scanf("%f", &nota);

    if (nota >= 9 && nota <= 10)
        printf("\nConceito A");

    else if (nota >= 7 && nota < 9)
        printf("\nConceito B");

    else if (nota >= 5 && nota < 7)
        printf("\nConceito C");

    else if (nota >= 0 && nota < 5)
        printf("\nConceito D");

    else
        printf("\nInválida");

    printf("\n\n");
}
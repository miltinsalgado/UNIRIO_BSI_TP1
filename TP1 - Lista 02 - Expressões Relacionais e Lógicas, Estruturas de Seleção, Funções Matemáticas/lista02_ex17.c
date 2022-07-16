/*
    Lista 02 - Exerc�cio 17
    Leia a nota de um aluno e transforme-a em conceito. 
    As notas 10 e 9 receber�o conceito A, as notas de 8 e 7 receber�o conceito B, 
    as notas de 6 e 5 receber�o conceito C e abaixo de 5 conceito D. 
    Caso a nota seja inv�lida, imprima "Inv�lida".
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    printf("LISTA 02 - EXERC�CIO 17\n");

    int nota = 0;

    printf("\nDigite a nota do aluno: ");
    scanf("%d", &nota);

    if (nota == 9 || nota == 10)
        printf("\nConceito A");

    else if (nota == 7 || nota == 8)
        printf("\nConceito B");

    else if (nota == 5 || nota == 6)
        printf("\nConceito C");

    else if (nota >= 0 && nota < 5)
        printf("\nConceito D");

    else
        printf("\nInv�lida");

    printf("\n\n");
}
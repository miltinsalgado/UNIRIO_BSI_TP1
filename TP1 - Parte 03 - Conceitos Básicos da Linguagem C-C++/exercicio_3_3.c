/*
    3.3) Crie um programa com duas vari�veis inteiras
    inicializadas e imprima seus valores. Em seguida troque o
    valor de uma vari�vel com a outra e imprima novamente os
    valores.
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    printf("EXERC�CIO 3.3\n");

    int a = 10, b = 5;

    printf("\nValor de a: %d\nValor de b: %d\n", a, b);

    int aux = a;
    a = b;
    b = aux;

    printf("\nValor de a: %d\nValor de b: %d", a, b);

    printf("\n\n");
}
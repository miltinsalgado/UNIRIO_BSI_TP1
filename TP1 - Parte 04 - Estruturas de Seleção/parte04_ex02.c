/*
    Parte 04 - Exercício 02
    Leia dois valores inteiros a e b. Em seguida, imprima primeiro o menor valor e, depois, o maior valor.
*/

#include <stdio.h>
#include <locale.h>

int main ()
{
    setlocale(LC_ALL, "");
    printf("PARTE 04 - EXERCÍCIO 02\n");

    int a = 0, b = 0;

    printf("\nDigite o primeiro número: ");
    scanf("%d", &a);

    printf("\nDigite o segundo número: ");
    scanf("%d", &b);

    if (a > b)
        printf("\nMenor valor: %d\nMaior valor: %d", a, b);

    if (a < b)
        printf("\nMenor valor: %d\nMaior valor: %d", a, b);

    printf("\n\n");
}
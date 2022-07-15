/*
    Lista 03 - Exercício 05
    Imprima os 20 primeiros múltiplos de 5, desconsiderando o zero.
*/

#include <stdio.h>
#include <locale.h>

int main ()
{
    setlocale(LC_ALL, "");
    printf("LISTA 03 - EXERCÍCIO 05\n");

    puts("\nPrimeiros 20 múltiplos de 5, desconsiderando o zero:\n");

    for (int i = 1, k = 5; i <= 20; i++)
        printf("%d ", k * i);

    printf("\n\n");
}
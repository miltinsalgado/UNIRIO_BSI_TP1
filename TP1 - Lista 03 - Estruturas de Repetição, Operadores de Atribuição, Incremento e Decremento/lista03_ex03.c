/*
    Lista 03 - Exerc�cio 03
    Imprima os 50 primeiros n�meros pares, n�o considerando o zero.
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    printf("LISTA 03 - EXERC�CIO 03\n");

    puts("\nPrimeiros 50 n�meros pares, n�o considerando o zero:\n");

    for (int i = 0, k = 2; i < 50; i++, k += 2)
        printf("%d ", k);

    printf("\n\n");
}
/*
    Lista 03 - Exerc�cio 04
    Imprima os 30 primeiros �mpares, n�o considerando o zero.
*/

#include <stdio.h>
#include <locale.h>

int main ()
{
    setlocale(LC_ALL, "");
    printf("LISTA 03 - EXERC�CIO 04\n");

    puts("\nPrimeiros 30 n�meros �mpares, n�o considerando o zero:\n");

    for (int i = 0, k = 1; i < 30; i++, k += 2)
        printf("%d ", k);

    printf("\n\n");
}
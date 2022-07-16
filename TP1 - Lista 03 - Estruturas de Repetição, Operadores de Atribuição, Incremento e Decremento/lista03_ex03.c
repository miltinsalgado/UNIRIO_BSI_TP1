/*
    Lista 03 - Exercício 03
    Imprima os 50 primeiros números pares, não considerando o zero.
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    printf("LISTA 03 - EXERCÍCIO 03\n");

    puts("\nPrimeiros 50 números pares, não considerando o zero:\n");

    for (int i = 0, k = 2; i < 50; i++, k += 2)
        printf("%d ", k);

    printf("\n\n");
}
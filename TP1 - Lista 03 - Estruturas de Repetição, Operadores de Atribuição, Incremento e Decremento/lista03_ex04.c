/*
    Lista 03 - Exercício 04
    Imprima os 30 primeiros ímpares, não considerando o zero.
*/

#include <stdio.h>
#include <locale.h>

int main ()
{
    setlocale(LC_ALL, "");
    printf("LISTA 03 - EXERCÍCIO 04\n");

    puts("\nPrimeiros 30 números ímpares, não considerando o zero:\n");

    for (int i = 0, k = 1; i < 30; i++, k += 2)
        printf("%d ", k);

    printf("\n\n");
}
/*
    Lista 03 - Exercício 02
    Imprima todos os números de 50 até 1.
*/

#include <stdio.h>
#include <locale.h>

int main ()
{
    setlocale(LC_ALL, "");
    printf("LISTA 03 - EXERCÍCIO 02\n");

    puts("\nTodos os números de 50 até 1:\n");

    for (int i = 50; i >= 1; i--)
        printf("%d ", i);

    printf("\n\n");
}
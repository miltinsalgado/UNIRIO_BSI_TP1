/*
    Lista 03 - Exerc�cio 02
    Imprima todos os n�meros de 50 at� 1.
*/

#include <stdio.h>
#include <locale.h>

int main ()
{
    setlocale(LC_ALL, "");
    printf("LISTA 03 - EXERC�CIO 02\n");

    puts("\nTodos os n�meros de 50 at� 1:\n");

    for (int i = 50; i >= 1; i--)
        printf("%d ", i);

    printf("\n\n");
}
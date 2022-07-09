/*
    Lista 03 - Exercício 06
    Percorra os números de 1000 a 1999 e imprima aqueles que, quando divididos por 11 dão resto igual a 5.
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    printf("LISTA 03 - EXERCÍCIO 06\n");

    puts("\nNúmeros  de  1000  a  1999  que quando  divididos  por  11 dão  resto igual a 5:\n");

    for (int i = 1000; i <= 1999; i++)
        if (i % 11 == 5)
            printf("%d ", i);

    printf("\n\n");
}
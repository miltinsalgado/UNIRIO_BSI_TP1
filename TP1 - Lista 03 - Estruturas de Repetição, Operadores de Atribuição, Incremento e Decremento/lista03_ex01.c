/*
    Lista 03 - Exercício 01
    Imprima todos os números de 1 até 40. 
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    printf("LISTA 03 - EXERCÍCIO 01\n");

    puts("\nTodos os números de 1 até 40:\n");

    for (int i = 1; i <= 40; i++)
        printf("%d ", i);
    
    printf("\n\n");
}
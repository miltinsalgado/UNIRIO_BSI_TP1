/*
    Lista 03 - Exerc�cio 01
    Imprima todos os n�meros de 1 at� 40. 
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    printf("LISTA 03 - EXERC�CIO 01\n");

    puts("\nTodos os n�meros de 1 at� 40:\n");

    for (int i = 1; i <= 40; i++)
        printf("%d ", i);
    
    printf("\n\n");
}
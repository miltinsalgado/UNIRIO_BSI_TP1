/*
    Lista 02 - Exercício 03
    Leia um número inteiro n e informe se ele é divisível por 3 ou por 7.
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    printf("LISTA 02 - EXERCÍCIO 03\n");

    int num = 0;

    printf("\nDigite um número inteiro: ");
    scanf("%d", &num);
    
    if (num % 3 == 0 || num % 7 == 0)
        printf("\nO número %d é divisível por 3 ou por 7", num);

    else
        printf("\nO número %d não é divisível por 3 ou por 7", num);

    printf("\n\n");
}
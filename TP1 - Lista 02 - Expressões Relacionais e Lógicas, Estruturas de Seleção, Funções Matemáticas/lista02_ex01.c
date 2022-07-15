/*
    Lista 02 - Exercício 01
    Leia um número inteiro n e informe se ele é ou não divisível por 6.
*/

#include <stdio.h>
#include <locale.h>

int main ()
{
    setlocale(LC_ALL, "");
    printf("LISTA 02 - EXERCÍCIO 01\n");

    int num = 0;

    printf("\nDigite um número inteiro: ");
    scanf("%d", &num);
    
    if (num % 6 == 0)
        printf("\nO número %d é divisível por 6", num);

    else
        printf("\nO número %d não é divisível por 6", num);

    printf("\n\n");
}
/*
    Parte 04 - Exercício 04
    Leia um valor inteiro n e imprima uma mensagem dizendo se n é par ou ímpar.
*/

#include <stdio.h>
#include <locale.h>

int main ()
{
    setlocale(LC_ALL, "");
    printf("PARTE 04 - EXERCÍCIO 04\n");

    int n = 0;

    printf("\nDigite um número: ");
    scanf("%d", &n);

    if (n % 2 == 0)
        printf("\nO número %d é par!", n);

    else
        printf("\nO número %d é ímpar!", n);

    printf("\n\n");
}
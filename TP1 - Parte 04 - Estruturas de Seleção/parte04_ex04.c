/*
    Parte 04 - Exerc�cio 04
    Leia um valor inteiro n e imprima uma mensagem dizendo se n � par ou �mpar.
*/

#include <stdio.h>
#include <locale.h>

int main ()
{
    setlocale(LC_ALL, "");
    printf("PARTE 04 - EXERC�CIO 04\n");

    int n = 0;

    printf("\nDigite um n�mero: ");
    scanf("%d", &n);

    if (n % 2 == 0)
        printf("\nO n�mero %d � par!", n);

    else
        printf("\nO n�mero %d � �mpar!", n);

    printf("\n\n");
}
/*
    Parte 04 - Exerc�cio 03
    Leia dois valores inteiros a e b e imprima uma mensagem dizendo se a � menor ou igual a b ou se a � maior que b.
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    printf("PARTE 04 - EXERC�CIO 03\n");

    int a = 0, b = 0;

    printf("\nDigite o primeiro n�mero: ");
    scanf("%d", &a);

    printf("\nDigite o segundo n�mero: ");
    scanf("%d", &b);

    if (a <= b)
        printf("\nO n�mero %d � menor ou igual a %d", a, b);

    else
        printf("\nO n�mero %d � maior que %d", a, b);

    printf("\n\n");
}
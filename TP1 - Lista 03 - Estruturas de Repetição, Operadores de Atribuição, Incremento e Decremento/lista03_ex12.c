/*
    Lista 03 - Exerc�cio 12
    Leia um n�mero inteiro n (n >= 0) e informe quantos d�gitos ele tem.
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    printf("LISTA 03 - EXERC�CIO 12\n");

    int n = 0, cont_digitos = 0;

    printf("\nDigite um n�mero inteiro: ");
    scanf("%d", &n);

    if (n < 0)
        printf("\nO n�mero deve ser maior ou igual a zero");

    else if (n == 0)
        cont_digitos++;

    else
        for (int i = n; i > 0; i /= 10)
            cont_digitos++;

    printf("\nO n�mero %d tem %d d�gito(s)", n, cont_digitos);

    printf("\n\n");
}
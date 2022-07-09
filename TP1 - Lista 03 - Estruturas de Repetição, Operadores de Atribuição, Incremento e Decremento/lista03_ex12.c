/*
    Lista 03 - Exercício 12
    Leia um número inteiro n (n >= 0) e informe quantos dígitos ele tem.
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    printf("LISTA 03 - EXERCÍCIO 12\n");

    int n = 0, cont_digitos = 0;

    printf("\nDigite um número inteiro: ");
    scanf("%d", &n);

    if (n < 0)
        printf("\nO número deve ser maior ou igual a zero");

    else if (n == 0)
        cont_digitos++;

    else
        for (int i = n; i > 0; i /= 10)
            cont_digitos++;

    printf("\nO número %d tem %d dígito(s)", n, cont_digitos);

    printf("\n\n");
}
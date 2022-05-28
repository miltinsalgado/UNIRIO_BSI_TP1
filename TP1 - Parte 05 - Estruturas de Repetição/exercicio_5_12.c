/*
    5.12) Leia um número inteiro n e verifique se ele é ou não um número primo.
*/

#include <stdio.h>
#include <locale.h>
#include <stdbool.h>

int main()
{
    setlocale(LC_ALL, "");
    printf("EXERCÍCIO 5.12\n");

    int n = 0;
    bool primo = true;

    printf("\nDigite um número: ");
    scanf("%d", &n);

    for (int i = 1; i < n; i++)
        if (n % i == 0 && i != 1)
            primo = false;

    if (primo)
        printf("\nO número %d é primo", n);

    else
        printf("\nO número %d não é primo", n);

    printf("\n\n");
}
/*
    Lista 03 - Exercício 33
    Leia um número inteiro k e imprima todos os números primos no intervalo de 1 a k.
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    printf("LISTA 03 - EXERCÍCIO 33\n");

    int k = 0;

    printf("\nDigite um número inteiro positivo: ");
    scanf("%d", &k);

    if (k <= 0)
        printf("\nNúmero inteiro inválido");

    else
    {
        printf("\nTodos os números primos no intervalo de 1 a %d:", k);
        printf("\n");

        for (int i = 1; i <= k; i++)
            if ((i == 1 || i == 2 || i == 3 || i == 5 || i == 7) || (i % 2 != 0 && i % 3 != 0 && i % 5 != 0 && i % 7 != 0))
                printf("%d ", i);
    }

    printf("\n\n");
}
/*
    Lista 03 - Exercício 15
    Leia vários números inteiros positivos até o usuário digitar zero e imprima quantos são pares.
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    printf("LISTA 03 - EXERCÍCIO 15\n");

    int num = 1, cont_par = 0;

    while (1)
    {
        printf("\nDigite um número inteiro positivo: ");
        scanf("%d", &num);

        if (num == 0)
            break;

        else if (num < 0)
            printf("\nDigite apenas números positivos!");

        else if (num % 2 == 0)
            cont_par++;
    }

    printf("\nQuantidade de números pares: %d", cont_par);

    printf("\n\n");
}
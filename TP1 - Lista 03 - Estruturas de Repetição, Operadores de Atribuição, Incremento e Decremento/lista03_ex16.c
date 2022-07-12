/*
    Lista 03 - Exercício 16
    Leia vários números inteiros positivos até o usuário digitar zero e imprima quantos são ímpares e a soma deles. 
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    printf("LISTA 03 - EXERCÍCIO 16\n");

    int num = 0, cont_impar = 0, soma_impar = 0;

    while (1)
    {
        printf("\nDigite um número inteiro positivo: ");
        scanf("%d", &num);

        if (num == 0)
            break;

        else if (num < 0)
            printf("\nDigite apenas números positivos!");

        else if (num % 2 != 0)
        {
            cont_impar++;
            soma_impar += num;
        }
    }

    printf("\nQuantidade de números ímpares: %d", cont_impar);
    printf("\nSoma dos números ímpares: %d", soma_impar);

    printf("\n\n");
}
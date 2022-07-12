/*
    Lista 03 - Exerc�cio 16
    Leia v�rios n�meros inteiros positivos at� o usu�rio digitar zero e imprima quantos s�o �mpares e a soma deles. 
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    printf("LISTA 03 - EXERC�CIO 16\n");

    int num = 0, cont_impar = 0, soma_impar = 0;

    while (1)
    {
        printf("\nDigite um n�mero inteiro positivo: ");
        scanf("%d", &num);

        if (num == 0)
            break;

        else if (num < 0)
            printf("\nDigite apenas n�meros positivos!");

        else if (num % 2 != 0)
        {
            cont_impar++;
            soma_impar += num;
        }
    }

    printf("\nQuantidade de n�meros �mpares: %d", cont_impar);
    printf("\nSoma dos n�meros �mpares: %d", soma_impar);

    printf("\n\n");
}
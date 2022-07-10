/*
    Lista 03 - Exerc�cio 15
    Leia v�rios n�meros inteiros positivos at� o usu�rio digitar zero e imprima quantos s�o pares.
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    printf("LISTA 03 - EXERC�CIO 15\n");

    int num = 1, cont_par = 0;

    while (1)
    {
        printf("\nDigite um n�mero inteiro positivo: ");
        scanf("%d", &num);

        if (num == 0)
            break;

        else if (num < 0)
            printf("\nDigite apenas n�meros positivos!");

        else if (num % 2 == 0)
            cont_par++;
    }

    printf("\nQuantidade de n�meros pares: %d", cont_par);

    printf("\n\n");
}
/*
    Lista 03 - Exerc�cio 29
    Leia um n�mero n e imprima um quadrado de asteriscos de n x n (n > 0). Exemplo: n = 3. 
    / * * * 
    / * * * 
    / * * *
*/

#include <stdio.h>
#include <locale.h>

int main ()
{
    setlocale(LC_ALL, "");
    printf("LISTA 03 - EXERC�CIO 29\n");

    int n = 0;

    printf("\nDigite um n�mero inteiro positivo: ");
    scanf("%d", &n);

    if (n <= 0)
        printf("\nN�mero inteiro inv�lido");

    else
    {
        printf("\nQuadrado de lado %d: ", n);
        printf("\n");

        for (int i = 0; i < n; i++)
        {
            printf("\n");
            for (int i = 0; i < n; i++)
                printf("* ");
        }
    }

    printf("\n\n");
}
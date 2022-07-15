/*
    Lista 03 - Exerc�cio 30
    Leia um n�mero n e m e imprima um ret�ngulo de asteriscos de n x m (n > 0 e m > 0)
*/

#include <stdio.h>
#include <locale.h>

int main ()
{
    setlocale(LC_ALL, "");
    printf("LISTA 03 - EXERC�CIO 30\n");

    int n = 0, m = 0;

    printf("\nDigite um n�mero inteiro positivo: ");
    scanf("%d", &n);
    
    printf("\nDigite outro n�mero inteiro positivo: ");
    scanf("%d", &m);

    if (n <= 0 || m <= 0)
        printf("\nN�mero inteiro inv�lido");

    else
    {
        printf("\nRet�ngulo de base %d e altura %d: ", n, m);
        printf("\n");

        for (int i = 0; i < m; i++)
        {
            printf("\n");
            for (int i = 0; i < n; i++)
                printf("* ");
        }
    }

    printf("\n\n");
}
/*
    Lista 03 - Exercício 30
    Leia um número n e m e imprima um retângulo de asteriscos de n x m (n > 0 e m > 0)
*/

#include <stdio.h>
#include <locale.h>

int main ()
{
    setlocale(LC_ALL, "");
    printf("LISTA 03 - EXERCÍCIO 30\n");

    int n = 0, m = 0;

    printf("\nDigite um número inteiro positivo: ");
    scanf("%d", &n);
    
    printf("\nDigite outro número inteiro positivo: ");
    scanf("%d", &m);

    if (n <= 0 || m <= 0)
        printf("\nNúmero inteiro inválido");

    else
    {
        printf("\nRetângulo de base %d e altura %d: ", n, m);
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
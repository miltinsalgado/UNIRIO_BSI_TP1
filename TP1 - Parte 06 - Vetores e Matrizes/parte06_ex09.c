/*
    Parte 06 - Exerc�cio 09
    Leia uma matriz 4x4 de n�meros inteiros e imprima os elementos da diagonal principal e da diagonal secund�ria.
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    printf("PARTE 06 - EXERC�CIO 09\n");

    int matriz[4][4];

    puts("\nDigite os n�meros inteiros das posi��es correspondentes:");

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("matriz[%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("\nElementos da diagonal principal:");

    for (int k = 0; k < 4; k++)
        printf("\n%d", matriz[k][k]);

    printf("\n");
    printf("\nElementos da diagonal secund�ria:");
    
    for (int l = 0; l < 4; l++)
        printf("\n%d", matriz[l][3 - l]);
    
    printf("\n\n");
}
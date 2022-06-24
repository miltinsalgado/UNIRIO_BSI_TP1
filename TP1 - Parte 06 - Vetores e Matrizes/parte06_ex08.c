/*
    Parte 06 - Exerc�cio 08
    Leia uma matriz 2x3 de n�meros inteiros e imprima o somat�rio de cada linha e o somat�rio total.
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    printf("PARTE 06 - EXERC�CIO 08\n");

    int matriz[2][3];

    printf("\nDigite os n�meros inteiros nas posi��es correspondentes:");
    printf("\n");

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("matriz[%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    int soma_linha = 0, soma_total = 0;

    for (int k = 0; k < 2; k++)
    {
        soma_linha = 0;

        for (int l = 0; l < 3; l++)
            soma_linha += matriz[k][l];

        printf("\nSomat�rio da linha %d: %d", k, soma_linha);
        soma_total += soma_linha;
    }

    printf("\nSomat�rio total: %d", soma_total);
    
    printf("\n\n");
}
/*
    Parte 06 - Exercício 08
    Leia uma matriz 2x3 de números inteiros e imprima o somatório de cada linha e o somatório total.
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    printf("PARTE 06 - EXERCÍCIO 08\n");

    int matriz[2][3];

    printf("\nDigite os números inteiros nas posições correspondentes:");
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

        printf("\nSomatório da linha %d: %d", k, soma_linha);
        soma_total += soma_linha;
    }

    printf("\nSomatório total: %d", soma_total);
    
    printf("\n\n");
}
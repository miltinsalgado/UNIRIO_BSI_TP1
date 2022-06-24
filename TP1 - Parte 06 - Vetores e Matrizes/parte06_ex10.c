/*
    Parte 06 - Exercício 10
    Leia dois números n e m e cria uma matriz de inteiros com n linhas e m colunas. 
    Em seguida, leia os valores da matriz e, por fim, imprima a matriz por coluna.
    Exemplo:
    2 4 6
    3 5 7 
    deve ser impressa como
    2 3
    4 5
    6 7
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    printf("PARTE 06 - EXERCÍCIO 10\n");

    int n = 0, m = 0;

    printf("\nDigite um número inteiro: ");
    scanf("%d", &n);

    printf("\nDigite outro número inteiro: ");
    scanf("%d", &m);

    int matriz[n][m];

    puts("\nDigite os números inteiros das posições correspondentes:");

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("matriz[%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    puts("\nMatriz por coluna:");

    for (int k = 0; k < m; k++)
    {
        for (int o = 0; o < n; o++)
            printf("%d ", matriz[o][k]);
        
        printf("\n");
    }
    
    printf("\n\n");
}
/*
    Parte 08 - Exercício 10
    Crie a função moldura que recebe como parâmetro a quantidade de linhas e colunas e desenha uma moldura com essas dimensões. 
    O número mínimo de linhas e colunas é 2.
    Use os caracteres especiais definidos a seguir para desenhar a moldura (ver slides para visualizar):
    ASCII 218
    ASCII 191
    ASCII 192
    ASCII 217
    ASCII 196
    ASCII 179
*/

#include <stdio.h>
#include <locale.h>

void moldura(int linhas, int colunas)
{
    setlocale(LC_ALL, "C");

    putchar(218);
    for (int i = 1; i <= colunas - 2; i++)
        putchar(196);
    putchar(191);

    for (int i = 1; i <= linhas - 2; i++)
    {
        putchar('\n');
        putchar(179);
        for (int j = 1; j <= colunas - 2 ; j++)
            putchar(' ');
        putchar(179);
    }

    putchar('\n');
    putchar(192);
    for (int i = 1; i <= colunas - 2; i++)
        putchar(196);
    putchar(217);
}

int main()
{
    setlocale(LC_ALL, "");
    printf("PARTE 08 - EXERCÍCIO 10\n");

    int linhas = 0, colunas = 0;

    do
    {
        printf("\nDigite o número de linhas da moldura: ");
        scanf("%d", &linhas);

        if (linhas < 2)
            printf("\nO número mínimo de linhas da moldura é 2!");
    } while (linhas < 2);

    do
    {
        printf("\nDigite o número de colunas da moldura: ");
        scanf("%d", &colunas);

        if (colunas < 2)
            printf("\nO número mínimo de colunas da moldura é 2!");
    } while (colunas < 2);

    moldura(linhas, colunas);
    
    printf("\n\n");
}
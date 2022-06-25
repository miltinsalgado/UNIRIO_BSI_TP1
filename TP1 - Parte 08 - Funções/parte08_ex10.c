/*
    Parte 08 - Exercício 10
    Crie a função moldura que recebe como parâmetro a quantidade de linhas e colunas e desenha uma moldura com essas dimensões. 
    O número mínimo de linhas e colunas é 2.
    Use os caracteres especiais definidos a seguir para desenhar a moldura:
    ASCII 218 =? 
    ASCII 191 = ?
    ASCII 192 = ?
    ASCII 217 = ?
    ASCII 196 = ?
    ASCII 179 = ?
*/

#include <stdio.h>
#include <locale.h>
#include <ctype.h>

void moldura(int linhas, int colunas)
{
    setlocale(LC_ALL, "C");
    for (int i = 0; i < linhas; i++)
    {
        printf("\n");
        for (int j = 0; j < colunas; j++)
        {
            if (i == 0)
            {
                if (j == 0)
                    putchar(218);
                
                else if (j != 0 && j != colunas - 1)
                    putchar(196);

                else if (j == colunas - 1)
                    putchar(191);
            }

            else if (i != 0 && i != linhas - 1)
            {
                if (j == 0 || j == colunas - 1)
                    putchar(179);

                else
                    putchar(' ');
            }

            else if (i == linhas - 1)
            {
                if (j == 0)
                    putchar(192);
                
                else if (j != 0 && j != colunas - 1)
                    putchar(196);

                else if (j == colunas - 1)
                    putchar(217);
            }
        }
    }
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
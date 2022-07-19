/*
    Parte 08 - Exerc�cio 10
    Crie a fun��o moldura que recebe como par�metro a quantidade de linhas e colunas e desenha uma moldura com essas dimens�es. 
    O n�mero m�nimo de linhas e colunas � 2.
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
    printf("PARTE 08 - EXERC�CIO 10\n");

    int linhas = 0, colunas = 0;

    do
    {
        printf("\nDigite o n�mero de linhas da moldura: ");
        scanf("%d", &linhas);

        if (linhas < 2)
            printf("\nO n�mero m�nimo de linhas da moldura � 2!");
    } while (linhas < 2);

    do
    {
        printf("\nDigite o n�mero de colunas da moldura: ");
        scanf("%d", &colunas);

        if (colunas < 2)
            printf("\nO n�mero m�nimo de colunas da moldura � 2!");
    } while (colunas < 2);

    moldura(linhas, colunas);
    
    printf("\n\n");
}
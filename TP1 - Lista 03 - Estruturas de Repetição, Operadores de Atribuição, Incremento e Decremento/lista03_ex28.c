/*
    Lista 03 - Exerc�cio 28
    Imprima a tabuada de multiplica��o de 1 at� 10 de forma tabular.
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    printf("LISTA 03 - EXERC�CIO 28\n");

    puts("\nTabuada de multiplica��o de 1 at� 10");

    int produto = 0;

    printf("\n");
    for (int i = 1; i <= 10; i++)
            printf("Tabuada de %d\t", i);

    for (int i = 1; i <= 10; i++)
    {
        printf("\n");
        for (int j = 1; j <= 10; j++)
        {
            produto = i * j;
            printf("%d * %d = %d\t", j, i, produto);
        }
    }

    printf("\n\n");
}
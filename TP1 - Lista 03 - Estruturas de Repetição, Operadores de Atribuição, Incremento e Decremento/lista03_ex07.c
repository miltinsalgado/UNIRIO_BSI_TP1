/*
    Lista 03 - Exerc�cio 07
    Leia 10 valores, um de cada vez, e conte quantos deles s�o divis�veis por 3 ou 5, mas n�o s�o pares. 
    Ao final, imprima essa quantidade.
*/

#include <stdio.h>
#include <locale.h>

int main ()
{
    setlocale(LC_ALL, "");
    printf("LISTA 03 - EXERC�CIO 07\n");

    int valor = 0, cont = 0;

    for (int i = 0; i < 10; i++)
    {
        printf("\nDigite um valor inteiro: ");
        scanf("%d", &valor);

        if ((valor % 3 == 0 || valor % 5 == 0) && valor % 2 != 0)
            cont++;
    }

    printf("\nQuantidade de valores que s�o div�siveis por 3 ou 5 e s�o �mpares: %d", cont);

    printf("\n\n");
}
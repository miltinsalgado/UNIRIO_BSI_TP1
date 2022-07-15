/*
    Lista 03 - Exercício 07
    Leia 10 valores, um de cada vez, e conte quantos deles são divisíveis por 3 ou 5, mas não são pares. 
    Ao final, imprima essa quantidade.
*/

#include <stdio.h>
#include <locale.h>

int main ()
{
    setlocale(LC_ALL, "");
    printf("LISTA 03 - EXERCÍCIO 07\n");

    int valor = 0, cont = 0;

    for (int i = 0; i < 10; i++)
    {
        printf("\nDigite um valor inteiro: ");
        scanf("%d", &valor);

        if ((valor % 3 == 0 || valor % 5 == 0) && valor % 2 != 0)
            cont++;
    }

    printf("\nQuantidade de valores que são divísiveis por 3 ou 5 e são ímpares: %d", cont);

    printf("\n\n");
}
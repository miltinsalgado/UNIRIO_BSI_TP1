/*
    Parte 05 - Exercício 05
    Leia dois números inteiros a e b e imprima todos os valores no intervalo a..b e o somatório dos valores a..b. 
    Se a > b, troque a com b.
*/

#include <stdio.h>
#include <locale.h>

int main ()
{
    setlocale(LC_ALL, "");
    printf("PARTE 05 - EXERCÍCIO 05\n");

    int a = 0, b = 0, cont = 0, aux = 0, soma = 0;

    printf("\nDigite o primeiro número do intervalo: ");
    scanf("%d", &a);

    printf("\nDigite o segundo número do intervalo: ");
    scanf("%d", &b);

    if (a > b)
    {
        printf("\nPrimeiro número digitado é maior do que o segundo! Os valores foram invertidos");
        printf("\n");
        aux = a;
        a = b;
        b = aux;
    }

    if (a == b)
        printf("\nOs dois valores são iguais, portanto não há intervalo");

    else
    {
        cont = a;

        do
        {
            printf("\n%d", cont);
            cont++;
            soma += cont;
        } while (a <= cont && cont <= b);

        printf("\n");
        printf("\nSomatório dos valores no intervalo [%d ; %d]: %d", a, b, soma);
    }

    printf("\n\n");
}
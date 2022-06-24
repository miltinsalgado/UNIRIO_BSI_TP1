/*
    Lista 01 - Exercício 17
    Leia dois inteiros x e y e imprima o maior múltiplo de x menor ou igual a y. 
    Exemplo: se x = 9 e y = 38, então o resultado é 36.
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    printf("LISTA 01 - EXERCÍCIO 17\n");

    int x = 0, y = 0;

    printf("\nDigite um número inteiro: ");
    scanf("%d", &x);

    printf("\nDigite outro número inteiro: ");
    scanf("%d", &y);

    int maior_multiplo = (y / x) * x;

    printf("\nMaior múltiplo de %d menor ou igual a %d: %d", x, y, maior_multiplo);

    printf("\n\n");
}
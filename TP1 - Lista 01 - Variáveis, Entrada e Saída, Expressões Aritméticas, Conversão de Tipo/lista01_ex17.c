/*
    Lista 01 - Exerc�cio 17
    Leia dois inteiros x e y e imprima o maior m�ltiplo de x menor ou igual a y. 
    Exemplo: se x = 9 e y = 38, ent�o o resultado � 36.
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    printf("LISTA 01 - EXERC�CIO 17\n");

    int x = 0, y = 0;

    printf("\nDigite um n�mero inteiro: ");
    scanf("%d", &x);

    printf("\nDigite outro n�mero inteiro: ");
    scanf("%d", &y);

    int maior_multiplo = (y / x) * x;

    printf("\nMaior m�ltiplo de %d menor ou igual a %d: %d", x, y, maior_multiplo);

    printf("\n\n");
}
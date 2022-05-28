/*
    3.8) Leia dois números inteiros e, em seguida, calcule e
    imprima a média aritmética desses dois números.
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    printf("EXERCÍCIO 3.8\n");

    int a = 0, b = 0;

    printf("\nDigite o primeiro número: ");
    scanf("%d", &a);

    printf("\nDigite o segundo número: ");
    scanf("%d", &b);

    float media_aritmetica = (float) (a + b) / 2;

    printf("\nMédia aritmética entre a e b: %f", media_aritmetica);

    printf("\n\n");
}
/*
    3.8) Leia dois n�meros inteiros e, em seguida, calcule e
    imprima a m�dia aritm�tica desses dois n�meros.
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    printf("EXERC�CIO 3.8\n");

    int a = 0, b = 0;

    printf("\nDigite o primeiro n�mero: ");
    scanf("%d", &a);

    printf("\nDigite o segundo n�mero: ");
    scanf("%d", &b);

    float media_aritmetica = (float) (a + b) / 2;

    printf("\nM�dia aritm�tica entre a e b: %f", media_aritmetica);

    printf("\n\n");
}
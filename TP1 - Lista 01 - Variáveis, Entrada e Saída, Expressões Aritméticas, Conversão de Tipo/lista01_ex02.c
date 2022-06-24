/*
    1.2) Leia a base e a altura de um tri‚ngulo, calcule e imprima sua ·rea.
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    printf("EXERCÕCIO 1.2\n");

    float base = 0, altura = 0;

    printf("\nDigite a base do tri‚ngulo: ");
    scanf("%f", &base);
    printf("\nDigite a altura do tri‚ngulo: ");
    scanf("%f", &altura);
    
    float area = (base * altura) / 2;

    printf("\n¡rea do tri‚ngulo de base %.2f e altura %.2f: %.2f", base, altura, area);

    printf("\n\n");
}
/*
    Lista 01 - Exercício 02
    Leia a base e a altura de um triângulo, calcule e imprima sua área.
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    printf("LISTA 01 - EXERCÍCIO 02\n");

    float base = 0, altura = 0;

    printf("\nDigite a base do triângulo: ");
    scanf("%f", &base);
    printf("\nDigite a altura do triângulo: ");
    scanf("%f", &altura);
    
    float area = (base * altura) / 2;

    printf("\nÁrea do triângulo de base %.2f e altura %.2f: %.2f", base, altura, area);

    printf("\n\n");
}
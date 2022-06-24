/*
    Lista 01 - Exercício 09
    Calcule e imprima o volume de um cilindro que será enchido de água para um espetáculo de mágica. 
    Para isso, seu programa deverá ler o raio e a altura do cilindro. 
    Considere: 
    Vc = pi * r^2 * h
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    printf("LISTA 01 - EXERCÍCIO 09\n");

    float raio = 0, altura = 0;

    printf("\nDigite o raio do cilindro: ");
    scanf("%f", &raio);

    printf("\nDigite a altura do cilindro: ");
    scanf("%f", &altura);
    
    float volume = 3.14 * raio * raio * altura;

    printf("\nVolume do cilindro de raio %.2f e altura %.2f: %.2f", raio, altura, volume);

    printf("\n\n");
}
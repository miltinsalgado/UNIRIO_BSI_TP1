/*
    Lista 01 - Exerc�cio 09
    Calcule e imprima o volume de um cilindro que ser� enchido de �gua para um espet�culo de m�gica. 
    Para isso, seu programa dever� ler o raio e a altura do cilindro. 
    Considere: 
    Vc = pi * r^2 * h
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    printf("LISTA 01 - EXERC�CIO 09\n");

    float raio = 0, altura = 0;

    printf("\nDigite o raio do cilindro: ");
    scanf("%f", &raio);

    printf("\nDigite a altura do cilindro: ");
    scanf("%f", &altura);
    
    float volume = 3.14 * raio * raio * altura;

    printf("\nVolume do cilindro de raio %.2f e altura %.2f: %.2f", raio, altura, volume);

    printf("\n\n");
}
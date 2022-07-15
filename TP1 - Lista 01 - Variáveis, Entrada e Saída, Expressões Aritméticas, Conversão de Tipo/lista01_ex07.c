/*
    Lista 01 - Exercício 07
    Leia o raio de uma esfera, calcule e imprima seu volume, sabendo que: 
    Ve = 4/3 * pi * r^3) / 3
*/

#include <stdio.h>
#include <locale.h>

int main ()
{
    setlocale(LC_ALL, "");
    printf("LISTA 01 - EXERCÍCIO 07\n");

    float raio = 0, pi = 3.14;

    printf("\nDigite o raio da esfera: ");
    scanf("%f", &raio);
    
    float volume = (float) 4 / 3 * pi * raio * raio * raio;

    printf("\nVolume da esfera de raio %.2f: %.2f", raio, volume);

    printf("\n\n");
}
/*
    1.7) Leia o raio de uma esfera, calcule e imprima seu volume, sabendo que: 
    Ve = 4/3 * pi * r^3) / 3
*/

#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL, "");
    printf("EXERCÍCIO 1.7\n");

    float raio = 0;

    printf("\nDigite o raio da esfera: ");
    scanf("%f", &raio);
    
    float volume = (float) 4 / 3 * M_PI * pow(raio, 3);

    printf("\nVolume da esfera de raio %.2f: %.2f", raio, volume);

    printf("\n\n");
}
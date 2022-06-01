/*
    1.1) Leia o lado de um cubo, calcule e imprima seu volume.
*/

#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL, "");
    printf("EXERCÍCIO 1.1\n");

    float lado = 0;

    printf("\nDigite o lado do cubo: ");
    scanf("%f", &lado);
    
    float volume = pow(lado, 3);

    printf("\nVolume do cubo de lado %.2f: %.2f", lado, volume);

    printf("\n\n");
}
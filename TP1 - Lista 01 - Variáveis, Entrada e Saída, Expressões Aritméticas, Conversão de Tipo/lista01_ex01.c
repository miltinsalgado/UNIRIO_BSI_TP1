/*
    Lista 01 - Exercício 01
    Leia o lado de um cubo, calcule e imprima seu volume.
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    printf("LISTA 01 - EXERCÍCIO 01\n");

    float lado = 0;

    printf("\nDigite o lado do cubo: ");
    scanf("%f", &lado);
    
    float volume = lado * lado * lado;

    printf("\nVolume do cubo de lado %.2f: %.2f", lado, volume);

    printf("\n\n");
}
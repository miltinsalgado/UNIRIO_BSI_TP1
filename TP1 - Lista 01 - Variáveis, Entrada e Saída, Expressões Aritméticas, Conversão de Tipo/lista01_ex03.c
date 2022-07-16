/*
    Lista 01 - Exercício 03
    Leia o peso e altura de uma pessoa, calcule e imprima seu IMC. Sabe-se que IMC = peso/altura^2.
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    printf("LISTA 01 - EXERCÍCIO 03\n");

    float peso = 0, altura = 0;

    printf("\nDigite o peso da pessoa (em kg/quilogramas): ");
    scanf("%f", &peso);
    printf("\nDigite a altura da pessoa (em m/metros): ");
    scanf("%f", &altura);
    
    float imc = peso / (altura * altura);

    printf("\nIMC de uma pessoa de peso %.2f kg e altura %.2f m: %.2f kg/m^2", peso, altura, imc);

    printf("\n\n");
}
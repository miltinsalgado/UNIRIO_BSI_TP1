/*
    1.6) Leia uma temperatura em graus Celsius e converta-a em graus Fahrenheit, usando a fórmula: 
    F = 32 + ((212 - 32) / 100) * C
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    printf("EXERCÍCIO 1.6\n");

    float temperatura_celsius = 0;

    printf("\nDigite a temperatura (em graus Celsius/°C): ");
    scanf("%f", &temperatura_celsius);
    
    float temperatura_fahrenheit = 32 + ((float) (212 - 32) / 100) * temperatura_celsius;

    printf("\nTemperatura em graus Celsius: %.2f°C", temperatura_celsius);
    printf("\nTemperatura em graus Fahrenheit: %.2f°F", temperatura_fahrenheit);

    printf("\n\n");
}
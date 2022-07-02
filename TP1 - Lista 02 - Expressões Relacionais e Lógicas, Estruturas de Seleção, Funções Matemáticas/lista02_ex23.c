/*
    Lista 02 - Exercício 23
    Leia uma temperatura e a escala (C-Celsius ou F-Fahrenheit) e converta-a para a outra escala.  
    Ou seja, se o usuário informar a temperatura em Celsius esta deverá convertida para Fahrenheit e vice-versa. 
    Fórmulas:  
    C = (F - 32) * 100 / (212 - 32)
    F = 32 + ((212 - 32) / 100) * C
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    printf("LISTA 02 - EXERCÍCIO 23\n");

    float temperatura = 0;
    char escala = ' ';

    printf("\nDigite a temperatura: ");
    scanf("%f", &temperatura);

    printf("\nDigite a escala (C-Celsius ou F-Fahrenheit): ");
    getchar();
    scanf("%c", &escala);

    float c = 0, f = 0;

    if (escala == 'C' || escala == 'c')
    {
        c = temperatura;
        f = 32 + ((float) (212 - 32) / 100) * c;
        printf("\nTemperatura em Celsius: %.2f °C", c);
        printf("\nTemperatura em Fahrenheit: %.2f °F", f);
    }

    else if (escala == 'F' || escala == 'f')
    {
        f = temperatura;
        c = (f - 32) * (float) 100 / (212 - 32);
        printf("\nTemperatura em Fahrenheit: %.2f °F", f);
        printf("\nTemperatura em Celsius: %.2f °C", c);
    }

    printf("\n\n");
}
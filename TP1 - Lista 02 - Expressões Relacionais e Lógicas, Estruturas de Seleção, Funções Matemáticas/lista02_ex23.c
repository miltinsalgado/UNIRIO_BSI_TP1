/*
    Lista 02 - Exerc�cio 23
    Leia uma temperatura e a escala (C-Celsius ou F-Fahrenheit) e converta-a para a outra escala.  
    Ou seja, se o usu�rio informar a temperatura em Celsius esta dever� convertida para Fahrenheit e vice-versa. 
    F�rmulas:  
    C = (F - 32) * 100 / (212 - 32)
    F = 32 + ((212 - 32) / 100) * C
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    printf("LISTA 02 - EXERC�CIO 23\n");

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
        printf("\nTemperatura em Celsius: %.2f �C", c);
        printf("\nTemperatura em Fahrenheit: %.2f �F", f);
    }

    else if (escala == 'F' || escala == 'f')
    {
        f = temperatura;
        c = (f - 32) * (float) 100 / (212 - 32);
        printf("\nTemperatura em Fahrenheit: %.2f �F", f);
        printf("\nTemperatura em Celsius: %.2f �C", c);
    }

    printf("\n\n");
}
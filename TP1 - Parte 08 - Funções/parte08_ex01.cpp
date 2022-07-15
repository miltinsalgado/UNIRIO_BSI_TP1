/*
    Parte 08 - Exercício 01
    Altere o programa apresentado anteriormente para que ele pergunte ao usuário se ele deseja fazer mais uma conversão. 
    Se o usuário responder 'S' ou 's', então chame a função novamente. 
    O programa deve repetir esse comportamento até que o usuário responda 'N' ou 'n'.
*/

#include <stdio.h>
#include <locale.h>
#include <ctype.h>

void converte_temperatura ()
{
    float celsius, fahrenheit, kelvin;

    printf("\nDigite a temperatura em Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = 1.8 * celsius + 32;
    kelvin = celsius + 273;

    printf("F° = %.1f\n", fahrenheit);
    printf("K = %.1f\n", kelvin);
}

int main ()
{
    setlocale(LC_ALL, "");
    printf("PARTE 08 - EXERCÍCIO 01\n");

    char resposta = ' ';

    do
    {
        converte_temperatura ();
        
        printf("\nDeseja continuar? (S ou s para sim | N ou n para não)");
        printf("\nResposta: ");
        getchar ();
        scanf("%c", &resposta);
    } while (toupper(resposta) == 'S');
    
    printf("\n\n");
}
/*
    Parte 08 - Exerc�cio 01
    Altere o programa apresentado anteriormente para que ele pergunte ao usu�rio se ele deseja fazer mais uma convers�o. 
    Se o usu�rio responder 'S' ou 's', ent�o chame a fun��o novamente. 
    O programa deve repetir esse comportamento at� que o usu�rio responda 'N' ou 'n'.
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

    printf("F� = %.1f\n", fahrenheit);
    printf("K = %.1f\n", kelvin);
}

int main ()
{
    setlocale(LC_ALL, "");
    printf("PARTE 08 - EXERC�CIO 01\n");

    char resposta = ' ';

    do
    {
        converte_temperatura ();
        
        printf("\nDeseja continuar? (S ou s para sim | N ou n para n�o)");
        printf("\nResposta: ");
        getchar ();
        scanf("%c", &resposta);
    } while (toupper(resposta) == 'S');
    
    printf("\n\n");
}
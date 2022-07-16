/*
    Parte 04 - Exerc�cio 09
    Leia um valor que representa um ano e imprima se ele � bissexto. 
    Se ele n�o for bissexto, indique qual o pr�ximo ano bissexto.
*/

#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL, "");
    printf("PARTE 04 - EXERC�CIO 09\n");

    int ano = 0, anos_faltantes = 0, proximo_ano_bissexto = 0;

    printf("\nDigite um ano: ");
    scanf("%d", &ano);

    /* SOLU��O SEM OPERADORES L�GICOS

    if (ano % 4 == 0)
    {
        if (ano % 100 == 0)
        {
            if (ano % 400 == 0)
                    printf("\nO ano %d � um ano bissexto", ano);
            else
            {
                printf("\nO ano %d n�o � um ano bissexto", ano);

                anos_faltantes = 4 - (ano % 4);
                proximo_ano_bissexto = ano + anos_faltantes;

                printf("\nO pr�ximo ano bissexto depois de %d � %d", ano, proximo_ano_bissexto);
            }
        }
            
        else
            printf("\nO ano %d � um ano bissexto", ano);
    }

    else
    {
        printf("\nO ano %d n�o � um ano bissexto", ano);

        anos_faltantes = 4 - (ano % 4);
        proximo_ano_bissexto = ano + anos_faltantes;

        printf("\nO pr�ximo ano bissexto depois de %d � %d", ano, proximo_ano_bissexto);
    }
    */
    
    // SOLU��O COM OPERADORES L�GICOS

    if (ano % 4 != 0)
    {
        printf("\nO ano %d n�o � um ano bissexto", ano);

        anos_faltantes = 4 - (ano % 4);
        proximo_ano_bissexto = ano + anos_faltantes;

        printf("\nO pr�ximo ano bissexto depois de %d � %d", ano, proximo_ano_bissexto);
    }
    
    else if (ano % 4 == 0 && ano % 100 != 0)
        printf("\nO ano %d � um ano bissexto", ano);

    else if (ano % 4 == 0 && ano % 100 == 0 && ano % 400 == 0)
        printf("\nO ano %d � um ano bissexto", ano);
    
    else
    {
        printf("\nO ano %d n�o � um ano bissexto", ano);

        anos_faltantes = 4 - (ano % 4);
        proximo_ano_bissexto = ano + anos_faltantes;

        printf("\nO pr�ximo ano bissexto depois de %d � %d", ano, proximo_ano_bissexto);
    }

    printf("\n\n");
}
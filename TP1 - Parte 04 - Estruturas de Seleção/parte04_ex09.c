/*
    Parte 04 - Exercício 09
    Leia um valor que representa um ano e imprima se ele é bissexto. 
    Se ele não for bissexto, indique qual o próximo ano bissexto.
*/

#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL, "");
    printf("PARTE 04 - EXERCÍCIO 09\n");

    int ano = 0, anos_faltantes = 0, proximo_ano_bissexto = 0;

    printf("\nDigite um ano: ");
    scanf("%d", &ano);

    /* SOLUÇÃO SEM OPERADORES LÓGICOS

    if (ano % 4 == 0)
    {
        if (ano % 100 == 0)
        {
            if (ano % 400 == 0)
                    printf("\nO ano %d é um ano bissexto", ano);
            else
            {
                printf("\nO ano %d não é um ano bissexto", ano);

                anos_faltantes = 4 - (ano % 4);
                proximo_ano_bissexto = ano + anos_faltantes;

                printf("\nO próximo ano bissexto depois de %d é %d", ano, proximo_ano_bissexto);
            }
        }
            
        else
            printf("\nO ano %d é um ano bissexto", ano);
    }

    else
    {
        printf("\nO ano %d não é um ano bissexto", ano);

        anos_faltantes = 4 - (ano % 4);
        proximo_ano_bissexto = ano + anos_faltantes;

        printf("\nO próximo ano bissexto depois de %d é %d", ano, proximo_ano_bissexto);
    }
    */
    
    // SOLUÇÃO COM OPERADORES LÓGICOS

    if (ano % 4 != 0)
    {
        printf("\nO ano %d não é um ano bissexto", ano);

        anos_faltantes = 4 - (ano % 4);
        proximo_ano_bissexto = ano + anos_faltantes;

        printf("\nO próximo ano bissexto depois de %d é %d", ano, proximo_ano_bissexto);
    }
    
    else if (ano % 4 == 0 && ano % 100 != 0)
        printf("\nO ano %d é um ano bissexto", ano);

    else if (ano % 4 == 0 && ano % 100 == 0 && ano % 400 == 0)
        printf("\nO ano %d é um ano bissexto", ano);
    
    else
    {
        printf("\nO ano %d não é um ano bissexto", ano);

        anos_faltantes = 4 - (ano % 4);
        proximo_ano_bissexto = ano + anos_faltantes;

        printf("\nO próximo ano bissexto depois de %d é %d", ano, proximo_ano_bissexto);
    }

    printf("\n\n");
}
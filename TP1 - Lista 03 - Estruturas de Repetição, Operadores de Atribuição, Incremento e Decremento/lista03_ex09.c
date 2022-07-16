/*
    Lista 03 - Exercício 09
    Imprima  uma  tabela  de  conversão  de  polegadas  para  centímetros.  
    Deseja-se  que  a  tabela  conste valores desde 1 polegada até 20 polegadas inteiras.  
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    printf("LISTA 03 - EXERCÍCIO 09\n");

    int polegadas = 0;
    float centimetros = 0;

    puts("\nPolegadas  |  Centímetros");

    for (int i = 1; i <= 20; i++)
    {
        polegadas = i;
        centimetros = polegadas * 2.54;

        if (i < 10)
            printf("\n%d          |  %.2f", polegadas, centimetros);
        else
            printf("\n%d         |  %.2f", polegadas, centimetros);
    }

    printf("\n\n");
}
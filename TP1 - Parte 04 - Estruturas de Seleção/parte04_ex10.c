/*
    Parte 04 - Exerc�cio 10
    Leia tr�s valores x, y e z que representam os lados de um tri�ngulo. 
    Em seguida, informe se eles formam um tri�ngulo e, caso formem, indique se � um tri�ngulo equil�tero, is�sceles ou escaleno.
*/

#include <stdio.h>
#include <locale.h>
#include <math.h>

int main ()
{
    setlocale(LC_ALL, "");
    printf("PARTE 04 - EXERC�CIO 10\n");

    float x = 0, y = 0, z = 0;

    printf("\nDigite o lado x de um tri�ngulo: ");
    scanf("%f", &x);

    printf("\nDigite o lado y de um tri�ngulo: ");
    scanf("%f", &y);

    printf("\nDigite o lado z de um tri�ngulo: ");
    scanf("%f", &z);

    if (x + y > z && x + z > y && y + z > x)
    {
        printf("\nOs lados digitados formam um tri�ngulo!");
        printf("\nTipo de tri�ngulo formado: ");

        if (x == y && x == z)
            printf("equil�tero");

        else if ((x == y && x != z) || (x == z && x != y)  || (y == z && y != x))
            printf("is�sceles");

        else
            printf("escaleno");
    }

    else
        printf("\nOs lados digitados n�o formam um tri�ngulo!");

    printf("\n\n");
}
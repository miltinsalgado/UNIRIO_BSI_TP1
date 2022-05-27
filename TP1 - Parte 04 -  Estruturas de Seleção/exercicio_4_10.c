#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL, "");
    printf("EXERC�CIO 4.10\n");

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
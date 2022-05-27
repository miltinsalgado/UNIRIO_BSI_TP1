#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL, "");
    printf("EXERCÍCIO 4.10\n");

    float x = 0, y = 0, z = 0;

    printf("\nDigite o lado x de um triângulo: ");
    scanf("%f", &x);

    printf("\nDigite o lado y de um triângulo: ");
    scanf("%f", &y);

    printf("\nDigite o lado z de um triângulo: ");
    scanf("%f", &z);

    if (x + y > z && x + z > y && y + z > x)
    {
        printf("\nOs lados digitados formam um triângulo!");
        printf("\nTipo de triângulo formado: ");

        if (x == y && x == z)
            printf("equilátero");

        else if ((x == y && x != z) || (x == z && x != y)  || (y == z && y != x))
            printf("isósceles");

        else
            printf("escaleno");
    }

    else
        printf("\nOs lados digitados não formam um triângulo!");

    printf("\n\n");
}
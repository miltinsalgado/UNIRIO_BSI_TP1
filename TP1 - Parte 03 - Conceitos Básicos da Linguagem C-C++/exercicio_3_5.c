/*
    3.5) Leia o raio de um c�rculo e, em seguida, imprima o
    per�metro (2*pi*R) e a �rea (pi*R^2) do c�rculo.
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    printf("EXERC�CIO 3.5\n");

    float raio = 0, perimetro = 0, area = 0, pi = 3.14;

    printf("\nDigite o raio do c�rculo: ");
    scanf("%f", &raio);

    perimetro = 2 * pi * raio;
    area = pi * raio * raio;

    printf("\nPer�metro do c�rculo: %f", perimetro);
    printf("\n�rea do c�rculo: %f", area);

    printf("\n\n");
}
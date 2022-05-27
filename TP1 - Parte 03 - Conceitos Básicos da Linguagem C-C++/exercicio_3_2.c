#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    printf("EXERCÍCIO 3.2\n");

    float a = 10, b = 4;

    printf("\nSoma: %f", a + b);
    printf("\nSubtração: %f", a - b);
    printf("\nMultiplicação: %f", a * b);
    printf("\nDivisão: %f", a / b);

    printf("\n\n");
}
#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    printf("EXERC�CIO 3.2\n");

    float a = 10, b = 4;

    printf("\nSoma: %f", a + b);
    printf("\nSubtra��o: %f", a - b);
    printf("\nMultiplica��o: %f", a * b);
    printf("\nDivis�o: %f", a / b);

    printf("\n\n");
}
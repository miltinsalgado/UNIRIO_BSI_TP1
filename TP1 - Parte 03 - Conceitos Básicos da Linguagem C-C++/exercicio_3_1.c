#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    printf("EXERC�CIO 3.1\n");

    int a = 10, b = 4;

    printf("\nSoma: %d", a + b);
    printf("\nSubtra��o: %d", a - b);
    printf("\nMultiplica��o: %d", a * b);
    printf("\nDivis�o: %d", a / b);

    printf("\n\n");
}
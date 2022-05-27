#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    printf("EXERCÍCIO 3.1\n");

    int a = 10, b = 4;

    printf("\nSoma: %d", a + b);
    printf("\nSubtração: %d", a - b);
    printf("\nMultiplicação: %d", a * b);
    printf("\nDivisão: %d", a / b);

    printf("\n\n");
}
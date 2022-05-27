#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    printf("EXERCÍCIO 3.3\n");

    int a = 10, b = 5;

    printf("\nValor de a: %d\nValor de b: %d\n", a, b);

    int aux = a;
    a = b;
    b = aux;

    printf("\nValor de a: %d\nValor de b: %d", a, b);

    printf("\n\n");
}
/*
    Parte 09 - Exercício 01
    O cálculo de x^n pode ser definido como:
    x^n = {1, n = 0}
    x^n = {x * x^n-1, n > 0}
    Implemente a função recursiva potencia que calcula x^n.
    Caso n < 0 retorne -1.
*/

#include <stdio.h>
#include <locale.h>

long long int potencia(float x, int n)
{
    if (n < 0)
        return -1;

    else if (n == 0)
        return 1;

    return x * potencia(x, n - 1);
}

int main()
{
    setlocale(LC_ALL, "");
    printf("PARTE 09 - EXERCÍCIO 01\n");

    int x = 0, n = 0;

    printf("\nDigite o valor da base: ");
    scanf("%d", &x);

    printf("\nDigite o valor do expoente: ");
    scanf("%d", &n);

    long long int resultado = potencia(x, n);

    if (resultado == -1)
        printf("\nNão é possível calcular com esses valores");

    else
        printf("\n%d^%d = %.lld", x, n, resultado);
    
    printf("\n\n");
}
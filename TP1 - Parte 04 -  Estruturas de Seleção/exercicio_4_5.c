#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    printf("EXERCÍCIO 4.5\n");

    float x = 0, y = 0;

    printf("\nDigite o primeiro número: ");
    scanf("%d", &x);

    printf("\nDigite o segundo número: ");
    scanf("%d", &y);

    if (y == 0)
        printf("\nNão é possível dividir por zero");

    else
    {
        float quociente = x / y;
        printf(("\nResultado da divisão de x por y: %f"), quociente);
    }

    printf("\n\n");
}
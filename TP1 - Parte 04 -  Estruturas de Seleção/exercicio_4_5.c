#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    printf("EXERC�CIO 4.5\n");

    float x = 0, y = 0;

    printf("\nDigite o primeiro n�mero: ");
    scanf("%d", &x);

    printf("\nDigite o segundo n�mero: ");
    scanf("%d", &y);

    if (y == 0)
        printf("\nN�o � poss�vel dividir por zero");

    else
    {
        float quociente = x / y;
        printf(("\nResultado da divis�o de x por y: %f"), quociente);
    }

    printf("\n\n");
}
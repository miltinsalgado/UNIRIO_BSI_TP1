/*
    Parte 04 - Exerc�cio 05
    Leia dois valores reais x e y e imprima a divis�o entre eles. 
    Caso o divisor seja zero, imprima a mensagem "N�o � poss�vel dividir por zero".
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    printf("PARTE 04 - EXERC�CIO 05\n");

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
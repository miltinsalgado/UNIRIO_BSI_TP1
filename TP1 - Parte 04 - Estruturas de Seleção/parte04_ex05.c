/*
    Parte 04 - Exercício 05
    Leia dois valores reais x e y e imprima a divisão entre eles. 
    Caso o divisor seja zero, imprima a mensagem "Não é possível dividir por zero".
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    printf("PARTE 04 - EXERCÍCIO 05\n");

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
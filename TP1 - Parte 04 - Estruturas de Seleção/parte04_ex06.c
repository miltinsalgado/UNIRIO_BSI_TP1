/*
    Parte 04 - Exerc�cio 06
    Leia dois valores inteiros x e y e imprima uma mensagem que informa se:
    x � divisor de y, y � divisor de x,
    ou nem x divide y, nem y divide x.
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    printf("PARTE 04 - EXERC�CIO 06\n");

    int x = 0, y = 0;

    printf("\nDigite o primeiro n�mero: ");
    scanf("%d", &x);

    printf("\nDigite o segundo n�mero: ");
    scanf("%d", &y);

    if (y % x == 0)
        printf("\nO n�mero %d � divisor de %d", x, y);
    
    else
        printf("\nO n�mero %d n�o � divisor de %d", x, y);

    if (x % y == 0)
        printf("\nO n�mero %d � divisor de %d", y, x);

    else
        printf("\nO n�mero %d n�o � divisor de %d", y, x);

    printf("\n\n");
}
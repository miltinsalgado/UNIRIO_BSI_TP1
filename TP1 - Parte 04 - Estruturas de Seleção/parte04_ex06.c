/*
    Parte 04 - Exercício 06
    Leia dois valores inteiros x e y e imprima uma mensagem que informa se:
    x é divisor de y, y é divisor de x,
    ou nem x divide y, nem y divide x.
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    printf("PARTE 04 - EXERCÍCIO 06\n");

    int x = 0, y = 0;

    printf("\nDigite o primeiro número: ");
    scanf("%d", &x);

    printf("\nDigite o segundo número: ");
    scanf("%d", &y);

    if (y % x == 0)
        printf("\nO número %d é divisor de %d", x, y);
    
    else
        printf("\nO número %d não é divisor de %d", x, y);

    if (x % y == 0)
        printf("\nO número %d é divisor de %d", y, x);

    else
        printf("\nO número %d não é divisor de %d", y, x);

    printf("\n\n");
}
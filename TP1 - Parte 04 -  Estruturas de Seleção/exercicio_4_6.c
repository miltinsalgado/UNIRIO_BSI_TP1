#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    printf("EXERCÍCIO 4.6\n");

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
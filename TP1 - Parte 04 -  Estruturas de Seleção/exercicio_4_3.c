#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    printf("EXERCÍCIO 4.3\n");

    int a = 0, b = 0;

    printf("\nDigite o primeiro número: ");
    scanf("%d", &a);

    printf("\nDigite o segundo número: ");
    scanf("%d", &b);

    if (a <= b)
        printf("\nO número %d é menor ou igual a %d", a, b);

    else
        printf("\nO número %d é maior que %d", a, b);

    printf("\n\n");
}
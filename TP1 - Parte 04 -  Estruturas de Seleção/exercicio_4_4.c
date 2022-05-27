#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    printf("EXERCÍCIO 4.4\n");

    int n = 0;

    printf("\nDigite um número: ");
    scanf("%d", &n);

    if (n % 2 == 0)
        printf("\nO número %d é par!", n);

    else
        printf("\nO número %d é ímpar!", n);

    printf("\n\n");
}
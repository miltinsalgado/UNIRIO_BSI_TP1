#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    printf("EXERC�CIO 4.3\n");

    int a = 0, b = 0;

    printf("\nDigite o primeiro n�mero: ");
    scanf("%d", &a);

    printf("\nDigite o segundo n�mero: ");
    scanf("%d", &b);

    if (a <= b)
        printf("\nO n�mero %d � menor ou igual a %d", a, b);

    else
        printf("\nO n�mero %d � maior que %d", a, b);

    printf("\n\n");
}
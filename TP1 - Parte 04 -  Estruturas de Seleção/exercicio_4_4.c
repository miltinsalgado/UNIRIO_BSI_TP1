#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    printf("EXERC�CIO 4.4\n");

    int n = 0;

    printf("\nDigite um n�mero: ");
    scanf("%d", &n);

    if (n % 2 == 0)
        printf("\nO n�mero %d � par!", n);

    else
        printf("\nO n�mero %d � �mpar!", n);

    printf("\n\n");
}
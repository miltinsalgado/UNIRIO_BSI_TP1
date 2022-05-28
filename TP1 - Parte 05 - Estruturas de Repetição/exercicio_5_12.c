/*
    5.12) Leia um n�mero inteiro n e verifique se ele � ou n�o um n�mero primo.
*/

#include <stdio.h>
#include <locale.h>
#include <stdbool.h>

int main()
{
    setlocale(LC_ALL, "");
    printf("EXERC�CIO 5.12\n");

    int n = 0;
    bool primo = true;

    printf("\nDigite um n�mero: ");
    scanf("%d", &n);

    for (int i = 1; i < n; i++)
        if (n % i == 0 && i != 1)
            primo = false;

    if (primo)
        printf("\nO n�mero %d � primo", n);

    else
        printf("\nO n�mero %d n�o � primo", n);

    printf("\n\n");
}
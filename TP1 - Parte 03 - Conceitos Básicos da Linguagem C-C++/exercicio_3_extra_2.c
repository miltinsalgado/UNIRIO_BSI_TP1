#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    printf("EXERC�CIO 3.EXTRA.2\n");

    float n = 0;

    printf("\nDigite um n�mero n: ");
    scanf("%f", &n);

    int arredondado = n + 0.9999;

    printf("\nN�mero n arredondado pra cima: %d", arredondado);

    printf("\n\n");
}
#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    printf("EXERCÍCIO 3.EXTRA.1\n");

    float n = 0;

    printf("\nDigite um número n: ");
    scanf("%f", &n);

    int arredondado = n + 0.5;

    printf("\nNúmero n arredondado para cima ou para baixo: %d", arredondado);

    printf("\n\n");
}
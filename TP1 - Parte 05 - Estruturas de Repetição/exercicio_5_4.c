#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    printf("EXERC�CIO 5.4\n");

    int n = -1, soma = 0;

    while (n != 0)
    {
        printf("\nDigite um n�mero: ");
        scanf("%d", &n);
        soma = soma + n;
    }

    printf("\nSoma dos n�meros: %d", soma);
    
    printf("\n\n");
}
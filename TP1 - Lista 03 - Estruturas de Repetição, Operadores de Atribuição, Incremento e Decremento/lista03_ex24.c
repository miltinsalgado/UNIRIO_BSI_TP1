/*
    Lista 03 - Exerc�cio 24
    Leia um n�mero inteiro n e imprima o valor de H, dado pela s�rie abaixo.
    H = N + N/2 + N/3 + N/4 + ... + N/N
    Se n <= 0 imprima uma mensagem de erro.
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    printf("LISTA 03 - EXERC�CIO 24\n");

    int n = 0;
    float h = 0;

    printf("\nDigite um n�mero inteiro: ");
    scanf("%d", &n);

    if (n <= 0)
        printf("\nN�mero inteiro inv�lido");

    else
    {
        for (int i = 1; i <= n; i++)
            h += (float) n / i;

        printf("\nH = %.2f", h);
    }
    
    printf("\n\n");
}
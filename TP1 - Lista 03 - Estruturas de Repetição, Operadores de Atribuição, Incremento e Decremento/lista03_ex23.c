/*
    Lista 03 - Exerc�cio 23
    Leia um n�mero inteiro n e imprima o valor de H, dado pela s�rie abaixo.
    H = 1 + 1/2 + 1/3 + 1/4 + ... + 1/N
    Se n <= 0 imprima uma mensagem de erro.
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    printf("LISTA 03 - EXERC�CIO 23\n");

    int n = 0;
    float h = 0;

    printf("\nDigite um n�mero inteiro: ");
    scanf("%d", &n);

    if (n <= 0)
        printf("\nN�mero inteiro inv�lido");

    else
    {
        for (int i = 1; i <= n; i++)
            h += (float) 1 / i;

        printf("\nH = %.2f", h);
    }
    
    printf("\n\n");
}
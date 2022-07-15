/*
    Lista 03 - Exerc�cio 27
    Leia um n�mero inteiro n e imprima o valor de H, dado pela s�rie abaixo.
    H = N + N/2 + N/3 + N/4 + ... + N/N
    Se n <= 0 imprima uma mensagem de erro.
*/

#include <stdio.h>
#include <locale.h>

int main ()
{
    setlocale(LC_ALL, "");
    printf("LISTA 03 - EXERC�CIO 27\n");

    int n = 0;
    float h = 0;

    printf("\nDigite um n�mero inteiro positivo e par, n�o contando o zero: ");
    scanf("%d", &n);

    if (n <= 1 || n % 2 != 0)
        printf("\nN�mero inteiro inv�lido");

    else
    {
        for (int i = 2; i <= n; i += 2)
            h += (float) 1 / i;

        printf("\nH = %.2f", h);
    }
    
    printf("\n\n");
}
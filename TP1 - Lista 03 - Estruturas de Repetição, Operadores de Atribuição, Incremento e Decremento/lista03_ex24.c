/*
    Lista 03 - Exercício 24
    Leia um número inteiro n e imprima o valor de H, dado pela série abaixo.
    H = N + N/2 + N/3 + N/4 + ... + N/N
    Se n <= 0 imprima uma mensagem de erro.
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    printf("LISTA 03 - EXERCÍCIO 24\n");

    int n = 0;
    float h = 0;

    printf("\nDigite um número inteiro: ");
    scanf("%d", &n);

    if (n <= 0)
        printf("\nNúmero inteiro inválido");

    else
    {
        for (int i = 1; i <= n; i++)
            h += (float) n / i;

        printf("\nH = %.2f", h);
    }
    
    printf("\n\n");
}
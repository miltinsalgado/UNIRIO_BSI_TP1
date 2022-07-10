/*
    Lista 03 - Exercício 23
    Leia um número inteiro n e imprima o valor de H, dado pela série abaixo.
    H = 1 + 1/2 + 1/3 + 1/4 + ... + 1/N
    Se n <= 0 imprima uma mensagem de erro.
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    printf("LISTA 03 - EXERCÍCIO 23\n");

    int n = 0;
    float h = 0;

    printf("\nDigite um número inteiro: ");
    scanf("%d", &n);

    if (n <= 0)
        printf("\nNúmero inteiro inválido");

    else
    {
        for (int i = 1; i <= n; i++)
            h += (float) 1 / i;

        printf("\nH = %.2f", h);
    }
    
    printf("\n\n");
}
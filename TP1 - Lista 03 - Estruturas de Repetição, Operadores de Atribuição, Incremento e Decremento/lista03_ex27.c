/*
    Lista 03 - Exercício 27
    Leia um número inteiro n e imprima o valor de H, dado pela série abaixo.
    H = N + N/2 + N/3 + N/4 + ... + N/N
    Se n <= 0 imprima uma mensagem de erro.
*/

#include <stdio.h>
#include <locale.h>

int main ()
{
    setlocale(LC_ALL, "");
    printf("LISTA 03 - EXERCÍCIO 27\n");

    int n = 0;
    float h = 0;

    printf("\nDigite um número inteiro positivo e par, não contando o zero: ");
    scanf("%d", &n);

    if (n <= 1 || n % 2 != 0)
        printf("\nNúmero inteiro inválido");

    else
    {
        for (int i = 2; i <= n; i += 2)
            h += (float) 1 / i;

        printf("\nH = %.2f", h);
    }
    
    printf("\n\n");
}
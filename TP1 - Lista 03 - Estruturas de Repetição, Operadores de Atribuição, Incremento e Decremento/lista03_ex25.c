/*
    Lista 03 - Exercício 25
    Leia um número inteiro n e imprima o valor de H, dado pela série abaixo.
    H = somatório de i * n, iniciando com 1 e indo até n 
    Se n <= 0 imprima uma mensagem de erro.
*/

#include <stdio.h>
#include <locale.h>

int main ()
{
    setlocale(LC_ALL, "");
    printf("LISTA 03 - EXERCÍCIO 25\n");

    int n = 0, h = 0;

    printf("\nDigite um número inteiro: ");
    scanf("%d", &n);

    if (n <= 0)
        printf("\nNúmero inteiro inválido");

    else
    {
        for (int i = 1; i <= n; i++)
            h += i * n;

        printf("\nH = %d", h);
    }
    
    printf("\n\n");
}
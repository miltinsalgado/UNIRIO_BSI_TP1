/*
    Lista 03 - Exerc�cio 25
    Leia um n�mero inteiro n e imprima o valor de H, dado pela s�rie abaixo.
    H = somat�rio de i * n, iniciando com 1 e indo at� n 
    Se n <= 0 imprima uma mensagem de erro.
*/

#include <stdio.h>
#include <locale.h>

int main ()
{
    setlocale(LC_ALL, "");
    printf("LISTA 03 - EXERC�CIO 25\n");

    int n = 0, h = 0;

    printf("\nDigite um n�mero inteiro: ");
    scanf("%d", &n);

    if (n <= 0)
        printf("\nN�mero inteiro inv�lido");

    else
    {
        for (int i = 1; i <= n; i++)
            h += i * n;

        printf("\nH = %d", h);
    }
    
    printf("\n\n");
}
/*
    Lista 02 - Exerc�cio 04
    Leia dois n�meros inteiros n e k e informe se n � divis�vel por k.
*/

#include <stdio.h>
#include <locale.h>

int main ()
{
    setlocale(LC_ALL, "");
    printf("LISTA 02 - EXERC�CIO 04\n");

    int n = 0, k = 0;

    printf("\nDigite um n�mero inteiro: ");
    scanf("%d", &n);

    printf("\nDigite outro n�mero inteiro: ");
    scanf("%d", &k);
    
    if (n % k == 0)
        printf("\nO n�mero %d � divis�vel por %d", n, k);

    else
        printf("\nO n�mero %d n�o � divis�vel por %d", n, k);

    printf("\n\n");
}
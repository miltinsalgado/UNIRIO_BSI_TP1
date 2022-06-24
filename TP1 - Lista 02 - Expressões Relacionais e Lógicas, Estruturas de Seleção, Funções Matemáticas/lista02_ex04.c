/*
    2.4) Leia dois números inteiros n e k e informe se n é divisível por k.
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    printf("EXERCÍCIO 2.4\n");

    int n = 0, k = 0;

    printf("\nDigite um número inteiro: ");
    scanf("%d", &n);

    printf("\nDigite outro número inteiro: ");
    scanf("%d", &k);
    
    if (n % k == 0)
        printf("\nO número %d é divisível por %d", n, k);

    else
        printf("\nO número %d não é divisível por %d", n, k);

    printf("\n\n");
}
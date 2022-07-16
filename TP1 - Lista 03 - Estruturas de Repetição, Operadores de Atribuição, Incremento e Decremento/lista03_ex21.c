/*
    Lista 03 - Exercício 21
    Leia os números inteiros n, k e r.  
    Em seguida, imprima os k termos de uma PA que inicia em n e tem razão r.
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    printf("LISTA 03 - EXERCÍCIO 21\n");

    int n = 0, k = 0, r = 0;

    printf("\nDigite o termo inicial da PA: ");
    scanf("%d", &n);

    printf("\nDigite a quantidade de termos da PA: ");
    scanf("%d", &k);

    printf("\nDigite a razão da PA: ");
    scanf("%d", &r);

    printf("\nPA com %d termos que inicia em %d e tem razão %d:", k, n, r);
    printf("\n");

    for (int i = 0, an = n; i < k; i++, an += r)
        printf("%d ", an);

    printf("\n\n");
}
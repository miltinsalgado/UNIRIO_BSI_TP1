/*
    Lista 03 - Exercício 22
    Leia os números inteiros n, k e r. 
    Em seguida, imprima os k termos de uma PG que inicia em n e tem razão r.
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    printf("LISTA 03 - EXERCÍCIO 22\n");

    int n = 0, k = 0, r = 0;

    printf("\nDigite o termo inicial da PG: ");
    scanf("%d", &n);

    printf("\nDigite a quantidade de termos da PG: ");
    scanf("%d", &k);

    printf("\nDigite a razão da PG: ");
    scanf("%d", &r);

    printf("\nPG com %d termos que inicia em %d e tem razão %d:", k, n, r);
    printf("\n");

    for (int i = 0, an = n; i < k; i++, an *= r)
        printf("%d ", an);

    printf("\n\n");
}
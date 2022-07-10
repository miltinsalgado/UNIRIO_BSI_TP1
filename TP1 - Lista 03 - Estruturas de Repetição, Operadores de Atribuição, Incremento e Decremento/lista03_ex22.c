/*
    Lista 03 - Exerc�cio 22
    Leia os n�meros inteiros n, k e r. 
    Em seguida, imprima os k termos de uma PG que inicia em n e tem raz�o r.
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    printf("LISTA 03 - EXERC�CIO 22\n");

    int n = 0, k = 0, r = 0;

    printf("\nDigite o termo inicial da PG: ");
    scanf("%d", &n);

    printf("\nDigite a quantidade de termos da PG: ");
    scanf("%d", &k);

    printf("\nDigite a raz�o da PG: ");
    scanf("%d", &r);

    printf("\nPG com %d termos que inicia em %d e tem raz�o %d:", k, n, r);
    printf("\n");

    for (int i = 0, an = n; i < k; i++, an *= r)
        printf("%d ", an);

    printf("\n\n");
}
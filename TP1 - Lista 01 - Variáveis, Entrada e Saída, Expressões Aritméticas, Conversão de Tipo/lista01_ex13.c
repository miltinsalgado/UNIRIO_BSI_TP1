/*
    Lista 01 - Exerc�cio 13
    Calcule e imprima o n-�simo termo an de uma PA de raz�o r. 
    Para isso, seu programa dever� ler o 1� termo a1, a quantidade n de termos e a raz�o r. 
    Considere: an = a1 + (n-1) * r, onde n � natural. 
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    printf("LISTA 01 - EXERC�CIO 13\n");

    float a1 = 0, r = 0;
    int n = 0;

    printf("\nDigite o primeiro termo (a1) da P.A.: ");
    scanf("%f", &a1);

    printf("\nDigite a raz�o (r) da P.A.: ");
    scanf("%f", &r);

    printf("\nDigite a quantidade de termos da P.A.: ");
    scanf("%d", &n);

    float an = a1 + (n - 1) * r;
    
    printf("\nTermo %d da P.A.: %.2f", n, an);

    printf("\n\n");
}
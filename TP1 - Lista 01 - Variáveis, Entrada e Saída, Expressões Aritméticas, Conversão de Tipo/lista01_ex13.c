/*
    Lista 01 - Exercício 13
    Calcule e imprima o n-ésimo termo an de uma PA de razão r. 
    Para isso, seu programa deverá ler o 1º termo a1, a quantidade n de termos e a razão r. 
    Considere: an = a1 + (n-1) * r, onde n é natural. 
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    printf("LISTA 01 - EXERCÍCIO 13\n");

    float a1 = 0, r = 0;
    int n = 0;

    printf("\nDigite o primeiro termo (a1) da P.A.: ");
    scanf("%f", &a1);

    printf("\nDigite a razão (r) da P.A.: ");
    scanf("%f", &r);

    printf("\nDigite a quantidade de termos da P.A.: ");
    scanf("%d", &n);

    float an = a1 + (n - 1) * r;
    
    printf("\nTermo %d da P.A.: %.2f", n, an);

    printf("\n\n");
}
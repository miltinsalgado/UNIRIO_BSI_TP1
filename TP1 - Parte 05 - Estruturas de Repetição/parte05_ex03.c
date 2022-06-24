/*
    Parte 05 - Exerc�cio 03
    Implemente em C/C++ o algoritmo de impress�o dos n�meros de 1 a N. 
    Ao final, imprimir a soma e a m�dia aritm�tica dos n�meros de 1 a N.
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    printf("PARTE 05 - EXERC�CIO 03\n");

    int n = 0, cont = 1, soma = 0, media = 0;
    
    printf("\nDigite um n�mero: ");
    scanf("%d", &n);

    while (cont <= n)
    {
        printf("\n%d", cont);
        soma = soma + cont;
        cont++;
    }

    media = soma / n;

    printf("\n");
    printf("\nSoma dos n�meros: %d", soma);
    printf("\nM�dia aritm�tica dos n�meros: %d", media);
    
    printf("\n\n");
}
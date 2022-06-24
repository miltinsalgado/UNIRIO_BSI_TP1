/*
    Parte 05 - Exercício 03
    Implemente em C/C++ o algoritmo de impressão dos números de 1 a N. 
    Ao final, imprimir a soma e a média aritmética dos números de 1 a N.
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    printf("PARTE 05 - EXERCÍCIO 03\n");

    int n = 0, cont = 1, soma = 0, media = 0;
    
    printf("\nDigite um número: ");
    scanf("%d", &n);

    while (cont <= n)
    {
        printf("\n%d", cont);
        soma = soma + cont;
        cont++;
    }

    media = soma / n;

    printf("\n");
    printf("\nSoma dos números: %d", soma);
    printf("\nMédia aritmética dos números: %d", media);
    
    printf("\n\n");
}
/*
    Parte 05 - Exerc�cio 01
    Implemente em C/C++ o algoritmo de impress�o dos n�meros de 1 a N.
*/

#include <stdio.h>
#include <locale.h>

int main ()
{
    setlocale(LC_ALL, "");
    printf("PARTE 05 - EXERC�CIO 01\n");

    int n = 0, cont = 1;
    
    printf("\nDigite um n�mero: ");
    scanf("%d", &n);

    while (cont <= n)
    {
        printf("\n%d", cont);
        cont = cont + 1;
    }   
    
    printf("\n\n");
}
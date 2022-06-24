/*
    5.1) Implemente em C/C++ o algoritmo de impressão dos números de 1 a N.
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    printf("EXERCÍCIO 5.1\n");

    int n = 0, cont = 1;
    
    printf("\nDigite um número: ");
    scanf("%d", &n);

    while (cont <= n)
    {
        printf("\n%d", cont);
        cont = cont + 1;
    }   
    
    printf("\n\n");
}
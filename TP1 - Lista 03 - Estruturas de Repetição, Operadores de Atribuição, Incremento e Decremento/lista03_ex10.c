/*
    Lista 03 - Exerc�cio 10
    Calcule e imprima o somat�rio dos n�meros de n a m, sendo n e m maiores que zero e m > n. 
*/

#include <stdio.h>
#include <locale.h>

int main ()
{
    setlocale(LC_ALL, "");
    printf("LISTA 03 - EXERC�CIO 10\n");

    int n = 10, m = 20, soma = 0;

    if (n > 0 && m > 0 && m > n)
        for (int i = n; i <= m; i++)
            soma += i;  

    printf("\nSomat�rio dos n�mero de %d a %d: %d", n, m, soma);

    printf("\n\n");
}
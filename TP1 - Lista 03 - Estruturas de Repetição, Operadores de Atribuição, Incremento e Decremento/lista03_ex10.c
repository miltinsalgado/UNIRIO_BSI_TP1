/*
    Lista 03 - Exercício 10
    Calcule e imprima o somatório dos números de n a m, sendo n e m maiores que zero e m > n. 
*/

#include <stdio.h>
#include <locale.h>

int main ()
{
    setlocale(LC_ALL, "");
    printf("LISTA 03 - EXERCÍCIO 10\n");

    int n = 10, m = 20, soma = 0;

    if (n > 0 && m > 0 && m > n)
        for (int i = n; i <= m; i++)
            soma += i;  

    printf("\nSomatório dos número de %d a %d: %d", n, m, soma);

    printf("\n\n");
}
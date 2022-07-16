/*
    Parte 05 - Exercício 13
    Leia um número n e imprima k! para k variando de 2 a n. Se n < 2 emita uma mensagem de erro. 
    Exemplo: n = 4.
    2! = 2
    3! = 6
    4! = 24
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    printf("PARTE 05 - EXERCÍCIO 13\n");

    int n = 0;
    long long int fatorial = 0;

    do
    {
        printf("\nDigite um número: ");
        scanf("%d", &n);

        if (n < 2)
            printf("\nNúmero digitado menor que 2!");
    } while (n < 2);

    for (int k = 2; k <= n; k++)
    {
        fatorial = 1;

        for (int i = k; i >= 2; i--)
            fatorial *= i;

        printf("\n%d! = %d", k, fatorial);
    }
    
    printf("\n\n");
}
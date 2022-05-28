/*
    5.13) Leia um número n e imprima k! para k variando de 2 a n. Se n < 2 emita uma mensagem de erro. 
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
    printf("EXERCÍCIO 5.13\n");

    int n = 0;
    long long int fatorial = 1;

    printf ("\nDigite um número: ");
    scanf("%d", &n);

    for (int k = 2; k <= n; k++)
    {
        if (n < 2)
        {
            printf("\nNúmero digitado menor que 2!");
            break;
        }
        fatorial *= k;
        printf("\n%d! = %lld", k, fatorial);
    }
    
    printf("\n\n");
}
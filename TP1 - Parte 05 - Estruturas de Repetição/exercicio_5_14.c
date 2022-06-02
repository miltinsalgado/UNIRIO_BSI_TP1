/*
    5.14) Leia um número n e imprima n
    k para k variando de 1 a n. 
    Se n < 1 emita uma mensagem de erro. Exemplo: n = 5.
    5^1= 5
    5^2 = 25
    5^3= 125
    5^4 = 625
    5^5 = 3125
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    printf("EXERCÍCIO 5.14\n");

    int n = 0, potencia = 0;

    do
    {
        printf ("\nDigite um número: ");
        scanf("%d", &n);

        if (n < 1)
            printf("\nNúmero digitado menor que 1!");
    } while (n < 1);

    for (int k = 1; k <= n; k++)
    {
        potencia = 1;

        for (int i = 1; i <= k; i++)
            potencia *= n;
        
        printf("\n%d^%d = %d", n, k, potencia);
    }
    
    printf("\n\n");
}
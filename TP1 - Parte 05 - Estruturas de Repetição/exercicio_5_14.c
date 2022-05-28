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
#include <math.h>

int main()
{
    setlocale(LC_ALL, "");
    printf("EXERCÍCIO 5.14\n");

    int n = 0, potencia_n = 0;

    printf ("\nDigite um número: ");
    scanf("%d", &n);

        for (int k = 1; k <= n; k++)
        {
            if (n < 1)
            {
                printf("\nNúmero digitado menor que 1!");
                break;
            }
            potencia_n = pow(n, k);
            printf("\n%d^%d = %d", n, k, potencia_n);
        }
    
    printf("\n\n");
}
/*
    Parte 04 - Exercício 11
    Implemente em C/C++ o algoritmo apresentado anteriormente usando o comando switch.
*/

#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL, "");
    printf("PARTE 04 - EXERCÍCIO 11\n");

    int n = 0;

    printf("\nDigite um número: ");
    scanf("%d", &n);

    switch (n)
    {
        case 1:
            printf("\nUM");
            break;
        
        case 2:
            printf("\nDOIS");
            break;

        case 3:
            printf("\nTRÊS");
            break;

        case 4:
            printf("\nQUATRO");
            break;

        case 5:
            printf("\nCINCO");
            break;
        
        default:
        printf("\nNão é digito de 1 a 5");
            break;
    }

    printf("\n\n");
}
/*
    Lista 02 - Exerc�cio 05
    Leia tr�s valores a, b e c e imprima o maior e o menor deles. 
    Elabore uma solu��o sem usar os operadores l�gicos, ou seja, usando somente os operadores relacionais.
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    printf("LISTA 02 - EXERC�CIO 05\n");

    float a = 0, b = 0, c = 0;

    printf("\nDigite o primeiro n�mero: ");
    scanf("%f", &a);

    printf("\nDigite o segundo n�mero: ");
    scanf("%f", &b);

    printf("\nDigite o terceiro n�mero: ");
    scanf("%f", &c);
    
    if (a > b)
    {
        if (a > c)
            {
                if (b > c)
                    printf("\nO maior n�mero � %.2f e o menor n�mero � %.2f", a, c);
                else
                    printf("\nO maior n�mero � %.2f e o menor n�mero � %.2f", a, b);
            }

        else
            printf("\nO maior n�mero � %.2f e o menor n�mero � %.2f", c, b);
    }

    else if (b > a)
    {
        if (b > c)
            {
                if (a > c)
                    printf("\nO maior n�mero � %.2f e o menor n�mero � %.2f", b, c);
                else
                    printf("\nO maior n�mero � %.2f e o menor n�mero � %.2f", b, a);
            }

        else
            printf("\nO maior n�mero � %.2f e o menor n�mero � %.2f", c, a);
    }

    printf("\n\n");
}
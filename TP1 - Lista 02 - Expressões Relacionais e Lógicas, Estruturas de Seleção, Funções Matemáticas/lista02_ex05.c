/*
    Lista 02 - Exercício 05
    Leia três valores a, b e c e imprima o maior e o menor deles. 
    Elabore uma solução sem usar os operadores lógicos, ou seja, usando somente os operadores relacionais.
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    printf("LISTA 02 - EXERCÍCIO 05\n");

    float a = 0, b = 0, c = 0;

    printf("\nDigite o primeiro número: ");
    scanf("%f", &a);

    printf("\nDigite o segundo número: ");
    scanf("%f", &b);

    printf("\nDigite o terceiro número: ");
    scanf("%f", &c);
    
    if (a > b)
    {
        if (a > c)
            {
                if (b > c)
                    printf("\nO maior número é %.2f e o menor número é %.2f", a, c);
                else
                    printf("\nO maior número é %.2f e o menor número é %.2f", a, b);
            }

        else
            printf("\nO maior número é %.2f e o menor número é %.2f", c, b);
    }

    else if (b > a)
    {
        if (b > c)
            {
                if (a > c)
                    printf("\nO maior número é %.2f e o menor número é %.2f", b, c);
                else
                    printf("\nO maior número é %.2f e o menor número é %.2f", b, a);
            }

        else
            printf("\nO maior número é %.2f e o menor número é %.2f", c, a);
    }

    printf("\n\n");
}
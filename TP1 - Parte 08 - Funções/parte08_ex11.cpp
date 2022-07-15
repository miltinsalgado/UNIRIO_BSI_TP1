/*
    Parte 08 - Exercício 11
    Crie uma função que recebe três valores numéricos a, b e c, e retorna esses valores ordenados de forma crescente (a ? b ? c). 
    Na função main, leia 3 valores e chame a função implementada.
*/

#include <stdio.h>
#include <locale.h>

void troca (float &x, float &y)
{
    float temp = 0;

    if (x > y)
    {
        temp = x;
        x = y;
        y = temp;
    }
}

void crescente (float &a, float &b, float &c)
{
    troca(a, b);
    troca(b, c);
    troca(a, b);
}

int main ()
{
    setlocale(LC_ALL, "");
    printf("PARTE 08 - EXERCÍCIO 11\n");

    float a = 0, b = 0, c = 0;

    printf("\nDigite o primeiro número: ");
    scanf("%f", &a);

    printf("\nDigite o segundo número: ");
    scanf("%f", &b);

    printf("\nDigite o terceiro número: ");
    scanf("%f", &c);

    crescente(a, b, c);

    printf("\nNúmeros em ordem crescente: %.2f, %.2f e %.2f", a, b, c);
    
    printf("\n\n");
}
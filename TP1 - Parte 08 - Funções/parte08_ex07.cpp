/*
    Parte 08 - Exercício 07
    Crie a função menor que recebe os valores a, b e c e retorna o menor deles. 
    Na função main, leia 3 valores e chame a função implementada.
*/

#include <stdio.h>
#include <locale.h>

float menor(float a, float b , float c)
{
    if (a <= b && a <= c)
        return a;
    
    else if (b <= a && b <= c)
        return b;
    
    return c;
}

int main()
{
    setlocale(LC_ALL, "");
    printf("PARTE 08 - EXERCÍCIO 07\n");

    float a = 0, b = 0, c = 0;

    printf("\nDigite o primeiro número: ");
    scanf("%f", &a);

    printf("\nDigite o segundo número: ");
    scanf("%f", &b);

    printf("\nDigite o terceiro número: ");
    scanf("%f", &c);

    float menor_num = menor(a, b, c);

    printf("\nMenor número entre %.2f, %.2f e %.2f: %.2f", a, b, c, menor_num);
    
    printf("\n\n");
}
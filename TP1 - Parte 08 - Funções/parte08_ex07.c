/*
    Parte 08 - Exerc�cio 07
    Crie a fun��o menor que recebe os valores a, b e c e retorna o menor deles. 
    Na fun��o main, leia 3 valores e chame a fun��o implementada.
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
    printf("PARTE 08 - EXERC�CIO 07\n");

    float a = 0, b = 0, c = 0;

    printf("\nDigite o primeiro n�mero: ");
    scanf("%f", &a);

    printf("\nDigite o segundo n�mero: ");
    scanf("%f", &b);

    printf("\nDigite o terceiro n�mero: ");
    scanf("%f", &c);

    float menor_num = menor(a, b, c);

    printf("\nMenor n�mero entre %.2f, %.2f e %.2f: %.2f", a, b, c, menor_num);
    
    printf("\n\n");
}
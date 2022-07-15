/*
    Parte 08 - Exerc�cio 11
    Crie uma fun��o que recebe tr�s valores num�ricos a, b e c, e retorna esses valores ordenados de forma crescente (a ? b ? c). 
    Na fun��o main, leia 3 valores e chame a fun��o implementada.
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
    printf("PARTE 08 - EXERC�CIO 11\n");

    float a = 0, b = 0, c = 0;

    printf("\nDigite o primeiro n�mero: ");
    scanf("%f", &a);

    printf("\nDigite o segundo n�mero: ");
    scanf("%f", &b);

    printf("\nDigite o terceiro n�mero: ");
    scanf("%f", &c);

    crescente(a, b, c);

    printf("\nN�meros em ordem crescente: %.2f, %.2f e %.2f", a, b, c);
    
    printf("\n\n");
}
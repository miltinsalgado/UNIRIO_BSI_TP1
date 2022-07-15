/*
    Parte 08 - Exercício 04
    Crie a função modulo que lê um número real x e retorna |x|.
*/

#include <stdio.h>
#include <locale.h>

float modulo ()
{
    float x = 0;

    printf("\nDigite um número real: ");
    scanf("%f", &x);

    float modulo_x = x;

    if (x < 0)
        modulo_x = x * -1;

    printf("\nMódulo de %.2f: ", x);
    
    return modulo_x;
}

int main ()
{
    setlocale(LC_ALL, "");
    printf("PARTE 08 - EXERCÍCIO 04\n");

    float modulo_x = modulo();
    printf("%.2f",  modulo_x);
    
    printf("\n\n");
}
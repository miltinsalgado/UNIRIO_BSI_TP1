/*
    Lista 01 - Exerc�cio 16
    Leia um n�mero real x e imprima seu valor arredondado. 
    Por exemplo: se x = 3.2 imprimir 3, e se x = 3.5 ou maior imprimir 4.
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    printf("LISTA 01 - EXERC�CIO 16\n");

    float x = 0;

    printf("\nDigite um n�mero real: ");
    scanf("%f", &x);

    float x_arredondado = (int) (x + 0.5);
    
    printf("\nN�mero %f arredondado: %.f", x, x_arredondado);

    printf("\n\n");
}
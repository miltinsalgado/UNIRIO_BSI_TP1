/*
    Parte 04 - Exerc�cio 01
    Converta o algoritmo do c�lculo da m�dia para C/C++.
*/

#include <stdio.h>
#include <locale.h>

int main ()
{
    setlocale(LC_ALL, "");
    printf("PARTE 04 - EXERC�CIO 01\n");

    float p1 = 0, p2 = 0;
    
    printf("\nDigite a primeira nota: ");
    scanf("%f", p1);

    printf("\nDigite a segunda nota: ");
    scanf("%f", p2);

    float media = (p1 + p2) / 2;

    if (media / 2 >= 7) 
        printf("\nAprovado");

    printf("\n\n");
}
/*
    Parte 03 - Exerc�cio 02
    Altere o tipo das duas vari�veis do exerc�cio 3.1 para ponto flutuante.
*/

#include <stdio.h>
#include <locale.h>

int main ()
{
    setlocale(LC_ALL, "");
    printf("PARTE 03 - EXERC�CIO 02\n");

    float a = 10, b = 4;

    printf("\nSoma: %f", a + b);
    printf("\nSubtra��o: %f", a - b);
    printf("\nMultiplica��o: %f", a * b);
    printf("\nDivis�o: %f", a / b);

    printf("\n\n");
}
/*
    3.1) Crie um programa que declara duas variáveis inteiras. 
    Em seguida, inicialize essas variáveis e imprima 
    a soma, subtração, multiplicação, divisão e resto da divisão entre elas.
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    printf("EXERCÍCIO 3.1\n");

    int a = 10, b = 4;

    printf("\nSoma: %d", a + b);
    printf("\nSubtração: %d", a - b);
    printf("\nMultiplicação: %d", a * b);
    printf("\nDivisão: %d", a / b);

    printf("\n\n");
}
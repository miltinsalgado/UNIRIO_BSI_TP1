/*
    Parte 03 - Exerc?cio 01
    Crie um programa que declara duas vari?veis inteiras. 
    Em seguida, inicialize essas vari?veis e imprima a soma, subtra??o, multiplica??o, divis?o e resto da divis?o entre elas.
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    printf("PARTE 03 - EXERC?CIO 01\n");

    int a = 10, b = 4;

    printf("\nSoma: %d", a + b);
    printf("\nSubtra??o: %d", a - b);
    printf("\nMultiplica??o: %d", a * b);
    printf("\nDivis?o: %d", a / b);

    printf("\n\n");
}
/*
    Parte 05 - Exercício 02
    Altere o exercício 01 e imprima os números de N até 1.
*/

#include <stdio.h>
#include <locale.h>

int main ()
{
    setlocale(LC_ALL, "");
    printf("PARTE 05 - EXERCÍCIO 02\n");

    int n = 0, cont = 1;
    
    printf("\nDigite um número: ");
    scanf("%d", &n);

    cont = n;

    while (cont >= 1)
    {
        printf("\n%d", cont);
        cont = cont-1;
    }   
    
    printf("\n\n");
}
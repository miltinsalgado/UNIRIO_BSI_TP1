/*
    Parte 05 - Exerc�cio 02
    Altere o exerc�cio 01 e imprima os n�meros de N at� 1.
*/

#include <stdio.h>
#include <locale.h>

int main ()
{
    setlocale(LC_ALL, "");
    printf("PARTE 05 - EXERC�CIO 02\n");

    int n = 0, cont = 1;
    
    printf("\nDigite um n�mero: ");
    scanf("%d", &n);

    cont = n;

    while (cont >= 1)
    {
        printf("\n%d", cont);
        cont = cont-1;
    }   
    
    printf("\n\n");
}
/*
    Lista 02 - Exerc�cio 03
    Leia um n�mero inteiro n e informe se ele � divis�vel por 3 ou por 7.
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    printf("LISTA 02 - EXERC�CIO 03\n");

    int num = 0;

    printf("\nDigite um n�mero inteiro: ");
    scanf("%d", &num);
    
    if (num % 3 == 0 || num % 7 == 0)
        printf("\nO n�mero %d � divis�vel por 3 ou por 7", num);

    else
        printf("\nO n�mero %d n�o � divis�vel por 3 ou por 7", num);

    printf("\n\n");
}
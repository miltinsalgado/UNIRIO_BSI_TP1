/*
    Lista 02 - Exerc�cio 08
    Leia um n�mero e imprima uma mensagem informando se ele � igual a 5, ou se � igual a 200, 
    ou se � igual a 400, ou se ele est� no intervalo de 500 a 1000 (inclusive) ou se ele n�o obedece a nenhuma dessas condi��es.
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    printf("LISTA 02 - EXERC�CIO 08\n");

    float num = 0;

    printf("\nDigite um n�mero: ");
    scanf("%f", &num);

    if (num == 5)
        printf("\nO n�mero %.2f � igual a 5,00", num);
    
    else if (num == 200)
        printf("\nO n�mero %.2f � igual a 200,00", num);

    else if (num == 400)
        printf("\nO n�mero %.2f � igual a 400,00", num);
    
    else if (num >= 500 && num <= 1000)
        printf("\nO n�mero %.2f est� no intervalo de 500,00 a 1000,00 (inclusive)", num);

    printf("\n\n");
}
/*
    Lista 02 - Exercício 08
    Leia um número e imprima uma mensagem informando se ele é igual a 5, ou se é igual a 200, 
    ou se é igual a 400, ou se ele está no intervalo de 500 a 1000 (inclusive) ou se ele não obedece a nenhuma dessas condições.
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    printf("LISTA 02 - EXERCÍCIO 08\n");

    float num = 0;

    printf("\nDigite um número: ");
    scanf("%f", &num);

    if (num == 5)
        printf("\nO número %.2f é igual a 5,00", num);
    
    else if (num == 200)
        printf("\nO número %.2f é igual a 200,00", num);

    else if (num == 400)
        printf("\nO número %.2f é igual a 400,00", num);
    
    else if (num >= 500 && num <= 1000)
        printf("\nO número %.2f está no intervalo de 500,00 a 1000,00 (inclusive)", num);

    printf("\n\n");
}
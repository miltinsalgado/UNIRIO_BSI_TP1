/*
    1.8) Realize a conversão de km para milhas, imprimindo o resultado da conversão. Sabe-se que:
    1 km = 0,621371 milhas
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    printf("EXERCÍCIO 1.8\n");

    double quilometros = 0;

    printf("\nDigite a distância em quilômetros a ser convertida: ");
    scanf("%lf", &quilometros);
    
    double milhas = quilometros * 0.621371; 

    printf("\nDistância em quilômetros: %lf", quilometros);
    printf("\nDistância em milhas: %lf", milhas);

    printf("\n\n");
}
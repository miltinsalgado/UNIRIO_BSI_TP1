/*
    1.8) Realize a convers�o de km para milhas, imprimindo o resultado da convers�o. Sabe-se que:
    1 km = 0,621371 milhas
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    printf("EXERC�CIO 1.8\n");

    double quilometros = 0;

    printf("\nDigite a dist�ncia em quil�metros a ser convertida: ");
    scanf("%lf", &quilometros);
    
    double milhas = quilometros * 0.621371; 

    printf("\nDist�ncia em quil�metros: %lf", quilometros);
    printf("\nDist�ncia em milhas: %lf", milhas);

    printf("\n\n");
}
/*
    1.22) Leia um número inteiro a com 4 dígitos e calcule outro número inteiro b que deverá ser o número a invertido. 
    Exemplo: se a = 5732 então b = 2375.
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    printf("EXERCÍCIO 1.22\n");

    int n = 0;

    printf("\nDigite um número inteiro de 4 dígitos: ");
    scanf("%d", &n);

    int milhar = n / 1000;
    int centena = (n % 1000) / 100;
    int dezena = ((n % 1000) % 100) / 10;
    int unidade = ((n % 1000) % 100) % 10;

    int b = unidade * 1000 + dezena * 100 + centena * 10 + milhar;

    printf("\nNúmero %d invertido: %d", n, b);

    printf("\n\n");
}
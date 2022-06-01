/*
    1.19) Leia um número inteiro n de 100 a 999 e imprima a soma dos dígitos que compõem o número.
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    printf("EXERCÍCIO 1.19\n");

    int n = 0;

    printf("\nDigite um número inteiro entre 100 a 999: ");
    scanf("%d", &n);

    int centena = n / 100;
    int dezena = n % 100 / 10;
    int unidade = n % 100 % 10;

    int soma_digitos = centena + dezena + unidade;

    printf("\nSoma dos dígitos do número %d: %d", n, soma_digitos);

    printf("\n\n");
}
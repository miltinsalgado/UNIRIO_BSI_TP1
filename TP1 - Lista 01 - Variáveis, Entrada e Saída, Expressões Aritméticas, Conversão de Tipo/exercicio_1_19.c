/*
    1.19) Leia um n�mero inteiro n de 100 a 999 e imprima a soma dos d�gitos que comp�em o n�mero.
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    printf("EXERC�CIO 1.19\n");

    int n = 0;

    printf("\nDigite um n�mero inteiro entre 100 a 999: ");
    scanf("%d", &n);

    int centena = n / 100;
    int dezena = n % 100 / 10;
    int unidade = n % 100 % 10;

    int soma_digitos = centena + dezena + unidade;

    printf("\nSoma dos d�gitos do n�mero %d: %d", n, soma_digitos);

    printf("\n\n");
}
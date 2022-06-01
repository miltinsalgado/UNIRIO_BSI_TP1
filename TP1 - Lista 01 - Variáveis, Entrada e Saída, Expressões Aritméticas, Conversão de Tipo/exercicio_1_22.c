/*
    1.22) Leia um n�mero inteiro a com 4 d�gitos e calcule outro n�mero inteiro b que dever� ser o n�mero a invertido. 
    Exemplo: se a = 5732 ent�o b = 2375.
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    printf("EXERC�CIO 1.22\n");

    int n = 0;

    printf("\nDigite um n�mero inteiro de 4 d�gitos: ");
    scanf("%d", &n);

    int milhar = n / 1000;
    int centena = (n % 1000) / 100;
    int dezena = ((n % 1000) % 100) / 10;
    int unidade = ((n % 1000) % 100) % 10;

    int b = unidade * 1000 + dezena * 100 + centena * 10 + milhar;

    printf("\nN�mero %d invertido: %d", n, b);

    printf("\n\n");
}
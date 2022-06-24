/*
    Lista 01 - Exerc�cio 18
    Leia um n�mero n com 8 d�gitos, separe o dia, m�s e ano do n�mero lido, mostrando-os na tela.
    Exemplo: 25031949 imprime 25/03/1959
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    printf("LISTA 01 - EXERC�CIO 18\n");

    int n = 0;

    printf("\nDigite um n�mero inteiro de 8 d�gitos: ");
    scanf("%d", &n);

    int dia = n / 1000000;
    int mes = (n % 1000000) / 10000;
    int ano = (n % 1000000) % 10000;

    printf("\nData formatada: %02d/%02d/%04d", dia, mes, ano);

    printf("\n\n");
}
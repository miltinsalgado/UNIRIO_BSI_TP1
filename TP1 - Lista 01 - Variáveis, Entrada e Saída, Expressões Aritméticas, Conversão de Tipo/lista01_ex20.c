/*
    1.20) O número 3025 possui a seguinte característica: 30 + 25 = 55 => 55*55 = 3025. 
    Faça um programa para ler um número n inteiro de 4 dígitos e imprimir a primeira parte do número, 
    a segunda parte e o valor da multiplicação das partes.
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    printf("EXERCÍCIO 1.20\n");

    int n = 0;

    printf("\nDigite um número inteiro de 4 dígitos: ");
    scanf("%d", &n);

    int parte1 = n / 100;
    int parte2 = (n % 100);

    int produto_partes = parte1 * parte2;

    printf("\nPrimeira parte do número %d: %d", n, parte1);
    printf("\nSegunda parte do número %d: %02d", n, parte2);
    printf("\nValor da multiplicação das partes: %d", produto_partes);

    printf("\n\n");
}
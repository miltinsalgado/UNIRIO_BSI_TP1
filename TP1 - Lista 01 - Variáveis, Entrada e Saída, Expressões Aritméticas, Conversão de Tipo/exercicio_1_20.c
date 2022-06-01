/*
    1.20) O n�mero 3025 possui a seguinte caracter�stica: 30 + 25 = 55 => 55*55 = 3025. 
    Fa�a um programa para ler um n�mero n inteiro de 4 d�gitos e imprimir a primeira parte do n�mero, 
    a segunda parte e o valor da multiplica��o das partes.
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    printf("EXERC�CIO 1.20\n");

    int n = 0;

    printf("\nDigite um n�mero inteiro de 4 d�gitos: ");
    scanf("%d", &n);

    int parte1 = n / 100;
    int parte2 = (n % 100);

    int produto_partes = parte1 * parte2;

    printf("\nPrimeira parte do n�mero %d: %d", n, parte1);
    printf("\nSegunda parte do n�mero %d: %02d", n, parte2);
    printf("\nValor da multiplica��o das partes: %d", produto_partes);

    printf("\n\n");
}
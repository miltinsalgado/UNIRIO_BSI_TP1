/*
    3.9) Leia um número real e imprima sua parte inteira e sua
    parte decimal. Exemplos:
    Número: 4.67
    Parte inteira: 4
    Parte decimal: 0.67
    Número: 3.26
    Parte inteira: 3
    Parte decimal: 0.26
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    printf("EXERCÍCIO 3.9\n");

    float num = 0;

    printf("\nDigite um número: ");
    scanf("%f", &num);

    int parte_inteira = (int) num;
    float parte_decimal = num - parte_inteira;

    printf("\nParte inteira: %d", parte_inteira);
    printf("\nParte decimal: %f", parte_decimal);

    printf("\n\n");
}
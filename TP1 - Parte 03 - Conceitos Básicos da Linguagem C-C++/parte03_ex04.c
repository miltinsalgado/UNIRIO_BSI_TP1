/*
    Parte 03 - Exercício 04
    Crie um programa que usa a função scanf para ler variáveis dos seguintes tipos de dados:
    - char
    - int em formato decimal
    - int em formato octal
    - int em formato hexadecimal com 'X'
    - float
    - float em formato científico com 'e'
    - double
    Imprima todos os dados lidos para verificar se a leitura foi feita corretamente.
*/

#include <stdio.h>
#include <locale.h>

int main ()
{
    setlocale(LC_ALL, "");
    printf("PARTE 03 - EXERCÍCIO 04\n");

    char caractere;
    int inteiro_decimal;
    int inteiro_octal;
    int inteiro_hexadecimal;
    float ponto_flutuante;
    float ponto_flutuante_cientifico;
    double ponto_flutuante_duplo;

    printf("\nDigite um caractere: ");
    caractere = getchar();

    printf("\nDigite um número inteiro em formato decimal: ");
    scanf("%d", &inteiro_decimal);

    printf("\nDigite um número inteiro em formato octal: ");
    scanf("%o", &inteiro_octal);

    printf("\nDigite um número inteiro em formato hexadecimal: ");
    scanf("%X", &inteiro_hexadecimal);

    printf("\nDigite um número real: ");
    scanf("%f", &ponto_flutuante);

    printf("\nDigite um número real: ");
    scanf("%E", &ponto_flutuante_cientifico);

    printf("\nDigite um número real: ");
    scanf("%lf", &ponto_flutuante_duplo);

    printf("\n\n");

    printf("\nCaractere: %c", caractere);
    printf("\nNúmero inteiro em formato decimal: %d", inteiro_decimal);
    printf("\nNúmero inteiro em formato octal: %o", inteiro_octal);
    printf("\nNúmero inteiro em formato hexadecimal: %X", inteiro_hexadecimal);
    printf("\nNúmero real em formato padrão: %f", ponto_flutuante);
    printf("\nNúmero real em formato científico: %E", ponto_flutuante_cientifico);
    printf("\nNúmero real duplo: %lf", ponto_flutuante_duplo);

    printf("\n\n");
}
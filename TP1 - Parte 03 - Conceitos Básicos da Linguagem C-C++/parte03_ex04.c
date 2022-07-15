/*
    Parte 03 - Exerc�cio 04
    Crie um programa que usa a fun��o scanf para ler vari�veis dos seguintes tipos de dados:
    - char
    - int em formato decimal
    - int em formato octal
    - int em formato hexadecimal com 'X'
    - float
    - float em formato cient�fico com 'e'
    - double
    Imprima todos os dados lidos para verificar se a leitura foi feita corretamente.
*/

#include <stdio.h>
#include <locale.h>

int main ()
{
    setlocale(LC_ALL, "");
    printf("PARTE 03 - EXERC�CIO 04\n");

    char caractere;
    int inteiro_decimal;
    int inteiro_octal;
    int inteiro_hexadecimal;
    float ponto_flutuante;
    float ponto_flutuante_cientifico;
    double ponto_flutuante_duplo;

    printf("\nDigite um caractere: ");
    caractere = getchar();

    printf("\nDigite um n�mero inteiro em formato decimal: ");
    scanf("%d", &inteiro_decimal);

    printf("\nDigite um n�mero inteiro em formato octal: ");
    scanf("%o", &inteiro_octal);

    printf("\nDigite um n�mero inteiro em formato hexadecimal: ");
    scanf("%X", &inteiro_hexadecimal);

    printf("\nDigite um n�mero real: ");
    scanf("%f", &ponto_flutuante);

    printf("\nDigite um n�mero real: ");
    scanf("%E", &ponto_flutuante_cientifico);

    printf("\nDigite um n�mero real: ");
    scanf("%lf", &ponto_flutuante_duplo);

    printf("\n\n");

    printf("\nCaractere: %c", caractere);
    printf("\nN�mero inteiro em formato decimal: %d", inteiro_decimal);
    printf("\nN�mero inteiro em formato octal: %o", inteiro_octal);
    printf("\nN�mero inteiro em formato hexadecimal: %X", inteiro_hexadecimal);
    printf("\nN�mero real em formato padr�o: %f", ponto_flutuante);
    printf("\nN�mero real em formato cient�fico: %E", ponto_flutuante_cientifico);
    printf("\nN�mero real duplo: %lf", ponto_flutuante_duplo);

    printf("\n\n");
}
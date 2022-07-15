/*
    Lista 02 - Exercício 14
    De acordo com a Matemática Financeira, o cálculo do valor da prestação P para amortização de um 
    financiamento de valor V em n prestações e a uma taxa de juros k é dada pelas fórmulas: 
    P = V / T
    T = (1 + k)^n - 1 / k(1 + k)^n
    Leia os valores de V, n e k e imprima o valor da prestação P.
*/

#include <stdio.h>
#include <locale.h>
#include <math.h>

int main ()
{
    setlocale(LC_ALL, "");
    printf("LISTA 02 - EXERCÍCIO 14\n");

    float v = 0, k = 0;
    int n = 0;

    printf("\nDigite o valor do financiamento (em R$/reais): ");
    scanf("%f", &v);

    printf("\nDigite a quantidade de prestações: ");
    scanf("%d", &n);

    printf("\nDigite a taxa de juros (em %%/percentual): ");
    scanf("%f", &k);

    k /= 100;
    float t = (pow(1 + k, n) - 1) / (k * pow(1 + k, n));
    float p = v / t;

    printf("\nValor da prestação: R$ %.2f", p);

    printf("\n\n");
}
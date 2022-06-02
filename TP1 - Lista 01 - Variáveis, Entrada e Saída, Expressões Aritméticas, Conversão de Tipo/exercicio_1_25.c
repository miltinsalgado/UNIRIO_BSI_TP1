/*
    ! DESAFIO !
    1.25) Uma loja vende seus produtos com uma entrada mais duas prestações, sendo que:
    • A entrada deve ser maior ou igual às prestações.
    • As duas prestações devem ter valor igual.
    • As prestações devem ter um valor inteiro (sem centavos).
    • As prestações devem ter o maior valor possível.
    Por exemplo, se o valor do produto for R$ 240,00, a entrada e as duas prestações são iguais a R$ 80,00; 
    se o valor do produto for R$ 344,35, a entrada é de R$ 116,35 e as duas prestações são de R$ 114,00. 
    Leia o valor do produto e imprima o valor da entrada e das duas prestações, de acordo com as regras acima.

*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    printf("EXERCÍCIO 1.25\n");

    float valor_produto = 0;

    printf("\nDigite o valor do produto: ");
    scanf("%f", &valor_produto);

    int prestacao = valor_produto / 3;
    float diferenca = valor_produto - prestacao * 3;
    float entrada = prestacao + diferenca;

    printf("\nValor da entrada: R$ %.2f", entrada);
    printf("\nValor das duas prestações: R$ %.2f", (float) prestacao);

    printf("\n\n");
}
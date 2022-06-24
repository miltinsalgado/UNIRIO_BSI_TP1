/*
    ! DESAFIO !
    1.25) Uma loja vende seus produtos com uma entrada mais duas presta��es, sendo que:
    � A entrada deve ser maior ou igual �s presta��es.
    � As duas presta��es devem ter valor igual.
    � As presta��es devem ter um valor inteiro (sem centavos).
    � As presta��es devem ter o maior valor poss�vel.
    Por exemplo, se o valor do produto for R$ 240,00, a entrada e as duas presta��es s�o iguais a R$ 80,00; 
    se o valor do produto for R$ 344,35, a entrada � de R$ 116,35 e as duas presta��es s�o de R$ 114,00. 
    Leia o valor do produto e imprima o valor da entrada e das duas presta��es, de acordo com as regras acima.

*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    printf("EXERC�CIO 1.25\n");

    float valor_produto = 0;

    printf("\nDigite o valor do produto: ");
    scanf("%f", &valor_produto);

    int prestacao = valor_produto / 3;
    float diferenca = valor_produto - prestacao * 3;
    float entrada = prestacao + diferenca;

    printf("\nValor da entrada: R$ %.2f", entrada);
    printf("\nValor das duas presta��es: R$ %.2f", (float) prestacao);

    printf("\n\n");
}
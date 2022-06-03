/*
    2.6) Leia o valor do salário de uma pessoa e o valor de um financiamento pretendido. 
    Caso o financiamento seja menor ou igual a 5 vezes o salário da pessoa, o programa deverá imprimir
    "Financiamento Concedido"; senão, ele deverá imprimir "Financiamento Negado".
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    printf("EXERCÍCIO 2.6\n");

    float salario = 0, financiamento = 0;

    printf("\nDigite o valor do salário (em R$/reais): ");
    scanf("%f", &salario);

    printf("\nDigite o valor do financiamento pretendido (em R$/reais): ");
    scanf("%f", &financiamento);

    if (financiamento <= salario * 5)
        printf("\nFinanciamento Concedido");

    else
        printf("\nFinanciamento Negado");

    printf("\n\n");
}
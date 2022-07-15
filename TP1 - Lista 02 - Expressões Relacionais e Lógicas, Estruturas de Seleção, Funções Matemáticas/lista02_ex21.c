/*
    Lista 02 - Exerc�cio 21
    Leia o pre�o de um produto e a condi��o de pagamento e imprima os valores a serem pagos, 
    considerando a seguinte tabela:
    
    Condi��o Pagamento                              Sa�da 
    � vista, dinheiro ou cheque, 10% de desconto    Valor a ser pago 
    � vista, cart�o de cr�dito, 5% de desconto      Valor a ser pago 
    Em 2 vezes, pre�o normal sem juros              Valor de cada parcela e valor total 
    Em 3 vezes, pre�o normal + 10% juros            Valor de cada parcela e valor total 
*/

#include <stdio.h>
#include <locale.h>

int main ()
{
    setlocale(LC_ALL, "");
    printf("LISTA 02 - EXERC�CIO 21\n");

    printf("\nCondi��o Pagamento");
    printf("\n1 - � vista, dinheiro ou cheque, 10%% de desconto");
    printf("\n2 - � vista, cart�o de cr�dito, 5%% de desconto");
    printf("\n3 - Em 2 vezes, pre�o normal sem juros");
    printf("\n4 - Em 3 vezes, pre�o normal + 10%% juros");
    printf("\n");

    float preco_produto = 0;
    int condicao_pagamento = 0;

    printf("\nDigite o pre�o do produto (em R$/reais): ");
    scanf("%f", &preco_produto);

    printf("\nDigite a condi��o de pagamento: ");
    scanf("%d", &condicao_pagamento);

    float valor_pago = 0, valor_total = 0, valor_parcela = 0, desconto = 0, juros = 0;

    switch (condicao_pagamento)
    {
        case 1:
            valor_pago = preco_produto;
            desconto = preco_produto * 10 / 100;
            valor_pago -= desconto;
            printf("\nValor a ser pago: R$ %.2f", valor_pago);
            break;

        case 2:
            valor_pago = preco_produto;
            desconto = preco_produto * 5 / 100;
            valor_pago -= desconto;
            printf("\nValor a ser pago: R$ %.2f", valor_pago);
            break;
        
        case 3:
            valor_total = preco_produto;
            valor_parcela = valor_total / 2;
            printf("\nValor de cada parcela: R$ %.2f", valor_parcela);
            printf("\nValor total: R$ %.2f", valor_total);
            break;

        case 4:
            juros = preco_produto * 10 / 100;
            valor_total = preco_produto + juros;
            valor_parcela = valor_total / 3;
            printf("\nValor de cada parcela: R$ %.2f", valor_parcela);
            printf("\nValor total: R$ %.2f", valor_total);
            break;

        default:
            printf("\nOp��o inv�lida!");
            break;
    }

    printf("\n\n");
}